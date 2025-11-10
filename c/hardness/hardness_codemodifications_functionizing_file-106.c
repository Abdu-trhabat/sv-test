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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch106functionizing.c", 13, "reach_error"); }
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
void functionized0(signed short int, signed short int, signed short int, unsigned char);
unsigned char functionized1(signed short int, signed short int);
float functionized2(float, float);
unsigned char functionized3(signed short int, signed short int, signed short int);
signed long int functionized4(signed long int);
unsigned char functionized5(unsigned char, unsigned char);
void functionized6(signed short int, double, float, unsigned short int);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -128;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
signed short int var_1_4 = 25;
signed short int var_1_5 = 64;
signed short int var_1_6 = 1000;
signed short int var_1_7 = 2;
float var_1_8 = 5.55;
signed short int var_1_9 = 4;
float var_1_10 = 9.58;
float var_1_11 = 200.25;
signed short int var_1_12 = -2;
signed short int var_1_13 = 1;
unsigned short int var_1_14 = 32;
unsigned short int var_1_15 = 10;
unsigned char var_1_16 = 100;
unsigned char var_1_17 = 1;
float var_1_18 = 31.8;
unsigned char var_1_19 = 128;
double var_1_20 = 200.5;
double var_1_21 = 1.6;
double var_1_22 = 15.75;
unsigned long int var_1_23 = 1;
unsigned long int var_1_24 = 32;
signed short int var_1_25 = -10;
signed long int var_1_26 = -100;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(signed short int functionized0_localFunctionVar0, signed short int functionized0_localFunctionVar1, signed short int functionized0_localFunctionVar2, unsigned char functionized0_localFunctionVar3) {
	if (functionized0_localFunctionVar3) {
		var_1_1 = (min (functionized0_localFunctionVar2 , ((var_1_5 + 256) - (min (functionized0_localFunctionVar0 , functionized0_localFunctionVar1)))));
	} else {
		var_1_1 = (var_1_5 - functionized0_localFunctionVar1);
	}
}
unsigned char functionized1(signed short int functionized1_localFunctionVar0, signed short int functionized1_localFunctionVar1) {
	return (var_1_7 <= (functionized1_localFunctionVar0 + (var_1_6 - functionized1_localFunctionVar1)));
}
float functionized2(float functionized2_localFunctionVar0, float functionized2_localFunctionVar1) {
	return (functionized2_localFunctionVar1 - functionized2_localFunctionVar0);
}
unsigned char functionized3(signed short int functionized3_localFunctionVar0, signed short int functionized3_localFunctionVar1, signed short int functionized3_localFunctionVar2) {
	return ((var_1_7 + functionized3_localFunctionVar0) > (functionized3_localFunctionVar1 * functionized3_localFunctionVar2));
}
signed long int functionized4(signed long int localFunctionVar0) {
	return (var_1_5 - (var_1_13 + localFunctionVar0));
}
unsigned char functionized5(unsigned char functionized5_localFunctionVar0, unsigned char functionized5_localFunctionVar1) {
	return (functionized5_localFunctionVar0 || functionized5_localFunctionVar1);
}
void functionized6(signed short int functionized6_localFunctionVar0, double functionized6_localFunctionVar1, float functionized6_localFunctionVar2, unsigned short int functionized6_localFunctionVar3) {
	if ((functionized6_localFunctionVar0 + functionized6_localFunctionVar3) <= var_1_12) {
		var_1_20 = functionized6_localFunctionVar2;
	} else {
		var_1_20 = (max (var_1_11 , (min (functionized6_localFunctionVar2 , (var_1_21 + functionized6_localFunctionVar1)))));
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch106functionizing
	if (var_1_2) {
		functionized0(var_1_6, var_1_7, var_1_4, var_1_3);
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch106functionizing
	if (functionized1(var_1_5, var_1_9)) {
		if (var_1_3) {
			var_1_8 = (functionized2(var_1_11, var_1_10));
		} else {
			var_1_8 = (max (var_1_11 , var_1_10));
		}
	} else {
		var_1_8 = var_1_11;
	}


	// From: Req3Batch106functionizing
	if (functionized3(var_1_6, var_1_1, var_1_9)) {
		var_1_12 = functionized4(64);
	} else {
		var_1_12 = var_1_13;
	}


	// From: Req4Batch106functionizing
	var_1_14 = (((min (4 , var_1_13)) + var_1_5) + var_1_7);


	// From: Req5Batch106functionizing
	var_1_15 = var_1_6;


	// From: Req6Batch106functionizing
	if (functionized5(var_1_17, var_1_2)) {
		if (var_1_11 > (- var_1_18)) {
			var_1_16 = var_1_19;
		}
	}


	// From: Req7Batch106functionizing
	functionized6(var_1_6, var_1_22, var_1_10, var_1_15);


	// From: Req8Batch106functionizing
	var_1_23 = var_1_24;


	// From: Req9Batch106functionizing
	var_1_25 = var_1_16;


	// From: Req10Batch106functionizing
	var_1_26 = var_1_25;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 4294967294);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((var_1_2 ? (var_1_3 ? (var_1_1 == ((signed short int) (min (var_1_4 , ((var_1_5 + 256) - (min (var_1_6 , var_1_7))))))) : (var_1_1 == ((signed short int) (var_1_5 - var_1_7)))) : (var_1_1 == ((signed short int) var_1_4))) && ((var_1_7 <= (var_1_5 + (var_1_6 - var_1_9))) ? (var_1_3 ? (var_1_8 == ((float) (var_1_10 - var_1_11))) : (var_1_8 == ((float) (max (var_1_11 , var_1_10))))) : (var_1_8 == ((float) var_1_11)))) && (((var_1_7 + var_1_6) > (var_1_1 * var_1_9)) ? (var_1_12 == ((signed short int) (var_1_5 - (var_1_13 + 64)))) : (var_1_12 == ((signed short int) var_1_13)))) && (var_1_14 == ((unsigned short int) (((min (4 , var_1_13)) + var_1_5) + var_1_7)))) && (var_1_15 == ((unsigned short int) var_1_6))) && ((var_1_17 || var_1_2) ? ((var_1_11 > (- var_1_18)) ? (var_1_16 == ((unsigned char) var_1_19)) : 1) : 1)) && (((var_1_6 + var_1_15) <= var_1_12) ? (var_1_20 == ((double) var_1_10)) : (var_1_20 == ((double) (max (var_1_11 , (min (var_1_10 , (var_1_21 + var_1_22))))))))) && (var_1_23 == ((unsigned long int) var_1_24))) && (var_1_25 == ((signed short int) var_1_16))) && (var_1_26 == ((signed long int) var_1_25))
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
