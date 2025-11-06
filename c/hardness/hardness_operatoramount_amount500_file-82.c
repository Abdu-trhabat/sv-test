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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch82Amount500.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 16;
unsigned short int var_1_7 = 34024;
unsigned short int var_1_8 = 0;
unsigned short int var_1_9 = 5;
unsigned short int var_1_10 = 32;
float var_1_11 = 10.375;
float var_1_12 = 15.5;
float var_1_13 = 10.6;
float var_1_14 = 1.25;
float var_1_15 = -0.8;
float var_1_16 = 256.4;
signed long int var_1_17 = 32;
unsigned char var_1_18 = 8;
unsigned char var_1_19 = 4;
signed char var_1_21 = 0;
unsigned char var_1_22 = 5;
float var_1_23 = 5.8;
float var_1_24 = 32.75;
signed long int var_1_25 = 2;
unsigned long int var_1_26 = 128;
unsigned long int var_1_27 = 1685286607;
signed char var_1_28 = -32;
float var_1_29 = 7.7;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 1;
signed short int var_1_34 = -16;
signed short int var_1_36 = 8;
signed short int var_1_37 = 50;
unsigned short int var_1_39 = 64;
unsigned long int var_1_40 = 3571110956;
unsigned short int var_1_41 = 19925;
unsigned long int var_1_42 = 1;
unsigned long int var_1_43 = 50;
unsigned char var_1_44 = 0;
double var_1_45 = 999.75;
double var_1_46 = 16.875;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 10;
unsigned char var_1_50 = 128;
unsigned char var_1_51 = 50;
unsigned char var_1_52 = 4;
signed char var_1_53 = -64;
double var_1_54 = 100.3;
double var_1_55 = 10000000000000.5;
double var_1_56 = 2.75;
unsigned short int var_1_57 = 64;
signed short int var_1_59 = -4;
signed short int var_1_60 = 16;
signed short int var_1_61 = 20930;
unsigned long int var_1_62 = 5;
float var_1_64 = -0.5;
signed long int var_1_65 = 10000000;
signed long int var_1_66 = 1000000000;
signed long int var_1_67 = -128;
unsigned long int var_1_68 = 32;
unsigned short int var_1_69 = 32;
unsigned short int var_1_70 = 32728;
unsigned long int var_1_71 = 4;
unsigned short int var_1_72 = 1;
unsigned short int var_1_74 = 0;
unsigned short int var_1_75 = 64;
signed long int var_1_76 = 32;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 1;
unsigned short int var_1_79 = 0;
unsigned char var_1_80 = 1;
unsigned char var_1_81 = 128;
unsigned char var_1_82 = 100;
unsigned long int var_1_83 = 0;
unsigned short int var_1_84 = 128;
unsigned char var_1_85 = 16;
unsigned char var_1_87 = 64;
unsigned long int var_1_88 = 50;
unsigned long int var_1_89 = 1000000000;
signed long int var_1_91 = 1;
unsigned long int var_1_92 = 3234470669;
unsigned char var_1_93 = 0;
signed char var_1_94 = -10;
float var_1_95 = 10.375;
double var_1_96 = 50.125;
signed short int var_1_97 = 64;
signed long int var_1_98 = 32;
signed long int var_1_99 = -16;
signed long int var_1_100 = 32;
unsigned long int var_1_101 = 10000;
unsigned char var_1_102 = 0;
unsigned long int var_1_103 = 128;
signed char var_1_104 = -128;
signed long int var_1_105 = -8;
double var_1_106 = 32.4;
signed char var_1_107 = 5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_25 = 2;
unsigned long int last_1_var_1_26 = 128;
unsigned char last_1_var_1_31 = 0;
unsigned long int last_1_var_1_42 = 1;
unsigned char last_1_var_1_44 = 0;
signed short int last_1_var_1_59 = -4;
signed long int last_1_var_1_65 = 10000000;
signed long int last_1_var_1_67 = -128;
unsigned long int last_1_var_1_68 = 32;
unsigned short int last_1_var_1_69 = 32;
unsigned long int last_1_var_1_71 = 4;
unsigned short int last_1_var_1_72 = 1;
unsigned char last_1_var_1_77 = 0;
unsigned char last_1_var_1_82 = 100;
unsigned long int last_1_var_1_83 = 0;
unsigned long int last_1_var_1_88 = 50;
unsigned char last_1_var_1_102 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req26Batch82Amount500
	if (last_1_var_1_71 >= last_1_var_1_26) {
		var_1_68 = (last_1_var_1_69 + last_1_var_1_68);
	}


	// From: Req27Batch82Amount500
	if (! last_1_var_1_77) {
		var_1_69 = ((var_1_41 + var_1_70) - last_1_var_1_72);
	} else {
		var_1_69 = (min (var_1_60 , (var_1_7 - last_1_var_1_72)));
	}


	// From: Req22Batch82Amount500
	unsigned char stepLocal_26 = var_1_33;
	if (last_1_var_1_31) {
		if (stepLocal_26 && last_1_var_1_102) {
			var_1_62 = (var_1_41 + last_1_var_1_82);
		}
	} else {
		var_1_62 = var_1_41;
	}


	// From: Req32Batch82Amount500
	if ((var_1_16 / var_1_12) <= (- 1.6f)) {
		var_1_77 = (! var_1_47);
	} else {
		var_1_77 = ((last_1_var_1_44 || var_1_78) && var_1_33);
	}


	// From: Req47Batch82Amount500
	if (var_1_77) {
		var_1_101 = var_1_61;
	} else {
		var_1_101 = var_1_87;
	}


	// From: Req10Batch82Amount500
	unsigned char stepLocal_10 = var_1_22;
	if (8 > stepLocal_10) {
		var_1_31 = ((var_1_77 || var_1_32) && (var_1_77 || var_1_33));
	}


	// From: Req14Batch82Amount500
	if ((var_1_40 & last_1_var_1_42) > (- (last_1_var_1_88 >> var_1_18))) {
		if ((last_1_var_1_88 | (var_1_27 - last_1_var_1_67)) >= var_1_40) {
			if (((last_1_var_1_83 * var_1_22) * last_1_var_1_25) > last_1_var_1_68) {
				var_1_42 = (3595890363u - (var_1_7 + var_1_9));
			} else {
				var_1_42 = ((abs (var_1_27 - var_1_22)) + (max (var_1_43 , last_1_var_1_42)));
			}
		}
	}


	// From: Req13Batch82Amount500
	unsigned long int stepLocal_17 = var_1_40 - var_1_8;
	if (stepLocal_17 > var_1_10) {
		var_1_39 = (54531 - var_1_9);
	} else {
		var_1_39 = (((min (23050 , var_1_41)) + 21575) - (min (var_1_18 , var_1_22)));
	}


	// From: Req18Batch82Amount500
	var_1_53 = (max (var_1_19 , var_1_51));


	// From: Req23Batch82Amount500
	if (var_1_9 > (var_1_40 * var_1_61)) {
		if (var_1_13 < var_1_45) {
			var_1_64 = (var_1_56 - var_1_55);
		} else {
			var_1_64 = var_1_14;
		}
	} else {
		var_1_64 = (var_1_56 - var_1_55);
	}


	// From: Req30Batch82Amount500
	if (! var_1_32) {
		var_1_75 = (abs (var_1_7 - 64));
	}


	// From: Req34Batch82Amount500
	if (var_1_14 > var_1_16) {
		var_1_80 = (max (((min (var_1_50 , var_1_81)) - var_1_18) , (abs (8))));
	}


	// From: Req41Batch82Amount500
	var_1_94 = var_1_18;


	// From: Req42Batch82Amount500
	var_1_95 = var_1_24;


	// From: Req43Batch82Amount500
	var_1_96 = var_1_56;


	// From: Req44Batch82Amount500
	var_1_97 = var_1_81;


	// From: Req48Batch82Amount500
	var_1_102 = var_1_33;


	// From: Req49Batch82Amount500
	if (var_1_47) {
		var_1_103 = var_1_91;
	}


	// From: Req51Batch82Amount500
	if (var_1_102) {
		var_1_105 = var_1_75;
	} else {
		var_1_105 = var_1_66;
	}


	// From: Req53Batch82Amount500
	if (! (var_1_89 <= 256u)) {
		var_1_107 = (var_1_51 - (var_1_19 + var_1_91));
	} else {
		var_1_107 = (min (var_1_19 , var_1_18));
	}


	// From: Req39Batch82Amount500
	if ((var_1_51 < var_1_103) && var_1_47) {
		if (var_1_69 != var_1_18) {
			var_1_88 = (((var_1_89 - last_1_var_1_88) + var_1_68) + (max (var_1_103 , (var_1_27 - var_1_68))));
		} else {
			if (var_1_105 > (var_1_19 >> var_1_91)) {
				var_1_88 = (min (((var_1_92 - var_1_62) - var_1_68) , (var_1_19 + var_1_8)));
			}
		}
	} else {
		var_1_88 = (3942236725u - var_1_81);
	}


	// From: Req31Batch82Amount500
	var_1_76 = (var_1_69 + var_1_105);


	// From: Req40Batch82Amount500
	if ((var_1_101 < var_1_42) && (var_1_101 >= var_1_27)) {
		var_1_93 = 0;
	} else {
		var_1_93 = var_1_48;
	}


	// From: Req19Batch82Amount500
	unsigned long int stepLocal_24 = max (var_1_10 , (var_1_43 * var_1_51));
	unsigned long int stepLocal_23 = var_1_42;
	if (var_1_95 >= (- var_1_14)) {
		var_1_54 = (max (var_1_24 , 128.2));
	} else {
		if (-32 != stepLocal_24) {
			if (stepLocal_23 >= var_1_7) {
				var_1_54 = (var_1_16 + var_1_14);
			} else {
				var_1_54 = (0.625 - (max ((max (31.6 , var_1_55)) , var_1_56)));
			}
		}
	}


	// From: Req52Batch82Amount500
	if (var_1_93) {
		var_1_106 = var_1_55;
	} else {
		var_1_106 = var_1_13;
	}


	// From: Req33Batch82Amount500
	if ((var_1_43 % (min (var_1_51 , var_1_50))) == (var_1_22 * var_1_62)) {
		var_1_79 = (min ((abs (var_1_10 + var_1_101)) , (max (var_1_70 , (var_1_7 - var_1_9)))));
	} else {
		if (var_1_76 > ((16 / var_1_70) / var_1_41)) {
			var_1_79 = (max (var_1_10 , var_1_19));
		} else {
			var_1_79 = (var_1_19 + var_1_51);
		}
	}


	// From: Req17Batch82Amount500
	signed long int stepLocal_22 = var_1_10 * var_1_51;
	if (stepLocal_22 > var_1_79) {
		var_1_52 = 10;
	} else {
		var_1_52 = (abs (10));
	}


	// From: Req15Batch82Amount500
	unsigned short int stepLocal_19 = var_1_8;
	unsigned long int stepLocal_18 = var_1_18 * var_1_62;
	if ((var_1_24 + (var_1_45 - var_1_46)) == var_1_16) {
		if (var_1_40 != stepLocal_18) {
			if (stepLocal_19 <= var_1_22) {
				var_1_44 = (var_1_47 || var_1_48);
			} else {
				var_1_44 = (! var_1_32);
			}
		} else {
			if (var_1_32) {
				var_1_44 = (var_1_102 || var_1_33);
			} else {
				var_1_44 = ((var_1_42 >= var_1_40) && (var_1_93 && (var_1_48 || var_1_47)));
			}
		}
	}


	// From: Req46Batch82Amount500
	if (var_1_44) {
		var_1_99 = var_1_100;
	} else {
		var_1_99 = var_1_91;
	}


	// From: Req16Batch82Amount500
	unsigned char stepLocal_21 = var_1_99 == (abs (var_1_22));
	unsigned long int stepLocal_20 = var_1_27 % var_1_7;
	if (var_1_47 && stepLocal_21) {
		if (! var_1_32) {
			var_1_49 = (abs (var_1_19));
		} else {
			if ((max (var_1_99 , var_1_36)) < stepLocal_20) {
				var_1_49 = (var_1_50 - 16);
			} else {
				var_1_49 = (var_1_50 - ((32 + var_1_51) - 10));
			}
		}
	}


	// From: Req21Batch82Amount500
	if (var_1_77) {
		if (var_1_47 && (var_1_77 && var_1_44)) {
			var_1_59 = (abs ((var_1_60 - 64) + last_1_var_1_59));
		} else {
			var_1_59 = ((var_1_61 - 32) - last_1_var_1_59);
		}
	} else {
		var_1_59 = (min (((var_1_60 - var_1_9) + var_1_75) , var_1_36));
	}


	// From: Req5Batch82Amount500
	if (((16 - 64) + -4) < var_1_19) {
		if (var_1_75 == (var_1_99 / 32)) {
			var_1_23 = (var_1_14 + (max (var_1_16 , var_1_15)));
		} else {
			var_1_23 = (max (var_1_13 , ((var_1_16 + var_1_15) + var_1_14)));
		}
	} else {
		var_1_23 = (min (var_1_14 , var_1_24));
	}


	// From: Req45Batch82Amount500
	var_1_98 = var_1_49;


	// From: Req8Batch82Amount500
	unsigned char stepLocal_8 = var_1_31;
	if (var_1_44 || stepLocal_8) {
		var_1_28 = (var_1_18 - var_1_19);
	} else {
		if (var_1_31) {
			var_1_28 = var_1_19;
		}
	}


	// From: Req9Batch82Amount500
	unsigned long int stepLocal_9 = (max (var_1_27 , var_1_42)) * var_1_79;
	if (var_1_44) {
		if (stepLocal_9 < var_1_101) {
			var_1_29 = (max (var_1_14 , var_1_15));
		}
	}


	// From: Req50Batch82Amount500
	if (var_1_44) {
		var_1_104 = var_1_18;
	} else {
		var_1_104 = var_1_91;
	}


	// From: Req24Batch82Amount500
	signed long int stepLocal_28 = max (var_1_59 , var_1_19);
	unsigned char stepLocal_27 = var_1_18;
	if (stepLocal_28 == (var_1_51 - last_1_var_1_65)) {
		var_1_65 = (last_1_var_1_65 - var_1_88);
	} else {
		if (stepLocal_27 <= last_1_var_1_65) {
			var_1_65 = ((min (var_1_69 , (var_1_7 + var_1_18))) + var_1_49);
		} else {
			var_1_65 = (((min (var_1_9 , var_1_42)) - (var_1_66 - var_1_88)) + var_1_52);
		}
	}


	// From: Req11Batch82Amount500
	unsigned long int stepLocal_15 = 64u >> var_1_18;
	unsigned char stepLocal_14 = var_1_22;
	unsigned short int stepLocal_13 = var_1_10;
	unsigned long int stepLocal_12 = var_1_88;
	unsigned long int stepLocal_11 = var_1_62;
	if (stepLocal_11 < var_1_103) {
		if (var_1_33) {
			if (var_1_54 >= var_1_12) {
				var_1_34 = (var_1_36 - var_1_9);
			} else {
				if ((50 + var_1_103) <= stepLocal_13) {
					var_1_34 = (var_1_18 - (var_1_22 + 256));
				} else {
					if (var_1_62 >= stepLocal_14) {
						var_1_34 = var_1_18;
					} else {
						var_1_34 = (abs (var_1_19));
					}
				}
			}
		} else {
			if (stepLocal_12 <= var_1_62) {
				var_1_34 = ((min ((max (var_1_36 , var_1_19)) , var_1_9)) - (min (var_1_18 , var_1_22)));
			} else {
				var_1_34 = (min (var_1_22 , var_1_36));
			}
		}
	} else {
		if (stepLocal_15 > ((- var_1_68) + var_1_88)) {
			var_1_34 = (max ((5 - var_1_18) , ((max (var_1_19 , var_1_22)) - var_1_9)));
		} else {
			var_1_34 = (min (var_1_99 , var_1_36));
		}
	}


	// From: Req35Batch82Amount500
	signed long int stepLocal_29 = var_1_36 * var_1_66;
	if (stepLocal_29 < var_1_65) {
		var_1_82 = var_1_50;
	}


	// From: Req36Batch82Amount500
	unsigned char stepLocal_30 = var_1_77;
	if (stepLocal_30 && (var_1_34 <= var_1_62)) {
		var_1_83 = (min (var_1_50 , (var_1_74 + var_1_41)));
	} else {
		var_1_83 = var_1_62;
	}


	// From: Req2Batch82Amount500
	if (32.8f > ((var_1_64 * var_1_23) / var_1_12)) {
		var_1_11 = (var_1_13 + ((min (var_1_14 , var_1_15)) + var_1_16));
	} else {
		if ((var_1_12 / 25.5) > var_1_14) {
			var_1_11 = var_1_13;
		}
	}


	// From: Req3Batch82Amount500
	unsigned long int stepLocal_4 = var_1_42;
	unsigned char stepLocal_3 = var_1_98 > (var_1_18 * var_1_7);
	unsigned char stepLocal_2 = var_1_31 || var_1_102;
	unsigned char stepLocal_1 = (var_1_7 * var_1_79) < var_1_10;
	if (stepLocal_1 || var_1_102) {
		if (stepLocal_4 >= ((32 * var_1_7) << (var_1_18 - var_1_19))) {
			var_1_17 = ((max (var_1_18 , (var_1_8 + var_1_98))) - (min ((var_1_10 + var_1_7) , 16)));
		} else {
			var_1_17 = ((min (var_1_7 , var_1_79)) + var_1_98);
		}
	} else {
		if (stepLocal_3 || (var_1_31 || (var_1_54 <= 100.25f))) {
			var_1_17 = (abs (max (var_1_7 , (var_1_19 - 128))));
		} else {
			if (stepLocal_2 || ((var_1_18 / var_1_7) >= var_1_10)) {
				var_1_17 = (var_1_10 - var_1_19);
			} else {
				var_1_17 = (max (var_1_7 , var_1_9));
			}
		}
	}


	// From: Req38Batch82Amount500
	signed long int stepLocal_31 = var_1_17 * var_1_50;
	if (stepLocal_31 > -16) {
		var_1_85 = var_1_81;
	} else {
		var_1_85 = (max (var_1_50 , (var_1_81 - (var_1_87 - var_1_19))));
	}


	// From: Req29Batch82Amount500
	if ((min ((var_1_65 % var_1_50) , (var_1_7 * var_1_34))) >= var_1_9) {
		var_1_72 = (min (var_1_18 , (var_1_7 - var_1_34)));
	} else {
		var_1_72 = (max (var_1_41 , var_1_74));
	}


	// From: Req6Batch82Amount500
	if (var_1_19 <= var_1_7) {
		var_1_25 = ((min (var_1_8 , 200)) - var_1_72);
	}


	// From: Req1Batch82Amount500
	unsigned char stepLocal_0 = var_1_83 <= var_1_42;
	if (var_1_77) {
		if (stepLocal_0 || (var_1_96 >= var_1_11)) {
			var_1_1 = (max ((var_1_7 - 16) , var_1_8));
		} else {
			var_1_1 = (var_1_7 - ((10000 - 32) + var_1_9));
		}
	} else {
		var_1_1 = (var_1_9 + var_1_10);
	}


	// From: Req4Batch82Amount500
	signed long int stepLocal_6 = var_1_25;
	unsigned char stepLocal_5 = var_1_18;
	if (stepLocal_6 >= (abs (var_1_18))) {
		if (stepLocal_5 >= (var_1_62 / var_1_22)) {
			var_1_21 = (var_1_18 - var_1_19);
		} else {
			if (var_1_102) {
				var_1_21 = (max (var_1_18 , var_1_19));
			}
		}
	} else {
		var_1_21 = var_1_19;
	}


	// From: Req7Batch82Amount500
	unsigned char stepLocal_7 = var_1_44;
	if (stepLocal_7 && var_1_31) {
		var_1_26 = ((var_1_27 - var_1_8) + (max (var_1_25 , last_1_var_1_26)));
	} else {
		if (var_1_44) {
			var_1_26 = (min (var_1_99 , (var_1_10 + var_1_18)));
		}
	}


	// From: Req12Batch82Amount500
	unsigned long int stepLocal_16 = var_1_68;
	if (var_1_101 > stepLocal_16) {
		var_1_37 = (max ((var_1_26 + var_1_9) , var_1_36));
	}


	// From: Req20Batch82Amount500
	unsigned long int stepLocal_25 = max (var_1_103 , (var_1_62 + var_1_26));
	if (stepLocal_25 >= var_1_83) {
		var_1_57 = var_1_18;
	} else {
		var_1_57 = (abs (max (var_1_22 , var_1_7)));
	}


	// From: Req37Batch82Amount500
	if (((var_1_40 >> var_1_18) + var_1_103) < (max (var_1_70 , var_1_83))) {
		if ((4 + (- var_1_62)) > ((var_1_68 / var_1_70) << var_1_1)) {
			var_1_84 = (abs (min ((var_1_59 + var_1_41) , (var_1_22 + var_1_50))));
		} else {
			var_1_84 = ((var_1_26 + var_1_81) + (var_1_9 + var_1_76));
		}
	}


	// From: Req28Batch82Amount500
	var_1_71 = var_1_37;


	// From: Req25Batch82Amount500
	if ((var_1_71 * var_1_88) != var_1_9) {
		if ((var_1_41 << var_1_1) >= (var_1_26 * var_1_22)) {
			if (var_1_31) {
				var_1_67 = last_1_var_1_67;
			} else {
				if (var_1_47 && var_1_93) {
					var_1_67 = ((min (var_1_39 , (last_1_var_1_67 - 8))) + var_1_1);
				} else {
					var_1_67 = ((var_1_50 + var_1_9) - var_1_17);
				}
			}
		}
	}
}



