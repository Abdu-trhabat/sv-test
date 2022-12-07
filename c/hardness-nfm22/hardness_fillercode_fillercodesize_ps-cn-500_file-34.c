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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch34PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 128;
unsigned long int var_1_7 = 16;
unsigned long int var_1_9 = 32;
unsigned char var_1_10 = 16;
unsigned char var_1_11 = 8;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 1;
signed long int var_1_14 = -200;
signed short int var_1_15 = 0;
signed short int var_1_16 = 24637;
signed short int var_1_17 = 100;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 1;
signed long int var_1_20 = 10;
double var_1_22 = 128.75;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
double var_1_25 = 10.6;
double var_1_26 = 100.625;
unsigned char var_1_27 = 0;
double var_1_28 = 99.75;
unsigned char var_1_29 = 8;
unsigned long int var_1_30 = 8;
unsigned long int var_1_31 = 8;
unsigned long int var_1_32 = 64;
unsigned long int var_1_33 = 8;
unsigned char var_1_34 = 10;
unsigned char var_1_35 = 100;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
double var_1_44 = 99.625;
unsigned char var_1_45 = 0;
signed long int var_1_46 = -50;
signed long int var_1_47 = 10;
signed long int var_1_48 = -128;
signed long int var_1_49 = 16;
unsigned char var_1_50 = 0;
signed char var_1_51 = 10;
double var_1_52 = 256.1;
unsigned char var_1_53 = 1;
unsigned short int var_1_54 = 10;
double var_1_55 = 99999999999999.5;
double var_1_56 = 4.125;
double var_1_57 = 31.55;
signed short int var_1_58 = 2;
signed char var_1_59 = -64;
signed long int var_1_60 = -8;
signed char var_1_61 = -50;
double var_1_62 = 127.875;
float var_1_63 = 15.75;
signed short int var_1_64 = 32;
signed char var_1_65 = -64;
unsigned char var_1_66 = 128;
unsigned char var_1_67 = 5;
double var_1_68 = 1.2;
unsigned short int var_1_69 = 8;
unsigned short int var_1_70 = 31765;
unsigned char var_1_71 = 25;
signed char var_1_72 = -100;
signed char var_1_73 = 0;
signed char var_1_74 = 0;
signed long int var_1_75 = 0;
signed long int var_1_76 = 16;
signed short int var_1_77 = 32;
signed short int var_1_78 = -5;
signed long int var_1_79 = -100;
double var_1_80 = 0.0;
double var_1_81 = 15.5;
signed long int var_1_82 = 32;
unsigned char var_1_83 = 0;
float var_1_84 = 32.75;
unsigned char var_1_85 = 0;
unsigned char var_1_86 = 128;
unsigned char var_1_87 = 8;
unsigned char var_1_88 = 2;
float var_1_89 = 32.125;
signed short int var_1_90 = -500;
signed short int var_1_91 = -1;
double var_1_92 = 32.75;
unsigned char var_1_93 = 1;
signed char var_1_94 = 100;
unsigned char var_1_95 = 1;
unsigned char var_1_96 = 128;
unsigned char var_1_97 = 64;
unsigned char var_1_98 = 1;
unsigned char var_1_99 = 64;
signed long int var_1_100 = -128;
unsigned char var_1_101 = 16;
unsigned short int var_1_102 = 5;
signed char var_1_103 = -8;
float var_1_104 = 999999999999.625;
signed char var_1_105 = -32;
unsigned char var_1_106 = 4;
unsigned long int var_1_107 = 5;
unsigned long int var_1_108 = 2672152607;
float var_1_109 = 0.25;
float var_1_110 = 5.8;
float var_1_111 = 4.5;
signed short int var_1_112 = -16;
float var_1_113 = 100.5;
float var_1_114 = 49.25;
signed long int var_1_115 = -128;
unsigned short int var_1_116 = 2;
signed short int var_1_117 = 256;
unsigned char var_1_118 = 50;
unsigned char var_1_119 = 200;
signed long int var_1_120 = 16;
double var_1_121 = 16.1;
unsigned short int var_1_122 = 0;
unsigned short int var_1_123 = 100;
signed short int var_1_124 = 128;
signed char var_1_125 = -25;
unsigned char var_1_126 = 16;
signed long int var_1_127 = -2;
double var_1_128 = 31.6;
unsigned char var_1_129 = 1;
signed short int var_1_130 = 4;
signed short int var_1_131 = 10000;
unsigned short int var_1_132 = 100;
unsigned char var_1_133 = 64;
unsigned short int var_1_134 = 64;
unsigned long int var_1_135 = 4;
signed short int var_1_136 = 64;
double var_1_137 = 2.5;
unsigned long int var_1_138 = 100;
unsigned long int var_1_139 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_7 = 16;
unsigned char last_1_var_1_10 = 16;
signed long int last_1_var_1_14 = -200;
signed short int last_1_var_1_15 = 0;
signed short int last_1_var_1_17 = 100;
unsigned char last_1_var_1_18 = 1;
signed long int last_1_var_1_20 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_23) {
		if (var_1_24) {
			var_1_22 = (max (var_1_25 , var_1_26));
		} else {
			if (var_1_27) {
				var_1_22 = var_1_26;
			}
		}
	} else {
		var_1_22 = (abs (var_1_28 - (abs (var_1_25))));
	}


	// From: CodeObject2
	if ((max (var_1_30 , (max (var_1_31 , var_1_32)))) >= var_1_33) {
		if (var_1_23 && var_1_24) {
			var_1_29 = (min (var_1_34 , var_1_35));
		}
	}


	// From: CodeObject3
	if (var_1_34 > 200) {
		var_1_36 = ((var_1_37 || var_1_38) || var_1_39);
	}


	// From: CodeObject4
	if (var_1_25 >= (max (var_1_28 , var_1_26))) {
		if (var_1_27) {
			var_1_40 = (! 1);
		}
	} else {
		var_1_40 = (((var_1_32 ^ var_1_35) == var_1_30) || var_1_41);
	}


	// From: CodeObject5
	if (var_1_24) {
		if (var_1_33 > var_1_35) {
			var_1_42 = var_1_41;
		} else {
			if (var_1_35 < (abs (var_1_31))) {
				var_1_42 = (var_1_41 && var_1_43);
			}
		}
	}


	// From: CodeObject6
	if (var_1_28 < (max (var_1_22 , var_1_26))) {
		if (var_1_36) {
			var_1_44 = (abs (min (15.5 , var_1_26)));
		}
	}


	// From: CodeObject7
	if (var_1_38) {
		var_1_45 = (var_1_39 && (! var_1_41));
	}


	// From: CodeObject8
	if (! var_1_27) {
		var_1_46 = (min ((abs (var_1_35)) , var_1_34));
	}


	// From: CodeObject9
	if (var_1_33 > var_1_34) {
		if (var_1_24) {
			var_1_47 = (max (((abs (var_1_35)) - var_1_34) , (min (var_1_29 , var_1_48))));
		}
	} else {
		if ((abs (var_1_29)) > var_1_34) {
			if (var_1_32 > (var_1_31 & var_1_35)) {
				var_1_47 = (abs (abs (var_1_29 - var_1_34)));
			} else {
				var_1_47 = (var_1_29 + var_1_34);
			}
		} else {
			var_1_47 = (((max (var_1_29 , var_1_34)) + var_1_35) - var_1_49);
		}
	}


	// From: CodeObject10
	if ((var_1_26 >= var_1_28) || ((var_1_48 | var_1_46) > var_1_29)) {
		if (var_1_48 < var_1_46) {
			if ((min (var_1_28 , (99.5f + var_1_44))) < var_1_25) {
				var_1_50 = (! var_1_41);
			}
		}
	} else {
		if ((abs (var_1_51)) >= -5) {
			var_1_50 = (! (! (! var_1_39)));
		}
	}


	// From: CodeObject11
	if (var_1_45) {
		var_1_52 = var_1_25;
	} else {
		var_1_52 = var_1_25;
	}


	// From: CodeObject12
	if (var_1_30 <= var_1_33) {
		var_1_53 = (! var_1_43);
	} else {
		var_1_53 = (! var_1_41);
	}


	// From: CodeObject13
	if (var_1_49 < var_1_30) {
		if (var_1_49 <= var_1_34) {
			if ((abs (var_1_30)) >= (abs (2u))) {
				var_1_54 = ((abs (var_1_34)) + (abs (var_1_29)));
			} else {
				var_1_54 = (var_1_29 + var_1_35);
			}
		}
	}


	// From: CodeObject14
	var_1_55 = (var_1_56 + (abs (abs (var_1_57))));


	// From: CodeObject15
	if ((- var_1_56) > var_1_26) {
		var_1_58 = var_1_34;
	} else {
		var_1_58 = ((abs (var_1_29)) + (min (var_1_51 , var_1_35)));
	}


	// From: CodeObject16
	if (! var_1_43) {
		if ((abs (var_1_60)) <= var_1_58) {
			var_1_59 = var_1_61;
		}
	}


	// From: CodeObject17
	if (((min (var_1_46 , var_1_48)) & var_1_59) >= var_1_29) {
		if (-256 > (var_1_49 - (var_1_35 + var_1_54))) {
			var_1_62 = (abs (var_1_26));
		}
	}


	// From: CodeObject18
	if (var_1_38) {
		var_1_63 = (abs (var_1_26));
	} else {
		if (var_1_60 < (var_1_46 % -5)) {
			var_1_63 = var_1_57;
		} else {
			var_1_63 = var_1_28;
		}
	}


	// From: CodeObject19
	if (var_1_30 <= var_1_29) {
		if (var_1_38 || ((var_1_33 ^ var_1_65) <= var_1_35)) {
			var_1_64 = ((min (-256 , var_1_65)) + var_1_29);
		}
	}


	// From: CodeObject20
	if (-2 <= (var_1_61 ^ var_1_31)) {
		if ((var_1_34 - var_1_35) > (abs (var_1_54))) {
			var_1_66 = (abs (var_1_34));
		} else {
			if (((var_1_47 % var_1_67) >> var_1_34) <= (var_1_33 & (var_1_49 - 1000000000))) {
				var_1_66 = var_1_35;
			}
		}
	}


	// From: CodeObject21
	if (var_1_39) {
		var_1_68 = (abs (var_1_56));
	}


	// From: CodeObject22
	if (((max (var_1_22 , var_1_63)) < (min (7.25 , var_1_62))) || var_1_38) {
		if ((var_1_58 & var_1_66) <= var_1_65) {
			var_1_69 = (((min (30147 , var_1_70)) - var_1_67) + var_1_29);
		}
	} else {
		if ((var_1_66 & var_1_48) <= ((var_1_61 + var_1_60) & var_1_49)) {
			var_1_69 = (abs (var_1_35));
		}
	}


	// From: CodeObject23
	if ((min (50 , var_1_48)) > (max ((min (var_1_54 , -5)) , var_1_47))) {
		var_1_71 = (max (50 , (abs (50))));
	}


	// From: CodeObject24
	if (var_1_54 <= (var_1_49 / var_1_67)) {
		var_1_72 = (max ((abs (var_1_73 - var_1_74)) , var_1_61));
	}


	// From: CodeObject25
	if (var_1_68 < var_1_62) {
		if (64u > (var_1_33 >> var_1_32)) {
			var_1_75 = (min (var_1_70 , ((abs (var_1_51)) - var_1_76)));
		}
	}


	// From: CodeObject26
	if ((var_1_74 - var_1_73) <= var_1_72) {
		var_1_77 = (var_1_29 - var_1_35);
	} else {
		if (var_1_59 <= var_1_69) {
			var_1_77 = (min (var_1_34 , (abs (var_1_61))));
		} else {
			var_1_77 = var_1_78;
		}
	}


	// From: CodeObject27
	if ((- var_1_22) < ((abs (var_1_63)) - (var_1_80 - var_1_81))) {
		if (var_1_58 > var_1_47) {
			if (var_1_46 < (var_1_82 % var_1_70)) {
				if (var_1_36 && var_1_43) {
					var_1_79 = (abs (var_1_54 - var_1_35));
				}
			}
		} else {
			var_1_79 = var_1_66;
		}
	}


	// From: CodeObject28
	var_1_83 = ((var_1_38 || (var_1_71 > 16)) || var_1_41);


	// From: CodeObject29
	var_1_84 = (var_1_81 - var_1_28);


	// From: CodeObject30
	if (var_1_60 < var_1_47) {
		var_1_85 = (var_1_74 + var_1_73);
	} else {
		if (var_1_37) {
			if (var_1_50) {
				var_1_85 = (abs (var_1_34));
			} else {
				var_1_85 = (var_1_86 - (100 - (max (var_1_87 , var_1_88))));
			}
		}
	}


	// From: CodeObject31
	if (var_1_40) {
		var_1_89 = (abs (var_1_26));
	}


	// From: CodeObject32
	if ((var_1_54 | var_1_48) <= var_1_82) {
		if (var_1_45) {
			var_1_90 = (min (var_1_34 , var_1_91));
		}
	}


	// From: CodeObject33
	var_1_92 = (min (4.45 , var_1_81));


	// From: CodeObject34
	if ((var_1_32 ^ var_1_67) >= (min (var_1_75 , 50u))) {
		if (((var_1_73 & var_1_48) + var_1_94) > ((abs (var_1_69)) - (min (var_1_71 , var_1_76)))) {
			var_1_93 = (var_1_41 && (var_1_43 && var_1_95));
		}
	}


	// From: CodeObject35
	if (var_1_34 <= var_1_97) {
		if (var_1_98 || var_1_41) {
			var_1_96 = (abs (var_1_99));
		}
	} else {
		var_1_96 = ((abs (var_1_86)) - var_1_74);
	}


	// From: CodeObject36
	if (var_1_29 >= var_1_66) {
		var_1_100 = (max ((abs (abs (var_1_49))) , var_1_29));
	}


	// From: CodeObject37
	if (((var_1_46 * var_1_48) / 25) <= (max (var_1_61 , var_1_86))) {
		if (var_1_59 >= 0) {
			if ((var_1_64 / var_1_67) < var_1_35) {
				if (var_1_50) {
					var_1_101 = (abs (var_1_86));
				}
			}
		} else {
			if (var_1_87 > (var_1_86 - var_1_74)) {
				var_1_101 = (min (var_1_35 , var_1_99));
			}
		}
	} else {
		var_1_101 = (abs (var_1_73));
	}


	// From: CodeObject38
	if (var_1_95 && var_1_36) {
		if (var_1_76 > var_1_48) {
			var_1_102 = (max (var_1_73 , (abs (var_1_87))));
		}
	} else {
		if (((var_1_51 ^ var_1_91) / (abs (var_1_103))) <= var_1_31) {
			var_1_102 = ((min ((abs (var_1_86)) , var_1_34)) + var_1_73);
		}
	}


	// From: CodeObject39
	if (var_1_45) {
		if ((var_1_52 + 5.8) < (min ((min (var_1_92 , var_1_26)) , (2.5 - var_1_80)))) {
			var_1_104 = (var_1_57 + var_1_56);
		} else {
			if (var_1_24) {
				var_1_104 = var_1_57;
			}
		}
	}


	// From: CodeObject40
	if (var_1_97 < var_1_106) {
		if (var_1_45) {
			if (var_1_77 > ((var_1_90 / -64) & var_1_94)) {
				var_1_105 = var_1_61;
			}
		}
	}


	// From: CodeObject41
	if ((abs (max (1 , -128))) <= ((32 - var_1_97) + var_1_47)) {
		var_1_107 = (min ((var_1_108 - var_1_73) , var_1_88));
	}


	// From: CodeObject42
	var_1_109 = (var_1_57 + (abs (var_1_110 - var_1_111)));


	// From: CodeObject43
	if (var_1_110 == var_1_52) {
		var_1_112 = ((var_1_85 - var_1_97) + (max ((min (var_1_59 , var_1_88)) , var_1_96)));
	} else {
		var_1_112 = (abs (var_1_73 - var_1_96));
	}


	// From: CodeObject44
	if (var_1_72 == var_1_112) {
		var_1_113 = (var_1_110 - (min ((min (var_1_111 , var_1_81)) , (max (var_1_28 , var_1_114)))));
	} else {
		if (! var_1_23) {
			if (7.2f <= var_1_62) {
				var_1_113 = (min (var_1_110 , var_1_25));
			}
		} else {
			var_1_113 = var_1_56;
		}
	}


	// From: CodeObject45
	if (var_1_47 <= var_1_46) {
		var_1_115 = var_1_91;
	}


	// From: CodeObject46
	var_1_116 = (max ((var_1_86 + var_1_29) , var_1_73));


	// From: CodeObject47
	if (var_1_83) {
		if ((var_1_78 + var_1_112) <= (min ((var_1_86 ^ var_1_49) , (var_1_90 * var_1_71)))) {
			var_1_117 = (var_1_66 + (var_1_88 - var_1_86));
		}
	} else {
		if ((var_1_115 ^ var_1_60) > ((~ var_1_100) & var_1_116)) {
			var_1_117 = (abs (var_1_59));
		}
	}


	// From: CodeObject48
	if ((var_1_79 / var_1_86) > var_1_30) {
		if (var_1_96 <= var_1_102) {
			if ((min ((var_1_80 - 1.0000000006E9f) , var_1_111)) > var_1_52) {
				var_1_118 = var_1_74;
			}
		}
	} else {
		var_1_118 = ((max ((var_1_119 - var_1_87) , var_1_86)) - var_1_88);
	}


	// From: CodeObject49
	if (var_1_45 && var_1_95) {
		if (var_1_42) {
			var_1_120 = (abs (var_1_94));
		}
	} else {
		if (-16 >= var_1_48) {
			var_1_120 = (max (((var_1_86 - var_1_69) + var_1_96) , var_1_66));
		} else {
			if (var_1_69 >= var_1_54) {
				var_1_120 = var_1_106;
			} else {
				var_1_120 = var_1_74;
			}
		}
	}


	// From: CodeObject50
	if (var_1_24) {
		var_1_121 = var_1_81;
	} else {
		var_1_121 = var_1_25;
	}


	// From: CodeObject51
	if (var_1_27) {
		var_1_122 = var_1_123;
	} else {
		var_1_122 = var_1_88;
	}


	// From: CodeObject52
	if (var_1_41) {
		var_1_124 = var_1_103;
	}


	// From: CodeObject53
	if (var_1_93) {
		var_1_125 = var_1_74;
	}


	// From: CodeObject54
	var_1_126 = var_1_87;


	// From: CodeObject55
	if (var_1_24) {
		var_1_127 = var_1_34;
	}


	// From: CodeObject56
	var_1_128 = var_1_28;


	// From: CodeObject57
	if (var_1_45) {
		var_1_129 = var_1_95;
	}


	// From: CodeObject58
	if (var_1_37) {
		var_1_130 = var_1_131;
	} else {
		var_1_130 = var_1_103;
	}


	// From: CodeObject59
	if (var_1_27) {
		var_1_132 = var_1_29;
	} else {
		var_1_132 = var_1_67;
	}


	// From: CodeObject60
	if (var_1_39) {
		var_1_133 = 0;
	}


	// From: CodeObject61
	if (var_1_42) {
		var_1_134 = var_1_73;
	}


	// From: CodeObject62
	if (var_1_98) {
		var_1_135 = var_1_99;
	} else {
		var_1_135 = var_1_49;
	}


	// From: CodeObject63
	if ((var_1_119 % (max (var_1_67 , var_1_70))) < var_1_103) {
		var_1_136 = (var_1_133 - var_1_73);
	}


	// From: CodeObject64
	var_1_137 = var_1_111;


	// From: CodeObject65
	var_1_138 = var_1_108;


	// From: CodeObject66
	var_1_139 = var_1_101;


	// From: Req5Batch34PS_CN_500
	unsigned char stepLocal_3 = var_1_13;
	if ((max (last_1_var_1_14 , (last_1_var_1_20 | var_1_9))) > stepLocal_3) {
		var_1_15 = (max ((var_1_13 + var_1_11) , var_1_12));
	} else {
		var_1_15 = (var_1_13 - (max (last_1_var_1_20 , (var_1_16 - var_1_11))));
	}


	// From: Req7Batch34PS_CN_500
	if (var_1_15 > var_1_12) {
		var_1_18 = (! var_1_19);
	}


	// From: Req4Batch34PS_CN_500
	if (var_1_18) {
		var_1_14 = var_1_12;
	} else {
		var_1_14 = 64;
	}


	// From: Req1Batch34PS_CN_500
	if (last_1_var_1_18) {
		if (last_1_var_1_15 <= ((last_1_var_1_7 + last_1_var_1_20) + last_1_var_1_10)) {
			var_1_1 = (min (last_1_var_1_7 , last_1_var_1_20));
		}
	}


	// From: Req8Batch34PS_CN_500
	var_1_20 = last_1_var_1_17;


	// From: Req6Batch34PS_CN_500
	signed long int stepLocal_6 = var_1_1;
	signed long int stepLocal_5 = var_1_20;
	unsigned char stepLocal_4 = var_1_13;
	if (stepLocal_4 > var_1_1) {
		if (stepLocal_6 <= 32u) {
			if (stepLocal_5 <= last_1_var_1_17) {
				var_1_17 = var_1_16;
			} else {
				var_1_17 = -50;
			}
		} else {
			var_1_17 = var_1_11;
		}
	}


	// From: Req2Batch34PS_CN_500
	signed long int stepLocal_1 = var_1_20 + var_1_1;
	signed short int stepLocal_0 = var_1_17;
	if (stepLocal_0 == var_1_20) {
		if (stepLocal_1 > (var_1_15 % var_1_9)) {
			var_1_7 = var_1_20;
		} else {
			var_1_7 = var_1_1;
		}
	}


	// From: Req3Batch34PS_CN_500
	signed long int stepLocal_2 = (- var_1_1) + var_1_20;
	if (stepLocal_2 >= var_1_9) {
		var_1_10 = (var_1_11 + (var_1_12 + var_1_13));
	}
}



