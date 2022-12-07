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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch37100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 2;
unsigned char var_1_2 = 0;
signed char var_1_3 = 10;
signed char var_1_4 = 64;
signed char var_1_5 = 5;
double var_1_7 = 4.175;
unsigned char var_1_9 = 100;
unsigned short int var_1_10 = 128;
float var_1_11 = 10.6;
float var_1_12 = 16.25;
float var_1_13 = 0.0;
float var_1_14 = 127.2;
double var_1_15 = 0.75;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 1;
signed char var_1_20 = 1;
signed short int var_1_21 = -1;
unsigned long int var_1_22 = 1000000000;
signed long int var_1_23 = -50;
unsigned long int var_1_24 = 3900988395;
unsigned long int var_1_25 = 2230016845;
unsigned long int var_1_26 = 256;
unsigned long int var_1_27 = 4;
signed char var_1_29 = 8;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 2;
unsigned char last_1_var_1_9 = 100;
unsigned short int last_1_var_1_10 = 128;
double last_1_var_1_15 = 0.75;
signed short int last_1_var_1_21 = -1;
unsigned long int last_1_var_1_22 = 1000000000;
unsigned long int last_1_var_1_27 = 4;
signed char last_1_var_1_29 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch37100_while
	signed long int stepLocal_3 = last_1_var_1_1 * last_1_var_1_29;
	if (var_1_5 == stepLocal_3) {
		var_1_21 = ((var_1_4 - last_1_var_1_1) + (abs (last_1_var_1_22)));
	} else {
		var_1_21 = (max (last_1_var_1_21 , var_1_4));
	}


	// From: Req10Batch37100_while
	signed long int stepLocal_4 = last_1_var_1_10;
	if ((var_1_5 / (min (var_1_4 , var_1_23))) <= stepLocal_4) {
		if (var_1_19) {
			var_1_22 = (var_1_24 - (last_1_var_1_9 + var_1_4));
		} else {
			var_1_22 = (min (((min (var_1_24 , var_1_25)) - (last_1_var_1_9 + last_1_var_1_27)) , (max (last_1_var_1_10 , (max (var_1_4 , var_1_5))))));
		}
	}


	// From: Req7Batch37100_while
	if (last_1_var_1_15 < (- var_1_14)) {
		var_1_18 = (var_1_2 || var_1_19);
	}


	// From: Req4Batch37100_while
	var_1_10 = (min (var_1_5 , var_1_4));


	// From: Req5Batch37100_while
	var_1_11 = (var_1_12 - (min (var_1_14 , var_1_13)));


	// From: Req8Batch37100_while
	var_1_20 = var_1_5;


	// From: Req3Batch37100_while
	if (var_1_21 != 10) {
		var_1_9 = (max (var_1_4 , 2));
	} else {
		if (var_1_22 > (var_1_21 / 128)) {
			if (var_1_18) {
				var_1_9 = var_1_4;
			} else {
				var_1_9 = var_1_5;
			}
		} else {
			var_1_9 = var_1_4;
		}
	}


	// From: Req2Batch37100_while
	signed short int stepLocal_2 = var_1_21;
	unsigned long int stepLocal_1 = var_1_22;
	if ((var_1_9 * (var_1_4 * var_1_5)) < stepLocal_2) {
		if (stepLocal_1 != (var_1_5 | (var_1_9 ^ var_1_4))) {
			if (var_1_18) {
				var_1_7 = 8.5;
			}
		}
	}


	// From: Req6Batch37100_while
	if (var_1_18) {
		var_1_15 = (min ((max (var_1_14 , var_1_12)) , (abs (var_1_13))));
	} else {
		if (var_1_22 < var_1_4) {
			if (var_1_18 || var_1_18) {
				var_1_15 = var_1_14;
			} else {
				var_1_15 = var_1_14;
			}
		} else {
			var_1_15 = var_1_13;
		}
	}


	// From: Req1Batch37100_while
	signed long int stepLocal_0 = 500 * var_1_10;
	if (var_1_18) {
		if ((var_1_3 - (var_1_4 - var_1_5)) >= stepLocal_0) {
			var_1_1 = var_1_4;
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req12Batch37100_while
	if (var_1_18 && var_1_19) {
		var_1_27 = (min (var_1_5 , ((var_1_4 + var_1_1) + var_1_1)));
	}


	// From: Req11Batch37100_while
	if ((var_1_13 - var_1_14) <= var_1_12) {
		var_1_26 = (var_1_25 - var_1_27);
	} else {
		var_1_26 = (abs (var_1_27 + (max (var_1_9 , var_1_5))));
	}


	// From: Req13Batch37100_while
	unsigned char stepLocal_5 = var_1_13 < var_1_15;
	if (var_1_18 || stepLocal_5) {
		if ((max ((var_1_7 / var_1_13) , 99.6f)) != var_1_15) {
			var_1_29 = (var_1_5 - 10);
		} else {
			var_1_29 = var_1_5;
		}
	} else {
		var_1_29 = var_1_5;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 63);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 6917529.027641073700e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483648);
	assume_abort_if_not(var_1_23 <= 2147483647);
	assume_abort_if_not(var_1_23 != 0);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 2147483647);
	assume_abort_if_not(var_1_24 <= 4294967294);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 2147483647);
	assume_abort_if_not(var_1_25 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_29 = var_1_29;
}

