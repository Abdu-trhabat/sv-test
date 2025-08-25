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
  __assert_fail("0", "initialization_order_safe_unspecified_struct.c", 3, "reach_error");
}

int g = 0;

int f1() {
  g = 1;
  return 10;
}

int f2() {
  g = 2;
  return 20;
}

struct S {
  int a;
  int b;
};

int main() {
  // C11 §6.5.2.5: The order of side effects among compound literal initialization list expressions.”
  // Struct initializer with two function calls that both write to global g
  struct S s = { f1(), f2() };  // Order of evaluation of f1 and f2 is unspecified

  if (g != 1 && g != 2) {
    reach_error();abort();
  }

  return 0;
}
