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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch34Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 64;
unsigned char var_1_3 = 200;
unsigned char var_1_4 = 16;
unsigned char var_1_5 = 0;
double var_1_7 = 31.75;
double var_1_8 = 64.75;
double var_1_9 = 1.625;
double var_1_10 = 0.0;
double var_1_11 = 15.75;
double var_1_12 = 199.6;
double var_1_13 = 199.2;
unsigned short int var_1_14 = 128;
unsigned short int var_1_15 = 24244;
unsigned char var_1_16 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 256;
double var_1_21 = 100000.8;
unsigned long int var_1_22 = 16;
float var_1_23 = 25.35;
signed long int var_1_24 = -200;
signed long int var_1_25 = -64;
signed char var_1_26 = 8;
signed char var_1_28 = 16;
signed char var_1_29 = 32;
signed char var_1_30 = 32;
signed char var_1_31 = -32;
signed char var_1_32 = 100;
unsigned short int var_1_33 = 8;
double var_1_34 = 64.75;
unsigned short int var_1_36 = 18879;
signed short int var_1_37 = -32;
unsigned char var_1_40 = 8;
unsigned char var_1_42 = 128;
unsigned char var_1_43 = 5;
double var_1_44 = 128.5;
double var_1_45 = 100000000000000.5;
double var_1_46 = 9999.4;
unsigned short int var_1_47 = 2;
signed char var_1_48 = 25;
unsigned char var_1_50 = 128;
unsigned short int var_1_51 = 10;
float var_1_52 = 16.125;
double var_1_53 = 1000000000000.3;
float var_1_54 = 0.0;
unsigned char var_1_55 = 64;
double var_1_56 = 24.75;
float var_1_57 = 8.5;
unsigned short int var_1_58 = 63378;
unsigned char var_1_59 = 128;
signed short int var_1_60 = 128;
unsigned char var_1_61 = 16;
double var_1_62 = 9.25;
double var_1_63 = 4.875;
double var_1_64 = 255.2;
double var_1_65 = 10.5;
signed long int var_1_66 = -128;
unsigned long int var_1_67 = 1;
unsigned long int var_1_68 = 1877629110;
unsigned long int var_1_69 = 1695516576;
unsigned long int var_1_70 = 1261755098;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 1;
unsigned short int var_1_73 = 4;
signed long int var_1_74 = -50;
unsigned short int var_1_75 = 43334;
unsigned short int var_1_76 = 51507;
signed char var_1_77 = 64;
signed char var_1_80 = -10;
signed char var_1_81 = 4;
signed char var_1_82 = 8;
signed char var_1_83 = 2;
signed short int var_1_84 = 8;
unsigned char var_1_85 = 50;
unsigned char var_1_86 = 8;
unsigned long int var_1_87 = 256;
signed short int var_1_88 = 2;
unsigned long int var_1_89 = 2;
signed short int var_1_90 = -8;
signed short int var_1_91 = 0;
unsigned char var_1_92 = 1;
signed long int var_1_93 = -25;
signed long int var_1_94 = -500;
float var_1_95 = 25.125;
signed char var_1_96 = -100;
unsigned long int var_1_97 = 64;
unsigned char var_1_98 = 1;
unsigned char var_1_99 = 128;
double var_1_100 = 1.925;
double var_1_101 = 499.6;
double var_1_102 = 199.4;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 64;
unsigned short int last_1_var_1_14 = 128;
unsigned char last_1_var_1_16 = 1;
unsigned long int last_1_var_1_20 = 256;
unsigned long int last_1_var_1_22 = 16;
unsigned short int last_1_var_1_33 = 8;
unsigned char last_1_var_1_40 = 8;
unsigned short int last_1_var_1_47 = 2;
float last_1_var_1_52 = 16.125;
unsigned char last_1_var_1_55 = 64;
double last_1_var_1_56 = 24.75;
unsigned char last_1_var_1_59 = 128;
unsigned char last_1_var_1_71 = 0;
signed char last_1_var_1_80 = -10;
signed short int last_1_var_1_84 = 8;
unsigned char last_1_var_1_85 = 50;
unsigned char last_1_var_1_86 = 8;
signed short int last_1_var_1_88 = 2;
signed short int last_1_var_1_90 = -8;
unsigned char last_1_var_1_92 = 1;
signed long int last_1_var_1_94 = -500;
unsigned long int last_1_var_1_97 = 64;
unsigned char last_1_var_1_98 = 1;
double last_1_var_1_101 = 499.6;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req31Batch34Amount500
	if (last_1_var_1_80 < var_1_43) {
		if (var_1_18 && last_1_var_1_71) {
			var_1_67 = (last_1_var_1_94 + var_1_32);
		} else {
			var_1_67 = (((min (var_1_68 , var_1_69)) + var_1_70) - (min (var_1_36 , (abs (last_1_var_1_85)))));
		}
	}


	// From: Req5Batch34Amount500
	if (last_1_var_1_22 < ((var_1_4 % var_1_15) * var_1_5)) {
		if ((! last_1_var_1_98) && last_1_var_1_71) {
			var_1_16 = (! var_1_18);
		} else {
			var_1_16 = var_1_19;
		}
	} else {
		var_1_16 = var_1_18;
	}


	// From: Req50Batch34Amount500
	if (var_1_16) {
		var_1_98 = var_1_19;
	} else {
		var_1_98 = var_1_19;
	}


	// From: Req14Batch34Amount500
	signed long int stepLocal_11 = last_1_var_1_55;
	if (stepLocal_11 > (last_1_var_1_55 + (-128 + last_1_var_1_1))) {
		var_1_40 = (200 - var_1_4);
	} else {
		if (var_1_11 <= var_1_8) {
			var_1_40 = (min ((var_1_42 - (64 - var_1_43)) , (var_1_32 + 25)));
		}
	}


	// From: Req11Batch34Amount500
	unsigned char stepLocal_9 = last_1_var_1_16;
	unsigned char stepLocal_8 = last_1_var_1_56 > (last_1_var_1_101 / 9999999.25);
	signed long int stepLocal_7 = last_1_var_1_88;
	unsigned long int stepLocal_6 = (min (last_1_var_1_97 , last_1_var_1_20)) / var_1_3;
	if (last_1_var_1_92 && stepLocal_9) {
		if (stepLocal_7 < var_1_4) {
			if (stepLocal_6 > var_1_4) {
				if (last_1_var_1_98 && stepLocal_8) {
					var_1_26 = (max ((var_1_28 + (min (var_1_29 , var_1_30))) , (abs (var_1_4))));
				} else {
					if (var_1_18) {
						var_1_26 = var_1_28;
					}
				}
			}
		} else {
			var_1_26 = (min (((max (var_1_29 , var_1_28)) + var_1_30) , (var_1_31 + (32 - 25))));
		}
	} else {
		var_1_26 = (min (-100 , ((min (5 , var_1_4)) - var_1_32)));
	}


	// From: Req34Batch34Amount500
	signed long int stepLocal_20 = min (last_1_var_1_14 , last_1_var_1_47);
	if ((min (last_1_var_1_55 , last_1_var_1_59)) >= stepLocal_20) {
		if (last_1_var_1_52 != var_1_34) {
			var_1_77 = (min (var_1_28 , (min ((var_1_43 + var_1_30) , var_1_4))));
		}
	} else {
		var_1_77 = (abs (var_1_3));
	}


	// From: Req12Batch34Amount500
	if (var_1_12 >= (var_1_11 / (min (var_1_10 , var_1_34)))) {
		if (var_1_77 <= var_1_4) {
			var_1_33 = (min (16 , (var_1_4 + var_1_32)));
		} else {
			var_1_33 = ((var_1_15 + var_1_36) - var_1_32);
		}
	} else {
		var_1_33 = var_1_3;
	}


	// From: Req29Batch34Amount500
	if (var_1_77 >= (var_1_30 / var_1_25)) {
		var_1_64 = (var_1_11 - var_1_10);
	} else {
		if ((- var_1_11) > (max (var_1_54 , var_1_8))) {
			var_1_64 = (9.5 + (max (var_1_45 , (var_1_11 - var_1_46))));
		} else {
			var_1_64 = ((var_1_11 + var_1_46) - (var_1_45 + var_1_65));
		}
	}


	// From: Req40Batch34Amount500
	var_1_88 = (max (last_1_var_1_33 , last_1_var_1_88));


	// From: Req32Batch34Amount500
	if ((last_1_var_1_40 * var_1_43) >= last_1_var_1_14) {
		if (((last_1_var_1_55 * last_1_var_1_47) + last_1_var_1_20) < (last_1_var_1_90 + last_1_var_1_94)) {
			var_1_71 = ((! var_1_18) || (! var_1_72));
		}
	} else {
		var_1_71 = (! (! (last_1_var_1_92 || var_1_72)));
	}


	// From: Req44Batch34Amount500
	if (var_1_71) {
		var_1_92 = var_1_18;
	} else {
		var_1_92 = var_1_19;
	}


	// From: Req8Batch34Amount500
	var_1_22 = (max (var_1_40 , var_1_4));


	// From: Req47Batch34Amount500
	if (var_1_71) {
		var_1_95 = var_1_13;
	}


	// From: Req18Batch34Amount500
	if ((- var_1_8) > var_1_95) {
		var_1_50 = (var_1_32 + var_1_5);
	} else {
		var_1_50 = (var_1_4 + var_1_5);
	}


	// From: Req42Batch34Amount500
	if (var_1_18) {
		var_1_90 = var_1_32;
	} else {
		var_1_90 = var_1_88;
	}


	// From: Req48Batch34Amount500
	if (var_1_71) {
		var_1_96 = var_1_32;
	}


	// From: Req3Batch34Amount500
	if (var_1_16) {
		if (var_1_22 >= var_1_5) {
			var_1_9 = (min (((var_1_10 - var_1_11) - var_1_12) , var_1_8));
		}
	} else {
		if ((min ((var_1_5 + 4) , (var_1_22 - var_1_4))) == var_1_3) {
			var_1_9 = var_1_12;
		} else {
			var_1_9 = (var_1_11 + (max (var_1_13 , 9.99999999999998E13)));
		}
	}


	// From: Req4Batch34Amount500
	if (var_1_13 >= var_1_10) {
		var_1_14 = ((max (8 , var_1_4)) + (var_1_15 - var_1_3));
	} else {
		var_1_14 = var_1_5;
	}


	// From: Req6Batch34Amount500
	if (var_1_19) {
		var_1_20 = var_1_3;
	} else {
		var_1_20 = var_1_4;
	}


	// From: Req15Batch34Amount500
	if (var_1_16) {
		var_1_44 = 5.5;
	} else {
		var_1_44 = (((var_1_45 + var_1_46) - var_1_11) + var_1_13);
	}


	// From: Req19Batch34Amount500
	var_1_51 = (var_1_36 + var_1_5);


	// From: Req21Batch34Amount500
	var_1_55 = (var_1_42 - var_1_43);


	// From: Req22Batch34Amount500
	if (var_1_8 != var_1_46) {
		var_1_56 = (var_1_10 - (min (var_1_12 , var_1_46)));
	}


	// From: Req24Batch34Amount500
	unsigned char stepLocal_19 = var_1_4;
	if (stepLocal_19 < (max ((var_1_3 - var_1_43) , last_1_var_1_59))) {
		var_1_59 = (abs (var_1_42 - var_1_43));
	}


	// From: Req25Batch34Amount500
	var_1_60 = (var_1_42 - var_1_51);


	// From: Req26Batch34Amount500
	if (var_1_45 >= var_1_8) {
		if (var_1_46 <= var_1_10) {
			var_1_61 = (abs (var_1_32));
		}
	}


	// From: Req36Batch34Amount500
	var_1_84 = (min ((-32 + last_1_var_1_84) , var_1_30));


	// From: Req38Batch34Amount500
	unsigned char stepLocal_25 = var_1_5;
	unsigned char stepLocal_24 = var_1_59;
	if (! var_1_92) {
		var_1_86 = 10;
	} else {
		if (last_1_var_1_86 > stepLocal_24) {
			if (stepLocal_25 > 0) {
				var_1_86 = (var_1_83 + var_1_4);
			}
		}
	}


	// From: Req43Batch34Amount500
	if (var_1_72) {
		var_1_91 = var_1_81;
	} else {
		var_1_91 = var_1_4;
	}


	// From: Req45Batch34Amount500
	var_1_93 = var_1_83;


	// From: Req46Batch34Amount500
	var_1_94 = var_1_4;


	// From: Req51Batch34Amount500
	var_1_99 = var_1_43;


	// From: Req52Batch34Amount500
	if (var_1_71) {
		var_1_100 = var_1_10;
	} else {
		var_1_100 = var_1_65;
	}


	// From: Req35Batch34Amount500
	signed short int stepLocal_21 = var_1_60;
	if (stepLocal_21 != ((var_1_94 * var_1_25) + var_1_67)) {
		var_1_80 = (max ((var_1_28 + (var_1_81 + var_1_82)) , var_1_4));
	} else {
		if (var_1_98) {
			var_1_80 = ((max ((var_1_43 + var_1_83) , var_1_4)) - var_1_32);
		} else {
			var_1_80 = ((min (var_1_31 , var_1_30)) + var_1_29);
		}
	}


	// From: Req1Batch34Amount500
	signed long int stepLocal_0 = (var_1_3 - var_1_4) - var_1_5;
	if (var_1_92) {
		if (stepLocal_0 <= var_1_40) {
			var_1_1 = var_1_3;
		}
	}


	// From: Req53Batch34Amount500
	if (var_1_92 && (var_1_74 != var_1_43)) {
		if (var_1_18) {
			var_1_101 = (max (var_1_10 , var_1_102));
		}
	} else {
		if ((var_1_26 | var_1_67) != var_1_84) {
			var_1_101 = var_1_54;
		} else {
			var_1_101 = var_1_11;
		}
	}


	// From: Req16Batch34Amount500
	if ((var_1_1 <= var_1_43) || var_1_18) {
		var_1_47 = ((min (var_1_3 , (var_1_36 - var_1_42))) + var_1_32);
	} else {
		var_1_47 = var_1_5;
	}


	// From: Req37Batch34Amount500
	unsigned char stepLocal_23 = var_1_71;
	signed char stepLocal_22 = var_1_96;
	if (! (var_1_93 <= (8 * var_1_20))) {
		if (var_1_81 > stepLocal_22) {
			var_1_85 = ((min (var_1_43 , (min (var_1_32 , var_1_83)))) + 50);
		}
	} else {
		if (var_1_18 || stepLocal_23) {
			var_1_85 = (min (32 , ((var_1_83 + var_1_43) + var_1_4)));
		}
	}


	// From: Req2Batch34Amount500
	signed char stepLocal_1 = var_1_80;
	if (var_1_4 >= stepLocal_1) {
		var_1_7 = (abs (var_1_8));
	}


	// From: Req10Batch34Amount500
	signed long int stepLocal_5 = var_1_33 / (min (var_1_15 , var_1_25));
	unsigned char stepLocal_4 = var_1_71;
	unsigned char stepLocal_3 = (var_1_95 + var_1_44) > var_1_13;
	unsigned char stepLocal_2 = var_1_18;
	if (var_1_18 && stepLocal_4) {
		if ((~ var_1_22) >= stepLocal_5) {
			var_1_24 = (((var_1_5 + var_1_33) + var_1_4) + (var_1_15 + var_1_22));
		} else {
			var_1_24 = (max ((var_1_5 + (var_1_3 - var_1_22)) , (max (var_1_4 , 10))));
		}
	} else {
		if (stepLocal_3 && (! var_1_16)) {
			if (stepLocal_2 || var_1_71) {
				var_1_24 = (max ((var_1_3 + var_1_22) , var_1_5));
			} else {
				var_1_24 = (min (var_1_5 , var_1_3));
			}
		}
	}


	// From: Req28Batch34Amount500
	if (-128 > var_1_47) {
		var_1_63 = var_1_10;
	} else {
		var_1_63 = (abs (var_1_46));
	}


	// From: Req39Batch34Amount500
	signed long int stepLocal_27 = var_1_88 / 8;
	unsigned char stepLocal_26 = var_1_18;
	if (var_1_16 || stepLocal_26) {
		if (var_1_85 > stepLocal_27) {
			var_1_87 = (max ((var_1_70 + var_1_3) , var_1_61));
		}
	}


	// From: Req49Batch34Amount500
	if (var_1_71) {
		var_1_97 = var_1_87;
	} else {
		var_1_97 = var_1_32;
	}


	// From: Req33Batch34Amount500
	if ((var_1_20 % var_1_74) >= var_1_29) {
		var_1_73 = (var_1_75 - (max (var_1_55 , (var_1_15 - var_1_4))));
	} else {
		if (var_1_19) {
			if (var_1_3 > var_1_87) {
				if ((- var_1_58) == (var_1_30 * (var_1_32 + var_1_42))) {
					var_1_73 = ((max ((17034 + var_1_36) , var_1_75)) - var_1_40);
				} else {
					var_1_73 = ((var_1_5 + var_1_43) + (max (var_1_40 , var_1_15)));
				}
			} else {
				var_1_73 = (abs (max (var_1_43 , var_1_75)));
			}
		} else {
			var_1_73 = ((max (var_1_75 , var_1_76)) - 2);
		}
	}


	// From: Req41Batch34Amount500
	signed long int stepLocal_28 = min (var_1_33 , var_1_81);
	if (stepLocal_28 > var_1_73) {
		var_1_89 = var_1_75;
	}


	// From: Req17Batch34Amount500
	signed long int stepLocal_15 = var_1_73 % var_1_3;
	unsigned long int stepLocal_14 = max (var_1_97 , var_1_25);
	signed long int stepLocal_13 = var_1_25;
	unsigned short int stepLocal_12 = var_1_14;
	if (stepLocal_14 < (var_1_5 ^ var_1_33)) {
		if (var_1_89 <= stepLocal_15) {
			if (var_1_16) {
				var_1_48 = (abs (var_1_29));
			} else {
				if (stepLocal_13 != var_1_36) {
					var_1_48 = var_1_28;
				} else {
					var_1_48 = ((10 - var_1_43) + var_1_29);
				}
			}
		} else {
			if (stepLocal_12 >= (var_1_31 ^ 256)) {
				var_1_48 = var_1_4;
			}
		}
	}


	// From: Req9Batch34Amount500
	if ((abs (100 + var_1_3)) <= (min (var_1_4 , var_1_5))) {
		if ((max (var_1_97 , 25)) < var_1_73) {
			var_1_23 = ((min (var_1_12 , var_1_11)) - var_1_10);
		} else {
			if (var_1_40 <= (~ var_1_89)) {
				var_1_23 = (var_1_13 + (abs (var_1_11)));
			}
		}
	} else {
		var_1_23 = var_1_10;
	}


	// From: Req23Batch34Amount500
	unsigned long int stepLocal_18 = var_1_58 - var_1_22;
	if (255.4 < (min (32.375 , var_1_64))) {
		if (2.75 > (- (var_1_95 + var_1_23))) {
			if (stepLocal_18 >= var_1_55) {
				if ((var_1_46 - var_1_53) > var_1_23) {
					var_1_57 = ((var_1_45 - (min (var_1_11 , 9.999999999995E11f))) + var_1_46);
				} else {
					var_1_57 = (min (var_1_8 , 256.625f));
				}
			} else {
				var_1_57 = var_1_11;
			}
		}
	} else {
		var_1_57 = var_1_8;
	}


	// From: Req27Batch34Amount500
	if ((var_1_7 * var_1_57) < 256.5) {
		var_1_62 = (abs (var_1_46));
	}


	// From: Req30Batch34Amount500
	if ((var_1_7 >= (var_1_63 / var_1_34)) || var_1_18) {
		if (var_1_11 > var_1_62) {
			if (! (! var_1_19)) {
				var_1_66 = (abs (var_1_60));
			} else {
				var_1_66 = var_1_42;
			}
		} else {
			var_1_66 = (var_1_87 + var_1_22);
		}
	} else {
		var_1_66 = (var_1_40 - var_1_59);
	}


	// From: Req7Batch34Amount500
	if (var_1_19 && (var_1_62 <= (9.999999995E8 * var_1_11))) {
		var_1_21 = (max (var_1_13 , var_1_12));
	} else {
		var_1_21 = (abs (var_1_11));
	}


	// From: Req20Batch34Amount500
	unsigned long int stepLocal_17 = var_1_61 + (10 + var_1_20);
	signed long int stepLocal_16 = (var_1_32 + var_1_50) - var_1_5;
	if (! (var_1_30 != var_1_28)) {
		var_1_52 = (min (var_1_8 , (min (var_1_12 , -0.4f))));
	} else {
		if (var_1_11 != ((var_1_53 - var_1_12) / (max (var_1_34 , var_1_10)))) {
			if (var_1_26 >= stepLocal_17) {
				if (((var_1_29 & var_1_28) * var_1_25) < stepLocal_16) {
					var_1_52 = (min ((min (var_1_13 , (min (0.3f , var_1_12)))) , var_1_10));
				} else {
					var_1_52 = (min (var_1_45 , (var_1_46 + 5.4f)));
				}
			} else {
				var_1_52 = ((var_1_45 - var_1_46) + var_1_13);
			}
		} else {
			if ((var_1_56 + var_1_21) >= var_1_45) {
				var_1_52 = (min (((var_1_11 + var_1_46) - (var_1_54 - var_1_45)) , (max (var_1_10 , var_1_12))));
			} else {
				var_1_52 = (min (0.3f , (min ((var_1_13 + var_1_45) , var_1_46))));
			}
		}
	}


	// From: Req13Batch34Amount500
	unsigned char stepLocal_10 = var_1_71;
	if (stepLocal_10 && (var_1_10 < var_1_52)) {
		var_1_37 = (var_1_5 - (var_1_32 + var_1_4));
	} else {
		var_1_37 = var_1_28;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 191);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 64);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 4611686.018427382800e+12F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 16383);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	assume_abort_if_not(var_1_25 != 0);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -63);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -63);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -63);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -63);
	assume_abort_if_not(var_1_31 <= 63);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	assume_abort_if_not(var_1_34 != 0.0F);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 16384);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 127);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691390e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691390e+12F && var_1_46 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854776000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= 4611686.018427382800e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854765600e+12F && var_1_54 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 32767);
	assume_abort_if_not(var_1_58 <= 65535);
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 4611686.018427382800e+12F && var_1_65 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_68 >= 1073741823);
	assume_abort_if_not(var_1_68 <= 2147483647);
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 1073741823);
	assume_abort_if_not(var_1_69 <= 2147483647);
	var_1_70 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_70 >= 1073741824);
	assume_abort_if_not(var_1_70 <= 2147483647);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 1);
	assume_abort_if_not(var_1_72 <= 1);
	var_1_74 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_74 >= -2147483648);
	assume_abort_if_not(var_1_74 <= 2147483647);
	assume_abort_if_not(var_1_74 != 0);
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 32767);
	assume_abort_if_not(var_1_75 <= 65534);
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 32767);
	assume_abort_if_not(var_1_76 <= 65534);
	var_1_81 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_81 >= -31);
	assume_abort_if_not(var_1_81 <= 32);
	var_1_82 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_82 >= -31);
	assume_abort_if_not(var_1_82 <= 31);
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 63);
	var_1_102 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_102 >= -922337.2036854765600e+13F && var_1_102 <= -1.0e-20F) || (var_1_102 <= 9223372.036854765600e+12F && var_1_102 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_101 = var_1_101;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_92 ? ((((var_1_3 - var_1_4) - var_1_5) <= var_1_40) ? (var_1_1 == ((unsigned short int) var_1_3)) : 1) : 1) && ((var_1_4 >= var_1_80) ? (var_1_7 == ((double) (abs (var_1_8)))) : 1)) && (var_1_16 ? ((var_1_22 >= var_1_5) ? (var_1_9 == ((double) (min (((var_1_10 - var_1_11) - var_1_12) , var_1_8)))) : 1) : (((min ((var_1_5 + 4) , (var_1_22 - var_1_4))) == var_1_3) ? (var_1_9 == ((double) var_1_12)) : (var_1_9 == ((double) (var_1_11 + (max (var_1_13 , 9.99999999999998E13)))))))) && ((var_1_13 >= var_1_10) ? (var_1_14 == ((unsigned short int) ((max (8 , var_1_4)) + (var_1_15 - var_1_3)))) : (var_1_14 == ((unsigned short int) var_1_5)))) && ((last_1_var_1_22 < ((var_1_4 % var_1_15) * var_1_5)) ? (((! last_1_var_1_98) && last_1_var_1_71) ? (var_1_16 == ((unsigned char) (! var_1_18))) : (var_1_16 == ((unsigned char) var_1_19))) : (var_1_16 == ((unsigned char) var_1_18)))) && (var_1_19 ? (var_1_20 == ((unsigned long int) var_1_3)) : (var_1_20 == ((unsigned long int) var_1_4)))) && ((var_1_19 && (var_1_62 <= (9.999999995E8 * var_1_11))) ? (var_1_21 == ((double) (max (var_1_13 , var_1_12)))) : (var_1_21 == ((double) (abs (var_1_11)))))) && (var_1_22 == ((unsigned long int) (max (var_1_40 , var_1_4))))) && (((abs (100 + var_1_3)) <= (min (var_1_4 , var_1_5))) ? (((max (var_1_97 , 25)) < var_1_73) ? (var_1_23 == ((float) ((min (var_1_12 , var_1_11)) - var_1_10))) : ((var_1_40 <= (~ var_1_89)) ? (var_1_23 == ((float) (var_1_13 + (abs (var_1_11))))) : 1)) : (var_1_23 == ((float) var_1_10)))) && ((var_1_18 && var_1_71) ? (((~ var_1_22) >= (var_1_33 / (min (var_1_15 , var_1_25)))) ? (var_1_24 == ((signed long int) (((var_1_5 + var_1_33) + var_1_4) + (var_1_15 + var_1_22)))) : (var_1_24 == ((signed long int) (max ((var_1_5 + (var_1_3 - var_1_22)) , (max (var_1_4 , 10))))))) : ((((var_1_95 + var_1_44) > var_1_13) && (! var_1_16)) ? ((var_1_18 || var_1_71) ? (var_1_24 == ((signed long int) (max ((var_1_3 + var_1_22) , var_1_5)))) : (var_1_24 == ((signed long int) (min (var_1_5 , var_1_3))))) : 1))) && ((last_1_var_1_92 && last_1_var_1_16) ? ((last_1_var_1_88 < var_1_4) ? ((((min (last_1_var_1_97 , last_1_var_1_20)) / var_1_3) > var_1_4) ? ((last_1_var_1_98 && (last_1_var_1_56 > (last_1_var_1_101 / 9999999.25))) ? (var_1_26 == ((signed char) (max ((var_1_28 + (min (var_1_29 , var_1_30))) , (abs (var_1_4)))))) : (var_1_18 ? (var_1_26 == ((signed char) var_1_28)) : 1)) : 1) : (var_1_26 == ((signed char) (min (((max (var_1_29 , var_1_28)) + var_1_30) , (var_1_31 + (32 - 25))))))) : (var_1_26 == ((signed char) (min (-100 , ((min (5 , var_1_4)) - var_1_32))))))) && ((var_1_12 >= (var_1_11 / (min (var_1_10 , var_1_34)))) ? ((var_1_77 <= var_1_4) ? (var_1_33 == ((unsigned short int) (min (16 , (var_1_4 + var_1_32))))) : (var_1_33 == ((unsigned short int) ((var_1_15 + var_1_36) - var_1_32)))) : (var_1_33 == ((unsigned short int) var_1_3)))) && ((var_1_71 && (var_1_10 < var_1_52)) ? (var_1_37 == ((signed short int) (var_1_5 - (var_1_32 + var_1_4)))) : (var_1_37 == ((signed short int) var_1_28)))) && ((last_1_var_1_55 > (last_1_var_1_55 + (-128 + last_1_var_1_1))) ? (var_1_40 == ((unsigned char) (200 - var_1_4))) : ((var_1_11 <= var_1_8) ? (var_1_40 == ((unsigned char) (min ((var_1_42 - (64 - var_1_43)) , (var_1_32 + 25))))) : 1))) && (var_1_16 ? (var_1_44 == ((double) 5.5)) : (var_1_44 == ((double) (((var_1_45 + var_1_46) - var_1_11) + var_1_13))))) && (((var_1_1 <= var_1_43) || var_1_18) ? (var_1_47 == ((unsigned short int) ((min (var_1_3 , (var_1_36 - var_1_42))) + var_1_32))) : (var_1_47 == ((unsigned short int) var_1_5)))) && (((max (var_1_97 , var_1_25)) < (var_1_5 ^ var_1_33)) ? ((var_1_89 <= (var_1_73 % var_1_3)) ? (var_1_16 ? (var_1_48 == ((signed char) (abs (var_1_29)))) : ((var_1_25 != var_1_36) ? (var_1_48 == ((signed char) var_1_28)) : (var_1_48 == ((signed char) ((10 - var_1_43) + var_1_29))))) : ((var_1_14 >= (var_1_31 ^ 256)) ? (var_1_48 == ((signed char) var_1_4)) : 1)) : 1)) && (((- var_1_8) > var_1_95) ? (var_1_50 == ((unsigned char) (var_1_32 + var_1_5))) : (var_1_50 == ((unsigned char) (var_1_4 + var_1_5))))) && (var_1_51 == ((unsigned short int) (var_1_36 + var_1_5)))) && ((! (var_1_30 != var_1_28)) ? (var_1_52 == ((float) (min (var_1_8 , (min (var_1_12 , -0.4f)))))) : ((var_1_11 != ((var_1_53 - var_1_12) / (max (var_1_34 , var_1_10)))) ? ((var_1_26 >= (var_1_61 + (10 + var_1_20))) ? ((((var_1_29 & var_1_28) * var_1_25) < ((var_1_32 + var_1_50) - var_1_5)) ? (var_1_52 == ((float) (min ((min (var_1_13 , (min (0.3f , var_1_12)))) , var_1_10)))) : (var_1_52 == ((float) (min (var_1_45 , (var_1_46 + 5.4f)))))) : (var_1_52 == ((float) ((var_1_45 - var_1_46) + var_1_13)))) : (((var_1_56 + var_1_21) >= var_1_45) ? (var_1_52 == ((float) (min (((var_1_11 + var_1_46) - (var_1_54 - var_1_45)) , (max (var_1_10 , var_1_12)))))) : (var_1_52 == ((float) (min (0.3f , (min ((var_1_13 + var_1_45) , var_1_46)))))))))) && (var_1_55 == ((unsigned char) (var_1_42 - var_1_43)))) && ((var_1_8 != var_1_46) ? (var_1_56 == ((double) (var_1_10 - (min (var_1_12 , var_1_46))))) : 1)) && ((255.4 < (min (32.375 , var_1_64))) ? ((2.75 > (- (var_1_95 + var_1_23))) ? (((var_1_58 - var_1_22) >= var_1_55) ? (((var_1_46 - var_1_53) > var_1_23) ? (var_1_57 == ((float) ((var_1_45 - (min (var_1_11 , 9.999999999995E11f))) + var_1_46))) : (var_1_57 == ((float) (min (var_1_8 , 256.625f))))) : (var_1_57 == ((float) var_1_11))) : 1) : (var_1_57 == ((float) var_1_8)))) && ((var_1_4 < (max ((var_1_3 - var_1_43) , last_1_var_1_59))) ? (var_1_59 == ((unsigned char) (abs (var_1_42 - var_1_43)))) : 1)) && (var_1_60 == ((signed short int) (var_1_42 - var_1_51)))) && ((var_1_45 >= var_1_8) ? ((var_1_46 <= var_1_10) ? (var_1_61 == ((unsigned char) (abs (var_1_32)))) : 1) : 1)) && (((var_1_7 * var_1_57) < 256.5) ? (var_1_62 == ((double) (abs (var_1_46)))) : 1)) && ((-128 > var_1_47) ? (var_1_63 == ((double) var_1_10)) : (var_1_63 == ((double) (abs (var_1_46)))))) && ((var_1_77 >= (var_1_30 / var_1_25)) ? (var_1_64 == ((double) (var_1_11 - var_1_10))) : (((- var_1_11) > (max (var_1_54 , var_1_8))) ? (var_1_64 == ((double) (9.5 + (max (var_1_45 , (var_1_11 - var_1_46)))))) : (var_1_64 == ((double) ((var_1_11 + var_1_46) - (var_1_45 + var_1_65))))))) && (((var_1_7 >= (var_1_63 / var_1_34)) || var_1_18) ? ((var_1_11 > var_1_62) ? ((! (! var_1_19)) ? (var_1_66 == ((signed long int) (abs (var_1_60)))) : (var_1_66 == ((signed long int) var_1_42))) : (var_1_66 == ((signed long int) (var_1_87 + var_1_22)))) : (var_1_66 == ((signed long int) (var_1_40 - var_1_59))))) && ((last_1_var_1_80 < var_1_43) ? ((var_1_18 && last_1_var_1_71) ? (var_1_67 == ((unsigned long int) (last_1_var_1_94 + var_1_32))) : (var_1_67 == ((unsigned long int) (((min (var_1_68 , var_1_69)) + var_1_70) - (min (var_1_36 , (abs (last_1_var_1_85)))))))) : 1)) && (((last_1_var_1_40 * var_1_43) >= last_1_var_1_14) ? ((((last_1_var_1_55 * last_1_var_1_47) + last_1_var_1_20) < (last_1_var_1_90 + last_1_var_1_94)) ? (var_1_71 == ((unsigned char) ((! var_1_18) || (! var_1_72)))) : 1) : (var_1_71 == ((unsigned char) (! (! (last_1_var_1_92 || var_1_72))))))) && (((var_1_20 % var_1_74) >= var_1_29) ? (var_1_73 == ((unsigned short int) (var_1_75 - (max (var_1_55 , (var_1_15 - var_1_4)))))) : (var_1_19 ? ((var_1_3 > var_1_87) ? (((- var_1_58) == (var_1_30 * (var_1_32 + var_1_42))) ? (var_1_73 == ((unsigned short int) ((max ((17034 + var_1_36) , var_1_75)) - var_1_40))) : (var_1_73 == ((unsigned short int) ((var_1_5 + var_1_43) + (max (var_1_40 , var_1_15)))))) : (var_1_73 == ((unsigned short int) (abs (max (var_1_43 , var_1_75)))))) : (var_1_73 == ((unsigned short int) ((max (var_1_75 , var_1_76)) - 2)))))) && (((min (last_1_var_1_55 , last_1_var_1_59)) >= (min (last_1_var_1_14 , last_1_var_1_47))) ? ((last_1_var_1_52 != var_1_34) ? (var_1_77 == ((signed char) (min (var_1_28 , (min ((var_1_43 + var_1_30) , var_1_4)))))) : 1) : (var_1_77 == ((signed char) (abs (var_1_3)))))) && ((var_1_60 != ((var_1_94 * var_1_25) + var_1_67)) ? (var_1_80 == ((signed char) (max ((var_1_28 + (var_1_81 + var_1_82)) , var_1_4)))) : (var_1_98 ? (var_1_80 == ((signed char) ((max ((var_1_43 + var_1_83) , var_1_4)) - var_1_32))) : (var_1_80 == ((signed char) ((min (var_1_31 , var_1_30)) + var_1_29)))))) && (var_1_84 == ((signed short int) (min ((-32 + last_1_var_1_84) , var_1_30))))) && ((! (var_1_93 <= (8 * var_1_20))) ? ((var_1_81 > var_1_96) ? (var_1_85 == ((unsigned char) ((min (var_1_43 , (min (var_1_32 , var_1_83)))) + 50))) : 1) : ((var_1_18 || var_1_71) ? (var_1_85 == ((unsigned char) (min (32 , ((var_1_83 + var_1_43) + var_1_4))))) : 1))) && ((! var_1_92) ? (var_1_86 == ((unsigned char) 10)) : ((last_1_var_1_86 > var_1_59) ? ((var_1_5 > 0) ? (var_1_86 == ((unsigned char) (var_1_83 + var_1_4))) : 1) : 1))) && ((var_1_16 || var_1_18) ? ((var_1_85 > (var_1_88 / 8)) ? (var_1_87 == ((unsigned long int) (max ((var_1_70 + var_1_3) , var_1_61)))) : 1) : 1)) && (var_1_88 == ((signed short int) (max (last_1_var_1_33 , last_1_var_1_88))))) && (((min (var_1_33 , var_1_81)) > var_1_73) ? (var_1_89 == ((unsigned long int) var_1_75)) : 1)) && (var_1_18 ? (var_1_90 == ((signed short int) var_1_32)) : (var_1_90 == ((signed short int) var_1_88)))) && (var_1_72 ? (var_1_91 == ((signed short int) var_1_81)) : (var_1_91 == ((signed short int) var_1_4)))) && (var_1_71 ? (var_1_92 == ((unsigned char) var_1_18)) : (var_1_92 == ((unsigned char) var_1_19)))) && (var_1_93 == ((signed long int) var_1_83))) && (var_1_94 == ((signed long int) var_1_4))) && (var_1_71 ? (var_1_95 == ((float) var_1_13)) : 1)) && (var_1_71 ? (var_1_96 == ((signed char) var_1_32)) : 1)) && (var_1_71 ? (var_1_97 == ((unsigned long int) var_1_87)) : (var_1_97 == ((unsigned long int) var_1_32)))) && (var_1_16 ? (var_1_98 == ((unsigned char) var_1_19)) : (var_1_98 == ((unsigned char) var_1_19)))) && (var_1_99 == ((unsigned char) var_1_43))) && (var_1_71 ? (var_1_100 == ((double) var_1_10)) : (var_1_100 == ((double) var_1_65)))) && ((var_1_92 && (var_1_74 != var_1_43)) ? (var_1_18 ? (var_1_101 == ((double) (max (var_1_10 , var_1_102)))) : 1) : (((var_1_26 | var_1_67) != var_1_84) ? (var_1_101 == ((double) var_1_54)) : (var_1_101 == ((double) var_1_11))))
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
