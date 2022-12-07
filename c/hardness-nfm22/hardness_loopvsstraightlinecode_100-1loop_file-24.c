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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch24100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 0.8;
float var_1_5 = 10000000000.75;
float var_1_6 = 50.5;
float var_1_7 = 3.875;
unsigned long int var_1_8 = 256;
unsigned short int var_1_10 = 1;
unsigned char var_1_11 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 64;
unsigned char var_1_19 = 2;
unsigned long int var_1_20 = 64;
signed char var_1_21 = 2;
signed char var_1_22 = 8;
signed char var_1_23 = 10;
signed char var_1_24 = 10;
signed char var_1_25 = 1;
signed char var_1_26 = 10;
unsigned char var_1_27 = 4;
float var_1_28 = 32.5;
float var_1_29 = 0.0;
float var_1_30 = 127.5;
float var_1_31 = 5.25;
float var_1_32 = 9.4;
float var_1_33 = 5.4;
float var_1_34 = 0.5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_27 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch24100_1loop
	var_1_10 = last_1_var_1_27;


	// From: Req6Batch24100_1loop
	signed long int stepLocal_2 = (var_1_18 + 64) - var_1_19;
	if (var_1_13) {
		var_1_16 = (var_1_14 && var_1_17);
	} else {
		if (var_1_10 <= stepLocal_2) {
			var_1_16 = var_1_14;
		} else {
			var_1_16 = var_1_14;
		}
	}


	// From: Req10Batch24100_1loop
	if (var_1_16) {
		var_1_28 = (max (var_1_7 , 24.8f));
	} else {
		var_1_28 = (min (((min (var_1_6 , var_1_5)) - (var_1_29 - var_1_30)) , var_1_7));
	}


	// From: Req9Batch24100_1loop
	if (((1.5899999999999999 * var_1_5) * (var_1_28 / 9.5)) <= var_1_6) {
		var_1_27 = var_1_19;
	}


	// From: Req4Batch24100_1loop
	if (var_1_16) {
		var_1_11 = (var_1_16 && var_1_13);
	} else {
		var_1_11 = ((! var_1_13) && var_1_14);
	}


	// From: Req5Batch24100_1loop
	if ((var_1_5 * var_1_28) < var_1_7) {
		var_1_15 = ((var_1_11 && var_1_13) || (! var_1_14));
	} else {
		var_1_15 = (! var_1_13);
	}


	// From: Req8Batch24100_1loop
	var_1_21 = ((abs (max (var_1_22 , var_1_23))) + ((max (var_1_24 , var_1_25)) - var_1_26));


	// From: Req11Batch24100_1loop
	if (var_1_10 <= var_1_21) {
		var_1_31 = ((var_1_32 + var_1_33) + (max (var_1_7 , var_1_30)));
	} else {
		if (var_1_10 >= (min ((var_1_18 + var_1_26) , 25))) {
			var_1_31 = (var_1_32 + (min ((min (var_1_33 , var_1_30)) , var_1_7)));
		} else {
			var_1_31 = (32.5f - (64.4f + var_1_30));
		}
	}


	// From: Req12Batch24100_1loop
	if ((- 3.75) < var_1_29) {
		var_1_34 = (abs (abs (var_1_30 - var_1_29)));
	} else {
		var_1_34 = (min (var_1_30 , 8.75f));
	}


	// From: Req1Batch24100_1loop
	unsigned short int stepLocal_0 = var_1_10;
	if (var_1_27 <= stepLocal_0) {
		var_1_1 = (var_1_5 - var_1_6);
	} else {
		var_1_1 = (10.5f + var_1_7);
	}


	// From: Req7Batch24100_1loop
	if (var_1_10 > var_1_27) {
		if ((var_1_19 << 1) > (var_1_10 - (var_1_27 + var_1_27))) {
			var_1_20 = (abs (min (var_1_18 , 2u)));
		} else {
			var_1_20 = (max (var_1_18 , var_1_19));
		}
	} else {
		var_1_20 = var_1_19;
	}


	// From: Req2Batch24100_1loop
	unsigned char stepLocal_1 = var_1_27;
	if (var_1_5 >= var_1_6) {
		if (stepLocal_1 < var_1_20) {
			var_1_8 = (max ((var_1_20 + (max (var_1_27 , var_1_10))) , 1u));
		} else {
			var_1_8 = var_1_10;
		}
	} else {
		var_1_8 = var_1_27;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 63);
	assume_abort_if_not(var_1_18 <= 128);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -63);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -63);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 4611686.018427382800e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -230584.3009213691390e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691390e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -230584.3009213691390e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691390e+12F && var_1_33 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_27 = var_1_27;
}

int property() {
	return ((((((((((((var_1_27 <= var_1_10) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : (var_1_1 == ((float) (10.5f + var_1_7)))) && ((var_1_5 >= var_1_6) ? ((var_1_27 < var_1_20) ? (var_1_8 == ((unsigned long int) (max ((var_1_20 + (max (var_1_27 , var_1_10))) , 1u)))) : (var_1_8 == ((unsigned long int) var_1_10))) : (var_1_8 == ((unsigned long int) var_1_27)))) && (var_1_10 == ((unsigned short int) last_1_var_1_27))) && (var_1_16 ? (var_1_11 == ((unsigned char) (var_1_16 && var_1_13))) : (var_1_11 == ((unsigned char) ((! var_1_13) && var_1_14))))) && (((var_1_5 * var_1_28) < var_1_7) ? (var_1_15 == ((unsigned char) ((var_1_11 && var_1_13) || (! var_1_14)))) : (var_1_15 == ((unsigned char) (! var_1_13))))) && (var_1_13 ? (var_1_16 == ((unsigned char) (var_1_14 && var_1_17))) : ((var_1_10 <= ((var_1_18 + 64) - var_1_19)) ? (var_1_16 == ((unsigned char) var_1_14)) : (var_1_16 == ((unsigned char) var_1_14))))) && ((var_1_10 > var_1_27) ? (((var_1_19 << 1) > (var_1_10 - (var_1_27 + var_1_27))) ? (var_1_20 == ((unsigned long int) (abs (min (var_1_18 , 2u))))) : (var_1_20 == ((unsigned long int) (max (var_1_18 , var_1_19))))) : (var_1_20 == ((unsigned long int) var_1_19)))) && (var_1_21 == ((signed char) ((abs (max (var_1_22 , var_1_23))) + ((max (var_1_24 , var_1_25)) - var_1_26))))) && ((((1.5899999999999999 * var_1_5) * (var_1_28 / 9.5)) <= var_1_6) ? (var_1_27 == ((unsigned char) var_1_19)) : 1)) && (var_1_16 ? (var_1_28 == ((float) (max (var_1_7 , 24.8f)))) : (var_1_28 == ((float) (min (((min (var_1_6 , var_1_5)) - (var_1_29 - var_1_30)) , var_1_7)))))) && ((var_1_10 <= var_1_21) ? (var_1_31 == ((float) ((var_1_32 + var_1_33) + (max (var_1_7 , var_1_30))))) : ((var_1_10 >= (min ((var_1_18 + var_1_26) , 25))) ? (var_1_31 == ((float) (var_1_32 + (min ((min (var_1_33 , var_1_30)) , var_1_7))))) : (var_1_31 == ((float) (32.5f - (64.4f + var_1_30))))))) && (((- 3.75) < var_1_29) ? (var_1_34 == ((float) (abs (abs (var_1_30 - var_1_29))))) : (var_1_34 == ((float) (min (var_1_30 , 8.75f)))))
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
