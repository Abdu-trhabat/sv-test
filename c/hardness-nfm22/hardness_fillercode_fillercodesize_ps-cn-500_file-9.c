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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch9PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 5.5;
signed short int var_1_3 = 1;
signed long int var_1_5 = -64;
signed char var_1_6 = 10;
signed char var_1_7 = 5;
double var_1_8 = 16.25;
double var_1_9 = 1.8;
unsigned char var_1_10 = 32;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 16;
unsigned long int var_1_13 = 128;
unsigned char var_1_15 = 1;
unsigned short int var_1_16 = 256;
signed char var_1_18 = -2;
unsigned long int var_1_19 = 50;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned long int var_1_22 = 0;
unsigned char var_1_23 = 64;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 2;
unsigned short int var_1_26 = 32;
unsigned long int var_1_27 = 100;
unsigned char var_1_28 = 1;
unsigned long int var_1_29 = 32;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 5;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 25;
unsigned char var_1_34 = 16;
double var_1_35 = 63.25;
double var_1_36 = 128.9;
unsigned char var_1_37 = 50;
double var_1_38 = 15.8;
float var_1_39 = 63.349;
unsigned long int var_1_40 = 8;
float var_1_41 = 64.4;
float var_1_42 = 100000.75;
float var_1_43 = 100000.5;
unsigned char var_1_44 = 5;
signed char var_1_45 = 64;
signed long int var_1_46 = 1677909173;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 1;
signed char var_1_50 = 8;
signed char var_1_51 = 10;
unsigned short int var_1_52 = 128;
signed long int var_1_53 = 10;
unsigned long int var_1_54 = 2707226227;
signed long int var_1_55 = -50;
signed char var_1_56 = -2;
signed char var_1_57 = 5;
signed char var_1_58 = 4;
signed char var_1_59 = -128;
float var_1_60 = 5.5;
signed short int var_1_61 = 2;
signed long int var_1_62 = 16;
unsigned short int var_1_63 = 8;
unsigned short int var_1_64 = 61913;
unsigned char var_1_65 = 1;
double var_1_66 = 256.875;
double var_1_67 = 199.5;
unsigned long int var_1_68 = 128;
signed long int var_1_69 = 16;
unsigned long int var_1_70 = 2541011625;
double var_1_71 = 4.9399999999999995;
float var_1_72 = 0.2;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 0;
float var_1_75 = 5.764;
float var_1_76 = -0.5;
double var_1_77 = 16.75;
unsigned short int var_1_78 = 8;
unsigned char var_1_79 = 10;
unsigned char var_1_80 = 8;
signed long int var_1_81 = -16;
signed short int var_1_82 = -4;
signed short int var_1_83 = -50;
unsigned short int var_1_84 = 1;
signed char var_1_85 = 32;
unsigned char var_1_86 = 8;
signed char var_1_87 = -16;
unsigned char var_1_88 = 1;
unsigned char var_1_89 = 0;
unsigned char var_1_90 = 0;
unsigned char var_1_91 = 64;
unsigned long int var_1_92 = 128;
unsigned char var_1_93 = 2;
signed long int var_1_94 = 5;
signed short int var_1_95 = 0;
double var_1_96 = 25.4;
double var_1_97 = 8.5;
unsigned char var_1_98 = 4;
signed long int var_1_99 = -2;
signed short int var_1_100 = -64;
signed long int var_1_101 = 2;
unsigned char var_1_102 = 0;
unsigned char var_1_103 = 0;
float var_1_104 = 255.4;
float var_1_105 = -0.8;
unsigned short int var_1_106 = 128;
unsigned short int var_1_107 = 256;
signed long int var_1_108 = -2;
unsigned char var_1_109 = 32;
unsigned char var_1_110 = 1;
double var_1_111 = 64.5;
double var_1_112 = 0.0;
double var_1_113 = 99.2;
double var_1_114 = 999999999999.4;
signed short int var_1_115 = -4;
signed char var_1_116 = -1;
signed short int var_1_117 = 128;
float var_1_118 = 10000000.4;
signed short int var_1_119 = 5;
unsigned short int var_1_120 = 256;
signed short int var_1_121 = -128;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_10 = 32;
unsigned short int last_1_var_1_12 = 16;
unsigned long int last_1_var_1_13 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_20 || var_1_21) {
		var_1_19 = (abs (var_1_22));
	}


	// From: CodeObject2
	if ((abs (var_1_22)) == (~ 16u)) {
		if (var_1_21 || var_1_20) {
			var_1_23 = (max (10 , (min (var_1_24 , var_1_25))));
		}
	}


	// From: CodeObject3
	if (var_1_22 <= var_1_19) {
		if (var_1_22 <= ((min (var_1_25 , var_1_24)) / var_1_27)) {
			var_1_26 = (abs (var_1_23));
		}
	} else {
		if (var_1_25 > (2 ^ (max (var_1_22 , var_1_27)))) {
			if (var_1_23 > var_1_22) {
				var_1_26 = (abs (min (var_1_25 , var_1_23)));
			} else {
				var_1_26 = (abs (max (var_1_23 , var_1_24)));
			}
		} else {
			var_1_26 = var_1_25;
		}
	}


	// From: CodeObject4
	if (var_1_23 > var_1_19) {
		var_1_28 = ((var_1_27 < var_1_29) && (var_1_21 && (! var_1_30)));
	}


	// From: CodeObject5
	if (var_1_24 == (max (var_1_19 , var_1_25))) {
		var_1_31 = (max (16 , ((abs (var_1_32)) - (var_1_33 + var_1_34))));
	}


	// From: CodeObject6
	if (var_1_30) {
		var_1_35 = (abs (abs (var_1_36)));
	}


	// From: CodeObject7
	if ((1.5f * (min (var_1_35 , var_1_36))) > var_1_38) {
		if (var_1_31 <= var_1_27) {
			if (var_1_32 > (min (var_1_34 , var_1_29))) {
				var_1_37 = (max ((max (var_1_25 , var_1_33)) , var_1_32));
			}
		}
	} else {
		var_1_37 = (max (var_1_33 , var_1_32));
	}


	// From: CodeObject8
	if (var_1_40 >= var_1_29) {
		if ((abs (var_1_31 / var_1_32)) <= 128) {
			var_1_39 = (max (var_1_36 , var_1_41));
		}
	}


	// From: CodeObject9
	if ((- var_1_32) >= var_1_34) {
		var_1_42 = (var_1_43 + 63.4f);
	}


	// From: CodeObject10
	if (var_1_30) {
		if (var_1_29 >= var_1_33) {
			if (var_1_20) {
				var_1_44 = (max (var_1_32 , var_1_34));
			} else {
				var_1_44 = (abs (var_1_34));
			}
		}
	}


	// From: CodeObject11
	if (var_1_20 || var_1_21) {
		if ((abs (var_1_31)) > var_1_44) {
			var_1_45 = (abs (var_1_34));
		}
	} else {
		if ((var_1_36 * var_1_35) > var_1_42) {
			if ((- var_1_24) > ((var_1_46 - var_1_33) - var_1_23)) {
				var_1_45 = var_1_33;
			}
		}
	}


	// From: CodeObject12
	if (var_1_43 <= var_1_42) {
		if ((var_1_26 * var_1_37) != (var_1_45 * var_1_31)) {
			if (var_1_28) {
				var_1_47 = var_1_48;
			} else {
				if ((var_1_23 ^ var_1_25) == var_1_27) {
					var_1_47 = (! var_1_48);
				}
			}
		} else {
			var_1_47 = (var_1_30 && var_1_49);
		}
	}


	// From: CodeObject13
	if (var_1_40 == var_1_19) {
		var_1_50 = (var_1_34 + var_1_51);
	}


	// From: CodeObject14
	var_1_52 = (max (var_1_44 , var_1_32));


	// From: CodeObject15
	if (var_1_29 > (var_1_54 - var_1_44)) {
		var_1_53 = (max ((min (var_1_24 , (abs (var_1_51)))) , var_1_32));
	} else {
		var_1_53 = (max ((min (var_1_55 , var_1_32)) , var_1_26));
	}


	// From: CodeObject16
	if ((- var_1_35) < var_1_36) {
		if (var_1_35 <= var_1_42) {
			if (var_1_23 >= (~ 5)) {
				var_1_56 = (var_1_34 + (abs (-4)));
			} else {
				if ((var_1_40 | (min (var_1_27 , var_1_53))) >= 100u) {
					var_1_56 = ((abs (var_1_34 - 16)) - var_1_33);
				} else {
					var_1_56 = (max (-5 , (var_1_34 - var_1_33)));
				}
			}
		} else {
			if (var_1_51 >= ((var_1_34 + var_1_57) - var_1_33)) {
				var_1_56 = (min (var_1_57 , var_1_33));
			} else {
				var_1_56 = (min ((abs (var_1_34 - var_1_57)) , var_1_58));
			}
		}
	}


	// From: CodeObject17
	if ((-32 & (var_1_58 * var_1_32)) <= (var_1_25 >> (4 + 1))) {
		var_1_59 = var_1_57;
	}


	// From: CodeObject18
	if (var_1_26 >= (max (var_1_24 , (~ var_1_44)))) {
		var_1_60 = (max (var_1_43 , (max (var_1_36 , var_1_41))));
	} else {
		var_1_60 = (abs (var_1_41));
	}


	// From: CodeObject19
	if (! (25u >= (var_1_32 ^ var_1_25))) {
		var_1_61 = (var_1_25 - (abs (-5)));
	}


	// From: CodeObject20
	if (var_1_44 != (- 25)) {
		var_1_62 = (max ((-4 + (min (1 , var_1_24))) , 5));
	}


	// From: CodeObject21
	if (var_1_60 < (abs (255.6f))) {
		if (var_1_39 <= var_1_41) {
			if (5 < var_1_33) {
				var_1_63 = (var_1_34 + var_1_57);
			}
		} else {
			var_1_63 = ((var_1_64 - var_1_37) - (var_1_34 + (min (var_1_32 , var_1_24))));
		}
	}


	// From: CodeObject22
	if ((var_1_41 + var_1_36) > (abs (var_1_60))) {
		if (var_1_47) {
			if (var_1_33 >= var_1_25) {
				var_1_65 = var_1_48;
			}
		}
	}


	// From: CodeObject23
	if (var_1_61 < (~ var_1_31)) {
		if (var_1_55 >= (max (var_1_58 , (var_1_56 * var_1_63)))) {
			var_1_66 = (abs (var_1_41));
		}
	} else {
		var_1_66 = (var_1_67 - (abs (var_1_41)));
	}


	// From: CodeObject24
	if (var_1_23 > var_1_53) {
		if (99.4f >= var_1_35) {
			if ((abs (var_1_66)) >= var_1_36) {
				var_1_68 = (var_1_31 + var_1_33);
			} else {
				if ((var_1_29 + (128 >> var_1_69)) <= var_1_27) {
					var_1_68 = (var_1_70 - 2u);
				} else {
					var_1_68 = var_1_23;
				}
			}
		} else {
			var_1_68 = (min ((var_1_70 - 8u) , (max (var_1_23 , var_1_22))));
		}
	} else {
		if ((var_1_53 & var_1_69) > var_1_61) {
			if ((var_1_42 / var_1_71) > var_1_35) {
				var_1_68 = var_1_32;
			}
		}
	}


	// From: CodeObject25
	if (var_1_49) {
		var_1_72 = var_1_43;
	}


	// From: CodeObject26
	var_1_73 = var_1_48;


	// From: CodeObject27
	if (var_1_49) {
		var_1_74 = var_1_30;
	} else {
		var_1_74 = var_1_30;
	}


	// From: CodeObject28
	var_1_75 = var_1_67;


	// From: CodeObject29
	if (var_1_21) {
		var_1_76 = var_1_36;
	} else {
		var_1_76 = var_1_41;
	}


	// From: CodeObject30
	var_1_77 = var_1_36;


	// From: CodeObject31
	if (var_1_20) {
		var_1_78 = var_1_31;
	}


	// From: CodeObject32
	if (63.5 <= var_1_38) {
		var_1_79 = (max (var_1_33 , (var_1_57 + 32)));
	} else {
		if (var_1_22 >= var_1_31) {
			if (var_1_32 > (var_1_78 % (128 - var_1_80))) {
				var_1_79 = (max (200 , var_1_80));
			}
		}
	}


	// From: CodeObject33
	var_1_81 = (abs (var_1_45));


	// From: CodeObject34
	if (var_1_24 > var_1_63) {
		var_1_82 = (var_1_33 - var_1_69);
	}


	// From: CodeObject35
	if (var_1_73) {
		var_1_83 = (max (var_1_31 , var_1_34));
	}


	// From: CodeObject36
	var_1_84 = (abs (max (var_1_25 , (max (var_1_57 , 50)))));


	// From: CodeObject37
	if (((- var_1_71) * var_1_36) < var_1_60) {
		var_1_85 = var_1_58;
	}


	// From: CodeObject38
	if (var_1_42 > (abs (var_1_43))) {
		var_1_86 = (var_1_32 - var_1_57);
	} else {
		var_1_86 = ((var_1_69 + var_1_57) + (min ((min (var_1_80 , var_1_34)) , var_1_33)));
	}


	// From: CodeObject39
	if (var_1_84 > (var_1_54 % (min (var_1_64 , var_1_80)))) {
		if (var_1_77 != var_1_72) {
			if ((var_1_69 % var_1_32) > var_1_24) {
				var_1_87 = (var_1_69 - var_1_57);
			} else {
				var_1_87 = var_1_34;
			}
		} else {
			var_1_87 = (abs (var_1_69));
		}
	}


	// From: CodeObject40
	var_1_88 = (var_1_73 && (var_1_48 || (var_1_89 || var_1_90)));


	// From: CodeObject41
	if (var_1_40 <= var_1_27) {
		var_1_91 = (abs (abs (128)));
	}


	// From: CodeObject42
	if ((min (var_1_67 , var_1_71)) <= var_1_66) {
		var_1_92 = (abs (var_1_22));
	}


	// From: CodeObject43
	if (var_1_35 > var_1_71) {
		if (var_1_48) {
			var_1_93 = (abs (var_1_33));
		}
	} else {
		var_1_93 = (min ((abs (abs (var_1_25))) , var_1_24));
	}


	// From: CodeObject44
	if ((var_1_31 & (min (var_1_29 , var_1_78))) > var_1_27) {
		var_1_94 = (max (var_1_87 , var_1_31));
	}


	// From: CodeObject45
	if (((var_1_84 * var_1_27) % var_1_46) < var_1_33) {
		var_1_95 = var_1_91;
	}


	// From: CodeObject46
	if (5 <= var_1_82) {
		if (var_1_51 == var_1_44) {
			var_1_96 = (var_1_67 - var_1_97);
		}
	}


	// From: CodeObject47
	if (-2 < var_1_99) {
		if (var_1_89) {
			var_1_98 = (var_1_57 + var_1_80);
		}
	} else {
		var_1_98 = (abs (var_1_80));
	}


	// From: CodeObject48
	if (-4 == var_1_101) {
		var_1_100 = (abs (10 - var_1_34));
	} else {
		if (var_1_90 || (var_1_71 <= (min (var_1_38 , var_1_77)))) {
			if ((var_1_82 > (min (var_1_91 , var_1_34))) || var_1_49) {
				if (var_1_78 > var_1_40) {
					var_1_100 = (var_1_69 - var_1_31);
				} else {
					if (var_1_22 != var_1_24) {
						var_1_100 = (min (var_1_87 , var_1_51));
					} else {
						var_1_100 = (var_1_59 + var_1_45);
					}
				}
			}
		}
	}


	// From: CodeObject49
	if (8u <= (abs (var_1_54))) {
		if (var_1_76 < var_1_97) {
			var_1_102 = (var_1_88 && var_1_90);
		} else {
			if (var_1_32 <= var_1_99) {
				if (var_1_50 != (var_1_80 / var_1_27)) {
					var_1_102 = (! var_1_48);
				}
			}
		}
	} else {
		var_1_102 = (var_1_90 || (var_1_30 && (var_1_49 && var_1_103)));
	}


	// From: CodeObject50
	if (var_1_74 && var_1_103) {
		var_1_104 = var_1_97;
	}


	// From: CodeObject51
	if ((max (var_1_40 , var_1_91)) > (var_1_22 ^ var_1_37)) {
		if (! ((~ var_1_80) >= (var_1_101 % var_1_64))) {
			var_1_105 = (var_1_43 + 2.5f);
		}
	}


	// From: CodeObject52
	if ((var_1_101 | (0 ^ var_1_54)) < (abs (~ var_1_62))) {
		var_1_106 = (min (((abs (var_1_24)) + var_1_33) , (max (var_1_79 , var_1_23))));
	} else {
		if (var_1_30) {
			if (var_1_44 >= (var_1_93 ^ var_1_59)) {
				var_1_106 = (var_1_64 - (max (var_1_57 , (min (var_1_93 , var_1_24)))));
			}
		} else {
			if ((var_1_107 | (var_1_55 >> var_1_31)) <= (~ var_1_59)) {
				var_1_106 = (abs (max (var_1_44 , var_1_31)));
			}
		}
	}


	// From: CodeObject53
	if (var_1_93 > var_1_69) {
		if ((var_1_32 - var_1_109) < (abs (var_1_33))) {
			var_1_108 = (min (var_1_63 , var_1_64));
		}
	}


	// From: CodeObject54
	if (var_1_57 > (var_1_100 * var_1_62)) {
		var_1_110 = (! (! (var_1_90 || var_1_48)));
	} else {
		var_1_110 = (var_1_49 && var_1_103);
	}


	// From: CodeObject55
	if (var_1_24 > var_1_107) {
		var_1_111 = (min (var_1_97 , ((var_1_112 - var_1_113) - var_1_67)));
	}


	// From: CodeObject56
	if (var_1_88) {
		var_1_114 = var_1_67;
	} else {
		var_1_114 = var_1_113;
	}


	// From: CodeObject57
	if (var_1_47) {
		var_1_115 = var_1_109;
	} else {
		var_1_115 = var_1_91;
	}


	// From: CodeObject58
	var_1_116 = var_1_33;


	// From: CodeObject59
	var_1_117 = var_1_51;


	// From: CodeObject60
	if (var_1_103) {
		var_1_118 = var_1_36;
	}


	// From: CodeObject61
	if (var_1_90) {
		var_1_119 = var_1_80;
	}


	// From: CodeObject62
	if (var_1_69 > 64) {
		var_1_120 = (abs (abs (abs (1))));
	} else {
		var_1_120 = (var_1_64 - (abs (var_1_98)));
	}


	// From: CodeObject63
	var_1_121 = var_1_79;


	// From: Req3Batch9PS_CN_500
	if (((var_1_6 >> 2) * last_1_var_1_13) > last_1_var_1_10) {
		var_1_12 = var_1_6;
	}


	// From: Req2Batch9PS_CN_500
	signed long int stepLocal_2 = last_1_var_1_12 + var_1_7;
	if (var_1_6 <= stepLocal_2) {
		var_1_10 = var_1_11;
	} else {
		var_1_10 = (var_1_3 + var_1_7);
	}


	// From: Req4Batch9PS_CN_500
	if ((1 << var_1_10) != (-500 / -100)) {
		if ((var_1_6 - var_1_3) >= (var_1_12 + 256)) {
			var_1_13 = var_1_11;
		} else {
			var_1_13 = var_1_12;
		}
	} else {
		var_1_13 = var_1_6;
	}


	// From: Req6Batch9PS_CN_500
	var_1_18 = var_1_3;


	// From: Req5Batch9PS_CN_500
	signed long int stepLocal_4 = max (var_1_11 , (var_1_12 * -64));
	unsigned char stepLocal_3 = var_1_10;
	if ((- var_1_9) <= var_1_8) {
		if (var_1_15) {
			if (stepLocal_4 < var_1_12) {
				if (var_1_13 == stepLocal_3) {
					var_1_16 = var_1_11;
				}
			} else {
				var_1_16 = 256;
			}
		} else {
			var_1_16 = var_1_3;
		}
	} else {
		var_1_16 = var_1_10;
	}


	// From: Req1Batch9PS_CN_500
	signed long int stepLocal_1 = (var_1_10 & 0) * var_1_5;
	signed long int stepLocal_0 = var_1_16 >> var_1_3;
	if (stepLocal_0 == (var_1_10 / var_1_5)) {
		if ((var_1_3 << (var_1_6 - var_1_7)) > stepLocal_1) {
			var_1_1 = (min (var_1_8 , var_1_9));
		} else {
			var_1_1 = var_1_8;
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 8);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 6);
	assume_abort_if_not(var_1_6 <= 12);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 6);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 4294967294);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967295);
	assume_abort_if_not(var_1_27 != 0);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967295);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 127);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 64);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 4294967295);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -461168.6018427382800e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= 1073741823);
	assume_abort_if_not(var_1_46 <= 2147483647);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -63);
	assume_abort_if_not(var_1_51 <= 63);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 2147483647);
	assume_abort_if_not(var_1_54 <= 4294967295);
	var_1_55 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_55 >= -2147483647);
	assume_abort_if_not(var_1_55 <= 2147483646);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= -127);
	assume_abort_if_not(var_1_58 <= 126);
	var_1_64 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_64 >= 49150);
	assume_abort_if_not(var_1_64 <= 65534);
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854765600e+12F && var_1_67 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 32);
	var_1_70 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_70 >= 2147483647);
	assume_abort_if_not(var_1_70 <= 4294967294);
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= -922337.2036854776000e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854776000e+12F && var_1_71 >= 1.0e-20F ));
	assume_abort_if_not(var_1_71 != 0.0F);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 1);
	assume_abort_if_not(var_1_80 <= 126);
	assume_abort_if_not(var_1_80 != 127);
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 0);
	assume_abort_if_not(var_1_89 <= 0);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 0);
	var_1_97 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_97 >= 0.0F && var_1_97 <= -1.0e-20F) || (var_1_97 <= 9223372.036854765600e+12F && var_1_97 >= 1.0e-20F ));
	var_1_99 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_99 >= -2147483648);
	assume_abort_if_not(var_1_99 <= 2147483647);
	var_1_101 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_101 >= -2147483648);
	assume_abort_if_not(var_1_101 <= 2147483647);
	var_1_103 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_103 >= 1);
	assume_abort_if_not(var_1_103 <= 1);
	var_1_107 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_107 >= 0);
	assume_abort_if_not(var_1_107 <= 65535);
	var_1_109 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_109 >= 0);
	assume_abort_if_not(var_1_109 <= 127);
	var_1_112 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_112 >= 4611686.018427382800e+12F && var_1_112 <= -1.0e-20F) || (var_1_112 <= 9223372.036854765600e+12F && var_1_112 >= 1.0e-20F ));
	var_1_113 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_113 >= 0.0F && var_1_113 <= -1.0e-20F) || (var_1_113 <= 4611686.018427382800e+12F && var_1_113 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
}

