// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "function_execution_unsafe_unspecified_pointer1-1.c", 3, "reach_error"); }

int f1(int * intStorage) {
  *intStorage = 3;
  return 5;
}

int f2(int * intStorage) {
  *intStorage = 5;
  return 7;
}

int main() {
  // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour states that the order in which subexpressions are evaluated is not specified (with some exceptions, + not being one)
  int * intStorage = malloc(sizeof(int));
  if (intStorage == 0) {
    return 0;
  }
  *intStorage = 0;
  int c;
  c = f1(intStorage) + f2(intStorage);
  if (*intStorage == 3) {reach_error();abort();}
  return 0;
}