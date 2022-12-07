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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch65PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 4;
unsigned short int var_1_8 = 64;
unsigned short int var_1_11 = 256;
unsigned short int var_1_12 = 0;
unsigned short int var_1_13 = 64;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
signed char var_1_16 = 50;
signed char var_1_19 = -100;
double var_1_20 = 100000000.8;
double var_1_21 = 15.125;
double var_1_22 = 99.22;
signed long int var_1_23 = -16;
unsigned char var_1_24 = 1;
signed char var_1_25 = 10;
signed char var_1_26 = 16;
unsigned char var_1_27 = 0;
double var_1_28 = 5.5;
signed long int var_1_29 = 50;
unsigned short int var_1_30 = 16;
unsigned char var_1_31 = 0;
signed long int var_1_32 = -16;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
double var_1_35 = 25.75;
float var_1_36 = 7.85;
float var_1_37 = 63.36;
float var_1_38 = -0.7;
double var_1_39 = 2.8;
double var_1_40 = 8.375;
signed long int var_1_41 = -10;
signed long int var_1_42 = -4;
signed long int var_1_43 = 16;
unsigned short int var_1_44 = 256;
unsigned short int var_1_45 = 128;
double var_1_46 = 63.125;
signed char var_1_47 = -2;
signed char var_1_48 = 100;
signed char var_1_49 = -64;
signed long int var_1_50 = 2;
signed long int var_1_51 = 2143688777;
double var_1_52 = -0.5;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 128;
unsigned char var_1_55 = 128;
unsigned char var_1_56 = 5;
unsigned short int var_1_57 = 5;
unsigned short int var_1_58 = 5;
signed char var_1_59 = -10;
signed char var_1_60 = -4;
unsigned char var_1_61 = 5;
unsigned char var_1_62 = 100;
signed short int var_1_63 = -10000;
signed char var_1_64 = 0;
signed short int var_1_65 = -32;
double var_1_66 = 10.25;
signed char var_1_67 = -32;
signed char var_1_68 = 0;
signed char var_1_69 = -1;
float var_1_70 = 200.4;
float var_1_71 = 2.2;
float var_1_72 = 127.2;
float var_1_73 = 2.8;
signed char var_1_74 = 5;
unsigned char var_1_75 = 128;
unsigned short int var_1_76 = 2;
unsigned short int var_1_77 = 43860;
unsigned short int var_1_78 = 28346;
unsigned short int var_1_79 = 200;
signed short int var_1_80 = 128;
unsigned long int var_1_81 = 128;
float var_1_82 = 31.5;
unsigned long int var_1_83 = 1;
float var_1_84 = 4.4;
unsigned short int var_1_85 = 0;
signed short int var_1_86 = 256;
signed short int var_1_87 = -4;
float var_1_88 = 16.25;
float var_1_89 = 1.25;
float var_1_90 = 15.7;
float var_1_91 = 64.375;
unsigned short int var_1_92 = 128;
signed char var_1_93 = -5;
float var_1_94 = 50.4;
unsigned long int var_1_95 = 0;
unsigned short int var_1_96 = 5;
signed short int var_1_97 = 64;
float var_1_98 = 128.25;
float var_1_99 = 25.8;
double var_1_100 = 8.4;
double var_1_101 = 49.5;
double var_1_102 = 4.72;
unsigned short int var_1_103 = 256;
unsigned short int var_1_104 = 50574;
unsigned long int var_1_105 = 32;
unsigned short int var_1_106 = 1;
float var_1_107 = 127.6;
float var_1_109 = 16.6;
unsigned char var_1_110 = 1;
unsigned char var_1_111 = 0;
unsigned char var_1_112 = 1;
unsigned char var_1_113 = 1;
unsigned char var_1_114 = 0;
unsigned short int var_1_115 = 0;
signed char var_1_116 = -32;
signed short int var_1_117 = 8;
unsigned long int var_1_118 = 10;
unsigned long int var_1_119 = 3878209665;
unsigned long int var_1_120 = 2377735624;
double var_1_121 = 25.5;
float var_1_122 = 3.5;
unsigned long int var_1_123 = 128;
unsigned short int var_1_124 = 100;
unsigned long int var_1_125 = 4130335856;
unsigned char var_1_126 = 1;
signed long int var_1_127 = 50;
signed long int var_1_128 = 16;
signed long int var_1_129 = 16;
signed long int var_1_130 = 5;
signed long int var_1_131 = 2;
signed short int var_1_132 = -200;
double var_1_133 = 128.5;
unsigned long int var_1_134 = 64;
unsigned short int var_1_135 = 25;
unsigned short int var_1_136 = 25;
float var_1_137 = 63.5;
double var_1_138 = 127.4;
unsigned char var_1_139 = 1;
unsigned short int var_1_140 = 16;
signed long int var_1_141 = 2;
unsigned long int var_1_142 = 16;
unsigned long int var_1_143 = 256;
unsigned short int var_1_144 = 16;
double var_1_145 = 256.5;
double var_1_146 = 50.25;
unsigned char var_1_147 = 1;
signed short int var_1_148 = 128;
unsigned long int var_1_149 = 4;
float var_1_150 = 8.75;
signed short int var_1_151 = 50;
signed long int var_1_152 = -5;
double var_1_153 = 32.5;
double var_1_154 = 127.2;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 4;
unsigned char last_1_var_1_14 = 1;
signed char last_1_var_1_16 = 50;
signed long int last_1_var_1_23 = -16;
unsigned char last_1_var_1_24 = 1;
double last_1_var_1_28 = 5.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_30 <= (- 256)) {
		var_1_29 = var_1_30;
	}


	// From: CodeObject2
	if (((~ var_1_30) * (var_1_29 | 32)) > var_1_32) {
		if (! var_1_33) {
			var_1_31 = (var_1_33 || var_1_34);
		}
	} else {
		var_1_31 = var_1_34;
	}


	// From: CodeObject3
	if (((var_1_36 + var_1_37) >= var_1_38) && var_1_31) {
		if (var_1_34) {
			var_1_35 = (max ((3.35 - var_1_39) , var_1_40));
		}
	}


	// From: CodeObject4
	if (var_1_36 >= var_1_38) {
		var_1_41 = (var_1_30 - (abs (var_1_42)));
	} else {
		var_1_41 = (var_1_30 - var_1_43);
	}


	// From: CodeObject5
	if (((var_1_37 + var_1_40) < var_1_38) && (var_1_35 > var_1_39)) {
		var_1_44 = (abs (abs (var_1_45)));
	} else {
		if (var_1_46 == var_1_36) {
			var_1_44 = (abs (max (var_1_45 , 4)));
		}
	}


	// From: CodeObject6
	if ((~ var_1_44) <= var_1_42) {
		var_1_47 = (min (var_1_48 , var_1_49));
	}


	// From: CodeObject7
	if (var_1_44 > var_1_30) {
		var_1_50 = ((var_1_51 - var_1_44) - 500);
	} else {
		var_1_50 = (abs (var_1_30 - var_1_44));
	}


	// From: CodeObject8
	if ((var_1_41 % var_1_51) < (var_1_47 & (256 ^ var_1_45))) {
		var_1_52 = 4.6;
	} else {
		var_1_52 = (min (var_1_40 , var_1_39));
	}


	// From: CodeObject9
	if (var_1_34) {
		if (var_1_51 > (var_1_44 * var_1_47)) {
			var_1_53 = ((max (var_1_54 , var_1_55)) - (abs (var_1_56)));
		} else {
			var_1_53 = (max (var_1_56 , var_1_54));
		}
	} else {
		var_1_53 = var_1_55;
	}


	// From: CodeObject10
	if ((var_1_55 - var_1_54) > var_1_29) {
		if (var_1_33) {
			if (! var_1_31) {
				if (var_1_31) {
					var_1_57 = (abs (var_1_58));
				}
			}
		}
	}


	// From: CodeObject11
	if (var_1_47 >= (min (var_1_43 , (max (-1 , var_1_32))))) {
		var_1_59 = (abs (abs (var_1_60 + 32)));
	}


	// From: CodeObject12
	if (var_1_52 > (max (var_1_39 , var_1_37))) {
		if (var_1_33) {
			var_1_61 = var_1_56;
		}
	} else {
		var_1_61 = var_1_62;
	}


	// From: CodeObject13
	if ((var_1_58 | var_1_43) < (var_1_61 / var_1_51)) {
		var_1_63 = (abs (var_1_47));
	}


	// From: CodeObject14
	if (var_1_51 <= (abs (var_1_58))) {
		var_1_64 = var_1_49;
	} else {
		if (var_1_34) {
			var_1_64 = var_1_48;
		}
	}


	// From: CodeObject15
	if (! ((var_1_53 >= var_1_56) && (var_1_45 <= var_1_32))) {
		var_1_65 = (abs (var_1_47));
	}


	// From: CodeObject16
	if (var_1_61 >= var_1_57) {
		var_1_66 = var_1_39;
	}


	// From: CodeObject17
	if (var_1_33) {
		var_1_67 = (abs (var_1_60));
	} else {
		var_1_67 = ((abs (abs (var_1_60))) + (max (var_1_68 , (max (var_1_69 , -2)))));
	}


	// From: CodeObject18
	if (var_1_42 == var_1_64) {
		var_1_70 = (min ((abs (abs (var_1_40))) , (max ((min (var_1_39 , var_1_71)) , (var_1_72 - var_1_73)))));
	} else {
		var_1_70 = var_1_73;
	}


	// From: CodeObject19
	var_1_74 = (min (var_1_60 , (abs (8))));


	// From: CodeObject20
	if (var_1_33 && var_1_31) {
		var_1_75 = (max (var_1_62 , var_1_56));
	}


	// From: CodeObject21
	if ((abs (var_1_65)) <= var_1_51) {
		var_1_76 = (abs (var_1_56));
	} else {
		if (var_1_70 > var_1_73) {
			if (var_1_73 < (abs (var_1_35))) {
				var_1_76 = (min ((max ((min (8 , var_1_53)) , 32)) , 8));
			} else {
				var_1_76 = (var_1_77 - (max (var_1_61 , (var_1_78 - var_1_56))));
			}
		}
	}


	// From: CodeObject22
	if (var_1_34) {
		var_1_79 = (abs (2 + (max (var_1_78 , var_1_54))));
	}


	// From: CodeObject23
	if (var_1_34) {
		var_1_80 = (max (var_1_61 , var_1_54));
	} else {
		if (var_1_56 > 0) {
			var_1_80 = (max (var_1_54 , var_1_62));
		}
	}


	// From: CodeObject24
	if (var_1_37 >= ((var_1_82 + 2.6f) - var_1_73)) {
		if (15.5 == var_1_40) {
			if (var_1_36 <= var_1_73) {
				var_1_81 = ((max (var_1_51 , var_1_57)) + (abs (var_1_78)));
			}
		} else {
			var_1_81 = 0u;
		}
	} else {
		var_1_81 = (var_1_75 + 25u);
	}


	// From: CodeObject25
	if ((max (var_1_69 , var_1_74)) > (max ((max (var_1_67 , var_1_78)) , var_1_60))) {
		var_1_83 = (abs (var_1_62));
	}


	// From: CodeObject26
	if ((var_1_67 | var_1_69) <= (var_1_76 ^ (var_1_49 % var_1_54))) {
		var_1_84 = (max ((var_1_72 - (min (var_1_39 , var_1_82))) , var_1_40));
	}


	// From: CodeObject27
	if (var_1_33) {
		var_1_85 = ((min (var_1_62 , var_1_53)) + (abs (abs (var_1_61))));
	} else {
		var_1_85 = ((var_1_78 - (abs (var_1_55))) + (20351 - (abs (var_1_75))));
	}


	// From: CodeObject28
	if (var_1_31) {
		if (var_1_30 == (var_1_77 - var_1_62)) {
			var_1_86 = (var_1_87 + var_1_48);
		}
	}


	// From: CodeObject29
	if (var_1_67 >= (var_1_29 % 16)) {
		var_1_88 = (abs (abs (var_1_40)));
	}


	// From: CodeObject30
	if (var_1_34) {
		var_1_89 = (max ((abs (var_1_40)) , var_1_82));
	} else {
		if (var_1_33) {
			var_1_89 = (min ((max (var_1_72 , var_1_90)) , (max (var_1_39 , var_1_91))));
		}
	}


	// From: CodeObject31
	if (var_1_72 < var_1_84) {
		var_1_92 = (var_1_62 + (max (1 , (max (var_1_54 , var_1_75)))));
	} else {
		if (var_1_31) {
			var_1_92 = (abs (var_1_53));
		}
	}


	// From: CodeObject32
	if (var_1_70 == (min (256.9f , (abs (var_1_73))))) {
		var_1_93 = (max ((abs (var_1_69)) , -25));
	}


	// From: CodeObject33
	if (var_1_31) {
		var_1_94 = (max (var_1_72 , var_1_91));
	} else {
		var_1_94 = (abs (var_1_82));
	}


	// From: CodeObject34
	var_1_95 = (abs (var_1_77));


	// From: CodeObject35
	if (var_1_67 <= (abs (var_1_48))) {
		var_1_96 = (max (var_1_55 , var_1_56));
	}


	// From: CodeObject36
	if ((var_1_44 & var_1_41) >= var_1_95) {
		var_1_97 = (max (var_1_61 , var_1_75));
	} else {
		var_1_97 = (abs (var_1_69));
	}


	// From: CodeObject37
	var_1_98 = (max ((abs (min (var_1_73 , var_1_82))) , var_1_71));


	// From: CodeObject38
	if (var_1_63 >= (abs (var_1_67))) {
		var_1_99 = (min (var_1_71 , var_1_90));
	} else {
		if (var_1_79 > var_1_61) {
			if (((var_1_82 + var_1_100) - var_1_72) >= var_1_39) {
				if (var_1_34) {
					var_1_99 = var_1_90;
				}
			}
		}
	}


	// From: CodeObject39
	if (var_1_31 || var_1_33) {
		if (var_1_40 < var_1_70) {
			if ((var_1_60 + var_1_59) <= var_1_92) {
				var_1_101 = (min (var_1_73 , (var_1_39 - var_1_100)));
			}
		} else {
			var_1_101 = (abs (var_1_100));
		}
	} else {
		var_1_101 = (var_1_102 + 9.4);
	}


	// From: CodeObject40
	var_1_103 = ((var_1_104 - var_1_55) - (abs (var_1_62)));


	// From: CodeObject41
	if (var_1_31) {
		var_1_105 = (abs (var_1_43));
	} else {
		var_1_105 = (abs (var_1_62));
	}


	// From: CodeObject42
	if ((var_1_78 | var_1_42) > var_1_81) {
		var_1_106 = (var_1_104 - (max ((max (var_1_75 , var_1_55)) , (max (var_1_53 , var_1_56)))));
	}


	// From: CodeObject43
	if (var_1_106 > var_1_103) {
		if (var_1_33) {
			var_1_107 = (var_1_72 - var_1_73);
		}
	} else {
		if (var_1_88 <= var_1_72) {
			var_1_107 = (var_1_73 - (var_1_109 + (abs (var_1_102))));
		} else {
			if ((abs (var_1_102)) > var_1_90) {
				if (var_1_57 >= (max (var_1_32 , var_1_77))) {
					var_1_107 = (abs (abs (var_1_39)));
				} else {
					var_1_107 = (abs (var_1_82));
				}
			}
		}
	}


	// From: CodeObject44
	if (var_1_29 >= var_1_53) {
		var_1_110 = (var_1_33 && var_1_111);
	} else {
		var_1_110 = ((var_1_93 >= var_1_30) && var_1_111);
	}


	// From: CodeObject45
	if (var_1_58 >= (max (var_1_43 , (abs (var_1_55))))) {
		var_1_112 = var_1_111;
	} else {
		if (var_1_85 < (100 % 1)) {
			var_1_112 = (((var_1_64 <= var_1_85) || var_1_34) && (var_1_113 && var_1_114));
		} else {
			var_1_112 = (! ((-32 != var_1_104) || (! var_1_111)));
		}
	}


	// From: CodeObject46
	if ((8 + var_1_58) >= var_1_42) {
		var_1_115 = var_1_55;
	} else {
		if ((abs (var_1_62)) < var_1_60) {
			var_1_115 = var_1_78;
		} else {
			var_1_115 = (max (var_1_75 , var_1_104));
		}
	}


	// From: CodeObject47
	if (var_1_86 >= (var_1_60 / var_1_54)) {
		var_1_116 = var_1_60;
	}


	// From: CodeObject48
	if (var_1_81 < ((abs (var_1_75)) >> var_1_116)) {
		var_1_117 = (var_1_54 + 1);
	} else {
		var_1_117 = (max (var_1_62 , var_1_87));
	}


	// From: CodeObject49
	if (var_1_68 < (var_1_85 + (min (var_1_79 , var_1_48)))) {
		var_1_118 = (max (var_1_58 , (var_1_115 + var_1_56)));
	} else {
		var_1_118 = ((max (var_1_119 , var_1_120)) - var_1_77);
	}


	// From: CodeObject50
	if (((var_1_100 - var_1_72) / var_1_122) < var_1_82) {
		var_1_121 = (var_1_72 - var_1_109);
	}


	// From: CodeObject51
	if (var_1_124 > var_1_57) {
		var_1_123 = (max (var_1_45 , var_1_53));
	} else {
		var_1_123 = (abs ((var_1_125 - var_1_45) - var_1_115));
	}


	// From: CodeObject52
	if (((abs (var_1_38)) + var_1_35) >= var_1_66) {
		var_1_126 = var_1_111;
	}


	// From: CodeObject53
	if ((min (8 , var_1_115)) == var_1_56) {
		var_1_127 = (var_1_86 + var_1_77);
	} else {
		if (1u <= (- (10u << var_1_125))) {
			var_1_127 = var_1_68;
		} else {
			var_1_127 = ((abs (4)) - (max (var_1_128 , (min (0 , var_1_85)))));
		}
	}


	// From: CodeObject54
	if (var_1_80 < (var_1_69 >> (max (var_1_130 , var_1_131)))) {
		var_1_129 = (min (((min (var_1_62 , var_1_104)) + -4) , (abs (var_1_96))));
	}


	// From: CodeObject55
	if (((var_1_36 * var_1_72) / (min (var_1_122 , var_1_133))) <= var_1_52) {
		var_1_132 = (max ((abs (var_1_60)) , var_1_61));
	}


	// From: CodeObject56
	if ((abs (var_1_52)) > var_1_46) {
		var_1_134 = (abs (var_1_45));
	} else {
		if (var_1_34) {
			var_1_134 = var_1_120;
		}
	}


	// From: CodeObject57
	if (var_1_31) {
		var_1_135 = var_1_54;
	} else {
		var_1_135 = 500;
	}


	// From: CodeObject58
	if (var_1_126) {
		var_1_136 = var_1_53;
	}


	// From: CodeObject59
	var_1_137 = var_1_102;


	// From: CodeObject60
	if (var_1_111) {
		var_1_138 = var_1_39;
	}


	// From: CodeObject61
	if (var_1_110) {
		var_1_139 = var_1_34;
	}


	// From: CodeObject62
	if (var_1_126) {
		var_1_140 = 2;
	}


	// From: CodeObject63
	if (var_1_33) {
		var_1_141 = var_1_60;
	}


	// From: CodeObject64
	if (var_1_114) {
		var_1_142 = var_1_143;
	}


	// From: CodeObject65
	if (var_1_139) {
		var_1_144 = var_1_77;
	}


	// From: CodeObject66
	var_1_145 = 256.8;


	// From: CodeObject67
	if (var_1_114) {
		var_1_146 = var_1_109;
	}


	// From: CodeObject68
	if (var_1_110) {
		var_1_147 = var_1_34;
	} else {
		var_1_147 = var_1_111;
	}


	// From: CodeObject69
	var_1_148 = var_1_74;


	// From: CodeObject70
	if (var_1_126) {
		var_1_149 = var_1_54;
	} else {
		var_1_149 = 16u;
	}


	// From: CodeObject71
	var_1_150 = var_1_100;


	// From: CodeObject72
	if (var_1_56 > (- var_1_55)) {
		var_1_151 = ((min (var_1_53 , var_1_62)) - var_1_54);
	} else {
		var_1_151 = (abs (abs (var_1_68)));
	}


	// From: CodeObject73
	var_1_152 = var_1_125;


	// From: CodeObject74
	var_1_153 = var_1_72;


	// From: CodeObject75
	var_1_154 = 1.4;


	// From: Req4Batch65PS_CN_500
	signed long int stepLocal_3 = last_1_var_1_23;
	unsigned char stepLocal_2 = ! (last_1_var_1_14 || last_1_var_1_14);
	if (last_1_var_1_23 < stepLocal_3) {
		if (stepLocal_2 && last_1_var_1_24) {
			if ((max (2.75f , (min (last_1_var_1_28 , 999999.95f)))) != last_1_var_1_28) {
				var_1_16 = 10;
			} else {
				var_1_16 = var_1_19;
			}
		} else {
			var_1_16 = var_1_19;
		}
	} else {
		var_1_16 = 100;
	}


	// From: Req6Batch65PS_CN_500
	if (((max (last_1_var_1_1 , last_1_var_1_16)) | last_1_var_1_16) >= last_1_var_1_23) {
		var_1_23 = (5 - var_1_12);
	} else {
		var_1_23 = (max (var_1_11 , last_1_var_1_1));
	}


	// From: Req5Batch65PS_CN_500
	var_1_20 = (var_1_21 - (var_1_22 + 1.5));


	// From: Req8Batch65PS_CN_500
	var_1_28 = var_1_21;


	// From: Req1Batch65PS_CN_500
	unsigned char stepLocal_0 = var_1_23 > 4;
	if ((var_1_23 <= var_1_23) || stepLocal_0) {
		var_1_1 = (max ((var_1_16 + (var_1_16 + var_1_16)) , -100));
	} else {
		var_1_1 = var_1_16;
	}


	// From: Req7Batch65PS_CN_500
	var_1_24 = ((var_1_1 <= (var_1_25 - var_1_26)) && var_1_27);


	// From: Req3Batch65PS_CN_500
	signed char stepLocal_1 = var_1_16;
	if (stepLocal_1 > (var_1_23 + (var_1_16 ^ var_1_16))) {
		var_1_14 = (var_1_24 || var_1_15);
	}


	// From: Req2Batch65PS_CN_500
	if (var_1_14) {
		if (var_1_24) {
			var_1_8 = (max ((var_1_11 + var_1_12) , var_1_13));
		}
	}
}



