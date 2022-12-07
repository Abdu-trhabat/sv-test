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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch74PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 64;
unsigned char var_1_4 = 0;
unsigned long int var_1_5 = 3914692693;
unsigned long int var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 50;
signed long int var_1_12 = 25;
signed long int var_1_13 = 1;
float var_1_15 = 4.75;
unsigned char var_1_16 = 100;
float var_1_17 = 50.1;
float var_1_18 = 100.9;
float var_1_19 = 8.5;
float var_1_20 = 10.625;
float var_1_21 = 0.0;
float var_1_22 = 7.8;
float var_1_23 = 8.25;
double var_1_24 = 5.5;
signed char var_1_25 = -16;
unsigned long int var_1_26 = 2;
signed char var_1_27 = 4;
float var_1_28 = 3.5;
signed short int var_1_29 = -8;
signed short int var_1_30 = 256;
signed char var_1_31 = -32;
unsigned char var_1_32 = 0;
signed char var_1_33 = -4;
signed long int var_1_34 = 64;
signed long int var_1_35 = -32;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 1;
unsigned short int var_1_38 = 5;
float var_1_39 = 32.2;
signed char var_1_40 = -5;
unsigned char var_1_41 = 1;
signed char var_1_42 = 8;
signed char var_1_43 = 4;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned long int var_1_48 = 4;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 8;
unsigned char var_1_52 = 10;
signed char var_1_53 = 2;
signed char var_1_54 = 50;
signed char var_1_55 = -8;
signed char var_1_56 = -10;
signed char var_1_57 = 1;
double var_1_58 = 3.15;
unsigned char var_1_59 = 5;
unsigned char var_1_60 = 0;
double var_1_61 = 100.8;
double var_1_62 = 4.82;
double var_1_63 = 8.8;
double var_1_64 = 31.5;
signed long int var_1_65 = -256;
signed char var_1_66 = -2;
signed char var_1_67 = 64;
signed char var_1_68 = 25;
unsigned long int var_1_69 = 256;
unsigned long int var_1_70 = 2849934412;
unsigned long int var_1_71 = 128;
signed long int var_1_72 = 10;
unsigned char var_1_73 = 0;
unsigned short int var_1_74 = 48957;
unsigned short int var_1_75 = 30890;
unsigned char var_1_76 = 0;
double var_1_77 = 3.5;
unsigned short int var_1_78 = 2;
unsigned short int var_1_79 = 41956;
unsigned short int var_1_80 = 256;
unsigned char var_1_81 = 1;
signed char var_1_82 = -25;
unsigned char var_1_83 = 32;
unsigned char var_1_84 = 50;
unsigned char var_1_85 = 1;
unsigned short int var_1_86 = 0;
unsigned short int var_1_87 = 56090;
float var_1_88 = 999999.8;
float var_1_89 = 10000000.2;
float var_1_90 = 4.375;
signed long int var_1_91 = -16;
float var_1_92 = 63.54;
unsigned char var_1_93 = 1;
signed long int var_1_94 = -32;
signed short int var_1_95 = 50;
signed short int var_1_96 = 0;
unsigned char var_1_97 = 1;
signed char var_1_98 = -2;
signed char var_1_99 = 64;
unsigned long int var_1_100 = 128;
float var_1_101 = 5.6;
signed long int var_1_102 = 1;
double var_1_103 = 2.22;
unsigned short int var_1_104 = 5;
signed long int var_1_105 = -25;
unsigned char var_1_106 = 128;
unsigned char var_1_107 = 128;
unsigned short int var_1_108 = 64;
unsigned short int var_1_109 = 16;
unsigned short int var_1_110 = 25;
float var_1_111 = 32.875;
signed short int var_1_112 = -5;
unsigned char var_1_113 = 0;
double var_1_114 = 255.5;
unsigned char var_1_115 = 1;
float var_1_116 = 63.8;
float var_1_117 = 4.5;
float var_1_118 = 1.2;
unsigned short int var_1_119 = 256;
unsigned char var_1_120 = 0;
signed char var_1_121 = 32;
signed short int var_1_122 = -16;
unsigned long int var_1_123 = 0;
unsigned long int var_1_124 = 16;
unsigned long int var_1_125 = 4;
float var_1_126 = 4.8;
unsigned char var_1_127 = 0;
unsigned char var_1_128 = 0;
signed char var_1_129 = -64;
unsigned char var_1_130 = 0;
double var_1_131 = 9.2;
signed short int var_1_132 = 0;
signed short int var_1_133 = -4;
signed long int var_1_134 = 256;
unsigned short int var_1_135 = 256;
float var_1_136 = 0.25;
signed short int var_1_137 = -500;
signed long int var_1_138 = 64;
unsigned char var_1_139 = 8;
unsigned char var_1_140 = 1;
unsigned char var_1_141 = 1;
double var_1_142 = 1.8;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 64;
unsigned char last_1_var_1_11 = 50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((~ (var_1_26 % 200u)) < 32u) {
		var_1_25 = (64 - var_1_27);
	}


	// From: CodeObject2
	if (var_1_25 > var_1_26) {
		var_1_28 = (min (4.2f , 1.25f));
	}


	// From: CodeObject3
	if ((~ (5 + var_1_26)) >= 10000u) {
		var_1_29 = (max ((var_1_25 + var_1_27) , (abs (var_1_30))));
	} else {
		var_1_29 = (abs (abs (max (var_1_25 , var_1_30))));
	}


	// From: CodeObject4
	if (var_1_32) {
		var_1_31 = (var_1_27 - (abs (var_1_33)));
	}


	// From: CodeObject5
	if (var_1_26 > 256u) {
		if (var_1_32) {
			var_1_34 = (abs (min (var_1_27 , var_1_30)));
		}
	}


	// From: CodeObject6
	if (var_1_32) {
		if (var_1_36 || var_1_37) {
			if ((abs (var_1_30)) > var_1_31) {
				var_1_35 = var_1_31;
			}
		}
	}


	// From: CodeObject7
	if (var_1_30 > var_1_26) {
		if (var_1_39 > 49.75f) {
			var_1_38 = (abs (var_1_27));
		}
	}


	// From: CodeObject8
	if (! var_1_41) {
		var_1_40 = ((abs (var_1_27)) - (max (var_1_42 , var_1_43)));
	}


	// From: CodeObject9
	if (-256 >= var_1_29) {
		var_1_44 = (! var_1_45);
	} else {
		var_1_44 = ((! var_1_46) || (! var_1_47));
	}


	// From: CodeObject10
	if (var_1_31 == var_1_25) {
		if (((abs (var_1_29)) == var_1_35) && var_1_44) {
			var_1_48 = (256u + var_1_42);
		}
	}


	// From: CodeObject11
	if ((var_1_42 % var_1_50) < var_1_26) {
		if ((var_1_40 / (abs (-10))) == var_1_29) {
			if (var_1_31 < (var_1_35 | var_1_29)) {
				var_1_49 = (var_1_27 + ((min (0 , var_1_51)) + var_1_52));
			} else {
				var_1_49 = (max (var_1_42 , (abs (var_1_43))));
			}
		}
	} else {
		var_1_49 = ((min (var_1_52 , (max (var_1_43 , var_1_51)))) + (max (var_1_42 , (abs (8)))));
	}


	// From: CodeObject12
	if (var_1_26 < var_1_38) {
		var_1_53 = (var_1_42 - (abs (max (var_1_33 , var_1_43))));
	} else {
		if (var_1_33 >= (var_1_34 ^ var_1_43)) {
			var_1_53 = (var_1_52 + (min (var_1_54 , (var_1_55 + var_1_56))));
		} else {
			var_1_53 = (abs (var_1_56));
		}
	}


	// From: CodeObject13
	if (var_1_32 && var_1_36) {
		var_1_57 = (abs (var_1_51));
	} else {
		var_1_57 = (5 - var_1_52);
	}


	// From: CodeObject14
	if (! var_1_44) {
		if (var_1_34 < (var_1_25 >> (var_1_59 - var_1_60))) {
			var_1_58 = (var_1_61 - var_1_62);
		}
	} else {
		var_1_58 = (var_1_63 + var_1_64);
	}


	// From: CodeObject15
	if (var_1_64 >= var_1_61) {
		var_1_65 = var_1_50;
	}


	// From: CodeObject16
	if (((var_1_52 + var_1_51) <= var_1_54) || var_1_37) {
		var_1_66 = var_1_43;
	} else {
		var_1_66 = (max (var_1_67 , var_1_42));
	}


	// From: CodeObject17
	if (var_1_50 < var_1_27) {
		if (((~ var_1_26) | var_1_35) < var_1_27) {
			var_1_68 = (abs (var_1_55));
		}
	}


	// From: CodeObject18
	if (var_1_31 >= var_1_57) {
		if (var_1_25 > var_1_38) {
			if (var_1_66 >= 100) {
				var_1_69 = (var_1_70 - var_1_60);
			}
		} else {
			var_1_69 = (min (var_1_43 , ((min (var_1_42 , var_1_50)) + var_1_59)));
		}
	} else {
		if (var_1_36) {
			if (var_1_67 > (max (var_1_66 , (abs (var_1_55))))) {
				var_1_69 = (max (4u , (max (var_1_59 , (min (8u , var_1_70))))));
			}
		} else {
			var_1_69 = (min (var_1_59 , var_1_49));
		}
	}


	// From: CodeObject19
	if (-25 < var_1_72) {
		if (var_1_59 > (max (var_1_40 , var_1_42))) {
			var_1_71 = (abs (var_1_52));
		}
	} else {
		var_1_71 = (abs (var_1_50));
	}


	// From: CodeObject20
	if (var_1_44) {
		if ((var_1_74 - (var_1_75 - var_1_60)) >= (var_1_59 | var_1_57)) {
			var_1_73 = (var_1_41 || var_1_47);
		} else {
			var_1_73 = (var_1_45 || var_1_76);
		}
	} else {
		if ((abs (min (var_1_62 , var_1_58))) < ((min (var_1_64 , var_1_63)) / var_1_77)) {
			var_1_73 = (! ((var_1_63 >= var_1_61) && var_1_76));
		}
	}


	// From: CodeObject21
	if (var_1_66 <= var_1_34) {
		if (var_1_62 > (abs (16.5))) {
			var_1_78 = (max (var_1_42 , 2));
		} else {
			if ((var_1_29 >> var_1_53) >= (var_1_75 - var_1_27)) {
				if (var_1_34 < ((abs (var_1_40)) / (abs (var_1_75)))) {
					var_1_78 = (var_1_79 - (abs (var_1_43)));
				}
			}
		}
	} else {
		var_1_78 = (abs (abs (var_1_52)));
	}


	// From: CodeObject22
	if ((var_1_75 > (var_1_74 - var_1_43)) || ((var_1_59 != var_1_50) && var_1_32)) {
		if (var_1_76) {
			if (var_1_41) {
				if (var_1_37) {
					if ((var_1_35 | (var_1_33 % var_1_74)) <= (abs (min (var_1_51 , var_1_38)))) {
						var_1_80 = (min (var_1_50 , (var_1_49 + 32)));
					} else {
						if (var_1_39 >= var_1_77) {
							var_1_80 = (abs (10));
						}
					}
				}
			} else {
				var_1_80 = (max (var_1_43 , var_1_27));
			}
		} else {
			var_1_80 = (abs (var_1_79 - var_1_42));
		}
	} else {
		if ((var_1_70 * 5) < var_1_51) {
			var_1_80 = (abs (var_1_50));
		}
	}


	// From: CodeObject23
	if (var_1_61 < var_1_62) {
		if (var_1_26 <= var_1_75) {
			var_1_81 = ((var_1_64 <= var_1_58) || var_1_46);
		}
	} else {
		var_1_81 = var_1_76;
	}


	// From: CodeObject24
	if ((var_1_59 / (abs (var_1_75))) < var_1_66) {
		var_1_82 = (max (var_1_51 , (abs (abs (var_1_33)))));
	}


	// From: CodeObject25
	if (var_1_81) {
		var_1_83 = (abs (var_1_84));
	}


	// From: CodeObject26
	if ((~ var_1_68) > (var_1_43 + var_1_26)) {
		var_1_85 = (! (var_1_36 || (var_1_47 || var_1_46)));
	}


	// From: CodeObject27
	if (var_1_67 < var_1_69) {
		var_1_86 = ((min ((var_1_87 - 16) , var_1_79)) - var_1_49);
	}


	// From: CodeObject28
	if (var_1_27 < var_1_55) {
		if ((min (var_1_63 , var_1_61)) < (abs (var_1_64))) {
			var_1_88 = ((max ((abs (var_1_61)) , var_1_62)) - (max (var_1_89 , var_1_90)));
		} else {
			var_1_88 = (abs (var_1_61));
		}
	}


	// From: CodeObject29
	if (var_1_49 >= var_1_51) {
		var_1_91 = (var_1_74 - (abs (var_1_40)));
	}


	// From: CodeObject30
	if (var_1_93) {
		if ((min (var_1_51 , var_1_94)) <= var_1_59) {
			var_1_92 = var_1_64;
		}
	} else {
		if (((var_1_56 << var_1_91) * var_1_69) <= 1u) {
			var_1_92 = (var_1_90 - var_1_62);
		}
	}


	// From: CodeObject31
	if (var_1_68 == var_1_79) {
		var_1_95 = (var_1_96 + var_1_66);
	} else {
		var_1_95 = var_1_42;
	}


	// From: CodeObject32
	if (var_1_80 >= var_1_48) {
		var_1_97 = (! (var_1_46 && var_1_76));
	} else {
		var_1_97 = (var_1_76 && var_1_45);
	}


	// From: CodeObject33
	if (var_1_54 > (32 >> (max (var_1_59 , var_1_60)))) {
		if (var_1_55 != var_1_91) {
			if (var_1_46 || var_1_81) {
				var_1_98 = var_1_33;
			} else {
				if (var_1_79 < var_1_72) {
					var_1_98 = (min (var_1_56 , var_1_42));
				}
			}
		} else {
			var_1_98 = (min ((abs (max (var_1_56 , var_1_99))) , ((max (var_1_52 , var_1_59)) + (abs (var_1_54)))));
		}
	}


	// From: CodeObject34
	if (((min (var_1_60 , 256)) - (max (var_1_80 , var_1_86))) <= var_1_48) {
		if (var_1_73) {
			var_1_100 = (abs (var_1_70));
		} else {
			var_1_100 = var_1_27;
		}
	}


	// From: CodeObject35
	if (! var_1_81) {
		var_1_101 = var_1_62;
	}


	// From: CodeObject36
	if ((max (var_1_80 , var_1_75)) < var_1_59) {
		var_1_102 = (abs (var_1_59));
	} else {
		var_1_102 = (min ((abs (var_1_56)) , var_1_83));
	}


	// From: CodeObject37
	if (var_1_77 > ((var_1_58 * var_1_90) * (var_1_88 / 32.5))) {
		var_1_103 = (min (var_1_89 , 0.4));
	} else {
		if (var_1_70 <= 10u) {
			var_1_103 = (max ((min (var_1_62 , var_1_63)) , var_1_89));
		}
	}


	// From: CodeObject38
	if ((~ (var_1_100 & var_1_33)) > var_1_79) {
		var_1_104 = (var_1_79 - var_1_52);
	}


	// From: CodeObject39
	if (var_1_47) {
		var_1_105 = (max (10 , var_1_96));
	}


	// From: CodeObject40
	if (var_1_87 < var_1_74) {
		var_1_106 = (abs (var_1_107 - var_1_43));
	} else {
		var_1_106 = (var_1_107 - var_1_51);
	}


	// From: CodeObject41
	if (var_1_106 <= var_1_65) {
		if (var_1_46) {
			var_1_108 = (max (var_1_51 , var_1_87));
		} else {
			var_1_108 = var_1_107;
		}
	} else {
		if (var_1_75 < (- var_1_109)) {
			var_1_108 = (abs (var_1_43 + var_1_110));
		}
	}


	// From: CodeObject42
	if ((var_1_79 - (min (var_1_59 , var_1_50))) < (var_1_27 & -8)) {
		if (var_1_94 >= ((var_1_79 ^ var_1_98) + var_1_78)) {
			var_1_111 = (abs (min ((var_1_90 - var_1_89) , (max (var_1_64 , var_1_62)))));
		}
	}


	// From: CodeObject43
	if (var_1_46 && (! var_1_73)) {
		var_1_112 = var_1_96;
	}


	// From: CodeObject44
	if (var_1_33 >= -128) {
		var_1_113 = var_1_46;
	}


	// From: CodeObject45
	if (var_1_97 || (var_1_25 < var_1_51)) {
		if (var_1_115) {
			if (var_1_44) {
				var_1_114 = (var_1_64 + var_1_63);
			}
		} else {
			var_1_114 = (max ((max (var_1_63 , var_1_89)) , var_1_64));
		}
	}


	// From: CodeObject46
	if ((var_1_95 % 25) < var_1_91) {
		var_1_116 = ((max (16.3f , var_1_64)) + (var_1_117 + var_1_118));
	} else {
		var_1_116 = (abs (var_1_62));
	}


	// From: CodeObject47
	if ((var_1_52 << var_1_56) > ((abs (var_1_78)) / var_1_79)) {
		if (var_1_95 >= var_1_68) {
			var_1_119 = ((16 + var_1_60) + (max ((max (var_1_106 , var_1_51)) , var_1_59)));
		}
	} else {
		var_1_119 = (abs (max ((var_1_79 - var_1_43) , var_1_42)));
	}


	// From: CodeObject48
	if (var_1_85) {
		var_1_120 = var_1_76;
	} else {
		var_1_120 = var_1_47;
	}


	// From: CodeObject49
	var_1_121 = var_1_99;


	// From: CodeObject50
	var_1_122 = var_1_56;


	// From: CodeObject51
	if (var_1_32) {
		var_1_123 = 5u;
	} else {
		var_1_123 = var_1_124;
	}


	// From: CodeObject52
	var_1_125 = var_1_43;


	// From: CodeObject53
	if (var_1_85) {
		var_1_126 = var_1_62;
	}


	// From: CodeObject54
	if (var_1_41) {
		var_1_127 = var_1_76;
	}


	// From: CodeObject55
	if (var_1_97) {
		var_1_128 = 1;
	} else {
		var_1_128 = var_1_47;
	}


	// From: CodeObject56
	var_1_129 = var_1_54;


	// From: CodeObject57
	if (var_1_47) {
		var_1_130 = var_1_76;
	}


	// From: CodeObject58
	if (var_1_76) {
		var_1_131 = var_1_118;
	}


	// From: CodeObject59
	var_1_132 = var_1_133;


	// From: CodeObject60
	var_1_134 = var_1_79;


	// From: CodeObject61
	if (var_1_81) {
		var_1_135 = var_1_43;
	}


	// From: CodeObject62
	if (var_1_115) {
		var_1_136 = var_1_61;
	}


	// From: CodeObject63
	if (var_1_81) {
		var_1_137 = var_1_99;
	}


	// From: CodeObject64
	if (var_1_127) {
		var_1_138 = var_1_86;
	} else {
		var_1_138 = var_1_51;
	}


	// From: CodeObject65
	var_1_139 = 16;


	// From: CodeObject66
	var_1_140 = var_1_47;


	// From: CodeObject67
	var_1_141 = var_1_46;


	// From: CodeObject68
	if (var_1_128 && var_1_85) {
		if ((var_1_107 - var_1_52) <= var_1_27) {
			var_1_142 = (max (var_1_64 , var_1_90));
		} else {
			var_1_142 = (var_1_64 + var_1_118);
		}
	} else {
		var_1_142 = var_1_90;
	}


	// From: Req2Batch74PS_CN_500
	signed long int stepLocal_1 = last_1_var_1_11;
	signed long int stepLocal_0 = last_1_var_1_11;
	if (stepLocal_1 < last_1_var_1_1) {
		if (last_1_var_1_1 <= stepLocal_0) {
			var_1_8 = ((var_1_4 && var_1_9) || var_1_10);
		}
	}


	// From: Req3Batch74PS_CN_500
	unsigned long int stepLocal_3 = var_1_7;
	unsigned long int stepLocal_2 = 5u << (var_1_12 - var_1_13);
	if (! ((var_1_5 > var_1_7) || var_1_8)) {
		if (stepLocal_2 > (var_1_5 / 25u)) {
			if ((-64 * var_1_5) != stepLocal_3) {
				var_1_11 = (min (var_1_13 , var_1_12));
			} else {
				var_1_11 = var_1_12;
			}
		} else {
			var_1_11 = var_1_12;
		}
	} else {
		var_1_11 = var_1_12;
	}


	// From: Req1Batch74PS_CN_500
	if (! (var_1_11 >= var_1_11)) {
		if (var_1_8) {
			var_1_1 = ((var_1_5 - var_1_11) - var_1_11);
		} else {
			var_1_1 = var_1_5;
		}
	} else {
		var_1_1 = var_1_11;
	}


	// From: Req4Batch74PS_CN_500
	if (var_1_10) {
		if (var_1_1 > (var_1_11 / (var_1_12 + var_1_16))) {
			var_1_15 = var_1_17;
		}
	}


	// From: Req5Batch74PS_CN_500
	if (var_1_10) {
		var_1_18 = (var_1_19 + var_1_20);
	} else {
		var_1_18 = (((var_1_21 - var_1_22) - var_1_23) + var_1_20);
	}


	// From: Req6Batch74PS_CN_500
	unsigned long int stepLocal_4 = ~ var_1_1;
	if (stepLocal_4 <= (var_1_12 - var_1_11)) {
		var_1_24 = var_1_22;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 3221225470);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 14);
	assume_abort_if_not(var_1_12 <= 29);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 14);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 2305843.009213691390e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967295);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32766);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -126);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 126);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 255);
	assume_abort_if_not(var_1_50 != 0);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 64);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 63);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= -63);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -31);
	assume_abort_if_not(var_1_55 <= 32);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= -31);
	assume_abort_if_not(var_1_56 <= 31);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 4);
	assume_abort_if_not(var_1_59 <= 8);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 4);
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854765600e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= -461168.6018427382800e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427382800e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= -461168.6018427382800e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427382800e+12F && var_1_64 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= -127);
	assume_abort_if_not(var_1_67 <= 126);
	var_1_70 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_70 >= 2147483647);
	assume_abort_if_not(var_1_70 <= 4294967294);
	var_1_72 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_72 >= -2147483648);
	assume_abort_if_not(var_1_72 <= 2147483647);
	var_1_74 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_74 >= 32767);
	assume_abort_if_not(var_1_74 <= 65535);
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 16383);
	assume_abort_if_not(var_1_75 <= 32767);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 0);
	var_1_77 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_77 >= -922337.2036854776000e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854776000e+12F && var_1_77 >= 1.0e-20F ));
	assume_abort_if_not(var_1_77 != 0.0F);
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 32767);
	assume_abort_if_not(var_1_79 <= 65534);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 254);
	var_1_87 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_87 >= 49150);
	assume_abort_if_not(var_1_87 <= 65534);
	var_1_89 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_89 >= 0.0F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 9223372.036854765600e+12F && var_1_89 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_90 >= 0.0F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 9223372.036854765600e+12F && var_1_90 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_93 >= 0);
	assume_abort_if_not(var_1_93 <= 1);
	var_1_94 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_94 >= -2147483648);
	assume_abort_if_not(var_1_94 <= 2147483647);
	var_1_96 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_96 >= -16383);
	assume_abort_if_not(var_1_96 <= 16383);
	var_1_99 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_99 >= -126);
	assume_abort_if_not(var_1_99 <= 126);
	var_1_107 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_107 >= 127);
	assume_abort_if_not(var_1_107 <= 254);
	var_1_109 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_109 >= 0);
	assume_abort_if_not(var_1_109 <= 65535);
	var_1_110 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_110 >= 0);
	assume_abort_if_not(var_1_110 <= 32767);
	var_1_115 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_115 >= 0);
	assume_abort_if_not(var_1_115 <= 1);
	var_1_117 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_117 >= -230584.3009213691390e+13F && var_1_117 <= -1.0e-20F) || (var_1_117 <= 2305843.009213691390e+12F && var_1_117 >= 1.0e-20F ));
	var_1_118 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_118 >= -230584.3009213691390e+13F && var_1_118 <= -1.0e-20F) || (var_1_118 <= 2305843.009213691390e+12F && var_1_118 >= 1.0e-20F ));
	var_1_124 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_124 >= 0);
	assume_abort_if_not(var_1_124 <= 4294967294);
	var_1_133 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_133 >= -32767);
	assume_abort_if_not(var_1_133 <= 32766);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
}

