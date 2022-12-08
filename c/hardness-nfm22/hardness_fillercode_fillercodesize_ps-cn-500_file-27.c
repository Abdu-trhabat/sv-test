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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch27PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 3.9;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
float var_1_4 = 31.5;
float var_1_5 = 25.4;
float var_1_6 = 9.5;
float var_1_7 = 63.2;
unsigned long int var_1_8 = 1;
signed short int var_1_10 = -50;
unsigned long int var_1_11 = 8;
unsigned char var_1_12 = 32;
float var_1_13 = 15.625;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 8;
unsigned short int var_1_21 = 16;
unsigned short int var_1_22 = 128;
signed short int var_1_23 = 128;
signed long int var_1_24 = -1;
signed short int var_1_25 = 2;
unsigned char var_1_26 = 8;
unsigned char var_1_27 = 5;
signed long int var_1_28 = 10;
float var_1_29 = 2.5;
float var_1_30 = 10.7;
float var_1_31 = 7.34;
unsigned char var_1_32 = 100;
unsigned char var_1_33 = 8;
double var_1_34 = 100000000000000.4;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 64;
double var_1_37 = 15.4;
double var_1_38 = 0.43999999999999995;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 10;
unsigned char var_1_41 = 100;
unsigned char var_1_42 = 1;
float var_1_43 = 49.6;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
double var_1_49 = 5.5;
double var_1_50 = 4.9;
double var_1_51 = 5.76;
double var_1_52 = 25.48;
signed long int var_1_53 = 100;
double var_1_54 = 64.75;
double var_1_55 = 3.2;
signed short int var_1_56 = -8;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 0;
signed short int var_1_59 = -8;
signed short int var_1_60 = 16;
signed char var_1_61 = 1;
signed char var_1_62 = -16;
signed char var_1_63 = -2;
signed short int var_1_64 = 128;
unsigned char var_1_65 = 16;
double var_1_66 = 4.7;
unsigned char var_1_67 = 5;
double var_1_68 = 7.2;
signed char var_1_69 = 5;
signed short int var_1_70 = 128;
unsigned long int var_1_71 = 1;
unsigned long int var_1_72 = 1000000000;
signed char var_1_73 = -8;
unsigned char var_1_74 = 128;
signed char var_1_75 = 2;
unsigned short int var_1_76 = 128;
float var_1_77 = 31.25;
float var_1_78 = 32.75;
float var_1_79 = 127.2;
signed short int var_1_80 = 16;
float var_1_81 = 9999999999.125;
signed char var_1_82 = -25;
signed char var_1_83 = 64;
signed char var_1_84 = 5;
signed char var_1_85 = 8;
signed char var_1_86 = 50;
signed char var_1_87 = 64;
double var_1_88 = 2.8;
signed long int var_1_89 = 4;
unsigned char var_1_90 = 0;
unsigned short int var_1_91 = 0;
unsigned short int var_1_92 = 28137;
unsigned short int var_1_93 = 8;
double var_1_94 = 128.75;
unsigned short int var_1_95 = 128;
unsigned short int var_1_96 = 36451;
unsigned short int var_1_97 = 43268;
unsigned short int var_1_98 = 60679;
signed short int var_1_99 = -100;
float var_1_100 = 999999999999.6;
unsigned char var_1_101 = 4;
signed short int var_1_102 = -32;
double var_1_103 = 4.125;
unsigned short int var_1_104 = 128;
unsigned short int var_1_105 = 1;
signed char var_1_106 = -64;
double var_1_107 = 200.08;
float var_1_108 = 2.5;
float var_1_109 = 31.5;
signed char var_1_110 = -100;
signed long int var_1_111 = 16;
unsigned short int var_1_112 = 5;
double var_1_113 = 3.6;
float var_1_114 = 7.7;
signed short int var_1_115 = -500;
unsigned long int var_1_116 = 8;
unsigned long int var_1_117 = 1;
unsigned short int var_1_118 = 2;
double var_1_119 = 500.2;
double var_1_120 = 50.2;
signed char var_1_121 = 64;
float var_1_122 = 8.875;
signed long int var_1_123 = 100;
signed long int var_1_124 = -64;
float var_1_125 = 128.8;
unsigned long int var_1_126 = 8;
unsigned short int var_1_127 = 8;
unsigned char var_1_128 = 0;
float var_1_129 = 1.4;
signed char var_1_130 = -50;
double var_1_131 = 15.5;
unsigned char var_1_132 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_24 > -10000) {
		var_1_23 = var_1_25;
	}


	// From: CodeObject2
	if ((- var_1_24) > var_1_23) {
		var_1_26 = (max (10 , (abs (var_1_27))));
	} else {
		var_1_26 = var_1_27;
	}


	// From: CodeObject3
	if ((32 / 1) >= var_1_23) {
		if ((var_1_29 * var_1_30) == var_1_31) {
			var_1_28 = ((abs (1)) + var_1_23);
		}
	}


	// From: CodeObject4
	if (var_1_23 > (~ (var_1_26 + var_1_28))) {
		var_1_32 = (max (var_1_27 , var_1_33));
	}


	// From: CodeObject5
	if (! var_1_35) {
		if (((var_1_26 / var_1_36) + var_1_27) > var_1_32) {
			var_1_34 = (min (var_1_37 , var_1_38));
		}
	} else {
		var_1_34 = (max (var_1_37 , 16.6));
	}


	// From: CodeObject6
	if (((abs (var_1_37)) + 49.6f) < var_1_29) {
		if (var_1_35) {
			if (var_1_36 != var_1_32) {
				var_1_39 = (abs (abs (abs (var_1_27))));
			} else {
				var_1_39 = (min (16 , var_1_33));
			}
		} else {
			var_1_39 = (abs (var_1_40 + var_1_41));
		}
	}


	// From: CodeObject7
	if (var_1_29 <= (5.875f - var_1_43)) {
		if ((max ((min (4 , -8)) , var_1_24)) < -10) {
			var_1_42 = (((var_1_44 || var_1_45) || var_1_46) || (! (var_1_47 && var_1_48)));
		} else {
			var_1_42 = (! (! 0));
		}
	} else {
		if (var_1_40 > (var_1_24 / var_1_36)) {
			var_1_42 = (! var_1_44);
		} else {
			var_1_42 = var_1_48;
		}
	}


	// From: CodeObject8
	if (var_1_47) {
		if (var_1_26 <= var_1_41) {
			var_1_49 = ((abs (var_1_37)) - (min (1.2 , var_1_50)));
		} else {
			var_1_49 = ((min (var_1_50 , var_1_51)) - var_1_52);
		}
	}


	// From: CodeObject9
	if (var_1_52 > ((var_1_54 + var_1_55) - (abs (4.875)))) {
		var_1_53 = (max (var_1_27 , var_1_26));
	}


	// From: CodeObject10
	if (var_1_51 <= var_1_30) {
		if (var_1_50 >= var_1_37) {
			var_1_56 = (abs (var_1_39));
		} else {
			var_1_56 = (min ((max (var_1_26 , (var_1_32 + 1))) , (abs (var_1_40))));
		}
	}


	// From: CodeObject11
	if ((abs (3.375f - var_1_51)) < var_1_31) {
		var_1_57 = (var_1_58 || var_1_46);
	}


	// From: CodeObject12
	if (var_1_44) {
		if (! var_1_35) {
			var_1_59 = (min (var_1_32 , var_1_27));
		}
	} else {
		var_1_59 = (abs (min (var_1_27 , (abs (var_1_33)))));
	}


	// From: CodeObject13
	if ((var_1_24 | (abs (var_1_27))) <= (max (var_1_59 , (var_1_25 | -1000000000)))) {
		var_1_60 = (min (var_1_25 , var_1_36));
	} else {
		if ((var_1_26 % var_1_61) < var_1_56) {
			var_1_60 = (min ((abs (abs (var_1_40))) , (4 + var_1_39)));
		}
	}


	// From: CodeObject14
	if (var_1_45) {
		if (((var_1_59 % var_1_36) * var_1_33) <= -32) {
			var_1_62 = var_1_63;
		}
	}


	// From: CodeObject15
	var_1_64 = var_1_32;


	// From: CodeObject16
	if (var_1_44) {
		var_1_65 = var_1_41;
	}


	// From: CodeObject17
	if (var_1_35) {
		var_1_66 = var_1_51;
	}


	// From: CodeObject18
	if (var_1_50 == (abs (var_1_54 / var_1_68))) {
		if (var_1_63 <= ((abs (var_1_41)) % var_1_69)) {
			var_1_67 = (min (var_1_33 , var_1_40));
		} else {
			if ((abs (var_1_56)) != var_1_60) {
				var_1_67 = var_1_41;
			}
		}
	}


	// From: CodeObject19
	if (var_1_48 && var_1_45) {
		if (var_1_43 >= var_1_29) {
			var_1_70 = var_1_36;
		}
	} else {
		var_1_70 = (var_1_65 - 25);
	}


	// From: CodeObject20
	if (var_1_26 != var_1_40) {
		if (var_1_67 <= (min ((var_1_60 / var_1_61) , var_1_56))) {
			var_1_71 = (max ((abs (var_1_72)) , (abs (abs (var_1_39)))));
		}
	} else {
		if (var_1_42 && (var_1_52 < var_1_49)) {
			var_1_71 = (abs (var_1_41));
		}
	}


	// From: CodeObject21
	if (var_1_27 >= (var_1_59 & (max (var_1_53 , var_1_62)))) {
		if ((abs (var_1_74 - var_1_41)) > var_1_26) {
			var_1_73 = (var_1_75 - 5);
		}
	}


	// From: CodeObject22
	if (var_1_36 > var_1_24) {
		var_1_76 = (abs (abs (max (var_1_39 , var_1_27))));
	}


	// From: CodeObject23
	if ((var_1_54 * var_1_43) >= var_1_52) {
		var_1_77 = ((abs (63.5f)) + (min (var_1_78 , var_1_79)));
	} else {
		if (var_1_43 <= var_1_31) {
			if (var_1_42) {
				var_1_77 = (abs (var_1_78));
			}
		} else {
			if (var_1_72 < var_1_26) {
				var_1_77 = (abs (var_1_78 + var_1_79));
			}
		}
	}


	// From: CodeObject24
	if ((var_1_27 + (max (var_1_70 , var_1_32))) >= var_1_33) {
		var_1_80 = (abs (var_1_73));
	} else {
		if (-128 > var_1_70) {
			var_1_80 = (max ((var_1_75 + var_1_39) , var_1_40));
		}
	}


	// From: CodeObject25
	if (999.7 <= ((abs (var_1_50)) - (abs (var_1_54)))) {
		var_1_81 = (abs (abs (var_1_79)));
	} else {
		var_1_81 = (min (var_1_54 , var_1_78));
	}


	// From: CodeObject26
	if (var_1_60 < var_1_26) {
		var_1_82 = (abs (max (var_1_75 , var_1_83)));
	} else {
		if ((abs (var_1_40)) >= (var_1_74 - 10)) {
			var_1_82 = (var_1_75 - var_1_84);
		} else {
			var_1_82 = ((var_1_85 + var_1_86) - (max (var_1_84 , var_1_87)));
		}
	}


	// From: CodeObject27
	if (500 == var_1_69) {
		if (var_1_47 && (var_1_36 > var_1_28)) {
			var_1_88 = (var_1_55 - var_1_52);
		}
	}


	// From: CodeObject28
	if (var_1_58 && var_1_57) {
		if (5 > var_1_62) {
			if (var_1_50 > (- var_1_38)) {
				var_1_89 = (abs (var_1_76));
			}
		} else {
			if (var_1_90) {
				var_1_89 = (abs (var_1_62));
			} else {
				var_1_89 = var_1_56;
			}
		}
	} else {
		if (var_1_26 < (var_1_53 >> var_1_76)) {
			if (((max (var_1_67 , var_1_53)) ^ var_1_27) < var_1_65) {
				var_1_89 = var_1_32;
			}
		}
	}


	// From: CodeObject29
	if ((abs (var_1_51 / var_1_68)) > var_1_37) {
		var_1_91 = (var_1_41 + (var_1_92 - var_1_93));
	} else {
		var_1_91 = (abs (var_1_84));
	}


	// From: CodeObject30
	if ((max (16 , var_1_28)) <= var_1_53) {
		var_1_94 = var_1_78;
	}


	// From: CodeObject31
	if (! (-1 > var_1_23)) {
		if (var_1_36 <= var_1_85) {
			var_1_95 = ((abs (4)) + (100 + 64));
		} else {
			var_1_95 = ((max ((max (var_1_96 , var_1_97)) , (min (40383 , var_1_98)))) - (min (64 , var_1_41)));
		}
	}


	// From: CodeObject32
	if (var_1_87 < (~ -10)) {
		if ((min (63.5 , var_1_49)) < (var_1_54 / var_1_68)) {
			var_1_99 = (var_1_86 + (abs (var_1_62)));
		} else {
			if (var_1_49 != var_1_81) {
				var_1_99 = (abs (max (var_1_63 , var_1_32)));
			}
		}
	}


	// From: CodeObject33
	if (var_1_48) {
		var_1_100 = ((min (99.125f , 9.375f)) - var_1_51);
	} else {
		if (var_1_65 > var_1_101) {
			if (var_1_45) {
				if (var_1_89 >= (var_1_98 | (var_1_99 % var_1_36))) {
					var_1_100 = (var_1_54 - var_1_51);
				} else {
					var_1_100 = var_1_50;
				}
			} else {
				if (var_1_55 <= 63.5) {
					var_1_100 = (0.30000000000000004f + var_1_78);
				}
			}
		} else {
			if (var_1_88 == var_1_77) {
				if (var_1_90) {
					var_1_100 = (abs (var_1_79));
				} else {
					var_1_100 = var_1_79;
				}
			} else {
				var_1_100 = (max (var_1_51 , var_1_38));
			}
		}
	}


	// From: CodeObject34
	if (var_1_90 && (var_1_96 < (- var_1_95))) {
		var_1_102 = var_1_27;
	}


	// From: CodeObject35
	if (var_1_27 > var_1_64) {
		if (var_1_80 >= (abs (var_1_27))) {
			if (var_1_104 <= (var_1_76 * var_1_102)) {
				var_1_103 = (abs (min ((var_1_54 - var_1_55) , (min (var_1_51 , var_1_52)))));
			}
		} else {
			var_1_103 = (min (var_1_37 , var_1_38));
		}
	} else {
		if (var_1_81 > (- var_1_34)) {
			if (((abs (var_1_70)) + var_1_105) > (abs (50))) {
				var_1_103 = (max ((max (8.625 , (var_1_78 + var_1_79))) , var_1_38));
			} else {
				if (var_1_75 > (var_1_84 % (abs (var_1_106)))) {
					var_1_103 = (var_1_55 - var_1_52);
				} else {
					var_1_103 = (max ((min (var_1_38 , var_1_78)) , var_1_55));
				}
			}
		} else {
			var_1_103 = (var_1_52 - var_1_51);
		}
	}


	// From: CodeObject36
	if (var_1_58) {
		if (var_1_23 > var_1_36) {
			var_1_107 = (abs (var_1_54));
		} else {
			var_1_107 = (min (99.4 , var_1_78));
		}
	}


	// From: CodeObject37
	if (8 > ((var_1_64 % var_1_74) % var_1_106)) {
		if (var_1_52 <= (- (max (var_1_55 , var_1_34)))) {
			if ((abs (var_1_91)) <= (abs (var_1_86))) {
				var_1_108 = (abs (var_1_38));
			}
		} else {
			var_1_108 = var_1_55;
		}
	} else {
		var_1_108 = (abs (var_1_55));
	}


	// From: CodeObject38
	if ((var_1_60 >> var_1_84) <= var_1_89) {
		if (var_1_106 != var_1_64) {
			var_1_109 = (min (var_1_79 , 9.999999995E8f));
		} else {
			var_1_109 = (abs (var_1_78));
		}
	}


	// From: CodeObject39
	if ((var_1_73 | var_1_26) >= var_1_82) {
		if (var_1_53 >= var_1_62) {
			if (var_1_78 > var_1_54) {
				var_1_110 = (min (var_1_86 , var_1_84));
			} else {
				var_1_110 = (min (var_1_63 , var_1_85));
			}
		}
	}


	// From: CodeObject40
	if ((var_1_50 != var_1_29) && var_1_35) {
		var_1_111 = (abs (var_1_102));
	}


	// From: CodeObject41
	if (var_1_106 < (min (var_1_23 , (var_1_61 % var_1_69)))) {
		var_1_112 = (var_1_98 - (abs (2)));
	} else {
		var_1_112 = (var_1_92 + var_1_84);
	}


	// From: CodeObject42
	if ((max (var_1_74 , var_1_101)) > var_1_26) {
		if (var_1_42 && (var_1_49 > var_1_50)) {
			var_1_113 = ((abs (var_1_78)) + var_1_79);
		} else {
			var_1_113 = (abs ((max (var_1_54 , var_1_52)) - var_1_51));
		}
	}


	// From: CodeObject43
	if ((var_1_36 % var_1_74) >= var_1_63) {
		var_1_114 = var_1_38;
	} else {
		var_1_114 = var_1_38;
	}


	// From: CodeObject44
	var_1_115 = var_1_69;


	// From: CodeObject45
	var_1_116 = var_1_92;


	// From: CodeObject46
	if (var_1_90) {
		var_1_117 = var_1_112;
	}


	// From: CodeObject47
	var_1_118 = 64;


	// From: CodeObject48
	if (var_1_45) {
		var_1_119 = var_1_78;
	} else {
		var_1_119 = var_1_55;
	}


	// From: CodeObject49
	if (var_1_46) {
		var_1_120 = var_1_37;
	}


	// From: CodeObject50
	var_1_121 = var_1_63;


	// From: CodeObject51
	if (var_1_48) {
		var_1_122 = var_1_78;
	}


	// From: CodeObject52
	var_1_123 = var_1_118;


	// From: CodeObject53
	var_1_124 = var_1_33;


	// From: CodeObject54
	if (var_1_42) {
		var_1_125 = 1.000000000000021E13f;
	}


	// From: CodeObject55
	var_1_126 = 256u;


	// From: CodeObject56
	if (var_1_90) {
		var_1_127 = var_1_32;
	} else {
		var_1_127 = var_1_32;
	}


	// From: CodeObject57
	var_1_128 = var_1_48;


	// From: CodeObject58
	if (var_1_42) {
		var_1_129 = var_1_79;
	}


	// From: CodeObject59
	if (var_1_102 > (var_1_65 % var_1_106)) {
		if ((var_1_40 / (max (var_1_92 , var_1_106))) < var_1_83) {
			var_1_130 = (abs (var_1_87));
		}
	}


	// From: CodeObject60
	var_1_131 = var_1_79;


	// From: CodeObject61
	var_1_132 = var_1_44;


	// From: Req4Batch27PS_CN_500
	if (var_1_6 == (var_1_4 / var_1_13)) {
		var_1_12 = var_1_11;
	}


	// From: Req6Batch27PS_CN_500
	var_1_20 = var_1_11;


	// From: Req7Batch27PS_CN_500
	var_1_21 = 8;


	// From: Req3Batch27PS_CN_500
	if ((var_1_21 + var_1_12) > (2u >> var_1_11)) {
		if (var_1_12 != var_1_21) {
			var_1_10 = var_1_11;
		} else {
			var_1_10 = 128;
		}
	}


	// From: Req5Batch27PS_CN_500
	if (! var_1_2) {
		if (var_1_2 || var_1_3) {
			var_1_14 = ((! (! var_1_15)) && (var_1_16 && var_1_17));
		} else {
			if ((max (var_1_12 , var_1_12)) >= var_1_21) {
				var_1_14 = (var_1_2 || var_1_16);
			} else {
				var_1_14 = (! var_1_19);
			}
		}
	}


	// From: Req1Batch27PS_CN_500
	unsigned char stepLocal_1 = var_1_14;
	unsigned char stepLocal_0 = var_1_14;
	if (var_1_14 || stepLocal_0) {
		if (stepLocal_1 || var_1_14) {
			var_1_1 = ((max ((min (var_1_4 , var_1_5)) , var_1_6)) - var_1_7);
		} else {
			var_1_1 = 1.0000000075E8f;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch27PS_CN_500
	if (var_1_6 > (- var_1_7)) {
		if (var_1_5 == (max ((var_1_6 * var_1_7) , var_1_1))) {
			var_1_8 = 8u;
		}
	} else {
		var_1_8 = var_1_20;
	}


	// From: Req8Batch27PS_CN_500
	var_1_22 = var_1_8;
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 33);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= -2147483648);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -32767);
	assume_abort_if_not(var_1_25 <= 32766);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 254);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 255);
	assume_abort_if_not(var_1_36 != 0);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854765600e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 1);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427387900e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427387900e+12F && var_1_55 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 0);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= -128);
	assume_abort_if_not(var_1_61 <= 127);
	assume_abort_if_not(var_1_61 != 0);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= -127);
	assume_abort_if_not(var_1_63 <= 126);
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= -922337.2036854776000e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854776000e+12F && var_1_68 >= 1.0e-20F ));
	assume_abort_if_not(var_1_68 != 0.0F);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= -128);
	assume_abort_if_not(var_1_69 <= 127);
	assume_abort_if_not(var_1_69 != 0);
	var_1_72 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 4294967294);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 127);
	assume_abort_if_not(var_1_74 <= 255);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= -1);
	assume_abort_if_not(var_1_75 <= 126);
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= -461168.6018427382800e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427382800e+12F && var_1_78 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_79 >= -461168.6018427382800e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 4611686.018427382800e+12F && var_1_79 >= 1.0e-20F ));
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= -126);
	assume_abort_if_not(var_1_83 <= 126);
	var_1_84 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 126);
	var_1_85 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 63);
	var_1_86 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 63);
	var_1_87 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 126);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 1);
	var_1_92 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_92 >= 16383);
	assume_abort_if_not(var_1_92 <= 32767);
	var_1_93 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_93 >= 0);
	assume_abort_if_not(var_1_93 <= 16383);
	var_1_96 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_96 >= 32767);
	assume_abort_if_not(var_1_96 <= 65534);
	var_1_97 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_97 >= 32767);
	assume_abort_if_not(var_1_97 <= 65534);
	var_1_98 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_98 >= 32767);
	assume_abort_if_not(var_1_98 <= 65534);
	var_1_101 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_101 >= 0);
	assume_abort_if_not(var_1_101 <= 255);
	var_1_104 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_104 >= 0);
	assume_abort_if_not(var_1_104 <= 65535);
	var_1_105 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_105 >= 0);
	assume_abort_if_not(var_1_105 <= 65535);
	var_1_106 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_106 >= -127);
	assume_abort_if_not(var_1_106 <= 127);
	assume_abort_if_not(var_1_106 != 0);
}



