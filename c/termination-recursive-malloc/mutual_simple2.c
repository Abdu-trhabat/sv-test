#include <stdlib.h>
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}


extern int __VERIFIER_nondet_int(void);

void f( int *q, int *r) ;
void g(int *p, int *s);


void f( int *q, int *r) {
	free(r);
	if(*q < 0) {
		return;
	}
	
	int *s  = safe_malloc(sizeof(int));
	
	(*q)--;
	g(q,s);
}


void g(int *p, int *s) {
	free(s);
	if(*p < 0)
		return;
	
	
	int *r = safe_malloc(sizeof(int));
	
	f(p,r);
}


int main() {
	int *p1  = safe_malloc(sizeof(int));
	int *p2  = safe_malloc(sizeof(int));
	
	*p1 = __VERIFIER_nondet_int();

	
	f(p1,p2);
	
	free(p1);
	
	
}