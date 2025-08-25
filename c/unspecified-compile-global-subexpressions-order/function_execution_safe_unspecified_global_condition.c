// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "function_execution_safe_unspecified_global_condition.c", 3, "reach_error"); }

int a = 0;

int f() {
    a = 1;
    return 5;
}

int g() {
    a = 3;
    return 3;
}

int main() {
    // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour states that the order in which subexpressions are evaluated is not specified (with some exceptions, + not being one)
    if (f() + g() != 0) {
        if (a != 1 && a != 3) {reach_error();abort();}
        return a;
    }
    return 0;
}