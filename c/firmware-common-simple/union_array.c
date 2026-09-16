// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

void reach_error() {}

typedef union u {
  unsigned i[2];
  long long j;
} u_t;

int main() {
  u_t x = {.i = {1, 0}};
  if (x.j != 1) {
    reach_error();
    return 1;
  }
  return 0;
}