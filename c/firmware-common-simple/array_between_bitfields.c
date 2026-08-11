// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

void reach_error() {}

typedef struct {
  unsigned int a : 1;
  char b[13];
  unsigned int c : 2;
  unsigned int d : 3;
} s_t;

int main() {
  s_t s;
  s.a = 1;
  s.c = 15;
  s.d = 10;
  if (s.d != 2) {
    reach_error();
    return 1;
  }

  return 0;
}