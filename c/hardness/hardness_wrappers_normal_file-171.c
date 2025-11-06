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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch171normal.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 16;
float var_1_2 = 9.5;
float var_1_3 = -0.25;
float var_1_4 = -0.75;
unsigned char var_1_5 = 32;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 8;
unsigned char var_1_8 = 8;
unsigned char var_1_9 = 2;
signed long int var_1_10 = -50;
float var_1_11 = 256.9;
float var_1_12 = 32.4;
signed short int var_1_13 = -128;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch171normal
	if ((var_1_2 - 15.25f) <= (var_1_3 * (- var_1_4))) {
		var_1_1 = ((var_1_5 + (min (var_1_6 , var_1_7))) + (var_1_8 + var_1_9));
	}


	// From: Req2Batch171normal
	if (((min (var_1_2 , 15.8f)) - (var_1_11 + var_1_12)) != (min ((max (-0.05f , var_1_4)) , var_1_3))) {
		if (var_1_11 < var_1_12) {
			var_1_10 = var_1_9;
		} else {
			var_1_10 = var_1_7;
		}
	}


	// From: Req3Batch171normal
	unsigned char stepLocal_0 = var_1_15;
	if (var_1_14 || stepLocal_0) {
		var_1_13 = (min (var_1_1 , (min ((max (var_1_8 , var_1_9)) , var_1_5))));
	} else {
		var_1_13 = (var_1_6 + var_1_7);
	}


	// From: Req4Batch171normal
	var_1_16 = 0;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 64);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 64);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427388000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427388000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 - 15.25f) <= (var_1_3 * (- var_1_4))) ? (var_1_1 == ((unsigned char) ((var_1_5 + (min (var_1_6 , var_1_7))) + (var_1_8 + var_1_9)))) : 1) && ((((min (var_1_2 , 15.8f)) - (var_1_11 + var_1_12)) != (min ((max (-0.05f , var_1_4)) , var_1_3))) ? ((var_1_11 < var_1_12) ? (var_1_10 == ((signed long int) var_1_9)) : (var_1_10 == ((signed long int) var_1_7))) : 1)) && ((var_1_14 || var_1_15) ? (var_1_13 == ((signed short int) (min (var_1_1 , (min ((max (var_1_8 , var_1_9)) , var_1_5)))))) : (var_1_13 == ((signed short int) (var_1_6 + var_1_7))))) && (var_1_16 == ((unsigned char) 0))
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
