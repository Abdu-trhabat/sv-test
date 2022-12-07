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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch19PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -64;
unsigned char var_1_2 = 128;
unsigned char var_1_3 = 64;
signed short int var_1_6 = -16;
unsigned short int var_1_7 = 56838;
unsigned short int var_1_8 = 24612;
signed short int var_1_9 = 20013;
unsigned char var_1_10 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed short int var_1_14 = 50;
unsigned char var_1_15 = 0;
signed short int var_1_19 = 100;
double var_1_21 = 3.5;
signed short int var_1_23 = -128;
float var_1_24 = 10.2;
float var_1_25 = 8.6;
float var_1_26 = 32.7;
float var_1_27 = 16.25;
float var_1_28 = 8.875;
unsigned short int var_1_29 = 256;
double var_1_30 = 2.75;
double var_1_31 = 0.0;
unsigned char var_1_32 = 8;
unsigned char var_1_33 = 32;
unsigned char var_1_34 = 64;
float var_1_35 = 1.15;
float var_1_36 = 63.76;
float var_1_37 = 5.375;
float var_1_38 = 1000000.4;
float var_1_39 = 32.25;
unsigned char var_1_40 = 0;
float var_1_41 = 1.5;
float var_1_42 = 9.2;
float var_1_43 = 5.5;
float var_1_44 = 64.75;
signed char var_1_45 = -5;
signed char var_1_46 = 8;
signed char var_1_47 = 8;
signed char var_1_48 = -2;
signed char var_1_49 = 8;
unsigned char var_1_50 = 32;
unsigned char var_1_51 = 128;
unsigned char var_1_52 = 128;
unsigned char var_1_53 = 128;
unsigned short int var_1_54 = 2;
unsigned short int var_1_55 = 44426;
unsigned char var_1_56 = 4;
unsigned long int var_1_57 = 8;
unsigned short int var_1_58 = 2;
float var_1_59 = 4.3;
float var_1_60 = 7.2;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 1;
unsigned char var_1_65 = 1;
signed short int var_1_66 = -64;
signed char var_1_67 = 5;
signed long int var_1_68 = -256;
signed char var_1_69 = 64;
unsigned char var_1_70 = 1;
unsigned char var_1_71 = 32;
unsigned short int var_1_72 = 200;
unsigned long int var_1_73 = 2;
float var_1_74 = 32.5;
unsigned long int var_1_75 = 2;
signed short int var_1_76 = -25;
unsigned short int var_1_77 = 4;
unsigned char var_1_78 = 10;
signed long int var_1_79 = 64;
unsigned long int var_1_80 = 16;
unsigned long int var_1_81 = 4240339670;
unsigned long int var_1_82 = 4163971446;
unsigned long int var_1_83 = 2668332597;
unsigned long int var_1_84 = 32;
double var_1_85 = 9.5;
signed char var_1_86 = 32;
double var_1_87 = 15.8;
unsigned char var_1_88 = 1;
float var_1_89 = 4.5;
float var_1_90 = 4.5;
float var_1_91 = 0.0;
float var_1_92 = 32.5;
float var_1_93 = 128.3;
unsigned long int var_1_94 = 128;
float var_1_95 = 100.025;
float var_1_96 = 32.75;
unsigned char var_1_97 = 128;
unsigned char var_1_98 = 128;
signed long int var_1_99 = 8;
unsigned long int var_1_100 = 64;
unsigned char var_1_101 = 1;
unsigned char var_1_102 = 0;
unsigned char var_1_103 = 0;
unsigned short int var_1_104 = 128;
signed char var_1_105 = 25;
unsigned short int var_1_106 = 5;
signed short int var_1_107 = -5;
unsigned char var_1_108 = 0;
unsigned short int var_1_109 = 16;
unsigned short int var_1_110 = 55225;
signed long int var_1_111 = -10;
float var_1_112 = 15.45;
signed char var_1_113 = 64;
double var_1_114 = 5.2;
float var_1_115 = 255.4;
unsigned char var_1_116 = 50;
signed long int var_1_117 = -4;
signed short int var_1_118 = -5;
signed long int var_1_119 = -5;
signed short int var_1_120 = 128;
signed long int var_1_121 = 4;
unsigned long int var_1_122 = 1;
double var_1_123 = 64.8;
signed char var_1_124 = -32;
unsigned char var_1_125 = 0;
unsigned char var_1_126 = 0;
unsigned long int var_1_127 = 64;
float var_1_128 = 32.25;
signed short int var_1_129 = 0;
double var_1_130 = 32.25;
double var_1_131 = 127.6;
float var_1_132 = 24.8;
unsigned char var_1_133 = 1;
signed char var_1_134 = -4;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_15 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_30 = (abs (var_1_31));


	// From: CodeObject2
	var_1_32 = ((abs (var_1_33)) + var_1_34);


	// From: CodeObject3
	var_1_35 = (max (var_1_31 , (max (8.9f , (var_1_36 - var_1_37)))));


	// From: CodeObject4
	var_1_38 = (abs (50.8f));


	// From: CodeObject5
	if ((~ var_1_33) < (var_1_34 * var_1_32)) {
		if (var_1_40) {
			var_1_39 = (min ((var_1_37 - (abs (var_1_36))) , (min (var_1_31 , var_1_41))));
		} else {
			if ((var_1_33 | var_1_32) >= var_1_34) {
				var_1_39 = ((abs (1.000000000625E9f)) + (abs (abs (var_1_42))));
			}
		}
	} else {
		if (var_1_36 != (abs (var_1_37 - var_1_43))) {
			var_1_39 = (abs (200.375f));
		} else {
			var_1_39 = (var_1_42 + var_1_44);
		}
	}


	// From: CodeObject6
	if ((min (var_1_35 , var_1_30)) > var_1_41) {
		var_1_45 = (((var_1_46 + var_1_47) + (abs (var_1_48))) - (abs (var_1_49)));
	} else {
		var_1_45 = (max ((abs (100)) , var_1_48));
	}


	// From: CodeObject7
	if (var_1_34 >= var_1_32) {
		var_1_50 = ((min (var_1_51 , (max (var_1_52 , var_1_53)))) - (abs (var_1_46)));
	} else {
		if ((var_1_48 | var_1_49) <= (min (1 , (abs (var_1_53))))) {
			var_1_50 = (abs (var_1_46));
		}
	}


	// From: CodeObject8
	if ((var_1_50 >= var_1_45) && var_1_40) {
		var_1_54 = (max (var_1_53 , var_1_32));
	} else {
		var_1_54 = (var_1_55 - var_1_32);
	}


	// From: CodeObject9
	if ((var_1_49 / var_1_53) > (abs (var_1_46))) {
		if (var_1_32 <= var_1_54) {
			var_1_56 = (abs (min ((min (var_1_33 , var_1_52)) , var_1_34)));
		}
	} else {
		if (var_1_33 >= var_1_52) {
			if (var_1_49 >= var_1_50) {
				var_1_56 = (var_1_33 + 2);
			} else {
				var_1_56 = var_1_52;
			}
		}
	}


	// From: CodeObject10
	if (var_1_51 >= (var_1_55 >> (abs (var_1_58)))) {
		var_1_57 = ((abs (var_1_58 + var_1_50)) + var_1_32);
	}


	// From: CodeObject11
	if (var_1_49 < var_1_33) {
		var_1_59 = ((0.4f + var_1_60) + var_1_42);
	}


	// From: CodeObject12
	if (var_1_40 && (var_1_42 == var_1_59)) {
		var_1_61 = (var_1_40 || ((var_1_62 || var_1_63) && (var_1_64 && var_1_65)));
	}


	// From: CodeObject13
	if ((var_1_48 << var_1_34) > var_1_56) {
		var_1_66 = (var_1_56 + var_1_34);
	} else {
		if (var_1_40) {
			var_1_66 = (min ((max (var_1_56 , var_1_45)) , (abs (var_1_32))));
		}
	}


	// From: CodeObject14
	if (var_1_68 > var_1_49) {
		if (var_1_40) {
			var_1_67 = (abs ((var_1_69 - var_1_47) - (abs (-1))));
		}
	}


	// From: CodeObject15
	if ((- (- var_1_30)) >= var_1_43) {
		if ((max (var_1_68 , var_1_48)) > var_1_32) {
			var_1_70 = (abs (max (var_1_51 , (var_1_58 + var_1_33))));
		} else {
			var_1_70 = (abs (max (var_1_46 , var_1_53)));
		}
	}


	// From: CodeObject16
	if (-256 > (min (var_1_52 , var_1_45))) {
		var_1_71 = (var_1_46 + var_1_69);
	} else {
		var_1_71 = (abs (var_1_34));
	}


	// From: CodeObject17
	if (var_1_61 && ((var_1_45 <= var_1_48) && var_1_62)) {
		var_1_72 = (max ((min (var_1_47 , var_1_46)) , var_1_56));
	}


	// From: CodeObject18
	if (var_1_50 > var_1_58) {
		var_1_73 = (abs (var_1_33 + var_1_72));
	}


	// From: CodeObject19
	if (var_1_44 >= (- var_1_39)) {
		if ((abs (var_1_38 + var_1_31)) < var_1_59) {
			var_1_74 = var_1_37;
		}
	}


	// From: CodeObject20
	if (var_1_40) {
		var_1_75 = var_1_34;
	}


	// From: CodeObject21
	if ((var_1_72 % var_1_52) < 5) {
		var_1_76 = (abs (var_1_48));
	}


	// From: CodeObject22
	if (var_1_42 != var_1_43) {
		var_1_77 = (max (var_1_46 , (min (var_1_56 , var_1_50))));
	}


	// From: CodeObject23
	if (var_1_77 >= var_1_56) {
		var_1_78 = var_1_33;
	}


	// From: CodeObject24
	if (var_1_63) {
		if (var_1_56 < (var_1_77 / var_1_53)) {
			if (var_1_61) {
				var_1_79 = ((max (var_1_58 , var_1_55)) - var_1_34);
			} else {
				var_1_79 = (min (var_1_69 , var_1_51));
			}
		} else {
			if ((- var_1_74) > (max ((1.2f * var_1_43) , var_1_36))) {
				var_1_79 = (min ((abs (var_1_53)) , (1000000 - (abs (var_1_49)))));
			} else {
				var_1_79 = var_1_45;
			}
		}
	}


	// From: CodeObject25
	if (var_1_74 == var_1_43) {
		var_1_80 = (abs (var_1_51));
	} else {
		var_1_80 = ((min ((max (var_1_81 , var_1_82)) , var_1_83)) - var_1_84);
	}


	// From: CodeObject26
	if ((var_1_52 & var_1_70) >= (-256 / var_1_51)) {
		var_1_85 = (abs (var_1_60 + var_1_44));
	}


	// From: CodeObject27
	if (var_1_41 >= (max (var_1_30 , var_1_74))) {
		if ((-10 > var_1_57) && var_1_62) {
			if (var_1_63) {
				var_1_86 = (var_1_47 + var_1_46);
			}
		} else {
			var_1_86 = (min (var_1_49 , (abs (abs (-64)))));
		}
	}


	// From: CodeObject28
	if (((32 * var_1_56) << var_1_48) < (-64 % var_1_53)) {
		var_1_87 = (abs (abs (max (var_1_37 , var_1_36))));
	}


	// From: CodeObject29
	if ((~ (var_1_34 / var_1_51)) <= (var_1_86 | 16)) {
		var_1_88 = (var_1_62 || var_1_64);
	}


	// From: CodeObject30
	if (1 >= (~ var_1_51)) {
		if (var_1_39 > var_1_85) {
			if (var_1_56 < var_1_33) {
				var_1_89 = (var_1_44 + var_1_90);
			} else {
				var_1_89 = ((abs (abs (var_1_41))) - var_1_37);
			}
		} else {
			var_1_89 = (var_1_36 - ((abs (var_1_91)) - var_1_92));
		}
	} else {
		if (((min (var_1_37 , var_1_43)) - var_1_92) > var_1_90) {
			if (var_1_61) {
				var_1_89 = ((max (63.6f , var_1_60)) + (var_1_92 - (max (5.75f , 255.8f))));
			} else {
				var_1_89 = (max (var_1_92 , var_1_93));
			}
		} else {
			if (var_1_36 <= (- var_1_37)) {
				if ((abs (var_1_85)) < var_1_92) {
					var_1_89 = (abs (9.5f));
				}
			}
		}
	}


	// From: CodeObject31
	if ((var_1_49 / var_1_69) >= var_1_72) {
		var_1_94 = var_1_33;
	}


	// From: CodeObject32
	if ((abs (var_1_69)) > (abs (var_1_50))) {
		if ((var_1_59 / (abs (var_1_91))) >= (var_1_42 / var_1_96)) {
			var_1_95 = (abs (var_1_42));
		}
	}


	// From: CodeObject33
	if (var_1_78 < (min (var_1_67 , var_1_45))) {
		if (var_1_85 > (abs (min (var_1_37 , var_1_35)))) {
			if (100.2f >= ((min (var_1_37 , var_1_36)) + var_1_35)) {
				var_1_97 = (abs (var_1_33));
			} else {
				if (var_1_88) {
					var_1_97 = var_1_46;
				}
			}
		} else {
			if (var_1_64) {
				var_1_97 = (abs (abs (min (var_1_69 , var_1_52))));
			} else {
				var_1_97 = var_1_98;
			}
		}
	} else {
		var_1_97 = ((200 - var_1_58) - var_1_34);
	}


	// From: CodeObject34
	if (var_1_71 != var_1_52) {
		var_1_99 = (min (var_1_72 , var_1_86));
	}


	// From: CodeObject35
	var_1_100 = (abs (var_1_46));


	// From: CodeObject36
	if (((var_1_52 - var_1_33) | 256) <= var_1_99) {
		var_1_101 = (! ((var_1_32 > var_1_67) && var_1_102));
	} else {
		if (var_1_79 <= (var_1_73 & var_1_98)) {
			var_1_101 = (var_1_64 && (var_1_65 || var_1_103));
		}
	}


	// From: CodeObject37
	if ((abs (var_1_54)) > var_1_84) {
		var_1_104 = (abs (var_1_53));
	}


	// From: CodeObject38
	if ((var_1_32 & (var_1_46 + var_1_78)) > 256) {
		if (var_1_52 < (var_1_82 + var_1_94)) {
			var_1_105 = ((min (5 , var_1_47)) + var_1_46);
		} else {
			var_1_105 = (min (((max (var_1_47 , 5)) - var_1_58) , var_1_69));
		}
	}


	// From: CodeObject39
	if ((abs (var_1_73)) >= (- var_1_69)) {
		var_1_106 = (abs (abs (var_1_47)));
	}


	// From: CodeObject40
	if ((abs (var_1_94)) >= (var_1_32 % 10u)) {
		if ((var_1_53 - var_1_47) >= var_1_34) {
			var_1_107 = (max (var_1_52 , var_1_58));
		}
	} else {
		var_1_107 = (max (var_1_34 , (abs (var_1_52))));
	}


	// From: CodeObject41
	var_1_108 = (var_1_58 + (max (var_1_69 , var_1_46)));


	// From: CodeObject42
	if (var_1_64) {
		if ((max (var_1_85 , var_1_36)) >= (var_1_59 * var_1_30)) {
			var_1_109 = (abs (max ((abs (var_1_33)) , (var_1_55 - var_1_97))));
		} else {
			var_1_109 = ((var_1_110 - var_1_70) - var_1_46);
		}
	} else {
		var_1_109 = (abs (var_1_97));
	}


	// From: CodeObject43
	if (var_1_79 >= var_1_100) {
		if (var_1_101) {
			var_1_111 = (min (var_1_50 , var_1_54));
		}
	} else {
		var_1_111 = (abs (abs (var_1_34)));
	}


	// From: CodeObject44
	if (var_1_99 <= var_1_52) {
		if ((abs (abs (var_1_90))) <= ((min (var_1_36 , var_1_37)) - 64.5f)) {
			var_1_112 = (abs (var_1_92));
		}
	} else {
		var_1_112 = ((abs (var_1_36)) - var_1_92);
	}


	// From: CodeObject45
	if (((200 * var_1_79) & var_1_70) == (min (var_1_97 , (~ var_1_100)))) {
		var_1_113 = (min ((abs (min (var_1_48 , var_1_69))) , var_1_47));
	}


	// From: CodeObject46
	if (var_1_95 < ((var_1_43 / var_1_91) * var_1_74)) {
		var_1_114 = (max ((abs (7.7)) , (abs (min (256.75 , var_1_37)))));
	}


	// From: CodeObject47
	if (var_1_60 > (var_1_59 * var_1_112)) {
		var_1_115 = (min (var_1_37 , (abs (var_1_44))));
	}


	// From: CodeObject48
	if (var_1_88) {
		if ((var_1_54 | var_1_66) <= var_1_56) {
			if (var_1_102) {
				if (var_1_91 <= var_1_89) {
					var_1_116 = (100 + var_1_34);
				}
			}
		} else {
			var_1_116 = var_1_46;
		}
	} else {
		var_1_116 = var_1_98;
	}


	// From: CodeObject49
	if (var_1_88) {
		var_1_117 = var_1_113;
	}


	// From: CodeObject50
	if (var_1_102) {
		var_1_118 = var_1_58;
	} else {
		var_1_118 = -25;
	}


	// From: CodeObject51
	if (var_1_63) {
		var_1_119 = var_1_53;
	} else {
		var_1_119 = var_1_113;
	}


	// From: CodeObject52
	if (var_1_102) {
		var_1_120 = var_1_45;
	} else {
		var_1_120 = var_1_67;
	}


	// From: CodeObject53
	if (var_1_40) {
		var_1_121 = var_1_78;
	}


	// From: CodeObject54
	if (var_1_40) {
		var_1_122 = var_1_47;
	}


	// From: CodeObject55
	if (var_1_64) {
		var_1_123 = var_1_91;
	} else {
		var_1_123 = 100.02;
	}


	// From: CodeObject56
	if (var_1_125) {
		var_1_124 = var_1_69;
	}


	// From: CodeObject57
	if (var_1_88) {
		var_1_126 = var_1_102;
	} else {
		var_1_126 = var_1_103;
	}


	// From: CodeObject58
	if (var_1_64) {
		var_1_127 = var_1_116;
	}


	// From: CodeObject59
	var_1_128 = var_1_36;


	// From: CodeObject60
	if (var_1_102) {
		var_1_129 = var_1_48;
	}


	// From: CodeObject61
	if (var_1_62) {
		var_1_130 = var_1_31;
	}


	// From: CodeObject62
	if (var_1_61) {
		var_1_131 = var_1_60;
	}


	// From: CodeObject63
	if (var_1_125) {
		var_1_132 = var_1_36;
	} else {
		var_1_132 = 15.25f;
	}


	// From: CodeObject64
	if (4.4 >= var_1_37) {
		var_1_133 = (var_1_101 && (var_1_64 && var_1_102));
	}


	// From: CodeObject65
	if (var_1_119 <= 0) {
		var_1_134 = (min (var_1_58 , var_1_46));
	}


	// From: Req3Batch19PS_CN_500
	if (last_1_var_1_15) {
		var_1_10 = (var_1_12 || var_1_13);
	}


	// From: Req7Batch19PS_CN_500
	if (var_1_10) {
		var_1_24 = (max (var_1_25 , (abs (var_1_26))));
	} else {
		var_1_24 = (abs (var_1_27 - var_1_28));
	}


	// From: Req5Batch19PS_CN_500
	if ((- var_1_24) == (var_1_24 + var_1_24)) {
		var_1_15 = var_1_12;
	}


	// From: Req6Batch19PS_CN_500
	if (var_1_24 == (max ((max (3.3 , var_1_24)) , (var_1_24 / var_1_21)))) {
		if (var_1_10) {
			var_1_19 = (var_1_3 + (min (var_1_2 , var_1_23)));
		} else {
			var_1_19 = (var_1_3 - 8);
		}
	} else {
		var_1_19 = var_1_2;
	}


	// From: Req8Batch19PS_CN_500
	if (var_1_24 != var_1_24) {
		var_1_29 = (max (var_1_2 , var_1_3));
	}


	// From: Req2Batch19PS_CN_500
	signed long int stepLocal_1 = var_1_7 - (var_1_8 - var_1_2);
	if (stepLocal_1 >= var_1_29) {
		var_1_6 = (var_1_3 - (var_1_9 - var_1_2));
	}


	// From: Req4Batch19PS_CN_500
	if (var_1_15) {
		var_1_14 = (min ((abs (max (var_1_3 , var_1_2))) , var_1_9));
	}


	// From: Req1Batch19PS_CN_500
	signed long int stepLocal_0 = var_1_2 - var_1_3;
	if (stepLocal_0 <= (max (var_1_29 , var_1_6))) {
		var_1_1 = (max (var_1_2 , var_1_3));
	} else {
		var_1_1 = var_1_2;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 127);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65535);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 16383);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 16383);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	assume_abort_if_not(var_1_21 != 0.0F);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -16383);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854765600e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854765600e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854765600e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -461168.6018427382800e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -461168.6018427382800e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 32);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 31);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -63);
	assume_abort_if_not(var_1_48 <= 63);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -126);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 127);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 127);
	assume_abort_if_not(var_1_52 <= 254);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 127);
	assume_abort_if_not(var_1_53 <= 254);
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 32767);
	assume_abort_if_not(var_1_55 <= 65534);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 17);
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= -230584.3009213691390e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 2305843.009213691390e+12F && var_1_60 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 1);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 1);
	assume_abort_if_not(var_1_63 <= 1);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 1);
	assume_abort_if_not(var_1_64 <= 1);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 1);
	assume_abort_if_not(var_1_65 <= 1);
	var_1_68 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_68 >= -2147483648);
	assume_abort_if_not(var_1_68 <= 2147483647);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= 63);
	assume_abort_if_not(var_1_69 <= 126);
	var_1_81 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_81 >= 2147483647);
	assume_abort_if_not(var_1_81 <= 4294967294);
	var_1_82 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_82 >= 2147483647);
	assume_abort_if_not(var_1_82 <= 4294967294);
	var_1_83 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_83 >= 2147483647);
	assume_abort_if_not(var_1_83 <= 4294967294);
	var_1_84 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 2147483647);
	var_1_90 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_90 >= -461168.6018427382800e+13F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 4611686.018427382800e+12F && var_1_90 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_91 >= -922337.2036854765600e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= -461168.6018427382800e+13F && var_1_91 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_92 >= 0.0F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 4611686.018427382800e+12F && var_1_92 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_93 >= -922337.2036854765600e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 9223372.036854765600e+12F && var_1_93 >= 1.0e-20F ));
	var_1_96 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_96 >= -922337.2036854776000e+13F && var_1_96 <= -1.0e-20F) || (var_1_96 <= 9223372.036854776000e+12F && var_1_96 >= 1.0e-20F ));
	assume_abort_if_not(var_1_96 != 0.0F);
	var_1_98 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_98 >= 0);
	assume_abort_if_not(var_1_98 <= 254);
	var_1_102 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_102 >= 0);
	assume_abort_if_not(var_1_102 <= 0);
	var_1_103 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_103 >= 1);
	assume_abort_if_not(var_1_103 <= 1);
	var_1_110 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_110 >= 49150);
	assume_abort_if_not(var_1_110 <= 65534);
	var_1_125 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_125 >= 0);
	assume_abort_if_not(var_1_125 <= 1);
}



