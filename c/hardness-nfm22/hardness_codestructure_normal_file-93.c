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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch93normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 0.5;
unsigned short int var_1_2 = 0;
unsigned short int var_1_3 = 64;
signed long int var_1_4 = 2;
float var_1_5 = 0.0;
float var_1_6 = 4.2;
float var_1_7 = 31.25;
float var_1_8 = 1.375;
unsigned short int var_1_9 = 32;
unsigned char var_1_10 = 1;
float var_1_11 = 0.625;
unsigned short int var_1_12 = 1;
float var_1_13 = -0.25;
signed short int var_1_14 = 4;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
signed short int var_1_17 = 8;
signed short int var_1_18 = 5;
signed short int var_1_19 = 128;
signed long int var_1_20 = -50;
signed short int var_1_21 = -16;
signed short int var_1_22 = 16;
signed short int var_1_23 = 32;
signed short int var_1_24 = 2;
signed short int var_1_25 = -4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch93normal
	if ((var_1_2 + var_1_3) < var_1_4) {
		if (var_1_4 <= (var_1_3 - var_1_2)) {
			if (var_1_4 < var_1_3) {
				var_1_1 = ((var_1_5 - var_1_6) - var_1_7);
			}
		} else {
			var_1_1 = ((min (var_1_6 , var_1_8)) + 3.25f);
		}
	} else {
		var_1_1 = var_1_8;
	}


	// From: Req2Batch93normal
	if (var_1_10 || (var_1_1 < (var_1_8 / var_1_11))) {
		if (var_1_10 || (var_1_1 != var_1_11)) {
			var_1_9 = 8;
		}
	} else {
		var_1_9 = var_1_12;
	}


	// From: Req3Batch93normal
	if (var_1_10) {
		var_1_13 = (max (var_1_7 , var_1_5));
	} else {
		var_1_13 = (min (10.15f , (var_1_6 + var_1_8)));
	}


	// From: Req4Batch93normal
	if ((! (var_1_10 || var_1_15)) || var_1_16) {
		var_1_14 = (max (var_1_17 , (var_1_18 - var_1_19)));
	}


	// From: Req5Batch93normal
	if (var_1_16) {
		var_1_20 = (var_1_3 - 50);
	}


	// From: Req6Batch93normal
	if (var_1_15) {
		var_1_21 = ((var_1_22 + 25) - var_1_19);
	}


	// From: Req7Batch93normal
	if (var_1_10) {
		var_1_23 = (var_1_22 + ((abs (var_1_24)) + var_1_25));
	} else {
		if (var_1_16) {
			var_1_23 = var_1_24;
		} else {
			var_1_23 = var_1_17;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 4611686.018427382800e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= -32767);
	assume_abort_if_not(var_1_17 <= 32766);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= -1);
	assume_abort_if_not(var_1_18 <= 32766);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 16383);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -8192);
	assume_abort_if_not(var_1_24 <= 8192);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -8191);
	assume_abort_if_not(var_1_25 <= 8191);
}



void updateLastVariables() {
}

int property() {
	return ((((((((var_1_2 + var_1_3) < var_1_4) ? ((var_1_4 <= (var_1_3 - var_1_2)) ? ((var_1_4 < var_1_3) ? (var_1_1 == ((float) ((var_1_5 - var_1_6) - var_1_7))) : 1) : (var_1_1 == ((float) ((min (var_1_6 , var_1_8)) + 3.25f)))) : (var_1_1 == ((float) var_1_8))) && ((var_1_10 || (var_1_1 < (var_1_8 / var_1_11))) ? ((var_1_10 || (var_1_1 != var_1_11)) ? (var_1_9 == ((unsigned short int) 8)) : 1) : (var_1_9 == ((unsigned short int) var_1_12)))) && (var_1_10 ? (var_1_13 == ((float) (max (var_1_7 , var_1_5)))) : (var_1_13 == ((float) (min (10.15f , (var_1_6 + var_1_8))))))) && (((! (var_1_10 || var_1_15)) || var_1_16) ? (var_1_14 == ((signed short int) (max (var_1_17 , (var_1_18 - var_1_19))))) : 1)) && (var_1_16 ? (var_1_20 == ((signed long int) (var_1_3 - 50))) : 1)) && (var_1_15 ? (var_1_21 == ((signed short int) ((var_1_22 + 25) - var_1_19))) : 1)) && (var_1_10 ? (var_1_23 == ((signed short int) (var_1_22 + ((abs (var_1_24)) + var_1_25)))) : (var_1_16 ? (var_1_23 == ((signed short int) var_1_24)) : (var_1_23 == ((signed short int) var_1_17))))
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
