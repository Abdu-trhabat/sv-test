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
  __assert_fail("0", "unspecified_initializer_nested_struct.c", 3, "reach_error");
}

int g = 0;

int f1() {
  g = 1;
  return 11;
}

int f2() {
  g = 2;
  return 22;
}

int f3() {
  g = 3;
  return 33;
}

struct S {
  int a;
  int b;
};

int main() {
  // Specified order: evaluate all calls explicitly in sequence.
  int t2  = f2();  // g = 2
  int t1a = f1();  // g = 1
  int t3  = f3();  // g = 3
  int t1b = f1();  // g = 1 (last write; final g is deterministically 1)

  struct S arr[2] = {
    { t2,  t1a },  // corresponds to { f2(), f1() }
    { t3,  t1b }   // corresponds to { f3(), f1() }
  };

  // With the fixed order above, the final value of g must be 1.
  if (g != 1) { reach_error();abort(); }

  return 0;
}
