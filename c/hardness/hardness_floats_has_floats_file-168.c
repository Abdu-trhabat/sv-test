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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch168has_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = 64;
signed char var_1_2 = 1;
signed long int var_1_4 = 1000000000;
double var_1_5 = -500.0;
unsigned char var_1_6 = 0;
double var_1_7 = -25.0;
double var_1_8 = 128.0;
signed short int var_1_9 = 32;
signed short int var_1_10 = -8;
signed short int var_1_11 = -10;
signed long int var_1_12 = 50;
double var_1_13 = -4.0;
unsigned short int var_1_14 = 256;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch168has_floats
	var_1_12 = var_1_2;


	// From: Req5Batch168has_floats
	var_1_13 = -5.0;


	// From: Req6Batch168has_floats
	var_1_14 = var_1_2;


	// From: Req1Batch168has_floats
	signed long int stepLocal_0 = 1 - var_1_2;
	if (stepLocal_0 == var_1_12) {
		var_1_1 = (max (2 , 25));
	} else {
		var_1_1 = (var_1_2 + var_1_4);
	}


	// From: Req2Batch168has_floats
	signed long int stepLocal_1 = var_1_1;
	if (! var_1_6) {
		if (var_1_2 > stepLocal_1) {
			var_1_5 = (var_1_7 + var_1_8);
		}
	} else {
		var_1_5 = (min (var_1_7 , var_1_8));
	}


	// From: Req3Batch168has_floats
	signed char stepLocal_2 = var_1_2;
	if ((max (var_1_7 , (var_1_13 + var_1_8))) < (16.0 + -128.0)) {
		if (((var_1_4 * -1) | var_1_1) < stepLocal_2) {
			var_1_9 = (max ((min (var_1_2 , var_1_10)) , var_1_11));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1073741823);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32767);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -32767);
	assume_abort_if_not(var_1_11 <= 32766);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((1 - var_1_2) == var_1_12) ? (var_1_1 == ((signed long int) (max (2 , 25)))) : (var_1_1 == ((signed long int) (var_1_2 + var_1_4)))) && ((! var_1_6) ? ((var_1_2 > var_1_1) ? (var_1_5 == ((double) (var_1_7 + var_1_8))) : 1) : (var_1_5 == ((double) (min (var_1_7 , var_1_8)))))) && (((max (var_1_7 , (var_1_13 + var_1_8))) < (16.0 + -128.0)) ? ((((var_1_4 * -1) | var_1_1) < var_1_2) ? (var_1_9 == ((signed short int) (max ((min (var_1_2 , var_1_10)) , var_1_11)))) : 1) : 1)) && (var_1_12 == ((signed long int) var_1_2))) && (var_1_13 == ((double) -5.0))) && (var_1_14 == ((unsigned short int) var_1_2))
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
