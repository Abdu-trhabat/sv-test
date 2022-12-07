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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch93PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 0.5;
float var_1_5 = 0.0;
float var_1_6 = 4.2;
float var_1_7 = 31.25;
float var_1_8 = 1.375;
unsigned short int var_1_9 = 32;
unsigned char var_1_10 = 1;
float var_1_11 = 0.625;
unsigned short int var_1_12 = 1;
float var_1_13 = -0.25;
signed short int var_1_14 = 4;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
signed short int var_1_17 = 8;
signed short int var_1_18 = 5;
signed short int var_1_19 = 128;
signed long int var_1_20 = -50;
signed short int var_1_21 = -16;
signed short int var_1_22 = 16;
signed short int var_1_23 = 32;
signed short int var_1_24 = 2;
signed short int var_1_25 = -4;
float var_1_26 = 0.2;
double var_1_27 = -0.375;
double var_1_28 = 255.5;
float var_1_29 = 9999999999999.875;
float var_1_30 = 64.375;
float var_1_31 = 64.2;
float var_1_32 = 5.125;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
unsigned short int var_1_40 = 25;
signed char var_1_41 = 16;
signed char var_1_42 = -8;
signed char var_1_43 = -128;
signed long int var_1_44 = -100;
unsigned short int var_1_45 = 8;
signed short int var_1_46 = 16;
signed short int var_1_47 = 16;
signed short int var_1_48 = -5;
signed short int var_1_49 = 50;
signed long int var_1_50 = -5;
float var_1_51 = 0.625;
signed short int var_1_52 = 0;
float var_1_53 = 2.4;
float var_1_54 = 2.8;
float var_1_55 = 31.5;
float var_1_56 = 5.5;
float var_1_57 = 9.5;
signed short int var_1_58 = 8;
signed short int var_1_59 = 10;
signed short int var_1_60 = 4;
unsigned char var_1_61 = 16;
unsigned char var_1_62 = 8;
unsigned char var_1_63 = 10;
float var_1_64 = 1.4;
unsigned long int var_1_65 = 100;
signed long int var_1_66 = 1;
unsigned long int var_1_67 = 3666826048;
unsigned char var_1_68 = 0;
unsigned char var_1_69 = 0;
signed long int var_1_70 = -1;
signed long int var_1_71 = 10;
double var_1_72 = 8.5;
signed short int var_1_73 = -64;
float var_1_74 = 24.25;
signed short int var_1_75 = -16;
float var_1_76 = 10.6;
float var_1_77 = 25.15;
float var_1_78 = 0.0;
float var_1_79 = 1.75;
unsigned long int var_1_80 = 32;
signed long int var_1_81 = 2094795815;
signed char var_1_82 = 16;
signed char var_1_83 = -8;
signed char var_1_84 = 10;
signed char var_1_85 = 1;
signed char var_1_86 = 8;
signed char var_1_87 = -2;
unsigned char var_1_88 = 4;
unsigned char var_1_89 = 0;
unsigned char var_1_90 = 100;
unsigned char var_1_91 = 4;
unsigned char var_1_92 = 0;
signed long int var_1_93 = -256;
unsigned char var_1_94 = 25;
unsigned char var_1_95 = 128;
unsigned char var_1_96 = 100;
unsigned char var_1_97 = 5;
unsigned char var_1_98 = 64;
signed char var_1_99 = -16;
signed char var_1_100 = 32;
signed char var_1_101 = 32;
unsigned long int var_1_102 = 16;
unsigned long int var_1_103 = 3473718429;
unsigned long int var_1_104 = 3506227077;
signed long int var_1_105 = -128;
double var_1_106 = 64.6;
float var_1_107 = 1.7;
float var_1_108 = 31.2;
unsigned long int var_1_109 = 16;
signed short int var_1_110 = 32;
double var_1_111 = 4.5;
double var_1_112 = 31.4;
unsigned char var_1_113 = 1;
double var_1_114 = 3.5;
unsigned char var_1_115 = 0;
unsigned char var_1_116 = 0;
signed char var_1_117 = -1;
signed short int var_1_118 = -16;
float var_1_119 = 0.4;
unsigned short int var_1_120 = 32;
signed long int var_1_121 = 2;
signed long int var_1_122 = -50;
unsigned char var_1_123 = 10;
double var_1_124 = -0.25;
double var_1_125 = 2.2;
unsigned short int var_1_126 = 0;
signed long int var_1_127 = -4;
signed long int var_1_128 = -100;
double var_1_129 = 49.2;
unsigned short int var_1_130 = 16;
signed long int var_1_131 = 128;
double var_1_132 = 10.5;
signed char var_1_133 = -1;
signed long int var_1_134 = 4;
unsigned short int var_1_135 = 1000;
double var_1_136 = 3.8;
signed char var_1_137 = -10;
signed long int var_1_138 = -64;
signed long int var_1_139 = -128;
double var_1_140 = 255.25;
unsigned char var_1_141 = 0;
signed short int var_1_142 = 8;
signed short int var_1_143 = 50;
unsigned char var_1_144 = 0;
signed char var_1_145 = 1;
signed long int var_1_146 = -32;
unsigned char var_1_147 = 5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((abs (- var_1_27)) <= var_1_28) {
		if ((abs (min (var_1_28 , 25.6))) >= (abs (- var_1_27))) {
			var_1_26 = (max ((var_1_29 - var_1_30) , (max (var_1_31 , var_1_32))));
		}
	} else {
		var_1_26 = (8.25f - var_1_29);
	}


	// From: CodeObject2
	if (var_1_34) {
		var_1_33 = ((var_1_35 && (! var_1_36)) && var_1_37);
	}


	// From: CodeObject3
	var_1_38 = (! (var_1_36 && var_1_39));


	// From: CodeObject4
	if ((var_1_41 + (min (var_1_42 , var_1_43))) <= var_1_44) {
		if (var_1_29 == (max ((abs (var_1_32)) , var_1_28))) {
			var_1_40 = (abs (var_1_45));
		}
	}


	// From: CodeObject5
	if (var_1_36) {
		var_1_46 = (var_1_47 + ((abs (var_1_43)) + var_1_41));
	} else {
		var_1_46 = (var_1_41 + var_1_48);
	}


	// From: CodeObject6
	if (var_1_50 <= 0) {
		if (var_1_30 >= ((var_1_27 / 7.45f) / var_1_51)) {
			var_1_49 = (max ((min ((var_1_52 - 2) , (var_1_42 + var_1_43))) , (max (var_1_48 , var_1_41))));
		} else {
			if ((max ((abs (var_1_27)) , (min (var_1_28 , var_1_30)))) <= var_1_51) {
				var_1_49 = (max (var_1_47 , (abs (var_1_42))));
			} else {
				if (var_1_35) {
					var_1_49 = (max (var_1_41 , var_1_48));
				} else {
					var_1_49 = var_1_48;
				}
			}
		}
	} else {
		var_1_49 = var_1_48;
	}


	// From: CodeObject7
	if (! var_1_34) {
		if ((var_1_29 + (min (2.4 , var_1_30))) <= (abs (var_1_27))) {
			var_1_53 = ((abs (var_1_54)) + (min (var_1_55 , var_1_56)));
		}
	} else {
		if (var_1_32 <= var_1_56) {
			var_1_53 = var_1_32;
		} else {
			if (1.51f < var_1_30) {
				var_1_53 = (abs (var_1_32));
			}
		}
	}


	// From: CodeObject8
	if (var_1_51 > (abs (- var_1_29))) {
		if ((abs (var_1_40)) < (var_1_52 - (abs (var_1_49)))) {
			var_1_57 = var_1_32;
		}
	} else {
		var_1_57 = (abs (max ((abs (var_1_56)) , var_1_30)));
	}


	// From: CodeObject9
	if (var_1_44 >= var_1_50) {
		var_1_58 = ((max (var_1_52 , var_1_59)) - var_1_60);
	}


	// From: CodeObject10
	if (25u > var_1_40) {
		var_1_61 = (128 - (min ((abs (var_1_62)) , var_1_63)));
	} else {
		var_1_61 = var_1_63;
	}


	// From: CodeObject11
	if (var_1_45 >= var_1_63) {
		var_1_64 = (min ((abs (abs (var_1_56))) , (abs (4.9f))));
	}


	// From: CodeObject12
	if ((min ((var_1_40 / var_1_66) , var_1_63)) >= var_1_49) {
		if (var_1_64 >= ((abs (var_1_30)) + 1.00000000008E10f)) {
			if (((var_1_44 | var_1_60) ^ (var_1_62 & var_1_49)) > var_1_58) {
				var_1_65 = (max (var_1_60 , (2225834344u - var_1_63)));
			} else {
				var_1_65 = (abs (var_1_60));
			}
		}
	} else {
		if (var_1_55 >= var_1_26) {
			var_1_65 = (var_1_67 - var_1_61);
		}
	}


	// From: CodeObject13
	if (var_1_44 <= var_1_65) {
		var_1_68 = ((! (var_1_33 || var_1_35)) || var_1_36);
	} else {
		if ((max (var_1_61 , (var_1_44 & var_1_40))) <= var_1_45) {
			var_1_68 = (! ((var_1_43 >= var_1_44) && (var_1_69 || var_1_36)));
		}
	}


	// From: CodeObject14
	if (var_1_63 >= var_1_58) {
		var_1_70 = (max (var_1_47 , var_1_46));
	} else {
		var_1_70 = (abs (var_1_61));
	}


	// From: CodeObject15
	if (var_1_68) {
		var_1_71 = (max ((min (var_1_62 , var_1_40)) , var_1_43));
	}


	// From: CodeObject16
	var_1_72 = var_1_56;


	// From: CodeObject17
	if (var_1_33 || var_1_69) {
		if (var_1_70 < (var_1_65 & var_1_62)) {
			var_1_73 = (min (-10 , (abs (abs (var_1_43)))));
		}
	} else {
		var_1_73 = (var_1_48 + (abs (abs (var_1_41))));
	}


	// From: CodeObject18
	if (((var_1_59 % var_1_66) / var_1_75) <= (var_1_45 * var_1_63)) {
		if ((-64 >> 16) < var_1_46) {
			var_1_74 = (var_1_56 + (var_1_76 + var_1_77));
		} else {
			var_1_74 = (9.2f - (var_1_78 - var_1_79));
		}
	} else {
		var_1_74 = var_1_79;
	}


	// From: CodeObject19
	if ((abs (128)) == (var_1_59 - (var_1_81 - var_1_63))) {
		var_1_80 = ((abs (abs (var_1_67))) - var_1_45);
	}


	// From: CodeObject20
	if ((var_1_44 & var_1_80) >= 5u) {
		if (var_1_49 == (var_1_71 >> var_1_46)) {
			var_1_82 = (max ((max (var_1_83 , var_1_84)) , var_1_85));
		}
	} else {
		if (var_1_40 <= (var_1_70 >> var_1_66)) {
			var_1_82 = (((abs (var_1_86)) + (abs (var_1_87))) + -32);
		}
	}


	// From: CodeObject21
	if (var_1_89 || ((var_1_59 % 16) >= var_1_45)) {
		var_1_88 = (abs (var_1_62));
	} else {
		if (! var_1_35) {
			var_1_88 = (var_1_90 + var_1_91);
		} else {
			var_1_88 = (abs (var_1_63));
		}
	}


	// From: CodeObject22
	if ((abs (max (var_1_28 , var_1_31))) > (min (var_1_26 , var_1_56))) {
		var_1_92 = ((var_1_69 || var_1_36) || (var_1_89 && var_1_39));
	} else {
		if ((var_1_59 % var_1_75) < (max (var_1_52 , (var_1_50 * var_1_93)))) {
			var_1_92 = (! (! (! var_1_39)));
		} else {
			var_1_92 = (var_1_39 && var_1_69);
		}
	}


	// From: CodeObject23
	if (-25 > (abs (var_1_73))) {
		var_1_94 = (var_1_95 - (abs (abs (var_1_63))));
	}


	// From: CodeObject24
	if (var_1_27 > var_1_31) {
		if (var_1_59 <= (abs (var_1_82))) {
			if (var_1_50 >= (var_1_40 / var_1_75)) {
				var_1_96 = (var_1_95 - (16 + var_1_97));
			} else {
				var_1_96 = ((max ((var_1_98 - 5) , (max (var_1_91 , var_1_90)))) + var_1_97);
			}
		}
	} else {
		var_1_96 = (var_1_97 + var_1_62);
	}


	// From: CodeObject25
	if (var_1_60 < var_1_85) {
		if ((var_1_44 + var_1_67) == var_1_80) {
			var_1_99 = (abs (var_1_87));
		} else {
			var_1_99 = ((var_1_97 + var_1_100) - var_1_101);
		}
	}


	// From: CodeObject26
	if (var_1_77 > (var_1_31 * var_1_30)) {
		var_1_102 = (min (((min (var_1_67 , var_1_103)) - (abs (var_1_96))) , (var_1_104 - (var_1_81 - 5u))));
	} else {
		if (var_1_60 < var_1_42) {
			var_1_102 = var_1_94;
		} else {
			var_1_102 = (min (10u , var_1_100));
		}
	}


	// From: CodeObject27
	if (var_1_57 > var_1_27) {
		var_1_105 = ((max (var_1_62 , var_1_97)) - var_1_40);
	}


	// From: CodeObject28
	if ((- (abs (var_1_53))) > 255.75f) {
		if (var_1_38) {
			if (var_1_69) {
				var_1_106 = (min ((abs (var_1_77)) , (abs (var_1_76 + var_1_54))));
			}
		}
	} else {
		var_1_106 = (abs (var_1_31));
	}


	// From: CodeObject29
	if (((min (var_1_91 , var_1_40)) - 100) > var_1_62) {
		var_1_107 = (var_1_108 - (abs (var_1_55)));
	}


	// From: CodeObject30
	if (var_1_37) {
		var_1_109 = (max (var_1_67 , var_1_45));
	} else {
		var_1_109 = (abs (var_1_88));
	}


	// From: CodeObject31
	if (var_1_32 < var_1_72) {
		if (var_1_67 >= 5u) {
			var_1_110 = (abs (var_1_85));
		}
	} else {
		var_1_110 = (var_1_88 - (abs (var_1_100 + var_1_41)));
	}


	// From: CodeObject32
	if (var_1_38) {
		var_1_111 = (max ((max (var_1_108 , (max (var_1_112 , 8.6)))) , var_1_54));
	} else {
		if ((var_1_96 + (min (var_1_49 , var_1_113))) >= var_1_105) {
			if (var_1_107 <= ((abs (var_1_54)) / (min (var_1_78 , var_1_51)))) {
				var_1_111 = ((var_1_77 + (abs (var_1_76))) + (var_1_79 - var_1_114));
			}
		} else {
			var_1_111 = (min (var_1_31 , var_1_29));
		}
	}


	// From: CodeObject33
	if (var_1_46 <= var_1_85) {
		if ((abs (var_1_108)) <= var_1_57) {
			if (var_1_101 > (10 >> var_1_52)) {
				if (var_1_69) {
					var_1_115 = (! var_1_35);
				} else {
					var_1_115 = (! (! (var_1_36 || var_1_39)));
				}
			} else {
				if (var_1_116) {
					var_1_115 = 0;
				}
			}
		} else {
			if (var_1_81 <= -32) {
				var_1_115 = (! (! var_1_36));
			}
		}
	} else {
		var_1_115 = (var_1_36 || var_1_39);
	}


	// From: CodeObject34
	if ((0 & var_1_87) != var_1_105) {
		var_1_117 = (abs (abs (var_1_100)));
	} else {
		var_1_117 = ((abs (var_1_100 - var_1_97)) + var_1_87);
	}


	// From: CodeObject35
	if (var_1_83 < var_1_86) {
		if (! var_1_116) {
			var_1_118 = (25 + (min ((max (var_1_83 , var_1_96)) , -64)));
		} else {
			if (var_1_69) {
				var_1_118 = (abs (var_1_59));
			}
		}
	} else {
		var_1_118 = ((abs (var_1_47)) - (abs (var_1_48)));
	}


	// From: CodeObject36
	if (-32 >= var_1_50) {
		if (var_1_120 > var_1_103) {
			var_1_119 = var_1_76;
		} else {
			var_1_119 = (abs (var_1_30));
		}
	}


	// From: CodeObject37
	if (var_1_92) {
		var_1_121 = (max (-1 , var_1_58));
	}


	// From: CodeObject38
	if (var_1_39) {
		if ((- var_1_63) >= 64) {
			if (var_1_33) {
				var_1_122 = (var_1_41 + (max (var_1_45 , var_1_117)));
			} else {
				if (var_1_68 || var_1_36) {
					var_1_122 = ((abs (var_1_91)) + (min ((var_1_98 - var_1_97) , var_1_85)));
				} else {
					var_1_122 = (abs (var_1_63 - var_1_97));
				}
			}
		}
	}


	// From: CodeObject39
	var_1_123 = (max ((abs (max (var_1_63 , var_1_91))) , var_1_101));


	// From: CodeObject40
	if (var_1_32 < var_1_106) {
		var_1_124 = (var_1_114 + (var_1_79 - var_1_125));
	} else {
		if (var_1_41 < var_1_118) {
			var_1_124 = (max ((max ((abs (var_1_114)) , var_1_30)) , var_1_31));
		}
	}


	// From: CodeObject41
	var_1_126 = var_1_88;


	// From: CodeObject42
	var_1_127 = var_1_128;


	// From: CodeObject43
	if (var_1_92) {
		var_1_129 = var_1_125;
	}


	// From: CodeObject44
	if (var_1_92) {
		var_1_130 = var_1_123;
	}


	// From: CodeObject45
	var_1_131 = var_1_82;


	// From: CodeObject46
	var_1_132 = var_1_55;


	// From: CodeObject47
	if (var_1_36) {
		var_1_133 = var_1_86;
	}


	// From: CodeObject48
	if (var_1_115) {
		var_1_134 = var_1_90;
	}


	// From: CodeObject49
	if (var_1_38) {
		var_1_135 = var_1_94;
	} else {
		var_1_135 = var_1_101;
	}


	// From: CodeObject50
	if (var_1_35) {
		var_1_136 = var_1_112;
	} else {
		var_1_136 = var_1_56;
	}


	// From: CodeObject51
	var_1_137 = var_1_100;


	// From: CodeObject52
	if (var_1_37) {
		var_1_138 = -1;
	}


	// From: CodeObject53
	var_1_139 = var_1_87;


	// From: CodeObject54
	var_1_140 = var_1_79;


	// From: CodeObject55
	if (var_1_89) {
		var_1_141 = var_1_37;
	} else {
		var_1_141 = var_1_39;
	}


	// From: CodeObject56
	if (var_1_115) {
		var_1_142 = -4;
	}


	// From: CodeObject57
	if (var_1_144) {
		var_1_143 = var_1_96;
	} else {
		var_1_143 = var_1_48;
	}


	// From: CodeObject58
	if (var_1_33) {
		var_1_145 = var_1_86;
	} else {
		var_1_145 = var_1_87;
	}


	// From: CodeObject59
	if (var_1_37) {
		var_1_146 = var_1_101;
	}


	// From: CodeObject60
	if (((16 ^ var_1_62) / 200) > var_1_120) {
		var_1_147 = (abs (abs (var_1_98)));
	} else {
		if (var_1_31 >= var_1_77) {
			var_1_147 = var_1_95;
		} else {
			var_1_147 = var_1_62;
		}
	}


	// From: Req3Batch93PS_CN_500
	if (var_1_10) {
		var_1_13 = (max (var_1_7 , var_1_5));
	} else {
		var_1_13 = (min (10.15f , (var_1_6 + var_1_8)));
	}


	// From: Req4Batch93PS_CN_500
	unsigned char stepLocal_5 = ! (var_1_10 || var_1_15);
	if (stepLocal_5 || var_1_16) {
		var_1_14 = (max (var_1_17 , (var_1_18 - var_1_19)));
	}


	// From: Req6Batch93PS_CN_500
	if (var_1_15) {
		var_1_21 = ((var_1_22 + 25) - var_1_19);
	}


	// From: Req7Batch93PS_CN_500
	if (var_1_10) {
		var_1_23 = (var_1_22 + ((abs (var_1_24)) + var_1_25));
	} else {
		if (var_1_16) {
			var_1_23 = var_1_24;
		} else {
			var_1_23 = var_1_17;
		}
	}


	// From: Req2Batch93PS_CN_500
	unsigned char stepLocal_4 = var_1_13 < (var_1_8 / var_1_11);
	unsigned char stepLocal_3 = var_1_13 != var_1_11;
	if (var_1_10 || stepLocal_4) {
		if (var_1_10 || stepLocal_3) {
			var_1_9 = 8;
		}
	} else {
		var_1_9 = var_1_12;
	}


	// From: Req5Batch93PS_CN_500
	if (var_1_16) {
		var_1_20 = (var_1_9 - 50);
	}


	// From: Req1Batch93PS_CN_500
	signed short int stepLocal_2 = var_1_21;
	signed short int stepLocal_1 = var_1_21;
	signed long int stepLocal_0 = var_1_14 - var_1_20;
	if ((var_1_20 + var_1_14) < stepLocal_2) {
		if (var_1_21 <= stepLocal_0) {
			if (stepLocal_1 < var_1_14) {
				var_1_1 = ((var_1_5 - var_1_6) - var_1_7);
			}
		} else {
			var_1_1 = ((min (var_1_6 , var_1_8)) + 3.25f);
		}
	} else {
		var_1_1 = var_1_8;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 4611686.018427382800e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= -32767);
	assume_abort_if_not(var_1_17 <= 32766);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= -1);
	assume_abort_if_not(var_1_18 <= 32766);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 16383);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -8192);
	assume_abort_if_not(var_1_24 <= 8192);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -8191);
	assume_abort_if_not(var_1_25 <= 8191);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854765600e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854765600e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -128);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -128);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -128);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_44 >= -2147483648);
	assume_abort_if_not(var_1_44 <= 2147483647);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_47 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_47 >= -16383);
	assume_abort_if_not(var_1_47 <= 16383);
	var_1_48 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_48 >= -16383);
	assume_abort_if_not(var_1_48 <= 16383);
	var_1_50 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_50 >= -2147483648);
	assume_abort_if_not(var_1_50 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
	assume_abort_if_not(var_1_51 != 0.0F);
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= -1);
	assume_abort_if_not(var_1_52 <= 32766);
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -461168.6018427382800e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= -461168.6018427382800e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -461168.6018427382800e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_59 >= -1);
	assume_abort_if_not(var_1_59 <= 32766);
	var_1_60 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 32766);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 127);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 127);
	var_1_66 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_66 >= -2147483648);
	assume_abort_if_not(var_1_66 <= 2147483647);
	assume_abort_if_not(var_1_66 != 0);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 2147483647);
	assume_abort_if_not(var_1_67 <= 4294967294);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 0);
	var_1_75 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_75 >= -32768);
	assume_abort_if_not(var_1_75 <= 32767);
	assume_abort_if_not(var_1_75 != 0);
	var_1_76 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_76 >= -230584.3009213691390e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 2305843.009213691390e+12F && var_1_76 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_77 >= -230584.3009213691390e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 2305843.009213691390e+12F && var_1_77 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= 4611686.018427382800e+12F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 9223372.036854765600e+12F && var_1_78 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_79 >= 0.0F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 4611686.018427382800e+12F && var_1_79 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_81 >= 1073741823);
	assume_abort_if_not(var_1_81 <= 2147483647);
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= -127);
	assume_abort_if_not(var_1_83 <= 126);
	var_1_84 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_84 >= -127);
	assume_abort_if_not(var_1_84 <= 126);
	var_1_85 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_85 >= -127);
	assume_abort_if_not(var_1_85 <= 126);
	var_1_86 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_86 >= -32);
	assume_abort_if_not(var_1_86 <= 32);
	var_1_87 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_87 >= -31);
	assume_abort_if_not(var_1_87 <= 31);
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 0);
	assume_abort_if_not(var_1_89 <= 1);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 127);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 127);
	var_1_93 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_93 >= -2147483648);
	assume_abort_if_not(var_1_93 <= 2147483647);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 127);
	assume_abort_if_not(var_1_95 <= 254);
	var_1_97 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_97 >= 0);
	assume_abort_if_not(var_1_97 <= 63);
	var_1_98 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_98 >= 63);
	assume_abort_if_not(var_1_98 <= 127);
	var_1_100 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_100 >= 0);
	assume_abort_if_not(var_1_100 <= 63);
	var_1_101 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_101 >= 0);
	assume_abort_if_not(var_1_101 <= 126);
	var_1_103 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_103 >= 2147483647);
	assume_abort_if_not(var_1_103 <= 4294967294);
	var_1_104 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_104 >= 2147483647);
	assume_abort_if_not(var_1_104 <= 4294967294);
	var_1_108 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_108 >= 0.0F && var_1_108 <= -1.0e-20F) || (var_1_108 <= 9223372.036854765600e+12F && var_1_108 >= 1.0e-20F ));
	var_1_112 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_112 >= -922337.2036854765600e+13F && var_1_112 <= -1.0e-20F) || (var_1_112 <= 9223372.036854765600e+12F && var_1_112 >= 1.0e-20F ));
	var_1_113 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_113 >= 0);
	assume_abort_if_not(var_1_113 <= 255);
	var_1_114 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_114 >= 0.0F && var_1_114 <= -1.0e-20F) || (var_1_114 <= 4611686.018427382800e+12F && var_1_114 >= 1.0e-20F ));
	var_1_116 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_116 >= 0);
	assume_abort_if_not(var_1_116 <= 1);
	var_1_120 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_120 >= 0);
	assume_abort_if_not(var_1_120 <= 65535);
	var_1_125 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_125 >= 0.0F && var_1_125 <= -1.0e-20F) || (var_1_125 <= 4611686.018427382800e+12F && var_1_125 >= 1.0e-20F ));
	var_1_128 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_128 >= -2147483647);
	assume_abort_if_not(var_1_128 <= 2147483646);
	var_1_144 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_144 >= 0);
	assume_abort_if_not(var_1_144 <= 1);
}



