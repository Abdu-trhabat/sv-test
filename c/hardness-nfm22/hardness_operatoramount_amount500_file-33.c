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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch33Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 128;
signed long int var_1_2 = 1420370654;
signed char var_1_4 = -2;
signed char var_1_5 = 25;
signed char var_1_6 = -16;
signed char var_1_7 = -50;
signed char var_1_8 = -16;
unsigned char var_1_9 = 25;
unsigned char var_1_10 = 32;
float var_1_11 = 256.5;
float var_1_12 = -0.25;
float var_1_13 = 0.30000000000000004;
float var_1_14 = 49.5;
signed long int var_1_15 = -8;
float var_1_19 = 32.3;
signed short int var_1_20 = -50;
float var_1_21 = 1.25;
float var_1_22 = 99999.375;
float var_1_23 = 1000000.5;
signed long int var_1_24 = -2;
signed long int var_1_25 = 1000000000;
signed char var_1_27 = -5;
signed char var_1_28 = 0;
signed char var_1_29 = 10;
signed char var_1_31 = -4;
signed char var_1_32 = 64;
unsigned long int var_1_33 = 64;
signed long int var_1_35 = -100;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned short int var_1_39 = 64;
signed short int var_1_40 = -2;
unsigned short int var_1_41 = 18110;
double var_1_42 = 4.6;
double var_1_43 = 32.3;
unsigned long int var_1_44 = 1;
unsigned long int var_1_45 = 1564050909;
float var_1_46 = 999.5;
double var_1_48 = 5.6;
double var_1_49 = 128.25;
unsigned char var_1_50 = 10;
unsigned char var_1_52 = 2;
unsigned char var_1_53 = 128;
unsigned char var_1_54 = 32;
unsigned char var_1_55 = 8;
unsigned short int var_1_56 = 55252;
unsigned char var_1_57 = 225;
unsigned char var_1_58 = 1;
unsigned char var_1_59 = 32;
unsigned char var_1_60 = 8;
unsigned long int var_1_61 = 4;
unsigned long int var_1_63 = 2325289973;
signed short int var_1_64 = 2;
float var_1_65 = 32.5;
float var_1_66 = 99.8;
float var_1_67 = 16.6;
unsigned long int var_1_68 = 256;
unsigned char var_1_69 = 1;
unsigned char var_1_70 = 1;
signed short int var_1_71 = -256;
signed long int var_1_72 = -64;
unsigned long int var_1_74 = 0;
unsigned long int var_1_76 = 2765765669;
unsigned long int var_1_77 = 3420053474;
unsigned long int var_1_78 = 1000000000;
unsigned long int var_1_79 = 2143157891;
unsigned long int var_1_80 = 1944214234;
float var_1_81 = -0.6;
double var_1_82 = 15.4;
double var_1_83 = 200.3;
unsigned char var_1_84 = 0;
unsigned char var_1_85 = 64;
signed short int var_1_86 = 1;
double var_1_87 = 15.625;
double var_1_88 = 0.0;
double var_1_89 = 2.8;
unsigned char var_1_90 = 1;
signed char var_1_91 = 5;
signed long int var_1_92 = 10;
signed char var_1_93 = 5;
signed char var_1_94 = 1;
signed char var_1_95 = 10;
signed char var_1_96 = 2;
signed short int var_1_97 = 8;
signed short int var_1_99 = 32;
signed char var_1_100 = 64;
unsigned long int var_1_101 = 2;
double var_1_102 = 5.5;
unsigned short int var_1_103 = 4;
unsigned short int var_1_104 = 10000;
unsigned short int var_1_105 = 28760;
unsigned short int var_1_106 = 31149;
unsigned short int var_1_107 = 17479;
double var_1_108 = 0.6;
double var_1_109 = 0.8;
signed char var_1_110 = 50;
unsigned long int var_1_111 = 1;
unsigned char var_1_112 = 128;
float var_1_113 = 16.4;
unsigned char var_1_114 = 100;
signed long int var_1_115 = -100000000;
signed short int var_1_116 = 16;
unsigned char var_1_118 = 50;
signed short int var_1_119 = -64;
unsigned long int var_1_120 = 1;
signed short int var_1_122 = -2;
double var_1_123 = 127.6;
unsigned long int var_1_124 = 0;
signed short int var_1_125 = -5;

// Calibration values

