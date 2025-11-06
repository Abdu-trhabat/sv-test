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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch113no_floats.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 2;
unsigned long int var_1_2 = 5;
unsigned long int var_1_3 = 32;
unsigned short int var_1_4 = 1;
unsigned short int var_1_5 = 8;
unsigned short int var_1_6 = 64;
signed long int var_1_7 = 10;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 4;
signed char var_1_11 = 4;
signed char var_1_12 = 10;
signed char var_1_13 = -10;
signed char var_1_14 = 10;
signed char var_1_15 = -32;
signed long int var_1_16 = -32;
signed long int var_1_18 = 0;
signed long int var_1_19 = 0;
unsigned long int var_1_20 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch113no_floats
	unsigned long int stepLocal_0 = var_1_2;
	if (stepLocal_0 >= var_1_3) {
		var_1_1 = (min (128 , var_1_4));
	} else {
		var_1_1 = (min ((var_1_5 + var_1_6) , var_1_4));
	}


	// From: Req2Batch113no_floats
	unsigned char stepLocal_1 = var_1_8;
	if (stepLocal_1 || var_1_9) {
		var_1_7 = (-5 + var_1_10);
	}


	// From: Req4Batch113no_floats
	if ((var_1_12 * var_1_1) > var_1_15) {
		var_1_16 = (var_1_18 - var_1_19);
	} else {
		if ((var_1_4 / (3705801857u - var_1_20)) < var_1_5) {
			var_1_16 = var_1_10;
		} else {
			var_1_16 = var_1_19;
		}
	}


	// From: Req3Batch113no_floats
	if (var_1_8) {
		if ((-128 + var_1_16) >= var_1_10) {
			var_1_11 = (abs (var_1_12));
		}
	} else {
		var_1_11 = (min ((var_1_13 + var_1_14) , (var_1_15 + 2)));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 32767);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -126);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 2147483646);
	assume_abort_if_not(var_1_20 != 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 >= var_1_3) ? (var_1_1 == ((unsigned short int) (min (128 , var_1_4)))) : (var_1_1 == ((unsigned short int) (min ((var_1_5 + var_1_6) , var_1_4))))) && ((var_1_8 || var_1_9) ? (var_1_7 == ((signed long int) (-5 + var_1_10))) : 1)) && (var_1_8 ? (((-128 + var_1_16) >= var_1_10) ? (var_1_11 == ((signed char) (abs (var_1_12)))) : 1) : (var_1_11 == ((signed char) (min ((var_1_13 + var_1_14) , (var_1_15 + 2))))))) && (((var_1_12 * var_1_1) > var_1_15) ? (var_1_16 == ((signed long int) (var_1_18 - var_1_19))) : (((var_1_4 / (3705801857u - var_1_20)) < var_1_5) ? (var_1_16 == ((signed long int) var_1_10)) : (var_1_16 == ((signed long int) var_1_19))))
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
