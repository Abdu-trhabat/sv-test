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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch56PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned short int var_1_6 = 8;
signed long int var_1_10 = -5;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 2;
unsigned char var_1_15 = 5;
unsigned char var_1_16 = 200;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 32;
signed char var_1_19 = -50;
signed char var_1_20 = 32;
signed char var_1_21 = 5;
signed char var_1_22 = 16;
signed char var_1_23 = 2;
signed short int var_1_24 = -10;
signed short int var_1_25 = -128;
signed short int var_1_26 = 5;
signed long int var_1_27 = 32;
signed short int var_1_28 = 2;
signed short int var_1_29 = -64;
signed short int var_1_30 = -25;
unsigned long int var_1_31 = 5;
unsigned long int var_1_32 = 1491220871;
unsigned long int var_1_33 = 16;
signed long int var_1_34 = -256;
unsigned char var_1_35 = 1;
double var_1_36 = 64.5;
double var_1_37 = 1.25;
signed long int var_1_38 = 50;
signed char var_1_39 = -5;
double var_1_40 = 128.1;
signed char var_1_41 = 64;
signed char var_1_42 = 10;
signed char var_1_43 = -4;
float var_1_44 = 99.2;
signed short int var_1_45 = -32;
signed long int var_1_46 = 2;
signed long int var_1_47 = 1868181242;
signed long int var_1_48 = 0;
signed long int var_1_49 = 1000000000;
signed long int var_1_50 = 4;
signed short int var_1_51 = -1;
unsigned long int var_1_52 = 500;
signed char var_1_53 = 0;
unsigned long int var_1_54 = 10;
signed short int var_1_55 = -128;
unsigned char var_1_56 = 0;
float var_1_57 = 49.6;
float var_1_59 = 1.375;
float var_1_60 = 4.4;
float var_1_61 = 5.6;
unsigned long int var_1_62 = 1000;
unsigned long int var_1_63 = 3391703505;
signed short int var_1_64 = 8;
unsigned char var_1_65 = 0;
signed short int var_1_66 = 32;
unsigned long int var_1_67 = 128;
signed long int var_1_68 = -32;
signed long int var_1_69 = -2;
signed short int var_1_70 = 5;
signed short int var_1_71 = -32;
signed short int var_1_72 = 30242;
signed short int var_1_73 = 256;
unsigned long int var_1_74 = 32;
unsigned long int var_1_75 = 16;
signed long int var_1_76 = 1;
signed long int var_1_77 = -128;
unsigned short int var_1_78 = 10;
unsigned short int var_1_79 = 59911;
signed char var_1_80 = 8;
double var_1_81 = 5.5;
float var_1_82 = 5.2;
unsigned long int var_1_83 = 8;
float var_1_84 = 0.0;
float var_1_85 = 16.4;
float var_1_86 = 8.5;
signed long int var_1_87 = -5;
double var_1_88 = 7.75;
signed char var_1_89 = -128;
unsigned long int var_1_90 = 256;
signed char var_1_91 = -10;
signed short int var_1_92 = 32;
signed char var_1_93 = 64;
signed char var_1_94 = 2;
signed char var_1_95 = 2;
signed char var_1_96 = 1;
unsigned short int var_1_97 = 500;
signed char var_1_98 = 0;
signed short int var_1_99 = -64;
signed short int var_1_100 = 500;
signed long int var_1_101 = -64;
unsigned char var_1_102 = 1;
float var_1_103 = 32.375;
unsigned char var_1_104 = 0;
unsigned char var_1_105 = 0;
unsigned char var_1_106 = 2;
unsigned long int var_1_107 = 2594865662;
signed short int var_1_108 = 16;
unsigned long int var_1_109 = 0;
signed long int var_1_110 = 16;
unsigned char var_1_111 = 1;
unsigned char var_1_112 = 0;
unsigned char var_1_113 = 1;
signed long int var_1_114 = -16;
unsigned char var_1_115 = 128;
signed long int var_1_116 = -4;
signed short int var_1_117 = -8;
unsigned long int var_1_118 = 10;
signed char var_1_119 = -64;
double var_1_120 = 63.8;
signed char var_1_121 = -1;
unsigned char var_1_122 = 1;
signed char var_1_123 = 2;
signed char var_1_124 = 10;
unsigned long int var_1_125 = 4;
unsigned long int var_1_126 = 4;
unsigned long int var_1_127 = 500;
float var_1_128 = 7.2;
signed char var_1_129 = -64;
signed char var_1_130 = -4;
unsigned long int var_1_131 = 10000;
unsigned long int var_1_132 = 16;
unsigned char var_1_133 = 1;
signed long int var_1_134 = -8;
double var_1_135 = 10000.8;
signed short int var_1_136 = 4;
signed long int var_1_137 = 8;
signed long int var_1_138 = -5;
double var_1_139 = 5.5;
unsigned long int var_1_140 = 32;
signed char var_1_141 = -8;
float var_1_142 = 2.75;
float var_1_143 = 1.45;
signed long int var_1_144 = -32;
unsigned short int var_1_145 = 8;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_25 ^ var_1_26) >= var_1_27) {
		var_1_24 = (max ((abs (var_1_28 + var_1_29)) , var_1_30));
	}


	// From: CodeObject2
	if (1000000u > var_1_27) {
		var_1_31 = ((1831787952u + var_1_32) - var_1_33);
	} else {
		if (var_1_33 <= var_1_27) {
			var_1_31 = (min ((abs (var_1_32)) , (abs (var_1_33))));
		} else {
			var_1_31 = (abs (abs (var_1_33)));
		}
	}


	// From: CodeObject3
	if (var_1_35) {
		if (var_1_28 < (-2 ^ 1)) {
			var_1_34 = (min ((abs (var_1_25)) , var_1_24));
		}
	}


	// From: CodeObject4
	if (-5 != var_1_26) {
		var_1_36 = var_1_37;
	}


	// From: CodeObject5
	if (var_1_26 < var_1_29) {
		var_1_38 = (min ((min ((max (var_1_24 , var_1_28)) , var_1_26)) , (abs (var_1_30))));
	}


	// From: CodeObject6
	if (var_1_37 >= ((- var_1_36) * var_1_40)) {
		var_1_39 = (abs (var_1_41));
	} else {
		var_1_39 = (var_1_42 - (abs (-1 + var_1_43)));
	}


	// From: CodeObject7
	if (var_1_34 > (var_1_33 - var_1_32)) {
		var_1_44 = var_1_37;
	}


	// From: CodeObject8
	if (var_1_38 < var_1_39) {
		var_1_45 = var_1_30;
	}


	// From: CodeObject9
	if (! var_1_35) {
		if (var_1_35 || (! (var_1_33 < var_1_34))) {
			var_1_46 = var_1_39;
		} else {
			var_1_46 = (max (var_1_41 , (var_1_42 - (var_1_47 - var_1_48))));
		}
	}


	// From: CodeObject10
	if (var_1_41 >= var_1_31) {
		if (var_1_27 <= (var_1_48 * var_1_43)) {
			var_1_49 = (abs (abs (var_1_24)));
		} else {
			var_1_49 = (max (var_1_39 , var_1_50));
		}
	} else {
		var_1_49 = var_1_41;
	}


	// From: CodeObject11
	var_1_51 = (abs (min (var_1_43 , (min (var_1_42 , var_1_28)))));


	// From: CodeObject12
	if (var_1_42 <= (var_1_25 & (min (var_1_53 , var_1_46)))) {
		var_1_52 = ((min (var_1_54 , (abs (2u)))) + var_1_33);
	}


	// From: CodeObject13
	if ((var_1_40 + var_1_36) >= var_1_37) {
		if (var_1_35 || var_1_56) {
			if (var_1_25 >= var_1_39) {
				var_1_55 = (-16 + var_1_43);
			}
		} else {
			var_1_55 = (min ((abs (var_1_41)) , var_1_29));
		}
	} else {
		var_1_55 = (min ((abs (var_1_39)) , (abs (max (var_1_53 , 0)))));
	}


	// From: CodeObject14
	if ((var_1_54 & var_1_52) > (abs (var_1_49))) {
		var_1_57 = (abs (abs (var_1_37)));
	} else {
		if (16.5 > var_1_40) {
			if ((min (var_1_31 , var_1_52)) <= var_1_32) {
				var_1_57 = (abs ((min (var_1_59 , var_1_60)) + var_1_61));
			}
		}
	}


	// From: CodeObject15
	if (var_1_56) {
		var_1_62 = (var_1_63 - var_1_32);
	}


	// From: CodeObject16
	if (((abs (var_1_41)) < var_1_51) || var_1_65) {
		var_1_64 = (var_1_42 - var_1_66);
	}


	// From: CodeObject17
	if (var_1_59 > var_1_57) {
		if (var_1_61 < (- var_1_57)) {
			if ((var_1_46 ^ var_1_48) >= var_1_68) {
				var_1_67 = (var_1_47 + var_1_48);
			}
		}
	} else {
		var_1_67 = (2689500545u - var_1_54);
	}


	// From: CodeObject18
	if (var_1_56 && var_1_35) {
		if ((min (var_1_70 , var_1_49)) <= (var_1_28 * var_1_50)) {
			var_1_69 = (min (-256 , var_1_29));
		} else {
			var_1_69 = (abs (var_1_29));
		}
	} else {
		if (var_1_38 >= var_1_52) {
			var_1_69 = (max (((var_1_48 + var_1_66) - (max (var_1_47 , 4))) , var_1_30));
		}
	}


	// From: CodeObject19
	if ((var_1_25 & var_1_66) <= ((var_1_26 | var_1_38) * var_1_52)) {
		var_1_71 = (var_1_42 - var_1_66);
	} else {
		if (! var_1_65) {
			var_1_71 = ((abs (var_1_29)) + -10);
		} else {
			if (var_1_65) {
				var_1_71 = ((var_1_72 - var_1_73) - var_1_66);
			} else {
				var_1_71 = 10;
			}
		}
	}


	// From: CodeObject20
	if (var_1_42 == var_1_34) {
		var_1_74 = ((var_1_73 + var_1_66) + var_1_75);
	}


	// From: CodeObject21
	var_1_76 = (min (var_1_42 , (max ((abs (var_1_72)) , var_1_77))));


	// From: CodeObject22
	if ((var_1_68 | var_1_54) >= var_1_72) {
		if (var_1_28 < (var_1_72 * (var_1_48 | var_1_62))) {
			if ((abs (var_1_37)) > var_1_36) {
				if (var_1_35 || ((- var_1_73) < (var_1_76 * var_1_47))) {
					var_1_78 = (abs (abs (var_1_66)));
				} else {
					if (! var_1_56) {
						var_1_78 = (var_1_79 - var_1_73);
					}
				}
			} else {
				if (var_1_40 <= var_1_57) {
					var_1_78 = (max ((max (var_1_66 , (abs (var_1_72)))) , var_1_79));
				}
			}
		} else {
			var_1_78 = (min ((abs (var_1_79)) , var_1_72));
		}
	}


	// From: CodeObject23
	if (var_1_28 <= var_1_43) {
		if ((var_1_60 / var_1_81) >= var_1_59) {
			var_1_80 = (abs (-4 + var_1_43));
		}
	} else {
		var_1_80 = var_1_42;
	}


	// From: CodeObject24
	if (var_1_56 && var_1_65) {
		if (var_1_83 >= var_1_48) {
			var_1_82 = ((var_1_84 - var_1_85) - var_1_86);
		}
	} else {
		var_1_82 = (var_1_84 - (abs (var_1_61)));
	}


	// From: CodeObject25
	if (var_1_35) {
		var_1_87 = ((abs (var_1_41)) - (abs (max (var_1_43 , var_1_55))));
	} else {
		var_1_87 = (abs (var_1_73 - var_1_79));
	}


	// From: CodeObject26
	if (var_1_71 <= (var_1_27 ^ var_1_72)) {
		if ((8u + (abs (128u))) > var_1_83) {
			if (var_1_40 < (- var_1_57)) {
				var_1_88 = (abs (var_1_37));
			} else {
				var_1_88 = (255.533 - var_1_85);
			}
		}
	} else {
		var_1_88 = (abs (var_1_85 - var_1_84));
	}


	// From: CodeObject27
	if ((abs (var_1_61)) <= var_1_88) {
		var_1_89 = (abs (var_1_43));
	}


	// From: CodeObject28
	if (4 >= var_1_54) {
		if (var_1_86 <= var_1_82) {
			var_1_90 = var_1_32;
		} else {
			var_1_90 = (min (var_1_32 , (max (var_1_78 , var_1_63))));
		}
	}


	// From: CodeObject29
	if (var_1_88 <= var_1_85) {
		if (var_1_71 == (abs (var_1_80))) {
			var_1_91 = (abs (var_1_43));
		} else {
			var_1_91 = ((var_1_93 - (var_1_94 + var_1_95)) - var_1_96);
		}
	}


	// From: CodeObject30
	if (var_1_56 && var_1_65) {
		var_1_97 = (abs (abs (max (50 , 0))));
	}


	// From: CodeObject31
	if (var_1_27 <= (2 | var_1_79)) {
		if ((var_1_78 < var_1_97) || (var_1_59 < (var_1_44 * var_1_60))) {
			var_1_98 = (abs (min (var_1_43 , 64)));
		}
	} else {
		if (var_1_63 < (abs (var_1_46))) {
			var_1_98 = (var_1_95 + var_1_94);
		} else {
			var_1_98 = -32;
		}
	}


	// From: CodeObject32
	if (var_1_77 <= (abs (var_1_89))) {
		if (var_1_48 > var_1_34) {
			var_1_99 = (min (var_1_72 , (max (var_1_94 , var_1_41))));
		} else {
			if ((var_1_39 <= (var_1_30 ^ var_1_91)) && (var_1_26 > var_1_94)) {
				var_1_99 = (min ((abs (var_1_43)) , var_1_72));
			}
		}
	} else {
		var_1_99 = var_1_39;
	}


	// From: CodeObject33
	if (var_1_49 > var_1_90) {
		if (var_1_101 < var_1_97) {
			var_1_100 = (abs (abs (var_1_53)));
		}
	} else {
		var_1_100 = (abs (-1));
	}


	// From: CodeObject34
	if (((var_1_74 + var_1_63) >> var_1_75) < var_1_62) {
		if (var_1_26 > ((max (var_1_73 , 1000)) - var_1_93)) {
			var_1_102 = (((min (var_1_40 , var_1_103)) < var_1_59) && ((var_1_56 && var_1_104) || var_1_105));
		} else {
			var_1_102 = ((var_1_60 <= var_1_82) && var_1_105);
		}
	}


	// From: CodeObject35
	if (((max (var_1_63 , var_1_107)) - var_1_93) >= (abs (var_1_96))) {
		var_1_106 = (min (var_1_94 , var_1_96));
	} else {
		if ((min (var_1_28 , var_1_71)) > ((~ var_1_96) ^ var_1_48)) {
			var_1_106 = (min (var_1_93 , var_1_94));
		}
	}


	// From: CodeObject36
	if (((var_1_95 * var_1_52) & var_1_109) < var_1_83) {
		var_1_108 = (var_1_96 + (abs (abs (var_1_106))));
	}


	// From: CodeObject37
	if (var_1_98 >= var_1_73) {
		var_1_110 = (abs (var_1_70));
	} else {
		var_1_110 = var_1_98;
	}


	// From: CodeObject38
	if ((var_1_77 | var_1_108) > (max (var_1_34 , var_1_26))) {
		if (var_1_89 >= ((var_1_41 >> var_1_107) / var_1_93)) {
			if (var_1_46 <= var_1_55) {
				var_1_111 = (! var_1_112);
			} else {
				var_1_111 = (var_1_104 || (var_1_102 && var_1_105));
			}
		}
	} else {
		var_1_111 = (var_1_112 && var_1_113);
	}


	// From: CodeObject39
	if (var_1_35) {
		if ((var_1_115 - var_1_93) > (abs (var_1_108))) {
			var_1_114 = (min ((min (var_1_99 , var_1_116)) , var_1_106));
		}
	}


	// From: CodeObject40
	if ((var_1_118 & (var_1_107 / var_1_32)) == var_1_74) {
		var_1_117 = ((min ((abs (var_1_43)) , var_1_73)) + var_1_89);
	}


	// From: CodeObject41
	if (var_1_86 >= var_1_59) {
		var_1_119 = (min (var_1_41 , -10));
	}


	// From: CodeObject42
	if (var_1_65) {
		var_1_120 = (var_1_85 - var_1_84);
	}


	// From: CodeObject43
	if (var_1_122) {
		if ((var_1_57 / var_1_81) > var_1_86) {
			var_1_121 = ((min (16 , (min (var_1_94 , var_1_43)))) + (var_1_95 - (var_1_123 + var_1_124)));
		} else {
			var_1_121 = (max (var_1_95 , var_1_123));
		}
	}


	// From: CodeObject44
	if (((abs (var_1_94)) / var_1_93) >= (var_1_101 ^ (var_1_106 - var_1_115))) {
		var_1_125 = (max ((var_1_33 + 5u) , (abs (max (var_1_63 , var_1_95)))));
	}


	// From: CodeObject45
	if (! var_1_113) {
		var_1_126 = (min (var_1_97 , var_1_72));
	} else {
		var_1_126 = (var_1_63 - var_1_66);
	}


	// From: CodeObject46
	if (var_1_70 <= (var_1_42 % var_1_72)) {
		var_1_127 = (var_1_97 + (abs (abs (var_1_32))));
	} else {
		if (0 <= var_1_110) {
			var_1_127 = var_1_48;
		}
	}


	// From: CodeObject47
	if (var_1_102) {
		var_1_128 = var_1_59;
	} else {
		var_1_128 = var_1_61;
	}


	// From: CodeObject48
	var_1_129 = var_1_95;


	// From: CodeObject49
	if (var_1_35) {
		var_1_130 = var_1_41;
	} else {
		var_1_130 = var_1_41;
	}


	// From: CodeObject50
	if (var_1_112) {
		var_1_131 = var_1_132;
	}


	// From: CodeObject51
	var_1_133 = var_1_104;


	// From: CodeObject52
	var_1_134 = var_1_78;


	// From: CodeObject53
	if (var_1_104) {
		var_1_135 = var_1_59;
	}


	// From: CodeObject54
	if (var_1_35) {
		var_1_136 = var_1_124;
	} else {
		var_1_136 = var_1_130;
	}


	// From: CodeObject55
	if (var_1_112) {
		var_1_137 = var_1_92;
	}


	// From: CodeObject56
	if (var_1_122) {
		var_1_138 = var_1_39;
	} else {
		var_1_138 = var_1_91;
	}


	// From: CodeObject57
	var_1_139 = -0.5;


	// From: CodeObject58
	if (var_1_122) {
		var_1_140 = var_1_124;
	}


	// From: CodeObject59
	var_1_141 = var_1_94;


	// From: CodeObject60
	var_1_142 = var_1_85;


	// From: CodeObject61
	if (var_1_105) {
		var_1_143 = var_1_84;
	} else {
		var_1_143 = var_1_60;
	}


	// From: CodeObject62
	if (var_1_104) {
		var_1_144 = var_1_73;
	} else {
		var_1_144 = 5;
	}


	// From: CodeObject63
	if (var_1_78 <= (var_1_79 - (abs (var_1_94)))) {
		if (var_1_138 <= ((var_1_95 ^ 5) & var_1_131)) {
			var_1_145 = 256;
		}
	} else {
		var_1_145 = var_1_94;
	}


	// From: Req1Batch56PS_CN_500
	unsigned char stepLocal_0 = var_1_2;
	if (stepLocal_0 && var_1_3) {
		var_1_1 = ((! var_1_4) || (! (var_1_2 || var_1_5)));
	}


	// From: Req4Batch56PS_CN_500
	var_1_12 = ((64 + var_1_13) - var_1_14);


	// From: Req5Batch56PS_CN_500
	var_1_15 = ((var_1_16 - var_1_17) - 10);


	// From: Req6Batch56PS_CN_500
	if (var_1_1) {
		var_1_18 = (var_1_16 - var_1_13);
	}


	// From: Req7Batch56PS_CN_500
	signed long int stepLocal_2 = - (var_1_15 / var_1_13);
	if (stepLocal_2 <= (var_1_17 + var_1_18)) {
		var_1_19 = (min (var_1_16 , (abs (abs (var_1_17)))));
	} else {
		var_1_19 = (min (var_1_17 , ((var_1_20 + var_1_21) - var_1_22)));
	}


	// From: Req2Batch56PS_CN_500
	if (var_1_4) {
		var_1_6 = (var_1_15 + (min (var_1_15 , var_1_18)));
	}


	// From: Req3Batch56PS_CN_500
	signed long int stepLocal_1 = min (var_1_15 , (var_1_18 / 256));
	if (var_1_18 >= stepLocal_1) {
		var_1_10 = var_1_19;
	} else {
		var_1_10 = (max (var_1_15 , var_1_18));
	}


	// From: Req8Batch56PS_CN_500
	if (var_1_22 >= var_1_10) {
		var_1_23 = (var_1_21 + var_1_17);
	} else {
		if (! (var_1_18 >= var_1_22)) {
			var_1_23 = (min (var_1_20 , var_1_22));
		} else {
			var_1_23 = var_1_17;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 64);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 190);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -32768);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32768);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -16383);
	assume_abort_if_not(var_1_28 <= 16383);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -16383);
	assume_abort_if_not(var_1_29 <= 16383);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32767);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 1073741824);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -126);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -1);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -63);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_47 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_47 >= 1073741823);
	assume_abort_if_not(var_1_47 <= 2147483646);
	var_1_48 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 1073741823);
	var_1_50 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_50 >= -2147483647);
	assume_abort_if_not(var_1_50 <= 2147483646);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= -128);
	assume_abort_if_not(var_1_53 <= 127);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 2147483647);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= -461168.6018427382800e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= -461168.6018427382800e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= -461168.6018427382800e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 2147483647);
	assume_abort_if_not(var_1_63 <= 4294967294);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 1);
	var_1_66 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 32766);
	var_1_68 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_68 >= -2147483648);
	assume_abort_if_not(var_1_68 <= 2147483647);
	var_1_70 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_70 >= -32768);
	assume_abort_if_not(var_1_70 <= 32767);
	var_1_72 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_72 >= 16382);
	assume_abort_if_not(var_1_72 <= 32766);
	var_1_73 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 16383);
	var_1_75 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 2147483647);
	var_1_77 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_77 >= -2147483647);
	assume_abort_if_not(var_1_77 <= 2147483646);
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 32767);
	assume_abort_if_not(var_1_79 <= 65534);
	var_1_81 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_81 >= -922337.2036854776000e+13F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 9223372.036854776000e+12F && var_1_81 >= 1.0e-20F ));
	assume_abort_if_not(var_1_81 != 0.0F);
	var_1_83 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 4294967295);
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= 4611686.018427382800e+12F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 9223372.036854765600e+12F && var_1_84 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 4611686.018427382800e+12F && var_1_85 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_86 >= 0.0F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 9223372.036854765600e+12F && var_1_86 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_92 >= -32768);
	assume_abort_if_not(var_1_92 <= 32767);
	var_1_93 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_93 >= 62);
	assume_abort_if_not(var_1_93 <= 126);
	var_1_94 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 32);
	var_1_95 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 31);
	var_1_96 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 126);
	var_1_101 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_101 >= -2147483648);
	assume_abort_if_not(var_1_101 <= 2147483647);
	var_1_103 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_103 >= -922337.2036854776000e+13F && var_1_103 <= -1.0e-20F) || (var_1_103 <= 9223372.036854776000e+12F && var_1_103 >= 1.0e-20F ));
	var_1_104 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_104 >= 0);
	assume_abort_if_not(var_1_104 <= 0);
	var_1_105 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_105 >= 0);
	assume_abort_if_not(var_1_105 <= 0);
	var_1_107 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_107 >= 2147483647);
	assume_abort_if_not(var_1_107 <= 4294967295);
	var_1_109 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_109 >= 0);
	assume_abort_if_not(var_1_109 <= 4294967295);
	var_1_112 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_112 >= 1);
	assume_abort_if_not(var_1_112 <= 1);
	var_1_113 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_113 >= 1);
	assume_abort_if_not(var_1_113 <= 1);
	var_1_115 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_115 >= 127);
	assume_abort_if_not(var_1_115 <= 255);
	var_1_116 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_116 >= -2147483647);
	assume_abort_if_not(var_1_116 <= 2147483646);
	var_1_118 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_118 >= 0);
	assume_abort_if_not(var_1_118 <= 4294967295);
	var_1_122 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_122 >= 0);
	assume_abort_if_not(var_1_122 <= 1);
	var_1_123 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_123 >= 0);
	assume_abort_if_not(var_1_123 <= 32);
	var_1_124 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_124 >= 0);
	assume_abort_if_not(var_1_124 <= 31);
	var_1_132 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_132 >= 0);
	assume_abort_if_not(var_1_132 <= 4294967294);
}



