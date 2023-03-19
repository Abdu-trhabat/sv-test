#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "assignment_order_unsafe2-1.c", 3, "reach_error"); }


int* f1(int * g) {
  *g = 3;
  return malloc(sizeof(int));
}

int f2(int * g) {
  *g = 5;
  return 7;
}

int main() {
  int * g = malloc(sizeof(int));
  // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour and 6.5.16 state that the order in which the operands of an assignment operator are evaluated is not specified 
  *f1(g) = f2(g);
  // g is either 3 or 5, depending on which function is evaluated last
  if (*g == 3) {reach_error();abort();}
  return 0;
}