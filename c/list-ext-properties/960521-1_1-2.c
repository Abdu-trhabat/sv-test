extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }

#include <stdlib.h>
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}


int *a, *b;
int n;

extern int __VERIFIER_nondet_int(void);

void foo()
{
  int i;
  for (i = 0; i < n; i++)
    a[i] = n;
  for (i = 0; i < n - 1; i++)
    b[i] = n;
}

int main()
{
  n = 1;

  while(__VERIFIER_nondet_int() && n < 30) {
    n++;
  }

  a = safe_malloc (n * sizeof(*a));
  b = safe_malloc (n * sizeof(*b));

  *b++ = n;
  foo ();

  if (b[-1] - b[n - 2])
  { free(a); free(b); } /* invalid, but branch not accessible */
  else
  { free(a); free(b-1); }
  return 0;
}
