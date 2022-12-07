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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch16100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 2;
signed char var_1_7 = -25;
signed char var_1_9 = 50;
signed char var_1_10 = -128;
signed char var_1_11 = 0;
signed char var_1_12 = -32;
signed long int var_1_13 = 16;
unsigned char var_1_14 = 1;
unsigned long int var_1_15 = 16;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
float var_1_21 = 127.25;
float var_1_23 = 1.5;
float var_1_24 = 100.5;
signed char var_1_25 = 0;
signed char var_1_26 = -2;
signed char var_1_27 = 0;
signed long int var_1_28 = -128;
float var_1_30 = 9.375;
double var_1_31 = 99999999.875;
double var_1_32 = 4.8;
unsigned short int var_1_33 = 0;
unsigned short int var_1_35 = 54252;
unsigned short int var_1_37 = 5;
unsigned char var_1_38 = 4;
signed char var_1_39 = -64;

// Calibration values

// Last'ed variables
signed char last_1_var_1_10 = -128;
unsigned char last_1_var_1_18 = 0;
signed char last_1_var_1_25 = 0;
unsigned short int last_1_var_1_33 = 0;
signed char last_1_var_1_39 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch16100_1loop
	unsigned char stepLocal_3 = last_1_var_1_18;
	if (stepLocal_3 || var_1_20) {
		var_1_28 = (max (((abs (var_1_27)) - (var_1_11 + last_1_var_1_33)) , last_1_var_1_25));
	} else {
		if (var_1_20) {
			var_1_28 = (max (last_1_var_1_33 , (last_1_var_1_39 + last_1_var_1_25)));
		}
	}


	// From: Req7Batch16100_1loop
	var_1_18 = (! (var_1_19 || var_1_20));


	// From: Req9Batch16100_1loop
	if ((- var_1_24) < var_1_23) {
		var_1_25 = ((min (-10 , var_1_26)) + var_1_27);
	}


	// From: Req13Batch16100_1loop
	var_1_37 = var_1_11;


	// From: Req14Batch16100_1loop
	var_1_38 = var_1_11;


	// From: Req15Batch16100_1loop
	var_1_39 = var_1_11;


	// From: Req2Batch16100_1loop
	if (var_1_18) {
		var_1_7 = var_1_9;
	}


	// From: Req3Batch16100_1loop
	signed char stepLocal_1 = var_1_9;
	if ((last_1_var_1_10 + var_1_7) > stepLocal_1) {
		var_1_10 = (1 - var_1_11);
	}


	// From: Req4Batch16100_1loop
	if ((var_1_7 / var_1_13) == var_1_25) {
		var_1_12 = var_1_9;
	} else {
		if (var_1_13 >= var_1_11) {
			var_1_12 = var_1_11;
		} else {
			var_1_12 = var_1_9;
		}
	}


	// From: Req8Batch16100_1loop
	if ((var_1_11 - var_1_37) != -256) {
		var_1_21 = (min ((abs (var_1_23)) , var_1_24));
	} else {
		var_1_21 = var_1_23;
	}


	// From: Req11Batch16100_1loop
	signed long int stepLocal_4 = var_1_28;
	if (((var_1_31 - var_1_32) + var_1_24) != var_1_23) {
		var_1_30 = (min (var_1_23 , var_1_24));
	} else {
		if (stepLocal_4 <= var_1_10) {
			var_1_30 = var_1_23;
		}
	}


	// From: Req12Batch16100_1loop
	if (var_1_28 < var_1_37) {
		var_1_33 = (((26262 - var_1_11) + 18571) - var_1_38);
	} else {
		if (! var_1_18) {
			if (var_1_10 != (var_1_38 & (var_1_11 - 32))) {
				var_1_33 = (min (((var_1_35 - var_1_11) - var_1_38) , var_1_38));
			} else {
				var_1_33 = (var_1_35 - var_1_38);
			}
		} else {
			if (128u > var_1_38) {
				if ((var_1_38 * var_1_38) == (var_1_38 & var_1_28)) {
					var_1_33 = var_1_11;
				} else {
					var_1_33 = (min ((max (var_1_11 , var_1_35)) , var_1_38));
				}
			} else {
				var_1_33 = var_1_38;
			}
		}
	}


	// From: Req1Batch16100_1loop
	signed long int stepLocal_0 = var_1_28;
	if (stepLocal_0 >= (var_1_37 * (10u * var_1_33))) {
		var_1_1 = (var_1_10 + var_1_10);
	} else {
		var_1_1 = var_1_10;
	}


	// From: Req5Batch16100_1loop
	unsigned long int stepLocal_2 = 1u;
	if (((min (var_1_13 , 25u)) + var_1_33) == stepLocal_2) {
		var_1_14 = (! 0);
	}


	// From: Req6Batch16100_1loop
	if (var_1_1 <= var_1_33) {
		var_1_15 = (max (var_1_11 , var_1_37));
	}
}



