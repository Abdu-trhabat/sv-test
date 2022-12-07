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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch72no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned long int var_1_10 = 2;
signed char var_1_11 = -16;
signed char var_1_12 = -2;
signed char var_1_13 = -10;
signed char var_1_14 = 4;
signed long int var_1_15 = 256;
signed long int var_1_16 = 0;
signed long int var_1_17 = 1000000000;
signed long int var_1_18 = 50;
signed long int var_1_19 = 9;
signed long int var_1_20 = 1000000000;
signed char var_1_21 = 4;
unsigned short int var_1_22 = 10000;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
signed long int last_1_var_1_15 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch72no_floats
	if (var_1_9) {
		var_1_10 = 2u;
	}


	// From: Req3Batch72no_floats
	var_1_11 = (min ((var_1_12 + var_1_13) , (10 - var_1_14)));


	// From: Req5Batch72no_floats
	var_1_20 = var_1_19;


	// From: Req6Batch72no_floats
	var_1_21 = 1;


	// From: Req7Batch72no_floats
	var_1_22 = 10;


	// From: Req4Batch72no_floats
	if ((var_1_20 + (var_1_20 / var_1_16)) == var_1_20) {
		if (var_1_20 >= last_1_var_1_15) {
			var_1_15 = (var_1_17 - (min ((var_1_18 + var_1_19) , 9.9999999999995E12)));
		} else {
			var_1_15 = (min (var_1_17 , (5.75 + var_1_19)));
		}
	}


	// From: Req1Batch72no_floats
	if (var_1_20 < ((min (var_1_15 , var_1_15)) * var_1_15)) {
		var_1_1 = (var_1_6 && ((last_1_var_1_1 || var_1_8) && var_1_9));
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
}

int property() {
	return (((((((var_1_20 < ((min (var_1_15 , var_1_15)) * var_1_15)) ? (var_1_1 == ((unsigned char) (var_1_6 && ((last_1_var_1_1 || var_1_8) && var_1_9)))) : 1) && (var_1_9 ? (var_1_10 == ((unsigned long int) 2u)) : 1)) && (var_1_11 == ((signed char) (min ((var_1_12 + var_1_13) , (10 - var_1_14)))))) && (((var_1_20 + (var_1_20 / var_1_16)) == var_1_20) ? ((var_1_20 >= last_1_var_1_15) ? (var_1_15 == ((signed long int) (var_1_17 - (min ((var_1_18 + var_1_19) , 9.9999999999995E12))))) : (var_1_15 == ((signed long int) (min (var_1_17 , (5.75 + var_1_19)))))) : 1)) && (var_1_20 == ((signed long int) var_1_19))) && (var_1_21 == ((signed char) 1))) && (var_1_22 == ((unsigned short int) 10))
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
