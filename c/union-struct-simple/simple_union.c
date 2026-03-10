// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

void reach_error() {}
extern int __VERIFIER_nondet_int();

typedef union same_type_u {
  unsigned int a;
  unsigned int b;
} same_type_u_t;

typedef union diff_type_u {
  int a;
  unsigned int b;
} diff_type_u_t;

int main() {
  same_type_u_t u = {.a = __VERIFIER_nondet_int()};
  if (u.a != u.b) {
    reach_error();
    return 1;
  }
  diff_type_u_t v = {.a = -1};
  unsigned int c = __VERIFIER_nondet_int();
  if (v.b < c) {
    reach_error();
    return 1;
  }
  return 0;
}
