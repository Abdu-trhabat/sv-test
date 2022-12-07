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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch36PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 8.75;
unsigned char var_1_2 = 1;
double var_1_3 = 9.6;
double var_1_4 = 7.625;
double var_1_5 = 1.5;
double var_1_6 = 63.17;
double var_1_7 = 15.5;
unsigned short int var_1_8 = 4;
unsigned short int var_1_9 = 45624;
unsigned short int var_1_10 = 39447;
unsigned short int var_1_11 = 10;
double var_1_12 = 255.5;
double var_1_13 = 0.0;
double var_1_14 = 127.5;
float var_1_15 = 8.2;
float var_1_16 = 2.8;
signed short int var_1_17 = 8;
double var_1_18 = 24.8;
signed short int var_1_19 = -256;
signed short int var_1_20 = 8;
signed short int var_1_21 = 16;
unsigned short int var_1_22 = 2;
unsigned short int var_1_24 = 16;
unsigned char var_1_25 = 0;
unsigned short int var_1_26 = 1;
unsigned long int var_1_27 = 10;
signed char var_1_28 = -50;
unsigned short int var_1_29 = 8;
unsigned short int var_1_30 = 32;
unsigned short int var_1_31 = 49701;
unsigned char var_1_32 = 32;
unsigned char var_1_33 = 25;
unsigned char var_1_34 = 0;
signed short int var_1_35 = 50;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 1;
unsigned long int var_1_40 = 8;
unsigned long int var_1_41 = 64;
float var_1_42 = 999999.9;
float var_1_43 = 10000.5;
float var_1_44 = 127.2;
unsigned short int var_1_45 = 25;
unsigned short int var_1_46 = 4;
signed char var_1_47 = 8;
signed char var_1_48 = 0;
signed char var_1_49 = -32;
signed char var_1_50 = 25;
signed short int var_1_51 = -256;
signed char var_1_52 = 32;
signed char var_1_53 = 5;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 50;
unsigned char var_1_56 = 200;
signed long int var_1_57 = 200;
signed long int var_1_58 = 2;
signed long int var_1_59 = -2;
signed long int var_1_60 = -100;
signed long int var_1_61 = 1471344400;
unsigned char var_1_62 = 1;
unsigned char var_1_63 = 0;
unsigned long int var_1_64 = 1;
signed char var_1_65 = 8;
signed long int var_1_66 = 10;
signed long int var_1_67 = -16;
signed char var_1_68 = 0;
unsigned char var_1_69 = 50;
unsigned short int var_1_70 = 64;
signed short int var_1_71 = -256;
double var_1_72 = 3.875;
signed char var_1_73 = -100;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 0;
signed short int var_1_76 = 1;
double var_1_77 = 5.25;
double var_1_78 = 100.2;
double var_1_79 = 32.45;
double var_1_80 = 10000000.25;
double var_1_81 = 0.2;
signed long int var_1_82 = -50;
unsigned char var_1_83 = 64;
unsigned long int var_1_84 = 0;
unsigned long int var_1_85 = 2487661706;
unsigned long int var_1_86 = 32;
unsigned char var_1_87 = 0;
float var_1_88 = 49.5;
float var_1_89 = 5.4;
float var_1_90 = 4.45;
unsigned long int var_1_91 = 4;
unsigned long int var_1_92 = 1862173929;
unsigned char var_1_93 = 32;
float var_1_94 = 24.3;
signed short int var_1_95 = 0;
unsigned char var_1_96 = 8;
unsigned char var_1_97 = 1;
unsigned long int var_1_98 = 64;
signed char var_1_99 = -128;
signed char var_1_100 = 4;
signed char var_1_101 = -8;
float var_1_102 = 1000000000000.375;
signed long int var_1_103 = 32;
unsigned char var_1_104 = 2;
signed long int var_1_105 = -5;
unsigned char var_1_106 = 0;
signed char var_1_107 = 64;
signed char var_1_108 = 10;
float var_1_109 = 999.2;
unsigned char var_1_110 = 128;
signed char var_1_111 = 8;
unsigned char var_1_112 = 5;
double var_1_113 = 64.5;
unsigned char var_1_114 = 0;
signed short int var_1_115 = -64;
unsigned char var_1_116 = 4;
unsigned long int var_1_117 = 25;
double var_1_118 = 31.8;
double var_1_119 = 7.1;
double var_1_120 = 3.75;
unsigned char var_1_121 = 1;
float var_1_122 = 100.75;
float var_1_123 = 8.3;
unsigned long int var_1_124 = 32;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_22 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((128u < var_1_27) || (var_1_28 <= -1)) {
		var_1_26 = (var_1_29 + var_1_30);
	} else {
		if (var_1_27 <= 0u) {
			var_1_26 = (abs (var_1_31 - var_1_29));
		} else {
			var_1_26 = var_1_31;
		}
	}


	// From: CodeObject2
	if (var_1_27 > 2u) {
		var_1_32 = (abs (var_1_33 + (64 - var_1_34)));
	}


	// From: CodeObject3
	if (var_1_34 < ((var_1_30 | var_1_26) >> var_1_31)) {
		var_1_35 = (var_1_34 - var_1_32);
	}


	// From: CodeObject4
	if (var_1_29 <= var_1_30) {
		if (1 <= var_1_30) {
			var_1_36 = (! var_1_37);
		} else {
			var_1_36 = (var_1_37 || var_1_38);
		}
	} else {
		if ((abs (var_1_31)) <= ((var_1_27 | var_1_35) >> var_1_33)) {
			var_1_36 = ((var_1_27 <= var_1_33) || var_1_39);
		}
	}


	// From: CodeObject5
	if (var_1_37) {
		var_1_40 = (min (((abs (128u)) + var_1_30) , (max (var_1_32 , (500u + var_1_26)))));
	}


	// From: CodeObject6
	if (var_1_33 >= var_1_28) {
		var_1_41 = (abs (var_1_26));
	}


	// From: CodeObject7
	if (var_1_37) {
		var_1_42 = (min (var_1_43 , var_1_44));
	}


	// From: CodeObject8
	if ((var_1_32 % var_1_31) <= var_1_28) {
		var_1_45 = ((var_1_34 + var_1_33) + (max (var_1_30 , (var_1_32 + var_1_46))));
	}


	// From: CodeObject9
	if (var_1_28 > var_1_34) {
		if (var_1_29 < var_1_45) {
			var_1_47 = ((var_1_34 + var_1_48) - ((abs (var_1_49)) + var_1_50));
		}
	} else {
		if (var_1_45 >= var_1_31) {
			if ((var_1_46 % var_1_51) >= (abs (var_1_35))) {
				var_1_47 = (((var_1_52 - var_1_53) - (abs (var_1_34))) + var_1_50);
			} else {
				var_1_47 = (abs (abs (var_1_34)));
			}
		} else {
			var_1_47 = var_1_52;
		}
	}


	// From: CodeObject10
	if (var_1_40 < (- (~ var_1_41))) {
		if (var_1_50 >= (min ((-1 << var_1_32) , (var_1_26 + var_1_40)))) {
			if (var_1_36) {
				var_1_54 = var_1_53;
			}
		} else {
			var_1_54 = var_1_52;
		}
	} else {
		if ((min (var_1_51 , var_1_32)) <= var_1_35) {
			var_1_54 = var_1_48;
		} else {
			var_1_54 = var_1_48;
		}
	}


	// From: CodeObject11
	if (var_1_40 == (var_1_30 ^ (var_1_34 + var_1_46))) {
		if (var_1_45 < var_1_32) {
			if ((abs (var_1_42)) <= var_1_44) {
				var_1_55 = (abs (var_1_56 - var_1_33));
			} else {
				var_1_55 = (max ((min (var_1_53 , var_1_52)) , (abs (min (var_1_33 , var_1_56)))));
			}
		}
	}


	// From: CodeObject12
	if (var_1_48 > var_1_28) {
		var_1_57 = (abs (abs (var_1_58)));
	} else {
		var_1_57 = (max ((abs (var_1_59)) , var_1_34));
	}


	// From: CodeObject13
	if (var_1_45 < var_1_34) {
		var_1_60 = ((var_1_55 + var_1_56) - (var_1_61 - (abs (var_1_46))));
	} else {
		var_1_60 = (max (var_1_54 , var_1_59));
	}


	// From: CodeObject14
	if (var_1_61 <= var_1_40) {
		var_1_62 = (var_1_38 && var_1_37);
	} else {
		var_1_62 = var_1_63;
	}


	// From: CodeObject15
	if (var_1_50 < var_1_65) {
		var_1_64 = (var_1_46 + (abs (var_1_61 - var_1_34)));
	} else {
		var_1_64 = (abs (var_1_61));
	}


	// From: CodeObject16
	if (var_1_61 <= var_1_29) {
		var_1_66 = var_1_46;
	} else {
		var_1_66 = (abs (abs (var_1_59)));
	}


	// From: CodeObject17
	if (var_1_52 != var_1_64) {
		var_1_67 = (abs (abs (var_1_46)));
	}


	// From: CodeObject18
	if (var_1_27 <= 0u) {
		var_1_68 = (max (var_1_34 , var_1_50));
	}


	// From: CodeObject19
	if ((var_1_43 + var_1_42) < (abs (var_1_44))) {
		var_1_69 = (var_1_56 - (max (16 , var_1_48)));
	} else {
		if (var_1_62 && var_1_63) {
			var_1_69 = (var_1_56 - 2);
		} else {
			var_1_69 = (abs (var_1_52));
		}
	}


	// From: CodeObject20
	if (((abs (var_1_53)) & var_1_29) <= var_1_68) {
		var_1_70 = (((max (32379 , 31024)) - var_1_54) + var_1_30);
	}


	// From: CodeObject21
	if (((var_1_42 / var_1_72) * (- var_1_43)) <= var_1_44) {
		if (var_1_47 <= var_1_40) {
			if (var_1_61 >= var_1_68) {
				var_1_71 = (max ((abs (var_1_50)) , ((max (var_1_56 , var_1_49)) + (min (var_1_33 , var_1_48)))));
			}
		} else {
			var_1_71 = var_1_28;
		}
	} else {
		var_1_71 = 2;
	}


	// From: CodeObject22
	if (var_1_36) {
		if (var_1_67 == (var_1_64 / var_1_31)) {
			var_1_73 = var_1_53;
		}
	}


	// From: CodeObject23
	if ((min (var_1_50 , var_1_56)) <= var_1_70) {
		if ((256 | var_1_46) > var_1_66) {
			var_1_74 = (var_1_63 || var_1_75);
		}
	}


	// From: CodeObject24
	if (((var_1_26 | var_1_52) / var_1_51) > var_1_68) {
		if (var_1_40 <= ((abs (var_1_64)) | 100u)) {
			var_1_76 = (var_1_65 + var_1_48);
		}
	}


	// From: CodeObject25
	if (var_1_58 >= (-256 / var_1_51)) {
		var_1_77 = (max (var_1_43 , (min (var_1_44 , (min (var_1_78 , var_1_79))))));
	} else {
		var_1_77 = (var_1_80 - var_1_81);
	}


	// From: CodeObject26
	if (var_1_39) {
		var_1_82 = (max ((min ((max (var_1_51 , var_1_26)) , var_1_59)) , var_1_49));
	}


	// From: CodeObject27
	if (var_1_68 <= var_1_70) {
		var_1_83 = (min (8 , var_1_50));
	}


	// From: CodeObject28
	if (var_1_39) {
		if (-200 >= var_1_64) {
			if ((var_1_68 / var_1_56) > (~ (var_1_83 & var_1_26))) {
				var_1_84 = var_1_46;
			}
		}
	} else {
		var_1_84 = (max ((var_1_85 - (max (var_1_32 , var_1_30))) , 10u));
	}


	// From: CodeObject29
	if (var_1_71 > var_1_60) {
		var_1_86 = var_1_32;
	} else {
		if (var_1_65 >= 10) {
			var_1_86 = (abs (var_1_31));
		}
	}


	// From: CodeObject30
	if (var_1_67 != (var_1_48 ^ var_1_30)) {
		var_1_87 = (! var_1_75);
	}


	// From: CodeObject31
	if ((var_1_28 >= var_1_64) && ((var_1_57 >> 1) > var_1_76)) {
		if (! (var_1_54 > (var_1_33 / var_1_56))) {
			var_1_88 = (abs (var_1_44));
		} else {
			if (((var_1_52 * var_1_82) / var_1_51) >= var_1_26) {
				var_1_88 = (max ((var_1_89 + var_1_90) , var_1_80));
			}
		}
	}


	// From: CodeObject32
	if (var_1_36) {
		if (var_1_73 == (var_1_60 * -128)) {
			var_1_91 = ((abs (var_1_45)) + var_1_54);
		} else {
			var_1_91 = ((1711226769u + var_1_92) - var_1_29);
		}
	}


	// From: CodeObject33
	if (var_1_75) {
		var_1_93 = (min ((abs (min (var_1_56 , 64))) , (abs (var_1_53))));
	}


	// From: CodeObject34
	if (var_1_71 < ((abs (var_1_54)) ^ (abs (var_1_34)))) {
		if (var_1_79 < var_1_42) {
			var_1_94 = (abs (var_1_79));
		} else {
			var_1_94 = (var_1_90 + var_1_89);
		}
	}


	// From: CodeObject35
	if ((- var_1_41) <= var_1_40) {
		var_1_95 = ((max (var_1_48 , var_1_32)) + var_1_69);
	}


	// From: CodeObject36
	if (var_1_40 > var_1_84) {
		if (var_1_37) {
			if (var_1_54 >= var_1_33) {
				var_1_96 = (((abs (var_1_34)) + 32) + (abs (abs (var_1_53))));
			} else {
				var_1_96 = (max ((abs (var_1_53)) , var_1_48));
			}
		} else {
			var_1_96 = var_1_56;
		}
	} else {
		if ((63.2 * (min (var_1_72 , var_1_78))) >= var_1_89) {
			var_1_96 = (max (((max (var_1_33 , var_1_48)) + 8) , var_1_34));
		} else {
			var_1_96 = (var_1_97 + var_1_34);
		}
	}


	// From: CodeObject37
	if (var_1_74) {
		if ((~ (var_1_34 ^ var_1_27)) >= var_1_61) {
			var_1_98 = (max (var_1_93 , (min (var_1_31 , (3390355675u - var_1_50)))));
		}
	} else {
		var_1_98 = (abs (abs (2u)));
	}


	// From: CodeObject38
	if ((var_1_31 - var_1_46) == (abs (var_1_71))) {
		if (! var_1_62) {
			if (var_1_59 > ((min (var_1_54 , 0)) ^ var_1_34)) {
				if ((max (var_1_67 , var_1_73)) <= var_1_58) {
					var_1_99 = (abs (abs (5)));
				} else {
					var_1_99 = (abs (var_1_52));
				}
			}
		} else {
			if ((min (var_1_45 , (var_1_61 >> var_1_58))) <= ((abs (var_1_49)) << var_1_91)) {
				if (var_1_56 > var_1_91) {
					if (var_1_83 == var_1_30) {
						var_1_99 = (abs (var_1_52));
					}
				} else {
					var_1_99 = ((32 + (var_1_100 + var_1_101)) + var_1_34);
				}
			}
		}
	} else {
		var_1_99 = (abs (var_1_48 - (max (var_1_53 , var_1_34))));
	}


	// From: CodeObject39
	if ((min (var_1_27 , -32)) > (abs (var_1_40))) {
		if (var_1_36) {
			if ((max ((max (var_1_53 , 64)) , var_1_45)) >= var_1_28) {
				var_1_102 = (min ((min (127.25f , var_1_90)) , -0.25f));
			}
		} else {
			var_1_102 = 9.99999999999125E11f;
		}
	}


	// From: CodeObject40
	if ((var_1_76 <= (var_1_100 % -5)) && var_1_75) {
		var_1_103 = (abs (var_1_71));
	} else {
		if ((var_1_35 & (var_1_26 | var_1_93)) >= var_1_27) {
			if (var_1_75) {
				var_1_103 = (abs (var_1_96));
			} else {
				var_1_103 = ((min (var_1_26 , var_1_34)) - var_1_56);
			}
		}
	}


	// From: CodeObject41
	if (var_1_31 > var_1_92) {
		if (var_1_36 && var_1_62) {
			var_1_104 = ((abs (var_1_56)) - var_1_53);
		}
	} else {
		var_1_104 = (var_1_56 - var_1_52);
	}


	// From: CodeObject42
	var_1_105 = (max (var_1_104 , var_1_71));


	// From: CodeObject43
	if ((max (var_1_93 , var_1_61)) > (var_1_69 - var_1_56)) {
		var_1_106 = ((! (var_1_33 <= var_1_29)) || var_1_39);
	}


	// From: CodeObject44
	if ((var_1_69 | var_1_33) < var_1_98) {
		var_1_107 = (abs (var_1_52));
	}


	// From: CodeObject45
	if (var_1_106 || var_1_62) {
		var_1_108 = (min (var_1_48 , -32));
	}


	// From: CodeObject46
	if ((var_1_56 - var_1_34) >= (max ((var_1_93 - var_1_26) , var_1_99))) {
		if ((var_1_31 * var_1_52) <= var_1_65) {
			var_1_109 = var_1_78;
		} else {
			var_1_109 = 10.75f;
		}
	} else {
		var_1_109 = var_1_78;
	}


	// From: CodeObject47
	if (var_1_74) {
		var_1_110 = var_1_56;
	} else {
		var_1_110 = var_1_50;
	}


	// From: CodeObject48
	if (var_1_75) {
		var_1_111 = var_1_53;
	} else {
		var_1_111 = var_1_53;
	}


	// From: CodeObject49
	var_1_112 = var_1_52;


	// From: CodeObject50
	var_1_113 = var_1_43;


	// From: CodeObject51
	if (var_1_74) {
		var_1_114 = var_1_38;
	} else {
		var_1_114 = var_1_38;
	}


	// From: CodeObject52
	var_1_115 = 10;


	// From: CodeObject53
	var_1_116 = var_1_52;


	// From: CodeObject54
	if (var_1_74) {
		var_1_117 = var_1_54;
	} else {
		var_1_117 = var_1_32;
	}


	// From: CodeObject55
	var_1_118 = var_1_80;


	// From: CodeObject56
	if (var_1_62) {
		var_1_119 = var_1_80;
	} else {
		var_1_119 = 256.875;
	}


	// From: CodeObject57
	var_1_120 = var_1_79;


	// From: CodeObject58
	if (var_1_106) {
		var_1_121 = 0;
	} else {
		var_1_121 = var_1_75;
	}


	// From: CodeObject59
	if (var_1_39) {
		var_1_122 = var_1_90;
	}


	// From: CodeObject60
	if (var_1_75) {
		var_1_123 = var_1_90;
	}


	// From: CodeObject61
	if (var_1_64 < var_1_46) {
		if ((var_1_76 ^ (var_1_50 - var_1_53)) <= var_1_64) {
			var_1_124 = (abs (var_1_112 + var_1_31));
		} else {
			var_1_124 = 1000000000u;
		}
	} else {
		var_1_124 = var_1_45;
	}


	// From: Req1Batch36PS_CN_500
	if (var_1_2) {
		var_1_1 = (min ((max ((var_1_3 - var_1_4) , (min (var_1_5 , var_1_6)))) , var_1_7));
	}


	// From: Req2Batch36PS_CN_500
	var_1_8 = ((min (var_1_9 , var_1_10)) - var_1_11);


	// From: Req3Batch36PS_CN_500
	if (var_1_2) {
		var_1_12 = (min ((var_1_3 - (var_1_13 - 128.68)) , var_1_7));
	}


	// From: Req4Batch36PS_CN_500
	var_1_14 = var_1_6;


	// From: Req5Batch36PS_CN_500
	if (var_1_13 >= var_1_14) {
		if (var_1_2) {
			if (var_1_8 == var_1_11) {
				var_1_15 = 10.975f;
			}
		}
	}


	// From: Req6Batch36PS_CN_500
	if (var_1_3 <= var_1_4) {
		var_1_16 = (min (var_1_6 , var_1_4));
	}


	// From: Req7Batch36PS_CN_500
	unsigned short int stepLocal_0 = var_1_11;
	if (var_1_7 >= (var_1_5 / (min (var_1_13 , var_1_18)))) {
		if ((var_1_10 + var_1_9) <= stepLocal_0) {
			if (var_1_2) {
				var_1_17 = var_1_19;
			}
		} else {
			var_1_17 = (var_1_20 - (abs (var_1_21)));
		}
	} else {
		var_1_17 = var_1_21;
	}


	// From: Req8Batch36PS_CN_500
	if ((var_1_11 + var_1_20) <= ((var_1_21 * last_1_var_1_22) * var_1_19)) {
		var_1_22 = (max ((var_1_9 - var_1_11) , var_1_10));
	}


	// From: Req9Batch36PS_CN_500
	if (var_1_9 < var_1_11) {
		if (var_1_2 || var_1_25) {
			var_1_24 = 128;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854765600e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 4611686.018427382800e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	assume_abort_if_not(var_1_18 != 0.0F);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -32767);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -32766);
	assume_abort_if_not(var_1_21 <= 32766);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -128);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 32767);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -922337.2036854765600e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -922337.2036854765600e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 16383);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 63);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -63);
	assume_abort_if_not(var_1_49 <= 63);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 63);
	var_1_51 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_51 >= -32768);
	assume_abort_if_not(var_1_51 <= 32767);
	assume_abort_if_not(var_1_51 != 0);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= 31);
	assume_abort_if_not(var_1_52 <= 63);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 31);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 127);
	assume_abort_if_not(var_1_56 <= 254);
	var_1_58 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_58 >= -2147483646);
	assume_abort_if_not(var_1_58 <= 2147483646);
	var_1_59 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_59 >= -2147483646);
	assume_abort_if_not(var_1_59 <= 2147483646);
	var_1_61 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_61 >= 1073741823);
	assume_abort_if_not(var_1_61 <= 2147483646);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 0);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -128);
	assume_abort_if_not(var_1_65 <= 127);
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= -922337.2036854776000e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854776000e+12F && var_1_72 >= 1.0e-20F ));
	assume_abort_if_not(var_1_72 != 0.0F);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 0);
	var_1_78 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_78 >= -922337.2036854765600e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 9223372.036854765600e+12F && var_1_78 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_79 >= -922337.2036854765600e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 9223372.036854765600e+12F && var_1_79 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854765600e+12F && var_1_80 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_81 >= 0.0F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 9223372.036854765600e+12F && var_1_81 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_85 >= 2147483647);
	assume_abort_if_not(var_1_85 <= 4294967294);
	var_1_89 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_89 >= -461168.6018427382800e+13F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 4611686.018427382800e+12F && var_1_89 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_90 >= -461168.6018427382800e+13F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 4611686.018427382800e+12F && var_1_90 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_92 >= 1073741824);
	assume_abort_if_not(var_1_92 <= 2147483647);
	var_1_97 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_97 >= 0);
	assume_abort_if_not(var_1_97 <= 127);
	var_1_100 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_100 >= -15);
	assume_abort_if_not(var_1_100 <= 16);
	var_1_101 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_101 >= -15);
	assume_abort_if_not(var_1_101 <= 15);
}



