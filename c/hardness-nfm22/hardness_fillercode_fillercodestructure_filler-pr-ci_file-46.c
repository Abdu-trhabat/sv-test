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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch46Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 16;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 10;
unsigned short int var_1_6 = 10;
unsigned short int var_1_7 = 52077;
unsigned short int var_1_8 = 47248;
unsigned short int var_1_9 = 50;
float var_1_11 = 63.75;
signed long int var_1_12 = 100000;
unsigned short int var_1_13 = 8;
signed long int var_1_14 = 2;
signed long int var_1_15 = 32;
double var_1_17 = 127.5;
double var_1_18 = 32.75;
signed char var_1_19 = 0;
unsigned long int var_1_20 = 128;
unsigned long int var_1_21 = 32;
unsigned char var_1_23 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 16;
signed long int var_1_29 = 5;
unsigned char var_1_31 = 128;
signed char var_1_33 = 50;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_13 = 8;
double last_1_var_1_17 = 127.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch46Filler_PR_CI
	if (-100000 >= last_1_var_1_13) {
		var_1_9 = (max ((last_1_var_1_13 + var_1_5) , 64));
	} else {
		if ((last_1_var_1_17 / var_1_11) == 999999.6f) {
			var_1_9 = var_1_7;
		}
	}


	// From: Req1Batch46Filler_PR_CI
	unsigned char stepLocal_0 = var_1_3;
	if (var_1_2 && stepLocal_0) {
		var_1_1 = (var_1_4 - var_1_5);
	} else {
		var_1_1 = (var_1_4 - var_1_5);
	}


	// From: CodeObject5
	if ((-25 + (var_1_15 + var_1_5)) <= var_1_5) {
		if ((16 >> (abs (var_1_15))) > (var_1_5 >> var_1_15)) {
			var_1_31 = var_1_4;
		} else {
			var_1_31 = (abs (var_1_4));
		}
	}


	// From: Req2Batch46Filler_PR_CI
	if (var_1_1 <= (var_1_5 * var_1_4)) {
		if (var_1_2) {
			var_1_6 = ((min (var_1_7 , var_1_8)) - var_1_5);
		} else {
			var_1_6 = var_1_5;
		}
	} else {
		var_1_6 = var_1_5;
	}


	// From: CodeObject1
	var_1_21 = (abs (var_1_7));


	// From: Req6Batch46Filler_PR_CI
	var_1_17 = var_1_18;


	// From: Req7Batch46Filler_PR_CI
	var_1_19 = 5;


	// From: CodeObject3
	var_1_27 = var_1_5;


	// From: CodeObject4
	if (var_1_1 != (var_1_6 + var_1_4)) {
		var_1_29 = (max (var_1_4 , (min ((abs (var_1_1)) , var_1_15))));
	} else {
		var_1_29 = var_1_1;
	}


	// From: Req8Batch46Filler_PR_CI
	var_1_20 = var_1_15;


	// From: CodeObject6
	if (var_1_2 || (var_1_25 && var_1_2)) {
		if (var_1_6 >= var_1_14) {
			var_1_33 = (abs (var_1_14));
		} else {
			var_1_33 = (max ((var_1_14 - var_1_15) , ((var_1_15 + var_1_15) - 2)));
		}
	} else {
		if ((! (! var_1_2)) && ((abs (var_1_14)) <= var_1_15)) {
			var_1_33 = var_1_15;
		}
	}


	// From: Req4Batch46Filler_PR_CI
	if (var_1_1 < var_1_20) {
		if (var_1_5 == (~ (var_1_1 + var_1_20))) {
			var_1_12 = ((max (var_1_5 , (min (-1 , var_1_1)))) - 1000);
		} else {
			var_1_12 = (min (var_1_20 , var_1_8));
		}
	} else {
		var_1_12 = var_1_6;
	}


	// From: CodeObject2
	if (var_1_4 > var_1_6) {
		if (var_1_6 < var_1_4) {
			var_1_23 = (var_1_3 && var_1_25);
		}
	} else {
		var_1_23 = (! var_1_26);
	}


	// From: Req5Batch46Filler_PR_CI
	if ((-4 >> (min (var_1_14 , var_1_15))) >= (var_1_7 | (max (var_1_8 , var_1_9)))) {
		if (var_1_3) {
			var_1_13 = var_1_6;
		} else {
			var_1_13 = var_1_4;
		}
	} else {
		var_1_13 = var_1_1;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 32767);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_17 = var_1_17;
}

int property() {
	return ((((((((var_1_2 && var_1_3) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : (var_1_1 == ((unsigned char) (var_1_4 - var_1_5)))) && ((var_1_1 <= (var_1_5 * var_1_4)) ? (var_1_2 ? (var_1_6 == ((unsigned short int) ((min (var_1_7 , var_1_8)) - var_1_5))) : (var_1_6 == ((unsigned short int) var_1_5))) : (var_1_6 == ((unsigned short int) var_1_5)))) && ((-100000 >= last_1_var_1_13) ? (var_1_9 == ((unsigned short int) (max ((last_1_var_1_13 + var_1_5) , 64)))) : (((last_1_var_1_17 / var_1_11) == 999999.6f) ? (var_1_9 == ((unsigned short int) var_1_7)) : 1))) && ((var_1_1 < var_1_20) ? ((var_1_5 == (~ (var_1_1 + var_1_20))) ? (var_1_12 == ((signed long int) ((max (var_1_5 , (min (-1 , var_1_1)))) - 1000))) : (var_1_12 == ((signed long int) (min (var_1_20 , var_1_8))))) : (var_1_12 == ((signed long int) var_1_6)))) && (((-4 >> (min (var_1_14 , var_1_15))) >= (var_1_7 | (max (var_1_8 , var_1_9)))) ? (var_1_3 ? (var_1_13 == ((unsigned short int) var_1_6)) : (var_1_13 == ((unsigned short int) var_1_4))) : (var_1_13 == ((unsigned short int) var_1_1)))) && (var_1_17 == ((double) var_1_18))) && (var_1_19 == ((signed char) 5))) && (var_1_20 == ((unsigned long int) var_1_15))
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
