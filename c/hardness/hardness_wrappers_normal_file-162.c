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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch162normal.c", 13, "reach_error"); }
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
double var_1_1 = -0.25;
double var_1_4 = -0.5;
double var_1_5 = 31.75;
double var_1_6 = 3.862;
double var_1_7 = 7.25;
unsigned char var_1_8 = 2;
signed long int var_1_10 = -8;
signed long int var_1_11 = 1;
unsigned char var_1_12 = 32;
signed char var_1_13 = 10;
signed char var_1_14 = 8;
signed char var_1_15 = 5;
signed char var_1_16 = 32;
double var_1_17 = 256.2;
unsigned char var_1_18 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 2;
double last_1_var_1_17 = 256.2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch162normal
	if ((min (last_1_var_1_17 , 10.3)) >= last_1_var_1_17) {
		var_1_1 = (var_1_4 + var_1_5);
	} else {
		var_1_1 = (var_1_4 + (499.94 - (var_1_6 + var_1_7)));
	}


	// From: Req4Batch162normal
	if (var_1_18 || ((var_1_1 * last_1_var_1_17) <= var_1_5)) {
		if (var_1_10 >= var_1_12) {
			var_1_17 = var_1_6;
		} else {
			var_1_17 = 1.45;
		}
	} else {
		var_1_17 = 128.2;
	}


	// From: Req2Batch162normal
	signed long int stepLocal_1 = var_1_10;
	signed long int stepLocal_0 = var_1_10;
	if ((last_1_var_1_8 * (25 + 64)) != stepLocal_1) {
		if ((last_1_var_1_8 - var_1_11) == stepLocal_0) {
			var_1_8 = var_1_12;
		} else {
			var_1_8 = 16;
		}
	}


	// From: Req3Batch162normal
	if (var_1_1 < var_1_17) {
		var_1_13 = var_1_14;
	} else {
		var_1_13 = (var_1_15 - var_1_16);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691400e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691400e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	return (((((min (last_1_var_1_17 , 10.3)) >= last_1_var_1_17) ? (var_1_1 == ((double) (var_1_4 + var_1_5))) : (var_1_1 == ((double) (var_1_4 + (499.94 - (var_1_6 + var_1_7)))))) && (((last_1_var_1_8 * (25 + 64)) != var_1_10) ? (((last_1_var_1_8 - var_1_11) == var_1_10) ? (var_1_8 == ((unsigned char) var_1_12)) : (var_1_8 == ((unsigned char) 16))) : 1)) && ((var_1_1 < var_1_17) ? (var_1_13 == ((signed char) var_1_14)) : (var_1_13 == ((signed char) (var_1_15 - var_1_16))))) && ((var_1_18 || ((var_1_1 * last_1_var_1_17) <= var_1_5)) ? ((var_1_10 >= var_1_12) ? (var_1_17 == ((double) var_1_6)) : (var_1_17 == ((double) 1.45))) : (var_1_17 == ((double) 128.2)))
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
