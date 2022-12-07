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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch83no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 128;
unsigned char var_1_2 = 0;
unsigned short int var_1_3 = 25;
unsigned char var_1_4 = 4;
signed long int var_1_8 = 127;
signed long int var_1_10 = 0;
signed long int var_1_11 = 128;
signed long int var_1_12 = 24;
signed short int var_1_14 = -128;
signed char var_1_15 = 64;
signed char var_1_16 = 5;
signed long int var_1_17 = 1;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch83no_floats
	var_1_14 = 200;


	// From: Req5Batch83no_floats
	var_1_15 = var_1_16;


	// From: Req6Batch83no_floats
	var_1_17 = var_1_10;


	// From: Req1Batch83no_floats
	signed long int stepLocal_0 = var_1_3 / var_1_4;
	if (var_1_2) {
		var_1_1 = (abs (abs (var_1_3)));
	} else {
		if (stepLocal_0 >= (min ((last_1_var_1_1 * var_1_15) , (~ last_1_var_1_1)))) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = var_1_3;
		}
	}


	// From: Req2Batch83no_floats
	signed long int stepLocal_2 = var_1_3 + var_1_1;
	signed long int stepLocal_1 = var_1_14 ^ var_1_15;
	if (var_1_15 <= stepLocal_2) {
		if (var_1_1 == stepLocal_1) {
			var_1_8 = ((abs (var_1_10)) + var_1_11);
		} else {
			var_1_8 = var_1_11;
		}
	} else {
		var_1_8 = var_1_10;
	}


	// From: Req3Batch83no_floats
	if (var_1_15 > var_1_15) {
		var_1_12 = (min (var_1_11 , var_1_10));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483648);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
}

int property() {
	return (((((var_1_2 ? (var_1_1 == ((unsigned short int) (abs (abs (var_1_3))))) : (((var_1_3 / var_1_4) >= (min ((last_1_var_1_1 * var_1_15) , (~ last_1_var_1_1)))) ? (var_1_1 == ((unsigned short int) var_1_4)) : (var_1_1 == ((unsigned short int) var_1_3)))) && ((var_1_15 <= (var_1_3 + var_1_1)) ? ((var_1_1 == (var_1_14 ^ var_1_15)) ? (var_1_8 == ((signed long int) ((abs (var_1_10)) + var_1_11))) : (var_1_8 == ((signed long int) var_1_11))) : (var_1_8 == ((signed long int) var_1_10)))) && ((var_1_15 > var_1_15) ? (var_1_12 == ((signed long int) (min (var_1_11 , var_1_10)))) : 1)) && (var_1_14 == ((signed short int) 200))) && (var_1_15 == ((signed char) var_1_16))) && (var_1_17 == ((signed long int) var_1_10))
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
