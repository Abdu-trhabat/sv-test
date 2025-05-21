#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "undetected_subexpression_nested_global.c", 3, "reach_error"); }

int g = 0;

int f1(int a) {
  return a;
}

int f2() {
  g++;
  return 7;
}

int f3(int a) {
  f2();
  return g;
}

int main() {
  int x = f2();
  int y = f1(f3(g));
  int c = x + y;//no unsequenced side effects
  if(c != 9){reach_error();abort();}
  return 0;
}


