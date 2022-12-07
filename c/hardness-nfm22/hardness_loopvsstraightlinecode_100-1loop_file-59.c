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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch59100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 50;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 64;
signed short int var_1_7 = -2;
signed long int var_1_8 = 16;
unsigned char var_1_11 = 1;
signed char var_1_12 = 8;
signed char var_1_13 = 0;
signed char var_1_14 = 10;
signed char var_1_15 = 8;
unsigned char var_1_16 = 5;
unsigned char var_1_17 = 100;
unsigned char var_1_18 = 25;
unsigned char var_1_19 = 0;
signed short int var_1_20 = -128;
signed short int var_1_21 = -8;
double var_1_22 = 100000000000.35;
double var_1_23 = 199.4;
double var_1_24 = 63.5;
signed short int var_1_25 = 1;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
signed short int var_1_29 = -8;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_8 = 16;
unsigned char last_1_var_1_16 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch59100_1loop
	if ((last_1_var_1_8 + (last_1_var_1_16 + 4u)) != last_1_var_1_16) {
		var_1_1 = ((var_1_5 - 2) - var_1_6);
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req10Batch59100_1loop
	if (100.5f < var_1_22) {
		var_1_27 = (! var_1_28);
	}


	// From: Req5Batch59100_1loop
	if (var_1_27 || var_1_27) {
		var_1_12 = (var_1_13 + (min (var_1_14 , var_1_15)));
	}


	// From: Req3Batch59100_1loop
	signed long int stepLocal_5 = 2;
	unsigned char stepLocal_4 = var_1_5;
	unsigned char stepLocal_3 = var_1_27;
	if (stepLocal_4 <= var_1_1) {
		var_1_8 = (var_1_5 - var_1_6);
	} else {
		if (stepLocal_3 || var_1_27) {
			if (stepLocal_5 < var_1_1) {
				var_1_8 = var_1_6;
			}
		}
	}


	// From: Req4Batch59100_1loop
	if (! var_1_27) {
		if ((var_1_1 >= var_1_1) && var_1_27) {
			var_1_11 = (min (var_1_6 , var_1_5));
		} else {
			var_1_11 = var_1_6;
		}
	}


	// From: Req2Batch59100_1loop
	signed long int stepLocal_2 = ~ (min (var_1_1 , var_1_1));
	signed long int stepLocal_1 = var_1_11 >> var_1_1;
	unsigned char stepLocal_0 = var_1_1;
	if (var_1_5 >= stepLocal_2) {
		if (var_1_1 <= stepLocal_1) {
			if (stepLocal_0 > (var_1_1 ^ (var_1_5 + var_1_11))) {
				var_1_7 = (min (var_1_1 , var_1_6));
			} else {
				var_1_7 = var_1_1;
			}
		}
	} else {
		var_1_7 = var_1_1;
	}


	// From: Req8Batch59100_1loop
	if ((var_1_22 * -0.625) < (var_1_23 * var_1_24)) {
		var_1_21 = (min (var_1_13 , (var_1_12 + (256 - var_1_8))));
	} else {
		if (var_1_27) {
			var_1_21 = (max ((max ((var_1_12 + -1) , var_1_17)) , (var_1_13 + var_1_6)));
		}
	}


	// From: Req11Batch59100_1loop
	if (var_1_7 > var_1_5) {
		if ((var_1_21 <= var_1_6) || (var_1_27 || var_1_27)) {
			var_1_29 = var_1_17;
		}
	}


	// From: Req9Batch59100_1loop
	if (var_1_27) {
		if (var_1_29 >= ((var_1_1 + var_1_19) - (max (var_1_1 , var_1_8)))) {
			if (var_1_27) {
				var_1_25 = var_1_17;
			} else {
				var_1_25 = var_1_18;
			}
		}
	} else {
		var_1_25 = var_1_14;
	}


	// From: Req6Batch59100_1loop
	if (var_1_15 > var_1_25) {
		var_1_16 = (var_1_5 - ((var_1_17 - var_1_18) - var_1_19));
	}


	// From: Req7Batch59100_1loop
	signed long int stepLocal_6 = (var_1_16 | var_1_1) & (min (var_1_12 , var_1_18));
	if (stepLocal_6 > (max ((var_1_11 * var_1_6) , var_1_16))) {
		var_1_20 = (var_1_5 - (max (var_1_11 , 1)));
	} else {
		var_1_20 = (((abs (var_1_16)) - 10) + 16);
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 95);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_16 = var_1_16;
}

int property() {
	return ((((((((((((last_1_var_1_8 + (last_1_var_1_16 + 4u)) != last_1_var_1_16) ? (var_1_1 == ((unsigned char) ((var_1_5 - 2) - var_1_6))) : (var_1_1 == ((unsigned char) var_1_6))) && ((var_1_5 >= (~ (min (var_1_1 , var_1_1)))) ? ((var_1_1 <= (var_1_11 >> var_1_1)) ? ((var_1_1 > (var_1_1 ^ (var_1_5 + var_1_11))) ? (var_1_7 == ((signed short int) (min (var_1_1 , var_1_6)))) : (var_1_7 == ((signed short int) var_1_1))) : 1) : (var_1_7 == ((signed short int) var_1_1)))) && ((var_1_5 <= var_1_1) ? (var_1_8 == ((signed long int) (var_1_5 - var_1_6))) : ((var_1_27 || var_1_27) ? ((2 < var_1_1) ? (var_1_8 == ((signed long int) var_1_6)) : 1) : 1))) && ((! var_1_27) ? (((var_1_1 >= var_1_1) && var_1_27) ? (var_1_11 == ((unsigned char) (min (var_1_6 , var_1_5)))) : (var_1_11 == ((unsigned char) var_1_6))) : 1)) && ((var_1_27 || var_1_27) ? (var_1_12 == ((signed char) (var_1_13 + (min (var_1_14 , var_1_15))))) : 1)) && ((var_1_15 > var_1_25) ? (var_1_16 == ((unsigned char) (var_1_5 - ((var_1_17 - var_1_18) - var_1_19)))) : 1)) && ((((var_1_16 | var_1_1) & (min (var_1_12 , var_1_18))) > (max ((var_1_11 * var_1_6) , var_1_16))) ? (var_1_20 == ((signed short int) (var_1_5 - (max (var_1_11 , 1))))) : (var_1_20 == ((signed short int) (((abs (var_1_16)) - 10) + 16))))) && (((var_1_22 * -0.625) < (var_1_23 * var_1_24)) ? (var_1_21 == ((signed short int) (min (var_1_13 , (var_1_12 + (256 - var_1_8)))))) : (var_1_27 ? (var_1_21 == ((signed short int) (max ((max ((var_1_12 + -1) , var_1_17)) , (var_1_13 + var_1_6))))) : 1))) && (var_1_27 ? ((var_1_29 >= ((var_1_1 + var_1_19) - (max (var_1_1 , var_1_8)))) ? (var_1_27 ? (var_1_25 == ((signed short int) var_1_17)) : (var_1_25 == ((signed short int) var_1_18))) : 1) : (var_1_25 == ((signed short int) var_1_14)))) && ((100.5f < var_1_22) ? (var_1_27 == ((unsigned char) (! var_1_28))) : 1)) && ((var_1_7 > var_1_5) ? (((var_1_21 <= var_1_6) || (var_1_27 || var_1_27)) ? (var_1_29 == ((signed short int) var_1_17)) : 1) : 1)
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
