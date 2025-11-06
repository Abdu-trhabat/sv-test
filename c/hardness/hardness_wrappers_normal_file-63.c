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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch63normal.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
float var_1_2 = 8.3;
float var_1_3 = 2.25;
float var_1_4 = 10.3;
unsigned char var_1_6 = 0;
signed long int var_1_7 = 128;
float var_1_8 = 9.8;
signed long int var_1_9 = 32;
signed long int var_1_10 = 2;
signed long int var_1_11 = 256;
signed long int var_1_12 = -256;
unsigned long int var_1_13 = 1;
unsigned long int var_1_14 = 32;
signed char var_1_15 = -10;
signed char var_1_16 = 16;
signed char var_1_17 = 25;
signed char var_1_18 = 1;
signed char var_1_19 = 0;
signed char var_1_20 = 32;
signed short int var_1_21 = 256;
signed char var_1_22 = 16;
unsigned char var_1_23 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch63normal
	if (var_1_4 <= ((min (var_1_2 , var_1_3)) * var_1_8)) {
		var_1_7 = (max ((max ((var_1_9 + var_1_10) , var_1_11)) , (abs (var_1_12))));
	} else {
		var_1_7 = var_1_9;
	}


	// From: Req3Batch63normal
	var_1_13 = var_1_14;


	// From: Req4Batch63normal
	signed long int stepLocal_0 = var_1_7;
	if (stepLocal_0 != (min (var_1_9 , var_1_12))) {
		var_1_15 = ((min ((10 + var_1_16) , var_1_17)) - ((32 - var_1_18) + (max (var_1_19 , var_1_20))));
	}


	// From: Req5Batch63normal
	var_1_21 = var_1_13;


	// From: Req6Batch63normal
	var_1_22 = var_1_16;


	// From: Req7Batch63normal
	var_1_23 = var_1_6;


	// From: Req1Batch63normal
	if ((min (1.1f , var_1_2)) > (var_1_3 * var_1_4)) {
		var_1_1 = (var_1_23 && var_1_6);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -1073741823);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -1073741823);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483647);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483646);
	assume_abort_if_not(var_1_12 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967294);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 31);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((min (1.1f , var_1_2)) > (var_1_3 * var_1_4)) ? (var_1_1 == ((unsigned char) (var_1_23 && var_1_6))) : 1) && ((var_1_4 <= ((min (var_1_2 , var_1_3)) * var_1_8)) ? (var_1_7 == ((signed long int) (max ((max ((var_1_9 + var_1_10) , var_1_11)) , (abs (var_1_12)))))) : (var_1_7 == ((signed long int) var_1_9)))) && (var_1_13 == ((unsigned long int) var_1_14))) && ((var_1_7 != (min (var_1_9 , var_1_12))) ? (var_1_15 == ((signed char) ((min ((10 + var_1_16) , var_1_17)) - ((32 - var_1_18) + (max (var_1_19 , var_1_20)))))) : 1)) && (var_1_21 == ((signed short int) var_1_13))) && (var_1_22 == ((signed char) var_1_16))) && (var_1_23 == ((unsigned char) var_1_6))
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