void updateVariables() {
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -127);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 65535);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854765600e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -2147483646);
	assume_abort_if_not(var_1_42 <= 2147483646);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 2147483646);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -127);
	assume_abort_if_not(var_1_48 <= 126);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -127);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_51 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_51 >= 1073741822);
	assume_abort_if_not(var_1_51 <= 2147483646);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 127);
	assume_abort_if_not(var_1_54 <= 254);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 127);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 65534);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= -63);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 254);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= -63);
	assume_abort_if_not(var_1_68 <= 63);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= -63);
	assume_abort_if_not(var_1_69 <= 63);
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= -922337.2036854765600e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854765600e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854765600e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854765600e+12F && var_1_73 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_77 >= 32767);
	assume_abort_if_not(var_1_77 <= 65534);
	var_1_78 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_78 >= 16383);
	assume_abort_if_not(var_1_78 <= 32767);
	var_1_82 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_82 >= 0.0F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 4611686.018427387900e+12F && var_1_82 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_87 >= -16383);
	assume_abort_if_not(var_1_87 <= 16383);
	var_1_90 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_90 >= -922337.2036854765600e+13F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 9223372.036854765600e+12F && var_1_90 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_91 >= -922337.2036854765600e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 9223372.036854765600e+12F && var_1_91 >= 1.0e-20F ));
	var_1_100 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_100 >= 0.0F && var_1_100 <= -1.0e-20F) || (var_1_100 <= 4611686.018427387900e+12F && var_1_100 >= 1.0e-20F ));
	var_1_102 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_102 >= -461168.6018427382800e+13F && var_1_102 <= -1.0e-20F) || (var_1_102 <= 4611686.018427382800e+12F && var_1_102 >= 1.0e-20F ));
	var_1_104 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_104 >= 49150);
	assume_abort_if_not(var_1_104 <= 65534);
	var_1_109 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_109 >= 0.0F && var_1_109 <= -1.0e-20F) || (var_1_109 <= 4611686.018427382800e+12F && var_1_109 >= 1.0e-20F ));
	var_1_111 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_111 >= 0);
	assume_abort_if_not(var_1_111 <= 0);
	var_1_113 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_113 >= 1);
	assume_abort_if_not(var_1_113 <= 1);
	var_1_114 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_114 >= 1);
	assume_abort_if_not(var_1_114 <= 1);
	var_1_119 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_119 >= 2147483647);
	assume_abort_if_not(var_1_119 <= 4294967294);
	var_1_120 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_120 >= 2147483647);
	assume_abort_if_not(var_1_120 <= 4294967294);
	var_1_122 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_122 >= -922337.2036854776000e+13F && var_1_122 <= -1.0e-20F) || (var_1_122 <= 9223372.036854776000e+12F && var_1_122 >= 1.0e-20F ));
	assume_abort_if_not(var_1_122 != 0.0F);
	var_1_124 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_124 >= 0);
	assume_abort_if_not(var_1_124 <= 65535);
	var_1_125 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_125 >= 3221225470);
	assume_abort_if_not(var_1_125 <= 4294967294);
	var_1_128 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_128 >= 0);
	assume_abort_if_not(var_1_128 <= 2147483646);
	var_1_130 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_130 >= 0);
	assume_abort_if_not(var_1_130 <= 8);
	var_1_131 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_131 >= 0);
	assume_abort_if_not(var_1_131 <= 8);
	var_1_133 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_133 >= -922337.2036854776000e+13F && var_1_133 <= -1.0e-20F) || (var_1_133 <= 9223372.036854776000e+12F && var_1_133 >= 1.0e-20F ));
	assume_abort_if_not(var_1_133 != 0.0F);
	var_1_143 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_143 >= 0);
	assume_abort_if_not(var_1_143 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_28 = var_1_28;
}

