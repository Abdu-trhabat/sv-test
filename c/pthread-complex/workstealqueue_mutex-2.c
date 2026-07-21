/********************************************************
*                                                       *
*     Copyright (C) Microsoft. All rights reserved.     *
*                                                       *
********************************************************/

#include <assert.h>
#include <pthread.h>
#include <stdatomic.h>
#include <stdbool.h>

extern void abort(void);
void reach_error() { assert(0); }

enum {
    STATICSIZE    = 16,
    INITQSIZE     = 2, // must be power of 2
    ITEMS         = 4,
    STEALERS      = 2,
    STEAL_ATTEMPS = 1
};

typedef struct Obj {
    int field;
} Obj;

//
// A WorkStealQueue is a wait-free, lock-free structure associated with a single
// thread that can Push and Pop elements. Other threads can do Take operations
// on the other end of the WorkStealQueue with little contention.
// </summary>
//
typedef struct WorkStealQueue {
    // A 'WorkStealQueue' always runs its code in a single OS thread. We call this the
    // 'bound' thread. Only the code in the Take operation can be executed by
    // other 'foreign' threads that try to steal work.
    //
    // The queue is implemented as an array. The head and tail index this
    // array. To avoid copying elements, the head and tail index the array modulo
    // the size of the array. By making this a power of two, we can use a cheap
    // bit-and operation to take the modulus. The "mask" is always equal to the
    // size of the task array minus one (where the size is a power of two).
    //
    // The head and tail are volatile as they can be updated from different OS threads.
    // The "head" is only updated by foreign threads as they Take (steal) a task from
    // this queue. By putting a lock in Take, there is at most one foreign thread
    // changing head at a time. The tail is only updated by the bound thread.
    //
    // invariants:
    //   tasks.length is a power of 2
    //   mask == tasks.length-1
    //   head is only written to by foreign threads
    //   tail is only written to by the bound thread
    //   At most one foreign thread can do a Take
    //   All methods except Take are executed from a single bound thread
    //   tail points to the first unused location
    //
    pthread_mutex_t cs;

    long MaxSize;
    long InitialSize; // must be a power of 2

    atomic_long head;  // only updated by Take
    atomic_long tail;  // only updated by Push and Pop

    Obj*  elems[STATICSIZE];         // the array of tasks
    long mask;           // the mask for taking modulus

} WorkStealQueue;


WorkStealQueue q;

void Init_WorkStealQueue(long size) {
    q.MaxSize = 1024 * 1024;
    q.InitialSize = 1024;
    pthread_mutex_init(&q.cs, NULL);
    atomic_store(&q.head, 0);
    q.mask = size - 1;
    atomic_store(&q.tail, 0);
    // q.elems = malloc(size * sizeof(Obj*));
}

void Destroy_WorkStealQueue() {}

// Push/Pop and Steal can be executed interleaved. In particular:
// 1) A take and pop should be careful when there is just one element
//    in the queue. This is done by first incrementing the head/decrementing the tail
//    and than checking if it interleaved (head > tail).
// 2) A push and take can interleave in the sense that a push can overwrite the
//    value that is just taken. To account for this, we check conservatively in
//    the push to assume that the size is one less than it actually is.
//
// See the CILK "THE" protocol for more information:
//   "The implementation of the CILK-5 multi-threaded language"
//   Matteo Frigo, Charles Leiserson, and Keith Randall.
//

bool Steal(Obj **result) {
    bool found;
    pthread_mutex_lock(&q.cs);

    // ensure that at most one (foreign) thread writes to head
    // increment the head. Save in local h for efficiency
    //
    long h = atomic_load(&q.head);
    atomic_store(&q.head, h + 1);

    // insert a memory fence here if memory is not sequentially consistent
    //
    if ((found = h < atomic_load(&q.tail))) {
        // == (h+1 <= tail) == (head <= tail)
        //
        // BUG: atomic_store(&q.head, h + 1);
        long temp = h & q.mask;
        *result = q.elems[temp];
    } else {
        // failure: either empty or single element interleaving with pop
        //
        atomic_store(&q.head, h);              // restore the head
    }
    pthread_mutex_unlock(&q.cs);
    return found;
}

bool SyncPop(Obj **result) {
    bool found;

    pthread_mutex_lock(&q.cs);

    // ensure that no Steal interleaves with this pop
    //
    long t = atomic_load(&q.tail) - 1;
    atomic_store(&q.tail, t);
    if ((found = atomic_load(&q.head) <= t)) {
        // == (head <= tail)
        //
        long temp = t & q.mask;
        *result = q.elems[temp];
    } else {
        atomic_store(&q.tail, t + 1);       // restore tail
    }
    if (atomic_load(&q.head) > t) {
        // queue is empty: reset head and tail
        //
        atomic_store(&q.head, 0);
        atomic_store(&q.tail, 0);
        found = 0;
    }
    pthread_mutex_unlock(&q.cs);
    return found;
}

