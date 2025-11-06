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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch131no_floats.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned long int var_1_2 = 8;
unsigned long int var_1_3 = 64;
unsigned long int var_1_4 = 64;
unsigned long int var_1_5 = 50;
unsigned long int var_1_6 = 16;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
signed short int var_1_9 = 1000;
signed short int var_1_10 = 10;
signed short int var_1_11 = 5;
signed char var_1_12 = -2;
signed char var_1_13 = -16;
signed char var_1_14 = 25;
signed char var_1_15 = 32;
unsigned short int var_1_16 = 32;
unsigned short int var_1_17 = 62289;
unsigned short int var_1_18 = 8;
unsigned short int var_1_19 = 2;
unsigned short int var_1_20 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch131no_floats
	if ((~ (var_1_2 * var_1_3)) < (var_1_4 / (max (var_1_5 , var_1_6)))) {
		var_1_1 = (! (var_1_7 || var_1_8));
	}


	// From: Req2Batch131no_floats
	unsigned long int stepLocal_0 = var_1_5;
	if (stepLocal_0 == (- var_1_3)) {
		var_1_9 = (var_1_10 - var_1_11);
	} else {
		var_1_9 = var_1_10;
	}


	// From: Req3Batch131no_floats
	unsigned long int stepLocal_1 = var_1_4;
	if (stepLocal_1 >= var_1_5) {
		var_1_12 = (min (var_1_13 , var_1_14));
	} else {
		var_1_12 = (max (var_1_13 , (max (var_1_14 , var_1_15))));
	}


	// From: Req4Batch131no_floats
	unsigned long int stepLocal_2 = (var_1_2 / var_1_6) + var_1_5;
	if (var_1_14 <= stepLocal_2) {
		var_1_16 = (var_1_17 - (var_1_18 + (abs (var_1_19))));
	} else {
		var_1_16 = var_1_20;
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
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967295);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -127);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 32767);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 16384);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 16383);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((~ (var_1_2 * var_1_3)) < (var_1_4 / (max (var_1_5 , var_1_6)))) ? (var_1_1 == ((unsigned char) (! (var_1_7 || var_1_8)))) : 1) && ((var_1_5 == (- var_1_3)) ? (var_1_9 == ((signed short int) (var_1_10 - var_1_11))) : (var_1_9 == ((signed short int) var_1_10)))) && ((var_1_4 >= var_1_5) ? (var_1_12 == ((signed char) (min (var_1_13 , var_1_14)))) : (var_1_12 == ((signed char) (max (var_1_13 , (max (var_1_14 , var_1_15)))))))) && ((var_1_14 <= ((var_1_2 / var_1_6) + var_1_5)) ? (var_1_16 == ((unsigned short int) (var_1_17 - (var_1_18 + (abs (var_1_19)))))) : (var_1_16 == ((unsigned short int) var_1_20)))
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
