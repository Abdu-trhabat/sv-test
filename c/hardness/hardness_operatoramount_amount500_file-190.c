// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch190Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 500;
unsigned long int var_1_6 = 50;
unsigned long int var_1_7 = 1908897212;
unsigned long int var_1_8 = 8;
unsigned long int var_1_9 = 16;
unsigned long int var_1_10 = 128;
unsigned char var_1_11 = 16;
unsigned char var_1_12 = 128;
unsigned char var_1_13 = 5;
unsigned long int var_1_14 = 10;
unsigned long int var_1_15 = 5;
unsigned long int var_1_18 = 2474382353;
unsigned long int var_1_19 = 3385929947;
unsigned long int var_1_20 = 25;
signed long int var_1_21 = 25;
signed long int var_1_22 = 25;
signed long int var_1_23 = 1722968938;
unsigned long int var_1_24 = 2;
signed short int var_1_25 = -25;
unsigned long int var_1_26 = 100;
unsigned long int var_1_27 = 1122883741;
double var_1_28 = 15.85;
double var_1_29 = 10000.5;
unsigned char var_1_30 = 32;
unsigned char var_1_31 = 100;
unsigned char var_1_32 = 64;
signed char var_1_33 = -128;
signed char var_1_34 = 16;
signed char var_1_35 = -1;
signed char var_1_36 = -1;
signed char var_1_37 = 5;
signed char var_1_38 = 64;
signed char var_1_39 = 0;
signed char var_1_40 = 2;
signed char var_1_41 = 1;
double var_1_42 = 10000000000000.5;
double var_1_43 = 49.15;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
float var_1_52 = 7.5;
float var_1_53 = 10.05;
float var_1_54 = 10000.8;
float var_1_55 = 127.5;
float var_1_56 = 9.75;
float var_1_57 = 7.8;
unsigned short int var_1_58 = 2;
unsigned short int var_1_59 = 47999;
unsigned long int var_1_60 = 2;
float var_1_61 = 99999.2;
float var_1_62 = 7.5;
unsigned short int var_1_63 = 128;
signed short int var_1_64 = 25;
unsigned char var_1_65 = 1;
double var_1_66 = 0.75;
double var_1_67 = 50.6;
double var_1_68 = 9.4;
double var_1_69 = 100.8;
signed char var_1_70 = -4;
unsigned short int var_1_71 = 5;
unsigned short int var_1_72 = 0;
signed char var_1_73 = 100;
signed char var_1_74 = 64;
unsigned long int var_1_75 = 128;
signed long int var_1_76 = -50;
unsigned char var_1_77 = 0;
double var_1_78 = -0.75;
double var_1_79 = 4.5;
double var_1_80 = 100000000000.2;
unsigned char var_1_81 = 1;
double var_1_83 = 255.75;
double var_1_84 = 8.3;
double var_1_85 = 99999.4;
double var_1_86 = 0.0;
unsigned long int var_1_87 = 4;
unsigned long int var_1_88 = 10000000;
unsigned long int var_1_89 = 10;
signed short int var_1_90 = 64;
unsigned long int var_1_91 = 100;
signed short int var_1_92 = 10;
float var_1_93 = 25.6;
unsigned long int var_1_94 = 10;
unsigned long int var_1_95 = 2936197084;
unsigned long int var_1_96 = 5;
unsigned char var_1_97 = 1;
unsigned short int var_1_98 = 8;
unsigned long int var_1_99 = 100;
unsigned long int var_1_100 = 2;
unsigned long int var_1_102 = 4257503797;
unsigned short int var_1_103 = 2;
unsigned long int var_1_104 = 4;
signed short int var_1_105 = 32;
signed short int var_1_106 = 10;
signed short int var_1_107 = 21786;
signed long int var_1_108 = -25;
double var_1_109 = 0.0;
signed long int var_1_110 = 2;
unsigned short int var_1_111 = 5;
unsigned long int var_1_112 = 10000;
unsigned char var_1_113 = 1;
signed long int var_1_114 = -10000;
signed short int var_1_115 = -8;
signed short int var_1_117 = 10;
unsigned char var_1_118 = 0;
unsigned char var_1_119 = 1;
signed char var_1_120 = 2;
unsigned char var_1_121 = 1;
unsigned char var_1_122 = 0;
unsigned char var_1_123 = 8;
signed char var_1_124 = 2;
unsigned char var_1_125 = 4;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_14 = 10;
signed long int last_1_var_1_21 = 25;
unsigned char last_1_var_1_47 = 1;
float last_1_var_1_52 = 7.5;
unsigned char last_1_var_1_65 = 1;
double last_1_var_1_66 = 0.75;
double last_1_var_1_83 = 255.75;
unsigned long int last_1_var_1_91 = 100;
unsigned char last_1_var_1_97 = 1;
unsigned long int last_1_var_1_100 = 2;
unsigned short int last_1_var_1_103 = 2;
unsigned long int last_1_var_1_104 = 4;
unsigned char last_1_var_1_123 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req40Batch190Amount500
	if (var_1_12 == last_1_var_1_123) {
		if (((max (var_1_88 , var_1_38)) / var_1_32) < (var_1_41 / (4041735718u - var_1_23))) {
			var_1_100 = (max (var_1_39 , var_1_22));
		}
	} else {
		if (last_1_var_1_47) {
			var_1_100 = (var_1_95 - (min (100000000u , var_1_23)));
		} else {
			var_1_100 = (((var_1_102 - var_1_31) - var_1_38) - (var_1_27 - last_1_var_1_21));
		}
	}


	// From: Req14Batch190Amount500
	if (var_1_46 || (last_1_var_1_65 || (! last_1_var_1_47))) {
		var_1_47 = ((var_1_34 <= var_1_22) || ((var_1_45 || var_1_48) && var_1_49));
	} else {
		if ((var_1_19 - (max (var_1_27 , var_1_10))) >= var_1_7) {
			var_1_47 = ((last_1_var_1_91 >= 1u) && var_1_45);
		} else {
			if ((last_1_var_1_91 >= (last_1_var_1_14 % 1u)) || (last_1_var_1_52 < last_1_var_1_66)) {
				if ((32 >= (max (var_1_22 , last_1_var_1_104))) && last_1_var_1_65) {
					var_1_47 = (! (var_1_49 && var_1_48));
				}
			} else {
				if (! last_1_var_1_65) {
					var_1_47 = (var_1_50 || var_1_51);
				} else {
					if ((- last_1_var_1_100) <= (var_1_12 / var_1_7)) {
						var_1_47 = var_1_49;
					}
				}
			}
		}
	}


	// From: Req22Batch190Amount500
	if (var_1_31 > last_1_var_1_21) {
		var_1_66 = var_1_67;
	} else {
		var_1_66 = ((var_1_56 - (0.5 + var_1_68)) + var_1_69);
	}


	// From: Req17Batch190Amount500
	if (((var_1_56 - var_1_55) + last_1_var_1_83) > var_1_53) {
		var_1_60 = (var_1_40 + var_1_41);
	} else {
		var_1_60 = (var_1_38 + var_1_9);
	}


	// From: Req3Batch190Amount500
	var_1_14 = (var_1_8 + var_1_12);


	// From: Req9Batch190Amount500
	unsigned long int stepLocal_2 = var_1_6;
	if (var_1_12 >= stepLocal_2) {
		var_1_30 = ((min (var_1_12 , (var_1_31 + var_1_32))) - var_1_13);
	}


	// From: Req10Batch190Amount500
	signed long int stepLocal_3 = -256;
	if ((var_1_25 % var_1_32) < stepLocal_3) {
		var_1_33 = (min (var_1_34 , var_1_35));
	} else {
		var_1_33 = (10 + var_1_36);
	}


	// From: Req11Batch190Amount500
	if (var_1_22 == 256) {
		var_1_37 = ((var_1_38 - var_1_39) - (min (var_1_40 , var_1_41)));
	}


	// From: Req12Batch190Amount500
	unsigned long int stepLocal_4 = var_1_20;
	if (var_1_12 >= stepLocal_4) {
		var_1_42 = (min ((abs (var_1_29)) , var_1_43));
	}


	// From: Req16Batch190Amount500
	var_1_58 = (min (var_1_41 , (var_1_59 - var_1_32)));


	// From: Req19Batch190Amount500
	if (var_1_50) {
		var_1_63 = ((max (8 , var_1_31)) + var_1_12);
	}


	// From: Req24Batch190Amount500
	if ((var_1_63 | (var_1_18 - var_1_27)) <= var_1_13) {
		var_1_74 = (var_1_71 - 1);
	}


	// From: Req25Batch190Amount500
	if ((var_1_56 - var_1_62) >= var_1_55) {
		var_1_75 = (max (var_1_100 , var_1_10));
	}


	// From: Req28Batch190Amount500
	if ((var_1_8 >= var_1_100) && var_1_48) {
		if ((var_1_71 < 0) && (var_1_38 != var_1_75)) {
			var_1_78 = (min (var_1_54 , (min ((var_1_69 + 10.6) , 0.625))));
		} else {
			var_1_78 = ((var_1_68 - var_1_56) + ((min (var_1_57 , var_1_79)) - var_1_80));
		}
	}


	// From: Req29Batch190Amount500
	signed long int stepLocal_5 = 5 - var_1_13;
	if (var_1_58 <= stepLocal_5) {
		var_1_81 = (var_1_49 && var_1_51);
	} else {
		var_1_81 = var_1_45;
	}


	// From: Req31Batch190Amount500
	if (256 >= var_1_8) {
		var_1_87 = ((3924526332u - var_1_88) - (var_1_89 + var_1_39));
	} else {
		var_1_87 = (min (var_1_6 , (var_1_13 + var_1_71)));
	}


	// From: Req42Batch190Amount500
	signed char stepLocal_10 = var_1_73;
	if (stepLocal_10 <= var_1_35) {
		var_1_104 = var_1_39;
	} else {
		var_1_104 = (var_1_102 - var_1_23);
	}


	// From: Req45Batch190Amount500
	var_1_109 = 0.9;


	// From: Req46Batch190Amount500
	if (var_1_49) {
		var_1_110 = var_1_23;
	} else {
		var_1_110 = var_1_25;
	}


	// From: Req47Batch190Amount500
	var_1_111 = var_1_59;


	// From: Req48Batch190Amount500
	var_1_112 = var_1_58;


	// From: Req52Batch190Amount500
	var_1_117 = var_1_30;


	// From: Req53Batch190Amount500
	var_1_118 = var_1_49;


	// From: Req54Batch190Amount500
	var_1_119 = 0;


	// From: Req55Batch190Amount500
	var_1_120 = var_1_34;


	// From: Req56Batch190Amount500
	var_1_121 = var_1_39;


	// From: Req57Batch190Amount500
	if (var_1_119) {
		var_1_122 = var_1_71;
	} else {
		var_1_122 = var_1_40;
	}


	// From: Req59Batch190Amount500
	var_1_124 = (var_1_72 - var_1_39);


	// From: Req60Batch190Amount500
	if (! var_1_48) {
		var_1_125 = (200 - var_1_38);
	} else {
		if (var_1_81) {
			var_1_125 = var_1_31;
		} else {
			var_1_125 = var_1_32;
		}
	}


	// From: Req44Batch190Amount500
	if (var_1_81) {
		var_1_108 = var_1_60;
	} else {
		var_1_108 = var_1_13;
	}


	// From: Req4Batch190Amount500
	if (var_1_47 || var_1_81) {
		if (var_1_47) {
			if (((min (var_1_18 , var_1_19)) - 10u) < var_1_7) {
				var_1_15 = (max ((min (var_1_20 , 5u)) , var_1_8));
			} else {
				var_1_15 = (var_1_12 + (var_1_111 + var_1_13));
			}
		}
	} else {
		var_1_15 = (max ((max ((var_1_12 + var_1_10) , var_1_9)) , var_1_7));
	}


	// From: Req13Batch190Amount500
	if (var_1_81) {
		var_1_44 = (var_1_45 || var_1_46);
	} else {
		var_1_44 = (var_1_46 && var_1_45);
	}


	// From: Req20Batch190Amount500
	var_1_64 = (var_1_40 + (var_1_39 - var_1_125));


	// From: Req26Batch190Amount500
	if (var_1_23 >= (var_1_8 * var_1_59)) {
		var_1_76 = (max (-50 , var_1_72));
	} else {
		var_1_76 = ((var_1_110 + 100) - var_1_72);
	}


	// From: Req27Batch190Amount500
	if (var_1_119) {
		var_1_77 = (var_1_50 || (var_1_48 && var_1_45));
	}


	// From: Req32Batch190Amount500
	unsigned char stepLocal_6 = var_1_36 < (var_1_72 - var_1_40);
	if (var_1_77 || stepLocal_6) {
		var_1_90 = (25 - var_1_71);
	} else {
		var_1_90 = ((max (var_1_40 , var_1_39)) - var_1_13);
	}


	// From: Req36Batch190Amount500
	unsigned long int stepLocal_8 = (500 - var_1_71) + var_1_9;
	if (var_1_76 != stepLocal_8) {
		var_1_94 = (var_1_95 - var_1_38);
	} else {
		var_1_94 = (min (var_1_64 , var_1_96));
	}


	// From: Req38Batch190Amount500
	var_1_98 = (54808 - (10 + var_1_111));


	// From: Req39Batch190Amount500
	if (var_1_44) {
		if (var_1_63 < (var_1_14 * var_1_8)) {
			var_1_99 = (min (var_1_7 , 0u));
		}
	}


	// From: Req41Batch190Amount500
	signed long int stepLocal_9 = var_1_12 * var_1_40;
	if (var_1_23 == stepLocal_9) {
		var_1_103 = (abs (max (var_1_64 , last_1_var_1_103)));
	} else {
		if (! var_1_49) {
			var_1_103 = (min (var_1_41 , last_1_var_1_103));
		} else {
			var_1_103 = (min ((min (var_1_41 , var_1_38)) , last_1_var_1_103));
		}
	}


	// From: Req43Batch190Amount500
	if ((var_1_57 - var_1_55) < 255.6f) {
		var_1_105 = (var_1_31 + ((max (256 , var_1_106)) - var_1_13));
	} else {
		if (var_1_102 > var_1_18) {
			var_1_105 = (max (var_1_32 , var_1_72));
		} else {
			if (var_1_99 <= (var_1_112 + (var_1_39 / var_1_18))) {
				var_1_105 = (var_1_35 + -10);
			} else {
				var_1_105 = (var_1_31 - (var_1_107 - var_1_71));
			}
		}
	}


	// From: Req50Batch190Amount500
	var_1_114 = var_1_103;


	// From: Req58Batch190Amount500
	if (var_1_44) {
		var_1_123 = var_1_71;
	} else {
		var_1_123 = 5;
	}


	// From: Req5Batch190Amount500
	if (var_1_44 && var_1_77) {
		var_1_21 = (min ((max (var_1_8 , var_1_13)) , var_1_100));
	} else {
		var_1_21 = ((var_1_23 - (var_1_12 + var_1_13)) - (var_1_8 + (5 + var_1_100)));
	}


	// From: Req7Batch190Amount500
	unsigned char stepLocal_1 = var_1_42 == var_1_66;
	unsigned long int stepLocal_0 = var_1_7;
	if (stepLocal_0 > (var_1_20 / var_1_12)) {
		if (var_1_77 || stepLocal_1) {
			var_1_26 = ((var_1_7 + (abs (var_1_27))) - var_1_22);
		}
	}


	// From: Req33Batch190Amount500
	unsigned long int stepLocal_7 = - var_1_14;
	if ((var_1_26 + var_1_9) == stepLocal_7) {
		var_1_91 = ((var_1_32 + last_1_var_1_91) + var_1_39);
	} else {
		var_1_91 = (abs (var_1_59 + var_1_12));
	}


	// From: Req21Batch190Amount500
	if (var_1_108 > var_1_60) {
		var_1_65 = (! (var_1_45 || var_1_49));
	} else {
		var_1_65 = ((! (! 0)) || (var_1_50 || var_1_46));
	}


	// From: Req51Batch190Amount500
	if (var_1_65) {
		var_1_115 = var_1_105;
	} else {
		var_1_115 = var_1_34;
	}


	// From: Req6Batch190Amount500
	if (((1 - var_1_76) / (max (var_1_12 , var_1_25))) == var_1_9) {
		var_1_24 = (max (var_1_13 , var_1_76));
	} else {
		var_1_24 = (min ((var_1_22 + var_1_8) , (var_1_7 + var_1_9)));
	}


	// From: Req18Batch190Amount500
	if ((var_1_12 - var_1_32) > (var_1_103 & (var_1_22 * var_1_7))) {
		if ((var_1_75 < var_1_104) || var_1_50) {
			if (64.5f < (abs (var_1_78))) {
				var_1_61 = (min (var_1_56 , (max (var_1_54 , var_1_57))));
			} else {
				var_1_61 = (min ((var_1_57 - var_1_62) , (var_1_53 + var_1_54)));
			}
		}
	} else {
		var_1_61 = ((abs (var_1_56)) + (abs (var_1_54)));
	}


	// From: Req37Batch190Amount500
	if (var_1_60 <= var_1_98) {
		if (var_1_8 < var_1_115) {
			if (last_1_var_1_97) {
				if (var_1_119 && var_1_51) {
					if ((var_1_58 >> var_1_71) < var_1_40) {
						var_1_97 = (((var_1_77 && var_1_45) || (var_1_46 || var_1_51)) || var_1_50);
					} else {
						var_1_97 = (var_1_47 || var_1_48);
					}
				}
			} else {
				var_1_97 = var_1_49;
			}
		} else {
			var_1_97 = ((! var_1_77) && (var_1_45 || var_1_46));
		}
	} else {
		var_1_97 = ((var_1_46 || var_1_48) && var_1_49);
	}


	// From: Req49Batch190Amount500
	if (var_1_97) {
		var_1_113 = var_1_48;
	}


	// From: Req35Batch190Amount500
	if (var_1_50 || var_1_48) {
		var_1_93 = (max (var_1_79 , var_1_56));
	} else {
		if (var_1_113 || var_1_50) {
			var_1_93 = (var_1_80 - var_1_55);
		} else {
			var_1_93 = var_1_57;
		}
	}


	// From: Req15Batch190Amount500
	if (var_1_113) {
		if (var_1_81 && var_1_51) {
			var_1_52 = (max (var_1_43 , (var_1_53 + var_1_54)));
		} else {
			var_1_52 = (var_1_55 - (var_1_56 + var_1_57));
		}
	} else {
		if (var_1_119) {
			var_1_52 = (var_1_56 - (max (var_1_55 , var_1_57)));
		} else {
			var_1_52 = var_1_53;
		}
	}


	// From: Req8Batch190Amount500
	if ((var_1_52 * 1.42f) != var_1_109) {
		if (var_1_77) {
			var_1_28 = var_1_29;
		}
	} else {
		var_1_28 = -0.5;
	}


	// From: Req30Batch190Amount500
	if (! ((var_1_109 < var_1_66) && (var_1_57 < var_1_28))) {
		if (var_1_50) {
			var_1_83 = (max (((abs (9.999999999999995E14)) + (64.5 - var_1_84)) , (max (var_1_57 , var_1_43))));
		} else {
			if (var_1_55 <= (var_1_56 + (abs (var_1_79)))) {
				var_1_83 = (max (((max (var_1_68 , var_1_85)) - (var_1_86 - 64.875)) , (min ((min (var_1_57 , var_1_54)) , var_1_69))));
			} else {
				var_1_83 = (min ((min (var_1_56 , (var_1_57 + var_1_84))) , var_1_68));
			}
		}
	} else {
		var_1_83 = (var_1_84 + var_1_54);
	}


	// From: Req1Batch190Amount500
	if (var_1_109 > (var_1_42 * (var_1_28 * var_1_42))) {
		var_1_1 = var_1_6;
	} else {
		var_1_1 = ((var_1_7 - (var_1_8 + 32u)) + (min (var_1_9 , var_1_10)));
	}


	// From: Req2Batch190Amount500
	if (var_1_28 < (max (var_1_61 , var_1_42))) {
		var_1_11 = ((max (128 , var_1_12)) - var_1_13);
	}


	// From: Req23Batch190Amount500
	if ((var_1_56 - var_1_57) < var_1_78) {
		if (var_1_55 >= (max (var_1_57 , 32.2f))) {
			if (var_1_18 > var_1_22) {
				var_1_70 = (min (var_1_41 , (min (var_1_39 , var_1_35))));
			} else {
				if (var_1_1 <= var_1_39) {
					var_1_70 = (min ((var_1_36 + var_1_39) , (abs (var_1_38))));
				} else {
					if ((var_1_38 >> (var_1_71 - var_1_72)) < var_1_23) {
						var_1_70 = (var_1_39 + -5);
					}
				}
			}
		} else {
			if ((var_1_41 - (min (var_1_40 , var_1_31))) <= var_1_26) {
				if (var_1_59 <= (var_1_6 + (var_1_72 ^ 500))) {
					var_1_70 = (max (var_1_39 , var_1_34));
				}
			}
		}
	} else {
		if (var_1_49) {
			var_1_70 = (max (var_1_34 , var_1_72));
		} else {
			var_1_70 = (min (var_1_73 , (var_1_39 + var_1_72)));
		}
	}


	// From: Req34Batch190Amount500
	if (var_1_67 == (- var_1_68)) {
		var_1_92 = ((max ((min (var_1_40 , var_1_41)) , var_1_1)) - var_1_38);
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 1073741823);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 536870912);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 127);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 2147483647);
	assume_abort_if_not(var_1_18 <= 4294967295);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967295);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 4294967294);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 2147483646);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 1073741822);
	assume_abort_if_not(var_1_23 <= 2147483646);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -32768);
	assume_abort_if_not(var_1_25 <= 32767);
	assume_abort_if_not(var_1_25 != 0);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 1073741824);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 63);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 64);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -127);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -127);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -63);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 62);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 1);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 0);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= -461168.6018427383000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -461168.6018427383000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854766000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427383000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 32767);
	assume_abort_if_not(var_1_59 <= 65534);
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854766000e+12F && var_1_62 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= -922337.2036854766000e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854766000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 2305843.009213691400e+12F && var_1_68 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_69 >= -461168.6018427383000e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 4611686.018427383000e+12F && var_1_69 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_71 >= 3);
	assume_abort_if_not(var_1_71 <= 6);
	var_1_72 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 2);
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= -127);
	assume_abort_if_not(var_1_73 <= 126);
	var_1_79 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_79 >= 0.0F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 4611686.018427383000e+12F && var_1_79 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 4611686.018427383000e+12F && var_1_80 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_84 >= 0.0F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427383000e+12F && var_1_84 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 9223372.036854766000e+12F && var_1_85 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_86 >= 4611686.018427383000e+12F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 9223372.036854766000e+12F && var_1_86 >= 1.0e-20F ));
	var_1_88 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 1073741823);
	var_1_89 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_89 >= 0);
	assume_abort_if_not(var_1_89 <= 1073741824);
	var_1_95 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_95 >= 2147483647);
	assume_abort_if_not(var_1_95 <= 4294967294);
	var_1_96 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 4294967294);
	var_1_102 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_102 >= 3758096382);
	assume_abort_if_not(var_1_102 <= 4294967294);
	var_1_106 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 16383);
	var_1_107 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_107 >= 16383);
	assume_abort_if_not(var_1_107 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_14 = var_1_14;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_123 = var_1_123;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_109 > (var_1_42 * (var_1_28 * var_1_42))) ? (var_1_1 == ((unsigned long int) var_1_6)) : (var_1_1 == ((unsigned long int) ((var_1_7 - (var_1_8 + 32u)) + (min (var_1_9 , var_1_10)))))) && ((var_1_28 < (max (var_1_61 , var_1_42))) ? (var_1_11 == ((unsigned char) ((max (128 , var_1_12)) - var_1_13))) : 1)) && (var_1_14 == ((unsigned long int) (var_1_8 + var_1_12)))) && ((var_1_47 || var_1_81) ? (var_1_47 ? ((((min (var_1_18 , var_1_19)) - 10u) < var_1_7) ? (var_1_15 == ((unsigned long int) (max ((min (var_1_20 , 5u)) , var_1_8)))) : (var_1_15 == ((unsigned long int) (var_1_12 + (var_1_111 + var_1_13))))) : 1) : (var_1_15 == ((unsigned long int) (max ((max ((var_1_12 + var_1_10) , var_1_9)) , var_1_7)))))) && ((var_1_44 && var_1_77) ? (var_1_21 == ((signed long int) (min ((max (var_1_8 , var_1_13)) , var_1_100)))) : (var_1_21 == ((signed long int) ((var_1_23 - (var_1_12 + var_1_13)) - (var_1_8 + (5 + var_1_100))))))) && ((((1 - var_1_76) / (max (var_1_12 , var_1_25))) == var_1_9) ? (var_1_24 == ((unsigned long int) (max (var_1_13 , var_1_76)))) : (var_1_24 == ((unsigned long int) (min ((var_1_22 + var_1_8) , (var_1_7 + var_1_9))))))) && ((var_1_7 > (var_1_20 / var_1_12)) ? ((var_1_77 || (var_1_42 == var_1_66)) ? (var_1_26 == ((unsigned long int) ((var_1_7 + (abs (var_1_27))) - var_1_22))) : 1) : 1)) && (((var_1_52 * 1.42f) != var_1_109) ? (var_1_77 ? (var_1_28 == ((double) var_1_29)) : 1) : (var_1_28 == ((double) -0.5)))) && ((var_1_12 >= var_1_6) ? (var_1_30 == ((unsigned char) ((min (var_1_12 , (var_1_31 + var_1_32))) - var_1_13))) : 1)) && (((var_1_25 % var_1_32) < -256) ? (var_1_33 == ((signed char) (min (var_1_34 , var_1_35)))) : (var_1_33 == ((signed char) (10 + var_1_36))))) && ((var_1_22 == 256) ? (var_1_37 == ((signed char) ((var_1_38 - var_1_39) - (min (var_1_40 , var_1_41))))) : 1)) && ((var_1_12 >= var_1_20) ? (var_1_42 == ((double) (min ((abs (var_1_29)) , var_1_43)))) : 1)) && (var_1_81 ? (var_1_44 == ((unsigned char) (var_1_45 || var_1_46))) : (var_1_44 == ((unsigned char) (var_1_46 && var_1_45))))) && ((var_1_46 || (last_1_var_1_65 || (! last_1_var_1_47))) ? (var_1_47 == ((unsigned char) ((var_1_34 <= var_1_22) || ((var_1_45 || var_1_48) && var_1_49)))) : (((var_1_19 - (max (var_1_27 , var_1_10))) >= var_1_7) ? (var_1_47 == ((unsigned char) ((last_1_var_1_91 >= 1u) && var_1_45))) : (((last_1_var_1_91 >= (last_1_var_1_14 % 1u)) || (last_1_var_1_52 < last_1_var_1_66)) ? (((32 >= (max (var_1_22 , last_1_var_1_104))) && last_1_var_1_65) ? (var_1_47 == ((unsigned char) (! (var_1_49 && var_1_48)))) : 1) : ((! last_1_var_1_65) ? (var_1_47 == ((unsigned char) (var_1_50 || var_1_51))) : (((- last_1_var_1_100) <= (var_1_12 / var_1_7)) ? (var_1_47 == ((unsigned char) var_1_49)) : 1)))))) && (var_1_113 ? ((var_1_81 && var_1_51) ? (var_1_52 == ((float) (max (var_1_43 , (var_1_53 + var_1_54))))) : (var_1_52 == ((float) (var_1_55 - (var_1_56 + var_1_57))))) : (var_1_119 ? (var_1_52 == ((float) (var_1_56 - (max (var_1_55 , var_1_57))))) : (var_1_52 == ((float) var_1_53))))) && (var_1_58 == ((unsigned short int) (min (var_1_41 , (var_1_59 - var_1_32)))))) && ((((var_1_56 - var_1_55) + last_1_var_1_83) > var_1_53) ? (var_1_60 == ((unsigned long int) (var_1_40 + var_1_41))) : (var_1_60 == ((unsigned long int) (var_1_38 + var_1_9))))) && (((var_1_12 - var_1_32) > (var_1_103 & (var_1_22 * var_1_7))) ? (((var_1_75 < var_1_104) || var_1_50) ? ((64.5f < (abs (var_1_78))) ? (var_1_61 == ((float) (min (var_1_56 , (max (var_1_54 , var_1_57)))))) : (var_1_61 == ((float) (min ((var_1_57 - var_1_62) , (var_1_53 + var_1_54)))))) : 1) : (var_1_61 == ((float) ((abs (var_1_56)) + (abs (var_1_54))))))) && (var_1_50 ? (var_1_63 == ((unsigned short int) ((max (8 , var_1_31)) + var_1_12))) : 1)) && (var_1_64 == ((signed short int) (var_1_40 + (var_1_39 - var_1_125))))) && ((var_1_108 > var_1_60) ? (var_1_65 == ((unsigned char) (! (var_1_45 || var_1_49)))) : (var_1_65 == ((unsigned char) ((! (! 0)) || (var_1_50 || var_1_46)))))) && ((var_1_31 > last_1_var_1_21) ? (var_1_66 == ((double) var_1_67)) : (var_1_66 == ((double) ((var_1_56 - (0.5 + var_1_68)) + var_1_69))))) && (((var_1_56 - var_1_57) < var_1_78) ? ((var_1_55 >= (max (var_1_57 , 32.2f))) ? ((var_1_18 > var_1_22) ? (var_1_70 == ((signed char) (min (var_1_41 , (min (var_1_39 , var_1_35)))))) : ((var_1_1 <= var_1_39) ? (var_1_70 == ((signed char) (min ((var_1_36 + var_1_39) , (abs (var_1_38)))))) : (((var_1_38 >> (var_1_71 - var_1_72)) < var_1_23) ? (var_1_70 == ((signed char) (var_1_39 + -5))) : 1))) : (((var_1_41 - (min (var_1_40 , var_1_31))) <= var_1_26) ? ((var_1_59 <= (var_1_6 + (var_1_72 ^ 500))) ? (var_1_70 == ((signed char) (max (var_1_39 , var_1_34)))) : 1) : 1)) : (var_1_49 ? (var_1_70 == ((signed char) (max (var_1_34 , var_1_72)))) : (var_1_70 == ((signed char) (min (var_1_73 , (var_1_39 + var_1_72)))))))) && (((var_1_63 | (var_1_18 - var_1_27)) <= var_1_13) ? (var_1_74 == ((signed char) (var_1_71 - 1))) : 1)) && (((var_1_56 - var_1_62) >= var_1_55) ? (var_1_75 == ((unsigned long int) (max (var_1_100 , var_1_10)))) : 1)) && ((var_1_23 >= (var_1_8 * var_1_59)) ? (var_1_76 == ((signed long int) (max (-50 , var_1_72)))) : (var_1_76 == ((signed long int) ((var_1_110 + 100) - var_1_72))))) && (var_1_119 ? (var_1_77 == ((unsigned char) (var_1_50 || (var_1_48 && var_1_45)))) : 1)) && (((var_1_8 >= var_1_100) && var_1_48) ? (((var_1_71 < 0) && (var_1_38 != var_1_75)) ? (var_1_78 == ((double) (min (var_1_54 , (min ((var_1_69 + 10.6) , 0.625)))))) : (var_1_78 == ((double) ((var_1_68 - var_1_56) + ((min (var_1_57 , var_1_79)) - var_1_80))))) : 1)) && ((var_1_58 <= (5 - var_1_13)) ? (var_1_81 == ((unsigned char) (var_1_49 && var_1_51))) : (var_1_81 == ((unsigned char) var_1_45)))) && ((! ((var_1_109 < var_1_66) && (var_1_57 < var_1_28))) ? (var_1_50 ? (var_1_83 == ((double) (max (((abs (9.999999999999995E14)) + (64.5 - var_1_84)) , (max (var_1_57 , var_1_43)))))) : ((var_1_55 <= (var_1_56 + (abs (var_1_79)))) ? (var_1_83 == ((double) (max (((max (var_1_68 , var_1_85)) - (var_1_86 - 64.875)) , (min ((min (var_1_57 , var_1_54)) , var_1_69)))))) : (var_1_83 == ((double) (min ((min (var_1_56 , (var_1_57 + var_1_84))) , var_1_68)))))) : (var_1_83 == ((double) (var_1_84 + var_1_54))))) && ((256 >= var_1_8) ? (var_1_87 == ((unsigned long int) ((3924526332u - var_1_88) - (var_1_89 + var_1_39)))) : (var_1_87 == ((unsigned long int) (min (var_1_6 , (var_1_13 + var_1_71))))))) && ((var_1_77 || (var_1_36 < (var_1_72 - var_1_40))) ? (var_1_90 == ((signed short int) (25 - var_1_71))) : (var_1_90 == ((signed short int) ((max (var_1_40 , var_1_39)) - var_1_13))))) && (((var_1_26 + var_1_9) == (- var_1_14)) ? (var_1_91 == ((unsigned long int) ((var_1_32 + last_1_var_1_91) + var_1_39))) : (var_1_91 == ((unsigned long int) (abs (var_1_59 + var_1_12)))))) && ((var_1_67 == (- var_1_68)) ? (var_1_92 == ((signed short int) ((max ((min (var_1_40 , var_1_41)) , var_1_1)) - var_1_38))) : 1)) && ((var_1_50 || var_1_48) ? (var_1_93 == ((float) (max (var_1_79 , var_1_56)))) : ((var_1_113 || var_1_50) ? (var_1_93 == ((float) (var_1_80 - var_1_55))) : (var_1_93 == ((float) var_1_57))))) && ((var_1_76 != ((500 - var_1_71) + var_1_9)) ? (var_1_94 == ((unsigned long int) (var_1_95 - var_1_38))) : (var_1_94 == ((unsigned long int) (min (var_1_64 , var_1_96)))))) && ((var_1_60 <= var_1_98) ? ((var_1_8 < var_1_115) ? (last_1_var_1_97 ? ((var_1_119 && var_1_51) ? (((var_1_58 >> var_1_71) < var_1_40) ? (var_1_97 == ((unsigned char) (((var_1_77 && var_1_45) || (var_1_46 || var_1_51)) || var_1_50))) : (var_1_97 == ((unsigned char) (var_1_47 || var_1_48)))) : 1) : (var_1_97 == ((unsigned char) var_1_49))) : (var_1_97 == ((unsigned char) ((! var_1_77) && (var_1_45 || var_1_46))))) : (var_1_97 == ((unsigned char) ((var_1_46 || var_1_48) && var_1_49))))) && (var_1_98 == ((unsigned short int) (54808 - (10 + var_1_111))))) && (var_1_44 ? ((var_1_63 < (var_1_14 * var_1_8)) ? (var_1_99 == ((unsigned long int) (min (var_1_7 , 0u)))) : 1) : 1)) && ((var_1_12 == last_1_var_1_123) ? ((((max (var_1_88 , var_1_38)) / var_1_32) < (var_1_41 / (4041735718u - var_1_23))) ? (var_1_100 == ((unsigned long int) (max (var_1_39 , var_1_22)))) : 1) : (last_1_var_1_47 ? (var_1_100 == ((unsigned long int) (var_1_95 - (min (100000000u , var_1_23))))) : (var_1_100 == ((unsigned long int) (((var_1_102 - var_1_31) - var_1_38) - (var_1_27 - last_1_var_1_21))))))) && ((var_1_23 == (var_1_12 * var_1_40)) ? (var_1_103 == ((unsigned short int) (abs (max (var_1_64 , last_1_var_1_103))))) : ((! var_1_49) ? (var_1_103 == ((unsigned short int) (min (var_1_41 , last_1_var_1_103)))) : (var_1_103 == ((unsigned short int) (min ((min (var_1_41 , var_1_38)) , last_1_var_1_103))))))) && ((var_1_73 <= var_1_35) ? (var_1_104 == ((unsigned long int) var_1_39)) : (var_1_104 == ((unsigned long int) (var_1_102 - var_1_23))))) && (((var_1_57 - var_1_55) < 255.6f) ? (var_1_105 == ((signed short int) (var_1_31 + ((max (256 , var_1_106)) - var_1_13)))) : ((var_1_102 > var_1_18) ? (var_1_105 == ((signed short int) (max (var_1_32 , var_1_72)))) : ((var_1_99 <= (var_1_112 + (var_1_39 / var_1_18))) ? (var_1_105 == ((signed short int) (var_1_35 + -10))) : (var_1_105 == ((signed short int) (var_1_31 - (var_1_107 - var_1_71)))))))) && (var_1_81 ? (var_1_108 == ((signed long int) var_1_60)) : (var_1_108 == ((signed long int) var_1_13)))) && (var_1_109 == ((double) 0.9))) && (var_1_49 ? (var_1_110 == ((signed long int) var_1_23)) : (var_1_110 == ((signed long int) var_1_25)))) && (var_1_111 == ((unsigned short int) var_1_59))) && (var_1_112 == ((unsigned long int) var_1_58))) && (var_1_97 ? (var_1_113 == ((unsigned char) var_1_48)) : 1)) && (var_1_114 == ((signed long int) var_1_103))) && (var_1_65 ? (var_1_115 == ((signed short int) var_1_105)) : (var_1_115 == ((signed short int) var_1_34)))) && (var_1_117 == ((signed short int) var_1_30))) && (var_1_118 == ((unsigned char) var_1_49))) && (var_1_119 == ((unsigned char) 0))) && (var_1_120 == ((signed char) var_1_34))) && (var_1_121 == ((unsigned char) var_1_39))) && (var_1_119 ? (var_1_122 == ((unsigned char) var_1_71)) : (var_1_122 == ((unsigned char) var_1_40)))) && (var_1_44 ? (var_1_123 == ((unsigned char) var_1_71)) : (var_1_123 == ((unsigned char) 5)))) && (var_1_124 == ((signed char) (var_1_72 - var_1_39)))) && ((! var_1_48) ? (var_1_125 == ((unsigned char) (200 - var_1_38))) : (var_1_81 ? (var_1_125 == ((unsigned char) var_1_31)) : (var_1_125 == ((unsigned char) var_1_32))))
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
