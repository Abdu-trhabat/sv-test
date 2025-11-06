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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch193normal.c", 13, "reach_error"); }
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
signed short int var_1_1 = 4;
unsigned char var_1_2 = 50;
unsigned char var_1_3 = 5;
unsigned char var_1_4 = 16;
signed long int var_1_5 = 4;
unsigned char var_1_6 = 1;
double var_1_7 = 31.5;
double var_1_8 = 128.8;
double var_1_9 = 99999999999.5;
unsigned long int var_1_10 = 100000;
double var_1_11 = 50.875;
double var_1_12 = 0.4;
signed short int var_1_13 = -25;
signed short int var_1_14 = 128;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_5 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch193normal
	unsigned char stepLocal_2 = var_1_3;
	unsigned char stepLocal_1 = var_1_2;
	unsigned char stepLocal_0 = var_1_3;
	if (var_1_2 == stepLocal_0) {
		if (stepLocal_1 > (max ((- var_1_3) , var_1_4))) {
			if ((var_1_2 * (var_1_4 * -5)) > stepLocal_2) {
				var_1_1 = var_1_3;
			}
		} else {
			var_1_1 = var_1_2;
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req4Batch193normal
	var_1_13 = 4;


	// From: Req5Batch193normal
	var_1_14 = var_1_13;


	// From: Req2Batch193normal
	if (var_1_6) {
		var_1_5 = (var_1_14 + (max ((min (var_1_1 , var_1_13)) , last_1_var_1_5)));
	}


	// From: Req3Batch193normal
	signed short int stepLocal_4 = var_1_13;
	unsigned long int stepLocal_3 = 16u;
	if (stepLocal_4 > 64) {
		var_1_7 = (var_1_8 - var_1_9);
	} else {
		if (stepLocal_3 == (var_1_13 / var_1_10)) {
			var_1_7 = (var_1_11 + var_1_12);
		} else {
			var_1_7 = var_1_11;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 4294967295);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_5 = var_1_5;
}

int property(void) {
	return (((((var_1_2 == var_1_3) ? ((var_1_2 > (max ((- var_1_3) , var_1_4))) ? (((var_1_2 * (var_1_4 * -5)) > var_1_3) ? (var_1_1 == ((signed short int) var_1_3)) : 1) : (var_1_1 == ((signed short int) var_1_2))) : (var_1_1 == ((signed short int) var_1_4))) && (var_1_6 ? (var_1_5 == ((signed long int) (var_1_14 + (max ((min (var_1_1 , var_1_13)) , last_1_var_1_5))))) : 1)) && ((var_1_13 > 64) ? (var_1_7 == ((double) (var_1_8 - var_1_9))) : ((16u == (var_1_13 / var_1_10)) ? (var_1_7 == ((double) (var_1_11 + var_1_12))) : (var_1_7 == ((double) var_1_11))))) && (var_1_13 == ((signed short int) 4))) && (var_1_14 == ((signed short int) var_1_13))
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
