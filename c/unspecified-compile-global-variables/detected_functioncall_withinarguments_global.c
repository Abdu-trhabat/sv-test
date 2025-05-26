#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "detected_functioncall_withinarguments_global.c", 3, "reach_error"); }

int g = 0;

int f1() {
  g = 2*g;
  return 5;
}

int f2() {
  //1. `g++` first reads `g`, and creates a TMP to save the original value.
  //2. `g++` then writes `g = g + 1`.
  //3. return TMP
  g++;
  return 7;
}

int foo(int a) {
  return 1;
}

int main() {
  int c = foo(f1()+f2());
  if (g == 2 || g == 1) {reach_error();abort();}
  return 0;
}