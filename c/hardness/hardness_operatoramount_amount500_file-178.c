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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch178Amount500.c", 13, "reach_error"); }
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
signed long int var_1_1 = -32;
signed long int var_1_4 = -25;
double var_1_5 = 4.4;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
double var_1_8 = 10000000.75;
double var_1_9 = 99999.75;
unsigned char var_1_10 = 25;
unsigned char var_1_13 = 128;
unsigned char var_1_14 = 128;
unsigned char var_1_15 = 16;
unsigned char var_1_16 = 4;
double var_1_17 = 63.9;
double var_1_18 = 127.5;
double var_1_19 = 4.5;
double var_1_20 = 15.5;
signed long int var_1_21 = -50;
signed char var_1_22 = 2;
signed char var_1_23 = 0;
signed char var_1_24 = 100;
unsigned char var_1_25 = 4;
signed long int var_1_26 = 256;
signed short int var_1_27 = 10;
signed short int var_1_28 = 17886;
double var_1_29 = -0.12;
double var_1_30 = 64.75;
double var_1_31 = 99999999999999.8;
signed short int var_1_32 = -256;
signed char var_1_33 = -8;
signed char var_1_34 = -10;
unsigned char var_1_36 = 1;
signed short int var_1_37 = 24692;
signed short int var_1_38 = -5;
signed short int var_1_39 = 100;
signed char var_1_40 = -128;
signed short int var_1_41 = 1;
signed long int var_1_42 = 16;
signed long int var_1_43 = 2;
signed long int var_1_44 = 1422045305;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 4;
float var_1_48 = 9.25;
unsigned long int var_1_49 = 32;
signed short int var_1_50 = 64;
unsigned long int var_1_51 = 2048958085;
unsigned long int var_1_52 = 2729304397;
signed long int var_1_53 = 50;
unsigned char var_1_54 = 10;
signed short int var_1_55 = -1;
signed short int var_1_56 = -10;
signed short int var_1_57 = 26113;
signed short int var_1_58 = 10000;
signed long int var_1_59 = 10;
signed char var_1_60 = -10;
signed char var_1_61 = 0;
float var_1_62 = 50.8;
float var_1_63 = 0.0;
float var_1_64 = 49.15;
float var_1_65 = 16.7;
float var_1_66 = 31.75;
unsigned long int var_1_67 = 100000000;
double var_1_68 = 0.0;
double var_1_69 = 100000000000.8;
unsigned short int var_1_70 = 32;
unsigned long int var_1_71 = 256;
unsigned long int var_1_72 = 3564599522;
signed short int var_1_73 = -64;
double var_1_74 = 8.8;
double var_1_75 = 0.0;
double var_1_76 = 64.25;
double var_1_77 = 0.6;
double var_1_78 = 7.8;
unsigned long int var_1_79 = 128;
signed short int var_1_81 = -64;
signed char var_1_82 = 8;
signed char var_1_83 = 32;
float var_1_84 = 4.625;
float var_1_85 = -0.2;
float var_1_87 = 0.0;
unsigned short int var_1_88 = 25;
unsigned long int var_1_89 = 25;
unsigned long int var_1_90 = 64;
unsigned short int var_1_91 = 2;
unsigned char var_1_93 = 1;
signed char var_1_94 = -64;
float var_1_95 = 0.55;
unsigned char var_1_96 = 1;
float var_1_97 = 10.2;
unsigned char var_1_98 = 5;
signed short int var_1_99 = 4;
signed short int var_1_100 = -16;
unsigned char var_1_101 = 10;
unsigned short int var_1_102 = 5;
unsigned long int var_1_103 = 10;
unsigned long int var_1_104 = 64;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -32;
signed long int last_1_var_1_26 = 256;
unsigned char last_1_var_1_45 = 1;
signed long int last_1_var_1_53 = 50;
signed short int last_1_var_1_55 = -1;
signed short int last_1_var_1_56 = -10;
unsigned long int last_1_var_1_67 = 100000000;
double last_1_var_1_68 = 0.0;
unsigned short int last_1_var_1_70 = 32;
double last_1_var_1_74 = 8.8;
signed short int last_1_var_1_81 = -64;
unsigned long int last_1_var_1_90 = 64;
unsigned short int last_1_var_1_91 = 2;
unsigned char last_1_var_1_93 = 1;
unsigned long int last_1_var_1_103 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch178Amount500
	signed long int stepLocal_0 = last_1_var_1_56;
	if (stepLocal_0 < last_1_var_1_91) {
		var_1_1 = (max (-32 , (last_1_var_1_91 + (max (last_1_var_1_56 , var_1_4)))));
	}


	// From: Req30Batch178Amount500
	signed long int stepLocal_21 = var_1_15 - var_1_58;
	if (last_1_var_1_93) {
		if (last_1_var_1_53 >= stepLocal_21) {
			var_1_73 = (min ((abs (last_1_var_1_90)) , var_1_58));
		} else {
			var_1_73 = (abs (var_1_54 - (var_1_37 - var_1_58)));
		}
	}


	// From: Req22Batch178Amount500
	signed long int stepLocal_14 = var_1_37 - var_1_15;
	unsigned char stepLocal_13 = var_1_14;
	if (stepLocal_14 >= (abs (var_1_24))) {
		var_1_56 = ((var_1_14 + (var_1_54 + var_1_24)) - (var_1_37 - last_1_var_1_26));
	} else {
		if (last_1_var_1_1 >= stepLocal_13) {
			var_1_56 = ((var_1_57 - (var_1_58 - last_1_var_1_1)) - var_1_37);
		} else {
			var_1_56 = ((var_1_58 + var_1_54) - var_1_57);
		}
	}


	// From: Req38Batch178Amount500
	if (var_1_57 > last_1_var_1_70) {
		if ((last_1_var_1_26 * 8) < ((last_1_var_1_1 + var_1_34) % (max (var_1_28 , var_1_13)))) {
			var_1_90 = 64u;
		} else {
			var_1_90 = last_1_var_1_70;
		}
	} else {
		var_1_90 = (max ((max (var_1_13 , var_1_54)) , last_1_var_1_67));
	}


	// From: Req49Batch178Amount500
	if (var_1_46) {
		var_1_102 = var_1_90;
	} else {
		var_1_102 = var_1_61;
	}


	// From: Req4Batch178Amount500
	signed long int stepLocal_2 = (- var_1_4) / var_1_13;
	if (var_1_102 <= stepLocal_2) {
		var_1_17 = (max ((var_1_18 - 3.8) , ((max (var_1_9 , var_1_19)) + var_1_20)));
	}


	// From: Req50Batch178Amount500
	signed long int stepLocal_39 = last_1_var_1_55;
	if (last_1_var_1_45) {
		if (stepLocal_39 > last_1_var_1_103) {
			var_1_103 = (min (var_1_104 , var_1_39));
		} else {
			if (last_1_var_1_68 > last_1_var_1_74) {
				var_1_103 = (min (last_1_var_1_91 , var_1_104));
			}
		}
	} else {
		var_1_103 = var_1_39;
	}


	// From: Req33Batch178Amount500
	signed long int stepLocal_25 = (var_1_61 + var_1_82) - (4 + var_1_83);
	unsigned char stepLocal_24 = var_1_13;
	if (var_1_52 > stepLocal_24) {
		if (stepLocal_25 < var_1_103) {
			var_1_81 = (var_1_23 - var_1_54);
		} else {
			var_1_81 = (max ((var_1_103 + var_1_13) , var_1_16));
		}
	} else {
		var_1_81 = ((max (var_1_58 , (max (last_1_var_1_81 , var_1_54)))) - 128);
	}


	// From: Req36Batch178Amount500
	unsigned char stepLocal_35 = var_1_13;
	if (((var_1_14 - var_1_16) * (var_1_51 | var_1_90)) > stepLocal_35) {
		var_1_88 = (var_1_102 + (var_1_82 + var_1_16));
	} else {
		var_1_88 = (abs (var_1_57));
	}


	// From: Req2Batch178Amount500
	if (var_1_6 || var_1_7) {
		var_1_5 = var_1_8;
	} else {
		var_1_5 = (max ((5.4 + var_1_9) , var_1_8));
	}


	// From: Req10Batch178Amount500
	var_1_29 = (var_1_19 + (var_1_30 - var_1_31));


	// From: Req13Batch178Amount500
	if (var_1_31 <= var_1_5) {
		var_1_40 = var_1_23;
	}


	// From: Req14Batch178Amount500
	if (var_1_6 || var_1_36) {
		if (var_1_6 || var_1_7) {
			var_1_41 = (var_1_23 - var_1_39);
		}
	} else {
		var_1_41 = (var_1_39 - var_1_14);
	}


	// From: Req17Batch178Amount500
	var_1_47 = (min (var_1_15 , var_1_16));


	// From: Req41Batch178Amount500
	var_1_94 = var_1_82;


	// From: Req43Batch178Amount500
	var_1_96 = var_1_46;


	// From: Req44Batch178Amount500
	var_1_97 = var_1_76;


	// From: Req45Batch178Amount500
	if (var_1_96) {
		var_1_98 = var_1_14;
	} else {
		var_1_98 = 1;
	}


	// From: Req48Batch178Amount500
	var_1_101 = var_1_16;


	// From: Req9Batch178Amount500
	if ((var_1_17 * var_1_18) >= var_1_20) {
		if ((! 0) && (var_1_101 <= var_1_14)) {
			var_1_27 = ((var_1_28 - var_1_101) - var_1_24);
		}
	} else {
		var_1_27 = (max ((min (var_1_14 , var_1_1)) , var_1_56));
	}


	// From: Req23Batch178Amount500
	unsigned long int stepLocal_15 = 10u;
	if ((max (0u , var_1_54)) < stepLocal_15) {
		if (! (! var_1_96)) {
			var_1_59 = (max (var_1_43 , var_1_23));
		}
	} else {
		var_1_59 = ((var_1_56 + var_1_14) + 4);
	}


	// From: Req37Batch178Amount500
	if (var_1_96) {
		var_1_89 = (abs (var_1_88));
	} else {
		var_1_89 = (min ((max (var_1_83 , var_1_82)) , var_1_24));
	}


	// From: Req40Batch178Amount500
	if (var_1_96) {
		var_1_93 = 0;
	} else {
		var_1_93 = 1;
	}


	// From: Req42Batch178Amount500
	if (var_1_93) {
		var_1_95 = 4.6f;
	} else {
		var_1_95 = var_1_75;
	}


	// From: Req47Batch178Amount500
	if (var_1_93) {
		var_1_100 = var_1_39;
	} else {
		var_1_100 = var_1_37;
	}


	// From: Req19Batch178Amount500
	if (var_1_103 > (var_1_59 / var_1_50)) {
		var_1_49 = (var_1_16 + ((min (var_1_44 , var_1_51)) - (max (var_1_15 , var_1_13))));
	} else {
		var_1_49 = (var_1_52 - (256u + var_1_14));
	}


	// From: Req15Batch178Amount500
	if (((min (var_1_13 , var_1_90)) * var_1_103) <= 50) {
		var_1_42 = (var_1_73 + var_1_49);
	} else {
		var_1_42 = (max ((var_1_43 - (var_1_44 - var_1_13)) , var_1_103));
	}


	// From: Req5Batch178Amount500
	signed long int stepLocal_3 = var_1_42;
	if (stepLocal_3 <= var_1_73) {
		var_1_21 = (var_1_14 - var_1_73);
	} else {
		var_1_21 = (abs (var_1_73));
	}


	// From: Req32Batch178Amount500
	unsigned char stepLocal_23 = var_1_78 < (var_1_76 - var_1_63);
	if ((var_1_73 > (var_1_39 & var_1_33)) && stepLocal_23) {
		if (var_1_96) {
			var_1_79 = (var_1_58 + var_1_13);
		} else {
			var_1_79 = ((var_1_58 + var_1_13) + (var_1_51 - var_1_39));
		}
	} else {
		var_1_79 = (var_1_52 - var_1_21);
	}


	// From: Req29Batch178Amount500
	unsigned long int stepLocal_20 = (var_1_52 + var_1_79) * (var_1_72 - var_1_24);
	if ((var_1_103 / var_1_54) > stepLocal_20) {
		var_1_71 = (var_1_14 + var_1_61);
	} else {
		var_1_71 = (var_1_100 + (max (var_1_37 , var_1_16)));
	}


	// From: Req8Batch178Amount500
	unsigned long int stepLocal_5 = var_1_103;
	if (stepLocal_5 > var_1_42) {
		var_1_26 = (var_1_23 + var_1_15);
	}


	// From: Req28Batch178Amount500
	unsigned long int stepLocal_19 = var_1_49;
	if (stepLocal_19 > var_1_21) {
		var_1_70 = ((var_1_13 + (max (var_1_16 , var_1_24))) + (abs (var_1_58)));
	} else {
		var_1_70 = ((var_1_37 - var_1_16) + (last_1_var_1_70 + (abs (var_1_15))));
	}


	// From: Req16Batch178Amount500
	var_1_45 = ((var_1_21 <= (var_1_79 / var_1_14)) || var_1_46);


	// From: Req3Batch178Amount500
	unsigned long int stepLocal_1 = var_1_79 + (abs (var_1_89));
	if (stepLocal_1 < var_1_49) {
		var_1_10 = ((min (var_1_13 , var_1_14)) - 5);
	} else {
		var_1_10 = (min ((var_1_15 + var_1_16) , var_1_13));
	}


	// From: Req7Batch178Amount500
	if (! var_1_45) {
		var_1_25 = (max (var_1_13 , var_1_16));
	} else {
		var_1_25 = (max (var_1_13 , var_1_15));
	}


	// From: Req12Batch178Amount500
	if (var_1_45) {
		var_1_38 = (max ((var_1_15 + var_1_34) , var_1_24));
	} else {
		var_1_38 = (var_1_13 - (abs (var_1_89 - var_1_39)));
	}


	// From: Req24Batch178Amount500
	unsigned char stepLocal_16 = var_1_45;
	if (stepLocal_16 && (var_1_102 >= var_1_52)) {
		var_1_60 = (var_1_24 - var_1_54);
	} else {
		var_1_60 = (var_1_24 - (64 - var_1_61));
	}


	// From: Req25Batch178Amount500
	if (var_1_45) {
		if ((- var_1_18) < 255.9) {
			var_1_62 = (min (((var_1_63 - var_1_30) - var_1_18) , (var_1_19 + (var_1_64 + 0.2f))));
		}
	} else {
		var_1_62 = ((var_1_64 + var_1_65) + ((max (var_1_31 , var_1_30)) - var_1_66));
	}


	// From: Req20Batch178Amount500
	unsigned char stepLocal_12 = var_1_16;
	if (stepLocal_12 > ((var_1_49 + last_1_var_1_53) / (var_1_13 - var_1_54))) {
		var_1_53 = (min ((var_1_71 + var_1_33) , (min (var_1_23 , (var_1_39 - var_1_44)))));
	}


	// From: Req46Batch178Amount500
	if (var_1_96) {
		var_1_99 = var_1_53;
	}


	// From: Req27Batch178Amount500
	unsigned char stepLocal_18 = var_1_10;
	unsigned long int stepLocal_17 = var_1_89;
	if (((max (0 , var_1_1)) | (var_1_51 * var_1_58)) > stepLocal_17) {
		if ((var_1_59 % var_1_14) >= stepLocal_18) {
			var_1_68 = var_1_19;
		} else {
			var_1_68 = (min (var_1_20 , (var_1_69 - (var_1_66 + var_1_31))));
		}
	}


	// From: Req11Batch178Amount500
	unsigned long int stepLocal_10 = var_1_89;
	unsigned long int stepLocal_9 = var_1_89;
	signed long int stepLocal_8 = var_1_16 + (min (var_1_33 , var_1_4));
	signed long int stepLocal_7 = max ((var_1_101 + -10) , var_1_28);
	signed long int stepLocal_6 = ~ var_1_24;
	if (stepLocal_6 < (var_1_14 + (var_1_23 * 200))) {
		if (var_1_93) {
			var_1_32 = ((max ((var_1_28 - var_1_15) , var_1_16)) - var_1_13);
		} else {
			if (((~ var_1_24) / (max (var_1_33 , var_1_34))) >= stepLocal_7) {
				if (stepLocal_8 > (var_1_15 - var_1_103)) {
					var_1_32 = (var_1_103 + var_1_101);
				}
			} else {
				if (var_1_93) {
					if (stepLocal_9 >= var_1_53) {
						if (var_1_31 < var_1_29) {
							var_1_32 = (min ((var_1_24 - var_1_13) , (max (var_1_23 , -32))));
						} else {
							var_1_32 = ((var_1_13 - var_1_101) + (var_1_14 - var_1_16));
						}
					} else {
						if (stepLocal_10 >= var_1_33) {
							var_1_32 = (var_1_23 - 8);
						} else {
							var_1_32 = (((10000 - var_1_103) + (var_1_16 + var_1_14)) - var_1_24);
						}
					}
				} else {
					var_1_32 = var_1_103;
				}
			}
		}
	} else {
		if (var_1_45) {
			var_1_32 = (min (var_1_101 , (var_1_14 + var_1_15)));
		} else {
			if (var_1_45) {
				var_1_32 = (var_1_101 - (var_1_37 - 100));
			} else {
				var_1_32 = var_1_37;
			}
		}
	}


	// From: Req21Batch178Amount500
	if (! ((var_1_50 & var_1_54) > var_1_102)) {
		var_1_55 = (var_1_81 + var_1_32);
	} else {
		var_1_55 = var_1_24;
	}


	// From: Req31Batch178Amount500
	unsigned long int stepLocal_22 = var_1_51;
	if (stepLocal_22 > var_1_61) {
		var_1_74 = ((min (var_1_18 , var_1_69)) - ((var_1_76 + var_1_77) + (max (var_1_78 , var_1_30))));
	} else {
		if (var_1_66 < (max (var_1_68 , last_1_var_1_74))) {
			var_1_74 = (max ((var_1_75 - var_1_77) , var_1_63));
		}
	}


	// From: Req6Batch178Amount500
	signed short int stepLocal_4 = var_1_55;
	if (var_1_4 > stepLocal_4) {
		var_1_22 = (var_1_23 - var_1_24);
	} else {
		if (! (var_1_45 || var_1_93)) {
			if ((min (var_1_5 , (var_1_19 * var_1_5))) != var_1_8) {
				var_1_22 = var_1_23;
			} else {
				var_1_22 = 0;
			}
		} else {
			var_1_22 = 8;
		}
	}


	// From: Req39Batch178Amount500
	unsigned long int stepLocal_38 = var_1_103 * (var_1_90 * var_1_83);
	signed long int stepLocal_37 = ~ var_1_53;
	signed short int stepLocal_36 = var_1_27;
	if ((min (var_1_54 , (var_1_15 << last_1_var_1_91))) <= stepLocal_37) {
		if (stepLocal_38 == (var_1_57 + var_1_28)) {
			var_1_91 = (min (((var_1_56 + last_1_var_1_91) + (var_1_37 - var_1_13)) , var_1_61));
		} else {
			if (stepLocal_36 > var_1_90) {
				var_1_91 = var_1_83;
			} else {
				if (! ((var_1_75 - var_1_87) >= var_1_76)) {
					var_1_91 = var_1_54;
				} else {
					var_1_91 = var_1_39;
				}
			}
		}
	} else {
		var_1_91 = var_1_61;
	}


	// From: Req26Batch178Amount500
	if (var_1_96) {
		var_1_67 = ((3330749466u - var_1_39) - var_1_51);
	} else {
		var_1_67 = (min (var_1_61 , (min (var_1_39 , var_1_99))));
	}


	// From: Req18Batch178Amount500
	signed long int stepLocal_11 = var_1_39 - 25;
	if (stepLocal_11 < var_1_67) {
		var_1_48 = var_1_19;
	} else {
		var_1_48 = var_1_30;
	}


	// From: Req34Batch178Amount500
	unsigned long int stepLocal_30 = var_1_71 * var_1_15;
	unsigned long int stepLocal_29 = (- var_1_51) + var_1_16;
	unsigned long int stepLocal_28 = var_1_67 + var_1_1;
	signed char stepLocal_27 = var_1_24;
	unsigned char stepLocal_26 = var_1_96;
	if (var_1_13 <= stepLocal_28) {
		if (var_1_71 >= stepLocal_30) {
			if (stepLocal_26 && (var_1_45 && (var_1_19 <= 100.5))) {
				if (stepLocal_29 >= var_1_71) {
					var_1_84 = (var_1_18 - 1.0000000000000004E15f);
				} else {
					var_1_84 = (var_1_30 + 2.8f);
				}
			} else {
				var_1_84 = (var_1_63 - var_1_75);
			}
		} else {
			var_1_84 = 0.25f;
		}
	} else {
		if (var_1_58 == stepLocal_27) {
			var_1_84 = ((var_1_75 - var_1_30) - var_1_77);
		} else {
			var_1_84 = ((var_1_78 + (var_1_76 + var_1_77)) - var_1_75);
		}
	}


	// From: Req35Batch178Amount500
	unsigned long int stepLocal_34 = var_1_52;
	signed long int stepLocal_33 = abs (abs (var_1_16));
	signed char stepLocal_32 = var_1_82;
	signed long int stepLocal_31 = abs (var_1_15);
	if (stepLocal_33 >= var_1_90) {
		if ((max ((abs (var_1_67)) , var_1_42)) <= stepLocal_31) {
			var_1_85 = (abs (var_1_78));
		} else {
			var_1_85 = (min ((min (var_1_20 , var_1_64)) , (var_1_78 + var_1_30)));
		}
	} else {
		if (var_1_37 >= stepLocal_34) {
			var_1_85 = (min (((min (var_1_64 , var_1_19)) + var_1_9) , (min (var_1_66 , (var_1_75 - var_1_63)))));
		} else {
			if (stepLocal_32 > (var_1_32 * (var_1_61 / var_1_34))) {
				var_1_85 = ((var_1_75 - (var_1_87 - var_1_76)) - ((8.285115217280248E18f - var_1_77) - var_1_30));
			}
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1073741823);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 127);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 127);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -1);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= 16382);
	assume_abort_if_not(var_1_28 <= 32766);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -128);
	assume_abort_if_not(var_1_33 <= 127);
	assume_abort_if_not(var_1_33 != 0);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -128);
	assume_abort_if_not(var_1_34 <= 127);
	assume_abort_if_not(var_1_34 != 0);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 16383);
	assume_abort_if_not(var_1_37 <= 32766);
	var_1_39 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 32766);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -1);
	assume_abort_if_not(var_1_43 <= 2147483646);
	var_1_44 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_44 >= 1073741823);
	assume_abort_if_not(var_1_44 <= 2147483646);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= -32768);
	assume_abort_if_not(var_1_50 <= 32767);
	assume_abort_if_not(var_1_50 != 0);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 1073741823);
	assume_abort_if_not(var_1_51 <= 2147483647);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 2147483647);
	assume_abort_if_not(var_1_52 <= 4294967294);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 126);
	assume_abort_if_not(var_1_54 != 127);
	var_1_57 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_57 >= 16382);
	assume_abort_if_not(var_1_57 <= 32766);
	var_1_58 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_58 >= 8191);
	assume_abort_if_not(var_1_58 <= 16383);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 63);
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= 4611686.018427383000e+12F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854766000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= -230584.3009213691400e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691400e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= -230584.3009213691400e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691400e+12F && var_1_65 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 4611686.018427383000e+12F && var_1_66 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854766000e+12F && var_1_69 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_72 >= 2147483647);
	assume_abort_if_not(var_1_72 <= 4294967295);
	var_1_75 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_75 >= 6917529.027641074000e+12F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 9223372.036854766000e+12F && var_1_75 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_76 >= 0.0F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 2305843.009213691400e+12F && var_1_76 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_77 >= 0.0F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 2305843.009213691400e+12F && var_1_77 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_78 >= 0.0F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427383000e+12F && var_1_78 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 63);
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 63);
	var_1_87 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_87 >= 2305843.009213691400e+12F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 4611686.018427383000e+12F && var_1_87 >= 1.0e-20F ));
	var_1_104 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_104 >= 0);
	assume_abort_if_not(var_1_104 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_103 = var_1_103;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_56 < last_1_var_1_91) ? (var_1_1 == ((signed long int) (max (-32 , (last_1_var_1_91 + (max (last_1_var_1_56 , var_1_4))))))) : 1) && ((var_1_6 || var_1_7) ? (var_1_5 == ((double) var_1_8)) : (var_1_5 == ((double) (max ((5.4 + var_1_9) , var_1_8)))))) && (((var_1_79 + (abs (var_1_89))) < var_1_49) ? (var_1_10 == ((unsigned char) ((min (var_1_13 , var_1_14)) - 5))) : (var_1_10 == ((unsigned char) (min ((var_1_15 + var_1_16) , var_1_13)))))) && ((var_1_102 <= ((- var_1_4) / var_1_13)) ? (var_1_17 == ((double) (max ((var_1_18 - 3.8) , ((max (var_1_9 , var_1_19)) + var_1_20))))) : 1)) && ((var_1_42 <= var_1_73) ? (var_1_21 == ((signed long int) (var_1_14 - var_1_73))) : (var_1_21 == ((signed long int) (abs (var_1_73)))))) && ((var_1_4 > var_1_55) ? (var_1_22 == ((signed char) (var_1_23 - var_1_24))) : ((! (var_1_45 || var_1_93)) ? (((min (var_1_5 , (var_1_19 * var_1_5))) != var_1_8) ? (var_1_22 == ((signed char) var_1_23)) : (var_1_22 == ((signed char) 0))) : (var_1_22 == ((signed char) 8))))) && ((! var_1_45) ? (var_1_25 == ((unsigned char) (max (var_1_13 , var_1_16)))) : (var_1_25 == ((unsigned char) (max (var_1_13 , var_1_15)))))) && ((var_1_103 > var_1_42) ? (var_1_26 == ((signed long int) (var_1_23 + var_1_15))) : 1)) && (((var_1_17 * var_1_18) >= var_1_20) ? (((! 0) && (var_1_101 <= var_1_14)) ? (var_1_27 == ((signed short int) ((var_1_28 - var_1_101) - var_1_24))) : 1) : (var_1_27 == ((signed short int) (max ((min (var_1_14 , var_1_1)) , var_1_56)))))) && (var_1_29 == ((double) (var_1_19 + (var_1_30 - var_1_31))))) && (((~ var_1_24) < (var_1_14 + (var_1_23 * 200))) ? (var_1_93 ? (var_1_32 == ((signed short int) ((max ((var_1_28 - var_1_15) , var_1_16)) - var_1_13))) : ((((~ var_1_24) / (max (var_1_33 , var_1_34))) >= (max ((var_1_101 + -10) , var_1_28))) ? (((var_1_16 + (min (var_1_33 , var_1_4))) > (var_1_15 - var_1_103)) ? (var_1_32 == ((signed short int) (var_1_103 + var_1_101))) : 1) : (var_1_93 ? ((var_1_89 >= var_1_53) ? ((var_1_31 < var_1_29) ? (var_1_32 == ((signed short int) (min ((var_1_24 - var_1_13) , (max (var_1_23 , -32)))))) : (var_1_32 == ((signed short int) ((var_1_13 - var_1_101) + (var_1_14 - var_1_16))))) : ((var_1_89 >= var_1_33) ? (var_1_32 == ((signed short int) (var_1_23 - 8))) : (var_1_32 == ((signed short int) (((10000 - var_1_103) + (var_1_16 + var_1_14)) - var_1_24))))) : (var_1_32 == ((signed short int) var_1_103))))) : (var_1_45 ? (var_1_32 == ((signed short int) (min (var_1_101 , (var_1_14 + var_1_15))))) : (var_1_45 ? (var_1_32 == ((signed short int) (var_1_101 - (var_1_37 - 100)))) : (var_1_32 == ((signed short int) var_1_37)))))) && (var_1_45 ? (var_1_38 == ((signed short int) (max ((var_1_15 + var_1_34) , var_1_24)))) : (var_1_38 == ((signed short int) (var_1_13 - (abs (var_1_89 - var_1_39))))))) && ((var_1_31 <= var_1_5) ? (var_1_40 == ((signed char) var_1_23)) : 1)) && ((var_1_6 || var_1_36) ? ((var_1_6 || var_1_7) ? (var_1_41 == ((signed short int) (var_1_23 - var_1_39))) : 1) : (var_1_41 == ((signed short int) (var_1_39 - var_1_14))))) && ((((min (var_1_13 , var_1_90)) * var_1_103) <= 50) ? (var_1_42 == ((signed long int) (var_1_73 + var_1_49))) : (var_1_42 == ((signed long int) (max ((var_1_43 - (var_1_44 - var_1_13)) , var_1_103)))))) && (var_1_45 == ((unsigned char) ((var_1_21 <= (var_1_79 / var_1_14)) || var_1_46)))) && (var_1_47 == ((unsigned char) (min (var_1_15 , var_1_16))))) && (((var_1_39 - 25) < var_1_67) ? (var_1_48 == ((float) var_1_19)) : (var_1_48 == ((float) var_1_30)))) && ((var_1_103 > (var_1_59 / var_1_50)) ? (var_1_49 == ((unsigned long int) (var_1_16 + ((min (var_1_44 , var_1_51)) - (max (var_1_15 , var_1_13)))))) : (var_1_49 == ((unsigned long int) (var_1_52 - (256u + var_1_14)))))) && ((var_1_16 > ((var_1_49 + last_1_var_1_53) / (var_1_13 - var_1_54))) ? (var_1_53 == ((signed long int) (min ((var_1_71 + var_1_33) , (min (var_1_23 , (var_1_39 - var_1_44))))))) : 1)) && ((! ((var_1_50 & var_1_54) > var_1_102)) ? (var_1_55 == ((signed short int) (var_1_81 + var_1_32))) : (var_1_55 == ((signed short int) var_1_24)))) && (((var_1_37 - var_1_15) >= (abs (var_1_24))) ? (var_1_56 == ((signed short int) ((var_1_14 + (var_1_54 + var_1_24)) - (var_1_37 - last_1_var_1_26)))) : ((last_1_var_1_1 >= var_1_14) ? (var_1_56 == ((signed short int) ((var_1_57 - (var_1_58 - last_1_var_1_1)) - var_1_37))) : (var_1_56 == ((signed short int) ((var_1_58 + var_1_54) - var_1_57)))))) && (((max (0u , var_1_54)) < 10u) ? ((! (! var_1_96)) ? (var_1_59 == ((signed long int) (max (var_1_43 , var_1_23)))) : 1) : (var_1_59 == ((signed long int) ((var_1_56 + var_1_14) + 4))))) && ((var_1_45 && (var_1_102 >= var_1_52)) ? (var_1_60 == ((signed char) (var_1_24 - var_1_54))) : (var_1_60 == ((signed char) (var_1_24 - (64 - var_1_61)))))) && (var_1_45 ? (((- var_1_18) < 255.9) ? (var_1_62 == ((float) (min (((var_1_63 - var_1_30) - var_1_18) , (var_1_19 + (var_1_64 + 0.2f)))))) : 1) : (var_1_62 == ((float) ((var_1_64 + var_1_65) + ((max (var_1_31 , var_1_30)) - var_1_66)))))) && (var_1_96 ? (var_1_67 == ((unsigned long int) ((3330749466u - var_1_39) - var_1_51))) : (var_1_67 == ((unsigned long int) (min (var_1_61 , (min (var_1_39 , var_1_99)))))))) && ((((max (0 , var_1_1)) | (var_1_51 * var_1_58)) > var_1_89) ? (((var_1_59 % var_1_14) >= var_1_10) ? (var_1_68 == ((double) var_1_19)) : (var_1_68 == ((double) (min (var_1_20 , (var_1_69 - (var_1_66 + var_1_31))))))) : 1)) && ((var_1_49 > var_1_21) ? (var_1_70 == ((unsigned short int) ((var_1_13 + (max (var_1_16 , var_1_24))) + (abs (var_1_58))))) : (var_1_70 == ((unsigned short int) ((var_1_37 - var_1_16) + (last_1_var_1_70 + (abs (var_1_15)))))))) && (((var_1_103 / var_1_54) > ((var_1_52 + var_1_79) * (var_1_72 - var_1_24))) ? (var_1_71 == ((unsigned long int) (var_1_14 + var_1_61))) : (var_1_71 == ((unsigned long int) (var_1_100 + (max (var_1_37 , var_1_16))))))) && (last_1_var_1_93 ? ((last_1_var_1_53 >= (var_1_15 - var_1_58)) ? (var_1_73 == ((signed short int) (min ((abs (last_1_var_1_90)) , var_1_58)))) : (var_1_73 == ((signed short int) (abs (var_1_54 - (var_1_37 - var_1_58)))))) : 1)) && ((var_1_51 > var_1_61) ? (var_1_74 == ((double) ((min (var_1_18 , var_1_69)) - ((var_1_76 + var_1_77) + (max (var_1_78 , var_1_30)))))) : ((var_1_66 < (max (var_1_68 , last_1_var_1_74))) ? (var_1_74 == ((double) (max ((var_1_75 - var_1_77) , var_1_63)))) : 1))) && (((var_1_73 > (var_1_39 & var_1_33)) && (var_1_78 < (var_1_76 - var_1_63))) ? (var_1_96 ? (var_1_79 == ((unsigned long int) (var_1_58 + var_1_13))) : (var_1_79 == ((unsigned long int) ((var_1_58 + var_1_13) + (var_1_51 - var_1_39))))) : (var_1_79 == ((unsigned long int) (var_1_52 - var_1_21))))) && ((var_1_52 > var_1_13) ? ((((var_1_61 + var_1_82) - (4 + var_1_83)) < var_1_103) ? (var_1_81 == ((signed short int) (var_1_23 - var_1_54))) : (var_1_81 == ((signed short int) (max ((var_1_103 + var_1_13) , var_1_16))))) : (var_1_81 == ((signed short int) ((max (var_1_58 , (max (last_1_var_1_81 , var_1_54)))) - 128))))) && ((var_1_13 <= (var_1_67 + var_1_1)) ? ((var_1_71 >= (var_1_71 * var_1_15)) ? ((var_1_96 && (var_1_45 && (var_1_19 <= 100.5))) ? ((((- var_1_51) + var_1_16) >= var_1_71) ? (var_1_84 == ((float) (var_1_18 - 1.0000000000000004E15f))) : (var_1_84 == ((float) (var_1_30 + 2.8f)))) : (var_1_84 == ((float) (var_1_63 - var_1_75)))) : (var_1_84 == ((float) 0.25f))) : ((var_1_58 == var_1_24) ? (var_1_84 == ((float) ((var_1_75 - var_1_30) - var_1_77))) : (var_1_84 == ((float) ((var_1_78 + (var_1_76 + var_1_77)) - var_1_75)))))) && (((abs (abs (var_1_16))) >= var_1_90) ? (((max ((abs (var_1_67)) , var_1_42)) <= (abs (var_1_15))) ? (var_1_85 == ((float) (abs (var_1_78)))) : (var_1_85 == ((float) (min ((min (var_1_20 , var_1_64)) , (var_1_78 + var_1_30)))))) : ((var_1_37 >= var_1_52) ? (var_1_85 == ((float) (min (((min (var_1_64 , var_1_19)) + var_1_9) , (min (var_1_66 , (var_1_75 - var_1_63))))))) : ((var_1_82 > (var_1_32 * (var_1_61 / var_1_34))) ? (var_1_85 == ((float) ((var_1_75 - (var_1_87 - var_1_76)) - ((8.285115217280248E18f - var_1_77) - var_1_30)))) : 1)))) && ((((var_1_14 - var_1_16) * (var_1_51 | var_1_90)) > var_1_13) ? (var_1_88 == ((unsigned short int) (var_1_102 + (var_1_82 + var_1_16)))) : (var_1_88 == ((unsigned short int) (abs (var_1_57)))))) && (var_1_96 ? (var_1_89 == ((unsigned long int) (abs (var_1_88)))) : (var_1_89 == ((unsigned long int) (min ((max (var_1_83 , var_1_82)) , var_1_24)))))) && ((var_1_57 > last_1_var_1_70) ? (((last_1_var_1_26 * 8) < ((last_1_var_1_1 + var_1_34) % (max (var_1_28 , var_1_13)))) ? (var_1_90 == ((unsigned long int) 64u)) : (var_1_90 == ((unsigned long int) last_1_var_1_70))) : (var_1_90 == ((unsigned long int) (max ((max (var_1_13 , var_1_54)) , last_1_var_1_67)))))) && (((min (var_1_54 , (var_1_15 << last_1_var_1_91))) <= (~ var_1_53)) ? (((var_1_103 * (var_1_90 * var_1_83)) == (var_1_57 + var_1_28)) ? (var_1_91 == ((unsigned short int) (min (((var_1_56 + last_1_var_1_91) + (var_1_37 - var_1_13)) , var_1_61)))) : ((var_1_27 > var_1_90) ? (var_1_91 == ((unsigned short int) var_1_83)) : ((! ((var_1_75 - var_1_87) >= var_1_76)) ? (var_1_91 == ((unsigned short int) var_1_54)) : (var_1_91 == ((unsigned short int) var_1_39))))) : (var_1_91 == ((unsigned short int) var_1_61)))) && (var_1_96 ? (var_1_93 == ((unsigned char) 0)) : (var_1_93 == ((unsigned char) 1)))) && (var_1_94 == ((signed char) var_1_82))) && (var_1_93 ? (var_1_95 == ((float) 4.6f)) : (var_1_95 == ((float) var_1_75)))) && (var_1_96 == ((unsigned char) var_1_46))) && (var_1_97 == ((float) var_1_76))) && (var_1_96 ? (var_1_98 == ((unsigned char) var_1_14)) : (var_1_98 == ((unsigned char) 1)))) && (var_1_96 ? (var_1_99 == ((signed short int) var_1_53)) : 1)) && (var_1_93 ? (var_1_100 == ((signed short int) var_1_39)) : (var_1_100 == ((signed short int) var_1_37)))) && (var_1_101 == ((unsigned char) var_1_16))) && (var_1_46 ? (var_1_102 == ((unsigned short int) var_1_90)) : (var_1_102 == ((unsigned short int) var_1_61)))) && (last_1_var_1_45 ? ((last_1_var_1_55 > last_1_var_1_103) ? (var_1_103 == ((unsigned long int) (min (var_1_104 , var_1_39)))) : ((last_1_var_1_68 > last_1_var_1_74) ? (var_1_103 == ((unsigned long int) (min (last_1_var_1_91 , var_1_104)))) : 1)) : (var_1_103 == ((unsigned long int) var_1_39)))
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
