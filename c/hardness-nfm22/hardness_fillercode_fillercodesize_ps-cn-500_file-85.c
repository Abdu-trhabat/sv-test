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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch85PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 1000;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
float var_1_7 = 0.6;
unsigned long int var_1_8 = 32;
unsigned long int var_1_9 = 32;
float var_1_11 = 5.5;
unsigned long int var_1_12 = 128;
unsigned char var_1_13 = 16;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 8;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
double var_1_18 = 1.8;
double var_1_19 = 4.5;
double var_1_20 = 15.5;
signed char var_1_21 = -5;
unsigned char var_1_22 = 1;
signed short int var_1_23 = 256;
signed short int var_1_24 = 5;
signed short int var_1_25 = 16;
signed long int var_1_26 = -4;
signed char var_1_27 = 4;
float var_1_28 = 8.95;
float var_1_29 = 16.4;
signed char var_1_30 = 8;
signed char var_1_31 = 8;
signed char var_1_32 = 2;
signed char var_1_33 = 2;
signed char var_1_34 = 1;
signed char var_1_35 = 0;
signed char var_1_36 = 10;
signed char var_1_37 = -32;
float var_1_38 = 3.8;
unsigned char var_1_39 = 0;
float var_1_40 = 4.2;
float var_1_41 = 256.75;
unsigned short int var_1_42 = 128;
unsigned short int var_1_43 = 29178;
unsigned short int var_1_44 = 32;
unsigned short int var_1_45 = 44772;
unsigned char var_1_46 = 32;
double var_1_47 = -0.68;
double var_1_48 = 128.6;
signed short int var_1_49 = -32;
unsigned long int var_1_50 = 50;
unsigned long int var_1_51 = 2264334029;
double var_1_52 = 31.5;
signed long int var_1_53 = 25;
double var_1_54 = 4.625;
double var_1_55 = 50.1;
double var_1_56 = 31.625;
signed short int var_1_57 = 5;
signed long int var_1_58 = 256;
unsigned long int var_1_59 = 200;
unsigned long int var_1_60 = 1701006018;
unsigned long int var_1_61 = 2992393091;
unsigned long int var_1_62 = 4;
signed short int var_1_63 = 2;
signed short int var_1_64 = 128;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 0;
unsigned char var_1_68 = 0;
signed short int var_1_69 = -10;
signed long int var_1_70 = -2;
signed long int var_1_71 = -10000000;
signed long int var_1_72 = -8;
float var_1_73 = 128.25;
signed long int var_1_74 = -1000;
unsigned short int var_1_75 = 4;
float var_1_76 = 63.3;
unsigned char var_1_77 = 1;
float var_1_78 = 4.5;
unsigned short int var_1_79 = 0;
unsigned short int var_1_80 = 2;
unsigned char var_1_81 = 16;
unsigned char var_1_82 = 64;
unsigned char var_1_83 = 50;
double var_1_84 = 99.6;
unsigned char var_1_85 = 1;
unsigned char var_1_86 = 5;
unsigned char var_1_87 = 1;
signed long int var_1_88 = -5;
unsigned char var_1_89 = 1;
signed short int var_1_90 = -200;
unsigned long int var_1_91 = 64;
double var_1_92 = 31.75;
double var_1_93 = 9.9;
double var_1_94 = 127.975;
unsigned long int var_1_95 = 50;
unsigned long int var_1_96 = 1;
unsigned long int var_1_97 = 25;
float var_1_98 = 16.25;
unsigned long int var_1_99 = 1;
double var_1_100 = -0.5;
signed long int var_1_101 = 8;
signed long int var_1_102 = 256;
double var_1_103 = 9.4;
unsigned char var_1_104 = 0;
float var_1_105 = 9.25;
double var_1_106 = 10000000000.8;
unsigned long int var_1_107 = 16;
unsigned long int var_1_108 = 128;
signed long int var_1_109 = 16;
double var_1_110 = -0.2;
unsigned long int var_1_111 = 64;
unsigned long int var_1_112 = 256;
double var_1_113 = 2.4;
signed long int var_1_114 = 5;
double var_1_115 = 31.6;
float var_1_116 = 99999999.2;
unsigned char var_1_117 = 2;
signed short int var_1_118 = -10;
unsigned short int var_1_119 = 1;
float var_1_120 = -0.775;
signed short int var_1_121 = 16;
double var_1_122 = 1.8;
double var_1_123 = 9999999.2;
signed long int var_1_124 = -128;
signed char var_1_125 = -64;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 1000;
unsigned char last_1_var_1_5 = 1;
unsigned long int last_1_var_1_12 = 128;
unsigned char last_1_var_1_13 = 16;
unsigned long int last_1_var_1_15 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_22) {
		if ((var_1_23 - (min (var_1_24 , var_1_25))) <= var_1_26) {
			var_1_21 = var_1_27;
		}
	}


	// From: CodeObject2
	if ((min (var_1_24 , var_1_25)) <= var_1_26) {
		var_1_28 = (min (var_1_29 , 32.75f));
	} else {
		if (var_1_21 <= (var_1_26 ^ (var_1_27 % var_1_30))) {
			var_1_28 = (max ((min (var_1_29 , 8.8f)) , 2.625f));
		}
	}


	// From: CodeObject3
	if (var_1_21 > var_1_23) {
		var_1_31 = ((max (var_1_32 , var_1_33)) - (min ((max (var_1_34 , var_1_35)) , var_1_36)));
	} else {
		var_1_31 = (abs (max ((min (var_1_36 , var_1_32)) , var_1_37)));
	}


	// From: CodeObject4
	if (var_1_22 || var_1_39) {
		var_1_38 = var_1_29;
	} else {
		var_1_38 = (min ((min ((var_1_40 + var_1_41) , var_1_29)) , 3.1f));
	}


	// From: CodeObject5
	if (var_1_31 < ((var_1_35 - var_1_34) >> var_1_32)) {
		if (var_1_39) {
			if (var_1_34 == (abs (min (var_1_33 , var_1_27)))) {
				var_1_42 = (min (var_1_36 , ((var_1_35 + var_1_34) + (var_1_43 - var_1_44))));
			} else {
				if (var_1_35 <= (min ((var_1_26 ^ var_1_37) , (-1 % var_1_30)))) {
					var_1_42 = (var_1_45 - var_1_34);
				}
			}
		}
	}


	// From: CodeObject6
	if (var_1_38 < (max (var_1_28 , var_1_40))) {
		if ((min (var_1_35 , var_1_25)) <= 50) {
			var_1_46 = var_1_34;
		}
	}


	// From: CodeObject7
	if (var_1_39) {
		var_1_47 = ((abs (min (var_1_40 , var_1_41))) + var_1_48);
	}


	// From: CodeObject8
	if (var_1_37 <= (abs (var_1_32))) {
		var_1_49 = (max ((abs (var_1_46)) , var_1_32));
	}


	// From: CodeObject9
	if (var_1_37 >= var_1_32) {
		var_1_50 = (max ((min (16u , var_1_25)) , ((max (var_1_42 , var_1_35)) + (max (var_1_34 , var_1_24)))));
	} else {
		if (var_1_37 == -16) {
			var_1_50 = (var_1_51 - var_1_24);
		} else {
			var_1_50 = (max ((max ((min (var_1_44 , var_1_46)) , (max (var_1_43 , var_1_42)))) , 2u));
		}
	}


	// From: CodeObject10
	if (var_1_22) {
		var_1_52 = (max (99999.5 , var_1_29));
	}


	// From: CodeObject11
	if ((64 & 16) >= var_1_34) {
		if (var_1_26 >= var_1_45) {
			if ((abs (var_1_47)) > (var_1_29 / (abs (var_1_54)))) {
				if (((var_1_36 / 256u) + var_1_26) <= var_1_42) {
					var_1_53 = (abs (var_1_24));
				} else {
					var_1_53 = (min (var_1_35 , var_1_30));
				}
			} else {
				var_1_53 = (max ((max (var_1_37 , var_1_44)) , (var_1_42 + var_1_34)));
			}
		} else {
			var_1_53 = (abs (var_1_30));
		}
	}


	// From: CodeObject12
	if ((min (var_1_54 , var_1_52)) > (max (var_1_47 , var_1_28))) {
		var_1_55 = (max ((var_1_56 - (abs (var_1_29))) , (max (var_1_41 , var_1_48))));
	} else {
		if (var_1_39) {
			var_1_55 = (abs (var_1_56));
		}
	}


	// From: CodeObject13
	if ((abs (var_1_25)) >= var_1_32) {
		var_1_57 = (max (((var_1_46 - var_1_34) + (abs (var_1_35))) , var_1_27));
	} else {
		if (var_1_50 > ((~ var_1_44) & (~ var_1_46))) {
			if (var_1_29 >= (abs (min (49.8f , var_1_55)))) {
				var_1_57 = ((max (var_1_37 , var_1_31)) + var_1_21);
			}
		}
	}


	// From: CodeObject14
	if (var_1_55 >= var_1_28) {
		var_1_58 = (max ((var_1_43 - var_1_25) , (abs (var_1_23))));
	}


	// From: CodeObject15
	if ((var_1_47 * (abs (var_1_54))) <= (var_1_52 * (max (var_1_48 , var_1_40)))) {
		var_1_59 = (abs ((var_1_60 - var_1_45) + var_1_35));
	} else {
		if ((var_1_41 / var_1_54) > var_1_40) {
			if (var_1_32 > (var_1_46 + 8)) {
				if (var_1_22) {
					if ((~ (var_1_58 / 10)) < var_1_42) {
						if ((var_1_48 / (abs (var_1_54))) >= var_1_28) {
							var_1_59 = ((abs (var_1_25)) + var_1_45);
						}
					}
				} else {
					var_1_59 = ((max (var_1_51 , (abs (var_1_61)))) - var_1_24);
				}
			} else {
				var_1_59 = (abs (var_1_62));
			}
		}
	}


	// From: CodeObject16
	if (var_1_50 >= ((var_1_24 * var_1_45) * var_1_42)) {
		var_1_63 = (min (var_1_21 , ((18969 - var_1_44) - var_1_64)));
	} else {
		var_1_63 = (abs (max (var_1_44 , var_1_33)));
	}


	// From: CodeObject17
	if (var_1_22) {
		var_1_65 = (var_1_66 || (var_1_67 || var_1_68));
	} else {
		if ((var_1_33 > (4 % -25)) && (var_1_32 > var_1_23)) {
			var_1_65 = (var_1_39 && (var_1_66 || var_1_67));
		}
	}


	// From: CodeObject18
	if ((- var_1_35) < (var_1_70 & (var_1_57 ^ -32))) {
		if (var_1_67) {
			var_1_69 = (max (var_1_37 , (1 + var_1_32)));
		}
	} else {
		if (var_1_39) {
			var_1_69 = var_1_46;
		} else {
			var_1_69 = ((abs (min (var_1_34 , var_1_37))) + var_1_32);
		}
	}


	// From: CodeObject19
	if (var_1_58 < var_1_69) {
		var_1_71 = ((abs (var_1_30)) - var_1_46);
	} else {
		var_1_71 = (abs (var_1_34));
	}


	// From: CodeObject20
	if (((abs (var_1_40)) < var_1_52) || (var_1_67 || var_1_68)) {
		if ((var_1_64 >= (var_1_69 % var_1_43)) && var_1_65) {
			var_1_72 = ((max (var_1_35 , var_1_43)) + (max (var_1_64 , (abs (var_1_42)))));
		}
	}


	// From: CodeObject21
	if (-256 <= var_1_49) {
		var_1_73 = (min ((max ((max (var_1_40 , var_1_48)) , 128.25f)) , (max ((min (var_1_56 , var_1_29)) , 0.8f))));
	}


	// From: CodeObject22
	if (var_1_72 < var_1_34) {
		if (var_1_53 != (abs (var_1_24))) {
			if (var_1_75 < ((abs (16)) ^ var_1_61)) {
				var_1_74 = (max ((abs (var_1_64)) , (max ((var_1_25 - var_1_44) , var_1_46))));
			} else {
				var_1_74 = (max ((abs (var_1_33)) , var_1_25));
			}
		}
	} else {
		var_1_74 = (min ((var_1_33 + var_1_75) , var_1_30));
	}


	// From: CodeObject23
	if (var_1_77) {
		var_1_76 = (var_1_56 - var_1_78);
	}


	// From: CodeObject24
	if (2 > var_1_35) {
		var_1_79 = (var_1_45 - 10000);
	}


	// From: CodeObject25
	if (var_1_44 >= var_1_79) {
		if ((var_1_46 | var_1_42) < (min ((var_1_24 - var_1_25) , 1))) {
			var_1_80 = (abs (var_1_44));
		}
	} else {
		var_1_80 = (var_1_45 - var_1_43);
	}


	// From: CodeObject26
	if (var_1_66) {
		var_1_81 = ((var_1_82 - var_1_83) + var_1_36);
	}


	// From: CodeObject27
	if (var_1_53 > var_1_32) {
		if ((var_1_26 | (var_1_61 - var_1_82)) < ((abs (var_1_58)) + var_1_75)) {
			var_1_84 = (max (var_1_40 , (max (var_1_78 , var_1_29))));
		}
	}


	// From: CodeObject28
	if (var_1_52 >= (var_1_40 + var_1_84)) {
		if (var_1_51 <= var_1_61) {
			var_1_85 = (abs (var_1_34));
		}
	} else {
		var_1_85 = (min ((var_1_86 + (abs (var_1_83))) , (abs (var_1_82))));
	}


	// From: CodeObject29
	if (var_1_26 > (var_1_23 | (var_1_60 % var_1_43))) {
		var_1_87 = var_1_67;
	} else {
		if (! ((var_1_58 + var_1_35) != var_1_88)) {
			var_1_87 = (! var_1_89);
		}
	}


	// From: CodeObject30
	if ((var_1_59 ^ var_1_44) < (min (var_1_64 , var_1_91))) {
		if (var_1_92 >= var_1_73) {
			if (1.8f >= var_1_38) {
				var_1_90 = (max (var_1_86 , 64));
			}
		}
	}


	// From: CodeObject31
	if (var_1_40 <= var_1_29) {
		var_1_93 = (abs (max ((var_1_48 + var_1_40) , 255.301)));
	} else {
		var_1_93 = var_1_40;
	}


	// From: CodeObject32
	if (var_1_59 <= (var_1_61 - (min (var_1_45 , 5u)))) {
		var_1_94 = (abs (4.3));
	}


	// From: CodeObject33
	if (var_1_26 >= ((var_1_36 / var_1_30) >> var_1_53)) {
		if (var_1_73 <= var_1_29) {
			var_1_95 = (((abs (var_1_60)) - (abs (var_1_96))) + 1000u);
		}
	}


	// From: CodeObject34
	if ((var_1_57 ^ (var_1_24 ^ var_1_90)) > var_1_30) {
		if ((max ((var_1_63 ^ var_1_23) , var_1_46)) >= var_1_59) {
			if (var_1_27 <= (-64 << var_1_80)) {
				var_1_97 = (max (var_1_44 , (abs (var_1_46))));
			} else {
				if (var_1_33 != 1) {
					var_1_97 = (max ((abs (var_1_44)) , (abs (var_1_75))));
				}
			}
		}
	}


	// From: CodeObject35
	if (var_1_30 == (~ var_1_46)) {
		if ((var_1_73 < (- var_1_29)) && var_1_89) {
			var_1_98 = (min (((abs (var_1_29)) - var_1_78) , var_1_41));
		}
	} else {
		var_1_98 = (abs (var_1_56 - var_1_78));
	}


	// From: CodeObject36
	if (var_1_96 >= var_1_61) {
		var_1_99 = (max (var_1_24 , var_1_62));
	}


	// From: CodeObject37
	if (var_1_68) {
		if (((abs (var_1_81)) / var_1_82) >= var_1_27) {
			var_1_100 = (4.6 - var_1_56);
		}
	} else {
		if (var_1_45 > var_1_57) {
			var_1_100 = (var_1_40 + var_1_41);
		} else {
			var_1_100 = (var_1_78 - var_1_56);
		}
	}


	// From: CodeObject38
	if ((abs (var_1_78)) >= var_1_92) {
		if ((min (var_1_69 , (-16 ^ var_1_102))) < var_1_25) {
			var_1_101 = ((var_1_44 - (abs (var_1_86))) + (abs (var_1_46)));
		} else {
			var_1_101 = (abs (var_1_33));
		}
	}


	// From: CodeObject39
	if (var_1_21 >= -16) {
		var_1_103 = var_1_29;
	} else {
		var_1_103 = var_1_29;
	}


	// From: CodeObject40
	if (var_1_80 > ((var_1_57 ^ var_1_101) / 1)) {
		var_1_104 = ((var_1_68 || var_1_66) || var_1_67);
	}


	// From: CodeObject41
	if ((var_1_102 % (var_1_43 + var_1_82)) > (var_1_72 & (abs (64)))) {
		var_1_105 = (abs (var_1_78));
	}


	// From: CodeObject42
	if (var_1_104) {
		var_1_106 = (var_1_48 + var_1_41);
	}


	// From: CodeObject43
	if (var_1_35 <= var_1_95) {
		var_1_107 = var_1_108;
	}


	// From: CodeObject44
	if (var_1_77) {
		var_1_109 = var_1_35;
	} else {
		var_1_109 = var_1_80;
	}


	// From: CodeObject45
	if (var_1_67) {
		var_1_110 = var_1_40;
	} else {
		var_1_110 = var_1_40;
	}


	// From: CodeObject46
	var_1_111 = var_1_24;


	// From: CodeObject47
	if (var_1_77) {
		var_1_112 = var_1_35;
	}


	// From: CodeObject48
	var_1_113 = var_1_78;


	// From: CodeObject49
	var_1_114 = var_1_32;


	// From: CodeObject50
	if (var_1_65) {
		var_1_115 = var_1_48;
	}


	// From: CodeObject51
	if (var_1_104) {
		var_1_116 = var_1_48;
	}


	// From: CodeObject52
	if (var_1_22) {
		var_1_117 = var_1_36;
	} else {
		var_1_117 = var_1_35;
	}


	// From: CodeObject53
	if (var_1_66) {
		var_1_118 = var_1_33;
	}


	// From: CodeObject54
	if (var_1_66) {
		var_1_119 = var_1_35;
	}


	// From: CodeObject55
	if (var_1_68) {
		var_1_120 = 64.82f;
	} else {
		var_1_120 = var_1_78;
	}


	// From: CodeObject56
	if (var_1_68) {
		var_1_121 = var_1_35;
	} else {
		var_1_121 = var_1_117;
	}


	// From: CodeObject57
	if (var_1_67) {
		var_1_122 = var_1_48;
	} else {
		var_1_122 = var_1_123;
	}


	// From: CodeObject58
	if (var_1_66) {
		var_1_124 = var_1_69;
	}


	// From: CodeObject59
	if (var_1_67) {
		if ((abs (var_1_113 / var_1_54)) < 63.5) {
			if (var_1_43 < (~ var_1_102)) {
				var_1_125 = var_1_27;
			} else {
				var_1_125 = var_1_37;
			}
		} else {
			var_1_125 = 10;
		}
	} else {
		var_1_125 = var_1_32;
	}


	// From: Req1Batch85PS_CN_500
	signed long int stepLocal_1 = last_1_var_1_13;
	signed long int stepLocal_0 = last_1_var_1_13;
	if (stepLocal_1 < ((- last_1_var_1_12) * 64)) {
		if (last_1_var_1_5) {
			var_1_1 = (abs (last_1_var_1_12));
		} else {
			if (-10000000 < stepLocal_0) {
				var_1_1 = (abs (max (last_1_var_1_12 , 5u)));
			} else {
				var_1_1 = 50u;
			}
		}
	}


	// From: Req2Batch85PS_CN_500
	unsigned long int stepLocal_2 = last_1_var_1_15 + last_1_var_1_1;
	if (last_1_var_1_13 <= stepLocal_2) {
		var_1_5 = ((last_1_var_1_15 == last_1_var_1_13) && var_1_6);
	} else {
		var_1_5 = var_1_6;
	}


	// From: Req8Batch85PS_CN_500
	unsigned char stepLocal_3 = var_1_5;
	if (stepLocal_3 || var_1_17) {
		var_1_18 = (((abs (var_1_19)) + var_1_20) - 63.6);
	}


	// From: Req5Batch85PS_CN_500
	var_1_13 = (abs (var_1_14));


	// From: Req7Batch85PS_CN_500
	var_1_16 = (var_1_6 && var_1_17);


	// From: Req6Batch85PS_CN_500
	if (var_1_5) {
		var_1_15 = (max (var_1_1 , (var_1_13 + (abs (var_1_14)))));
	}


	// From: Req3Batch85PS_CN_500
	if ((var_1_15 + (var_1_15 * var_1_13)) <= ((32u / var_1_8) / var_1_9)) {
		if (1.25f < var_1_18) {
			var_1_7 = 1000000.1f;
		}
	} else {
		var_1_7 = var_1_11;
	}


	// From: Req4Batch85PS_CN_500
	if (var_1_7 <= (- (32.8f + var_1_7))) {
		var_1_12 = last_1_var_1_12;
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 4294967295);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 4294967295);
	assume_abort_if_not(var_1_9 != 0);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -1);
	assume_abort_if_not(var_1_23 <= 32767);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -127);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854765600e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -128);
	assume_abort_if_not(var_1_30 <= 127);
	assume_abort_if_not(var_1_30 != 0);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -1);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -1);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -126);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -461168.6018427382800e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -461168.6018427382800e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 16383);
	assume_abort_if_not(var_1_43 <= 32767);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 16383);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 32767);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -461168.6018427382800e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427382800e+12F && var_1_48 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 2147483647);
	assume_abort_if_not(var_1_51 <= 4294967294);
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= -922337.2036854776000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
	assume_abort_if_not(var_1_54 != 0.0F);
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854765600e+12F && var_1_56 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 1073741823);
	assume_abort_if_not(var_1_60 <= 2147483647);
	var_1_61 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_61 >= 2147483647);
	assume_abort_if_not(var_1_61 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 4294967294);
	var_1_64 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 32766);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 0);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 0);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 0);
	var_1_70 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_70 >= -2147483648);
	assume_abort_if_not(var_1_70 <= 2147483647);
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 65535);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 1);
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= 0.0F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 9223372.036854765600e+12F && var_1_78 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 63);
	assume_abort_if_not(var_1_82 <= 127);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 63);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 127);
	var_1_88 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_88 >= -2147483648);
	assume_abort_if_not(var_1_88 <= 2147483647);
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 1);
	assume_abort_if_not(var_1_89 <= 1);
	var_1_91 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 4294967295);
	var_1_92 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_92 >= -922337.2036854776000e+13F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 9223372.036854776000e+12F && var_1_92 >= 1.0e-20F ));
	var_1_96 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 1073741823);
	var_1_102 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_102 >= -2147483648);
	assume_abort_if_not(var_1_102 <= 2147483647);
	var_1_108 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_108 >= 0);
	assume_abort_if_not(var_1_108 <= 4294967294);
	var_1_123 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_123 >= -922337.2036854765600e+13F && var_1_123 <= -1.0e-20F) || (var_1_123 <= 9223372.036854765600e+12F && var_1_123 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_15 = var_1_15;
}

