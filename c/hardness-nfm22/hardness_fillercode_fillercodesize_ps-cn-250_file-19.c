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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch19PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -64;
unsigned char var_1_2 = 128;
unsigned char var_1_3 = 64;
signed short int var_1_6 = -16;
unsigned short int var_1_7 = 56838;
unsigned short int var_1_8 = 24612;
signed short int var_1_9 = 20013;
unsigned char var_1_10 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed short int var_1_14 = 50;
unsigned char var_1_15 = 0;
signed short int var_1_19 = 100;
double var_1_21 = 3.5;
signed short int var_1_23 = -128;
float var_1_24 = 10.2;
float var_1_25 = 8.6;
float var_1_26 = 32.7;
float var_1_27 = 16.25;
float var_1_28 = 8.875;
unsigned short int var_1_29 = 256;
double var_1_30 = 2.75;
double var_1_31 = 0.0;
unsigned char var_1_32 = 8;
unsigned char var_1_33 = 32;
unsigned char var_1_34 = 64;
float var_1_35 = 1.15;
float var_1_36 = 63.76;
float var_1_37 = 5.375;
float var_1_38 = 1000000.4;
float var_1_39 = 32.25;
unsigned char var_1_40 = 0;
float var_1_41 = 1.5;
float var_1_42 = 9.2;
signed short int var_1_43 = 128;
signed char var_1_44 = 5;
unsigned char var_1_45 = 25;
signed char var_1_46 = 16;
signed char var_1_47 = 4;
signed char var_1_48 = 1;
float var_1_49 = 3.6;
float var_1_50 = 4.7;
unsigned long int var_1_51 = 4;
unsigned long int var_1_52 = 10;
signed char var_1_53 = 100;
signed char var_1_54 = 8;
signed char var_1_55 = -1;
signed char var_1_56 = -8;
signed char var_1_57 = 0;
signed char var_1_58 = 1;
signed char var_1_59 = 4;
unsigned char var_1_60 = 100;
unsigned char var_1_61 = 100;
unsigned char var_1_62 = 0;
unsigned short int var_1_63 = 256;
unsigned char var_1_64 = 5;
unsigned char var_1_65 = 200;
unsigned char var_1_66 = 50;
unsigned char var_1_67 = 25;
float var_1_68 = 0.5;
float var_1_69 = 127.8;
unsigned long int var_1_70 = 10;
signed short int var_1_71 = 100;
unsigned short int var_1_72 = 8;
unsigned short int var_1_73 = 50;
unsigned short int var_1_74 = 10;
unsigned short int var_1_75 = 51246;
signed char var_1_76 = 10;
signed char var_1_77 = 32;
signed char var_1_78 = 16;
unsigned char var_1_79 = 1;
signed char var_1_80 = 2;
signed long int var_1_81 = -2;
signed long int var_1_82 = 256;
signed short int var_1_83 = -2;
unsigned char var_1_84 = 0;
unsigned char var_1_85 = 0;
unsigned char var_1_86 = 0;
signed long int var_1_87 = -10;
double var_1_88 = 255.4;
double var_1_89 = 255.75;
unsigned short int var_1_90 = 8;
signed long int var_1_91 = 1820642764;
unsigned short int var_1_92 = 128;
float var_1_93 = 10.4;
unsigned char var_1_94 = 1;
unsigned short int var_1_95 = 10;
float var_1_96 = 31.4;
unsigned char var_1_97 = 8;
signed char var_1_98 = -2;
double var_1_99 = 2.5;
signed long int var_1_100 = -4;
signed long int var_1_101 = -8;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_15 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_30 = (abs (var_1_31));


	// From: CodeObject2
	var_1_32 = ((abs (var_1_33)) + var_1_34);


	// From: CodeObject3
	var_1_35 = (max (var_1_31 , (max (8.9f , (var_1_36 - var_1_37)))));


	// From: CodeObject4
	var_1_38 = (abs (50.8f));


	// From: CodeObject5
	if ((~ var_1_33) < (var_1_34 * var_1_32)) {
		if (var_1_40) {
			var_1_39 = (min ((var_1_37 - (abs (var_1_36))) , (min (var_1_31 , var_1_41))));
		} else {
			if ((var_1_33 | var_1_32) >= var_1_34) {
				var_1_39 = ((abs (1.000000000625E9f)) + (abs (abs (var_1_42))));
			}
		}
	} else {
		if (var_1_36 != (abs (var_1_38))) {
			var_1_39 = var_1_36;
		} else {
			var_1_39 = var_1_31;
		}
	}


	// From: CodeObject6
	if (var_1_39 > var_1_30) {
		var_1_43 = (abs (-10));
	} else {
		var_1_43 = (min ((min (var_1_34 , (abs (var_1_32)))) , var_1_33));
	}


	// From: CodeObject7
	if (! var_1_40) {
		if (var_1_40 || (var_1_34 > var_1_45)) {
			var_1_44 = (64 - 32);
		}
	}


	// From: CodeObject8
	if (var_1_44 >= ((var_1_33 - var_1_34) >> var_1_43)) {
		var_1_46 = var_1_47;
	} else {
		var_1_46 = (abs (var_1_48));
	}


	// From: CodeObject9
	if (var_1_45 < (abs (var_1_32))) {
		var_1_49 = var_1_50;
	}


	// From: CodeObject10
	if ((~ (var_1_44 & var_1_43)) >= var_1_33) {
		if (! (var_1_42 <= var_1_31)) {
			var_1_51 = (var_1_52 + var_1_45);
		}
	}


	// From: CodeObject11
	if (var_1_37 <= (max (var_1_41 , var_1_30))) {
		var_1_53 = (max (var_1_47 , (abs (var_1_48))));
	} else {
		if (var_1_52 != var_1_45) {
			var_1_53 = ((var_1_54 + (var_1_55 + var_1_56)) + 8);
		}
	}


	// From: CodeObject12
	if (var_1_40) {
		var_1_57 = (min (5 , (10 - (min (var_1_58 , var_1_59)))));
	}


	// From: CodeObject13
	if (var_1_40) {
		var_1_60 = ((var_1_61 + 64) - var_1_58);
	} else {
		if (var_1_62) {
			var_1_60 = var_1_58;
		}
	}


	// From: CodeObject14
	if (var_1_62) {
		var_1_63 = ((min (var_1_34 , var_1_59)) + var_1_58);
	} else {
		var_1_63 = (abs (var_1_58));
	}


	// From: CodeObject15
	if (var_1_35 < var_1_39) {
		var_1_64 = (min (var_1_58 , ((var_1_65 - var_1_66) - (var_1_61 - var_1_67))));
	}


	// From: CodeObject16
	if ((var_1_59 / var_1_65) < var_1_52) {
		var_1_68 = (var_1_42 + var_1_69);
	} else {
		var_1_68 = (abs (abs (var_1_37)));
	}


	// From: CodeObject17
	if (var_1_50 <= var_1_41) {
		var_1_70 = var_1_67;
	} else {
		var_1_70 = (var_1_33 + (min (var_1_58 , var_1_52)));
	}


	// From: CodeObject18
	var_1_71 = (abs (var_1_57));


	// From: CodeObject19
	if (var_1_42 != var_1_31) {
		var_1_72 = (max ((abs (32)) , (max (var_1_73 , var_1_45))));
	} else {
		var_1_72 = (abs (abs (abs (var_1_67))));
	}


	// From: CodeObject20
	if (var_1_62 && var_1_40) {
		var_1_74 = (abs (abs (var_1_75 - var_1_60)));
	}


	// From: CodeObject21
	var_1_76 = (var_1_55 + var_1_54);


	// From: CodeObject22
	if (var_1_34 >= var_1_63) {
		var_1_77 = (min (var_1_54 , (abs (var_1_59 - 4))));
	}


	// From: CodeObject23
	if ((var_1_62 || var_1_40) && var_1_79) {
		if (var_1_79) {
			var_1_78 = (((min (var_1_66 , var_1_67)) + var_1_80) - var_1_58);
		}
	} else {
		if (var_1_30 < (- (abs (var_1_36)))) {
			var_1_78 = var_1_80;
		}
	}


	// From: CodeObject24
	if ((var_1_56 & (var_1_66 * var_1_78)) > ((var_1_70 + -2) & (var_1_67 | var_1_82))) {
		if (! ((var_1_36 + var_1_38) >= 16.125f)) {
			var_1_81 = (abs (abs (var_1_61)));
		} else {
			if (var_1_62) {
				var_1_81 = var_1_72;
			}
		}
	}


	// From: CodeObject25
	if ((256 * var_1_61) <= var_1_63) {
		var_1_83 = (max (var_1_57 , var_1_78));
	} else {
		if (var_1_39 < var_1_30) {
			var_1_83 = ((max (var_1_56 , (min (var_1_65 , var_1_33)))) + var_1_44);
		}
	}


	// From: CodeObject26
	var_1_84 = ((! var_1_85) && var_1_86);


	// From: CodeObject27
	if (var_1_40) {
		var_1_87 = (var_1_32 - var_1_65);
	} else {
		var_1_87 = (abs (max (var_1_56 , (abs (var_1_67)))));
	}


	// From: CodeObject28
	if ((var_1_32 ^ (var_1_75 - var_1_60)) >= var_1_54) {
		if ((0.25f + var_1_35) > var_1_30) {
			if (var_1_74 > var_1_71) {
				if ((- var_1_31) <= (min (var_1_38 , (abs (var_1_68))))) {
					var_1_88 = (max (var_1_41 , var_1_42));
				}
			}
		} else {
			if (var_1_40) {
				var_1_88 = (var_1_69 + (min (var_1_42 , var_1_89)));
			}
		}
	} else {
		var_1_88 = var_1_31;
	}


	// From: CodeObject29
	if (((var_1_91 - var_1_75) - var_1_74) == (var_1_52 - 2)) {
		if (-5 > var_1_33) {
			var_1_90 = (abs (var_1_92));
		}
	}


	// From: CodeObject30
	if (var_1_61 >= ((max (var_1_43 , 64)) | var_1_53)) {
		var_1_93 = var_1_42;
	}


	// From: CodeObject31
	if (var_1_79) {
		var_1_94 = var_1_86;
	} else {
		var_1_94 = var_1_85;
	}


	// From: CodeObject32
	var_1_95 = var_1_65;


	// From: CodeObject33
	if (var_1_40) {
		var_1_96 = 127.2f;
	} else {
		var_1_96 = var_1_89;
	}


	// From: CodeObject34
	var_1_97 = var_1_66;


	// From: CodeObject35
	var_1_98 = var_1_58;


	// From: CodeObject36
	if (var_1_79) {
		var_1_99 = var_1_89;
	} else {
		var_1_99 = var_1_36;
	}


	// From: CodeObject37
	if (! var_1_86) {
		var_1_100 = var_1_34;
	}


	// From: CodeObject38
	if (((var_1_55 >> var_1_67) | var_1_59) > var_1_53) {
		if (var_1_62) {
			var_1_101 = var_1_78;
		}
	}


	// From: Req3Batch19PS_CN_250
	if (last_1_var_1_15) {
		var_1_10 = (var_1_12 || var_1_13);
	}


	// From: Req7Batch19PS_CN_250
	if (var_1_10) {
		var_1_24 = (max (var_1_25 , (abs (var_1_26))));
	} else {
		var_1_24 = (abs (var_1_27 - var_1_28));
	}


	// From: Req5Batch19PS_CN_250
	if ((- var_1_24) == (var_1_24 + var_1_24)) {
		var_1_15 = var_1_12;
	}


	// From: Req6Batch19PS_CN_250
	if (var_1_24 == (max ((max (3.3 , var_1_24)) , (var_1_24 / var_1_21)))) {
		if (var_1_10) {
			var_1_19 = (var_1_3 + (min (var_1_2 , var_1_23)));
		} else {
			var_1_19 = (var_1_3 - 8);
		}
	} else {
		var_1_19 = var_1_2;
	}


	// From: Req8Batch19PS_CN_250
	if (var_1_24 != var_1_24) {
		var_1_29 = (max (var_1_2 , var_1_3));
	}


	// From: Req2Batch19PS_CN_250
	signed long int stepLocal_1 = var_1_7 - (var_1_8 - var_1_2);
	if (stepLocal_1 >= var_1_29) {
		var_1_6 = (var_1_3 - (var_1_9 - var_1_2));
	}


	// From: Req4Batch19PS_CN_250
	if (var_1_15) {
		var_1_14 = (min ((abs (max (var_1_3 , var_1_2))) , var_1_9));
	}


	// From: Req1Batch19PS_CN_250
	signed long int stepLocal_0 = var_1_2 - var_1_3;
	if (stepLocal_0 <= (max (var_1_29 , var_1_6))) {
		var_1_1 = (max (var_1_2 , var_1_3));
	} else {
		var_1_1 = var_1_2;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 127);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65535);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 16383);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 16383);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	assume_abort_if_not(var_1_21 != 0.0F);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -16383);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854765600e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854765600e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854765600e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -461168.6018427382800e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 255);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -127);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -126);
	assume_abort_if_not(var_1_48 <= 126);
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -922337.2036854765600e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 2147483647);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= -31);
	assume_abort_if_not(var_1_54 <= 32);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -15);
	assume_abort_if_not(var_1_55 <= 16);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= -15);
	assume_abort_if_not(var_1_56 <= 15);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 126);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 63);
	assume_abort_if_not(var_1_61 <= 127);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 1);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 190);
	assume_abort_if_not(var_1_65 <= 254);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 63);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 63);
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= -461168.6018427382800e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 4611686.018427382800e+12F && var_1_69 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 65534);
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 32767);
	assume_abort_if_not(var_1_75 <= 65534);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 1);
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 63);
	var_1_82 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_82 >= -2147483648);
	assume_abort_if_not(var_1_82 <= 2147483647);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 0);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 1);
	assume_abort_if_not(var_1_86 <= 1);
	var_1_89 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_89 >= -461168.6018427382800e+13F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 4611686.018427382800e+12F && var_1_89 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_91 >= 1073741823);
	assume_abort_if_not(var_1_91 <= 2147483647);
	var_1_92 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_15 = var_1_15;
}

