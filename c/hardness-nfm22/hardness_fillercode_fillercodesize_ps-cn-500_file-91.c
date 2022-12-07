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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch91PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -64;
signed short int var_1_5 = 8;
signed short int var_1_6 = 8;
signed short int var_1_7 = 5;
signed short int var_1_8 = 0;
signed char var_1_9 = 5;
signed char var_1_11 = 16;
signed short int var_1_12 = 25;
signed short int var_1_13 = 64;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 16;
float var_1_17 = 1.2;
float var_1_18 = 5.8;
float var_1_19 = 10.25;
float var_1_20 = 2.5;
signed short int var_1_21 = 200;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
signed char var_1_26 = -5;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
float var_1_34 = 0.375;
float var_1_35 = 8.25;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
float var_1_39 = 10000.56;
float var_1_40 = 64.8;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 1;
signed char var_1_43 = -128;
signed char var_1_44 = -32;
unsigned short int var_1_45 = 5;
unsigned short int var_1_46 = 25;
unsigned short int var_1_47 = 0;
unsigned short int var_1_48 = 25;
signed short int var_1_49 = 16;
signed short int var_1_50 = 5;
float var_1_51 = 256.9;
signed short int var_1_52 = 8;
unsigned char var_1_53 = 100;
signed long int var_1_54 = 2;
signed long int var_1_55 = -4;
unsigned short int var_1_56 = 50;
unsigned short int var_1_57 = 20358;
double var_1_58 = 2.5;
double var_1_59 = 16.875;
double var_1_60 = 3.4;
double var_1_61 = 256.75;
double var_1_62 = 9999999999999.5;
unsigned long int var_1_63 = 128;
unsigned long int var_1_64 = 2;
unsigned long int var_1_65 = 10;
unsigned char var_1_66 = 0;
unsigned long int var_1_67 = 2473027558;
unsigned long int var_1_68 = 3299269164;
signed long int var_1_69 = 32;
double var_1_70 = 10.6;
double var_1_71 = 1.9;
unsigned short int var_1_72 = 16;
float var_1_73 = 8.3;
unsigned long int var_1_74 = 2;
unsigned char var_1_75 = 8;
unsigned char var_1_76 = 2;
unsigned short int var_1_77 = 10;
unsigned short int var_1_78 = 23589;
unsigned short int var_1_79 = 25377;
unsigned char var_1_80 = 0;
unsigned short int var_1_81 = 43753;
signed long int var_1_82 = 0;
signed short int var_1_83 = 8;
signed short int var_1_84 = 32;
signed char var_1_85 = 8;
signed char var_1_86 = -8;
signed char var_1_87 = 64;
signed char var_1_88 = 100;
signed char var_1_89 = -10;
signed char var_1_90 = -16;
double var_1_91 = 10000000000.3;
unsigned char var_1_92 = 0;
double var_1_93 = 255.5;
double var_1_94 = 5.8;
double var_1_95 = 99.25;
double var_1_96 = 5.5;
signed short int var_1_97 = -1;
signed short int var_1_98 = -64;
signed long int var_1_99 = -100000;
double var_1_100 = 3.6;
unsigned char var_1_101 = 1;
signed short int var_1_102 = -64;
signed char var_1_103 = -4;
signed char var_1_104 = -10;
signed char var_1_105 = 64;
signed char var_1_106 = 0;
signed short int var_1_107 = 32;
unsigned long int var_1_108 = 32;
unsigned short int var_1_109 = 256;
signed short int var_1_110 = 16;
signed short int var_1_111 = 0;
unsigned short int var_1_112 = 40404;
signed char var_1_113 = 25;
unsigned char var_1_114 = 128;
float var_1_115 = 64.8;
signed short int var_1_116 = -16;
signed short int var_1_117 = 10000;
signed long int var_1_118 = 8;
double var_1_119 = 63.5;
double var_1_120 = 0.0;
double var_1_121 = 0.0;
double var_1_122 = 63.25;
double var_1_123 = 2.5;
unsigned char var_1_124 = 1;
signed short int var_1_125 = 8;
signed short int var_1_126 = 128;
float var_1_127 = 255.5;
unsigned long int var_1_128 = 1;
unsigned long int var_1_129 = 50;
signed char var_1_130 = -5;
float var_1_131 = 127.2;
signed char var_1_132 = 64;
unsigned char var_1_133 = 32;
unsigned char var_1_134 = 0;
float var_1_135 = 10.75;
float var_1_136 = 0.24;
unsigned long int var_1_137 = 0;
float var_1_138 = 1.75;
signed short int var_1_139 = 1;
signed char var_1_140 = -8;
unsigned short int var_1_141 = 64;
unsigned short int var_1_142 = 100;
unsigned short int var_1_143 = 256;
signed long int var_1_144 = 2;
unsigned char var_1_145 = 1;
double var_1_146 = 5.1;
signed long int var_1_147 = -8;
signed short int var_1_148 = 2;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -64;
signed short int last_1_var_1_13 = 64;
unsigned char last_1_var_1_15 = 1;
signed char last_1_var_1_26 = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((! (var_1_29 || var_1_30)) && var_1_28) {
		var_1_27 = (var_1_31 && ((var_1_29 || var_1_32) && (var_1_30 || var_1_33)));
	} else {
		if ((abs (var_1_34)) < var_1_35) {
			var_1_27 = (var_1_36 || (var_1_37 || var_1_38));
		} else {
			if ((var_1_39 - var_1_40) != var_1_35) {
				var_1_27 = var_1_33;
			} else {
				var_1_27 = (! (var_1_38 || var_1_41));
			}
		}
	}


	// From: CodeObject2
	var_1_42 = ((var_1_34 >= (abs (var_1_39))) && var_1_36);


	// From: CodeObject3
	if (var_1_34 >= 24.2f) {
		if (var_1_40 == var_1_35) {
			var_1_43 = ((1 + 10) + var_1_44);
		}
	}


	// From: CodeObject4
	if (var_1_35 > var_1_34) {
		var_1_45 = (abs (var_1_46));
	} else {
		var_1_45 = (var_1_47 + var_1_48);
	}


	// From: CodeObject5
	var_1_49 = (min ((abs (var_1_44)) , var_1_43));


	// From: CodeObject6
	if (var_1_34 <= var_1_35) {
		if (var_1_48 != var_1_45) {
			if (var_1_34 > (5.1f / var_1_51)) {
				var_1_50 = ((var_1_52 - (abs (var_1_43))) + var_1_44);
			} else {
				var_1_50 = (abs (var_1_52));
			}
		}
	} else {
		if ((~ (max (var_1_53 , 4))) < ((var_1_44 % var_1_54) % var_1_55)) {
			if (var_1_28) {
				var_1_50 = var_1_52;
			}
		}
	}


	// From: CodeObject7
	if (var_1_32) {
		var_1_56 = (min ((min (var_1_53 , (abs (var_1_47)))) , var_1_46));
	} else {
		var_1_56 = ((var_1_57 - var_1_52) + var_1_48);
	}


	// From: CodeObject8
	if (var_1_27) {
		var_1_58 = (min (var_1_59 , var_1_60));
	} else {
		var_1_58 = (var_1_61 - var_1_62);
	}


	// From: CodeObject9
	if (var_1_33) {
		var_1_63 = (abs (var_1_52));
	}


	// From: CodeObject10
	if (var_1_41) {
		if (((~ var_1_53) | var_1_49) <= ((max (var_1_54 , var_1_45)) ^ var_1_63)) {
			var_1_64 = (min (var_1_53 , (min (var_1_65 , (max (var_1_52 , var_1_56))))));
		} else {
			if (var_1_66) {
				var_1_64 = (abs (var_1_48));
			} else {
				if (var_1_47 >= var_1_55) {
					if ((min (var_1_35 , var_1_60)) < (max ((var_1_39 / var_1_51) , var_1_40))) {
						var_1_64 = (abs (var_1_45));
					}
				}
			}
		}
	} else {
		if ((var_1_60 * var_1_40) > (abs (var_1_35))) {
			var_1_64 = ((max (var_1_67 , (max (2518735776u , var_1_68)))) - var_1_45);
		}
	}


	// From: CodeObject11
	if (var_1_30) {
		var_1_69 = var_1_45;
	} else {
		var_1_69 = (max (256 , (var_1_57 - var_1_47)));
	}


	// From: CodeObject12
	if (var_1_65 < var_1_53) {
		if ((abs (var_1_43)) > var_1_48) {
			if (var_1_63 >= 100u) {
				var_1_70 = (var_1_71 + 9.99999995E7);
			}
		}
	}


	// From: CodeObject13
	if (var_1_65 <= var_1_53) {
		var_1_72 = var_1_52;
	}


	// From: CodeObject14
	var_1_73 = (abs (var_1_71));


	// From: CodeObject15
	if ((var_1_46 - (var_1_52 + var_1_48)) < var_1_69) {
		var_1_74 = (max (var_1_45 , var_1_56));
	}


	// From: CodeObject16
	if (var_1_39 > var_1_60) {
		var_1_75 = var_1_76;
	}


	// From: CodeObject17
	if (var_1_54 >= (abs (min (var_1_46 , var_1_49)))) {
		var_1_77 = (abs (var_1_53 + (var_1_57 - var_1_75)));
	} else {
		if (! (25 >= (~ var_1_76))) {
			var_1_77 = (max (var_1_53 , var_1_52));
		} else {
			if (var_1_42) {
				var_1_77 = ((17112 + (abs (var_1_78))) - ((max (var_1_57 , var_1_79)) - var_1_76));
			} else {
				var_1_77 = ((23568 + var_1_78) - var_1_53);
			}
		}
	}


	// From: CodeObject18
	if (((var_1_81 - 5) <= var_1_82) || var_1_66) {
		if (var_1_47 <= (var_1_46 % var_1_81)) {
			var_1_80 = (var_1_33 || (var_1_32 && var_1_31));
		} else {
			if ((var_1_65 >> (max (var_1_83 , var_1_84))) <= var_1_78) {
				if (var_1_39 <= var_1_59) {
					var_1_80 = (! var_1_33);
				}
			}
		}
	} else {
		if (var_1_44 > (var_1_84 - (var_1_83 + var_1_85))) {
			var_1_80 = ((! var_1_36) && var_1_33);
		} else {
			var_1_80 = ((var_1_41 || (var_1_33 && var_1_31)) && var_1_32);
		}
	}


	// From: CodeObject19
	if ((var_1_69 % (abs (var_1_78))) >= (var_1_47 >> var_1_54)) {
		var_1_86 = (min ((var_1_44 + (max (var_1_85 , var_1_83))) , ((min (var_1_84 , var_1_87)) - var_1_88)));
	} else {
		if ((abs (var_1_43)) <= (var_1_44 >> var_1_88)) {
			var_1_86 = (abs (var_1_44 + var_1_83));
		} else {
			var_1_86 = (var_1_85 + (min ((var_1_89 + var_1_90) , var_1_83)));
		}
	}


	// From: CodeObject20
	if (var_1_67 >= (var_1_84 ^ (var_1_68 - var_1_47))) {
		var_1_91 = (min (var_1_61 , var_1_60));
	} else {
		var_1_91 = var_1_62;
	}


	// From: CodeObject21
	if (((var_1_91 + var_1_35) * (var_1_39 - var_1_62)) > ((abs (var_1_58)) + var_1_40)) {
		if (! (-16 > var_1_45)) {
			var_1_92 = (((var_1_52 > var_1_87) || var_1_41) && var_1_32);
		}
	}


	// From: CodeObject22
	if (var_1_63 >= (~ var_1_82)) {
		var_1_93 = (max ((var_1_61 - var_1_62) , (var_1_71 + (min (var_1_94 , var_1_95)))));
	} else {
		var_1_93 = (var_1_96 + var_1_71);
	}


	// From: CodeObject23
	if (var_1_41) {
		var_1_97 = (min ((abs (-32)) , var_1_86));
	}


	// From: CodeObject24
	if ((var_1_47 & (-1 << var_1_49)) >= (max ((max (var_1_75 , var_1_44)) , var_1_99))) {
		if (var_1_88 <= var_1_67) {
			if ((abs (max (var_1_51 , var_1_91))) <= (min ((- var_1_70) , (var_1_40 / var_1_100)))) {
				if (((var_1_95 * var_1_71) + (abs (var_1_70))) > (min (var_1_39 , var_1_61))) {
					var_1_98 = (abs (var_1_83 - var_1_75));
				}
			} else {
				if (((var_1_46 + var_1_83) >= var_1_85) && var_1_33) {
					var_1_98 = (abs (var_1_84));
				}
			}
		} else {
			if (var_1_83 < var_1_72) {
				if (! ((var_1_75 ^ -256) > var_1_72)) {
					var_1_98 = var_1_88;
				} else {
					var_1_98 = var_1_76;
				}
			} else {
				var_1_98 = (abs (var_1_89));
			}
		}
	} else {
		if (var_1_77 < var_1_54) {
			var_1_98 = (abs (max ((min (var_1_89 , var_1_43)) , var_1_86)));
		} else {
			var_1_98 = (abs (max ((abs (var_1_83)) , 256)));
		}
	}


	// From: CodeObject25
	if (var_1_66 || (var_1_68 > var_1_85)) {
		var_1_101 = (! (var_1_28 || var_1_41));
	} else {
		var_1_101 = (var_1_41 && (! (var_1_28 && var_1_38)));
	}


	// From: CodeObject26
	if (var_1_47 <= 1) {
		if (((var_1_46 & var_1_63) >> var_1_83) >= var_1_67) {
			if (5 >= var_1_50) {
				var_1_102 = (abs (var_1_43 + var_1_90));
			}
		}
	}


	// From: CodeObject27
	if (var_1_104 <= (var_1_57 + (~ var_1_72))) {
		var_1_103 = (abs (abs (-8)));
	} else {
		var_1_103 = (max ((abs (var_1_87)) , 64));
	}


	// From: CodeObject28
	if (var_1_55 <= (~ (var_1_82 ^ 1000000000))) {
		var_1_105 = (var_1_84 - (abs (var_1_106 - var_1_85)));
	}


	// From: CodeObject29
	var_1_107 = (abs (var_1_83 - (min (var_1_88 , var_1_106))));


	// From: CodeObject30
	if (var_1_45 >= (~ (abs (var_1_77)))) {
		var_1_108 = var_1_85;
	}


	// From: CodeObject31
	if (var_1_27) {
		if (((var_1_76 * var_1_52) >> (var_1_110 - var_1_111)) <= var_1_103) {
			var_1_109 = ((abs (var_1_112)) - var_1_52);
		} else {
			var_1_109 = (abs (var_1_112 - var_1_47));
		}
	}


	// From: CodeObject32
	if ((var_1_76 | var_1_68) >= (var_1_47 >> var_1_56)) {
		var_1_113 = (min (((abs (var_1_89)) + var_1_85) , (abs (var_1_110))));
	} else {
		var_1_113 = (max (var_1_106 , var_1_85));
	}


	// From: CodeObject33
	if (var_1_27) {
		if (var_1_31 || var_1_30) {
			if (var_1_64 < (var_1_78 * (var_1_83 + var_1_67))) {
				var_1_114 = (min ((abs (var_1_85)) , (min (var_1_110 , var_1_84))));
			} else {
				var_1_114 = var_1_111;
			}
		}
	} else {
		var_1_114 = (abs (var_1_88 + (max (var_1_85 , var_1_106))));
	}


	// From: CodeObject34
	if (var_1_40 <= (abs (var_1_62))) {
		if ((var_1_47 * var_1_72) < var_1_57) {
			var_1_115 = (var_1_94 + 24.5f);
		}
	} else {
		if (var_1_41) {
			var_1_115 = (var_1_61 - (256.2f + (abs (var_1_71))));
		} else {
			var_1_115 = (var_1_62 - var_1_61);
		}
	}


	// From: CodeObject35
	if ((var_1_83 % (max (var_1_79 , var_1_112))) > var_1_81) {
		var_1_116 = ((var_1_75 - (abs (var_1_85))) + (var_1_111 - (var_1_117 - var_1_84)));
	}


	// From: CodeObject36
	if (var_1_41) {
		if (((min (var_1_34 , var_1_71)) + var_1_40) < (abs (var_1_100))) {
			var_1_118 = (abs (var_1_46));
		}
	} else {
		var_1_118 = var_1_102;
	}


	// From: CodeObject37
	if (var_1_82 >= var_1_102) {
		if (var_1_31) {
			var_1_119 = var_1_61;
		} else {
			var_1_119 = (((max (var_1_120 , var_1_121)) - (var_1_122 + var_1_123)) - (abs (256.825 + var_1_94)));
		}
	} else {
		var_1_119 = (max ((abs (var_1_62)) , (abs (var_1_71))));
	}


	// From: CodeObject38
	if (var_1_63 <= var_1_111) {
		if (! var_1_28) {
			var_1_124 = (var_1_66 && ((var_1_42 && var_1_38) || var_1_37));
		}
	}


	// From: CodeObject39
	var_1_125 = (var_1_114 - var_1_85);


	// From: CodeObject40
	if (var_1_44 >= var_1_118) {
		var_1_126 = (min (var_1_87 , var_1_113));
	} else {
		var_1_126 = (abs (var_1_113));
	}


	// From: CodeObject41
	if (var_1_84 >= var_1_82) {
		var_1_127 = var_1_123;
	}


	// From: CodeObject42
	if (var_1_33) {
		if (var_1_121 < var_1_71) {
			var_1_128 = var_1_129;
		}
	}


	// From: CodeObject43
	if (var_1_80) {
		var_1_130 = var_1_85;
	} else {
		var_1_130 = var_1_90;
	}


	// From: CodeObject44
	if (var_1_31) {
		var_1_131 = var_1_61;
	}


	// From: CodeObject45
	var_1_132 = 16;


	// From: CodeObject46
	if (var_1_134) {
		var_1_133 = var_1_106;
	} else {
		var_1_133 = 128;
	}


	// From: CodeObject47
	if (var_1_33) {
		var_1_135 = var_1_62;
	} else {
		var_1_135 = var_1_136;
	}


	// From: CodeObject48
	if (var_1_80) {
		var_1_137 = var_1_46;
	}


	// From: CodeObject49
	if (var_1_38) {
		var_1_138 = var_1_59;
	}


	// From: CodeObject50
	if (var_1_92) {
		var_1_139 = var_1_86;
	} else {
		var_1_139 = var_1_133;
	}


	// From: CodeObject51
	if (var_1_92) {
		var_1_140 = var_1_85;
	}


	// From: CodeObject52
	if (var_1_92) {
		var_1_141 = var_1_88;
	}


	// From: CodeObject53
	if (var_1_27) {
		var_1_142 = var_1_79;
	}


	// From: CodeObject54
	var_1_143 = var_1_53;


	// From: CodeObject55
	if (var_1_37) {
		var_1_144 = var_1_132;
	}


	// From: CodeObject56
	if (var_1_29) {
		var_1_145 = var_1_31;
	} else {
		var_1_145 = 1;
	}


	// From: CodeObject57
	if (var_1_30) {
		var_1_146 = var_1_71;
	}


	// From: CodeObject58
	var_1_147 = (var_1_106 - var_1_77);


	// From: CodeObject59
	if (var_1_57 >= var_1_76) {
		if ((abs (var_1_138)) >= (var_1_40 - (min (var_1_122 , var_1_62)))) {
			var_1_148 = -50;
		} else {
			var_1_148 = var_1_110;
		}
	} else {
		var_1_148 = var_1_130;
	}


	// From: Req1Batch91PS_CN_500
	if (last_1_var_1_13 == last_1_var_1_1) {
		if (last_1_var_1_1 <= (max (last_1_var_1_13 , last_1_var_1_26))) {
			var_1_1 = (last_1_var_1_1 + (min ((last_1_var_1_15 - last_1_var_1_15) , (last_1_var_1_15 - last_1_var_1_15))));
		} else {
			var_1_1 = (min ((last_1_var_1_15 - last_1_var_1_15) , ((last_1_var_1_15 - last_1_var_1_15) + -256)));
		}
	}


	// From: Req4Batch91PS_CN_500
	signed long int stepLocal_3 = (var_1_6 + var_1_8) - var_1_5;
	signed short int stepLocal_2 = var_1_1;
	if (var_1_11 < stepLocal_2) {
		if (var_1_7 == stepLocal_3) {
			var_1_15 = var_1_16;
		} else {
			var_1_15 = var_1_16;
		}
	} else {
		var_1_15 = var_1_16;
	}


	// From: Req5Batch91PS_CN_500
	if (var_1_11 < 5) {
		var_1_17 = (max (var_1_18 , (var_1_19 - var_1_20)));
	}


	// From: Req7Batch91PS_CN_500
	var_1_24 = var_1_25;


	// From: Req8Batch91PS_CN_500
	var_1_26 = var_1_11;


	// From: Req6Batch91PS_CN_500
	if (var_1_24) {
		if (var_1_24 && var_1_24) {
			var_1_21 = var_1_15;
		}
	} else {
		var_1_21 = (var_1_15 - 2);
	}


	// From: Req2Batch91PS_CN_500
	unsigned char stepLocal_0 = var_1_15;
	if (var_1_24) {
		var_1_9 = var_1_11;
	} else {
		if (stepLocal_0 <= (var_1_21 / var_1_12)) {
			var_1_9 = var_1_11;
		} else {
			var_1_9 = var_1_11;
		}
	}


	// From: Req3Batch91PS_CN_500
	signed long int stepLocal_1 = var_1_1 * (var_1_15 % var_1_12);
	if ((- var_1_15) >= stepLocal_1) {
		var_1_13 = var_1_26;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32768);
	assume_abort_if_not(var_1_12 <= 32767);
	assume_abort_if_not(var_1_12 != 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -63);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 65534);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 32767);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 32767);
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
	assume_abort_if_not(var_1_51 != 0.0F);
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 16383);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 255);
	var_1_54 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_54 >= -2147483648);
	assume_abort_if_not(var_1_54 <= 2147483647);
	assume_abort_if_not(var_1_54 != 0);
	var_1_55 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_55 >= -2147483648);
	assume_abort_if_not(var_1_55 <= 2147483647);
	assume_abort_if_not(var_1_55 != 0);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 16383);
	assume_abort_if_not(var_1_57 <= 32767);
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -922337.2036854765600e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854765600e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= -922337.2036854765600e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854765600e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854765600e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 4294967294);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 1);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 2147483647);
	assume_abort_if_not(var_1_67 <= 4294967294);
	var_1_68 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_68 >= 2147483647);
	assume_abort_if_not(var_1_68 <= 4294967294);
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= -461168.6018427382800e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427382800e+12F && var_1_71 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 254);
	var_1_78 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_78 >= 16384);
	assume_abort_if_not(var_1_78 <= 32767);
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 16383);
	assume_abort_if_not(var_1_79 <= 32767);
	var_1_81 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_81 >= 32767);
	assume_abort_if_not(var_1_81 <= 65535);
	var_1_82 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_82 >= -2147483648);
	assume_abort_if_not(var_1_82 <= 2147483647);
	var_1_83 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 33);
	var_1_84 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 33);
	var_1_85 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 63);
	var_1_87 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_87 >= -1);
	assume_abort_if_not(var_1_87 <= 126);
	var_1_88 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 126);
	var_1_89 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_89 >= -31);
	assume_abort_if_not(var_1_89 <= 32);
	var_1_90 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_90 >= -31);
	assume_abort_if_not(var_1_90 <= 31);
	var_1_94 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_94 >= -461168.6018427382800e+13F && var_1_94 <= -1.0e-20F) || (var_1_94 <= 4611686.018427382800e+12F && var_1_94 >= 1.0e-20F ));
	var_1_95 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_95 >= -461168.6018427382800e+13F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 4611686.018427382800e+12F && var_1_95 >= 1.0e-20F ));
	var_1_96 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_96 >= -461168.6018427382800e+13F && var_1_96 <= -1.0e-20F) || (var_1_96 <= 4611686.018427382800e+12F && var_1_96 >= 1.0e-20F ));
	var_1_99 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_99 >= -2147483648);
	assume_abort_if_not(var_1_99 <= 2147483647);
	var_1_100 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_100 >= -922337.2036854776000e+13F && var_1_100 <= -1.0e-20F) || (var_1_100 <= 9223372.036854776000e+12F && var_1_100 >= 1.0e-20F ));
	assume_abort_if_not(var_1_100 != 0.0F);
	var_1_104 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_104 >= -128);
	assume_abort_if_not(var_1_104 <= 127);
	var_1_106 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 126);
	var_1_110 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_110 >= 16);
	assume_abort_if_not(var_1_110 <= 32);
	var_1_111 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_111 >= 0);
	assume_abort_if_not(var_1_111 <= 16);
	var_1_112 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_112 >= 32767);
	assume_abort_if_not(var_1_112 <= 65534);
	var_1_117 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_117 >= 8191);
	assume_abort_if_not(var_1_117 <= 16383);
	var_1_120 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_120 >= 4611686.018427382800e+12F && var_1_120 <= -1.0e-20F) || (var_1_120 <= 9223372.036854765600e+12F && var_1_120 >= 1.0e-20F ));
	var_1_121 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_121 >= 4611686.018427382800e+12F && var_1_121 <= -1.0e-20F) || (var_1_121 <= 9223372.036854765600e+12F && var_1_121 >= 1.0e-20F ));
	var_1_122 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_122 >= 0.0F && var_1_122 <= -1.0e-20F) || (var_1_122 <= 2305843.009213691390e+12F && var_1_122 >= 1.0e-20F ));
	var_1_123 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_123 >= 0.0F && var_1_123 <= -1.0e-20F) || (var_1_123 <= 2305843.009213691390e+12F && var_1_123 >= 1.0e-20F ));
	var_1_129 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_129 >= 0);
	assume_abort_if_not(var_1_129 <= 4294967294);
	var_1_134 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_134 >= 0);
	assume_abort_if_not(var_1_134 <= 1);
	var_1_136 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_136 >= -922337.2036854765600e+13F && var_1_136 <= -1.0e-20F) || (var_1_136 <= 9223372.036854765600e+12F && var_1_136 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_26 = var_1_26;
}

