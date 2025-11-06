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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch97functionizing.c", 13, "reach_error"); }
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
void functionized0(unsigned short int, unsigned long int);
float functionized1(float);
signed long int functionized2(unsigned short int);
void functionized3(unsigned char, float, signed short int, float);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 2;
unsigned short int var_1_2 = 16;
unsigned short int var_1_3 = 32;
unsigned char var_1_4 = 1;
signed char var_1_5 = 8;
signed char var_1_6 = 25;
float var_1_7 = 128.375;
double var_1_8 = -0.2;
float var_1_9 = 5.8;
float var_1_10 = 2.2640000000000002;
float var_1_11 = 5.4;
unsigned char var_1_12 = 1;
signed short int var_1_13 = 100;
signed short int var_1_14 = -64;
unsigned char var_1_15 = 1;
unsigned long int var_1_16 = 0;
unsigned char var_1_17 = 50;
unsigned long int var_1_18 = 1189571775;
float var_1_19 = 10000.4;
float var_1_20 = 255.6;
float var_1_21 = 64.25;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(unsigned short int functionized0_localFunctionVar0, unsigned long int localFunctionVar1) {
	if ((max (var_1_2 , var_1_1)) > (functionized0_localFunctionVar0 * localFunctionVar1)) {
		if (((32 * -25) | var_1_2) >= var_1_1) {
			if (functionized0_localFunctionVar0 > var_1_1) {
				var_1_5 = var_1_6;
			}
		}
	} else {
		var_1_5 = var_1_6;
	}
}
float functionized1(float functionized1_localFunctionVar0) {
	return (var_1_9 + functionized1_localFunctionVar0);
}
signed long int functionized2(unsigned short int functionized2_localFunctionVar0) {
	return (var_1_3 + functionized2_localFunctionVar0);
}
void functionized3(unsigned char functionized3_localFunctionVar0, float functionized3_localFunctionVar1, signed short int functionized3_localFunctionVar2, float localFunctionVar3) {
	if (var_1_15) {
		if (functionized3_localFunctionVar0 < functionized3_localFunctionVar2) {
			var_1_19 = ((var_1_20 + functionized3_localFunctionVar1) - 9.125f);
		} else {
			var_1_19 = (localFunctionVar3 - var_1_20);
		}
	} else {
		var_1_19 = var_1_20;
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch97functionizing
	if ((var_1_2 + var_1_3) < -200) {
		if (var_1_4) {
			if (var_1_2 > (- var_1_3)) {
				var_1_1 = var_1_2;
			} else {
				var_1_1 = var_1_3;
			}
		} else {
			var_1_1 = 10u;
		}
	} else {
		var_1_1 = 0u;
	}


	// From: Req2Batch97functionizing
	functionized0(var_1_3, 2u);


	// From: Req3Batch97functionizing
	if ((127.75 <= var_1_8) && var_1_4) {
		var_1_7 = (max (functionized1(var_1_10) , var_1_11));
	}


	// From: Req4Batch97functionizing
	if ((var_1_13 / var_1_14) <= (var_1_6 * var_1_2)) {
		var_1_12 = var_1_15;
	}


	// From: Req5Batch97functionizing
	if (var_1_17 <= var_1_5) {
		var_1_16 = ((var_1_18 - var_1_3) + var_1_17);
	} else {
		var_1_16 = (min (var_1_17 , functionized2(var_1_2)));
	}


	// From: Req6Batch97functionizing
	functionized3(var_1_17, var_1_21, var_1_13, 0.19999999999999996f);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -127);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32768);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -32768);
	assume_abort_if_not(var_1_14 <= 32767);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 255);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 1073741823);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 + var_1_3) < -200) ? (var_1_4 ? ((var_1_2 > (- var_1_3)) ? (var_1_1 == ((unsigned long int) var_1_2)) : (var_1_1 == ((unsigned long int) var_1_3))) : (var_1_1 == ((unsigned long int) 10u))) : (var_1_1 == ((unsigned long int) 0u))) && (((max (var_1_2 , var_1_1)) > (var_1_3 * 2u)) ? ((((32 * -25) | var_1_2) >= var_1_1) ? ((var_1_3 > var_1_1) ? (var_1_5 == ((signed char) var_1_6)) : 1) : 1) : (var_1_5 == ((signed char) var_1_6)))) && (((127.75 <= var_1_8) && var_1_4) ? (var_1_7 == ((float) (max ((var_1_9 + var_1_10) , var_1_11)))) : 1)) && (((var_1_13 / var_1_14) <= (var_1_6 * var_1_2)) ? (var_1_12 == ((unsigned char) var_1_15)) : 1)) && ((var_1_17 <= var_1_5) ? (var_1_16 == ((unsigned long int) ((var_1_18 - var_1_3) + var_1_17))) : (var_1_16 == ((unsigned long int) (min (var_1_17 , (var_1_3 + var_1_2))))))) && (var_1_15 ? ((var_1_17 < var_1_13) ? (var_1_19 == ((float) ((var_1_20 + var_1_21) - 9.125f))) : (var_1_19 == ((float) (0.19999999999999996f - var_1_20)))) : (var_1_19 == ((float) var_1_20)))
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
