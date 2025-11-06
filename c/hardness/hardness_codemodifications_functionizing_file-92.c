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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch92functionizing.c", 13, "reach_error"); }
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
unsigned char functionized0(float);
signed long int functionized1(unsigned short int, unsigned short int);
unsigned char functionized2(unsigned short int, unsigned short int, unsigned short int);
unsigned char functionized3(signed short int);
signed long int functionized4(signed short int);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 100;
unsigned long int var_1_2 = 1;
unsigned long int var_1_3 = 4;
float var_1_4 = 15.4;
float var_1_5 = 8.35;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 10;
unsigned short int var_1_9 = 0;
unsigned short int var_1_10 = 53946;
unsigned short int var_1_11 = 1;
unsigned long int var_1_12 = 8;
signed short int var_1_13 = 8;
unsigned long int var_1_14 = 10000;
float var_1_15 = 255.5;
signed short int var_1_16 = -100;
signed short int var_1_17 = 10000;
signed short int var_1_18 = 500;
signed short int var_1_19 = 10000;
signed short int var_1_20 = 10;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned long int var_1_23 = 128;
signed long int var_1_24 = -200;
unsigned char var_1_25 = 0;

// Calibration values

// Last'ed variables

// Additional functions
unsigned char functionized0(float functionized0_localFunctionVar0) {
	return (var_1_4 >= functionized0_localFunctionVar0);
}
signed long int functionized1(unsigned short int functionized1_localFunctionVar0, unsigned short int functionized1_localFunctionVar1) {
	return (max (functionized1_localFunctionVar1 , functionized1_localFunctionVar0));
}
unsigned char functionized2(unsigned short int functionized2_localFunctionVar0, unsigned short int functionized2_localFunctionVar1, unsigned short int functionized2_localFunctionVar2) {
	return (((abs (functionized2_localFunctionVar0)) >> var_1_13) >= (max (functionized2_localFunctionVar1 , functionized2_localFunctionVar2)));
}
unsigned char functionized3(signed short int functionized3_localFunctionVar0) {
	return (functionized3_localFunctionVar0 >= var_1_11);
}
signed long int functionized4(signed short int functionized4_localFunctionVar0) {
	return (var_1_17 - functionized4_localFunctionVar0);
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch92functionizing
	if ((var_1_2 == var_1_3) && functionized0(var_1_5)) {
		if (var_1_6) {
			if (var_1_7) {
				var_1_1 = (min (var_1_8 , var_1_9));
			} else {
				var_1_1 = (functionized1(var_1_8, var_1_9));
			}
		} else {
			var_1_1 = ((max (46167 , var_1_10)) - var_1_11);
		}
	} else {
		var_1_1 = var_1_10;
	}


	// From: Req2Batch92functionizing
	if (functionized2(var_1_10, var_1_1, var_1_9)) {
		var_1_12 = var_1_8;
	}


	// From: Req3Batch92functionizing
	if (functionized3(var_1_13)) {
		var_1_14 = (var_1_13 + var_1_11);
	} else {
		if (var_1_5 != (var_1_4 / var_1_15)) {
			if (var_1_7) {
				var_1_14 = var_1_11;
			} else {
				var_1_14 = var_1_10;
			}
		} else {
			var_1_14 = var_1_11;
		}
	}


	// From: Req4Batch92functionizing
	if (var_1_7) {
		var_1_16 = (var_1_13 - (functionized4(var_1_18) + (var_1_19 - var_1_20)));
	} else {
		var_1_16 = var_1_18;
	}


	// From: Req5Batch92functionizing
	if ((1.00000000000005E13f == var_1_15) || var_1_6) {
		if (var_1_4 > (max (var_1_5 , var_1_15))) {
			var_1_21 = var_1_22;
		} else {
			var_1_21 = 1;
		}
	} else {
		var_1_21 = 0;
	}


	// From: Req6Batch92functionizing
	var_1_23 = var_1_13;


	// From: Req7Batch92functionizing
	var_1_24 = var_1_8;


	// From: Req8Batch92functionizing
	var_1_25 = var_1_22;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 30);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 8191);
	assume_abort_if_not(var_1_17 <= 16383);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 8191);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 8191);
	assume_abort_if_not(var_1_19 <= 16383);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 8191);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((var_1_2 == var_1_3) && (var_1_4 >= var_1_5)) ? (var_1_6 ? (var_1_7 ? (var_1_1 == ((unsigned short int) (min (var_1_8 , var_1_9)))) : (var_1_1 == ((unsigned short int) (max (var_1_9 , var_1_8))))) : (var_1_1 == ((unsigned short int) ((max (46167 , var_1_10)) - var_1_11)))) : (var_1_1 == ((unsigned short int) var_1_10))) && ((((abs (var_1_10)) >> var_1_13) >= (max (var_1_1 , var_1_9))) ? (var_1_12 == ((unsigned long int) var_1_8)) : 1)) && ((var_1_13 >= var_1_11) ? (var_1_14 == ((unsigned long int) (var_1_13 + var_1_11))) : ((var_1_5 != (var_1_4 / var_1_15)) ? (var_1_7 ? (var_1_14 == ((unsigned long int) var_1_11)) : (var_1_14 == ((unsigned long int) var_1_10))) : (var_1_14 == ((unsigned long int) var_1_11))))) && (var_1_7 ? (var_1_16 == ((signed short int) (var_1_13 - ((var_1_17 - var_1_18) + (var_1_19 - var_1_20))))) : (var_1_16 == ((signed short int) var_1_18)))) && (((1.00000000000005E13f == var_1_15) || var_1_6) ? ((var_1_4 > (max (var_1_5 , var_1_15))) ? (var_1_21 == ((unsigned char) var_1_22)) : (var_1_21 == ((unsigned char) 1))) : (var_1_21 == ((unsigned char) 0)))) && (var_1_23 == ((unsigned long int) var_1_13))) && (var_1_24 == ((signed long int) var_1_8))) && (var_1_25 == ((unsigned char) var_1_22))
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
