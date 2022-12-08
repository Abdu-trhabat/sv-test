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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch21PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 10;
signed char var_1_3 = 1;
signed char var_1_4 = 100;
signed char var_1_5 = 5;
signed char var_1_6 = 32;
signed char var_1_7 = 32;
unsigned short int var_1_8 = 8;
unsigned short int var_1_10 = 21451;
unsigned char var_1_12 = 8;
unsigned short int var_1_13 = 16;
unsigned short int var_1_16 = 53444;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
double var_1_19 = 1.2;
signed char var_1_20 = 1;
double var_1_21 = 10.5;
double var_1_22 = 0.0;
double var_1_23 = 10.4;
double var_1_24 = 50.5;
unsigned short int var_1_25 = 2;
signed long int var_1_26 = 500;
unsigned char var_1_27 = 0;
signed short int var_1_28 = -5;
signed short int var_1_29 = -10;
signed short int var_1_30 = -32;
float var_1_31 = 99.375;
signed short int var_1_32 = 32;
float var_1_33 = 7.5;
unsigned char var_1_34 = 8;
signed char var_1_35 = 0;
signed long int var_1_36 = 10;
unsigned char var_1_37 = 2;
unsigned char var_1_38 = 16;
unsigned char var_1_39 = 8;
unsigned long int var_1_40 = 10;
signed short int var_1_41 = -16;
unsigned long int var_1_42 = 100;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 0;
double var_1_46 = 49.5;
double var_1_47 = 15.375;
float var_1_48 = 2.7;
signed short int var_1_49 = 64;
unsigned long int var_1_50 = 256;
float var_1_51 = 99.35;
float var_1_52 = 9999999999999.75;
unsigned long int var_1_53 = 3531406455;
unsigned char var_1_54 = 10;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 1;
signed char var_1_57 = 2;
signed char var_1_58 = 16;
signed char var_1_59 = -5;
unsigned long int var_1_60 = 128;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
unsigned long int var_1_64 = 500;
signed short int var_1_65 = -64;
signed char var_1_66 = 16;
double var_1_67 = 15.125;
double var_1_68 = 128.2;
double var_1_69 = 999.8;
signed short int var_1_70 = 32;
signed short int var_1_71 = -32;
double var_1_72 = 99999999.75;
double var_1_73 = 100000000000.5;
double var_1_74 = 99.2;
double var_1_75 = 63.4;
unsigned long int var_1_76 = 32;
unsigned char var_1_77 = 1;
signed long int var_1_78 = 1000000;
unsigned char var_1_79 = 0;
unsigned char var_1_80 = 0;
unsigned char var_1_81 = 2;
unsigned char var_1_82 = 16;
unsigned char var_1_83 = 100;
unsigned char var_1_84 = 0;
unsigned short int var_1_85 = 16;
double var_1_86 = 31.15;
unsigned char var_1_87 = 4;
signed long int var_1_88 = -25;
unsigned short int var_1_89 = 16;
unsigned short int var_1_90 = 1;
signed long int var_1_91 = 64;
signed long int var_1_92 = 50;
unsigned short int var_1_93 = 32;
unsigned char var_1_94 = 4;
double var_1_95 = 4.375;
unsigned char var_1_96 = 128;
unsigned short int var_1_97 = 0;
unsigned short int var_1_98 = 64;
float var_1_99 = 31.8;
unsigned long int var_1_100 = 256;
unsigned long int var_1_101 = 4041453408;
unsigned long int var_1_102 = 100;
unsigned long int var_1_103 = 1119403571;
unsigned long int var_1_104 = 256;
signed short int var_1_105 = 64;
signed short int var_1_106 = 17631;
signed char var_1_107 = 0;
signed char var_1_108 = 4;
signed char var_1_109 = -2;
unsigned char var_1_110 = 16;
float var_1_111 = 128.05;
unsigned short int var_1_112 = 128;
unsigned long int var_1_113 = 256;
signed short int var_1_114 = 50;
unsigned long int var_1_115 = 10000000;
unsigned char var_1_116 = 8;
unsigned char var_1_117 = 0;
signed char var_1_118 = -25;
double var_1_119 = 31.5;
float var_1_120 = 32.6;
unsigned char var_1_121 = 16;
unsigned char var_1_122 = 0;
unsigned short int var_1_123 = 5;
unsigned char var_1_124 = 25;
unsigned short int var_1_125 = 2;
unsigned char var_1_126 = 0;
double var_1_127 = 8.85;
unsigned char var_1_128 = 1;
unsigned char var_1_129 = 0;
unsigned short int var_1_130 = 256;
signed long int var_1_131 = -100;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_8 = 8;
unsigned char last_1_var_1_12 = 8;
unsigned short int last_1_var_1_13 = 16;
unsigned char last_1_var_1_17 = 0;
unsigned short int last_1_var_1_25 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_27 && (var_1_28 > (var_1_29 / var_1_30))) {
		if (var_1_27) {
			var_1_26 = var_1_29;
		}
	}


	// From: CodeObject2
	if (var_1_26 < var_1_30) {
		if (var_1_26 <= var_1_28) {
			if (((abs (var_1_28)) * 5) < var_1_30) {
				if (var_1_28 < var_1_32) {
					var_1_31 = (abs (var_1_33));
				}
			}
		}
	}


	// From: CodeObject3
	if (var_1_30 < (min (var_1_26 , (~ 2)))) {
		if ((var_1_29 & var_1_35) >= (var_1_36 ^ var_1_30)) {
			var_1_34 = (max ((max (var_1_37 , 16)) , var_1_38));
		} else {
			var_1_34 = (max (var_1_37 , var_1_38));
		}
	}


	// From: CodeObject4
	if ((var_1_26 | var_1_35) <= (~ var_1_38)) {
		var_1_39 = (abs (max (var_1_38 , var_1_37)));
	}


	// From: CodeObject5
	if (var_1_26 > var_1_36) {
		if (var_1_33 > (- var_1_31)) {
			var_1_40 = (var_1_39 + (max (2u , var_1_37)));
		}
	}


	// From: CodeObject6
	if (var_1_37 < var_1_29) {
		var_1_41 = (abs (var_1_35));
	}


	// From: CodeObject7
	if (var_1_36 <= -25) {
		var_1_42 = var_1_37;
	}


	// From: CodeObject8
	if (var_1_27 || var_1_44) {
		var_1_43 = 0;
	}


	// From: CodeObject9
	if ((abs (min (var_1_28 , var_1_30))) <= (abs (var_1_34 + var_1_38))) {
		var_1_45 = (! (! 0));
	}


	// From: CodeObject10
	if (var_1_43) {
		var_1_46 = (min (var_1_33 , var_1_47));
	}


	// From: CodeObject11
	if (var_1_39 >= var_1_28) {
		if ((var_1_49 + (var_1_41 ^ var_1_35)) <= var_1_37) {
			var_1_48 = (abs (abs (abs (var_1_33))));
		}
	}


	// From: CodeObject12
	if ((var_1_51 - var_1_52) > 1.6f) {
		var_1_50 = (min (8u , (max ((var_1_53 - var_1_34) , var_1_37))));
	}


	// From: CodeObject13
	if (var_1_35 <= (var_1_32 >> var_1_50)) {
		if (var_1_46 < (max ((var_1_51 - 100.4) , (- var_1_31)))) {
			var_1_54 = (abs (abs (var_1_37)));
		} else {
			if (var_1_29 < var_1_53) {
				var_1_54 = (abs (var_1_38));
			} else {
				var_1_54 = (abs (var_1_37));
			}
		}
	}


	// From: CodeObject14
	if (var_1_38 <= var_1_53) {
		var_1_55 = (! var_1_56);
	}


	// From: CodeObject15
	if (var_1_43) {
		if (! (-64 >= var_1_42)) {
			var_1_57 = (abs (var_1_58));
		} else {
			if (var_1_55 || var_1_27) {
				var_1_57 = (min (var_1_58 , var_1_59));
			} else {
				var_1_57 = var_1_58;
			}
		}
	}


	// From: CodeObject16
	var_1_60 = var_1_39;


	// From: CodeObject17
	if (var_1_43 || ((abs (-1)) < (var_1_54 | var_1_57))) {
		var_1_61 = (var_1_62 || var_1_63);
	} else {
		if (var_1_57 <= ((var_1_49 >> var_1_30) + (min (var_1_34 , var_1_40)))) {
			if (var_1_38 < var_1_53) {
				var_1_61 = (var_1_55 || (! var_1_62));
			}
		}
	}


	// From: CodeObject18
	if (var_1_63) {
		var_1_64 = (abs (var_1_37));
	} else {
		var_1_64 = (var_1_54 + var_1_34);
	}


	// From: CodeObject19
	if (var_1_28 >= (max ((max (var_1_32 , var_1_30)) , var_1_39))) {
		var_1_65 = (var_1_39 - var_1_54);
	} else {
		if (! (var_1_59 >= var_1_66)) {
			var_1_65 = (min ((var_1_38 + var_1_66) , (abs (var_1_58))));
		}
	}


	// From: CodeObject20
	if ((var_1_32 ^ var_1_38) > (var_1_28 % var_1_30)) {
		var_1_67 = (var_1_68 - var_1_69);
	} else {
		var_1_67 = var_1_68;
	}


	// From: CodeObject21
	if (var_1_26 == var_1_38) {
		if (var_1_55 || var_1_56) {
			var_1_70 = var_1_35;
		}
	} else {
		if (var_1_69 <= (max (var_1_47 , var_1_46))) {
			var_1_70 = var_1_71;
		}
	}


	// From: CodeObject22
	if (var_1_57 >= var_1_29) {
		if ((var_1_69 * var_1_31) > (var_1_47 + var_1_68)) {
			var_1_72 = (var_1_73 + var_1_74);
		} else {
			var_1_72 = (abs (var_1_69));
		}
	} else {
		var_1_72 = ((max (var_1_74 , (abs (var_1_73)))) + var_1_75);
	}


	// From: CodeObject23
	var_1_76 = 10u;


	// From: CodeObject24
	if (! var_1_55) {
		var_1_77 = (var_1_43 && var_1_63);
	} else {
		var_1_77 = (var_1_43 || (! (! var_1_56)));
	}


	// From: CodeObject25
	if (var_1_27) {
		if (var_1_43) {
			var_1_78 = (min (var_1_54 , (max (var_1_38 , (var_1_37 - var_1_39)))));
		}
	}


	// From: CodeObject26
	if (var_1_42 < var_1_26) {
		if ((2u % var_1_53) >= var_1_76) {
			var_1_79 = ((var_1_44 || var_1_56) && var_1_80);
		} else {
			if (-16 != var_1_40) {
				var_1_79 = var_1_80;
			} else {
				var_1_79 = (! var_1_63);
			}
		}
	} else {
		var_1_79 = ((var_1_80 && (! var_1_63)) && var_1_56);
	}


	// From: CodeObject27
	if ((var_1_42 | var_1_65) > (~ var_1_50)) {
		if ((max ((abs (var_1_31)) , var_1_51)) > var_1_69) {
			var_1_81 = var_1_37;
		} else {
			var_1_81 = (max (var_1_38 , var_1_37));
		}
	} else {
		var_1_81 = (min (128 , (var_1_83 + 10)));
	}


	// From: CodeObject28
	if (var_1_60 != (var_1_53 - (abs (var_1_83)))) {
		var_1_84 = ((! 0) && (! (var_1_63 || var_1_62)));
	}


	// From: CodeObject29
	if ((var_1_26 + var_1_66) < (abs (abs (var_1_49)))) {
		var_1_85 = (abs (abs (max (var_1_83 , var_1_82))));
	} else {
		if (var_1_64 > var_1_37) {
			if (var_1_57 <= var_1_59) {
				var_1_85 = (46343 - (abs (var_1_83)));
			}
		}
	}


	// From: CodeObject30
	if ((- (max (var_1_28 , var_1_41))) >= (var_1_38 - var_1_54)) {
		var_1_86 = (min (var_1_47 , var_1_73));
	}


	// From: CodeObject31
	if (var_1_61) {
		if ((var_1_83 / (var_1_89 + var_1_90)) > ((abs (var_1_30)) & var_1_41)) {
			var_1_88 = (min ((min (var_1_92 , var_1_39)) , (max ((max (-64 , var_1_65)) , var_1_29))));
		} else {
			if ((max (var_1_33 , var_1_69)) < 63.5) {
				var_1_88 = (var_1_37 + var_1_89);
			} else {
				var_1_88 = (abs (var_1_32 + var_1_65));
			}
		}
	}


	// From: CodeObject32
	if (var_1_70 < var_1_92) {
		if (var_1_56) {
			if (var_1_39 <= var_1_28) {
				if ((max (31.5 , (max (var_1_86 , var_1_67)))) < (abs (8.5))) {
					var_1_93 = (abs (abs (var_1_81)));
				} else {
					var_1_93 = ((abs (var_1_38)) + var_1_39);
				}
			} else {
				if ((var_1_70 ^ var_1_34) > (var_1_26 * -128)) {
					var_1_93 = (min (1 , (min ((abs (var_1_38)) , var_1_39))));
				}
			}
		} else {
			var_1_93 = (max (var_1_39 , (var_1_38 + var_1_54)));
		}
	}


	// From: CodeObject33
	if ((var_1_68 * (abs (var_1_33))) > ((var_1_69 - var_1_52) / var_1_95)) {
		if (var_1_89 >= var_1_54) {
			var_1_94 = (max (var_1_37 , var_1_38));
		} else {
			var_1_94 = (var_1_96 - var_1_83);
		}
	}


	// From: CodeObject34
	if (var_1_81 >= var_1_65) {
		if ((var_1_80 || (var_1_41 <= var_1_57)) && var_1_77) {
			var_1_97 = (abs (var_1_34));
		}
	}


	// From: CodeObject35
	if (var_1_30 >= (var_1_36 % var_1_96)) {
		var_1_98 = (var_1_54 + var_1_82);
	}


	// From: CodeObject36
	if ((abs (8)) < var_1_30) {
		var_1_99 = (abs (var_1_75));
	} else {
		if (-5 >= (var_1_29 % var_1_90)) {
			var_1_99 = var_1_68;
		}
	}


	// From: CodeObject37
	if (var_1_55) {
		var_1_100 = ((abs (var_1_101 - var_1_83)) - 64u);
	}


	// From: CodeObject38
	if (var_1_30 > var_1_35) {
		var_1_102 = (var_1_53 - var_1_54);
	} else {
		if ((1.25f + var_1_72) >= var_1_99) {
			var_1_102 = (min ((abs (var_1_38)) , var_1_53));
		} else {
			if (var_1_38 < (abs (5))) {
				if ((abs (max (var_1_57 , var_1_39))) > (max (var_1_58 , (min (var_1_85 , var_1_26))))) {
					var_1_102 = (var_1_53 - (max (var_1_54 , var_1_85)));
				} else {
					var_1_102 = ((var_1_39 + var_1_90) + (var_1_103 - var_1_38));
				}
			} else {
				var_1_102 = (min ((abs (var_1_53 - var_1_90)) , var_1_82));
			}
		}
	}


	// From: CodeObject39
	if (var_1_45) {
		var_1_104 = (abs (var_1_98));
	}


	// From: CodeObject40
	if ((min ((~ var_1_88) , var_1_96)) >= (var_1_87 / var_1_89)) {
		var_1_105 = ((abs (var_1_37)) - (var_1_106 - var_1_39));
	}


	// From: CodeObject41
	if ((abs (var_1_58)) != var_1_98) {
		if (var_1_80 && (var_1_97 >= var_1_64)) {
			var_1_107 = (var_1_108 + var_1_109);
		} else {
			var_1_107 = (abs (var_1_108 + (abs (var_1_109))));
		}
	}


	// From: CodeObject42
	if (var_1_44) {
		var_1_110 = (var_1_96 - (abs (var_1_83)));
	} else {
		if (var_1_32 > ((min (var_1_64 , var_1_106)) / (abs (var_1_90)))) {
			var_1_110 = (min (64 , (abs (var_1_38))));
		}
	}


	// From: CodeObject43
	if (((~ var_1_26) | var_1_88) <= var_1_38) {
		if (var_1_81 < (min ((- var_1_106) , (var_1_107 >> 5)))) {
			var_1_111 = var_1_75;
		}
	} else {
		if (var_1_91 >= var_1_76) {
			var_1_111 = (max (var_1_69 , (max (var_1_74 , 16.5f))));
		}
	}


	// From: CodeObject44
	if ((abs (var_1_105)) < (~ (var_1_83 << var_1_89))) {
		var_1_112 = ((abs (32)) + (max (var_1_81 , var_1_37)));
	}


	// From: CodeObject45
	if (var_1_93 >= var_1_54) {
		var_1_113 = (var_1_37 + (min ((max (var_1_90 , var_1_38)) , var_1_110)));
	} else {
		var_1_113 = (max ((min ((var_1_98 + var_1_38) , (min (var_1_37 , var_1_54)))) , (var_1_34 + var_1_96)));
	}


	// From: CodeObject46
	if (var_1_74 < (var_1_73 * (abs (var_1_48)))) {
		var_1_114 = (abs (var_1_58));
	}


	// From: CodeObject47
	if (var_1_77 || var_1_45) {
		var_1_115 = (abs (var_1_82));
	}


	// From: CodeObject48
	if ((abs (var_1_109)) < var_1_85) {
		var_1_116 = var_1_37;
	} else {
		var_1_116 = var_1_37;
	}


	// From: CodeObject49
	var_1_117 = var_1_62;


	// From: CodeObject50
	var_1_118 = var_1_59;


	// From: CodeObject51
	if (var_1_61) {
		var_1_119 = 1.5;
	} else {
		var_1_119 = var_1_69;
	}


	// From: CodeObject52
	if (var_1_56) {
		var_1_120 = var_1_68;
	} else {
		var_1_120 = var_1_75;
	}


	// From: CodeObject53
	if (var_1_44) {
		var_1_121 = var_1_83;
	} else {
		var_1_121 = var_1_38;
	}


	// From: CodeObject54
	if (var_1_79) {
		var_1_122 = var_1_56;
	} else {
		var_1_122 = var_1_56;
	}


	// From: CodeObject55
	if (var_1_63) {
		var_1_123 = var_1_121;
	}


	// From: CodeObject56
	if (var_1_45) {
		var_1_124 = var_1_37;
	}


	// From: CodeObject57
	if (var_1_126) {
		var_1_125 = 8;
	} else {
		var_1_125 = var_1_87;
	}


	// From: CodeObject58
	if (var_1_79) {
		var_1_127 = var_1_47;
	} else {
		var_1_127 = var_1_75;
	}


	// From: CodeObject59
	if (var_1_61) {
		var_1_128 = var_1_63;
	}


	// From: CodeObject60
	if (var_1_60 > (var_1_38 * 100u)) {
		var_1_129 = (var_1_63 || var_1_62);
	}


	// From: CodeObject61
	if (var_1_26 < (~ (var_1_60 ^ var_1_131))) {
		if (var_1_63) {
			var_1_130 = var_1_116;
		}
	}


	// From: Req7Batch21PS_CN_500
	if ((last_1_var_1_8 < last_1_var_1_13) || last_1_var_1_17) {
		var_1_25 = ((max (last_1_var_1_12 , last_1_var_1_12)) + var_1_7);
	} else {
		var_1_25 = var_1_7;
	}


	// From: Req3Batch21PS_CN_500
	signed long int stepLocal_1 = last_1_var_1_13;
	if (last_1_var_1_13 == stepLocal_1) {
		var_1_12 = (abs (var_1_7));
	}


	// From: Req2Batch21PS_CN_500
	var_1_8 = (((var_1_7 + var_1_6) + var_1_12) + (var_1_10 - var_1_12));


	// From: Req1Batch21PS_CN_500
	signed long int stepLocal_0 = -1000000;
	if (var_1_8 >= stepLocal_0) {
		var_1_1 = (min (var_1_3 , var_1_4));
	} else {
		var_1_1 = (var_1_5 - ((var_1_6 - 8) + var_1_7));
	}


	// From: Req6Batch21PS_CN_500
	signed char stepLocal_3 = var_1_1;
	if (stepLocal_3 >= (var_1_5 - var_1_20)) {
		var_1_19 = ((min (var_1_21 , (var_1_22 - var_1_23))) - var_1_24);
	}


	// From: Req5Batch21PS_CN_500
	if ((min ((max (last_1_var_1_12 , var_1_6)) , last_1_var_1_8)) > (var_1_3 * last_1_var_1_25)) {
		var_1_17 = var_1_18;
	}


	// From: Req4Batch21PS_CN_500
	unsigned short int stepLocal_2 = var_1_25;
	if (var_1_17) {
		if (((var_1_10 + var_1_12) << var_1_5) < stepLocal_2) {
			var_1_13 = (min (var_1_7 , (max (var_1_12 , (min (var_1_12 , var_1_6))))));
		} else {
			var_1_13 = (var_1_16 - (var_1_12 + var_1_12));
		}
	} else {
		var_1_13 = (var_1_16 - var_1_10);
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -127);
	assume_abort_if_not(var_1_3 <= 126);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -127);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 31);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 16383);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 32767);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 4611686.018427382800e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32768);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32768);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32768);
	assume_abort_if_not(var_1_30 <= 32767);
	assume_abort_if_not(var_1_30 != 0);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -32768);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854765600e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -128);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483648);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -922337.2036854765600e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= -32768);
	assume_abort_if_not(var_1_49 <= 32767);
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 2147483647);
	assume_abort_if_not(var_1_53 <= 4294967294);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= -126);
	assume_abort_if_not(var_1_58 <= 126);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -127);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 0);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 0);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= -128);
	assume_abort_if_not(var_1_66 <= 127);
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854765600e+12F && var_1_68 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854765600e+12F && var_1_69 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_71 >= -32767);
	assume_abort_if_not(var_1_71 <= 32766);
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= -461168.6018427382800e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427382800e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= -461168.6018427382800e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427382800e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_75 >= -461168.6018427382800e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427382800e+12F && var_1_75 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 1);
	assume_abort_if_not(var_1_80 <= 1);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 255);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 127);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 255);
	var_1_89 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_89 >= 1);
	assume_abort_if_not(var_1_89 <= 32768);
	var_1_90 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_90 >= 1);
	assume_abort_if_not(var_1_90 <= 32767);
	var_1_91 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_91 >= -2147483648);
	assume_abort_if_not(var_1_91 <= 2147483647);
	var_1_92 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_92 >= -2147483647);
	assume_abort_if_not(var_1_92 <= 2147483646);
	var_1_95 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_95 >= -922337.2036854776000e+13F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 9223372.036854776000e+12F && var_1_95 >= 1.0e-20F ));
	assume_abort_if_not(var_1_95 != 0.0F);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 127);
	assume_abort_if_not(var_1_96 <= 254);
	var_1_101 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_101 >= 3221225470);
	assume_abort_if_not(var_1_101 <= 4294967294);
	var_1_103 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_103 >= 1073741823);
	assume_abort_if_not(var_1_103 <= 2147483647);
	var_1_106 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_106 >= 16383);
	assume_abort_if_not(var_1_106 <= 32766);
	var_1_108 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_108 >= -63);
	assume_abort_if_not(var_1_108 <= 63);
	var_1_109 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_109 >= -63);
	assume_abort_if_not(var_1_109 <= 63);
	var_1_126 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_126 >= 0);
	assume_abort_if_not(var_1_126 <= 1);
	var_1_131 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_131 >= -2147483648);
	assume_abort_if_not(var_1_131 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_25 = var_1_25;
}

