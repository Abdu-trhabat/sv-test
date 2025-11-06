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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10525_1loop.c", 13, "reach_error"); }
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
signed char var_1_1 = 4;
signed char var_1_2 = 32;
signed char var_1_3 = 50;
signed long int var_1_4 = 4;
signed long int var_1_5 = 0;
unsigned short int var_1_6 = 128;
float var_1_7 = 1.5;
float var_1_8 = 127.2;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned long int var_1_12 = 16;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch10525_1loop
	var_1_1 = (var_1_2 - var_1_3);


	// From: Req4Batch10525_1loop
	var_1_10 = var_1_11;


	// From: Req5Batch10525_1loop
	var_1_12 = var_1_3;


	// From: Req2Batch10525_1loop
	if (((var_1_3 >> 2) * var_1_12) <= (var_1_2 / 1000000)) {
		var_1_4 = (5 - (var_1_3 + var_1_5));
	} else {
		var_1_4 = var_1_3;
	}


	// From: Req3Batch10525_1loop
	unsigned char stepLocal_0 = var_1_4 > var_1_2;
	if ((7.7f - var_1_7) > var_1_8) {
		if (stepLocal_0 && var_1_10) {
			if (! (var_1_8 < var_1_7)) {
				var_1_6 = 25;
			} else {
				var_1_6 = var_1_3;
			}
		} else {
			var_1_6 = var_1_3;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 126);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 126);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_1 == ((signed char) (var_1_2 - var_1_3))) && ((((var_1_3 >> 2) * var_1_12) <= (var_1_2 / 1000000)) ? (var_1_4 == ((signed long int) (5 - (var_1_3 + var_1_5)))) : (var_1_4 == ((signed long int) var_1_3)))) && (((7.7f - var_1_7) > var_1_8) ? (((var_1_4 > var_1_2) && var_1_10) ? ((! (var_1_8 < var_1_7)) ? (var_1_6 == ((unsigned short int) 25)) : (var_1_6 == ((unsigned short int) var_1_3))) : (var_1_6 == ((unsigned short int) var_1_3))) : 1)) && (var_1_10 == ((unsigned char) var_1_11))) && (var_1_12 == ((unsigned long int) var_1_3))
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
