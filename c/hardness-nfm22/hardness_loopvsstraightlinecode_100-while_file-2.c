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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch2100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = -0.5;
unsigned char var_1_2 = 1;
double var_1_3 = 64.84;
double var_1_4 = 2.2;
double var_1_5 = 31.875;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed char var_1_8 = -10;
signed char var_1_10 = 2;
signed char var_1_11 = 32;
float var_1_12 = 2.5;
signed short int var_1_13 = -64;
signed short int var_1_14 = 8;
float var_1_15 = 7.5;
double var_1_16 = 2.85;
signed char var_1_18 = 64;
signed char var_1_20 = 1;
unsigned char var_1_21 = 5;
unsigned char var_1_22 = 10;
unsigned char var_1_23 = 64;
unsigned char var_1_24 = 2;
float var_1_25 = 63.4;
signed char var_1_26 = 4;
signed char var_1_27 = 32;
unsigned short int var_1_28 = 10;
signed char var_1_29 = -1;
signed char var_1_30 = -4;
signed char var_1_31 = 2;
signed char var_1_32 = -25;
signed char var_1_33 = 1;
signed char var_1_34 = 0;
unsigned long int var_1_35 = 8;
float var_1_36 = 127.7;
float var_1_37 = 0.2;

// Calibration values

// Last'ed variables
signed char last_1_var_1_18 = 64;
unsigned char last_1_var_1_21 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch2100_while
	if ((var_1_3 / var_1_15) >= (var_1_4 - var_1_16)) {
		var_1_14 = var_1_11;
	} else {
		var_1_14 = (max ((min (var_1_11 , (var_1_10 + last_1_var_1_18))) , last_1_var_1_21));
	}


	// From: Req11Batch2100_while
	signed short int stepLocal_7 = var_1_14;
	signed char stepLocal_6 = var_1_27;
	unsigned char stepLocal_5 = var_1_23;
	signed char stepLocal_4 = var_1_11;
	if (stepLocal_4 >= (var_1_27 - var_1_23)) {
		if (var_1_20 <= stepLocal_6) {
			if (! (var_1_15 > 3.8f)) {
				var_1_29 = (max (var_1_10 , (min (var_1_11 , var_1_27))));
			}
		} else {
			if ((min (var_1_23 , (var_1_24 * var_1_14))) <= stepLocal_7) {
				var_1_29 = ((var_1_30 + (1 - var_1_31)) + (var_1_32 + (min (var_1_33 , var_1_34))));
			}
		}
	} else {
		if (! (var_1_24 <= var_1_27)) {
			var_1_29 = var_1_20;
		} else {
			if (var_1_27 < stepLocal_5) {
				var_1_29 = (var_1_27 - var_1_31);
			} else {
				var_1_29 = (var_1_34 + var_1_27);
			}
		}
	}


	// From: Req1Batch2100_while
	unsigned char stepLocal_0 = var_1_7;
	if (var_1_2) {
		var_1_1 = (min ((var_1_3 - var_1_4) , var_1_5));
	} else {
		if (var_1_6 && stepLocal_0) {
			var_1_1 = var_1_4;
		}
	}


	// From: Req3Batch2100_while
	if (var_1_7) {
		var_1_12 = var_1_5;
	}


	// From: Req7Batch2100_while
	signed char stepLocal_2 = var_1_10;
	if (stepLocal_2 <= last_1_var_1_21) {
		var_1_21 = (min ((var_1_22 + var_1_23) , var_1_24));
	} else {
		var_1_21 = 128;
	}


	// From: Req8Batch2100_while
	var_1_25 = ((max (9.999999999999975E13f , var_1_4)) - var_1_3);


	// From: Req9Batch2100_while
	if ((- 4.75) < (- var_1_15)) {
		var_1_26 = (max (var_1_11 , (var_1_10 - 16)));
	} else {
		var_1_26 = (var_1_10 - (5 + var_1_27));
	}


	// From: Req13Batch2100_while
	var_1_36 = var_1_3;


	// From: Req14Batch2100_while
	var_1_37 = var_1_4;


	// From: Req2Batch2100_while
	unsigned char stepLocal_1 = var_1_36 >= var_1_36;
	if (stepLocal_1 || var_1_2) {
		if (var_1_7) {
			var_1_8 = (var_1_10 - (abs (25)));
		}
	} else {
		var_1_8 = (-2 + var_1_11);
	}


	// From: Req4Batch2100_while
	var_1_13 = (abs (var_1_26));


	// From: Req10Batch2100_while
	unsigned char stepLocal_3 = var_1_21;
	if (var_1_29 <= stepLocal_3) {
		if ((var_1_1 + var_1_1) != var_1_36) {
			var_1_28 = ((var_1_23 + var_1_27) + ((abs (var_1_24)) + var_1_26));
		}
	} else {
		var_1_28 = var_1_27;
	}


	// From: Req6Batch2100_while
	if ((var_1_28 ^ (max (var_1_26 , var_1_8))) > var_1_10) {
		var_1_18 = (var_1_11 + var_1_20);
	} else {
		var_1_18 = var_1_11;
	}


	// From: Req12Batch2100_while
	var_1_35 = var_1_18;
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -31);
	assume_abort_if_not(var_1_30 <= 32);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 31);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -31);
	assume_abort_if_not(var_1_32 <= 32);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -31);
	assume_abort_if_not(var_1_33 <= 31);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -31);
	assume_abort_if_not(var_1_34 <= 31);
}



