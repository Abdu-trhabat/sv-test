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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch13PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 32;
signed char var_1_4 = 16;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 128;
unsigned char var_1_11 = 64;
signed char var_1_12 = -10;
signed char var_1_13 = -10;
signed char var_1_14 = -25;
double var_1_15 = 64.875;
double var_1_17 = 1.625;
double var_1_18 = 32.2;
double var_1_19 = 8.6;
double var_1_20 = 10.5;
signed short int var_1_21 = -64;
unsigned char var_1_22 = 25;
unsigned char var_1_23 = 0;
unsigned long int var_1_24 = 5;
double var_1_25 = 0.75;
double var_1_26 = 99999999999999.5;
unsigned char var_1_27 = 4;
signed char var_1_28 = 5;
signed char var_1_29 = 10;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 50;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 50;
unsigned char var_1_34 = 2;
unsigned char var_1_35 = 64;
unsigned char var_1_36 = 5;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned long int var_1_42 = 2;
float var_1_43 = 64.75;
unsigned long int var_1_44 = 10;
unsigned long int var_1_45 = 5;
float var_1_46 = 10000000000000.225;
signed char var_1_47 = 8;
signed char var_1_48 = -1;
signed char var_1_49 = 32;
unsigned char var_1_50 = 1;
signed char var_1_51 = -5;
unsigned long int var_1_52 = 2830127423;
double var_1_53 = 255.8;
unsigned char var_1_54 = 8;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_21 = -64;
unsigned char last_1_var_1_22 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_25 = var_1_26;


	// From: CodeObject2
	if ((var_1_26 >= var_1_25) && (var_1_28 >= var_1_29)) {
		if (var_1_30) {
			var_1_27 = (max ((min (var_1_31 , var_1_32)) , (abs (var_1_33))));
		} else {
			var_1_27 = ((abs (128)) - (max (var_1_34 , (var_1_35 - var_1_36))));
		}
	}


	// From: CodeObject3
	if ((abs (var_1_29)) == var_1_35) {
		if (var_1_32 <= ((min (var_1_31 , var_1_36)) + var_1_28)) {
			var_1_37 = (! ((var_1_30 && var_1_38) || var_1_39));
		} else {
			var_1_37 = (! 1);
		}
	} else {
		if (var_1_38) {
			if ((max (var_1_34 , (abs (var_1_32)))) > var_1_29) {
				var_1_37 = ((! (var_1_39 || var_1_40)) && (! (! var_1_41)));
			} else {
				var_1_37 = (! var_1_41);
			}
		}
	}


	// From: CodeObject4
	if ((var_1_26 / var_1_43) > var_1_25) {
		if (var_1_38) {
			var_1_42 = (min (var_1_32 , var_1_31));
		}
	} else {
		if (var_1_30) {
			if (var_1_28 < var_1_34) {
				if ((- var_1_26) >= var_1_43) {
					var_1_42 = (max (var_1_31 , var_1_44));
				} else {
					var_1_42 = var_1_45;
				}
			}
		}
	}


	// From: CodeObject5
	if (var_1_38) {
		if (128.625f > (- (63.1f * var_1_26))) {
			var_1_46 = (abs (var_1_26));
		}
	} else {
		var_1_46 = var_1_26;
	}


	// From: CodeObject6
	if (var_1_38) {
		if (var_1_44 <= (3913602695u - var_1_33)) {
			var_1_47 = (min (var_1_36 , -10));
		}
	} else {
		if ((~ var_1_35) < (var_1_34 >> var_1_42)) {
			var_1_47 = (max ((abs (var_1_36)) , (min (var_1_48 , var_1_49))));
		}
	}


	// From: CodeObject7
	var_1_50 = var_1_32;


	// From: CodeObject8
	if ((var_1_50 ^ (var_1_52 - var_1_36)) <= var_1_34) {
		if (var_1_48 <= var_1_36) {
			var_1_51 = (abs (abs (abs (5))));
		}
	}


	// From: CodeObject9
	if (var_1_25 > var_1_46) {
		var_1_53 = var_1_26;
	}


	// From: CodeObject10
	if (var_1_26 >= (var_1_25 / var_1_43)) {
		var_1_54 = (abs (max (var_1_34 , var_1_33)));
	} else {
		if (! var_1_30) {
			var_1_54 = var_1_32;
		}
	}


	// From: Req1Batch13PS_CN_100
	signed long int stepLocal_1 = ~ last_1_var_1_21;
	unsigned char stepLocal_0 = var_1_5;
	if (stepLocal_1 != (last_1_var_1_22 >> var_1_4)) {
		if (stepLocal_0 || var_1_6) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = last_1_var_1_22;
		}
	} else {
		var_1_1 = 100;
	}


	// From: Req2Batch13PS_CN_100
	if (var_1_9) {
		var_1_8 = (var_1_10 - (var_1_11 - var_1_4));
	}


	// From: Req4Batch13PS_CN_100
	unsigned short int stepLocal_3 = var_1_1;
	if (var_1_4 > stepLocal_3) {
		var_1_15 = ((var_1_17 - var_1_18) + ((max (var_1_19 , 499.25)) + var_1_20));
	} else {
		var_1_15 = var_1_17;
	}


	// From: Req6Batch13PS_CN_100
	if (((- var_1_11) < 8) || var_1_9) {
		var_1_22 = (var_1_4 + (abs (var_1_11)));
	}


	// From: Req7Batch13PS_CN_100
	var_1_23 = (var_1_11 + var_1_4);


	// From: Req8Batch13PS_CN_100
	if (var_1_18 <= var_1_20) {
		var_1_24 = (min (var_1_8 , (var_1_8 + var_1_11)));
	} else {
		if (9.99999999999998E13 < var_1_20) {
			var_1_24 = var_1_1;
		}
	}


	// From: Req5Batch13PS_CN_100
	if (var_1_6 || var_1_9) {
		if ((var_1_24 % var_1_10) > var_1_22) {
			var_1_21 = ((abs (var_1_11)) + var_1_14);
		}
	}


	// From: Req3Batch13PS_CN_100
	signed short int stepLocal_2 = var_1_21;
	if (var_1_10 > stepLocal_2) {
		var_1_12 = ((var_1_4 + var_1_13) + var_1_14);
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 63);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -31);
	assume_abort_if_not(var_1_13 <= 31);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -230584.3009213691390e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691390e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -230584.3009213691390e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691390e+12F && var_1_20 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -922337.2036854765600e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -128);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -128);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 63);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	assume_abort_if_not(var_1_43 != 0.0F);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 4294967294);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 4294967294);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -127);
	assume_abort_if_not(var_1_48 <= 126);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -127);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 2147483647);
	assume_abort_if_not(var_1_52 <= 4294967295);
}