int property() {
	return ((((((((((((var_1_18 ? (((var_1_3 - (var_1_4 - var_1_5)) >= (500 * var_1_10)) ? (var_1_1 == ((signed long int) var_1_4)) : 1) : (var_1_1 == ((signed long int) var_1_4))) && (((var_1_9 * (var_1_4 * var_1_5)) < var_1_21) ? ((var_1_22 != (var_1_5 | (var_1_9 ^ var_1_4))) ? (var_1_18 ? (var_1_7 == ((double) 8.5)) : 1) : 1) : 1)) && ((var_1_21 != 10) ? (var_1_9 == ((unsigned char) (max (var_1_4 , 2)))) : ((var_1_22 > (var_1_21 / 128)) ? (var_1_18 ? (var_1_9 == ((unsigned char) var_1_4)) : (var_1_9 == ((unsigned char) var_1_5))) : (var_1_9 == ((unsigned char) var_1_4))))) && (var_1_10 == ((unsigned short int) (min (var_1_5 , var_1_4))))) && (var_1_11 == ((float) (var_1_12 - (min (var_1_14 , var_1_13)))))) && (var_1_18 ? (var_1_15 == ((double) (min ((max (var_1_14 , var_1_12)) , (abs (var_1_13)))))) : ((var_1_22 < var_1_4) ? ((var_1_18 || var_1_18) ? (var_1_15 == ((double) var_1_14)) : (var_1_15 == ((double) var_1_14))) : (var_1_15 == ((double) var_1_13))))) && ((last_1_var_1_15 < (- var_1_14)) ? (var_1_18 == ((unsigned char) (var_1_2 || var_1_19))) : 1)) && (var_1_20 == ((signed char) var_1_5))) && ((var_1_5 == (last_1_var_1_1 * last_1_var_1_29)) ? (var_1_21 == ((signed short int) ((var_1_4 - last_1_var_1_1) + (abs (last_1_var_1_22))))) : (var_1_21 == ((signed short int) (max (last_1_var_1_21 , var_1_4)))))) && (((var_1_5 / (min (var_1_4 , var_1_23))) <= last_1_var_1_10) ? (var_1_19 ? (var_1_22 == ((unsigned long int) (var_1_24 - (last_1_var_1_9 + var_1_4)))) : (var_1_22 == ((unsigned long int) (min (((min (var_1_24 , var_1_25)) - (last_1_var_1_9 + last_1_var_1_27)) , (max (last_1_var_1_10 , (max (var_1_4 , var_1_5))))))))) : 1)) && (((var_1_13 - var_1_14) <= var_1_12) ? (var_1_26 == ((unsigned long int) (var_1_25 - var_1_27))) : (var_1_26 == ((unsigned long int) (abs (var_1_27 + (max (var_1_9 , var_1_5)))))))) && ((var_1_18 && var_1_19) ? (var_1_27 == ((unsigned long int) (min (var_1_5 , ((var_1_4 + var_1_1) + var_1_1))))) : 1)) && ((var_1_18 || (var_1_13 < var_1_15)) ? (((max ((var_1_7 / var_1_13) , 99.6f)) != var_1_15) ? (var_1_29 == ((signed char) (var_1_5 - 10))) : (var_1_29 == ((signed char) var_1_5))) : (var_1_29 == ((signed char) var_1_5)))
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
