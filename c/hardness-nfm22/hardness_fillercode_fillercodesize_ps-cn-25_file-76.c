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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch76PS_CN_25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 256.5;
unsigned char var_1_2 = 0;
double var_1_3 = 7.5;
double var_1_4 = 256.2;
double var_1_5 = 2.75;
signed long int var_1_6 = -64;
double var_1_7 = 8.05;
float var_1_8 = 5.25;
signed long int var_1_11 = 4;
unsigned short int var_1_14 = 10000;
unsigned short int var_1_16 = 5;
unsigned short int var_1_17 = 4;
unsigned char var_1_18 = 100;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 8;
double var_1_21 = 63.25;
double var_1_22 = 1.5;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed short int var_1_25 = 10;
signed char var_1_26 = 4;
signed char var_1_27 = -4;
signed long int var_1_28 = -25;
signed long int var_1_29 = 0;
signed short int var_1_30 = 10;
float var_1_31 = 3.25;
unsigned short int var_1_32 = 128;
unsigned short int var_1_33 = 0;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 256.5;
float last_1_var_1_8 = 5.25;
signed long int last_1_var_1_11 = 4;
unsigned short int last_1_var_1_14 = 10000;
unsigned short int last_1_var_1_17 = 4;
unsigned char last_1_var_1_18 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_21 = var_1_22;


	// From: CodeObject2
	var_1_23 = var_1_24;


	// From: CodeObject3
	if (var_1_24 || (var_1_21 >= var_1_22)) {
		if (var_1_22 < (abs (abs (var_1_21)))) {
			if ((var_1_26 * var_1_27) < (var_1_28 * var_1_29)) {
				var_1_25 = (abs (var_1_26));
			}
		} else {
			var_1_25 = (min (var_1_27 , (abs (min (var_1_26 , var_1_30)))));
		}
	} else {
		var_1_25 = var_1_30;
	}


	// From: CodeObject4
	var_1_31 = var_1_22;


	// From: CodeObject5
	if (var_1_28 >= (var_1_29 | var_1_30)) {
		if (var_1_24) {
			var_1_32 = var_1_33;
		}
	}


	// From: Req6Batch76PS_CN_25
	if (var_1_2) {
		if (last_1_var_1_8 == var_1_5) {
			if ((128 * (min (last_1_var_1_18 , last_1_var_1_11))) > 1) {
				var_1_17 = last_1_var_1_18;
			}
		} else {
			var_1_17 = last_1_var_1_18;
		}
	} else {
		var_1_17 = last_1_var_1_18;
	}


	// From: Req1Batch76PS_CN_25
	if (! var_1_2) {
		var_1_1 = (min ((min (var_1_3 , var_1_4)) , var_1_5));
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch76PS_CN_25
	if (var_1_5 > (var_1_3 / var_1_7)) {
		if (! var_1_2) {
			var_1_6 = -10;
		}
	}


	// From: Req7Batch76PS_CN_25
	unsigned short int stepLocal_1 = var_1_16;
	if ((var_1_6 + (var_1_6 | var_1_6)) > stepLocal_1) {
		var_1_18 = (128 - (var_1_19 + var_1_20));
	}


	// From: Req5Batch76PS_CN_25
	if (var_1_5 >= var_1_1) {
		if ((abs (1.2)) < var_1_4) {
			var_1_14 = var_1_18;
		} else {
			var_1_14 = var_1_18;
		}
	}


	// From: Req4Batch76PS_CN_25
	if (var_1_4 <= last_1_var_1_1) {
		var_1_11 = (last_1_var_1_14 + -128);
	} else {
		var_1_11 = ((min (-256 , last_1_var_1_14)) + (min (last_1_var_1_17 , (max (last_1_var_1_17 , 256)))));
	}


	// From: Req3Batch76PS_CN_25
	signed long int stepLocal_0 = var_1_11;
	if ((var_1_14 * var_1_17) >= stepLocal_0) {
		if (var_1_2) {
			var_1_8 = var_1_4;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854765600e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	assume_abort_if_not(var_1_7 != 0.0F);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 64);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -128);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483648);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32766);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_18 = var_1_18;
}

int property() {
	return (((((((! var_1_2) ? (var_1_1 == ((double) (min ((min (var_1_3 , var_1_4)) , var_1_5)))) : (var_1_1 == ((double) var_1_4))) && ((var_1_5 > (var_1_3 / var_1_7)) ? ((! var_1_2) ? (var_1_6 == ((signed long int) -10)) : 1) : 1)) && (((var_1_14 * var_1_17) >= var_1_11) ? (var_1_2 ? (var_1_8 == ((float) var_1_4)) : 1) : 1)) && ((var_1_4 <= last_1_var_1_1) ? (var_1_11 == ((signed long int) (last_1_var_1_14 + -128))) : (var_1_11 == ((signed long int) ((min (-256 , last_1_var_1_14)) + (min (last_1_var_1_17 , (max (last_1_var_1_17 , 256))))))))) && ((var_1_5 >= var_1_1) ? (((abs (1.2)) < var_1_4) ? (var_1_14 == ((unsigned short int) var_1_18)) : (var_1_14 == ((unsigned short int) var_1_18))) : 1)) && (var_1_2 ? ((last_1_var_1_8 == var_1_5) ? (((128 * (min (last_1_var_1_18 , last_1_var_1_11))) > 1) ? (var_1_17 == ((unsigned short int) last_1_var_1_18)) : 1) : (var_1_17 == ((unsigned short int) last_1_var_1_18))) : (var_1_17 == ((unsigned short int) last_1_var_1_18)))) && (((var_1_6 + (var_1_6 | var_1_6)) > var_1_16) ? (var_1_18 == ((unsigned char) (128 - (var_1_19 + var_1_20)))) : 1)
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
