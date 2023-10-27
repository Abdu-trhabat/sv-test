extern void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }
extern void __VERIFIER_atomic_begin(void);
extern void __VERIFIER_atomic_end(void);

#include <pthread.h>

#define assume(e) assume_abort_if_not(e)
#undef assert
#define assert(e) { if(!(e)) { ERROR: {reach_error();abort();}(void)0; } }

volatile unsigned int count = 0; //shared
pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;
_Bool COND = 0; //condition variables become flag indicating whether the thread was signaled


#define cnd_wait(c,m){ \
  pthread_mutex_unlock(&mtx); \
  __VERIFIER_atomic_begin(); \
  assume(c); \
  __VERIFIER_atomic_end(); \
  __VERIFIER_atomic_begin(); \
  c = 0; \
  __VERIFIER_atomic_end(); \
  pthread_mutex_lock(&mtx); }

#define cnd_broadcast(c){ \
  __VERIFIER_atomic_begin(); \
  (c = 1); \
  __VERIFIER_atomic_end(); \
  } //BP must be post-processed manually by changing "b*_COND := 1" to "b*_COND$ := 1"

void Barrier2() {  
  pthread_mutex_lock(&mtx);
  count++;
  if (count == 3) {
    cnd_broadcast(COND); //pthread_cond_broadcast(&cond);
    count = 0; }
  else
    cnd_wait(COND,MTX); //pthread_cond_wait(&cond, &m);
  pthread_mutex_unlock(&mtx); }
  
void* thr1(void* arg){
  Barrier2();
  assert(0);

  return 0;
} //should not fail for <3 threads

int main(){
  pthread_t t;

	while(1) { pthread_create(&t, 0, thr1, 0); }
}
