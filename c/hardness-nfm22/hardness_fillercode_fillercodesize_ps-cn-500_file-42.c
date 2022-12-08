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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch42PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 16;
signed char var_1_5 = -8;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed short int var_1_13 = 200;
float var_1_14 = -0.8;
float var_1_15 = 127.25;
float var_1_16 = 3.5;
unsigned short int var_1_17 = 16;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
signed short int var_1_24 = -32;
unsigned char var_1_25 = 1;
float var_1_26 = 500.65;
signed long int var_1_27 = -8;
float var_1_28 = 255.5;
float var_1_29 = 64.8;
unsigned long int var_1_30 = 10;
unsigned long int var_1_31 = 10;
unsigned long int var_1_32 = 256;
unsigned long int var_1_33 = 50;
unsigned long int var_1_34 = 200;
unsigned long int var_1_35 = 50;
unsigned long int var_1_36 = 10;
signed char var_1_37 = 5;
unsigned long int var_1_38 = 1538486014;
unsigned char var_1_39 = 10;
unsigned char var_1_40 = 128;
unsigned char var_1_41 = 16;
unsigned char var_1_42 = 0;
unsigned short int var_1_43 = 10;
unsigned short int var_1_44 = 128;
unsigned short int var_1_45 = 40597;
float var_1_46 = 0.0;
unsigned short int var_1_47 = 31514;
unsigned short int var_1_48 = 10000;
unsigned char var_1_49 = 8;
unsigned short int var_1_50 = 10;
double var_1_51 = 7.4;
float var_1_52 = 9.5;
double var_1_53 = 0.375;
double var_1_54 = 3.8;
double var_1_55 = 3.4;
unsigned short int var_1_56 = 2;
signed short int var_1_57 = -128;
unsigned long int var_1_58 = 128;
signed short int var_1_59 = -256;
unsigned short int var_1_60 = 16;
unsigned short int var_1_61 = 1;
unsigned short int var_1_62 = 50;
unsigned long int var_1_63 = 8;
unsigned char var_1_64 = 2;
signed short int var_1_65 = 4;
unsigned char var_1_66 = 128;
unsigned char var_1_67 = 200;
double var_1_68 = 16.75;
float var_1_69 = 10000000000.25;
signed short int var_1_70 = 5;
signed short int var_1_71 = 64;
signed long int var_1_72 = 0;
unsigned char var_1_73 = 8;
float var_1_74 = 0.4;
float var_1_75 = 0.0;
float var_1_76 = 8.8;
float var_1_77 = 1.5;
unsigned short int var_1_78 = 10000;
signed short int var_1_79 = -32;
unsigned long int var_1_80 = 1000000;
unsigned short int var_1_81 = 38920;
double var_1_82 = 64.35;
unsigned short int var_1_83 = 4;
unsigned short int var_1_84 = 64;
unsigned short int var_1_85 = 32;
double var_1_86 = 63.25;
unsigned short int var_1_87 = 5;
unsigned short int var_1_88 = 64;
unsigned char var_1_89 = 32;
signed char var_1_90 = 0;
signed char var_1_91 = 0;
unsigned short int var_1_92 = 16;
double var_1_93 = 0.5;
unsigned char var_1_94 = 0;
unsigned char var_1_95 = 0;
float var_1_96 = 0.65;
signed char var_1_97 = 25;
signed char var_1_98 = 0;
signed char var_1_99 = 1;
unsigned char var_1_100 = 0;
signed char var_1_101 = 1;
unsigned char var_1_102 = 0;
double var_1_103 = 63.5;
signed char var_1_104 = -16;
signed char var_1_105 = 8;
signed char var_1_106 = 32;
signed char var_1_107 = -8;
signed long int var_1_108 = -128;
float var_1_109 = 10.4;
float var_1_110 = 5.5;
float var_1_111 = 999999999.8;
float var_1_112 = -0.75;
signed char var_1_113 = -128;
unsigned long int var_1_114 = 10;
signed char var_1_115 = -25;
signed char var_1_116 = 100;
signed char var_1_117 = 2;
signed char var_1_118 = 2;
signed long int var_1_119 = 256;
signed long int var_1_120 = 32;
float var_1_121 = 1000.625;
float var_1_122 = 127.6;
double var_1_123 = 3.6;
unsigned short int var_1_124 = 8;
unsigned long int var_1_125 = 10;
unsigned char var_1_126 = 0;
double var_1_127 = 100000000000000.5;
unsigned long int var_1_128 = 0;
signed long int var_1_129 = 100000000;
float var_1_130 = 50.5;
unsigned long int var_1_131 = 2;
signed char var_1_132 = 25;
float var_1_133 = 0.75;
unsigned char var_1_134 = 32;
signed long int var_1_135 = 128;
double var_1_136 = 9.5;
unsigned long int var_1_137 = 256;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 16;
unsigned char last_1_var_1_6 = 10;
unsigned char last_1_var_1_8 = 1;
signed short int last_1_var_1_13 = 200;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_22 || var_1_23) {
		var_1_21 = ((var_1_24 > -4) || var_1_25);
	}


	// From: CodeObject2
	if (((var_1_24 + 25) % var_1_27) < 2) {
		var_1_26 = ((abs (var_1_28)) + (max (1.6f , var_1_29)));
	}


	// From: CodeObject3
	if (var_1_23 && (var_1_29 > var_1_28)) {
		var_1_30 = ((abs (min (var_1_31 , var_1_32))) + (min ((max (var_1_33 , var_1_34)) , var_1_35)));
	}


	// From: CodeObject4
	if (((abs (var_1_37)) >> var_1_32) != var_1_34) {
		var_1_36 = ((1905488450u + var_1_38) - var_1_35);
	}


	// From: CodeObject5
	if (var_1_25) {
		var_1_39 = (var_1_40 - var_1_41);
	} else {
		var_1_39 = (var_1_40 - (abs (var_1_42)));
	}


	// From: CodeObject6
	if ((- var_1_41) != var_1_40) {
		var_1_43 = var_1_39;
	}


	// From: CodeObject7
	if (var_1_38 <= (~ var_1_31)) {
		if ((abs (var_1_41)) >= var_1_42) {
			var_1_44 = (abs (var_1_45 - var_1_42));
		}
	} else {
		if ((var_1_26 * var_1_29) < var_1_28) {
			var_1_44 = (abs (var_1_41));
		} else {
			if (((max (var_1_29 , var_1_28)) * var_1_26) >= (abs (var_1_46))) {
				var_1_44 = (var_1_45 - (var_1_47 - (var_1_48 - var_1_40)));
			} else {
				if (256 < ((var_1_40 | var_1_42) ^ var_1_36)) {
					var_1_44 = (abs (max (var_1_47 , var_1_42)));
				} else {
					if (var_1_21 || var_1_25) {
						if (var_1_26 < (min (var_1_46 , var_1_28))) {
							var_1_44 = (abs (var_1_39));
						}
					}
				}
			}
		}
	}


	// From: CodeObject8
	if (var_1_44 > (~ var_1_24)) {
		var_1_49 = (var_1_41 + (abs (var_1_42)));
	} else {
		var_1_49 = var_1_42;
	}


	// From: CodeObject9
	if (var_1_37 > var_1_30) {
		var_1_50 = (max (var_1_49 , var_1_41));
	} else {
		var_1_50 = (abs (var_1_49 + var_1_40));
	}


	// From: CodeObject10
	if (var_1_22) {
		if (var_1_52 >= var_1_26) {
			var_1_51 = var_1_29;
		} else {
			if (var_1_49 <= var_1_40) {
				var_1_51 = (max ((abs (var_1_29)) , (max (var_1_53 , (var_1_54 - 31.75)))));
			}
		}
	}


	// From: CodeObject11
	if (var_1_45 < var_1_41) {
		var_1_55 = (min (((abs (5.6)) + var_1_28) , var_1_54));
	}


	// From: CodeObject12
	if ((max (var_1_26 , var_1_28)) > (abs (var_1_46 + var_1_53))) {
		var_1_56 = (min (var_1_49 , (var_1_47 + var_1_40)));
	} else {
		var_1_56 = (min ((min (var_1_45 , var_1_40)) , var_1_41));
	}


	// From: CodeObject13
	var_1_57 = var_1_37;


	// From: CodeObject14
	if (var_1_23) {
		var_1_58 = var_1_56;
	} else {
		var_1_58 = var_1_38;
	}


	// From: CodeObject15
	if (-10 > var_1_32) {
		var_1_59 = var_1_40;
	} else {
		if (var_1_22) {
			var_1_59 = ((abs (var_1_41)) - var_1_40);
		}
	}


	// From: CodeObject16
	if ((var_1_32 | (var_1_44 & var_1_41)) < var_1_49) {
		var_1_60 = (var_1_45 - (var_1_47 - var_1_49));
	}


	// From: CodeObject17
	if (var_1_37 < 32) {
		var_1_61 = (var_1_41 + var_1_62);
	}


	// From: CodeObject18
	if (var_1_35 <= 64u) {
		var_1_63 = var_1_31;
	} else {
		var_1_63 = (var_1_31 + 1u);
	}


	// From: CodeObject19
	if (var_1_33 >= var_1_58) {
		if ((var_1_28 * var_1_29) >= ((max (var_1_54 , var_1_46)) / (min (1.6f , 256.6f)))) {
			if (var_1_65 <= (var_1_49 % -1)) {
				var_1_64 = (var_1_40 - var_1_41);
			} else {
				var_1_64 = (max (var_1_40 , ((max (var_1_66 , var_1_67)) - var_1_41)));
			}
		}
	}


	// From: CodeObject20
	if (var_1_30 < (min (var_1_35 , var_1_49))) {
		if (((var_1_35 << var_1_58) | var_1_36) == (var_1_30 & var_1_41)) {
			var_1_68 = var_1_53;
		}
	} else {
		if ((abs (var_1_46)) > (var_1_54 / var_1_69)) {
			var_1_68 = var_1_53;
		} else {
			if ((var_1_31 & var_1_63) < (var_1_35 & var_1_34)) {
				var_1_68 = (abs (var_1_29));
			} else {
				var_1_68 = var_1_29;
			}
		}
	}


	// From: CodeObject21
	if (var_1_38 < var_1_63) {
		if (var_1_25) {
			if (var_1_23) {
				if (var_1_21) {
					var_1_70 = (min (var_1_48 , (min (var_1_49 , (var_1_64 - var_1_41)))));
				} else {
					var_1_70 = (max ((var_1_40 + var_1_64) , (max (var_1_37 , (-1 - var_1_39)))));
				}
			}
		}
	}


	// From: CodeObject22
	if (var_1_21) {
		var_1_71 = var_1_49;
	} else {
		if (var_1_32 >= ((var_1_40 / var_1_38) % (var_1_45 + var_1_67))) {
			if (var_1_58 < (max (var_1_42 , var_1_33))) {
				var_1_71 = (min (var_1_42 , -500));
			}
		}
	}


	// From: CodeObject23
	if ((var_1_36 / var_1_40) > var_1_64) {
		if (var_1_73 >= var_1_39) {
			if (var_1_35 >= (~ var_1_49)) {
				var_1_72 = var_1_40;
			}
		}
	}


	// From: CodeObject24
	if (var_1_44 <= var_1_42) {
		var_1_74 = (abs (9.99999999375E8f));
	} else {
		if (var_1_62 > var_1_31) {
			var_1_74 = ((var_1_75 - var_1_76) - (max ((var_1_77 + 32.2f) , var_1_54)));
		} else {
			var_1_74 = (min (15.3f , var_1_75));
		}
	}


	// From: CodeObject25
	if (1000000000 <= var_1_36) {
		if (var_1_74 != var_1_52) {
			var_1_78 = (abs (var_1_48));
		}
	}


	// From: CodeObject26
	if (var_1_45 >= var_1_39) {
		if ((abs (var_1_59)) < ((var_1_45 / var_1_66) ^ var_1_47)) {
			var_1_79 = (var_1_42 - var_1_49);
		} else {
			if (((abs (var_1_80)) >> var_1_59) > var_1_38) {
				if (((var_1_81 - var_1_39) + (- var_1_48)) >= (max (var_1_60 , (var_1_47 % var_1_66)))) {
					var_1_79 = ((abs (var_1_64)) - (min (var_1_66 , var_1_73)));
				}
			}
		}
	}


	// From: CodeObject27
	if ((var_1_29 * var_1_55) < (var_1_77 - 0.125)) {
		var_1_82 = (var_1_29 + var_1_28);
	} else {
		if (var_1_61 < (var_1_58 % var_1_45)) {
			var_1_82 = (var_1_77 + var_1_76);
		}
	}


	// From: CodeObject28
	if ((var_1_56 <= (var_1_59 & var_1_58)) && ((var_1_60 & var_1_39) != var_1_71)) {
		if (-100000000 < (abs (var_1_61))) {
			var_1_83 = (min (var_1_47 , (max ((25 + var_1_41) , var_1_84))));
		} else {
			var_1_83 = (abs (min ((var_1_45 - var_1_66) , var_1_48)));
		}
	}


	// From: CodeObject29
	if ((var_1_52 + (min (var_1_82 , var_1_75))) < ((max (var_1_69 , var_1_51)) / var_1_86)) {
		var_1_85 = (abs (var_1_87));
	} else {
		var_1_85 = (max (var_1_47 , (max (var_1_87 , (abs (var_1_49))))));
	}


	// From: CodeObject30
	if ((var_1_83 + var_1_56) >= var_1_45) {
		if (var_1_21) {
			if (var_1_22) {
				if ((- var_1_54) >= (var_1_68 * var_1_52)) {
					var_1_88 = (max (2 , var_1_64));
				}
			} else {
				var_1_88 = (abs (abs (var_1_40)));
			}
		}
	} else {
		var_1_88 = (var_1_45 - var_1_73);
	}


	// From: CodeObject31
	if (var_1_49 < (abs (var_1_88))) {
		var_1_89 = (min (var_1_40 , var_1_42));
	} else {
		var_1_89 = (max (25 , var_1_40));
	}


	// From: CodeObject32
	if ((- var_1_84) <= (128 ^ var_1_71)) {
		var_1_90 = var_1_91;
	}


	// From: CodeObject33
	if (var_1_63 < var_1_44) {
		var_1_92 = (abs (var_1_39));
	}


	// From: CodeObject34
	if (var_1_64 > var_1_45) {
		var_1_93 = ((max (var_1_76 , var_1_29)) + var_1_77);
	} else {
		var_1_93 = (max (var_1_75 , var_1_53));
	}


	// From: CodeObject35
	if (var_1_88 > var_1_35) {
		if (var_1_21) {
			var_1_94 = (! (! (! var_1_25)));
		}
	} else {
		var_1_94 = (var_1_25 || var_1_95);
	}


	// From: CodeObject36
	if (! ((var_1_46 + var_1_53) < var_1_28)) {
		var_1_96 = (var_1_76 - (max ((abs (var_1_28)) , var_1_75)));
	} else {
		var_1_96 = (abs (var_1_54));
	}


	// From: CodeObject37
	if (var_1_25 && (var_1_40 > var_1_87)) {
		var_1_97 = (max (var_1_91 , var_1_98));
	} else {
		var_1_97 = (min ((min (var_1_98 , (min (var_1_91 , var_1_99)))) , (abs (-1))));
	}


	// From: CodeObject38
	if (var_1_21) {
		if (var_1_94) {
			var_1_100 = (! ((var_1_101 > -32) && var_1_102));
		}
	}


	// From: CodeObject39
	if (var_1_72 < var_1_99) {
		if (var_1_73 > 25) {
			var_1_103 = (abs (var_1_76));
		}
	}


	// From: CodeObject40
	if (var_1_43 > (max (var_1_50 , var_1_79))) {
		var_1_104 = (abs ((var_1_105 - var_1_106) + var_1_107));
	}


	// From: CodeObject41
	if (var_1_60 > var_1_106) {
		var_1_108 = (min (var_1_79 , var_1_98));
	}


	// From: CodeObject42
	if (var_1_68 >= 1.75) {
		if (32 <= var_1_70) {
			var_1_109 = ((var_1_77 + var_1_76) - (var_1_75 - (max (var_1_110 , var_1_111))));
		} else {
			var_1_109 = var_1_110;
		}
	} else {
		var_1_109 = var_1_76;
	}


	// From: CodeObject43
	if (var_1_87 <= (- var_1_80)) {
		var_1_112 = var_1_75;
	} else {
		if (0 == (var_1_88 & var_1_50)) {
			var_1_112 = (abs (abs (var_1_111)));
		}
	}


	// From: CodeObject44
	if (var_1_100) {
		var_1_113 = (abs (abs (var_1_106)));
	}


	// From: CodeObject45
	if ((abs (var_1_63 >> var_1_71)) < (var_1_85 ^ var_1_43)) {
		var_1_114 = (abs (var_1_56));
	}


	// From: CodeObject46
	if (! (var_1_88 >= var_1_78)) {
		if ((var_1_41 - var_1_62) != var_1_101) {
			if ((var_1_62 * var_1_80) >= var_1_39) {
				if ((abs (min (var_1_41 , var_1_105))) >= -2) {
					var_1_115 = (abs (var_1_107));
				} else {
					if ((var_1_111 < 15.173f) && var_1_23) {
						if ((var_1_54 * (abs (64.5f))) <= (abs (abs (var_1_26)))) {
							var_1_115 = (var_1_105 - (min (var_1_106 , (var_1_116 - var_1_117))));
						}
					} else {
						var_1_115 = (16 - (var_1_116 - (32 - var_1_118)));
					}
				}
			}
		} else {
			var_1_115 = (min (var_1_116 , (min ((abs (var_1_107)) , var_1_106))));
		}
	}


	// From: CodeObject47
	if (var_1_95) {
		var_1_119 = -64;
	}


	// From: CodeObject48
	if (var_1_95) {
		var_1_120 = var_1_88;
	} else {
		var_1_120 = var_1_61;
	}


	// From: CodeObject49
	if (var_1_21) {
		var_1_121 = var_1_77;
	}


	// From: CodeObject50
	var_1_122 = var_1_76;


	// From: CodeObject51
	if (var_1_102) {
		var_1_123 = var_1_28;
	}


	// From: CodeObject52
	if (var_1_94) {
		var_1_124 = var_1_49;
	} else {
		var_1_124 = var_1_49;
	}


	// From: CodeObject53
	if (var_1_102) {
		var_1_125 = var_1_117;
	} else {
		var_1_125 = var_1_124;
	}


	// From: CodeObject54
	if (var_1_21) {
		var_1_126 = 0;
	} else {
		var_1_126 = var_1_102;
	}


	// From: CodeObject55
	var_1_127 = var_1_29;


	// From: CodeObject56
	if (var_1_126) {
		var_1_128 = var_1_85;
	}


	// From: CodeObject57
	if (var_1_95) {
		var_1_129 = var_1_50;
	}


	// From: CodeObject58
	if (var_1_94) {
		var_1_130 = var_1_54;
	}


	// From: CodeObject59
	var_1_131 = var_1_73;


	// From: CodeObject60
	var_1_132 = var_1_91;


	// From: CodeObject61
	if (var_1_23) {
		var_1_133 = var_1_54;
	}


	// From: CodeObject62
	if (var_1_22 && var_1_25) {
		if (var_1_58 <= var_1_105) {
			var_1_134 = (abs (max (var_1_40 , var_1_117)));
		}
	}


	// From: CodeObject63
	var_1_135 = var_1_59;


	// From: CodeObject64
	var_1_136 = var_1_111;


	// From: CodeObject65
	var_1_137 = var_1_48;


	// From: Req5Batch42PS_CN_500
	signed long int stepLocal_6 = last_1_var_1_1;
	unsigned char stepLocal_5 = (min (last_1_var_1_1 , 8)) <= var_1_5;
	if (stepLocal_5 || last_1_var_1_8) {
		if (stepLocal_6 <= last_1_var_1_6) {
			var_1_14 = (var_1_15 + var_1_16);
		} else {
			var_1_14 = var_1_16;
		}
	} else {
		var_1_14 = var_1_16;
	}


	// From: Req7Batch42PS_CN_500
	if (var_1_14 <= var_1_15) {
		var_1_19 = (var_1_12 || var_1_20);
	}


	// From: Req2Batch42PS_CN_500
	if (var_1_5 >= -2) {
		var_1_6 = (var_1_7 - 100);
	}


	// From: Req4Batch42PS_CN_500
	unsigned char stepLocal_4 = var_1_6;
	signed long int stepLocal_3 = var_1_6 / var_1_7;
	if (last_1_var_1_13 >= stepLocal_3) {
		if (stepLocal_4 != (max ((max (var_1_6 , last_1_var_1_13)) , var_1_5))) {
			var_1_13 = var_1_7;
		} else {
			var_1_13 = last_1_var_1_13;
		}
	} else {
		var_1_13 = var_1_6;
	}


	// From: Req6Batch42PS_CN_500
	unsigned char stepLocal_7 = var_1_6;
	if (stepLocal_7 > var_1_6) {
		var_1_17 = (max (25 , (var_1_13 + var_1_6)));
	}


	// From: Req1Batch42PS_CN_500
	unsigned char stepLocal_0 = var_1_6;
	if (var_1_19) {
		var_1_1 = (max (var_1_6 , var_1_6));
	} else {
		if ((abs (var_1_5)) >= stepLocal_0) {
			var_1_1 = var_1_5;
		}
	}


	// From: Req3Batch42PS_CN_500
	unsigned char stepLocal_2 = var_1_19 && var_1_19;
	unsigned char stepLocal_1 = var_1_7;
	if ((49.5f <= var_1_14) && stepLocal_2) {
		if (var_1_13 < stepLocal_1) {
			var_1_8 = (var_1_19 || var_1_11);
		} else {
			var_1_8 = var_1_11;
		}
	} else {
		var_1_8 = var_1_12;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 127);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32768);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427382800e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -461168.6018427382800e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -127);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 1073741824);
	assume_abort_if_not(var_1_38 <= 2147483647);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 127);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 32767);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 16383);
	assume_abort_if_not(var_1_47 <= 32767);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 8191);
	assume_abort_if_not(var_1_48 <= 16383);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= -922337.2036854776000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= -922337.2036854765600e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854765600e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854765600e+12F && var_1_54 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 32767);
	var_1_65 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_65 >= -32768);
	assume_abort_if_not(var_1_65 <= 32767);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 127);
	assume_abort_if_not(var_1_66 <= 254);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 127);
	assume_abort_if_not(var_1_67 <= 254);
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= -922337.2036854776000e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854776000e+12F && var_1_69 >= 1.0e-20F ));
	assume_abort_if_not(var_1_69 != 0.0F);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 255);
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= 4611686.018427382800e+12F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 9223372.036854765600e+12F && var_1_75 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_76 >= 0.0F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 4611686.018427382800e+12F && var_1_76 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_77 >= 0.0F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 4611686.018427382800e+12F && var_1_77 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 4294967295);
	var_1_81 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_81 >= 32767);
	assume_abort_if_not(var_1_81 <= 65535);
	var_1_84 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 65534);
	var_1_86 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_86 >= -922337.2036854776000e+13F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 9223372.036854776000e+12F && var_1_86 >= 1.0e-20F ));
	assume_abort_if_not(var_1_86 != 0.0F);
	var_1_87 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 65534);
	var_1_91 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_91 >= -127);
	assume_abort_if_not(var_1_91 <= 126);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 1);
	assume_abort_if_not(var_1_95 <= 1);
	var_1_98 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_98 >= -127);
	assume_abort_if_not(var_1_98 <= 126);
	var_1_99 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_99 >= -127);
	assume_abort_if_not(var_1_99 <= 126);
	var_1_101 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_101 >= -128);
	assume_abort_if_not(var_1_101 <= 127);
	var_1_102 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_102 >= 0);
	assume_abort_if_not(var_1_102 <= 0);
	var_1_105 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_105 >= 0);
	assume_abort_if_not(var_1_105 <= 63);
	var_1_106 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 63);
	var_1_107 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_107 >= -63);
	assume_abort_if_not(var_1_107 <= 63);
	var_1_110 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_110 >= 0.0F && var_1_110 <= -1.0e-20F) || (var_1_110 <= 4611686.018427382800e+12F && var_1_110 >= 1.0e-20F ));
	var_1_111 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_111 >= 0.0F && var_1_111 <= -1.0e-20F) || (var_1_111 <= 4611686.018427382800e+12F && var_1_111 >= 1.0e-20F ));
	var_1_116 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_116 >= 63);
	assume_abort_if_not(var_1_116 <= 126);
	var_1_117 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_117 >= 0);
	assume_abort_if_not(var_1_117 <= 63);
	var_1_118 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_118 >= 0);
	assume_abort_if_not(var_1_118 <= 31);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_13 = var_1_13;
}

