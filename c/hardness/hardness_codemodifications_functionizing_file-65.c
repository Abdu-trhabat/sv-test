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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch65functionizing.c", 13, "reach_error"); }
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
void functionized0(signed short int, signed short int, unsigned short int);
void functionized1(unsigned short int, unsigned char);
unsigned char functionized2(unsigned char);
void functionized3(signed char, unsigned char, unsigned char);
void functionized4(double);
void functionized5(signed char, unsigned char, signed char);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 4;
unsigned short int var_1_2 = 16;
unsigned short int var_1_3 = 100;
unsigned short int var_1_4 = 10;
signed short int var_1_5 = 256;
signed short int var_1_6 = -10;
signed short int var_1_7 = -25;
unsigned short int var_1_8 = 64;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned short int var_1_11 = 256;
unsigned short int var_1_12 = 0;
unsigned short int var_1_13 = 64;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
signed char var_1_16 = 50;
float var_1_17 = 8.25;
float var_1_18 = 1.25;
signed char var_1_19 = -100;
double var_1_20 = 100000000.8;
double var_1_21 = 15.125;
double var_1_22 = 99.22;
signed long int var_1_23 = -16;
unsigned char var_1_24 = 1;
signed char var_1_25 = 10;
signed char var_1_26 = 16;
unsigned char var_1_27 = 0;
double var_1_28 = 5.5;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(signed short int functionized0_localFunctionVar0, signed short int functionized0_localFunctionVar1, unsigned short int functionized0_localFunctionVar2) {
	if ((functionized0_localFunctionVar2 <= var_1_3) || (var_1_4 > 4)) {
		var_1_1 = (max ((functionized0_localFunctionVar1 + (functionized0_localFunctionVar0 + var_1_7)) , -100));
	} else {
		var_1_1 = var_1_7;
	}
}
void functionized1(unsigned short int functionized1_localFunctionVar0, unsigned char functionized1_localFunctionVar1) {
	if (functionized1_localFunctionVar1) {
		if (var_1_10) {
			var_1_8 = (max ((var_1_11 + var_1_12) , functionized1_localFunctionVar0));
		}
	}
}
unsigned char functionized2(unsigned char functionized2_localFunctionVar0) {
	return (functionized2_localFunctionVar0 || var_1_15);
}
void functionized3(signed char functionized3_localFunctionVar0, unsigned char functionized3_localFunctionVar1, unsigned char functionized3_localFunctionVar2) {
	if ((! (var_1_10 || functionized3_localFunctionVar1)) && functionized3_localFunctionVar2) {
		if ((max (2.75f , (min (var_1_17 , 999999.95f)))) != var_1_18) {
			var_1_16 = 10;
		} else {
			var_1_16 = functionized3_localFunctionVar0;
		}
	} else {
		var_1_16 = functionized3_localFunctionVar0;
	}
}
void functionized4(double functionized4_localFunctionVar0) {
	var_1_20 = (functionized4_localFunctionVar0 - (var_1_22 + 1.5));
}
void functionized5(signed char functionized5_localFunctionVar0, unsigned char functionized5_localFunctionVar1, signed char functionized5_localFunctionVar2) {
	var_1_24 = ((functionized5_localFunctionVar0 <= (var_1_25 - functionized5_localFunctionVar2)) && functionized5_localFunctionVar1);
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch65functionizing
	functionized0(var_1_6, var_1_5, var_1_2);


	// From: Req2Batch65functionizing
	functionized1(var_1_13, var_1_9);


	// From: Req3Batch65functionizing
	if (var_1_5 > (var_1_4 + (var_1_6 ^ var_1_7))) {
		var_1_14 = functionized2(var_1_9);
	}


	// From: Req4Batch65functionizing
	if (var_1_1 < var_1_4) {
		functionized3(var_1_19, var_1_9, var_1_14);
	} else {
		var_1_16 = 100;
	}


	// From: Req5Batch65functionizing
	functionized4(var_1_21);


	// From: Req6Batch65functionizing
	if (((max (var_1_3 , var_1_5)) | var_1_6) >= var_1_8) {
		var_1_23 = (5 - var_1_12);
	} else {
		var_1_23 = (max (var_1_11 , var_1_16));
	}


	// From: Req7Batch65functionizing
	functionized5(var_1_16, var_1_27, var_1_26);


	// From: Req8Batch65functionizing
	var_1_28 = var_1_21;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65535);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -16383);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -8191);
	assume_abort_if_not(var_1_6 <= 8192);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -8191);
	assume_abort_if_not(var_1_7 <= 8191);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -127);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((var_1_2 <= var_1_3) || (var_1_4 > 4)) ? (var_1_1 == ((signed short int) (max ((var_1_5 + (var_1_6 + var_1_7)) , -100)))) : (var_1_1 == ((signed short int) var_1_7))) && (var_1_9 ? (var_1_10 ? (var_1_8 == ((unsigned short int) (max ((var_1_11 + var_1_12) , var_1_13)))) : 1) : 1)) && ((var_1_5 > (var_1_4 + (var_1_6 ^ var_1_7))) ? (var_1_14 == ((unsigned char) (var_1_9 || var_1_15))) : 1)) && ((var_1_1 < var_1_4) ? (((! (var_1_10 || var_1_9)) && var_1_14) ? (((max (2.75f , (min (var_1_17 , 999999.95f)))) != var_1_18) ? (var_1_16 == ((signed char) 10)) : (var_1_16 == ((signed char) var_1_19))) : (var_1_16 == ((signed char) var_1_19))) : (var_1_16 == ((signed char) 100)))) && (var_1_20 == ((double) (var_1_21 - (var_1_22 + 1.5))))) && ((((max (var_1_3 , var_1_5)) | var_1_6) >= var_1_8) ? (var_1_23 == ((signed long int) (5 - var_1_12))) : (var_1_23 == ((signed long int) (max (var_1_11 , var_1_16)))))) && (var_1_24 == ((unsigned char) ((var_1_16 <= (var_1_25 - var_1_26)) && var_1_27)))) && (var_1_28 == ((double) var_1_21))
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
