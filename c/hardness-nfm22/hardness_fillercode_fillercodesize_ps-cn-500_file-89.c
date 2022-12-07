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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch89PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 32;
unsigned char var_1_4 = 0;
unsigned short int var_1_8 = 32;
signed long int var_1_9 = -16;
unsigned short int var_1_10 = 5;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
double var_1_16 = 63.75;
double var_1_17 = 8.5;
signed short int var_1_18 = -64;
unsigned char var_1_19 = 32;
unsigned char var_1_20 = 5;
unsigned char var_1_21 = 100;
signed long int var_1_22 = -256;
unsigned char var_1_23 = 16;
signed short int var_1_24 = -1;
signed short int var_1_25 = 2;
unsigned long int var_1_26 = 0;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned short int var_1_29 = 64;
float var_1_30 = -0.5;
float var_1_31 = 63.4;
float var_1_32 = 9.75;
unsigned long int var_1_33 = 10;
unsigned long int var_1_34 = 2286977514;
unsigned short int var_1_35 = 10;
unsigned short int var_1_36 = 2;
unsigned short int var_1_37 = 27187;
unsigned char var_1_38 = 1;
unsigned short int var_1_39 = 60041;
unsigned short int var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
double var_1_43 = 4.5;
unsigned char var_1_44 = 25;
unsigned char var_1_45 = 128;
unsigned char var_1_46 = 10;
float var_1_47 = 1.7;
unsigned char var_1_48 = 5;
float var_1_49 = 2.25;
float var_1_50 = 15.5;
float var_1_51 = 7.625;
float var_1_52 = 99.8;
float var_1_53 = 1000000.75;
float var_1_54 = 5.5;
float var_1_55 = 5.2;
float var_1_56 = 999999999999.6;
double var_1_57 = 31.5;
signed long int var_1_58 = -1;
float var_1_59 = 0.19999999999999996;
signed char var_1_60 = -50;
signed char var_1_61 = -16;
float var_1_62 = 10000000000000.5;
double var_1_63 = 199.15;
double var_1_64 = 2.6;
signed char var_1_65 = -100;
unsigned char var_1_66 = 0;
float var_1_67 = 2.475;
float var_1_68 = 8.75;
double var_1_69 = 32.125;
double var_1_70 = 63.2;
unsigned char var_1_71 = 64;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 1;
unsigned char var_1_76 = 0;
signed char var_1_77 = 0;
signed char var_1_78 = -8;
signed char var_1_79 = -1;
signed short int var_1_80 = -128;
signed short int var_1_81 = 21530;
float var_1_82 = 64.875;
float var_1_83 = 0.0;
unsigned char var_1_84 = 10;
signed long int var_1_85 = -500;
float var_1_86 = 4.75;
signed long int var_1_87 = 4;
signed long int var_1_88 = 128;
signed long int var_1_89 = -10;
signed short int var_1_90 = -16;
double var_1_91 = 128.5;
signed short int var_1_92 = -10;
signed short int var_1_93 = -32;
unsigned long int var_1_94 = 32;
signed short int var_1_95 = -2;
signed short int var_1_96 = 25;
float var_1_97 = 63.6;
signed short int var_1_98 = 200;
double var_1_99 = 256.25;
signed char var_1_100 = -10;
double var_1_101 = 100000.75;
unsigned char var_1_102 = 0;
signed short int var_1_103 = 200;
unsigned char var_1_104 = 1;
unsigned char var_1_105 = 0;
signed short int var_1_106 = 32;
float var_1_107 = 199.2;
float var_1_108 = 127.5;
unsigned short int var_1_109 = 10000;
unsigned char var_1_110 = 128;
unsigned char var_1_111 = 100;
unsigned char var_1_112 = 1;
unsigned char var_1_113 = 0;
float var_1_114 = 9.39;
signed char var_1_115 = -128;
unsigned short int var_1_116 = 50;
double var_1_117 = 7.5;
unsigned long int var_1_118 = 64;
signed char var_1_119 = 10;
unsigned long int var_1_120 = 32;
double var_1_121 = 4.625;
double var_1_122 = 4.5;
signed long int var_1_123 = 16;
unsigned char var_1_124 = 0;
unsigned long int var_1_125 = 16;
unsigned char var_1_126 = 1;
signed char var_1_127 = -10;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 32;
unsigned char last_1_var_1_12 = 32;
signed short int last_1_var_1_18 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_20 & var_1_21) >= var_1_22) {
		var_1_19 = var_1_23;
	}


	// From: CodeObject2
	if ((min (var_1_22 , 25)) > (var_1_21 >> (min (var_1_25 , 1)))) {
		if (var_1_19 >= var_1_23) {
			var_1_24 = (min (var_1_25 , (max (var_1_23 , 128))));
		} else {
			var_1_24 = (var_1_20 - 50);
		}
	}


	// From: CodeObject3
	if (var_1_24 <= (min (var_1_23 , var_1_21))) {
		if (var_1_24 > var_1_19) {
			if (! var_1_27) {
				if (var_1_28) {
					var_1_26 = (var_1_25 + (abs (var_1_21)));
				} else {
					var_1_26 = (var_1_25 + var_1_19);
				}
			}
		}
	}


	// From: CodeObject4
	if (var_1_27) {
		var_1_29 = (min ((abs (max (var_1_19 , var_1_23))) , (abs (var_1_25))));
	}


	// From: CodeObject5
	if (var_1_24 >= var_1_21) {
		var_1_30 = var_1_31;
	} else {
		var_1_30 = (abs (min (var_1_31 , var_1_32)));
	}


	// From: CodeObject6
	if ((var_1_29 >= var_1_21) || var_1_27) {
		var_1_33 = (min (25u , (abs (var_1_34 - 1u))));
	}


	// From: CodeObject7
	if (var_1_32 >= var_1_31) {
		if (var_1_24 <= (-2 * var_1_34)) {
			var_1_35 = (abs (var_1_21));
		}
	}


	// From: CodeObject8
	if (var_1_26 <= ((abs (var_1_21)) ^ (abs (var_1_34)))) {
		var_1_36 = ((var_1_37 - (abs (var_1_23))) + var_1_21);
	}


	// From: CodeObject9
	if (var_1_37 > (min ((var_1_39 - var_1_25) , var_1_40))) {
		if ((- var_1_30) < var_1_31) {
			var_1_38 = (var_1_41 && var_1_42);
		} else {
			if (var_1_40 != (abs (var_1_24))) {
				var_1_38 = (! ((var_1_19 >= var_1_35) || var_1_41));
			}
		}
	} else {
		var_1_38 = var_1_42;
	}


	// From: CodeObject10
	if (var_1_41 || (var_1_30 > (abs (1.00000000045E9f)))) {
		var_1_43 = 3.2;
	} else {
		var_1_43 = (abs (var_1_31));
	}


	// From: CodeObject11
	if (var_1_39 < 25) {
		if (var_1_26 <= (var_1_22 + 256u)) {
			var_1_44 = (var_1_45 - (max (var_1_25 , var_1_46)));
		} else {
			var_1_44 = ((abs (128)) - var_1_25);
		}
	} else {
		var_1_44 = var_1_46;
	}


	// From: CodeObject12
	if ((min ((var_1_45 - 32) , (var_1_19 % var_1_48))) < var_1_40) {
		if (var_1_25 >= -8) {
			if (var_1_26 > var_1_36) {
				var_1_47 = ((abs (var_1_49)) + (min ((var_1_50 + var_1_51) , (abs (var_1_52)))));
			}
		} else {
			var_1_47 = ((abs (49.75f)) + (var_1_53 - var_1_54));
		}
	} else {
		if (var_1_50 <= ((var_1_53 * var_1_32) + 1.25f)) {
			if (var_1_42 || (! var_1_28)) {
				if (var_1_51 <= ((min (var_1_54 , var_1_53)) - (min (var_1_55 , var_1_56)))) {
					var_1_47 = (abs (abs (var_1_49)));
				} else {
					var_1_47 = var_1_54;
				}
			} else {
				var_1_47 = (((abs (var_1_51)) + var_1_53) - var_1_54);
			}
		} else {
			var_1_47 = (var_1_51 + var_1_50);
		}
	}


	// From: CodeObject13
	if (var_1_32 > 25.2f) {
		if (var_1_21 < var_1_48) {
			var_1_57 = ((abs (var_1_31)) - var_1_54);
		}
	} else {
		var_1_57 = (var_1_53 - var_1_54);
	}


	// From: CodeObject14
	if (var_1_36 <= (abs (var_1_37))) {
		if (((var_1_35 * var_1_25) / var_1_39) > ((var_1_21 & var_1_40) % var_1_45)) {
			var_1_58 = (var_1_25 - 100000000);
		}
	}


	// From: CodeObject15
	var_1_59 = 63.75f;


	// From: CodeObject16
	var_1_60 = var_1_25;


	// From: CodeObject17
	if (var_1_41) {
		var_1_61 = var_1_25;
	} else {
		var_1_61 = var_1_25;
	}


	// From: CodeObject18
	var_1_62 = var_1_52;


	// From: CodeObject19
	var_1_63 = ((max (var_1_53 , var_1_54)) - var_1_64);


	// From: CodeObject20
	if (var_1_35 <= var_1_25) {
		var_1_65 = var_1_25;
	}


	// From: CodeObject21
	if (var_1_42) {
		var_1_67 = (max (var_1_68 , (abs (abs (var_1_54)))));
	}


	// From: CodeObject22
	if (var_1_35 > (var_1_39 ^ (var_1_23 ^ var_1_21))) {
		var_1_69 = (var_1_70 - (max (var_1_53 , (abs (3.5)))));
	}


	// From: CodeObject23
	if ((var_1_58 % var_1_39) < (var_1_35 / var_1_37)) {
		var_1_71 = (max (var_1_45 , (abs (var_1_46 + var_1_25))));
	} else {
		if (var_1_42) {
			if (var_1_38 || (var_1_19 >= (max (var_1_46 , var_1_23)))) {
				var_1_71 = var_1_45;
			}
		} else {
			var_1_71 = (var_1_45 - var_1_46);
		}
	}


	// From: CodeObject24
	if (var_1_28) {
		var_1_72 = (var_1_73 || var_1_74);
	}


	// From: CodeObject25
	if (-2 < (var_1_44 / var_1_37)) {
		var_1_75 = var_1_41;
	} else {
		if (var_1_51 >= var_1_47) {
			if (var_1_62 >= 9.9f) {
				var_1_75 = ((var_1_54 <= 9.4f) && var_1_73);
			} else {
				var_1_75 = ((var_1_74 || var_1_73) || var_1_76);
			}
		} else {
			var_1_75 = var_1_76;
		}
	}


	// From: CodeObject26
	if (var_1_28 && var_1_38) {
		if ((abs (var_1_68)) > var_1_32) {
			var_1_77 = (min (var_1_25 , -10));
		} else {
			var_1_77 = ((var_1_25 + var_1_78) + var_1_79);
		}
	} else {
		var_1_77 = (var_1_25 + (min (var_1_79 , var_1_78)));
	}


	// From: CodeObject27
	if (var_1_30 >= ((- var_1_57) / 256.2f)) {
		var_1_80 = ((abs (var_1_60)) - (min (var_1_23 , (var_1_81 - var_1_21))));
	} else {
		var_1_80 = var_1_25;
	}


	// From: CodeObject28
	if ((min (var_1_20 , var_1_21)) < var_1_39) {
		var_1_82 = (abs (var_1_54));
	} else {
		if ((~ (var_1_21 * var_1_58)) > 5) {
			var_1_82 = (max (var_1_68 , var_1_32));
		} else {
			var_1_82 = (min (var_1_70 , ((min (var_1_54 , var_1_53)) - (var_1_83 - 15.5f))));
		}
	}


	// From: CodeObject29
	if (var_1_41) {
		var_1_84 = (var_1_45 - var_1_25);
	} else {
		if (var_1_76) {
			var_1_84 = (var_1_45 - (max (var_1_25 , var_1_46)));
		} else {
			var_1_84 = (min ((min ((max (var_1_25 , var_1_45)) , var_1_23)) , var_1_46));
		}
	}


	// From: CodeObject30
	if (var_1_37 < (var_1_21 + (var_1_36 / var_1_45))) {
		if (var_1_39 >= var_1_58) {
			var_1_85 = (min ((abs (var_1_23 - var_1_48)) , ((abs (var_1_29)) + var_1_37)));
		} else {
			if ((var_1_62 * (abs (var_1_86))) <= (min (var_1_47 , 15.6f))) {
				var_1_85 = (max ((var_1_19 + var_1_24) , var_1_48));
			}
		}
	}


	// From: CodeObject31
	if (var_1_54 <= var_1_31) {
		if (var_1_88 >= var_1_89) {
			var_1_87 = (abs (var_1_23));
		}
	} else {
		if (! (var_1_71 >= 128)) {
			var_1_87 = (abs (var_1_40));
		} else {
			var_1_87 = (var_1_23 + (var_1_39 + (abs (var_1_36))));
		}
	}


	// From: CodeObject32
	if ((var_1_32 / (abs (var_1_83))) < 63.8f) {
		if ((abs (256)) >= var_1_20) {
			if ((min ((var_1_50 * var_1_62) , var_1_64)) < (max (var_1_55 , (max (15.35 , var_1_91))))) {
				var_1_90 = (-1 - var_1_81);
			} else {
				if (var_1_28) {
					var_1_90 = (var_1_25 - (min (var_1_23 , var_1_46)));
				} else {
					var_1_90 = ((abs (abs (var_1_92))) + (max (var_1_93 , (min (var_1_61 , var_1_60)))));
				}
			}
		} else {
			if ((abs (var_1_62)) >= var_1_43) {
				var_1_90 = (max (8 , -16));
			} else {
				var_1_90 = (abs (var_1_44));
			}
		}
	} else {
		if (var_1_27 && var_1_66) {
			var_1_90 = (max (var_1_84 , ((abs (var_1_92)) + var_1_25)));
		}
	}


	// From: CodeObject33
	if (var_1_62 >= (min (var_1_56 , 127.75f))) {
		if (var_1_27) {
			var_1_94 = (min (var_1_35 , 16u));
		} else {
			var_1_94 = (max (var_1_46 , var_1_21));
		}
	}


	// From: CodeObject34
	if ((abs (var_1_20)) >= var_1_24) {
		if (var_1_60 > var_1_48) {
			if (var_1_72) {
				var_1_95 = var_1_65;
			} else {
				var_1_95 = (abs (var_1_92));
			}
		}
	} else {
		if (var_1_96 > var_1_22) {
			var_1_95 = ((64 + var_1_71) - (var_1_46 + (16 + var_1_23)));
		}
	}


	// From: CodeObject35
	if (var_1_69 <= var_1_70) {
		if (var_1_94 < (abs (var_1_44))) {
			var_1_97 = (min (var_1_52 , (var_1_70 - 49.6f)));
		} else {
			if (var_1_69 < var_1_52) {
				var_1_97 = var_1_50;
			}
		}
	}


	// From: CodeObject36
	if ((var_1_56 / (min (var_1_83 , var_1_99))) == (min ((var_1_30 * var_1_54) , var_1_82))) {
		if (var_1_82 >= ((abs (var_1_70)) - 255.75f)) {
			var_1_98 = ((-10 + var_1_44) + var_1_61);
		} else {
			var_1_98 = (var_1_44 - (abs (min (var_1_65 , var_1_77))));
		}
	} else {
		var_1_98 = (max ((max (var_1_60 , (abs (var_1_61)))) , (abs (var_1_93 + var_1_48))));
	}


	// From: CodeObject37
	if ((var_1_37 & var_1_85) < var_1_29) {
		var_1_100 = (min (var_1_79 , var_1_25));
	}


	// From: CodeObject38
	if (var_1_73) {
		if (var_1_64 < ((1.15 - 10.68) * (abs (25.5)))) {
			if (var_1_38) {
				var_1_101 = var_1_32;
			}
		}
	}


	// From: CodeObject39
	if ((~ (abs (var_1_96))) >= var_1_48) {
		var_1_102 = (var_1_45 - var_1_25);
	}


	// From: CodeObject40
	if (var_1_100 <= var_1_34) {
		var_1_103 = (abs (max (var_1_102 , var_1_79)));
	} else {
		var_1_103 = ((abs (var_1_25 + var_1_61)) + (var_1_60 + var_1_100));
	}


	// From: CodeObject41
	if (var_1_44 > var_1_103) {
		if (var_1_71 <= (var_1_48 / var_1_45)) {
			if (var_1_33 <= (25u | (min (256u , var_1_58)))) {
				var_1_104 = (! var_1_105);
			}
		}
	} else {
		var_1_104 = var_1_105;
	}


	// From: CodeObject42
	var_1_106 = ((var_1_84 - 1) + var_1_19);


	// From: CodeObject43
	if (var_1_42) {
		var_1_107 = var_1_108;
	}


	// From: CodeObject44
	if (var_1_72) {
		var_1_109 = (abs (var_1_37));
	}


	// From: CodeObject45
	if (var_1_41) {
		var_1_110 = (min ((var_1_45 - (var_1_111 - var_1_25)) , var_1_46));
	} else {
		var_1_110 = (min ((max (var_1_111 , (abs (var_1_23)))) , var_1_46));
	}


	// From: CodeObject46
	if (! ((var_1_74 || var_1_76) && var_1_38)) {
		var_1_112 = var_1_76;
	} else {
		var_1_112 = (var_1_42 && var_1_113);
	}


	// From: CodeObject47
	var_1_114 = 255.5f;


	// From: CodeObject48
	if (var_1_76) {
		var_1_115 = -4;
	}


	// From: CodeObject49
	if (var_1_105) {
		var_1_116 = var_1_44;
	}


	// From: CodeObject50
	if (var_1_113) {
		var_1_117 = var_1_53;
	}


	// From: CodeObject51
	var_1_118 = var_1_25;


	// From: CodeObject52
	if (var_1_28) {
		var_1_119 = var_1_79;
	} else {
		var_1_119 = var_1_25;
	}


	// From: CodeObject53
	var_1_120 = var_1_46;


	// From: CodeObject54
	if (var_1_74) {
		var_1_121 = var_1_122;
	}


	// From: CodeObject55
	if (var_1_104) {
		var_1_123 = var_1_35;
	} else {
		var_1_123 = var_1_40;
	}


	// From: CodeObject56
	if (var_1_104) {
		var_1_124 = var_1_42;
	} else {
		var_1_124 = var_1_105;
	}


	// From: CodeObject57
	if (var_1_75) {
		var_1_125 = var_1_34;
	} else {
		var_1_125 = var_1_40;
	}


	// From: CodeObject58
	if (var_1_76) {
		var_1_126 = 0;
	}


	// From: CodeObject59
	if (var_1_62 >= var_1_86) {
		if (var_1_106 > ((var_1_87 >> var_1_119) + (var_1_44 - var_1_20))) {
			var_1_127 = (var_1_25 + var_1_79);
		}
	}


	// From: Req2Batch89PS_CN_500
	signed long int stepLocal_1 = last_1_var_1_18;
	signed long int stepLocal_0 = last_1_var_1_18;
	if (stepLocal_1 >= (last_1_var_1_18 / var_1_9)) {
		if (stepLocal_0 < (last_1_var_1_1 * 256)) {
			var_1_8 = (min (last_1_var_1_12 , (min (128 , last_1_var_1_12))));
		} else {
			var_1_8 = last_1_var_1_12;
		}
	} else {
		var_1_8 = last_1_var_1_12;
	}


	// From: Req6Batch89PS_CN_500
	var_1_18 = var_1_8;


	// From: Req3Batch89PS_CN_500
	if (var_1_10 < var_1_18) {
		if (last_1_var_1_12 <= (5 - last_1_var_1_12)) {
			var_1_12 = var_1_13;
		} else {
			if (last_1_var_1_12 == var_1_8) {
				var_1_12 = var_1_13;
			} else {
				var_1_12 = var_1_13;
			}
		}
	}


	// From: Req4Batch89PS_CN_500
	unsigned short int stepLocal_2 = var_1_8;
	if (stepLocal_2 > ((min (var_1_8 , var_1_8)) + var_1_12)) {
		if (! (var_1_8 >= var_1_12)) {
			if (var_1_4) {
				var_1_14 = 0;
			} else {
				var_1_14 = var_1_15;
			}
		} else {
			var_1_14 = var_1_15;
		}
	}


	// From: Req1Batch89PS_CN_500
	if (var_1_18 != var_1_12) {
		if (var_1_14) {
			var_1_1 = (min ((max (-5 , var_1_12)) , (min (var_1_8 , var_1_18))));
		}
	}


	// From: Req5Batch89PS_CN_500
	if (var_1_14) {
		if (var_1_15) {
			var_1_16 = var_1_17;
		} else {
			var_1_16 = (max (((max (25.8 , 7.5)) - 50.25) , var_1_17));
		}
	} else {
		if (var_1_14) {
			var_1_16 = 5.2;
		} else {
			var_1_16 = var_1_17;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 255);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 255);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= -2147483648);
	assume_abort_if_not(var_1_22 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 9);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854765600e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854765600e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 2147483647);
	assume_abort_if_not(var_1_34 <= 4294967294);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 16383);
	assume_abort_if_not(var_1_37 <= 32767);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 32767);
	assume_abort_if_not(var_1_39 <= 65535);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 65535);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 127);
	assume_abort_if_not(var_1_45 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 255);
	assume_abort_if_not(var_1_48 != 0);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -461168.6018427382800e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -230584.3009213691390e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691390e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= -230584.3009213691390e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691390e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= -461168.6018427382800e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427382800e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854776000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854776000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854765600e+12F && var_1_64 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 1);
	var_1_68 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_68 >= -922337.2036854765600e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854765600e+12F && var_1_68 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854765600e+12F && var_1_70 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 0);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 0);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 0);
	var_1_78 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_78 >= -31);
	assume_abort_if_not(var_1_78 <= 31);
	var_1_79 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_79 >= -63);
	assume_abort_if_not(var_1_79 <= 63);
	var_1_81 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_81 >= 16383);
	assume_abort_if_not(var_1_81 <= 32766);
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= 4611686.018427382800e+12F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854765600e+12F && var_1_83 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_86 >= -922337.2036854776000e+13F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 9223372.036854776000e+12F && var_1_86 >= 1.0e-20F ));
	var_1_88 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_88 >= -2147483648);
	assume_abort_if_not(var_1_88 <= 2147483647);
	var_1_89 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_89 >= -2147483648);
	assume_abort_if_not(var_1_89 <= 2147483647);
	var_1_91 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_91 >= -922337.2036854776000e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 9223372.036854776000e+12F && var_1_91 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_92 >= -16383);
	assume_abort_if_not(var_1_92 <= 16383);
	var_1_93 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_93 >= -16383);
	assume_abort_if_not(var_1_93 <= 16383);
	var_1_96 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_96 >= -32768);
	assume_abort_if_not(var_1_96 <= 32767);
	var_1_99 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_99 >= -922337.2036854776000e+13F && var_1_99 <= -1.0e-20F) || (var_1_99 <= 9223372.036854776000e+12F && var_1_99 >= 1.0e-20F ));
	assume_abort_if_not(var_1_99 != 0.0F);
	var_1_105 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_105 >= 0);
	assume_abort_if_not(var_1_105 <= 0);
	var_1_108 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_108 >= -922337.2036854765600e+13F && var_1_108 <= -1.0e-20F) || (var_1_108 <= 9223372.036854765600e+12F && var_1_108 >= 1.0e-20F ));
	var_1_111 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_111 >= 63);
	assume_abort_if_not(var_1_111 <= 127);
	var_1_113 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_113 >= 0);
	assume_abort_if_not(var_1_113 <= 0);
	var_1_122 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_122 >= -922337.2036854765600e+13F && var_1_122 <= -1.0e-20F) || (var_1_122 <= 9223372.036854765600e+12F && var_1_122 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_18 = var_1_18;
}

