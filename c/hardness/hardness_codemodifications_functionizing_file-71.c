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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch71functionizing.c", 13, "reach_error"); }
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
signed long int functionized1(unsigned short int);
void functionized2(signed char);
void functionized3(signed long int, float, float, float);
void functionized4(void);
void functionized5(signed char, unsigned short int, signed char, signed long int);
void functionized6(unsigned char);
void functionized7(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 32;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
signed char var_1_4 = -1;
signed char var_1_5 = 4;
signed long int var_1_6 = -100000;
signed long int var_1_7 = 0;
signed long int var_1_8 = 256;
unsigned short int var_1_9 = 35831;
float var_1_10 = 1.875;
float var_1_11 = 5.8;
float var_1_12 = 2.375;
float var_1_13 = 999999999999.75;
unsigned long int var_1_14 = 64;
double var_1_15 = 255.5;
double var_1_16 = 127.5;
unsigned long int var_1_17 = 1259086625;
unsigned long int var_1_18 = 1670092463;
signed long int var_1_19 = 2;
signed long int var_1_20 = -64;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned short int var_1_25 = 10;

// Calibration values

// Last'ed variables

// Additional functions
signed long int functionized0(void) {
	return ((var_1_6 + var_1_7) * var_1_8);
}
signed long int functionized1(unsigned short int functionized1_localFunctionVar0) {
	return (functionized1_localFunctionVar0 - var_1_5);
}
void functionized2(signed char functionized2_localFunctionVar0) {
	if (var_1_3) {
		var_1_1 = 32;
	} else {
		var_1_1 = functionized2_localFunctionVar0;
	}
}
void functionized3(signed long int functionized3_localFunctionVar0, float functionized3_localFunctionVar1, float localFunctionVar2, float localFunctionVar3) {
	if (var_1_10 >= ((functionized3_localFunctionVar1 / var_1_13) / localFunctionVar3)) {
		if (functionized3_localFunctionVar0 > var_1_4) {
			var_1_12 = functionized3_localFunctionVar1;
		} else {
			var_1_12 = localFunctionVar2;
		}
	}
}
void functionized4(void) {
	if (! var_1_3) {
		var_1_19 = (var_1_5 + 256);
	}
}
void functionized5(signed char functionized5_localFunctionVar0, unsigned short int functionized5_localFunctionVar1, signed char functionized5_localFunctionVar2, signed long int localFunctionVar3) {
	if (functionized5_localFunctionVar1 == functionized5_localFunctionVar0) {
		var_1_20 = (max (functionized5_localFunctionVar2 , (var_1_1 + localFunctionVar3)));
	}
}
void functionized6(unsigned char functionized6_localFunctionVar0) {
	var_1_21 = (! (functionized6_localFunctionVar0 || (var_1_23 || var_1_24)));
}
void functionized7(void) {
	var_1_25 = 16;
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch71functionizing
	if (var_1_2) {
		if ((var_1_4 - var_1_5) > functionized0()) {
			var_1_1 = functionized1(var_1_9);
		}
	} else {
		functionized2(var_1_5);
	}


	// From: Req2Batch71functionizing
	var_1_10 = var_1_11;


	// From: Req3Batch71functionizing
	functionized3(var_1_6, var_1_11, 3.125f, 31.9f);


	// From: Req4Batch71functionizing
	if ((var_1_15 - var_1_16) > var_1_13) {
		if ((min (var_1_1 , var_1_9)) <= (max (var_1_8 , (abs (var_1_4))))) {
			var_1_14 = (var_1_1 + var_1_9);
		} else {
			var_1_14 = (var_1_5 + var_1_9);
		}
	} else {
		var_1_14 = (3919152995u - ((min (var_1_17 , var_1_18)) - var_1_1));
	}


	// From: Req5Batch71functionizing
	functionized4();


	// From: Req6Batch71functionizing
	functionized5(var_1_5, var_1_9, var_1_4, -8);


	// From: Req7Batch71functionizing
	functionized6(var_1_22);


	// From: Req8Batch71functionizing
	functionized7();
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 1073741823);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 1073741823);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 ? (((var_1_4 - var_1_5) > ((var_1_6 + var_1_7) * var_1_8)) ? (var_1_1 == ((unsigned short int) (var_1_9 - var_1_5))) : 1) : (var_1_3 ? (var_1_1 == ((unsigned short int) 32)) : (var_1_1 == ((unsigned short int) var_1_5)))) && (var_1_10 == ((float) var_1_11))) && ((var_1_10 >= ((var_1_11 / var_1_13) / 31.9f)) ? ((var_1_6 > var_1_4) ? (var_1_12 == ((float) var_1_11)) : (var_1_12 == ((float) 3.125f))) : 1)) && (((var_1_15 - var_1_16) > var_1_13) ? (((min (var_1_1 , var_1_9)) <= (max (var_1_8 , (abs (var_1_4))))) ? (var_1_14 == ((unsigned long int) (var_1_1 + var_1_9))) : (var_1_14 == ((unsigned long int) (var_1_5 + var_1_9)))) : (var_1_14 == ((unsigned long int) (3919152995u - ((min (var_1_17 , var_1_18)) - var_1_1)))))) && ((! var_1_3) ? (var_1_19 == ((signed long int) (var_1_5 + 256))) : 1)) && ((var_1_9 == var_1_5) ? (var_1_20 == ((signed long int) (max (var_1_4 , (var_1_1 + -8))))) : 1)) && (var_1_21 == ((unsigned char) (! (var_1_22 || (var_1_23 || var_1_24)))))) && (var_1_25 == ((unsigned short int) 16))
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
