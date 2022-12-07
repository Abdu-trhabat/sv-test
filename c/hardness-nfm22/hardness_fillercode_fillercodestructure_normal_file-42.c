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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch42normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 16;
signed char var_1_5 = -8;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed short int var_1_13 = 200;
float var_1_14 = -0.8;
float var_1_15 = 127.25;
float var_1_16 = 3.5;
unsigned short int var_1_17 = 16;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 16;
unsigned char last_1_var_1_6 = 10;
unsigned char last_1_var_1_8 = 1;
signed short int last_1_var_1_13 = 200;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch42normal
	signed long int stepLocal_6 = last_1_var_1_1;
	unsigned char stepLocal_5 = (min (last_1_var_1_1 , 8)) <= var_1_5;
	if (stepLocal_5 || last_1_var_1_8) {
		if (stepLocal_6 <= last_1_var_1_6) {
			var_1_14 = (var_1_15 + var_1_16);
		} else {
			var_1_14 = var_1_16;
		}
	} else {
		var_1_14 = var_1_16;
	}


	// From: Req7Batch42normal
	if (var_1_14 <= var_1_15) {
		var_1_19 = (var_1_12 || var_1_20);
	}


	// From: Req2Batch42normal
	if (var_1_5 >= -2) {
		var_1_6 = (var_1_7 - 100);
	}


	// From: Req4Batch42normal
	unsigned char stepLocal_4 = var_1_6;
	signed long int stepLocal_3 = var_1_6 / var_1_7;
	if (last_1_var_1_13 >= stepLocal_3) {
		if (stepLocal_4 != (max ((max (var_1_6 , last_1_var_1_13)) , var_1_5))) {
			var_1_13 = var_1_7;
		} else {
			var_1_13 = last_1_var_1_13;
		}
	} else {
		var_1_13 = var_1_6;
	}


	// From: Req6Batch42normal
	unsigned char stepLocal_7 = var_1_6;
	if (stepLocal_7 > var_1_6) {
		var_1_17 = (max (25 , (var_1_13 + var_1_6)));
	}


	// From: Req1Batch42normal
	unsigned char stepLocal_0 = var_1_6;
	if (var_1_19) {
		var_1_1 = (max (var_1_6 , var_1_6));
	} else {
		if ((abs (var_1_5)) >= stepLocal_0) {
			var_1_1 = var_1_5;
		}
	}


	// From: Req3Batch42normal
	unsigned char stepLocal_2 = var_1_19 && var_1_19;
	unsigned char stepLocal_1 = var_1_7;
	if ((49.5f <= var_1_14) && stepLocal_2) {
		if (var_1_13 < stepLocal_1) {
			var_1_8 = (var_1_19 || var_1_11);
		} else {
			var_1_8 = var_1_11;
		}
	} else {
		var_1_8 = var_1_12;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 127);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_13 = var_1_13;
}

int property() {
	return ((((((var_1_19 ? (var_1_1 == ((signed short int) (max (var_1_6 , var_1_6)))) : (((abs (var_1_5)) >= var_1_6) ? (var_1_1 == ((signed short int) var_1_5)) : 1)) && ((var_1_5 >= -2) ? (var_1_6 == ((unsigned char) (var_1_7 - 100))) : 1)) && (((49.5f <= var_1_14) && (var_1_19 && var_1_19)) ? ((var_1_13 < var_1_7) ? (var_1_8 == ((unsigned char) (var_1_19 || var_1_11))) : (var_1_8 == ((unsigned char) var_1_11))) : (var_1_8 == ((unsigned char) var_1_12)))) && ((last_1_var_1_13 >= (var_1_6 / var_1_7)) ? ((var_1_6 != (max ((max (var_1_6 , last_1_var_1_13)) , var_1_5))) ? (var_1_13 == ((signed short int) var_1_7)) : (var_1_13 == ((signed short int) last_1_var_1_13))) : (var_1_13 == ((signed short int) var_1_6)))) && ((((min (last_1_var_1_1 , 8)) <= var_1_5) || last_1_var_1_8) ? ((last_1_var_1_1 <= last_1_var_1_6) ? (var_1_14 == ((float) (var_1_15 + var_1_16))) : (var_1_14 == ((float) var_1_16))) : (var_1_14 == ((float) var_1_16)))) && ((var_1_6 > var_1_6) ? (var_1_17 == ((unsigned short int) (max (25 , (var_1_13 + var_1_6))))) : 1)) && ((var_1_14 <= var_1_15) ? (var_1_19 == ((unsigned char) (var_1_12 || var_1_20))) : 1)
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
