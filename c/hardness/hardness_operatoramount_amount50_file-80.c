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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch80Amount50.c", 13, "reach_error"); }
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
signed short int var_1_1 = 128;
double var_1_2 = 24.25;
double var_1_3 = 128.5;
signed short int var_1_6 = -16;
signed short int var_1_7 = -2;
signed short int var_1_8 = 5;
signed short int var_1_9 = -25;
unsigned char var_1_10 = 200;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
double var_1_13 = 128.375;
unsigned short int var_1_14 = 0;
float var_1_15 = 0.0;
float var_1_16 = 4.87;
float var_1_17 = 8.875;
signed char var_1_18 = -16;
double var_1_19 = 4.9;
double var_1_20 = 63.5;
double var_1_21 = 64.8;
double var_1_22 = 100.675;
double var_1_23 = 7.75;
double var_1_24 = 1.8;

// Calibration values

// Last'ed variables
double last_1_var_1_19 = 4.9;
double last_1_var_1_24 = 1.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch80Amount50
	if (var_1_11) {
		var_1_10 = (min (0 , var_1_12));
	} else {
		if (! (last_1_var_1_19 > (255.9 / var_1_13))) {
			var_1_10 = var_1_12;
		}
	}


	// From: Req4Batch80Amount50
	if (! var_1_11) {
		if (((var_1_15 - var_1_16) - var_1_17) <= var_1_13) {
			var_1_14 = var_1_10;
		} else {
			var_1_14 = 128;
		}
	}


	// From: Req6Batch80Amount50
	if (var_1_12 < (1 + var_1_14)) {
		var_1_19 = (var_1_20 + (max ((199.5 + var_1_21) , (max (var_1_22 , var_1_23)))));
	} else {
		var_1_19 = (var_1_22 + var_1_20);
	}


	// From: Req1Batch80Amount50
	if (((var_1_2 - var_1_3) * last_1_var_1_24) < last_1_var_1_24) {
		var_1_1 = (min (-8 , (var_1_6 + (min (var_1_7 , var_1_8)))));
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req7Batch80Amount50
	if ((32 + var_1_12) != var_1_1) {
		var_1_24 = var_1_21;
	}


	// From: Req2Batch80Amount50
	signed short int stepLocal_0 = var_1_8;
	if (stepLocal_0 >= var_1_7) {
		var_1_9 = (-256 + var_1_6);
	} else {
		var_1_9 = (var_1_7 + var_1_6);
	}


	// From: Req5Batch80Amount50
	if ((2935136887u - (var_1_12 + var_1_10)) <= var_1_14) {
		var_1_18 = 32;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -16383);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -16383);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -16383);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 4611686.018427388000e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427388000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_19 = var_1_19;
	last_1_var_1_24 = var_1_24;
}

int property(void) {
	return (((((((((var_1_2 - var_1_3) * last_1_var_1_24) < last_1_var_1_24) ? (var_1_1 == ((signed short int) (min (-8 , (var_1_6 + (min (var_1_7 , var_1_8))))))) : (var_1_1 == ((signed short int) var_1_6))) && ((var_1_8 >= var_1_7) ? (var_1_9 == ((signed short int) (-256 + var_1_6))) : (var_1_9 == ((signed short int) (var_1_7 + var_1_6))))) && (var_1_11 ? (var_1_10 == ((unsigned char) (min (0 , var_1_12)))) : ((! (last_1_var_1_19 > (255.9 / var_1_13))) ? (var_1_10 == ((unsigned char) var_1_12)) : 1))) && ((! var_1_11) ? ((((var_1_15 - var_1_16) - var_1_17) <= var_1_13) ? (var_1_14 == ((unsigned short int) var_1_10)) : (var_1_14 == ((unsigned short int) 128))) : 1)) && (((2935136887u - (var_1_12 + var_1_10)) <= var_1_14) ? (var_1_18 == ((signed char) 32)) : 1)) && ((var_1_12 < (1 + var_1_14)) ? (var_1_19 == ((double) (var_1_20 + (max ((199.5 + var_1_21) , (max (var_1_22 , var_1_23))))))) : (var_1_19 == ((double) (var_1_22 + var_1_20))))) && (((32 + var_1_12) != var_1_1) ? (var_1_24 == ((double) var_1_21)) : 1)
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
