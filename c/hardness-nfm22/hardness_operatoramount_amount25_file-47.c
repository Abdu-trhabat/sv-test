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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch47Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 24.575;
double var_1_8 = 128.5;
float var_1_9 = -0.5;
float var_1_10 = 200.4;
unsigned long int var_1_11 = 4;
unsigned char var_1_12 = 1;
unsigned long int var_1_13 = 3607105345;
signed char var_1_14 = 0;
signed char var_1_15 = 0;
signed char var_1_16 = 16;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 24.575;
float last_1_var_1_9 = -0.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch47Amount25
	if ((max (last_1_var_1_9 , last_1_var_1_9)) >= last_1_var_1_1) {
		if (var_1_12) {
			var_1_14 = (var_1_15 - var_1_16);
		}
	} else {
		var_1_14 = var_1_15;
	}


	// From: Req3Batch47Amount25
	if (var_1_12) {
		var_1_11 = (min (var_1_14 , var_1_14));
	} else {
		var_1_11 = (max (var_1_14 , (var_1_13 - (var_1_14 + 32u))));
	}


	// From: Req2Batch47Amount25
	var_1_9 = (abs (var_1_10 - (abs (10000.4f))));


	// From: Req1Batch47Amount25
	if (var_1_9 <= var_1_9) {
		if ((var_1_11 + var_1_11) >= (var_1_14 + var_1_14)) {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_8;
	}
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 2147483647);
	assume_abort_if_not(var_1_13 <= 4294967294);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 126);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
}

int property() {
	return ((((var_1_9 <= var_1_9) ? (((var_1_11 + var_1_11) >= (var_1_14 + var_1_14)) ? (var_1_1 == ((double) var_1_8)) : 1) : (var_1_1 == ((double) var_1_8))) && (var_1_9 == ((float) (abs (var_1_10 - (abs (10000.4f))))))) && (var_1_12 ? (var_1_11 == ((unsigned long int) (min (var_1_14 , var_1_14)))) : (var_1_11 == ((unsigned long int) (max (var_1_14 , (var_1_13 - (var_1_14 + 32u)))))))) && (((max (last_1_var_1_9 , last_1_var_1_9)) >= last_1_var_1_1) ? (var_1_12 ? (var_1_14 == ((signed char) (var_1_15 - var_1_16))) : 1) : (var_1_14 == ((signed char) var_1_15)))
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
