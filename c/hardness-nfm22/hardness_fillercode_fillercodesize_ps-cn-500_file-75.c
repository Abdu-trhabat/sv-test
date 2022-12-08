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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch75PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 63.6;
float var_1_4 = 128.75;
float var_1_5 = 25.125;
float var_1_6 = 1000000.75;
unsigned char var_1_7 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
float var_1_15 = 25.75;
double var_1_16 = 0.4;
double var_1_17 = 0.0;
double var_1_18 = 0.0;
double var_1_19 = 1000000000000.5;
double var_1_20 = 24.8;
signed char var_1_21 = 1;
double var_1_22 = 200.8;
unsigned short int var_1_23 = 40076;
unsigned short int var_1_24 = 8;
unsigned long int var_1_25 = 2;
unsigned char var_1_26 = 0;
signed short int var_1_27 = -256;
signed short int var_1_28 = 64;
signed long int var_1_29 = -10;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
float var_1_33 = 10.775;
signed long int var_1_34 = -25;
signed long int var_1_35 = -2;
float var_1_36 = 9999.1;
float var_1_37 = 64.625;
float var_1_38 = 7.5;
float var_1_39 = 4.3;
float var_1_40 = 256.75;
float var_1_41 = 499.5;
signed long int var_1_42 = 128;
float var_1_43 = 9.486;
float var_1_44 = 999.5;
signed long int var_1_45 = 0;
signed long int var_1_46 = -4;
signed long int var_1_47 = 2;
signed long int var_1_48 = 8;
unsigned short int var_1_49 = 128;
unsigned short int var_1_50 = 16;
float var_1_51 = 24.25;
signed char var_1_52 = -2;
signed long int var_1_53 = 8;
float var_1_54 = 32.75;
float var_1_55 = 1.625;
signed short int var_1_56 = 64;
signed short int var_1_57 = 32;
unsigned long int var_1_58 = 64;
unsigned char var_1_59 = 64;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 50;
signed char var_1_62 = -50;
signed char var_1_63 = -64;
unsigned long int var_1_64 = 256;
float var_1_65 = 25.5;
unsigned long int var_1_66 = 3754822620;
unsigned long int var_1_67 = 3811325043;
signed short int var_1_68 = -8;
unsigned char var_1_69 = 1;
signed long int var_1_70 = 1;
signed long int var_1_71 = 8;
unsigned char var_1_72 = 10;
unsigned long int var_1_73 = 16;
unsigned short int var_1_74 = 32;
double var_1_75 = 63.6;
signed short int var_1_76 = 256;
double var_1_77 = 8.7;
unsigned long int var_1_78 = 25;
signed short int var_1_79 = -50;
float var_1_80 = 5.75;
double var_1_81 = 9999999999.8;
float var_1_82 = 2.8;
float var_1_83 = 0.0;
float var_1_84 = 31.25;
float var_1_85 = 9.2;
float var_1_86 = 99.5;
unsigned long int var_1_87 = 0;
unsigned char var_1_88 = 1;
unsigned char var_1_89 = 0;
unsigned char var_1_90 = 1;
unsigned char var_1_91 = 1;
unsigned char var_1_92 = 1;
unsigned char var_1_93 = 0;
unsigned short int var_1_94 = 5;
float var_1_95 = 10000000.6;
unsigned short int var_1_96 = 16;
unsigned short int var_1_97 = 32;
unsigned short int var_1_98 = 50454;
unsigned long int var_1_99 = 50;
float var_1_100 = 3.5;
unsigned long int var_1_101 = 5;
unsigned long int var_1_102 = 5;
unsigned long int var_1_103 = 1302070759;
signed char var_1_104 = -1;
signed long int var_1_105 = 8;
signed char var_1_106 = 25;
signed short int var_1_107 = -1;
float var_1_108 = 64.75;
unsigned long int var_1_109 = 2253304275;
float var_1_110 = 31.25;
signed long int var_1_111 = -5;
unsigned long int var_1_112 = 16;
unsigned char var_1_113 = 0;
unsigned long int var_1_114 = 50;
float var_1_115 = 16.75;
unsigned char var_1_116 = 8;
double var_1_117 = 16.4;
double var_1_118 = 0.0;
unsigned long int var_1_119 = 16;
unsigned long int var_1_120 = 4;
unsigned char var_1_121 = 0;
signed long int var_1_122 = 0;
signed long int var_1_123 = -50;
unsigned long int var_1_124 = 1;
signed long int var_1_125 = 0;
signed char var_1_126 = -25;
signed short int var_1_127 = -2;
unsigned short int var_1_128 = 5;
unsigned short int var_1_129 = 2;
unsigned long int var_1_130 = 8;
signed char var_1_131 = -10;
unsigned char var_1_132 = 4;
unsigned char var_1_133 = 0;
signed short int var_1_134 = -128;
signed char var_1_135 = 8;
signed char var_1_136 = 16;
signed long int var_1_137 = 8;
signed long int var_1_138 = -10;
double var_1_139 = 2.5;
signed char var_1_140 = -32;
unsigned short int var_1_141 = 4;
unsigned char var_1_142 = 0;
unsigned char var_1_143 = 16;
unsigned char var_1_144 = 1;
unsigned long int var_1_145 = 2;
signed long int var_1_146 = -256;
signed short int var_1_147 = -5;
signed short int var_1_148 = 32;
unsigned short int var_1_149 = 16;
unsigned long int var_1_150 = 1;
signed long int var_1_151 = -8;
float var_1_152 = 3.75;
float var_1_153 = -0.5;
double var_1_154 = 8.8;

