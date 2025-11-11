extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }


/* Contributed by Kamil Dudka. */

#include <stdlib.h>
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}

#include <string.h>

char a[sizeof(int*)];

void foo(void)
{
   int *p = (int *)safe_malloc(10);
   memcpy(a, &p, sizeof p);
}

int main(void)
{
   foo();
   void *p;
   memcpy(&p, a, sizeof p);
   free(p);
}

