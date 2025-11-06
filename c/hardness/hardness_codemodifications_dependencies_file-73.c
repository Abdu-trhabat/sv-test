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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch73dependencies.c", 13, "reach_error"); }
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
double var_1_1 = 7.325;
double var_1_3 = 63.8;
double var_1_4 = 256.6;
double var_1_5 = 2.375;
double var_1_6 = 25.8;
unsigned char var_1_7 = 1;
double var_1_8 = 1.5;
double var_1_9 = 5.6;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 5;
double var_1_13 = 9999999.62;
double var_1_14 = 49.125;
signed long int var_1_15 = 25;
float var_1_16 = 128.8;
float var_1_17 = 0.0;
float var_1_18 = 255.75;
float var_1_19 = 4.75;
float var_1_20 = 256.375;
unsigned char var_1_22 = 5;
unsigned char var_1_23 = 5;
unsigned char var_1_24 = 32;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 7.325;
unsigned char last_1_var_1_22 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch73dependencies
	if (((var_1_8 + last_1_var_1_1) / 63.75f) < (min (var_1_5 , (var_1_3 - var_1_4)))) {
		var_1_15 = last_1_var_1_22;
	} else {
		var_1_15 = var_1_11;
	}


	// From: Req2Batch73dependencies
	if (! var_1_7) {
		var_1_10 = (max (var_1_11 , var_1_12));
	}


	// From: Req3Batch73dependencies
	var_1_13 = (min (var_1_8 , (min (var_1_9 , var_1_14))));


	// From: Req5Batch73dependencies
	if ((var_1_8 >= var_1_4) || (var_1_12 > var_1_11)) {
		if (var_1_13 != var_1_8) {
			var_1_16 = (1.975f + ((var_1_17 - var_1_18) - var_1_19));
		}
	} else {
		var_1_16 = (var_1_19 - var_1_18);
	}


	// From: Req1Batch73dependencies
	if (var_1_13 > ((var_1_3 - var_1_4) / (max (var_1_5 , var_1_6)))) {
		if (var_1_7) {
			var_1_1 = var_1_8;
		} else {
			var_1_1 = var_1_9;
		}
	} else {
		var_1_1 = var_1_9;
	}


	// From: Req6Batch73dependencies
	if (var_1_6 <= (max (var_1_5 , var_1_1))) {
		var_1_20 = (var_1_18 + var_1_19);
	}


	// From: Req7Batch73dependencies
	if ((var_1_15 == var_1_10) && var_1_7) {
		if (var_1_7 || (var_1_1 <= var_1_13)) {
			var_1_22 = (min ((var_1_23 + var_1_24) , var_1_11));
		} else {
			var_1_22 = var_1_23;
		}
	} else {
		var_1_22 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	assume_abort_if_not(var_1_5 != 0.0F);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(var_1_6 != 0.0F);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 2305843.009213691400e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_22 = var_1_22;
}

int property(void) {
	return (((((((var_1_13 > ((var_1_3 - var_1_4) / (max (var_1_5 , var_1_6)))) ? (var_1_7 ? (var_1_1 == ((double) var_1_8)) : (var_1_1 == ((double) var_1_9))) : (var_1_1 == ((double) var_1_9))) && ((! var_1_7) ? (var_1_10 == ((unsigned char) (max (var_1_11 , var_1_12)))) : 1)) && (var_1_13 == ((double) (min (var_1_8 , (min (var_1_9 , var_1_14))))))) && ((((var_1_8 + last_1_var_1_1) / 63.75f) < (min (var_1_5 , (var_1_3 - var_1_4)))) ? (var_1_15 == ((signed long int) last_1_var_1_22)) : (var_1_15 == ((signed long int) var_1_11)))) && (((var_1_8 >= var_1_4) || (var_1_12 > var_1_11)) ? ((var_1_13 != var_1_8) ? (var_1_16 == ((float) (1.975f + ((var_1_17 - var_1_18) - var_1_19)))) : 1) : (var_1_16 == ((float) (var_1_19 - var_1_18))))) && ((var_1_6 <= (max (var_1_5 , var_1_1))) ? (var_1_20 == ((float) (var_1_18 + var_1_19))) : 1)) && (((var_1_15 == var_1_10) && var_1_7) ? ((var_1_7 || (var_1_1 <= var_1_13)) ? (var_1_22 == ((unsigned char) (min ((var_1_23 + var_1_24) , var_1_11)))) : (var_1_22 == ((unsigned char) var_1_23))) : (var_1_22 == ((unsigned char) var_1_12)))
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
