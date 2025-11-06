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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch6025_1loop.c", 13, "reach_error"); }
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
double var_1_1 = 9999.6;
double var_1_2 = 64.25;
double var_1_3 = 31.2;
signed long int var_1_4 = 1;
signed long int var_1_6 = 10;
unsigned char var_1_7 = 10;
unsigned char var_1_8 = 25;
unsigned char var_1_9 = 100;
signed char var_1_10 = 1;
unsigned char var_1_11 = 0;
signed char var_1_12 = 16;
signed char var_1_13 = 8;
signed long int var_1_14 = -500;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch6025_1loop
	var_1_1 = (var_1_2 - var_1_3);


	// From: Req3Batch6025_1loop
	if (var_1_2 != var_1_3) {
		var_1_7 = (max ((128 - (min (var_1_8 , var_1_9))) , 10));
	}


	// From: Req2Batch6025_1loop
	if ((- var_1_7) >= var_1_6) {
		if (var_1_6 > var_1_7) {
			if (var_1_3 == var_1_1) {
				var_1_4 = var_1_7;
			} else {
				var_1_4 = 32;
			}
		}
	}


	// From: Req4Batch6025_1loop
	if (var_1_11) {
		var_1_10 = (var_1_12 - var_1_13);
	} else {
		if (var_1_4 <= (min ((var_1_8 / var_1_14) , var_1_4))) {
			var_1_10 = -50;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854766000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
	assume_abort_if_not(var_1_14 != 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_1 == ((double) (var_1_2 - var_1_3))) && (((- var_1_7) >= var_1_6) ? ((var_1_6 > var_1_7) ? ((var_1_3 == var_1_1) ? (var_1_4 == ((signed long int) var_1_7)) : (var_1_4 == ((signed long int) 32))) : 1) : 1)) && ((var_1_2 != var_1_3) ? (var_1_7 == ((unsigned char) (max ((128 - (min (var_1_8 , var_1_9))) , 10)))) : 1)) && (var_1_11 ? (var_1_10 == ((signed char) (var_1_12 - var_1_13))) : ((var_1_4 <= (min ((var_1_8 / var_1_14) , var_1_4))) ? (var_1_10 == ((signed char) -50)) : 1))
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
