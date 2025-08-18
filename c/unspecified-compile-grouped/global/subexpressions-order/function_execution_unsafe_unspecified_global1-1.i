extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "function_execution_unsafe_global1-1.c", 3, "reach_error"); }
int g = 0;
int f1() {
  g = 2 * g;
  return 5;
}
int f2() {
  g++;
  return 7;
}
int h() {
  return f1() + f2();
}
int main() {
  int c = h() + h();
  if (g == 6) {reach_error();abort();}
  return 0;
}
