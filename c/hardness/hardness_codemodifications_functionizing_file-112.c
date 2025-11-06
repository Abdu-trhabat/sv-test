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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch112functionizing.c", 13, "reach_error"); }
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
void functionized0(float, unsigned char);
signed long int functionized1(unsigned char, unsigned char);
void functionized2(unsigned char, unsigned char, unsigned long int, unsigned char, unsigned long int, unsigned short int, unsigned char, unsigned long int);
void functionized3(signed long int);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 8;
signed char var_1_2 = -32;
signed char var_1_3 = -32;
unsigned long int var_1_4 = 3917050220;
unsigned char var_1_5 = 1;
float var_1_6 = 7.5;
float var_1_7 = 16.75;
float var_1_8 = 10.125;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 8;
signed char var_1_11 = 100;
unsigned char var_1_12 = 1;
signed char var_1_13 = -4;
unsigned long int var_1_14 = 64;
unsigned short int var_1_15 = 100;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 5;
unsigned short int var_1_18 = 128;
unsigned long int var_1_19 = 1450604137;
unsigned long int var_1_20 = 1115287165;
unsigned short int var_1_21 = 24626;
unsigned short int var_1_22 = 2;
unsigned short int var_1_23 = 50515;
double var_1_24 = 5.4;
double var_1_25 = 9999.2;
signed short int var_1_26 = 32;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(float functionized0_localFunctionVar0, unsigned char functionized0_localFunctionVar1) {
	if ((functionized0_localFunctionVar0 * var_1_7) >= var_1_8) {
		if (functionized0_localFunctionVar1) {
			var_1_5 = var_1_10;
		}
	}
}
signed long int functionized1(unsigned char functionized1_localFunctionVar0, unsigned char functionized1_localFunctionVar1) {
	return (functionized1_localFunctionVar1 - functionized1_localFunctionVar0);
}
void functionized2(unsigned char functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1, unsigned long int functionized2_localFunctionVar2, unsigned char functionized2_localFunctionVar3, unsigned long int functionized2_localFunctionVar4, unsigned short int functionized2_localFunctionVar5, unsigned char functionized2_localFunctionVar6, unsigned long int functionized2_localFunctionVar7) {
	if (((functionized2_localFunctionVar2 + var_1_20) - (functionized2_localFunctionVar0 + functionized2_localFunctionVar1)) > (functionized2_localFunctionVar7 - functionized2_localFunctionVar3)) {
		if (functionized2_localFunctionVar4 > var_1_20) {
			var_1_18 = ((var_1_21 - functionized2_localFunctionVar0) + var_1_5);
		} else {
			var_1_18 = functionized2_localFunctionVar0;
		}
	} else {
		if (((functionized2_localFunctionVar1 % var_1_21) % var_1_22) > var_1_5) {
			var_1_18 = ((abs (functionized2_localFunctionVar5)) - functionized2_localFunctionVar0);
		} else {
			if (! functionized2_localFunctionVar6) {
				var_1_18 = var_1_21;
			} else {
				var_1_18 = functionized2_localFunctionVar3;
			}
		}
	}
}
void functionized3(signed long int localFunctionVar0) {
	var_1_26 = localFunctionVar0;
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch112functionizing
	if (var_1_2 != var_1_3) {
		var_1_1 = (var_1_4 - 100000000u);
	}


	// From: Req2Batch112functionizing
	functionized0(var_1_6, var_1_9);


	// From: Req3Batch112functionizing
	if (var_1_9 && var_1_12) {
		if (((var_1_4 - var_1_10) | var_1_5) > var_1_1) {
			var_1_11 = var_1_13;
		} else {
			var_1_11 = -32;
		}
	}


	// From: Req4Batch112functionizing
	var_1_14 = (max ((var_1_5 + var_1_10) , var_1_4));


	// From: Req5Batch112functionizing
	if ((var_1_16 - var_1_17) < (functionized1(var_1_5, var_1_10))) {
		var_1_15 = 1;
	}


	// From: Req6Batch112functionizing
	functionized2(var_1_17, var_1_16, var_1_19, var_1_10, var_1_1, var_1_23, var_1_9, var_1_4);


	// From: Req7Batch112functionizing
	var_1_24 = var_1_25;


	// From: Req8Batch112functionizing
	functionized3(10);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 2147483647);
	assume_abort_if_not(var_1_4 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 255);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483648);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 1073741824);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16383);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 65535);
	assume_abort_if_not(var_1_22 != 0);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 32767);
	assume_abort_if_not(var_1_23 <= 65534);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((var_1_2 != var_1_3) ? (var_1_1 == ((unsigned long int) (var_1_4 - 100000000u))) : 1) && (((var_1_6 * var_1_7) >= var_1_8) ? (var_1_9 ? (var_1_5 == ((unsigned char) var_1_10)) : 1) : 1)) && ((var_1_9 && var_1_12) ? ((((var_1_4 - var_1_10) | var_1_5) > var_1_1) ? (var_1_11 == ((signed char) var_1_13)) : (var_1_11 == ((signed char) -32))) : 1)) && (var_1_14 == ((unsigned long int) (max ((var_1_5 + var_1_10) , var_1_4))))) && (((var_1_16 - var_1_17) < (var_1_10 - var_1_5)) ? (var_1_15 == ((unsigned short int) 1)) : 1)) && ((((var_1_19 + var_1_20) - (var_1_17 + var_1_16)) > (var_1_4 - var_1_10)) ? ((var_1_1 > var_1_20) ? (var_1_18 == ((unsigned short int) ((var_1_21 - var_1_17) + var_1_5))) : (var_1_18 == ((unsigned short int) var_1_17))) : ((((var_1_16 % var_1_21) % var_1_22) > var_1_5) ? (var_1_18 == ((unsigned short int) ((abs (var_1_23)) - var_1_17))) : ((! var_1_9) ? (var_1_18 == ((unsigned short int) var_1_21)) : (var_1_18 == ((unsigned short int) var_1_10)))))) && (var_1_24 == ((double) var_1_25))) && (var_1_26 == ((signed short int) 10))
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
