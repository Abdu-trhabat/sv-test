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
void reach_error() {
  __assert_fail("0", "color-magicseries1.c", 3, "reach_error");
}

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
  ERROR: {
    reach_error();
    abort();
  }
  }
  return;
}

int check_domain(int x) {
  if (x >= 0 && x <= 4) return 1;
  return 0;
}

int check_sum(int s0, int s1, int s2, int s3) {
  int s[4] = {s0, s1, s2, s3};
  for (int i = 0; i < 4; i++) {
    int sum = 0;
    for (int j = 0; j < 4; j++)
      if (s[j] == i) sum++;
    if (sum != s[i]) return 0;
  }
  return 1;
}

int solve(int s0, int s1, int s2, int s3) {
  if (check_domain(s0) && check_domain(s1) && check_domain(s2) &&
      check_domain(s3)) {
    if (check_sum(s0, s1, s2, s3))
      return 1;
    else
      return 0;
  }
}

int main() {
  int x, y, z, w;
  x = __VERIFIER_nondet_int();
  y = __VERIFIER_nondet_int();
  z = __VERIFIER_nondet_int();
  w = __VERIFIER_nondet_int();
  __VERIFIER_assert(!solve(x, y, z, w));
  return 0;
}
