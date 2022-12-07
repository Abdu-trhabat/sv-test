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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch14PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -10;
unsigned char var_1_4 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned long int var_1_11 = 16;
signed short int var_1_12 = -32;
unsigned char var_1_15 = 8;
unsigned char var_1_17 = 100;
unsigned char var_1_18 = 10;
signed long int var_1_19 = 1;
unsigned char var_1_20 = 5;
float var_1_21 = 25.5;
signed long int var_1_23 = -5;
float var_1_24 = 1.125;
float var_1_25 = 15.25;
signed long int var_1_26 = 5;
unsigned char var_1_28 = 16;
double var_1_29 = 256.5;
unsigned short int var_1_30 = 100;
unsigned short int var_1_31 = 8;
double var_1_32 = 128.6;
double var_1_33 = 25.5;
double var_1_34 = 15.1;
unsigned short int var_1_35 = 0;
signed short int var_1_36 = 2;
unsigned short int var_1_37 = 2;
unsigned short int var_1_38 = 128;
unsigned short int var_1_39 = 8;
unsigned char var_1_40 = 1;
unsigned short int var_1_41 = 4;
signed long int var_1_42 = -50;
unsigned short int var_1_43 = 19531;
unsigned short int var_1_44 = 0;
unsigned short int var_1_45 = 16;
signed short int var_1_46 = 8;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 5;
unsigned char var_1_49 = 32;
double var_1_50 = -0.25;
signed short int var_1_51 = -4;
signed short int var_1_52 = -256;
double var_1_53 = 7.75;
signed short int var_1_54 = -16;
unsigned char var_1_55 = 128;
unsigned char var_1_56 = 4;
double var_1_57 = 4.75;
signed char var_1_58 = -2;
signed char var_1_59 = -4;
signed char var_1_60 = 100;
unsigned char var_1_61 = 16;
unsigned char var_1_62 = 128;
unsigned char var_1_63 = 200;
signed long int var_1_64 = -128;
double var_1_65 = 3.625;
double var_1_66 = 0.0;
double var_1_67 = 256.5;
unsigned long int var_1_68 = 16;
unsigned long int var_1_69 = 2360108314;
double var_1_70 = 999.4;
signed short int var_1_71 = -64;
signed char var_1_72 = -5;
signed char var_1_73 = -1;
signed char var_1_74 = 4;
signed char var_1_75 = 2;
signed char var_1_76 = 1;
unsigned char var_1_77 = 1;
unsigned long int var_1_78 = 256;
unsigned char var_1_79 = 0;
unsigned char var_1_80 = 1;
unsigned char var_1_81 = 0;
unsigned char var_1_82 = 0;
unsigned short int var_1_83 = 5;
unsigned short int var_1_84 = 42716;
signed short int var_1_85 = -25;
unsigned char var_1_86 = 0;
unsigned char var_1_87 = 0;
unsigned char var_1_88 = 0;
signed char var_1_89 = -64;
signed char var_1_90 = 10;
unsigned char var_1_91 = 1;
unsigned char var_1_92 = 16;
signed long int var_1_93 = 1;
unsigned char var_1_94 = 128;
unsigned char var_1_95 = 8;
unsigned short int var_1_96 = 2;
signed short int var_1_97 = 128;
signed short int var_1_98 = -5;
unsigned short int var_1_99 = 128;
unsigned short int var_1_100 = 52222;
unsigned long int var_1_101 = 5;
signed long int var_1_102 = -100;
unsigned char var_1_103 = 4;
unsigned char var_1_104 = 64;
signed char var_1_105 = -1;
double var_1_106 = 0.75;
double var_1_107 = 1.6;
double var_1_108 = 0.0;
double var_1_109 = 4.8;
double var_1_110 = 8.5;
double var_1_111 = 15.5;
signed char var_1_112 = 4;
signed short int var_1_113 = -500;
unsigned long int var_1_114 = 100000000;
unsigned char var_1_115 = 0;
unsigned char var_1_116 = 128;
unsigned long int var_1_117 = 100000;
unsigned char var_1_118 = 1;
signed short int var_1_119 = -100;
signed char var_1_120 = 8;
signed char var_1_121 = 1;
float var_1_122 = 63.75;
float var_1_123 = 199.75;
float var_1_124 = 16.5;
signed long int var_1_125 = 5;
signed char var_1_126 = 50;
signed short int var_1_127 = -50;
unsigned long int var_1_128 = 100;
float var_1_129 = 127.5;
unsigned long int var_1_130 = 3428524751;
signed char var_1_131 = -32;
signed short int var_1_132 = -32;
unsigned short int var_1_133 = 5;
unsigned char var_1_134 = 10;
signed char var_1_135 = 64;
unsigned long int var_1_136 = 64;
unsigned long int var_1_137 = 128;
signed short int var_1_138 = -8;
unsigned long int var_1_139 = 200;
signed short int var_1_140 = -50;
unsigned char var_1_141 = 200;
unsigned char var_1_142 = 0;
unsigned char var_1_143 = 0;
float var_1_144 = 99.4;
unsigned char var_1_145 = 5;
float var_1_146 = 4.625;
float var_1_147 = 5.5;
signed long int var_1_148 = -100000000;
signed short int var_1_149 = -64;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_4 = 0;
unsigned char last_1_var_1_15 = 8;
signed long int last_1_var_1_19 = 1;
float last_1_var_1_21 = 25.5;
signed long int last_1_var_1_26 = 5;
unsigned char last_1_var_1_28 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_30 >= var_1_31) {
		var_1_29 = ((min ((abs (var_1_32)) , (var_1_33 - 3.2))) + var_1_34);
	}


	// From: CodeObject2
	if ((abs (var_1_36)) < var_1_31) {
		if (var_1_32 != (- var_1_29)) {
			var_1_35 = (min ((abs (10)) , 128));
		} else {
			var_1_35 = (min (var_1_37 , var_1_38));
		}
	}


	// From: CodeObject3
	if (var_1_40) {
		if (((var_1_37 ^ var_1_35) ^ (~ var_1_38)) <= var_1_30) {
			var_1_39 = (min (var_1_38 , (abs (abs (var_1_37)))));
		} else {
			var_1_39 = var_1_37;
		}
	} else {
		var_1_39 = (min (var_1_38 , var_1_37));
	}


	// From: CodeObject4
	if ((10 % var_1_42) >= -10) {
		var_1_41 = ((var_1_43 - var_1_44) + (max ((abs (128)) , var_1_45)));
	}


	// From: CodeObject5
	if (var_1_47) {
		var_1_46 = (abs (var_1_44));
	}


	// From: CodeObject6
	if (var_1_42 < 2) {
		var_1_48 = (max (0 , var_1_49));
	} else {
		var_1_48 = var_1_49;
	}


	// From: CodeObject7
	var_1_50 = (min ((abs (var_1_32)) , var_1_34));


	// From: CodeObject8
	if (var_1_47) {
		var_1_51 = (abs (max ((max (-64 , var_1_48)) , var_1_44)));
	}


	// From: CodeObject9
	if (! (var_1_34 > var_1_33)) {
		if (var_1_34 < (min (var_1_32 , var_1_53))) {
			var_1_52 = var_1_44;
		} else {
			var_1_52 = var_1_44;
		}
	}


	// From: CodeObject10
	if ((var_1_55 - (abs (var_1_56))) <= var_1_48) {
		if ((var_1_33 - var_1_57) != var_1_53) {
			var_1_54 = (min (var_1_56 , var_1_55));
		}
	} else {
		var_1_54 = (abs (var_1_55));
	}


	// From: CodeObject11
	if (var_1_51 < ((~ var_1_44) ^ var_1_35)) {
		if (var_1_42 > var_1_38) {
			var_1_58 = (min (var_1_59 , -8));
		} else {
			var_1_58 = ((var_1_60 - 2) - 25);
		}
	}


	// From: CodeObject12
	if (var_1_54 > var_1_39) {
		var_1_61 = ((max (var_1_62 , (max (128 , var_1_63)))) - var_1_60);
	}


	// From: CodeObject13
	if ((abs (abs (var_1_42))) <= var_1_46) {
		var_1_64 = (var_1_31 - 25);
	} else {
		var_1_64 = (abs (abs (abs (var_1_56))));
	}


	// From: CodeObject14
	if (var_1_46 > (min (-4 , (var_1_55 - var_1_43)))) {
		var_1_65 = (var_1_33 - (var_1_66 - var_1_67));
	}


	// From: CodeObject15
	if ((var_1_48 >= var_1_42) && var_1_40) {
		if (var_1_45 <= (var_1_54 + var_1_51)) {
			var_1_68 = (var_1_69 - var_1_41);
		}
	} else {
		if ((1.00000000006E10f / var_1_66) == ((var_1_53 / var_1_70) + var_1_50)) {
			var_1_68 = (var_1_69 - var_1_49);
		}
	}


	// From: CodeObject16
	if ((var_1_63 * var_1_61) <= var_1_56) {
		if (var_1_47) {
			var_1_71 = var_1_49;
		}
	}


	// From: CodeObject17
	if ((var_1_42 / var_1_73) == (abs (var_1_51))) {
		var_1_72 = (((max (var_1_74 , var_1_75)) - 10) + var_1_76);
	} else {
		if ((var_1_69 & var_1_73) >= var_1_31) {
			var_1_72 = (min (var_1_74 , var_1_59));
		}
	}


	// From: CodeObject18
	if ((var_1_58 <= var_1_54) || var_1_47) {
		if (! ((var_1_69 >= var_1_78) || (var_1_66 < var_1_34))) {
			if ((abs (var_1_65)) < var_1_67) {
				var_1_77 = (! (var_1_47 || (var_1_40 || var_1_79)));
			}
		} else {
			if ((var_1_57 - var_1_33) > (abs (5.75))) {
				if ((var_1_62 ^ var_1_75) > ((abs (var_1_35)) | var_1_55)) {
					var_1_77 = (var_1_47 || ((var_1_79 && var_1_80) && var_1_81));
				}
			}
		}
	} else {
		var_1_77 = (var_1_82 || (! (var_1_47 || var_1_80)));
	}


	// From: CodeObject19
	if (((max (var_1_33 , 3.25f)) + var_1_53) > (abs (var_1_29))) {
		var_1_83 = (min (var_1_74 , (min ((var_1_84 - var_1_75) , var_1_62))));
	} else {
		var_1_83 = (abs (var_1_44));
	}


	// From: CodeObject20
	if (var_1_68 > var_1_35) {
		if (((var_1_84 - var_1_60) * var_1_56) != var_1_41) {
			var_1_85 = (min (var_1_48 , var_1_59));
		}
	}


	// From: CodeObject21
	if (var_1_45 < (abs (var_1_43))) {
		if (var_1_82) {
			var_1_86 = (((var_1_58 * var_1_52) > var_1_84) || (! (var_1_87 || var_1_88)));
		}
	}


	// From: CodeObject22
	if (var_1_81) {
		if (var_1_29 < var_1_65) {
			var_1_89 = (min ((abs (var_1_76)) , (max ((abs (var_1_90)) , var_1_75))));
		}
	} else {
		if (! var_1_77) {
			var_1_89 = (abs (var_1_60));
		} else {
			var_1_89 = var_1_74;
		}
	}


	// From: CodeObject23
	if (var_1_46 < (var_1_42 + var_1_56)) {
		if (var_1_40 && var_1_77) {
			var_1_91 = (abs (var_1_56 + var_1_60));
		}
	}


	// From: CodeObject24
	if (var_1_84 > var_1_91) {
		var_1_92 = (min ((abs (var_1_75)) , 2));
	} else {
		var_1_92 = var_1_63;
	}


	// From: CodeObject25
	if (var_1_78 > var_1_37) {
		if (var_1_83 > var_1_46) {
			var_1_93 = (abs (1 - var_1_56));
		}
	}


	// From: CodeObject26
	if (var_1_82) {
		var_1_94 = (16 + (64 - var_1_75));
	} else {
		var_1_94 = (abs (var_1_95));
	}


	// From: CodeObject27
	if (var_1_86) {
		if ((var_1_89 > var_1_43) && (var_1_51 == var_1_69)) {
			var_1_96 = ((min ((61057 - var_1_94) , (abs (57265)))) - (var_1_43 - (10000 - var_1_74)));
		}
	}


	// From: CodeObject28
	if (var_1_80 || var_1_87) {
		var_1_97 = (max ((abs (var_1_44)) , var_1_55));
	}


	// From: CodeObject29
	if (((var_1_41 * var_1_60) * var_1_56) >= (abs (min (var_1_43 , var_1_54)))) {
		if (var_1_61 <= (var_1_84 * var_1_96)) {
			if ((var_1_66 + var_1_29) > var_1_34) {
				if (((min (var_1_63 , var_1_96)) & var_1_45) >= var_1_74) {
					var_1_98 = (max ((abs (var_1_89 + -64)) , var_1_58));
				} else {
					var_1_98 = (var_1_56 + 32);
				}
			}
		}
	}


	// From: CodeObject30
	if (var_1_66 >= (max (var_1_53 , var_1_65))) {
		var_1_99 = (var_1_100 - var_1_63);
	}


	// From: CodeObject31
	if ((max ((var_1_91 + var_1_68) , var_1_102)) >= (- var_1_62)) {
		var_1_101 = (abs (128u));
	}


	// From: CodeObject32
	if (var_1_47) {
		if (((abs (-32)) % var_1_43) > var_1_35) {
			var_1_103 = (var_1_56 + (var_1_104 - (abs (var_1_75))));
		}
	}


	// From: CodeObject33
	if (var_1_31 > var_1_93) {
		if ((var_1_66 / (min (var_1_70 , var_1_106))) <= var_1_65) {
			if (((abs (var_1_34)) + var_1_29) == (var_1_32 / (abs (var_1_66)))) {
				var_1_105 = (var_1_60 - var_1_75);
			}
		}
	} else {
		var_1_105 = (abs (var_1_74));
	}


	// From: CodeObject34
	if ((max (var_1_70 , var_1_32)) > ((var_1_34 / 63.4) * (9.9999999995E9 + var_1_67))) {
		if (-128 < var_1_42) {
			var_1_107 = var_1_66;
		} else {
			if ((- 256) <= var_1_100) {
				var_1_107 = (var_1_67 - (abs (max (var_1_34 , var_1_108))));
			} else {
				if (var_1_72 <= var_1_90) {
					var_1_107 = (abs (var_1_109));
				} else {
					var_1_107 = var_1_110;
				}
			}
		}
	} else {
		var_1_107 = (min (((min (var_1_111 , var_1_67)) - var_1_66) , var_1_32));
	}


	// From: CodeObject35
	if (var_1_61 < var_1_73) {
		if (var_1_44 > (var_1_84 - var_1_55)) {
			if (var_1_87) {
				var_1_112 = (var_1_74 - (abs (var_1_75 + 5)));
			} else {
				var_1_112 = (abs (var_1_76));
			}
		}
	}


	// From: CodeObject36
	if ((var_1_49 / var_1_42) != (var_1_54 | var_1_92)) {
		if (var_1_79) {
			var_1_113 = var_1_104;
		}
	}


	// From: CodeObject37
	if (! (var_1_46 < var_1_74)) {
		var_1_114 = var_1_91;
	}


	// From: CodeObject38
	if (var_1_116 <= var_1_85) {
		var_1_115 = var_1_87;
	}


	// From: CodeObject39
	if (var_1_76 > var_1_69) {
		if (! var_1_81) {
			var_1_117 = (abs (var_1_74));
		}
	}


	// From: CodeObject40
	if (var_1_115 || var_1_80) {
		if (var_1_68 <= (~ var_1_92)) {
			var_1_118 = var_1_82;
		}
	}


	// From: CodeObject41
	if (var_1_56 < var_1_102) {
		if (var_1_34 != (255.927 - (var_1_108 - var_1_33))) {
			var_1_119 = (abs (max ((abs (var_1_62)) , 10)));
		} else {
			var_1_119 = (var_1_44 + -2);
		}
	} else {
		var_1_119 = (abs (abs (var_1_90)));
	}


	// From: CodeObject42
	if (var_1_88 || var_1_86) {
		if (var_1_82) {
			if ((- var_1_41) <= (max (var_1_45 , (var_1_104 << var_1_85)))) {
				var_1_120 = (var_1_75 - (var_1_74 + var_1_121));
			} else {
				var_1_120 = (abs (var_1_121));
			}
		}
	}


	// From: CodeObject43
	if (var_1_29 <= (var_1_67 - var_1_111)) {
		var_1_122 = ((max ((min (var_1_111 , 16.5f)) , var_1_109)) - (max (var_1_67 , (min (var_1_33 , var_1_66)))));
	} else {
		var_1_122 = (min (var_1_108 , var_1_123));
	}


	// From: CodeObject44
	if (((abs (var_1_104)) >> var_1_102) <= var_1_93) {
		var_1_124 = (abs (var_1_110));
	} else {
		var_1_124 = (min (var_1_123 , ((abs (100.25f)) + var_1_32)));
	}


	// From: CodeObject45
	if (var_1_118) {
		if ((var_1_126 | (var_1_35 + var_1_36)) > (abs (var_1_112))) {
			var_1_125 = (min (var_1_98 , var_1_36));
		} else {
			var_1_125 = (min (var_1_76 , var_1_43));
		}
	} else {
		var_1_125 = (max (var_1_85 , var_1_84));
	}


	// From: CodeObject46
	if (var_1_81) {
		var_1_127 = (abs (var_1_104));
	}


	// From: CodeObject47
	if ((abs (var_1_129)) < var_1_111) {
		if (var_1_73 >= -128) {
			var_1_128 = (max ((var_1_69 - var_1_38) , (var_1_130 - var_1_41)));
		}
	}


	// From: CodeObject48
	var_1_131 = (abs (var_1_76 + var_1_74));


	// From: CodeObject49
	if (var_1_88) {
		var_1_132 = var_1_92;
	} else {
		var_1_132 = var_1_55;
	}


	// From: CodeObject50
	var_1_133 = var_1_56;


	// From: CodeObject51
	if (var_1_86) {
		var_1_134 = var_1_95;
	} else {
		var_1_134 = var_1_60;
	}


	// From: CodeObject52
	if (var_1_82) {
		var_1_135 = var_1_74;
	}


	// From: CodeObject53
	if (var_1_82) {
		var_1_136 = var_1_62;
	} else {
		var_1_136 = var_1_137;
	}


	// From: CodeObject54
	if (var_1_77) {
		var_1_138 = var_1_121;
	}


	// From: CodeObject55
	var_1_139 = var_1_49;


	// From: CodeObject56
	if (var_1_79) {
		var_1_140 = var_1_116;
	}


	// From: CodeObject57
	if (var_1_80) {
		var_1_141 = var_1_62;
	}


	// From: CodeObject58
	if (var_1_115) {
		var_1_142 = var_1_87;
	} else {
		var_1_142 = var_1_143;
	}


	// From: CodeObject59
	if (var_1_79) {
		var_1_144 = var_1_111;
	}


	// From: CodeObject60
	if (var_1_82) {
		var_1_145 = var_1_56;
	} else {
		var_1_145 = var_1_49;
	}


	// From: CodeObject61
	if (var_1_79) {
		var_1_146 = 1.000000000625E9f;
	}


	// From: CodeObject62
	var_1_147 = var_1_123;


	// From: CodeObject63
	if (var_1_47) {
		var_1_148 = var_1_30;
	} else {
		var_1_148 = var_1_116;
	}


	// From: CodeObject64
	if (var_1_67 != var_1_34) {
		if (var_1_85 <= var_1_90) {
			var_1_149 = (abs (abs (var_1_61)));
		} else {
			if (var_1_30 > (abs (var_1_119))) {
				var_1_149 = -8;
			}
		}
	}


	// From: Req3Batch14PS_CN_500
	if ((last_1_var_1_28 / var_1_12) <= last_1_var_1_19) {
		var_1_11 = (max (last_1_var_1_28 , last_1_var_1_15));
	}


	// From: Req4Batch14PS_CN_500
	if ((min (last_1_var_1_21 , -0.5)) > (10.9 * last_1_var_1_21)) {
		if (last_1_var_1_4) {
			var_1_15 = (min ((abs (var_1_17)) , var_1_18));
		} else {
			var_1_15 = var_1_18;
		}
	}


	// From: Req1Batch14PS_CN_500
	var_1_1 = (var_1_15 + var_1_15);


	// From: Req8Batch14PS_CN_500
	var_1_28 = var_1_17;


	// From: Req7Batch14PS_CN_500
	if (var_1_9 || ((var_1_11 + last_1_var_1_26) <= 4)) {
		var_1_26 = (var_1_28 - var_1_20);
	} else {
		var_1_26 = (var_1_20 - var_1_17);
	}


	// From: Req6Batch14PS_CN_500
	if (((~ var_1_28) * var_1_1) >= (var_1_15 % var_1_23)) {
		var_1_21 = (max (var_1_24 , var_1_25));
	}


	// From: Req2Batch14PS_CN_500
	if ((var_1_21 + 9.999999999999994E14f) < (- var_1_21)) {
		var_1_4 = (var_1_7 && var_1_8);
	} else {
		if (var_1_7) {
			var_1_4 = ((var_1_8 || var_1_9) && var_1_10);
		}
	}


	// From: Req5Batch14PS_CN_500
	unsigned char stepLocal_1 = var_1_17;
	signed long int stepLocal_0 = var_1_15 % var_1_20;
	if (stepLocal_0 != var_1_1) {
		if (var_1_18 == stepLocal_1) {
			if (var_1_4) {
				var_1_19 = var_1_18;
			} else {
				var_1_19 = var_1_26;
			}
		}
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32768);
	assume_abort_if_not(var_1_12 <= 32767);
	assume_abort_if_not(var_1_12 != 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 255);
	assume_abort_if_not(var_1_20 != 0);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483648);
	assume_abort_if_not(var_1_23 <= 2147483647);
	assume_abort_if_not(var_1_23 != 0);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854765600e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 65535);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65535);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -461168.6018427382800e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427382800e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -461168.6018427382800e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= -32767);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 65534);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 65534);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -2147483648);
	assume_abort_if_not(var_1_42 <= 2147483647);
	assume_abort_if_not(var_1_42 != 0);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 16383);
	assume_abort_if_not(var_1_43 <= 32767);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 16383);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 32767);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 254);
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= -922337.2036854776000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854776000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 255);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 127);
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854776000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -127);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= 62);
	assume_abort_if_not(var_1_60 <= 126);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 127);
	assume_abort_if_not(var_1_62 <= 254);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 127);
	assume_abort_if_not(var_1_63 <= 254);
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= 4611686.018427382800e+12F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854765600e+12F && var_1_66 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427382800e+12F && var_1_67 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 2147483647);
	assume_abort_if_not(var_1_69 <= 4294967294);
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= -922337.2036854776000e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854776000e+12F && var_1_70 >= 1.0e-20F ));
	assume_abort_if_not(var_1_70 != 0.0F);
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= -128);
	assume_abort_if_not(var_1_73 <= 127);
	assume_abort_if_not(var_1_73 != 0);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 63);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 63);
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= -63);
	assume_abort_if_not(var_1_76 <= 63);
	var_1_78 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 4294967295);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 1);
	assume_abort_if_not(var_1_79 <= 1);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 1);
	assume_abort_if_not(var_1_80 <= 1);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 1);
	assume_abort_if_not(var_1_81 <= 1);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 0);
	var_1_84 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_84 >= 32767);
	assume_abort_if_not(var_1_84 <= 65534);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 0);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 0);
	var_1_90 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_90 >= -126);
	assume_abort_if_not(var_1_90 <= 126);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 254);
	var_1_100 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_100 >= 32767);
	assume_abort_if_not(var_1_100 <= 65534);
	var_1_102 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_102 >= -2147483648);
	assume_abort_if_not(var_1_102 <= 2147483647);
	var_1_104 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_104 >= 63);
	assume_abort_if_not(var_1_104 <= 127);
	var_1_106 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_106 >= -922337.2036854776000e+13F && var_1_106 <= -1.0e-20F) || (var_1_106 <= 9223372.036854776000e+12F && var_1_106 >= 1.0e-20F ));
	assume_abort_if_not(var_1_106 != 0.0F);
	var_1_108 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_108 >= 6917529.027641073700e+12F && var_1_108 <= -1.0e-20F) || (var_1_108 <= 9223372.036854765600e+12F && var_1_108 >= 1.0e-20F ));
	var_1_109 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_109 >= 0.0F && var_1_109 <= -1.0e-20F) || (var_1_109 <= 2305843.009213691390e+12F && var_1_109 >= 1.0e-20F ));
	var_1_110 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_110 >= -922337.2036854765600e+13F && var_1_110 <= -1.0e-20F) || (var_1_110 <= 9223372.036854765600e+12F && var_1_110 >= 1.0e-20F ));
	var_1_111 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_111 >= 0.0F && var_1_111 <= -1.0e-20F) || (var_1_111 <= 9223372.036854765600e+12F && var_1_111 >= 1.0e-20F ));
	var_1_116 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_116 >= 0);
	assume_abort_if_not(var_1_116 <= 255);
	var_1_121 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_121 >= 0);
	assume_abort_if_not(var_1_121 <= 63);
	var_1_123 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_123 >= -922337.2036854765600e+13F && var_1_123 <= -1.0e-20F) || (var_1_123 <= 9223372.036854765600e+12F && var_1_123 >= 1.0e-20F ));
	var_1_126 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_126 >= -128);
	assume_abort_if_not(var_1_126 <= 127);
	var_1_129 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_129 >= -922337.2036854776000e+13F && var_1_129 <= -1.0e-20F) || (var_1_129 <= 9223372.036854776000e+12F && var_1_129 >= 1.0e-20F ));
	var_1_130 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_130 >= 2147483647);
	assume_abort_if_not(var_1_130 <= 4294967294);
	var_1_137 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_137 >= 0);
	assume_abort_if_not(var_1_137 <= 4294967294);
	var_1_143 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_143 >= 0);
	assume_abort_if_not(var_1_143 <= 0);
}



