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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch30stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
signed short int var_1_2 = -256;
signed long int var_1_3 = 256;
unsigned char var_1_4 = 0;
double var_1_5 = 127.5;
unsigned char var_1_6 = 0;
double var_1_7 = 10000000000000.125;
double var_1_8 = 1.25;
double var_1_9 = 4.125;
double var_1_10 = 25.7;
signed long int var_1_11 = -2;
double var_1_12 = 49.75;
signed long int var_1_13 = 5;
signed long int var_1_14 = 128;
signed long int var_1_15 = 1000;
double var_1_16 = 0.2;
double var_1_17 = 0.25;
double var_1_18 = 99999999999999.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch30stepLocals
	signed long int stepLocal_0 = var_1_2 / (abs (-16));
	if (stepLocal_0 >= var_1_3) {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch30stepLocals
	signed long int stepLocal_2 = var_1_3;
	unsigned char stepLocal_1 = var_1_6;
	if (var_1_1) {
		if (var_1_2 >= stepLocal_2) {
			if (stepLocal_1 || (var_1_2 < var_1_3)) {
				var_1_5 = var_1_7;
			}
		} else {
			var_1_5 = var_1_7;
		}
	}


	// From: Req3Batch30stepLocals
	if (10.55f < var_1_5) {
		if (var_1_5 > (var_1_7 * var_1_9)) {
			var_1_8 = (max (var_1_7 , var_1_10));
		}
	} else {
		if (var_1_5 > var_1_7) {
			var_1_8 = var_1_10;
		} else {
			var_1_8 = var_1_7;
		}
	}


	// From: Req4Batch30stepLocals
	if (var_1_1) {
		if ((max (var_1_9 , 49.75)) > var_1_12) {
			var_1_11 = (min (var_1_2 , (max ((var_1_13 - 5) , var_1_14))));
		}
	} else {
		var_1_11 = var_1_2;
	}


	// From: Req5Batch30stepLocals
	if ((- var_1_2) > (var_1_3 & var_1_13)) {
		if (var_1_2 <= 128) {
			if (var_1_1) {
				var_1_15 = var_1_14;
			} else {
				var_1_15 = var_1_14;
			}
		} else {
			var_1_15 = var_1_14;
		}
	} else {
		var_1_15 = var_1_13;
	}


	// From: Req6Batch30stepLocals
	if ((min (var_1_12 , var_1_5)) >= var_1_7) {
		var_1_16 = (var_1_17 + (var_1_18 + 16.75));
	} else {
		var_1_16 = var_1_17;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483647);
	assume_abort_if_not(var_1_14 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -230584.3009213691390e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return (((((((var_1_2 / (abs (-16))) >= var_1_3) ? (var_1_1 == ((unsigned char) var_1_4)) : 1) && (var_1_1 ? ((var_1_2 >= var_1_3) ? ((var_1_6 || (var_1_2 < var_1_3)) ? (var_1_5 == ((double) var_1_7)) : 1) : (var_1_5 == ((double) var_1_7))) : 1)) && ((10.55f < var_1_5) ? ((var_1_5 > (var_1_7 * var_1_9)) ? (var_1_8 == ((double) (max (var_1_7 , var_1_10)))) : 1) : ((var_1_5 > var_1_7) ? (var_1_8 == ((double) var_1_10)) : (var_1_8 == ((double) var_1_7))))) && (var_1_1 ? (((max (var_1_9 , 49.75)) > var_1_12) ? (var_1_11 == ((signed long int) (min (var_1_2 , (max ((var_1_13 - 5) , var_1_14)))))) : 1) : (var_1_11 == ((signed long int) var_1_2)))) && (((- var_1_2) > (var_1_3 & var_1_13)) ? ((var_1_2 <= 128) ? (var_1_1 ? (var_1_15 == ((signed long int) var_1_14)) : (var_1_15 == ((signed long int) var_1_14))) : (var_1_15 == ((signed long int) var_1_14))) : (var_1_15 == ((signed long int) var_1_13)))) && (((min (var_1_12 , var_1_5)) >= var_1_7) ? (var_1_16 == ((double) (var_1_17 + (var_1_18 + 16.75)))) : (var_1_16 == ((double) var_1_17)))
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