int property() {
	return ((((((((last_1_var_1_13 < ((- last_1_var_1_12) * 64)) ? (last_1_var_1_5 ? (var_1_1 == ((unsigned long int) (abs (last_1_var_1_12)))) : ((-10000000 < last_1_var_1_13) ? (var_1_1 == ((unsigned long int) (abs (max (last_1_var_1_12 , 5u))))) : (var_1_1 == ((unsigned long int) 50u)))) : 1) && ((last_1_var_1_13 <= (last_1_var_1_15 + last_1_var_1_1)) ? (var_1_5 == ((unsigned char) ((last_1_var_1_15 == last_1_var_1_13) && var_1_6))) : (var_1_5 == ((unsigned char) var_1_6)))) && (((var_1_15 + (var_1_15 * var_1_13)) <= ((32u / var_1_8) / var_1_9)) ? ((1.25f < var_1_18) ? (var_1_7 == ((float) 1000000.1f)) : 1) : (var_1_7 == ((float) var_1_11)))) && ((var_1_7 <= (- (32.8f + var_1_7))) ? (var_1_12 == ((unsigned long int) last_1_var_1_12)) : 1)) && (var_1_13 == ((unsigned char) (abs (var_1_14))))) && (var_1_5 ? (var_1_15 == ((unsigned long int) (max (var_1_1 , (var_1_13 + (abs (var_1_14))))))) : 1)) && (var_1_16 == ((unsigned char) (var_1_6 && var_1_17)))) && ((var_1_5 || var_1_17) ? (var_1_18 == ((double) (((abs (var_1_19)) + var_1_20) - 63.6))) : 1)
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