void updateLastVariables() {
	last_1_var_1_4 = var_1_4;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_28 = var_1_28;
}

int property() {
	return (((((((var_1_1 == ((signed long int) (var_1_15 + var_1_15))) && (((var_1_21 + 9.999999999999994E14f) < (- var_1_21)) ? (var_1_4 == ((unsigned char) (var_1_7 && var_1_8))) : (var_1_7 ? (var_1_4 == ((unsigned char) ((var_1_8 || var_1_9) && var_1_10))) : 1))) && (((last_1_var_1_28 / var_1_12) <= last_1_var_1_19) ? (var_1_11 == ((unsigned long int) (max (last_1_var_1_28 , last_1_var_1_15)))) : 1)) && (((min (last_1_var_1_21 , -0.5)) > (10.9 * last_1_var_1_21)) ? (last_1_var_1_4 ? (var_1_15 == ((unsigned char) (min ((abs (var_1_17)) , var_1_18)))) : (var_1_15 == ((unsigned char) var_1_18))) : 1)) && (((var_1_15 % var_1_20) != var_1_1) ? ((var_1_18 == var_1_17) ? (var_1_4 ? (var_1_19 == ((signed long int) var_1_18)) : (var_1_19 == ((signed long int) var_1_26))) : 1) : 1)) && ((((~ var_1_28) * var_1_1) >= (var_1_15 % var_1_23)) ? (var_1_21 == ((float) (max (var_1_24 , var_1_25)))) : 1)) && ((var_1_9 || ((var_1_11 + last_1_var_1_26) <= 4)) ? (var_1_26 == ((signed long int) (var_1_28 - var_1_20))) : (var_1_26 == ((signed long int) (var_1_20 - var_1_17))))) && (var_1_28 == ((unsigned char) var_1_17))
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
