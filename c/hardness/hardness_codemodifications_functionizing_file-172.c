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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch172functionizing.c", 13, "reach_error"); }
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
void functionized0(unsigned long int, signed char, unsigned char);
void functionized1(signed char, unsigned long int);
void functionized2(unsigned long int, signed char);
signed long int functionized3(signed short int, signed short int);
void functionized4(float, signed short int, float, signed long int);
signed long int functionized5(signed char, signed long int);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 10;
signed char var_1_2 = 32;
signed char var_1_3 = 5;
unsigned char var_1_4 = 0;
unsigned long int var_1_5 = 100;
signed char var_1_6 = 2;
signed char var_1_7 = -32;
signed short int var_1_8 = -1;
unsigned char var_1_9 = 1;
unsigned long int var_1_10 = 128;
signed short int var_1_11 = 64;
signed short int var_1_12 = 5;
signed short int var_1_13 = 0;
float var_1_14 = 5.5;
signed long int var_1_15 = 2;
signed long int var_1_16 = 2;
float var_1_17 = 128.5;
float var_1_18 = -0.5;
float var_1_19 = 50.4;
float var_1_20 = 16.75;
signed char var_1_21 = -2;
signed char var_1_22 = 32;
signed char var_1_23 = 5;
unsigned char var_1_24 = 16;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(unsigned long int functionized0_localFunctionVar0, signed char functionized0_localFunctionVar1, unsigned char functionized0_localFunctionVar2) {
	if ((functionized0_localFunctionVar1 >= (abs (var_1_3))) || functionized0_localFunctionVar2) {
		var_1_1 = functionized0_localFunctionVar0;
	}
}
void functionized1(signed char functionized1_localFunctionVar0, unsigned long int functionized1_localFunctionVar1) {
	if (functionized1_localFunctionVar1 > var_1_5) {
		var_1_6 = functionized1_localFunctionVar0;
	}
}
void functionized2(unsigned long int functionized2_localFunctionVar0, signed char functionized2_localFunctionVar1) {
	if (var_1_4 && var_1_9) {
		if (var_1_5 == (var_1_1 + (~ functionized2_localFunctionVar0))) {
			var_1_8 = var_1_2;
		} else {
			var_1_8 = functionized2_localFunctionVar1;
		}
	} else {
		var_1_8 = var_1_7;
	}
}
signed long int functionized3(signed short int functionized3_localFunctionVar0, signed short int functionized3_localFunctionVar1) {
	return (max ((functionized3_localFunctionVar1 - functionized3_localFunctionVar0) , var_1_7));
}
void functionized4(float functionized4_localFunctionVar0, signed short int functionized4_localFunctionVar1, float functionized4_localFunctionVar2, signed long int functionized4_localFunctionVar3) {
	if (functionized4_localFunctionVar1 > (var_1_13 >> (functionized4_localFunctionVar3 + var_1_16))) {
		var_1_14 = (abs (functionized4_localFunctionVar0 + functionized4_localFunctionVar2));
	}
}
signed long int functionized5(signed char functionized5_localFunctionVar0, signed long int functionized5_localFunctionVar1) {
	return ((var_1_16 + functionized5_localFunctionVar1) - (var_1_22 + functionized5_localFunctionVar0));
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch172functionizing
	functionized0(var_1_5, var_1_2, var_1_4);


	// From: Req2Batch172functionizing
	functionized1(var_1_7, var_1_1);


	// From: Req3Batch172functionizing
	functionized2(var_1_10, var_1_3);


	// From: Req4Batch172functionizing
	if (var_1_2 != var_1_5) {
		var_1_11 = (functionized3(var_1_13, var_1_12));
	}


	// From: Req5Batch172functionizing
	functionized4(var_1_17, var_1_11, var_1_18, var_1_15);


	// From: Req6Batch172functionizing
	if (((16 * var_1_7) | -1) >= var_1_3) {
		var_1_19 = (var_1_17 + var_1_18);
	} else {
		if ((var_1_14 / 1.00000000000005E13f) < 1.875f) {
			var_1_19 = (15.45f - var_1_20);
		}
	}


	// From: Req7Batch172functionizing
	if (25 < var_1_1) {
		var_1_21 = (functionized5(var_1_23, var_1_15));
	} else {
		var_1_21 = (min (var_1_15 , (var_1_22 - var_1_16)));
	}


	// From: Req8Batch172functionizing
	var_1_24 = var_1_16;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -127);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 4294967295);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 7);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 7);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((var_1_2 >= (abs (var_1_3))) || var_1_4) ? (var_1_1 == ((unsigned long int) var_1_5)) : 1) && ((var_1_1 > var_1_5) ? (var_1_6 == ((signed char) var_1_7)) : 1)) && ((var_1_4 && var_1_9) ? ((var_1_5 == (var_1_1 + (~ var_1_10))) ? (var_1_8 == ((signed short int) var_1_2)) : (var_1_8 == ((signed short int) var_1_3))) : (var_1_8 == ((signed short int) var_1_7)))) && ((var_1_2 != var_1_5) ? (var_1_11 == ((signed short int) (max ((var_1_12 - var_1_13) , var_1_7)))) : 1)) && ((var_1_11 > (var_1_13 >> (var_1_15 + var_1_16))) ? (var_1_14 == ((float) (abs (var_1_17 + var_1_18)))) : 1)) && ((((16 * var_1_7) | -1) >= var_1_3) ? (var_1_19 == ((float) (var_1_17 + var_1_18))) : (((var_1_14 / 1.00000000000005E13f) < 1.875f) ? (var_1_19 == ((float) (15.45f - var_1_20))) : 1))) && ((25 < var_1_1) ? (var_1_21 == ((signed char) ((var_1_16 + var_1_15) - (var_1_22 + var_1_23)))) : (var_1_21 == ((signed char) (min (var_1_15 , (var_1_22 - var_1_16))))))) && (var_1_24 == ((unsigned char) var_1_16))
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