int property() {
	return (((((((var_1_8 >= -1000000) ? (var_1_1 == ((signed char) (min (var_1_3 , var_1_4)))) : (var_1_1 == ((signed char) (var_1_5 - ((var_1_6 - 8) + var_1_7))))) && (var_1_8 == ((unsigned short int) (((var_1_7 + var_1_6) + var_1_12) + (var_1_10 - var_1_12))))) && ((last_1_var_1_13 == last_1_var_1_13) ? (var_1_12 == ((unsigned char) (abs (var_1_7)))) : 1)) && (var_1_17 ? ((((var_1_10 + var_1_12) << var_1_5) < var_1_25) ? (var_1_13 == ((unsigned short int) (min (var_1_7 , (max (var_1_12 , (min (var_1_12 , var_1_6)))))))) : (var_1_13 == ((unsigned short int) (var_1_16 - (var_1_12 + var_1_12))))) : (var_1_13 == ((unsigned short int) (var_1_16 - var_1_10))))) && (((min ((max (last_1_var_1_12 , var_1_6)) , last_1_var_1_8)) > (var_1_3 * last_1_var_1_25)) ? (var_1_17 == ((unsigned char) var_1_18)) : 1)) && ((var_1_1 >= (var_1_5 - var_1_20)) ? (var_1_19 == ((double) ((min (var_1_21 , (var_1_22 - var_1_23))) - var_1_24))) : 1)) && (((last_1_var_1_8 < last_1_var_1_13) || last_1_var_1_17) ? (var_1_25 == ((unsigned short int) ((max (last_1_var_1_12 , last_1_var_1_12)) + var_1_7))) : (var_1_25 == ((unsigned short int) var_1_7)))
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
