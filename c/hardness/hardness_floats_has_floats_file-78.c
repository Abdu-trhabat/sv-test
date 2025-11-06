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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch78has_floats.c", 13, "reach_error"); }
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


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -200;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
unsigned long int var_1_4 = 4;
unsigned long int var_1_5 = 0;
signed long int var_1_6 = 128;
signed long int var_1_7 = 10;
signed long int var_1_8 = 1000000;
float var_1_9 = 10.0;
signed short int var_1_10 = -32;
signed long int var_1_11 = 16;
float var_1_12 = -4.0;
float var_1_13 = -2.0;
unsigned long int var_1_14 = 5;
unsigned short int var_1_15 = 39059;
unsigned short int var_1_16 = 32;
unsigned long int var_1_17 = 1328226786;
unsigned long int var_1_18 = 1490462333;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 50;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch78has_floats
	unsigned char stepLocal_1 = var_1_2;
	unsigned char stepLocal_0 = var_1_4 > var_1_5;
	if (stepLocal_1 && var_1_3) {
		if (var_1_2 && stepLocal_0) {
			var_1_1 = (var_1_6 - var_1_7);
		} else {
			var_1_1 = ((var_1_8 + 5) - var_1_7);
		}
	}


	// From: Req3Batch78has_floats
	unsigned long int stepLocal_4 = var_1_4;
	if (((var_1_15 - var_1_16) % var_1_10) >= stepLocal_4) {
		var_1_14 = ((var_1_17 + var_1_18) - var_1_15);
	} else {
		if (var_1_3) {
			var_1_14 = var_1_17;
		} else {
			var_1_14 = var_1_15;
		}
	}


	// From: Req4Batch78has_floats
	var_1_19 = var_1_20;


	// From: Req2Batch78has_floats
	signed long int stepLocal_3 = var_1_7 / var_1_10;
	signed long int stepLocal_2 = var_1_7;
	if (stepLocal_3 < (min (var_1_11 , 128))) {
		if (var_1_14 >= stepLocal_2) {
			var_1_9 = var_1_12;
		} else {
			var_1_9 = var_1_13;
		}
	} else {
		var_1_9 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32768);
	assume_abort_if_not(var_1_10 <= 32767);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 32767);
	assume_abort_if_not(var_1_15 <= 65535);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 1073741823);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 1073741824);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 && var_1_3) ? ((var_1_2 && (var_1_4 > var_1_5)) ? (var_1_1 == ((signed long int) (var_1_6 - var_1_7))) : (var_1_1 == ((signed long int) ((var_1_8 + 5) - var_1_7)))) : 1) && (((var_1_7 / var_1_10) < (min (var_1_11 , 128))) ? ((var_1_14 >= var_1_7) ? (var_1_9 == ((float) var_1_12)) : (var_1_9 == ((float) var_1_13))) : (var_1_9 == ((float) var_1_12)))) && ((((var_1_15 - var_1_16) % var_1_10) >= var_1_4) ? (var_1_14 == ((unsigned long int) ((var_1_17 + var_1_18) - var_1_15))) : (var_1_3 ? (var_1_14 == ((unsigned long int) var_1_17)) : (var_1_14 == ((unsigned long int) var_1_15))))) && (var_1_19 == ((unsigned char) var_1_20))
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
