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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch95Amount500.c", 13, "reach_error"); }
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
signed char var_1_1 = -2;
signed char var_1_8 = 10;
signed char var_1_10 = 64;
signed char var_1_11 = 10;
signed char var_1_12 = 8;
signed char var_1_13 = 0;
signed char var_1_14 = -8;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
signed char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 128;
signed short int var_1_20 = -128;
float var_1_21 = 32.5;
float var_1_22 = 99999.25;
signed short int var_1_23 = 64;
signed long int var_1_24 = -4;
unsigned char var_1_25 = 10;
unsigned char var_1_26 = 100;
double var_1_27 = 32.4;
double var_1_28 = 0.0;
double var_1_29 = 31.5;
double var_1_30 = 49.5;
double var_1_31 = 256.3;
double var_1_32 = 4.4;
double var_1_33 = 8.8;
unsigned short int var_1_34 = 0;
unsigned short int var_1_35 = 17182;
unsigned short int var_1_36 = 31875;
signed long int var_1_37 = 1253842326;
unsigned long int var_1_38 = 1;
signed long int var_1_39 = 0;
double var_1_40 = 256.8;
signed long int var_1_41 = 8;
unsigned char var_1_42 = 10;
unsigned char var_1_43 = 32;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
double var_1_50 = 255.25;
double var_1_51 = 7.8;
unsigned short int var_1_53 = 51541;
double var_1_54 = 9999999999.9;
float var_1_55 = 0.3;
signed char var_1_56 = 5;
signed long int var_1_57 = 8;
signed long int var_1_58 = 256;
unsigned char var_1_59 = 0;
signed long int var_1_60 = 2;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
unsigned short int var_1_63 = 8;
unsigned short int var_1_66 = 30949;
signed short int var_1_67 = 32;
unsigned char var_1_68 = 10;
unsigned long int var_1_69 = 10000;
unsigned long int var_1_70 = 3489005145;
float var_1_71 = 255.543;
float var_1_72 = 4.75;
float var_1_73 = 999999999999999.5;
float var_1_74 = 0.0;
signed long int var_1_75 = 16;
signed short int var_1_76 = 100;
signed char var_1_78 = -128;
unsigned short int var_1_79 = 41205;
signed long int var_1_80 = -1;
unsigned char var_1_81 = 0;
signed long int var_1_82 = -2;
signed long int var_1_83 = 1270624304;
signed long int var_1_84 = 1000000000;
float var_1_85 = 4.7;
float var_1_87 = 0.0;
float var_1_88 = 9999999999.5;
float var_1_90 = 49.5;
unsigned short int var_1_91 = 16;
unsigned short int var_1_93 = 37370;
unsigned short int var_1_94 = 50;
double var_1_95 = 10.6;
double var_1_96 = 63.5;
signed char var_1_97 = -100;
signed long int var_1_98 = 1;
unsigned short int var_1_99 = 0;
signed char var_1_100 = 5;
unsigned short int var_1_101 = 2;
unsigned short int var_1_102 = 16;
signed char var_1_103 = -4;
signed short int var_1_104 = 10;
unsigned short int var_1_105 = 10000;
unsigned char var_1_106 = 1;
unsigned short int var_1_107 = 200;
unsigned short int var_1_108 = 16;
unsigned long int var_1_109 = 8;
signed long int var_1_110 = -500;
signed char var_1_111 = -128;
unsigned char var_1_113 = 1;
signed char var_1_114 = 100;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_15 = 0;
float last_1_var_1_21 = 32.5;
signed long int last_1_var_1_24 = -4;
double last_1_var_1_27 = 32.4;
double last_1_var_1_33 = 8.8;
signed long int last_1_var_1_39 = 0;
signed long int last_1_var_1_41 = 8;
double last_1_var_1_50 = 255.25;
unsigned char last_1_var_1_59 = 0;
unsigned char last_1_var_1_68 = 10;
unsigned long int last_1_var_1_69 = 10000;
signed long int last_1_var_1_75 = 16;
signed long int last_1_var_1_80 = -1;
signed long int last_1_var_1_82 = -2;
unsigned short int last_1_var_1_91 = 16;
double last_1_var_1_95 = 10.6;
signed long int last_1_var_1_98 = 1;
signed char last_1_var_1_100 = 5;
unsigned char last_1_var_1_106 = 1;
unsigned short int last_1_var_1_108 = 16;
unsigned long int last_1_var_1_109 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req15Batch95Amount500
	signed long int stepLocal_6 = last_1_var_1_82;
	if (stepLocal_6 < ((max (-2 , last_1_var_1_39)) + (last_1_var_1_100 & last_1_var_1_39))) {
		var_1_42 = (((var_1_43 - 16) + (max (var_1_38 , var_1_8))) + var_1_10);
	} else {
		var_1_42 = (max (var_1_8 , var_1_38));
	}


	// From: Req12Batch95Amount500
	signed long int stepLocal_4 = var_1_11 / var_1_36;
	signed long int stepLocal_3 = (var_1_35 + var_1_36) - (min (64 , last_1_var_1_108));
	if (stepLocal_3 <= ((var_1_10 + var_1_11) - (var_1_37 - var_1_26))) {
		if (stepLocal_4 < (var_1_13 >> var_1_38)) {
			var_1_34 = (min (last_1_var_1_108 , var_1_10));
		} else {
			var_1_34 = (max (last_1_var_1_80 , 32));
		}
	} else {
		var_1_34 = (max (var_1_19 , var_1_10));
	}


	// From: Req18Batch95Amount500
	signed long int stepLocal_10 = (var_1_53 - last_1_var_1_68) - var_1_11;
	signed long int stepLocal_9 = last_1_var_1_24;
	signed long int stepLocal_8 = var_1_19 - var_1_10;
	if (last_1_var_1_33 >= (var_1_30 - var_1_28)) {
		var_1_50 = (min ((var_1_30 + (abs (var_1_29))) , var_1_31));
	} else {
		if (stepLocal_9 <= (- var_1_43)) {
			if (stepLocal_8 < last_1_var_1_82) {
				var_1_50 = var_1_30;
			} else {
				var_1_50 = ((min ((var_1_30 + var_1_51) , var_1_32)) + var_1_31);
			}
		} else {
			if (var_1_22 >= 9.513f) {
				var_1_50 = ((abs (min (var_1_30 , var_1_32))) - var_1_28);
			} else {
				if (last_1_var_1_59) {
					var_1_50 = ((max ((var_1_28 - var_1_30) , var_1_31)) - 5.75);
				} else {
					if (last_1_var_1_98 >= stepLocal_10) {
						var_1_50 = var_1_30;
					}
				}
			}
		}
	}


	// From: Req38Batch95Amount500
	if ((min ((last_1_var_1_21 / var_1_74) , (last_1_var_1_50 / var_1_28))) > var_1_87) {
		if (last_1_var_1_91 > last_1_var_1_39) {
			if (last_1_var_1_41 <= var_1_83) {
				if ((max (last_1_var_1_50 , last_1_var_1_27)) <= last_1_var_1_21) {
					var_1_95 = ((var_1_28 - var_1_96) - var_1_90);
				} else {
					var_1_95 = (var_1_96 - var_1_88);
				}
			} else {
				var_1_95 = (min ((max ((min (var_1_96 , var_1_22)) , var_1_87)) , 8.75));
			}
		} else {
			if ((var_1_53 * last_1_var_1_98) > var_1_79) {
				if ((256.75f * last_1_var_1_95) <= (last_1_var_1_50 / var_1_74)) {
					var_1_95 = (max (var_1_74 , (var_1_88 + var_1_32)));
				} else {
					var_1_95 = (var_1_96 - var_1_88);
				}
			} else {
				var_1_95 = var_1_74;
			}
		}
	} else {
		var_1_95 = (var_1_51 + var_1_88);
	}


	// From: Req17Batch95Amount500
	if (var_1_13 >= (var_1_26 << (min (var_1_46 , var_1_47)))) {
		if (var_1_30 >= var_1_50) {
			var_1_45 = (var_1_16 && var_1_48);
		}
	} else {
		var_1_45 = (var_1_49 || (! var_1_48));
	}


	// From: Req23Batch95Amount500
	if ((- last_1_var_1_109) > (var_1_36 / var_1_60)) {
		if (var_1_36 >= (max ((var_1_43 / 32) , var_1_19))) {
			if ((last_1_var_1_33 <= 100.225) && last_1_var_1_106) {
				var_1_59 = (var_1_49 || var_1_61);
			}
		} else {
			if (! last_1_var_1_15) {
				var_1_59 = (! var_1_48);
			} else {
				var_1_59 = (last_1_var_1_15 || var_1_16);
			}
		}
	} else {
		var_1_59 = (var_1_16 && (var_1_48 && var_1_62));
	}


	// From: Req4Batch95Amount500
	if (var_1_16) {
		var_1_18 = (abs (var_1_8));
	} else {
		var_1_18 = (var_1_19 - 64);
	}


	// From: Req8Batch95Amount500
	var_1_24 = -100;


	// From: Req9Batch95Amount500
	if (var_1_16) {
		var_1_25 = (max (var_1_11 , (var_1_19 - (64 - var_1_8))));
	} else {
		var_1_25 = (var_1_19 - (max (var_1_10 , var_1_26)));
	}


	// From: Req19Batch95Amount500
	unsigned char stepLocal_11 = var_1_46;
	if (((128 << var_1_10) / var_1_38) < stepLocal_11) {
		var_1_54 = (var_1_30 + var_1_32);
	} else {
		var_1_54 = var_1_31;
	}


	// From: Req20Batch95Amount500
	if (var_1_48) {
		var_1_55 = (var_1_31 - var_1_28);
	}


	// From: Req21Batch95Amount500
	var_1_56 = (abs (var_1_13 - 25));


	// From: Req27Batch95Amount500
	unsigned char stepLocal_17 = var_1_43;
	if (! var_1_62) {
		var_1_69 = ((var_1_70 - var_1_35) - var_1_26);
	} else {
		if (stepLocal_17 > last_1_var_1_69) {
			var_1_69 = 128u;
		}
	}


	// From: Req29Batch95Amount500
	if (var_1_48) {
		if (var_1_50 > (var_1_50 + var_1_31)) {
			var_1_73 = (max (4.625f , var_1_28));
		} else {
			var_1_73 = ((min ((var_1_28 - var_1_29) , var_1_31)) - (var_1_74 - var_1_30));
		}
	}


	// From: Req30Batch95Amount500
	unsigned char stepLocal_18 = var_1_49;
	if (var_1_48 || stepLocal_18) {
		var_1_75 = ((min (var_1_12 , 16)) - var_1_13);
	} else {
		var_1_75 = (max (var_1_18 , (min ((min (var_1_19 , last_1_var_1_75)) , (abs (var_1_46))))));
	}


	// From: Req36Batch95Amount500
	unsigned char stepLocal_24 = var_1_19;
	signed long int stepLocal_23 = 25;
	if (stepLocal_24 < (var_1_46 / (min (var_1_38 , var_1_10)))) {
		if (var_1_25 >= stepLocal_23) {
			var_1_85 = (max (var_1_51 , (min (var_1_74 , var_1_31))));
		} else {
			var_1_85 = var_1_28;
		}
	} else {
		var_1_85 = (((abs (var_1_87)) - var_1_88) - (min (var_1_31 , var_1_90)));
	}


	// From: Req39Batch95Amount500
	var_1_97 = var_1_38;


	// From: Req40Batch95Amount500
	var_1_98 = 256;


	// From: Req42Batch95Amount500
	var_1_100 = var_1_8;


	// From: Req43Batch95Amount500
	if (var_1_48) {
		var_1_101 = var_1_36;
	} else {
		var_1_101 = var_1_19;
	}


	// From: Req47Batch95Amount500
	var_1_105 = var_1_46;


	// From: Req48Batch95Amount500
	var_1_106 = var_1_16;


	// From: Req49Batch95Amount500
	var_1_107 = var_1_13;


	// From: Req52Batch95Amount500
	var_1_110 = var_1_47;


	// From: Req53Batch95Amount500
	if (var_1_45) {
		var_1_111 = (max (var_1_11 , (min (var_1_13 , (max (var_1_38 , var_1_46))))));
	} else {
		var_1_111 = (64 - var_1_47);
	}


	// From: Req54Batch95Amount500
	var_1_113 = 1;


	// From: Req55Batch95Amount500
	var_1_114 = var_1_14;


	// From: Req35Batch95Amount500
	unsigned long int stepLocal_22 = var_1_69;
	if (stepLocal_22 <= var_1_38) {
		var_1_82 = (max (var_1_19 , var_1_75));
	} else {
		var_1_82 = ((var_1_83 - var_1_42) - ((var_1_84 + 1000000000) - var_1_8));
	}


	// From: Req33Batch95Amount500
	unsigned short int stepLocal_21 = var_1_53;
	if ((var_1_79 / var_1_38) <= stepLocal_21) {
		var_1_80 = (min (var_1_34 , (var_1_105 + var_1_34)));
	} else {
		var_1_80 = var_1_34;
	}


	// From: Req2Batch95Amount500
	if (var_1_50 > var_1_95) {
		var_1_15 = ((var_1_95 == 31.65) || var_1_16);
	}


	// From: Req51Batch95Amount500
	if (var_1_15) {
		var_1_109 = var_1_58;
	}


	// From: Req28Batch95Amount500
	if ((var_1_109 != var_1_8) || var_1_16) {
		var_1_71 = (((abs (var_1_30)) + var_1_51) + var_1_29);
	} else {
		if (var_1_30 > (- var_1_50)) {
			var_1_71 = (min (var_1_32 , (max (255.25f , var_1_22))));
		} else {
			if (var_1_95 > var_1_29) {
				var_1_71 = ((abs (var_1_72 + var_1_31)) - var_1_30);
			} else {
				var_1_71 = var_1_51;
			}
		}
	}


	// From: Req34Batch95Amount500
	if (var_1_61) {
		var_1_81 = ((! (var_1_113 && var_1_49)) && (var_1_62 || var_1_16));
	} else {
		var_1_81 = (var_1_59 || (var_1_15 || (var_1_48 && var_1_16)));
	}


	// From: Req7Batch95Amount500
	unsigned char stepLocal_1 = var_1_10 > var_1_13;
	if (! var_1_81) {
		var_1_23 = (min (var_1_8 , var_1_100));
	} else {
		if (var_1_81 || stepLocal_1) {
			var_1_23 = ((var_1_19 + 2) - var_1_10);
		} else {
			var_1_23 = var_1_19;
		}
	}


	// From: Req13Batch95Amount500
	if ((max (var_1_28 , (var_1_32 + 63.125))) <= (var_1_22 / var_1_40)) {
		if (var_1_106) {
			var_1_39 = var_1_110;
		}
	} else {
		var_1_39 = var_1_13;
	}


	// From: Req14Batch95Amount500
	unsigned long int stepLocal_5 = var_1_12 | (var_1_38 & var_1_80);
	if (! (var_1_22 <= var_1_55)) {
		if (var_1_10 > stepLocal_5) {
			var_1_41 = ((var_1_19 + var_1_11) - (1412105930 - var_1_80));
		}
	}


	// From: Req32Batch95Amount500
	unsigned char stepLocal_20 = (var_1_107 >> 10) >= (var_1_66 << var_1_69);
	if ((var_1_53 == (var_1_79 - var_1_13)) && stepLocal_20) {
		var_1_78 = (max ((max (var_1_13 , var_1_14)) , (abs (var_1_12))));
	} else {
		var_1_78 = (var_1_11 - (var_1_47 + var_1_38));
	}


	// From: Req44Batch95Amount500
	if (var_1_81) {
		var_1_102 = var_1_11;
	} else {
		var_1_102 = 10;
	}


	// From: Req45Batch95Amount500
	if (var_1_113) {
		var_1_103 = -10;
	} else {
		var_1_103 = 8;
	}


	// From: Req50Batch95Amount500
	if (var_1_113) {
		var_1_108 = var_1_105;
	} else {
		var_1_108 = var_1_11;
	}


	// From: Req22Batch95Amount500
	if (16 < ((var_1_41 + var_1_26) - (max (var_1_69 , var_1_11)))) {
		var_1_57 = (((max (var_1_53 , var_1_43)) + var_1_8) - var_1_58);
	} else {
		if (((var_1_37 - var_1_19) == var_1_41) || var_1_81) {
			var_1_57 = (max (var_1_97 , var_1_47));
		}
	}


	// From: Req25Batch95Amount500
	unsigned char stepLocal_14 = var_1_62;
	signed char stepLocal_13 = var_1_114;
	if (var_1_59 && stepLocal_14) {
		if (stepLocal_13 <= var_1_57) {
			var_1_67 = -1;
		}
	} else {
		var_1_67 = var_1_13;
	}


	// From: Req24Batch95Amount500
	signed short int stepLocal_12 = var_1_67;
	if (stepLocal_12 < var_1_107) {
		var_1_63 = ((var_1_36 + var_1_66) - var_1_26);
	} else {
		var_1_63 = (min ((min (var_1_8 , var_1_10)) , (10 + (min (16 , var_1_43)))));
	}


	// From: Req3Batch95Amount500
	if ((abs (var_1_11)) == (var_1_13 + var_1_10)) {
		if ((var_1_67 * 256) >= var_1_11) {
			var_1_17 = (max ((var_1_12 - var_1_10) , (min (var_1_14 , (min (var_1_8 , -5))))));
		} else {
			var_1_17 = var_1_13;
		}
	}


	// From: Req31Batch95Amount500
	unsigned char stepLocal_19 = var_1_26;
	if (var_1_69 < stepLocal_19) {
		var_1_76 = (abs (max ((var_1_13 + var_1_78) , var_1_97)));
	} else {
		var_1_76 = (((min (var_1_46 , 8)) + (4 - var_1_8)) + var_1_43);
	}


	// From: Req5Batch95Amount500
	var_1_20 = (var_1_13 - ((var_1_11 + 50) + (max (var_1_63 , var_1_19))));


	// From: Req16Batch95Amount500
	unsigned char stepLocal_7 = var_1_16;
	if (stepLocal_7 && ((- var_1_20) < var_1_67)) {
		var_1_44 = (! ((-10 >= var_1_75) && (! var_1_16)));
	}


	// From: Req46Batch95Amount500
	if (var_1_44) {
		var_1_104 = var_1_43;
	} else {
		var_1_104 = var_1_69;
	}


	// From: Req11Batch95Amount500
	unsigned char stepLocal_2 = var_1_71 > var_1_30;
	if ((var_1_44 || (var_1_57 > var_1_8)) && stepLocal_2) {
		var_1_33 = (var_1_31 - var_1_29);
	} else {
		var_1_33 = (var_1_31 + var_1_30);
	}


	// From: Req26Batch95Amount500
	unsigned long int stepLocal_16 = var_1_109 * 4;
	unsigned short int stepLocal_15 = var_1_36;
	if (var_1_95 > var_1_33) {
		if (stepLocal_16 >= var_1_105) {
			var_1_68 = (abs (var_1_46 + var_1_13));
		}
	} else {
		if (stepLocal_15 <= 1) {
			var_1_68 = var_1_13;
		} else {
			var_1_68 = ((min (128 , var_1_19)) - (min (var_1_10 , var_1_47)));
		}
	}


	// From: Req10Batch95Amount500
	if (var_1_44) {
		var_1_27 = ((var_1_28 - var_1_29) - ((4.140687232810147E18 - var_1_30) + var_1_31));
	} else {
		if (var_1_31 == (max (var_1_22 , (var_1_95 + var_1_33)))) {
			var_1_27 = (min ((var_1_30 + var_1_29) , (min ((var_1_31 + var_1_32) , var_1_28))));
		} else {
			var_1_27 = (max ((min ((var_1_28 - var_1_30) , (var_1_31 - var_1_29))) , 2.75));
		}
	}


	// From: Req6Batch95Amount500
	if ((4.5 / 9999.5) > (max (var_1_27 , var_1_95))) {
		var_1_21 = 4.6f;
	} else {
		if (var_1_59) {
			var_1_21 = var_1_22;
		} else {
			var_1_21 = (min (var_1_22 , 64.8f));
		}
	}


	// From: Req41Batch95Amount500
	if (var_1_45) {
		var_1_99 = 25;
	} else {
		var_1_99 = var_1_104;
	}


	// From: Req1Batch95Amount500
	unsigned char stepLocal_0 = (var_1_113 || var_1_45) && var_1_81;
	if (var_1_33 > var_1_54) {
		if (var_1_54 < var_1_33) {
			if (stepLocal_0 && var_1_15) {
				var_1_1 = (8 - (64 - var_1_8));
			} else {
				if (var_1_33 <= (var_1_54 / 15.8)) {
					var_1_1 = -4;
				} else {
					var_1_1 = (max (((var_1_10 - var_1_8) - var_1_11) , (min ((var_1_12 - var_1_13) , var_1_14))));
				}
			}
		}
	}


	// From: Req37Batch95Amount500
	unsigned char stepLocal_27 = var_1_46;
	unsigned char stepLocal_26 = var_1_59;
	signed long int stepLocal_25 = var_1_11 / var_1_19;
	if (var_1_110 != stepLocal_25) {
		if (stepLocal_26 || (var_1_29 < 9.999999998E8)) {
			var_1_91 = (var_1_93 - (500 + var_1_38));
		} else {
			if (last_1_var_1_91 > stepLocal_27) {
				var_1_91 = (min ((var_1_24 + var_1_20) , var_1_10));
			} else {
				var_1_91 = (var_1_94 + var_1_13);
			}
		}
	} else {
		var_1_91 = ((var_1_43 + (min (50 , var_1_46))) + (max (var_1_66 , (max (var_1_99 , var_1_110)))));
	}
}



