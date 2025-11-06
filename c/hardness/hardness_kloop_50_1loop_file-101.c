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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10150_1loop.c", 13, "reach_error"); }
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
signed long int var_1_1 = -5;
unsigned char var_1_2 = 1;
signed long int var_1_3 = 128;
signed long int var_1_4 = 25;
unsigned short int var_1_5 = 256;
unsigned char var_1_6 = 0;
signed char var_1_7 = 5;
double var_1_8 = 1.425;
float var_1_10 = 1.75;
double var_1_11 = 7.6;
signed char var_1_12 = 100;
signed char var_1_13 = 64;
signed char var_1_14 = 16;
signed char var_1_15 = 0;
double var_1_16 = 99.25;
double var_1_17 = 7.5;
double var_1_18 = 3.5;
double var_1_19 = 2.2;
double var_1_20 = 1.8;
double var_1_21 = 50.31;
signed short int var_1_22 = 128;
unsigned short int var_1_23 = 128;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch10150_1loop
	if (var_1_2) {
		var_1_1 = (((1000000000 - 64) + var_1_3) - var_1_4);
	}


	// From: Req2Batch10150_1loop
	unsigned char stepLocal_1 = var_1_6;
	signed long int stepLocal_0 = var_1_1;
	if (var_1_2 || stepLocal_1) {
		if ((- var_1_4) <= stepLocal_0) {
			var_1_5 = 5;
		}
	}


	// From: Req4Batch10150_1loop
	if (((max (var_1_4 , var_1_13)) <= var_1_14) || var_1_6) {
		var_1_15 = var_1_13;
	}


	// From: Req5Batch10150_1loop
	signed long int stepLocal_2 = 0;
	if (var_1_5 < stepLocal_2) {
		if (var_1_2) {
			var_1_16 = var_1_17;
		}
	}


	// From: Req6Batch10150_1loop
	if (var_1_8 == (var_1_11 + var_1_16)) {
		var_1_18 = (var_1_19 + (var_1_20 - var_1_21));
	} else {
		var_1_18 = (min ((var_1_20 - (abs (var_1_17))) , var_1_19));
	}


	// From: Req7Batch10150_1loop
	if ((var_1_17 / var_1_10) <= var_1_16) {
		var_1_22 = (abs (min (var_1_12 , (var_1_13 + var_1_15))));
	}


	// From: Req8Batch10150_1loop
	var_1_23 = var_1_13;


	// From: Req3Batch10150_1loop
	if (((- var_1_16) * var_1_18) == 25.75) {
		if ((var_1_16 + (var_1_18 / var_1_10)) > var_1_16) {
			var_1_7 = (var_1_12 - (var_1_13 - var_1_14));
		} else {
			var_1_7 = -25;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1073741823);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 63);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 ? (var_1_1 == ((signed long int) (((1000000000 - 64) + var_1_3) - var_1_4))) : 1) && ((var_1_2 || var_1_6) ? (((- var_1_4) <= var_1_1) ? (var_1_5 == ((unsigned short int) 5)) : 1) : 1)) && ((((- var_1_16) * var_1_18) == 25.75) ? (((var_1_16 + (var_1_18 / var_1_10)) > var_1_16) ? (var_1_7 == ((signed char) (var_1_12 - (var_1_13 - var_1_14)))) : (var_1_7 == ((signed char) -25))) : 1)) && ((((max (var_1_4 , var_1_13)) <= var_1_14) || var_1_6) ? (var_1_15 == ((signed char) var_1_13)) : 1)) && ((var_1_5 < 0) ? (var_1_2 ? (var_1_16 == ((double) var_1_17)) : 1) : 1)) && ((var_1_8 == (var_1_11 + var_1_16)) ? (var_1_18 == ((double) (var_1_19 + (var_1_20 - var_1_21)))) : (var_1_18 == ((double) (min ((var_1_20 - (abs (var_1_17))) , var_1_19)))))) && (((var_1_17 / var_1_10) <= var_1_16) ? (var_1_22 == ((signed short int) (abs (min (var_1_12 , (var_1_13 + var_1_15)))))) : 1)) && (var_1_23 == ((unsigned short int) var_1_13))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
