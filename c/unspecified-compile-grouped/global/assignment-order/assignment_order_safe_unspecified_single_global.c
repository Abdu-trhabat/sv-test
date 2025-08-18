// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0
#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char*, const char*, unsigned, const char*) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error() { __assert_fail("0", "assignment_order_safe_unspecified_call_vs_global_read1-1.c", 3, "reach_error"); }

int g = 0;
int result = -1;

int* f1() {
  g = 2;
  return &result;
}

int main() {
  // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour and 6.5.16 state that the order in which the operands of an assignment operator are evaluated is not specified
  // - If g is read first (its value is 0), then f1() is called:
  //   *f1() = 0  →  result = 0, g = 2
  //
  // - If f1() is called first (which sets g = 2), then g is read:
  //   *f1() = 2  →  result = 2, g = 2
  *f1() = g;
  if (!(result == 0 || result == 2)) { reach_error(); abort(); }
  return 0;
}
