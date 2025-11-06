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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch153Amount500.c", 13, "reach_error"); }
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
signed short int var_1_1 = -8;
signed short int var_1_3 = -5;
signed short int var_1_4 = 25;
signed short int var_1_5 = -64;
signed short int var_1_6 = -32;
float var_1_7 = 25.4;
signed long int var_1_8 = 32;
signed long int var_1_9 = 8;
float var_1_14 = 0.0;
float var_1_15 = 0.0;
float var_1_16 = 1.75;
float var_1_17 = 0.0;
signed long int var_1_18 = 5;
unsigned long int var_1_19 = 64;
unsigned long int var_1_20 = 2536624227;
unsigned long int var_1_21 = 2112201930;
unsigned long int var_1_22 = 16;
signed short int var_1_23 = -128;
signed short int var_1_24 = 2;
signed short int var_1_25 = 256;
signed short int var_1_26 = 8;
unsigned short int var_1_27 = 500;
unsigned short int var_1_28 = 128;
unsigned short int var_1_29 = 24152;
unsigned long int var_1_30 = 10;
unsigned long int var_1_31 = 3316711834;
unsigned long int var_1_32 = 1000000000;
unsigned long int var_1_33 = 1000000000;
unsigned long int var_1_34 = 1626664454;
signed short int var_1_35 = -32;
unsigned char var_1_36 = 1;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned long int var_1_40 = 2;
signed char var_1_41 = 4;
signed char var_1_42 = 1;
unsigned char var_1_43 = 16;
signed short int var_1_44 = 256;
unsigned char var_1_45 = 1;
double var_1_46 = 16.5;
double var_1_47 = 3.9;
double var_1_48 = 0.625;
double var_1_49 = 64.8;
signed short int var_1_50 = 0;
signed short int var_1_52 = 32;
unsigned char var_1_53 = 10;
unsigned char var_1_54 = 128;
unsigned short int var_1_55 = 16;
unsigned short int var_1_56 = 8;
float var_1_57 = 128.494;
unsigned short int var_1_58 = 0;
unsigned short int var_1_59 = 5;
signed char var_1_60 = 32;
unsigned char var_1_61 = 1;
unsigned short int var_1_62 = 1;
signed long int var_1_63 = 128;
signed short int var_1_64 = -256;
unsigned long int var_1_65 = 0;
unsigned long int var_1_66 = 8;
double var_1_67 = 9999999.5;
double var_1_68 = 499.25;
float var_1_69 = 15.4;
unsigned char var_1_70 = 4;
unsigned long int var_1_71 = 2;
unsigned long int var_1_72 = 1;
unsigned char var_1_73 = 64;
unsigned char var_1_74 = 100;
unsigned char var_1_75 = 1;
unsigned char var_1_76 = 0;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 0;
unsigned char var_1_79 = 2;
unsigned long int var_1_80 = 4;
double var_1_81 = 10.8;
double var_1_82 = 3.75;
signed long int var_1_83 = -2;
float var_1_84 = 8.25;
float var_1_85 = 7.5;
unsigned long int var_1_86 = 25;
unsigned short int var_1_87 = 10;
unsigned long int var_1_88 = 10;
double var_1_89 = 7.5;
double var_1_90 = 4.517;
unsigned char var_1_91 = 1;
unsigned long int var_1_92 = 50;
unsigned long int var_1_94 = 5;
unsigned long int var_1_95 = 10000;
signed long int var_1_96 = -256;
signed long int var_1_97 = 1171861041;
unsigned short int var_1_99 = 256;
unsigned short int var_1_100 = 5;
unsigned long int var_1_101 = 8;
signed short int var_1_102 = 0;
unsigned long int var_1_103 = 2;
unsigned short int var_1_104 = 256;
unsigned short int var_1_105 = 32;
unsigned short int var_1_106 = 2;
signed short int var_1_107 = -4;
float var_1_108 = 255.35;
unsigned long int var_1_109 = 256;
signed long int var_1_110 = -16;
signed char var_1_111 = -2;
float var_1_112 = 49.15;
unsigned short int var_1_113 = 16;
float var_1_114 = 4.75;
unsigned char var_1_115 = 1;
unsigned long int var_1_116 = 32;
signed short int var_1_117 = -4;
unsigned char var_1_118 = 0;
float var_1_119 = 0.25;
signed long int var_1_120 = 25;

// Calibration values

