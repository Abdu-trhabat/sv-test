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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch36Amount500.c", 13, "reach_error"); }
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
float var_1_1 = -0.5;
float var_1_4 = 32.5;
float var_1_5 = 10.25;
float var_1_6 = 15.2;
unsigned long int var_1_8 = 2;
unsigned long int var_1_9 = 25;
unsigned long int var_1_10 = 0;
unsigned long int var_1_11 = 2;
unsigned long int var_1_12 = 200;
signed char var_1_13 = 0;
signed char var_1_15 = 16;
signed char var_1_16 = -5;
signed char var_1_17 = -1;
signed short int var_1_18 = 128;
signed char var_1_19 = 32;
signed char var_1_20 = 0;
signed char var_1_21 = 8;
float var_1_22 = 15.9;
unsigned long int var_1_24 = 5;
double var_1_25 = 1.15;
double var_1_26 = 499.2;
unsigned long int var_1_27 = 1530103944;
unsigned long int var_1_28 = 1784541223;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
signed long int var_1_32 = -128;
signed long int var_1_33 = -16;
signed long int var_1_34 = 1000000000;
float var_1_35 = -0.4;
float var_1_36 = 3.875;
float var_1_38 = 127.6;
float var_1_39 = 10.8;
float var_1_40 = 4.25;
float var_1_41 = 32.2;
float var_1_42 = 15.625;
float var_1_43 = 63.4;
double var_1_44 = 99.78;
double var_1_46 = 8.5;
double var_1_47 = 64.7;
signed short int var_1_48 = -4;
signed short int var_1_49 = 10000;
signed short int var_1_50 = 10000;
signed short int var_1_51 = 25498;
signed short int var_1_52 = 10000;
signed short int var_1_53 = 8;
unsigned char var_1_54 = 1;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 2;
unsigned long int var_1_57 = 8;
unsigned long int var_1_58 = 2803870943;
signed char var_1_59 = 5;
unsigned long int var_1_60 = 5;
unsigned long int var_1_62 = 1937643257;
signed char var_1_63 = -5;
signed long int var_1_64 = -16;
float var_1_65 = 999.5;
signed long int var_1_66 = 1000000000;
signed long int var_1_67 = -2;
signed long int var_1_68 = 1109459118;
signed short int var_1_69 = -64;
unsigned short int var_1_70 = 128;
unsigned short int var_1_71 = 54620;
signed short int var_1_72 = 2;
unsigned short int var_1_73 = 32;
unsigned short int var_1_74 = 43545;
signed long int var_1_75 = -10;
double var_1_77 = 5.2;
signed char var_1_78 = -25;
signed char var_1_79 = 16;
signed char var_1_80 = 2;
unsigned char var_1_81 = 10;
unsigned char var_1_82 = 128;
signed long int var_1_83 = -25;
signed long int var_1_84 = 1646811923;
float var_1_85 = 3.25;
unsigned short int var_1_86 = 0;
unsigned char var_1_87 = 64;
unsigned char var_1_88 = 50;
unsigned char var_1_89 = 1;
unsigned char var_1_90 = 0;
unsigned char var_1_91 = 1;
signed char var_1_92 = 2;
unsigned char var_1_94 = 0;
signed long int var_1_95 = -5;
unsigned short int var_1_96 = 10;
unsigned char var_1_97 = 2;
unsigned char var_1_98 = 64;
signed short int var_1_99 = 4;
signed short int var_1_100 = -1;
double var_1_101 = 7.75;
signed long int var_1_102 = -100;
signed short int var_1_103 = 1;
signed long int var_1_104 = -25;
unsigned char var_1_105 = 0;
unsigned char var_1_106 = 64;
float var_1_107 = 99999999999.25;
unsigned char var_1_108 = 1;
signed long int var_1_109 = -100000;
unsigned char var_1_110 = 1;
signed short int var_1_111 = -256;
unsigned short int var_1_112 = 1;
signed char var_1_113 = 100;

// Calibration values

