// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch89normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_3 = 4;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
signed char var_1_8 = -1;
signed char var_1_9 = -1;
signed char var_1_10 = -50;
unsigned char var_1_11 = 0;
signed long int var_1_13 = 100;
unsigned short int var_1_14 = 16;
unsigned short int var_1_15 = 25;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_14 = 16;
unsigned short int last_1_var_1_15 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch89normal
	signed long int stepLocal_0 = last_1_var_1_15;
	if (last_1_var_1_14 > stepLocal_0) {
		var_1_8 = (min ((-4 + var_1_9) , var_1_10));
	}


	// From: Req5Batch89normal
	var_1_14 = var_1_8;


	// From: Req1Batch89normal
	if ((var_1_14 / var_1_3) >= var_1_14) {
		var_1_1 = (var_1_5 && var_1_6);
	} else {
		var_1_1 = (var_1_5 && var_1_7);
	}


	// From: Req4Batch89normal
	var_1_13 = var_1_10;


	// From: Req6Batch89normal
	var_1_15 = var_1_3;


	// From: Req3Batch89normal
	if ((var_1_13 / var_1_3) > var_1_10) {
		if (var_1_7 && var_1_1) {
			if (var_1_8 < var_1_14) {
				if (var_1_3 <= (8 ^ var_1_8)) {
					var_1_11 = var_1_5;
				} else {
					var_1_11 = (var_1_5 && (! var_1_7));
				}
			} else {
				var_1_11 = var_1_7;
			}
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -63);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
}



void updateLastVariables() {
	last_1_var_1_14 = var_1_14;
	last_1_var_1_15 = var_1_15;
}

int property() {
	return (((((((var_1_14 / var_1_3) >= var_1_14) ? (var_1_1 == ((unsigned char) (var_1_5 && var_1_6))) : (var_1_1 == ((unsigned char) (var_1_5 && var_1_7)))) && ((last_1_var_1_14 > last_1_var_1_15) ? (var_1_8 == ((signed char) (min ((-4 + var_1_9) , var_1_10)))) : 1)) && (((var_1_13 / var_1_3) > var_1_10) ? ((var_1_7 && var_1_1) ? ((var_1_8 < var_1_14) ? ((var_1_3 <= (8 ^ var_1_8)) ? (var_1_11 == ((unsigned char) var_1_5)) : (var_1_11 == ((unsigned char) (var_1_5 && (! var_1_7))))) : (var_1_11 == ((unsigned char) var_1_7))) : 1) : 1)) && (var_1_13 == ((signed long int) var_1_10))) && (var_1_14 == ((unsigned short int) var_1_8))) && (var_1_15 == ((unsigned short int) var_1_3))
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
