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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch33PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 8;
signed short int var_1_5 = -10;
unsigned short int var_1_7 = 256;
double var_1_8 = 4.58;
double var_1_9 = -0.1;
signed short int var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
signed char var_1_14 = -16;
signed char var_1_15 = 8;
signed char var_1_16 = 8;
signed char var_1_17 = 10;
signed char var_1_18 = 0;
unsigned long int var_1_19 = 16;
signed char var_1_20 = 10;
signed char var_1_21 = -50;
unsigned short int var_1_22 = 64;
unsigned short int var_1_23 = 2;
unsigned short int var_1_24 = 0;
signed long int var_1_25 = 64;
unsigned short int var_1_26 = 256;
double var_1_27 = 128.4;
unsigned char var_1_28 = 0;
double var_1_29 = -0.5;
double var_1_30 = 10.75;
float var_1_31 = 10.5;
double var_1_32 = 4.125;
double var_1_33 = 200.4;
double var_1_34 = 2.03;
double var_1_35 = 64.25;
unsigned long int var_1_36 = 5;
unsigned short int var_1_37 = 59808;
unsigned short int var_1_38 = 64;
unsigned long int var_1_39 = 4;
unsigned short int var_1_40 = 64;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 1;
signed short int var_1_44 = -256;
signed short int var_1_45 = 50;
signed short int var_1_46 = 4;
signed short int var_1_47 = 1;
signed char var_1_48 = 1;
signed char var_1_49 = 100;
unsigned char var_1_50 = 1;
signed char var_1_51 = -16;
signed char var_1_52 = -5;
unsigned short int var_1_53 = 47718;
double var_1_54 = 24.625;
double var_1_55 = 63.8;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 1;
double var_1_60 = 127.5;
signed long int var_1_61 = 64;
signed short int var_1_62 = 128;
signed char var_1_63 = -8;
signed char var_1_64 = 2;
signed char var_1_65 = 10;
signed long int var_1_66 = -64;
signed short int var_1_67 = 10000;
unsigned char var_1_68 = 2;
unsigned char var_1_69 = 0;
float var_1_70 = -0.2;
float var_1_71 = 9999999.5;
float var_1_72 = 0.25;
float var_1_73 = 16.5;
signed short int var_1_74 = -128;
signed char var_1_75 = -10;
unsigned char var_1_76 = 128;
unsigned char var_1_77 = 128;
unsigned char var_1_78 = 2;
unsigned char var_1_79 = 32;
unsigned short int var_1_80 = 500;
unsigned short int var_1_81 = 4;
float var_1_82 = 5.75;
unsigned short int var_1_83 = 128;
unsigned char var_1_84 = 128;
unsigned char var_1_85 = 1;
unsigned long int var_1_86 = 64;
unsigned short int var_1_87 = 8;
signed char var_1_88 = 64;
double var_1_89 = 63.5;
signed char var_1_90 = 5;
signed long int var_1_91 = 32;
double var_1_92 = 127.45;
unsigned char var_1_93 = 0;
unsigned char var_1_94 = 1;
unsigned char var_1_95 = 1;
signed char var_1_96 = 10;
signed char var_1_97 = -1;
signed char var_1_98 = 5;
signed long int var_1_99 = 50;
signed short int var_1_100 = -5;
unsigned char var_1_101 = 0;
unsigned char var_1_102 = 128;
float var_1_103 = 15.5;
signed long int var_1_104 = 128;
unsigned char var_1_105 = 128;
unsigned char var_1_106 = 200;
float var_1_107 = 127.318;
float var_1_108 = 0.0;
unsigned char var_1_109 = 8;
signed char var_1_110 = 25;
unsigned long int var_1_111 = 0;
double var_1_112 = 0.79;
unsigned char var_1_113 = 10;
float var_1_114 = 0.0;
float var_1_115 = 63.475;
unsigned char var_1_116 = 0;
signed long int var_1_117 = -5;
double var_1_118 = 255.2;
signed char var_1_119 = -8;
double var_1_120 = 0.0;
double var_1_121 = 127.5;
unsigned short int var_1_122 = 8;
unsigned short int var_1_123 = 256;
signed short int var_1_124 = 2;
float var_1_125 = 50.5;
signed short int var_1_126 = 10;
unsigned char var_1_127 = 0;
unsigned char var_1_128 = 1;
double var_1_129 = 4.75;
unsigned short int var_1_130 = 16;
unsigned short int var_1_131 = 128;
unsigned long int var_1_132 = 2;
signed long int var_1_133 = 4;
unsigned char var_1_134 = 1;
double var_1_135 = 0.0;
unsigned short int var_1_136 = 2;
unsigned char var_1_137 = 0;
signed char var_1_138 = -8;
signed long int var_1_139 = 2;
unsigned long int var_1_140 = 2;
signed char var_1_141 = 100;
signed long int var_1_142 = -5;
unsigned char var_1_143 = 10;
signed long int var_1_144 = -32;
float var_1_145 = 499.25;
float var_1_146 = 1.25;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_7 = 256;
signed short int last_1_var_1_11 = 0;
unsigned long int last_1_var_1_19 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((- (max (var_1_23 , var_1_24))) == var_1_25) {
		var_1_22 = var_1_26;
	}


	// From: CodeObject2
	if (var_1_28) {
		var_1_27 = (max (var_1_29 , var_1_30));
	} else {
		if ((- (128 ^ var_1_24)) >= var_1_23) {
			var_1_27 = (max (var_1_30 , var_1_29));
		}
	}


	// From: CodeObject3
	if (1 >= var_1_26) {
		if (var_1_27 >= var_1_29) {
			var_1_31 = (abs (var_1_29));
		}
	} else {
		if (10 <= var_1_26) {
			if (var_1_22 <= var_1_26) {
				if (var_1_27 <= (var_1_29 / var_1_32)) {
					var_1_31 = (min (var_1_30 , 1.2f));
				}
			}
		}
	}


	// From: CodeObject4
	if (! var_1_28) {
		if (((max (var_1_26 , var_1_23)) - 25) <= var_1_24) {
			var_1_33 = (abs (var_1_34 - var_1_35));
		}
	}


	// From: CodeObject5
	if ((var_1_32 > var_1_30) && var_1_28) {
		if ((var_1_37 - (abs (var_1_38))) <= var_1_25) {
			var_1_36 = ((abs (var_1_23)) + var_1_22);
		}
	}


	// From: CodeObject6
	if (! var_1_28) {
		if ((1.5 + var_1_29) < var_1_31) {
			var_1_39 = (min (var_1_23 , var_1_26));
		}
	}


	// From: CodeObject7
	if (var_1_24 < (var_1_38 ^ var_1_37)) {
		var_1_40 = var_1_26;
	} else {
		var_1_40 = (abs (var_1_26));
	}


	// From: CodeObject8
	if (((var_1_23 | var_1_25) | var_1_36) <= var_1_26) {
		var_1_41 = (var_1_28 || (var_1_42 || var_1_43));
	}


	// From: CodeObject9
	var_1_44 = ((var_1_45 + var_1_46) - var_1_47);


	// From: CodeObject10
	if (var_1_47 >= var_1_39) {
		if ((max (var_1_33 , 7.5f)) >= 4.8) {
			var_1_48 = (abs (abs (abs (var_1_49))));
		} else {
			var_1_48 = (abs (var_1_49));
		}
	} else {
		var_1_48 = var_1_49;
	}


	// From: CodeObject11
	if (var_1_37 >= ((var_1_53 - var_1_46) << var_1_38)) {
		var_1_50 = var_1_43;
	} else {
		if (var_1_32 < (10.75 / (max (var_1_54 , var_1_55)))) {
			var_1_50 = (! (! var_1_56));
		}
	}


	// From: CodeObject12
	if ((max ((abs (var_1_49)) , var_1_26)) <= (var_1_46 / (min (var_1_37 , var_1_52)))) {
		if (-32 < var_1_49) {
			var_1_57 = ((var_1_52 < var_1_22) && ((var_1_43 && var_1_56) || (var_1_42 && var_1_58)));
		} else {
			var_1_57 = var_1_59;
		}
	} else {
		var_1_57 = var_1_43;
	}


	// From: CodeObject13
	var_1_60 = ((abs (abs (var_1_34))) - var_1_35);


	// From: CodeObject14
	if (var_1_32 > 0.25) {
		var_1_61 = (abs (var_1_52));
	}


	// From: CodeObject15
	var_1_62 = (min ((min (var_1_52 , (var_1_51 + var_1_45))) , (var_1_47 - var_1_46)));


	// From: CodeObject16
	var_1_63 = (var_1_64 - var_1_65);


	// From: CodeObject17
	var_1_66 = var_1_51;


	// From: CodeObject18
	if (var_1_32 > var_1_34) {
		if (var_1_44 >= (~ var_1_52)) {
			var_1_67 = -4;
		}
	}


	// From: CodeObject19
	if (var_1_58 && (var_1_52 == (~ var_1_53))) {
		var_1_68 = ((abs (var_1_65)) + var_1_69);
	}


	// From: CodeObject20
	if ((abs (var_1_39 & var_1_25)) > var_1_66) {
		var_1_70 = ((var_1_71 + var_1_72) + var_1_73);
	}


	// From: CodeObject21
	if (var_1_64 >= ((var_1_22 + var_1_75) & 1)) {
		if ((var_1_76 - var_1_65) <= var_1_62) {
			var_1_74 = (-128 + var_1_63);
		}
	} else {
		var_1_74 = ((var_1_75 + var_1_76) + ((max (var_1_64 , var_1_69)) + var_1_48));
	}


	// From: CodeObject22
	if ((- (var_1_35 + var_1_73)) > 127.5) {
		if (var_1_58) {
			var_1_77 = (min ((max (var_1_69 , var_1_65)) , var_1_78));
		} else {
			if (var_1_50) {
				var_1_77 = (abs (var_1_69));
			}
		}
	}


	// From: CodeObject23
	if (! var_1_42) {
		var_1_79 = (abs (var_1_78));
	} else {
		if (var_1_34 <= (var_1_30 / var_1_55)) {
			if (((~ 2) ^ (var_1_38 << var_1_62)) <= ((max (var_1_74 , -16)) >> 8)) {
				var_1_79 = (abs (var_1_65));
			} else {
				var_1_79 = (max (4 , var_1_78));
			}
		}
	}


	// From: CodeObject24
	if (((var_1_68 & var_1_47) ^ var_1_36) >= var_1_40) {
		var_1_80 = (var_1_81 + var_1_78);
	}


	// From: CodeObject25
	if ((max (var_1_53 , var_1_83)) > var_1_38) {
		if ((var_1_65 + var_1_44) > (var_1_25 % var_1_37)) {
			var_1_82 = (min ((abs (var_1_72)) , var_1_34));
		}
	} else {
		var_1_82 = (abs (var_1_72 + (abs (var_1_71))));
	}


	// From: CodeObject26
	if (var_1_40 > (~ (min (var_1_24 , var_1_47)))) {
		if (var_1_50) {
			var_1_84 = (var_1_65 + var_1_69);
		} else {
			var_1_84 = (var_1_69 + (4 + var_1_85));
		}
	}


	// From: CodeObject27
	if (((min (var_1_84 , var_1_47)) % var_1_37) <= var_1_51) {
		var_1_86 = var_1_47;
	}


	// From: CodeObject28
	if (! (var_1_50 || (var_1_22 > var_1_40))) {
		var_1_87 = (max (var_1_77 , (abs (max (var_1_45 , var_1_68)))));
	} else {
		var_1_87 = (var_1_85 + var_1_81);
	}


	// From: CodeObject29
	if ((abs (var_1_52)) >= (var_1_25 ^ var_1_87)) {
		if ((max ((min (var_1_54 , var_1_31)) , var_1_34)) <= (var_1_35 - var_1_89)) {
			var_1_88 = (var_1_85 + var_1_90);
		}
	}


	// From: CodeObject30
	if ((min (var_1_31 , 49.25)) >= var_1_92) {
		if (var_1_24 != var_1_61) {
			var_1_91 = ((abs (var_1_79 - var_1_26)) + var_1_65);
		} else {
			var_1_91 = (var_1_78 - var_1_84);
		}
	}


	// From: CodeObject31
	if (var_1_41 || var_1_94) {
		var_1_93 = (var_1_59 && (var_1_43 && var_1_95));
	} else {
		var_1_93 = ((var_1_42 || var_1_95) && var_1_43);
	}


	// From: CodeObject32
	if (var_1_64 <= (var_1_37 >> var_1_77)) {
		if (var_1_88 > var_1_66) {
			var_1_96 = ((max (var_1_85 , var_1_90)) + var_1_97);
		} else {
			if (var_1_34 >= var_1_27) {
				var_1_96 = (max (var_1_65 , ((abs (50)) - (min (var_1_85 , var_1_98)))));
			}
		}
	}


	// From: CodeObject33
	if (var_1_76 >= var_1_44) {
		var_1_99 = (abs (abs (var_1_98)));
	}


	// From: CodeObject34
	if (var_1_57 && var_1_42) {
		var_1_100 = (abs (min (var_1_77 , (var_1_64 + var_1_88))));
	}


	// From: CodeObject35
	var_1_101 = (! var_1_56);


	// From: CodeObject36
	if (var_1_31 <= ((var_1_103 - var_1_35) + var_1_71)) {
		if (((var_1_65 + var_1_96) & (var_1_44 ^ var_1_78)) <= (~ (var_1_91 & var_1_75))) {
			if ((256u < var_1_46) && var_1_101) {
				var_1_102 = var_1_98;
			} else {
				if ((var_1_24 - var_1_26) < (var_1_104 ^ (var_1_87 >> var_1_99))) {
					var_1_102 = (abs (var_1_85));
				} else {
					var_1_102 = ((min (var_1_105 , (var_1_106 - var_1_85))) - (abs (32)));
				}
			}
		} else {
			var_1_102 = (max (var_1_98 , (abs (var_1_106))));
		}
	}


	// From: CodeObject37
	if (var_1_85 < (abs (var_1_81))) {
		if ((var_1_26 % var_1_106) == 32) {
			var_1_107 = (9.999999995E8f - (max ((var_1_108 - 4.5f) , (min (var_1_35 , var_1_34)))));
		} else {
			var_1_107 = (min (4.875f , (abs (var_1_73 + var_1_72))));
		}
	}


	// From: CodeObject38
	if (var_1_105 < var_1_65) {
		if ((abs (var_1_35)) <= var_1_31) {
			var_1_109 = var_1_65;
		}
	} else {
		var_1_109 = 8;
	}


	// From: CodeObject39
	if (((var_1_46 ^ 128) >= var_1_63) || var_1_43) {
		var_1_110 = ((min (var_1_98 , var_1_64)) - var_1_85);
	}


	// From: CodeObject40
	if (var_1_109 >= var_1_36) {
		if (var_1_76 <= var_1_44) {
			var_1_111 = (abs (var_1_87));
		}
	}


	// From: CodeObject41
	if (((var_1_24 * var_1_67) >> (abs (var_1_113))) < (var_1_38 | var_1_100)) {
		if ((abs (var_1_63 * var_1_76)) <= 32) {
			var_1_112 = (min (var_1_71 , var_1_29));
		} else {
			if (var_1_74 >= (var_1_98 - var_1_68)) {
				if (((var_1_114 - var_1_115) - var_1_34) < (min ((8.7 - var_1_89) , (var_1_107 * 32.5)))) {
					var_1_112 = (abs (var_1_73 + var_1_72));
				}
			}
		}
	}


	// From: CodeObject42
	if ((var_1_51 < -4) || ((var_1_31 + var_1_29) >= var_1_107)) {
		var_1_116 = (! var_1_56);
	}


	// From: CodeObject43
	if ((min (var_1_71 , var_1_115)) <= var_1_107) {
		if (var_1_34 <= var_1_27) {
			var_1_117 = (min ((abs (var_1_26)) , (min (var_1_67 , (var_1_83 - var_1_76)))));
		}
	} else {
		if (-4 >= (var_1_53 % (abs (var_1_106)))) {
			var_1_117 = (var_1_109 - var_1_65);
		}
	}


	// From: CodeObject44
	if (((~ var_1_119) / (min (10 , var_1_52))) > ((var_1_104 + var_1_44) % var_1_106)) {
		if (var_1_97 == (~ var_1_23)) {
			var_1_118 = (var_1_108 - var_1_35);
		} else {
			if (var_1_54 >= var_1_73) {
				if ((max (var_1_112 , var_1_89)) >= (var_1_35 + var_1_73)) {
					var_1_118 = ((abs (var_1_120 - var_1_34)) - (abs (var_1_72 + var_1_73)));
				} else {
					if (var_1_48 < var_1_22) {
						var_1_118 = var_1_108;
					}
				}
			}
		}
	} else {
		var_1_118 = var_1_71;
	}


	// From: CodeObject45
	if ((min (16u , 128u)) <= var_1_79) {
		var_1_122 = (min (var_1_47 , (abs (var_1_46))));
	}


	// From: CodeObject46
	if (var_1_42 || (var_1_121 < var_1_27)) {
		var_1_123 = (62828 - var_1_47);
	} else {
		var_1_123 = (var_1_84 + var_1_85);
	}


	// From: CodeObject47
	if (var_1_70 < ((var_1_115 + var_1_121) - var_1_125)) {
		var_1_124 = (max (var_1_77 , (max (var_1_64 , (var_1_78 - var_1_126)))));
	}


	// From: CodeObject48
	if ((var_1_49 ^ var_1_117) > var_1_25) {
		if (var_1_56) {
			var_1_127 = (var_1_128 && var_1_58);
		}
	}


	// From: CodeObject49
	if (var_1_42) {
		var_1_129 = var_1_108;
	}


	// From: CodeObject50
	if (var_1_41) {
		var_1_130 = var_1_68;
	}


	// From: CodeObject51
	var_1_131 = var_1_106;


	// From: CodeObject52
	if (var_1_95) {
		var_1_132 = 50u;
	} else {
		var_1_132 = var_1_22;
	}


	// From: CodeObject53
	var_1_133 = var_1_64;


	// From: CodeObject54
	if (var_1_28) {
		var_1_134 = var_1_58;
	} else {
		var_1_134 = var_1_95;
	}


	// From: CodeObject55
	var_1_135 = 64.5;


	// From: CodeObject56
	if (var_1_101) {
		var_1_136 = var_1_26;
	} else {
		var_1_136 = var_1_98;
	}


	// From: CodeObject57
	if (var_1_93) {
		var_1_137 = var_1_95;
	}


	// From: CodeObject58
	if (var_1_127) {
		var_1_138 = var_1_97;
	} else {
		var_1_138 = var_1_65;
	}


	// From: CodeObject59
	if (var_1_57) {
		var_1_139 = var_1_38;
	}


	// From: CodeObject60
	if (var_1_95) {
		var_1_140 = var_1_79;
	}


	// From: CodeObject61
	if (var_1_56) {
		var_1_141 = var_1_90;
	}


	// From: CodeObject62
	var_1_142 = var_1_53;


	// From: CodeObject63
	if (var_1_56) {
		var_1_143 = var_1_106;
	} else {
		var_1_143 = var_1_106;
	}


	// From: CodeObject64
	if (15.8 < var_1_135) {
		var_1_144 = (abs (min (var_1_109 , (var_1_85 - var_1_106))));
	}


	// From: CodeObject65
	var_1_145 = var_1_121;


	// From: CodeObject66
	var_1_146 = var_1_71;


	// From: Req1Batch33PS_CN_500
	unsigned long int stepLocal_1 = ~ (last_1_var_1_7 | last_1_var_1_19);
	signed long int stepLocal_0 = -10 + (min (last_1_var_1_7 , last_1_var_1_11));
	if ((- last_1_var_1_19) >= stepLocal_0) {
		if (stepLocal_1 >= last_1_var_1_11) {
			var_1_1 = last_1_var_1_19;
		}
	} else {
		var_1_1 = last_1_var_1_19;
	}


	// From: Req6Batch33PS_CN_500
	var_1_14 = (((max (var_1_15 , 1)) - var_1_16) + (var_1_17 - (4 + var_1_18)));


	// From: Req5Batch33PS_CN_500
	var_1_12 = (! ((var_1_14 < var_1_14) || var_1_13));


	// From: Req3Batch33PS_CN_500
	unsigned char stepLocal_2 = (32.6 * var_1_8) >= var_1_9;
	if (stepLocal_2 && var_1_12) {
		var_1_7 = var_1_1;
	}


	// From: Req2Batch33PS_CN_500
	var_1_5 = (max (var_1_1 , var_1_14));


	// From: Req7Batch33PS_CN_500
	if (last_1_var_1_19 >= var_1_5) {
		if ((var_1_17 + (- 256u)) >= (var_1_14 % (abs (500u)))) {
			if (last_1_var_1_19 >= ((max (var_1_15 , var_1_1)) / (min (var_1_20 , var_1_21)))) {
				var_1_19 = var_1_17;
			} else {
				var_1_19 = var_1_7;
			}
		} else {
			var_1_19 = var_1_16;
		}
	} else {
		var_1_19 = var_1_18;
	}


	// From: Req4Batch33PS_CN_500
	if (! (! (var_1_19 == var_1_19))) {
		var_1_11 = ((max (0 , var_1_7)) + 100);
	}
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 31);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -128);
	assume_abort_if_not(var_1_20 <= 127);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -128);
	assume_abort_if_not(var_1_21 <= 127);
	assume_abort_if_not(var_1_21 != 0);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65535);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854765600e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	assume_abort_if_not(var_1_32 != 0.0F);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 32767);
	assume_abort_if_not(var_1_37 <= 65535);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 32767);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 16383);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 16383);
	var_1_47 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 32766);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -126);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -128);
	assume_abort_if_not(var_1_51 <= 127);
	assume_abort_if_not(var_1_51 != 0);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -128);
	assume_abort_if_not(var_1_52 <= 127);
	assume_abort_if_not(var_1_52 != 0);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 32767);
	assume_abort_if_not(var_1_53 <= 65535);
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= -922337.2036854776000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
	assume_abort_if_not(var_1_54 != 0.0F);
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= -922337.2036854776000e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854776000e+12F && var_1_55 >= 1.0e-20F ));
	assume_abort_if_not(var_1_55 != 0.0F);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 0);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 0);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 1);
	assume_abort_if_not(var_1_59 <= 1);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= -1);
	assume_abort_if_not(var_1_64 <= 126);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 126);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 127);
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= -230584.3009213691390e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691390e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= -230584.3009213691390e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691390e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= -461168.6018427382800e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427382800e+12F && var_1_73 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= -128);
	assume_abort_if_not(var_1_75 <= 127);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 127);
	assume_abort_if_not(var_1_76 <= 255);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 254);
	var_1_81 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 32767);
	var_1_83 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 65535);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 63);
	var_1_89 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_89 >= 0.0F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 9223372.036854776000e+12F && var_1_89 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_90 >= -63);
	assume_abort_if_not(var_1_90 <= 63);
	var_1_92 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_92 >= -922337.2036854776000e+13F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 9223372.036854776000e+12F && var_1_92 >= 1.0e-20F ));
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 1);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 1);
	assume_abort_if_not(var_1_95 <= 1);
	var_1_97 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_97 >= -63);
	assume_abort_if_not(var_1_97 <= 63);
	var_1_98 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_98 >= 0);
	assume_abort_if_not(var_1_98 <= 126);
	var_1_103 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_103 >= 0.0F && var_1_103 <= -1.0e-20F) || (var_1_103 <= 9223372.036854776000e+12F && var_1_103 >= 1.0e-20F ));
	var_1_104 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_104 >= -2147483648);
	assume_abort_if_not(var_1_104 <= 2147483647);
	var_1_105 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_105 >= 127);
	assume_abort_if_not(var_1_105 <= 254);
	var_1_106 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_106 >= 190);
	assume_abort_if_not(var_1_106 <= 254);
	var_1_108 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_108 >= 4611686.018427382800e+12F && var_1_108 <= -1.0e-20F) || (var_1_108 <= 9223372.036854765600e+12F && var_1_108 >= 1.0e-20F ));
	var_1_113 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_113 >= 0);
	assume_abort_if_not(var_1_113 <= 32);
	var_1_114 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_114 >= 4611686.018427387900e+12F && var_1_114 <= -1.0e-20F) || (var_1_114 <= 9223372.036854776000e+12F && var_1_114 >= 1.0e-20F ));
	var_1_115 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_115 >= 0.0F && var_1_115 <= -1.0e-20F) || (var_1_115 <= 4611686.018427387900e+12F && var_1_115 >= 1.0e-20F ));
	var_1_119 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_119 >= -128);
	assume_abort_if_not(var_1_119 <= 127);
	var_1_120 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_120 >= 6917529.027641073700e+12F && var_1_120 <= -1.0e-20F) || (var_1_120 <= 9223372.036854765600e+12F && var_1_120 >= 1.0e-20F ));
	var_1_121 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_121 >= 0.0F && var_1_121 <= -1.0e-20F) || (var_1_121 <= 2305843.009213691390e+12F && var_1_121 >= 1.0e-20F ));
	var_1_125 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_125 >= 0.0F && var_1_125 <= -1.0e-20F) || (var_1_125 <= 9223372.036854776000e+12F && var_1_125 >= 1.0e-20F ));
	var_1_126 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_126 >= 0);
	assume_abort_if_not(var_1_126 <= 32766);
	var_1_128 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_128 >= 0);
	assume_abort_if_not(var_1_128 <= 1);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_19 = var_1_19;
}

