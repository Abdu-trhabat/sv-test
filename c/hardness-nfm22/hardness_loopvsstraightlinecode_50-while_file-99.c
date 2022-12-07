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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch9950_while.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = 25;
double var_1_10 = 99999999999.25;
double var_1_11 = 255.25;
double var_1_12 = 1.125;
unsigned char var_1_13 = 2;
unsigned char var_1_14 = 5;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 4;
unsigned char var_1_17 = 2;
signed char var_1_18 = 4;
signed char var_1_19 = 16;
signed char var_1_20 = 32;
signed char var_1_21 = 25;
signed char var_1_22 = 1;
signed char var_1_23 = 100;
double var_1_24 = 3.125;
double var_1_25 = 0.0;
unsigned short int var_1_26 = 32;
unsigned short int var_1_27 = 36217;
unsigned char var_1_28 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch9950_while
	if (var_1_2) {
		var_1_1 = (var_1_3 || var_1_4);
	} else {
		var_1_1 = (var_1_3 || (var_1_4 || var_1_5));
	}


	// From: Req5Batch9950_while
	if (! var_1_5) {
		var_1_15 = (max ((var_1_16 + var_1_17) , var_1_14));
	}


	// From: Req6Batch9950_while
	var_1_18 = (max (((var_1_19 - var_1_20) + var_1_21) , (var_1_22 - var_1_23)));


	// From: Req8Batch9950_while
	if (var_1_1) {
		var_1_26 = (min ((min (var_1_18 , var_1_14)) , (var_1_27 - var_1_17)));
	}


	// From: Req9Batch9950_while
	var_1_28 = var_1_16;


	// From: Req2Batch9950_while
	var_1_6 = ((var_1_28 - var_1_26) + var_1_26);


	// From: Req3Batch9950_while
	if (var_1_26 < (var_1_6 * var_1_28)) {
		if (var_1_3) {
			if (var_1_26 <= var_1_6) {
				var_1_10 = (var_1_11 - var_1_12);
			}
		}
	} else {
		var_1_10 = var_1_12;
	}


	// From: Req4Batch9950_while
	signed long int stepLocal_0 = - var_1_26;
	if (var_1_12 != var_1_10) {
		var_1_13 = var_1_14;
	} else {
		if (stepLocal_0 > var_1_14) {
			var_1_13 = var_1_14;
		} else {
			var_1_13 = 25;
		}
	}


	// From: Req7Batch9950_while
	signed char stepLocal_1 = var_1_23;
	if (stepLocal_1 >= (var_1_20 ^ var_1_28)) {
		var_1_24 = (max ((min (var_1_12 , var_1_11)) , ((var_1_25 - 25.5) - 127.125)));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 0);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -63);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -1);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 4611686.018427382800e+12F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 32767);
	assume_abort_if_not(var_1_27 <= 65534);
}



void updateLastVariables() {
}

int property() {
	return ((((((((var_1_2 ? (var_1_1 == ((unsigned char) (var_1_3 || var_1_4))) : (var_1_1 == ((unsigned char) (var_1_3 || (var_1_4 || var_1_5))))) && (var_1_6 == ((signed long int) ((var_1_28 - var_1_26) + var_1_26)))) && ((var_1_26 < (var_1_6 * var_1_28)) ? (var_1_3 ? ((var_1_26 <= var_1_6) ? (var_1_10 == ((double) (var_1_11 - var_1_12))) : 1) : 1) : (var_1_10 == ((double) var_1_12)))) && ((var_1_12 != var_1_10) ? (var_1_13 == ((unsigned char) var_1_14)) : (((- var_1_26) > var_1_14) ? (var_1_13 == ((unsigned char) var_1_14)) : (var_1_13 == ((unsigned char) 25))))) && ((! var_1_5) ? (var_1_15 == ((unsigned char) (max ((var_1_16 + var_1_17) , var_1_14)))) : 1)) && (var_1_18 == ((signed char) (max (((var_1_19 - var_1_20) + var_1_21) , (var_1_22 - var_1_23)))))) && ((var_1_23 >= (var_1_20 ^ var_1_28)) ? (var_1_24 == ((double) (max ((min (var_1_12 , var_1_11)) , ((var_1_25 - 25.5) - 127.125))))) : 1)) && (var_1_1 ? (var_1_26 == ((unsigned short int) (min ((min (var_1_18 , var_1_14)) , (var_1_27 - var_1_17))))) : 1)) && (var_1_28 == ((unsigned char) var_1_16))
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
