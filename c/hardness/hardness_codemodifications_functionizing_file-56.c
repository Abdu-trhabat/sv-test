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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch56functionizing.c", 13, "reach_error"); }
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
unsigned char functionized0(unsigned char, unsigned char);
void functionized1(unsigned short int, unsigned short int);
void functionized2(unsigned short int, signed long int);
void functionized3(unsigned char);
void functionized4(signed long int);
void functionized5(unsigned char, signed char, unsigned char, signed char);
unsigned char functionized6(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned short int var_1_6 = 8;
unsigned short int var_1_7 = 10;
unsigned short int var_1_8 = 0;
unsigned short int var_1_9 = 8;
signed long int var_1_10 = -5;
signed long int var_1_11 = -256;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 2;
unsigned char var_1_15 = 5;
unsigned char var_1_16 = 200;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 32;
signed char var_1_19 = -50;
signed char var_1_20 = 32;
signed char var_1_21 = 5;
signed char var_1_22 = 16;
signed char var_1_23 = 2;

// Calibration values

// Last'ed variables

// Additional functions
unsigned char functionized0(unsigned char functionized0_localFunctionVar0, unsigned char functionized0_localFunctionVar1) {
	return ((! functionized0_localFunctionVar1) || (! (var_1_2 || functionized0_localFunctionVar0)));
}
void functionized1(unsigned short int functionized1_localFunctionVar0, unsigned short int functionized1_localFunctionVar1) {
	if (var_1_4) {
		var_1_6 = (functionized1_localFunctionVar0 + (min (var_1_8 , functionized1_localFunctionVar1)));
	}
}
void functionized2(unsigned short int functionized2_localFunctionVar0, signed long int localFunctionVar1) {
	if (var_1_7 >= (min (var_1_6 , (functionized2_localFunctionVar0 / localFunctionVar1)))) {
		var_1_10 = var_1_11;
	} else {
		var_1_10 = (max (var_1_6 , functionized2_localFunctionVar0));
	}
}
void functionized3(unsigned char functionized3_localFunctionVar0) {
	var_1_12 = ((64 + var_1_13) - functionized3_localFunctionVar0);
}
void functionized4(signed long int localFunctionVar0) {
	var_1_15 = ((var_1_16 - var_1_17) - localFunctionVar0);
}
void functionized5(unsigned char functionized5_localFunctionVar0, signed char functionized5_localFunctionVar1, unsigned char functionized5_localFunctionVar2, signed char functionized5_localFunctionVar3) {
	if ((- (var_1_18 / var_1_13)) <= (functionized5_localFunctionVar0 + var_1_10)) {
		var_1_19 = (min (functionized5_localFunctionVar2 , (abs (abs (functionized5_localFunctionVar0)))));
	} else {
		var_1_19 = (min (functionized5_localFunctionVar0 , ((functionized5_localFunctionVar1 + var_1_21) - functionized5_localFunctionVar3)));
	}
}
unsigned char functionized6(void) {
	return (var_1_6 >= var_1_22);
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch56functionizing
	if (var_1_2 && var_1_3) {
		var_1_1 = (functionized0(var_1_5, var_1_4));
	}


	// From: Req2Batch56functionizing
	functionized1(var_1_7, var_1_9);


	// From: Req3Batch56functionizing
	functionized2(var_1_8, 256);


	// From: Req4Batch56functionizing
	functionized3(var_1_14);


	// From: Req5Batch56functionizing
	functionized4(10);


	// From: Req6Batch56functionizing
	if (var_1_3) {
		var_1_18 = (var_1_16 - var_1_13);
	}


	// From: Req7Batch56functionizing
	functionized5(var_1_17, var_1_20, var_1_16, var_1_22);


	// From: Req8Batch56functionizing
	if (var_1_22 >= var_1_18) {
		var_1_23 = (var_1_21 + var_1_17);
	} else {
		if (! functionized6()) {
			var_1_23 = (min (var_1_20 , var_1_22));
		} else {
			var_1_23 = var_1_17;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483647);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 64);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 190);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((var_1_2 && var_1_3) ? (var_1_1 == ((unsigned char) ((! var_1_4) || (! (var_1_2 || var_1_5))))) : 1) && (var_1_4 ? (var_1_6 == ((unsigned short int) (var_1_7 + (min (var_1_8 , var_1_9))))) : 1)) && ((var_1_7 >= (min (var_1_6 , (var_1_8 / 256)))) ? (var_1_10 == ((signed long int) var_1_11)) : (var_1_10 == ((signed long int) (max (var_1_6 , var_1_8)))))) && (var_1_12 == ((unsigned char) ((64 + var_1_13) - var_1_14)))) && (var_1_15 == ((unsigned char) ((var_1_16 - var_1_17) - 10)))) && (var_1_3 ? (var_1_18 == ((unsigned char) (var_1_16 - var_1_13))) : 1)) && (((- (var_1_18 / var_1_13)) <= (var_1_17 + var_1_10)) ? (var_1_19 == ((signed char) (min (var_1_16 , (abs (abs (var_1_17))))))) : (var_1_19 == ((signed char) (min (var_1_17 , ((var_1_20 + var_1_21) - var_1_22))))))) && ((var_1_22 >= var_1_18) ? (var_1_23 == ((signed char) (var_1_21 + var_1_17))) : ((! (var_1_6 >= var_1_22)) ? (var_1_23 == ((signed char) (min (var_1_20 , var_1_22)))) : (var_1_23 == ((signed char) var_1_17))))
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