int property() {
	return ((((((((- last_1_var_1_19) >= (-10 + (min (last_1_var_1_7 , last_1_var_1_11)))) ? (((~ (last_1_var_1_7 | last_1_var_1_19)) >= last_1_var_1_11) ? (var_1_1 == ((unsigned short int) last_1_var_1_19)) : 1) : (var_1_1 == ((unsigned short int) last_1_var_1_19))) && (var_1_5 == ((signed short int) (max (var_1_1 , var_1_14))))) && ((((32.6 * var_1_8) >= var_1_9) && var_1_12) ? (var_1_7 == ((unsigned short int) var_1_1)) : 1)) && ((! (! (var_1_19 == var_1_19))) ? (var_1_11 == ((signed short int) ((max (0 , var_1_7)) + 100))) : 1)) && (var_1_12 == ((unsigned char) (! ((var_1_14 < var_1_14) || var_1_13))))) && (var_1_14 == ((signed char) (((max (var_1_15 , 1)) - var_1_16) + (var_1_17 - (4 + var_1_18)))))) && ((last_1_var_1_19 >= var_1_5) ? (((var_1_17 + (- 256u)) >= (var_1_14 % (abs (500u)))) ? ((last_1_var_1_19 >= ((max (var_1_15 , var_1_1)) / (min (var_1_20 , var_1_21)))) ? (var_1_19 == ((unsigned long int) var_1_17)) : (var_1_19 == ((unsigned long int) var_1_7))) : (var_1_19 == ((unsigned long int) var_1_16))) : (var_1_19 == ((unsigned long int) var_1_18)))
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
