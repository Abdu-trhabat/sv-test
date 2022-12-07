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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch70PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 5.05;
double var_1_6 = 0.0;
double var_1_7 = 49.5;
double var_1_8 = 16.75;
unsigned short int var_1_9 = 1;
unsigned long int var_1_11 = 8;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 32;
unsigned char var_1_15 = 50;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 32;
unsigned long int var_1_18 = 2;
unsigned long int var_1_19 = 3876014737;
unsigned char var_1_20 = 0;
unsigned short int var_1_21 = 25;
unsigned short int var_1_22 = 5;
unsigned short int var_1_23 = 8;
signed long int var_1_24 = 0;
unsigned short int var_1_25 = 5;
unsigned short int var_1_26 = 256;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
signed char var_1_29 = -4;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 1;
double var_1_32 = 15.9;
double var_1_33 = 24.5;
double var_1_34 = 8.125;
double var_1_35 = 1000000000.2;
signed short int var_1_36 = 0;
signed short int var_1_37 = 8;
signed short int var_1_38 = 4;
signed long int var_1_39 = -64;
signed long int var_1_40 = -10;
float var_1_41 = 3.8;
float var_1_42 = 3.6;
float var_1_43 = 127.25;
signed char var_1_44 = -1;
signed char var_1_45 = 64;
signed char var_1_46 = -8;
signed char var_1_47 = 0;
signed char var_1_48 = 25;
signed char var_1_49 = -8;
signed char var_1_50 = -2;
signed char var_1_51 = 25;
float var_1_52 = 127.75;
float var_1_53 = 255.5;
float var_1_54 = 32.4;
float var_1_55 = 100.09;
signed long int var_1_56 = 4;
unsigned char var_1_57 = 10;
unsigned long int var_1_58 = 100;
unsigned char var_1_59 = 10;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 16;
signed char var_1_62 = 10;
signed char var_1_63 = 0;
signed char var_1_64 = 4;
signed char var_1_65 = 4;
signed long int var_1_66 = 4;
signed long int var_1_67 = -1175678312;
unsigned char var_1_68 = 1;
unsigned char var_1_69 = 1;
unsigned char var_1_70 = 0;
signed char var_1_71 = 100;
unsigned char var_1_72 = 1;
unsigned short int var_1_73 = 10;
unsigned short int var_1_74 = 32;
unsigned short int var_1_75 = 8;
unsigned char var_1_76 = 1;
double var_1_77 = -0.875;
unsigned char var_1_78 = 1;
signed short int var_1_79 = -256;
unsigned char var_1_80 = 1;
unsigned short int var_1_81 = 2;
unsigned long int var_1_82 = 256;
unsigned char var_1_83 = 0;
unsigned short int var_1_84 = 4;
unsigned char var_1_85 = 1;
unsigned char var_1_86 = 0;
signed long int var_1_87 = 0;
signed long int var_1_88 = 1901562643;
unsigned long int var_1_89 = 32;
signed char var_1_90 = -1;
float var_1_91 = 63.25;
unsigned short int var_1_92 = 50;
double var_1_93 = 128.75;
double var_1_94 = 0.5;
unsigned char var_1_95 = 1;
double var_1_96 = 10.625;
double var_1_97 = 2.25;
double var_1_98 = 0.0;
double var_1_99 = 127.5;
float var_1_100 = 8.925;
unsigned char var_1_101 = 1;
signed short int var_1_102 = 8;
signed short int var_1_103 = 22234;
signed char var_1_104 = 8;
signed long int var_1_106 = 5;
unsigned short int var_1_107 = 100;
unsigned short int var_1_108 = 50475;
signed char var_1_109 = 50;
unsigned short int var_1_110 = 128;
unsigned long int var_1_111 = 2;
signed long int var_1_112 = 32;
signed char var_1_113 = 25;
signed short int var_1_114 = -100;
signed short int var_1_115 = 50;
unsigned short int var_1_116 = 4;
unsigned char var_1_117 = 8;
unsigned char var_1_118 = 128;
unsigned char var_1_119 = 0;
unsigned char var_1_120 = 0;
unsigned char var_1_121 = 0;
unsigned char var_1_122 = 0;
double var_1_123 = 0.0;
signed char var_1_124 = 10;
double var_1_125 = 5.25;
signed char var_1_126 = 0;
signed short int var_1_127 = 128;
float var_1_128 = -0.3;
signed char var_1_129 = -100;
signed char var_1_130 = 1;
signed short int var_1_131 = -2;
unsigned long int var_1_132 = 200;
unsigned char var_1_133 = 1;
signed short int var_1_134 = -128;
double var_1_135 = 3.85;
signed char var_1_136 = -2;
unsigned long int var_1_137 = 128;
signed long int var_1_138 = 1;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 5.05;
unsigned short int last_1_var_1_9 = 1;
unsigned long int last_1_var_1_11 = 8;
unsigned char last_1_var_1_14 = 32;
unsigned char last_1_var_1_20 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((min (var_1_22 , var_1_23)) > var_1_24) {
		var_1_21 = (min (((min (var_1_25 , 0)) + var_1_26) , 16));
	}


	// From: CodeObject2
	if ((var_1_23 <= var_1_22) && var_1_28) {
		if (! ((max (var_1_29 , var_1_23)) < (var_1_26 & var_1_24))) {
			var_1_27 = var_1_30;
		} else {
			if ((~ var_1_24) >= (var_1_29 & (abs (var_1_23)))) {
				var_1_27 = (var_1_28 || var_1_30);
			} else {
				var_1_27 = (var_1_30 || var_1_31);
			}
		}
	}


	// From: CodeObject3
	var_1_32 = (min ((abs (abs (var_1_33))) , (min (var_1_34 , var_1_35))));


	// From: CodeObject4
	if (var_1_34 >= (max (var_1_32 , 16.775))) {
		var_1_36 = (var_1_37 - var_1_38);
	}


	// From: CodeObject5
	if ((abs (var_1_24)) < var_1_25) {
		if (var_1_21 > var_1_38) {
			var_1_39 = ((abs (var_1_40)) - var_1_38);
		} else {
			var_1_39 = (abs (var_1_26));
		}
	}


	// From: CodeObject6
	if (var_1_39 < var_1_21) {
		var_1_41 = (499.75f - (min ((abs (var_1_35)) , var_1_42)));
	} else {
		if (var_1_22 > var_1_38) {
			var_1_41 = (var_1_42 - var_1_43);
		} else {
			var_1_41 = var_1_42;
		}
	}


	// From: CodeObject7
	if ((~ var_1_21) <= (min (var_1_39 , (-32 % -8)))) {
		if (((min (var_1_25 , var_1_37)) - var_1_26) <= var_1_36) {
			var_1_44 = (min (var_1_45 , var_1_46));
		} else {
			if (var_1_38 >= var_1_40) {
				var_1_44 = (abs (var_1_47));
			} else {
				var_1_44 = (abs (var_1_47));
			}
		}
	} else {
		if (var_1_28) {
			if (var_1_30 || var_1_27) {
				if (! (var_1_22 <= var_1_24)) {
					var_1_44 = -4;
				} else {
					var_1_44 = (abs (2));
				}
			}
		} else {
			if (var_1_43 <= var_1_33) {
				var_1_44 = (var_1_48 + (max ((abs (var_1_49)) , (min (var_1_50 , var_1_51)))));
			} else {
				if (var_1_45 < (var_1_51 << var_1_40)) {
					var_1_44 = (max (var_1_47 , (abs (abs (100)))));
				}
			}
		}
	}


	// From: CodeObject8
	if ((8 / -64) >= var_1_44) {
		if (4 >= var_1_51) {
			var_1_52 = ((var_1_53 + var_1_54) + var_1_55);
		}
	} else {
		var_1_52 = (abs (var_1_42));
	}


	// From: CodeObject9
	if ((var_1_24 % var_1_57) == 10) {
		if ((~ 1u) > (var_1_57 / var_1_58)) {
			var_1_56 = (abs (abs (var_1_48)));
		}
	} else {
		if (((var_1_40 | var_1_58) * 10) > (~ (var_1_25 / var_1_57))) {
			var_1_56 = (max (var_1_40 , var_1_23));
		} else {
			var_1_56 = var_1_51;
		}
	}


	// From: CodeObject10
	if (var_1_27) {
		var_1_59 = var_1_60;
	} else {
		var_1_59 = var_1_61;
	}


	// From: CodeObject11
	if (var_1_29 < var_1_24) {
		var_1_62 = ((var_1_63 + var_1_64) - var_1_65);
	} else {
		var_1_62 = (abs (var_1_47));
	}


	// From: CodeObject12
	if (var_1_26 <= (var_1_57 % (abs (var_1_58)))) {
		if (var_1_29 <= var_1_47) {
			var_1_66 = (max ((abs (var_1_46)) , ((abs (var_1_64)) - var_1_25)));
		}
	} else {
		var_1_66 = (var_1_23 - ((abs (var_1_67)) - var_1_63));
	}


	// From: CodeObject13
	if (var_1_26 > var_1_36) {
		if (var_1_28 && var_1_31) {
			var_1_68 = (var_1_30 && (var_1_27 || var_1_31));
		} else {
			var_1_68 = (var_1_31 || ((var_1_69 || var_1_30) && (! var_1_70)));
		}
	} else {
		if (var_1_44 > (var_1_51 % (abs (var_1_71)))) {
			var_1_68 = ((var_1_30 && var_1_72) && var_1_31);
		} else {
			var_1_68 = var_1_70;
		}
	}


	// From: CodeObject14
	var_1_73 = (abs (max (var_1_59 , var_1_74)));


	// From: CodeObject15
	if (var_1_70) {
		var_1_75 = (abs (min ((min (var_1_60 , var_1_63)) , (min (var_1_59 , var_1_65)))));
	}


	// From: CodeObject16
	if (var_1_22 > (var_1_74 / var_1_57)) {
		if ((var_1_52 * 7.25) <= (var_1_34 / (abs (var_1_77)))) {
			var_1_76 = (! var_1_70);
		} else {
			var_1_76 = ((var_1_64 <= var_1_45) || var_1_30);
		}
	}


	// From: CodeObject17
	if ((~ (var_1_37 * var_1_64)) < (var_1_67 | (abs (var_1_38)))) {
		var_1_78 = ((! var_1_70) && var_1_30);
	}


	// From: CodeObject18
	if (var_1_44 > var_1_45) {
		var_1_79 = var_1_47;
	}


	// From: CodeObject19
	if ((var_1_54 * 2.281) == var_1_34) {
		var_1_80 = var_1_60;
	}


	// From: CodeObject20
	if (var_1_52 <= var_1_54) {
		var_1_81 = ((abs (var_1_60)) + var_1_61);
	} else {
		var_1_81 = (min (64 , var_1_57));
	}


	// From: CodeObject21
	if (var_1_51 > var_1_79) {
		var_1_82 = (abs (var_1_61));
	} else {
		if (! var_1_83) {
			var_1_82 = var_1_63;
		}
	}


	// From: CodeObject22
	if (! ((~ var_1_63) <= var_1_36)) {
		if (var_1_85 && var_1_86) {
			if (var_1_50 >= (var_1_26 | 64)) {
				var_1_84 = (abs (var_1_38));
			}
		} else {
			var_1_84 = (min ((abs (33793 - var_1_63)) , (max ((abs (var_1_64)) , var_1_25))));
		}
	} else {
		var_1_84 = (min ((37017 - (abs (var_1_61))) , var_1_25));
	}


	// From: CodeObject23
	if (var_1_68) {
		if ((abs (var_1_35 + var_1_77)) > (min ((abs (var_1_55)) , (min (1.8 , var_1_42))))) {
			var_1_87 = (var_1_37 - (var_1_88 - var_1_73));
		} else {
			var_1_87 = (var_1_88 - (max (var_1_63 , var_1_38)));
		}
	}


	// From: CodeObject24
	if (var_1_41 >= (- var_1_52)) {
		var_1_89 = (max ((max (var_1_61 , var_1_80)) , var_1_38));
	} else {
		var_1_89 = (min (((min (4u , 0u)) + var_1_81) , var_1_65));
	}


	// From: CodeObject25
	if (var_1_73 > var_1_88) {
		if ((abs (var_1_91)) > (- var_1_33)) {
			var_1_90 = ((max (var_1_49 , var_1_63)) + var_1_64);
		}
	}


	// From: CodeObject26
	if (var_1_81 >= ((var_1_80 % var_1_57) >> var_1_39)) {
		var_1_92 = (abs (abs (var_1_74)));
	}


	// From: CodeObject27
	if ((abs (24.25)) >= var_1_54) {
		var_1_93 = (min ((min ((max (var_1_53 , 4.6)) , var_1_94)) , (max ((var_1_42 - var_1_43) , var_1_34))));
	}


	// From: CodeObject28
	if (256.125 < (- var_1_54)) {
		var_1_95 = (! var_1_70);
	}


	// From: CodeObject29
	if (var_1_50 != (abs (var_1_65))) {
		if (var_1_33 != var_1_94) {
			var_1_96 = ((abs (var_1_97)) + ((abs (var_1_55)) - (var_1_98 - var_1_99)));
		}
	}


	// From: CodeObject30
	if (var_1_60 >= (max (var_1_39 , (var_1_88 & var_1_73)))) {
		var_1_100 = (var_1_43 - var_1_42);
	} else {
		if ((var_1_21 * var_1_62) > var_1_79) {
			if (var_1_64 < (min (var_1_82 , (max (var_1_84 , var_1_36))))) {
				var_1_100 = ((abs (var_1_97)) + var_1_54);
			}
		} else {
			if (var_1_59 >= (var_1_84 + var_1_26)) {
				if (var_1_101) {
					var_1_100 = (var_1_54 + var_1_99);
				}
			}
		}
	}


	// From: CodeObject31
	if ((var_1_60 <= var_1_40) && var_1_68) {
		if (var_1_41 >= var_1_52) {
			if (var_1_78) {
				var_1_102 = ((var_1_103 - (abs (var_1_61))) - var_1_38);
			} else {
				var_1_102 = var_1_60;
			}
		}
	}


	// From: CodeObject32
	if ((- 31.6f) < (max ((1.00000006E7f + 2.625f) , var_1_97))) {
		if (var_1_66 > (4 + var_1_106)) {
			if (var_1_55 < var_1_97) {
				var_1_104 = (abs (abs (var_1_47)));
			}
		}
	} else {
		var_1_104 = var_1_48;
	}


	// From: CodeObject33
	if (var_1_40 <= var_1_56) {
		if ((abs (abs (var_1_37))) >= (var_1_26 ^ var_1_56)) {
			var_1_107 = (min (var_1_64 , (var_1_108 - var_1_65)));
		}
	} else {
		if ((var_1_44 & var_1_51) != var_1_73) {
			var_1_107 = ((abs (var_1_108)) - (var_1_80 + 50));
		}
	}


	// From: CodeObject34
	if (var_1_31) {
		var_1_109 = (abs (var_1_65));
	}


	// From: CodeObject35
	if (var_1_86) {
		if (((min (var_1_24 , var_1_111)) >> var_1_103) < var_1_107) {
			if (var_1_27) {
				var_1_110 = (min (var_1_63 , (abs (var_1_80))));
			}
		}
	} else {
		var_1_110 = (min (var_1_74 , var_1_38));
	}


	// From: CodeObject36
	if (var_1_62 > (min (var_1_44 , (var_1_113 ^ var_1_45)))) {
		if ((var_1_41 * (max (var_1_33 , var_1_35))) > var_1_94) {
			var_1_112 = (var_1_108 - var_1_84);
		} else {
			var_1_112 = (abs (var_1_62));
		}
	}


	// From: CodeObject37
	if (var_1_22 > (max (var_1_26 , (var_1_108 & 32)))) {
		if (var_1_69) {
			var_1_114 = (max ((min (var_1_37 , var_1_50)) , (var_1_64 - var_1_63)));
		}
	} else {
		if (var_1_115 >= var_1_49) {
			var_1_114 = (max (var_1_80 , var_1_51));
		}
	}


	// From: CodeObject38
	if ((var_1_112 & var_1_37) < ((min (var_1_108 , var_1_26)) - var_1_92)) {
		var_1_116 = (var_1_57 + var_1_63);
	}


	// From: CodeObject39
	if (var_1_56 <= var_1_49) {
		if (((min (var_1_64 , var_1_63)) - var_1_65) >= var_1_29) {
			if ((min (var_1_55 , var_1_35)) > (var_1_96 / var_1_77)) {
				var_1_117 = (abs (var_1_118 - var_1_65));
			}
		}
	}


	// From: CodeObject40
	if (var_1_29 >= (abs (-5))) {
		if (var_1_75 < var_1_92) {
			if (var_1_83) {
				if ((var_1_39 + var_1_89) > (var_1_59 % (abs (16u)))) {
					if (var_1_89 <= var_1_81) {
						var_1_119 = (var_1_70 || (var_1_120 || (var_1_121 || var_1_122)));
					}
				} else {
					var_1_119 = ((var_1_103 > (abs (var_1_47))) && (! (var_1_68 || var_1_72)));
				}
			}
		} else {
			if (((var_1_123 - var_1_98) - var_1_99) >= 31.6) {
				var_1_119 = (var_1_28 && var_1_70);
			}
		}
	} else {
		var_1_119 = var_1_121;
	}


	// From: CodeObject41
	if (var_1_76) {
		var_1_124 = var_1_45;
	} else {
		var_1_124 = var_1_45;
	}


	// From: CodeObject42
	var_1_125 = var_1_97;


	// From: CodeObject43
	var_1_126 = var_1_47;


	// From: CodeObject44
	if (var_1_72) {
		var_1_127 = var_1_29;
	} else {
		var_1_127 = var_1_48;
	}


	// From: CodeObject45
	if (var_1_30) {
		var_1_128 = var_1_35;
	} else {
		var_1_128 = var_1_33;
	}


	// From: CodeObject46
	if (var_1_69) {
		var_1_129 = -8;
	}


	// From: CodeObject47
	if (var_1_119) {
		var_1_130 = var_1_64;
	} else {
		var_1_130 = var_1_65;
	}


	// From: CodeObject48
	var_1_131 = var_1_48;


	// From: CodeObject49
	if (var_1_69) {
		var_1_132 = 10u;
	} else {
		var_1_132 = var_1_57;
	}


	// From: CodeObject50
	if (var_1_28) {
		var_1_133 = var_1_30;
	}


	// From: CodeObject51
	var_1_134 = var_1_129;


	// From: CodeObject52
	if (var_1_76) {
		var_1_135 = 0.5700000000000001;
	}


	// From: CodeObject53
	if (var_1_30) {
		var_1_136 = var_1_48;
	}


	// From: CodeObject54
	if ((var_1_116 ^ var_1_61) <= var_1_62) {
		if (var_1_30) {
			if (-256 <= (abs (var_1_80))) {
				var_1_137 = var_1_61;
			} else {
				var_1_137 = (abs (var_1_26));
			}
		} else {
			var_1_137 = var_1_118;
		}
	}


	// From: CodeObject55
	var_1_138 = var_1_126;


	// From: Req6Batch70PS_CN_500
	if (var_1_13) {
		var_1_18 = ((var_1_19 - last_1_var_1_9) - last_1_var_1_11);
	} else {
		var_1_18 = (max ((var_1_19 - var_1_17) , var_1_15));
	}


	// From: Req2Batch70PS_CN_500
	if (var_1_6 > (min (var_1_8 , last_1_var_1_1))) {
		if (! ((last_1_var_1_1 == var_1_7) && (last_1_var_1_20 || last_1_var_1_20))) {
			if (! (var_1_6 <= var_1_7)) {
				var_1_9 = (min (last_1_var_1_14 , last_1_var_1_14));
			}
		} else {
			var_1_9 = last_1_var_1_14;
		}
	}


	// From: Req5Batch70PS_CN_500
	if ((8 - 64) <= (var_1_9 - var_1_9)) {
		var_1_14 = (min ((var_1_15 + var_1_16) , var_1_17));
	} else {
		var_1_14 = var_1_17;
	}


	// From: Req1Batch70PS_CN_500
	signed long int stepLocal_0 = - (min (var_1_9 , var_1_9));
	if (var_1_18 >= stepLocal_0) {
		var_1_1 = (((var_1_6 - var_1_7) - (max (64.75 , 128.725))) + var_1_8);
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req7Batch70PS_CN_500
	if ((var_1_14 / var_1_19) <= (min (var_1_18 , var_1_14))) {
		var_1_20 = var_1_13;
	}


	// From: Req4Batch70PS_CN_500
	if (var_1_20) {
		var_1_12 = var_1_13;
	}


	// From: Req3Batch70PS_CN_500
	var_1_11 = (var_1_9 + ((min (var_1_18 , var_1_9)) + 2u));
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 2305843.009213691390e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691390e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 3221225470);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 65535);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= -2147483648);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -128);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854765600e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= -1);
	assume_abort_if_not(var_1_37 <= 32766);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 32766);
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= -2147483646);
	assume_abort_if_not(var_1_40 <= 2147483646);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -127);
	assume_abort_if_not(var_1_45 <= 126);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -127);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -126);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -63);
	assume_abort_if_not(var_1_48 <= 63);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -63);
	assume_abort_if_not(var_1_49 <= 63);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= -63);
	assume_abort_if_not(var_1_50 <= 63);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -63);
	assume_abort_if_not(var_1_51 <= 63);
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= -230584.3009213691390e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 2305843.009213691390e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -230584.3009213691390e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691390e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= -461168.6018427382800e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 255);
	assume_abort_if_not(var_1_57 != 0);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 4294967295);
	assume_abort_if_not(var_1_58 != 0);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 254);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 254);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 63);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 63);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 126);
	var_1_67 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_67 >= -2147483646);
	assume_abort_if_not(var_1_67 <= -1073741823);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 1);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 0);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= -127);
	assume_abort_if_not(var_1_71 <= 127);
	assume_abort_if_not(var_1_71 != 0);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 1);
	assume_abort_if_not(var_1_72 <= 1);
	var_1_74 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 65534);
	var_1_77 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_77 >= -922337.2036854776000e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854776000e+12F && var_1_77 >= 1.0e-20F ));
	assume_abort_if_not(var_1_77 != 0.0F);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 1);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 1);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 1);
	var_1_88 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_88 >= 1073741823);
	assume_abort_if_not(var_1_88 <= 2147483646);
	var_1_91 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_91 >= -922337.2036854776000e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 9223372.036854776000e+12F && var_1_91 >= 1.0e-20F ));
	var_1_94 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_94 >= -922337.2036854765600e+13F && var_1_94 <= -1.0e-20F) || (var_1_94 <= 9223372.036854765600e+12F && var_1_94 >= 1.0e-20F ));
	var_1_97 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_97 >= -461168.6018427382800e+13F && var_1_97 <= -1.0e-20F) || (var_1_97 <= 4611686.018427382800e+12F && var_1_97 >= 1.0e-20F ));
	var_1_98 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_98 >= 2305843.009213691390e+12F && var_1_98 <= -1.0e-20F) || (var_1_98 <= 4611686.018427382800e+12F && var_1_98 >= 1.0e-20F ));
	var_1_99 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_99 >= 0.0F && var_1_99 <= -1.0e-20F) || (var_1_99 <= 2305843.009213691390e+12F && var_1_99 >= 1.0e-20F ));
	var_1_101 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_101 >= 0);
	assume_abort_if_not(var_1_101 <= 1);
	var_1_103 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_103 >= 16382);
	assume_abort_if_not(var_1_103 <= 32766);
	var_1_106 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_106 >= -2147483648);
	assume_abort_if_not(var_1_106 <= 2147483647);
	var_1_108 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_108 >= 32767);
	assume_abort_if_not(var_1_108 <= 65534);
	var_1_111 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_111 >= 0);
	assume_abort_if_not(var_1_111 <= 4294967295);
	var_1_113 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_113 >= -128);
	assume_abort_if_not(var_1_113 <= 127);
	var_1_115 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_115 >= -32768);
	assume_abort_if_not(var_1_115 <= 32767);
	var_1_118 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_118 >= 127);
	assume_abort_if_not(var_1_118 <= 254);
	var_1_120 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_120 >= 0);
	assume_abort_if_not(var_1_120 <= 0);
	var_1_121 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_121 >= 0);
	assume_abort_if_not(var_1_121 <= 0);
	var_1_122 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_122 >= 0);
	assume_abort_if_not(var_1_122 <= 0);
	var_1_123 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_123 >= 4611686.018427387900e+12F && var_1_123 <= -1.0e-20F) || (var_1_123 <= 9223372.036854776000e+12F && var_1_123 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_20 = var_1_20;
}

