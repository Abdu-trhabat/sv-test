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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12725_1loop.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned long int var_1_2 = 0;
unsigned long int var_1_3 = 100;
unsigned char var_1_4 = 0;
unsigned char var_1_6 = 1;
signed short int var_1_7 = -64;
signed short int var_1_8 = 0;
signed short int var_1_9 = 256;
unsigned long int var_1_10 = 1;
unsigned long int var_1_11 = 2;
unsigned long int var_1_12 = 1871046053;
unsigned long int var_1_13 = 64;
unsigned long int var_1_14 = 1;
unsigned long int var_1_15 = 5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch12725_1loop
	unsigned long int stepLocal_0 = var_1_3;
	if (var_1_2 != stepLocal_0) {
		var_1_7 = ((max (var_1_8 , var_1_9)) - 256);
	}


	// From: Req3Batch12725_1loop
	if ((var_1_2 * (var_1_7 & var_1_8)) <= var_1_3) {
		var_1_10 = var_1_11;
	} else {
		if (-128 < var_1_8) {
			var_1_10 = ((var_1_12 - (var_1_13 + var_1_14)) + var_1_15);
		} else {
			var_1_10 = var_1_15;
		}
	}


	// From: Req1Batch12725_1loop
	if ((max (0u , var_1_10)) > (~ var_1_10)) {
		var_1_1 = ((! var_1_4) && (last_1_var_1_1 || var_1_6));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -1);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 1073741823);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 536870912);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 536870911);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
}

int property(void) {
	return ((((max (0u , var_1_10)) > (~ var_1_10)) ? (var_1_1 == ((unsigned char) ((! var_1_4) && (last_1_var_1_1 || var_1_6)))) : 1) && ((var_1_2 != var_1_3) ? (var_1_7 == ((signed short int) ((max (var_1_8 , var_1_9)) - 256))) : 1)) && (((var_1_2 * (var_1_7 & var_1_8)) <= var_1_3) ? (var_1_10 == ((unsigned long int) var_1_11)) : ((-128 < var_1_8) ? (var_1_10 == ((unsigned long int) ((var_1_12 - (var_1_13 + var_1_14)) + var_1_15))) : (var_1_10 == ((unsigned long int) var_1_15))))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
