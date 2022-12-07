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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch60no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 9999;
signed long int var_1_2 = 64;
signed long int var_1_3 = 31;
signed long int var_1_4 = 1;
unsigned char var_1_5 = 2;
signed long int var_1_6 = 10;
signed long int var_1_7 = 5;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 64;
signed long int var_1_11 = 32;
signed long int var_1_12 = 10;
signed long int var_1_13 = 4;
signed long int var_1_14 = 999;
signed long int var_1_15 = 2;
signed long int var_1_16 = 8;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_16 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch60no_floats
	var_1_1 = (var_1_2 - var_1_3);


	// From: Req2Batch60no_floats
	if ((- var_1_5) >= var_1_6) {
		if (var_1_6 > var_1_5) {
			if (var_1_3 == var_1_1) {
				var_1_4 = (256 - (var_1_5 + 5));
			} else {
				var_1_4 = var_1_5;
			}
		}
	}


	// From: Req3Batch60no_floats
	unsigned char stepLocal_0 = var_1_9;
	if (var_1_8 && stepLocal_0) {
		var_1_7 = ((var_1_10 - var_1_11) + (var_1_12 + (var_1_13 + var_1_14)));
	}


	// From: Req4Batch60no_floats
	var_1_15 = 500.25;


	// From: Req5Batch60no_floats
	if (var_1_2 > last_1_var_1_16) {
		if (var_1_9) {
			if (var_1_3 <= (min (last_1_var_1_16 , var_1_11))) {
				var_1_16 = (var_1_14 + var_1_11);
			}
		}
	} else {
		var_1_16 = var_1_12;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 255);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_16 = var_1_16;
}

int property() {
	return ((((var_1_1 == ((signed long int) (var_1_2 - var_1_3))) && (((- var_1_5) >= var_1_6) ? ((var_1_6 > var_1_5) ? ((var_1_3 == var_1_1) ? (var_1_4 == ((signed long int) (256 - (var_1_5 + 5)))) : (var_1_4 == ((signed long int) var_1_5))) : 1) : 1)) && ((var_1_8 && var_1_9) ? (var_1_7 == ((signed long int) ((var_1_10 - var_1_11) + (var_1_12 + (var_1_13 + var_1_14))))) : 1)) && (var_1_15 == ((signed long int) 500.25))) && ((var_1_2 > last_1_var_1_16) ? (var_1_9 ? ((var_1_3 <= (min (last_1_var_1_16 , var_1_11))) ? (var_1_16 == ((signed long int) (var_1_14 + var_1_11))) : 1) : 1) : (var_1_16 == ((signed long int) var_1_12)))
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
