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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch161has_floats.c", 13, "reach_error"); }
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
float var_1_1 = 16.0;
signed char var_1_4 = 0;
signed char var_1_5 = 8;
signed long int var_1_6 = 10;
signed long int var_1_7 = 64;
double var_1_8 = 5.0;
double var_1_9 = -50.0;
double var_1_10 = -2.0;
float var_1_11 = 16.0;
float var_1_12 = 0.0;
float var_1_13 = 5.0;
unsigned long int var_1_14 = 32;
signed short int var_1_15 = 128;
unsigned long int var_1_16 = 4128352951;
unsigned long int var_1_17 = 100;
signed short int var_1_18 = 32;
float var_1_19 = 2.0;
signed short int var_1_20 = -100;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch161has_floats
	if (256.0 <= (- (var_1_13 * var_1_9))) {
		var_1_14 = var_1_5;
	} else {
		var_1_14 = (var_1_5 + (abs (var_1_7)));
	}


	// From: Req3Batch161has_floats
	unsigned long int stepLocal_1 = var_1_16 - (var_1_5 + var_1_17);
	if (stepLocal_1 != (64u | var_1_14)) {
		var_1_15 = (abs (var_1_5 - var_1_18));
	} else {
		var_1_15 = var_1_14;
	}


	// From: Req4Batch161has_floats
	var_1_19 = 128.0f;


	// From: Req5Batch161has_floats
	var_1_20 = var_1_4;


	// From: Req1Batch161has_floats
	unsigned long int stepLocal_0 = var_1_14 + (var_1_4 - var_1_5);
	if (stepLocal_0 > (var_1_6 - var_1_7)) {
		if ((var_1_8 + var_1_9) <= var_1_10) {
			var_1_1 = (var_1_11 + (var_1_12 - var_1_13));
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 2147483647);
	assume_abort_if_not(var_1_16 <= 4294967295);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32766);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_14 + (var_1_4 - var_1_5)) > (var_1_6 - var_1_7)) ? (((var_1_8 + var_1_9) <= var_1_10) ? (var_1_1 == ((float) (var_1_11 + (var_1_12 - var_1_13)))) : 1) : 1) && ((256.0 <= (- (var_1_13 * var_1_9))) ? (var_1_14 == ((unsigned long int) var_1_5)) : (var_1_14 == ((unsigned long int) (var_1_5 + (abs (var_1_7))))))) && (((var_1_16 - (var_1_5 + var_1_17)) != (64u | var_1_14)) ? (var_1_15 == ((signed short int) (abs (var_1_5 - var_1_18)))) : (var_1_15 == ((signed short int) var_1_14)))) && (var_1_19 == ((float) 128.0f))) && (var_1_20 == ((signed short int) var_1_4))
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
