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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch24normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 32;
unsigned char var_1_2 = 0;
signed char var_1_4 = 16;
signed char var_1_5 = 4;
signed char var_1_6 = 0;
unsigned short int var_1_7 = 0;
unsigned short int var_1_10 = 55182;
unsigned char var_1_12 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 100;
float var_1_17 = 2.25;
float var_1_18 = 199.4;
signed char var_1_19 = -128;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch24normal
	if (! var_1_2) {
		var_1_12 = var_1_14;
	} else {
		var_1_12 = ((! var_1_15) || (! (! 0)));
	}


	// From: Req4Batch24normal
	var_1_16 = var_1_5;


	// From: Req5Batch24normal
	var_1_17 = var_1_18;


	// From: Req6Batch24normal
	var_1_19 = var_1_4;


	// From: Req1Batch24normal
	if (var_1_12 || (64.75f < var_1_17)) {
		if (var_1_12) {
			var_1_1 = (var_1_4 - var_1_5);
		} else {
			var_1_1 = (min ((max (var_1_4 , var_1_5)) , var_1_6));
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch24normal
	if ((max ((var_1_17 * 127.75) , (var_1_17 / 3.4))) >= var_1_17) {
		var_1_7 = (min ((var_1_10 - (22925 - var_1_5)) , var_1_16));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -127);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return ((((((var_1_12 || (64.75f < var_1_17)) ? (var_1_12 ? (var_1_1 == ((signed char) (var_1_4 - var_1_5))) : (var_1_1 == ((signed char) (min ((max (var_1_4 , var_1_5)) , var_1_6))))) : (var_1_1 == ((signed char) var_1_4))) && (((max ((var_1_17 * 127.75) , (var_1_17 / 3.4))) >= var_1_17) ? (var_1_7 == ((unsigned short int) (min ((var_1_10 - (22925 - var_1_5)) , var_1_16)))) : 1)) && ((! var_1_2) ? (var_1_12 == ((unsigned char) var_1_14)) : (var_1_12 == ((unsigned char) ((! var_1_15) || (! (! 0))))))) && (var_1_16 == ((unsigned char) var_1_5))) && (var_1_17 == ((float) var_1_18))) && (var_1_19 == ((signed char) var_1_4))
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
