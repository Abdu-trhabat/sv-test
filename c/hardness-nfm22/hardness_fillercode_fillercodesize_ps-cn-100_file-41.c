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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch41PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
signed char var_1_8 = 64;
signed char var_1_11 = -10;
signed char var_1_12 = 64;
float var_1_13 = 1.6;
float var_1_14 = 3.5;
unsigned char var_1_15 = 8;
unsigned char var_1_16 = 4;
unsigned short int var_1_17 = 2;
unsigned short int var_1_18 = 10000;
signed short int var_1_20 = 4;
signed char var_1_22 = -32;
unsigned long int var_1_23 = 0;
signed short int var_1_24 = 25;
float var_1_25 = 32.6;
signed short int var_1_26 = 8;
unsigned char var_1_27 = 50;
unsigned char var_1_28 = 4;
unsigned char var_1_29 = 2;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 5;
unsigned char var_1_34 = 10;
unsigned char var_1_35 = 0;
signed long int var_1_36 = 10;
unsigned long int var_1_37 = 50;
float var_1_38 = 255.4;
float var_1_39 = 256.4;
unsigned char var_1_40 = 16;
unsigned char var_1_41 = 5;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 64;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 5;
unsigned char var_1_46 = 32;
signed char var_1_47 = -32;
signed long int var_1_48 = 4;
float var_1_49 = 2.5;
double var_1_50 = 200.15;
float var_1_51 = 49.2;
float var_1_52 = 49.6;
float var_1_53 = 256.75;
float var_1_54 = 1.625;
signed long int var_1_55 = -5;
signed long int var_1_56 = -16;
signed long int var_1_57 = 5;
signed long int var_1_58 = 10;
unsigned char var_1_59 = 2;
signed char var_1_60 = -32;
float var_1_61 = 32.3;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_15 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (32.2f > (25.5f - (abs (var_1_25)))) {
		var_1_24 = (abs (var_1_26));
	}


	// From: CodeObject2
	var_1_27 = (max (var_1_28 , var_1_29));


	// From: CodeObject3
	if ((var_1_29 & var_1_27) >= var_1_28) {
		if (! var_1_31) {
			if (var_1_31) {
				var_1_30 = (var_1_32 - var_1_33);
			}
		}
	}


	// From: CodeObject4
	if (var_1_31) {
		if (var_1_27 == 5) {
			var_1_34 = (min (var_1_29 , var_1_33));
		}
	} else {
		if (var_1_35) {
			var_1_34 = var_1_32;
		}
	}


	// From: CodeObject5
	if (var_1_31 || (var_1_27 >= var_1_30)) {
		var_1_36 = var_1_24;
	}


	// From: CodeObject6
	if ((-0.212f * (var_1_25 / var_1_38)) > var_1_39) {
		var_1_37 = (abs (var_1_34));
	}


	// From: CodeObject7
	var_1_40 = (max ((abs (var_1_29)) , 16));


	// From: CodeObject8
	if (var_1_37 > 5u) {
		var_1_41 = (max ((var_1_33 + var_1_42) , var_1_29));
	}


	// From: CodeObject9
	if (var_1_42 > (~ var_1_32)) {
		var_1_43 = ((min ((min (var_1_33 , var_1_42)) , (min (64 , var_1_44)))) + (var_1_45 + var_1_46));
	}


	// From: CodeObject10
	if ((var_1_32 > var_1_29) || var_1_35) {
		if (var_1_34 <= var_1_42) {
			var_1_47 = (var_1_46 - 64);
		} else {
			var_1_47 = (abs (var_1_46));
		}
	} else {
		if (var_1_36 > ((var_1_48 + var_1_44) & var_1_26)) {
			var_1_47 = (min (var_1_46 , var_1_45));
		}
	}


	// From: CodeObject11
	if (var_1_50 > (var_1_38 + var_1_39)) {
		if (var_1_30 < 128) {
			var_1_49 = (((var_1_51 + var_1_52) - var_1_53) + var_1_54);
		} else {
			var_1_49 = (abs (var_1_52 - var_1_51));
		}
	}


	// From: CodeObject12
	if ((var_1_56 & (max (var_1_57 , var_1_48))) >= var_1_26) {
		if ((var_1_43 - var_1_28) >= ((min (var_1_42 , var_1_33)) - var_1_58)) {
			var_1_55 = (min (var_1_26 , 100000000));
		}
	} else {
		var_1_55 = var_1_46;
	}


	// From: CodeObject13
	if (var_1_52 <= var_1_38) {
		var_1_59 = (max (8 , var_1_33));
	}


	// From: CodeObject14
	if (var_1_31) {
		var_1_60 = var_1_46;
	}


	// From: CodeObject15
	if ((var_1_51 - var_1_52) >= (var_1_50 + var_1_53)) {
		if (var_1_35) {
			var_1_61 = var_1_51;
		}
	}


	// From: Req4Batch41PS_CN_100
	unsigned char stepLocal_1 = ! var_1_5;
	if (stepLocal_1 || (var_1_12 < last_1_var_1_15)) {
		if (! var_1_5) {
			var_1_13 = var_1_14;
		} else {
			var_1_13 = var_1_14;
		}
	}


	// From: Req2Batch41PS_CN_100
	if ((127.35 + var_1_13) <= var_1_13) {
		if (4.5 <= (var_1_13 * var_1_13)) {
			var_1_6 = var_1_5;
		}
	}


	// From: Req1Batch41PS_CN_100
	if ((- var_1_13) > 31.9f) {
		var_1_1 = ((var_1_6 || var_1_4) && var_1_5);
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req5Batch41PS_CN_100
	if (var_1_1) {
		var_1_15 = var_1_16;
	}


	// From: Req8Batch41PS_CN_100
	var_1_22 = 1;


	// From: Req9Batch41PS_CN_100
	var_1_23 = var_1_22;


	// From: Req3Batch41PS_CN_100
	unsigned long int stepLocal_0 = var_1_23;
	if (var_1_15 > stepLocal_0) {
		var_1_8 = (min (var_1_11 , var_1_12));
	}


	// From: Req6Batch41PS_CN_100
	unsigned char stepLocal_2 = var_1_23 < var_1_15;
	if (var_1_1 || stepLocal_2) {
		var_1_17 = (var_1_15 + ((var_1_18 - var_1_16) + var_1_15));
	} else {
		var_1_17 = (var_1_16 + var_1_18);
	}


	// From: Req7Batch41PS_CN_100
	signed long int stepLocal_3 = -10;
	if (((var_1_15 / var_1_18) * var_1_15) < stepLocal_3) {
		var_1_20 = (max (var_1_15 , var_1_16));
	} else {
		if (! (var_1_17 <= var_1_17)) {
			var_1_20 = var_1_11;
		} else {
			var_1_20 = var_1_12;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 8192);
	assume_abort_if_not(var_1_18 <= 16384);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32766);
	assume_abort_if_not(var_1_26 <= 32766);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 254);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 127);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	assume_abort_if_not(var_1_38 != 0.0F);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 64);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_48 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_48 >= -2147483648);
	assume_abort_if_not(var_1_48 <= 2147483647);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -922337.2036854776000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691390e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691390e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -461168.6018427382800e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_56 >= -2147483648);
	assume_abort_if_not(var_1_56 <= 2147483647);
	var_1_57 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_57 >= -2147483648);
	assume_abort_if_not(var_1_57 <= 2147483647);
	var_1_58 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_15 = var_1_15;
}

