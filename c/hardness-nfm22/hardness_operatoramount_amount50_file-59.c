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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch59Amount50.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 1;
unsigned char var_1_4 = 25;
unsigned short int var_1_5 = 0;
unsigned short int var_1_6 = 62100;
unsigned short int var_1_7 = 27651;
double var_1_8 = 128.9;
double var_1_10 = 16.5;
double var_1_11 = 25.5;
double var_1_12 = 199.75;
unsigned char var_1_13 = 2;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 1;
unsigned short int var_1_17 = 32;
unsigned char var_1_18 = 1;
unsigned long int var_1_19 = 1;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_5 = 0;
unsigned char last_1_var_1_15 = 1;
unsigned char last_1_var_1_18 = 1;
unsigned long int last_1_var_1_19 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch59Amount50
	unsigned char stepLocal_3 = last_1_var_1_19 < var_1_6;
	if (last_1_var_1_18) {
		if ((! last_1_var_1_15) || stepLocal_3) {
			var_1_8 = (max (127.25 , var_1_10));
		} else {
			var_1_8 = (var_1_11 + var_1_12);
		}
	} else {
		var_1_8 = var_1_11;
	}


	// From: Req5Batch59Amount50
	if (var_1_12 != var_1_8) {
		var_1_15 = (! var_1_16);
	} else {
		var_1_15 = var_1_16;
	}


	// From: Req6Batch59Amount50
	var_1_17 = var_1_4;


	// From: Req7Batch59Amount50
	var_1_18 = var_1_16;


	// From: Req8Batch59Amount50
	var_1_19 = var_1_4;


	// From: Req1Batch59Amount50
	unsigned short int stepLocal_1 = var_1_17;
	unsigned char stepLocal_0 = var_1_17 != (16 / var_1_4);
	if (stepLocal_0 && var_1_15) {
		if (stepLocal_1 > var_1_4) {
			var_1_1 = (var_1_4 + var_1_17);
		} else {
			if (var_1_15) {
				var_1_1 = var_1_17;
			} else {
				var_1_1 = var_1_4;
			}
		}
	} else {
		var_1_1 = var_1_17;
	}


	// From: Req2Batch59Amount50
	unsigned short int stepLocal_2 = var_1_17;
	if (stepLocal_2 < last_1_var_1_5) {
		var_1_5 = (var_1_6 - (var_1_7 - last_1_var_1_5));
	} else {
		if (! var_1_15) {
			var_1_5 = (max (last_1_var_1_5 , (var_1_7 + var_1_4)));
		}
	}


	// From: Req4Batch59Amount50
	unsigned short int stepLocal_5 = var_1_6;
	unsigned short int stepLocal_4 = var_1_5;
	if (stepLocal_4 != ((var_1_6 / var_1_4) * (max (var_1_5 , var_1_19)))) {
		if (var_1_5 <= stepLocal_5) {
			var_1_13 = 32;
		} else {
			var_1_13 = var_1_14;
		}
	} else {
		var_1_13 = var_1_14;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 32767);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 16383);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427382800e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
}



void updateLastVariables() {
	last_1_var_1_5 = var_1_5;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_19 = var_1_19;
}

int property() {
	return (((((((((var_1_17 != (16 / var_1_4)) && var_1_15) ? ((var_1_17 > var_1_4) ? (var_1_1 == ((unsigned short int) (var_1_4 + var_1_17))) : (var_1_15 ? (var_1_1 == ((unsigned short int) var_1_17)) : (var_1_1 == ((unsigned short int) var_1_4)))) : (var_1_1 == ((unsigned short int) var_1_17))) && ((var_1_17 < last_1_var_1_5) ? (var_1_5 == ((unsigned short int) (var_1_6 - (var_1_7 - last_1_var_1_5)))) : ((! var_1_15) ? (var_1_5 == ((unsigned short int) (max (last_1_var_1_5 , (var_1_7 + var_1_4))))) : 1))) && (last_1_var_1_18 ? (((! last_1_var_1_15) || (last_1_var_1_19 < var_1_6)) ? (var_1_8 == ((double) (max (127.25 , var_1_10)))) : (var_1_8 == ((double) (var_1_11 + var_1_12)))) : (var_1_8 == ((double) var_1_11)))) && ((var_1_5 != ((var_1_6 / var_1_4) * (max (var_1_5 , var_1_19)))) ? ((var_1_5 <= var_1_6) ? (var_1_13 == ((unsigned char) 32)) : (var_1_13 == ((unsigned char) var_1_14))) : (var_1_13 == ((unsigned char) var_1_14)))) && ((var_1_12 != var_1_8) ? (var_1_15 == ((unsigned char) (! var_1_16))) : (var_1_15 == ((unsigned char) var_1_16)))) && (var_1_17 == ((unsigned short int) var_1_4))) && (var_1_18 == ((unsigned char) var_1_16))) && (var_1_19 == ((unsigned long int) var_1_4))
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
