// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

void reach_error() {}
extern int __VERIFIER_nondet_int();

typedef union foo {
  int i;
  double d;
} foo_t;

int get_i(foo_t u) { return u.i; }

int main() {
  int x = __VERIFIER_nondet_int();
  // This is a GNC C extension that allows casting a member type of a union to
  // the union type itself:
  // https://gcc.gnu.org/onlinedocs/gcc/Cast-to-Union.html
  foo_t u = (foo_t)x;
  if (x != u.i) {
    reach_error();
    return 1;
  }
  if (get_i(u) != get_i((foo_t)x)) {
    reach_error();
    return 1;
  }
  return 0;
}
