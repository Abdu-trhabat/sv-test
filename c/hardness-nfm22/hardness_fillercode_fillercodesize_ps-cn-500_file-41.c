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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch41PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
signed char var_1_8 = 64;
signed char var_1_11 = -10;
signed char var_1_12 = 64;
float var_1_13 = 1.6;
float var_1_14 = 3.5;
unsigned char var_1_15 = 8;
unsigned char var_1_16 = 4;
unsigned short int var_1_17 = 2;
unsigned short int var_1_18 = 10000;
signed short int var_1_20 = 4;
signed char var_1_22 = -32;
unsigned long int var_1_23 = 0;
signed short int var_1_24 = 25;
float var_1_25 = 32.6;
signed short int var_1_26 = 8;
unsigned char var_1_27 = 50;
unsigned char var_1_28 = 4;
unsigned char var_1_29 = 2;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 5;
unsigned char var_1_34 = 10;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
signed char var_1_38 = 16;
signed char var_1_39 = 5;
float var_1_40 = 2.6;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
signed short int var_1_45 = -10000;
signed long int var_1_46 = 64;
unsigned char var_1_47 = 1;
unsigned long int var_1_48 = 3831139184;
unsigned long int var_1_49 = 128;
unsigned long int var_1_50 = 16;
unsigned long int var_1_51 = 32;
unsigned char var_1_52 = 0;
float var_1_53 = 2.5;
float var_1_54 = 24.625;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 1;
double var_1_57 = 0.09999999999999998;
double var_1_58 = 24.5;
double var_1_59 = 63.15;
double var_1_60 = 32.9;
float var_1_61 = 9.5;
float var_1_62 = 7.4;
float var_1_63 = 8.5;
signed long int var_1_64 = -8;
double var_1_65 = 255.4;
double var_1_66 = 16.5;
signed short int var_1_67 = -32;
signed short int var_1_68 = 8;
unsigned short int var_1_69 = 1000;
double var_1_70 = 127.6;
float var_1_71 = 99999999.5;
double var_1_72 = 7.5;
unsigned long int var_1_73 = 8;
double var_1_74 = 0.0;
double var_1_75 = 10.6;
unsigned long int var_1_76 = 8;
signed char var_1_77 = 10;
signed char var_1_78 = -8;
signed char var_1_79 = 32;
signed char var_1_80 = 0;
float var_1_81 = 50.2;
unsigned short int var_1_82 = 16;
unsigned short int var_1_83 = 64168;
signed short int var_1_84 = 0;
unsigned short int var_1_85 = 25;
unsigned char var_1_86 = 0;
unsigned char var_1_87 = 200;
unsigned char var_1_88 = 100;
unsigned char var_1_89 = 10;
signed char var_1_90 = 4;
signed char var_1_91 = 32;
signed char var_1_92 = 50;
signed char var_1_93 = 5;
signed char var_1_94 = 4;
signed short int var_1_95 = -50;
signed long int var_1_96 = -2;
unsigned short int var_1_97 = 32;
unsigned long int var_1_98 = 16;
unsigned long int var_1_99 = 3093766243;
double var_1_100 = 15.6;
unsigned short int var_1_101 = 4;
float var_1_102 = 3.4;
signed long int var_1_103 = -25;
double var_1_104 = 99.4;
unsigned char var_1_105 = 50;
unsigned char var_1_106 = 5;
unsigned char var_1_107 = 32;
unsigned char var_1_108 = 5;
unsigned short int var_1_109 = 10;
unsigned short int var_1_110 = 29036;
unsigned char var_1_111 = 16;
signed char var_1_112 = 64;
unsigned char var_1_113 = 1;
unsigned char var_1_114 = 0;
double var_1_115 = 3.4;
double var_1_116 = 0.0;
double var_1_117 = 25.5;
float var_1_118 = 0.19999999999999996;
float var_1_119 = 10000000000000.5;
float var_1_120 = 5.25;
unsigned char var_1_121 = 0;
unsigned char var_1_122 = 16;
unsigned char var_1_123 = 0;
signed long int var_1_124 = 1000;
unsigned long int var_1_125 = 128;
signed long int var_1_126 = -5;
signed long int var_1_127 = -100000;
unsigned char var_1_128 = 1;
signed char var_1_129 = -2;
unsigned char var_1_130 = 1;
unsigned long int var_1_131 = 128;
signed short int var_1_132 = -200;
unsigned char var_1_133 = 32;
unsigned short int var_1_134 = 2;
unsigned long int var_1_135 = 2;
signed short int var_1_136 = -10;
signed short int var_1_137 = -256;
signed short int var_1_138 = -10;
signed long int var_1_139 = -5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_15 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (32.2f > (25.5f - (abs (var_1_25)))) {
		var_1_24 = (abs (var_1_26));
	}


	// From: CodeObject2
	var_1_27 = (max (var_1_28 , var_1_29));


	// From: CodeObject3
	if ((var_1_29 & var_1_27) >= var_1_28) {
		if (! var_1_31) {
			if (var_1_31) {
				var_1_30 = (var_1_32 - var_1_33);
			}
		}
	}


	// From: CodeObject4
	if (var_1_31) {
		if (var_1_27 == 5) {
			var_1_34 = (min (var_1_29 , var_1_33));
		}
	} else {
		if (var_1_35) {
			var_1_34 = (min ((max ((max (var_1_33 , var_1_28)) , var_1_32)) , var_1_29));
		}
	}


	// From: CodeObject5
	if ((var_1_34 >> 1u) > var_1_28) {
		var_1_36 = var_1_32;
	} else {
		var_1_36 = var_1_29;
	}


	// From: CodeObject6
	if ((var_1_38 % var_1_39) >= var_1_33) {
		if (var_1_31) {
			if ((- var_1_25) <= var_1_40) {
				var_1_37 = (var_1_35 && var_1_41);
			}
		} else {
			var_1_37 = (((var_1_42 && var_1_43) && var_1_44) && (! var_1_41));
		}
	}


	// From: CodeObject7
	if ((min (var_1_34 , (min (var_1_32 , var_1_33)))) > (~ (abs (var_1_28)))) {
		var_1_45 = ((abs (var_1_30)) + (max ((max (4 , var_1_27)) , var_1_38)));
	}


	// From: CodeObject8
	if (((~ var_1_38) & (var_1_47 % var_1_32)) >= var_1_34) {
		if ((var_1_28 % var_1_32) >= var_1_33) {
			if (((min (var_1_48 , 3730728277u)) - var_1_27) <= (~ (~ var_1_50))) {
				var_1_46 = ((abs (var_1_30)) + (abs (abs (var_1_26))));
			} else {
				var_1_46 = ((var_1_30 - (max (var_1_33 , var_1_34))) + var_1_24);
			}
		}
	}


	// From: CodeObject9
	if ((var_1_31 || var_1_43) || var_1_35) {
		if (((var_1_50 / var_1_32) + 2u) <= var_1_49) {
			var_1_51 = (max (var_1_28 , var_1_47));
		} else {
			if (var_1_35 && (! var_1_42)) {
				var_1_51 = (abs (abs (var_1_33)));
			}
		}
	} else {
		if (var_1_25 <= (abs (var_1_40))) {
			var_1_51 = (min ((abs (2u)) , var_1_27));
		} else {
			var_1_51 = ((max (var_1_32 , var_1_30)) + 16u);
		}
	}


	// From: CodeObject10
	if (var_1_45 > var_1_30) {
		if (100 < var_1_28) {
			var_1_52 = (! var_1_44);
		} else {
			if (var_1_36 < (var_1_28 + (var_1_49 >> var_1_50))) {
				var_1_52 = (var_1_41 || var_1_42);
			}
		}
	} else {
		if (-5 <= (var_1_28 - 100)) {
			if (var_1_25 > (var_1_53 - var_1_54)) {
				if (var_1_41) {
					var_1_52 = (var_1_31 && var_1_55);
				} else {
					var_1_52 = var_1_56;
				}
			} else {
				var_1_52 = (! (var_1_42 || (var_1_37 || var_1_44)));
			}
		} else {
			var_1_52 = var_1_44;
		}
	}


	// From: CodeObject11
	if (((var_1_40 * var_1_25) >= (abs (var_1_54))) || var_1_31) {
		if (var_1_34 < var_1_33) {
			var_1_57 = ((abs (var_1_58 + var_1_59)) + var_1_60);
		} else {
			if (var_1_32 != var_1_50) {
				var_1_57 = (abs (var_1_58));
			} else {
				var_1_57 = var_1_59;
			}
		}
	}


	// From: CodeObject12
	if ((var_1_41 || var_1_44) || (var_1_58 >= (var_1_40 * var_1_60))) {
		var_1_61 = (abs (abs (max (var_1_59 , var_1_58))));
	} else {
		var_1_61 = ((abs (var_1_60)) - (min (var_1_62 , var_1_63)));
	}


	// From: CodeObject13
	var_1_64 = (abs (var_1_45));


	// From: CodeObject14
	var_1_65 = (max ((var_1_63 - (max (var_1_62 , var_1_66))) , (min ((max (var_1_60 , var_1_59)) , (abs (var_1_58))))));


	// From: CodeObject15
	if ((max (var_1_62 , var_1_58)) >= var_1_57) {
		if ((~ var_1_50) >= var_1_29) {
			var_1_67 = ((var_1_34 - var_1_29) + (var_1_32 + var_1_28));
		} else {
			if (var_1_27 >= (abs (var_1_26))) {
				var_1_67 = (abs (var_1_32));
			}
		}
	} else {
		var_1_67 = (abs ((min (16 , var_1_34)) + var_1_39));
	}


	// From: CodeObject16
	if (var_1_63 <= var_1_40) {
		var_1_68 = var_1_33;
	} else {
		if ((~ var_1_47) != (max (var_1_45 , 256))) {
			var_1_68 = (-256 + (abs (var_1_33)));
		}
	}


	// From: CodeObject17
	if (var_1_65 <= (var_1_66 / var_1_70)) {
		if (var_1_51 > var_1_33) {
			var_1_69 = (min ((abs (var_1_29)) , var_1_34));
		} else {
			var_1_69 = (abs (abs (2)));
		}
	}


	// From: CodeObject18
	if ((var_1_26 + var_1_24) > var_1_64) {
		var_1_71 = var_1_60;
	}


	// From: CodeObject19
	if (var_1_73 >= var_1_32) {
		if (var_1_41) {
			var_1_72 = ((var_1_74 - var_1_75) - (abs (var_1_59)));
		}
	}


	// From: CodeObject20
	if (((64 - var_1_36) % 5) >= -4) {
		var_1_76 = var_1_36;
	}


	// From: CodeObject21
	if (var_1_68 <= (var_1_27 >> var_1_29)) {
		if (var_1_62 >= 128.5f) {
			if ((- var_1_34) <= (var_1_73 * (var_1_36 | var_1_64))) {
				var_1_77 = (max (var_1_78 , (var_1_79 + (abs (var_1_80)))));
			}
		} else {
			var_1_77 = (abs (var_1_79));
		}
	}


	// From: CodeObject22
	if (! (var_1_75 < (abs (var_1_63)))) {
		if (var_1_61 <= var_1_54) {
			var_1_81 = (var_1_59 + var_1_75);
		} else {
			if (var_1_37) {
				var_1_81 = (abs (abs (var_1_62)));
			} else {
				var_1_81 = var_1_59;
			}
		}
	}


	// From: CodeObject23
	if ((abs (var_1_60)) >= var_1_70) {
		if (var_1_43) {
			var_1_82 = (var_1_83 - (abs (max (0 , 10))));
		} else {
			var_1_82 = (max (var_1_33 , var_1_29));
		}
	}


	// From: CodeObject24
	if (var_1_31) {
		var_1_84 = (var_1_36 + var_1_78);
	} else {
		var_1_84 = (max ((var_1_80 + var_1_33) , (abs (var_1_29))));
	}


	// From: CodeObject25
	if (var_1_34 > 5) {
		var_1_85 = (abs (var_1_30));
	}


	// From: CodeObject26
	var_1_86 = (((max (200 , var_1_87)) - 8) - (var_1_88 - var_1_89));


	// From: CodeObject27
	if ((min (var_1_72 , var_1_62)) <= (max (var_1_63 , (max (var_1_71 , 24.883))))) {
		var_1_90 = ((var_1_89 + var_1_91) - (min (var_1_92 , (var_1_93 + var_1_94))));
	} else {
		var_1_90 = (abs (var_1_80));
	}


	// From: CodeObject28
	if (24.25f < var_1_60) {
		var_1_95 = var_1_77;
	} else {
		if (var_1_96 > (min (var_1_87 , -50))) {
			var_1_95 = (abs (var_1_91 + var_1_33));
		}
	}


	// From: CodeObject29
	if (32u == var_1_87) {
		var_1_97 = (abs (100));
	}


	// From: CodeObject30
	if (var_1_56) {
		var_1_98 = (abs (var_1_93));
	} else {
		var_1_98 = (var_1_99 - (1561347926u - (abs (var_1_32))));
	}


	// From: CodeObject31
	if ((var_1_36 >> (min (5 , var_1_101))) >= (~ var_1_79)) {
		var_1_100 = var_1_63;
	} else {
		if ((var_1_46 | var_1_48) == var_1_85) {
			var_1_100 = var_1_60;
		}
	}


	// From: CodeObject32
	if ((max ((var_1_71 / var_1_74) , var_1_70)) <= (max (var_1_54 , var_1_61))) {
		if ((min (var_1_91 , var_1_69)) >= var_1_103) {
			var_1_102 = (min (var_1_75 , var_1_63));
		} else {
			var_1_102 = (max (var_1_62 , var_1_60));
		}
	}


	// From: CodeObject33
	if ((max (var_1_82 , var_1_76)) > (min (8u , var_1_50))) {
		var_1_104 = (31.5 + var_1_60);
	} else {
		if (var_1_59 <= var_1_66) {
			var_1_104 = (var_1_66 - 3.6);
		}
	}


	// From: CodeObject34
	if (((abs (8)) | var_1_77) >= var_1_87) {
		var_1_105 = (abs (min (var_1_29 , var_1_89)));
	}


	// From: CodeObject35
	if (var_1_56 && (var_1_46 >= var_1_82)) {
		var_1_106 = (max (var_1_101 , var_1_88));
	}


	// From: CodeObject36
	if (var_1_94 > var_1_80) {
		if (var_1_31) {
			var_1_107 = (min (var_1_89 , var_1_28));
		}
	} else {
		if (var_1_67 <= 8) {
			if (var_1_46 >= var_1_105) {
				var_1_107 = (abs (var_1_108));
			} else {
				var_1_107 = (min ((abs (var_1_87)) , var_1_88));
			}
		} else {
			var_1_107 = (min (var_1_32 , var_1_87));
		}
	}


	// From: CodeObject37
	if (var_1_69 > ((~ var_1_27) >> var_1_50)) {
		var_1_109 = ((var_1_110 - var_1_34) + var_1_107);
	} else {
		var_1_109 = (var_1_106 + var_1_87);
	}


	// From: CodeObject38
	if ((~ var_1_88) < (var_1_27 - var_1_108)) {
		var_1_111 = var_1_87;
	} else {
		var_1_111 = 1;
	}


	// From: CodeObject39
	if (var_1_55) {
		var_1_112 = (max (var_1_93 , 10));
	} else {
		if ((min (var_1_28 , var_1_103)) < (var_1_47 + (max (var_1_32 , var_1_105)))) {
			var_1_112 = var_1_79;
		}
	}


	// From: CodeObject40
	if (var_1_94 < (var_1_80 ^ var_1_90)) {
		var_1_113 = (! (! var_1_43));
	}


	// From: CodeObject41
	if (! var_1_52) {
		if (var_1_95 <= (var_1_101 ^ var_1_77)) {
			var_1_114 = (! (var_1_55 || var_1_41));
		}
	}


	// From: CodeObject42
	if ((abs (var_1_91)) > var_1_112) {
		var_1_115 = (min ((max (var_1_60 , (var_1_74 - 0.55))) , (abs (127.5 + var_1_59))));
	} else {
		var_1_115 = ((abs (var_1_75 + 4.8)) - (var_1_74 - (var_1_116 - var_1_117)));
	}


	// From: CodeObject43
	if ((var_1_93 / var_1_88) > var_1_97) {
		var_1_118 = ((abs (abs (var_1_63))) - ((8.1725072712824637E18f - var_1_117) - var_1_75));
	}


	// From: CodeObject44
	var_1_119 = (max (var_1_59 , var_1_117));


	// From: CodeObject45
	if (3.15f >= var_1_117) {
		var_1_120 = (max (499.375f , (abs (var_1_75))));
	}


	// From: CodeObject46
	if (((var_1_85 % var_1_88) / var_1_39) <= 2) {
		if (var_1_56) {
			if (var_1_36 < ((max (var_1_34 , 1)) + var_1_86)) {
				var_1_121 = var_1_43;
			} else {
				if (var_1_70 < ((- var_1_72) / var_1_116)) {
					var_1_121 = var_1_55;
				} else {
					var_1_121 = var_1_41;
				}
			}
		}
	} else {
		var_1_121 = 0;
	}


	// From: CodeObject47
	if (var_1_42) {
		var_1_122 = var_1_92;
	}


	// From: CodeObject48
	var_1_123 = var_1_55;


	// From: CodeObject49
	var_1_124 = var_1_89;


	// From: CodeObject50
	if (var_1_55) {
		var_1_125 = var_1_32;
	} else {
		var_1_125 = var_1_97;
	}


	// From: CodeObject51
	if (var_1_42) {
		var_1_126 = var_1_47;
	}


	// From: CodeObject52
	if (var_1_41) {
		var_1_127 = var_1_47;
	} else {
		var_1_127 = var_1_108;
	}


	// From: CodeObject53
	if (var_1_113) {
		var_1_128 = var_1_43;
	}


	// From: CodeObject54
	var_1_129 = var_1_93;


	// From: CodeObject55
	if (var_1_41) {
		var_1_130 = var_1_55;
	} else {
		var_1_130 = var_1_56;
	}


	// From: CodeObject56
	if (var_1_43) {
		var_1_131 = var_1_89;
	}


	// From: CodeObject57
	var_1_132 = var_1_77;


	// From: CodeObject58
	if (var_1_37) {
		var_1_133 = var_1_89;
	}


	// From: CodeObject59
	if (var_1_123) {
		var_1_134 = var_1_101;
	}


	// From: CodeObject60
	if (var_1_128) {
		var_1_135 = var_1_109;
	}


	// From: CodeObject61
	if (var_1_41) {
		var_1_136 = var_1_92;
	} else {
		var_1_136 = var_1_91;
	}


	// From: CodeObject62
	if (var_1_114) {
		var_1_137 = var_1_30;
	} else {
		var_1_137 = var_1_32;
	}


	// From: CodeObject63
	if ((min (var_1_118 , 1.8f)) <= ((- var_1_100) * var_1_119)) {
		var_1_138 = (max (2 , var_1_39));
	} else {
		if (var_1_139 == var_1_24) {
			var_1_138 = var_1_26;
		}
	}


	// From: Req4Batch41PS_CN_500
	unsigned char stepLocal_1 = ! var_1_5;
	if (stepLocal_1 || (var_1_12 < last_1_var_1_15)) {
		if (! var_1_5) {
			var_1_13 = var_1_14;
		} else {
			var_1_13 = var_1_14;
		}
	}


	// From: Req2Batch41PS_CN_500
	if ((127.35 + var_1_13) <= var_1_13) {
		if (4.5 <= (var_1_13 * var_1_13)) {
			var_1_6 = var_1_5;
		}
	}


	// From: Req1Batch41PS_CN_500
	if ((- var_1_13) > 31.9f) {
		var_1_1 = ((var_1_6 || var_1_4) && var_1_5);
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req5Batch41PS_CN_500
	if (var_1_1) {
		var_1_15 = var_1_16;
	}


	// From: Req8Batch41PS_CN_500
	var_1_22 = 1;


	// From: Req9Batch41PS_CN_500
	var_1_23 = var_1_22;


	// From: Req3Batch41PS_CN_500
	unsigned long int stepLocal_0 = var_1_23;
	if (var_1_15 > stepLocal_0) {
		var_1_8 = (min (var_1_11 , var_1_12));
	}


	// From: Req6Batch41PS_CN_500
	unsigned char stepLocal_2 = var_1_23 < var_1_15;
	if (var_1_1 || stepLocal_2) {
		var_1_17 = (var_1_15 + ((var_1_18 - var_1_16) + var_1_15));
	} else {
		var_1_17 = (var_1_16 + var_1_18);
	}


	// From: Req7Batch41PS_CN_500
	signed long int stepLocal_3 = -10;
	if (((var_1_15 / var_1_18) * var_1_15) < stepLocal_3) {
		var_1_20 = (max (var_1_15 , var_1_16));
	} else {
		if (! (var_1_17 <= var_1_17)) {
			var_1_20 = var_1_11;
		} else {
			var_1_20 = var_1_12;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 8192);
	assume_abort_if_not(var_1_18 <= 16384);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32766);
	assume_abort_if_not(var_1_26 <= 32766);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 254);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 127);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -128);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -128);
	assume_abort_if_not(var_1_39 <= 127);
	assume_abort_if_not(var_1_39 != 0);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 255);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 2147483647);
	assume_abort_if_not(var_1_48 <= 4294967295);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 4294967295);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 4294967295);
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854776000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 0);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= -230584.3009213691390e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 2305843.009213691390e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -230584.3009213691390e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 2305843.009213691390e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= -461168.6018427382800e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854765600e+12F && var_1_63 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854765600e+12F && var_1_66 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= -922337.2036854776000e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854776000e+12F && var_1_70 >= 1.0e-20F ));
	assume_abort_if_not(var_1_70 != 0.0F);
	var_1_73 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 4294967295);
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= 4611686.018427382800e+12F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854765600e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427382800e+12F && var_1_75 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_78 >= -127);
	assume_abort_if_not(var_1_78 <= 126);
	var_1_79 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_79 >= -63);
	assume_abort_if_not(var_1_79 <= 63);
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= -63);
	assume_abort_if_not(var_1_80 <= 63);
	var_1_83 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_83 >= 32767);
	assume_abort_if_not(var_1_83 <= 65534);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 190);
	assume_abort_if_not(var_1_87 <= 254);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 63);
	assume_abort_if_not(var_1_88 <= 127);
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 0);
	assume_abort_if_not(var_1_89 <= 63);
	var_1_91 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 63);
	var_1_92 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 126);
	var_1_93 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_93 >= 0);
	assume_abort_if_not(var_1_93 <= 63);
	var_1_94 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 63);
	var_1_96 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_96 >= -2147483648);
	assume_abort_if_not(var_1_96 <= 2147483647);
	var_1_99 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_99 >= 2147483647);
	assume_abort_if_not(var_1_99 <= 4294967294);
	var_1_101 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_101 >= 0);
	assume_abort_if_not(var_1_101 <= 9);
	var_1_103 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_103 >= -2147483648);
	assume_abort_if_not(var_1_103 <= 2147483647);
	var_1_108 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_108 >= 0);
	assume_abort_if_not(var_1_108 <= 254);
	var_1_110 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_110 >= 16383);
	assume_abort_if_not(var_1_110 <= 32767);
	var_1_116 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_116 >= 2305843.009213691390e+12F && var_1_116 <= -1.0e-20F) || (var_1_116 <= 4611686.018427382800e+12F && var_1_116 >= 1.0e-20F ));
	var_1_117 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_117 >= 0.0F && var_1_117 <= -1.0e-20F) || (var_1_117 <= 2305843.009213691390e+12F && var_1_117 >= 1.0e-20F ));
	var_1_139 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_139 >= -2147483648);
	assume_abort_if_not(var_1_139 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_15 = var_1_15;
}

