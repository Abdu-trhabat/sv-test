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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch59PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 1;
unsigned char var_1_4 = 25;
unsigned short int var_1_5 = 0;
unsigned short int var_1_6 = 62100;
unsigned short int var_1_7 = 27651;
double var_1_8 = 128.9;
double var_1_10 = 16.5;
double var_1_11 = 25.5;
double var_1_12 = 199.75;
unsigned char var_1_13 = 2;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 1;
unsigned short int var_1_17 = 32;
unsigned char var_1_18 = 1;
unsigned long int var_1_19 = 1;
unsigned short int var_1_20 = 25;
signed long int var_1_21 = -10;
unsigned long int var_1_22 = 16;
signed long int var_1_23 = -1;
unsigned short int var_1_24 = 2;
unsigned short int var_1_25 = 64;
unsigned short int var_1_26 = 25;
unsigned short int var_1_27 = 40704;
signed char var_1_28 = 16;
unsigned char var_1_29 = 1;
signed char var_1_30 = -32;
unsigned char var_1_31 = 32;
unsigned char var_1_32 = 0;
signed char var_1_33 = 8;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 1;
signed long int var_1_37 = 200;
signed short int var_1_38 = -8;
unsigned char var_1_39 = 0;
float var_1_40 = 255.8;
float var_1_41 = 256.5;
signed short int var_1_42 = 16;
float var_1_43 = 10000.74;
float var_1_44 = 1.5;
signed char var_1_45 = -4;
unsigned short int var_1_46 = 5;
signed long int var_1_47 = 10;
double var_1_48 = 16.625;
unsigned char var_1_49 = 16;
double var_1_50 = 9999999.48;
double var_1_51 = 0.8;
double var_1_52 = 127.8;
unsigned char var_1_53 = 0;
unsigned long int var_1_54 = 16;
signed char var_1_55 = -8;
signed char var_1_56 = 4;
signed char var_1_57 = -5;
signed char var_1_58 = 1;
signed char var_1_59 = 0;
unsigned short int var_1_60 = 2;
signed char var_1_61 = -64;
signed char var_1_62 = -2;
signed char var_1_63 = 64;
signed char var_1_64 = 100;
signed char var_1_65 = 32;
unsigned long int var_1_66 = 100000;
unsigned long int var_1_67 = 2562068113;
unsigned long int var_1_68 = 3780123883;
signed short int var_1_69 = -128;
float var_1_70 = 7.2;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 128;
signed short int var_1_74 = -16;
float var_1_75 = 64.625;
signed long int var_1_76 = -8;
signed short int var_1_77 = 128;
double var_1_78 = 0.58;
unsigned short int var_1_79 = 256;
double var_1_80 = 255.4;
double var_1_81 = 8.8;
double var_1_82 = 15.5;
double var_1_83 = 999999999.5;
signed short int var_1_84 = -16;
signed char var_1_85 = -8;
signed long int var_1_86 = -128;
signed short int var_1_87 = 10;
signed short int var_1_88 = -5;
signed short int var_1_89 = 30033;
unsigned short int var_1_90 = 0;
unsigned short int var_1_91 = 10000;
unsigned short int var_1_92 = 10000;
signed long int var_1_93 = 128;
signed char var_1_94 = 8;
unsigned char var_1_95 = 0;
double var_1_96 = 31.2;
unsigned char var_1_97 = 2;
double var_1_98 = 2.1;
double var_1_99 = 16.2;
double var_1_100 = 16.4;
double var_1_101 = 0.0;
double var_1_102 = 0.0;
double var_1_103 = 0.0;
double var_1_104 = 16.75;
unsigned long int var_1_105 = 4;
unsigned long int var_1_106 = 8;
unsigned long int var_1_107 = 10;
unsigned short int var_1_108 = 128;
float var_1_109 = 32.5;
signed long int var_1_110 = -1;
unsigned char var_1_111 = 2;
unsigned char var_1_112 = 5;
double var_1_113 = 4.5;
signed char var_1_114 = -128;
unsigned char var_1_115 = 0;
unsigned char var_1_116 = 128;
unsigned char var_1_117 = 128;
unsigned char var_1_118 = 128;
unsigned char var_1_119 = 32;
unsigned char var_1_120 = 0;
unsigned long int var_1_121 = 128;
unsigned long int var_1_122 = 8;
unsigned char var_1_123 = 8;
signed long int var_1_124 = 4;
double var_1_125 = 63.6;
float var_1_126 = 10000.375;
unsigned short int var_1_127 = 2;
unsigned short int var_1_128 = 25;
float var_1_129 = 256.875;
unsigned long int var_1_130 = 16;
signed short int var_1_131 = -8;
signed short int var_1_132 = -100;
unsigned long int var_1_133 = 64;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_5 = 0;
unsigned char last_1_var_1_15 = 1;
unsigned char last_1_var_1_18 = 1;
unsigned long int last_1_var_1_19 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_21 >> (var_1_22 - 16u)) < (max (8 , var_1_23))) {
		var_1_20 = (max ((var_1_22 + (min (var_1_24 , var_1_25))) , var_1_26));
	} else {
		if (var_1_24 < ((abs (var_1_26)) & var_1_25)) {
			var_1_20 = (min ((abs (var_1_27 - var_1_25)) , var_1_26));
		}
	}


	// From: CodeObject2
	if (var_1_29 || (var_1_27 <= var_1_21)) {
		if (var_1_26 <= (var_1_27 >> var_1_23)) {
			var_1_28 = (abs (var_1_22));
		} else {
			var_1_28 = (abs (var_1_22));
		}
	}


	// From: CodeObject3
	if (var_1_21 >= (~ var_1_22)) {
		if (var_1_32) {
			if (var_1_29 && (var_1_28 > var_1_25)) {
				if (var_1_20 > var_1_26) {
					var_1_31 = var_1_22;
				}
			}
		}
	} else {
		var_1_31 = (abs (var_1_22));
	}


	// From: CodeObject4
	if ((min ((min (var_1_24 , var_1_25)) , (var_1_21 & var_1_20))) >= var_1_23) {
		if (var_1_32) {
			var_1_33 = (abs (var_1_22));
		}
	}


	// From: CodeObject5
	if (var_1_20 <= var_1_26) {
		var_1_34 = ((var_1_20 > (abs (var_1_21))) || var_1_36);
	}


	// From: CodeObject6
	if (! ((var_1_25 - var_1_22) >= var_1_20)) {
		var_1_37 = (min ((var_1_25 + 128) , 4));
	}


	// From: CodeObject7
	if ((var_1_30 >= var_1_37) && (var_1_39 && (var_1_21 >= var_1_33))) {
		if (var_1_39) {
			var_1_38 = (var_1_31 - (max ((8 + var_1_22) , 64)));
		}
	} else {
		if (((abs (-5)) - var_1_22) >= 64u) {
			if ((abs (var_1_40)) >= var_1_41) {
				if (var_1_35 || var_1_34) {
					var_1_38 = ((max ((min (1 , var_1_22)) , var_1_31)) - (30676 - var_1_42));
				}
			}
		}
	}


	// From: CodeObject8
	if (var_1_28 == var_1_38) {
		var_1_43 = var_1_44;
	}


	// From: CodeObject9
	if (var_1_38 >= -500) {
		var_1_45 = (abs (var_1_22));
	}


	// From: CodeObject10
	if (var_1_26 <= (var_1_23 >> (abs (var_1_22)))) {
		var_1_46 = (max ((max (var_1_24 , var_1_25)) , var_1_42));
	} else {
		var_1_46 = ((abs (1)) + var_1_22);
	}


	// From: CodeObject11
	if (var_1_37 >= var_1_28) {
		var_1_47 = (var_1_27 + var_1_22);
	}


	// From: CodeObject12
	if (var_1_22 <= var_1_20) {
		if (((max (var_1_21 , var_1_20)) / -4) >= (abs (var_1_28))) {
			if ((var_1_38 ^ var_1_49) >= var_1_46) {
				var_1_48 = (var_1_50 - var_1_51);
			}
		}
	}


	// From: CodeObject13
	if ((var_1_28 < var_1_31) && (0.21999999999999997f > var_1_43)) {
		if (var_1_37 > (var_1_28 ^ (var_1_47 / 1))) {
			var_1_52 = var_1_50;
		}
	}


	// From: CodeObject14
	if (((abs (var_1_37)) & var_1_26) <= (var_1_42 % var_1_22)) {
		if ((abs (var_1_47)) != (var_1_42 << var_1_38)) {
			var_1_53 = (var_1_29 && var_1_35);
		}
	}


	// From: CodeObject15
	if (var_1_29 && var_1_36) {
		var_1_54 = (max (var_1_22 , var_1_24));
	}


	// From: CodeObject16
	if (var_1_47 >= (var_1_37 / var_1_27)) {
		var_1_55 = (var_1_22 + (abs (max (var_1_56 , var_1_57))));
	} else {
		if (var_1_52 < (- var_1_44)) {
			if ((var_1_25 << (max (var_1_58 , var_1_59))) <= var_1_38) {
				var_1_55 = (max ((max (var_1_30 , var_1_57)) , var_1_58));
			}
		} else {
			var_1_55 = (abs (var_1_56));
		}
	}


	// From: CodeObject17
	if (var_1_33 < var_1_47) {
		if (var_1_26 > (min (var_1_37 , var_1_31))) {
			var_1_60 = ((min (var_1_22 , var_1_42)) + var_1_24);
		}
	}


	// From: CodeObject18
	if (var_1_29) {
		if ((var_1_42 + (abs (var_1_60))) == var_1_23) {
			var_1_61 = (max ((var_1_58 + var_1_57) , -50));
		} else {
			if (var_1_53) {
				if ((abs (- var_1_51)) < var_1_43) {
					var_1_61 = ((var_1_58 + var_1_59) - (min ((var_1_64 - var_1_22) , (max (var_1_63 , var_1_65)))));
				} else {
					var_1_61 = ((min ((max (var_1_22 , var_1_59)) , var_1_64)) - var_1_58);
				}
			}
		}
	}


	// From: CodeObject19
	if (var_1_55 >= (abs (var_1_58))) {
		if (var_1_28 <= (var_1_55 % var_1_64)) {
			var_1_66 = ((min (var_1_67 , var_1_68)) - var_1_31);
		}
	}


	// From: CodeObject20
	if (! var_1_32) {
		if (var_1_43 > var_1_48) {
			var_1_69 = var_1_62;
		}
	}


	// From: CodeObject21
	if (var_1_71) {
		var_1_70 = var_1_44;
	}


	// From: CodeObject22
	if (var_1_34) {
		var_1_72 = var_1_35;
	}


	// From: CodeObject23
	if (var_1_36) {
		var_1_73 = var_1_63;
	} else {
		var_1_73 = var_1_59;
	}


	// From: CodeObject24
	if ((var_1_50 * var_1_51) > (- -0.5)) {
		var_1_74 = (abs (var_1_63 - 50));
	}


	// From: CodeObject25
	if (499.25 >= (var_1_52 + var_1_70)) {
		var_1_75 = (min ((min (var_1_50 , var_1_51)) , var_1_44));
	}


	// From: CodeObject26
	if (var_1_40 >= 0.4f) {
		var_1_76 = var_1_73;
	}


	// From: CodeObject27
	if (var_1_39) {
		if (var_1_59 <= -25) {
			var_1_77 = ((min ((var_1_49 + 100) , (abs (var_1_65)))) + (min (var_1_28 , var_1_57)));
		} else {
			var_1_77 = (5 - (abs (abs (var_1_22))));
		}
	}


	// From: CodeObject28
	if (var_1_79 < (var_1_59 << var_1_62)) {
		var_1_78 = var_1_80;
	} else {
		if (var_1_41 >= 63.375f) {
			var_1_78 = (var_1_50 - var_1_51);
		} else {
			var_1_78 = (abs ((max (var_1_81 , var_1_82)) + var_1_83));
		}
	}


	// From: CodeObject29
	if ((var_1_33 > var_1_85) || var_1_32) {
		if (var_1_80 <= var_1_48) {
			var_1_84 = (max (var_1_49 , var_1_58));
		}
	} else {
		var_1_84 = (var_1_73 + (abs (var_1_31)));
	}


	// From: CodeObject30
	if (var_1_61 < (var_1_30 * var_1_62)) {
		if ((max (var_1_38 , var_1_31)) > var_1_42) {
			var_1_86 = (abs (-128 + var_1_59));
		} else {
			if (var_1_72 && (var_1_74 < var_1_67)) {
				var_1_86 = (max (var_1_58 , ((var_1_42 + var_1_38) + var_1_59)));
			}
		}
	}


	// From: CodeObject31
	var_1_87 = (var_1_49 - (abs (abs (var_1_57))));


	// From: CodeObject32
	if (var_1_48 > (var_1_41 + (var_1_50 - var_1_51))) {
		if (var_1_75 < (- var_1_70)) {
			var_1_88 = (abs (max ((max (var_1_58 , var_1_57)) , var_1_22)));
		} else {
			var_1_88 = ((abs (var_1_61)) - (var_1_89 - (var_1_65 + var_1_22)));
		}
	}


	// From: CodeObject33
	if (var_1_29) {
		if ((var_1_78 + var_1_75) == var_1_51) {
			var_1_90 = var_1_22;
		} else {
			var_1_90 = (var_1_27 - ((var_1_91 + var_1_92) - var_1_58));
		}
	} else {
		var_1_90 = (abs (128));
	}


	// From: CodeObject34
	if (var_1_76 <= var_1_86) {
		if (var_1_90 <= var_1_88) {
			var_1_93 = (max ((abs (abs (var_1_91))) , (abs (var_1_56))));
		}
	} else {
		if ((var_1_27 / var_1_94) < -128) {
			var_1_93 = (abs (var_1_20));
		} else {
			if (var_1_95) {
				var_1_93 = var_1_49;
			} else {
				var_1_93 = var_1_61;
			}
		}
	}


	// From: CodeObject35
	if (var_1_38 < (min (var_1_90 , -32))) {
		if ((var_1_74 >> var_1_28) > (var_1_84 | var_1_33)) {
			var_1_96 = ((abs (var_1_50)) - var_1_51);
		} else {
			var_1_96 = (abs (max ((max (1.2 , var_1_51)) , var_1_50)));
		}
	} else {
		if (var_1_73 < var_1_97) {
			var_1_96 = var_1_82;
		} else {
			if ((var_1_88 / (abs (var_1_27))) >= var_1_61) {
				if (var_1_72) {
					if (var_1_26 < var_1_77) {
						var_1_96 = var_1_82;
					} else {
						var_1_96 = (var_1_81 + (var_1_98 + var_1_99));
					}
				}
			}
		}
	}


	// From: CodeObject36
	if (var_1_84 > var_1_25) {
		var_1_100 = ((max ((var_1_98 + 16.5) , var_1_82)) + (abs (var_1_81)));
	} else {
		if (var_1_21 >= var_1_89) {
			var_1_100 = var_1_82;
		} else {
			var_1_100 = (var_1_50 - ((var_1_101 + var_1_102) - (var_1_103 - var_1_104)));
		}
	}


	// From: CodeObject37
	if (var_1_42 == 1) {
		if (((abs (var_1_31)) / (abs (var_1_64))) < (var_1_69 >> (var_1_106 - var_1_58))) {
			var_1_105 = (abs (var_1_73));
		} else {
			if (var_1_87 >= (~ var_1_86)) {
				var_1_105 = (var_1_65 + (max (var_1_25 , (var_1_46 + var_1_107))));
			}
		}
	} else {
		var_1_105 = ((abs (var_1_67)) - ((abs (var_1_25)) + 64u));
	}


	// From: CodeObject38
	if (var_1_27 >= (abs (var_1_69))) {
		var_1_108 = var_1_64;
	}


	// From: CodeObject39
	if ((var_1_98 / var_1_102) <= var_1_43) {
		if (var_1_72) {
			if (! (var_1_21 <= var_1_107)) {
				var_1_109 = (abs (abs (99.75f)));
			}
		}
	}


	// From: CodeObject40
	var_1_110 = ((min (4 , var_1_97)) - var_1_79);


	// From: CodeObject41
	if ((abs (var_1_85 + var_1_57)) > var_1_23) {
		if (var_1_95 && var_1_39) {
			if (var_1_47 != var_1_63) {
				var_1_111 = (min (var_1_22 , (min (var_1_64 , var_1_63))));
			} else {
				var_1_111 = (var_1_106 + var_1_64);
			}
		} else {
			if ((var_1_24 & (- var_1_22)) > 16u) {
				if (var_1_50 <= var_1_44) {
					var_1_111 = ((abs (var_1_112)) + (abs (var_1_106)));
				} else {
					var_1_111 = (abs (var_1_64));
				}
			} else {
				var_1_111 = (abs (var_1_22));
			}
		}
	}


	// From: CodeObject42
	if ((max (var_1_51 , var_1_100)) < (abs (var_1_44))) {
		var_1_113 = (var_1_102 + (abs (99.2 + var_1_99)));
	} else {
		var_1_113 = var_1_104;
	}


	// From: CodeObject43
	if (var_1_31 != var_1_46) {
		var_1_114 = (max (var_1_59 , (max ((abs (var_1_58)) , 32))));
	}


	// From: CodeObject44
	if (var_1_95 && (var_1_27 <= var_1_91)) {
		if ((var_1_51 > var_1_101) || (var_1_83 > (abs (var_1_43)))) {
			var_1_115 = (max (var_1_63 , var_1_64));
		} else {
			var_1_115 = ((max ((max (var_1_116 , var_1_117)) , var_1_118)) - (var_1_22 + (var_1_119 - var_1_106)));
		}
	}


	// From: CodeObject45
	if (var_1_91 > (var_1_27 - var_1_42)) {
		var_1_120 = var_1_35;
	}


	// From: CodeObject46
	var_1_121 = var_1_89;


	// From: CodeObject47
	if (var_1_35) {
		var_1_122 = var_1_24;
	}


	// From: CodeObject48
	if (var_1_95) {
		var_1_123 = var_1_117;
	}


	// From: CodeObject49
	var_1_124 = var_1_33;


	// From: CodeObject50
	if (var_1_53) {
		var_1_125 = var_1_102;
	}


	// From: CodeObject51
	var_1_126 = var_1_102;


	// From: CodeObject52
	if (var_1_29) {
		var_1_127 = var_1_128;
	} else {
		var_1_127 = var_1_106;
	}


	// From: CodeObject53
	if (var_1_72) {
		var_1_129 = var_1_99;
	}


	// From: CodeObject54
	if (var_1_39) {
		var_1_130 = var_1_60;
	}


	// From: CodeObject55
	if (var_1_95) {
		var_1_131 = var_1_119;
	} else {
		var_1_131 = -1000;
	}


	// From: CodeObject56
	if ((min ((var_1_21 >> var_1_128) , var_1_90)) != var_1_31) {
		if (((2252430244u - var_1_133) >> var_1_30) >= var_1_20) {
			if (var_1_72) {
				var_1_132 = var_1_57;
			} else {
				var_1_132 = 2;
			}
		}
	} else {
		var_1_132 = var_1_55;
	}


	// From: Req3Batch59PS_CN_500
	unsigned char stepLocal_3 = last_1_var_1_19 < var_1_6;
	if (last_1_var_1_18) {
		if ((! last_1_var_1_15) || stepLocal_3) {
			var_1_8 = (max (127.25 , var_1_10));
		} else {
			var_1_8 = (var_1_11 + var_1_12);
		}
	} else {
		var_1_8 = var_1_11;
	}


	// From: Req5Batch59PS_CN_500
	if (var_1_12 != var_1_8) {
		var_1_15 = (! var_1_16);
	} else {
		var_1_15 = var_1_16;
	}


	// From: Req6Batch59PS_CN_500
	var_1_17 = var_1_4;


	// From: Req7Batch59PS_CN_500
	var_1_18 = var_1_16;


	// From: Req8Batch59PS_CN_500
	var_1_19 = var_1_4;


	// From: Req1Batch59PS_CN_500
	unsigned short int stepLocal_1 = var_1_17;
	unsigned char stepLocal_0 = var_1_17 != (16 / var_1_4);
	if (stepLocal_0 && var_1_15) {
		if (stepLocal_1 > var_1_4) {
			var_1_1 = (var_1_4 + var_1_17);
		} else {
			if (var_1_15) {
				var_1_1 = var_1_17;
			} else {
				var_1_1 = var_1_4;
			}
		}
	} else {
		var_1_1 = var_1_17;
	}


	// From: Req2Batch59PS_CN_500
	unsigned short int stepLocal_2 = var_1_17;
	if (stepLocal_2 < last_1_var_1_5) {
		var_1_5 = (var_1_6 - (var_1_7 - last_1_var_1_5));
	} else {
		if (! var_1_15) {
			var_1_5 = (max (last_1_var_1_5 , (var_1_7 + var_1_4)));
		}
	}


	// From: Req4Batch59PS_CN_500
	unsigned short int stepLocal_5 = var_1_6;
	unsigned short int stepLocal_4 = var_1_5;
	if (stepLocal_4 != ((var_1_6 / var_1_4) * (max (var_1_5 , var_1_19)))) {
		if (var_1_5 <= stepLocal_5) {
			var_1_13 = 32;
		} else {
			var_1_13 = var_1_14;
		}
	} else {
		var_1_13 = var_1_14;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 32767);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 16383);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427382800e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= -2147483648);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 16);
	assume_abort_if_not(var_1_22 <= 32);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483648);
	assume_abort_if_not(var_1_23 <= 2147483647);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 32767);
	assume_abort_if_not(var_1_27 <= 65534);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -127);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 16383);
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -922337.2036854765600e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 255);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= -63);
	assume_abort_if_not(var_1_56 <= 63);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= -63);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 1);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 1);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= -63);
	assume_abort_if_not(var_1_62 <= 63);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 126);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= 63);
	assume_abort_if_not(var_1_64 <= 126);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 126);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 2147483647);
	assume_abort_if_not(var_1_67 <= 4294967294);
	var_1_68 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_68 >= 2147483647);
	assume_abort_if_not(var_1_68 <= 4294967294);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 1);
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 65535);
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= -922337.2036854765600e+13F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854765600e+12F && var_1_80 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_81 >= -461168.6018427382800e+13F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 4611686.018427382800e+12F && var_1_81 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_82 >= -461168.6018427382800e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 4611686.018427382800e+12F && var_1_82 >= 1.0e-20F ));
	var_1_83 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_83 >= -461168.6018427382800e+13F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 4611686.018427382800e+12F && var_1_83 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_85 >= -128);
	assume_abort_if_not(var_1_85 <= 127);
	var_1_89 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_89 >= 16383);
	assume_abort_if_not(var_1_89 <= 32766);
	var_1_91 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_91 >= 8191);
	assume_abort_if_not(var_1_91 <= 16384);
	var_1_92 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_92 >= 8192);
	assume_abort_if_not(var_1_92 <= 16383);
	var_1_94 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_94 >= -128);
	assume_abort_if_not(var_1_94 <= 127);
	assume_abort_if_not(var_1_94 != 0);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 1);
	var_1_97 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_97 >= 0);
	assume_abort_if_not(var_1_97 <= 255);
	var_1_98 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_98 >= -230584.3009213691390e+13F && var_1_98 <= -1.0e-20F) || (var_1_98 <= 2305843.009213691390e+12F && var_1_98 >= 1.0e-20F ));
	var_1_99 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_99 >= -230584.3009213691390e+13F && var_1_99 <= -1.0e-20F) || (var_1_99 <= 2305843.009213691390e+12F && var_1_99 >= 1.0e-20F ));
	var_1_101 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_101 >= 2305843.009213691390e+12F && var_1_101 <= -1.0e-20F) || (var_1_101 <= 4611686.018427382800e+12F && var_1_101 >= 1.0e-20F ));
	var_1_102 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_102 >= 2305843.009213691390e+12F && var_1_102 <= -1.0e-20F) || (var_1_102 <= 4611686.018427382800e+12F && var_1_102 >= 1.0e-20F ));
	var_1_103 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_103 >= 2305843.009213691390e+12F && var_1_103 <= -1.0e-20F) || (var_1_103 <= 4611686.018427382800e+12F && var_1_103 >= 1.0e-20F ));
	var_1_104 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_104 >= 0.0F && var_1_104 <= -1.0e-20F) || (var_1_104 <= 2305843.009213691390e+12F && var_1_104 >= 1.0e-20F ));
	var_1_106 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_106 >= 8);
	assume_abort_if_not(var_1_106 <= 16);
	var_1_107 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_107 >= 0);
	assume_abort_if_not(var_1_107 <= 1073741823);
	var_1_112 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_112 >= 0);
	assume_abort_if_not(var_1_112 <= 127);
	var_1_116 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_116 >= 127);
	assume_abort_if_not(var_1_116 <= 254);
	var_1_117 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_117 >= 127);
	assume_abort_if_not(var_1_117 <= 254);
	var_1_118 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_118 >= 127);
	assume_abort_if_not(var_1_118 <= 254);
	var_1_119 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_119 >= 31);
	assume_abort_if_not(var_1_119 <= 63);
	var_1_128 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_128 >= 0);
	assume_abort_if_not(var_1_128 <= 65534);
	var_1_133 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_133 >= 0);
	assume_abort_if_not(var_1_133 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_5 = var_1_5;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_19 = var_1_19;
}

