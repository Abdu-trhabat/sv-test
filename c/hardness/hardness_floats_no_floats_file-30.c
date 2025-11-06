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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch30no_floats.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 64;
unsigned char var_1_2 = 0;
signed short int var_1_3 = -256;
signed short int var_1_4 = -1000;
signed short int var_1_5 = 8;
signed short int var_1_6 = -32;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 10;
unsigned char var_1_9 = 2;
signed long int var_1_10 = 0;
signed long int var_1_11 = -256;
signed long int var_1_12 = 10;
signed long int var_1_13 = 5;
signed long int var_1_14 = -2;
signed long int var_1_15 = 8;
unsigned long int var_1_16 = 64;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_10 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch30no_floats
	signed short int stepLocal_2 = var_1_5;
	signed short int stepLocal_1 = var_1_6;
	if ((last_1_var_1_10 + var_1_4) < stepLocal_1) {
		if (var_1_2) {
			if (stepLocal_2 > var_1_3) {
				var_1_10 = var_1_3;
			}
		} else {
			var_1_10 = var_1_8;
		}
	} else {
		var_1_10 = var_1_9;
	}


	// From: Req4Batch30no_floats
	var_1_16 = 200u;


	// From: Req1Batch30no_floats
	signed long int stepLocal_0 = var_1_10;
	if (var_1_2) {
		if (stepLocal_0 > ((var_1_16 / var_1_5) % var_1_6)) {
			var_1_1 = (max ((min (var_1_7 , var_1_8)) , var_1_9));
		}
	} else {
		var_1_1 = var_1_9;
	}


	// From: Req3Batch30no_floats
	if (var_1_6 >= var_1_16) {
		var_1_11 = (max (var_1_12 , (var_1_13 + (max (var_1_14 , var_1_15)))));
	} else {
		if (((var_1_8 / var_1_6) / var_1_5) >= var_1_16) {
			var_1_11 = var_1_13;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32768);
	assume_abort_if_not(var_1_5 <= 32767);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32768);
	assume_abort_if_not(var_1_6 <= 32767);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483648);
	assume_abort_if_not(var_1_15 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
}

int property(void) {
	return (((var_1_2 ? ((var_1_10 > ((var_1_16 / var_1_5) % var_1_6)) ? (var_1_1 == ((unsigned char) (max ((min (var_1_7 , var_1_8)) , var_1_9)))) : 1) : (var_1_1 == ((unsigned char) var_1_9))) && (((last_1_var_1_10 + var_1_4) < var_1_6) ? (var_1_2 ? ((var_1_5 > var_1_3) ? (var_1_10 == ((signed long int) var_1_3)) : 1) : (var_1_10 == ((signed long int) var_1_8))) : (var_1_10 == ((signed long int) var_1_9)))) && ((var_1_6 >= var_1_16) ? (var_1_11 == ((signed long int) (max (var_1_12 , (var_1_13 + (max (var_1_14 , var_1_15))))))) : ((((var_1_8 / var_1_6) / var_1_5) >= var_1_16) ? (var_1_11 == ((signed long int) var_1_13)) : 1))) && (var_1_16 == ((unsigned long int) 200u))
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