// Last'ed variables
signed char last_1_var_1_4 = -2;
unsigned char last_1_var_1_9 = 25;
float last_1_var_1_11 = 256.5;
signed long int last_1_var_1_15 = -8;
unsigned long int last_1_var_1_33 = 64;
unsigned short int last_1_var_1_39 = 64;
float last_1_var_1_46 = 999.5;
float last_1_var_1_66 = 99.8;
unsigned char last_1_var_1_69 = 1;
signed short int last_1_var_1_86 = 1;
signed char last_1_var_1_91 = 5;
unsigned long int last_1_var_1_101 = 2;
unsigned short int last_1_var_1_103 = 4;
unsigned long int last_1_var_1_111 = 1;
unsigned char last_1_var_1_114 = 100;
unsigned char last_1_var_1_118 = 50;
signed short int last_1_var_1_122 = -2;
signed short int last_1_var_1_125 = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch33Amount500
	if (! last_1_var_1_69) {
		var_1_15 = var_1_5;
	} else {
		if (var_1_12 > (var_1_14 - var_1_13)) {
			var_1_15 = (last_1_var_1_125 + (last_1_var_1_39 - last_1_var_1_15));
		} else {
			var_1_15 = ((min (last_1_var_1_15 , var_1_5)) + (last_1_var_1_118 + var_1_6));
		}
	}


	// From: Req32Batch33Amount500
	signed long int stepLocal_23 = last_1_var_1_103;
	if (var_1_37) {
		var_1_84 = (max (10 , 4));
	} else {
		if (stepLocal_23 == (last_1_var_1_86 + last_1_var_1_33)) {
			var_1_84 = (var_1_53 - (abs (var_1_85 - var_1_59)));
		}
	}


	// From: Req13Batch33Amount500
	if (var_1_28 < last_1_var_1_114) {
		if ((var_1_7 % 256) <= -50) {
			if (var_1_13 != last_1_var_1_46) {
				var_1_36 = var_1_37;
			} else {
				var_1_36 = (! var_1_37);
			}
		} else {
			var_1_36 = (! (! var_1_38));
		}
	}


	// From: Req20Batch33Amount500
	signed short int stepLocal_18 = var_1_20;
	signed long int stepLocal_17 = var_1_56 - var_1_55;
	if (last_1_var_1_66 <= last_1_var_1_11) {
		var_1_50 = (max ((var_1_29 + var_1_10) , var_1_52));
	} else {
		if (stepLocal_18 < ((max (last_1_var_1_91 , last_1_var_1_111)) / 64)) {
			if ((- var_1_12) < (var_1_21 + var_1_14)) {
				if (var_1_23 < 31.4f) {
					var_1_50 = var_1_10;
				}
			} else {
				var_1_50 = (max ((var_1_53 - var_1_10) , (min ((max (var_1_52 , var_1_29)) , (var_1_54 + var_1_55)))));
			}
		} else {
			if (last_1_var_1_69) {
				if (stepLocal_17 >= last_1_var_1_4) {
					var_1_50 = (min (var_1_29 , var_1_52));
				} else {
					var_1_50 = (((var_1_57 - var_1_58) - (min (var_1_59 , var_1_60))) - var_1_29);
				}
			}
		}
	}


	// From: Req2Batch33Amount500
	var_1_4 = (max (((var_1_5 + var_1_6) + var_1_7) , var_1_8));


	// From: Req3Batch33Amount500
	signed char stepLocal_0 = var_1_7;
	if (last_1_var_1_9 < stepLocal_0) {
		var_1_9 = (var_1_10 + 1);
	}


	// From: Req25Batch33Amount500
	if (var_1_59 <= var_1_54) {
		var_1_68 = (var_1_63 - var_1_9);
	}


	// From: Req26Batch33Amount500
	if (var_1_38) {
		var_1_69 = (! (! (var_1_37 || var_1_70)));
	}


	// From: Req27Batch33Amount500
	if (var_1_59 < var_1_25) {
		var_1_71 = ((min ((max (var_1_58 , var_1_52)) , var_1_57)) - var_1_54);
	} else {
		var_1_71 = var_1_60;
	}


	// From: Req34Batch33Amount500
	if ((var_1_10 / var_1_56) == var_1_8) {
		var_1_87 = (var_1_83 - var_1_14);
	} else {
		var_1_87 = (((var_1_88 - var_1_89) - (min (var_1_14 , var_1_13))) + var_1_21);
	}


	// From: Req35Batch33Amount500
	var_1_90 = (! var_1_37);


	// From: Req38Batch33Amount500
	if (var_1_36) {
		var_1_99 = (var_1_52 - var_1_59);
	}


	// From: Req41Batch33Amount500
	if ((! (var_1_45 < var_1_78)) && (var_1_69 && var_1_70)) {
		var_1_102 = (256.75 + var_1_13);
	} else {
		var_1_102 = (var_1_88 + var_1_89);
	}


	// From: Req44Batch33Amount500
	if (var_1_36 || var_1_36) {
		var_1_109 = (var_1_14 - var_1_83);
	} else {
		if (var_1_69) {
			var_1_109 = var_1_83;
		} else {
			var_1_109 = var_1_67;
		}
	}


	// From: Req45Batch33Amount500
	if (var_1_37) {
		var_1_110 = var_1_57;
	}


	// From: Req47Batch33Amount500
	if (var_1_70) {
		var_1_112 = var_1_58;
	} else {
		var_1_112 = var_1_55;
	}


	// From: Req48Batch33Amount500
	var_1_113 = var_1_14;


	// From: Req49Batch33Amount500
	var_1_114 = var_1_54;


	// From: Req50Batch33Amount500
	if (var_1_69) {
		var_1_115 = var_1_105;
	} else {
		var_1_115 = var_1_107;
	}


	// From: Req52Batch33Amount500
	var_1_118 = var_1_57;


	// From: Req53Batch33Amount500
	var_1_119 = var_1_9;


	// From: Req54Batch33Amount500
	if (var_1_90) {
		var_1_120 = var_1_118;
	} else {
		var_1_120 = var_1_53;
	}


	// From: Req55Batch33Amount500
	var_1_122 = last_1_var_1_122;


	// From: Req56Batch33Amount500
	if (var_1_38) {
		var_1_123 = var_1_67;
	}


	// From: Req57Batch33Amount500
	if (var_1_90) {
		var_1_124 = var_1_25;
	} else {
		var_1_124 = var_1_114;
	}


	// From: Req58Batch33Amount500
	if (var_1_37 || var_1_36) {
		if (var_1_70) {
			if (((abs (var_1_94)) ^ var_1_114) <= var_1_105) {
				var_1_125 = var_1_104;
			} else {
				var_1_125 = var_1_8;
			}
		} else {
			var_1_125 = var_1_52;
		}
	} else {
		var_1_125 = var_1_7;
	}


	// From: Req14Batch33Amount500
	if ((var_1_99 / (max (var_1_20 , var_1_40))) != var_1_6) {
		if (! var_1_69) {
			var_1_39 = ((var_1_41 - var_1_29) + var_1_15);
		}
	} else {
		var_1_39 = var_1_41;
	}


	// From: Req12Batch33Amount500
	if (var_1_36) {
		var_1_35 = ((var_1_10 - var_1_84) + var_1_110);
	} else {
		var_1_35 = (var_1_29 - var_1_10);
	}


	// From: Req10Batch33Amount500
	unsigned char stepLocal_7 = var_1_36;
	if (stepLocal_7 || var_1_69) {
		var_1_32 = var_1_8;
	}


	// From: Req17Batch33Amount500
	unsigned char stepLocal_13 = var_1_112;
	signed long int stepLocal_12 = - var_1_35;
	unsigned char stepLocal_11 = var_1_38;
	signed char stepLocal_10 = var_1_8;
	if (stepLocal_11 && (var_1_20 < (var_1_28 - 256))) {
		if (stepLocal_10 >= -8) {
			var_1_46 = (var_1_13 - var_1_14);
		}
	} else {
		if (stepLocal_12 > (var_1_112 / var_1_41)) {
			if (var_1_90) {
				var_1_46 = (min (var_1_14 , 7.175f));
			} else {
				if (var_1_118 == stepLocal_13) {
					var_1_46 = var_1_13;
				}
			}
		} else {
			var_1_46 = (abs (var_1_14 - var_1_13));
		}
	}


	// From: Req4Batch33Amount500
	if (var_1_71 < (var_1_50 & (var_1_10 | var_1_7))) {
		var_1_11 = (abs (var_1_12 + (var_1_13 - var_1_14)));
	}


	// From: Req18Batch33Amount500
	signed long int stepLocal_14 = var_1_112 - var_1_2;
	if (var_1_43 > var_1_12) {
		if (((max (var_1_39 , var_1_9)) ^ var_1_50) > stepLocal_14) {
			if (var_1_90) {
				var_1_48 = (max (var_1_43 , var_1_13));
			} else {
				var_1_48 = (max (var_1_14 , var_1_12));
			}
		}
	}


	// From: Req19Batch33Amount500
	unsigned char stepLocal_16 = var_1_69;
	unsigned char stepLocal_15 = var_1_4 > var_1_120;
	if (var_1_90 && stepLocal_15) {
		var_1_49 = (abs (var_1_23 + var_1_12));
	} else {
		if (var_1_36) {
			var_1_49 = (max ((abs (var_1_12)) , 127.93));
		} else {
			if ((var_1_50 <= var_1_32) && stepLocal_16) {
				var_1_49 = ((1.84 + (max (10.2 , var_1_14))) - (1000000.6 + var_1_13));
			}
		}
	}


	// From: Req24Batch33Amount500
	unsigned char stepLocal_20 = var_1_50;
	if (stepLocal_20 <= var_1_125) {
		var_1_66 = ((abs (min (var_1_67 , var_1_21))) + var_1_23);
	} else {
		var_1_66 = (abs (var_1_14));
	}


	// From: Req8Batch33Amount500
	signed long int stepLocal_6 = -64;
	unsigned char stepLocal_5 = var_1_36;
	if (64.5f < var_1_12) {
		if (stepLocal_6 <= (var_1_9 / var_1_2)) {
			var_1_27 = (var_1_28 - var_1_29);
		} else {
			if (stepLocal_5 || var_1_90) {
				var_1_27 = (max (var_1_5 , var_1_8));
			} else {
				var_1_27 = (max (var_1_5 , (min (var_1_7 , (var_1_28 - var_1_29)))));
			}
		}
	}


	// From: Req9Batch33Amount500
	if (((var_1_123 + var_1_14) * var_1_13) > (abs (255.8f))) {
		var_1_31 = (max (var_1_5 , var_1_28));
	} else {
		var_1_31 = var_1_8;
	}


	// From: Req16Batch33Amount500
	var_1_44 = (max ((max (var_1_39 , var_1_2)) , (var_1_118 + (var_1_45 - var_1_25))));


	// From: Req30Batch33Amount500
	if ((var_1_68 >= var_1_112) && var_1_69) {
		var_1_81 = (max ((var_1_13 + var_1_67) , (abs (var_1_43))));
	} else {
		var_1_81 = (max (var_1_12 , var_1_23));
	}


	// From: Req31Batch33Amount500
	unsigned long int stepLocal_22 = min (var_1_59 , (var_1_63 + var_1_39));
	signed short int stepLocal_21 = var_1_40;
	if (var_1_20 <= stepLocal_22) {
		if (stepLocal_21 <= var_1_54) {
			var_1_82 = (var_1_13 - 31.25);
		} else {
			var_1_82 = (min (((abs (49.5)) - var_1_14) , (var_1_13 - var_1_83)));
		}
	}


	// From: Req33Batch33Amount500
	unsigned char stepLocal_24 = var_1_69;
	if (var_1_90 && stepLocal_24) {
		var_1_86 = var_1_10;
	}


	// From: Req37Batch33Amount500
	if (var_1_54 >= var_1_124) {
		var_1_97 = (min (-10 , 1));
	}


	// From: Req40Batch33Amount500
	signed char stepLocal_26 = var_1_31;
	if ((abs (last_1_var_1_101)) == stepLocal_26) {
		var_1_101 = (32u + (var_1_80 - var_1_25));
	}


	// From: Req46Batch33Amount500
	if (var_1_69) {
		var_1_111 = var_1_119;
	} else {
		var_1_111 = var_1_85;
	}


	// From: Req51Batch33Amount500
	if (var_1_90) {
		var_1_116 = var_1_4;
	} else {
		var_1_116 = var_1_119;
	}


	// From: Req21Batch33Amount500
	if (var_1_112 <= ((2 * var_1_35) ^ 16)) {
		var_1_61 = (min ((var_1_63 - var_1_101) , (abs (var_1_122))));
	}


	// From: Req22Batch33Amount500
	if (var_1_32 <= var_1_112) {
		if (var_1_69) {
			var_1_64 = ((abs (var_1_111)) + var_1_55);
		} else {
			if (var_1_115 <= var_1_119) {
				var_1_64 = var_1_61;
			}
		}
	} else {
		var_1_64 = ((abs (var_1_8)) + var_1_59);
	}


	// From: Req7Batch33Amount500
	var_1_24 = ((var_1_64 + (var_1_25 - var_1_10)) - (var_1_39 + var_1_9));


	// From: Req23Batch33Amount500
	signed short int stepLocal_19 = var_1_86;
	if ((var_1_53 - var_1_10) > stepLocal_19) {
		var_1_65 = (min (8.2f , var_1_22));
	}


	// From: Req43Batch33Amount500
	unsigned long int stepLocal_29 = var_1_61;
	if (stepLocal_29 > var_1_20) {
		var_1_108 = (var_1_67 + var_1_21);
	}


	// From: Req42Batch33Amount500
	signed long int stepLocal_28 = max (var_1_7 , (var_1_41 - var_1_84));
	signed long int stepLocal_27 = var_1_53 / var_1_40;
	if (var_1_37) {
		if ((min (var_1_60 , var_1_86)) >= stepLocal_28) {
			if (stepLocal_27 > var_1_64) {
				var_1_103 = ((20584 - (var_1_104 - var_1_57)) + var_1_60);
			} else {
				var_1_103 = (((max (var_1_41 , var_1_105)) + var_1_106) - (max ((var_1_107 - 200) , var_1_64)));
			}
		} else {
			var_1_103 = var_1_105;
		}
	} else {
		var_1_103 = (min (var_1_96 , (var_1_104 + (max (var_1_85 , var_1_122)))));
	}


	// From: Req11Batch33Amount500
	if (var_1_124 <= var_1_28) {
		var_1_33 = (abs (var_1_10));
	} else {
		if (var_1_36) {
			var_1_33 = (min (var_1_25 , (min (var_1_2 , (max (var_1_112 , var_1_114))))));
		} else {
			if (var_1_36) {
				var_1_33 = (abs (var_1_2));
			} else {
				var_1_33 = ((min (var_1_103 , var_1_114)) + var_1_114);
			}
		}
	}


	// From: Req1Batch33Amount500
	var_1_1 = ((var_1_2 - 256) - var_1_103);


	// From: Req6Batch33Amount500
	signed long int stepLocal_4 = - var_1_84;
	unsigned char stepLocal_3 = (var_1_6 / var_1_20) > var_1_111;
	unsigned char stepLocal_2 = var_1_13 < var_1_65;
	unsigned char stepLocal_1 = var_1_50;
	if (stepLocal_3 || (-50 > var_1_50)) {
		if (var_1_10 <= stepLocal_1) {
			if (stepLocal_2 || var_1_69) {
				var_1_19 = ((min (var_1_13 , (var_1_21 + var_1_22))) + var_1_23);
			}
		} else {
			if (stepLocal_4 <= var_1_8) {
				var_1_19 = var_1_14;
			}
		}
	} else {
		var_1_19 = var_1_13;
	}


	// From: Req15Batch33Amount500
	signed short int stepLocal_9 = var_1_97;
	unsigned long int stepLocal_8 = ~ var_1_61;
	if (stepLocal_8 < var_1_29) {
		if (var_1_19 <= var_1_21) {
			if (var_1_20 < stepLocal_9) {
				var_1_42 = var_1_13;
			} else {
				var_1_42 = (max (var_1_22 , var_1_12));
			}
		} else {
			var_1_42 = (abs (var_1_12));
		}
	} else {
		if (var_1_69) {
			var_1_42 = (var_1_21 + (abs (var_1_12)));
		} else {
			var_1_42 = (var_1_12 + (min (var_1_43 , (var_1_21 + var_1_22))));
		}
	}


	// From: Req29Batch33Amount500
	if (var_1_108 <= var_1_23) {
		if (var_1_38) {
			var_1_74 = ((max ((min (var_1_63 , var_1_76)) , (min (var_1_77 , 3362315274u)))) - (max (var_1_55 , (var_1_59 + var_1_33))));
		} else {
			var_1_74 = (max (var_1_118 , var_1_25));
		}
	} else {
		if (var_1_125 > var_1_118) {
			if (var_1_90) {
				var_1_74 = (((var_1_78 - var_1_57) + 100u) + var_1_59);
			}
		} else {
			if (var_1_76 < ((var_1_33 + var_1_31) / var_1_63)) {
				var_1_74 = (((var_1_79 - var_1_56) + var_1_80) - var_1_118);
			} else {
				var_1_74 = (max (var_1_78 , (max (var_1_125 , 128u))));
			}
		}
	}


	// From: Req28Batch33Amount500
	if (var_1_21 <= var_1_48) {
		var_1_72 = (var_1_1 + ((var_1_53 - var_1_86) + var_1_55));
	}


	// From: Req36Batch33Amount500
	if ((var_1_10 / (max (var_1_40 , var_1_92))) != var_1_112) {
		if ((var_1_72 + var_1_41) > (- (2615261103u - var_1_118))) {
			var_1_91 = -64;
		} else {
			if (var_1_49 < ((abs (var_1_81)) + (max (7.4f , var_1_81)))) {
				var_1_91 = (abs (min (var_1_7 , (min (var_1_57 , var_1_29)))));
			} else {
				if ((var_1_103 + var_1_111) != ((10u & var_1_53) / var_1_79)) {
					var_1_91 = (((var_1_93 + var_1_94) + (var_1_95 - var_1_96)) + var_1_60);
				} else {
					var_1_91 = var_1_60;
				}
			}
		}
	} else {
		if ((abs (var_1_13 - var_1_83)) >= var_1_14) {
			var_1_91 = (var_1_59 + (min (var_1_58 , var_1_7)));
		}
	}


	// From: Req39Batch33Amount500
	signed long int stepLocal_25 = 64;
	if (stepLocal_25 < var_1_72) {
		var_1_100 = var_1_96;
	} else {
		var_1_100 = -100;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= 1073741822);
	assume_abort_if_not(var_1_2 <= 2147483646);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -31);
	assume_abort_if_not(var_1_5 <= 32);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -31);
	assume_abort_if_not(var_1_6 <= 31);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -461168.6018427382800e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -32768);
	assume_abort_if_not(var_1_20 <= 32767);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691390e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -230584.3009213691390e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 536870911);
	assume_abort_if_not(var_1_25 <= 1073741823);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -1);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= -32768);
	assume_abort_if_not(var_1_40 <= 32767);
	assume_abort_if_not(var_1_40 != 0);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 16383);
	assume_abort_if_not(var_1_41 <= 32767);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -461168.6018427382800e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 1073741823);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 254);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 127);
	assume_abort_if_not(var_1_53 <= 254);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 127);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 32767);
	assume_abort_if_not(var_1_56 <= 65535);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 222);
	assume_abort_if_not(var_1_57 <= 254);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 32);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 63);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 2147483647);
	assume_abort_if_not(var_1_63 <= 4294967294);
	var_1_67 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_67 >= -461168.6018427382800e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427382800e+12F && var_1_67 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 1);
	assume_abort_if_not(var_1_70 <= 1);
	var_1_76 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_76 >= 2147483647);
	assume_abort_if_not(var_1_76 <= 4294967294);
	var_1_77 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_77 >= 2147483647);
	assume_abort_if_not(var_1_77 <= 4294967294);
	var_1_78 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_78 >= 536870912);
	assume_abort_if_not(var_1_78 <= 1073741824);
	var_1_79 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_79 >= 1610612735);
	assume_abort_if_not(var_1_79 <= 2147483647);
	var_1_80 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_80 >= 1073741824);
	assume_abort_if_not(var_1_80 <= 2147483647);
	var_1_83 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854765600e+12F && var_1_83 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 63);
	assume_abort_if_not(var_1_85 <= 127);
	var_1_88 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_88 >= 2305843.009213691390e+12F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 4611686.018427382800e+12F && var_1_88 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_89 >= 0.0F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 2305843.009213691390e+12F && var_1_89 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_92 >= -2147483648);
	assume_abort_if_not(var_1_92 <= 2147483647);
	assume_abort_if_not(var_1_92 != 0);
	var_1_93 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_93 >= -15);
	assume_abort_if_not(var_1_93 <= 16);
	var_1_94 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_94 >= -15);
	assume_abort_if_not(var_1_94 <= 16);
	var_1_95 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 31);
	var_1_96 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 31);
	var_1_104 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_104 >= 8191);
	assume_abort_if_not(var_1_104 <= 16383);
	var_1_105 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_105 >= 16383);
	assume_abort_if_not(var_1_105 <= 32767);
	var_1_106 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_106 >= 16384);
	assume_abort_if_not(var_1_106 <= 32767);
	var_1_107 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_107 >= 16383);
	assume_abort_if_not(var_1_107 <= 32767);
}



