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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch77PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 2;
float var_1_2 = 255.5;
float var_1_3 = 99.8;
signed char var_1_4 = -25;
float var_1_6 = 255.25;
unsigned short int var_1_7 = 16;
signed char var_1_8 = -10;
signed char var_1_9 = -8;
unsigned short int var_1_10 = 8;
unsigned short int var_1_11 = 10000;
unsigned short int var_1_12 = 5;
signed short int var_1_13 = 200;
unsigned char var_1_15 = 0;
unsigned short int var_1_16 = 35895;
unsigned short int var_1_17 = 18336;
unsigned char var_1_18 = 0;
signed long int var_1_19 = -50;
unsigned char var_1_20 = 10;
signed long int var_1_21 = 4;
unsigned char var_1_22 = 100;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 200;
unsigned char var_1_25 = 2;
unsigned char var_1_26 = 5;
unsigned char var_1_27 = 50;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 64;
unsigned char var_1_30 = 5;
unsigned char var_1_31 = 1;
unsigned short int var_1_32 = 50;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 4;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 100;
double var_1_39 = 1.175;
double var_1_40 = 10.625;
unsigned char var_1_41 = 25;
unsigned short int var_1_42 = 5;
unsigned short int var_1_43 = 22775;
unsigned short int var_1_44 = 26466;
unsigned long int var_1_45 = 0;
unsigned long int var_1_46 = 3662884812;
float var_1_47 = 500.75;
float var_1_48 = 49.25;
float var_1_49 = 999999999999.9;
float var_1_50 = 199.5;
signed long int var_1_51 = 50;
unsigned char var_1_52 = 50;
unsigned long int var_1_53 = 16;
double var_1_54 = 2.4;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 4;
double var_1_57 = 1.5;
double var_1_58 = 32.1;
unsigned long int var_1_59 = 1;
float var_1_60 = 0.4;
float var_1_61 = 9999.75;
signed short int var_1_62 = -256;
unsigned char var_1_63 = 5;
unsigned char var_1_64 = 200;
double var_1_65 = -0.1;
unsigned short int var_1_66 = 16;
double var_1_67 = 31.3;
double var_1_68 = 10.525;
signed char var_1_69 = -64;
unsigned short int var_1_70 = 1;
unsigned long int var_1_71 = 32;
unsigned long int var_1_72 = 1276929973;
unsigned long int var_1_73 = 256;
unsigned long int var_1_74 = 2028373103;
unsigned long int var_1_75 = 2326058938;
unsigned char var_1_76 = 32;
signed short int var_1_77 = 25;
unsigned long int var_1_78 = 16;
float var_1_79 = 1000000.75;
unsigned long int var_1_80 = 32;
unsigned char var_1_81 = 64;
unsigned char var_1_82 = 200;
signed short int var_1_83 = -50;
unsigned char var_1_84 = 1;
unsigned char var_1_85 = 0;
float var_1_86 = 8.4;
unsigned char var_1_87 = 2;
unsigned char var_1_88 = 1;
signed short int var_1_89 = 128;
signed short int var_1_90 = -256;
signed long int var_1_91 = -256;
float var_1_92 = 64.9;
float var_1_93 = 1000.4;
float var_1_94 = 63.1;
float var_1_95 = 16.125;
signed long int var_1_96 = 32;
unsigned short int var_1_97 = 4;
signed char var_1_98 = 16;
signed short int var_1_99 = 16;
signed short int var_1_100 = 28040;
unsigned short int var_1_101 = 256;
unsigned short int var_1_102 = 8;
unsigned short int var_1_103 = 37800;
signed short int var_1_104 = -100;
unsigned short int var_1_105 = 2;
signed short int var_1_106 = 16;
signed char var_1_107 = -32;
unsigned char var_1_108 = 64;
unsigned char var_1_109 = 0;
signed char var_1_110 = 5;
signed char var_1_111 = -32;
unsigned long int var_1_112 = 128;
signed char var_1_113 = 0;
signed short int var_1_114 = 10000;
unsigned long int var_1_115 = 100000000;
signed char var_1_116 = -64;
unsigned char var_1_117 = 0;
signed char var_1_118 = -10;
unsigned char var_1_119 = 1;
signed long int var_1_120 = 0;
unsigned long int var_1_121 = 16;
unsigned long int var_1_122 = 2;
unsigned char var_1_123 = 0;
double var_1_124 = 99.9;
signed char var_1_125 = 32;
signed short int var_1_126 = 16;
double var_1_127 = 9.5;
unsigned short int var_1_128 = 10;
unsigned short int var_1_129 = 45146;

