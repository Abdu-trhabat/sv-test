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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 5;
signed long int var_1_2 = 10;
signed long int var_1_3 = 127;
signed long int var_1_4 = 256;
unsigned char var_1_5 = 1;
signed long int var_1_6 = 5;
unsigned char var_1_7 = 1;
signed long int var_1_10 = 32;
signed long int var_1_11 = 2;
unsigned long int var_1_12 = 16;
unsigned char var_1_13 = 50;
signed long int var_1_15 = 100000000;
signed short int var_1_16 = 2;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_12 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch1no_floats
	if (var_1_2 <= (- var_1_3)) {
		var_1_1 = (abs (var_1_4));
	} else {
		if (var_1_5) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = var_1_4;
		}
	}


	// From: Req5Batch1no_floats
	var_1_16 = var_1_13;


	// From: Req2Batch1no_floats
	unsigned char stepLocal_0 = var_1_7;
	if (var_1_5 || stepLocal_0) {
		var_1_6 = (max (var_1_16 , var_1_16));
	} else {
		var_1_6 = ((var_1_10 + var_1_11) - 4);
	}


	// From: Req3Batch1no_floats
	signed long int stepLocal_3 = var_1_11;
	signed long int stepLocal_2 = var_1_16 + var_1_11;
	signed long int stepLocal_1 = var_1_11 << var_1_16;
	if (stepLocal_1 != (abs (var_1_10))) {
		if ((var_1_16 % var_1_13) >= stepLocal_3) {
			if (stepLocal_2 > (last_1_var_1_12 * var_1_16)) {
				var_1_12 = var_1_13;
			} else {
				var_1_12 = var_1_10;
			}
		}
	}


	// From: Req4Batch1no_floats
	var_1_15 = var_1_16;
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 255);
	assume_abort_if_not(var_1_13 != 0);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
}

int property() {
	return (((((var_1_2 <= (- var_1_3)) ? (var_1_1 == ((signed long int) (abs (var_1_4)))) : (var_1_5 ? (var_1_1 == ((signed long int) var_1_4)) : (var_1_1 == ((signed long int) var_1_4)))) && ((var_1_5 || var_1_7) ? (var_1_6 == ((signed long int) (max (var_1_16 , var_1_16)))) : (var_1_6 == ((signed long int) ((var_1_10 + var_1_11) - 4))))) && (((var_1_11 << var_1_16) != (abs (var_1_10))) ? (((var_1_16 % var_1_13) >= var_1_11) ? (((var_1_16 + var_1_11) > (last_1_var_1_12 * var_1_16)) ? (var_1_12 == ((unsigned long int) var_1_13)) : (var_1_12 == ((unsigned long int) var_1_10))) : 1) : 1)) && (var_1_15 == ((signed long int) var_1_16))) && (var_1_16 == ((signed short int) var_1_13))
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
