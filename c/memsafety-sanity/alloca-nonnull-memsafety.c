// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Simmo Saan
//
// SPDX-License-Identifier: MIT

#include <alloca.h>

int main() {
  int *p = alloca(sizeof(int));
  *p = 0;
  return 0;
}
