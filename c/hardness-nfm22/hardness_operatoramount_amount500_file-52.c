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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch52Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 128.1;
unsigned char var_1_3 = 5;
float var_1_5 = 31.4;
float var_1_6 = 32.5;
float var_1_7 = 9.6;
unsigned char var_1_8 = 1;
unsigned char var_1_10 = 1;
unsigned short int var_1_11 = 64;
unsigned short int var_1_13 = 60712;
unsigned short int var_1_14 = 58826;
double var_1_15 = 999999999.5;
unsigned char var_1_18 = 10;
unsigned long int var_1_19 = 3520799115;
unsigned char var_1_20 = 128;
unsigned char var_1_21 = 2;
float var_1_22 = 64.75;
float var_1_23 = 999999999999999.4;
float var_1_24 = 3.5;
float var_1_25 = 3.6;
signed short int var_1_26 = 16;
unsigned long int var_1_27 = 2;
unsigned long int var_1_28 = 1855970761;
double var_1_29 = 7.8;
double var_1_30 = 3.6;
float var_1_31 = 64.6;
double var_1_32 = 32.2;
unsigned char var_1_34 = 0;
float var_1_35 = 255.5;
float var_1_36 = 50.8;
float var_1_37 = 5.4;
unsigned char var_1_38 = 200;
unsigned short int var_1_39 = 25;
unsigned short int var_1_40 = 18951;
unsigned short int var_1_41 = 20612;
float var_1_42 = 7.5;
float var_1_43 = 0.0;
float var_1_44 = 0.0;
float var_1_45 = 9.25;
float var_1_46 = 127.625;
float var_1_47 = 0.0;
float var_1_48 = 32.1;
float var_1_49 = 3.8;
unsigned short int var_1_50 = 2;
unsigned short int var_1_51 = 20308;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 1;
signed char var_1_55 = 0;
signed char var_1_56 = 4;
signed char var_1_57 = 4;
signed char var_1_58 = -50;
unsigned char var_1_59 = 128;
unsigned char var_1_60 = 64;
unsigned char var_1_61 = 64;
double var_1_62 = 16.2;
signed char var_1_63 = -2;
float var_1_64 = 4.5;
double var_1_65 = 31.95;
signed long int var_1_66 = -32;
float var_1_67 = 100000000000000.8;
float var_1_68 = 100000000000000.6;
float var_1_69 = 64.25;
unsigned short int var_1_70 = 64;
unsigned short int var_1_71 = 0;
double var_1_73 = 7.96;
signed char var_1_74 = -5;
signed char var_1_76 = -2;
signed char var_1_78 = -50;
unsigned long int var_1_79 = 32;
unsigned long int var_1_80 = 3215034261;
signed char var_1_82 = 1;
double var_1_83 = 63.25;
unsigned short int var_1_84 = 4;
double var_1_85 = 256.4;
unsigned short int var_1_86 = 256;
signed short int var_1_87 = 10;
signed char var_1_88 = -5;
double var_1_89 = 31.4;
double var_1_90 = 9999999.4;
unsigned short int var_1_91 = 10;
double var_1_93 = 49.75;
double var_1_96 = 24.58;
double var_1_97 = 25.8;
signed char var_1_98 = -2;
unsigned long int var_1_99 = 4;
unsigned char var_1_100 = 1;
unsigned char var_1_101 = 0;
unsigned char var_1_102 = 0;
unsigned long int var_1_103 = 64;
unsigned char var_1_104 = 64;
float var_1_105 = 3.5;
double var_1_106 = 32.5;
unsigned short int var_1_107 = 8;
double var_1_108 = 7.2;
double var_1_109 = 16.25;
unsigned long int var_1_110 = 16;
unsigned char var_1_111 = 100;
unsigned char var_1_112 = 0;
unsigned char var_1_113 = 0;
float var_1_114 = 10000000000000.2;
float var_1_115 = 0.15;
double var_1_116 = 999.125;
unsigned long int var_1_117 = 200;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_18 = 10;
float last_1_var_1_42 = 7.5;
unsigned short int last_1_var_1_50 = 2;
signed long int last_1_var_1_66 = -32;
float last_1_var_1_67 = 100000000000000.8;
unsigned short int last_1_var_1_70 = 64;
signed char last_1_var_1_82 = 1;
double last_1_var_1_89 = 31.4;
double last_1_var_1_93 = 49.75;
unsigned char last_1_var_1_100 = 1;
unsigned char last_1_var_1_101 = 0;
unsigned char last_1_var_1_112 = 0;
double last_1_var_1_116 = 999.125;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req45Batch52Amount500
	if (var_1_54) {
		var_1_99 = var_1_60;
	} else {
		var_1_99 = last_1_var_1_18;
	}


	// From: Req35Batch52Amount500
	if (last_1_var_1_67 <= (- last_1_var_1_89)) {
		var_1_84 = (var_1_41 + var_1_3);
	} else {
		var_1_84 = var_1_13;
	}


	// From: Req32Batch52Amount500
	signed long int stepLocal_25 = var_1_51 + (var_1_14 * var_1_20);
	if (stepLocal_25 < var_1_28) {
		var_1_79 = (max (((abs (var_1_80)) - last_1_var_1_50) , last_1_var_1_82));
	}


	// From: Req18Batch52Amount500
	unsigned char stepLocal_14 = last_1_var_1_101;
	if (stepLocal_14 || (! var_1_10)) {
		if ((max (var_1_43 , var_1_30)) >= last_1_var_1_116) {
			var_1_52 = (var_1_10 && (last_1_var_1_112 || (var_1_53 && var_1_54)));
		}
	} else {
		var_1_52 = var_1_54;
	}


	// From: Req12Batch52Amount500
	var_1_34 = (var_1_52 || (! 0));


	// From: Req21Batch52Amount500
	if (var_1_54) {
		var_1_62 = (min ((min (var_1_45 , (var_1_5 + var_1_48))) , var_1_49));
	}


	// From: Req23Batch52Amount500
	if (var_1_10) {
		var_1_64 = var_1_49;
	}


	// From: Req29Batch52Amount500
	var_1_73 = (var_1_43 - var_1_47);


	// From: Req31Batch52Amount500
	var_1_78 = (var_1_57 - 5);


	// From: Req34Batch52Amount500
	unsigned long int stepLocal_26 = min (var_1_38 , var_1_99);
	if (stepLocal_26 > var_1_58) {
		var_1_83 = var_1_6;
	} else {
		if ((abs (var_1_25 - var_1_36)) >= 255.5f) {
			var_1_83 = (min (var_1_37 , (var_1_43 - var_1_48)));
		} else {
			var_1_83 = (var_1_6 + var_1_36);
		}
	}


	// From: Req36Batch52Amount500
	if (var_1_10) {
		var_1_85 = ((max (var_1_5 , var_1_6)) + (var_1_48 + (min (var_1_68 , var_1_69))));
	} else {
		var_1_85 = (abs (var_1_69));
	}


	// From: Req39Batch52Amount500
	var_1_88 = (var_1_56 + ((max (var_1_57 , var_1_3)) - 10));


	// From: Req44Batch52Amount500
	if (var_1_10) {
		var_1_98 = var_1_38;
	}


	// From: Req46Batch52Amount500
	if (last_1_var_1_100) {
		var_1_100 = var_1_54;
	}


	// From: Req47Batch52Amount500
	var_1_101 = var_1_102;


	// From: Req49Batch52Amount500
	var_1_104 = var_1_56;


	// From: Req50Batch52Amount500
	if (var_1_53) {
		var_1_105 = var_1_30;
	}


	// From: Req51Batch52Amount500
	var_1_106 = var_1_7;


	// From: Req52Batch52Amount500
	var_1_107 = var_1_20;


	// From: Req53Batch52Amount500
	if (var_1_101) {
		var_1_108 = var_1_47;
	} else {
		var_1_108 = var_1_7;
	}


	// From: Req54Batch52Amount500
	var_1_109 = var_1_44;


	// From: Req56Batch52Amount500
	if (var_1_100) {
		var_1_111 = var_1_61;
	} else {
		var_1_111 = var_1_20;
	}


	// From: Req57Batch52Amount500
	if (var_1_102) {
		var_1_112 = var_1_113;
	}


	// From: Req58Batch52Amount500
	if (var_1_53) {
		var_1_114 = var_1_115;
	}


	// From: Req55Batch52Amount500
	if (var_1_101) {
		var_1_110 = var_1_99;
	} else {
		var_1_110 = var_1_99;
	}


	// From: Req17Batch52Amount500
	if (var_1_21 <= (var_1_40 | var_1_14)) {
		if (((var_1_38 >> var_1_110) > (max (var_1_79 , var_1_111))) && var_1_100) {
			var_1_50 = var_1_40;
		} else {
			var_1_50 = var_1_3;
		}
	} else {
		var_1_50 = (max (128 , ((var_1_40 + var_1_51) - var_1_111)));
	}


	// From: Req8Batch52Amount500
	signed long int stepLocal_5 = max ((var_1_3 >> var_1_79) , -1);
	if (stepLocal_5 < var_1_78) {
		var_1_27 = (2510364339u - ((var_1_28 - var_1_21) - var_1_13));
	}


	// From: Req41Batch52Amount500
	if (var_1_34 || var_1_100) {
		var_1_90 = (abs (var_1_6));
	} else {
		var_1_90 = var_1_44;
	}


	// From: Req4Batch52Amount500
	if ((var_1_64 / 24.5) <= var_1_114) {
		if (var_1_52) {
			var_1_15 = (var_1_5 + var_1_6);
		}
	}


	// From: Req59Batch52Amount500
	if ((var_1_61 ^ (var_1_14 - var_1_20)) > (min (var_1_60 , var_1_50))) {
		var_1_116 = (min (8.75 , (var_1_69 + (var_1_68 + var_1_96))));
	} else {
		var_1_116 = var_1_49;
	}


	// From: Req3Batch52Amount500
	if (! (! var_1_52)) {
		var_1_11 = ((var_1_3 + 128) + var_1_104);
	} else {
		var_1_11 = (((min (var_1_13 , var_1_14)) - var_1_3) - var_1_104);
	}


	// From: Req14Batch52Amount500
	signed long int stepLocal_9 = (var_1_14 * var_1_21) + var_1_20;
	if (stepLocal_9 >= (var_1_3 - var_1_13)) {
		var_1_39 = ((min (var_1_20 , var_1_3)) + (var_1_21 + (max (var_1_88 , var_1_38))));
	} else {
		var_1_39 = ((var_1_40 - var_1_20) + (var_1_41 - (var_1_88 + var_1_38)));
	}


	// From: Req19Batch52Amount500
	signed long int stepLocal_16 = var_1_107 - (max (var_1_51 , var_1_41));
	unsigned long int stepLocal_15 = var_1_28;
	if (stepLocal_16 <= var_1_20) {
		if (stepLocal_15 <= var_1_13) {
			var_1_55 = (min ((var_1_3 - 4) , ((var_1_56 - var_1_57) + var_1_58)));
		} else {
			var_1_55 = (var_1_58 + var_1_57);
		}
	}


	// From: Req24Batch52Amount500
	if (var_1_112) {
		var_1_65 = (var_1_37 - var_1_36);
	} else {
		var_1_65 = var_1_45;
	}


	// From: Req25Batch52Amount500
	unsigned short int stepLocal_19 = var_1_51;
	if (var_1_52) {
		var_1_66 = (abs (var_1_51 + var_1_60));
	} else {
		if (stepLocal_19 > var_1_40) {
			var_1_66 = (min (var_1_13 , (var_1_38 - var_1_111)));
		} else {
			var_1_66 = (min (last_1_var_1_66 , var_1_58));
		}
	}


	// From: Req26Batch52Amount500
	signed long int stepLocal_21 = 100;
	unsigned short int stepLocal_20 = var_1_13;
	if ((var_1_61 << var_1_19) != stepLocal_21) {
		if (var_1_53) {
			var_1_67 = var_1_36;
		} else {
			var_1_67 = (var_1_5 + ((var_1_47 - var_1_48) - var_1_36));
		}
	} else {
		if ((var_1_21 << var_1_57) < stepLocal_20) {
			if (var_1_100) {
				var_1_67 = (256.9f + (var_1_48 + (var_1_68 + var_1_69)));
			} else {
				var_1_67 = ((var_1_48 + var_1_69) + var_1_7);
			}
		}
	}


	// From: Req38Batch52Amount500
	unsigned short int stepLocal_27 = var_1_107;
	if (stepLocal_27 <= ((var_1_14 / var_1_38) * var_1_57)) {
		if (var_1_49 >= (var_1_69 / (min (var_1_47 , var_1_43)))) {
			if (var_1_52) {
				var_1_87 = ((var_1_38 - var_1_84) + ((var_1_61 + var_1_3) + var_1_56));
			}
		} else {
			var_1_87 = (var_1_61 - (max (var_1_38 , var_1_84)));
		}
	}


	// From: Req42Batch52Amount500
	if (var_1_49 > (var_1_24 / var_1_44)) {
		var_1_91 = var_1_111;
	}


	// From: Req60Batch52Amount500
	var_1_117 = var_1_91;


	// From: Req2Batch52Amount500
	unsigned long int stepLocal_1 = (var_1_3 + var_1_55) + var_1_99;
	if ((-2 / -10000000) != stepLocal_1) {
		var_1_8 = (var_1_52 || var_1_10);
	}


	// From: Req28Batch52Amount500
	unsigned char stepLocal_24 = var_1_43 != var_1_15;
	unsigned long int stepLocal_23 = var_1_110;
	unsigned char stepLocal_22 = var_1_101;
	if (stepLocal_24 || var_1_34) {
		if (var_1_84 >= stepLocal_23) {
			var_1_71 = (((min (58170 , var_1_14)) - var_1_57) - (max ((var_1_20 + 4) , var_1_79)));
		}
	} else {
		if (stepLocal_22 || ((var_1_67 > var_1_114) && var_1_54)) {
			if (var_1_48 > var_1_45) {
				var_1_71 = (min (var_1_60 , var_1_61));
			} else {
				var_1_71 = (var_1_14 - var_1_3);
			}
		}
	}


	// From: Req5Batch52Amount500
	unsigned long int stepLocal_3 = var_1_19 - (var_1_14 + var_1_71);
	signed long int stepLocal_2 = -256 / var_1_13;
	if (! var_1_8) {
		if (var_1_84 <= stepLocal_2) {
			if (stepLocal_3 < var_1_13) {
				var_1_18 = (var_1_20 - var_1_3);
			} else {
				var_1_18 = (128 - (min (var_1_3 , var_1_21)));
			}
		} else {
			var_1_18 = (min ((var_1_21 + (var_1_3 + 32)) , var_1_20));
		}
	} else {
		var_1_18 = (var_1_20 - var_1_3);
	}


	// From: Req16Batch52Amount500
	if (var_1_8) {
		var_1_46 = ((var_1_37 + (var_1_47 - var_1_48)) - (max ((var_1_36 + var_1_49) , var_1_44)));
	}


	// From: Req1Batch52Amount500
	unsigned long int stepLocal_0 = (var_1_84 >> var_1_3) | var_1_117;
	if (stepLocal_0 >= 10) {
		var_1_1 = ((min (var_1_5 , var_1_6)) + var_1_7);
	} else {
		var_1_1 = (abs (var_1_5 + var_1_7));
	}


	// From: Req20Batch52Amount500
	unsigned long int stepLocal_17 = var_1_14 & var_1_27;
	if (var_1_53) {
		var_1_59 = (max (var_1_3 , (var_1_21 + var_1_57)));
	} else {
		if ((max (var_1_91 , (10 / var_1_38))) >= stepLocal_17) {
			var_1_59 = 25;
		} else {
			var_1_59 = (min (var_1_56 , ((var_1_60 + var_1_61) - 1)));
		}
	}


	// From: Req10Batch52Amount500
	if ((- var_1_65) <= var_1_90) {
		var_1_31 = var_1_23;
	} else {
		var_1_31 = var_1_5;
	}


	// From: Req33Batch52Amount500
	if (var_1_31 <= var_1_25) {
		var_1_82 = (max ((var_1_3 - 8) , (var_1_56 + -1)));
	}


	// From: Req6Batch52Amount500
	signed long int stepLocal_4 = ~ var_1_91;
	if ((var_1_20 - (min (var_1_3 , var_1_21))) > stepLocal_4) {
		var_1_22 = ((max (var_1_23 , var_1_24)) - var_1_25);
	} else {
		var_1_22 = var_1_25;
	}


	// From: Req27Batch52Amount500
	if ((16u + var_1_18) >= last_1_var_1_70) {
		var_1_70 = (var_1_13 - var_1_61);
	} else {
		var_1_70 = (var_1_18 + var_1_61);
	}


	// From: Req30Batch52Amount500
	if (! (var_1_31 >= (var_1_36 / var_1_44))) {
		var_1_74 = (min (var_1_76 , (var_1_58 + var_1_57)));
	} else {
		if ((31.55f * (max (var_1_85 , var_1_46))) <= var_1_116) {
			if (var_1_8 && var_1_53) {
				var_1_74 = (max ((max (var_1_38 , var_1_76)) , (var_1_56 - var_1_3)));
			}
		} else {
			var_1_74 = (var_1_57 + var_1_56);
		}
	}


	// From: Req43Batch52Amount500
	unsigned long int stepLocal_33 = var_1_28;
	unsigned long int stepLocal_32 = min (var_1_76 , var_1_110);
	unsigned short int stepLocal_31 = var_1_39;
	unsigned char stepLocal_30 = (min (var_1_59 , var_1_104)) > var_1_40;
	signed long int stepLocal_29 = var_1_66 * var_1_87;
	unsigned char stepLocal_28 = var_1_100;
	if (stepLocal_28 || (10 <= var_1_11)) {
		if (var_1_10) {
			var_1_93 = ((max ((var_1_69 + 128.75) , var_1_6)) + var_1_47);
		}
	} else {
		if ((var_1_56 <= var_1_70) && stepLocal_30) {
			if ((max ((var_1_38 / var_1_40) , (3873127605u - var_1_66))) <= stepLocal_33) {
				var_1_93 = (var_1_37 + var_1_6);
			} else {
				if ((var_1_21 - var_1_3) < stepLocal_32) {
					if (last_1_var_1_93 <= var_1_62) {
						if ((var_1_41 * var_1_14) < stepLocal_31) {
							var_1_93 = var_1_24;
						} else {
							var_1_93 = ((var_1_49 - (var_1_96 + var_1_48)) + (var_1_69 + var_1_68));
						}
					} else {
						var_1_93 = (abs (var_1_6));
					}
				} else {
					var_1_93 = (var_1_97 - var_1_23);
				}
			}
		} else {
			if (stepLocal_29 >= var_1_3) {
				if (var_1_53) {
					var_1_93 = (var_1_69 + var_1_6);
				} else {
					if (var_1_101) {
						var_1_93 = var_1_6;
					}
				}
			} else {
				var_1_93 = var_1_49;
			}
		}
	}


	// From: Req15Batch52Amount500
	unsigned char stepLocal_13 = var_1_59;
	unsigned char stepLocal_12 = var_1_112;
	unsigned char stepLocal_11 = (var_1_90 != var_1_1) || (var_1_108 <= var_1_7);
	unsigned char stepLocal_10 = var_1_20;
	if ((1u / var_1_19) == stepLocal_10) {
		if (((var_1_71 + var_1_104) / (max (var_1_20 , var_1_38))) < stepLocal_13) {
			if (stepLocal_11 || (last_1_var_1_42 == (max (var_1_25 , var_1_46)))) {
				var_1_42 = var_1_30;
			}
		} else {
			if (var_1_34 && stepLocal_12) {
				var_1_42 = ((var_1_43 - var_1_37) - (var_1_44 - 4.25f));
			}
		}
	} else {
		if (! var_1_112) {
			var_1_42 = (var_1_5 + var_1_36);
		} else {
			var_1_42 = var_1_45;
		}
	}


	// From: Req37Batch52Amount500
	if (var_1_22 == var_1_42) {
		var_1_86 = (var_1_20 + ((min (var_1_51 , var_1_41)) - (var_1_60 + var_1_56)));
	} else {
		var_1_86 = ((min (var_1_13 , var_1_14)) - (min (var_1_38 , var_1_59)));
	}


	// From: Req11Batch52Amount500
	unsigned short int stepLocal_7 = var_1_70;
	unsigned char stepLocal_6 = var_1_52;
	if (stepLocal_6 || ((min (var_1_30 , var_1_25)) <= var_1_22)) {
		if (stepLocal_7 >= (var_1_13 / var_1_20)) {
			var_1_32 = var_1_7;
		} else {
			var_1_32 = 16.25;
		}
	}


	// From: Req22Batch52Amount500
	unsigned short int stepLocal_18 = var_1_51;
	if (var_1_21 >= stepLocal_18) {
		if (var_1_32 >= var_1_23) {
			var_1_63 = var_1_38;
		}
	}


	// From: Req48Batch52Amount500
	if (var_1_53) {
		var_1_103 = var_1_3;
	} else {
		var_1_103 = var_1_86;
	}


	// From: Req7Batch52Amount500
	if (var_1_100) {
		var_1_26 = (((min (var_1_86 , var_1_21)) + var_1_20) - var_1_3);
	}


	// From: Req40Batch52Amount500
	if (var_1_52 || (var_1_47 > (var_1_31 / var_1_44))) {
		if (((-32 | var_1_26) + var_1_79) <= 4) {
			var_1_89 = (var_1_47 + var_1_69);
		} else {
			var_1_89 = var_1_25;
		}
	} else {
		if (var_1_5 < (var_1_46 / var_1_43)) {
			var_1_89 = ((var_1_69 + var_1_48) + (min (var_1_6 , var_1_36)));
		}
	}


	// From: Req13Batch52Amount500
	unsigned char stepLocal_8 = var_1_52 || var_1_10;
	if (var_1_8) {
		var_1_35 = ((max (2.6f , var_1_25)) - var_1_23);
	} else {
		if (var_1_52) {
			var_1_35 = ((var_1_36 + var_1_37) - var_1_23);
		} else {
			if ((var_1_103 > var_1_19) || stepLocal_8) {
				var_1_35 = 99.5f;
			} else {
				var_1_35 = var_1_37;
			}
		}
	}


	// From: Req9Batch52Amount500
	if (var_1_23 > (var_1_32 + var_1_24)) {
		if (var_1_35 >= var_1_65) {
			var_1_29 = var_1_30;
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 16);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 49150);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 49150);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967295);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 127);
	assume_abort_if_not(var_1_20 <= 254);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 1610612735);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 191);
	assume_abort_if_not(var_1_38 <= 255);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 16383);
	assume_abort_if_not(var_1_40 <= 32767);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 16383);
	assume_abort_if_not(var_1_41 <= 32767);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 4611686.018427382800e+12F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= 4611686.018427382800e+12F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -922337.2036854765600e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854765600e+12F && var_1_45 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 2305843.009213691390e+12F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427382800e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691390e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_51 >= 16384);
	assume_abort_if_not(var_1_51 <= 32767);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 63);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= -63);
	assume_abort_if_not(var_1_58 <= 63);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 63);
	assume_abort_if_not(var_1_60 <= 127);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 64);
	assume_abort_if_not(var_1_61 <= 127);
	var_1_68 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_68 >= -115292.1504606845700e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 1152921.504606845700e+12F && var_1_68 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= -115292.1504606845700e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 1152921.504606845700e+12F && var_1_69 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= -127);
	assume_abort_if_not(var_1_76 <= 126);
	var_1_80 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_80 >= 2147483647);
	assume_abort_if_not(var_1_80 <= 4294967294);
	var_1_96 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_96 >= 0.0F && var_1_96 <= -1.0e-20F) || (var_1_96 <= 2305843.009213691390e+12F && var_1_96 >= 1.0e-20F ));
	var_1_97 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_97 >= 0.0F && var_1_97 <= -1.0e-20F) || (var_1_97 <= 9223372.036854765600e+12F && var_1_97 >= 1.0e-20F ));
	var_1_102 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_102 >= 0);
	assume_abort_if_not(var_1_102 <= 0);
	var_1_113 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_113 >= 0);
	assume_abort_if_not(var_1_113 <= 0);
	var_1_115 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_115 >= -922337.2036854765600e+13F && var_1_115 <= -1.0e-20F) || (var_1_115 <= 9223372.036854765600e+12F && var_1_115 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_112 = var_1_112;
	last_1_var_1_116 = var_1_116;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_84 >> var_1_3) | var_1_117) >= 10) ? (var_1_1 == ((float) ((min (var_1_5 , var_1_6)) + var_1_7))) : (var_1_1 == ((float) (abs (var_1_5 + var_1_7))))) && (((-2 / -10000000) != ((var_1_3 + var_1_55) + var_1_99)) ? (var_1_8 == ((unsigned char) (var_1_52 || var_1_10))) : 1)) && ((! (! var_1_52)) ? (var_1_11 == ((unsigned short int) ((var_1_3 + 128) + var_1_104))) : (var_1_11 == ((unsigned short int) (((min (var_1_13 , var_1_14)) - var_1_3) - var_1_104))))) && (((var_1_64 / 24.5) <= var_1_114) ? (var_1_52 ? (var_1_15 == ((double) (var_1_5 + var_1_6))) : 1) : 1)) && ((! var_1_8) ? ((var_1_84 <= (-256 / var_1_13)) ? (((var_1_19 - (var_1_14 + var_1_71)) < var_1_13) ? (var_1_18 == ((unsigned char) (var_1_20 - var_1_3))) : (var_1_18 == ((unsigned char) (128 - (min (var_1_3 , var_1_21)))))) : (var_1_18 == ((unsigned char) (min ((var_1_21 + (var_1_3 + 32)) , var_1_20))))) : (var_1_18 == ((unsigned char) (var_1_20 - var_1_3))))) && (((var_1_20 - (min (var_1_3 , var_1_21))) > (~ var_1_91)) ? (var_1_22 == ((float) ((max (var_1_23 , var_1_24)) - var_1_25))) : (var_1_22 == ((float) var_1_25)))) && (var_1_100 ? (var_1_26 == ((signed short int) (((min (var_1_86 , var_1_21)) + var_1_20) - var_1_3))) : 1)) && (((max ((var_1_3 >> var_1_79) , -1)) < var_1_78) ? (var_1_27 == ((unsigned long int) (2510364339u - ((var_1_28 - var_1_21) - var_1_13)))) : 1)) && ((var_1_23 > (var_1_32 + var_1_24)) ? ((var_1_35 >= var_1_65) ? (var_1_29 == ((double) var_1_30)) : 1) : 1)) && (((- var_1_65) <= var_1_90) ? (var_1_31 == ((float) var_1_23)) : (var_1_31 == ((float) var_1_5)))) && ((var_1_52 || ((min (var_1_30 , var_1_25)) <= var_1_22)) ? ((var_1_70 >= (var_1_13 / var_1_20)) ? (var_1_32 == ((double) var_1_7)) : (var_1_32 == ((double) 16.25))) : 1)) && (var_1_34 == ((unsigned char) (var_1_52 || (! 0))))) && (var_1_8 ? (var_1_35 == ((float) ((max (2.6f , var_1_25)) - var_1_23))) : (var_1_52 ? (var_1_35 == ((float) ((var_1_36 + var_1_37) - var_1_23))) : (((var_1_103 > var_1_19) || (var_1_52 || var_1_10)) ? (var_1_35 == ((float) 99.5f)) : (var_1_35 == ((float) var_1_37)))))) && ((((var_1_14 * var_1_21) + var_1_20) >= (var_1_3 - var_1_13)) ? (var_1_39 == ((unsigned short int) ((min (var_1_20 , var_1_3)) + (var_1_21 + (max (var_1_88 , var_1_38)))))) : (var_1_39 == ((unsigned short int) ((var_1_40 - var_1_20) + (var_1_41 - (var_1_88 + var_1_38))))))) && (((1u / var_1_19) == var_1_20) ? ((((var_1_71 + var_1_104) / (max (var_1_20 , var_1_38))) < var_1_59) ? ((((var_1_90 != var_1_1) || (var_1_108 <= var_1_7)) || (last_1_var_1_42 == (max (var_1_25 , var_1_46)))) ? (var_1_42 == ((float) var_1_30)) : 1) : ((var_1_34 && var_1_112) ? (var_1_42 == ((float) ((var_1_43 - var_1_37) - (var_1_44 - 4.25f)))) : 1)) : ((! var_1_112) ? (var_1_42 == ((float) (var_1_5 + var_1_36))) : (var_1_42 == ((float) var_1_45))))) && (var_1_8 ? (var_1_46 == ((float) ((var_1_37 + (var_1_47 - var_1_48)) - (max ((var_1_36 + var_1_49) , var_1_44))))) : 1)) && ((var_1_21 <= (var_1_40 | var_1_14)) ? ((((var_1_38 >> var_1_110) > (max (var_1_79 , var_1_111))) && var_1_100) ? (var_1_50 == ((unsigned short int) var_1_40)) : (var_1_50 == ((unsigned short int) var_1_3))) : (var_1_50 == ((unsigned short int) (max (128 , ((var_1_40 + var_1_51) - var_1_111))))))) && ((last_1_var_1_101 || (! var_1_10)) ? (((max (var_1_43 , var_1_30)) >= last_1_var_1_116) ? (var_1_52 == ((unsigned char) (var_1_10 && (last_1_var_1_112 || (var_1_53 && var_1_54))))) : 1) : (var_1_52 == ((unsigned char) var_1_54)))) && (((var_1_107 - (max (var_1_51 , var_1_41))) <= var_1_20) ? ((var_1_28 <= var_1_13) ? (var_1_55 == ((signed char) (min ((var_1_3 - 4) , ((var_1_56 - var_1_57) + var_1_58))))) : (var_1_55 == ((signed char) (var_1_58 + var_1_57)))) : 1)) && (var_1_53 ? (var_1_59 == ((unsigned char) (max (var_1_3 , (var_1_21 + var_1_57))))) : (((max (var_1_91 , (10 / var_1_38))) >= (var_1_14 & var_1_27)) ? (var_1_59 == ((unsigned char) 25)) : (var_1_59 == ((unsigned char) (min (var_1_56 , ((var_1_60 + var_1_61) - 1)))))))) && (var_1_54 ? (var_1_62 == ((double) (min ((min (var_1_45 , (var_1_5 + var_1_48))) , var_1_49)))) : 1)) && ((var_1_21 >= var_1_51) ? ((var_1_32 >= var_1_23) ? (var_1_63 == ((signed char) var_1_38)) : 1) : 1)) && (var_1_10 ? (var_1_64 == ((float) var_1_49)) : 1)) && (var_1_112 ? (var_1_65 == ((double) (var_1_37 - var_1_36))) : (var_1_65 == ((double) var_1_45)))) && (var_1_52 ? (var_1_66 == ((signed long int) (abs (var_1_51 + var_1_60)))) : ((var_1_51 > var_1_40) ? (var_1_66 == ((signed long int) (min (var_1_13 , (var_1_38 - var_1_111))))) : (var_1_66 == ((signed long int) (min (last_1_var_1_66 , var_1_58))))))) && (((var_1_61 << var_1_19) != 100) ? (var_1_53 ? (var_1_67 == ((float) var_1_36)) : (var_1_67 == ((float) (var_1_5 + ((var_1_47 - var_1_48) - var_1_36))))) : (((var_1_21 << var_1_57) < var_1_13) ? (var_1_100 ? (var_1_67 == ((float) (256.9f + (var_1_48 + (var_1_68 + var_1_69))))) : (var_1_67 == ((float) ((var_1_48 + var_1_69) + var_1_7)))) : 1))) && (((16u + var_1_18) >= last_1_var_1_70) ? (var_1_70 == ((unsigned short int) (var_1_13 - var_1_61))) : (var_1_70 == ((unsigned short int) (var_1_18 + var_1_61))))) && (((var_1_43 != var_1_15) || var_1_34) ? ((var_1_84 >= var_1_110) ? (var_1_71 == ((unsigned short int) (((min (58170 , var_1_14)) - var_1_57) - (max ((var_1_20 + 4) , var_1_79))))) : 1) : ((var_1_101 || ((var_1_67 > var_1_114) && var_1_54)) ? ((var_1_48 > var_1_45) ? (var_1_71 == ((unsigned short int) (min (var_1_60 , var_1_61)))) : (var_1_71 == ((unsigned short int) (var_1_14 - var_1_3)))) : 1))) && (var_1_73 == ((double) (var_1_43 - var_1_47)))) && ((! (var_1_31 >= (var_1_36 / var_1_44))) ? (var_1_74 == ((signed char) (min (var_1_76 , (var_1_58 + var_1_57))))) : (((31.55f * (max (var_1_85 , var_1_46))) <= var_1_116) ? ((var_1_8 && var_1_53) ? (var_1_74 == ((signed char) (max ((max (var_1_38 , var_1_76)) , (var_1_56 - var_1_3))))) : 1) : (var_1_74 == ((signed char) (var_1_57 + var_1_56)))))) && (var_1_78 == ((signed char) (var_1_57 - 5)))) && (((var_1_51 + (var_1_14 * var_1_20)) < var_1_28) ? (var_1_79 == ((unsigned long int) (max (((abs (var_1_80)) - last_1_var_1_50) , last_1_var_1_82)))) : 1)) && ((var_1_31 <= var_1_25) ? (var_1_82 == ((signed char) (max ((var_1_3 - 8) , (var_1_56 + -1))))) : 1)) && (((min (var_1_38 , var_1_99)) > var_1_58) ? (var_1_83 == ((double) var_1_6)) : (((abs (var_1_25 - var_1_36)) >= 255.5f) ? (var_1_83 == ((double) (min (var_1_37 , (var_1_43 - var_1_48))))) : (var_1_83 == ((double) (var_1_6 + var_1_36)))))) && ((last_1_var_1_67 <= (- last_1_var_1_89)) ? (var_1_84 == ((unsigned short int) (var_1_41 + var_1_3))) : (var_1_84 == ((unsigned short int) var_1_13)))) && (var_1_10 ? (var_1_85 == ((double) ((max (var_1_5 , var_1_6)) + (var_1_48 + (min (var_1_68 , var_1_69)))))) : (var_1_85 == ((double) (abs (var_1_69)))))) && ((var_1_22 == var_1_42) ? (var_1_86 == ((unsigned short int) (var_1_20 + ((min (var_1_51 , var_1_41)) - (var_1_60 + var_1_56))))) : (var_1_86 == ((unsigned short int) ((min (var_1_13 , var_1_14)) - (min (var_1_38 , var_1_59))))))) && ((var_1_107 <= ((var_1_14 / var_1_38) * var_1_57)) ? ((var_1_49 >= (var_1_69 / (min (var_1_47 , var_1_43)))) ? (var_1_52 ? (var_1_87 == ((signed short int) ((var_1_38 - var_1_84) + ((var_1_61 + var_1_3) + var_1_56)))) : 1) : (var_1_87 == ((signed short int) (var_1_61 - (max (var_1_38 , var_1_84)))))) : 1)) && (var_1_88 == ((signed char) (var_1_56 + ((max (var_1_57 , var_1_3)) - 10))))) && ((var_1_52 || (var_1_47 > (var_1_31 / var_1_44))) ? ((((-32 | var_1_26) + var_1_79) <= 4) ? (var_1_89 == ((double) (var_1_47 + var_1_69))) : (var_1_89 == ((double) var_1_25))) : ((var_1_5 < (var_1_46 / var_1_43)) ? (var_1_89 == ((double) ((var_1_69 + var_1_48) + (min (var_1_6 , var_1_36))))) : 1))) && ((var_1_34 || var_1_100) ? (var_1_90 == ((double) (abs (var_1_6)))) : (var_1_90 == ((double) var_1_44)))) && ((var_1_49 > (var_1_24 / var_1_44)) ? (var_1_91 == ((unsigned short int) var_1_111)) : 1)) && ((var_1_100 || (10 <= var_1_11)) ? (var_1_10 ? (var_1_93 == ((double) ((max ((var_1_69 + 128.75) , var_1_6)) + var_1_47))) : 1) : (((var_1_56 <= var_1_70) && ((min (var_1_59 , var_1_104)) > var_1_40)) ? (((max ((var_1_38 / var_1_40) , (3873127605u - var_1_66))) <= var_1_28) ? (var_1_93 == ((double) (var_1_37 + var_1_6))) : (((var_1_21 - var_1_3) < (min (var_1_76 , var_1_110))) ? ((last_1_var_1_93 <= var_1_62) ? (((var_1_41 * var_1_14) < var_1_39) ? (var_1_93 == ((double) var_1_24)) : (var_1_93 == ((double) ((var_1_49 - (var_1_96 + var_1_48)) + (var_1_69 + var_1_68))))) : (var_1_93 == ((double) (abs (var_1_6))))) : (var_1_93 == ((double) (var_1_97 - var_1_23))))) : (((var_1_66 * var_1_87) >= var_1_3) ? (var_1_53 ? (var_1_93 == ((double) (var_1_69 + var_1_6))) : (var_1_101 ? (var_1_93 == ((double) var_1_6)) : 1)) : (var_1_93 == ((double) var_1_49)))))) && (var_1_10 ? (var_1_98 == ((signed char) var_1_38)) : 1)) && (var_1_54 ? (var_1_99 == ((unsigned long int) var_1_60)) : (var_1_99 == ((unsigned long int) last_1_var_1_18)))) && (last_1_var_1_100 ? (var_1_100 == ((unsigned char) var_1_54)) : 1)) && (var_1_101 == ((unsigned char) var_1_102))) && (var_1_53 ? (var_1_103 == ((unsigned long int) var_1_3)) : (var_1_103 == ((unsigned long int) var_1_86)))) && (var_1_104 == ((unsigned char) var_1_56))) && (var_1_53 ? (var_1_105 == ((float) var_1_30)) : 1)) && (var_1_106 == ((double) var_1_7))) && (var_1_107 == ((unsigned short int) var_1_20))) && (var_1_101 ? (var_1_108 == ((double) var_1_47)) : (var_1_108 == ((double) var_1_7)))) && (var_1_109 == ((double) var_1_44))) && (var_1_101 ? (var_1_110 == ((unsigned long int) var_1_99)) : (var_1_110 == ((unsigned long int) var_1_99)))) && (var_1_100 ? (var_1_111 == ((unsigned char) var_1_61)) : (var_1_111 == ((unsigned char) var_1_20)))) && (var_1_102 ? (var_1_112 == ((unsigned char) var_1_113)) : 1)) && (var_1_53 ? (var_1_114 == ((float) var_1_115)) : 1)) && (((var_1_61 ^ (var_1_14 - var_1_20)) > (min (var_1_60 , var_1_50))) ? (var_1_116 == ((double) (min (8.75 , (var_1_69 + (var_1_68 + var_1_96)))))) : (var_1_116 == ((double) var_1_49)))) && (var_1_117 == ((unsigned long int) var_1_91))
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
