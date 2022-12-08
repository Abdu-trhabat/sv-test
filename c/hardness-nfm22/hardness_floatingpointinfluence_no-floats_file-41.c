// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch41no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -16;
unsigned char var_1_5 = 0;
signed char var_1_6 = -8;
signed char var_1_7 = 5;
unsigned short int var_1_8 = 2;
unsigned char var_1_11 = 0;
signed long int var_1_12 = 8;
signed long int var_1_13 = 999999999;
signed long int var_1_14 = 10;
signed char var_1_15 = -1;
unsigned char var_1_16 = 16;
unsigned char var_1_17 = 64;

// Calibration values

// Last'ed variables
signed char last_1_var_1_1 = -16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch41no_floats
	if (var_1_5 && (last_1_var_1_1 <= last_1_var_1_1)) {
		var_1_16 = var_1_17;
	}


	// From: Req3Batch41no_floats
	var_1_12 = (var_1_13 - 8.3);


	// From: Req4Batch41no_floats
	unsigned char stepLocal_1 = var_1_13 >= var_1_12;
	if (var_1_5 && stepLocal_1) {
		var_1_14 = var_1_16;
	} else {
		var_1_14 = var_1_15;
	}


	// From: Req2Batch41no_floats
	if (var_1_5) {
		var_1_8 = (var_1_16 + var_1_16);
	} else {
		if ((var_1_16 > var_1_14) || var_1_11) {
			var_1_8 = var_1_16;
		} else {
			var_1_8 = var_1_16;
		}
	}


	// From: Req1Batch41no_floats
	unsigned long int stepLocal_0 = (var_1_8 & 0u) * var_1_16;
	if (stepLocal_0 > var_1_8) {
		if (var_1_5) {
			var_1_1 = ((16 + var_1_6) + var_1_7);
		} else {
			var_1_1 = (abs (var_1_6));
		}
	} else {
		var_1_1 = var_1_6;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -31);
	assume_abort_if_not(var_1_6 <= 31);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -128);
	assume_abort_if_not(var_1_15 <= 127);
	assume_abort_if_not(var_1_15 != 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
}

int property() {
	return (((((((var_1_8 & 0u) * var_1_16) > var_1_8) ? (var_1_5 ? (var_1_1 == ((signed char) ((16 + var_1_6) + var_1_7))) : (var_1_1 == ((signed char) (abs (var_1_6))))) : (var_1_1 == ((signed char) var_1_6))) && (var_1_5 ? (var_1_8 == ((unsigned short int) (var_1_16 + var_1_16))) : (((var_1_16 > var_1_14) || var_1_11) ? (var_1_8 == ((unsigned short int) var_1_16)) : (var_1_8 == ((unsigned short int) var_1_16))))) && (var_1_12 == ((signed long int) (var_1_13 - 8.3)))) && ((var_1_5 && (var_1_13 >= var_1_12)) ? (var_1_14 == ((signed long int) var_1_16)) : (var_1_14 == ((signed long int) var_1_15)))) && ((var_1_5 && (last_1_var_1_1 <= last_1_var_1_1)) ? (var_1_16 == ((unsigned char) var_1_17)) : 1)
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
