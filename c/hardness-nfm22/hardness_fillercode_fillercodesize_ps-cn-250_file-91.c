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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch91PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -64;
signed short int var_1_5 = 8;
signed short int var_1_6 = 8;
signed short int var_1_7 = 5;
signed short int var_1_8 = 0;
signed char var_1_9 = 5;
signed char var_1_11 = 16;
signed short int var_1_12 = 25;
signed short int var_1_13 = 64;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 16;
float var_1_17 = 1.2;
float var_1_18 = 5.8;
float var_1_19 = 10.25;
float var_1_20 = 2.5;
signed short int var_1_21 = 200;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
signed char var_1_26 = -5;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
float var_1_34 = 0.375;
float var_1_35 = 8.25;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
float var_1_39 = 10.5;
float var_1_40 = 999999.5;
float var_1_41 = 1.377;
float var_1_42 = 99.75;
float var_1_43 = 256.6;
unsigned long int var_1_44 = 2184447762;
unsigned long int var_1_45 = 64;
unsigned long int var_1_46 = 256;
float var_1_47 = 4.4;
float var_1_48 = 64.25;
float var_1_49 = 64.4;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 128;
signed short int var_1_52 = 16;
signed char var_1_53 = 8;
signed short int var_1_54 = 50;
unsigned short int var_1_55 = 64;
double var_1_56 = 10.4;
unsigned char var_1_57 = 0;
signed long int var_1_58 = 10;
unsigned char var_1_59 = 1;
signed long int var_1_60 = 200;
double var_1_61 = 3.8;
double var_1_62 = 10.6;
signed char var_1_63 = 5;
signed char var_1_64 = -64;
unsigned char var_1_65 = 16;
unsigned char var_1_66 = 2;
unsigned long int var_1_67 = 100;
unsigned long int var_1_68 = 1548033514;
unsigned long int var_1_69 = 1676820465;
double var_1_70 = 64.2;
double var_1_71 = 3.625;
double var_1_72 = 127.25;
double var_1_73 = 499.9;
double var_1_74 = 31.5;
signed char var_1_75 = 0;
signed char var_1_76 = 0;
signed char var_1_77 = 4;
signed char var_1_78 = 16;
double var_1_79 = 16.75;
unsigned char var_1_80 = 16;
signed long int var_1_81 = 64;
unsigned char var_1_82 = 128;
signed long int var_1_83 = -16;
unsigned long int var_1_84 = 4;
float var_1_85 = 100.75;
unsigned long int var_1_86 = 128;
unsigned long int var_1_87 = 2479536071;
signed short int var_1_88 = 0;
double var_1_89 = 3.4;
unsigned char var_1_90 = 100;
signed long int var_1_91 = 100;
signed char var_1_92 = 32;
double var_1_93 = 10.2;
double var_1_94 = 31.3;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -64;
signed short int last_1_var_1_13 = 64;
unsigned char last_1_var_1_15 = 1;
signed char last_1_var_1_26 = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((! (var_1_29 || var_1_30)) && var_1_28) {
		var_1_27 = (var_1_31 && ((var_1_29 || var_1_32) && (var_1_30 || var_1_33)));
	} else {
		if ((abs (var_1_34)) < var_1_35) {
			var_1_27 = (var_1_36 || (var_1_37 || var_1_38));
		} else {
			var_1_27 = var_1_31;
		}
	}


	// From: CodeObject2
	var_1_39 = (abs (min (var_1_40 , var_1_41)));


	// From: CodeObject3
	if ((var_1_41 >= (abs (var_1_39))) || (var_1_35 <= var_1_40)) {
		var_1_42 = ((8.3877239533613629E18f - 10000.75f) - (6.5819518152542228E18f - var_1_43));
	} else {
		if ((var_1_44 - var_1_45) <= var_1_46) {
			var_1_42 = var_1_43;
		} else {
			if (var_1_40 <= ((min (var_1_43 , var_1_47)) - var_1_48)) {
				var_1_42 = (max (9.5f , (min (var_1_49 , var_1_40))));
			}
		}
	}


	// From: CodeObject4
	if (var_1_46 > var_1_45) {
		if (var_1_38) {
			var_1_50 = (abs (abs (2)));
		} else {
			var_1_50 = (abs (abs (var_1_51)));
		}
	}


	// From: CodeObject5
	if ((abs (var_1_53 - 10)) < var_1_46) {
		var_1_52 = (min (var_1_50 , var_1_53));
	} else {
		var_1_52 = var_1_51;
	}


	// From: CodeObject6
	if (var_1_30 || (var_1_41 >= (abs (var_1_42)))) {
		if (var_1_45 >= ((- var_1_46) >> var_1_52)) {
			var_1_54 = var_1_50;
		}
	}


	// From: CodeObject7
	if (var_1_27) {
		var_1_55 = var_1_53;
	}


	// From: CodeObject8
	if (var_1_30) {
		var_1_56 = var_1_43;
	}


	// From: CodeObject9
	if ((abs (max (var_1_51 , var_1_50))) != (max ((var_1_45 / var_1_58) , var_1_53))) {
		if ((! var_1_37) && var_1_59) {
			var_1_57 = ((var_1_48 < (abs (var_1_40))) || (! var_1_37));
		}
	} else {
		var_1_57 = var_1_33;
	}


	// From: CodeObject10
	if (var_1_43 == var_1_48) {
		if (var_1_33) {
			var_1_60 = (max ((max ((abs (var_1_52)) , (abs (var_1_53)))) , (abs (var_1_55))));
		}
	} else {
		var_1_60 = (abs (32));
	}


	// From: CodeObject11
	if (var_1_57) {
		var_1_61 = (var_1_43 + (max (7.75 , (abs (var_1_62)))));
	} else {
		var_1_61 = ((abs (var_1_43)) + var_1_62);
	}


	// From: CodeObject12
	if (var_1_27) {
		var_1_63 = (abs (var_1_64));
	}


	// From: CodeObject13
	if (var_1_51 < (max (var_1_44 , var_1_55))) {
		var_1_65 = (min ((var_1_53 + var_1_66) , var_1_51));
	} else {
		var_1_65 = (abs (var_1_51));
	}


	// From: CodeObject14
	if (var_1_28) {
		var_1_67 = (abs (4u));
	} else {
		if (1000 <= var_1_60) {
			var_1_67 = ((var_1_68 + var_1_69) - var_1_66);
		}
	}


	// From: CodeObject15
	if (var_1_27) {
		if (var_1_32 || ((- var_1_66) < var_1_50)) {
			var_1_70 = (abs (var_1_62));
		} else {
			var_1_70 = var_1_40;
		}
	} else {
		if (var_1_35 <= (var_1_43 * var_1_42)) {
			var_1_70 = (abs (var_1_43 - var_1_71));
		} else {
			var_1_70 = var_1_43;
		}
	}


	// From: CodeObject16
	if ((max (var_1_51 , var_1_67)) < 8u) {
		if (2 < var_1_52) {
			var_1_72 = (var_1_43 - ((min (var_1_73 , var_1_74)) + (abs (var_1_62))));
		}
	}


	// From: CodeObject17
	if (var_1_42 <= var_1_49) {
		var_1_75 = (abs ((max (var_1_76 , var_1_77)) - var_1_78));
	}


	// From: CodeObject18
	var_1_79 = (abs (min (var_1_40 , var_1_43)));


	// From: CodeObject19
	if ((var_1_81 & (~ var_1_64)) < var_1_63) {
		if (var_1_27 || (var_1_42 >= var_1_40)) {
			var_1_80 = (min (var_1_51 , ((min (128 , var_1_82)) - var_1_76)));
		}
	}


	// From: CodeObject20
	if (((abs (var_1_50)) ^ (var_1_65 & var_1_53)) < (~ (min (var_1_55 , var_1_63)))) {
		var_1_83 = var_1_65;
	}


	// From: CodeObject21
	if (var_1_35 >= (- var_1_47)) {
		var_1_84 = (abs (var_1_66));
	} else {
		if (var_1_45 > (min ((abs (var_1_65)) , (max (var_1_69 , 256u))))) {
			var_1_84 = (min (var_1_80 , var_1_82));
		} else {
			var_1_84 = (max ((max (var_1_51 , var_1_53)) , var_1_65));
		}
	}


	// From: CodeObject22
	if (var_1_28) {
		if (var_1_54 == var_1_55) {
			var_1_85 = (var_1_62 + var_1_73);
		}
	}


	// From: CodeObject23
	if (var_1_65 >= (var_1_78 / var_1_82)) {
		if (var_1_49 >= (- var_1_40)) {
			if (var_1_71 > var_1_34) {
				var_1_86 = (var_1_87 - var_1_65);
			} else {
				var_1_86 = (min (var_1_66 , 256u));
			}
		}
	} else {
		if (var_1_80 == (var_1_66 << (abs (var_1_88)))) {
			var_1_86 = (3615596346u - 100u);
		}
	}


	// From: CodeObject24
	if ((abs (max (var_1_50 , var_1_69))) <= (abs (var_1_86))) {
		if (var_1_41 <= var_1_72) {
			var_1_89 = ((abs (abs (var_1_43))) - (abs (var_1_40)));
		} else {
			var_1_89 = (var_1_74 + var_1_73);
		}
	}


	// From: CodeObject25
	if (var_1_57 && var_1_30) {
		var_1_90 = (var_1_66 + var_1_77);
	} else {
		if (var_1_87 > var_1_68) {
			var_1_90 = var_1_53;
		} else {
			var_1_90 = var_1_77;
		}
	}


	// From: CodeObject26
	if (var_1_32) {
		var_1_91 = var_1_51;
	} else {
		var_1_91 = 32;
	}


	// From: CodeObject27
	var_1_92 = var_1_77;


	// From: CodeObject28
	if (var_1_36) {
		var_1_93 = 128.25;
	}


	// From: CodeObject29
	if (var_1_72 != 50.45) {
		if (var_1_63 > ((var_1_55 + var_1_53) ^ var_1_80)) {
			var_1_94 = (abs (var_1_74));
		} else {
			var_1_94 = var_1_41;
		}
	} else {
		var_1_94 = var_1_74;
	}


	// From: Req1Batch91PS_CN_250
	if (last_1_var_1_13 == last_1_var_1_1) {
		if (last_1_var_1_1 <= (max (last_1_var_1_13 , last_1_var_1_26))) {
			var_1_1 = (last_1_var_1_1 + (min ((last_1_var_1_15 - last_1_var_1_15) , (last_1_var_1_15 - last_1_var_1_15))));
		} else {
			var_1_1 = (min ((last_1_var_1_15 - last_1_var_1_15) , ((last_1_var_1_15 - last_1_var_1_15) + -256)));
		}
	}


	// From: Req4Batch91PS_CN_250
	signed long int stepLocal_3 = (var_1_6 + var_1_8) - var_1_5;
	signed short int stepLocal_2 = var_1_1;
	if (var_1_11 < stepLocal_2) {
		if (var_1_7 == stepLocal_3) {
			var_1_15 = var_1_16;
		} else {
			var_1_15 = var_1_16;
		}
	} else {
		var_1_15 = var_1_16;
	}


	// From: Req5Batch91PS_CN_250
	if (var_1_11 < 5) {
		var_1_17 = (max (var_1_18 , (var_1_19 - var_1_20)));
	}


	// From: Req7Batch91PS_CN_250
	var_1_24 = var_1_25;


	// From: Req8Batch91PS_CN_250
	var_1_26 = var_1_11;


	// From: Req6Batch91PS_CN_250
	if (var_1_24) {
		if (var_1_24 && var_1_24) {
			var_1_21 = var_1_15;
		}
	} else {
		var_1_21 = (var_1_15 - 2);
	}


	// From: Req2Batch91PS_CN_250
	unsigned char stepLocal_0 = var_1_15;
	if (var_1_24) {
		var_1_9 = var_1_11;
	} else {
		if (stepLocal_0 <= (var_1_21 / var_1_12)) {
			var_1_9 = var_1_11;
		} else {
			var_1_9 = var_1_11;
		}
	}


	// From: Req3Batch91PS_CN_250
	signed long int stepLocal_1 = var_1_1 * (var_1_15 % var_1_12);
	if ((- var_1_15) >= stepLocal_1) {
		var_1_13 = var_1_26;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32768);
	assume_abort_if_not(var_1_12 <= 32767);
	assume_abort_if_not(var_1_12 != 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -922337.2036854765600e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 2147483647);
	assume_abort_if_not(var_1_44 <= 4294967295);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 4294967295);
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -922337.2036854765600e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854765600e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 127);
	var_1_58 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_58 >= -2147483648);
	assume_abort_if_not(var_1_58 <= 2147483647);
	assume_abort_if_not(var_1_58 != 0);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 1);
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= -461168.6018427382800e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427382800e+12F && var_1_62 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= -126);
	assume_abort_if_not(var_1_64 <= 126);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 127);
	var_1_68 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_68 >= 1073741823);
	assume_abort_if_not(var_1_68 <= 2147483647);
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 1073741824);
	assume_abort_if_not(var_1_69 <= 2147483647);
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854765600e+12F && var_1_71 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427382800e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427382800e+12F && var_1_74 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 126);
	var_1_77 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 126);
	var_1_78 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 126);
	var_1_81 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_81 >= -2147483648);
	assume_abort_if_not(var_1_81 <= 2147483647);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 127);
	assume_abort_if_not(var_1_82 <= 254);
	var_1_87 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_87 >= 2147483647);
	assume_abort_if_not(var_1_87 <= 4294967294);
	var_1_88 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_88 >= -1);
	assume_abort_if_not(var_1_88 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_26 = var_1_26;
}

