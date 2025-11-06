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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch57Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char var_1_5 = 0;
unsigned char var_1_7 = 0;
double var_1_8 = 3.5;
double var_1_11 = 999999999999999.6;
double var_1_12 = 10.37;
double var_1_13 = 0.19999999999999996;
double var_1_14 = 24.7;
double var_1_15 = 31.75;
double var_1_16 = 8.25;
signed long int var_1_17 = 2;
unsigned char var_1_18 = 5;
unsigned char var_1_19 = 16;
unsigned char var_1_20 = 50;
unsigned char var_1_21 = 1;
unsigned short int var_1_22 = 16;
signed char var_1_23 = -32;
signed long int var_1_24 = -4;
unsigned short int var_1_25 = 30082;
unsigned short int var_1_26 = 17483;
unsigned short int var_1_28 = 57167;
signed long int var_1_29 = -128;
unsigned char var_1_30 = 0;
unsigned short int var_1_31 = 0;
unsigned short int var_1_32 = 8;
unsigned short int var_1_33 = 55135;
unsigned short int var_1_34 = 63819;
double var_1_35 = 1.5;
float var_1_36 = 1000000000000.5;
float var_1_37 = 10.5;
float var_1_38 = 63.375;
float var_1_39 = 32.7;
float var_1_40 = 100000000000000.5;
float var_1_41 = 15.5;
float var_1_42 = 10000000000000.2;
unsigned long int var_1_43 = 128;
unsigned long int var_1_45 = 64;
unsigned long int var_1_46 = 1731910566;
signed short int var_1_47 = 25;
unsigned short int var_1_49 = 5;
signed short int var_1_50 = 19634;
signed short int var_1_51 = 10000;
double var_1_52 = 100.4;
unsigned char var_1_53 = 8;
double var_1_54 = 127.4;
unsigned short int var_1_55 = 0;
signed char var_1_56 = -100;
signed char var_1_57 = 5;
signed char var_1_58 = 1;
signed char var_1_59 = 2;
signed char var_1_60 = 32;
double var_1_61 = 32.25;
unsigned short int var_1_62 = 1;
signed long int var_1_63 = -10;
signed char var_1_64 = -25;
float var_1_65 = 256.25;
float var_1_66 = 99.5;
signed long int var_1_67 = 10;
signed long int var_1_68 = 2;
double var_1_69 = 127.4;
double var_1_70 = 99.2;
unsigned char var_1_71 = 1;
float var_1_73 = 15.5;
float var_1_74 = 16.125;
float var_1_75 = -0.6;
float var_1_76 = 63.75;
float var_1_77 = 7.25;
unsigned long int var_1_78 = 128;
unsigned long int var_1_79 = 3357661072;
unsigned long int var_1_80 = 3183463524;
unsigned long int var_1_81 = 3438326001;
signed long int var_1_82 = 5;
signed long int var_1_83 = 1940687327;
signed long int var_1_84 = 1822369189;
signed long int var_1_85 = 1000000000;
signed long int var_1_86 = -4;
double var_1_87 = 16.25;
unsigned char var_1_88 = 16;
unsigned char var_1_89 = 200;
unsigned long int var_1_90 = 25;
unsigned long int var_1_91 = 10;
signed long int var_1_92 = -200;
float var_1_93 = 255.75;
unsigned long int var_1_94 = 2;
unsigned long int var_1_95 = 2095670877;
unsigned long int var_1_96 = 32;
unsigned char var_1_97 = 0;
unsigned char var_1_98 = 5;
unsigned char var_1_99 = 25;
unsigned char var_1_100 = 64;
unsigned char var_1_101 = 0;
signed long int var_1_102 = -1000000;
unsigned short int var_1_103 = 2;
unsigned char var_1_104 = 0;
unsigned char var_1_105 = 0;
double var_1_106 = 2.5;
signed long int var_1_107 = -1;
unsigned short int var_1_108 = 4;
double var_1_109 = 10000000.5;
signed long int var_1_110 = -64;
signed short int var_1_111 = -50;
unsigned long int var_1_112 = 256;
float var_1_113 = 100.2;
unsigned long int var_1_114 = 8;
unsigned long int var_1_115 = 256;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
double last_1_var_1_8 = 3.5;
unsigned short int last_1_var_1_22 = 16;
unsigned short int last_1_var_1_32 = 8;
unsigned long int last_1_var_1_43 = 128;
double last_1_var_1_54 = 127.4;
unsigned short int last_1_var_1_62 = 1;
signed long int last_1_var_1_67 = 10;
unsigned char last_1_var_1_71 = 1;
unsigned long int last_1_var_1_78 = 128;
signed long int last_1_var_1_82 = 5;
signed long int last_1_var_1_86 = -4;
signed long int last_1_var_1_92 = -200;
unsigned long int last_1_var_1_94 = 2;
unsigned char last_1_var_1_97 = 0;
unsigned char last_1_var_1_104 = 0;
unsigned char last_1_var_1_105 = 0;
double last_1_var_1_106 = 2.5;
signed long int last_1_var_1_107 = -1;
unsigned short int last_1_var_1_108 = 4;
unsigned long int last_1_var_1_112 = 256;
unsigned long int last_1_var_1_114 = 8;
unsigned long int last_1_var_1_115 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req27Batch57Amount500
	signed long int stepLocal_18 = var_1_20 - (64 - var_1_58);
	unsigned long int stepLocal_17 = (var_1_79 - last_1_var_1_92) - var_1_25;
	if (stepLocal_17 > (var_1_80 - last_1_var_1_108)) {
		if (last_1_var_1_1) {
			var_1_78 = (var_1_81 - (var_1_46 - (last_1_var_1_67 + var_1_58)));
		} else {
			if (last_1_var_1_106 != last_1_var_1_54) {
				var_1_78 = (abs (var_1_81 - var_1_28));
			} else {
				var_1_78 = (abs (last_1_var_1_108));
			}
		}
	} else {
		if ((abs (abs (last_1_var_1_8))) <= var_1_14) {
			var_1_78 = (abs (last_1_var_1_22 + var_1_26));
		} else {
			if (var_1_42 < (- (var_1_38 / 0.1f))) {
				var_1_78 = (var_1_81 - last_1_var_1_32);
			} else {
				if (stepLocal_18 < (var_1_26 / -5)) {
					var_1_78 = (min (8u , last_1_var_1_92));
				} else {
					var_1_78 = last_1_var_1_92;
				}
			}
		}
	}


	// From: Req21Batch57Amount500
	if (((var_1_33 - var_1_58) >= var_1_49) && var_1_30) {
		var_1_63 = ((var_1_19 + (last_1_var_1_62 + last_1_var_1_82)) + last_1_var_1_107);
	}


	// From: Req28Batch57Amount500
	if (! (var_1_5 || (last_1_var_1_104 && last_1_var_1_1))) {
		var_1_82 = (((min (var_1_83 , var_1_84)) - (var_1_85 - last_1_var_1_43)) - last_1_var_1_92);
	} else {
		var_1_82 = (16 - var_1_85);
	}


	// From: Req12Batch57Amount500
	if (var_1_5) {
		var_1_45 = (((var_1_46 - var_1_34) - (1000000000u - var_1_82)) + var_1_26);
	} else {
		var_1_45 = (var_1_82 + (max (var_1_33 , (var_1_46 - var_1_63))));
	}


	// From: Req8Batch57Amount500
	if (var_1_12 != var_1_11) {
		var_1_32 = (var_1_28 - (max (var_1_25 , (var_1_26 - var_1_21))));
	} else {
		if (last_1_var_1_67 < last_1_var_1_97) {
			var_1_32 = (min (((var_1_21 + last_1_var_1_97) + (last_1_var_1_94 + var_1_19)) , ((max (var_1_28 , var_1_33)) - (max (var_1_25 , var_1_26)))));
		} else {
			if (var_1_28 >= last_1_var_1_67) {
				var_1_32 = (min ((max (last_1_var_1_94 , var_1_26)) , ((var_1_34 - var_1_20) - var_1_19)));
			} else {
				var_1_32 = (4 + (min (var_1_21 , var_1_26)));
			}
		}
	}


	// From: Req35Batch57Amount500
	signed long int stepLocal_23 = 1;
	unsigned char stepLocal_22 = var_1_7;
	signed long int stepLocal_21 = var_1_19 << last_1_var_1_115;
	if (last_1_var_1_105) {
		if (stepLocal_23 <= (abs (var_1_25))) {
			if (((max (var_1_46 , var_1_85)) < last_1_var_1_78) && stepLocal_22) {
				if (stepLocal_21 >= last_1_var_1_94) {
					var_1_94 = ((var_1_46 + (max (1848896192u , var_1_95))) - ((2147333992u - var_1_25) - last_1_var_1_112));
				} else {
					var_1_94 = var_1_96;
				}
			} else {
				if (! last_1_var_1_71) {
					var_1_94 = (var_1_81 - (var_1_46 - 16u));
				} else {
					var_1_94 = (max (var_1_89 , (abs (max (last_1_var_1_78 , var_1_81)))));
				}
			}
		} else {
			var_1_94 = (min (var_1_50 , (last_1_var_1_107 + var_1_85)));
		}
	} else {
		var_1_94 = var_1_28;
	}


	// From: Req38Batch57Amount500
	var_1_102 = (abs (var_1_94));


	// From: Req4Batch57Amount500
	var_1_18 = ((min (var_1_19 , var_1_20)) + var_1_21);


	// From: Req6Batch57Amount500
	if (var_1_26 >= ((var_1_94 + 4) & (var_1_24 / 500))) {
		if (var_1_78 != var_1_94) {
			var_1_29 = ((abs (var_1_28)) + var_1_26);
		}
	}


	// From: Req10Batch57Amount500
	if (! var_1_30) {
		var_1_36 = (var_1_37 + var_1_38);
	} else {
		var_1_36 = (max (((var_1_39 - var_1_40) + (min (var_1_38 , var_1_37))) , (var_1_41 + var_1_42)));
	}


	// From: Req16Batch57Amount500
	signed long int stepLocal_11 = var_1_34 / var_1_50;
	if (var_1_51 > stepLocal_11) {
		var_1_54 = (max (var_1_41 , var_1_37));
	} else {
		var_1_54 = (max (((max (var_1_15 , var_1_13)) - var_1_40) , var_1_42));
	}


	// From: Req18Batch57Amount500
	if (var_1_30) {
		var_1_56 = ((var_1_57 + var_1_58) - (var_1_59 + var_1_60));
	}


	// From: Req24Batch57Amount500
	signed long int stepLocal_16 = var_1_57 - var_1_21;
	if (var_1_59 >= stepLocal_16) {
		var_1_69 = (var_1_70 - var_1_40);
	}


	// From: Req25Batch57Amount500
	if (var_1_16 <= var_1_11) {
		var_1_71 = (! var_1_30);
	}


	// From: Req31Batch57Amount500
	if (var_1_25 != var_1_46) {
		var_1_88 = (var_1_89 - (var_1_59 + 32));
	}


	// From: Req40Batch57Amount500
	var_1_104 = var_1_5;


	// From: Req41Batch57Amount500
	if (var_1_71) {
		var_1_105 = var_1_7;
	}


	// From: Req42Batch57Amount500
	var_1_106 = var_1_77;


	// From: Req43Batch57Amount500
	if (var_1_105) {
		var_1_107 = var_1_57;
	}


	// From: Req45Batch57Amount500
	if (var_1_7) {
		var_1_109 = 99.4;
	}


	// From: Req47Batch57Amount500
	var_1_111 = var_1_49;


	// From: Req48Batch57Amount500
	if (var_1_104) {
		var_1_112 = var_1_101;
	} else {
		var_1_112 = var_1_57;
	}


	// From: Req49Batch57Amount500
	var_1_113 = var_1_75;


	// From: Req39Batch57Amount500
	unsigned char stepLocal_27 = var_1_105;
	signed long int stepLocal_26 = var_1_28 - var_1_60;
	if (stepLocal_26 != (var_1_19 * (min (var_1_45 , var_1_32)))) {
		if (stepLocal_27 || var_1_30) {
			var_1_103 = var_1_98;
		} else {
			var_1_103 = (min (var_1_60 , var_1_98));
		}
	} else {
		var_1_103 = var_1_100;
	}


	// From: Req37Batch57Amount500
	unsigned long int stepLocal_25 = var_1_96;
	unsigned char stepLocal_24 = var_1_38 != var_1_109;
	if ((var_1_49 >= (var_1_32 * var_1_28)) || stepLocal_24) {
		if (var_1_79 <= stepLocal_25) {
			var_1_99 = ((var_1_100 - var_1_60) + var_1_19);
		} else {
			var_1_99 = (abs (max (var_1_58 , 200)));
		}
	} else {
		var_1_99 = ((var_1_100 - (5 + var_1_101)) + var_1_21);
	}


	// From: Req22Batch57Amount500
	if ((var_1_33 | var_1_63) < var_1_49) {
		if ((var_1_69 / (max (var_1_65 , var_1_66))) < var_1_42) {
			var_1_64 = (max ((max (var_1_58 , var_1_57)) , var_1_60));
		} else {
			var_1_64 = var_1_57;
		}
	} else {
		var_1_64 = var_1_57;
	}


	// From: Req29Batch57Amount500
	if (var_1_105) {
		var_1_86 = (var_1_60 - var_1_26);
	} else {
		var_1_86 = (16 + last_1_var_1_86);
	}


	// From: Req32Batch57Amount500
	signed long int stepLocal_20 = max (var_1_84 , var_1_89);
	signed long int stepLocal_19 = var_1_26 + var_1_102;
	if (var_1_34 < stepLocal_20) {
		if (stepLocal_19 < (var_1_49 - var_1_50)) {
			var_1_90 = (max (var_1_91 , var_1_103));
		} else {
			var_1_90 = 8u;
		}
	}


	// From: Req36Batch57Amount500
	if (! var_1_104) {
		var_1_97 = var_1_58;
	} else {
		var_1_97 = var_1_98;
	}


	// From: Req44Batch57Amount500
	var_1_108 = var_1_112;


	// From: Req46Batch57Amount500
	if (var_1_5) {
		var_1_110 = -10000;
	} else {
		var_1_110 = var_1_99;
	}


	// From: Req1Batch57Amount500
	unsigned char stepLocal_0 = var_1_104;
	if (var_1_105) {
		var_1_1 = ((var_1_105 || var_1_104) && var_1_5);
	} else {
		if (stepLocal_0 && (var_1_86 <= 10)) {
			var_1_1 = (var_1_105 || var_1_7);
		}
	}


	// From: Req19Batch57Amount500
	unsigned char stepLocal_12 = var_1_7 || var_1_1;
	if (((min (var_1_19 , var_1_24)) == -10) && stepLocal_12) {
		var_1_61 = (max (var_1_14 , var_1_38));
	} else {
		var_1_61 = (max (var_1_37 , (max ((max (var_1_42 , var_1_14)) , var_1_41))));
	}


	// From: Req50Batch57Amount500
	if (var_1_1) {
		var_1_114 = var_1_100;
	} else {
		var_1_114 = last_1_var_1_114;
	}


	// From: Req20Batch57Amount500
	signed long int stepLocal_14 = (var_1_26 + var_1_110) / var_1_49;
	signed long int stepLocal_13 = var_1_49 / var_1_26;
	if (stepLocal_13 > var_1_63) {
		if (-25 > stepLocal_14) {
			var_1_62 = (var_1_57 + 4);
		}
	} else {
		var_1_62 = var_1_57;
	}


	// From: Req11Batch57Amount500
	signed long int stepLocal_9 = var_1_19 / var_1_26;
	unsigned short int stepLocal_8 = var_1_34;
	unsigned short int stepLocal_7 = var_1_33;
	if (var_1_20 != stepLocal_8) {
		if (var_1_28 <= stepLocal_9) {
			if ((max (var_1_21 , var_1_24)) == stepLocal_7) {
				var_1_43 = (min (var_1_110 , var_1_103));
			} else {
				var_1_43 = (min (var_1_34 , (min (var_1_19 , var_1_33))));
			}
		}
	}


	// From: Req3Batch57Amount500
	if (var_1_7) {
		var_1_17 = ((-128 + var_1_86) + var_1_43);
	}


	// From: Req7Batch57Amount500
	var_1_31 = (var_1_28 - (var_1_26 - var_1_114));


	// From: Req9Batch57Amount500
	if (var_1_25 > var_1_43) {
		var_1_35 = (var_1_15 - 5.125);
	}


	// From: Req14Batch57Amount500
	unsigned long int stepLocal_10 = var_1_114;
	if (! var_1_71) {
		if (stepLocal_10 < var_1_21) {
			var_1_52 = var_1_39;
		} else {
			var_1_52 = ((var_1_40 - var_1_39) + var_1_37);
		}
	} else {
		var_1_52 = (var_1_42 + (abs (var_1_40)));
	}


	// From: Req17Batch57Amount500
	if ((max (var_1_114 , var_1_34)) <= var_1_49) {
		var_1_55 = (var_1_26 + var_1_49);
	}


	// From: Req26Batch57Amount500
	if (var_1_105) {
		if (var_1_58 == (min (var_1_45 , (var_1_20 - 10)))) {
			var_1_73 = (var_1_39 - var_1_16);
		} else {
			var_1_73 = (max (((max (var_1_41 , var_1_38)) + (var_1_74 + var_1_75)) , var_1_39));
		}
	} else {
		if ((var_1_28 - var_1_57) >= var_1_86) {
			if ((var_1_1 && var_1_71) && (var_1_17 > (var_1_28 + var_1_49))) {
				var_1_73 = (63.2f + var_1_37);
			} else {
				var_1_73 = (var_1_39 + ((var_1_76 + var_1_77) - var_1_40));
			}
		} else {
			var_1_73 = ((min (var_1_14 , (max (var_1_13 , var_1_70)))) - var_1_76);
		}
	}


	// From: Req30Batch57Amount500
	if (var_1_46 > (var_1_79 - var_1_86)) {
		if (! (var_1_31 <= 8)) {
			var_1_87 = (min (var_1_74 , (max ((min (var_1_12 , 24.375)) , var_1_75))));
		} else {
			if (var_1_76 != var_1_54) {
				var_1_87 = (((var_1_76 + var_1_77) + (min (var_1_39 , var_1_40))) - var_1_16);
			} else {
				var_1_87 = (var_1_41 + (var_1_39 - (var_1_76 + var_1_77)));
			}
		}
	}


	// From: Req33Batch57Amount500
	if (var_1_39 != (499.1f / 50.3f)) {
		if (! (var_1_79 > 128u)) {
			var_1_92 = (var_1_114 + (var_1_57 - var_1_85));
		}
	}


	// From: Req2Batch57Amount500
	signed long int stepLocal_3 = var_1_17;
	signed long int stepLocal_2 = var_1_17;
	unsigned long int stepLocal_1 = var_1_114;
	if ((var_1_94 & var_1_114) <= stepLocal_2) {
		if (stepLocal_1 > var_1_94) {
			if (var_1_94 >= stepLocal_3) {
				var_1_8 = (max (var_1_11 , var_1_12));
			} else {
				var_1_8 = (min ((max (var_1_11 , var_1_12)) , (max ((var_1_13 - var_1_14) , (var_1_15 - var_1_16)))));
			}
		}
	}


	// From: Req13Batch57Amount500
	if (var_1_87 != var_1_40) {
		var_1_47 = (max (1 , var_1_82));
	} else {
		if (var_1_82 <= (var_1_19 / (var_1_33 - var_1_49))) {
			if (var_1_21 != (var_1_88 * var_1_33)) {
				var_1_47 = ((var_1_20 + (var_1_21 + var_1_82)) - (var_1_50 - var_1_88));
			} else {
				var_1_47 = ((var_1_20 - (var_1_51 - var_1_88)) + (var_1_21 - var_1_19));
			}
		} else {
			if (var_1_7 && var_1_30) {
				var_1_47 = (max (((var_1_82 - var_1_19) + (var_1_20 - var_1_21)) , (var_1_51 + var_1_88)));
			}
		}
	}


	// From: Req15Batch57Amount500
	if (var_1_14 > var_1_87) {
		if (var_1_104) {
			var_1_53 = var_1_19;
		}
	}


	// From: Req5Batch57Amount500
	signed long int stepLocal_6 = max ((var_1_19 / var_1_23) , var_1_21);
	signed long int stepLocal_5 = var_1_92;
	unsigned char stepLocal_4 = (var_1_45 * var_1_24) >= 10;
	if (stepLocal_6 >= ((var_1_92 / var_1_24) * (min (var_1_78 , 25)))) {
		if (! ((- var_1_12) < var_1_106)) {
			var_1_22 = (var_1_21 + ((max (var_1_25 , var_1_26)) - var_1_47));
		} else {
			if (((max (var_1_47 , var_1_102)) <= -8) || stepLocal_4) {
				var_1_22 = ((abs (var_1_28)) - 25);
			} else {
				if (var_1_71) {
					if (stepLocal_5 <= (var_1_26 / (min (var_1_24 , var_1_23)))) {
						var_1_22 = (var_1_26 + var_1_21);
					}
				}
			}
		}
	}


	// From: Req23Batch57Amount500
	unsigned char stepLocal_15 = var_1_1;
	if (var_1_104 || stepLocal_15) {
		if (var_1_61 != (var_1_8 + (var_1_12 * var_1_39))) {
			var_1_67 = (min (var_1_19 , var_1_49));
		} else {
			var_1_67 = (min (var_1_68 , var_1_94));
		}
	} else {
		var_1_67 = (min (10 , var_1_19));
	}


	// From: Req51Batch57Amount500
	if ((var_1_66 * var_1_41) != var_1_15) {
		var_1_115 = (abs (var_1_84));
	} else {
		if ((var_1_70 / var_1_66) >= var_1_76) {
			var_1_115 = 5u;
		} else {
			var_1_115 = var_1_67;
		}
	}


	// From: Req34Batch57Amount500
	if (var_1_11 <= (- (abs (var_1_70)))) {
		if ((var_1_67 % var_1_83) > var_1_114) {
			var_1_93 = (max (var_1_14 , var_1_74));
		} else {
			var_1_93 = ((5.5f + var_1_76) + var_1_39);
		}
	} else {
		var_1_93 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -128);
	assume_abort_if_not(var_1_23 <= 127);
	assume_abort_if_not(var_1_23 != 0);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= -2147483648);
	assume_abort_if_not(var_1_24 <= 2147483647);
	assume_abort_if_not(var_1_24 != 0);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 16383);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 16383);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 32767);
	assume_abort_if_not(var_1_28 <= 65534);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 32767);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 49150);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -461168.6018427383000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -461168.6018427383000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 1610612735);
	assume_abort_if_not(var_1_46 <= 2147483647);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 32766);
	assume_abort_if_not(var_1_49 != 32767);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 16383);
	assume_abort_if_not(var_1_50 <= 32766);
	var_1_51 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_51 >= 8191);
	assume_abort_if_not(var_1_51 <= 16383);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 63);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 63);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= -922337.2036854776000e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854776000e+12F && var_1_65 >= 1.0e-20F ));
	assume_abort_if_not(var_1_65 != 0.0F);
	var_1_66 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_66 >= -922337.2036854776000e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854776000e+12F && var_1_66 >= 1.0e-20F ));
	assume_abort_if_not(var_1_66 != 0.0F);
	var_1_68 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_68 >= -2147483647);
	assume_abort_if_not(var_1_68 <= 2147483646);
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854766000e+12F && var_1_70 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= -230584.3009213691400e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 2305843.009213691400e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= -230584.3009213691400e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 2305843.009213691400e+12F && var_1_75 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_76 >= 0.0F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 2305843.009213691400e+12F && var_1_76 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_77 >= 0.0F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 2305843.009213691400e+12F && var_1_77 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_79 >= 3221225471);
	assume_abort_if_not(var_1_79 <= 4294967295);
	var_1_80 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_80 >= 2147483647);
	assume_abort_if_not(var_1_80 <= 4294967295);
	var_1_81 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_81 >= 2147483647);
	assume_abort_if_not(var_1_81 <= 4294967294);
	var_1_83 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_83 >= 1073741822);
	assume_abort_if_not(var_1_83 <= 2147483646);
	var_1_84 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_84 >= 1073741822);
	assume_abort_if_not(var_1_84 <= 2147483646);
	var_1_85 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_85 >= 536870911);
	assume_abort_if_not(var_1_85 <= 1073741823);
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 127);
	assume_abort_if_not(var_1_89 <= 254);
	var_1_91 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 4294967294);
	var_1_95 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_95 >= 1073741824);
	assume_abort_if_not(var_1_95 <= 2147483647);
	var_1_96 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 4294967294);
	var_1_98 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_98 >= 0);
	assume_abort_if_not(var_1_98 <= 254);
	var_1_100 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_100 >= 63);
	assume_abort_if_not(var_1_100 <= 127);
	var_1_101 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_101 >= 0);
	assume_abort_if_not(var_1_101 <= 31);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_105 = var_1_105;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_112 = var_1_112;
	last_1_var_1_114 = var_1_114;
	last_1_var_1_115 = var_1_115;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((var_1_105 ? (var_1_1 == ((unsigned char) ((var_1_105 || var_1_104) && var_1_5))) : ((var_1_104 && (var_1_86 <= 10)) ? (var_1_1 == ((unsigned char) (var_1_105 || var_1_7))) : 1)) && (((var_1_94 & var_1_114) <= var_1_17) ? ((var_1_114 > var_1_94) ? ((var_1_94 >= var_1_17) ? (var_1_8 == ((double) (max (var_1_11 , var_1_12)))) : (var_1_8 == ((double) (min ((max (var_1_11 , var_1_12)) , (max ((var_1_13 - var_1_14) , (var_1_15 - var_1_16)))))))) : 1) : 1)) && (var_1_7 ? (var_1_17 == ((signed long int) ((-128 + var_1_86) + var_1_43))) : 1)) && (var_1_18 == ((unsigned char) ((min (var_1_19 , var_1_20)) + var_1_21)))) && (((max ((var_1_19 / var_1_23) , var_1_21)) >= ((var_1_92 / var_1_24) * (min (var_1_78 , 25)))) ? ((! ((- var_1_12) < var_1_106)) ? (var_1_22 == ((unsigned short int) (var_1_21 + ((max (var_1_25 , var_1_26)) - var_1_47)))) : ((((max (var_1_47 , var_1_102)) <= -8) || ((var_1_45 * var_1_24) >= 10)) ? (var_1_22 == ((unsigned short int) ((abs (var_1_28)) - 25))) : (var_1_71 ? ((var_1_92 <= (var_1_26 / (min (var_1_24 , var_1_23)))) ? (var_1_22 == ((unsigned short int) (var_1_26 + var_1_21))) : 1) : 1))) : 1)) && ((var_1_26 >= ((var_1_94 + 4) & (var_1_24 / 500))) ? ((var_1_78 != var_1_94) ? (var_1_29 == ((signed long int) ((abs (var_1_28)) + var_1_26))) : 1) : 1)) && (var_1_31 == ((unsigned short int) (var_1_28 - (var_1_26 - var_1_114))))) && ((var_1_12 != var_1_11) ? (var_1_32 == ((unsigned short int) (var_1_28 - (max (var_1_25 , (var_1_26 - var_1_21)))))) : ((last_1_var_1_67 < last_1_var_1_97) ? (var_1_32 == ((unsigned short int) (min (((var_1_21 + last_1_var_1_97) + (last_1_var_1_94 + var_1_19)) , ((max (var_1_28 , var_1_33)) - (max (var_1_25 , var_1_26))))))) : ((var_1_28 >= last_1_var_1_67) ? (var_1_32 == ((unsigned short int) (min ((max (last_1_var_1_94 , var_1_26)) , ((var_1_34 - var_1_20) - var_1_19))))) : (var_1_32 == ((unsigned short int) (4 + (min (var_1_21 , var_1_26))))))))) && ((var_1_25 > var_1_43) ? (var_1_35 == ((double) (var_1_15 - 5.125))) : 1)) && ((! var_1_30) ? (var_1_36 == ((float) (var_1_37 + var_1_38))) : (var_1_36 == ((float) (max (((var_1_39 - var_1_40) + (min (var_1_38 , var_1_37))) , (var_1_41 + var_1_42))))))) && ((var_1_20 != var_1_34) ? ((var_1_28 <= (var_1_19 / var_1_26)) ? (((max (var_1_21 , var_1_24)) == var_1_33) ? (var_1_43 == ((unsigned long int) (min (var_1_110 , var_1_103)))) : (var_1_43 == ((unsigned long int) (min (var_1_34 , (min (var_1_19 , var_1_33))))))) : 1) : 1)) && (var_1_5 ? (var_1_45 == ((unsigned long int) (((var_1_46 - var_1_34) - (1000000000u - var_1_82)) + var_1_26))) : (var_1_45 == ((unsigned long int) (var_1_82 + (max (var_1_33 , (var_1_46 - var_1_63)))))))) && ((var_1_87 != var_1_40) ? (var_1_47 == ((signed short int) (max (1 , var_1_82)))) : ((var_1_82 <= (var_1_19 / (var_1_33 - var_1_49))) ? ((var_1_21 != (var_1_88 * var_1_33)) ? (var_1_47 == ((signed short int) ((var_1_20 + (var_1_21 + var_1_82)) - (var_1_50 - var_1_88)))) : (var_1_47 == ((signed short int) ((var_1_20 - (var_1_51 - var_1_88)) + (var_1_21 - var_1_19))))) : ((var_1_7 && var_1_30) ? (var_1_47 == ((signed short int) (max (((var_1_82 - var_1_19) + (var_1_20 - var_1_21)) , (var_1_51 + var_1_88))))) : 1)))) && ((! var_1_71) ? ((var_1_114 < var_1_21) ? (var_1_52 == ((double) var_1_39)) : (var_1_52 == ((double) ((var_1_40 - var_1_39) + var_1_37)))) : (var_1_52 == ((double) (var_1_42 + (abs (var_1_40))))))) && ((var_1_14 > var_1_87) ? (var_1_104 ? (var_1_53 == ((unsigned char) var_1_19)) : 1) : 1)) && ((var_1_51 > (var_1_34 / var_1_50)) ? (var_1_54 == ((double) (max (var_1_41 , var_1_37)))) : (var_1_54 == ((double) (max (((max (var_1_15 , var_1_13)) - var_1_40) , var_1_42)))))) && (((max (var_1_114 , var_1_34)) <= var_1_49) ? (var_1_55 == ((unsigned short int) (var_1_26 + var_1_49))) : 1)) && (var_1_30 ? (var_1_56 == ((signed char) ((var_1_57 + var_1_58) - (var_1_59 + var_1_60)))) : 1)) && ((((min (var_1_19 , var_1_24)) == -10) && (var_1_7 || var_1_1)) ? (var_1_61 == ((double) (max (var_1_14 , var_1_38)))) : (var_1_61 == ((double) (max (var_1_37 , (max ((max (var_1_42 , var_1_14)) , var_1_41)))))))) && (((var_1_49 / var_1_26) > var_1_63) ? ((-25 > ((var_1_26 + var_1_110) / var_1_49)) ? (var_1_62 == ((unsigned short int) (var_1_57 + 4))) : 1) : (var_1_62 == ((unsigned short int) var_1_57)))) && ((((var_1_33 - var_1_58) >= var_1_49) && var_1_30) ? (var_1_63 == ((signed long int) ((var_1_19 + (last_1_var_1_62 + last_1_var_1_82)) + last_1_var_1_107))) : 1)) && (((var_1_33 | var_1_63) < var_1_49) ? (((var_1_69 / (max (var_1_65 , var_1_66))) < var_1_42) ? (var_1_64 == ((signed char) (max ((max (var_1_58 , var_1_57)) , var_1_60)))) : (var_1_64 == ((signed char) var_1_57))) : (var_1_64 == ((signed char) var_1_57)))) && ((var_1_104 || var_1_1) ? ((var_1_61 != (var_1_8 + (var_1_12 * var_1_39))) ? (var_1_67 == ((signed long int) (min (var_1_19 , var_1_49)))) : (var_1_67 == ((signed long int) (min (var_1_68 , var_1_94))))) : (var_1_67 == ((signed long int) (min (10 , var_1_19)))))) && ((var_1_59 >= (var_1_57 - var_1_21)) ? (var_1_69 == ((double) (var_1_70 - var_1_40))) : 1)) && ((var_1_16 <= var_1_11) ? (var_1_71 == ((unsigned char) (! var_1_30))) : 1)) && (var_1_105 ? ((var_1_58 == (min (var_1_45 , (var_1_20 - 10)))) ? (var_1_73 == ((float) (var_1_39 - var_1_16))) : (var_1_73 == ((float) (max (((max (var_1_41 , var_1_38)) + (var_1_74 + var_1_75)) , var_1_39))))) : (((var_1_28 - var_1_57) >= var_1_86) ? (((var_1_1 && var_1_71) && (var_1_17 > (var_1_28 + var_1_49))) ? (var_1_73 == ((float) (63.2f + var_1_37))) : (var_1_73 == ((float) (var_1_39 + ((var_1_76 + var_1_77) - var_1_40))))) : (var_1_73 == ((float) ((min (var_1_14 , (max (var_1_13 , var_1_70)))) - var_1_76)))))) && ((((var_1_79 - last_1_var_1_92) - var_1_25) > (var_1_80 - last_1_var_1_108)) ? (last_1_var_1_1 ? (var_1_78 == ((unsigned long int) (var_1_81 - (var_1_46 - (last_1_var_1_67 + var_1_58))))) : ((last_1_var_1_106 != last_1_var_1_54) ? (var_1_78 == ((unsigned long int) (abs (var_1_81 - var_1_28)))) : (var_1_78 == ((unsigned long int) (abs (last_1_var_1_108)))))) : (((abs (abs (last_1_var_1_8))) <= var_1_14) ? (var_1_78 == ((unsigned long int) (abs (last_1_var_1_22 + var_1_26)))) : ((var_1_42 < (- (var_1_38 / 0.1f))) ? (var_1_78 == ((unsigned long int) (var_1_81 - last_1_var_1_32))) : (((var_1_20 - (64 - var_1_58)) < (var_1_26 / -5)) ? (var_1_78 == ((unsigned long int) (min (8u , last_1_var_1_92)))) : (var_1_78 == ((unsigned long int) last_1_var_1_92))))))) && ((! (var_1_5 || (last_1_var_1_104 && last_1_var_1_1))) ? (var_1_82 == ((signed long int) (((min (var_1_83 , var_1_84)) - (var_1_85 - last_1_var_1_43)) - last_1_var_1_92))) : (var_1_82 == ((signed long int) (16 - var_1_85))))) && (var_1_105 ? (var_1_86 == ((signed long int) (var_1_60 - var_1_26))) : (var_1_86 == ((signed long int) (16 + last_1_var_1_86))))) && ((var_1_46 > (var_1_79 - var_1_86)) ? ((! (var_1_31 <= 8)) ? (var_1_87 == ((double) (min (var_1_74 , (max ((min (var_1_12 , 24.375)) , var_1_75)))))) : ((var_1_76 != var_1_54) ? (var_1_87 == ((double) (((var_1_76 + var_1_77) + (min (var_1_39 , var_1_40))) - var_1_16))) : (var_1_87 == ((double) (var_1_41 + (var_1_39 - (var_1_76 + var_1_77))))))) : 1)) && ((var_1_25 != var_1_46) ? (var_1_88 == ((unsigned char) (var_1_89 - (var_1_59 + 32)))) : 1)) && ((var_1_34 < (max (var_1_84 , var_1_89))) ? (((var_1_26 + var_1_102) < (var_1_49 - var_1_50)) ? (var_1_90 == ((unsigned long int) (max (var_1_91 , var_1_103)))) : (var_1_90 == ((unsigned long int) 8u))) : 1)) && ((var_1_39 != (499.1f / 50.3f)) ? ((! (var_1_79 > 128u)) ? (var_1_92 == ((signed long int) (var_1_114 + (var_1_57 - var_1_85)))) : 1) : 1)) && ((var_1_11 <= (- (abs (var_1_70)))) ? (((var_1_67 % var_1_83) > var_1_114) ? (var_1_93 == ((float) (max (var_1_14 , var_1_74)))) : (var_1_93 == ((float) ((5.5f + var_1_76) + var_1_39)))) : (var_1_93 == ((float) var_1_12)))) && (last_1_var_1_105 ? ((1 <= (abs (var_1_25))) ? ((((max (var_1_46 , var_1_85)) < last_1_var_1_78) && var_1_7) ? (((var_1_19 << last_1_var_1_115) >= last_1_var_1_94) ? (var_1_94 == ((unsigned long int) ((var_1_46 + (max (1848896192u , var_1_95))) - ((2147333992u - var_1_25) - last_1_var_1_112)))) : (var_1_94 == ((unsigned long int) var_1_96))) : ((! last_1_var_1_71) ? (var_1_94 == ((unsigned long int) (var_1_81 - (var_1_46 - 16u)))) : (var_1_94 == ((unsigned long int) (max (var_1_89 , (abs (max (last_1_var_1_78 , var_1_81))))))))) : (var_1_94 == ((unsigned long int) (min (var_1_50 , (last_1_var_1_107 + var_1_85)))))) : (var_1_94 == ((unsigned long int) var_1_28)))) && ((! var_1_104) ? (var_1_97 == ((unsigned char) var_1_58)) : (var_1_97 == ((unsigned char) var_1_98)))) && (((var_1_49 >= (var_1_32 * var_1_28)) || (var_1_38 != var_1_109)) ? ((var_1_79 <= var_1_96) ? (var_1_99 == ((unsigned char) ((var_1_100 - var_1_60) + var_1_19))) : (var_1_99 == ((unsigned char) (abs (max (var_1_58 , 200)))))) : (var_1_99 == ((unsigned char) ((var_1_100 - (5 + var_1_101)) + var_1_21))))) && (var_1_102 == ((signed long int) (abs (var_1_94))))) && (((var_1_28 - var_1_60) != (var_1_19 * (min (var_1_45 , var_1_32)))) ? ((var_1_105 || var_1_30) ? (var_1_103 == ((unsigned short int) var_1_98)) : (var_1_103 == ((unsigned short int) (min (var_1_60 , var_1_98))))) : (var_1_103 == ((unsigned short int) var_1_100)))) && (var_1_104 == ((unsigned char) var_1_5))) && (var_1_71 ? (var_1_105 == ((unsigned char) var_1_7)) : 1)) && (var_1_106 == ((double) var_1_77))) && (var_1_105 ? (var_1_107 == ((signed long int) var_1_57)) : 1)) && (var_1_108 == ((unsigned short int) var_1_112))) && (var_1_7 ? (var_1_109 == ((double) 99.4)) : 1)) && (var_1_5 ? (var_1_110 == ((signed long int) -10000)) : (var_1_110 == ((signed long int) var_1_99)))) && (var_1_111 == ((signed short int) var_1_49))) && (var_1_104 ? (var_1_112 == ((unsigned long int) var_1_101)) : (var_1_112 == ((unsigned long int) var_1_57)))) && (var_1_113 == ((float) var_1_75))) && (var_1_1 ? (var_1_114 == ((unsigned long int) var_1_100)) : (var_1_114 == ((unsigned long int) last_1_var_1_114)))) && (((var_1_66 * var_1_41) != var_1_15) ? (var_1_115 == ((unsigned long int) (abs (var_1_84)))) : (((var_1_70 / var_1_66) >= var_1_76) ? (var_1_115 == ((unsigned long int) 5u)) : (var_1_115 == ((unsigned long int) var_1_67))))
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
