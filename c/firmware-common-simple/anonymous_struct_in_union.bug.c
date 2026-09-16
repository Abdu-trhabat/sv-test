// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

void reach_error() {}
extern unsigned int __VERIFIER_nondet_uint();

typedef union struct_in_union_u {
  struct {
    unsigned char a;
    unsigned short b;
  };
  unsigned int c;
} struct_in_union_t;

int main() {
  struct_in_union_t u = {.c = __VERIFIER_nondet_uint()};
  if (u.c != u.a) {
    reach_error();
    return 1;
  }
  return 0;
}
