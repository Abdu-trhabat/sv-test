// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "assignment_order_safe_unspecified_global_condition.c", 3, "reach_error"); }

int a = 0;

int* f1() {
    a = 3;
    return malloc(sizeof(int));
}

int f2() {
    if (a==3){
      return 0;
    }else{
      return 42;
    }
}

int main() {
    // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour and 6.5.16 state that the order in which the operands of an assignment operator are evaluated is not specified
    // f1() is evaluated before f2(), a++ is called
    // f2() is evaluated before f1(), a-- is called
    if ((*f1() = f2()) != 0) {
        a--;
        if (a != 2) {reach_error();abort();}
    } else {
        a++;
        if (a != 4) {reach_error();abort();}
    }

    return 0;
}