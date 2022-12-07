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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch40no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -4;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned char var_1_7 = 64;
signed long int var_1_8 = -2;
signed long int var_1_9 = -10;
unsigned char var_1_11 = 128;
unsigned char var_1_12 = 1;
signed long int var_1_13 = 8;
signed long int var_1_15 = 49;
signed char var_1_16 = -2;
signed char var_1_17 = 25;
signed char var_1_18 = -5;
signed long int var_1_19 = 7;
signed short int var_1_20 = 1;
signed short int var_1_21 = -256;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_13 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch40no_floats
	if (var_1_3) {
		var_1_16 = (max (var_1_17 , (-2 + var_1_18)));
	}


	// From: Req5Batch40no_floats
	var_1_19 = var_1_15;


	// From: Req6Batch40no_floats
	var_1_20 = var_1_16;


	// From: Req7Batch40no_floats
	var_1_21 = var_1_18;


	// From: Req1Batch40no_floats
	if (var_1_2) {
		if (var_1_3 && (var_1_19 <= (- 63.9f))) {
			if (var_1_19 >= var_1_19) {
				if (var_1_3) {
					var_1_1 = var_1_21;
				}
			}
		}
	}


	// From: Req2Batch40no_floats
	if (((var_1_16 / var_1_8) / var_1_9) >= (var_1_21 | var_1_16)) {
		var_1_7 = (var_1_11 - var_1_12);
	} else {
		var_1_7 = var_1_12;
	}


	// From: Req3Batch40no_floats
	if (var_1_19 != (min (last_1_var_1_13 , var_1_19))) {
		var_1_13 = (var_1_15 + (127.4 - 8.25));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 127);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483648);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
}

int property() {
	return ((((((var_1_2 ? ((var_1_3 && (var_1_19 <= (- 63.9f))) ? ((var_1_19 >= var_1_19) ? (var_1_3 ? (var_1_1 == ((signed long int) var_1_21)) : 1) : 1) : 1) : 1) && ((((var_1_16 / var_1_8) / var_1_9) >= (var_1_21 | var_1_16)) ? (var_1_7 == ((unsigned char) (var_1_11 - var_1_12))) : (var_1_7 == ((unsigned char) var_1_12)))) && ((var_1_19 != (min (last_1_var_1_13 , var_1_19))) ? (var_1_13 == ((signed long int) (var_1_15 + (127.4 - 8.25)))) : 1)) && (var_1_3 ? (var_1_16 == ((signed char) (max (var_1_17 , (-2 + var_1_18))))) : 1)) && (var_1_19 == ((signed long int) var_1_15))) && (var_1_20 == ((signed short int) var_1_16))) && (var_1_21 == ((signed short int) var_1_18))
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