int property() {
	return ((((((! (var_1_11 >= var_1_11)) ? (var_1_8 ? (var_1_1 == ((unsigned long int) ((var_1_5 - var_1_11) - var_1_11))) : (var_1_1 == ((unsigned long int) var_1_5))) : (var_1_1 == ((unsigned long int) var_1_11))) && ((last_1_var_1_11 < last_1_var_1_1) ? ((last_1_var_1_1 <= last_1_var_1_11) ? (var_1_8 == ((unsigned char) ((var_1_4 && var_1_9) || var_1_10))) : 1) : 1)) && ((! ((var_1_5 > var_1_7) || var_1_8)) ? (((5u << (var_1_12 - var_1_13)) > (var_1_5 / 25u)) ? (((-64 * var_1_5) != var_1_7) ? (var_1_11 == ((unsigned char) (min (var_1_13 , var_1_12)))) : (var_1_11 == ((unsigned char) var_1_12))) : (var_1_11 == ((unsigned char) var_1_12))) : (var_1_11 == ((unsigned char) var_1_12)))) && (var_1_10 ? ((var_1_1 > (var_1_11 / (var_1_12 + var_1_16))) ? (var_1_15 == ((float) var_1_17)) : 1) : 1)) && (var_1_10 ? (var_1_18 == ((float) (var_1_19 + var_1_20))) : (var_1_18 == ((float) (((var_1_21 - var_1_22) - var_1_23) + var_1_20))))) && (((~ var_1_1) <= (var_1_12 - var_1_11)) ? (var_1_24 == ((double) var_1_22)) : 1)
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
