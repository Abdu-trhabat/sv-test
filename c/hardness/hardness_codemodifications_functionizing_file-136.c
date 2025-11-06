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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch136functionizing.c", 13, "reach_error"); }
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
void functionized0(void);
void functionized1(float, unsigned char);
void functionized2(unsigned char, unsigned char);
signed long int functionized3(signed char, signed char);
void functionized4(double, double, signed long int);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 128.25;
signed short int var_1_2 = 10;
signed short int var_1_3 = -4;
signed long int var_1_4 = 1000;
signed long int var_1_5 = 5;
signed long int var_1_6 = 32;
float var_1_7 = 0.3;
double var_1_8 = 255.75;
unsigned char var_1_9 = 0;
double var_1_10 = 9999999.32;
unsigned char var_1_11 = 0;
unsigned short int var_1_12 = 0;
unsigned short int var_1_13 = 8;
unsigned short int var_1_14 = 8;
signed char var_1_15 = 0;
signed char var_1_16 = 0;
signed char var_1_17 = -1;
signed char var_1_18 = 50;
signed char var_1_19 = 2;
unsigned long int var_1_20 = 128;
unsigned long int var_1_21 = 1516883038;
unsigned long int var_1_22 = 1086059298;
double var_1_23 = 16.85;
double var_1_24 = 127.2;
double var_1_25 = 9.65;

// Calibration values

// Last'ed variables

// Additional functions
void functionized0(void) {
	if (((~ var_1_2) & var_1_3) <= ((var_1_4 - var_1_5) ^ var_1_6)) {
		var_1_1 = var_1_7;
	} else {
		var_1_1 = 32.8f;
	}
}
void functionized1(float functionized1_localFunctionVar0, unsigned char functionized1_localFunctionVar1) {
	if ((functionized1_localFunctionVar0 > var_1_1) || (! (! 0))) {
		if (functionized1_localFunctionVar1) {
			var_1_8 = functionized1_localFunctionVar0;
		} else {
			var_1_8 = 1.0000000000008E12;
		}
	} else {
		var_1_8 = functionized1_localFunctionVar0;
	}
}
void functionized2(unsigned char functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1) {
	if (functionized2_localFunctionVar1 && functionized2_localFunctionVar0) {
		if (! functionized2_localFunctionVar1) {
			var_1_10 = var_1_7;
		}
	}
}
signed long int functionized3(signed char functionized3_localFunctionVar0, signed char functionized3_localFunctionVar1) {
	return ((min (var_1_17 , functionized3_localFunctionVar1)) + functionized3_localFunctionVar0);
}
void functionized4(double functionized4_localFunctionVar0, double functionized4_localFunctionVar1, signed long int localFunctionVar2) {
	if (localFunctionVar2 < ((min (var_1_13 , var_1_14)) << var_1_15)) {
		var_1_23 = (4.75 + functionized4_localFunctionVar0);
	} else {
		var_1_23 = (functionized4_localFunctionVar0 + functionized4_localFunctionVar1);
	}
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch136functionizing
	functionized0();


	// From: Req2Batch136functionizing
	functionized1(var_1_7, var_1_9);


	// From: Req3Batch136functionizing
	functionized2(var_1_11, var_1_9);


	// From: Req4Batch136functionizing
	var_1_12 = ((65103 - 2) - (min (var_1_13 , var_1_14)));


	// From: Req5Batch136functionizing
	if (var_1_7 >= (max (var_1_10 , 5.25f))) {
		var_1_15 = (max ((min (-5 , var_1_16)) , (functionized3(var_1_19, var_1_18))));
	} else {
		var_1_15 = (min (var_1_17 , var_1_16));
	}


	// From: Req6Batch136functionizing
	if ((min (var_1_6 , var_1_14)) == var_1_13) {
		var_1_20 = ((var_1_21 + var_1_22) - var_1_12);
	}


	// From: Req7Batch136functionizing
	functionized4(var_1_24, var_1_25, 128);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 1073741824);
	assume_abort_if_not(var_1_22 <= 2147483647);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((~ var_1_2) & var_1_3) <= ((var_1_4 - var_1_5) ^ var_1_6)) ? (var_1_1 == ((float) var_1_7)) : (var_1_1 == ((float) 32.8f))) && (((var_1_7 > var_1_1) || (! (! 0))) ? (var_1_9 ? (var_1_8 == ((double) var_1_7)) : (var_1_8 == ((double) 1.0000000000008E12))) : (var_1_8 == ((double) var_1_7)))) && ((var_1_9 && var_1_11) ? ((! var_1_9) ? (var_1_10 == ((double) var_1_7)) : 1) : 1)) && (var_1_12 == ((unsigned short int) ((65103 - 2) - (min (var_1_13 , var_1_14)))))) && ((var_1_7 >= (max (var_1_10 , 5.25f))) ? (var_1_15 == ((signed char) (max ((min (-5 , var_1_16)) , ((min (var_1_17 , var_1_18)) + var_1_19))))) : (var_1_15 == ((signed char) (min (var_1_17 , var_1_16)))))) && (((min (var_1_6 , var_1_14)) == var_1_13) ? (var_1_20 == ((unsigned long int) ((var_1_21 + var_1_22) - var_1_12))) : 1)) && ((128 < ((min (var_1_13 , var_1_14)) << var_1_15)) ? (var_1_23 == ((double) (4.75 + var_1_24))) : (var_1_23 == ((double) (var_1_24 + var_1_25))))
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
