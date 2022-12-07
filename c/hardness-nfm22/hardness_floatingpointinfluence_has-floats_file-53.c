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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch53has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 5;
unsigned long int var_1_3 = 1456677701;
unsigned long int var_1_4 = 1000000000;
unsigned long int var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
double var_1_9 = 256.5;
double var_1_10 = 8.8;
unsigned char var_1_11 = 1;
unsigned short int var_1_12 = 16;
unsigned long int var_1_13 = 3110219175;
unsigned short int var_1_14 = 128;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch53has_floats
	var_1_6 = var_1_7;


	// From: Req4Batch53has_floats
	if (var_1_5 <= (var_1_13 - var_1_4)) {
		var_1_12 = (abs (var_1_14));
	}


	// From: Req5Batch53has_floats
	if ((var_1_9 * 16.5f) > var_1_10) {
		var_1_15 = (! var_1_11);
	} else {
		var_1_15 = (var_1_11 && var_1_16);
	}


	// From: Req1Batch53has_floats
	var_1_1 = (var_1_12 + (var_1_3 - (var_1_4 - var_1_12)));


	// From: Req3Batch53has_floats
	signed long int stepLocal_1 = min (var_1_12 , var_1_12);
	unsigned long int stepLocal_0 = var_1_3;
	if (stepLocal_1 != (min (var_1_4 , var_1_3))) {
		if (var_1_9 == var_1_10) {
			if (var_1_6) {
				if (stepLocal_0 >= var_1_12) {
					var_1_8 = (var_1_7 || var_1_11);
				} else {
					var_1_8 = var_1_7;
				}
			}
		}
	} else {
		var_1_8 = var_1_11;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 1073741823);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 536870911);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 536870911);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 2147483647);
	assume_abort_if_not(var_1_13 <= 4294967295);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
}



void updateLastVariables() {
}

int property() {
	return ((((var_1_1 == ((unsigned long int) (var_1_12 + (var_1_3 - (var_1_4 - var_1_12))))) && (var_1_6 == ((unsigned char) var_1_7))) && (((min (var_1_12 , var_1_12)) != (min (var_1_4 , var_1_3))) ? ((var_1_9 == var_1_10) ? (var_1_6 ? ((var_1_3 >= var_1_12) ? (var_1_8 == ((unsigned char) (var_1_7 || var_1_11))) : (var_1_8 == ((unsigned char) var_1_7))) : 1) : 1) : (var_1_8 == ((unsigned char) var_1_11)))) && ((var_1_5 <= (var_1_13 - var_1_4)) ? (var_1_12 == ((unsigned short int) (abs (var_1_14)))) : 1)) && (((var_1_9 * 16.5f) > var_1_10) ? (var_1_15 == ((unsigned char) (! var_1_11))) : (var_1_15 == ((unsigned char) (var_1_11 && var_1_16))))
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
