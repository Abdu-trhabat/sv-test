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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch78Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 100;
unsigned short int var_1_3 = 63223;
unsigned short int var_1_4 = 63229;
double var_1_6 = 0.5;
double var_1_8 = 9.2;
double var_1_9 = 0.875;
double var_1_10 = 127.5;
double var_1_11 = 100000000000000.5;
double var_1_12 = 64.5;
unsigned long int var_1_13 = 16;
signed char var_1_14 = -128;
signed char var_1_15 = 8;
signed char var_1_16 = 0;
signed char var_1_17 = 100;
signed char var_1_18 = 16;
signed char var_1_19 = 50;
signed char var_1_20 = 0;
signed char var_1_21 = -10;
signed char var_1_23 = 16;
signed char var_1_24 = 5;
unsigned char var_1_25 = 0;
unsigned long int var_1_26 = 3144733050;
unsigned long int var_1_27 = 3793327297;
unsigned char var_1_28 = 25;
unsigned char var_1_29 = 128;
double var_1_30 = 0.4;
double var_1_31 = 999.8;
double var_1_32 = 15.75;
unsigned long int var_1_33 = 5;
unsigned long int var_1_34 = 2432502595;
unsigned char var_1_35 = 1;
unsigned char var_1_37 = 0;
signed short int var_1_38 = -4;

// Calibration values

// Last'ed variables
signed char last_1_var_1_21 = -10;
unsigned char last_1_var_1_25 = 0;
unsigned char last_1_var_1_28 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch78Amount100
	if (! last_1_var_1_25) {
		var_1_1 = ((max (var_1_3 , var_1_4)) - (5 + last_1_var_1_28));
	} else {
		var_1_1 = var_1_3;
	}


	// From: Req3Batch78Amount100
	if (var_1_10 < (var_1_12 * var_1_9)) {
		var_1_13 = var_1_3;
	} else {
		var_1_13 = (max (var_1_3 , 16u));
	}


	// From: Req10Batch78Amount100
	var_1_30 = ((max (var_1_10 , (var_1_9 + var_1_31))) - var_1_32);


	// From: Req11Batch78Amount100
	if (var_1_12 == (var_1_10 - (min (var_1_9 , var_1_32)))) {
		var_1_33 = (var_1_34 - 128u);
	}


	// From: Req12Batch78Amount100
	var_1_35 = ((var_1_30 < var_1_8) || (! var_1_37));


	// From: Req4Batch78Amount100
	signed long int stepLocal_0 = - (- var_1_3);
	if (var_1_33 >= stepLocal_0) {
		if (var_1_35) {
			var_1_14 = (var_1_15 - var_1_16);
		} else {
			var_1_14 = ((var_1_17 - var_1_18) - (var_1_19 + var_1_20));
		}
	} else {
		var_1_14 = (min ((var_1_19 - 64) , var_1_15));
	}


	// From: Req7Batch78Amount100
	unsigned short int stepLocal_3 = var_1_3;
	unsigned short int stepLocal_2 = var_1_3;
	if (((max (var_1_26 , var_1_27)) - var_1_4) <= stepLocal_2) {
		if ((- var_1_16) == stepLocal_3) {
			if (var_1_35) {
				var_1_25 = 0;
			}
		}
	}


	// From: Req9Batch78Amount100
	unsigned short int stepLocal_4 = var_1_1;
	if (stepLocal_4 >= (min (var_1_33 , (- var_1_3)))) {
		if (var_1_25) {
			var_1_29 = var_1_17;
		}
	}


	// From: Req6Batch78Amount100
	if (var_1_25) {
		var_1_24 = (var_1_20 + var_1_18);
	} else {
		var_1_24 = var_1_17;
	}


	// From: Req8Batch78Amount100
	if (var_1_4 <= var_1_29) {
		if (var_1_26 == (var_1_16 * (var_1_27 & var_1_19))) {
			if (var_1_25) {
				var_1_28 = var_1_20;
			} else {
				var_1_28 = var_1_19;
			}
		}
	} else {
		var_1_28 = var_1_20;
	}


	// From: Req2Batch78Amount100
	if (var_1_25) {
		if ((var_1_28 + var_1_3) >= var_1_29) {
			var_1_6 = (var_1_8 + (var_1_9 - var_1_10));
		} else {
			var_1_6 = ((var_1_11 + (abs (var_1_12))) + (8.25 - var_1_9));
		}
	}


	// From: Req5Batch78Amount100
	unsigned char stepLocal_1 = var_1_28 <= var_1_4;
	if (var_1_9 <= var_1_30) {
		if (stepLocal_1 && (! (var_1_18 == last_1_var_1_21))) {
			var_1_21 = var_1_15;
		} else {
			var_1_21 = var_1_23;
		}
	}


	// From: Req13Batch78Amount100
	if ((var_1_18 - var_1_19) < ((var_1_17 / var_1_3) * var_1_33)) {
		if (var_1_32 >= (var_1_10 - var_1_31)) {
			var_1_38 = var_1_18;
		} else {
			var_1_38 = var_1_19;
		}
	} else {
		var_1_38 = var_1_21;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 32767);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 32767);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -230584.3009213691390e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691390e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -230584.3009213691390e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691390e+12F && var_1_12 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 62);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -127);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 2147483647);
	assume_abort_if_not(var_1_26 <= 4294967295);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 2147483647);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 2147483647);
	assume_abort_if_not(var_1_34 <= 4294967294);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
}



