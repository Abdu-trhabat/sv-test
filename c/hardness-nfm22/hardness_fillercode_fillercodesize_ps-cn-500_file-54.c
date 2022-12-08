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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch54PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -4;
signed short int var_1_4 = 256;
signed short int var_1_5 = 0;
signed short int var_1_6 = 25;
signed short int var_1_8 = 100;
unsigned char var_1_9 = 1;
signed short int var_1_10 = -4;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 64;
double var_1_15 = 10.3;
double var_1_16 = 128.6;
unsigned long int var_1_17 = 2600113953;
float var_1_18 = 8.25;
float var_1_19 = 31.5;
float var_1_20 = 2.625;
float var_1_21 = 999999999999999.2;
float var_1_22 = 127.5;
float var_1_23 = 4.8;
signed char var_1_24 = 64;
float var_1_25 = 1000000.2;
signed char var_1_26 = 10;
float var_1_27 = 50.3;
float var_1_28 = 10.5;
float var_1_29 = 100000000000.65;
float var_1_30 = 25.4;
float var_1_31 = 255.75;
float var_1_32 = 256.625;
unsigned short int var_1_33 = 1;
signed long int var_1_34 = -128;
signed long int var_1_35 = -256;
unsigned short int var_1_36 = 50;
float var_1_37 = 15.75;
signed long int var_1_38 = -100;
signed short int var_1_39 = 16;
unsigned char var_1_40 = 16;
unsigned char var_1_41 = 1;
float var_1_42 = 3.4;
unsigned char var_1_43 = 128;
unsigned char var_1_44 = 32;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 16;
double var_1_48 = 63.25;
float var_1_49 = 256.375;
float var_1_50 = 128.8;
double var_1_51 = 99.8;
double var_1_52 = 0.5;
signed long int var_1_53 = -50;
signed short int var_1_54 = 16;
signed short int var_1_55 = 8;
signed short int var_1_56 = 32;
signed short int var_1_57 = 4;
signed short int var_1_58 = 27434;
signed short int var_1_59 = 25510;
signed short int var_1_60 = 128;
signed char var_1_61 = -4;
unsigned char var_1_62 = 1;
unsigned char var_1_63 = 0;
signed long int var_1_64 = -25;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 0;
signed long int var_1_68 = 4;
unsigned short int var_1_69 = 128;
unsigned char var_1_70 = 0;
signed char var_1_71 = 0;
signed char var_1_72 = -5;
signed char var_1_73 = 5;
double var_1_74 = 100000.2;
unsigned short int var_1_75 = 5;
unsigned short int var_1_76 = 42387;
unsigned short int var_1_77 = 39591;
double var_1_78 = 49.5;
signed long int var_1_79 = 2084206834;
unsigned short int var_1_80 = 4;
float var_1_81 = 2.5;
float var_1_82 = 1.8;
unsigned char var_1_83 = 8;
unsigned short int var_1_84 = 32;
unsigned char var_1_85 = 200;
signed char var_1_86 = -4;
signed char var_1_87 = 1;
unsigned long int var_1_88 = 1;
unsigned short int var_1_89 = 128;
signed long int var_1_90 = -1000000;
signed char var_1_91 = -5;
float var_1_92 = 3.618;
signed char var_1_93 = -4;
double var_1_94 = 25.15;
double var_1_95 = 7.6;
unsigned char var_1_96 = 1;
float var_1_97 = 128.5;
unsigned char var_1_98 = 0;
signed long int var_1_99 = -5;
signed long int var_1_100 = -16;
float var_1_101 = 9.25;
double var_1_102 = -0.25;
signed short int var_1_103 = -128;
unsigned char var_1_104 = 0;
unsigned char var_1_105 = 64;
unsigned char var_1_106 = 1;
unsigned short int var_1_107 = 256;
unsigned short int var_1_108 = 4;
unsigned short int var_1_109 = 0;
unsigned char var_1_110 = 1;
unsigned char var_1_111 = 1;
float var_1_112 = 1.6800000000000002;
double var_1_113 = 1.375;
double var_1_114 = 5.375;
unsigned short int var_1_115 = 16;
unsigned char var_1_116 = 1;
unsigned long int var_1_117 = 0;
signed long int var_1_118 = -50;
signed short int var_1_119 = -256;
unsigned char var_1_120 = 0;
unsigned short int var_1_121 = 4;
signed char var_1_122 = 64;
signed short int var_1_123 = -10000;
signed char var_1_124 = -32;
double var_1_125 = 9.25;
signed short int var_1_126 = -50;
signed long int var_1_127 = 500;
double var_1_128 = -0.25;
unsigned long int var_1_129 = 64;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_9 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_24 > -64) {
		var_1_23 = (max (49.2f , 63.125f));
	}


	// From: CodeObject2
	if (var_1_24 >= var_1_26) {
		var_1_25 = (max ((abs (min (9.999999999999962E13f , var_1_27))) , (abs (var_1_28))));
	} else {
		var_1_25 = ((var_1_29 + 4.1f) + (var_1_30 + (max (var_1_31 , var_1_32))));
	}


	// From: CodeObject3
	if ((5 / (min (var_1_34 , var_1_35))) <= -25) {
		var_1_33 = (abs (var_1_36));
	} else {
		if (var_1_23 <= var_1_37) {
			if (((var_1_26 ^ var_1_34) | var_1_35) > (abs (max (var_1_24 , var_1_36)))) {
				var_1_33 = var_1_36;
			}
		} else {
			if (var_1_31 < var_1_32) {
				var_1_33 = var_1_36;
			}
		}
	}


	// From: CodeObject4
	if ((var_1_34 * var_1_26) >= var_1_24) {
		if ((- (abs (var_1_36))) <= var_1_33) {
			if (var_1_34 < (var_1_36 * (abs (var_1_33)))) {
				var_1_38 = (min ((abs (2)) , ((max (var_1_24 , 4)) + var_1_26)));
			} else {
				var_1_38 = (min (8 , var_1_33));
			}
		} else {
			var_1_38 = (var_1_26 + (min ((abs (var_1_24)) , (max (-5 , var_1_36)))));
		}
	} else {
		var_1_38 = (abs (var_1_33));
	}


	// From: CodeObject5
	if (var_1_30 >= var_1_27) {
		var_1_39 = (abs (var_1_26));
	} else {
		var_1_39 = (abs (var_1_26));
	}


	// From: CodeObject6
	if ((var_1_33 >> var_1_39) > (var_1_26 / (min (var_1_35 , var_1_34)))) {
		var_1_40 = (abs (var_1_41));
	}


	// From: CodeObject7
	if ((- var_1_31) >= var_1_29) {
		var_1_42 = var_1_30;
	} else {
		var_1_42 = (max (var_1_30 , var_1_28));
	}


	// From: CodeObject8
	if (var_1_24 >= var_1_36) {
		var_1_43 = (abs (max (var_1_41 , var_1_44)));
	} else {
		if (var_1_45 || var_1_46) {
			var_1_43 = (min (var_1_41 , (max ((128 - var_1_47) , (abs (25))))));
		}
	}


	// From: CodeObject9
	if (var_1_30 < ((abs (var_1_25)) - (max (var_1_49 , var_1_50)))) {
		if (var_1_24 >= var_1_40) {
			var_1_48 = (var_1_51 - var_1_52);
		} else {
			var_1_48 = ((abs (abs (var_1_31))) - var_1_51);
		}
	}


	// From: CodeObject10
	if ((var_1_35 >> (var_1_54 - var_1_55)) < ((var_1_24 | var_1_43) % var_1_34)) {
		var_1_53 = var_1_54;
	} else {
		var_1_53 = var_1_24;
	}


	// From: CodeObject11
	if ((- var_1_51) < var_1_31) {
		if (var_1_55 >= ((var_1_44 * var_1_24) & -5)) {
			if (var_1_44 <= var_1_39) {
				var_1_56 = (var_1_57 - ((min (var_1_58 , var_1_59)) - var_1_60));
			} else {
				var_1_56 = (abs (var_1_24));
			}
		}
	} else {
		if (((~ var_1_61) / (min (var_1_34 , var_1_54))) <= (var_1_57 / var_1_35)) {
			var_1_56 = var_1_41;
		} else {
			var_1_56 = (max (2 , (max (-100 , (abs (var_1_54))))));
		}
	}


	// From: CodeObject12
	var_1_62 = (! (var_1_45 || var_1_63));


	// From: CodeObject13
	var_1_64 = (max (var_1_26 , (min (var_1_41 , var_1_40))));


	// From: CodeObject14
	if (var_1_60 >= var_1_54) {
		if (! (var_1_62 || var_1_63)) {
			var_1_65 = (! (! (var_1_66 || var_1_67)));
		} else {
			if (var_1_46) {
				var_1_65 = ((var_1_61 <= var_1_55) || var_1_63);
			} else {
				var_1_65 = (! (var_1_45 && var_1_67));
			}
		}
	}


	// From: CodeObject15
	if (var_1_45) {
		var_1_68 = (abs (max (-32 , (min (var_1_26 , 64)))));
	} else {
		if (var_1_69 >= (var_1_40 | var_1_54)) {
			var_1_68 = (abs (var_1_36));
		} else {
			var_1_68 = (max ((var_1_47 + var_1_56) , var_1_61));
		}
	}


	// From: CodeObject16
	if (var_1_34 > -100) {
		var_1_70 = (! ((-10000000 == var_1_60) && var_1_67));
	}


	// From: CodeObject17
	if ((- var_1_38) >= var_1_69) {
		var_1_71 = (var_1_55 + var_1_54);
	} else {
		if ((var_1_30 * var_1_25) >= ((max (var_1_50 , var_1_52)) - var_1_51)) {
			var_1_71 = (max (var_1_54 , var_1_72));
		} else {
			if ((var_1_56 ^ var_1_72) >= var_1_39) {
				var_1_71 = (abs (var_1_73 + var_1_54));
			}
		}
	}


	// From: CodeObject18
	if (var_1_26 > var_1_56) {
		if ((abs (var_1_42)) < var_1_48) {
			var_1_74 = (abs (abs (var_1_52 - var_1_51)));
		} else {
			if (var_1_34 >= ((var_1_54 << var_1_59) / (abs (var_1_58)))) {
				var_1_74 = (min ((max (var_1_31 , 25.5)) , (abs (2.2))));
			}
		}
	} else {
		var_1_74 = (max (0.9 , var_1_29));
	}


	// From: CodeObject19
	if (var_1_58 >= var_1_73) {
		if (var_1_45) {
			var_1_75 = (abs (max (var_1_44 , var_1_59)));
		} else {
			var_1_75 = (max (((min (var_1_76 , var_1_77)) - (var_1_43 + 5)) , var_1_58));
		}
	} else {
		if ((- var_1_41) > var_1_59) {
			var_1_75 = (min ((max (var_1_41 , var_1_40)) , (min (var_1_44 , 1000))));
		} else {
			var_1_75 = (max (var_1_47 , var_1_43));
		}
	}


	// From: CodeObject20
	if (0 == (var_1_54 - (var_1_79 - var_1_40))) {
		var_1_78 = var_1_29;
	}


	// From: CodeObject21
	if ((abs (var_1_42)) != var_1_27) {
		var_1_80 = (var_1_55 + var_1_58);
	} else {
		var_1_80 = (abs (var_1_44 + var_1_54));
	}


	// From: CodeObject22
	if (50 <= (var_1_64 * var_1_77)) {
		var_1_81 = (abs (var_1_31));
	} else {
		var_1_81 = (var_1_52 - (max (var_1_51 , var_1_82)));
	}


	// From: CodeObject23
	if (var_1_77 < (abs (min (var_1_84 , var_1_76)))) {
		if ((- (abs (var_1_74))) < (abs (var_1_78))) {
			var_1_83 = (var_1_85 - var_1_47);
		}
	}


	// From: CodeObject24
	if (var_1_29 >= var_1_49) {
		if (var_1_67) {
			var_1_86 = (var_1_54 - (var_1_55 + var_1_87));
		} else {
			var_1_86 = var_1_72;
		}
	} else {
		if ((var_1_83 | var_1_88) > var_1_77) {
			if ((var_1_77 | var_1_80) >= var_1_47) {
				var_1_86 = var_1_72;
			} else {
				if (var_1_66 && var_1_70) {
					if (var_1_31 > var_1_49) {
						var_1_86 = ((abs (abs (-5))) + (max (var_1_73 , var_1_87)));
					} else {
						var_1_86 = (abs ((min (var_1_73 , var_1_55)) + var_1_87));
					}
				}
			}
		} else {
			var_1_86 = (max (var_1_72 , var_1_55));
		}
	}


	// From: CodeObject25
	if (var_1_90 > var_1_33) {
		var_1_89 = (abs (var_1_76 - var_1_41));
	} else {
		var_1_89 = (abs (var_1_58));
	}


	// From: CodeObject26
	if (((var_1_64 % var_1_77) >= var_1_83) || (var_1_66 || (var_1_69 <= var_1_59))) {
		var_1_91 = (max (var_1_54 , var_1_73));
	} else {
		var_1_91 = 64;
	}


	// From: CodeObject27
	var_1_92 = (max ((abs (abs (var_1_52))) , (abs (var_1_29))));


	// From: CodeObject28
	if (var_1_74 >= ((var_1_94 + var_1_95) - var_1_51)) {
		var_1_93 = (abs (var_1_73));
	}


	// From: CodeObject29
	if ((-16 ^ var_1_86) > (max (var_1_69 , var_1_68))) {
		var_1_96 = (var_1_70 || var_1_63);
	}


	// From: CodeObject30
	if (((abs (var_1_54)) | 50) < var_1_36) {
		if (var_1_98) {
			if ((abs (var_1_29)) >= (min (var_1_48 , var_1_37))) {
				var_1_97 = (var_1_29 + var_1_32);
			} else {
				var_1_97 = ((abs (var_1_28)) - var_1_95);
			}
		}
	} else {
		var_1_97 = (abs (255.05f + (var_1_32 + var_1_31)));
	}


	// From: CodeObject31
	if (! (var_1_76 <= var_1_43)) {
		if (! var_1_46) {
			var_1_99 = (128 + var_1_100);
		}
	}


	// From: CodeObject32
	if (var_1_46) {
		var_1_101 = (max (var_1_29 , (var_1_82 - var_1_94)));
	} else {
		if (var_1_68 <= var_1_24) {
			if (var_1_35 <= (min (var_1_72 , (var_1_57 * -4)))) {
				if (var_1_74 < (min (500.4 , (var_1_29 / var_1_102)))) {
					var_1_101 = (var_1_82 - var_1_94);
				}
			}
		}
	}


	// From: CodeObject33
	if (var_1_34 >= var_1_100) {
		var_1_103 = (min (var_1_41 , var_1_40));
	}


	// From: CodeObject34
	if (var_1_62) {
		var_1_104 = (var_1_47 + (var_1_105 - var_1_87));
	} else {
		if (! var_1_45) {
			if (16 > var_1_53) {
				var_1_104 = var_1_47;
			} else {
				var_1_104 = (abs (var_1_87));
			}
		} else {
			var_1_104 = (abs (var_1_106));
		}
	}


	// From: CodeObject35
	if (var_1_66) {
		if (var_1_40 <= var_1_104) {
			var_1_107 = (min (2 , var_1_87));
		} else {
			var_1_107 = (max ((min (var_1_106 , (var_1_85 + var_1_108))) , (abs (var_1_58))));
		}
	} else {
		var_1_107 = var_1_83;
	}


	// From: CodeObject36
	if (var_1_42 > (min ((var_1_82 - var_1_95) , (max (var_1_97 , var_1_101))))) {
		var_1_109 = (var_1_76 - (29981 - var_1_55));
	} else {
		var_1_109 = (max (var_1_76 , var_1_83));
	}


	// From: CodeObject37
	if ((- var_1_78) < (var_1_49 + var_1_28)) {
		if (var_1_33 == (var_1_89 * var_1_47)) {
			if (! ((2 & var_1_36) > var_1_100)) {
				if ((max (128 , var_1_47)) <= (var_1_44 * (var_1_71 | var_1_105))) {
					var_1_110 = (var_1_63 && (! var_1_111));
				}
			}
		} else {
			var_1_110 = (var_1_66 || var_1_67);
		}
	} else {
		if (var_1_23 < (var_1_49 + var_1_29)) {
			if ((var_1_107 / var_1_34) <= (-2 * (var_1_75 | var_1_91))) {
				var_1_110 = (! var_1_67);
			} else {
				var_1_110 = ((var_1_47 > var_1_55) && (var_1_67 || var_1_66));
			}
		}
	}


	// From: CodeObject38
	if ((abs (var_1_86)) < var_1_54) {
		var_1_112 = (min ((var_1_29 + var_1_30) , var_1_52));
	} else {
		var_1_112 = var_1_94;
	}


	// From: CodeObject39
	if (var_1_44 >= (var_1_60 << var_1_83)) {
		if (var_1_84 <= var_1_105) {
			var_1_113 = (abs (var_1_32));
		}
	}


	// From: CodeObject40
	if ((var_1_109 | var_1_54) < var_1_105) {
		var_1_114 = var_1_82;
	} else {
		var_1_114 = var_1_82;
	}


	// From: CodeObject41
	if (var_1_116) {
		var_1_115 = var_1_105;
	}


	// From: CodeObject42
	if (var_1_98) {
		var_1_117 = var_1_55;
	}


	// From: CodeObject43
	var_1_118 = 16;


	// From: CodeObject44
	if (var_1_46) {
		var_1_119 = var_1_40;
	} else {
		var_1_119 = var_1_73;
	}


	// From: CodeObject45
	if (var_1_98) {
		var_1_120 = var_1_111;
	} else {
		var_1_120 = var_1_111;
	}


	// From: CodeObject46
	if (var_1_45) {
		var_1_121 = var_1_76;
	} else {
		var_1_121 = var_1_104;
	}


	// From: CodeObject47
	if (var_1_46) {
		var_1_122 = var_1_87;
	} else {
		var_1_122 = var_1_72;
	}


	// From: CodeObject48
	if (var_1_67) {
		var_1_123 = 256;
	}


	// From: CodeObject49
	if (var_1_46) {
		var_1_124 = var_1_87;
	}


	// From: CodeObject50
	if (var_1_70) {
		var_1_125 = var_1_51;
	}


	// From: CodeObject51
	if (var_1_111) {
		var_1_126 = var_1_54;
	}


	// From: CodeObject52
	if (var_1_96) {
		var_1_127 = var_1_47;
	} else {
		var_1_127 = var_1_58;
	}


	// From: CodeObject53
	if (500 <= var_1_122) {
		if (var_1_62) {
			var_1_128 = (min (var_1_29 , (var_1_30 + var_1_32)));
		} else {
			var_1_128 = (abs (var_1_82));
		}
	}


	// From: CodeObject54
	var_1_129 = var_1_115;


	// From: Req2Batch54PS_CN_500
	if (last_1_var_1_9) {
		if (var_1_5 == var_1_4) {
			var_1_6 = (min ((abs (var_1_5)) , (var_1_4 - var_1_8)));
		} else {
			var_1_6 = var_1_8;
		}
	} else {
		var_1_6 = var_1_4;
	}


	// From: Req6Batch54PS_CN_500
	if (-32 >= (var_1_5 - var_1_8)) {
		if (var_1_10 > var_1_6) {
			var_1_18 = ((var_1_19 - var_1_20) + (var_1_21 + var_1_22));
		} else {
			var_1_18 = var_1_20;
		}
	} else {
		var_1_18 = var_1_19;
	}


	// From: Req5Batch54PS_CN_500
	if (var_1_18 < (max (var_1_18 , (var_1_15 - var_1_16)))) {
		var_1_14 = (var_1_17 - (var_1_8 + var_1_4));
	}


	// From: Req3Batch54PS_CN_500
	unsigned long int stepLocal_0 = var_1_14;
	if (((var_1_8 % var_1_10) * (8 + var_1_14)) >= stepLocal_0) {
		var_1_9 = ((! var_1_11) || var_1_12);
	} else {
		var_1_9 = (! var_1_12);
	}


	// From: Req1Batch54PS_CN_500
	if (var_1_18 > var_1_18) {
		var_1_1 = ((min ((2 + var_1_4) , var_1_5)) - 2);
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req4Batch54PS_CN_500
	unsigned long int stepLocal_1 = min (var_1_14 , var_1_5);
	if (((var_1_8 * var_1_1) + var_1_4) >= stepLocal_1) {
		var_1_13 = var_1_12;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32768);
	assume_abort_if_not(var_1_10 <= 32767);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691390e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -230584.3009213691390e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -128);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854765600e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -230584.3009213691390e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691390e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -230584.3009213691390e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691390e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -230584.3009213691390e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691390e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -230584.3009213691390e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691390e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483648);
	assume_abort_if_not(var_1_34 <= 2147483647);
	assume_abort_if_not(var_1_34 != 0);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483648);
	assume_abort_if_not(var_1_35 <= 2147483647);
	assume_abort_if_not(var_1_35 != 0);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 65534);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_54 >= 16);
	assume_abort_if_not(var_1_54 <= 32);
	var_1_55 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 16);
	var_1_57 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_57 >= -1);
	assume_abort_if_not(var_1_57 <= 32766);
	var_1_58 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_58 >= 16383);
	assume_abort_if_not(var_1_58 <= 32766);
	var_1_59 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_59 >= 16383);
	assume_abort_if_not(var_1_59 <= 32766);
	var_1_60 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 16383);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= -128);
	assume_abort_if_not(var_1_61 <= 127);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 1);
	assume_abort_if_not(var_1_63 <= 1);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 0);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 0);
	var_1_69 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 65535);
	var_1_72 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_72 >= -127);
	assume_abort_if_not(var_1_72 <= 126);
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= -63);
	assume_abort_if_not(var_1_73 <= 63);
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 32767);
	assume_abort_if_not(var_1_76 <= 65534);
	var_1_77 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_77 >= 32767);
	assume_abort_if_not(var_1_77 <= 65534);
	var_1_79 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_79 >= 1073741823);
	assume_abort_if_not(var_1_79 <= 2147483647);
	var_1_82 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_82 >= 0.0F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 9223372.036854765600e+12F && var_1_82 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 65535);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 127);
	assume_abort_if_not(var_1_85 <= 254);
	var_1_87 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 63);
	var_1_88 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 4294967295);
	var_1_90 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_90 >= -2147483648);
	assume_abort_if_not(var_1_90 <= 2147483647);
	var_1_94 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_94 >= 0.0F && var_1_94 <= -1.0e-20F) || (var_1_94 <= 4611686.018427387900e+12F && var_1_94 >= 1.0e-20F ));
	var_1_95 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_95 >= 0.0F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 4611686.018427387900e+12F && var_1_95 >= 1.0e-20F ));
	var_1_98 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_98 >= 0);
	assume_abort_if_not(var_1_98 <= 1);
	var_1_100 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_100 >= -1073741823);
	assume_abort_if_not(var_1_100 <= 1073741823);
	var_1_102 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_102 >= -922337.2036854776000e+13F && var_1_102 <= -1.0e-20F) || (var_1_102 <= 9223372.036854776000e+12F && var_1_102 >= 1.0e-20F ));
	assume_abort_if_not(var_1_102 != 0.0F);
	var_1_105 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_105 >= 63);
	assume_abort_if_not(var_1_105 <= 127);
	var_1_106 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 254);
	var_1_108 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_108 >= 0);
	assume_abort_if_not(var_1_108 <= 32767);
	var_1_111 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_111 >= 1);
	assume_abort_if_not(var_1_111 <= 1);
	var_1_116 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_116 >= 0);
	assume_abort_if_not(var_1_116 <= 1);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
}

