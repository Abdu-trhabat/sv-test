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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch7PS_CN_500.c", 13, "reach_error"); }
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
float var_1_2 = 200.875;
float var_1_3 = 100.25;
float var_1_4 = 99999999.34;
unsigned short int var_1_5 = 10;
unsigned short int var_1_6 = 8;
unsigned long int var_1_7 = 25;
unsigned char var_1_8 = 0;
signed long int var_1_9 = -16;
unsigned short int var_1_10 = 25;
unsigned short int var_1_11 = 10000;
signed short int var_1_12 = -32;
signed char var_1_13 = 4;
signed char var_1_14 = 25;
signed short int var_1_15 = -16;
signed short int var_1_16 = 100;
signed short int var_1_17 = 8;
float var_1_18 = 5.8;
float var_1_19 = 0.19999999999999996;
float var_1_20 = 1.5;
float var_1_21 = 10000000.5;
float var_1_22 = 4.5;
float var_1_23 = 4.25;
signed short int var_1_24 = -16;
unsigned short int var_1_25 = 100;
unsigned short int var_1_26 = 2;
unsigned long int var_1_27 = 8;
signed long int var_1_28 = 500;
signed long int var_1_29 = 5;
signed long int var_1_30 = -10;
double var_1_31 = 499.1;
double var_1_32 = 1000000.625;
double var_1_33 = 63.5;
signed char var_1_34 = -64;
unsigned long int var_1_35 = 200;
float var_1_36 = 0.5;
float var_1_37 = 0.0;
float var_1_38 = 10000000000.2;
double var_1_39 = -0.75;
unsigned char var_1_40 = 1;
float var_1_41 = 64.25;
float var_1_42 = 0.0;
float var_1_43 = 16.25;
signed short int var_1_44 = -500;
signed char var_1_45 = 10;
signed char var_1_46 = 32;
signed char var_1_47 = 32;
unsigned char var_1_48 = 5;
float var_1_49 = 31.5;
float var_1_50 = 0.0;
unsigned char var_1_51 = 25;
unsigned char var_1_52 = 64;
float var_1_53 = 499.25;
unsigned char var_1_54 = 32;
unsigned char var_1_55 = 5;
unsigned long int var_1_56 = 10;
unsigned char var_1_57 = 128;
unsigned char var_1_58 = 128;
float var_1_59 = 256.5;
unsigned char var_1_60 = 1;
unsigned char var_1_61 = 1;
unsigned char var_1_62 = 32;
unsigned char var_1_63 = 0;
signed long int var_1_64 = 10000000;
unsigned long int var_1_65 = 128;
unsigned long int var_1_66 = 2182448190;
signed char var_1_67 = -10;
signed short int var_1_68 = 16;
unsigned char var_1_69 = 1;
unsigned char var_1_70 = 0;
signed short int var_1_71 = 2;
signed long int var_1_72 = 128;
signed long int var_1_73 = 2;
signed long int var_1_74 = 10;
unsigned long int var_1_75 = 10;
unsigned long int var_1_76 = 256;
signed char var_1_77 = -5;
signed char var_1_78 = -8;
signed char var_1_79 = 100;
signed char var_1_80 = 1;
unsigned char var_1_81 = 1;
unsigned char var_1_82 = 0;
signed long int var_1_83 = -1;
float var_1_84 = 10000.45;
float var_1_85 = 500.5;
signed char var_1_86 = 64;
signed long int var_1_87 = 32;
signed short int var_1_88 = -5;
float var_1_89 = 3.75;
signed char var_1_90 = -8;
signed short int var_1_91 = -25;
double var_1_92 = 0.0;
unsigned char var_1_93 = 1;
unsigned char var_1_94 = 0;
unsigned char var_1_95 = 0;
unsigned char var_1_96 = 0;
signed long int var_1_97 = -4;
unsigned long int var_1_98 = 256;
unsigned long int var_1_99 = 1591149469;
signed short int var_1_100 = -5;
signed short int var_1_101 = 64;
unsigned long int var_1_102 = 0;
float var_1_103 = 256.25;
float var_1_104 = 8.5;
unsigned short int var_1_105 = 32966;
unsigned short int var_1_106 = 22502;
float var_1_107 = 3.5;
unsigned char var_1_108 = 1;
float var_1_109 = 9.8;
double var_1_110 = 4.25;
double var_1_111 = 10.4;
signed short int var_1_112 = 4;
double var_1_113 = 0.25;
double var_1_114 = 4.375;
signed long int var_1_115 = 10;
signed char var_1_116 = 10;
signed char var_1_117 = 8;
double var_1_118 = 4.625;
unsigned char var_1_119 = 1;
float var_1_120 = 100000.1;
unsigned char var_1_121 = 1;
signed short int var_1_122 = -256;
unsigned long int var_1_123 = 200;
signed long int var_1_124 = -1;
signed char var_1_125 = 2;
float var_1_126 = 1.5;
unsigned char var_1_127 = 0;
double var_1_128 = 9.25;
unsigned short int var_1_129 = 5;
float var_1_130 = 256.6;
unsigned char var_1_131 = 64;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_26 >> var_1_27) > ((var_1_28 ^ var_1_29) + (abs (var_1_30)))) {
		var_1_25 = (max ((abs (var_1_27)) , 0));
	} else {
		if ((abs (var_1_31)) >= (var_1_32 - var_1_33)) {
			var_1_25 = (abs (var_1_27));
		}
	}


	// From: CodeObject2
	if (! ((max (var_1_28 , 5)) != var_1_26)) {
		var_1_34 = (abs (abs (var_1_27)));
	}


	// From: CodeObject3
	if (((abs (var_1_25)) - var_1_27) <= (var_1_29 * (var_1_28 >> var_1_30))) {
		var_1_35 = (max (var_1_25 , (abs (var_1_27))));
	}


	// From: CodeObject4
	if (var_1_27 <= (var_1_35 % 8u)) {
		var_1_36 = ((abs (-0.5f)) - (var_1_37 - var_1_38));
	} else {
		var_1_36 = (max (1.4f , var_1_37));
	}


	// From: CodeObject5
	if (var_1_40) {
		var_1_39 = (abs (var_1_37 - var_1_38));
	}


	// From: CodeObject6
	if ((var_1_38 + var_1_37) > var_1_36) {
		var_1_41 = (var_1_38 - ((max (var_1_37 , var_1_42)) - var_1_43));
	} else {
		var_1_41 = var_1_38;
	}


	// From: CodeObject7
	var_1_44 = (var_1_27 - (abs (var_1_34)));


	// From: CodeObject8
	if ((abs (min (var_1_26 , var_1_30))) <= var_1_35) {
		if (var_1_40) {
			var_1_45 = (abs (var_1_46));
		} else {
			var_1_45 = (var_1_27 + 1);
		}
	}


	// From: CodeObject9
	if (var_1_39 >= var_1_36) {
		if (((min (var_1_32 , var_1_49)) - (var_1_50 - var_1_38)) >= var_1_41) {
			if (var_1_35 <= (abs (var_1_27))) {
				var_1_48 = (abs (max (1 , (max (var_1_51 , var_1_27)))));
			}
		} else {
			var_1_48 = var_1_51;
		}
	} else {
		var_1_48 = ((64 - var_1_27) + var_1_52);
	}


	// From: CodeObject10
	if (var_1_40 && (var_1_27 < var_1_26)) {
		var_1_53 = (abs (var_1_43));
	} else {
		if ((max ((var_1_33 / var_1_42) , var_1_38)) >= (- var_1_41)) {
			if ((~ var_1_51) == ((min (-4 , var_1_47)) << var_1_48)) {
				var_1_53 = (min (255.5f , var_1_38));
			}
		} else {
			var_1_53 = (abs (var_1_43 + 200.4f));
		}
	}


	// From: CodeObject11
	if ((min ((~ var_1_29) , (var_1_27 & var_1_52))) > (var_1_48 & var_1_25)) {
		var_1_54 = 5;
	} else {
		var_1_54 = (max ((max (var_1_27 , var_1_51)) , ((abs (5)) + var_1_52)));
	}


	// From: CodeObject12
	if ((~ var_1_56) < var_1_51) {
		var_1_55 = var_1_51;
	} else {
		if (var_1_46 >= var_1_47) {
			if (var_1_25 >= var_1_44) {
				var_1_55 = ((min (var_1_57 , var_1_58)) - (abs (var_1_27)));
			} else {
				if (((var_1_52 | var_1_45) * var_1_57) <= (16 - var_1_54)) {
					var_1_55 = (max (var_1_51 , (abs (var_1_57))));
				}
			}
		} else {
			if (var_1_47 >= var_1_44) {
				var_1_55 = (var_1_52 + var_1_27);
			}
		}
	}


	// From: CodeObject13
	if ((var_1_40 && var_1_60) && var_1_61) {
		var_1_59 = (abs (max (var_1_38 , var_1_43)));
	}


	// From: CodeObject14
	if (var_1_44 != (var_1_35 * var_1_58)) {
		var_1_62 = var_1_58;
	}


	// From: CodeObject15
	if (var_1_61) {
		var_1_63 = 0;
	}


	// From: CodeObject16
	if ((var_1_51 / (min (var_1_58 , var_1_57))) > var_1_27) {
		if (var_1_59 > var_1_43) {
			if (var_1_35 < var_1_28) {
				var_1_64 = (abs (var_1_26));
			}
		} else {
			var_1_64 = (abs (var_1_45));
		}
	}


	// From: CodeObject17
	if (var_1_63) {
		var_1_65 = (abs (abs (var_1_66 - var_1_55)));
	}


	// From: CodeObject18
	if (var_1_60) {
		var_1_67 = (abs (min (var_1_27 , (abs (var_1_46)))));
	}


	// From: CodeObject19
	if (var_1_66 > var_1_62) {
		var_1_68 = (var_1_46 + var_1_54);
	}


	// From: CodeObject20
	if (var_1_25 < var_1_65) {
		var_1_69 = var_1_70;
	}


	// From: CodeObject21
	if (var_1_47 < var_1_25) {
		var_1_71 = var_1_67;
	}


	// From: CodeObject22
	if ((- var_1_25) >= var_1_73) {
		var_1_72 = ((min (var_1_47 , var_1_26)) - var_1_25);
	} else {
		var_1_72 = ((min ((min (var_1_74 , var_1_48)) , var_1_46)) + ((min (var_1_62 , var_1_52)) - var_1_25));
	}


	// From: CodeObject23
	if (var_1_60) {
		var_1_75 = ((abs (var_1_58)) + var_1_27);
	} else {
		var_1_75 = (min (var_1_57 , var_1_62));
	}


	// From: CodeObject24
	if (8 < var_1_73) {
		var_1_76 = (abs ((abs (var_1_66)) - var_1_25));
	}


	// From: CodeObject25
	if (var_1_72 > (var_1_74 * var_1_55)) {
		if (var_1_68 > ((abs (var_1_62)) >> var_1_55)) {
			var_1_77 = (max ((abs (var_1_47)) , var_1_27));
		}
	} else {
		var_1_77 = var_1_27;
	}


	// From: CodeObject26
	if (var_1_70 || var_1_60) {
		var_1_78 = ((abs (abs (var_1_46))) - var_1_79);
	} else {
		var_1_78 = (abs (var_1_79));
	}


	// From: CodeObject27
	if (var_1_67 <= (max (4 , (-8 << var_1_76)))) {
		var_1_81 = (var_1_70 || (! var_1_82));
	}


	// From: CodeObject28
	if (var_1_70) {
		if (var_1_84 < (max (var_1_31 , var_1_36))) {
			var_1_83 = var_1_46;
		}
	} else {
		var_1_83 = (var_1_34 + var_1_62);
	}


	// From: CodeObject29
	if ((abs (var_1_29)) > (max (var_1_62 , var_1_28))) {
		if (! ((min (var_1_32 , var_1_53)) >= var_1_36)) {
			if (-50 >= (var_1_77 ^ var_1_62)) {
				if ((var_1_46 <= (var_1_80 % var_1_86)) && (var_1_84 <= (var_1_49 + var_1_43))) {
					var_1_85 = (abs (var_1_37));
				} else {
					if ((~ var_1_64) >= var_1_83) {
						var_1_85 = (abs (min (var_1_37 , var_1_42)));
					}
				}
			}
		}
	} else {
		var_1_85 = (max (var_1_43 , 99999.5f));
	}


	// From: CodeObject30
	if (var_1_84 <= var_1_85) {
		if (var_1_74 <= var_1_46) {
			var_1_87 = (abs (var_1_71));
		} else {
			var_1_87 = var_1_74;
		}
	} else {
		if ((var_1_58 >> var_1_86) > var_1_48) {
			var_1_87 = (min (var_1_47 , var_1_44));
		}
	}


	// From: CodeObject31
	if (var_1_40 || var_1_70) {
		if ((~ var_1_80) > (abs (var_1_86))) {
			var_1_88 = (abs (var_1_45));
		} else {
			var_1_88 = (abs (var_1_79 + (max (var_1_77 , var_1_55))));
		}
	} else {
		var_1_88 = (abs (var_1_78));
	}


	// From: CodeObject32
	if ((5 ^ var_1_25) != var_1_26) {
		if ((max (var_1_86 , (var_1_80 / var_1_90))) <= (var_1_47 / var_1_58)) {
			if (var_1_83 < (var_1_87 & var_1_44)) {
				if (((var_1_83 % var_1_58) >> 5u) > (var_1_54 | var_1_73)) {
					var_1_89 = var_1_37;
				}
			} else {
				var_1_89 = (min ((var_1_43 - var_1_38) , var_1_37));
			}
		}
	} else {
		if ((2u | (8u >> var_1_26)) > (abs (var_1_29 * var_1_56))) {
			var_1_89 = (abs (var_1_43));
		}
	}


	// From: CodeObject33
	if (var_1_61) {
		if ((var_1_50 - (var_1_92 - var_1_38)) < var_1_53) {
			var_1_91 = (abs (var_1_52));
		} else {
			var_1_91 = (max (var_1_58 , var_1_78));
		}
	}


	// From: CodeObject34
	if (var_1_78 < (abs (var_1_46))) {
		if (((abs (var_1_55)) | (var_1_90 * var_1_30)) != (var_1_34 | (var_1_29 >> var_1_28))) {
			var_1_93 = (var_1_82 && (! (var_1_61 && var_1_70)));
		}
	}


	// From: CodeObject35
	if (var_1_63) {
		var_1_94 = (! var_1_82);
	} else {
		var_1_94 = (var_1_70 || (var_1_95 || var_1_96));
	}


	// From: CodeObject36
	if (var_1_75 >= var_1_83) {
		var_1_97 = (abs (var_1_25));
	}


	// From: CodeObject37
	if (var_1_55 > (var_1_56 | (~ var_1_83))) {
		if ((var_1_66 * var_1_48) < (2u * var_1_87)) {
			var_1_98 = ((abs (2618092138u)) - (var_1_99 - (var_1_79 + var_1_51)));
		}
	} else {
		var_1_98 = (min (4u , ((abs (var_1_66)) - var_1_58)));
	}


	// From: CodeObject38
	if (var_1_42 > var_1_89) {
		var_1_100 = (min (100 , var_1_101));
	}


	// From: CodeObject39
	if ((~ var_1_66) > (abs (var_1_83))) {
		var_1_102 = var_1_55;
	} else {
		var_1_102 = (max (var_1_26 , 256u));
	}


	// From: CodeObject40
	if (((min (var_1_88 , var_1_25)) <= var_1_29) || ((abs (var_1_48)) < (var_1_56 + -2))) {
		if (var_1_48 <= (min (var_1_87 , (- var_1_29)))) {
			if (var_1_53 >= var_1_50) {
				var_1_103 = ((abs (var_1_38)) + (max (var_1_43 , var_1_104)));
			}
		}
	} else {
		if ((var_1_105 - (var_1_106 - var_1_55)) != (max (var_1_91 , var_1_54))) {
			var_1_103 = (abs (var_1_104 + var_1_38));
		} else {
			if ((var_1_88 | var_1_51) > var_1_71) {
				var_1_103 = (max (var_1_43 , (max (var_1_107 , (abs (var_1_42))))));
			}
		}
	}


	// From: CodeObject41
	if (! var_1_96) {
		if (var_1_70 || ((max (var_1_58 , 2)) < var_1_99)) {
			var_1_108 = (var_1_69 || var_1_82);
		}
	}


	// From: CodeObject42
	if (((abs (var_1_106)) << var_1_76) <= var_1_46) {
		if (var_1_72 > var_1_57) {
			if (var_1_33 == (abs (var_1_50))) {
				var_1_109 = (abs (abs (abs (var_1_107))));
			}
		}
	}


	// From: CodeObject43
	if (var_1_65 >= (~ var_1_29)) {
		var_1_110 = (var_1_43 + var_1_38);
	} else {
		if (var_1_91 >= ((abs (var_1_48)) ^ (abs (var_1_62)))) {
			if (var_1_39 > var_1_109) {
				var_1_110 = var_1_38;
			}
		} else {
			var_1_110 = (abs (var_1_43 + var_1_111));
		}
	}


	// From: CodeObject44
	if (((abs (3880121649u)) - 4u) > var_1_73) {
		var_1_112 = (max (var_1_77 , var_1_45));
	} else {
		var_1_112 = ((min (var_1_86 , -256)) + var_1_46);
	}


	// From: CodeObject45
	if ((abs (var_1_46)) > var_1_68) {
		var_1_113 = (min (var_1_43 , var_1_114));
	} else {
		var_1_113 = var_1_107;
	}


	// From: CodeObject46
	if (var_1_93) {
		var_1_115 = 8;
	}


	// From: CodeObject47
	if (var_1_94) {
		var_1_116 = var_1_79;
	}


	// From: CodeObject48
	if (var_1_40) {
		var_1_117 = var_1_80;
	} else {
		var_1_117 = -1;
	}


	// From: CodeObject49
	var_1_118 = var_1_42;


	// From: CodeObject50
	if (var_1_63) {
		var_1_119 = 1;
	} else {
		var_1_119 = var_1_82;
	}


	// From: CodeObject51
	var_1_120 = 0.25f;


	// From: CodeObject52
	var_1_121 = var_1_96;


	// From: CodeObject53
	if (var_1_121) {
		var_1_122 = var_1_48;
	} else {
		var_1_122 = var_1_48;
	}


	// From: CodeObject54
	var_1_123 = var_1_27;


	// From: CodeObject55
	if (var_1_63) {
		var_1_124 = var_1_27;
	}


	// From: CodeObject56
	var_1_125 = var_1_27;


	// From: CodeObject57
	if (var_1_108) {
		var_1_126 = var_1_111;
	} else {
		var_1_126 = var_1_107;
	}


	// From: CodeObject58
	if (var_1_60) {
		var_1_127 = var_1_82;
	}


	// From: CodeObject59
	if (0 <= (abs (var_1_25))) {
		var_1_128 = (var_1_43 - var_1_38);
	}


	// From: CodeObject60
	if (! var_1_94) {
		var_1_129 = var_1_54;
	}


	// From: CodeObject61
	var_1_130 = var_1_104;


	// From: CodeObject62
	var_1_131 = var_1_80;


	// From: Req3Batch7PS_CN_500
	var_1_9 = (max (var_1_5 , var_1_6));


	// From: Req4Batch7PS_CN_500
	signed long int stepLocal_1 = 56016 - var_1_11;
	signed long int stepLocal_0 = 10;
	if (var_1_6 < stepLocal_0) {
		if (var_1_5 < stepLocal_1) {
			var_1_10 = var_1_5;
		}
	}


	// From: Req5Batch7PS_CN_500
	if ((var_1_13 - var_1_14) > (var_1_10 + var_1_11)) {
		if (! var_1_8) {
			var_1_12 = var_1_13;
		}
	} else {
		var_1_12 = var_1_14;
	}


	// From: Req6Batch7PS_CN_500
	var_1_15 = (var_1_14 - (max ((var_1_16 + var_1_17) , 4)));


	// From: Req7Batch7PS_CN_500
	if (var_1_4 > var_1_2) {
		var_1_18 = ((abs (var_1_19 + var_1_20)) - var_1_21);
	} else {
		if (! ((var_1_17 - var_1_11) < 128)) {
			var_1_18 = (abs (var_1_21));
		} else {
			var_1_18 = (min ((max (9.75f , var_1_19)) , (max ((var_1_21 - var_1_22) , (max (var_1_20 , var_1_23))))));
		}
	}


	// From: Req8Batch7PS_CN_500
	var_1_24 = 16;


	// From: Req1Batch7PS_CN_500
	if (var_1_18 <= (var_1_3 - var_1_4)) {
		var_1_1 = var_1_5;
	} else {
		var_1_1 = (max (var_1_5 , var_1_6));
	}


	// From: Req2Batch7PS_CN_500
	if (var_1_8) {
		if (var_1_5 < 16) {
			var_1_7 = (var_1_6 + var_1_24);
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 16383);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 16383);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854765600e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65535);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 17);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483648);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483647);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 4611686.018427382800e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 4611686.018427382800e+12F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -63);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -1);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 4611686.018427387900e+12F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_56 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 4294967295);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 127);
	assume_abort_if_not(var_1_57 <= 254);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 127);
	assume_abort_if_not(var_1_58 <= 254);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 1);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 1);
	var_1_66 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_66 >= 2147483647);
	assume_abort_if_not(var_1_66 <= 4294967294);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 0);
	var_1_73 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_73 >= -2147483648);
	assume_abort_if_not(var_1_73 <= 2147483647);
	var_1_74 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_74 >= -1073741823);
	assume_abort_if_not(var_1_74 <= 1073741823);
	var_1_79 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 126);
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 63);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 1);
	assume_abort_if_not(var_1_82 <= 1);
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= -922337.2036854776000e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 9223372.036854776000e+12F && var_1_84 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_86 >= -128);
	assume_abort_if_not(var_1_86 <= 127);
	assume_abort_if_not(var_1_86 != 0);
	var_1_90 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_90 >= -128);
	assume_abort_if_not(var_1_90 <= 127);
	assume_abort_if_not(var_1_90 != 0);
	var_1_92 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_92 >= 4611686.018427387900e+12F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 9223372.036854776000e+12F && var_1_92 >= 1.0e-20F ));
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 0);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 0);
	var_1_99 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_99 >= 1073741823);
	assume_abort_if_not(var_1_99 <= 2147483647);
	var_1_101 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_101 >= -32767);
	assume_abort_if_not(var_1_101 <= 32766);
	var_1_104 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_104 >= -461168.6018427382800e+13F && var_1_104 <= -1.0e-20F) || (var_1_104 <= 4611686.018427382800e+12F && var_1_104 >= 1.0e-20F ));
	var_1_105 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_105 >= 32767);
	assume_abort_if_not(var_1_105 <= 65535);
	var_1_106 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_106 >= 16383);
	assume_abort_if_not(var_1_106 <= 32767);
	var_1_107 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_107 >= -922337.2036854765600e+13F && var_1_107 <= -1.0e-20F) || (var_1_107 <= 9223372.036854765600e+12F && var_1_107 >= 1.0e-20F ));
	var_1_111 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_111 >= -461168.6018427382800e+13F && var_1_111 <= -1.0e-20F) || (var_1_111 <= 4611686.018427382800e+12F && var_1_111 >= 1.0e-20F ));
	var_1_114 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_114 >= -922337.2036854765600e+13F && var_1_114 <= -1.0e-20F) || (var_1_114 <= 9223372.036854765600e+12F && var_1_114 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return ((((((((var_1_18 <= (var_1_3 - var_1_4)) ? (var_1_1 == ((unsigned short int) var_1_5)) : (var_1_1 == ((unsigned short int) (max (var_1_5 , var_1_6))))) && (var_1_8 ? ((var_1_5 < 16) ? (var_1_7 == ((unsigned long int) (var_1_6 + var_1_24))) : 1) : 1)) && (var_1_9 == ((signed long int) (max (var_1_5 , var_1_6))))) && ((var_1_6 < 10) ? ((var_1_5 < (56016 - var_1_11)) ? (var_1_10 == ((unsigned short int) var_1_5)) : 1) : 1)) && (((var_1_13 - var_1_14) > (var_1_10 + var_1_11)) ? ((! var_1_8) ? (var_1_12 == ((signed short int) var_1_13)) : 1) : (var_1_12 == ((signed short int) var_1_14)))) && (var_1_15 == ((signed short int) (var_1_14 - (max ((var_1_16 + var_1_17) , 4)))))) && ((var_1_4 > var_1_2) ? (var_1_18 == ((float) ((abs (var_1_19 + var_1_20)) - var_1_21))) : ((! ((var_1_17 - var_1_11) < 128)) ? (var_1_18 == ((float) (abs (var_1_21)))) : (var_1_18 == ((float) (min ((max (9.75f , var_1_19)) , (max ((var_1_21 - var_1_22) , (max (var_1_20 , var_1_23))))))))))) && (var_1_24 == ((signed short int) 16))
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