void updateLastVariables() {
}

int property() {
	return ((((((((var_1_2 && var_1_3) ? (var_1_1 == ((unsigned char) ((! var_1_4) || (! (var_1_2 || var_1_5))))) : 1) && (var_1_4 ? (var_1_6 == ((unsigned short int) (var_1_15 + (min (var_1_15 , var_1_18))))) : 1)) && ((var_1_18 >= (min (var_1_15 , (var_1_18 / 256)))) ? (var_1_10 == ((signed long int) var_1_19)) : (var_1_10 == ((signed long int) (max (var_1_15 , var_1_18)))))) && (var_1_12 == ((unsigned char) ((64 + var_1_13) - var_1_14)))) && (var_1_15 == ((unsigned char) ((var_1_16 - var_1_17) - 10)))) && (var_1_1 ? (var_1_18 == ((unsigned char) (var_1_16 - var_1_13))) : 1)) && (((- (var_1_15 / var_1_13)) <= (var_1_17 + var_1_18)) ? (var_1_19 == ((signed char) (min (var_1_16 , (abs (abs (var_1_17))))))) : (var_1_19 == ((signed char) (min (var_1_17 , ((var_1_20 + var_1_21) - var_1_22))))))) && ((var_1_22 >= var_1_10) ? (var_1_23 == ((signed char) (var_1_21 + var_1_17))) : ((! (var_1_18 >= var_1_22)) ? (var_1_23 == ((signed char) (min (var_1_20 , var_1_22)))) : (var_1_23 == ((signed char) var_1_17))))
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
