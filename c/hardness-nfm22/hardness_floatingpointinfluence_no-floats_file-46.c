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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch46no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
signed long int var_1_2 = 31;
signed char var_1_4 = -8;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
signed short int var_1_10 = -4;
signed short int var_1_12 = 32;
signed char var_1_13 = -25;
signed char var_1_16 = 4;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
signed short int last_1_var_1_10 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch46no_floats
	if (last_1_var_1_10 <= (var_1_12 / var_1_4)) {
		if (last_1_var_1_1) {
			var_1_13 = var_1_16;
		}
	}


	// From: Req1Batch46no_floats
	signed long int stepLocal_1 = min (var_1_4 , var_1_13);
	signed long int stepLocal_0 = var_1_13 / var_1_4;
	if ((- var_1_2) >= 16.75) {
		if (stepLocal_0 >= var_1_13) {
			if (stepLocal_1 > -32) {
				var_1_1 = 0;
			} else {
				var_1_1 = (var_1_6 || var_1_7);
			}
		} else {
			if (var_1_6) {
				var_1_1 = 1;
			} else {
				var_1_1 = var_1_7;
			}
		}
	} else {
		var_1_1 = 1;
	}


	// From: Req3Batch46no_floats
	signed char stepLocal_2 = var_1_13;
	if (((var_1_13 | var_1_13) + var_1_4) < stepLocal_2) {
		var_1_10 = (var_1_12 - 256);
	} else {
		var_1_10 = 128;
	}


	// From: Req2Batch46no_floats
	if (1 == var_1_4) {
		var_1_8 = var_1_9;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -128);
	assume_abort_if_not(var_1_4 <= 127);
	assume_abort_if_not(var_1_4 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_10 = var_1_10;
}

int property() {
	return (((((- var_1_2) >= 16.75) ? (((var_1_13 / var_1_4) >= var_1_13) ? (((min (var_1_4 , var_1_13)) > -32) ? (var_1_1 == ((unsigned char) 0)) : (var_1_1 == ((unsigned char) (var_1_6 || var_1_7)))) : (var_1_6 ? (var_1_1 == ((unsigned char) 1)) : (var_1_1 == ((unsigned char) var_1_7)))) : (var_1_1 == ((unsigned char) 1))) && ((1 == var_1_4) ? (var_1_8 == ((unsigned char) var_1_9)) : 1)) && ((((var_1_13 | var_1_13) + var_1_4) < var_1_13) ? (var_1_10 == ((signed short int) (var_1_12 - 256))) : (var_1_10 == ((signed short int) 128)))) && ((last_1_var_1_10 <= (var_1_12 / var_1_4)) ? (last_1_var_1_1 ? (var_1_13 == ((signed char) var_1_16)) : 1) : 1)
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
