#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "pointer_larger_pointer_unsafe-2", 3, "reach_error"); }

int main() {
  int* ptr0,ptr1,ptr2;

  // C11 ISO/IEC 9899:201x 7.22.3 states that: the order and contiguity of storage allocated by successive calls to the ..., malloc, ... functions is unspecified.
  ptr0 = (int*) malloc(4096); 
  ptr1 = (int*) malloc(10);
  free(ptr0);
  ptr2 = (int*) malloc(4096);   
  if (ptr1 > ptr2) {reach_error();abort();}
  return 0;
}