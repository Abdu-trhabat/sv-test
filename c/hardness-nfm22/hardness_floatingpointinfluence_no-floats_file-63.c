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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch63no_floats.c", 13, "reach_error"); }
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
signed long int var_1_2 = 8;
signed long int var_1_3 = 2;
signed long int var_1_4 = 10;
unsigned char var_1_6 = 0;
signed long int var_1_7 = 128;
signed long int var_1_8 = 9;
unsigned long int var_1_13 = 1;
unsigned long int var_1_14 = 32;
signed char var_1_15 = -10;
signed char var_1_16 = 16;
signed char var_1_17 = 25;
signed char var_1_18 = 1;
signed char var_1_19 = 0;
signed char var_1_20 = 32;
signed short int var_1_21 = 256;
signed char var_1_22 = 16;
unsigned char var_1_23 = 0;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_21 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch63no_floats
	var_1_13 = var_1_14;


	// From: Req5Batch63no_floats
	var_1_21 = last_1_var_1_21;


	// From: Req6Batch63no_floats
	var_1_22 = var_1_16;


	// From: Req7Batch63no_floats
	var_1_23 = var_1_6;


	// From: Req1Batch63no_floats
	if ((min (1.1f , var_1_2)) > (var_1_3 * var_1_4)) {
		var_1_1 = (var_1_23 && var_1_6);
	}


	// From: Req4Batch63no_floats
	signed char stepLocal_0 = var_1_22;
	if (stepLocal_0 != (min (var_1_22 , var_1_21))) {
		var_1_15 = ((min ((10 + var_1_16) , var_1_17)) - ((32 - var_1_18) + (max (var_1_19 , var_1_20))));
	}


	// From: Req2Batch63no_floats
	if (var_1_4 <= ((min (var_1_2 , var_1_3)) * var_1_8)) {
		var_1_7 = (max ((max ((var_1_22 + var_1_15) , var_1_15)) , (abs (var_1_15))));
	} else {
		var_1_7 = var_1_22;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967294);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 31);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
}



void updateLastVariables() {
	last_1_var_1_21 = var_1_21;
}

int property() {
	return ((((((((min (1.1f , var_1_2)) > (var_1_3 * var_1_4)) ? (var_1_1 == ((unsigned char) (var_1_23 && var_1_6))) : 1) && ((var_1_4 <= ((min (var_1_2 , var_1_3)) * var_1_8)) ? (var_1_7 == ((signed long int) (max ((max ((var_1_22 + var_1_15) , var_1_15)) , (abs (var_1_15)))))) : (var_1_7 == ((signed long int) var_1_22)))) && (var_1_13 == ((unsigned long int) var_1_14))) && ((var_1_22 != (min (var_1_22 , var_1_21))) ? (var_1_15 == ((signed char) ((min ((10 + var_1_16) , var_1_17)) - ((32 - var_1_18) + (max (var_1_19 , var_1_20)))))) : 1)) && (var_1_21 == ((signed short int) last_1_var_1_21))) && (var_1_22 == ((signed char) var_1_16))) && (var_1_23 == ((unsigned char) var_1_6))
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
