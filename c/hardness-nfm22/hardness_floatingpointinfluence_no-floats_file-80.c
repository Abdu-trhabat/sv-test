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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch80no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 256;
signed long int var_1_8 = 128;
signed short int var_1_9 = -1;
signed short int var_1_10 = 1;
signed char var_1_12 = 0;
unsigned char var_1_13 = 1;
signed char var_1_14 = 2;
signed long int var_1_15 = 1;
signed long int var_1_16 = 25;
signed long int var_1_17 = 5;
signed long int var_1_18 = 4;
signed long int var_1_19 = 500;
signed long int var_1_20 = 127;
signed long int var_1_21 = 1;
signed long int var_1_22 = 99;
unsigned short int var_1_23 = 4;
signed char var_1_24 = -64;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch80no_floats
	var_1_22 = var_1_19;


	// From: Req5Batch80no_floats
	var_1_23 = var_1_10;


	// From: Req6Batch80no_floats
	var_1_24 = var_1_14;


	// From: Req2Batch80no_floats
	unsigned char stepLocal_0 = var_1_23 <= var_1_24;
	if (var_1_13 || stepLocal_0) {
		var_1_12 = (abs (1 - var_1_14));
	} else {
		var_1_12 = var_1_14;
	}


	// From: Req3Batch80no_floats
	signed short int stepLocal_1 = var_1_10;
	if (stepLocal_1 <= (var_1_23 / var_1_8)) {
		var_1_15 = (min ((max ((min (var_1_16 , var_1_17)) , var_1_18)) , (max (3.6 , var_1_19))));
	} else {
		var_1_15 = (var_1_20 - var_1_21);
	}


	// From: Req1Batch80no_floats
	if ((max ((var_1_23 - var_1_23) , var_1_12)) <= (min ((var_1_23 - var_1_23) , (var_1_24 % var_1_8)))) {
		var_1_1 = (min ((var_1_9 - var_1_10) , var_1_12));
	}
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483648);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= -2147483648);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483648);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 2147483647);
}



void updateLastVariables() {
}

int property() {
	return (((((((max ((var_1_23 - var_1_23) , var_1_12)) <= (min ((var_1_23 - var_1_23) , (var_1_24 % var_1_8)))) ? (var_1_1 == ((signed short int) (min ((var_1_9 - var_1_10) , var_1_12)))) : 1) && ((var_1_13 || (var_1_23 <= var_1_24)) ? (var_1_12 == ((signed char) (abs (1 - var_1_14)))) : (var_1_12 == ((signed char) var_1_14)))) && ((var_1_10 <= (var_1_23 / var_1_8)) ? (var_1_15 == ((signed long int) (min ((max ((min (var_1_16 , var_1_17)) , var_1_18)) , (max (3.6 , var_1_19)))))) : (var_1_15 == ((signed long int) (var_1_20 - var_1_21))))) && (var_1_22 == ((signed long int) var_1_19))) && (var_1_23 == ((unsigned short int) var_1_10))) && (var_1_24 == ((signed char) var_1_14))
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
