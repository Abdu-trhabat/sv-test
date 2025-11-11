/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 1994-2024 Free Software Foundation, Inc.
 * SPDX-FileCopyrightText: 2025 Dirk Beyer <https://www.sosy-lab.org>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

// This file is part of HarnessForge-data:

// https://gitlab.com/sosy-lab/research/data/harnessforge-automatic-extraction-of-verification-tasks

//

// SPDX-FileCopyrightText: 2025 Dirk Beyer <https://www.sosy-lab.org>

//

// SPDX-License-Identifier: Apache-2.0



#ifndef PROGRAM_NAME

#include "../../src/seq.c"

#endif

#include<stdlib.h>
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}


#include<assert.h>

#include<string.h>

#include "util.h"



#define MAX_BUFFER_SIZE 200



static int result_ab;

static int result_ba;



// call_cmp_antisymmetry calls cmp once with two strings a and b,

// and then with the strings swapped (b and a).

static void call_cmp_antisymmetry() {

    size_t num_digits_a = __VERIFIER_nondet_size_t();

    size_t num_digits_b = __VERIFIER_nondet_size_t();



    assume_or_exit(num_digits_a > 0 && num_digits_a < MAX_BUFFER_SIZE - 1);

    assume_or_exit(num_digits_b > 0 && num_digits_b < MAX_BUFFER_SIZE - 1);



    char *buffer_a = safe_malloc(num_digits_a+1);

    char *buffer_b = safe_malloc(num_digits_b+1);

    assume_or_exit(buffer_a != NULL && buffer_b != NULL);



    // Generate valid decimal strings that contain arbitrary digits

    for (unsigned char i = 0; i < num_digits_a; i++) {

        buffer_a[i] = gen_decimal_digit();

    }

    buffer_a[num_digits_a] = '\0';



    buffer_b[0] = gen_nonzero_digit();

    for (unsigned char i = 0; i < num_digits_b; i++) {

        buffer_b[i] = gen_decimal_digit();

    }

    buffer_b[num_digits_b] = '\0';



    result_ab = cmp(buffer_a, num_digits_a, buffer_b, num_digits_b);

    result_ba = cmp(buffer_b, num_digits_b, buffer_a, num_digits_a);

}



static void postcond_cmp_antisymmetry() {

    // Antisymmetry: cmp(a,b) and cmp(b,a) must have opposite signs

    // (or both be zero if equal)

    if (result_ab < 0) {

        fv_assert(result_ba > 0);

    } else if (result_ab > 0) {

        fv_assert(result_ba < 0);

    } else {

        fv_assert(result_ba == 0);

    }

}