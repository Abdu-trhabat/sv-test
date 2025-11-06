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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch97has_floats.c", 13, "reach_error"); }
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
signed short int var_1_1 = 16;
signed char var_1_3 = 50;
signed char var_1_5 = 16;
signed short int var_1_7 = 32;
signed short int var_1_8 = 20113;
signed short int var_1_9 = 100;
signed char var_1_10 = 100;
signed char var_1_11 = -1;
signed char var_1_12 = 16;
unsigned char var_1_13 = 1;
float var_1_14 = 50.0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 10;
unsigned char var_1_17 = 5;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 16;
signed char last_1_var_1_10 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch97has_floats
	signed long int stepLocal_0 = max (last_1_var_1_1 , last_1_var_1_10);
	if (1000.0f > (min (-8.0f , var_1_14))) {
		if (var_1_9 < stepLocal_0) {
			var_1_13 = (! var_1_15);
		}
	} else {
		var_1_13 = var_1_15;
	}


	// From: Req1Batch97has_floats
	if (var_1_13) {
		if (var_1_5 > var_1_3) {
			if (var_1_13) {
				var_1_1 = (var_1_7 - (var_1_8 - var_1_9));
			} else {
				var_1_1 = last_1_var_1_1;
			}
		} else {
			var_1_1 = 8;
		}
	}


	// From: Req4Batch97has_floats
	var_1_16 = var_1_17;


	// From: Req2Batch97has_floats
	if (var_1_16 == var_1_7) {
		var_1_10 = (var_1_11 + (var_1_12 + -25));
	} else {
		if (((32 * -25) | last_1_var_1_10) >= var_1_11) {
			if (var_1_13) {
				var_1_10 = var_1_12;
			}
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -128);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 16383);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -31);
	assume_abort_if_not(var_1_12 <= 32);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_10 = var_1_10;
}

int property(void) {
	return (((var_1_13 ? ((var_1_5 > var_1_3) ? (var_1_13 ? (var_1_1 == ((signed short int) (var_1_7 - (var_1_8 - var_1_9)))) : (var_1_1 == ((signed short int) last_1_var_1_1))) : (var_1_1 == ((signed short int) 8))) : 1) && ((var_1_16 == var_1_7) ? (var_1_10 == ((signed char) (var_1_11 + (var_1_12 + -25)))) : ((((32 * -25) | last_1_var_1_10) >= var_1_11) ? (var_1_13 ? (var_1_10 == ((signed char) var_1_12)) : 1) : 1))) && ((1000.0f > (min (-8.0f , var_1_14))) ? ((var_1_9 < (max (last_1_var_1_1 , last_1_var_1_10))) ? (var_1_13 == ((unsigned char) (! var_1_15))) : 1) : (var_1_13 == ((unsigned char) var_1_15)))) && (var_1_16 == ((unsigned char) var_1_17))
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
