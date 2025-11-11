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

int rec(int *p) {
	if(*p < 0) {
		int pv = *p;
		free(p);
		return pv;
	}
	(*p)--;
	return rec(p);
}

int main() {
	int i = __VERIFIER_nondet_int();
	while (i > 0) {
		int *op = safe_malloc(sizeof(int));
		*op = __VERIFIER_nondet_int();
		i += rec(op);
	}
}