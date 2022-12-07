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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch95PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 32;
double var_1_2 = 32.25;
double var_1_3 = 16.5;
unsigned char var_1_4 = 10;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 1;
signed char var_1_7 = -5;
unsigned char var_1_8 = 0;
signed char var_1_9 = -10;
signed short int var_1_10 = 64;
unsigned short int var_1_11 = 0;
float var_1_12 = 64.75;
double var_1_13 = 5.4;
float var_1_14 = 5.625;
unsigned long int var_1_15 = 32;
unsigned long int var_1_16 = 4;
unsigned char var_1_17 = 0;
unsigned long int var_1_18 = 2;
unsigned long int var_1_19 = 1794432927;
unsigned long int var_1_20 = 1243784628;
unsigned long int var_1_21 = 10;
unsigned char var_1_22 = 16;
unsigned char var_1_23 = 32;
unsigned char var_1_24 = 2;
double var_1_25 = 0.7;
unsigned char var_1_26 = 0;
double var_1_27 = 255.5;
double var_1_28 = 1.625;
double var_1_29 = 32.2;
double var_1_30 = 15.62;
double var_1_31 = 8.3;
double var_1_32 = 10.75;
double var_1_33 = 8.6;
unsigned long int var_1_34 = 128;
signed short int var_1_35 = 10;
signed char var_1_36 = 16;
signed char var_1_37 = 16;
unsigned char var_1_38 = 5;
unsigned char var_1_39 = 32;
unsigned char var_1_40 = 2;
unsigned long int var_1_41 = 64;
signed long int var_1_42 = 10;
signed short int var_1_43 = 5;
float var_1_44 = 9999.25;
float var_1_45 = 9.75;
float var_1_46 = 63.8;
float var_1_47 = 127.4;
signed char var_1_48 = -100;
unsigned long int var_1_49 = 0;
unsigned long int var_1_50 = 3244475367;
signed long int var_1_51 = -200;
unsigned char var_1_52 = 1;
unsigned long int var_1_53 = 1000000;
unsigned char var_1_54 = 2;
signed char var_1_55 = 10;
signed char var_1_56 = 2;
signed char var_1_57 = 10;
double var_1_58 = 99999999.8;
signed char var_1_59 = -2;
unsigned char var_1_60 = 64;
unsigned char var_1_61 = 10;
float var_1_62 = 999.75;
signed char var_1_63 = -32;
signed char var_1_64 = 16;
float var_1_65 = 4.4;
signed short int var_1_66 = -4;
unsigned short int var_1_67 = 25;
unsigned short int var_1_68 = 49151;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 0;
signed char var_1_72 = 2;
signed char var_1_73 = 5;
signed long int var_1_74 = 1;
signed char var_1_75 = 100;
double var_1_76 = 100000000000.7;
signed char var_1_77 = 0;
unsigned short int var_1_78 = 128;
signed char var_1_79 = -4;
signed char var_1_80 = 8;
unsigned char var_1_81 = 64;
signed char var_1_82 = 16;
unsigned short int var_1_83 = 256;
unsigned char var_1_84 = 1;
unsigned char var_1_85 = 1;
unsigned short int var_1_86 = 128;
unsigned short int var_1_87 = 256;
signed char var_1_88 = -1;
unsigned short int var_1_89 = 1;
float var_1_90 = 16.2;
double var_1_91 = 32.4;
unsigned short int var_1_92 = 1;
double var_1_93 = 9.2;
signed char var_1_94 = -16;
unsigned char var_1_95 = 32;
unsigned char var_1_96 = 128;
unsigned char var_1_97 = 128;
unsigned char var_1_98 = 128;
unsigned char var_1_99 = 100;
unsigned short int var_1_100 = 10;
double var_1_101 = 256.3;
unsigned short int var_1_102 = 25;
unsigned short int var_1_103 = 0;
double var_1_104 = 3.1;
unsigned char var_1_105 = 1;
signed short int var_1_106 = -128;
unsigned short int var_1_107 = 8;
unsigned short int var_1_108 = 8;
unsigned short int var_1_109 = 5;
unsigned char var_1_110 = 0;
double var_1_111 = 8.25;
float var_1_112 = 5.4;
unsigned char var_1_113 = 32;
unsigned char var_1_114 = 64;
unsigned char var_1_115 = 1;
signed short int var_1_116 = 25;
unsigned short int var_1_117 = 0;
unsigned char var_1_118 = 64;
double var_1_119 = 24.8;
unsigned short int var_1_120 = 256;
unsigned char var_1_121 = 1;
float var_1_122 = 4.75;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_11 = 0;
float last_1_var_1_12 = 64.75;
unsigned long int last_1_var_1_15 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_17) {
		if (16u > (abs (var_1_18))) {
			var_1_16 = (((min (var_1_19 , var_1_20)) + 1366391916u) - var_1_21);
		} else {
			var_1_16 = (abs (abs (var_1_20)));
		}
	}


	// From: CodeObject2
	if (var_1_19 > (max (var_1_18 , (var_1_16 ^ var_1_20)))) {
		var_1_22 = (128 - (min ((abs (var_1_23)) , var_1_24)));
	} else {
		if (var_1_20 >= (var_1_16 & var_1_18)) {
			var_1_22 = var_1_23;
		}
	}


	// From: CodeObject3
	if (var_1_17 || var_1_26) {
		var_1_25 = (abs (63.4));
	} else {
		if (((var_1_27 - var_1_28) + (var_1_29 / var_1_30)) < var_1_31) {
			var_1_25 = (min (var_1_32 , 8.5));
		} else {
			if (var_1_19 <= (var_1_20 + 25u)) {
				var_1_25 = var_1_32;
			} else {
				var_1_25 = (var_1_33 - (abs (abs (var_1_32))));
			}
		}
	}


	// From: CodeObject4
	if (var_1_28 > var_1_29) {
		var_1_34 = (128u + (max (var_1_20 , var_1_21)));
	}


	// From: CodeObject5
	if (((min (var_1_21 , var_1_19)) >= (var_1_34 >> var_1_22)) && (! var_1_17)) {
		if (var_1_30 == var_1_25) {
			var_1_35 = (var_1_23 + (abs (var_1_24)));
		}
	} else {
		var_1_35 = (var_1_22 - var_1_23);
	}


	// From: CodeObject6
	if ((- (max (var_1_21 , var_1_20))) >= var_1_19) {
		var_1_36 = var_1_37;
	}


	// From: CodeObject7
	if (var_1_26 && (var_1_24 > var_1_34)) {
		if (var_1_17) {
			var_1_38 = var_1_24;
		} else {
			var_1_38 = var_1_23;
		}
	} else {
		var_1_38 = (var_1_23 + (var_1_39 + (2 + var_1_40)));
	}


	// From: CodeObject8
	if (var_1_35 >= var_1_21) {
		var_1_41 = (min ((max (var_1_24 , (3944054293u - var_1_22))) , (abs (var_1_23 + var_1_21))));
	} else {
		var_1_41 = var_1_40;
	}


	// From: CodeObject9
	if ((- var_1_30) >= var_1_29) {
		if (var_1_26) {
			var_1_42 = (min (var_1_36 , var_1_23));
		} else {
			var_1_42 = var_1_35;
		}
	} else {
		var_1_42 = (max (var_1_38 , var_1_22));
	}


	// From: CodeObject10
	if ((~ var_1_42) < (min (var_1_38 , (abs (var_1_35))))) {
		var_1_43 = (max (var_1_24 , 64));
	}


	// From: CodeObject11
	if (var_1_34 >= var_1_18) {
		if ((var_1_27 == var_1_30) && var_1_17) {
			var_1_44 = (var_1_45 + ((abs (var_1_46)) + var_1_47));
		}
	}


	// From: CodeObject12
	if (var_1_32 >= var_1_45) {
		var_1_48 = (max (var_1_37 , var_1_40));
	} else {
		if (var_1_18 >= var_1_42) {
			var_1_48 = var_1_39;
		}
	}


	// From: CodeObject13
	if (((var_1_50 - var_1_23) % var_1_20) < var_1_18) {
		var_1_49 = (max (var_1_23 , var_1_21));
	}


	// From: CodeObject14
	if (var_1_38 > var_1_48) {
		if ((var_1_26 || var_1_17) || var_1_52) {
			var_1_51 = (abs (max (var_1_36 , var_1_48)));
		}
	} else {
		var_1_51 = (abs (var_1_40));
	}


	// From: CodeObject15
	if (var_1_26) {
		if ((abs (var_1_23)) >= var_1_20) {
			var_1_53 = (var_1_24 + var_1_38);
		}
	}


	// From: CodeObject16
	var_1_54 = (128 - var_1_40);


	// From: CodeObject17
	if ((100 - (min (var_1_40 , var_1_19))) > (var_1_49 * var_1_20)) {
		if (var_1_33 <= (- (abs (100.25)))) {
			var_1_55 = (abs (max (var_1_39 , var_1_40)));
		} else {
			if (var_1_52) {
				if (var_1_26) {
					var_1_55 = var_1_40;
				} else {
					var_1_55 = (max (var_1_40 , (var_1_56 + var_1_57)));
				}
			}
		}
	} else {
		var_1_55 = var_1_40;
	}


	// From: CodeObject18
	if ((max (var_1_49 , var_1_42)) == var_1_22) {
		if (((abs (var_1_30)) * var_1_29) < var_1_27) {
			var_1_58 = (min (var_1_46 , var_1_47));
		} else {
			if (var_1_22 > ((var_1_16 | var_1_49) % 5)) {
				var_1_58 = (abs (var_1_33));
			}
		}
	}


	// From: CodeObject19
	if (var_1_52) {
		if (var_1_50 < (var_1_20 / var_1_19)) {
			var_1_59 = ((max (var_1_40 , (abs (var_1_57)))) + var_1_56);
		} else {
			if (var_1_60 > (var_1_22 >> var_1_20)) {
				var_1_59 = var_1_37;
			}
		}
	}


	// From: CodeObject20
	if (var_1_31 <= var_1_45) {
		var_1_61 = (min (8 , var_1_23));
	}


	// From: CodeObject21
	if ((abs (var_1_22)) < var_1_42) {
		var_1_62 = (var_1_46 + var_1_47);
	}


	// From: CodeObject22
	if ((abs (var_1_19)) > var_1_20) {
		if ((~ (min (var_1_21 , var_1_49))) >= var_1_23) {
			if (var_1_61 > var_1_22) {
				var_1_63 = var_1_40;
			}
		} else {
			var_1_63 = (min (var_1_64 , (abs (max (var_1_56 , var_1_40)))));
		}
	} else {
		var_1_63 = var_1_40;
	}


	// From: CodeObject23
	if (var_1_25 < var_1_28) {
		var_1_65 = (abs (var_1_47));
	}


	// From: CodeObject24
	if ((var_1_36 | var_1_21) == (64u >> var_1_38)) {
		var_1_66 = (abs (abs (min (var_1_56 , var_1_61))));
	}


	// From: CodeObject25
	if (var_1_17) {
		var_1_67 = ((var_1_68 - (var_1_54 + 64)) - var_1_23);
	} else {
		if (((min (var_1_37 , var_1_23)) < var_1_51) || (var_1_31 == var_1_62)) {
			if (var_1_52) {
				var_1_67 = (var_1_68 - var_1_23);
			}
		}
	}


	// From: CodeObject26
	if (var_1_59 > var_1_23) {
		var_1_69 = ((! var_1_26) && (var_1_70 || var_1_71));
	}


	// From: CodeObject27
	if (var_1_34 < 0u) {
		var_1_72 = (min (((abs (var_1_57)) + var_1_56) , var_1_37));
	} else {
		var_1_72 = (var_1_73 - var_1_40);
	}


	// From: CodeObject28
	if (var_1_44 <= 4.3f) {
		var_1_74 = (min (32 , (min (var_1_68 , var_1_61))));
	}


	// From: CodeObject29
	if (var_1_27 != var_1_62) {
		if ((var_1_25 * var_1_31) < var_1_76) {
			if (var_1_26 && var_1_69) {
				var_1_75 = (abs (var_1_73));
			}
		}
	} else {
		var_1_75 = (var_1_40 - (abs (50)));
	}


	// From: CodeObject30
	if ((~ var_1_23) > ((min (var_1_68 , var_1_34)) / var_1_19)) {
		var_1_77 = (min (var_1_73 , var_1_39));
	}


	// From: CodeObject31
	if (-5 <= (var_1_19 % (max (var_1_68 , 32)))) {
		var_1_78 = var_1_39;
	} else {
		var_1_78 = (max ((min (var_1_68 , var_1_23)) , (max (var_1_61 , var_1_24))));
	}


	// From: CodeObject32
	if (var_1_67 >= ((abs (var_1_74)) | var_1_54)) {
		var_1_79 = (var_1_40 + var_1_57);
	}


	// From: CodeObject33
	if (var_1_54 >= ((var_1_34 % var_1_81) >> var_1_73)) {
		var_1_80 = (min (var_1_40 , (max ((abs (var_1_57)) , var_1_56))));
	} else {
		if (var_1_17) {
			if (-8 <= (abs (var_1_57))) {
				var_1_80 = (var_1_40 + (min ((min (var_1_56 , var_1_57)) , (var_1_82 - 16))));
			}
		}
	}


	// From: CodeObject34
	if (var_1_70) {
		if (var_1_62 >= 0.75f) {
			var_1_83 = (abs (min (var_1_68 , var_1_38)));
		}
	}


	// From: CodeObject35
	if ((50 / (abs (var_1_81))) < var_1_53) {
		var_1_84 = var_1_85;
	}


	// From: CodeObject36
	if ((min (var_1_27 , var_1_58)) > (max ((abs (var_1_45)) , var_1_46))) {
		var_1_86 = ((max ((min (var_1_23 , var_1_39)) , var_1_87)) + (min (var_1_38 , var_1_61)));
	}


	// From: CodeObject37
	if (! var_1_71) {
		var_1_88 = var_1_73;
	} else {
		var_1_88 = ((var_1_82 - var_1_40) + var_1_56);
	}


	// From: CodeObject38
	if (var_1_23 > var_1_77) {
		if ((abs (var_1_38)) >= var_1_49) {
			if (var_1_27 != var_1_28) {
				var_1_89 = (abs (var_1_22));
			} else {
				var_1_89 = var_1_87;
			}
		}
	}


	// From: CodeObject39
	if (var_1_26 && var_1_70) {
		var_1_90 = (min (var_1_47 , (var_1_33 - (abs (255.5f)))));
	}


	// From: CodeObject40
	var_1_91 = (max (var_1_32 , (min (var_1_45 , var_1_47))));


	// From: CodeObject41
	if ((max (var_1_41 , 1)) >= var_1_87) {
		if (var_1_30 <= var_1_58) {
			var_1_92 = ((max ((max (var_1_81 , var_1_22)) , (min (var_1_54 , var_1_40)))) + (min (var_1_60 , var_1_61)));
		}
	}


	// From: CodeObject42
	if (var_1_16 > var_1_86) {
		var_1_93 = ((max (var_1_45 , var_1_47)) + var_1_46);
	}


	// From: CodeObject43
	if (var_1_84 || var_1_85) {
		var_1_94 = (min (var_1_57 , var_1_82));
	}


	// From: CodeObject44
	if ((abs (var_1_32)) >= ((abs (var_1_46)) + var_1_31)) {
		if ((min ((max (var_1_90 , var_1_93)) , var_1_76)) > var_1_91) {
			var_1_95 = ((min (var_1_96 , var_1_97)) - ((abs (var_1_39)) + (abs (4))));
		} else {
			if (var_1_26 && var_1_52) {
				var_1_95 = var_1_82;
			}
		}
	}


	// From: CodeObject45
	if ((abs (max (var_1_90 , var_1_46))) <= (min ((var_1_27 / var_1_30) , var_1_65))) {
		if ((- var_1_77) <= var_1_60) {
			var_1_98 = (((var_1_99 + 100) - var_1_82) - var_1_40);
		}
	}


	// From: CodeObject46
	if (var_1_37 > (var_1_43 & var_1_86)) {
		if ((- var_1_33) <= var_1_27) {
			if ((var_1_88 ^ var_1_18) < var_1_92) {
				var_1_100 = (abs (abs (max (16 , var_1_97))));
			}
		} else {
			var_1_100 = (max (var_1_24 , var_1_39));
		}
	} else {
		var_1_100 = (max (var_1_81 , var_1_60));
	}


	// From: CodeObject47
	if (var_1_80 >= var_1_82) {
		if ((var_1_30 + var_1_44) > (var_1_32 * 49.25)) {
			var_1_101 = (min (var_1_32 , var_1_45));
		} else {
			var_1_101 = (max (var_1_33 , var_1_47));
		}
	} else {
		var_1_101 = 64.1;
	}


	// From: CodeObject48
	if (var_1_38 < var_1_35) {
		var_1_102 = ((max ((min (var_1_87 , var_1_97)) , 5)) + (abs (abs (var_1_103))));
	} else {
		var_1_102 = (max (var_1_98 , var_1_40));
	}


	// From: CodeObject49
	if (var_1_101 > (min (var_1_33 , var_1_76))) {
		var_1_104 = var_1_33;
	}


	// From: CodeObject50
	if ((var_1_57 % var_1_81) > var_1_54) {
		if (var_1_59 < (max ((var_1_36 / var_1_99) , var_1_74))) {
			if (-32 <= var_1_102) {
				var_1_105 = (((256.6 * var_1_65) != var_1_33) && var_1_71);
			} else {
				var_1_105 = var_1_85;
			}
		}
	} else {
		var_1_105 = var_1_85;
	}


	// From: CodeObject51
	if (var_1_17) {
		var_1_106 = var_1_64;
	}


	// From: CodeObject52
	if (var_1_105) {
		var_1_107 = var_1_99;
	}


	// From: CodeObject53
	if (var_1_85) {
		var_1_108 = var_1_97;
	} else {
		var_1_108 = var_1_96;
	}


	// From: CodeObject54
	if (var_1_84) {
		var_1_109 = var_1_61;
	}


	// From: CodeObject55
	if (var_1_84) {
		var_1_110 = var_1_85;
	} else {
		var_1_110 = var_1_85;
	}


	// From: CodeObject56
	if (var_1_85) {
		var_1_111 = var_1_45;
	} else {
		var_1_111 = var_1_33;
	}


	// From: CodeObject57
	if (var_1_85) {
		var_1_112 = var_1_32;
	} else {
		var_1_112 = var_1_45;
	}


	// From: CodeObject58
	if (var_1_52) {
		var_1_113 = 25;
	} else {
		var_1_113 = var_1_96;
	}


	// From: CodeObject59
	var_1_114 = var_1_97;


	// From: CodeObject60
	if (var_1_84) {
		var_1_115 = var_1_85;
	}


	// From: CodeObject61
	if (var_1_110) {
		var_1_116 = var_1_113;
	}


	// From: CodeObject62
	if (var_1_105) {
		var_1_117 = var_1_103;
	} else {
		var_1_117 = var_1_99;
	}


	// From: CodeObject63
	if (var_1_110) {
		var_1_118 = var_1_23;
	} else {
		var_1_118 = var_1_39;
	}


	// From: CodeObject64
	if (var_1_51 >= var_1_53) {
		var_1_119 = (min ((abs (var_1_32)) , (abs (var_1_47))));
	}


	// From: CodeObject65
	var_1_120 = var_1_39;


	// From: CodeObject66
	var_1_121 = var_1_99;


	// From: CodeObject67
	var_1_122 = 64.2f;


	// From: Req4Batch95PS_CN_500
	unsigned long int stepLocal_1 = var_1_6 - last_1_var_1_15;
	if (stepLocal_1 < ((last_1_var_1_11 ^ last_1_var_1_15) / (max (-8 , var_1_5)))) {
		if (last_1_var_1_12 == last_1_var_1_12) {
			var_1_11 = last_1_var_1_15;
		}
	}


	// From: Req2Batch95PS_CN_500
	if ((var_1_5 <= var_1_4) && var_1_8) {
		if (var_1_8) {
			var_1_7 = (var_1_6 + (min (5 , var_1_9)));
		} else {
			var_1_7 = (min (var_1_6 , var_1_9));
		}
	} else {
		if ((-8 * var_1_11) < var_1_4) {
			var_1_7 = 1;
		} else {
			var_1_7 = var_1_9;
		}
	}


	// From: Req6Batch95PS_CN_500
	if (128 >= last_1_var_1_15) {
		var_1_15 = (var_1_6 + (var_1_4 + var_1_11));
	} else {
		var_1_15 = var_1_7;
	}


	// From: Req5Batch95PS_CN_500
	if (var_1_2 != (var_1_3 / (abs (var_1_13)))) {
		var_1_12 = var_1_14;
	}


	// From: Req1Batch95PS_CN_500
	if ((10.8 + var_1_12) <= (- var_1_12)) {
		var_1_1 = ((min (1 , var_1_4)) + (var_1_5 - var_1_6));
	}


	// From: Req3Batch95PS_CN_500
	unsigned char stepLocal_0 = var_1_4;
	if (-4 >= stepLocal_0) {
		if (var_1_12 == var_1_12) {
			var_1_10 = (var_1_7 + var_1_6);
		} else {
			var_1_10 = var_1_5;
		}
	} else {
		var_1_10 = var_1_4;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 63);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -63);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 4294967295);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 1073741823);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	assume_abort_if_not(var_1_30 != 0.0F);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854765600e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -127);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 64);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 31);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -461168.6018427382800e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -230584.3009213691390e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691390e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= -230584.3009213691390e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691390e+12F && var_1_47 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 2147483647);
	assume_abort_if_not(var_1_50 <= 4294967295);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 1);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= -63);
	assume_abort_if_not(var_1_56 <= 63);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= -63);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 255);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= -127);
	assume_abort_if_not(var_1_64 <= 126);
	var_1_68 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_68 >= 49150);
	assume_abort_if_not(var_1_68 <= 65534);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 0);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 0);
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= -1);
	assume_abort_if_not(var_1_73 <= 126);
	var_1_76 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_76 >= -922337.2036854776000e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 9223372.036854776000e+12F && var_1_76 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 255);
	assume_abort_if_not(var_1_81 != 0);
	var_1_82 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 63);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 1);
	assume_abort_if_not(var_1_85 <= 1);
	var_1_87 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 32767);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 127);
	assume_abort_if_not(var_1_96 <= 254);
	var_1_97 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_97 >= 127);
	assume_abort_if_not(var_1_97 <= 254);
	var_1_99 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_99 >= 95);
	assume_abort_if_not(var_1_99 <= 127);
	var_1_103 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_103 >= 0);
	assume_abort_if_not(var_1_103 <= 32767);
}



