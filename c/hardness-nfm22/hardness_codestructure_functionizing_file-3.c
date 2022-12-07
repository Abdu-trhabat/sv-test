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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch3functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
unsigned char functionized0(signed long int, signed char, unsigned short int);
void functionized1(double, float);
void functionized2(double, double);
signed long int functionized3();


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -64;
float var_1_2 = 128.2;
unsigned char var_1_3 = 1;
float var_1_4 = 32.32;
signed char var_1_5 = -32;
unsigned short int var_1_6 = 256;
signed long int var_1_7 = -10;
signed long int var_1_8 = -16;
unsigned short int var_1_9 = 32;
unsigned long int var_1_10 = 256;
double var_1_11 = 256.6;
double var_1_12 = 8.2;
signed char var_1_13 = 16;
signed char var_1_14 = 10;
double var_1_15 = 199.125;
double var_1_16 = 9.4;
double var_1_17 = 9999999999999.6;
signed short int var_1_18 = 10;
signed long int var_1_19 = -128;
unsigned char var_1_20 = 32;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 64;
unsigned long int var_1_23 = 64;

// Calibration values

// Last'ed variables

// Additional functions
unsigned char functionized0(signed long int functionized0_localFunctionVar0, signed char functionized0_localFunctionVar1, unsigned short int functionized0_localFunctionVar2) {
	return (functionized0_localFunctionVar1 <= ((functionized0_localFunctionVar0 ^ functionized0_localFunctionVar2) + var_1_8));
}
void functionized1(double functionized1_localFunctionVar0, float functionized1_localFunctionVar1) {
	if (functionized1_localFunctionVar0 == functionized1_localFunctionVar1) {
		var_1_10 = 0u;
	}
}
void functionized2(double functionized2_localFunctionVar0, double functionized2_localFunctionVar1) {
	if ((var_1_2 <= functionized2_localFunctionVar1) || var_1_3) {
		if ((var_1_4 / var_1_15) > 25.25) {
			var_1_12 = 128.5;
		}
	} else {
		var_1_12 = functionized2_localFunctionVar0;
	}
}
signed long int functionized3() {
	return (var_1_14 - var_1_18);
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch3functionizing
	if (99999.8f < var_1_2) {
		if (! var_1_3) {
			if (var_1_2 >= (var_1_4 / 2.5f)) {
				if (var_1_3) {
					var_1_1 = var_1_5;
				} else {
					var_1_1 = var_1_5;
				}
			}
		}
	}


	// From: Req2Batch3functionizing
	if (var_1_3) {
		if ((var_1_1 + (var_1_5 + var_1_7)) >= var_1_8) {
			var_1_6 = var_1_9;
		}
	}


	// From: Req3Batch3functionizing
	if (functionized0(var_1_7, var_1_1, var_1_9)) {
		functionized1(var_1_11, var_1_4);
	}


	// From: Req4Batch3functionizing
	functionized2(var_1_16, var_1_11);


	// From: Req5Batch3functionizing
	if ((min (functionized3() , var_1_5)) < var_1_19) {
		if (var_1_3) {
			var_1_17 = 128.1;
		}
	}


	// From: Req6Batch3functionizing
	if ((var_1_5 * var_1_13) > var_1_1) {
		var_1_20 = (abs (max ((var_1_21 - var_1_14) , (var_1_22 + 8))));
	}


	// From: Req7Batch3functionizing
	if ((var_1_17 + var_1_4) <= var_1_2) {
		if (var_1_8 >= var_1_7) {
			var_1_23 = var_1_9;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483648);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 127);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
}



void updateLastVariables() {
}

int property() {
	return (((((((99999.8f < var_1_2) ? ((! var_1_3) ? ((var_1_2 >= (var_1_4 / 2.5f)) ? (var_1_3 ? (var_1_1 == ((signed char) var_1_5)) : (var_1_1 == ((signed char) var_1_5))) : 1) : 1) : 1) && (var_1_3 ? (((var_1_1 + (var_1_5 + var_1_7)) >= var_1_8) ? (var_1_6 == ((unsigned short int) var_1_9)) : 1) : 1)) && ((var_1_1 <= ((var_1_7 ^ var_1_9) + var_1_8)) ? ((var_1_11 == var_1_4) ? (var_1_10 == ((unsigned long int) 0u)) : 1) : 1)) && (((var_1_2 <= var_1_11) || var_1_3) ? (((var_1_4 / var_1_15) > 25.25) ? (var_1_12 == ((double) 128.5)) : 1) : (var_1_12 == ((double) var_1_16)))) && (((min ((var_1_14 - var_1_18) , var_1_5)) < var_1_19) ? (var_1_3 ? (var_1_17 == ((double) 128.1)) : 1) : 1)) && (((var_1_5 * var_1_13) > var_1_1) ? (var_1_20 == ((unsigned char) (abs (max ((var_1_21 - var_1_14) , (var_1_22 + 8)))))) : 1)) && (((var_1_17 + var_1_4) <= var_1_2) ? ((var_1_8 >= var_1_7) ? (var_1_23 == ((unsigned long int) var_1_9)) : 1) : 1)
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
