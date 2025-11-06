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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch54has_floats.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 16;
signed long int var_1_2 = 256;
unsigned char var_1_3 = 10;
unsigned char var_1_4 = 0;
signed long int var_1_5 = 0;
unsigned char var_1_6 = 1;
float var_1_7 = 8.0;
float var_1_8 = 0.0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 5;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 5;
unsigned short int var_1_15 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch54has_floats
	signed long int stepLocal_0 = -4;
	if (stepLocal_0 >= var_1_2) {
		var_1_1 = (min (var_1_3 , (abs (1))));
	}


	// From: Req2Batch54has_floats
	signed long int stepLocal_1 = 8 * var_1_2;
	if (stepLocal_1 == (max (10 , var_1_5))) {
		if (var_1_6) {
			var_1_4 = ((var_1_7 < var_1_8) && (var_1_9 && var_1_10));
		} else {
			var_1_4 = 0;
		}
	} else {
		var_1_4 = var_1_11;
	}


	// From: Req4Batch54has_floats
	var_1_15 = (max ((max (32 , var_1_13)) , (max (var_1_1 , var_1_3))));


	// From: Req3Batch54has_floats
	if (var_1_7 >= var_1_8) {
		if ((var_1_2 ^ var_1_5) == var_1_15) {
			var_1_12 = (128 - (var_1_13 - (var_1_14 + 1)));
		}
	} else {
		var_1_12 = var_1_13;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 254);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 63);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((-4 >= var_1_2) ? (var_1_1 == ((unsigned char) (min (var_1_3 , (abs (1)))))) : 1) && (((8 * var_1_2) == (max (10 , var_1_5))) ? (var_1_6 ? (var_1_4 == ((unsigned char) ((var_1_7 < var_1_8) && (var_1_9 && var_1_10)))) : (var_1_4 == ((unsigned char) 0))) : (var_1_4 == ((unsigned char) var_1_11)))) && ((var_1_7 >= var_1_8) ? (((var_1_2 ^ var_1_5) == var_1_15) ? (var_1_12 == ((unsigned char) (128 - (var_1_13 - (var_1_14 + 1))))) : 1) : (var_1_12 == ((unsigned char) var_1_13)))) && (var_1_15 == ((unsigned short int) (max ((max (32 , var_1_13)) , (max (var_1_1 , var_1_3))))))
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
