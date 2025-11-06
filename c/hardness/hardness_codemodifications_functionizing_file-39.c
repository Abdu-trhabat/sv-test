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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch39functionizing.c", 13, "reach_error"); }
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
void functionized0(signed short int, signed char, signed long int);
void functionized1(void);
unsigned char functionized2(signed short int, signed short int);
signed long int functionized3(void);
unsigned char functionized4(void);
void functionized5(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -1;
signed char var_1_2 = -2;
signed char var_1_3 = 4;
signed char var_1_4 = 10;
signed long int var_1_5 = 50;
unsigned char var_1_6 = 0;
signed short int var_1_7 = 8;
signed short int var_1_8 = 4;
unsigned long int var_1_9 = 256;
unsigned long int var_1_10 = 10;
unsigned long int var_1_11 = 3084274888;
unsigned long int var_1_12 = 50;
signed long int var_1_13 = -10;
signed long int var_1_14 = 2040141804;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
signed short int var_1_17 = 10;
unsigned char var_1_18 = 8;
unsigned char var_1_19 = 25;
unsigned short int var_1_20 = 2;
unsigned char var_1_21 = 0;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(signed short int functionized0_localFunctionVar0, signed char functionized0_localFunctionVar1, signed long int localFunctionVar2) {
	if (((var_1_2 + var_1_3) ^ functionized0_localFunctionVar1) < (var_1_5 | localFunctionVar2)) {
		var_1_1 = (var_1_7 - functionized0_localFunctionVar0);
	} else {
		var_1_1 = (functionized0_localFunctionVar1 + -16);
	}
}
void functionized1(void) {
	var_1_10 = (min ((abs (var_1_11 - var_1_8)) , (max (0u , var_1_5))));
}
unsigned char functionized2(signed short int functionized2_localFunctionVar0, signed short int functionized2_localFunctionVar1) {
	return (functionized2_localFunctionVar1 < (min (functionized2_localFunctionVar0 , (64 - 16))));
}
signed long int functionized3(void) {
	return (max (var_1_3 , -2));
}
unsigned char functionized4(void) {
	return (var_1_15 && var_1_16);
}
void functionized5(void) {
	var_1_18 = var_1_19;
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch39functionizing
	functionized0(var_1_8, var_1_4, -4);


	// From: Req2Batch39functionizing
	if (var_1_3 >= (min (var_1_1 , var_1_2))) {
		if (var_1_6) {
			var_1_9 = var_1_5;
		}
	}


	// From: Req3Batch39functionizing
	functionized1();


	// From: Req4Batch39functionizing
	if (functionized2(var_1_8, var_1_7)) {
		if (var_1_5 > functionized3()) {
			var_1_12 = (max (var_1_8 , var_1_5));
		} else {
			var_1_12 = 5u;
		}
	} else {
		var_1_12 = var_1_11;
	}


	// From: Req5Batch39functionizing
	if ((var_1_3 + var_1_8) <= ((var_1_14 - 25) - var_1_5)) {
		if (var_1_6) {
			if (functionized4()) {
				var_1_13 = var_1_7;
			} else {
				var_1_13 = var_1_8;
			}
		}
	} else {
		var_1_13 = var_1_2;
	}


	// From: Req6Batch39functionizing
	if ((var_1_10 != var_1_11) && (! var_1_16)) {
		var_1_17 = (max (var_1_3 , var_1_8));
	}


	// From: Req7Batch39functionizing
	functionized5();


	// From: Req8Batch39functionizing
	var_1_20 = var_1_8;


	// From: Req9Batch39functionizing
	var_1_21 = var_1_6;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -128);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 1073741823);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((((var_1_2 + var_1_3) ^ var_1_4) < (var_1_5 | -4)) ? (var_1_1 == ((signed short int) (var_1_7 - var_1_8))) : (var_1_1 == ((signed short int) (var_1_4 + -16)))) && ((var_1_3 >= (min (var_1_1 , var_1_2))) ? (var_1_6 ? (var_1_9 == ((unsigned long int) var_1_5)) : 1) : 1)) && (var_1_10 == ((unsigned long int) (min ((abs (var_1_11 - var_1_8)) , (max (0u , var_1_5))))))) && ((var_1_7 < (min (var_1_8 , (64 - 16)))) ? ((var_1_5 > (max (var_1_3 , -2))) ? (var_1_12 == ((unsigned long int) (max (var_1_8 , var_1_5)))) : (var_1_12 == ((unsigned long int) 5u))) : (var_1_12 == ((unsigned long int) var_1_11)))) && (((var_1_3 + var_1_8) <= ((var_1_14 - 25) - var_1_5)) ? (var_1_6 ? ((var_1_15 && var_1_16) ? (var_1_13 == ((signed long int) var_1_7)) : (var_1_13 == ((signed long int) var_1_8))) : 1) : (var_1_13 == ((signed long int) var_1_2)))) && (((var_1_10 != var_1_11) && (! var_1_16)) ? (var_1_17 == ((signed short int) (max (var_1_3 , var_1_8)))) : 1)) && (var_1_18 == ((unsigned char) var_1_19))) && (var_1_20 == ((unsigned short int) var_1_8))) && (var_1_21 == ((unsigned char) var_1_6))
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
