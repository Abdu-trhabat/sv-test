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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch2PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 3.95;
float var_1_4 = 9999999.8;
float var_1_5 = 8.6;
unsigned long int var_1_6 = 10000;
double var_1_8 = 64.5;
float var_1_10 = 255.25;
float var_1_11 = 7.5;
float var_1_12 = 0.0;
float var_1_13 = 64.8;
double var_1_14 = 127.75;
signed char var_1_15 = 8;
signed char var_1_16 = 32;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
double var_1_19 = 2.25;
unsigned char var_1_20 = 0;
unsigned short int var_1_21 = 256;
float var_1_22 = 256.5;
unsigned char var_1_23 = 2;
unsigned char var_1_24 = 1;
float var_1_25 = 1.375;
float var_1_26 = 10.25;
signed char var_1_27 = -64;
signed long int var_1_28 = -1;
signed long int var_1_29 = 5;
signed char var_1_30 = -10;
unsigned long int var_1_31 = 8;
unsigned long int var_1_32 = 100000;
unsigned char var_1_33 = 1;
unsigned long int var_1_34 = 2934135264;
signed short int var_1_35 = 2;
unsigned char var_1_36 = 1;
unsigned short int var_1_37 = 100;
unsigned char var_1_38 = 25;
unsigned char var_1_39 = 8;
unsigned char var_1_40 = 5;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 5;
unsigned char var_1_43 = 5;
unsigned char var_1_44 = 5;
unsigned char var_1_45 = 10;
unsigned char var_1_46 = 5;
unsigned long int var_1_47 = 2;
unsigned long int var_1_48 = 1581508667;
unsigned char var_1_49 = 1;
signed short int var_1_50 = -5;
float var_1_51 = 99999.25;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 128;
unsigned short int var_1_55 = 5;
double var_1_56 = 0.875;
double var_1_57 = 50.6;
double var_1_58 = 2.5;
unsigned short int var_1_59 = 34260;
signed long int var_1_60 = 32;
unsigned short int var_1_61 = 128;
unsigned long int var_1_62 = 16;
signed long int var_1_63 = -25;
unsigned char var_1_64 = 1;
unsigned short int var_1_65 = 100;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 1;
signed long int var_1_68 = -1;
unsigned char var_1_69 = 1;
unsigned long int var_1_70 = 4;
double var_1_71 = 7.2;
unsigned long int var_1_72 = 8;
signed short int var_1_73 = -16;
signed short int var_1_74 = -16;
signed short int var_1_75 = -200;
unsigned char var_1_76 = 0;
signed long int var_1_77 = -4;
unsigned char var_1_78 = 1;
unsigned long int var_1_79 = 64;
unsigned short int var_1_80 = 64;
unsigned short int var_1_81 = 16;
signed char var_1_82 = 0;
signed char var_1_83 = -2;
float var_1_84 = 24.4;
float var_1_85 = 1.28;
unsigned long int var_1_86 = 0;
unsigned long int var_1_87 = 16;
signed short int var_1_88 = -25;
unsigned short int var_1_89 = 5;
unsigned short int var_1_90 = 25;
unsigned char var_1_91 = 1;
float var_1_92 = 9.65;
unsigned char var_1_93 = 1;
unsigned long int var_1_94 = 32;
double var_1_95 = 4.8;
float var_1_96 = 32.25;
float var_1_97 = 0.0;
float var_1_98 = 49.875;
float var_1_99 = 1.125;
unsigned short int var_1_100 = 1000;
unsigned long int var_1_101 = 2;
unsigned char var_1_102 = 1;
unsigned char var_1_103 = 5;
unsigned char var_1_104 = 0;
double var_1_105 = 499.5;
unsigned long int var_1_106 = 25;
float var_1_107 = 63.8;
double var_1_108 = 99999999.25;
unsigned short int var_1_109 = 128;
unsigned short int var_1_110 = 2;
signed char var_1_111 = 4;
signed char var_1_112 = 32;
signed char var_1_113 = -16;
unsigned short int var_1_114 = 10;
unsigned long int var_1_115 = 10;
double var_1_116 = 100.5;
double var_1_117 = 10.7;
double var_1_118 = 64.4;
double var_1_119 = 0.0;
double var_1_120 = 16.4;
float var_1_121 = 4.125;
float var_1_122 = 15.25;
signed long int var_1_123 = -16;
signed short int var_1_124 = -10;
signed long int var_1_125 = -64;
double var_1_126 = 32.5;
unsigned short int var_1_127 = 8;
signed long int var_1_128 = 25;
unsigned short int var_1_129 = 16;
signed long int var_1_130 = 128;
signed char var_1_131 = 64;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_6 = 10000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_23 >= var_1_24) {
		var_1_22 = (var_1_25 + var_1_26);
	}


	// From: CodeObject2
	if (((var_1_22 + 127.75f) * var_1_25) < var_1_26) {
		if ((abs (var_1_23)) <= ((min (var_1_24 , var_1_28)) & var_1_29)) {
			var_1_27 = var_1_30;
		}
	}


	// From: CodeObject3
	if (var_1_29 < (~ var_1_30)) {
		if ((max ((var_1_28 >> 31) , var_1_29)) < var_1_23) {
			var_1_31 = (((abs (var_1_23)) + var_1_24) + var_1_32);
		}
	} else {
		if ((var_1_22 < (var_1_26 * var_1_25)) && var_1_33) {
			var_1_31 = (min (50u , (abs (var_1_32 + var_1_23))));
		} else {
			var_1_31 = (var_1_34 - var_1_23);
		}
	}


	// From: CodeObject4
	if (var_1_33 && var_1_36) {
		var_1_35 = (min ((min (var_1_27 , (max (var_1_30 , var_1_23)))) , 16));
	}


	// From: CodeObject5
	if (var_1_23 >= (var_1_24 & var_1_38)) {
		var_1_37 = (max ((abs (var_1_24)) , var_1_38));
	}


	// From: CodeObject6
	if (((8 >> var_1_24) * var_1_31) <= var_1_37) {
		var_1_39 = (max ((max ((var_1_40 + 32) , var_1_41)) , (var_1_42 + (abs (var_1_43)))));
	} else {
		var_1_39 = (abs (var_1_42 + 25));
	}


	// From: CodeObject7
	if ((var_1_34 | -5) == 4u) {
		if (var_1_36) {
			var_1_44 = (abs (min (var_1_41 , var_1_42)));
		} else {
			var_1_44 = ((max (var_1_42 , var_1_43)) + (var_1_45 + (abs (var_1_46))));
		}
	}


	// From: CodeObject8
	if (var_1_33) {
		if ((var_1_34 | 5) >= var_1_29) {
			var_1_47 = (abs ((var_1_48 - var_1_39) + (max (var_1_38 , 10u))));
		} else {
			if (((var_1_29 / var_1_48) ^ var_1_40) <= var_1_32) {
				var_1_47 = (abs (abs (var_1_40)));
			} else {
				var_1_47 = var_1_42;
			}
		}
	} else {
		var_1_47 = ((abs (2973765320u)) - 16u);
	}


	// From: CodeObject9
	if (var_1_33) {
		if ((abs (var_1_30)) <= (var_1_47 + var_1_42)) {
			if (var_1_38 > var_1_40) {
				var_1_49 = (max (var_1_46 , var_1_45));
			}
		}
	}


	// From: CodeObject10
	if ((var_1_25 * var_1_26) > (var_1_22 / var_1_51)) {
		var_1_50 = (abs (abs (var_1_38)));
	}


	// From: CodeObject11
	if (var_1_53) {
		var_1_52 = (min ((abs (var_1_41)) , (var_1_54 - var_1_40)));
	}


	// From: CodeObject12
	if ((var_1_56 - (min (var_1_57 , var_1_58))) > var_1_51) {
		var_1_55 = (var_1_59 - var_1_45);
	}


	// From: CodeObject13
	if (var_1_56 < 4.25) {
		var_1_60 = (var_1_30 + -100);
	}


	// From: CodeObject14
	if (-8 >= var_1_49) {
		var_1_61 = (min ((var_1_41 + var_1_52) , var_1_43));
	}


	// From: CodeObject15
	var_1_62 = (max ((var_1_52 + (min (var_1_54 , var_1_38))) , var_1_23));


	// From: CodeObject16
	if ((abs (8)) == (var_1_60 & 1)) {
		if (var_1_53) {
			var_1_63 = var_1_39;
		} else {
			var_1_63 = ((var_1_49 - var_1_37) + var_1_52);
		}
	} else {
		if (var_1_30 <= (var_1_46 - (min (var_1_45 , var_1_43)))) {
			var_1_63 = (min ((min (var_1_30 , -64)) , 64));
		} else {
			var_1_63 = var_1_37;
		}
	}


	// From: CodeObject17
	if ((abs (var_1_54 + var_1_65)) <= ((var_1_40 - var_1_24) + var_1_44)) {
		if (var_1_48 >= (- (max (var_1_31 , var_1_62)))) {
			if (var_1_61 >= 16) {
				var_1_64 = (var_1_33 && var_1_66);
			} else {
				var_1_64 = (var_1_66 || var_1_67);
			}
		} else {
			var_1_64 = ((64 > var_1_68) || var_1_69);
		}
	}


	// From: CodeObject18
	if (var_1_62 <= var_1_47) {
		var_1_70 = (max ((max (var_1_48 , (abs (var_1_52)))) , (min (var_1_55 , var_1_46))));
	}


	// From: CodeObject19
	if ((~ (var_1_27 + var_1_37)) >= ((abs (var_1_61)) / var_1_48)) {
		var_1_71 = (abs (var_1_26));
	}


	// From: CodeObject20
	if ((var_1_27 * var_1_73) <= 0) {
		if ((abs (var_1_30)) == var_1_43) {
			if (var_1_60 < (var_1_68 | (abs (var_1_49)))) {
				var_1_72 = (max (var_1_52 , 8u));
			}
		} else {
			var_1_72 = (var_1_39 + var_1_44);
		}
	}


	// From: CodeObject21
	if (var_1_53) {
		var_1_74 = (min (var_1_45 , (max ((var_1_24 - var_1_42) , 0))));
	} else {
		var_1_74 = (max ((var_1_41 + (abs (var_1_43))) , var_1_23));
	}


	// From: CodeObject22
	if ((- var_1_56) <= (max ((abs (var_1_22)) , 31.7))) {
		if (var_1_60 > (max (var_1_63 , (var_1_49 % var_1_59)))) {
			var_1_75 = (var_1_49 + (min (var_1_30 , var_1_27)));
		}
	}


	// From: CodeObject23
	if (var_1_74 >= var_1_30) {
		var_1_76 = (var_1_64 && var_1_66);
	} else {
		var_1_76 = (((var_1_77 % var_1_54) != (var_1_37 * var_1_29)) || (var_1_67 || (var_1_69 && var_1_78)));
	}


	// From: CodeObject24
	if ((var_1_46 / var_1_54) > (var_1_50 ^ var_1_38)) {
		if (var_1_45 > ((1 >> var_1_61) % var_1_54)) {
			var_1_79 = var_1_45;
		} else {
			var_1_79 = (var_1_55 + var_1_42);
		}
	} else {
		if (var_1_74 <= var_1_55) {
			var_1_79 = (var_1_48 + (var_1_46 + var_1_38));
		}
	}


	// From: CodeObject25
	if (var_1_33) {
		var_1_80 = (max (var_1_52 , (var_1_23 + var_1_46)));
	} else {
		var_1_80 = (min (var_1_44 , (max ((min (var_1_46 , var_1_81)) , (var_1_59 - var_1_52)))));
	}


	// From: CodeObject26
	if (24.02f > (var_1_22 * (var_1_71 + var_1_57))) {
		var_1_82 = (max (var_1_30 , var_1_83));
	} else {
		var_1_82 = var_1_83;
	}


	// From: CodeObject27
	if ((abs (var_1_58)) != var_1_26) {
		if ((abs (var_1_26 * var_1_51)) != var_1_71) {
			var_1_84 = (max (var_1_26 , (abs (199.25f))));
		} else {
			var_1_84 = (min (var_1_25 , var_1_85));
		}
	}


	// From: CodeObject28
	if (var_1_76) {
		var_1_86 = var_1_42;
	} else {
		var_1_86 = var_1_81;
	}


	// From: CodeObject29
	if (var_1_66) {
		var_1_87 = var_1_24;
	}


	// From: CodeObject30
	var_1_88 = var_1_30;


	// From: CodeObject31
	if (var_1_69) {
		var_1_89 = var_1_46;
	} else {
		var_1_89 = 8;
	}


	// From: CodeObject32
	var_1_90 = var_1_81;


	// From: CodeObject33
	var_1_91 = var_1_78;


	// From: CodeObject34
	if (var_1_36) {
		var_1_92 = var_1_26;
	}


	// From: CodeObject35
	if (var_1_76) {
		var_1_93 = 8;
	}


	// From: CodeObject36
	var_1_94 = var_1_46;


	// From: CodeObject37
	if (! (var_1_60 <= var_1_23)) {
		if (var_1_48 >= var_1_32) {
			if ((abs (max (var_1_46 , var_1_45))) > ((var_1_50 & var_1_54) | var_1_72)) {
				var_1_95 = (abs (abs (var_1_85)));
			}
		} else {
			var_1_95 = (abs (var_1_25));
		}
	}


	// From: CodeObject38
	if (var_1_41 < ((var_1_63 + var_1_54) >> var_1_49)) {
		var_1_96 = (max ((abs (var_1_25)) , (abs (9.9999999995E9f))));
	} else {
		if (var_1_25 < (var_1_58 - (var_1_97 - var_1_98))) {
			var_1_96 = (var_1_26 + var_1_25);
		}
	}


	// From: CodeObject39
	if (var_1_24 > var_1_74) {
		var_1_99 = var_1_98;
	}


	// From: CodeObject40
	if (var_1_33) {
		var_1_100 = (8 + (abs (var_1_46)));
	} else {
		var_1_100 = (abs (var_1_81));
	}


	// From: CodeObject41
	var_1_101 = (var_1_37 + (max (var_1_39 , (abs (var_1_100)))));


	// From: CodeObject42
	if (var_1_59 != ((46909 - var_1_38) | var_1_61)) {
		if ((var_1_35 + var_1_103) <= var_1_94) {
			var_1_102 = var_1_78;
		}
	}


	// From: CodeObject43
	if (((max (var_1_22 , var_1_99)) / var_1_97) >= var_1_95) {
		var_1_104 = (! var_1_67);
	}


	// From: CodeObject44
	if ((var_1_28 / (max (var_1_106 , var_1_54))) < var_1_72) {
		var_1_105 = (abs (min (var_1_85 , var_1_98)));
	}


	// From: CodeObject45
	if (var_1_66) {
		if ((- var_1_105) != (abs (var_1_56 * var_1_26))) {
			if ((abs (var_1_39)) >= var_1_54) {
				var_1_107 = (max (0.8f , var_1_25));
			}
		} else {
			var_1_107 = (abs (var_1_26));
		}
	}


	// From: CodeObject46
	if (var_1_34 > (var_1_47 / var_1_48)) {
		var_1_108 = (abs (var_1_26));
	} else {
		var_1_108 = (var_1_25 + 63.5);
	}


	// From: CodeObject47
	if (((max (var_1_85 , var_1_22)) + var_1_84) < var_1_25) {
		var_1_109 = (abs (abs (var_1_59 - var_1_110)));
	}


	// From: CodeObject48
	if (var_1_71 > (abs (var_1_95))) {
		if (var_1_23 <= var_1_80) {
			if (((abs (var_1_30)) ^ (max (var_1_109 , -4))) <= var_1_68) {
				if ((var_1_35 + var_1_110) < (abs (64))) {
					var_1_111 = ((max (var_1_46 , var_1_112)) + var_1_113);
				}
			} else {
				var_1_111 = var_1_30;
			}
		} else {
			var_1_111 = (abs (var_1_113));
		}
	}


	// From: CodeObject49
	if (var_1_66 || ((var_1_44 ^ var_1_35) > var_1_63)) {
		if (var_1_64) {
			var_1_114 = (abs (max (var_1_38 , var_1_24)));
		} else {
			var_1_114 = (min ((max (var_1_39 , var_1_38)) , var_1_103));
		}
	}


	// From: CodeObject50
	if (var_1_76) {
		if (var_1_104) {
			var_1_115 = (abs (var_1_110));
		} else {
			var_1_115 = (abs (var_1_34 - var_1_89));
		}
	} else {
		if (var_1_102) {
			var_1_115 = (max (var_1_65 , var_1_89));
		}
	}


	// From: CodeObject51
	if ((var_1_29 % (min (1u , var_1_54))) == var_1_52) {
		var_1_116 = (abs (var_1_26 + (var_1_117 + var_1_118)));
	} else {
		if (var_1_91) {
			var_1_116 = (var_1_98 - (var_1_119 - (4.0469343023216082E18 - var_1_120)));
		} else {
			var_1_116 = (var_1_26 + (min (var_1_117 , var_1_120)));
		}
	}


	// From: CodeObject52
	if (var_1_51 != 9999999.7f) {
		if (var_1_45 <= var_1_114) {
			var_1_121 = (abs (var_1_98));
		} else {
			var_1_121 = (abs (var_1_119 - var_1_120));
		}
	} else {
		var_1_121 = (var_1_98 - (var_1_120 + var_1_122));
	}


	// From: CodeObject53
	if ((abs (var_1_46 - 1000000)) > var_1_72) {
		if ((max ((var_1_95 * var_1_107) , (max (var_1_118 , var_1_22)))) <= var_1_120) {
			if ((var_1_34 >> var_1_114) >= (var_1_101 * var_1_79)) {
				var_1_123 = ((var_1_103 + var_1_49) - (min (var_1_81 , var_1_23)));
			} else {
				var_1_123 = (var_1_39 - var_1_52);
			}
		}
	} else {
		var_1_123 = ((abs (var_1_113)) + var_1_43);
	}


	// From: CodeObject54
	if (var_1_104 || (var_1_79 > (max (var_1_42 , var_1_52)))) {
		var_1_124 = (min (var_1_40 , (max (var_1_43 , var_1_38))));
	} else {
		var_1_124 = var_1_49;
	}


	// From: CodeObject55
	var_1_125 = var_1_27;


	// From: CodeObject56
	var_1_126 = var_1_119;


	// From: CodeObject57
	if (var_1_33) {
		var_1_127 = var_1_49;
	} else {
		var_1_127 = var_1_38;
	}


	// From: CodeObject58
	if (var_1_36) {
		var_1_128 = var_1_37;
	} else {
		var_1_128 = var_1_40;
	}


	// From: CodeObject59
	if (var_1_91) {
		var_1_129 = var_1_93;
	} else {
		var_1_129 = var_1_103;
	}


	// From: CodeObject60
	if (((~ var_1_74) | var_1_110) <= (abs (var_1_129))) {
		var_1_130 = (min ((var_1_50 + var_1_80) , var_1_113));
	}


	// From: CodeObject61
	var_1_131 = var_1_83;


	// From: Req4Batch2PS_CN_500
	if ((var_1_15 - (min (0 , var_1_16))) > last_1_var_1_6) {
		var_1_14 = var_1_12;
	}


	// From: Req3Batch2PS_CN_500
	if ((var_1_5 / var_1_11) >= (var_1_8 - var_1_4)) {
		var_1_10 = (min ((var_1_5 - (var_1_12 - var_1_13)) , var_1_4));
	} else {
		var_1_10 = 4.2f;
	}


	// From: Req7Batch2PS_CN_500
	var_1_20 = var_1_16;


	// From: Req8Batch2PS_CN_500
	var_1_21 = var_1_16;


	// From: Req5Batch2PS_CN_500
	if (var_1_21 <= (var_1_16 * var_1_20)) {
		if ((var_1_5 + var_1_14) <= 127.025f) {
			var_1_17 = var_1_18;
		} else {
			var_1_17 = var_1_18;
		}
	} else {
		var_1_17 = var_1_18;
	}


	// From: Req2Batch2PS_CN_500
	unsigned char stepLocal_0 = var_1_20 != var_1_20;
	if (var_1_17) {
		if ((max (var_1_14 , (max (var_1_5 , 199.78)))) != (var_1_4 - var_1_8)) {
			if (stepLocal_0 || var_1_17) {
				var_1_6 = var_1_20;
			} else {
				var_1_6 = 5u;
			}
		} else {
			var_1_6 = var_1_20;
		}
	} else {
		var_1_6 = var_1_20;
	}


	// From: Req1Batch2PS_CN_500
	if (var_1_6 <= var_1_6) {
		if (var_1_6 > var_1_6) {
			var_1_1 = (var_1_4 - var_1_5);
		} else {
			var_1_1 = var_1_5;
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req6Batch2PS_CN_500
	if (var_1_1 < var_1_11) {
		var_1_19 = (var_1_13 - 256.4);
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 4611686.018427382800e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 255);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 255);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -461168.6018427382800e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -461168.6018427382800e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483648);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -127);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 2147483647);
	assume_abort_if_not(var_1_34 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 255);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 64);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 1073741823);
	assume_abort_if_not(var_1_48 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
	assume_abort_if_not(var_1_51 != 0.0F);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 127);
	assume_abort_if_not(var_1_54 <= 254);
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854776000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854776000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 32767);
	assume_abort_if_not(var_1_59 <= 65534);
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 65535);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 0);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 1);
	assume_abort_if_not(var_1_67 <= 1);
	var_1_68 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_68 >= -2147483648);
	assume_abort_if_not(var_1_68 <= 2147483647);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 1);
	assume_abort_if_not(var_1_69 <= 1);
	var_1_73 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_73 >= -32768);
	assume_abort_if_not(var_1_73 <= 32767);
	var_1_77 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_77 >= -2147483648);
	assume_abort_if_not(var_1_77 <= 2147483647);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 1);
	assume_abort_if_not(var_1_78 <= 1);
	var_1_81 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 65534);
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= -127);
	assume_abort_if_not(var_1_83 <= 126);
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= -922337.2036854765600e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 9223372.036854765600e+12F && var_1_85 >= 1.0e-20F ));
	var_1_97 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_97 >= 4611686.018427387900e+12F && var_1_97 <= -1.0e-20F) || (var_1_97 <= 9223372.036854776000e+12F && var_1_97 >= 1.0e-20F ));
	var_1_98 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_98 >= 0.0F && var_1_98 <= -1.0e-20F) || (var_1_98 <= 4611686.018427387900e+12F && var_1_98 >= 1.0e-20F ));
	var_1_103 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_103 >= 0);
	assume_abort_if_not(var_1_103 <= 255);
	var_1_106 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 4294967295);
	assume_abort_if_not(var_1_106 != 0);
	var_1_110 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_110 >= 0);
	assume_abort_if_not(var_1_110 <= 32767);
	var_1_112 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_112 >= -63);
	assume_abort_if_not(var_1_112 <= 63);
	var_1_113 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_113 >= -63);
	assume_abort_if_not(var_1_113 <= 63);
	var_1_117 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_117 >= -230584.3009213691390e+13F && var_1_117 <= -1.0e-20F) || (var_1_117 <= 2305843.009213691390e+12F && var_1_117 >= 1.0e-20F ));
	var_1_118 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_118 >= -230584.3009213691390e+13F && var_1_118 <= -1.0e-20F) || (var_1_118 <= 2305843.009213691390e+12F && var_1_118 >= 1.0e-20F ));
	var_1_119 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_119 >= 4611686.018427382800e+12F && var_1_119 <= -1.0e-20F) || (var_1_119 <= 9223372.036854765600e+12F && var_1_119 >= 1.0e-20F ));
	var_1_120 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_120 >= 0.0F && var_1_120 <= -1.0e-20F) || (var_1_120 <= 2305843.009213691390e+12F && var_1_120 >= 1.0e-20F ));
	var_1_122 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_122 >= 0.0F && var_1_122 <= -1.0e-20F) || (var_1_122 <= 4611686.018427382800e+12F && var_1_122 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_6 = var_1_6;
}

