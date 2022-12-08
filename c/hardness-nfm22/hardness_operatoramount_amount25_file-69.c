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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch69Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -100;
float var_1_6 = 15.25;
float var_1_7 = 7.5;
float var_1_8 = 32.25;
float var_1_9 = 24.678;
signed short int var_1_10 = 128;
signed short int var_1_11 = 8;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
signed short int var_1_15 = 32;
signed short int var_1_16 = -4;
unsigned short int var_1_17 = 25;
unsigned char var_1_18 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch69Amount25
	var_1_15 = var_1_16;


	// From: Req4Batch69Amount25
	var_1_17 = var_1_11;


	// From: Req5Batch69Amount25
	var_1_18 = var_1_13;


	// From: Req1Batch69Amount25
	signed long int stepLocal_0 = var_1_17 * (min (var_1_17 , var_1_17));
	if (stepLocal_0 < var_1_17) {
		if ((var_1_6 - 200.6f) > ((var_1_7 / var_1_8) / var_1_9)) {
			var_1_1 = (var_1_10 - var_1_11);
		} else {
			var_1_1 = var_1_10;
		}
	}


	// From: Req2Batch69Amount25
	unsigned short int stepLocal_2 = var_1_17;
	unsigned long int stepLocal_1 = - 10u;
	if ((var_1_11 * (var_1_10 | var_1_17)) >= stepLocal_1) {
		if (var_1_17 >= stepLocal_2) {
			var_1_12 = var_1_13;
		} else {
			var_1_12 = var_1_14;
		}
	} else {
		var_1_12 = var_1_14;
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	assume_abort_if_not(var_1_8 != 0.0F);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	assume_abort_if_not(var_1_9 != 0.0F);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= -32767);
	assume_abort_if_not(var_1_16 <= 32766);
}



void updateLastVariables() {
}

int property() {
	return ((((((var_1_17 * (min (var_1_17 , var_1_17))) < var_1_17) ? (((var_1_6 - 200.6f) > ((var_1_7 / var_1_8) / var_1_9)) ? (var_1_1 == ((signed short int) (var_1_10 - var_1_11))) : (var_1_1 == ((signed short int) var_1_10))) : 1) && (((var_1_11 * (var_1_10 | var_1_17)) >= (- 10u)) ? ((var_1_17 >= var_1_17) ? (var_1_12 == ((unsigned char) var_1_13)) : (var_1_12 == ((unsigned char) var_1_14))) : (var_1_12 == ((unsigned char) var_1_14)))) && (var_1_15 == ((signed short int) var_1_16))) && (var_1_17 == ((unsigned short int) var_1_11))) && (var_1_18 == ((unsigned char) var_1_13))
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
