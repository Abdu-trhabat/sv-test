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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch70normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 5.05;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 4;
unsigned char var_1_4 = 4;
unsigned char var_1_5 = 1;
double var_1_6 = 0.0;
double var_1_7 = 49.5;
double var_1_8 = 16.75;
unsigned short int var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned long int var_1_11 = 8;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 32;
unsigned char var_1_15 = 50;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 32;
unsigned long int var_1_18 = 2;
unsigned long int var_1_19 = 3876014737;
unsigned char var_1_20 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch70normal
	if (var_1_3 >= (- (min (var_1_4 , var_1_5)))) {
		var_1_1 = (((var_1_6 - var_1_7) - (max (64.75 , 128.725))) + var_1_8);
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch70normal
	if (var_1_6 > (min (var_1_8 , var_1_1))) {
		if (! ((var_1_1 == var_1_7) && (var_1_2 || var_1_10))) {
			if (! (var_1_6 <= var_1_7)) {
				var_1_9 = (min (var_1_3 , var_1_4));
			}
		} else {
			var_1_9 = var_1_4;
		}
	}


	// From: Req3Batch70normal
	var_1_11 = (var_1_3 + ((min (var_1_9 , var_1_4)) + 2u));


	// From: Req4Batch70normal
	if (var_1_2) {
		var_1_12 = var_1_13;
	}


	// From: Req5Batch70normal
	if ((8 - 64) <= (var_1_9 - var_1_3)) {
		var_1_14 = (min ((var_1_15 + var_1_16) , var_1_17));
	} else {
		var_1_14 = var_1_17;
	}


	// From: Req6Batch70normal
	if (var_1_13) {
		var_1_18 = ((var_1_19 - var_1_9) - var_1_14);
	} else {
		var_1_18 = (max ((var_1_19 - var_1_17) , var_1_15));
	}


	// From: Req7Batch70normal
	if ((var_1_5 / var_1_19) <= (min (var_1_4 , var_1_9))) {
		var_1_20 = var_1_13;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 255);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 2305843.009213691390e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691390e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 3221225470);
	assume_abort_if_not(var_1_19 <= 4294967294);
}



void updateLastVariables() {
}

int property() {
	return (((((((var_1_3 >= (- (min (var_1_4 , var_1_5)))) ? (var_1_1 == ((double) (((var_1_6 - var_1_7) - (max (64.75 , 128.725))) + var_1_8))) : (var_1_1 == ((double) var_1_7))) && ((var_1_6 > (min (var_1_8 , var_1_1))) ? ((! ((var_1_1 == var_1_7) && (var_1_2 || var_1_10))) ? ((! (var_1_6 <= var_1_7)) ? (var_1_9 == ((unsigned short int) (min (var_1_3 , var_1_4)))) : 1) : (var_1_9 == ((unsigned short int) var_1_4))) : 1)) && (var_1_11 == ((unsigned long int) (var_1_3 + ((min (var_1_9 , var_1_4)) + 2u))))) && (var_1_2 ? (var_1_12 == ((unsigned char) var_1_13)) : 1)) && (((8 - 64) <= (var_1_9 - var_1_3)) ? (var_1_14 == ((unsigned char) (min ((var_1_15 + var_1_16) , var_1_17)))) : (var_1_14 == ((unsigned char) var_1_17)))) && (var_1_13 ? (var_1_18 == ((unsigned long int) ((var_1_19 - var_1_9) - var_1_14))) : (var_1_18 == ((unsigned long int) (max ((var_1_19 - var_1_17) , var_1_15)))))) && (((var_1_5 / var_1_19) <= (min (var_1_4 , var_1_9))) ? (var_1_20 == ((unsigned char) var_1_13)) : 1)
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
