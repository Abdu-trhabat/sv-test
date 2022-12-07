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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch77100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -8;
float var_1_2 = 1.5;
float var_1_3 = 24.7;
float var_1_8 = 0.875;
float var_1_9 = 31.875;
float var_1_10 = 255.25;
float var_1_11 = 0.0;
float var_1_12 = 7.58;
float var_1_13 = 8.6;
float var_1_14 = 49.75;
signed short int var_1_16 = -64;
signed long int var_1_18 = 4;
signed long int var_1_19 = 100;
unsigned char var_1_21 = 0;
unsigned char var_1_23 = 0;
signed char var_1_24 = 16;
signed short int var_1_26 = -1;
signed char var_1_27 = -32;
unsigned char var_1_28 = 1;
signed long int var_1_29 = -4;
signed short int var_1_31 = 1000;
signed long int var_1_32 = 4;
signed short int var_1_33 = 8;
signed short int var_1_34 = 25;
signed short int var_1_35 = 100;
signed short int var_1_36 = 10000;
float var_1_38 = 2.125;
signed long int var_1_39 = -1000000;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -8;
float last_1_var_1_8 = 0.875;
signed short int last_1_var_1_16 = -64;
signed long int last_1_var_1_18 = 4;
signed long int last_1_var_1_19 = 100;
signed char last_1_var_1_24 = 16;
signed long int last_1_var_1_29 = -4;
signed short int last_1_var_1_31 = 1000;
signed long int last_1_var_1_39 = -1000000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch77100_while
	if ((var_1_2 - var_1_3) >= last_1_var_1_8) {
		var_1_1 = ((last_1_var_1_24 + last_1_var_1_31) + last_1_var_1_16);
	} else {
		var_1_1 = last_1_var_1_16;
	}


	// From: Req10Batch77100_while
	signed long int stepLocal_6 = -5;
	signed long int stepLocal_5 = last_1_var_1_1;
	signed long int stepLocal_4 = (var_1_32 - 4) * last_1_var_1_24;
	if (stepLocal_5 <= (last_1_var_1_18 * var_1_27)) {
		if ((min (last_1_var_1_18 , last_1_var_1_16)) == stepLocal_4) {
			var_1_31 = ((var_1_33 + var_1_34) - var_1_35);
		} else {
			var_1_31 = (((var_1_36 - 1) - var_1_33) + var_1_34);
		}
	} else {
		if (stepLocal_6 <= last_1_var_1_39) {
			var_1_31 = var_1_27;
		} else {
			var_1_31 = last_1_var_1_24;
		}
	}


	// From: Req7Batch77100_while
	if (((var_1_13 * var_1_12) * var_1_3) != (var_1_14 + last_1_var_1_8)) {
		if (last_1_var_1_29 >= (last_1_var_1_19 / var_1_26)) {
			var_1_24 = var_1_27;
		} else {
			var_1_24 = var_1_27;
		}
	}


	// From: Req3Batch77100_while
	if ((max ((var_1_2 * var_1_10) , var_1_11)) > var_1_9) {
		if (var_1_13 != var_1_2) {
			var_1_16 = var_1_24;
		} else {
			var_1_16 = var_1_24;
		}
	} else {
		var_1_16 = var_1_24;
	}


	// From: Req11Batch77100_while
	if (var_1_35 <= var_1_27) {
		var_1_38 = var_1_9;
	} else {
		var_1_38 = (abs (abs (var_1_13 - var_1_9)));
	}


	// From: Req6Batch77100_while
	if (var_1_16 <= ((var_1_31 / -128) + var_1_1)) {
		var_1_21 = var_1_23;
	}


	// From: Req2Batch77100_while
	signed long int stepLocal_0 = 64;
	if (stepLocal_0 <= var_1_24) {
		var_1_8 = ((max (var_1_9 , var_1_10)) - (var_1_12 + (var_1_13 + var_1_14)));
	} else {
		if (var_1_21) {
			var_1_8 = (abs (max (var_1_13 , var_1_11)));
		} else {
			var_1_8 = (var_1_12 - 2.125f);
		}
	}


	// From: Req4Batch77100_while
	if (var_1_9 > var_1_13) {
		var_1_18 = (var_1_24 + var_1_31);
	}


	// From: Req8Batch77100_while
	unsigned char stepLocal_2 = (var_1_31 + var_1_24) >= var_1_1;
	if (stepLocal_2 || var_1_23) {
		var_1_28 = (var_1_21 && var_1_23);
	}


	// From: Req12Batch77100_while
	if (! var_1_21) {
		if ((last_1_var_1_39 <= var_1_31) || var_1_28) {
			var_1_39 = var_1_36;
		}
	}


	// From: Req5Batch77100_while
	unsigned char stepLocal_1 = var_1_21;
	if (var_1_28 || stepLocal_1) {
		var_1_19 = (max ((var_1_31 + var_1_24) , (-8 + var_1_18)));
	}


	// From: Req9Batch77100_while
	signed long int stepLocal_3 = var_1_24 * (var_1_31 * var_1_16);
	if (-50 == stepLocal_3) {
		var_1_29 = (min (-500 , var_1_18));
	} else {
		if (var_1_23) {
			var_1_29 = var_1_1;
		} else {
			var_1_29 = var_1_1;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 6917529.027641073700e+12F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691390e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691390e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32768);
	assume_abort_if_not(var_1_26 <= 32767);
	assume_abort_if_not(var_1_26 != 0);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -127);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -1);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 16383);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 16383);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32766);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= 8191);
	assume_abort_if_not(var_1_36 <= 16383);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_39 = var_1_39;
}

