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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch90PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -32;
signed long int var_1_3 = 10;
signed long int var_1_4 = 64;
unsigned short int var_1_11 = 64;
unsigned short int var_1_12 = 8;
unsigned short int var_1_13 = 5;
signed short int var_1_14 = 8;
unsigned short int var_1_15 = 62763;
unsigned long int var_1_16 = 25;
float var_1_18 = 63.25;
unsigned char var_1_20 = 0;
float var_1_21 = 7.8;
float var_1_22 = 32.1;
unsigned char var_1_23 = 0;
signed long int var_1_24 = -16;
signed short int var_1_26 = 16;
unsigned char var_1_27 = 1;
signed short int var_1_28 = -64;
signed short int var_1_29 = 1;
unsigned char var_1_30 = 0;
signed short int var_1_31 = -2;
unsigned char var_1_32 = 0;
unsigned long int var_1_33 = 1;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 64;
unsigned long int var_1_36 = 3274643142;
unsigned long int var_1_37 = 4;
unsigned long int var_1_38 = 0;
unsigned char var_1_39 = 10;
unsigned char var_1_40 = 200;
unsigned char var_1_41 = 32;
unsigned char var_1_42 = 50;
unsigned char var_1_43 = 4;
unsigned char var_1_44 = 8;
unsigned char var_1_45 = 200;
unsigned char var_1_46 = 128;
unsigned char var_1_47 = 128;
signed char var_1_48 = -1;
signed char var_1_49 = 10;
signed char var_1_50 = 5;
signed char var_1_51 = 4;
signed char var_1_52 = 5;
signed long int var_1_53 = 128;
unsigned char var_1_54 = 0;
signed char var_1_55 = -1;
double var_1_56 = 31.25;
double var_1_57 = 999999.75;
double var_1_58 = 25.1;
double var_1_59 = 1.4;
signed short int var_1_60 = -32;
double var_1_61 = 200.75;
unsigned short int var_1_62 = 2;
signed char var_1_63 = -10;
unsigned long int var_1_64 = 50;
signed long int var_1_65 = 8;
unsigned long int var_1_66 = 1;
signed char var_1_67 = -100;
float var_1_68 = 256.2;
float var_1_69 = 15.6;
unsigned short int var_1_70 = 128;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 0;
unsigned long int var_1_73 = 32;
unsigned short int var_1_74 = 64;
unsigned short int var_1_75 = 43232;
signed long int var_1_76 = 32;
unsigned long int var_1_77 = 2;
unsigned char var_1_78 = 5;
float var_1_79 = 31.45;
unsigned long int var_1_80 = 50;
float var_1_81 = 9.217;
signed char var_1_82 = 0;
signed long int var_1_83 = -32;
double var_1_84 = 10.2;
signed short int var_1_85 = 25;
float var_1_86 = 5.25;
signed short int var_1_87 = -8;
unsigned short int var_1_88 = 32;
double var_1_89 = 3.54;
unsigned short int var_1_90 = 5;
unsigned short int var_1_91 = 4;
signed char var_1_92 = 4;
signed char var_1_93 = 2;
signed long int var_1_94 = 100;
unsigned long int var_1_95 = 500;
unsigned char var_1_96 = 0;
double var_1_97 = 24.25;
signed char var_1_98 = 32;
unsigned long int var_1_99 = 1;
unsigned long int var_1_100 = 1258463208;
unsigned long int var_1_101 = 1107939895;
signed char var_1_102 = 16;
signed long int var_1_103 = -128;
signed short int var_1_104 = 5;
double var_1_105 = 100.75;
signed short int var_1_106 = 26912;
signed long int var_1_107 = 4;
double var_1_108 = 32.8;
double var_1_109 = 8.7;
unsigned long int var_1_110 = 1;
signed short int var_1_111 = -256;
signed short int var_1_112 = 2;
signed short int var_1_113 = 10000;
unsigned char var_1_114 = 16;
signed short int var_1_115 = -1;
unsigned char var_1_116 = 64;
signed char var_1_117 = 64;
signed char var_1_118 = 25;
signed long int var_1_119 = -50;
unsigned char var_1_120 = 5;
signed char var_1_121 = 4;
unsigned long int var_1_122 = 0;
unsigned long int var_1_123 = 5;
double var_1_124 = 127.1;
double var_1_125 = 32.4;
signed char var_1_126 = -1;
unsigned char var_1_127 = 2;
signed char var_1_128 = 16;
signed short int var_1_129 = 10;
float var_1_130 = 31.525;
signed short int var_1_131 = -10;
unsigned short int var_1_132 = 5;
unsigned char var_1_133 = 1;
unsigned char var_1_134 = 0;
unsigned char var_1_135 = 0;
unsigned long int var_1_136 = 0;
double var_1_137 = 49.75;
float var_1_138 = 7.6;
signed long int var_1_139 = 256;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -32;
unsigned short int last_1_var_1_11 = 64;
signed short int last_1_var_1_14 = 8;
unsigned long int last_1_var_1_16 = 25;
float last_1_var_1_18 = 63.25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_27) {
		var_1_26 = (var_1_28 + (abs (var_1_29)));
	} else {
		var_1_26 = (abs (var_1_29));
	}


	// From: CodeObject2
	if (var_1_28 >= (abs (max (var_1_29 , var_1_31)))) {
		if (-4 > (min ((abs (var_1_29)) , var_1_31))) {
			var_1_30 = var_1_32;
		} else {
			if (var_1_28 < (var_1_29 << (min (1u , var_1_33)))) {
				var_1_30 = (var_1_34 && var_1_32);
			}
		}
	}


	// From: CodeObject3
	if (var_1_33 <= (var_1_36 - (max (var_1_37 , var_1_38)))) {
		if (var_1_28 != (abs (var_1_29))) {
			var_1_35 = var_1_33;
		} else {
			if (var_1_27) {
				var_1_35 = (max ((abs (max (var_1_33 , var_1_39))) , (abs (var_1_40))));
			}
		}
	} else {
		if (var_1_31 < var_1_40) {
			var_1_35 = (var_1_33 + (min (var_1_41 , (max (var_1_42 , var_1_43)))));
		}
	}


	// From: CodeObject4
	if (var_1_35 < (var_1_45 - var_1_43)) {
		if ((abs (10)) > (var_1_29 ^ var_1_40)) {
			if ((4 ^ (max (var_1_31 , var_1_43))) > (abs (abs (var_1_39)))) {
				var_1_44 = (200 - 8);
			} else {
				var_1_44 = ((min (var_1_46 , var_1_47)) - var_1_33);
			}
		}
	}


	// From: CodeObject5
	if (((var_1_36 & var_1_44) >> var_1_52) > (var_1_35 >> var_1_41)) {
		var_1_48 = (var_1_52 - var_1_33);
	} else {
		var_1_48 = (abs (var_1_51));
	}


	// From: CodeObject6
	if ((var_1_37 >> var_1_28) >= (max ((var_1_46 ^ var_1_40) , (var_1_35 ^ var_1_42)))) {
		var_1_53 = (abs (min (var_1_31 , var_1_29)));
	} else {
		var_1_53 = (abs (-1));
	}


	// From: CodeObject7
	if (var_1_39 >= (- 16)) {
		var_1_54 = (! 1);
	}


	// From: CodeObject8
	var_1_55 = ((abs (var_1_49)) - var_1_52);


	// From: CodeObject9
	if (var_1_30) {
		if (((min (var_1_53 , var_1_41)) <= var_1_40) || var_1_32) {
			var_1_56 = (var_1_57 + (var_1_58 - var_1_59));
		} else {
			var_1_56 = (max (var_1_59 , var_1_57));
		}
	}


	// From: CodeObject10
	if ((abs (- var_1_56)) <= (max (var_1_59 , (var_1_58 / var_1_61)))) {
		if (256 < var_1_38) {
			var_1_60 = (var_1_33 - (var_1_39 + 128));
		} else {
			if (var_1_49 > (var_1_52 * var_1_37)) {
				var_1_60 = (abs (var_1_41));
			} else {
				var_1_60 = ((min ((abs (var_1_52)) , var_1_42)) + var_1_50);
			}
		}
	} else {
		var_1_60 = (abs (max ((-128 + var_1_41) , var_1_43)));
	}


	// From: CodeObject11
	var_1_62 = var_1_43;


	// From: CodeObject12
	if (var_1_30) {
		var_1_63 = var_1_49;
	}


	// From: CodeObject13
	if (var_1_34) {
		var_1_64 = var_1_39;
	}


	// From: CodeObject14
	if (var_1_54) {
		var_1_65 = (var_1_41 + var_1_49);
	}


	// From: CodeObject15
	if (var_1_30 || var_1_34) {
		var_1_66 = (min (var_1_33 , var_1_40));
	} else {
		if (var_1_50 <= (var_1_67 >> var_1_39)) {
			var_1_66 = var_1_46;
		}
	}


	// From: CodeObject16
	if (var_1_43 < var_1_42) {
		if (var_1_54) {
			var_1_68 = (min (var_1_59 , var_1_69));
		}
	}


	// From: CodeObject17
	if (var_1_53 < (var_1_35 - (abs (var_1_55)))) {
		var_1_70 = (abs (abs (var_1_47)));
	} else {
		if (var_1_35 != (max (var_1_40 , (min (var_1_62 , 64))))) {
			var_1_70 = (max (var_1_45 , var_1_47));
		}
	}


	// From: CodeObject18
	if (var_1_33 > (~ 8u)) {
		var_1_71 = (((abs (var_1_43)) >= var_1_31) || (! (! var_1_72)));
	}


	// From: CodeObject19
	if (var_1_39 < var_1_62) {
		var_1_73 = (((abs (var_1_44)) + var_1_41) + (abs (min (var_1_62 , var_1_38))));
	} else {
		var_1_73 = (max (var_1_35 , var_1_45));
	}


	// From: CodeObject20
	if (var_1_29 <= (max (var_1_42 , var_1_62))) {
		var_1_74 = (var_1_75 - (abs (var_1_47)));
	}


	// From: CodeObject21
	var_1_76 = (abs (var_1_47));


	// From: CodeObject22
	if (var_1_40 > var_1_45) {
		var_1_77 = (abs (var_1_43));
	}


	// From: CodeObject23
	var_1_78 = (abs (var_1_43));


	// From: CodeObject24
	if ((abs (var_1_36 - var_1_33)) >= var_1_80) {
		var_1_79 = var_1_58;
	}


	// From: CodeObject25
	if (-64 < (max (var_1_70 , -128))) {
		if (var_1_78 > var_1_48) {
			var_1_81 = (abs (var_1_59));
		}
	}


	// From: CodeObject26
	var_1_83 = var_1_60;


	// From: CodeObject27
	if (var_1_52 <= var_1_26) {
		var_1_84 = (min (127.5 , var_1_57));
	}


	// From: CodeObject28
	if (var_1_34 || var_1_71) {
		if ((var_1_81 > var_1_69) || var_1_71) {
			var_1_85 = ((64 + var_1_33) - var_1_46);
		} else {
			if ((max (var_1_86 , 3.3f)) == (abs (abs (var_1_69)))) {
				var_1_85 = var_1_49;
			}
		}
	}


	// From: CodeObject29
	if (var_1_27) {
		var_1_87 = (var_1_44 - var_1_42);
	}


	// From: CodeObject30
	if (var_1_79 < var_1_86) {
		if ((var_1_54 && var_1_34) && (var_1_56 < (var_1_68 / var_1_89))) {
			var_1_88 = (abs (var_1_52));
		} else {
			var_1_88 = (var_1_41 + var_1_45);
		}
	}


	// From: CodeObject31
	var_1_90 = (min (var_1_45 , var_1_91));


	// From: CodeObject32
	if (199.2 >= var_1_89) {
		if ((abs (var_1_82)) <= var_1_76) {
			if ((var_1_66 >> 10) >= var_1_38) {
				if (var_1_65 > var_1_41) {
					if (var_1_35 > (abs (var_1_73))) {
						var_1_92 = var_1_33;
					}
				} else {
					var_1_92 = (abs (var_1_50));
				}
			} else {
				var_1_92 = (var_1_52 - (var_1_33 + (min (var_1_93 , 2))));
			}
		}
	} else {
		if ((max (var_1_50 , var_1_94)) > (var_1_75 - (max (var_1_45 , var_1_88)))) {
			var_1_92 = (abs (min (var_1_33 , var_1_52)));
		} else {
			var_1_92 = (abs (abs (abs (var_1_52))));
		}
	}


	// From: CodeObject33
	var_1_95 = (abs (var_1_42));


	// From: CodeObject34
	if (var_1_61 <= var_1_57) {
		var_1_96 = (! (! (! var_1_32)));
	}


	// From: CodeObject35
	if (var_1_71) {
		if ((var_1_55 <= (var_1_62 / var_1_98)) && var_1_34) {
			var_1_97 = var_1_58;
		} else {
			if (((var_1_70 >> var_1_41) | var_1_50) <= (var_1_92 / (abs (-32)))) {
				var_1_97 = (min (var_1_58 , var_1_69));
			}
		}
	} else {
		if ((var_1_84 > var_1_56) || (var_1_60 >= var_1_31)) {
			var_1_97 = (max (var_1_57 , 15.5));
		} else {
			var_1_97 = ((abs (min (var_1_57 , var_1_59))) + var_1_58);
		}
	}


	// From: CodeObject36
	if ((min ((max (var_1_62 , var_1_38)) , var_1_93)) >= var_1_70) {
		if (! var_1_32) {
			var_1_99 = (min (var_1_45 , var_1_91));
		} else {
			var_1_99 = ((abs (var_1_100 + var_1_101)) - var_1_74);
		}
	}


	// From: CodeObject37
	if ((var_1_79 + var_1_81) > var_1_97) {
		var_1_102 = (abs (abs (var_1_50)));
	}


	// From: CodeObject38
	if ((var_1_80 & var_1_35) >= var_1_52) {
		var_1_103 = (abs (var_1_90));
	}


	// From: CodeObject39
	if (var_1_30) {
		if ((~ var_1_35) < var_1_87) {
			if (var_1_95 <= var_1_77) {
				var_1_104 = var_1_102;
			} else {
				var_1_104 = (abs (var_1_33));
			}
		} else {
			if (var_1_58 >= ((4.6523447931791585E18 - var_1_59) - var_1_105)) {
				var_1_104 = (((var_1_106 - var_1_93) - var_1_33) - (abs (-128)));
			} else {
				var_1_104 = ((abs (abs (var_1_63))) - var_1_41);
			}
		}
	}


	// From: CodeObject40
	if ((max (var_1_92 , var_1_60)) < var_1_45) {
		var_1_107 = (abs (abs (var_1_41)));
	} else {
		var_1_107 = (abs (var_1_106 + (abs (var_1_33))));
	}


	// From: CodeObject41
	if (! (var_1_62 > var_1_52)) {
		if (var_1_54) {
			if ((~ var_1_88) <= ((64 | var_1_104) % -64)) {
				var_1_108 = ((abs (var_1_69)) - var_1_58);
			} else {
				if ((var_1_82 * var_1_62) > var_1_78) {
					if (var_1_72) {
						var_1_108 = ((abs (var_1_57)) + (min (var_1_59 , (abs (var_1_58)))));
					} else {
						var_1_108 = (max ((var_1_59 - var_1_109) , var_1_58));
					}
				} else {
					var_1_108 = (abs (abs (var_1_59)));
				}
			}
		}
	}


	// From: CodeObject42
	if (var_1_96) {
		var_1_110 = (abs (var_1_91));
	}


	// From: CodeObject43
	if (var_1_31 > var_1_49) {
		var_1_111 = (max ((var_1_82 + var_1_78) , (abs (abs (var_1_47)))));
	} else {
		var_1_111 = var_1_41;
	}


	// From: CodeObject44
	if (var_1_34 && (var_1_78 >= 2)) {
		if (var_1_34) {
			var_1_112 = (max (var_1_102 , var_1_29));
		} else {
			var_1_112 = (abs (var_1_48 + var_1_55));
		}
	} else {
		if (var_1_26 >= var_1_78) {
			var_1_112 = (((max (var_1_45 , var_1_47)) - (var_1_113 - var_1_39)) + (max ((abs (var_1_78)) , var_1_67)));
		}
	}


	// From: CodeObject45
	if (var_1_53 < (var_1_40 - (abs (10)))) {
		if ((var_1_94 >> (abs (var_1_33))) > var_1_64) {
			if (var_1_96) {
				if ((var_1_68 < var_1_84) && (var_1_61 <= (var_1_79 * 1.2))) {
					var_1_114 = (var_1_46 - var_1_33);
				}
			}
		} else {
			var_1_114 = (max ((abs (abs (var_1_42))) , (abs (var_1_52))));
		}
	}


	// From: CodeObject46
	if (var_1_107 <= var_1_88) {
		var_1_115 = var_1_46;
	} else {
		if (var_1_116 >= var_1_47) {
			var_1_115 = (var_1_35 + (abs (var_1_47)));
		}
	}


	// From: CodeObject47
	if (var_1_84 >= (var_1_89 + var_1_56)) {
		if (var_1_72) {
			if (var_1_32) {
				var_1_117 = (min (var_1_93 , var_1_33));
			}
		} else {
			var_1_117 = (var_1_50 + var_1_51);
		}
	}


	// From: CodeObject48
	if (var_1_96 || (var_1_111 < var_1_95)) {
		if (var_1_89 != (min (var_1_58 , var_1_69))) {
			var_1_119 = (var_1_63 + var_1_47);
		}
	}


	// From: CodeObject49
	if (var_1_34) {
		var_1_120 = var_1_93;
	}


	// From: CodeObject50
	if (var_1_27) {
		var_1_121 = var_1_33;
	} else {
		var_1_121 = -32;
	}


	// From: CodeObject51
	if (var_1_30) {
		var_1_122 = var_1_38;
	} else {
		var_1_122 = var_1_123;
	}


	// From: CodeObject52
	if (var_1_71) {
		var_1_124 = var_1_125;
	}


	// From: CodeObject53
	var_1_126 = var_1_49;


	// From: CodeObject54
	if (var_1_72) {
		var_1_127 = var_1_47;
	}


	// From: CodeObject55
	var_1_128 = var_1_33;


	// From: CodeObject56
	var_1_129 = var_1_113;


	// From: CodeObject57
	if (var_1_27) {
		var_1_130 = var_1_58;
	}


	// From: CodeObject58
	var_1_131 = var_1_118;


	// From: CodeObject59
	if (var_1_133) {
		var_1_132 = var_1_33;
	} else {
		var_1_132 = var_1_75;
	}


	// From: CodeObject60
	var_1_134 = var_1_72;


	// From: CodeObject61
	if (var_1_34) {
		var_1_135 = var_1_72;
	} else {
		var_1_135 = 0;
	}


	// From: CodeObject62
	if (var_1_135) {
		var_1_136 = var_1_45;
	}


	// From: CodeObject63
	if (var_1_119 < var_1_104) {
		var_1_137 = (abs (0.8));
	}


	// From: CodeObject64
	if (var_1_54) {
		var_1_138 = 256.875f;
	} else {
		var_1_138 = var_1_125;
	}


	// From: CodeObject65
	if (((var_1_58 - var_1_109) >= var_1_84) || ((var_1_45 % var_1_98) != var_1_91)) {
		if ((var_1_131 >> var_1_63) < var_1_111) {
			var_1_139 = var_1_60;
		} else {
			var_1_139 = var_1_70;
		}
	} else {
		var_1_139 = var_1_45;
	}


	// From: Req1Batch90PS_CN_500
	if ((last_1_var_1_14 / (min (var_1_3 , var_1_4))) <= (last_1_var_1_1 | last_1_var_1_16)) {
		if ((last_1_var_1_18 * last_1_var_1_18) < last_1_var_1_18) {
			var_1_1 = last_1_var_1_11;
		} else {
			var_1_1 = last_1_var_1_11;
		}
	} else {
		var_1_1 = last_1_var_1_11;
	}


	// From: Req6Batch90PS_CN_500
	if ((- (- last_1_var_1_18)) != last_1_var_1_18) {
		if (var_1_12 <= (max (last_1_var_1_14 , (- last_1_var_1_14)))) {
			var_1_24 = -50;
		} else {
			var_1_24 = last_1_var_1_14;
		}
	} else {
		var_1_24 = last_1_var_1_14;
	}


	// From: Req3Batch90PS_CN_500
	if (((var_1_15 - var_1_12) + var_1_24) < var_1_24) {
		var_1_14 = var_1_12;
	}


	// From: Req5Batch90PS_CN_500
	unsigned short int stepLocal_0 = var_1_13;
	if (var_1_24 < stepLocal_0) {
		if (var_1_20) {
			var_1_18 = ((abs (var_1_21)) + var_1_22);
		} else {
			if (var_1_23) {
				var_1_18 = (var_1_22 + var_1_21);
			} else {
				var_1_18 = -0.75f;
			}
		}
	} else {
		var_1_18 = var_1_21;
	}


	// From: Req2Batch90PS_CN_500
	if (var_1_18 != (var_1_18 + var_1_18)) {
		var_1_11 = ((var_1_12 + var_1_13) + 32);
	}


	// From: Req4Batch90PS_CN_500
	if (((var_1_1 * var_1_4) + var_1_1) > var_1_1) {
		if (var_1_14 < var_1_1) {
			var_1_16 = var_1_12;
		}
	} else {
		var_1_16 = 0u;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16384);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 32767);
	assume_abort_if_not(var_1_15 <= 65535);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -16383);
	assume_abort_if_not(var_1_28 <= 16383);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -16383);
	assume_abort_if_not(var_1_29 <= 16383);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= -32767);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 2147483647);
	assume_abort_if_not(var_1_36 <= 4294967295);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 2147483647);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 127);
	assume_abort_if_not(var_1_45 <= 255);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 127);
	assume_abort_if_not(var_1_46 <= 254);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 127);
	assume_abort_if_not(var_1_47 <= 254);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -63);
	assume_abort_if_not(var_1_49 <= 63);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= -63);
	assume_abort_if_not(var_1_50 <= 63);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -63);
	assume_abort_if_not(var_1_51 <= 63);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 33);
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= -461168.6018427382800e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427382800e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427382800e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= -922337.2036854776000e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854776000e+12F && var_1_61 >= 1.0e-20F ));
	assume_abort_if_not(var_1_61 != 0.0F);
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= -128);
	assume_abort_if_not(var_1_67 <= 127);
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= -922337.2036854765600e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854765600e+12F && var_1_69 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 1);
	assume_abort_if_not(var_1_72 <= 1);
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 32767);
	assume_abort_if_not(var_1_75 <= 65534);
	var_1_80 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 4294967295);
	var_1_82 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_82 >= -128);
	assume_abort_if_not(var_1_82 <= 127);
	var_1_86 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_86 >= -922337.2036854776000e+13F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 9223372.036854776000e+12F && var_1_86 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_89 >= -922337.2036854776000e+13F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 9223372.036854776000e+12F && var_1_89 >= 1.0e-20F ));
	assume_abort_if_not(var_1_89 != 0.0F);
	var_1_91 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 65534);
	var_1_93 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_93 >= 0);
	assume_abort_if_not(var_1_93 <= 63);
	var_1_94 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_94 >= -2147483648);
	assume_abort_if_not(var_1_94 <= 2147483647);
	var_1_98 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_98 >= -128);
	assume_abort_if_not(var_1_98 <= 127);
	assume_abort_if_not(var_1_98 != 0);
	var_1_100 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_100 >= 1073741823);
	assume_abort_if_not(var_1_100 <= 2147483647);
	var_1_101 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_101 >= 1073741824);
	assume_abort_if_not(var_1_101 <= 2147483647);
	var_1_105 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_105 >= 0.0F && var_1_105 <= -1.0e-20F) || (var_1_105 <= 9223372.036854776000e+12F && var_1_105 >= 1.0e-20F ));
	var_1_106 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_106 >= 24574);
	assume_abort_if_not(var_1_106 <= 32766);
	var_1_109 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_109 >= 0.0F && var_1_109 <= -1.0e-20F) || (var_1_109 <= 9223372.036854765600e+12F && var_1_109 >= 1.0e-20F ));
	var_1_113 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_113 >= 8191);
	assume_abort_if_not(var_1_113 <= 16383);
	var_1_116 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_116 >= 0);
	assume_abort_if_not(var_1_116 <= 255);
	var_1_118 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_118 >= -31);
	assume_abort_if_not(var_1_118 <= 31);
	var_1_123 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_123 >= 0);
	assume_abort_if_not(var_1_123 <= 4294967294);
	var_1_125 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_125 >= -922337.2036854765600e+13F && var_1_125 <= -1.0e-20F) || (var_1_125 <= 9223372.036854765600e+12F && var_1_125 >= 1.0e-20F ));
	var_1_133 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_133 >= 0);
	assume_abort_if_not(var_1_133 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_18 = var_1_18;
}

