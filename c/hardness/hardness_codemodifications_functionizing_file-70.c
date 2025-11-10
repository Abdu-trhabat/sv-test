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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch70functionizing.c", 13, "reach_error"); }
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
double functionized0(void);
double functionized1(double);
unsigned char functionized2(double);
signed long int functionized3(unsigned char);
void functionized4(void);
void functionized5(unsigned char, unsigned short int, unsigned char, unsigned char, signed long int);
void functionized6(unsigned long int, unsigned char);
unsigned char functionized7(unsigned short int, unsigned char);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 5.05;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 4;
unsigned char var_1_4 = 4;
unsigned char var_1_5 = 1;
double var_1_6 = 0.0;
double var_1_7 = 49.5;
double var_1_8 = 16.75;
unsigned short int var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned long int var_1_11 = 8;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 32;
unsigned char var_1_15 = 50;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 32;
unsigned long int var_1_18 = 2;
unsigned long int var_1_19 = 3876014737;
unsigned char var_1_20 = 0;

// Calibration values

// Last'ed variables

// Additional functions
double functionized0(void) {
	return (((var_1_6 - var_1_7) - (max (64.75 , 128.725))) + var_1_8);
}
double functionized1(double functionized1_localFunctionVar0) {
	return (min (functionized1_localFunctionVar0 , var_1_1));
}
unsigned char functionized2(double functionized2_localFunctionVar0) {
	return (! (var_1_6 <= functionized2_localFunctionVar0));
}
signed long int functionized3(unsigned char functionized3_localFunctionVar0) {
	return (min (var_1_3 , functionized3_localFunctionVar0));
}
void functionized4(void) {
	if (var_1_2) {
		var_1_12 = var_1_13;
	}
}
void functionized5(unsigned char functionized5_localFunctionVar0, unsigned short int functionized5_localFunctionVar1, unsigned char functionized5_localFunctionVar2, unsigned char functionized5_localFunctionVar3, signed long int localFunctionVar4) {
	if ((8 - localFunctionVar4) <= (functionized5_localFunctionVar1 - functionized5_localFunctionVar3)) {
		var_1_14 = (min ((functionized5_localFunctionVar2 + functionized5_localFunctionVar0) , var_1_17));
	} else {
		var_1_14 = var_1_17;
	}
}
void functionized6(unsigned long int functionized6_localFunctionVar0, unsigned char functionized6_localFunctionVar1) {
	if (functionized6_localFunctionVar1) {
		var_1_18 = ((functionized6_localFunctionVar0 - var_1_9) - var_1_14);
	} else {
		var_1_18 = (max ((functionized6_localFunctionVar0 - var_1_17) , var_1_15));
	}
}
unsigned char functionized7(unsigned short int functionized7_localFunctionVar0, unsigned char functionized7_localFunctionVar1) {
	return ((var_1_5 / var_1_19) <= (min (functionized7_localFunctionVar1 , functionized7_localFunctionVar0)));
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch70functionizing
	if (var_1_3 >= (- (min (var_1_4 , var_1_5)))) {
		var_1_1 = functionized0();
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch70functionizing
	if (var_1_6 > functionized1(var_1_8)) {
		if (! ((var_1_1 == var_1_7) && (var_1_2 || var_1_10))) {
			if (functionized2(var_1_7)) {
				var_1_9 = functionized3(var_1_4);
			}
		} else {
			var_1_9 = var_1_4;
		}
	}


	// From: Req3Batch70functionizing
	var_1_11 = (var_1_3 + ((min (var_1_9 , var_1_4)) + 2u));


	// From: Req4Batch70functionizing
	functionized4();


	// From: Req5Batch70functionizing
	functionized5(var_1_16, var_1_9, var_1_15, var_1_3, 64);


	// From: Req6Batch70functionizing
	functionized6(var_1_19, var_1_13);


	// From: Req7Batch70functionizing
	if (functionized7(var_1_9, var_1_4)) {
		var_1_20 = var_1_13;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 255);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 2305843.009213691400e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691400e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 3221225470);
	assume_abort_if_not(var_1_19 <= 4294967294);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_3 >= (- (min (var_1_4 , var_1_5)))) ? (var_1_1 == ((double) (((var_1_6 - var_1_7) - (max (64.75 , 128.725))) + var_1_8))) : (var_1_1 == ((double) var_1_7))) && ((var_1_6 > (min (var_1_8 , var_1_1))) ? ((! ((var_1_1 == var_1_7) && (var_1_2 || var_1_10))) ? ((! (var_1_6 <= var_1_7)) ? (var_1_9 == ((unsigned short int) (min (var_1_3 , var_1_4)))) : 1) : (var_1_9 == ((unsigned short int) var_1_4))) : 1)) && (var_1_11 == ((unsigned long int) (var_1_3 + ((min (var_1_9 , var_1_4)) + 2u))))) && (var_1_2 ? (var_1_12 == ((unsigned char) var_1_13)) : 1)) && (((8 - 64) <= (var_1_9 - var_1_3)) ? (var_1_14 == ((unsigned char) (min ((var_1_15 + var_1_16) , var_1_17)))) : (var_1_14 == ((unsigned char) var_1_17)))) && (var_1_13 ? (var_1_18 == ((unsigned long int) ((var_1_19 - var_1_9) - var_1_14))) : (var_1_18 == ((unsigned long int) (max ((var_1_19 - var_1_17) , var_1_15)))))) && (((var_1_5 / var_1_19) <= (min (var_1_4 , var_1_9))) ? (var_1_20 == ((unsigned char) var_1_13)) : 1)
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
