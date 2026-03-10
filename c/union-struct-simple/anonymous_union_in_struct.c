// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

void reach_error() {}

typedef struct union_in_struct_s {
  union {
    char a;
    short b;
  };
  int c;
} union_in_struct_t;

int main() {
  union_in_struct_t s = {.a = 1, .c = 3};
  s.b = 2;
  if (s.a == 2) {
    reach_error();
    return 1;
  }
  return 0;
}