bool Pop(Obj **result) {
    // decrement the tail. Use local t for efficiency.
    //
    long t = atomic_load(&q.tail) - 1;
    atomic_store(&q.tail, t);

    // insert a memory fence here if memory is not sequentially consistent
    //
    if (atomic_load(&q.head) <= t) {
        // BUG:  atomic_store(&q.tail, t);

        // == (head <= tail)
        //
        long temp = t & q.mask;
        *result = q.elems[temp];
        return true;
    } else {
        // failure: either empty or single element interleaving with take
        //
        atomic_store(&q.tail, t + 1);             // restore the tail
        return SyncPop(result);   // do a single-threaded pop
    }
}

void SyncPush(Obj* elem) {
    pthread_mutex_lock(&q.cs);
    // ensure that no Steal interleaves here
    // cache head, and calculate number of tasks
    //
    long h = atomic_load(&q.head);
    long count = atomic_load(&q.tail) - h;

    // normalize indices
    //
    h = h & q.mask;           // normalize head
    atomic_store(&q.head, h);
    atomic_store(&q.tail, h + count);

    // check if we need to enlarge the tasks
    //
    if (count >= q.mask) {
        // == (count >= size-1)
        //
        long newsize = (q.mask == 0 ? q.InitialSize : 2 * (q.mask + 1));

        if(!(newsize < q.MaxSize)) {
            reach_error();
        }

        Obj *newtasks[STATICSIZE];
        long i;
        for (i = 0; i < count; i++) {
            long temp = (h + i) & q.mask;
            newtasks[i] = q.elems[temp];
        }
        for (i = 0; i < newsize; i++) {
            q.elems[i] = newtasks[i];
        }
        // q.elems = newtasks;
        q.mask = newsize - 1;
        atomic_store(&q.head, 0);
        atomic_store(&q.tail, count);
    }

    if(!(count < q.mask)) {
        reach_error();
    }

    // push the element
    //
    long t = atomic_load(&q.tail);
    long temp = t & q.mask;
    q.elems[temp] = elem;
    atomic_store(&q.tail, t + 1);
    pthread_mutex_unlock(&q.cs);
}


void Push(Obj* elem) {
    long t = atomic_load(&q.tail);
    // Careful here since we might interleave with Steal.
    // This is no problem since we just conservatively check if there is
    // enough space left (t < head + size). However, Steal might just have
    // incremented head and we could potentially overwrite the old head
    // entry, so we always leave at least one extra 'buffer' element and
    // check (tail < head + size - 1). This also plays nicely with our
    // initial mask of 0, where size is 2^0 == 1, but the tasks array is
    // still null.
    //
    // Correct: if (t < atomic_load(&q.head) + mask && t < MaxSize)
#ifdef BUG3
    if (t < atomic_load(&q.head) + q.mask + 1 && t < q.MaxSize)
#else
    if (t < atomic_load(&q.head) + q.mask   // == t < head + size - 1
            && t < q.MaxSize)
#endif
    {
        long temp = t & q.mask;
        q.elems[temp] = elem;
        atomic_store(&q.tail, t + 1);       // only increment once we have initialized the task entry.
    } else {
        // failure: we need to resize or re-index
        //
        SyncPush(elem);
    }
}

void *Stealer(void *param) {
    int i;
    Obj *r;
    for (i = 0; i < STEAL_ATTEMPS; i++) {
        if (Steal(&r)) {
            r->field++;
        }
    }
    return 0;
}

Obj items[ITEMS];

int main(void) {
    int i;
    pthread_t handles[STEALERS];

    Init_WorkStealQueue(INITQSIZE);

    for (i = 0; i < ITEMS; i++) {
        items[i].field = 0;
    }

    for (i = 0; i < STEALERS; i++) {
        pthread_create(&handles[i], NULL, Stealer, 0);
    }

    for (i = 0; i < ITEMS / 2; i++) {
        Push(&items[2 * i]);
        Push(&items[2 * i + 1]);
        Obj *r;
        if (Pop(&r)) {
            r->field++;
        }
    }

    for (i = 0; i < ITEMS / 2; i++) {
        Obj *r;
        if (Pop(&r)) {
            r->field++;
        }
    }

    for (i = 0; i < STEALERS; i++) {
        pthread_join(handles[i], NULL);
    }

    for (i = 0; i < ITEMS; i++) {
        if(items[i].field != 1) {
            reach_error();
        }
    }

    return 0;
}

