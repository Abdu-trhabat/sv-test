// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0
#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char*, const char*, unsigned, const char*) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error() { __assert_fail("0", "assignment_order_safe_specified_global_mixed.c", 3, "reach_error"); }

int g = 0;

int* f1() {
  g = 2;
  return malloc(sizeof(int));
}

int f2() {
  g = 4;
  return 7;
}

int main() {
  // Specified order:
  // 1) Read g
  int t = g;
  // 2) Call f2() (may write g); compute RHS using the previously read t
  int rhs_val = f2() + t;
  // 3) Call f1() (writes g=2), then assign
  int *lhs_ptr = f1();
  *lhs_ptr = rhs_val;

  // With this fixed order, the final value of g must be 2.
  if (g != 2) { reach_error(); abort(); }
  return 0;
}
