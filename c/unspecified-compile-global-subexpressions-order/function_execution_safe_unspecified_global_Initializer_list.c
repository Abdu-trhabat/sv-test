// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0
#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char*, const char*, unsigned, const char*) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error() { __assert_fail("0", "function_execution_safe_unspecified_global_Initializer_list.c", 3, "reach_error"); }

int g = 0;
int x = 1;

int f() {
  g = 2;        // write g
  return 5;
}

int p() {
  g = 4;        // write g
  return 7;
}

int main() {
  // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour states that the order in which subexpressions are evaluated is not specified (with some exceptions, + not being one)
  int arr[1] = { (f() + x) + p() };

  // Depending on whether f() or g() is evaluated first,
  // the final value of g may be 2 or 4.
  if (g != 2 && g != 4) { reach_error(); abort(); }
  return 0;
}