int property() {
	return ((((((var_1_18 > var_1_18) ? (var_1_1 == ((signed short int) ((min ((2 + var_1_4) , var_1_5)) - 2))) : (var_1_1 == ((signed short int) var_1_4))) && (last_1_var_1_9 ? ((var_1_5 == var_1_4) ? (var_1_6 == ((signed short int) (min ((abs (var_1_5)) , (var_1_4 - var_1_8))))) : (var_1_6 == ((signed short int) var_1_8))) : (var_1_6 == ((signed short int) var_1_4)))) && ((((var_1_8 % var_1_10) * (8 + var_1_14)) >= var_1_14) ? (var_1_9 == ((unsigned char) ((! var_1_11) || var_1_12))) : (var_1_9 == ((unsigned char) (! var_1_12))))) && ((((var_1_8 * var_1_1) + var_1_4) >= (min (var_1_14 , var_1_5))) ? (var_1_13 == ((unsigned char) var_1_12)) : 1)) && ((var_1_18 < (max (var_1_18 , (var_1_15 - var_1_16)))) ? (var_1_14 == ((unsigned long int) (var_1_17 - (var_1_8 + var_1_4)))) : 1)) && ((-32 >= (var_1_5 - var_1_8)) ? ((var_1_10 > var_1_6) ? (var_1_18 == ((float) ((var_1_19 - var_1_20) + (var_1_21 + var_1_22)))) : (var_1_18 == ((float) var_1_20))) : (var_1_18 == ((float) var_1_19)))
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
