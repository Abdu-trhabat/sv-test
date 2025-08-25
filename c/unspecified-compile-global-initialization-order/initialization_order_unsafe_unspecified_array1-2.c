// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0
#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error() { __assert_fail("0", "initialization_order_unsafe_unspecified_array1-2.c", 3, "reach_error"); }

int g = 0;

int f1() {
  g = 1;
  return 10;
}

int f2() {
  g = 2;
  return 20;
}

int main() {
  // C11 §6.5.2.5: The order of side effects among compound literal initialization list expressions.”
  // Unspecified evaluation order: f1() and f2() both write to global g
  int arr[2] = {f1(), f2()};  // Evaluation order not specified

  if (g == 2) {
    reach_error();
    abort();
  }

  return 0;
}
