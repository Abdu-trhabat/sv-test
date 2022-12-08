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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch55Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -2;
signed char var_1_4 = 0;
signed char var_1_5 = -5;
signed short int var_1_6 = -32;
signed char var_1_7 = 8;
unsigned char var_1_8 = 2;
float var_1_10 = 15.6;
unsigned char var_1_11 = 10;
unsigned short int var_1_12 = 64;
signed long int var_1_13 = -8;
unsigned long int var_1_14 = 64;
float var_1_17 = 9.75;
float var_1_18 = 0.5;
signed short int var_1_19 = -128;
unsigned char var_1_21 = 1;
unsigned long int var_1_22 = 3552880340;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
signed short int var_1_30 = 10;
float var_1_31 = 99.25;
signed long int var_1_32 = 256;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_6 = -32;
signed long int last_1_var_1_13 = -8;
unsigned long int last_1_var_1_14 = 64;
float last_1_var_1_17 = 9.75;
signed short int last_1_var_1_19 = -128;
unsigned char last_1_var_1_21 = 1;
float last_1_var_1_31 = 99.25;
signed long int last_1_var_1_32 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch55Amount100
	unsigned char stepLocal_4 = (- var_1_18) > last_1_var_1_31;
	if (last_1_var_1_21 || stepLocal_4) {
		if (! last_1_var_1_21) {
			var_1_25 = ((var_1_23 || var_1_26) || var_1_27);
		} else {
			var_1_25 = var_1_24;
		}
	} else {
		var_1_25 = var_1_24;
	}


	// From: Req5Batch55Amount100
	signed char stepLocal_1 = var_1_5;
	if (((last_1_var_1_6 * var_1_11) / 10) <= stepLocal_1) {
		var_1_13 = (var_1_7 + (var_1_11 - (min (last_1_var_1_13 , last_1_var_1_32))));
	} else {
		if ((- (- last_1_var_1_17)) < var_1_10) {
			var_1_13 = (var_1_7 + var_1_5);
		} else {
			var_1_13 = var_1_4;
		}
	}


	// From: Req2Batch55Amount100
	if (var_1_5 > (var_1_13 % var_1_7)) {
		var_1_6 = var_1_5;
	} else {
		var_1_6 = (var_1_5 + var_1_7);
	}


	// From: Req1Batch55Amount100
	if (-2 == last_1_var_1_32) {
		if ((last_1_var_1_32 * last_1_var_1_6) <= -500) {
			var_1_1 = (abs (2 - var_1_4));
		} else {
			var_1_1 = (abs (var_1_4));
		}
	} else {
		var_1_1 = (var_1_5 + 5);
	}


	// From: Req14Batch55Amount100
	var_1_32 = var_1_1;


	// From: Req4Batch55Amount100
	var_1_12 = var_1_11;


	// From: Req12Batch55Amount100
	var_1_30 = var_1_1;


	// From: Req13Batch55Amount100
	var_1_31 = 24.4f;


	// From: Req9Batch55Amount100
	unsigned char stepLocal_3 = (256u & var_1_13) == (var_1_22 - var_1_12);
	unsigned short int stepLocal_2 = var_1_12;
	if (stepLocal_3 || var_1_25) {
		if (var_1_13 != stepLocal_2) {
			var_1_21 = var_1_23;
		} else {
			var_1_21 = var_1_23;
		}
	} else {
		var_1_21 = var_1_24;
	}


	// From: Req11Batch55Amount100
	signed char stepLocal_5 = var_1_7;
	if (stepLocal_5 <= (~ var_1_1)) {
		var_1_28 = (! (! (var_1_24 && var_1_29)));
	} else {
		var_1_28 = ((var_1_31 == 8.5f) || (var_1_29 && var_1_24));
	}


	// From: Req3Batch55Amount100
	unsigned char stepLocal_0 = (var_1_31 / var_1_10) < 255.625f;
	if (stepLocal_0 && (var_1_7 < (var_1_5 * -100))) {
		var_1_8 = (max ((128 - var_1_4) , var_1_11));
	} else {
		var_1_8 = var_1_4;
	}


	// From: Req6Batch55Amount100
	if (var_1_25 || var_1_28) {
		var_1_14 = ((last_1_var_1_14 + 1u) + var_1_11);
	}


	// From: Req7Batch55Amount100
	if ((64 - (abs (-64))) <= (var_1_14 + (var_1_8 * var_1_4))) {
		var_1_17 = 100.5f;
	} else {
		var_1_17 = var_1_18;
	}


	// From: Req8Batch55Amount100
	if ((var_1_31 + (var_1_10 + var_1_31)) > (var_1_18 * var_1_17)) {
		if (var_1_25) {
			var_1_19 = var_1_7;
		} else {
			var_1_19 = last_1_var_1_19;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -63);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -128);
	assume_abort_if_not(var_1_7 <= 127);
	assume_abort_if_not(var_1_7 != 0);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967295);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
}



