typedef long unsigned int size_t;

void * __attribute__((__cdecl__)) safe_malloc (size_t __size) ;
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}

void __attribute__((__cdecl__)) free (void *) ;

extern int __VERIFIER_nondet_int(void);

void rec(int *op, int i) {
	if(i < 0) {
		(*op)--;
		return;
	}
	int *ip = safe_malloc(sizeof(int));
	*ip = __VERIFIER_nondet_int(); 

	rec(ip,i-1);
	
	free(ip);
	
}

int main() {
	int *pp = safe_malloc(sizeof(int));
	int *qq = safe_malloc(sizeof(int));
	
	*pp = __VERIFIER_nondet_int();
	*qq = __VERIFIER_nondet_int();
	while (*qq > 1) {
		*pp = *qq;
		*qq = -1;
		rec(pp,*pp);
		*qq = *qq + *pp;
	}
	
	free(pp);
	free(qq);

}