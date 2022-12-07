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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch24PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 15.8;
double var_1_4 = 10.5;
double var_1_5 = 1.55;
signed char var_1_8 = -10;
signed char var_1_10 = -16;
signed char var_1_11 = -4;
signed char var_1_12 = -16;
double var_1_13 = 128.55;
double var_1_14 = 2.3;
double var_1_15 = 4.8;
unsigned long int var_1_16 = 0;
signed long int var_1_17 = 5;
signed long int var_1_18 = 256;
unsigned long int var_1_19 = 50;
unsigned long int var_1_20 = 1;
signed short int var_1_21 = -50;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
signed long int var_1_26 = -5;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
unsigned long int var_1_31 = 200;
signed long int var_1_32 = 50;
unsigned long int var_1_33 = 2854329333;
unsigned long int var_1_34 = 2581335902;
unsigned long int var_1_35 = 2;
unsigned long int var_1_36 = 5;
unsigned long int var_1_37 = 64;
signed char var_1_38 = -4;
signed char var_1_39 = 0;
signed char var_1_40 = 8;
signed char var_1_41 = 50;
signed long int var_1_42 = -500;
signed char var_1_43 = 2;
signed char var_1_44 = -5;
signed short int var_1_45 = 64;
signed char var_1_46 = -25;
signed long int var_1_47 = -4;
unsigned short int var_1_48 = 128;
unsigned short int var_1_49 = 32;
unsigned short int var_1_50 = 16;
unsigned char var_1_51 = 2;
unsigned long int var_1_52 = 32;
signed char var_1_53 = 4;
signed short int var_1_54 = 32;
float var_1_55 = 64.6;
float var_1_56 = 15.75;
float var_1_57 = 127.375;
float var_1_58 = -0.8;
float var_1_59 = 0.95;
signed char var_1_60 = 8;
float var_1_61 = 10.4;
signed long int var_1_62 = 100;
unsigned char var_1_63 = 4;
signed short int var_1_64 = -16;
unsigned char var_1_65 = 128;
unsigned char var_1_66 = 128;
unsigned char var_1_67 = 4;
signed short int var_1_68 = 1;
signed char var_1_69 = -50;
float var_1_70 = 10000000.2;
float var_1_71 = 10.25;
double var_1_72 = 24.3;
signed short int var_1_73 = -16;
double var_1_74 = 1000.75;
signed long int var_1_75 = 16;
signed long int var_1_76 = 1;
float var_1_77 = 0.19999999999999996;
float var_1_78 = 1.7;
unsigned short int var_1_79 = 16;
double var_1_80 = 25.8;
double var_1_81 = 0.25;
double var_1_82 = 32.4;
signed char var_1_83 = 100;
signed char var_1_84 = 50;
unsigned long int var_1_85 = 8;
signed char var_1_86 = 64;
unsigned char var_1_87 = 0;
unsigned char var_1_88 = 0;
unsigned long int var_1_89 = 2;
signed short int var_1_90 = 0;
double var_1_91 = 9999999.3;
unsigned char var_1_92 = 1;
unsigned char var_1_93 = 0;
unsigned long int var_1_94 = 200;
unsigned long int var_1_95 = 8;
signed short int var_1_96 = -8;
unsigned short int var_1_97 = 1;
unsigned short int var_1_98 = 32;
signed char var_1_99 = -100;
unsigned char var_1_100 = 1;
unsigned char var_1_101 = 0;
float var_1_103 = 2.5;
unsigned long int var_1_104 = 128;
unsigned char var_1_105 = 4;
signed char var_1_106 = -16;
double var_1_107 = 63.5;
unsigned char var_1_108 = 32;
unsigned char var_1_109 = 1;
signed short int var_1_110 = 100;
signed short int var_1_111 = -32;
signed char var_1_112 = 0;
unsigned short int var_1_113 = 1;
unsigned short int var_1_114 = 30566;
unsigned long int var_1_115 = 32;
unsigned long int var_1_116 = 1;
unsigned long int var_1_117 = 10000;
unsigned short int var_1_118 = 0;
unsigned short int var_1_119 = 16;
unsigned short int var_1_120 = 60427;
float var_1_121 = 7.5;
unsigned char var_1_122 = 200;
unsigned char var_1_123 = 1;
float var_1_124 = 31.25;
unsigned char var_1_125 = 2;
signed long int var_1_126 = 256;
signed long int var_1_127 = 10000000;
unsigned char var_1_128 = 0;
signed long int var_1_129 = 2;
float var_1_130 = 255.25;
unsigned short int var_1_131 = 4;