// Calibration values

// Last'ed variables
double last_1_var_1_22 = 200.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_27 % var_1_28) >= var_1_29) {
		var_1_26 = (var_1_30 || var_1_31);
	} else {
		var_1_26 = (var_1_30 && (var_1_31 && var_1_32));
	}


	// From: CodeObject2
	if ((var_1_27 ^ (var_1_28 + var_1_29)) <= (abs (min (var_1_34 , var_1_35)))) {
		var_1_33 = (abs (min ((min (var_1_36 , var_1_37)) , var_1_38)));
	} else {
		if (var_1_38 >= (max (var_1_37 , (var_1_36 * var_1_39)))) {
			if ((8 | (min (var_1_29 , var_1_28))) <= var_1_27) {
				var_1_33 = ((min (15.75f , var_1_40)) + var_1_41);
			}
		}
	}


	// From: CodeObject3
	if (var_1_36 >= (var_1_43 - var_1_44)) {
		if ((max (var_1_29 , (var_1_34 ^ var_1_27))) >= ((var_1_35 & var_1_28) ^ var_1_45)) {
			if ((var_1_29 | var_1_27) <= (var_1_28 / var_1_46)) {
				var_1_42 = (25 - (var_1_47 + (abs (var_1_28))));
			}
		} else {
			var_1_42 = (min ((min (50 , var_1_28)) , (max ((min (var_1_47 , var_1_27)) , var_1_48))));
		}
	} else {
		var_1_42 = var_1_48;
	}


	// From: CodeObject4
	if (var_1_26) {
		var_1_49 = (abs (abs (var_1_50)));
	}


	// From: CodeObject5
	if ((var_1_42 / (abs (var_1_52))) > var_1_47) {
		if (var_1_46 <= var_1_53) {
			var_1_51 = (max (var_1_36 , (var_1_54 - var_1_55)));
		}
	} else {
		if (var_1_54 <= 63.6f) {
			if ((max ((abs (var_1_50)) , var_1_29)) >= (abs (abs (var_1_34)))) {
				if (var_1_26) {
					var_1_51 = var_1_36;
				}
			} else {
				var_1_51 = -0.05f;
			}
		}
	}


	// From: CodeObject6
	if ((var_1_50 * var_1_53) >= 1000000) {
		var_1_56 = (max (var_1_52 , var_1_57));
	}


	// From: CodeObject7
	if ((10 < var_1_27) || ((- var_1_53) >= (var_1_50 - var_1_47))) {
		if ((- (max (var_1_40 , var_1_39))) < var_1_44) {
			if (var_1_41 > var_1_37) {
				var_1_58 = (abs (abs (var_1_47)));
			} else {
				var_1_58 = (abs (var_1_47));
			}
		}
	}


	// From: CodeObject8
	if ((var_1_49 >= var_1_29) || var_1_26) {
		var_1_59 = (abs (var_1_60));
	} else {
		if (var_1_39 <= var_1_51) {
			if (var_1_40 < var_1_44) {
				var_1_59 = var_1_60;
			} else {
				var_1_59 = var_1_60;
			}
		} else {
			var_1_59 = (min (var_1_60 , var_1_61));
		}
	}


	// From: CodeObject9
	if (var_1_61 >= (min (25 , (128 & var_1_56)))) {
		var_1_62 = var_1_63;
	}


	// From: CodeObject10
	if (var_1_40 < (max (var_1_44 , var_1_65))) {
		if ((abs (var_1_52)) <= var_1_62) {
			var_1_64 = (abs (var_1_47));
		} else {
			if (var_1_31) {
				var_1_64 = ((min (var_1_66 , var_1_67)) - (min (var_1_61 , var_1_47)));
			}
		}
	} else {
		if ((var_1_58 >> var_1_28) <= var_1_59) {
			var_1_64 = 2u;
		}
	}


	// From: CodeObject11
	if ((- var_1_54) > var_1_65) {
		if ((abs (var_1_49)) != ((var_1_34 ^ var_1_64) * var_1_50)) {
			var_1_68 = (abs (var_1_52));
		} else {
			if ((var_1_56 >> var_1_58) < var_1_29) {
				var_1_68 = (abs (var_1_63));
			} else {
				var_1_68 = (max (var_1_62 , ((min (var_1_61 , var_1_63)) + var_1_52)));
			}
		}
	}


	// From: CodeObject12
	if (var_1_39 >= var_1_43) {
		if (((abs (var_1_27)) << (var_1_70 + var_1_71)) > (min (var_1_64 , (~ var_1_47)))) {
			var_1_69 = (var_1_30 || var_1_31);
		} else {
			var_1_69 = 1;
		}
	}


	// From: CodeObject13
	if (var_1_69) {
		if (var_1_32) {
			if ((var_1_57 * var_1_63) <= var_1_28) {
				var_1_72 = var_1_61;
			} else {
				var_1_72 = (abs (var_1_70));
			}
		}
	}


	// From: CodeObject14
	if ((var_1_66 + var_1_47) > var_1_50) {
		var_1_73 = (abs (var_1_66 - 32u));
	} else {
		var_1_73 = (min (var_1_49 , var_1_67));
	}


	// From: CodeObject15
	if ((var_1_68 >> var_1_57) > var_1_49) {
		var_1_74 = (abs (var_1_59));
	}


	// From: CodeObject16
	if (var_1_74 != var_1_49) {
		var_1_75 = (abs (abs (var_1_37)));
	}


	// From: CodeObject17
	var_1_76 = (abs (var_1_63));


	// From: CodeObject18
	if ((abs (var_1_52)) > (var_1_28 / var_1_46)) {
		var_1_77 = (max ((abs (var_1_36)) , var_1_55));
	}


	// From: CodeObject19
	if (var_1_31) {
		if ((abs (var_1_45 ^ var_1_34)) <= var_1_63) {
			var_1_78 = (abs (min (var_1_47 , (abs (var_1_50)))));
		} else {
			var_1_78 = (min (var_1_61 , var_1_70));
		}
	}


	// From: CodeObject20
	var_1_79 = (abs (var_1_71));


	// From: CodeObject21
	if (! (! var_1_30)) {
		if (var_1_81 <= var_1_38) {
			var_1_80 = (abs (var_1_55));
		} else {
			if (var_1_55 >= (var_1_54 / var_1_82)) {
				var_1_80 = ((8.2f - (var_1_83 - var_1_84)) + (var_1_85 - var_1_86));
			}
		}
	}


	// From: CodeObject22
	if (var_1_69) {
		var_1_87 = (max (var_1_72 , (max ((abs (var_1_50)) , var_1_71))));
	}


	// From: CodeObject23
	if (var_1_32) {
		var_1_88 = (! var_1_89);
	} else {
		var_1_88 = (! var_1_31);
	}


	// From: CodeObject24
	if (255.9f >= (abs (abs (var_1_85)))) {
		var_1_90 = ((var_1_31 && (var_1_91 && var_1_92)) && var_1_93);
	}


	// From: CodeObject25
	if (var_1_66 > 500u) {
		if ((abs (var_1_65 * var_1_95)) > var_1_43) {
			var_1_94 = (max (var_1_70 , var_1_60));
		} else {
			var_1_94 = var_1_61;
		}
	}


	// From: CodeObject26
	if ((16 / var_1_28) == 5) {
		var_1_96 = (max (var_1_72 , (var_1_60 + var_1_71)));
	}


	// From: CodeObject27
	if (4 > var_1_60) {
		var_1_97 = var_1_71;
	} else {
		var_1_97 = (var_1_98 - (max (var_1_60 , (abs (var_1_71)))));
	}


	// From: CodeObject28
	if (var_1_97 > (abs (var_1_78 * var_1_58))) {
		if (var_1_89) {
			var_1_99 = ((abs (var_1_66)) - (abs (var_1_72 + var_1_74)));
		} else {
			var_1_99 = (abs (var_1_49));
		}
	}


	// From: CodeObject29
	if (var_1_43 >= (abs (var_1_75))) {
		var_1_100 = ((abs (var_1_84)) + var_1_86);
	} else {
		var_1_100 = ((var_1_86 - 1.000000045E7f) + var_1_85);
	}


	// From: CodeObject30
	if (var_1_66 < var_1_50) {
		var_1_101 = (var_1_102 + var_1_97);
	} else {
		if (var_1_76 < var_1_71) {
			var_1_101 = (abs (var_1_59));
		} else {
			var_1_101 = ((min (var_1_96 , var_1_97)) + (var_1_103 - var_1_47));
		}
	}


	// From: CodeObject31
	if (var_1_32) {
		var_1_104 = var_1_70;
	}


	// From: CodeObject32
	if (var_1_31 && var_1_91) {
		var_1_105 = ((abs (var_1_96)) - var_1_49);
	}


	// From: CodeObject33
	if (var_1_50 == (abs (var_1_98))) {
		var_1_106 = (min (var_1_63 , var_1_71));
	}


	// From: CodeObject34
	var_1_107 = (abs (var_1_61));


	// From: CodeObject35
	if ((var_1_65 / var_1_83) >= ((- var_1_75) / 128.5f)) {
		if (var_1_81 <= (abs (var_1_33))) {
			var_1_108 = (max (var_1_40 , var_1_38));
		} else {
			var_1_108 = (abs (var_1_83));
		}
	} else {
		if (var_1_26) {
			if ((var_1_109 - (var_1_103 - var_1_72)) > 16u) {
				if (((var_1_105 | var_1_27) & var_1_58) >= (var_1_87 >> var_1_53)) {
					var_1_108 = var_1_54;
				}
			} else {
				var_1_108 = (max ((abs (max (64.55f , var_1_54))) , (var_1_83 + var_1_41)));
			}
		} else {
			if (((var_1_71 % var_1_46) | (var_1_105 ^ var_1_76)) > (var_1_61 + var_1_73)) {
				var_1_108 = (7.6f + var_1_83);
			} else {
				var_1_108 = (abs (abs (var_1_37)));
			}
		}
	}


	// From: CodeObject36
	if (var_1_65 > 9999999.8f) {
		if ((var_1_84 - var_1_86) <= var_1_33) {
			var_1_110 = var_1_85;
		} else {
			var_1_110 = (abs (var_1_84));
		}
	}


	// From: CodeObject37
	var_1_111 = (abs (var_1_68));


	// From: CodeObject38
	var_1_112 = (abs (var_1_50));


	// From: CodeObject39
	if (((var_1_112 % 5u) + var_1_114) < var_1_97) {
		var_1_113 = var_1_89;
	}


	// From: CodeObject40
	if (var_1_116 < (var_1_102 + var_1_109)) {
		var_1_115 = ((max (var_1_86 , 64.5f)) + (abs (var_1_40)));
	} else {
		var_1_115 = (abs (var_1_36));
	}


	// From: CodeObject41
	if ((abs (var_1_71)) < var_1_45) {
		var_1_117 = ((max (var_1_86 , var_1_85)) - (var_1_118 - var_1_84));
	} else {
		var_1_117 = (abs (var_1_55));
	}


	// From: CodeObject42
	if (var_1_31) {
		var_1_119 = (min (var_1_120 , (abs (var_1_50))));
	}


	// From: CodeObject43
	if (((var_1_96 | var_1_98) | (max (var_1_47 , var_1_73))) < (max ((var_1_102 >> var_1_122) , 64u))) {
		var_1_121 = (((! var_1_91) || (! var_1_92)) || var_1_32);
	}


	// From: CodeObject44
	if (var_1_74 <= (abs (var_1_102))) {
		var_1_123 = (max ((max (var_1_71 , (min (var_1_97 , var_1_47)))) , var_1_107));
	} else {
		if (((var_1_122 | var_1_106) >> var_1_71) >= (var_1_47 << (abs (var_1_124)))) {
			var_1_123 = (abs (var_1_125));
		} else {
			var_1_123 = var_1_97;
		}
	}


	// From: CodeObject45
	if ((var_1_42 % (max (var_1_52 , -128))) == (var_1_98 - var_1_122)) {
		if (var_1_93) {
			var_1_126 = (min (var_1_71 , var_1_70));
		}
	} else {
		var_1_126 = var_1_63;
	}


	// From: CodeObject46
	if (var_1_69) {
		var_1_127 = (var_1_122 - (var_1_124 + var_1_72));
	} else {
		var_1_127 = var_1_57;
	}


	// From: CodeObject47
	if ((abs (abs (var_1_71))) > var_1_35) {
		var_1_128 = (var_1_98 - (abs (var_1_124 + var_1_59)));
	} else {
		var_1_128 = (max (var_1_122 , var_1_70));
	}


	// From: CodeObject48
	if (((min (var_1_103 , var_1_99)) + (var_1_124 / var_1_98)) >= ((var_1_47 | var_1_97) % 10u)) {
		var_1_129 = (max ((max ((max (var_1_50 , var_1_61)) , var_1_60)) , var_1_116));
	} else {
		if (64u < var_1_109) {
			var_1_129 = var_1_61;
		} else {
			var_1_129 = var_1_61;
		}
	}


	// From: CodeObject49
	if (var_1_88) {
		var_1_130 = var_1_129;
	}


	// From: CodeObject50
	if (var_1_92) {
		var_1_131 = var_1_124;
	} else {
		var_1_131 = var_1_122;
	}


	// From: CodeObject51
	if (var_1_133) {
		var_1_132 = var_1_124;
	}


	// From: CodeObject52
	var_1_134 = var_1_104;


	// From: CodeObject53
	if (var_1_90) {
		var_1_135 = var_1_136;
	}


	// From: CodeObject54
	if (var_1_89) {
		var_1_137 = var_1_135;
	} else {
		var_1_137 = var_1_106;
	}


	// From: CodeObject55
	if (var_1_89) {
		var_1_138 = var_1_116;
	}


	// From: CodeObject56
	var_1_139 = var_1_36;


	// From: CodeObject57
	if (var_1_91) {
		var_1_140 = var_1_136;
	} else {
		var_1_140 = var_1_136;
	}


	// From: CodeObject58
	if (var_1_31) {
		var_1_141 = var_1_50;
	}


	// From: CodeObject59
	var_1_142 = var_1_124;


	// From: CodeObject60
	var_1_143 = var_1_60;


	// From: CodeObject61
	var_1_144 = var_1_89;


	// From: CodeObject62
	if (var_1_89) {
		var_1_145 = var_1_94;
	}


	// From: CodeObject63
	var_1_146 = var_1_141;


	// From: CodeObject64
	if (var_1_92) {
		var_1_147 = var_1_148;
	}


	// From: CodeObject65
	if (var_1_91) {
		var_1_149 = var_1_70;
	} else {
		var_1_149 = var_1_70;
	}


	// From: CodeObject66
	if (var_1_80 <= var_1_75) {
		var_1_150 = (abs (min (var_1_102 , 0u)));
	}


	// From: CodeObject67
	if (var_1_32) {
		var_1_151 = var_1_56;
	}


	// From: CodeObject68
	var_1_152 = var_1_153;


	// From: CodeObject69
	var_1_154 = var_1_86;


	// From: Req3Batch75PS_CN_500
	if (! (var_1_4 < 16.8f)) {
		var_1_15 = var_1_6;
	}


	// From: Req7Batch75PS_CN_500
	var_1_25 = var_1_23;


	// From: Req2Batch75PS_CN_500
	if ((min ((var_1_25 + var_1_25) , (4 | var_1_25))) >= var_1_25) {
		var_1_7 = ((var_1_11 && var_1_12) && var_1_13);
	} else {
		if (var_1_6 == var_1_15) {
			var_1_7 = var_1_14;
		} else {
			var_1_7 = var_1_13;
		}
	}


	// From: Req4Batch75PS_CN_500
	if (var_1_25 > var_1_25) {
		var_1_16 = (((min (var_1_17 , var_1_18)) - var_1_19) - var_1_20);
	} else {
		if (var_1_18 > (var_1_20 + (var_1_19 * var_1_17))) {
			var_1_16 = var_1_6;
		} else {
			var_1_16 = var_1_20;
		}
	}


	// From: Req6Batch75PS_CN_500
	unsigned long int stepLocal_1 = var_1_25;
	if (var_1_18 < (last_1_var_1_22 * var_1_4)) {
		if ((var_1_23 - var_1_24) < stepLocal_1) {
			var_1_22 = var_1_5;
		} else {
			var_1_22 = var_1_17;
		}
	} else {
		var_1_22 = var_1_20;
	}


	// From: Req1Batch75PS_CN_500
	unsigned char stepLocal_0 = -1 <= var_1_25;
	if (stepLocal_0 || var_1_7) {
		var_1_1 = (var_1_4 + (var_1_5 + var_1_6));
	}


	// From: Req5Batch75PS_CN_500
	if ((- (var_1_17 + var_1_1)) >= var_1_16) {
		var_1_21 = (abs (-50));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -230584.3009213691390e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691390e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -230584.3009213691390e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691390e+12F && var_1_6 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 4611686.018427382800e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 4611686.018427382800e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 32767);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32768);
	assume_abort_if_not(var_1_27 <= 32767);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32768);
	assume_abort_if_not(var_1_28 <= 32767);
	assume_abort_if_not(var_1_28 != 0);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483647);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483647);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854765600e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -461168.6018427382800e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -461168.6018427382800e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= -2147483648);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= -2147483648);
	assume_abort_if_not(var_1_46 <= 2147483647);
	assume_abort_if_not(var_1_46 != 0);
	var_1_47 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 1073741823);
	var_1_48 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_48 >= -2147483647);
	assume_abort_if_not(var_1_48 <= 2147483646);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 65534);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -127);
	assume_abort_if_not(var_1_52 <= 127);
	assume_abort_if_not(var_1_52 != 0);
	var_1_53 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_53 >= -2147483648);
	assume_abort_if_not(var_1_53 <= 2147483647);
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854765600e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854765600e+12F && var_1_55 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_57 >= -32767);
	assume_abort_if_not(var_1_57 <= 32766);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 254);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 254);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= -127);
	assume_abort_if_not(var_1_63 <= 126);
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= -922337.2036854776000e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854776000e+12F && var_1_65 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_66 >= 2147483647);
	assume_abort_if_not(var_1_66 <= 4294967294);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 2147483647);
	assume_abort_if_not(var_1_67 <= 4294967294);
	var_1_70 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 8);
	var_1_71 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 8);
	var_1_81 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_81 >= -922337.2036854776000e+13F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 9223372.036854776000e+12F && var_1_81 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_82 >= -922337.2036854776000e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 9223372.036854776000e+12F && var_1_82 >= 1.0e-20F ));
	assume_abort_if_not(var_1_82 != 0.0F);
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= 2305843.009213691390e+12F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 4611686.018427382800e+12F && var_1_83 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= 0.0F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 2305843.009213691390e+12F && var_1_84 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 4611686.018427382800e+12F && var_1_85 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_86 >= 0.0F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 4611686.018427382800e+12F && var_1_86 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 0);
	assume_abort_if_not(var_1_89 <= 0);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 1);
	assume_abort_if_not(var_1_91 <= 1);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 1);
	assume_abort_if_not(var_1_92 <= 1);
	var_1_93 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_93 >= 1);
	assume_abort_if_not(var_1_93 <= 1);
	var_1_95 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_95 >= -922337.2036854776000e+13F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 9223372.036854776000e+12F && var_1_95 >= 1.0e-20F ));
	var_1_98 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_98 >= 32767);
	assume_abort_if_not(var_1_98 <= 65534);
	var_1_102 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_102 >= 0);
	assume_abort_if_not(var_1_102 <= 2147483647);
	var_1_103 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_103 >= 1073741823);
	assume_abort_if_not(var_1_103 <= 2147483647);
	var_1_109 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_109 >= 2147483647);
	assume_abort_if_not(var_1_109 <= 4294967295);
	var_1_114 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_114 >= 0);
	assume_abort_if_not(var_1_114 <= 4294967295);
	var_1_116 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_116 >= 0);
	assume_abort_if_not(var_1_116 <= 255);
	var_1_118 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_118 >= 4611686.018427382800e+12F && var_1_118 <= -1.0e-20F) || (var_1_118 <= 9223372.036854765600e+12F && var_1_118 >= 1.0e-20F ));
	var_1_120 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_120 >= 0);
	assume_abort_if_not(var_1_120 <= 4294967294);
	var_1_122 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_122 >= 0);
	assume_abort_if_not(var_1_122 <= 33);
	var_1_124 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_124 >= 0);
	assume_abort_if_not(var_1_124 <= 1);
	var_1_125 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_125 >= -2147483646);
	assume_abort_if_not(var_1_125 <= 2147483646);
	var_1_133 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_133 >= 0);
	assume_abort_if_not(var_1_133 <= 1);
	var_1_136 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_136 >= -127);
	assume_abort_if_not(var_1_136 <= 126);
	var_1_148 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_148 >= -32767);
	assume_abort_if_not(var_1_148 <= 32766);
	var_1_153 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_153 >= -922337.2036854765600e+13F && var_1_153 <= -1.0e-20F) || (var_1_153 <= 9223372.036854765600e+12F && var_1_153 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_22 = var_1_22;
}

