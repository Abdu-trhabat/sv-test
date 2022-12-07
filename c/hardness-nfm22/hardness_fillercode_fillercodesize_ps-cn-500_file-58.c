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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch58PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_3 = 16;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
signed short int var_1_10 = 128;
signed short int var_1_11 = 5;
signed char var_1_12 = -2;
signed char var_1_13 = -32;
signed char var_1_14 = 2;
signed char var_1_15 = 25;
signed char var_1_16 = 1;
signed char var_1_17 = 0;
signed long int var_1_18 = -16;
float var_1_19 = 2.775;
unsigned long int var_1_20 = 2381110720;
float var_1_21 = 10000000000000.5;
unsigned char var_1_22 = 1;
signed long int var_1_23 = 5;
unsigned char var_1_24 = 0;
unsigned long int var_1_25 = 256;
unsigned long int var_1_26 = 5;
unsigned long int var_1_27 = 5;
signed char var_1_28 = 10;
signed char var_1_29 = 50;
unsigned long int var_1_30 = 50;
signed char var_1_31 = 64;
signed char var_1_32 = 32;
signed long int var_1_33 = 1000000000;
unsigned long int var_1_34 = 50;
double var_1_35 = 1.5;
double var_1_36 = 8.4;
double var_1_37 = 24.95;
double var_1_38 = 4.3;
double var_1_39 = 1.1;
double var_1_40 = 100.5;
double var_1_41 = 0.4;
double var_1_42 = 15.6;
float var_1_43 = 100.75;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
float var_1_48 = 0.55;
float var_1_49 = 4.2;
float var_1_50 = 63.4;
signed short int var_1_51 = -1;
signed short int var_1_52 = 5;
signed char var_1_53 = 16;
signed short int var_1_54 = -1;
double var_1_55 = 31.5;
signed char var_1_56 = 0;
signed char var_1_57 = -32;
signed short int var_1_58 = 2;
signed short int var_1_59 = -5;
signed short int var_1_60 = -128;
signed char var_1_61 = 5;
unsigned short int var_1_62 = 256;
signed char var_1_63 = -32;
double var_1_64 = 31.3;
signed char var_1_65 = 32;
signed short int var_1_66 = 5;
unsigned short int var_1_67 = 4;
signed short int var_1_68 = 5;
signed short int var_1_69 = 2;
double var_1_70 = 0.0;
unsigned char var_1_71 = 0;
float var_1_72 = 10.25;
signed char var_1_73 = 2;
signed long int var_1_74 = -1;
signed char var_1_75 = -25;
signed char var_1_76 = 2;
signed char var_1_77 = 5;
signed char var_1_78 = 16;
signed char var_1_79 = 64;
double var_1_80 = 99999999999.5;
unsigned char var_1_81 = 1;
unsigned long int var_1_82 = 16;
unsigned long int var_1_83 = 3031730005;
unsigned char var_1_84 = 0;
signed long int var_1_85 = -25;
signed long int var_1_86 = 1416509671;
float var_1_87 = 7.85;
unsigned char var_1_88 = 0;
unsigned char var_1_89 = 128;
float var_1_90 = 9999999.6;
float var_1_91 = 10.625;
unsigned char var_1_92 = 64;
signed long int var_1_93 = -32;
unsigned char var_1_94 = 4;
unsigned char var_1_95 = 200;
signed short int var_1_96 = 50;
signed long int var_1_97 = 32;
unsigned short int var_1_98 = 25;
unsigned short int var_1_99 = 43841;
signed short int var_1_100 = 128;
signed short int var_1_101 = 256;
unsigned char var_1_102 = 0;
unsigned long int var_1_103 = 16;
unsigned char var_1_104 = 64;
unsigned short int var_1_105 = 4;
unsigned char var_1_106 = 0;
double var_1_107 = 0.125;
unsigned short int var_1_108 = 25;
unsigned long int var_1_109 = 100000000;
signed long int var_1_110 = 100;
float var_1_111 = 8.6;
unsigned char var_1_112 = 100;
double var_1_113 = 10.27;
double var_1_114 = 10.6;
signed short int var_1_115 = -1;
signed long int var_1_116 = 0;
float var_1_117 = 0.6;
signed char var_1_118 = -100;
signed long int var_1_119 = 50;
unsigned short int var_1_120 = 100;
unsigned short int var_1_121 = 200;
unsigned short int var_1_122 = 8;
double var_1_123 = 25.8;
unsigned char var_1_124 = 10;
unsigned char var_1_125 = 0;
signed short int var_1_126 = 10000;
float var_1_127 = 255.8;
unsigned short int var_1_128 = 4;
signed long int var_1_129 = 32;
unsigned long int var_1_130 = 5;
signed long int var_1_131 = -32;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_10 = 128;
signed short int last_1_var_1_11 = 5;
signed char last_1_var_1_15 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (256 != var_1_23) {
		var_1_22 = ((! 1) || var_1_24);
	}


	// From: CodeObject2
	if ((var_1_23 / var_1_26) <= var_1_27) {
		if ((~ (var_1_28 - var_1_29)) < var_1_27) {
			if (((10 + var_1_28) <= (var_1_29 & var_1_27)) || var_1_22) {
				var_1_25 = (min ((abs (var_1_29)) , var_1_30));
			}
		}
	} else {
		if ((var_1_26 * (var_1_30 + var_1_29)) <= var_1_23) {
			var_1_25 = (abs ((min (var_1_29 , 2u)) + 64u));
		}
	}


	// From: CodeObject3
	if (var_1_24) {
		var_1_31 = (abs (var_1_32));
	} else {
		var_1_31 = 16;
	}


	// From: CodeObject4
	if (((max (var_1_29 , 2)) | var_1_30) != (var_1_34 & var_1_27)) {
		if (var_1_25 < (var_1_34 ^ (var_1_30 | 5u))) {
			var_1_33 = (min (var_1_32 , var_1_29));
		}
	}


	// From: CodeObject5
	if (var_1_28 > (var_1_29 - (abs (var_1_32)))) {
		if (var_1_22) {
			var_1_35 = (0.25 + var_1_36);
		}
	}


	// From: CodeObject6
	if ((abs (var_1_31)) <= (var_1_29 & var_1_23)) {
		if ((var_1_36 * var_1_35) >= (min (var_1_38 , var_1_39))) {
			var_1_37 = (var_1_36 + (var_1_40 + var_1_41));
		} else {
			var_1_37 = var_1_40;
		}
	}


	// From: CodeObject7
	if ((~ (~ var_1_31)) == var_1_25) {
		var_1_42 = ((5.25 + var_1_41) + (abs (499.5)));
	} else {
		var_1_42 = (abs (abs (var_1_40)));
	}


	// From: CodeObject8
	if (var_1_32 < var_1_27) {
		var_1_43 = (max ((max (7.25f , var_1_40)) , var_1_41));
	}


	// From: CodeObject9
	if ((abs (var_1_31)) >= var_1_25) {
		if (var_1_31 <= var_1_25) {
			if (var_1_32 == (var_1_23 & var_1_34)) {
				var_1_44 = (var_1_24 || (! var_1_45));
			}
		}
	} else {
		if ((var_1_26 > var_1_25) && var_1_22) {
			if (var_1_27 < var_1_33) {
				var_1_44 = var_1_45;
			} else {
				var_1_44 = (var_1_46 && var_1_47);
			}
		}
	}


	// From: CodeObject10
	if (var_1_45) {
		if ((min (var_1_30 , var_1_26)) >= (- var_1_25)) {
			var_1_48 = (abs ((var_1_49 + 256.65f) - var_1_50));
		}
	}


	// From: CodeObject11
	if (var_1_22) {
		if (var_1_40 < (abs (var_1_48))) {
			var_1_51 = (min (var_1_32 , (min ((abs (var_1_28)) , -5))));
		}
	} else {
		var_1_51 = (min ((abs (var_1_29 - var_1_52)) , var_1_28));
	}


	// From: CodeObject12
	if (var_1_22 && var_1_44) {
		var_1_53 = (abs (var_1_32));
	}


	// From: CodeObject13
	if ((var_1_42 >= var_1_38) && (var_1_37 >= 64.2)) {
		if (var_1_26 >= var_1_34) {
			var_1_54 = (abs (var_1_28));
		}
	}


	// From: CodeObject14
	if ((abs (var_1_42)) >= var_1_39) {
		var_1_55 = (abs (max (var_1_36 , (abs (var_1_49)))));
	}


	// From: CodeObject15
	if (var_1_25 < var_1_52) {
		var_1_56 = (abs (abs (min (var_1_32 , var_1_57))));
	}


	// From: CodeObject16
	var_1_58 = (abs (min (var_1_31 , var_1_59)));


	// From: CodeObject17
	if (var_1_32 >= var_1_61) {
		if (var_1_58 >= (min (var_1_32 , var_1_51))) {
			var_1_60 = (abs (var_1_31));
		} else {
			var_1_60 = (abs (var_1_52 - (abs (var_1_61))));
		}
	}


	// From: CodeObject18
	if (((var_1_29 | var_1_25) & 256) > var_1_52) {
		if ((var_1_55 < var_1_42) && var_1_46) {
			if (var_1_61 >= var_1_59) {
				var_1_62 = (abs (var_1_52));
			} else {
				var_1_62 = (abs (var_1_52));
			}
		}
	} else {
		var_1_62 = (max ((abs (5)) , 128));
	}


	// From: CodeObject19
	var_1_63 = (max ((abs (var_1_32)) , var_1_57));


	// From: CodeObject20
	if ((abs (var_1_40)) >= (min ((max (var_1_49 , var_1_41)) , var_1_39))) {
		var_1_64 = (min (var_1_50 , var_1_40));
	}


	// From: CodeObject21
	if (var_1_23 <= (var_1_61 + var_1_60)) {
		if (((abs (var_1_29)) * 1) >= (var_1_52 / var_1_26)) {
			var_1_65 = -64;
		}
	}


	// From: CodeObject22
	if (var_1_62 <= var_1_67) {
		if (var_1_33 > (-100000000 * var_1_25)) {
			var_1_66 = (var_1_29 - (max ((max (var_1_52 , 32)) , (min (var_1_68 , var_1_69)))));
		} else {
			var_1_66 = (abs (var_1_31));
		}
	}


	// From: CodeObject23
	if ((var_1_61 >> (abs (var_1_71))) > 100000000) {
		var_1_70 = var_1_50;
	} else {
		var_1_70 = (max ((var_1_50 - var_1_49) , 63.25));
	}


	// From: CodeObject24
	if ((var_1_29 - (max (var_1_71 , var_1_73))) <= var_1_61) {
		if (var_1_34 < var_1_33) {
			var_1_72 = (abs (var_1_36));
		} else {
			var_1_72 = (63.5f - (abs (256.375f)));
		}
	} else {
		var_1_72 = (max (var_1_36 , var_1_40));
	}


	// From: CodeObject25
	if (var_1_43 > ((abs (var_1_38)) - var_1_50)) {
		var_1_74 = var_1_59;
	} else {
		var_1_74 = (max (4 , var_1_71));
	}


	// From: CodeObject26
	if (var_1_24) {
		if (var_1_57 < 4) {
			var_1_75 = ((max (var_1_76 , (var_1_71 + var_1_77))) - (min (var_1_78 , (var_1_79 - 16))));
		} else {
			var_1_75 = (abs (abs (abs (var_1_77))));
		}
	} else {
		var_1_75 = (min ((abs (var_1_77 + var_1_71)) , 0));
	}


	// From: CodeObject27
	if (var_1_42 >= var_1_48) {
		if ((var_1_71 * var_1_26) <= var_1_30) {
			var_1_80 = var_1_50;
		}
	}


	// From: CodeObject28
	if ((var_1_50 - var_1_49) < 7.4f) {
		var_1_81 = (((abs (var_1_38)) != var_1_49) && var_1_45);
	}


	// From: CodeObject29
	if (var_1_81 || (var_1_49 > var_1_42)) {
		if ((2 << 16) < var_1_32) {
			var_1_82 = (min ((abs (var_1_67)) , (abs (var_1_83 - var_1_69))));
		}
	} else {
		var_1_82 = var_1_79;
	}


	// From: CodeObject30
	if ((abs (var_1_55)) >= var_1_43) {
		var_1_84 = ((var_1_78 >= var_1_62) && var_1_45);
	}


	// From: CodeObject31
	if ((var_1_53 | var_1_23) <= var_1_74) {
		var_1_85 = (var_1_28 - (var_1_86 - (abs (var_1_32))));
	}


	// From: CodeObject32
	var_1_87 = (abs (var_1_40));


	// From: CodeObject33
	if (var_1_72 > (var_1_50 - var_1_49)) {
		var_1_88 = (var_1_89 - var_1_73);
	}


	// From: CodeObject34
	if (! (var_1_57 != var_1_85)) {
		var_1_90 = (var_1_36 + var_1_49);
	} else {
		var_1_90 = (var_1_50 - (min (var_1_49 , var_1_91)));
	}


	// From: CodeObject35
	if (var_1_88 > var_1_67) {
		if (var_1_25 <= (var_1_29 ^ var_1_67)) {
			if (var_1_67 >= (- var_1_34)) {
				var_1_92 = var_1_79;
			} else {
				var_1_92 = (min ((min (5 , var_1_71)) , var_1_29));
			}
		}
	} else {
		if ((min (var_1_71 , var_1_77)) != var_1_93) {
			var_1_92 = (min ((var_1_89 - var_1_78) , var_1_71));
		} else {
			if (((min (var_1_59 , var_1_89)) < var_1_52) || (var_1_86 <= var_1_29)) {
				var_1_92 = (max (var_1_73 , (min ((min (var_1_29 , var_1_71)) , var_1_89))));
			}
		}
	}


	// From: CodeObject36
	if ((max (var_1_67 , var_1_30)) < 256u) {
		if (var_1_68 > (var_1_29 - var_1_52)) {
			if (var_1_48 < (var_1_91 - var_1_49)) {
				if (var_1_81) {
					var_1_94 = (abs (var_1_79));
				}
			} else {
				if ((abs (var_1_82)) <= (abs (var_1_62))) {
					var_1_94 = ((var_1_95 - var_1_77) - (abs (var_1_29)));
				}
			}
		} else {
			var_1_94 = (abs (var_1_79));
		}
	}


	// From: CodeObject37
	if (var_1_58 >= var_1_85) {
		if (var_1_93 > ((var_1_97 - var_1_69) & var_1_94)) {
			var_1_96 = (abs (var_1_29));
		}
	}


	// From: CodeObject38
	if (var_1_36 <= var_1_41) {
		var_1_98 = (var_1_99 - (var_1_92 + (abs (var_1_79))));
	}


	// From: CodeObject39
	if ((abs (var_1_70)) > (- var_1_39)) {
		if (var_1_73 >= var_1_28) {
			var_1_100 = (max ((var_1_73 + var_1_31) , ((var_1_95 - var_1_101) + var_1_53)));
		}
	} else {
		if (var_1_102) {
			var_1_100 = (abs (var_1_56));
		} else {
			var_1_100 = (var_1_32 + (abs (var_1_61)));
		}
	}


	// From: CodeObject40
	if (var_1_81) {
		var_1_103 = (abs (var_1_101));
	} else {
		if (var_1_47) {
			var_1_103 = (var_1_73 + (var_1_92 + var_1_98));
		}
	}


	// From: CodeObject41
	if (var_1_37 >= var_1_50) {
		if (var_1_25 >= (var_1_30 * (abs (var_1_89)))) {
			var_1_104 = (min (var_1_78 , var_1_77));
		}
	} else {
		var_1_104 = 5;
	}


	// From: CodeObject42
	if (var_1_34 > (3598699239u - (abs (var_1_78)))) {
		var_1_105 = (min ((abs (var_1_69)) , var_1_94));
	}


	// From: CodeObject43
	if (var_1_50 != var_1_41) {
		if (((abs (var_1_87)) * var_1_35) == var_1_107) {
			var_1_106 = (var_1_44 && (var_1_45 && var_1_24));
		} else {
			var_1_106 = var_1_24;
		}
	} else {
		var_1_106 = ((! (var_1_46 && var_1_47)) || var_1_45);
	}


	// From: CodeObject44
	if (var_1_89 >= (~ var_1_53)) {
		if (var_1_34 >= var_1_86) {
			var_1_108 = (abs (abs (var_1_29)));
		}
	}


	// From: CodeObject45
	if (var_1_40 < var_1_107) {
		if (((var_1_92 + var_1_79) - var_1_101) < (var_1_93 >> var_1_88)) {
			var_1_109 = (abs (var_1_94));
		}
	} else {
		var_1_109 = 5u;
	}


	// From: CodeObject46
	if (var_1_109 != var_1_27) {
		if (var_1_46 || var_1_24) {
			var_1_110 = (abs (var_1_75));
		}
	} else {
		if (var_1_43 >= (var_1_50 / var_1_111)) {
			var_1_110 = (min (var_1_78 , var_1_56));
		} else {
			var_1_110 = (max ((abs (var_1_54 + var_1_100)) , (abs (max (var_1_32 , var_1_108)))));
		}
	}


	// From: CodeObject47
	if (var_1_59 > ((var_1_104 + var_1_51) ^ var_1_54)) {
		var_1_112 = var_1_77;
	} else {
		var_1_112 = var_1_78;
	}


	// From: CodeObject48
	var_1_113 = var_1_41;


	// From: CodeObject49
	if (var_1_84) {
		var_1_114 = var_1_41;
	} else {
		var_1_114 = var_1_41;
	}


	// From: CodeObject50
	if (var_1_47) {
		var_1_115 = var_1_61;
	} else {
		var_1_115 = var_1_104;
	}


	// From: CodeObject51
	if (var_1_46) {
		var_1_116 = var_1_105;
	}


	// From: CodeObject52
	var_1_117 = var_1_41;


	// From: CodeObject53
	if (var_1_47) {
		var_1_118 = var_1_71;
	} else {
		var_1_118 = var_1_78;
	}


	// From: CodeObject54
	var_1_119 = var_1_89;


	// From: CodeObject55
	if (var_1_22) {
		var_1_120 = var_1_121;
	}


	// From: CodeObject56
	var_1_122 = var_1_94;


	// From: CodeObject57
	if (var_1_47) {
		var_1_123 = var_1_49;
	} else {
		var_1_123 = var_1_91;
	}


	// From: CodeObject58
	var_1_124 = var_1_71;


	// From: CodeObject59
	if (var_1_81) {
		var_1_125 = 0;
	}


	// From: CodeObject60
	var_1_126 = 2;


	// From: CodeObject61
	if (var_1_102) {
		var_1_127 = var_1_40;
	} else {
		var_1_127 = var_1_40;
	}


	// From: CodeObject62
	var_1_128 = var_1_52;


	// From: CodeObject63
	var_1_129 = var_1_89;


	// From: CodeObject64
	if (var_1_125) {
		var_1_130 = var_1_71;
	} else {
		var_1_130 = var_1_92;
	}


	// From: CodeObject65
	if (var_1_92 < var_1_82) {
		if (var_1_47) {
			var_1_131 = var_1_104;
		}
	} else {
		var_1_131 = (min (var_1_28 , (abs (abs (var_1_59)))));
	}


	// From: Req1Batch58PS_CN_500
	if ((last_1_var_1_15 / var_1_3) <= 2) {
		if (var_1_3 < (min ((~ last_1_var_1_15) , last_1_var_1_10))) {
			var_1_1 = (min (var_1_5 , 16));
		} else {
			if (((var_1_6 || var_1_7) && var_1_8) || var_1_9) {
				var_1_1 = var_1_5;
			} else {
				var_1_1 = var_1_5;
			}
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req2Batch58PS_CN_500
	unsigned char stepLocal_0 = var_1_1;
	if (var_1_3 <= stepLocal_0) {
		var_1_10 = (min (var_1_5 , var_1_3));
	}


	// From: Req4Batch58PS_CN_500
	var_1_12 = (min (var_1_13 , var_1_14));


	// From: Req5Batch58PS_CN_500
	if (var_1_7) {
		var_1_15 = ((min (32 , (16 + var_1_16))) - var_1_17);
	}


	// From: Req6Batch58PS_CN_500
	signed char stepLocal_2 = var_1_16;
	if (stepLocal_2 <= (max (var_1_13 , var_1_3))) {
		var_1_18 = (max ((64 - var_1_16) , var_1_17));
	} else {
		var_1_18 = 4;
	}


	// From: Req7Batch58PS_CN_500
	if (100000000u < ((min (4160981528u , var_1_20)) - var_1_15)) {
		if (var_1_20 > 1u) {
			if (var_1_9) {
				var_1_19 = var_1_21;
			} else {
				var_1_19 = var_1_21;
			}
		} else {
			var_1_19 = var_1_21;
		}
	}


	// From: Req3Batch58PS_CN_500
	signed long int stepLocal_1 = (min (var_1_15 , var_1_10)) + var_1_5;
	if (last_1_var_1_11 >= stepLocal_1) {
		var_1_11 = ((var_1_5 + var_1_15) + var_1_3);
	} else {
		if (var_1_8) {
			var_1_11 = var_1_3;
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967295);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483648);
	assume_abort_if_not(var_1_23 <= 2147483647);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967295);
	assume_abort_if_not(var_1_26 != 0);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -1);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -126);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 4294967295);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -461168.6018427382800e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -230584.3009213691390e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691390e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -230584.3009213691390e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691390e+12F && var_1_41 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 32766);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= -126);
	assume_abort_if_not(var_1_57 <= 126);
	var_1_59 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_59 >= -32766);
	assume_abort_if_not(var_1_59 <= 32766);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= -128);
	assume_abort_if_not(var_1_61 <= 127);
	var_1_67 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 65535);
	var_1_68 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 32766);
	var_1_69 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 32766);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 8);
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 127);
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= -1);
	assume_abort_if_not(var_1_76 <= 126);
	var_1_77 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 63);
	var_1_78 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 126);
	var_1_79 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_79 >= 63);
	assume_abort_if_not(var_1_79 <= 126);
	var_1_83 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_83 >= 2147483647);
	assume_abort_if_not(var_1_83 <= 4294967294);
	var_1_86 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_86 >= 1073741823);
	assume_abort_if_not(var_1_86 <= 2147483646);
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 127);
	assume_abort_if_not(var_1_89 <= 254);
	var_1_91 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_91 >= 0.0F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 9223372.036854765600e+12F && var_1_91 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_93 >= -2147483648);
	assume_abort_if_not(var_1_93 <= 2147483647);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 190);
	assume_abort_if_not(var_1_95 <= 254);
	var_1_97 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_97 >= -1);
	assume_abort_if_not(var_1_97 <= 2147483647);
	var_1_99 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_99 >= 32767);
	assume_abort_if_not(var_1_99 <= 65534);
	var_1_101 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_101 >= 0);
	assume_abort_if_not(var_1_101 <= 16383);
	var_1_102 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_102 >= 0);
	assume_abort_if_not(var_1_102 <= 1);
	var_1_107 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_107 >= -922337.2036854776000e+13F && var_1_107 <= -1.0e-20F) || (var_1_107 <= 9223372.036854776000e+12F && var_1_107 >= 1.0e-20F ));
	var_1_111 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_111 >= -922337.2036854776000e+13F && var_1_111 <= -1.0e-20F) || (var_1_111 <= 9223372.036854776000e+12F && var_1_111 >= 1.0e-20F ));
	assume_abort_if_not(var_1_111 != 0.0F);
	var_1_121 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_121 >= 0);
	assume_abort_if_not(var_1_121 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_15 = var_1_15;
}

