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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch97PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 2;
signed long int var_1_5 = 5;
unsigned char var_1_8 = 0;
float var_1_9 = 128.6;
float var_1_10 = 32.5;
unsigned char var_1_11 = 16;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 4;
unsigned char var_1_14 = 4;
unsigned long int var_1_15 = 0;
signed short int var_1_16 = 0;
signed char var_1_17 = 1;
signed char var_1_18 = -1;
signed char var_1_19 = 0;
signed long int var_1_20 = -64;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed short int var_1_24 = -4;
unsigned char var_1_25 = 1;
signed char var_1_26 = 50;
signed char var_1_27 = 64;
signed short int var_1_28 = 4;
unsigned short int var_1_29 = 8;
unsigned char var_1_30 = 16;
unsigned short int var_1_31 = 8;
unsigned short int var_1_32 = 2;
unsigned short int var_1_33 = 48701;
unsigned short int var_1_34 = 1;
float var_1_35 = 1.2;
float var_1_36 = 7.5;
float var_1_37 = 32.25;
unsigned char var_1_38 = 1;
float var_1_39 = 100000000000.5;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
signed long int var_1_44 = -2;
unsigned short int var_1_45 = 1;
unsigned short int var_1_46 = 32;
unsigned char var_1_47 = 64;
signed short int var_1_48 = 32;
unsigned char var_1_49 = 25;
unsigned char var_1_50 = 2;
unsigned char var_1_51 = 64;
unsigned char var_1_52 = 128;
unsigned long int var_1_53 = 1;
signed short int var_1_54 = -500;
unsigned char var_1_55 = 4;
unsigned char var_1_56 = 8;
unsigned char var_1_57 = 0;
double var_1_58 = 128.9;
unsigned char var_1_59 = 1;
unsigned char var_1_60 = 0;
unsigned long int var_1_61 = 16;
signed long int var_1_62 = -25;
signed long int var_1_63 = -8;
signed short int var_1_64 = -5;
signed short int var_1_65 = -4;
float var_1_66 = 9999999999.4;
double var_1_67 = 0.0;
double var_1_68 = 4.1;
double var_1_69 = 10.2;
double var_1_70 = 24.75;
double var_1_71 = 15.5;
double var_1_72 = 31.5;
float var_1_73 = 100000.4;
signed long int var_1_74 = -256;
signed long int var_1_75 = 5;
unsigned short int var_1_76 = 128;
double var_1_77 = 10.705;
unsigned char var_1_78 = 100;
unsigned short int var_1_79 = 10;
signed char var_1_80 = 2;
signed char var_1_81 = 1;
signed char var_1_82 = 25;
signed char var_1_83 = 8;
float var_1_84 = 0.19999999999999996;
float var_1_85 = 499.57;
float var_1_86 = 128.75;
float var_1_87 = 1000000000000.4;
float var_1_88 = 100.7;
signed short int var_1_89 = -8;
signed short int var_1_90 = 256;
signed short int var_1_91 = 4;
float var_1_92 = 16.6;
unsigned short int var_1_93 = 32;
signed short int var_1_94 = 256;
float var_1_95 = 200.25;
float var_1_96 = 50.6;
float var_1_97 = 49.3;
unsigned short int var_1_98 = 256;
unsigned long int var_1_99 = 50;
signed long int var_1_100 = -50;
double var_1_101 = 200.25;
unsigned char var_1_102 = 50;
unsigned long int var_1_103 = 32;
unsigned long int var_1_104 = 2;
unsigned long int var_1_105 = 2046115323;
unsigned long int var_1_106 = 3425035641;
unsigned char var_1_107 = 16;
unsigned char var_1_108 = 0;
signed char var_1_109 = -8;
signed char var_1_110 = 32;
unsigned char var_1_111 = 50;
signed char var_1_112 = 0;
unsigned char var_1_113 = 8;
unsigned short int var_1_114 = 8;
double var_1_115 = 0.18;
unsigned char var_1_116 = 50;
float var_1_117 = 9.5;
signed long int var_1_118 = -10;
unsigned short int var_1_119 = 64;
unsigned char var_1_120 = 64;
signed long int var_1_121 = -16;
float var_1_122 = 4.25;
float var_1_123 = 9.83;
signed long int var_1_124 = -64;
signed short int var_1_125 = 0;
signed long int var_1_126 = 5;
unsigned long int var_1_127 = 1;
signed long int var_1_128 = -256;
float var_1_129 = 128.5;
signed short int var_1_130 = 25;
unsigned long int var_1_131 = 8;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_5 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_25) {
		if (var_1_27 <= var_1_26) {
			var_1_24 = ((max (var_1_27 , (min (-128 , var_1_26)))) + var_1_28);
		}
	} else {
		var_1_24 = (abs (var_1_26));
	}


	// From: CodeObject2
	if ((var_1_26 / var_1_30) < var_1_27) {
		var_1_29 = var_1_30;
	} else {
		var_1_29 = (max ((max ((min (var_1_30 , var_1_31)) , var_1_32)) , ((abs (var_1_33)) - var_1_34)));
	}


	// From: CodeObject3
	if (var_1_25) {
		var_1_35 = (abs (max ((max (var_1_36 , var_1_37)) , 255.6f)));
	} else {
		if ((var_1_30 ^ var_1_28) >= var_1_33) {
			if (((abs (var_1_37)) + (abs (var_1_36))) < var_1_39) {
				var_1_35 = var_1_36;
			} else {
				var_1_35 = var_1_37;
			}
		}
	}


	// From: CodeObject4
	if (var_1_30 < (var_1_34 >> var_1_32)) {
		var_1_40 = ((! var_1_41) || (var_1_42 || var_1_43));
	}


	// From: CodeObject5
	if ((~ var_1_30) >= var_1_33) {
		var_1_44 = (abs (abs (var_1_34 - var_1_31)));
	}


	// From: CodeObject6
	if (var_1_33 < var_1_29) {
		if (var_1_31 == (~ var_1_33)) {
			var_1_45 = (abs (var_1_32));
		} else {
			var_1_45 = (var_1_33 - (var_1_30 + var_1_46));
		}
	} else {
		var_1_45 = var_1_34;
	}


	// From: CodeObject7
	if (var_1_32 < (var_1_33 - var_1_34)) {
		if ((~ var_1_48) > var_1_45) {
			if ((- (var_1_36 + var_1_35)) < (abs (var_1_37))) {
				if ((max (var_1_37 , var_1_39)) <= var_1_35) {
					var_1_47 = var_1_49;
				}
			} else {
				if ((abs (var_1_49)) > (var_1_46 + var_1_26)) {
					var_1_47 = (min (64 , ((abs (var_1_50)) + var_1_51)));
				}
			}
		} else {
			var_1_47 = (max (var_1_50 , var_1_49));
		}
	} else {
		var_1_47 = (abs (var_1_52 - var_1_50));
	}


	// From: CodeObject8
	if (var_1_28 < var_1_46) {
		var_1_53 = (abs (var_1_45));
	}


	// From: CodeObject9
	if (var_1_41 && var_1_42) {
		var_1_54 = (var_1_51 - (21537 - var_1_52));
	} else {
		var_1_54 = (var_1_47 + 1);
	}


	// From: CodeObject10
	if ((abs (var_1_44 * var_1_47)) > (var_1_33 / var_1_30)) {
		var_1_55 = (min (var_1_49 , (128 - 10)));
	} else {
		var_1_55 = (abs (5));
	}


	// From: CodeObject11
	if (var_1_47 > ((1 & var_1_53) | var_1_55)) {
		var_1_56 = (abs (var_1_51));
	}


	// From: CodeObject12
	if (var_1_34 <= var_1_45) {
		var_1_57 = (var_1_40 && (! var_1_41));
	}


	// From: CodeObject13
	if (var_1_42) {
		var_1_58 = var_1_37;
	} else {
		var_1_58 = (abs (var_1_36));
	}


	// From: CodeObject14
	if (((var_1_47 >> var_1_33) * var_1_49) < -128) {
		if (var_1_38) {
			var_1_59 = (var_1_41 && var_1_60);
		} else {
			var_1_59 = (var_1_41 && var_1_43);
		}
	}


	// From: CodeObject15
	if ((var_1_58 + var_1_37) <= (var_1_36 + var_1_35)) {
		if ((abs (var_1_51)) <= (min (var_1_52 , var_1_47))) {
			if ((var_1_33 - var_1_56) <= ((var_1_44 / var_1_52) | var_1_24)) {
				var_1_61 = 50u;
			} else {
				var_1_61 = (abs (var_1_30));
			}
		}
	} else {
		var_1_61 = (abs (var_1_32));
	}


	// From: CodeObject16
	if (((var_1_39 / -0.8f) + var_1_37) <= (max (var_1_35 , (var_1_58 + var_1_36)))) {
		var_1_62 = (abs (min (var_1_51 , (abs (var_1_31)))));
	}


	// From: CodeObject17
	if (var_1_46 < var_1_30) {
		var_1_63 = (max (var_1_24 , var_1_51));
	}


	// From: CodeObject18
	if (var_1_42) {
		if (var_1_63 >= -16) {
			var_1_64 = (abs (max (var_1_52 , var_1_51)));
		}
	} else {
		var_1_64 = (min (var_1_65 , (abs (var_1_27))));
	}


	// From: CodeObject19
	if (((var_1_67 - var_1_68) - (min (var_1_69 , var_1_70))) > (max (1.75 , (var_1_71 - var_1_72)))) {
		var_1_66 = (var_1_68 - var_1_73);
	}


	// From: CodeObject20
	if (var_1_60) {
		var_1_74 = var_1_30;
	} else {
		var_1_74 = (min (var_1_54 , var_1_75));
	}


	// From: CodeObject21
	if (! var_1_40) {
		var_1_76 = (abs (var_1_33 - var_1_56));
	} else {
		var_1_76 = (abs (var_1_46));
	}


	// From: CodeObject22
	if (var_1_42) {
		var_1_77 = var_1_68;
	}


	// From: CodeObject23
	if (var_1_59) {
		var_1_78 = var_1_49;
	} else {
		var_1_78 = var_1_49;
	}


	// From: CodeObject24
	if (var_1_40) {
		var_1_79 = var_1_32;
	}


	// From: CodeObject25
	if ((abs (var_1_47)) != (var_1_61 % var_1_30)) {
		var_1_80 = ((min (var_1_81 , (max (var_1_82 , var_1_83)))) - (abs (-64)));
	}


	// From: CodeObject26
	if (var_1_76 > var_1_56) {
		var_1_84 = ((abs (var_1_73 - var_1_68)) - (var_1_85 + var_1_86));
	} else {
		var_1_84 = (max (var_1_87 , var_1_88));
	}


	// From: CodeObject27
	if ((abs (var_1_77)) <= var_1_71) {
		if (var_1_66 <= ((var_1_86 + var_1_68) - 4.75f)) {
			if (! (var_1_34 >= (min (var_1_74 , var_1_44)))) {
				if ((abs (var_1_55)) < ((abs (var_1_52)) / var_1_33)) {
					var_1_89 = ((abs (var_1_27)) + (2 - var_1_55));
				} else {
					var_1_89 = 64;
				}
			} else {
				var_1_89 = ((abs (var_1_83)) - (var_1_56 + var_1_52));
			}
		}
	}


	// From: CodeObject28
	if ((abs (- var_1_70)) == var_1_72) {
		var_1_90 = (min (var_1_91 , -8));
	}


	// From: CodeObject29
	if (var_1_34 == (var_1_49 ^ (var_1_31 % var_1_52))) {
		if ((abs (max (var_1_84 , var_1_85))) <= var_1_35) {
			var_1_92 = (var_1_68 - var_1_85);
		}
	}


	// From: CodeObject30
	if (var_1_46 > var_1_51) {
		if ((abs (max (var_1_64 , var_1_33))) == (min (var_1_74 , var_1_83))) {
			var_1_93 = (min (var_1_32 , (abs (var_1_56))));
		} else {
			if (((abs (var_1_61)) >= (- var_1_33)) && var_1_60) {
				var_1_93 = (min ((min (var_1_31 , (var_1_33 - var_1_47))) , var_1_51));
			}
		}
	}


	// From: CodeObject31
	if (var_1_68 != (- var_1_72)) {
		var_1_94 = var_1_91;
	}


	// From: CodeObject32
	if ((var_1_83 + 1) >= var_1_64) {
		var_1_95 = (abs (var_1_85));
	} else {
		var_1_95 = (max (var_1_88 , (var_1_85 + var_1_96)));
	}


	// From: CodeObject33
	if ((var_1_33 * var_1_30) >= var_1_93) {
		var_1_97 = ((49.125f + var_1_85) - var_1_73);
	} else {
		var_1_97 = (var_1_86 - var_1_73);
	}


	// From: CodeObject34
	if (4 >= var_1_31) {
		var_1_98 = var_1_52;
	} else {
		var_1_98 = (abs (var_1_49));
	}


	// From: CodeObject35
	if (((var_1_89 & var_1_83) > var_1_76) && var_1_43) {
		var_1_99 = ((abs (2359274477u)) - var_1_34);
	}


	// From: CodeObject36
	if (var_1_88 > (var_1_70 - (min (200.625f , var_1_85)))) {
		var_1_100 = var_1_32;
	} else {
		var_1_100 = ((max (var_1_30 , (16 - var_1_47))) + (max (var_1_32 , (min (var_1_81 , var_1_26)))));
	}


	// From: CodeObject37
	if ((var_1_52 - var_1_102) < var_1_56) {
		if (var_1_40) {
			var_1_101 = var_1_87;
		} else {
			var_1_101 = var_1_96;
		}
	} else {
		var_1_101 = (abs (max (var_1_87 , var_1_68)));
	}


	// From: CodeObject38
	if (var_1_45 > var_1_93) {
		if ((var_1_99 + (- var_1_104)) > var_1_31) {
			var_1_103 = (min (((var_1_105 + 1787831492u) - var_1_79) , (min (var_1_98 , var_1_93))));
		} else {
			var_1_103 = (abs ((var_1_106 - var_1_45) - var_1_30));
		}
	}


	// From: CodeObject39
	if (var_1_64 <= var_1_105) {
		var_1_107 = (var_1_52 - (min (var_1_51 , (abs (var_1_50)))));
	} else {
		var_1_107 = ((max (var_1_52 , 128)) - (abs (1 + var_1_108)));
	}


	// From: CodeObject40
	if ((- (abs (var_1_35))) >= (- var_1_77)) {
		if ((~ (var_1_53 >> var_1_100)) >= var_1_51) {
			var_1_109 = (min ((max (var_1_83 , (var_1_108 + var_1_110))) , var_1_82));
		}
	} else {
		var_1_109 = (abs (var_1_81));
	}


	// From: CodeObject41
	if ((~ var_1_34) >= var_1_100) {
		var_1_111 = ((abs (var_1_108)) + (abs (max (var_1_50 , 0))));
	}


	// From: CodeObject42
	if (var_1_38 || (var_1_58 != (var_1_85 * var_1_77))) {
		var_1_112 = (abs (max (32 , var_1_108)));
	}


	// From: CodeObject43
	if (var_1_38) {
		if (var_1_66 < var_1_69) {
			var_1_113 = var_1_50;
		} else {
			var_1_113 = (min ((abs (var_1_51)) , var_1_108));
		}
	} else {
		if ((abs (var_1_102 >> var_1_54)) <= var_1_29) {
			var_1_113 = (max (var_1_52 , 5));
		} else {
			var_1_113 = (abs (min ((max (var_1_49 , var_1_108)) , var_1_51)));
		}
	}


	// From: CodeObject44
	if (var_1_59) {
		var_1_114 = (abs (var_1_51));
	} else {
		if (var_1_115 <= (var_1_35 * var_1_72)) {
			var_1_114 = (((abs (var_1_47)) + var_1_56) + 2);
		} else {
			if (((var_1_32 + var_1_102) - var_1_98) > (var_1_61 + -16)) {
				var_1_114 = (max (var_1_108 , var_1_51));
			} else {
				var_1_114 = (5 + var_1_50);
			}
		}
	}


	// From: CodeObject45
	if ((var_1_99 * (var_1_34 | var_1_63)) < var_1_32) {
		var_1_116 = var_1_102;
	} else {
		if (var_1_45 >= var_1_53) {
			var_1_116 = ((abs (var_1_52)) - var_1_50);
		} else {
			var_1_116 = (abs (var_1_49));
		}
	}


	// From: CodeObject46
	var_1_117 = (max (100.5f , (10.8f + 0.19999999999999996f)));


	// From: CodeObject47
	if (var_1_113 == (var_1_52 - var_1_108)) {
		var_1_118 = var_1_24;
	} else {
		var_1_118 = (abs (var_1_79));
	}


	// From: CodeObject48
	if (! var_1_60) {
		var_1_119 = (max (var_1_47 , (var_1_33 - var_1_55)));
	}


	// From: CodeObject49
	if (var_1_33 > var_1_113) {
		var_1_120 = (var_1_52 - ((abs (var_1_108)) + (32 - 25)));
	} else {
		var_1_120 = (abs (var_1_108));
	}


	// From: CodeObject50
	if (! var_1_60) {
		if ((max (var_1_36 , var_1_92)) >= var_1_87) {
			if ((min ((var_1_48 >> var_1_81) , (var_1_75 * var_1_64))) < (min (var_1_54 , 64))) {
				if (var_1_41) {
					var_1_121 = var_1_27;
				}
			} else {
				var_1_121 = var_1_98;
			}
		}
	}


	// From: CodeObject51
	var_1_122 = var_1_68;


	// From: CodeObject52
	var_1_123 = var_1_88;


	// From: CodeObject53
	if (var_1_60) {
		var_1_124 = 1;
	} else {
		var_1_124 = var_1_45;
	}


	// From: CodeObject54
	var_1_125 = var_1_46;


	// From: CodeObject55
	if (var_1_60) {
		var_1_126 = var_1_33;
	}


	// From: CodeObject56
	if (var_1_60) {
		var_1_127 = var_1_78;
	}


	// From: CodeObject57
	if (var_1_25) {
		var_1_128 = var_1_90;
	} else {
		var_1_128 = var_1_75;
	}


	// From: CodeObject58
	if (var_1_43) {
		var_1_129 = var_1_87;
	}


	// From: CodeObject59
	if (var_1_57) {
		var_1_130 = var_1_91;
	} else {
		var_1_130 = var_1_113;
	}


	// From: CodeObject60
	if ((min (var_1_37 , 9.3)) <= 24.65) {
		if (var_1_41) {
			if (((var_1_124 * var_1_93) * var_1_44) > var_1_63) {
				var_1_131 = (abs (var_1_120));
			} else {
				var_1_131 = var_1_106;
			}
		} else {
			var_1_131 = var_1_32;
		}
	} else {
		var_1_131 = 10u;
	}


	// From: Req3Batch97PS_CN_500
	if (var_1_9 > var_1_10) {
		var_1_8 = (min ((var_1_11 + (var_1_12 - var_1_13)) , (5 + var_1_14)));
	}


	// From: Req7Batch97PS_CN_500
	var_1_20 = var_1_8;


	// From: Req8Batch97PS_CN_500
	var_1_22 = var_1_23;


	// From: Req4Batch97PS_CN_500
	if (var_1_22) {
		var_1_15 = var_1_8;
	}


	// From: Req5Batch97PS_CN_500
	var_1_16 = ((min (var_1_15 , (max (var_1_13 , var_1_12)))) - var_1_11);


	// From: Req6Batch97PS_CN_500
	if (var_1_22) {
		if (var_1_14 < (var_1_13 & (var_1_15 / 2))) {
			var_1_17 = (var_1_13 + (var_1_18 + (var_1_19 + 5)));
		} else {
			var_1_17 = var_1_18;
		}
	} else {
		var_1_17 = -32;
	}


	// From: Req1Batch97PS_CN_500
	unsigned long int stepLocal_1 = var_1_20 + var_1_15;
	signed long int stepLocal_0 = var_1_20;
	if (stepLocal_1 < -200) {
		if (var_1_22) {
			if (stepLocal_0 > (- var_1_15)) {
				var_1_1 = var_1_20;
			} else {
				var_1_1 = var_1_20;
			}
		} else {
			var_1_1 = var_1_20;
		}
	} else {
		var_1_1 = var_1_20;
	}


	// From: Req2Batch97PS_CN_500
	signed long int stepLocal_4 = 256;
	unsigned char stepLocal_3 = var_1_22;
	unsigned long int stepLocal_2 = var_1_15;
	if (stepLocal_4 > (var_1_15 - (last_1_var_1_5 + var_1_8))) {
		var_1_5 = last_1_var_1_5;
	} else {
		if (stepLocal_3 || var_1_22) {
			if (((32 * -25) | last_1_var_1_5) >= stepLocal_2) {
				var_1_5 = var_1_8;
			}
		} else {
			var_1_5 = -10000;
		}
	}
}



