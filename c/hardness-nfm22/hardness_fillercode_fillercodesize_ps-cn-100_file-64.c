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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch64PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -2;
signed char var_1_10 = -32;
signed long int var_1_11 = 4;
signed long int var_1_12 = 1731242407;
signed long int var_1_13 = 0;
signed char var_1_14 = 10;
signed char var_1_15 = 8;
signed char var_1_16 = -25;
signed char var_1_17 = -16;
unsigned long int var_1_18 = 0;
signed short int var_1_19 = 256;
signed short int var_1_20 = 28075;
signed short int var_1_21 = 256;
signed short int var_1_22 = 25;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed char var_1_25 = 1;
signed char var_1_26 = 0;
signed char var_1_27 = 10;
unsigned long int var_1_28 = 64;
float var_1_30 = 127.75;
signed char var_1_31 = -25;
signed char var_1_32 = 1;
signed long int var_1_33 = 25;
float var_1_34 = 9.5;
float var_1_35 = 256.5;
unsigned long int var_1_36 = 0;
unsigned long int var_1_37 = 200;
signed long int var_1_38 = 4;
signed long int var_1_39 = 4;
unsigned long int var_1_40 = 128;
unsigned long int var_1_41 = 16;
unsigned long int var_1_42 = 3620057689;
unsigned long int var_1_43 = 128;
signed short int var_1_44 = -50;
signed short int var_1_45 = 32;
signed short int var_1_46 = 2;
signed short int var_1_47 = 1;
signed char var_1_48 = 10;
signed char var_1_49 = -10;
signed char var_1_50 = 10;
signed char var_1_51 = 2;
signed char var_1_52 = -32;
float var_1_53 = 200.5;
unsigned char var_1_54 = 0;
float var_1_55 = 16.4;
float var_1_56 = 3.45;
float var_1_57 = 128.25;
unsigned char var_1_58 = 128;
unsigned long int var_1_59 = 64;
unsigned char var_1_60 = 1;
unsigned short int var_1_61 = 4;
signed short int var_1_62 = -128;
float var_1_63 = 64.35;
float var_1_64 = 127.5;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 0;
float var_1_68 = 15.75;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_31 + var_1_32) < var_1_33) {
		var_1_30 = (min (var_1_34 , (abs (var_1_35))));
	}


	// From: CodeObject2
	var_1_36 = var_1_37;


	// From: CodeObject3
	if (var_1_34 < var_1_30) {
		var_1_38 = (abs (max (var_1_31 , (min (var_1_32 , var_1_39)))));
	}


	// From: CodeObject4
	if (var_1_34 > var_1_30) {
		if ((max (32 , var_1_39)) <= var_1_31) {
			var_1_40 = (abs (var_1_41));
		} else {
			var_1_40 = (abs (min (128u , (min (var_1_37 , var_1_41)))));
		}
	} else {
		var_1_40 = (abs (min ((var_1_42 - var_1_43) , var_1_37)));
	}


	// From: CodeObject5
	var_1_44 = ((min (var_1_45 , 8)) - (max ((abs (var_1_46)) , var_1_47)));


	// From: CodeObject6
	if (var_1_46 <= (abs (var_1_47))) {
		var_1_48 = (min ((min (var_1_49 , var_1_50)) , ((abs (var_1_51)) - (abs (var_1_52)))));
	} else {
		var_1_48 = (abs (var_1_51));
	}


	// From: CodeObject7
	if (! var_1_54) {
		if ((abs (var_1_33)) >= (var_1_47 | var_1_51)) {
			var_1_53 = (abs (var_1_35));
		} else {
			var_1_53 = var_1_35;
		}
	}


	// From: CodeObject8
	if (-256 != var_1_32) {
		var_1_55 = (var_1_56 + var_1_57);
	} else {
		var_1_55 = (max (var_1_35 , var_1_56));
	}


	// From: CodeObject9
	if (var_1_40 != (var_1_41 ^ var_1_47)) {
		if ((8u & var_1_42) < (var_1_33 & (var_1_40 / var_1_59))) {
			var_1_58 = (abs (var_1_60));
		}
	}


	// From: CodeObject10
	if (var_1_44 > var_1_37) {
		if (var_1_60 < var_1_47) {
			var_1_61 = (min (var_1_60 , (abs (var_1_58))));
		}
	}


	// From: CodeObject11
	if (var_1_54) {
		if (var_1_35 <= (var_1_63 - var_1_64)) {
			if (var_1_33 > var_1_50) {
				var_1_62 = (abs (var_1_48));
			} else {
				if (var_1_38 <= var_1_47) {
					if ((- var_1_53) > (var_1_35 + var_1_34)) {
						var_1_62 = ((abs (-32)) - (abs (var_1_48)));
					}
				}
			}
		}
	}


	// From: CodeObject12
	if (var_1_57 > var_1_35) {
		var_1_65 = ((var_1_54 && var_1_66) || var_1_67);
	}


	// From: CodeObject13
	var_1_68 = var_1_34;


	// From: Req4Batch64PS_CN_100
	var_1_19 = ((var_1_20 - var_1_21) - var_1_22);


	// From: Req6Batch64PS_CN_100
	signed long int stepLocal_1 = (var_1_26 - var_1_27) + var_1_19;
	if (stepLocal_1 > var_1_22) {
		var_1_25 = (max (var_1_16 , var_1_17));
	} else {
		var_1_25 = (max ((abs (var_1_15)) , (abs (var_1_17))));
	}


	// From: Req2Batch64PS_CN_100
	signed long int stepLocal_0 = var_1_11 - (var_1_12 - var_1_13);
	if ((var_1_25 >> var_1_19) < stepLocal_0) {
		var_1_10 = (var_1_14 + (min (var_1_15 , var_1_16)));
	} else {
		var_1_10 = (var_1_17 + var_1_16);
	}


	// From: Req3Batch64PS_CN_100
	if (var_1_10 != var_1_25) {
		var_1_18 = (min (var_1_13 , var_1_12));
	}


	// From: Req5Batch64PS_CN_100
	if (! ((64 * var_1_18) < var_1_18)) {
		var_1_23 = var_1_24;
	}


	// From: Req1Batch64PS_CN_100
	if (-8 <= var_1_10) {
		if (var_1_10 == last_1_var_1_1) {
			var_1_1 = ((min ((var_1_10 + var_1_19) , var_1_19)) + (var_1_10 + var_1_10));
		}
	} else {
		if (128 < var_1_19) {
			var_1_1 = var_1_10;
		} else {
			var_1_1 = var_1_19;
		}
	}


	// From: Req7Batch64PS_CN_100
	if ((var_1_1 * var_1_1) < var_1_18) {
		if (var_1_1 < var_1_13) {
			var_1_28 = 64u;
		}
	}
}



