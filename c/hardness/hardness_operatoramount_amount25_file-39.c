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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch39Amount25.c", 13, "reach_error"); }
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
signed short int var_1_1 = -5;
signed short int var_1_2 = 0;
signed short int var_1_3 = 1000;
signed short int var_1_4 = 10;
signed short int var_1_5 = 32;
signed long int var_1_6 = 5;
float var_1_7 = 1.1;
float var_1_8 = 7.8;
float var_1_9 = 1.75;
unsigned char var_1_10 = 0;
signed char var_1_11 = 32;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 10;
unsigned char var_1_16 = 5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch39Amount25
	var_1_1 = (((max (16 , 4)) + var_1_2) - (var_1_3 + (min (var_1_4 , var_1_5))));


	// From: Req2Batch39Amount25
	if (var_1_2 >= var_1_1) {
		if ((abs (var_1_7 + var_1_8)) < var_1_9) {
			var_1_6 = (max (var_1_2 , var_1_5));
		} else {
			var_1_6 = var_1_4;
		}
	} else {
		var_1_6 = var_1_3;
	}


	// From: Req3Batch39Amount25
	signed short int stepLocal_0 = var_1_2;
	if ((abs (var_1_11)) == stepLocal_0) {
		var_1_10 = (var_1_12 || var_1_13);
	}


	// From: Req4Batch39Amount25
	signed short int stepLocal_1 = var_1_3;
	if (var_1_10) {
		if (stepLocal_1 >= var_1_6) {
			var_1_14 = var_1_16;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 16383);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 16383);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_1 == ((signed short int) (((max (16 , 4)) + var_1_2) - (var_1_3 + (min (var_1_4 , var_1_5)))))) && ((var_1_2 >= var_1_1) ? (((abs (var_1_7 + var_1_8)) < var_1_9) ? (var_1_6 == ((signed long int) (max (var_1_2 , var_1_5)))) : (var_1_6 == ((signed long int) var_1_4))) : (var_1_6 == ((signed long int) var_1_3)))) && (((abs (var_1_11)) == var_1_2) ? (var_1_10 == ((unsigned char) (var_1_12 || var_1_13))) : 1)) && (var_1_10 ? ((var_1_3 >= var_1_6) ? (var_1_14 == ((unsigned char) var_1_16)) : 1) : 1)
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
