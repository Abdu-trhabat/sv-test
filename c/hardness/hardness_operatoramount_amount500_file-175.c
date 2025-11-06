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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch175Amount500.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 256;
signed long int var_1_2 = 10000;
signed long int var_1_3 = 2;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 0;
unsigned short int var_1_8 = 10000;
unsigned short int var_1_9 = 25;
unsigned short int var_1_10 = 56544;
unsigned short int var_1_11 = 56875;
signed long int var_1_12 = -16;
unsigned char var_1_16 = 0;
signed char var_1_17 = 10;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
double var_1_22 = 256.125;
double var_1_23 = 127.7;
double var_1_24 = 200.65;
unsigned char var_1_25 = 1;
signed char var_1_27 = 8;
signed char var_1_28 = 16;
signed char var_1_29 = -2;
signed char var_1_30 = 50;
signed char var_1_31 = 10;
signed char var_1_32 = 5;
signed long int var_1_33 = 50;
signed char var_1_34 = 4;
signed char var_1_35 = 8;
signed char var_1_36 = -128;
signed char var_1_37 = 0;
signed char var_1_38 = 10;
signed short int var_1_39 = 256;
unsigned long int var_1_40 = 4243214697;
unsigned char var_1_41 = 0;
unsigned char var_1_43 = 128;
signed long int var_1_44 = 2;
signed char var_1_46 = 64;
unsigned char var_1_47 = 100;
unsigned char var_1_48 = 64;
unsigned char var_1_49 = 5;
unsigned short int var_1_50 = 64;
double var_1_51 = 99.75;
double var_1_52 = 4.25;
unsigned long int var_1_53 = 32;
signed short int var_1_54 = 64;
signed short int var_1_55 = 30503;
signed char var_1_56 = 2;
signed long int var_1_57 = -16;
signed long int var_1_58 = 1000000000;
float var_1_59 = 7.3;
unsigned short int var_1_60 = 2;
unsigned short int var_1_61 = 2;
signed short int var_1_62 = 0;
signed short int var_1_63 = 0;
float var_1_64 = 4.6;
float var_1_65 = 49.2;
signed long int var_1_66 = 2;
unsigned long int var_1_67 = 2;
unsigned long int var_1_68 = 3936832392;
unsigned short int var_1_69 = 50;
signed char var_1_70 = -100;
signed long int var_1_71 = 32;
signed long int var_1_72 = 128;
unsigned char var_1_73 = 1;
unsigned char var_1_74 = 0;
float var_1_75 = 1.2;
float var_1_76 = 9999999999999.6;
float var_1_77 = 5.8;
float var_1_78 = 9.575;
double var_1_79 = 128.75;
signed short int var_1_80 = 256;
double var_1_82 = 127.75;
signed char var_1_83 = 8;
float var_1_84 = 9.4;
float var_1_85 = 256.75;
float var_1_86 = 0.0;
float var_1_87 = 64.75;
signed long int var_1_88 = 5;
unsigned short int var_1_90 = 5;
unsigned short int var_1_91 = 64;
signed char var_1_92 = -50;
unsigned char var_1_93 = 1;
unsigned char var_1_94 = 1;
unsigned char var_1_95 = 25;
signed char var_1_96 = -16;
signed char var_1_97 = 1;
unsigned char var_1_98 = 0;
double var_1_99 = 10000.5;
double var_1_100 = 7.25;
signed long int var_1_101 = -2;
unsigned short int var_1_102 = 25;
signed char var_1_103 = -10;
float var_1_104 = 9.2;
unsigned short int var_1_105 = 25;
unsigned char var_1_106 = 8;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_16 = 0;
unsigned char last_1_var_1_21 = 0;
unsigned char last_1_var_1_25 = 1;
signed short int last_1_var_1_39 = 256;
unsigned char last_1_var_1_41 = 0;
signed long int last_1_var_1_44 = 2;
unsigned short int last_1_var_1_50 = 64;
double last_1_var_1_52 = 4.25;
unsigned long int last_1_var_1_67 = 2;
double last_1_var_1_79 = 128.75;
signed long int last_1_var_1_88 = 5;
unsigned char last_1_var_1_93 = 1;
signed char last_1_var_1_96 = -16;
signed long int last_1_var_1_101 = -2;
unsigned short int last_1_var_1_102 = 25;
unsigned char last_1_var_1_106 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req24Batch175Amount500
	unsigned char stepLocal_21 = var_1_6;
	if (stepLocal_21 > last_1_var_1_67) {
		if (last_1_var_1_25) {
			var_1_69 = (max (var_1_38 , var_1_8));
		} else {
			var_1_69 = var_1_55;
		}
	} else {
		var_1_69 = (max (var_1_32 , last_1_var_1_41));
	}


	// From: Req20Batch175Amount500
	if (last_1_var_1_44 != (abs (var_1_48))) {
		if (var_1_31 <= var_1_33) {
			var_1_57 = (max (var_1_29 , var_1_31));
		} else {
			if (last_1_var_1_16) {
				if ((last_1_var_1_44 ^ var_1_6) <= (var_1_17 + (var_1_34 * last_1_var_1_106))) {
					var_1_57 = ((min (var_1_9 , var_1_34)) + var_1_48);
				} else {
					if (-10 == (min (var_1_8 , last_1_var_1_101))) {
						var_1_57 = (min (var_1_8 , (10 - var_1_43)));
					}
				}
			} else {
				var_1_57 = last_1_var_1_88;
			}
		}
	} else {
		var_1_57 = (((var_1_58 - var_1_38) - var_1_8) + (abs (max (-4 , var_1_35))));
	}


	// From: Req4Batch175Amount500
	if ((var_1_5 - (max (var_1_6 , var_1_8))) >= (var_1_9 - var_1_57)) {
		var_1_21 = (! var_1_19);
	} else {
		var_1_21 = (! var_1_20);
	}


	// From: Req41Batch175Amount500
	if (var_1_21) {
		var_1_98 = var_1_20;
	}


	// From: Req15Batch175Amount500
	if (last_1_var_1_44 != (var_1_34 | last_1_var_1_50)) {
		if (var_1_24 > ((last_1_var_1_79 * last_1_var_1_52) / var_1_51)) {
			var_1_50 = last_1_var_1_50;
		} else {
			var_1_50 = var_1_38;
		}
	} else {
		var_1_50 = (min (1 , (min ((min (var_1_10 , var_1_48)) , 32))));
	}


	// From: Req2Batch175Amount500
	unsigned char stepLocal_2 = last_1_var_1_25 && last_1_var_1_93;
	if (last_1_var_1_25 && stepLocal_2) {
		var_1_12 = (max ((var_1_5 + last_1_var_1_102) , (max (var_1_8 , (var_1_10 - var_1_11)))));
	} else {
		var_1_12 = (min (last_1_var_1_102 , (abs (var_1_8))));
	}


	// From: Req44Batch175Amount500
	if (var_1_19) {
		var_1_101 = last_1_var_1_96;
	} else {
		var_1_101 = last_1_var_1_44;
	}


	// From: Req6Batch175Amount500
	signed long int stepLocal_9 = - var_1_2;
	signed long int stepLocal_8 = var_1_3;
	if (((var_1_10 + var_1_6) * var_1_11) <= stepLocal_8) {
		var_1_25 = (last_1_var_1_25 && var_1_20);
	} else {
		if (last_1_var_1_101 != stepLocal_9) {
			var_1_25 = ((last_1_var_1_21 || var_1_20) && (! var_1_18));
		} else {
			var_1_25 = var_1_20;
		}
	}


	// From: Req5Batch175Amount500
	if (var_1_3 == var_1_17) {
		if (var_1_10 > (var_1_11 - var_1_6)) {
			var_1_22 = (max (var_1_23 , var_1_24));
		}
	}


	// From: Req7Batch175Amount500
	if (var_1_19) {
		var_1_27 = var_1_28;
	} else {
		var_1_27 = (abs (var_1_29));
	}


	// From: Req13Batch175Amount500
	signed char stepLocal_17 = var_1_38;
	if (! (! var_1_98)) {
		if (var_1_40 <= stepLocal_17) {
			var_1_46 = (abs (var_1_37 + var_1_35));
		}
	} else {
		var_1_46 = (var_1_38 + var_1_34);
	}


	// From: Req17Batch175Amount500
	var_1_53 = var_1_37;


	// From: Req27Batch175Amount500
	if (var_1_53 > var_1_10) {
		var_1_72 = (var_1_9 - (abs (var_1_69)));
	} else {
		var_1_72 = (var_1_63 + (max (var_1_61 , var_1_5)));
	}


	// From: Req29Batch175Amount500
	signed long int stepLocal_26 = -5;
	unsigned char stepLocal_25 = var_1_19;
	if (stepLocal_25 && ((min (var_1_101 , var_1_17)) >= var_1_32)) {
		if ((var_1_72 & 2) > stepLocal_26) {
			var_1_75 = (10.5f + var_1_64);
		} else {
			var_1_75 = (var_1_64 + 128.5f);
		}
	} else {
		var_1_75 = ((min (var_1_65 , var_1_64)) + (var_1_76 + (min (var_1_77 , var_1_78))));
	}


	// From: Req30Batch175Amount500
	unsigned short int stepLocal_27 = var_1_10;
	if (var_1_53 == stepLocal_27) {
		var_1_79 = var_1_65;
	} else {
		var_1_79 = (max ((var_1_78 + var_1_64) , var_1_65));
	}


	// From: Req32Batch175Amount500
	if (var_1_28 != ((var_1_63 - var_1_83) * -5)) {
		var_1_82 = ((abs (min (var_1_65 , 32.5))) + (min (var_1_76 , (var_1_77 + var_1_78))));
	} else {
		var_1_82 = (max (var_1_76 , var_1_77));
	}


	// From: Req33Batch175Amount500
	if (! (-64 >= var_1_49)) {
		var_1_84 = (max (var_1_77 , var_1_64));
	} else {
		if (var_1_65 < var_1_22) {
			var_1_84 = (min ((max (var_1_23 , var_1_64)) , (var_1_85 - (var_1_86 - var_1_87))));
		}
	}


	// From: Req36Batch175Amount500
	unsigned char stepLocal_34 = var_1_6;
	signed long int stepLocal_33 = var_1_5 + -10;
	if ((8 * var_1_11) <= stepLocal_34) {
		if (var_1_53 >= stepLocal_33) {
			var_1_92 = (max ((var_1_31 - (min (var_1_37 , var_1_61))) , (var_1_63 - var_1_62)));
		}
	} else {
		var_1_92 = (((var_1_63 - var_1_60) + var_1_61) + var_1_37);
	}


	// From: Req37Batch175Amount500
	unsigned char stepLocal_35 = var_1_48;
	if (var_1_28 >= stepLocal_35) {
		var_1_93 = var_1_94;
	} else {
		var_1_93 = var_1_20;
	}


	// From: Req38Batch175Amount500
	var_1_95 = var_1_83;


	// From: Req39Batch175Amount500
	if (var_1_74) {
		var_1_96 = var_1_37;
	} else {
		var_1_96 = var_1_63;
	}


	// From: Req40Batch175Amount500
	var_1_97 = var_1_63;


	// From: Req42Batch175Amount500
	var_1_99 = var_1_24;


	// From: Req43Batch175Amount500
	if (var_1_74) {
		var_1_100 = 4.5;
	} else {
		var_1_100 = var_1_85;
	}


	// From: Req46Batch175Amount500
	if (var_1_25) {
		var_1_103 = var_1_32;
	} else {
		var_1_103 = var_1_63;
	}


	// From: Req47Batch175Amount500
	if (var_1_20) {
		var_1_104 = var_1_64;
	} else {
		var_1_104 = var_1_65;
	}


	// From: Req48Batch175Amount500
	var_1_105 = var_1_8;


	// From: Req31Batch175Amount500
	signed long int stepLocal_29 = var_1_55 * var_1_101;
	unsigned long int stepLocal_28 = var_1_53;
	if (stepLocal_29 >= (var_1_32 / var_1_11)) {
		if (stepLocal_28 <= var_1_57) {
			var_1_80 = (var_1_43 - 64);
		}
	}


	// From: Req22Batch175Amount500
	if (var_1_53 > (min (var_1_53 , var_1_3))) {
		if (var_1_32 >= 32) {
			var_1_66 = var_1_63;
		}
	} else {
		var_1_66 = (var_1_49 + (abs (var_1_50)));
	}


	// From: Req26Batch175Amount500
	signed long int stepLocal_24 = var_1_55 - var_1_10;
	unsigned long int stepLocal_23 = var_1_68 + var_1_5;
	if (stepLocal_23 < (var_1_101 * var_1_61)) {
		if ((var_1_49 + var_1_11) != stepLocal_24) {
			var_1_71 = (var_1_12 + (abs (var_1_32 + var_1_6)));
		}
	} else {
		var_1_71 = (min (var_1_37 , var_1_6));
	}


	// From: Req11Batch175Amount500
	if (var_1_93 || var_1_25) {
		var_1_41 = var_1_38;
	} else {
		if (((var_1_10 / var_1_17) | var_1_11) <= (var_1_28 / -256)) {
			var_1_41 = ((min (200 , var_1_43)) - 5);
		}
	}


	// From: Req9Batch175Amount500
	unsigned short int stepLocal_13 = var_1_8;
	if ((max (var_1_99 , var_1_24)) >= (64.4 + (abs (var_1_23)))) {
		if (var_1_50 <= stepLocal_13) {
			var_1_36 = ((var_1_37 - var_1_38) + var_1_34);
		} else {
			var_1_36 = (-2 + -32);
		}
	} else {
		var_1_36 = ((abs (var_1_38 - var_1_31)) - var_1_32);
	}


	// From: Req16Batch175Amount500
	if ((var_1_24 * var_1_82) >= var_1_51) {
		var_1_52 = var_1_24;
	}


	// From: Req19Batch175Amount500
	if (var_1_23 < (var_1_99 * (var_1_79 + 255.9))) {
		if (var_1_98) {
			var_1_56 = (var_1_35 + var_1_37);
		} else {
			var_1_56 = (min (var_1_28 , var_1_49));
		}
	}


	// From: Req3Batch175Amount500
	unsigned short int stepLocal_7 = var_1_9;
	unsigned short int stepLocal_6 = var_1_10;
	unsigned char stepLocal_5 = var_1_18;
	unsigned long int stepLocal_4 = var_1_53 + (var_1_10 + var_1_12);
	unsigned short int stepLocal_3 = var_1_9;
	if (var_1_3 >= stepLocal_6) {
		if ((var_1_5 - var_1_8) > stepLocal_4) {
			var_1_16 = (((var_1_8 / var_1_17) < var_1_12) || (var_1_18 && var_1_19));
		} else {
			if ((var_1_50 * var_1_71) > stepLocal_7) {
				var_1_16 = (var_1_18 && var_1_19);
			}
		}
	} else {
		if (stepLocal_3 > var_1_10) {
			var_1_16 = (var_1_19 && (! (var_1_25 && var_1_20)));
		} else {
			if ((var_1_11 >= var_1_8) || stepLocal_5) {
				var_1_16 = var_1_20;
			} else {
				var_1_16 = var_1_18;
			}
		}
	}


	// From: Req28Batch175Amount500
	if (var_1_51 >= var_1_24) {
		var_1_73 = (var_1_18 || (var_1_19 && var_1_74));
	} else {
		if ((var_1_65 + var_1_64) != var_1_99) {
			var_1_73 = var_1_20;
		} else {
			var_1_73 = ((! var_1_16) || var_1_74);
		}
	}


	// From: Req8Batch175Amount500
	signed long int stepLocal_12 = var_1_6 / var_1_11;
	signed long int stepLocal_11 = 100;
	signed long int stepLocal_10 = var_1_57 - var_1_50;
	if ((var_1_17 ^ var_1_29) >= stepLocal_10) {
		var_1_30 = (abs (var_1_31 - var_1_32));
	} else {
		if ((10 + var_1_12) > stepLocal_12) {
			if (var_1_73) {
				var_1_30 = (64 - 2);
			} else {
				if (stepLocal_11 <= (min ((var_1_33 * var_1_10) , var_1_29))) {
					var_1_30 = (var_1_34 + var_1_35);
				} else {
					var_1_30 = (min (var_1_35 , var_1_31));
				}
			}
		}
	}


	// From: Req49Batch175Amount500
	signed char stepLocal_38 = var_1_37;
	unsigned char stepLocal_37 = var_1_73;
	signed long int stepLocal_36 = 50;
	if (stepLocal_37 || var_1_74) {
		if (var_1_50 <= stepLocal_38) {
			if ((var_1_69 * var_1_33) > stepLocal_36) {
				var_1_106 = var_1_83;
			} else {
				var_1_106 = var_1_62;
			}
		} else {
			var_1_106 = var_1_43;
		}
	} else {
		var_1_106 = var_1_61;
	}


	// From: Req34Batch175Amount500
	unsigned char stepLocal_31 = var_1_73;
	signed long int stepLocal_30 = -2;
	if ((var_1_52 == (var_1_99 / var_1_86)) || stepLocal_31) {
		if ((max (var_1_61 , 2)) >= stepLocal_30) {
			if (! var_1_93) {
				var_1_88 = (max (var_1_37 , var_1_53));
			} else {
				var_1_88 = (var_1_43 - var_1_37);
			}
		}
	} else {
		var_1_88 = (min (var_1_43 , (max ((var_1_58 - var_1_6) , var_1_31))));
	}


	// From: Req35Batch175Amount500
	unsigned char stepLocal_32 = var_1_93;
	if (var_1_25) {
		if (var_1_98) {
			if ((max (var_1_99 , var_1_86)) > (- (max (var_1_24 , var_1_77)))) {
				var_1_90 = (abs (var_1_83));
			}
		} else {
			if (stepLocal_32 || (var_1_88 > var_1_57)) {
				var_1_90 = (var_1_71 + var_1_8);
			} else {
				var_1_90 = (min (500 , (var_1_91 + (min (var_1_61 , var_1_31)))));
			}
		}
	} else {
		var_1_90 = (var_1_37 + var_1_55);
	}


	// From: Req12Batch175Amount500
	if (((- var_1_23) + (var_1_24 + var_1_99)) < var_1_82) {
		if (var_1_20) {
			var_1_44 = (min ((min ((var_1_90 + var_1_6) , (min (var_1_43 , var_1_29)))) , (min (var_1_28 , (var_1_90 + var_1_80)))));
		} else {
			var_1_44 = (var_1_5 + var_1_80);
		}
	} else {
		var_1_44 = (max (var_1_80 , var_1_17));
	}


	// From: Req21Batch175Amount500
	signed long int stepLocal_20 = var_1_5 >> (var_1_60 + var_1_61);
	signed long int stepLocal_19 = var_1_37 << (var_1_62 + var_1_63);
	if (stepLocal_20 < var_1_6) {
		var_1_59 = var_1_24;
	} else {
		if (var_1_90 != stepLocal_19) {
			var_1_59 = (var_1_64 + var_1_65);
		}
	}


	// From: Req10Batch175Amount500
	signed long int stepLocal_16 = var_1_2 * (var_1_12 + var_1_33);
	signed long int stepLocal_15 = var_1_33;
	signed long int stepLocal_14 = var_1_10 ^ (var_1_6 - var_1_37);
	if (stepLocal_14 < var_1_66) {
		if (var_1_6 > stepLocal_16) {
			if (stepLocal_15 > var_1_90) {
				var_1_39 = (var_1_29 + last_1_var_1_39);
			}
		}
	} else {
		if (var_1_100 > var_1_24) {
			var_1_39 = (var_1_37 - var_1_32);
		} else {
			if (var_1_20) {
				var_1_39 = var_1_38;
			} else {
				var_1_39 = var_1_69;
			}
		}
	}


	// From: Req18Batch175Amount500
	unsigned long int stepLocal_18 = var_1_53;
	if ((- var_1_82) > var_1_99) {
		var_1_54 = ((var_1_88 + var_1_32) + var_1_39);
	} else {
		if (stepLocal_18 == (8 - var_1_5)) {
			var_1_54 = (var_1_31 - var_1_32);
		} else {
			var_1_54 = (((var_1_55 - var_1_5) - var_1_6) - var_1_37);
		}
	}


	// From: Req23Batch175Amount500
	if (last_1_var_1_67 >= (min ((var_1_54 * var_1_31) , var_1_62))) {
		if ((50.4f * var_1_99) <= var_1_64) {
			var_1_67 = (var_1_68 - var_1_33);
		} else {
			var_1_67 = var_1_5;
		}
	} else {
		if (var_1_23 >= var_1_65) {
			var_1_67 = (max (last_1_var_1_67 , var_1_6));
		} else {
			var_1_67 = (min (var_1_61 , (abs (var_1_48 + var_1_60))));
		}
	}


	// From: Req45Batch175Amount500
	if (var_1_93) {
		var_1_102 = var_1_39;
	}


	// From: Req1Batch175Amount500
	unsigned long int stepLocal_1 = var_1_12 * var_1_67;
	signed long int stepLocal_0 = var_1_2 - var_1_3;
	if (stepLocal_0 <= var_1_67) {
		if ((var_1_5 - var_1_6) != stepLocal_1) {
			var_1_1 = (min (((max (var_1_6 , var_1_5)) + (max (var_1_8 , 256))) , var_1_9));
		} else {
			var_1_1 = ((max (var_1_10 , (var_1_11 - var_1_6))) - (max (var_1_8 , var_1_5)));
		}
	}


	// From: Req14Batch175Amount500
	if (var_1_102 > (var_1_40 / (max (var_1_17 , 25)))) {
		if (var_1_37 >= -128) {
			var_1_47 = (max ((var_1_32 + var_1_6) , ((var_1_48 - var_1_49) + (max (var_1_37 , var_1_38)))));
		}
	}


	// From: Req25Batch175Amount500
	signed short int stepLocal_22 = var_1_63;
	if (stepLocal_22 > (min ((var_1_88 + var_1_44) , var_1_102))) {
		var_1_70 = var_1_60;
	} else {
		var_1_70 = (max (((max (var_1_61 , var_1_37)) + var_1_63) , var_1_60));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 127);
	assume_abort_if_not(var_1_5 <= 255);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 49150);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -128);
	assume_abort_if_not(var_1_17 <= 127);
	assume_abort_if_not(var_1_17 != 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -127);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -126);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -63);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -63);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967295);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 127);
	assume_abort_if_not(var_1_43 <= 254);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 63);
	assume_abort_if_not(var_1_48 <= 127);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 63);
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
	assume_abort_if_not(var_1_51 != 0.0F);
	var_1_55 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_55 >= 24574);
	assume_abort_if_not(var_1_55 <= 32766);
	var_1_58 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_58 >= 536870911);
	assume_abort_if_not(var_1_58 <= 1073741823);
	var_1_60 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 4);
	var_1_61 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_61 >= 1);
	assume_abort_if_not(var_1_61 <= 3);
	var_1_62 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 1);
	var_1_63 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 0);
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= -461168.6018427383000e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427383000e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= -461168.6018427383000e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 4611686.018427383000e+12F && var_1_65 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_68 >= 2147483647);
	assume_abort_if_not(var_1_68 <= 4294967294);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 1);
	assume_abort_if_not(var_1_74 <= 1);
	var_1_76 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_76 >= -230584.3009213691400e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 2305843.009213691400e+12F && var_1_76 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_77 >= -230584.3009213691400e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 2305843.009213691400e+12F && var_1_77 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= -230584.3009213691400e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 2305843.009213691400e+12F && var_1_78 >= 1.0e-20F ));
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 127);
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 9223372.036854766000e+12F && var_1_85 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_86 >= 4611686.018427383000e+12F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 9223372.036854766000e+12F && var_1_86 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_87 >= 0.0F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 4611686.018427383000e+12F && var_1_87 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 32767);
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 1);
	assume_abort_if_not(var_1_94 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_106 = var_1_106;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((var_1_2 - var_1_3) <= var_1_67) ? (((var_1_5 - var_1_6) != (var_1_12 * var_1_67)) ? (var_1_1 == ((unsigned short int) (min (((max (var_1_6 , var_1_5)) + (max (var_1_8 , 256))) , var_1_9)))) : (var_1_1 == ((unsigned short int) ((max (var_1_10 , (var_1_11 - var_1_6))) - (max (var_1_8 , var_1_5)))))) : 1) && ((last_1_var_1_25 && (last_1_var_1_25 && last_1_var_1_93)) ? (var_1_12 == ((signed long int) (max ((var_1_5 + last_1_var_1_102) , (max (var_1_8 , (var_1_10 - var_1_11))))))) : (var_1_12 == ((signed long int) (min (last_1_var_1_102 , (abs (var_1_8)))))))) && ((var_1_3 >= var_1_10) ? (((var_1_5 - var_1_8) > (var_1_53 + (var_1_10 + var_1_12))) ? (var_1_16 == ((unsigned char) (((var_1_8 / var_1_17) < var_1_12) || (var_1_18 && var_1_19)))) : (((var_1_50 * var_1_71) > var_1_9) ? (var_1_16 == ((unsigned char) (var_1_18 && var_1_19))) : 1)) : ((var_1_9 > var_1_10) ? (var_1_16 == ((unsigned char) (var_1_19 && (! (var_1_25 && var_1_20))))) : (((var_1_11 >= var_1_8) || var_1_18) ? (var_1_16 == ((unsigned char) var_1_20)) : (var_1_16 == ((unsigned char) var_1_18)))))) && (((var_1_5 - (max (var_1_6 , var_1_8))) >= (var_1_9 - var_1_57)) ? (var_1_21 == ((unsigned char) (! var_1_19))) : (var_1_21 == ((unsigned char) (! var_1_20))))) && ((var_1_3 == var_1_17) ? ((var_1_10 > (var_1_11 - var_1_6)) ? (var_1_22 == ((double) (max (var_1_23 , var_1_24)))) : 1) : 1)) && ((((var_1_10 + var_1_6) * var_1_11) <= var_1_3) ? (var_1_25 == ((unsigned char) (last_1_var_1_25 && var_1_20))) : ((last_1_var_1_101 != (- var_1_2)) ? (var_1_25 == ((unsigned char) ((last_1_var_1_21 || var_1_20) && (! var_1_18)))) : (var_1_25 == ((unsigned char) var_1_20))))) && (var_1_19 ? (var_1_27 == ((signed char) var_1_28)) : (var_1_27 == ((signed char) (abs (var_1_29)))))) && (((var_1_17 ^ var_1_29) >= (var_1_57 - var_1_50)) ? (var_1_30 == ((signed char) (abs (var_1_31 - var_1_32)))) : (((10 + var_1_12) > (var_1_6 / var_1_11)) ? (var_1_73 ? (var_1_30 == ((signed char) (64 - 2))) : ((100 <= (min ((var_1_33 * var_1_10) , var_1_29))) ? (var_1_30 == ((signed char) (var_1_34 + var_1_35))) : (var_1_30 == ((signed char) (min (var_1_35 , var_1_31)))))) : 1))) && (((max (var_1_99 , var_1_24)) >= (64.4 + (abs (var_1_23)))) ? ((var_1_50 <= var_1_8) ? (var_1_36 == ((signed char) ((var_1_37 - var_1_38) + var_1_34))) : (var_1_36 == ((signed char) (-2 + -32)))) : (var_1_36 == ((signed char) ((abs (var_1_38 - var_1_31)) - var_1_32))))) && (((var_1_10 ^ (var_1_6 - var_1_37)) < var_1_66) ? ((var_1_6 > (var_1_2 * (var_1_12 + var_1_33))) ? ((var_1_33 > var_1_90) ? (var_1_39 == ((signed short int) (var_1_29 + last_1_var_1_39))) : 1) : 1) : ((var_1_100 > var_1_24) ? (var_1_39 == ((signed short int) (var_1_37 - var_1_32))) : (var_1_20 ? (var_1_39 == ((signed short int) var_1_38)) : (var_1_39 == ((signed short int) var_1_69)))))) && ((var_1_93 || var_1_25) ? (var_1_41 == ((unsigned char) var_1_38)) : ((((var_1_10 / var_1_17) | var_1_11) <= (var_1_28 / -256)) ? (var_1_41 == ((unsigned char) ((min (200 , var_1_43)) - 5))) : 1))) && ((((- var_1_23) + (var_1_24 + var_1_99)) < var_1_82) ? (var_1_20 ? (var_1_44 == ((signed long int) (min ((min ((var_1_90 + var_1_6) , (min (var_1_43 , var_1_29)))) , (min (var_1_28 , (var_1_90 + var_1_80))))))) : (var_1_44 == ((signed long int) (var_1_5 + var_1_80)))) : (var_1_44 == ((signed long int) (max (var_1_80 , var_1_17)))))) && ((! (! var_1_98)) ? ((var_1_40 <= var_1_38) ? (var_1_46 == ((signed char) (abs (var_1_37 + var_1_35)))) : 1) : (var_1_46 == ((signed char) (var_1_38 + var_1_34))))) && ((var_1_102 > (var_1_40 / (max (var_1_17 , 25)))) ? ((var_1_37 >= -128) ? (var_1_47 == ((unsigned char) (max ((var_1_32 + var_1_6) , ((var_1_48 - var_1_49) + (max (var_1_37 , var_1_38))))))) : 1) : 1)) && ((last_1_var_1_44 != (var_1_34 | last_1_var_1_50)) ? ((var_1_24 > ((last_1_var_1_79 * last_1_var_1_52) / var_1_51)) ? (var_1_50 == ((unsigned short int) last_1_var_1_50)) : (var_1_50 == ((unsigned short int) var_1_38))) : (var_1_50 == ((unsigned short int) (min (1 , (min ((min (var_1_10 , var_1_48)) , 32)))))))) && (((var_1_24 * var_1_82) >= var_1_51) ? (var_1_52 == ((double) var_1_24)) : 1)) && (var_1_53 == ((unsigned long int) var_1_37))) && (((- var_1_82) > var_1_99) ? (var_1_54 == ((signed short int) ((var_1_88 + var_1_32) + var_1_39))) : ((var_1_53 == (8 - var_1_5)) ? (var_1_54 == ((signed short int) (var_1_31 - var_1_32))) : (var_1_54 == ((signed short int) (((var_1_55 - var_1_5) - var_1_6) - var_1_37)))))) && ((var_1_23 < (var_1_99 * (var_1_79 + 255.9))) ? (var_1_98 ? (var_1_56 == ((signed char) (var_1_35 + var_1_37))) : (var_1_56 == ((signed char) (min (var_1_28 , var_1_49))))) : 1)) && ((last_1_var_1_44 != (abs (var_1_48))) ? ((var_1_31 <= var_1_33) ? (var_1_57 == ((signed long int) (max (var_1_29 , var_1_31)))) : (last_1_var_1_16 ? (((last_1_var_1_44 ^ var_1_6) <= (var_1_17 + (var_1_34 * last_1_var_1_106))) ? (var_1_57 == ((signed long int) ((min (var_1_9 , var_1_34)) + var_1_48))) : ((-10 == (min (var_1_8 , last_1_var_1_101))) ? (var_1_57 == ((signed long int) (min (var_1_8 , (10 - var_1_43))))) : 1)) : (var_1_57 == ((signed long int) last_1_var_1_88)))) : (var_1_57 == ((signed long int) (((var_1_58 - var_1_38) - var_1_8) + (abs (max (-4 , var_1_35)))))))) && (((var_1_5 >> (var_1_60 + var_1_61)) < var_1_6) ? (var_1_59 == ((float) var_1_24)) : ((var_1_90 != (var_1_37 << (var_1_62 + var_1_63))) ? (var_1_59 == ((float) (var_1_64 + var_1_65))) : 1))) && ((var_1_53 > (min (var_1_53 , var_1_3))) ? ((var_1_32 >= 32) ? (var_1_66 == ((signed long int) var_1_63)) : 1) : (var_1_66 == ((signed long int) (var_1_49 + (abs (var_1_50))))))) && ((last_1_var_1_67 >= (min ((var_1_54 * var_1_31) , var_1_62))) ? (((50.4f * var_1_99) <= var_1_64) ? (var_1_67 == ((unsigned long int) (var_1_68 - var_1_33))) : (var_1_67 == ((unsigned long int) var_1_5))) : ((var_1_23 >= var_1_65) ? (var_1_67 == ((unsigned long int) (max (last_1_var_1_67 , var_1_6)))) : (var_1_67 == ((unsigned long int) (min (var_1_61 , (abs (var_1_48 + var_1_60))))))))) && ((var_1_6 > last_1_var_1_67) ? (last_1_var_1_25 ? (var_1_69 == ((unsigned short int) (max (var_1_38 , var_1_8)))) : (var_1_69 == ((unsigned short int) var_1_55))) : (var_1_69 == ((unsigned short int) (max (var_1_32 , last_1_var_1_41)))))) && ((var_1_63 > (min ((var_1_88 + var_1_44) , var_1_102))) ? (var_1_70 == ((signed char) var_1_60)) : (var_1_70 == ((signed char) (max (((max (var_1_61 , var_1_37)) + var_1_63) , var_1_60)))))) && (((var_1_68 + var_1_5) < (var_1_101 * var_1_61)) ? (((var_1_49 + var_1_11) != (var_1_55 - var_1_10)) ? (var_1_71 == ((signed long int) (var_1_12 + (abs (var_1_32 + var_1_6))))) : 1) : (var_1_71 == ((signed long int) (min (var_1_37 , var_1_6)))))) && ((var_1_53 > var_1_10) ? (var_1_72 == ((signed long int) (var_1_9 - (abs (var_1_69))))) : (var_1_72 == ((signed long int) (var_1_63 + (max (var_1_61 , var_1_5))))))) && ((var_1_51 >= var_1_24) ? (var_1_73 == ((unsigned char) (var_1_18 || (var_1_19 && var_1_74)))) : (((var_1_65 + var_1_64) != var_1_99) ? (var_1_73 == ((unsigned char) var_1_20)) : (var_1_73 == ((unsigned char) ((! var_1_16) || var_1_74)))))) && ((var_1_19 && ((min (var_1_101 , var_1_17)) >= var_1_32)) ? (((var_1_72 & 2) > -5) ? (var_1_75 == ((float) (10.5f + var_1_64))) : (var_1_75 == ((float) (var_1_64 + 128.5f)))) : (var_1_75 == ((float) ((min (var_1_65 , var_1_64)) + (var_1_76 + (min (var_1_77 , var_1_78)))))))) && ((var_1_53 == var_1_10) ? (var_1_79 == ((double) var_1_65)) : (var_1_79 == ((double) (max ((var_1_78 + var_1_64) , var_1_65)))))) && (((var_1_55 * var_1_101) >= (var_1_32 / var_1_11)) ? ((var_1_53 <= var_1_57) ? (var_1_80 == ((signed short int) (var_1_43 - 64))) : 1) : 1)) && ((var_1_28 != ((var_1_63 - var_1_83) * -5)) ? (var_1_82 == ((double) ((abs (min (var_1_65 , 32.5))) + (min (var_1_76 , (var_1_77 + var_1_78)))))) : (var_1_82 == ((double) (max (var_1_76 , var_1_77)))))) && ((! (-64 >= var_1_49)) ? (var_1_84 == ((float) (max (var_1_77 , var_1_64)))) : ((var_1_65 < var_1_22) ? (var_1_84 == ((float) (min ((max (var_1_23 , var_1_64)) , (var_1_85 - (var_1_86 - var_1_87)))))) : 1))) && (((var_1_52 == (var_1_99 / var_1_86)) || var_1_73) ? (((max (var_1_61 , 2)) >= -2) ? ((! var_1_93) ? (var_1_88 == ((signed long int) (max (var_1_37 , var_1_53)))) : (var_1_88 == ((signed long int) (var_1_43 - var_1_37)))) : 1) : (var_1_88 == ((signed long int) (min (var_1_43 , (max ((var_1_58 - var_1_6) , var_1_31)))))))) && (var_1_25 ? (var_1_98 ? (((max (var_1_99 , var_1_86)) > (- (max (var_1_24 , var_1_77)))) ? (var_1_90 == ((unsigned short int) (abs (var_1_83)))) : 1) : ((var_1_93 || (var_1_88 > var_1_57)) ? (var_1_90 == ((unsigned short int) (var_1_71 + var_1_8))) : (var_1_90 == ((unsigned short int) (min (500 , (var_1_91 + (min (var_1_61 , var_1_31))))))))) : (var_1_90 == ((unsigned short int) (var_1_37 + var_1_55))))) && (((8 * var_1_11) <= var_1_6) ? ((var_1_53 >= (var_1_5 + -10)) ? (var_1_92 == ((signed char) (max ((var_1_31 - (min (var_1_37 , var_1_61))) , (var_1_63 - var_1_62))))) : 1) : (var_1_92 == ((signed char) (((var_1_63 - var_1_60) + var_1_61) + var_1_37))))) && ((var_1_28 >= var_1_48) ? (var_1_93 == ((unsigned char) var_1_94)) : (var_1_93 == ((unsigned char) var_1_20)))) && (var_1_95 == ((unsigned char) var_1_83))) && (var_1_74 ? (var_1_96 == ((signed char) var_1_37)) : (var_1_96 == ((signed char) var_1_63)))) && (var_1_97 == ((signed char) var_1_63))) && (var_1_21 ? (var_1_98 == ((unsigned char) var_1_20)) : 1)) && (var_1_99 == ((double) var_1_24))) && (var_1_74 ? (var_1_100 == ((double) 4.5)) : (var_1_100 == ((double) var_1_85)))) && (var_1_19 ? (var_1_101 == ((signed long int) last_1_var_1_96)) : (var_1_101 == ((signed long int) last_1_var_1_44)))) && (var_1_93 ? (var_1_102 == ((unsigned short int) var_1_39)) : 1)) && (var_1_25 ? (var_1_103 == ((signed char) var_1_32)) : (var_1_103 == ((signed char) var_1_63)))) && (var_1_20 ? (var_1_104 == ((float) var_1_64)) : (var_1_104 == ((float) var_1_65)))) && (var_1_105 == ((unsigned short int) var_1_8))) && ((var_1_73 || var_1_74) ? ((var_1_50 <= var_1_37) ? (((var_1_69 * var_1_33) > 50) ? (var_1_106 == ((unsigned char) var_1_83)) : (var_1_106 == ((unsigned char) var_1_62))) : (var_1_106 == ((unsigned char) var_1_43))) : (var_1_106 == ((unsigned char) var_1_61)))
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
