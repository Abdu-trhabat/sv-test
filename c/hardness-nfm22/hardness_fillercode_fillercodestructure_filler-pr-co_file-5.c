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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 10;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 1;
unsigned long int var_1_6 = 5;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 64;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 25;
unsigned short int var_1_14 = 31408;
double var_1_15 = 64.375;
double var_1_16 = 10.85;
double var_1_17 = 128.8;
double var_1_18 = 2.6;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed short int var_1_21 = -64;
signed long int var_1_22 = -32;
signed char var_1_26 = 25;
signed char var_1_27 = 4;
unsigned long int var_1_28 = 32;
signed short int var_1_30 = 5;
unsigned long int var_1_32 = 4;
float var_1_34 = 31.25;
float var_1_36 = 7.8;
float var_1_37 = 16.2;
float var_1_38 = 4.5;
double var_1_39 = 7.4;
double var_1_40 = 0.5;
double var_1_41 = 128.6;
double var_1_42 = 256.25;
double var_1_43 = 2.25;
signed long int var_1_44 = 25;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_12 = 25;
double last_1_var_1_15 = 64.375;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch5Filler_PR_CO
	if (last_1_var_1_12 > var_1_4) {
		if ((- last_1_var_1_15) < last_1_var_1_15) {
			var_1_6 = 10u;
		}
	}


	// From: Req1Batch5Filler_PR_CO
	if (((- 64) + var_1_6) == var_1_6) {
		var_1_1 = ((abs (var_1_4)) - var_1_5);
	} else {
		var_1_1 = ((min (128 , var_1_4)) - 64);
	}


	// From: CodeObject3
	if (var_1_15 == (min (32.5 , var_1_15))) {
		var_1_30 = var_1_27;
	} else {
		if (var_1_1 < var_1_21) {
			if (var_1_27 < var_1_9) {
				var_1_30 = var_1_27;
			} else {
				var_1_30 = var_1_26;
			}
		}
	}


	// From: Req3Batch5Filler_PR_CO
	if (var_1_5 == (var_1_6 / var_1_4)) {
		var_1_9 = (min (var_1_5 , (abs (var_1_4))));
	} else {
		var_1_9 = ((var_1_10 + var_1_11) - var_1_5);
	}


	// From: CodeObject6
	if (-256 < (var_1_1 * 10)) {
		if (var_1_15 >= var_1_38) {
			var_1_39 = ((max ((min (var_1_40 , var_1_41)) , var_1_42)) - var_1_43);
		}
	} else {
		var_1_39 = var_1_38;
	}


	// From: Req7Batch5Filler_PR_CO
	var_1_21 = var_1_10;


	// From: CodeObject2
	if (8.4 <= var_1_15) {
		var_1_28 = (abs (min (var_1_21 , var_1_1)));
	} else {
		var_1_28 = (abs (var_1_21));
	}


	// From: Req6Batch5Filler_PR_CO
	unsigned long int stepLocal_3 = var_1_6;
	unsigned char stepLocal_2 = var_1_4;
	if (stepLocal_2 < var_1_1) {
		if (stepLocal_3 > var_1_21) {
			var_1_19 = var_1_20;
		}
	}


	// From: CodeObject1
	if (var_1_21 <= ((min (var_1_21 , var_1_1)) >> (var_1_26 - var_1_27))) {
		var_1_22 = (max (var_1_1 , var_1_21));
	} else {
		var_1_22 = var_1_1;
	}


	// From: Req4Batch5Filler_PR_CO
	unsigned long int stepLocal_0 = max (var_1_6 , var_1_4);
	if ((abs (var_1_21)) <= stepLocal_0) {
		var_1_12 = ((var_1_14 - var_1_5) + (abs (var_1_6)));
	} else {
		var_1_12 = var_1_6;
	}


	// From: CodeObject4
	if (var_1_19) {
		var_1_32 = (abs (var_1_1 + var_1_21));
	}


	// From: CodeObject7
	var_1_44 = var_1_9;


	// From: Req5Batch5Filler_PR_CO
	signed long int stepLocal_1 = ~ (var_1_5 * var_1_1);
	if (stepLocal_1 <= var_1_12) {
		var_1_15 = (max ((5.25 - var_1_16) , var_1_17));
	} else {
		var_1_15 = (min ((min (var_1_17 , var_1_16)) , var_1_18));
	}


	// From: CodeObject5
	if (var_1_19) {
		if (var_1_19) {
			if (var_1_6 > var_1_9) {
				var_1_34 = (9.5f + 128.5f);
			}
		} else {
			var_1_34 = (min ((abs (min (var_1_36 , var_1_37))) , var_1_38));
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 63);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 64);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 16);
	assume_abort_if_not(var_1_26 <= 32);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 16);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854765600e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_15 = var_1_15;
}

int property() {
	return (((((((((- 64) + var_1_6) == var_1_6) ? (var_1_1 == ((unsigned char) ((abs (var_1_4)) - var_1_5))) : (var_1_1 == ((unsigned char) ((min (128 , var_1_4)) - 64)))) && ((last_1_var_1_12 > var_1_4) ? (((- last_1_var_1_15) < last_1_var_1_15) ? (var_1_6 == ((unsigned long int) 10u)) : 1) : 1)) && ((var_1_5 == (var_1_6 / var_1_4)) ? (var_1_9 == ((unsigned char) (min (var_1_5 , (abs (var_1_4)))))) : (var_1_9 == ((unsigned char) ((var_1_10 + var_1_11) - var_1_5))))) && (((abs (var_1_21)) <= (max (var_1_6 , var_1_4))) ? (var_1_12 == ((unsigned short int) ((var_1_14 - var_1_5) + (abs (var_1_6))))) : (var_1_12 == ((unsigned short int) var_1_6)))) && (((~ (var_1_5 * var_1_1)) <= var_1_12) ? (var_1_15 == ((double) (max ((5.25 - var_1_16) , var_1_17)))) : (var_1_15 == ((double) (min ((min (var_1_17 , var_1_16)) , var_1_18)))))) && ((var_1_4 < var_1_1) ? ((var_1_6 > var_1_21) ? (var_1_19 == ((unsigned char) var_1_20)) : 1) : 1)) && (var_1_21 == ((signed short int) var_1_10))
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
