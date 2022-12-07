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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch72stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 16;
double var_1_2 = 4.125;
double var_1_3 = 2.75;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 100;
unsigned long int var_1_6 = 0;
signed short int var_1_7 = 64;
signed short int var_1_8 = -128;
signed short int var_1_9 = 1;
signed char var_1_10 = 2;
signed char var_1_11 = 1;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
float var_1_14 = 64.3;
double var_1_15 = 100.25;
signed char var_1_16 = 32;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
double var_1_20 = 9.25;
double var_1_21 = 255.05;
double var_1_22 = 25.5;
unsigned char var_1_23 = 2;
unsigned long int var_1_24 = 1;
unsigned char var_1_25 = 1;
unsigned short int var_1_26 = 5;
unsigned char var_1_27 = 128;
unsigned char var_1_28 = 1;
signed long int var_1_29 = 128;
signed long int var_1_30 = -64;
unsigned long int var_1_31 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch72stepLocals
	unsigned long int stepLocal_0 = var_1_4 * var_1_5;
	if ((min (var_1_2 , 63.5)) > (2.4 * var_1_3)) {
		if (stepLocal_0 <= (~ var_1_6)) {
			var_1_1 = ((min (var_1_7 , var_1_8)) + var_1_9);
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = -50;
	}


	// From: Req2Batch72stepLocals
	if ((var_1_4 * var_1_5) <= var_1_6) {
		var_1_10 = (var_1_11 + 10);
	} else {
		if (var_1_12 || var_1_13) {
			if (((abs (var_1_2)) - var_1_14) == (var_1_3 + var_1_15)) {
				var_1_10 = (var_1_11 + var_1_16);
			} else {
				var_1_10 = var_1_11;
			}
		} else {
			var_1_10 = var_1_16;
		}
	}


	// From: Req3Batch72stepLocals
	var_1_17 = (var_1_18 && var_1_19);


	// From: Req4Batch72stepLocals
	if (! var_1_18) {
		var_1_20 = (max (var_1_21 , var_1_22));
	}


	// From: Req5Batch72stepLocals
	if ((var_1_4 + var_1_5) > var_1_24) {
		var_1_23 = var_1_25;
	}


	// From: Req6Batch72stepLocals
	if (256 >= var_1_7) {
		if (var_1_17 && (var_1_25 >= (var_1_27 - var_1_28))) {
			var_1_26 = 16;
		} else {
			var_1_26 = var_1_28;
		}
	} else {
		var_1_26 = var_1_25;
	}


	// From: Req7Batch72stepLocals
	var_1_29 = var_1_30;


	// From: Req8Batch72stepLocals
	var_1_31 = var_1_26;
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967295);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -16383);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -16383);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -16383);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -63);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 4294967295);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 127);
	assume_abort_if_not(var_1_27 <= 255);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483647);
	assume_abort_if_not(var_1_30 <= 2147483646);
}



void updateLastVariables() {
}

int property() {
	return (((((((((min (var_1_2 , 63.5)) > (2.4 * var_1_3)) ? (((var_1_4 * var_1_5) <= (~ var_1_6)) ? (var_1_1 == ((signed short int) ((min (var_1_7 , var_1_8)) + var_1_9))) : (var_1_1 == ((signed short int) var_1_8))) : (var_1_1 == ((signed short int) -50))) && (((var_1_4 * var_1_5) <= var_1_6) ? (var_1_10 == ((signed char) (var_1_11 + 10))) : ((var_1_12 || var_1_13) ? ((((abs (var_1_2)) - var_1_14) == (var_1_3 + var_1_15)) ? (var_1_10 == ((signed char) (var_1_11 + var_1_16))) : (var_1_10 == ((signed char) var_1_11))) : (var_1_10 == ((signed char) var_1_16))))) && (var_1_17 == ((unsigned char) (var_1_18 && var_1_19)))) && ((! var_1_18) ? (var_1_20 == ((double) (max (var_1_21 , var_1_22)))) : 1)) && (((var_1_4 + var_1_5) > var_1_24) ? (var_1_23 == ((unsigned char) var_1_25)) : 1)) && ((256 >= var_1_7) ? ((var_1_17 && (var_1_25 >= (var_1_27 - var_1_28))) ? (var_1_26 == ((unsigned short int) 16)) : (var_1_26 == ((unsigned short int) var_1_28))) : (var_1_26 == ((unsigned short int) var_1_25)))) && (var_1_29 == ((signed long int) var_1_30))) && (var_1_31 == ((unsigned long int) var_1_26))
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
