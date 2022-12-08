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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch87Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 32;
signed long int var_1_5 = 256;
signed long int var_1_6 = -1;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 16;
unsigned short int var_1_9 = 2;
unsigned char var_1_10 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 1;
unsigned long int var_1_19 = 25;
unsigned long int var_1_20 = 3844860889;
unsigned long int var_1_21 = 2027643041;
unsigned long int var_1_22 = 4;
signed long int var_1_23 = 0;
signed long int var_1_25 = 1929320600;
float var_1_26 = 7.75;
float var_1_27 = 10.5;
float var_1_28 = 128.25;
float var_1_29 = 64.5;
float var_1_30 = 31.25;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 5;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 4;
unsigned char var_1_36 = 1;
unsigned short int var_1_39 = 4;
unsigned short int var_1_40 = 50291;
unsigned short int var_1_41 = 22231;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 64;
unsigned char var_1_44 = 32;
signed short int var_1_45 = -256;
unsigned char var_1_47 = 2;
unsigned char var_1_48 = 0;
unsigned short int var_1_50 = 32;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
unsigned long int var_1_54 = 128;
unsigned short int var_1_55 = 128;
signed long int var_1_56 = -128;
float var_1_57 = 5.75;
float var_1_58 = 0.0;
float var_1_59 = 127.5;
float var_1_60 = 1.25;
signed char var_1_61 = -128;
signed char var_1_62 = 0;
double var_1_63 = 9.25;
double var_1_64 = -0.1;
double var_1_65 = 127.5;
double var_1_66 = 256.75;
double var_1_67 = 255.7;
double var_1_68 = 499.75;
double var_1_69 = 10.55;
unsigned char var_1_70 = 200;
unsigned char var_1_71 = 32;
double var_1_72 = -0.5;
unsigned long int var_1_73 = 8;
double var_1_74 = 999999.43;
signed long int var_1_75 = 32;
unsigned short int var_1_77 = 4;
unsigned short int var_1_78 = 51956;
signed char var_1_79 = 0;
signed char var_1_80 = 25;
signed short int var_1_81 = -32;
signed char var_1_83 = -5;
signed char var_1_84 = -8;
unsigned char var_1_85 = 10;
float var_1_86 = 256.8;
float var_1_87 = 256.9;
unsigned char var_1_88 = 1;
unsigned long int var_1_89 = 0;
unsigned short int var_1_90 = 5;
float var_1_91 = 3.2;
unsigned short int var_1_92 = 8;
unsigned char var_1_94 = 1;
signed char var_1_95 = 64;
signed char var_1_96 = 16;
signed char var_1_97 = 32;
signed char var_1_98 = 32;
signed char var_1_99 = 50;
double var_1_100 = 7.25;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 32;
unsigned short int last_1_var_1_9 = 2;
unsigned char last_1_var_1_10 = 0;
unsigned long int last_1_var_1_19 = 25;
signed long int last_1_var_1_23 = 0;
unsigned char last_1_var_1_31 = 0;
unsigned short int last_1_var_1_39 = 4;
unsigned char last_1_var_1_42 = 0;
signed short int last_1_var_1_45 = -256;
unsigned char last_1_var_1_47 = 2;
unsigned char last_1_var_1_48 = 0;
unsigned short int last_1_var_1_50 = 32;
unsigned char last_1_var_1_51 = 1;
unsigned char last_1_var_1_52 = 0;
unsigned long int last_1_var_1_54 = 128;
unsigned short int last_1_var_1_55 = 128;
signed long int last_1_var_1_56 = -128;
float last_1_var_1_57 = 5.75;
unsigned char last_1_var_1_70 = 200;
signed long int last_1_var_1_75 = 32;
signed char last_1_var_1_79 = 0;
signed short int last_1_var_1_81 = -32;
unsigned char last_1_var_1_85 = 10;
unsigned char last_1_var_1_88 = 1;
unsigned long int last_1_var_1_89 = 0;
unsigned char last_1_var_1_94 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch87Amount500
	signed long int stepLocal_8 = var_1_25;
	signed long int stepLocal_7 = var_1_5;
	if (last_1_var_1_19 > stepLocal_7) {
		if ((- (var_1_7 - var_1_8)) > stepLocal_8) {
			var_1_31 = (var_1_18 || var_1_17);
		} else {
			var_1_31 = (last_1_var_1_51 || var_1_14);
		}
	} else {
		var_1_31 = var_1_18;
	}


	// From: Req17Batch87Amount500
	signed long int stepLocal_15 = last_1_var_1_79;
	if (stepLocal_15 > last_1_var_1_85) {
		var_1_48 = (last_1_var_1_88 && (! var_1_17));
	} else {
		var_1_48 = (! var_1_15);
	}


	// From: Req37Batch87Amount500
	if (var_1_48) {
		var_1_85 = var_1_8;
	} else {
		var_1_85 = var_1_35;
	}


	// From: Req22Batch87Amount500
	unsigned short int stepLocal_17 = var_1_41;
	signed long int stepLocal_16 = var_1_6;
	if (last_1_var_1_10) {
		var_1_55 = (54910 - var_1_41);
	} else {
		if (stepLocal_17 > 0) {
			if (! last_1_var_1_52) {
				var_1_55 = (last_1_var_1_56 + (min (var_1_8 , last_1_var_1_94)));
			} else {
				var_1_55 = (min ((max ((2 + var_1_34) , last_1_var_1_42)) , (max (last_1_var_1_54 , (min (var_1_41 , var_1_8))))));
			}
		} else {
			if (last_1_var_1_89 < stepLocal_16) {
				var_1_55 = (min (last_1_var_1_94 , (abs (1))));
			} else {
				var_1_55 = (var_1_40 - (last_1_var_1_42 + 256));
			}
		}
	}


	// From: Req19Batch87Amount500
	if ((last_1_var_1_89 > (var_1_40 - var_1_8)) && last_1_var_1_10) {
		if ((9.999999995E8f * (var_1_28 - var_1_27)) < (- (max (var_1_29 , 128.5f)))) {
			var_1_51 = (! var_1_18);
		}
	} else {
		if (var_1_21 != (min (last_1_var_1_39 , (var_1_43 + last_1_var_1_89)))) {
			var_1_51 = (var_1_14 && var_1_18);
		} else {
			var_1_51 = (! ((last_1_var_1_31 && var_1_15) || (! var_1_17)));
		}
	}


	// From: Req36Batch87Amount500
	if (var_1_51) {
		var_1_84 = var_1_62;
	} else {
		var_1_84 = -50;
	}


	// From: Req32Batch87Amount500
	signed long int stepLocal_29 = last_1_var_1_47;
	if (last_1_var_1_56 > stepLocal_29) {
		var_1_77 = (abs ((max (var_1_40 , var_1_78)) - (min (last_1_var_1_70 , last_1_var_1_79))));
	} else {
		if (var_1_67 > (var_1_29 - var_1_66)) {
			var_1_77 = (max ((last_1_var_1_45 + var_1_41) , last_1_var_1_79));
		} else {
			var_1_77 = var_1_71;
		}
	}


	// From: Req20Batch87Amount500
	if (var_1_15 && (last_1_var_1_57 < var_1_30)) {
		if (var_1_40 >= last_1_var_1_55) {
			if (var_1_25 >= (last_1_var_1_42 + last_1_var_1_70)) {
				var_1_52 = ((var_1_17 && var_1_18) && ((var_1_25 != last_1_var_1_9) || (var_1_14 && var_1_53)));
			} else {
				var_1_52 = (last_1_var_1_88 && var_1_15);
			}
		} else {
			var_1_52 = ((var_1_15 || var_1_16) || (! var_1_14));
		}
	}


	// From: Req13Batch87Amount500
	if (var_1_52) {
		var_1_42 = (100 + (var_1_43 - (abs (var_1_35))));
	}


	// From: Req16Batch87Amount500
	if (var_1_8 > (var_1_7 - var_1_43)) {
		if ((max (last_1_var_1_89 , last_1_var_1_54)) < last_1_var_1_1) {
			var_1_47 = (max (var_1_8 , var_1_43));
		} else {
			var_1_47 = (min (((abs (var_1_8)) + (var_1_43 - var_1_35)) , (32 + var_1_34)));
		}
	} else {
		if (last_1_var_1_48) {
			var_1_47 = (max ((max (var_1_34 , var_1_35)) , var_1_43));
		}
	}


	// From: Req7Batch87Amount500
	if ((var_1_6 + var_1_5) >= (var_1_8 - var_1_7)) {
		var_1_26 = ((var_1_27 + (max (25.375f , 9.75f))) - var_1_28);
	} else {
		var_1_26 = (min (var_1_27 , (min ((var_1_28 - var_1_29) , var_1_30))));
	}


	// From: Req21Batch87Amount500
	var_1_54 = 256u;


	// From: Req25Batch87Amount500
	var_1_61 = (var_1_35 - var_1_62);


	// From: Req28Batch87Amount500
	if (var_1_65 <= (- (var_1_66 - var_1_29))) {
		var_1_70 = ((var_1_43 - (var_1_71 + 2)) + var_1_35);
	} else {
		var_1_70 = (var_1_71 + var_1_35);
	}


	// From: Req29Batch87Amount500
	if ((max (var_1_59 , var_1_28)) < var_1_67) {
		var_1_72 = (var_1_67 - (var_1_66 + var_1_69));
	} else {
		var_1_72 = ((var_1_60 + (max (var_1_64 , var_1_69))) + var_1_59);
	}


	// From: Req30Batch87Amount500
	if (var_1_69 < (var_1_28 / (max (var_1_58 , var_1_74)))) {
		var_1_73 = var_1_25;
	} else {
		var_1_73 = (var_1_40 + var_1_8);
	}


	// From: Req35Batch87Amount500
	var_1_83 = 32;


	// From: Req38Batch87Amount500
	if (var_1_14) {
		var_1_86 = var_1_64;
	} else {
		var_1_86 = var_1_69;
	}


	// From: Req40Batch87Amount500
	if (var_1_15) {
		var_1_88 = var_1_16;
	}


	// From: Req41Batch87Amount500
	if (var_1_53) {
		var_1_89 = 1u;
	} else {
		var_1_89 = var_1_8;
	}


	// From: Req43Batch87Amount500
	var_1_91 = var_1_66;


	// From: Req45Batch87Amount500
	var_1_94 = 32;


	// From: Req47Batch87Amount500
	var_1_100 = var_1_29;


	// From: Req4Batch87Amount500
	if (var_1_31 && var_1_16) {
		if (var_1_18) {
			var_1_19 = (var_1_20 - (var_1_21 - (var_1_47 + var_1_8)));
		}
	}


	// From: Req3Batch87Amount500
	unsigned char stepLocal_1 = var_1_51;
	if (var_1_52) {
		if (stepLocal_1 || var_1_52) {
			var_1_10 = var_1_14;
		} else {
			var_1_10 = ((var_1_14 && (var_1_15 || var_1_16)) || ((! var_1_17) || (! var_1_18)));
		}
	} else {
		var_1_10 = (var_1_16 || var_1_15);
	}


	// From: Req12Batch87Amount500
	unsigned char stepLocal_10 = var_1_70;
	if (var_1_17) {
		if (-4 != stepLocal_10) {
			var_1_39 = (abs (var_1_84 + var_1_8));
		} else {
			var_1_39 = ((var_1_40 - (abs (var_1_8))) - (var_1_41 - var_1_35));
		}
	} else {
		var_1_39 = (var_1_40 - var_1_84);
	}


	// From: Req10Batch87Amount500
	unsigned char stepLocal_9 = ! var_1_17;
	if ((var_1_19 >= var_1_7) && stepLocal_9) {
		var_1_33 = (var_1_8 + var_1_34);
	} else {
		var_1_33 = (var_1_7 - (max ((10 + var_1_35) , var_1_34)));
	}


	// From: Req39Batch87Amount500
	if (var_1_10) {
		var_1_87 = var_1_29;
	}


	// From: Req2Batch87Amount500
	var_1_9 = ((min (var_1_8 , var_1_33)) + var_1_7);


	// From: Req11Batch87Amount500
	if (var_1_6 < var_1_47) {
		if ((var_1_5 + var_1_9) >= var_1_35) {
			var_1_36 = (var_1_17 && var_1_14);
		}
	}


	// From: Req42Batch87Amount500
	if (var_1_36) {
		var_1_90 = var_1_78;
	} else {
		var_1_90 = var_1_34;
	}


	// From: Req1Batch87Amount500
	signed long int stepLocal_0 = var_1_47 + var_1_9;
	if (stepLocal_0 == (var_1_89 / (min (var_1_5 , var_1_6)))) {
		var_1_1 = (var_1_7 - var_1_8);
	}


	// From: Req5Batch87Amount500
	unsigned short int stepLocal_2 = var_1_90;
	if (stepLocal_2 >= 0) {
		var_1_22 = var_1_90;
	} else {
		var_1_22 = (min (var_1_21 , (min (var_1_1 , var_1_7))));
	}


	// From: Req26Batch87Amount500
	signed long int stepLocal_24 = -25;
	unsigned char stepLocal_23 = var_1_35;
	unsigned short int stepLocal_22 = var_1_90;
	if ((var_1_100 + var_1_58) < var_1_28) {
		if ((- var_1_43) <= stepLocal_22) {
			if (stepLocal_24 >= (min (var_1_25 , var_1_90))) {
				if (var_1_18) {
					var_1_63 = (var_1_60 + (var_1_59 + var_1_64));
				} else {
					var_1_63 = (var_1_59 + var_1_64);
				}
			} else {
				if (stepLocal_23 > (~ var_1_9)) {
					var_1_63 = (var_1_65 + (min (var_1_27 , 64.5)));
				} else {
					var_1_63 = var_1_60;
				}
			}
		}
	} else {
		var_1_63 = ((max (var_1_28 , (var_1_27 + 1.75))) - (min (var_1_29 , (var_1_66 + var_1_67))));
	}


	// From: Req9Batch87Amount500
	if (! (var_1_55 > (var_1_7 | var_1_77))) {
		if (var_1_36) {
			var_1_32 = (var_1_17 || var_1_14);
		} else {
			var_1_32 = (! (var_1_15 || var_1_16));
		}
	}


	// From: Req46Batch87Amount500
	unsigned char stepLocal_35 = var_1_51;
	if (var_1_32 || stepLocal_35) {
		var_1_95 = (((var_1_71 + var_1_96) + var_1_35) - ((var_1_97 + var_1_98) - var_1_99));
	} else {
		var_1_95 = var_1_96;
	}


	// From: Req34Batch87Amount500
	unsigned short int stepLocal_34 = var_1_55;
	unsigned long int stepLocal_33 = var_1_54;
	if (last_1_var_1_81 <= ((var_1_43 - last_1_var_1_81) * (var_1_70 + var_1_95))) {
		if (stepLocal_33 >= 32u) {
			if (var_1_20 > stepLocal_34) {
				var_1_81 = -32;
			} else {
				var_1_81 = var_1_73;
			}
		} else {
			var_1_81 = -8;
		}
	}


	// From: Req14Batch87Amount500
	unsigned long int stepLocal_13 = ~ var_1_21;
	unsigned char stepLocal_12 = (- var_1_41) <= var_1_85;
	unsigned long int stepLocal_11 = var_1_22;
	if (stepLocal_12 && var_1_52) {
		if (stepLocal_11 >= var_1_35) {
			var_1_44 = var_1_8;
		} else {
			if (stepLocal_13 > (var_1_7 / var_1_43)) {
				var_1_44 = (var_1_7 - var_1_35);
			}
		}
	}


	// From: Req18Batch87Amount500
	if (var_1_10) {
		var_1_50 = (min (1 , (min (var_1_77 , var_1_41))));
	} else {
		var_1_50 = ((min ((var_1_41 - last_1_var_1_50) , var_1_9)) + (max (var_1_77 , 4)));
	}


	// From: Req33Batch87Amount500
	unsigned char stepLocal_32 = var_1_31;
	signed long int stepLocal_31 = max (var_1_42 , var_1_7);
	unsigned char stepLocal_30 = var_1_42;
	if (stepLocal_31 != last_1_var_1_79) {
		if (stepLocal_32 && (var_1_5 < (last_1_var_1_79 >> var_1_71))) {
			if (10000 > stepLocal_30) {
				var_1_79 = var_1_35;
			}
		} else {
			if (var_1_52) {
				var_1_79 = ((min (var_1_71 , var_1_35)) - var_1_62);
			} else {
				if (var_1_32) {
					var_1_79 = (var_1_35 + (abs (var_1_71 + var_1_80)));
				} else {
					if (var_1_48) {
						var_1_79 = ((min (var_1_71 , var_1_35)) - 8);
					}
				}
			}
		}
	}


	// From: Req23Batch87Amount500
	signed long int stepLocal_21 = var_1_7 - 8;
	signed long int stepLocal_20 = min (var_1_81 , var_1_25);
	signed long int stepLocal_19 = var_1_90 / var_1_6;
	unsigned short int stepLocal_18 = var_1_50;
	if ((~ (var_1_25 + var_1_50)) <= stepLocal_21) {
		if ((min (var_1_77 , (var_1_90 / var_1_6))) <= stepLocal_18) {
			if ((min (25.4 , var_1_30)) >= (var_1_28 / 99.4)) {
				if (var_1_50 > stepLocal_19) {
					if (var_1_20 < stepLocal_20) {
						var_1_56 = (var_1_41 + var_1_47);
					}
				} else {
					var_1_56 = (var_1_25 - (min (var_1_81 , var_1_34)));
				}
			} else {
				var_1_56 = (min (var_1_34 , (max ((min (var_1_7 , var_1_47)) , var_1_85))));
			}
		}
	}


	// From: Req44Batch87Amount500
	if (var_1_15) {
		var_1_92 = var_1_44;
	}


	// From: Req6Batch87Amount500
	signed long int stepLocal_6 = (var_1_95 / var_1_7) / -1;
	unsigned char stepLocal_5 = var_1_16;
	unsigned char stepLocal_4 = var_1_7;
	signed long int stepLocal_3 = max ((var_1_7 * var_1_55) , (var_1_6 * var_1_79));
	if (stepLocal_4 == var_1_92) {
		if ((last_1_var_1_23 ^ (abs (var_1_8))) <= stepLocal_6) {
			var_1_23 = (2 - var_1_7);
		} else {
			if (stepLocal_5 || ((var_1_7 * 64) <= var_1_79)) {
				var_1_23 = (var_1_79 - (var_1_25 - 4));
			} else {
				if (stepLocal_3 >= (max (last_1_var_1_23 , -25))) {
					var_1_23 = var_1_92;
				} else {
					var_1_23 = (max (last_1_var_1_23 , (var_1_8 - var_1_25)));
				}
			}
		}
	} else {
		var_1_23 = var_1_77;
	}


	// From: Req27Batch87Amount500
	signed char stepLocal_28 = var_1_84;
	signed long int stepLocal_27 = 8;
	signed char stepLocal_26 = var_1_84;
	signed long int stepLocal_25 = (var_1_35 << var_1_7) + (var_1_8 - var_1_23);
	if (var_1_8 <= stepLocal_26) {
		var_1_68 = (((127.25 + var_1_69) - var_1_67) + (var_1_27 - (min (15.4 , var_1_66))));
	} else {
		if (var_1_40 < stepLocal_27) {
			if ((var_1_94 / var_1_6) >= stepLocal_28) {
				if (var_1_84 <= stepLocal_25) {
					var_1_68 = (var_1_67 - (max (var_1_28 , var_1_27)));
				} else {
					if (var_1_69 <= (max (var_1_67 , (2.1 * var_1_27)))) {
						var_1_68 = var_1_30;
					} else {
						var_1_68 = (var_1_67 - var_1_28);
					}
				}
			} else {
				var_1_68 = (var_1_60 + var_1_67);
			}
		} else {
			var_1_68 = (min (var_1_59 , (var_1_28 - (var_1_58 - var_1_27))));
		}
	}


	// From: Req24Batch87Amount500
	if (var_1_79 != var_1_92) {
		var_1_57 = (abs (var_1_28));
	} else {
		if ((var_1_55 / var_1_43) >= var_1_7) {
			var_1_57 = (100000.625f - (var_1_58 - var_1_27));
		} else {
			var_1_57 = ((var_1_59 + var_1_60) + var_1_27);
		}
	}


	// From: Req31Batch87Amount500
	if (((var_1_40 - last_1_var_1_75) / var_1_7) >= (abs (max (var_1_85 , var_1_77)))) {
		if (var_1_65 < (- (var_1_59 * var_1_58))) {
			var_1_75 = var_1_47;
		} else {
			var_1_75 = ((min ((var_1_39 + var_1_9) , (min (var_1_7 , var_1_43)))) - var_1_70);
		}
	} else {
		if (var_1_57 != ((var_1_65 * var_1_58) + var_1_59)) {
			var_1_75 = (var_1_85 + (-16 + (abs (var_1_77))));
		}
	}


	// From: Req15Batch87Amount500
	signed long int stepLocal_14 = var_1_5;
	if (var_1_10) {
		if ((min (var_1_43 , var_1_19)) > stepLocal_14) {
			var_1_45 = (var_1_19 - var_1_8);
		} else {
			var_1_45 = (max (var_1_56 , -5));
		}
	} else {
		if (var_1_27 > (max (var_1_29 , (abs (var_1_68))))) {
			var_1_45 = var_1_33;
		} else {
			var_1_45 = var_1_33;
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 127);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 1073741823);
	assume_abort_if_not(var_1_25 <= 2147483646);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 49150);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 16383);
	assume_abort_if_not(var_1_41 <= 32767);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 63);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 4611686.018427382800e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854765600e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= -230584.3009213691390e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 2305843.009213691390e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= -230584.3009213691390e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 2305843.009213691390e+12F && var_1_60 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 126);
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= -230584.3009213691390e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691390e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= -461168.6018427382800e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 4611686.018427382800e+12F && var_1_65 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 4611686.018427382800e+12F && var_1_66 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427382800e+12F && var_1_67 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 2305843.009213691390e+12F && var_1_69 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 32);
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= -922337.2036854776000e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854776000e+12F && var_1_74 >= 1.0e-20F ));
	assume_abort_if_not(var_1_74 != 0.0F);
	var_1_78 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_78 >= 32767);
	assume_abort_if_not(var_1_78 <= 65534);
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= -31);
	assume_abort_if_not(var_1_80 <= 31);
	var_1_96 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 31);
	var_1_97 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_97 >= 31);
	assume_abort_if_not(var_1_97 <= 63);
	var_1_98 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_98 >= 32);
	assume_abort_if_not(var_1_98 <= 63);
	var_1_99 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_99 >= 0);
	assume_abort_if_not(var_1_99 <= 63);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_94 = var_1_94;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((var_1_47 + var_1_9) == (var_1_89 / (min (var_1_5 , var_1_6)))) ? (var_1_1 == ((unsigned char) (var_1_7 - var_1_8))) : 1) && (var_1_9 == ((unsigned short int) ((min (var_1_8 , var_1_33)) + var_1_7)))) && (var_1_52 ? ((var_1_51 || var_1_52) ? (var_1_10 == ((unsigned char) var_1_14)) : (var_1_10 == ((unsigned char) ((var_1_14 && (var_1_15 || var_1_16)) || ((! var_1_17) || (! var_1_18)))))) : (var_1_10 == ((unsigned char) (var_1_16 || var_1_15))))) && ((var_1_31 && var_1_16) ? (var_1_18 ? (var_1_19 == ((unsigned long int) (var_1_20 - (var_1_21 - (var_1_47 + var_1_8))))) : 1) : 1)) && ((var_1_90 >= 0) ? (var_1_22 == ((unsigned long int) var_1_90)) : (var_1_22 == ((unsigned long int) (min (var_1_21 , (min (var_1_1 , var_1_7)))))))) && ((var_1_7 == var_1_92) ? (((last_1_var_1_23 ^ (abs (var_1_8))) <= ((var_1_95 / var_1_7) / -1)) ? (var_1_23 == ((signed long int) (2 - var_1_7))) : ((var_1_16 || ((var_1_7 * 64) <= var_1_79)) ? (var_1_23 == ((signed long int) (var_1_79 - (var_1_25 - 4)))) : (((max ((var_1_7 * var_1_55) , (var_1_6 * var_1_79))) >= (max (last_1_var_1_23 , -25))) ? (var_1_23 == ((signed long int) var_1_92)) : (var_1_23 == ((signed long int) (max (last_1_var_1_23 , (var_1_8 - var_1_25)))))))) : (var_1_23 == ((signed long int) var_1_77)))) && (((var_1_6 + var_1_5) >= (var_1_8 - var_1_7)) ? (var_1_26 == ((float) ((var_1_27 + (max (25.375f , 9.75f))) - var_1_28))) : (var_1_26 == ((float) (min (var_1_27 , (min ((var_1_28 - var_1_29) , var_1_30)))))))) && ((last_1_var_1_19 > var_1_5) ? (((- (var_1_7 - var_1_8)) > var_1_25) ? (var_1_31 == ((unsigned char) (var_1_18 || var_1_17))) : (var_1_31 == ((unsigned char) (last_1_var_1_51 || var_1_14)))) : (var_1_31 == ((unsigned char) var_1_18)))) && ((! (var_1_55 > (var_1_7 | var_1_77))) ? (var_1_36 ? (var_1_32 == ((unsigned char) (var_1_17 || var_1_14))) : (var_1_32 == ((unsigned char) (! (var_1_15 || var_1_16))))) : 1)) && (((var_1_19 >= var_1_7) && (! var_1_17)) ? (var_1_33 == ((unsigned char) (var_1_8 + var_1_34))) : (var_1_33 == ((unsigned char) (var_1_7 - (max ((10 + var_1_35) , var_1_34))))))) && ((var_1_6 < var_1_47) ? (((var_1_5 + var_1_9) >= var_1_35) ? (var_1_36 == ((unsigned char) (var_1_17 && var_1_14))) : 1) : 1)) && (var_1_17 ? ((-4 != var_1_70) ? (var_1_39 == ((unsigned short int) (abs (var_1_84 + var_1_8)))) : (var_1_39 == ((unsigned short int) ((var_1_40 - (abs (var_1_8))) - (var_1_41 - var_1_35))))) : (var_1_39 == ((unsigned short int) (var_1_40 - var_1_84))))) && (var_1_52 ? (var_1_42 == ((unsigned char) (100 + (var_1_43 - (abs (var_1_35)))))) : 1)) && ((((- var_1_41) <= var_1_85) && var_1_52) ? ((var_1_22 >= var_1_35) ? (var_1_44 == ((unsigned char) var_1_8)) : (((~ var_1_21) > (var_1_7 / var_1_43)) ? (var_1_44 == ((unsigned char) (var_1_7 - var_1_35))) : 1)) : 1)) && (var_1_10 ? (((min (var_1_43 , var_1_19)) > var_1_5) ? (var_1_45 == ((signed short int) (var_1_19 - var_1_8))) : (var_1_45 == ((signed short int) (max (var_1_56 , -5))))) : ((var_1_27 > (max (var_1_29 , (abs (var_1_68))))) ? (var_1_45 == ((signed short int) var_1_33)) : (var_1_45 == ((signed short int) var_1_33))))) && ((var_1_8 > (var_1_7 - var_1_43)) ? (((max (last_1_var_1_89 , last_1_var_1_54)) < last_1_var_1_1) ? (var_1_47 == ((unsigned char) (max (var_1_8 , var_1_43)))) : (var_1_47 == ((unsigned char) (min (((abs (var_1_8)) + (var_1_43 - var_1_35)) , (32 + var_1_34)))))) : (last_1_var_1_48 ? (var_1_47 == ((unsigned char) (max ((max (var_1_34 , var_1_35)) , var_1_43)))) : 1))) && ((last_1_var_1_79 > last_1_var_1_85) ? (var_1_48 == ((unsigned char) (last_1_var_1_88 && (! var_1_17)))) : (var_1_48 == ((unsigned char) (! var_1_15))))) && (var_1_10 ? (var_1_50 == ((unsigned short int) (min (1 , (min (var_1_77 , var_1_41)))))) : (var_1_50 == ((unsigned short int) ((min ((var_1_41 - last_1_var_1_50) , var_1_9)) + (max (var_1_77 , 4))))))) && (((last_1_var_1_89 > (var_1_40 - var_1_8)) && last_1_var_1_10) ? (((9.999999995E8f * (var_1_28 - var_1_27)) < (- (max (var_1_29 , 128.5f)))) ? (var_1_51 == ((unsigned char) (! var_1_18))) : 1) : ((var_1_21 != (min (last_1_var_1_39 , (var_1_43 + last_1_var_1_89)))) ? (var_1_51 == ((unsigned char) (var_1_14 && var_1_18))) : (var_1_51 == ((unsigned char) (! ((last_1_var_1_31 && var_1_15) || (! var_1_17)))))))) && ((var_1_15 && (last_1_var_1_57 < var_1_30)) ? ((var_1_40 >= last_1_var_1_55) ? ((var_1_25 >= (last_1_var_1_42 + last_1_var_1_70)) ? (var_1_52 == ((unsigned char) ((var_1_17 && var_1_18) && ((var_1_25 != last_1_var_1_9) || (var_1_14 && var_1_53))))) : (var_1_52 == ((unsigned char) (last_1_var_1_88 && var_1_15)))) : (var_1_52 == ((unsigned char) ((var_1_15 || var_1_16) || (! var_1_14))))) : 1)) && (var_1_54 == ((unsigned long int) 256u))) && (last_1_var_1_10 ? (var_1_55 == ((unsigned short int) (54910 - var_1_41))) : ((var_1_41 > 0) ? ((! last_1_var_1_52) ? (var_1_55 == ((unsigned short int) (last_1_var_1_56 + (min (var_1_8 , last_1_var_1_94))))) : (var_1_55 == ((unsigned short int) (min ((max ((2 + var_1_34) , last_1_var_1_42)) , (max (last_1_var_1_54 , (min (var_1_41 , var_1_8))))))))) : ((last_1_var_1_89 < var_1_6) ? (var_1_55 == ((unsigned short int) (min (last_1_var_1_94 , (abs (1)))))) : (var_1_55 == ((unsigned short int) (var_1_40 - (last_1_var_1_42 + 256)))))))) && (((~ (var_1_25 + var_1_50)) <= (var_1_7 - 8)) ? (((min (var_1_77 , (var_1_90 / var_1_6))) <= var_1_50) ? (((min (25.4 , var_1_30)) >= (var_1_28 / 99.4)) ? ((var_1_50 > (var_1_90 / var_1_6)) ? ((var_1_20 < (min (var_1_81 , var_1_25))) ? (var_1_56 == ((signed long int) (var_1_41 + var_1_47))) : 1) : (var_1_56 == ((signed long int) (var_1_25 - (min (var_1_81 , var_1_34)))))) : (var_1_56 == ((signed long int) (min (var_1_34 , (max ((min (var_1_7 , var_1_47)) , var_1_85))))))) : 1) : 1)) && ((var_1_79 != var_1_92) ? (var_1_57 == ((float) (abs (var_1_28)))) : (((var_1_55 / var_1_43) >= var_1_7) ? (var_1_57 == ((float) (100000.625f - (var_1_58 - var_1_27)))) : (var_1_57 == ((float) ((var_1_59 + var_1_60) + var_1_27)))))) && (var_1_61 == ((signed char) (var_1_35 - var_1_62)))) && (((var_1_100 + var_1_58) < var_1_28) ? (((- var_1_43) <= var_1_90) ? ((-25 >= (min (var_1_25 , var_1_90))) ? (var_1_18 ? (var_1_63 == ((double) (var_1_60 + (var_1_59 + var_1_64)))) : (var_1_63 == ((double) (var_1_59 + var_1_64)))) : ((var_1_35 > (~ var_1_9)) ? (var_1_63 == ((double) (var_1_65 + (min (var_1_27 , 64.5))))) : (var_1_63 == ((double) var_1_60)))) : 1) : (var_1_63 == ((double) ((max (var_1_28 , (var_1_27 + 1.75))) - (min (var_1_29 , (var_1_66 + var_1_67)))))))) && ((var_1_8 <= var_1_84) ? (var_1_68 == ((double) (((127.25 + var_1_69) - var_1_67) + (var_1_27 - (min (15.4 , var_1_66)))))) : ((var_1_40 < 8) ? (((var_1_94 / var_1_6) >= var_1_84) ? ((var_1_84 <= ((var_1_35 << var_1_7) + (var_1_8 - var_1_23))) ? (var_1_68 == ((double) (var_1_67 - (max (var_1_28 , var_1_27))))) : ((var_1_69 <= (max (var_1_67 , (2.1 * var_1_27)))) ? (var_1_68 == ((double) var_1_30)) : (var_1_68 == ((double) (var_1_67 - var_1_28))))) : (var_1_68 == ((double) (var_1_60 + var_1_67)))) : (var_1_68 == ((double) (min (var_1_59 , (var_1_28 - (var_1_58 - var_1_27))))))))) && ((var_1_65 <= (- (var_1_66 - var_1_29))) ? (var_1_70 == ((unsigned char) ((var_1_43 - (var_1_71 + 2)) + var_1_35))) : (var_1_70 == ((unsigned char) (var_1_71 + var_1_35))))) && (((max (var_1_59 , var_1_28)) < var_1_67) ? (var_1_72 == ((double) (var_1_67 - (var_1_66 + var_1_69)))) : (var_1_72 == ((double) ((var_1_60 + (max (var_1_64 , var_1_69))) + var_1_59))))) && ((var_1_69 < (var_1_28 / (max (var_1_58 , var_1_74)))) ? (var_1_73 == ((unsigned long int) var_1_25)) : (var_1_73 == ((unsigned long int) (var_1_40 + var_1_8))))) && ((((var_1_40 - last_1_var_1_75) / var_1_7) >= (abs (max (var_1_85 , var_1_77)))) ? ((var_1_65 < (- (var_1_59 * var_1_58))) ? (var_1_75 == ((signed long int) var_1_47)) : (var_1_75 == ((signed long int) ((min ((var_1_39 + var_1_9) , (min (var_1_7 , var_1_43)))) - var_1_70)))) : ((var_1_57 != ((var_1_65 * var_1_58) + var_1_59)) ? (var_1_75 == ((signed long int) (var_1_85 + (-16 + (abs (var_1_77)))))) : 1))) && ((last_1_var_1_56 > last_1_var_1_47) ? (var_1_77 == ((unsigned short int) (abs ((max (var_1_40 , var_1_78)) - (min (last_1_var_1_70 , last_1_var_1_79)))))) : ((var_1_67 > (var_1_29 - var_1_66)) ? (var_1_77 == ((unsigned short int) (max ((last_1_var_1_45 + var_1_41) , last_1_var_1_79)))) : (var_1_77 == ((unsigned short int) var_1_71))))) && (((max (var_1_42 , var_1_7)) != last_1_var_1_79) ? ((var_1_31 && (var_1_5 < (last_1_var_1_79 >> var_1_71))) ? ((10000 > var_1_42) ? (var_1_79 == ((signed char) var_1_35)) : 1) : (var_1_52 ? (var_1_79 == ((signed char) ((min (var_1_71 , var_1_35)) - var_1_62))) : (var_1_32 ? (var_1_79 == ((signed char) (var_1_35 + (abs (var_1_71 + var_1_80))))) : (var_1_48 ? (var_1_79 == ((signed char) ((min (var_1_71 , var_1_35)) - 8))) : 1)))) : 1)) && ((last_1_var_1_81 <= ((var_1_43 - last_1_var_1_81) * (var_1_70 + var_1_95))) ? ((var_1_54 >= 32u) ? ((var_1_20 > var_1_55) ? (var_1_81 == ((signed short int) -32)) : (var_1_81 == ((signed short int) var_1_73))) : (var_1_81 == ((signed short int) -8))) : 1)) && (var_1_83 == ((signed char) 32))) && (var_1_51 ? (var_1_84 == ((signed char) var_1_62)) : (var_1_84 == ((signed char) -50)))) && (var_1_48 ? (var_1_85 == ((unsigned char) var_1_8)) : (var_1_85 == ((unsigned char) var_1_35)))) && (var_1_14 ? (var_1_86 == ((float) var_1_64)) : (var_1_86 == ((float) var_1_69)))) && (var_1_10 ? (var_1_87 == ((float) var_1_29)) : 1)) && (var_1_15 ? (var_1_88 == ((unsigned char) var_1_16)) : 1)) && (var_1_53 ? (var_1_89 == ((unsigned long int) 1u)) : (var_1_89 == ((unsigned long int) var_1_8)))) && (var_1_36 ? (var_1_90 == ((unsigned short int) var_1_78)) : (var_1_90 == ((unsigned short int) var_1_34)))) && (var_1_91 == ((float) var_1_66))) && (var_1_15 ? (var_1_92 == ((unsigned short int) var_1_44)) : 1)) && (var_1_94 == ((unsigned char) 32))) && ((var_1_32 || var_1_51) ? (var_1_95 == ((signed char) (((var_1_71 + var_1_96) + var_1_35) - ((var_1_97 + var_1_98) - var_1_99)))) : (var_1_95 == ((signed char) var_1_96)))) && (var_1_100 == ((double) var_1_29))
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