void updateLastVariables() {
	last_1_var_1_15 = var_1_15;
}

int property() {
	return (((((((((var_1_2 - var_1_3) <= (max (var_1_29 , var_1_6))) ? (var_1_1 == ((signed long int) (max (var_1_2 , var_1_3)))) : (var_1_1 == ((signed long int) var_1_2))) && (((var_1_7 - (var_1_8 - var_1_2)) >= var_1_29) ? (var_1_6 == ((signed short int) (var_1_3 - (var_1_9 - var_1_2)))) : 1)) && (last_1_var_1_15 ? (var_1_10 == ((unsigned char) (var_1_12 || var_1_13))) : 1)) && (var_1_15 ? (var_1_14 == ((signed short int) (min ((abs (max (var_1_3 , var_1_2))) , var_1_9)))) : 1)) && (((- var_1_24) == (var_1_24 + var_1_24)) ? (var_1_15 == ((unsigned char) var_1_12)) : 1)) && ((var_1_24 == (max ((max (3.3 , var_1_24)) , (var_1_24 / var_1_21)))) ? (var_1_10 ? (var_1_19 == ((signed short int) (var_1_3 + (min (var_1_2 , var_1_23))))) : (var_1_19 == ((signed short int) (var_1_3 - 8)))) : (var_1_19 == ((signed short int) var_1_2)))) && (var_1_10 ? (var_1_24 == ((float) (max (var_1_25 , (abs (var_1_26)))))) : (var_1_24 == ((float) (abs (var_1_27 - var_1_28)))))) && ((var_1_24 != var_1_24) ? (var_1_29 == ((unsigned short int) (max (var_1_2 , var_1_3)))) : 1)
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
