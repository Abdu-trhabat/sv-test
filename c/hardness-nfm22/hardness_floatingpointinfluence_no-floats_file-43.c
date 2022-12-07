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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch43no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 64;
signed long int var_1_2 = 4;
signed long int var_1_3 = 64;
signed long int var_1_4 = 64;
signed long int var_1_5 = 0;
signed short int var_1_7 = 10000;
signed short int var_1_8 = 1;
signed short int var_1_9 = 50;
signed short int var_1_10 = 8;
unsigned char var_1_13 = 2;
unsigned char var_1_14 = 100;
unsigned short int var_1_15 = 128;
unsigned short int var_1_16 = 23647;
unsigned short int var_1_17 = 32;
signed char var_1_18 = 0;
signed char var_1_19 = -50;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch43no_floats
	var_1_18 = var_1_19;


	// From: Req6Batch43no_floats
	var_1_20 = var_1_21;


	// From: Req2Batch43no_floats
	signed char stepLocal_1 = var_1_18;
	signed long int stepLocal_0 = var_1_9 / var_1_7;
	if (stepLocal_1 > (var_1_8 << var_1_10)) {
		if (stepLocal_0 > -25) {
			var_1_13 = var_1_14;
		} else {
			var_1_13 = var_1_14;
		}
	}


	// From: Req3Batch43no_floats
	signed long int stepLocal_2 = var_1_7 ^ var_1_18;
	if (var_1_14 >= stepLocal_2) {
		var_1_15 = (var_1_14 + (var_1_16 - var_1_13));
	}


	// From: Req1Batch43no_floats
	if (var_1_2 != (max (var_1_3 , (var_1_4 - var_1_5)))) {
		if (var_1_20) {
			var_1_1 = (((var_1_7 - 32) + (var_1_13 + var_1_13)) - var_1_13);
		}
	} else {
		if (var_1_20) {
			var_1_1 = var_1_18;
		} else {
			var_1_1 = var_1_13;
		}
	}


	// From: Req4Batch43no_floats
	var_1_17 = var_1_1;
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 8191);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 8192);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 8191);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -127);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
}



void updateLastVariables() {
}

int property() {
	return ((((((var_1_2 != (max (var_1_3 , (var_1_4 - var_1_5)))) ? (var_1_20 ? (var_1_1 == ((signed short int) (((var_1_7 - 32) + (var_1_13 + var_1_13)) - var_1_13))) : 1) : (var_1_20 ? (var_1_1 == ((signed short int) var_1_18)) : (var_1_1 == ((signed short int) var_1_13)))) && ((var_1_18 > (var_1_8 << var_1_10)) ? (((var_1_9 / var_1_7) > -25) ? (var_1_13 == ((unsigned char) var_1_14)) : (var_1_13 == ((unsigned char) var_1_14))) : 1)) && ((var_1_14 >= (var_1_7 ^ var_1_18)) ? (var_1_15 == ((unsigned short int) (var_1_14 + (var_1_16 - var_1_13)))) : 1)) && (var_1_17 == ((unsigned short int) var_1_1))) && (var_1_18 == ((signed char) var_1_19))) && (var_1_20 == ((unsigned char) var_1_21))
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