int property() {
	return (((((((((var_1_23 <= var_1_23) || (var_1_23 > 4)) ? (var_1_1 == ((signed short int) (max ((var_1_16 + (var_1_16 + var_1_16)) , -100)))) : (var_1_1 == ((signed short int) var_1_16))) && (var_1_14 ? (var_1_24 ? (var_1_8 == ((unsigned short int) (max ((var_1_11 + var_1_12) , var_1_13)))) : 1) : 1)) && ((var_1_16 > (var_1_23 + (var_1_16 ^ var_1_16))) ? (var_1_14 == ((unsigned char) (var_1_24 || var_1_15))) : 1)) && ((last_1_var_1_23 < last_1_var_1_23) ? (((! (last_1_var_1_14 || last_1_var_1_14)) && last_1_var_1_24) ? (((max (2.75f , (min (last_1_var_1_28 , 999999.95f)))) != last_1_var_1_28) ? (var_1_16 == ((signed char) 10)) : (var_1_16 == ((signed char) var_1_19))) : (var_1_16 == ((signed char) var_1_19))) : (var_1_16 == ((signed char) 100)))) && (var_1_20 == ((double) (var_1_21 - (var_1_22 + 1.5))))) && ((((max (last_1_var_1_1 , last_1_var_1_16)) | last_1_var_1_16) >= last_1_var_1_23) ? (var_1_23 == ((signed long int) (5 - var_1_12))) : (var_1_23 == ((signed long int) (max (var_1_11 , last_1_var_1_1)))))) && (var_1_24 == ((unsigned char) ((var_1_1 <= (var_1_25 - var_1_26)) && var_1_27)))) && (var_1_28 == ((double) var_1_21))
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
