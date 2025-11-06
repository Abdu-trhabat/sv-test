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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch69stepLocals.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 4;
signed short int var_1_2 = -4;
signed short int var_1_3 = 128;
signed short int var_1_4 = 10;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 64;
signed char var_1_9 = -128;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
double var_1_12 = 32.75;
double var_1_13 = 255.6;
unsigned short int var_1_14 = 5;
unsigned char var_1_15 = 1;
float var_1_16 = 8.6;
float var_1_17 = 9.5;
float var_1_18 = 99.2;
unsigned char var_1_19 = 128;
signed short int var_1_20 = 4;
float var_1_21 = 8.5;
double var_1_22 = 4.75;
signed short int var_1_23 = -2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch69stepLocals
	signed long int stepLocal_0 = var_1_3 - var_1_4;
	if (var_1_2 >= stepLocal_0) {
		var_1_1 = ((var_1_5 - (min (var_1_6 , var_1_7))) - var_1_8);
	} else {
		var_1_1 = (32 + var_1_7);
	}


	// From: Req2Batch69stepLocals
	unsigned char stepLocal_2 = var_1_10;
	signed short int stepLocal_1 = var_1_4;
	if ((var_1_8 - var_1_5) >= stepLocal_1) {
		if (stepLocal_2 || var_1_11) {
			var_1_9 = var_1_6;
		} else {
			var_1_9 = var_1_7;
		}
	} else {
		var_1_9 = var_1_5;
	}


	// From: Req3Batch69stepLocals
	unsigned char stepLocal_4 = (var_1_9 + var_1_2) == var_1_3;
	unsigned char stepLocal_3 = var_1_7;
	if (stepLocal_3 > var_1_4) {
		if (stepLocal_4 && var_1_10) {
			if (! var_1_11) {
				var_1_12 = var_1_13;
			} else {
				var_1_12 = 1.4;
			}
		} else {
			var_1_12 = var_1_13;
		}
	} else {
		var_1_12 = var_1_13;
	}


	// From: Req4Batch69stepLocals
	unsigned char stepLocal_5 = var_1_5;
	if (var_1_12 < var_1_13) {
		if (var_1_15 == stepLocal_5) {
			var_1_14 = var_1_7;
		}
	}


	// From: Req5Batch69stepLocals
	if (! (var_1_11 && var_1_10)) {
		var_1_16 = (var_1_17 + var_1_18);
	}


	// From: Req6Batch69stepLocals
	signed long int stepLocal_7 = var_1_6 % var_1_5;
	unsigned char stepLocal_6 = var_1_7;
	if (var_1_20 < stepLocal_6) {
		if (var_1_10) {
			if (var_1_20 >= stepLocal_7) {
				var_1_19 = var_1_8;
			}
		} else {
			var_1_19 = 50;
		}
	}


	// From: Req7Batch69stepLocals
	var_1_21 = var_1_13;


	// From: Req8Batch69stepLocals
	var_1_22 = 2.7;


	// From: Req9Batch69stepLocals
	var_1_23 = var_1_9;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 255);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -32768);
	assume_abort_if_not(var_1_20 <= 32767);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((var_1_2 >= (var_1_3 - var_1_4)) ? (var_1_1 == ((unsigned char) ((var_1_5 - (min (var_1_6 , var_1_7))) - var_1_8))) : (var_1_1 == ((unsigned char) (32 + var_1_7)))) && (((var_1_8 - var_1_5) >= var_1_4) ? ((var_1_10 || var_1_11) ? (var_1_9 == ((signed char) var_1_6)) : (var_1_9 == ((signed char) var_1_7))) : (var_1_9 == ((signed char) var_1_5)))) && ((var_1_7 > var_1_4) ? ((((var_1_9 + var_1_2) == var_1_3) && var_1_10) ? ((! var_1_11) ? (var_1_12 == ((double) var_1_13)) : (var_1_12 == ((double) 1.4))) : (var_1_12 == ((double) var_1_13))) : (var_1_12 == ((double) var_1_13)))) && ((var_1_12 < var_1_13) ? ((var_1_15 == var_1_5) ? (var_1_14 == ((unsigned short int) var_1_7)) : 1) : 1)) && ((! (var_1_11 && var_1_10)) ? (var_1_16 == ((float) (var_1_17 + var_1_18))) : 1)) && ((var_1_20 < var_1_7) ? (var_1_10 ? ((var_1_20 >= (var_1_6 % var_1_5)) ? (var_1_19 == ((unsigned char) var_1_8)) : 1) : (var_1_19 == ((unsigned char) 50))) : 1)) && (var_1_21 == ((float) var_1_13))) && (var_1_22 == ((double) 2.7))) && (var_1_23 == ((signed short int) var_1_9))
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
