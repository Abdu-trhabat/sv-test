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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch45PS_CN_10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -256;
unsigned char var_1_2 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = -10;
unsigned short int var_1_7 = 10;
unsigned short int var_1_8 = 57653;
unsigned short int var_1_9 = 4;
signed char var_1_10 = -4;
signed char var_1_11 = 2;
signed char var_1_12 = 64;
signed char var_1_13 = 100;
signed short int var_1_14 = -1;
signed char var_1_15 = 32;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned long int var_1_18 = 50;
float var_1_19 = 100.875;
float var_1_20 = 25.5;
signed char var_1_21 = -8;
signed char var_1_22 = 8;
unsigned short int var_1_23 = 2;
unsigned short int var_1_24 = 16;
unsigned long int var_1_25 = 16;
unsigned long int var_1_26 = 3750021632;
signed long int var_1_27 = -32;
signed long int var_1_28 = -256;
unsigned char var_1_29 = 32;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_19 = var_1_20;


	// From: CodeObject2
	var_1_21 = var_1_22;


	// From: CodeObject3
	var_1_23 = var_1_24;


	// From: CodeObject4
	var_1_25 = (var_1_26 - (abs (var_1_24)));


	// From: CodeObject5
	var_1_27 = var_1_21;


	// From: CodeObject6
	var_1_28 = var_1_24;


	// From: CodeObject7
	var_1_29 = var_1_30;


	// From: CodeObject8
	var_1_31 = var_1_30;


	// From: Req4Batch45PS_CN_10
	if (var_1_8 > var_1_9) {
		var_1_10 = (abs (var_1_11));
	} else {
		var_1_10 = (var_1_12 - (var_1_13 - 8));
	}


	// From: Req7Batch45PS_CN_10
	if (var_1_2) {
		var_1_16 = (var_1_5 || var_1_17);
	}


	// From: Req8Batch45PS_CN_10
	var_1_18 = var_1_8;


	// From: Req2Batch45PS_CN_10
	unsigned long int stepLocal_2 = var_1_18;
	signed char stepLocal_1 = var_1_10;
	if (stepLocal_2 <= var_1_10) {
		if (var_1_10 <= stepLocal_1) {
			var_1_6 = var_1_10;
		}
	}


	// From: Req3Batch45PS_CN_10
	var_1_7 = (min ((var_1_8 - var_1_18) , var_1_9));


	// From: Req5Batch45PS_CN_10
	if (! var_1_16) {
		if (var_1_16) {
			var_1_14 = ((32 + var_1_10) + (abs (var_1_11)));
		} else {
			var_1_14 = -50;
		}
	}


	// From: Req6Batch45PS_CN_10
	signed long int stepLocal_3 = var_1_6 * (var_1_6 + var_1_8);
	if (var_1_14 >= stepLocal_3) {
		var_1_15 = (min ((max (var_1_13 , var_1_11)) , (abs (var_1_12))));
	} else {
		var_1_15 = (min (var_1_11 , var_1_12));
	}


	// From: Req1Batch45PS_CN_10
	signed long int stepLocal_0 = ~ var_1_15;
	if (var_1_16) {
		if (stepLocal_0 <= (var_1_10 + 100000000)) {
			if (! var_1_16) {
				var_1_1 = (abs (var_1_15));
			} else {
				var_1_1 = (var_1_15 + 32);
			}
		} else {
			var_1_1 = var_1_15;
		}
	} else {
		var_1_1 = var_1_15;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 32767);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -126);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 63);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854765600e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -127);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65534);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 2147483647);
	assume_abort_if_not(var_1_26 <= 4294967294);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 254);
}



void updateLastVariables() {
}

int property() {
	return (((((((var_1_16 ? (((~ var_1_15) <= (var_1_10 + 100000000)) ? ((! var_1_16) ? (var_1_1 == ((signed short int) (abs (var_1_15)))) : (var_1_1 == ((signed short int) (var_1_15 + 32)))) : (var_1_1 == ((signed short int) var_1_15))) : (var_1_1 == ((signed short int) var_1_15))) && ((var_1_18 <= var_1_10) ? ((var_1_10 <= var_1_10) ? (var_1_6 == ((signed long int) var_1_10)) : 1) : 1)) && (var_1_7 == ((unsigned short int) (min ((var_1_8 - var_1_18) , var_1_9))))) && ((var_1_8 > var_1_9) ? (var_1_10 == ((signed char) (abs (var_1_11)))) : (var_1_10 == ((signed char) (var_1_12 - (var_1_13 - 8)))))) && ((! var_1_16) ? (var_1_16 ? (var_1_14 == ((signed short int) ((32 + var_1_10) + (abs (var_1_11))))) : (var_1_14 == ((signed short int) -50))) : 1)) && ((var_1_14 >= (var_1_6 * (var_1_6 + var_1_8))) ? (var_1_15 == ((signed char) (min ((max (var_1_13 , var_1_11)) , (abs (var_1_12)))))) : (var_1_15 == ((signed char) (min (var_1_11 , var_1_12)))))) && (var_1_2 ? (var_1_16 == ((unsigned char) (var_1_5 || var_1_17))) : 1)) && (var_1_18 == ((unsigned long int) var_1_8))
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
