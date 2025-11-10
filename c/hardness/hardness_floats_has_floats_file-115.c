// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch115has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 4.0;
unsigned char var_1_2 = 0;
double var_1_3 = 0.0;
double var_1_4 = 1000000.0;
double var_1_5 = -4.0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 5;
unsigned long int var_1_10 = 100;
unsigned char var_1_11 = 10;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 10;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch115has_floats
	if (var_1_2) {
		var_1_7 = (! var_1_8);
	}


	// From: Req3Batch115has_floats
	if (! var_1_7) {
		var_1_9 = (2327469510u - var_1_10);
	}


	// From: Req4Batch115has_floats
	unsigned long int stepLocal_3 = var_1_9;
	unsigned char stepLocal_2 = ! (var_1_3 < var_1_5);
	unsigned long int stepLocal_1 = max (8 , var_1_9);
	if (stepLocal_2 || var_1_7) {
		if (var_1_7) {
			var_1_11 = (max (var_1_12 , var_1_13));
		}
	} else {
		if (stepLocal_1 >= var_1_13) {
			if (stepLocal_3 < 25) {
				var_1_11 = var_1_13;
			} else {
				var_1_11 = var_1_12;
			}
		} else {
			var_1_11 = var_1_13;
		}
	}


	// From: Req1Batch115has_floats
	unsigned char stepLocal_0 = var_1_7;
	if (var_1_7) {
		var_1_1 = (var_1_3 + (10.0 - var_1_4));
	} else {
		if ((var_1_4 <= (var_1_3 / var_1_5)) || stepLocal_0) {
			var_1_1 = var_1_3;
		} else {
			var_1_1 = 50.0;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -461168.6018427383000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427383000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	assume_abort_if_not(var_1_5 != 0.0F);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_7 ? (var_1_1 == ((double) (var_1_3 + (10.0 - var_1_4)))) : (((var_1_4 <= (var_1_3 / var_1_5)) || var_1_7) ? (var_1_1 == ((double) var_1_3)) : (var_1_1 == ((double) 50.0)))) && (var_1_2 ? (var_1_7 == ((unsigned char) (! var_1_8))) : 1)) && ((! var_1_7) ? (var_1_9 == ((unsigned long int) (2327469510u - var_1_10))) : 1)) && (((! (var_1_3 < var_1_5)) || var_1_7) ? (var_1_7 ? (var_1_11 == ((unsigned char) (max (var_1_12 , var_1_13)))) : 1) : (((max (8 , var_1_9)) >= var_1_13) ? ((var_1_9 < 25) ? (var_1_11 == ((unsigned char) var_1_13)) : (var_1_11 == ((unsigned char) var_1_12))) : (var_1_11 == ((unsigned char) var_1_13))))
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
