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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch162Amount500.c", 13, "reach_error"); }
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
signed long int var_1_1 = 32;
signed long int var_1_5 = -1;
signed long int var_1_6 = 16;
signed long int var_1_7 = -4;
signed long int var_1_8 = 128;
signed long int var_1_9 = 50;
signed long int var_1_10 = 10;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
double var_1_16 = 16.25;
double var_1_17 = 25.25;
double var_1_18 = 7.5;
unsigned long int var_1_19 = 100000;
unsigned long int var_1_20 = 2820786972;
unsigned long int var_1_21 = 1160467580;
signed long int var_1_23 = -256;
signed char var_1_24 = 25;
signed char var_1_25 = 2;
signed char var_1_26 = 8;
unsigned long int var_1_27 = 16;
signed short int var_1_28 = -2;
unsigned char var_1_29 = 1;
float var_1_30 = 31.125;
unsigned long int var_1_31 = 2808512878;
float var_1_32 = 0.0;
float var_1_33 = 32.5;
float var_1_34 = 2.5;
float var_1_35 = 0.0;
float var_1_36 = 0.0;
signed long int var_1_37 = 2;
float var_1_38 = 0.25;
float var_1_39 = 0.0;
float var_1_40 = 256.875;
float var_1_41 = 32.72;
signed long int var_1_42 = 32;
signed long int var_1_43 = 10;
signed long int var_1_44 = 10;
unsigned long int var_1_45 = 25;
double var_1_46 = 5.4;
double var_1_47 = 64.1;
signed long int var_1_48 = -4;
signed long int var_1_49 = 2;
double var_1_50 = 63.7;
unsigned long int var_1_51 = 128;
unsigned short int var_1_52 = 1;
unsigned short int var_1_53 = 128;
unsigned short int var_1_54 = 0;
unsigned short int var_1_55 = 54451;
unsigned short int var_1_56 = 20129;
unsigned long int var_1_57 = 32;
unsigned long int var_1_58 = 4067887398;
unsigned long int var_1_59 = 1000000000;
unsigned long int var_1_60 = 3612723059;
unsigned char var_1_61 = 50;
unsigned char var_1_62 = 128;
float var_1_63 = -0.5;
signed char var_1_64 = 1;
signed char var_1_65 = 32;
signed char var_1_66 = 8;
signed char var_1_67 = 2;
signed char var_1_68 = 32;
signed char var_1_69 = 1;
signed short int var_1_70 = 5;
unsigned long int var_1_71 = 10;
float var_1_72 = 4.5;
float var_1_73 = 4.75;
signed long int var_1_74 = -16;
signed char var_1_75 = -32;
signed short int var_1_76 = 10;
signed short int var_1_77 = 1;
signed short int var_1_78 = -32;
signed short int var_1_79 = 128;
signed char var_1_80 = -10;
signed char var_1_81 = 1;
unsigned char var_1_82 = 0;
float var_1_83 = 127.5;
signed long int var_1_84 = -64;
signed char var_1_85 = -64;
double var_1_86 = 0.6;
float var_1_87 = -0.3;
unsigned char var_1_88 = 0;
unsigned short int var_1_89 = 5;
unsigned char var_1_90 = 32;
signed long int var_1_91 = -1;
unsigned char var_1_92 = 2;
signed long int var_1_93 = -8;
signed long int var_1_94 = 32;
unsigned char var_1_95 = 1;
float var_1_96 = 128.1;
unsigned char var_1_97 = 0;
unsigned short int var_1_98 = 1;
unsigned char var_1_99 = 1;
double var_1_100 = 10.9;
unsigned char var_1_101 = 1;
unsigned char var_1_102 = 0;
signed char var_1_103 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_11 = 0;
signed long int last_1_var_1_84 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch162Amount500
	if (var_1_10 < (last_1_var_1_84 + (abs (var_1_9)))) {
		if ((abs (var_1_8)) >= var_1_10) {
			var_1_11 = (last_1_var_1_11 && (! (var_1_12 && var_1_13)));
		} else {
			var_1_11 = ((var_1_14 || var_1_15) || (! var_1_12));
		}
	} else {
		var_1_11 = var_1_12;
	}


	// From: Req25Batch162Amount500
	if (var_1_11) {
		var_1_71 = (var_1_58 - var_1_10);
	}


	// From: Req6Batch162Amount500
	if (! (-128 >= (var_1_8 % var_1_26))) {
		var_1_27 = ((var_1_9 + var_1_8) + var_1_21);
	}


	// From: Req10Batch162Amount500
	var_1_37 = ((min ((var_1_10 + var_1_24) , var_1_25)) - var_1_8);


	// From: Req12Batch162Amount500
	signed long int stepLocal_7 = var_1_10 / (max (25 , var_1_26));
	if (var_1_14) {
		var_1_42 = (var_1_9 + var_1_25);
	} else {
		if (stepLocal_7 >= (var_1_24 + var_1_43)) {
			var_1_42 = var_1_26;
		}
	}


	// From: Req13Batch162Amount500
	if (var_1_27 <= var_1_5) {
		var_1_44 = (var_1_26 + (var_1_8 - var_1_25));
	} else {
		var_1_44 = (var_1_8 + (abs (var_1_24)));
	}


	// From: Req14Batch162Amount500
	var_1_45 = var_1_8;


	// From: Req18Batch162Amount500
	unsigned long int stepLocal_9 = var_1_20;
	if ((50u % (var_1_21 + var_1_51)) >= stepLocal_9) {
		var_1_50 = (max (var_1_34 , (min (var_1_18 , var_1_47))));
	}


	// From: Req19Batch162Amount500
	if (! var_1_14) {
		var_1_52 = (abs (var_1_24));
	} else {
		if (var_1_11) {
			var_1_52 = (min ((max (var_1_24 , (abs (var_1_25)))) , (var_1_53 + var_1_54)));
		} else {
			var_1_52 = ((max (var_1_55 , 64590)) - (max ((var_1_56 - var_1_24) , 2)));
		}
	}


	// From: Req22Batch162Amount500
	var_1_63 = (min (var_1_34 , var_1_36));


	// From: Req27Batch162Amount500
	var_1_74 = (abs (min ((var_1_69 - var_1_67) , var_1_10)));


	// From: Req28Batch162Amount500
	unsigned long int stepLocal_18 = (~ var_1_25) / var_1_51;
	if (var_1_44 >= stepLocal_18) {
		if (var_1_11) {
			var_1_75 = ((var_1_66 + (var_1_69 - var_1_67)) + var_1_68);
		} else {
			var_1_75 = (var_1_69 + (var_1_67 + var_1_66));
		}
	}


	// From: Req32Batch162Amount500
	unsigned long int stepLocal_21 = var_1_27;
	if (stepLocal_21 >= (1u + var_1_25)) {
		var_1_80 = (max ((max (var_1_68 , (max (var_1_66 , var_1_65)))) , (var_1_67 - (var_1_69 + var_1_81))));
	}


	// From: Req36Batch162Amount500
	var_1_86 = (var_1_32 - var_1_33);


	// From: Req37Batch162Amount500
	if (! var_1_15) {
		if (((var_1_60 / var_1_62) << 5) != var_1_45) {
			var_1_87 = (var_1_18 - (max (var_1_34 , var_1_33)));
		}
	}


	// From: Req38Batch162Amount500
	unsigned char stepLocal_22 = var_1_62;
	if (stepLocal_22 > (var_1_74 / var_1_26)) {
		var_1_88 = var_1_15;
	} else {
		if (! (var_1_74 >= -64)) {
			var_1_88 = (((! var_1_12) || (! var_1_13)) || var_1_15);
		} else {
			var_1_88 = var_1_13;
		}
	}


	// From: Req40Batch162Amount500
	var_1_90 = 8;


	// From: Req41Batch162Amount500
	if (var_1_15) {
		var_1_91 = var_1_24;
	} else {
		var_1_91 = var_1_66;
	}


	// From: Req42Batch162Amount500
	var_1_92 = var_1_81;


	// From: Req44Batch162Amount500
	if (var_1_13) {
		var_1_94 = var_1_44;
	} else {
		var_1_94 = var_1_66;
	}


	// From: Req45Batch162Amount500
	if (var_1_15) {
		var_1_95 = var_1_14;
	}


	// From: Req46Batch162Amount500
	var_1_96 = var_1_32;


	// From: Req47Batch162Amount500
	if (var_1_88) {
		var_1_97 = var_1_15;
	}


	// From: Req49Batch162Amount500
	var_1_99 = var_1_15;


	// From: Req50Batch162Amount500
	if (var_1_12) {
		var_1_100 = var_1_18;
	} else {
		var_1_100 = var_1_73;
	}


	// From: Req51Batch162Amount500
	var_1_101 = (min (((10 + 5) + var_1_65) , (abs (var_1_66))));


	// From: Req17Batch162Amount500
	if ((var_1_18 + var_1_39) == (var_1_47 * var_1_33)) {
		if (var_1_15) {
			var_1_49 = ((min (25 , (max (var_1_24 , var_1_10)))) - (var_1_25 + var_1_8));
		} else {
			if (var_1_14) {
				if ((max (8.6 , var_1_18)) < var_1_86) {
					var_1_49 = (min (var_1_43 , var_1_25));
				}
			}
		}
	} else {
		var_1_49 = (min ((var_1_71 + var_1_24) , var_1_9));
	}


	// From: Req34Batch162Amount500
	if (var_1_40 >= (max ((var_1_32 + var_1_18) , var_1_100))) {
		if ((- (var_1_17 * var_1_41)) <= (var_1_39 * (var_1_86 + 256.25))) {
			var_1_84 = (abs (max (var_1_55 , (var_1_49 + var_1_45))));
		}
	} else {
		var_1_84 = var_1_58;
	}


	// From: Req1Batch162Amount500
	unsigned char stepLocal_0 = var_1_97;
	if (stepLocal_0 || (var_1_45 >= var_1_27)) {
		if (var_1_97) {
			var_1_1 = (var_1_5 - 256);
		} else {
			var_1_1 = (max (var_1_5 , var_1_6));
		}
	} else {
		var_1_1 = (var_1_7 + ((var_1_8 + var_1_9) - var_1_10));
	}


	// From: Req3Batch162Amount500
	if (((var_1_9 ^ 4) * var_1_27) > var_1_74) {
		var_1_16 = ((5.5 + var_1_17) + (abs (3.5 - var_1_18)));
	}


	// From: Req4Batch162Amount500
	unsigned long int stepLocal_1 = -256 * var_1_71;
	if (var_1_7 <= stepLocal_1) {
		if (var_1_95) {
			var_1_19 = (var_1_20 - (var_1_21 - var_1_8));
		} else {
			if (((var_1_18 + var_1_100) + var_1_17) < var_1_50) {
				var_1_19 = var_1_8;
			} else {
				var_1_19 = var_1_9;
			}
		}
	} else {
		var_1_19 = var_1_20;
	}


	// From: Req5Batch162Amount500
	unsigned long int stepLocal_3 = var_1_71;
	signed long int stepLocal_2 = var_1_9;
	if (var_1_27 > stepLocal_3) {
		if (((var_1_24 - var_1_25) / var_1_26) > stepLocal_2) {
			var_1_23 = (var_1_9 + (var_1_25 + var_1_26));
		} else {
			var_1_23 = (((min (var_1_8 , var_1_25)) - var_1_9) + (max (var_1_26 , var_1_7)));
		}
	} else {
		var_1_23 = (256 + var_1_26);
	}


	// From: Req7Batch162Amount500
	signed long int stepLocal_4 = var_1_8;
	if (var_1_86 >= (var_1_16 * var_1_17)) {
		if (stepLocal_4 < (max ((min (var_1_25 , var_1_9)) , var_1_24))) {
			var_1_28 = (var_1_24 + var_1_25);
		} else {
			var_1_28 = (var_1_25 + var_1_26);
		}
	} else {
		var_1_28 = (abs (var_1_24 - var_1_25));
	}


	// From: Req8Batch162Amount500
	if (var_1_50 == var_1_96) {
		var_1_29 = (((- 4.75f) > var_1_18) && (! var_1_12));
	} else {
		var_1_29 = (var_1_88 && ((var_1_26 <= var_1_45) && var_1_15));
	}


	// From: Req15Batch162Amount500
	if (var_1_99 || var_1_12) {
		var_1_46 = (abs (var_1_47));
	} else {
		if (var_1_6 > var_1_27) {
			var_1_46 = var_1_32;
		} else {
			if (var_1_49 <= var_1_6) {
				var_1_46 = (max (var_1_35 , var_1_39));
			} else {
				var_1_46 = (256.6 + var_1_41);
			}
		}
	}


	// From: Req20Batch162Amount500
	unsigned char stepLocal_12 = var_1_11;
	signed long int stepLocal_11 = -16;
	signed long int stepLocal_10 = -10000;
	if (var_1_24 <= stepLocal_11) {
		if (((abs (var_1_55)) << var_1_71) <= stepLocal_10) {
			if (! var_1_99) {
				var_1_57 = ((var_1_58 - (var_1_59 - var_1_56)) - var_1_24);
			} else {
				if (stepLocal_12 || var_1_12) {
					if (var_1_99) {
						var_1_57 = ((min ((var_1_21 - var_1_27) , var_1_25)) + (1356744897u - var_1_53));
					}
				} else {
					var_1_57 = (((max (var_1_58 , var_1_60)) - var_1_10) - (abs (var_1_55)));
				}
			}
		} else {
			var_1_57 = (var_1_43 + (var_1_21 - var_1_25));
		}
	} else {
		var_1_57 = ((var_1_43 + var_1_54) + var_1_9);
	}


	// From: Req24Batch162Amount500
	if ((var_1_66 - var_1_69) <= var_1_44) {
		if ((var_1_54 > var_1_58) || var_1_95) {
			var_1_70 = ((min (var_1_67 , var_1_68)) + var_1_62);
		}
	}


	// From: Req26Batch162Amount500
	unsigned char stepLocal_17 = var_1_14;
	if ((var_1_50 > var_1_46) || stepLocal_17) {
		if (var_1_29) {
			var_1_72 = (max (var_1_35 , (min (var_1_18 , (var_1_39 - var_1_73)))));
		} else {
			var_1_72 = var_1_32;
		}
	} else {
		var_1_72 = ((var_1_40 + var_1_33) + (abs (var_1_36)));
	}


	// From: Req29Batch162Amount500
	signed long int stepLocal_19 = var_1_1;
	if (stepLocal_19 < var_1_45) {
		var_1_76 = var_1_62;
	} else {
		var_1_76 = ((max ((var_1_77 + var_1_65) , var_1_67)) - var_1_66);
	}


	// From: Req31Batch162Amount500
	if (var_1_95) {
		if ((~ var_1_53) <= var_1_1) {
			var_1_79 = ((16 + (min (var_1_65 , 5))) - (var_1_69 + var_1_19));
		} else {
			var_1_79 = ((max (var_1_67 , (var_1_68 + var_1_25))) + (min (var_1_49 , -4)));
		}
	} else {
		if (var_1_27 < var_1_19) {
			var_1_79 = (abs ((min (var_1_19 , var_1_24)) - var_1_68));
		}
	}


	// From: Req35Batch162Amount500
	if (var_1_63 <= var_1_17) {
		var_1_85 = (var_1_81 + (var_1_68 - var_1_67));
	} else {
		if ((max ((max (var_1_73 , var_1_34)) , var_1_41)) > var_1_16) {
			if (var_1_15) {
				var_1_85 = (var_1_67 - var_1_68);
			} else {
				if (var_1_29) {
					var_1_85 = (var_1_67 + var_1_68);
				}
			}
		} else {
			var_1_85 = (min (50 , var_1_67));
		}
	}


	// From: Req48Batch162Amount500
	if (var_1_99) {
		var_1_98 = var_1_66;
	} else {
		var_1_98 = var_1_81;
	}


	// From: Req52Batch162Amount500
	if ((var_1_81 << (min (var_1_103 , 1))) > (var_1_84 ^ var_1_27)) {
		var_1_102 = var_1_62;
	}


	// From: Req16Batch162Amount500
	unsigned char stepLocal_8 = var_1_57 < var_1_25;
	if (stepLocal_8 || var_1_11) {
		var_1_48 = ((var_1_9 - (var_1_25 + var_1_24)) + -200);
	} else {
		var_1_48 = (((128 + var_1_25) + var_1_24) + var_1_10);
	}


	// From: Req21Batch162Amount500
	signed long int stepLocal_15 = var_1_48 / var_1_55;
	unsigned long int stepLocal_14 = var_1_45;
	unsigned long int stepLocal_13 = var_1_20;
	if (var_1_14) {
		if (var_1_86 != ((var_1_35 / var_1_36) * 9.999999999994E11f)) {
			if (stepLocal_13 > 64u) {
				if (var_1_27 > stepLocal_14) {
					if (var_1_98 != stepLocal_15) {
						var_1_61 = (max (var_1_25 , var_1_24));
					} else {
						var_1_61 = (var_1_62 - var_1_24);
					}
				}
			} else {
				var_1_61 = (var_1_62 - (abs (var_1_24)));
			}
		}
	}


	// From: Req23Batch162Amount500
	signed long int stepLocal_16 = - var_1_48;
	if (var_1_15) {
		if (stepLocal_16 >= var_1_58) {
			var_1_64 = ((var_1_65 + (50 - var_1_66)) - ((5 + var_1_67) + (var_1_68 - var_1_69)));
		} else {
			var_1_64 = (max (var_1_65 , (var_1_66 - var_1_68)));
		}
	}


	// From: Req30Batch162Amount500
	signed long int stepLocal_20 = var_1_7;
	if (! var_1_99) {
		if (stepLocal_20 < var_1_57) {
			var_1_78 = (var_1_79 + (var_1_67 + var_1_62));
		}
	}


	// From: Req33Batch162Amount500
	if ((min ((var_1_18 - var_1_33) , var_1_50)) >= var_1_73) {
		if ((max (var_1_36 , (var_1_83 - var_1_33))) > (1.375f + var_1_73)) {
			var_1_82 = (! (! var_1_15));
		} else {
			if (var_1_21 <= (min (var_1_71 , (var_1_98 + var_1_27)))) {
				if (var_1_7 > (var_1_74 * var_1_27)) {
					var_1_82 = var_1_12;
				} else {
					var_1_82 = (! var_1_14);
				}
			} else {
				var_1_82 = (var_1_15 || var_1_14);
			}
		}
	} else {
		var_1_82 = (var_1_14 || var_1_15);
	}


	// From: Req39Batch162Amount500
	if (var_1_82) {
		var_1_89 = 5;
	} else {
		var_1_89 = var_1_81;
	}


	// From: Req43Batch162Amount500
	if (var_1_88) {
		var_1_93 = var_1_78;
	} else {
		var_1_93 = var_1_6;
	}


	// From: Req9Batch162Amount500
	signed char stepLocal_6 = var_1_25;
	unsigned long int stepLocal_5 = var_1_45;
	if (stepLocal_5 >= ((min (var_1_20 , var_1_31)) - var_1_25)) {
		if (var_1_48 < stepLocal_6) {
			var_1_30 = ((var_1_32 - (var_1_33 + var_1_34)) - ((var_1_35 + var_1_36) - var_1_18));
		} else {
			var_1_30 = ((min (var_1_32 , var_1_35)) - (max (var_1_36 , var_1_34)));
		}
	} else {
		var_1_30 = (var_1_17 + var_1_35);
	}


	// From: Req11Batch162Amount500
	if ((var_1_71 > var_1_48) || var_1_12) {
		var_1_38 = ((max (var_1_18 , var_1_33)) + var_1_36);
	} else {
		if (var_1_14) {
			if (var_1_82) {
				if ((var_1_9 < (var_1_5 - 64)) && var_1_13) {
					var_1_38 = (max ((var_1_33 - var_1_32) , ((var_1_39 - var_1_36) - (max (var_1_35 , var_1_34)))));
				} else {
					var_1_38 = (((var_1_40 + var_1_41) + var_1_34) + 5.6f);
				}
			} else {
				var_1_38 = ((max (var_1_41 , var_1_34)) + (max (var_1_18 , var_1_40)));
			}
		} else {
			var_1_38 = (max (var_1_34 , var_1_17));
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483647);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -1073741823);
	assume_abort_if_not(var_1_7 <= 1073741823);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 536870912);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 536870911);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	assume_abort_if_not(var_1_26 != 0);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 2147483647);
	assume_abort_if_not(var_1_31 <= 4294967295);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 4611686.018427383000e+12F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691400e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 2305843.009213691400e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 2305843.009213691400e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 4611686.018427383000e+12F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -115292.1504606845700e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 1152921.504606845700e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -115292.1504606845700e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 1152921.504606845700e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 1073741824);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -922337.2036854766000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 2147483647);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 32767);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 32767);
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 32767);
	assume_abort_if_not(var_1_55 <= 65534);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 16383);
	assume_abort_if_not(var_1_56 <= 32767);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 3221225470);
	assume_abort_if_not(var_1_58 <= 4294967294);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 536870911);
	assume_abort_if_not(var_1_59 <= 1073741823);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 3221225470);
	assume_abort_if_not(var_1_60 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 127);
	assume_abort_if_not(var_1_62 <= 254);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 63);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 31);
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 31);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= 31);
	assume_abort_if_not(var_1_68 <= 63);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 31);
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854766000e+12F && var_1_73 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 16383);
	var_1_81 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 63);
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854776000e+12F && var_1_83 >= 1.0e-20F ));
	var_1_103 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_103 >= 0);
	assume_abort_if_not(var_1_103 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_84 = var_1_84;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_97 || (var_1_45 >= var_1_27)) ? (var_1_97 ? (var_1_1 == ((signed long int) (var_1_5 - 256))) : (var_1_1 == ((signed long int) (max (var_1_5 , var_1_6))))) : (var_1_1 == ((signed long int) (var_1_7 + ((var_1_8 + var_1_9) - var_1_10))))) && ((var_1_10 < (last_1_var_1_84 + (abs (var_1_9)))) ? (((abs (var_1_8)) >= var_1_10) ? (var_1_11 == ((unsigned char) (last_1_var_1_11 && (! (var_1_12 && var_1_13))))) : (var_1_11 == ((unsigned char) ((var_1_14 || var_1_15) || (! var_1_12))))) : (var_1_11 == ((unsigned char) var_1_12)))) && ((((var_1_9 ^ 4) * var_1_27) > var_1_74) ? (var_1_16 == ((double) ((5.5 + var_1_17) + (abs (3.5 - var_1_18))))) : 1)) && ((var_1_7 <= (-256 * var_1_71)) ? (var_1_95 ? (var_1_19 == ((unsigned long int) (var_1_20 - (var_1_21 - var_1_8)))) : ((((var_1_18 + var_1_100) + var_1_17) < var_1_50) ? (var_1_19 == ((unsigned long int) var_1_8)) : (var_1_19 == ((unsigned long int) var_1_9)))) : (var_1_19 == ((unsigned long int) var_1_20)))) && ((var_1_27 > var_1_71) ? ((((var_1_24 - var_1_25) / var_1_26) > var_1_9) ? (var_1_23 == ((signed long int) (var_1_9 + (var_1_25 + var_1_26)))) : (var_1_23 == ((signed long int) (((min (var_1_8 , var_1_25)) - var_1_9) + (max (var_1_26 , var_1_7)))))) : (var_1_23 == ((signed long int) (256 + var_1_26))))) && ((! (-128 >= (var_1_8 % var_1_26))) ? (var_1_27 == ((unsigned long int) ((var_1_9 + var_1_8) + var_1_21))) : 1)) && ((var_1_86 >= (var_1_16 * var_1_17)) ? ((var_1_8 < (max ((min (var_1_25 , var_1_9)) , var_1_24))) ? (var_1_28 == ((signed short int) (var_1_24 + var_1_25))) : (var_1_28 == ((signed short int) (var_1_25 + var_1_26)))) : (var_1_28 == ((signed short int) (abs (var_1_24 - var_1_25)))))) && ((var_1_50 == var_1_96) ? (var_1_29 == ((unsigned char) (((- 4.75f) > var_1_18) && (! var_1_12)))) : (var_1_29 == ((unsigned char) (var_1_88 && ((var_1_26 <= var_1_45) && var_1_15)))))) && ((var_1_45 >= ((min (var_1_20 , var_1_31)) - var_1_25)) ? ((var_1_48 < var_1_25) ? (var_1_30 == ((float) ((var_1_32 - (var_1_33 + var_1_34)) - ((var_1_35 + var_1_36) - var_1_18)))) : (var_1_30 == ((float) ((min (var_1_32 , var_1_35)) - (max (var_1_36 , var_1_34)))))) : (var_1_30 == ((float) (var_1_17 + var_1_35))))) && (var_1_37 == ((signed long int) ((min ((var_1_10 + var_1_24) , var_1_25)) - var_1_8)))) && (((var_1_71 > var_1_48) || var_1_12) ? (var_1_38 == ((float) ((max (var_1_18 , var_1_33)) + var_1_36))) : (var_1_14 ? (var_1_82 ? (((var_1_9 < (var_1_5 - 64)) && var_1_13) ? (var_1_38 == ((float) (max ((var_1_33 - var_1_32) , ((var_1_39 - var_1_36) - (max (var_1_35 , var_1_34))))))) : (var_1_38 == ((float) (((var_1_40 + var_1_41) + var_1_34) + 5.6f)))) : (var_1_38 == ((float) ((max (var_1_41 , var_1_34)) + (max (var_1_18 , var_1_40)))))) : (var_1_38 == ((float) (max (var_1_34 , var_1_17))))))) && (var_1_14 ? (var_1_42 == ((signed long int) (var_1_9 + var_1_25))) : (((var_1_10 / (max (25 , var_1_26))) >= (var_1_24 + var_1_43)) ? (var_1_42 == ((signed long int) var_1_26)) : 1))) && ((var_1_27 <= var_1_5) ? (var_1_44 == ((signed long int) (var_1_26 + (var_1_8 - var_1_25)))) : (var_1_44 == ((signed long int) (var_1_8 + (abs (var_1_24))))))) && (var_1_45 == ((unsigned long int) var_1_8))) && ((var_1_99 || var_1_12) ? (var_1_46 == ((double) (abs (var_1_47)))) : ((var_1_6 > var_1_27) ? (var_1_46 == ((double) var_1_32)) : ((var_1_49 <= var_1_6) ? (var_1_46 == ((double) (max (var_1_35 , var_1_39)))) : (var_1_46 == ((double) (256.6 + var_1_41))))))) && (((var_1_57 < var_1_25) || var_1_11) ? (var_1_48 == ((signed long int) ((var_1_9 - (var_1_25 + var_1_24)) + -200))) : (var_1_48 == ((signed long int) (((128 + var_1_25) + var_1_24) + var_1_10))))) && (((var_1_18 + var_1_39) == (var_1_47 * var_1_33)) ? (var_1_15 ? (var_1_49 == ((signed long int) ((min (25 , (max (var_1_24 , var_1_10)))) - (var_1_25 + var_1_8)))) : (var_1_14 ? (((max (8.6 , var_1_18)) < var_1_86) ? (var_1_49 == ((signed long int) (min (var_1_43 , var_1_25)))) : 1) : 1)) : (var_1_49 == ((signed long int) (min ((var_1_71 + var_1_24) , var_1_9)))))) && (((50u % (var_1_21 + var_1_51)) >= var_1_20) ? (var_1_50 == ((double) (max (var_1_34 , (min (var_1_18 , var_1_47)))))) : 1)) && ((! var_1_14) ? (var_1_52 == ((unsigned short int) (abs (var_1_24)))) : (var_1_11 ? (var_1_52 == ((unsigned short int) (min ((max (var_1_24 , (abs (var_1_25)))) , (var_1_53 + var_1_54))))) : (var_1_52 == ((unsigned short int) ((max (var_1_55 , 64590)) - (max ((var_1_56 - var_1_24) , 2)))))))) && ((var_1_24 <= -16) ? ((((abs (var_1_55)) << var_1_71) <= -10000) ? ((! var_1_99) ? (var_1_57 == ((unsigned long int) ((var_1_58 - (var_1_59 - var_1_56)) - var_1_24))) : ((var_1_11 || var_1_12) ? (var_1_99 ? (var_1_57 == ((unsigned long int) ((min ((var_1_21 - var_1_27) , var_1_25)) + (1356744897u - var_1_53)))) : 1) : (var_1_57 == ((unsigned long int) (((max (var_1_58 , var_1_60)) - var_1_10) - (abs (var_1_55))))))) : (var_1_57 == ((unsigned long int) (var_1_43 + (var_1_21 - var_1_25))))) : (var_1_57 == ((unsigned long int) ((var_1_43 + var_1_54) + var_1_9))))) && (var_1_14 ? ((var_1_86 != ((var_1_35 / var_1_36) * 9.999999999994E11f)) ? ((var_1_20 > 64u) ? ((var_1_27 > var_1_45) ? ((var_1_98 != (var_1_48 / var_1_55)) ? (var_1_61 == ((unsigned char) (max (var_1_25 , var_1_24)))) : (var_1_61 == ((unsigned char) (var_1_62 - var_1_24)))) : 1) : (var_1_61 == ((unsigned char) (var_1_62 - (abs (var_1_24)))))) : 1) : 1)) && (var_1_63 == ((float) (min (var_1_34 , var_1_36))))) && (var_1_15 ? (((- var_1_48) >= var_1_58) ? (var_1_64 == ((signed char) ((var_1_65 + (50 - var_1_66)) - ((5 + var_1_67) + (var_1_68 - var_1_69))))) : (var_1_64 == ((signed char) (max (var_1_65 , (var_1_66 - var_1_68)))))) : 1)) && (((var_1_66 - var_1_69) <= var_1_44) ? (((var_1_54 > var_1_58) || var_1_95) ? (var_1_70 == ((signed short int) ((min (var_1_67 , var_1_68)) + var_1_62))) : 1) : 1)) && (var_1_11 ? (var_1_71 == ((unsigned long int) (var_1_58 - var_1_10))) : 1)) && (((var_1_50 > var_1_46) || var_1_14) ? (var_1_29 ? (var_1_72 == ((float) (max (var_1_35 , (min (var_1_18 , (var_1_39 - var_1_73))))))) : (var_1_72 == ((float) var_1_32))) : (var_1_72 == ((float) ((var_1_40 + var_1_33) + (abs (var_1_36))))))) && (var_1_74 == ((signed long int) (abs (min ((var_1_69 - var_1_67) , var_1_10)))))) && ((var_1_44 >= ((~ var_1_25) / var_1_51)) ? (var_1_11 ? (var_1_75 == ((signed char) ((var_1_66 + (var_1_69 - var_1_67)) + var_1_68))) : (var_1_75 == ((signed char) (var_1_69 + (var_1_67 + var_1_66))))) : 1)) && ((var_1_1 < var_1_45) ? (var_1_76 == ((signed short int) var_1_62)) : (var_1_76 == ((signed short int) ((max ((var_1_77 + var_1_65) , var_1_67)) - var_1_66))))) && ((! var_1_99) ? ((var_1_7 < var_1_57) ? (var_1_78 == ((signed short int) (var_1_79 + (var_1_67 + var_1_62)))) : 1) : 1)) && (var_1_95 ? (((~ var_1_53) <= var_1_1) ? (var_1_79 == ((signed short int) ((16 + (min (var_1_65 , 5))) - (var_1_69 + var_1_19)))) : (var_1_79 == ((signed short int) ((max (var_1_67 , (var_1_68 + var_1_25))) + (min (var_1_49 , -4)))))) : ((var_1_27 < var_1_19) ? (var_1_79 == ((signed short int) (abs ((min (var_1_19 , var_1_24)) - var_1_68)))) : 1))) && ((var_1_27 >= (1u + var_1_25)) ? (var_1_80 == ((signed char) (max ((max (var_1_68 , (max (var_1_66 , var_1_65)))) , (var_1_67 - (var_1_69 + var_1_81)))))) : 1)) && (((min ((var_1_18 - var_1_33) , var_1_50)) >= var_1_73) ? (((max (var_1_36 , (var_1_83 - var_1_33))) > (1.375f + var_1_73)) ? (var_1_82 == ((unsigned char) (! (! var_1_15)))) : ((var_1_21 <= (min (var_1_71 , (var_1_98 + var_1_27)))) ? ((var_1_7 > (var_1_74 * var_1_27)) ? (var_1_82 == ((unsigned char) var_1_12)) : (var_1_82 == ((unsigned char) (! var_1_14)))) : (var_1_82 == ((unsigned char) (var_1_15 || var_1_14))))) : (var_1_82 == ((unsigned char) (var_1_14 || var_1_15))))) && ((var_1_40 >= (max ((var_1_32 + var_1_18) , var_1_100))) ? (((- (var_1_17 * var_1_41)) <= (var_1_39 * (var_1_86 + 256.25))) ? (var_1_84 == ((signed long int) (abs (max (var_1_55 , (var_1_49 + var_1_45)))))) : 1) : (var_1_84 == ((signed long int) var_1_58)))) && ((var_1_63 <= var_1_17) ? (var_1_85 == ((signed char) (var_1_81 + (var_1_68 - var_1_67)))) : (((max ((max (var_1_73 , var_1_34)) , var_1_41)) > var_1_16) ? (var_1_15 ? (var_1_85 == ((signed char) (var_1_67 - var_1_68))) : (var_1_29 ? (var_1_85 == ((signed char) (var_1_67 + var_1_68))) : 1)) : (var_1_85 == ((signed char) (min (50 , var_1_67))))))) && (var_1_86 == ((double) (var_1_32 - var_1_33)))) && ((! var_1_15) ? ((((var_1_60 / var_1_62) << 5) != var_1_45) ? (var_1_87 == ((float) (var_1_18 - (max (var_1_34 , var_1_33))))) : 1) : 1)) && ((var_1_62 > (var_1_74 / var_1_26)) ? (var_1_88 == ((unsigned char) var_1_15)) : ((! (var_1_74 >= -64)) ? (var_1_88 == ((unsigned char) (((! var_1_12) || (! var_1_13)) || var_1_15))) : (var_1_88 == ((unsigned char) var_1_13))))) && (var_1_82 ? (var_1_89 == ((unsigned short int) 5)) : (var_1_89 == ((unsigned short int) var_1_81)))) && (var_1_90 == ((unsigned char) 8))) && (var_1_15 ? (var_1_91 == ((signed long int) var_1_24)) : (var_1_91 == ((signed long int) var_1_66)))) && (var_1_92 == ((unsigned char) var_1_81))) && (var_1_88 ? (var_1_93 == ((signed long int) var_1_78)) : (var_1_93 == ((signed long int) var_1_6)))) && (var_1_13 ? (var_1_94 == ((signed long int) var_1_44)) : (var_1_94 == ((signed long int) var_1_66)))) && (var_1_15 ? (var_1_95 == ((unsigned char) var_1_14)) : 1)) && (var_1_96 == ((float) var_1_32))) && (var_1_88 ? (var_1_97 == ((unsigned char) var_1_15)) : 1)) && (var_1_99 ? (var_1_98 == ((unsigned short int) var_1_66)) : (var_1_98 == ((unsigned short int) var_1_81)))) && (var_1_99 == ((unsigned char) var_1_15))) && (var_1_12 ? (var_1_100 == ((double) var_1_18)) : (var_1_100 == ((double) var_1_73)))) && (var_1_101 == ((unsigned char) (min (((10 + 5) + var_1_65) , (abs (var_1_66))))))) && (((var_1_81 << (min (var_1_103 , 1))) > (var_1_84 ^ var_1_27)) ? (var_1_102 == ((unsigned char) var_1_62)) : 1)
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