void updateLastVariables() {
}

int property() {
	return ((((((((var_1_14 || var_1_14) ? ((var_1_14 || var_1_14) ? (var_1_1 == ((float) ((max ((min (var_1_4 , var_1_5)) , var_1_6)) - var_1_7))) : (var_1_1 == ((float) 1.0000000075E8f))) : (var_1_1 == ((float) var_1_7))) && ((var_1_6 > (- var_1_7)) ? ((var_1_5 == (max ((var_1_6 * var_1_7) , var_1_1))) ? (var_1_8 == ((unsigned long int) 8u)) : 1) : (var_1_8 == ((unsigned long int) var_1_20)))) && (((var_1_21 + var_1_12) > (2u >> var_1_11)) ? ((var_1_12 != var_1_21) ? (var_1_10 == ((signed short int) var_1_11)) : (var_1_10 == ((signed short int) 128))) : 1)) && ((var_1_6 == (var_1_4 / var_1_13)) ? (var_1_12 == ((unsigned char) var_1_11)) : 1)) && ((! var_1_2) ? ((var_1_2 || var_1_3) ? (var_1_14 == ((unsigned char) ((! (! var_1_15)) && (var_1_16 && var_1_17)))) : (((max (var_1_12 , var_1_12)) >= var_1_21) ? (var_1_14 == ((unsigned char) (var_1_2 || var_1_16))) : (var_1_14 == ((unsigned char) (! var_1_19))))) : 1)) && (var_1_20 == ((unsigned char) var_1_11))) && (var_1_21 == ((unsigned short int) 8))) && (var_1_22 == ((unsigned short int) var_1_8))
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
