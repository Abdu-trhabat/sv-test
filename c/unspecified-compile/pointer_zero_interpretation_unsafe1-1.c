// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "pointer_zero_interpretation_unsafe1-1.c", 3, "reach_error"); }

int main() {
  int* ptr = (int*) malloc(0);
  // malloc(0) either returns 0, or non-zero.
  if (ptr != 0) {reach_error();abort();}
  return 0;
}