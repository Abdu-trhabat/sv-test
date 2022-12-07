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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch66PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 50;
signed char var_1_3 = 8;
signed char var_1_4 = 10;
double var_1_5 = 16.5;
signed char var_1_6 = 64;
signed char var_1_7 = 2;
unsigned short int var_1_8 = 256;
unsigned short int var_1_10 = 63583;
unsigned short int var_1_11 = 33789;
unsigned char var_1_12 = 1;
unsigned char var_1_14 = 0;
signed long int var_1_15 = 8;
signed short int var_1_16 = -16;
signed short int var_1_18 = 16;
signed short int var_1_19 = 25;
signed short int var_1_20 = 25;
signed short int var_1_21 = 50;
signed long int var_1_22 = -8;
float var_1_23 = 999999999.5;
float var_1_24 = 31.5;
unsigned char var_1_25 = 0;
signed long int var_1_26 = 10000;
signed long int var_1_27 = -2;
float var_1_28 = 10.4;
float var_1_29 = 64.5;
float var_1_30 = 31.8;
signed char var_1_31 = -32;
signed char var_1_32 = 2;
unsigned short int var_1_33 = 1000;
float var_1_34 = 0.0;
float var_1_35 = 4.75;
float var_1_36 = 256.125;
unsigned short int var_1_37 = 2;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 8;
unsigned char var_1_41 = 16;
unsigned char var_1_42 = 0;
unsigned short int var_1_43 = 1;
unsigned char var_1_44 = 1;
unsigned short int var_1_45 = 128;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned short int var_1_50 = 8;
signed char var_1_51 = 2;
signed char var_1_52 = 1;
signed char var_1_53 = -1;
signed char var_1_54 = 25;
float var_1_55 = 1.4;
unsigned char var_1_56 = 50;
unsigned long int var_1_57 = 1000000;
unsigned long int var_1_58 = 3576785230;
signed char var_1_59 = -50;
signed long int var_1_60 = 8;
signed char var_1_61 = -25;
signed char var_1_62 = 10;
signed char var_1_63 = 8;
signed long int var_1_64 = -2;
signed long int var_1_65 = 100;
signed short int var_1_66 = -50;
unsigned char var_1_67 = 0;
unsigned char var_1_68 = 32;
signed char var_1_69 = -4;
float var_1_70 = 4.4;
signed char var_1_71 = -5;
signed char var_1_72 = 50;
float var_1_73 = 4.3;
float var_1_74 = 49.875;
float var_1_75 = 499.6;
signed long int var_1_76 = -32;
unsigned char var_1_77 = 100;
signed short int var_1_78 = 32;
signed short int var_1_79 = 5;
signed char var_1_80 = 25;
signed char var_1_81 = 8;
signed char var_1_82 = 4;
double var_1_83 = 9999999.625;
signed long int var_1_84 = 0;
unsigned short int var_1_85 = 32;
unsigned short int var_1_86 = 64007;
unsigned long int var_1_87 = 10;
signed char var_1_88 = 0;
unsigned char var_1_89 = 32;
signed char var_1_90 = 4;
signed char var_1_91 = -32;
signed char var_1_92 = 50;
unsigned long int var_1_93 = 8;
float var_1_94 = 100.9;
unsigned char var_1_95 = 0;
float var_1_96 = 255.2;
float var_1_97 = 0.5;
unsigned char var_1_98 = 5;
unsigned char var_1_99 = 128;
unsigned char var_1_100 = 64;
unsigned char var_1_101 = 50;
signed char var_1_102 = -8;
signed long int var_1_103 = -4;
signed long int var_1_104 = 64;
double var_1_105 = 25.6;
double var_1_106 = 32.25;
double var_1_107 = 100.6;
signed long int var_1_108 = 50;
unsigned char var_1_109 = 100;
unsigned short int var_1_110 = 2;
float var_1_111 = 1000000000000.8;
unsigned short int var_1_112 = 5;
signed long int var_1_113 = 50;
signed long int var_1_114 = 128;
float var_1_115 = 9.3;
float var_1_116 = 127.93;
float var_1_117 = 255.2;
float var_1_118 = 5.2;
unsigned long int var_1_119 = 16;
float var_1_120 = 5.2;
signed short int var_1_121 = -64;
signed long int var_1_122 = -8;
double var_1_123 = -0.88;
signed long int var_1_124 = 1;
unsigned short int var_1_125 = 16;
signed short int var_1_127 = -1;
unsigned long int var_1_128 = 64;
unsigned char var_1_129 = 1;
unsigned short int var_1_130 = 128;
unsigned short int var_1_131 = 1;
unsigned char var_1_132 = 4;
unsigned char var_1_133 = 1;
double var_1_134 = 24.4;
unsigned char var_1_135 = 1;
signed short int var_1_136 = 16;
float var_1_137 = 16.75;
double var_1_138 = 9.25;
unsigned char var_1_139 = 0;
unsigned long int var_1_140 = 2;
unsigned char var_1_141 = 1;
signed short int var_1_142 = 500;
signed short int var_1_143 = -8;
signed short int var_1_144 = 5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_12 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (! (var_1_23 <= var_1_24)) {
		if (var_1_25) {
			var_1_22 = (abs (var_1_26));
		}
	} else {
		if (var_1_26 < var_1_27) {
			var_1_22 = (abs (abs (1)));
		}
	}


	// From: CodeObject2
	if ((var_1_23 * var_1_24) != var_1_29) {
		var_1_28 = (abs (var_1_30));
	}


	// From: CodeObject3
	if (var_1_25) {
		var_1_31 = var_1_32;
	}


	// From: CodeObject4
	if (var_1_24 <= ((var_1_34 - 63.25f) - (max (var_1_35 , var_1_36)))) {
		var_1_33 = (abs (var_1_37));
	}


	// From: CodeObject5
	if (var_1_30 < (var_1_29 * (min (var_1_28 , var_1_24)))) {
		var_1_38 = (abs (max ((var_1_39 - 1) , (min (64 , 50)))));
	} else {
		if (var_1_23 <= var_1_29) {
			var_1_38 = var_1_39;
		} else {
			var_1_38 = var_1_39;
		}
	}


	// From: CodeObject6
	if (var_1_28 <= 49.4f) {
		var_1_40 = (max ((abs (abs (var_1_39))) , var_1_41));
	} else {
		var_1_40 = var_1_39;
	}


	// From: CodeObject7
	if (((var_1_43 + var_1_33) == var_1_38) && ((var_1_31 <= var_1_37) && var_1_25)) {
		var_1_42 = (var_1_25 || var_1_44);
	}


	// From: CodeObject8
	if ((var_1_41 % var_1_39) < var_1_22) {
		if (var_1_28 >= var_1_29) {
			var_1_45 = (min ((max (256 , 0)) , (max (var_1_38 , var_1_37))));
		}
	}


	// From: CodeObject9
	if (var_1_40 == var_1_41) {
		var_1_46 = ((! var_1_47) && (! (var_1_48 || var_1_49)));
	}


	// From: CodeObject10
	if (var_1_38 >= var_1_27) {
		var_1_50 = ((abs (var_1_40)) + (min (var_1_39 , var_1_41)));
	}


	// From: CodeObject11
	if (var_1_49) {
		var_1_51 = (var_1_52 + (max (var_1_53 , var_1_54)));
	} else {
		var_1_51 = (max (var_1_52 , var_1_53));
	}


	// From: CodeObject12
	if (var_1_56 >= var_1_26) {
		var_1_55 = var_1_30;
	}


	// From: CodeObject13
	var_1_57 = (var_1_58 - var_1_39);


	// From: CodeObject14
	var_1_59 = (abs (var_1_53));


	// From: CodeObject15
	if (var_1_44) {
		var_1_60 = (max ((min (var_1_52 , (128 + var_1_53))) , var_1_51));
	}


	// From: CodeObject16
	if (var_1_52 < var_1_58) {
		if (var_1_44) {
			var_1_61 = (max (var_1_32 , var_1_53));
		} else {
			if (var_1_47) {
				var_1_61 = ((var_1_62 - var_1_63) + var_1_54);
			}
		}
	} else {
		var_1_61 = (max (var_1_54 , (max ((abs (var_1_62)) , var_1_63))));
	}


	// From: CodeObject17
	if ((abs (var_1_35 + var_1_55)) > var_1_34) {
		var_1_64 = (abs ((abs (var_1_40)) + var_1_61));
	}


	// From: CodeObject18
	if ((min (var_1_22 , (abs (var_1_37)))) <= ((var_1_33 >> var_1_41) ^ var_1_61)) {
		var_1_65 = (abs (var_1_32 + var_1_39));
	} else {
		if (var_1_57 < var_1_63) {
			var_1_65 = (min (var_1_41 , (abs (var_1_63))));
		}
	}


	// From: CodeObject19
	if ((var_1_37 & var_1_33) >= var_1_40) {
		var_1_66 = var_1_39;
	}


	// From: CodeObject20
	if (var_1_25) {
		var_1_67 = var_1_62;
	}


	// From: CodeObject21
	var_1_68 = var_1_62;


	// From: CodeObject22
	if (var_1_29 != (var_1_34 / var_1_70)) {
		if ((- (abs (1.000000006E8f))) >= var_1_55) {
			var_1_69 = var_1_71;
		} else {
			if (var_1_35 <= (max ((- var_1_23) , var_1_36))) {
				var_1_69 = (min ((abs (var_1_54)) , (abs (min (var_1_53 , var_1_62)))));
			}
		}
	} else {
		if (var_1_35 < var_1_36) {
			var_1_69 = (var_1_62 - var_1_63);
		}
	}


	// From: CodeObject23
	if (var_1_44) {
		var_1_72 = (min (var_1_52 , (abs (abs (var_1_62)))));
	} else {
		var_1_72 = ((abs (var_1_53)) - 25);
	}


	// From: CodeObject24
	if (var_1_46) {
		var_1_73 = (var_1_74 - var_1_75);
	}


	// From: CodeObject25
	if (var_1_47 || ((var_1_45 <= var_1_22) && var_1_49)) {
		if (32.5 >= (var_1_74 * 16.3)) {
			var_1_76 = (abs ((var_1_45 + var_1_43) - var_1_39));
		}
	}


	// From: CodeObject26
	if (((var_1_30 + var_1_75) <= var_1_35) || (var_1_26 <= var_1_59)) {
		var_1_77 = var_1_41;
	}


	// From: CodeObject27
	if (var_1_36 >= var_1_75) {
		if (var_1_46) {
			var_1_78 = (min (((var_1_40 - var_1_56) + (var_1_77 - var_1_68)) , ((abs (var_1_61)) - var_1_38)));
		}
	} else {
		var_1_78 = (max ((abs (var_1_39)) , (var_1_67 - (max (var_1_79 , 1)))));
	}


	// From: CodeObject28
	if (var_1_59 >= ((abs (-2)) << var_1_81)) {
		var_1_80 = (min ((min ((abs (var_1_53)) , (max (var_1_82 , var_1_32)))) , var_1_71));
	}


	// From: CodeObject29
	if (4u <= (min (16u , var_1_39))) {
		var_1_83 = var_1_74;
	}


	// From: CodeObject30
	if (! (var_1_30 != var_1_73)) {
		if (var_1_42) {
			if (var_1_44 || var_1_48) {
				var_1_84 = (abs ((max (var_1_37 , var_1_52)) + var_1_59));
			}
		}
	} else {
		if (32 > (var_1_22 * var_1_61)) {
			if (var_1_38 >= (var_1_78 & 10)) {
				var_1_84 = (abs (4 + var_1_51));
			}
		}
	}


	// From: CodeObject31
	if (9.99999999999995E13f <= var_1_75) {
		if (var_1_33 < (var_1_84 | var_1_37)) {
			var_1_85 = (var_1_86 - var_1_38);
		}
	}


	// From: CodeObject32
	if ((5.5f * var_1_70) <= (min (var_1_30 , var_1_83))) {
		var_1_87 = (max (var_1_41 , (max ((max (var_1_56 , 4u)) , var_1_38))));
	}


	// From: CodeObject33
	if (var_1_47) {
		if (var_1_79 > var_1_63) {
			var_1_88 = (abs (var_1_63));
		}
	}


	// From: CodeObject34
	if (((var_1_51 % var_1_90) / (max (var_1_91 , var_1_92))) > var_1_67) {
		var_1_89 = (abs (var_1_81 + (abs (var_1_62))));
	} else {
		var_1_89 = 64;
	}


	// From: CodeObject35
	if (var_1_25) {
		var_1_93 = (abs (abs (var_1_79)));
	} else {
		var_1_93 = (abs (abs (var_1_63)));
	}


	// From: CodeObject36
	if (var_1_95) {
		var_1_94 = ((abs (var_1_96)) + (abs (var_1_97)));
	}


	// From: CodeObject37
	if ((max (var_1_77 , var_1_59)) <= var_1_64) {
		var_1_98 = ((max (var_1_39 , var_1_99)) - ((var_1_100 + var_1_101) - var_1_81));
	} else {
		if (var_1_46) {
			var_1_98 = (max ((abs (var_1_99)) , (var_1_39 - var_1_62)));
		}
	}


	// From: CodeObject38
	if (var_1_66 < var_1_78) {
		var_1_102 = var_1_32;
	}


	// From: CodeObject39
	if (var_1_47) {
		var_1_103 = (var_1_54 + (abs (var_1_99)));
	} else {
		if (var_1_48) {
			var_1_103 = (abs (abs (max (var_1_80 , var_1_90))));
		}
	}


	// From: CodeObject40
	if (-64 > (abs (var_1_39))) {
		if ((var_1_48 || var_1_49) && ((64 << var_1_82) < var_1_85)) {
			var_1_104 = (max (var_1_50 , (abs (abs (var_1_41)))));
		}
	}


	// From: CodeObject41
	if (var_1_70 > (max (var_1_34 , var_1_83))) {
		var_1_105 = (abs (var_1_75));
	} else {
		if (var_1_97 > var_1_35) {
			var_1_105 = (min ((min ((var_1_75 - var_1_74) , var_1_30)) , (var_1_96 + (var_1_106 + var_1_107))));
		} else {
			var_1_105 = var_1_96;
		}
	}


	// From: CodeObject42
	if ((var_1_98 >> var_1_71) >= (var_1_40 * var_1_63)) {
		var_1_108 = (min (var_1_79 , var_1_69));
	} else {
		var_1_108 = (abs (var_1_79));
	}


	// From: CodeObject43
	if ((min ((max (var_1_35 , var_1_30)) , var_1_107)) <= var_1_75) {
		var_1_109 = var_1_63;
	} else {
		var_1_109 = (abs (min (var_1_39 , (var_1_99 - var_1_81))));
	}


	// From: CodeObject44
	if (! (var_1_75 >= (var_1_111 * var_1_106))) {
		var_1_110 = (abs (min (128 , var_1_112)));
	} else {
		if (var_1_56 >= (var_1_99 - var_1_63)) {
			var_1_110 = (abs (var_1_63));
		}
	}


	// From: CodeObject45
	if (var_1_80 > (var_1_71 % var_1_100)) {
		if ((1 / var_1_39) <= var_1_71) {
			var_1_113 = (abs (var_1_100));
		} else {
			var_1_113 = var_1_71;
		}
	} else {
		var_1_113 = (abs (var_1_54));
	}


	// From: CodeObject46
	if (var_1_25) {
		var_1_114 = (max ((var_1_71 + var_1_45) , (abs (var_1_69))));
	}


	// From: CodeObject47
	if (-2 <= var_1_87) {
		if (var_1_24 <= var_1_28) {
			var_1_115 = (max ((min (var_1_30 , (abs (15.8f)))) , ((var_1_106 + var_1_107) + (var_1_116 - var_1_117))));
		} else {
			if (var_1_41 > var_1_63) {
				var_1_115 = (max ((max (var_1_74 , var_1_96)) , var_1_118));
			} else {
				var_1_115 = var_1_106;
			}
		}
	}


	// From: CodeObject48
	if ((var_1_45 + var_1_92) <= var_1_56) {
		var_1_119 = (min ((abs (var_1_37 + var_1_62)) , var_1_43));
	}


	// From: CodeObject49
	if ((var_1_48 && var_1_95) || (! var_1_42)) {
		var_1_120 = ((var_1_107 + var_1_106) + var_1_117);
	} else {
		if (var_1_28 != 25.94f) {
			if (var_1_78 > var_1_54) {
				if (var_1_47) {
					var_1_120 = (abs (var_1_96));
				}
			}
		} else {
			if ((var_1_43 >= var_1_50) || (var_1_72 < var_1_101)) {
				var_1_120 = (1000.2f + (abs (min (var_1_117 , var_1_106))));
			} else {
				var_1_120 = 100.5f;
			}
		}
	}


	// From: CodeObject50
	if (var_1_42) {
		if ((var_1_70 + var_1_115) > var_1_107) {
			var_1_121 = (abs (var_1_61));
		}
	}


	// From: CodeObject51
	if (var_1_51 >= (abs (var_1_32))) {
		var_1_122 = (abs (var_1_90));
	} else {
		var_1_122 = (min ((min ((max (var_1_32 , var_1_89)) , var_1_121)) , (abs (var_1_98))));
	}


	// From: CodeObject52
	if (var_1_90 >= (abs (-32))) {
		if (((abs (var_1_34)) / (abs (var_1_70))) < var_1_120) {
			var_1_123 = var_1_96;
		} else {
			var_1_123 = var_1_118;
		}
	} else {
		if ((- var_1_103) < var_1_66) {
			var_1_123 = (abs (var_1_96));
		} else {
			var_1_123 = (abs (var_1_116));
		}
	}


	// From: CodeObject53
	if (! var_1_25) {
		var_1_124 = (max ((abs (var_1_63)) , var_1_90));
	}


	// From: CodeObject54
	if (var_1_37 >= (var_1_56 / (min (var_1_100 , var_1_39)))) {
		if ((max (var_1_109 , 32)) >= (abs (var_1_77 + var_1_45))) {
			var_1_125 = var_1_62;
		}
	}


	// From: CodeObject55
	if (var_1_25) {
		var_1_127 = var_1_39;
	}


	// From: CodeObject56
	var_1_128 = var_1_109;


	// From: CodeObject57
	if (var_1_47) {
		var_1_129 = var_1_48;
	}


	// From: CodeObject58
	var_1_130 = var_1_99;


	// From: CodeObject59
	var_1_131 = var_1_37;


	// From: CodeObject60
	if (var_1_133) {
		var_1_132 = var_1_39;
	}


	// From: CodeObject61
	if (var_1_46) {
		var_1_134 = var_1_107;
	}


	// From: CodeObject62
	if (var_1_46) {
		var_1_135 = var_1_49;
	} else {
		var_1_135 = var_1_47;
	}


	// From: CodeObject63
	if (var_1_46) {
		var_1_136 = var_1_80;
	} else {
		var_1_136 = -200;
	}


	// From: CodeObject64
	if (var_1_48) {
		var_1_137 = var_1_30;
	}


	// From: CodeObject65
	if (var_1_139) {
		var_1_138 = var_1_97;
	} else {
		var_1_138 = var_1_96;
	}


	// From: CodeObject66
	var_1_140 = var_1_43;


	// From: CodeObject67
	if (var_1_46) {
		var_1_141 = var_1_49;
	}


	// From: CodeObject68
	if (var_1_135) {
		var_1_142 = var_1_71;
	}


	// From: CodeObject69
	if (var_1_135 && ((max (var_1_138 , var_1_106)) < var_1_55)) {
		if (! var_1_95) {
			var_1_143 = (max (var_1_67 , (var_1_41 - var_1_144)));
		}
	}


	// From: Req3Batch66PS_CN_500
	signed char stepLocal_1 = var_1_6;
	unsigned char stepLocal_0 = last_1_var_1_12;
	if (-25 == stepLocal_1) {
		if (last_1_var_1_12 && stepLocal_0) {
			var_1_8 = (max (((var_1_10 - 10) - 16) , (var_1_11 - var_1_7)));
		}
	} else {
		var_1_8 = (max (var_1_7 , var_1_11));
	}


	// From: Req4Batch66PS_CN_500
	signed char stepLocal_2 = var_1_7;
	if (var_1_8 >= stepLocal_2) {
		var_1_12 = (! var_1_14);
	}


	// From: Req1Batch66PS_CN_500
	if (var_1_12) {
		var_1_1 = (var_1_3 + var_1_4);
	}


	// From: Req2Batch66PS_CN_500
	if (var_1_4 >= (var_1_6 - var_1_7)) {
		if (var_1_12) {
			var_1_5 = 8.25;
		}
	}


	// From: Req7Batch66PS_CN_500
	signed char stepLocal_4 = var_1_6;
	if (var_1_1 < stepLocal_4) {
		var_1_18 = (var_1_6 - var_1_7);
	} else {
		var_1_18 = (min ((var_1_6 + var_1_4) , var_1_1));
	}


	// From: Req8Batch66PS_CN_500
	if (var_1_12) {
		var_1_19 = ((var_1_7 - (min (var_1_20 , var_1_21))) + var_1_6);
	}


	// From: Req5Batch66PS_CN_500
	if (-64 > (var_1_6 + var_1_19)) {
		var_1_15 = (var_1_11 - var_1_7);
	} else {
		if (! var_1_12) {
			if (var_1_12) {
				var_1_15 = 4;
			}
		}
	}


	// From: Req6Batch66PS_CN_500
	signed long int stepLocal_3 = (max (var_1_11 , var_1_18)) + (var_1_15 / var_1_10);
	if (var_1_19 > stepLocal_3) {
		var_1_16 = var_1_4;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -63);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 49150);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 32767);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 16383);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 16383);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483646);
	assume_abort_if_not(var_1_26 <= 2147483646);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -127);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 4611686.018427387900e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 65534);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 127);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 65535);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -63);
	assume_abort_if_not(var_1_52 <= 63);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= -63);
	assume_abort_if_not(var_1_53 <= 63);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= -63);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 255);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 2147483647);
	assume_abort_if_not(var_1_58 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 63);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 63);
	var_1_70 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_70 >= -922337.2036854776000e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854776000e+12F && var_1_70 >= 1.0e-20F ));
	assume_abort_if_not(var_1_70 != 0.0F);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= -127);
	assume_abort_if_not(var_1_71 <= 126);
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854765600e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 9223372.036854765600e+12F && var_1_75 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 32766);
	var_1_81 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 30);
	var_1_82 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_82 >= -127);
	assume_abort_if_not(var_1_82 <= 126);
	var_1_86 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_86 >= 32767);
	assume_abort_if_not(var_1_86 <= 65534);
	var_1_90 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_90 >= -128);
	assume_abort_if_not(var_1_90 <= 127);
	assume_abort_if_not(var_1_90 != 0);
	var_1_91 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_91 >= -128);
	assume_abort_if_not(var_1_91 <= 127);
	assume_abort_if_not(var_1_91 != 0);
	var_1_92 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_92 >= -128);
	assume_abort_if_not(var_1_92 <= 127);
	assume_abort_if_not(var_1_92 != 0);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 1);
	var_1_96 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_96 >= -461168.6018427382800e+13F && var_1_96 <= -1.0e-20F) || (var_1_96 <= 4611686.018427382800e+12F && var_1_96 >= 1.0e-20F ));
	var_1_97 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_97 >= -461168.6018427382800e+13F && var_1_97 <= -1.0e-20F) || (var_1_97 <= 4611686.018427382800e+12F && var_1_97 >= 1.0e-20F ));
	var_1_99 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_99 >= 127);
	assume_abort_if_not(var_1_99 <= 254);
	var_1_100 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_100 >= 31);
	assume_abort_if_not(var_1_100 <= 64);
	var_1_101 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_101 >= 32);
	assume_abort_if_not(var_1_101 <= 63);
	var_1_106 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_106 >= -230584.3009213691390e+13F && var_1_106 <= -1.0e-20F) || (var_1_106 <= 2305843.009213691390e+12F && var_1_106 >= 1.0e-20F ));
	var_1_107 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_107 >= -230584.3009213691390e+13F && var_1_107 <= -1.0e-20F) || (var_1_107 <= 2305843.009213691390e+12F && var_1_107 >= 1.0e-20F ));
	var_1_111 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_111 >= -922337.2036854776000e+13F && var_1_111 <= -1.0e-20F) || (var_1_111 <= 9223372.036854776000e+12F && var_1_111 >= 1.0e-20F ));
	var_1_112 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_112 >= 0);
	assume_abort_if_not(var_1_112 <= 65534);
	var_1_116 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_116 >= 0.0F && var_1_116 <= -1.0e-20F) || (var_1_116 <= 4611686.018427382800e+12F && var_1_116 >= 1.0e-20F ));
	var_1_117 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_117 >= 0.0F && var_1_117 <= -1.0e-20F) || (var_1_117 <= 4611686.018427382800e+12F && var_1_117 >= 1.0e-20F ));
	var_1_118 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_118 >= -922337.2036854765600e+13F && var_1_118 <= -1.0e-20F) || (var_1_118 <= 9223372.036854765600e+12F && var_1_118 >= 1.0e-20F ));
	var_1_133 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_133 >= 0);
	assume_abort_if_not(var_1_133 <= 1);
	var_1_139 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_139 >= 0);
	assume_abort_if_not(var_1_139 <= 1);
	var_1_144 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_144 >= 0);
	assume_abort_if_not(var_1_144 <= 32766);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
}

