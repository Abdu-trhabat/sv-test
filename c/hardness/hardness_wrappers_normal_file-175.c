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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch175normal.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 32;
unsigned char var_1_3 = 32;
unsigned char var_1_4 = 64;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 8;
unsigned char var_1_7 = 32;
float var_1_8 = 31.625;
float var_1_9 = 99999.9;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
signed char var_1_12 = -1;
unsigned short int var_1_13 = 1;
signed char var_1_14 = -5;
signed char var_1_15 = -16;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch175normal
	unsigned char stepLocal_0 = var_1_3;
	if (last_1_var_1_1 > stepLocal_0) {
		var_1_1 = var_1_4;
	} else {
		var_1_1 = (var_1_5 - (abs (var_1_6 + var_1_7)));
	}


	// From: Req2Batch175normal
	var_1_8 = var_1_9;


	// From: Req3Batch175normal
	if (((min (var_1_1 , var_1_7)) + var_1_1) > var_1_6) {
		var_1_10 = (! var_1_11);
	} else {
		var_1_10 = 0;
	}


	// From: Req4Batch175normal
	if (((~ var_1_6) >= var_1_7) && var_1_10) {
		if (var_1_13 <= (max (200 , 8))) {
			if (var_1_10) {
				var_1_12 = var_1_6;
			}
		} else {
			var_1_12 = (var_1_7 + var_1_14);
		}
	} else {
		var_1_12 = (max ((var_1_7 - var_1_6) , var_1_14));
	}


	// From: Req5Batch175normal
	var_1_15 = var_1_14;
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 127);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 64);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65535);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
}

int property(void) {
	return (((((last_1_var_1_1 > var_1_3) ? (var_1_1 == ((unsigned char) var_1_4)) : (var_1_1 == ((unsigned char) (var_1_5 - (abs (var_1_6 + var_1_7)))))) && (var_1_8 == ((float) var_1_9))) && ((((min (var_1_1 , var_1_7)) + var_1_1) > var_1_6) ? (var_1_10 == ((unsigned char) (! var_1_11))) : (var_1_10 == ((unsigned char) 0)))) && ((((~ var_1_6) >= var_1_7) && var_1_10) ? ((var_1_13 <= (max (200 , 8))) ? (var_1_10 ? (var_1_12 == ((signed char) var_1_6)) : 1) : (var_1_12 == ((signed char) (var_1_7 + var_1_14)))) : (var_1_12 == ((signed char) (max ((var_1_7 - var_1_6) , var_1_14)))))) && (var_1_15 == ((signed char) var_1_14))
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
