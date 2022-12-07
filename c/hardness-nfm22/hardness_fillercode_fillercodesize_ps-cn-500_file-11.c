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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch11PS_CN_500.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
signed char var_1_4 = 5;
signed char var_1_7 = 0;
signed char var_1_8 = 16;
signed char var_1_9 = 4;
unsigned long int var_1_10 = 128;
unsigned long int var_1_11 = 1422462314;
signed short int var_1_12 = 8;
signed short int var_1_15 = -50;
unsigned long int var_1_16 = 1;
unsigned long int var_1_17 = 3609236770;
unsigned long int var_1_18 = 2902762324;
double var_1_19 = 3.8;
double var_1_20 = 255.75;
unsigned short int var_1_21 = 0;
signed char var_1_22 = -8;
signed long int var_1_23 = -32;
signed char var_1_24 = -128;
unsigned short int var_1_25 = 1000;
signed long int var_1_26 = -500;
unsigned short int var_1_27 = 60741;
unsigned short int var_1_28 = 4;
unsigned short int var_1_29 = 128;
float var_1_30 = 49.5;
float var_1_31 = 0.4;
float var_1_32 = 0.4;
unsigned char var_1_33 = 1;
unsigned short int var_1_34 = 2;
unsigned char var_1_35 = 1;
float var_1_36 = 5.1;
float var_1_37 = 63.5;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
double var_1_40 = 25.25;
double var_1_41 = 255.4;
double var_1_42 = 256.4;
signed long int var_1_43 = 10;
unsigned long int var_1_44 = 25;
signed long int var_1_45 = -8;
signed long int var_1_46 = 10;
unsigned char var_1_47 = 4;
unsigned char var_1_48 = 128;
unsigned char var_1_49 = 16;
unsigned char var_1_50 = 1;
signed char var_1_51 = 0;
signed char var_1_52 = -8;
unsigned long int var_1_53 = 8;
signed char var_1_54 = 8;
unsigned long int var_1_55 = 3726486877;
signed long int var_1_56 = -10;
unsigned long int var_1_57 = 1000000000;
unsigned long int var_1_58 = 50;
unsigned char var_1_59 = 1;
double var_1_60 = 2.5;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
float var_1_64 = -0.5;
unsigned char var_1_65 = 1;
signed long int var_1_66 = -25;
unsigned long int var_1_67 = 10;
double var_1_68 = 4.6;
double var_1_69 = 127.6;
double var_1_70 = 100000000000.6;
double var_1_71 = 3.8;
double var_1_72 = 128.6;
double var_1_73 = 8.75;
double var_1_74 = 4.4;
unsigned char var_1_75 = 2;
unsigned short int var_1_76 = 128;
unsigned short int var_1_77 = 41484;
unsigned short int var_1_78 = 16;
unsigned short int var_1_79 = 10;
float var_1_80 = 127.4;
signed long int var_1_81 = 1;
double var_1_82 = 10.6;
unsigned char var_1_83 = 1;
unsigned char var_1_84 = 0;
unsigned char var_1_85 = 1;
signed char var_1_86 = 1;
float var_1_87 = 8.125;
unsigned char var_1_88 = 0;
signed short int var_1_89 = -2;
unsigned char var_1_90 = 64;
unsigned char var_1_91 = 4;
unsigned short int var_1_92 = 10;
unsigned char var_1_93 = 128;
signed char var_1_94 = -5;
signed char var_1_95 = 1;
signed char var_1_96 = -2;
signed char var_1_97 = 32;
signed char var_1_98 = 25;
signed char var_1_99 = 4;
signed char var_1_100 = 2;
signed char var_1_101 = 10;
signed char var_1_102 = -10;
unsigned long int var_1_103 = 100;
unsigned long int var_1_104 = 8;
unsigned long int var_1_105 = 128;
unsigned char var_1_106 = 1;
unsigned char var_1_107 = 5;
unsigned char var_1_108 = 1;
signed short int var_1_109 = 5;
signed char var_1_110 = -16;
signed long int var_1_111 = -1;
signed long int var_1_112 = -1000;
signed long int var_1_113 = -256;
double var_1_114 = 1.75;
unsigned long int var_1_115 = 1;
double var_1_116 = 100000000.6;
signed short int var_1_117 = 64;
signed short int var_1_118 = -256;
double var_1_119 = 7.158;
unsigned char var_1_120 = 1;
unsigned char var_1_121 = 0;
signed char var_1_122 = -16;
signed short int var_1_123 = -8;
double var_1_124 = 255.5;
signed long int var_1_125 = -10;
signed char var_1_126 = 50;
unsigned short int var_1_127 = 2;
unsigned long int var_1_128 = 256;
double var_1_129 = 99999999999999.5;
signed long int var_1_130 = -5;
signed char var_1_131 = 100;
unsigned char var_1_132 = 0;
signed char var_1_133 = 5;
unsigned long int var_1_134 = 10;
float var_1_135 = 127.701;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_10 = 128;
unsigned long int last_1_var_1_16 = 1;
double last_1_var_1_19 = 3.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_22 = (abs (-25));


	// From: CodeObject2
	if (var_1_22 > var_1_24) {
		if ((~ var_1_22) <= 128) {
			var_1_23 = (abs (abs (4 + var_1_22)));
		} else {
			var_1_23 = (abs (min (var_1_22 , var_1_24)));
		}
	}


	// From: CodeObject3
	if (var_1_23 == (var_1_24 % (abs (var_1_26)))) {
		var_1_25 = (abs (var_1_27 - (max (var_1_28 , var_1_29))));
	} else {
		if ((var_1_30 + var_1_31) != var_1_32) {
			var_1_25 = (var_1_27 - var_1_29);
		} else {
			if (! var_1_33) {
				var_1_25 = (min (var_1_27 , (max (var_1_29 , (var_1_28 + var_1_34)))));
			}
		}
	}


	// From: CodeObject4
	if ((var_1_28 % -10) >= var_1_26) {
		if (255.5f == var_1_32) {
			if ((max (var_1_32 , (max (var_1_30 , var_1_31)))) < (var_1_36 / var_1_37)) {
				var_1_35 = var_1_38;
			}
		} else {
			var_1_35 = ((var_1_26 <= var_1_24) && var_1_39);
		}
	} else {
		if (var_1_38 && ((var_1_30 + var_1_32) > (abs (var_1_37)))) {
			var_1_35 = (! var_1_38);
		}
	}


	// From: CodeObject5
	if (var_1_38) {
		if (5 < (var_1_24 ^ var_1_29)) {
			if (! (1000 > (var_1_34 & var_1_29))) {
				var_1_40 = (abs (max ((abs (var_1_41)) , var_1_42)));
			} else {
				if (var_1_37 > (max (var_1_30 , (abs (var_1_32))))) {
					if (var_1_43 >= ((max (var_1_29 , var_1_24)) >> var_1_25)) {
						var_1_40 = (max (var_1_41 , var_1_42));
					} else {
						var_1_40 = (max (var_1_42 , var_1_41));
					}
				}
			}
		} else {
			var_1_40 = (min (32.9 , 128.375));
		}
	}


	// From: CodeObject6
	if (var_1_45 < (max (var_1_46 , (var_1_24 >> var_1_25)))) {
		var_1_44 = (max ((max (var_1_28 , var_1_34)) , var_1_27));
	} else {
		var_1_44 = (abs (var_1_27));
	}


	// From: CodeObject7
	if (var_1_39) {
		var_1_47 = ((max ((abs (var_1_48)) , 128)) - var_1_49);
	} else {
		if (var_1_30 < var_1_32) {
			var_1_47 = (abs (abs (var_1_48)));
		} else {
			var_1_47 = (min (var_1_48 , var_1_49));
		}
	}


	// From: CodeObject8
	if (var_1_35) {
		var_1_50 = var_1_39;
	}


	// From: CodeObject9
	if ((- var_1_29) == (var_1_25 + var_1_24)) {
		var_1_51 = var_1_52;
	} else {
		if (var_1_31 < var_1_40) {
			var_1_51 = var_1_52;
		}
	}


	// From: CodeObject10
	if (! (var_1_42 >= var_1_30)) {
		if (var_1_52 > (var_1_49 - var_1_54)) {
			var_1_53 = (var_1_55 - (max (var_1_48 , var_1_49)));
		}
	}


	// From: CodeObject11
	if (! var_1_38) {
		var_1_56 = (abs (var_1_24));
	} else {
		if (var_1_22 == var_1_23) {
			if (var_1_52 > var_1_47) {
				var_1_56 = (abs (abs (abs (var_1_22))));
			}
		}
	}


	// From: CodeObject12
	var_1_57 = ((min (var_1_34 , var_1_58)) + var_1_49);


	// From: CodeObject13
	if ((min (32 , var_1_34)) > (var_1_24 & (var_1_43 + var_1_29))) {
		if (var_1_41 == (min (var_1_30 , (abs (var_1_60))))) {
			var_1_59 = (var_1_39 && ((var_1_61 || var_1_62) || (var_1_33 && var_1_63)));
		}
	}


	// From: CodeObject14
	if (var_1_33) {
		if ((var_1_54 ^ 4) >= var_1_23) {
			var_1_64 = var_1_42;
		}
	}


	// From: CodeObject15
	if (var_1_31 < var_1_36) {
		var_1_65 = ((var_1_61 && var_1_62) || var_1_39);
	}


	// From: CodeObject16
	if ((var_1_48 - (abs (64))) > var_1_26) {
		if (var_1_63 || ((var_1_58 << 1) >= (var_1_47 / var_1_48))) {
			var_1_66 = (var_1_25 - var_1_34);
		}
	}


	// From: CodeObject17
	if (var_1_56 <= (~ (var_1_53 / 25))) {
		if (var_1_55 <= 64u) {
			var_1_67 = (abs (var_1_29));
		} else {
			if (var_1_63 || var_1_59) {
				var_1_67 = (10u + (abs (abs (var_1_58))));
			} else {
				var_1_67 = (min ((3284477244u - (var_1_28 + var_1_27)) , var_1_58));
			}
		}
	}


	// From: CodeObject18
	if (var_1_41 < (var_1_30 * var_1_40)) {
		if (var_1_62) {
			var_1_68 = ((min (var_1_69 , (min (var_1_70 , var_1_71)))) - var_1_72);
		} else {
			var_1_68 = (min ((var_1_73 + (var_1_74 - 256.75)) , var_1_41));
		}
	}


	// From: CodeObject19
	if (var_1_25 != var_1_67) {
		if (var_1_28 >= (var_1_76 + var_1_57)) {
			var_1_75 = (var_1_48 - var_1_54);
		}
	} else {
		if (((min (var_1_27 , var_1_77)) - var_1_48) <= var_1_43) {
			var_1_75 = (min ((abs (5)) , var_1_49));
		} else {
			var_1_75 = (abs (var_1_54));
		}
	}


	// From: CodeObject20
	if (! var_1_33) {
		if (var_1_68 >= var_1_31) {
			if (var_1_66 < var_1_75) {
				var_1_78 = (min (var_1_34 , var_1_28));
			} else {
				if ((var_1_26 ^ var_1_57) > (var_1_34 & (min (var_1_23 , var_1_45)))) {
					if (var_1_34 <= var_1_58) {
						var_1_78 = (max ((min ((var_1_27 - var_1_49) , (min (var_1_79 , 32)))) , (min (var_1_75 , var_1_34))));
					}
				} else {
					var_1_78 = (abs (var_1_54));
				}
			}
		}
	} else {
		if (var_1_75 < var_1_25) {
			var_1_78 = ((abs (abs (var_1_34))) + (var_1_48 + var_1_54));
		}
	}


	// From: CodeObject21
	if (var_1_59 && var_1_63) {
		var_1_80 = (abs (var_1_72));
	}


	// From: CodeObject22
	if (var_1_41 == (min (var_1_37 , var_1_42))) {
		if (var_1_82 >= var_1_73) {
			var_1_81 = (abs (var_1_52));
		}
	}


	// From: CodeObject23
	if (var_1_65) {
		if (var_1_52 > var_1_56) {
			var_1_83 = (! ((var_1_38 && var_1_84) && var_1_85));
		} else {
			var_1_83 = (var_1_38 && var_1_84);
		}
	} else {
		if ((~ var_1_57) != var_1_67) {
			var_1_83 = (var_1_84 && (var_1_61 || var_1_39));
		}
	}


	// From: CodeObject24
	if (var_1_88) {
		if (var_1_47 > var_1_26) {
			if (((- var_1_68) > (- var_1_32)) && ((var_1_34 + var_1_75) > var_1_28)) {
				var_1_87 = (min (var_1_69 , (min (var_1_73 , var_1_74))));
			} else {
				var_1_87 = ((abs (max (var_1_72 , var_1_69))) - var_1_71);
			}
		} else {
			if (var_1_80 >= var_1_70) {
				var_1_87 = (min (var_1_74 , var_1_69));
			} else {
				if (((var_1_27 | -128) ^ var_1_57) >= var_1_47) {
					var_1_87 = (min (var_1_70 , (31.3f + var_1_73)));
				}
			}
		}
	} else {
		if (var_1_53 >= var_1_27) {
			var_1_87 = var_1_69;
		} else {
			if (var_1_27 < (var_1_57 + var_1_45)) {
				var_1_87 = (max ((abs (var_1_74 + var_1_73)) , var_1_42));
			} else {
				var_1_87 = (var_1_74 - var_1_72);
			}
		}
	}


	// From: CodeObject25
	if (var_1_76 < var_1_81) {
		var_1_89 = (min ((var_1_75 + var_1_86) , (var_1_54 - var_1_49)));
	} else {
		var_1_89 = (abs (var_1_54));
	}


	// From: CodeObject26
	if (var_1_62) {
		if (var_1_46 <= (var_1_28 + var_1_56)) {
			var_1_90 = (max (var_1_54 , var_1_49));
		}
	} else {
		var_1_90 = (min ((var_1_54 + var_1_49) , (max (var_1_48 , var_1_91))));
	}


	// From: CodeObject27
	if (var_1_84) {
		if (var_1_71 != (var_1_36 + (abs (var_1_80)))) {
			var_1_92 = (abs (var_1_49));
		}
	}


	// From: CodeObject28
	if (var_1_76 == ((var_1_29 % var_1_48) << var_1_56)) {
		var_1_93 = (var_1_48 - var_1_49);
	} else {
		if (var_1_66 <= (var_1_34 * (min (var_1_46 , var_1_51)))) {
			if (var_1_76 <= (abs (var_1_46))) {
				var_1_93 = (min ((min (var_1_48 , var_1_91)) , (abs (var_1_49))));
			}
		}
	}


	// From: CodeObject29
	if ((min (var_1_49 , var_1_78)) < (var_1_46 % -10)) {
		if (var_1_73 >= var_1_71) {
			if (var_1_31 <= var_1_32) {
				if (var_1_83) {
					if (var_1_65) {
						var_1_94 = (max (var_1_52 , var_1_95));
					} else {
						var_1_94 = (abs (var_1_96));
					}
				}
			} else {
				if ((var_1_60 / var_1_37) > var_1_32) {
					if ((abs (var_1_73)) <= var_1_37) {
						var_1_94 = (abs (var_1_96));
					} else {
						var_1_94 = (((var_1_97 - var_1_98) + (max (var_1_99 , var_1_100))) - var_1_101);
					}
				}
			}
		} else {
			if (var_1_86 >= var_1_89) {
				var_1_94 = (max ((min (var_1_95 , var_1_101)) , var_1_96));
			}
		}
	} else {
		if (var_1_84) {
			var_1_94 = (var_1_100 - (max (var_1_99 , var_1_97)));
		} else {
			var_1_94 = ((abs (var_1_98)) - 5);
		}
	}


	// From: CodeObject30
	if (var_1_61) {
		var_1_102 = (abs (abs (var_1_99)));
	}


	// From: CodeObject31
	var_1_103 = (min (((abs (var_1_55)) - (var_1_104 + var_1_28)) , (min (64u , var_1_90))));


	// From: CodeObject32
	if (var_1_48 > var_1_43) {
		var_1_105 = (var_1_92 + (min ((min (var_1_98 , var_1_27)) , var_1_34)));
	}


	// From: CodeObject33
	if ((abs (max (var_1_97 , 25))) > var_1_27) {
		var_1_106 = (! 1);
	} else {
		var_1_106 = (! var_1_62);
	}


	// From: CodeObject34
	if (var_1_61) {
		var_1_107 = (abs (var_1_101));
	}


	// From: CodeObject35
	if (var_1_100 > (abs (var_1_99))) {
		var_1_108 = (! var_1_85);
	} else {
		if (8 >= (~ (~ var_1_105))) {
			if ((var_1_69 * (min (var_1_36 , var_1_64))) < (max (var_1_32 , var_1_71))) {
				if (var_1_33) {
					var_1_108 = ((! var_1_38) || var_1_39);
				} else {
					var_1_108 = var_1_85;
				}
			}
		} else {
			var_1_108 = ((var_1_50 || var_1_85) && var_1_84);
		}
	}


	// From: CodeObject36
	if (! var_1_108) {
		if (var_1_36 > (var_1_60 + var_1_82)) {
			var_1_109 = var_1_93;
		}
	}


	// From: CodeObject37
	if ((abs (var_1_40)) <= var_1_70) {
		var_1_110 = (var_1_99 - 16);
	}


	// From: CodeObject38
	var_1_111 = (abs (max (var_1_112 , var_1_113)));


	// From: CodeObject39
	if ((abs (var_1_49)) > var_1_96) {
		if (var_1_83 || var_1_84) {
			var_1_114 = var_1_72;
		}
	}


	// From: CodeObject40
	var_1_115 = var_1_75;


	// From: CodeObject41
	var_1_116 = var_1_73;


	// From: CodeObject42
	if (var_1_61) {
		var_1_117 = 10;
	}


	// From: CodeObject43
	if (var_1_39) {
		var_1_118 = 1;
	} else {
		var_1_118 = 10;
	}


	// From: CodeObject44
	if (var_1_38) {
		var_1_119 = var_1_73;
	} else {
		var_1_119 = var_1_70;
	}


	// From: CodeObject45
	if (var_1_106) {
		var_1_120 = var_1_121;
	}


	// From: CodeObject46
	var_1_122 = var_1_95;


	// From: CodeObject47
	var_1_123 = var_1_97;


	// From: CodeObject48
	if (var_1_108) {
		var_1_124 = 2.75;
	} else {
		var_1_124 = var_1_69;
	}


	// From: CodeObject49
	var_1_125 = var_1_117;


	// From: CodeObject50
	if (var_1_85) {
		var_1_126 = 0;
	}


	// From: CodeObject51
	var_1_127 = var_1_98;


	// From: CodeObject52
	var_1_128 = var_1_55;


	// From: CodeObject53
	if (var_1_120) {
		var_1_129 = var_1_70;
	}


	// From: CodeObject54
	var_1_130 = var_1_25;


	// From: CodeObject55
	if (var_1_132) {
		var_1_131 = var_1_99;
	}


	// From: CodeObject56
	var_1_133 = var_1_95;


	// From: CodeObject57
	if ((1000000000u | var_1_55) < (var_1_105 * (max (var_1_46 , var_1_25)))) {
		var_1_134 = (var_1_55 - (abs (var_1_79)));
	} else {
		var_1_134 = var_1_76;
	}


	// From: CodeObject58
	var_1_135 = var_1_73;


	// From: Req4Batch11PS_CN_500
	unsigned long int stepLocal_1 = last_1_var_1_16;
	unsigned long int stepLocal_0 = last_1_var_1_16;
	if (stepLocal_1 != last_1_var_1_10) {
		if (var_1_8 <= stepLocal_0) {
			if ((- last_1_var_1_19) >= last_1_var_1_19) {
				var_1_12 = var_1_8;
			}
		}
	} else {
		var_1_12 = var_1_9;
	}


	// From: Req2Batch11PS_CN_500
	if (var_1_12 == var_1_12) {
		var_1_4 = ((8 + (max (var_1_7 , var_1_8))) - var_1_9);
	}


	// From: Req1Batch11PS_CN_500
	var_1_1 = (var_1_2 || (! var_1_3));


	// From: Req3Batch11PS_CN_500
	var_1_10 = (4027026809u - ((abs (var_1_11)) - var_1_7));


	// From: Req7Batch11PS_CN_500
	var_1_19 = (min ((abs (var_1_20)) , 1.4));


	// From: Req5Batch11PS_CN_500
	if (var_1_1) {
		if (var_1_19 >= var_1_19) {
			if (! var_1_3) {
				var_1_15 = var_1_8;
			}
		} else {
			var_1_15 = var_1_7;
		}
	} else {
		var_1_15 = 5;
	}


	// From: Req6Batch11PS_CN_500
	if (var_1_19 != var_1_19) {
		var_1_16 = ((min (var_1_11 , var_1_7)) + var_1_8);
	} else {
		if (var_1_4 > var_1_12) {
			var_1_16 = (var_1_17 - (var_1_11 - var_1_8));
		} else {
			var_1_16 = ((max (var_1_17 , var_1_18)) - var_1_9);
		}
	}


	// From: Req8Batch11PS_CN_500
	unsigned char stepLocal_2 = var_1_1;
	if ((var_1_16 == (var_1_8 - var_1_9)) && stepLocal_2) {
		var_1_21 = var_1_9;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 0);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 1073741823);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 2147483647);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854765600e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -128);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483647);
	assume_abort_if_not(var_1_26 <= 2147483647);
	assume_abort_if_not(var_1_26 != 0);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 32767);
	assume_abort_if_not(var_1_27 <= 65534);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 32767);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	assume_abort_if_not(var_1_37 != 0.0F);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854765600e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -2147483648);
	assume_abort_if_not(var_1_43 <= 2147483647);
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= -2147483648);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= -2147483648);
	assume_abort_if_not(var_1_46 <= 2147483647);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 127);
	assume_abort_if_not(var_1_48 <= 254);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 127);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -127);
	assume_abort_if_not(var_1_52 <= 126);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 2147483647);
	assume_abort_if_not(var_1_55 <= 4294967294);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 2147483647);
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= -922337.2036854776000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 0);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 0);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 0);
	var_1_69 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854765600e+12F && var_1_69 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854765600e+12F && var_1_70 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854765600e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854765600e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= -461168.6018427382800e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427382800e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427382800e+12F && var_1_74 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 65535);
	var_1_77 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_77 >= 32767);
	assume_abort_if_not(var_1_77 <= 65535);
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 65534);
	var_1_82 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_82 >= -922337.2036854776000e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 9223372.036854776000e+12F && var_1_82 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 1);
	assume_abort_if_not(var_1_84 <= 1);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 1);
	assume_abort_if_not(var_1_85 <= 1);
	var_1_86 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_86 >= -128);
	assume_abort_if_not(var_1_86 <= 127);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 1);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 254);
	var_1_95 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_95 >= -127);
	assume_abort_if_not(var_1_95 <= 126);
	var_1_96 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_96 >= -126);
	assume_abort_if_not(var_1_96 <= 126);
	var_1_97 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_97 >= 31);
	assume_abort_if_not(var_1_97 <= 63);
	var_1_98 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_98 >= 0);
	assume_abort_if_not(var_1_98 <= 31);
	var_1_99 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_99 >= 0);
	assume_abort_if_not(var_1_99 <= 63);
	var_1_100 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_100 >= 0);
	assume_abort_if_not(var_1_100 <= 63);
	var_1_101 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_101 >= 0);
	assume_abort_if_not(var_1_101 <= 126);
	var_1_104 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_104 >= 0);
	assume_abort_if_not(var_1_104 <= 1073741824);
	var_1_112 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_112 >= -2147483646);
	assume_abort_if_not(var_1_112 <= 2147483646);
	var_1_113 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_113 >= -2147483646);
	assume_abort_if_not(var_1_113 <= 2147483646);
	var_1_121 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_121 >= 0);
	assume_abort_if_not(var_1_121 <= 0);
	var_1_132 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_132 >= 0);
	assume_abort_if_not(var_1_132 <= 1);
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_19 = var_1_19;
}

