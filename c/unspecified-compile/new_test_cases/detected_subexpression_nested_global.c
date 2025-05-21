#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "detected_subexpression_nested_global.c", 3, "reach_error"); }

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
  // f2() -> f1(f3(g)): c = 7 + f1(f3(1)) = 7 + f1(2) = 9
  // f1(f3(g)) -> f2(): c = f2() + f1(f3(0)) = f2() + f1(1) = 7 + 1 = 8
  int c =  f2() + f1(f3(g));
  if(c != 9 && c != 8) {reach_error();abort();}
  return 0;
}