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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch78PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -4;
unsigned char var_1_3 = 64;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 2;
unsigned short int var_1_6 = 10;
double var_1_8 = 1.875;
signed long int var_1_9 = -4;
double var_1_10 = 63.5;
double var_1_11 = 255.375;
double var_1_12 = 999999999.525;
double var_1_13 = 63.75;
double var_1_14 = 0.625;
unsigned short int var_1_15 = 5;
signed char var_1_16 = 4;
signed char var_1_17 = 0;
signed char var_1_18 = -2;
signed char var_1_19 = 1;
unsigned short int var_1_20 = 50;
unsigned short int var_1_21 = 0;
unsigned char var_1_22 = 2;
float var_1_23 = 0.933;
float var_1_24 = 4.25;
float var_1_25 = 200.7;
unsigned char var_1_26 = 100;
unsigned char var_1_27 = 64;
unsigned char var_1_28 = 25;
unsigned char var_1_29 = 8;
signed long int var_1_30 = -1000000;
unsigned char var_1_31 = 2;
signed long int var_1_32 = -100;
unsigned char var_1_33 = 0;
signed long int var_1_34 = -128;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 10;
unsigned char var_1_37 = 5;
signed long int var_1_38 = 10;
signed char var_1_39 = -1;
double var_1_40 = 1.6;
unsigned char var_1_41 = 1;
double var_1_42 = 3.4;
double var_1_43 = 999999999.25;
signed short int var_1_44 = 50;
float var_1_45 = 5.25;
unsigned char var_1_46 = 128;
float var_1_47 = 499.8;
float var_1_48 = 7.4;
float var_1_49 = 15.2;
float var_1_50 = 10000000000.5;
unsigned short int var_1_51 = 200;
unsigned short int var_1_52 = 2;
signed long int var_1_53 = -256;
signed char var_1_54 = -4;
float var_1_55 = 50.5;
signed long int var_1_56 = -1000000000;
signed short int var_1_57 = 2;
signed char var_1_58 = -4;
float var_1_59 = 128.75;
float var_1_60 = 499.75;
float var_1_61 = 100.8;
float var_1_62 = 16.1;
signed char var_1_63 = -50;
signed char var_1_64 = 4;
float var_1_65 = 1.5;
signed char var_1_66 = 16;
signed char var_1_67 = 5;
signed char var_1_68 = 16;
unsigned long int var_1_69 = 16;
signed long int var_1_70 = 16;
double var_1_71 = 0.4;
double var_1_72 = 64.75;
signed char var_1_73 = -4;
signed char var_1_74 = 8;
signed char var_1_75 = 16;
signed char var_1_76 = 8;
signed char var_1_77 = 0;
unsigned long int var_1_78 = 128;
float var_1_79 = 999999.3;
signed char var_1_80 = -64;
unsigned short int var_1_81 = 100;
unsigned short int var_1_82 = 4;
unsigned short int var_1_83 = 40457;
unsigned short int var_1_84 = 43776;
signed long int var_1_85 = 2;
signed long int var_1_86 = -4;
unsigned short int var_1_87 = 128;
double var_1_88 = 128.5;
float var_1_89 = 3.8;
unsigned long int var_1_90 = 8;
float var_1_91 = 499.25;
float var_1_92 = 4.75;
float var_1_93 = 64.025;
unsigned char var_1_94 = 1;
unsigned long int var_1_95 = 2;
unsigned long int var_1_96 = 4;
signed char var_1_97 = -8;
signed char var_1_98 = 0;
double var_1_99 = 255.6;
double var_1_100 = 32.5;
signed char var_1_101 = 10;
double var_1_102 = 16.4;
double var_1_103 = 9.8;
unsigned char var_1_104 = 0;
unsigned char var_1_105 = 1;
unsigned char var_1_106 = 0;
unsigned char var_1_107 = 0;
unsigned char var_1_108 = 0;
unsigned char var_1_109 = 1;
unsigned char var_1_110 = 1;
double var_1_111 = 0.0;
unsigned long int var_1_113 = 1;
float var_1_114 = 3.9;
signed long int var_1_115 = -50;
unsigned long int var_1_116 = 256;
unsigned long int var_1_117 = 1272584814;
signed char var_1_118 = -8;
signed long int var_1_119 = 1;
signed char var_1_120 = 0;
double var_1_121 = 3.5;
unsigned long int var_1_122 = 32;
double var_1_123 = -0.25;
signed short int var_1_124 = -2;
signed char var_1_125 = -32;
unsigned long int var_1_126 = 64;
unsigned short int var_1_127 = 25;
double var_1_128 = 4.125;
signed long int var_1_129 = -2;
signed short int var_1_130 = -32;
double var_1_131 = 64.2;
float var_1_132 = 0.12;
signed char var_1_133 = 8;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_3 = 64;
unsigned short int last_1_var_1_6 = 10;
unsigned short int last_1_var_1_15 = 5;
unsigned short int last_1_var_1_20 = 50;
unsigned short int last_1_var_1_21 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_23 / var_1_24) > var_1_25) {
		var_1_22 = ((var_1_26 + var_1_27) - (abs (max (var_1_28 , var_1_29))));
	}


	// From: CodeObject2
	if (var_1_29 > ((var_1_26 % 200) / (var_1_27 + var_1_31))) {
		var_1_30 = ((max (var_1_26 , (abs (var_1_29)))) - var_1_28);
	}


	// From: CodeObject3
	if ((var_1_23 >= var_1_25) || var_1_33) {
		var_1_32 = (abs (var_1_34));
	}


	// From: CodeObject4
	if ((var_1_24 * var_1_25) < var_1_23) {
		if ((var_1_34 > var_1_28) && var_1_33) {
			if (-2 > var_1_30) {
				var_1_35 = ((var_1_36 + var_1_37) + var_1_29);
			}
		}
	}


	// From: CodeObject5
	if ((var_1_22 / var_1_27) <= ((var_1_28 + var_1_26) & (var_1_30 & var_1_32))) {
		if (var_1_33) {
			var_1_38 = (min ((abs (var_1_22)) , var_1_35));
		} else {
			if (var_1_30 <= var_1_32) {
				var_1_38 = (var_1_28 + (abs (var_1_37)));
			}
		}
	} else {
		var_1_38 = (abs (var_1_22));
	}


	// From: CodeObject6
	if (var_1_38 < (var_1_37 << var_1_27)) {
		var_1_39 = ((abs (var_1_36)) - var_1_37);
	} else {
		var_1_39 = (max (var_1_37 , var_1_36));
	}


	// From: CodeObject7
	if (var_1_33) {
		if (var_1_30 > var_1_36) {
			var_1_40 = (min (var_1_42 , var_1_43));
		} else {
			var_1_40 = (max (var_1_43 , var_1_42));
		}
	} else {
		var_1_40 = (abs (var_1_42));
	}


	// From: CodeObject8
	var_1_44 = var_1_36;


	// From: CodeObject9
	if (var_1_41 && var_1_33) {
		if (var_1_33) {
			if ((var_1_32 ^ (var_1_46 - var_1_37)) <= (~ (abs (var_1_35)))) {
				var_1_45 = (max ((min (var_1_42 , (var_1_47 - var_1_48))) , (abs (var_1_43))));
			} else {
				var_1_45 = (max (var_1_48 , var_1_43));
			}
		} else {
			var_1_45 = (var_1_48 - var_1_47);
		}
	} else {
		var_1_45 = (var_1_49 + (abs (var_1_50)));
	}


	// From: CodeObject10
	if ((var_1_37 / (abs (var_1_26))) <= (100 / var_1_31)) {
		if (var_1_32 <= (var_1_31 / var_1_46)) {
			var_1_51 = var_1_35;
		} else {
			if ((var_1_30 / 256) >= var_1_36) {
				if (var_1_41 || var_1_33) {
					var_1_51 = (abs (var_1_28));
				}
			}
		}
	} else {
		var_1_51 = (abs (var_1_27));
	}


	// From: CodeObject11
	if (var_1_49 >= var_1_24) {
		var_1_52 = (abs (max (var_1_29 , var_1_31)));
	} else {
		var_1_52 = var_1_36;
	}


	// From: CodeObject12
	if ((var_1_51 * var_1_26) >= var_1_36) {
		var_1_53 = var_1_51;
	} else {
		if ((max (var_1_36 , (var_1_51 & var_1_44))) > (var_1_46 + var_1_26)) {
			var_1_53 = (var_1_44 + (abs (var_1_52)));
		} else {
			if (! (var_1_33 || (var_1_50 <= var_1_23))) {
				var_1_53 = (min (var_1_46 , var_1_29));
			}
		}
	}


	// From: CodeObject13
	if (var_1_44 == 2) {
		var_1_54 = (abs (var_1_36));
	} else {
		var_1_54 = var_1_37;
	}


	// From: CodeObject14
	var_1_55 = var_1_49;


	// From: CodeObject15
	if (var_1_33) {
		var_1_56 = var_1_46;
	}


	// From: CodeObject16
	if (var_1_33) {
		var_1_57 = var_1_46;
	}


	// From: CodeObject17
	if (var_1_49 < ((max (var_1_59 , var_1_60)) - var_1_48)) {
		var_1_58 = (abs (min (var_1_36 , var_1_37)));
	} else {
		if ((var_1_53 + var_1_31) < var_1_34) {
			var_1_58 = (max (var_1_36 , var_1_37));
		}
	}


	// From: CodeObject18
	if (var_1_24 >= var_1_23) {
		var_1_61 = (var_1_62 - var_1_48);
	}


	// From: CodeObject19
	if (var_1_23 < var_1_42) {
		var_1_63 = ((abs (var_1_37)) + var_1_64);
	}


	// From: CodeObject20
	if ((min (var_1_30 , var_1_56)) != (abs (abs (var_1_34)))) {
		var_1_65 = (min (var_1_62 , (abs (var_1_47))));
	} else {
		var_1_65 = (max (8.75f , var_1_42));
	}


	// From: CodeObject21
	if (var_1_44 == var_1_28) {
		var_1_66 = var_1_37;
	} else {
		if ((var_1_42 / var_1_24) < var_1_50) {
			var_1_66 = (max ((min (var_1_37 , var_1_64)) , (var_1_67 + var_1_68)));
		} else {
			var_1_66 = (min ((abs (var_1_36)) , var_1_37));
		}
	}


	// From: CodeObject22
	if (var_1_33) {
		if ((abs (var_1_22)) > var_1_64) {
			var_1_69 = (abs (var_1_36));
		}
	}


	// From: CodeObject23
	if ((var_1_61 * var_1_24) <= 49.25f) {
		var_1_70 = (var_1_35 + (max ((abs (var_1_58)) , var_1_51)));
	}


	// From: CodeObject24
	if ((abs (var_1_26)) < var_1_56) {
		var_1_71 = var_1_42;
	}


	// From: CodeObject25
	if (var_1_22 < var_1_30) {
		if (var_1_26 <= var_1_44) {
			var_1_72 = (min (var_1_50 , (abs (var_1_47))));
		}
	} else {
		if ((var_1_32 * (var_1_37 / var_1_31)) >= (max (var_1_28 , var_1_38))) {
			var_1_72 = var_1_62;
		}
	}


	// From: CodeObject26
	if ((var_1_46 ^ var_1_36) < var_1_64) {
		var_1_73 = (((var_1_74 + var_1_75) - 50) + (var_1_37 - (var_1_76 + var_1_77)));
	} else {
		var_1_73 = (abs (abs (var_1_77 - var_1_76)));
	}


	// From: CodeObject27
	if (var_1_27 >= var_1_36) {
		if (var_1_38 < (min (-5 , var_1_74))) {
			var_1_78 = (var_1_77 + (abs (var_1_22)));
		}
	}


	// From: CodeObject28
	if (var_1_38 == var_1_34) {
		if ((var_1_38 + var_1_26) >= var_1_70) {
			var_1_79 = var_1_49;
		}
	} else {
		if (var_1_33) {
			var_1_79 = (min (var_1_42 , var_1_50));
		}
	}


	// From: CodeObject29
	if ((- var_1_77) < 1) {
		if (var_1_33) {
			var_1_80 = (abs (max (5 , (min (var_1_64 , -10)))));
		}
	}


	// From: CodeObject30
	if (var_1_57 > var_1_67) {
		var_1_81 = var_1_82;
	} else {
		if ((max (var_1_30 , var_1_27)) >= -1) {
			var_1_81 = ((abs (max (var_1_83 , var_1_84))) - var_1_31);
		} else {
			if ((min (var_1_27 , var_1_37)) <= (var_1_30 >> var_1_52)) {
				var_1_81 = (abs (var_1_27));
			} else {
				if ((var_1_83 - (abs (var_1_29))) < (var_1_52 & var_1_78)) {
					if (((var_1_85 % var_1_31) / var_1_83) <= var_1_52) {
						var_1_81 = (var_1_28 + var_1_29);
					}
				} else {
					var_1_81 = var_1_35;
				}
			}
		}
	}


	// From: CodeObject31
	if ((128u / (abs (var_1_46))) > (var_1_69 / (max (var_1_84 , var_1_27)))) {
		var_1_86 = var_1_44;
	}


	// From: CodeObject32
	if (var_1_34 >= var_1_32) {
		var_1_87 = (abs (min (var_1_37 , var_1_74)));
	} else {
		var_1_87 = (max ((abs (5)) , (max ((min (1 , var_1_37)) , var_1_27))));
	}


	// From: CodeObject33
	if (var_1_55 <= var_1_60) {
		if (var_1_46 > (min (var_1_76 , (var_1_83 >> var_1_37)))) {
			var_1_88 = (var_1_48 - var_1_62);
		}
	}


	// From: CodeObject34
	if (4u <= var_1_85) {
		if ((var_1_28 & var_1_90) > (var_1_87 >> var_1_37)) {
			var_1_89 = (((var_1_91 + var_1_92) - var_1_93) + var_1_49);
		}
	}


	// From: CodeObject35
	if (var_1_28 <= (~ var_1_86)) {
		var_1_94 = (abs (var_1_77));
	} else {
		var_1_94 = (var_1_37 + 4);
	}


	// From: CodeObject36
	if (4.8f <= ((var_1_61 + var_1_88) * var_1_24)) {
		if (var_1_94 <= var_1_66) {
			var_1_95 = (max ((min (25u , var_1_76)) , ((max (var_1_36 , var_1_29)) + (var_1_75 + var_1_46))));
		}
	}


	// From: CodeObject37
	if (50u >= var_1_78) {
		var_1_96 = ((abs (var_1_84)) + var_1_83);
	}


	// From: CodeObject38
	if ((abs (var_1_60)) >= (var_1_55 / 0.25f)) {
		if ((var_1_81 - var_1_28) < var_1_51) {
			if ((var_1_75 % var_1_84) <= var_1_35) {
				var_1_97 = (max ((min (var_1_77 , (max (var_1_68 , var_1_67)))) , var_1_74));
			}
		}
	}


	// From: CodeObject39
	if (var_1_83 > var_1_96) {
		var_1_98 = (abs (abs (var_1_74)));
	}


	// From: CodeObject40
	if (var_1_28 > var_1_36) {
		var_1_99 = (min (var_1_100 , var_1_93));
	}


	// From: CodeObject41
	var_1_101 = var_1_77;


	// From: CodeObject42
	if ((var_1_47 - var_1_62) <= var_1_40) {
		if (var_1_40 > (1.5 - var_1_48)) {
			var_1_102 = (abs (abs (var_1_50)));
		}
	}


	// From: CodeObject43
	if ((15.4 > var_1_99) && (var_1_89 >= var_1_60)) {
		var_1_103 = var_1_62;
	}


	// From: CodeObject44
	if (var_1_62 < ((- var_1_103) + var_1_79)) {
		if (var_1_95 < var_1_28) {
			var_1_104 = (var_1_105 && (! var_1_106));
		} else {
			if (var_1_25 > var_1_99) {
				var_1_104 = ((var_1_106 || (var_1_105 && var_1_107)) || var_1_108);
			} else {
				var_1_104 = (var_1_107 || var_1_109);
			}
		}
	}


	// From: CodeObject45
	if (((var_1_92 + var_1_91) - (var_1_111 - var_1_93)) >= var_1_61) {
		if (var_1_103 >= var_1_65) {
			var_1_110 = (((var_1_28 <= var_1_98) || var_1_105) && (var_1_33 || var_1_109));
		} else {
			var_1_110 = (var_1_109 && var_1_108);
		}
	}


	// From: CodeObject46
	if ((min (var_1_75 , var_1_85)) <= var_1_97) {
		var_1_113 = (min (var_1_22 , (min ((max (var_1_29 , var_1_83)) , (min (var_1_36 , var_1_82))))));
	}


	// From: CodeObject47
	if ((var_1_60 - var_1_47) >= var_1_43) {
		if ((var_1_76 & var_1_22) <= var_1_87) {
			var_1_114 = var_1_43;
		} else {
			var_1_114 = 0.2f;
		}
	}


	// From: CodeObject48
	if (var_1_36 <= var_1_98) {
		var_1_115 = var_1_36;
	}


	// From: CodeObject49
	if ((500 * var_1_53) <= var_1_101) {
		var_1_116 = (var_1_27 + (var_1_52 + var_1_29));
	} else {
		var_1_116 = (var_1_46 + (abs (var_1_117 - 5u)));
	}


	// From: CodeObject50
	if ((var_1_85 % var_1_27) <= var_1_76) {
		var_1_118 = (var_1_77 - var_1_74);
	}


	// From: CodeObject51
	if (var_1_113 < (var_1_26 + (var_1_76 / var_1_83))) {
		if (var_1_105) {
			var_1_119 = (abs (var_1_81));
		}
	}


	// From: CodeObject52
	if (var_1_31 <= ((~ var_1_32) / var_1_26)) {
		var_1_120 = (max (4 , var_1_67));
	} else {
		if ((var_1_68 >> var_1_26) > var_1_75) {
			if (var_1_55 < (min (var_1_100 , (- var_1_61)))) {
				var_1_120 = var_1_67;
			} else {
				var_1_120 = var_1_74;
			}
		}
	}


	// From: CodeObject53
	if (var_1_107) {
		var_1_121 = var_1_48;
	}


	// From: CodeObject54
	if (var_1_41) {
		var_1_122 = var_1_35;
	}


	// From: CodeObject55
	if (var_1_108) {
		var_1_123 = var_1_93;
	}


	// From: CodeObject56
	if (var_1_105) {
		var_1_124 = var_1_22;
	} else {
		var_1_124 = var_1_39;
	}


	// From: CodeObject57
	if (var_1_107) {
		var_1_125 = var_1_76;
	} else {
		var_1_125 = var_1_75;
	}


	// From: CodeObject58
	var_1_126 = var_1_82;


	// From: CodeObject59
	if (var_1_107) {
		var_1_127 = var_1_77;
	} else {
		var_1_127 = var_1_83;
	}


	// From: CodeObject60
	if (var_1_109) {
		var_1_128 = 15.625;
	} else {
		var_1_128 = var_1_50;
	}


	// From: CodeObject61
	var_1_129 = var_1_120;


	// From: CodeObject62
	if (var_1_105) {
		var_1_130 = var_1_67;
	} else {
		var_1_130 = var_1_68;
	}


	// From: CodeObject63
	var_1_131 = var_1_43;


	// From: CodeObject64
	if (var_1_105) {
		var_1_132 = var_1_92;
	} else {
		var_1_132 = var_1_50;
	}


	// From: CodeObject65
	if (var_1_103 < var_1_102) {
		if (var_1_33) {
			var_1_133 = ((min (var_1_67 , (abs (var_1_74)))) + var_1_64);
		} else {
			var_1_133 = var_1_77;
		}
	}


	// From: Req2Batch78PS_CN_500
	signed long int stepLocal_0 = last_1_var_1_21;
	if (last_1_var_1_6 < stepLocal_0) {
		var_1_3 = (max (var_1_4 , var_1_5));
	}


	// From: Req3Batch78PS_CN_500
	signed long int stepLocal_2 = last_1_var_1_20 ^ last_1_var_1_15;
	unsigned char stepLocal_1 = var_1_5;
	if (stepLocal_2 < -256) {
		var_1_6 = (abs (max ((max (var_1_5 , var_1_4)) , (last_1_var_1_20 + last_1_var_1_3))));
	} else {
		if (stepLocal_1 <= 50) {
			var_1_6 = last_1_var_1_20;
		}
	}


	// From: Req7Batch78PS_CN_500
	var_1_20 = (max ((var_1_5 + var_1_6) , var_1_4));


	// From: Req4Batch78PS_CN_500
	if (var_1_3 < (var_1_5 % (max (32 , var_1_9)))) {
		var_1_8 = (((max (var_1_10 , var_1_11)) - var_1_12) + (var_1_13 - var_1_14));
	} else {
		if (var_1_13 <= (var_1_14 + var_1_11)) {
			var_1_8 = var_1_12;
		}
	}


	// From: Req6Batch78PS_CN_500
	var_1_16 = (var_1_17 + (var_1_18 + (abs (var_1_19))));


	// From: Req1Batch78PS_CN_500
	var_1_1 = (abs (var_1_16));


	// From: Req8Batch78PS_CN_500
	unsigned short int stepLocal_3 = var_1_6;
	if (stepLocal_3 == ((var_1_3 * var_1_17) & (var_1_1 * var_1_18))) {
		var_1_21 = (var_1_4 + 128);
	}


	// From: Req5Batch78PS_CN_500
	if ((abs (var_1_4)) > var_1_21) {
		var_1_15 = (max (var_1_3 , (var_1_5 + var_1_4)));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -31);
	assume_abort_if_not(var_1_18 <= 32);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -31);
	assume_abort_if_not(var_1_19 <= 31);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	assume_abort_if_not(var_1_24 != 0.0F);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 63);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 64);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483646);
	assume_abort_if_not(var_1_34 <= 2147483646);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 64);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854765600e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854765600e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 127);
	assume_abort_if_not(var_1_46 <= 255);
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854765600e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -461168.6018427382800e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -461168.6018427382800e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427382800e+12F && var_1_50 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= -63);
	assume_abort_if_not(var_1_64 <= 63);
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= -63);
	assume_abort_if_not(var_1_67 <= 63);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= -63);
	assume_abort_if_not(var_1_68 <= 63);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 32);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 31);
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 32);
	var_1_77 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 31);
	var_1_82 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 65534);
	var_1_83 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_83 >= 32767);
	assume_abort_if_not(var_1_83 <= 65534);
	var_1_84 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_84 >= 32767);
	assume_abort_if_not(var_1_84 <= 65534);
	var_1_85 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_85 >= -2147483648);
	assume_abort_if_not(var_1_85 <= 2147483647);
	var_1_90 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 4294967295);
	var_1_91 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_91 >= 0.0F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 2305843.009213691390e+12F && var_1_91 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_92 >= 0.0F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 2305843.009213691390e+12F && var_1_92 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_93 >= 0.0F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 4611686.018427382800e+12F && var_1_93 >= 1.0e-20F ));
	var_1_100 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_100 >= -922337.2036854765600e+13F && var_1_100 <= -1.0e-20F) || (var_1_100 <= 9223372.036854765600e+12F && var_1_100 >= 1.0e-20F ));
	var_1_105 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_105 >= 1);
	assume_abort_if_not(var_1_105 <= 1);
	var_1_106 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 0);
	var_1_107 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_107 >= 0);
	assume_abort_if_not(var_1_107 <= 0);
	var_1_108 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_108 >= 0);
	assume_abort_if_not(var_1_108 <= 0);
	var_1_109 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_109 >= 1);
	assume_abort_if_not(var_1_109 <= 1);
	var_1_111 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_111 >= 4611686.018427387900e+12F && var_1_111 <= -1.0e-20F) || (var_1_111 <= 9223372.036854776000e+12F && var_1_111 >= 1.0e-20F ));
	var_1_117 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_117 >= 1073741823);
	assume_abort_if_not(var_1_117 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_3 = var_1_3;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_21 = var_1_21;
}

