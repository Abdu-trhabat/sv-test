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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch148has_floats.c", 13, "reach_error"); }
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
float var_1_1 = -8.0;
unsigned long int var_1_2 = 4;
unsigned long int var_1_3 = 5;
unsigned long int var_1_4 = 4;
unsigned long int var_1_5 = 100000000;
float var_1_6 = 256.0;
float var_1_7 = 128.0;
float var_1_8 = 8.0;
unsigned long int var_1_9 = 10;
unsigned long int var_1_12 = 4125767449;
unsigned long int var_1_13 = 1;
unsigned long int var_1_14 = 1979163613;
unsigned long int var_1_15 = 25;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
double var_1_20 = -50.0;
float var_1_21 = 500.0;
float var_1_22 = 32.0;
double var_1_23 = 0.0;
double var_1_24 = 64.0;
double var_1_25 = 1.0;
float var_1_26 = 1.0;
float var_1_27 = 1.0;
float var_1_28 = 32.0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch148has_floats
	if ((var_1_2 | var_1_3) < (var_1_4 * var_1_5)) {
		var_1_1 = ((var_1_6 + var_1_7) + (-32.0f + var_1_8));
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch148has_floats
	unsigned long int stepLocal_0 = var_1_4;
	if ((max ((var_1_12 - var_1_13) , var_1_2)) <= stepLocal_0) {
		var_1_9 = (var_1_13 + (var_1_14 - var_1_15));
	}


	// From: Req3Batch148has_floats
	var_1_16 = (var_1_17 || (var_1_18 || var_1_19));


	// From: Req5Batch148has_floats
	var_1_26 = (((abs (var_1_7)) - var_1_27) + var_1_8);


	// From: Req6Batch148has_floats
	var_1_28 = var_1_25;


	// From: Req4Batch148has_floats
	if (var_1_26 != (var_1_21 - var_1_22)) {
		var_1_20 = (var_1_23 - (min (var_1_24 , var_1_25)));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -230584.3009213691400e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691400e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -230584.3009213691400e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691400e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -230584.3009213691400e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 2305843.009213691400e+12F && var_1_8 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 2147483647);
	assume_abort_if_not(var_1_12 <= 4294967295);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 1073741823);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1073741823);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 | var_1_3) < (var_1_4 * var_1_5)) ? (var_1_1 == ((float) ((var_1_6 + var_1_7) + (-32.0f + var_1_8)))) : (var_1_1 == ((float) var_1_7))) && (((max ((var_1_12 - var_1_13) , var_1_2)) <= var_1_4) ? (var_1_9 == ((unsigned long int) (var_1_13 + (var_1_14 - var_1_15)))) : 1)) && (var_1_16 == ((unsigned char) (var_1_17 || (var_1_18 || var_1_19))))) && ((var_1_26 != (var_1_21 - var_1_22)) ? (var_1_20 == ((double) (var_1_23 - (min (var_1_24 , var_1_25))))) : 1)) && (var_1_26 == ((float) (((abs (var_1_7)) - var_1_27) + var_1_8)))) && (var_1_28 == ((float) var_1_25))
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
