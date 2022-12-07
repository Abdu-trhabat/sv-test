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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch75PS_CN_10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 63.6;
float var_1_4 = 128.75;
float var_1_5 = 25.125;
float var_1_6 = 1000000.75;
unsigned char var_1_7 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
float var_1_15 = 25.75;
double var_1_16 = 0.4;
double var_1_17 = 0.0;
double var_1_18 = 0.0;
double var_1_19 = 1000000000000.5;
double var_1_20 = 24.8;
signed char var_1_21 = 1;
double var_1_22 = 200.8;
unsigned short int var_1_23 = 40076;
unsigned short int var_1_24 = 8;
unsigned long int var_1_25 = 2;
unsigned char var_1_26 = 0;
signed char var_1_27 = 4;
signed char var_1_28 = 0;
double var_1_29 = 64.5;
double var_1_30 = 9.875;
unsigned short int var_1_31 = 128;
unsigned short int var_1_32 = 1;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 10;

// Calibration values

// Last'ed variables
double last_1_var_1_22 = 200.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_26 = 0;


	// From: CodeObject2
	var_1_27 = var_1_28;


	// From: CodeObject3
	var_1_29 = var_1_30;


	// From: CodeObject4
	var_1_31 = var_1_32;


	// From: CodeObject5
	if (var_1_31 >= var_1_32) {
		if ((max (var_1_31 , 16)) < var_1_32) {
			var_1_33 = var_1_34;
		}
	}


	// From: Req3Batch75PS_CN_10
	if (! (var_1_4 < 16.8f)) {
		var_1_15 = var_1_6;
	}


	// From: Req7Batch75PS_CN_10
	var_1_25 = var_1_23;


	// From: Req2Batch75PS_CN_10
	if ((min ((var_1_25 + var_1_25) , (4 | var_1_25))) >= var_1_25) {
		var_1_7 = ((var_1_11 && var_1_12) && var_1_13);
	} else {
		if (var_1_6 == var_1_15) {
			var_1_7 = var_1_14;
		} else {
			var_1_7 = var_1_13;
		}
	}


	// From: Req4Batch75PS_CN_10
	if (var_1_25 > var_1_25) {
		var_1_16 = (((min (var_1_17 , var_1_18)) - var_1_19) - var_1_20);
	} else {
		if (var_1_18 > (var_1_20 + (var_1_19 * var_1_17))) {
			var_1_16 = var_1_6;
		} else {
			var_1_16 = var_1_20;
		}
	}


	// From: Req6Batch75PS_CN_10
	unsigned long int stepLocal_1 = var_1_25;
	if (var_1_18 < (last_1_var_1_22 * var_1_4)) {
		if ((var_1_23 - var_1_24) < stepLocal_1) {
			var_1_22 = var_1_5;
		} else {
			var_1_22 = var_1_17;
		}
	} else {
		var_1_22 = var_1_20;
	}


	// From: Req1Batch75PS_CN_10
	unsigned char stepLocal_0 = -1 <= var_1_25;
	if (stepLocal_0 || var_1_7) {
		var_1_1 = (var_1_4 + (var_1_5 + var_1_6));
	}


	// From: Req5Batch75PS_CN_10
	if ((- (var_1_17 + var_1_1)) >= var_1_16) {
		var_1_21 = (abs (-50));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -230584.3009213691390e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691390e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -230584.3009213691390e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691390e+12F && var_1_6 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 4611686.018427382800e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 4611686.018427382800e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 32767);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -127);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 254);
}



void updateLastVariables() {
	last_1_var_1_22 = var_1_22;
}

int property() {
	return ((((((((-1 <= var_1_25) || var_1_7) ? (var_1_1 == ((float) (var_1_4 + (var_1_5 + var_1_6)))) : 1) && (((min ((var_1_25 + var_1_25) , (4 | var_1_25))) >= var_1_25) ? (var_1_7 == ((unsigned char) ((var_1_11 && var_1_12) && var_1_13))) : ((var_1_6 == var_1_15) ? (var_1_7 == ((unsigned char) var_1_14)) : (var_1_7 == ((unsigned char) var_1_13))))) && ((! (var_1_4 < 16.8f)) ? (var_1_15 == ((float) var_1_6)) : 1)) && ((var_1_25 > var_1_25) ? (var_1_16 == ((double) (((min (var_1_17 , var_1_18)) - var_1_19) - var_1_20))) : ((var_1_18 > (var_1_20 + (var_1_19 * var_1_17))) ? (var_1_16 == ((double) var_1_6)) : (var_1_16 == ((double) var_1_20))))) && (((- (var_1_17 + var_1_1)) >= var_1_16) ? (var_1_21 == ((signed char) (abs (-50)))) : 1)) && ((var_1_18 < (last_1_var_1_22 * var_1_4)) ? (((var_1_23 - var_1_24) < var_1_25) ? (var_1_22 == ((double) var_1_5)) : (var_1_22 == ((double) var_1_17))) : (var_1_22 == ((double) var_1_20)))) && (var_1_25 == ((unsigned long int) var_1_23))
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