int property() {
	return ((((((var_1_18 != var_1_12) ? (var_1_14 ? (var_1_1 == ((signed long int) (min ((max (-5 , var_1_12)) , (min (var_1_8 , var_1_18)))))) : 1) : 1) && ((last_1_var_1_18 >= (last_1_var_1_18 / var_1_9)) ? ((last_1_var_1_18 < (last_1_var_1_1 * 256)) ? (var_1_8 == ((unsigned short int) (min (last_1_var_1_12 , (min (128 , last_1_var_1_12)))))) : (var_1_8 == ((unsigned short int) last_1_var_1_12))) : (var_1_8 == ((unsigned short int) last_1_var_1_12)))) && ((var_1_10 < var_1_18) ? ((last_1_var_1_12 <= (5 - last_1_var_1_12)) ? (var_1_12 == ((unsigned char) var_1_13)) : ((last_1_var_1_12 == var_1_8) ? (var_1_12 == ((unsigned char) var_1_13)) : (var_1_12 == ((unsigned char) var_1_13)))) : 1)) && ((var_1_8 > ((min (var_1_8 , var_1_8)) + var_1_12)) ? ((! (var_1_8 >= var_1_12)) ? (var_1_4 ? (var_1_14 == ((unsigned char) 0)) : (var_1_14 == ((unsigned char) var_1_15))) : (var_1_14 == ((unsigned char) var_1_15))) : 1)) && (var_1_14 ? (var_1_15 ? (var_1_16 == ((double) var_1_17)) : (var_1_16 == ((double) (max (((max (25.8 , 7.5)) - 50.25) , var_1_17))))) : (var_1_14 ? (var_1_16 == ((double) 5.2)) : (var_1_16 == ((double) var_1_17))))) && (var_1_18 == ((signed short int) var_1_8))
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
