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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch91no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 100000000;
signed long int var_1_2 = 49;
unsigned long int var_1_3 = 64;
unsigned long int var_1_4 = 64;
signed short int var_1_5 = 1;
signed long int var_1_6 = 8;
signed long int var_1_7 = 0;
signed short int var_1_8 = -4;
unsigned long int var_1_9 = 64;
unsigned long int var_1_10 = 16;
unsigned long int var_1_11 = 10;
signed short int var_1_12 = 100;
signed short int var_1_14 = 128;
signed short int var_1_15 = 10;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch91no_floats
	if (var_1_2 >= 50.4f) {
		var_1_1 = (max (var_1_3 , var_1_4));
	}


	// From: Req2Batch91no_floats
	if (var_1_3 == (var_1_1 * var_1_4)) {
		if (var_1_2 >= (var_1_6 + var_1_7)) {
			var_1_5 = var_1_8;
		} else {
			var_1_5 = 32;
		}
	} else {
		var_1_5 = var_1_8;
	}


	// From: Req3Batch91no_floats
	if (! (var_1_4 < var_1_3)) {
		var_1_9 = (min ((min (var_1_3 , var_1_4)) , (max (var_1_10 , var_1_11))));
	} else {
		var_1_9 = (max (var_1_11 , var_1_10));
	}


	// From: Req4Batch91no_floats
	if (var_1_10 > var_1_9) {
		if (63.1 >= var_1_7) {
			if (var_1_7 >= var_1_2) {
				var_1_12 = (var_1_14 - var_1_15);
			} else {
				var_1_12 = var_1_14;
			}
		}
	} else {
		var_1_12 = var_1_15;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967294);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32767);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -1);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32766);
}



void updateLastVariables() {
}

int property() {
	return ((((var_1_2 >= 50.4f) ? (var_1_1 == ((unsigned long int) (max (var_1_3 , var_1_4)))) : 1) && ((var_1_3 == (var_1_1 * var_1_4)) ? ((var_1_2 >= (var_1_6 + var_1_7)) ? (var_1_5 == ((signed short int) var_1_8)) : (var_1_5 == ((signed short int) 32))) : (var_1_5 == ((signed short int) var_1_8)))) && ((! (var_1_4 < var_1_3)) ? (var_1_9 == ((unsigned long int) (min ((min (var_1_3 , var_1_4)) , (max (var_1_10 , var_1_11)))))) : (var_1_9 == ((unsigned long int) (max (var_1_11 , var_1_10)))))) && ((var_1_10 > var_1_9) ? ((63.1 >= var_1_7) ? ((var_1_7 >= var_1_2) ? (var_1_12 == ((signed short int) (var_1_14 - var_1_15))) : (var_1_12 == ((signed short int) var_1_14))) : 1) : (var_1_12 == ((signed short int) var_1_15)))
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
