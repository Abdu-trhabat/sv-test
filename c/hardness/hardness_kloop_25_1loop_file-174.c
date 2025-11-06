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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch17425_1loop.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 128;
unsigned long int var_1_2 = 3672536656;
unsigned long int var_1_3 = 2030143942;
unsigned long int var_1_4 = 16;
unsigned long int var_1_5 = 2;
unsigned char var_1_6 = 1;
signed long int var_1_7 = -100;
unsigned long int var_1_8 = 1;
unsigned long int var_1_9 = 64;
double var_1_10 = 0.5;
unsigned char var_1_11 = 100;
unsigned char var_1_12 = 1;
double var_1_13 = 0.25;
double var_1_14 = 32.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch17425_1loop
	var_1_1 = (var_1_2 - (var_1_3 - var_1_4));


	// From: Req2Batch17425_1loop
	if (! var_1_6) {
		if (var_1_6) {
			var_1_5 = var_1_4;
		}
	}


	// From: Req3Batch17425_1loop
	unsigned long int stepLocal_2 = var_1_3;
	unsigned long int stepLocal_1 = var_1_2 - (var_1_8 + var_1_9);
	unsigned long int stepLocal_0 = var_1_5;
	if (var_1_4 < stepLocal_1) {
		if (var_1_8 <= stepLocal_2) {
			if (stepLocal_0 > var_1_4) {
				var_1_7 = var_1_4;
			} else {
				var_1_7 = var_1_9;
			}
		}
	} else {
		var_1_7 = var_1_9;
	}


	// From: Req4Batch17425_1loop
	unsigned long int stepLocal_4 = var_1_1 / var_1_11;
	unsigned char stepLocal_3 = var_1_12;
	if (stepLocal_4 == var_1_2) {
		if (stepLocal_3 || var_1_6) {
			var_1_10 = (var_1_13 - var_1_14);
		}
	} else {
		var_1_10 = 500.3;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 2147483647);
	assume_abort_if_not(var_1_2 <= 4294967294);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 1073741823);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1073741824);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 255);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_1 == ((unsigned long int) (var_1_2 - (var_1_3 - var_1_4)))) && ((! var_1_6) ? (var_1_6 ? (var_1_5 == ((unsigned long int) var_1_4)) : 1) : 1)) && ((var_1_4 < (var_1_2 - (var_1_8 + var_1_9))) ? ((var_1_8 <= var_1_3) ? ((var_1_5 > var_1_4) ? (var_1_7 == ((signed long int) var_1_4)) : (var_1_7 == ((signed long int) var_1_9))) : 1) : (var_1_7 == ((signed long int) var_1_9)))) && (((var_1_1 / var_1_11) == var_1_2) ? ((var_1_12 || var_1_6) ? (var_1_10 == ((double) (var_1_13 - var_1_14))) : 1) : (var_1_10 == ((double) 500.3)))
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
