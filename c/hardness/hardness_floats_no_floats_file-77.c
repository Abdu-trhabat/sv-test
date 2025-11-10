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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch77no_floats.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 50;
signed long int var_1_2 = 10;
signed long int var_1_3 = -8;
unsigned short int var_1_4 = 63953;
unsigned short int var_1_5 = 18181;
signed short int var_1_6 = -4;
unsigned short int var_1_7 = 25;
unsigned short int var_1_8 = 100;
unsigned char var_1_9 = 0;
signed short int var_1_10 = 2;
signed short int var_1_11 = 2;
unsigned long int var_1_12 = 128;
unsigned long int var_1_13 = 64;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch77no_floats
	if (var_1_2 != var_1_3) {
		var_1_1 = (var_1_4 - (var_1_5 - 10));
	}


	// From: Req3Batch77no_floats
	signed long int stepLocal_1 = var_1_4 - var_1_8;
	if (var_1_5 >= stepLocal_1) {
		var_1_11 = var_1_10;
	}


	// From: Req4Batch77no_floats
	unsigned long int stepLocal_2 = 100000000u / var_1_5;
	if (stepLocal_2 >= (- (var_1_8 + 2u))) {
		var_1_12 = var_1_5;
	}


	// From: Req5Batch77no_floats
	if ((var_1_5 * var_1_8) >= var_1_7) {
		var_1_13 = var_1_8;
	}


	// From: Req2Batch77no_floats
	unsigned long int stepLocal_0 = (-5 & var_1_12) + (max (var_1_4 , -128));
	if ((var_1_5 % (var_1_7 + var_1_8)) <= stepLocal_0) {
		if (var_1_9) {
			var_1_6 = -1;
		} else {
			var_1_6 = var_1_10;
		}
	} else {
		var_1_6 = var_1_10;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 32767);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 16383);
	assume_abort_if_not(var_1_5 <= 32767);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 32768);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32767);
	assume_abort_if_not(var_1_10 <= 32766);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 != var_1_3) ? (var_1_1 == ((unsigned short int) (var_1_4 - (var_1_5 - 10)))) : 1) && (((var_1_5 % (var_1_7 + var_1_8)) <= ((-5 & var_1_12) + (max (var_1_4 , -128)))) ? (var_1_9 ? (var_1_6 == ((signed short int) -1)) : (var_1_6 == ((signed short int) var_1_10))) : (var_1_6 == ((signed short int) var_1_10)))) && ((var_1_5 >= (var_1_4 - var_1_8)) ? (var_1_11 == ((signed short int) var_1_10)) : 1)) && (((100000000u / var_1_5) >= (- (var_1_8 + 2u))) ? (var_1_12 == ((unsigned long int) var_1_5)) : 1)) && (((var_1_5 * var_1_8) >= var_1_7) ? (var_1_13 == ((unsigned long int) var_1_8)) : 1)
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
