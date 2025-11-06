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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch152no_floats.c", 13, "reach_error"); }
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
signed short int var_1_1 = 16;
signed long int var_1_3 = -10;
signed short int var_1_4 = 500;
signed char var_1_5 = 32;
signed char var_1_6 = 4;
signed long int var_1_8 = 4;
signed char var_1_9 = 100;
signed char var_1_10 = 100;
signed char var_1_11 = 100;
signed char var_1_12 = 1;
signed char var_1_14 = 4;
signed char var_1_15 = -2;
unsigned char var_1_16 = 32;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
signed char var_1_19 = 10;
signed long int var_1_20 = 256;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_20 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch152no_floats
	signed long int stepLocal_0 = last_1_var_1_20 + 5;
	if (10 > stepLocal_0) {
		if (-5 != var_1_3) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = 16;
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req6Batch152no_floats
	var_1_20 = var_1_1;


	// From: Req4Batch152no_floats
	var_1_17 = var_1_18;


	// From: Req5Batch152no_floats
	var_1_19 = var_1_9;


	// From: Req2Batch152no_floats
	signed long int stepLocal_1 = var_1_20 / var_1_6;
	if (stepLocal_1 < ((var_1_4 | var_1_1) + (var_1_20 / var_1_8))) {
		var_1_5 = ((max (var_1_9 , var_1_10)) - (var_1_11 - var_1_12));
	} else {
		if (var_1_17) {
			var_1_5 = (max ((var_1_12 - (var_1_11 - var_1_14)) , var_1_9));
		} else {
			var_1_5 = var_1_15;
		}
	}


	// From: Req3Batch152no_floats
	if (! var_1_17) {
		var_1_16 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -128);
	assume_abort_if_not(var_1_6 <= 127);
	assume_abort_if_not(var_1_6 != 0);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 63);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -127);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	return ((((((10 > (last_1_var_1_20 + 5)) ? ((-5 != var_1_3) ? (var_1_1 == ((signed short int) var_1_4)) : (var_1_1 == ((signed short int) 16))) : (var_1_1 == ((signed short int) var_1_4))) && (((var_1_20 / var_1_6) < ((var_1_4 | var_1_1) + (var_1_20 / var_1_8))) ? (var_1_5 == ((signed char) ((max (var_1_9 , var_1_10)) - (var_1_11 - var_1_12)))) : (var_1_17 ? (var_1_5 == ((signed char) (max ((var_1_12 - (var_1_11 - var_1_14)) , var_1_9)))) : (var_1_5 == ((signed char) var_1_15))))) && ((! var_1_17) ? (var_1_16 == ((unsigned char) var_1_12)) : 1)) && (var_1_17 == ((unsigned char) var_1_18))) && (var_1_19 == ((signed char) var_1_9))) && (var_1_20 == ((signed long int) var_1_1))
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
