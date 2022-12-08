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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch91Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -64;
signed short int var_1_5 = 8;
signed short int var_1_6 = 8;
signed short int var_1_7 = 5;
signed short int var_1_8 = 0;
signed char var_1_9 = 5;
signed char var_1_11 = 16;
signed short int var_1_12 = 25;
signed short int var_1_13 = 64;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 16;
float var_1_17 = 1.2;
float var_1_18 = 5.8;
float var_1_19 = 10.25;
float var_1_20 = 2.5;
signed short int var_1_21 = 200;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
signed char var_1_26 = -5;
unsigned char var_1_27 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
float var_1_39 = 10.5;
signed short int var_1_41 = -1;
float var_1_44 = 50.5;
unsigned char var_1_45 = 64;
signed char var_1_46 = 2;
signed char var_1_47 = 16;
unsigned short int var_1_48 = 2;
double var_1_49 = 1.5;
double var_1_50 = 999999.7;
double var_1_51 = 15.5;
unsigned long int var_1_52 = 64;
float var_1_55 = 9.25;
signed short int var_1_56 = -1;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -64;
signed short int last_1_var_1_13 = 64;
unsigned char last_1_var_1_15 = 1;
signed char last_1_var_1_26 = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch91Filler_PR_CI
	if (last_1_var_1_13 == last_1_var_1_1) {
		if (last_1_var_1_1 <= (max (last_1_var_1_13 , last_1_var_1_26))) {
			var_1_1 = (last_1_var_1_1 + (min ((last_1_var_1_15 - last_1_var_1_15) , (last_1_var_1_15 - last_1_var_1_15))));
		} else {
			var_1_1 = (min ((last_1_var_1_15 - last_1_var_1_15) , ((last_1_var_1_15 - last_1_var_1_15) + -256)));
		}
	}


	// From: Req4Batch91Filler_PR_CI
	signed long int stepLocal_3 = (var_1_6 + var_1_8) - var_1_5;
	signed short int stepLocal_2 = var_1_1;
	if (var_1_11 < stepLocal_2) {
		if (var_1_7 == stepLocal_3) {
			var_1_15 = var_1_16;
		} else {
			var_1_15 = var_1_16;
		}
	} else {
		var_1_15 = var_1_16;
	}


	// From: CodeObject1
	if ((! (var_1_24 || var_1_25)) && var_1_25) {
		var_1_27 = (var_1_31 && ((var_1_24 || var_1_32) && (var_1_25 || var_1_33)));
	} else {
		if ((abs (var_1_18)) < var_1_20) {
			var_1_27 = (var_1_25 || (var_1_25 || var_1_25));
		} else {
			var_1_27 = var_1_31;
		}
	}


	// From: CodeObject2
	var_1_39 = var_1_18;


	// From: CodeObject5
	if (((abs (-100)) - (max (var_1_46 , var_1_47))) >= var_1_7) {
		var_1_45 = (abs (var_1_47));
	}


	// From: CodeObject7
	var_1_49 = (var_1_50 + var_1_51);


	// From: CodeObject9
	if (var_1_24) {
		var_1_55 = (abs (var_1_51));
	}


	// From: Req5Batch91Filler_PR_CI
	if (var_1_11 < 5) {
		var_1_17 = (max (var_1_18 , (var_1_19 - var_1_20)));
	}


	// From: CodeObject6
	if (var_1_25) {
		var_1_48 = (var_1_46 + var_1_47);
	}


	// From: CodeObject10
	if (var_1_20 >= var_1_20) {
		var_1_56 = (min ((var_1_47 - 256) , var_1_26));
	}


	// From: Req7Batch91Filler_PR_CI
	var_1_24 = var_1_25;


	// From: CodeObject3
	if (var_1_33 && var_1_32) {
		var_1_41 = (min (var_1_15 , var_1_11));
	}


	// From: CodeObject4
	var_1_44 = var_1_18;


	// From: Req8Batch91Filler_PR_CI
	var_1_26 = var_1_11;


	// From: CodeObject8
	if ((var_1_19 - var_1_20) >= ((- var_1_51) * (abs (var_1_20)))) {
		var_1_52 = (abs (8u));
	}


	// From: Req6Batch91Filler_PR_CI
	if (var_1_24) {
		if (var_1_24 && var_1_24) {
			var_1_21 = var_1_15;
		}
	} else {
		var_1_21 = (var_1_15 - 2);
	}


	// From: Req2Batch91Filler_PR_CI
	unsigned char stepLocal_0 = var_1_15;
	if (var_1_24) {
		var_1_9 = var_1_11;
	} else {
		if (stepLocal_0 <= (var_1_21 / var_1_12)) {
			var_1_9 = var_1_11;
		} else {
			var_1_9 = var_1_11;
		}
	}


	// From: Req3Batch91Filler_PR_CI
	signed long int stepLocal_1 = var_1_1 * (var_1_15 % var_1_12);
	if ((- var_1_15) >= stepLocal_1) {
		var_1_13 = var_1_26;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32768);
	assume_abort_if_not(var_1_12 <= 32767);
	assume_abort_if_not(var_1_12 != 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -461168.6018427382800e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427382800e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -461168.6018427382800e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427382800e+12F && var_1_51 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_26 = var_1_26;
}

int property() {
	return ((((((((last_1_var_1_13 == last_1_var_1_1) ? ((last_1_var_1_1 <= (max (last_1_var_1_13 , last_1_var_1_26))) ? (var_1_1 == ((signed short int) (last_1_var_1_1 + (min ((last_1_var_1_15 - last_1_var_1_15) , (last_1_var_1_15 - last_1_var_1_15)))))) : (var_1_1 == ((signed short int) (min ((last_1_var_1_15 - last_1_var_1_15) , ((last_1_var_1_15 - last_1_var_1_15) + -256)))))) : 1) && (var_1_24 ? (var_1_9 == ((signed char) var_1_11)) : ((var_1_15 <= (var_1_21 / var_1_12)) ? (var_1_9 == ((signed char) var_1_11)) : (var_1_9 == ((signed char) var_1_11))))) && (((- var_1_15) >= (var_1_1 * (var_1_15 % var_1_12))) ? (var_1_13 == ((signed short int) var_1_26)) : 1)) && ((var_1_11 < var_1_1) ? ((var_1_7 == ((var_1_6 + var_1_8) - var_1_5)) ? (var_1_15 == ((unsigned char) var_1_16)) : (var_1_15 == ((unsigned char) var_1_16))) : (var_1_15 == ((unsigned char) var_1_16)))) && ((var_1_11 < 5) ? (var_1_17 == ((float) (max (var_1_18 , (var_1_19 - var_1_20))))) : 1)) && (var_1_24 ? ((var_1_24 && var_1_24) ? (var_1_21 == ((signed short int) var_1_15)) : 1) : (var_1_21 == ((signed short int) (var_1_15 - 2))))) && (var_1_24 == ((unsigned char) var_1_25))) && (var_1_26 == ((signed char) var_1_11))
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
