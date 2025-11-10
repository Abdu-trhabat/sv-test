/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2025 Dirk Beyer <https://www.sosy-lab.org>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

//typedef unsigned long int __uintmax_t;
//typedef __uintmax_t uintmax_t;
//typedef struct { uintmax_t uu[2]; } uuint;
//#define MAX_NFACTS 26
//
//struct factors
//{
//  uintmax_t     plarge[2]; /* Can have a single large factor */
//  uintmax_t     p[MAX_NFACTS];
//  unsigned char e[MAX_NFACTS];
//  unsigned char nfactors;
//};
//static void factor (uintmax_t, uintmax_t, struct factors *);

// Programs of coreutils do not use header files to define their types and functions.
// But each program defines a PROGRAM_NAME at the beginning.
// If this program name is not set, we know that the program file was not already included,
// so we have to include it to get access to the required types and functions of the original code.
#ifndef PROGRAM_NAME
#include "../../src/factor.c"
#endif
#include<stdlib.h>
#include<assert.h>
#include "util.h"

static struct factors factors;
static uintmax_t first_part;
static uintmax_t second_part;

static void factors_valid_numbers() {
    // factor handles one 128-bit number that is split into two parameters:
    first_part = __VERIFIER_nondet_ulong();
    second_part = __VERIFIER_nondet_ulong();

    // non-trivial case:
    assume_or_exit(first_part >= 2 || second_part != 0);
}

static void factors_valid_64bit_number() {
    first_part = __VERIFIER_nondet_ulong();
    second_part = 0;

    // non-trivial case:
    assume_or_exit(first_part >= 2);
}

static void factors_trivial() {
    first_part = __VERIFIER_nondet_ulong();
    second_part = __VERIFIER_nondet_ulong();

    assume_or_exit(first_part < 2 && second_part == 0);
}

static void call_factors() {
    factor(second_part, first_part, &factors);
}

static void postcond_factors_exist_and_valid() {
    // At least one factor must exist
    fv_assert(factors.nfactors > 0 || factors.plarge[0] > 0 || factors.plarge[1] > 0);

    // All prime factors must be >= 2
    for (uintmax_t i = 0; i < factors.nfactors; i++) {
        fv_assert(factors.p[i] >= 2);
    }

    // All exponents must be >= 1 (no zero-exponent factors)
    for (uintmax_t i = 0; i < factors.nfactors; i++) {
        fv_assert(factors.e[i] >= 1);
    }

    // Factors must be in strictly ascending order (no duplicates)
    for (uintmax_t i = 1; i < factors.nfactors; i++) {
        fv_assert(factors.p[i] > factors.p[i-1]);
    }

    // Large factors must be >= 2 if they exist
    if (factors.plarge[1] > 0 || factors.plarge[0] > 0) {
        // plarge represents a two-word number: plarge[1] is high word, plarge[0] is low word
        fv_assert(factors.plarge[1] > 0 || factors.plarge[0] >= 2);
    }
}

static void postcond_factors_empty() {
    fv_assert(factors.nfactors == 0 && factors.plarge[0] == 0 && factors.plarge[1] == 0);
}

static void postcond_factors_multiply_to_64bit_input() {
    assume_or_exit(second_part == 0);
    uintmax_t product = 1;
    // Explanation of struct factors:
    //  struct factors
    //  {
    //    uintmax_t     plarge[2];
    //    uintmax_t     p[MAX_NFACTS];
    //    unsigned char e[MAX_NFACTS];
    //    unsigned char nfactors;
    //  };
    //
    //  The elements represent a prime factorization in exponential form:
    //
    //  - p[i]: The prime factors themselves
    //  - e[i]: The exponents (multiplicities) of each prime
    //
    //  For example, if a number factors as 360 = 2³ * 3² * 5¹, the structure would contain:
    //  - nfactors = 3
    //  - p[0] = 2, e[0] = 3
    //  - p[1] = 3, e[1] = 2
    //  - p[2] = 5, e[2] = 1
    for (uintmax_t i = 0; i < factors.nfactors; i++) {
        for (unsigned char j = 0; j < factors.e[i]; j++) {
            product *= factors.p[i];
        }
    }
    fv_assert(product == first_part);
}