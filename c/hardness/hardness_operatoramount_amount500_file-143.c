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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch143Amount500.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 256;
unsigned short int var_1_5 = 54686;
unsigned short int var_1_6 = 64;
signed long int var_1_7 = 50;
unsigned short int var_1_10 = 256;
unsigned short int var_1_11 = 128;
unsigned short int var_1_12 = 1;
unsigned short int var_1_13 = 43448;
unsigned short int var_1_14 = 1000;
unsigned short int var_1_15 = 10000;
unsigned short int var_1_16 = 128;
unsigned short int var_1_17 = 61803;
signed long int var_1_18 = 5;
signed long int var_1_19 = -1;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
double var_1_26 = 7.6;
double var_1_27 = 3.6;
double var_1_28 = 10.1;
double var_1_29 = 1.8;
double var_1_30 = 1000000.8;
signed long int var_1_31 = -32;
signed char var_1_32 = 100;
signed char var_1_33 = -10;
signed char var_1_34 = 4;
signed char var_1_35 = 32;
signed char var_1_36 = 25;
signed char var_1_37 = 50;
unsigned char var_1_38 = 10;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 100;
unsigned char var_1_41 = 32;
unsigned char var_1_42 = 5;
unsigned long int var_1_43 = 10000000;
signed long int var_1_44 = -10;
unsigned char var_1_45 = 0;
float var_1_46 = 10.2;
signed short int var_1_47 = 5;
signed long int var_1_48 = 0;
signed long int var_1_49 = 1000000000;
signed long int var_1_50 = 1000000000;
signed short int var_1_51 = -100;
signed short int var_1_52 = 32;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
signed long int var_1_55 = -16;
signed long int var_1_56 = 1322659684;
float var_1_57 = -0.375;
signed char var_1_58 = -5;
float var_1_59 = 3.875;
double var_1_60 = 15.2;
signed char var_1_62 = -64;
unsigned short int var_1_63 = 4;
unsigned short int var_1_64 = 27182;
unsigned char var_1_65 = 0;
signed char var_1_67 = 64;
signed long int var_1_68 = -256;
double var_1_69 = 50.34;
signed long int var_1_70 = 25;
unsigned char var_1_71 = 25;
float var_1_72 = 4.4;
float var_1_73 = 9.125;
unsigned char var_1_74 = 0;
unsigned short int var_1_75 = 2;
unsigned short int var_1_76 = 5;
unsigned char var_1_77 = 200;
signed short int var_1_78 = -128;
unsigned char var_1_79 = 0;
unsigned long int var_1_80 = 1;
unsigned long int var_1_81 = 2895249486;
float var_1_83 = 99.9;
float var_1_84 = 32.75;
float var_1_85 = 64.25;
signed long int var_1_86 = 1;
signed long int var_1_87 = -64;
unsigned char var_1_88 = 1;
signed char var_1_89 = 5;
signed char var_1_90 = 16;
signed char var_1_91 = 32;
signed char var_1_92 = 32;
unsigned long int var_1_93 = 256;
unsigned long int var_1_95 = 1000000000;
unsigned long int var_1_96 = 2067907303;
float var_1_97 = 10.75;
float var_1_98 = 1.04;
unsigned long int var_1_99 = 2;
signed long int var_1_100 = -50;
double var_1_101 = 10.8;
double var_1_102 = 16.6;
signed short int var_1_103 = 64;
signed short int var_1_104 = -50;
signed short int var_1_105 = -256;
signed short int var_1_106 = -4;
signed long int var_1_107 = -4;
unsigned char var_1_108 = 5;
unsigned long int var_1_109 = 128;
unsigned char var_1_110 = 0;
signed char var_1_111 = -32;
signed char var_1_112 = -32;
unsigned char var_1_113 = 0;
signed long int var_1_114 = -64;
unsigned char var_1_115 = 1;
float var_1_116 = 1.25;
signed short int var_1_117 = -16;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 256;
unsigned long int last_1_var_1_43 = 10000000;
signed long int last_1_var_1_48 = 0;
signed long int last_1_var_1_55 = -16;
signed long int last_1_var_1_68 = -256;
unsigned char last_1_var_1_79 = 0;
signed long int last_1_var_1_100 = -50;
unsigned char last_1_var_1_113 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch143Amount500
	signed long int stepLocal_8 = last_1_var_1_48 / var_1_7;
	signed long int stepLocal_7 = 5 + var_1_7;
	signed long int stepLocal_6 = var_1_7;
	if (last_1_var_1_113) {
		if (var_1_13 < stepLocal_6) {
			if (last_1_var_1_48 > stepLocal_7) {
				if (stepLocal_8 < (var_1_13 - last_1_var_1_100)) {
					var_1_16 = (max (((max (var_1_13 , 53301)) - var_1_10) , 50));
				}
			} else {
				var_1_16 = (min (var_1_10 , var_1_6));
			}
		} else {
			var_1_16 = ((abs (5)) + 128);
		}
	} else {
		var_1_16 = ((var_1_17 - var_1_14) - var_1_6);
	}


	// From: Req2Batch143Amount500
	signed long int stepLocal_5 = last_1_var_1_68;
	unsigned char stepLocal_4 = ! last_1_var_1_79;
	if (last_1_var_1_79 && stepLocal_4) {
		if ((2 - (17647 - 256)) >= stepLocal_5) {
			var_1_15 = (var_1_13 - var_1_10);
		} else {
			var_1_15 = (min (var_1_6 , (abs (var_1_11))));
		}
	}


	// From: Req10Batch143Amount500
	if (! (var_1_27 >= var_1_30)) {
		var_1_43 = last_1_var_1_43;
	} else {
		var_1_43 = var_1_39;
	}


	// From: Req17Batch143Amount500
	var_1_53 = (var_1_22 && var_1_54);


	// From: Req19Batch143Amount500
	var_1_57 = (max (0.5f , (abs (abs (var_1_29)))));


	// From: Req20Batch143Amount500
	if (1000000000u > ((max (var_1_13 , var_1_7)) / var_1_41)) {
		var_1_58 = ((max (var_1_36 , var_1_41)) - var_1_37);
	}


	// From: Req32Batch143Amount500
	var_1_79 = (var_1_54 || var_1_24);


	// From: Req41Batch143Amount500
	unsigned long int stepLocal_36 = var_1_43;
	unsigned short int stepLocal_35 = var_1_76;
	if (var_1_28 <= var_1_27) {
		if (stepLocal_36 <= (last_1_var_1_100 + 4)) {
			if (stepLocal_35 == var_1_19) {
				var_1_100 = var_1_95;
			}
		}
	}


	// From: Req43Batch143Amount500
	if (var_1_79) {
		var_1_102 = var_1_27;
	}


	// From: Req44Batch143Amount500
	if (var_1_53) {
		var_1_103 = var_1_91;
	} else {
		var_1_103 = var_1_14;
	}


	// From: Req45Batch143Amount500
	var_1_104 = var_1_105;


	// From: Req47Batch143Amount500
	var_1_107 = var_1_49;


	// From: Req49Batch143Amount500
	var_1_109 = var_1_77;


	// From: Req50Batch143Amount500
	if (var_1_54) {
		var_1_110 = var_1_24;
	} else {
		var_1_110 = var_1_25;
	}


	// From: Req52Batch143Amount500
	if (var_1_22) {
		var_1_113 = var_1_25;
	} else {
		var_1_113 = var_1_21;
	}


	// From: Req53Batch143Amount500
	var_1_114 = var_1_34;


	// From: Req54Batch143Amount500
	var_1_115 = var_1_21;


	// From: Req55Batch143Amount500
	if (var_1_24) {
		var_1_116 = var_1_27;
	}


	// From: Req4Batch143Amount500
	signed long int stepLocal_9 = var_1_114;
	if (var_1_11 > stepLocal_9) {
		var_1_18 = (var_1_19 - var_1_12);
	}


	// From: Req13Batch143Amount500
	signed long int stepLocal_16 = var_1_107 | var_1_40;
	if (stepLocal_16 == var_1_16) {
		var_1_46 = (min ((var_1_30 + var_1_28) , var_1_27));
	} else {
		var_1_46 = (16.292f + ((max (var_1_30 , 0.5f)) - var_1_29));
	}


	// From: Req14Batch143Amount500
	signed long int stepLocal_17 = var_1_114;
	if ((min (var_1_10 , var_1_33)) < stepLocal_17) {
		var_1_47 = ((min (var_1_36 , var_1_42)) + (var_1_14 + var_1_37));
	} else {
		var_1_47 = (min ((min ((min (-256 , var_1_35)) , var_1_42)) , (var_1_36 + var_1_40)));
	}


	// From: Req24Batch143Amount500
	if ((50 * var_1_100) <= ((max (var_1_109 , var_1_107)) - var_1_12)) {
		if (var_1_24) {
			var_1_63 = (var_1_13 - (var_1_64 - var_1_14));
		} else {
			var_1_63 = ((59231 - 25) - var_1_11);
		}
	} else {
		if (var_1_12 >= (var_1_49 + 25)) {
			if (var_1_22 && var_1_23) {
				var_1_63 = (var_1_17 - (abs (var_1_6)));
			}
		}
	}


	// From: Req25Batch143Amount500
	unsigned char stepLocal_24 = var_1_23;
	if (stepLocal_24 && var_1_79) {
		var_1_65 = (var_1_79 && var_1_24);
	}


	// From: Req28Batch143Amount500
	unsigned char stepLocal_26 = ! var_1_110;
	if ((var_1_114 <= (- var_1_41)) && stepLocal_26) {
		var_1_71 = (min ((min ((var_1_39 - 100) , var_1_37)) , (abs (var_1_40))));
	} else {
		var_1_71 = ((abs (var_1_37)) + 64);
	}


	// From: Req40Batch143Amount500
	signed long int stepLocal_34 = -128;
	if (var_1_113) {
		if (stepLocal_34 > var_1_36) {
			var_1_99 = (abs (var_1_11));
		} else {
			var_1_99 = (var_1_63 + (abs (max (var_1_76 , var_1_12))));
		}
	} else {
		var_1_99 = (abs (var_1_95 + (1813181672u - var_1_91)));
	}


	// From: Req42Batch143Amount500
	signed char stepLocal_37 = var_1_90;
	if (stepLocal_37 == (var_1_63 + var_1_99)) {
		var_1_101 = var_1_27;
	} else {
		var_1_101 = var_1_29;
	}


	// From: Req46Batch143Amount500
	if (var_1_113) {
		var_1_106 = var_1_63;
	} else {
		var_1_106 = var_1_40;
	}


	// From: Req51Batch143Amount500
	if (var_1_115) {
		var_1_111 = var_1_112;
	} else {
		var_1_111 = var_1_42;
	}


	// From: Req1Batch143Amount500
	unsigned char stepLocal_3 = var_1_110;
	signed long int stepLocal_2 = var_1_7;
	unsigned short int stepLocal_1 = var_1_63;
	signed long int stepLocal_0 = var_1_100 / var_1_7;
	if (stepLocal_1 != (min (last_1_var_1_1 , var_1_100))) {
		if ((- var_1_5) >= stepLocal_0) {
			if (stepLocal_3 || var_1_113) {
				var_1_1 = (max (var_1_6 , (var_1_10 + 5)));
			} else {
				var_1_1 = (var_1_6 + (var_1_11 + var_1_12));
			}
		} else {
			var_1_1 = (var_1_12 + (max (var_1_6 , var_1_10)));
		}
	} else {
		if (stepLocal_2 >= last_1_var_1_1) {
			var_1_1 = (var_1_13 - var_1_10);
		} else {
			var_1_1 = (var_1_11 + ((var_1_14 + 64) + var_1_12));
		}
	}


	// From: Req11Batch143Amount500
	signed long int stepLocal_14 = - (- var_1_39);
	if (var_1_63 == stepLocal_14) {
		var_1_44 = (var_1_71 + var_1_11);
	} else {
		var_1_44 = (max (var_1_10 , var_1_36));
	}


	// From: Req18Batch143Amount500
	if (var_1_36 > -16) {
		var_1_55 = (var_1_44 - (max ((var_1_56 - last_1_var_1_55) , (2069455995 - var_1_49))));
	}


	// From: Req26Batch143Amount500
	unsigned long int stepLocal_25 = var_1_99;
	if ((var_1_13 % var_1_64) >= stepLocal_25) {
		var_1_67 = (var_1_41 + var_1_42);
	} else {
		var_1_67 = (min (var_1_34 , var_1_41));
	}


	// From: Req39Batch143Amount500
	if (var_1_114 < var_1_99) {
		if ((var_1_90 * var_1_52) <= var_1_77) {
			var_1_97 = ((min (var_1_73 , var_1_29)) - (var_1_30 + var_1_98));
		} else {
			var_1_97 = ((max (var_1_69 , var_1_30)) - var_1_73);
		}
	}


	// From: Req12Batch143Amount500
	signed long int stepLocal_15 = var_1_114;
	if (! var_1_110) {
		if (stepLocal_15 <= var_1_1) {
			var_1_45 = (! var_1_23);
		} else {
			var_1_45 = ((var_1_36 >= var_1_15) || ((var_1_24 || var_1_21) && (! var_1_25)));
		}
	} else {
		var_1_45 = (! (! (var_1_22 || var_1_21)));
	}


	// From: Req27Batch143Amount500
	if (var_1_45) {
		if (((- var_1_101) / 100.6f) > -0.25f) {
			var_1_68 = -4;
		} else {
			if (var_1_28 >= (var_1_29 - (var_1_30 + var_1_69))) {
				var_1_68 = ((var_1_13 + var_1_36) + var_1_5);
			} else {
				var_1_68 = (max (var_1_99 , (var_1_14 - var_1_15)));
			}
		}
	} else {
		var_1_68 = (last_1_var_1_68 + (var_1_11 + var_1_70));
	}


	// From: Req7Batch143Amount500
	unsigned char stepLocal_11 = var_1_24;
	unsigned char stepLocal_10 = 500 < var_1_68;
	if (var_1_25) {
		if ((var_1_6 < (var_1_5 ^ var_1_16)) || stepLocal_10) {
			if (var_1_110) {
				if (var_1_53 && stepLocal_11) {
					var_1_31 = (abs (32));
				} else {
					var_1_31 = (abs (abs (var_1_14 - var_1_1)));
				}
			}
		} else {
			var_1_31 = (abs (5));
		}
	} else {
		var_1_31 = var_1_1;
	}


	// From: Req8Batch143Amount500
	unsigned short int stepLocal_12 = var_1_11;
	if (stepLocal_12 < var_1_31) {
		var_1_32 = (min ((min (var_1_33 , (min (var_1_34 , var_1_35)))) , (var_1_36 - var_1_37)));
	} else {
		var_1_32 = (max (var_1_37 , var_1_35));
	}


	// From: Req9Batch143Amount500
	signed char stepLocal_13 = var_1_34;
	if (stepLocal_13 < var_1_44) {
		var_1_38 = (var_1_39 - (var_1_40 - (var_1_41 - var_1_42)));
	}


	// From: Req21Batch143Amount500
	if ((var_1_31 + var_1_49) < var_1_12) {
		if (var_1_63 == (var_1_56 / var_1_17)) {
			if ((var_1_41 >> 4) < ((var_1_36 - var_1_31) * var_1_43)) {
				var_1_59 = (var_1_29 - var_1_30);
			}
		} else {
			var_1_59 = ((min (var_1_29 , var_1_30)) - 25.5f);
		}
	}


	// From: Req23Batch143Amount500
	signed char stepLocal_23 = var_1_35;
	if ((var_1_97 * var_1_28) >= 255.8) {
		if (stepLocal_23 != (-1 ^ var_1_14)) {
			var_1_62 = var_1_42;
		}
	}


	// From: Req38Batch143Amount500
	if (var_1_45 || var_1_65) {
		var_1_93 = (((var_1_49 + var_1_95) - var_1_6) + ((max (var_1_56 , var_1_96)) - var_1_37));
	}


	// From: Req33Batch143Amount500
	if ((var_1_81 - (var_1_56 - var_1_49)) <= var_1_42) {
		if ((var_1_99 * var_1_49) <= (min (64 , (abs (1))))) {
			var_1_80 = (min (var_1_37 , (1000000000u + var_1_68)));
		} else {
			var_1_80 = ((abs (2u + var_1_6)) + var_1_104);
		}
	} else {
		if (var_1_11 >= var_1_16) {
			var_1_80 = var_1_18;
		}
	}


	// From: Req5Batch143Amount500
	if ((var_1_31 + var_1_43) < (var_1_5 + var_1_14)) {
		var_1_20 = ((var_1_21 && var_1_22) && var_1_23);
	} else {
		var_1_20 = (var_1_24 || var_1_25);
	}


	// From: Req6Batch143Amount500
	if (var_1_20) {
		var_1_26 = (max (var_1_27 , 4.25));
	} else {
		var_1_26 = (min (var_1_27 , (var_1_28 + (var_1_29 - var_1_30))));
	}


	// From: Req22Batch143Amount500
	signed long int stepLocal_22 = var_1_50;
	unsigned long int stepLocal_21 = var_1_80;
	if (-128 <= stepLocal_21) {
		if (var_1_113) {
			var_1_60 = ((var_1_29 - var_1_30) + var_1_28);
		}
	} else {
		if (stepLocal_22 < var_1_68) {
			var_1_60 = ((var_1_29 + 31.9) - var_1_30);
		}
	}


	// From: Req35Batch143Amount500
	unsigned long int stepLocal_30 = var_1_109;
	if ((- var_1_18) != stepLocal_30) {
		var_1_86 = ((var_1_56 - var_1_6) - var_1_55);
	} else {
		var_1_86 = (max (var_1_56 , (var_1_93 + (var_1_17 + var_1_87))));
	}


	// From: Req37Batch143Amount500
	unsigned long int stepLocal_33 = (abs (var_1_80)) << (var_1_90 - var_1_76);
	unsigned char stepLocal_32 = var_1_107 >= var_1_42;
	if (var_1_79 && stepLocal_32) {
		if (stepLocal_33 >= ((var_1_13 * var_1_64) / var_1_49)) {
			if (var_1_53) {
				var_1_89 = (var_1_42 + ((var_1_41 - var_1_90) - (var_1_91 - 25)));
			} else {
				var_1_89 = (min (var_1_91 , var_1_37));
			}
		} else {
			var_1_89 = (var_1_90 - ((var_1_41 - 5) + (var_1_92 - var_1_76)));
		}
	}


	// From: Req48Batch143Amount500
	if (var_1_20) {
		var_1_108 = var_1_77;
	}


	// From: Req56Batch143Amount500
	signed long int stepLocal_39 = var_1_5 * var_1_86;
	unsigned char stepLocal_38 = (- var_1_102) != 5.6;
	if ((var_1_86 != (var_1_39 * var_1_50)) && stepLocal_38) {
		if (stepLocal_39 >= var_1_14) {
			var_1_117 = var_1_112;
		} else {
			var_1_117 = var_1_86;
		}
	}


	// From: Req15Batch143Amount500
	signed long int stepLocal_19 = var_1_55 & (2 + var_1_55);
	signed long int stepLocal_18 = ~ (max (var_1_37 , var_1_34));
	if (stepLocal_18 <= (10 + var_1_42)) {
		if (var_1_41 < stepLocal_19) {
			var_1_48 = (((var_1_49 + var_1_50) - var_1_80) - var_1_39);
		} else {
			var_1_48 = (abs (var_1_13));
		}
	}


	// From: Req16Batch143Amount500
	signed long int stepLocal_20 = var_1_19;
	if (var_1_65) {
		if (var_1_48 != stepLocal_20) {
			var_1_51 = (var_1_35 + (var_1_34 + var_1_104));
		} else {
			var_1_51 = (max (var_1_12 , var_1_39));
		}
	} else {
		var_1_51 = (var_1_104 + (max (var_1_52 , var_1_14)));
	}


	// From: Req29Batch143Amount500
	signed long int stepLocal_27 = min (var_1_16 , var_1_86);
	if (! var_1_20) {
		if (stepLocal_27 == (25 << var_1_37)) {
			var_1_72 = (var_1_30 + var_1_29);
		} else {
			var_1_72 = (((7.900917138448385E18f - var_1_73) - var_1_29) - var_1_69);
		}
	} else {
		var_1_72 = (var_1_69 - var_1_73);
	}


	// From: Req30Batch143Amount500
	signed char stepLocal_29 = var_1_33;
	signed long int stepLocal_28 = var_1_70 * var_1_48;
	if ((max (var_1_13 , var_1_56)) < stepLocal_29) {
		if (((min (var_1_51 , var_1_14)) << (var_1_75 + var_1_76)) != stepLocal_28) {
			var_1_74 = ((var_1_76 + (var_1_42 + var_1_75)) + var_1_41);
		} else {
			var_1_74 = ((var_1_77 - var_1_76) - (abs (var_1_40 - var_1_75)));
		}
	}


	// From: Req31Batch143Amount500
	if (var_1_65) {
		var_1_78 = ((abs (var_1_42 - var_1_51)) - var_1_68);
	} else {
		var_1_78 = var_1_86;
	}


	// From: Req34Batch143Amount500
	if (var_1_108 >= var_1_14) {
		if ((2.5f / var_1_84) != var_1_69) {
			if (var_1_49 > (~ var_1_93)) {
				var_1_83 = (max ((max (var_1_30 , var_1_69)) , var_1_27));
			}
		} else {
			var_1_83 = (abs (var_1_27));
		}
	} else {
		var_1_83 = (var_1_29 + (var_1_73 + var_1_85));
	}


	// From: Req36Batch143Amount500
	signed long int stepLocal_31 = var_1_107;
	if (stepLocal_31 != var_1_117) {
		var_1_88 = (var_1_23 && var_1_21);
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65535);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	assume_abort_if_not(var_1_7 != 0);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16384);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 32767);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 8192);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 49150);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 2147483646);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -127);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -127);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -127);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -1);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 127);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 63);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 31);
	assume_abort_if_not(var_1_41 <= 63);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 31);
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= 536870911);
	assume_abort_if_not(var_1_49 <= 1073741823);
	var_1_50 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_50 >= 536870911);
	assume_abort_if_not(var_1_50 <= 1073741823);
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= -16383);
	assume_abort_if_not(var_1_52 <= 16383);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 0);
	var_1_56 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_56 >= 1073741823);
	assume_abort_if_not(var_1_56 <= 2147483646);
	var_1_64 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_64 >= 16383);
	assume_abort_if_not(var_1_64 <= 32767);
	var_1_69 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 4611686.018427388000e+12F && var_1_69 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_70 >= -536870911);
	assume_abort_if_not(var_1_70 <= 536870911);
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 2305843.009213691400e+12F && var_1_73 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 12);
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 11);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 190);
	assume_abort_if_not(var_1_77 <= 254);
	var_1_81 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_81 >= 2147483647);
	assume_abort_if_not(var_1_81 <= 4294967295);
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= -922337.2036854776000e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 9223372.036854776000e+12F && var_1_84 >= 1.0e-20F ));
	assume_abort_if_not(var_1_84 != 0.0F);
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= -230584.3009213691400e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 2305843.009213691400e+12F && var_1_85 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_87 >= -536870911);
	assume_abort_if_not(var_1_87 <= 536870911);
	var_1_90 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_90 >= 11);
	assume_abort_if_not(var_1_90 <= 23);
	var_1_91 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_91 >= 31);
	assume_abort_if_not(var_1_91 <= 63);
	var_1_92 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_92 >= 31);
	assume_abort_if_not(var_1_92 <= 63);
	var_1_95 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_95 >= 536870912);
	assume_abort_if_not(var_1_95 <= 1073741823);
	var_1_96 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_96 >= 1073741823);
	assume_abort_if_not(var_1_96 <= 2147483647);
	var_1_98 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_98 >= 0.0F && var_1_98 <= -1.0e-20F) || (var_1_98 <= 4611686.018427383000e+12F && var_1_98 >= 1.0e-20F ));
	var_1_105 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_105 >= -32767);
	assume_abort_if_not(var_1_105 <= 32766);
	var_1_112 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_112 >= -127);
	assume_abort_if_not(var_1_112 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_113 = var_1_113;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_63 != (min (last_1_var_1_1 , var_1_100))) ? (((- var_1_5) >= (var_1_100 / var_1_7)) ? ((var_1_110 || var_1_113) ? (var_1_1 == ((unsigned short int) (max (var_1_6 , (var_1_10 + 5))))) : (var_1_1 == ((unsigned short int) (var_1_6 + (var_1_11 + var_1_12))))) : (var_1_1 == ((unsigned short int) (var_1_12 + (max (var_1_6 , var_1_10)))))) : ((var_1_7 >= last_1_var_1_1) ? (var_1_1 == ((unsigned short int) (var_1_13 - var_1_10))) : (var_1_1 == ((unsigned short int) (var_1_11 + ((var_1_14 + 64) + var_1_12)))))) && ((last_1_var_1_79 && (! last_1_var_1_79)) ? (((2 - (17647 - 256)) >= last_1_var_1_68) ? (var_1_15 == ((unsigned short int) (var_1_13 - var_1_10))) : (var_1_15 == ((unsigned short int) (min (var_1_6 , (abs (var_1_11))))))) : 1)) && (last_1_var_1_113 ? ((var_1_13 < var_1_7) ? ((last_1_var_1_48 > (5 + var_1_7)) ? (((last_1_var_1_48 / var_1_7) < (var_1_13 - last_1_var_1_100)) ? (var_1_16 == ((unsigned short int) (max (((max (var_1_13 , 53301)) - var_1_10) , 50)))) : 1) : (var_1_16 == ((unsigned short int) (min (var_1_10 , var_1_6))))) : (var_1_16 == ((unsigned short int) ((abs (5)) + 128)))) : (var_1_16 == ((unsigned short int) ((var_1_17 - var_1_14) - var_1_6))))) && ((var_1_11 > var_1_114) ? (var_1_18 == ((signed long int) (var_1_19 - var_1_12))) : 1)) && (((var_1_31 + var_1_43) < (var_1_5 + var_1_14)) ? (var_1_20 == ((unsigned char) ((var_1_21 && var_1_22) && var_1_23))) : (var_1_20 == ((unsigned char) (var_1_24 || var_1_25))))) && (var_1_20 ? (var_1_26 == ((double) (max (var_1_27 , 4.25)))) : (var_1_26 == ((double) (min (var_1_27 , (var_1_28 + (var_1_29 - var_1_30)))))))) && (var_1_25 ? (((var_1_6 < (var_1_5 ^ var_1_16)) || (500 < var_1_68)) ? (var_1_110 ? ((var_1_53 && var_1_24) ? (var_1_31 == ((signed long int) (abs (32)))) : (var_1_31 == ((signed long int) (abs (abs (var_1_14 - var_1_1)))))) : 1) : (var_1_31 == ((signed long int) (abs (5))))) : (var_1_31 == ((signed long int) var_1_1)))) && ((var_1_11 < var_1_31) ? (var_1_32 == ((signed char) (min ((min (var_1_33 , (min (var_1_34 , var_1_35)))) , (var_1_36 - var_1_37))))) : (var_1_32 == ((signed char) (max (var_1_37 , var_1_35)))))) && ((var_1_34 < var_1_44) ? (var_1_38 == ((unsigned char) (var_1_39 - (var_1_40 - (var_1_41 - var_1_42))))) : 1)) && ((! (var_1_27 >= var_1_30)) ? (var_1_43 == ((unsigned long int) last_1_var_1_43)) : (var_1_43 == ((unsigned long int) var_1_39)))) && ((var_1_63 == (- (- var_1_39))) ? (var_1_44 == ((signed long int) (var_1_71 + var_1_11))) : (var_1_44 == ((signed long int) (max (var_1_10 , var_1_36)))))) && ((! var_1_110) ? ((var_1_114 <= var_1_1) ? (var_1_45 == ((unsigned char) (! var_1_23))) : (var_1_45 == ((unsigned char) ((var_1_36 >= var_1_15) || ((var_1_24 || var_1_21) && (! var_1_25)))))) : (var_1_45 == ((unsigned char) (! (! (var_1_22 || var_1_21))))))) && (((var_1_107 | var_1_40) == var_1_16) ? (var_1_46 == ((float) (min ((var_1_30 + var_1_28) , var_1_27)))) : (var_1_46 == ((float) (16.292f + ((max (var_1_30 , 0.5f)) - var_1_29)))))) && (((min (var_1_10 , var_1_33)) < var_1_114) ? (var_1_47 == ((signed short int) ((min (var_1_36 , var_1_42)) + (var_1_14 + var_1_37)))) : (var_1_47 == ((signed short int) (min ((min ((min (-256 , var_1_35)) , var_1_42)) , (var_1_36 + var_1_40))))))) && (((~ (max (var_1_37 , var_1_34))) <= (10 + var_1_42)) ? ((var_1_41 < (var_1_55 & (2 + var_1_55))) ? (var_1_48 == ((signed long int) (((var_1_49 + var_1_50) - var_1_80) - var_1_39))) : (var_1_48 == ((signed long int) (abs (var_1_13))))) : 1)) && (var_1_65 ? ((var_1_48 != var_1_19) ? (var_1_51 == ((signed short int) (var_1_35 + (var_1_34 + var_1_104)))) : (var_1_51 == ((signed short int) (max (var_1_12 , var_1_39))))) : (var_1_51 == ((signed short int) (var_1_104 + (max (var_1_52 , var_1_14))))))) && (var_1_53 == ((unsigned char) (var_1_22 && var_1_54)))) && ((var_1_36 > -16) ? (var_1_55 == ((signed long int) (var_1_44 - (max ((var_1_56 - last_1_var_1_55) , (2069455995 - var_1_49)))))) : 1)) && (var_1_57 == ((float) (max (0.5f , (abs (abs (var_1_29)))))))) && ((1000000000u > ((max (var_1_13 , var_1_7)) / var_1_41)) ? (var_1_58 == ((signed char) ((max (var_1_36 , var_1_41)) - var_1_37))) : 1)) && (((var_1_31 + var_1_49) < var_1_12) ? ((var_1_63 == (var_1_56 / var_1_17)) ? (((var_1_41 >> 4) < ((var_1_36 - var_1_31) * var_1_43)) ? (var_1_59 == ((float) (var_1_29 - var_1_30))) : 1) : (var_1_59 == ((float) ((min (var_1_29 , var_1_30)) - 25.5f)))) : 1)) && ((-128 <= var_1_80) ? (var_1_113 ? (var_1_60 == ((double) ((var_1_29 - var_1_30) + var_1_28))) : 1) : ((var_1_50 < var_1_68) ? (var_1_60 == ((double) ((var_1_29 + 31.9) - var_1_30))) : 1))) && (((var_1_97 * var_1_28) >= 255.8) ? ((var_1_35 != (-1 ^ var_1_14)) ? (var_1_62 == ((signed char) var_1_42)) : 1) : 1)) && (((50 * var_1_100) <= ((max (var_1_109 , var_1_107)) - var_1_12)) ? (var_1_24 ? (var_1_63 == ((unsigned short int) (var_1_13 - (var_1_64 - var_1_14)))) : (var_1_63 == ((unsigned short int) ((59231 - 25) - var_1_11)))) : ((var_1_12 >= (var_1_49 + 25)) ? ((var_1_22 && var_1_23) ? (var_1_63 == ((unsigned short int) (var_1_17 - (abs (var_1_6))))) : 1) : 1))) && ((var_1_23 && var_1_79) ? (var_1_65 == ((unsigned char) (var_1_79 && var_1_24))) : 1)) && (((var_1_13 % var_1_64) >= var_1_99) ? (var_1_67 == ((signed char) (var_1_41 + var_1_42))) : (var_1_67 == ((signed char) (min (var_1_34 , var_1_41)))))) && (var_1_45 ? ((((- var_1_101) / 100.6f) > -0.25f) ? (var_1_68 == ((signed long int) -4)) : ((var_1_28 >= (var_1_29 - (var_1_30 + var_1_69))) ? (var_1_68 == ((signed long int) ((var_1_13 + var_1_36) + var_1_5))) : (var_1_68 == ((signed long int) (max (var_1_99 , (var_1_14 - var_1_15))))))) : (var_1_68 == ((signed long int) (last_1_var_1_68 + (var_1_11 + var_1_70)))))) && (((var_1_114 <= (- var_1_41)) && (! var_1_110)) ? (var_1_71 == ((unsigned char) (min ((min ((var_1_39 - 100) , var_1_37)) , (abs (var_1_40)))))) : (var_1_71 == ((unsigned char) ((abs (var_1_37)) + 64))))) && ((! var_1_20) ? (((min (var_1_16 , var_1_86)) == (25 << var_1_37)) ? (var_1_72 == ((float) (var_1_30 + var_1_29))) : (var_1_72 == ((float) (((7.900917138448385E18f - var_1_73) - var_1_29) - var_1_69)))) : (var_1_72 == ((float) (var_1_69 - var_1_73))))) && (((max (var_1_13 , var_1_56)) < var_1_33) ? ((((min (var_1_51 , var_1_14)) << (var_1_75 + var_1_76)) != (var_1_70 * var_1_48)) ? (var_1_74 == ((unsigned char) ((var_1_76 + (var_1_42 + var_1_75)) + var_1_41))) : (var_1_74 == ((unsigned char) ((var_1_77 - var_1_76) - (abs (var_1_40 - var_1_75)))))) : 1)) && (var_1_65 ? (var_1_78 == ((signed short int) ((abs (var_1_42 - var_1_51)) - var_1_68))) : (var_1_78 == ((signed short int) var_1_86)))) && (var_1_79 == ((unsigned char) (var_1_54 || var_1_24)))) && (((var_1_81 - (var_1_56 - var_1_49)) <= var_1_42) ? (((var_1_99 * var_1_49) <= (min (64 , (abs (1))))) ? (var_1_80 == ((unsigned long int) (min (var_1_37 , (1000000000u + var_1_68))))) : (var_1_80 == ((unsigned long int) ((abs (2u + var_1_6)) + var_1_104)))) : ((var_1_11 >= var_1_16) ? (var_1_80 == ((unsigned long int) var_1_18)) : 1))) && ((var_1_108 >= var_1_14) ? (((2.5f / var_1_84) != var_1_69) ? ((var_1_49 > (~ var_1_93)) ? (var_1_83 == ((float) (max ((max (var_1_30 , var_1_69)) , var_1_27)))) : 1) : (var_1_83 == ((float) (abs (var_1_27))))) : (var_1_83 == ((float) (var_1_29 + (var_1_73 + var_1_85)))))) && (((- var_1_18) != var_1_109) ? (var_1_86 == ((signed long int) ((var_1_56 - var_1_6) - var_1_55))) : (var_1_86 == ((signed long int) (max (var_1_56 , (var_1_93 + (var_1_17 + var_1_87)))))))) && ((var_1_107 != var_1_117) ? (var_1_88 == ((unsigned char) (var_1_23 && var_1_21))) : 1)) && ((var_1_79 && (var_1_107 >= var_1_42)) ? ((((abs (var_1_80)) << (var_1_90 - var_1_76)) >= ((var_1_13 * var_1_64) / var_1_49)) ? (var_1_53 ? (var_1_89 == ((signed char) (var_1_42 + ((var_1_41 - var_1_90) - (var_1_91 - 25))))) : (var_1_89 == ((signed char) (min (var_1_91 , var_1_37))))) : (var_1_89 == ((signed char) (var_1_90 - ((var_1_41 - 5) + (var_1_92 - var_1_76)))))) : 1)) && ((var_1_45 || var_1_65) ? (var_1_93 == ((unsigned long int) (((var_1_49 + var_1_95) - var_1_6) + ((max (var_1_56 , var_1_96)) - var_1_37)))) : 1)) && ((var_1_114 < var_1_99) ? (((var_1_90 * var_1_52) <= var_1_77) ? (var_1_97 == ((float) ((min (var_1_73 , var_1_29)) - (var_1_30 + var_1_98)))) : (var_1_97 == ((float) ((max (var_1_69 , var_1_30)) - var_1_73)))) : 1)) && (var_1_113 ? ((-128 > var_1_36) ? (var_1_99 == ((unsigned long int) (abs (var_1_11)))) : (var_1_99 == ((unsigned long int) (var_1_63 + (abs (max (var_1_76 , var_1_12))))))) : (var_1_99 == ((unsigned long int) (abs (var_1_95 + (1813181672u - var_1_91))))))) && ((var_1_28 <= var_1_27) ? ((var_1_43 <= (last_1_var_1_100 + 4)) ? ((var_1_76 == var_1_19) ? (var_1_100 == ((signed long int) var_1_95)) : 1) : 1) : 1)) && ((var_1_90 == (var_1_63 + var_1_99)) ? (var_1_101 == ((double) var_1_27)) : (var_1_101 == ((double) var_1_29)))) && (var_1_79 ? (var_1_102 == ((double) var_1_27)) : 1)) && (var_1_53 ? (var_1_103 == ((signed short int) var_1_91)) : (var_1_103 == ((signed short int) var_1_14)))) && (var_1_104 == ((signed short int) var_1_105))) && (var_1_113 ? (var_1_106 == ((signed short int) var_1_63)) : (var_1_106 == ((signed short int) var_1_40)))) && (var_1_107 == ((signed long int) var_1_49))) && (var_1_20 ? (var_1_108 == ((unsigned char) var_1_77)) : 1)) && (var_1_109 == ((unsigned long int) var_1_77))) && (var_1_54 ? (var_1_110 == ((unsigned char) var_1_24)) : (var_1_110 == ((unsigned char) var_1_25)))) && (var_1_115 ? (var_1_111 == ((signed char) var_1_112)) : (var_1_111 == ((signed char) var_1_42)))) && (var_1_22 ? (var_1_113 == ((unsigned char) var_1_25)) : (var_1_113 == ((unsigned char) var_1_21)))) && (var_1_114 == ((signed long int) var_1_34))) && (var_1_115 == ((unsigned char) var_1_21))) && (var_1_24 ? (var_1_116 == ((float) var_1_27)) : 1)) && (((var_1_86 != (var_1_39 * var_1_50)) && ((- var_1_102) != 5.6)) ? (((var_1_5 * var_1_86) >= var_1_14) ? (var_1_117 == ((signed short int) var_1_112)) : (var_1_117 == ((signed short int) var_1_86))) : 1)
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
