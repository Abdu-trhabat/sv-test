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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch38has_floats.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 0;
unsigned short int var_1_2 = 56507;
unsigned short int var_1_3 = 52902;
unsigned short int var_1_4 = 8;
unsigned long int var_1_5 = 16;
unsigned long int var_1_6 = 1771558822;
double var_1_7 = -8.0;
double var_1_8 = 10.0;
double var_1_9 = 128.0;
double var_1_10 = 256.0;
double var_1_11 = 2.0;
double var_1_12 = 64.0;
unsigned long int var_1_13 = 256;
unsigned char var_1_14 = 0;
signed long int var_1_15 = -16;
signed char var_1_16 = -8;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch38has_floats
	var_1_1 = ((max (var_1_2 , var_1_3)) - var_1_4);


	// From: Req2Batch38has_floats
	unsigned short int stepLocal_0 = var_1_4;
	if (stepLocal_0 > var_1_2) {
		var_1_5 = (((var_1_6 - var_1_3) + 2144048120u) - var_1_2);
	}


	// From: Req3Batch38has_floats
	var_1_7 = (var_1_8 + var_1_9);


	// From: Req4Batch38has_floats
	signed long int stepLocal_2 = 32;
	unsigned long int stepLocal_1 = - var_1_6;
	if (stepLocal_1 > var_1_5) {
		var_1_10 = (min ((max ((var_1_9 + var_1_8) , var_1_11)) , var_1_12));
	} else {
		if (var_1_2 <= stepLocal_2) {
			var_1_10 = (max ((abs (var_1_8)) , var_1_11));
		}
	}


	// From: Req5Batch38has_floats
	if (var_1_14) {
		var_1_13 = (max ((var_1_6 + var_1_2) , 0u));
	} else {
		var_1_13 = var_1_1;
	}


	// From: Req6Batch38has_floats
	var_1_15 = var_1_3;


	// From: Req7Batch38has_floats
	var_1_16 = 1;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 32767);
	assume_abort_if_not(var_1_2 <= 65534);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 32767);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 1610612735);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_1 == ((unsigned short int) ((max (var_1_2 , var_1_3)) - var_1_4))) && ((var_1_4 > var_1_2) ? (var_1_5 == ((unsigned long int) (((var_1_6 - var_1_3) + 2144048120u) - var_1_2))) : 1)) && (var_1_7 == ((double) (var_1_8 + var_1_9)))) && (((- var_1_6) > var_1_5) ? (var_1_10 == ((double) (min ((max ((var_1_9 + var_1_8) , var_1_11)) , var_1_12)))) : ((var_1_2 <= 32) ? (var_1_10 == ((double) (max ((abs (var_1_8)) , var_1_11)))) : 1))) && (var_1_14 ? (var_1_13 == ((unsigned long int) (max ((var_1_6 + var_1_2) , 0u)))) : (var_1_13 == ((unsigned long int) var_1_1)))) && (var_1_15 == ((signed long int) var_1_3))) && (var_1_16 == ((signed char) 1))
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
