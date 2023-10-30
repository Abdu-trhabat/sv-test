extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }
extern void __VERIFIER_atomic_begin(void);
extern void __VERIFIER_atomic_end(void);

#include <pthread.h>

#undef assert
#define assert(e) { if(!(e)) { ERROR: {reach_error();abort();}(void)0; } }

volatile unsigned int count = 0; //shared
pthread_mutex_t MTX = PTHREAD_MUTEX_INITIALIZER; //shared mutex
pthread_cond_t COND = PTHREAD_COND_INITIALIZER; //condition variables become flag indicating whether the thread was signaled

void Barrier2() {  
  pthread_mutex_lock(&MTX);
  count++;
  if (count == 3) {
    pthread_cond_broadcast(&COND);
    count = 0; }
  else
    pthread_cond_wait(&COND, &MTX);
  pthread_mutex_unlock(&MTX); }
  
void* thr1(void* arg){
  Barrier2();
  assert(0);

  return 0;
} //should not fail for <3 threads

int main(){
  pthread_t t;

	while(1) { pthread_create(&t, 0, thr1, 0); }
}