void updateLastVariables() {
}

int property() {
	return ((((((((var_1_20 + var_1_14) < var_1_21) ? ((var_1_21 <= (var_1_14 - var_1_20)) ? ((var_1_21 < var_1_14) ? (var_1_1 == ((float) ((var_1_5 - var_1_6) - var_1_7))) : 1) : (var_1_1 == ((float) ((min (var_1_6 , var_1_8)) + 3.25f)))) : (var_1_1 == ((float) var_1_8))) && ((var_1_10 || (var_1_13 < (var_1_8 / var_1_11))) ? ((var_1_10 || (var_1_13 != var_1_11)) ? (var_1_9 == ((unsigned short int) 8)) : 1) : (var_1_9 == ((unsigned short int) var_1_12)))) && (var_1_10 ? (var_1_13 == ((float) (max (var_1_7 , var_1_5)))) : (var_1_13 == ((float) (min (10.15f , (var_1_6 + var_1_8))))))) && (((! (var_1_10 || var_1_15)) || var_1_16) ? (var_1_14 == ((signed short int) (max (var_1_17 , (var_1_18 - var_1_19))))) : 1)) && (var_1_16 ? (var_1_20 == ((signed long int) (var_1_9 - 50))) : 1)) && (var_1_15 ? (var_1_21 == ((signed short int) ((var_1_22 + 25) - var_1_19))) : 1)) && (var_1_10 ? (var_1_23 == ((signed short int) (var_1_22 + ((abs (var_1_24)) + var_1_25)))) : (var_1_16 ? (var_1_23 == ((signed short int) var_1_24)) : (var_1_23 == ((signed short int) var_1_17))))
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
