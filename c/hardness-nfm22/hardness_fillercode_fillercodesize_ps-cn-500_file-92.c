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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch92PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 100;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 10;
unsigned short int var_1_9 = 0;
unsigned short int var_1_10 = 53946;
unsigned short int var_1_11 = 1;
unsigned long int var_1_12 = 8;
double var_1_13 = 8.25;
signed long int var_1_14 = -256;
double var_1_15 = 0.19999999999999996;
signed long int var_1_16 = -16;
signed char var_1_17 = 1;
signed char var_1_18 = 4;
signed char var_1_19 = 64;
signed long int var_1_20 = 1;
signed long int var_1_21 = 1000000000;
unsigned char var_1_23 = 4;
signed short int var_1_24 = 128;
signed short int var_1_25 = 128;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 5;
unsigned char var_1_28 = 1;
signed char var_1_29 = -4;
signed char var_1_30 = -2;
unsigned char var_1_31 = 16;
unsigned char var_1_32 = 128;
float var_1_33 = 2.5;
float var_1_34 = 99.75;
float var_1_35 = -0.375;
unsigned char var_1_36 = 8;
signed short int var_1_37 = 10;
float var_1_38 = 255.5;
float var_1_39 = 63.25;
float var_1_40 = 25.2;
float var_1_41 = 64.75;
unsigned char var_1_42 = 2;
unsigned short int var_1_43 = 62847;
signed char var_1_44 = 5;
unsigned char var_1_45 = 128;
unsigned short int var_1_46 = 5;
unsigned short int var_1_47 = 2;
unsigned short int var_1_48 = 53190;
double var_1_49 = 64.4;
double var_1_50 = 0.0;
double var_1_51 = 100000000.6;
signed short int var_1_52 = 8;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 1;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 1;
signed long int var_1_60 = 32;
unsigned long int var_1_61 = 8;
unsigned char var_1_62 = 64;
unsigned char var_1_63 = 0;
unsigned long int var_1_64 = 2;
unsigned long int var_1_65 = 100000;
unsigned long int var_1_66 = 1147006628;
unsigned long int var_1_67 = 1671555058;
float var_1_68 = 1.5;
float var_1_69 = 128.5;
signed char var_1_70 = 1;
signed char var_1_71 = -1;
signed char var_1_72 = 5;
double var_1_73 = 0.8;
signed long int var_1_74 = 4;
unsigned short int var_1_75 = 1;
double var_1_76 = 7.125;
double var_1_77 = 255.6;
signed char var_1_78 = -64;
unsigned short int var_1_79 = 5;
unsigned short int var_1_80 = 58648;
signed char var_1_81 = -4;
unsigned char var_1_82 = 1;
unsigned char var_1_83 = 0;
unsigned char var_1_84 = 0;
unsigned char var_1_85 = 1;
unsigned char var_1_86 = 0;
unsigned char var_1_87 = 0;
unsigned char var_1_88 = 0;
unsigned char var_1_89 = 1;
double var_1_90 = 10.5;
signed char var_1_91 = -8;
unsigned char var_1_92 = 5;
float var_1_93 = 0.9;
float var_1_94 = 8.2;
float var_1_95 = 3.875;
unsigned char var_1_96 = 0;
unsigned short int var_1_97 = 16;
unsigned short int var_1_98 = 500;
unsigned long int var_1_99 = 32;
unsigned long int var_1_100 = 3246216425;
unsigned long int var_1_101 = 3799625484;
unsigned short int var_1_102 = 16;
unsigned short int var_1_103 = 2;
unsigned char var_1_104 = 0;
double var_1_105 = 31.75;
float var_1_106 = 10.2;
unsigned short int var_1_107 = 10;
signed long int var_1_108 = 25;
signed long int var_1_109 = 1;
unsigned char var_1_110 = 1;
unsigned long int var_1_111 = 1;
unsigned char var_1_112 = 0;
unsigned char var_1_113 = 0;
signed long int var_1_114 = 64;
float var_1_115 = 31.42;
double var_1_116 = 1000000000.875;
unsigned char var_1_117 = 1;
signed char var_1_118 = -2;
float var_1_119 = 255.25;
float var_1_120 = 15.5;
unsigned long int var_1_121 = 1;
float var_1_122 = 3.4;
float var_1_123 = 127.625;
signed char var_1_124 = 1;
unsigned long int var_1_125 = 4;
unsigned long int var_1_126 = 2;
unsigned char var_1_127 = 1;
signed long int var_1_128 = -128;
float var_1_129 = 9.8;
double var_1_130 = 5.08;
signed short int var_1_131 = -128;
unsigned char var_1_132 = 1;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 100;
unsigned long int last_1_var_1_12 = 8;
double last_1_var_1_13 = 8.25;
signed long int last_1_var_1_16 = -16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_24 + var_1_25) > 16) {
		var_1_23 = ((var_1_26 + 2) + var_1_27);
	} else {
		if ((~ var_1_25) <= var_1_27) {
			if (var_1_24 <= var_1_27) {
				var_1_23 = (min (0 , (min (var_1_26 , (abs (var_1_27))))));
			}
		} else {
			if (var_1_28) {
				var_1_23 = var_1_26;
			}
		}
	}


	// From: CodeObject2
	if (var_1_28) {
		var_1_29 = var_1_26;
	} else {
		var_1_29 = (abs (var_1_26));
	}


	// From: CodeObject3
	if (var_1_28) {
		if (((var_1_31 ^ var_1_23) & var_1_32) < (~ var_1_25)) {
			var_1_30 = (abs (var_1_26));
		} else {
			var_1_30 = (abs (var_1_26));
		}
	}


	// From: CodeObject4
	if (var_1_28) {
		if (var_1_29 <= var_1_25) {
			var_1_33 = (abs (var_1_34 + var_1_35));
		}
	}


	// From: CodeObject5
	if (var_1_32 >= (var_1_26 * var_1_25)) {
		if (var_1_25 <= (var_1_29 & var_1_32)) {
			var_1_36 = (abs (var_1_26));
		} else {
			var_1_36 = (16 + var_1_26);
		}
	} else {
		var_1_36 = (abs (max (var_1_26 , var_1_27)));
	}


	// From: CodeObject6
	if (! var_1_28) {
		var_1_37 = (abs (var_1_29 + var_1_26));
	} else {
		if (var_1_33 > (abs (var_1_35))) {
			var_1_37 = (abs (var_1_23));
		}
	}


	// From: CodeObject7
	if ((abs (10)) > var_1_29) {
		var_1_38 = (abs ((max (var_1_39 , 7.25f)) - var_1_40));
	}


	// From: CodeObject8
	if (var_1_36 != var_1_24) {
		if (var_1_29 <= ((min (var_1_37 , var_1_36)) << var_1_23)) {
			var_1_41 = (max (((abs (var_1_35)) - var_1_39) , var_1_34));
		} else {
			var_1_41 = (var_1_34 + var_1_35);
		}
	}


	// From: CodeObject9
	if ((var_1_43 - var_1_23) < (var_1_31 ^ (var_1_26 - var_1_27))) {
		var_1_42 = ((abs (var_1_27)) + var_1_26);
	}


	// From: CodeObject10
	if (! (var_1_26 != (var_1_25 % var_1_45))) {
		if (var_1_31 <= var_1_24) {
			var_1_44 = (abs (var_1_26));
		}
	}


	// From: CodeObject11
	if (var_1_45 <= var_1_26) {
		var_1_46 = (abs (var_1_32));
	}


	// From: CodeObject12
	if (var_1_25 > (abs (var_1_44 + var_1_30))) {
		if ((var_1_33 <= var_1_40) && var_1_28) {
			var_1_47 = (var_1_48 - var_1_32);
		}
	}


	// From: CodeObject13
	var_1_49 = ((var_1_50 - var_1_51) - (abs (var_1_34)));


	// From: CodeObject14
	if (var_1_28 && var_1_53) {
		var_1_52 = (max ((max (var_1_23 , var_1_44)) , ((abs (var_1_36)) + 2)));
	} else {
		if (var_1_45 > 4) {
			var_1_52 = (abs (var_1_45));
		}
	}


	// From: CodeObject15
	if (! var_1_28) {
		var_1_54 = (! var_1_55);
	} else {
		if (var_1_32 > ((max (64 , var_1_45)) << var_1_48)) {
			var_1_54 = var_1_56;
		} else {
			var_1_54 = ((var_1_56 || var_1_57) || var_1_58);
		}
	}


	// From: CodeObject16
	if (! (var_1_39 >= var_1_41)) {
		var_1_59 = var_1_55;
	} else {
		var_1_59 = (var_1_28 || (! (var_1_56 && var_1_57)));
	}


	// From: CodeObject17
	if ((var_1_40 * var_1_39) < (9.999999999999966E13f * (abs (var_1_38)))) {
		var_1_60 = (max ((min (var_1_29 , var_1_26)) , var_1_42));
	} else {
		var_1_60 = var_1_46;
	}


	// From: CodeObject18
	if (var_1_54) {
		var_1_61 = 10u;
	}


	// From: CodeObject19
	var_1_62 = var_1_26;


	// From: CodeObject20
	if (var_1_57) {
		var_1_63 = var_1_56;
	} else {
		var_1_63 = var_1_55;
	}


	// From: CodeObject21
	if (var_1_30 != ((var_1_26 - var_1_27) * var_1_36)) {
		var_1_64 = ((min ((abs (var_1_48)) , var_1_45)) + (min ((min (16u , var_1_36)) , var_1_65)));
	} else {
		var_1_64 = (abs ((var_1_66 + var_1_67) - var_1_27));
	}


	// From: CodeObject22
	if (500 < var_1_27) {
		var_1_68 = var_1_50;
	}


	// From: CodeObject23
	if (var_1_26 < (var_1_62 / var_1_45)) {
		var_1_69 = (min (var_1_39 , var_1_50));
	}


	// From: CodeObject24
	if (((abs (var_1_48)) - var_1_23) < var_1_47) {
		var_1_70 = (var_1_71 + var_1_72);
	}


	// From: CodeObject25
	if (var_1_31 <= (abs (var_1_42))) {
		var_1_73 = (abs (var_1_50));
	} else {
		var_1_73 = var_1_35;
	}


	// From: CodeObject26
	if (var_1_63) {
		var_1_74 = (min (var_1_43 , var_1_46));
	}


	// From: CodeObject27
	if (var_1_54) {
		var_1_75 = (max ((var_1_62 + 5) , (abs (var_1_27))));
	}


	// From: CodeObject28
	if (var_1_62 <= var_1_61) {
		var_1_76 = (max (var_1_50 , (var_1_34 + (var_1_51 - var_1_77))));
	} else {
		if ((var_1_75 & (max (50 , var_1_60))) < var_1_66) {
			if (var_1_54 && (var_1_29 >= (var_1_26 - var_1_27))) {
				if ((~ var_1_78) > var_1_26) {
					var_1_76 = (min ((abs (var_1_40)) , var_1_39));
				}
			}
		} else {
			var_1_76 = (abs (var_1_34));
		}
	}


	// From: CodeObject29
	if (var_1_71 >= var_1_52) {
		var_1_79 = ((abs (var_1_32 + var_1_31)) + var_1_27);
	} else {
		var_1_79 = ((max (var_1_48 , var_1_80)) - (max (var_1_45 , var_1_62)));
	}


	// From: CodeObject30
	if (var_1_80 >= var_1_23) {
		if (var_1_82 && var_1_59) {
			var_1_81 = (var_1_26 - 32);
		}
	} else {
		var_1_81 = (abs (var_1_71));
	}


	// From: CodeObject31
	var_1_83 = var_1_84;


	// From: CodeObject32
	if (var_1_49 >= var_1_76) {
		if (var_1_53 || (var_1_23 == var_1_37)) {
			var_1_85 = (((var_1_82 && var_1_83) && var_1_58) || var_1_56);
		} else {
			var_1_85 = (var_1_55 || var_1_86);
		}
	} else {
		var_1_85 = (var_1_86 && (var_1_63 && var_1_87));
	}


	// From: CodeObject33
	if (var_1_72 != var_1_26) {
		if (var_1_51 <= (max (var_1_39 , 31.75))) {
			if (var_1_54) {
				if (var_1_79 >= (var_1_61 ^ var_1_31)) {
					if (var_1_28) {
						var_1_88 = (var_1_55 && (var_1_86 && var_1_89));
					} else {
						var_1_88 = (var_1_58 || var_1_56);
					}
				}
			}
		}
	}


	// From: CodeObject34
	var_1_90 = (max (var_1_50 , var_1_34));


	// From: CodeObject35
	var_1_91 = ((max ((abs (var_1_72)) , var_1_71)) + -2);


	// From: CodeObject36
	var_1_92 = 2;


	// From: CodeObject37
	if (var_1_63 || (var_1_39 >= var_1_49)) {
		if (var_1_88) {
			if (var_1_83 && (var_1_42 < (var_1_78 % var_1_45))) {
				var_1_93 = (abs ((min (1.25f , var_1_39)) - var_1_77));
			}
		}
	} else {
		if ((abs (var_1_91)) > var_1_72) {
			if ((- (var_1_34 * var_1_39)) <= var_1_38) {
				var_1_93 = (abs (min (5.569f , (var_1_39 - 127.2f))));
			}
		}
	}


	// From: CodeObject38
	if (var_1_38 < (max (5.1f , (var_1_33 + var_1_51)))) {
		if (var_1_26 >= var_1_30) {
			var_1_94 = (min (var_1_51 , var_1_34));
		} else {
			if (var_1_89) {
				var_1_94 = (min (var_1_50 , (max ((abs (var_1_77)) , var_1_40))));
			}
		}
	} else {
		var_1_94 = (min (63.2f , (var_1_40 - var_1_51)));
	}


	// From: CodeObject39
	if (var_1_57) {
		if (var_1_83) {
			if (var_1_53) {
				var_1_95 = (min ((min (var_1_39 , (var_1_77 + var_1_34))) , var_1_51));
			}
		} else {
			var_1_95 = (var_1_35 + (var_1_77 - var_1_51));
		}
	} else {
		if ((var_1_34 * var_1_69) >= (max (var_1_90 , (var_1_38 + var_1_94)))) {
			if (((var_1_25 >= var_1_52) && (var_1_62 < var_1_47)) || (var_1_31 > var_1_74)) {
				var_1_95 = (max (var_1_35 , (abs (var_1_51))));
			}
		} else {
			if (var_1_75 < (var_1_62 * var_1_26)) {
				var_1_95 = (max (var_1_35 , var_1_39));
			}
		}
	}


	// From: CodeObject40
	if (var_1_73 <= (max (7.25 , (abs (var_1_95))))) {
		var_1_96 = (var_1_86 && (! var_1_84));
	} else {
		var_1_96 = ((var_1_89 && var_1_55) && (! var_1_56));
	}


	// From: CodeObject41
	if (var_1_84) {
		if (var_1_90 > var_1_68) {
			var_1_97 = (min (var_1_42 , var_1_98));
		}
	}


	// From: CodeObject42
	if ((max ((abs (var_1_45)) , (var_1_100 - var_1_66))) <= (~ (~ var_1_32))) {
		var_1_99 = (var_1_101 - var_1_26);
	}


	// From: CodeObject43
	if (var_1_82) {
		if (var_1_62 < var_1_78) {
			if (var_1_84) {
				var_1_102 = (max (var_1_92 , var_1_103));
			}
		} else {
			var_1_102 = (abs (abs (64)));
		}
	} else {
		var_1_102 = (abs (max (var_1_98 , var_1_92)));
	}


	// From: CodeObject44
	if (var_1_84) {
		var_1_104 = var_1_87;
	}


	// From: CodeObject45
	if (! var_1_104) {
		if (64.5 > (var_1_51 - var_1_77)) {
			if (var_1_57) {
				var_1_105 = (max (10.5 , var_1_40));
			} else {
				var_1_105 = (abs (abs (abs (var_1_35))));
			}
		} else {
			var_1_105 = (abs (min (var_1_34 , var_1_77)));
		}
	}


	// From: CodeObject46
	if ((64 % var_1_45) > (min (var_1_48 , -256))) {
		var_1_106 = (abs (var_1_50));
	}


	// From: CodeObject47
	if (var_1_99 < ((var_1_98 % var_1_66) >> (max (var_1_108 , var_1_109)))) {
		var_1_107 = (min (2 , (var_1_80 - var_1_27)));
	} else {
		if (var_1_28) {
			var_1_107 = var_1_98;
		}
	}


	// From: CodeObject48
	if (var_1_45 > var_1_108) {
		if (var_1_89) {
			var_1_110 = (((var_1_66 ^ var_1_31) < var_1_107) && (var_1_57 && (var_1_56 || var_1_58)));
		}
	}


	// From: CodeObject49
	if (var_1_55 && var_1_87) {
		var_1_111 = (min (var_1_23 , (max (var_1_80 , var_1_27))));
	}


	// From: CodeObject50
	if ((var_1_47 ^ (var_1_92 | var_1_101)) <= (var_1_107 * var_1_79)) {
		if (var_1_48 >= (var_1_32 ^ (var_1_46 | var_1_25))) {
			if (var_1_98 <= var_1_111) {
				var_1_112 = ((var_1_89 && (var_1_88 || var_1_55)) && (var_1_86 && var_1_113));
			}
		}
	}


	// From: CodeObject51
	if (var_1_83 || (var_1_23 >= var_1_66)) {
		if (var_1_60 > -100) {
			if (4.48f <= (max (var_1_90 , (max (var_1_38 , var_1_35))))) {
				if ((var_1_70 < var_1_101) && var_1_87) {
					var_1_114 = ((min (var_1_27 , var_1_48)) - (abs (var_1_102)));
				}
			} else {
				var_1_114 = (max (var_1_92 , var_1_91));
			}
		}
	}


	// From: CodeObject52
	if (var_1_63) {
		var_1_115 = (var_1_51 + 7.75f);
	} else {
		var_1_115 = var_1_39;
	}


	// From: CodeObject53
	if (var_1_117) {
		var_1_116 = var_1_77;
	}


	// From: CodeObject54
	if (var_1_85) {
		var_1_118 = var_1_72;
	}


	// From: CodeObject55
	if (var_1_83) {
		var_1_119 = var_1_120;
	}


	// From: CodeObject56
	if (var_1_57) {
		var_1_121 = var_1_62;
	}


	// From: CodeObject57
	var_1_122 = var_1_51;


	// From: CodeObject58
	var_1_123 = var_1_40;


	// From: CodeObject59
	if (var_1_113) {
		var_1_124 = -5;
	}


	// From: CodeObject60
	var_1_125 = var_1_26;


	// From: CodeObject61
	var_1_126 = var_1_67;


	// From: CodeObject62
	if (var_1_117) {
		var_1_127 = var_1_87;
	} else {
		var_1_127 = var_1_113;
	}


	// From: CodeObject63
	if (var_1_112) {
		var_1_128 = var_1_80;
	} else {
		var_1_128 = var_1_32;
	}


	// From: CodeObject64
	if (var_1_117) {
		var_1_129 = var_1_34;
	}


	// From: CodeObject65
	if (var_1_56) {
		var_1_130 = var_1_51;
	}


	// From: CodeObject66
	if (((var_1_30 + var_1_42) ^ var_1_124) >= (~ var_1_24)) {
		if (var_1_132 && (var_1_110 || var_1_127)) {
			var_1_131 = var_1_26;
		}
	} else {
		var_1_131 = -16;
	}


	// From: Req1Batch92PS_CN_500
	unsigned char stepLocal_0 = last_1_var_1_13 >= last_1_var_1_13;
	if ((last_1_var_1_12 == last_1_var_1_1) && stepLocal_0) {
		if (var_1_6) {
			if (var_1_7) {
				var_1_1 = (min (var_1_8 , var_1_9));
			} else {
				var_1_1 = (max (var_1_9 , var_1_8));
			}
		} else {
			var_1_1 = ((max (46167 , var_1_10)) - var_1_11);
		}
	} else {
		var_1_1 = var_1_10;
	}


	// From: Req2Batch92PS_CN_500
	if (((min (var_1_11 , 16)) >> var_1_10) >= last_1_var_1_16) {
		if (var_1_7) {
			var_1_12 = var_1_10;
		}
	}


	// From: Req5Batch92PS_CN_500
	var_1_17 = (4 - (min (var_1_18 , (var_1_19 - 1))));


	// From: Req6Batch92PS_CN_500
	unsigned long int stepLocal_4 = var_1_12;
	if (var_1_6) {
		var_1_20 = ((var_1_8 - (var_1_21 - var_1_11)) + var_1_10);
	} else {
		if ((~ var_1_19) == stepLocal_4) {
			var_1_20 = var_1_1;
		} else {
			var_1_20 = var_1_10;
		}
	}


	// From: Req4Batch92PS_CN_500
	unsigned char stepLocal_3 = var_1_6;
	unsigned char stepLocal_2 = var_1_6;
	if (stepLocal_2 && (var_1_9 < (var_1_10 + var_1_20))) {
		if (var_1_7 && stepLocal_3) {
			var_1_16 = var_1_10;
		}
	} else {
		var_1_16 = var_1_8;
	}


	// From: Req3Batch92PS_CN_500
	signed long int stepLocal_1 = (min (var_1_10 , var_1_1)) + (var_1_9 % var_1_14);
	if (stepLocal_1 >= (min (var_1_16 , var_1_8))) {
		var_1_13 = var_1_15;
	} else {
		var_1_13 = var_1_15;
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 63);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 536870911);
	assume_abort_if_not(var_1_21 <= 1073741823);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32768);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -32768);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 64);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 255);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 255);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -461168.6018427382800e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -461168.6018427382800e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 32767);
	assume_abort_if_not(var_1_43 <= 65535);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 255);
	assume_abort_if_not(var_1_45 != 0);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 32767);
	assume_abort_if_not(var_1_48 <= 65534);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 4611686.018427382800e+12F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427382800e+12F && var_1_51 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 1);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 0);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 0);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 0);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 2147483647);
	var_1_66 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_66 >= 1073741823);
	assume_abort_if_not(var_1_66 <= 2147483647);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 1073741824);
	assume_abort_if_not(var_1_67 <= 2147483647);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= -63);
	assume_abort_if_not(var_1_71 <= 63);
	var_1_72 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_72 >= -63);
	assume_abort_if_not(var_1_72 <= 63);
	var_1_77 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_77 >= 0.0F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 4611686.018427382800e+12F && var_1_77 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_78 >= -128);
	assume_abort_if_not(var_1_78 <= 127);
	var_1_80 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_80 >= 32767);
	assume_abort_if_not(var_1_80 <= 65534);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 1);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 0);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 1);
	assume_abort_if_not(var_1_86 <= 1);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 0);
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 1);
	assume_abort_if_not(var_1_89 <= 1);
	var_1_98 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_98 >= 0);
	assume_abort_if_not(var_1_98 <= 65534);
	var_1_100 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_100 >= 2147483647);
	assume_abort_if_not(var_1_100 <= 4294967295);
	var_1_101 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_101 >= 2147483647);
	assume_abort_if_not(var_1_101 <= 4294967294);
	var_1_103 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_103 >= 0);
	assume_abort_if_not(var_1_103 <= 65534);
	var_1_108 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_108 >= 0);
	assume_abort_if_not(var_1_108 <= 33);
	var_1_109 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_109 >= 0);
	assume_abort_if_not(var_1_109 <= 33);
	var_1_113 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_113 >= 1);
	assume_abort_if_not(var_1_113 <= 1);
	var_1_117 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_117 >= 0);
	assume_abort_if_not(var_1_117 <= 1);
	var_1_120 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_120 >= -922337.2036854765600e+13F && var_1_120 <= -1.0e-20F) || (var_1_120 <= 9223372.036854765600e+12F && var_1_120 >= 1.0e-20F ));
	var_1_132 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_132 >= 0);
	assume_abort_if_not(var_1_132 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_16 = var_1_16;
}

