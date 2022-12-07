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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch55PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 8.8;
double var_1_6 = 127.5;
double var_1_7 = 2.6;
double var_1_8 = 4.5;
signed short int var_1_9 = -128;
signed short int var_1_10 = 16;
signed short int var_1_11 = 4;
signed short int var_1_12 = 100;
signed short int var_1_13 = 64;
signed short int var_1_14 = 2;
signed long int var_1_15 = 5;
signed char var_1_17 = -2;
signed char var_1_18 = -4;
signed char var_1_19 = 8;
signed char var_1_20 = 10;
unsigned long int var_1_21 = 25;
unsigned long int var_1_22 = 3797799060;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
signed short int var_1_27 = -4;
signed short int var_1_28 = 24644;
signed char var_1_29 = 1;
signed char var_1_30 = -1;
unsigned char var_1_31 = 0;
signed long int var_1_32 = -2;
float var_1_33 = 255.5;
float var_1_34 = 127.5;
float var_1_35 = 10.5;
float var_1_36 = -0.5;
float var_1_37 = 256.3;
signed long int var_1_38 = 8;
double var_1_39 = 2.45;
double var_1_40 = 63.5;
unsigned short int var_1_41 = 200;
unsigned short int var_1_42 = 1;
unsigned short int var_1_43 = 28186;
unsigned short int var_1_44 = 10;
unsigned char var_1_45 = 1;
unsigned long int var_1_46 = 8;
unsigned char var_1_47 = 0;
unsigned long int var_1_48 = 3568149005;
unsigned long int var_1_49 = 1528871245;
unsigned long int var_1_50 = 1932125332;
unsigned char var_1_51 = 0;
unsigned short int var_1_52 = 2;
unsigned char var_1_53 = 4;
unsigned char var_1_54 = 32;
double var_1_55 = 63.75;
double var_1_56 = 16.8;
unsigned short int var_1_57 = 32;
signed char var_1_58 = 10;
double var_1_59 = 49.1;
unsigned short int var_1_60 = 36569;
unsigned char var_1_61 = 0;
signed char var_1_62 = 1;
unsigned char var_1_63 = 0;
unsigned char var_1_64 = 0;
float var_1_65 = 1000000.3;
unsigned char var_1_66 = 16;
signed long int var_1_67 = 64;
float var_1_68 = 63.4;
float var_1_69 = 0.19999999999999996;
float var_1_70 = 15.375;
float var_1_71 = 2.2;
signed long int var_1_72 = -5;
unsigned char var_1_73 = 50;
float var_1_74 = 128.35;
unsigned char var_1_75 = 0;
unsigned char var_1_76 = 1;
unsigned char var_1_77 = 1;
unsigned char var_1_78 = 0;
double var_1_79 = 0.75;
double var_1_80 = 0.0;
double var_1_81 = 99.525;
float var_1_82 = 4.5;
signed char var_1_83 = -2;
signed char var_1_84 = 10;
double var_1_85 = 3.64;
unsigned long int var_1_86 = 5;
signed char var_1_87 = -50;
signed char var_1_88 = -32;
signed char var_1_89 = 32;
unsigned short int var_1_90 = 16;
unsigned char var_1_91 = 5;
unsigned char var_1_92 = 64;
unsigned long int var_1_93 = 256;
signed char var_1_94 = -16;
signed short int var_1_95 = -256;
signed short int var_1_96 = -25;
signed char var_1_97 = 10;
signed long int var_1_98 = 50;
double var_1_99 = -0.75;
unsigned char var_1_100 = 0;
unsigned char var_1_101 = 0;
unsigned char var_1_102 = 1;
unsigned char var_1_103 = 0;
unsigned char var_1_104 = 50;
unsigned char var_1_105 = 64;
signed short int var_1_106 = -2;
float var_1_107 = -0.4;
double var_1_108 = 128.125;
double var_1_109 = 1.5;
signed long int var_1_110 = 0;
signed long int var_1_111 = -64;
signed long int var_1_112 = 128;
signed short int var_1_113 = 8;
unsigned char var_1_114 = 0;
signed short int var_1_115 = 24220;
unsigned char var_1_116 = 0;
unsigned char var_1_117 = 0;
signed short int var_1_118 = -128;
unsigned char var_1_119 = 0;
signed short int var_1_120 = 256;
unsigned short int var_1_121 = 50;
double var_1_122 = 5.707;
signed char var_1_123 = -2;
unsigned short int var_1_124 = 32;
unsigned long int var_1_125 = 0;
unsigned long int var_1_126 = 50;
unsigned long int var_1_127 = 0;
unsigned char var_1_128 = 1;
signed long int var_1_129 = -1;
float var_1_130 = 0.75;
unsigned char var_1_131 = 0;
double var_1_132 = 255.6;
double var_1_133 = 8.4;
signed short int var_1_134 = 64;
unsigned short int var_1_135 = 64;
signed long int var_1_136 = -64;
unsigned char var_1_137 = 64;
float var_1_138 = -0.8;
signed long int var_1_139 = -128;
unsigned char var_1_140 = 0;
unsigned char var_1_141 = 0;
double var_1_142 = 2.4;
unsigned char var_1_143 = 8;
signed char var_1_144 = 100;
unsigned long int var_1_145 = 0;
unsigned short int var_1_146 = 128;
unsigned char var_1_147 = 32;
double var_1_148 = 100000000.48;
float var_1_149 = 10000000000000.25;
double var_1_150 = 3.5;
unsigned char var_1_151 = 16;
signed long int var_1_152 = -4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_33 > var_1_34) {
		if ((var_1_34 * (max (var_1_33 , var_1_35))) < (min (var_1_36 , 32.55f))) {
			if (var_1_36 > 24.443f) {
				var_1_32 = var_1_38;
			}
		}
	} else {
		var_1_32 = (abs (32));
	}


	// From: CodeObject2
	if (var_1_32 < 4) {
		var_1_39 = (var_1_40 + 9.625);
	}


	// From: CodeObject3
	if (var_1_33 >= 127.5f) {
		if ((var_1_32 >> var_1_38) < (abs (-1))) {
			var_1_41 = ((abs (var_1_42)) + (var_1_43 - (2 + var_1_44)));
		} else {
			var_1_41 = (abs (var_1_42));
		}
	} else {
		if (var_1_45) {
			var_1_41 = (abs (max (var_1_44 , (max (var_1_43 , var_1_42)))));
		} else {
			var_1_41 = (max (var_1_42 , var_1_44));
		}
	}


	// From: CodeObject4
	if (((var_1_41 ^ -100) ^ (max (var_1_42 , var_1_44))) < (min ((min (var_1_43 , var_1_38)) , (~ var_1_32)))) {
		if (var_1_45) {
			if (var_1_47) {
				var_1_46 = (max (var_1_44 , 10000000u));
			} else {
				if (var_1_37 >= (var_1_40 * var_1_33)) {
					var_1_46 = ((max (var_1_48 , (var_1_49 + var_1_50))) - var_1_42);
				}
			}
		} else {
			if (var_1_51) {
				var_1_46 = (max (var_1_43 , var_1_48));
			}
		}
	} else {
		var_1_46 = (abs (var_1_42 + var_1_44));
	}


	// From: CodeObject5
	var_1_52 = (abs (var_1_44 + (min (var_1_42 , 4))));


	// From: CodeObject6
	if (! (var_1_33 >= (var_1_37 * var_1_39))) {
		var_1_53 = var_1_54;
	}


	// From: CodeObject7
	if (var_1_44 < var_1_32) {
		var_1_55 = (abs (min ((abs (var_1_40)) , var_1_56)));
	}


	// From: CodeObject8
	if (var_1_51) {
		if ((var_1_52 / var_1_58) > (min ((var_1_54 & var_1_38) , var_1_43))) {
			if ((abs (var_1_48)) < var_1_41) {
				if (var_1_40 < ((max (var_1_56 , var_1_37)) / var_1_59)) {
					var_1_57 = (min ((var_1_60 - (var_1_44 + var_1_54)) , (var_1_43 + var_1_53)));
				} else {
					if ((-2 & var_1_53) < var_1_58) {
						var_1_57 = ((abs (var_1_44)) + var_1_42);
					}
				}
			}
		}
	} else {
		var_1_57 = var_1_43;
	}


	// From: CodeObject9
	if ((abs (var_1_62)) < (abs (var_1_60))) {
		if ((var_1_41 / var_1_58) <= var_1_50) {
			var_1_61 = (var_1_63 || var_1_64);
		}
	}


	// From: CodeObject10
	if (var_1_64) {
		if ((var_1_58 % var_1_66) > (max (var_1_62 , (var_1_67 % -128)))) {
			var_1_65 = (max ((abs (min (var_1_56 , var_1_40))) , ((var_1_68 - 0.44999999999999996f) + var_1_69)));
		}
	} else {
		var_1_65 = (min (var_1_69 , var_1_70));
	}


	// From: CodeObject11
	if (var_1_38 <= var_1_72) {
		var_1_71 = var_1_40;
	}


	// From: CodeObject12
	var_1_73 = var_1_54;


	// From: CodeObject13
	if (var_1_47) {
		var_1_74 = var_1_69;
	} else {
		var_1_74 = var_1_69;
	}


	// From: CodeObject14
	if (var_1_44 < var_1_54) {
		var_1_75 = (! var_1_76);
	} else {
		var_1_75 = var_1_76;
	}


	// From: CodeObject15
	if (var_1_75 && var_1_47) {
		var_1_77 = (! ((var_1_72 <= var_1_44) && (var_1_78 && var_1_64)));
	}


	// From: CodeObject16
	if (var_1_51 && var_1_75) {
		var_1_79 = (var_1_68 - (var_1_80 - var_1_81));
	}


	// From: CodeObject17
	if (var_1_33 > var_1_80) {
		if ((~ (abs (var_1_49))) >= var_1_46) {
			var_1_82 = (abs (var_1_68));
		}
	} else {
		var_1_82 = (abs (1.000000000000005E14f));
	}


	// From: CodeObject18
	var_1_83 = (abs (min (var_1_84 , -4)));


	// From: CodeObject19
	if ((var_1_43 | var_1_73) > (var_1_53 & var_1_58)) {
		if (var_1_57 <= ((var_1_43 * var_1_42) & (var_1_72 * var_1_46))) {
			var_1_85 = var_1_40;
		}
	} else {
		var_1_85 = (max ((abs (var_1_70)) , (var_1_81 + var_1_69)));
	}


	// From: CodeObject20
	if (var_1_32 >= var_1_83) {
		if ((max (var_1_65 , var_1_85)) > (var_1_39 * (max (var_1_33 , var_1_34)))) {
			var_1_86 = (abs (var_1_53));
		}
	} else {
		if (var_1_40 >= var_1_35) {
			if (! ((var_1_62 ^ var_1_72) < var_1_58)) {
				var_1_86 = (max ((var_1_43 + (var_1_60 + var_1_44)) , (var_1_53 + var_1_66)));
			}
		}
	}


	// From: CodeObject21
	if ((var_1_52 ^ var_1_38) < (var_1_57 + var_1_32)) {
		var_1_87 = var_1_84;
	} else {
		var_1_87 = ((min (var_1_88 , 0)) + var_1_89);
	}


	// From: CodeObject22
	if (var_1_62 < (min (var_1_52 , (abs (var_1_89))))) {
		if ((~ (max (var_1_73 , var_1_50))) > var_1_86) {
			var_1_90 = (abs (var_1_60 - (max (32 , var_1_66))));
		}
	} else {
		var_1_90 = ((var_1_43 - var_1_73) + (abs (var_1_54)));
	}


	// From: CodeObject23
	if ((- var_1_80) <= (abs (max (var_1_82 , var_1_69)))) {
		var_1_91 = var_1_92;
	}


	// From: CodeObject24
	if ((var_1_41 % (abs (var_1_66))) >= var_1_73) {
		var_1_93 = (min (var_1_52 , (max ((abs (var_1_53)) , var_1_73))));
	} else {
		var_1_93 = var_1_52;
	}


	// From: CodeObject25
	if (var_1_75) {
		if (var_1_82 >= ((abs (var_1_33)) * (min (2.8f , var_1_59)))) {
			var_1_94 = (min ((abs (var_1_88)) , (min (var_1_84 , (abs (var_1_89))))));
		}
	}


	// From: CodeObject26
	if (var_1_40 < var_1_34) {
		var_1_95 = ((abs (max (var_1_66 , var_1_73))) + 5);
	}


	// From: CodeObject27
	if (var_1_77) {
		var_1_96 = (max ((abs (var_1_87)) , (var_1_66 + var_1_94)));
	}


	// From: CodeObject28
	if (var_1_69 < var_1_34) {
		if ((var_1_79 * var_1_70) > (max (var_1_55 , var_1_68))) {
			var_1_97 = (50 - (abs (var_1_89)));
		}
	}


	// From: CodeObject29
	var_1_98 = (var_1_87 + var_1_95);


	// From: CodeObject30
	var_1_99 = (abs ((var_1_68 + var_1_81) - 63.25));


	// From: CodeObject31
	var_1_100 = (((var_1_84 <= var_1_41) || (var_1_76 || var_1_101)) && (var_1_47 || var_1_102));


	// From: CodeObject32
	if (-0.75f > var_1_74) {
		var_1_103 = (100 + (min (var_1_104 , var_1_105)));
	}


	// From: CodeObject33
	if ((abs (min (var_1_56 , var_1_70))) <= var_1_59) {
		var_1_106 = ((abs (var_1_83)) - var_1_92);
	}


	// From: CodeObject34
	if (var_1_94 >= var_1_50) {
		if ((var_1_85 >= var_1_108) || var_1_102) {
			var_1_107 = var_1_68;
		} else {
			if (8.675f >= (abs (abs (var_1_74)))) {
				var_1_107 = var_1_70;
			}
		}
	} else {
		var_1_107 = ((abs (var_1_69)) + var_1_40);
	}


	// From: CodeObject35
	if ((min (var_1_98 , var_1_72)) > var_1_52) {
		if ((var_1_87 ^ var_1_86) != var_1_48) {
			if (var_1_80 < (- var_1_56)) {
				var_1_109 = (abs (min (var_1_56 , var_1_40)));
			} else {
				var_1_109 = (min (var_1_40 , (min (var_1_56 , var_1_81))));
			}
		}
	}


	// From: CodeObject36
	if (var_1_46 < var_1_44) {
		if ((var_1_50 >> var_1_38) < var_1_98) {
			var_1_110 = (max (var_1_97 , var_1_111));
		}
	}


	// From: CodeObject37
	if (var_1_52 >= var_1_57) {
		var_1_112 = ((abs (abs (var_1_62))) + (abs (var_1_83)));
	}


	// From: CodeObject38
	if (var_1_75) {
		if (var_1_114) {
			var_1_113 = ((var_1_66 + (25 + var_1_103)) - (var_1_115 - var_1_54));
		}
	} else {
		var_1_113 = ((min (var_1_104 , var_1_91)) - var_1_53);
	}


	// From: CodeObject39
	if (((-16 << var_1_62) < (2 ^ var_1_50)) && (var_1_52 > var_1_42)) {
		var_1_116 = var_1_64;
	} else {
		var_1_116 = ((var_1_109 >= var_1_39) && var_1_117);
	}


	// From: CodeObject40
	if (1 != (var_1_43 | var_1_106)) {
		var_1_118 = (abs (var_1_83));
	} else {
		var_1_118 = (min (((min (var_1_58 , var_1_53)) + var_1_87) , var_1_62));
	}


	// From: CodeObject41
	if (var_1_42 < var_1_73) {
		if ((min ((max (9.9999999999875E10 , var_1_69)) , var_1_39)) < ((abs (var_1_108)) / var_1_37)) {
			var_1_119 = (var_1_102 && (! var_1_64));
		} else {
			var_1_119 = (! var_1_101);
		}
	}


	// From: CodeObject42
	if (var_1_62 <= var_1_87) {
		if (var_1_121 >= var_1_98) {
			var_1_120 = var_1_54;
		}
	}


	// From: CodeObject43
	if (var_1_112 <= 25) {
		var_1_122 = (abs (var_1_81));
	} else {
		var_1_122 = (max (var_1_69 , var_1_68));
	}


	// From: CodeObject44
	if (var_1_45) {
		if (var_1_118 >= var_1_62) {
			var_1_123 = (min (var_1_88 , 25));
		} else {
			var_1_123 = (max (var_1_84 , var_1_88));
		}
	}


	// From: CodeObject45
	if (var_1_42 >= var_1_92) {
		var_1_124 = (var_1_53 + var_1_104);
	} else {
		var_1_124 = (abs (1));
	}


	// From: CodeObject46
	if (var_1_50 < var_1_66) {
		var_1_125 = (abs (max ((var_1_48 - var_1_90) , (abs (var_1_42)))));
	}


	// From: CodeObject47
	if (var_1_79 > (var_1_35 / (max (127.25 , var_1_59)))) {
		var_1_126 = (abs (var_1_60));
	} else {
		if (var_1_100) {
			var_1_126 = (abs (var_1_54));
		}
	}


	// From: CodeObject48
	if (var_1_77) {
		var_1_127 = (abs (min (var_1_91 , var_1_60)));
	} else {
		var_1_127 = (max ((2332845522u - (var_1_49 - var_1_60)) , ((1690166668u + var_1_50) - var_1_92)));
	}


	// From: CodeObject49
	if (var_1_126 > (var_1_124 ^ (var_1_53 | 256u))) {
		var_1_128 = (! (var_1_102 && (! var_1_63)));
	}


	// From: CodeObject50
	if ((var_1_92 & var_1_53) < var_1_87) {
		var_1_129 = (max (((abs (var_1_73)) + var_1_121) , var_1_83));
	}


	// From: CodeObject51
	if (var_1_75) {
		var_1_130 = (abs (var_1_80 - (max (var_1_68 , var_1_81))));
	}


	// From: CodeObject52
	if (var_1_85 >= 1.75) {
		if (var_1_119 || var_1_117) {
			var_1_131 = (! var_1_76);
		}
	} else {
		var_1_131 = var_1_76;
	}


	// From: CodeObject53
	if (var_1_76) {
		var_1_132 = (min ((abs (var_1_68 - var_1_81)) , (var_1_80 - var_1_133)));
	}


	// From: CodeObject54
	var_1_134 = var_1_92;


	// From: CodeObject55
	if (var_1_102) {
		var_1_135 = (var_1_44 + var_1_66);
	}


	// From: CodeObject56
	if (var_1_109 > var_1_82) {
		var_1_136 = var_1_42;
	}


	// From: CodeObject57
	if (var_1_131) {
		var_1_137 = var_1_54;
	}


	// From: CodeObject58
	var_1_138 = 24.5f;


	// From: CodeObject59
	if (var_1_51) {
		var_1_139 = var_1_118;
	}


	// From: CodeObject60
	if (var_1_47) {
		var_1_140 = var_1_117;
	}


	// From: CodeObject61
	var_1_141 = var_1_117;


	// From: CodeObject62
	var_1_142 = var_1_56;


	// From: CodeObject63
	if (var_1_141) {
		var_1_143 = var_1_92;
	} else {
		var_1_143 = var_1_92;
	}


	// From: CodeObject64
	if (var_1_51) {
		var_1_144 = 32;
	}


	// From: CodeObject65
	if (var_1_128) {
		var_1_145 = var_1_57;
	}


	// From: CodeObject66
	var_1_146 = var_1_54;


	// From: CodeObject67
	if (var_1_77) {
		var_1_147 = var_1_92;
	} else {
		var_1_147 = var_1_104;
	}


	// From: CodeObject68
	var_1_148 = var_1_40;


	// From: CodeObject69
	var_1_149 = var_1_56;


	// From: CodeObject70
	if (var_1_64) {
		var_1_150 = var_1_133;
	} else {
		var_1_150 = var_1_56;
	}


	// From: CodeObject71
	if (var_1_47) {
		var_1_151 = var_1_54;
	}


	// From: CodeObject72
	if (var_1_107 >= 100000.8f) {
		var_1_152 = (abs (var_1_137));
	} else {
		if ((var_1_81 / var_1_59) < (min (var_1_122 , (abs (var_1_40))))) {
			var_1_152 = var_1_106;
		} else {
			var_1_152 = var_1_135;
		}
	}


	// From: Req2Batch55PS_CN_500
	var_1_9 = (min ((var_1_10 - var_1_11) , ((var_1_12 + var_1_13) - var_1_14)));


	// From: Req4Batch55PS_CN_500
	var_1_17 = (var_1_18 + (var_1_19 - var_1_20));


	// From: Req8Batch55PS_CN_500
	var_1_29 = ((abs (var_1_30)) - var_1_20);


	// From: Req9Batch55PS_CN_500
	var_1_31 = var_1_26;


	// From: Req1Batch55PS_CN_500
	if (var_1_17 <= (var_1_17 * (var_1_29 * var_1_29))) {
		if (var_1_29 > var_1_29) {
			var_1_1 = ((min (var_1_6 , var_1_7)) + var_1_8);
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req6Batch55PS_CN_500
	if (var_1_31) {
		var_1_23 = (var_1_24 && var_1_25);
	} else {
		var_1_23 = (var_1_24 && (var_1_25 && var_1_26));
	}


	// From: Req7Batch55PS_CN_500
	if ((- (min (var_1_1 , var_1_8))) >= -0.875) {
		if (var_1_31) {
			var_1_27 = (var_1_19 - var_1_12);
		} else {
			var_1_27 = (var_1_13 - (var_1_28 - (var_1_20 + var_1_19)));
		}
	} else {
		var_1_27 = (min (var_1_29 , var_1_28));
	}


	// From: Req3Batch55PS_CN_500
	if (var_1_23) {
		var_1_15 = (var_1_14 - var_1_13);
	}


	// From: Req5Batch55PS_CN_500
	if (var_1_23) {
		var_1_21 = ((var_1_22 - (1000000000u - var_1_13)) - var_1_14);
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 3221225470);
	assume_abort_if_not(var_1_22 <= 4294967294);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= 16383);
	assume_abort_if_not(var_1_28 <= 32766);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -126);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	assume_abort_if_not(var_1_37 != 0.0F);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= -2147483647);
	assume_abort_if_not(var_1_38 <= 2147483646);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -461168.6018427382800e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 32767);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 16383);
	assume_abort_if_not(var_1_43 <= 32767);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 8191);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 2147483647);
	assume_abort_if_not(var_1_48 <= 4294967294);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 1073741823);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 1073741824);
	assume_abort_if_not(var_1_50 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 254);
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= -922337.2036854765600e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854765600e+12F && var_1_56 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= -128);
	assume_abort_if_not(var_1_58 <= 127);
	assume_abort_if_not(var_1_58 != 0);
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -922337.2036854776000e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
	assume_abort_if_not(var_1_59 != 0.0F);
	var_1_60 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_60 >= 32767);
	assume_abort_if_not(var_1_60 <= 65534);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= -127);
	assume_abort_if_not(var_1_62 <= 127);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 0);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 0);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 255);
	assume_abort_if_not(var_1_66 != 0);
	var_1_67 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_67 >= -2147483648);
	assume_abort_if_not(var_1_67 <= 2147483647);
	var_1_68 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 4611686.018427382800e+12F && var_1_68 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= -461168.6018427382800e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 4611686.018427382800e+12F && var_1_69 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_70 >= -922337.2036854765600e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854765600e+12F && var_1_70 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_72 >= -2147483648);
	assume_abort_if_not(var_1_72 <= 2147483647);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 1);
	assume_abort_if_not(var_1_76 <= 1);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 1);
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= 4611686.018427382800e+12F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854765600e+12F && var_1_80 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_81 >= 0.0F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 4611686.018427382800e+12F && var_1_81 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_84 >= -126);
	assume_abort_if_not(var_1_84 <= 126);
	var_1_88 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_88 >= -63);
	assume_abort_if_not(var_1_88 <= 63);
	var_1_89 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_89 >= -63);
	assume_abort_if_not(var_1_89 <= 63);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 254);
	var_1_101 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_101 >= 1);
	assume_abort_if_not(var_1_101 <= 1);
	var_1_102 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_102 >= 1);
	assume_abort_if_not(var_1_102 <= 1);
	var_1_104 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_104 >= 0);
	assume_abort_if_not(var_1_104 <= 127);
	var_1_105 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_105 >= 0);
	assume_abort_if_not(var_1_105 <= 127);
	var_1_108 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_108 >= -922337.2036854776000e+13F && var_1_108 <= -1.0e-20F) || (var_1_108 <= 9223372.036854776000e+12F && var_1_108 >= 1.0e-20F ));
	var_1_111 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_111 >= -2147483647);
	assume_abort_if_not(var_1_111 <= 2147483646);
	var_1_114 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_114 >= 0);
	assume_abort_if_not(var_1_114 <= 1);
	var_1_115 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_115 >= 16383);
	assume_abort_if_not(var_1_115 <= 32766);
	var_1_117 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_117 >= 0);
	assume_abort_if_not(var_1_117 <= 0);
	var_1_121 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_121 >= 0);
	assume_abort_if_not(var_1_121 <= 65535);
	var_1_133 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_133 >= 0.0F && var_1_133 <= -1.0e-20F) || (var_1_133 <= 9223372.036854765600e+12F && var_1_133 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return (((((((((var_1_17 <= (var_1_17 * (var_1_29 * var_1_29))) ? ((var_1_29 > var_1_29) ? (var_1_1 == ((double) ((min (var_1_6 , var_1_7)) + var_1_8))) : (var_1_1 == ((double) var_1_8))) : (var_1_1 == ((double) var_1_7))) && (var_1_9 == ((signed short int) (min ((var_1_10 - var_1_11) , ((var_1_12 + var_1_13) - var_1_14)))))) && (var_1_23 ? (var_1_15 == ((signed long int) (var_1_14 - var_1_13))) : 1)) && (var_1_17 == ((signed char) (var_1_18 + (var_1_19 - var_1_20))))) && (var_1_23 ? (var_1_21 == ((unsigned long int) ((var_1_22 - (1000000000u - var_1_13)) - var_1_14))) : 1)) && (var_1_31 ? (var_1_23 == ((unsigned char) (var_1_24 && var_1_25))) : (var_1_23 == ((unsigned char) (var_1_24 && (var_1_25 && var_1_26)))))) && (((- (min (var_1_1 , var_1_8))) >= -0.875) ? (var_1_31 ? (var_1_27 == ((signed short int) (var_1_19 - var_1_12))) : (var_1_27 == ((signed short int) (var_1_13 - (var_1_28 - (var_1_20 + var_1_19)))))) : (var_1_27 == ((signed short int) (min (var_1_29 , var_1_28)))))) && (var_1_29 == ((signed char) ((abs (var_1_30)) - var_1_20)))) && (var_1_31 == ((unsigned char) var_1_26))
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
