// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Simmo Saan
//
// SPDX-License-Identifier: MIT

#include <stdlib.h>

int main() {
  int *p = malloc(sizeof(int));
  if (p != NULL) {
    p = realloc(p, sizeof(int));
    *p = 0;
    free(p);
  }
  return 0;
}
