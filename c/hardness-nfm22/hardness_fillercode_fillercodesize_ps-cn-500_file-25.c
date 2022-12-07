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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch25PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -256;
signed short int var_1_5 = -256;
double var_1_7 = 256.25;
double var_1_8 = 127.8;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
float var_1_12 = 999.75;
float var_1_13 = 64.5;
float var_1_14 = 127.25;
signed char var_1_15 = -32;
float var_1_16 = 32.7;
unsigned char var_1_17 = 16;
unsigned char var_1_18 = 32;
unsigned short int var_1_19 = 5;
signed long int var_1_21 = 100;
signed short int var_1_22 = 50;
double var_1_23 = 1000000.75;
unsigned long int var_1_24 = 16;
unsigned char var_1_25 = 1;
unsigned long int var_1_26 = 64;
unsigned long int var_1_27 = 4;
double var_1_28 = 15.5;
double var_1_29 = 256.7;
unsigned long int var_1_30 = 5;
unsigned char var_1_31 = 0;
signed long int var_1_32 = 32;
signed long int var_1_33 = -5;
signed long int var_1_34 = -2;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 1;
signed long int var_1_37 = 1;
signed long int var_1_38 = -256;
signed long int var_1_39 = 4;
signed long int var_1_40 = -2;
signed long int var_1_41 = 256;
signed long int var_1_42 = 128;
signed short int var_1_43 = -4;
signed short int var_1_44 = 8;
signed short int var_1_45 = -50;
unsigned short int var_1_46 = 50;
double var_1_47 = 31.6;
unsigned short int var_1_48 = 16;
unsigned short int var_1_49 = 0;
unsigned short int var_1_50 = 8;
signed long int var_1_51 = -16;
unsigned long int var_1_52 = 1;
signed char var_1_53 = -32;
signed char var_1_54 = -4;
signed char var_1_55 = -64;
float var_1_56 = 24.5;
unsigned short int var_1_57 = 256;
float var_1_58 = 256.5;
double var_1_59 = 128.5;
double var_1_60 = 99.25;
float var_1_61 = 5.25;
unsigned short int var_1_62 = 10;
unsigned long int var_1_63 = 5;
unsigned long int var_1_64 = 2703583437;
double var_1_65 = 16.8;
signed short int var_1_66 = 4;
double var_1_67 = 31.75;
unsigned char var_1_68 = 0;
double var_1_69 = 31.75;
double var_1_70 = 49.25;
double var_1_71 = 32.08;
double var_1_72 = 49.75;
signed char var_1_73 = 10;
unsigned short int var_1_74 = 50;
unsigned long int var_1_75 = 16;
signed short int var_1_76 = -25;
signed short int var_1_77 = -64;
signed char var_1_78 = -16;
signed char var_1_79 = 5;
signed long int var_1_80 = 8;
signed char var_1_81 = 1;
unsigned long int var_1_82 = 10;
unsigned char var_1_83 = 1;
float var_1_84 = 64.137;
unsigned short int var_1_85 = 2;
unsigned char var_1_86 = 0;
unsigned char var_1_87 = 0;
signed char var_1_88 = -4;
unsigned char var_1_89 = 1;
unsigned char var_1_90 = 2;
double var_1_91 = 256.8;
unsigned long int var_1_92 = 16;
signed char var_1_93 = 2;
unsigned long int var_1_94 = 100;
signed short int var_1_95 = -256;
unsigned char var_1_96 = 0;
double var_1_97 = 3.3;
signed char var_1_98 = 8;
signed char var_1_99 = 4;
unsigned long int var_1_100 = 16;
signed char var_1_101 = -32;
signed char var_1_102 = 25;
signed char var_1_103 = 10;
unsigned char var_1_104 = 1;
signed long int var_1_105 = -4;
unsigned char var_1_106 = 0;
float var_1_107 = 7.25;
float var_1_108 = 499.8;
signed char var_1_109 = 2;
signed char var_1_110 = 1;
unsigned long int var_1_111 = 25;
signed short int var_1_112 = 1;
signed short int var_1_113 = 10000;
signed char var_1_114 = 4;
signed char var_1_115 = 2;
unsigned long int var_1_116 = 5;
unsigned char var_1_117 = 0;
unsigned char var_1_118 = 0;
float var_1_119 = 7.4;
double var_1_120 = 500.6;
signed long int var_1_121 = 0;
signed short int var_1_122 = -1;
unsigned char var_1_123 = 0;
double var_1_124 = -0.25;
unsigned char var_1_125 = 200;
double var_1_126 = 10.625;
double var_1_127 = 25.4;
double var_1_128 = -0.11;
signed long int var_1_129 = 5;
double var_1_130 = 64.5;
unsigned short int var_1_131 = 256;
unsigned short int var_1_132 = 128;
unsigned short int var_1_133 = 8;
signed short int var_1_134 = 4;
signed char var_1_135 = 10;
signed short int var_1_136 = 64;
unsigned char var_1_137 = 0;
unsigned char var_1_138 = 1;
float var_1_139 = 25.5;
signed char var_1_140 = -128;
signed char var_1_141 = 4;
signed char var_1_142 = 0;
double var_1_143 = 100000000000000.5;
signed long int var_1_144 = 16;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -256;
signed short int last_1_var_1_5 = -256;
unsigned char last_1_var_1_10 = 0;
unsigned short int last_1_var_1_19 = 5;
signed short int last_1_var_1_22 = 50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_25) {
		var_1_24 = (abs (var_1_26 + var_1_27));
	}


	// From: CodeObject2
	if (var_1_24 < var_1_27) {
		if (var_1_27 < (var_1_24 ^ var_1_26)) {
			var_1_28 = (abs (2.75));
		}
	} else {
		if (var_1_25 || (var_1_26 <= var_1_27)) {
			if (var_1_25) {
				var_1_28 = (abs (max (var_1_29 , 4.2)));
			}
		}
	}


	// From: CodeObject3
	if (var_1_25 || var_1_31) {
		var_1_30 = (var_1_26 + var_1_27);
	} else {
		var_1_30 = var_1_26;
	}


	// From: CodeObject4
	if (var_1_29 > var_1_28) {
		if ((var_1_26 + var_1_27) > var_1_24) {
			var_1_32 = var_1_33;
		} else {
			if ((- var_1_29) <= var_1_28) {
				var_1_32 = var_1_33;
			} else {
				var_1_32 = (abs (var_1_34));
			}
		}
	}


	// From: CodeObject5
	if (var_1_26 >= var_1_30) {
		var_1_35 = 0;
	} else {
		var_1_35 = (! var_1_36);
	}


	// From: CodeObject6
	var_1_37 = (abs (var_1_34));


	// From: CodeObject7
	if (var_1_37 != (max ((10000000 * var_1_27) , (~ var_1_39)))) {
		var_1_38 = (abs (var_1_34));
	} else {
		if (var_1_26 >= ((var_1_30 & var_1_24) | var_1_27)) {
			var_1_38 = (min ((min (var_1_40 , var_1_34)) , (var_1_41 - var_1_42)));
		} else {
			if (var_1_32 == var_1_37) {
				var_1_38 = (abs (var_1_34));
			}
		}
	}


	// From: CodeObject8
	if (var_1_42 < 1000000) {
		var_1_43 = (min (var_1_44 , var_1_45));
	}


	// From: CodeObject9
	if ((min (var_1_28 , var_1_29)) > var_1_47) {
		var_1_46 = var_1_48;
	} else {
		if (var_1_26 >= var_1_39) {
			var_1_46 = (abs (var_1_48));
		} else {
			var_1_46 = (var_1_49 + var_1_50);
		}
	}


	// From: CodeObject10
	if (var_1_38 >= -256) {
		var_1_51 = var_1_49;
	}


	// From: CodeObject11
	if ((abs (var_1_30)) > (var_1_50 << var_1_43)) {
		var_1_52 = (((abs (var_1_48)) + var_1_50) + var_1_27);
	}


	// From: CodeObject12
	if (var_1_47 >= (min (var_1_28 , var_1_29))) {
		if (var_1_24 <= var_1_26) {
			var_1_53 = (abs (var_1_54));
		}
	}


	// From: CodeObject13
	if (16 > var_1_32) {
		var_1_55 = (abs (var_1_54));
	}


	// From: CodeObject14
	if ((var_1_27 % var_1_57) <= var_1_42) {
		var_1_56 = (max (var_1_29 , 7.4399999999999995f));
	}


	// From: CodeObject15
	if (var_1_29 < (max (var_1_47 , (var_1_59 - var_1_60)))) {
		if (var_1_52 > var_1_46) {
			var_1_58 = (min ((abs (64.62f + var_1_61)) , var_1_29));
		}
	}


	// From: CodeObject16
	if (var_1_55 < var_1_24) {
		if (var_1_58 > var_1_29) {
			var_1_62 = var_1_50;
		}
	} else {
		var_1_62 = (abs (max (5 , var_1_50)));
	}


	// From: CodeObject17
	if (var_1_28 <= var_1_47) {
		var_1_63 = (var_1_64 - ((abs (1868299145u)) - var_1_49));
	}


	// From: CodeObject18
	if (var_1_66 <= ((abs (-2)) % var_1_57)) {
		var_1_65 = (abs (var_1_61 + var_1_67));
	} else {
		if (! var_1_68) {
			var_1_65 = ((max ((abs (var_1_67)) , var_1_61)) + (var_1_69 + (var_1_70 - var_1_71)));
		}
	}


	// From: CodeObject19
	if ((abs (var_1_65)) != (abs (var_1_67))) {
		if ((~ (3152767479u - var_1_48)) != ((abs (var_1_37)) >> (max (var_1_73 , 1)))) {
			var_1_72 = ((min (var_1_69 , var_1_71)) + 1.5);
		}
	}


	// From: CodeObject20
	if (var_1_35) {
		var_1_74 = 2;
	}


	// From: CodeObject21
	var_1_75 = (max ((var_1_64 - var_1_73) , (abs (var_1_49))));


	// From: CodeObject22
	var_1_76 = (min (var_1_53 , 128));


	// From: CodeObject23
	if ((var_1_61 + (max (var_1_67 , var_1_59))) < var_1_72) {
		if (! var_1_68) {
			var_1_77 = var_1_55;
		}
	}


	// From: CodeObject24
	if (var_1_25 && (var_1_66 > var_1_51)) {
		if (var_1_49 < var_1_52) {
			var_1_78 = (abs (abs (var_1_73 + var_1_79)));
		} else {
			var_1_78 = (max ((abs (var_1_73)) , (abs (var_1_54))));
		}
	}


	// From: CodeObject25
	if (((var_1_77 / var_1_57) % (abs (var_1_81))) >= var_1_79) {
		var_1_80 = ((abs (var_1_66)) + (abs (var_1_48)));
	} else {
		var_1_80 = (var_1_78 + (var_1_62 - var_1_48));
	}


	// From: CodeObject26
	if (var_1_83) {
		var_1_82 = (max (var_1_50 , 0u));
	} else {
		var_1_82 = (var_1_74 + 64u);
	}


	// From: CodeObject27
	if (((var_1_74 + var_1_75) % (min (var_1_57 , var_1_85))) < (abs (16u))) {
		if (var_1_25) {
			var_1_84 = var_1_61;
		}
	} else {
		var_1_84 = var_1_69;
	}


	// From: CodeObject28
	if (var_1_83) {
		var_1_86 = var_1_87;
	}


	// From: CodeObject29
	if (var_1_35) {
		var_1_88 = var_1_73;
	} else {
		var_1_88 = var_1_79;
	}


	// From: CodeObject30
	if (var_1_25) {
		var_1_89 = var_1_36;
	}


	// From: CodeObject31
	if (var_1_36) {
		var_1_90 = var_1_73;
	} else {
		var_1_90 = var_1_73;
	}


	// From: CodeObject32
	if ((min ((var_1_44 >> var_1_80) , var_1_24)) == (~ var_1_48)) {
		var_1_91 = ((0.5 - (var_1_70 + var_1_71)) + var_1_61);
	}


	// From: CodeObject33
	if ((var_1_81 | var_1_93) <= var_1_63) {
		if (((var_1_64 & var_1_42) | var_1_44) < (var_1_24 >> var_1_38)) {
			var_1_92 = (abs (abs (var_1_49)));
		} else {
			var_1_92 = (max (var_1_90 , var_1_48));
		}
	}


	// From: CodeObject34
	if (((~ var_1_92) | var_1_95) != var_1_63) {
		var_1_94 = (abs (abs (var_1_62)));
	}


	// From: CodeObject35
	if (-25 < var_1_46) {
		var_1_96 = (! var_1_36);
	}


	// From: CodeObject36
	if (var_1_52 < (abs (var_1_38))) {
		var_1_97 = (abs (var_1_67));
	}


	// From: CodeObject37
	if (var_1_24 < (max (var_1_62 , (~ var_1_82)))) {
		var_1_98 = ((abs (var_1_79 + var_1_73)) - var_1_99);
	}


	// From: CodeObject38
	if (var_1_87 || var_1_96) {
		var_1_100 = (min (var_1_27 , 8u));
	}


	// From: CodeObject39
	if (var_1_53 < var_1_32) {
		if ((128u << 1u) > (var_1_27 | (var_1_57 ^ var_1_75))) {
			var_1_101 = (min ((var_1_73 + (var_1_102 - var_1_103)) , var_1_79));
		} else {
			if (var_1_77 <= var_1_98) {
				var_1_101 = (var_1_73 + (min (var_1_79 , var_1_102)));
			}
		}
	}


	// From: CodeObject40
	if (-4 <= var_1_62) {
		if ((var_1_32 >> var_1_102) <= var_1_105) {
			var_1_104 = (! var_1_87);
		} else {
			var_1_104 = (var_1_87 || var_1_106);
		}
	}


	// From: CodeObject41
	if (var_1_100 != var_1_46) {
		if (var_1_36) {
			if (var_1_106 && var_1_31) {
				if ((~ var_1_75) <= var_1_103) {
					if ((var_1_51 >> var_1_45) >= (~ (5 / var_1_81))) {
						var_1_107 = (abs (max ((abs (var_1_29)) , var_1_69)));
					} else {
						var_1_107 = (abs (var_1_69));
					}
				}
			} else {
				var_1_107 = (abs (min ((abs (var_1_69)) , 31.25f)));
			}
		}
	}


	// From: CodeObject42
	if (var_1_48 < (abs (var_1_82))) {
		if (var_1_31) {
			var_1_108 = (abs (var_1_69));
		}
	}


	// From: CodeObject43
	if ((- var_1_69) > var_1_71) {
		if ((var_1_46 >> var_1_80) < var_1_94) {
			if (! (var_1_60 <= var_1_108)) {
				var_1_109 = (abs (min (var_1_103 , (min (var_1_73 , var_1_99)))));
			}
		}
	}


	// From: CodeObject44
	if (var_1_107 >= var_1_28) {
		var_1_110 = (abs (var_1_73));
	} else {
		var_1_110 = (abs (var_1_103));
	}


	// From: CodeObject45
	if ((var_1_42 >> var_1_88) <= var_1_26) {
		var_1_111 = (abs (min (var_1_48 , var_1_64)));
	}


	// From: CodeObject46
	if ((var_1_95 + var_1_49) < var_1_76) {
		var_1_112 = (((var_1_113 - var_1_99) - var_1_103) + (min (var_1_81 , var_1_98)));
	}


	// From: CodeObject47
	if (var_1_66 < (4 | var_1_54)) {
		if (var_1_88 > var_1_98) {
			if (var_1_58 == (abs (var_1_91))) {
				var_1_114 = (max (var_1_79 , var_1_115));
			} else {
				var_1_114 = ((max ((min (var_1_99 , var_1_103)) , var_1_73)) - var_1_102);
			}
		}
	} else {
		if (! var_1_25) {
			var_1_114 = var_1_79;
		}
	}


	// From: CodeObject48
	if ((min (var_1_37 , (var_1_57 >> var_1_45))) != (abs (var_1_42))) {
		if (var_1_68) {
			var_1_116 = (min (var_1_90 , (abs (var_1_27))));
		}
	}


	// From: CodeObject49
	if (var_1_63 < 100u) {
		if (var_1_80 >= var_1_66) {
			var_1_117 = (! (var_1_36 && var_1_118));
		}
	}


	// From: CodeObject50
	var_1_119 = (var_1_69 + var_1_61);


	// From: CodeObject51
	if (var_1_83) {
		if ((var_1_71 < (abs (var_1_108))) || ((var_1_59 - var_1_70) >= (var_1_119 * var_1_91))) {
			var_1_120 = (max (var_1_67 , var_1_70));
		}
	} else {
		if (var_1_63 >= var_1_74) {
			var_1_120 = (abs (max ((max (3.55 , var_1_29)) , var_1_67)));
		}
	}


	// From: CodeObject52
	if (var_1_84 <= 256.8f) {
		var_1_121 = (min (var_1_48 , (abs (var_1_41))));
	} else {
		var_1_121 = var_1_46;
	}


	// From: CodeObject53
	if (var_1_123) {
		var_1_122 = (abs (var_1_103));
	}


	// From: CodeObject54
	if (! (var_1_57 >= var_1_80)) {
		var_1_124 = (abs (var_1_70));
	}


	// From: CodeObject55
	if ((var_1_90 >> var_1_103) <= -100000) {
		if ((max (var_1_62 , (max (var_1_39 , var_1_26)))) > var_1_103) {
			if (200u < var_1_63) {
				var_1_125 = var_1_103;
			}
		}
	} else {
		if ((var_1_45 < var_1_46) || var_1_123) {
			var_1_125 = 32;
		}
	}


	// From: CodeObject56
	if ((var_1_60 - var_1_70) <= var_1_58) {
		if (var_1_31) {
			var_1_126 = (abs (var_1_69 + 128.8));
		} else {
			var_1_126 = (abs (min (var_1_71 , (abs (var_1_69)))));
		}
	} else {
		if (var_1_93 > var_1_74) {
			var_1_126 = ((var_1_71 - var_1_127) + var_1_70);
		} else {
			var_1_126 = (abs (var_1_69));
		}
	}


	// From: CodeObject57
	if (var_1_89 && var_1_25) {
		var_1_128 = (abs (max (var_1_127 , var_1_67)));
	} else {
		if (var_1_118) {
			var_1_128 = (var_1_127 - (abs (max (var_1_29 , var_1_61))));
		} else {
			var_1_128 = (var_1_127 - var_1_70);
		}
	}


	// From: CodeObject58
	if (! (var_1_94 <= var_1_63)) {
		if (var_1_86) {
			var_1_129 = (min (var_1_95 , var_1_48));
		} else {
			var_1_129 = var_1_54;
		}
	}


	// From: CodeObject59
	if (var_1_89) {
		var_1_130 = var_1_61;
	}


	// From: CodeObject60
	if (var_1_87) {
		var_1_131 = var_1_132;
	}


	// From: CodeObject61
	if (var_1_86) {
		var_1_133 = var_1_50;
	} else {
		var_1_133 = var_1_90;
	}


	// From: CodeObject62
	var_1_134 = var_1_81;


	// From: CodeObject63
	if (var_1_118) {
		var_1_135 = var_1_103;
	} else {
		var_1_135 = var_1_102;
	}


	// From: CodeObject64
	if (var_1_25) {
		var_1_136 = var_1_99;
	}


	// From: CodeObject65
	var_1_137 = var_1_138;


	// From: CodeObject66
	if (var_1_106) {
		var_1_139 = var_1_61;
	}


	// From: CodeObject67
	if (var_1_117) {
		var_1_140 = var_1_54;
	} else {
		var_1_140 = var_1_54;
	}


	// From: CodeObject68
	if (var_1_131 < var_1_129) {
		var_1_141 = (max (-5 , (min ((abs (var_1_103)) , (min (var_1_142 , var_1_115))))));
	}


	// From: CodeObject69
	var_1_143 = var_1_69;


	// From: CodeObject70
	var_1_144 = var_1_77;


	// From: Req1Batch25PS_CN_500
	signed long int stepLocal_2 = last_1_var_1_5;
	unsigned char stepLocal_1 = last_1_var_1_10;
	signed long int stepLocal_0 = 256;
	if (stepLocal_1 && (last_1_var_1_5 >= last_1_var_1_1)) {
		if (stepLocal_0 != last_1_var_1_5) {
			var_1_1 = (last_1_var_1_1 + last_1_var_1_5);
		}
	} else {
		if (last_1_var_1_1 >= stepLocal_2) {
			var_1_1 = last_1_var_1_5;
		} else {
			var_1_1 = last_1_var_1_1;
		}
	}


	// From: Req3Batch25PS_CN_500
	var_1_10 = (last_1_var_1_10 && var_1_11);


	// From: Req5Batch25PS_CN_500
	if (var_1_8 != (abs (var_1_14))) {
		if (var_1_10) {
			var_1_17 = var_1_18;
		}
	}


	// From: Req8Batch25PS_CN_500
	var_1_22 = last_1_var_1_22;


	// From: Req9Batch25PS_CN_500
	var_1_23 = var_1_14;


	// From: Req6Batch25PS_CN_500
	unsigned char stepLocal_5 = var_1_10;
	unsigned char stepLocal_4 = var_1_18;
	if (var_1_22 < stepLocal_4) {
		var_1_19 = last_1_var_1_19;
	} else {
		if ((var_1_10 || var_1_10) || stepLocal_5) {
			var_1_19 = last_1_var_1_19;
		} else {
			var_1_19 = var_1_22;
		}
	}


	// From: Req7Batch25PS_CN_500
	var_1_21 = var_1_22;


	// From: Req4Batch25PS_CN_500
	if (! (var_1_23 <= var_1_7)) {
		var_1_12 = (min (var_1_13 , var_1_14));
	} else {
		if (((max (var_1_1 , var_1_17)) / var_1_15) < var_1_19) {
			var_1_12 = var_1_13;
		} else {
			var_1_12 = (var_1_16 + 49.6f);
		}
	}


	// From: Req2Batch25PS_CN_500
	unsigned char stepLocal_3 = var_1_10;
	if (var_1_10 && stepLocal_3) {
		var_1_5 = (min (var_1_19 , -100));
	} else {
		if ((var_1_7 - var_1_8) > var_1_12) {
			var_1_5 = var_1_19;
		} else {
			var_1_5 = var_1_19;
		}
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -128);
	assume_abort_if_not(var_1_15 <= 127);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854765600e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483647);
	assume_abort_if_not(var_1_33 <= 2147483646);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483646);
	assume_abort_if_not(var_1_34 <= 2147483646);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_39 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_39 >= -2147483648);
	assume_abort_if_not(var_1_39 <= 2147483647);
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= -2147483647);
	assume_abort_if_not(var_1_40 <= 2147483646);
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= -1);
	assume_abort_if_not(var_1_41 <= 2147483646);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 2147483646);
	var_1_44 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_44 >= -32767);
	assume_abort_if_not(var_1_44 <= 32766);
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= -32767);
	assume_abort_if_not(var_1_45 <= 32766);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -922337.2036854776000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 65534);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 32767);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 32767);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= -126);
	assume_abort_if_not(var_1_54 <= 126);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 65535);
	assume_abort_if_not(var_1_57 != 0);
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= -461168.6018427382800e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 2147483647);
	assume_abort_if_not(var_1_64 <= 4294967294);
	var_1_66 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_66 >= -32768);
	assume_abort_if_not(var_1_66 <= 32767);
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= -461168.6018427382800e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427382800e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 1);
	var_1_69 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_69 >= -230584.3009213691390e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 2305843.009213691390e+12F && var_1_69 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 2305843.009213691390e+12F && var_1_70 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691390e+12F && var_1_71 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 32);
	var_1_79 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_79 >= -63);
	assume_abort_if_not(var_1_79 <= 63);
	var_1_81 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_81 >= -127);
	assume_abort_if_not(var_1_81 <= 127);
	assume_abort_if_not(var_1_81 != 0);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 1);
	var_1_85 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 65535);
	assume_abort_if_not(var_1_85 != 0);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 0);
	var_1_93 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_93 >= -128);
	assume_abort_if_not(var_1_93 <= 127);
	var_1_95 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_95 >= -32768);
	assume_abort_if_not(var_1_95 <= 32767);
	var_1_99 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_99 >= 0);
	assume_abort_if_not(var_1_99 <= 126);
	var_1_102 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_102 >= 0);
	assume_abort_if_not(var_1_102 <= 63);
	var_1_103 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_103 >= 0);
	assume_abort_if_not(var_1_103 <= 63);
	var_1_105 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_105 >= -2147483648);
	assume_abort_if_not(var_1_105 <= 2147483647);
	var_1_106 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 0);
	var_1_113 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_113 >= 8191);
	assume_abort_if_not(var_1_113 <= 16383);
	var_1_115 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_115 >= -127);
	assume_abort_if_not(var_1_115 <= 126);
	var_1_118 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_118 >= 1);
	assume_abort_if_not(var_1_118 <= 1);
	var_1_123 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_123 >= 0);
	assume_abort_if_not(var_1_123 <= 1);
	var_1_127 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_127 >= 0.0F && var_1_127 <= -1.0e-20F) || (var_1_127 <= 4611686.018427382800e+12F && var_1_127 >= 1.0e-20F ));
	var_1_132 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_132 >= 0);
	assume_abort_if_not(var_1_132 <= 65534);
	var_1_138 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_138 >= 1);
	assume_abort_if_not(var_1_138 <= 1);
	var_1_142 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_142 >= -127);
	assume_abort_if_not(var_1_142 <= 126);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_22 = var_1_22;
}