// Last'ed variables
float last_1_var_1_7 = 25.4;
signed short int last_1_var_1_23 = -128;
unsigned short int last_1_var_1_27 = 500;
double last_1_var_1_67 = 9999999.5;
signed long int last_1_var_1_83 = -2;
unsigned long int last_1_var_1_88 = 10;
unsigned char last_1_var_1_91 = 1;
signed long int last_1_var_1_96 = -256;
unsigned long int last_1_var_1_101 = 8;
unsigned long int last_1_var_1_103 = 2;
unsigned char last_1_var_1_115 = 1;
unsigned long int last_1_var_1_116 = 32;
unsigned char last_1_var_1_118 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req24Batch153Amount500
	if (var_1_66 <= var_1_29) {
		if (last_1_var_1_88 > last_1_var_1_116) {
			var_1_67 = (((var_1_14 + var_1_15) - (min (4.85 , var_1_68))) - var_1_17);
		}
	} else {
		var_1_67 = (max (var_1_16 , (var_1_68 - var_1_17)));
	}


	// From: Req27Batch153Amount500
	signed long int stepLocal_11 = 64;
	signed char stepLocal_10 = var_1_41;
	if (var_1_15 >= var_1_68) {
		if (stepLocal_10 == var_1_29) {
			if (last_1_var_1_115) {
				if ((last_1_var_1_23 - last_1_var_1_88) <= stepLocal_11) {
					var_1_75 = ((var_1_38 || last_1_var_1_91) && ((var_1_26 < 10) && (last_1_var_1_118 && var_1_76)));
				}
			} else {
				var_1_75 = (((! var_1_39) || (last_1_var_1_118 && var_1_76)) || ((last_1_var_1_91 && var_1_38) || (var_1_77 || var_1_78)));
			}
		} else {
			var_1_75 = (var_1_77 || var_1_39);
		}
	} else {
		var_1_75 = (((last_1_var_1_23 > last_1_var_1_27) && var_1_78) && var_1_76);
	}


	// From: Req20Batch153Amount500
	if (! (var_1_33 <= var_1_21)) {
		var_1_61 = (var_1_75 || var_1_39);
	}


	// From: Req6Batch153Amount500
	if (var_1_61) {
		var_1_27 = (max (var_1_26 , ((abs (var_1_28)) + (var_1_29 - 2))));
	}


	// From: Req21Batch153Amount500
	signed long int stepLocal_8 = var_1_63 >> var_1_59;
	if (var_1_48 >= last_1_var_1_67) {
		var_1_62 = (min (var_1_54 , var_1_45));
	} else {
		if (var_1_9 <= stepLocal_8) {
			var_1_62 = (max (var_1_44 , last_1_var_1_103));
		} else {
			var_1_62 = (abs (last_1_var_1_103));
		}
	}


	// From: Req57Batch153Amount500
	if ((- last_1_var_1_23) >= var_1_73) {
		var_1_118 = var_1_76;
	} else {
		var_1_118 = ((var_1_26 < last_1_var_1_83) || var_1_39);
	}


	// From: Req1Batch153Amount500
	if (var_1_61) {
		var_1_1 = (min ((64 + var_1_3) , (var_1_4 + (max (var_1_5 , var_1_6)))));
	}


	// From: Req4Batch153Amount500
	var_1_19 = (var_1_20 - (var_1_21 - var_1_22));


	// From: Req7Batch153Amount500
	signed short int stepLocal_2 = var_1_4;
	if (stepLocal_2 >= (~ 10000)) {
		var_1_30 = (max ((var_1_31 - var_1_22) , (var_1_26 + var_1_29)));
	} else {
		var_1_30 = (((var_1_32 + var_1_33) - (abs (4u))) + ((var_1_34 - var_1_28) - 32u));
	}


	// From: Req8Batch153Amount500
	var_1_35 = var_1_6;


	// From: Req11Batch153Amount500
	if (((var_1_42 + var_1_44) - var_1_28) <= var_1_29) {
		var_1_43 = (abs (var_1_42 + var_1_45));
	}


	// From: Req13Batch153Amount500
	if (var_1_39) {
		var_1_49 = (abs (var_1_15 + var_1_14));
	}


	// From: Req19Batch153Amount500
	var_1_60 = (min (var_1_59 , var_1_42));


	// From: Req22Batch153Amount500
	var_1_64 = (min ((var_1_41 - var_1_52) , (var_1_25 - var_1_42)));


	// From: Req25Batch153Amount500
	var_1_69 = var_1_14;


	// From: Req26Batch153Amount500
	unsigned long int stepLocal_9 = var_1_33 << (var_1_71 - var_1_72);
	if (-10 != stepLocal_9) {
		var_1_70 = (max (((var_1_59 + var_1_72) + (64 + var_1_71)) , (min ((var_1_42 + var_1_45) , var_1_54))));
	} else {
		var_1_70 = ((var_1_73 + (var_1_74 - var_1_71)) - var_1_59);
	}


	// From: Req29Batch153Amount500
	if (! (var_1_71 < var_1_45)) {
		var_1_81 = (max (var_1_82 , var_1_17));
	} else {
		var_1_81 = var_1_82;
	}


	// From: Req34Batch153Amount500
	signed long int stepLocal_20 = -50;
	if (stepLocal_20 <= var_1_44) {
		var_1_89 = (max (var_1_16 , (var_1_14 - var_1_15)));
	} else {
		var_1_89 = ((max ((var_1_48 + var_1_47) , var_1_85)) + var_1_68);
	}


	// From: Req39Batch153Amount500
	var_1_99 = var_1_100;


	// From: Req40Batch153Amount500
	var_1_101 = last_1_var_1_101;


	// From: Req42Batch153Amount500
	if (var_1_39) {
		var_1_103 = last_1_var_1_103;
	}


	// From: Req43Batch153Amount500
	var_1_104 = var_1_29;


	// From: Req44Batch153Amount500
	var_1_105 = var_1_73;


	// From: Req45Batch153Amount500
	var_1_106 = var_1_72;


	// From: Req46Batch153Amount500
	var_1_107 = var_1_26;


	// From: Req48Batch153Amount500
	var_1_109 = var_1_73;


	// From: Req49Batch153Amount500
	var_1_110 = -2;


	// From: Req50Batch153Amount500
	if (var_1_39) {
		var_1_111 = var_1_42;
	} else {
		var_1_111 = -64;
	}


	// From: Req51Batch153Amount500
	if (var_1_78) {
		var_1_112 = var_1_17;
	} else {
		var_1_112 = 64.5f;
	}


	// From: Req52Batch153Amount500
	var_1_113 = var_1_26;


	// From: Req58Batch153Amount500
	var_1_119 = var_1_16;


	// From: Req59Batch153Amount500
	var_1_120 = var_1_4;


	// From: Req55Batch153Amount500
	if (var_1_118) {
		var_1_116 = var_1_62;
	}


	// From: Req36Batch153Amount500
	if (var_1_39 || (var_1_45 <= var_1_99)) {
		var_1_91 = (! (var_1_76 && (var_1_77 || var_1_38)));
	} else {
		if ((var_1_74 * var_1_45) <= var_1_86) {
			var_1_91 = (! (var_1_118 || (! var_1_76)));
		} else {
			var_1_91 = (! ((var_1_78 && var_1_77) || var_1_76));
		}
	}


	// From: Req30Batch153Amount500
	if (var_1_118) {
		var_1_83 = (abs ((-128 + var_1_52) + var_1_25));
	} else {
		var_1_83 = (max ((var_1_116 + var_1_106) , var_1_1));
	}


	// From: Req14Batch153Amount500
	unsigned char stepLocal_3 = var_1_91;
	if ((var_1_5 > (var_1_107 * var_1_29)) || stepLocal_3) {
		var_1_50 = (var_1_83 + (var_1_42 - var_1_52));
	}


	// From: Req15Batch153Amount500
	if (var_1_75 || var_1_91) {
		if ((min ((min (var_1_26 , var_1_29)) , var_1_52)) > var_1_24) {
			var_1_53 = (var_1_42 + var_1_45);
		} else {
			var_1_53 = (var_1_42 + (abs (var_1_45)));
		}
	} else {
		var_1_53 = (var_1_54 - var_1_42);
	}


	// From: Req16Batch153Amount500
	signed long int stepLocal_5 = var_1_29 << var_1_9;
	unsigned char stepLocal_4 = var_1_45;
	if (stepLocal_5 > (128 >> 8)) {
		if (var_1_109 >= stepLocal_4) {
			var_1_55 = (var_1_28 + (min (var_1_42 , var_1_26)));
		} else {
			var_1_55 = (max (var_1_45 , (var_1_54 + (abs (var_1_56)))));
		}
	} else {
		var_1_55 = var_1_52;
	}


	// From: Req17Batch153Amount500
	if (((var_1_14 + var_1_15) - var_1_16) <= (max ((var_1_119 / 0.25f) , (1.0000000000025E11f - var_1_17)))) {
		var_1_57 = var_1_17;
	} else {
		var_1_57 = (abs (var_1_16));
	}


	// From: Req31Batch153Amount500
	unsigned long int stepLocal_18 = var_1_109;
	unsigned char stepLocal_17 = var_1_38;
	unsigned long int stepLocal_16 = (var_1_54 * var_1_59) * (64u + var_1_30);
	signed long int stepLocal_15 = (min (var_1_29 , var_1_107)) >> (var_1_86 - var_1_72);
	if (stepLocal_17 || (var_1_34 < var_1_44)) {
		if (((max (var_1_42 , var_1_72)) - (10 + var_1_71)) >= stepLocal_16) {
			if (stepLocal_18 == var_1_22) {
				var_1_84 = (max (var_1_14 , var_1_15));
			} else {
				var_1_84 = (min ((var_1_16 - var_1_14) , var_1_68));
			}
		} else {
			var_1_84 = (var_1_15 + (var_1_68 - (var_1_85 + 9.75f)));
		}
	} else {
		if ((var_1_4 / var_1_24) >= stepLocal_15) {
			var_1_84 = (max ((min ((7.75f - 1.0000000005E9f) , (var_1_48 + var_1_85))) , (var_1_15 - var_1_14)));
		}
	}


	// From: Req47Batch153Amount500
	if (var_1_91) {
		var_1_108 = var_1_48;
	} else {
		var_1_108 = var_1_15;
	}


	// From: Req9Batch153Amount500
	if (var_1_91 && var_1_75) {
		var_1_36 = (! var_1_38);
	} else {
		var_1_36 = (! var_1_39);
	}


	// From: Req54Batch153Amount500
	if (var_1_36) {
		var_1_115 = var_1_77;
	} else {
		var_1_115 = var_1_39;
	}


	// From: Req2Batch153Amount500
	signed long int stepLocal_1 = var_1_8;
	unsigned char stepLocal_0 = var_1_115;
	if (((var_1_5 * var_1_30) < (var_1_8 - var_1_9)) || stepLocal_0) {
		if ((max (var_1_84 , var_1_81)) <= var_1_84) {
			if (var_1_84 < (max ((var_1_84 + var_1_81) , last_1_var_1_7))) {
				var_1_7 = (((var_1_14 + var_1_15) - 15.5f) - (max (32.25f , var_1_16)));
			}
		} else {
			if ((- var_1_30) < stepLocal_1) {
				if ((- var_1_84) > (- (var_1_15 / 0.75f))) {
					var_1_7 = ((var_1_17 - var_1_15) - var_1_16);
				} else {
					var_1_7 = (var_1_14 + var_1_15);
				}
			}
		}
	} else {
		var_1_7 = (var_1_15 + var_1_14);
	}


	// From: Req5Batch153Amount500
	if (var_1_57 >= var_1_14) {
		if (var_1_4 > (256 / var_1_24)) {
			if (((abs (var_1_57)) - 3.15) >= var_1_16) {
				var_1_23 = (min ((var_1_6 + var_1_4) , (var_1_25 - var_1_26)));
			}
		} else {
			if (var_1_16 > var_1_14) {
				var_1_23 = var_1_3;
			} else {
				var_1_23 = var_1_4;
			}
		}
	}


	// From: Req10Batch153Amount500
	if (var_1_36) {
		if ((var_1_41 - (64 - var_1_42)) >= var_1_6) {
			if (var_1_21 != (var_1_33 & (var_1_22 & var_1_31))) {
				var_1_40 = (var_1_28 + var_1_29);
			} else {
				var_1_40 = ((min (var_1_28 , var_1_29)) + (var_1_34 - var_1_106));
			}
		}
	} else {
		if (var_1_39) {
			var_1_40 = var_1_9;
		}
	}


	// From: Req12Batch153Amount500
	if ((var_1_26 * var_1_32) < var_1_22) {
		var_1_46 = (abs (var_1_15));
	} else {
		if ((~ (var_1_28 * var_1_55)) != ((var_1_26 + var_1_33) - var_1_34)) {
			var_1_46 = ((var_1_47 + var_1_48) + var_1_15);
		} else {
			var_1_46 = (8.5 + (abs (var_1_14)));
		}
	}


	// From: Req23Batch153Amount500
	if (var_1_17 >= var_1_57) {
		if (var_1_39) {
			if (1.625f <= var_1_84) {
				var_1_65 = (min (var_1_21 , ((max (8u , var_1_44)) + var_1_66)));
			} else {
				var_1_65 = (var_1_32 + var_1_113);
			}
		}
	} else {
		var_1_65 = (min (var_1_40 , var_1_31));
	}


	// From: Req32Batch153Amount500
	unsigned long int stepLocal_19 = (- 128u) + var_1_66;
	if (var_1_32 <= stepLocal_19) {
		if (var_1_78) {
			var_1_87 = (min (var_1_56 , (var_1_44 + var_1_71)));
		} else {
			if (var_1_46 != (min (var_1_48 , var_1_46))) {
				var_1_87 = (min (var_1_65 , 5));
			}
		}
	} else {
		var_1_87 = var_1_86;
	}


	// From: Req37Batch153Amount500
	if (((2 | var_1_45) | (var_1_73 % var_1_71)) >= (max (var_1_34 , (var_1_31 - 4u)))) {
		if ((max (var_1_5 , var_1_105)) >= (1 - (var_1_22 + var_1_56))) {
			if (8 <= (var_1_9 / var_1_24)) {
				var_1_92 = ((var_1_21 - (abs (var_1_44))) + var_1_80);
			} else {
				var_1_92 = var_1_94;
			}
		} else {
			var_1_92 = (min ((var_1_31 - var_1_74) , (var_1_86 + var_1_87)));
		}
	} else {
		if (var_1_5 > var_1_32) {
			var_1_92 = (min ((var_1_31 - var_1_44) , var_1_95));
		} else {
			var_1_92 = var_1_73;
		}
	}


	// From: Req41Batch153Amount500
	if (var_1_36) {
		var_1_102 = var_1_41;
	}


	// From: Req53Batch153Amount500
	if (var_1_36) {
		var_1_114 = var_1_15;
	}


	// From: Req56Batch153Amount500
	if (var_1_36) {
		var_1_117 = (max (var_1_4 , var_1_45));
	}


	// From: Req33Batch153Amount500
	if (var_1_23 <= var_1_62) {
		if (var_1_67 == var_1_85) {
			var_1_88 = (var_1_103 + var_1_33);
		}
	}


	// From: Req3Batch153Amount500
	if (var_1_15 > var_1_46) {
		var_1_18 = (abs (var_1_5));
	}


	// From: Req18Batch153Amount500
	unsigned char stepLocal_7 = var_1_54;
	signed long int stepLocal_6 = var_1_42 >> var_1_59;
	if (var_1_33 > stepLocal_7) {
		if (stepLocal_6 >= var_1_65) {
			var_1_58 = var_1_42;
		}
	} else {
		var_1_58 = (var_1_45 + var_1_92);
	}


	// From: Req28Batch153Amount500
	signed short int stepLocal_14 = var_1_52;
	signed long int stepLocal_13 = var_1_50 * var_1_87;
	unsigned long int stepLocal_12 = var_1_20 - (var_1_80 + var_1_74);
	if (stepLocal_13 == var_1_21) {
		if (var_1_5 >= stepLocal_14) {
			var_1_79 = (var_1_59 + var_1_72);
		} else {
			if ((- (25u >> var_1_59)) < stepLocal_12) {
				var_1_79 = (var_1_42 + var_1_59);
			}
		}
	} else {
		var_1_79 = (max (var_1_42 , var_1_71));
	}


	// From: Req35Batch153Amount500
	signed long int stepLocal_22 = var_1_9;
	unsigned char stepLocal_21 = var_1_115;
	if (var_1_91) {
		if (var_1_76) {
			if (var_1_74 >= stepLocal_22) {
				var_1_90 = (var_1_85 - var_1_14);
			} else {
				if (((var_1_45 << var_1_29) < var_1_88) || stepLocal_21) {
					var_1_90 = (max (var_1_14 , var_1_82));
				}
			}
		}
	} else {
		var_1_90 = (var_1_47 + var_1_48);
	}


	// From: Req38Batch153Amount500
	if ((var_1_46 / (min (var_1_17 , 256.85))) < var_1_114) {
		if ((var_1_120 * var_1_45) >= var_1_28) {
			var_1_96 = (((1000000000 - var_1_107) + var_1_120) - (var_1_97 - var_1_73));
		} else {
			if (var_1_75) {
				if (((var_1_50 ^ var_1_42) / (abs (var_1_74))) < (max (var_1_88 , (var_1_5 ^ var_1_88)))) {
					var_1_96 = (min (100000000 , var_1_44));
				} else {
					var_1_96 = ((var_1_72 + var_1_45) - (max (last_1_var_1_96 , var_1_33)));
				}
			}
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -16383);
	assume_abort_if_not(var_1_3 <= 16383);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -16383);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -16383);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -16383);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -1);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 2305843.009213691400e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 2305843.009213691400e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 4611686.018427383000e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1073741823);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32768);
	assume_abort_if_not(var_1_24 <= 32767);
	assume_abort_if_not(var_1_24 != 0);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 32766);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 32766);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 16383);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 2147483647);
	assume_abort_if_not(var_1_31 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 536870911);
	assume_abort_if_not(var_1_32 <= 1073741824);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 536870912);
	assume_abort_if_not(var_1_33 <= 1073741823);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 1610612735);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -1);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_44 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 16383);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -230584.3009213691400e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -230584.3009213691400e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691400e+12F && var_1_48 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 16383);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 127);
	assume_abort_if_not(var_1_54 <= 254);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 32767);
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 1);
	assume_abort_if_not(var_1_59 <= 6);
	var_1_63 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 2147483647);
	var_1_66 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 2147483647);
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 4611686.018427383000e+12F && var_1_68 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_71 >= 1);
	assume_abort_if_not(var_1_71 <= 2);
	var_1_72 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 1);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 63);
	assume_abort_if_not(var_1_73 <= 127);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 95);
	assume_abort_if_not(var_1_74 <= 127);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 0);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 0);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 0);
	var_1_80 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 1073741824);
	var_1_82 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_82 >= -922337.2036854766000e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 9223372.036854766000e+12F && var_1_82 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 2305843.009213691400e+12F && var_1_85 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_86 >= 15);
	assume_abort_if_not(var_1_86 <= 30);
	var_1_94 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 4294967294);
	var_1_95 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 4294967294);
	var_1_97 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_97 >= 1073741823);
	assume_abort_if_not(var_1_97 <= 2147483646);
	var_1_100 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_100 >= 0);
	assume_abort_if_not(var_1_100 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_115 = var_1_115;
	last_1_var_1_116 = var_1_116;
	last_1_var_1_118 = var_1_118;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_61 ? (var_1_1 == ((signed short int) (min ((64 + var_1_3) , (var_1_4 + (max (var_1_5 , var_1_6))))))) : 1) && ((((var_1_5 * var_1_30) < (var_1_8 - var_1_9)) || var_1_115) ? (((max (var_1_84 , var_1_81)) <= var_1_84) ? ((var_1_84 < (max ((var_1_84 + var_1_81) , last_1_var_1_7))) ? (var_1_7 == ((float) (((var_1_14 + var_1_15) - 15.5f) - (max (32.25f , var_1_16))))) : 1) : (((- var_1_30) < var_1_8) ? (((- var_1_84) > (- (var_1_15 / 0.75f))) ? (var_1_7 == ((float) ((var_1_17 - var_1_15) - var_1_16))) : (var_1_7 == ((float) (var_1_14 + var_1_15)))) : 1)) : (var_1_7 == ((float) (var_1_15 + var_1_14))))) && ((var_1_15 > var_1_46) ? (var_1_18 == ((signed long int) (abs (var_1_5)))) : 1)) && (var_1_19 == ((unsigned long int) (var_1_20 - (var_1_21 - var_1_22))))) && ((var_1_57 >= var_1_14) ? ((var_1_4 > (256 / var_1_24)) ? ((((abs (var_1_57)) - 3.15) >= var_1_16) ? (var_1_23 == ((signed short int) (min ((var_1_6 + var_1_4) , (var_1_25 - var_1_26))))) : 1) : ((var_1_16 > var_1_14) ? (var_1_23 == ((signed short int) var_1_3)) : (var_1_23 == ((signed short int) var_1_4)))) : 1)) && (var_1_61 ? (var_1_27 == ((unsigned short int) (max (var_1_26 , ((abs (var_1_28)) + (var_1_29 - 2)))))) : 1)) && ((var_1_4 >= (~ 10000)) ? (var_1_30 == ((unsigned long int) (max ((var_1_31 - var_1_22) , (var_1_26 + var_1_29))))) : (var_1_30 == ((unsigned long int) (((var_1_32 + var_1_33) - (abs (4u))) + ((var_1_34 - var_1_28) - 32u)))))) && (var_1_35 == ((signed short int) var_1_6))) && ((var_1_91 && var_1_75) ? (var_1_36 == ((unsigned char) (! var_1_38))) : (var_1_36 == ((unsigned char) (! var_1_39))))) && (var_1_36 ? (((var_1_41 - (64 - var_1_42)) >= var_1_6) ? ((var_1_21 != (var_1_33 & (var_1_22 & var_1_31))) ? (var_1_40 == ((unsigned long int) (var_1_28 + var_1_29))) : (var_1_40 == ((unsigned long int) ((min (var_1_28 , var_1_29)) + (var_1_34 - var_1_106))))) : 1) : (var_1_39 ? (var_1_40 == ((unsigned long int) var_1_9)) : 1))) && ((((var_1_42 + var_1_44) - var_1_28) <= var_1_29) ? (var_1_43 == ((unsigned char) (abs (var_1_42 + var_1_45)))) : 1)) && (((var_1_26 * var_1_32) < var_1_22) ? (var_1_46 == ((double) (abs (var_1_15)))) : (((~ (var_1_28 * var_1_55)) != ((var_1_26 + var_1_33) - var_1_34)) ? (var_1_46 == ((double) ((var_1_47 + var_1_48) + var_1_15))) : (var_1_46 == ((double) (8.5 + (abs (var_1_14)))))))) && (var_1_39 ? (var_1_49 == ((double) (abs (var_1_15 + var_1_14)))) : 1)) && (((var_1_5 > (var_1_107 * var_1_29)) || var_1_91) ? (var_1_50 == ((signed short int) (var_1_83 + (var_1_42 - var_1_52)))) : 1)) && ((var_1_75 || var_1_91) ? (((min ((min (var_1_26 , var_1_29)) , var_1_52)) > var_1_24) ? (var_1_53 == ((unsigned char) (var_1_42 + var_1_45))) : (var_1_53 == ((unsigned char) (var_1_42 + (abs (var_1_45)))))) : (var_1_53 == ((unsigned char) (var_1_54 - var_1_42))))) && (((var_1_29 << var_1_9) > (128 >> 8)) ? ((var_1_109 >= var_1_45) ? (var_1_55 == ((unsigned short int) (var_1_28 + (min (var_1_42 , var_1_26))))) : (var_1_55 == ((unsigned short int) (max (var_1_45 , (var_1_54 + (abs (var_1_56)))))))) : (var_1_55 == ((unsigned short int) var_1_52)))) && ((((var_1_14 + var_1_15) - var_1_16) <= (max ((var_1_119 / 0.25f) , (1.0000000000025E11f - var_1_17)))) ? (var_1_57 == ((float) var_1_17)) : (var_1_57 == ((float) (abs (var_1_16)))))) && ((var_1_33 > var_1_54) ? (((var_1_42 >> var_1_59) >= var_1_65) ? (var_1_58 == ((unsigned short int) var_1_42)) : 1) : (var_1_58 == ((unsigned short int) (var_1_45 + var_1_92))))) && (var_1_60 == ((signed char) (min (var_1_59 , var_1_42))))) && ((! (var_1_33 <= var_1_21)) ? (var_1_61 == ((unsigned char) (var_1_75 || var_1_39))) : 1)) && ((var_1_48 >= last_1_var_1_67) ? (var_1_62 == ((unsigned short int) (min (var_1_54 , var_1_45)))) : ((var_1_9 <= (var_1_63 >> var_1_59)) ? (var_1_62 == ((unsigned short int) (max (var_1_44 , last_1_var_1_103)))) : (var_1_62 == ((unsigned short int) (abs (last_1_var_1_103))))))) && (var_1_64 == ((signed short int) (min ((var_1_41 - var_1_52) , (var_1_25 - var_1_42)))))) && ((var_1_17 >= var_1_57) ? (var_1_39 ? ((1.625f <= var_1_84) ? (var_1_65 == ((unsigned long int) (min (var_1_21 , ((max (8u , var_1_44)) + var_1_66))))) : (var_1_65 == ((unsigned long int) (var_1_32 + var_1_113)))) : 1) : (var_1_65 == ((unsigned long int) (min (var_1_40 , var_1_31)))))) && ((var_1_66 <= var_1_29) ? ((last_1_var_1_88 > last_1_var_1_116) ? (var_1_67 == ((double) (((var_1_14 + var_1_15) - (min (4.85 , var_1_68))) - var_1_17))) : 1) : (var_1_67 == ((double) (max (var_1_16 , (var_1_68 - var_1_17))))))) && (var_1_69 == ((float) var_1_14))) && ((-10 != (var_1_33 << (var_1_71 - var_1_72))) ? (var_1_70 == ((unsigned char) (max (((var_1_59 + var_1_72) + (64 + var_1_71)) , (min ((var_1_42 + var_1_45) , var_1_54)))))) : (var_1_70 == ((unsigned char) ((var_1_73 + (var_1_74 - var_1_71)) - var_1_59))))) && ((var_1_15 >= var_1_68) ? ((var_1_41 == var_1_29) ? (last_1_var_1_115 ? (((last_1_var_1_23 - last_1_var_1_88) <= 64) ? (var_1_75 == ((unsigned char) ((var_1_38 || last_1_var_1_91) && ((var_1_26 < 10) && (last_1_var_1_118 && var_1_76))))) : 1) : (var_1_75 == ((unsigned char) (((! var_1_39) || (last_1_var_1_118 && var_1_76)) || ((last_1_var_1_91 && var_1_38) || (var_1_77 || var_1_78)))))) : (var_1_75 == ((unsigned char) (var_1_77 || var_1_39)))) : (var_1_75 == ((unsigned char) (((last_1_var_1_23 > last_1_var_1_27) && var_1_78) && var_1_76))))) && (((var_1_50 * var_1_87) == var_1_21) ? ((var_1_5 >= var_1_52) ? (var_1_79 == ((unsigned char) (var_1_59 + var_1_72))) : (((- (25u >> var_1_59)) < (var_1_20 - (var_1_80 + var_1_74))) ? (var_1_79 == ((unsigned char) (var_1_42 + var_1_59))) : 1)) : (var_1_79 == ((unsigned char) (max (var_1_42 , var_1_71)))))) && ((! (var_1_71 < var_1_45)) ? (var_1_81 == ((double) (max (var_1_82 , var_1_17)))) : (var_1_81 == ((double) var_1_82)))) && (var_1_118 ? (var_1_83 == ((signed long int) (abs ((-128 + var_1_52) + var_1_25)))) : (var_1_83 == ((signed long int) (max ((var_1_116 + var_1_106) , var_1_1)))))) && ((var_1_38 || (var_1_34 < var_1_44)) ? ((((max (var_1_42 , var_1_72)) - (10 + var_1_71)) >= ((var_1_54 * var_1_59) * (64u + var_1_30))) ? ((var_1_109 == var_1_22) ? (var_1_84 == ((float) (max (var_1_14 , var_1_15)))) : (var_1_84 == ((float) (min ((var_1_16 - var_1_14) , var_1_68))))) : (var_1_84 == ((float) (var_1_15 + (var_1_68 - (var_1_85 + 9.75f)))))) : (((var_1_4 / var_1_24) >= ((min (var_1_29 , var_1_107)) >> (var_1_86 - var_1_72))) ? (var_1_84 == ((float) (max ((min ((7.75f - 1.0000000005E9f) , (var_1_48 + var_1_85))) , (var_1_15 - var_1_14))))) : 1))) && ((var_1_32 <= ((- 128u) + var_1_66)) ? (var_1_78 ? (var_1_87 == ((unsigned short int) (min (var_1_56 , (var_1_44 + var_1_71))))) : ((var_1_46 != (min (var_1_48 , var_1_46))) ? (var_1_87 == ((unsigned short int) (min (var_1_65 , 5)))) : 1)) : (var_1_87 == ((unsigned short int) var_1_86)))) && ((var_1_23 <= var_1_62) ? ((var_1_67 == var_1_85) ? (var_1_88 == ((unsigned long int) (var_1_103 + var_1_33))) : 1) : 1)) && ((-50 <= var_1_44) ? (var_1_89 == ((double) (max (var_1_16 , (var_1_14 - var_1_15))))) : (var_1_89 == ((double) ((max ((var_1_48 + var_1_47) , var_1_85)) + var_1_68))))) && (var_1_91 ? (var_1_76 ? ((var_1_74 >= var_1_9) ? (var_1_90 == ((double) (var_1_85 - var_1_14))) : ((((var_1_45 << var_1_29) < var_1_88) || var_1_115) ? (var_1_90 == ((double) (max (var_1_14 , var_1_82)))) : 1)) : 1) : (var_1_90 == ((double) (var_1_47 + var_1_48))))) && ((var_1_39 || (var_1_45 <= var_1_99)) ? (var_1_91 == ((unsigned char) (! (var_1_76 && (var_1_77 || var_1_38))))) : (((var_1_74 * var_1_45) <= var_1_86) ? (var_1_91 == ((unsigned char) (! (var_1_118 || (! var_1_76))))) : (var_1_91 == ((unsigned char) (! ((var_1_78 && var_1_77) || var_1_76))))))) && ((((2 | var_1_45) | (var_1_73 % var_1_71)) >= (max (var_1_34 , (var_1_31 - 4u)))) ? (((max (var_1_5 , var_1_105)) >= (1 - (var_1_22 + var_1_56))) ? ((8 <= (var_1_9 / var_1_24)) ? (var_1_92 == ((unsigned long int) ((var_1_21 - (abs (var_1_44))) + var_1_80))) : (var_1_92 == ((unsigned long int) var_1_94))) : (var_1_92 == ((unsigned long int) (min ((var_1_31 - var_1_74) , (var_1_86 + var_1_87)))))) : ((var_1_5 > var_1_32) ? (var_1_92 == ((unsigned long int) (min ((var_1_31 - var_1_44) , var_1_95)))) : (var_1_92 == ((unsigned long int) var_1_73))))) && (((var_1_46 / (min (var_1_17 , 256.85))) < var_1_114) ? (((var_1_120 * var_1_45) >= var_1_28) ? (var_1_96 == ((signed long int) (((1000000000 - var_1_107) + var_1_120) - (var_1_97 - var_1_73)))) : (var_1_75 ? ((((var_1_50 ^ var_1_42) / (abs (var_1_74))) < (max (var_1_88 , (var_1_5 ^ var_1_88)))) ? (var_1_96 == ((signed long int) (min (100000000 , var_1_44)))) : (var_1_96 == ((signed long int) ((var_1_72 + var_1_45) - (max (last_1_var_1_96 , var_1_33)))))) : 1)) : 1)) && (var_1_99 == ((unsigned short int) var_1_100))) && (var_1_101 == ((unsigned long int) last_1_var_1_101))) && (var_1_36 ? (var_1_102 == ((signed short int) var_1_41)) : 1)) && (var_1_39 ? (var_1_103 == ((unsigned long int) last_1_var_1_103)) : 1)) && (var_1_104 == ((unsigned short int) var_1_29))) && (var_1_105 == ((unsigned short int) var_1_73))) && (var_1_106 == ((unsigned short int) var_1_72))) && (var_1_107 == ((signed short int) var_1_26))) && (var_1_91 ? (var_1_108 == ((float) var_1_48)) : (var_1_108 == ((float) var_1_15)))) && (var_1_109 == ((unsigned long int) var_1_73))) && (var_1_110 == ((signed long int) -2))) && (var_1_39 ? (var_1_111 == ((signed char) var_1_42)) : (var_1_111 == ((signed char) -64)))) && (var_1_78 ? (var_1_112 == ((float) var_1_17)) : (var_1_112 == ((float) 64.5f)))) && (var_1_113 == ((unsigned short int) var_1_26))) && (var_1_36 ? (var_1_114 == ((float) var_1_15)) : 1)) && (var_1_36 ? (var_1_115 == ((unsigned char) var_1_77)) : (var_1_115 == ((unsigned char) var_1_39)))) && (var_1_118 ? (var_1_116 == ((unsigned long int) var_1_62)) : 1)) && (var_1_36 ? (var_1_117 == ((signed short int) (max (var_1_4 , var_1_45)))) : 1)) && (((- last_1_var_1_23) >= var_1_73) ? (var_1_118 == ((unsigned char) var_1_76)) : (var_1_118 == ((unsigned char) ((var_1_26 < last_1_var_1_83) || var_1_39))))) && (var_1_119 == ((float) var_1_16))) && (var_1_120 == ((signed long int) var_1_4))
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