void updateVariables() {
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 4294967295);
	assume_abort_if_not(var_1_9 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 64);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32766);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854765600e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -922337.2036854765600e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967295);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 4294967295);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967295);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_48 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_48 >= -2147483647);
	assume_abort_if_not(var_1_48 <= 2147483646);
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 2147483646);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -127);
	assume_abort_if_not(var_1_51 <= 127);
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= -461168.6018427382800e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= -461168.6018427382800e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427382800e+12F && var_1_57 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_60 >= -2147483647);
	assume_abort_if_not(var_1_60 <= 2147483647);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= -127);
	assume_abort_if_not(var_1_61 <= 126);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -128);
	assume_abort_if_not(var_1_65 <= 127);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 255);
	assume_abort_if_not(var_1_67 != 0);
	var_1_70 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_70 >= 16383);
	assume_abort_if_not(var_1_70 <= 32767);
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 126);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 126);
	var_1_76 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 2147483646);
	var_1_78 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_78 >= -32767);
	assume_abort_if_not(var_1_78 <= 32766);
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= 4611686.018427387900e+12F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854776000e+12F && var_1_80 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_81 >= 0.0F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 4611686.018427387900e+12F && var_1_81 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_82 >= -2147483648);
	assume_abort_if_not(var_1_82 <= 2147483647);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 127);
	assume_abort_if_not(var_1_86 <= 254);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 63);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 63);
	var_1_91 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_91 >= -32767);
	assume_abort_if_not(var_1_91 <= 32766);
	var_1_94 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_94 >= -128);
	assume_abort_if_not(var_1_94 <= 127);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 1);
	assume_abort_if_not(var_1_95 <= 1);
	var_1_97 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_97 >= 0);
	assume_abort_if_not(var_1_97 <= 255);
	var_1_98 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_98 >= 0);
	assume_abort_if_not(var_1_98 <= 1);
	var_1_99 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_99 >= 0);
	assume_abort_if_not(var_1_99 <= 254);
	var_1_103 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_103 >= -127);
	assume_abort_if_not(var_1_103 <= 127);
	assume_abort_if_not(var_1_103 != 0);
	var_1_106 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 255);
	var_1_108 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_108 >= 2147483647);
	assume_abort_if_not(var_1_108 <= 4294967294);
	var_1_110 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_110 >= 0.0F && var_1_110 <= -1.0e-20F) || (var_1_110 <= 4611686.018427382800e+12F && var_1_110 >= 1.0e-20F ));
	var_1_111 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_111 >= 0.0F && var_1_111 <= -1.0e-20F) || (var_1_111 <= 4611686.018427382800e+12F && var_1_111 >= 1.0e-20F ));
	var_1_114 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_114 >= 0.0F && var_1_114 <= -1.0e-20F) || (var_1_114 <= 9223372.036854765600e+12F && var_1_114 >= 1.0e-20F ));
	var_1_119 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_119 >= 190);
	assume_abort_if_not(var_1_119 <= 254);
	var_1_123 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_123 >= 0);
	assume_abort_if_not(var_1_123 <= 65534);
	var_1_131 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_131 >= -32767);
	assume_abort_if_not(var_1_131 <= 32766);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_20 = var_1_20;
}

