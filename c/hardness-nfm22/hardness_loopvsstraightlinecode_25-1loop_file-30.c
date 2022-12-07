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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch3025_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 64;
unsigned char var_1_2 = 0;
signed short int var_1_5 = 8;
signed short int var_1_6 = -32;
unsigned char var_1_7 = 100;
signed long int var_1_8 = 32;
float var_1_10 = 255.3;
float var_1_13 = 2.8;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_8 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch3025_1loop
	signed long int stepLocal_0 = (last_1_var_1_8 / var_1_5) % var_1_6;
	if (var_1_2) {
		if (last_1_var_1_8 > stepLocal_0) {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch3025_1loop
	unsigned char stepLocal_1 = var_1_1;
	if (stepLocal_1 < var_1_5) {
		var_1_8 = (var_1_1 - (min (var_1_7 , var_1_1)));
	} else {
		var_1_8 = var_1_7;
	}


	// From: Req3Batch3025_1loop
	if (((var_1_6 * var_1_8) * var_1_7) <= (var_1_8 - var_1_1)) {
		if (var_1_5 <= (var_1_8 + var_1_8)) {
			var_1_10 = var_1_13;
		}
	} else {
		if (var_1_1 >= var_1_1) {
			var_1_10 = var_1_13;
		} else {
			var_1_10 = var_1_13;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32768);
	assume_abort_if_not(var_1_5 <= 32767);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32768);
	assume_abort_if_not(var_1_6 <= 32767);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
}

int property() {
	return ((var_1_2 ? ((last_1_var_1_8 > ((last_1_var_1_8 / var_1_5) % var_1_6)) ? (var_1_1 == ((unsigned char) var_1_7)) : 1) : (var_1_1 == ((unsigned char) var_1_7))) && ((var_1_1 < var_1_5) ? (var_1_8 == ((signed long int) (var_1_1 - (min (var_1_7 , var_1_1))))) : (var_1_8 == ((signed long int) var_1_7)))) && ((((var_1_6 * var_1_8) * var_1_7) <= (var_1_8 - var_1_1)) ? ((var_1_5 <= (var_1_8 + var_1_8)) ? (var_1_10 == ((float) var_1_13)) : 1) : ((var_1_1 >= var_1_1) ? (var_1_10 == ((float) var_1_13)) : (var_1_10 == ((float) var_1_13))))
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
