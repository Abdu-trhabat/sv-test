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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch79no_floats.c", 13, "reach_error"); }
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
signed char var_1_1 = -16;
unsigned char var_1_2 = 1;
signed char var_1_3 = 0;
signed char var_1_4 = 64;
signed char var_1_5 = 64;
signed long int var_1_6 = -64;
unsigned short int var_1_7 = 25;
signed long int var_1_8 = 4;
signed short int var_1_9 = 8;
unsigned char var_1_12 = 5;
signed short int var_1_13 = -500;
signed long int var_1_14 = 100000;
signed long int var_1_15 = -8;
signed short int var_1_16 = -10000;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_16 = -10000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch79no_floats
	var_1_13 = last_1_var_1_16;


	// From: Req6Batch79no_floats
	var_1_16 = (max ((var_1_13 + var_1_9) , (abs (var_1_3))));


	// From: Req1Batch79no_floats
	if (! var_1_2) {
		if (! var_1_2) {
			var_1_1 = (var_1_3 + -32);
		} else {
			var_1_1 = (var_1_4 - (min (var_1_5 , 16)));
		}
	}


	// From: Req5Batch79no_floats
	var_1_14 = var_1_15;


	// From: Req2Batch79no_floats
	signed long int stepLocal_0 = max (var_1_5 , var_1_7);
	if (stepLocal_0 <= (var_1_4 * (var_1_8 >> var_1_9))) {
		if ((- var_1_14) >= var_1_14) {
			var_1_6 = var_1_4;
		} else {
			var_1_6 = var_1_1;
		}
	} else {
		var_1_6 = var_1_9;
	}


	// From: Req3Batch79no_floats
	signed short int stepLocal_1 = var_1_9;
	if ((var_1_3 | var_1_6) > stepLocal_1) {
		var_1_12 = var_1_5;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 65535);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 30);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483648);
	assume_abort_if_not(var_1_15 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
}

int property(void) {
	return ((((((! var_1_2) ? ((! var_1_2) ? (var_1_1 == ((signed char) (var_1_3 + -32))) : (var_1_1 == ((signed char) (var_1_4 - (min (var_1_5 , 16)))))) : 1) && (((max (var_1_5 , var_1_7)) <= (var_1_4 * (var_1_8 >> var_1_9))) ? (((- var_1_14) >= var_1_14) ? (var_1_6 == ((signed long int) var_1_4)) : (var_1_6 == ((signed long int) var_1_1))) : (var_1_6 == ((signed long int) var_1_9)))) && (((var_1_3 | var_1_6) > var_1_9) ? (var_1_12 == ((unsigned char) var_1_5)) : 1)) && (var_1_13 == ((signed short int) last_1_var_1_16))) && (var_1_14 == ((signed long int) var_1_15))) && (var_1_16 == ((signed short int) (max ((var_1_13 + var_1_9) , (abs (var_1_3))))))
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