int property() {
	return (((((((last_1_var_1_18 ? ((last_1_var_1_15 <= ((last_1_var_1_7 + last_1_var_1_20) + last_1_var_1_10)) ? (var_1_1 == ((signed long int) (min (last_1_var_1_7 , last_1_var_1_20)))) : 1) : 1) && ((var_1_17 == var_1_20) ? (((var_1_20 + var_1_1) > (var_1_15 % var_1_9)) ? (var_1_7 == ((unsigned long int) var_1_20)) : (var_1_7 == ((unsigned long int) var_1_1))) : 1)) && ((((- var_1_1) + var_1_20) >= var_1_9) ? (var_1_10 == ((unsigned char) (var_1_11 + (var_1_12 + var_1_13)))) : 1)) && (var_1_18 ? (var_1_14 == ((signed long int) var_1_12)) : (var_1_14 == ((signed long int) 64)))) && (((max (last_1_var_1_14 , (last_1_var_1_20 | var_1_9))) > var_1_13) ? (var_1_15 == ((signed short int) (max ((var_1_13 + var_1_11) , var_1_12)))) : (var_1_15 == ((signed short int) (var_1_13 - (max (last_1_var_1_20 , (var_1_16 - var_1_11)))))))) && ((var_1_13 > var_1_1) ? ((var_1_1 <= 32u) ? ((var_1_20 <= last_1_var_1_17) ? (var_1_17 == ((signed short int) var_1_16)) : (var_1_17 == ((signed short int) -50))) : (var_1_17 == ((signed short int) var_1_11))) : 1)) && ((var_1_15 > var_1_12) ? (var_1_18 == ((unsigned char) (! var_1_19))) : 1)) && (var_1_20 == ((signed long int) last_1_var_1_17))
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
