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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch90stepLocals.c", 13, "reach_error"); }
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
signed long int var_1_1 = -32;
signed long int var_1_2 = 16;
signed long int var_1_3 = 10;
signed long int var_1_4 = 64;
signed long int var_1_5 = -10;
signed long int var_1_6 = 8;
float var_1_7 = 127.8;
float var_1_8 = -0.2;
float var_1_9 = 255.175;
signed long int var_1_10 = 5;
signed long int var_1_11 = -4;
signed char var_1_12 = 4;
signed long int var_1_13 = 100000;
signed char var_1_14 = -16;
double var_1_15 = 2.25;
signed long int var_1_16 = 2;
unsigned char var_1_17 = 0;
signed short int var_1_18 = -1;
signed short int var_1_19 = 4;
signed short int var_1_20 = 32;
double var_1_21 = 4.5;
double var_1_22 = 8.75;
double var_1_23 = 1000.8;
double var_1_24 = 63.5;
double var_1_25 = 31.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch90stepLocals
	if ((var_1_2 / (min (var_1_3 , var_1_4))) <= (var_1_5 | var_1_6)) {
		if ((var_1_7 * var_1_8) < var_1_9) {
			var_1_1 = var_1_10;
		} else {
			var_1_1 = var_1_11;
		}
	} else {
		var_1_1 = var_1_10;
	}


	// From: Req2Batch90stepLocals
	if (((var_1_6 * var_1_4) * (-500 / var_1_3)) <= (var_1_2 - var_1_13)) {
		var_1_12 = var_1_14;
	} else {
		var_1_12 = 5;
	}


	// From: Req3Batch90stepLocals
	if ((var_1_6 + var_1_5) != var_1_13) {
		var_1_15 = 16.4;
	}


	// From: Req4Batch90stepLocals
	unsigned char stepLocal_0 = var_1_17;
	if (8.5 <= var_1_7) {
		if (stepLocal_0 || ((var_1_11 & var_1_3) != var_1_13)) {
			var_1_16 = var_1_10;
		}
	} else {
		var_1_16 = 0;
	}


	// From: Req5Batch90stepLocals
	if (var_1_17) {
		var_1_18 = (var_1_19 - var_1_20);
	} else {
		var_1_18 = (var_1_14 + var_1_12);
	}


	// From: Req6Batch90stepLocals
	if (-50 == (var_1_3 + var_1_16)) {
		var_1_21 = (((min (var_1_22 , var_1_23)) - var_1_24) + var_1_25);
	} else {
		if (var_1_8 > var_1_25) {
			if ((var_1_19 - var_1_20) <= var_1_13) {
				var_1_21 = var_1_22;
			} else {
				var_1_21 = var_1_25;
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483647);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483647);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 / (min (var_1_3 , var_1_4))) <= (var_1_5 | var_1_6)) ? (((var_1_7 * var_1_8) < var_1_9) ? (var_1_1 == ((signed long int) var_1_10)) : (var_1_1 == ((signed long int) var_1_11))) : (var_1_1 == ((signed long int) var_1_10))) && ((((var_1_6 * var_1_4) * (-500 / var_1_3)) <= (var_1_2 - var_1_13)) ? (var_1_12 == ((signed char) var_1_14)) : (var_1_12 == ((signed char) 5)))) && (((var_1_6 + var_1_5) != var_1_13) ? (var_1_15 == ((double) 16.4)) : 1)) && ((8.5 <= var_1_7) ? ((var_1_17 || ((var_1_11 & var_1_3) != var_1_13)) ? (var_1_16 == ((signed long int) var_1_10)) : 1) : (var_1_16 == ((signed long int) 0)))) && (var_1_17 ? (var_1_18 == ((signed short int) (var_1_19 - var_1_20))) : (var_1_18 == ((signed short int) (var_1_14 + var_1_12))))) && ((-50 == (var_1_3 + var_1_16)) ? (var_1_21 == ((double) (((min (var_1_22 , var_1_23)) - var_1_24) + var_1_25))) : ((var_1_8 > var_1_25) ? (((var_1_19 - var_1_20) <= var_1_13) ? (var_1_21 == ((double) var_1_22)) : (var_1_21 == ((double) var_1_25))) : 1))
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
