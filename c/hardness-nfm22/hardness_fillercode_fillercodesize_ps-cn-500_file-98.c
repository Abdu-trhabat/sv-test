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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch98PS_CN_500.c", 13, "reach_error"); }
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
signed short int var_1_4 = -10;
signed short int var_1_5 = 100;
double var_1_6 = 0.5;
double var_1_7 = 16.5;
double var_1_8 = 7.4;
unsigned short int var_1_9 = 4;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 1000000000;
unsigned short int var_1_12 = 256;
signed short int var_1_13 = 16;
signed short int var_1_14 = 64;
unsigned short int var_1_15 = 63836;
unsigned short int var_1_16 = 10;
signed char var_1_17 = -8;
signed char var_1_18 = 8;
signed short int var_1_19 = 50;
signed short int var_1_20 = 10;
signed short int var_1_21 = 10000;
signed char var_1_22 = -2;
float var_1_23 = 3.2;
unsigned long int var_1_24 = 128;
unsigned long int var_1_25 = 2;
unsigned long int var_1_26 = 16;
unsigned long int var_1_27 = 2686167646;
unsigned long int var_1_28 = 5;
float var_1_29 = 5.5;
float var_1_30 = 255.2;
float var_1_31 = 10.2;
float var_1_32 = 24.5;
double var_1_33 = 3.375;
double var_1_34 = 5.5;
signed long int var_1_35 = -256;
unsigned short int var_1_36 = 32;
unsigned char var_1_37 = 1;
signed long int var_1_38 = -10;
signed long int var_1_39 = -4;
signed long int var_1_40 = 64;
unsigned char var_1_41 = 0;
signed long int var_1_42 = 128;
unsigned short int var_1_43 = 25;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 200;
unsigned char var_1_46 = 100;
unsigned char var_1_47 = 2;
unsigned short int var_1_48 = 64;
unsigned short int var_1_49 = 32559;
unsigned char var_1_50 = 10;
signed short int var_1_51 = 8;
double var_1_52 = 25.25;
unsigned char var_1_53 = 1;
float var_1_54 = 7.5;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 32;
unsigned char var_1_58 = 1;
signed long int var_1_59 = -16;
float var_1_60 = 24.6;
unsigned long int var_1_61 = 100000000;
float var_1_62 = 4.25;
signed char var_1_63 = -50;
signed char var_1_64 = 10;
signed char var_1_65 = 8;
signed short int var_1_66 = -2;
unsigned long int var_1_67 = 2;
unsigned long int var_1_68 = 3615733193;
unsigned long int var_1_69 = 128;
signed long int var_1_70 = 16;
double var_1_71 = 0.0;
double var_1_72 = 10.125;
signed char var_1_73 = 0;
signed char var_1_74 = 16;
signed char var_1_75 = 0;
signed char var_1_76 = -1;
signed char var_1_77 = 0;
signed char var_1_78 = 8;
signed char var_1_79 = -16;
unsigned long int var_1_80 = 50;
unsigned char var_1_81 = 16;
float var_1_82 = 31.8;
unsigned char var_1_83 = 0;
float var_1_84 = 16.4;
float var_1_85 = 255.5;
double var_1_86 = 100000000000.25;
double var_1_87 = 0.0;
unsigned long int var_1_88 = 16;
signed char var_1_89 = 0;
double var_1_90 = 0.07499999999999996;
unsigned char var_1_91 = 5;
unsigned char var_1_92 = 5;
float var_1_93 = 200.5;
signed short int var_1_94 = -256;
unsigned char var_1_95 = 1;
unsigned char var_1_96 = 0;
unsigned char var_1_97 = 5;
signed long int var_1_98 = -5;
signed short int var_1_99 = 128;
double var_1_100 = 50.8;
unsigned long int var_1_101 = 4;
unsigned char var_1_102 = 0;
unsigned char var_1_103 = 0;
float var_1_104 = 64.8;
signed short int var_1_105 = 5;
signed short int var_1_106 = -5;
signed short int var_1_107 = 50;
unsigned char var_1_108 = 0;
signed long int var_1_109 = 256;
signed short int var_1_110 = -25;
signed char var_1_111 = 5;
signed char var_1_112 = 2;
signed char var_1_113 = 32;
signed long int var_1_114 = 10;
signed short int var_1_115 = -5;
unsigned char var_1_116 = 2;
unsigned char var_1_117 = 1;
double var_1_118 = 0.6;
unsigned char var_1_119 = 4;
unsigned short int var_1_120 = 10;
signed long int var_1_121 = 32;
float var_1_122 = 128.8;
signed long int var_1_123 = -128;
unsigned char var_1_124 = 32;
signed char var_1_125 = -5;
unsigned char var_1_126 = 0;
unsigned short int var_1_127 = 64;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((max ((abs (var_1_24)) , 2u)) > (var_1_25 & var_1_26)) {
		if (var_1_25 >= (var_1_27 - var_1_28)) {
			if (var_1_25 >= var_1_28) {
				var_1_23 = var_1_29;
			} else {
				var_1_23 = (min (var_1_30 , ((15.25f + var_1_31) - var_1_32)));
			}
		}
	} else {
		if ((abs (var_1_30)) < var_1_32) {
			var_1_23 = (abs (var_1_31));
		}
	}


	// From: CodeObject2
	if (var_1_23 != 8.8f) {
		var_1_33 = (min ((abs (var_1_32)) , var_1_34));
	} else {
		var_1_33 = (abs (var_1_32));
	}


	// From: CodeObject3
	if ((- (abs (24.7))) <= var_1_32) {
		if (var_1_23 >= var_1_33) {
			if ((min ((var_1_28 << var_1_24) , var_1_25)) >= var_1_26) {
				var_1_35 = var_1_36;
			}
		}
	} else {
		if (25u > (var_1_27 - (abs (var_1_36)))) {
			if (var_1_37) {
				var_1_35 = (max ((min (var_1_36 , var_1_38)) , (var_1_39 + var_1_40)));
			} else {
				if (var_1_41) {
					var_1_35 = (var_1_36 + var_1_40);
				} else {
					var_1_35 = (min (var_1_36 , var_1_40));
				}
			}
		} else {
			var_1_35 = var_1_38;
		}
	}


	// From: CodeObject4
	if (var_1_28 == (abs (- var_1_27))) {
		var_1_42 = var_1_36;
	}


	// From: CodeObject5
	var_1_43 = 5;


	// From: CodeObject6
	if (var_1_37 && var_1_41) {
		var_1_44 = ((max (var_1_45 , 128)) - (abs (max (var_1_46 , var_1_47))));
	} else {
		if ((var_1_47 == var_1_38) || var_1_37) {
			var_1_44 = var_1_47;
		}
	}


	// From: CodeObject7
	if (var_1_30 <= var_1_34) {
		var_1_48 = (var_1_47 + ((max (27901 , var_1_49)) - (var_1_46 + var_1_44)));
	}


	// From: CodeObject8
	if (((2u / 25u) / 100u) <= var_1_43) {
		if (var_1_41) {
			var_1_50 = (abs (var_1_46));
		} else {
			if ((max (var_1_39 , var_1_40)) > var_1_25) {
				var_1_50 = (min (var_1_47 , var_1_46));
			} else {
				var_1_50 = ((abs (var_1_45)) - (abs (var_1_46)));
			}
		}
	}


	// From: CodeObject9
	if (((var_1_33 * var_1_32) / (abs (var_1_52))) >= (abs (var_1_34))) {
		if (var_1_24 >= var_1_47) {
			var_1_51 = var_1_46;
		} else {
			var_1_51 = var_1_45;
		}
	} else {
		var_1_51 = var_1_46;
	}


	// From: CodeObject10
	if (var_1_28 > var_1_35) {
		if ((var_1_46 + var_1_38) > var_1_28) {
			var_1_53 = (! (! (var_1_55 && var_1_56)));
		}
	}


	// From: CodeObject11
	if (var_1_48 < var_1_51) {
		if ((max (var_1_40 , (500 + var_1_42))) > -5) {
			var_1_57 = (min ((var_1_46 + var_1_47) , (max (var_1_45 , var_1_58))));
		}
	}


	// From: CodeObject12
	var_1_59 = (abs (-1000));


	// From: CodeObject13
	if ((min (var_1_49 , var_1_44)) <= -5) {
		if ((abs (15.2f + var_1_30)) >= (- (min (0.625f , var_1_33)))) {
			if (1 >= (abs (abs (var_1_50)))) {
				if (! ((var_1_45 - var_1_28) <= (~ var_1_61))) {
					var_1_60 = (abs (var_1_32 - var_1_31));
				} else {
					var_1_60 = (abs (var_1_31));
				}
			} else {
				var_1_60 = (4.2f + (abs (var_1_31)));
			}
		} else {
			var_1_60 = var_1_32;
		}
	}


	// From: CodeObject14
	var_1_62 = (max ((abs (var_1_32)) , var_1_31));


	// From: CodeObject15
	if (var_1_51 <= (abs (var_1_50))) {
		var_1_63 = ((abs (var_1_64)) - var_1_65);
	} else {
		var_1_63 = var_1_65;
	}


	// From: CodeObject16
	if (var_1_50 >= (var_1_58 >> var_1_36)) {
		var_1_66 = (abs (var_1_45 + var_1_47));
	} else {
		var_1_66 = (abs (max ((abs (var_1_57)) , var_1_47)));
	}


	// From: CodeObject17
	if (var_1_43 >= var_1_51) {
		var_1_67 = (abs (var_1_68 - (var_1_49 + var_1_47)));
	}


	// From: CodeObject18
	if (var_1_26 > ((var_1_27 - var_1_58) * var_1_49)) {
		if (var_1_58 < (var_1_24 ^ var_1_57)) {
			if (var_1_54 > ((min (var_1_62 , 1.0000000000000006E15f)) / var_1_52)) {
				var_1_69 = (max (var_1_28 , var_1_49));
			}
		}
	}


	// From: CodeObject19
	if (var_1_34 > (- var_1_32)) {
		if (var_1_33 >= (var_1_31 - (var_1_71 - var_1_72))) {
			var_1_70 = (min ((var_1_39 + (min (var_1_36 , var_1_50))) , var_1_63));
		}
	}


	// From: CodeObject20
	if (var_1_32 < (var_1_60 + var_1_31)) {
		var_1_73 = ((min (var_1_65 , var_1_74)) - var_1_75);
	} else {
		var_1_73 = (max (var_1_74 , (abs (var_1_64))));
	}


	// From: CodeObject21
	if (var_1_36 < (abs (52229 - var_1_58))) {
		var_1_76 = (var_1_77 + var_1_78);
	}


	// From: CodeObject22
	if (var_1_48 < var_1_45) {
		var_1_79 = ((min ((abs (8)) , (abs (var_1_77)))) + var_1_78);
	} else {
		var_1_79 = (min ((max ((var_1_74 - var_1_65) , (2 - var_1_75))) , var_1_78));
	}


	// From: CodeObject23
	if (var_1_37) {
		var_1_80 = (abs (var_1_68 - var_1_58));
	} else {
		if ((var_1_57 | (~ var_1_36)) < (var_1_79 % (max (var_1_49 , 10)))) {
			if (var_1_58 == var_1_35) {
				var_1_80 = (max (var_1_49 , (min (var_1_50 , var_1_75))));
			} else {
				var_1_80 = var_1_46;
			}
		}
	}


	// From: CodeObject24
	if ((max (var_1_57 , (abs (1)))) > var_1_63) {
		var_1_81 = (abs (var_1_45));
	}


	// From: CodeObject25
	if (var_1_64 >= ((max (-16 , 4)) % (abs (2)))) {
		if ((var_1_45 - 10) < ((var_1_65 & var_1_40) / (max (var_1_49 , var_1_36)))) {
			if (var_1_83) {
				var_1_82 = (max ((var_1_31 + (var_1_84 + var_1_85)) , (var_1_32 - var_1_72)));
			}
		}
	}


	// From: CodeObject26
	if (var_1_56) {
		if (var_1_85 < var_1_84) {
			var_1_86 = (abs (min (64.5 , (max (var_1_34 , var_1_32)))));
		} else {
			var_1_86 = (min ((abs (abs (var_1_31))) , (abs (var_1_87))));
		}
	}


	// From: CodeObject27
	if (var_1_56) {
		if (var_1_27 < var_1_42) {
			var_1_88 = var_1_50;
		} else {
			var_1_88 = (max (var_1_47 , var_1_68));
		}
	} else {
		if (var_1_32 <= var_1_84) {
			var_1_88 = (max (var_1_36 , 256u));
		}
	}


	// From: CodeObject28
	if (var_1_71 <= var_1_30) {
		var_1_89 = (max (var_1_64 , var_1_75));
	}


	// From: CodeObject29
	if (var_1_69 < var_1_43) {
		if (var_1_66 < var_1_59) {
			var_1_90 = (min (var_1_87 , (min (var_1_31 , var_1_72))));
		} else {
			if ((~ var_1_78) <= (abs (var_1_43))) {
				if ((var_1_81 - var_1_45) != var_1_24) {
					if (var_1_50 > var_1_39) {
						var_1_90 = (abs (64.2));
					} else {
						var_1_90 = (abs (abs (var_1_85 + var_1_84)));
					}
				}
			} else {
				if ((var_1_74 - (abs (var_1_75))) > (var_1_80 >> (max (var_1_91 , var_1_92)))) {
					var_1_90 = (var_1_32 - var_1_72);
				}
			}
		}
	}


	// From: CodeObject30
	var_1_93 = (abs (abs (min (var_1_31 , var_1_87))));


	// From: CodeObject31
	if (var_1_25 >= var_1_47) {
		if (var_1_90 < (- (var_1_82 / var_1_52))) {
			var_1_94 = (abs (var_1_50));
		}
	} else {
		var_1_94 = (var_1_91 - (abs (max (var_1_75 , var_1_58))));
	}


	// From: CodeObject32
	if (var_1_41) {
		var_1_95 = (((max (var_1_58 , var_1_47)) == 16) || (! var_1_96));
	}


	// From: CodeObject33
	if ((var_1_42 + (var_1_76 / var_1_36)) < var_1_24) {
		var_1_97 = (max (var_1_47 , var_1_46));
	}


	// From: CodeObject34
	if (-1000000 < var_1_42) {
		if (var_1_87 <= var_1_29) {
			var_1_98 = var_1_36;
		}
	}


	// From: CodeObject35
	if (var_1_61 < (var_1_42 ^ (var_1_49 | var_1_59))) {
		if (var_1_98 <= (var_1_46 + var_1_42)) {
			var_1_99 = (abs (10000));
		}
	} else {
		if (var_1_47 < var_1_50) {
			if ((var_1_45 - var_1_75) < var_1_66) {
				var_1_99 = (max ((abs (var_1_91)) , -256));
			}
		}
	}


	// From: CodeObject36
	if ((var_1_34 + var_1_85) <= (abs (var_1_86))) {
		var_1_100 = (abs (min (var_1_31 , var_1_87)));
	} else {
		if ((max (var_1_33 , var_1_71)) < var_1_60) {
			var_1_100 = (max (var_1_84 , var_1_87));
		} else {
			var_1_100 = (abs (var_1_30));
		}
	}


	// From: CodeObject37
	if ((var_1_44 >> var_1_80) > var_1_97) {
		var_1_101 = 100u;
	}


	// From: CodeObject38
	if (var_1_96 || var_1_83) {
		if (var_1_59 >= var_1_80) {
			var_1_102 = ((var_1_56 && var_1_55) && (! (var_1_96 || var_1_103)));
		} else {
			if (var_1_71 >= var_1_52) {
				var_1_102 = (! var_1_103);
			}
		}
	}


	// From: CodeObject39
	if (var_1_88 > ((min (var_1_68 , 2430976617u)) - var_1_48)) {
		var_1_104 = ((min (var_1_84 , var_1_85)) + var_1_31);
	}


	// From: CodeObject40
	if (-8 <= var_1_73) {
		if (var_1_80 >= ((abs (var_1_68)) - var_1_91)) {
			if (var_1_94 > (var_1_77 >> var_1_28)) {
				var_1_105 = (abs (abs (var_1_64)));
			}
		}
	} else {
		var_1_105 = var_1_76;
	}


	// From: CodeObject41
	if (var_1_93 <= var_1_34) {
		var_1_106 = var_1_77;
	}


	// From: CodeObject42
	if (var_1_55) {
		if (var_1_37) {
			if (var_1_95) {
				if ((- var_1_93) <= var_1_71) {
					var_1_107 = (-10 + var_1_58);
				}
			}
		}
	}


	// From: CodeObject43
	if ((min ((var_1_72 - var_1_71) , var_1_86)) <= var_1_87) {
		if (50 >= (min (var_1_25 , (var_1_79 | 32)))) {
			var_1_108 = (var_1_103 || var_1_96);
		} else {
			var_1_108 = (! (var_1_56 && var_1_55));
		}
	}


	// From: CodeObject44
	if ((var_1_46 * var_1_58) >= -32) {
		if (var_1_37) {
			if ((var_1_25 % var_1_49) <= var_1_92) {
				var_1_109 = var_1_39;
			} else {
				var_1_109 = var_1_66;
			}
		} else {
			var_1_109 = (max ((min (25 , var_1_50)) , var_1_106));
		}
	} else {
		var_1_109 = var_1_40;
	}


	// From: CodeObject45
	var_1_110 = var_1_58;


	// From: CodeObject46
	var_1_111 = 1;


	// From: CodeObject47
	var_1_112 = var_1_113;


	// From: CodeObject48
	if (var_1_102) {
		var_1_114 = 64;
	} else {
		var_1_114 = var_1_45;
	}


	// From: CodeObject49
	if (var_1_102) {
		var_1_115 = var_1_65;
	}


	// From: CodeObject50
	if (var_1_37) {
		var_1_116 = 1;
	} else {
		var_1_116 = var_1_45;
	}


	// From: CodeObject51
	var_1_117 = var_1_56;


	// From: CodeObject52
	if (var_1_102) {
		var_1_118 = var_1_85;
	}


	// From: CodeObject53
	if (var_1_102) {
		var_1_119 = var_1_92;
	}


	// From: CodeObject54
	if (var_1_108) {
		var_1_120 = var_1_119;
	} else {
		var_1_120 = var_1_92;
	}


	// From: CodeObject55
	var_1_121 = var_1_75;


	// From: CodeObject56
	if (var_1_96) {
		var_1_122 = 15.25f;
	}


	// From: CodeObject57
	var_1_123 = var_1_43;


	// From: CodeObject58
	if (var_1_41) {
		var_1_124 = 50;
	}


	// From: CodeObject59
	if (var_1_117) {
		var_1_125 = var_1_113;
	}


	// From: CodeObject60
	var_1_126 = var_1_56;


	// From: CodeObject61
	if (var_1_93 <= var_1_54) {
		if (var_1_80 < 10u) {
			var_1_127 = var_1_116;
		}
	} else {
		if (var_1_26 <= var_1_97) {
			var_1_127 = (max (var_1_91 , var_1_116));
		} else {
			var_1_127 = var_1_58;
		}
	}


	// From: Req5Batch98PS_CN_500
	if ((var_1_5 * (var_1_13 - var_1_14)) <= last_1_var_1_1) {
		var_1_12 = (var_1_15 - (max (var_1_14 , var_1_16)));
	}


	// From: Req4Batch98PS_CN_500
	var_1_11 = (abs (max (2u , (3986216790u - var_1_12))));


	// From: Req1Batch98PS_CN_500
	unsigned short int stepLocal_3 = var_1_12;
	unsigned short int stepLocal_2 = var_1_12;
	unsigned short int stepLocal_1 = var_1_12;
	unsigned long int stepLocal_0 = var_1_11;
	if (stepLocal_3 <= ((var_1_11 / var_1_4) & 8)) {
		if (-16 <= stepLocal_0) {
			if (stepLocal_2 != (var_1_11 / (min (var_1_4 , var_1_5)))) {
				var_1_1 = (max (var_1_11 , var_1_12));
			} else {
				var_1_1 = (abs (var_1_12));
			}
		}
	} else {
		if (var_1_11 <= stepLocal_1) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = var_1_11;
		}
	}


	// From: Req3Batch98PS_CN_500
	if (var_1_10) {
		if (var_1_4 < (var_1_12 + var_1_5)) {
			var_1_9 = 16;
		}
	}


	// From: Req6Batch98PS_CN_500
	var_1_17 = var_1_18;


	// From: Req7Batch98PS_CN_500
	if (var_1_13 <= var_1_11) {
		var_1_19 = ((var_1_12 + 25) + (var_1_20 - (var_1_21 - 1)));
	} else {
		var_1_19 = (max ((abs (var_1_18)) , var_1_12));
	}


	// From: Req8Batch98PS_CN_500
	var_1_22 = var_1_18;


	// From: Req2Batch98PS_CN_500
	if (var_1_19 <= var_1_1) {
		var_1_6 = (var_1_7 + var_1_8);
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32768);
	assume_abort_if_not(var_1_5 <= 32767);
	assume_abort_if_not(var_1_5 != 0);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 32767);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -127);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 16383);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 8191);
	assume_abort_if_not(var_1_21 <= 16383);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 4294967295);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 4294967295);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967295);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 2147483647);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854765600e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 65535);
	assume_abort_if_not(var_1_36 != 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= -2147483647);
	assume_abort_if_not(var_1_38 <= 2147483646);
	var_1_39 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_39 >= -1073741823);
	assume_abort_if_not(var_1_39 <= 1073741823);
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= -1073741823);
	assume_abort_if_not(var_1_40 <= 1073741823);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 127);
	assume_abort_if_not(var_1_45 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 16383);
	assume_abort_if_not(var_1_49 <= 32767);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -922337.2036854776000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	assume_abort_if_not(var_1_52 != 0.0F);
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -922337.2036854776000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 1);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 254);
	var_1_61 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 4294967295);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= -126);
	assume_abort_if_not(var_1_64 <= 126);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 126);
	var_1_68 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_68 >= 2147483647);
	assume_abort_if_not(var_1_68 <= 4294967294);
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= 4611686.018427387900e+12F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854776000e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427387900e+12F && var_1_72 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= -1);
	assume_abort_if_not(var_1_74 <= 126);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 126);
	var_1_77 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_77 >= -63);
	assume_abort_if_not(var_1_77 <= 63);
	var_1_78 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_78 >= -63);
	assume_abort_if_not(var_1_78 <= 63);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 1);
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= -230584.3009213691390e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 2305843.009213691390e+12F && var_1_84 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= -230584.3009213691390e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 2305843.009213691390e+12F && var_1_85 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_87 >= -922337.2036854765600e+13F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 9223372.036854765600e+12F && var_1_87 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 33);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 33);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 0);
	var_1_103 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_103 >= 0);
	assume_abort_if_not(var_1_103 <= 0);
	var_1_113 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_113 >= -127);
	assume_abort_if_not(var_1_113 <= 126);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
}

