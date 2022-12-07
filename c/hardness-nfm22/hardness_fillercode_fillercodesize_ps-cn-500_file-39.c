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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch39PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -1;
unsigned char var_1_6 = 0;
signed short int var_1_7 = 8;
signed short int var_1_8 = 4;
unsigned long int var_1_9 = 256;
unsigned long int var_1_10 = 10;
unsigned long int var_1_11 = 3084274888;
unsigned long int var_1_13 = 50;
signed long int var_1_14 = -10;
unsigned char var_1_16 = 0;
float var_1_19 = 4.5;
float var_1_20 = 15.375;
float var_1_21 = 32.725;
float var_1_22 = 63.5;
float var_1_23 = 16.375;
signed char var_1_24 = -32;
signed char var_1_25 = 0;
unsigned short int var_1_26 = 64;
signed long int var_1_27 = -10;
unsigned char var_1_28 = 1;
float var_1_29 = 999999999999.475;
signed long int var_1_30 = 0;
signed long int var_1_31 = -128;
signed long int var_1_32 = -64;
signed long int var_1_33 = -256;
unsigned long int var_1_34 = 16;
unsigned long int var_1_35 = 3810239014;
unsigned long int var_1_36 = 32;
signed long int var_1_37 = -5;
signed long int var_1_38 = -128;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
double var_1_41 = 255.5;
unsigned char var_1_42 = 64;
double var_1_43 = 255.5;
double var_1_44 = 255.25;
double var_1_45 = 255.375;
unsigned char var_1_46 = 0;
float var_1_47 = -0.625;
signed short int var_1_48 = 0;
signed short int var_1_49 = 2;
float var_1_50 = 7.8;
unsigned char var_1_51 = 64;
signed char var_1_52 = 64;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
signed short int var_1_55 = -32;
unsigned long int var_1_56 = 5;
unsigned char var_1_57 = 10;
unsigned char var_1_58 = 1;
float var_1_59 = 3.4;
double var_1_60 = 128.8;
unsigned char var_1_61 = 0;
signed long int var_1_62 = 64;
unsigned char var_1_63 = 0;
unsigned long int var_1_64 = 2;
float var_1_65 = 2.125;
float var_1_66 = 1.25;
unsigned char var_1_67 = 1;
unsigned char var_1_68 = 1;
float var_1_69 = 32.8;
float var_1_70 = 127.2;
float var_1_71 = 127.49;
float var_1_72 = 63.6;
float var_1_73 = 128.25;
float var_1_74 = 32.2;
signed char var_1_75 = 4;
unsigned short int var_1_76 = 50;
unsigned short int var_1_77 = 29106;
unsigned short int var_1_78 = 59183;
double var_1_79 = 8.75;
signed char var_1_80 = -2;
unsigned char var_1_81 = 0;
unsigned char var_1_82 = 128;
unsigned char var_1_83 = 1;
unsigned short int var_1_84 = 0;
float var_1_85 = 127.75;
float var_1_86 = 10.5;
float var_1_87 = 499.1;
unsigned char var_1_88 = 16;
unsigned char var_1_89 = 128;
signed char var_1_90 = 50;
unsigned long int var_1_91 = 128;
signed char var_1_92 = -1;
signed char var_1_93 = 4;
signed long int var_1_94 = 5;
unsigned char var_1_95 = 0;
unsigned char var_1_96 = 1;
unsigned long int var_1_97 = 1901575294;
unsigned char var_1_98 = 0;
float var_1_99 = 99.5;
float var_1_100 = 9.5;
unsigned char var_1_101 = 25;
signed char var_1_102 = 64;
unsigned long int var_1_103 = 32;
float var_1_104 = 500.5;
unsigned short int var_1_105 = 4;
unsigned char var_1_106 = 0;
signed char var_1_107 = 8;
signed char var_1_108 = 2;
float var_1_109 = 15.34;
unsigned long int var_1_110 = 25;
float var_1_111 = 15.5;
unsigned short int var_1_112 = 8;
signed long int var_1_113 = 5;
unsigned char var_1_114 = 4;
signed char var_1_115 = -1;
double var_1_116 = 15.6;
unsigned char var_1_117 = 0;
double var_1_118 = 255.95;
double var_1_119 = 5.75;
double var_1_120 = 1.5;
unsigned long int var_1_121 = 0;
unsigned long int var_1_122 = 3527265775;
unsigned long int var_1_123 = 0;
unsigned char var_1_124 = 128;
unsigned char var_1_125 = 0;
float var_1_126 = 32.6;
unsigned char var_1_127 = 1;
unsigned char var_1_128 = 0;
double var_1_129 = 0.5;
float var_1_130 = 50.6;
unsigned char var_1_131 = 0;
signed short int var_1_132 = 10000;
signed long int var_1_133 = 4;
unsigned long int var_1_134 = 8;
float var_1_135 = 64.8;
unsigned short int var_1_136 = 0;
double var_1_137 = 5.8;
double var_1_138 = 16.6;
signed long int var_1_139 = -32;
signed short int var_1_140 = -64;
float var_1_141 = 0.15;
unsigned char var_1_142 = 0;
signed long int var_1_143 = 256;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_9 = 256;
unsigned long int last_1_var_1_10 = 10;
signed long int last_1_var_1_14 = -10;
signed char last_1_var_1_24 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_28) {
		if ((abs (min (127.5f , var_1_29))) > 10.5f) {
			var_1_27 = (max (var_1_30 , var_1_31));
		} else {
			var_1_27 = ((abs (var_1_32)) + var_1_33);
		}
	}


	// From: CodeObject2
	if (var_1_28 && (var_1_27 > var_1_33)) {
		var_1_34 = ((abs (var_1_35)) - var_1_36);
	}


	// From: CodeObject3
	var_1_37 = (abs (abs (-5)));


	// From: CodeObject4
	if (var_1_28) {
		var_1_38 = (abs (var_1_33));
	} else {
		var_1_38 = (var_1_32 + var_1_33);
	}


	// From: CodeObject5
	var_1_39 = (var_1_40 && (! 0));


	// From: CodeObject6
	if (((- var_1_27) % var_1_42) == ((var_1_34 + var_1_38) | var_1_30)) {
		var_1_41 = (max (var_1_43 , var_1_44));
	} else {
		var_1_41 = var_1_43;
	}


	// From: CodeObject7
	if (var_1_46) {
		var_1_45 = (min (var_1_43 , (min (var_1_44 , 7.8))));
	}


	// From: CodeObject8
	if (((max (var_1_30 , var_1_31)) >> (min (var_1_48 , var_1_49))) < (var_1_38 & (var_1_37 ^ var_1_42))) {
		var_1_47 = (max ((max ((abs (var_1_44)) , var_1_43)) , var_1_50));
	}


	// From: CodeObject9
	if (10 > (var_1_36 >> var_1_35)) {
		if ((abs (var_1_35)) >= var_1_36) {
			var_1_51 = ((abs (var_1_49)) + var_1_48);
		}
	} else {
		if (var_1_40) {
			if (var_1_52 < var_1_33) {
				if (var_1_46 || (var_1_27 < var_1_32)) {
					var_1_51 = (min (var_1_49 , var_1_48));
				}
			}
		}
	}


	// From: CodeObject10
	if (var_1_40) {
		if ((abs (var_1_52)) >= (abs (256))) {
			var_1_53 = (var_1_46 && (! var_1_54));
		}
	}


	// From: CodeObject11
	if (var_1_50 < var_1_45) {
		var_1_55 = (max (var_1_49 , (min (var_1_51 , var_1_52))));
	}


	// From: CodeObject12
	if (var_1_52 < var_1_49) {
		if (var_1_51 > (var_1_31 / var_1_42)) {
			if ((var_1_48 - var_1_49) <= -64) {
				var_1_56 = (max ((var_1_48 + var_1_49) , (min ((var_1_35 - var_1_42) , (var_1_36 + var_1_51)))));
			}
		} else {
			var_1_56 = (min (((abs (var_1_36)) + (max (var_1_51 , var_1_42))) , var_1_48));
		}
	}


	// From: CodeObject13
	if ((var_1_47 + (max (var_1_29 , var_1_43))) <= (min (var_1_41 , 128.5))) {
		var_1_57 = (var_1_49 + var_1_48);
	} else {
		var_1_57 = (abs (var_1_49));
	}


	// From: CodeObject14
	if ((var_1_47 + var_1_43) >= var_1_44) {
		if ((var_1_45 / var_1_59) == var_1_60) {
			var_1_58 = (var_1_40 && var_1_54);
		} else {
			var_1_58 = (! var_1_61);
		}
	} else {
		if (var_1_54 && (var_1_57 <= var_1_36)) {
			var_1_58 = ((var_1_55 <= var_1_56) || var_1_54);
		} else {
			if ((abs (var_1_48 - var_1_57)) >= var_1_62) {
				var_1_58 = ((! var_1_63) && (! (var_1_39 && var_1_61)));
			} else {
				var_1_58 = (var_1_61 || var_1_63);
			}
		}
	}


	// From: CodeObject15
	if ((max (var_1_35 , var_1_38)) <= (var_1_62 + (- var_1_34))) {
		if (var_1_65 >= ((abs (var_1_60)) - (4.6260478440921928E18f - var_1_66))) {
			var_1_64 = (min (var_1_42 , (min (var_1_57 , var_1_35))));
		} else {
			var_1_64 = var_1_57;
		}
	} else {
		if (var_1_67) {
			var_1_64 = (min (var_1_36 , (var_1_51 + var_1_49)));
		}
	}


	// From: CodeObject16
	if (var_1_62 > var_1_57) {
		var_1_68 = ((! (! var_1_54)) && var_1_40);
	} else {
		if (var_1_63) {
			var_1_68 = (var_1_67 && ((var_1_55 < var_1_36) && var_1_61));
		} else {
			var_1_68 = (! 0);
		}
	}


	// From: CodeObject17
	if ((var_1_30 | var_1_36) > var_1_64) {
		if (var_1_28) {
			if (var_1_60 < (abs (var_1_43))) {
				var_1_69 = ((min (var_1_70 , (32.5f + var_1_71))) + var_1_72);
			} else {
				var_1_69 = (var_1_70 + (max (var_1_71 , (var_1_73 + var_1_74))));
			}
		} else {
			var_1_69 = (abs (abs (var_1_43)));
		}
	}


	// From: CodeObject18
	var_1_75 = (min ((abs (max (-4 , var_1_48))) , (var_1_49 - 16)));


	// From: CodeObject19
	var_1_76 = (min ((43791 - (var_1_77 - var_1_48)) , (var_1_78 - var_1_57)));


	// From: CodeObject20
	if ((-10 / (abs (var_1_80))) > var_1_38) {
		var_1_79 = (15.1 + var_1_73);
	} else {
		var_1_79 = (max (var_1_71 , var_1_72));
	}


	// From: CodeObject21
	if ((var_1_82 - var_1_48) > (~ (var_1_32 % var_1_80))) {
		var_1_81 = (var_1_63 || var_1_61);
	} else {
		var_1_81 = (var_1_46 || var_1_54);
	}


	// From: CodeObject22
	if (var_1_72 <= var_1_41) {
		if ((var_1_79 * var_1_66) < var_1_44) {
			var_1_83 = var_1_54;
		}
	}


	// From: CodeObject23
	if ((~ var_1_56) > (var_1_78 * (var_1_35 - var_1_36))) {
		var_1_84 = var_1_57;
	}


	// From: CodeObject24
	if (var_1_75 < var_1_76) {
		var_1_85 = (max (var_1_43 , (abs (abs (var_1_71)))));
	} else {
		var_1_85 = (max (var_1_74 , (var_1_66 - (var_1_86 + var_1_87))));
	}


	// From: CodeObject25
	if (var_1_63) {
		var_1_88 = (min (var_1_49 , var_1_48));
	} else {
		var_1_88 = (var_1_89 - (min (var_1_49 , var_1_48)));
	}


	// From: CodeObject26
	if (var_1_36 < (~ var_1_62)) {
		var_1_90 = ((var_1_48 - var_1_49) + (var_1_92 + var_1_93));
	} else {
		var_1_90 = (max ((min (var_1_48 , var_1_49)) , (2 + var_1_93)));
	}


	// From: CodeObject27
	if (var_1_73 > (- (var_1_66 - var_1_86))) {
		if (var_1_37 == -10) {
			var_1_94 = (abs (abs (var_1_52)));
		} else {
			var_1_94 = (min (100 , (var_1_76 + (var_1_88 - var_1_48))));
		}
	}


	// From: CodeObject28
	if (var_1_74 < var_1_69) {
		if (var_1_67 || ((~ var_1_64) < (var_1_37 | var_1_62))) {
			if ((var_1_91 % var_1_77) >= (32u * var_1_64)) {
				if ((~ (var_1_27 + var_1_94)) >= var_1_93) {
					var_1_95 = (var_1_53 && var_1_61);
				} else {
					var_1_95 = var_1_40;
				}
			}
		}
	} else {
		if (var_1_51 <= var_1_82) {
			var_1_95 = (var_1_40 || var_1_54);
		} else {
			var_1_95 = (! var_1_61);
		}
	}


	// From: CodeObject29
	if ((var_1_35 - (var_1_97 - var_1_77)) <= var_1_84) {
		var_1_96 = (var_1_54 || (! var_1_98));
	}


	// From: CodeObject30
	if ((min (var_1_29 , (var_1_69 / var_1_59))) != (min ((min (var_1_66 , var_1_47)) , var_1_100))) {
		if ((var_1_43 / (abs (var_1_59))) <= var_1_86) {
			if (((~ var_1_37) * var_1_35) > var_1_57) {
				var_1_99 = var_1_43;
			} else {
				var_1_99 = ((min (var_1_87 , 32.2f)) - var_1_66);
			}
		}
	}


	// From: CodeObject31
	var_1_101 = (abs (abs (var_1_48)));


	// From: CodeObject32
	if (var_1_81) {
		if (var_1_95) {
			var_1_102 = (abs (8 + var_1_49));
		}
	} else {
		var_1_102 = (max ((var_1_48 + var_1_93) , var_1_49));
	}


	// From: CodeObject33
	if (var_1_80 < var_1_102) {
		var_1_103 = (abs (var_1_49));
	} else {
		var_1_103 = (abs (var_1_84));
	}


	// From: CodeObject34
	if (var_1_99 <= (min ((min (var_1_79 , var_1_43)) , var_1_47))) {
		var_1_104 = (abs (var_1_72));
	}


	// From: CodeObject35
	if (var_1_98) {
		if (var_1_106) {
			var_1_105 = (min ((var_1_51 + var_1_101) , var_1_57));
		} else {
			var_1_105 = (var_1_89 + var_1_101);
		}
	} else {
		var_1_105 = ((abs (var_1_78)) - var_1_51);
	}


	// From: CodeObject36
	if (2 == var_1_92) {
		if (var_1_96) {
			var_1_107 = (var_1_48 - (var_1_49 + (5 + var_1_108)));
		}
	} else {
		var_1_107 = (var_1_48 + ((abs (var_1_92)) + var_1_108));
	}


	// From: CodeObject37
	if ((min (var_1_27 , (~ var_1_31))) < (~ var_1_77)) {
		if (var_1_32 <= (var_1_92 % var_1_78)) {
			var_1_109 = (abs (var_1_72));
		}
	}


	// From: CodeObject38
	var_1_110 = var_1_97;


	// From: CodeObject39
	if (var_1_41 > var_1_99) {
		if ((var_1_70 * -0.38) <= (abs (var_1_69))) {
			var_1_111 = (var_1_70 + (var_1_73 + (abs (var_1_71))));
		}
	}


	// From: CodeObject40
	if (var_1_61) {
		var_1_112 = ((abs (var_1_89)) + var_1_101);
	}


	// From: CodeObject41
	if ((var_1_87 / var_1_59) <= var_1_43) {
		if (var_1_90 <= var_1_103) {
			if (var_1_32 >= var_1_92) {
				var_1_113 = (abs (var_1_88));
			}
		} else {
			var_1_113 = (abs (abs (var_1_55)));
		}
	}


	// From: CodeObject42
	if (var_1_108 >= (var_1_110 / (abs (1)))) {
		var_1_114 = (min ((abs (var_1_89 - var_1_49)) , var_1_108));
	}


	// From: CodeObject43
	if (! (var_1_72 > var_1_79)) {
		if (var_1_58) {
			if ((var_1_31 & var_1_94) > var_1_88) {
				var_1_115 = (abs (var_1_108 - (max (var_1_49 , var_1_48))));
			}
		}
	}


	// From: CodeObject44
	if (var_1_27 != (var_1_64 * var_1_108)) {
		var_1_116 = (abs (min (var_1_74 , (min (var_1_50 , var_1_44)))));
	} else {
		if ((var_1_76 % var_1_91) <= var_1_57) {
			if (! var_1_46) {
				if (var_1_63) {
					var_1_116 = ((abs (var_1_118)) + (min (var_1_73 , var_1_86)));
				}
			} else {
				var_1_116 = ((var_1_86 + var_1_87) - (max ((var_1_119 + var_1_120) , 99999.75)));
			}
		}
	}


	// From: CodeObject45
	if (var_1_115 <= var_1_97) {
		if (var_1_40) {
			var_1_121 = ((abs (var_1_51)) + 256u);
		} else {
			if (var_1_31 < var_1_57) {
				if ((var_1_110 + var_1_112) >= 100u) {
					if (var_1_54) {
						var_1_121 = var_1_105;
					}
				}
			} else {
				var_1_121 = var_1_48;
			}
		}
	} else {
		var_1_121 = ((max (var_1_35 , var_1_122)) - var_1_123);
	}


	// From: CodeObject46
	if (var_1_73 < var_1_43) {
		var_1_124 = var_1_48;
	}


	// From: CodeObject47
	var_1_125 = var_1_40;


	// From: CodeObject48
	if (var_1_28) {
		var_1_126 = var_1_120;
	}


	// From: CodeObject49
	if (var_1_83) {
		var_1_127 = var_1_128;
	}


	// From: CodeObject50
	if (var_1_98) {
		var_1_129 = var_1_119;
	} else {
		var_1_129 = var_1_73;
	}


	// From: CodeObject51
	if (var_1_28) {
		var_1_130 = var_1_70;
	}


	// From: CodeObject52
	if (var_1_83) {
		var_1_131 = var_1_40;
	} else {
		var_1_131 = 0;
	}


	// From: CodeObject53
	if (var_1_81) {
		var_1_132 = var_1_88;
	}


	// From: CodeObject54
	if (var_1_28) {
		var_1_133 = var_1_55;
	} else {
		var_1_133 = var_1_89;
	}


	// From: CodeObject55
	var_1_134 = 200u;


	// From: CodeObject56
	if (var_1_68) {
		var_1_135 = var_1_87;
	} else {
		var_1_135 = var_1_44;
	}


	// From: CodeObject57
	var_1_136 = var_1_77;


	// From: CodeObject58
	if (var_1_58) {
		var_1_137 = var_1_71;
	}


	// From: CodeObject59
	if (var_1_67) {
		var_1_138 = var_1_86;
	} else {
		var_1_138 = var_1_118;
	}


	// From: CodeObject60
	if (var_1_40) {
		var_1_139 = var_1_92;
	}


	// From: CodeObject61
	if (var_1_28) {
		var_1_140 = var_1_82;
	}


	// From: CodeObject62
	var_1_141 = var_1_120;


	// From: CodeObject63
	if (var_1_131) {
		var_1_142 = var_1_128;
	} else {
		var_1_142 = var_1_98;
	}


	// From: CodeObject64
	if (((var_1_80 < var_1_88) && var_1_117) || var_1_61) {
		if (var_1_35 <= var_1_113) {
			if ((var_1_89 ^ var_1_113) != -8) {
				var_1_143 = 5;
			}
		}
	}


	// From: Req1Batch39PS_CN_500
	unsigned long int stepLocal_0 = (last_1_var_1_10 + last_1_var_1_14) ^ last_1_var_1_10;
	if (stepLocal_0 < (last_1_var_1_24 | -4)) {
		var_1_1 = (var_1_7 - var_1_8);
	} else {
		var_1_1 = (last_1_var_1_10 + -16);
	}


	// From: Req7Batch39PS_CN_500
	var_1_24 = var_1_25;


	// From: Req8Batch39PS_CN_500
	var_1_26 = var_1_8;


	// From: Req3Batch39PS_CN_500
	var_1_10 = (min ((abs (var_1_11 - var_1_8)) , (max (0u , var_1_26))));


	// From: Req4Batch39PS_CN_500
	unsigned long int stepLocal_3 = var_1_8 / (1u + 16u);
	unsigned long int stepLocal_2 = var_1_11;
	if (var_1_26 < stepLocal_3) {
		if (stepLocal_2 > (var_1_26 + 5u)) {
			var_1_13 = (max (var_1_26 , var_1_11));
		} else {
			var_1_13 = 5u;
		}
	} else {
		var_1_13 = var_1_8;
	}


	// From: Req6Batch39PS_CN_500
	signed short int stepLocal_4 = var_1_8;
	if (stepLocal_4 <= var_1_13) {
		var_1_19 = (max (((min (var_1_20 , var_1_21)) + var_1_22) , var_1_23));
	} else {
		var_1_19 = var_1_22;
	}


	// From: Req2Batch39PS_CN_500
	unsigned long int stepLocal_1 = var_1_10;
	if (stepLocal_1 >= (min (var_1_1 , last_1_var_1_9))) {
		if (var_1_6) {
			var_1_9 = var_1_8;
		}
	}


	// From: Req5Batch39PS_CN_500
	if (var_1_26 >= var_1_7) {
		if (var_1_1 > var_1_11) {
			if (var_1_6 && var_1_16) {
				var_1_14 = (var_1_7 - (var_1_26 + var_1_8));
			} else {
				var_1_14 = var_1_26;
			}
		}
	} else {
		var_1_14 = var_1_24;
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854765600e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -127);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483647);
	assume_abort_if_not(var_1_30 <= 2147483646);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483647);
	assume_abort_if_not(var_1_31 <= 2147483646);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -1073741823);
	assume_abort_if_not(var_1_32 <= 1073741823);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -1073741823);
	assume_abort_if_not(var_1_33 <= 1073741823);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 255);
	assume_abort_if_not(var_1_42 != 0);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854765600e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854765600e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_48 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 32);
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 32);
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -922337.2036854765600e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -128);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= -922337.2036854776000e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
	assume_abort_if_not(var_1_59 != 0.0F);
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= -922337.2036854776000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 0);
	var_1_62 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_62 >= -2147483648);
	assume_abort_if_not(var_1_62 <= 2147483647);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 0);
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= -922337.2036854776000e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854776000e+12F && var_1_65 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 4611686.018427387900e+12F && var_1_66 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 1);
	var_1_70 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_70 >= -461168.6018427382800e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427382800e+12F && var_1_70 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= -230584.3009213691390e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691390e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= -461168.6018427382800e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427382800e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= -230584.3009213691390e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 2305843.009213691390e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= -230584.3009213691390e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 2305843.009213691390e+12F && var_1_74 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_77 >= 16383);
	assume_abort_if_not(var_1_77 <= 32767);
	var_1_78 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_78 >= 32767);
	assume_abort_if_not(var_1_78 <= 65534);
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= -127);
	assume_abort_if_not(var_1_80 <= 127);
	assume_abort_if_not(var_1_80 != 0);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 127);
	assume_abort_if_not(var_1_82 <= 255);
	var_1_86 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_86 >= 0.0F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 4611686.018427382800e+12F && var_1_86 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_87 >= 0.0F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 4611686.018427382800e+12F && var_1_87 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 127);
	assume_abort_if_not(var_1_89 <= 254);
	var_1_91 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 4294967295);
	assume_abort_if_not(var_1_91 != 0);
	var_1_92 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_92 >= -31);
	assume_abort_if_not(var_1_92 <= 32);
	var_1_93 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_93 >= -31);
	assume_abort_if_not(var_1_93 <= 31);
	var_1_97 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_97 >= 1073741823);
	assume_abort_if_not(var_1_97 <= 2147483647);
	var_1_98 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_98 >= 0);
	assume_abort_if_not(var_1_98 <= 0);
	var_1_100 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_100 >= -922337.2036854776000e+13F && var_1_100 <= -1.0e-20F) || (var_1_100 <= 9223372.036854776000e+12F && var_1_100 >= 1.0e-20F ));
	var_1_106 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 1);
	var_1_108 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_108 >= 0);
	assume_abort_if_not(var_1_108 <= 31);
	var_1_117 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_117 >= 0);
	assume_abort_if_not(var_1_117 <= 1);
	var_1_118 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_118 >= -461168.6018427382800e+13F && var_1_118 <= -1.0e-20F) || (var_1_118 <= 4611686.018427382800e+12F && var_1_118 >= 1.0e-20F ));
	var_1_119 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_119 >= 0.0F && var_1_119 <= -1.0e-20F) || (var_1_119 <= 4611686.018427382800e+12F && var_1_119 >= 1.0e-20F ));
	var_1_120 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_120 >= 0.0F && var_1_120 <= -1.0e-20F) || (var_1_120 <= 4611686.018427382800e+12F && var_1_120 >= 1.0e-20F ));
	var_1_122 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_122 >= 2147483647);
	assume_abort_if_not(var_1_122 <= 4294967294);
	var_1_123 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_123 >= 0);
	assume_abort_if_not(var_1_123 <= 2147483647);
	var_1_128 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_128 >= 0);
	assume_abort_if_not(var_1_128 <= 0);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_24 = var_1_24;
}