int property() {
	return ((((((((((- var_1_13) > 31.9f) ? (var_1_1 == ((unsigned char) ((var_1_6 || var_1_4) && var_1_5))) : (var_1_1 == ((unsigned char) var_1_5))) && (((127.35 + var_1_13) <= var_1_13) ? ((4.5 <= (var_1_13 * var_1_13)) ? (var_1_6 == ((unsigned char) var_1_5)) : 1) : 1)) && ((var_1_15 > var_1_23) ? (var_1_8 == ((signed char) (min (var_1_11 , var_1_12)))) : 1)) && (((! var_1_5) || (var_1_12 < last_1_var_1_15)) ? ((! var_1_5) ? (var_1_13 == ((float) var_1_14)) : (var_1_13 == ((float) var_1_14))) : 1)) && (var_1_1 ? (var_1_15 == ((unsigned char) var_1_16)) : 1)) && ((var_1_1 || (var_1_23 < var_1_15)) ? (var_1_17 == ((unsigned short int) (var_1_15 + ((var_1_18 - var_1_16) + var_1_15)))) : (var_1_17 == ((unsigned short int) (var_1_16 + var_1_18))))) && ((((var_1_15 / var_1_18) * var_1_15) < -10) ? (var_1_20 == ((signed short int) (max (var_1_15 , var_1_16)))) : ((! (var_1_17 <= var_1_17)) ? (var_1_20 == ((signed short int) var_1_11)) : (var_1_20 == ((signed short int) var_1_12))))) && (var_1_22 == ((signed char) 1))) && (var_1_23 == ((unsigned long int) var_1_22))
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
