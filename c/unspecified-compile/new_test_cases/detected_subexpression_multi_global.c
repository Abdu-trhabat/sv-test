#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "detected_subexpression_multi_global.c", 3, "reach_error"); }

int x = 0;
int y = 0;

int f() {
  x=1;
  y=2;
  return x;
}

int g() {
  y=3;
  return x;
}

int main() {
  // f() -> x -> g(): r = 0 + 1 + 1 = 2
  // x -> f() -> g(): r = 1 + 1 + 1 = 3
  // g() -> f() -> x: r = 0 + 1 + 1 = 2
  // g() -> x -> f(): r = 0 + 0 + 1 = 1
  int r = (f() + x) + g();
  if(r != 1 && r != 2 && r!= 3){reach_error();abort();}
  return 0;
}