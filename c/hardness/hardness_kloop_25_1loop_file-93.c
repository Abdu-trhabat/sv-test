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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch9325_1loop.c", 13, "reach_error"); }
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
float var_1_1 = 255.3;
double var_1_3 = -0.9;
double var_1_5 = 128.5;
unsigned char var_1_6 = 1;
float var_1_7 = 1.25;
float var_1_8 = 8.1;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 10;
unsigned char var_1_11 = 10;
double var_1_12 = 16.6;
double var_1_13 = 0.75;
double var_1_14 = 31.8;
double var_1_15 = 7.75;
unsigned short int var_1_16 = 50;
unsigned short int var_1_17 = 61556;

// Calibration values

// Last'ed variables
double last_1_var_1_12 = 16.6;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch9325_1loop
	if (((- last_1_var_1_12) / var_1_3) != (last_1_var_1_12 / var_1_5)) {
		if (var_1_6) {
			var_1_1 = var_1_7;
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req3Batch9325_1loop
	if (var_1_1 != last_1_var_1_12) {
		var_1_12 = ((var_1_13 - var_1_14) + (var_1_15 - 100000.5));
	}


	// From: Req2Batch9325_1loop
	var_1_9 = (var_1_10 + (abs (var_1_11)));


	// From: Req4Batch9325_1loop
	if ((var_1_12 / var_1_5) <= (var_1_3 + (min (var_1_8 , var_1_14)))) {
		var_1_16 = (var_1_17 - var_1_10);
	} else {
		var_1_16 = var_1_11;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	assume_abort_if_not(var_1_5 != 0.0F);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 32767);
	assume_abort_if_not(var_1_17 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
}

int property(void) {
	return ((((((- last_1_var_1_12) / var_1_3) != (last_1_var_1_12 / var_1_5)) ? (var_1_6 ? (var_1_1 == ((float) var_1_7)) : (var_1_1 == ((float) var_1_8))) : (var_1_1 == ((float) var_1_7))) && (var_1_9 == ((unsigned char) (var_1_10 + (abs (var_1_11)))))) && ((var_1_1 != last_1_var_1_12) ? (var_1_12 == ((double) ((var_1_13 - var_1_14) + (var_1_15 - 100000.5)))) : 1)) && (((var_1_12 / var_1_5) <= (var_1_3 + (min (var_1_8 , var_1_14)))) ? (var_1_16 == ((unsigned short int) (var_1_17 - var_1_10))) : (var_1_16 == ((unsigned short int) var_1_11)))
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
