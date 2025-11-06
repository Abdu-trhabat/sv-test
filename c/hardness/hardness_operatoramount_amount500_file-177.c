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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch177Amount500.c", 13, "reach_error"); }
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
float var_1_1 = 5.1;
float var_1_4 = 99999999.7;
float var_1_5 = 0.0;
float var_1_6 = 15.6;
float var_1_7 = 100.75;
float var_1_8 = 64.25;
float var_1_9 = 3.2;
signed char var_1_10 = 8;
signed char var_1_11 = -4;
signed char var_1_12 = 2;
float var_1_13 = 8.875;
signed short int var_1_14 = 256;
float var_1_15 = 4.5;
float var_1_16 = 0.7;
float var_1_17 = 255.8;
unsigned short int var_1_18 = 256;
unsigned short int var_1_20 = 61451;
unsigned short int var_1_21 = 2;
unsigned char var_1_22 = 4;
unsigned char var_1_23 = 8;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 2;
unsigned short int var_1_27 = 1;
unsigned long int var_1_29 = 200;
float var_1_30 = 8.25;
signed char var_1_32 = 2;
signed char var_1_33 = 16;
signed char var_1_34 = 8;
signed char var_1_35 = 2;
signed char var_1_36 = 32;
signed char var_1_37 = 32;
unsigned short int var_1_38 = 10;
unsigned short int var_1_39 = 57787;
signed char var_1_40 = -5;
double var_1_41 = 24.35;
unsigned long int var_1_42 = 8;
unsigned long int var_1_43 = 2868907176;
signed short int var_1_44 = -256;
signed short int var_1_45 = 8;
float var_1_46 = 4.75;
signed short int var_1_47 = 128;
signed short int var_1_48 = -25;
signed short int var_1_49 = 21996;
double var_1_50 = 199.5;
double var_1_52 = 500.2;
unsigned short int var_1_53 = 8;
unsigned short int var_1_54 = 64;
unsigned char var_1_55 = 0;
signed long int var_1_56 = 2036616242;
signed long int var_1_57 = 8;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 0;
unsigned char var_1_60 = 0;
unsigned long int var_1_61 = 8;
unsigned short int var_1_62 = 8;
double var_1_63 = 49.375;
double var_1_65 = 128.9;
unsigned char var_1_66 = 1;
unsigned char var_1_68 = 0;
unsigned char var_1_69 = 0;
signed short int var_1_70 = -64;
unsigned long int var_1_71 = 32;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 0;
signed short int var_1_74 = 32;
signed short int var_1_76 = 32117;
unsigned char var_1_77 = 16;
unsigned char var_1_78 = 64;
unsigned char var_1_79 = 64;
unsigned char var_1_80 = 64;
unsigned char var_1_81 = 100;
unsigned char var_1_82 = 5;
signed char var_1_83 = -10;
signed char var_1_84 = 64;
signed char var_1_85 = 0;
signed long int var_1_86 = 8;
signed long int var_1_87 = 1806166313;
float var_1_88 = 32.75;
signed char var_1_89 = -32;
unsigned char var_1_90 = 128;
signed char var_1_91 = 4;
signed short int var_1_92 = 50;
signed short int var_1_93 = 64;
float var_1_94 = 255.5;
signed long int var_1_95 = 2;
signed short int var_1_96 = -128;
unsigned char var_1_97 = 0;
unsigned char var_1_98 = 1;
float var_1_99 = 63.6;
signed short int var_1_100 = -1;
signed long int var_1_101 = -10000000;
unsigned char var_1_102 = 0;
unsigned char var_1_103 = 128;
signed short int var_1_104 = -128;
unsigned short int var_1_106 = 10;
unsigned char var_1_107 = 2;
double var_1_108 = 1.2;
unsigned short int var_1_109 = 256;
unsigned long int var_1_110 = 64;
signed short int var_1_111 = -4;
unsigned char var_1_112 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_18 = 256;
unsigned short int last_1_var_1_27 = 1;
unsigned long int last_1_var_1_42 = 8;
signed short int last_1_var_1_44 = -256;
double last_1_var_1_50 = 199.5;
double last_1_var_1_52 = 500.2;
unsigned long int last_1_var_1_61 = 8;
signed short int last_1_var_1_70 = -64;
unsigned long int last_1_var_1_71 = 32;
unsigned char last_1_var_1_72 = 0;
signed short int last_1_var_1_74 = 32;
signed long int last_1_var_1_95 = 2;
signed short int last_1_var_1_96 = -128;
unsigned char last_1_var_1_97 = 0;
unsigned char last_1_var_1_102 = 0;
unsigned long int last_1_var_1_110 = 64;
signed short int last_1_var_1_111 = -4;
unsigned char last_1_var_1_112 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req26Batch177Amount500
	unsigned char stepLocal_6 = last_1_var_1_72;
	if (stepLocal_6 && last_1_var_1_112) {
		if (((4.6 - 24.2) + 1.0000000000000375E13) > last_1_var_1_50) {
			var_1_71 = (var_1_43 - (abs (last_1_var_1_71)));
		} else {
			var_1_71 = var_1_56;
		}
	}


	// From: Req39Batch177Amount500
	unsigned long int stepLocal_18 = last_1_var_1_61;
	if (var_1_59) {
		if ((last_1_var_1_71 + var_1_34) <= stepLocal_18) {
			if (last_1_var_1_112) {
				var_1_95 = (max (var_1_26 , last_1_var_1_95));
			} else {
				var_1_95 = (var_1_84 + (max (last_1_var_1_74 , (var_1_35 - var_1_34))));
			}
		} else {
			var_1_95 = last_1_var_1_111;
		}
	}


	// From: Req12Batch177Amount500
	if (var_1_6 <= 10.4f) {
		var_1_41 = (var_1_6 + (abs (var_1_5)));
	} else {
		if (var_1_9 <= var_1_4) {
			if ((var_1_12 + var_1_33) < last_1_var_1_61) {
				var_1_41 = ((var_1_16 + var_1_17) + (var_1_15 - var_1_7));
			}
		}
	}


	// From: Req16Batch177Amount500
	if (var_1_41 > var_1_6) {
		var_1_48 = (var_1_23 - var_1_35);
	} else {
		var_1_48 = (max (var_1_11 , ((var_1_49 - 2) - var_1_36)));
	}


	// From: Req24Batch177Amount500
	var_1_66 = ((var_1_41 <= var_1_46) && ((var_1_60 || var_1_68) || var_1_69));


	// From: Req20Batch177Amount500
	if ((~ var_1_54) < ((var_1_56 - var_1_26) - (max (var_1_57 , last_1_var_1_71)))) {
		var_1_55 = ((last_1_var_1_72 && last_1_var_1_102) || var_1_58);
	} else {
		if (var_1_15 != last_1_var_1_52) {
			if (! var_1_58) {
				var_1_55 = (! (var_1_58 && var_1_59));
			} else {
				var_1_55 = (var_1_60 || (! var_1_59));
			}
		} else {
			var_1_55 = (last_1_var_1_102 || (var_1_58 && (! var_1_60)));
		}
	}


	// From: Req33Batch177Amount500
	if (var_1_55) {
		var_1_86 = (var_1_84 - 25);
	} else {
		var_1_86 = (var_1_26 - (var_1_87 - 4));
	}


	// From: Req13Batch177Amount500
	if (last_1_var_1_50 >= var_1_15) {
		var_1_42 = (var_1_43 - var_1_35);
	} else {
		var_1_42 = ((min (100000000u , last_1_var_1_42)) + last_1_var_1_70);
	}


	// From: Req23Batch177Amount500
	if ((var_1_39 - var_1_23) != var_1_42) {
		if ((min (var_1_36 , var_1_57)) >= (var_1_12 * (min (var_1_24 , -32)))) {
			var_1_63 = (var_1_65 - var_1_6);
		}
	} else {
		var_1_63 = (var_1_17 + var_1_9);
	}


	// From: Req10Batch177Amount500
	signed char stepLocal_3 = var_1_35;
	if (stepLocal_3 > (abs (var_1_36))) {
		var_1_38 = ((max ((var_1_39 - var_1_24) , var_1_20)) - var_1_21);
	} else {
		if (var_1_17 != var_1_9) {
			var_1_38 = ((max (var_1_37 , var_1_26)) + var_1_24);
		} else {
			var_1_38 = ((var_1_35 + var_1_26) + var_1_24);
		}
	}


	// From: Req18Batch177Amount500
	if ((var_1_26 / var_1_25) > var_1_21) {
		var_1_52 = (var_1_8 + (var_1_7 - var_1_5));
	}


	// From: Req22Batch177Amount500
	if (var_1_43 >= var_1_56) {
		if ((var_1_23 + var_1_86) != ((min (var_1_36 , var_1_21)) * 128)) {
			var_1_62 = (max (var_1_36 , var_1_23));
		} else {
			var_1_62 = (max ((min (var_1_54 , var_1_24)) , (max ((max (var_1_25 , var_1_21)) , var_1_37))));
		}
	} else {
		var_1_62 = var_1_38;
	}


	// From: Req29Batch177Amount500
	unsigned char stepLocal_15 = var_1_58;
	if (var_1_66) {
		if (var_1_73 || stepLocal_15) {
			var_1_77 = (max ((var_1_37 + 10) , var_1_23));
		} else {
			var_1_77 = (min (var_1_25 , (max ((200 - var_1_34) , (abs (var_1_37))))));
		}
	} else {
		var_1_77 = (min (var_1_35 , var_1_25));
	}


	// From: Req30Batch177Amount500
	if (var_1_66) {
		var_1_78 = (max ((min ((max (var_1_23 , var_1_34)) , var_1_25)) , var_1_36));
	} else {
		var_1_78 = ((var_1_79 + var_1_80) - ((var_1_81 - var_1_82) - var_1_37));
	}


	// From: Req31Batch177Amount500
	signed long int stepLocal_16 = var_1_49 + var_1_82;
	if (var_1_71 == stepLocal_16) {
		var_1_83 = (var_1_33 - (var_1_84 - (abs (var_1_36))));
	} else {
		var_1_83 = (8 - 10);
	}


	// From: Req36Batch177Amount500
	signed char stepLocal_17 = var_1_12;
	if (stepLocal_17 >= (var_1_80 >> var_1_91)) {
		var_1_90 = (var_1_84 + var_1_35);
	} else {
		if (var_1_69) {
			var_1_90 = (var_1_37 + var_1_80);
		} else {
			if (var_1_58) {
				var_1_90 = (var_1_25 - (abs (4 + var_1_34)));
			} else {
				var_1_90 = (abs (var_1_25));
			}
		}
	}


	// From: Req38Batch177Amount500
	if (var_1_5 >= -0.5f) {
		var_1_94 = (var_1_8 - var_1_15);
	} else {
		var_1_94 = var_1_7;
	}


	// From: Req40Batch177Amount500
	unsigned char stepLocal_20 = var_1_24;
	signed long int stepLocal_19 = var_1_56;
	if (stepLocal_20 < var_1_77) {
		if (stepLocal_19 > (max ((last_1_var_1_96 / var_1_25) , var_1_11))) {
			var_1_96 = (var_1_33 - var_1_34);
		}
	} else {
		var_1_96 = (var_1_71 + var_1_33);
	}


	// From: Req41Batch177Amount500
	if (last_1_var_1_97) {
		var_1_97 = var_1_59;
	} else {
		var_1_97 = var_1_98;
	}


	// From: Req42Batch177Amount500
	if (var_1_59) {
		var_1_99 = var_1_15;
	} else {
		var_1_99 = var_1_5;
	}


	// From: Req45Batch177Amount500
	var_1_102 = var_1_58;


	// From: Req46Batch177Amount500
	var_1_103 = var_1_81;


	// From: Req47Batch177Amount500
	if (var_1_97) {
		var_1_104 = -8;
	}


	// From: Req48Batch177Amount500
	var_1_106 = var_1_38;


	// From: Req49Batch177Amount500
	var_1_107 = var_1_34;


	// From: Req51Batch177Amount500
	var_1_109 = var_1_84;


	// From: Req52Batch177Amount500
	if (var_1_98) {
		var_1_110 = last_1_var_1_110;
	}


	// From: Req53Batch177Amount500
	if (var_1_59) {
		var_1_111 = var_1_37;
	} else {
		var_1_111 = var_1_12;
	}


	// From: Req7Batch177Amount500
	if (var_1_23 >= var_1_48) {
		var_1_29 = (max ((min (var_1_26 , (var_1_42 + var_1_95))) , 5u));
	}


	// From: Req27Batch177Amount500
	unsigned char stepLocal_8 = var_1_59;
	unsigned long int stepLocal_7 = var_1_42;
	if (stepLocal_8 || var_1_102) {
		if ((var_1_43 - var_1_109) > stepLocal_7) {
			var_1_72 = 0;
		} else {
			var_1_72 = (var_1_60 && (var_1_55 && var_1_68));
		}
	} else {
		var_1_72 = ((var_1_69 || (var_1_68 && var_1_73)) || var_1_60);
	}


	// From: Req50Batch177Amount500
	if (var_1_72) {
		var_1_108 = var_1_15;
	}


	// From: Req19Batch177Amount500
	unsigned char stepLocal_4 = var_1_55;
	if (var_1_97 && stepLocal_4) {
		var_1_53 = (abs (var_1_54));
	}


	// From: Req3Batch177Amount500
	if (var_1_29 >= (var_1_14 - 4)) {
		var_1_13 = ((max (var_1_8 , var_1_7)) - (max (var_1_6 , (var_1_5 + var_1_15))));
	} else {
		var_1_13 = ((var_1_5 - (var_1_16 + var_1_17)) + var_1_6);
	}


	// From: Req11Batch177Amount500
	if (var_1_97) {
		var_1_40 = (min ((var_1_35 - 5) , (var_1_34 - var_1_36)));
	} else {
		var_1_40 = ((max (var_1_37 , (var_1_34 + 8))) - 4);
	}


	// From: Req25Batch177Amount500
	if (var_1_97) {
		var_1_70 = (var_1_12 + (max (var_1_36 , (var_1_35 - var_1_107))));
	} else {
		var_1_70 = (max (var_1_36 , var_1_24));
	}


	// From: Req43Batch177Amount500
	if (var_1_102) {
		var_1_100 = var_1_35;
	} else {
		var_1_100 = var_1_84;
	}


	// From: Req44Batch177Amount500
	if (var_1_97) {
		var_1_101 = var_1_24;
	} else {
		var_1_101 = var_1_111;
	}


	// From: Req54Batch177Amount500
	unsigned char stepLocal_22 = var_1_26;
	unsigned long int stepLocal_21 = var_1_29 + (var_1_71 * var_1_56);
	if (stepLocal_21 == (var_1_95 * var_1_100)) {
		var_1_112 = var_1_69;
	} else {
		if (var_1_98) {
			if (stepLocal_22 < var_1_36) {
				var_1_112 = var_1_59;
			}
		} else {
			var_1_112 = var_1_69;
		}
	}


	// From: Req34Batch177Amount500
	if (var_1_66) {
		var_1_88 = (min (var_1_4 , (var_1_9 + var_1_6)));
	} else {
		if (var_1_12 <= var_1_111) {
			if ((var_1_33 ^ var_1_21) >= (var_1_53 / var_1_80)) {
				var_1_88 = (var_1_8 + 64.5f);
			} else {
				var_1_88 = ((min (var_1_65 , var_1_8)) - (var_1_16 + 8.25f));
			}
		} else {
			var_1_88 = (min (var_1_16 , (min (49.5f , (var_1_5 - var_1_17)))));
		}
	}


	// From: Req32Batch177Amount500
	if ((- (var_1_88 / var_1_46)) > var_1_108) {
		var_1_85 = var_1_82;
	} else {
		var_1_85 = (var_1_12 + var_1_37);
	}


	// From: Req9Batch177Amount500
	signed char stepLocal_2 = var_1_11;
	if ((- var_1_86) > stepLocal_2) {
		var_1_32 = (max (var_1_11 , (var_1_33 - (64 - var_1_34))));
	} else {
		if (var_1_112) {
			var_1_32 = (var_1_34 - var_1_35);
		} else {
			var_1_32 = ((min (var_1_35 , var_1_33)) - ((var_1_36 + var_1_37) - var_1_34));
		}
	}


	// From: Req35Batch177Amount500
	if (var_1_53 <= var_1_56) {
		if (var_1_101 > var_1_42) {
			var_1_89 = var_1_34;
		} else {
			var_1_89 = (max (var_1_82 , (16 + var_1_12)));
		}
	}


	// From: Req37Batch177Amount500
	var_1_92 = ((var_1_93 + var_1_100) - (var_1_24 + var_1_90));


	// From: Req8Batch177Amount500
	if ((max (var_1_88 , var_1_8)) > var_1_9) {
		var_1_30 = ((min (var_1_7 , (max (var_1_9 , var_1_17)))) + 8.125f);
	} else {
		if (var_1_41 < var_1_15) {
			if (var_1_11 != var_1_42) {
				if ((var_1_20 <= var_1_24) && (var_1_110 == var_1_95)) {
					var_1_30 = (var_1_17 - var_1_8);
				} else {
					var_1_30 = var_1_6;
				}
			}
		} else {
			var_1_30 = var_1_9;
		}
	}


	// From: Req28Batch177Amount500
	signed char stepLocal_14 = var_1_85;
	unsigned char stepLocal_13 = var_1_63 < (abs (var_1_16));
	signed char stepLocal_12 = var_1_36;
	unsigned char stepLocal_11 = var_1_68;
	unsigned long int stepLocal_10 = var_1_110;
	unsigned char stepLocal_9 = var_1_69;
	if (var_1_20 < stepLocal_10) {
		if (stepLocal_14 < var_1_33) {
			var_1_74 = (min ((var_1_23 + 2) , var_1_26));
		} else {
			if (stepLocal_9 && var_1_97) {
				if (var_1_60) {
					var_1_74 = (((min (var_1_25 , var_1_35)) - var_1_37) + var_1_36);
				} else {
					var_1_74 = (var_1_24 - (max (var_1_34 , (var_1_76 - var_1_35))));
				}
			} else {
				var_1_74 = (((var_1_35 + var_1_23) + var_1_34) - var_1_36);
			}
		}
	} else {
		if (stepLocal_11 && var_1_97) {
			if (var_1_37 >= stepLocal_12) {
				if (stepLocal_13 && var_1_58) {
					var_1_74 = (((10000 - var_1_53) + 256) - var_1_34);
				}
			} else {
				if (var_1_5 < var_1_108) {
					var_1_74 = var_1_76;
				}
			}
		}
	}


	// From: Req15Batch177Amount500
	if ((var_1_16 - var_1_5) < (var_1_8 / var_1_46)) {
		var_1_45 = ((var_1_34 - var_1_25) + (min ((var_1_12 + var_1_47) , (max (var_1_74 , var_1_26)))));
	}


	// From: Req1Batch177Amount500
	if (var_1_74 >= var_1_45) {
		var_1_1 = (abs (var_1_4));
	} else {
		var_1_1 = (((min (var_1_5 , var_1_6)) - var_1_7) + (max ((7.25f - var_1_8) , var_1_9)));
	}


	// From: Req14Batch177Amount500
	if (! var_1_102) {
		var_1_44 = (max (last_1_var_1_44 , (max ((min (var_1_92 , var_1_34)) , (max (var_1_23 , 256))))));
	}


	// From: Req6Batch177Amount500
	if (var_1_55) {
		if ((var_1_45 * var_1_12) <= ((var_1_11 / var_1_20) * var_1_26)) {
			if (! var_1_55) {
				var_1_27 = (var_1_24 + (var_1_45 + 10));
			} else {
				if ((var_1_106 * var_1_24) >= var_1_20) {
					var_1_27 = var_1_25;
				} else {
					var_1_27 = (max (((max (34092 , 34601)) - var_1_26) , var_1_23));
				}
			}
		}
	} else {
		if (var_1_24 > last_1_var_1_27) {
			var_1_27 = var_1_45;
		} else {
			if (var_1_55) {
				if (var_1_45 < var_1_20) {
					if (var_1_16 != var_1_15) {
						var_1_27 = var_1_25;
					} else {
						if (-64 >= var_1_45) {
							var_1_27 = var_1_24;
						} else {
							var_1_27 = var_1_21;
						}
					}
				}
			} else {
				var_1_27 = var_1_45;
			}
		}
	}


	// From: Req4Batch177Amount500
	if (var_1_102 && (last_1_var_1_18 > var_1_11)) {
		var_1_18 = (var_1_20 - (abs (var_1_21)));
	} else {
		if ((min (var_1_12 , var_1_27)) > ((abs (last_1_var_1_18)) - var_1_20)) {
			if (var_1_7 > var_1_30) {
				var_1_18 = 16;
			} else {
				var_1_18 = var_1_21;
			}
		}
	}


	// From: Req5Batch177Amount500
	unsigned short int stepLocal_1 = var_1_38;
	if (stepLocal_1 == var_1_18) {
		var_1_22 = (min (var_1_23 , ((min (var_1_24 , var_1_25)) - var_1_26)));
	}


	// From: Req21Batch177Amount500
	signed long int stepLocal_5 = var_1_34 - 2;
	if (stepLocal_5 <= var_1_57) {
		var_1_61 = var_1_18;
	} else {
		var_1_61 = ((min (var_1_43 , 3956912108u)) - var_1_20);
	}


	// From: Req17Batch177Amount500
	if (var_1_108 >= var_1_46) {
		if (var_1_42 > (min (var_1_86 , var_1_61))) {
			var_1_50 = (min (var_1_8 , var_1_9));
		} else {
			var_1_50 = ((var_1_8 - var_1_15) + var_1_7);
		}
	}


	// From: Req2Batch177Amount500
	unsigned short int stepLocal_0 = var_1_38;
	if (var_1_6 >= var_1_4) {
		if (var_1_61 < stepLocal_0) {
			var_1_10 = (var_1_11 + (abs (var_1_12)));
		} else {
			var_1_10 = var_1_12;
		}
	} else {
		var_1_10 = (abs (var_1_11));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -1);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65534);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 127);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -1);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 31);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 32);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 49150);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 2147483647);
	assume_abort_if_not(var_1_43 <= 4294967294);
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	assume_abort_if_not(var_1_46 != 0.0F);
	var_1_47 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_47 >= -8191);
	assume_abort_if_not(var_1_47 <= 8191);
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= 16382);
	assume_abort_if_not(var_1_49 <= 32766);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 65534);
	var_1_56 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_56 >= 1073741823);
	assume_abort_if_not(var_1_56 <= 2147483647);
	var_1_57 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 2147483647);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 1);
	assume_abort_if_not(var_1_58 <= 1);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 1);
	assume_abort_if_not(var_1_59 <= 1);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 0);
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854766000e+12F && var_1_65 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 0);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 0);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 0);
	var_1_76 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_76 >= 16383);
	assume_abort_if_not(var_1_76 <= 32766);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 63);
	assume_abort_if_not(var_1_79 <= 127);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 64);
	assume_abort_if_not(var_1_80 <= 127);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 95);
	assume_abort_if_not(var_1_81 <= 127);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 32);
	var_1_84 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_84 >= 63);
	assume_abort_if_not(var_1_84 <= 126);
	var_1_87 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_87 >= 1073741823);
	assume_abort_if_not(var_1_87 <= 2147483646);
	var_1_91 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_91 >= 1);
	assume_abort_if_not(var_1_91 <= 7);
	var_1_93 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_93 >= 0);
	assume_abort_if_not(var_1_93 <= 16383);
	var_1_98 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_98 >= 1);
	assume_abort_if_not(var_1_98 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_110 = var_1_110;
	last_1_var_1_111 = var_1_111;
	last_1_var_1_112 = var_1_112;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_74 >= var_1_45) ? (var_1_1 == ((float) (abs (var_1_4)))) : (var_1_1 == ((float) (((min (var_1_5 , var_1_6)) - var_1_7) + (max ((7.25f - var_1_8) , var_1_9)))))) && ((var_1_6 >= var_1_4) ? ((var_1_61 < var_1_38) ? (var_1_10 == ((signed char) (var_1_11 + (abs (var_1_12))))) : (var_1_10 == ((signed char) var_1_12))) : (var_1_10 == ((signed char) (abs (var_1_11)))))) && ((var_1_29 >= (var_1_14 - 4)) ? (var_1_13 == ((float) ((max (var_1_8 , var_1_7)) - (max (var_1_6 , (var_1_5 + var_1_15)))))) : (var_1_13 == ((float) ((var_1_5 - (var_1_16 + var_1_17)) + var_1_6))))) && ((var_1_102 && (last_1_var_1_18 > var_1_11)) ? (var_1_18 == ((unsigned short int) (var_1_20 - (abs (var_1_21))))) : (((min (var_1_12 , var_1_27)) > ((abs (last_1_var_1_18)) - var_1_20)) ? ((var_1_7 > var_1_30) ? (var_1_18 == ((unsigned short int) 16)) : (var_1_18 == ((unsigned short int) var_1_21))) : 1))) && ((var_1_38 == var_1_18) ? (var_1_22 == ((unsigned char) (min (var_1_23 , ((min (var_1_24 , var_1_25)) - var_1_26))))) : 1)) && (var_1_55 ? (((var_1_45 * var_1_12) <= ((var_1_11 / var_1_20) * var_1_26)) ? ((! var_1_55) ? (var_1_27 == ((unsigned short int) (var_1_24 + (var_1_45 + 10)))) : (((var_1_106 * var_1_24) >= var_1_20) ? (var_1_27 == ((unsigned short int) var_1_25)) : (var_1_27 == ((unsigned short int) (max (((max (34092 , 34601)) - var_1_26) , var_1_23)))))) : 1) : ((var_1_24 > last_1_var_1_27) ? (var_1_27 == ((unsigned short int) var_1_45)) : (var_1_55 ? ((var_1_45 < var_1_20) ? ((var_1_16 != var_1_15) ? (var_1_27 == ((unsigned short int) var_1_25)) : ((-64 >= var_1_45) ? (var_1_27 == ((unsigned short int) var_1_24)) : (var_1_27 == ((unsigned short int) var_1_21)))) : 1) : (var_1_27 == ((unsigned short int) var_1_45)))))) && ((var_1_23 >= var_1_48) ? (var_1_29 == ((unsigned long int) (max ((min (var_1_26 , (var_1_42 + var_1_95))) , 5u)))) : 1)) && (((max (var_1_88 , var_1_8)) > var_1_9) ? (var_1_30 == ((float) ((min (var_1_7 , (max (var_1_9 , var_1_17)))) + 8.125f))) : ((var_1_41 < var_1_15) ? ((var_1_11 != var_1_42) ? (((var_1_20 <= var_1_24) && (var_1_110 == var_1_95)) ? (var_1_30 == ((float) (var_1_17 - var_1_8))) : (var_1_30 == ((float) var_1_6))) : 1) : (var_1_30 == ((float) var_1_9))))) && (((- var_1_86) > var_1_11) ? (var_1_32 == ((signed char) (max (var_1_11 , (var_1_33 - (64 - var_1_34)))))) : (var_1_112 ? (var_1_32 == ((signed char) (var_1_34 - var_1_35))) : (var_1_32 == ((signed char) ((min (var_1_35 , var_1_33)) - ((var_1_36 + var_1_37) - var_1_34))))))) && ((var_1_35 > (abs (var_1_36))) ? (var_1_38 == ((unsigned short int) ((max ((var_1_39 - var_1_24) , var_1_20)) - var_1_21))) : ((var_1_17 != var_1_9) ? (var_1_38 == ((unsigned short int) ((max (var_1_37 , var_1_26)) + var_1_24))) : (var_1_38 == ((unsigned short int) ((var_1_35 + var_1_26) + var_1_24)))))) && (var_1_97 ? (var_1_40 == ((signed char) (min ((var_1_35 - 5) , (var_1_34 - var_1_36))))) : (var_1_40 == ((signed char) ((max (var_1_37 , (var_1_34 + 8))) - 4))))) && ((var_1_6 <= 10.4f) ? (var_1_41 == ((double) (var_1_6 + (abs (var_1_5))))) : ((var_1_9 <= var_1_4) ? (((var_1_12 + var_1_33) < last_1_var_1_61) ? (var_1_41 == ((double) ((var_1_16 + var_1_17) + (var_1_15 - var_1_7)))) : 1) : 1))) && ((last_1_var_1_50 >= var_1_15) ? (var_1_42 == ((unsigned long int) (var_1_43 - var_1_35))) : (var_1_42 == ((unsigned long int) ((min (100000000u , last_1_var_1_42)) + last_1_var_1_70))))) && ((! var_1_102) ? (var_1_44 == ((signed short int) (max (last_1_var_1_44 , (max ((min (var_1_92 , var_1_34)) , (max (var_1_23 , 256)))))))) : 1)) && (((var_1_16 - var_1_5) < (var_1_8 / var_1_46)) ? (var_1_45 == ((signed short int) ((var_1_34 - var_1_25) + (min ((var_1_12 + var_1_47) , (max (var_1_74 , var_1_26))))))) : 1)) && ((var_1_41 > var_1_6) ? (var_1_48 == ((signed short int) (var_1_23 - var_1_35))) : (var_1_48 == ((signed short int) (max (var_1_11 , ((var_1_49 - 2) - var_1_36))))))) && ((var_1_108 >= var_1_46) ? ((var_1_42 > (min (var_1_86 , var_1_61))) ? (var_1_50 == ((double) (min (var_1_8 , var_1_9)))) : (var_1_50 == ((double) ((var_1_8 - var_1_15) + var_1_7)))) : 1)) && (((var_1_26 / var_1_25) > var_1_21) ? (var_1_52 == ((double) (var_1_8 + (var_1_7 - var_1_5)))) : 1)) && ((var_1_97 && var_1_55) ? (var_1_53 == ((unsigned short int) (abs (var_1_54)))) : 1)) && (((~ var_1_54) < ((var_1_56 - var_1_26) - (max (var_1_57 , last_1_var_1_71)))) ? (var_1_55 == ((unsigned char) ((last_1_var_1_72 && last_1_var_1_102) || var_1_58))) : ((var_1_15 != last_1_var_1_52) ? ((! var_1_58) ? (var_1_55 == ((unsigned char) (! (var_1_58 && var_1_59)))) : (var_1_55 == ((unsigned char) (var_1_60 || (! var_1_59))))) : (var_1_55 == ((unsigned char) (last_1_var_1_102 || (var_1_58 && (! var_1_60)))))))) && (((var_1_34 - 2) <= var_1_57) ? (var_1_61 == ((unsigned long int) var_1_18)) : (var_1_61 == ((unsigned long int) ((min (var_1_43 , 3956912108u)) - var_1_20))))) && ((var_1_43 >= var_1_56) ? (((var_1_23 + var_1_86) != ((min (var_1_36 , var_1_21)) * 128)) ? (var_1_62 == ((unsigned short int) (max (var_1_36 , var_1_23)))) : (var_1_62 == ((unsigned short int) (max ((min (var_1_54 , var_1_24)) , (max ((max (var_1_25 , var_1_21)) , var_1_37))))))) : (var_1_62 == ((unsigned short int) var_1_38)))) && (((var_1_39 - var_1_23) != var_1_42) ? (((min (var_1_36 , var_1_57)) >= (var_1_12 * (min (var_1_24 , -32)))) ? (var_1_63 == ((double) (var_1_65 - var_1_6))) : 1) : (var_1_63 == ((double) (var_1_17 + var_1_9))))) && (var_1_66 == ((unsigned char) ((var_1_41 <= var_1_46) && ((var_1_60 || var_1_68) || var_1_69))))) && (var_1_97 ? (var_1_70 == ((signed short int) (var_1_12 + (max (var_1_36 , (var_1_35 - var_1_107)))))) : (var_1_70 == ((signed short int) (max (var_1_36 , var_1_24)))))) && ((last_1_var_1_72 && last_1_var_1_112) ? ((((4.6 - 24.2) + 1.0000000000000375E13) > last_1_var_1_50) ? (var_1_71 == ((unsigned long int) (var_1_43 - (abs (last_1_var_1_71))))) : (var_1_71 == ((unsigned long int) var_1_56))) : 1)) && ((var_1_59 || var_1_102) ? (((var_1_43 - var_1_109) > var_1_42) ? (var_1_72 == ((unsigned char) 0)) : (var_1_72 == ((unsigned char) (var_1_60 && (var_1_55 && var_1_68))))) : (var_1_72 == ((unsigned char) ((var_1_69 || (var_1_68 && var_1_73)) || var_1_60))))) && ((var_1_20 < var_1_110) ? ((var_1_85 < var_1_33) ? (var_1_74 == ((signed short int) (min ((var_1_23 + 2) , var_1_26)))) : ((var_1_69 && var_1_97) ? (var_1_60 ? (var_1_74 == ((signed short int) (((min (var_1_25 , var_1_35)) - var_1_37) + var_1_36))) : (var_1_74 == ((signed short int) (var_1_24 - (max (var_1_34 , (var_1_76 - var_1_35))))))) : (var_1_74 == ((signed short int) (((var_1_35 + var_1_23) + var_1_34) - var_1_36))))) : ((var_1_68 && var_1_97) ? ((var_1_37 >= var_1_36) ? (((var_1_63 < (abs (var_1_16))) && var_1_58) ? (var_1_74 == ((signed short int) (((10000 - var_1_53) + 256) - var_1_34))) : 1) : ((var_1_5 < var_1_108) ? (var_1_74 == ((signed short int) var_1_76)) : 1)) : 1))) && (var_1_66 ? ((var_1_73 || var_1_58) ? (var_1_77 == ((unsigned char) (max ((var_1_37 + 10) , var_1_23)))) : (var_1_77 == ((unsigned char) (min (var_1_25 , (max ((200 - var_1_34) , (abs (var_1_37))))))))) : (var_1_77 == ((unsigned char) (min (var_1_35 , var_1_25)))))) && (var_1_66 ? (var_1_78 == ((unsigned char) (max ((min ((max (var_1_23 , var_1_34)) , var_1_25)) , var_1_36)))) : (var_1_78 == ((unsigned char) ((var_1_79 + var_1_80) - ((var_1_81 - var_1_82) - var_1_37)))))) && ((var_1_71 == (var_1_49 + var_1_82)) ? (var_1_83 == ((signed char) (var_1_33 - (var_1_84 - (abs (var_1_36)))))) : (var_1_83 == ((signed char) (8 - 10))))) && (((- (var_1_88 / var_1_46)) > var_1_108) ? (var_1_85 == ((signed char) var_1_82)) : (var_1_85 == ((signed char) (var_1_12 + var_1_37))))) && (var_1_55 ? (var_1_86 == ((signed long int) (var_1_84 - 25))) : (var_1_86 == ((signed long int) (var_1_26 - (var_1_87 - 4)))))) && (var_1_66 ? (var_1_88 == ((float) (min (var_1_4 , (var_1_9 + var_1_6))))) : ((var_1_12 <= var_1_111) ? (((var_1_33 ^ var_1_21) >= (var_1_53 / var_1_80)) ? (var_1_88 == ((float) (var_1_8 + 64.5f))) : (var_1_88 == ((float) ((min (var_1_65 , var_1_8)) - (var_1_16 + 8.25f))))) : (var_1_88 == ((float) (min (var_1_16 , (min (49.5f , (var_1_5 - var_1_17)))))))))) && ((var_1_53 <= var_1_56) ? ((var_1_101 > var_1_42) ? (var_1_89 == ((signed char) var_1_34)) : (var_1_89 == ((signed char) (max (var_1_82 , (16 + var_1_12)))))) : 1)) && ((var_1_12 >= (var_1_80 >> var_1_91)) ? (var_1_90 == ((unsigned char) (var_1_84 + var_1_35))) : (var_1_69 ? (var_1_90 == ((unsigned char) (var_1_37 + var_1_80))) : (var_1_58 ? (var_1_90 == ((unsigned char) (var_1_25 - (abs (4 + var_1_34))))) : (var_1_90 == ((unsigned char) (abs (var_1_25)))))))) && (var_1_92 == ((signed short int) ((var_1_93 + var_1_100) - (var_1_24 + var_1_90))))) && ((var_1_5 >= -0.5f) ? (var_1_94 == ((float) (var_1_8 - var_1_15))) : (var_1_94 == ((float) var_1_7)))) && (var_1_59 ? (((last_1_var_1_71 + var_1_34) <= last_1_var_1_61) ? (last_1_var_1_112 ? (var_1_95 == ((signed long int) (max (var_1_26 , last_1_var_1_95)))) : (var_1_95 == ((signed long int) (var_1_84 + (max (last_1_var_1_74 , (var_1_35 - var_1_34))))))) : (var_1_95 == ((signed long int) last_1_var_1_111))) : 1)) && ((var_1_24 < var_1_77) ? ((var_1_56 > (max ((last_1_var_1_96 / var_1_25) , var_1_11))) ? (var_1_96 == ((signed short int) (var_1_33 - var_1_34))) : 1) : (var_1_96 == ((signed short int) (var_1_71 + var_1_33))))) && (last_1_var_1_97 ? (var_1_97 == ((unsigned char) var_1_59)) : (var_1_97 == ((unsigned char) var_1_98)))) && (var_1_59 ? (var_1_99 == ((float) var_1_15)) : (var_1_99 == ((float) var_1_5)))) && (var_1_102 ? (var_1_100 == ((signed short int) var_1_35)) : (var_1_100 == ((signed short int) var_1_84)))) && (var_1_97 ? (var_1_101 == ((signed long int) var_1_24)) : (var_1_101 == ((signed long int) var_1_111)))) && (var_1_102 == ((unsigned char) var_1_58))) && (var_1_103 == ((unsigned char) var_1_81))) && (var_1_97 ? (var_1_104 == ((signed short int) -8)) : 1)) && (var_1_106 == ((unsigned short int) var_1_38))) && (var_1_107 == ((unsigned char) var_1_34))) && (var_1_72 ? (var_1_108 == ((double) var_1_15)) : 1)) && (var_1_109 == ((unsigned short int) var_1_84))) && (var_1_98 ? (var_1_110 == ((unsigned long int) last_1_var_1_110)) : 1)) && (var_1_59 ? (var_1_111 == ((signed short int) var_1_37)) : (var_1_111 == ((signed short int) var_1_12)))) && (((var_1_29 + (var_1_71 * var_1_56)) == (var_1_95 * var_1_100)) ? (var_1_112 == ((unsigned char) var_1_69)) : (var_1_98 ? ((var_1_26 < var_1_36) ? (var_1_112 == ((unsigned char) var_1_59)) : 1) : (var_1_112 == ((unsigned char) var_1_69))))
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
