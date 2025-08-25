// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0
#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error() { __assert_fail("0", "initialization_order_safe_unspecified_mixed.c", 3, "reach_error"); }

// Global side-effect target
int g = 0;

struct S { int a, b; };

int f1() { g = 1; return 11; }
int f2() { g = 2; return 22; }
int f3() { g = 3; return 33; }
int f4() { g = 4; return 44; }

int main() {
  // C11 §6.5.2.5: The order of side effects among compound literal initialization list expressions.”
  // Unspecified evaluation order: the function calls inside the nested initializer
  // may be evaluated in any order, so the last write to 'g' could be 1..4.
  struct S arr[2][2] = {
    { { .a = 8, .b = f2() }, { .a = f1(), .b = 0 } },
    { { f3(),  f4()       }, { .a = 9,    .b = 6 } }
  };

  // Accept any of the values written by f1..f4; otherwise it's an error.
  if (g != 1 && g != 2 && g != 3 && g != 4) {
    reach_error();abort();
  }

  return 0;
}
