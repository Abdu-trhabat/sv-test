// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch64Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 0.9;
unsigned long int var_1_3 = 2941876006;
double var_1_5 = 127.422;
unsigned short int var_1_6 = 10;
unsigned char var_1_7 = 1;
unsigned long int var_1_9 = 4;
unsigned short int var_1_11 = 44699;
signed short int var_1_13 = 2;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 16;
float var_1_17 = 8.125;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch64Amount25
	var_1_15 = var_1_16;


	// From: Req5Batch64Amount25
	var_1_17 = var_1_5;


	// From: Req2Batch64Amount25
	unsigned long int stepLocal_2 = var_1_3 * (var_1_15 & var_1_15);
	if (var_1_7) {
		if (stepLocal_2 <= (var_1_15 / var_1_9)) {
			var_1_6 = (47342 - var_1_15);
		} else {
			var_1_6 = (var_1_11 - (abs (var_1_15)));
		}
	} else {
		var_1_6 = ((max (var_1_15 , var_1_15)) + 1);
	}


	// From: Req3Batch64Amount25
	var_1_13 = var_1_15;


	// From: Req1Batch64Amount25
	signed long int stepLocal_1 = var_1_6 * var_1_15;
	unsigned char stepLocal_0 = var_1_15;
	if (stepLocal_0 <= (var_1_3 - var_1_6)) {
		if (var_1_3 < stepLocal_1) {
			var_1_1 = var_1_5;
		} else {
			var_1_1 = var_1_5;
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 2147483647);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 4294967295);
	assume_abort_if_not(var_1_9 != 0);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 32767);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
}



void updateLastVariables() {
}

int property() {
	return (((((var_1_15 <= (var_1_3 - var_1_6)) ? ((var_1_3 < (var_1_6 * var_1_15)) ? (var_1_1 == ((double) var_1_5)) : (var_1_1 == ((double) var_1_5))) : 1) && (var_1_7 ? (((var_1_3 * (var_1_15 & var_1_15)) <= (var_1_15 / var_1_9)) ? (var_1_6 == ((unsigned short int) (47342 - var_1_15))) : (var_1_6 == ((unsigned short int) (var_1_11 - (abs (var_1_15)))))) : (var_1_6 == ((unsigned short int) ((max (var_1_15 , var_1_15)) + 1))))) && (var_1_13 == ((signed short int) var_1_15))) && (var_1_15 == ((unsigned char) var_1_16))) && (var_1_17 == ((float) var_1_5))
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
