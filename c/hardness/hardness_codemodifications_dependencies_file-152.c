// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch152dependencies.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 16;
signed char var_1_2 = 1;
signed char var_1_3 = 25;
signed char var_1_4 = -4;
signed char var_1_5 = 1;
signed char var_1_6 = 32;
signed char var_1_7 = 4;
signed long int var_1_8 = 4;
signed char var_1_9 = 100;
signed char var_1_10 = 100;
signed char var_1_11 = 1;
unsigned char var_1_12 = 0;
float var_1_13 = 31.25;
float var_1_14 = 99.5;
signed long int var_1_15 = -64;
float var_1_16 = 10.4;
float var_1_17 = 49.1;
unsigned short int var_1_18 = 0;
float var_1_19 = 0.1;
float var_1_20 = 0.0;
float var_1_21 = 0.0;
float var_1_22 = 0.4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch152dependencies
	var_1_1 = (max ((var_1_2 - 25) , (var_1_3 + (1 + var_1_4))));


	// From: Req5Batch152dependencies
	if (var_1_12) {
		var_1_15 = (var_1_2 - (abs (var_1_1)));
	}


	// From: Req2Batch152dependencies
	if (var_1_15 >= ((min (var_1_3 , var_1_4)) * 1)) {
		var_1_5 = var_1_3;
	}


	// From: Req3Batch152dependencies
	if ((var_1_2 / var_1_7) < ((var_1_4 | var_1_3) + (var_1_15 / var_1_8))) {
		var_1_6 = ((max (var_1_2 , var_1_9)) - (var_1_10 - var_1_11));
	} else {
		if (var_1_12) {
			var_1_6 = var_1_3;
		} else {
			var_1_6 = var_1_9;
		}
	}


	// From: Req4Batch152dependencies
	if (var_1_12) {
		if ((max (var_1_15 , (var_1_2 - var_1_11))) >= var_1_1) {
			var_1_13 = var_1_14;
		}
	}


	// From: Req6Batch152dependencies
	if ((var_1_13 / var_1_17) >= var_1_14) {
		if ((var_1_11 << (abs (var_1_18))) <= var_1_9) {
			var_1_16 = (var_1_19 - 64.4f);
		} else {
			if (var_1_15 >= var_1_1) {
				var_1_16 = (max (var_1_14 , (var_1_19 - (var_1_20 - var_1_21))));
			} else {
				var_1_16 = var_1_22;
			}
		}
	} else {
		var_1_16 = var_1_20;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 126);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -31);
	assume_abort_if_not(var_1_4 <= 31);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -128);
	assume_abort_if_not(var_1_7 <= 127);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 63);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 4611686.018427383000e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_1 == ((signed char) (max ((var_1_2 - 25) , (var_1_3 + (1 + var_1_4)))))) && ((var_1_15 >= ((min (var_1_3 , var_1_4)) * 1)) ? (var_1_5 == ((signed char) var_1_3)) : 1)) && (((var_1_2 / var_1_7) < ((var_1_4 | var_1_3) + (var_1_15 / var_1_8))) ? (var_1_6 == ((signed char) ((max (var_1_2 , var_1_9)) - (var_1_10 - var_1_11)))) : (var_1_12 ? (var_1_6 == ((signed char) var_1_3)) : (var_1_6 == ((signed char) var_1_9))))) && (var_1_12 ? (((max (var_1_15 , (var_1_2 - var_1_11))) >= var_1_1) ? (var_1_13 == ((float) var_1_14)) : 1) : 1)) && (var_1_12 ? (var_1_15 == ((signed long int) (var_1_2 - (abs (var_1_1))))) : 1)) && (((var_1_13 / var_1_17) >= var_1_14) ? (((var_1_11 << (abs (var_1_18))) <= var_1_9) ? (var_1_16 == ((float) (var_1_19 - 64.4f))) : ((var_1_15 >= var_1_1) ? (var_1_16 == ((float) (max (var_1_14 , (var_1_19 - (var_1_20 - var_1_21)))))) : (var_1_16 == ((float) var_1_22)))) : (var_1_16 == ((float) var_1_20)))
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
