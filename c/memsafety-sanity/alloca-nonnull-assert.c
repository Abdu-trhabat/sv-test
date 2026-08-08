// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Simmo Saan
//
// SPDX-License-Identifier: MIT

#include <stdlib.h>
#include <alloca.h>
#include <assert.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }

int main() {
  int *p = alloca(sizeof(int));
  __VERIFIER_assert(p != NULL);
  return 0;
}
