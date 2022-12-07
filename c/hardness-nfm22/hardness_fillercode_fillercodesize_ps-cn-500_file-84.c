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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch84PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -10;
signed char var_1_3 = -16;
signed char var_1_4 = 50;
signed char var_1_5 = 4;
unsigned long int var_1_6 = 50;
signed long int var_1_7 = -8;
signed long int var_1_8 = -4;
signed char var_1_9 = 50;
unsigned char var_1_10 = 128;
unsigned char var_1_11 = 5;
unsigned long int var_1_12 = 10;
signed char var_1_13 = 16;
unsigned short int var_1_15 = 128;
signed long int var_1_16 = 2;
unsigned short int var_1_17 = 61498;
unsigned long int var_1_18 = 1;
unsigned char var_1_19 = 0;
double var_1_20 = 4.9;
double var_1_21 = 1.5;
signed long int var_1_22 = 0;
float var_1_23 = 0.5;
float var_1_24 = 10.125;
signed long int var_1_25 = 4;
float var_1_26 = 8.75;
float var_1_27 = 199.96;
float var_1_28 = 16.5;
float var_1_29 = 24.25;
signed short int var_1_30 = 2;
signed short int var_1_31 = -4;
signed short int var_1_32 = -25;
signed short int var_1_33 = -32;
signed short int var_1_34 = -2;
float var_1_35 = 128.5;
signed short int var_1_36 = -1;
signed short int var_1_37 = -200;
signed short int var_1_38 = 5;
signed short int var_1_39 = 100;
signed short int var_1_40 = -10;
signed short int var_1_41 = -16;
unsigned short int var_1_42 = 32;
unsigned char var_1_43 = 0;
unsigned short int var_1_44 = 49956;
unsigned short int var_1_45 = 100;
unsigned short int var_1_46 = 16;
signed long int var_1_47 = -2;
float var_1_48 = 15.25;
signed char var_1_49 = -2;
signed char var_1_50 = 10;
float var_1_51 = 10000000000.5;
float var_1_52 = 256.85;
double var_1_53 = 199.375;
unsigned long int var_1_54 = 10;
unsigned short int var_1_55 = 32;
unsigned short int var_1_56 = 25;
unsigned short int var_1_57 = 25;
unsigned short int var_1_58 = 25;
unsigned long int var_1_59 = 16;
signed long int var_1_60 = -5;
unsigned long int var_1_61 = 3985942191;
unsigned long int var_1_62 = 3788634383;
signed long int var_1_63 = 4;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 0;
unsigned short int var_1_67 = 10;
unsigned short int var_1_68 = 17635;
signed short int var_1_69 = 0;
unsigned short int var_1_70 = 0;
signed char var_1_71 = -5;
signed char var_1_72 = -8;
signed char var_1_73 = 25;
signed char var_1_74 = 8;
signed short int var_1_75 = -8;
signed long int var_1_76 = 1;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 16;
unsigned char var_1_79 = 16;
double var_1_80 = 1.3;
unsigned short int var_1_81 = 1;
signed long int var_1_82 = 4;
unsigned short int var_1_83 = 25;
signed char var_1_84 = -5;
signed short int var_1_85 = 16;
signed short int var_1_86 = 8;
signed long int var_1_87 = 256;
signed long int var_1_88 = -256;
signed long int var_1_89 = -16;
unsigned char var_1_90 = 4;
unsigned char var_1_91 = 0;
signed short int var_1_92 = 64;
unsigned char var_1_93 = 1;
unsigned char var_1_94 = 1;
signed char var_1_95 = -32;
signed char var_1_96 = 16;
signed char var_1_97 = 1;
unsigned char var_1_98 = 5;
unsigned char var_1_99 = 10;
signed char var_1_100 = -10;
signed short int var_1_101 = 5;
signed long int var_1_102 = 16;
double var_1_103 = 50.625;
unsigned long int var_1_104 = 4;
unsigned char var_1_105 = 1;
unsigned char var_1_106 = 1;
signed short int var_1_107 = -25;
signed char var_1_108 = 10;
double var_1_109 = 4.8;
double var_1_110 = 256.5;
double var_1_111 = -0.75;
unsigned long int var_1_112 = 8;
unsigned long int var_1_113 = 1553623613;
unsigned long int var_1_114 = 128;
signed long int var_1_115 = -1000;
unsigned short int var_1_116 = 0;
unsigned short int var_1_117 = 37687;
double var_1_118 = 3.5;
unsigned long int var_1_119 = 8;
signed char var_1_120 = -1;
unsigned char var_1_121 = 64;
signed char var_1_122 = -5;
signed char var_1_123 = 4;
signed char var_1_124 = 0;
signed long int var_1_125 = -100;
signed char var_1_126 = -4;
signed long int var_1_127 = 32;
signed long int var_1_128 = 25;
double var_1_129 = 9.4;
double var_1_130 = 128.4;
double var_1_131 = 3.5;
double var_1_132 = 50.5;
signed long int var_1_133 = -16;
signed long int var_1_134 = -25;
double var_1_135 = 2.5;
double var_1_136 = 15.8;
signed short int var_1_137 = 100;
unsigned long int var_1_138 = 1;
unsigned short int var_1_139 = 2;
signed long int var_1_140 = 32;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_15 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (256.25f > (var_1_23 - var_1_24)) {
		var_1_22 = var_1_25;
	}


	// From: CodeObject2
	if (15.1 >= var_1_23) {
		var_1_26 = (abs (abs (var_1_27)));
	} else {
		if (var_1_27 <= var_1_23) {
			var_1_26 = (var_1_28 + (64.9f + var_1_29));
		}
	}


	// From: CodeObject3
	if (var_1_26 >= var_1_28) {
		var_1_30 = (min (var_1_31 , (max (var_1_32 , (abs (var_1_33))))));
	}


	// From: CodeObject4
	if (var_1_32 > var_1_25) {
		var_1_34 = (abs (var_1_33));
	} else {
		if (! (var_1_28 <= (var_1_23 / var_1_35))) {
			var_1_34 = (abs (min ((min (var_1_33 , var_1_36)) , (abs (var_1_37)))));
		} else {
			var_1_34 = (var_1_38 + (min ((var_1_39 + var_1_40) , var_1_41)));
		}
	}


	// From: CodeObject5
	if (var_1_43 && (var_1_41 <= (abs (var_1_37)))) {
		var_1_42 = ((var_1_44 - var_1_45) - var_1_46);
	} else {
		var_1_42 = (var_1_45 + (abs (var_1_46)));
	}


	// From: CodeObject6
	if (! var_1_43) {
		if (((var_1_29 * var_1_35) / var_1_48) > var_1_24) {
			var_1_47 = var_1_39;
		}
	} else {
		var_1_47 = (abs (var_1_33));
	}


	// From: CodeObject7
	if (! var_1_43) {
		var_1_49 = (max (var_1_50 , -2));
	} else {
		var_1_49 = var_1_50;
	}


	// From: CodeObject8
	if (var_1_35 <= ((abs (100.5f)) - (abs (var_1_29)))) {
		if ((var_1_41 & var_1_44) < var_1_33) {
			var_1_51 = (var_1_52 - (abs (var_1_28)));
		} else {
			var_1_51 = 10.5f;
		}
	}


	// From: CodeObject9
	if (var_1_22 <= (var_1_33 >> var_1_45)) {
		var_1_53 = (max (var_1_28 , var_1_29));
	}


	// From: CodeObject10
	if (var_1_45 < var_1_34) {
		var_1_54 = (abs (var_1_42));
	}


	// From: CodeObject11
	if ((~ var_1_41) >= var_1_32) {
		if (var_1_54 != var_1_44) {
			if (var_1_43 && (var_1_26 <= var_1_29)) {
				var_1_55 = (min (var_1_56 , 25));
			} else {
				var_1_55 = ((abs (var_1_45)) + (var_1_57 + (var_1_58 + 5)));
			}
		}
	}


	// From: CodeObject12
	if ((var_1_44 - (abs (var_1_57))) <= ((var_1_32 / var_1_60) * var_1_45)) {
		var_1_59 = var_1_46;
	} else {
		if (var_1_57 <= var_1_22) {
			var_1_59 = ((min (var_1_61 , var_1_62)) - (abs (var_1_57)));
		}
	}


	// From: CodeObject13
	if (var_1_32 > var_1_37) {
		var_1_63 = var_1_46;
	} else {
		if ((~ var_1_61) >= (abs (var_1_59 ^ 0u))) {
			var_1_63 = ((abs (var_1_56)) + var_1_36);
		}
	}


	// From: CodeObject14
	if ((var_1_50 >> var_1_22) >= ((var_1_30 / var_1_44) >> var_1_55)) {
		var_1_64 = (! (var_1_43 && (var_1_65 && var_1_66)));
	}


	// From: CodeObject15
	if (var_1_39 > (abs (var_1_40))) {
		var_1_67 = (var_1_44 - (abs (var_1_68 - var_1_58)));
	} else {
		if (((var_1_32 % var_1_60) >> 5) <= var_1_31) {
			var_1_67 = (max ((max (var_1_58 , var_1_68)) , var_1_44));
		} else {
			var_1_67 = var_1_45;
		}
	}


	// From: CodeObject16
	if (var_1_66) {
		if (-128 > ((var_1_56 >> var_1_70) | (max (var_1_60 , var_1_30)))) {
			var_1_69 = (abs (abs (var_1_40)));
		} else {
			var_1_69 = (var_1_45 - (abs (abs (var_1_37))));
		}
	}


	// From: CodeObject17
	var_1_71 = (var_1_70 + (min ((abs (var_1_72)) , (var_1_73 + var_1_74))));


	// From: CodeObject18
	if (var_1_28 > (min ((- var_1_29) , var_1_23))) {
		var_1_75 = (abs (var_1_74));
	}


	// From: CodeObject19
	if (((max (var_1_56 , var_1_68)) & 1) <= var_1_75) {
		var_1_76 = (max (5 , var_1_57));
	} else {
		var_1_76 = ((abs (var_1_46 - var_1_70)) + var_1_74);
	}


	// From: CodeObject20
	if ((var_1_46 <= var_1_25) || (! var_1_65)) {
		var_1_77 = (max (var_1_70 , var_1_78));
	}


	// From: CodeObject21
	if (var_1_43) {
		var_1_79 = 1;
	}


	// From: CodeObject22
	if (var_1_66) {
		var_1_80 = var_1_27;
	} else {
		var_1_80 = var_1_27;
	}


	// From: CodeObject23
	if (var_1_65) {
		var_1_81 = var_1_57;
	} else {
		var_1_81 = var_1_79;
	}


	// From: CodeObject24
	var_1_82 = var_1_34;


	// From: CodeObject25
	if (var_1_43) {
		var_1_83 = var_1_44;
	}


	// From: CodeObject26
	if (var_1_23 > var_1_27) {
		var_1_84 = var_1_50;
	}


	// From: CodeObject27
	if (var_1_42 > var_1_63) {
		var_1_85 = (abs (var_1_36));
	}


	// From: CodeObject28
	if (! var_1_65) {
		var_1_86 = (abs ((var_1_45 - var_1_58) + (abs (var_1_38))));
	}


	// From: CodeObject29
	if ((8 >> var_1_56) > var_1_31) {
		var_1_87 = (var_1_77 - var_1_46);
	}


	// From: CodeObject30
	if (var_1_33 <= var_1_40) {
		var_1_88 = (min (var_1_45 , (max ((max (var_1_67 , var_1_83)) , (max (var_1_89 , var_1_44))))));
	} else {
		if (var_1_43) {
			var_1_88 = (max ((abs (var_1_72)) , var_1_84));
		}
	}


	// From: CodeObject31
	var_1_90 = (max ((abs (var_1_78)) , var_1_70));


	// From: CodeObject32
	if ((~ var_1_92) <= var_1_74) {
		var_1_91 = (((var_1_60 & var_1_40) != var_1_30) || (var_1_64 || (var_1_93 && var_1_94)));
	}


	// From: CodeObject33
	if (var_1_84 <= var_1_69) {
		var_1_95 = ((var_1_70 - var_1_96) + (abs (var_1_97 - 1)));
	}


	// From: CodeObject34
	if (var_1_91) {
		var_1_98 = (abs (max (var_1_97 , var_1_96)));
	} else {
		var_1_98 = var_1_99;
	}


	// From: CodeObject35
	if (var_1_30 >= (var_1_76 >> 8)) {
		var_1_100 = (abs (var_1_97 - var_1_70));
	} else {
		var_1_100 = (min (var_1_97 , (abs (50))));
	}


	// From: CodeObject36
	if ((var_1_95 & var_1_96) == var_1_42) {
		var_1_101 = (min (var_1_90 , var_1_96));
	}


	// From: CodeObject37
	if (var_1_31 <= (max (var_1_49 , (var_1_90 ^ var_1_70)))) {
		if ((var_1_103 >= var_1_48) || (var_1_68 < (var_1_89 ^ var_1_78))) {
			if (var_1_57 >= var_1_67) {
				var_1_102 = (-32 + var_1_100);
			} else {
				if (var_1_43) {
					if (0u > (abs (var_1_104))) {
						if (var_1_65) {
							var_1_102 = (min (((var_1_45 + var_1_78) + (min (var_1_39 , var_1_41))) , var_1_74));
						}
					} else {
						var_1_102 = (max (var_1_73 , var_1_36));
					}
				} else {
					if (var_1_39 >= var_1_104) {
						if (var_1_69 <= (max ((min (256 , var_1_42)) , var_1_41))) {
							var_1_102 = (max ((abs (var_1_40)) , var_1_101));
						}
					} else {
						var_1_102 = var_1_95;
					}
				}
			}
		} else {
			var_1_102 = (abs (var_1_79));
		}
	} else {
		var_1_102 = (abs (var_1_69));
	}


	// From: CodeObject38
	if (var_1_34 > var_1_77) {
		var_1_105 = (var_1_64 || var_1_93);
	}


	// From: CodeObject39
	if (var_1_51 > var_1_28) {
		var_1_106 = (! (! (var_1_65 && var_1_66)));
	} else {
		var_1_106 = (var_1_65 && var_1_66);
	}


	// From: CodeObject40
	if (var_1_72 <= var_1_33) {
		var_1_107 = (max (var_1_37 , var_1_72));
	}


	// From: CodeObject41
	if (var_1_94) {
		var_1_108 = (var_1_96 + var_1_97);
	}


	// From: CodeObject42
	if (((abs (-2)) ^ (~ var_1_97)) >= (var_1_47 | (var_1_92 & var_1_102))) {
		if (var_1_87 <= var_1_88) {
			if ((~ (min (var_1_60 , var_1_83))) < (min (2 , (var_1_74 % var_1_68)))) {
				if ((var_1_76 * var_1_57) <= (var_1_83 - var_1_68)) {
					var_1_109 = (var_1_29 + var_1_28);
				} else {
					if ((var_1_77 ^ var_1_39) <= var_1_95) {
						var_1_109 = (min ((var_1_28 + var_1_29) , (max (var_1_27 , (var_1_110 + var_1_111)))));
					}
				}
			} else {
				var_1_109 = (var_1_111 + (min (var_1_29 , var_1_28)));
			}
		} else {
			if (var_1_105) {
				var_1_109 = (abs (15.625));
			}
		}
	} else {
		if (var_1_32 < var_1_86) {
			var_1_109 = (var_1_28 + var_1_29);
		} else {
			var_1_109 = var_1_111;
		}
	}


	// From: CodeObject43
	if (((var_1_85 + var_1_101) + var_1_81) <= (var_1_82 | var_1_96)) {
		if ((var_1_46 << var_1_54) <= ((var_1_56 - 256) / var_1_68)) {
			if (((var_1_100 + var_1_83) ^ (var_1_92 | var_1_25)) < (var_1_31 * var_1_44)) {
				var_1_112 = (100u + var_1_81);
			} else {
				var_1_112 = (var_1_61 - (var_1_113 - (var_1_97 + var_1_55)));
			}
		}
	}


	// From: CodeObject44
	if ((- var_1_45) <= var_1_36) {
		var_1_114 = var_1_56;
	} else {
		if (var_1_22 <= var_1_115) {
			var_1_114 = (min (((abs (var_1_44)) + (max (var_1_70 , var_1_90))) , var_1_113));
		} else {
			var_1_114 = (abs (var_1_68));
		}
	}


	// From: CodeObject45
	if (var_1_107 > var_1_100) {
		if ((max (var_1_97 , var_1_58)) < var_1_45) {
			var_1_116 = var_1_68;
		} else {
			var_1_116 = (min ((var_1_44 - var_1_79) , (max ((var_1_117 - 500) , (min (var_1_78 , var_1_46))))));
		}
	}


	// From: CodeObject46
	if (var_1_65) {
		var_1_118 = (abs (var_1_29));
	}


	// From: CodeObject47
	if (var_1_64) {
		var_1_119 = ((abs (var_1_62)) - var_1_79);
	}


	// From: CodeObject48
	if (var_1_121 <= ((min (var_1_58 , var_1_77)) | var_1_75)) {
		if (var_1_105) {
			var_1_120 = ((abs (var_1_74)) + (abs (var_1_96)));
		} else {
			var_1_120 = (abs (abs (var_1_97)));
		}
	}


	// From: CodeObject49
	if (var_1_108 <= var_1_120) {
		if (var_1_41 < var_1_102) {
			var_1_122 = (min ((abs (var_1_96)) , var_1_72));
		}
	} else {
		var_1_122 = (min (var_1_97 , (var_1_123 - var_1_96)));
	}


	// From: CodeObject50
	var_1_124 = (var_1_96 - var_1_97);


	// From: CodeObject51
	if ((var_1_101 / var_1_60) > var_1_87) {
		var_1_125 = (abs (var_1_123));
	} else {
		var_1_125 = var_1_42;
	}


	// From: CodeObject52
	if ((- var_1_125) <= var_1_32) {
		if ((~ var_1_83) > (min (var_1_127 , (abs (var_1_50))))) {
			var_1_126 = (var_1_72 + (abs (var_1_70)));
		}
	}


	// From: CodeObject53
	if ((32.25 + var_1_129) <= var_1_130) {
		var_1_128 = (var_1_50 + (var_1_58 - (var_1_90 + 8)));
	}


	// From: CodeObject54
	if (var_1_106) {
		if ((var_1_23 + 15.1) > var_1_35) {
			var_1_131 = (var_1_52 - var_1_132);
		} else {
			var_1_131 = var_1_28;
		}
	} else {
		var_1_131 = var_1_28;
	}


	// From: CodeObject55
	if (var_1_66) {
		var_1_133 = var_1_31;
	}


	// From: CodeObject56
	if (var_1_65) {
		var_1_134 = var_1_77;
	} else {
		var_1_134 = var_1_67;
	}


	// From: CodeObject57
	if (var_1_66) {
		var_1_135 = var_1_110;
	}


	// From: CodeObject58
	if (var_1_43) {
		var_1_136 = var_1_52;
	} else {
		var_1_136 = var_1_52;
	}


	// From: CodeObject59
	if (var_1_93) {
		var_1_137 = -5;
	}


	// From: CodeObject60
	if (var_1_91) {
		var_1_138 = var_1_62;
	} else {
		var_1_138 = var_1_56;
	}


	// From: CodeObject61
	if (var_1_66) {
		var_1_139 = var_1_77;
	} else {
		var_1_139 = var_1_45;
	}


	// From: CodeObject62
	if (var_1_79 < var_1_30) {
		if (var_1_33 < (min (var_1_25 , var_1_81))) {
			var_1_140 = (abs (var_1_36));
		}
	} else {
		if (var_1_30 >= var_1_60) {
			var_1_140 = var_1_38;
		}
	}


	// From: Req3Batch84PS_CN_500
	if (last_1_var_1_15 <= (var_1_8 & var_1_4)) {
		if (((- 8) / (var_1_10 - var_1_11)) >= var_1_3) {
			var_1_9 = var_1_3;
		}
	} else {
		var_1_9 = var_1_4;
	}


	// From: Req6Batch84PS_CN_500
	signed long int stepLocal_3 = (var_1_4 + var_1_9) & var_1_7;
	if (stepLocal_3 <= (var_1_10 - (min (var_1_11 , var_1_16)))) {
		var_1_15 = (var_1_11 + 64);
	} else {
		var_1_15 = (max ((max (var_1_10 , (var_1_17 - var_1_4))) , var_1_11));
	}


	// From: Req2Batch84PS_CN_500
	signed long int stepLocal_1 = -4;
	signed long int stepLocal_0 = -16;
	if (stepLocal_1 > (var_1_5 / (max (var_1_7 , var_1_8)))) {
		if (var_1_4 < stepLocal_0) {
			var_1_6 = (abs (32u));
		}
	}


	// From: Req7Batch84PS_CN_500
	var_1_18 = var_1_17;


	// From: Req8Batch84PS_CN_500
	var_1_19 = 0;


	// From: Req9Batch84PS_CN_500
	var_1_20 = var_1_21;


	// From: Req1Batch84PS_CN_500
	if (var_1_19) {
		var_1_1 = (min ((var_1_3 + (1 - var_1_4)) , var_1_5));
	}


	// From: Req4Batch84PS_CN_500
	if (var_1_3 <= var_1_1) {
		var_1_12 = var_1_4;
	} else {
		var_1_12 = (min ((var_1_11 + var_1_4) , var_1_10));
	}


	// From: Req5Batch84PS_CN_500
	unsigned long int stepLocal_2 = var_1_18;
	if ((~ var_1_3) < stepLocal_2) {
		var_1_13 = (max ((var_1_4 + var_1_3) , -5));
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 255);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 126);
	assume_abort_if_not(var_1_11 != 127);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 32767);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483647);
	assume_abort_if_not(var_1_25 <= 2147483646);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854765600e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427382800e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -230584.3009213691390e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691390e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= -32767);
	assume_abort_if_not(var_1_31 <= 32766);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -32767);
	assume_abort_if_not(var_1_32 <= 32766);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= -32766);
	assume_abort_if_not(var_1_33 <= 32766);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	assume_abort_if_not(var_1_35 != 0.0F);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= -32766);
	assume_abort_if_not(var_1_36 <= 32766);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= -32766);
	assume_abort_if_not(var_1_37 <= 32766);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= -16383);
	assume_abort_if_not(var_1_38 <= 16383);
	var_1_39 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_39 >= -8191);
	assume_abort_if_not(var_1_39 <= 8192);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= -8191);
	assume_abort_if_not(var_1_40 <= 8191);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= -16383);
	assume_abort_if_not(var_1_41 <= 16383);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 49150);
	assume_abort_if_not(var_1_44 <= 65534);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 16383);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 32767);
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
	assume_abort_if_not(var_1_48 != 0.0F);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= -127);
	assume_abort_if_not(var_1_50 <= 126);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 65534);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 16384);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 8192);
	var_1_60 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_60 >= -2147483648);
	assume_abort_if_not(var_1_60 <= 2147483647);
	assume_abort_if_not(var_1_60 != 0);
	var_1_61 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_61 >= 2147483647);
	assume_abort_if_not(var_1_61 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_62 >= 2147483647);
	assume_abort_if_not(var_1_62 <= 4294967294);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 1);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 0);
	var_1_68 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_68 >= 16383);
	assume_abort_if_not(var_1_68 <= 32767);
	var_1_70 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 17);
	var_1_72 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_72 >= -63);
	assume_abort_if_not(var_1_72 <= 63);
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= -31);
	assume_abort_if_not(var_1_73 <= 32);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= -31);
	assume_abort_if_not(var_1_74 <= 31);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 254);
	var_1_89 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_89 >= -2147483647);
	assume_abort_if_not(var_1_89 <= 2147483646);
	var_1_92 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_92 >= -32768);
	assume_abort_if_not(var_1_92 <= 32767);
	var_1_93 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_93 >= 1);
	assume_abort_if_not(var_1_93 <= 1);
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 1);
	assume_abort_if_not(var_1_94 <= 1);
	var_1_96 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 63);
	var_1_97 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_97 >= 0);
	assume_abort_if_not(var_1_97 <= 63);
	var_1_99 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_99 >= 0);
	assume_abort_if_not(var_1_99 <= 254);
	var_1_103 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_103 >= -922337.2036854776000e+13F && var_1_103 <= -1.0e-20F) || (var_1_103 <= 9223372.036854776000e+12F && var_1_103 >= 1.0e-20F ));
	var_1_104 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_104 >= 0);
	assume_abort_if_not(var_1_104 <= 4294967295);
	var_1_110 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_110 >= -461168.6018427382800e+13F && var_1_110 <= -1.0e-20F) || (var_1_110 <= 4611686.018427382800e+12F && var_1_110 >= 1.0e-20F ));
	var_1_111 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_111 >= -461168.6018427382800e+13F && var_1_111 <= -1.0e-20F) || (var_1_111 <= 4611686.018427382800e+12F && var_1_111 >= 1.0e-20F ));
	var_1_113 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_113 >= 1073741823);
	assume_abort_if_not(var_1_113 <= 2147483647);
	var_1_115 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_115 >= -2147483648);
	assume_abort_if_not(var_1_115 <= 2147483647);
	var_1_117 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_117 >= 32767);
	assume_abort_if_not(var_1_117 <= 65534);
	var_1_121 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_121 >= 0);
	assume_abort_if_not(var_1_121 <= 255);
	var_1_123 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_123 >= -1);
	assume_abort_if_not(var_1_123 <= 126);
	var_1_127 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_127 >= -2147483648);
	assume_abort_if_not(var_1_127 <= 2147483647);
	var_1_129 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_129 >= -922337.2036854776000e+13F && var_1_129 <= -1.0e-20F) || (var_1_129 <= 9223372.036854776000e+12F && var_1_129 >= 1.0e-20F ));
	var_1_130 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_130 >= -922337.2036854776000e+13F && var_1_130 <= -1.0e-20F) || (var_1_130 <= 9223372.036854776000e+12F && var_1_130 >= 1.0e-20F ));
	var_1_132 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_132 >= 0.0F && var_1_132 <= -1.0e-20F) || (var_1_132 <= 9223372.036854765600e+12F && var_1_132 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_15 = var_1_15;
}

