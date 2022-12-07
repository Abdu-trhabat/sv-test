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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch98100_while.c", 13, "reach_error"); }
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
unsigned long int var_1_4 = 128;
signed char var_1_5 = 100;
signed char var_1_6 = 5;
signed char var_1_7 = 25;
signed long int var_1_8 = 0;
signed long int var_1_9 = 100;
signed char var_1_10 = 10;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_14 = 0;
float var_1_15 = 63.5;
float var_1_16 = 0.0;
float var_1_17 = 8.16;
float var_1_18 = 4.625;
float var_1_19 = 1000000.2;
float var_1_20 = 5.2;
signed char var_1_21 = 8;
signed long int var_1_22 = 64;
signed char var_1_24 = 10;
float var_1_25 = 0.0;
float var_1_26 = 128.55;
signed char var_1_27 = 16;
unsigned long int var_1_28 = 256;
signed short int var_1_29 = -128;

// Calibration values

// Last'ed variables
signed char last_1_var_1_10 = 10;
signed long int last_1_var_1_22 = 64;
unsigned long int last_1_var_1_28 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch98100_while
	if (var_1_14) {
		var_1_21 = (abs (var_1_5));
	} else {
		if (last_1_var_1_10 >= (var_1_6 + last_1_var_1_22)) {
			var_1_21 = var_1_6;
		} else {
			var_1_21 = var_1_7;
		}
	}


	// From: Req6Batch98100_while
	if (last_1_var_1_28 <= (abs (var_1_7))) {
		var_1_20 = (min (var_1_17 , var_1_16));
	}


	// From: Req4Batch98100_while
	if (var_1_12) {
		var_1_11 = (((var_1_20 + 31.75f) <= 4.2f) && var_1_14);
	}


	// From: Req2Batch98100_while
	signed char stepLocal_0 = var_1_7;
	if (stepLocal_0 != var_1_4) {
		var_1_8 = ((var_1_7 + (max (var_1_6 , var_1_5))) - var_1_9);
	} else {
		var_1_8 = var_1_21;
	}


	// From: Req5Batch98100_while
	var_1_15 = ((max ((var_1_16 - var_1_17) , var_1_18)) - var_1_19);


	// From: Req9Batch98100_while
	unsigned char stepLocal_3 = var_1_11;
	if (var_1_17 > ((max (var_1_19 , var_1_16)) - (var_1_25 - var_1_26))) {
		var_1_24 = (32 - (var_1_6 + var_1_27));
	} else {
		if (stepLocal_3 && (var_1_11 && var_1_14)) {
			var_1_24 = (var_1_6 + var_1_27);
		} else {
			if (var_1_15 >= var_1_18) {
				var_1_24 = var_1_6;
			} else {
				var_1_24 = var_1_27;
			}
		}
	}


	// From: Req3Batch98100_while
	signed long int stepLocal_1 = var_1_24 + (var_1_5 - var_1_7);
	if (var_1_6 >= stepLocal_1) {
		var_1_10 = (var_1_7 - var_1_6);
	} else {
		var_1_10 = var_1_7;
	}


	// From: Req10Batch98100_while
	if (var_1_11) {
		if (! (var_1_20 >= var_1_16)) {
			var_1_28 = (var_1_27 + var_1_5);
		} else {
			if ((- var_1_26) < (- (var_1_15 + var_1_17))) {
				var_1_28 = (max (var_1_7 , var_1_27));
			}
		}
	} else {
		var_1_28 = (max (var_1_7 , var_1_6));
	}


	// From: Req8Batch98100_while
	unsigned char stepLocal_2 = var_1_11;
	if (stepLocal_2 && var_1_11) {
		var_1_22 = (abs ((var_1_6 + var_1_10) + var_1_21));
	} else {
		var_1_22 = (abs (var_1_28));
	}


	// From: Req1Batch98100_while
	if (10u <= (abs (var_1_22))) {
		if ((min (16u , var_1_22)) >= (var_1_8 % var_1_4)) {
			var_1_1 = ((var_1_5 - var_1_6) - var_1_7);
		}
	}


	// From: Req11Batch98100_while
	if ((var_1_8 > var_1_22) && (var_1_19 < (var_1_15 / var_1_16))) {
		if (var_1_27 != (var_1_7 - var_1_6)) {
			var_1_29 = ((max (var_1_6 , var_1_7)) - ((10000 - var_1_5) + var_1_27));
		} else {
			var_1_29 = var_1_10;
		}
	} else {
		var_1_29 = var_1_27;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 62);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 4611686.018427382800e+12F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 4611686.018427387900e+12F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427387900e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_28 = var_1_28;
}

int property() {
	return (((((((((((10u <= (abs (var_1_22))) ? (((min (16u , var_1_22)) >= (var_1_8 % var_1_4)) ? (var_1_1 == ((signed char) ((var_1_5 - var_1_6) - var_1_7))) : 1) : 1) && ((var_1_7 != var_1_4) ? (var_1_8 == ((signed long int) ((var_1_7 + (max (var_1_6 , var_1_5))) - var_1_9))) : (var_1_8 == ((signed long int) var_1_21)))) && ((var_1_6 >= (var_1_24 + (var_1_5 - var_1_7))) ? (var_1_10 == ((signed char) (var_1_7 - var_1_6))) : (var_1_10 == ((signed char) var_1_7)))) && (var_1_12 ? (var_1_11 == ((unsigned char) (((var_1_20 + 31.75f) <= 4.2f) && var_1_14))) : 1)) && (var_1_15 == ((float) ((max ((var_1_16 - var_1_17) , var_1_18)) - var_1_19)))) && ((last_1_var_1_28 <= (abs (var_1_7))) ? (var_1_20 == ((float) (min (var_1_17 , var_1_16)))) : 1)) && (var_1_14 ? (var_1_21 == ((signed char) (abs (var_1_5)))) : ((last_1_var_1_10 >= (var_1_6 + last_1_var_1_22)) ? (var_1_21 == ((signed char) var_1_6)) : (var_1_21 == ((signed char) var_1_7))))) && ((var_1_11 && var_1_11) ? (var_1_22 == ((signed long int) (abs ((var_1_6 + var_1_10) + var_1_21)))) : (var_1_22 == ((signed long int) (abs (var_1_28)))))) && ((var_1_17 > ((max (var_1_19 , var_1_16)) - (var_1_25 - var_1_26))) ? (var_1_24 == ((signed char) (32 - (var_1_6 + var_1_27)))) : ((var_1_11 && (var_1_11 && var_1_14)) ? (var_1_24 == ((signed char) (var_1_6 + var_1_27))) : ((var_1_15 >= var_1_18) ? (var_1_24 == ((signed char) var_1_6)) : (var_1_24 == ((signed char) var_1_27)))))) && (var_1_11 ? ((! (var_1_20 >= var_1_16)) ? (var_1_28 == ((unsigned long int) (var_1_27 + var_1_5))) : (((- var_1_26) < (- (var_1_15 + var_1_17))) ? (var_1_28 == ((unsigned long int) (max (var_1_7 , var_1_27)))) : 1)) : (var_1_28 == ((unsigned long int) (max (var_1_7 , var_1_6)))))) && (((var_1_8 > var_1_22) && (var_1_19 < (var_1_15 / var_1_16))) ? ((var_1_27 != (var_1_7 - var_1_6)) ? (var_1_29 == ((signed short int) ((max (var_1_6 , var_1_7)) - ((10000 - var_1_5) + var_1_27)))) : (var_1_29 == ((signed short int) var_1_10))) : (var_1_29 == ((signed short int) var_1_27)))
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
