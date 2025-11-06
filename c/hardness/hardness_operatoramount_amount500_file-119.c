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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch119Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 50;
unsigned char var_1_2 = 25;
signed short int var_1_3 = -100;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 5;
unsigned long int var_1_11 = 3644703036;
unsigned char var_1_12 = 128;
unsigned char var_1_13 = 10;
unsigned char var_1_14 = 4;
unsigned long int var_1_15 = 0;
unsigned long int var_1_16 = 3807573421;
unsigned long int var_1_17 = 1000000000;
signed long int var_1_18 = 1;
float var_1_23 = 999999999.4;
signed long int var_1_24 = 0;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 128;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 25;
unsigned char var_1_29 = 64;
unsigned char var_1_30 = 32;
signed short int var_1_31 = -256;
signed short int var_1_32 = 10000;
signed short int var_1_33 = 21695;
signed short int var_1_34 = 10000;
unsigned short int var_1_35 = 4;
double var_1_36 = 4.625;
double var_1_37 = 9999.625;
double var_1_38 = 16.4;
double var_1_39 = 99999999999999.66;
double var_1_40 = 5.875;
double var_1_41 = 63.5;
double var_1_42 = 9.5;
double var_1_43 = 0.0;
unsigned char var_1_44 = 10;
unsigned char var_1_45 = 0;
unsigned long int var_1_46 = 16;
signed short int var_1_47 = 16;
signed char var_1_48 = 4;
signed char var_1_49 = -8;
unsigned char var_1_50 = 1;
signed char var_1_52 = 16;
signed char var_1_53 = 25;
unsigned char var_1_55 = 0;
unsigned short int var_1_56 = 200;
unsigned short int var_1_57 = 40012;
signed short int var_1_58 = -100;
unsigned long int var_1_59 = 32;
signed short int var_1_60 = 10;
signed long int var_1_61 = -5;
signed long int var_1_62 = -10;
signed long int var_1_63 = 1768001383;
signed long int var_1_64 = 1847097496;
unsigned char var_1_65 = 10;
signed long int var_1_66 = -64;
signed char var_1_67 = -4;
signed char var_1_68 = 4;
signed char var_1_69 = 4;
float var_1_70 = 1000000.6;
signed long int var_1_71 = -16;
signed long int var_1_72 = 100;
signed short int var_1_73 = -128;
signed char var_1_74 = 0;
signed char var_1_75 = -1;
signed char var_1_76 = -5;
signed char var_1_77 = 4;
signed char var_1_78 = 8;
signed char var_1_79 = 16;
double var_1_80 = 256.6;
double var_1_81 = 1000000.8;
unsigned char var_1_82 = 2;
double var_1_83 = 0.0;
double var_1_84 = 1000.2;
unsigned char var_1_85 = 16;
unsigned long int var_1_86 = 1000;
unsigned long int var_1_87 = 2055603945;
unsigned long int var_1_88 = 16;
double var_1_89 = 1.4;
double var_1_90 = 0.0;
signed char var_1_91 = 2;
float var_1_92 = 255.625;
signed short int var_1_93 = -500;
double var_1_94 = 99999999999.9;
signed long int var_1_95 = -4;
double var_1_96 = 256.9;
signed char var_1_97 = -4;
unsigned long int var_1_98 = 2;
unsigned char var_1_99 = 4;
unsigned short int var_1_100 = 5;
double var_1_101 = 0.19999999999999996;
unsigned char var_1_102 = 2;
signed short int var_1_103 = 10;
double var_1_104 = 127.75;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_9 = 5;
unsigned long int last_1_var_1_15 = 0;
signed long int last_1_var_1_18 = 1;
unsigned char last_1_var_1_25 = 1;
unsigned long int last_1_var_1_46 = 16;
unsigned short int last_1_var_1_56 = 200;
signed short int last_1_var_1_58 = -100;
signed short int last_1_var_1_73 = -128;
double last_1_var_1_80 = 256.6;
double last_1_var_1_81 = 1000000.8;
unsigned long int last_1_var_1_86 = 1000;
double last_1_var_1_89 = 1.4;
double last_1_var_1_94 = 99999999999.9;
signed long int last_1_var_1_95 = -4;
double last_1_var_1_96 = 256.9;
double last_1_var_1_101 = 0.19999999999999996;
double last_1_var_1_104 = 127.75;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch119Amount500
	unsigned long int stepLocal_12 = var_1_16 / var_1_26;
	if (last_1_var_1_89 <= (last_1_var_1_104 / var_1_23)) {
		if (last_1_var_1_25) {
			if (var_1_8) {
				if (((abs (var_1_14)) - last_1_var_1_58) >= stepLocal_12) {
					var_1_31 = ((var_1_13 - (10000 - var_1_26)) + (last_1_var_1_58 + 10));
				} else {
					var_1_31 = ((last_1_var_1_18 + (var_1_2 + var_1_14)) + var_1_13);
				}
			} else {
				var_1_31 = (var_1_2 + -25);
			}
		} else {
			var_1_31 = (((10000 + var_1_32) - var_1_14) - (var_1_33 - (var_1_34 - var_1_2)));
		}
	} else {
		var_1_31 = var_1_26;
	}


	// From: Req8Batch119Amount500
	unsigned char stepLocal_6 = var_1_13;
	unsigned char stepLocal_5 = var_1_13 <= (last_1_var_1_15 % 64);
	if (var_1_8 && stepLocal_5) {
		if (last_1_var_1_9 > stepLocal_6) {
			var_1_18 = var_1_13;
		} else {
			if ((max ((last_1_var_1_89 + last_1_var_1_101) , last_1_var_1_94)) >= (last_1_var_1_96 / var_1_23)) {
				var_1_18 = (min (var_1_13 , (min (last_1_var_1_95 , last_1_var_1_86))));
			} else {
				var_1_18 = ((abs (var_1_13 - 10)) - var_1_24);
			}
		}
	} else {
		var_1_18 = var_1_17;
	}


	// From: Req1Batch119Amount500
	var_1_1 = var_1_2;


	// From: Req4Batch119Amount500
	var_1_7 = (! var_1_8);


	// From: Req12Batch119Amount500
	var_1_35 = (var_1_26 + var_1_34);


	// From: Req14Batch119Amount500
	if (var_1_6) {
		var_1_44 = (var_1_45 + var_1_13);
	}


	// From: Req31Batch119Amount500
	var_1_78 = (((var_1_30 - var_1_79) + (max (var_1_77 , var_1_76))) + (var_1_53 - var_1_69));


	// From: Req36Batch119Amount500
	var_1_89 = (var_1_84 + (var_1_42 - (var_1_90 - var_1_39)));


	// From: Req39Batch119Amount500
	var_1_93 = var_1_29;


	// From: Req40Batch119Amount500
	if (var_1_55) {
		var_1_94 = var_1_37;
	} else {
		var_1_94 = var_1_90;
	}


	// From: Req42Batch119Amount500
	var_1_96 = var_1_37;


	// From: Req45Batch119Amount500
	if (var_1_7) {
		var_1_99 = var_1_79;
	}


	// From: Req46Batch119Amount500
	if (var_1_8) {
		var_1_100 = var_1_82;
	} else {
		var_1_100 = 64;
	}


	// From: Req47Batch119Amount500
	if (var_1_27) {
		var_1_101 = var_1_40;
	} else {
		var_1_101 = 9.999999999999975E13;
	}


	// From: Req48Batch119Amount500
	var_1_102 = var_1_2;


	// From: Req19Batch119Amount500
	signed short int stepLocal_22 = var_1_34;
	signed long int stepLocal_21 = max ((- var_1_34) , var_1_14);
	if (stepLocal_21 < last_1_var_1_56) {
		if (stepLocal_22 >= (last_1_var_1_56 - var_1_30)) {
			var_1_56 = ((var_1_44 + var_1_14) + var_1_18);
		} else {
			var_1_56 = ((abs (var_1_57)) - var_1_45);
		}
	} else {
		if (var_1_7) {
			var_1_56 = (var_1_57 - var_1_33);
		} else {
			var_1_56 = (min ((min ((var_1_45 + var_1_44) , var_1_14)) , var_1_34));
		}
	}


	// From: Req2Batch119Amount500
	var_1_3 = var_1_93;


	// From: Req24Batch119Amount500
	unsigned char stepLocal_26 = (var_1_94 <= var_1_23) || var_1_6;
	if ((var_1_30 != var_1_53) || stepLocal_26) {
		var_1_66 = (var_1_52 + (var_1_31 - var_1_53));
	}


	// From: Req26Batch119Amount500
	if (var_1_96 > (- var_1_39)) {
		var_1_70 = (min ((var_1_37 - var_1_40) , var_1_42));
	}


	// From: Req35Batch119Amount500
	if ((var_1_84 * var_1_101) > var_1_23) {
		var_1_86 = ((var_1_63 + (var_1_87 - var_1_88)) - (var_1_2 + var_1_69));
	} else {
		if ((last_1_var_1_86 ^ (100 / var_1_82)) == var_1_79) {
			var_1_86 = var_1_30;
		} else {
			var_1_86 = ((min ((var_1_64 + var_1_87) , (var_1_16 - var_1_45))) - var_1_34);
		}
	}


	// From: Req44Batch119Amount500
	var_1_98 = var_1_3;


	// From: Req5Batch119Amount500
	unsigned short int stepLocal_3 = var_1_35;
	unsigned char stepLocal_2 = var_1_2;
	signed long int stepLocal_1 = var_1_35 + var_1_2;
	signed long int stepLocal_0 = ~ var_1_2;
	if (last_1_var_1_9 <= stepLocal_1) {
		if (stepLocal_2 == var_1_86) {
			if (var_1_2 != stepLocal_3) {
				var_1_9 = 128u;
			} else {
				var_1_9 = (abs (var_1_11 - var_1_86));
			}
		} else {
			var_1_9 = (var_1_11 - (var_1_2 + (var_1_86 + var_1_35)));
		}
	} else {
		if (stepLocal_0 <= last_1_var_1_9) {
			var_1_9 = var_1_2;
		}
	}


	// From: Req6Batch119Amount500
	signed long int stepLocal_4 = - var_1_56;
	if (stepLocal_4 < var_1_98) {
		var_1_12 = (var_1_13 + var_1_14);
	} else {
		var_1_12 = var_1_14;
	}


	// From: Req10Batch119Amount500
	unsigned long int stepLocal_11 = (var_1_16 - var_1_2) + var_1_11;
	if (stepLocal_11 != ((abs (var_1_26)) * var_1_86)) {
		var_1_28 = (var_1_14 + (var_1_29 - (var_1_30 + 10)));
	} else {
		var_1_28 = (abs (var_1_30));
	}


	// From: Req15Batch119Amount500
	signed long int stepLocal_17 = var_1_34 * var_1_33;
	if (((var_1_26 - 1) * var_1_98) > stepLocal_17) {
		var_1_46 = (var_1_32 + var_1_30);
	} else {
		var_1_46 = (2358672995u - (min (last_1_var_1_46 , var_1_26)));
	}


	// From: Req16Batch119Amount500
	if (var_1_43 <= var_1_70) {
		var_1_47 = (2 - var_1_26);
	}


	// From: Req17Batch119Amount500
	signed long int stepLocal_18 = var_1_14 / var_1_26;
	if ((200 * var_1_12) < stepLocal_18) {
		var_1_48 = (var_1_30 + var_1_49);
	} else {
		var_1_48 = (abs (var_1_49));
	}


	// From: Req21Batch119Amount500
	unsigned long int stepLocal_23 = var_1_9;
	if (var_1_7) {
		if (var_1_14 <= stepLocal_23) {
			var_1_60 = (var_1_3 - var_1_102);
		}
	}


	// From: Req23Batch119Amount500
	unsigned long int stepLocal_25 = var_1_86;
	signed long int stepLocal_24 = -5;
	if (stepLocal_24 < var_1_64) {
		var_1_65 = (200 - var_1_29);
	} else {
		if (var_1_9 <= stepLocal_25) {
			var_1_65 = (abs (var_1_52));
		} else {
			var_1_65 = (max (var_1_29 , var_1_14));
		}
	}


	// From: Req27Batch119Amount500
	signed long int stepLocal_28 = var_1_18 * (var_1_13 ^ var_1_93);
	unsigned char stepLocal_27 = var_1_5;
	if (stepLocal_27 && var_1_6) {
		if (var_1_9 < stepLocal_28) {
			var_1_71 = var_1_69;
		}
	} else {
		var_1_71 = (min (var_1_30 , var_1_9));
	}


	// From: Req28Batch119Amount500
	signed char stepLocal_31 = var_1_69;
	unsigned char stepLocal_30 = var_1_29;
	signed short int stepLocal_29 = var_1_32;
	if (var_1_9 > stepLocal_29) {
		if (var_1_9 <= stepLocal_30) {
			var_1_72 = (var_1_46 + var_1_32);
		} else {
			var_1_72 = (var_1_45 - var_1_29);
		}
	} else {
		if (stepLocal_31 > (var_1_98 / var_1_59)) {
			var_1_72 = ((var_1_46 + (max (var_1_32 , var_1_14))) - 64);
		} else {
			var_1_72 = (abs (var_1_33));
		}
	}


	// From: Req41Batch119Amount500
	if (var_1_55) {
		var_1_95 = var_1_9;
	} else {
		var_1_95 = var_1_31;
	}


	// From: Req7Batch119Amount500
	if (! var_1_8) {
		var_1_15 = ((min (var_1_13 , var_1_14)) + var_1_28);
	} else {
		var_1_15 = ((var_1_16 - (var_1_17 - var_1_13)) - var_1_14);
	}


	// From: Req20Batch119Amount500
	if ((var_1_24 / var_1_59) != var_1_15) {
		if (var_1_37 >= var_1_70) {
			var_1_58 = (max (-4 , -5));
		}
	} else {
		var_1_58 = (max ((var_1_13 - var_1_14) , (var_1_9 + (var_1_102 + var_1_1))));
	}


	// From: Req25Batch119Amount500
	if (var_1_14 < 2) {
		if (var_1_95 <= var_1_86) {
			if (var_1_46 == var_1_24) {
				var_1_67 = (var_1_49 + (min ((max (var_1_53 , var_1_30)) , (var_1_68 - var_1_69))));
			}
		} else {
			var_1_67 = var_1_69;
		}
	}


	// From: Req3Batch119Amount500
	if (var_1_60 <= var_1_15) {
		var_1_4 = (var_1_5 && var_1_6);
	}


	// From: Req43Batch119Amount500
	if (var_1_4) {
		var_1_97 = var_1_76;
	}


	// From: Req9Batch119Amount500
	unsigned long int stepLocal_10 = var_1_46;
	unsigned long int stepLocal_9 = var_1_17;
	unsigned char stepLocal_8 = var_1_26;
	signed long int stepLocal_7 = var_1_26 - var_1_14;
	if (var_1_4) {
		if (var_1_56 > stepLocal_7) {
			if (stepLocal_9 >= ((var_1_46 * var_1_24) + 2u)) {
				var_1_25 = ((var_1_46 <= -50) && var_1_8);
			} else {
				var_1_25 = (! (! var_1_8));
			}
		}
	} else {
		if (stepLocal_10 <= (var_1_18 - var_1_13)) {
			var_1_25 = ((var_1_5 && var_1_6) && var_1_27);
		} else {
			if (stepLocal_8 >= ((var_1_93 + var_1_14) + (var_1_16 + var_1_11))) {
				var_1_25 = var_1_27;
			}
		}
	}


	// From: Req34Batch119Amount500
	unsigned long int stepLocal_38 = var_1_98 * var_1_75;
	signed long int stepLocal_37 = var_1_72;
	if (var_1_15 > stepLocal_37) {
		var_1_85 = 128;
	} else {
		if (var_1_25) {
			if (stepLocal_38 < ((var_1_79 - var_1_64) / var_1_26)) {
				var_1_85 = var_1_52;
			} else {
				var_1_85 = (abs (var_1_2));
			}
		}
	}


	// From: Req37Batch119Amount500
	unsigned char stepLocal_39 = var_1_25;
	if (stepLocal_39 && var_1_5) {
		var_1_91 = (var_1_53 - var_1_79);
	}


	// From: Req13Batch119Amount500
	signed long int stepLocal_16 = var_1_24;
	unsigned short int stepLocal_15 = var_1_35;
	unsigned char stepLocal_14 = var_1_25;
	signed long int stepLocal_13 = max (var_1_14 , var_1_31);
	if (stepLocal_14 && var_1_7) {
		if ((var_1_32 + (var_1_2 % 256u)) >= stepLocal_15) {
			var_1_36 = (var_1_37 - ((var_1_38 + var_1_39) + var_1_40));
		} else {
			if (var_1_29 < stepLocal_16) {
				var_1_36 = (min (var_1_38 , (min (var_1_40 , (var_1_39 - var_1_37)))));
			} else {
				if (stepLocal_13 >= var_1_72) {
					var_1_36 = var_1_41;
				} else {
					var_1_36 = ((var_1_38 + var_1_39) + (var_1_40 - var_1_42));
				}
			}
		}
	} else {
		var_1_36 = (var_1_42 - (var_1_43 - var_1_39));
	}


	// From: Req18Batch119Amount500
	signed char stepLocal_20 = var_1_78;
	unsigned char stepLocal_19 = var_1_5;
	if (stepLocal_20 > ((64 - var_1_30) - (var_1_52 + var_1_53))) {
		if (! var_1_8) {
			var_1_50 = ((var_1_43 > (var_1_42 - var_1_39)) && (var_1_8 || (var_1_25 && var_1_55)));
		} else {
			var_1_50 = (var_1_27 || var_1_5);
		}
	} else {
		if (((var_1_43 - 499.875f) >= var_1_42) && stepLocal_19) {
			var_1_50 = (! var_1_8);
		} else {
			if (var_1_36 != (min (var_1_37 , var_1_23))) {
				var_1_50 = (! var_1_55);
			}
		}
	}


	// From: Req50Batch119Amount500
	signed long int stepLocal_41 = var_1_18;
	signed long int stepLocal_40 = var_1_72;
	if ((var_1_60 ^ (max (var_1_100 , var_1_69))) == stepLocal_40) {
		if (stepLocal_41 <= var_1_53) {
			if (var_1_50) {
				var_1_104 = (var_1_90 + var_1_42);
			}
		}
	} else {
		var_1_104 = var_1_39;
	}


	// From: Req22Batch119Amount500
	if (var_1_70 > ((9.125704234512259E18f - var_1_42) - var_1_40)) {
		if (var_1_55 || var_1_50) {
			var_1_61 = (max ((max (var_1_62 , var_1_86)) , ((min (var_1_31 , var_1_33)) - (var_1_63 - var_1_71))));
		} else {
			if (var_1_31 < var_1_63) {
				var_1_61 = ((abs (var_1_33 - var_1_71)) - ((min (var_1_63 , var_1_64)) - var_1_13));
			}
		}
	} else {
		var_1_61 = (min ((var_1_30 - 1) , (var_1_31 + var_1_46)));
	}


	// From: Req30Batch119Amount500
	if (1000000000 <= var_1_2) {
		if (var_1_50 && var_1_5) {
			var_1_74 = (((var_1_75 + var_1_76) + var_1_77) + (max (var_1_68 , (min (var_1_69 , var_1_53)))));
		} else {
			var_1_74 = (var_1_77 + var_1_53);
		}
	}


	// From: Req32Batch119Amount500
	unsigned char stepLocal_36 = var_1_25;
	if ((abs (var_1_104)) > last_1_var_1_80) {
		if (stepLocal_36 || var_1_4) {
			var_1_80 = (abs ((max (var_1_38 , var_1_42)) - 255.2));
		} else {
			var_1_80 = (max (var_1_37 , var_1_41));
		}
	}


	// From: Req33Batch119Amount500
	if (var_1_32 < var_1_98) {
		if (var_1_33 <= (var_1_91 + (var_1_53 >> var_1_82))) {
			var_1_81 = (4.4 + var_1_39);
		} else {
			if ((- (max (last_1_var_1_81 , var_1_41))) > var_1_70) {
				if (var_1_86 > var_1_69) {
					var_1_81 = (var_1_42 - (var_1_83 - (var_1_39 + var_1_38)));
				}
			} else {
				if (var_1_7 && (var_1_11 > var_1_95)) {
					var_1_81 = (max (var_1_40 , (var_1_83 - var_1_42)));
				} else {
					var_1_81 = (var_1_37 - 2.95);
				}
			}
		}
	} else {
		var_1_81 = (var_1_42 + var_1_84);
	}


	// From: Req38Batch119Amount500
	if (var_1_36 == var_1_37) {
		var_1_92 = var_1_90;
	}


	// From: Req49Batch119Amount500
	if (var_1_50) {
		var_1_103 = var_1_86;
	} else {
		var_1_103 = var_1_13;
	}


	// From: Req29Batch119Amount500
	unsigned char stepLocal_35 = var_1_28;
	signed long int stepLocal_34 = var_1_72;
	signed long int stepLocal_33 = var_1_66;
	signed char stepLocal_32 = var_1_52;
	if ((min (-0.625f , (var_1_80 / 4.6f))) < (var_1_80 * (var_1_37 / 15.5f))) {
		if (stepLocal_34 <= var_1_60) {
			if ((var_1_69 - var_1_14) != stepLocal_32) {
				var_1_73 = (max ((var_1_69 + last_1_var_1_73) , var_1_53));
			} else {
				var_1_73 = (last_1_var_1_73 - (var_1_33 - var_1_45));
			}
		} else {
			if ((var_1_52 / var_1_26) <= stepLocal_33) {
				if (var_1_5) {
					var_1_73 = ((var_1_33 - var_1_68) - ((var_1_34 - var_1_26) + (var_1_32 - 32)));
				} else {
					var_1_73 = ((last_1_var_1_73 + (10 + 2)) + (64 - var_1_30));
				}
			} else {
				var_1_73 = -256;
			}
		}
	} else {
		if (stepLocal_35 <= (var_1_46 + 100)) {
			var_1_73 = (last_1_var_1_73 - var_1_69);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 3221225470);
	assume_abort_if_not(var_1_16 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 536870911);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	assume_abort_if_not(var_1_23 != 0.0F);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 2147483646);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 127);
	assume_abort_if_not(var_1_26 <= 255);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 63);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 32);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= 8191);
	assume_abort_if_not(var_1_32 <= 16383);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 16383);
	assume_abort_if_not(var_1_33 <= 32766);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= 8191);
	assume_abort_if_not(var_1_34 <= 16383);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691400e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691400e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854766000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 4611686.018427383000e+12F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -63);
	assume_abort_if_not(var_1_49 <= 63);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 64);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 63);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 0);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 32767);
	assume_abort_if_not(var_1_57 <= 65534);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 4294967295);
	assume_abort_if_not(var_1_59 != 0);
	var_1_62 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_62 >= -2147483647);
	assume_abort_if_not(var_1_62 <= 2147483646);
	var_1_63 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_63 >= 1073741823);
	assume_abort_if_not(var_1_63 <= 2147483646);
	var_1_64 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_64 >= 1073741823);
	assume_abort_if_not(var_1_64 <= 2147483646);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 63);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 63);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= -15);
	assume_abort_if_not(var_1_75 <= 16);
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= -15);
	assume_abort_if_not(var_1_76 <= 16);
	var_1_77 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_77 >= -31);
	assume_abort_if_not(var_1_77 <= 31);
	var_1_79 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 31);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 1);
	assume_abort_if_not(var_1_82 <= 6);
	var_1_83 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_83 >= 4611686.018427383000e+12F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854766000e+12F && var_1_83 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_84 >= -461168.6018427383000e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427383000e+12F && var_1_84 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_87 >= 1610612735);
	assume_abort_if_not(var_1_87 <= 2147483647);
	var_1_88 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 536870911);
	var_1_90 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_90 >= 2305843.009213691400e+12F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 4611686.018427383000e+12F && var_1_90 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_104 = var_1_104;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((var_1_1 == ((unsigned char) var_1_2)) && (var_1_3 == ((signed short int) var_1_93))) && ((var_1_60 <= var_1_15) ? (var_1_4 == ((unsigned char) (var_1_5 && var_1_6))) : 1)) && (var_1_7 == ((unsigned char) (! var_1_8)))) && ((last_1_var_1_9 <= (var_1_35 + var_1_2)) ? ((var_1_2 == var_1_86) ? ((var_1_2 != var_1_35) ? (var_1_9 == ((unsigned long int) 128u)) : (var_1_9 == ((unsigned long int) (abs (var_1_11 - var_1_86))))) : (var_1_9 == ((unsigned long int) (var_1_11 - (var_1_2 + (var_1_86 + var_1_35)))))) : (((~ var_1_2) <= last_1_var_1_9) ? (var_1_9 == ((unsigned long int) var_1_2)) : 1))) && (((- var_1_56) < var_1_98) ? (var_1_12 == ((unsigned char) (var_1_13 + var_1_14))) : (var_1_12 == ((unsigned char) var_1_14)))) && ((! var_1_8) ? (var_1_15 == ((unsigned long int) ((min (var_1_13 , var_1_14)) + var_1_28))) : (var_1_15 == ((unsigned long int) ((var_1_16 - (var_1_17 - var_1_13)) - var_1_14))))) && ((var_1_8 && (var_1_13 <= (last_1_var_1_15 % 64))) ? ((last_1_var_1_9 > var_1_13) ? (var_1_18 == ((signed long int) var_1_13)) : (((max ((last_1_var_1_89 + last_1_var_1_101) , last_1_var_1_94)) >= (last_1_var_1_96 / var_1_23)) ? (var_1_18 == ((signed long int) (min (var_1_13 , (min (last_1_var_1_95 , last_1_var_1_86)))))) : (var_1_18 == ((signed long int) ((abs (var_1_13 - 10)) - var_1_24))))) : (var_1_18 == ((signed long int) var_1_17)))) && (var_1_4 ? ((var_1_56 > (var_1_26 - var_1_14)) ? ((var_1_17 >= ((var_1_46 * var_1_24) + 2u)) ? (var_1_25 == ((unsigned char) ((var_1_46 <= -50) && var_1_8))) : (var_1_25 == ((unsigned char) (! (! var_1_8))))) : 1) : ((var_1_46 <= (var_1_18 - var_1_13)) ? (var_1_25 == ((unsigned char) ((var_1_5 && var_1_6) && var_1_27))) : ((var_1_26 >= ((var_1_93 + var_1_14) + (var_1_16 + var_1_11))) ? (var_1_25 == ((unsigned char) var_1_27)) : 1)))) && ((((var_1_16 - var_1_2) + var_1_11) != ((abs (var_1_26)) * var_1_86)) ? (var_1_28 == ((unsigned char) (var_1_14 + (var_1_29 - (var_1_30 + 10))))) : (var_1_28 == ((unsigned char) (abs (var_1_30)))))) && ((last_1_var_1_89 <= (last_1_var_1_104 / var_1_23)) ? (last_1_var_1_25 ? (var_1_8 ? ((((abs (var_1_14)) - last_1_var_1_58) >= (var_1_16 / var_1_26)) ? (var_1_31 == ((signed short int) ((var_1_13 - (10000 - var_1_26)) + (last_1_var_1_58 + 10)))) : (var_1_31 == ((signed short int) ((last_1_var_1_18 + (var_1_2 + var_1_14)) + var_1_13)))) : (var_1_31 == ((signed short int) (var_1_2 + -25)))) : (var_1_31 == ((signed short int) (((10000 + var_1_32) - var_1_14) - (var_1_33 - (var_1_34 - var_1_2)))))) : (var_1_31 == ((signed short int) var_1_26)))) && (var_1_35 == ((unsigned short int) (var_1_26 + var_1_34)))) && ((var_1_25 && var_1_7) ? (((var_1_32 + (var_1_2 % 256u)) >= var_1_35) ? (var_1_36 == ((double) (var_1_37 - ((var_1_38 + var_1_39) + var_1_40)))) : ((var_1_29 < var_1_24) ? (var_1_36 == ((double) (min (var_1_38 , (min (var_1_40 , (var_1_39 - var_1_37))))))) : (((max (var_1_14 , var_1_31)) >= var_1_72) ? (var_1_36 == ((double) var_1_41)) : (var_1_36 == ((double) ((var_1_38 + var_1_39) + (var_1_40 - var_1_42))))))) : (var_1_36 == ((double) (var_1_42 - (var_1_43 - var_1_39)))))) && (var_1_6 ? (var_1_44 == ((unsigned char) (var_1_45 + var_1_13))) : 1)) && ((((var_1_26 - 1) * var_1_98) > (var_1_34 * var_1_33)) ? (var_1_46 == ((unsigned long int) (var_1_32 + var_1_30))) : (var_1_46 == ((unsigned long int) (2358672995u - (min (last_1_var_1_46 , var_1_26))))))) && ((var_1_43 <= var_1_70) ? (var_1_47 == ((signed short int) (2 - var_1_26))) : 1)) && (((200 * var_1_12) < (var_1_14 / var_1_26)) ? (var_1_48 == ((signed char) (var_1_30 + var_1_49))) : (var_1_48 == ((signed char) (abs (var_1_49)))))) && ((var_1_78 > ((64 - var_1_30) - (var_1_52 + var_1_53))) ? ((! var_1_8) ? (var_1_50 == ((unsigned char) ((var_1_43 > (var_1_42 - var_1_39)) && (var_1_8 || (var_1_25 && var_1_55))))) : (var_1_50 == ((unsigned char) (var_1_27 || var_1_5)))) : ((((var_1_43 - 499.875f) >= var_1_42) && var_1_5) ? (var_1_50 == ((unsigned char) (! var_1_8))) : ((var_1_36 != (min (var_1_37 , var_1_23))) ? (var_1_50 == ((unsigned char) (! var_1_55))) : 1)))) && (((max ((- var_1_34) , var_1_14)) < last_1_var_1_56) ? ((var_1_34 >= (last_1_var_1_56 - var_1_30)) ? (var_1_56 == ((unsigned short int) ((var_1_44 + var_1_14) + var_1_18))) : (var_1_56 == ((unsigned short int) ((abs (var_1_57)) - var_1_45)))) : (var_1_7 ? (var_1_56 == ((unsigned short int) (var_1_57 - var_1_33))) : (var_1_56 == ((unsigned short int) (min ((min ((var_1_45 + var_1_44) , var_1_14)) , var_1_34))))))) && (((var_1_24 / var_1_59) != var_1_15) ? ((var_1_37 >= var_1_70) ? (var_1_58 == ((signed short int) (max (-4 , -5)))) : 1) : (var_1_58 == ((signed short int) (max ((var_1_13 - var_1_14) , (var_1_9 + (var_1_102 + var_1_1)))))))) && (var_1_7 ? ((var_1_14 <= var_1_9) ? (var_1_60 == ((signed short int) (var_1_3 - var_1_102))) : 1) : 1)) && ((var_1_70 > ((9.125704234512259E18f - var_1_42) - var_1_40)) ? ((var_1_55 || var_1_50) ? (var_1_61 == ((signed long int) (max ((max (var_1_62 , var_1_86)) , ((min (var_1_31 , var_1_33)) - (var_1_63 - var_1_71)))))) : ((var_1_31 < var_1_63) ? (var_1_61 == ((signed long int) ((abs (var_1_33 - var_1_71)) - ((min (var_1_63 , var_1_64)) - var_1_13)))) : 1)) : (var_1_61 == ((signed long int) (min ((var_1_30 - 1) , (var_1_31 + var_1_46))))))) && ((-5 < var_1_64) ? (var_1_65 == ((unsigned char) (200 - var_1_29))) : ((var_1_9 <= var_1_86) ? (var_1_65 == ((unsigned char) (abs (var_1_52)))) : (var_1_65 == ((unsigned char) (max (var_1_29 , var_1_14))))))) && (((var_1_30 != var_1_53) || ((var_1_94 <= var_1_23) || var_1_6)) ? (var_1_66 == ((signed long int) (var_1_52 + (var_1_31 - var_1_53)))) : 1)) && ((var_1_14 < 2) ? ((var_1_95 <= var_1_86) ? ((var_1_46 == var_1_24) ? (var_1_67 == ((signed char) (var_1_49 + (min ((max (var_1_53 , var_1_30)) , (var_1_68 - var_1_69)))))) : 1) : (var_1_67 == ((signed char) var_1_69))) : 1)) && ((var_1_96 > (- var_1_39)) ? (var_1_70 == ((float) (min ((var_1_37 - var_1_40) , var_1_42)))) : 1)) && ((var_1_5 && var_1_6) ? ((var_1_9 < (var_1_18 * (var_1_13 ^ var_1_93))) ? (var_1_71 == ((signed long int) var_1_69)) : 1) : (var_1_71 == ((signed long int) (min (var_1_30 , var_1_9)))))) && ((var_1_9 > var_1_32) ? ((var_1_9 <= var_1_29) ? (var_1_72 == ((signed long int) (var_1_46 + var_1_32))) : (var_1_72 == ((signed long int) (var_1_45 - var_1_29)))) : ((var_1_69 > (var_1_98 / var_1_59)) ? (var_1_72 == ((signed long int) ((var_1_46 + (max (var_1_32 , var_1_14))) - 64))) : (var_1_72 == ((signed long int) (abs (var_1_33))))))) && (((min (-0.625f , (var_1_80 / 4.6f))) < (var_1_80 * (var_1_37 / 15.5f))) ? ((var_1_72 <= var_1_60) ? (((var_1_69 - var_1_14) != var_1_52) ? (var_1_73 == ((signed short int) (max ((var_1_69 + last_1_var_1_73) , var_1_53)))) : (var_1_73 == ((signed short int) (last_1_var_1_73 - (var_1_33 - var_1_45))))) : (((var_1_52 / var_1_26) <= var_1_66) ? (var_1_5 ? (var_1_73 == ((signed short int) ((var_1_33 - var_1_68) - ((var_1_34 - var_1_26) + (var_1_32 - 32))))) : (var_1_73 == ((signed short int) ((last_1_var_1_73 + (10 + 2)) + (64 - var_1_30))))) : (var_1_73 == ((signed short int) -256)))) : ((var_1_28 <= (var_1_46 + 100)) ? (var_1_73 == ((signed short int) (last_1_var_1_73 - var_1_69))) : 1))) && ((1000000000 <= var_1_2) ? ((var_1_50 && var_1_5) ? (var_1_74 == ((signed char) (((var_1_75 + var_1_76) + var_1_77) + (max (var_1_68 , (min (var_1_69 , var_1_53))))))) : (var_1_74 == ((signed char) (var_1_77 + var_1_53)))) : 1)) && (var_1_78 == ((signed char) (((var_1_30 - var_1_79) + (max (var_1_77 , var_1_76))) + (var_1_53 - var_1_69))))) && (((abs (var_1_104)) > last_1_var_1_80) ? ((var_1_25 || var_1_4) ? (var_1_80 == ((double) (abs ((max (var_1_38 , var_1_42)) - 255.2)))) : (var_1_80 == ((double) (max (var_1_37 , var_1_41))))) : 1)) && ((var_1_32 < var_1_98) ? ((var_1_33 <= (var_1_91 + (var_1_53 >> var_1_82))) ? (var_1_81 == ((double) (4.4 + var_1_39))) : (((- (max (last_1_var_1_81 , var_1_41))) > var_1_70) ? ((var_1_86 > var_1_69) ? (var_1_81 == ((double) (var_1_42 - (var_1_83 - (var_1_39 + var_1_38))))) : 1) : ((var_1_7 && (var_1_11 > var_1_95)) ? (var_1_81 == ((double) (max (var_1_40 , (var_1_83 - var_1_42))))) : (var_1_81 == ((double) (var_1_37 - 2.95)))))) : (var_1_81 == ((double) (var_1_42 + var_1_84))))) && ((var_1_15 > var_1_72) ? (var_1_85 == ((unsigned char) 128)) : (var_1_25 ? (((var_1_98 * var_1_75) < ((var_1_79 - var_1_64) / var_1_26)) ? (var_1_85 == ((unsigned char) var_1_52)) : (var_1_85 == ((unsigned char) (abs (var_1_2))))) : 1))) && (((var_1_84 * var_1_101) > var_1_23) ? (var_1_86 == ((unsigned long int) ((var_1_63 + (var_1_87 - var_1_88)) - (var_1_2 + var_1_69)))) : (((last_1_var_1_86 ^ (100 / var_1_82)) == var_1_79) ? (var_1_86 == ((unsigned long int) var_1_30)) : (var_1_86 == ((unsigned long int) ((min ((var_1_64 + var_1_87) , (var_1_16 - var_1_45))) - var_1_34)))))) && (var_1_89 == ((double) (var_1_84 + (var_1_42 - (var_1_90 - var_1_39)))))) && ((var_1_25 && var_1_5) ? (var_1_91 == ((signed char) (var_1_53 - var_1_79))) : 1)) && ((var_1_36 == var_1_37) ? (var_1_92 == ((float) var_1_90)) : 1)) && (var_1_93 == ((signed short int) var_1_29))) && (var_1_55 ? (var_1_94 == ((double) var_1_37)) : (var_1_94 == ((double) var_1_90)))) && (var_1_55 ? (var_1_95 == ((signed long int) var_1_9)) : (var_1_95 == ((signed long int) var_1_31)))) && (var_1_96 == ((double) var_1_37))) && (var_1_4 ? (var_1_97 == ((signed char) var_1_76)) : 1)) && (var_1_98 == ((unsigned long int) var_1_3))) && (var_1_7 ? (var_1_99 == ((unsigned char) var_1_79)) : 1)) && (var_1_8 ? (var_1_100 == ((unsigned short int) var_1_82)) : (var_1_100 == ((unsigned short int) 64)))) && (var_1_27 ? (var_1_101 == ((double) var_1_40)) : (var_1_101 == ((double) 9.999999999999975E13)))) && (var_1_102 == ((unsigned char) var_1_2))) && (var_1_50 ? (var_1_103 == ((signed short int) var_1_86)) : (var_1_103 == ((signed short int) var_1_13)))) && (((var_1_60 ^ (max (var_1_100 , var_1_69))) == var_1_72) ? ((var_1_18 <= var_1_53) ? (var_1_50 ? (var_1_104 == ((double) (var_1_90 + var_1_42))) : 1) : 1) : (var_1_104 == ((double) var_1_39)))
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