int property() {
	return (((((((var_1_16 >> var_1_3) == (var_1_10 / var_1_5)) ? (((var_1_3 << (var_1_6 - var_1_7)) > ((var_1_10 & 0) * var_1_5)) ? (var_1_1 == ((double) (min (var_1_8 , var_1_9)))) : (var_1_1 == ((double) var_1_8))) : 1) && ((var_1_6 <= (last_1_var_1_12 + var_1_7)) ? (var_1_10 == ((unsigned char) var_1_11)) : (var_1_10 == ((unsigned char) (var_1_3 + var_1_7))))) && ((((var_1_6 >> 2) * last_1_var_1_13) > last_1_var_1_10) ? (var_1_12 == ((unsigned short int) var_1_6)) : 1)) && (((1 << var_1_10) != (-500 / -100)) ? (((var_1_6 - var_1_3) >= (var_1_12 + 256)) ? (var_1_13 == ((unsigned long int) var_1_11)) : (var_1_13 == ((unsigned long int) var_1_12))) : (var_1_13 == ((unsigned long int) var_1_6)))) && (((- var_1_9) <= var_1_8) ? (var_1_15 ? (((max (var_1_11 , (var_1_12 * -64))) < var_1_12) ? ((var_1_13 == var_1_10) ? (var_1_16 == ((unsigned short int) var_1_11)) : 1) : (var_1_16 == ((unsigned short int) 256))) : (var_1_16 == ((unsigned short int) var_1_3))) : (var_1_16 == ((unsigned short int) var_1_10)))) && (var_1_18 == ((signed char) var_1_3))
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
