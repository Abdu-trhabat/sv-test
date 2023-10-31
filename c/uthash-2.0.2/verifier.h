#define BOUND 10000
extern int __VERIFIER_nondet_int(void);
extern short __VERIFIER_nondet_short(void);
extern char __VERIFER_nondet_char(void);

void reach_error() {
  assert(0);
}

void __VERIFIER_assert(int cond) {
  if (!cond) {
    reach_error();
  }
}
