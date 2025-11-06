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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch101normal.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 128;
unsigned char var_1_4 = 2;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 200;
double var_1_9 = 64.2;
double var_1_10 = 127.5;
double var_1_11 = 4.4;
double var_1_12 = 9999999999.25;
double var_1_13 = 16.25;
unsigned short int var_1_14 = 5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch101normal
	signed long int stepLocal_1 = var_1_5 + 128;
	unsigned char stepLocal_0 = var_1_3;
	if (var_1_2) {
		var_1_1 = (var_1_3 - (var_1_4 + (var_1_5 + var_1_6)));
	} else {
		if (var_1_7) {
			if (stepLocal_0 > var_1_6) {
				if (stepLocal_1 >= var_1_4) {
					var_1_1 = var_1_4;
				} else {
					var_1_1 = 4;
				}
			} else {
				var_1_1 = var_1_3;
			}
		} else {
			var_1_1 = var_1_8;
		}
	}


	// From: Req2Batch101normal
	if (var_1_5 > var_1_4) {
		var_1_9 = (min (var_1_10 , (max ((min (var_1_11 , var_1_12)) , var_1_13))));
	} else {
		if (var_1_2) {
			var_1_9 = 2.5;
		} else {
			var_1_9 = var_1_13;
		}
	}


	// From: Req3Batch101normal
	if ((var_1_1 / var_1_3) > (-1000 % (abs (16)))) {
		var_1_14 = var_1_1;
	} else {
		var_1_14 = 32;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 127);
	assume_abort_if_not(var_1_3 <= 254);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 64);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 32);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 31);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((var_1_2 ? (var_1_1 == ((unsigned char) (var_1_3 - (var_1_4 + (var_1_5 + var_1_6))))) : (var_1_7 ? ((var_1_3 > var_1_6) ? (((var_1_5 + 128) >= var_1_4) ? (var_1_1 == ((unsigned char) var_1_4)) : (var_1_1 == ((unsigned char) 4))) : (var_1_1 == ((unsigned char) var_1_3))) : (var_1_1 == ((unsigned char) var_1_8)))) && ((var_1_5 > var_1_4) ? (var_1_9 == ((double) (min (var_1_10 , (max ((min (var_1_11 , var_1_12)) , var_1_13)))))) : (var_1_2 ? (var_1_9 == ((double) 2.5)) : (var_1_9 == ((double) var_1_13))))) && (((var_1_1 / var_1_3) > (-1000 % (abs (16)))) ? (var_1_14 == ((unsigned short int) var_1_1)) : (var_1_14 == ((unsigned short int) 32)))
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
