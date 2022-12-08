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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch99PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = 25;
double var_1_10 = 99999999999.25;
double var_1_11 = 255.25;
double var_1_12 = 1.125;
unsigned char var_1_13 = 2;
unsigned char var_1_14 = 5;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 4;
unsigned char var_1_17 = 2;
signed char var_1_18 = 4;
signed char var_1_19 = 16;
signed char var_1_20 = 32;
signed char var_1_21 = 25;
signed char var_1_22 = 1;
signed char var_1_23 = 100;
double var_1_24 = 3.125;
double var_1_25 = 0.0;
unsigned short int var_1_26 = 32;
unsigned short int var_1_27 = 36217;
unsigned char var_1_28 = 2;
signed long int var_1_29 = -25;
signed long int var_1_30 = 100000000;
signed char var_1_31 = 4;
signed long int var_1_32 = -4;
signed char var_1_33 = -4;
signed char var_1_34 = 64;
signed char var_1_35 = 32;
signed char var_1_36 = 2;
signed char var_1_37 = 8;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
signed short int var_1_43 = 128;
unsigned short int var_1_44 = 8;
signed short int var_1_45 = 50;
signed short int var_1_46 = 1;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 128;
float var_1_52 = 255.6;
float var_1_53 = 3.225;
float var_1_54 = 64.4;
unsigned char var_1_55 = 2;
unsigned char var_1_56 = 32;
unsigned long int var_1_57 = 0;
double var_1_58 = 128.25;
float var_1_59 = 64.5;
float var_1_60 = 63.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_29 = var_1_30;


	// From: CodeObject2
	if ((var_1_29 >> var_1_30) >= var_1_32) {
		var_1_31 = (max (var_1_33 , (4 - (var_1_34 - 25))));
	} else {
		var_1_31 = (var_1_35 + var_1_36);
	}


	// From: CodeObject3
	if (var_1_38) {
		if ((min (var_1_29 , -32)) <= var_1_34) {
			var_1_37 = (max (var_1_33 , 2));
		}
	} else {
		var_1_37 = var_1_34;
	}


	// From: CodeObject4
	if (! var_1_38) {
		if (! var_1_38) {
			var_1_39 = ((var_1_31 >= var_1_35) && var_1_40);
		}
	} else {
		if (var_1_38) {
			var_1_39 = var_1_40;
		} else {
			if (var_1_40) {
				var_1_39 = var_1_41;
			} else {
				var_1_39 = var_1_42;
			}
		}
	}


	// From: CodeObject5
	if (var_1_37 > var_1_33) {
		if ((var_1_44 ^ var_1_30) > var_1_32) {
			if ((max ((abs (-8)) , var_1_31)) >= var_1_34) {
				var_1_43 = (abs ((var_1_34 + var_1_45) - var_1_46));
			} else {
				if ((~ var_1_32) >= var_1_45) {
					if (var_1_41) {
						var_1_43 = (var_1_33 + (max ((max (-64 , var_1_34)) , var_1_36)));
					} else {
						var_1_43 = var_1_45;
					}
				}
			}
		}
	}


	// From: CodeObject6
	if (var_1_29 <= (abs (var_1_31))) {
		var_1_47 = (var_1_41 || var_1_40);
	} else {
		if (var_1_46 > (var_1_34 | var_1_33)) {
			if (! ((32 <= var_1_32) || var_1_38)) {
				var_1_47 = var_1_41;
			} else {
				var_1_47 = (var_1_40 || var_1_41);
			}
		} else {
			var_1_47 = var_1_41;
		}
	}


	// From: CodeObject7
	if (var_1_36 < var_1_29) {
		if (var_1_42) {
			if (var_1_34 <= var_1_31) {
				if (var_1_39) {
					var_1_48 = (((-100 > var_1_35) || var_1_49) && var_1_50);
				}
			} else {
				if (var_1_31 >= (var_1_36 * var_1_33)) {
					var_1_48 = ((! var_1_41) && (! (! var_1_49)));
				}
			}
		}
	}


	// From: CodeObject8
	if ((min ((var_1_52 + 8.25f) , (abs (var_1_53)))) >= var_1_54) {
		if ((128 >> var_1_45) > var_1_33) {
			var_1_51 = (min (var_1_34 , var_1_55));
		} else {
			var_1_51 = (var_1_34 + var_1_56);
		}
	}


	// From: CodeObject9
	var_1_57 = var_1_34;


	// From: CodeObject10
	var_1_58 = 9.375;


	// From: CodeObject11
	var_1_59 = var_1_60;


	// From: Req1Batch99PS_CN_100
	if (var_1_2) {
		var_1_1 = (var_1_3 || var_1_4);
	} else {
		var_1_1 = (var_1_3 || (var_1_4 || var_1_5));
	}


	// From: Req5Batch99PS_CN_100
	if (! var_1_5) {
		var_1_15 = (max ((var_1_16 + var_1_17) , var_1_14));
	}


	// From: Req6Batch99PS_CN_100
	var_1_18 = (max (((var_1_19 - var_1_20) + var_1_21) , (var_1_22 - var_1_23)));


	// From: Req8Batch99PS_CN_100
	if (var_1_1) {
		var_1_26 = (min ((min (var_1_18 , var_1_14)) , (var_1_27 - var_1_17)));
	}


	// From: Req9Batch99PS_CN_100
	var_1_28 = var_1_16;


	// From: Req2Batch99PS_CN_100
	var_1_6 = ((var_1_28 - var_1_26) + var_1_26);


	// From: Req3Batch99PS_CN_100
	if (var_1_26 < (var_1_6 * var_1_28)) {
		if (var_1_3) {
			if (var_1_26 <= var_1_6) {
				var_1_10 = (var_1_11 - var_1_12);
			}
		}
	} else {
		var_1_10 = var_1_12;
	}


	// From: Req4Batch99PS_CN_100
	signed long int stepLocal_0 = - var_1_26;
	if (var_1_12 != var_1_10) {
		var_1_13 = var_1_14;
	} else {
		if (stepLocal_0 > var_1_14) {
			var_1_13 = var_1_14;
		} else {
			var_1_13 = 25;
		}
	}


	// From: Req7Batch99PS_CN_100
	signed char stepLocal_1 = var_1_23;
	if (stepLocal_1 >= (var_1_20 ^ var_1_28)) {
		var_1_24 = (max ((min (var_1_12 , var_1_11)) , ((var_1_25 - 25.5) - 127.125)));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 0);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -63);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -1);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 4611686.018427382800e+12F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 32767);
	assume_abort_if_not(var_1_27 <= 65534);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483647);
	assume_abort_if_not(var_1_30 <= 2147483646);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -127);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 63);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -63);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -63);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 65535);
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 16383);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 32766);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= -922337.2036854776000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= -922337.2036854776000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854776000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -922337.2036854776000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 127);
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= -922337.2036854765600e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854765600e+12F && var_1_60 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return ((((((((var_1_2 ? (var_1_1 == ((unsigned char) (var_1_3 || var_1_4))) : (var_1_1 == ((unsigned char) (var_1_3 || (var_1_4 || var_1_5))))) && (var_1_6 == ((signed long int) ((var_1_28 - var_1_26) + var_1_26)))) && ((var_1_26 < (var_1_6 * var_1_28)) ? (var_1_3 ? ((var_1_26 <= var_1_6) ? (var_1_10 == ((double) (var_1_11 - var_1_12))) : 1) : 1) : (var_1_10 == ((double) var_1_12)))) && ((var_1_12 != var_1_10) ? (var_1_13 == ((unsigned char) var_1_14)) : (((- var_1_26) > var_1_14) ? (var_1_13 == ((unsigned char) var_1_14)) : (var_1_13 == ((unsigned char) 25))))) && ((! var_1_5) ? (var_1_15 == ((unsigned char) (max ((var_1_16 + var_1_17) , var_1_14)))) : 1)) && (var_1_18 == ((signed char) (max (((var_1_19 - var_1_20) + var_1_21) , (var_1_22 - var_1_23)))))) && ((var_1_23 >= (var_1_20 ^ var_1_28)) ? (var_1_24 == ((double) (max ((min (var_1_12 , var_1_11)) , ((var_1_25 - 25.5) - 127.125))))) : 1)) && (var_1_1 ? (var_1_26 == ((unsigned short int) (min ((min (var_1_18 , var_1_14)) , (var_1_27 - var_1_17))))) : 1)) && (var_1_28 == ((unsigned char) var_1_16))
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
