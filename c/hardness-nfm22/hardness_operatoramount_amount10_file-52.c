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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch52Amount10.c", 13, "reach_error"); }
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
signed long int var_1_6 = 8;
unsigned short int var_1_7 = 64;
unsigned char var_1_8 = 1;
unsigned short int var_1_9 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_7 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch52Amount10
	if ((last_1_var_1_7 * last_1_var_1_7) != (last_1_var_1_7 - last_1_var_1_7)) {
		var_1_1 = (min (last_1_var_1_7 , last_1_var_1_7));
	}


	// From: Req2Batch52Amount10
	signed long int stepLocal_0 = var_1_1;
	if (var_1_8) {
		if (stepLocal_0 >= (var_1_6 * last_1_var_1_7)) {
			var_1_7 = var_1_9;
		}
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483647);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
}

int property() {
	return (((last_1_var_1_7 * last_1_var_1_7) != (last_1_var_1_7 - last_1_var_1_7)) ? (var_1_1 == ((signed long int) (min (last_1_var_1_7 , last_1_var_1_7)))) : 1) && (var_1_8 ? ((var_1_1 >= (var_1_6 * last_1_var_1_7)) ? (var_1_7 == ((unsigned short int) var_1_9)) : 1) : 1)
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
