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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch22Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 128;
unsigned short int var_1_4 = 256;
unsigned short int var_1_6 = 10000;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_8 = 128;
unsigned short int var_1_9 = 8;
unsigned char var_1_10 = 100;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 16;
unsigned short int var_1_13 = 256;
unsigned short int var_1_17 = 4;
double var_1_18 = 64.2;
unsigned short int var_1_19 = 53045;
double var_1_20 = 1.75;
double var_1_21 = 50.35;
double var_1_22 = 5.5;
double var_1_23 = 7.125;
unsigned long int var_1_24 = 50;
unsigned long int var_1_25 = 1907531378;
unsigned long int var_1_26 = 8;
unsigned char var_1_27 = 0;
signed long int var_1_28 = 8;
signed long int var_1_29 = 2;
signed long int var_1_30 = 1;
unsigned long int var_1_31 = 0;
unsigned long int var_1_32 = 32;
signed long int var_1_33 = -16;
signed long int var_1_34 = 0;
unsigned long int var_1_35 = 1;
unsigned long int var_1_36 = 32;
double var_1_37 = 1.4;
double var_1_38 = 5.2;
double var_1_39 = 4.2;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
signed char var_1_43 = 10;
unsigned long int var_1_44 = 1000000000;
signed char var_1_45 = 25;
signed char var_1_46 = 16;
signed char var_1_47 = 32;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_24 = 50;
unsigned char last_1_var_1_27 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch22Filler_PR_CN
	if (last_1_var_1_27) {
		var_1_20 = ((max ((max (var_1_21 , var_1_22)) , 16.6)) - var_1_23);
	} else {
		var_1_20 = var_1_22;
	}


	// From: Req8Batch22Filler_PR_CN
	if ((- 3.75) < (min (var_1_20 , var_1_22))) {
		var_1_27 = 0;
	}


	// From: CodeObject5
	if (var_1_36 <= var_1_31) {
		if (var_1_37 <= var_1_39) {
			var_1_40 = (! var_1_41);
		} else {
			if (var_1_38 <= (abs (var_1_37))) {
				var_1_40 = (var_1_41 || ((var_1_37 >= var_1_39) || var_1_42));
			}
		}
	}


	// From: Req2Batch22Filler_PR_CN
	if (var_1_9 < (var_1_8 << var_1_4)) {
		var_1_10 = (var_1_11 + var_1_12);
	} else {
		var_1_10 = var_1_11;
	}


	// From: CodeObject2
	if ((var_1_28 + 100000000u) != (max (var_1_31 , var_1_32))) {
		var_1_30 = (max ((var_1_33 + (abs (var_1_34))) , var_1_29));
	} else {
		var_1_30 = var_1_29;
	}


	// From: CodeObject6
	if (var_1_36 != (~ (var_1_31 % var_1_44))) {
		var_1_43 = (var_1_45 - var_1_46);
	} else {
		if (var_1_44 < var_1_36) {
			if ((var_1_31 < var_1_36) && var_1_41) {
				if (var_1_39 <= (min (var_1_38 , var_1_37))) {
					var_1_43 = (abs (var_1_46 - var_1_47));
				} else {
					var_1_43 = var_1_47;
				}
			} else {
				var_1_43 = var_1_46;
			}
		}
	}


	// From: Req3Batch22Filler_PR_CN
	unsigned char stepLocal_0 = var_1_27;
	if ((var_1_10 <= var_1_10) || stepLocal_0) {
		var_1_13 = (max ((max (var_1_10 , var_1_10)) , var_1_10));
	} else {
		var_1_13 = var_1_10;
	}


	// From: CodeObject3
	var_1_35 = var_1_36;


	// From: Req6Batch22Filler_PR_CN
	unsigned short int stepLocal_1 = var_1_7;
	if (stepLocal_1 == last_1_var_1_24) {
		var_1_24 = (2332545940u - (1490203111u - var_1_11));
	} else {
		var_1_24 = (var_1_10 + (var_1_25 - var_1_11));
	}


	// From: Req7Batch22Filler_PR_CN
	signed long int stepLocal_2 = var_1_19 - var_1_7;
	if (var_1_10 > stepLocal_2) {
		var_1_26 = var_1_10;
	}


	// From: CodeObject4
	if (var_1_33 > var_1_29) {
		var_1_37 = var_1_38;
	} else {
		var_1_37 = (min (var_1_38 , (abs (max (49.2 , var_1_39)))));
	}


	// From: Req1Batch22Filler_PR_CN
	if (var_1_20 < var_1_20) {
		var_1_1 = (min (var_1_10 , var_1_10));
	} else {
		var_1_1 = (((var_1_6 + var_1_7) - var_1_10) + var_1_10);
	}


	// From: Req4Batch22Filler_PR_CN
	if ((var_1_20 / var_1_18) > var_1_20) {
		var_1_17 = ((var_1_19 - (max (var_1_26 , var_1_12))) - var_1_7);
	}


	// From: CodeObject1
	var_1_28 = var_1_29;
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 8191);
	assume_abort_if_not(var_1_6 <= 16384);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 8192);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	assume_abort_if_not(var_1_18 != 0.0F);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 49150);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 1073741823);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483647);
	assume_abort_if_not(var_1_29 <= 2147483646);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 4294967295);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -1073741823);
	assume_abort_if_not(var_1_33 <= 1073741823);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -1073741823);
	assume_abort_if_not(var_1_34 <= 1073741823);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 4294967294);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854765600e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -922337.2036854765600e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 4294967295);
	assume_abort_if_not(var_1_44 != 0);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -1);
	assume_abort_if_not(var_1_45 <= 126);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 126);
}



void updateLastVariables() {
	last_1_var_1_24 = var_1_24;
	last_1_var_1_27 = var_1_27;
}

int property() {
	return ((((((((var_1_20 < var_1_20) ? (var_1_1 == ((unsigned short int) (min (var_1_10 , var_1_10)))) : (var_1_1 == ((unsigned short int) (((var_1_6 + var_1_7) - var_1_10) + var_1_10)))) && ((var_1_9 < (var_1_8 << var_1_4)) ? (var_1_10 == ((unsigned char) (var_1_11 + var_1_12))) : (var_1_10 == ((unsigned char) var_1_11)))) && (((var_1_10 <= var_1_10) || var_1_27) ? (var_1_13 == ((unsigned short int) (max ((max (var_1_10 , var_1_10)) , var_1_10)))) : (var_1_13 == ((unsigned short int) var_1_10)))) && (((var_1_20 / var_1_18) > var_1_20) ? (var_1_17 == ((unsigned short int) ((var_1_19 - (max (var_1_26 , var_1_12))) - var_1_7))) : 1)) && (last_1_var_1_27 ? (var_1_20 == ((double) ((max ((max (var_1_21 , var_1_22)) , 16.6)) - var_1_23))) : (var_1_20 == ((double) var_1_22)))) && ((var_1_7 == last_1_var_1_24) ? (var_1_24 == ((unsigned long int) (2332545940u - (1490203111u - var_1_11)))) : (var_1_24 == ((unsigned long int) (var_1_10 + (var_1_25 - var_1_11)))))) && ((var_1_10 > (var_1_19 - var_1_7)) ? (var_1_26 == ((unsigned long int) var_1_10)) : 1)) && (((- 3.75) < (min (var_1_20 , var_1_22))) ? (var_1_27 == ((unsigned char) 0)) : 1)
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
