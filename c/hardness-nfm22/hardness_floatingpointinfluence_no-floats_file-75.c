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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch75no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 32;
unsigned char var_1_7 = 32;
signed long int var_1_8 = -100;
signed long int var_1_10 = 5;
unsigned char var_1_12 = 128;
unsigned char var_1_13 = 200;
unsigned char var_1_14 = 8;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 1;
signed long int var_1_18 = 2;
signed long int var_1_19 = 16;
signed char var_1_20 = -4;
signed char var_1_21 = 10;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_8 = -100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch75no_floats
	var_1_18 = var_1_19;


	// From: Req5Batch75no_floats
	var_1_20 = var_1_21;


	// From: Req2Batch75no_floats
	if ((var_1_18 / var_1_10) >= (var_1_18 / 128.6)) {
		var_1_8 = ((var_1_20 + (var_1_7 + last_1_var_1_8)) - var_1_20);
	} else {
		if (var_1_18 <= var_1_10) {
			var_1_8 = 256;
		} else {
			var_1_8 = var_1_20;
		}
	}


	// From: Req1Batch75no_floats
	signed long int stepLocal_0 = (var_1_8 * var_1_20) * var_1_8;
	if (stepLocal_0 < (max (var_1_20 , var_1_8))) {
		var_1_1 = var_1_7;
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req3Batch75no_floats
	if ((var_1_1 == (var_1_13 - var_1_14)) && var_1_15) {
		if (var_1_15) {
			var_1_12 = (max ((var_1_16 - var_1_14) , var_1_7));
		}
	} else {
		var_1_12 = var_1_17;
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	assume_abort_if_not(var_1_10 != 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 127);
	assume_abort_if_not(var_1_13 <= 255);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483648);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -127);
	assume_abort_if_not(var_1_21 <= 126);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
}

int property() {
	return (((((((var_1_8 * var_1_20) * var_1_8) < (max (var_1_20 , var_1_8))) ? (var_1_1 == ((unsigned char) var_1_7)) : (var_1_1 == ((unsigned char) var_1_7))) && (((var_1_18 / var_1_10) >= (var_1_18 / 128.6)) ? (var_1_8 == ((signed long int) ((var_1_20 + (var_1_7 + last_1_var_1_8)) - var_1_20))) : ((var_1_18 <= var_1_10) ? (var_1_8 == ((signed long int) 256)) : (var_1_8 == ((signed long int) var_1_20))))) && (((var_1_1 == (var_1_13 - var_1_14)) && var_1_15) ? (var_1_15 ? (var_1_12 == ((unsigned char) (max ((var_1_16 - var_1_14) , var_1_7)))) : 1) : (var_1_12 == ((unsigned char) var_1_17)))) && (var_1_18 == ((signed long int) var_1_19))) && (var_1_20 == ((signed char) var_1_21))
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