int property() {
	return ((((((((((- var_1_13) > 31.9f) ? (var_1_1 == ((unsigned char) ((var_1_6 || var_1_4) && var_1_5))) : (var_1_1 == ((unsigned char) var_1_5))) && (((127.35 + var_1_13) <= var_1_13) ? ((4.5 <= (var_1_13 * var_1_13)) ? (var_1_6 == ((unsigned char) var_1_5)) : 1) : 1)) && ((var_1_15 > var_1_23) ? (var_1_8 == ((signed char) (min (var_1_11 , var_1_12)))) : 1)) && (((! var_1_5) || (var_1_12 < last_1_var_1_15)) ? ((! var_1_5) ? (var_1_13 == ((float) var_1_14)) : (var_1_13 == ((float) var_1_14))) : 1)) && (var_1_1 ? (var_1_15 == ((unsigned char) var_1_16)) : 1)) && ((var_1_1 || (var_1_23 < var_1_15)) ? (var_1_17 == ((unsigned short int) (var_1_15 + ((var_1_18 - var_1_16) + var_1_15)))) : (var_1_17 == ((unsigned short int) (var_1_16 + var_1_18))))) && ((((var_1_15 / var_1_18) * var_1_15) < -10) ? (var_1_20 == ((signed short int) (max (var_1_15 , var_1_16)))) : ((! (var_1_17 <= var_1_17)) ? (var_1_20 == ((signed short int) var_1_11)) : (var_1_20 == ((signed short int) var_1_12))))) && (var_1_22 == ((signed char) 1))) && (var_1_23 == ((unsigned long int) var_1_22))
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