// Calibration values

// Last'ed variables
signed char last_1_var_1_8 = -10;
signed short int last_1_var_1_21 = -50;
unsigned char last_1_var_1_23 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (32 >= var_1_26) {
		var_1_25 = ((var_1_27 || (var_1_28 && var_1_29)) && var_1_30);
	}


	// From: CodeObject2
	if ((10u < 100u) && ((16 >> var_1_26) != var_1_32)) {
		if (8 > var_1_32) {
			var_1_31 = ((abs (max (var_1_33 , var_1_34))) - (max (var_1_35 , (abs (var_1_36)))));
		}
	} else {
		if (var_1_32 < var_1_26) {
			var_1_31 = ((abs (min (var_1_36 , var_1_35))) + (abs (var_1_37)));
		}
	}


	// From: CodeObject3
	if (var_1_30) {
		var_1_38 = ((max (var_1_39 , 32)) - var_1_40);
	} else {
		var_1_38 = (abs (var_1_39));
	}


	// From: CodeObject4
	if (var_1_37 > var_1_40) {
		if ((var_1_32 | (var_1_42 + var_1_39)) > var_1_40) {
			var_1_41 = (abs (abs (var_1_39)));
		}
	} else {
		var_1_41 = (abs ((abs (var_1_43)) + var_1_44));
	}


	// From: CodeObject5
	if (var_1_25) {
		var_1_45 = var_1_44;
	}


	// From: CodeObject6
	if (var_1_43 <= (abs (var_1_40))) {
		if (var_1_28) {
			var_1_46 = (max (var_1_44 , var_1_40));
		} else {
			if (var_1_26 <= (min ((var_1_45 / var_1_47) , var_1_40))) {
				var_1_46 = -8;
			}
		}
	}


	// From: CodeObject7
	if (var_1_33 >= var_1_31) {
		if ((32u / (abs (var_1_34))) < var_1_31) {
			var_1_48 = (min (var_1_40 , (abs (var_1_49 + var_1_50))));
		}
	}


	// From: CodeObject8
	if (((var_1_32 * var_1_44) < var_1_41) && (var_1_25 && (var_1_29 || var_1_27))) {
		var_1_51 = (abs (var_1_40));
	}


	// From: CodeObject9
	if ((abs (var_1_39)) < (min ((var_1_49 << var_1_48) , var_1_43))) {
		if ((abs (var_1_43)) >= (min (var_1_47 , (abs (var_1_51))))) {
			if (((var_1_40 - var_1_53) % var_1_47) >= (var_1_35 * var_1_31)) {
				var_1_52 = (min (var_1_40 , (abs (var_1_37))));
			} else {
				var_1_52 = (abs (var_1_48 + 10u));
			}
		}
	} else {
		var_1_52 = (min ((abs (var_1_51)) , var_1_35));
	}


	// From: CodeObject10
	if (var_1_39 > (min ((var_1_31 + var_1_52) , var_1_26))) {
		var_1_54 = (var_1_38 + (var_1_40 + var_1_39));
	} else {
		var_1_54 = ((var_1_53 - (var_1_40 + var_1_51)) + var_1_43);
	}


	// From: CodeObject11
	if (var_1_27) {
		var_1_55 = (max ((abs (var_1_56 + var_1_57)) , (var_1_58 + var_1_59)));
	}


	// From: CodeObject12
	var_1_60 = var_1_43;


	// From: CodeObject13
	if (var_1_30) {
		if (var_1_29 || var_1_28) {
			var_1_61 = ((min ((min (var_1_59 , var_1_56)) , var_1_58)) + var_1_57);
		} else {
			var_1_61 = (abs (var_1_59));
		}
	} else {
		var_1_61 = (min (((min (var_1_58 , var_1_57)) + var_1_59) , var_1_56));
	}


	// From: CodeObject14
	if (var_1_29) {
		var_1_62 = (abs (abs (var_1_41)));
	} else {
		if ((max (var_1_55 , 64.7f)) >= (min ((abs (var_1_58)) , var_1_56))) {
			var_1_62 = (max ((var_1_53 - (min (var_1_49 , var_1_40))) , var_1_51));
		}
	}


	// From: CodeObject15
	if ((var_1_51 != var_1_45) && (var_1_62 < var_1_31)) {
		if (var_1_64 == (max (8 , var_1_41))) {
			var_1_63 = ((max ((max (128 , var_1_65)) , var_1_66)) - var_1_40);
		} else {
			var_1_63 = (max (var_1_67 , (abs (var_1_40))));
		}
	} else {
		if ((abs (abs (var_1_58))) >= var_1_61) {
			var_1_63 = ((abs (var_1_66)) - var_1_40);
		}
	}


	// From: CodeObject16
	if ((abs (var_1_52)) < ((var_1_63 + var_1_48) | var_1_26)) {
		if (var_1_28) {
			if ((! 1) && var_1_25) {
				var_1_68 = (abs (var_1_43 + var_1_38));
			} else {
				var_1_68 = ((abs (max (var_1_65 , var_1_51))) + (abs (var_1_67 - var_1_53)));
			}
		} else {
			var_1_68 = (var_1_40 + 4);
		}
	} else {
		var_1_68 = -10;
	}


	// From: CodeObject17
	if (var_1_63 >= (var_1_66 | var_1_54)) {
		if ((max (var_1_51 , var_1_67)) <= 1) {
			var_1_69 = (abs (min (var_1_44 , var_1_40)));
		}
	} else {
		var_1_69 = var_1_40;
	}


	// From: CodeObject18
	if ((abs (var_1_62)) >= var_1_46) {
		var_1_70 = var_1_71;
	}


	// From: CodeObject19
	if (var_1_28) {
		var_1_72 = var_1_57;
	} else {
		var_1_72 = var_1_57;
	}


	// From: CodeObject20
	if (var_1_28) {
		var_1_73 = var_1_66;
	}


	// From: CodeObject21
	var_1_74 = var_1_58;


	// From: CodeObject22
	if (var_1_29) {
		var_1_75 = var_1_76;
	} else {
		var_1_75 = var_1_38;
	}


	// From: CodeObject23
	if (var_1_29) {
		var_1_77 = var_1_57;
	} else {
		var_1_77 = var_1_78;
	}


	// From: CodeObject24
	if (var_1_29) {
		var_1_79 = 5;
	} else {
		var_1_79 = (min ((max (var_1_67 , var_1_51)) , (abs (var_1_65))));
	}


	// From: CodeObject25
	if (var_1_69 >= var_1_68) {
		var_1_80 = ((abs (var_1_59)) + (abs (var_1_81 - var_1_82)));
	} else {
		if ((var_1_69 / var_1_66) == (var_1_35 * var_1_62)) {
			var_1_80 = (min ((abs (var_1_82)) , var_1_59));
		} else {
			var_1_80 = (abs (var_1_78));
		}
	}


	// From: CodeObject26
	if (var_1_28) {
		if (var_1_82 >= 4.7) {
			var_1_83 = (var_1_84 + var_1_43);
		}
	}


	// From: CodeObject27
	if ((var_1_41 & (var_1_51 % var_1_66)) < (max ((~ var_1_65) , var_1_42))) {
		var_1_85 = (max (((abs (var_1_34)) - var_1_51) , (abs (abs (var_1_79)))));
	} else {
		var_1_85 = (max (var_1_37 , (var_1_40 + (1353238374u - var_1_79))));
	}


	// From: CodeObject28
	if (var_1_46 < ((var_1_45 / -5) | var_1_85)) {
		var_1_86 = (abs (abs (max (var_1_40 , var_1_39))));
	}


	// From: CodeObject29
	if (var_1_36 >= var_1_79) {
		if (var_1_28) {
			var_1_87 = (var_1_88 || (! var_1_29));
		}
	}


	// From: CodeObject30
	if ((abs (var_1_64 ^ var_1_41)) <= var_1_51) {
		if (var_1_88 && ((var_1_63 * var_1_65) > var_1_64)) {
			var_1_89 = (abs (var_1_51));
		}
	}


	// From: CodeObject31
	var_1_90 = (max (var_1_44 , var_1_69));


	// From: CodeObject32
	if (var_1_29) {
		if (1.3 < var_1_82) {
			var_1_91 = (abs (var_1_78));
		}
	}


	// From: CodeObject33
	if (! var_1_29) {
		if ((var_1_67 >= var_1_60) && var_1_30) {
			var_1_92 = (var_1_88 || var_1_93);
		}
	}


	// From: CodeObject34
	if (var_1_27) {
		var_1_94 = ((max (var_1_66 , var_1_67)) + (abs (var_1_63)));
	}


	// From: CodeObject35
	if (16 != (min (var_1_36 , var_1_52))) {
		var_1_95 = var_1_65;
	}


	// From: CodeObject36
	if (var_1_42 <= var_1_38) {
		if (var_1_50 != 256) {
			var_1_96 = var_1_60;
		} else {
			var_1_96 = (max (var_1_39 , (var_1_53 - var_1_66)));
		}
	} else {
		if (var_1_25) {
			if (var_1_97 == var_1_45) {
				var_1_96 = (abs (min (var_1_39 , var_1_86)));
			}
		} else {
			if (var_1_37 <= var_1_97) {
				if (var_1_74 > var_1_72) {
					var_1_96 = (abs (var_1_83));
				} else {
					var_1_96 = ((var_1_51 + var_1_53) - var_1_63);
				}
			} else {
				var_1_96 = var_1_43;
			}
		}
	}


	// From: CodeObject37
	if (((var_1_84 / var_1_47) * var_1_54) != var_1_60) {
		if ((var_1_37 << var_1_44) <= var_1_63) {
			var_1_98 = (min (((min (var_1_51 , var_1_40)) + var_1_53) , var_1_49));
		}
	}


	// From: CodeObject38
	var_1_99 = (var_1_44 + var_1_43);


	// From: CodeObject39
	if (var_1_87) {
		var_1_100 = (var_1_66 - (abs (var_1_40)));
	}


	// From: CodeObject40
	if (256.75f <= (- (var_1_71 + var_1_82))) {
		if ((var_1_31 ^ var_1_69) >= (abs (~ var_1_48))) {
			var_1_101 = ((var_1_67 <= var_1_51) || var_1_28);
		}
	} else {
		if (! var_1_30) {
			var_1_101 = (((var_1_67 < var_1_36) && var_1_88) || var_1_29);
		}
	}


	// From: CodeObject41
	var_1_103 = (max ((max (16.4f , var_1_57)) , var_1_81));


	// From: CodeObject42
	var_1_104 = ((var_1_100 + (max (var_1_48 , var_1_53))) + var_1_97);


	// From: CodeObject43
	if (var_1_83 > (~ (min (var_1_106 , var_1_62)))) {
		var_1_105 = (abs (var_1_66 - var_1_53));
	} else {
		if (var_1_39 <= ((var_1_31 >> var_1_51) & (-5 / var_1_47))) {
			if (var_1_68 >= ((var_1_106 % var_1_65) * (var_1_96 % var_1_66))) {
				if (var_1_94 > var_1_67) {
					var_1_105 = (abs (max (var_1_40 , (abs (var_1_66)))));
				} else {
					var_1_105 = (var_1_65 - (abs (var_1_53)));
				}
			}
		}
	}


	// From: CodeObject44
	if (var_1_30) {
		if ((var_1_85 % (var_1_108 + var_1_109)) > (var_1_97 & var_1_47)) {
			var_1_107 = (max (((max (var_1_81 , var_1_82)) - 128.125) , ((abs (var_1_58)) + (abs (var_1_57)))));
		}
	}


	// From: CodeObject45
	if (var_1_46 > (~ var_1_62)) {
		if (var_1_53 <= (abs (var_1_39))) {
			var_1_110 = (var_1_63 - var_1_100);
		} else {
			var_1_110 = ((max (var_1_38 , var_1_67)) + ((abs (var_1_41)) + (var_1_99 + var_1_111)));
		}
	} else {
		var_1_110 = (var_1_66 + (abs (var_1_65)));
	}


	// From: CodeObject46
	if (var_1_84 <= (var_1_90 / var_1_109)) {
		var_1_112 = (abs (var_1_40));
	}


	// From: CodeObject47
	if (var_1_32 < var_1_89) {
		var_1_113 = ((30019 + var_1_114) - (min ((var_1_108 + var_1_109) , var_1_100)));
	}


	// From: CodeObject48
	if ((var_1_100 & (max (var_1_48 , var_1_54))) < (var_1_53 & var_1_32)) {
		if ((min (var_1_65 , var_1_105)) < var_1_45) {
			var_1_115 = (abs (abs (var_1_65)));
		} else {
			if (var_1_90 > (abs (var_1_86))) {
				var_1_115 = (min (var_1_114 , (abs (var_1_65))));
			} else {
				var_1_115 = (max ((var_1_65 + var_1_67) , var_1_116));
			}
		}
	} else {
		var_1_115 = (((var_1_108 + var_1_100) + var_1_53) + var_1_117);
	}


	// From: CodeObject49
	if (var_1_28) {
		if (var_1_91 >= var_1_81) {
			if (var_1_72 > 1.1) {
				var_1_118 = (((abs (var_1_66)) + var_1_119) + var_1_49);
			}
		} else {
			var_1_118 = ((var_1_120 - var_1_67) - var_1_63);
		}
	}


	// From: CodeObject50
	var_1_121 = 8.2f;


	// From: CodeObject51
	if (var_1_93) {
		var_1_122 = var_1_40;
	}


	// From: CodeObject52
	if (var_1_30) {
		var_1_123 = var_1_65;
	}


	// From: CodeObject53
	if (var_1_28) {
		var_1_124 = var_1_78;
	} else {
		var_1_124 = var_1_58;
	}


	// From: CodeObject54
	var_1_125 = var_1_53;


	// From: CodeObject55
	if (var_1_28) {
		var_1_126 = var_1_111;
	}


	// From: CodeObject56
	if (var_1_128) {
		var_1_127 = var_1_49;
	} else {
		var_1_127 = var_1_53;
	}


	// From: CodeObject57
	if (var_1_87) {
		var_1_129 = 64;
	}


	// From: CodeObject58
	if (var_1_28) {
		var_1_130 = var_1_56;
	}


	// From: CodeObject59
	if (var_1_127 != (var_1_36 ^ var_1_129)) {
		if ((var_1_125 + (var_1_126 ^ var_1_97)) > var_1_100) {
			var_1_131 = (min (var_1_67 , var_1_53));
		} else {
			var_1_131 = 25;
		}
	} else {
		var_1_131 = var_1_109;
	}


	// From: Req2Batch24PS_CN_500
	if (last_1_var_1_21 <= (min (last_1_var_1_21 , last_1_var_1_8))) {
		if (last_1_var_1_23) {
			var_1_8 = (-16 + (min (var_1_10 , (var_1_11 + var_1_12))));
		}
	} else {
		var_1_8 = var_1_12;
	}


	// From: Req6Batch24PS_CN_500
	var_1_23 = var_1_24;


	// From: Req3Batch24PS_CN_500
	if (128u >= var_1_8) {
		if (! var_1_23) {
			var_1_13 = ((var_1_14 - var_1_15) + 0.25);
		} else {
			var_1_13 = var_1_14;
		}
	} else {
		if (var_1_23) {
			var_1_13 = var_1_5;
		}
	}


	// From: Req4Batch24PS_CN_500
	if (var_1_8 >= ((1329162249 - var_1_17) - var_1_18)) {
		var_1_16 = ((min ((max (var_1_17 , var_1_18)) , var_1_19)) + var_1_20);
	} else {
		if (var_1_23) {
			var_1_16 = var_1_18;
		} else {
			var_1_16 = var_1_19;
		}
	}


	// From: Req5Batch24PS_CN_500
	if ((min (var_1_12 , var_1_18)) <= (var_1_11 + var_1_8)) {
		if (var_1_11 >= (var_1_18 & var_1_16)) {
			var_1_21 = 8;
		} else {
			if (var_1_19 < var_1_8) {
				var_1_21 = 64;
			}
		}
	}


	// From: Req1Batch24PS_CN_500
	unsigned char stepLocal_1 = var_1_23;
	signed char stepLocal_0 = var_1_8;
	if (stepLocal_0 >= var_1_16) {
		var_1_1 = (var_1_4 - (abs (var_1_5)));
	} else {
		if (var_1_23 || stepLocal_1) {
			var_1_1 = 128.75;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -63);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -31);
	assume_abort_if_not(var_1_11 <= 32);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -31);
	assume_abort_if_not(var_1_12 <= 31);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1073741824);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 2147483647);
	assume_abort_if_not(var_1_33 <= 4294967294);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 2147483647);
	assume_abort_if_not(var_1_34 <= 4294967294);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -1);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -2147483648);
	assume_abort_if_not(var_1_42 <= 2147483647);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -63);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -63);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_47 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_47 >= -2147483648);
	assume_abort_if_not(var_1_47 <= 2147483647);
	assume_abort_if_not(var_1_47 != 0);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 32767);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 32767);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 127);
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -461168.6018427382800e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= -461168.6018427382800e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427382800e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= -461168.6018427382800e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427382800e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= -461168.6018427382800e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_64 >= -32768);
	assume_abort_if_not(var_1_64 <= 32767);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 127);
	assume_abort_if_not(var_1_65 <= 254);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 127);
	assume_abort_if_not(var_1_66 <= 254);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 254);
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= -922337.2036854765600e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854765600e+12F && var_1_71 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_76 >= -2147483647);
	assume_abort_if_not(var_1_76 <= 2147483646);
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= -922337.2036854765600e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 9223372.036854765600e+12F && var_1_78 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_81 >= 0.0F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 4611686.018427382800e+12F && var_1_81 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_82 >= 0.0F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 4611686.018427382800e+12F && var_1_82 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_84 >= -63);
	assume_abort_if_not(var_1_84 <= 63);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 0);
	var_1_93 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_93 >= 0);
	assume_abort_if_not(var_1_93 <= 0);
	var_1_97 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_97 >= 0);
	assume_abort_if_not(var_1_97 <= 65535);
	var_1_106 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_106 >= -128);
	assume_abort_if_not(var_1_106 <= 127);
	var_1_108 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_108 >= 1);
	assume_abort_if_not(var_1_108 <= 128);
	var_1_109 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_109 >= 1);
	assume_abort_if_not(var_1_109 <= 127);
	var_1_111 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_111 >= -4095);
	assume_abort_if_not(var_1_111 <= 4095);
	var_1_114 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_114 >= 16384);
	assume_abort_if_not(var_1_114 <= 32767);
	var_1_116 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_116 >= 0);
	assume_abort_if_not(var_1_116 <= 4294967294);
	var_1_117 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_117 >= 0);
	assume_abort_if_not(var_1_117 <= 2147483647);
	var_1_119 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_119 >= 0);
	assume_abort_if_not(var_1_119 <= 16383);
	var_1_120 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_120 >= 49150);
	assume_abort_if_not(var_1_120 <= 65534);
	var_1_128 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_128 >= 0);
	assume_abort_if_not(var_1_128 <= 1);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_23 = var_1_23;
}

