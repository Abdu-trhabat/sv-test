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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch47no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 24;
signed long int var_1_8 = 3;
signed char var_1_9 = 16;
signed char var_1_10 = 16;
signed char var_1_11 = 4;
signed long int var_1_12 = 8;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 1;
signed long int var_1_15 = 3;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_12 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch47no_floats
	if (-4 > last_1_var_1_12) {
		if ((~ last_1_var_1_12) <= last_1_var_1_12) {
			var_1_9 = (abs (var_1_10 + var_1_11));
		}
	} else {
		var_1_9 = var_1_10;
	}


	// From: Req3Batch47no_floats
	unsigned char stepLocal_0 = ! var_1_13;
	if (stepLocal_0 || var_1_14) {
		if (! var_1_14) {
			var_1_12 = (abs (min (var_1_9 , var_1_9)));
		} else {
			var_1_12 = var_1_9;
		}
	}


	// From: Req4Batch47no_floats
	var_1_15 = var_1_8;


	// From: Req1Batch47no_floats
	if (var_1_15 <= var_1_15) {
		if ((var_1_12 + var_1_12) >= (var_1_12 + var_1_9)) {
			var_1_1 = (abs (var_1_8));
		}
	} else {
		if (var_1_12 > var_1_9) {
			var_1_1 = var_1_8;
		}
	}
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -63);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
}

int property() {
	return ((((var_1_15 <= var_1_15) ? (((var_1_12 + var_1_12) >= (var_1_12 + var_1_9)) ? (var_1_1 == ((signed long int) (abs (var_1_8)))) : 1) : ((var_1_12 > var_1_9) ? (var_1_1 == ((signed long int) var_1_8)) : 1)) && ((-4 > last_1_var_1_12) ? (((~ last_1_var_1_12) <= last_1_var_1_12) ? (var_1_9 == ((signed char) (abs (var_1_10 + var_1_11)))) : 1) : (var_1_9 == ((signed char) var_1_10)))) && (((! var_1_13) || var_1_14) ? ((! var_1_14) ? (var_1_12 == ((signed long int) (abs (min (var_1_9 , var_1_9))))) : (var_1_12 == ((signed long int) var_1_9))) : 1)) && (var_1_15 == ((signed long int) var_1_8))
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
