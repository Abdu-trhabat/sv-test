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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch30PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
unsigned char var_1_4 = 0;
double var_1_5 = 127.5;
double var_1_7 = 10000000000000.125;
double var_1_8 = 1.25;
double var_1_10 = 25.7;
signed long int var_1_11 = -2;
signed long int var_1_13 = 5;
signed long int var_1_14 = 128;
signed long int var_1_15 = 1000;
double var_1_16 = 0.2;
double var_1_17 = 0.25;
double var_1_18 = 99999999999999.5;
signed short int var_1_19 = -64;
double var_1_20 = 256.75;
double var_1_21 = 100.4;
double var_1_22 = 4.5;
double var_1_23 = 5.75;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
signed short int var_1_27 = 2;
signed short int var_1_28 = 100;
signed short int var_1_29 = 32;
signed short int var_1_30 = 64;
signed short int var_1_31 = 64;
signed short int var_1_32 = 5;
unsigned char var_1_33 = 16;
signed char var_1_34 = 16;
signed char var_1_35 = 32;
unsigned char var_1_36 = 16;
unsigned char var_1_37 = 25;
unsigned char var_1_38 = 0;
signed short int var_1_39 = 0;
unsigned short int var_1_40 = 10;
signed char var_1_41 = 25;
signed char var_1_42 = 8;
signed char var_1_43 = 4;
float var_1_44 = 3.2;
float var_1_45 = 10.7;
signed short int var_1_46 = 50;
double var_1_47 = 128.5;
float var_1_48 = 2.7;
double var_1_49 = 63.3;
signed short int var_1_50 = 29642;
float var_1_51 = 4.8;
float var_1_52 = 64.125;
float var_1_53 = 15.4;
float var_1_54 = 10.875;
float var_1_55 = 0.7;
float var_1_56 = 64.9;
float var_1_57 = 0.6;
float var_1_58 = 0.0;
float var_1_59 = 16.6;
unsigned char var_1_60 = 32;
double var_1_61 = 64.1;
unsigned char var_1_62 = 1;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 4;
signed char var_1_65 = -5;
unsigned char var_1_66 = 0;
signed long int var_1_67 = 256;
unsigned short int var_1_68 = 32;
double var_1_69 = 32.5;
signed long int var_1_70 = -4;
signed long int var_1_71 = -4;
unsigned char var_1_72 = 16;
signed long int var_1_73 = 8;
unsigned long int var_1_74 = 8;
float var_1_75 = 0.0;
unsigned char var_1_76 = 64;
double var_1_77 = 63.5;
double var_1_78 = 50.4;
signed long int var_1_79 = -10;
unsigned short int var_1_80 = 32;
unsigned short int var_1_81 = 35635;
unsigned short int var_1_82 = 48808;
signed short int var_1_83 = 25;
float var_1_84 = 3.2;
float var_1_85 = 4.6;
signed long int var_1_86 = -256;
signed short int var_1_87 = 0;
unsigned char var_1_88 = 1;
unsigned char var_1_89 = 0;
unsigned short int var_1_90 = 50;
signed long int var_1_91 = -128;
double var_1_92 = 49.2;
unsigned char var_1_93 = 8;
unsigned char var_1_94 = 1;
signed char var_1_95 = 100;
signed char var_1_96 = -16;
float var_1_97 = 32.8;
unsigned long int var_1_98 = 8;
signed long int var_1_99 = -16;
unsigned long int var_1_100 = 2;
double var_1_101 = 128.5;
signed char var_1_102 = -1;
unsigned char var_1_103 = 1;
signed short int var_1_104 = 64;
unsigned long int var_1_105 = 16;
float var_1_106 = 16.5;
unsigned long int var_1_107 = 2943330267;
unsigned long int var_1_108 = 1536442989;
unsigned long int var_1_109 = 1000000000;
float var_1_110 = 1.8;
unsigned short int var_1_111 = 256;
signed char var_1_112 = 64;
signed char var_1_113 = -4;
signed char var_1_114 = 50;
double var_1_115 = -0.25;
double var_1_116 = 256.9;
double var_1_117 = 63.24;
unsigned char var_1_118 = 64;
unsigned long int var_1_119 = 100;
unsigned char var_1_120 = 8;
unsigned short int var_1_121 = 50;
signed short int var_1_122 = -4;
unsigned char var_1_123 = 1;
unsigned char var_1_124 = 16;
unsigned char var_1_125 = 10;
signed long int var_1_126 = 0;
unsigned char var_1_127 = 0;
float var_1_128 = 49.4;
unsigned long int var_1_129 = 10;
signed long int var_1_130 = -128;
double var_1_131 = 63.6;
unsigned char var_1_132 = 100;
signed short int var_1_133 = -10;
unsigned char var_1_134 = 2;
unsigned long int var_1_135 = 128;
signed char var_1_136 = -64;
signed char var_1_137 = 1;
unsigned char var_1_138 = 0;
signed long int var_1_139 = 25;
signed short int var_1_140 = -64;
unsigned char var_1_141 = 0;
unsigned char var_1_142 = 1;
unsigned char var_1_143 = 4;
signed char var_1_144 = 32;
signed char var_1_145 = 32;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
signed long int last_1_var_1_11 = -2;
signed long int last_1_var_1_15 = 1000;
double last_1_var_1_16 = 0.2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (((abs (var_1_20)) - var_1_21) == (var_1_22 * (abs (var_1_23)))) {
		if (var_1_24) {
			if (var_1_25 && var_1_26) {
				var_1_19 = (max ((var_1_27 - (min (var_1_28 , var_1_29))) , var_1_30));
			} else {
				var_1_19 = (max (var_1_28 , var_1_27));
			}
		} else {
			var_1_19 = (var_1_31 + var_1_32);
		}
	}


	// From: CodeObject2
	if ((var_1_34 - var_1_35) > var_1_27) {
		var_1_33 = (min ((abs (var_1_35)) , (max (var_1_36 , (var_1_37 + var_1_38)))));
	}


	// From: CodeObject3
	if ((var_1_36 & var_1_40) < (var_1_33 * (abs (var_1_30)))) {
		var_1_39 = (min ((var_1_36 + (abs (var_1_33))) , var_1_35));
	}


	// From: CodeObject4
	if ((abs (var_1_31)) <= ((-256 + var_1_36) + var_1_38)) {
		if (((min (var_1_37 , var_1_40)) | var_1_30) >= (var_1_31 >> var_1_29)) {
			var_1_41 = (var_1_42 - var_1_43);
		}
	}


	// From: CodeObject5
	if (var_1_33 <= var_1_35) {
		if (var_1_25) {
			var_1_44 = var_1_45;
		} else {
			if ((~ var_1_31) >= (~ (var_1_41 & var_1_36))) {
				var_1_44 = (abs (var_1_45));
			}
		}
	}


	// From: CodeObject6
	if (var_1_20 != (var_1_21 - var_1_47)) {
		if ((max (var_1_21 , var_1_48)) >= (var_1_23 / var_1_49)) {
			var_1_46 = (max ((min (-5 , var_1_37)) , (var_1_28 - (var_1_50 - var_1_33))));
		}
	}


	// From: CodeObject7
	if (var_1_25 || var_1_26) {
		var_1_51 = var_1_45;
	} else {
		var_1_51 = (max (((var_1_52 + var_1_53) + var_1_54) , (var_1_55 - var_1_56)));
	}


	// From: CodeObject8
	if (var_1_27 == var_1_34) {
		if (var_1_25) {
			var_1_57 = (abs (abs (max (var_1_55 , var_1_56))));
		} else {
			var_1_57 = var_1_45;
		}
	} else {
		var_1_57 = (var_1_56 - (var_1_58 - var_1_59));
	}


	// From: CodeObject9
	if (var_1_40 > ((var_1_29 / var_1_50) * var_1_39)) {
		var_1_60 = (abs (abs (var_1_37)));
	}


	// From: CodeObject10
	if ((var_1_53 + (9.999999999999962E13 * var_1_21)) <= (min (var_1_47 , var_1_22))) {
		if (var_1_58 < var_1_22) {
			var_1_61 = 256.5;
		}
	} else {
		var_1_61 = ((min (var_1_59 , var_1_55)) - (max (var_1_56 , var_1_58)));
	}


	// From: CodeObject11
	if (var_1_25) {
		if ((abs (var_1_48)) == var_1_51) {
			var_1_62 = (! var_1_63);
		}
	} else {
		if (((abs (var_1_19)) ^ var_1_64) <= (8 >> (abs (var_1_65)))) {
			var_1_62 = var_1_66;
		} else {
			var_1_62 = var_1_63;
		}
	}


	// From: CodeObject12
	if (var_1_65 != ((abs (var_1_34)) - var_1_43)) {
		var_1_67 = (abs (var_1_30));
	} else {
		var_1_67 = (min (var_1_50 , ((min (var_1_60 , var_1_37)) - var_1_28)));
	}


	// From: CodeObject13
	if (var_1_46 < (var_1_38 & var_1_27)) {
		var_1_68 = var_1_33;
	}


	// From: CodeObject14
	if (var_1_25) {
		var_1_69 = (abs (abs (var_1_54)));
	}


	// From: CodeObject15
	if ((var_1_68 & (~ var_1_28)) <= (var_1_33 ^ (var_1_30 | -16))) {
		var_1_70 = (abs ((var_1_33 + var_1_27) + (min (var_1_42 , var_1_34))));
	}


	// From: CodeObject16
	if ((-0.8f / (abs (var_1_58))) == var_1_57) {
		var_1_71 = (50 - 32);
	} else {
		var_1_71 = (abs (abs (var_1_34)));
	}


	// From: CodeObject17
	if ((~ var_1_30) < var_1_73) {
		var_1_72 = (min ((abs (var_1_35)) , var_1_43));
	}


	// From: CodeObject18
	if ((abs (var_1_36 + var_1_30)) > var_1_68) {
		if (var_1_66) {
			var_1_74 = (max (var_1_28 , var_1_50));
		}
	} else {
		if (((var_1_75 - var_1_59) - 200.7f) >= 128.2f) {
			if ((var_1_76 | var_1_37) >= var_1_28) {
				var_1_74 = (min (var_1_33 , var_1_36));
			}
		}
	}


	// From: CodeObject19
	var_1_77 = (max (var_1_54 , var_1_58));


	// From: CodeObject20
	if (var_1_50 > var_1_39) {
		var_1_78 = (abs (var_1_45));
	}


	// From: CodeObject21
	if (var_1_66) {
		var_1_80 = (min (((min (var_1_81 , var_1_82)) - (abs (var_1_29))) , var_1_37));
	} else {
		if ((- (max (var_1_68 , var_1_33))) >= ((var_1_32 >> var_1_41) % (max (var_1_81 , var_1_50)))) {
			var_1_80 = var_1_36;
		}
	}


	// From: CodeObject22
	if (var_1_30 > var_1_70) {
		var_1_83 = (abs (max (var_1_27 , var_1_60)));
	} else {
		if (var_1_23 < var_1_69) {
			var_1_83 = var_1_31;
		}
	}


	// From: CodeObject23
	if (var_1_21 <= (max (var_1_59 , var_1_58))) {
		var_1_84 = (var_1_56 - (var_1_85 + 256.5f));
	}


	// From: CodeObject24
	if ((var_1_23 + var_1_58) <= var_1_57) {
		if (var_1_62) {
			var_1_86 = ((abs (var_1_80)) + var_1_40);
		} else {
			var_1_86 = var_1_36;
		}
	} else {
		var_1_86 = (max ((abs (var_1_83)) , var_1_68));
	}


	// From: CodeObject25
	if (var_1_26 || (4 > (abs (var_1_32)))) {
		if (var_1_63) {
			var_1_87 = (max ((var_1_36 - var_1_50) , var_1_34));
		} else {
			if (var_1_50 == var_1_31) {
				var_1_87 = (abs (abs (abs (var_1_32))));
			}
		}
	} else {
		var_1_87 = (abs (-10));
	}


	// From: CodeObject26
	if ((var_1_59 / var_1_58) < var_1_85) {
		var_1_88 = (var_1_66 || var_1_89);
	}


	// From: CodeObject27
	if ((var_1_34 / var_1_81) == var_1_36) {
		var_1_90 = (abs (var_1_28));
	} else {
		var_1_90 = ((var_1_50 - var_1_37) + var_1_64);
	}


	// From: CodeObject28
	if (var_1_89) {
		if ((var_1_36 + var_1_86) == var_1_41) {
			var_1_91 = (abs (var_1_41));
		}
	}


	// From: CodeObject29
	if ((max (var_1_59 , var_1_84)) > var_1_52) {
		if ((var_1_47 > (abs (var_1_55))) || var_1_89) {
			var_1_92 = (abs (abs (var_1_53)));
		}
	} else {
		if ((var_1_34 - var_1_35) < (var_1_27 & (var_1_80 & var_1_86))) {
			var_1_92 = ((abs (var_1_58)) - (abs (63.35)));
		} else {
			var_1_92 = (max ((abs (var_1_55 - var_1_56)) , (max (var_1_85 , var_1_53))));
		}
	}


	// From: CodeObject30
	var_1_93 = (max (var_1_35 , (abs (var_1_94 + var_1_43))));


	// From: CodeObject31
	if ((var_1_32 >> var_1_90) >= (~ 2)) {
		if ((- var_1_91) > var_1_72) {
			var_1_95 = (var_1_65 + (abs (var_1_96)));
		}
	}


	// From: CodeObject32
	if ((abs (100 + 25)) <= var_1_81) {
		var_1_97 = (max (var_1_59 , var_1_45));
	} else {
		var_1_97 = var_1_85;
	}


	// From: CodeObject33
	if ((var_1_83 > (max (var_1_50 , var_1_39))) && var_1_24) {
		var_1_98 = (abs (var_1_29));
	}


	// From: CodeObject34
	if (var_1_69 > (var_1_22 * 10.5)) {
		var_1_99 = (abs (var_1_83));
	}


	// From: CodeObject35
	if ((var_1_50 | var_1_71) >= var_1_99) {
		var_1_100 = ((min (var_1_38 , var_1_76)) + (abs (1000u)));
	} else {
		var_1_100 = (min (var_1_50 , var_1_68));
	}


	// From: CodeObject36
	if (var_1_95 == var_1_86) {
		var_1_101 = (abs (var_1_53));
	} else {
		if ((abs (var_1_71 & var_1_38)) >= 16) {
			var_1_101 = ((max (var_1_58 , var_1_59)) - (abs (var_1_56 - var_1_85)));
		}
	}


	// From: CodeObject37
	if (var_1_25 && var_1_89) {
		var_1_102 = (abs (var_1_43));
	}


	// From: CodeObject38
	if (var_1_74 >= var_1_73) {
		var_1_103 = var_1_63;
	} else {
		if (var_1_54 <= var_1_48) {
			var_1_103 = (! (! (! var_1_66)));
		}
	}


	// From: CodeObject39
	if ((var_1_64 + (var_1_32 % var_1_79)) >= var_1_37) {
		var_1_104 = (min (var_1_36 , (min ((min (var_1_65 , var_1_28)) , var_1_31))));
	}


	// From: CodeObject40
	if (var_1_84 <= 63.75f) {
		var_1_105 = (abs (var_1_72));
	} else {
		if (var_1_90 > (var_1_91 + var_1_64)) {
			var_1_105 = (abs (var_1_38));
		} else {
			if (var_1_106 >= (abs (var_1_75 / var_1_58))) {
				var_1_105 = ((abs (var_1_107)) - (var_1_108 - (var_1_109 - var_1_37)));
			} else {
				var_1_105 = var_1_94;
			}
		}
	}


	// From: CodeObject41
	if (((var_1_47 - var_1_21) / var_1_58) < (- (min (var_1_44 , var_1_20)))) {
		var_1_110 = (abs (var_1_53));
	}


	// From: CodeObject42
	if (var_1_84 > (min ((var_1_75 - var_1_47) , -0.9f))) {
		if (var_1_38 >= var_1_60) {
			var_1_111 = (max (var_1_33 , (min (var_1_29 , var_1_76))));
		}
	}


	// From: CodeObject43
	if (var_1_104 == var_1_74) {
		if (var_1_106 > var_1_20) {
			var_1_112 = (max ((min ((max (var_1_42 , var_1_96)) , 25)) , var_1_65));
		}
	} else {
		var_1_112 = (var_1_65 + (max ((min (var_1_96 , var_1_113)) , var_1_114)));
	}


	// From: CodeObject44
	if (var_1_77 > (max ((var_1_78 * var_1_75) , (1.5 - var_1_47)))) {
		var_1_115 = ((var_1_59 - var_1_85) + (var_1_116 - var_1_117));
	}


	// From: CodeObject45
	var_1_118 = (max (var_1_38 , var_1_36));


	// From: CodeObject46
	if (var_1_55 > (min (var_1_116 , var_1_92))) {
		var_1_119 = (abs (var_1_43));
	}


	// From: CodeObject47
	if ((var_1_91 % (var_1_50 + var_1_121)) < var_1_64) {
		var_1_120 = var_1_37;
	} else {
		if (var_1_24) {
			var_1_120 = (min (var_1_37 , (max (var_1_35 , var_1_94))));
		}
	}


	// From: CodeObject48
	if (var_1_66) {
		if ((min (var_1_118 , var_1_81)) >= (abs (var_1_76 + 256))) {
			var_1_122 = (abs (var_1_41));
		}
	}


	// From: CodeObject49
	if (var_1_88) {
		var_1_123 = (var_1_66 || var_1_89);
	}


	// From: CodeObject50
	if ((var_1_39 ^ var_1_46) >= var_1_95) {
		var_1_124 = (min (var_1_125 , 25));
	}


	// From: CodeObject51
	if (var_1_28 < var_1_93) {
		if ((max (var_1_69 , (abs (var_1_22)))) >= var_1_101) {
			var_1_126 = (var_1_90 + var_1_19);
		}
	} else {
		var_1_126 = var_1_27;
	}


	// From: CodeObject52
	if (var_1_123) {
		var_1_127 = var_1_63;
	}


	// From: CodeObject53
	var_1_128 = var_1_53;


	// From: CodeObject54
	if (var_1_88) {
		var_1_129 = var_1_33;
	}


	// From: CodeObject55
	if (var_1_26) {
		var_1_130 = var_1_37;
	}


	// From: CodeObject56
	var_1_131 = var_1_117;


	// From: CodeObject57
	if (var_1_62) {
		var_1_132 = var_1_35;
	}


	// From: CodeObject58
	if (var_1_24) {
		var_1_133 = var_1_41;
	} else {
		var_1_133 = var_1_34;
	}


	// From: CodeObject59
	if (var_1_123) {
		var_1_134 = var_1_37;
	} else {
		var_1_134 = 4;
	}


	// From: CodeObject60
	var_1_135 = var_1_93;


	// From: CodeObject61
	var_1_136 = var_1_42;


	// From: CodeObject62
	if (var_1_138) {
		var_1_137 = var_1_114;
	} else {
		var_1_137 = 64;
	}


	// From: CodeObject63
	if (var_1_63) {
		var_1_139 = var_1_133;
	}


	// From: CodeObject64
	if (var_1_89) {
		var_1_140 = var_1_28;
	}


	// From: CodeObject65
	if (var_1_62) {
		var_1_141 = var_1_63;
	} else {
		var_1_141 = var_1_89;
	}


	// From: CodeObject66
	if (var_1_123) {
		var_1_142 = var_1_143;
	}


	// From: CodeObject67
	if (var_1_103) {
		var_1_144 = var_1_113;
	} else {
		if (((var_1_69 <= var_1_75) && var_1_88) && var_1_26) {
			if (var_1_81 <= (40483 - (var_1_50 - var_1_76))) {
				var_1_144 = var_1_65;
			} else {
				var_1_144 = var_1_113;
			}
		} else {
			var_1_144 = var_1_145;
		}
	}


	// From: Req4Batch30PS_CN_500
	if (last_1_var_1_1) {
		if ((max (last_1_var_1_16 , 49.75)) > last_1_var_1_16) {
			var_1_11 = (min (last_1_var_1_15 , (max ((var_1_13 - 5) , var_1_14))));
		}
	} else {
		var_1_11 = last_1_var_1_15;
	}


	// From: Req1Batch30PS_CN_500
	signed long int stepLocal_0 = last_1_var_1_11;
	if ((last_1_var_1_11 / (abs (-16))) >= stepLocal_0) {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch30PS_CN_500
	signed long int stepLocal_2 = var_1_11;
	unsigned char stepLocal_1 = var_1_1;
	if (var_1_1) {
		if (var_1_11 >= stepLocal_2) {
			if (stepLocal_1 || (var_1_11 < var_1_11)) {
				var_1_5 = var_1_7;
			}
		} else {
			var_1_5 = var_1_7;
		}
	}


	// From: Req5Batch30PS_CN_500
	if ((- var_1_11) > (var_1_11 & var_1_13)) {
		if (var_1_11 <= 128) {
			if (var_1_1) {
				var_1_15 = var_1_14;
			} else {
				var_1_15 = var_1_14;
			}
		} else {
			var_1_15 = var_1_14;
		}
	} else {
		var_1_15 = var_1_13;
	}


	// From: Req6Batch30PS_CN_500
	if ((min (var_1_5 , last_1_var_1_16)) >= var_1_7) {
		var_1_16 = (var_1_17 + (var_1_18 + 16.75));
	} else {
		var_1_16 = var_1_17;
	}


	// From: Req3Batch30PS_CN_500
	if (10.55f < var_1_16) {
		if (var_1_16 > (var_1_7 * var_1_16)) {
			var_1_8 = (max (var_1_7 , var_1_10));
		}
	} else {
		if (var_1_16 > var_1_7) {
			var_1_8 = var_1_10;
		} else {
			var_1_8 = var_1_7;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483647);
	assume_abort_if_not(var_1_14 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -230584.3009213691390e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -1);
	assume_abort_if_not(var_1_27 <= 32766);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 32766);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32766);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32767);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= -16383);
	assume_abort_if_not(var_1_31 <= 16383);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -16383);
	assume_abort_if_not(var_1_32 <= 16383);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -1);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 65535);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -1);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 126);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -922337.2036854765600e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854765600e+12F && var_1_45 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= -922337.2036854776000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
	assume_abort_if_not(var_1_49 != 0.0F);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 16383);
	assume_abort_if_not(var_1_50 <= 32766);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= -230584.3009213691390e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691390e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= -230584.3009213691390e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 2305843.009213691390e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -461168.6018427382800e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854765600e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854765600e+12F && var_1_56 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 4611686.018427382800e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854765600e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 1);
	assume_abort_if_not(var_1_63 <= 1);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 255);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -32);
	assume_abort_if_not(var_1_65 <= 32);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 0);
	var_1_73 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_73 >= -2147483648);
	assume_abort_if_not(var_1_73 <= 2147483647);
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= 4611686.018427387900e+12F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 9223372.036854776000e+12F && var_1_75 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 255);
	var_1_79 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_79 >= -2147483648);
	assume_abort_if_not(var_1_79 <= 2147483647);
	assume_abort_if_not(var_1_79 != 0);
	var_1_81 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_81 >= 32767);
	assume_abort_if_not(var_1_81 <= 65534);
	var_1_82 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_82 >= 32767);
	assume_abort_if_not(var_1_82 <= 65534);
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 4611686.018427382800e+12F && var_1_85 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 0);
	assume_abort_if_not(var_1_89 <= 0);
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 127);
	var_1_96 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_96 >= -63);
	assume_abort_if_not(var_1_96 <= 63);
	var_1_106 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_106 >= -922337.2036854776000e+13F && var_1_106 <= -1.0e-20F) || (var_1_106 <= 9223372.036854776000e+12F && var_1_106 >= 1.0e-20F ));
	var_1_107 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_107 >= 2147483647);
	assume_abort_if_not(var_1_107 <= 4294967294);
	var_1_108 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_108 >= 1073741823);
	assume_abort_if_not(var_1_108 <= 2147483647);
	var_1_109 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_109 >= 536870911);
	assume_abort_if_not(var_1_109 <= 1073741823);
	var_1_113 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_113 >= -63);
	assume_abort_if_not(var_1_113 <= 63);
	var_1_114 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_114 >= -63);
	assume_abort_if_not(var_1_114 <= 63);
	var_1_116 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_116 >= 0.0F && var_1_116 <= -1.0e-20F) || (var_1_116 <= 4611686.018427382800e+12F && var_1_116 >= 1.0e-20F ));
	var_1_117 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_117 >= 0.0F && var_1_117 <= -1.0e-20F) || (var_1_117 <= 4611686.018427382800e+12F && var_1_117 >= 1.0e-20F ));
	var_1_121 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_121 >= 1);
	assume_abort_if_not(var_1_121 <= 32767);
	var_1_125 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_125 >= 0);
	assume_abort_if_not(var_1_125 <= 254);
	var_1_138 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_138 >= 0);
	assume_abort_if_not(var_1_138 <= 1);
	var_1_143 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_143 >= 0);
	assume_abort_if_not(var_1_143 <= 254);
	var_1_145 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_145 >= -127);
	assume_abort_if_not(var_1_145 <= 126);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_16 = var_1_16;
}

