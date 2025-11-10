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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch105normal.c", 13, "reach_error"); }
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
float var_1_1 = 128.3;
unsigned char var_1_2 = 1;
double var_1_3 = 4.25;
float var_1_4 = 0.25;
float var_1_5 = 15.55;
signed short int var_1_6 = 50;
signed short int var_1_7 = -128;
unsigned char var_1_8 = 0;
signed short int var_1_9 = 500;
signed short int var_1_10 = 25;
signed short int var_1_11 = 10000;
signed short int var_1_12 = 25;
unsigned char var_1_13 = 10;
unsigned char var_1_14 = 64;
unsigned char var_1_15 = 8;
unsigned char var_1_16 = 4;
signed short int var_1_17 = -5;
double var_1_18 = 3.5;
double var_1_19 = 25.5;
double var_1_20 = 2.5;
double var_1_21 = 31.15;
double var_1_22 = 5.5;
double var_1_23 = 2.5;
unsigned long int var_1_24 = 128;
double var_1_25 = 10000000000000.5;
float var_1_26 = 0.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch105normal
	if (var_1_3 != 255.6) {
		var_1_1 = var_1_4;
	} else {
		var_1_1 = (max (var_1_4 , var_1_5));
	}


	// From: Req2Batch105normal
	if (var_1_2) {
		var_1_6 = var_1_7;
	} else {
		if (var_1_3 >= var_1_1) {
			if (var_1_8) {
				var_1_6 = ((var_1_9 - var_1_10) + ((var_1_11 - 100) - var_1_12));
			} else {
				var_1_6 = 64;
			}
		} else {
			var_1_6 = var_1_11;
		}
	}


	// From: Req3Batch105normal
	if (var_1_1 == var_1_4) {
		var_1_13 = (max (var_1_14 , (max (var_1_15 , var_1_16))));
	} else {
		if (var_1_8) {
			var_1_13 = 0;
		} else {
			var_1_13 = var_1_15;
		}
	}


	// From: Req4Batch105normal
	if ((var_1_18 - (max (var_1_19 , var_1_20))) > 0.0) {
		var_1_17 = var_1_9;
	}


	// From: Req5Batch105normal
	if (var_1_2 || var_1_8) {
		var_1_21 = ((var_1_22 + var_1_23) + 3.75);
	}


	// From: Req6Batch105normal
	if ((var_1_19 - var_1_20) > (min ((min (var_1_1 , var_1_25)) , var_1_3))) {
		if (! var_1_2) {
			var_1_24 = (abs (var_1_10));
		} else {
			var_1_24 = var_1_9;
		}
	}


	// From: Req7Batch105normal
	if (var_1_7 >= (max (var_1_24 , var_1_11))) {
		var_1_26 = (var_1_22 + var_1_23);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -32767);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 8191);
	assume_abort_if_not(var_1_11 <= 16383);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -230584.3009213691400e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_3 != 255.6) ? (var_1_1 == ((float) var_1_4)) : (var_1_1 == ((float) (max (var_1_4 , var_1_5))))) && (var_1_2 ? (var_1_6 == ((signed short int) var_1_7)) : ((var_1_3 >= var_1_1) ? (var_1_8 ? (var_1_6 == ((signed short int) ((var_1_9 - var_1_10) + ((var_1_11 - 100) - var_1_12)))) : (var_1_6 == ((signed short int) 64))) : (var_1_6 == ((signed short int) var_1_11))))) && ((var_1_1 == var_1_4) ? (var_1_13 == ((unsigned char) (max (var_1_14 , (max (var_1_15 , var_1_16)))))) : (var_1_8 ? (var_1_13 == ((unsigned char) 0)) : (var_1_13 == ((unsigned char) var_1_15))))) && (((var_1_18 - (max (var_1_19 , var_1_20))) > 0.0) ? (var_1_17 == ((signed short int) var_1_9)) : 1)) && ((var_1_2 || var_1_8) ? (var_1_21 == ((double) ((var_1_22 + var_1_23) + 3.75))) : 1)) && (((var_1_19 - var_1_20) > (min ((min (var_1_1 , var_1_25)) , var_1_3))) ? ((! var_1_2) ? (var_1_24 == ((unsigned long int) (abs (var_1_10)))) : (var_1_24 == ((unsigned long int) var_1_9))) : 1)) && ((var_1_7 >= (max (var_1_24 , var_1_11))) ? (var_1_26 == ((float) (var_1_22 + var_1_23))) : 1)
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