void updateLastVariables() {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_15 = var_1_15;
}

int property() {
	return (((((((10.8 + var_1_12) <= (- var_1_12)) ? (var_1_1 == ((unsigned char) ((min (1 , var_1_4)) + (var_1_5 - var_1_6)))) : 1) && (((var_1_5 <= var_1_4) && var_1_8) ? (var_1_8 ? (var_1_7 == ((signed char) (var_1_6 + (min (5 , var_1_9))))) : (var_1_7 == ((signed char) (min (var_1_6 , var_1_9))))) : (((-8 * var_1_11) < var_1_4) ? (var_1_7 == ((signed char) 1)) : (var_1_7 == ((signed char) var_1_9))))) && ((-4 >= var_1_4) ? ((var_1_12 == var_1_12) ? (var_1_10 == ((signed short int) (var_1_7 + var_1_6))) : (var_1_10 == ((signed short int) var_1_5))) : (var_1_10 == ((signed short int) var_1_4)))) && (((var_1_6 - last_1_var_1_15) < ((last_1_var_1_11 ^ last_1_var_1_15) / (max (-8 , var_1_5)))) ? ((last_1_var_1_12 == last_1_var_1_12) ? (var_1_11 == ((unsigned short int) last_1_var_1_15)) : 1) : 1)) && ((var_1_2 != (var_1_3 / (abs (var_1_13)))) ? (var_1_12 == ((float) var_1_14)) : 1)) && ((128 >= last_1_var_1_15) ? (var_1_15 == ((unsigned long int) (var_1_6 + (var_1_4 + var_1_11)))) : (var_1_15 == ((unsigned long int) var_1_7)))
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
