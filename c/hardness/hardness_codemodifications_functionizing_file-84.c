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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch84functionizing.c", 13, "reach_error"); }
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
signed long int functionized0(void);
unsigned long int functionized1(void);
void functionized2(signed char);
unsigned char functionized3(signed long int, unsigned char, signed long int, signed char, signed long int);
signed long int functionized4(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -10;
unsigned char var_1_2 = 1;
signed char var_1_3 = -16;
signed char var_1_4 = 50;
signed char var_1_5 = 4;
unsigned long int var_1_6 = 50;
signed long int var_1_7 = -8;
signed long int var_1_8 = -4;
signed char var_1_9 = 50;
unsigned char var_1_10 = 128;
unsigned char var_1_11 = 5;
unsigned long int var_1_12 = 10;
signed char var_1_13 = 16;
signed long int var_1_14 = 1;
unsigned short int var_1_15 = 128;
signed long int var_1_16 = 2;
unsigned short int var_1_17 = 61498;
unsigned long int var_1_18 = 1;
unsigned char var_1_19 = 0;
double var_1_20 = 4.9;
double var_1_21 = 1.5;

// Calibration values

// Last'ed variables

// Additional functions
signed long int functionized0(void) {
	return (var_1_3 + (1 - var_1_4));
}
unsigned long int functionized1(void) {
	return (abs (32u));
}
void functionized2(signed char functionized2_localFunctionVar0) {
	if ((~ var_1_3) < var_1_14) {
		var_1_13 = (max ((functionized2_localFunctionVar0 + var_1_3) , -5));
	}
}
unsigned char functionized3(signed long int functionized3_localFunctionVar0, unsigned char functionized3_localFunctionVar1, signed long int functionized3_localFunctionVar2, signed char functionized3_localFunctionVar3, signed long int functionized3_localFunctionVar4) {
	return (((functionized3_localFunctionVar3 + functionized3_localFunctionVar4) & functionized3_localFunctionVar2) <= (var_1_10 - (min (functionized3_localFunctionVar1 , functionized3_localFunctionVar0))));
}
signed long int functionized4(void) {
	return (max ((max (var_1_10 , (var_1_17 - var_1_4))) , var_1_11));
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch84functionizing
	if (var_1_2) {
		var_1_1 = (min (functionized0() , var_1_5));
	}


	// From: Req2Batch84functionizing
	if (-4 > (var_1_5 / (max (var_1_7 , var_1_8)))) {
		if (var_1_4 < -16) {
			var_1_6 = functionized1();
		}
	}


	// From: Req3Batch84functionizing
	if (var_1_6 <= (var_1_8 & var_1_4)) {
		if (((- 8) / (var_1_10 - var_1_11)) >= var_1_3) {
			var_1_9 = var_1_3;
		}
	} else {
		var_1_9 = var_1_4;
	}


	// From: Req4Batch84functionizing
	if (var_1_3 <= var_1_1) {
		var_1_12 = var_1_4;
	} else {
		var_1_12 = (min ((var_1_11 + var_1_4) , var_1_10));
	}


	// From: Req5Batch84functionizing
	functionized2(var_1_4);


	// From: Req6Batch84functionizing
	if (functionized3(var_1_16, var_1_11, var_1_7, var_1_4, var_1_14)) {
		var_1_15 = (var_1_11 + 64);
	} else {
		var_1_15 = functionized4();
	}


	// From: Req7Batch84functionizing
	var_1_18 = var_1_17;


	// From: Req8Batch84functionizing
	var_1_19 = 0;


	// From: Req9Batch84functionizing
	var_1_20 = var_1_21;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 255);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 126);
	assume_abort_if_not(var_1_11 != 127);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 32767);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((var_1_2 ? (var_1_1 == ((signed char) (min ((var_1_3 + (1 - var_1_4)) , var_1_5)))) : 1) && ((-4 > (var_1_5 / (max (var_1_7 , var_1_8)))) ? ((var_1_4 < -16) ? (var_1_6 == ((unsigned long int) (abs (32u)))) : 1) : 1)) && ((var_1_6 <= (var_1_8 & var_1_4)) ? ((((- 8) / (var_1_10 - var_1_11)) >= var_1_3) ? (var_1_9 == ((signed char) var_1_3)) : 1) : (var_1_9 == ((signed char) var_1_4)))) && ((var_1_3 <= var_1_1) ? (var_1_12 == ((unsigned long int) var_1_4)) : (var_1_12 == ((unsigned long int) (min ((var_1_11 + var_1_4) , var_1_10)))))) && (((~ var_1_3) < var_1_14) ? (var_1_13 == ((signed char) (max ((var_1_4 + var_1_3) , -5)))) : 1)) && ((((var_1_4 + var_1_14) & var_1_7) <= (var_1_10 - (min (var_1_11 , var_1_16)))) ? (var_1_15 == ((unsigned short int) (var_1_11 + 64))) : (var_1_15 == ((unsigned short int) (max ((max (var_1_10 , (var_1_17 - var_1_4))) , var_1_11)))))) && (var_1_18 == ((unsigned long int) var_1_17))) && (var_1_19 == ((unsigned char) 0))) && (var_1_20 == ((double) var_1_21))
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
