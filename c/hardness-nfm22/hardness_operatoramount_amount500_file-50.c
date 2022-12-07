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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch50Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 9.5;
double var_1_4 = 16.5;
unsigned short int var_1_5 = 5;
unsigned short int var_1_8 = 10000;
unsigned short int var_1_9 = 25268;
unsigned short int var_1_11 = 52309;
signed long int var_1_12 = -2;
signed long int var_1_13 = 64;
double var_1_14 = 9.25;
unsigned long int var_1_15 = 10;
unsigned char var_1_17 = 5;
unsigned long int var_1_18 = 100;
unsigned long int var_1_20 = 4015996534;
float var_1_22 = 128.575;
float var_1_23 = 64.4;
float var_1_24 = 1.5;
float var_1_25 = 4.4;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 128;
unsigned char var_1_28 = 2;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 32;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 2;
signed long int var_1_35 = 16;
unsigned long int var_1_37 = 32;
unsigned short int var_1_38 = 64;
float var_1_40 = 9.8;
float var_1_41 = 999.25;
float var_1_42 = 63.4;
signed long int var_1_43 = -10;
float var_1_44 = 7.3;
float var_1_45 = 24.5;
float var_1_46 = 128.6;
float var_1_47 = 4.3;
float var_1_48 = 63.5;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
double var_1_53 = 2.7800000000000002;
unsigned char var_1_54 = 8;
unsigned char var_1_55 = 128;
unsigned char var_1_56 = 200;
unsigned long int var_1_57 = 8;
double var_1_58 = 64.5;
unsigned long int var_1_59 = 0;
unsigned char var_1_60 = 100;
signed short int var_1_61 = -256;
unsigned long int var_1_62 = 128;
unsigned long int var_1_63 = 2138470819;
unsigned long int var_1_64 = 1819172702;
unsigned long int var_1_65 = 1843661759;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 1;
unsigned char var_1_68 = 1;
signed char var_1_69 = 64;
signed char var_1_71 = -10;
signed char var_1_72 = -5;
unsigned long int var_1_73 = 500;
unsigned long int var_1_76 = 3761755001;
float var_1_77 = 10000.5;
float var_1_78 = 1.75;
float var_1_79 = 49.5;
signed long int var_1_80 = 1;
signed short int var_1_81 = 10;
unsigned char var_1_82 = 0;
signed long int var_1_83 = 500;
signed char var_1_84 = -10;
signed char var_1_85 = 2;
float var_1_86 = 7.75;
signed long int var_1_88 = 0;
unsigned char var_1_89 = 0;
unsigned char var_1_90 = 0;
signed char var_1_91 = 2;
signed long int var_1_92 = 5;
signed long int var_1_94 = -64;
signed short int var_1_95 = 50;
unsigned long int var_1_96 = 4;
signed char var_1_97 = 25;
unsigned short int var_1_98 = 0;
unsigned short int var_1_99 = 56372;
signed short int var_1_100 = -128;
signed short int var_1_101 = 16501;
signed char var_1_102 = 100;
signed char var_1_104 = -10;
float var_1_105 = 9.4;
unsigned long int var_1_106 = 128;
signed short int var_1_107 = -128;
double var_1_109 = 8.25;
unsigned char var_1_110 = 32;
signed long int var_1_111 = 64;
float var_1_112 = 31.75;
unsigned short int var_1_113 = 128;
unsigned long int var_1_114 = 256;
signed short int var_1_115 = -10;
double var_1_116 = -0.95;
unsigned short int var_1_117 = 0;
signed short int var_1_118 = 1;
signed short int var_1_119 = 1;
signed short int var_1_120 = 10;
unsigned char var_1_121 = 1;
unsigned char var_1_122 = 0;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 9.5;
unsigned short int last_1_var_1_5 = 5;
signed long int last_1_var_1_12 = -2;
signed long int last_1_var_1_13 = 64;
unsigned long int last_1_var_1_15 = 10;
unsigned long int last_1_var_1_18 = 100;
unsigned char last_1_var_1_26 = 1;
unsigned char last_1_var_1_31 = 32;
float last_1_var_1_47 = 4.3;
double last_1_var_1_53 = 2.7800000000000002;
unsigned char last_1_var_1_54 = 8;
double last_1_var_1_58 = 64.5;
unsigned char last_1_var_1_60 = 100;
unsigned char last_1_var_1_66 = 0;
unsigned long int last_1_var_1_73 = 500;
signed long int last_1_var_1_80 = 1;
unsigned char last_1_var_1_89 = 0;
unsigned char last_1_var_1_90 = 0;
signed long int last_1_var_1_92 = 5;
unsigned short int last_1_var_1_98 = 0;
float last_1_var_1_105 = 9.4;
unsigned long int last_1_var_1_114 = 256;
signed short int last_1_var_1_120 = 10;
unsigned char last_1_var_1_121 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch50Amount500
	var_1_12 = (last_1_var_1_54 + (var_1_9 + last_1_var_1_80));


	// From: Req61Batch50Amount500
	if (last_1_var_1_66) {
		var_1_117 = var_1_9;
	} else {
		var_1_117 = var_1_99;
	}


	// From: Req34Batch50Amount500
	signed long int stepLocal_16 = last_1_var_1_98 << var_1_82;
	if ((var_1_65 % var_1_33) >= stepLocal_16) {
		var_1_81 = (min (((var_1_8 - last_1_var_1_120) + var_1_71) , var_1_30));
	}


	// From: Req28Batch50Amount500
	if ((last_1_var_1_47 * last_1_var_1_1) < var_1_46) {
		if (last_1_var_1_89) {
			var_1_62 = (((min (var_1_63 , var_1_64)) + (var_1_65 - last_1_var_1_12)) - (max (var_1_56 , (abs (last_1_var_1_54)))));
		}
	} else {
		var_1_62 = 2u;
	}


	// From: Req9Batch50Amount500
	unsigned short int stepLocal_1 = var_1_8;
	if (last_1_var_1_121) {
		var_1_26 = (var_1_27 - (var_1_28 + (max (var_1_29 , var_1_30))));
	} else {
		if (stepLocal_1 < (last_1_var_1_18 / var_1_27)) {
			var_1_26 = var_1_27;
		} else {
			var_1_26 = (min (var_1_30 , var_1_29));
		}
	}


	// From: Req2Batch50Amount500
	if ((var_1_4 * last_1_var_1_105) == last_1_var_1_58) {
		if (last_1_var_1_66) {
			var_1_5 = (((10000 + var_1_8) + var_1_9) - last_1_var_1_31);
		} else {
			var_1_5 = (var_1_11 - var_1_8);
		}
	} else {
		if (last_1_var_1_105 >= (var_1_4 + 7.75)) {
			var_1_5 = var_1_9;
		} else {
			var_1_5 = (var_1_11 - var_1_9);
		}
	}


	// From: Req38Batch50Amount500
	var_1_88 = (max (var_1_5 , var_1_28));


	// From: Req14Batch50Amount500
	if ((var_1_20 % var_1_11) != var_1_88) {
		var_1_40 = (127.76f + 64.2f);
	}


	// From: Req26Batch50Amount500
	if ((var_1_29 >= var_1_33) && ((last_1_var_1_5 > last_1_var_1_60) || var_1_51)) {
		if (2 < last_1_var_1_60) {
			var_1_60 = ((abs (32)) + var_1_28);
		}
	} else {
		var_1_60 = (var_1_55 - (min ((max (var_1_33 , var_1_34)) , var_1_30)));
	}


	// From: Req39Batch50Amount500
	unsigned long int stepLocal_17 = last_1_var_1_15;
	if (stepLocal_17 <= last_1_var_1_73) {
		var_1_89 = ((last_1_var_1_114 > (abs (last_1_var_1_73))) && var_1_52);
	}


	// From: Req10Batch50Amount500
	unsigned char stepLocal_3 = last_1_var_1_26 > 128;
	unsigned char stepLocal_2 = last_1_var_1_90;
	if (stepLocal_2 || last_1_var_1_89) {
		if ((min (var_1_25 , last_1_var_1_53)) >= var_1_23) {
			if (last_1_var_1_89 && stepLocal_3) {
				var_1_31 = ((var_1_33 - (32 - var_1_34)) + var_1_29);
			} else {
				var_1_31 = (var_1_33 + var_1_30);
			}
		} else {
			var_1_31 = var_1_33;
		}
	} else {
		var_1_31 = var_1_28;
	}


	// From: Req32Batch50Amount500
	unsigned long int stepLocal_14 = 2869725232u - (var_1_63 - var_1_33);
	if ((- var_1_31) < stepLocal_14) {
		var_1_77 = (((min (var_1_45 , var_1_46)) + var_1_78) + var_1_42);
	} else {
		var_1_77 = ((var_1_24 - var_1_25) + (max (var_1_42 , (var_1_79 - 15.6f))));
	}


	// From: Req8Batch50Amount500
	var_1_22 = (var_1_23 - (var_1_24 + var_1_25));


	// From: Req12Batch50Amount500
	var_1_37 = (min (var_1_30 , var_1_8));


	// From: Req23Batch50Amount500
	var_1_57 = (3972358084u - (var_1_11 + var_1_29));


	// From: Req40Batch50Amount500
	if (var_1_51) {
		var_1_90 = ((var_1_67 && (! var_1_50)) && var_1_68);
	}


	// From: Req41Batch50Amount500
	if (var_1_89) {
		var_1_91 = (max (var_1_29 , var_1_85));
	} else {
		if (var_1_46 <= var_1_42) {
			var_1_91 = (var_1_85 - var_1_30);
		}
	}


	// From: Req46Batch50Amount500
	unsigned char stepLocal_23 = var_1_89;
	if (! var_1_52) {
		var_1_97 = ((max ((var_1_34 - var_1_29) , var_1_30)) + var_1_85);
	} else {
		if (stepLocal_23 && var_1_52) {
			var_1_97 = (max (var_1_28 , var_1_82));
		} else {
			var_1_97 = (max ((var_1_30 + var_1_85) , -8));
		}
	}


	// From: Req51Batch50Amount500
	if (var_1_51) {
		var_1_106 = var_1_29;
	} else {
		var_1_106 = var_1_56;
	}


	// From: Req53Batch50Amount500
	var_1_109 = var_1_42;


	// From: Req54Batch50Amount500
	var_1_110 = 1;


	// From: Req55Batch50Amount500
	var_1_111 = var_1_56;


	// From: Req56Batch50Amount500
	var_1_112 = var_1_79;


	// From: Req57Batch50Amount500
	var_1_113 = var_1_56;


	// From: Req58Batch50Amount500
	if (var_1_50) {
		var_1_114 = var_1_33;
	} else {
		var_1_114 = var_1_76;
	}


	// From: Req60Batch50Amount500
	if (var_1_68) {
		var_1_116 = var_1_25;
	} else {
		var_1_116 = var_1_46;
	}


	// From: Req63Batch50Amount500
	var_1_119 = var_1_34;


	// From: Req64Batch50Amount500
	if (var_1_51) {
		var_1_120 = var_1_97;
	} else {
		var_1_120 = var_1_85;
	}


	// From: Req65Batch50Amount500
	var_1_121 = (var_1_67 && var_1_68);


	// From: Req24Batch50Amount500
	unsigned char stepLocal_12 = var_1_90;
	if (var_1_51) {
		if (stepLocal_12 && (var_1_12 <= var_1_31)) {
			if (var_1_89) {
				var_1_58 = var_1_4;
			} else {
				var_1_58 = (var_1_23 - (var_1_25 + var_1_24));
			}
		}
	} else {
		var_1_58 = (var_1_25 - var_1_24);
	}


	// From: Req44Batch50Amount500
	unsigned long int stepLocal_21 = var_1_114 / var_1_63;
	if (var_1_76 < stepLocal_21) {
		var_1_95 = var_1_60;
	} else {
		var_1_95 = var_1_56;
	}


	// From: Req6Batch50Amount500
	if (-16 <= var_1_113) {
		var_1_17 = 100;
	} else {
		var_1_17 = 8;
	}


	// From: Req17Batch50Amount500
	unsigned char stepLocal_9 = var_1_17;
	if (var_1_11 >= stepLocal_9) {
		var_1_44 = (max ((var_1_25 + (var_1_45 + var_1_46)) , var_1_42));
	} else {
		var_1_44 = ((var_1_46 + var_1_45) + var_1_25);
	}


	// From: Req20Batch50Amount500
	var_1_49 = (((var_1_4 < var_1_44) && var_1_50) || (var_1_51 || var_1_52));


	// From: Req21Batch50Amount500
	if (! var_1_49) {
		var_1_53 = (var_1_25 - (abs (var_1_42)));
	} else {
		var_1_53 = (var_1_23 - var_1_24);
	}


	// From: Req27Batch50Amount500
	var_1_61 = (max (((min (var_1_97 , var_1_30)) - var_1_29) , var_1_33));


	// From: Req36Batch50Amount500
	if ((var_1_25 + (var_1_77 * var_1_109)) <= var_1_46) {
		var_1_84 = (max ((min (var_1_56 , var_1_71)) , -16));
	} else {
		if (var_1_52) {
			var_1_84 = (abs ((max (var_1_30 , var_1_29)) - (abs (var_1_71))));
		} else {
			var_1_84 = ((min (var_1_82 , (var_1_34 - var_1_85))) + var_1_29);
		}
	}


	// From: Req50Batch50Amount500
	if (var_1_49) {
		var_1_105 = var_1_79;
	}


	// From: Req33Batch50Amount500
	unsigned char stepLocal_15 = (var_1_12 >= 1) || var_1_89;
	if (var_1_44 > (max (var_1_77 , var_1_40))) {
		if (stepLocal_15 && (var_1_31 < (abs (var_1_26)))) {
			var_1_80 = var_1_71;
		}
	}


	// From: Req4Batch50Amount500
	if ((var_1_53 / (abs (var_1_14))) < var_1_4) {
		var_1_13 = (max ((last_1_var_1_13 - var_1_9) , var_1_11));
	} else {
		var_1_13 = (min (last_1_var_1_13 , var_1_60));
	}


	// From: Req15Batch50Amount500
	if ((min (var_1_23 , (var_1_25 - var_1_24))) > var_1_53) {
		var_1_41 = (var_1_42 + var_1_24);
	}


	// From: Req37Batch50Amount500
	if (var_1_67) {
		if (var_1_52) {
			if (var_1_41 < var_1_24) {
				var_1_86 = (min (var_1_79 , (min ((max (0.75f , var_1_42)) , var_1_24))));
			} else {
				var_1_86 = (var_1_79 - var_1_24);
			}
		}
	}


	// From: Req66Batch50Amount500
	unsigned long int stepLocal_30 = var_1_57;
	if (var_1_86 > (var_1_25 - (var_1_24 + var_1_79))) {
		if (stepLocal_30 >= var_1_33) {
			var_1_122 = var_1_67;
		} else {
			var_1_122 = var_1_68;
		}
	}


	// From: Req62Batch50Amount500
	if (var_1_122) {
		var_1_118 = var_1_81;
	}


	// From: Req42Batch50Amount500
	signed long int stepLocal_20 = abs (var_1_82);
	unsigned long int stepLocal_19 = 256u;
	unsigned char stepLocal_18 = var_1_121;
	if ((max (last_1_var_1_92 , var_1_72)) <= stepLocal_20) {
		if (stepLocal_18 && var_1_90) {
			var_1_92 = ((max ((var_1_119 + var_1_85) , var_1_9)) + var_1_72);
		}
	} else {
		if (((- var_1_65) + var_1_34) <= stepLocal_19) {
			var_1_92 = (min ((32 - (abs (var_1_13))) , var_1_9));
		}
	}


	// From: Req19Batch50Amount500
	unsigned long int stepLocal_10 = var_1_106;
	if (var_1_92 < stepLocal_10) {
		var_1_48 = (var_1_46 + (min (var_1_45 , 2.15f)));
	}


	// From: Req31Batch50Amount500
	if (var_1_121) {
		if (var_1_45 != (min (199.25f , (var_1_86 * 499.5f)))) {
			var_1_73 = (var_1_31 + var_1_55);
		}
	} else {
		var_1_73 = (var_1_76 - (min ((64u + var_1_28) , (var_1_65 - var_1_34))));
	}


	// From: Req52Batch50Amount500
	if (var_1_122) {
		var_1_107 = var_1_31;
	} else {
		var_1_107 = var_1_31;
	}


	// From: Req22Batch50Amount500
	unsigned char stepLocal_11 = var_1_122;
	if ((! (var_1_51 || var_1_122)) || stepLocal_11) {
		var_1_54 = (var_1_27 - (var_1_29 + var_1_34));
	} else {
		if (! var_1_52) {
			var_1_54 = (abs (min ((var_1_27 - var_1_34) , (var_1_55 - var_1_30))));
		} else {
			var_1_54 = ((var_1_56 - (min (var_1_30 , 32))) - var_1_34);
		}
	}


	// From: Req16Batch50Amount500
	signed long int stepLocal_8 = - var_1_33;
	if (var_1_49) {
		if (var_1_80 < stepLocal_8) {
			var_1_43 = var_1_118;
		} else {
			var_1_43 = var_1_34;
		}
	}


	// From: Req25Batch50Amount500
	unsigned char stepLocal_13 = var_1_54;
	if (stepLocal_13 != 64u) {
		var_1_59 = (max (var_1_117 , var_1_9));
	}


	// From: Req5Batch50Amount500
	var_1_15 = (var_1_80 + ((var_1_9 + var_1_54) + var_1_11));


	// From: Req35Batch50Amount500
	if (var_1_53 > (min ((var_1_58 + var_1_48) , (var_1_24 - var_1_79)))) {
		var_1_83 = (min (var_1_88 , (var_1_60 + var_1_54)));
	}


	// From: Req30Batch50Amount500
	if ((! var_1_122) || (! (var_1_59 <= var_1_113))) {
		var_1_69 = (min (var_1_30 , var_1_56));
	} else {
		var_1_69 = (abs ((min (8 , var_1_34)) + (var_1_71 + var_1_72)));
	}


	// From: Req29Batch50Amount500
	if (var_1_33 > var_1_65) {
		if (var_1_95 >= var_1_15) {
			if ((var_1_62 % var_1_27) >= ((var_1_95 + var_1_8) >> (min (var_1_34 , 0)))) {
				var_1_66 = (! var_1_67);
			} else {
				var_1_66 = (var_1_51 || var_1_52);
			}
		} else {
			if (var_1_73 <= (var_1_117 / var_1_11)) {
				var_1_66 = (var_1_51 || (var_1_50 || var_1_52));
			} else {
				var_1_66 = (! var_1_50);
			}
		}
	} else {
		if (((10u / var_1_11) == var_1_73) || var_1_49) {
			var_1_66 = (var_1_67 && var_1_68);
		}
	}


	// From: Req18Batch50Amount500
	if ((var_1_60 + var_1_11) < var_1_83) {
		if (var_1_9 < var_1_5) {
			var_1_47 = (max (var_1_45 , var_1_42));
		} else {
			var_1_47 = (var_1_23 - var_1_24);
		}
	}


	// From: Req11Batch50Amount500
	unsigned long int stepLocal_5 = var_1_114;
	unsigned char stepLocal_4 = var_1_121;
	if (((var_1_90 || var_1_122) || var_1_66) || stepLocal_4) {
		if (stepLocal_5 != ((var_1_8 % 16) * (var_1_107 | var_1_54))) {
			var_1_35 = (-64 + (min (var_1_54 , var_1_107)));
		}
	}


	// From: Req48Batch50Amount500
	if (var_1_66) {
		var_1_100 = ((var_1_101 - var_1_91) - var_1_54);
	}


	// From: Req59Batch50Amount500
	if (var_1_66) {
		var_1_115 = 10;
	} else {
		var_1_115 = var_1_29;
	}


	// From: Req43Batch50Amount500
	if (var_1_89) {
		var_1_94 = ((var_1_82 + var_1_26) - (max (var_1_28 , var_1_113)));
	} else {
		if (var_1_78 > (var_1_47 * (var_1_23 - var_1_25))) {
			var_1_94 = (var_1_59 + (var_1_55 + var_1_60));
		}
	}


	// From: Req1Batch50Amount500
	signed long int stepLocal_0 = var_1_94;
	if (var_1_62 > stepLocal_0) {
		var_1_1 = (abs (var_1_4));
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req13Batch50Amount500
	unsigned short int stepLocal_7 = var_1_5;
	signed long int stepLocal_6 = var_1_26 * var_1_27;
	if (var_1_89) {
		if (2 >= stepLocal_7) {
			if (var_1_11 >= stepLocal_6) {
				var_1_38 = (var_1_11 - (var_1_27 + (var_1_94 + var_1_17)));
			} else {
				var_1_38 = (min ((abs (var_1_28)) , var_1_11));
			}
		} else {
			var_1_38 = (abs (var_1_28));
		}
	}


	// From: Req45Batch50Amount500
	signed short int stepLocal_22 = var_1_100;
	if (stepLocal_22 != var_1_33) {
		var_1_96 = (abs (var_1_8));
	}


	// From: Req49Batch50Amount500
	signed long int stepLocal_29 = var_1_81 % (max (var_1_8 , var_1_27));
	signed long int stepLocal_28 = var_1_94;
	unsigned char stepLocal_27 = var_1_89;
	unsigned char stepLocal_26 = var_1_121;
	if (stepLocal_28 <= var_1_81) {
		if (stepLocal_27 && ((var_1_105 + var_1_23) >= var_1_46)) {
			var_1_102 = (var_1_29 - (min ((64 - var_1_85) , var_1_30)));
		} else {
			if (stepLocal_29 != ((2 << 1) >> var_1_82)) {
				if ((! var_1_90) || stepLocal_26) {
					var_1_102 = (min (var_1_34 , ((min (var_1_29 , var_1_28)) - var_1_30)));
				} else {
					var_1_102 = var_1_82;
				}
			} else {
				var_1_102 = var_1_104;
			}
		}
	} else {
		var_1_102 = var_1_104;
	}


	// From: Req7Batch50Amount500
	if (var_1_49 || var_1_122) {
		var_1_18 = (last_1_var_1_18 + var_1_54);
	} else {
		if ((var_1_35 / (var_1_20 - var_1_8)) < (var_1_92 / var_1_9)) {
			var_1_18 = (64u + var_1_54);
		} else {
			var_1_18 = (min (var_1_8 , var_1_38));
		}
	}


	// From: Req47Batch50Amount500
	signed long int stepLocal_25 = var_1_43;
	signed char stepLocal_24 = var_1_72;
	if (stepLocal_24 < last_1_var_1_98) {
		if ((2818270318u - var_1_102) >= stepLocal_25) {
			var_1_98 = ((max (var_1_11 , var_1_99)) - (var_1_31 + var_1_69));
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 8192);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 16384);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 32767);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	assume_abort_if_not(var_1_14 != 0.0F);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967295);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 127);
	assume_abort_if_not(var_1_27 <= 254);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 64);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 63);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 31);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -461168.6018427382800e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -230584.3009213691390e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691390e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -230584.3009213691390e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691390e+12F && var_1_46 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 0);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 0);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 190);
	assume_abort_if_not(var_1_56 <= 254);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 1073741823);
	assume_abort_if_not(var_1_63 <= 2147483647);
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 1073741823);
	assume_abort_if_not(var_1_64 <= 2147483647);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 1610612735);
	assume_abort_if_not(var_1_65 <= 2147483647);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 1);
	assume_abort_if_not(var_1_67 <= 1);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 1);
	assume_abort_if_not(var_1_68 <= 1);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= -31);
	assume_abort_if_not(var_1_71 <= 32);
	var_1_72 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_72 >= -31);
	assume_abort_if_not(var_1_72 <= 31);
	var_1_76 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_76 >= 2147483647);
	assume_abort_if_not(var_1_76 <= 4294967294);
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= -230584.3009213691390e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 2305843.009213691390e+12F && var_1_78 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_79 >= 0.0F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 4611686.018427382800e+12F && var_1_79 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 1);
	var_1_85 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 63);
	var_1_99 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_99 >= 32767);
	assume_abort_if_not(var_1_99 <= 65534);
	var_1_101 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_101 >= 16382);
	assume_abort_if_not(var_1_101 <= 32766);
	var_1_104 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_104 >= -127);
	assume_abort_if_not(var_1_104 <= 126);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_105 = var_1_105;
	last_1_var_1_114 = var_1_114;
	last_1_var_1_120 = var_1_120;
	last_1_var_1_121 = var_1_121;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_62 > var_1_94) ? (var_1_1 == ((double) (abs (var_1_4)))) : (var_1_1 == ((double) var_1_4))) && (((var_1_4 * last_1_var_1_105) == last_1_var_1_58) ? (last_1_var_1_66 ? (var_1_5 == ((unsigned short int) (((10000 + var_1_8) + var_1_9) - last_1_var_1_31))) : (var_1_5 == ((unsigned short int) (var_1_11 - var_1_8)))) : ((last_1_var_1_105 >= (var_1_4 + 7.75)) ? (var_1_5 == ((unsigned short int) var_1_9)) : (var_1_5 == ((unsigned short int) (var_1_11 - var_1_9)))))) && (var_1_12 == ((signed long int) (last_1_var_1_54 + (var_1_9 + last_1_var_1_80))))) && (((var_1_53 / (abs (var_1_14))) < var_1_4) ? (var_1_13 == ((signed long int) (max ((last_1_var_1_13 - var_1_9) , var_1_11)))) : (var_1_13 == ((signed long int) (min (last_1_var_1_13 , var_1_60)))))) && (var_1_15 == ((unsigned long int) (var_1_80 + ((var_1_9 + var_1_54) + var_1_11))))) && ((-16 <= var_1_113) ? (var_1_17 == ((unsigned char) 100)) : (var_1_17 == ((unsigned char) 8)))) && ((var_1_49 || var_1_122) ? (var_1_18 == ((unsigned long int) (last_1_var_1_18 + var_1_54))) : (((var_1_35 / (var_1_20 - var_1_8)) < (var_1_92 / var_1_9)) ? (var_1_18 == ((unsigned long int) (64u + var_1_54))) : (var_1_18 == ((unsigned long int) (min (var_1_8 , var_1_38))))))) && (var_1_22 == ((float) (var_1_23 - (var_1_24 + var_1_25))))) && (last_1_var_1_121 ? (var_1_26 == ((unsigned char) (var_1_27 - (var_1_28 + (max (var_1_29 , var_1_30)))))) : ((var_1_8 < (last_1_var_1_18 / var_1_27)) ? (var_1_26 == ((unsigned char) var_1_27)) : (var_1_26 == ((unsigned char) (min (var_1_30 , var_1_29))))))) && ((last_1_var_1_90 || last_1_var_1_89) ? (((min (var_1_25 , last_1_var_1_53)) >= var_1_23) ? ((last_1_var_1_89 && (last_1_var_1_26 > 128)) ? (var_1_31 == ((unsigned char) ((var_1_33 - (32 - var_1_34)) + var_1_29))) : (var_1_31 == ((unsigned char) (var_1_33 + var_1_30)))) : (var_1_31 == ((unsigned char) var_1_33))) : (var_1_31 == ((unsigned char) var_1_28)))) && ((((var_1_90 || var_1_122) || var_1_66) || var_1_121) ? ((var_1_114 != ((var_1_8 % 16) * (var_1_107 | var_1_54))) ? (var_1_35 == ((signed long int) (-64 + (min (var_1_54 , var_1_107))))) : 1) : 1)) && (var_1_37 == ((unsigned long int) (min (var_1_30 , var_1_8))))) && (var_1_89 ? ((2 >= var_1_5) ? ((var_1_11 >= (var_1_26 * var_1_27)) ? (var_1_38 == ((unsigned short int) (var_1_11 - (var_1_27 + (var_1_94 + var_1_17))))) : (var_1_38 == ((unsigned short int) (min ((abs (var_1_28)) , var_1_11))))) : (var_1_38 == ((unsigned short int) (abs (var_1_28))))) : 1)) && (((var_1_20 % var_1_11) != var_1_88) ? (var_1_40 == ((float) (127.76f + 64.2f))) : 1)) && (((min (var_1_23 , (var_1_25 - var_1_24))) > var_1_53) ? (var_1_41 == ((float) (var_1_42 + var_1_24))) : 1)) && (var_1_49 ? ((var_1_80 < (- var_1_33)) ? (var_1_43 == ((signed long int) var_1_118)) : (var_1_43 == ((signed long int) var_1_34))) : 1)) && ((var_1_11 >= var_1_17) ? (var_1_44 == ((float) (max ((var_1_25 + (var_1_45 + var_1_46)) , var_1_42)))) : (var_1_44 == ((float) ((var_1_46 + var_1_45) + var_1_25))))) && (((var_1_60 + var_1_11) < var_1_83) ? ((var_1_9 < var_1_5) ? (var_1_47 == ((float) (max (var_1_45 , var_1_42)))) : (var_1_47 == ((float) (var_1_23 - var_1_24)))) : 1)) && ((var_1_92 < var_1_106) ? (var_1_48 == ((float) (var_1_46 + (min (var_1_45 , 2.15f))))) : 1)) && (var_1_49 == ((unsigned char) (((var_1_4 < var_1_44) && var_1_50) || (var_1_51 || var_1_52))))) && ((! var_1_49) ? (var_1_53 == ((double) (var_1_25 - (abs (var_1_42))))) : (var_1_53 == ((double) (var_1_23 - var_1_24))))) && (((! (var_1_51 || var_1_122)) || var_1_122) ? (var_1_54 == ((unsigned char) (var_1_27 - (var_1_29 + var_1_34)))) : ((! var_1_52) ? (var_1_54 == ((unsigned char) (abs (min ((var_1_27 - var_1_34) , (var_1_55 - var_1_30)))))) : (var_1_54 == ((unsigned char) ((var_1_56 - (min (var_1_30 , 32))) - var_1_34)))))) && (var_1_57 == ((unsigned long int) (3972358084u - (var_1_11 + var_1_29))))) && (var_1_51 ? ((var_1_90 && (var_1_12 <= var_1_31)) ? (var_1_89 ? (var_1_58 == ((double) var_1_4)) : (var_1_58 == ((double) (var_1_23 - (var_1_25 + var_1_24))))) : 1) : (var_1_58 == ((double) (var_1_25 - var_1_24))))) && ((var_1_54 != 64u) ? (var_1_59 == ((unsigned long int) (max (var_1_117 , var_1_9)))) : 1)) && (((var_1_29 >= var_1_33) && ((last_1_var_1_5 > last_1_var_1_60) || var_1_51)) ? ((2 < last_1_var_1_60) ? (var_1_60 == ((unsigned char) ((abs (32)) + var_1_28))) : 1) : (var_1_60 == ((unsigned char) (var_1_55 - (min ((max (var_1_33 , var_1_34)) , var_1_30))))))) && (var_1_61 == ((signed short int) (max (((min (var_1_97 , var_1_30)) - var_1_29) , var_1_33))))) && (((last_1_var_1_47 * last_1_var_1_1) < var_1_46) ? (last_1_var_1_89 ? (var_1_62 == ((unsigned long int) (((min (var_1_63 , var_1_64)) + (var_1_65 - last_1_var_1_12)) - (max (var_1_56 , (abs (last_1_var_1_54))))))) : 1) : (var_1_62 == ((unsigned long int) 2u)))) && ((var_1_33 > var_1_65) ? ((var_1_95 >= var_1_15) ? (((var_1_62 % var_1_27) >= ((var_1_95 + var_1_8) >> (min (var_1_34 , 0)))) ? (var_1_66 == ((unsigned char) (! var_1_67))) : (var_1_66 == ((unsigned char) (var_1_51 || var_1_52)))) : ((var_1_73 <= (var_1_117 / var_1_11)) ? (var_1_66 == ((unsigned char) (var_1_51 || (var_1_50 || var_1_52)))) : (var_1_66 == ((unsigned char) (! var_1_50))))) : ((((10u / var_1_11) == var_1_73) || var_1_49) ? (var_1_66 == ((unsigned char) (var_1_67 && var_1_68))) : 1))) && (((! var_1_122) || (! (var_1_59 <= var_1_113))) ? (var_1_69 == ((signed char) (min (var_1_30 , var_1_56)))) : (var_1_69 == ((signed char) (abs ((min (8 , var_1_34)) + (var_1_71 + var_1_72))))))) && (var_1_121 ? ((var_1_45 != (min (199.25f , (var_1_86 * 499.5f)))) ? (var_1_73 == ((unsigned long int) (var_1_31 + var_1_55))) : 1) : (var_1_73 == ((unsigned long int) (var_1_76 - (min ((64u + var_1_28) , (var_1_65 - var_1_34)))))))) && (((- var_1_31) < (2869725232u - (var_1_63 - var_1_33))) ? (var_1_77 == ((float) (((min (var_1_45 , var_1_46)) + var_1_78) + var_1_42))) : (var_1_77 == ((float) ((var_1_24 - var_1_25) + (max (var_1_42 , (var_1_79 - 15.6f)))))))) && ((var_1_44 > (max (var_1_77 , var_1_40))) ? ((((var_1_12 >= 1) || var_1_89) && (var_1_31 < (abs (var_1_26)))) ? (var_1_80 == ((signed long int) var_1_71)) : 1) : 1)) && (((var_1_65 % var_1_33) >= (last_1_var_1_98 << var_1_82)) ? (var_1_81 == ((signed short int) (min (((var_1_8 - last_1_var_1_120) + var_1_71) , var_1_30)))) : 1)) && ((var_1_53 > (min ((var_1_58 + var_1_48) , (var_1_24 - var_1_79)))) ? (var_1_83 == ((signed long int) (min (var_1_88 , (var_1_60 + var_1_54))))) : 1)) && (((var_1_25 + (var_1_77 * var_1_109)) <= var_1_46) ? (var_1_84 == ((signed char) (max ((min (var_1_56 , var_1_71)) , -16)))) : (var_1_52 ? (var_1_84 == ((signed char) (abs ((max (var_1_30 , var_1_29)) - (abs (var_1_71)))))) : (var_1_84 == ((signed char) ((min (var_1_82 , (var_1_34 - var_1_85))) + var_1_29)))))) && (var_1_67 ? (var_1_52 ? ((var_1_41 < var_1_24) ? (var_1_86 == ((float) (min (var_1_79 , (min ((max (0.75f , var_1_42)) , var_1_24)))))) : (var_1_86 == ((float) (var_1_79 - var_1_24)))) : 1) : 1)) && (var_1_88 == ((signed long int) (max (var_1_5 , var_1_28))))) && ((last_1_var_1_15 <= last_1_var_1_73) ? (var_1_89 == ((unsigned char) ((last_1_var_1_114 > (abs (last_1_var_1_73))) && var_1_52))) : 1)) && (var_1_51 ? (var_1_90 == ((unsigned char) ((var_1_67 && (! var_1_50)) && var_1_68))) : 1)) && (var_1_89 ? (var_1_91 == ((signed char) (max (var_1_29 , var_1_85)))) : ((var_1_46 <= var_1_42) ? (var_1_91 == ((signed char) (var_1_85 - var_1_30))) : 1))) && (((max (last_1_var_1_92 , var_1_72)) <= (abs (var_1_82))) ? ((var_1_121 && var_1_90) ? (var_1_92 == ((signed long int) ((max ((var_1_119 + var_1_85) , var_1_9)) + var_1_72))) : 1) : ((((- var_1_65) + var_1_34) <= 256u) ? (var_1_92 == ((signed long int) (min ((32 - (abs (var_1_13))) , var_1_9)))) : 1))) && (var_1_89 ? (var_1_94 == ((signed long int) ((var_1_82 + var_1_26) - (max (var_1_28 , var_1_113))))) : ((var_1_78 > (var_1_47 * (var_1_23 - var_1_25))) ? (var_1_94 == ((signed long int) (var_1_59 + (var_1_55 + var_1_60)))) : 1))) && ((var_1_76 < (var_1_114 / var_1_63)) ? (var_1_95 == ((signed short int) var_1_60)) : (var_1_95 == ((signed short int) var_1_56)))) && ((var_1_100 != var_1_33) ? (var_1_96 == ((unsigned long int) (abs (var_1_8)))) : 1)) && ((! var_1_52) ? (var_1_97 == ((signed char) ((max ((var_1_34 - var_1_29) , var_1_30)) + var_1_85))) : ((var_1_89 && var_1_52) ? (var_1_97 == ((signed char) (max (var_1_28 , var_1_82)))) : (var_1_97 == ((signed char) (max ((var_1_30 + var_1_85) , -8))))))) && ((var_1_72 < last_1_var_1_98) ? (((2818270318u - var_1_102) >= var_1_43) ? (var_1_98 == ((unsigned short int) ((max (var_1_11 , var_1_99)) - (var_1_31 + var_1_69)))) : 1) : 1)) && (var_1_66 ? (var_1_100 == ((signed short int) ((var_1_101 - var_1_91) - var_1_54))) : 1)) && ((var_1_94 <= var_1_81) ? ((var_1_89 && ((var_1_105 + var_1_23) >= var_1_46)) ? (var_1_102 == ((signed char) (var_1_29 - (min ((64 - var_1_85) , var_1_30))))) : (((var_1_81 % (max (var_1_8 , var_1_27))) != ((2 << 1) >> var_1_82)) ? (((! var_1_90) || var_1_121) ? (var_1_102 == ((signed char) (min (var_1_34 , ((min (var_1_29 , var_1_28)) - var_1_30))))) : (var_1_102 == ((signed char) var_1_82))) : (var_1_102 == ((signed char) var_1_104)))) : (var_1_102 == ((signed char) var_1_104)))) && (var_1_49 ? (var_1_105 == ((float) var_1_79)) : 1)) && (var_1_51 ? (var_1_106 == ((unsigned long int) var_1_29)) : (var_1_106 == ((unsigned long int) var_1_56)))) && (var_1_122 ? (var_1_107 == ((signed short int) var_1_31)) : (var_1_107 == ((signed short int) var_1_31)))) && (var_1_109 == ((double) var_1_42))) && (var_1_110 == ((unsigned char) 1))) && (var_1_111 == ((signed long int) var_1_56))) && (var_1_112 == ((float) var_1_79))) && (var_1_113 == ((unsigned short int) var_1_56))) && (var_1_50 ? (var_1_114 == ((unsigned long int) var_1_33)) : (var_1_114 == ((unsigned long int) var_1_76)))) && (var_1_66 ? (var_1_115 == ((signed short int) 10)) : (var_1_115 == ((signed short int) var_1_29)))) && (var_1_68 ? (var_1_116 == ((double) var_1_25)) : (var_1_116 == ((double) var_1_46)))) && (last_1_var_1_66 ? (var_1_117 == ((unsigned short int) var_1_9)) : (var_1_117 == ((unsigned short int) var_1_99)))) && (var_1_122 ? (var_1_118 == ((signed short int) var_1_81)) : 1)) && (var_1_119 == ((signed short int) var_1_34))) && (var_1_51 ? (var_1_120 == ((signed short int) var_1_97)) : (var_1_120 == ((signed short int) var_1_85)))) && (var_1_121 == ((unsigned char) (var_1_67 && var_1_68)))) && ((var_1_86 > (var_1_25 - (var_1_24 + var_1_79))) ? ((var_1_57 >= var_1_33) ? (var_1_122 == ((unsigned char) var_1_67)) : (var_1_122 == ((unsigned char) var_1_68))) : 1)
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
