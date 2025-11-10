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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch47has_floats.c", 13, "reach_error"); }
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
double var_1_1 = 128.0;
signed char var_1_2 = -8;
double var_1_3 = 16.0;
double var_1_4 = 10000.0;
double var_1_5 = 200.0;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
float var_1_9 = 10.0;
signed long int var_1_10 = -4;
float var_1_11 = 0.0;
float var_1_12 = 64.0;
unsigned char var_1_13 = 128;
unsigned char var_1_14 = 64;
signed short int var_1_15 = 10000;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch47has_floats
	if (((abs (var_1_2)) - 1) < -16) {
		var_1_1 = (max ((abs (var_1_3 - var_1_4)) , (32.0 - var_1_5)));
	} else {
		var_1_1 = -128.0;
	}


	// From: Req2Batch47has_floats
	signed char stepLocal_0 = var_1_2;
	if (stepLocal_0 < -16) {
		var_1_6 = ((var_1_1 <= (- var_1_4)) || var_1_7);
	} else {
		var_1_6 = (var_1_7 || var_1_8);
	}


	// From: Req3Batch47has_floats
	signed long int stepLocal_1 = max (var_1_2 , (-1 + 100));
	if (stepLocal_1 <= var_1_10) {
		if (var_1_8) {
			var_1_9 = (var_1_3 - (min ((var_1_11 + var_1_12) , var_1_4)));
		} else {
			var_1_9 = var_1_11;
		}
	}


	// From: Req4Batch47has_floats
	var_1_13 = var_1_14;


	// From: Req5Batch47has_floats
	var_1_15 = var_1_14;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -127);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((abs (var_1_2)) - 1) < -16) ? (var_1_1 == ((double) (max ((abs (var_1_3 - var_1_4)) , (32.0 - var_1_5))))) : (var_1_1 == ((double) -128.0))) && ((var_1_2 < -16) ? (var_1_6 == ((unsigned char) ((var_1_1 <= (- var_1_4)) || var_1_7))) : (var_1_6 == ((unsigned char) (var_1_7 || var_1_8))))) && (((max (var_1_2 , (-1 + 100))) <= var_1_10) ? (var_1_8 ? (var_1_9 == ((float) (var_1_3 - (min ((var_1_11 + var_1_12) , var_1_4))))) : (var_1_9 == ((float) var_1_11))) : 1)) && (var_1_13 == ((unsigned char) var_1_14))) && (var_1_15 == ((signed short int) var_1_14))
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
