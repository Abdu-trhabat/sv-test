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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch94no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 63;
signed long int var_1_2 = 25;
signed long int var_1_3 = 3;
signed long int var_1_4 = 0;
signed long int var_1_5 = 63;
signed long int var_1_6 = 3;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 63;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
signed char var_1_11 = -64;
signed char var_1_12 = -32;
signed char var_1_13 = 2;
signed char var_1_14 = -4;
signed char var_1_15 = -25;
signed char var_1_16 = 5;
signed long int var_1_17 = -2;
unsigned char var_1_18 = 2;
unsigned char var_1_19 = 16;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch94no_floats
	if (var_1_2 != var_1_3) {
		var_1_1 = ((var_1_4 - var_1_5) - var_1_6);
	}


	// From: Req2Batch94no_floats
	if (var_1_5 > (var_1_1 / var_1_4)) {
		if (var_1_5 > (var_1_4 / var_1_8)) {
			var_1_7 = var_1_9;
		} else {
			var_1_7 = var_1_10;
		}
	}


	// From: Req3Batch94no_floats
	if (var_1_10 || var_1_9) {
		var_1_11 = var_1_12;
	} else {
		var_1_11 = ((max (var_1_13 , var_1_14)) + (var_1_15 + var_1_16));
	}


	// From: Req4Batch94no_floats
	signed char stepLocal_0 = var_1_15;
	if (var_1_6 > var_1_5) {
		if (var_1_1 != (var_1_4 / var_1_8)) {
			if ((var_1_11 % (var_1_18 + var_1_19)) > stepLocal_0) {
				var_1_17 = -64;
			}
		}
	} else {
		var_1_17 = var_1_13;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 2147483647);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -31);
	assume_abort_if_not(var_1_15 <= 32);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -31);
	assume_abort_if_not(var_1_16 <= 31);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 128);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 127);
}



void updateLastVariables() {
}

int property() {
	return ((((var_1_2 != var_1_3) ? (var_1_1 == ((signed long int) ((var_1_4 - var_1_5) - var_1_6))) : 1) && ((var_1_5 > (var_1_1 / var_1_4)) ? ((var_1_5 > (var_1_4 / var_1_8)) ? (var_1_7 == ((unsigned char) var_1_9)) : (var_1_7 == ((unsigned char) var_1_10))) : 1)) && ((var_1_10 || var_1_9) ? (var_1_11 == ((signed char) var_1_12)) : (var_1_11 == ((signed char) ((max (var_1_13 , var_1_14)) + (var_1_15 + var_1_16)))))) && ((var_1_6 > var_1_5) ? ((var_1_1 != (var_1_4 / var_1_8)) ? (((var_1_11 % (var_1_18 + var_1_19)) > var_1_15) ? (var_1_17 == ((signed long int) -64)) : 1) : 1) : (var_1_17 == ((signed long int) var_1_13)))
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
