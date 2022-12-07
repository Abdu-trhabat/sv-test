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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch6150_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 8.5;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 50;
unsigned long int var_1_6 = 4;
float var_1_7 = 15.8;
float var_1_8 = 64.25;
signed long int var_1_9 = -50;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 3207304078;
unsigned long int var_1_15 = 50;
unsigned long int var_1_16 = 25;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned short int var_1_20 = 1;
unsigned long int var_1_21 = 50;
signed char var_1_22 = -4;
signed char var_1_23 = -10;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_9 = -50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch6150_1loop
	signed long int stepLocal_0 = last_1_var_1_9;
	if (stepLocal_0 < last_1_var_1_9) {
		var_1_4 = (max (var_1_5 , var_1_6));
	}


	// From: Req7Batch6150_1loop
	var_1_21 = var_1_6;


	// From: Req8Batch6150_1loop
	var_1_22 = var_1_23;


	// From: Req1Batch6150_1loop
	if ((var_1_21 / (abs (64u))) == var_1_4) {
		var_1_1 = (8.8 - 255.2);
	}


	// From: Req4Batch6150_1loop
	unsigned long int stepLocal_4 = 4256310412u - 128u;
	if (var_1_4 >= stepLocal_4) {
		var_1_9 = ((abs (var_1_22 + var_1_22)) + var_1_22);
	}


	// From: Req3Batch6150_1loop
	signed long int stepLocal_3 = var_1_9;
	unsigned long int stepLocal_2 = max (var_1_21 , var_1_5);
	unsigned long int stepLocal_1 = var_1_21 ^ 4u;
	if (var_1_9 <= stepLocal_2) {
		if (stepLocal_3 < var_1_5) {
			if (var_1_9 >= stepLocal_1) {
				var_1_7 = var_1_8;
			}
		} else {
			var_1_7 = var_1_8;
		}
	} else {
		var_1_7 = var_1_8;
	}


	// From: Req5Batch6150_1loop
	if (var_1_21 >= (var_1_14 - (min (var_1_15 , var_1_16)))) {
		if (var_1_16 < var_1_9) {
			var_1_13 = var_1_17;
		} else {
			var_1_13 = var_1_17;
		}
	} else {
		var_1_13 = var_1_18;
	}


	// From: Req6Batch6150_1loop
	signed long int stepLocal_5 = (var_1_22 / 2) / var_1_20;
	if (stepLocal_5 >= (~ 100)) {
		if (var_1_13) {
			var_1_19 = (var_1_17 && var_1_18);
		}
	} else {
		if (var_1_17) {
			var_1_19 = var_1_18;
		} else {
			var_1_19 = var_1_18;
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 65535);
	assume_abort_if_not(var_1_20 != 0);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -127);
	assume_abort_if_not(var_1_23 <= 126);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
}

int property() {
	return (((((((((var_1_21 / (abs (64u))) == var_1_4) ? (var_1_1 == ((double) (8.8 - 255.2))) : 1) && ((last_1_var_1_9 < last_1_var_1_9) ? (var_1_4 == ((unsigned long int) (max (var_1_5 , var_1_6)))) : 1)) && ((var_1_9 <= (max (var_1_21 , var_1_5))) ? ((var_1_9 < var_1_5) ? ((var_1_9 >= (var_1_21 ^ 4u)) ? (var_1_7 == ((float) var_1_8)) : 1) : (var_1_7 == ((float) var_1_8))) : (var_1_7 == ((float) var_1_8)))) && ((var_1_4 >= (4256310412u - 128u)) ? (var_1_9 == ((signed long int) ((abs (var_1_22 + var_1_22)) + var_1_22))) : 1)) && ((var_1_21 >= (var_1_14 - (min (var_1_15 , var_1_16)))) ? ((var_1_16 < var_1_9) ? (var_1_13 == ((unsigned char) var_1_17)) : (var_1_13 == ((unsigned char) var_1_17))) : (var_1_13 == ((unsigned char) var_1_18)))) && ((((var_1_22 / 2) / var_1_20) >= (~ 100)) ? (var_1_13 ? (var_1_19 == ((unsigned char) (var_1_17 && var_1_18))) : 1) : (var_1_17 ? (var_1_19 == ((unsigned char) var_1_18)) : (var_1_19 == ((unsigned char) var_1_18))))) && (var_1_21 == ((unsigned long int) var_1_6))) && (var_1_22 == ((signed char) var_1_23))
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
