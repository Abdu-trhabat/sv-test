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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch121Amount25.c", 13, "reach_error"); }
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
signed long int var_1_1 = -100000000;
unsigned long int var_1_2 = 2032620576;
unsigned long int var_1_3 = 1443780595;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 4;
unsigned long int var_1_6 = 8;
unsigned char var_1_7 = 0;
double var_1_8 = 0.375;
float var_1_9 = 9.875;
float var_1_10 = 499.5;
double var_1_11 = 31.4;
signed short int var_1_12 = 2;
signed char var_1_14 = -1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch121Amount25
	unsigned long int stepLocal_0 = (var_1_2 + var_1_3) - (var_1_4 + var_1_5);
	if (stepLocal_0 == (- (- var_1_6))) {
		if (var_1_7) {
			var_1_1 = var_1_5;
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch121Amount25
	unsigned char stepLocal_2 = (- var_1_9) >= var_1_10;
	unsigned long int stepLocal_1 = max (var_1_2 , var_1_5);
	if ((abs (var_1_3)) <= stepLocal_1) {
		if (stepLocal_2 && var_1_7) {
			var_1_8 = var_1_11;
		}
	} else {
		var_1_8 = var_1_11;
	}


	// From: Req3Batch121Amount25
	unsigned long int stepLocal_3 = var_1_4 + var_1_1;
	if (stepLocal_3 >= 16u) {
		if (var_1_8 >= 256.625) {
			var_1_12 = var_1_14;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 1073741823);
	assume_abort_if_not(var_1_2 <= 2147483648);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 1073741824);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1073741824);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967295);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -128);
	assume_abort_if_not(var_1_14 <= 127);
	assume_abort_if_not(var_1_14 != 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 + var_1_3) - (var_1_4 + var_1_5)) == (- (- var_1_6))) ? (var_1_7 ? (var_1_1 == ((signed long int) var_1_5)) : 1) : (var_1_1 == ((signed long int) var_1_4))) && (((abs (var_1_3)) <= (max (var_1_2 , var_1_5))) ? ((((- var_1_9) >= var_1_10) && var_1_7) ? (var_1_8 == ((double) var_1_11)) : 1) : (var_1_8 == ((double) var_1_11)))) && (((var_1_4 + var_1_1) >= 16u) ? ((var_1_8 >= 256.625) ? (var_1_12 == ((signed short int) var_1_14)) : 1) : 1)
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