int property() {
	return ((((((((var_1_19 ? (var_1_1 == ((signed char) (min ((var_1_3 + (1 - var_1_4)) , var_1_5)))) : 1) && ((-4 > (var_1_5 / (max (var_1_7 , var_1_8)))) ? ((var_1_4 < -16) ? (var_1_6 == ((unsigned long int) (abs (32u)))) : 1) : 1)) && ((last_1_var_1_15 <= (var_1_8 & var_1_4)) ? ((((- 8) / (var_1_10 - var_1_11)) >= var_1_3) ? (var_1_9 == ((signed char) var_1_3)) : 1) : (var_1_9 == ((signed char) var_1_4)))) && ((var_1_3 <= var_1_1) ? (var_1_12 == ((unsigned long int) var_1_4)) : (var_1_12 == ((unsigned long int) (min ((var_1_11 + var_1_4) , var_1_10)))))) && (((~ var_1_3) < var_1_18) ? (var_1_13 == ((signed char) (max ((var_1_4 + var_1_3) , -5)))) : 1)) && ((((var_1_4 + var_1_9) & var_1_7) <= (var_1_10 - (min (var_1_11 , var_1_16)))) ? (var_1_15 == ((unsigned short int) (var_1_11 + 64))) : (var_1_15 == ((unsigned short int) (max ((max (var_1_10 , (var_1_17 - var_1_4))) , var_1_11)))))) && (var_1_18 == ((unsigned long int) var_1_17))) && (var_1_19 == ((unsigned char) 0))) && (var_1_20 == ((double) var_1_21))
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
