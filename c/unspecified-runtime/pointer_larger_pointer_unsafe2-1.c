#include <stdlib.h>
#include <stdint.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "pointer_larger_pointer_unsafe2-1", 3, "reach_error"); }

int main() {
  int* ptr1;
  int* ptr2;

  // C11 ISO/IEC 9899:201x 7.22.3 states that: the order and contiguity of storage allocated by successive calls to the ..., malloc, ... functions is unspecified.
  ptr1 = malloc(10);
  ptr2 = malloc(4096);   
  if ((uintptr_t) ptr1 > (uintptr_t) ptr2) {reach_error();abort();}
  return 0;
}