int property() {
	return (((((((var_1_12 ? (var_1_1 == ((signed char) (var_1_3 + var_1_4))) : 1) && ((var_1_4 >= (var_1_6 - var_1_7)) ? (var_1_12 ? (var_1_5 == ((double) 8.25)) : 1) : 1)) && ((-25 == var_1_6) ? ((last_1_var_1_12 && last_1_var_1_12) ? (var_1_8 == ((unsigned short int) (max (((var_1_10 - 10) - 16) , (var_1_11 - var_1_7))))) : 1) : (var_1_8 == ((unsigned short int) (max (var_1_7 , var_1_11)))))) && ((var_1_8 >= var_1_7) ? (var_1_12 == ((unsigned char) (! var_1_14))) : 1)) && ((-64 > (var_1_6 + var_1_19)) ? (var_1_15 == ((signed long int) (var_1_11 - var_1_7))) : ((! var_1_12) ? (var_1_12 ? (var_1_15 == ((signed long int) 4)) : 1) : 1))) && ((var_1_19 > ((max (var_1_11 , var_1_18)) + (var_1_15 / var_1_10))) ? (var_1_16 == ((signed short int) var_1_4)) : 1)) && ((var_1_1 < var_1_6) ? (var_1_18 == ((signed short int) (var_1_6 - var_1_7))) : (var_1_18 == ((signed short int) (min ((var_1_6 + var_1_4) , var_1_1)))))) && (var_1_12 ? (var_1_19 == ((signed short int) ((var_1_7 - (min (var_1_20 , var_1_21))) + var_1_6))) : 1)
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
