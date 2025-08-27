// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *)
  __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));

void reach_error() {
  __assert_fail("0", "assignment_order_safe_specified_pointer_int.c", 3, "reach_error");
}

int* f1(int* p1) {
  *p1 = 3;
  return malloc(sizeof(int));
}

int f2(int* p2) {
  *p2 = 5;
  return 7;
}

int f3(int** p3) {
  int g;             // Local variable, lifetime ends when f3 returns
  *p3 = &g;
  return f2(*p3);    // writes to local g through p2
}

int main(void) {
  int g;
  int* a = &g;
  int* b = &g;
  g = 0;

  *f1(a) = f3(&b);

  // At this point:
  // - a still points to main's g (valid)
  // - b points to f3's local g, which no longer exists (dangling)
  if (g != 3) { reach_error(); abort(); }

  return g;
}