void updateLastVariables() {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_32 = var_1_32;
}

int property() {
	return ((((((((((((((-2 == last_1_var_1_32) ? (((last_1_var_1_32 * last_1_var_1_6) <= -500) ? (var_1_1 == ((signed char) (abs (2 - var_1_4)))) : (var_1_1 == ((signed char) (abs (var_1_4))))) : (var_1_1 == ((signed char) (var_1_5 + 5)))) && ((var_1_5 > (var_1_13 % var_1_7)) ? (var_1_6 == ((signed short int) var_1_5)) : (var_1_6 == ((signed short int) (var_1_5 + var_1_7))))) && ((((var_1_31 / var_1_10) < 255.625f) && (var_1_7 < (var_1_5 * -100))) ? (var_1_8 == ((unsigned char) (max ((128 - var_1_4) , var_1_11)))) : (var_1_8 == ((unsigned char) var_1_4)))) && (var_1_12 == ((unsigned short int) var_1_11))) && ((((last_1_var_1_6 * var_1_11) / 10) <= var_1_5) ? (var_1_13 == ((signed long int) (var_1_7 + (var_1_11 - (min (last_1_var_1_13 , last_1_var_1_32)))))) : (((- (- last_1_var_1_17)) < var_1_10) ? (var_1_13 == ((signed long int) (var_1_7 + var_1_5))) : (var_1_13 == ((signed long int) var_1_4))))) && ((var_1_25 || var_1_28) ? (var_1_14 == ((unsigned long int) ((last_1_var_1_14 + 1u) + var_1_11))) : 1)) && (((64 - (abs (-64))) <= (var_1_14 + (var_1_8 * var_1_4))) ? (var_1_17 == ((float) 100.5f)) : (var_1_17 == ((float) var_1_18)))) && (((var_1_31 + (var_1_10 + var_1_31)) > (var_1_18 * var_1_17)) ? (var_1_25 ? (var_1_19 == ((signed short int) var_1_7)) : (var_1_19 == ((signed short int) last_1_var_1_19))) : 1)) && ((((256u & var_1_13) == (var_1_22 - var_1_12)) || var_1_25) ? ((var_1_13 != var_1_12) ? (var_1_21 == ((unsigned char) var_1_23)) : (var_1_21 == ((unsigned char) var_1_23))) : (var_1_21 == ((unsigned char) var_1_24)))) && ((last_1_var_1_21 || ((- var_1_18) > last_1_var_1_31)) ? ((! last_1_var_1_21) ? (var_1_25 == ((unsigned char) ((var_1_23 || var_1_26) || var_1_27))) : (var_1_25 == ((unsigned char) var_1_24))) : (var_1_25 == ((unsigned char) var_1_24)))) && ((var_1_7 <= (~ var_1_1)) ? (var_1_28 == ((unsigned char) (! (! (var_1_24 && var_1_29))))) : (var_1_28 == ((unsigned char) ((var_1_31 == 8.5f) || (var_1_29 && var_1_24)))))) && (var_1_30 == ((signed short int) var_1_1))) && (var_1_31 == ((float) 24.4f))) && (var_1_32 == ((signed long int) var_1_1))
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
