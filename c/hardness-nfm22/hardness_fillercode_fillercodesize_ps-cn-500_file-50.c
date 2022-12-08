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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch50PS_CN_500.c", 13, "reach_error"); }
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
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
signed short int var_1_9 = -2;
float var_1_13 = 999.4;
float var_1_14 = 100.425;
float var_1_15 = 3.375;
float var_1_16 = 15.9;
signed short int var_1_17 = -10;
signed short int var_1_18 = 18060;
unsigned char var_1_20 = 0;
unsigned long int var_1_21 = 4;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 100;
unsigned char var_1_26 = 32;
unsigned char var_1_27 = 10;
unsigned char var_1_28 = 1;
unsigned short int var_1_29 = 256;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 4;
unsigned char var_1_32 = 2;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 25;
unsigned char var_1_35 = 4;
unsigned short int var_1_36 = 2;
unsigned char var_1_37 = 4;
unsigned char var_1_38 = 2;
signed short int var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
float var_1_43 = 9.25;
float var_1_44 = 255.8;
unsigned short int var_1_45 = 500;
unsigned char var_1_46 = 0;
float var_1_47 = 256.7;
float var_1_48 = 127.875;
float var_1_49 = 31.75;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 2;
unsigned char var_1_54 = 0;
signed long int var_1_55 = 64;
double var_1_56 = 63.125;
unsigned long int var_1_57 = 32;
unsigned long int var_1_58 = 64;
unsigned long int var_1_59 = 2924564344;
signed short int var_1_60 = -128;
unsigned char var_1_61 = 128;
unsigned short int var_1_62 = 2;
double var_1_63 = 25.8;
double var_1_64 = 100.25;
unsigned short int var_1_65 = 1;
signed char var_1_66 = -64;
signed char var_1_67 = -4;
signed char var_1_68 = 5;
unsigned char var_1_69 = 50;
unsigned short int var_1_70 = 2;
unsigned char var_1_71 = 128;
signed short int var_1_72 = -16;
signed short int var_1_73 = -16;
signed char var_1_74 = 8;
signed char var_1_75 = 25;
signed char var_1_76 = 64;
float var_1_77 = -0.5;
signed char var_1_78 = 4;
unsigned char var_1_79 = 25;
unsigned char var_1_80 = 0;
signed char var_1_81 = -4;
double var_1_82 = 4.4;
double var_1_83 = 100.4;
signed short int var_1_84 = -5;
unsigned char var_1_85 = 2;
signed long int var_1_86 = -100000;
signed char var_1_87 = -32;
signed short int var_1_88 = 2;
signed short int var_1_89 = 0;
double var_1_90 = 0.0;
unsigned char var_1_91 = 1;
unsigned char var_1_92 = 1;
unsigned char var_1_93 = 0;
unsigned char var_1_94 = 0;
unsigned char var_1_95 = 0;
unsigned char var_1_96 = 4;
signed char var_1_97 = 4;
unsigned long int var_1_98 = 64;
float var_1_99 = 127.2;
unsigned char var_1_100 = 0;
signed char var_1_101 = 2;
signed short int var_1_102 = -4;
signed long int var_1_103 = -128;
signed char var_1_104 = -32;
signed char var_1_105 = 8;
unsigned short int var_1_106 = 128;
unsigned short int var_1_107 = 1;
signed long int var_1_108 = 500;
signed short int var_1_109 = 0;
unsigned char var_1_110 = 0;
signed long int var_1_111 = 0;
unsigned short int var_1_112 = 2;
float var_1_113 = 7.5;
float var_1_114 = 99999999999999.5;
float var_1_115 = 99.2;
unsigned short int var_1_116 = 64;
signed short int var_1_117 = 32;
signed long int var_1_118 = -64;
signed char var_1_119 = -32;
double var_1_120 = 2.8;
signed char var_1_121 = 4;
unsigned char var_1_122 = 1;
signed short int var_1_123 = -256;
unsigned short int var_1_124 = 10;
unsigned long int var_1_125 = 32;
unsigned char var_1_126 = 1;
unsigned long int var_1_127 = 5;
signed long int var_1_128 = -1;
signed char var_1_129 = -1;
unsigned short int var_1_130 = 10;
float var_1_131 = 128.375;
float var_1_132 = 16.5;
signed short int var_1_133 = -25;
signed long int var_1_134 = -4;
signed long int var_1_135 = 5;
signed long int var_1_136 = 128;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (! (var_1_32 < var_1_33)) {
		if (var_1_33 >= ((64 ^ var_1_32) % 64)) {
			if (var_1_33 >= var_1_32) {
				var_1_31 = (abs (var_1_34 + var_1_35));
			} else {
				var_1_31 = var_1_34;
			}
		} else {
			var_1_31 = var_1_34;
		}
	}


	// From: CodeObject2
	if (var_1_32 >= ((var_1_33 % var_1_37) | var_1_34)) {
		var_1_36 = (var_1_35 + (min (var_1_31 , (min (var_1_37 , var_1_32)))));
	} else {
		if (var_1_31 >= ((var_1_37 / var_1_38) % 64)) {
			var_1_36 = var_1_33;
		}
	}


	// From: CodeObject3
	if (var_1_36 >= var_1_34) {
		var_1_39 = var_1_37;
	}


	// From: CodeObject4
	if (((128 - var_1_35) >> var_1_34) <= var_1_36) {
		if (var_1_31 >= var_1_39) {
			var_1_40 = (var_1_41 && var_1_42);
		}
	}


	// From: CodeObject5
	if ((var_1_35 == (var_1_37 / var_1_38)) || var_1_40) {
		var_1_43 = ((var_1_44 + 9.6f) - 63.4f);
	}


	// From: CodeObject6
	if (var_1_40) {
		var_1_45 = (abs (var_1_35));
	} else {
		if (-8 <= (var_1_39 & 1)) {
			if (var_1_33 <= var_1_37) {
				var_1_45 = (min (var_1_38 , (abs (var_1_32 + var_1_34))));
			}
		}
	}


	// From: CodeObject7
	if ((abs (var_1_44 * var_1_43)) < ((min (var_1_47 , var_1_48)) * var_1_49)) {
		var_1_46 = (var_1_41 || (var_1_40 || var_1_50));
	} else {
		var_1_46 = (var_1_51 || (! var_1_42));
	}


	// From: CodeObject8
	if ((abs (var_1_38)) <= 4) {
		var_1_52 = (min ((max (var_1_35 , var_1_34)) , (abs (var_1_53))));
	} else {
		var_1_52 = ((min (var_1_35 , var_1_34)) + var_1_54);
	}


	// From: CodeObject9
	var_1_55 = (abs (var_1_31));


	// From: CodeObject10
	if (var_1_38 >= var_1_54) {
		var_1_56 = (abs (var_1_44));
	}


	// From: CodeObject11
	if ((min (var_1_32 , var_1_45)) >= var_1_35) {
		if (var_1_50) {
			var_1_57 = (abs (abs (var_1_32)));
		} else {
			if (var_1_31 == (min (var_1_34 , var_1_52))) {
				var_1_57 = var_1_58;
			}
		}
	} else {
		var_1_57 = (max (var_1_33 , (abs (var_1_59 - 32u))));
	}


	// From: CodeObject12
	var_1_60 = (min (var_1_38 , var_1_31));


	// From: CodeObject13
	if (var_1_39 > var_1_45) {
		var_1_61 = (var_1_34 + var_1_35);
	} else {
		var_1_61 = ((abs (var_1_54)) + var_1_34);
	}


	// From: CodeObject14
	if ((min (var_1_38 , var_1_34)) >= (var_1_33 % var_1_37)) {
		if ((abs (5)) < var_1_34) {
			var_1_62 = (4 + (max (var_1_34 , (min (var_1_61 , var_1_35)))));
		}
	}


	// From: CodeObject15
	if (var_1_59 > (var_1_31 % var_1_38)) {
		var_1_63 = (abs (var_1_44 - var_1_64));
	}


	// From: CodeObject16
	if (var_1_57 < var_1_59) {
		var_1_65 = (max (1 , var_1_37));
	} else {
		if (var_1_63 <= var_1_56) {
			if (var_1_54 > var_1_60) {
				var_1_65 = (abs (var_1_38));
			} else {
				var_1_65 = (min (var_1_33 , var_1_32));
			}
		}
	}


	// From: CodeObject17
	if (-25 != (var_1_36 * var_1_57)) {
		var_1_66 = (abs (max (var_1_67 , var_1_68)));
	} else {
		var_1_66 = (abs (abs (var_1_68)));
	}


	// From: CodeObject18
	if (var_1_62 > (abs (var_1_57 ^ var_1_70))) {
		var_1_69 = ((abs (var_1_71)) - (abs (var_1_54)));
	}


	// From: CodeObject19
	if ((var_1_54 & var_1_36) <= var_1_37) {
		var_1_72 = var_1_73;
	}


	// From: CodeObject20
	if (var_1_67 > 4) {
		var_1_74 = (2 + var_1_75);
	} else {
		if ((var_1_61 * var_1_39) >= (var_1_75 ^ var_1_35)) {
			var_1_74 = var_1_75;
		} else {
			if (499.75f == (min (var_1_44 , (- var_1_48)))) {
				if (var_1_33 >= (abs (var_1_65 | var_1_62))) {
					var_1_74 = ((abs (var_1_67)) - var_1_76);
				}
			}
		}
	}


	// From: CodeObject21
	if (var_1_35 > var_1_73) {
		if ((min (var_1_54 , var_1_70)) == -256) {
			var_1_77 = (abs (var_1_44));
		}
	}


	// From: CodeObject22
	if (((-1 % var_1_37) << (var_1_79 - var_1_80)) >= var_1_34) {
		var_1_78 = (abs (abs (var_1_67)));
	}


	// From: CodeObject23
	if (16.45f >= (- var_1_44)) {
		if (var_1_46) {
			var_1_81 = (abs (var_1_75));
		}
	}


	// From: CodeObject24
	if ((abs (var_1_44)) < (min (var_1_77 , (max (1.75f , var_1_47))))) {
		var_1_82 = (min (((min (var_1_44 , 63.25)) + var_1_83) , var_1_64));
	} else {
		if (((min (var_1_53 , var_1_45)) | var_1_57) < var_1_37) {
			var_1_82 = var_1_83;
		}
	}


	// From: CodeObject25
	if (var_1_68 > -64) {
		var_1_84 = (max (var_1_61 , (min (var_1_80 , (var_1_35 + var_1_53)))));
	}


	// From: CodeObject26
	if (((var_1_79 + var_1_71) >> (4 + 16)) >= var_1_86) {
		if (var_1_67 < var_1_87) {
			if ((var_1_72 <= var_1_70) || var_1_40) {
				var_1_85 = (abs (var_1_34));
			} else {
				if (var_1_42) {
					var_1_85 = (abs (min (var_1_80 , 0)));
				} else {
					var_1_85 = (abs (var_1_34));
				}
			}
		}
	}


	// From: CodeObject27
	if (var_1_84 <= var_1_36) {
		var_1_88 = ((max ((min (-256 , var_1_75)) , var_1_89)) + var_1_32);
	} else {
		var_1_88 = (abs (var_1_35));
	}


	// From: CodeObject28
	if ((var_1_72 < var_1_61) || var_1_41) {
		if ((min ((var_1_74 | var_1_76) , (min (var_1_68 , var_1_36)))) >= var_1_85) {
			var_1_90 = (min ((var_1_44 - var_1_64) , var_1_83));
		} else {
			if (var_1_62 >= var_1_70) {
				var_1_90 = var_1_44;
			}
		}
	}


	// From: CodeObject29
	if (var_1_37 >= var_1_86) {
		if ((min (var_1_32 , (var_1_80 + var_1_86))) <= ((var_1_36 / 4) / var_1_79)) {
			if ((var_1_57 % var_1_37) <= (var_1_38 % var_1_71)) {
				var_1_91 = (! (var_1_50 && var_1_92));
			} else {
				var_1_91 = (((var_1_92 && var_1_42) || (var_1_93 || var_1_94)) || var_1_95);
			}
		}
	} else {
		var_1_91 = var_1_94;
	}


	// From: CodeObject30
	if (var_1_35 < var_1_72) {
		var_1_96 = (abs (abs (var_1_80)));
	} else {
		var_1_96 = var_1_35;
	}


	// From: CodeObject31
	if (var_1_85 > var_1_36) {
		var_1_97 = (-50 + (abs (2)));
	}


	// From: CodeObject32
	if (var_1_93) {
		var_1_98 = (min ((abs (var_1_65)) , var_1_85));
	}


	// From: CodeObject33
	if (var_1_94) {
		var_1_99 = (abs (var_1_83));
	}


	// From: CodeObject34
	if (var_1_36 < ((abs (16)) ^ var_1_35)) {
		if (var_1_75 == (var_1_80 - 5)) {
			var_1_100 = (var_1_50 && var_1_92);
		} else {
			var_1_100 = (var_1_42 || var_1_95);
		}
	}


	// From: CodeObject35
	if (var_1_89 <= -16) {
		var_1_101 = (var_1_79 - var_1_80);
	}


	// From: CodeObject36
	if ((abs (var_1_66)) < (var_1_86 % var_1_38)) {
		if (var_1_31 > (var_1_53 + (var_1_34 / var_1_38))) {
			if (var_1_79 <= (var_1_71 & var_1_72)) {
				var_1_102 = var_1_35;
			} else {
				var_1_102 = (abs (var_1_35 + -8));
			}
		}
	}


	// From: CodeObject37
	if (var_1_45 <= var_1_85) {
		var_1_103 = (256 - var_1_36);
	} else {
		if ((abs (var_1_80)) > var_1_84) {
			if (var_1_94) {
				var_1_103 = (max ((var_1_79 - (abs (64))) , var_1_68));
			} else {
				var_1_103 = var_1_37;
			}
		}
	}


	// From: CodeObject38
	if (var_1_66 >= var_1_57) {
		var_1_104 = ((max ((max (var_1_79 , var_1_76)) , (abs (var_1_67)))) - (max (var_1_80 , var_1_105)));
	}


	// From: CodeObject39
	if ((- (var_1_44 - var_1_64)) > var_1_83) {
		var_1_106 = (abs (var_1_35));
	}


	// From: CodeObject40
	if (var_1_101 < (abs (var_1_34))) {
		if (var_1_67 <= var_1_81) {
			if (var_1_104 == var_1_60) {
				var_1_107 = (abs (abs (var_1_32)));
			}
		} else {
			var_1_107 = (min (var_1_85 , (abs (var_1_37))));
		}
	}


	// From: CodeObject41
	if (var_1_57 <= var_1_52) {
		if ((var_1_45 ^ 2) <= var_1_84) {
			var_1_108 = 5;
		} else {
			if (var_1_50) {
				var_1_108 = (abs (var_1_35));
			} else {
				var_1_108 = (min ((var_1_33 - var_1_54) , (var_1_62 + -16)));
			}
		}
	} else {
		var_1_108 = (abs (var_1_39));
	}


	// From: CodeObject42
	if (! ((var_1_70 + var_1_79) < var_1_75)) {
		var_1_109 = (abs (var_1_37));
	}


	// From: CodeObject43
	if ((var_1_111 > -1000) || (var_1_54 >= (var_1_59 | var_1_104))) {
		var_1_110 = ((var_1_51 && var_1_94) || var_1_42);
	} else {
		if (var_1_46) {
			var_1_110 = (var_1_40 && (! var_1_92));
		} else {
			var_1_110 = (var_1_42 || (var_1_92 && (var_1_41 && var_1_94)));
		}
	}


	// From: CodeObject44
	if ((- var_1_72) < (var_1_53 & var_1_68)) {
		if ((var_1_89 << var_1_101) == var_1_75) {
			var_1_112 = var_1_80;
		} else {
			var_1_112 = (abs (abs (var_1_80)));
		}
	} else {
		var_1_112 = (min (var_1_96 , (abs (var_1_61))));
	}


	// From: CodeObject45
	if ((abs (var_1_48)) >= ((abs (var_1_49)) - var_1_44)) {
		var_1_113 = ((var_1_114 + var_1_115) + var_1_83);
	} else {
		if (var_1_78 >= var_1_112) {
			if (var_1_114 < var_1_115) {
				var_1_113 = (min ((var_1_115 + (abs (24.8f))) , var_1_83));
			} else {
				var_1_113 = (abs (var_1_114));
			}
		}
	}


	// From: CodeObject46
	if (var_1_62 >= (64 % var_1_71)) {
		var_1_116 = (abs (var_1_80));
	}


	// From: CodeObject47
	if (var_1_90 > (max ((- var_1_113) , var_1_82))) {
		var_1_117 = var_1_38;
	}


	// From: CodeObject48
	if (var_1_50) {
		var_1_118 = var_1_102;
	}


	// From: CodeObject49
	if ((var_1_63 / var_1_120) <= var_1_99) {
		var_1_119 = (abs (max (var_1_105 , var_1_76)));
	} else {
		if (var_1_116 <= var_1_109) {
			var_1_119 = (min ((min (var_1_79 , 16)) , var_1_80));
		} else {
			var_1_119 = var_1_105;
		}
	}


	// From: CodeObject50
	var_1_121 = var_1_79;


	// From: CodeObject51
	if (var_1_51) {
		var_1_122 = 0;
	} else {
		var_1_122 = 1;
	}


	// From: CodeObject52
	if (var_1_40) {
		var_1_123 = var_1_66;
	} else {
		var_1_123 = var_1_33;
	}


	// From: CodeObject53
	if (var_1_122) {
		var_1_124 = var_1_33;
	}


	// From: CodeObject54
	if (var_1_51) {
		var_1_125 = var_1_32;
	}


	// From: CodeObject55
	if (var_1_94) {
		var_1_126 = var_1_93;
	}


	// From: CodeObject56
	var_1_127 = var_1_85;


	// From: CodeObject57
	if (var_1_126) {
		var_1_128 = var_1_37;
	} else {
		var_1_128 = var_1_104;
	}


	// From: CodeObject58
	var_1_129 = var_1_76;


	// From: CodeObject59
	if (var_1_95) {
		var_1_130 = var_1_85;
	} else {
		var_1_130 = var_1_54;
	}


	// From: CodeObject60
	if (var_1_110) {
		var_1_131 = var_1_114;
	} else {
		var_1_131 = var_1_44;
	}


	// From: CodeObject61
	if (var_1_40) {
		var_1_132 = 0.375f;
	}


	// From: CodeObject62
	if (var_1_110) {
		var_1_133 = var_1_33;
	}


	// From: CodeObject63
	if (var_1_41) {
		var_1_134 = (max (var_1_38 , (abs (var_1_135))));
	}


	// From: CodeObject64
	if (var_1_75 >= var_1_105) {
		if ((abs (abs (var_1_109))) >= var_1_45) {
			var_1_136 = var_1_124;
		} else {
			var_1_136 = var_1_87;
		}
	} else {
		var_1_136 = 50;
	}


	// From: Req3Batch50PS_CN_500
	if (var_1_8) {
		var_1_13 = (min ((var_1_14 + var_1_15) , (min (-0.2f , var_1_16))));
	}


	// From: Req6Batch50PS_CN_500
	if (var_1_8) {
		var_1_25 = (var_1_26 + var_1_27);
	}


	// From: Req8Batch50PS_CN_500
	var_1_29 = var_1_27;


	// From: Req9Batch50PS_CN_500
	var_1_30 = var_1_8;


	// From: Req2Batch50PS_CN_500
	if ((var_1_29 > var_1_25) && var_1_30) {
		var_1_9 = var_1_25;
	} else {
		var_1_9 = (max (var_1_25 , (min ((var_1_25 - 10) , var_1_25))));
	}


	// From: Req4Batch50PS_CN_500
	var_1_17 = ((var_1_18 - 25) - var_1_25);


	// From: Req5Batch50PS_CN_500
	signed long int stepLocal_2 = var_1_25 + var_1_17;
	if (((var_1_18 % var_1_21) & (abs (1u))) < stepLocal_2) {
		var_1_20 = (var_1_23 || var_1_24);
	} else {
		var_1_20 = var_1_7;
	}


	// From: Req7Batch50PS_CN_500
	signed short int stepLocal_3 = var_1_9;
	if ((~ var_1_29) > stepLocal_3) {
		var_1_28 = (! var_1_7);
	} else {
		var_1_28 = (var_1_20 || ((! var_1_23) && (var_1_24 || var_1_7)));
	}


	// From: Req1Batch50PS_CN_500
	signed long int stepLocal_1 = max (var_1_9 , var_1_25);
	unsigned char stepLocal_0 = var_1_25;
	if (stepLocal_1 <= (var_1_25 - var_1_25)) {
		if (stepLocal_0 < var_1_25) {
			if (var_1_20) {
				var_1_1 = var_1_7;
			} else {
				var_1_1 = var_1_8;
			}
		}
	} else {
		var_1_1 = 0;
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 16382);
	assume_abort_if_not(var_1_18 <= 32766);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 4294967295);
	assume_abort_if_not(var_1_21 != 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 255);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 255);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 255);
	assume_abort_if_not(var_1_37 != 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 255);
	assume_abort_if_not(var_1_38 != 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= -922337.2036854776000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -922337.2036854776000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 254);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 4294967294);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854765600e+12F && var_1_64 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= -126);
	assume_abort_if_not(var_1_67 <= 126);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= -126);
	assume_abort_if_not(var_1_68 <= 126);
	var_1_70 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 65535);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 127);
	assume_abort_if_not(var_1_71 <= 254);
	var_1_73 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_73 >= -32767);
	assume_abort_if_not(var_1_73 <= 32766);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= -63);
	assume_abort_if_not(var_1_75 <= 63);
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 126);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 15);
	assume_abort_if_not(var_1_79 <= 31);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 15);
	var_1_83 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_83 >= -461168.6018427382800e+13F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 4611686.018427382800e+12F && var_1_83 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_86 >= -2147483648);
	assume_abort_if_not(var_1_86 <= 2147483647);
	var_1_87 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_87 >= -128);
	assume_abort_if_not(var_1_87 <= 127);
	var_1_89 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_89 >= -16383);
	assume_abort_if_not(var_1_89 <= 16383);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 1);
	assume_abort_if_not(var_1_92 <= 1);
	var_1_93 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_93 >= 0);
	assume_abort_if_not(var_1_93 <= 0);
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 0);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 0);
	var_1_105 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_105 >= 0);
	assume_abort_if_not(var_1_105 <= 126);
	var_1_111 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_111 >= -2147483648);
	assume_abort_if_not(var_1_111 <= 2147483647);
	var_1_114 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_114 >= -230584.3009213691390e+13F && var_1_114 <= -1.0e-20F) || (var_1_114 <= 2305843.009213691390e+12F && var_1_114 >= 1.0e-20F ));
	var_1_115 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_115 >= -230584.3009213691390e+13F && var_1_115 <= -1.0e-20F) || (var_1_115 <= 2305843.009213691390e+12F && var_1_115 >= 1.0e-20F ));
	var_1_120 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_120 >= -922337.2036854776000e+13F && var_1_120 <= -1.0e-20F) || (var_1_120 <= 9223372.036854776000e+12F && var_1_120 >= 1.0e-20F ));
	assume_abort_if_not(var_1_120 != 0.0F);
	var_1_135 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_135 >= -2147483646);
	assume_abort_if_not(var_1_135 <= 2147483646);
}