int property() {
	return ((((((((var_1_6 <= var_1_6) ? ((var_1_6 > var_1_6) ? (var_1_1 == ((float) (var_1_4 - var_1_5))) : (var_1_1 == ((float) var_1_5))) : (var_1_1 == ((float) var_1_4))) && (var_1_17 ? (((max (var_1_14 , (max (var_1_5 , 199.78)))) != (var_1_4 - var_1_8)) ? (((var_1_20 != var_1_20) || var_1_17) ? (var_1_6 == ((unsigned long int) var_1_20)) : (var_1_6 == ((unsigned long int) 5u))) : (var_1_6 == ((unsigned long int) var_1_20))) : (var_1_6 == ((unsigned long int) var_1_20)))) && (((var_1_5 / var_1_11) >= (var_1_8 - var_1_4)) ? (var_1_10 == ((float) (min ((var_1_5 - (var_1_12 - var_1_13)) , var_1_4)))) : (var_1_10 == ((float) 4.2f)))) && (((var_1_15 - (min (0 , var_1_16))) > last_1_var_1_6) ? (var_1_14 == ((double) var_1_12)) : 1)) && ((var_1_21 <= (var_1_16 * var_1_20)) ? (((var_1_5 + var_1_14) <= 127.025f) ? (var_1_17 == ((unsigned char) var_1_18)) : (var_1_17 == ((unsigned char) var_1_18))) : (var_1_17 == ((unsigned char) var_1_18)))) && ((var_1_1 < var_1_11) ? (var_1_19 == ((double) (var_1_13 - 256.4))) : 1)) && (var_1_20 == ((unsigned char) var_1_16))) && (var_1_21 == ((unsigned short int) var_1_16))
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
