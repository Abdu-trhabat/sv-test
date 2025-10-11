/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2025 Dirk Beyer <https://www.sosy-lab.org>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "config.h"
#include<stdlib.h>
#include<assert.h>

#ifndef fv_util
#define fv_util

extern int __VERIFIER_nondet_int();
extern unsigned char __VERIFIER_nondet_uchar();
extern unsigned long int __VERIFIER_nondet_ulong();
extern size_t __VERIFIER_nondet_size_t();

void reach_error() {
    assert(0);
}

void fv_assert(int condition) {
    if (!(condition)) {
        reach_error();
    }
}

void assume_or_exit(int condition) {
    if (!condition) {
        exit(0);
    }
}

bool is_valid_digit(char c) {
    return (c >= '0' && c <= '9');
}

// gen_decimal_digit generates a decimal digit char ('0' to '9')
char gen_decimal_digit() {
    unsigned char c = __VERIFIER_nondet_uchar();
    assume_or_exit(is_valid_digit(c));
    return c;
}

// gen_non_nine_digit generates a decimal digit char that is not '9' ('0' to '8')
char gen_non_nine_digit() {
    unsigned char c = gen_decimal_digit();
    assume_or_exit(c != '9');
    return c;
}

// gen_nonzero_digit generates a decimal digit char that is not '0' ('1' to '9')
char gen_nonzero_digit() {
    unsigned char c = gen_decimal_digit();
    assume_or_exit(c != '0');
    return c;
}
#endif