void updateLastVariables() {
}

int property() {
	return ((((((((((max (var_1_9 , var_1_25)) <= (var_1_25 - var_1_25)) ? ((var_1_25 < var_1_25) ? (var_1_20 ? (var_1_1 == ((unsigned char) var_1_7)) : (var_1_1 == ((unsigned char) var_1_8))) : 1) : (var_1_1 == ((unsigned char) 0))) && (((var_1_29 > var_1_25) && var_1_30) ? (var_1_9 == ((signed short int) var_1_25)) : (var_1_9 == ((signed short int) (max (var_1_25 , (min ((var_1_25 - 10) , var_1_25)))))))) && (var_1_8 ? (var_1_13 == ((float) (min ((var_1_14 + var_1_15) , (min (-0.2f , var_1_16)))))) : 1)) && (var_1_17 == ((signed short int) ((var_1_18 - 25) - var_1_25)))) && ((((var_1_18 % var_1_21) & (abs (1u))) < (var_1_25 + var_1_17)) ? (var_1_20 == ((unsigned char) (var_1_23 || var_1_24))) : (var_1_20 == ((unsigned char) var_1_7)))) && (var_1_8 ? (var_1_25 == ((unsigned char) (var_1_26 + var_1_27))) : 1)) && (((~ var_1_29) > var_1_9) ? (var_1_28 == ((unsigned char) (! var_1_7))) : (var_1_28 == ((unsigned char) (var_1_20 || ((! var_1_23) && (var_1_24 || var_1_7))))))) && (var_1_29 == ((unsigned short int) var_1_27))) && (var_1_30 == ((unsigned char) var_1_8))
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
