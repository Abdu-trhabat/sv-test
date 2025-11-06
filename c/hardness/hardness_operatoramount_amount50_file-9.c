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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch9Amount50.c", 13, "reach_error"); }
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
double var_1_1 = 5.5;
signed char var_1_2 = 25;
signed short int var_1_3 = 4;
signed long int var_1_5 = -64;
double var_1_6 = 16.25;
double var_1_7 = 1.8;
unsigned char var_1_8 = 1;
signed char var_1_9 = -5;
signed char var_1_10 = 16;
signed char var_1_11 = 64;
unsigned long int var_1_12 = 1;
signed long int var_1_13 = 10;
unsigned char var_1_14 = 1;
signed long int var_1_15 = 4;
float var_1_16 = 1.4;
double var_1_17 = 4.4;
double var_1_18 = 100.4;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 1;
float var_1_21 = 3.5;
signed long int var_1_22 = 16;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_12 = 1;
unsigned char last_1_var_1_19 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch9Amount50
	unsigned long int stepLocal_1 = last_1_var_1_12 / var_1_5;
	unsigned long int stepLocal_0 = (var_1_3 & 0) * last_1_var_1_12;
	if ((var_1_2 >> var_1_3) == stepLocal_1) {
		if ((var_1_2 * var_1_5) > stepLocal_0) {
			var_1_1 = (min (var_1_6 , var_1_7));
		} else {
			if (last_1_var_1_19) {
				var_1_1 = var_1_7;
			} else {
				var_1_1 = var_1_6;
			}
		}
	}


	// From: Req5Batch9Amount50
	unsigned char stepLocal_4 = var_1_8;
	signed long int stepLocal_3 = 4;
	if (stepLocal_3 > var_1_15) {
		if (((var_1_6 / 8.75f) * (var_1_7 * var_1_1)) < (var_1_17 - var_1_18)) {
			if (var_1_14 && stepLocal_4) {
				var_1_16 = var_1_7;
			} else {
				var_1_16 = var_1_6;
			}
		}
	} else {
		var_1_16 = var_1_7;
	}


	// From: Req6Batch9Amount50
	var_1_19 = var_1_20;


	// From: Req7Batch9Amount50
	var_1_21 = var_1_7;


	// From: Req2Batch9Amount50
	if (var_1_19) {
		var_1_9 = (max (var_1_3 , (max (var_1_10 , var_1_11))));
	} else {
		var_1_9 = var_1_11;
	}


	// From: Req4Batch9Amount50
	signed long int stepLocal_2 = max ((min (var_1_5 , 16)) , var_1_3);
	if (stepLocal_2 != (min ((var_1_2 - var_1_15) , var_1_10))) {
		if (9999.5f >= var_1_1) {
			var_1_13 = var_1_9;
		}
	} else {
		var_1_13 = var_1_3;
	}


	// From: Req8Batch9Amount50
	var_1_22 = var_1_13;


	// From: Req3Batch9Amount50
	if (! (var_1_5 >= var_1_22)) {
		var_1_12 = (abs (var_1_3));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 6);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_19 = var_1_19;
}

int property(void) {
	return (((((((((var_1_2 >> var_1_3) == (last_1_var_1_12 / var_1_5)) ? (((var_1_2 * var_1_5) > ((var_1_3 & 0) * last_1_var_1_12)) ? (var_1_1 == ((double) (min (var_1_6 , var_1_7)))) : (last_1_var_1_19 ? (var_1_1 == ((double) var_1_7)) : (var_1_1 == ((double) var_1_6)))) : 1) && (var_1_19 ? (var_1_9 == ((signed char) (max (var_1_3 , (max (var_1_10 , var_1_11)))))) : (var_1_9 == ((signed char) var_1_11)))) && ((! (var_1_5 >= var_1_22)) ? (var_1_12 == ((unsigned long int) (abs (var_1_3)))) : 1)) && (((max ((min (var_1_5 , 16)) , var_1_3)) != (min ((var_1_2 - var_1_15) , var_1_10))) ? ((9999.5f >= var_1_1) ? (var_1_13 == ((signed long int) var_1_9)) : 1) : (var_1_13 == ((signed long int) var_1_3)))) && ((4 > var_1_15) ? ((((var_1_6 / 8.75f) * (var_1_7 * var_1_1)) < (var_1_17 - var_1_18)) ? ((var_1_14 && var_1_8) ? (var_1_16 == ((float) var_1_7)) : (var_1_16 == ((float) var_1_6))) : 1) : (var_1_16 == ((float) var_1_7)))) && (var_1_19 == ((unsigned char) var_1_20))) && (var_1_21 == ((float) var_1_7))) && (var_1_22 == ((signed long int) var_1_13))
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