int property() {
	return (((((((var_1_1 == ((unsigned char) (var_1_2 || (! var_1_3)))) && ((var_1_12 == var_1_12) ? (var_1_4 == ((signed char) ((8 + (max (var_1_7 , var_1_8))) - var_1_9))) : 1)) && (var_1_10 == ((unsigned long int) (4027026809u - ((abs (var_1_11)) - var_1_7))))) && ((last_1_var_1_16 != last_1_var_1_10) ? ((var_1_8 <= last_1_var_1_16) ? (((- last_1_var_1_19) >= last_1_var_1_19) ? (var_1_12 == ((signed short int) var_1_8)) : 1) : 1) : (var_1_12 == ((signed short int) var_1_9)))) && (var_1_1 ? ((var_1_19 >= var_1_19) ? ((! var_1_3) ? (var_1_15 == ((signed short int) var_1_8)) : 1) : (var_1_15 == ((signed short int) var_1_7))) : (var_1_15 == ((signed short int) 5)))) && ((var_1_19 != var_1_19) ? (var_1_16 == ((unsigned long int) ((min (var_1_11 , var_1_7)) + var_1_8))) : ((var_1_4 > var_1_12) ? (var_1_16 == ((unsigned long int) (var_1_17 - (var_1_11 - var_1_8)))) : (var_1_16 == ((unsigned long int) ((max (var_1_17 , var_1_18)) - var_1_9)))))) && (var_1_19 == ((double) (min ((abs (var_1_20)) , 1.4))))) && (((var_1_16 == (var_1_8 - var_1_9)) && var_1_1) ? (var_1_21 == ((unsigned short int) var_1_9)) : 1)
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
