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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch127has_floats.c", 13, "reach_error"); }
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
unsigned long int var_1_2 = 0;
unsigned long int var_1_3 = 100;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
signed short int var_1_7 = -64;
signed short int var_1_8 = -50;
signed short int var_1_9 = 128;
double var_1_10 = -16.0;
double var_1_11 = 128.0;
double var_1_12 = 0.0;
signed char var_1_13 = -2;
signed char var_1_14 = 8;
signed char var_1_15 = 100;
signed char var_1_16 = 50;
signed char var_1_17 = 2;
signed char var_1_18 = -64;
unsigned char var_1_19 = 4;
unsigned char var_1_20 = 5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch127has_floats
	if ((max (0u , var_1_2)) > (~ var_1_3)) {
		var_1_1 = ((! var_1_4) && (var_1_5 || var_1_6));
	}


	// From: Req2Batch127has_floats
	if (var_1_2 > var_1_3) {
		var_1_7 = (max (var_1_8 , var_1_9));
	} else {
		if (var_1_10 > (var_1_11 - var_1_12)) {
			var_1_7 = var_1_8;
		} else {
			var_1_7 = var_1_9;
		}
	}


	// From: Req3Batch127has_floats
	if (var_1_6 || var_1_1) {
		var_1_13 = ((min (var_1_14 , (var_1_15 - 8))) - 8);
	} else {
		var_1_13 = (min ((var_1_15 - (var_1_16 + var_1_17)) , var_1_14));
	}


	// From: Req4Batch127has_floats
	var_1_18 = var_1_17;


	// From: Req5Batch127has_floats
	var_1_19 = var_1_15;


	// From: Req6Batch127has_floats
	var_1_20 = var_1_15;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32767);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32767);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -1);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 62);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((max (0u , var_1_2)) > (~ var_1_3)) ? (var_1_1 == ((unsigned char) ((! var_1_4) && (var_1_5 || var_1_6)))) : 1) && ((var_1_2 > var_1_3) ? (var_1_7 == ((signed short int) (max (var_1_8 , var_1_9)))) : ((var_1_10 > (var_1_11 - var_1_12)) ? (var_1_7 == ((signed short int) var_1_8)) : (var_1_7 == ((signed short int) var_1_9))))) && ((var_1_6 || var_1_1) ? (var_1_13 == ((signed char) ((min (var_1_14 , (var_1_15 - 8))) - 8))) : (var_1_13 == ((signed char) (min ((var_1_15 - (var_1_16 + var_1_17)) , var_1_14)))))) && (var_1_18 == ((signed char) var_1_17))) && (var_1_19 == ((unsigned char) var_1_15))) && (var_1_20 == ((unsigned char) var_1_15))
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
