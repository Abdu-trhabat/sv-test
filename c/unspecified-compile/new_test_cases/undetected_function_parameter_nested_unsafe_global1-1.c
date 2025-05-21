#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "undetected_function_parameter_nested_unsafe_global1-1.c", 3, "reach_error"); }

int g = 0;

int f1() {
  g = 2*g;
  return 5;
}

int f2() {
  g++;
  return 7;
}

int foo(int a, int b) {
  return 1;
}

int main() {
  int a = f1();  // first call, g is 0
  int b = f2();  // second call, g is 1
  int c = foo(a, b);  // no more unsequenced call
  if (g != 1) {reach_error();abort();}
  return 0;
}
