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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch8PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 999999999.675;
signed long int var_1_4 = -5;
float var_1_5 = 7.875;
float var_1_6 = 99.04;
signed long int var_1_7 = -2;
unsigned long int var_1_9 = 1;
double var_1_10 = 63.25;
unsigned char var_1_11 = 0;
unsigned short int var_1_13 = 0;
unsigned short int var_1_15 = 17766;
unsigned short int var_1_16 = 28149;
unsigned char var_1_19 = 4;
unsigned char var_1_20 = 50;
unsigned char var_1_21 = 64;
unsigned char var_1_22 = 50;
unsigned char var_1_23 = 5;
unsigned char var_1_24 = 128;
signed long int var_1_25 = -16;
unsigned char var_1_26 = 0;
signed short int var_1_27 = -4;
signed short int var_1_28 = -1;
signed short int var_1_29 = -5;
signed short int var_1_30 = 2;
unsigned char var_1_31 = 1;
signed short int var_1_32 = -256;
unsigned short int var_1_33 = 2;
unsigned short int var_1_34 = 32;
unsigned short int var_1_35 = 25;
signed long int var_1_36 = -1;
unsigned short int var_1_37 = 10;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
signed long int var_1_42 = 4;
signed long int var_1_43 = -2;
signed char var_1_44 = 8;
double var_1_45 = 8.6;
double var_1_46 = 100000000000.2;
double var_1_47 = -0.7;
signed char var_1_48 = 64;
signed char var_1_49 = 0;
signed char var_1_50 = 16;
unsigned char var_1_51 = 32;
signed long int var_1_52 = 256;
signed long int var_1_53 = -1;
signed char var_1_54 = 64;
signed char var_1_55 = -5;
signed char var_1_56 = -2;
signed char var_1_57 = 5;
signed char var_1_58 = 100;
signed char var_1_59 = 16;
signed char var_1_60 = 4;
unsigned long int var_1_61 = 128;
signed char var_1_62 = -64;
unsigned short int var_1_63 = 128;
double var_1_64 = 0.4;
unsigned short int var_1_65 = 5;
signed long int var_1_66 = 128;
signed long int var_1_67 = -64;
double var_1_68 = 16.4;
signed long int var_1_69 = 256;
double var_1_70 = 8.625;
unsigned char var_1_71 = 1;
signed char var_1_72 = -32;
signed char var_1_73 = 2;
double var_1_74 = 63.5;
signed long int var_1_75 = 5;
double var_1_76 = 10.5;
double var_1_77 = 4.6;
double var_1_78 = 5.25;
double var_1_79 = 499.4;
unsigned short int var_1_80 = 16;
float var_1_81 = 127.5;
float var_1_82 = 32.2;
unsigned char var_1_83 = 5;
double var_1_84 = 64.8;
unsigned short int var_1_85 = 16;
unsigned short int var_1_86 = 37649;
unsigned short int var_1_87 = 55265;
unsigned short int var_1_88 = 32;
signed long int var_1_89 = 2;
unsigned char var_1_90 = 32;
signed char var_1_91 = -16;
signed char var_1_92 = 4;
signed long int var_1_93 = 10;
signed long int var_1_94 = 64;
unsigned char var_1_95 = 128;
unsigned char var_1_96 = 0;
float var_1_97 = 15.875;
float var_1_98 = 0.75;
unsigned long int var_1_99 = 10;
double var_1_100 = 31.5;
double var_1_101 = 8.2;
unsigned short int var_1_102 = 2;
signed short int var_1_103 = 1;
signed short int var_1_104 = 2;
double var_1_105 = 1000000000.5;
unsigned long int var_1_106 = 3512448721;
unsigned char var_1_107 = 8;
unsigned short int var_1_108 = 5;
unsigned short int var_1_109 = 4;
unsigned short int var_1_110 = 8;
unsigned char var_1_111 = 1;
unsigned char var_1_112 = 0;
unsigned char var_1_113 = 0;
unsigned char var_1_114 = 0;
unsigned char var_1_115 = 0;
unsigned char var_1_116 = 0;
unsigned char var_1_117 = 128;
signed short int var_1_118 = -128;
float var_1_119 = 7.5;
float var_1_120 = 16.5;
float var_1_121 = 24.6;
float var_1_122 = 10.25;
signed char var_1_123 = -64;
signed char var_1_124 = -8;
signed char var_1_125 = -4;
unsigned char var_1_126 = 5;
unsigned long int var_1_127 = 0;
unsigned short int var_1_128 = 10;
unsigned char var_1_129 = 0;
unsigned char var_1_130 = 1;
signed long int var_1_131 = 500;
unsigned char var_1_132 = 1;
signed long int var_1_133 = 10;
signed short int var_1_134 = -25;
double var_1_135 = 1.8;
float var_1_136 = 9.5;
unsigned short int var_1_137 = 2;
unsigned char var_1_138 = 0;
unsigned short int var_1_139 = 100;
signed long int var_1_140 = -256;
signed short int var_1_141 = -200;
double var_1_142 = 64.75;
unsigned long int var_1_143 = 100;
signed char var_1_144 = 32;
unsigned char var_1_145 = 25;
signed long int var_1_146 = 5;
double var_1_147 = 128.5;
unsigned char var_1_148 = 1;
signed short int var_1_149 = -16;
signed char var_1_150 = 10;
unsigned char var_1_151 = 1;
signed char var_1_152 = 1;
unsigned char var_1_153 = 1;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_13 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_28 != (var_1_29 + var_1_30)) {
		if (var_1_31) {
			var_1_27 = (abs (var_1_32));
		}
	} else {
		var_1_27 = var_1_32;
	}


	// From: CodeObject2
	if (var_1_31) {
		var_1_33 = (max (var_1_34 , var_1_35));
	}


	// From: CodeObject3
	if (16 < var_1_27) {
		if (var_1_34 <= var_1_37) {
			if (var_1_35 < ((var_1_33 + var_1_34) ^ var_1_27)) {
				var_1_36 = (abs (var_1_29));
			}
		}
	}


	// From: CodeObject4
	if (var_1_30 > var_1_27) {
		var_1_38 = (var_1_39 && (var_1_40 && var_1_41));
	} else {
		if ((~ var_1_36) >= ((var_1_29 % var_1_42) / var_1_43)) {
			if (var_1_39 && var_1_40) {
				var_1_38 = (! var_1_41);
			} else {
				var_1_38 = (! var_1_41);
			}
		}
	}


	// From: CodeObject5
	if ((5.2 / var_1_45) <= (abs (var_1_46 * var_1_47))) {
		var_1_44 = (abs (var_1_48));
	} else {
		var_1_44 = (var_1_49 - var_1_50);
	}


	// From: CodeObject6
	if (var_1_40) {
		var_1_51 = 50;
	}


	// From: CodeObject7
	if (var_1_42 >= (~ (var_1_50 + var_1_36))) {
		if (var_1_31) {
			if (5u < var_1_43) {
				var_1_52 = (max (var_1_53 , var_1_33));
			}
		} else {
			if (var_1_29 <= -64) {
				if (var_1_53 >= var_1_51) {
					var_1_52 = (abs (max (var_1_35 , var_1_30)));
				}
			}
		}
	} else {
		var_1_52 = ((var_1_35 - (abs (var_1_32))) + var_1_37);
	}


	// From: CodeObject8
	if (var_1_40) {
		var_1_54 = (min ((min (var_1_50 , (abs (var_1_48)))) , var_1_49));
	}


	// From: CodeObject9
	if ((var_1_44 | var_1_48) < var_1_37) {
		var_1_55 = (min ((abs (var_1_56 + var_1_57)) , (abs (var_1_48))));
	} else {
		var_1_55 = ((abs (min (var_1_48 , var_1_57))) - ((var_1_58 - var_1_59) - var_1_60));
	}


	// From: CodeObject10
	if (var_1_48 != (var_1_57 + var_1_59)) {
		var_1_61 = (var_1_50 + var_1_33);
	}


	// From: CodeObject11
	if (64u <= var_1_35) {
		if ((~ var_1_48) <= (abs (-32))) {
			var_1_62 = (abs (var_1_57));
		} else {
			var_1_62 = (abs (var_1_49));
		}
	} else {
		if (var_1_27 < var_1_57) {
			var_1_62 = (max ((abs (var_1_49)) , 64));
		} else {
			var_1_62 = (max ((var_1_59 - var_1_58) , var_1_50));
		}
	}


	// From: CodeObject12
	if (var_1_45 < (abs (var_1_47))) {
		if (((max (var_1_47 , var_1_64)) / (abs (var_1_45))) > var_1_46) {
			var_1_63 = var_1_65;
		} else {
			var_1_63 = (max ((abs (min (1 , var_1_60))) , var_1_59));
		}
	}


	// From: CodeObject13
	if (var_1_38) {
		if (var_1_51 > 2) {
			var_1_66 = (abs (max ((abs (var_1_27)) , var_1_62)));
		} else {
			if (var_1_64 < var_1_46) {
				var_1_66 = var_1_60;
			}
		}
	} else {
		var_1_66 = var_1_67;
	}


	// From: CodeObject14
	if ((min (var_1_48 , var_1_44)) >= (min (var_1_58 , (max (var_1_67 , var_1_69))))) {
		if (var_1_28 >= (min (var_1_50 , var_1_36))) {
			if (! var_1_38) {
				var_1_68 = (abs (var_1_70));
			}
		}
	}


	// From: CodeObject15
	if (var_1_31 || var_1_40) {
		var_1_71 = ((min (var_1_50 , (var_1_59 + var_1_60))) + var_1_58);
	} else {
		var_1_71 = (var_1_60 + 10);
	}


	// From: CodeObject16
	if ((var_1_65 | 32) < (abs (abs (var_1_63)))) {
		if (var_1_42 >= (abs (var_1_65))) {
			var_1_72 = ((var_1_58 - var_1_60) - (max (64 , var_1_50)));
		} else {
			var_1_72 = (var_1_56 + -1);
		}
	} else {
		var_1_72 = (max (var_1_49 , (max ((var_1_60 + var_1_57) , var_1_73))));
	}


	// From: CodeObject17
	if ((- var_1_71) <= ((256 ^ var_1_75) + (var_1_57 & var_1_55))) {
		var_1_74 = ((min ((abs (var_1_76)) , var_1_77)) + (max (var_1_78 , var_1_79)));
	}


	// From: CodeObject18
	if (var_1_66 >= var_1_50) {
		if (((var_1_65 ^ 50) < var_1_27) && var_1_31) {
			var_1_80 = ((max (var_1_58 , (31931 - var_1_60))) + (min (var_1_71 , (min (var_1_50 , var_1_59)))));
		} else {
			var_1_80 = (min (var_1_60 , ((min (var_1_58 , var_1_59)) + var_1_51)));
		}
	} else {
		var_1_80 = (abs (abs (var_1_65)));
	}


	// From: CodeObject19
	if ((max (var_1_65 , var_1_75)) < var_1_49) {
		if (((var_1_30 * var_1_58) % var_1_42) > var_1_67) {
			var_1_81 = (var_1_79 + (max (var_1_82 , var_1_78)));
		}
	}


	// From: CodeObject20
	if ((var_1_37 * var_1_33) == var_1_61) {
		var_1_83 = var_1_59;
	}


	// From: CodeObject21
	if (var_1_34 >= var_1_35) {
		if (var_1_54 < var_1_61) {
			var_1_84 = (abs (min (var_1_79 , var_1_82)));
		}
	}


	// From: CodeObject22
	if (var_1_73 < ((1 / var_1_43) ^ (var_1_27 | var_1_63))) {
		var_1_85 = (44109 - var_1_51);
	} else {
		if ((abs (var_1_32)) <= var_1_52) {
			if (var_1_41) {
				var_1_85 = 10;
			} else {
				var_1_85 = ((min ((abs (var_1_86)) , var_1_87)) - (max (var_1_88 , var_1_71)));
			}
		}
	}


	// From: CodeObject23
	if (var_1_39) {
		var_1_89 = var_1_34;
	}


	// From: CodeObject24
	if (var_1_54 >= var_1_61) {
		var_1_90 = (max (var_1_58 , (abs (128))));
	}


	// From: CodeObject25
	if (var_1_38) {
		if (var_1_42 <= var_1_67) {
			var_1_91 = (abs ((var_1_59 + var_1_92) + var_1_57));
		}
	}


	// From: CodeObject26
	if (var_1_41) {
		var_1_93 = (min ((max ((abs (var_1_94)) , var_1_34)) , var_1_57));
	}


	// From: CodeObject27
	if (var_1_93 != ((var_1_88 % var_1_86) ^ var_1_75)) {
		var_1_95 = (min (var_1_50 , var_1_60));
	} else {
		var_1_95 = (max (var_1_58 , (abs (var_1_96))));
	}


	// From: CodeObject28
	if ((~ var_1_43) > var_1_89) {
		var_1_97 = (abs (abs (var_1_70)));
	} else {
		if (var_1_68 < var_1_78) {
			var_1_97 = ((9.99999999935E9f + (31.675f + var_1_98)) + (abs (var_1_79)));
		} else {
			var_1_97 = (abs (var_1_79));
		}
	}


	// From: CodeObject29
	if (var_1_32 < var_1_53) {
		if (var_1_97 < var_1_45) {
			if (((var_1_45 / var_1_100) / (abs (var_1_101))) >= var_1_77) {
				var_1_99 = (abs (var_1_33));
			} else {
				var_1_99 = ((min (var_1_63 , var_1_87)) + 100000u);
			}
		}
	}


	// From: CodeObject30
	if ((var_1_83 >> (var_1_103 + var_1_104)) <= var_1_80) {
		var_1_102 = (abs (var_1_65));
	}


	// From: CodeObject31
	if ((abs (var_1_93)) > var_1_58) {
		if (var_1_48 >= var_1_58) {
			if ((var_1_106 - var_1_51) > var_1_86) {
				var_1_105 = (min ((max (var_1_70 , var_1_76)) , 9.5));
			} else {
				if (var_1_59 > 4) {
					if (var_1_38 && (var_1_82 >= var_1_81)) {
						var_1_105 = (min (var_1_78 , var_1_82));
					}
				}
			}
		}
	} else {
		var_1_105 = (min (var_1_70 , var_1_77));
	}


	// From: CodeObject32
	if (var_1_61 <= (var_1_33 >> var_1_37)) {
		if ((max (var_1_63 , (var_1_90 ^ var_1_75))) > var_1_104) {
			if (var_1_43 <= (max (var_1_83 , var_1_48))) {
				var_1_107 = (abs (min (var_1_96 , var_1_104)));
			} else {
				var_1_107 = (min (var_1_58 , var_1_59));
			}
		} else {
			var_1_107 = var_1_59;
		}
	}


	// From: CodeObject33
	if ((abs (var_1_104)) > var_1_36) {
		if (var_1_51 <= (var_1_58 + var_1_53)) {
			var_1_108 = ((max (64585 , var_1_87)) - var_1_95);
		}
	} else {
		if (var_1_101 >= var_1_100) {
			if (var_1_105 > 32.75) {
				var_1_108 = var_1_95;
			}
		} else {
			if (var_1_35 < var_1_106) {
				if ((-32 / var_1_42) <= (~ var_1_80)) {
					var_1_108 = (abs (var_1_95));
				}
			} else {
				var_1_108 = (max (var_1_96 , var_1_109));
			}
		}
	}


	// From: CodeObject34
	if (var_1_38 || (var_1_107 == (var_1_58 & var_1_37))) {
		var_1_110 = var_1_65;
	} else {
		if (var_1_107 < var_1_104) {
			var_1_110 = (var_1_86 - (abs (var_1_59)));
		} else {
			var_1_110 = ((abs (var_1_87)) - (abs (var_1_107)));
		}
	}


	// From: CodeObject35
	if (500.5f < var_1_68) {
		var_1_111 = (var_1_112 && ((var_1_113 || var_1_114) || var_1_115));
	}


	// From: CodeObject36
	if ((max (var_1_51 , (10u / var_1_42))) > var_1_58) {
		var_1_116 = var_1_50;
	} else {
		if ((var_1_60 - var_1_103) > (abs (var_1_67))) {
			if (var_1_87 >= var_1_71) {
				var_1_116 = (max ((abs (var_1_50)) , var_1_104));
			}
		} else {
			var_1_116 = (max (var_1_50 , (var_1_117 - var_1_104)));
		}
	}


	// From: CodeObject37
	if (! (var_1_91 > var_1_35)) {
		if ((- var_1_98) != (abs (var_1_78))) {
			if (var_1_111) {
				var_1_118 = (abs (var_1_55));
			} else {
				var_1_118 = (abs (var_1_83));
			}
		}
	}


	// From: CodeObject38
	if (var_1_72 <= -64) {
		var_1_119 = (abs ((max (var_1_120 , var_1_121)) - var_1_122));
	}


	// From: CodeObject39
	var_1_123 = (max (var_1_124 , var_1_50));


	// From: CodeObject40
	var_1_125 = (abs (var_1_48));


	// From: CodeObject41
	if (var_1_90 >= var_1_61) {
		if ((abs (abs (var_1_73))) <= var_1_66) {
			var_1_126 = (var_1_104 + var_1_58);
		}
	}


	// From: CodeObject42
	if (var_1_101 < var_1_78) {
		var_1_127 = var_1_88;
	}


	// From: CodeObject43
	if (var_1_31) {
		if (var_1_98 >= var_1_74) {
			var_1_128 = ((min (var_1_87 , var_1_86)) - var_1_103);
		}
	}


	// From: CodeObject44
	if (100u > (abs (var_1_116))) {
		var_1_129 = var_1_41;
	} else {
		if ((var_1_100 == (- var_1_76)) && var_1_114) {
			var_1_129 = (! var_1_113);
		}
	}


	// From: CodeObject45
	var_1_130 = ((! var_1_114) && var_1_40);


	// From: CodeObject46
	var_1_131 = ((abs (max (var_1_58 , var_1_85))) - var_1_88);


	// From: CodeObject47
	if (var_1_105 >= (max (var_1_84 , var_1_98))) {
		var_1_132 = var_1_40;
	}


	// From: CodeObject48
	if (var_1_38) {
		var_1_133 = var_1_33;
	}


	// From: CodeObject49
	if (var_1_111) {
		var_1_134 = var_1_125;
	}


	// From: CodeObject50
	if (var_1_114) {
		var_1_135 = var_1_77;
	} else {
		var_1_135 = var_1_77;
	}


	// From: CodeObject51
	if (var_1_132) {
		var_1_136 = var_1_76;
	} else {
		var_1_136 = var_1_78;
	}


	// From: CodeObject52
	if (var_1_138) {
		var_1_137 = var_1_90;
	}


	// From: CodeObject53
	if (var_1_111) {
		var_1_139 = var_1_116;
	}


	// From: CodeObject54
	if (var_1_40) {
		var_1_140 = var_1_35;
	} else {
		var_1_140 = var_1_139;
	}


	// From: CodeObject55
	var_1_141 = var_1_103;


	// From: CodeObject56
	var_1_142 = 499.2;


	// From: CodeObject57
	var_1_143 = var_1_88;


	// From: CodeObject58
	var_1_144 = var_1_103;


	// From: CodeObject59
	var_1_145 = var_1_117;


	// From: CodeObject60
	if (var_1_132) {
		var_1_146 = var_1_32;
	} else {
		var_1_146 = var_1_60;
	}


	// From: CodeObject61
	var_1_147 = var_1_98;


	// From: CodeObject62
	if (var_1_39) {
		var_1_148 = 1;
	} else {
		var_1_148 = var_1_41;
	}


	// From: CodeObject63
	if (var_1_115) {
		var_1_149 = var_1_83;
	}


	// From: CodeObject64
	if (var_1_151) {
		if (var_1_132) {
			var_1_150 = ((abs (var_1_92)) - (min (var_1_50 , var_1_59)));
		}
	}


	// From: CodeObject65
	if (var_1_83 >= var_1_110) {
		var_1_152 = var_1_48;
	}


	// From: CodeObject66
	var_1_153 = var_1_59;


	// From: Req1Batch8PS_CN_500
	if (last_1_var_1_13 == (last_1_var_1_13 % var_1_4)) {
		var_1_1 = (var_1_5 - var_1_6);
	}


	// From: Req5Batch8PS_CN_500
	if (var_1_10 == var_1_1) {
		if (var_1_11) {
			var_1_19 = (((32 + var_1_20) + var_1_21) - (var_1_22 + var_1_23));
		} else {
			var_1_19 = (var_1_24 - var_1_23);
		}
	} else {
		var_1_19 = var_1_24;
	}


	// From: Req7Batch8PS_CN_500
	if (var_1_19 < (var_1_21 / var_1_20)) {
		if (var_1_19 > var_1_19) {
			var_1_26 = (max ((min (var_1_22 , var_1_24)) , var_1_23));
		} else {
			var_1_26 = var_1_22;
		}
	}


	// From: Req2Batch8PS_CN_500
	if (var_1_1 >= var_1_6) {
		var_1_7 = var_1_19;
	}


	// From: Req3Batch8PS_CN_500
	if (((var_1_6 * var_1_5) / var_1_10) > var_1_1) {
		if (var_1_11) {
			var_1_9 = var_1_26;
		} else {
			var_1_9 = var_1_26;
		}
	}


	// From: Req4Batch8PS_CN_500
	if (var_1_7 < var_1_9) {
		var_1_13 = (var_1_26 + ((max (var_1_15 , var_1_16)) - (var_1_19 + var_1_19)));
	}


	// From: Req6Batch8PS_CN_500
	if ((25.3 * var_1_5) != var_1_1) {
		if (var_1_11) {
			if (var_1_15 <= var_1_13) {
				var_1_25 = var_1_26;
			}
		} else {
			var_1_25 = var_1_22;
		}
	} else {
		var_1_25 = var_1_20;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 16383);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 32);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 64);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 64);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32768);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32768);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32768);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -32766);
	assume_abort_if_not(var_1_32 <= 32766);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 65535);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -2147483648);
	assume_abort_if_not(var_1_42 <= 2147483647);
	assume_abort_if_not(var_1_42 != 0);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -2147483648);
	assume_abort_if_not(var_1_43 <= 2147483647);
	assume_abort_if_not(var_1_43 != 0);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	assume_abort_if_not(var_1_45 != 0.0F);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -922337.2036854776000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -126);
	assume_abort_if_not(var_1_48 <= 126);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -1);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 126);
	var_1_53 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_53 >= -2147483647);
	assume_abort_if_not(var_1_53 <= 2147483646);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= -63);
	assume_abort_if_not(var_1_56 <= 63);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= -63);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 94);
	assume_abort_if_not(var_1_58 <= 126);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 31);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= -922337.2036854776000e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854776000e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 65534);
	var_1_67 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_67 >= -2147483647);
	assume_abort_if_not(var_1_67 <= 2147483646);
	var_1_69 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_69 >= -2147483648);
	assume_abort_if_not(var_1_69 <= 2147483647);
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= -922337.2036854765600e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854765600e+12F && var_1_70 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= -127);
	assume_abort_if_not(var_1_73 <= 126);
	var_1_75 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_75 >= -2147483648);
	assume_abort_if_not(var_1_75 <= 2147483647);
	var_1_76 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_76 >= -461168.6018427382800e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 4611686.018427382800e+12F && var_1_76 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_77 >= -461168.6018427382800e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 4611686.018427382800e+12F && var_1_77 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_78 >= -461168.6018427382800e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427382800e+12F && var_1_78 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_79 >= -461168.6018427382800e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 4611686.018427382800e+12F && var_1_79 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_82 >= -461168.6018427382800e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 4611686.018427382800e+12F && var_1_82 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_86 >= 32767);
	assume_abort_if_not(var_1_86 <= 65534);
	var_1_87 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_87 >= 32767);
	assume_abort_if_not(var_1_87 <= 65534);
	var_1_88 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 32767);
	var_1_92 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_92 >= -31);
	assume_abort_if_not(var_1_92 <= 31);
	var_1_94 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_94 >= -2147483646);
	assume_abort_if_not(var_1_94 <= 2147483646);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 254);
	var_1_98 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_98 >= -115292.1504606845700e+13F && var_1_98 <= -1.0e-20F) || (var_1_98 <= 1152921.504606845700e+12F && var_1_98 >= 1.0e-20F ));
	var_1_100 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_100 >= -922337.2036854776000e+13F && var_1_100 <= -1.0e-20F) || (var_1_100 <= 9223372.036854776000e+12F && var_1_100 >= 1.0e-20F ));
	assume_abort_if_not(var_1_100 != 0.0F);
	var_1_101 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_101 >= -922337.2036854776000e+13F && var_1_101 <= -1.0e-20F) || (var_1_101 <= 9223372.036854776000e+12F && var_1_101 >= 1.0e-20F ));
	assume_abort_if_not(var_1_101 != 0.0F);
	var_1_103 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_103 >= 0);
	assume_abort_if_not(var_1_103 <= 5);
	var_1_104 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_104 >= 0);
	assume_abort_if_not(var_1_104 <= 4);
	var_1_106 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_106 >= 2147483647);
	assume_abort_if_not(var_1_106 <= 4294967295);
	var_1_109 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_109 >= 0);
	assume_abort_if_not(var_1_109 <= 65534);
	var_1_112 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_112 >= 0);
	assume_abort_if_not(var_1_112 <= 1);
	var_1_113 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_113 >= 0);
	assume_abort_if_not(var_1_113 <= 0);
	var_1_114 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_114 >= 0);
	assume_abort_if_not(var_1_114 <= 0);
	var_1_115 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_115 >= 0);
	assume_abort_if_not(var_1_115 <= 0);
	var_1_117 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_117 >= 127);
	assume_abort_if_not(var_1_117 <= 254);
	var_1_120 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_120 >= 0.0F && var_1_120 <= -1.0e-20F) || (var_1_120 <= 9223372.036854765600e+12F && var_1_120 >= 1.0e-20F ));
	var_1_121 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_121 >= 0.0F && var_1_121 <= -1.0e-20F) || (var_1_121 <= 9223372.036854765600e+12F && var_1_121 >= 1.0e-20F ));
	var_1_122 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_122 >= 0.0F && var_1_122 <= -1.0e-20F) || (var_1_122 <= 9223372.036854765600e+12F && var_1_122 >= 1.0e-20F ));
	var_1_124 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_124 >= -127);
	assume_abort_if_not(var_1_124 <= 126);
	var_1_138 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_138 >= 0);
	assume_abort_if_not(var_1_138 <= 1);
	var_1_151 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_151 >= 0);
	assume_abort_if_not(var_1_151 <= 1);
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
}

