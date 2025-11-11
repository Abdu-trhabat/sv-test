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

int rec(int *op) {
	if(*op < 0) {
		int r = *op;
		free(op);
		return r;
	}
	int *ip = safe_malloc(sizeof(int));
	
	*ip = (*op) - 1;
	free(op);
	
	return rec(ip);
	
	
}

int main() {
	int *qq = safe_malloc(sizeof(int));
	*qq = __VERIFIER_nondet_int();
	
	while (*qq > 1) {
		int *pp = safe_malloc(sizeof(int));
		*pp = __VERIFIER_nondet_int();
		
		
		*qq += (rec(pp) <= -1 ? -1 : 1);   
	}
	
	free(qq);

}