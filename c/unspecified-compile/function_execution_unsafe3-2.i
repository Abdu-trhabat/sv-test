extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "function_execution_unsafe3-2.c", 3, "reach_error"); }
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
  int c = f2() + f1();
  if (g == 3) {reach_error();abort();}
  return 0;
}
