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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch51PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 128;
double var_1_4 = 32.3;
double var_1_5 = 0.25;
unsigned char var_1_7 = 2;
signed char var_1_8 = -10;
signed char var_1_9 = 5;
signed char var_1_10 = 4;
signed char var_1_11 = 100;
unsigned long int var_1_12 = 8;
unsigned char var_1_13 = 0;
unsigned long int var_1_15 = 1114432789;
double var_1_17 = 256.8;
double var_1_18 = 1.25;
unsigned long int var_1_19 = 16;
unsigned char var_1_21 = 1;
double var_1_22 = -0.5;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
float var_1_25 = -0.575;
signed char var_1_26 = -128;
signed char var_1_27 = 5;
signed char var_1_28 = 1;
signed long int var_1_29 = 1;
float var_1_30 = 10.8;
float var_1_31 = 49.2;
float var_1_32 = 0.4;
unsigned char var_1_33 = 10;
unsigned char var_1_34 = 2;
unsigned char var_1_35 = 32;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 64;
signed char var_1_38 = -8;
signed char var_1_39 = 4;
float var_1_40 = 255.5;
float var_1_41 = 49.4;
unsigned short int var_1_42 = 4;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
float var_1_47 = 1.25;
float var_1_48 = 100.08;
double var_1_49 = 127.4;
signed long int var_1_50 = -2;
float var_1_51 = 99.7;
signed long int var_1_52 = 10000;
unsigned char var_1_53 = 50;
unsigned short int var_1_54 = 10;
unsigned char var_1_55 = 128;
unsigned char var_1_56 = 32;
unsigned long int var_1_57 = 8;
unsigned short int var_1_58 = 64;
unsigned long int var_1_59 = 4054144457;
signed short int var_1_60 = 32;
unsigned long int var_1_61 = 5;
unsigned short int var_1_62 = 256;
unsigned long int var_1_63 = 16;
unsigned char var_1_64 = 0;
signed char var_1_65 = -2;
signed long int var_1_66 = 8;
unsigned char var_1_67 = 1;
signed long int var_1_68 = 5;
signed char var_1_69 = 10;
float var_1_70 = 49.625;
float var_1_71 = 4.6;
unsigned short int var_1_72 = 25;
float var_1_73 = 255.75;
float var_1_74 = 0.0;
float var_1_75 = 99999.25;
signed char var_1_76 = -5;
unsigned long int var_1_77 = 64;
signed char var_1_78 = -32;
unsigned char var_1_79 = 10;
signed char var_1_80 = 4;
float var_1_81 = 9.45;
float var_1_82 = 16.6;
unsigned char var_1_83 = 10;
unsigned char var_1_84 = 200;
unsigned char var_1_85 = 0;
unsigned char var_1_86 = 64;
unsigned short int var_1_87 = 16;
float var_1_88 = 31.75;
unsigned short int var_1_89 = 45039;
unsigned short int var_1_90 = 47488;
signed long int var_1_91 = 32;
unsigned long int var_1_92 = 2;
signed short int var_1_93 = -2;
signed short int var_1_94 = 10000;
unsigned char var_1_95 = 2;
unsigned char var_1_96 = 4;
signed long int var_1_97 = -25;
signed short int var_1_98 = 4;
double var_1_99 = 16.38;
signed long int var_1_100 = -16;
double var_1_101 = 0.95;
signed short int var_1_102 = 10;
unsigned char var_1_103 = 1;
unsigned char var_1_104 = 0;
signed long int var_1_105 = -64;
unsigned short int var_1_106 = 25;
signed short int var_1_107 = 0;
signed long int var_1_108 = 1000000000;
unsigned short int var_1_109 = 128;
signed char var_1_110 = 50;
signed char var_1_111 = 16;
signed char var_1_112 = 1;
signed char var_1_113 = 5;
signed char var_1_114 = 1;
signed char var_1_115 = 5;
unsigned long int var_1_116 = 8;
unsigned short int var_1_117 = 256;
unsigned char var_1_118 = 8;
unsigned short int var_1_119 = 2;
float var_1_120 = 64.5;
signed char var_1_121 = -10;
unsigned long int var_1_122 = 10;
unsigned char var_1_123 = 0;
signed long int var_1_124 = 128;
signed char var_1_125 = -25;
signed long int var_1_126 = -32;
unsigned char var_1_127 = 10;
unsigned short int var_1_128 = 1;
unsigned char var_1_129 = 1;
unsigned char var_1_130 = 1;
signed short int var_1_131 = 64;
unsigned char var_1_132 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 128;
unsigned long int last_1_var_1_12 = 8;
double last_1_var_1_17 = 256.8;
unsigned char last_1_var_1_21 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_26 % (max (var_1_27 , var_1_28))) > var_1_29) {
		var_1_25 = ((max (var_1_30 , var_1_31)) - var_1_32);
	}


	// From: CodeObject2
	if (var_1_32 < (max (var_1_30 , (abs (var_1_25))))) {
		var_1_33 = (max (var_1_34 , var_1_35));
	} else {
		if (var_1_36) {
			var_1_33 = ((64 + var_1_37) - 50);
		}
	}


	// From: CodeObject3
	if (var_1_36) {
		var_1_38 = (max (-8 , var_1_39));
	}


	// From: CodeObject4
	if ((var_1_34 / var_1_37) != (var_1_29 | var_1_39)) {
		var_1_40 = (var_1_31 - (max (var_1_30 , var_1_32)));
	}


	// From: CodeObject5
	if (var_1_36) {
		var_1_41 = (min ((min (var_1_31 , var_1_32)) , var_1_30));
	}


	// From: CodeObject6
	if (! var_1_36) {
		var_1_42 = (abs (abs (abs (var_1_33))));
	}


	// From: CodeObject7
	if (var_1_37 > var_1_29) {
		var_1_43 = ((var_1_36 && var_1_44) || (! (var_1_45 || var_1_46)));
	} else {
		if (var_1_35 < 32) {
			var_1_43 = var_1_46;
		}
	}


	// From: CodeObject8
	if (var_1_37 > (var_1_33 ^ 16)) {
		var_1_47 = var_1_32;
	}


	// From: CodeObject9
	if (var_1_34 > var_1_26) {
		var_1_48 = ((abs (4.875f)) - var_1_31);
	} else {
		if (var_1_30 < (- var_1_41)) {
			var_1_48 = (31.6f - (max (var_1_32 , var_1_30)));
		} else {
			if (var_1_43 && var_1_45) {
				if (var_1_41 != var_1_30) {
					var_1_48 = (min (var_1_31 , var_1_32));
				}
			}
		}
	}


	// From: CodeObject10
	if (var_1_45) {
		if ((min (var_1_47 , var_1_30)) > var_1_25) {
			if (var_1_27 >= var_1_39) {
				var_1_49 = var_1_31;
			} else {
				var_1_49 = (min (var_1_30 , var_1_31));
			}
		}
	}


	// From: CodeObject11
	if (var_1_45) {
		if ((min (var_1_35 , 128)) > var_1_29) {
			var_1_50 = (abs (abs (var_1_34 - var_1_42)));
		}
	} else {
		var_1_50 = (var_1_34 - (var_1_35 + var_1_37));
	}


	// From: CodeObject12
	if (4 >= (abs (var_1_26))) {
		var_1_51 = (abs (var_1_32));
	}


	// From: CodeObject13
	if ((var_1_50 / var_1_28) < var_1_37) {
		if (31.5f == var_1_31) {
			var_1_52 = (abs (var_1_38));
		}
	} else {
		if (var_1_29 > var_1_26) {
			var_1_52 = var_1_33;
		} else {
			var_1_52 = (min (var_1_27 , (max ((abs (var_1_28)) , (max (var_1_42 , var_1_38))))));
		}
	}


	// From: CodeObject14
	if ((var_1_52 ^ var_1_33) > var_1_27) {
		if (var_1_36 || (var_1_33 < var_1_35)) {
			if (var_1_54 > var_1_35) {
				if ((-5 >> var_1_27) < (var_1_29 & var_1_34)) {
					var_1_53 = (max (var_1_34 , var_1_35));
				}
			} else {
				var_1_53 = (max (var_1_34 , (var_1_55 - (var_1_56 + 32))));
			}
		} else {
			var_1_53 = (max ((abs (var_1_34)) , var_1_56));
		}
	}


	// From: CodeObject15
	if ((min (var_1_42 , var_1_58)) >= var_1_50) {
		var_1_57 = (abs (var_1_56));
	} else {
		if (var_1_50 > (var_1_42 - (max (var_1_35 , var_1_58)))) {
			var_1_57 = (max ((abs (var_1_58)) , 64u));
		} else {
			if (-2 < var_1_42) {
				if (! var_1_45) {
					var_1_57 = (var_1_59 - (max (var_1_33 , (abs (var_1_54)))));
				}
			} else {
				if (64u < (var_1_29 & var_1_42)) {
					var_1_57 = (max (var_1_58 , var_1_37));
				}
			}
		}
	}


	// From: CodeObject16
	if (var_1_36) {
		var_1_60 = var_1_27;
	} else {
		var_1_60 = var_1_39;
	}


	// From: CodeObject17
	if (var_1_45) {
		var_1_61 = var_1_55;
	} else {
		var_1_61 = var_1_35;
	}


	// From: CodeObject18
	var_1_62 = var_1_56;


	// From: CodeObject19
	if ((var_1_65 % var_1_37) < var_1_66) {
		var_1_63 = (abs (var_1_34));
	}


	// From: CodeObject20
	if (var_1_50 <= var_1_54) {
		if (var_1_66 <= var_1_27) {
			var_1_67 = (var_1_44 && (! var_1_46));
		}
	}


	// From: CodeObject21
	if (var_1_25 > var_1_40) {
		if ((min ((var_1_56 | var_1_62) , var_1_66)) <= var_1_57) {
			var_1_68 = (abs (min ((min (-1000000000 , var_1_26)) , (var_1_62 - var_1_33))));
		}
	}


	// From: CodeObject22
	if (var_1_68 == (min ((abs (var_1_60)) , var_1_57))) {
		var_1_69 = (var_1_56 - (100 - 1));
	}


	// From: CodeObject23
	if (var_1_64) {
		var_1_70 = (var_1_30 - var_1_32);
	}


	// From: CodeObject24
	if ((abs (var_1_31)) > var_1_40) {
		var_1_71 = var_1_30;
	}


	// From: CodeObject25
	if (var_1_34 > 5) {
		if ((var_1_32 * var_1_49) > (- var_1_40)) {
			var_1_72 = (max (var_1_35 , (max (var_1_55 , (max (25 , var_1_37))))));
		} else {
			var_1_72 = (min ((max (var_1_56 , var_1_55)) , var_1_34));
		}
	} else {
		var_1_72 = (max (32 , var_1_55));
	}


	// From: CodeObject26
	if (var_1_56 > var_1_33) {
		if ((var_1_54 % (max (var_1_55 , var_1_37))) < -4) {
			var_1_73 = (var_1_31 - (var_1_74 - var_1_75));
		} else {
			var_1_73 = (abs (abs (var_1_74)));
		}
	}


	// From: CodeObject27
	if ((~ var_1_63) >= ((var_1_66 * var_1_77) | var_1_56)) {
		if ((var_1_72 + var_1_34) <= (~ (var_1_53 | var_1_68))) {
			if (var_1_55 < var_1_28) {
				var_1_76 = (var_1_56 - 1);
			}
		} else {
			if (var_1_58 > (- (- var_1_50))) {
				var_1_76 = (abs ((abs (32)) - var_1_56));
			}
		}
	} else {
		if ((min (var_1_39 , var_1_35)) != var_1_56) {
			var_1_76 = (8 - var_1_56);
		} else {
			if (var_1_35 > (var_1_28 + var_1_29)) {
				var_1_76 = (max (var_1_39 , (max ((max (var_1_56 , var_1_78)) , -2))));
			}
		}
	}


	// From: CodeObject28
	if (var_1_26 < (var_1_56 - var_1_80)) {
		if (var_1_52 == var_1_56) {
			var_1_79 = var_1_80;
		} else {
			var_1_79 = (abs (var_1_56));
		}
	}


	// From: CodeObject29
	if (var_1_43 && var_1_44) {
		var_1_81 = (min (var_1_32 , (199.8f - var_1_74)));
	}


	// From: CodeObject30
	if (var_1_69 != ((var_1_57 ^ var_1_72) * var_1_58)) {
		if (var_1_79 < (var_1_53 / var_1_37)) {
			var_1_82 = (abs (var_1_75));
		}
	}


	// From: CodeObject31
	if (! var_1_45) {
		var_1_83 = ((max ((var_1_84 - var_1_85) , (var_1_37 + var_1_86))) - var_1_80);
	}


	// From: CodeObject32
	if (var_1_71 >= var_1_88) {
		if (var_1_26 < var_1_86) {
			if ((var_1_74 + var_1_40) > (abs (abs (var_1_88)))) {
				var_1_87 = ((max (var_1_89 , var_1_90)) - var_1_83);
			}
		} else {
			var_1_87 = (min ((var_1_90 - var_1_86) , var_1_55));
		}
	}


	// From: CodeObject33
	if (var_1_46) {
		var_1_91 = (max (var_1_69 , (abs (var_1_56))));
	} else {
		if ((max (2 , (var_1_58 % var_1_86))) < var_1_50) {
			var_1_91 = (abs (var_1_86));
		}
	}


	// From: CodeObject34
	if ((var_1_33 & (abs (var_1_59))) > (var_1_91 / 25u)) {
		var_1_92 = (abs (500u));
	} else {
		if (! (var_1_78 <= var_1_54)) {
			var_1_92 = ((var_1_58 + (abs (2u))) + 32u);
		}
	}


	// From: CodeObject35
	if ((var_1_32 <= var_1_81) || var_1_43) {
		if (((var_1_87 * var_1_85) ^ 5) >= var_1_63) {
			if (! (var_1_27 != var_1_60)) {
				var_1_93 = ((var_1_83 + (var_1_94 - var_1_37)) - (min (var_1_55 , var_1_56)));
			}
		}
	} else {
		var_1_93 = (abs (max ((var_1_56 - 8) , var_1_39)));
	}


	// From: CodeObject36
	if (var_1_89 < (var_1_91 * (var_1_92 * var_1_66))) {
		if ((var_1_81 / var_1_74) < (max ((abs (var_1_48)) , 4.8f))) {
			var_1_95 = (max ((min ((abs (var_1_96)) , var_1_86)) , (abs (var_1_85))));
		} else {
			var_1_95 = var_1_35;
		}
	} else {
		var_1_95 = var_1_80;
	}


	// From: CodeObject37
	if (var_1_39 >= ((var_1_66 & -5) & (-128 * var_1_27))) {
		var_1_97 = (max ((abs (var_1_83)) , (max (var_1_78 , var_1_80))));
	}


	// From: CodeObject38
	if (var_1_84 == (abs (var_1_59))) {
		var_1_98 = (max (var_1_95 , var_1_65));
	}


	// From: CodeObject39
	if (var_1_59 <= (max (var_1_35 , (var_1_79 % 1000u)))) {
		var_1_99 = var_1_30;
	}


	// From: CodeObject40
	if (128 <= var_1_72) {
		var_1_100 = (max ((var_1_95 - (abs (var_1_42))) , var_1_53));
	} else {
		if ((var_1_95 & (max (var_1_68 , var_1_60))) <= var_1_69) {
			var_1_100 = var_1_42;
		} else {
			var_1_100 = (abs (abs (abs (var_1_33))));
		}
	}


	// From: CodeObject41
	if ((abs (var_1_42)) < var_1_97) {
		if ((var_1_93 * (0 & var_1_102)) > (var_1_92 + (-100 + var_1_56))) {
			var_1_101 = var_1_32;
		}
	}


	// From: CodeObject42
	if (var_1_87 <= var_1_97) {
		if (var_1_104) {
			var_1_103 = (! var_1_44);
		} else {
			var_1_103 = ((var_1_68 >= var_1_79) || var_1_46);
		}
	}


	// From: CodeObject43
	var_1_105 = ((abs (var_1_37)) - var_1_84);


	// From: CodeObject44
	if (var_1_103) {
		if (var_1_67 && (var_1_84 == (abs (var_1_89)))) {
			var_1_106 = (abs ((var_1_34 + var_1_56) + (abs (var_1_79))));
		}
	}


	// From: CodeObject45
	if (var_1_51 >= (- 15.25f)) {
		var_1_107 = ((min (var_1_85 , -2)) + var_1_76);
	} else {
		var_1_107 = (abs (min (var_1_28 , var_1_78)));
	}


	// From: CodeObject46
	var_1_108 = (max ((max (var_1_42 , var_1_78)) , var_1_34));


	// From: CodeObject47
	if (var_1_36) {
		var_1_109 = var_1_33;
	}


	// From: CodeObject48
	if ((abs (var_1_41)) < var_1_48) {
		var_1_110 = ((var_1_85 - var_1_111) + var_1_112);
	} else {
		if (var_1_111 < (var_1_53 | var_1_52)) {
			var_1_110 = (min ((min (var_1_78 , var_1_111)) , -8));
		} else {
			var_1_110 = (min ((max (var_1_112 , (var_1_111 - var_1_56))) , (var_1_85 + (abs (var_1_113)))));
		}
	}


	// From: CodeObject49
	if (var_1_33 <= var_1_77) {
		var_1_114 = (max ((min (var_1_56 , var_1_84)) , var_1_115));
	}


	// From: CodeObject50
	if (var_1_95 != var_1_94) {
		var_1_116 = var_1_35;
	}


	// From: CodeObject51
	if (var_1_46) {
		var_1_117 = var_1_56;
	}


	// From: CodeObject52
	var_1_118 = var_1_80;


	// From: CodeObject53
	var_1_119 = var_1_37;


	// From: CodeObject54
	if (var_1_103) {
		var_1_120 = var_1_75;
	} else {
		var_1_120 = var_1_74;
	}


	// From: CodeObject55
	if (var_1_45) {
		var_1_121 = var_1_113;
	} else {
		var_1_121 = var_1_78;
	}


	// From: CodeObject56
	if (var_1_46) {
		var_1_122 = var_1_62;
	} else {
		var_1_122 = var_1_95;
	}


	// From: CodeObject57
	var_1_123 = var_1_46;


	// From: CodeObject58
	if (var_1_64) {
		var_1_124 = var_1_72;
	}


	// From: CodeObject59
	if (var_1_44) {
		var_1_125 = var_1_85;
	}


	// From: CodeObject60
	var_1_126 = var_1_114;


	// From: CodeObject61
	if (var_1_104) {
		var_1_127 = var_1_37;
	} else {
		var_1_127 = var_1_34;
	}


	// From: CodeObject62
	if (var_1_104) {
		var_1_128 = 1000;
	}


	// From: CodeObject63
	if (var_1_76 > (var_1_100 ^ 1)) {
		var_1_129 = ((max (var_1_55 , var_1_84)) - var_1_111);
	}


	// From: CodeObject64
	var_1_130 = var_1_44;


	// From: CodeObject65
	var_1_131 = var_1_113;


	// From: CodeObject66
	var_1_132 = var_1_44;


	// From: Req5Batch51PS_CN_500
	unsigned char stepLocal_3 = (max (var_1_4 , last_1_var_1_17)) > var_1_18;
	if (last_1_var_1_21 || stepLocal_3) {
		if (var_1_18 > (abs (last_1_var_1_17))) {
			var_1_19 = last_1_var_1_1;
		} else {
			var_1_19 = var_1_11;
		}
	} else {
		var_1_19 = last_1_var_1_1;
	}


	// From: Req1Batch51PS_CN_500
	unsigned long int stepLocal_1 = last_1_var_1_12;
	unsigned long int stepLocal_0 = 32u;
	if (stepLocal_0 >= last_1_var_1_12) {
		if (stepLocal_1 <= last_1_var_1_12) {
			if ((var_1_4 - var_1_5) >= last_1_var_1_17) {
				var_1_1 = var_1_7;
			}
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req4Batch51PS_CN_500
	if ((min ((~ var_1_1) , 8)) > var_1_11) {
		var_1_17 = var_1_18;
	}


	// From: Req2Batch51PS_CN_500
	if (! (var_1_17 > var_1_5)) {
		var_1_8 = ((min (var_1_9 , var_1_10)) - var_1_11);
	} else {
		var_1_8 = -4;
	}


	// From: Req6Batch51PS_CN_500
	unsigned long int stepLocal_4 = var_1_19;
	if ((var_1_18 / (max (5.5 , var_1_22))) > 10.5) {
		if (var_1_13) {
			if (var_1_1 < stepLocal_4) {
				var_1_21 = (! var_1_23);
			} else {
				var_1_21 = var_1_24;
			}
		} else {
			var_1_21 = var_1_23;
		}
	} else {
		var_1_21 = var_1_23;
	}


	// From: Req3Batch51PS_CN_500
	unsigned char stepLocal_2 = var_1_21;
	if (var_1_21 && stepLocal_2) {
		var_1_12 = var_1_11;
	} else {
		if (var_1_21) {
			var_1_12 = ((max (var_1_19 , (var_1_11 + var_1_7))) + (var_1_15 - var_1_1));
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 1073741823);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	assume_abort_if_not(var_1_22 != 0.0F);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -128);
	assume_abort_if_not(var_1_27 <= 127);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -128);
	assume_abort_if_not(var_1_28 <= 127);
	assume_abort_if_not(var_1_28 != 0);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 64);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -127);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 65535);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 64);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 65535);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 1);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -128);
	assume_abort_if_not(var_1_65 <= 127);
	var_1_66 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_66 >= -2147483648);
	assume_abort_if_not(var_1_66 <= 2147483647);
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= 4611686.018427382800e+12F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854765600e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427382800e+12F && var_1_75 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 4294967295);
	var_1_78 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_78 >= -127);
	assume_abort_if_not(var_1_78 <= 126);
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 127);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 190);
	assume_abort_if_not(var_1_84 <= 254);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 63);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 64);
	assume_abort_if_not(var_1_86 <= 127);
	var_1_88 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_88 >= -922337.2036854776000e+13F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 9223372.036854776000e+12F && var_1_88 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_89 >= 32767);
	assume_abort_if_not(var_1_89 <= 65534);
	var_1_90 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_90 >= 32767);
	assume_abort_if_not(var_1_90 <= 65534);
	var_1_94 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_94 >= 8191);
	assume_abort_if_not(var_1_94 <= 16383);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 254);
	var_1_102 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_102 >= -32768);
	assume_abort_if_not(var_1_102 <= 32767);
	var_1_104 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_104 >= 0);
	assume_abort_if_not(var_1_104 <= 1);
	var_1_111 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_111 >= 0);
	assume_abort_if_not(var_1_111 <= 63);
	var_1_112 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_112 >= -63);
	assume_abort_if_not(var_1_112 <= 63);
	var_1_113 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_113 >= -63);
	assume_abort_if_not(var_1_113 <= 63);
	var_1_115 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_115 >= -127);
	assume_abort_if_not(var_1_115 <= 126);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_21 = var_1_21;
}

