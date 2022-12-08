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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch17PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 25;
unsigned char var_1_2 = 25;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
signed long int var_1_5 = 4;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
double var_1_11 = 7.3;
double var_1_12 = 1.25;
double var_1_13 = 128.8;
signed char var_1_14 = -1;
signed char var_1_15 = 10;
signed short int var_1_16 = 8;
unsigned long int var_1_18 = 128;
unsigned long int var_1_19 = 3963666122;
float var_1_20 = 15.875;
float var_1_21 = 4.2;
float var_1_22 = 5.5;
signed short int var_1_23 = -10;
unsigned long int var_1_24 = 50;
signed long int var_1_25 = 500;
unsigned long int var_1_26 = 16;
unsigned long int var_1_27 = 4;
unsigned char var_1_28 = 0;
signed short int var_1_29 = -25;
unsigned long int var_1_30 = 1000000000;
unsigned long int var_1_31 = 4155847319;
unsigned long int var_1_32 = 64;
float var_1_33 = 99.25;
signed long int var_1_34 = 10;
unsigned char var_1_35 = 16;
unsigned char var_1_36 = 100;
signed short int var_1_37 = 1;
signed short int var_1_38 = 5;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
double var_1_42 = 4.5;
double var_1_43 = 2.1;
double var_1_44 = 127.4;
double var_1_45 = 2.2;
unsigned long int var_1_46 = 1;
double var_1_47 = 128.5;
signed char var_1_48 = -25;
double var_1_49 = 8.5;
signed char var_1_50 = -10;
double var_1_51 = 10.5;
unsigned short int var_1_52 = 32;
signed long int var_1_53 = -2;
signed char var_1_54 = 50;
signed char var_1_55 = 32;
signed char var_1_56 = 0;
float var_1_57 = 64.5;
float var_1_58 = 9999999999999.75;
signed char var_1_59 = 64;
float var_1_60 = 100000000000000.5;
float var_1_61 = 0.0;
float var_1_62 = 1.5;
unsigned long int var_1_63 = 10;
unsigned long int var_1_64 = 10000000;
float var_1_65 = 32.25;
signed char var_1_66 = 4;
unsigned long int var_1_67 = 8;
float var_1_68 = 15.2;
unsigned char var_1_69 = 0;
unsigned short int var_1_70 = 8;
float var_1_71 = 9.625;
signed long int var_1_72 = -8;
unsigned short int var_1_73 = 38352;
signed char var_1_74 = 0;
signed char var_1_75 = 32;
unsigned char var_1_76 = 32;
signed short int var_1_77 = -16;
float var_1_78 = 1.2;
double var_1_79 = 256.125;
signed char var_1_80 = -10;
signed char var_1_81 = 0;
signed short int var_1_82 = 5;
signed long int var_1_83 = -5;
signed short int var_1_84 = -256;
unsigned char var_1_85 = 200;
signed short int var_1_86 = 25026;
unsigned char var_1_87 = 32;
signed char var_1_88 = 16;
signed short int var_1_89 = -50;
unsigned long int var_1_90 = 16;
unsigned long int var_1_91 = 2116610548;
signed short int var_1_92 = -128;
signed char var_1_93 = -1;
float var_1_94 = 49.5;
unsigned short int var_1_95 = 2;
float var_1_96 = 9.5;
unsigned char var_1_97 = 1;
double var_1_98 = 5.3;
signed short int var_1_99 = -500;
signed short int var_1_100 = -2;
signed long int var_1_101 = -32;
float var_1_102 = 9.694;
signed long int var_1_103 = -2;
double var_1_104 = 2.6;
float var_1_105 = 0.3;
float var_1_106 = 3.2;
unsigned char var_1_107 = 64;
unsigned char var_1_108 = 16;
signed char var_1_109 = 4;
signed char var_1_110 = 8;
signed long int var_1_111 = -8;
unsigned char var_1_112 = 4;
unsigned char var_1_113 = 10;
signed long int var_1_114 = -128;
signed char var_1_115 = -4;
signed short int var_1_116 = 64;
unsigned long int var_1_117 = 0;
signed char var_1_118 = -8;
unsigned short int var_1_119 = 4;
unsigned char var_1_120 = 1;
unsigned char var_1_121 = 1;
signed long int var_1_122 = -128;
signed char var_1_123 = -128;
unsigned char var_1_124 = 25;
unsigned char var_1_125 = 200;
unsigned short int var_1_126 = 1000;
unsigned short int var_1_127 = 2;
unsigned short int var_1_128 = 16;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 1;
signed char last_1_var_1_14 = -1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_20 = (min (var_1_21 , var_1_22));


	// From: CodeObject2
	if (128u <= var_1_24) {
		if ((var_1_20 >= var_1_21) && ((var_1_24 * var_1_25) < (min (var_1_26 , var_1_27)))) {
			if (var_1_25 > var_1_24) {
				var_1_23 = (abs (4));
			} else {
				if (var_1_28) {
					var_1_23 = var_1_29;
				} else {
					var_1_23 = var_1_29;
				}
			}
		} else {
			var_1_23 = 5;
		}
	}


	// From: CodeObject3
	if (var_1_24 >= var_1_25) {
		var_1_30 = ((abs (var_1_31)) - var_1_32);
	}


	// From: CodeObject4
	var_1_33 = var_1_21;


	// From: CodeObject5
	if (var_1_28) {
		var_1_34 = (abs (var_1_29));
	}


	// From: CodeObject6
	if (var_1_31 > var_1_32) {
		var_1_35 = var_1_36;
	} else {
		if ((var_1_36 - (max (var_1_37 , var_1_38))) < (abs (var_1_23))) {
			if (((var_1_24 | var_1_32) | var_1_25) < (var_1_38 | var_1_34)) {
				var_1_35 = var_1_36;
			}
		}
	}


	// From: CodeObject7
	if (var_1_21 > var_1_20) {
		if (var_1_23 != (var_1_35 ^ (var_1_31 & var_1_27))) {
			var_1_39 = (var_1_40 || (! var_1_41));
		}
	}


	// From: CodeObject8
	if (! var_1_39) {
		if ((~ (var_1_38 * var_1_34)) >= 64) {
			var_1_42 = (min ((max (5.5 , var_1_21)) , var_1_43));
		}
	} else {
		if (var_1_28 && var_1_40) {
			var_1_42 = (var_1_44 + var_1_45);
		} else {
			if (var_1_32 >= var_1_46) {
				var_1_42 = (min (((min (var_1_45 , var_1_44)) + var_1_47) , (abs (min (var_1_43 , var_1_21)))));
			}
		}
	}


	// From: CodeObject9
	if ((- var_1_45) < (var_1_42 / var_1_49)) {
		var_1_48 = var_1_50;
	}


	// From: CodeObject10
	if (var_1_45 < var_1_42) {
		var_1_51 = (max (var_1_45 , (var_1_47 + var_1_44)));
	}


	// From: CodeObject11
	if (var_1_25 <= var_1_34) {
		var_1_52 = (abs (var_1_36));
	}


	// From: CodeObject12
	if ((var_1_39 || var_1_41) || (var_1_37 > var_1_31)) {
		var_1_53 = ((max (var_1_36 , (abs (var_1_23)))) - var_1_52);
	}


	// From: CodeObject13
	if ((abs (var_1_47)) > var_1_51) {
		var_1_54 = (var_1_55 - var_1_56);
	} else {
		if ((min ((var_1_57 - var_1_58) , (var_1_43 / var_1_49))) != (var_1_33 / 100.4)) {
			if (var_1_22 > var_1_43) {
				var_1_54 = (max ((min ((max (var_1_55 , var_1_56)) , var_1_50)) , var_1_59));
			}
		}
	}


	// From: CodeObject14
	if ((- var_1_26) <= var_1_25) {
		var_1_60 = ((var_1_61 - 50.5f) - var_1_62);
	}


	// From: CodeObject15
	if (var_1_41) {
		var_1_63 = (abs (128u));
	} else {
		if ((var_1_27 >> var_1_38) >= (var_1_64 & var_1_31)) {
			if (var_1_40) {
				var_1_63 = (abs (var_1_35));
			}
		} else {
			var_1_63 = (((abs (var_1_52)) + var_1_37) + var_1_32);
		}
	}


	// From: CodeObject16
	if (var_1_63 == (~ var_1_46)) {
		if ((var_1_63 >= var_1_53) && var_1_40) {
			if (var_1_52 <= var_1_34) {
				var_1_65 = (var_1_61 - (min (1.00000005E7f , var_1_62)));
			}
		} else {
			if (var_1_40) {
				var_1_65 = (var_1_62 - var_1_61);
			}
		}
	}


	// From: CodeObject17
	if (var_1_48 >= var_1_34) {
		var_1_66 = (min (var_1_56 , var_1_59));
	} else {
		if ((min (-5 , var_1_31)) < (max (var_1_67 , var_1_52))) {
			var_1_66 = var_1_59;
		} else {
			var_1_66 = (abs (min (var_1_56 , var_1_55)));
		}
	}


	// From: CodeObject18
	if ((~ 1) >= (var_1_27 ^ var_1_30)) {
		var_1_68 = (abs (var_1_47 + var_1_45));
	} else {
		if (var_1_69 && var_1_28) {
			if (var_1_28) {
				var_1_68 = (max (var_1_61 , var_1_43));
			} else {
				if (var_1_40) {
					var_1_68 = (abs (var_1_61));
				} else {
					var_1_68 = var_1_21;
				}
			}
		}
	}


	// From: CodeObject19
	if (var_1_49 <= var_1_43) {
		if (var_1_41) {
			var_1_70 = (var_1_37 + (abs (var_1_36 + var_1_56)));
		} else {
			var_1_70 = var_1_56;
		}
	}


	// From: CodeObject20
	if (((var_1_53 | var_1_35) % var_1_72) >= var_1_55) {
		if ((var_1_73 - var_1_37) < (~ (var_1_35 ^ -25))) {
			var_1_71 = (15.75f + var_1_45);
		} else {
			if ((var_1_45 + var_1_65) == var_1_22) {
				if (var_1_40) {
					var_1_71 = (var_1_47 + var_1_44);
				}
			} else {
				var_1_71 = (max (var_1_22 , var_1_62));
			}
		}
	}


	// From: CodeObject21
	if (var_1_39) {
		var_1_74 = (var_1_56 - var_1_75);
	} else {
		if (var_1_59 > var_1_63) {
			var_1_74 = (min (var_1_56 , var_1_50));
		}
	}


	// From: CodeObject22
	if ((var_1_32 | var_1_27) <= (var_1_24 / var_1_73)) {
		var_1_76 = var_1_75;
	}


	// From: CodeObject23
	if ((- var_1_20) <= var_1_49) {
		var_1_77 = (16 - var_1_35);
	}


	// From: CodeObject24
	if (var_1_75 == (var_1_64 % var_1_72)) {
		if (100.2 <= (abs (max (var_1_45 , var_1_51)))) {
			if (((min (var_1_77 , var_1_72)) & var_1_24) < ((var_1_37 | 50u) + var_1_56)) {
				var_1_78 = (abs (var_1_61));
			} else {
				var_1_78 = (max ((abs (var_1_62)) , (abs (var_1_61))));
			}
		}
	}


	// From: CodeObject25
	if (var_1_32 < (var_1_25 >> var_1_53)) {
		if ((var_1_72 ^ (var_1_31 - var_1_37)) <= (var_1_26 / var_1_73)) {
			var_1_79 = (min ((abs (var_1_21)) , var_1_45));
		}
	} else {
		if (! (var_1_50 < (var_1_75 - var_1_56))) {
			var_1_79 = (abs (var_1_47));
		}
	}


	// From: CodeObject26
	if (var_1_21 > var_1_22) {
		var_1_80 = (((abs (-64)) - var_1_81) - 2);
	}


	// From: CodeObject27
	var_1_82 = ((var_1_35 + var_1_76) - var_1_75);


	// From: CodeObject28
	if ((var_1_46 ^ -2) < (var_1_70 & var_1_75)) {
		if ((abs (var_1_46)) < (abs (var_1_72))) {
			var_1_83 = ((var_1_81 + var_1_76) - var_1_38);
		} else {
			var_1_83 = (abs (min (var_1_54 , var_1_36)));
		}
	} else {
		var_1_83 = var_1_55;
	}


	// From: CodeObject29
	if (var_1_69) {
		if (var_1_85 < ((abs (var_1_67)) ^ var_1_46)) {
			if (-100000 != var_1_75) {
				if (var_1_49 >= var_1_22) {
					var_1_84 = (min (var_1_81 , var_1_66));
				}
			} else {
				var_1_84 = (abs (256));
			}
		} else {
			var_1_84 = ((min (var_1_75 , (var_1_86 - var_1_35))) - 8);
		}
	} else {
		var_1_84 = (min (var_1_85 , var_1_81));
	}


	// From: CodeObject30
	if ((var_1_73 % var_1_72) <= (~ var_1_32)) {
		var_1_87 = (abs (var_1_81));
	}


	// From: CodeObject31
	if (var_1_61 > var_1_20) {
		var_1_88 = (max ((var_1_75 - var_1_56) , var_1_59));
	}


	// From: CodeObject32
	if (! var_1_28) {
		if ((var_1_88 % (abs (var_1_86))) < var_1_87) {
			if (var_1_27 <= var_1_30) {
				var_1_89 = (max ((var_1_48 + var_1_55) , (abs (var_1_35))));
			} else {
				if ((max (var_1_38 , var_1_25)) >= var_1_52) {
					var_1_89 = (abs (var_1_76 - var_1_87));
				}
			}
		}
	}


	// From: CodeObject33
	if (var_1_37 <= var_1_34) {
		if ((max ((var_1_74 % var_1_72) , var_1_73)) >= var_1_83) {
			var_1_90 = (max ((abs (var_1_35)) , (2u + (var_1_91 - var_1_85))));
		}
	}


	// From: CodeObject34
	if ((var_1_81 >= (max (-1 , var_1_93))) || var_1_28) {
		if (var_1_40) {
			var_1_92 = var_1_76;
		}
	}


	// From: CodeObject35
	var_1_94 = (abs (var_1_47));


	// From: CodeObject36
	if (((var_1_57 / var_1_61) * var_1_21) < (100.125f - var_1_62)) {
		if (var_1_21 <= (var_1_22 + (var_1_96 + var_1_33))) {
			if (var_1_80 > var_1_75) {
				var_1_95 = (min (var_1_36 , (abs (max (var_1_86 , var_1_38)))));
			}
		}
	}


	// From: CodeObject37
	if (var_1_27 >= (var_1_52 >> var_1_29)) {
		var_1_97 = ((min (var_1_75 , var_1_81)) + (abs (var_1_56)));
	}


	// From: CodeObject38
	var_1_98 = (abs (min (var_1_21 , var_1_44)));


	// From: CodeObject39
	if (! (var_1_60 <= (abs (var_1_79)))) {
		var_1_99 = (var_1_76 - (abs (var_1_55)));
	} else {
		if (var_1_75 > var_1_32) {
			if (var_1_44 >= var_1_22) {
				var_1_99 = (abs (var_1_50));
			}
		}
	}


	// From: CodeObject40
	if (var_1_37 > var_1_55) {
		if (var_1_93 <= var_1_35) {
			var_1_100 = (-1 + (abs (500 + var_1_56)));
		} else {
			if (var_1_62 <= 0.8f) {
				if (var_1_68 > var_1_58) {
					var_1_100 = ((max (var_1_35 , (var_1_76 - var_1_56))) + (abs (-50)));
				}
			} else {
				var_1_100 = (abs (min (var_1_86 , (abs (var_1_88)))));
			}
		}
	}


	// From: CodeObject41
	if (var_1_60 >= 1.75f) {
		var_1_101 = (max ((var_1_95 + var_1_81) , var_1_73));
	} else {
		var_1_101 = var_1_29;
	}


	// From: CodeObject42
	if (var_1_64 < var_1_67) {
		var_1_102 = (min ((min (var_1_44 , (min (var_1_47 , var_1_61)))) , var_1_21));
	} else {
		if (var_1_101 <= var_1_99) {
			var_1_102 = (max (var_1_21 , (abs (var_1_22))));
		}
	}


	// From: CodeObject43
	if (var_1_55 >= var_1_25) {
		if (var_1_54 <= var_1_90) {
			var_1_103 = ((abs (var_1_81)) + var_1_77);
		}
	}


	// From: CodeObject44
	if (var_1_53 > var_1_48) {
		if (var_1_46 > (abs (max (var_1_85 , var_1_87)))) {
			var_1_104 = (min (var_1_47 , var_1_21));
		} else {
			var_1_104 = (abs (min (var_1_22 , var_1_45)));
		}
	} else {
		var_1_104 = var_1_21;
	}


	// From: CodeObject45
	if (var_1_69) {
		var_1_105 = (abs (var_1_22));
	} else {
		if (var_1_41) {
			var_1_105 = ((min (var_1_61 , var_1_62)) - var_1_106);
		}
	}


	// From: CodeObject46
	if (var_1_47 >= var_1_98) {
		var_1_107 = ((min ((abs (var_1_75)) , var_1_56)) + var_1_81);
	} else {
		var_1_107 = (((10 + 16) + var_1_81) + var_1_75);
	}


	// From: CodeObject47
	var_1_108 = var_1_81;


	// From: CodeObject48
	if (var_1_40) {
		var_1_109 = var_1_56;
	} else {
		var_1_109 = var_1_110;
	}


	// From: CodeObject49
	var_1_111 = var_1_110;


	// From: CodeObject50
	if (var_1_69) {
		var_1_112 = var_1_81;
	}


	// From: CodeObject51
	if (var_1_41) {
		var_1_113 = var_1_75;
	} else {
		var_1_113 = var_1_81;
	}


	// From: CodeObject52
	if (var_1_40) {
		var_1_114 = 4;
	} else {
		var_1_114 = var_1_48;
	}


	// From: CodeObject53
	if (var_1_41) {
		var_1_115 = var_1_55;
	} else {
		var_1_115 = var_1_75;
	}


	// From: CodeObject54
	if (var_1_28) {
		var_1_116 = var_1_50;
	} else {
		var_1_116 = var_1_50;
	}


	// From: CodeObject55
	if (var_1_28) {
		var_1_117 = var_1_70;
	}


	// From: CodeObject56
	var_1_118 = 16;


	// From: CodeObject57
	if (var_1_41) {
		var_1_119 = 32;
	}


	// From: CodeObject58
	if (var_1_41) {
		var_1_120 = 0;
	} else {
		var_1_120 = var_1_121;
	}


	// From: CodeObject59
	var_1_122 = var_1_92;


	// From: CodeObject60
	if (var_1_41) {
		var_1_123 = var_1_56;
	}


	// From: CodeObject61
	if (var_1_39) {
		var_1_124 = var_1_75;
	} else {
		var_1_124 = var_1_56;
	}


	// From: CodeObject62
	if (var_1_41) {
		var_1_125 = var_1_81;
	}


	// From: CodeObject63
	if ((var_1_57 - var_1_61) < (abs (var_1_58))) {
		var_1_126 = (abs (var_1_85 + (min (var_1_108 , var_1_112))));
	}


	// From: CodeObject64
	var_1_127 = var_1_113;


	// From: CodeObject65
	var_1_128 = var_1_56;


	// From: Req2Batch17PS_CN_500
	unsigned char stepLocal_0 = last_1_var_1_8;
	if (stepLocal_0 && last_1_var_1_8) {
		if (last_1_var_1_8) {
			var_1_5 = ((abs (last_1_var_1_14)) - (min (var_1_4 , var_1_2)));
		} else {
			var_1_5 = 8;
		}
	}


	// From: Req3Batch17PS_CN_500
	if (var_1_5 < var_1_3) {
		var_1_8 = ((var_1_7 || (last_1_var_1_8 || var_1_9)) && var_1_10);
	} else {
		var_1_8 = (! var_1_10);
	}


	// From: Req1Batch17PS_CN_500
	var_1_1 = (50 + (min (var_1_2 , (min (var_1_3 , var_1_4)))));


	// From: Req5Batch17PS_CN_500
	if ((64.4f + 1.5f) <= var_1_13) {
		if (var_1_1 >= var_1_4) {
			var_1_14 = var_1_15;
		}
	}


	// From: Req7Batch17PS_CN_500
	unsigned char stepLocal_3 = var_1_9 && var_1_8;
	if (stepLocal_3 || (var_1_8 && var_1_10)) {
		var_1_18 = (var_1_19 - (min ((1991720936u - var_1_1) , var_1_2)));
	} else {
		var_1_18 = var_1_2;
	}


	// From: Req4Batch17PS_CN_500
	signed long int stepLocal_1 = 8 + var_1_14;
	if (var_1_4 == stepLocal_1) {
		var_1_11 = (max (var_1_12 , var_1_13));
	}


	// From: Req6Batch17PS_CN_500
	unsigned long int stepLocal_2 = var_1_18 * (var_1_15 & var_1_1);
	if (var_1_12 >= 9.6) {
		if (var_1_10) {
			var_1_16 = (2 - var_1_1);
		} else {
			if (stepLocal_2 <= var_1_3) {
				var_1_16 = var_1_18;
			} else {
				var_1_16 = var_1_4;
			}
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -127);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 4294967295);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967295);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32767);
	assume_abort_if_not(var_1_29 <= 32766);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 2147483647);
	assume_abort_if_not(var_1_31 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 32767);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 32767);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854765600e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -461168.6018427382800e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -461168.6018427382800e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 4294967295);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -461168.6018427382800e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427382800e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= -922337.2036854776000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
	assume_abort_if_not(var_1_49 != 0.0F);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= -127);
	assume_abort_if_not(var_1_50 <= 126);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -1);
	assume_abort_if_not(var_1_55 <= 126);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 126);
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854776000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -127);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= 4611686.018427382800e+12F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854765600e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 4294967295);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 4294967295);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 1);
	var_1_72 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_72 >= -2147483648);
	assume_abort_if_not(var_1_72 <= 2147483647);
	assume_abort_if_not(var_1_72 != 0);
	var_1_73 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_73 >= 32767);
	assume_abort_if_not(var_1_73 <= 65535);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 126);
	var_1_81 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 63);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 255);
	var_1_86 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_86 >= 16382);
	assume_abort_if_not(var_1_86 <= 32766);
	var_1_91 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_91 >= 1073741823);
	assume_abort_if_not(var_1_91 <= 2147483647);
	var_1_93 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_93 >= -128);
	assume_abort_if_not(var_1_93 <= 127);
	var_1_96 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_96 >= -922337.2036854776000e+13F && var_1_96 <= -1.0e-20F) || (var_1_96 <= 9223372.036854776000e+12F && var_1_96 >= 1.0e-20F ));
	var_1_106 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_106 >= 0.0F && var_1_106 <= -1.0e-20F) || (var_1_106 <= 9223372.036854765600e+12F && var_1_106 >= 1.0e-20F ));
	var_1_110 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_110 >= -127);
	assume_abort_if_not(var_1_110 <= 126);
	var_1_121 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_121 >= 1);
	assume_abort_if_not(var_1_121 <= 1);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_14 = var_1_14;
}

