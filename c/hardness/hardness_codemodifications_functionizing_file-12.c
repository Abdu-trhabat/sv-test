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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12functionizing.c", 13, "reach_error"); }
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
unsigned long int functionized0(void);
signed long int functionized1(void);
void functionized2(unsigned char, float, unsigned long int);
float functionized3(void);
unsigned long int functionized4(unsigned char);
unsigned char functionized5(unsigned char);
signed long int functionized6(unsigned char);
unsigned char functionized7(signed short int);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 5;
unsigned long int var_1_2 = 10;
unsigned long int var_1_3 = 2;
unsigned long int var_1_4 = 8;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 128;
signed long int var_1_9 = 1967984875;
float var_1_10 = 256.625;
float var_1_11 = 24.5;
float var_1_12 = 999999.25;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
double var_1_15 = 127.3;
float var_1_16 = 15.8;
double var_1_17 = -0.4;
unsigned long int var_1_18 = 8;
unsigned long int var_1_19 = 2366774301;
unsigned char var_1_20 = 0;
signed short int var_1_21 = 5;
signed char var_1_22 = 0;
signed char var_1_23 = 2;

// Calibration values

// Last'ed variables

// Additional functions
unsigned long int functionized0(void) {
	return (var_1_3 * var_1_4);
}
signed long int functionized1(void) {
	return (abs (16));
}
void functionized2(unsigned char functionized2_localFunctionVar0, float functionized2_localFunctionVar1, unsigned long int functionized2_localFunctionVar2) {
	if (functionized2_localFunctionVar2 != (min (var_1_6 , functionized2_localFunctionVar0))) {
		var_1_10 = (max (var_1_11 , functionized2_localFunctionVar1));
	} else {
		if (var_1_13 || var_1_14) {
			var_1_10 = var_1_11;
		}
	}
}
float functionized3(void) {
	return (var_1_12 / var_1_16);
}
unsigned long int functionized4(unsigned char functionized4_localFunctionVar0) {
	return (var_1_19 - functionized4_localFunctionVar0);
}
unsigned char functionized5(unsigned char functionized5_localFunctionVar0) {
	return (functionized5_localFunctionVar0 || (var_1_9 >= var_1_8));
}
signed long int functionized6(unsigned char functionized6_localFunctionVar0) {
	return (abs (functionized6_localFunctionVar0));
}
unsigned char functionized7(signed short int functionized7_localFunctionVar0) {
	return (functionized7_localFunctionVar0 == var_1_3);
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch12functionizing
	if (var_1_2 > functionized0()) {
		var_1_1 = (var_1_5 - (var_1_6 + var_1_7));
	} else {
		var_1_1 = (min (var_1_7 , (functionized1() + var_1_6)));
	}


	// From: Req2Batch12functionizing
	if ((- var_1_3) > var_1_6) {
		var_1_8 = ((var_1_9 - var_1_1) - var_1_5);
	}


	// From: Req3Batch12functionizing
	functionized2(var_1_5, var_1_12, var_1_4);


	// From: Req4Batch12functionizing
	if (functionized3() >= var_1_10) {
		var_1_15 = (var_1_17 + 255.5);
	}


	// From: Req5Batch12functionizing
	if (var_1_3 > var_1_2) {
		var_1_18 = (min (var_1_9 , functionized4(var_1_6)));
	} else {
		if (functionized5(var_1_20)) {
			var_1_18 = var_1_6;
		} else {
			var_1_18 = var_1_7;
		}
	}


	// From: Req6Batch12functionizing
	var_1_21 = functionized6(var_1_7);


	// From: Req7Batch12functionizing
	if (functionized7(var_1_21)) {
		if (! var_1_20) {
			var_1_22 = (max (var_1_6 , (5 - var_1_7)));
		} else {
			var_1_22 = (var_1_7 + var_1_23);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 127);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 64);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 1073741822);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	assume_abort_if_not(var_1_16 != 0.0F);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -63);
	assume_abort_if_not(var_1_23 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 > (var_1_3 * var_1_4)) ? (var_1_1 == ((unsigned char) (var_1_5 - (var_1_6 + var_1_7)))) : (var_1_1 == ((unsigned char) (min (var_1_7 , ((abs (16)) + var_1_6)))))) && (((- var_1_3) > var_1_6) ? (var_1_8 == ((signed long int) ((var_1_9 - var_1_1) - var_1_5))) : 1)) && ((var_1_4 != (min (var_1_6 , var_1_5))) ? (var_1_10 == ((float) (max (var_1_11 , var_1_12)))) : ((var_1_13 || var_1_14) ? (var_1_10 == ((float) var_1_11)) : 1))) && (((var_1_12 / var_1_16) >= var_1_10) ? (var_1_15 == ((double) (var_1_17 + 255.5))) : 1)) && ((var_1_3 > var_1_2) ? (var_1_18 == ((unsigned long int) (min (var_1_9 , (var_1_19 - var_1_6))))) : ((var_1_20 || (var_1_9 >= var_1_8)) ? (var_1_18 == ((unsigned long int) var_1_6)) : (var_1_18 == ((unsigned long int) var_1_7))))) && (var_1_21 == ((signed short int) (abs (var_1_7))))) && ((var_1_21 == var_1_3) ? ((! var_1_20) ? (var_1_22 == ((signed char) (max (var_1_6 , (5 - var_1_7))))) : (var_1_22 == ((signed char) (var_1_7 + var_1_23)))) : 1)
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
