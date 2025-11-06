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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch128normal.c", 13, "reach_error"); }
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
double var_1_1 = 500.5;
unsigned long int var_1_2 = 1;
unsigned long int var_1_3 = 2;
unsigned long int var_1_4 = 8;
unsigned long int var_1_5 = 4;
unsigned long int var_1_6 = 4136859421;
unsigned long int var_1_7 = 8;
double var_1_8 = 64.5;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned short int var_1_12 = 10;
float var_1_13 = 99.8;
float var_1_14 = 0.0;
float var_1_15 = 256.9;
double var_1_16 = 5.74;
signed char var_1_17 = 0;
signed char var_1_18 = 32;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch128normal
	unsigned long int stepLocal_1 = var_1_4;
	unsigned long int stepLocal_0 = var_1_3 + (var_1_4 + var_1_5);
	if (var_1_2 > stepLocal_0) {
		if (stepLocal_1 >= (var_1_6 - var_1_7)) {
			var_1_1 = var_1_8;
		}
	}


	// From: Req2Batch128normal
	unsigned long int stepLocal_3 = var_1_5;
	unsigned char stepLocal_2 = var_1_10;
	if ((var_1_4 < var_1_3) || stepLocal_2) {
		var_1_9 = var_1_11;
	} else {
		if ((var_1_2 / var_1_12) < stepLocal_3) {
			var_1_9 = var_1_11;
		} else {
			var_1_9 = 0;
		}
	}


	// From: Req3Batch128normal
	if ((~ var_1_6) < (var_1_3 ^ var_1_4)) {
		var_1_13 = (abs ((var_1_14 - var_1_15) - (abs (var_1_8))));
	}


	// From: Req4Batch128normal
	unsigned long int stepLocal_4 = var_1_7 << var_1_5;
	if ((var_1_17 - var_1_18) <= stepLocal_4) {
		var_1_16 = var_1_8;
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
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 2147483647);
	assume_abort_if_not(var_1_6 <= 4294967295);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 65535);
	assume_abort_if_not(var_1_12 != 0);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 4611686.018427383000e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 > (var_1_3 + (var_1_4 + var_1_5))) ? ((var_1_4 >= (var_1_6 - var_1_7)) ? (var_1_1 == ((double) var_1_8)) : 1) : 1) && (((var_1_4 < var_1_3) || var_1_10) ? (var_1_9 == ((unsigned char) var_1_11)) : (((var_1_2 / var_1_12) < var_1_5) ? (var_1_9 == ((unsigned char) var_1_11)) : (var_1_9 == ((unsigned char) 0))))) && (((~ var_1_6) < (var_1_3 ^ var_1_4)) ? (var_1_13 == ((float) (abs ((var_1_14 - var_1_15) - (abs (var_1_8)))))) : 1)) && (((var_1_17 - var_1_18) <= (var_1_7 << var_1_5)) ? (var_1_16 == ((double) var_1_8)) : 1)
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
