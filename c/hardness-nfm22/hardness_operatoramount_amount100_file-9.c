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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch9Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -128;
double var_1_4 = 99999999999.6;
unsigned char var_1_5 = 1;
signed long int var_1_6 = -5;
signed char var_1_10 = 64;
signed char var_1_11 = 16;
signed char var_1_12 = 4;
signed char var_1_13 = 64;
unsigned short int var_1_14 = 64;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 200;
unsigned char var_1_18 = 1;
signed long int var_1_19 = 10;
signed long int var_1_20 = -256;
signed char var_1_21 = 25;
signed char var_1_23 = 1;
signed char var_1_24 = 5;
unsigned char var_1_25 = 0;
double var_1_26 = 8.125;
double var_1_27 = 0.875;
double var_1_28 = 15.6;
double var_1_29 = 2.5;
unsigned long int var_1_30 = 25;
signed long int var_1_31 = 50;
signed short int var_1_32 = -8;
unsigned char var_1_33 = 100;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_6 = -5;
signed long int last_1_var_1_20 = -256;
signed char last_1_var_1_21 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch9Amount100
	if (var_1_5) {
		if ((last_1_var_1_6 < 1) || var_1_25) {
			if (var_1_25) {
				var_1_26 = ((var_1_27 - var_1_28) + var_1_29);
			}
		} else {
			var_1_26 = var_1_28;
		}
	} else {
		var_1_26 = var_1_28;
	}


	// From: Req1Batch9Amount100
	if ((- var_1_26) >= (var_1_26 / var_1_4)) {
		if (var_1_5) {
			var_1_1 = 10;
		}
	}


	// From: Req11Batch9Amount100
	var_1_32 = var_1_23;


	// From: Req12Batch9Amount100
	var_1_33 = var_1_18;


	// From: Req4Batch9Amount100
	if (! var_1_5) {
		if (-4 <= var_1_33) {
			if ((max ((- var_1_33) , var_1_33)) >= var_1_33) {
				var_1_14 = (min ((var_1_33 + 5) , var_1_13));
			} else {
				if (! (var_1_26 < var_1_26)) {
					var_1_14 = var_1_13;
				} else {
					var_1_14 = var_1_33;
				}
			}
		} else {
			var_1_14 = var_1_13;
		}
	} else {
		var_1_14 = var_1_13;
	}


	// From: Req5Batch9Amount100
	unsigned short int stepLocal_0 = var_1_14;
	if (! var_1_5) {
		if (-2 >= stepLocal_0) {
			var_1_16 = (abs ((var_1_17 - var_1_18) - 32));
		}
	} else {
		var_1_16 = var_1_18;
	}


	// From: Req6Batch9Amount100
	var_1_19 = var_1_16;


	// From: Req10Batch9Amount100
	if (((-32 + var_1_33) / var_1_17) >= ((var_1_13 - var_1_33) / var_1_31)) {
		if (var_1_16 > var_1_16) {
			var_1_30 = var_1_18;
		} else {
			var_1_30 = var_1_17;
		}
	} else {
		var_1_30 = var_1_33;
	}


	// From: Req2Batch9Amount100
	if (var_1_1 == 0) {
		var_1_6 = (max ((var_1_1 + var_1_32) , var_1_14));
	} else {
		if (var_1_14 < var_1_1) {
			var_1_6 = var_1_1;
		} else {
			var_1_6 = var_1_1;
		}
	}


	// From: Req3Batch9Amount100
	if (var_1_5) {
		var_1_10 = var_1_11;
	} else {
		if (var_1_33 == (abs (var_1_30))) {
			var_1_10 = (min ((var_1_12 - var_1_13) , var_1_11));
		} else {
			var_1_10 = var_1_13;
		}
	}


	// From: Req7Batch9Amount100
	if (var_1_5) {
		var_1_20 = -10000000;
	} else {
		if (var_1_11 <= var_1_10) {
			if (last_1_var_1_20 <= ((var_1_14 / var_1_17) & var_1_33)) {
				if (var_1_14 > var_1_33) {
					var_1_20 = (last_1_var_1_20 + var_1_12);
				} else {
					var_1_20 = last_1_var_1_20;
				}
			} else {
				var_1_20 = var_1_16;
			}
		} else {
			var_1_20 = var_1_14;
		}
	}


	// From: Req8Batch9Amount100
	unsigned char stepLocal_1 = var_1_5;
	if (((last_1_var_1_21 & var_1_10) >= var_1_12) && stepLocal_1) {
		var_1_21 = (var_1_18 + (var_1_23 - var_1_24));
	} else {
		if (! var_1_25) {
			var_1_21 = var_1_17;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	assume_abort_if_not(var_1_4 != 0.0F);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 190);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -461168.6018427382800e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	assume_abort_if_not(var_1_31 != 0);
}



