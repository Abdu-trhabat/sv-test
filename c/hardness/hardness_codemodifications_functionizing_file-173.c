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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch173functionizing.c", 13, "reach_error"); }
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
signed long int functionized1(unsigned char);
void functionized2(unsigned char, unsigned char, unsigned long int);
void functionized3(float, float, float);
signed long int functionized4(unsigned char);
void functionized5(float, unsigned char, unsigned char);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 10000000.2;
unsigned long int var_1_2 = 64;
float var_1_3 = 25.5;
float var_1_4 = 100000000000.75;
float var_1_5 = 1.25;
float var_1_6 = 128.75;
float var_1_7 = -0.25;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 500;
signed long int var_1_11 = -10;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned long int var_1_15 = 4;
float var_1_16 = 10.2;
unsigned char var_1_17 = 100;
unsigned long int var_1_18 = 2895366789;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 1;

// Calibration values

// Last'ed variables

// Additional functions
signed long int functionized0(void) {
	return (var_1_10 / var_1_11);
}
signed long int functionized1(unsigned char functionized1_localFunctionVar0) {
	return (functionized1_localFunctionVar0 + var_1_13);
}
void functionized2(unsigned char functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1, unsigned long int localFunctionVar2) {
	if (functionized2_localFunctionVar0 > 2) {
		if (functionized2_localFunctionVar1) {
			var_1_15 = (max ((abs (functionized2_localFunctionVar0)) , (localFunctionVar2 - var_1_8)));
		} else {
			var_1_15 = (min (var_1_8 , var_1_14));
		}
	} else {
		var_1_15 = (var_1_8 + 100u);
	}
}
void functionized3(float functionized3_localFunctionVar0, float functionized3_localFunctionVar1, float functionized3_localFunctionVar2) {
	if (functionized3_localFunctionVar0 <= functionized3_localFunctionVar2) {
		var_1_16 = functionized3_localFunctionVar1;
	}
}
signed long int functionized4(unsigned char functionized4_localFunctionVar0) {
	return (functionized4_localFunctionVar0 - var_1_14);
}
void functionized5(float functionized5_localFunctionVar0, unsigned char functionized5_localFunctionVar1, unsigned char localFunctionVar2) {
	if (((max (var_1_4 , var_1_3)) >= functionized5_localFunctionVar0) || var_1_9) {
		if (var_1_8 > functionized5_localFunctionVar1) {
			if (var_1_9) {
				var_1_20 = var_1_21;
			} else {
				var_1_20 = 0;
			}
		} else {
			var_1_20 = localFunctionVar2;
		}
	} else {
		var_1_20 = var_1_22;
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch173functionizing
	if (! (100u >= var_1_2)) {
		var_1_1 = (max (var_1_3 , var_1_4));
	} else {
		var_1_1 = ((var_1_5 - var_1_6) + var_1_7);
	}


	// From: Req2Batch173functionizing
	if (var_1_9) {
		if (functionized0() != var_1_2) {
			var_1_8 = (functionized1(var_1_12) + var_1_14);
		} else {
			var_1_8 = var_1_14;
		}
	} else {
		var_1_8 = var_1_12;
	}


	// From: Req3Batch173functionizing
	functionized2(var_1_13, var_1_9, 2813524572u);


	// From: Req4Batch173functionizing
	if (var_1_11 <= -128) {
		functionized3(var_1_6, var_1_5, var_1_7);
	}


	// From: Req5Batch173functionizing
	if ((var_1_18 - var_1_12) >= (~ var_1_14)) {
		if (var_1_9) {
			var_1_17 = (max (functionized4(var_1_19) , var_1_12));
		} else {
			var_1_17 = var_1_12;
		}
	} else {
		var_1_17 = var_1_14;
	}


	// From: Req6Batch173functionizing
	functionized5(var_1_5, var_1_13, 0);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483648);
	assume_abort_if_not(var_1_11 <= 2147483647);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 64);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 2147483647);
	assume_abort_if_not(var_1_18 <= 4294967295);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 127);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((! (100u >= var_1_2)) ? (var_1_1 == ((float) (max (var_1_3 , var_1_4)))) : (var_1_1 == ((float) ((var_1_5 - var_1_6) + var_1_7)))) && (var_1_9 ? (((var_1_10 / var_1_11) != var_1_2) ? (var_1_8 == ((unsigned char) ((var_1_12 + var_1_13) + var_1_14))) : (var_1_8 == ((unsigned char) var_1_14))) : (var_1_8 == ((unsigned char) var_1_12)))) && ((var_1_13 > 2) ? (var_1_9 ? (var_1_15 == ((unsigned long int) (max ((abs (var_1_13)) , (2813524572u - var_1_8))))) : (var_1_15 == ((unsigned long int) (min (var_1_8 , var_1_14))))) : (var_1_15 == ((unsigned long int) (var_1_8 + 100u))))) && ((var_1_11 <= -128) ? ((var_1_6 <= var_1_7) ? (var_1_16 == ((float) var_1_5)) : 1) : 1)) && (((var_1_18 - var_1_12) >= (~ var_1_14)) ? (var_1_9 ? (var_1_17 == ((unsigned char) (max ((var_1_19 - var_1_14) , var_1_12)))) : (var_1_17 == ((unsigned char) var_1_12))) : (var_1_17 == ((unsigned char) var_1_14)))) && ((((max (var_1_4 , var_1_3)) >= var_1_5) || var_1_9) ? ((var_1_8 > var_1_13) ? (var_1_9 ? (var_1_20 == ((unsigned char) var_1_21)) : (var_1_20 == ((unsigned char) 0))) : (var_1_20 == ((unsigned char) 0))) : (var_1_20 == ((unsigned char) var_1_22)))
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
