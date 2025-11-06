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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch93no_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = -2;
signed long int var_1_2 = -100;
signed long int var_1_3 = -128;
unsigned short int var_1_4 = 8;
signed long int var_1_5 = 100000;
signed long int var_1_6 = 2;
signed long int var_1_7 = 256;
unsigned char var_1_8 = 8;
signed long int var_1_9 = -16;
unsigned char var_1_10 = 100;
unsigned char var_1_11 = 2;
signed long int var_1_12 = -256;
signed long int var_1_13 = -128;
signed long int var_1_14 = 32;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_12 = -256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch93no_floats
	if (8 >= ((min (last_1_var_1_12 , var_1_5)) / var_1_9)) {
		var_1_8 = (var_1_10 + var_1_11);
	} else {
		var_1_8 = var_1_10;
	}


	// From: Req3Batch93no_floats
	if ((- var_1_8) < (var_1_11 * var_1_4)) {
		if (var_1_8 > var_1_13) {
			var_1_12 = (var_1_5 - var_1_14);
		} else {
			if (var_1_15 && var_1_16) {
				var_1_12 = var_1_7;
			}
		}
	} else {
		if (var_1_16) {
			var_1_12 = (max (100 , var_1_5));
		} else {
			var_1_12 = var_1_5;
		}
	}


	// From: Req1Batch93no_floats
	unsigned char stepLocal_0 = var_1_4 > 10;
	if ((var_1_2 < var_1_3) && stepLocal_0) {
		var_1_1 = (max ((var_1_5 - (abs (var_1_6))) , var_1_7));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65535);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
}

int property(void) {
	return ((((var_1_2 < var_1_3) && (var_1_4 > 10)) ? (var_1_1 == ((signed long int) (max ((var_1_5 - (abs (var_1_6))) , var_1_7)))) : 1) && ((8 >= ((min (last_1_var_1_12 , var_1_5)) / var_1_9)) ? (var_1_8 == ((unsigned char) (var_1_10 + var_1_11))) : (var_1_8 == ((unsigned char) var_1_10)))) && (((- var_1_8) < (var_1_11 * var_1_4)) ? ((var_1_8 > var_1_13) ? (var_1_12 == ((signed long int) (var_1_5 - var_1_14))) : ((var_1_15 && var_1_16) ? (var_1_12 == ((signed long int) var_1_7)) : 1)) : (var_1_16 ? (var_1_12 == ((signed long int) (max (100 , var_1_5)))) : (var_1_12 == ((signed long int) var_1_5))))
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