int property() {
	return (((((((var_1_18 >= (- (min (var_1_9 , var_1_9)))) ? (var_1_1 == ((double) (((var_1_6 - var_1_7) - (max (64.75 , 128.725))) + var_1_8))) : (var_1_1 == ((double) var_1_7))) && ((var_1_6 > (min (var_1_8 , last_1_var_1_1))) ? ((! ((last_1_var_1_1 == var_1_7) && (last_1_var_1_20 || last_1_var_1_20))) ? ((! (var_1_6 <= var_1_7)) ? (var_1_9 == ((unsigned short int) (min (last_1_var_1_14 , last_1_var_1_14)))) : 1) : (var_1_9 == ((unsigned short int) last_1_var_1_14))) : 1)) && (var_1_11 == ((unsigned long int) (var_1_9 + ((min (var_1_18 , var_1_9)) + 2u))))) && (var_1_20 ? (var_1_12 == ((unsigned char) var_1_13)) : 1)) && (((8 - 64) <= (var_1_9 - var_1_9)) ? (var_1_14 == ((unsigned char) (min ((var_1_15 + var_1_16) , var_1_17)))) : (var_1_14 == ((unsigned char) var_1_17)))) && (var_1_13 ? (var_1_18 == ((unsigned long int) ((var_1_19 - last_1_var_1_9) - last_1_var_1_11))) : (var_1_18 == ((unsigned long int) (max ((var_1_19 - var_1_17) , var_1_15)))))) && (((var_1_14 / var_1_19) <= (min (var_1_18 , var_1_14))) ? (var_1_20 == ((unsigned char) var_1_13)) : 1)
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