int property() {
	return (((((((last_1_var_1_12 == last_1_var_1_1) && (last_1_var_1_13 >= last_1_var_1_13)) ? (var_1_6 ? (var_1_7 ? (var_1_1 == ((unsigned short int) (min (var_1_8 , var_1_9)))) : (var_1_1 == ((unsigned short int) (max (var_1_9 , var_1_8))))) : (var_1_1 == ((unsigned short int) ((max (46167 , var_1_10)) - var_1_11)))) : (var_1_1 == ((unsigned short int) var_1_10))) && ((((min (var_1_11 , 16)) >> var_1_10) >= last_1_var_1_16) ? (var_1_7 ? (var_1_12 == ((unsigned long int) var_1_10)) : 1) : 1)) && ((((min (var_1_10 , var_1_1)) + (var_1_9 % var_1_14)) >= (min (var_1_16 , var_1_8))) ? (var_1_13 == ((double) var_1_15)) : (var_1_13 == ((double) var_1_15)))) && ((var_1_6 && (var_1_9 < (var_1_10 + var_1_20))) ? ((var_1_7 && var_1_6) ? (var_1_16 == ((signed long int) var_1_10)) : 1) : (var_1_16 == ((signed long int) var_1_8)))) && (var_1_17 == ((signed char) (4 - (min (var_1_18 , (var_1_19 - 1))))))) && (var_1_6 ? (var_1_20 == ((signed long int) ((var_1_8 - (var_1_21 - var_1_11)) + var_1_10))) : (((~ var_1_19) == var_1_12) ? (var_1_20 == ((signed long int) var_1_1)) : (var_1_20 == ((signed long int) var_1_10))))
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
