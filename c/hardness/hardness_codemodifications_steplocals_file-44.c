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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch44stepLocals.c", 13, "reach_error"); }
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
signed long int var_1_1 = 16;
signed char var_1_2 = -32;
signed char var_1_3 = -64;
signed char var_1_4 = -1;
unsigned char var_1_5 = 1;
signed char var_1_6 = -10;
signed char var_1_7 = 64;
signed short int var_1_8 = -5;
double var_1_9 = 10000000000.4;
double var_1_10 = 256.475;
double var_1_11 = 4.8;
double var_1_12 = 64.2;
signed short int var_1_13 = 256;
unsigned long int var_1_14 = 0;
signed char var_1_15 = 8;
signed char var_1_16 = -5;
unsigned long int var_1_17 = 4182428128;
unsigned long int var_1_18 = 16;
signed char var_1_19 = -5;
signed char var_1_20 = 10;
signed long int var_1_21 = 5;
signed long int var_1_22 = 1000000000;
signed long int var_1_23 = 1000000000;
signed long int var_1_24 = 128;
float var_1_25 = 50.7;
float var_1_26 = 10.5;
float var_1_27 = 1.7;
unsigned long int var_1_28 = 50;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
signed char var_1_31 = -2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch44stepLocals
	signed char stepLocal_0 = var_1_2;
	if (stepLocal_0 == ((var_1_3 + var_1_4) ^ (var_1_6 + var_1_7))) {
		var_1_1 = var_1_2;
	}


	// From: Req2Batch44stepLocals
	if ((abs (var_1_9)) < (min ((var_1_10 - var_1_11) , (abs (var_1_12))))) {
		if (var_1_9 >= var_1_12) {
			var_1_8 = var_1_13;
		} else {
			var_1_8 = var_1_2;
		}
	} else {
		var_1_8 = 0;
	}


	// From: Req3Batch44stepLocals
	if (var_1_3 == (min (var_1_4 , (var_1_13 / var_1_16)))) {
		var_1_14 = var_1_15;
	} else {
		var_1_14 = (var_1_17 - (var_1_15 + var_1_18));
	}


	// From: Req4Batch44stepLocals
	signed long int stepLocal_2 = var_1_4 + var_1_7;
	signed char stepLocal_1 = var_1_16;
	if (((var_1_15 * var_1_6) + var_1_16) < stepLocal_2) {
		if (stepLocal_1 >= var_1_14) {
			var_1_19 = var_1_20;
		}
	}


	// From: Req5Batch44stepLocals
	if (var_1_9 <= var_1_10) {
		var_1_21 = ((var_1_18 + var_1_15) - ((var_1_22 + var_1_23) - var_1_24));
	} else {
		var_1_21 = (var_1_2 + var_1_13);
	}


	// From: Req6Batch44stepLocals
	if (var_1_5) {
		var_1_25 = var_1_26;
	} else {
		var_1_25 = ((abs (var_1_26)) - var_1_27);
	}


	// From: Req7Batch44stepLocals
	var_1_28 = var_1_24;


	// From: Req8Batch44stepLocals
	var_1_29 = var_1_30;


	// From: Req9Batch44stepLocals
	var_1_31 = var_1_20;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -128);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -128);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -128);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32767);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -128);
	assume_abort_if_not(var_1_16 <= 127);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1073741823);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -127);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= 536870911);
	assume_abort_if_not(var_1_22 <= 1073741823);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 536870912);
	assume_abort_if_not(var_1_23 <= 1073741823);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1073741823);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854766000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((var_1_2 == ((var_1_3 + var_1_4) ^ (var_1_6 + var_1_7))) ? (var_1_1 == ((signed long int) var_1_2)) : 1) && (((abs (var_1_9)) < (min ((var_1_10 - var_1_11) , (abs (var_1_12))))) ? ((var_1_9 >= var_1_12) ? (var_1_8 == ((signed short int) var_1_13)) : (var_1_8 == ((signed short int) var_1_2))) : (var_1_8 == ((signed short int) 0)))) && ((var_1_3 == (min (var_1_4 , (var_1_13 / var_1_16)))) ? (var_1_14 == ((unsigned long int) var_1_15)) : (var_1_14 == ((unsigned long int) (var_1_17 - (var_1_15 + var_1_18)))))) && ((((var_1_15 * var_1_6) + var_1_16) < (var_1_4 + var_1_7)) ? ((var_1_16 >= var_1_14) ? (var_1_19 == ((signed char) var_1_20)) : 1) : 1)) && ((var_1_9 <= var_1_10) ? (var_1_21 == ((signed long int) ((var_1_18 + var_1_15) - ((var_1_22 + var_1_23) - var_1_24)))) : (var_1_21 == ((signed long int) (var_1_2 + var_1_13))))) && (var_1_5 ? (var_1_25 == ((float) var_1_26)) : (var_1_25 == ((float) ((abs (var_1_26)) - var_1_27))))) && (var_1_28 == ((unsigned long int) var_1_24))) && (var_1_29 == ((unsigned char) var_1_30))) && (var_1_31 == ((signed char) var_1_20))
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
