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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch176normal.c", 13, "reach_error"); }
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
signed long int var_1_1 = 64;
signed long int var_1_2 = 1192640562;
signed long int var_1_3 = 2;
double var_1_4 = 255.6;
signed long int var_1_5 = -1;
double var_1_6 = 64.25;
signed long int var_1_7 = -256;
signed long int var_1_8 = -32;
unsigned char var_1_9 = 0;
unsigned long int var_1_10 = 50;
unsigned char var_1_11 = 5;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch176normal
	var_1_1 = ((10000000 + 5) - (var_1_2 - var_1_3));


	// From: Req3Batch176normal
	if (! (var_1_2 <= var_1_3)) {
		var_1_7 = (min (var_1_2 , (min (var_1_3 , (max (-128 , var_1_8))))));
	}


	// From: Req4Batch176normal
	unsigned long int stepLocal_2 = max (var_1_10 , var_1_1);
	if (stepLocal_2 >= var_1_5) {
		var_1_9 = (16 + var_1_11);
	}


	// From: Req5Batch176normal
	if ((var_1_2 * var_1_1) <= var_1_7) {
		var_1_12 = var_1_13;
	}


	// From: Req2Batch176normal
	signed long int stepLocal_1 = var_1_7 * (var_1_2 * var_1_3);
	signed long int stepLocal_0 = var_1_2;
	if (stepLocal_0 > var_1_3) {
		if (stepLocal_1 > (-1 / var_1_5)) {
			var_1_4 = var_1_6;
		} else {
			var_1_4 = 63.75;
		}
	} else {
		var_1_4 = 10.2;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= 1073741823);
	assume_abort_if_not(var_1_2 <= 2147483646);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1073741823);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483647);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 4294967295);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_1 == ((signed long int) ((10000000 + 5) - (var_1_2 - var_1_3)))) && ((var_1_2 > var_1_3) ? (((var_1_7 * (var_1_2 * var_1_3)) > (-1 / var_1_5)) ? (var_1_4 == ((double) var_1_6)) : (var_1_4 == ((double) 63.75))) : (var_1_4 == ((double) 10.2)))) && ((! (var_1_2 <= var_1_3)) ? (var_1_7 == ((signed long int) (min (var_1_2 , (min (var_1_3 , (max (-128 , var_1_8)))))))) : 1)) && (((max (var_1_10 , var_1_1)) >= var_1_5) ? (var_1_9 == ((unsigned char) (16 + var_1_11))) : 1)) && (((var_1_2 * var_1_1) <= var_1_7) ? (var_1_12 == ((unsigned char) var_1_13)) : 1)
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