int property() {
	return (((((((last_1_var_1_11 / (abs (-16))) >= last_1_var_1_11) ? (var_1_1 == ((unsigned char) var_1_4)) : 1) && (var_1_1 ? ((var_1_11 >= var_1_11) ? ((var_1_1 || (var_1_11 < var_1_11)) ? (var_1_5 == ((double) var_1_7)) : 1) : (var_1_5 == ((double) var_1_7))) : 1)) && ((10.55f < var_1_16) ? ((var_1_16 > (var_1_7 * var_1_16)) ? (var_1_8 == ((double) (max (var_1_7 , var_1_10)))) : 1) : ((var_1_16 > var_1_7) ? (var_1_8 == ((double) var_1_10)) : (var_1_8 == ((double) var_1_7))))) && (last_1_var_1_1 ? (((max (last_1_var_1_16 , 49.75)) > last_1_var_1_16) ? (var_1_11 == ((signed long int) (min (last_1_var_1_15 , (max ((var_1_13 - 5) , var_1_14)))))) : 1) : (var_1_11 == ((signed long int) last_1_var_1_15)))) && (((- var_1_11) > (var_1_11 & var_1_13)) ? ((var_1_11 <= 128) ? (var_1_1 ? (var_1_15 == ((signed long int) var_1_14)) : (var_1_15 == ((signed long int) var_1_14))) : (var_1_15 == ((signed long int) var_1_14))) : (var_1_15 == ((signed long int) var_1_13)))) && (((min (var_1_5 , last_1_var_1_16)) >= var_1_7) ? (var_1_16 == ((double) (var_1_17 + (var_1_18 + 16.75)))) : (var_1_16 == ((double) var_1_17)))
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
