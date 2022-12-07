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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch48Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 10;
unsigned char var_1_2 = 1;
double var_1_3 = 0.0;
double var_1_4 = 128.2;
double var_1_5 = 50.1;
double var_1_6 = 64.5;
unsigned short int var_1_7 = 1;
unsigned char var_1_8 = 5;
double var_1_9 = 15.35;
unsigned char var_1_10 = 10;
unsigned char var_1_11 = 2;
signed long int var_1_12 = 32;
signed long int var_1_13 = 256;
signed char var_1_14 = 1;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 0;
signed char var_1_17 = -64;
unsigned short int var_1_18 = 64;
unsigned short int var_1_20 = 8;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
float var_1_24 = 5.4;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 1;
float var_1_27 = 10000000.6;
unsigned char var_1_28 = 0;
double var_1_29 = 50.2;
double var_1_30 = 99.75;
double var_1_31 = 199.5;
signed char var_1_32 = -25;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 16;
signed char var_1_35 = -16;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
signed short int var_1_38 = -4;
float var_1_40 = 16.2;
float var_1_41 = 10.75;
float var_1_42 = 999.6;
float var_1_43 = 64.5;
signed long int var_1_44 = -2;
signed short int var_1_45 = 2;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 5;
unsigned short int last_1_var_1_18 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch48Filler_PR_CO
	if (var_1_2) {
		if (((var_1_3 - var_1_4) - var_1_5) == (15.75 - var_1_6)) {
			var_1_1 = (5 + last_1_var_1_8);
		} else {
			var_1_1 = last_1_var_1_8;
		}
	} else {
		var_1_1 = 1;
	}


	// From: CodeObject7
	if (((var_1_18 | 1) % var_1_33) >= (var_1_8 >> var_1_34)) {
		var_1_38 = (abs (abs (var_1_33)));
	}


	// From: Req2Batch48Filler_PR_CO
	unsigned short int stepLocal_0 = var_1_1;
	if (var_1_6 > (var_1_5 / (max (var_1_3 , var_1_9)))) {
		var_1_8 = (abs (var_1_10));
	} else {
		if (stepLocal_0 <= var_1_7) {
			var_1_8 = var_1_10;
		} else {
			var_1_8 = var_1_11;
		}
	}


	// From: CodeObject1
	var_1_20 = var_1_8;


	// From: CodeObject2
	if (var_1_23 || (2.65f > var_1_24)) {
		var_1_22 = (! (! var_1_25));
	}


	// From: CodeObject8
	if (var_1_37) {
		var_1_40 = ((max (var_1_41 , var_1_42)) + (abs (var_1_43)));
	}


	// From: Req3Batch48Filler_PR_CO
	if (var_1_2) {
		if (-128 > var_1_10) {
			if (var_1_3 >= (2.75 / var_1_9)) {
				var_1_12 = (var_1_11 + (last_1_var_1_18 + var_1_10));
			} else {
				var_1_12 = last_1_var_1_18;
			}
		}
	} else {
		var_1_12 = last_1_var_1_18;
	}


	// From: CodeObject5
	if (((abs (var_1_33)) - (abs (var_1_34))) <= var_1_8) {
		var_1_32 = (abs (var_1_35));
	}


	// From: CodeObject9
	if (var_1_23) {
		var_1_44 = (-5 + var_1_34);
	}


	// From: Req5Batch48Filler_PR_CO
	signed long int stepLocal_1 = max ((var_1_15 - var_1_16) , var_1_12);
	if (var_1_10 == stepLocal_1) {
		var_1_14 = (abs (var_1_17));
	} else {
		var_1_14 = var_1_17;
	}


	// From: CodeObject4
	if (var_1_26) {
		var_1_29 = (min (var_1_30 , var_1_31));
	}


	// From: Req4Batch48Filler_PR_CO
	if (var_1_2) {
		var_1_13 = var_1_11;
	}


	// From: CodeObject3
	if (var_1_23) {
		var_1_26 = (! ((var_1_24 >= var_1_27) && var_1_28));
	}


	// From: CodeObject6
	if ((var_1_34 & var_1_12) <= ((var_1_33 - var_1_8) + -16)) {
		var_1_36 = var_1_25;
	} else {
		if (var_1_28) {
			var_1_36 = (! (! var_1_37));
		} else {
			var_1_36 = var_1_37;
		}
	}


	// From: CodeObject10
	var_1_45 = var_1_8;


	// From: Req6Batch48Filler_PR_CO
	if (var_1_8 == var_1_13) {
		var_1_18 = (var_1_10 + (min (var_1_14 , var_1_16)));
	} else {
		if (last_1_var_1_18 != var_1_16) {
			if (-256 >= var_1_13) {
				var_1_18 = var_1_16;
			} else {
				var_1_18 = var_1_15;
			}
		} else {
			var_1_18 = var_1_10;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 4611686.018427387900e+12F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427387900e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	assume_abort_if_not(var_1_9 != 0.0F);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 255);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -126);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854765600e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 255);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -126);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -461168.6018427382800e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -461168.6018427382800e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -461168.6018427382800e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_18 = var_1_18;
}

int property() {
	return (((((var_1_2 ? ((((var_1_3 - var_1_4) - var_1_5) == (15.75 - var_1_6)) ? (var_1_1 == ((unsigned short int) (5 + last_1_var_1_8))) : (var_1_1 == ((unsigned short int) last_1_var_1_8))) : (var_1_1 == ((unsigned short int) 1))) && ((var_1_6 > (var_1_5 / (max (var_1_3 , var_1_9)))) ? (var_1_8 == ((unsigned char) (abs (var_1_10)))) : ((var_1_1 <= var_1_7) ? (var_1_8 == ((unsigned char) var_1_10)) : (var_1_8 == ((unsigned char) var_1_11))))) && (var_1_2 ? ((-128 > var_1_10) ? ((var_1_3 >= (2.75 / var_1_9)) ? (var_1_12 == ((signed long int) (var_1_11 + (last_1_var_1_18 + var_1_10)))) : (var_1_12 == ((signed long int) last_1_var_1_18))) : 1) : (var_1_12 == ((signed long int) last_1_var_1_18)))) && (var_1_2 ? (var_1_13 == ((signed long int) var_1_11)) : 1)) && ((var_1_10 == (max ((var_1_15 - var_1_16) , var_1_12))) ? (var_1_14 == ((signed char) (abs (var_1_17)))) : (var_1_14 == ((signed char) var_1_17)))) && ((var_1_8 == var_1_13) ? (var_1_18 == ((unsigned short int) (var_1_10 + (min (var_1_14 , var_1_16))))) : ((last_1_var_1_18 != var_1_16) ? ((-256 >= var_1_13) ? (var_1_18 == ((unsigned short int) var_1_16)) : (var_1_18 == ((unsigned short int) var_1_15))) : (var_1_18 == ((unsigned short int) var_1_10))))
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