void updateVariables() {
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 1073741823);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1073741823);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -63);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 16382);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 16383);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 32766);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -1);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -128);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -128);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483648);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_39 >= -2147483646);
	assume_abort_if_not(var_1_39 <= 2147483646);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 4294967294);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 2147483647);
	assume_abort_if_not(var_1_42 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 2147483647);
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= -1);
	assume_abort_if_not(var_1_45 <= 32766);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= -32766);
	assume_abort_if_not(var_1_46 <= 32766);
	var_1_47 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 32766);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -127);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= -127);
	assume_abort_if_not(var_1_50 <= 126);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -126);
	assume_abort_if_not(var_1_51 <= 126);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -126);
	assume_abort_if_not(var_1_52 <= 126);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -461168.6018427382800e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= -461168.6018427382800e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427382800e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 4294967295);
	assume_abort_if_not(var_1_59 != 0);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 254);
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854776000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854776000e+12F && var_1_64 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 0);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 0);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
}

int property() {
	return (((((((-8 <= var_1_10) ? ((var_1_10 == last_1_var_1_1) ? (var_1_1 == ((signed long int) ((min ((var_1_10 + var_1_19) , var_1_19)) + (var_1_10 + var_1_10)))) : 1) : ((128 < var_1_19) ? (var_1_1 == ((signed long int) var_1_10)) : (var_1_1 == ((signed long int) var_1_19)))) && (((var_1_25 >> var_1_19) < (var_1_11 - (var_1_12 - var_1_13))) ? (var_1_10 == ((signed char) (var_1_14 + (min (var_1_15 , var_1_16))))) : (var_1_10 == ((signed char) (var_1_17 + var_1_16))))) && ((var_1_10 != var_1_25) ? (var_1_18 == ((unsigned long int) (min (var_1_13 , var_1_12)))) : 1)) && (var_1_19 == ((signed short int) ((var_1_20 - var_1_21) - var_1_22)))) && ((! ((64 * var_1_18) < var_1_18)) ? (var_1_23 == ((unsigned char) var_1_24)) : 1)) && ((((var_1_26 - var_1_27) + var_1_19) > var_1_22) ? (var_1_25 == ((signed char) (max (var_1_16 , var_1_17)))) : (var_1_25 == ((signed char) (max ((abs (var_1_15)) , (abs (var_1_17)))))))) && (((var_1_1 * var_1_1) < var_1_18) ? ((var_1_1 < var_1_13) ? (var_1_28 == ((unsigned long int) 64u)) : 1) : 1)
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
