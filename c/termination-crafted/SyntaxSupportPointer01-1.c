/*
 * Date: 2012-06-03
 * Author: heizmann@informatik.uni-freiburg.de
 *
 */
typedef long unsigned int size_t;

void * __attribute__((__cdecl__)) malloc (size_t __size) ;
extern void free(void *);

extern void abort(void);
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}

extern int __VERIFIER_nondet_int(void);

int main() {
	int *p = safe_malloc(sizeof(int));
  *p = __VERIFIER_nondet_int();
	while (*p >= 0) {
		(*p)--;
	}
	free(p);
	return 0;
}
