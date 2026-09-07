#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdatomic.h>
#include <assert.h>

extern void abort(void);
extern int __VERIFIER_nondet_int(void);

void reach_error() { assert(0); }
void assert_fail_if_not(int condition) {
    if (!condition) {
        reach_error();
        abort();
    }
}
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

typedef struct Cell Cell;
struct Cell {
    Cell *pnext;
    int pdata;
};
typedef struct ThreadInfo ThreadInfo;
struct ThreadInfo {
    unsigned int id;
    int op;
    Cell cell;
};
typedef struct Simple_Stack Simple_Stack;
struct Simple_Stack {
    _Atomic(Cell*) ptop;
};
Simple_Stack S;
_Atomic(ThreadInfo*) location[8];
atomic_int collision;

int unique_id = 0;

void StackOp(ThreadInfo *p);
int TryPerformStackOp(ThreadInfo *p);
int TryCollision(ThreadInfo * p, ThreadInfo * q, int him);
void FinishCollision(ThreadInfo * p);

int non_atomic_compare_exchange_strong(_Atomic(ThreadInfo*) *p, ThreadInfo* cmp, ThreadInfo* new) {
    if (*p == cmp) {
        *p = new;
        return 1;
    } else {
        return 0;
    }
}

ThreadInfo threads[4];
atomic_int allocated[4];

ThreadInfo* malloc_ThreadInfo() {
    int i = __VERIFIER_nondet_int();
    assume_abort_if_not(0 <= i && i < 4);
    int already_allocated = atomic_fetch_add(&allocated[i], 1);
    assume_abort_if_not(!already_allocated);
    return &threads[i];
}

void free_ThreadInfo(ThreadInfo* ti) {
    pthread_mutex_lock(&mutex);
    int i = __VERIFIER_nondet_int();
    assume_abort_if_not(0 <= i && i < 4);
    assume_abort_if_not(&threads[i] == ti);
    allocated[i] = 0;
    pthread_mutex_unlock(&mutex);
}

void LesOP(ThreadInfo *p) {
    int mypid = p->id;
    location[mypid] = p;
    int him = collision;
    assume_abort_if_not(atomic_compare_exchange_strong(&collision, &him, mypid));
    if (him > 0) {
        ThreadInfo* q = location[him];
        if (q != NULL && q->id == him && q->op != p->op) {
            if (atomic_compare_exchange_strong(&location[mypid], &p, NULL)) {
                if (TryCollision(p, q, him) == 1) {
                    return;
                } else {
                    goto stack;
                }
            } else {
                FinishCollision(p);
                return;
            }
        }
    }
    if (!atomic_compare_exchange_strong(&location[mypid], &p, NULL)) {
        FinishCollision(p);
        return;
    }
stack:
    if (TryPerformStackOp(p) == 1) {
        return;
    }
}

int TryPerformStackOp(ThreadInfo * p) {
    Cell *phead, *pnext;
    if (p->op == 1) {
        phead = S.ptop;
        p->cell.pnext = phead;
        return atomic_compare_exchange_strong(&S.ptop, &phead, &p->cell);
    }
    if (p->op == 0) {
        phead = S.ptop;
        if (phead == NULL) {
            p->cell.pnext = 0;
            p->cell.pdata = 2;
            return 1;
        }
        pnext = phead->pnext;
        if (atomic_compare_exchange_strong(&S.ptop, &phead, pnext)) {
            p->cell = *phead;
            pthread_mutex_lock(&mutex);
            int i = __VERIFIER_nondet_int();
            assume_abort_if_not(0 <= i && i < 4);
            assume_abort_if_not(&threads[i].cell == phead);
            allocated[i] = 0;
            pthread_mutex_unlock(&mutex);
            return 1;
        } else {
            p->cell.pnext = 0;
            p->cell.pdata = 2;
            return 0;
        }
    }
    return 0;
}

void FinishCollision(ThreadInfo * p) {
    pthread_mutex_lock(&mutex);
    if (p->op == 0) {
        int mypid = p->id;
        p->cell = location[mypid]->cell;
        location[mypid] = NULL;
    }
    pthread_mutex_unlock(&mutex);
}

int TryCollision(ThreadInfo * p, ThreadInfo * q, int him) {
    int ret = 0;
    pthread_mutex_lock(&mutex);
    int mypid = p->id;
    if (p->op == 1) {
        ret = non_atomic_compare_exchange_strong(&location[him], q, p);
    }
    if (p->op == 0) {
        if ((ret = non_atomic_compare_exchange_strong(&location[him], q, NULL))) {
            p->cell = q->cell;
            location[mypid] = NULL;
        }
    }
    pthread_mutex_unlock(&mutex);
    return ret;
}

void Init() {
    S.ptop = NULL;
}

void Push(int x) {
    ThreadInfo *ti = malloc_ThreadInfo();
    ti->id = ++unique_id; // RACE!
    ti->op = 1;
    ti->cell.pdata = x;
    if (TryPerformStackOp(ti) == 0) {
        LesOP(ti);
    }
}

int Pop() {
    ThreadInfo *ti = malloc_ThreadInfo();
    ti->id = ++unique_id; // RACE!
    ti->op = 0;
    if (TryPerformStackOp(ti) == 0) {
        LesOP(ti);
    }
    int v = ti->cell.pdata;
    free_ThreadInfo(ti);
    return v;
}

atomic_int PushOpen[2];
int PushDone[2];
atomic_int PopOpen;
int PopDone[3];

void checkInvariant() {
    assert_fail_if_not(PopDone[0] <= PushDone[0] + PushOpen[0] && PopDone[1] <= PushDone[1] + PushOpen[1]);
}

void DecrIncr_Push(int localPush1) {
    pthread_mutex_lock(&mutex);
    PushOpen[localPush1]--;
    PushDone[localPush1]++;
    checkInvariant();
    pthread_mutex_unlock(&mutex);
}

void DecrIncr_Pop(int localPop_ret) {
    pthread_mutex_lock(&mutex);
    PopOpen--;
    PopDone[localPop_ret]++;
    checkInvariant();
    pthread_mutex_unlock(&mutex);
}

void* instrPush(void* unused) {
    atomic_fetch_add(&PushOpen[1], 1);
    Push(1);
    DecrIncr_Push(1);
    return NULL;
}

void* instrPop(void* unused) {
    atomic_fetch_add(&PopOpen, 1);
    int localPop_ret = Pop();
    DecrIncr_Pop(localPop_ret);
    return NULL;
}

int main(void) {
    Init();

    pthread_t tid1, tid2, tid3, tid4, tid5, tid6, tid7;

    pthread_create(&tid1, NULL, &instrPush, NULL);
    pthread_create(&tid2, NULL, &instrPush, NULL);
    pthread_create(&tid3, NULL, &instrPush, NULL);

    pthread_create(&tid4, NULL, &instrPop, NULL);
    pthread_create(&tid5, NULL, &instrPop, NULL);
    pthread_create(&tid6, NULL, &instrPop, NULL);
    pthread_create(&tid7, NULL, &instrPop, NULL);
    return 0;
}
