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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch44no_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = 32;
signed char var_1_2 = -32;
signed char var_1_3 = -25;
signed char var_1_4 = -64;
signed char var_1_5 = -1;
signed char var_1_6 = 50;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
signed long int var_1_12 = 2;
signed long int var_1_13 = 4;
signed long int var_1_14 = -32;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch44no_floats
	signed long int stepLocal_1 = (min (var_1_4 , var_1_3)) / var_1_7;
	signed char stepLocal_0 = var_1_4;
	if (stepLocal_0 > (var_1_5 - var_1_6)) {
		if (stepLocal_1 <= var_1_6) {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = var_1_3;
	}


	// From: Req3Batch44no_floats
	if ((var_1_12 - (min (var_1_13 , 64))) >= var_1_14) {
		if ((var_1_6 + 100) != (max (-10 , (var_1_3 & var_1_1)))) {
			var_1_11 = var_1_10;
		} else {
			var_1_11 = 0;
		}
	}


	// From: Req2Batch44no_floats
	signed long int stepLocal_3 = var_1_1;
	signed long int stepLocal_2 = var_1_2 * (var_1_4 * var_1_6);
	if (var_1_11) {
		if (stepLocal_3 > var_1_2) {
			var_1_8 = (! var_1_10);
		} else {
			if ((var_1_1 % var_1_7) < stepLocal_2) {
				var_1_8 = var_1_10;
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -128);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 255);
	assume_abort_if_not(var_1_7 != 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_4 > (var_1_5 - var_1_6)) ? ((((min (var_1_4 , var_1_3)) / var_1_7) <= var_1_6) ? (var_1_1 == ((signed long int) var_1_7)) : 1) : (var_1_1 == ((signed long int) var_1_3))) && (var_1_11 ? ((var_1_1 > var_1_2) ? (var_1_8 == ((unsigned char) (! var_1_10))) : (((var_1_1 % var_1_7) < (var_1_2 * (var_1_4 * var_1_6))) ? (var_1_8 == ((unsigned char) var_1_10)) : 1)) : 1)) && (((var_1_12 - (min (var_1_13 , 64))) >= var_1_14) ? (((var_1_6 + 100) != (max (-10 , (var_1_3 & var_1_1)))) ? (var_1_11 == ((unsigned char) var_1_10)) : (var_1_11 == ((unsigned char) 0))) : 1)
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
