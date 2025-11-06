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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch143functionizing.c", 13, "reach_error"); }
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
void functionized0(float, unsigned short int, signed long int);
unsigned char functionized1(float);
unsigned char functionized2(unsigned short int);
void functionized3(signed long int);
signed long int functionized4(unsigned char);
void functionized5(unsigned char, float, float, unsigned char, float);
void functionized6(unsigned char, unsigned short int);
void functionized7(void);
void functionized8(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 0.02;
unsigned short int var_1_2 = 50;
signed long int var_1_3 = 5;
float var_1_4 = 32.2;
float var_1_5 = 10.25;
float var_1_6 = 49.4;
signed short int var_1_7 = 2;
signed long int var_1_8 = -2;
signed short int var_1_9 = -50;
unsigned char var_1_10 = 4;
unsigned char var_1_11 = 100;
unsigned char var_1_12 = 10;
unsigned char var_1_13 = 64;
signed short int var_1_14 = 100;
signed short int var_1_15 = 23466;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
signed long int var_1_18 = -8;
signed short int var_1_19 = 8;
signed short int var_1_20 = 10000;
signed short int var_1_21 = -10;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(float functionized0_localFunctionVar0, unsigned short int functionized0_localFunctionVar1, signed long int functionized0_localFunctionVar2) {
	if ((max (64 , functionized0_localFunctionVar1)) <= functionized0_localFunctionVar2) {
		var_1_1 = (var_1_4 - (var_1_5 + functionized0_localFunctionVar0));
	} else {
		if (var_1_5 == functionized0_localFunctionVar0) {
			var_1_1 = (functionized0_localFunctionVar0 + var_1_5);
		} else {
			var_1_1 = var_1_4;
		}
	}
}
unsigned char functionized1(float functionized1_localFunctionVar0) {
	return (var_1_6 > functionized1_localFunctionVar0);
}
unsigned char functionized2(unsigned short int functionized2_localFunctionVar0) {
	return (25 <= (max (var_1_3 , functionized2_localFunctionVar0)));
}
void functionized3(signed long int functionized3_localFunctionVar0) {
	if ((~ (var_1_2 ^ var_1_3)) <= functionized3_localFunctionVar0) {
		var_1_7 = 32;
	} else {
		var_1_7 = var_1_9;
	}
}
signed long int functionized4(unsigned char functionized4_localFunctionVar0) {
	return (4 + functionized4_localFunctionVar0);
}
void functionized5(unsigned char functionized5_localFunctionVar0, float functionized5_localFunctionVar1, float functionized5_localFunctionVar2, unsigned char functionized5_localFunctionVar3, float functionized5_localFunctionVar4) {
	if (var_1_2 > functionized5_localFunctionVar3) {
		var_1_16 = ((var_1_8 > var_1_7) && functionized5_localFunctionVar0);
	} else {
		var_1_16 = ((functionized5_localFunctionVar4 < (min (functionized5_localFunctionVar1 , functionized5_localFunctionVar2))) && functionized5_localFunctionVar0);
	}
}
void functionized6(unsigned char functionized6_localFunctionVar0, unsigned short int functionized6_localFunctionVar1) {
	if (var_1_9 <= -16) {
		var_1_18 = (abs ((var_1_11 + functionized6_localFunctionVar0) + functionized6_localFunctionVar1));
	}
}
void functionized7(void) {
	var_1_21 = var_1_9;
}
void functionized8(void) {
	var_1_22 = var_1_23;
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch143functionizing
	functionized0(var_1_6, var_1_2, var_1_3);


	// From: Req2Batch143functionizing
	if (functionized1(var_1_4)) {
		if (functionized2(var_1_2)) {
			functionized3(var_1_8);
		}
	}


	// From: Req3Batch143functionizing
	var_1_10 = (min (var_1_11 , var_1_12));


	// From: Req4Batch143functionizing
	var_1_13 = var_1_12;


	// From: Req5Batch143functionizing
	var_1_14 = ((var_1_15 - functionized4(var_1_13)) - var_1_12);


	// From: Req6Batch143functionizing
	functionized5(var_1_17, var_1_6, var_1_5, var_1_10, var_1_4);


	// From: Req7Batch143functionizing
	functionized6(var_1_10, var_1_2);


	// From: Req8Batch143functionizing
	var_1_19 = (((var_1_20 - var_1_10) + var_1_12) - var_1_13);


	// From: Req9Batch143functionizing
	functionized7();


	// From: Req10Batch143functionizing
	functionized8();
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32767);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 16382);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 8191);
	assume_abort_if_not(var_1_20 <= 16383);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((((max (64 , var_1_2)) <= var_1_3) ? (var_1_1 == ((float) (var_1_4 - (var_1_5 + var_1_6)))) : ((var_1_5 == var_1_6) ? (var_1_1 == ((float) (var_1_6 + var_1_5))) : (var_1_1 == ((float) var_1_4)))) && ((var_1_6 > var_1_4) ? ((25 <= (max (var_1_3 , var_1_2))) ? (((~ (var_1_2 ^ var_1_3)) <= var_1_8) ? (var_1_7 == ((signed short int) 32)) : (var_1_7 == ((signed short int) var_1_9))) : 1) : 1)) && (var_1_10 == ((unsigned char) (min (var_1_11 , var_1_12))))) && (var_1_13 == ((unsigned char) var_1_12))) && (var_1_14 == ((signed short int) ((var_1_15 - (4 + var_1_13)) - var_1_12)))) && ((var_1_2 > var_1_10) ? (var_1_16 == ((unsigned char) ((var_1_8 > var_1_7) && var_1_17))) : (var_1_16 == ((unsigned char) ((var_1_4 < (min (var_1_6 , var_1_5))) && var_1_17))))) && ((var_1_9 <= -16) ? (var_1_18 == ((signed long int) (abs ((var_1_11 + var_1_10) + var_1_2)))) : 1)) && (var_1_19 == ((signed short int) (((var_1_20 - var_1_10) + var_1_12) - var_1_13)))) && (var_1_21 == ((signed short int) var_1_9))) && (var_1_22 == ((unsigned char) var_1_23))
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
