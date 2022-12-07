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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch7925_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -16;
unsigned char var_1_2 = 1;
signed char var_1_3 = 0;
signed char var_1_4 = 64;
signed char var_1_5 = 64;
unsigned short int var_1_6 = 25;
float var_1_7 = 256.4;
double var_1_10 = 9999999999.515;
float var_1_11 = 8.5;
float var_1_12 = 2.5;
double var_1_13 = 15.8;
double var_1_14 = 25.8;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch7925_1loop
	if (! var_1_2) {
		if (! var_1_2) {
			var_1_1 = (var_1_3 + -32);
		} else {
			var_1_1 = (var_1_4 - var_1_5);
		}
	}


	// From: Req3Batch7925_1loop
	if (var_1_7 < (var_1_11 - var_1_12)) {
		if ((var_1_7 / 7.2) <= var_1_11) {
			var_1_10 = (var_1_13 - var_1_14);
		} else {
			var_1_10 = var_1_13;
		}
	} else {
		var_1_10 = var_1_14;
	}


	// From: Req2Batch7925_1loop
	if (var_1_2) {
		if ((var_1_7 - (abs (var_1_10))) <= var_1_10) {
			var_1_6 = (abs (256));
		} else {
			var_1_6 = var_1_5;
		}
	} else {
		var_1_6 = 16;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return (((! var_1_2) ? ((! var_1_2) ? (var_1_1 == ((signed char) (var_1_3 + -32))) : (var_1_1 == ((signed char) (var_1_4 - var_1_5)))) : 1) && (var_1_2 ? (((var_1_7 - (abs (var_1_10))) <= var_1_10) ? (var_1_6 == ((unsigned short int) (abs (256)))) : (var_1_6 == ((unsigned short int) var_1_5))) : (var_1_6 == ((unsigned short int) 16)))) && ((var_1_7 < (var_1_11 - var_1_12)) ? (((var_1_7 / 7.2) <= var_1_11) ? (var_1_10 == ((double) (var_1_13 - var_1_14))) : (var_1_10 == ((double) var_1_13))) : (var_1_10 == ((double) var_1_14)))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
