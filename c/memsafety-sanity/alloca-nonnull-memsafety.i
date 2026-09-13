// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Simmo Saan
//
// SPDX-License-Identifier: MIT

typedef long unsigned int size_t;

extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));

int main() {
  int *p = __builtin_alloca (sizeof(int));
  *p = 0;
  return 0;
}
