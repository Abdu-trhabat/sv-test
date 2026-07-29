/*
 * Date: 2012-06-03
 * Author: heizmann@informatik.uni-freiburg.de
 *
 * 2-lex ranking function: f(p, q, *q) = (p + 1048 - q, *q)
 *
 */
 typedef long unsigned int size_t;
extern void abort(void);
extern void *malloc(size_t size);
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}


void * __attribute__((__cdecl__)) safe_malloc (size_t __size) ;
extern void free(void *);

extern int __VERIFIER_nondet_int(void);

int main() {
	int *p = safe_malloc(1048 * sizeof(int));
  int *q = p;
  for (int i = 0; i < 1048; i++) {
    *(q+i) = __VERIFIER_nondet_int();
  }
	q = p;
	while (q < p + 1048 && *q >= 0) {
		if (__VERIFIER_nondet_int()) {
			q++;
		} else {
			(*q)--;
		}
	}
	free(p);
	return 0;
}
