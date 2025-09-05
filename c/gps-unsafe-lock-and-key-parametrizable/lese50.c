extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "lese50.c", 3, "reach_error"); }
extern int __VERIFIER_nondet_int(void);

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}


int main() {
  int N = __VERIFIER_nondet_int();
   int i = 0, max = 0;
  while(i<N){i++;max++;}
  if (max<50) {
    return 0;
  } else __VERIFIER_assert(0);
 
  return 0;
}

