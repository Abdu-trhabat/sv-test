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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch78no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -200;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
signed long int var_1_9 = 100;
signed long int var_1_10 = 4;
signed long int var_1_11 = 128;
signed long int var_1_12 = 128;
signed long int var_1_13 = 0;
signed long int var_1_14 = 127;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 16;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch78no_floats
	if (0.8f > (- var_1_10)) {
		var_1_15 = var_1_16;
	}


	// From: Req1Batch78no_floats
	unsigned char stepLocal_1 = var_1_15 > var_1_15;
	unsigned char stepLocal_0 = var_1_3;
	if (var_1_2 && stepLocal_0) {
		if (var_1_2 && stepLocal_1) {
			var_1_1 = (var_1_15 - var_1_15);
		} else {
			var_1_1 = ((var_1_15 + 5) - var_1_15);
		}
	}


	// From: Req2Batch78no_floats
	if (var_1_2) {
		var_1_9 = (var_1_10 - var_1_11);
	} else {
		if (var_1_1 < var_1_15) {
			var_1_9 = (max (var_1_11 , var_1_10));
		} else {
			var_1_9 = var_1_10;
		}
	}


	// From: Req3Batch78no_floats
	signed long int stepLocal_2 = var_1_1;
	if (stepLocal_2 <= (abs (8u))) {
		var_1_12 = (var_1_10 - 99.5);
	} else {
		var_1_12 = ((var_1_13 - var_1_14) - var_1_11);
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 2147483647);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
}



void updateLastVariables() {
}

int property() {
	return ((((var_1_2 && var_1_3) ? ((var_1_2 && (var_1_15 > var_1_15)) ? (var_1_1 == ((signed long int) (var_1_15 - var_1_15))) : (var_1_1 == ((signed long int) ((var_1_15 + 5) - var_1_15)))) : 1) && (var_1_2 ? (var_1_9 == ((signed long int) (var_1_10 - var_1_11))) : ((var_1_1 < var_1_15) ? (var_1_9 == ((signed long int) (max (var_1_11 , var_1_10)))) : (var_1_9 == ((signed long int) var_1_10))))) && ((var_1_1 <= (abs (8u))) ? (var_1_12 == ((signed long int) (var_1_10 - 99.5))) : (var_1_12 == ((signed long int) ((var_1_13 - var_1_14) - var_1_11))))) && ((0.8f > (- var_1_10)) ? (var_1_15 == ((unsigned char) var_1_16)) : 1)
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
