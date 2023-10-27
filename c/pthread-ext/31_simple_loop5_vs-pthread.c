extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }

#include <pthread.h>

#undef assert
#define assert(e) { if(!(e)) { ERROR: {reach_error();abort();}(void)0; } }

int a = 1;
int b = 2;
int c = 3;
int temp;

pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER;

void* thr2(void* arg) {
  for(;;){
    pthread_mutex_lock(&m);
    temp = a;
    a = b;
    b = c;
    c = temp;
    pthread_mutex_unlock(&m);
  }

  return 0;
}

void* thr1(void* arg) {
  while(1) {
    pthread_mutex_lock(&m);
    assert(a != b);
    pthread_mutex_unlock(&m);
  }

  return 0;
}

int main() {
  pthread_t t;

  pthread_create(&t, 0, thr1, 0);
  while(1) {
    pthread_create(&t, 0, thr2, 0);
  }
}