int property() {
	return ((((((var_1_1 == ((unsigned char) (50 + (min (var_1_2 , (min (var_1_3 , var_1_4))))))) && ((last_1_var_1_8 && last_1_var_1_8) ? (last_1_var_1_8 ? (var_1_5 == ((signed long int) ((abs (last_1_var_1_14)) - (min (var_1_4 , var_1_2))))) : (var_1_5 == ((signed long int) 8))) : 1)) && ((var_1_5 < var_1_3) ? (var_1_8 == ((unsigned char) ((var_1_7 || (last_1_var_1_8 || var_1_9)) && var_1_10))) : (var_1_8 == ((unsigned char) (! var_1_10))))) && ((var_1_4 == (8 + var_1_14)) ? (var_1_11 == ((double) (max (var_1_12 , var_1_13)))) : 1)) && (((64.4f + 1.5f) <= var_1_13) ? ((var_1_1 >= var_1_4) ? (var_1_14 == ((signed char) var_1_15)) : 1) : 1)) && ((var_1_12 >= 9.6) ? (var_1_10 ? (var_1_16 == ((signed short int) (2 - var_1_1))) : (((var_1_18 * (var_1_15 & var_1_1)) <= var_1_3) ? (var_1_16 == ((signed short int) var_1_18)) : (var_1_16 == ((signed short int) var_1_4)))) : 1)) && (((var_1_9 && var_1_8) || (var_1_8 && var_1_10)) ? (var_1_18 == ((unsigned long int) (var_1_19 - (min ((1991720936u - var_1_1) , var_1_2))))) : (var_1_18 == ((unsigned long int) var_1_2)))
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
