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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch86normal.c", 13, "reach_error"); }
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
signed long int var_1_2 = 32;
signed long int var_1_3 = 128;
unsigned short int var_1_4 = 32;
unsigned short int var_1_5 = 128;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 500;
signed char var_1_11 = 4;
signed char var_1_12 = 1;
signed long int var_1_13 = -1;
signed long int var_1_14 = 256;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 1;
unsigned short int var_1_18 = 5;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 5;
unsigned char var_1_21 = 0;
unsigned short int var_1_22 = 100;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch86normal
	if (var_1_2 <= (var_1_3 / -2)) {
		var_1_1 = (57907 - (var_1_4 + var_1_5));
	} else {
		var_1_1 = 1;
	}


	// From: Req2Batch86normal
	if (var_1_7) {
		var_1_6 = (var_1_8 || var_1_9);
	}


	// From: Req3Batch86normal
	if ((var_1_11 - var_1_12) < (abs (min (32 , var_1_1)))) {
		var_1_10 = var_1_11;
	} else {
		if (var_1_6) {
			var_1_10 = var_1_13;
		} else {
			var_1_10 = var_1_4;
		}
	}


	// From: Req4Batch86normal
	if (! var_1_7) {
		if (((var_1_15 - var_1_12) * (- var_1_2)) <= var_1_11) {
			var_1_14 = var_1_11;
		}
	}


	// From: Req5Batch86normal
	if (var_1_10 >= var_1_12) {
		var_1_16 = (var_1_12 + var_1_17);
	} else {
		if (var_1_18 > var_1_13) {
			var_1_16 = (min (var_1_17 , var_1_12));
		} else {
			var_1_16 = var_1_12;
		}
	}


	// From: Req6Batch86normal
	if (((var_1_5 % var_1_15) + (var_1_18 / var_1_20)) != var_1_14) {
		var_1_19 = var_1_9;
	} else {
		if (! (! var_1_8)) {
			var_1_19 = ((var_1_13 >= var_1_15) || (var_1_9 && var_1_21));
		}
	}


	// From: Req7Batch86normal
	var_1_22 = var_1_15;
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16384);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483647);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 255);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 65535);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 4294967295);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
}



void updateLastVariables() {
}

int property() {
	return (((((((var_1_2 <= (var_1_3 / -2)) ? (var_1_1 == ((unsigned short int) (57907 - (var_1_4 + var_1_5)))) : (var_1_1 == ((unsigned short int) 1))) && (var_1_7 ? (var_1_6 == ((unsigned char) (var_1_8 || var_1_9))) : 1)) && (((var_1_11 - var_1_12) < (abs (min (32 , var_1_1)))) ? (var_1_10 == ((signed long int) var_1_11)) : (var_1_6 ? (var_1_10 == ((signed long int) var_1_13)) : (var_1_10 == ((signed long int) var_1_4))))) && ((! var_1_7) ? ((((var_1_15 - var_1_12) * (- var_1_2)) <= var_1_11) ? (var_1_14 == ((signed long int) var_1_11)) : 1) : 1)) && ((var_1_10 >= var_1_12) ? (var_1_16 == ((unsigned char) (var_1_12 + var_1_17))) : ((var_1_18 > var_1_13) ? (var_1_16 == ((unsigned char) (min (var_1_17 , var_1_12)))) : (var_1_16 == ((unsigned char) var_1_12))))) && ((((var_1_5 % var_1_15) + (var_1_18 / var_1_20)) != var_1_14) ? (var_1_19 == ((unsigned char) var_1_9)) : ((! (! var_1_8)) ? (var_1_19 == ((unsigned char) ((var_1_13 >= var_1_15) || (var_1_9 && var_1_21)))) : 1))) && (var_1_22 == ((unsigned short int) var_1_15))
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
