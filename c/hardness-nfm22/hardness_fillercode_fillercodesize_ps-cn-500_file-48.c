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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch48PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 10;
unsigned char var_1_2 = 1;
double var_1_3 = 0.0;
double var_1_4 = 128.2;
double var_1_5 = 50.1;
double var_1_6 = 64.5;
unsigned short int var_1_7 = 1;
unsigned char var_1_8 = 5;
double var_1_9 = 15.35;
unsigned char var_1_10 = 10;
unsigned char var_1_11 = 2;
signed long int var_1_12 = 32;
signed long int var_1_13 = 256;
signed char var_1_14 = 1;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 0;
signed char var_1_17 = -64;
unsigned short int var_1_18 = 64;
unsigned short int var_1_20 = 8;
unsigned short int var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
float var_1_24 = 5.4;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 1;
float var_1_27 = 10000000.6;
unsigned char var_1_28 = 0;
double var_1_29 = 50.2;
double var_1_30 = 1000000000000000.5;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
signed char var_1_33 = -8;
signed char var_1_34 = -4;
signed long int var_1_35 = -4;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned long int var_1_39 = 1000;
float var_1_40 = 2.75;
float var_1_41 = 4.5;
unsigned long int var_1_42 = 3518907984;
unsigned char var_1_43 = 1;
float var_1_44 = 100000.6;
float var_1_45 = 63.5;
float var_1_46 = 1.15;
unsigned long int var_1_47 = 10;
float var_1_48 = 128.8;
float var_1_49 = 255.325;
unsigned char var_1_50 = 64;
unsigned char var_1_51 = 10;
unsigned char var_1_52 = 64;
unsigned short int var_1_53 = 256;
float var_1_54 = 16.2;
unsigned short int var_1_55 = 28698;
unsigned short int var_1_56 = 29118;
unsigned short int var_1_57 = 35038;
unsigned short int var_1_58 = 64025;
unsigned short int var_1_59 = 25;
unsigned short int var_1_60 = 256;
double var_1_61 = 63.6;
double var_1_62 = 100.25;
double var_1_63 = 64.375;
double var_1_64 = 31.375;
signed long int var_1_65 = -8;
signed short int var_1_66 = -2;
signed long int var_1_67 = 8;
signed long int var_1_68 = 4;
float var_1_69 = 256.5;
signed long int var_1_70 = 2;
signed long int var_1_71 = 16;
float var_1_72 = 128.25;
float var_1_73 = 4.125;
float var_1_74 = 99.65;
unsigned char var_1_75 = 32;
unsigned char var_1_76 = 100;
unsigned char var_1_77 = 100;
signed long int var_1_78 = -2;
unsigned char var_1_79 = 64;
double var_1_80 = 31.75;
signed long int var_1_81 = 0;
signed short int var_1_82 = -1;
double var_1_83 = 4.25;
unsigned short int var_1_84 = 2;
signed long int var_1_85 = -10;
unsigned short int var_1_86 = 5;
double var_1_87 = 100.25;
unsigned char var_1_88 = 2;
unsigned char var_1_89 = 128;
signed char var_1_90 = -2;
double var_1_91 = 128.5;
unsigned short int var_1_92 = 4;
unsigned char var_1_93 = 16;
unsigned char var_1_94 = 0;
unsigned short int var_1_95 = 10;
signed long int var_1_96 = -1;
double var_1_97 = 32.4;
double var_1_98 = 7.875;
double var_1_99 = 9.2;
unsigned long int var_1_100 = 64;
unsigned char var_1_101 = 64;
unsigned long int var_1_102 = 2424000567;
signed long int var_1_103 = 128;
signed long int var_1_104 = 16;
double var_1_105 = 7.5;
float var_1_106 = 127.5;
signed long int var_1_107 = 128;
signed long int var_1_108 = 64;
unsigned char var_1_109 = 0;
signed char var_1_110 = -4;
signed char var_1_111 = 100;
signed long int var_1_112 = -8;
unsigned long int var_1_113 = 128;
signed char var_1_114 = -32;
unsigned long int var_1_115 = 50;
signed char var_1_116 = 4;
float var_1_117 = 127.2;
unsigned long int var_1_118 = 1130023135;
unsigned long int var_1_119 = 1332629669;
unsigned long int var_1_120 = 1559146797;
unsigned short int var_1_121 = 16;
float var_1_122 = 127.5;
signed short int var_1_123 = 10;
float var_1_124 = 9.9;
unsigned short int var_1_125 = 64;
signed char var_1_126 = 2;
unsigned long int var_1_127 = 5;
unsigned short int var_1_128 = 0;
unsigned long int var_1_129 = 0;
signed char var_1_130 = 8;
unsigned long int var_1_131 = 0;
signed char var_1_132 = -32;
unsigned long int var_1_133 = 500;
unsigned short int var_1_134 = 0;
unsigned char var_1_135 = 4;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 5;
unsigned short int last_1_var_1_18 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_20 = var_1_21;


	// From: CodeObject2
	if (var_1_23 || (2.65f > var_1_24)) {
		var_1_22 = (! (! var_1_25));
	}


	// From: CodeObject3
	if (var_1_23) {
		var_1_26 = (! ((var_1_24 >= var_1_27) && var_1_28));
	}


	// From: CodeObject4
	var_1_29 = (abs (var_1_30));


	// From: CodeObject5
	if (var_1_23) {
		var_1_31 = (var_1_25 && (! var_1_28));
	}


	// From: CodeObject6
	if (var_1_22) {
		if ((min ((var_1_20 >> var_1_21) , (max (var_1_33 , var_1_34)))) >= var_1_35) {
			var_1_32 = (var_1_23 || ((var_1_20 <= var_1_21) || var_1_25));
		} else {
			var_1_32 = (var_1_28 || var_1_36);
		}
	} else {
		if (var_1_33 <= var_1_35) {
			if (var_1_36) {
				var_1_32 = (! (! var_1_28));
			} else {
				var_1_32 = (var_1_28 || (var_1_37 || var_1_38));
			}
		}
	}


	// From: CodeObject7
	if ((- (var_1_40 - var_1_41)) <= var_1_30) {
		var_1_39 = (var_1_42 - var_1_20);
	}


	// From: CodeObject8
	if (var_1_31) {
		var_1_43 = var_1_38;
	}


	// From: CodeObject9
	if ((- (10000 + 8)) > (abs (var_1_33))) {
		var_1_44 = (var_1_45 + var_1_46);
	}


	// From: CodeObject10
	if (var_1_27 < (var_1_41 - (abs (var_1_46)))) {
		var_1_47 = (abs (var_1_42));
	}


	// From: CodeObject11
	var_1_48 = ((max (var_1_46 , var_1_45)) + var_1_49);


	// From: CodeObject12
	var_1_50 = (max (var_1_51 , var_1_52));


	// From: CodeObject13
	if (var_1_48 >= (abs (var_1_24))) {
		if (var_1_24 >= var_1_54) {
			var_1_53 = (var_1_50 + (max ((var_1_55 - var_1_52) , (var_1_56 - var_1_51))));
		} else {
			var_1_53 = ((min (var_1_57 , var_1_58)) - (min ((max (var_1_52 , var_1_51)) , 5)));
		}
	} else {
		if (var_1_33 < var_1_34) {
			if (var_1_37) {
				if (var_1_59 != ((var_1_47 >> var_1_34) >> var_1_52)) {
					var_1_53 = (min ((min (var_1_58 , var_1_52)) , var_1_60));
				} else {
					var_1_53 = (var_1_57 - var_1_51);
				}
			} else {
				var_1_53 = (var_1_57 - (var_1_55 - var_1_52));
			}
		}
	}


	// From: CodeObject14
	if (var_1_38) {
		if ((var_1_52 - var_1_50) < var_1_53) {
			var_1_61 = (var_1_49 + ((max (32.2 , var_1_62)) + var_1_63));
		} else {
			if (var_1_31) {
				var_1_61 = (min (var_1_30 , (min ((var_1_46 + var_1_45) , var_1_49))));
			} else {
				var_1_61 = ((min (var_1_64 , 0.75)) + (abs (var_1_46)));
			}
		}
	} else {
		var_1_61 = var_1_64;
	}


	// From: CodeObject15
	if (var_1_22 || ((min (var_1_51 , var_1_53)) <= var_1_55)) {
		if (var_1_36) {
			if (var_1_30 >= var_1_45) {
				if (var_1_32 && var_1_31) {
					var_1_65 = (abs (var_1_58));
				}
			} else {
				if (((abs (var_1_33)) % (max (var_1_55 , var_1_56))) > (min (var_1_21 , 128))) {
					var_1_65 = var_1_53;
				}
			}
		}
	} else {
		if (var_1_38) {
			if (var_1_43) {
				var_1_65 = var_1_21;
			}
		} else {
			var_1_65 = var_1_59;
		}
	}


	// From: CodeObject16
	if (1u < var_1_56) {
		var_1_66 = (abs (var_1_52));
	} else {
		if (var_1_21 >= var_1_52) {
			if (var_1_62 < (var_1_40 * (abs (255.75)))) {
				if ((~ var_1_65) <= var_1_53) {
					if (var_1_33 != var_1_42) {
						var_1_66 = (var_1_50 - var_1_52);
					}
				} else {
					var_1_66 = (min ((abs (var_1_34)) , (abs (var_1_51))));
				}
			} else {
				var_1_66 = (var_1_50 - (26127 - (2 + var_1_51)));
			}
		} else {
			if (var_1_65 <= ((var_1_57 % var_1_56) >> (min (var_1_67 , var_1_68)))) {
				var_1_66 = (var_1_50 - var_1_51);
			}
		}
	}


	// From: CodeObject17
	if ((abs (var_1_67)) >= ((var_1_70 | var_1_71) * var_1_51)) {
		if (var_1_56 > var_1_50) {
			var_1_69 = (min (var_1_30 , ((max (var_1_64 , var_1_62)) + (var_1_63 + var_1_72))));
		} else {
			if (var_1_56 > (var_1_60 / (abs (var_1_55)))) {
				var_1_69 = ((min ((var_1_73 - var_1_74) , var_1_64)) + var_1_46);
			} else {
				var_1_69 = (var_1_74 - (abs (var_1_49)));
			}
		}
	}


	// From: CodeObject18
	if (var_1_54 <= (abs (var_1_74))) {
		var_1_75 = (abs (var_1_52));
	} else {
		if (var_1_46 >= (abs (var_1_74))) {
			var_1_75 = (((var_1_76 - var_1_67) + var_1_77) - var_1_68);
		}
	}


	// From: CodeObject19
	if ((max ((max (var_1_74 , var_1_24)) , var_1_48)) < (var_1_64 + (8.5f - var_1_73))) {
		var_1_78 = (max (((min (var_1_59 , var_1_21)) - 10) , var_1_57));
	} else {
		var_1_78 = (max (var_1_68 , var_1_58));
	}


	// From: CodeObject20
	if (256 > var_1_75) {
		var_1_79 = (max (var_1_51 , var_1_76));
	}


	// From: CodeObject21
	if ((min (var_1_34 , var_1_79)) >= var_1_81) {
		var_1_80 = var_1_45;
	}


	// From: CodeObject22
	if (var_1_22) {
		var_1_82 = var_1_52;
	} else {
		var_1_82 = var_1_52;
	}


	// From: CodeObject23
	if (var_1_36) {
		var_1_83 = 500.25;
	} else {
		var_1_83 = var_1_30;
	}


	// From: CodeObject24
	if (var_1_38) {
		var_1_84 = var_1_51;
	} else {
		var_1_84 = 0;
	}


	// From: CodeObject25
	var_1_85 = 16;


	// From: CodeObject26
	if (var_1_37) {
		var_1_86 = var_1_76;
	} else {
		var_1_86 = 25;
	}


	// From: CodeObject27
	if ((16 << var_1_33) != -64) {
		var_1_87 = 128.4;
	}


	// From: CodeObject28
	if (var_1_55 >= var_1_70) {
		if (((var_1_39 * 4) + var_1_56) <= var_1_55) {
			var_1_88 = (abs (var_1_67));
		}
	} else {
		var_1_88 = (min ((min ((var_1_89 - var_1_67) , var_1_68)) , var_1_77));
	}


	// From: CodeObject29
	if ((max ((var_1_91 * var_1_29) , 1.00000000000008E13)) == 99.4) {
		if (var_1_50 < 16) {
			var_1_90 = (max (var_1_67 , var_1_68));
		}
	}


	// From: CodeObject30
	if (var_1_32) {
		if (var_1_31) {
			var_1_92 = (abs (abs (abs (var_1_58))));
		} else {
			var_1_92 = (var_1_52 + var_1_50);
		}
	}


	// From: CodeObject31
	var_1_93 = (((abs (var_1_67)) + var_1_68) + (max (var_1_77 , var_1_76)));


	// From: CodeObject32
	if (var_1_78 > var_1_39) {
		if (var_1_73 <= var_1_24) {
			var_1_94 = (! var_1_28);
		}
	}


	// From: CodeObject33
	var_1_95 = (min (var_1_77 , 0));


	// From: CodeObject34
	if (var_1_52 >= var_1_95) {
		var_1_96 = (max (-8 , var_1_76));
	} else {
		if (var_1_95 != (- var_1_35)) {
			var_1_96 = (abs (abs (var_1_95)));
		}
	}


	// From: CodeObject35
	if (var_1_93 > var_1_65) {
		if (var_1_31) {
			if (var_1_52 == ((var_1_82 / var_1_89) + (var_1_56 + 16))) {
				var_1_97 = (var_1_63 + (abs (abs (var_1_45))));
			}
		} else {
			var_1_97 = (max (var_1_46 , 1000000.48));
		}
	}


	// From: CodeObject36
	if (var_1_33 < var_1_71) {
		var_1_98 = (max ((var_1_74 - var_1_99) , (min (var_1_64 , (abs (var_1_73))))));
	}


	// From: CodeObject37
	if (! (var_1_50 >= var_1_101)) {
		var_1_100 = (abs (abs (var_1_79)));
	} else {
		var_1_100 = (max ((min (var_1_42 , var_1_89)) , (var_1_102 - var_1_79)));
	}


	// From: CodeObject38
	if (! (50u < var_1_81)) {
		if ((abs (var_1_97)) <= var_1_69) {
			var_1_103 = (var_1_59 - var_1_21);
		} else {
			var_1_103 = (min ((16 - var_1_79) , var_1_82));
		}
	}


	// From: CodeObject39
	if ((max (var_1_79 , (abs (var_1_56)))) <= var_1_100) {
		var_1_104 = (abs (var_1_93));
	} else {
		var_1_104 = (abs (var_1_90));
	}


	// From: CodeObject40
	if (var_1_67 >= var_1_100) {
		var_1_105 = (abs (var_1_99));
	}


	// From: CodeObject41
	if ((abs (-8)) > (var_1_104 * (-32 ^ var_1_59))) {
		if ((var_1_70 | (var_1_89 - var_1_67)) > (var_1_57 / (abs (var_1_58)))) {
			var_1_106 = ((var_1_74 - 3.5f) + (abs (min (1.6f , var_1_45))));
		}
	}


	// From: CodeObject42
	if (var_1_97 < var_1_99) {
		if (var_1_38) {
			var_1_107 = (var_1_59 + (min (4 , var_1_51)));
		}
	}


	// From: CodeObject43
	if (var_1_81 < var_1_103) {
		var_1_108 = (min ((var_1_89 - var_1_57) , var_1_92));
	}


	// From: CodeObject44
	if (((var_1_103 & var_1_101) & var_1_92) <= var_1_53) {
		var_1_109 = (var_1_38 && var_1_28);
	}


	// From: CodeObject45
	if (var_1_53 < (var_1_86 % var_1_77)) {
		if ((max (var_1_87 , (abs (var_1_49)))) <= var_1_74) {
			var_1_110 = (abs (var_1_68));
		} else {
			if (var_1_25 && var_1_94) {
				if (var_1_74 > var_1_105) {
					var_1_110 = (abs (var_1_67));
				} else {
					if (var_1_66 <= var_1_34) {
						var_1_110 = -50;
					} else {
						var_1_110 = (min (var_1_68 , var_1_67));
					}
				}
			} else {
				if (var_1_86 > 50) {
					if ((var_1_111 + var_1_81) <= (abs (max (var_1_112 , var_1_82)))) {
						var_1_110 = (abs (var_1_67));
					}
				}
			}
		}
	} else {
		var_1_110 = (var_1_68 + var_1_67);
	}


	// From: CodeObject46
	if (var_1_101 < (var_1_71 + 5)) {
		var_1_113 = (var_1_92 + var_1_67);
	} else {
		var_1_113 = var_1_42;
	}


	// From: CodeObject47
	if (var_1_115 <= (abs (var_1_101))) {
		var_1_114 = (abs (-4));
	}


	// From: CodeObject48
	var_1_116 = (abs (var_1_68));


	// From: CodeObject49
	if (((var_1_118 + var_1_119) - (var_1_120 - var_1_77)) <= (var_1_47 >> (abs (var_1_67)))) {
		if (var_1_20 > (~ (var_1_71 + var_1_121))) {
			var_1_117 = (abs (var_1_72));
		}
	}


	// From: CodeObject50
	if (((var_1_59 & var_1_20) | var_1_50) < var_1_95) {
		if ((var_1_58 | var_1_75) <= ((var_1_104 * 2) & (var_1_77 * var_1_93))) {
			var_1_122 = (abs (max (var_1_64 , var_1_99)));
		} else {
			var_1_122 = (max (var_1_30 , 8.5f));
		}
	}


	// From: CodeObject51
	if (var_1_69 > (var_1_98 * (abs (var_1_124)))) {
		var_1_123 = var_1_88;
	}


	// From: CodeObject52
	if (var_1_31) {
		var_1_125 = (min ((abs (var_1_88)) , var_1_50));
	} else {
		var_1_125 = ((max (58987 , var_1_58)) - (var_1_55 - var_1_89));
	}


	// From: CodeObject53
	if (5 < var_1_112) {
		var_1_126 = (max ((abs (var_1_68)) , var_1_67));
	}


	// From: CodeObject54
	if (var_1_23) {
		var_1_127 = (max ((min (var_1_55 , (max (var_1_93 , var_1_118)))) , var_1_102));
	}


	// From: CodeObject55
	if (var_1_43) {
		var_1_128 = var_1_67;
	} else {
		var_1_128 = var_1_55;
	}


	// From: CodeObject56
	if (var_1_22) {
		var_1_129 = var_1_128;
	}


	// From: CodeObject57
	if (var_1_31) {
		var_1_130 = 4;
	}


	// From: CodeObject58
	if (var_1_31) {
		var_1_131 = var_1_59;
	} else {
		var_1_131 = var_1_76;
	}


	// From: CodeObject59
	if (var_1_32) {
		var_1_132 = var_1_67;
	}


	// From: CodeObject60
	if (var_1_94) {
		var_1_133 = var_1_89;
	} else {
		var_1_133 = var_1_20;
	}


	// From: CodeObject61
	if (var_1_36) {
		var_1_134 = var_1_21;
	}


	// From: CodeObject62
	if (((abs (var_1_76)) >> var_1_121) > (var_1_53 * 4)) {
		if (var_1_128 >= (var_1_131 & (max (var_1_120 , var_1_50)))) {
			if (var_1_36) {
				var_1_135 = var_1_51;
			} else {
				var_1_135 = var_1_67;
			}
		} else {
			var_1_135 = var_1_52;
		}
	}


	// From: Req1Batch48PS_CN_500
	if (var_1_2) {
		if (((var_1_3 - var_1_4) - var_1_5) == (15.75 - var_1_6)) {
			var_1_1 = (5 + last_1_var_1_8);
		} else {
			var_1_1 = last_1_var_1_8;
		}
	} else {
		var_1_1 = 1;
	}


	// From: Req2Batch48PS_CN_500
	unsigned short int stepLocal_0 = var_1_1;
	if (var_1_6 > (var_1_5 / (max (var_1_3 , var_1_9)))) {
		var_1_8 = (abs (var_1_10));
	} else {
		if (stepLocal_0 <= var_1_7) {
			var_1_8 = var_1_10;
		} else {
			var_1_8 = var_1_11;
		}
	}


	// From: Req3Batch48PS_CN_500
	if (var_1_2) {
		if (-128 > var_1_10) {
			if (var_1_3 >= (2.75 / var_1_9)) {
				var_1_12 = (var_1_11 + (last_1_var_1_18 + var_1_10));
			} else {
				var_1_12 = last_1_var_1_18;
			}
		}
	} else {
		var_1_12 = last_1_var_1_18;
	}


	// From: Req5Batch48PS_CN_500
	signed long int stepLocal_1 = max ((var_1_15 - var_1_16) , var_1_12);
	if (var_1_10 == stepLocal_1) {
		var_1_14 = (abs (var_1_17));
	} else {
		var_1_14 = var_1_17;
	}


	// From: Req4Batch48PS_CN_500
	if (var_1_2) {
		var_1_13 = var_1_11;
	}


	// From: Req6Batch48PS_CN_500
	if (var_1_8 == var_1_13) {
		var_1_18 = (var_1_10 + (min (var_1_14 , var_1_16)));
	} else {
		if (last_1_var_1_18 != var_1_16) {
			if (-256 >= var_1_13) {
				var_1_18 = var_1_16;
			} else {
				var_1_18 = var_1_15;
			}
		} else {
			var_1_18 = var_1_10;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 4611686.018427387900e+12F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427387900e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	assume_abort_if_not(var_1_9 != 0.0F);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 255);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -126);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -128);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -128);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483648);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 2147483647);
	assume_abort_if_not(var_1_42 <= 4294967294);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -461168.6018427382800e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -461168.6018427382800e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -461168.6018427382800e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 254);
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -922337.2036854776000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 16383);
	assume_abort_if_not(var_1_55 <= 32767);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 16383);
	assume_abort_if_not(var_1_56 <= 32767);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 32767);
	assume_abort_if_not(var_1_57 <= 65534);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 32767);
	assume_abort_if_not(var_1_58 <= 65534);
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 65535);
	var_1_60 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 65534);
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= -230584.3009213691390e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 2305843.009213691390e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= -230584.3009213691390e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 2305843.009213691390e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= -461168.6018427382800e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427382800e+12F && var_1_64 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 32);
	var_1_68 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 32);
	var_1_70 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_70 >= -2147483648);
	assume_abort_if_not(var_1_70 <= 2147483647);
	var_1_71 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_71 >= -2147483648);
	assume_abort_if_not(var_1_71 <= 2147483647);
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= -230584.3009213691390e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691390e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427382800e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427382800e+12F && var_1_74 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 95);
	assume_abort_if_not(var_1_76 <= 127);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 64);
	assume_abort_if_not(var_1_77 <= 127);
	var_1_81 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_81 >= -2147483648);
	assume_abort_if_not(var_1_81 <= 2147483647);
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 127);
	assume_abort_if_not(var_1_89 <= 254);
	var_1_91 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_91 >= -922337.2036854776000e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 9223372.036854776000e+12F && var_1_91 >= 1.0e-20F ));
	var_1_99 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_99 >= 0.0F && var_1_99 <= -1.0e-20F) || (var_1_99 <= 9223372.036854765600e+12F && var_1_99 >= 1.0e-20F ));
	var_1_101 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_101 >= 0);
	assume_abort_if_not(var_1_101 <= 255);
	var_1_102 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_102 >= 2147483647);
	assume_abort_if_not(var_1_102 <= 4294967294);
	var_1_111 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_111 >= -128);
	assume_abort_if_not(var_1_111 <= 127);
	var_1_112 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_112 >= -2147483647);
	assume_abort_if_not(var_1_112 <= 2147483647);
	var_1_115 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_115 >= 0);
	assume_abort_if_not(var_1_115 <= 4294967295);
	var_1_118 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_118 >= 1073741823);
	assume_abort_if_not(var_1_118 <= 2147483648);
	var_1_119 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_119 >= 1073741824);
	assume_abort_if_not(var_1_119 <= 2147483647);
	var_1_120 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_120 >= 1073741823);
	assume_abort_if_not(var_1_120 <= 2147483647);
	var_1_121 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_121 >= 0);
	assume_abort_if_not(var_1_121 <= 65535);
	var_1_124 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_124 >= -922337.2036854776000e+13F && var_1_124 <= -1.0e-20F) || (var_1_124 <= 9223372.036854776000e+12F && var_1_124 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_18 = var_1_18;
}

