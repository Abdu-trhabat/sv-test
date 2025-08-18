// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char*, const char*, unsigned, const char*) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error() { __assert_fail("0", "assignment_order_safe_unspecified_deref_call_vs_deref_call1-1.c", 3, "reach_error"); }

int g = 0;

int* f1() {
  g = 2;
  return malloc(sizeof(int));
}

int* f2() {
  g = 4;
  int *p = malloc(sizeof(int));
  *p = 7;
  return p;
}

int main() {
  int *rhs = f2();            // g == 4
  int *lhs = f1();            // g == 2
  *lhs = *rhs;

  // Because the order is fixed, the final value of g must be 2.
  if (g != 2) { reach_error(); abort(); }
  return 0;
}