int property() {
	return ((((((((((last_1_var_1_10 + last_1_var_1_14) ^ last_1_var_1_10) < (last_1_var_1_24 | -4)) ? (var_1_1 == ((signed short int) (var_1_7 - var_1_8))) : (var_1_1 == ((signed short int) (last_1_var_1_10 + -16)))) && ((var_1_10 >= (min (var_1_1 , last_1_var_1_9))) ? (var_1_6 ? (var_1_9 == ((unsigned long int) var_1_8)) : 1) : 1)) && (var_1_10 == ((unsigned long int) (min ((abs (var_1_11 - var_1_8)) , (max (0u , var_1_26))))))) && ((var_1_26 < (var_1_8 / (1u + 16u))) ? ((var_1_11 > (var_1_26 + 5u)) ? (var_1_13 == ((unsigned long int) (max (var_1_26 , var_1_11)))) : (var_1_13 == ((unsigned long int) 5u))) : (var_1_13 == ((unsigned long int) var_1_8)))) && ((var_1_26 >= var_1_7) ? ((var_1_1 > var_1_11) ? ((var_1_6 && var_1_16) ? (var_1_14 == ((signed long int) (var_1_7 - (var_1_26 + var_1_8)))) : (var_1_14 == ((signed long int) var_1_26))) : 1) : (var_1_14 == ((signed long int) var_1_24)))) && ((var_1_8 <= var_1_13) ? (var_1_19 == ((float) (max (((min (var_1_20 , var_1_21)) + var_1_22) , var_1_23)))) : (var_1_19 == ((float) var_1_22)))) && (var_1_24 == ((signed char) var_1_25))) && (var_1_26 == ((unsigned short int) var_1_8))
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
