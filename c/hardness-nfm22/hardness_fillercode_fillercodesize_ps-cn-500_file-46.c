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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch46PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 16;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 10;
unsigned short int var_1_6 = 10;
unsigned short int var_1_7 = 52077;
unsigned short int var_1_8 = 47248;
unsigned short int var_1_9 = 50;
float var_1_11 = 63.75;
signed long int var_1_12 = 100000;
unsigned short int var_1_13 = 8;
signed long int var_1_14 = 2;
signed long int var_1_15 = 32;
double var_1_17 = 127.5;
double var_1_18 = 32.75;
signed char var_1_19 = 0;
unsigned long int var_1_20 = 128;
unsigned long int var_1_21 = 32;
unsigned long int var_1_22 = 10;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 16;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 32;
unsigned char var_1_30 = 2;
signed char var_1_31 = 4;
signed char var_1_32 = -5;
signed char var_1_33 = -16;
signed char var_1_34 = -8;
signed short int var_1_35 = 4;
double var_1_36 = 16.7;
unsigned short int var_1_37 = 100;
signed char var_1_38 = 0;
double var_1_39 = 2.875;
double var_1_40 = 4.5;
double var_1_41 = 9999999999.2;
unsigned char var_1_42 = 32;
double var_1_43 = 9.5;
unsigned char var_1_44 = 16;
unsigned short int var_1_45 = 50;
unsigned long int var_1_46 = 16;
unsigned long int var_1_47 = 1092693390;
unsigned long int var_1_48 = 16;
unsigned char var_1_49 = 8;
signed char var_1_50 = -1;
signed char var_1_51 = 2;
float var_1_52 = 127.4;
double var_1_53 = 31.46;
double var_1_54 = 4.2;
double var_1_55 = 4.5;
double var_1_56 = 5.5;
signed short int var_1_57 = 50;
signed short int var_1_58 = 5;
signed long int var_1_59 = 5;
unsigned long int var_1_60 = 25;
signed char var_1_61 = 64;
signed short int var_1_62 = -8;
float var_1_63 = 49.25;
signed long int var_1_64 = 2;
signed short int var_1_65 = 4;
unsigned short int var_1_66 = 5;
signed char var_1_67 = 25;
unsigned char var_1_68 = 128;
unsigned char var_1_69 = 16;
signed char var_1_70 = 0;
signed char var_1_71 = 4;
unsigned short int var_1_72 = 256;
double var_1_73 = 31.6;
unsigned char var_1_74 = 2;
signed char var_1_75 = 10;
unsigned char var_1_76 = 1;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 0;
unsigned char var_1_79 = 1;
unsigned char var_1_80 = 200;
unsigned char var_1_81 = 1;
unsigned short int var_1_82 = 10;
double var_1_83 = 8.7;
unsigned short int var_1_84 = 65151;
unsigned char var_1_85 = 128;
unsigned char var_1_86 = 0;
signed char var_1_87 = -16;
unsigned short int var_1_88 = 10;
unsigned char var_1_89 = 1;
double var_1_90 = 0.75;
unsigned char var_1_91 = 0;
double var_1_92 = 10000000000000.6;
double var_1_93 = 8.4;
unsigned char var_1_94 = 1;
float var_1_95 = 63.5;
double var_1_96 = 2.6;
float var_1_97 = 4.8;
float var_1_98 = 50.6;
float var_1_99 = 0.0;
float var_1_100 = 0.0;
signed char var_1_101 = -25;
unsigned long int var_1_102 = 256;
signed char var_1_103 = -4;
unsigned short int var_1_104 = 4;
signed char var_1_105 = -5;
signed long int var_1_106 = 128;
unsigned char var_1_107 = 0;
unsigned long int var_1_108 = 2;
float var_1_109 = 100.5;
unsigned char var_1_110 = 128;
float var_1_111 = 127.75;
float var_1_112 = 1.31;
unsigned char var_1_113 = 0;
signed long int var_1_114 = -1;
unsigned long int var_1_115 = 32;
unsigned char var_1_116 = 0;
float var_1_117 = 64.5;
signed char var_1_118 = 0;
signed char var_1_119 = 0;
signed long int var_1_120 = -16;
unsigned char var_1_121 = 1;
unsigned char var_1_122 = 0;
unsigned char var_1_123 = 4;
unsigned char var_1_124 = 1;
unsigned char var_1_125 = 1;
unsigned char var_1_126 = 0;
float var_1_127 = 16.6;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_13 = 8;
double last_1_var_1_17 = 127.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_21 = (abs (var_1_22));


	// From: CodeObject2
	if (var_1_21 > var_1_22) {
		if (var_1_22 < var_1_21) {
			var_1_23 = (var_1_24 && var_1_25);
		}
	} else {
		var_1_23 = (! var_1_26);
	}


	// From: CodeObject3
	if (var_1_24) {
		var_1_27 = (abs ((min (var_1_28 , var_1_29)) + var_1_30));
	}


	// From: CodeObject4
	if (var_1_27 < var_1_29) {
		var_1_31 = (abs (var_1_32));
	} else {
		var_1_31 = (-32 + (var_1_33 + var_1_34));
	}


	// From: CodeObject5
	if ((var_1_27 >> var_1_34) < (var_1_28 ^ -25)) {
		var_1_35 = (abs (var_1_30));
	}


	// From: CodeObject6
	if ((var_1_37 >= var_1_21) && var_1_24) {
		if ((var_1_29 << (min (0 , var_1_38))) >= (max (var_1_35 , var_1_33))) {
			var_1_36 = (var_1_39 - (var_1_40 + var_1_41));
		} else {
			if (var_1_24) {
				var_1_36 = (abs (max (var_1_39 , var_1_40)));
			}
		}
	} else {
		var_1_36 = var_1_40;
	}


	// From: CodeObject7
	if (((abs (var_1_38)) ^ (-32 ^ 500)) >= (abs (var_1_28))) {
		var_1_42 = (128 - var_1_30);
	} else {
		if ((var_1_37 / 128) < 4) {
			var_1_42 = (abs (var_1_29));
		} else {
			var_1_42 = (abs (abs (var_1_29)));
		}
	}


	// From: CodeObject8
	if ((- var_1_40) > var_1_39) {
		if (var_1_28 > (var_1_29 % var_1_44)) {
			var_1_43 = (max (var_1_40 , var_1_41));
		}
	} else {
		if (var_1_42 >= (var_1_28 << var_1_44)) {
			if (var_1_36 > var_1_40) {
				var_1_43 = (max ((abs (var_1_41)) , var_1_40));
			} else {
				if (var_1_26 && (var_1_38 <= var_1_34)) {
					var_1_43 = (abs (var_1_39));
				} else {
					var_1_43 = ((abs (abs (var_1_41))) - var_1_39);
				}
			}
		}
	}


	// From: CodeObject9
	if ((var_1_42 + var_1_28) < (abs (var_1_29))) {
		var_1_45 = (min (var_1_44 , var_1_27));
	}


	// From: CodeObject10
	if (! var_1_25) {
		var_1_46 = (max ((3269467962u - (var_1_47 - var_1_44)) , ((abs (var_1_48)) + var_1_30)));
	}


	// From: CodeObject11
	if (var_1_30 < var_1_47) {
		if ((max (var_1_38 , (var_1_42 & var_1_46))) <= (4002131881u - var_1_48)) {
			var_1_49 = (128 - var_1_30);
		}
	}


	// From: CodeObject12
	if (-1 > var_1_34) {
		if (var_1_29 <= var_1_30) {
			var_1_50 = (max ((var_1_38 - var_1_51) , var_1_33));
		} else {
			var_1_50 = (var_1_51 - (max (4 , (abs (var_1_34)))));
		}
	}


	// From: CodeObject13
	if (var_1_39 >= var_1_36) {
		var_1_52 = var_1_41;
	} else {
		var_1_52 = var_1_40;
	}


	// From: CodeObject14
	if (var_1_24) {
		var_1_53 = var_1_41;
	}


	// From: CodeObject15
	if (5 <= var_1_38) {
		if (var_1_36 > ((max (var_1_39 , var_1_41)) - (abs (var_1_43)))) {
			var_1_54 = (((min (var_1_40 , var_1_41)) - var_1_55) + var_1_56);
		} else {
			var_1_54 = ((var_1_41 - var_1_55) + var_1_56);
		}
	} else {
		var_1_54 = (max (var_1_56 , (min ((abs (var_1_41)) , var_1_40))));
	}


	// From: CodeObject16
	if (var_1_23) {
		var_1_57 = (min (var_1_34 , (abs (var_1_30))));
	}


	// From: CodeObject17
	if (var_1_57 > (var_1_29 & (~ 64))) {
		var_1_58 = ((max (var_1_44 , 256)) - var_1_27);
	} else {
		if (var_1_23) {
			if (var_1_33 <= (abs (var_1_32))) {
				if (var_1_36 > var_1_56) {
					var_1_58 = (min (var_1_30 , (max (var_1_33 , (abs (var_1_27))))));
				} else {
					var_1_58 = (abs (abs (var_1_30)));
				}
			} else {
				var_1_58 = var_1_34;
			}
		}
	}


	// From: CodeObject18
	if ((var_1_27 + var_1_49) >= var_1_38) {
		if (var_1_24) {
			var_1_59 = (min ((abs (var_1_29)) , var_1_51));
		}
	}


	// From: CodeObject19
	if (var_1_32 < ((64 / var_1_44) % var_1_61)) {
		var_1_60 = var_1_45;
	} else {
		var_1_60 = var_1_51;
	}


	// From: CodeObject20
	if (var_1_47 <= var_1_30) {
		if (((abs (var_1_31)) << (min (1 , var_1_38))) <= var_1_21) {
			var_1_62 = var_1_61;
		}
	}


	// From: CodeObject21
	if ((var_1_59 >> (var_1_38 + var_1_64)) != (var_1_49 + (max (var_1_57 , var_1_35)))) {
		var_1_63 = 3.25f;
	}


	// From: CodeObject22
	if (var_1_50 <= var_1_33) {
		var_1_65 = var_1_32;
	}


	// From: CodeObject23
	if (var_1_27 < 2) {
		if ((min (var_1_45 , var_1_42)) <= var_1_29) {
			var_1_66 = (abs (var_1_42));
		} else {
			if (var_1_46 <= 256u) {
				var_1_66 = (min (var_1_44 , var_1_49));
			}
		}
	} else {
		var_1_66 = (max (var_1_29 , var_1_28));
	}


	// From: CodeObject24
	if (var_1_24) {
		if (var_1_26 && var_1_23) {
			if (var_1_27 <= var_1_60) {
				if ((2 / (var_1_68 - var_1_69)) <= var_1_44) {
					if ((max (var_1_58 , var_1_44)) < ((~ var_1_34) * var_1_35)) {
						var_1_67 = (min (var_1_69 , (abs (var_1_70))));
					}
				}
			} else {
				var_1_67 = var_1_71;
			}
		} else {
			var_1_67 = (abs (abs (var_1_32)));
		}
	} else {
		if ((abs (var_1_38)) > var_1_60) {
			var_1_67 = ((min ((abs (var_1_38)) , var_1_33)) + 2);
		} else {
			if (var_1_26) {
				var_1_67 = (abs (min (var_1_32 , var_1_51)));
			}
		}
	}


	// From: CodeObject25
	if (var_1_32 < (max (var_1_58 , var_1_51))) {
		if (var_1_27 < var_1_35) {
			if (var_1_26) {
				if (var_1_41 != (min ((min (var_1_36 , var_1_52)) , (var_1_43 * var_1_73)))) {
					var_1_72 = var_1_69;
				} else {
					var_1_72 = ((abs (5)) + var_1_28);
				}
			} else {
				var_1_72 = (abs (var_1_42));
			}
		}
	}


	// From: CodeObject26
	if ((~ var_1_59) >= var_1_71) {
		var_1_74 = (abs (var_1_64));
	} else {
		var_1_74 = (var_1_30 + var_1_29);
	}


	// From: CodeObject27
	if (var_1_61 >= var_1_50) {
		var_1_75 = (min (var_1_38 , (min (var_1_51 , (max (-64 , var_1_33))))));
	} else {
		var_1_75 = ((4 + (max (16 , var_1_64))) - var_1_69);
	}


	// From: CodeObject28
	if ((var_1_74 <= 128) && var_1_25) {
		var_1_76 = (var_1_25 || (var_1_77 || var_1_78));
	} else {
		if (var_1_33 >= (max (var_1_31 , var_1_69))) {
			var_1_76 = (! var_1_77);
		}
	}


	// From: CodeObject29
	if (var_1_62 < var_1_42) {
		var_1_79 = (min (((var_1_80 - var_1_64) - (min (var_1_30 , var_1_69))) , (abs (var_1_38))));
	}


	// From: CodeObject30
	if (var_1_22 < var_1_28) {
		var_1_81 = (! (! (var_1_25 || var_1_78)));
	} else {
		var_1_81 = (var_1_25 || var_1_78);
	}


	// From: CodeObject31
	var_1_82 = (max ((abs (var_1_38)) , var_1_80));


	// From: CodeObject32
	if ((var_1_84 - (var_1_27 + var_1_30)) < (var_1_80 | (var_1_60 + var_1_47))) {
		var_1_83 = (min ((abs (var_1_39)) , var_1_41));
	}


	// From: CodeObject33
	if ((var_1_38 < var_1_65) || var_1_78) {
		var_1_85 = ((min ((min (var_1_28 , var_1_69)) , var_1_30)) + var_1_38);
	}


	// From: CodeObject34
	if ((abs (var_1_32)) <= (var_1_21 + var_1_64)) {
		if (var_1_87 <= ((var_1_58 >> var_1_33) | (var_1_35 * var_1_61))) {
			var_1_86 = ((var_1_54 >= var_1_36) || (var_1_23 || var_1_26));
		}
	}


	// From: CodeObject35
	if (var_1_81) {
		var_1_88 = (max (10 , var_1_49));
	}


	// From: CodeObject36
	if ((var_1_51 + var_1_50) == (var_1_67 & var_1_75)) {
		if ((abs (var_1_82)) >= var_1_46) {
			if ((abs (var_1_74)) >= var_1_45) {
				var_1_89 = (var_1_24 && (! var_1_26));
			} else {
				if (! var_1_81) {
					if (var_1_90 == var_1_56) {
						if (var_1_30 <= var_1_69) {
							var_1_89 = var_1_26;
						}
					} else {
						var_1_89 = (! var_1_26);
					}
				} else {
					var_1_89 = ((var_1_25 || var_1_78) || (var_1_77 && var_1_91));
				}
			}
		}
	} else {
		var_1_89 = (! 1);
	}


	// From: CodeObject37
	if (var_1_73 > (max ((abs (var_1_52)) , (var_1_53 / var_1_93)))) {
		var_1_92 = ((max ((min (var_1_40 , var_1_55)) , (abs (var_1_41)))) - var_1_39);
	} else {
		var_1_92 = (abs (var_1_41));
	}


	// From: CodeObject38
	var_1_94 = ((! var_1_78) && (var_1_76 || var_1_26));


	// From: CodeObject39
	if (var_1_24) {
		if (var_1_53 <= (var_1_40 / (max (var_1_93 , var_1_96)))) {
			var_1_95 = (max (((max (var_1_97 , 256.8f)) + var_1_41) , (abs (var_1_40))));
		}
	} else {
		if (var_1_89 || var_1_78) {
			var_1_95 = (abs (var_1_41));
		} else {
			var_1_95 = (var_1_97 + var_1_41);
		}
	}


	// From: CodeObject40
	var_1_98 = ((abs (var_1_41 - var_1_39)) - ((min (var_1_99 , var_1_100)) - var_1_55));


	// From: CodeObject41
	if (var_1_102 >= var_1_45) {
		var_1_101 = (abs (min (var_1_103 , var_1_32)));
	}


	// From: CodeObject42
	if (var_1_24) {
		if ((min (var_1_35 , var_1_82)) < var_1_75) {
			var_1_104 = (min (var_1_29 , (abs (128))));
		}
	}


	// From: CodeObject43
	var_1_105 = ((abs (var_1_38)) + var_1_34);


	// From: CodeObject44
	if ((var_1_29 + var_1_102) > (max ((var_1_72 / var_1_47) , 1000000u))) {
		var_1_106 = (max (var_1_62 , (var_1_44 - (min (32 , var_1_45)))));
	} else {
		if (var_1_54 < 256.5) {
			var_1_106 = (var_1_33 + var_1_101);
		}
	}


	// From: CodeObject45
	if (var_1_99 <= (var_1_43 * var_1_96)) {
		var_1_107 = (var_1_26 && var_1_25);
	}


	// From: CodeObject46
	if (var_1_76) {
		var_1_108 = (abs (abs (var_1_44)));
	}


	// From: CodeObject47
	if (var_1_78) {
		if (var_1_33 >= var_1_60) {
			var_1_109 = ((min (var_1_56 , var_1_97)) + var_1_41);
		} else {
			if ((abs (- var_1_110)) >= var_1_75) {
				var_1_109 = var_1_40;
			}
		}
	} else {
		var_1_109 = ((max (var_1_41 , (var_1_40 + var_1_55))) - ((min (var_1_100 , var_1_99)) - (min (var_1_111 , var_1_112))));
	}


	// From: CodeObject48
	if (var_1_25) {
		var_1_113 = var_1_26;
	}


	// From: CodeObject49
	if (var_1_76) {
		var_1_114 = var_1_61;
	}


	// From: CodeObject50
	if (var_1_25) {
		var_1_115 = 8u;
	} else {
		var_1_115 = var_1_42;
	}


	// From: CodeObject51
	var_1_116 = var_1_28;


	// From: CodeObject52
	if (var_1_23) {
		var_1_117 = var_1_40;
	}


	// From: CodeObject53
	if (var_1_107) {
		var_1_118 = 10;
	} else {
		var_1_118 = var_1_69;
	}


	// From: CodeObject54
	if (var_1_86) {
		var_1_119 = var_1_34;
	} else {
		var_1_119 = var_1_34;
	}


	// From: CodeObject55
	var_1_120 = var_1_33;


	// From: CodeObject56
	if (var_1_122) {
		var_1_121 = var_1_26;
	} else {
		var_1_121 = var_1_77;
	}


	// From: CodeObject57
	if (var_1_113) {
		var_1_123 = var_1_80;
	} else {
		var_1_123 = var_1_80;
	}


	// From: CodeObject58
	if (var_1_122) {
		var_1_124 = var_1_77;
	} else {
		var_1_124 = var_1_26;
	}


	// From: CodeObject59
	if (var_1_122) {
		var_1_125 = var_1_26;
	} else {
		var_1_125 = var_1_77;
	}


	// From: CodeObject60
	if (((var_1_108 >> var_1_42) + (var_1_21 & 128)) > (max ((max (var_1_85 , var_1_123)) , (4u % var_1_69)))) {
		var_1_126 = 0;
	}


	// From: CodeObject61
	var_1_127 = var_1_97;


	// From: Req3Batch46PS_CN_500
	if (-100000 >= last_1_var_1_13) {
		var_1_9 = (max ((last_1_var_1_13 + var_1_5) , 64));
	} else {
		if ((last_1_var_1_17 / var_1_11) == 999999.6f) {
			var_1_9 = var_1_7;
		}
	}


	// From: Req1Batch46PS_CN_500
	unsigned char stepLocal_0 = var_1_3;
	if (var_1_2 && stepLocal_0) {
		var_1_1 = (var_1_4 - var_1_5);
	} else {
		var_1_1 = (var_1_4 - var_1_5);
	}


	// From: Req2Batch46PS_CN_500
	if (var_1_1 <= (var_1_5 * var_1_4)) {
		if (var_1_2) {
			var_1_6 = ((min (var_1_7 , var_1_8)) - var_1_5);
		} else {
			var_1_6 = var_1_5;
		}
	} else {
		var_1_6 = var_1_5;
	}


	// From: Req6Batch46PS_CN_500
	var_1_17 = var_1_18;


	// From: Req7Batch46PS_CN_500
	var_1_19 = 5;


	// From: Req8Batch46PS_CN_500
	var_1_20 = var_1_15;


	// From: Req4Batch46PS_CN_500
	if (var_1_1 < var_1_20) {
		if (var_1_5 == (~ (var_1_1 + var_1_20))) {
			var_1_12 = ((max (var_1_5 , (min (-1 , var_1_1)))) - 1000);
		} else {
			var_1_12 = (min (var_1_20 , var_1_8));
		}
	} else {
		var_1_12 = var_1_6;
	}


	// From: Req5Batch46PS_CN_500
	if ((-4 >> (min (var_1_14 , var_1_15))) >= (var_1_7 | (max (var_1_8 , var_1_9)))) {
		if (var_1_3) {
			var_1_13 = var_1_6;
		} else {
			var_1_13 = var_1_4;
		}
	} else {
		var_1_13 = var_1_1;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 32767);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 4294967294);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -126);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -31);
	assume_abort_if_not(var_1_33 <= 32);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -31);
	assume_abort_if_not(var_1_34 <= 31);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 65535);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 255);
	assume_abort_if_not(var_1_44 != 0);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 1073741823);
	assume_abort_if_not(var_1_47 <= 2147483647);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 126);
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= -461168.6018427382800e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= -128);
	assume_abort_if_not(var_1_61 <= 127);
	assume_abort_if_not(var_1_61 != 0);
	var_1_64 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 16);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 127);
	assume_abort_if_not(var_1_68 <= 255);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 1);
	assume_abort_if_not(var_1_69 <= 126);
	assume_abort_if_not(var_1_69 != 127);
	var_1_70 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_70 >= -126);
	assume_abort_if_not(var_1_70 <= 126);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= -127);
	assume_abort_if_not(var_1_71 <= 126);
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= -922337.2036854776000e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854776000e+12F && var_1_73 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 0);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 0);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 190);
	assume_abort_if_not(var_1_80 <= 254);
	var_1_84 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_84 >= 32767);
	assume_abort_if_not(var_1_84 <= 65535);
	var_1_87 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_87 >= -128);
	assume_abort_if_not(var_1_87 <= 127);
	var_1_90 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_90 >= -922337.2036854776000e+13F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 9223372.036854776000e+12F && var_1_90 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 0);
	var_1_93 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_93 >= -922337.2036854776000e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 9223372.036854776000e+12F && var_1_93 >= 1.0e-20F ));
	assume_abort_if_not(var_1_93 != 0.0F);
	var_1_96 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_96 >= -922337.2036854776000e+13F && var_1_96 <= -1.0e-20F) || (var_1_96 <= 9223372.036854776000e+12F && var_1_96 >= 1.0e-20F ));
	assume_abort_if_not(var_1_96 != 0.0F);
	var_1_97 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_97 >= -461168.6018427382800e+13F && var_1_97 <= -1.0e-20F) || (var_1_97 <= 4611686.018427382800e+12F && var_1_97 >= 1.0e-20F ));
	var_1_99 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_99 >= 4611686.018427382800e+12F && var_1_99 <= -1.0e-20F) || (var_1_99 <= 9223372.036854765600e+12F && var_1_99 >= 1.0e-20F ));
	var_1_100 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_100 >= 4611686.018427382800e+12F && var_1_100 <= -1.0e-20F) || (var_1_100 <= 9223372.036854765600e+12F && var_1_100 >= 1.0e-20F ));
	var_1_102 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_102 >= 0);
	assume_abort_if_not(var_1_102 <= 4294967295);
	var_1_103 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_103 >= -126);
	assume_abort_if_not(var_1_103 <= 126);
	var_1_110 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_110 >= 0);
	assume_abort_if_not(var_1_110 <= 255);
	var_1_111 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_111 >= 0.0F && var_1_111 <= -1.0e-20F) || (var_1_111 <= 4611686.018427382800e+12F && var_1_111 >= 1.0e-20F ));
	var_1_112 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_112 >= 0.0F && var_1_112 <= -1.0e-20F) || (var_1_112 <= 4611686.018427382800e+12F && var_1_112 >= 1.0e-20F ));
	var_1_122 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_122 >= 0);
	assume_abort_if_not(var_1_122 <= 1);
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_17 = var_1_17;
}