int property() {
	return ((((((32u >= last_1_var_1_12) ? ((last_1_var_1_12 <= last_1_var_1_12) ? (((var_1_4 - var_1_5) >= last_1_var_1_17) ? (var_1_1 == ((unsigned char) var_1_7)) : 1) : 1) : (var_1_1 == ((unsigned char) var_1_7))) && ((! (var_1_17 > var_1_5)) ? (var_1_8 == ((signed char) ((min (var_1_9 , var_1_10)) - var_1_11))) : (var_1_8 == ((signed char) -4)))) && ((var_1_21 && var_1_21) ? (var_1_12 == ((unsigned long int) var_1_11)) : (var_1_21 ? (var_1_12 == ((unsigned long int) ((max (var_1_19 , (var_1_11 + var_1_7))) + (var_1_15 - var_1_1)))) : 1))) && (((min ((~ var_1_1) , 8)) > var_1_11) ? (var_1_17 == ((double) var_1_18)) : 1)) && ((last_1_var_1_21 || ((max (var_1_4 , last_1_var_1_17)) > var_1_18)) ? ((var_1_18 > (abs (last_1_var_1_17))) ? (var_1_19 == ((unsigned long int) last_1_var_1_1)) : (var_1_19 == ((unsigned long int) var_1_11))) : (var_1_19 == ((unsigned long int) last_1_var_1_1)))) && (((var_1_18 / (max (5.5 , var_1_22))) > 10.5) ? (var_1_13 ? ((var_1_1 < var_1_19) ? (var_1_21 == ((unsigned char) (! var_1_23))) : (var_1_21 == ((unsigned char) var_1_24))) : (var_1_21 == ((unsigned char) var_1_23))) : (var_1_21 == ((unsigned char) var_1_23)))
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
