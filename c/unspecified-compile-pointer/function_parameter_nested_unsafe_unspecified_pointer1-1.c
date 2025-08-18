// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "function_parameter_nested_unsafe_pointer1-1.c", 3, "reach_error"); }

int f1(int * intStorage) {
  *intStorage = 2 * *intStorage;
  return 5;
}

int f2(int * intStorage) {
  *intStorage = *intStorage + 1;
  return 7;
}

int foo(int a, int b) {
  return 1;
}

int main() {
  int * intStorage = malloc(sizeof(int));
  if (intStorage == 0) {
    return 0;
  }
  *intStorage = 0;
  // C11 ISO/IEC 9899:201x 3.4.4 and Annex J.1 Unspecified behaviour state that the order in which function arguments (and their subexpressions) are evaluated is not specified
  int c = foo(f1(intStorage), f2(intStorage));
  // *intStorage is 1 or 2, 1 is more likely
  if (*intStorage == 2) {reach_error();abort();}
  return 0;
}