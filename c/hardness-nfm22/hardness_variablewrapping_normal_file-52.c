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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch52normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -4;
signed short int var_1_3 = 32;
signed short int var_1_4 = -1;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
double var_1_10 = 25.7;
double var_1_11 = 256.5;
double var_1_12 = 0.0;
double var_1_13 = 31.1;
double var_1_14 = 256.6;
unsigned long int var_1_15 = 8;
unsigned char var_1_16 = 16;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch52normal
	signed short int stepLocal_0 = var_1_3;
	if (stepLocal_0 > ((var_1_4 / -256) * 32)) {
		if (var_1_6) {
			var_1_5 = (! (var_1_7 && var_1_8));
		} else {
			var_1_5 = var_1_8;
		}
	} else {
		var_1_5 = var_1_9;
	}


	// From: Req3Batch52normal
	if (var_1_7) {
		var_1_10 = (var_1_11 - (max ((var_1_12 - var_1_13) , var_1_14)));
	}


	// From: Req1Batch52normal
	if (var_1_10 < 63.75) {
		var_1_1 = (10 - var_1_3);
	} else {
		var_1_1 = (4 + var_1_4);
	}


	// From: Req4Batch52normal
	if (! (var_1_13 < (127.125 / var_1_12))) {
		if (var_1_1 <= ((var_1_4 * var_1_3) + (-2 << var_1_16))) {
			var_1_15 = var_1_3;
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 32766);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -16383);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 4611686.018427382800e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 30);
}



void updateLastVariables() {
}

int property() {
	return ((((var_1_10 < 63.75) ? (var_1_1 == ((signed short int) (10 - var_1_3))) : (var_1_1 == ((signed short int) (4 + var_1_4)))) && ((var_1_3 > ((var_1_4 / -256) * 32)) ? (var_1_6 ? (var_1_5 == ((unsigned char) (! (var_1_7 && var_1_8)))) : (var_1_5 == ((unsigned char) var_1_8))) : (var_1_5 == ((unsigned char) var_1_9)))) && (var_1_7 ? (var_1_10 == ((double) (var_1_11 - (max ((var_1_12 - var_1_13) , var_1_14))))) : 1)) && ((! (var_1_13 < (127.125 / var_1_12))) ? ((var_1_1 <= ((var_1_4 * var_1_3) + (-2 << var_1_16))) ? (var_1_15 == ((unsigned long int) var_1_3)) : 1) : 1)
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
