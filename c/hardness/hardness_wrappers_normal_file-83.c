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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch83normal.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 128;
unsigned char var_1_2 = 0;
unsigned short int var_1_3 = 25;
unsigned char var_1_4 = 4;
signed long int var_1_5 = 1000000000;
signed long int var_1_6 = 128;
signed long int var_1_7 = 2;
double var_1_8 = 127.625;
double var_1_10 = 0.8;
double var_1_11 = 128.75;
double var_1_12 = 24.8;
signed long int var_1_13 = -64;
signed short int var_1_14 = -128;
signed char var_1_15 = 64;
signed char var_1_16 = 5;
double var_1_17 = 1.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch83normal
	signed long int stepLocal_0 = min ((var_1_5 * var_1_6) , (~ var_1_7));
	if (var_1_2) {
		var_1_1 = (abs (abs (var_1_3)));
	} else {
		if ((var_1_3 / var_1_4) >= stepLocal_0) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = var_1_3;
		}
	}


	// From: Req2Batch83normal
	signed long int stepLocal_2 = var_1_1 ^ var_1_5;
	signed long int stepLocal_1 = var_1_3 + var_1_1;
	if (var_1_6 <= stepLocal_1) {
		if (var_1_1 == stepLocal_2) {
			var_1_8 = ((abs (var_1_10)) + var_1_11);
		} else {
			var_1_8 = var_1_11;
		}
	} else {
		var_1_8 = var_1_10;
	}


	// From: Req3Batch83normal
	if (var_1_6 > var_1_13) {
		var_1_12 = (min (var_1_11 , var_1_10));
	}


	// From: Req4Batch83normal
	var_1_14 = 200;


	// From: Req5Batch83normal
	var_1_15 = var_1_16;


	// From: Req6Batch83normal
	var_1_17 = var_1_10;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 ? (var_1_1 == ((unsigned short int) (abs (abs (var_1_3))))) : (((var_1_3 / var_1_4) >= (min ((var_1_5 * var_1_6) , (~ var_1_7)))) ? (var_1_1 == ((unsigned short int) var_1_4)) : (var_1_1 == ((unsigned short int) var_1_3)))) && ((var_1_6 <= (var_1_3 + var_1_1)) ? ((var_1_1 == (var_1_1 ^ var_1_5)) ? (var_1_8 == ((double) ((abs (var_1_10)) + var_1_11))) : (var_1_8 == ((double) var_1_11))) : (var_1_8 == ((double) var_1_10)))) && ((var_1_6 > var_1_13) ? (var_1_12 == ((double) (min (var_1_11 , var_1_10)))) : 1)) && (var_1_14 == ((signed short int) 200))) && (var_1_15 == ((signed char) var_1_16))) && (var_1_17 == ((double) var_1_10))
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
