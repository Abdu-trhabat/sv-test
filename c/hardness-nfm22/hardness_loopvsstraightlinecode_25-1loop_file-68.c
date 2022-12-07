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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch6825_1loop.c", 13, "reach_error"); }
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
float var_1_2 = 64.5;
float var_1_3 = 16.8;
signed long int var_1_8 = 10;
signed long int var_1_9 = 25;
double var_1_10 = 0.75;
signed long int var_1_11 = 2;
signed long int var_1_12 = 32;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
double var_1_15 = 50.2;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_9 = 25;
double last_1_var_1_10 = 0.75;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch6825_1loop
	signed long int stepLocal_0 = last_1_var_1_9 + last_1_var_1_9;
	if ((var_1_2 - var_1_3) >= last_1_var_1_10) {
		if (stepLocal_0 >= (last_1_var_1_9 / var_1_8)) {
			var_1_1 = last_1_var_1_9;
		}
	} else {
		var_1_1 = last_1_var_1_9;
	}


	// From: Req2Batch6825_1loop
	signed long int stepLocal_2 = var_1_1;
	signed long int stepLocal_1 = var_1_1;
	if ((var_1_8 >> last_1_var_1_9) > stepLocal_1) {
		if ((var_1_1 >> 8) > stepLocal_2) {
			var_1_9 = var_1_1;
		} else {
			var_1_9 = last_1_var_1_9;
		}
	} else {
		var_1_9 = last_1_var_1_9;
	}


	// From: Req3Batch6825_1loop
	if ((max (var_1_9 , var_1_1)) == (var_1_9 * (var_1_11 - var_1_12))) {
		if (var_1_13 || var_1_14) {
			var_1_10 = var_1_15;
		} else {
			var_1_10 = var_1_15;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_10 = var_1_10;
}

int property() {
	return ((((var_1_2 - var_1_3) >= last_1_var_1_10) ? (((last_1_var_1_9 + last_1_var_1_9) >= (last_1_var_1_9 / var_1_8)) ? (var_1_1 == ((signed long int) last_1_var_1_9)) : 1) : (var_1_1 == ((signed long int) last_1_var_1_9))) && (((var_1_8 >> last_1_var_1_9) > var_1_1) ? (((var_1_1 >> 8) > var_1_1) ? (var_1_9 == ((signed long int) var_1_1)) : (var_1_9 == ((signed long int) last_1_var_1_9))) : (var_1_9 == ((signed long int) last_1_var_1_9)))) && (((max (var_1_9 , var_1_1)) == (var_1_9 * (var_1_11 - var_1_12))) ? ((var_1_13 || var_1_14) ? (var_1_10 == ((double) var_1_15)) : (var_1_10 == ((double) var_1_15))) : 1)
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
