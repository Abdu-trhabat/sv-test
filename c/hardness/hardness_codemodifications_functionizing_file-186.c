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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch186functionizing.c", 13, "reach_error"); }
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
signed long int functionized0(signed short int, signed short int);
signed long int functionized1(unsigned char);
unsigned char functionized2(signed char, unsigned char);
void functionized3(unsigned long int, unsigned char, signed short int, unsigned char, signed char, unsigned long int);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -8;
signed short int var_1_2 = 10;
double var_1_3 = 7.7;
unsigned char var_1_4 = 0;
double var_1_5 = 128.125;
double var_1_6 = 3.75;
double var_1_7 = 10.2;
double var_1_8 = 10.022;
signed char var_1_9 = 32;
signed char var_1_10 = -32;
signed short int var_1_11 = 10000;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 16;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 128;
unsigned long int var_1_17 = 32;
signed short int var_1_18 = 100;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 3943582589;

// Calibration values

// Last'ed variables

// Additional functions
signed long int functionized0(signed short int functionized0_localFunctionVar0, signed short int functionized0_localFunctionVar1) {
	return (functionized0_localFunctionVar1 & functionized0_localFunctionVar0);
}
signed long int functionized1(unsigned char functionized1_localFunctionVar0) {
	return (min (functionized1_localFunctionVar0 , (max (var_1_14 , var_1_15))));
}
unsigned char functionized2(signed char functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1) {
	return (functionized2_localFunctionVar1 && ((functionized2_localFunctionVar0 > var_1_17) && var_1_19));
}
void functionized3(unsigned long int functionized3_localFunctionVar0, unsigned char functionized3_localFunctionVar1, signed short int functionized3_localFunctionVar2, unsigned char functionized3_localFunctionVar3, signed char functionized3_localFunctionVar4, unsigned long int localFunctionVar5) {
	if (((functionized3_localFunctionVar0 - functionized3_localFunctionVar3) / (localFunctionVar5 - var_1_16)) == functionized3_localFunctionVar1) {
		if ((min ((var_1_15 + var_1_11) , functionized3_localFunctionVar4)) >= ((functionized3_localFunctionVar3 ^ var_1_1) * var_1_14)) {
			var_1_18 = functionized3_localFunctionVar3;
		} else {
			var_1_18 = functionized3_localFunctionVar2;
		}
	} else {
		var_1_18 = var_1_16;
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch186functionizing
	var_1_1 = var_1_2;


	// From: Req2Batch186functionizing
	if (var_1_4 || (var_1_1 != (min (-10 , var_1_2)))) {
		var_1_3 = (min (var_1_5 , var_1_6));
	} else {
		var_1_3 = (var_1_7 + (128.6 + var_1_8));
	}


	// From: Req3Batch186functionizing
	if ((var_1_7 > (max (9.6 , var_1_6))) || (var_1_5 < var_1_3)) {
		var_1_9 = var_1_10;
	}


	// From: Req4Batch186functionizing
	if ((functionized0(var_1_2, var_1_1)) <= var_1_9) {
		if (var_1_9 <= var_1_2) {
			var_1_11 = var_1_2;
		}
	}


	// From: Req5Batch186functionizing
	if (var_1_4) {
		var_1_12 = functionized1(var_1_13);
	} else {
		if (var_1_14 != var_1_2) {
			var_1_12 = (var_1_16 - 2);
		} else {
			var_1_12 = 4;
		}
	}


	// From: Req6Batch186functionizing
	if (var_1_14 >= var_1_12) {
		var_1_17 = var_1_13;
	}


	// From: Req7Batch186functionizing
	if (functionized2(var_1_10, var_1_4)) {
		functionized3(var_1_20, var_1_13, var_1_2, var_1_12, var_1_9, 3761303906u);
	} else {
		var_1_18 = var_1_2;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32767);
	assume_abort_if_not(var_1_2 <= 32766);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -230584.3009213691400e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 2305843.009213691400e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967295);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_1 == ((signed short int) var_1_2)) && ((var_1_4 || (var_1_1 != (min (-10 , var_1_2)))) ? (var_1_3 == ((double) (min (var_1_5 , var_1_6)))) : (var_1_3 == ((double) (var_1_7 + (128.6 + var_1_8)))))) && (((var_1_7 > (max (9.6 , var_1_6))) || (var_1_5 < var_1_3)) ? (var_1_9 == ((signed char) var_1_10)) : 1)) && (((var_1_1 & var_1_2) <= var_1_9) ? ((var_1_9 <= var_1_2) ? (var_1_11 == ((signed short int) var_1_2)) : 1) : 1)) && (var_1_4 ? (var_1_12 == ((unsigned char) (min (var_1_13 , (max (var_1_14 , var_1_15)))))) : ((var_1_14 != var_1_2) ? (var_1_12 == ((unsigned char) (var_1_16 - 2))) : (var_1_12 == ((unsigned char) 4))))) && ((var_1_14 >= var_1_12) ? (var_1_17 == ((unsigned long int) var_1_13)) : 1)) && ((var_1_4 && ((var_1_10 > var_1_17) && var_1_19)) ? ((((var_1_20 - var_1_12) / (3761303906u - var_1_16)) == var_1_13) ? (((min ((var_1_15 + var_1_11) , var_1_9)) >= ((var_1_12 ^ var_1_1) * var_1_14)) ? (var_1_18 == ((signed short int) var_1_12)) : (var_1_18 == ((signed short int) var_1_2))) : (var_1_18 == ((signed short int) var_1_16))) : (var_1_18 == ((signed short int) var_1_2)))
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
