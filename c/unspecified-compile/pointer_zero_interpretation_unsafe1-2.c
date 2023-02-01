#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "pointer_zero_interpretation_unsafe1-2.c", 3, "reach_error"); }

int main() {
  int* ptr = (int*) malloc(0);
  // malloc(0) either returns 0, or non-zero.
  if (ptr == 0) {reach_error();abort();}
	// since ptr is a result of malloc(0), the pointer may never be accessed to retrieve memory!
  int smth = *ptr;
  return 0;
}