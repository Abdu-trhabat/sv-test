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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch134functionizing.c", 13, "reach_error"); }
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
signed long int functionized1(unsigned short int);
void functionized2(void);
void functionized3(unsigned short int, signed short int, unsigned short int, signed long int, signed long int);
void functionized4(unsigned char);
float functionized5(float);
void functionized6(unsigned char, float);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 64;
signed short int var_1_2 = 8;
signed short int var_1_3 = -1;
signed short int var_1_4 = 32;
signed short int var_1_5 = 10;
unsigned short int var_1_6 = 0;
unsigned short int var_1_7 = 256;
unsigned short int var_1_8 = 50;
unsigned long int var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 32;
signed long int var_1_12 = 256;
signed long int var_1_13 = 1;
unsigned char var_1_14 = 5;
signed long int var_1_15 = -100;
float var_1_16 = 32.2;
float var_1_17 = 7.5;
float var_1_18 = 8.5;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 1;
unsigned long int var_1_21 = 256;

// Calibration values

// Last'ed variables

// Additional functions
signed long int functionized0(void) {
	return (abs (var_1_4));
}
signed long int functionized1(unsigned short int functionized1_localFunctionVar0) {
	return ((abs (functionized1_localFunctionVar0)) + var_1_8);
}
void functionized2(void) {
	if (var_1_10) {
		var_1_9 = var_1_6;
	}
}
void functionized3(unsigned short int functionized3_localFunctionVar0, signed short int functionized3_localFunctionVar1, unsigned short int functionized3_localFunctionVar2, signed long int functionized3_localFunctionVar3, signed long int localFunctionVar4) {
	if ((functionized3_localFunctionVar1 + (functionized3_localFunctionVar2 - var_1_8)) < (functionized3_localFunctionVar0 - var_1_12)) {
		if (16 >= functionized3_localFunctionVar3) {
			var_1_11 = var_1_14;
		} else {
			var_1_11 = localFunctionVar4;
		}
	} else {
		var_1_11 = 0;
	}
}
void functionized4(unsigned char functionized4_localFunctionVar0) {
	if (functionized4_localFunctionVar0) {
		var_1_15 = var_1_6;
	}
}
float functionized5(float functionized5_localFunctionVar0) {
	return (max (var_1_17 , functionized5_localFunctionVar0));
}
void functionized6(unsigned char functionized6_localFunctionVar0, float functionized6_localFunctionVar1) {
	if (var_1_10 && functionized6_localFunctionVar0) {
		if (var_1_10) {
			var_1_16 = var_1_17;
		}
	} else {
		var_1_16 = functionized6_localFunctionVar1;
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch134functionizing
	if (var_1_2 == (var_1_3 / functionized0())) {
		var_1_1 = var_1_5;
	}


	// From: Req2Batch134functionizing
	if (((min (var_1_2 , 50)) + (var_1_4 + var_1_3)) != var_1_5) {
		if (var_1_1 > var_1_3) {
			var_1_6 = functionized1(var_1_7);
		} else {
			var_1_6 = (var_1_7 + var_1_8);
		}
	} else {
		var_1_6 = var_1_8;
	}


	// From: Req3Batch134functionizing
	if (var_1_3 >= var_1_8) {
		functionized2();
	}


	// From: Req4Batch134functionizing
	functionized3(var_1_6, var_1_5, var_1_7, var_1_13, 8);


	// From: Req5Batch134functionizing
	if (var_1_10 || (! 0)) {
		functionized4(var_1_10);
	}


	// From: Req6Batch134functionizing
	if (var_1_8 <= var_1_2) {
		if (! var_1_10) {
			var_1_16 = functionized5(var_1_18);
		}
	} else {
		functionized6(var_1_19, var_1_18);
	}


	// From: Req7Batch134functionizing
	var_1_20 = var_1_7;


	// From: Req8Batch134functionizing
	var_1_21 = var_1_7;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32767);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32767);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((var_1_2 == (var_1_3 / (abs (var_1_4)))) ? (var_1_1 == ((signed short int) var_1_5)) : 1) && ((((min (var_1_2 , 50)) + (var_1_4 + var_1_3)) != var_1_5) ? ((var_1_1 > var_1_3) ? (var_1_6 == ((unsigned short int) ((abs (var_1_7)) + var_1_8))) : (var_1_6 == ((unsigned short int) (var_1_7 + var_1_8)))) : (var_1_6 == ((unsigned short int) var_1_8)))) && ((var_1_3 >= var_1_8) ? (var_1_10 ? (var_1_9 == ((unsigned long int) var_1_6)) : 1) : 1)) && (((var_1_5 + (var_1_7 - var_1_8)) < (var_1_6 - var_1_12)) ? ((16 >= var_1_13) ? (var_1_11 == ((unsigned char) var_1_14)) : (var_1_11 == ((unsigned char) 8))) : (var_1_11 == ((unsigned char) 0)))) && ((var_1_10 || (! 0)) ? (var_1_10 ? (var_1_15 == ((signed long int) var_1_6)) : 1) : 1)) && ((var_1_8 <= var_1_2) ? ((! var_1_10) ? (var_1_16 == ((float) (max (var_1_17 , var_1_18)))) : 1) : ((var_1_10 && var_1_19) ? (var_1_10 ? (var_1_16 == ((float) var_1_17)) : 1) : (var_1_16 == ((float) var_1_18))))) && (var_1_20 == ((unsigned long int) var_1_7))) && (var_1_21 == ((unsigned long int) var_1_7))
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
