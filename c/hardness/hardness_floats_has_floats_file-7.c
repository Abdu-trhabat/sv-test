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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch7has_floats.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
float var_1_2 = 50.0;
float var_1_3 = -32.0;
float var_1_4 = 8.0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 4;
unsigned long int var_1_8 = 1;
signed short int var_1_9 = 128;
signed char var_1_10 = 10;
unsigned short int var_1_11 = 32;
signed long int var_1_12 = -4;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_11 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch7has_floats
	if (var_1_3 < -1.0f) {
		var_1_8 = (abs (var_1_7));
	} else {
		var_1_8 = (var_1_7 + last_1_var_1_11);
	}


	// From: Req1Batch7has_floats
	if (! (var_1_2 <= (var_1_3 / var_1_4))) {
		if (var_1_5 && var_1_6) {
			var_1_1 = var_1_7;
		} else {
			var_1_1 = 16;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req3Batch7has_floats
	signed long int stepLocal_0 = 128;
	if ((var_1_1 - var_1_7) >= stepLocal_0) {
		var_1_9 = (var_1_1 - (abs (var_1_7)));
	} else {
		var_1_9 = var_1_7;
	}


	// From: Req4Batch7has_floats
	if (var_1_6) {
		var_1_10 = 10;
	}


	// From: Req5Batch7has_floats
	if ((var_1_1 ^ (var_1_8 / var_1_12)) >= var_1_10) {
		if (var_1_12 > var_1_10) {
			var_1_11 = var_1_7;
		} else {
			var_1_11 = var_1_1;
		}
	} else {
		var_1_11 = var_1_7;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	assume_abort_if_not(var_1_4 != 0.0F);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	assume_abort_if_not(var_1_12 != 0);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
}

int property(void) {
	return (((((! (var_1_2 <= (var_1_3 / var_1_4))) ? ((var_1_5 && var_1_6) ? (var_1_1 == ((unsigned char) var_1_7)) : (var_1_1 == ((unsigned char) 16))) : (var_1_1 == ((unsigned char) var_1_7))) && ((var_1_3 < -1.0f) ? (var_1_8 == ((unsigned long int) (abs (var_1_7)))) : (var_1_8 == ((unsigned long int) (var_1_7 + last_1_var_1_11))))) && (((var_1_1 - var_1_7) >= 128) ? (var_1_9 == ((signed short int) (var_1_1 - (abs (var_1_7))))) : (var_1_9 == ((signed short int) var_1_7)))) && (var_1_6 ? (var_1_10 == ((signed char) 10)) : 1)) && (((var_1_1 ^ (var_1_8 / var_1_12)) >= var_1_10) ? ((var_1_12 > var_1_10) ? (var_1_11 == ((unsigned short int) var_1_7)) : (var_1_11 == ((unsigned short int) var_1_1))) : (var_1_11 == ((unsigned short int) var_1_7)))
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
