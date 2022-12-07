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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch28PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 4;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 2;
unsigned char var_1_8 = 128;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 100;
signed short int var_1_11 = 10;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
signed long int var_1_15 = 128;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 5;
double var_1_18 = 3.6;
double var_1_19 = 31.45;
float var_1_20 = 50.25;
float var_1_21 = 9.8;
float var_1_22 = 4.65;
float var_1_23 = 99.65;
unsigned long int var_1_25 = 128;
double var_1_26 = 31.875;
double var_1_27 = 256.5;
double var_1_28 = 24.375;
unsigned long int var_1_29 = 100;
unsigned long int var_1_30 = 4230676174;
unsigned long int var_1_31 = 1;
signed char var_1_32 = 0;
float var_1_33 = 256.5;
double var_1_34 = 99999999999.8;
signed char var_1_35 = 10;
signed char var_1_36 = -1;
signed char var_1_37 = -2;
signed long int var_1_38 = -1;
unsigned char var_1_39 = 0;
signed short int var_1_40 = 10;
signed short int var_1_41 = 128;
signed long int var_1_42 = 2;
signed long int var_1_43 = 200;
unsigned char var_1_44 = 0;
signed char var_1_45 = 0;
unsigned long int var_1_46 = 32;
unsigned long int var_1_47 = 3936087834;
signed short int var_1_48 = 200;
signed short int var_1_49 = 64;
signed short int var_1_50 = 1;
signed char var_1_51 = 2;
signed char var_1_52 = 100;
signed char var_1_53 = 1;
signed char var_1_54 = 16;
signed short int var_1_55 = 100;
signed long int var_1_56 = 10;
unsigned char var_1_57 = 16;
unsigned char var_1_58 = 128;
unsigned char var_1_59 = 200;
unsigned long int var_1_60 = 32;
unsigned char var_1_61 = 8;
unsigned char var_1_62 = 1;
unsigned char var_1_63 = 0;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 1;
signed char var_1_66 = 16;
float var_1_67 = 25.75;
float var_1_68 = 16.8;
unsigned char var_1_69 = 0;
double var_1_70 = 128.3;
unsigned char var_1_71 = 0;
signed char var_1_72 = 100;
signed char var_1_73 = 64;
signed char var_1_74 = 32;
signed char var_1_75 = 4;
unsigned short int var_1_76 = 500;
float var_1_77 = 255.1;
float var_1_78 = 7.5;
double var_1_79 = 9999999.6;
double var_1_80 = 3.9;
float var_1_81 = 32.375;
signed short int var_1_82 = -25;
double var_1_83 = 499.8;
double var_1_84 = 3.7;
double var_1_85 = 3.8;
signed char var_1_86 = 64;
double var_1_87 = 10.75;
signed char var_1_88 = 8;
double var_1_89 = 50.25;
double var_1_90 = 5.75;
signed short int var_1_91 = 16;
unsigned char var_1_92 = 4;
signed long int var_1_93 = 256;
unsigned char var_1_94 = 0;
unsigned char var_1_95 = 0;
unsigned char var_1_96 = 0;
unsigned short int var_1_97 = 5;
double var_1_98 = 99999.2;
unsigned char var_1_99 = 128;
unsigned short int var_1_100 = 51499;
signed char var_1_101 = -16;
signed char var_1_102 = -50;
signed char var_1_103 = 5;
signed long int var_1_104 = -200;
signed char var_1_105 = -2;
double var_1_106 = 0.9;
signed char var_1_107 = -5;
signed short int var_1_108 = -8;
signed short int var_1_109 = -32;
signed char var_1_110 = -16;
double var_1_111 = 7.75;
signed long int var_1_112 = -256;
double var_1_113 = 255.7;
double var_1_114 = 1.5;
double var_1_115 = 7.7;
float var_1_116 = 32.4;
unsigned char var_1_117 = 0;
signed long int var_1_118 = 16;
unsigned short int var_1_119 = 4;
unsigned char var_1_120 = 10;
signed long int var_1_121 = -32;
float var_1_122 = 255.5;
unsigned char var_1_123 = 4;
double var_1_124 = 3.8;
unsigned short int var_1_125 = 5;
unsigned short int var_1_126 = 61432;
signed long int var_1_127 = -8;
double var_1_128 = 0.25;
unsigned long int var_1_129 = 4;
signed short int var_1_130 = -10;
double var_1_131 = 64.5;
unsigned char var_1_132 = 1;
double var_1_133 = 1.8;
signed long int var_1_134 = 50;
signed char var_1_135 = 5;
unsigned char var_1_136 = 0;
double var_1_137 = 5.25;
float var_1_138 = 10.5;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 4;
unsigned char last_1_var_1_6 = 4;
signed short int last_1_var_1_11 = 10;
signed long int last_1_var_1_15 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_26 < (max (var_1_27 , var_1_28))) {
		var_1_25 = (max (var_1_29 , (var_1_30 - var_1_31)));
	}


	// From: CodeObject2
	if (((25.75f / var_1_33) * var_1_28) <= (0.5 / var_1_34)) {
		var_1_32 = (var_1_35 + (max (var_1_36 , var_1_37)));
	} else {
		var_1_32 = -1;
	}


	// From: CodeObject3
	if (var_1_27 == var_1_33) {
		if (var_1_39) {
			if ((abs (var_1_40 - var_1_41)) > (max (var_1_25 , (var_1_35 << var_1_32)))) {
				var_1_38 = (abs (abs (var_1_40 - var_1_41)));
			} else {
				if (var_1_40 <= var_1_35) {
					var_1_38 = ((var_1_41 + var_1_40) - var_1_42);
				} else {
					var_1_38 = (max (var_1_43 , var_1_41));
				}
			}
		} else {
			if (var_1_44 && (var_1_45 == var_1_42)) {
				var_1_38 = (abs (var_1_35));
			} else {
				var_1_38 = ((min (var_1_40 , var_1_36)) + var_1_35);
			}
		}
	} else {
		var_1_38 = (abs (var_1_42));
	}


	// From: CodeObject4
	if ((-2 * 5) > ((var_1_37 << var_1_38) ^ var_1_41)) {
		var_1_46 = (min (var_1_29 , ((max (var_1_30 , var_1_47)) - var_1_40)));
	}


	// From: CodeObject5
	if ((25u % 32u) < var_1_42) {
		var_1_48 = ((8 + var_1_49) - var_1_50);
	}


	// From: CodeObject6
	if ((var_1_37 + var_1_50) <= var_1_46) {
		var_1_51 = (var_1_52 - (min (var_1_53 , var_1_54)));
	}


	// From: CodeObject7
	if ((abs (var_1_52)) < ((var_1_49 / var_1_56) * 8)) {
		if (var_1_31 > var_1_41) {
			var_1_55 = (var_1_53 - (abs (abs (8))));
		}
	} else {
		var_1_55 = (((max (var_1_53 , var_1_54)) - var_1_49) + var_1_35);
	}


	// From: CodeObject8
	if (var_1_36 == (var_1_50 & (var_1_49 ^ var_1_40))) {
		var_1_57 = ((max (var_1_58 , var_1_59)) - var_1_53);
	}


	// From: CodeObject9
	if (var_1_40 != (abs (var_1_58))) {
		var_1_60 = (abs (var_1_53));
	} else {
		if (var_1_59 > (var_1_46 / (var_1_61 + var_1_62))) {
			var_1_60 = (min (var_1_47 , ((1843829567u + 1153987947u) - 64u)));
		}
	}


	// From: CodeObject10
	if (var_1_36 >= ((var_1_42 / -5) & var_1_54)) {
		if (-1 > var_1_62) {
			if (var_1_49 < var_1_37) {
				var_1_63 = (var_1_64 && var_1_65);
			} else {
				if (var_1_42 > var_1_41) {
					if (var_1_36 >= (var_1_55 & (var_1_66 | var_1_53))) {
						if ((var_1_46 + var_1_31) >= var_1_41) {
							if (var_1_54 <= var_1_66) {
								var_1_63 = 0;
							}
						}
					} else {
						if ((abs (var_1_33)) <= (var_1_67 - var_1_68)) {
							var_1_63 = var_1_65;
						} else {
							var_1_63 = (((var_1_37 ^ var_1_46) > var_1_53) || ((var_1_47 >= var_1_29) || var_1_65));
						}
					}
				} else {
					var_1_63 = (var_1_64 && (var_1_65 && var_1_69));
				}
			}
		}
	} else {
		if ((var_1_34 * (var_1_28 / var_1_33)) < (var_1_68 - (min (var_1_67 , var_1_70)))) {
			if ((var_1_60 > var_1_49) && var_1_44) {
				if (var_1_48 <= var_1_38) {
					var_1_63 = (! (! (var_1_65 && var_1_71)));
				}
			} else {
				var_1_63 = (! var_1_71);
			}
		} else {
			var_1_63 = 0;
		}
	}


	// From: CodeObject11
	if ((var_1_64 || var_1_65) || var_1_63) {
		if (var_1_37 <= var_1_31) {
			var_1_72 = ((var_1_73 - (var_1_74 - var_1_75)) - (abs (-50)));
		}
	}


	// From: CodeObject12
	if (var_1_38 >= -128) {
		var_1_76 = var_1_49;
	}


	// From: CodeObject13
	if (var_1_66 == var_1_41) {
		var_1_77 = (abs (abs (var_1_78)));
	}


	// From: CodeObject14
	if (var_1_58 <= (abs (var_1_46))) {
		if (var_1_65 || var_1_71) {
			var_1_79 = (min ((max (var_1_78 , (abs (1000000.6)))) , (abs (var_1_80))));
		}
	}


	// From: CodeObject15
	var_1_81 = (abs (max (var_1_80 , var_1_78)));


	// From: CodeObject16
	if (var_1_29 <= var_1_61) {
		var_1_82 = var_1_36;
	}


	// From: CodeObject17
	if ((min (var_1_79 , var_1_28)) >= ((max (var_1_67 , var_1_68)) - 3.5)) {
		var_1_83 = 2.8;
	} else {
		if (var_1_36 > var_1_56) {
			if ((var_1_36 <= 10) && var_1_64) {
				var_1_83 = var_1_78;
			} else {
				if (var_1_49 >= (~ (var_1_46 >> var_1_53))) {
					var_1_83 = (var_1_84 + (abs (var_1_85)));
				}
			}
		} else {
			if (var_1_52 <= (var_1_53 % var_1_74)) {
				var_1_83 = (abs (var_1_85));
			}
		}
	}


	// From: CodeObject18
	var_1_86 = (var_1_53 - var_1_74);


	// From: CodeObject19
	if (var_1_39) {
		if (var_1_72 <= ((var_1_88 * var_1_45) % var_1_56)) {
			if ((var_1_53 + var_1_38) > var_1_49) {
				if ((abs (500.6)) > (max (var_1_84 , var_1_83))) {
					var_1_87 = (max ((var_1_84 + (min (127.5 , var_1_89))) , var_1_80));
				} else {
					var_1_87 = ((max ((abs (var_1_85)) , (abs (var_1_80)))) - var_1_90);
				}
			}
		} else {
			var_1_87 = var_1_80;
		}
	} else {
		var_1_87 = var_1_89;
	}


	// From: CodeObject20
	var_1_91 = var_1_53;


	// From: CodeObject21
	if (var_1_63) {
		var_1_92 = var_1_74;
	} else {
		var_1_92 = var_1_59;
	}


	// From: CodeObject22
	if (var_1_39) {
		var_1_93 = var_1_43;
	}


	// From: CodeObject23
	if (var_1_44) {
		var_1_94 = var_1_71;
	} else {
		var_1_94 = var_1_71;
	}


	// From: CodeObject24
	var_1_95 = var_1_71;


	// From: CodeObject25
	if (var_1_95) {
		var_1_96 = var_1_71;
	}


	// From: CodeObject26
	if (var_1_96) {
		var_1_97 = var_1_58;
	}


	// From: CodeObject27
	var_1_98 = var_1_78;


	// From: CodeObject28
	if ((abs (abs (var_1_35))) > (var_1_92 / (abs (var_1_74)))) {
		if (((var_1_50 + var_1_46) & (var_1_100 - var_1_92)) != (var_1_76 & 4u)) {
			if (var_1_98 >= var_1_77) {
				var_1_99 = ((max (var_1_73 , var_1_54)) + (min (var_1_62 , var_1_75)));
			}
		}
	}


	// From: CodeObject29
	if (var_1_94) {
		var_1_101 = (min ((max (var_1_52 , var_1_36)) , var_1_53));
	} else {
		var_1_101 = (min (var_1_102 , var_1_54));
	}


	// From: CodeObject30
	if (var_1_69) {
		if (var_1_34 > (max (var_1_77 , var_1_85))) {
			var_1_103 = (max (var_1_53 , ((max (var_1_35 , var_1_75)) + var_1_74)));
		} else {
			var_1_103 = var_1_102;
		}
	}


	// From: CodeObject31
	if (((var_1_75 % var_1_73) * (var_1_82 / var_1_56)) >= (~ (32 ^ var_1_61))) {
		if (var_1_39) {
			var_1_104 = var_1_92;
		}
	} else {
		if ((10 | var_1_35) < ((var_1_76 + var_1_99) / var_1_59)) {
			var_1_104 = (max (var_1_32 , (abs (var_1_97))));
		}
	}


	// From: CodeObject32
	if (var_1_48 > var_1_49) {
		var_1_105 = (abs (max (var_1_52 , var_1_37)));
	} else {
		var_1_105 = (min ((max (var_1_52 , var_1_102)) , (var_1_75 - var_1_54)));
	}


	// From: CodeObject33
	if ((1.0000000000071E11 + var_1_81) != ((var_1_34 + var_1_85) + var_1_68)) {
		var_1_106 = (min (var_1_89 , var_1_78));
	}


	// From: CodeObject34
	if (var_1_38 >= (abs (var_1_61))) {
		var_1_107 = (min ((abs (var_1_37)) , (min ((abs (var_1_35)) , var_1_102))));
	} else {
		if (var_1_104 > var_1_41) {
			var_1_107 = 100;
		}
	}


	// From: CodeObject35
	if (var_1_76 < (- (var_1_91 ^ 16))) {
		var_1_108 = var_1_51;
	} else {
		var_1_108 = (max ((var_1_37 + var_1_105) , 16));
	}


	// From: CodeObject36
	if (var_1_95 || (var_1_47 <= var_1_50)) {
		if ((max (var_1_83 , var_1_87)) < var_1_84) {
			if (var_1_101 >= (var_1_110 + (var_1_54 >> var_1_51))) {
				var_1_109 = (var_1_105 + var_1_53);
			} else {
				var_1_109 = (max (var_1_107 , (var_1_35 + (max (var_1_32 , var_1_62)))));
			}
		}
	} else {
		var_1_109 = (abs (var_1_50));
	}


	// From: CodeObject37
	if (var_1_51 > var_1_82) {
		var_1_111 = ((abs (var_1_113)) + (var_1_114 - var_1_115));
	} else {
		var_1_111 = (min ((abs (var_1_85)) , var_1_90));
	}


	// From: CodeObject38
	if (((var_1_55 | 10) >> var_1_88) >= (abs (var_1_109))) {
		if ((var_1_76 % (min (var_1_61 , var_1_100))) > var_1_97) {
			var_1_116 = (abs (var_1_115));
		} else {
			if (var_1_64) {
				var_1_116 = (abs (abs (abs (var_1_80))));
			} else {
				if (var_1_117) {
					var_1_116 = (min (15.4f , (abs (var_1_89))));
				}
			}
		}
	}


	// From: CodeObject39
	if (var_1_65) {
		if (var_1_90 > var_1_28) {
			if ((var_1_56 % var_1_119) < var_1_92) {
				var_1_118 = (abs (var_1_62));
			} else {
				var_1_118 = ((abs (var_1_66)) - 256);
			}
		}
	} else {
		if (! (var_1_71 && (var_1_106 >= var_1_115))) {
			var_1_118 = ((abs (min (var_1_50 , var_1_32))) + (min (var_1_55 , var_1_82)));
		}
	}


	// From: CodeObject40
	if ((var_1_61 | (~ var_1_25)) > var_1_57) {
		var_1_120 = (var_1_58 - var_1_74);
	}


	// From: CodeObject41
	if ((var_1_101 < var_1_76) && var_1_94) {
		if ((max (var_1_116 , var_1_106)) > ((- var_1_115) + var_1_26)) {
			var_1_121 = (max (((abs (var_1_58)) + var_1_91) , var_1_45));
		}
	}


	// From: CodeObject42
	if (var_1_79 < var_1_81) {
		if ((max (var_1_67 , 3.25)) >= (min (var_1_87 , var_1_85))) {
			if (var_1_85 < (var_1_115 - (abs (var_1_27)))) {
				if ((var_1_117 || var_1_39) && var_1_69) {
					var_1_122 = (min (var_1_114 , var_1_78));
				}
			}
		}
	}


	// From: CodeObject43
	if (var_1_124 >= var_1_68) {
		if ((~ (var_1_105 | var_1_62)) < var_1_112) {
			if (var_1_95) {
				var_1_123 = var_1_75;
			} else {
				var_1_123 = (min (16 , var_1_73));
			}
		}
	}


	// From: CodeObject44
	if (var_1_28 <= (var_1_111 * var_1_115)) {
		if (200 <= (min (var_1_32 , var_1_58))) {
			var_1_125 = var_1_74;
		}
	} else {
		var_1_125 = ((var_1_126 - (8 + var_1_54)) - var_1_57);
	}


	// From: CodeObject45
	if (var_1_25 >= ((min (var_1_42 , var_1_99)) % 64u)) {
		if (var_1_69) {
			if ((abs (abs (var_1_87))) > ((var_1_28 / var_1_34) + (min (var_1_70 , var_1_89)))) {
				if ((var_1_30 - var_1_40) <= ((var_1_25 >> var_1_105) / var_1_126)) {
					var_1_127 = var_1_105;
				}
			}
		}
	} else {
		var_1_127 = var_1_40;
	}


	// From: CodeObject46
	if (var_1_63) {
		var_1_128 = var_1_89;
	}


	// From: CodeObject47
	if (var_1_95) {
		var_1_129 = var_1_47;
	}


	// From: CodeObject48
	var_1_130 = var_1_59;


	// From: CodeObject49
	if (var_1_132) {
		var_1_131 = var_1_85;
	}


	// From: CodeObject50
	if (var_1_65) {
		var_1_133 = var_1_84;
	}


	// From: CodeObject51
	var_1_134 = var_1_86;


	// From: CodeObject52
	if (var_1_136) {
		var_1_135 = var_1_36;
	}


	// From: CodeObject53
	if (var_1_69) {
		var_1_137 = (min (var_1_78 , var_1_114));
	}


	// From: CodeObject54
	if (((var_1_70 + var_1_33) == var_1_79) || (var_1_69 || var_1_71)) {
		if (var_1_96 && var_1_117) {
			var_1_138 = var_1_89;
		}
	} else {
		var_1_138 = var_1_89;
	}


	// From: Req3Batch28PS_CN_500
	unsigned char stepLocal_2 = var_1_14;
	if (var_1_12) {
		if (var_1_13) {
			if ((last_1_var_1_6 > (~ var_1_10)) && stepLocal_2) {
				var_1_11 = (max (var_1_8 , (var_1_10 + last_1_var_1_15)));
			} else {
				var_1_11 = last_1_var_1_6;
			}
		} else {
			var_1_11 = var_1_8;
		}
	} else {
		var_1_11 = last_1_var_1_11;
	}


	// From: Req2Batch28PS_CN_500
	signed long int stepLocal_1 = last_1_var_1_1;
	if (stepLocal_1 < 5) {
		var_1_6 = (max ((min ((min (var_1_7 , var_1_8)) , var_1_9)) , var_1_10));
	} else {
		var_1_6 = var_1_10;
	}


	// From: Req1Batch28PS_CN_500
	unsigned char stepLocal_0 = var_1_6;
	if (var_1_11 <= stepLocal_0) {
		var_1_1 = (max ((min (var_1_11 , (max (var_1_6 , var_1_6)))) , var_1_6));
	}


	// From: Req6Batch28PS_CN_500
	signed long int stepLocal_5 = 0;
	if (var_1_13) {
		if (var_1_14) {
			if (var_1_12) {
				var_1_20 = (var_1_21 + (max (var_1_22 , var_1_23)));
			}
		} else {
			if (var_1_6 <= stepLocal_5) {
				var_1_20 = var_1_19;
			} else {
				var_1_20 = var_1_22;
			}
		}
	} else {
		var_1_20 = var_1_23;
	}


	// From: Req4Batch28PS_CN_500
	unsigned char stepLocal_3 = var_1_6;
	if (stepLocal_3 <= ((max (128 , var_1_16)) - var_1_17)) {
		var_1_15 = (max ((var_1_6 - var_1_6) , (min (var_1_8 , var_1_7))));
	} else {
		var_1_15 = var_1_11;
	}


	// From: Req5Batch28PS_CN_500
	unsigned short int stepLocal_4 = var_1_1;
	if (((200 << var_1_15) * (var_1_17 * var_1_7)) < stepLocal_4) {
		var_1_18 = var_1_19;
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 255);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -922337.2036854765600e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967294);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 2147483647);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	assume_abort_if_not(var_1_33 != 0.0F);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	assume_abort_if_not(var_1_34 != 0.0F);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -63);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -63);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -63);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 32767);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 32767);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 2147483646);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -2147483647);
	assume_abort_if_not(var_1_43 <= 2147483646);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -128);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 2147483647);
	assume_abort_if_not(var_1_47 <= 4294967294);
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 16383);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 32766);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -1);
	assume_abort_if_not(var_1_52 <= 126);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 126);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 126);
	var_1_56 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_56 >= -2147483648);
	assume_abort_if_not(var_1_56 <= 2147483647);
	assume_abort_if_not(var_1_56 != 0);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 127);
	assume_abort_if_not(var_1_58 <= 254);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 127);
	assume_abort_if_not(var_1_59 <= 254);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 1);
	assume_abort_if_not(var_1_61 <= 128);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 1);
	assume_abort_if_not(var_1_62 <= 127);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 1);
	assume_abort_if_not(var_1_64 <= 1);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 1);
	assume_abort_if_not(var_1_65 <= 1);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= -128);
	assume_abort_if_not(var_1_66 <= 127);
	var_1_67 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854776000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854776000e+12F && var_1_68 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 1);
	assume_abort_if_not(var_1_69 <= 1);
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854776000e+12F && var_1_70 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 0);
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= 62);
	assume_abort_if_not(var_1_73 <= 126);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= 31);
	assume_abort_if_not(var_1_74 <= 63);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 31);
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= -922337.2036854765600e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 9223372.036854765600e+12F && var_1_78 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= -922337.2036854765600e+13F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854765600e+12F && var_1_80 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_84 >= -461168.6018427382800e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427382800e+12F && var_1_84 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_85 >= -461168.6018427382800e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 4611686.018427382800e+12F && var_1_85 >= 1.0e-20F ));
	var_1_88 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_88 >= -128);
	assume_abort_if_not(var_1_88 <= 127);
	var_1_89 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_89 >= -461168.6018427382800e+13F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 4611686.018427382800e+12F && var_1_89 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_90 >= 0.0F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 9223372.036854765600e+12F && var_1_90 >= 1.0e-20F ));
	var_1_100 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_100 >= 32767);
	assume_abort_if_not(var_1_100 <= 65535);
	var_1_102 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_102 >= -127);
	assume_abort_if_not(var_1_102 <= 126);
	var_1_110 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_110 >= -128);
	assume_abort_if_not(var_1_110 <= 127);
	var_1_112 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_112 >= -2147483648);
	assume_abort_if_not(var_1_112 <= 2147483647);
	var_1_113 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_113 >= -461168.6018427382800e+13F && var_1_113 <= -1.0e-20F) || (var_1_113 <= 4611686.018427382800e+12F && var_1_113 >= 1.0e-20F ));
	var_1_114 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_114 >= 0.0F && var_1_114 <= -1.0e-20F) || (var_1_114 <= 4611686.018427382800e+12F && var_1_114 >= 1.0e-20F ));
	var_1_115 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_115 >= 0.0F && var_1_115 <= -1.0e-20F) || (var_1_115 <= 4611686.018427382800e+12F && var_1_115 >= 1.0e-20F ));
	var_1_117 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_117 >= 0);
	assume_abort_if_not(var_1_117 <= 1);
	var_1_119 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_119 >= 0);
	assume_abort_if_not(var_1_119 <= 65535);
	assume_abort_if_not(var_1_119 != 0);
	var_1_124 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_124 >= -922337.2036854776000e+13F && var_1_124 <= -1.0e-20F) || (var_1_124 <= 9223372.036854776000e+12F && var_1_124 >= 1.0e-20F ));
	var_1_126 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_126 >= 49150);
	assume_abort_if_not(var_1_126 <= 65534);
	var_1_132 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_132 >= 0);
	assume_abort_if_not(var_1_132 <= 1);
	var_1_136 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_136 >= 0);
	assume_abort_if_not(var_1_136 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_15 = var_1_15;
}

