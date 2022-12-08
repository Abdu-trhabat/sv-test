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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch350_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -64;
unsigned char var_1_3 = 1;
signed char var_1_5 = -32;
unsigned short int var_1_6 = 256;
unsigned long int var_1_10 = 256;
double var_1_12 = 8.2;
signed char var_1_13 = 16;
signed char var_1_14 = 10;
double var_1_15 = 199.125;
double var_1_16 = 9.4;
double var_1_17 = 9999999999999.6;
unsigned char var_1_20 = 32;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 64;
unsigned long int var_1_23 = 64;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_10 = 256;
unsigned char last_1_var_1_20 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch350_while
	if (var_1_3) {
		if ((last_1_var_1_10 + (var_1_5 + last_1_var_1_20)) >= last_1_var_1_20) {
			var_1_6 = last_1_var_1_20;
		}
	}


	// From: Req6Batch350_while
	signed long int stepLocal_2 = var_1_5 * var_1_13;
	if (stepLocal_2 > last_1_var_1_10) {
		var_1_20 = (abs (max ((var_1_21 - var_1_14) , (var_1_22 + 8))));
	}


	// From: Req5Batch350_while
	if ((min ((var_1_14 - var_1_20) , var_1_5)) < var_1_20) {
		if (var_1_3) {
			var_1_17 = 128.1;
		}
	}


	// From: Req4Batch350_while
	unsigned char stepLocal_1 = var_1_17 <= var_1_17;
	if (stepLocal_1 || var_1_3) {
		if ((var_1_17 / var_1_15) > 25.25) {
			var_1_12 = 128.5;
		}
	} else {
		var_1_12 = var_1_16;
	}


	// From: Req1Batch350_while
	if (99999.8f < var_1_17) {
		if (! var_1_3) {
			if (var_1_17 >= (var_1_17 / 2.5f)) {
				if (var_1_3) {
					var_1_1 = var_1_5;
				} else {
					var_1_1 = var_1_5;
				}
			}
		}
	}


	// From: Req7Batch350_while
	if ((var_1_17 + var_1_12) <= var_1_17) {
		if (var_1_6 >= var_1_6) {
			var_1_23 = var_1_20;
		}
	}


	// From: Req3Batch350_while
	unsigned long int stepLocal_0 = (var_1_6 ^ var_1_20) + var_1_23;
	if (var_1_20 <= stepLocal_0) {
		if (var_1_12 == var_1_12) {
			var_1_10 = 0u;
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 127);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_20 = var_1_20;
}

int property() {
	return (((((((99999.8f < var_1_17) ? ((! var_1_3) ? ((var_1_17 >= (var_1_17 / 2.5f)) ? (var_1_3 ? (var_1_1 == ((signed char) var_1_5)) : (var_1_1 == ((signed char) var_1_5))) : 1) : 1) : 1) && (var_1_3 ? (((last_1_var_1_10 + (var_1_5 + last_1_var_1_20)) >= last_1_var_1_20) ? (var_1_6 == ((unsigned short int) last_1_var_1_20)) : 1) : 1)) && ((var_1_20 <= ((var_1_6 ^ var_1_20) + var_1_23)) ? ((var_1_12 == var_1_12) ? (var_1_10 == ((unsigned long int) 0u)) : 1) : 1)) && (((var_1_17 <= var_1_17) || var_1_3) ? (((var_1_17 / var_1_15) > 25.25) ? (var_1_12 == ((double) 128.5)) : 1) : (var_1_12 == ((double) var_1_16)))) && (((min ((var_1_14 - var_1_20) , var_1_5)) < var_1_20) ? (var_1_3 ? (var_1_17 == ((double) 128.1)) : 1) : 1)) && (((var_1_5 * var_1_13) > last_1_var_1_10) ? (var_1_20 == ((unsigned char) (abs (max ((var_1_21 - var_1_14) , (var_1_22 + 8)))))) : 1)) && (((var_1_17 + var_1_12) <= var_1_17) ? ((var_1_6 >= var_1_6) ? (var_1_23 == ((unsigned long int) var_1_20)) : 1) : 1)
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
