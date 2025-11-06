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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch5225_1loop.c", 13, "reach_error"); }
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
signed short int var_1_1 = -4;
double var_1_2 = 255.6;
signed short int var_1_3 = 32;
signed short int var_1_4 = -1;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 8;
double var_1_10 = 255.2;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 32;
unsigned char var_1_14 = 64;
unsigned char var_1_15 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch5225_1loop
	if (var_1_2 < 63.75) {
		var_1_1 = (10 - var_1_3);
	} else {
		var_1_1 = (4 + var_1_4);
	}


	// From: Req2Batch5225_1loop
	signed short int stepLocal_0 = var_1_3;
	if (stepLocal_0 > ((var_1_4 / -256) * 32)) {
		if (var_1_6) {
			var_1_5 = (! (var_1_7 && (! var_1_8)));
		} else {
			var_1_5 = var_1_7;
		}
	} else {
		var_1_5 = var_1_7;
	}


	// From: Req3Batch5225_1loop
	if ((- var_1_2) <= var_1_10) {
		var_1_9 = (min (((var_1_11 + var_1_12) - var_1_13) , (var_1_14 + var_1_15)));
	} else {
		var_1_9 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 32766);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -16383);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 63);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 64);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 < 63.75) ? (var_1_1 == ((signed short int) (10 - var_1_3))) : (var_1_1 == ((signed short int) (4 + var_1_4)))) && ((var_1_3 > ((var_1_4 / -256) * 32)) ? (var_1_6 ? (var_1_5 == ((unsigned char) (! (var_1_7 && (! var_1_8))))) : (var_1_5 == ((unsigned char) var_1_7))) : (var_1_5 == ((unsigned char) var_1_7)))) && (((- var_1_2) <= var_1_10) ? (var_1_9 == ((unsigned char) (min (((var_1_11 + var_1_12) - var_1_13) , (var_1_14 + var_1_15))))) : (var_1_9 == ((unsigned char) var_1_12)))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
