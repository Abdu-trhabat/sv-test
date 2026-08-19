#include <stdlib.h>
void *safe_malloc_or_loop(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    while (1) { }
  }
  return p;
}


extern _Bool __VERIFIER_nondet_bool();

/* simple regression test for atexit */

int **g = NULL;

void free_g1() {
	free(g);
	g = NULL;
}

void free_g2() {
	if (g != NULL)
		free(*g);
}

void h() {
	if (__VERIFIER_nondet_bool()) exit(1); // memory leak, but still reachable
}

void f() {
	*g = (int *) safe_malloc_or_loop(sizeof(int));
	atexit(free_g2);
	h();
}


int main() {
	g = (int **) safe_malloc_or_loop(sizeof(int *));
// 	atexit(free_g1);
 	if (__VERIFIER_nondet_bool()) exit(1);
	f();
	free(*g);
	free(g);
	g = NULL;
	return 0;
}