int property() {
	return (((((((((((((var_1_2 - var_1_3) >= last_1_var_1_8) ? (var_1_1 == ((signed long int) ((last_1_var_1_24 + last_1_var_1_31) + last_1_var_1_16))) : (var_1_1 == ((signed long int) last_1_var_1_16))) && ((64 <= var_1_24) ? (var_1_8 == ((float) ((max (var_1_9 , var_1_10)) - (var_1_12 + (var_1_13 + var_1_14))))) : (var_1_21 ? (var_1_8 == ((float) (abs (max (var_1_13 , var_1_11))))) : (var_1_8 == ((float) (var_1_12 - 2.125f)))))) && (((max ((var_1_2 * var_1_10) , var_1_11)) > var_1_9) ? ((var_1_13 != var_1_2) ? (var_1_16 == ((signed short int) var_1_24)) : (var_1_16 == ((signed short int) var_1_24))) : (var_1_16 == ((signed short int) var_1_24)))) && ((var_1_9 > var_1_13) ? (var_1_18 == ((signed long int) (var_1_24 + var_1_31))) : 1)) && ((var_1_28 || var_1_21) ? (var_1_19 == ((signed long int) (max ((var_1_31 + var_1_24) , (-8 + var_1_18))))) : 1)) && ((var_1_16 <= ((var_1_31 / -128) + var_1_1)) ? (var_1_21 == ((unsigned char) var_1_23)) : 1)) && ((((var_1_13 * var_1_12) * var_1_3) != (var_1_14 + last_1_var_1_8)) ? ((last_1_var_1_29 >= (last_1_var_1_19 / var_1_26)) ? (var_1_24 == ((signed char) var_1_27)) : (var_1_24 == ((signed char) var_1_27))) : 1)) && ((((var_1_31 + var_1_24) >= var_1_1) || var_1_23) ? (var_1_28 == ((unsigned char) (var_1_21 && var_1_23))) : 1)) && ((-50 == (var_1_24 * (var_1_31 * var_1_16))) ? (var_1_29 == ((signed long int) (min (-500 , var_1_18)))) : (var_1_23 ? (var_1_29 == ((signed long int) var_1_1)) : (var_1_29 == ((signed long int) var_1_1))))) && ((last_1_var_1_1 <= (last_1_var_1_18 * var_1_27)) ? (((min (last_1_var_1_18 , last_1_var_1_16)) == ((var_1_32 - 4) * last_1_var_1_24)) ? (var_1_31 == ((signed short int) ((var_1_33 + var_1_34) - var_1_35))) : (var_1_31 == ((signed short int) (((var_1_36 - 1) - var_1_33) + var_1_34)))) : ((-5 <= last_1_var_1_39) ? (var_1_31 == ((signed short int) var_1_27)) : (var_1_31 == ((signed short int) last_1_var_1_24))))) && ((var_1_35 <= var_1_27) ? (var_1_38 == ((float) var_1_9)) : (var_1_38 == ((float) (abs (abs (var_1_13 - var_1_9))))))) && ((! var_1_21) ? (((last_1_var_1_39 <= var_1_31) || var_1_28) ? (var_1_39 == ((signed long int) var_1_36)) : 1) : 1)
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