void updateLastVariables() {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_21 = var_1_21;
}

int property() {
	return (((((((((((((var_1_2 ? (var_1_1 == ((double) (min ((var_1_3 - var_1_4) , var_1_5)))) : ((var_1_6 && var_1_7) ? (var_1_1 == ((double) var_1_4)) : 1)) && (((var_1_36 >= var_1_36) || var_1_2) ? (var_1_7 ? (var_1_8 == ((signed char) (var_1_10 - (abs (25))))) : 1) : (var_1_8 == ((signed char) (-2 + var_1_11))))) && (var_1_7 ? (var_1_12 == ((float) var_1_5)) : 1)) && (var_1_13 == ((signed short int) (abs (var_1_26))))) && (((var_1_3 / var_1_15) >= (var_1_4 - var_1_16)) ? (var_1_14 == ((signed short int) var_1_11)) : (var_1_14 == ((signed short int) (max ((min (var_1_11 , (var_1_10 + last_1_var_1_18))) , last_1_var_1_21)))))) && (((var_1_28 ^ (max (var_1_26 , var_1_8))) > var_1_10) ? (var_1_18 == ((signed char) (var_1_11 + var_1_20))) : (var_1_18 == ((signed char) var_1_11)))) && ((var_1_10 <= last_1_var_1_21) ? (var_1_21 == ((unsigned char) (min ((var_1_22 + var_1_23) , var_1_24)))) : (var_1_21 == ((unsigned char) 128)))) && (var_1_25 == ((float) ((max (9.999999999999975E13f , var_1_4)) - var_1_3)))) && (((- 4.75) < (- var_1_15)) ? (var_1_26 == ((signed char) (max (var_1_11 , (var_1_10 - 16))))) : (var_1_26 == ((signed char) (var_1_10 - (5 + var_1_27)))))) && ((var_1_29 <= var_1_21) ? (((var_1_1 + var_1_1) != var_1_36) ? (var_1_28 == ((unsigned short int) ((var_1_23 + var_1_27) + ((abs (var_1_24)) + var_1_26)))) : 1) : (var_1_28 == ((unsigned short int) var_1_27)))) && ((var_1_11 >= (var_1_27 - var_1_23)) ? ((var_1_20 <= var_1_27) ? ((! (var_1_15 > 3.8f)) ? (var_1_29 == ((signed char) (max (var_1_10 , (min (var_1_11 , var_1_27)))))) : 1) : (((min (var_1_23 , (var_1_24 * var_1_14))) <= var_1_14) ? (var_1_29 == ((signed char) ((var_1_30 + (1 - var_1_31)) + (var_1_32 + (min (var_1_33 , var_1_34)))))) : 1)) : ((! (var_1_24 <= var_1_27)) ? (var_1_29 == ((signed char) var_1_20)) : ((var_1_27 < var_1_23) ? (var_1_29 == ((signed char) (var_1_27 - var_1_31))) : (var_1_29 == ((signed char) (var_1_34 + var_1_27))))))) && (var_1_35 == ((unsigned long int) var_1_18))) && (var_1_36 == ((float) var_1_3))) && (var_1_37 == ((float) var_1_4))
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