// Last'ed variables
float last_1_var_1_1 = -0.5;
unsigned long int last_1_var_1_8 = 2;
float last_1_var_1_22 = 15.9;
unsigned char last_1_var_1_29 = 0;
unsigned long int last_1_var_1_60 = 5;
signed long int last_1_var_1_67 = -2;
signed long int last_1_var_1_75 = -10;
double last_1_var_1_77 = 5.2;
unsigned char last_1_var_1_89 = 1;
signed long int last_1_var_1_95 = -5;
unsigned short int last_1_var_1_96 = 10;
unsigned char last_1_var_1_97 = 2;
signed long int last_1_var_1_102 = -100;
unsigned char last_1_var_1_105 = 0;
signed long int last_1_var_1_109 = -100000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req35Batch36Amount500
	if (var_1_94 && (var_1_21 > last_1_var_1_95)) {
		if (last_1_var_1_77 >= var_1_38) {
			if (var_1_6 != 5.2f) {
				var_1_95 = ((last_1_var_1_67 + var_1_19) + (50 + var_1_20));
			} else {
				var_1_95 = (max (last_1_var_1_96 , var_1_79));
			}
		} else {
			if (((var_1_21 - var_1_88) * (abs (var_1_20))) < last_1_var_1_102) {
				var_1_95 = (var_1_79 - (abs (last_1_var_1_96)));
			} else {
				var_1_95 = var_1_53;
			}
		}
	}


	// From: Req31Batch36Amount500
	if (last_1_var_1_89) {
		var_1_86 = (max ((var_1_74 - (var_1_51 - var_1_56)) , var_1_80));
	}


	// From: Req34Batch36Amount500
	unsigned long int stepLocal_30 = min (last_1_var_1_60 , var_1_27);
	signed long int stepLocal_29 = last_1_var_1_109;
	if (stepLocal_29 >= ((max (var_1_80 , var_1_71)) >> var_1_92)) {
		if (stepLocal_30 < last_1_var_1_8) {
			var_1_91 = ((last_1_var_1_105 || (last_1_var_1_29 && var_1_30)) || var_1_94);
		}
	} else {
		var_1_91 = ((! var_1_90) && (! (! var_1_94)));
	}


	// From: Req43Batch36Amount500
	if (var_1_91) {
		var_1_105 = var_1_94;
	} else {
		var_1_105 = var_1_30;
	}


	// From: Req14Batch36Amount500
	if (last_1_var_1_22 == (max ((- var_1_46) , last_1_var_1_1))) {
		var_1_57 = (min ((var_1_58 - var_1_51) , (var_1_34 + var_1_50)));
	} else {
		var_1_57 = var_1_12;
	}


	// From: Req16Batch36Amount500
	if ((var_1_51 / var_1_52) > (last_1_var_1_75 + var_1_53)) {
		if (var_1_31) {
			var_1_60 = (var_1_58 - ((var_1_62 - 1u) - (var_1_56 + var_1_53)));
		}
	} else {
		var_1_60 = (min ((var_1_58 - var_1_56) , (abs (var_1_52))));
	}


	// From: Req11Batch36Amount500
	unsigned long int stepLocal_10 = var_1_60;
	if (var_1_34 == stepLocal_10) {
		var_1_44 = (var_1_6 - var_1_39);
	} else {
		var_1_44 = ((var_1_42 + (var_1_46 + var_1_47)) + var_1_43);
	}


	// From: Req6Batch36Amount500
	if (last_1_var_1_105) {
		if (last_1_var_1_97 > var_1_9) {
			var_1_29 = var_1_30;
		} else {
			var_1_29 = var_1_31;
		}
	}


	// From: Req9Batch36Amount500
	var_1_35 = (max (var_1_6 , (min (var_1_5 , var_1_4))));


	// From: Req15Batch36Amount500
	if (var_1_55) {
		var_1_59 = (var_1_17 + var_1_15);
	}


	// From: Req28Batch36Amount500
	if (var_1_29) {
		var_1_81 = (min (var_1_80 , (var_1_82 - var_1_79)));
	} else {
		var_1_81 = (var_1_82 - var_1_80);
	}


	// From: Req30Batch36Amount500
	var_1_85 = (abs (var_1_38));


	// From: Req38Batch36Amount500
	var_1_99 = var_1_100;


	// From: Req40Batch36Amount500
	var_1_102 = var_1_100;


	// From: Req41Batch36Amount500
	var_1_103 = var_1_71;


	// From: Req42Batch36Amount500
	var_1_104 = var_1_21;


	// From: Req44Batch36Amount500
	if (var_1_105) {
		var_1_106 = var_1_92;
	} else {
		var_1_106 = var_1_20;
	}


	// From: Req46Batch36Amount500
	if (var_1_94) {
		var_1_108 = 16;
	} else {
		var_1_108 = var_1_92;
	}


	// From: Req47Batch36Amount500
	var_1_109 = var_1_98;


	// From: Req51Batch36Amount500
	var_1_113 = -8;


	// From: Req33Batch36Amount500
	unsigned char stepLocal_28 = var_1_30;
	unsigned long int stepLocal_27 = var_1_58;
	if ((var_1_46 + (var_1_5 - var_1_38)) <= 5.75) {
		if (var_1_86 != stepLocal_27) {
			var_1_89 = (var_1_55 || var_1_31);
		} else {
			if (var_1_29 || stepLocal_28) {
				var_1_89 = (var_1_31 && ((var_1_29 && var_1_55) || var_1_90));
			}
		}
	}


	// From: Req48Batch36Amount500
	if (var_1_89) {
		var_1_110 = var_1_90;
	} else {
		var_1_110 = var_1_94;
	}


	// From: Req3Batch36Amount500
	unsigned char stepLocal_3 = var_1_89;
	unsigned char stepLocal_2 = var_1_89;
	signed short int stepLocal_1 = var_1_18;
	if (stepLocal_3 && (var_1_35 >= var_1_4)) {
		var_1_13 = ((var_1_15 + var_1_16) + var_1_17);
	} else {
		if (((min (var_1_60 , var_1_16)) + var_1_17) == stepLocal_1) {
			if (stepLocal_2 || (var_1_105 || (! var_1_110))) {
				if (var_1_89) {
					var_1_13 = (var_1_19 - (max ((4 + var_1_20) , (var_1_21 + 5))));
				} else {
					var_1_13 = (max (var_1_15 , ((abs (var_1_21)) - var_1_20)));
				}
			}
		}
	}


	// From: Req32Batch36Amount500
	unsigned char stepLocal_26 = var_1_89;
	if (var_1_105) {
		if (stepLocal_26 && var_1_31) {
			var_1_87 = ((min (var_1_80 , var_1_79)) + ((32 + var_1_88) - var_1_21));
		} else {
			var_1_87 = var_1_88;
		}
	}


	// From: Req37Batch36Amount500
	if (var_1_109 > (-5 + 4)) {
		if (var_1_68 > (max ((64 - 10) , var_1_56))) {
			var_1_97 = var_1_79;
		} else {
			if (var_1_16 <= -100) {
				var_1_97 = (200 - (var_1_98 - 1));
			} else {
				var_1_97 = (min ((var_1_82 - var_1_80) , var_1_20));
			}
		}
	} else {
		var_1_97 = var_1_98;
	}


	// From: Req45Batch36Amount500
	if (var_1_110) {
		var_1_107 = 100.75f;
	} else {
		var_1_107 = var_1_40;
	}


	// From: Req36Batch36Amount500
	if ((var_1_62 - var_1_28) >= var_1_95) {
		var_1_96 = (45779 - (max (var_1_51 , var_1_82)));
	} else {
		if ((- (var_1_74 ^ var_1_58)) < 0u) {
			var_1_96 = (var_1_74 - var_1_87);
		}
	}


	// From: Req7Batch36Amount500
	unsigned char stepLocal_7 = var_1_91;
	if (var_1_110 || stepLocal_7) {
		var_1_32 = (abs (var_1_21));
	} else {
		var_1_32 = (max (var_1_17 , var_1_16));
	}


	// From: Req39Batch36Amount500
	if (var_1_110) {
		var_1_101 = var_1_6;
	} else {
		var_1_101 = var_1_43;
	}


	// From: Req21Batch36Amount500
	if (var_1_107 >= var_1_5) {
		var_1_69 = (var_1_56 - (max ((var_1_51 - var_1_52) , var_1_21)));
	}


	// From: Req26Batch36Amount500
	signed long int stepLocal_22 = var_1_32;
	if ((var_1_17 | (~ var_1_18)) >= stepLocal_22) {
		var_1_77 = (min ((abs (abs (var_1_38))) , (var_1_41 - var_1_6)));
	} else {
		var_1_77 = (var_1_42 + (min ((var_1_40 - var_1_38) , (var_1_43 + var_1_46))));
	}


	// From: Req5Batch36Amount500
	unsigned long int stepLocal_6 = var_1_12;
	if ((max ((max (var_1_18 , var_1_9)) , var_1_11)) <= stepLocal_6) {
		if ((var_1_101 / (min (var_1_25 , var_1_26))) == var_1_77) {
			var_1_24 = (max (var_1_20 , var_1_21));
		} else {
			var_1_24 = (min (((var_1_27 + var_1_28) - 8u) , var_1_10));
		}
	}


	// From: Req2Batch36Amount500
	if (((var_1_4 - var_1_5) * var_1_77) <= var_1_6) {
		var_1_8 = var_1_9;
	} else {
		var_1_8 = (max ((max (var_1_9 , var_1_10)) , (min (var_1_11 , var_1_12))));
	}


	// From: Req24Batch36Amount500
	if (var_1_29) {
		var_1_73 = var_1_50;
	} else {
		if (var_1_57 >= var_1_24) {
			var_1_73 = (var_1_74 - 1);
		}
	}


	// From: Req4Batch36Amount500
	unsigned long int stepLocal_5 = var_1_10;
	unsigned long int stepLocal_4 = min (var_1_12 , (var_1_17 & var_1_11));
	if (var_1_15 >= stepLocal_4) {
		if (var_1_8 < stepLocal_5) {
			var_1_22 = (abs (var_1_6));
		}
	}


	// From: Req19Batch36Amount500
	unsigned char stepLocal_14 = var_1_53 <= var_1_8;
	if (stepLocal_14 || var_1_29) {
		var_1_66 = (abs ((min (var_1_56 , var_1_51)) - var_1_49));
	} else {
		var_1_66 = (max (var_1_21 , var_1_52));
	}


	// From: Req22Batch36Amount500
	unsigned char stepLocal_17 = var_1_110;
	unsigned long int stepLocal_16 = var_1_58;
	signed long int stepLocal_15 = var_1_32;
	if (var_1_65 > var_1_85) {
		if (var_1_8 <= stepLocal_16) {
			if ((abs (var_1_4)) >= (- var_1_22)) {
				var_1_70 = (var_1_56 + var_1_49);
			} else {
				var_1_70 = ((var_1_71 - 64) - var_1_21);
			}
		}
	} else {
		if (var_1_105 && stepLocal_17) {
			if (stepLocal_15 != var_1_24) {
				var_1_70 = (max (var_1_49 , (max (var_1_52 , (var_1_71 - var_1_18)))));
			} else {
				var_1_70 = ((var_1_71 - (min (var_1_21 , var_1_56))) - (max (4 , (var_1_51 - var_1_20))));
			}
		} else {
			var_1_70 = (var_1_49 + var_1_51);
		}
	}


	// From: Req23Batch36Amount500
	unsigned char stepLocal_18 = var_1_55;
	if ((var_1_19 >= (var_1_8 + var_1_12)) || stepLocal_18) {
		var_1_72 = ((max (var_1_56 , -100)) + var_1_13);
	} else {
		if (var_1_25 < var_1_5) {
			var_1_72 = (max (var_1_19 , var_1_71));
		}
	}


	// From: Req27Batch36Amount500
	unsigned long int stepLocal_23 = var_1_8;
	if (var_1_16 < stepLocal_23) {
		var_1_78 = ((var_1_21 + (min (var_1_20 , var_1_79))) - var_1_80);
	}


	// From: Req20Batch36Amount500
	if ((var_1_21 % var_1_56) >= var_1_86) {
		var_1_67 = ((var_1_68 - var_1_49) - var_1_52);
	} else {
		var_1_67 = var_1_73;
	}


	// From: Req17Batch36Amount500
	signed long int stepLocal_13 = var_1_66;
	if (-4 <= stepLocal_13) {
		var_1_63 = (min (var_1_16 , var_1_17));
	}


	// From: Req13Batch36Amount500
	if (var_1_52 >= (abs (var_1_18))) {
		if (var_1_15 >= var_1_57) {
			var_1_54 = (var_1_31 || (var_1_29 && var_1_55));
		}
	} else {
		if ((8 + var_1_57) == var_1_52) {
			var_1_54 = (((var_1_21 / var_1_56) < var_1_17) || var_1_30);
		} else {
			if (var_1_67 != var_1_18) {
				var_1_54 = var_1_30;
			}
		}
	}


	// From: Req1Batch36Amount500
	unsigned long int stepLocal_0 = var_1_57;
	if (var_1_29) {
		if ((-5 + 64) < stepLocal_0) {
			var_1_1 = (max ((var_1_4 - var_1_5) , (var_1_6 - 5.4f)));
		} else {
			var_1_1 = (min ((min (-0.5f , 2.35f)) , var_1_6));
		}
	} else {
		if (var_1_54) {
			var_1_1 = (max (var_1_6 , var_1_4));
		} else {
			var_1_1 = (var_1_5 - var_1_4);
		}
	}


	// From: Req29Batch36Amount500
	signed char stepLocal_25 = var_1_20;
	unsigned char stepLocal_24 = (var_1_5 * var_1_47) <= var_1_35;
	if (var_1_54) {
		if ((var_1_65 == var_1_25) || stepLocal_24) {
			var_1_83 = (((max (var_1_68 , var_1_84)) - var_1_52) - var_1_49);
		} else {
			var_1_83 = ((min (var_1_67 , var_1_18)) + var_1_49);
		}
	} else {
		if (var_1_9 <= stepLocal_25) {
			var_1_83 = var_1_19;
		} else {
			var_1_83 = var_1_17;
		}
	}


	// From: Req12Batch36Amount500
	unsigned char stepLocal_12 = (2u / var_1_27) >= var_1_8;
	signed long int stepLocal_11 = var_1_83;
	if (var_1_60 >= stepLocal_11) {
		if ((var_1_47 < (var_1_5 + 255.5)) || stepLocal_12) {
			var_1_48 = (var_1_21 - var_1_20);
		} else {
			if (var_1_5 < (var_1_39 + var_1_101)) {
				var_1_48 = (((var_1_49 + var_1_50) - var_1_20) - ((var_1_51 - var_1_21) - (var_1_52 - var_1_53)));
			} else {
				var_1_48 = (min ((max ((var_1_19 + var_1_21) , var_1_20)) , (min (var_1_52 , var_1_53))));
			}
		}
	} else {
		var_1_48 = (var_1_53 - var_1_50);
	}


	// From: Req49Batch36Amount500
	if (var_1_54) {
		var_1_111 = var_1_79;
	} else {
		var_1_111 = var_1_21;
	}


	// From: Req50Batch36Amount500
	signed short int stepLocal_31 = var_1_51;
	if (var_1_111 > stepLocal_31) {
		if (var_1_47 < (var_1_1 * var_1_25)) {
			var_1_112 = (var_1_18 + var_1_83);
		} else {
			var_1_112 = (var_1_74 - var_1_48);
		}
	}


	// From: Req8Batch36Amount500
	signed long int stepLocal_9 = var_1_83;
	unsigned long int stepLocal_8 = var_1_83 + (var_1_20 + var_1_12);
	if (var_1_28 > stepLocal_8) {
		var_1_33 = (((abs (var_1_8)) - (var_1_34 - var_1_18)) + var_1_20);
	} else {
		if (var_1_21 < stepLocal_9) {
			var_1_33 = (var_1_21 - var_1_18);
		} else {
			var_1_33 = ((var_1_21 + (min (var_1_18 , var_1_34))) - (min (5 , var_1_20)));
		}
	}


	// From: Req10Batch36Amount500
	if (-8 >= (var_1_67 * (var_1_21 << var_1_66))) {
		if (var_1_54) {
			var_1_36 = ((var_1_38 - var_1_39) + (var_1_40 - var_1_41));
		} else {
			var_1_36 = (16.625f + (max ((var_1_40 - var_1_41) , (var_1_42 + var_1_43))));
		}
	}


	// From: Req18Batch36Amount500
	if ((max ((var_1_51 | var_1_28) , var_1_32)) <= ((max (var_1_56 , var_1_57)) + var_1_18)) {
		if ((min (var_1_27 , (var_1_57 & var_1_67))) < 25u) {
			if (var_1_19 >= (var_1_58 & (var_1_21 << var_1_111))) {
				var_1_64 = var_1_112;
			}
		} else {
			var_1_64 = (var_1_111 + var_1_56);
		}
	} else {
		if (var_1_44 < (var_1_39 - (max (var_1_4 , var_1_65)))) {
			var_1_64 = (min (var_1_21 , (abs (-2))));
		}
	}


	// From: Req25Batch36Amount500
	signed long int stepLocal_21 = var_1_21 << var_1_112;
	signed long int stepLocal_20 = var_1_73 % var_1_49;
	signed long int stepLocal_19 = abs (var_1_21);
	if (stepLocal_21 <= ((min (var_1_74 , var_1_51)) - var_1_53)) {
		var_1_75 = (max (var_1_53 , (abs (var_1_19))));
	} else {
		if (24.9 <= (min ((min (var_1_65 , var_1_46)) , (var_1_40 - var_1_4)))) {
			if (var_1_29) {
				if (var_1_46 >= (min (var_1_77 , (min (var_1_44 , var_1_85))))) {
					var_1_75 = (min (var_1_112 , var_1_104));
				} else {
					if (var_1_20 <= stepLocal_19) {
						if (stepLocal_20 > var_1_56) {
							var_1_75 = (var_1_51 - var_1_56);
						} else {
							var_1_75 = (abs (var_1_49));
						}
					}
				}
			} else {
				var_1_75 = var_1_60;
			}
		} else {
			var_1_75 = var_1_68;
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 4294967294);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 4294967294);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -31);
	assume_abort_if_not(var_1_15 <= 32);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -31);
	assume_abort_if_not(var_1_16 <= 31);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	assume_abort_if_not(var_1_25 != 0.0F);
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	assume_abort_if_not(var_1_26 != 0.0F);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 1073741823);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 1073741824);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= 536870911);
	assume_abort_if_not(var_1_34 <= 1073741823);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -230584.3009213691400e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -230584.3009213691400e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 2305843.009213691400e+12F && var_1_43 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -115292.1504606845700e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 1152921.504606845700e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -115292.1504606845700e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 1152921.504606845700e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= 8191);
	assume_abort_if_not(var_1_49 <= 16383);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 8191);
	assume_abort_if_not(var_1_50 <= 16383);
	var_1_51 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_51 >= 24574);
	assume_abort_if_not(var_1_51 <= 32766);
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= 8191);
	assume_abort_if_not(var_1_52 <= 16383);
	var_1_53 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 8191);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 0);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 255);
	assume_abort_if_not(var_1_56 != 0);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 2147483647);
	assume_abort_if_not(var_1_58 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_62 >= 1610612735);
	assume_abort_if_not(var_1_62 <= 2147483647);
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854776000e+12F && var_1_65 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_68 >= 1073741822);
	assume_abort_if_not(var_1_68 <= 2147483646);
	var_1_71 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_71 >= 49150);
	assume_abort_if_not(var_1_71 <= 65534);
	var_1_74 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_74 >= 32767);
	assume_abort_if_not(var_1_74 <= 65534);
	var_1_79 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 63);
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 126);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 127);
	assume_abort_if_not(var_1_82 <= 254);
	var_1_84 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_84 >= 1073741822);
	assume_abort_if_not(var_1_84 <= 2147483646);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 32);
	assume_abort_if_not(var_1_88 <= 63);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 0);
	var_1_92 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_92 >= 1);
	assume_abort_if_not(var_1_92 <= 30);
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 1);
	assume_abort_if_not(var_1_94 <= 1);
	var_1_98 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_98 >= 63);
	assume_abort_if_not(var_1_98 <= 127);
	var_1_100 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_100 >= -32767);
	assume_abort_if_not(var_1_100 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_105 = var_1_105;
	last_1_var_1_109 = var_1_109;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((var_1_29 ? (((-5 + 64) < var_1_57) ? (var_1_1 == ((float) (max ((var_1_4 - var_1_5) , (var_1_6 - 5.4f))))) : (var_1_1 == ((float) (min ((min (-0.5f , 2.35f)) , var_1_6))))) : (var_1_54 ? (var_1_1 == ((float) (max (var_1_6 , var_1_4)))) : (var_1_1 == ((float) (var_1_5 - var_1_4))))) && ((((var_1_4 - var_1_5) * var_1_77) <= var_1_6) ? (var_1_8 == ((unsigned long int) var_1_9)) : (var_1_8 == ((unsigned long int) (max ((max (var_1_9 , var_1_10)) , (min (var_1_11 , var_1_12)))))))) && ((var_1_89 && (var_1_35 >= var_1_4)) ? (var_1_13 == ((signed char) ((var_1_15 + var_1_16) + var_1_17))) : ((((min (var_1_60 , var_1_16)) + var_1_17) == var_1_18) ? ((var_1_89 || (var_1_105 || (! var_1_110))) ? (var_1_89 ? (var_1_13 == ((signed char) (var_1_19 - (max ((4 + var_1_20) , (var_1_21 + 5)))))) : (var_1_13 == ((signed char) (max (var_1_15 , ((abs (var_1_21)) - var_1_20)))))) : 1) : 1))) && ((var_1_15 >= (min (var_1_12 , (var_1_17 & var_1_11)))) ? ((var_1_8 < var_1_10) ? (var_1_22 == ((float) (abs (var_1_6)))) : 1) : 1)) && (((max ((max (var_1_18 , var_1_9)) , var_1_11)) <= var_1_12) ? (((var_1_101 / (min (var_1_25 , var_1_26))) == var_1_77) ? (var_1_24 == ((unsigned long int) (max (var_1_20 , var_1_21)))) : (var_1_24 == ((unsigned long int) (min (((var_1_27 + var_1_28) - 8u) , var_1_10))))) : 1)) && (last_1_var_1_105 ? ((last_1_var_1_97 > var_1_9) ? (var_1_29 == ((unsigned char) var_1_30)) : (var_1_29 == ((unsigned char) var_1_31))) : 1)) && ((var_1_110 || var_1_91) ? (var_1_32 == ((signed long int) (abs (var_1_21)))) : (var_1_32 == ((signed long int) (max (var_1_17 , var_1_16)))))) && ((var_1_28 > (var_1_83 + (var_1_20 + var_1_12))) ? (var_1_33 == ((signed long int) (((abs (var_1_8)) - (var_1_34 - var_1_18)) + var_1_20))) : ((var_1_21 < var_1_83) ? (var_1_33 == ((signed long int) (var_1_21 - var_1_18))) : (var_1_33 == ((signed long int) ((var_1_21 + (min (var_1_18 , var_1_34))) - (min (5 , var_1_20)))))))) && (var_1_35 == ((float) (max (var_1_6 , (min (var_1_5 , var_1_4))))))) && ((-8 >= (var_1_67 * (var_1_21 << var_1_66))) ? (var_1_54 ? (var_1_36 == ((float) ((var_1_38 - var_1_39) + (var_1_40 - var_1_41)))) : (var_1_36 == ((float) (16.625f + (max ((var_1_40 - var_1_41) , (var_1_42 + var_1_43))))))) : 1)) && ((var_1_34 == var_1_60) ? (var_1_44 == ((double) (var_1_6 - var_1_39))) : (var_1_44 == ((double) ((var_1_42 + (var_1_46 + var_1_47)) + var_1_43))))) && ((var_1_60 >= var_1_83) ? (((var_1_47 < (var_1_5 + 255.5)) || ((2u / var_1_27) >= var_1_8)) ? (var_1_48 == ((signed short int) (var_1_21 - var_1_20))) : ((var_1_5 < (var_1_39 + var_1_101)) ? (var_1_48 == ((signed short int) (((var_1_49 + var_1_50) - var_1_20) - ((var_1_51 - var_1_21) - (var_1_52 - var_1_53))))) : (var_1_48 == ((signed short int) (min ((max ((var_1_19 + var_1_21) , var_1_20)) , (min (var_1_52 , var_1_53)))))))) : (var_1_48 == ((signed short int) (var_1_53 - var_1_50))))) && ((var_1_52 >= (abs (var_1_18))) ? ((var_1_15 >= var_1_57) ? (var_1_54 == ((unsigned char) (var_1_31 || (var_1_29 && var_1_55)))) : 1) : (((8 + var_1_57) == var_1_52) ? (var_1_54 == ((unsigned char) (((var_1_21 / var_1_56) < var_1_17) || var_1_30))) : ((var_1_67 != var_1_18) ? (var_1_54 == ((unsigned char) var_1_30)) : 1)))) && ((last_1_var_1_22 == (max ((- var_1_46) , last_1_var_1_1))) ? (var_1_57 == ((unsigned long int) (min ((var_1_58 - var_1_51) , (var_1_34 + var_1_50))))) : (var_1_57 == ((unsigned long int) var_1_12)))) && (var_1_55 ? (var_1_59 == ((signed char) (var_1_17 + var_1_15))) : 1)) && (((var_1_51 / var_1_52) > (last_1_var_1_75 + var_1_53)) ? (var_1_31 ? (var_1_60 == ((unsigned long int) (var_1_58 - ((var_1_62 - 1u) - (var_1_56 + var_1_53))))) : 1) : (var_1_60 == ((unsigned long int) (min ((var_1_58 - var_1_56) , (abs (var_1_52)))))))) && ((-4 <= var_1_66) ? (var_1_63 == ((signed char) (min (var_1_16 , var_1_17)))) : 1)) && (((max ((var_1_51 | var_1_28) , var_1_32)) <= ((max (var_1_56 , var_1_57)) + var_1_18)) ? (((min (var_1_27 , (var_1_57 & var_1_67))) < 25u) ? ((var_1_19 >= (var_1_58 & (var_1_21 << var_1_111))) ? (var_1_64 == ((signed long int) var_1_112)) : 1) : (var_1_64 == ((signed long int) (var_1_111 + var_1_56)))) : ((var_1_44 < (var_1_39 - (max (var_1_4 , var_1_65)))) ? (var_1_64 == ((signed long int) (min (var_1_21 , (abs (-2)))))) : 1))) && (((var_1_53 <= var_1_8) || var_1_29) ? (var_1_66 == ((signed long int) (abs ((min (var_1_56 , var_1_51)) - var_1_49)))) : (var_1_66 == ((signed long int) (max (var_1_21 , var_1_52)))))) && (((var_1_21 % var_1_56) >= var_1_86) ? (var_1_67 == ((signed long int) ((var_1_68 - var_1_49) - var_1_52))) : (var_1_67 == ((signed long int) var_1_73)))) && ((var_1_107 >= var_1_5) ? (var_1_69 == ((signed short int) (var_1_56 - (max ((var_1_51 - var_1_52) , var_1_21))))) : 1)) && ((var_1_65 > var_1_85) ? ((var_1_8 <= var_1_58) ? (((abs (var_1_4)) >= (- var_1_22)) ? (var_1_70 == ((unsigned short int) (var_1_56 + var_1_49))) : (var_1_70 == ((unsigned short int) ((var_1_71 - 64) - var_1_21)))) : 1) : ((var_1_105 && var_1_110) ? ((var_1_32 != var_1_24) ? (var_1_70 == ((unsigned short int) (max (var_1_49 , (max (var_1_52 , (var_1_71 - var_1_18))))))) : (var_1_70 == ((unsigned short int) ((var_1_71 - (min (var_1_21 , var_1_56))) - (max (4 , (var_1_51 - var_1_20))))))) : (var_1_70 == ((unsigned short int) (var_1_49 + var_1_51)))))) && (((var_1_19 >= (var_1_8 + var_1_12)) || var_1_55) ? (var_1_72 == ((signed short int) ((max (var_1_56 , -100)) + var_1_13))) : ((var_1_25 < var_1_5) ? (var_1_72 == ((signed short int) (max (var_1_19 , var_1_71)))) : 1))) && (var_1_29 ? (var_1_73 == ((unsigned short int) var_1_50)) : ((var_1_57 >= var_1_24) ? (var_1_73 == ((unsigned short int) (var_1_74 - 1))) : 1))) && (((var_1_21 << var_1_112) <= ((min (var_1_74 , var_1_51)) - var_1_53)) ? (var_1_75 == ((signed long int) (max (var_1_53 , (abs (var_1_19)))))) : ((24.9 <= (min ((min (var_1_65 , var_1_46)) , (var_1_40 - var_1_4)))) ? (var_1_29 ? ((var_1_46 >= (min (var_1_77 , (min (var_1_44 , var_1_85))))) ? (var_1_75 == ((signed long int) (min (var_1_112 , var_1_104)))) : ((var_1_20 <= (abs (var_1_21))) ? (((var_1_73 % var_1_49) > var_1_56) ? (var_1_75 == ((signed long int) (var_1_51 - var_1_56))) : (var_1_75 == ((signed long int) (abs (var_1_49))))) : 1)) : (var_1_75 == ((signed long int) var_1_60))) : (var_1_75 == ((signed long int) var_1_68))))) && (((var_1_17 | (~ var_1_18)) >= var_1_32) ? (var_1_77 == ((double) (min ((abs (abs (var_1_38))) , (var_1_41 - var_1_6))))) : (var_1_77 == ((double) (var_1_42 + (min ((var_1_40 - var_1_38) , (var_1_43 + var_1_46)))))))) && ((var_1_16 < var_1_8) ? (var_1_78 == ((signed char) ((var_1_21 + (min (var_1_20 , var_1_79))) - var_1_80))) : 1)) && (var_1_29 ? (var_1_81 == ((unsigned char) (min (var_1_80 , (var_1_82 - var_1_79))))) : (var_1_81 == ((unsigned char) (var_1_82 - var_1_80))))) && (var_1_54 ? (((var_1_65 == var_1_25) || ((var_1_5 * var_1_47) <= var_1_35)) ? (var_1_83 == ((signed long int) (((max (var_1_68 , var_1_84)) - var_1_52) - var_1_49))) : (var_1_83 == ((signed long int) ((min (var_1_67 , var_1_18)) + var_1_49)))) : ((var_1_9 <= var_1_20) ? (var_1_83 == ((signed long int) var_1_19)) : (var_1_83 == ((signed long int) var_1_17))))) && (var_1_85 == ((float) (abs (var_1_38))))) && (last_1_var_1_89 ? (var_1_86 == ((unsigned short int) (max ((var_1_74 - (var_1_51 - var_1_56)) , var_1_80)))) : 1)) && (var_1_105 ? ((var_1_89 && var_1_31) ? (var_1_87 == ((unsigned char) ((min (var_1_80 , var_1_79)) + ((32 + var_1_88) - var_1_21)))) : (var_1_87 == ((unsigned char) var_1_88))) : 1)) && (((var_1_46 + (var_1_5 - var_1_38)) <= 5.75) ? ((var_1_86 != var_1_58) ? (var_1_89 == ((unsigned char) (var_1_55 || var_1_31))) : ((var_1_29 || var_1_30) ? (var_1_89 == ((unsigned char) (var_1_31 && ((var_1_29 && var_1_55) || var_1_90)))) : 1)) : 1)) && ((last_1_var_1_109 >= ((max (var_1_80 , var_1_71)) >> var_1_92)) ? (((min (last_1_var_1_60 , var_1_27)) < last_1_var_1_8) ? (var_1_91 == ((unsigned char) ((last_1_var_1_105 || (last_1_var_1_29 && var_1_30)) || var_1_94))) : 1) : (var_1_91 == ((unsigned char) ((! var_1_90) && (! (! var_1_94))))))) && ((var_1_94 && (var_1_21 > last_1_var_1_95)) ? ((last_1_var_1_77 >= var_1_38) ? ((var_1_6 != 5.2f) ? (var_1_95 == ((signed long int) ((last_1_var_1_67 + var_1_19) + (50 + var_1_20)))) : (var_1_95 == ((signed long int) (max (last_1_var_1_96 , var_1_79))))) : ((((var_1_21 - var_1_88) * (abs (var_1_20))) < last_1_var_1_102) ? (var_1_95 == ((signed long int) (var_1_79 - (abs (last_1_var_1_96))))) : (var_1_95 == ((signed long int) var_1_53)))) : 1)) && (((var_1_62 - var_1_28) >= var_1_95) ? (var_1_96 == ((unsigned short int) (45779 - (max (var_1_51 , var_1_82))))) : (((- (var_1_74 ^ var_1_58)) < 0u) ? (var_1_96 == ((unsigned short int) (var_1_74 - var_1_87))) : 1))) && ((var_1_109 > (-5 + 4)) ? ((var_1_68 > (max ((64 - 10) , var_1_56))) ? (var_1_97 == ((unsigned char) var_1_79)) : ((var_1_16 <= -100) ? (var_1_97 == ((unsigned char) (200 - (var_1_98 - 1)))) : (var_1_97 == ((unsigned char) (min ((var_1_82 - var_1_80) , var_1_20)))))) : (var_1_97 == ((unsigned char) var_1_98)))) && (var_1_99 == ((signed short int) var_1_100))) && (var_1_110 ? (var_1_101 == ((double) var_1_6)) : (var_1_101 == ((double) var_1_43)))) && (var_1_102 == ((signed long int) var_1_100))) && (var_1_103 == ((signed short int) var_1_71))) && (var_1_104 == ((signed long int) var_1_21))) && (var_1_91 ? (var_1_105 == ((unsigned char) var_1_94)) : (var_1_105 == ((unsigned char) var_1_30)))) && (var_1_105 ? (var_1_106 == ((unsigned char) var_1_92)) : (var_1_106 == ((unsigned char) var_1_20)))) && (var_1_110 ? (var_1_107 == ((float) 100.75f)) : (var_1_107 == ((float) var_1_40)))) && (var_1_94 ? (var_1_108 == ((unsigned char) 16)) : (var_1_108 == ((unsigned char) var_1_92)))) && (var_1_109 == ((signed long int) var_1_98))) && (var_1_89 ? (var_1_110 == ((unsigned char) var_1_90)) : (var_1_110 == ((unsigned char) var_1_94)))) && (var_1_54 ? (var_1_111 == ((signed short int) var_1_79)) : (var_1_111 == ((signed short int) var_1_21)))) && ((var_1_111 > var_1_51) ? ((var_1_47 < (var_1_1 * var_1_25)) ? (var_1_112 == ((unsigned short int) (var_1_18 + var_1_83))) : (var_1_112 == ((unsigned short int) (var_1_74 - var_1_48)))) : 1)) && (var_1_113 == ((signed char) -8))
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