void updateLastVariables() {
	last_1_var_1_21 = var_1_21;
	last_1_var_1_22 = var_1_22;
}

int property() {
	return (((((((((~ last_1_var_1_21) != (last_1_var_1_22 >> var_1_4)) ? ((var_1_5 || var_1_6) ? (var_1_1 == ((unsigned short int) var_1_4)) : (var_1_1 == ((unsigned short int) last_1_var_1_22))) : (var_1_1 == ((unsigned short int) 100))) && (var_1_9 ? (var_1_8 == ((unsigned char) (var_1_10 - (var_1_11 - var_1_4)))) : 1)) && ((var_1_10 > var_1_21) ? (var_1_12 == ((signed char) ((var_1_4 + var_1_13) + var_1_14))) : 1)) && ((var_1_4 > var_1_1) ? (var_1_15 == ((double) ((var_1_17 - var_1_18) + ((max (var_1_19 , 499.25)) + var_1_20)))) : (var_1_15 == ((double) var_1_17)))) && ((var_1_6 || var_1_9) ? (((var_1_24 % var_1_10) > var_1_22) ? (var_1_21 == ((signed short int) ((abs (var_1_11)) + var_1_14))) : 1) : 1)) && ((((- var_1_11) < 8) || var_1_9) ? (var_1_22 == ((unsigned char) (var_1_4 + (abs (var_1_11))))) : 1)) && (var_1_23 == ((unsigned char) (var_1_11 + var_1_4)))) && ((var_1_18 <= var_1_20) ? (var_1_24 == ((unsigned long int) (min (var_1_8 , (var_1_8 + var_1_11))))) : ((9.99999999999998E13 < var_1_20) ? (var_1_24 == ((unsigned long int) var_1_1)) : 1))
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