int property() {
	return (((((((((var_1_17 != (16 / var_1_4)) && var_1_15) ? ((var_1_17 > var_1_4) ? (var_1_1 == ((unsigned short int) (var_1_4 + var_1_17))) : (var_1_15 ? (var_1_1 == ((unsigned short int) var_1_17)) : (var_1_1 == ((unsigned short int) var_1_4)))) : (var_1_1 == ((unsigned short int) var_1_17))) && ((var_1_17 < last_1_var_1_5) ? (var_1_5 == ((unsigned short int) (var_1_6 - (var_1_7 - last_1_var_1_5)))) : ((! var_1_15) ? (var_1_5 == ((unsigned short int) (max (last_1_var_1_5 , (var_1_7 + var_1_4))))) : 1))) && (last_1_var_1_18 ? (((! last_1_var_1_15) || (last_1_var_1_19 < var_1_6)) ? (var_1_8 == ((double) (max (127.25 , var_1_10)))) : (var_1_8 == ((double) (var_1_11 + var_1_12)))) : (var_1_8 == ((double) var_1_11)))) && ((var_1_5 != ((var_1_6 / var_1_4) * (max (var_1_5 , var_1_19)))) ? ((var_1_5 <= var_1_6) ? (var_1_13 == ((unsigned char) 32)) : (var_1_13 == ((unsigned char) var_1_14))) : (var_1_13 == ((unsigned char) var_1_14)))) && ((var_1_12 != var_1_8) ? (var_1_15 == ((unsigned char) (! var_1_16))) : (var_1_15 == ((unsigned char) var_1_16)))) && (var_1_17 == ((unsigned short int) var_1_4))) && (var_1_18 == ((unsigned char) var_1_16))) && (var_1_19 == ((unsigned long int) var_1_4))
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
