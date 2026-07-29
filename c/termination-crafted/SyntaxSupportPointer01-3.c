/*
 * Date: 2012-06-03
 * Author: heizmann@informatik.uni-freiburg.de
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
void free (void *__ptr);

extern int __VERIFIER_nondet_int(void);

int main() {
	int *p = safe_malloc(sizeof(int));
	while (*p >= 0) {
		(*p)--;
	}
	free(p);
	return 0;
}
