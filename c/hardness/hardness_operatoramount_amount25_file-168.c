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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch168Amount25.c", 13, "reach_error"); }
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
signed long int var_1_4 = -100;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 32;
signed char var_1_7 = -4;
signed long int var_1_8 = -128;
unsigned short int var_1_9 = 8;
double var_1_10 = 9999999999.75;
double var_1_11 = 7.5;
signed long int var_1_12 = 0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_12 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch168Amount25
	signed long int stepLocal_0 = 1 - var_1_2;
	if (stepLocal_0 == last_1_var_1_12) {
		var_1_1 = (max (2 , 25));
	} else {
		var_1_1 = (var_1_2 + (-128 + var_1_4));
	}


	// From: Req2Batch168Amount25
	if (var_1_2 > var_1_1) {
		var_1_5 = ((200 - var_1_6) - var_1_2);
	} else {
		var_1_5 = var_1_6;
	}


	// From: Req6Batch168Amount25
	var_1_12 = var_1_5;


	// From: Req3Batch168Amount25
	signed long int stepLocal_1 = (var_1_4 + -8) * var_1_2;
	if (stepLocal_1 == (max (var_1_6 , (var_1_12 % var_1_8)))) {
		var_1_7 = (var_1_6 - 4);
	}


	// From: Req4Batch168Amount25
	var_1_9 = var_1_2;


	// From: Req5Batch168Amount25
	var_1_10 = var_1_11;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -536870911);
	assume_abort_if_not(var_1_4 <= 536870911);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
}

int property(void) {
	return (((((((1 - var_1_2) == last_1_var_1_12) ? (var_1_1 == ((signed long int) (max (2 , 25)))) : (var_1_1 == ((signed long int) (var_1_2 + (-128 + var_1_4))))) && ((var_1_2 > var_1_1) ? (var_1_5 == ((unsigned char) ((200 - var_1_6) - var_1_2))) : (var_1_5 == ((unsigned char) var_1_6)))) && ((((var_1_4 + -8) * var_1_2) == (max (var_1_6 , (var_1_12 % var_1_8)))) ? (var_1_7 == ((signed char) (var_1_6 - 4))) : 1)) && (var_1_9 == ((unsigned short int) var_1_2))) && (var_1_10 == ((double) var_1_11))) && (var_1_12 == ((signed long int) var_1_5))
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