// Calibration values

// Last'ed variables
signed char last_1_var_1_8 = -10;
unsigned char last_1_var_1_15 = 0;
signed long int last_1_var_1_19 = -50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_21 <= -1) {
		var_1_20 = (abs (abs (var_1_22)));
	}


	// From: CodeObject2
	if (var_1_21 >= var_1_20) {
		if (var_1_21 > var_1_20) {
			var_1_23 = ((min (var_1_24 , 128)) - (max (var_1_25 , (var_1_26 + var_1_27))));
		} else {
			if (var_1_21 != var_1_20) {
				var_1_23 = var_1_26;
			}
		}
	} else {
		var_1_23 = var_1_26;
	}


	// From: CodeObject3
	if (var_1_24 >= (abs (10))) {
		var_1_28 = ((var_1_29 - (var_1_30 + var_1_31)) + var_1_25);
	} else {
		var_1_28 = (min ((max (var_1_22 , var_1_26)) , var_1_24));
	}


	// From: CodeObject4
	if ((var_1_30 % (abs (var_1_29))) <= var_1_28) {
		if (var_1_26 < var_1_24) {
			var_1_32 = var_1_23;
		} else {
			var_1_32 = (max (var_1_23 , var_1_31));
		}
	} else {
		if (var_1_30 == var_1_31) {
			var_1_32 = var_1_20;
		} else {
			var_1_32 = var_1_30;
		}
	}


	// From: CodeObject5
	if (var_1_25 < (var_1_24 - var_1_31)) {
		if (var_1_34) {
			if (var_1_26 <= (var_1_24 - var_1_27)) {
				var_1_33 = ((var_1_29 < var_1_35) || var_1_36);
			}
		}
	} else {
		var_1_33 = (! var_1_37);
	}


	// From: CodeObject6
	if (4.875 <= (abs (var_1_39 / var_1_40))) {
		var_1_38 = (abs (var_1_31));
	} else {
		var_1_38 = var_1_41;
	}


	// From: CodeObject7
	if (var_1_21 > var_1_35) {
		var_1_42 = ((var_1_43 + (abs (var_1_44))) - var_1_41);
	} else {
		var_1_42 = (min ((16 + var_1_23) , var_1_44));
	}


	// From: CodeObject8
	if (var_1_37) {
		if (! var_1_36) {
			var_1_45 = (min (var_1_44 , var_1_28));
		} else {
			if (((min (var_1_29 , -100)) * (var_1_31 / var_1_24)) < var_1_43) {
				var_1_45 = var_1_22;
			}
		}
	} else {
		var_1_45 = (min (var_1_26 , (abs (var_1_20))));
	}


	// From: CodeObject9
	if (var_1_28 > var_1_46) {
		if ((var_1_41 / var_1_24) >= (var_1_30 % var_1_29)) {
			var_1_47 = (min (7.5f , var_1_48));
		}
	} else {
		if ((~ var_1_29) <= (abs (var_1_44))) {
			var_1_47 = (var_1_49 + var_1_50);
		}
	}


	// From: CodeObject10
	if ((~ var_1_46) < (var_1_25 ^ var_1_35)) {
		var_1_51 = (abs (var_1_42));
	} else {
		if ((- (min (var_1_26 , var_1_42))) <= var_1_21) {
			var_1_51 = ((max (var_1_42 , (min (var_1_43 , var_1_29)))) + var_1_20);
		}
	}


	// From: CodeObject11
	if (-8 >= var_1_41) {
		if (var_1_36) {
			if (499.5f > (var_1_50 + (max (var_1_48 , var_1_40)))) {
				var_1_52 = var_1_24;
			}
		}
	}


	// From: CodeObject12
	var_1_53 = 25u;


	// From: CodeObject13
	if (var_1_36) {
		if ((var_1_21 >= var_1_38) && var_1_37) {
			var_1_54 = (min (var_1_50 , var_1_48));
		} else {
			var_1_54 = var_1_48;
		}
	}


	// From: CodeObject14
	if (var_1_23 >= (var_1_32 / var_1_29)) {
		if (var_1_43 <= (var_1_51 ^ var_1_28)) {
			var_1_55 = var_1_37;
		} else {
			if (var_1_23 != var_1_35) {
				if (var_1_25 >= var_1_21) {
					var_1_55 = (! (var_1_33 || var_1_36));
				}
			}
		}
	}


	// From: CodeObject15
	if (var_1_40 <= (min (var_1_50 , (var_1_57 - var_1_58)))) {
		if (var_1_33) {
			var_1_56 = var_1_24;
		}
	}


	// From: CodeObject16
	var_1_59 = var_1_32;


	// From: CodeObject17
	if (var_1_42 <= var_1_27) {
		var_1_60 = (max ((min (var_1_49 , (var_1_50 + var_1_61))) , (abs (var_1_48))));
	} else {
		var_1_60 = (abs (max ((abs (var_1_61)) , (abs (var_1_50)))));
	}


	// From: CodeObject18
	if (var_1_57 > (abs (var_1_47))) {
		if (var_1_28 < (var_1_21 & var_1_46)) {
			var_1_62 = (max ((abs (var_1_22)) , var_1_30));
		}
	} else {
		if (var_1_21 < var_1_44) {
			var_1_62 = (abs (var_1_52));
		}
	}


	// From: CodeObject19
	if (var_1_51 <= var_1_29) {
		if (((var_1_64 - var_1_30) - 32) <= var_1_21) {
			var_1_63 = (abs (4));
		} else {
			var_1_63 = (var_1_26 + var_1_25);
		}
	} else {
		if (var_1_36 && var_1_34) {
			if (! var_1_36) {
				if ((var_1_27 ^ 5) > var_1_44) {
					if ((var_1_52 | (25 | var_1_27)) == (~ (var_1_64 * var_1_26))) {
						var_1_63 = var_1_24;
					}
				}
			}
		}
	}


	// From: CodeObject20
	if (var_1_66 > var_1_21) {
		if (var_1_61 > var_1_54) {
			var_1_65 = (min ((abs (var_1_67 - var_1_68)) , 128.6));
		}
	}


	// From: CodeObject21
	if (var_1_62 > (var_1_23 ^ var_1_22)) {
		var_1_69 = (abs (32));
	}


	// From: CodeObject22
	var_1_70 = var_1_35;


	// From: CodeObject23
	if (var_1_47 > (min ((min (var_1_50 , var_1_40)) , var_1_48))) {
		if (var_1_33) {
			if (var_1_36) {
				var_1_71 = 10u;
			} else {
				if (var_1_34 || var_1_37) {
					var_1_71 = ((var_1_72 - var_1_73) + (var_1_74 - var_1_20));
				} else {
					var_1_71 = (abs (var_1_43));
				}
			}
		}
	} else {
		var_1_71 = ((abs (var_1_75)) - var_1_25);
	}


	// From: CodeObject24
	if (var_1_24 >= var_1_64) {
		var_1_76 = (max (var_1_31 , var_1_22));
	}


	// From: CodeObject25
	if (var_1_67 > 50.5) {
		var_1_77 = (abs (var_1_30));
	} else {
		var_1_77 = (abs (var_1_64));
	}


	// From: CodeObject26
	if (var_1_64 != 128) {
		var_1_78 = (abs (var_1_29));
	} else {
		if (! var_1_36) {
			var_1_78 = (max ((abs (var_1_41)) , var_1_25));
		} else {
			if (var_1_47 < (var_1_39 * var_1_79)) {
				var_1_78 = (abs (max ((max (var_1_64 , var_1_30)) , var_1_35)));
			} else {
				var_1_78 = (var_1_24 + (var_1_31 + (max (var_1_38 , var_1_43))));
			}
		}
	}


	// From: CodeObject27
	if ((var_1_42 >= var_1_25) && (var_1_64 < (var_1_71 >> var_1_41))) {
		var_1_80 = var_1_26;
	}


	// From: CodeObject28
	if (var_1_33) {
		var_1_81 = (min (var_1_22 , ((var_1_82 - var_1_30) - var_1_26)));
	}


	// From: CodeObject29
	if (var_1_74 < (var_1_28 >> 8)) {
		var_1_83 = (abs (var_1_28));
	} else {
		var_1_83 = (min (var_1_82 , var_1_31));
	}


	// From: CodeObject30
	if ((max ((256 / var_1_82) , var_1_80)) > var_1_78) {
		var_1_84 = (var_1_37 || ((! var_1_36) || var_1_85));
	}


	// From: CodeObject31
	if ((var_1_77 & var_1_87) >= (var_1_28 & var_1_45)) {
		if (var_1_88) {
			var_1_86 = var_1_67;
		} else {
			var_1_86 = (abs ((max (var_1_50 , var_1_49)) + (5.5f + 127.6f)));
		}
	}


	// From: CodeObject32
	if (var_1_55) {
		var_1_89 = (min ((min ((var_1_76 - var_1_24) , var_1_29)) , var_1_41));
	} else {
		if (127.25f >= var_1_49) {
			var_1_89 = (var_1_30 + (min ((8 + var_1_82) , (max (var_1_69 , var_1_22)))));
		}
	}


	// From: CodeObject33
	if ((~ (var_1_46 / var_1_43)) > var_1_78) {
		var_1_90 = (min (var_1_35 , 16));
	}


	// From: CodeObject34
	if ((min (var_1_28 , (var_1_71 | var_1_31))) >= (abs (10u))) {
		if (var_1_25 >= (min ((~ var_1_69) , var_1_73))) {
			var_1_91 = (abs (128));
		}
	}


	// From: CodeObject35
	if (var_1_51 > var_1_74) {
		var_1_92 = (max (var_1_67 , ((var_1_93 + var_1_94) + var_1_61)));
	} else {
		if (var_1_20 == var_1_26) {
			var_1_92 = ((min ((var_1_95 - 5.425f) , 99.5f)) + (abs (var_1_94)));
		} else {
			var_1_92 = var_1_61;
		}
	}


	// From: CodeObject36
	if (var_1_29 >= 5) {
		if (var_1_68 != var_1_65) {
			var_1_96 = (abs (abs (abs (var_1_63))));
		}
	} else {
		var_1_96 = (abs (var_1_83));
	}


	// From: CodeObject37
	if ((var_1_81 * (~ var_1_72)) >= var_1_53) {
		var_1_97 = (max (var_1_22 , var_1_26));
	}


	// From: CodeObject38
	if (var_1_84) {
		var_1_98 = (var_1_31 + var_1_27);
	}


	// From: CodeObject39
	if ((! var_1_37) && var_1_88) {
		var_1_99 = (max ((var_1_27 - (var_1_100 - var_1_52)) , var_1_23));
	}


	// From: CodeObject40
	if (var_1_55) {
		var_1_101 = (abs (abs (var_1_35)));
	}


	// From: CodeObject41
	if (var_1_46 > var_1_78) {
		if ((max (var_1_71 , (var_1_72 ^ var_1_21))) >= (var_1_43 * var_1_25)) {
			if (var_1_99 != var_1_98) {
				var_1_102 = (abs (var_1_38));
			} else {
				var_1_102 = 0;
			}
		} else {
			if ((var_1_48 * var_1_54) > var_1_47) {
				var_1_102 = (abs (var_1_23));
			} else {
				var_1_102 = (var_1_103 - 8);
			}
		}
	}


	// From: CodeObject42
	if (var_1_96 < var_1_89) {
		if ((var_1_70 / 1) < var_1_44) {
			var_1_104 = (abs (var_1_35));
		}
	} else {
		var_1_104 = var_1_41;
	}


	// From: CodeObject43
	if (var_1_39 < var_1_49) {
		if (var_1_50 >= var_1_60) {
			var_1_105 = (var_1_63 + var_1_30);
		} else {
			if ((var_1_45 * var_1_24) < (abs (max (var_1_29 , var_1_81)))) {
				if ((abs (var_1_102 >> var_1_96)) < var_1_74) {
					var_1_105 = (min ((var_1_103 - (max (var_1_87 , 50))) , var_1_52));
				}
			} else {
				var_1_105 = (var_1_103 - (abs (var_1_82)));
			}
		}
	}


	// From: CodeObject44
	if (var_1_88) {
		var_1_106 = (var_1_52 - 100);
	}


	// From: CodeObject45
	if (var_1_41 <= var_1_56) {
		var_1_107 = (max (var_1_27 , -16));
	}


	// From: CodeObject46
	if (var_1_43 >= (var_1_99 & var_1_26)) {
		var_1_108 = (abs (var_1_82 - var_1_30));
	}


	// From: CodeObject47
	if (var_1_66 > var_1_62) {
		var_1_109 = (! (var_1_85 || var_1_37));
	}


	// From: CodeObject48
	if ((max ((min (var_1_82 , var_1_62)) , var_1_69)) == var_1_52) {
		var_1_110 = (min (var_1_64 , (abs (var_1_27))));
	} else {
		if (! (var_1_93 < var_1_67)) {
			if (((abs (-128)) >> 1) > var_1_52) {
				var_1_110 = (var_1_27 + (10 - var_1_31));
			}
		}
	}


	// From: CodeObject49
	if ((~ var_1_28) <= var_1_43) {
		if (var_1_33) {
			var_1_111 = (abs (var_1_31));
		} else {
			var_1_111 = (max (-32 , (abs (-32))));
		}
	}


	// From: CodeObject50
	if (var_1_88) {
		var_1_112 = var_1_64;
	} else {
		var_1_112 = var_1_103;
	}


	// From: CodeObject51
	var_1_113 = var_1_64;


	// From: CodeObject52
	if (var_1_55) {
		var_1_114 = var_1_35;
	}


	// From: CodeObject53
	if (var_1_88) {
		var_1_115 = var_1_42;
	}


	// From: CodeObject54
	if (var_1_117) {
		var_1_116 = var_1_64;
	}


	// From: CodeObject55
	if (var_1_37) {
		var_1_118 = var_1_27;
	} else {
		var_1_118 = 64;
	}


	// From: CodeObject56
	if (var_1_84) {
		var_1_119 = var_1_36;
	}


	// From: CodeObject57
	if (var_1_85) {
		var_1_120 = var_1_56;
	}


	// From: CodeObject58
	if (var_1_109) {
		var_1_121 = var_1_122;
	}


	// From: CodeObject59
	if (var_1_88) {
		var_1_123 = var_1_85;
	}


	// From: CodeObject60
	var_1_124 = 31.22;


	// From: CodeObject61
	if (var_1_36) {
		var_1_125 = var_1_27;
	} else {
		var_1_125 = var_1_64;
	}


	// From: CodeObject62
	if (var_1_117) {
		var_1_126 = var_1_113;
	}


	// From: CodeObject63
	var_1_127 = var_1_94;


	// From: CodeObject64
	if (var_1_67 != (abs (var_1_127))) {
		var_1_128 = (abs ((max (var_1_103 , var_1_129)) - (abs (var_1_27))));
	} else {
		if (var_1_88) {
			var_1_128 = var_1_22;
		}
	}


	// From: Req1Batch77PS_CN_500
	signed long int stepLocal_0 = abs (var_1_4);
	if (stepLocal_0 <= last_1_var_1_8) {
		if ((- var_1_3) > (max (var_1_2 , var_1_6))) {
			var_1_1 = var_1_7;
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch77PS_CN_500
	if ((- var_1_7) < (var_1_1 * var_1_4)) {
		var_1_8 = var_1_9;
	}


	// From: Req4Batch77PS_CN_500
	if ((var_1_6 * var_1_2) <= var_1_3) {
		if (last_1_var_1_15) {
			var_1_13 = (-10 + var_1_12);
		} else {
			var_1_13 = var_1_4;
		}
	}


	// From: Req5Batch77PS_CN_500
	signed long int stepLocal_1 = var_1_16 - (var_1_17 - 256);
	if (var_1_3 != var_1_6) {
		if (var_1_13 >= stepLocal_1) {
			var_1_15 = var_1_18;
		} else {
			var_1_15 = var_1_18;
		}
	} else {
		var_1_15 = var_1_18;
	}


	// From: Req3Batch77PS_CN_500
	var_1_10 = (50 + ((var_1_11 + 10000) - var_1_12));


	// From: Req6Batch77PS_CN_500
	unsigned short int stepLocal_4 = var_1_1;
	signed long int stepLocal_3 = var_1_7 + (128 + var_1_1);
	signed long int stepLocal_2 = - var_1_10;
	if (var_1_1 < stepLocal_2) {
		if (stepLocal_3 <= last_1_var_1_19) {
			var_1_19 = var_1_4;
		}
	} else {
		if (stepLocal_4 < ((min (var_1_10 , var_1_17)) / var_1_11)) {
			var_1_19 = (max (var_1_7 , var_1_9));
		} else {
			var_1_19 = var_1_16;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -127);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 8191);
	assume_abort_if_not(var_1_11 <= 16384);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 32767);
	assume_abort_if_not(var_1_16 <= 65535);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 16383);
	assume_abort_if_not(var_1_17 <= 32767);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= -2147483648);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 64);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 63);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 32);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 31);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 255);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	assume_abort_if_not(var_1_40 != 0.0F);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 16383);
	assume_abort_if_not(var_1_43 <= 32767);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 16384);
	assume_abort_if_not(var_1_44 <= 32767);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 2147483647);
	assume_abort_if_not(var_1_46 <= 4294967295);
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -922337.2036854765600e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854765600e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -461168.6018427382800e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -461168.6018427382800e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427382800e+12F && var_1_50 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854776000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= -461168.6018427382800e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 191);
	assume_abort_if_not(var_1_64 <= 255);
	var_1_66 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 65535);
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854765600e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854765600e+12F && var_1_68 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_72 >= 1073741823);
	assume_abort_if_not(var_1_72 <= 2147483647);
	var_1_73 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 1073741823);
	var_1_74 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_74 >= 1073741823);
	assume_abort_if_not(var_1_74 <= 2147483647);
	var_1_75 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_75 >= 2147483647);
	assume_abort_if_not(var_1_75 <= 4294967294);
	var_1_79 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_79 >= -922337.2036854776000e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 9223372.036854776000e+12F && var_1_79 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 190);
	assume_abort_if_not(var_1_82 <= 254);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 0);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 255);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 1);
	var_1_93 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_93 >= -230584.3009213691390e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 2305843.009213691390e+12F && var_1_93 >= 1.0e-20F ));
	var_1_94 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_94 >= -230584.3009213691390e+13F && var_1_94 <= -1.0e-20F) || (var_1_94 <= 2305843.009213691390e+12F && var_1_94 >= 1.0e-20F ));
	var_1_95 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_95 >= 0.0F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 4611686.018427382800e+12F && var_1_95 >= 1.0e-20F ));
	var_1_100 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_100 >= 16383);
	assume_abort_if_not(var_1_100 <= 32766);
	var_1_103 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_103 >= 32767);
	assume_abort_if_not(var_1_103 <= 65534);
	var_1_117 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_117 >= 0);
	assume_abort_if_not(var_1_117 <= 1);
	var_1_122 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_122 >= 0);
	assume_abort_if_not(var_1_122 <= 4294967294);
	var_1_129 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_129 >= 32767);
	assume_abort_if_not(var_1_129 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_19 = var_1_19;
}

