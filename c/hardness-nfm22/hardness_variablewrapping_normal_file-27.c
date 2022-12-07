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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch27normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 0;
signed long int var_1_3 = 5;
signed long int var_1_4 = 0;
signed long int var_1_5 = 64;
signed long int var_1_6 = 25;
unsigned long int var_1_7 = 500;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned long int var_1_10 = 2648415615;
signed long int var_1_11 = 10;
unsigned long int var_1_12 = 128;
unsigned char var_1_13 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch27normal
	if (var_1_8 || (! var_1_9)) {
		var_1_7 = (var_1_10 - var_1_4);
	}


	// From: Req3Batch27normal
	unsigned long int stepLocal_1 = var_1_7;
	if (var_1_6 > stepLocal_1) {
		var_1_11 = (var_1_4 + (max (-4 , var_1_5)));
	} else {
		if (var_1_8) {
			var_1_11 = var_1_6;
		}
	}


	// From: Req1Batch27normal
	signed long int stepLocal_0 = var_1_11;
	if (32 >= stepLocal_0) {
		var_1_1 = (var_1_3 + (max ((var_1_4 - var_1_5) , var_1_6)));
	} else {
		var_1_1 = (var_1_4 - var_1_5);
	}


	// From: Req4Batch27normal
	signed long int stepLocal_2 = max ((var_1_5 - var_1_4) , var_1_1);
	if (var_1_8) {
		if (((var_1_7 * 128) / var_1_13) != stepLocal_2) {
			var_1_12 = (var_1_10 - var_1_13);
		} else {
			var_1_12 = var_1_10;
		}
	} else {
		var_1_12 = var_1_13;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -1073741823);
	assume_abort_if_not(var_1_3 <= 1073741823);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -1073741823);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 2147483647);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 255);
	assume_abort_if_not(var_1_13 != 0);
}



void updateLastVariables() {
}

int property() {
	return ((((32 >= var_1_11) ? (var_1_1 == ((signed long int) (var_1_3 + (max ((var_1_4 - var_1_5) , var_1_6))))) : (var_1_1 == ((signed long int) (var_1_4 - var_1_5)))) && ((var_1_8 || (! var_1_9)) ? (var_1_7 == ((unsigned long int) (var_1_10 - var_1_4))) : 1)) && ((var_1_6 > var_1_7) ? (var_1_11 == ((signed long int) (var_1_4 + (max (-4 , var_1_5))))) : (var_1_8 ? (var_1_11 == ((signed long int) var_1_6)) : 1))) && (var_1_8 ? ((((var_1_7 * 128) / var_1_13) != (max ((var_1_5 - var_1_4) , var_1_1))) ? (var_1_12 == ((unsigned long int) (var_1_10 - var_1_13))) : (var_1_12 == ((unsigned long int) var_1_10))) : (var_1_12 == ((unsigned long int) var_1_13)))
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