void updateLastVariables() {
	last_1_var_1_22 = var_1_22;
}

int property() {
	return ((((((((var_1_2 ? (var_1_1 == ((double) (min ((max ((var_1_3 - var_1_4) , (min (var_1_5 , var_1_6)))) , var_1_7)))) : 1) && (var_1_8 == ((unsigned short int) ((min (var_1_9 , var_1_10)) - var_1_11)))) && (var_1_2 ? (var_1_12 == ((double) (min ((var_1_3 - (var_1_13 - 128.68)) , var_1_7)))) : 1)) && (var_1_14 == ((double) var_1_6))) && ((var_1_13 >= var_1_14) ? (var_1_2 ? ((var_1_8 == var_1_11) ? (var_1_15 == ((float) 10.975f)) : 1) : 1) : 1)) && ((var_1_3 <= var_1_4) ? (var_1_16 == ((float) (min (var_1_6 , var_1_4)))) : 1)) && ((var_1_7 >= (var_1_5 / (min (var_1_13 , var_1_18)))) ? (((var_1_10 + var_1_9) <= var_1_11) ? (var_1_2 ? (var_1_17 == ((signed short int) var_1_19)) : 1) : (var_1_17 == ((signed short int) (var_1_20 - (abs (var_1_21)))))) : (var_1_17 == ((signed short int) var_1_21)))) && (((var_1_11 + var_1_20) <= ((var_1_21 * last_1_var_1_22) * var_1_19)) ? (var_1_22 == ((unsigned short int) (max ((var_1_9 - var_1_11) , var_1_10)))) : 1)) && ((var_1_9 < var_1_11) ? ((var_1_2 || var_1_25) ? (var_1_24 == ((unsigned short int) 128)) : 1) : 1)
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