int property() {
	return (((((var_1_2 ? ((((var_1_3 - var_1_4) - var_1_5) == (15.75 - var_1_6)) ? (var_1_1 == ((unsigned short int) (5 + last_1_var_1_8))) : (var_1_1 == ((unsigned short int) last_1_var_1_8))) : (var_1_1 == ((unsigned short int) 1))) && ((var_1_6 > (var_1_5 / (max (var_1_3 , var_1_9)))) ? (var_1_8 == ((unsigned char) (abs (var_1_10)))) : ((var_1_1 <= var_1_7) ? (var_1_8 == ((unsigned char) var_1_10)) : (var_1_8 == ((unsigned char) var_1_11))))) && (var_1_2 ? ((-128 > var_1_10) ? ((var_1_3 >= (2.75 / var_1_9)) ? (var_1_12 == ((signed long int) (var_1_11 + (last_1_var_1_18 + var_1_10)))) : (var_1_12 == ((signed long int) last_1_var_1_18))) : 1) : (var_1_12 == ((signed long int) last_1_var_1_18)))) && (var_1_2 ? (var_1_13 == ((signed long int) var_1_11)) : 1)) && ((var_1_10 == (max ((var_1_15 - var_1_16) , var_1_12))) ? (var_1_14 == ((signed char) (abs (var_1_17)))) : (var_1_14 == ((signed char) var_1_17)))) && ((var_1_8 == var_1_13) ? (var_1_18 == ((unsigned short int) (var_1_10 + (min (var_1_14 , var_1_16))))) : ((last_1_var_1_18 != var_1_16) ? ((-256 >= var_1_13) ? (var_1_18 == ((unsigned short int) var_1_16)) : (var_1_18 == ((unsigned short int) var_1_15))) : (var_1_18 == ((unsigned short int) var_1_10))))
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
