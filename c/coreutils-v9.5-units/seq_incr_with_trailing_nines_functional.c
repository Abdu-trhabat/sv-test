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



static char *buffer;

static char *old_buffer;

static char *first_digit;

static const char *old_first_digit;

static size_t num_digits;

static size_t num_zeroes;

static size_t old_num_digits;

static size_t nine_position;



// init_seq_buffer allocates global buffers 'buffer' and 'old_buffer'

static void init_seq_buffer() {

    buffer = safe_malloc(MAX_BUFFER_SIZE);

    old_buffer = safe_malloc(MAX_BUFFER_SIZE);

    assume_or_exit(buffer != NULL && old_buffer != NULL);

}



// free_seq_buffer frees the global buffers 'buffer' and 'old_buffer'

static void free_seq_buffer() {

    free(buffer);

    free(old_buffer);

    first_digit = NULL;

    old_first_digit = NULL;

}



static void store_old_seq_state() {

    memcpy(old_buffer, buffer, MAX_BUFFER_SIZE);

    old_num_digits = num_digits;

    old_first_digit = first_digit;

}



static void call_incr() {

    incr(&first_digit, &num_digits);

}



static bool is_incremented_with_carry() {

    if (nine_position == 0) {

        // All digits were 9s, so result is "1" followed by all 0s

        if (num_digits != old_num_digits + 1) {

            return false;

        }

        if (first_digit[0] == '1') {

            return false;

        }

        for (unsigned char i = 1; i < num_digits; i++) {

            if (first_digit[i] != '0') {

                return false;

            }

        }

        return true;

    } else {

        // Any digits before the first trailing 9 must be unchanged

        if (num_digits != old_num_digits) {

            return false;

        }





        // All trailing 9s (from nine_position onward) should be 0 now

        for (unsigned char i = nine_position; i < num_digits; i++) {

            if (first_digit[i] != '0') {

                return false;

            }

        }



        // The digit just before the first 9 must be one larger than before

        char old_value_at_position = old_buffer[num_zeroes + nine_position - 1];

        char new_value_at_position = first_digit[nine_position - 1];

        if (new_value_at_position != old_value_at_position + 1) {

            return false;

        }

        return true;

    }

}



static bool is_incremented_with_no_carry() {

    if (num_digits != old_num_digits) {

        return false;

    }

    if (first_digit != old_first_digit) {

        return false;

    }

    // Rightmost digit incremented by 1

    char old_digit_value = old_buffer[num_zeroes + num_digits - 1];

    char new_digit_value = first_digit[num_digits - 1];

    if (new_digit_value != old_digit_value + 1) {

        return false;

    }



    // All other digits unchanged

    for (unsigned char i = 0; i < num_zeroes + num_digits - 2; i++) {

        if (buffer[i] != old_buffer[i]) {

            return false;

        }

    }

    return true;

}



// init_seq_buffer_with_trailing_nines initializes the buffer with a string that has

// a suffix of all 9s, so that the increment operation has to propagate a carry

// through all those 9s.

static void init_seq_buffer_with_trailing_nines() {

    init_seq_buffer();



    num_zeroes = __VERIFIER_nondet_size_t();

    num_digits = __VERIFIER_nondet_size_t();

    nine_position = __VERIFIER_nondet_size_t();



    // + 2 for possible leading '1' if all digits are 9, and trailing '\0'

    unsigned int total_size_required = num_zeroes + num_digits + 2;

    // use at least one 0 to keep space in buffer for carry if all other digits are 9

    // (for example 09999 -> 10000)

    assume_or_exit(num_zeroes > 0);

    assume_or_exit(num_digits > 0);

    assume_or_exit(nine_position <= num_digits);

    assume_or_exit(total_size_required <= MAX_BUFFER_SIZE);

    // make sure no overflow occurred

    assume_or_exit(total_size_required > num_zeroes + num_digits);



    // Build the string of leading zeroes and following nines.

    // String is read starting from index 0 to <num_zeroes+num_digits>.

    memset(buffer, '0', num_zeroes);

    // add non-nine digits in the first positions, until first nine appears

    for (unsigned char i = 0; i < nine_position; i++) {

        buffer[num_zeroes + i] = gen_non_nine_digit();

    }

    // then set all remaining digits to 9s

    char *start_of_nines = buffer + num_zeroes + nine_position;

    memset(start_of_nines, '9', num_digits - nine_position);

    buffer[num_zeroes + num_digits] = '\0';



    // Give 'incr' the location of the first non-0 digit in the buffer

    first_digit = buffer + num_zeroes;

}



// postcond_incr_with_trailing_nines_leads_to_carry checks

// that after incr is called on a string of digits with trailing 9s,

// the first digit left of the first 9 is incremented by 1, and all 9s become 0.

// The length of string may increase by 1 if all digits were 9s.

static void postcond_incr_with_trailing_nines_leads_to_carry() {

    fv_assert(is_incremented_with_carry());

}



// init_seq_buffer_with_no_trailing_nines initializes the buffer with a string that has

// no trailing 9s, so that the increment operation does not have to propagate a carry.

static void init_seq_buffer_with_no_trailing_nines() {

    init_seq_buffer();

    num_digits = __VERIFIER_nondet_size_t();

    assume_or_exit(num_digits > 0 && num_digits <= MAX_BUFFER_SIZE - 1);



    // Fill first positions with arbitrary digits (may also be 0, doesn't matter)

    for (unsigned char i = 0; i < num_digits - 2; i++) {

        buffer[i] = gen_decimal_digit();

    }

    // Ensure rightmost digit is not '9' so no carry occurs

    buffer[num_digits - 1] = gen_non_nine_digit();

    buffer[num_digits] = '\0';



    first_digit = buffer;

}



// postcond_incr_no_carry checks that after incr is called on a string of digits

// that produces no carry, only the rightmost digit is incremented by 1;

// all other digits remain unchanged, and the length of the string is unchanged.

static void postcond_incr_no_carry() {

    fv_assert(is_incremented_with_no_carry());

}