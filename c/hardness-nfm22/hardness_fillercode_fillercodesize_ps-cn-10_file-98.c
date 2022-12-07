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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch98PS_CN_10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -64;
signed short int var_1_4 = -10;
signed short int var_1_5 = 100;
double var_1_6 = 0.5;
double var_1_7 = 16.5;
double var_1_8 = 7.4;
unsigned short int var_1_9 = 4;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 1000000000;
unsigned short int var_1_12 = 256;
signed short int var_1_13 = 16;
signed short int var_1_14 = 64;
unsigned short int var_1_15 = 63836;
unsigned short int var_1_16 = 10;
signed char var_1_17 = -8;
signed char var_1_18 = 8;
signed short int var_1_19 = 50;
signed short int var_1_20 = 10;
signed short int var_1_21 = 10000;
signed char var_1_22 = -2;
float var_1_23 = 3.2;
float var_1_24 = 0.19999999999999996;
double var_1_25 = 31.25;
float var_1_26 = 16.8;
signed long int var_1_27 = 128;
signed long int var_1_28 = 25;
signed char var_1_29 = 2;
signed char var_1_30 = 32;
signed char var_1_31 = 4;
signed long int var_1_32 = -4;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_23 = var_1_24;


	// From: CodeObject2
	var_1_25 = var_1_24;


	// From: CodeObject3
	var_1_26 = var_1_24;


	// From: CodeObject4
	var_1_27 = var_1_28;


	// From: CodeObject5
	var_1_29 = (max (var_1_30 , var_1_31));


	// From: CodeObject6
	if (var_1_27 <= var_1_31) {
		var_1_32 = (abs (var_1_30));
	}


	// From: Req5Batch98PS_CN_10
	if ((var_1_5 * (var_1_13 - var_1_14)) <= last_1_var_1_1) {
		var_1_12 = (var_1_15 - (max (var_1_14 , var_1_16)));
	}


	// From: Req4Batch98PS_CN_10
	var_1_11 = (abs (max (2u , (3986216790u - var_1_12))));


	// From: Req1Batch98PS_CN_10
	unsigned short int stepLocal_3 = var_1_12;
	unsigned short int stepLocal_2 = var_1_12;
	unsigned short int stepLocal_1 = var_1_12;
	unsigned long int stepLocal_0 = var_1_11;
	if (stepLocal_3 <= ((var_1_11 / var_1_4) & 8)) {
		if (-16 <= stepLocal_0) {
			if (stepLocal_2 != (var_1_11 / (min (var_1_4 , var_1_5)))) {
				var_1_1 = (max (var_1_11 , var_1_12));
			} else {
				var_1_1 = (abs (var_1_12));
			}
		}
	} else {
		if (var_1_11 <= stepLocal_1) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = var_1_11;
		}
	}


	// From: Req3Batch98PS_CN_10
	if (var_1_10) {
		if (var_1_4 < (var_1_12 + var_1_5)) {
			var_1_9 = 16;
		}
	}


	// From: Req6Batch98PS_CN_10
	var_1_17 = var_1_18;


	// From: Req7Batch98PS_CN_10
	if (var_1_13 <= var_1_11) {
		var_1_19 = ((var_1_12 + 25) + (var_1_20 - (var_1_21 - 1)));
	} else {
		var_1_19 = (max ((abs (var_1_18)) , var_1_12));
	}


	// From: Req8Batch98PS_CN_10
	var_1_22 = var_1_18;


	// From: Req2Batch98PS_CN_10
	if (var_1_19 <= var_1_1) {
		var_1_6 = (var_1_7 + var_1_8);
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32768);
	assume_abort_if_not(var_1_5 <= 32767);
	assume_abort_if_not(var_1_5 != 0);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 32767);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -127);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 16383);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 8191);
	assume_abort_if_not(var_1_21 <= 16383);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483647);
	assume_abort_if_not(var_1_28 <= 2147483646);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -127);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 126);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
}

int property() {
	return ((((((((var_1_12 <= ((var_1_11 / var_1_4) & 8)) ? ((-16 <= var_1_11) ? ((var_1_12 != (var_1_11 / (min (var_1_4 , var_1_5)))) ? (var_1_1 == ((signed long int) (max (var_1_11 , var_1_12)))) : (var_1_1 == ((signed long int) (abs (var_1_12))))) : 1) : ((var_1_11 <= var_1_12) ? (var_1_1 == ((signed long int) var_1_4)) : (var_1_1 == ((signed long int) var_1_11)))) && ((var_1_19 <= var_1_1) ? (var_1_6 == ((double) (var_1_7 + var_1_8))) : 1)) && (var_1_10 ? ((var_1_4 < (var_1_12 + var_1_5)) ? (var_1_9 == ((unsigned short int) 16)) : 1) : 1)) && (var_1_11 == ((unsigned long int) (abs (max (2u , (3986216790u - var_1_12))))))) && (((var_1_5 * (var_1_13 - var_1_14)) <= last_1_var_1_1) ? (var_1_12 == ((unsigned short int) (var_1_15 - (max (var_1_14 , var_1_16))))) : 1)) && (var_1_17 == ((signed char) var_1_18))) && ((var_1_13 <= var_1_11) ? (var_1_19 == ((signed short int) ((var_1_12 + 25) + (var_1_20 - (var_1_21 - 1))))) : (var_1_19 == ((signed short int) (max ((abs (var_1_18)) , var_1_12)))))) && (var_1_22 == ((signed char) var_1_18))
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
