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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch157normal.c", 13, "reach_error"); }
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
signed long int var_1_1 = 200;
signed long int var_1_2 = 1;
signed long int var_1_3 = 8;
signed long int var_1_5 = -16;
unsigned char var_1_6 = 0;
signed long int var_1_7 = 1000000000;
signed long int var_1_8 = 128;
float var_1_9 = 0.6;
float var_1_10 = 64.75;
float var_1_11 = 24.99;
float var_1_12 = 16.75;
float var_1_13 = 63.5;
float var_1_14 = 4.75;
signed long int var_1_15 = 1000000;
signed long int var_1_16 = 2;
signed long int var_1_17 = 25;
signed long int var_1_18 = -10;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 10;
unsigned char var_1_22 = 128;
unsigned char var_1_23 = 8;
unsigned char var_1_24 = 10;
unsigned char var_1_25 = 10;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch157normal
	if ((var_1_9 + var_1_10) >= ((min (var_1_11 , var_1_12)) - (min (var_1_13 , var_1_14)))) {
		var_1_8 = (var_1_15 - var_1_16);
	} else {
		var_1_8 = var_1_17;
	}


	// From: Req3Batch157normal
	if (var_1_6 && (var_1_19 && var_1_20)) {
		var_1_18 = -200;
	}


	// From: Req4Batch157normal
	var_1_21 = (var_1_22 - ((32 - var_1_23) + (min (var_1_24 , var_1_25))));


	// From: Req1Batch157normal
	signed long int stepLocal_1 = max ((var_1_2 - var_1_3) , var_1_8);
	signed long int stepLocal_0 = var_1_2 / var_1_5;
	if (128 <= stepLocal_1) {
		if (var_1_3 <= stepLocal_0) {
			if (var_1_6) {
				var_1_1 = 10;
			} else {
				var_1_1 = var_1_7;
			}
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = var_1_7;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483647);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 2147483646);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483647);
	assume_abort_if_not(var_1_17 <= 2147483646);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 127);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 32);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((128 <= (max ((var_1_2 - var_1_3) , var_1_8))) ? ((var_1_3 <= (var_1_2 / var_1_5)) ? (var_1_6 ? (var_1_1 == ((signed long int) 10)) : (var_1_1 == ((signed long int) var_1_7))) : (var_1_1 == ((signed long int) var_1_7))) : (var_1_1 == ((signed long int) var_1_7))) && (((var_1_9 + var_1_10) >= ((min (var_1_11 , var_1_12)) - (min (var_1_13 , var_1_14)))) ? (var_1_8 == ((signed long int) (var_1_15 - var_1_16))) : (var_1_8 == ((signed long int) var_1_17)))) && ((var_1_6 && (var_1_19 && var_1_20)) ? (var_1_18 == ((signed long int) -200)) : 1)) && (var_1_21 == ((unsigned char) (var_1_22 - ((32 - var_1_23) + (min (var_1_24 , var_1_25))))))
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
