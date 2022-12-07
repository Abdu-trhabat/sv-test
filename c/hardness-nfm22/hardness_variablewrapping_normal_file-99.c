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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch99normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 255.5;
unsigned char var_1_2 = 16;
float var_1_4 = 1000000000000000.6;
float var_1_5 = 500.5;
float var_1_6 = 99999999999.5;
unsigned char var_1_7 = 1;
float var_1_8 = 127.25;
float var_1_9 = 4.8;
float var_1_10 = 0.4;
signed long int var_1_11 = 0;
signed long int var_1_12 = 256;
signed long int var_1_13 = 25;
signed long int var_1_14 = -5;
signed short int var_1_15 = 2;
signed long int var_1_16 = -50;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch99normal
	signed long int stepLocal_0 = abs (8);
	if (((min (200 , 128)) - var_1_2) > stepLocal_0) {
		var_1_1 = ((min (var_1_4 , var_1_5)) - var_1_6);
	} else {
		if (var_1_7) {
			var_1_1 = ((min (var_1_8 , var_1_9)) + var_1_10);
		}
	}


	// From: Req2Batch99normal
	if ((var_1_5 + var_1_6) == var_1_1) {
		var_1_11 = ((min (var_1_2 , var_1_12)) - var_1_13);
	} else {
		var_1_11 = var_1_13;
	}


	// From: Req3Batch99normal
	signed long int stepLocal_1 = var_1_12 % var_1_15;
	if (var_1_9 == var_1_4) {
		var_1_14 = var_1_13;
	} else {
		if (stepLocal_1 != var_1_13) {
			var_1_14 = (max (((var_1_15 + var_1_2) + var_1_16) , var_1_13));
		} else {
			var_1_14 = var_1_16;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -461168.6018427382800e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -32768);
	assume_abort_if_not(var_1_15 <= 32767);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -1073741823);
	assume_abort_if_not(var_1_16 <= 1073741823);
}



void updateLastVariables() {
}

int property() {
	return (((((min (200 , 128)) - var_1_2) > (abs (8))) ? (var_1_1 == ((float) ((min (var_1_4 , var_1_5)) - var_1_6))) : (var_1_7 ? (var_1_1 == ((float) ((min (var_1_8 , var_1_9)) + var_1_10))) : 1)) && (((var_1_5 + var_1_6) == var_1_1) ? (var_1_11 == ((signed long int) ((min (var_1_2 , var_1_12)) - var_1_13))) : (var_1_11 == ((signed long int) var_1_13)))) && ((var_1_9 == var_1_4) ? (var_1_14 == ((signed long int) var_1_13)) : (((var_1_12 % var_1_15) != var_1_13) ? (var_1_14 == ((signed long int) (max (((var_1_15 + var_1_2) + var_1_16) , var_1_13)))) : (var_1_14 == ((signed long int) var_1_16))))
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
