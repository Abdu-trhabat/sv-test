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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch10Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 0;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_8 = 20453;
signed short int var_1_10 = -5;
unsigned char var_1_12 = 5;
unsigned short int var_1_13 = 63501;
unsigned char var_1_14 = 200;
unsigned char var_1_15 = 200;
unsigned char var_1_16 = 32;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 4;
unsigned long int var_1_20 = 32;
signed long int var_1_21 = 32;
signed long int var_1_22 = 10;
signed long int var_1_23 = 1409985475;
signed char var_1_24 = 32;
signed char var_1_25 = 16;
unsigned char var_1_26 = 0;
unsigned char var_1_30 = 0;
signed long int var_1_31 = 256;
unsigned long int var_1_32 = 4067269237;
signed long int var_1_33 = 1000000000;
signed short int var_1_35 = -5;
float var_1_36 = 64.25;
float var_1_37 = 24.625;
float var_1_38 = 15.8;
float var_1_39 = 8.9;
signed char var_1_40 = 4;
signed char var_1_41 = 8;
signed char var_1_42 = 0;
signed long int var_1_43 = 0;
unsigned long int var_1_44 = 64;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
double var_1_47 = 16.5;
double var_1_48 = 32.25;
signed long int var_1_49 = -64;
double var_1_50 = 8.25;
double var_1_51 = 9.25;
double var_1_52 = 3.2;
double var_1_53 = 7.279;
float var_1_54 = 9.2;
float var_1_55 = 32.25;
float var_1_56 = 64.6;
float var_1_57 = 0.0;
signed short int var_1_58 = 500;
signed short int var_1_59 = 32217;
unsigned long int var_1_60 = 2;
unsigned long int var_1_61 = 3889410321;
unsigned short int var_1_62 = 50;
unsigned short int var_1_63 = 61371;
unsigned short int var_1_64 = 32468;
float var_1_65 = 10.65;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 1;
signed short int var_1_68 = -1;
signed short int var_1_69 = 22105;
unsigned short int var_1_70 = 128;
unsigned char var_1_71 = 8;
unsigned char var_1_72 = 100;
unsigned char var_1_73 = 1;
unsigned char var_1_74 = 32;
unsigned char var_1_75 = 32;
unsigned char var_1_76 = 32;
signed short int var_1_77 = -1000;
signed long int var_1_78 = -1;
double var_1_79 = 0.0;
signed char var_1_80 = 16;
signed char var_1_81 = 10;
signed char var_1_82 = 2;
signed char var_1_83 = 25;
float var_1_84 = 64.2;
signed char var_1_85 = 10;
signed char var_1_86 = -5;
unsigned long int var_1_87 = 256;
unsigned char var_1_88 = 1;
float var_1_89 = 256.6;
unsigned char var_1_90 = 200;
signed char var_1_91 = 1;
signed char var_1_92 = 1;
signed short int var_1_93 = 10;
unsigned char var_1_95 = 32;
double var_1_96 = 7.6;
unsigned char var_1_97 = 0;
unsigned char var_1_98 = 1;
unsigned char var_1_99 = 0;
signed short int var_1_100 = 64;
signed short int var_1_101 = -50;
unsigned char var_1_102 = 1;
signed short int var_1_103 = 64;
unsigned long int var_1_104 = 16;
unsigned char var_1_105 = 1;
unsigned char var_1_106 = 0;
unsigned char var_1_107 = 0;
unsigned char var_1_108 = 1;
float var_1_109 = 9.75;
signed char var_1_110 = 10;
float var_1_111 = 100000.25;
signed char var_1_112 = -128;
unsigned long int var_1_113 = 5;
signed long int var_1_114 = 1;
unsigned short int var_1_115 = 5;
unsigned short int var_1_116 = 2;
unsigned long int var_1_117 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_12 = 5;
signed long int last_1_var_1_21 = 32;
unsigned char last_1_var_1_26 = 0;
signed long int last_1_var_1_31 = 256;
signed short int last_1_var_1_35 = -5;
unsigned long int last_1_var_1_44 = 64;
unsigned char last_1_var_1_45 = 1;
signed long int last_1_var_1_49 = -64;
signed short int last_1_var_1_58 = 500;
unsigned long int last_1_var_1_60 = 2;
unsigned short int last_1_var_1_62 = 50;
unsigned char last_1_var_1_71 = 8;
float last_1_var_1_84 = 64.2;
signed char last_1_var_1_85 = 10;
unsigned long int last_1_var_1_87 = 256;
unsigned char last_1_var_1_88 = 1;
float last_1_var_1_89 = 256.6;
unsigned char last_1_var_1_90 = 200;
unsigned char last_1_var_1_95 = 32;
unsigned char last_1_var_1_97 = 0;
signed short int last_1_var_1_101 = -50;
signed short int last_1_var_1_103 = 64;
unsigned char last_1_var_1_107 = 0;
unsigned char last_1_var_1_108 = 1;
float last_1_var_1_109 = 9.75;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req20Batch10Amount500
	signed long int stepLocal_11 = last_1_var_1_107 * 5;
	if (stepLocal_11 != last_1_var_1_60) {
		var_1_55 = ((var_1_52 + var_1_37) - (var_1_53 + var_1_56));
	} else {
		var_1_55 = ((var_1_57 - var_1_56) - (max (var_1_37 , 64.5f)));
	}


	// From: Req11Batch10Amount500
	signed long int stepLocal_8 = last_1_var_1_101;
	if (stepLocal_8 >= last_1_var_1_62) {
		if (last_1_var_1_45) {
			var_1_36 = ((1.000000000375E9f + var_1_37) - var_1_38);
		} else {
			if (! ((last_1_var_1_109 * last_1_var_1_89) <= last_1_var_1_84)) {
				var_1_36 = (max ((max (var_1_38 , (0.55f + var_1_37))) , var_1_39));
			}
		}
	}


	// From: Req17Batch10Amount500
	if ((max ((last_1_var_1_31 / var_1_8) , last_1_var_1_103)) > last_1_var_1_49) {
		if (last_1_var_1_108 || (last_1_var_1_49 > last_1_var_1_49)) {
			var_1_49 = (min ((last_1_var_1_71 - var_1_16) , (min (var_1_33 , last_1_var_1_85))));
		}
	}


	// From: Req57Batch10Amount500
	var_1_115 = var_1_49;


	// From: Req24Batch10Amount500
	signed long int stepLocal_16 = last_1_var_1_71;
	if (! last_1_var_1_26) {
		var_1_65 = (var_1_56 + (abs (abs (var_1_37))));
	} else {
		if (stepLocal_16 >= var_1_18) {
			var_1_65 = ((min (var_1_57 , var_1_53)) - 99.8f);
		}
	}


	// From: Req15Batch10Amount500
	signed long int stepLocal_10 = last_1_var_1_35;
	if (var_1_14 < stepLocal_10) {
		var_1_45 = (var_1_30 || var_1_46);
	} else {
		var_1_45 = (last_1_var_1_97 && var_1_46);
	}


	// From: Req40Batch10Amount500
	if (var_1_45) {
		var_1_96 = (var_1_56 - 255.6);
	} else {
		var_1_96 = ((min (var_1_52 , var_1_56)) + var_1_53);
	}


	// From: Req49Batch10Amount500
	if (last_1_var_1_88) {
		var_1_107 = var_1_17;
	} else {
		var_1_107 = var_1_72;
	}


	// From: Req41Batch10Amount500
	signed long int stepLocal_26 = (var_1_16 >> var_1_17) / var_1_64;
	signed long int stepLocal_25 = var_1_14 - var_1_75;
	if (stepLocal_25 >= var_1_23) {
		var_1_97 = (var_1_67 && (! (last_1_var_1_26 || var_1_98)));
	} else {
		if (last_1_var_1_71 > stepLocal_26) {
			var_1_97 = var_1_98;
		} else {
			var_1_97 = (var_1_30 || var_1_98);
		}
	}


	// From: Req58Batch10Amount500
	if (var_1_97) {
		var_1_116 = var_1_14;
	}


	// From: Req39Batch10Amount500
	if (last_1_var_1_87 < last_1_var_1_21) {
		if ((last_1_var_1_95 / (max (8 , var_1_74))) > last_1_var_1_44) {
			var_1_95 = (min ((var_1_15 - var_1_17) , (var_1_14 - (abs (var_1_73)))));
		} else {
			if ((- var_1_74) > (last_1_var_1_90 + (max (var_1_86 , var_1_83)))) {
				if ((last_1_var_1_58 < (last_1_var_1_87 - var_1_92)) && ((last_1_var_1_12 - var_1_13) > (var_1_7 + var_1_14))) {
					var_1_95 = (max ((abs (var_1_92)) , var_1_14));
				} else {
					var_1_95 = (abs ((var_1_72 - var_1_75) + var_1_73));
				}
			} else {
				var_1_95 = (min ((var_1_17 + (var_1_72 - var_1_92)) , var_1_73));
			}
		}
	}


	// From: Req37Batch10Amount500
	if ((var_1_16 << (max (var_1_91 , var_1_92))) < var_1_42) {
		if (var_1_23 < (var_1_95 * (abs (var_1_15)))) {
			if (! var_1_46) {
				var_1_90 = ((var_1_91 + var_1_73) + var_1_92);
			}
		}
	} else {
		var_1_90 = (abs (var_1_15 - var_1_17));
	}


	// From: Req46Batch10Amount500
	var_1_103 = var_1_90;


	// From: Req14Batch10Amount500
	var_1_44 = (abs (var_1_90));


	// From: Req28Batch10Amount500
	signed char stepLocal_18 = var_1_25;
	signed long int stepLocal_17 = var_1_33;
	if ((min (var_1_64 , (min (last_1_var_1_103 , last_1_var_1_71)))) <= stepLocal_18) {
		if (stepLocal_17 > last_1_var_1_71) {
			var_1_71 = (((var_1_72 - var_1_73) + (var_1_74 + var_1_75)) - var_1_18);
		} else {
			var_1_71 = (var_1_17 + var_1_76);
		}
	} else {
		var_1_71 = (var_1_15 - 1);
	}


	// From: Req6Batch10Amount500
	var_1_22 = ((var_1_23 - 4) - var_1_71);


	// From: Req12Batch10Amount500
	signed long int stepLocal_9 = 8;
	if (var_1_22 != stepLocal_9) {
		var_1_40 = (var_1_41 - var_1_42);
	}


	// From: Req4Batch10Amount500
	signed long int stepLocal_3 = var_1_95 - var_1_7;
	if (stepLocal_3 == ((min (var_1_17 , var_1_15)) << var_1_107)) {
		var_1_20 = (2u + var_1_14);
	}


	// From: Req13Batch10Amount500
	var_1_43 = ((max (var_1_23 , (abs (var_1_14)))) - var_1_13);


	// From: Req16Batch10Amount500
	var_1_47 = (min ((abs (var_1_37)) , (max ((var_1_38 - var_1_48) , 64.4))));


	// From: Req18Batch10Amount500
	var_1_50 = (max ((var_1_37 + var_1_51) , ((var_1_52 + var_1_53) - var_1_38)));


	// From: Req19Batch10Amount500
	var_1_54 = (var_1_48 - var_1_53);


	// From: Req31Batch10Amount500
	var_1_80 = (((var_1_73 + var_1_81) - var_1_75) + (var_1_82 + var_1_83));


	// From: Req33Batch10Amount500
	var_1_85 = (min (((max (var_1_83 , var_1_75)) + (var_1_81 + var_1_86)) , (max (var_1_82 , var_1_25))));


	// From: Req42Batch10Amount500
	if (var_1_46) {
		var_1_99 = var_1_98;
	}


	// From: Req43Batch10Amount500
	var_1_100 = var_1_42;


	// From: Req44Batch10Amount500
	var_1_101 = var_1_91;


	// From: Req45Batch10Amount500
	if (var_1_98) {
		var_1_102 = var_1_30;
	}


	// From: Req48Batch10Amount500
	if (var_1_30) {
		var_1_105 = var_1_106;
	} else {
		var_1_105 = var_1_67;
	}


	// From: Req50Batch10Amount500
	if (var_1_99) {
		var_1_108 = var_1_106;
	} else {
		var_1_108 = var_1_30;
	}


	// From: Req52Batch10Amount500
	var_1_110 = var_1_74;


	// From: Req53Batch10Amount500
	var_1_111 = var_1_53;


	// From: Req54Batch10Amount500
	var_1_112 = var_1_42;


	// From: Req55Batch10Amount500
	var_1_113 = 128u;


	// From: Req56Batch10Amount500
	if (var_1_102) {
		var_1_114 = var_1_59;
	} else {
		var_1_114 = 32;
	}


	// From: Req38Batch10Amount500
	if (var_1_36 > var_1_39) {
		var_1_93 = 2;
	} else {
		if (var_1_39 > var_1_55) {
			var_1_93 = (var_1_85 - var_1_69);
		} else {
			var_1_93 = (max (var_1_107 , var_1_101));
		}
	}


	// From: Req47Batch10Amount500
	if (var_1_46) {
		var_1_104 = 1u;
	} else {
		var_1_104 = var_1_115;
	}


	// From: Req3Batch10Amount500
	signed long int stepLocal_2 = 4;
	unsigned short int stepLocal_1 = var_1_8;
	if (var_1_71 >= stepLocal_2) {
		if (! ((var_1_13 - var_1_43) <= 64)) {
			if ((2670268651u - var_1_71) < stepLocal_1) {
				var_1_12 = ((min (var_1_14 , var_1_15)) - (max ((max (var_1_16 , var_1_17)) , (abs (var_1_18)))));
			} else {
				var_1_12 = var_1_15;
			}
		} else {
			if (var_1_45) {
				var_1_12 = var_1_14;
			} else {
				var_1_12 = (1 + var_1_17);
			}
		}
	}


	// From: Req36Batch10Amount500
	if ((var_1_95 < var_1_107) && var_1_105) {
		var_1_89 = (min (((min (var_1_51 , 63.5f)) + var_1_53) , var_1_56));
	}


	// From: Req30Batch10Amount500
	if ((var_1_53 * -0.5f) > (var_1_57 - (var_1_79 - var_1_56))) {
		var_1_78 = (max ((var_1_73 + var_1_41) , var_1_75));
	} else {
		var_1_78 = (min (var_1_101 , var_1_107));
	}


	// From: Req2Batch10Amount500
	var_1_10 = (var_1_95 - var_1_71);


	// From: Req25Batch10Amount500
	if (! ((var_1_38 <= var_1_89) && var_1_102)) {
		var_1_66 = (! (var_1_97 || var_1_67));
	} else {
		var_1_66 = var_1_30;
	}


	// From: Req27Batch10Amount500
	if (var_1_99) {
		var_1_70 = (max ((var_1_95 + var_1_42) , 10));
	}


	// From: Req59Batch10Amount500
	if (((var_1_82 << var_1_23) * var_1_59) > (var_1_78 + var_1_85)) {
		if (((500 * var_1_70) < (25u + var_1_74)) && var_1_98) {
			var_1_117 = var_1_23;
		}
	} else {
		var_1_117 = var_1_107;
	}


	// From: Req51Batch10Amount500
	if (var_1_66) {
		var_1_109 = var_1_39;
	}


	// From: Req22Batch10Amount500
	unsigned short int stepLocal_15 = var_1_116;
	signed long int stepLocal_14 = var_1_23;
	unsigned char stepLocal_13 = (var_1_57 - var_1_52) > 24.7;
	if (stepLocal_14 > (var_1_25 + var_1_93)) {
		if (((abs (var_1_8)) > last_1_var_1_60) || stepLocal_13) {
			var_1_60 = (abs (var_1_7));
		} else {
			var_1_60 = (var_1_23 + 200u);
		}
	} else {
		if (var_1_57 >= ((abs (var_1_54)) - (var_1_37 + var_1_53))) {
			if (var_1_85 < stepLocal_15) {
				var_1_60 = (min (0u , (8u + var_1_13)));
			} else {
				var_1_60 = (min (var_1_59 , (max (var_1_8 , (var_1_61 - var_1_23)))));
			}
		} else {
			var_1_60 = (abs (abs (var_1_71)));
		}
	}


	// From: Req9Batch10Amount500
	unsigned short int stepLocal_7 = var_1_8;
	unsigned short int stepLocal_6 = var_1_13;
	unsigned long int stepLocal_5 = (var_1_8 + var_1_104) % (max (var_1_7 , 10));
	if (stepLocal_6 <= var_1_18) {
		if (stepLocal_5 >= var_1_17) {
			var_1_31 = (var_1_8 - (max (var_1_7 , var_1_95)));
		} else {
			var_1_31 = (var_1_14 - var_1_13);
		}
	} else {
		if ((min (last_1_var_1_31 , (var_1_32 - var_1_18))) >= stepLocal_7) {
			var_1_31 = (var_1_71 + (var_1_18 - (var_1_33 - var_1_12)));
		} else {
			if (var_1_65 <= (min ((max (var_1_111 , 31.5f)) , var_1_96))) {
				var_1_31 = (min (var_1_104 , var_1_13));
			} else {
				var_1_31 = (max ((8 - 100) , var_1_17));
			}
		}
	}


	// From: Req34Batch10Amount500
	signed long int stepLocal_19 = 0;
	if (var_1_89 >= var_1_96) {
		if (last_1_var_1_87 <= stepLocal_19) {
			var_1_87 = (max (var_1_73 , (var_1_90 + var_1_17)));
		}
	}


	// From: Req35Batch10Amount500
	unsigned char stepLocal_24 = var_1_67;
	unsigned char stepLocal_23 = var_1_105;
	unsigned char stepLocal_22 = var_1_103 >= var_1_17;
	unsigned char stepLocal_21 = var_1_95;
	signed long int stepLocal_20 = var_1_15 % var_1_72;
	if (stepLocal_24 && ((var_1_64 / var_1_14) != var_1_63)) {
		if ((min (var_1_39 , var_1_53)) >= var_1_37) {
			if (last_1_var_1_88 && stepLocal_23) {
				var_1_88 = (var_1_67 && (! 0));
			} else {
				if (var_1_12 > stepLocal_20) {
					if (15.4f < var_1_65) {
						if (stepLocal_22 || (! (var_1_97 && var_1_99))) {
							var_1_88 = var_1_67;
						} else {
							var_1_88 = ((var_1_87 <= var_1_40) || var_1_67);
						}
					} else {
						if (-100 <= stepLocal_21) {
							var_1_88 = (var_1_105 || var_1_67);
						} else {
							var_1_88 = (! 0);
						}
					}
				}
			}
		} else {
			var_1_88 = (! var_1_67);
		}
	} else {
		var_1_88 = (var_1_46 || var_1_30);
	}


	// From: Req5Batch10Amount500
	unsigned long int stepLocal_4 = var_1_117;
	if (stepLocal_4 > (- (var_1_100 * 8))) {
		var_1_21 = (var_1_13 + var_1_107);
	}


	// From: Req7Batch10Amount500
	if (var_1_88) {
		var_1_24 = var_1_25;
	}


	// From: Req29Batch10Amount500
	if ((var_1_90 * (var_1_87 / var_1_64)) >= var_1_23) {
		var_1_77 = (var_1_14 - (min (var_1_21 , var_1_90)));
	}


	// From: Req10Batch10Amount500
	if (var_1_97) {
		if (var_1_49 <= var_1_8) {
			var_1_35 = (var_1_95 + 64);
		} else {
			var_1_35 = ((var_1_87 + var_1_25) + var_1_71);
		}
	} else {
		var_1_35 = var_1_16;
	}


	// From: Req26Batch10Amount500
	if (var_1_89 != (- var_1_65)) {
		if ((min (var_1_87 , (32 + var_1_10))) < (var_1_78 / var_1_59)) {
			var_1_68 = (min (var_1_116 , var_1_12));
		} else {
			var_1_68 = ((abs (max (var_1_18 , var_1_78))) - var_1_14);
		}
	} else {
		if (var_1_35 < var_1_78) {
			if (((- var_1_65) / var_1_57) > var_1_38) {
				var_1_68 = (min (var_1_107 , (var_1_12 - var_1_116)));
			} else {
				var_1_68 = (max ((var_1_17 - (var_1_69 - var_1_14)) , var_1_25));
			}
		} else {
			if ((var_1_114 + 200) > var_1_101) {
				var_1_68 = var_1_63;
			}
		}
	}


	// From: Req1Batch10Amount500
	signed short int stepLocal_0 = var_1_35;
	if (stepLocal_0 <= 32) {
		if (var_1_36 < var_1_50) {
			var_1_1 = (var_1_35 + var_1_107);
		}
	} else {
		var_1_1 = ((var_1_107 + (var_1_7 - var_1_35)) + (var_1_8 - var_1_90));
	}


	// From: Req8Batch10Amount500
	if (var_1_68 < var_1_23) {
		var_1_26 = 0;
	} else {
		if (var_1_45 || (var_1_45 || (var_1_105 || var_1_105))) {
			var_1_26 = var_1_30;
		}
	}


	// From: Req21Batch10Amount500
	unsigned char stepLocal_12 = var_1_26;
	if (var_1_46 || stepLocal_12) {
		if (! var_1_66) {
			var_1_58 = ((var_1_7 + (10000 - var_1_68)) - var_1_14);
		} else {
			var_1_58 = (max ((var_1_71 - 200) , ((var_1_59 - var_1_42) - var_1_16)));
		}
	} else {
		var_1_58 = (abs (var_1_71 - (26135 - var_1_15)));
	}


	// From: Req23Batch10Amount500
	if (var_1_45) {
		if (var_1_51 < (- var_1_111)) {
			var_1_62 = ((var_1_63 - 16) - (min (var_1_18 , var_1_58)));
		} else {
			var_1_62 = ((var_1_8 + var_1_64) - var_1_71);
		}
	}


	// From: Req32Batch10Amount500
	if (var_1_36 != 7.6) {
		if ((var_1_115 + var_1_24) <= (abs (var_1_43))) {
			var_1_84 = var_1_56;
		} else {
			if (! var_1_26) {
				var_1_84 = (63.5f + 7.25f);
			} else {
				var_1_84 = (min (var_1_37 , var_1_52));
			}
		}
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 8191);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 16383);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 32767);
	assume_abort_if_not(var_1_13 <= 65535);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 127);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 1073741822);
	assume_abort_if_not(var_1_23 <= 2147483646);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -127);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= 536870911);
	assume_abort_if_not(var_1_33 <= 1073741823);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854765600e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -1);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854765600e+12F && var_1_48 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -461168.6018427382800e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427382800e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427382800e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= 4611686.018427382800e+12F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854765600e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_59 >= 16382);
	assume_abort_if_not(var_1_59 <= 32766);
	var_1_61 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_61 >= 2147483647);
	assume_abort_if_not(var_1_61 <= 4294967294);
	var_1_63 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_63 >= 49150);
	assume_abort_if_not(var_1_63 <= 65534);
	var_1_64 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_64 >= 16384);
	assume_abort_if_not(var_1_64 <= 32767);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 1);
	assume_abort_if_not(var_1_67 <= 1);
	var_1_69 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_69 >= 16383);
	assume_abort_if_not(var_1_69 <= 32766);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 95);
	assume_abort_if_not(var_1_72 <= 127);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 32);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 32);
	assume_abort_if_not(var_1_74 <= 64);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 32);
	assume_abort_if_not(var_1_75 <= 63);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 127);
	var_1_79 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_79 >= 4611686.018427387900e+12F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 9223372.036854776000e+12F && var_1_79 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 31);
	var_1_82 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_82 >= -31);
	assume_abort_if_not(var_1_82 <= 32);
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= -31);
	assume_abort_if_not(var_1_83 <= 31);
	var_1_86 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_86 >= -31);
	assume_abort_if_not(var_1_86 <= 31);
	var_1_91 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 1);
	var_1_92 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 1);
	var_1_98 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_98 >= 1);
	assume_abort_if_not(var_1_98 <= 1);
	var_1_106 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 0);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_109 = var_1_109;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_35 <= 32) ? ((var_1_36 < var_1_50) ? (var_1_1 == ((unsigned short int) (var_1_35 + var_1_107))) : 1) : (var_1_1 == ((unsigned short int) ((var_1_107 + (var_1_7 - var_1_35)) + (var_1_8 - var_1_90))))) && (var_1_10 == ((signed short int) (var_1_95 - var_1_71)))) && ((var_1_71 >= 4) ? ((! ((var_1_13 - var_1_43) <= 64)) ? (((2670268651u - var_1_71) < var_1_8) ? (var_1_12 == ((unsigned char) ((min (var_1_14 , var_1_15)) - (max ((max (var_1_16 , var_1_17)) , (abs (var_1_18))))))) : (var_1_12 == ((unsigned char) var_1_15))) : (var_1_45 ? (var_1_12 == ((unsigned char) var_1_14)) : (var_1_12 == ((unsigned char) (1 + var_1_17))))) : 1)) && (((var_1_95 - var_1_7) == ((min (var_1_17 , var_1_15)) << var_1_107)) ? (var_1_20 == ((unsigned long int) (2u + var_1_14))) : 1)) && ((var_1_117 > (- (var_1_100 * 8))) ? (var_1_21 == ((signed long int) (var_1_13 + var_1_107))) : 1)) && (var_1_22 == ((signed long int) ((var_1_23 - 4) - var_1_71)))) && (var_1_88 ? (var_1_24 == ((signed char) var_1_25)) : 1)) && ((var_1_68 < var_1_23) ? (var_1_26 == ((unsigned char) 0)) : ((var_1_45 || (var_1_45 || (var_1_105 || var_1_105))) ? (var_1_26 == ((unsigned char) var_1_30)) : 1))) && ((var_1_13 <= var_1_18) ? ((((var_1_8 + var_1_104) % (max (var_1_7 , 10))) >= var_1_17) ? (var_1_31 == ((signed long int) (var_1_8 - (max (var_1_7 , var_1_95))))) : (var_1_31 == ((signed long int) (var_1_14 - var_1_13)))) : (((min (last_1_var_1_31 , (var_1_32 - var_1_18))) >= var_1_8) ? (var_1_31 == ((signed long int) (var_1_71 + (var_1_18 - (var_1_33 - var_1_12))))) : ((var_1_65 <= (min ((max (var_1_111 , 31.5f)) , var_1_96))) ? (var_1_31 == ((signed long int) (min (var_1_104 , var_1_13)))) : (var_1_31 == ((signed long int) (max ((8 - 100) , var_1_17)))))))) && (var_1_97 ? ((var_1_49 <= var_1_8) ? (var_1_35 == ((signed short int) (var_1_95 + 64))) : (var_1_35 == ((signed short int) ((var_1_87 + var_1_25) + var_1_71)))) : (var_1_35 == ((signed short int) var_1_16)))) && ((last_1_var_1_101 >= last_1_var_1_62) ? (last_1_var_1_45 ? (var_1_36 == ((float) ((1.000000000375E9f + var_1_37) - var_1_38))) : ((! ((last_1_var_1_109 * last_1_var_1_89) <= last_1_var_1_84)) ? (var_1_36 == ((float) (max ((max (var_1_38 , (0.55f + var_1_37))) , var_1_39)))) : 1)) : 1)) && ((var_1_22 != 8) ? (var_1_40 == ((signed char) (var_1_41 - var_1_42))) : 1)) && (var_1_43 == ((signed long int) ((max (var_1_23 , (abs (var_1_14)))) - var_1_13)))) && (var_1_44 == ((unsigned long int) (abs (var_1_90))))) && ((var_1_14 < last_1_var_1_35) ? (var_1_45 == ((unsigned char) (var_1_30 || var_1_46))) : (var_1_45 == ((unsigned char) (last_1_var_1_97 && var_1_46))))) && (var_1_47 == ((double) (min ((abs (var_1_37)) , (max ((var_1_38 - var_1_48) , 64.4))))))) && (((max ((last_1_var_1_31 / var_1_8) , last_1_var_1_103)) > last_1_var_1_49) ? ((last_1_var_1_108 || (last_1_var_1_49 > last_1_var_1_49)) ? (var_1_49 == ((signed long int) (min ((last_1_var_1_71 - var_1_16) , (min (var_1_33 , last_1_var_1_85)))))) : 1) : 1)) && (var_1_50 == ((double) (max ((var_1_37 + var_1_51) , ((var_1_52 + var_1_53) - var_1_38)))))) && (var_1_54 == ((float) (var_1_48 - var_1_53)))) && (((last_1_var_1_107 * 5) != last_1_var_1_60) ? (var_1_55 == ((float) ((var_1_52 + var_1_37) - (var_1_53 + var_1_56)))) : (var_1_55 == ((float) ((var_1_57 - var_1_56) - (max (var_1_37 , 64.5f))))))) && ((var_1_46 || var_1_26) ? ((! var_1_66) ? (var_1_58 == ((signed short int) ((var_1_7 + (10000 - var_1_68)) - var_1_14))) : (var_1_58 == ((signed short int) (max ((var_1_71 - 200) , ((var_1_59 - var_1_42) - var_1_16)))))) : (var_1_58 == ((signed short int) (abs (var_1_71 - (26135 - var_1_15))))))) && ((var_1_23 > (var_1_25 + var_1_93)) ? ((((abs (var_1_8)) > last_1_var_1_60) || ((var_1_57 - var_1_52) > 24.7)) ? (var_1_60 == ((unsigned long int) (abs (var_1_7)))) : (var_1_60 == ((unsigned long int) (var_1_23 + 200u)))) : ((var_1_57 >= ((abs (var_1_54)) - (var_1_37 + var_1_53))) ? ((var_1_85 < var_1_116) ? (var_1_60 == ((unsigned long int) (min (0u , (8u + var_1_13))))) : (var_1_60 == ((unsigned long int) (min (var_1_59 , (max (var_1_8 , (var_1_61 - var_1_23)))))))) : (var_1_60 == ((unsigned long int) (abs (abs (var_1_71)))))))) && (var_1_45 ? ((var_1_51 < (- var_1_111)) ? (var_1_62 == ((unsigned short int) ((var_1_63 - 16) - (min (var_1_18 , var_1_58))))) : (var_1_62 == ((unsigned short int) ((var_1_8 + var_1_64) - var_1_71)))) : 1)) && ((! last_1_var_1_26) ? (var_1_65 == ((float) (var_1_56 + (abs (abs (var_1_37)))))) : ((last_1_var_1_71 >= var_1_18) ? (var_1_65 == ((float) ((min (var_1_57 , var_1_53)) - 99.8f))) : 1))) && ((! ((var_1_38 <= var_1_89) && var_1_102)) ? (var_1_66 == ((unsigned char) (! (var_1_97 || var_1_67)))) : (var_1_66 == ((unsigned char) var_1_30)))) && ((var_1_89 != (- var_1_65)) ? (((min (var_1_87 , (32 + var_1_10))) < (var_1_78 / var_1_59)) ? (var_1_68 == ((signed short int) (min (var_1_116 , var_1_12)))) : (var_1_68 == ((signed short int) ((abs (max (var_1_18 , var_1_78))) - var_1_14)))) : ((var_1_35 < var_1_78) ? ((((- var_1_65) / var_1_57) > var_1_38) ? (var_1_68 == ((signed short int) (min (var_1_107 , (var_1_12 - var_1_116))))) : (var_1_68 == ((signed short int) (max ((var_1_17 - (var_1_69 - var_1_14)) , var_1_25))))) : (((var_1_114 + 200) > var_1_101) ? (var_1_68 == ((signed short int) var_1_63)) : 1)))) && (var_1_99 ? (var_1_70 == ((unsigned short int) (max ((var_1_95 + var_1_42) , 10)))) : 1)) && (((min (var_1_64 , (min (last_1_var_1_103 , last_1_var_1_71)))) <= var_1_25) ? ((var_1_33 > last_1_var_1_71) ? (var_1_71 == ((unsigned char) (((var_1_72 - var_1_73) + (var_1_74 + var_1_75)) - var_1_18))) : (var_1_71 == ((unsigned char) (var_1_17 + var_1_76)))) : (var_1_71 == ((unsigned char) (var_1_15 - 1))))) && (((var_1_90 * (var_1_87 / var_1_64)) >= var_1_23) ? (var_1_77 == ((signed short int) (var_1_14 - (min (var_1_21 , var_1_90))))) : 1)) && (((var_1_53 * -0.5f) > (var_1_57 - (var_1_79 - var_1_56))) ? (var_1_78 == ((signed long int) (max ((var_1_73 + var_1_41) , var_1_75)))) : (var_1_78 == ((signed long int) (min (var_1_101 , var_1_107)))))) && (var_1_80 == ((signed char) (((var_1_73 + var_1_81) - var_1_75) + (var_1_82 + var_1_83))))) && ((var_1_36 != 7.6) ? (((var_1_115 + var_1_24) <= (abs (var_1_43))) ? (var_1_84 == ((float) var_1_56)) : ((! var_1_26) ? (var_1_84 == ((float) (63.5f + 7.25f))) : (var_1_84 == ((float) (min (var_1_37 , var_1_52)))))) : 1)) && (var_1_85 == ((signed char) (min (((max (var_1_83 , var_1_75)) + (var_1_81 + var_1_86)) , (max (var_1_82 , var_1_25))))))) && ((var_1_89 >= var_1_96) ? ((last_1_var_1_87 <= 0) ? (var_1_87 == ((unsigned long int) (max (var_1_73 , (var_1_90 + var_1_17))))) : 1) : 1)) && ((var_1_67 && ((var_1_64 / var_1_14) != var_1_63)) ? (((min (var_1_39 , var_1_53)) >= var_1_37) ? ((last_1_var_1_88 && var_1_105) ? (var_1_88 == ((unsigned char) (var_1_67 && (! 0)))) : ((var_1_12 > (var_1_15 % var_1_72)) ? ((15.4f < var_1_65) ? (((var_1_103 >= var_1_17) || (! (var_1_97 && var_1_99))) ? (var_1_88 == ((unsigned char) var_1_67)) : (var_1_88 == ((unsigned char) ((var_1_87 <= var_1_40) || var_1_67)))) : ((-100 <= var_1_95) ? (var_1_88 == ((unsigned char) (var_1_105 || var_1_67))) : (var_1_88 == ((unsigned char) (! 0))))) : 1)) : (var_1_88 == ((unsigned char) (! var_1_67)))) : (var_1_88 == ((unsigned char) (var_1_46 || var_1_30))))) && (((var_1_95 < var_1_107) && var_1_105) ? (var_1_89 == ((float) (min (((min (var_1_51 , 63.5f)) + var_1_53) , var_1_56)))) : 1)) && (((var_1_16 << (max (var_1_91 , var_1_92))) < var_1_42) ? ((var_1_23 < (var_1_95 * (abs (var_1_15)))) ? ((! var_1_46) ? (var_1_90 == ((unsigned char) ((var_1_91 + var_1_73) + var_1_92))) : 1) : 1) : (var_1_90 == ((unsigned char) (abs (var_1_15 - var_1_17)))))) && ((var_1_36 > var_1_39) ? (var_1_93 == ((signed short int) 2)) : ((var_1_39 > var_1_55) ? (var_1_93 == ((signed short int) (var_1_85 - var_1_69))) : (var_1_93 == ((signed short int) (max (var_1_107 , var_1_101))))))) && ((last_1_var_1_87 < last_1_var_1_21) ? (((last_1_var_1_95 / (max (8 , var_1_74))) > last_1_var_1_44) ? (var_1_95 == ((unsigned char) (min ((var_1_15 - var_1_17) , (var_1_14 - (abs (var_1_73))))))) : (((- var_1_74) > (last_1_var_1_90 + (max (var_1_86 , var_1_83)))) ? (((last_1_var_1_58 < (last_1_var_1_87 - var_1_92)) && ((last_1_var_1_12 - var_1_13) > (var_1_7 + var_1_14))) ? (var_1_95 == ((unsigned char) (max ((abs (var_1_92)) , var_1_14)))) : (var_1_95 == ((unsigned char) (abs ((var_1_72 - var_1_75) + var_1_73))))) : (var_1_95 == ((unsigned char) (min ((var_1_17 + (var_1_72 - var_1_92)) , var_1_73)))))) : 1)) && (var_1_45 ? (var_1_96 == ((double) (var_1_56 - 255.6))) : (var_1_96 == ((double) ((min (var_1_52 , var_1_56)) + var_1_53))))) && (((var_1_14 - var_1_75) >= var_1_23) ? (var_1_97 == ((unsigned char) (var_1_67 && (! (last_1_var_1_26 || var_1_98))))) : ((last_1_var_1_71 > ((var_1_16 >> var_1_17) / var_1_64)) ? (var_1_97 == ((unsigned char) var_1_98)) : (var_1_97 == ((unsigned char) (var_1_30 || var_1_98)))))) && (var_1_46 ? (var_1_99 == ((unsigned char) var_1_98)) : 1)) && (var_1_100 == ((signed short int) var_1_42))) && (var_1_101 == ((signed short int) var_1_91))) && (var_1_98 ? (var_1_102 == ((unsigned char) var_1_30)) : 1)) && (var_1_103 == ((signed short int) var_1_90))) && (var_1_46 ? (var_1_104 == ((unsigned long int) 1u)) : (var_1_104 == ((unsigned long int) var_1_115)))) && (var_1_30 ? (var_1_105 == ((unsigned char) var_1_106)) : (var_1_105 == ((unsigned char) var_1_67)))) && (last_1_var_1_88 ? (var_1_107 == ((unsigned char) var_1_17)) : (var_1_107 == ((unsigned char) var_1_72)))) && (var_1_99 ? (var_1_108 == ((unsigned char) var_1_106)) : (var_1_108 == ((unsigned char) var_1_30)))) && (var_1_66 ? (var_1_109 == ((float) var_1_39)) : 1)) && (var_1_110 == ((signed char) var_1_74))) && (var_1_111 == ((float) var_1_53))) && (var_1_112 == ((signed char) var_1_42))) && (var_1_113 == ((unsigned long int) 128u))) && (var_1_102 ? (var_1_114 == ((signed long int) var_1_59)) : (var_1_114 == ((signed long int) 32)))) && (var_1_115 == ((unsigned short int) var_1_49))) && (var_1_97 ? (var_1_116 == ((unsigned short int) var_1_14)) : 1)) && ((((var_1_82 << var_1_23) * var_1_59) > (var_1_78 + var_1_85)) ? ((((500 * var_1_70) < (25u + var_1_74)) && var_1_98) ? (var_1_117 == ((unsigned long int) var_1_23)) : 1) : (var_1_117 == ((unsigned long int) var_1_107)))
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