int property() {
	return ((((((((-1 <= var_1_25) || var_1_7) ? (var_1_1 == ((float) (var_1_4 + (var_1_5 + var_1_6)))) : 1) && (((min ((var_1_25 + var_1_25) , (4 | var_1_25))) >= var_1_25) ? (var_1_7 == ((unsigned char) ((var_1_11 && var_1_12) && var_1_13))) : ((var_1_6 == var_1_15) ? (var_1_7 == ((unsigned char) var_1_14)) : (var_1_7 == ((unsigned char) var_1_13))))) && ((! (var_1_4 < 16.8f)) ? (var_1_15 == ((float) var_1_6)) : 1)) && ((var_1_25 > var_1_25) ? (var_1_16 == ((double) (((min (var_1_17 , var_1_18)) - var_1_19) - var_1_20))) : ((var_1_18 > (var_1_20 + (var_1_19 * var_1_17))) ? (var_1_16 == ((double) var_1_6)) : (var_1_16 == ((double) var_1_20))))) && (((- (var_1_17 + var_1_1)) >= var_1_16) ? (var_1_21 == ((signed char) (abs (-50)))) : 1)) && ((var_1_18 < (last_1_var_1_22 * var_1_4)) ? (((var_1_23 - var_1_24) < var_1_25) ? (var_1_22 == ((double) var_1_5)) : (var_1_22 == ((double) var_1_17))) : (var_1_22 == ((double) var_1_20)))) && (var_1_25 == ((unsigned long int) var_1_23))
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
