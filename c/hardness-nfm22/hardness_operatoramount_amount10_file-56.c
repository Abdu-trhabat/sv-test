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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch56Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 2;
signed short int var_1_4 = 8;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_4 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch56Amount10
	signed long int stepLocal_0 = last_1_var_1_4;
	if (stepLocal_0 < last_1_var_1_4) {
		var_1_1 = (min (last_1_var_1_4 , last_1_var_1_4));
	}


	// From: Req2Batch56Amount10
	signed long int stepLocal_1 = min (var_1_1 , (max (8 , var_1_1)));
	if (stepLocal_1 <= last_1_var_1_4) {
		var_1_4 = -1;
	} else {
		var_1_4 = last_1_var_1_4;
	}
}



void updateVariables() {
}



void updateLastVariables() {
	last_1_var_1_4 = var_1_4;
}

int property() {
	return ((last_1_var_1_4 < last_1_var_1_4) ? (var_1_1 == ((unsigned short int) (min (last_1_var_1_4 , last_1_var_1_4)))) : 1) && (((min (var_1_1 , (max (8 , var_1_1)))) <= last_1_var_1_4) ? (var_1_4 == ((signed short int) -1)) : (var_1_4 == ((signed short int) last_1_var_1_4)))
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
