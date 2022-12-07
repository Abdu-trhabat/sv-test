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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch96normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 8;
unsigned char var_1_2 = 0;
unsigned short int var_1_3 = 8;
unsigned short int var_1_4 = 1000;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
double var_1_11 = 4.575;
double var_1_13 = 2.75;
double var_1_14 = 128.5;
signed long int var_1_15 = -1000000000;
float var_1_16 = 99999.25;
signed char var_1_17 = 1;
signed char var_1_18 = 50;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_5 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch96normal
	if (! last_1_var_1_5) {
		var_1_1 = (min (var_1_3 , var_1_4));
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch96normal
	unsigned char stepLocal_0 = var_1_6;
	if (var_1_2) {
		if (stepLocal_0 && ((var_1_3 >= 16) || last_1_var_1_5)) {
			if (var_1_6) {
				var_1_5 = ((var_1_1 < var_1_1) && var_1_9);
			} else {
				var_1_5 = var_1_10;
			}
		}
	}


	// From: Req4Batch96normal
	var_1_15 = var_1_1;


	// From: Req5Batch96normal
	var_1_16 = var_1_13;


	// From: Req6Batch96normal
	var_1_17 = var_1_18;


	// From: Req3Batch96normal
	if ((abs (var_1_15)) > var_1_15) {
		if ((var_1_15 / -5) >= ((var_1_4 + var_1_15) - (min (var_1_1 , var_1_3)))) {
			var_1_11 = (var_1_13 + var_1_14);
		} else {
			var_1_11 = var_1_14;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -127);
	assume_abort_if_not(var_1_18 <= 126);
}



void updateLastVariables() {
	last_1_var_1_5 = var_1_5;
}

int property() {
	return ((((((! last_1_var_1_5) ? (var_1_1 == ((unsigned short int) (min (var_1_3 , var_1_4)))) : (var_1_1 == ((unsigned short int) var_1_4))) && (var_1_2 ? ((var_1_6 && ((var_1_3 >= 16) || last_1_var_1_5)) ? (var_1_6 ? (var_1_5 == ((unsigned char) ((var_1_1 < var_1_1) && var_1_9))) : (var_1_5 == ((unsigned char) var_1_10))) : 1) : 1)) && (((abs (var_1_15)) > var_1_15) ? (((var_1_15 / -5) >= ((var_1_4 + var_1_15) - (min (var_1_1 , var_1_3)))) ? (var_1_11 == ((double) (var_1_13 + var_1_14))) : (var_1_11 == ((double) var_1_14))) : 1)) && (var_1_15 == ((signed long int) var_1_1))) && (var_1_16 == ((float) var_1_13))) && (var_1_17 == ((signed char) var_1_18))
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
