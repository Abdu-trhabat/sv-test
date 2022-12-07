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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch76PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 256.5;
unsigned char var_1_2 = 0;
double var_1_3 = 7.5;
double var_1_4 = 256.2;
double var_1_5 = 2.75;
signed long int var_1_6 = -64;
double var_1_7 = 8.05;
float var_1_8 = 5.25;
signed long int var_1_11 = 4;
unsigned short int var_1_14 = 10000;
unsigned short int var_1_16 = 5;
unsigned short int var_1_17 = 4;
unsigned char var_1_18 = 100;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 8;
double var_1_21 = 63.25;
double var_1_22 = 4.5;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
double var_1_29 = 99.25;
double var_1_30 = 255.25;
double var_1_31 = 63.8;
unsigned long int var_1_32 = 32;
unsigned long int var_1_33 = 1;
unsigned long int var_1_34 = 32;
signed long int var_1_35 = 16;
signed long int var_1_36 = 128;
signed long int var_1_37 = -32;
signed long int var_1_38 = 16;
unsigned long int var_1_39 = 50;
unsigned long int var_1_40 = 25;
unsigned short int var_1_41 = 0;
unsigned short int var_1_42 = 1;
unsigned short int var_1_43 = 8;
unsigned short int var_1_44 = 100;
unsigned short int var_1_45 = 2;
unsigned short int var_1_46 = 10000;
unsigned short int var_1_47 = 10;
unsigned short int var_1_48 = 100;
signed short int var_1_49 = -256;
signed short int var_1_50 = 5;
signed char var_1_51 = -32;
signed char var_1_52 = -16;
unsigned long int var_1_53 = 32;
unsigned long int var_1_54 = 4;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
unsigned long int var_1_58 = 4;
unsigned long int var_1_59 = 3908368003;
unsigned long int var_1_60 = 3436965163;
double var_1_61 = 255.75;
double var_1_62 = 31.8;
double var_1_63 = 64.75;
unsigned char var_1_64 = 2;
unsigned char var_1_65 = 2;
double var_1_66 = 8.6;
double var_1_67 = 64.25;
double var_1_68 = 499.75;
signed char var_1_69 = 8;
signed char var_1_70 = -5;
signed char var_1_71 = -1;
signed char var_1_72 = 50;
signed char var_1_73 = 2;
signed char var_1_74 = 1;
signed char var_1_75 = 0;
signed short int var_1_76 = 5;
signed char var_1_77 = -64;
float var_1_78 = 5.6;
signed long int var_1_79 = 1;
signed long int var_1_80 = 1701334304;
double var_1_81 = 100000000000000.8;
signed char var_1_82 = -1;
signed char var_1_83 = 0;
unsigned char var_1_84 = 0;
unsigned char var_1_85 = 128;
unsigned char var_1_86 = 128;
signed char var_1_87 = -32;
signed char var_1_88 = -2;
signed char var_1_89 = 25;
signed char var_1_90 = -100;
float var_1_91 = 2.5;
signed char var_1_92 = -4;
double var_1_93 = 24.85;
signed short int var_1_94 = -256;
unsigned char var_1_95 = 64;
signed long int var_1_96 = -64;
signed char var_1_97 = 0;
unsigned char var_1_98 = 2;
unsigned char var_1_99 = 128;
signed char var_1_100 = -1;
float var_1_101 = 5.5;
signed long int var_1_102 = -1;
signed short int var_1_103 = 10;
unsigned short int var_1_104 = 1000;
unsigned short int var_1_105 = 50587;
unsigned long int var_1_106 = 4;
double var_1_107 = 500.75;
double var_1_108 = 0.0;
double var_1_109 = 0.0;
float var_1_110 = 9999999999.75;
float var_1_111 = 127.3;
float var_1_112 = 255.64;
unsigned char var_1_113 = 1;
unsigned long int var_1_114 = 128;
unsigned char var_1_115 = 32;
unsigned char var_1_116 = 0;
unsigned char var_1_117 = 64;
signed short int var_1_118 = 64;
unsigned char var_1_119 = 10;
unsigned long int var_1_120 = 32;
unsigned long int var_1_121 = 128;
unsigned char var_1_122 = 5;
unsigned char var_1_123 = 1;
unsigned long int var_1_124 = 32;
double var_1_125 = 3.25;
unsigned char var_1_126 = 1;
unsigned short int var_1_127 = 0;
double var_1_128 = 16.6;
unsigned char var_1_129 = 1;
signed long int var_1_130 = 10;
signed short int var_1_131 = 0;
unsigned char var_1_132 = 16;
signed long int var_1_133 = -50;
unsigned long int var_1_134 = 2;
unsigned short int var_1_135 = 64;
signed long int var_1_136 = 50;
float var_1_137 = 16.414;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 256.5;
float last_1_var_1_8 = 5.25;
signed long int last_1_var_1_11 = 4;
unsigned short int last_1_var_1_14 = 10000;
unsigned short int last_1_var_1_17 = 4;
unsigned char last_1_var_1_18 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_21 = (abs (var_1_22));


	// From: CodeObject2
	if (var_1_24) {
		var_1_23 = ((var_1_25 || var_1_26) || var_1_27);
	} else {
		var_1_23 = (! (! (! var_1_28)));
	}


	// From: CodeObject3
	if (var_1_21 != (- var_1_22)) {
		var_1_29 = (max (var_1_22 , (min (31.949 , (0.8 + var_1_30)))));
	} else {
		var_1_29 = (min ((abs (var_1_30 + var_1_31)) , var_1_22));
	}


	// From: CodeObject4
	if (var_1_21 <= var_1_29) {
		if (var_1_21 >= ((max (var_1_31 , var_1_30)) + var_1_29)) {
			var_1_32 = (abs (max (var_1_33 , var_1_34)));
		} else {
			if ((var_1_35 + (var_1_36 | var_1_37)) < var_1_38) {
				var_1_32 = var_1_33;
			}
		}
	} else {
		var_1_32 = (max (var_1_39 , (2828375485u - var_1_40)));
	}


	// From: CodeObject5
	if (var_1_37 <= (min ((var_1_38 * var_1_36) , var_1_35))) {
		var_1_41 = (max (var_1_42 , (max ((var_1_43 + var_1_44) , var_1_45))));
	} else {
		if (var_1_35 > var_1_32) {
			var_1_41 = var_1_43;
		} else {
			var_1_41 = (var_1_43 + ((var_1_46 - var_1_47) + var_1_48));
		}
	}


	// From: CodeObject6
	if ((abs (var_1_41)) < (var_1_43 ^ var_1_42)) {
		if (! (var_1_47 <= var_1_32)) {
			var_1_49 = ((var_1_47 + (min (var_1_48 , var_1_50))) - var_1_46);
		}
	}


	// From: CodeObject7
	if (var_1_29 != var_1_31) {
		var_1_51 = var_1_52;
	} else {
		if ((max (var_1_38 , var_1_34)) >= (var_1_46 / (max (var_1_53 , var_1_54)))) {
			if ((var_1_39 * (var_1_53 | var_1_36)) > (var_1_54 % var_1_46)) {
				var_1_51 = (abs (5));
			}
		}
	}


	// From: CodeObject8
	if (var_1_31 <= var_1_22) {
		var_1_55 = (! (var_1_28 && (var_1_56 && var_1_57)));
	} else {
		if ((- var_1_32) != var_1_33) {
			var_1_55 = (((var_1_57 || var_1_26) && var_1_27) || var_1_25);
		} else {
			var_1_55 = (var_1_57 && var_1_28);
		}
	}


	// From: CodeObject9
	if (var_1_26) {
		var_1_58 = (min (var_1_44 , (var_1_43 + var_1_40)));
	} else {
		if (var_1_25) {
			if (var_1_27) {
				var_1_58 = (((max (var_1_59 , var_1_60)) - var_1_46) - (abs (var_1_41)));
			} else {
				var_1_58 = (min (var_1_41 , (abs (var_1_60 - var_1_45))));
			}
		}
	}


	// From: CodeObject10
	if ((var_1_32 ^ var_1_58) <= var_1_33) {
		if ((var_1_60 <= (abs (var_1_38))) || var_1_55) {
			var_1_61 = (var_1_62 - (abs (var_1_30)));
		} else {
			if ((var_1_46 / var_1_54) >= var_1_60) {
				var_1_61 = (var_1_62 - 31.5);
			} else {
				var_1_61 = (abs (var_1_31));
			}
		}
	} else {
		var_1_61 = (var_1_30 + (var_1_63 - 63.625));
	}


	// From: CodeObject11
	if (128 >= (max (var_1_32 , var_1_42))) {
		var_1_64 = var_1_65;
	}


	// From: CodeObject12
	if (var_1_42 >= var_1_35) {
		if ((min (var_1_64 , var_1_48)) != (5 | (~ var_1_38))) {
			var_1_66 = (abs (var_1_62));
		}
	} else {
		if (var_1_39 < var_1_50) {
			var_1_66 = (max (var_1_30 , (abs (var_1_22))));
		} else {
			if (var_1_61 <= var_1_21) {
				if (var_1_21 > var_1_62) {
					var_1_66 = ((abs (100.25)) + (abs (var_1_31)));
				}
			} else {
				var_1_66 = ((min (var_1_63 , (max (var_1_62 , var_1_67)))) - var_1_68);
			}
		}
	}


	// From: CodeObject13
	if ((var_1_58 <= var_1_36) && var_1_28) {
		if (! (var_1_34 < var_1_33)) {
			var_1_69 = (max (var_1_52 , (min (var_1_70 , var_1_71))));
		}
	} else {
		if (var_1_66 <= var_1_63) {
			if (var_1_38 > (min (-8 , -1000000))) {
				var_1_69 = (var_1_72 + var_1_73);
			} else {
				if ((abs (- var_1_31)) < (var_1_22 + var_1_30)) {
					var_1_69 = (var_1_74 - var_1_75);
				}
			}
		} else {
			var_1_69 = (abs (var_1_75));
		}
	}


	// From: CodeObject14
	if ((var_1_38 & var_1_47) < 0) {
		var_1_76 = (var_1_75 + var_1_65);
	} else {
		if (((var_1_77 & var_1_35) ^ var_1_43) <= var_1_41) {
			if (var_1_28) {
				var_1_76 = (abs (100));
			} else {
				var_1_76 = (abs (var_1_47 - var_1_50));
			}
		}
	}


	// From: CodeObject15
	if (var_1_24 || (var_1_36 != var_1_48)) {
		if (var_1_41 > var_1_38) {
			var_1_78 = (max (var_1_31 , var_1_63));
		}
	}


	// From: CodeObject16
	if (var_1_23) {
		var_1_79 = (((var_1_80 - var_1_48) - var_1_43) - (max (var_1_50 , var_1_75)));
	} else {
		var_1_79 = var_1_42;
	}


	// From: CodeObject17
	if (var_1_72 != ((-128 | var_1_76) * var_1_34)) {
		var_1_81 = var_1_22;
	} else {
		if (! (var_1_27 || (var_1_64 != var_1_32))) {
			var_1_81 = var_1_63;
		}
	}


	// From: CodeObject18
	if (((1646989504 - 5) - var_1_47) >= (abs (var_1_44))) {
		var_1_82 = (abs (var_1_75 - var_1_83));
	} else {
		if (var_1_55 && (var_1_40 < (min (var_1_44 , var_1_59)))) {
			var_1_82 = (min ((var_1_72 + var_1_73) , (max (var_1_52 , var_1_74))));
		}
	}


	// From: CodeObject19
	if (var_1_83 >= var_1_58) {
		var_1_84 = ((min (var_1_85 , (abs (var_1_86)))) - var_1_83);
	}


	// From: CodeObject20
	if (var_1_44 <= var_1_75) {
		var_1_87 = (min (var_1_52 , var_1_75));
	} else {
		var_1_87 = ((min (var_1_73 , var_1_72)) + (abs (min (var_1_88 , var_1_89))));
	}


	// From: CodeObject21
	if (var_1_47 <= var_1_85) {
		var_1_90 = var_1_75;
	} else {
		var_1_90 = (max (var_1_75 , (abs (var_1_74))));
	}


	// From: CodeObject22
	if (var_1_28) {
		if (var_1_55) {
			var_1_91 = 9.5f;
		}
	}


	// From: CodeObject23
	if (var_1_35 == (~ (min (var_1_87 , var_1_82)))) {
		var_1_92 = ((50 + 16) - var_1_75);
	}


	// From: CodeObject24
	if (var_1_86 >= (var_1_38 + var_1_83)) {
		if ((min (var_1_74 , var_1_94)) > (abs (var_1_84))) {
			var_1_93 = (min ((min (var_1_31 , 2.4)) , (min ((abs (var_1_68)) , (var_1_63 - var_1_67)))));
		}
	} else {
		var_1_93 = var_1_68;
	}


	// From: CodeObject25
	var_1_95 = (min (var_1_65 , (var_1_85 - var_1_83)));


	// From: CodeObject26
	if (var_1_78 <= var_1_67) {
		if (((var_1_38 >> var_1_92) ^ var_1_46) == var_1_65) {
			var_1_96 = (max (var_1_90 , var_1_69));
		} else {
			var_1_96 = (abs (var_1_83));
		}
	} else {
		if (var_1_31 >= (var_1_29 + var_1_66)) {
			var_1_96 = (var_1_74 + var_1_48);
		} else {
			var_1_96 = ((max (var_1_70 , var_1_76)) + (abs (min (var_1_87 , var_1_86))));
		}
	}


	// From: CodeObject27
	if ((var_1_38 * var_1_45) == var_1_70) {
		var_1_97 = (var_1_83 - (abs (var_1_89)));
	} else {
		var_1_97 = (var_1_75 - var_1_83);
	}


	// From: CodeObject28
	if ((var_1_76 | var_1_95) <= var_1_85) {
		if (((abs (var_1_48)) >> (abs (25))) > (var_1_88 / var_1_86)) {
			var_1_98 = (abs (max ((abs (4)) , var_1_83)));
		} else {
			var_1_98 = (abs (var_1_75));
		}
	}


	// From: CodeObject29
	if (16 > var_1_75) {
		if ((var_1_94 ^ var_1_95) > var_1_77) {
			var_1_99 = (max (var_1_86 , var_1_85));
		}
	}


	// From: CodeObject30
	if (var_1_25) {
		var_1_100 = (min ((min (var_1_88 , var_1_75)) , (min (var_1_70 , var_1_83))));
	} else {
		var_1_100 = (abs (abs (var_1_75 - var_1_83)));
	}


	// From: CodeObject31
	if (2 >= (max ((10 ^ var_1_100) , var_1_48))) {
		var_1_101 = ((abs (var_1_63)) + var_1_31);
	}


	// From: CodeObject32
	if (var_1_35 > (~ (abs (var_1_90)))) {
		var_1_102 = (abs (var_1_75));
	} else {
		var_1_102 = (abs (var_1_47));
	}


	// From: CodeObject33
	if (var_1_32 > (var_1_45 / var_1_46)) {
		var_1_103 = (min (var_1_89 , var_1_99));
	} else {
		var_1_103 = (max (var_1_85 , var_1_92));
	}


	// From: CodeObject34
	if (var_1_38 < var_1_60) {
		if (var_1_83 <= (~ (var_1_72 | var_1_94))) {
			var_1_104 = (abs ((abs (var_1_50)) + var_1_44));
		} else {
			var_1_104 = (var_1_105 - var_1_98);
		}
	}


	// From: CodeObject35
	var_1_106 = (abs (var_1_47));


	// From: CodeObject36
	if ((var_1_85 | (var_1_99 >> var_1_75)) >= var_1_82) {
		if ((abs (var_1_101)) < var_1_21) {
			var_1_107 = (((min (var_1_108 , var_1_109)) - var_1_63) - var_1_67);
		}
	} else {
		if (var_1_63 < var_1_21) {
			var_1_107 = (abs (var_1_108));
		} else {
			if (((var_1_30 / var_1_109) * (min (var_1_31 , var_1_81))) < (- 127.5)) {
				var_1_107 = (min (var_1_67 , (var_1_31 + var_1_63)));
			}
		}
	}


	// From: CodeObject37
	if (var_1_33 < (var_1_86 * var_1_104)) {
		var_1_110 = (((max (var_1_63 , var_1_111)) + var_1_112) - var_1_62);
	}


	// From: CodeObject38
	if (var_1_55 && var_1_25) {
		if ((var_1_35 < var_1_60) || (! var_1_57)) {
			var_1_113 = (! var_1_25);
		} else {
			var_1_113 = ((var_1_62 < var_1_110) || (var_1_56 || var_1_28));
		}
	}


	// From: CodeObject39
	if (var_1_41 > (~ var_1_105)) {
		var_1_114 = (max ((abs (var_1_34)) , (var_1_59 - var_1_46)));
	} else {
		var_1_114 = (max (((min (2u , var_1_86)) + var_1_44) , 64u));
	}


	// From: CodeObject40
	if (var_1_55) {
		var_1_115 = (min (var_1_75 , var_1_86));
	} else {
		var_1_115 = ((max ((max (var_1_85 , var_1_86)) , 128)) - (abs (max (var_1_75 , var_1_83))));
	}


	// From: CodeObject41
	var_1_116 = var_1_75;


	// From: CodeObject42
	if (var_1_51 > ((var_1_99 % var_1_53) ^ var_1_50)) {
		if (var_1_28) {
			var_1_117 = var_1_65;
		}
	}


	// From: CodeObject43
	if (var_1_32 < (var_1_43 << var_1_65)) {
		var_1_118 = (abs (var_1_82));
	} else {
		var_1_118 = var_1_51;
	}


	// From: CodeObject44
	if (var_1_23) {
		var_1_119 = var_1_85;
	}


	// From: CodeObject45
	if (var_1_25) {
		var_1_120 = var_1_50;
	}


	// From: CodeObject46
	var_1_121 = var_1_105;


	// From: CodeObject47
	if (var_1_56) {
		var_1_122 = var_1_85;
	} else {
		var_1_122 = var_1_85;
	}


	// From: CodeObject48
	var_1_123 = var_1_26;


	// From: CodeObject49
	var_1_124 = var_1_122;


	// From: CodeObject50
	var_1_125 = var_1_22;


	// From: CodeObject51
	if (var_1_23) {
		var_1_126 = 1;
	}


	// From: CodeObject52
	if (var_1_25) {
		var_1_127 = var_1_65;
	} else {
		var_1_127 = var_1_99;
	}


	// From: CodeObject53
	if (var_1_126) {
		var_1_128 = 4.5;
	}


	// From: CodeObject54
	var_1_129 = var_1_25;


	// From: CodeObject55
	if (var_1_23) {
		var_1_130 = var_1_104;
	}


	// From: CodeObject56
	var_1_131 = var_1_87;


	// From: CodeObject57
	if (var_1_55) {
		var_1_132 = var_1_83;
	} else {
		var_1_132 = var_1_85;
	}


	// From: CodeObject58
	var_1_133 = var_1_103;


	// From: CodeObject59
	if (var_1_25) {
		var_1_134 = var_1_41;
	} else {
		var_1_134 = var_1_41;
	}


	// From: CodeObject60
	var_1_135 = var_1_115;


	// From: CodeObject61
	if (var_1_113) {
		var_1_136 = var_1_47;
	} else {
		var_1_136 = var_1_69;
	}


	// From: CodeObject62
	if ((min (5.7f , (abs (var_1_68)))) > var_1_66) {
		var_1_137 = var_1_63;
	} else {
		if (var_1_24 || var_1_28) {
			var_1_137 = (max (9.9999999962E8f , var_1_31));
		}
	}


	// From: Req6Batch76PS_CN_500
	if (var_1_2) {
		if (last_1_var_1_8 == var_1_5) {
			if ((128 * (min (last_1_var_1_18 , last_1_var_1_11))) > 1) {
				var_1_17 = last_1_var_1_18;
			}
		} else {
			var_1_17 = last_1_var_1_18;
		}
	} else {
		var_1_17 = last_1_var_1_18;
	}


	// From: Req1Batch76PS_CN_500
	if (! var_1_2) {
		var_1_1 = (min ((min (var_1_3 , var_1_4)) , var_1_5));
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch76PS_CN_500
	if (var_1_5 > (var_1_3 / var_1_7)) {
		if (! var_1_2) {
			var_1_6 = -10;
		}
	}


	// From: Req7Batch76PS_CN_500
	unsigned short int stepLocal_1 = var_1_16;
	if ((var_1_6 + (var_1_6 | var_1_6)) > stepLocal_1) {
		var_1_18 = (128 - (var_1_19 + var_1_20));
	}


	// From: Req5Batch76PS_CN_500
	if (var_1_5 >= var_1_1) {
		if ((abs (1.2)) < var_1_4) {
			var_1_14 = var_1_18;
		} else {
			var_1_14 = var_1_18;
		}
	}


	// From: Req4Batch76PS_CN_500
	if (var_1_4 <= last_1_var_1_1) {
		var_1_11 = (last_1_var_1_14 + -128);
	} else {
		var_1_11 = ((min (-256 , last_1_var_1_14)) + (min (last_1_var_1_17 , (max (last_1_var_1_17 , 256)))));
	}


	// From: Req3Batch76PS_CN_500
	signed long int stepLocal_0 = var_1_11;
	if ((var_1_14 * var_1_17) >= stepLocal_0) {
		if (var_1_2) {
			var_1_8 = var_1_4;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854765600e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	assume_abort_if_not(var_1_7 != 0.0F);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 64);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -461168.6018427382800e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -461168.6018427382800e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967294);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 4294967294);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483648);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483648);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= -2147483648);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= -2147483648);
	assume_abort_if_not(var_1_38 <= 2147483647);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 4294967294);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 65534);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 32767);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 32767);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 8192);
	assume_abort_if_not(var_1_46 <= 16384);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 8192);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 16383);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 16383);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -127);
	assume_abort_if_not(var_1_52 <= 126);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 4294967295);
	assume_abort_if_not(var_1_53 != 0);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 4294967295);
	assume_abort_if_not(var_1_54 != 0);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 1);
	assume_abort_if_not(var_1_57 <= 1);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 3221225470);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 3221225470);
	assume_abort_if_not(var_1_60 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427382800e+12F && var_1_63 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 254);
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854765600e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854765600e+12F && var_1_68 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_70 >= -127);
	assume_abort_if_not(var_1_70 <= 126);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= -127);
	assume_abort_if_not(var_1_71 <= 126);
	var_1_72 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_72 >= -63);
	assume_abort_if_not(var_1_72 <= 63);
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= -63);
	assume_abort_if_not(var_1_73 <= 63);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= -1);
	assume_abort_if_not(var_1_74 <= 126);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 126);
	var_1_77 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_77 >= -128);
	assume_abort_if_not(var_1_77 <= 127);
	var_1_80 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_80 >= 1610612734);
	assume_abort_if_not(var_1_80 <= 2147483646);
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 126);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 127);
	assume_abort_if_not(var_1_85 <= 254);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 127);
	assume_abort_if_not(var_1_86 <= 254);
	var_1_88 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_88 >= -63);
	assume_abort_if_not(var_1_88 <= 63);
	var_1_89 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_89 >= -63);
	assume_abort_if_not(var_1_89 <= 63);
	var_1_94 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_94 >= -32768);
	assume_abort_if_not(var_1_94 <= 32767);
	var_1_105 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_105 >= 32767);
	assume_abort_if_not(var_1_105 <= 65534);
	var_1_108 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_108 >= 4611686.018427382800e+12F && var_1_108 <= -1.0e-20F) || (var_1_108 <= 9223372.036854765600e+12F && var_1_108 >= 1.0e-20F ));
	var_1_109 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_109 >= 4611686.018427382800e+12F && var_1_109 <= -1.0e-20F) || (var_1_109 <= 9223372.036854765600e+12F && var_1_109 >= 1.0e-20F ));
	var_1_111 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_111 >= 0.0F && var_1_111 <= -1.0e-20F) || (var_1_111 <= 4611686.018427382800e+12F && var_1_111 >= 1.0e-20F ));
	var_1_112 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_112 >= 0.0F && var_1_112 <= -1.0e-20F) || (var_1_112 <= 4611686.018427382800e+12F && var_1_112 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_18 = var_1_18;
}

