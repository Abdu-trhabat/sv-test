typedef long unsigned int size_t;

void * __attribute__((__cdecl__)) malloc (size_t __size) ;
void __attribute__((__cdecl__)) free (void *) ;

extern void abort(void);
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}

extern int __VERIFIER_nondet_int(void);

void f(int *p, int *q);
void g(int *p, int *q);


void f(int *p, int *q) {
	if(*p + *q < 0)
		return;
	
	
	int *np = safe_malloc(sizeof(int));
	
	*np = *p - 1;
	
	free(p);
	
	g(q,np);
	


}


void g(int *p, int *q) {
	if(*p + *q < 0)
		return;
	
	int *qp = safe_malloc(sizeof(int));
	
	*qp = *q - 1;
	
	g(q,p);


}


int main() {
	
	int *p1  = safe_malloc(sizeof(int));
	int *p2  = safe_malloc(sizeof(int));
	
	*p1 = __VERIFIER_nondet_int();
	*p2 = __VERIFIER_nondet_int();
	
	f(p1,p2);
	
	
}