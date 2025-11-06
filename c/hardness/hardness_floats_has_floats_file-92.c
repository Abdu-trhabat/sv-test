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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch92has_floats.c", 13, "reach_error"); }
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
signed char var_1_1 = 32;
signed char var_1_2 = 2;
signed char var_1_3 = 8;
signed char var_1_4 = 0;
signed char var_1_5 = 32;
signed char var_1_6 = 10;
double var_1_7 = 25.0;
unsigned char var_1_8 = 1;
double var_1_9 = 64.0;
float var_1_10 = 0.0;
float var_1_11 = 32.0;
unsigned short int var_1_12 = 10000;
signed long int var_1_13 = -4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch92has_floats
	var_1_1 = ((var_1_2 + var_1_3) - (max (var_1_4 , (var_1_5 + var_1_6))));


	// From: Req2Batch92has_floats
	if (var_1_8) {
		var_1_7 = (abs (var_1_9));
	} else {
		if (var_1_1 < (var_1_6 - var_1_4)) {
			var_1_7 = var_1_9;
		} else {
			var_1_7 = -5.0;
		}
	}


	// From: Req3Batch92has_floats
	if (var_1_7 > var_1_9) {
		if (var_1_9 < var_1_7) {
			var_1_10 = (max (var_1_9 , var_1_11));
		} else {
			var_1_10 = var_1_9;
		}
	}


	// From: Req4Batch92has_floats
	if (var_1_3 < ((max (var_1_2 , var_1_1)) & var_1_6)) {
		if (-4 <= var_1_3) {
			var_1_12 = (max (var_1_6 , (1 + var_1_3)));
		}
	}


	// From: Req5Batch92has_floats
	var_1_13 = var_1_3;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 63);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_1 == ((signed char) ((var_1_2 + var_1_3) - (max (var_1_4 , (var_1_5 + var_1_6)))))) && (var_1_8 ? (var_1_7 == ((double) (abs (var_1_9)))) : ((var_1_1 < (var_1_6 - var_1_4)) ? (var_1_7 == ((double) var_1_9)) : (var_1_7 == ((double) -5.0))))) && ((var_1_7 > var_1_9) ? ((var_1_9 < var_1_7) ? (var_1_10 == ((float) (max (var_1_9 , var_1_11)))) : (var_1_10 == ((float) var_1_9))) : 1)) && ((var_1_3 < ((max (var_1_2 , var_1_1)) & var_1_6)) ? ((-4 <= var_1_3) ? (var_1_12 == ((unsigned short int) (max (var_1_6 , (1 + var_1_3))))) : 1) : 1)) && (var_1_13 == ((signed long int) var_1_3))
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