void updateVariables() {
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 63);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -31);
	assume_abort_if_not(var_1_18 <= 32);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -15);
	assume_abort_if_not(var_1_19 <= 16);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -127);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -16383);
	assume_abort_if_not(var_1_28 <= 16383);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 255);
	assume_abort_if_not(var_1_30 != 0);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 32767);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 32767);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 16383);
	var_1_48 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_48 >= -32768);
	assume_abort_if_not(var_1_48 <= 32767);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 254);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 127);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 127);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 127);
	assume_abort_if_not(var_1_52 <= 254);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 1);
	assume_abort_if_not(var_1_60 <= 1);
	var_1_65 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_65 >= -32767);
	assume_abort_if_not(var_1_65 <= 32766);
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 4611686.018427387900e+12F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854776000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 4611686.018427387900e+12F && var_1_68 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854776000e+12F && var_1_69 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854776000e+12F && var_1_70 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854776000e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854776000e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854765600e+12F && var_1_73 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_75 >= -2147483647);
	assume_abort_if_not(var_1_75 <= 2147483646);
	var_1_81 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_81 >= -1);
	assume_abort_if_not(var_1_81 <= 126);
	var_1_82 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_82 >= -1);
	assume_abort_if_not(var_1_82 <= 126);
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= -1);
	assume_abort_if_not(var_1_83 <= 126);
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 4611686.018427382800e+12F && var_1_85 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_86 >= 0.0F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 4611686.018427382800e+12F && var_1_86 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_87 >= -922337.2036854765600e+13F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 9223372.036854765600e+12F && var_1_87 >= 1.0e-20F ));
	var_1_88 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_88 >= -922337.2036854765600e+13F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 9223372.036854765600e+12F && var_1_88 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_91 >= -32767);
	assume_abort_if_not(var_1_91 <= 32766);
	var_1_96 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_96 >= -461168.6018427382800e+13F && var_1_96 <= -1.0e-20F) || (var_1_96 <= 4611686.018427382800e+12F && var_1_96 >= 1.0e-20F ));
	var_1_102 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_102 >= 0);
	assume_abort_if_not(var_1_102 <= 127);
	var_1_104 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_104 >= 0);
	assume_abort_if_not(var_1_104 <= 4294967295);
	var_1_105 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_105 >= 1073741823);
	assume_abort_if_not(var_1_105 <= 2147483647);
	var_1_106 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_106 >= 3221225470);
	assume_abort_if_not(var_1_106 <= 4294967294);
	var_1_108 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_108 >= 0);
	assume_abort_if_not(var_1_108 <= 63);
	var_1_110 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_110 >= -63);
	assume_abort_if_not(var_1_110 <= 63);
	var_1_115 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_115 >= -922337.2036854776000e+13F && var_1_115 <= -1.0e-20F) || (var_1_115 <= 9223372.036854776000e+12F && var_1_115 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_5 = var_1_5;
}

