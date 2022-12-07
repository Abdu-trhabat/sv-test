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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5325_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 5;
unsigned long int var_1_2 = 500;
unsigned long int var_1_3 = 1456677701;
unsigned long int var_1_4 = 1000000000;
unsigned long int var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_11 = 0;
float var_1_12 = 128.6;
float var_1_13 = 500.4;
float var_1_14 = 8.5;
double var_1_15 = 255.8;
double var_1_16 = 25.75;
float var_1_17 = 1.2;
float var_1_18 = 9.6;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch5325_while
	var_1_1 = (var_1_2 + (var_1_3 - (var_1_4 - var_1_5)));


	// From: Req2Batch5325_while
	var_1_6 = var_1_7;


	// From: Req4Batch5325_while
	var_1_12 = ((2.55f + var_1_13) - var_1_14);


	// From: Req5Batch5325_while
	var_1_15 = (max (var_1_13 , (min (var_1_14 , var_1_16))));


	// From: Req6Batch5325_while
	if (var_1_2 >= var_1_1) {
		var_1_17 = (var_1_14 - (max (var_1_13 , var_1_18)));
	}


	// From: Req3Batch5325_while
	unsigned long int stepLocal_0 = min (var_1_4 , var_1_3);
	if ((min (var_1_1 , var_1_5)) != stepLocal_0) {
		if (var_1_17 == var_1_12) {
			if (var_1_6) {
				var_1_8 = var_1_11;
			}
		}
	} else {
		var_1_8 = var_1_11;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 1073741823);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 536870911);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 536870911);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return (((((var_1_1 == ((unsigned long int) (var_1_2 + (var_1_3 - (var_1_4 - var_1_5))))) && (var_1_6 == ((unsigned char) var_1_7))) && (((min (var_1_1 , var_1_5)) != (min (var_1_4 , var_1_3))) ? ((var_1_17 == var_1_12) ? (var_1_6 ? (var_1_8 == ((unsigned char) var_1_11)) : 1) : 1) : (var_1_8 == ((unsigned char) var_1_11)))) && (var_1_12 == ((float) ((2.55f + var_1_13) - var_1_14)))) && (var_1_15 == ((double) (max (var_1_13 , (min (var_1_14 , var_1_16))))))) && ((var_1_2 >= var_1_1) ? (var_1_17 == ((float) (var_1_14 - (max (var_1_13 , var_1_18))))) : 1)
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
