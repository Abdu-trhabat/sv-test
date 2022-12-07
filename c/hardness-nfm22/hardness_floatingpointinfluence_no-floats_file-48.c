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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch48no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 32;
signed long int var_1_2 = 255;
signed long int var_1_3 = 5;
signed long int var_1_4 = 128;
signed long int var_1_5 = 4;
signed long int var_1_6 = 9;
unsigned char var_1_7 = 5;
unsigned char var_1_11 = 200;
unsigned char var_1_12 = 8;
unsigned char var_1_13 = 4;
unsigned char var_1_14 = 100;
unsigned char var_1_15 = 64;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 200;
unsigned char var_1_18 = 2;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 1;
signed long int var_1_21 = 64;
unsigned char var_1_22 = 100;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_7 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch48no_floats
	if (var_1_2 <= var_1_3) {
		if (var_1_3 < ((var_1_4 - var_1_5) + 1.395f)) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = var_1_6;
		}
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req4Batch48no_floats
	var_1_20 = var_1_14;


	// From: Req5Batch48no_floats
	var_1_21 = var_1_17;


	// From: Req6Batch48no_floats
	var_1_22 = 4;


	// From: Req3Batch48no_floats
	signed long int stepLocal_0 = var_1_21;
	if (((var_1_17 - var_1_12) - (8 + var_1_18)) > stepLocal_0) {
		var_1_16 = (! var_1_19);
	} else {
		var_1_16 = var_1_19;
	}


	// From: Req2Batch48no_floats
	if (var_1_16) {
		if (last_1_var_1_7 != last_1_var_1_7) {
			var_1_7 = ((var_1_11 - var_1_12) - var_1_13);
		} else {
			var_1_7 = (var_1_11 - ((max (var_1_14 , var_1_15)) - var_1_12));
		}
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
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 190);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 63);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 63);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 191);
	assume_abort_if_not(var_1_17 <= 255);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
}

int property() {
	return ((((((var_1_2 <= var_1_3) ? ((var_1_3 < ((var_1_4 - var_1_5) + 1.395f)) ? (var_1_1 == ((signed long int) var_1_6)) : (var_1_1 == ((signed long int) var_1_6))) : (var_1_1 == ((signed long int) var_1_6))) && (var_1_16 ? ((last_1_var_1_7 != last_1_var_1_7) ? (var_1_7 == ((unsigned char) ((var_1_11 - var_1_12) - var_1_13))) : (var_1_7 == ((unsigned char) (var_1_11 - ((max (var_1_14 , var_1_15)) - var_1_12))))) : 1)) && ((((var_1_17 - var_1_12) - (8 + var_1_18)) > var_1_21) ? (var_1_16 == ((unsigned char) (! var_1_19))) : (var_1_16 == ((unsigned char) var_1_19)))) && (var_1_20 == ((unsigned long int) var_1_14))) && (var_1_21 == ((signed long int) var_1_17))) && (var_1_22 == ((unsigned char) 4))
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
