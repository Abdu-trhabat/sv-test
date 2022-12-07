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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch19Amount100.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 1;
unsigned char var_1_7 = 100;
unsigned char var_1_8 = 100;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 2;
unsigned long int var_1_11 = 50;
unsigned char var_1_12 = 1;
signed long int var_1_13 = -64;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned long int var_1_16 = 8;
double var_1_17 = 4.6;
double var_1_18 = 100.35;
double var_1_19 = 0.2;
double var_1_20 = 63.4;
signed char var_1_21 = -32;
signed char var_1_22 = -10;
float var_1_23 = 2.75;
double var_1_24 = 255.6;
double var_1_25 = 499.8;
double var_1_26 = 4.75;
float var_1_27 = 8.7;
float var_1_28 = 7.6;
signed short int var_1_29 = 10;
signed short int var_1_30 = -10;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_16 = 8;
signed short int last_1_var_1_29 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch19Amount100
	if (((last_1_var_1_16 * var_1_7) + var_1_9) > (last_1_var_1_29 / var_1_13)) {
		var_1_12 = ((! var_1_14) || var_1_15);
	} else {
		if (var_1_14 && var_1_2) {
			var_1_12 = var_1_15;
		}
	}


	// From: Req6Batch19Amount100
	unsigned char stepLocal_5 = var_1_14;
	if (var_1_12 || stepLocal_5) {
		var_1_21 = var_1_9;
	} else {
		var_1_21 = (max ((max (10 , (var_1_9 + var_1_22))) , -16));
	}


	// From: Req11Batch19Amount100
	var_1_29 = var_1_21;


	// From: Req2Batch19Amount100
	signed long int stepLocal_2 = min (-64 , (~ var_1_7));
	if ((var_1_9 - var_1_10) <= stepLocal_2) {
		var_1_11 = (var_1_29 + var_1_7);
	} else {
		var_1_11 = ((var_1_29 + (max (var_1_7 , var_1_8))) + var_1_10);
	}


	// From: Req7Batch19Amount100
	signed long int stepLocal_6 = var_1_7 << var_1_29;
	if (stepLocal_6 >= -1) {
		var_1_23 = (var_1_20 + var_1_19);
	} else {
		if (var_1_15) {
			if (! var_1_12) {
				var_1_23 = var_1_18;
			} else {
				var_1_23 = (var_1_19 + var_1_20);
			}
		} else {
			if (! var_1_12) {
				var_1_23 = var_1_18;
			} else {
				var_1_23 = var_1_18;
			}
		}
	}


	// From: Req12Batch19Amount100
	var_1_30 = var_1_7;


	// From: Req4Batch19Amount100
	signed long int stepLocal_3 = -256 + 1;
	if (var_1_30 > stepLocal_3) {
		var_1_16 = (abs (25u));
	}


	// From: Req5Batch19Amount100
	unsigned char stepLocal_4 = var_1_14;
	if ((var_1_16 <= var_1_11) || stepLocal_4) {
		var_1_17 = (min (var_1_18 , (var_1_19 + var_1_20)));
	}


	// From: Req8Batch19Amount100
	if (var_1_21 < var_1_30) {
		var_1_24 = var_1_18;
	} else {
		if ((var_1_8 * (var_1_16 ^ var_1_13)) <= (var_1_30 / var_1_7)) {
			if (var_1_30 > var_1_13) {
				var_1_24 = var_1_20;
			} else {
				var_1_24 = var_1_20;
			}
		} else {
			var_1_24 = 9.75;
		}
	}


	// From: Req10Batch19Amount100
	unsigned char stepLocal_9 = var_1_14;
	signed long int stepLocal_8 = var_1_13;
	if (var_1_24 <= var_1_26) {
		if (var_1_12 || stepLocal_9) {
			if (stepLocal_8 < var_1_8) {
				var_1_27 = (max (var_1_20 , ((abs (var_1_19)) + var_1_28)));
			} else {
				var_1_27 = 3.24f;
			}
		} else {
			var_1_27 = var_1_19;
		}
	} else {
		var_1_27 = var_1_28;
	}


	// From: Req1Batch19Amount100
	unsigned long int stepLocal_1 = max (var_1_16 , var_1_21);
	unsigned char stepLocal_0 = var_1_12;
	if (var_1_12 && stepLocal_0) {
		if (var_1_30 <= stepLocal_1) {
			if (var_1_12) {
				var_1_1 = (((var_1_7 + var_1_8) - var_1_9) - var_1_10);
			}
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req9Batch19Amount100
	signed char stepLocal_7 = var_1_22;
	if (stepLocal_7 >= var_1_1) {
		var_1_25 = 8.875;
	} else {
		var_1_25 = (var_1_26 - 100000.75);
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 95);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 95);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	assume_abort_if_not(var_1_13 != 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -63);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427382800e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_29 = var_1_29;
}

