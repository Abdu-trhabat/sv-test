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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch025_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 25.8;
unsigned char var_1_2 = 1;
double var_1_3 = 128.2;
double var_1_4 = 15.4;
double var_1_5 = 5.25;
unsigned char var_1_6 = 0;
float var_1_7 = 8.125;
float var_1_8 = 0.4;
float var_1_9 = 499.4;
float var_1_10 = 63.16;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch025_1loop
	if (! var_1_2) {
		var_1_1 = (var_1_3 - var_1_4);
	} else {
		var_1_1 = (min (16.2 , var_1_3));
	}


	// From: Req2Batch025_1loop
	unsigned char stepLocal_0 = var_1_4 < var_1_3;
	if (stepLocal_0 || var_1_2) {
		if (var_1_2) {
			if (var_1_6) {
				var_1_5 = var_1_3;
			}
		}
	}


	// From: Req3Batch025_1loop
	unsigned char stepLocal_1 = var_1_1 <= (var_1_1 + var_1_3);
	if (var_1_2 || stepLocal_1) {
		var_1_7 = (min (5.5f , (max (128.4f , var_1_3))));
	} else {
		if (var_1_6) {
			var_1_7 = ((var_1_8 - var_1_9) + var_1_10);
		} else {
			if (var_1_2) {
				var_1_7 = var_1_9;
			}
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return (((! var_1_2) ? (var_1_1 == ((double) (var_1_3 - var_1_4))) : (var_1_1 == ((double) (min (16.2 , var_1_3))))) && (((var_1_4 < var_1_3) || var_1_2) ? (var_1_2 ? (var_1_6 ? (var_1_5 == ((double) var_1_3)) : 1) : 1) : 1)) && ((var_1_2 || (var_1_1 <= (var_1_1 + var_1_3))) ? (var_1_7 == ((float) (min (5.5f , (max (128.4f , var_1_3)))))) : (var_1_6 ? (var_1_7 == ((float) ((var_1_8 - var_1_9) + var_1_10))) : (var_1_2 ? (var_1_7 == ((float) var_1_9)) : 1)))
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