int property() {
	return ((((((((var_1_12 <= ((var_1_11 / var_1_4) & 8)) ? ((-16 <= var_1_11) ? ((var_1_12 != (var_1_11 / (min (var_1_4 , var_1_5)))) ? (var_1_1 == ((signed long int) (max (var_1_11 , var_1_12)))) : (var_1_1 == ((signed long int) (abs (var_1_12))))) : 1) : ((var_1_11 <= var_1_12) ? (var_1_1 == ((signed long int) var_1_4)) : (var_1_1 == ((signed long int) var_1_11)))) && ((var_1_19 <= var_1_1) ? (var_1_6 == ((double) (var_1_7 + var_1_8))) : 1)) && (var_1_10 ? ((var_1_4 < (var_1_12 + var_1_5)) ? (var_1_9 == ((unsigned short int) 16)) : 1) : 1)) && (var_1_11 == ((unsigned long int) (abs (max (2u , (3986216790u - var_1_12))))))) && (((var_1_5 * (var_1_13 - var_1_14)) <= last_1_var_1_1) ? (var_1_12 == ((unsigned short int) (var_1_15 - (max (var_1_14 , var_1_16))))) : 1)) && (var_1_17 == ((signed char) var_1_18))) && ((var_1_13 <= var_1_11) ? (var_1_19 == ((signed short int) ((var_1_12 + 25) + (var_1_20 - (var_1_21 - 1))))) : (var_1_19 == ((signed short int) (max ((abs (var_1_18)) , var_1_12)))))) && (var_1_22 == ((signed char) var_1_18))
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