int property() {
	return ((((((var_1_11 <= var_1_6) ? (var_1_1 == ((unsigned short int) (max ((min (var_1_11 , (max (var_1_6 , var_1_6)))) , var_1_6)))) : 1) && ((last_1_var_1_1 < 5) ? (var_1_6 == ((unsigned char) (max ((min ((min (var_1_7 , var_1_8)) , var_1_9)) , var_1_10)))) : (var_1_6 == ((unsigned char) var_1_10)))) && (var_1_12 ? (var_1_13 ? (((last_1_var_1_6 > (~ var_1_10)) && var_1_14) ? (var_1_11 == ((signed short int) (max (var_1_8 , (var_1_10 + last_1_var_1_15))))) : (var_1_11 == ((signed short int) last_1_var_1_6))) : (var_1_11 == ((signed short int) var_1_8))) : (var_1_11 == ((signed short int) last_1_var_1_11)))) && ((var_1_6 <= ((max (128 , var_1_16)) - var_1_17)) ? (var_1_15 == ((signed long int) (max ((var_1_6 - var_1_6) , (min (var_1_8 , var_1_7)))))) : (var_1_15 == ((signed long int) var_1_11)))) && ((((200 << var_1_15) * (var_1_17 * var_1_7)) < var_1_1) ? (var_1_18 == ((double) var_1_19)) : 1)) && (var_1_13 ? (var_1_14 ? (var_1_12 ? (var_1_20 == ((float) (var_1_21 + (max (var_1_22 , var_1_23))))) : 1) : ((var_1_6 <= 0) ? (var_1_20 == ((float) var_1_19)) : (var_1_20 == ((float) var_1_22)))) : (var_1_20 == ((float) var_1_23)))
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
