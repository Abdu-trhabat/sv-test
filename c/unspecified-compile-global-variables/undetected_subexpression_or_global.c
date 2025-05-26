#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "undetected_subexpression_or_global.c", 3, "reach_error"); }

int g = 0;

int f1() {
  g = 1;
  return 0;
}

int f2() {
  g = 2;
  return 0;
}
int main() {
  f1() || f2();
  if(g != 2){reach_error();abort();}
  return 0;
}