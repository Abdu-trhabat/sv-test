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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch14125_1loop.c", 13, "reach_error"); }
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
signed char var_1_1 = 32;
float var_1_2 = 0.8;
float var_1_3 = 99.25;
signed char var_1_4 = 50;
signed char var_1_5 = 4;
signed char var_1_6 = 4;
unsigned short int var_1_7 = 100;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
unsigned short int var_1_10 = 50;
unsigned short int var_1_11 = 16;
double var_1_12 = 31.4;
double var_1_13 = 499.075;
double var_1_14 = 31.5;
signed short int var_1_15 = -1;
signed char var_1_16 = -8;
signed char var_1_17 = 5;
signed char var_1_18 = 64;
signed char var_1_19 = 32;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch14125_1loop
	if (var_1_2 < var_1_3) {
		var_1_1 = (max ((-32 + var_1_4) , (max (var_1_5 , var_1_6))));
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req2Batch14125_1loop
	if (var_1_8 && var_1_9) {
		var_1_7 = (var_1_10 + var_1_11);
	}


	// From: Req3Batch14125_1loop
	if (var_1_2 >= 0.75f) {
		var_1_12 = (max (var_1_13 , (abs (var_1_14))));
	}


	// From: Req6Batch14125_1loop
	var_1_20 = var_1_21;


	// From: Req5Batch14125_1loop
	if (var_1_20) {
		var_1_16 = (var_1_17 - (var_1_18 - var_1_19));
	}


	// From: Req4Batch14125_1loop
	unsigned short int stepLocal_0 = var_1_11;
	if (var_1_5 <= stepLocal_0) {
		var_1_15 = (max (var_1_16 , var_1_6));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -63);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -127);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 63);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_2 < var_1_3) ? (var_1_1 == ((signed char) (max ((-32 + var_1_4) , (max (var_1_5 , var_1_6)))))) : (var_1_1 == ((signed char) var_1_6))) && ((var_1_8 && var_1_9) ? (var_1_7 == ((unsigned short int) (var_1_10 + var_1_11))) : 1)) && ((var_1_2 >= 0.75f) ? (var_1_12 == ((double) (max (var_1_13 , (abs (var_1_14)))))) : 1)) && ((var_1_5 <= var_1_11) ? (var_1_15 == ((signed short int) (max (var_1_16 , var_1_6)))) : 1)) && (var_1_20 ? (var_1_16 == ((signed char) (var_1_17 - (var_1_18 - var_1_19)))) : 1)) && (var_1_20 == ((unsigned char) var_1_21))
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
