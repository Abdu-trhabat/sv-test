/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2008-2024 Free Software Foundation, Inc.
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

#include "../../src/getlimits.c"

#endif

#include<stdlib.h>

#include<assert.h>

#include<string.h>

#include "util.h"



#define MAX_BUFFER_SIZE 200



// Global state variables shared across all tests

static char *input_buf;

static char *old_digits;

static const char *result;

static size_t num_digits;

static bool is_negative;

static size_t num_nines;



// init_getlimits_buffer initializes buffers 'input_buf' and 'old_digits'

static void init_getlimits_buffer() {

    input_buf = malloc(MAX_BUFFER_SIZE);

    old_digits = malloc(MAX_BUFFER_SIZE);

    assume_or_exit(input_buf != NULL && old_digits != NULL);

}



static void free_getlimits_buffer() {

    free(input_buf);

    free(old_digits);

    result = NULL;

}



static void store_old_getlimits_state() {

    old_digits = memcpy(old_digits, input_buf, MAX_BUFFER_SIZE);

}



static bool is_valid_positive() {

    // we expect no '-' as first char, but a digit

    if (!is_valid_digit(result[0])) {

        return false;

    }



    size_t result_len = strlen(result);

    if (result_len <= 0) {

        return false;

    }



    bool has_at_least_one_non_zero_digit = false;

    for (size_t i = 0; i < result_len; i++) {

        if (!is_valid_digit(result[i])) {

            return false;

        }

        if (result[i] != '0') {

            has_at_least_one_non_zero_digit = true;

        }

    }

    return has_at_least_one_non_zero_digit;

}



static bool is_valid_negative() {

    // first char should be '-'

    if (result[0] != '-') {

        return false;

    }



    const char * result_without_sign = result + 1;

    size_t result_len = strlen(result_without_sign);

    if (result_len <= 0) {

        return false;

    }



    bool has_at_least_one_non_zero_digit = false;

    for (size_t i = 0; i < result_len; i++) {

        if (!is_valid_digit(result_without_sign[i])) {

            return false;

        }

        if (result_without_sign[i] != '0') {

            has_at_least_one_non_zero_digit = true;

        }

    }

    return has_at_least_one_non_zero_digit;

}



// init_positive initializes the global input buffer with a positive decimal string

static void init_positive() {

    init_getlimits_buffer();

    num_digits = __VERIFIER_nondet_size_t();

    // +1 for potential carry, +1 for '\0'

    size_t total_size_required = num_digits + 2;

    assume_or_exit(total_size_required > num_digits); // check for overflow

    assume_or_exit(num_digits > 0);

    assume_or_exit(total_size_required <= MAX_BUFFER_SIZE);



    // Initialize position 0 as value '0' for potential carry.

    input_buf[0] = '0';

    // Positive number starts with non-zero digit at position 1

    input_buf[1] = gen_nonzero_digit();

    for (size_t i = 2; i <= num_digits; i++) {

        input_buf[i] = gen_decimal_digit();

    }

    input_buf[num_digits + 1] = '\0';



    is_negative = false;

}



// call_decimal_absval_add_one calls the decimal_absval_add_one function with the global input buffer

static void call_decimal_absval_add_one() {

    result = decimal_absval_add_one(input_buf);

}



// postcond_positive checks that the result of decimal_absval_add_one

// is a valid positive decimal string with correct length

static void postcond_positive() {

    fv_assert(is_valid_positive());

    // Result length should be either same as input or one more (if carry)

    size_t result_len = strlen(result);

    fv_assert(result_len == num_digits || result_len == num_digits + 1);

}



// init_negative initializes the global input buffer with a negative decimal string

static void init_negative() {

    init_getlimits_buffer();

    num_digits = __VERIFIER_nondet_size_t();

    // +1 for potential carry,

    // +1 for '-' sign,

    // +1 for '\0'

    size_t total_size_required = num_digits + 3;

    assume_or_exit(total_size_required > num_digits); // check for overflow

    assume_or_exit(num_digits > 0);

    assume_or_exit(total_size_required <= MAX_BUFFER_SIZE);



    // Build negative decimal string starting at position 1

    input_buf[1] = '-';

    input_buf[2] = gen_nonzero_digit();

    for (size_t i = 3; i <= num_digits + 1; i++) {

        input_buf[i] = gen_decimal_digit();

    }

    input_buf[num_digits + 2] = '\0';



    is_negative = true;

}



// postcond_negative checks that the result of decimal_absval_add_one

// is a valid negative decimal string with correct length

static void postcond_negative() {

    // Result should start with '-' for negative input

    fv_assert(is_valid_negative());



    // Length of absolute value should be either same as input or one more (if carry)

    size_t result_len = strlen(result+1); // skip '-' at result[0]

    fv_assert(result_len == num_digits || result_len == num_digits + 1);

    fv_assert(result_len == num_digits || result_len == num_digits + 1);

}



// init_all_nines initializes the global input buffer with a string of all 9s

// to check carry propagation

static void init_all_nines() {

    init_getlimits_buffer();

    num_nines = __VERIFIER_nondet_size_t();

    is_negative = __VERIFIER_nondet_uchar() & 1;

    // +1 for potential carry,

    // +1 for potential '-' sign,

    // +1 for '\0'

    size_t total_size_required = num_nines + 3;

    assume_or_exit(total_size_required > num_nines); // check for overflow

    assume_or_exit(num_nines > 0);

    assume_or_exit(total_size_required <= MAX_BUFFER_SIZE);



    // position 0 is for potential carry

    // initialize to have a deterministic value

    input_buf[0] = '0';

    size_t start_idx;

    if (is_negative) {

        input_buf[1] = '-';

        start_idx = 2;

    } else {

        start_idx = 1;

    }

    // if negative number, nines start at position 2.

    // if positive number, nines start at position 1.

    for (size_t i = 0; i < num_nines; i++) {

        input_buf[start_idx + i] = '9';

    }

    input_buf[start_idx + num_nines] = '\0';

}



// postcond_all_nines checks that incrementing all 9s gives "1" followed by "0"s,

// and that the sign is preserved (-999 -> -1000, +999 -> +1000)

static void postcond_all_nines() {

    // Verify sign is preserved

    size_t start_idx;

    if (is_negative) {

        fv_assert(result[0] == '-');

        start_idx = 1;

    } else {

        fv_assert(result[0] != '-');

        start_idx = 0;

    }



    // Incrementing all 9s should give "1" followed by "0"s

    // Length should be num_nines + 1

    const char *abs_result = result + start_idx;

    fv_assert(strlen(abs_result) == num_nines + 1);

    fv_assert(abs_result[0] == '1');

    for (size_t i = 1; i <= num_nines; i++) {

        fv_assert(abs_result[i] == '0');

    }

}