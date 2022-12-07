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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch54PS_CN_25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -4;
signed short int var_1_4 = 256;
signed short int var_1_5 = 0;
signed short int var_1_6 = 25;
signed short int var_1_8 = 100;
unsigned char var_1_9 = 1;
signed short int var_1_10 = -4;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 64;
double var_1_15 = 10.3;
double var_1_16 = 128.6;
unsigned long int var_1_17 = 2600113953;
float var_1_18 = 8.25;
float var_1_19 = 31.5;
float var_1_20 = 2.625;
float var_1_21 = 999999999999999.2;
float var_1_22 = 127.5;
float var_1_23 = 4.8;
float var_1_24 = 16.5;
signed long int var_1_25 = 10;
unsigned char var_1_26 = 64;
unsigned short int var_1_27 = 16;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
signed long int var_1_30 = 2;
signed long int var_1_31 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_9 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_23 = var_1_24;


	// From: CodeObject2
	var_1_25 = 256;


	// From: CodeObject3
	if (var_1_24 > (max (63.125f , var_1_23))) {
		var_1_26 = (abs (1));
	}


	// From: CodeObject4
	var_1_27 = var_1_26;


	// From: CodeObject5
	if (1 > var_1_27) {
		if (var_1_25 < (var_1_27 * var_1_26)) {
			var_1_28 = var_1_29;
		}
	}


	// From: CodeObject6
	if (var_1_23 < var_1_24) {
		if ((var_1_26 ^ var_1_25) > (max (var_1_27 , (abs (var_1_31))))) {
			var_1_30 = (min (var_1_26 , var_1_27));
		}
	} else {
		if (var_1_29) {
			var_1_30 = var_1_27;
		} else {
			var_1_30 = var_1_26;
		}
	}


	// From: Req2Batch54PS_CN_25
	if (last_1_var_1_9) {
		if (var_1_5 == var_1_4) {
			var_1_6 = (min ((abs (var_1_5)) , (var_1_4 - var_1_8)));
		} else {
			var_1_6 = var_1_8;
		}
	} else {
		var_1_6 = var_1_4;
	}


	// From: Req6Batch54PS_CN_25
	if (-32 >= (var_1_5 - var_1_8)) {
		if (var_1_10 > var_1_6) {
			var_1_18 = ((var_1_19 - var_1_20) + (var_1_21 + var_1_22));
		} else {
			var_1_18 = var_1_20;
		}
	} else {
		var_1_18 = var_1_19;
	}


	// From: Req5Batch54PS_CN_25
	if (var_1_18 < (max (var_1_18 , (var_1_15 - var_1_16)))) {
		var_1_14 = (var_1_17 - (var_1_8 + var_1_4));
	}


	// From: Req3Batch54PS_CN_25
	unsigned long int stepLocal_0 = var_1_14;
	if (((var_1_8 % var_1_10) * (8 + var_1_14)) >= stepLocal_0) {
		var_1_9 = ((! var_1_11) || var_1_12);
	} else {
		var_1_9 = (! var_1_12);
	}


	// From: Req1Batch54PS_CN_25
	if (var_1_18 > var_1_18) {
		var_1_1 = ((min ((2 + var_1_4) , var_1_5)) - 2);
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req4Batch54PS_CN_25
	unsigned long int stepLocal_1 = min (var_1_14 , var_1_5);
	if (((var_1_8 * var_1_1) + var_1_4) >= stepLocal_1) {
		var_1_13 = var_1_12;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32768);
	assume_abort_if_not(var_1_10 <= 32767);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691390e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -230584.3009213691390e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483647);
	assume_abort_if_not(var_1_31 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
}

int property() {
	return ((((((var_1_18 > var_1_18) ? (var_1_1 == ((signed short int) ((min ((2 + var_1_4) , var_1_5)) - 2))) : (var_1_1 == ((signed short int) var_1_4))) && (last_1_var_1_9 ? ((var_1_5 == var_1_4) ? (var_1_6 == ((signed short int) (min ((abs (var_1_5)) , (var_1_4 - var_1_8))))) : (var_1_6 == ((signed short int) var_1_8))) : (var_1_6 == ((signed short int) var_1_4)))) && ((((var_1_8 % var_1_10) * (8 + var_1_14)) >= var_1_14) ? (var_1_9 == ((unsigned char) ((! var_1_11) || var_1_12))) : (var_1_9 == ((unsigned char) (! var_1_12))))) && ((((var_1_8 * var_1_1) + var_1_4) >= (min (var_1_14 , var_1_5))) ? (var_1_13 == ((unsigned char) var_1_12)) : 1)) && ((var_1_18 < (max (var_1_18 , (var_1_15 - var_1_16)))) ? (var_1_14 == ((unsigned long int) (var_1_17 - (var_1_8 + var_1_4)))) : 1)) && ((-32 >= (var_1_5 - var_1_8)) ? ((var_1_10 > var_1_6) ? (var_1_18 == ((float) ((var_1_19 - var_1_20) + (var_1_21 + var_1_22)))) : (var_1_18 == ((float) var_1_20))) : (var_1_18 == ((float) var_1_19)))
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
