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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch23Filler_PE_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
float var_1_4 = 1.4;
float var_1_7 = 9.25;
float var_1_8 = 1.2;
float var_1_9 = 0.0;
float var_1_10 = 3.1;
float var_1_11 = 500.5;
signed long int var_1_12 = 0;
unsigned char var_1_13 = 10;
unsigned char var_1_14 = 8;
unsigned char var_1_17 = 64;
unsigned long int var_1_18 = 25;
signed char var_1_19 = -100;
signed short int var_1_20 = -4;
unsigned short int var_1_21 = 200;
unsigned short int var_1_22 = 54878;
double var_1_23 = 9999.8;
float var_1_24 = -0.25;
signed char var_1_25 = 50;
signed char var_1_26 = 100;
unsigned char var_1_36 = 32;
unsigned char var_1_39 = 64;
unsigned char var_1_40 = 16;
unsigned short int var_1_42 = 8;
signed char var_1_43 = -16;
unsigned char var_1_46 = 128;
unsigned short int var_1_47 = 64;
signed char var_1_49 = 0;

// Calibration values

// Last'ed variables
signed char last_1_var_1_19 = -100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch23Filler_PE_CI
	if (var_1_2) {
		var_1_1 = var_1_3;
	}


	// From: Req6Batch23Filler_PE_CI
	signed long int stepLocal_4 = 5;
	if (stepLocal_4 <= var_1_17) {
		var_1_21 = (var_1_22 - var_1_17);
	} else {
		if (var_1_1) {
			if (var_1_1) {
				var_1_21 = var_1_17;
			} else {
				var_1_21 = var_1_17;
			}
		}
	}


	// From: Req7Batch23Filler_PE_CI
	var_1_23 = var_1_10;


	// From: Req8Batch23Filler_PE_CI
	var_1_24 = 31.75f;


	// From: Req9Batch23Filler_PE_CI
	var_1_25 = -5;


	// From: Req2Batch23Filler_PE_CI
	unsigned char stepLocal_0 = var_1_1;
	if ((var_1_23 <= var_1_23) || stepLocal_0) {
		var_1_4 = (max (31.5f , (min (var_1_7 , var_1_8))));
	} else {
		var_1_4 = ((var_1_9 - var_1_10) - var_1_11);
	}


	// From: Req3Batch23Filler_PE_CI
	signed long int stepLocal_3 = (200 - var_1_13) - var_1_14;
	unsigned char stepLocal_2 = var_1_13;
	unsigned char stepLocal_1 = var_1_13;
	if (stepLocal_3 != var_1_25) {
		var_1_12 = (var_1_13 + (min (var_1_14 , var_1_21)));
	} else {
		if ((var_1_25 / (128 - var_1_17)) < stepLocal_2) {
			if (stepLocal_1 >= var_1_25) {
				var_1_12 = var_1_14;
			} else {
				var_1_12 = var_1_17;
			}
		} else {
			var_1_12 = var_1_17;
		}
	}


	// From: Req4Batch23Filler_PE_CI
	if ((- (var_1_13 / var_1_17)) > var_1_25) {
		var_1_18 = var_1_13;
	}


	// From: Req5Batch23Filler_PE_CI
	if ((last_1_var_1_19 / (min (var_1_17 , var_1_20))) > var_1_21) {
		var_1_19 = (max (var_1_17 , var_1_13));
	} else {
		var_1_19 = var_1_17;
	}


	// From: CodeObject1
	if (var_1_9 < 256.5) {
		if (((max (var_1_17 , var_1_13)) > var_1_13) && (var_1_9 < var_1_9)) {
			var_1_26 = (max (var_1_13 , var_1_17));
		} else {
			if ((var_1_13 < var_1_13) && var_1_3) {
				var_1_26 = var_1_13;
			} else {
				var_1_26 = (abs (var_1_17));
			}
		}
	}


	// From: CodeObject2
	if ((var_1_11 - var_1_9) > var_1_23) {
		var_1_36 = ((var_1_39 - var_1_40) + var_1_17);
	} else {
		var_1_36 = var_1_40;
	}


	// From: CodeObject3
	if (var_1_1) {
		var_1_42 = 256;
	}


	// From: CodeObject4
	if (((max (var_1_10 , var_1_10)) / var_1_9) > (min (var_1_9 , var_1_10))) {
		if ((-5 < var_1_17) && var_1_1) {
			if (var_1_17 >= var_1_39) {
				var_1_43 = (abs (var_1_13));
			} else {
				var_1_43 = var_1_17;
			}
		}
	}


	// From: CodeObject5
	var_1_46 = var_1_40;


	// From: CodeObject6
	if (var_1_13 < (max (var_1_40 , var_1_17))) {
		if (var_1_1 || (128.5 <= var_1_8)) {
			var_1_47 = (var_1_22 - var_1_39);
		}
	} else {
		var_1_47 = (max ((max (var_1_21 , var_1_39)) , var_1_13));
	}


	// From: CodeObject7
	var_1_49 = var_1_13;
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 0);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 4611686.018427382800e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 64);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 126);
	assume_abort_if_not(var_1_17 != 127);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -32768);
	assume_abort_if_not(var_1_20 <= 32767);
	assume_abort_if_not(var_1_20 != 0);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 32767);
	assume_abort_if_not(var_1_22 <= 65534);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 63);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 63);
}



void updateLastVariables() {
	last_1_var_1_19 = var_1_19;
}

int property() {
	return ((((((((var_1_2 ? (var_1_1 == ((unsigned char) var_1_3)) : 1) && (((var_1_23 <= var_1_23) || var_1_1) ? (var_1_4 == ((float) (max (31.5f , (min (var_1_7 , var_1_8)))))) : (var_1_4 == ((float) ((var_1_9 - var_1_10) - var_1_11))))) && ((((200 - var_1_13) - var_1_14) != var_1_25) ? (var_1_12 == ((signed long int) (var_1_13 + (min (var_1_14 , var_1_21))))) : (((var_1_25 / (128 - var_1_17)) < var_1_13) ? ((var_1_13 >= var_1_25) ? (var_1_12 == ((signed long int) var_1_14)) : (var_1_12 == ((signed long int) var_1_17))) : (var_1_12 == ((signed long int) var_1_17))))) && (((- (var_1_13 / var_1_17)) > var_1_25) ? (var_1_18 == ((unsigned long int) var_1_13)) : 1)) && (((last_1_var_1_19 / (min (var_1_17 , var_1_20))) > var_1_21) ? (var_1_19 == ((signed char) (max (var_1_17 , var_1_13)))) : (var_1_19 == ((signed char) var_1_17)))) && ((5 <= var_1_17) ? (var_1_21 == ((unsigned short int) (var_1_22 - var_1_17))) : (var_1_1 ? (var_1_1 ? (var_1_21 == ((unsigned short int) var_1_17)) : (var_1_21 == ((unsigned short int) var_1_17))) : 1))) && (var_1_23 == ((double) var_1_10))) && (var_1_24 == ((float) 31.75f))) && (var_1_25 == ((signed char) -5))
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