int property() {
	return ((((((((((((var_1_12 && var_1_12) ? ((var_1_30 <= (max (var_1_16 , var_1_21))) ? (var_1_12 ? (var_1_1 == ((unsigned char) (((var_1_7 + var_1_8) - var_1_9) - var_1_10))) : 1) : (var_1_1 == ((unsigned char) var_1_7))) : (var_1_1 == ((unsigned char) var_1_7))) && (((var_1_9 - var_1_10) <= (min (-64 , (~ var_1_7)))) ? (var_1_11 == ((unsigned long int) (var_1_29 + var_1_7))) : (var_1_11 == ((unsigned long int) ((var_1_29 + (max (var_1_7 , var_1_8))) + var_1_10))))) && ((((last_1_var_1_16 * var_1_7) + var_1_9) > (last_1_var_1_29 / var_1_13)) ? (var_1_12 == ((unsigned char) ((! var_1_14) || var_1_15))) : ((var_1_14 && var_1_2) ? (var_1_12 == ((unsigned char) var_1_15)) : 1))) && ((var_1_30 > (-256 + 1)) ? (var_1_16 == ((unsigned long int) (abs (25u)))) : 1)) && (((var_1_16 <= var_1_11) || var_1_14) ? (var_1_17 == ((double) (min (var_1_18 , (var_1_19 + var_1_20))))) : 1)) && ((var_1_12 || var_1_14) ? (var_1_21 == ((signed char) var_1_9)) : (var_1_21 == ((signed char) (max ((max (10 , (var_1_9 + var_1_22))) , -16)))))) && (((var_1_7 << var_1_29) >= -1) ? (var_1_23 == ((float) (var_1_20 + var_1_19))) : (var_1_15 ? ((! var_1_12) ? (var_1_23 == ((float) var_1_18)) : (var_1_23 == ((float) (var_1_19 + var_1_20)))) : ((! var_1_12) ? (var_1_23 == ((float) var_1_18)) : (var_1_23 == ((float) var_1_18)))))) && ((var_1_21 < var_1_30) ? (var_1_24 == ((double) var_1_18)) : (((var_1_8 * (var_1_16 ^ var_1_13)) <= (var_1_30 / var_1_7)) ? ((var_1_30 > var_1_13) ? (var_1_24 == ((double) var_1_20)) : (var_1_24 == ((double) var_1_20))) : (var_1_24 == ((double) 9.75))))) && ((var_1_22 >= var_1_1) ? (var_1_25 == ((double) 8.875)) : (var_1_25 == ((double) (var_1_26 - 100000.75))))) && ((var_1_24 <= var_1_26) ? ((var_1_12 || var_1_14) ? ((var_1_13 < var_1_8) ? (var_1_27 == ((float) (max (var_1_20 , ((abs (var_1_19)) + var_1_28))))) : (var_1_27 == ((float) 3.24f))) : (var_1_27 == ((float) var_1_19))) : (var_1_27 == ((float) var_1_28)))) && (var_1_29 == ((signed short int) var_1_21))) && (var_1_30 == ((signed short int) var_1_7))
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
