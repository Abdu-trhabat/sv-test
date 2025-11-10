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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch8625_while.c", 13, "reach_error"); }
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
signed short int var_1_1 = 0;
signed short int var_1_3 = 2;
signed short int var_1_4 = 256;
signed short int var_1_5 = -256;
signed short int var_1_6 = 2;
unsigned char var_1_7 = 4;
signed long int var_1_8 = 4;
signed long int var_1_9 = 5;
signed long int var_1_10 = 64;
unsigned char var_1_11 = 50;
signed short int var_1_12 = -16;
unsigned long int var_1_13 = 3692501140;
unsigned long int var_1_14 = 16;
signed short int var_1_15 = 4;
unsigned char var_1_16 = 0;
unsigned long int var_1_17 = 3790537729;
unsigned char var_1_18 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_16 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch8625_while
	if (! last_1_var_1_16) {
		var_1_1 = (min ((var_1_3 + (var_1_4 + var_1_5)) , var_1_6));
	} else {
		var_1_1 = (min (var_1_4 , var_1_6));
	}


	// From: Req4Batch8625_while
	unsigned long int stepLocal_2 = (var_1_17 - 100u) - (var_1_11 + var_1_1);
	if (stepLocal_2 < var_1_13) {
		var_1_16 = var_1_18;
	}


	// From: Req2Batch8625_while
	signed long int stepLocal_0 = var_1_9 - var_1_10;
	if ((var_1_3 / var_1_8) <= stepLocal_0) {
		if (var_1_16) {
			var_1_7 = var_1_11;
		}
	}


	// From: Req3Batch8625_while
	unsigned long int stepLocal_1 = 0u;
	if (stepLocal_1 >= (max ((var_1_13 - var_1_10) , var_1_14))) {
		var_1_12 = (var_1_15 - var_1_7);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -16383);
	assume_abort_if_not(var_1_3 <= 16383);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -8191);
	assume_abort_if_not(var_1_4 <= 8192);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -8191);
	assume_abort_if_not(var_1_5 <= 8191);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32767);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 2147483647);
	assume_abort_if_not(var_1_13 <= 4294967295);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 3221225471);
	assume_abort_if_not(var_1_17 <= 4294967295);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
}

int property(void) {
	return ((((! last_1_var_1_16) ? (var_1_1 == ((signed short int) (min ((var_1_3 + (var_1_4 + var_1_5)) , var_1_6)))) : (var_1_1 == ((signed short int) (min (var_1_4 , var_1_6))))) && (((var_1_3 / var_1_8) <= (var_1_9 - var_1_10)) ? (var_1_16 ? (var_1_7 == ((unsigned char) var_1_11)) : 1) : 1)) && ((0u >= (max ((var_1_13 - var_1_10) , var_1_14))) ? (var_1_12 == ((signed short int) (var_1_15 - var_1_7))) : 1)) && ((((var_1_17 - 100u) - (var_1_11 + var_1_1)) < var_1_13) ? (var_1_16 == ((unsigned char) var_1_18)) : 1)
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
