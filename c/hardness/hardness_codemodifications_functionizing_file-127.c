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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch127functionizing.c", 13, "reach_error"); }
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
unsigned char functionized0(void);
void functionized1(signed long int);
void functionized2(unsigned char, signed long int);
void functionized3(unsigned char, unsigned char, unsigned char);
signed long int functionized4(unsigned char);
signed long int functionized5(void);
unsigned char functionized6(signed long int, unsigned char);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 50;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 2;
signed long int var_1_4 = 16;
signed long int var_1_5 = 100000;
unsigned char var_1_6 = 1;
signed long int var_1_7 = -128;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned short int var_1_13 = 10;
unsigned short int var_1_14 = 36108;
unsigned char var_1_15 = 64;
unsigned char var_1_16 = 25;
unsigned short int var_1_17 = 64;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 1;

// Calibration values

// Last'ed variables

// Additional functions
unsigned char functionized0(void) {
	return (! var_1_2);
}
void functionized1(signed long int localFunctionVar0) {
	if ((localFunctionVar0 + var_1_3) >= (min (var_1_4 , var_1_5))) {
		var_1_1 = var_1_3;
	} else {
		var_1_1 = -128;
	}
}
void functionized2(unsigned char functionized2_localFunctionVar0, signed long int functionized2_localFunctionVar1) {
	if ((var_1_5 * -8) > functionized2_localFunctionVar1) {
		var_1_6 = (functionized2_localFunctionVar0 || (var_1_2 && var_1_9));
	} else {
		var_1_6 = var_1_10;
	}
}
void functionized3(unsigned char functionized3_localFunctionVar0, unsigned char functionized3_localFunctionVar1, unsigned char functionized3_localFunctionVar2) {
	if (var_1_10) {
		var_1_11 = (functionized3_localFunctionVar1 && (functionized3_localFunctionVar0 && functionized3_localFunctionVar2));
	}
}
signed long int functionized4(unsigned char functionized4_localFunctionVar0) {
	return (abs (functionized4_localFunctionVar0));
}
signed long int functionized5(void) {
	return (max (var_1_3 , (var_1_7 * var_1_14)));
}
unsigned char functionized6(signed long int functionized6_localFunctionVar0, unsigned char functionized6_localFunctionVar1) {
	return ((max (var_1_3 , (var_1_4 * functionized6_localFunctionVar0))) != functionized6_localFunctionVar1);
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch127functionizing
	if (functionized0()) {
		functionized1(4);
	} else {
		var_1_1 = var_1_3;
	}


	// From: Req2Batch127functionizing
	functionized2(var_1_8, var_1_7);


	// From: Req3Batch127functionizing
	functionized3(var_1_8, var_1_2, var_1_9);


	// From: Req4Batch127functionizing
	if (var_1_6) {
		var_1_12 = (! var_1_8);
	} else {
		var_1_12 = (var_1_2 && ((var_1_3 <= var_1_7) && var_1_9));
	}


	// From: Req5Batch127functionizing
	var_1_13 = (var_1_14 - var_1_3);


	// From: Req6Batch127functionizing
	if (var_1_12) {
		var_1_15 = functionized4(var_1_16);
	}


	// From: Req7Batch127functionizing
	if (var_1_12) {
		if (functionized5() <= (max (var_1_13 , var_1_5))) {
			var_1_17 = (var_1_3 + var_1_15);
		} else {
			var_1_17 = (min (var_1_15 , var_1_3));
		}
	}


	// From: Req8Batch127functionizing
	if (functionized6(var_1_1, var_1_15)) {
		var_1_18 = var_1_19;
	} else {
		if (var_1_6 || var_1_2) {
			var_1_18 = var_1_19;
		} else {
			var_1_18 = var_1_16;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((! var_1_2) ? (((4 + var_1_3) >= (min (var_1_4 , var_1_5))) ? (var_1_1 == ((signed long int) var_1_3)) : (var_1_1 == ((signed long int) -128))) : (var_1_1 == ((signed long int) var_1_3))) && (((var_1_5 * -8) > var_1_7) ? (var_1_6 == ((unsigned char) (var_1_8 || (var_1_2 && var_1_9)))) : (var_1_6 == ((unsigned char) var_1_10)))) && (var_1_10 ? (var_1_11 == ((unsigned char) (var_1_2 && (var_1_8 && var_1_9)))) : 1)) && (var_1_6 ? (var_1_12 == ((unsigned char) (! var_1_8))) : (var_1_12 == ((unsigned char) (var_1_2 && ((var_1_3 <= var_1_7) && var_1_9)))))) && (var_1_13 == ((unsigned short int) (var_1_14 - var_1_3)))) && (var_1_12 ? (var_1_15 == ((unsigned char) (abs (var_1_16)))) : 1)) && (var_1_12 ? (((max (var_1_3 , (var_1_7 * var_1_14))) <= (max (var_1_13 , var_1_5))) ? (var_1_17 == ((unsigned short int) (var_1_3 + var_1_15))) : (var_1_17 == ((unsigned short int) (min (var_1_15 , var_1_3))))) : 1)) && (((max (var_1_3 , (var_1_4 * var_1_1))) != var_1_15) ? (var_1_18 == ((unsigned char) var_1_19)) : ((var_1_6 || var_1_2) ? (var_1_18 == ((unsigned char) var_1_19)) : (var_1_18 == ((unsigned char) var_1_16))))
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
