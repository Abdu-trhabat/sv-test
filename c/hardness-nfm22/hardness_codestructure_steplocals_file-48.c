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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch48stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 10;
unsigned char var_1_2 = 1;
double var_1_3 = 0.0;
double var_1_4 = 128.2;
double var_1_5 = 50.1;
double var_1_6 = 64.5;
unsigned short int var_1_7 = 1;
unsigned char var_1_8 = 5;
double var_1_9 = 15.35;
unsigned char var_1_10 = 10;
unsigned char var_1_11 = 2;
signed long int var_1_12 = 32;
signed long int var_1_13 = 256;
signed char var_1_14 = 1;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 0;
signed char var_1_17 = -64;
unsigned short int var_1_18 = 64;
signed long int var_1_19 = 128;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch48stepLocals
	if (var_1_2) {
		if (((var_1_3 - var_1_4) - var_1_5) == (15.75 - var_1_6)) {
			var_1_1 = (5 + var_1_7);
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = 1;
	}


	// From: Req2Batch48stepLocals
	unsigned short int stepLocal_0 = var_1_7;
	if (var_1_6 > (var_1_5 / (max (var_1_3 , var_1_9)))) {
		var_1_8 = (abs (var_1_10));
	} else {
		if (var_1_1 <= stepLocal_0) {
			var_1_8 = var_1_10;
		} else {
			var_1_8 = var_1_11;
		}
	}


	// From: Req3Batch48stepLocals
	if (var_1_2) {
		if (-128 > var_1_10) {
			if (var_1_3 >= (2.75 / var_1_9)) {
				var_1_12 = (var_1_11 + (var_1_1 + var_1_10));
			} else {
				var_1_12 = var_1_1;
			}
		}
	} else {
		var_1_12 = var_1_8;
	}


	// From: Req4Batch48stepLocals
	if (var_1_2) {
		var_1_13 = var_1_11;
	}


	// From: Req5Batch48stepLocals
	signed long int stepLocal_1 = max ((var_1_15 - var_1_16) , var_1_13);
	if (var_1_10 == stepLocal_1) {
		var_1_14 = (abs (var_1_17));
	} else {
		var_1_14 = var_1_17;
	}


	// From: Req6Batch48stepLocals
	if (var_1_7 == var_1_12) {
		var_1_18 = (var_1_10 + (min (var_1_8 , var_1_16)));
	} else {
		if (var_1_14 != var_1_16) {
			if (-256 >= var_1_19) {
				var_1_18 = var_1_16;
			} else {
				var_1_18 = var_1_15;
			}
		} else {
			var_1_18 = var_1_10;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 4611686.018427387900e+12F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427387900e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	assume_abort_if_not(var_1_9 != 0.0F);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 255);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -126);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483648);
	assume_abort_if_not(var_1_19 <= 2147483647);
}



void updateLastVariables() {
}

int property() {
	return (((((var_1_2 ? ((((var_1_3 - var_1_4) - var_1_5) == (15.75 - var_1_6)) ? (var_1_1 == ((unsigned short int) (5 + var_1_7))) : (var_1_1 == ((unsigned short int) var_1_7))) : (var_1_1 == ((unsigned short int) 1))) && ((var_1_6 > (var_1_5 / (max (var_1_3 , var_1_9)))) ? (var_1_8 == ((unsigned char) (abs (var_1_10)))) : ((var_1_1 <= var_1_7) ? (var_1_8 == ((unsigned char) var_1_10)) : (var_1_8 == ((unsigned char) var_1_11))))) && (var_1_2 ? ((-128 > var_1_10) ? ((var_1_3 >= (2.75 / var_1_9)) ? (var_1_12 == ((signed long int) (var_1_11 + (var_1_1 + var_1_10)))) : (var_1_12 == ((signed long int) var_1_1))) : 1) : (var_1_12 == ((signed long int) var_1_8)))) && (var_1_2 ? (var_1_13 == ((signed long int) var_1_11)) : 1)) && ((var_1_10 == (max ((var_1_15 - var_1_16) , var_1_13))) ? (var_1_14 == ((signed char) (abs (var_1_17)))) : (var_1_14 == ((signed char) var_1_17)))) && ((var_1_7 == var_1_12) ? (var_1_18 == ((unsigned short int) (var_1_10 + (min (var_1_8 , var_1_16))))) : ((var_1_14 != var_1_16) ? ((-256 >= var_1_19) ? (var_1_18 == ((unsigned short int) var_1_16)) : (var_1_18 == ((unsigned short int) var_1_15))) : (var_1_18 == ((unsigned short int) var_1_10))))
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