int property() {
	return (((((((((var_1_2 - var_1_3) <= (max (var_1_29 , var_1_6))) ? (var_1_1 == ((signed long int) (max (var_1_2 , var_1_3)))) : (var_1_1 == ((signed long int) var_1_2))) && (((var_1_7 - (var_1_8 - var_1_2)) >= var_1_29) ? (var_1_6 == ((signed short int) (var_1_3 - (var_1_9 - var_1_2)))) : 1)) && (last_1_var_1_15 ? (var_1_10 == ((unsigned char) (var_1_12 || var_1_13))) : 1)) && (var_1_15 ? (var_1_14 == ((signed short int) (min ((abs (max (var_1_3 , var_1_2))) , var_1_9)))) : 1)) && (((- var_1_24) == (var_1_24 + var_1_24)) ? (var_1_15 == ((unsigned char) var_1_12)) : 1)) && ((var_1_24 == (max ((max (3.3 , var_1_24)) , (var_1_24 / var_1_21)))) ? (var_1_10 ? (var_1_19 == ((signed short int) (var_1_3 + (min (var_1_2 , var_1_23))))) : (var_1_19 == ((signed short int) (var_1_3 - 8)))) : (var_1_19 == ((signed short int) var_1_2)))) && (var_1_10 ? (var_1_24 == ((float) (max (var_1_25 , (abs (var_1_26)))))) : (var_1_24 == ((float) (abs (var_1_27 - var_1_28)))))) && ((var_1_24 != var_1_24) ? (var_1_29 == ((unsigned short int) (max (var_1_2 , var_1_3)))) : 1)
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