int property() {
	return (((((((last_1_var_1_13 == (last_1_var_1_13 % var_1_4)) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : 1) && ((var_1_1 >= var_1_6) ? (var_1_7 == ((signed long int) var_1_19)) : 1)) && ((((var_1_6 * var_1_5) / var_1_10) > var_1_1) ? (var_1_11 ? (var_1_9 == ((unsigned long int) var_1_26)) : (var_1_9 == ((unsigned long int) var_1_26))) : 1)) && ((var_1_7 < var_1_9) ? (var_1_13 == ((unsigned short int) (var_1_26 + ((max (var_1_15 , var_1_16)) - (var_1_19 + var_1_19))))) : 1)) && ((var_1_10 == var_1_1) ? (var_1_11 ? (var_1_19 == ((unsigned char) (((32 + var_1_20) + var_1_21) - (var_1_22 + var_1_23)))) : (var_1_19 == ((unsigned char) (var_1_24 - var_1_23)))) : (var_1_19 == ((unsigned char) var_1_24)))) && (((25.3 * var_1_5) != var_1_1) ? (var_1_11 ? ((var_1_15 <= var_1_13) ? (var_1_25 == ((signed long int) var_1_26)) : 1) : (var_1_25 == ((signed long int) var_1_22))) : (var_1_25 == ((signed long int) var_1_20)))) && ((var_1_19 < (var_1_21 / var_1_20)) ? ((var_1_19 > var_1_19) ? (var_1_26 == ((unsigned char) (max ((min (var_1_22 , var_1_24)) , var_1_23)))) : (var_1_26 == ((unsigned char) var_1_22))) : 1)
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
