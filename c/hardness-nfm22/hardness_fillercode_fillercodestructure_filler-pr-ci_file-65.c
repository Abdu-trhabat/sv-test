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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch65Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 4;
unsigned short int var_1_8 = 64;
unsigned short int var_1_11 = 256;
unsigned short int var_1_12 = 0;
unsigned short int var_1_13 = 64;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
signed char var_1_16 = 50;
signed char var_1_19 = -100;
double var_1_20 = 100000000.8;
double var_1_21 = 15.125;
double var_1_22 = 99.22;
signed long int var_1_23 = -16;
unsigned char var_1_24 = 1;
signed char var_1_25 = 10;
signed char var_1_26 = 16;
unsigned char var_1_27 = 0;
double var_1_28 = 5.5;
signed long int var_1_29 = 50;
signed char var_1_31 = 4;
unsigned short int var_1_33 = 16;
unsigned char var_1_39 = 4;
signed long int var_1_41 = -5;
double var_1_42 = 49.6;
signed long int var_1_45 = -2;
unsigned long int var_1_47 = 16;
unsigned long int var_1_50 = 1275815169;
unsigned long int var_1_51 = 1483937619;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 4;
unsigned char last_1_var_1_14 = 1;
signed char last_1_var_1_16 = 50;
signed long int last_1_var_1_23 = -16;
unsigned char last_1_var_1_24 = 1;
double last_1_var_1_28 = 5.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch65Filler_PR_CI
	signed long int stepLocal_3 = last_1_var_1_23;
	unsigned char stepLocal_2 = ! (last_1_var_1_14 || last_1_var_1_14);
	if (last_1_var_1_23 < stepLocal_3) {
		if (stepLocal_2 && last_1_var_1_24) {
			if ((max (2.75f , (min (last_1_var_1_28 , 999999.95f)))) != last_1_var_1_28) {
				var_1_16 = 10;
			} else {
				var_1_16 = var_1_19;
			}
		} else {
			var_1_16 = var_1_19;
		}
	} else {
		var_1_16 = 100;
	}


	// From: CodeObject6
	if (1000000.4f != var_1_22) {
		if (var_1_22 > var_1_22) {
			var_1_42 = (max (var_1_21 , var_1_21));
		}
	}


	// From: Req6Batch65Filler_PR_CI
	if (((max (last_1_var_1_1 , last_1_var_1_16)) | last_1_var_1_16) >= last_1_var_1_23) {
		var_1_23 = (5 - var_1_12);
	} else {
		var_1_23 = (max (var_1_11 , last_1_var_1_1));
	}


	// From: CodeObject4
	var_1_39 = var_1_26;


	// From: Req5Batch65Filler_PR_CI
	var_1_20 = (var_1_21 - (var_1_22 + 1.5));


	// From: CodeObject1
	var_1_29 = var_1_12;


	// From: CodeObject2
	var_1_31 = var_1_19;


	// From: CodeObject5
	if (var_1_12 != var_1_1) {
		if ((-5 | var_1_1) <= var_1_19) {
			var_1_41 = (max (var_1_26 , var_1_12));
		}
	}


	// From: Req8Batch65Filler_PR_CI
	var_1_28 = var_1_21;


	// From: CodeObject8
	if (var_1_21 < var_1_21) {
		if ((var_1_11 | var_1_23) > var_1_11) {
			var_1_47 = (max (var_1_26 , var_1_11));
		} else {
			if (var_1_14) {
				if (var_1_21 >= var_1_22) {
					var_1_47 = ((var_1_50 + (min (1530535536u , var_1_51))) - (max (var_1_12 , var_1_26)));
				}
			} else {
				var_1_47 = var_1_50;
			}
		}
	} else {
		var_1_47 = var_1_23;
	}


	// From: Req1Batch65Filler_PR_CI
	unsigned char stepLocal_0 = var_1_23 > 4;
	if ((var_1_23 <= var_1_23) || stepLocal_0) {
		var_1_1 = (max ((var_1_16 + (var_1_16 + var_1_16)) , -100));
	} else {
		var_1_1 = var_1_16;
	}


	// From: Req7Batch65Filler_PR_CI
	var_1_24 = ((var_1_1 <= (var_1_25 - var_1_26)) && var_1_27);


	// From: Req3Batch65Filler_PR_CI
	signed char stepLocal_1 = var_1_16;
	if (stepLocal_1 > (var_1_23 + (var_1_16 ^ var_1_16))) {
		var_1_14 = (var_1_24 || var_1_15);
	}


	// From: Req2Batch65Filler_PR_CI
	if (var_1_14) {
		if (var_1_24) {
			var_1_8 = (max ((var_1_11 + var_1_12) , var_1_13));
		}
	}


	// From: CodeObject3
	if (var_1_15) {
		if (var_1_11 < var_1_19) {
			var_1_33 = (abs (var_1_11));
		}
	} else {
		if ((min (var_1_21 , var_1_28)) < var_1_28) {
			var_1_33 = var_1_11;
		}
	}


	// From: CodeObject7
	if (var_1_14 && var_1_27) {
		var_1_45 = (max ((var_1_1 + var_1_26) , (abs (var_1_13))));
	} else {
		var_1_45 = ((var_1_19 + var_1_23) + var_1_26);
	}
}



void updateVariables() {
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -127);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 1073741823);
	assume_abort_if_not(var_1_50 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 1073741824);
	assume_abort_if_not(var_1_51 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_28 = var_1_28;
}

int property() {
	return (((((((((var_1_23 <= var_1_23) || (var_1_23 > 4)) ? (var_1_1 == ((signed short int) (max ((var_1_16 + (var_1_16 + var_1_16)) , -100)))) : (var_1_1 == ((signed short int) var_1_16))) && (var_1_14 ? (var_1_24 ? (var_1_8 == ((unsigned short int) (max ((var_1_11 + var_1_12) , var_1_13)))) : 1) : 1)) && ((var_1_16 > (var_1_23 + (var_1_16 ^ var_1_16))) ? (var_1_14 == ((unsigned char) (var_1_24 || var_1_15))) : 1)) && ((last_1_var_1_23 < last_1_var_1_23) ? (((! (last_1_var_1_14 || last_1_var_1_14)) && last_1_var_1_24) ? (((max (2.75f , (min (last_1_var_1_28 , 999999.95f)))) != last_1_var_1_28) ? (var_1_16 == ((signed char) 10)) : (var_1_16 == ((signed char) var_1_19))) : (var_1_16 == ((signed char) var_1_19))) : (var_1_16 == ((signed char) 100)))) && (var_1_20 == ((double) (var_1_21 - (var_1_22 + 1.5))))) && ((((max (last_1_var_1_1 , last_1_var_1_16)) | last_1_var_1_16) >= last_1_var_1_23) ? (var_1_23 == ((signed long int) (5 - var_1_12))) : (var_1_23 == ((signed long int) (max (var_1_11 , last_1_var_1_1)))))) && (var_1_24 == ((unsigned char) ((var_1_1 <= (var_1_25 - var_1_26)) && var_1_27)))) && (var_1_28 == ((double) var_1_21))
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