void updateVariables(void) {
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 62);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 127);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 4611686.018427383000e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -461168.6018427383000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 16383);
	assume_abort_if_not(var_1_35 <= 32768);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 16384);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= 1073741823);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 6);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	assume_abort_if_not(var_1_40 != 0.0F);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 32);
	assume_abort_if_not(var_1_43 <= 64);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 1);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -230584.3009213691400e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691400e+12F && var_1_51 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 49151);
	assume_abort_if_not(var_1_53 <= 65535);
	var_1_58 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 2147483646);
	var_1_60 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_60 >= -2147483648);
	assume_abort_if_not(var_1_60 <= 2147483647);
	assume_abort_if_not(var_1_60 != 0);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 0);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 1);
	assume_abort_if_not(var_1_62 <= 1);
	var_1_66 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_66 >= 16384);
	assume_abort_if_not(var_1_66 <= 32767);
	var_1_70 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_70 >= 3221225470);
	assume_abort_if_not(var_1_70 <= 4294967294);
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= -461168.6018427383000e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427383000e+12F && var_1_72 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= 4611686.018427383000e+12F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854766000e+12F && var_1_74 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 32767);
	assume_abort_if_not(var_1_79 <= 65535);
	var_1_83 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_83 >= 1073741822);
	assume_abort_if_not(var_1_83 <= 2147483646);
	var_1_84 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_84 >= 536870911);
	assume_abort_if_not(var_1_84 <= 1073741823);
	var_1_87 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_87 >= -922337.2036854766000e+13F && var_1_87 <= -1.0e-20F) || (var_1_87 <= -461168.6018427383000e+13F && var_1_87 >= 1.0e-20F ));
	var_1_88 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_88 >= 0.0F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 4611686.018427383000e+12F && var_1_88 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_90 >= 0.0F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 9223372.036854766000e+12F && var_1_90 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_93 >= 32767);
	assume_abort_if_not(var_1_93 <= 65534);
	var_1_94 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 32767);
	var_1_96 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_96 >= 0.0F && var_1_96 <= -1.0e-20F) || (var_1_96 <= 4611686.018427383000e+12F && var_1_96 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_15 = var_1_15;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_109 = var_1_109;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_33 > var_1_54) ? ((var_1_54 < var_1_33) ? ((((var_1_113 || var_1_45) && var_1_81) && var_1_15) ? (var_1_1 == ((signed char) (8 - (64 - var_1_8)))) : ((var_1_33 <= (var_1_54 / 15.8)) ? (var_1_1 == ((signed char) -4)) : (var_1_1 == ((signed char) (max (((var_1_10 - var_1_8) - var_1_11) , (min ((var_1_12 - var_1_13) , var_1_14)))))))) : 1) : 1) && ((var_1_50 > var_1_95) ? (var_1_15 == ((unsigned char) ((var_1_95 == 31.65) || var_1_16))) : 1)) && (((abs (var_1_11)) == (var_1_13 + var_1_10)) ? (((var_1_67 * 256) >= var_1_11) ? (var_1_17 == ((signed char) (max ((var_1_12 - var_1_10) , (min (var_1_14 , (min (var_1_8 , -5)))))))) : (var_1_17 == ((signed char) var_1_13))) : 1)) && (var_1_16 ? (var_1_18 == ((unsigned char) (abs (var_1_8)))) : (var_1_18 == ((unsigned char) (var_1_19 - 64))))) && (var_1_20 == ((signed short int) (var_1_13 - ((var_1_11 + 50) + (max (var_1_63 , var_1_19))))))) && (((4.5 / 9999.5) > (max (var_1_27 , var_1_95))) ? (var_1_21 == ((float) 4.6f)) : (var_1_59 ? (var_1_21 == ((float) var_1_22)) : (var_1_21 == ((float) (min (var_1_22 , 64.8f))))))) && ((! var_1_81) ? (var_1_23 == ((signed short int) (min (var_1_8 , var_1_100)))) : ((var_1_81 || (var_1_10 > var_1_13)) ? (var_1_23 == ((signed short int) ((var_1_19 + 2) - var_1_10))) : (var_1_23 == ((signed short int) var_1_19))))) && (var_1_24 == ((signed long int) -100))) && (var_1_16 ? (var_1_25 == ((unsigned char) (max (var_1_11 , (var_1_19 - (64 - var_1_8)))))) : (var_1_25 == ((unsigned char) (var_1_19 - (max (var_1_10 , var_1_26))))))) && (var_1_44 ? (var_1_27 == ((double) ((var_1_28 - var_1_29) - ((4.140687232810147E18 - var_1_30) + var_1_31)))) : ((var_1_31 == (max (var_1_22 , (var_1_95 + var_1_33)))) ? (var_1_27 == ((double) (min ((var_1_30 + var_1_29) , (min ((var_1_31 + var_1_32) , var_1_28)))))) : (var_1_27 == ((double) (max ((min ((var_1_28 - var_1_30) , (var_1_31 - var_1_29))) , 2.75))))))) && (((var_1_44 || (var_1_57 > var_1_8)) && (var_1_71 > var_1_30)) ? (var_1_33 == ((double) (var_1_31 - var_1_29))) : (var_1_33 == ((double) (var_1_31 + var_1_30))))) && ((((var_1_35 + var_1_36) - (min (64 , last_1_var_1_108))) <= ((var_1_10 + var_1_11) - (var_1_37 - var_1_26))) ? (((var_1_11 / var_1_36) < (var_1_13 >> var_1_38)) ? (var_1_34 == ((unsigned short int) (min (last_1_var_1_108 , var_1_10)))) : (var_1_34 == ((unsigned short int) (max (last_1_var_1_80 , 32))))) : (var_1_34 == ((unsigned short int) (max (var_1_19 , var_1_10)))))) && (((max (var_1_28 , (var_1_32 + 63.125))) <= (var_1_22 / var_1_40)) ? (var_1_106 ? (var_1_39 == ((signed long int) var_1_110)) : 1) : (var_1_39 == ((signed long int) var_1_13)))) && ((! (var_1_22 <= var_1_55)) ? ((var_1_10 > (var_1_12 | (var_1_38 & var_1_80))) ? (var_1_41 == ((signed long int) ((var_1_19 + var_1_11) - (1412105930 - var_1_80)))) : 1) : 1)) && ((last_1_var_1_82 < ((max (-2 , last_1_var_1_39)) + (last_1_var_1_100 & last_1_var_1_39))) ? (var_1_42 == ((unsigned char) (((var_1_43 - 16) + (max (var_1_38 , var_1_8))) + var_1_10))) : (var_1_42 == ((unsigned char) (max (var_1_8 , var_1_38)))))) && ((var_1_16 && ((- var_1_20) < var_1_67)) ? (var_1_44 == ((unsigned char) (! ((-10 >= var_1_75) && (! var_1_16))))) : 1)) && ((var_1_13 >= (var_1_26 << (min (var_1_46 , var_1_47)))) ? ((var_1_30 >= var_1_50) ? (var_1_45 == ((unsigned char) (var_1_16 && var_1_48))) : 1) : (var_1_45 == ((unsigned char) (var_1_49 || (! var_1_48)))))) && ((last_1_var_1_33 >= (var_1_30 - var_1_28)) ? (var_1_50 == ((double) (min ((var_1_30 + (abs (var_1_29))) , var_1_31)))) : ((last_1_var_1_24 <= (- var_1_43)) ? (((var_1_19 - var_1_10) < last_1_var_1_82) ? (var_1_50 == ((double) var_1_30)) : (var_1_50 == ((double) ((min ((var_1_30 + var_1_51) , var_1_32)) + var_1_31)))) : ((var_1_22 >= 9.513f) ? (var_1_50 == ((double) ((abs (min (var_1_30 , var_1_32))) - var_1_28))) : (last_1_var_1_59 ? (var_1_50 == ((double) ((max ((var_1_28 - var_1_30) , var_1_31)) - 5.75))) : ((last_1_var_1_98 >= ((var_1_53 - last_1_var_1_68) - var_1_11)) ? (var_1_50 == ((double) var_1_30)) : 1)))))) && ((((128 << var_1_10) / var_1_38) < var_1_46) ? (var_1_54 == ((double) (var_1_30 + var_1_32))) : (var_1_54 == ((double) var_1_31)))) && (var_1_48 ? (var_1_55 == ((float) (var_1_31 - var_1_28))) : 1)) && (var_1_56 == ((signed char) (abs (var_1_13 - 25))))) && ((16 < ((var_1_41 + var_1_26) - (max (var_1_69 , var_1_11)))) ? (var_1_57 == ((signed long int) (((max (var_1_53 , var_1_43)) + var_1_8) - var_1_58))) : ((((var_1_37 - var_1_19) == var_1_41) || var_1_81) ? (var_1_57 == ((signed long int) (max (var_1_97 , var_1_47)))) : 1))) && (((- last_1_var_1_109) > (var_1_36 / var_1_60)) ? ((var_1_36 >= (max ((var_1_43 / 32) , var_1_19))) ? (((last_1_var_1_33 <= 100.225) && last_1_var_1_106) ? (var_1_59 == ((unsigned char) (var_1_49 || var_1_61))) : 1) : ((! last_1_var_1_15) ? (var_1_59 == ((unsigned char) (! var_1_48))) : (var_1_59 == ((unsigned char) (last_1_var_1_15 || var_1_16))))) : (var_1_59 == ((unsigned char) (var_1_16 && (var_1_48 && var_1_62)))))) && ((var_1_67 < var_1_107) ? (var_1_63 == ((unsigned short int) ((var_1_36 + var_1_66) - var_1_26))) : (var_1_63 == ((unsigned short int) (min ((min (var_1_8 , var_1_10)) , (10 + (min (16 , var_1_43))))))))) && ((var_1_59 && var_1_62) ? ((var_1_114 <= var_1_57) ? (var_1_67 == ((signed short int) -1)) : 1) : (var_1_67 == ((signed short int) var_1_13)))) && ((var_1_95 > var_1_33) ? (((var_1_109 * 4) >= var_1_105) ? (var_1_68 == ((unsigned char) (abs (var_1_46 + var_1_13)))) : 1) : ((var_1_36 <= 1) ? (var_1_68 == ((unsigned char) var_1_13)) : (var_1_68 == ((unsigned char) ((min (128 , var_1_19)) - (min (var_1_10 , var_1_47)))))))) && ((! var_1_62) ? (var_1_69 == ((unsigned long int) ((var_1_70 - var_1_35) - var_1_26))) : ((var_1_43 > last_1_var_1_69) ? (var_1_69 == ((unsigned long int) 128u)) : 1))) && (((var_1_109 != var_1_8) || var_1_16) ? (var_1_71 == ((float) (((abs (var_1_30)) + var_1_51) + var_1_29))) : ((var_1_30 > (- var_1_50)) ? (var_1_71 == ((float) (min (var_1_32 , (max (255.25f , var_1_22)))))) : ((var_1_95 > var_1_29) ? (var_1_71 == ((float) ((abs (var_1_72 + var_1_31)) - var_1_30))) : (var_1_71 == ((float) var_1_51)))))) && (var_1_48 ? ((var_1_50 > (var_1_50 + var_1_31)) ? (var_1_73 == ((float) (max (4.625f , var_1_28)))) : (var_1_73 == ((float) ((min ((var_1_28 - var_1_29) , var_1_31)) - (var_1_74 - var_1_30))))) : 1)) && ((var_1_48 || var_1_49) ? (var_1_75 == ((signed long int) ((min (var_1_12 , 16)) - var_1_13))) : (var_1_75 == ((signed long int) (max (var_1_18 , (min ((min (var_1_19 , last_1_var_1_75)) , (abs (var_1_46)))))))))) && ((var_1_69 < var_1_26) ? (var_1_76 == ((signed short int) (abs (max ((var_1_13 + var_1_78) , var_1_97))))) : (var_1_76 == ((signed short int) (((min (var_1_46 , 8)) + (4 - var_1_8)) + var_1_43))))) && (((var_1_53 == (var_1_79 - var_1_13)) && ((var_1_107 >> 10) >= (var_1_66 << var_1_69))) ? (var_1_78 == ((signed char) (max ((max (var_1_13 , var_1_14)) , (abs (var_1_12)))))) : (var_1_78 == ((signed char) (var_1_11 - (var_1_47 + var_1_38)))))) && (((var_1_79 / var_1_38) <= var_1_53) ? (var_1_80 == ((signed long int) (min (var_1_34 , (var_1_105 + var_1_34))))) : (var_1_80 == ((signed long int) var_1_34)))) && (var_1_61 ? (var_1_81 == ((unsigned char) ((! (var_1_113 && var_1_49)) && (var_1_62 || var_1_16)))) : (var_1_81 == ((unsigned char) (var_1_59 || (var_1_15 || (var_1_48 && var_1_16))))))) && ((var_1_69 <= var_1_38) ? (var_1_82 == ((signed long int) (max (var_1_19 , var_1_75)))) : (var_1_82 == ((signed long int) ((var_1_83 - var_1_42) - ((var_1_84 + 1000000000) - var_1_8)))))) && ((var_1_19 < (var_1_46 / (min (var_1_38 , var_1_10)))) ? ((var_1_25 >= 25) ? (var_1_85 == ((float) (max (var_1_51 , (min (var_1_74 , var_1_31)))))) : (var_1_85 == ((float) var_1_28))) : (var_1_85 == ((float) (((abs (var_1_87)) - var_1_88) - (min (var_1_31 , var_1_90))))))) && ((var_1_110 != (var_1_11 / var_1_19)) ? ((var_1_59 || (var_1_29 < 9.999999998E8)) ? (var_1_91 == ((unsigned short int) (var_1_93 - (500 + var_1_38)))) : ((last_1_var_1_91 > var_1_46) ? (var_1_91 == ((unsigned short int) (min ((var_1_24 + var_1_20) , var_1_10)))) : (var_1_91 == ((unsigned short int) (var_1_94 + var_1_13))))) : (var_1_91 == ((unsigned short int) ((var_1_43 + (min (50 , var_1_46))) + (max (var_1_66 , (max (var_1_99 , var_1_110))))))))) && (((min ((last_1_var_1_21 / var_1_74) , (last_1_var_1_50 / var_1_28))) > var_1_87) ? ((last_1_var_1_91 > last_1_var_1_39) ? ((last_1_var_1_41 <= var_1_83) ? (((max (last_1_var_1_50 , last_1_var_1_27)) <= last_1_var_1_21) ? (var_1_95 == ((double) ((var_1_28 - var_1_96) - var_1_90))) : (var_1_95 == ((double) (var_1_96 - var_1_88)))) : (var_1_95 == ((double) (min ((max ((min (var_1_96 , var_1_22)) , var_1_87)) , 8.75))))) : (((var_1_53 * last_1_var_1_98) > var_1_79) ? (((256.75f * last_1_var_1_95) <= (last_1_var_1_50 / var_1_74)) ? (var_1_95 == ((double) (max (var_1_74 , (var_1_88 + var_1_32))))) : (var_1_95 == ((double) (var_1_96 - var_1_88)))) : (var_1_95 == ((double) var_1_74)))) : (var_1_95 == ((double) (var_1_51 + var_1_88))))) && (var_1_97 == ((signed char) var_1_38))) && (var_1_98 == ((signed long int) 256))) && (var_1_45 ? (var_1_99 == ((unsigned short int) 25)) : (var_1_99 == ((unsigned short int) var_1_104)))) && (var_1_100 == ((signed char) var_1_8))) && (var_1_48 ? (var_1_101 == ((unsigned short int) var_1_36)) : (var_1_101 == ((unsigned short int) var_1_19)))) && (var_1_81 ? (var_1_102 == ((unsigned short int) var_1_11)) : (var_1_102 == ((unsigned short int) 10)))) && (var_1_113 ? (var_1_103 == ((signed char) -10)) : (var_1_103 == ((signed char) 8)))) && (var_1_44 ? (var_1_104 == ((signed short int) var_1_43)) : (var_1_104 == ((signed short int) var_1_69)))) && (var_1_105 == ((unsigned short int) var_1_46))) && (var_1_106 == ((unsigned char) var_1_16))) && (var_1_107 == ((unsigned short int) var_1_13))) && (var_1_113 ? (var_1_108 == ((unsigned short int) var_1_105)) : (var_1_108 == ((unsigned short int) var_1_11)))) && (var_1_15 ? (var_1_109 == ((unsigned long int) var_1_58)) : 1)) && (var_1_110 == ((signed long int) var_1_47))) && (var_1_45 ? (var_1_111 == ((signed char) (max (var_1_11 , (min (var_1_13 , (max (var_1_38 , var_1_46)))))))) : (var_1_111 == ((signed char) (64 - var_1_47))))) && (var_1_113 == ((unsigned char) 1))) && (var_1_114 == ((signed char) var_1_14))
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