void updateLastVariables() {
	last_1_var_1_4 = var_1_4;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_111 = var_1_111;
	last_1_var_1_114 = var_1_114;
	last_1_var_1_118 = var_1_118;
	last_1_var_1_122 = var_1_122;
	last_1_var_1_125 = var_1_125;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_1 == ((signed long int) ((var_1_2 - 256) - var_1_103))) && (var_1_4 == ((signed char) (max (((var_1_5 + var_1_6) + var_1_7) , var_1_8))))) && ((last_1_var_1_9 < var_1_7) ? (var_1_9 == ((unsigned char) (var_1_10 + 1))) : 1)) && ((var_1_71 < (var_1_50 & (var_1_10 | var_1_7))) ? (var_1_11 == ((float) (abs (var_1_12 + (var_1_13 - var_1_14))))) : 1)) && ((! last_1_var_1_69) ? (var_1_15 == ((signed long int) var_1_5)) : ((var_1_12 > (var_1_14 - var_1_13)) ? (var_1_15 == ((signed long int) (last_1_var_1_125 + (last_1_var_1_39 - last_1_var_1_15)))) : (var_1_15 == ((signed long int) ((min (last_1_var_1_15 , var_1_5)) + (last_1_var_1_118 + var_1_6))))))) && ((((var_1_6 / var_1_20) > var_1_111) || (-50 > var_1_50)) ? ((var_1_10 <= var_1_50) ? (((var_1_13 < var_1_65) || var_1_69) ? (var_1_19 == ((float) ((min (var_1_13 , (var_1_21 + var_1_22))) + var_1_23))) : 1) : (((- var_1_84) <= var_1_8) ? (var_1_19 == ((float) var_1_14)) : 1)) : (var_1_19 == ((float) var_1_13)))) && (var_1_24 == ((signed long int) ((var_1_64 + (var_1_25 - var_1_10)) - (var_1_39 + var_1_9))))) && ((64.5f < var_1_12) ? ((-64 <= (var_1_9 / var_1_2)) ? (var_1_27 == ((signed char) (var_1_28 - var_1_29))) : ((var_1_36 || var_1_90) ? (var_1_27 == ((signed char) (max (var_1_5 , var_1_8)))) : (var_1_27 == ((signed char) (max (var_1_5 , (min (var_1_7 , (var_1_28 - var_1_29))))))))) : 1)) && ((((var_1_123 + var_1_14) * var_1_13) > (abs (255.8f))) ? (var_1_31 == ((signed char) (max (var_1_5 , var_1_28)))) : (var_1_31 == ((signed char) var_1_8)))) && ((var_1_36 || var_1_69) ? (var_1_32 == ((signed char) var_1_8)) : 1)) && ((var_1_124 <= var_1_28) ? (var_1_33 == ((unsigned long int) (abs (var_1_10)))) : (var_1_36 ? (var_1_33 == ((unsigned long int) (min (var_1_25 , (min (var_1_2 , (max (var_1_112 , var_1_114)))))))) : (var_1_36 ? (var_1_33 == ((unsigned long int) (abs (var_1_2)))) : (var_1_33 == ((unsigned long int) ((min (var_1_103 , var_1_114)) + var_1_114))))))) && (var_1_36 ? (var_1_35 == ((signed long int) ((var_1_10 - var_1_84) + var_1_110))) : (var_1_35 == ((signed long int) (var_1_29 - var_1_10))))) && ((var_1_28 < last_1_var_1_114) ? (((var_1_7 % 256) <= -50) ? ((var_1_13 != last_1_var_1_46) ? (var_1_36 == ((unsigned char) var_1_37)) : (var_1_36 == ((unsigned char) (! var_1_37)))) : (var_1_36 == ((unsigned char) (! (! var_1_38))))) : 1)) && (((var_1_99 / (max (var_1_20 , var_1_40))) != var_1_6) ? ((! var_1_69) ? (var_1_39 == ((unsigned short int) ((var_1_41 - var_1_29) + var_1_15))) : 1) : (var_1_39 == ((unsigned short int) var_1_41)))) && (((~ var_1_61) < var_1_29) ? ((var_1_19 <= var_1_21) ? ((var_1_20 < var_1_97) ? (var_1_42 == ((double) var_1_13)) : (var_1_42 == ((double) (max (var_1_22 , var_1_12))))) : (var_1_42 == ((double) (abs (var_1_12))))) : (var_1_69 ? (var_1_42 == ((double) (var_1_21 + (abs (var_1_12))))) : (var_1_42 == ((double) (var_1_12 + (min (var_1_43 , (var_1_21 + var_1_22))))))))) && (var_1_44 == ((unsigned long int) (max ((max (var_1_39 , var_1_2)) , (var_1_118 + (var_1_45 - var_1_25))))))) && ((var_1_38 && (var_1_20 < (var_1_28 - 256))) ? ((var_1_8 >= -8) ? (var_1_46 == ((float) (var_1_13 - var_1_14))) : 1) : (((- var_1_35) > (var_1_112 / var_1_41)) ? (var_1_90 ? (var_1_46 == ((float) (min (var_1_14 , 7.175f)))) : ((var_1_118 == var_1_112) ? (var_1_46 == ((float) var_1_13)) : 1)) : (var_1_46 == ((float) (abs (var_1_14 - var_1_13))))))) && ((var_1_43 > var_1_12) ? ((((max (var_1_39 , var_1_9)) ^ var_1_50) > (var_1_112 - var_1_2)) ? (var_1_90 ? (var_1_48 == ((double) (max (var_1_43 , var_1_13)))) : (var_1_48 == ((double) (max (var_1_14 , var_1_12))))) : 1) : 1)) && ((var_1_90 && (var_1_4 > var_1_120)) ? (var_1_49 == ((double) (abs (var_1_23 + var_1_12)))) : (var_1_36 ? (var_1_49 == ((double) (max ((abs (var_1_12)) , 127.93)))) : (((var_1_50 <= var_1_32) && var_1_69) ? (var_1_49 == ((double) ((1.84 + (max (10.2 , var_1_14))) - (1000000.6 + var_1_13)))) : 1)))) && ((last_1_var_1_66 <= last_1_var_1_11) ? (var_1_50 == ((unsigned char) (max ((var_1_29 + var_1_10) , var_1_52)))) : ((var_1_20 < ((max (last_1_var_1_91 , last_1_var_1_111)) / 64)) ? (((- var_1_12) < (var_1_21 + var_1_14)) ? ((var_1_23 < 31.4f) ? (var_1_50 == ((unsigned char) var_1_10)) : 1) : (var_1_50 == ((unsigned char) (max ((var_1_53 - var_1_10) , (min ((max (var_1_52 , var_1_29)) , (var_1_54 + var_1_55)))))))) : (last_1_var_1_69 ? (((var_1_56 - var_1_55) >= last_1_var_1_4) ? (var_1_50 == ((unsigned char) (min (var_1_29 , var_1_52)))) : (var_1_50 == ((unsigned char) (((var_1_57 - var_1_58) - (min (var_1_59 , var_1_60))) - var_1_29)))) : 1)))) && ((var_1_112 <= ((2 * var_1_35) ^ 16)) ? (var_1_61 == ((unsigned long int) (min ((var_1_63 - var_1_101) , (abs (var_1_122)))))) : 1)) && ((var_1_32 <= var_1_112) ? (var_1_69 ? (var_1_64 == ((signed short int) ((abs (var_1_111)) + var_1_55))) : ((var_1_115 <= var_1_119) ? (var_1_64 == ((signed short int) var_1_61)) : 1)) : (var_1_64 == ((signed short int) ((abs (var_1_8)) + var_1_59))))) && (((var_1_53 - var_1_10) > var_1_86) ? (var_1_65 == ((float) (min (8.2f , var_1_22)))) : 1)) && ((var_1_50 <= var_1_125) ? (var_1_66 == ((float) ((abs (min (var_1_67 , var_1_21))) + var_1_23))) : (var_1_66 == ((float) (abs (var_1_14)))))) && ((var_1_59 <= var_1_54) ? (var_1_68 == ((unsigned long int) (var_1_63 - var_1_9))) : 1)) && (var_1_38 ? (var_1_69 == ((unsigned char) (! (! (var_1_37 || var_1_70))))) : 1)) && ((var_1_59 < var_1_25) ? (var_1_71 == ((signed short int) ((min ((max (var_1_58 , var_1_52)) , var_1_57)) - var_1_54))) : (var_1_71 == ((signed short int) var_1_60)))) && ((var_1_21 <= var_1_48) ? (var_1_72 == ((signed long int) (var_1_1 + ((var_1_53 - var_1_86) + var_1_55)))) : 1)) && ((var_1_108 <= var_1_23) ? (var_1_38 ? (var_1_74 == ((unsigned long int) ((max ((min (var_1_63 , var_1_76)) , (min (var_1_77 , 3362315274u)))) - (max (var_1_55 , (var_1_59 + var_1_33)))))) : (var_1_74 == ((unsigned long int) (max (var_1_118 , var_1_25))))) : ((var_1_125 > var_1_118) ? (var_1_90 ? (var_1_74 == ((unsigned long int) (((var_1_78 - var_1_57) + 100u) + var_1_59))) : 1) : ((var_1_76 < ((var_1_33 + var_1_31) / var_1_63)) ? (var_1_74 == ((unsigned long int) (((var_1_79 - var_1_56) + var_1_80) - var_1_118))) : (var_1_74 == ((unsigned long int) (max (var_1_78 , (max (var_1_125 , 128u)))))))))) && (((var_1_68 >= var_1_112) && var_1_69) ? (var_1_81 == ((float) (max ((var_1_13 + var_1_67) , (abs (var_1_43)))))) : (var_1_81 == ((float) (max (var_1_12 , var_1_23)))))) && ((var_1_20 <= (min (var_1_59 , (var_1_63 + var_1_39)))) ? ((var_1_40 <= var_1_54) ? (var_1_82 == ((double) (var_1_13 - 31.25))) : (var_1_82 == ((double) (min (((abs (49.5)) - var_1_14) , (var_1_13 - var_1_83)))))) : 1)) && (var_1_37 ? (var_1_84 == ((unsigned char) (max (10 , 4)))) : ((last_1_var_1_103 == (last_1_var_1_86 + last_1_var_1_33)) ? (var_1_84 == ((unsigned char) (var_1_53 - (abs (var_1_85 - var_1_59))))) : 1))) && ((var_1_90 && var_1_69) ? (var_1_86 == ((signed short int) var_1_10)) : 1)) && (((var_1_10 / var_1_56) == var_1_8) ? (var_1_87 == ((double) (var_1_83 - var_1_14))) : (var_1_87 == ((double) (((var_1_88 - var_1_89) - (min (var_1_14 , var_1_13))) + var_1_21))))) && (var_1_90 == ((unsigned char) (! var_1_37)))) && (((var_1_10 / (max (var_1_40 , var_1_92))) != var_1_112) ? (((var_1_72 + var_1_41) > (- (2615261103u - var_1_118))) ? (var_1_91 == ((signed char) -64)) : ((var_1_49 < ((abs (var_1_81)) + (max (7.4f , var_1_81)))) ? (var_1_91 == ((signed char) (abs (min (var_1_7 , (min (var_1_57 , var_1_29))))))) : (((var_1_103 + var_1_111) != ((10u & var_1_53) / var_1_79)) ? (var_1_91 == ((signed char) (((var_1_93 + var_1_94) + (var_1_95 - var_1_96)) + var_1_60))) : (var_1_91 == ((signed char) var_1_60))))) : (((abs (var_1_13 - var_1_83)) >= var_1_14) ? (var_1_91 == ((signed char) (var_1_59 + (min (var_1_58 , var_1_7))))) : 1))) && ((var_1_54 >= var_1_124) ? (var_1_97 == ((signed short int) (min (-10 , 1)))) : 1)) && (var_1_36 ? (var_1_99 == ((signed short int) (var_1_52 - var_1_59))) : 1)) && ((64 < var_1_72) ? (var_1_100 == ((signed char) var_1_96)) : (var_1_100 == ((signed char) -100)))) && (((abs (last_1_var_1_101)) == var_1_31) ? (var_1_101 == ((unsigned long int) (32u + (var_1_80 - var_1_25)))) : 1)) && (((! (var_1_45 < var_1_78)) && (var_1_69 && var_1_70)) ? (var_1_102 == ((double) (256.75 + var_1_13))) : (var_1_102 == ((double) (var_1_88 + var_1_89))))) && (var_1_37 ? (((min (var_1_60 , var_1_86)) >= (max (var_1_7 , (var_1_41 - var_1_84)))) ? (((var_1_53 / var_1_40) > var_1_64) ? (var_1_103 == ((unsigned short int) ((20584 - (var_1_104 - var_1_57)) + var_1_60))) : (var_1_103 == ((unsigned short int) (((max (var_1_41 , var_1_105)) + var_1_106) - (max ((var_1_107 - 200) , var_1_64)))))) : (var_1_103 == ((unsigned short int) var_1_105))) : (var_1_103 == ((unsigned short int) (min (var_1_96 , (var_1_104 + (max (var_1_85 , var_1_122))))))))) && ((var_1_61 > var_1_20) ? (var_1_108 == ((double) (var_1_67 + var_1_21))) : 1)) && ((var_1_36 || var_1_36) ? (var_1_109 == ((double) (var_1_14 - var_1_83))) : (var_1_69 ? (var_1_109 == ((double) var_1_83)) : (var_1_109 == ((double) var_1_67))))) && (var_1_37 ? (var_1_110 == ((signed char) var_1_57)) : 1)) && (var_1_69 ? (var_1_111 == ((unsigned long int) var_1_119)) : (var_1_111 == ((unsigned long int) var_1_85)))) && (var_1_70 ? (var_1_112 == ((unsigned char) var_1_58)) : (var_1_112 == ((unsigned char) var_1_55)))) && (var_1_113 == ((float) var_1_14))) && (var_1_114 == ((unsigned char) var_1_54))) && (var_1_69 ? (var_1_115 == ((signed long int) var_1_105)) : (var_1_115 == ((signed long int) var_1_107)))) && (var_1_90 ? (var_1_116 == ((signed short int) var_1_4)) : (var_1_116 == ((signed short int) var_1_119)))) && (var_1_118 == ((unsigned char) var_1_57))) && (var_1_119 == ((signed short int) var_1_9))) && (var_1_90 ? (var_1_120 == ((unsigned long int) var_1_118)) : (var_1_120 == ((unsigned long int) var_1_53)))) && (var_1_122 == ((signed short int) last_1_var_1_122))) && (var_1_38 ? (var_1_123 == ((double) var_1_67)) : 1)) && (var_1_90 ? (var_1_124 == ((unsigned long int) var_1_25)) : (var_1_124 == ((unsigned long int) var_1_114)))) && ((var_1_37 || var_1_36) ? (var_1_70 ? ((((abs (var_1_94)) ^ var_1_114) <= var_1_105) ? (var_1_125 == ((signed short int) var_1_104)) : (var_1_125 == ((signed short int) var_1_8))) : (var_1_125 == ((signed short int) var_1_52))) : (var_1_125 == ((signed short int) var_1_7)))
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
