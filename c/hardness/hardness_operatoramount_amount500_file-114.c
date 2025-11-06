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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch114Amount500.c", 13, "reach_error"); }
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
signed char var_1_1 = 5;
signed char var_1_3 = -4;
signed char var_1_4 = 2;
signed char var_1_5 = 10;
signed char var_1_6 = 16;
unsigned char var_1_7 = 25;
unsigned short int var_1_8 = 39481;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 10;
unsigned char var_1_11 = 5;
unsigned short int var_1_12 = 29202;
unsigned short int var_1_13 = 18829;
double var_1_14 = 127.5;
float var_1_15 = 127.6;
float var_1_17 = 1.5;
float var_1_18 = 9999.875;
float var_1_19 = 1000000000.5;
float var_1_20 = 64.4;
float var_1_21 = 99999.5;
signed long int var_1_22 = -200;
unsigned char var_1_23 = 4;
signed short int var_1_25 = 100;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
float var_1_31 = 127.5;
double var_1_33 = 0.0;
double var_1_34 = 32.85;
signed short int var_1_35 = -4;
unsigned short int var_1_36 = 25;
unsigned short int var_1_38 = 46973;
unsigned short int var_1_39 = 38059;
float var_1_40 = 1.4;
signed short int var_1_41 = -25;
double var_1_42 = 31.85;
unsigned short int var_1_43 = 0;
unsigned char var_1_44 = 32;
unsigned char var_1_45 = 200;
unsigned char var_1_46 = 100;
unsigned char var_1_47 = 32;
unsigned char var_1_48 = 25;
signed long int var_1_49 = -128;
signed long int var_1_50 = -500;
signed long int var_1_51 = 128;
unsigned char var_1_52 = 0;
signed long int var_1_53 = 2;
signed char var_1_54 = 5;
signed char var_1_56 = 10;
signed char var_1_57 = 8;
unsigned char var_1_58 = 0;
signed long int var_1_59 = 2;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 100;
unsigned short int var_1_62 = 25;
unsigned short int var_1_63 = 24289;
unsigned short int var_1_64 = 32;
unsigned short int var_1_65 = 54142;
unsigned long int var_1_66 = 10;
double var_1_67 = 0.5;
double var_1_68 = 31.5;
signed short int var_1_69 = 50;
float var_1_70 = 3.5;
unsigned long int var_1_71 = 3487699498;
unsigned char var_1_72 = 1;
double var_1_73 = 1.7;
double var_1_74 = 4.4;
double var_1_75 = 7.125;
double var_1_76 = 10.5;
double var_1_77 = 24.6;
signed long int var_1_78 = 8;
signed short int var_1_79 = 16;
unsigned char var_1_81 = 10;
signed short int var_1_82 = -4;
signed short int var_1_83 = 0;
signed long int var_1_84 = 50;
unsigned short int var_1_85 = 8;
unsigned short int var_1_86 = 51733;
unsigned long int var_1_87 = 32;
unsigned char var_1_88 = 10;
unsigned char var_1_89 = 16;
signed long int var_1_90 = -4;
unsigned short int var_1_91 = 200;
unsigned char var_1_92 = 32;
double var_1_93 = 10.3;
double var_1_94 = 32.2;
unsigned char var_1_95 = 0;
unsigned char var_1_97 = 64;
unsigned long int var_1_98 = 64;
double var_1_99 = 10000000.75;
double var_1_100 = 5.177;
signed char var_1_101 = 32;
signed long int var_1_102 = 4;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_11 = 5;
signed long int last_1_var_1_22 = -200;
signed short int last_1_var_1_41 = -25;
signed long int last_1_var_1_49 = -128;
signed long int last_1_var_1_51 = 128;
signed long int last_1_var_1_53 = 2;
signed char last_1_var_1_54 = 5;
unsigned char last_1_var_1_58 = 0;
signed long int last_1_var_1_59 = 2;
unsigned char last_1_var_1_60 = 0;
unsigned short int last_1_var_1_62 = 25;
double last_1_var_1_67 = 0.5;
signed short int last_1_var_1_69 = 50;
unsigned char last_1_var_1_72 = 1;
signed short int last_1_var_1_82 = -4;
signed long int last_1_var_1_84 = 50;
unsigned short int last_1_var_1_85 = 8;
unsigned long int last_1_var_1_87 = 32;
unsigned char last_1_var_1_88 = 10;
signed long int last_1_var_1_90 = -4;
unsigned char last_1_var_1_95 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req24Batch114Amount500
	if (last_1_var_1_67 <= var_1_21) {
		var_1_59 = (abs ((var_1_39 - var_1_38) + (last_1_var_1_22 - var_1_47)));
	} else {
		var_1_59 = (min ((max (last_1_var_1_49 , last_1_var_1_58)) , (last_1_var_1_85 + last_1_var_1_90)));
	}


	// From: Req31Batch114Amount500
	signed long int stepLocal_14 = - (var_1_9 / var_1_8);
	unsigned char stepLocal_13 = last_1_var_1_95;
	if (((var_1_71 - last_1_var_1_62) - (max (var_1_63 , var_1_12))) >= stepLocal_14) {
		var_1_70 = (16.7f + var_1_68);
	} else {
		if (stepLocal_13 && last_1_var_1_72) {
			var_1_70 = (var_1_20 + var_1_68);
		}
	}


	// From: Req16Batch114Amount500
	if (var_1_19 <= var_1_70) {
		var_1_44 = (var_1_5 + (var_1_6 + var_1_10));
	} else {
		var_1_44 = ((var_1_45 - var_1_10) - (var_1_46 - (var_1_47 - var_1_48)));
	}


	// From: Req9Batch114Amount500
	if (! (var_1_6 < last_1_var_1_60)) {
		var_1_26 = var_1_27;
	} else {
		if (last_1_var_1_95) {
			var_1_26 = (! (var_1_27 && var_1_29));
		} else {
			if ((max (last_1_var_1_59 , last_1_var_1_60)) > (5 - var_1_12)) {
				var_1_26 = (last_1_var_1_72 || (var_1_29 || var_1_30));
			} else {
				var_1_26 = (last_1_var_1_72 || var_1_30);
			}
		}
	}


	// From: Req34Batch114Amount500
	unsigned char stepLocal_16 = last_1_var_1_72;
	unsigned long int stepLocal_15 = last_1_var_1_87;
	if (last_1_var_1_72) {
		if (var_1_27 || stepLocal_16) {
			var_1_78 = (min ((last_1_var_1_88 + var_1_10) , last_1_var_1_41));
		}
	} else {
		if (stepLocal_15 <= last_1_var_1_11) {
			var_1_78 = last_1_var_1_41;
		}
	}


	// From: Req20Batch114Amount500
	unsigned char stepLocal_5 = var_1_45;
	if (last_1_var_1_53 < stepLocal_5) {
		if (var_1_27) {
			var_1_53 = (var_1_50 + (last_1_var_1_85 - var_1_12));
		} else {
			var_1_53 = ((min (var_1_10 , (last_1_var_1_69 + var_1_4))) + last_1_var_1_53);
		}
	} else {
		if (! last_1_var_1_95) {
			if (! last_1_var_1_95) {
				var_1_53 = last_1_var_1_69;
			} else {
				var_1_53 = (min ((last_1_var_1_87 + last_1_var_1_51) , var_1_10));
			}
		} else {
			var_1_53 = (var_1_6 - last_1_var_1_53);
		}
	}


	// From: Req48Batch114Amount500
	if (last_1_var_1_72) {
		var_1_95 = var_1_30;
	} else {
		var_1_95 = 0;
	}


	// From: Req2Batch114Amount500
	signed char stepLocal_1 = var_1_5;
	signed long int stepLocal_0 = (var_1_8 - var_1_5) * var_1_6;
	if (var_1_3 < stepLocal_1) {
		if (stepLocal_0 > -256) {
			var_1_7 = (var_1_9 - var_1_5);
		} else {
			var_1_7 = (16 + (max (var_1_5 , (var_1_6 + var_1_10))));
		}
	} else {
		var_1_7 = (8 + (min (var_1_5 , var_1_6)));
	}


	// From: Req3Batch114Amount500
	if (((var_1_12 + var_1_13) - var_1_5) < var_1_4) {
		var_1_11 = (max (var_1_5 , 0));
	} else {
		var_1_11 = (abs (var_1_9 - (64 - var_1_10)));
	}


	// From: Req4Batch114Amount500
	var_1_14 = 255.2;


	// From: Req6Batch114Amount500
	signed char stepLocal_2 = var_1_6;
	if (var_1_12 > stepLocal_2) {
		var_1_22 = (var_1_7 + var_1_9);
	}


	// From: Req15Batch114Amount500
	if (var_1_30) {
		var_1_43 = (var_1_39 - var_1_10);
	} else {
		var_1_43 = (var_1_39 - var_1_6);
	}


	// From: Req22Batch114Amount500
	if (! var_1_26) {
		var_1_56 = (var_1_57 + var_1_47);
	}


	// From: Req29Batch114Amount500
	if (1 > var_1_45) {
		if (last_1_var_1_67 < var_1_17) {
			var_1_67 = (min ((var_1_20 - (var_1_21 + var_1_68)) , (min (var_1_19 , var_1_18))));
		} else {
			var_1_67 = (min ((max ((49.5 - 0.75) , var_1_19)) , (abs (min (var_1_17 , var_1_20)))));
		}
	}


	// From: Req37Batch114Amount500
	if ((var_1_45 - var_1_6) > (last_1_var_1_82 / var_1_9)) {
		var_1_82 = (abs (var_1_83 - var_1_5));
	}


	// From: Req40Batch114Amount500
	var_1_87 = var_1_65;


	// From: Req41Batch114Amount500
	var_1_88 = 5;


	// From: Req42Batch114Amount500
	var_1_89 = var_1_46;


	// From: Req46Batch114Amount500
	var_1_93 = var_1_76;


	// From: Req49Batch114Amount500
	if (var_1_30) {
		var_1_97 = var_1_10;
	} else {
		var_1_97 = var_1_5;
	}


	// From: Req50Batch114Amount500
	var_1_98 = var_1_13;


	// From: Req51Batch114Amount500
	var_1_99 = var_1_100;


	// From: Req52Batch114Amount500
	var_1_101 = var_1_5;


	// From: Req32Batch114Amount500
	if ((! var_1_26) && (var_1_53 != var_1_63)) {
		var_1_72 = (! 0);
	}


	// From: Req36Batch114Amount500
	if (var_1_72) {
		var_1_81 = (min (((var_1_46 + var_1_61) - var_1_48) , var_1_6));
	} else {
		var_1_81 = (min (var_1_9 , (var_1_61 + var_1_6)));
	}


	// From: Req43Batch114Amount500
	if (var_1_30) {
		var_1_90 = var_1_53;
	} else {
		var_1_90 = var_1_78;
	}


	// From: Req11Batch114Amount500
	if (-4 <= ((var_1_22 | var_1_5) * (var_1_13 / var_1_12))) {
		var_1_35 = ((min (var_1_10 , var_1_44)) + var_1_9);
	}


	// From: Req18Batch114Amount500
	signed long int stepLocal_4 = var_1_78;
	if (stepLocal_4 <= (var_1_5 / var_1_45)) {
		if (var_1_95) {
			var_1_51 = (max (var_1_59 , (abs (var_1_78))));
		} else {
			var_1_51 = var_1_8;
		}
	}


	// From: Req1Batch114Amount500
	if (! var_1_72) {
		var_1_1 = (max ((var_1_3 + 4) , (var_1_4 + (var_1_5 - var_1_6))));
	}


	// From: Req19Batch114Amount500
	if (var_1_67 < 0.75f) {
		var_1_52 = var_1_27;
	}


	// From: Req25Batch114Amount500
	if (var_1_52) {
		var_1_60 = ((var_1_46 + (var_1_61 - var_1_48)) - var_1_47);
	} else {
		var_1_60 = (var_1_47 + (min (var_1_46 , var_1_10)));
	}


	// From: Req27Batch114Amount500
	if (! var_1_27) {
		if (var_1_4 <= var_1_87) {
			var_1_64 = ((var_1_65 - var_1_5) - var_1_45);
		}
	} else {
		var_1_64 = (abs (min (var_1_6 , var_1_45)));
	}


	// From: Req30Batch114Amount500
	signed long int stepLocal_12 = var_1_3 + var_1_61;
	if (stepLocal_12 < 8) {
		var_1_69 = ((var_1_4 + var_1_6) + var_1_89);
	}


	// From: Req33Batch114Amount500
	if ((var_1_33 - var_1_34) == var_1_18) {
		var_1_73 = ((min ((var_1_21 - var_1_68) , (var_1_74 + var_1_75))) + (var_1_76 + var_1_77));
	} else {
		if (var_1_87 > (var_1_38 / (max (var_1_9 , var_1_8)))) {
			if (10.125f < var_1_14) {
				var_1_73 = (max (((min (var_1_20 , var_1_68)) - var_1_21) , var_1_74));
			} else {
				var_1_73 = (max (var_1_74 , (var_1_19 + 128.5)));
			}
		} else {
			var_1_73 = ((63.5 - var_1_21) + var_1_77);
		}
	}


	// From: Req45Batch114Amount500
	if (var_1_52) {
		var_1_92 = var_1_9;
	} else {
		var_1_92 = var_1_6;
	}


	// From: Req47Batch114Amount500
	if (var_1_52) {
		var_1_94 = var_1_17;
	}


	// From: Req7Batch114Amount500
	if (var_1_95 && ((var_1_5 < var_1_4) && var_1_52)) {
		if (var_1_52) {
			if (var_1_8 > var_1_44) {
				var_1_23 = (max (var_1_10 , var_1_5));
			} else {
				var_1_23 = var_1_9;
			}
		} else {
			var_1_23 = var_1_5;
		}
	}


	// From: Req35Batch114Amount500
	if (! var_1_95) {
		var_1_79 = (var_1_81 + (var_1_46 + var_1_47));
	}


	// From: Req5Batch114Amount500
	if (var_1_99 <= var_1_73) {
		if (49.1f < var_1_99) {
			var_1_15 = (min (var_1_17 , var_1_18));
		}
	} else {
		var_1_15 = (var_1_19 + (var_1_20 - var_1_21));
	}


	// From: Req10Batch114Amount500
	if ((var_1_97 * var_1_92) <= var_1_22) {
		var_1_31 = var_1_20;
	} else {
		if (((var_1_33 - var_1_21) - (max (var_1_20 , var_1_34))) <= var_1_67) {
			var_1_31 = ((abs (abs (var_1_18))) - var_1_20);
		}
	}


	// From: Req21Batch114Amount500
	if (last_1_var_1_54 >= (var_1_4 * (~ -32))) {
		if ((max (var_1_94 , (- var_1_14))) <= var_1_19) {
			var_1_54 = (var_1_6 + (var_1_48 + 8));
		}
	} else {
		if (var_1_45 < (- 100)) {
			var_1_54 = (min ((max ((max (var_1_45 , 64)) , var_1_6)) , (var_1_47 - (var_1_48 + 2))));
		} else {
			var_1_54 = (var_1_48 - (var_1_47 + var_1_10));
		}
	}


	// From: Req44Batch114Amount500
	if (var_1_29) {
		var_1_91 = var_1_45;
	} else {
		var_1_91 = var_1_23;
	}


	// From: Req28Batch114Amount500
	signed char stepLocal_11 = var_1_5;
	if (var_1_91 >= stepLocal_11) {
		if (var_1_27) {
			var_1_66 = var_1_12;
		} else {
			var_1_66 = (var_1_9 + var_1_92);
		}
	}


	// From: Req23Batch114Amount500
	unsigned short int stepLocal_7 = var_1_39;
	signed long int stepLocal_6 = max (var_1_78 , var_1_64);
	if (stepLocal_6 == (var_1_66 * var_1_48)) {
		if (var_1_91 <= stepLocal_7) {
			if (! var_1_52) {
				var_1_58 = (var_1_10 + (var_1_5 + var_1_48));
			} else {
				var_1_58 = (var_1_10 + var_1_6);
			}
		}
	} else {
		var_1_58 = (var_1_9 - var_1_46);
	}


	// From: Req13Batch114Amount500
	unsigned short int stepLocal_3 = var_1_8;
	if (stepLocal_3 <= ((var_1_39 * var_1_91) + (- var_1_59))) {
		var_1_40 = (abs (var_1_18));
	}


	// From: Req26Batch114Amount500
	unsigned char stepLocal_10 = var_1_10;
	unsigned char stepLocal_9 = var_1_47 < (var_1_78 & var_1_53);
	signed long int stepLocal_8 = var_1_9 / (max (1000000000 , var_1_46));
	if (var_1_39 <= stepLocal_10) {
		if (var_1_26) {
			if (stepLocal_9 || var_1_26) {
				var_1_62 = (last_1_var_1_62 + var_1_45);
			}
		} else {
			if (var_1_70 > var_1_17) {
				if (stepLocal_8 <= (min (var_1_39 , (var_1_8 * var_1_66)))) {
					var_1_62 = (max (var_1_13 , var_1_90));
				} else {
					var_1_62 = ((max ((var_1_13 - var_1_6) , 5)) + (abs (var_1_98)));
				}
			} else {
				var_1_62 = ((max ((var_1_13 - var_1_5) , var_1_10)) + var_1_78);
			}
		}
	} else {
		var_1_62 = ((var_1_13 + var_1_63) - (max (var_1_45 , 0)));
	}


	// From: Req17Batch114Amount500
	if (((var_1_6 + var_1_47) << var_1_53) <= var_1_46) {
		if ((abs (var_1_19)) <= (var_1_18 / var_1_33)) {
			var_1_49 = (max (((var_1_62 + var_1_50) + var_1_5) , var_1_8));
		} else {
			var_1_49 = (var_1_12 - var_1_91);
		}
	} else {
		if ((var_1_8 >= var_1_11) || var_1_26) {
			if (var_1_19 != (var_1_93 / var_1_42)) {
				var_1_49 = (min (var_1_47 , var_1_38));
			} else {
				var_1_49 = (var_1_13 - var_1_38);
			}
		}
	}


	// From: Req12Batch114Amount500
	if ((max (var_1_15 , (var_1_73 * var_1_19))) > (- 2.5)) {
		if (0.25f >= (var_1_31 * var_1_18)) {
			if (var_1_29) {
				var_1_36 = (min (var_1_12 , (var_1_38 - var_1_49)));
			}
		} else {
			var_1_36 = ((max (var_1_38 , var_1_39)) - (var_1_62 + var_1_49));
		}
	} else {
		if (var_1_5 == var_1_98) {
			var_1_36 = (((abs (var_1_5)) + 50) + (var_1_62 + var_1_9));
		}
	}


	// From: Req8Batch114Amount500
	if (((min (var_1_9 , var_1_23)) << var_1_49) > (var_1_59 | (var_1_13 | var_1_12))) {
		var_1_25 = ((max ((var_1_23 + var_1_4) , var_1_3)) + var_1_9);
	} else {
		var_1_25 = ((min (var_1_9 , (var_1_6 - var_1_59))) + var_1_5);
	}


	// From: Req53Batch114Amount500
	signed long int stepLocal_20 = var_1_59;
	unsigned char stepLocal_19 = var_1_60;
	if (stepLocal_20 > var_1_90) {
		var_1_102 = (max (var_1_12 , (var_1_49 + var_1_64)));
	} else {
		if (var_1_27) {
			if (stepLocal_19 < var_1_65) {
				var_1_102 = (var_1_49 + var_1_65);
			} else {
				var_1_102 = var_1_83;
			}
		}
	}


	// From: Req38Batch114Amount500
	signed long int stepLocal_18 = (var_1_36 / var_1_47) << var_1_102;
	signed long int stepLocal_17 = var_1_46 + var_1_48;
	if (var_1_50 != stepLocal_17) {
		if (var_1_62 > stepLocal_18) {
			var_1_84 = ((var_1_6 + (min (var_1_22 , var_1_4))) + (max ((var_1_46 + var_1_64) , last_1_var_1_84)));
		} else {
			var_1_84 = ((var_1_45 - (var_1_36 + var_1_48)) + (max (var_1_53 , var_1_79)));
		}
	}


	// From: Req39Batch114Amount500
	if (var_1_95 && var_1_26) {
		if (((- var_1_78) < var_1_9) && ((var_1_45 + var_1_87) < var_1_46)) {
			var_1_85 = (max (var_1_38 , ((var_1_63 + 19944) - var_1_9)));
		} else {
			if ((var_1_61 + var_1_46) > (last_1_var_1_85 + var_1_92)) {
				var_1_85 = (var_1_38 - var_1_10);
			}
		}
	} else {
		if ((var_1_48 - var_1_10) >= var_1_84) {
			var_1_85 = ((min (var_1_65 , (var_1_86 - var_1_48))) - (max (25 , var_1_47)));
		}
	}


	// From: Req14Batch114Amount500
	if ((var_1_21 / (max (var_1_33 , var_1_42))) < (- var_1_99)) {
		var_1_41 = (var_1_35 + var_1_84);
	} else {
		var_1_41 = (min (var_1_9 , var_1_84));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -63);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 32767);
	assume_abort_if_not(var_1_8 <= 65535);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 127);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 16383);
	assume_abort_if_not(var_1_12 <= 32768);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 16384);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 4611686.018427388000e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 32767);
	assume_abort_if_not(var_1_38 <= 65534);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 32767);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854776000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	assume_abort_if_not(var_1_42 != 0.0F);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 190);
	assume_abort_if_not(var_1_45 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 63);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 31);
	assume_abort_if_not(var_1_47 <= 63);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 31);
	var_1_50 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_50 >= -536870911);
	assume_abort_if_not(var_1_50 <= 536870911);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= -63);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 95);
	assume_abort_if_not(var_1_61 <= 127);
	var_1_63 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_63 >= 16384);
	assume_abort_if_not(var_1_63 <= 32767);
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 49150);
	assume_abort_if_not(var_1_65 <= 65534);
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 4611686.018427383000e+12F && var_1_68 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_71 >= 3221225471);
	assume_abort_if_not(var_1_71 <= 4294967295);
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= -230584.3009213691400e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 2305843.009213691400e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_75 >= -230584.3009213691400e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 2305843.009213691400e+12F && var_1_75 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_76 >= -230584.3009213691400e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 2305843.009213691400e+12F && var_1_76 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_77 >= -230584.3009213691400e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 2305843.009213691400e+12F && var_1_77 >= 1.0e-20F ));
	var_1_83 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 32766);
	var_1_86 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_86 >= 49150);
	assume_abort_if_not(var_1_86 <= 65534);
	var_1_100 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_100 >= -922337.2036854766000e+13F && var_1_100 <= -1.0e-20F) || (var_1_100 <= 9223372.036854766000e+12F && var_1_100 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_95 = var_1_95;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((! var_1_72) ? (var_1_1 == ((signed char) (max ((var_1_3 + 4) , (var_1_4 + (var_1_5 - var_1_6)))))) : 1) && ((var_1_3 < var_1_5) ? ((((var_1_8 - var_1_5) * var_1_6) > -256) ? (var_1_7 == ((unsigned char) (var_1_9 - var_1_5))) : (var_1_7 == ((unsigned char) (16 + (max (var_1_5 , (var_1_6 + var_1_10))))))) : (var_1_7 == ((unsigned char) (8 + (min (var_1_5 , var_1_6))))))) && ((((var_1_12 + var_1_13) - var_1_5) < var_1_4) ? (var_1_11 == ((unsigned char) (max (var_1_5 , 0)))) : (var_1_11 == ((unsigned char) (abs (var_1_9 - (64 - var_1_10))))))) && (var_1_14 == ((double) 255.2))) && ((var_1_99 <= var_1_73) ? ((49.1f < var_1_99) ? (var_1_15 == ((float) (min (var_1_17 , var_1_18)))) : 1) : (var_1_15 == ((float) (var_1_19 + (var_1_20 - var_1_21)))))) && ((var_1_12 > var_1_6) ? (var_1_22 == ((signed long int) (var_1_7 + var_1_9))) : 1)) && ((var_1_95 && ((var_1_5 < var_1_4) && var_1_52)) ? (var_1_52 ? ((var_1_8 > var_1_44) ? (var_1_23 == ((unsigned char) (max (var_1_10 , var_1_5)))) : (var_1_23 == ((unsigned char) var_1_9))) : (var_1_23 == ((unsigned char) var_1_5))) : 1)) && ((((min (var_1_9 , var_1_23)) << var_1_49) > (var_1_59 | (var_1_13 | var_1_12))) ? (var_1_25 == ((signed short int) ((max ((var_1_23 + var_1_4) , var_1_3)) + var_1_9))) : (var_1_25 == ((signed short int) ((min (var_1_9 , (var_1_6 - var_1_59))) + var_1_5))))) && ((! (var_1_6 < last_1_var_1_60)) ? (var_1_26 == ((unsigned char) var_1_27)) : (last_1_var_1_95 ? (var_1_26 == ((unsigned char) (! (var_1_27 && var_1_29)))) : (((max (last_1_var_1_59 , last_1_var_1_60)) > (5 - var_1_12)) ? (var_1_26 == ((unsigned char) (last_1_var_1_72 || (var_1_29 || var_1_30)))) : (var_1_26 == ((unsigned char) (last_1_var_1_72 || var_1_30))))))) && (((var_1_97 * var_1_92) <= var_1_22) ? (var_1_31 == ((float) var_1_20)) : ((((var_1_33 - var_1_21) - (max (var_1_20 , var_1_34))) <= var_1_67) ? (var_1_31 == ((float) ((abs (abs (var_1_18))) - var_1_20))) : 1))) && ((-4 <= ((var_1_22 | var_1_5) * (var_1_13 / var_1_12))) ? (var_1_35 == ((signed short int) ((min (var_1_10 , var_1_44)) + var_1_9))) : 1)) && (((max (var_1_15 , (var_1_73 * var_1_19))) > (- 2.5)) ? ((0.25f >= (var_1_31 * var_1_18)) ? (var_1_29 ? (var_1_36 == ((unsigned short int) (min (var_1_12 , (var_1_38 - var_1_49))))) : 1) : (var_1_36 == ((unsigned short int) ((max (var_1_38 , var_1_39)) - (var_1_62 + var_1_49))))) : ((var_1_5 == var_1_98) ? (var_1_36 == ((unsigned short int) (((abs (var_1_5)) + 50) + (var_1_62 + var_1_9)))) : 1))) && ((var_1_8 <= ((var_1_39 * var_1_91) + (- var_1_59))) ? (var_1_40 == ((float) (abs (var_1_18)))) : 1)) && (((var_1_21 / (max (var_1_33 , var_1_42))) < (- var_1_99)) ? (var_1_41 == ((signed short int) (var_1_35 + var_1_84))) : (var_1_41 == ((signed short int) (min (var_1_9 , var_1_84)))))) && (var_1_30 ? (var_1_43 == ((unsigned short int) (var_1_39 - var_1_10))) : (var_1_43 == ((unsigned short int) (var_1_39 - var_1_6))))) && ((var_1_19 <= var_1_70) ? (var_1_44 == ((unsigned char) (var_1_5 + (var_1_6 + var_1_10)))) : (var_1_44 == ((unsigned char) ((var_1_45 - var_1_10) - (var_1_46 - (var_1_47 - var_1_48))))))) && ((((var_1_6 + var_1_47) << var_1_53) <= var_1_46) ? (((abs (var_1_19)) <= (var_1_18 / var_1_33)) ? (var_1_49 == ((signed long int) (max (((var_1_62 + var_1_50) + var_1_5) , var_1_8)))) : (var_1_49 == ((signed long int) (var_1_12 - var_1_91)))) : (((var_1_8 >= var_1_11) || var_1_26) ? ((var_1_19 != (var_1_93 / var_1_42)) ? (var_1_49 == ((signed long int) (min (var_1_47 , var_1_38)))) : (var_1_49 == ((signed long int) (var_1_13 - var_1_38)))) : 1))) && ((var_1_78 <= (var_1_5 / var_1_45)) ? (var_1_95 ? (var_1_51 == ((signed long int) (max (var_1_59 , (abs (var_1_78)))))) : (var_1_51 == ((signed long int) var_1_8))) : 1)) && ((var_1_67 < 0.75f) ? (var_1_52 == ((unsigned char) var_1_27)) : 1)) && ((last_1_var_1_53 < var_1_45) ? (var_1_27 ? (var_1_53 == ((signed long int) (var_1_50 + (last_1_var_1_85 - var_1_12)))) : (var_1_53 == ((signed long int) ((min (var_1_10 , (last_1_var_1_69 + var_1_4))) + last_1_var_1_53)))) : ((! last_1_var_1_95) ? ((! last_1_var_1_95) ? (var_1_53 == ((signed long int) last_1_var_1_69)) : (var_1_53 == ((signed long int) (min ((last_1_var_1_87 + last_1_var_1_51) , var_1_10))))) : (var_1_53 == ((signed long int) (var_1_6 - last_1_var_1_53)))))) && ((last_1_var_1_54 >= (var_1_4 * (~ -32))) ? (((max (var_1_94 , (- var_1_14))) <= var_1_19) ? (var_1_54 == ((signed char) (var_1_6 + (var_1_48 + 8)))) : 1) : ((var_1_45 < (- 100)) ? (var_1_54 == ((signed char) (min ((max ((max (var_1_45 , 64)) , var_1_6)) , (var_1_47 - (var_1_48 + 2)))))) : (var_1_54 == ((signed char) (var_1_48 - (var_1_47 + var_1_10))))))) && ((! var_1_26) ? (var_1_56 == ((signed char) (var_1_57 + var_1_47))) : 1)) && (((max (var_1_78 , var_1_64)) == (var_1_66 * var_1_48)) ? ((var_1_91 <= var_1_39) ? ((! var_1_52) ? (var_1_58 == ((unsigned char) (var_1_10 + (var_1_5 + var_1_48)))) : (var_1_58 == ((unsigned char) (var_1_10 + var_1_6)))) : 1) : (var_1_58 == ((unsigned char) (var_1_9 - var_1_46))))) && ((last_1_var_1_67 <= var_1_21) ? (var_1_59 == ((signed long int) (abs ((var_1_39 - var_1_38) + (last_1_var_1_22 - var_1_47))))) : (var_1_59 == ((signed long int) (min ((max (last_1_var_1_49 , last_1_var_1_58)) , (last_1_var_1_85 + last_1_var_1_90))))))) && (var_1_52 ? (var_1_60 == ((unsigned char) ((var_1_46 + (var_1_61 - var_1_48)) - var_1_47))) : (var_1_60 == ((unsigned char) (var_1_47 + (min (var_1_46 , var_1_10))))))) && ((var_1_39 <= var_1_10) ? (var_1_26 ? (((var_1_47 < (var_1_78 & var_1_53)) || var_1_26) ? (var_1_62 == ((unsigned short int) (last_1_var_1_62 + var_1_45))) : 1) : ((var_1_70 > var_1_17) ? (((var_1_9 / (max (1000000000 , var_1_46))) <= (min (var_1_39 , (var_1_8 * var_1_66)))) ? (var_1_62 == ((unsigned short int) (max (var_1_13 , var_1_90)))) : (var_1_62 == ((unsigned short int) ((max ((var_1_13 - var_1_6) , 5)) + (abs (var_1_98)))))) : (var_1_62 == ((unsigned short int) ((max ((var_1_13 - var_1_5) , var_1_10)) + var_1_78))))) : (var_1_62 == ((unsigned short int) ((var_1_13 + var_1_63) - (max (var_1_45 , 0))))))) && ((! var_1_27) ? ((var_1_4 <= var_1_87) ? (var_1_64 == ((unsigned short int) ((var_1_65 - var_1_5) - var_1_45))) : 1) : (var_1_64 == ((unsigned short int) (abs (min (var_1_6 , var_1_45))))))) && ((var_1_91 >= var_1_5) ? (var_1_27 ? (var_1_66 == ((unsigned long int) var_1_12)) : (var_1_66 == ((unsigned long int) (var_1_9 + var_1_92)))) : 1)) && ((1 > var_1_45) ? ((last_1_var_1_67 < var_1_17) ? (var_1_67 == ((double) (min ((var_1_20 - (var_1_21 + var_1_68)) , (min (var_1_19 , var_1_18)))))) : (var_1_67 == ((double) (min ((max ((49.5 - 0.75) , var_1_19)) , (abs (min (var_1_17 , var_1_20)))))))) : 1)) && (((var_1_3 + var_1_61) < 8) ? (var_1_69 == ((signed short int) ((var_1_4 + var_1_6) + var_1_89))) : 1)) && ((((var_1_71 - last_1_var_1_62) - (max (var_1_63 , var_1_12))) >= (- (var_1_9 / var_1_8))) ? (var_1_70 == ((float) (16.7f + var_1_68))) : ((last_1_var_1_95 && last_1_var_1_72) ? (var_1_70 == ((float) (var_1_20 + var_1_68))) : 1))) && (((! var_1_26) && (var_1_53 != var_1_63)) ? (var_1_72 == ((unsigned char) (! 0))) : 1)) && (((var_1_33 - var_1_34) == var_1_18) ? (var_1_73 == ((double) ((min ((var_1_21 - var_1_68) , (var_1_74 + var_1_75))) + (var_1_76 + var_1_77)))) : ((var_1_87 > (var_1_38 / (max (var_1_9 , var_1_8)))) ? ((10.125f < var_1_14) ? (var_1_73 == ((double) (max (((min (var_1_20 , var_1_68)) - var_1_21) , var_1_74)))) : (var_1_73 == ((double) (max (var_1_74 , (var_1_19 + 128.5)))))) : (var_1_73 == ((double) ((63.5 - var_1_21) + var_1_77)))))) && (last_1_var_1_72 ? ((var_1_27 || last_1_var_1_72) ? (var_1_78 == ((signed long int) (min ((last_1_var_1_88 + var_1_10) , last_1_var_1_41)))) : 1) : ((last_1_var_1_87 <= last_1_var_1_11) ? (var_1_78 == ((signed long int) last_1_var_1_41)) : 1))) && ((! var_1_95) ? (var_1_79 == ((signed short int) (var_1_81 + (var_1_46 + var_1_47)))) : 1)) && (var_1_72 ? (var_1_81 == ((unsigned char) (min (((var_1_46 + var_1_61) - var_1_48) , var_1_6)))) : (var_1_81 == ((unsigned char) (min (var_1_9 , (var_1_61 + var_1_6))))))) && (((var_1_45 - var_1_6) > (last_1_var_1_82 / var_1_9)) ? (var_1_82 == ((signed short int) (abs (var_1_83 - var_1_5)))) : 1)) && ((var_1_50 != (var_1_46 + var_1_48)) ? ((var_1_62 > ((var_1_36 / var_1_47) << var_1_102)) ? (var_1_84 == ((signed long int) ((var_1_6 + (min (var_1_22 , var_1_4))) + (max ((var_1_46 + var_1_64) , last_1_var_1_84))))) : (var_1_84 == ((signed long int) ((var_1_45 - (var_1_36 + var_1_48)) + (max (var_1_53 , var_1_79)))))) : 1)) && ((var_1_95 && var_1_26) ? ((((- var_1_78) < var_1_9) && ((var_1_45 + var_1_87) < var_1_46)) ? (var_1_85 == ((unsigned short int) (max (var_1_38 , ((var_1_63 + 19944) - var_1_9))))) : (((var_1_61 + var_1_46) > (last_1_var_1_85 + var_1_92)) ? (var_1_85 == ((unsigned short int) (var_1_38 - var_1_10))) : 1)) : (((var_1_48 - var_1_10) >= var_1_84) ? (var_1_85 == ((unsigned short int) ((min (var_1_65 , (var_1_86 - var_1_48))) - (max (25 , var_1_47))))) : 1))) && (var_1_87 == ((unsigned long int) var_1_65))) && (var_1_88 == ((unsigned char) 5))) && (var_1_89 == ((unsigned char) var_1_46))) && (var_1_30 ? (var_1_90 == ((signed long int) var_1_53)) : (var_1_90 == ((signed long int) var_1_78)))) && (var_1_29 ? (var_1_91 == ((unsigned short int) var_1_45)) : (var_1_91 == ((unsigned short int) var_1_23)))) && (var_1_52 ? (var_1_92 == ((unsigned char) var_1_9)) : (var_1_92 == ((unsigned char) var_1_6)))) && (var_1_93 == ((double) var_1_76))) && (var_1_52 ? (var_1_94 == ((double) var_1_17)) : 1)) && (last_1_var_1_72 ? (var_1_95 == ((unsigned char) var_1_30)) : (var_1_95 == ((unsigned char) 0)))) && (var_1_30 ? (var_1_97 == ((unsigned char) var_1_10)) : (var_1_97 == ((unsigned char) var_1_5)))) && (var_1_98 == ((unsigned long int) var_1_13))) && (var_1_99 == ((double) var_1_100))) && (var_1_101 == ((signed char) var_1_5))) && ((var_1_59 > var_1_90) ? (var_1_102 == ((signed long int) (max (var_1_12 , (var_1_49 + var_1_64))))) : (var_1_27 ? ((var_1_60 < var_1_65) ? (var_1_102 == ((signed long int) (var_1_49 + var_1_65))) : (var_1_102 == ((signed long int) var_1_83))) : 1))
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