int property() {
	return ((((((((last_1_var_1_13 == last_1_var_1_1) ? ((last_1_var_1_1 <= (max (last_1_var_1_13 , last_1_var_1_26))) ? (var_1_1 == ((signed short int) (last_1_var_1_1 + (min ((last_1_var_1_15 - last_1_var_1_15) , (last_1_var_1_15 - last_1_var_1_15)))))) : (var_1_1 == ((signed short int) (min ((last_1_var_1_15 - last_1_var_1_15) , ((last_1_var_1_15 - last_1_var_1_15) + -256)))))) : 1) && (var_1_24 ? (var_1_9 == ((signed char) var_1_11)) : ((var_1_15 <= (var_1_21 / var_1_12)) ? (var_1_9 == ((signed char) var_1_11)) : (var_1_9 == ((signed char) var_1_11))))) && (((- var_1_15) >= (var_1_1 * (var_1_15 % var_1_12))) ? (var_1_13 == ((signed short int) var_1_26)) : 1)) && ((var_1_11 < var_1_1) ? ((var_1_7 == ((var_1_6 + var_1_8) - var_1_5)) ? (var_1_15 == ((unsigned char) var_1_16)) : (var_1_15 == ((unsigned char) var_1_16))) : (var_1_15 == ((unsigned char) var_1_16)))) && ((var_1_11 < 5) ? (var_1_17 == ((float) (max (var_1_18 , (var_1_19 - var_1_20))))) : 1)) && (var_1_24 ? ((var_1_24 && var_1_24) ? (var_1_21 == ((signed short int) var_1_15)) : 1) : (var_1_21 == ((signed short int) (var_1_15 - 2))))) && (var_1_24 == ((unsigned char) var_1_25))) && (var_1_26 == ((signed char) var_1_11))
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
