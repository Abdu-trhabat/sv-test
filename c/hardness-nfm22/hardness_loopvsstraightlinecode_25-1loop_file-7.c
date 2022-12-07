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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch725_1loop.c", 13, "reach_error"); }
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
float var_1_2 = 200.875;
float var_1_3 = 8.2;
float var_1_4 = 100000000000.4;
unsigned char var_1_5 = 5;
unsigned long int var_1_6 = 100;
double var_1_9 = 4.6;
double var_1_10 = 2.5;

// Calibration values

// Last'ed variables
double last_1_var_1_9 = 4.6;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch725_1loop
	if (! (last_1_var_1_9 <= (var_1_3 - var_1_4))) {
		if (last_1_var_1_9 < var_1_3) {
			if (! (var_1_3 > last_1_var_1_9)) {
				var_1_1 = var_1_5;
			} else {
				var_1_1 = var_1_5;
			}
		} else {
			var_1_1 = var_1_5;
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req2Batch725_1loop
	unsigned char stepLocal_0 = var_1_5;
	if (stepLocal_0 < 0) {
		var_1_6 = var_1_5;
	} else {
		var_1_6 = (((max (var_1_5 , var_1_1)) + (abs (var_1_1))) + var_1_1);
	}


	// From: Req3Batch725_1loop
	if (var_1_1 <= var_1_6) {
		if (var_1_2 >= var_1_3) {
			var_1_9 = var_1_10;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
}

int property() {
	return (((! (last_1_var_1_9 <= (var_1_3 - var_1_4))) ? ((last_1_var_1_9 < var_1_3) ? ((! (var_1_3 > last_1_var_1_9)) ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_1 == ((unsigned char) var_1_5))) : (var_1_1 == ((unsigned char) var_1_5))) : (var_1_1 == ((unsigned char) var_1_5))) && ((var_1_5 < 0) ? (var_1_6 == ((unsigned long int) var_1_5)) : (var_1_6 == ((unsigned long int) (((max (var_1_5 , var_1_1)) + (abs (var_1_1))) + var_1_1))))) && ((var_1_1 <= var_1_6) ? ((var_1_2 >= var_1_3) ? (var_1_9 == ((double) var_1_10)) : 1) : 1)
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
