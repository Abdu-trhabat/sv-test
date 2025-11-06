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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch3525_1loop.c", 13, "reach_error"); }
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
float var_1_1 = 4.8;
unsigned long int var_1_2 = 2;
unsigned long int var_1_3 = 5;
float var_1_4 = 255.1;
float var_1_5 = -0.6;
signed short int var_1_6 = -10;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
signed short int var_1_9 = -4;
signed short int var_1_10 = -100;
signed char var_1_11 = 0;
unsigned char var_1_12 = 128;
unsigned char var_1_13 = 10;
signed short int var_1_14 = 32;
signed long int var_1_15 = 64;
signed long int var_1_16 = 8;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_14 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch3525_1loop
	unsigned long int stepLocal_0 = ~ var_1_3;
	if (var_1_2 >= stepLocal_0) {
		var_1_1 = (var_1_4 + var_1_5);
	}


	// From: Req2Batch3525_1loop
	if (var_1_7) {
		if (var_1_8) {
			var_1_6 = (var_1_9 + var_1_10);
		} else {
			var_1_6 = var_1_9;
		}
	} else {
		var_1_6 = var_1_9;
	}


	// From: Req3Batch3525_1loop
	signed long int stepLocal_1 = var_1_12 - (64 - var_1_13);
	if (stepLocal_1 != var_1_2) {
		if (var_1_7) {
			var_1_11 = var_1_13;
		}
	}


	// From: Req4Batch3525_1loop
	signed long int stepLocal_2 = var_1_6 * var_1_13;
	if (var_1_7) {
		if (stepLocal_2 > ((min (var_1_12 , var_1_15)) - var_1_16)) {
			var_1_14 = (var_1_10 + var_1_13);
		} else {
			var_1_14 = last_1_var_1_14;
		}
	} else {
		var_1_14 = var_1_13;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -16383);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -16383);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 127);
	assume_abort_if_not(var_1_12 <= 255);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_14 = var_1_14;
}

int property(void) {
	return ((((var_1_2 >= (~ var_1_3)) ? (var_1_1 == ((float) (var_1_4 + var_1_5))) : 1) && (var_1_7 ? (var_1_8 ? (var_1_6 == ((signed short int) (var_1_9 + var_1_10))) : (var_1_6 == ((signed short int) var_1_9))) : (var_1_6 == ((signed short int) var_1_9)))) && (((var_1_12 - (64 - var_1_13)) != var_1_2) ? (var_1_7 ? (var_1_11 == ((signed char) var_1_13)) : 1) : 1)) && (var_1_7 ? (((var_1_6 * var_1_13) > ((min (var_1_12 , var_1_15)) - var_1_16)) ? (var_1_14 == ((signed short int) (var_1_10 + var_1_13))) : (var_1_14 == ((signed short int) last_1_var_1_14))) : (var_1_14 == ((signed short int) var_1_13)))
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