int property() {
	return (((((((! var_1_2) ? (var_1_1 == ((double) (min ((min (var_1_3 , var_1_4)) , var_1_5)))) : (var_1_1 == ((double) var_1_4))) && ((var_1_5 > (var_1_3 / var_1_7)) ? ((! var_1_2) ? (var_1_6 == ((signed long int) -10)) : 1) : 1)) && (((var_1_14 * var_1_17) >= var_1_11) ? (var_1_2 ? (var_1_8 == ((float) var_1_4)) : 1) : 1)) && ((var_1_4 <= last_1_var_1_1) ? (var_1_11 == ((signed long int) (last_1_var_1_14 + -128))) : (var_1_11 == ((signed long int) ((min (-256 , last_1_var_1_14)) + (min (last_1_var_1_17 , (max (last_1_var_1_17 , 256))))))))) && ((var_1_5 >= var_1_1) ? (((abs (1.2)) < var_1_4) ? (var_1_14 == ((unsigned short int) var_1_18)) : (var_1_14 == ((unsigned short int) var_1_18))) : 1)) && (var_1_2 ? ((last_1_var_1_8 == var_1_5) ? (((128 * (min (last_1_var_1_18 , last_1_var_1_11))) > 1) ? (var_1_17 == ((unsigned short int) last_1_var_1_18)) : 1) : (var_1_17 == ((unsigned short int) last_1_var_1_18))) : (var_1_17 == ((unsigned short int) last_1_var_1_18)))) && (((var_1_6 + (var_1_6 | var_1_6)) > var_1_16) ? (var_1_18 == ((unsigned char) (128 - (var_1_19 + var_1_20)))) : 1)
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
