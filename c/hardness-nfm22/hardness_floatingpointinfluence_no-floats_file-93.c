// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch93no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 255;
signed long int var_1_3 = 0;
signed long int var_1_5 = 128;
signed long int var_1_6 = 9;
signed long int var_1_7 = 31;
signed long int var_1_8 = 9;
signed long int var_1_9 = 499;
signed long int var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_10 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch93no_floats
	if (((- last_1_var_1_10) / var_1_3) != (last_1_var_1_10 / var_1_5)) {
		if (last_1_var_1_10 != ((max (var_1_6 , var_1_7)) - var_1_8)) {
			var_1_1 = var_1_9;
		} else {
			var_1_1 = var_1_9;
		}
	} else {
		var_1_1 = 64.51f;
	}


	// From: Req2Batch93no_floats
	if (var_1_1 > (max ((var_1_9 * 128.4) , (var_1_5 * var_1_1)))) {
		var_1_10 = 2147000000.0f;
	} else {
		var_1_10 = var_1_9;
	}


	// From: Req3Batch93no_floats
	if (! (var_1_3 <= var_1_10)) {
		var_1_11 = (var_1_12 && var_1_13);
	} else {
		if ((var_1_7 / var_1_3) < (min ((max (var_1_8 , var_1_6)) , var_1_5))) {
			var_1_11 = var_1_14;
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
}

int property() {
	return (((((- last_1_var_1_10) / var_1_3) != (last_1_var_1_10 / var_1_5)) ? ((last_1_var_1_10 != ((max (var_1_6 , var_1_7)) - var_1_8)) ? (var_1_1 == ((signed long int) var_1_9)) : (var_1_1 == ((signed long int) var_1_9))) : (var_1_1 == ((signed long int) 64.51f))) && ((var_1_1 > (max ((var_1_9 * 128.4) , (var_1_5 * var_1_1)))) ? (var_1_10 == ((signed long int) 1.00000000000004E13f)) : (var_1_10 == ((signed long int) var_1_9)))) && ((! (var_1_3 <= var_1_10)) ? (var_1_11 == ((unsigned char) (var_1_12 && var_1_13))) : (((var_1_7 / var_1_3) < (min ((max (var_1_8 , var_1_6)) , var_1_5))) ? (var_1_11 == ((unsigned char) var_1_14)) : 1))
;
}
int main(void) {
	isInitial = 1;
	initially();

	while (1) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
