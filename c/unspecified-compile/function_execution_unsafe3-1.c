extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "function_execution_unsafe3-1.c", 3, "reach_error"); }

int g = 0;

int f1() {
  g = 3;
  return 5;
}

int f2() {
  g = 5;
  return 7;
}

int foo(int a, int b) {
  return 1;
}

int main() {
  // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour states that the order in which subexpressions are evaluated is not specified (with some exceptions, + not being one)
  int c = f1() + f2();
  // Depending on the evaluation ordering of f2 and f1, g can be 3 or 5
  if (g == 3) {reach_error();abort();}
  return 0;
}