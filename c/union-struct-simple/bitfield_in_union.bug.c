// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

void reach_error() {}
extern unsigned int __VERIFIER_nondet_uint();

typedef union bitfield_in_union_u {
  struct {
    unsigned int a : 5;
    unsigned int b : 3;
  };
  unsigned int c;
} bitfield_in_union_u_t;

int main() {
  bitfield_in_union_u_t u = {.c = __VERIFIER_nondet_uint()};
  if (u.c != u.a) {
    reach_error();
    return 1;
  }
  return 0;
}
