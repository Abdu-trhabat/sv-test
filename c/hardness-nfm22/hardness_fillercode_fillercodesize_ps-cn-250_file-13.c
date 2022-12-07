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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch13PS_CN_250.c", 13, "reach_error"); }
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
double var_1_26 = 2.125;
double var_1_27 = 2.2;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
signed short int var_1_30 = 16;
signed char var_1_31 = -32;
signed char var_1_32 = -10;
signed long int var_1_33 = 4;
signed long int var_1_34 = 10000000;
signed long int var_1_35 = 2;
signed long int var_1_36 = -100000000;
signed short int var_1_37 = 500;
signed short int var_1_38 = 256;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 5;
unsigned char var_1_41 = 4;
unsigned char var_1_42 = 128;
unsigned char var_1_43 = 128;
unsigned char var_1_44 = 128;
unsigned char var_1_45 = 64;
unsigned short int var_1_46 = 64;
signed short int var_1_47 = -2;
unsigned short int var_1_48 = 64;
unsigned short int var_1_49 = 4;
unsigned short int var_1_50 = 0;
unsigned short int var_1_51 = 5;
unsigned short int var_1_52 = 48868;
unsigned short int var_1_53 = 16;
float var_1_54 = 99999999999999.4;
float var_1_55 = 31.125;
signed short int var_1_56 = 32;
float var_1_57 = 1.2;
float var_1_58 = 31.5;
float var_1_59 = 0.6;
signed short int var_1_60 = 64;
double var_1_61 = 63.2;
signed char var_1_62 = -50;
unsigned long int var_1_63 = 500;
unsigned short int var_1_64 = 128;
double var_1_65 = 16.125;
signed long int var_1_66 = -2;
unsigned char var_1_67 = 10;
double var_1_68 = 499.5;
double var_1_69 = 32.4;
double var_1_70 = 255.9;
double var_1_71 = 63.975;
signed long int var_1_72 = 10;
signed char var_1_73 = -10;
unsigned char var_1_74 = 10;
signed char var_1_75 = -4;
signed char var_1_76 = 25;
signed long int var_1_77 = 10;
double var_1_78 = 0.4;
double var_1_79 = 200.8;
double var_1_80 = 8.125;
signed char var_1_81 = 16;
signed char var_1_82 = -2;
signed char var_1_83 = -25;
unsigned char var_1_84 = 1;
double var_1_85 = 15.4;
double var_1_86 = 1.625;
signed char var_1_87 = -16;
signed char var_1_88 = 10;
unsigned char var_1_89 = 25;
unsigned char var_1_90 = 50;
unsigned char var_1_91 = 5;
float var_1_92 = 7.375;
unsigned short int var_1_93 = 64;
unsigned char var_1_94 = 100;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_21 = -64;
unsigned char last_1_var_1_22 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_26 < 100.5) {
		var_1_25 = var_1_27;
	} else {
		var_1_25 = var_1_27;
	}


	// From: CodeObject2
	if (var_1_25 > var_1_26) {
		var_1_28 = (! var_1_29);
	}


	// From: CodeObject3
	if ((var_1_31 ^ var_1_32) > ((var_1_33 * var_1_34) + (var_1_35 ^ var_1_36))) {
		var_1_30 = ((var_1_37 - var_1_38) + (min (var_1_32 , var_1_31)));
	}


	// From: CodeObject4
	if (var_1_28) {
		var_1_39 = (var_1_40 + var_1_41);
	} else {
		if (var_1_29) {
			var_1_39 = ((max ((min (var_1_42 , var_1_43)) , var_1_44)) - (var_1_45 - 5));
		}
	}


	// From: CodeObject5
	if (var_1_43 > 1) {
		var_1_46 = var_1_45;
	} else {
		var_1_46 = (abs (var_1_44));
	}


	// From: CodeObject6
	if (var_1_28) {
		var_1_47 = (abs (var_1_45));
	}


	// From: CodeObject7
	if (var_1_28) {
		var_1_48 = (abs (var_1_43 + (abs (var_1_49))));
	}


	// From: CodeObject8
	if (var_1_43 >= (var_1_31 + var_1_46)) {
		var_1_50 = (min (var_1_39 , (max (var_1_37 , var_1_45))));
	}


	// From: CodeObject9
	if (var_1_28) {
		var_1_51 = (min (var_1_39 , (var_1_52 - var_1_40)));
	} else {
		if (var_1_32 >= (max (var_1_50 , -8))) {
			var_1_51 = var_1_44;
		} else {
			if (var_1_46 == ((var_1_38 << var_1_48) & var_1_35)) {
				var_1_51 = (min (var_1_53 , (abs (min (var_1_41 , var_1_38)))));
			}
		}
	}


	// From: CodeObject10
	if ((var_1_41 * 1) >= var_1_51) {
		var_1_54 = (abs (max (var_1_27 , var_1_55)));
	}


	// From: CodeObject11
	if (var_1_29) {
		var_1_56 = (abs (var_1_44));
	}


	// From: CodeObject12
	if (! (var_1_25 >= (abs (var_1_55)))) {
		if (var_1_35 != var_1_51) {
			var_1_57 = (9.99999999999175E11f + (max (var_1_58 , var_1_59)));
		} else {
			var_1_57 = (abs (var_1_27));
		}
	}


	// From: CodeObject13
	if (-10 >= var_1_49) {
		if (var_1_25 == var_1_61) {
			var_1_60 = (abs (256));
		}
	}


	// From: CodeObject14
	if (var_1_33 < var_1_46) {
		if (var_1_29) {
			var_1_62 = 1;
		}
	}


	// From: CodeObject15
	if (var_1_52 > var_1_64) {
		var_1_63 = ((var_1_42 + (min (var_1_46 , var_1_52))) + (max ((var_1_40 + var_1_51) , var_1_50)));
	}


	// From: CodeObject16
	if (var_1_55 <= (abs (abs (var_1_54)))) {
		if (var_1_56 >= var_1_36) {
			var_1_65 = (abs (var_1_27));
		}
	}


	// From: CodeObject17
	if (-8 >= var_1_47) {
		var_1_66 = (min ((max ((abs (var_1_38)) , (abs (var_1_62)))) , var_1_50));
	}


	// From: CodeObject18
	if ((var_1_25 * var_1_58) < (- (min (var_1_57 , var_1_55)))) {
		var_1_67 = (max (var_1_41 , (var_1_45 + var_1_40)));
	} else {
		var_1_67 = (max (var_1_44 , var_1_41));
	}


	// From: CodeObject19
	if (var_1_32 > ((var_1_63 ^ var_1_46) + var_1_53)) {
		if (var_1_31 < var_1_52) {
			var_1_68 = ((var_1_69 + var_1_70) - var_1_71);
		} else {
			if (var_1_52 >= var_1_63) {
				if ((abs (var_1_40)) < var_1_43) {
					var_1_68 = (abs (abs (abs (var_1_58))));
				} else {
					var_1_68 = var_1_71;
				}
			} else {
				if ((var_1_38 - var_1_53) != (max (var_1_44 , var_1_60))) {
					var_1_68 = (abs (var_1_58));
				} else {
					var_1_68 = 63.2;
				}
			}
		}
	} else {
		if ((min (var_1_70 , 0.8)) > var_1_25) {
			var_1_68 = (min ((abs (var_1_70)) , (max (var_1_59 , var_1_71))));
		}
	}


	// From: CodeObject20
	if ((max (var_1_43 , var_1_74)) >= (max (var_1_33 , var_1_72))) {
		var_1_73 = (var_1_75 + var_1_76);
	}


	// From: CodeObject21
	if (var_1_28) {
		if ((max (var_1_66 , (128 % var_1_45))) < var_1_37) {
			var_1_77 = (max ((abs (var_1_56)) , (abs (var_1_39))));
		}
	}


	// From: CodeObject22
	if (var_1_58 <= var_1_59) {
		if (var_1_40 != (min ((var_1_43 - var_1_45) , (min (var_1_35 , var_1_34))))) {
			var_1_78 = (min (var_1_58 , ((var_1_79 + 128.5) + var_1_59)));
		}
	} else {
		if ((~ var_1_46) >= var_1_32) {
			var_1_78 = ((max (var_1_79 , var_1_69)) + (8.625 + var_1_80));
		}
	}


	// From: CodeObject23
	if ((~ var_1_46) <= (var_1_45 - var_1_51)) {
		var_1_81 = (var_1_75 + (min (-10 , (var_1_82 + var_1_83))));
	}


	// From: CodeObject24
	if (! var_1_28) {
		var_1_84 = (abs (var_1_41));
	}


	// From: CodeObject25
	if ((abs (var_1_57)) > var_1_54) {
		var_1_85 = (5.25 - (abs (var_1_71)));
	}


	// From: CodeObject26
	if (var_1_38 <= (var_1_30 & var_1_50)) {
		if (var_1_80 <= (var_1_70 * var_1_61)) {
			var_1_86 = ((abs (var_1_71)) - (abs (min (63.2 , var_1_70))));
		} else {
			if (var_1_64 != var_1_40) {
				var_1_86 = var_1_58;
			}
		}
	}


	// From: CodeObject27
	if (var_1_62 > var_1_37) {
		var_1_87 = (var_1_88 - (abs (var_1_75)));
	} else {
		var_1_87 = (min (0 , var_1_88));
	}


	// From: CodeObject28
	if (var_1_29) {
		var_1_89 = (abs (max (var_1_44 , 0)));
	} else {
		var_1_89 = var_1_44;
	}


	// From: CodeObject29
	var_1_90 = var_1_43;


	// From: CodeObject30
	var_1_91 = var_1_41;


	// From: CodeObject31
	if (var_1_28) {
		var_1_92 = var_1_58;
	} else {
		var_1_92 = var_1_70;
	}


	// From: CodeObject32
	if ((var_1_77 | var_1_56) > var_1_75) {
		var_1_93 = (var_1_90 + var_1_91);
	} else {
		var_1_93 = (max (var_1_49 , (max ((max (var_1_45 , var_1_67)) , var_1_53))));
	}


	// From: CodeObject33
	var_1_94 = var_1_44;


	// From: Req1Batch13PS_CN_250
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


	// From: Req2Batch13PS_CN_250
	if (var_1_9) {
		var_1_8 = (var_1_10 - (var_1_11 - var_1_4));
	}


	// From: Req4Batch13PS_CN_250
	unsigned short int stepLocal_3 = var_1_1;
	if (var_1_4 > stepLocal_3) {
		var_1_15 = ((var_1_17 - var_1_18) + ((max (var_1_19 , 499.25)) + var_1_20));
	} else {
		var_1_15 = var_1_17;
	}


	// From: Req6Batch13PS_CN_250
	if (((- var_1_11) < 8) || var_1_9) {
		var_1_22 = (var_1_4 + (abs (var_1_11)));
	}


	// From: Req7Batch13PS_CN_250
	var_1_23 = (var_1_11 + var_1_4);


	// From: Req8Batch13PS_CN_250
	if (var_1_18 <= var_1_20) {
		var_1_24 = (min (var_1_8 , (var_1_8 + var_1_11)));
	} else {
		if (9.99999999999998E13 < var_1_20) {
			var_1_24 = var_1_1;
		}
	}


	// From: Req5Batch13PS_CN_250
	if (var_1_6 || var_1_9) {
		if ((var_1_24 % var_1_10) > var_1_22) {
			var_1_21 = ((abs (var_1_11)) + var_1_14);
		}
	}


	// From: Req3Batch13PS_CN_250
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
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854765600e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -128);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -128);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483648);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483648);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483648);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483648);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 16383);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 16383);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 127);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 127);
	assume_abort_if_not(var_1_43 <= 254);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 127);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 63);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 32767);
	var_1_52 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_52 >= 32767);
	assume_abort_if_not(var_1_52 <= 65534);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 65534);
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= -922337.2036854765600e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854765600e+12F && var_1_55 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= -461168.6018427382800e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427382800e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= -461168.6018427382800e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= -922337.2036854776000e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854776000e+12F && var_1_61 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 65535);
	var_1_69 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 4611686.018427382800e+12F && var_1_69 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427382800e+12F && var_1_70 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854765600e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_72 >= -2147483648);
	assume_abort_if_not(var_1_72 <= 2147483647);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 255);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= -63);
	assume_abort_if_not(var_1_75 <= 63);
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= -63);
	assume_abort_if_not(var_1_76 <= 63);
	var_1_79 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_79 >= -230584.3009213691390e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 2305843.009213691390e+12F && var_1_79 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= -230584.3009213691390e+13F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 2305843.009213691390e+12F && var_1_80 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_82 >= -31);
	assume_abort_if_not(var_1_82 <= 32);
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= -31);
	assume_abort_if_not(var_1_83 <= 31);
	var_1_88 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_88 >= -1);
	assume_abort_if_not(var_1_88 <= 126);
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