int property() {
	return (((((((((last_1_var_1_10 && (last_1_var_1_5 >= last_1_var_1_1)) ? ((256 != last_1_var_1_5) ? (var_1_1 == ((signed long int) (last_1_var_1_1 + last_1_var_1_5))) : 1) : ((last_1_var_1_1 >= last_1_var_1_5) ? (var_1_1 == ((signed long int) last_1_var_1_5)) : (var_1_1 == ((signed long int) last_1_var_1_1)))) && ((var_1_10 && var_1_10) ? (var_1_5 == ((signed short int) (min (var_1_19 , -100)))) : (((var_1_7 - var_1_8) > var_1_12) ? (var_1_5 == ((signed short int) var_1_19)) : (var_1_5 == ((signed short int) var_1_19))))) && (var_1_10 == ((unsigned char) (last_1_var_1_10 && var_1_11)))) && ((! (var_1_23 <= var_1_7)) ? (var_1_12 == ((float) (min (var_1_13 , var_1_14)))) : ((((max (var_1_1 , var_1_17)) / var_1_15) < var_1_19) ? (var_1_12 == ((float) var_1_13)) : (var_1_12 == ((float) (var_1_16 + 49.6f)))))) && ((var_1_8 != (abs (var_1_14))) ? (var_1_10 ? (var_1_17 == ((unsigned char) var_1_18)) : 1) : 1)) && ((var_1_22 < var_1_18) ? (var_1_19 == ((unsigned short int) last_1_var_1_19)) : (((var_1_10 || var_1_10) || var_1_10) ? (var_1_19 == ((unsigned short int) last_1_var_1_19)) : (var_1_19 == ((unsigned short int) var_1_22))))) && (var_1_21 == ((signed long int) var_1_22))) && (var_1_22 == ((signed short int) last_1_var_1_22))) && (var_1_23 == ((double) var_1_14))
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
