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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch106has_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = -64;
signed long int var_1_2 = -4;
float var_1_3 = -8.0;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 0;
float var_1_6 = 2.0;
float var_1_7 = 1.0;
float var_1_8 = 32.0;
float var_1_9 = 0.0;
float var_1_10 = -2.0;
unsigned short int var_1_11 = 0;
signed long int var_1_12 = 0;
signed long int var_1_13 = 0;
signed long int var_1_14 = 64;
unsigned short int var_1_15 = 16;
unsigned short int var_1_16 = 64;
unsigned short int var_1_17 = 16;
unsigned char var_1_18 = 10;
unsigned char var_1_19 = 128;
unsigned long int var_1_20 = 128;
float var_1_21 = -128.0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch106has_floats
	var_1_1 = var_1_2;


	// From: Req2Batch106has_floats
	if (var_1_4) {
		if (var_1_5) {
			var_1_3 = (min (((abs (var_1_6)) - (min (var_1_7 , var_1_8))) , var_1_9));
		}
	} else {
		var_1_3 = (var_1_8 - 100.0f);
	}


	// From: Req5Batch106has_floats
	var_1_18 = var_1_19;


	// From: Req6Batch106has_floats
	var_1_20 = var_1_14;


	// From: Req7Batch106has_floats
	var_1_21 = var_1_9;


	// From: Req3Batch106has_floats
	if ((var_1_21 * var_1_9) >= var_1_7) {
		var_1_10 = (var_1_7 - (abs (min (var_1_9 , var_1_6))));
	}


	// From: Req4Batch106has_floats
	signed long int stepLocal_0 = -1 - var_1_12;
	if (stepLocal_0 >= (var_1_13 - var_1_14)) {
		if (var_1_21 > var_1_6) {
			var_1_11 = (var_1_15 + (min (var_1_16 , var_1_17)));
		} else {
			var_1_11 = var_1_17;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483647);
	assume_abort_if_not(var_1_2 <= 2147483646);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 32767);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_1 == ((signed long int) var_1_2)) && (var_1_4 ? (var_1_5 ? (var_1_3 == ((float) (min (((abs (var_1_6)) - (min (var_1_7 , var_1_8))) , var_1_9)))) : 1) : (var_1_3 == ((float) (var_1_8 - 100.0f))))) && (((var_1_21 * var_1_9) >= var_1_7) ? (var_1_10 == ((float) (var_1_7 - (abs (min (var_1_9 , var_1_6)))))) : 1)) && (((-1 - var_1_12) >= (var_1_13 - var_1_14)) ? ((var_1_21 > var_1_6) ? (var_1_11 == ((unsigned short int) (var_1_15 + (min (var_1_16 , var_1_17))))) : (var_1_11 == ((unsigned short int) var_1_17))) : 1)) && (var_1_18 == ((unsigned char) var_1_19))) && (var_1_20 == ((unsigned long int) var_1_14))) && (var_1_21 == ((float) var_1_9))
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