int property() {
	return ((((((var_1_19 ? (var_1_1 == ((signed short int) (max (var_1_6 , var_1_6)))) : (((abs (var_1_5)) >= var_1_6) ? (var_1_1 == ((signed short int) var_1_5)) : 1)) && ((var_1_5 >= -2) ? (var_1_6 == ((unsigned char) (var_1_7 - 100))) : 1)) && (((49.5f <= var_1_14) && (var_1_19 && var_1_19)) ? ((var_1_13 < var_1_7) ? (var_1_8 == ((unsigned char) (var_1_19 || var_1_11))) : (var_1_8 == ((unsigned char) var_1_11))) : (var_1_8 == ((unsigned char) var_1_12)))) && ((last_1_var_1_13 >= (var_1_6 / var_1_7)) ? ((var_1_6 != (max ((max (var_1_6 , last_1_var_1_13)) , var_1_5))) ? (var_1_13 == ((signed short int) var_1_7)) : (var_1_13 == ((signed short int) last_1_var_1_13))) : (var_1_13 == ((signed short int) var_1_6)))) && ((((min (last_1_var_1_1 , 8)) <= var_1_5) || last_1_var_1_8) ? ((last_1_var_1_1 <= last_1_var_1_6) ? (var_1_14 == ((float) (var_1_15 + var_1_16))) : (var_1_14 == ((float) var_1_16))) : (var_1_14 == ((float) var_1_16)))) && ((var_1_6 > var_1_6) ? (var_1_17 == ((unsigned short int) (max (25 , (var_1_13 + var_1_6))))) : 1)) && ((var_1_14 <= var_1_15) ? (var_1_19 == ((unsigned char) (var_1_12 || var_1_20))) : 1)
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