int property() {
	return (((((((((var_1_20 + var_1_15) < -200) ? (var_1_22 ? ((var_1_20 > (- var_1_15)) ? (var_1_1 == ((unsigned long int) var_1_20)) : (var_1_1 == ((unsigned long int) var_1_20))) : (var_1_1 == ((unsigned long int) var_1_20))) : (var_1_1 == ((unsigned long int) var_1_20))) && ((256 > (var_1_15 - (last_1_var_1_5 + var_1_8))) ? (var_1_5 == ((signed long int) last_1_var_1_5)) : ((var_1_22 || var_1_22) ? ((((32 * -25) | last_1_var_1_5) >= var_1_15) ? (var_1_5 == ((signed long int) var_1_8)) : 1) : (var_1_5 == ((signed long int) -10000))))) && ((var_1_9 > var_1_10) ? (var_1_8 == ((unsigned char) (min ((var_1_11 + (var_1_12 - var_1_13)) , (5 + var_1_14))))) : 1)) && (var_1_22 ? (var_1_15 == ((unsigned long int) var_1_8)) : 1)) && (var_1_16 == ((signed short int) ((min (var_1_15 , (max (var_1_13 , var_1_12)))) - var_1_11)))) && (var_1_22 ? ((var_1_14 < (var_1_13 & (var_1_15 / 2))) ? (var_1_17 == ((signed char) (var_1_13 + (var_1_18 + (var_1_19 + 5))))) : (var_1_17 == ((signed char) var_1_18))) : (var_1_17 == ((signed char) -32)))) && (var_1_20 == ((signed long int) var_1_8))) && (var_1_22 == ((unsigned char) var_1_23))
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