int property() {
	return ((((((((last_1_var_1_15 / var_1_3) <= 2) ? ((var_1_3 < (min ((~ last_1_var_1_15) , last_1_var_1_10))) ? (var_1_1 == ((unsigned char) (min (var_1_5 , 16)))) : ((((var_1_6 || var_1_7) && var_1_8) || var_1_9) ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_1 == ((unsigned char) var_1_5)))) : (var_1_1 == ((unsigned char) var_1_5))) && ((var_1_3 <= var_1_1) ? (var_1_10 == ((signed short int) (min (var_1_5 , var_1_3)))) : 1)) && ((last_1_var_1_11 >= ((min (var_1_15 , var_1_10)) + var_1_5)) ? (var_1_11 == ((signed short int) ((var_1_5 + var_1_15) + var_1_3))) : (var_1_8 ? (var_1_11 == ((signed short int) var_1_3)) : 1))) && (var_1_12 == ((signed char) (min (var_1_13 , var_1_14))))) && (var_1_7 ? (var_1_15 == ((signed char) ((min (32 , (16 + var_1_16))) - var_1_17))) : 1)) && ((var_1_16 <= (max (var_1_13 , var_1_3))) ? (var_1_18 == ((signed long int) (max ((64 - var_1_16) , var_1_17)))) : (var_1_18 == ((signed long int) 4)))) && ((100000000u < ((min (4160981528u , var_1_20)) - var_1_15)) ? ((var_1_20 > 1u) ? (var_1_9 ? (var_1_19 == ((float) var_1_21)) : (var_1_19 == ((float) var_1_21))) : (var_1_19 == ((float) var_1_21))) : 1)
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
