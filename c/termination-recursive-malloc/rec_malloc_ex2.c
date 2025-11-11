#include <stdlib.h>
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}


extern int __VERIFIER_nondet_int(void);

int rec(int *p, int *up) {
	if(*p < 0) {
		int pv = *p;
		free(p);
		free(up);
		return pv;
	}
	int *upn = safe_malloc(sizeof(int));
	(*p)--;
	return rec(p,upn);
}

int main() {
	int *ip = safe_malloc(sizeof(int)); 
	*ip = __VERIFIER_nondet_int();
	while (*ip > 1) {
		int *op = safe_malloc(sizeof(int));
		*op = *ip;
		(*ip) += rec(op,ip);
	}
}