int property() {
	return (((((((var_1_1 == ((signed long int) (abs (var_1_16)))) && ((last_1_var_1_6 < last_1_var_1_21) ? (var_1_3 == ((unsigned char) (max (var_1_4 , var_1_5)))) : 1)) && (((last_1_var_1_20 ^ last_1_var_1_15) < -256) ? (var_1_6 == ((unsigned short int) (abs (max ((max (var_1_5 , var_1_4)) , (last_1_var_1_20 + last_1_var_1_3)))))) : ((var_1_5 <= 50) ? (var_1_6 == ((unsigned short int) last_1_var_1_20)) : 1))) && ((var_1_3 < (var_1_5 % (max (32 , var_1_9)))) ? (var_1_8 == ((double) (((max (var_1_10 , var_1_11)) - var_1_12) + (var_1_13 - var_1_14)))) : ((var_1_13 <= (var_1_14 + var_1_11)) ? (var_1_8 == ((double) var_1_12)) : 1))) && (((abs (var_1_4)) > var_1_21) ? (var_1_15 == ((unsigned short int) (max (var_1_3 , (var_1_5 + var_1_4))))) : 1)) && (var_1_16 == ((signed char) (var_1_17 + (var_1_18 + (abs (var_1_19))))))) && (var_1_20 == ((unsigned short int) (max ((var_1_5 + var_1_6) , var_1_4))))) && ((var_1_6 == ((var_1_3 * var_1_17) & (var_1_1 * var_1_18))) ? (var_1_21 == ((unsigned short int) (var_1_4 + 128))) : 1)
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
