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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch16125_while.c", 13, "reach_error"); }
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
float var_1_1 = 3.8;
float var_1_3 = 3.7;
float var_1_4 = 32.375;
float var_1_5 = 1.9;
float var_1_6 = 63.25;
unsigned char var_1_7 = 1;
unsigned long int var_1_8 = 100;
unsigned long int var_1_9 = 32;
float var_1_10 = 0.22499999999999998;
float var_1_11 = 15.2;
unsigned char var_1_12 = 0;
unsigned long int var_1_13 = 10;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_9 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch16125_while
	var_1_8 = last_1_var_1_9;


	// From: Req1Batch16125_while
	signed long int stepLocal_0 = 32;
	if (var_1_8 <= stepLocal_0) {
		if ((var_1_3 - var_1_4) < var_1_5) {
			var_1_1 = var_1_6;
		} else {
			if (var_1_6 < var_1_4) {
				if (var_1_7) {
					var_1_1 = var_1_6;
				} else {
					var_1_1 = 9.9999999375E7f;
				}
			} else {
				var_1_1 = var_1_6;
			}
		}
	}


	// From: Req3Batch16125_while
	if (var_1_7) {
		if (var_1_1 > ((50.2f * var_1_3) / (max (var_1_10 , var_1_11)))) {
			if (var_1_1 == (- var_1_10)) {
				if (var_1_12) {
					var_1_9 = var_1_8;
				} else {
					var_1_9 = var_1_13;
				}
			} else {
				var_1_9 = var_1_8;
			}
		}
	} else {
		var_1_9 = var_1_8;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
}

int property(void) {
	return (((var_1_8 <= 32) ? (((var_1_3 - var_1_4) < var_1_5) ? (var_1_1 == ((float) var_1_6)) : ((var_1_6 < var_1_4) ? (var_1_7 ? (var_1_1 == ((float) var_1_6)) : (var_1_1 == ((float) 9.9999999375E7f))) : (var_1_1 == ((float) var_1_6)))) : 1) && (var_1_8 == ((unsigned long int) last_1_var_1_9))) && (var_1_7 ? ((var_1_1 > ((50.2f * var_1_3) / (max (var_1_10 , var_1_11)))) ? ((var_1_1 == (- var_1_10)) ? (var_1_12 ? (var_1_9 == ((unsigned long int) var_1_8)) : (var_1_9 == ((unsigned long int) var_1_13))) : (var_1_9 == ((unsigned long int) var_1_8))) : 1) : (var_1_9 == ((unsigned long int) var_1_8)))
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
