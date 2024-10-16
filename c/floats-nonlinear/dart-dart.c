// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2024 Lei Bu
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern int __VERIFIER_nondet_int();
extern void __assert_fail(const char *, const char *, unsigned int,
                          const char *) __attribute__((__nothrow__, __leaf__))
__attribute__((__noreturn__));
void reach_error() { __assert_fail("0", "dart-dart.c", 3, "reach_error"); }

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
  ERROR: {
    reach_error();
    abort();
  }
  }
  return;
}

int main() {
  int x, y;
  x = __VERIFIER_nondet_int();
  y = x * x * x;
  __VERIFIER_assert((x >= 0 && y >= 0) || (x <= 0 && y <= 0));
  return 0;
}