void updateLastVariables() {
	last_1_var_1_21 = var_1_21;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_28 = var_1_28;
}

int property() {
	return (((((((((((((! last_1_var_1_25) ? (var_1_1 == ((unsigned short int) ((max (var_1_3 , var_1_4)) - (5 + last_1_var_1_28)))) : (var_1_1 == ((unsigned short int) var_1_3))) && (var_1_25 ? (((var_1_28 + var_1_3) >= var_1_29) ? (var_1_6 == ((double) (var_1_8 + (var_1_9 - var_1_10)))) : (var_1_6 == ((double) ((var_1_11 + (abs (var_1_12))) + (8.25 - var_1_9))))) : 1)) && ((var_1_10 < (var_1_12 * var_1_9)) ? (var_1_13 == ((unsigned long int) var_1_3)) : (var_1_13 == ((unsigned long int) (max (var_1_3 , 16u)))))) && ((var_1_33 >= (- (- var_1_3))) ? (var_1_35 ? (var_1_14 == ((signed char) (var_1_15 - var_1_16))) : (var_1_14 == ((signed char) ((var_1_17 - var_1_18) - (var_1_19 + var_1_20))))) : (var_1_14 == ((signed char) (min ((var_1_19 - 64) , var_1_15)))))) && ((var_1_9 <= var_1_30) ? (((var_1_28 <= var_1_4) && (! (var_1_18 == last_1_var_1_21))) ? (var_1_21 == ((signed char) var_1_15)) : (var_1_21 == ((signed char) var_1_23))) : 1)) && (var_1_25 ? (var_1_24 == ((signed char) (var_1_20 + var_1_18))) : (var_1_24 == ((signed char) var_1_17)))) && ((((max (var_1_26 , var_1_27)) - var_1_4) <= var_1_3) ? (((- var_1_16) == var_1_3) ? (var_1_35 ? (var_1_25 == ((unsigned char) 0)) : 1) : 1) : 1)) && ((var_1_4 <= var_1_29) ? ((var_1_26 == (var_1_16 * (var_1_27 & var_1_19))) ? (var_1_25 ? (var_1_28 == ((unsigned char) var_1_20)) : (var_1_28 == ((unsigned char) var_1_19))) : 1) : (var_1_28 == ((unsigned char) var_1_20)))) && ((var_1_1 >= (min (var_1_33 , (- var_1_3)))) ? (var_1_25 ? (var_1_29 == ((unsigned char) var_1_17)) : 1) : 1)) && (var_1_30 == ((double) ((max (var_1_10 , (var_1_9 + var_1_31))) - var_1_32)))) && ((var_1_12 == (var_1_10 - (min (var_1_9 , var_1_32)))) ? (var_1_33 == ((unsigned long int) (var_1_34 - 128u))) : 1)) && (var_1_35 == ((unsigned char) ((var_1_30 < var_1_8) || (! var_1_37))))) && (((var_1_18 - var_1_19) < ((var_1_17 / var_1_3) * var_1_33)) ? ((var_1_32 >= (var_1_10 - var_1_31)) ? (var_1_38 == ((signed short int) var_1_18)) : (var_1_38 == ((signed short int) var_1_19))) : (var_1_38 == ((signed short int) var_1_21)))
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