void updateVariables() {
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	assume_abort_if_not(var_1_13 != 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854765600e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -63);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -63);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 49150);
	assume_abort_if_not(var_1_35 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_39 = var_1_39;
}

int property() {
	return (((((((((((((((var_1_28 >= (var_1_37 * (10u * var_1_33))) ? (var_1_1 == ((signed short int) (var_1_10 + var_1_10))) : (var_1_1 == ((signed short int) var_1_10))) && (var_1_18 ? (var_1_7 == ((signed char) var_1_9)) : 1)) && (((last_1_var_1_10 + var_1_7) > var_1_9) ? (var_1_10 == ((signed char) (1 - var_1_11))) : 1)) && (((var_1_7 / var_1_13) == var_1_25) ? (var_1_12 == ((signed char) var_1_9)) : ((var_1_13 >= var_1_11) ? (var_1_12 == ((signed char) var_1_11)) : (var_1_12 == ((signed char) var_1_9))))) && ((((min (var_1_13 , 25u)) + var_1_33) == 1u) ? (var_1_14 == ((unsigned char) (! 0))) : 1)) && ((var_1_1 <= var_1_33) ? (var_1_15 == ((unsigned long int) (max (var_1_11 , var_1_37)))) : 1)) && (var_1_18 == ((unsigned char) (! (var_1_19 || var_1_20))))) && (((var_1_11 - var_1_37) != -256) ? (var_1_21 == ((float) (min ((abs (var_1_23)) , var_1_24)))) : (var_1_21 == ((float) var_1_23)))) && (((- var_1_24) < var_1_23) ? (var_1_25 == ((signed char) ((min (-10 , var_1_26)) + var_1_27))) : 1)) && ((last_1_var_1_18 || var_1_20) ? (var_1_28 == ((signed long int) (max (((abs (var_1_27)) - (var_1_11 + last_1_var_1_33)) , last_1_var_1_25)))) : (var_1_20 ? (var_1_28 == ((signed long int) (max (last_1_var_1_33 , (last_1_var_1_39 + last_1_var_1_25))))) : 1))) && ((((var_1_31 - var_1_32) + var_1_24) != var_1_23) ? (var_1_30 == ((float) (min (var_1_23 , var_1_24)))) : ((var_1_28 <= var_1_10) ? (var_1_30 == ((float) var_1_23)) : 1))) && ((var_1_28 < var_1_37) ? (var_1_33 == ((unsigned short int) (((26262 - var_1_11) + 18571) - var_1_38))) : ((! var_1_18) ? ((var_1_10 != (var_1_38 & (var_1_11 - 32))) ? (var_1_33 == ((unsigned short int) (min (((var_1_35 - var_1_11) - var_1_38) , var_1_38)))) : (var_1_33 == ((unsigned short int) (var_1_35 - var_1_38)))) : ((128u > var_1_38) ? (((var_1_38 * var_1_38) == (var_1_38 & var_1_28)) ? (var_1_33 == ((unsigned short int) var_1_11)) : (var_1_33 == ((unsigned short int) (min ((max (var_1_11 , var_1_35)) , var_1_38))))) : (var_1_33 == ((unsigned short int) var_1_38)))))) && (var_1_37 == ((unsigned short int) var_1_11))) && (var_1_38 == ((unsigned char) var_1_11))) && (var_1_39 == ((signed char) var_1_11))
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
