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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch8functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void functionized0(float, unsigned char, double, unsigned long int);
void functionized1(signed long int, unsigned short int, signed long int);
signed long int functionized2(unsigned char);
signed long int functionized3(unsigned char);
signed long int functionized4();
signed long int functionized5(unsigned char, unsigned char, unsigned char);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 999999999.675;
signed long int var_1_2 = 50;
signed long int var_1_3 = 8;
signed long int var_1_4 = -5;
float var_1_5 = 7.875;
float var_1_6 = 99.04;
signed long int var_1_7 = -2;
signed long int var_1_8 = 64;
unsigned long int var_1_9 = 1;
double var_1_10 = 63.25;
unsigned char var_1_11 = 0;
unsigned long int var_1_12 = 16;
unsigned short int var_1_13 = 0;
unsigned short int var_1_14 = 0;
unsigned short int var_1_15 = 17766;
unsigned short int var_1_16 = 28149;
unsigned short int var_1_17 = 10;
unsigned short int var_1_18 = 5;
unsigned char var_1_19 = 4;
unsigned char var_1_20 = 50;
unsigned char var_1_21 = 64;
unsigned char var_1_22 = 50;
unsigned char var_1_23 = 5;
unsigned char var_1_24 = 128;
signed long int var_1_25 = -16;
unsigned char var_1_26 = 0;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(float functionized0_localFunctionVar0, unsigned char functionized0_localFunctionVar1, double functionized0_localFunctionVar2, unsigned long int functionized0_localFunctionVar3) {
	if (((functionized0_localFunctionVar0 * var_1_5) / functionized0_localFunctionVar2) > var_1_1) {
		if (functionized0_localFunctionVar1) {
			var_1_9 = functionized0_localFunctionVar3;
		} else {
			var_1_9 = functionized0_localFunctionVar3;
		}
	}
}
void functionized1(signed long int functionized1_localFunctionVar0, unsigned short int functionized1_localFunctionVar1, signed long int functionized1_localFunctionVar2) {
	if (functionized1_localFunctionVar0 < functionized1_localFunctionVar2) {
		var_1_13 = (var_1_14 + ((max (functionized1_localFunctionVar1 , var_1_16)) - (var_1_17 + var_1_18)));
	}
}
signed long int functionized2(unsigned char functionized2_localFunctionVar0) {
	return ((32 + var_1_20) + functionized2_localFunctionVar0);
}
signed long int functionized3(unsigned char functionized3_localFunctionVar0) {
	return (var_1_22 + functionized3_localFunctionVar0);
}
signed long int functionized4() {
	return (var_1_24 - var_1_23);
}
signed long int functionized5(unsigned char functionized5_localFunctionVar0, unsigned char functionized5_localFunctionVar1, unsigned char functionized5_localFunctionVar2) {
	return (max ((min (functionized5_localFunctionVar0 , functionized5_localFunctionVar1)) , functionized5_localFunctionVar2));
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch8functionizing
	if (var_1_2 == (var_1_3 % var_1_4)) {
		var_1_1 = (var_1_5 - var_1_6);
	}


	// From: Req2Batch8functionizing
	if (var_1_1 >= var_1_6) {
		var_1_7 = var_1_8;
	}


	// From: Req3Batch8functionizing
	functionized0(var_1_6, var_1_11, var_1_10, var_1_12);


	// From: Req4Batch8functionizing
	functionized1(var_1_2, var_1_15, var_1_3);


	// From: Req5Batch8functionizing
	if (var_1_10 == var_1_1) {
		if (var_1_11) {
			var_1_19 = (functionized2(var_1_21) - functionized3(var_1_23));
		} else {
			var_1_19 = functionized4();
		}
	} else {
		var_1_19 = var_1_24;
	}


	// From: Req6Batch8functionizing
	if ((25.3 * var_1_5) != var_1_1) {
		if (var_1_11) {
			if (var_1_15 <= var_1_12) {
				var_1_25 = var_1_14;
			}
		} else {
			var_1_25 = var_1_22;
		}
	} else {
		var_1_25 = var_1_20;
	}


	// From: Req7Batch8functionizing
	if (var_1_25 < (var_1_21 / var_1_20)) {
		if (var_1_25 > var_1_18) {
			var_1_26 = (functionized5(var_1_22, var_1_24, var_1_23));
		} else {
			var_1_26 = var_1_22;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483647);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 16383);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 8192);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 8191);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 32);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 64);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 64);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
}



void updateLastVariables() {
}

int property() {
	return (((((((var_1_2 == (var_1_3 % var_1_4)) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : 1) && ((var_1_1 >= var_1_6) ? (var_1_7 == ((signed long int) var_1_8)) : 1)) && ((((var_1_6 * var_1_5) / var_1_10) > var_1_1) ? (var_1_11 ? (var_1_9 == ((unsigned long int) var_1_12)) : (var_1_9 == ((unsigned long int) var_1_12))) : 1)) && ((var_1_2 < var_1_3) ? (var_1_13 == ((unsigned short int) (var_1_14 + ((max (var_1_15 , var_1_16)) - (var_1_17 + var_1_18))))) : 1)) && ((var_1_10 == var_1_1) ? (var_1_11 ? (var_1_19 == ((unsigned char) (((32 + var_1_20) + var_1_21) - (var_1_22 + var_1_23)))) : (var_1_19 == ((unsigned char) (var_1_24 - var_1_23)))) : (var_1_19 == ((unsigned char) var_1_24)))) && (((25.3 * var_1_5) != var_1_1) ? (var_1_11 ? ((var_1_15 <= var_1_12) ? (var_1_25 == ((signed long int) var_1_14)) : 1) : (var_1_25 == ((signed long int) var_1_22))) : (var_1_25 == ((signed long int) var_1_20)))) && ((var_1_25 < (var_1_21 / var_1_20)) ? ((var_1_25 > var_1_18) ? (var_1_26 == ((unsigned char) (max ((min (var_1_22 , var_1_24)) , var_1_23)))) : (var_1_26 == ((unsigned char) var_1_22))) : 1)
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
