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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch144Amount25.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
signed char var_1_2 = 1;
signed char var_1_3 = -50;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
double var_1_8 = 9999999.4;
double var_1_9 = 15.625;
unsigned char var_1_10 = 1;
signed short int var_1_11 = 32;
signed long int var_1_12 = 4;
unsigned char var_1_13 = 5;
unsigned char var_1_14 = 5;
signed long int var_1_15 = -1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch144Amount25
	signed char stepLocal_0 = var_1_3;
	if (var_1_2 < stepLocal_0) {
		var_1_1 = ((var_1_4 || var_1_5) || (var_1_6 || var_1_7));
	} else {
		var_1_1 = (! var_1_7);
	}


	// From: Req3Batch144Amount25
	signed char stepLocal_2 = var_1_2;
	signed long int stepLocal_1 = (max (4 , var_1_11)) << var_1_2;
	if (stepLocal_1 > (var_1_3 & var_1_12)) {
		var_1_10 = (1 + 50);
	} else {
		if (0 <= stepLocal_2) {
			var_1_10 = var_1_13;
		} else {
			var_1_10 = var_1_14;
		}
	}


	// From: Req4Batch144Amount25
	var_1_15 = var_1_14;


	// From: Req2Batch144Amount25
	if (var_1_15 >= var_1_10) {
		if (var_1_15 > var_1_10) {
			var_1_8 = var_1_9;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 < var_1_3) ? (var_1_1 == ((unsigned char) ((var_1_4 || var_1_5) || (var_1_6 || var_1_7)))) : (var_1_1 == ((unsigned char) (! var_1_7)))) && ((var_1_15 >= var_1_10) ? ((var_1_15 > var_1_10) ? (var_1_8 == ((double) var_1_9)) : 1) : 1)) && ((((max (4 , var_1_11)) << var_1_2) > (var_1_3 & var_1_12)) ? (var_1_10 == ((unsigned char) (1 + 50))) : ((0 <= var_1_2) ? (var_1_10 == ((unsigned char) var_1_13)) : (var_1_10 == ((unsigned char) var_1_14))))) && (var_1_15 == ((signed long int) var_1_14))
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
