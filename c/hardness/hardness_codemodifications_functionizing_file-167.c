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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch167functionizing.c", 13, "reach_error"); }
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
float functionized0(float, float);
void functionized1(float, float, float);
void functionized2(signed char, unsigned char);
void functionized3(unsigned long int, signed short int, signed long int);
signed long int functionized4(unsigned short int);
float functionized5(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 255.5;
unsigned char var_1_2 = 1;
unsigned long int var_1_3 = 10000000;
unsigned long int var_1_4 = 5;
unsigned long int var_1_5 = 0;
float var_1_6 = 31.8;
float var_1_7 = 0.19999999999999996;
float var_1_8 = 128.75;
float var_1_9 = 63.6;
float var_1_10 = 9.5;
double var_1_11 = 7.6;
float var_1_12 = 99.5;
signed char var_1_13 = -10;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 1;
signed char var_1_16 = -16;
signed short int var_1_17 = 1;
signed long int var_1_18 = 16;
signed short int var_1_19 = 25;
unsigned short int var_1_20 = 64;
unsigned short int var_1_21 = 128;
unsigned short int var_1_22 = 2;
unsigned short int var_1_23 = 10;
signed char var_1_24 = 8;
float var_1_25 = 31.8;
signed char var_1_26 = -5;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;

// Calibration values

// Last'ed variables

// Additional functions
float functionized0(float functionized0_localFunctionVar0, float functionized0_localFunctionVar1) {
	return ((functionized0_localFunctionVar0 + functionized0_localFunctionVar1) + (min (var_1_8 , var_1_9)));
}
void functionized1(float functionized1_localFunctionVar0, float functionized1_localFunctionVar1, float functionized1_localFunctionVar2) {
	if (functionized1_localFunctionVar1 > (functionized1_localFunctionVar2 * (functionized1_localFunctionVar0 / var_1_12))) {
		var_1_11 = (functionized1_localFunctionVar2 - var_1_9);
	} else {
		var_1_11 = var_1_8;
	}
}
void functionized2(signed char functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1) {
	if ((var_1_2 && var_1_14) && functionized2_localFunctionVar1) {
		var_1_13 = functionized2_localFunctionVar0;
	}
}
void functionized3(unsigned long int functionized3_localFunctionVar0, signed short int functionized3_localFunctionVar1, signed long int functionized3_localFunctionVar2) {
	if (((max (var_1_3 , functionized3_localFunctionVar2)) * var_1_4) == functionized3_localFunctionVar0) {
		var_1_17 = (-1 - functionized3_localFunctionVar1);
	} else {
		var_1_17 = var_1_13;
	}
}
signed long int functionized4(unsigned short int functionized4_localFunctionVar0) {
	return (functionized4_localFunctionVar0 + 16);
}
float functionized5(void) {
	return (min (var_1_1 , (- var_1_9)));
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch167functionizing
	if (var_1_3 == (max (var_1_4 , var_1_5))) {
		var_1_1 = ((functionized0(var_1_6, var_1_7)) - var_1_10);
	} else {
		var_1_1 = 8.2f;
	}


	// From: Req2Batch167functionizing
	functionized1(var_1_6, var_1_10, var_1_7);


	// From: Req3Batch167functionizing
	functionized2(var_1_16, var_1_15);


	// From: Req4Batch167functionizing
	functionized3(var_1_5, var_1_19, var_1_18);


	// From: Req5Batch167functionizing
	var_1_20 = (functionized4(var_1_21) + (var_1_22 + var_1_23));


	// From: Req6Batch167functionizing
	if (functionized5() > var_1_8) {
		if (((abs (var_1_7)) / (max (var_1_12 , var_1_25))) < var_1_11) {
			var_1_24 = (var_1_26 + -2);
		} else {
			var_1_24 = var_1_16;
		}
	} else {
		var_1_24 = var_1_26;
	}


	// From: Req7Batch167functionizing
	if (var_1_1 >= (abs (var_1_10))) {
		var_1_27 = (var_1_28 || var_1_29);
	} else {
		var_1_27 = var_1_30;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691400e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691400e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 16384);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 16384);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	assume_abort_if_not(var_1_25 != 0.0F);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -63);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_3 == (max (var_1_4 , var_1_5))) ? (var_1_1 == ((float) (((var_1_6 + var_1_7) + (min (var_1_8 , var_1_9))) - var_1_10))) : (var_1_1 == ((float) 8.2f))) && ((var_1_10 > (var_1_7 * (var_1_6 / var_1_12))) ? (var_1_11 == ((double) (var_1_7 - var_1_9))) : (var_1_11 == ((double) var_1_8)))) && (((var_1_2 && var_1_14) && var_1_15) ? (var_1_13 == ((signed char) var_1_16)) : 1)) && ((((max (var_1_3 , var_1_18)) * var_1_4) == var_1_5) ? (var_1_17 == ((signed short int) (-1 - var_1_19))) : (var_1_17 == ((signed short int) var_1_13)))) && (var_1_20 == ((unsigned short int) ((var_1_21 + 16) + (var_1_22 + var_1_23))))) && (((min (var_1_1 , (- var_1_9))) > var_1_8) ? ((((abs (var_1_7)) / (max (var_1_12 , var_1_25))) < var_1_11) ? (var_1_24 == ((signed char) (var_1_26 + -2))) : (var_1_24 == ((signed char) var_1_16))) : (var_1_24 == ((signed char) var_1_26)))) && ((var_1_1 >= (abs (var_1_10))) ? (var_1_27 == ((unsigned char) (var_1_28 || var_1_29))) : (var_1_27 == ((unsigned char) var_1_30)))
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