void updateVariables(void) {
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -230584.3009213691400e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -230584.3009213691400e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 5);
	assume_abort_if_not(var_1_18 <= 10);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 5);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 255);
	assume_abort_if_not(var_1_22 != 0);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 1073741823);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= -1);
	assume_abort_if_not(var_1_36 <= 32766);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967295);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 16383);
	assume_abort_if_not(var_1_41 <= 32767);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 2147483647);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 127);
	assume_abort_if_not(var_1_50 <= 254);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 32);
	assume_abort_if_not(var_1_51 <= 63);
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854766000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854766000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 16383);
	var_1_61 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_61 >= 16382);
	assume_abort_if_not(var_1_61 <= 32766);
	var_1_66 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_66 >= 536870911);
	assume_abort_if_not(var_1_66 <= 1073741823);
	var_1_70 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_70 >= 16384);
	assume_abort_if_not(var_1_70 <= 32767);
	var_1_74 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 65534);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 1);
	assume_abort_if_not(var_1_78 <= 1);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 127);
	assume_abort_if_not(var_1_81 <= 254);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 63);
	assume_abort_if_not(var_1_87 <= 127);
	var_1_89 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_89 >= 536870912);
	assume_abort_if_not(var_1_89 <= 1073741824);
	var_1_91 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_91 >= 1);
	assume_abort_if_not(var_1_91 <= 7);
	var_1_92 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_92 >= 3221225470);
	assume_abort_if_not(var_1_92 <= 4294967294);
	var_1_100 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_100 >= -2147483647);
	assume_abort_if_not(var_1_100 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_25 = var_1_25;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_102 = var_1_102;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_77 ? (((var_1_83 <= var_1_42) || (var_1_96 >= var_1_11)) ? (var_1_1 == ((unsigned short int) (max ((var_1_7 - 16) , var_1_8)))) : (var_1_1 == ((unsigned short int) (var_1_7 - ((10000 - 32) + var_1_9))))) : (var_1_1 == ((unsigned short int) (var_1_9 + var_1_10)))) && ((32.8f > ((var_1_64 * var_1_23) / var_1_12)) ? (var_1_11 == ((float) (var_1_13 + ((min (var_1_14 , var_1_15)) + var_1_16)))) : (((var_1_12 / 25.5) > var_1_14) ? (var_1_11 == ((float) var_1_13)) : 1))) && ((((var_1_7 * var_1_79) < var_1_10) || var_1_102) ? ((var_1_42 >= ((32 * var_1_7) << (var_1_18 - var_1_19))) ? (var_1_17 == ((signed long int) ((max (var_1_18 , (var_1_8 + var_1_98))) - (min ((var_1_10 + var_1_7) , 16))))) : (var_1_17 == ((signed long int) ((min (var_1_7 , var_1_79)) + var_1_98)))) : (((var_1_98 > (var_1_18 * var_1_7)) || (var_1_31 || (var_1_54 <= 100.25f))) ? (var_1_17 == ((signed long int) (abs (max (var_1_7 , (var_1_19 - 128)))))) : (((var_1_31 || var_1_102) || ((var_1_18 / var_1_7) >= var_1_10)) ? (var_1_17 == ((signed long int) (var_1_10 - var_1_19))) : (var_1_17 == ((signed long int) (max (var_1_7 , var_1_9)))))))) && ((var_1_25 >= (abs (var_1_18))) ? ((var_1_18 >= (var_1_62 / var_1_22)) ? (var_1_21 == ((signed char) (var_1_18 - var_1_19))) : (var_1_102 ? (var_1_21 == ((signed char) (max (var_1_18 , var_1_19)))) : 1)) : (var_1_21 == ((signed char) var_1_19)))) && ((((16 - 64) + -4) < var_1_19) ? ((var_1_75 == (var_1_99 / 32)) ? (var_1_23 == ((float) (var_1_14 + (max (var_1_16 , var_1_15))))) : (var_1_23 == ((float) (max (var_1_13 , ((var_1_16 + var_1_15) + var_1_14)))))) : (var_1_23 == ((float) (min (var_1_14 , var_1_24)))))) && ((var_1_19 <= var_1_7) ? (var_1_25 == ((signed long int) ((min (var_1_8 , 200)) - var_1_72))) : 1)) && ((var_1_44 && var_1_31) ? (var_1_26 == ((unsigned long int) ((var_1_27 - var_1_8) + (max (var_1_25 , last_1_var_1_26))))) : (var_1_44 ? (var_1_26 == ((unsigned long int) (min (var_1_99 , (var_1_10 + var_1_18))))) : 1))) && ((var_1_44 || var_1_31) ? (var_1_28 == ((signed char) (var_1_18 - var_1_19))) : (var_1_31 ? (var_1_28 == ((signed char) var_1_19)) : 1))) && (var_1_44 ? ((((max (var_1_27 , var_1_42)) * var_1_79) < var_1_101) ? (var_1_29 == ((float) (max (var_1_14 , var_1_15)))) : 1) : 1)) && ((8 > var_1_22) ? (var_1_31 == ((unsigned char) ((var_1_77 || var_1_32) && (var_1_77 || var_1_33)))) : 1)) && ((var_1_62 < var_1_103) ? (var_1_33 ? ((var_1_54 >= var_1_12) ? (var_1_34 == ((signed short int) (var_1_36 - var_1_9))) : (((50 + var_1_103) <= var_1_10) ? (var_1_34 == ((signed short int) (var_1_18 - (var_1_22 + 256)))) : ((var_1_62 >= var_1_22) ? (var_1_34 == ((signed short int) var_1_18)) : (var_1_34 == ((signed short int) (abs (var_1_19))))))) : ((var_1_88 <= var_1_62) ? (var_1_34 == ((signed short int) ((min ((max (var_1_36 , var_1_19)) , var_1_9)) - (min (var_1_18 , var_1_22))))) : (var_1_34 == ((signed short int) (min (var_1_22 , var_1_36)))))) : (((64u >> var_1_18) > ((- var_1_68) + var_1_88)) ? (var_1_34 == ((signed short int) (max ((5 - var_1_18) , ((max (var_1_19 , var_1_22)) - var_1_9))))) : (var_1_34 == ((signed short int) (min (var_1_99 , var_1_36))))))) && ((var_1_101 > var_1_68) ? (var_1_37 == ((signed short int) (max ((var_1_26 + var_1_9) , var_1_36)))) : 1)) && (((var_1_40 - var_1_8) > var_1_10) ? (var_1_39 == ((unsigned short int) (54531 - var_1_9))) : (var_1_39 == ((unsigned short int) (((min (23050 , var_1_41)) + 21575) - (min (var_1_18 , var_1_22))))))) && (((var_1_40 & last_1_var_1_42) > (- (last_1_var_1_88 >> var_1_18))) ? (((last_1_var_1_88 | (var_1_27 - last_1_var_1_67)) >= var_1_40) ? ((((last_1_var_1_83 * var_1_22) * last_1_var_1_25) > last_1_var_1_68) ? (var_1_42 == ((unsigned long int) (3595890363u - (var_1_7 + var_1_9)))) : (var_1_42 == ((unsigned long int) ((abs (var_1_27 - var_1_22)) + (max (var_1_43 , last_1_var_1_42)))))) : 1) : 1)) && (((var_1_24 + (var_1_45 - var_1_46)) == var_1_16) ? ((var_1_40 != (var_1_18 * var_1_62)) ? ((var_1_8 <= var_1_22) ? (var_1_44 == ((unsigned char) (var_1_47 || var_1_48))) : (var_1_44 == ((unsigned char) (! var_1_32)))) : (var_1_32 ? (var_1_44 == ((unsigned char) (var_1_102 || var_1_33))) : (var_1_44 == ((unsigned char) ((var_1_42 >= var_1_40) && (var_1_93 && (var_1_48 || var_1_47))))))) : 1)) && ((var_1_47 && (var_1_99 == (abs (var_1_22)))) ? ((! var_1_32) ? (var_1_49 == ((unsigned char) (abs (var_1_19)))) : (((max (var_1_99 , var_1_36)) < (var_1_27 % var_1_7)) ? (var_1_49 == ((unsigned char) (var_1_50 - 16))) : (var_1_49 == ((unsigned char) (var_1_50 - ((32 + var_1_51) - 10)))))) : 1)) && (((var_1_10 * var_1_51) > var_1_79) ? (var_1_52 == ((unsigned char) 10)) : (var_1_52 == ((unsigned char) (abs (10)))))) && (var_1_53 == ((signed char) (max (var_1_19 , var_1_51))))) && ((var_1_95 >= (- var_1_14)) ? (var_1_54 == ((double) (max (var_1_24 , 128.2)))) : ((-32 != (max (var_1_10 , (var_1_43 * var_1_51)))) ? ((var_1_42 >= var_1_7) ? (var_1_54 == ((double) (var_1_16 + var_1_14))) : (var_1_54 == ((double) (0.625 - (max ((max (31.6 , var_1_55)) , var_1_56)))))) : 1))) && (((max (var_1_103 , (var_1_62 + var_1_26))) >= var_1_83) ? (var_1_57 == ((unsigned short int) var_1_18)) : (var_1_57 == ((unsigned short int) (abs (max (var_1_22 , var_1_7))))))) && (var_1_77 ? ((var_1_47 && (var_1_77 && var_1_44)) ? (var_1_59 == ((signed short int) (abs ((var_1_60 - 64) + last_1_var_1_59)))) : (var_1_59 == ((signed short int) ((var_1_61 - 32) - last_1_var_1_59)))) : (var_1_59 == ((signed short int) (min (((var_1_60 - var_1_9) + var_1_75) , var_1_36)))))) && (last_1_var_1_31 ? ((var_1_33 && last_1_var_1_102) ? (var_1_62 == ((unsigned long int) (var_1_41 + last_1_var_1_82))) : 1) : (var_1_62 == ((unsigned long int) var_1_41)))) && ((var_1_9 > (var_1_40 * var_1_61)) ? ((var_1_13 < var_1_45) ? (var_1_64 == ((float) (var_1_56 - var_1_55))) : (var_1_64 == ((float) var_1_14))) : (var_1_64 == ((float) (var_1_56 - var_1_55))))) && (((max (var_1_59 , var_1_19)) == (var_1_51 - last_1_var_1_65)) ? (var_1_65 == ((signed long int) (last_1_var_1_65 - var_1_88))) : ((var_1_18 <= last_1_var_1_65) ? (var_1_65 == ((signed long int) ((min (var_1_69 , (var_1_7 + var_1_18))) + var_1_49))) : (var_1_65 == ((signed long int) (((min (var_1_9 , var_1_42)) - (var_1_66 - var_1_88)) + var_1_52)))))) && (((var_1_71 * var_1_88) != var_1_9) ? (((var_1_41 << var_1_1) >= (var_1_26 * var_1_22)) ? (var_1_31 ? (var_1_67 == ((signed long int) last_1_var_1_67)) : ((var_1_47 && var_1_93) ? (var_1_67 == ((signed long int) ((min (var_1_39 , (last_1_var_1_67 - 8))) + var_1_1))) : (var_1_67 == ((signed long int) ((var_1_50 + var_1_9) - var_1_17))))) : 1) : 1)) && ((last_1_var_1_71 >= last_1_var_1_26) ? (var_1_68 == ((unsigned long int) (last_1_var_1_69 + last_1_var_1_68))) : 1)) && ((! last_1_var_1_77) ? (var_1_69 == ((unsigned short int) ((var_1_41 + var_1_70) - last_1_var_1_72))) : (var_1_69 == ((unsigned short int) (min (var_1_60 , (var_1_7 - last_1_var_1_72))))))) && (var_1_71 == ((unsigned long int) var_1_37))) && (((min ((var_1_65 % var_1_50) , (var_1_7 * var_1_34))) >= var_1_9) ? (var_1_72 == ((unsigned short int) (min (var_1_18 , (var_1_7 - var_1_34))))) : (var_1_72 == ((unsigned short int) (max (var_1_41 , var_1_74)))))) && ((! var_1_32) ? (var_1_75 == ((unsigned short int) (abs (var_1_7 - 64)))) : 1)) && (var_1_76 == ((signed long int) (var_1_69 + var_1_105)))) && (((var_1_16 / var_1_12) <= (- 1.6f)) ? (var_1_77 == ((unsigned char) (! var_1_47))) : (var_1_77 == ((unsigned char) ((last_1_var_1_44 || var_1_78) && var_1_33))))) && (((var_1_43 % (min (var_1_51 , var_1_50))) == (var_1_22 * var_1_62)) ? (var_1_79 == ((unsigned short int) (min ((abs (var_1_10 + var_1_101)) , (max (var_1_70 , (var_1_7 - var_1_9))))))) : ((var_1_76 > ((16 / var_1_70) / var_1_41)) ? (var_1_79 == ((unsigned short int) (max (var_1_10 , var_1_19)))) : (var_1_79 == ((unsigned short int) (var_1_19 + var_1_51)))))) && ((var_1_14 > var_1_16) ? (var_1_80 == ((unsigned char) (max (((min (var_1_50 , var_1_81)) - var_1_18) , (abs (8)))))) : 1)) && (((var_1_36 * var_1_66) < var_1_65) ? (var_1_82 == ((unsigned char) var_1_50)) : 1)) && ((var_1_77 && (var_1_34 <= var_1_62)) ? (var_1_83 == ((unsigned long int) (min (var_1_50 , (var_1_74 + var_1_41))))) : (var_1_83 == ((unsigned long int) var_1_62)))) && ((((var_1_40 >> var_1_18) + var_1_103) < (max (var_1_70 , var_1_83))) ? (((4 + (- var_1_62)) > ((var_1_68 / var_1_70) << var_1_1)) ? (var_1_84 == ((unsigned short int) (abs (min ((var_1_59 + var_1_41) , (var_1_22 + var_1_50)))))) : (var_1_84 == ((unsigned short int) ((var_1_26 + var_1_81) + (var_1_9 + var_1_76))))) : 1)) && (((var_1_17 * var_1_50) > -16) ? (var_1_85 == ((unsigned char) var_1_81)) : (var_1_85 == ((unsigned char) (max (var_1_50 , (var_1_81 - (var_1_87 - var_1_19)))))))) && (((var_1_51 < var_1_103) && var_1_47) ? ((var_1_69 != var_1_18) ? (var_1_88 == ((unsigned long int) (((var_1_89 - last_1_var_1_88) + var_1_68) + (max (var_1_103 , (var_1_27 - var_1_68)))))) : ((var_1_105 > (var_1_19 >> var_1_91)) ? (var_1_88 == ((unsigned long int) (min (((var_1_92 - var_1_62) - var_1_68) , (var_1_19 + var_1_8))))) : 1)) : (var_1_88 == ((unsigned long int) (3942236725u - var_1_81))))) && (((var_1_101 < var_1_42) && (var_1_101 >= var_1_27)) ? (var_1_93 == ((unsigned char) 0)) : (var_1_93 == ((unsigned char) var_1_48)))) && (var_1_94 == ((signed char) var_1_18))) && (var_1_95 == ((float) var_1_24))) && (var_1_96 == ((double) var_1_56))) && (var_1_97 == ((signed short int) var_1_81))) && (var_1_98 == ((signed long int) var_1_49))) && (var_1_44 ? (var_1_99 == ((signed long int) var_1_100)) : (var_1_99 == ((signed long int) var_1_91)))) && (var_1_77 ? (var_1_101 == ((unsigned long int) var_1_61)) : (var_1_101 == ((unsigned long int) var_1_87)))) && (var_1_102 == ((unsigned char) var_1_33))) && (var_1_47 ? (var_1_103 == ((unsigned long int) var_1_91)) : 1)) && (var_1_44 ? (var_1_104 == ((signed char) var_1_18)) : (var_1_104 == ((signed char) var_1_91)))) && (var_1_102 ? (var_1_105 == ((signed long int) var_1_75)) : (var_1_105 == ((signed long int) var_1_66)))) && (var_1_93 ? (var_1_106 == ((double) var_1_55)) : (var_1_106 == ((double) var_1_13)))) && ((! (var_1_89 <= 256u)) ? (var_1_107 == ((signed char) (var_1_51 - (var_1_19 + var_1_91)))) : (var_1_107 == ((signed char) (min (var_1_19 , var_1_18)))))
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