int property() {
	return ((((((var_1_8 >= var_1_16) ? (var_1_1 == ((double) (var_1_4 - (abs (var_1_5))))) : ((var_1_23 || var_1_23) ? (var_1_1 == ((double) 128.75)) : 1)) && ((last_1_var_1_21 <= (min (last_1_var_1_21 , last_1_var_1_8))) ? (last_1_var_1_23 ? (var_1_8 == ((signed char) (-16 + (min (var_1_10 , (var_1_11 + var_1_12)))))) : 1) : (var_1_8 == ((signed char) var_1_12)))) && ((128u >= var_1_8) ? ((! var_1_23) ? (var_1_13 == ((double) ((var_1_14 - var_1_15) + 0.25))) : (var_1_13 == ((double) var_1_14))) : (var_1_23 ? (var_1_13 == ((double) var_1_5)) : 1))) && ((var_1_8 >= ((1329162249 - var_1_17) - var_1_18)) ? (var_1_16 == ((unsigned long int) ((min ((max (var_1_17 , var_1_18)) , var_1_19)) + var_1_20))) : (var_1_23 ? (var_1_16 == ((unsigned long int) var_1_18)) : (var_1_16 == ((unsigned long int) var_1_19))))) && (((min (var_1_12 , var_1_18)) <= (var_1_11 + var_1_8)) ? ((var_1_11 >= (var_1_18 & var_1_16)) ? (var_1_21 == ((signed short int) 8)) : ((var_1_19 < var_1_8) ? (var_1_21 == ((signed short int) 64)) : 1)) : 1)) && (var_1_23 == ((unsigned char) var_1_24))
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
