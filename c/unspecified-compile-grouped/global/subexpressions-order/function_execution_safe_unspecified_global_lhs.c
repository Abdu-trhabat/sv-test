// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "detected_subexpression_lhs_global.c", 3, "reach_error"); }

int arr[10];
int x = 0;

int* f() {
   x++;
   return arr;
 }

int main() {
  // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour states that the order in which subexpressions are evaluated is not specified (with some exceptions, + not being one)
  *(f() + x) = 3; // arr[1] or arr[0] = 3
  if(arr[0] != 3 && arr[1] != 3) {reach_error();abort();}
  return 0;
}