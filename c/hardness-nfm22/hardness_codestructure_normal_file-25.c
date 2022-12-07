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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch25normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -256;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 5;
unsigned char var_1_4 = 5;
signed short int var_1_5 = -256;
unsigned char var_1_6 = 1;
double var_1_7 = 256.25;
double var_1_8 = 127.8;
double var_1_9 = 100.5;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
float var_1_12 = 999.75;
float var_1_13 = 64.5;
float var_1_14 = 127.25;
signed char var_1_15 = -32;
float var_1_16 = 32.7;
unsigned char var_1_17 = 16;
unsigned char var_1_18 = 32;
unsigned short int var_1_19 = 5;
unsigned char var_1_20 = 0;
signed long int var_1_21 = 100;
signed short int var_1_22 = 50;
double var_1_23 = 1000000.75;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch25normal
	if (var_1_2 && (var_1_3 >= var_1_4)) {
		if (256 != var_1_3) {
			var_1_1 = (var_1_4 + var_1_3);
		}
	} else {
		if (var_1_4 >= var_1_3) {
			var_1_1 = var_1_3;
		} else {
			var_1_1 = var_1_4;
		}
	}


	// From: Req2Batch25normal
	if (var_1_2 && var_1_6) {
		var_1_5 = (min (var_1_4 , -100));
	} else {
		if ((var_1_7 - var_1_8) > var_1_9) {
			var_1_5 = var_1_3;
		} else {
			var_1_5 = var_1_4;
		}
	}


	// From: Req3Batch25normal
	var_1_10 = (var_1_6 && var_1_11);


	// From: Req4Batch25normal
	if (! (var_1_9 <= var_1_7)) {
		var_1_12 = (min (var_1_13 , var_1_14));
	} else {
		if (((max (var_1_1 , var_1_5)) / var_1_15) < var_1_4) {
			var_1_12 = var_1_13;
		} else {
			var_1_12 = (var_1_16 + 49.6f);
		}
	}


	// From: Req5Batch25normal
	if (var_1_8 != (abs (var_1_14))) {
		if (var_1_2) {
			var_1_17 = var_1_18;
		}
	}


	// From: Req6Batch25normal
	if (var_1_4 < var_1_18) {
		var_1_19 = var_1_3;
	} else {
		if ((var_1_20 || var_1_10) || var_1_6) {
			var_1_19 = var_1_3;
		} else {
			var_1_19 = var_1_4;
		}
	}


	// From: Req7Batch25normal
	var_1_21 = var_1_4;


	// From: Req8Batch25normal
	var_1_22 = var_1_17;


	// From: Req9Batch25normal
	var_1_23 = var_1_14;
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -128);
	assume_abort_if_not(var_1_15 <= 127);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
}



void updateLastVariables() {
}

int property() {
	return (((((((((var_1_2 && (var_1_3 >= var_1_4)) ? ((256 != var_1_3) ? (var_1_1 == ((signed long int) (var_1_4 + var_1_3))) : 1) : ((var_1_4 >= var_1_3) ? (var_1_1 == ((signed long int) var_1_3)) : (var_1_1 == ((signed long int) var_1_4)))) && ((var_1_2 && var_1_6) ? (var_1_5 == ((signed short int) (min (var_1_4 , -100)))) : (((var_1_7 - var_1_8) > var_1_9) ? (var_1_5 == ((signed short int) var_1_3)) : (var_1_5 == ((signed short int) var_1_4))))) && (var_1_10 == ((unsigned char) (var_1_6 && var_1_11)))) && ((! (var_1_9 <= var_1_7)) ? (var_1_12 == ((float) (min (var_1_13 , var_1_14)))) : ((((max (var_1_1 , var_1_5)) / var_1_15) < var_1_4) ? (var_1_12 == ((float) var_1_13)) : (var_1_12 == ((float) (var_1_16 + 49.6f)))))) && ((var_1_8 != (abs (var_1_14))) ? (var_1_2 ? (var_1_17 == ((unsigned char) var_1_18)) : 1) : 1)) && ((var_1_4 < var_1_18) ? (var_1_19 == ((unsigned short int) var_1_3)) : (((var_1_20 || var_1_10) || var_1_6) ? (var_1_19 == ((unsigned short int) var_1_3)) : (var_1_19 == ((unsigned short int) var_1_4))))) && (var_1_21 == ((signed long int) var_1_4))) && (var_1_22 == ((signed short int) var_1_17))) && (var_1_23 == ((double) var_1_14))
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
