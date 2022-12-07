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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch97PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 2;
signed long int var_1_5 = 5;
unsigned char var_1_8 = 0;
float var_1_9 = 128.6;
float var_1_10 = 32.5;
unsigned char var_1_11 = 16;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 4;
unsigned char var_1_14 = 4;
unsigned long int var_1_15 = 0;
signed short int var_1_16 = 0;
signed char var_1_17 = 1;
signed char var_1_18 = -1;
signed char var_1_19 = 0;
signed long int var_1_20 = -64;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed short int var_1_24 = -4;
unsigned char var_1_25 = 1;
signed char var_1_26 = 50;
signed char var_1_27 = 64;
signed short int var_1_28 = 4;
unsigned short int var_1_29 = 8;
unsigned char var_1_30 = 16;
unsigned short int var_1_31 = 8;
unsigned short int var_1_32 = 2;
unsigned short int var_1_33 = 48701;
unsigned short int var_1_34 = 1;
float var_1_35 = 1.2;
float var_1_36 = 64.8;
float var_1_37 = 63.86;
unsigned long int var_1_38 = 16;
unsigned long int var_1_39 = 8;
signed char var_1_40 = -8;
float var_1_41 = 63.8;
signed char var_1_42 = -16;
signed char var_1_43 = -32;
unsigned long int var_1_44 = 64;
signed long int var_1_45 = 5;
float var_1_46 = 32.6;
signed long int var_1_47 = -64;
signed char var_1_48 = -2;
signed char var_1_49 = 25;
signed long int var_1_50 = -128;
signed char var_1_51 = -1;
signed long int var_1_52 = -5;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_5 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_25) {
		if (var_1_27 <= var_1_26) {
			var_1_24 = ((max (var_1_27 , (min (-128 , var_1_26)))) + var_1_28);
		}
	} else {
		var_1_24 = (abs (var_1_26));
	}


	// From: CodeObject2
	if ((var_1_26 / var_1_30) < var_1_27) {
		var_1_29 = var_1_30;
	} else {
		var_1_29 = (max ((max ((min (var_1_30 , var_1_31)) , var_1_32)) , ((abs (var_1_33)) - var_1_34)));
	}


	// From: CodeObject3
	var_1_35 = (((max (100000.875f , var_1_36)) - var_1_37) + 7.6f);


	// From: CodeObject4
	if (var_1_34 >= (var_1_30 * var_1_24)) {
		if (var_1_24 > var_1_34) {
			var_1_38 = var_1_34;
		}
	}


	// From: CodeObject5
	if ((var_1_38 ^ var_1_34) < var_1_31) {
		var_1_39 = (max (var_1_29 , var_1_33));
	}


	// From: CodeObject6
	if (! var_1_25) {
		if ((var_1_34 / var_1_30) >= var_1_27) {
			if (var_1_36 <= ((var_1_35 / var_1_41) * var_1_37)) {
				if (var_1_30 < ((var_1_31 * var_1_28) | var_1_32)) {
					var_1_40 = (abs (var_1_42));
				}
			} else {
				if (var_1_31 != var_1_38) {
					var_1_40 = (abs (var_1_43));
				}
			}
		}
	} else {
		if ((25u | (- var_1_44)) < var_1_30) {
			if (var_1_25) {
				var_1_40 = (abs (var_1_43));
			}
		}
	}


	// From: CodeObject7
	var_1_45 = (max ((var_1_31 + var_1_43) , (var_1_29 - (max (var_1_33 , var_1_34)))));


	// From: CodeObject8
	if (var_1_25) {
		var_1_46 = var_1_37;
	}


	// From: CodeObject9
	if ((var_1_38 + 32) <= var_1_32) {
		var_1_47 = var_1_34;
	}


	// From: CodeObject10
	if (var_1_42 >= ((abs (var_1_43)) - var_1_49)) {
		if ((abs (var_1_42)) < ((var_1_49 / var_1_33) % var_1_50)) {
			var_1_48 = var_1_42;
		} else {
			var_1_48 = var_1_51;
		}
	} else {
		var_1_48 = var_1_42;
	}


	// From: CodeObject11
	if (((abs (var_1_33)) - var_1_34) < (var_1_47 & var_1_39)) {
		var_1_52 = 50;
	} else {
		if (((~ var_1_28) < (var_1_39 * var_1_45)) || var_1_25) {
			var_1_52 = var_1_32;
		}
	}


	// From: CodeObject12
	if (var_1_30 > var_1_32) {
		var_1_53 = ((var_1_54 && var_1_55) && var_1_56);
	}


	// From: Req3Batch97PS_CN_100
	if (var_1_9 > var_1_10) {
		var_1_8 = (min ((var_1_11 + (var_1_12 - var_1_13)) , (5 + var_1_14)));
	}


	// From: Req7Batch97PS_CN_100
	var_1_20 = var_1_8;


	// From: Req8Batch97PS_CN_100
	var_1_22 = var_1_23;


	// From: Req4Batch97PS_CN_100
	if (var_1_22) {
		var_1_15 = var_1_8;
	}


	// From: Req5Batch97PS_CN_100
	var_1_16 = ((min (var_1_15 , (max (var_1_13 , var_1_12)))) - var_1_11);


	// From: Req6Batch97PS_CN_100
	if (var_1_22) {
		if (var_1_14 < (var_1_13 & (var_1_15 / 2))) {
			var_1_17 = (var_1_13 + (var_1_18 + (var_1_19 + 5)));
		} else {
			var_1_17 = var_1_18;
		}
	} else {
		var_1_17 = -32;
	}


	// From: Req1Batch97PS_CN_100
	unsigned long int stepLocal_1 = var_1_20 + var_1_15;
	signed long int stepLocal_0 = var_1_20;
	if (stepLocal_1 < -200) {
		if (var_1_22) {
			if (stepLocal_0 > (- var_1_15)) {
				var_1_1 = var_1_20;
			} else {
				var_1_1 = var_1_20;
			}
		} else {
			var_1_1 = var_1_20;
		}
	} else {
		var_1_1 = var_1_20;
	}


	// From: Req2Batch97PS_CN_100
	signed long int stepLocal_4 = 256;
	unsigned char stepLocal_3 = var_1_22;
	unsigned long int stepLocal_2 = var_1_15;
	if (stepLocal_4 > (var_1_15 - (last_1_var_1_5 + var_1_8))) {
		var_1_5 = last_1_var_1_5;
	} else {
		if (stepLocal_3 || var_1_22) {
			if (((32 * -25) | last_1_var_1_5) >= stepLocal_2) {
				var_1_5 = var_1_8;
			}
		} else {
			var_1_5 = -10000;
		}
	}
}



