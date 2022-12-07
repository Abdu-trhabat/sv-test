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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch37stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 256;
unsigned short int var_1_2 = 51640;
unsigned short int var_1_3 = 5;
signed long int var_1_4 = -100;
signed long int var_1_5 = 0;
signed long int var_1_6 = -1000000;
float var_1_7 = 128.8;
unsigned char var_1_8 = 2;
float var_1_9 = 256.5;
float var_1_10 = 7.25;
signed char var_1_11 = 64;
signed char var_1_12 = -16;
double var_1_13 = 0.9;
unsigned char var_1_14 = 1;
double var_1_15 = 0.0;
double var_1_16 = 1.275;
unsigned short int var_1_17 = 8;
unsigned short int var_1_18 = 35331;
signed char var_1_19 = -128;
double var_1_20 = 0.0;
double var_1_21 = 0.0;
signed char var_1_22 = -8;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch37stepLocals
	if ((var_1_2 - var_1_3) > var_1_4) {
		var_1_1 = (min ((min ((var_1_5 + var_1_3) , var_1_2)) , var_1_6));
	} else {
		var_1_1 = 0;
	}


	// From: Req2Batch37stepLocals
	signed long int stepLocal_1 = var_1_1 / (min (2 , var_1_2));
	unsigned short int stepLocal_0 = var_1_3;
	if ((var_1_5 / var_1_8) < stepLocal_1) {
		if (var_1_1 >= stepLocal_0) {
			var_1_7 = 0.75f;
		} else {
			var_1_7 = var_1_9;
		}
	}


	// From: Req3Batch37stepLocals
	if ((var_1_6 >= var_1_4) || (var_1_9 > var_1_7)) {
		var_1_10 = var_1_9;
	}


	// From: Req4Batch37stepLocals
	if (var_1_10 >= var_1_7) {
		if (var_1_9 < var_1_10) {
			var_1_11 = var_1_12;
		}
	}


	// From: Req5Batch37stepLocals
	signed long int stepLocal_2 = var_1_3 + var_1_6;
	if (var_1_14) {
		if (var_1_10 <= var_1_9) {
			var_1_13 = var_1_9;
		} else {
			if ((min (var_1_5 , (var_1_2 * var_1_1))) == stepLocal_2) {
				var_1_13 = 8.75;
			} else {
				var_1_13 = (16.5 + ((var_1_15 - 49.35) - var_1_16));
			}
		}
	}


	// From: Req6Batch37stepLocals
	var_1_17 = (var_1_18 - var_1_3);


	// From: Req7Batch37stepLocals
	if (var_1_13 > ((var_1_20 - var_1_15) - (var_1_21 - var_1_16))) {
		var_1_19 = (max (var_1_12 , var_1_22));
	} else {
		var_1_19 = var_1_12;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 32767);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1073741823);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483647);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 255);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 2305843.009213691390e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 32767);
	assume_abort_if_not(var_1_18 <= 65534);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 4611686.018427387900e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 4611686.018427387900e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -127);
	assume_abort_if_not(var_1_22 <= 126);
}



void updateLastVariables() {
}

int property() {
	return ((((((((var_1_2 - var_1_3) > var_1_4) ? (var_1_1 == ((signed long int) (min ((min ((var_1_5 + var_1_3) , var_1_2)) , var_1_6)))) : (var_1_1 == ((signed long int) 0))) && (((var_1_5 / var_1_8) < (var_1_1 / (min (2 , var_1_2)))) ? ((var_1_1 >= var_1_3) ? (var_1_7 == ((float) 0.75f)) : (var_1_7 == ((float) var_1_9))) : 1)) && (((var_1_6 >= var_1_4) || (var_1_9 > var_1_7)) ? (var_1_10 == ((float) var_1_9)) : 1)) && ((var_1_10 >= var_1_7) ? ((var_1_9 < var_1_10) ? (var_1_11 == ((signed char) var_1_12)) : 1) : 1)) && (var_1_14 ? ((var_1_10 <= var_1_9) ? (var_1_13 == ((double) var_1_9)) : (((min (var_1_5 , (var_1_2 * var_1_1))) == (var_1_3 + var_1_6)) ? (var_1_13 == ((double) 8.75)) : (var_1_13 == ((double) (16.5 + ((var_1_15 - 49.35) - var_1_16)))))) : 1)) && (var_1_17 == ((unsigned short int) (var_1_18 - var_1_3)))) && ((var_1_13 > ((var_1_20 - var_1_15) - (var_1_21 - var_1_16))) ? (var_1_19 == ((signed char) (max (var_1_12 , var_1_22)))) : (var_1_19 == ((signed char) var_1_12)))
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
