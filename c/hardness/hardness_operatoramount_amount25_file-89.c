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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch89Amount25.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 5;
unsigned char var_1_3 = 4;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
double var_1_9 = 9.5;
double var_1_10 = -0.4;
double var_1_11 = 1.2;
unsigned long int var_1_12 = 64;
unsigned long int var_1_14 = 1260186489;
unsigned long int var_1_15 = 1683170464;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_12 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch89Amount25
	unsigned char stepLocal_0 = (var_1_6 && var_1_8) || (last_1_var_1_12 >= 5);
	if (stepLocal_0 && (var_1_3 < last_1_var_1_12)) {
		var_1_9 = var_1_10;
	} else {
		var_1_9 = var_1_11;
	}


	// From: Req3Batch89Amount25
	if (var_1_11 == ((var_1_10 + var_1_9) + var_1_9)) {
		var_1_12 = ((var_1_14 + (var_1_15 - var_1_2)) - var_1_3);
	}


	// From: Req1Batch89Amount25
	if ((var_1_12 / var_1_3) >= var_1_12) {
		var_1_1 = (var_1_5 && var_1_6);
	} else {
		var_1_1 = ((var_1_3 >= var_1_12) && (var_1_7 || var_1_8));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 1073741823);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 1610612735);
	assume_abort_if_not(var_1_15 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
}

int property(void) {
	return ((((var_1_12 / var_1_3) >= var_1_12) ? (var_1_1 == ((unsigned char) (var_1_5 && var_1_6))) : (var_1_1 == ((unsigned char) ((var_1_3 >= var_1_12) && (var_1_7 || var_1_8))))) && ((((var_1_6 && var_1_8) || (last_1_var_1_12 >= 5)) && (var_1_3 < last_1_var_1_12)) ? (var_1_9 == ((double) var_1_10)) : (var_1_9 == ((double) var_1_11)))) && ((var_1_11 == ((var_1_10 + var_1_9) + var_1_9)) ? (var_1_12 == ((unsigned long int) ((var_1_14 + (var_1_15 - var_1_2)) - var_1_3))) : 1)
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
