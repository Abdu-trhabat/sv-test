extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
void *malloc(unsigned int size);
void *safe_malloc(unsigned int size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}

#define SIZE 1000000
#define NULL 0
int *a[SIZE];
int i;
int main()
{
	for(i = 0; i < SIZE; i++)
	{
		a[i] = NULL;
	}

	for(i = 0; i < SIZE / 2; i++)
	{
		a[i] = safe_malloc(sizeof(int)) ;
	}


	for(i = 0; i < SIZE / 2; i++)
	{
		__VERIFIER_assert(a[i] != NULL);
	}
	return 0;
}	