void updateLastVariables() {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_21 = var_1_21;
}

int property() {
	return (((((((((((((- var_1_26) >= (var_1_26 / var_1_4)) ? (var_1_5 ? (var_1_1 == ((signed long int) 10)) : 1) : 1) && ((var_1_1 == 0) ? (var_1_6 == ((signed long int) (max ((var_1_1 + var_1_32) , var_1_14)))) : ((var_1_14 < var_1_1) ? (var_1_6 == ((signed long int) var_1_1)) : (var_1_6 == ((signed long int) var_1_1))))) && (var_1_5 ? (var_1_10 == ((signed char) var_1_11)) : ((var_1_33 == (abs (var_1_30))) ? (var_1_10 == ((signed char) (min ((var_1_12 - var_1_13) , var_1_11)))) : (var_1_10 == ((signed char) var_1_13))))) && ((! var_1_5) ? ((-4 <= var_1_33) ? (((max ((- var_1_33) , var_1_33)) >= var_1_33) ? (var_1_14 == ((unsigned short int) (min ((var_1_33 + 5) , var_1_13)))) : ((! (var_1_26 < var_1_26)) ? (var_1_14 == ((unsigned short int) var_1_13)) : (var_1_14 == ((unsigned short int) var_1_33)))) : (var_1_14 == ((unsigned short int) var_1_13))) : (var_1_14 == ((unsigned short int) var_1_13)))) && ((! var_1_5) ? ((-2 >= var_1_14) ? (var_1_16 == ((unsigned char) (abs ((var_1_17 - var_1_18) - 32)))) : 1) : (var_1_16 == ((unsigned char) var_1_18)))) && (var_1_19 == ((signed long int) var_1_16))) && (var_1_5 ? (var_1_20 == ((signed long int) -10000000)) : ((var_1_11 <= var_1_10) ? ((last_1_var_1_20 <= ((var_1_14 / var_1_17) & var_1_33)) ? ((var_1_14 > var_1_33) ? (var_1_20 == ((signed long int) (last_1_var_1_20 + var_1_12))) : (var_1_20 == ((signed long int) last_1_var_1_20))) : (var_1_20 == ((signed long int) var_1_16))) : (var_1_20 == ((signed long int) var_1_14))))) && ((((last_1_var_1_21 & var_1_10) >= var_1_12) && var_1_5) ? (var_1_21 == ((signed char) (var_1_18 + (var_1_23 - var_1_24)))) : ((! var_1_25) ? (var_1_21 == ((signed char) var_1_17)) : 1))) && (var_1_5 ? (((last_1_var_1_6 < 1) || var_1_25) ? (var_1_25 ? (var_1_26 == ((double) ((var_1_27 - var_1_28) + var_1_29))) : 1) : (var_1_26 == ((double) var_1_28))) : (var_1_26 == ((double) var_1_28)))) && ((((-32 + var_1_33) / var_1_17) >= ((var_1_13 - var_1_33) / var_1_31)) ? ((var_1_16 > var_1_16) ? (var_1_30 == ((unsigned long int) var_1_18)) : (var_1_30 == ((unsigned long int) var_1_17))) : (var_1_30 == ((unsigned long int) var_1_33)))) && (var_1_32 == ((signed short int) var_1_23))) && (var_1_33 == ((unsigned char) var_1_18))
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
