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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch6850_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 32;
double var_1_9 = 4.6;
double var_1_10 = 9.25;
double var_1_11 = 1.25;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 0;
float var_1_15 = 7.5;
signed long int var_1_16 = 0;

// Calibration values

// Last'ed variables
double last_1_var_1_9 = 4.6;
unsigned char last_1_var_1_12 = 100;
unsigned char last_1_var_1_14 = 0;
signed long int last_1_var_1_16 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch6850_while
	signed long int stepLocal_4 = last_1_var_1_16;
	if (last_1_var_1_14) {
		if (var_1_10 >= (- last_1_var_1_9)) {
			if (var_1_8 != stepLocal_4) {
				var_1_12 = var_1_13;
			} else {
				var_1_12 = 50;
			}
		} else {
			var_1_12 = var_1_13;
		}
	} else {
		var_1_12 = var_1_13;
	}


	// From: Req8Batch6850_while
	var_1_16 = last_1_var_1_12;


	// From: Req6Batch6850_while
	unsigned long int stepLocal_6 = var_1_13 % (5u + 256u);
	signed long int stepLocal_5 = var_1_13 + 16;
	if (stepLocal_6 <= var_1_16) {
		if (stepLocal_5 >= var_1_16) {
			var_1_14 = var_1_7;
		} else {
			var_1_14 = var_1_7;
		}
	}


	// From: Req1Batch6850_while
	unsigned char stepLocal_0 = var_1_12;
	if (stepLocal_0 <= (var_1_12 ^ var_1_12)) {
		var_1_1 = (! var_1_5);
	} else {
		var_1_1 = (! var_1_5);
	}


	// From: Req2Batch6850_while
	unsigned char stepLocal_2 = var_1_12 < (var_1_16 / var_1_8);
	signed long int stepLocal_1 = var_1_16;
	if (-256 >= stepLocal_1) {
		var_1_6 = (var_1_1 || var_1_7);
	} else {
		if (stepLocal_2 || ((var_1_5 && var_1_7) && var_1_1)) {
			var_1_6 = var_1_7;
		}
	}


	// From: Req4Batch6850_while
	unsigned char stepLocal_3 = ! var_1_5;
	if ((var_1_7 && var_1_14) || stepLocal_3) {
		var_1_11 = var_1_10;
	}


	// From: Req7Batch6850_while
	var_1_15 = var_1_10;


	// From: Req3Batch6850_while
	if ((max ((min (var_1_16 , var_1_12)) , var_1_12)) <= (50 * var_1_8)) {
		var_1_9 = var_1_10;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 255);
	assume_abort_if_not(var_1_8 != 0);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_16 = var_1_16;
}

int property() {
	return ((((((((var_1_12 <= (var_1_12 ^ var_1_12)) ? (var_1_1 == ((unsigned char) (! var_1_5))) : (var_1_1 == ((unsigned char) (! var_1_5)))) && ((-256 >= var_1_16) ? (var_1_6 == ((unsigned char) (var_1_1 || var_1_7))) : (((var_1_12 < (var_1_16 / var_1_8)) || ((var_1_5 && var_1_7) && var_1_1)) ? (var_1_6 == ((unsigned char) var_1_7)) : 1))) && (((max ((min (var_1_16 , var_1_12)) , var_1_12)) <= (50 * var_1_8)) ? (var_1_9 == ((double) var_1_10)) : 1)) && (((var_1_7 && var_1_14) || (! var_1_5)) ? (var_1_11 == ((double) var_1_10)) : 1)) && (last_1_var_1_14 ? ((var_1_10 >= (- last_1_var_1_9)) ? ((var_1_8 != last_1_var_1_16) ? (var_1_12 == ((unsigned char) var_1_13)) : (var_1_12 == ((unsigned char) 50))) : (var_1_12 == ((unsigned char) var_1_13))) : (var_1_12 == ((unsigned char) var_1_13)))) && (((var_1_13 % (5u + 256u)) <= var_1_16) ? (((var_1_13 + 16) >= var_1_16) ? (var_1_14 == ((unsigned char) var_1_7)) : (var_1_14 == ((unsigned char) var_1_7))) : 1)) && (var_1_15 == ((float) var_1_10))) && (var_1_16 == ((signed long int) last_1_var_1_12))
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
