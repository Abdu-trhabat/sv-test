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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch126no_floats.c", 13, "reach_error"); }
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
signed char var_1_1 = 8;
signed char var_1_3 = -16;
signed long int var_1_5 = 8;
signed char var_1_6 = 8;
signed char var_1_7 = 32;
signed char var_1_8 = -8;
signed long int var_1_9 = 128;
signed long int var_1_10 = -8;
signed long int var_1_11 = 1000;
signed long int var_1_12 = -10000;
signed short int var_1_13 = -128;
signed short int var_1_14 = 10;
signed long int var_1_15 = 50;

// Calibration values

// Last'ed variables
signed char last_1_var_1_1 = 8;
signed short int last_1_var_1_13 = -128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch126no_floats
	var_1_15 = var_1_14;


	// From: Req3Batch126no_floats
	signed char stepLocal_4 = var_1_7;
	signed long int stepLocal_3 = 10;
	if (var_1_3 >= stepLocal_3) {
		if (((var_1_15 * var_1_3) * (last_1_var_1_13 + var_1_15)) > stepLocal_4) {
			var_1_13 = last_1_var_1_13;
		} else {
			var_1_13 = ((max (5 , 128)) - var_1_14);
		}
	}


	// From: Req1Batch126no_floats
	signed short int stepLocal_1 = var_1_13;
	signed long int stepLocal_0 = var_1_5;
	if (((var_1_13 / var_1_3) + last_1_var_1_1) != stepLocal_0) {
		if (stepLocal_1 <= last_1_var_1_1) {
			var_1_1 = (min ((var_1_6 + var_1_7) , var_1_8));
		}
	} else {
		var_1_1 = var_1_8;
	}


	// From: Req2Batch126no_floats
	signed long int stepLocal_2 = var_1_15;
	if ((min (var_1_15 , (var_1_13 / var_1_3))) > stepLocal_2) {
		var_1_9 = ((min (var_1_10 , var_1_11)) + var_1_12);
	} else {
		var_1_9 = var_1_10;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -63);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483648);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_13 = var_1_13;
}

int property(void) {
	return ((((((var_1_13 / var_1_3) + last_1_var_1_1) != var_1_5) ? ((var_1_13 <= last_1_var_1_1) ? (var_1_1 == ((signed char) (min ((var_1_6 + var_1_7) , var_1_8)))) : 1) : (var_1_1 == ((signed char) var_1_8))) && (((min (var_1_15 , (var_1_13 / var_1_3))) > var_1_15) ? (var_1_9 == ((signed long int) ((min (var_1_10 , var_1_11)) + var_1_12))) : (var_1_9 == ((signed long int) var_1_10)))) && ((var_1_3 >= 10) ? ((((var_1_15 * var_1_3) * (last_1_var_1_13 + var_1_15)) > var_1_7) ? (var_1_13 == ((signed short int) last_1_var_1_13)) : (var_1_13 == ((signed short int) ((max (5 , 128)) - var_1_14)))) : 1)) && (var_1_15 == ((signed long int) var_1_14))
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