void updateVariables() {
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 63);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -31);
	assume_abort_if_not(var_1_18 <= 32);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -15);
	assume_abort_if_not(var_1_19 <= 16);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -127);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -16383);
	assume_abort_if_not(var_1_28 <= 16383);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 255);
	assume_abort_if_not(var_1_30 != 0);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 32767);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 32767);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	assume_abort_if_not(var_1_41 != 0.0F);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -126);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -126);
	assume_abort_if_not(var_1_43 <= 126);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 4294967295);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 127);
	var_1_50 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_50 >= -2147483648);
	assume_abort_if_not(var_1_50 <= 2147483647);
	assume_abort_if_not(var_1_50 != 0);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -127);
	assume_abort_if_not(var_1_51 <= 126);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 1);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
}



void updateLastVariables() {
	last_1_var_1_5 = var_1_5;
}

int property() {
	return (((((((((var_1_20 + var_1_15) < -200) ? (var_1_22 ? ((var_1_20 > (- var_1_15)) ? (var_1_1 == ((unsigned long int) var_1_20)) : (var_1_1 == ((unsigned long int) var_1_20))) : (var_1_1 == ((unsigned long int) var_1_20))) : (var_1_1 == ((unsigned long int) var_1_20))) && ((256 > (var_1_15 - (last_1_var_1_5 + var_1_8))) ? (var_1_5 == ((signed long int) last_1_var_1_5)) : ((var_1_22 || var_1_22) ? ((((32 * -25) | last_1_var_1_5) >= var_1_15) ? (var_1_5 == ((signed long int) var_1_8)) : 1) : (var_1_5 == ((signed long int) -10000))))) && ((var_1_9 > var_1_10) ? (var_1_8 == ((unsigned char) (min ((var_1_11 + (var_1_12 - var_1_13)) , (5 + var_1_14))))) : 1)) && (var_1_22 ? (var_1_15 == ((unsigned long int) var_1_8)) : 1)) && (var_1_16 == ((signed short int) ((min (var_1_15 , (max (var_1_13 , var_1_12)))) - var_1_11)))) && (var_1_22 ? ((var_1_14 < (var_1_13 & (var_1_15 / 2))) ? (var_1_17 == ((signed char) (var_1_13 + (var_1_18 + (var_1_19 + 5))))) : (var_1_17 == ((signed char) var_1_18))) : (var_1_17 == ((signed char) -32)))) && (var_1_20 == ((signed long int) var_1_8))) && (var_1_22 == ((unsigned char) var_1_23))
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