int property() {
	return ((((((((var_1_2 && var_1_3) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : (var_1_1 == ((unsigned char) (var_1_4 - var_1_5)))) && ((var_1_1 <= (var_1_5 * var_1_4)) ? (var_1_2 ? (var_1_6 == ((unsigned short int) ((min (var_1_7 , var_1_8)) - var_1_5))) : (var_1_6 == ((unsigned short int) var_1_5))) : (var_1_6 == ((unsigned short int) var_1_5)))) && ((-100000 >= last_1_var_1_13) ? (var_1_9 == ((unsigned short int) (max ((last_1_var_1_13 + var_1_5) , 64)))) : (((last_1_var_1_17 / var_1_11) == 999999.6f) ? (var_1_9 == ((unsigned short int) var_1_7)) : 1))) && ((var_1_1 < var_1_20) ? ((var_1_5 == (~ (var_1_1 + var_1_20))) ? (var_1_12 == ((signed long int) ((max (var_1_5 , (min (-1 , var_1_1)))) - 1000))) : (var_1_12 == ((signed long int) (min (var_1_20 , var_1_8))))) : (var_1_12 == ((signed long int) var_1_6)))) && (((-4 >> (min (var_1_14 , var_1_15))) >= (var_1_7 | (max (var_1_8 , var_1_9)))) ? (var_1_3 ? (var_1_13 == ((unsigned short int) var_1_6)) : (var_1_13 == ((unsigned short int) var_1_4))) : (var_1_13 == ((unsigned short int) var_1_1)))) && (var_1_17 == ((double) var_1_18))) && (var_1_19 == ((signed char) 5))) && (var_1_20 == ((unsigned long int) var_1_15))
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