int property() {
	return (((((((last_1_var_1_14 / (min (var_1_3 , var_1_4))) <= (last_1_var_1_1 | last_1_var_1_16)) ? (((last_1_var_1_18 * last_1_var_1_18) < last_1_var_1_18) ? (var_1_1 == ((signed long int) last_1_var_1_11)) : (var_1_1 == ((signed long int) last_1_var_1_11))) : (var_1_1 == ((signed long int) last_1_var_1_11))) && ((var_1_18 != (var_1_18 + var_1_18)) ? (var_1_11 == ((unsigned short int) ((var_1_12 + var_1_13) + 32))) : 1)) && ((((var_1_15 - var_1_12) + var_1_24) < var_1_24) ? (var_1_14 == ((signed short int) var_1_12)) : 1)) && ((((var_1_1 * var_1_4) + var_1_1) > var_1_1) ? ((var_1_14 < var_1_1) ? (var_1_16 == ((unsigned long int) var_1_12)) : 1) : (var_1_16 == ((unsigned long int) 0u)))) && ((var_1_24 < var_1_13) ? (var_1_20 ? (var_1_18 == ((float) ((abs (var_1_21)) + var_1_22))) : (var_1_23 ? (var_1_18 == ((float) (var_1_22 + var_1_21))) : (var_1_18 == ((float) -0.75f)))) : (var_1_18 == ((float) var_1_21)))) && (((- (- last_1_var_1_18)) != last_1_var_1_18) ? ((var_1_12 <= (max (last_1_var_1_14 , (- last_1_var_1_14)))) ? (var_1_24 == ((signed long int) -50)) : (var_1_24 == ((signed long int) last_1_var_1_14))) : (var_1_24 == ((signed long int) last_1_var_1_14)))
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
