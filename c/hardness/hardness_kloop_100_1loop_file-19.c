// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch19100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 50;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
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
unsigned short int var_1_24 = 0;
signed long int var_1_25 = 2126230324;
signed short int var_1_26 = 4;
unsigned char var_1_27 = 4;
unsigned char var_1_28 = 200;
unsigned char var_1_29 = 0;
float var_1_30 = 0.5;
float var_1_31 = 100.9;
float var_1_32 = 1000.25;
float var_1_33 = 25.125;
signed char var_1_34 = -16;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch19100_1loop
	signed long int stepLocal_7 = var_1_10 - (var_1_25 - var_1_9);
	if (stepLocal_7 >= ((var_1_8 >> var_1_26) / -8)) {
		var_1_24 = (min (var_1_9 , (min ((max (var_1_8 , var_1_26)) , var_1_7))));
	} else {
		var_1_24 = var_1_9;
	}


	// From: Req10Batch19100_1loop
	var_1_29 = (var_1_26 + var_1_7);


	// From: Req2Batch19100_1loop
	signed long int stepLocal_2 = var_1_9 - var_1_10;
	if (stepLocal_2 <= (min (-64 , (~ var_1_7)))) {
		var_1_11 = (var_1_24 + var_1_7);
	} else {
		var_1_11 = ((var_1_24 + (max (var_1_7 , var_1_8))) + var_1_10);
	}


	// From: Req4Batch19100_1loop
	unsigned long int stepLocal_3 = var_1_11;
	if (stepLocal_3 > (-256 + 1)) {
		var_1_16 = (abs (25u));
	}


	// From: Req5Batch19100_1loop
	unsigned char stepLocal_4 = var_1_11 <= var_1_16;
	if (stepLocal_4 || var_1_14) {
		var_1_17 = (min (var_1_18 , (var_1_19 + var_1_20)));
	}


	// From: Req11Batch19100_1loop
	if (var_1_8 >= var_1_16) {
		var_1_30 = (max (var_1_20 , var_1_19));
	} else {
		var_1_30 = ((min (var_1_31 , var_1_32)) - var_1_33);
	}


	// From: Req1Batch19100_1loop
	unsigned char stepLocal_1 = var_1_3;
	unsigned long int stepLocal_0 = max (var_1_16 , var_1_24);
	if (var_1_2 && stepLocal_1) {
		if (var_1_24 <= stepLocal_0) {
			if (var_1_3) {
				var_1_1 = (((var_1_7 + var_1_8) - var_1_9) - var_1_10);
			}
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req3Batch19100_1loop
	if (((var_1_16 * var_1_7) + var_1_9) > (var_1_16 / var_1_13)) {
		var_1_12 = ((! var_1_14) || var_1_15);
	} else {
		if (var_1_14 && var_1_2) {
			var_1_12 = var_1_15;
		}
	}


	// From: Req6Batch19100_1loop
	unsigned char stepLocal_5 = var_1_12;
	if (stepLocal_5 || var_1_14) {
		var_1_21 = var_1_9;
	} else {
		var_1_21 = (max ((max (10 , (var_1_9 + var_1_22))) , -16));
	}


	// From: Req7Batch19100_1loop
	signed long int stepLocal_6 = -1;
	if ((var_1_7 << var_1_1) >= stepLocal_6) {
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
				var_1_23 = var_1_20;
			}
		}
	}


	// From: Req9Batch19100_1loop
	if (! (! var_1_12)) {
		if (var_1_12) {
			var_1_27 = (var_1_28 - var_1_7);
		} else {
			var_1_27 = var_1_8;
		}
	} else {
		var_1_27 = 50;
	}


	// From: Req12Batch19100_1loop
	if (var_1_12) {
		if (var_1_12) {
			if ((var_1_22 * var_1_28) > var_1_8) {
				var_1_34 = var_1_26;
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
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
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -63);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 1073741823);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 7);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 127);
	assume_abort_if_not(var_1_28 <= 254);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((((((var_1_2 && var_1_3) ? ((var_1_24 <= (max (var_1_16 , var_1_24))) ? (var_1_3 ? (var_1_1 == ((unsigned char) (((var_1_7 + var_1_8) - var_1_9) - var_1_10))) : 1) : (var_1_1 == ((unsigned char) var_1_7))) : (var_1_1 == ((unsigned char) var_1_7))) && (((var_1_9 - var_1_10) <= (min (-64 , (~ var_1_7)))) ? (var_1_11 == ((unsigned long int) (var_1_24 + var_1_7))) : (var_1_11 == ((unsigned long int) ((var_1_24 + (max (var_1_7 , var_1_8))) + var_1_10))))) && ((((var_1_16 * var_1_7) + var_1_9) > (var_1_16 / var_1_13)) ? (var_1_12 == ((unsigned char) ((! var_1_14) || var_1_15))) : ((var_1_14 && var_1_2) ? (var_1_12 == ((unsigned char) var_1_15)) : 1))) && ((var_1_11 > (-256 + 1)) ? (var_1_16 == ((unsigned long int) (abs (25u)))) : 1)) && (((var_1_11 <= var_1_16) || var_1_14) ? (var_1_17 == ((double) (min (var_1_18 , (var_1_19 + var_1_20))))) : 1)) && ((var_1_12 || var_1_14) ? (var_1_21 == ((signed char) var_1_9)) : (var_1_21 == ((signed char) (max ((max (10 , (var_1_9 + var_1_22))) , -16)))))) && (((var_1_7 << var_1_1) >= -1) ? (var_1_23 == ((float) (var_1_20 + var_1_19))) : (var_1_15 ? ((! var_1_12) ? (var_1_23 == ((float) var_1_18)) : (var_1_23 == ((float) (var_1_19 + var_1_20)))) : ((! var_1_12) ? (var_1_23 == ((float) var_1_18)) : (var_1_23 == ((float) var_1_20)))))) && (((var_1_10 - (var_1_25 - var_1_9)) >= ((var_1_8 >> var_1_26) / -8)) ? (var_1_24 == ((unsigned short int) (min (var_1_9 , (min ((max (var_1_8 , var_1_26)) , var_1_7)))))) : (var_1_24 == ((unsigned short int) var_1_9)))) && ((! (! var_1_12)) ? (var_1_12 ? (var_1_27 == ((unsigned char) (var_1_28 - var_1_7))) : (var_1_27 == ((unsigned char) var_1_8))) : (var_1_27 == ((unsigned char) 50)))) && (var_1_29 == ((unsigned char) (var_1_26 + var_1_7)))) && ((var_1_8 >= var_1_16) ? (var_1_30 == ((float) (max (var_1_20 , var_1_19)))) : (var_1_30 == ((float) ((min (var_1_31 , var_1_32)) - var_1_33))))) && (var_1_12 ? (var_1_12 ? (((var_1_22 * var_1_28) > var_1_8) ? (var_1_34 == ((signed char) var_1_26)) : 1) : 1) : 1)
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