int property() {
	return ((((((((last_1_var_1_13 == last_1_var_1_1) ? ((last_1_var_1_1 <= (max (last_1_var_1_13 , last_1_var_1_26))) ? (var_1_1 == ((signed short int) (last_1_var_1_1 + (min ((last_1_var_1_15 - last_1_var_1_15) , (last_1_var_1_15 - last_1_var_1_15)))))) : (var_1_1 == ((signed short int) (min ((last_1_var_1_15 - last_1_var_1_15) , ((last_1_var_1_15 - last_1_var_1_15) + -256)))))) : 1) && (var_1_24 ? (var_1_9 == ((signed char) var_1_11)) : ((var_1_15 <= (var_1_21 / var_1_12)) ? (var_1_9 == ((signed char) var_1_11)) : (var_1_9 == ((signed char) var_1_11))))) && (((- var_1_15) >= (var_1_1 * (var_1_15 % var_1_12))) ? (var_1_13 == ((signed short int) var_1_26)) : 1)) && ((var_1_11 < var_1_1) ? ((var_1_7 == ((var_1_6 + var_1_8) - var_1_5)) ? (var_1_15 == ((unsigned char) var_1_16)) : (var_1_15 == ((unsigned char) var_1_16))) : (var_1_15 == ((unsigned char) var_1_16)))) && ((var_1_11 < 5) ? (var_1_17 == ((float) (max (var_1_18 , (var_1_19 - var_1_20))))) : 1)) && (var_1_24 ? ((var_1_24 && var_1_24) ? (var_1_21 == ((signed short int) var_1_15)) : 1) : (var_1_21 == ((signed short int) (var_1_15 - 2))))) && (var_1_24 == ((unsigned char) var_1_25))) && (var_1_26 == ((signed char) var_1_11))
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
