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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch195functionizing.c", 13, "reach_error"); }
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
void functionized0(signed long int);
void functionized1(float, signed long int, double, float, signed char, double, double);
void functionized2(float, double);
unsigned char functionized3(signed char, signed short int);
unsigned char functionized4(void);
signed long int functionized5(signed char);
void functionized6(signed char, signed char, signed short int);
void functionized7(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -1;
signed long int var_1_2 = 1000000000;
float var_1_3 = 25.6;
unsigned char var_1_4 = 0;
signed long int var_1_5 = -5;
float var_1_6 = 7.8;
float var_1_7 = 4.2;
double var_1_8 = 3.95;
double var_1_9 = 50.4;
float var_1_10 = 32.5;
float var_1_11 = 3.8;
float var_1_12 = 32.4;
unsigned short int var_1_13 = 2;
signed short int var_1_14 = 100;
unsigned short int var_1_15 = 100;
signed char var_1_16 = -50;
signed char var_1_17 = 50;
signed char var_1_18 = -8;
signed char var_1_19 = -64;
signed long int var_1_21 = 1;
float var_1_22 = 5.1;
unsigned short int var_1_23 = 1;
unsigned long int var_1_24 = 16;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(signed long int localFunctionVar0) {
	if (128 >= (var_1_2 * 1)) {
		var_1_1 = localFunctionVar0;
	}
}
void functionized1(float functionized1_localFunctionVar0, signed long int functionized1_localFunctionVar1, double functionized1_localFunctionVar2, float functionized1_localFunctionVar3, signed char functionized1_localFunctionVar4, double functionized1_localFunctionVar5, double localFunctionVar6) {
	if (var_1_4) {
		if ((var_1_2 | functionized1_localFunctionVar4) <= functionized1_localFunctionVar1) {
			var_1_3 = ((10000.6f - functionized1_localFunctionVar0) + functionized1_localFunctionVar3);
		} else {
			var_1_3 = functionized1_localFunctionVar0;
		}
	} else {
		if (((functionized1_localFunctionVar0 - functionized1_localFunctionVar2) / (max (functionized1_localFunctionVar5 , localFunctionVar6))) == functionized1_localFunctionVar3) {
			var_1_3 = functionized1_localFunctionVar3;
		}
	}
}
void functionized2(float functionized2_localFunctionVar0, double functionized2_localFunctionVar1) {
	if ((var_1_3 / functionized2_localFunctionVar1) >= functionized2_localFunctionVar0) {
		if (var_1_4) {
			var_1_10 = (functionized2_localFunctionVar0 - var_1_11);
		} else {
			var_1_10 = ((functionized2_localFunctionVar0 + var_1_12) - var_1_11);
		}
	} else {
		var_1_10 = var_1_11;
	}
}
unsigned char functionized3(signed char functionized3_localFunctionVar0, signed short int functionized3_localFunctionVar1) {
	return ((functionized3_localFunctionVar0 ^ (var_1_5 / functionized3_localFunctionVar1)) <= var_1_2);
}
unsigned char functionized4(void) {
	return (var_1_6 < 0.375f);
}
signed long int functionized5(signed char functionized5_localFunctionVar0) {
	return (max (var_1_17 , functionized5_localFunctionVar0));
}
void functionized6(signed char functionized6_localFunctionVar0, signed char functionized6_localFunctionVar1, signed short int functionized6_localFunctionVar2) {
	if (((min (functionized6_localFunctionVar1 , functionized6_localFunctionVar2)) >= (var_1_21 * var_1_18)) && var_1_4) {
		if (var_1_4) {
			var_1_19 = var_1_18;
		} else {
			var_1_19 = functionized6_localFunctionVar0;
		}
	}
}
void functionized7(void) {
	var_1_24 = var_1_23;
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch195functionizing
	functionized0(4);


	// From: Req2Batch195functionizing
	functionized1(var_1_6, var_1_5, var_1_8, var_1_7, var_1_1, var_1_9, 3.5);


	// From: Req3Batch195functionizing
	functionized2(var_1_6, var_1_9);


	// From: Req4Batch195functionizing
	if (functionized3(var_1_1, var_1_14)) {
		var_1_13 = var_1_15;
	}


	// From: Req5Batch195functionizing
	if (functionized4()) {
		var_1_16 = functionized5(var_1_18);
	}


	// From: Req6Batch195functionizing
	functionized6(var_1_17, var_1_1, var_1_14);


	// From: Req7Batch195functionizing
	if (var_1_4) {
		var_1_22 = (min (var_1_7 , var_1_6));
	}


	// From: Req8Batch195functionizing
	var_1_23 = var_1_15;


	// From: Req9Batch195functionizing
	functionized7();
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	assume_abort_if_not(var_1_9 != 0.0F);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -32768);
	assume_abort_if_not(var_1_14 <= 32767);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -127);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= -2147483648);
	assume_abort_if_not(var_1_21 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((128 >= (var_1_2 * 1)) ? (var_1_1 == ((signed char) 4)) : 1) && (var_1_4 ? (((var_1_2 | var_1_1) <= var_1_5) ? (var_1_3 == ((float) ((10000.6f - var_1_6) + var_1_7))) : (var_1_3 == ((float) var_1_6))) : ((((var_1_6 - var_1_8) / (max (var_1_9 , 3.5))) == var_1_7) ? (var_1_3 == ((float) var_1_7)) : 1))) && (((var_1_3 / var_1_9) >= var_1_6) ? (var_1_4 ? (var_1_10 == ((float) (var_1_6 - var_1_11))) : (var_1_10 == ((float) ((var_1_6 + var_1_12) - var_1_11)))) : (var_1_10 == ((float) var_1_11)))) && (((var_1_1 ^ (var_1_5 / var_1_14)) <= var_1_2) ? (var_1_13 == ((unsigned short int) var_1_15)) : 1)) && ((var_1_6 < 0.375f) ? (var_1_16 == ((signed char) (max (var_1_17 , var_1_18)))) : 1)) && ((((min (var_1_1 , var_1_14)) >= (var_1_21 * var_1_18)) && var_1_4) ? (var_1_4 ? (var_1_19 == ((signed char) var_1_18)) : (var_1_19 == ((signed char) var_1_17))) : 1)) && (var_1_4 ? (var_1_22 == ((float) (min (var_1_7 , var_1_6)))) : 1)) && (var_1_23 == ((unsigned short int) var_1_15))) && (var_1_24 == ((unsigned long int) var_1_23))
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