int property() {
	return (((((((abs (var_1_4)) <= last_1_var_1_8) ? (((- var_1_3) > (max (var_1_2 , var_1_6))) ? (var_1_1 == ((unsigned short int) var_1_7)) : (var_1_1 == ((unsigned short int) var_1_7))) : (var_1_1 == ((unsigned short int) var_1_7))) && (((- var_1_7) < (var_1_1 * var_1_4)) ? (var_1_8 == ((signed char) var_1_9)) : 1)) && (var_1_10 == ((unsigned short int) (50 + ((var_1_11 + 10000) - var_1_12))))) && (((var_1_6 * var_1_2) <= var_1_3) ? (last_1_var_1_15 ? (var_1_13 == ((signed short int) (-10 + var_1_12))) : (var_1_13 == ((signed short int) var_1_4))) : 1)) && ((var_1_3 != var_1_6) ? ((var_1_13 >= (var_1_16 - (var_1_17 - 256))) ? (var_1_15 == ((unsigned char) var_1_18)) : (var_1_15 == ((unsigned char) var_1_18))) : (var_1_15 == ((unsigned char) var_1_18)))) && ((var_1_1 < (- var_1_10)) ? (((var_1_7 + (128 + var_1_1)) <= last_1_var_1_19) ? (var_1_19 == ((signed long int) var_1_4)) : 1) : ((var_1_1 < ((min (var_1_10 , var_1_17)) / var_1_11)) ? (var_1_19 == ((signed long int) (max (var_1_7 , var_1_9)))) : (var_1_19 == ((signed long int) var_1_16))))
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
