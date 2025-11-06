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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch114normal.c", 13, "reach_error"); }
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
signed short int var_1_1 = 500;
signed short int var_1_2 = -256;
signed short int var_1_3 = -10;
signed short int var_1_4 = 4;
signed short int var_1_5 = 5;
float var_1_6 = 8.25;
unsigned char var_1_7 = 0;
float var_1_8 = 1.6;
unsigned char var_1_9 = 64;
unsigned long int var_1_10 = 1;
unsigned long int var_1_11 = 128;
unsigned char var_1_12 = 128;
unsigned char var_1_13 = 25;
float var_1_14 = 127.6;
signed char var_1_15 = -5;
float var_1_16 = 7.3;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch114normal
	signed short int stepLocal_0 = var_1_2;
	if (stepLocal_0 > var_1_3) {
		var_1_1 = (min (var_1_4 , var_1_5));
	} else {
		var_1_1 = 32;
	}


	// From: Req2Batch114normal
	if (((var_1_2 * var_1_1) < var_1_5) || var_1_7) {
		if (var_1_7) {
			var_1_6 = var_1_8;
		}
	}


	// From: Req3Batch114normal
	if ((var_1_10 / 1u) != (var_1_11 + 10u)) {
		var_1_9 = ((min (var_1_12 , 128)) - var_1_13);
	}


	// From: Req4Batch114normal
	if ((var_1_4 / (max (var_1_15 , -8))) >= ((var_1_5 | var_1_1) + var_1_13)) {
		var_1_14 = var_1_8;
	} else {
		if (var_1_6 != ((abs (var_1_8)) - var_1_16)) {
			var_1_14 = var_1_8;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32767);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 4294967295);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 4294967295);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 127);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -128);
	assume_abort_if_not(var_1_15 <= 127);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 > var_1_3) ? (var_1_1 == ((signed short int) (min (var_1_4 , var_1_5)))) : (var_1_1 == ((signed short int) 32))) && ((((var_1_2 * var_1_1) < var_1_5) || var_1_7) ? (var_1_7 ? (var_1_6 == ((float) var_1_8)) : 1) : 1)) && (((var_1_10 / 1u) != (var_1_11 + 10u)) ? (var_1_9 == ((unsigned char) ((min (var_1_12 , 128)) - var_1_13))) : 1)) && (((var_1_4 / (max (var_1_15 , -8))) >= ((var_1_5 | var_1_1) + var_1_13)) ? (var_1_14 == ((float) var_1_8)) : ((var_1_6 != ((abs (var_1_8)) - var_1_16)) ? (var_1_14 == ((float) var_1_8)) : 1))
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
