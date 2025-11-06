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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch106Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 16;
signed short int var_1_3 = -4;
unsigned char var_1_4 = 32;
signed short int var_1_5 = 16;
double var_1_6 = 4.25;
unsigned short int var_1_7 = 4;
unsigned short int var_1_8 = 1;
double var_1_9 = 200.6;
double var_1_11 = 4.875;
double var_1_12 = 63.06;
double var_1_13 = 9.2;
double var_1_14 = 31.5;
signed short int var_1_16 = -10;
signed short int var_1_17 = 5;
float var_1_18 = 100000000.6;
signed short int var_1_20 = 16;
unsigned long int var_1_21 = 32;
unsigned long int var_1_22 = 1509162525;
unsigned char var_1_23 = 10;
unsigned char var_1_24 = 1;
unsigned short int var_1_25 = 10;
unsigned char var_1_26 = 200;
unsigned short int var_1_27 = 38505;
signed short int var_1_28 = 0;
signed short int var_1_29 = 10000;
signed short int var_1_30 = 10000;
signed short int var_1_31 = 10000;
unsigned short int var_1_32 = 100;
unsigned short int var_1_33 = 20668;
unsigned char var_1_34 = 32;
signed long int var_1_35 = 50;
signed long int var_1_36 = 1829541075;
signed long int var_1_37 = 4;
unsigned short int var_1_38 = 64;
unsigned short int var_1_39 = 53412;
unsigned short int var_1_40 = 4;
unsigned short int var_1_41 = 64;
signed long int var_1_42 = -4;
double var_1_43 = 50.875;
signed long int var_1_44 = 1000000000;
signed long int var_1_45 = 5;
unsigned char var_1_46 = 0;
signed long int var_1_48 = 8;
signed long int var_1_49 = 5;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 0;
signed char var_1_59 = -25;
double var_1_60 = 31.5;
signed char var_1_61 = 8;
unsigned short int var_1_62 = 8;
double var_1_63 = 99.825;
unsigned char var_1_64 = 1;
signed long int var_1_65 = 10;
signed short int var_1_66 = 8;
signed short int var_1_67 = 4;
unsigned char var_1_68 = 1;
unsigned char var_1_69 = 128;
signed long int var_1_70 = -5;
signed long int var_1_71 = 2;
signed long int var_1_72 = -1;
unsigned char var_1_73 = 100;
signed short int var_1_74 = 4;
signed short int var_1_75 = 17267;
float var_1_76 = 7.2;
unsigned char var_1_77 = 4;
signed long int var_1_78 = -2;
float var_1_79 = 63.5;
float var_1_80 = 127.5;
unsigned char var_1_81 = 0;
signed long int var_1_82 = 8;
unsigned short int var_1_83 = 2;
signed long int var_1_84 = -16;
float var_1_85 = 256.4;
signed long int var_1_86 = 16;
signed long int var_1_88 = 128;
unsigned short int var_1_89 = 16;
double var_1_90 = 16.25;
double var_1_91 = 2.5;
unsigned short int var_1_92 = 8;
double var_1_93 = 5.75;
float var_1_94 = 0.5;
float var_1_95 = 10.75;
unsigned short int var_1_96 = 4;
unsigned long int var_1_97 = 8;
signed long int var_1_98 = 8;
signed short int var_1_99 = 50;
signed short int var_1_100 = 128;
signed short int var_1_101 = 8;
signed long int var_1_102 = 32;
unsigned char var_1_103 = 1;
float var_1_104 = 8.45;
signed char var_1_105 = -4;
unsigned long int var_1_106 = 2;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_3 = -4;
signed short int last_1_var_1_16 = -10;
unsigned char last_1_var_1_23 = 10;
unsigned short int last_1_var_1_32 = 100;
signed long int last_1_var_1_42 = -4;
unsigned char last_1_var_1_46 = 0;
unsigned short int last_1_var_1_62 = 8;
double last_1_var_1_63 = 99.825;
unsigned char last_1_var_1_64 = 1;
signed long int last_1_var_1_65 = 10;
signed long int last_1_var_1_70 = -5;
signed short int last_1_var_1_74 = 4;
signed long int last_1_var_1_82 = 8;
unsigned short int last_1_var_1_83 = 2;
signed long int last_1_var_1_84 = -16;
float last_1_var_1_85 = 256.4;
signed long int last_1_var_1_86 = 16;
unsigned short int last_1_var_1_89 = 16;
double last_1_var_1_90 = 16.25;
double last_1_var_1_93 = 5.75;
unsigned short int last_1_var_1_96 = 4;
signed short int last_1_var_1_100 = 128;
unsigned char last_1_var_1_103 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req28Batch106Amount500
	signed long int stepLocal_19 = var_1_8 * last_1_var_1_16;
	if (var_1_57) {
		if (stepLocal_19 <= last_1_var_1_74) {
			var_1_73 = (min (var_1_49 , (var_1_61 + (abs (50)))));
		}
	}


	// From: Req37Batch106Amount500
	signed long int stepLocal_29 = last_1_var_1_83;
	signed long int stepLocal_28 = var_1_30 - var_1_29;
	unsigned char stepLocal_27 = var_1_22 <= last_1_var_1_62;
	signed long int stepLocal_26 = var_1_7 * var_1_72;
	if ((var_1_69 + last_1_var_1_32) >= stepLocal_28) {
		if (stepLocal_29 >= ((max (last_1_var_1_23 , last_1_var_1_96)) % var_1_33)) {
			var_1_89 = last_1_var_1_89;
		} else {
			var_1_89 = var_1_75;
		}
	} else {
		if (stepLocal_26 == (var_1_61 - var_1_24)) {
			if ((last_1_var_1_103 && last_1_var_1_46) && stepLocal_27) {
				var_1_89 = var_1_29;
			}
		} else {
			var_1_89 = var_1_8;
		}
	}


	// From: Req33Batch106Amount500
	if (((last_1_var_1_84 + var_1_29) << var_1_33) >= var_1_49) {
		if ((last_1_var_1_89 / var_1_69) == (last_1_var_1_84 - (1599400498 - last_1_var_1_42))) {
			var_1_83 = (min (var_1_4 , var_1_2));
		} else {
			if (last_1_var_1_64) {
				var_1_83 = (min ((min (last_1_var_1_16 , (var_1_4 + var_1_24))) , last_1_var_1_23));
			}
		}
	}


	// From: Req18Batch106Amount500
	signed long int stepLocal_12 = last_1_var_1_65;
	signed short int stepLocal_11 = var_1_30;
	if (var_1_11 != (last_1_var_1_90 / var_1_43)) {
		if (var_1_22 >= stepLocal_12) {
			var_1_42 = (var_1_41 - (last_1_var_1_100 + (var_1_44 - var_1_39)));
		} else {
			var_1_42 = (var_1_45 + (var_1_30 - var_1_41));
		}
	} else {
		if (var_1_29 == stepLocal_11) {
			var_1_42 = (max (var_1_37 , (abs (min (-10 , last_1_var_1_82)))));
		} else {
			if (last_1_var_1_85 < last_1_var_1_93) {
				var_1_42 = (var_1_7 + (var_1_39 + last_1_var_1_86));
			} else {
				var_1_42 = var_1_37;
			}
		}
	}


	// From: Req45Batch106Amount500
	if (var_1_52) {
		var_1_97 = last_1_var_1_62;
	} else {
		var_1_97 = last_1_var_1_89;
	}


	// From: Req32Batch106Amount500
	if (last_1_var_1_63 <= ((8.25 * var_1_80) + var_1_43)) {
		var_1_82 = (last_1_var_1_3 + ((var_1_39 - var_1_24) + var_1_27));
	} else {
		var_1_82 = (max (var_1_27 , (last_1_var_1_3 - var_1_41)));
	}


	// From: Req21Batch106Amount500
	if (var_1_58) {
		var_1_62 = (var_1_27 - var_1_82);
	}


	// From: Req23Batch106Amount500
	if (var_1_58) {
		var_1_64 = ((8 < last_1_var_1_42) && (! var_1_56));
	} else {
		var_1_64 = var_1_52;
	}


	// From: Req50Batch106Amount500
	if (var_1_64) {
		var_1_103 = (var_1_54 && var_1_58);
	} else {
		var_1_103 = (var_1_57 && (! var_1_56));
	}


	// From: Req11Batch106Amount500
	if (var_1_64 && ((var_1_26 - var_1_7) == (var_1_17 & 1))) {
		var_1_25 = (var_1_27 - (var_1_4 + var_1_24));
	}


	// From: Req26Batch106Amount500
	if (var_1_4 >= ((min (var_1_26 , var_1_69)) - var_1_24)) {
		var_1_68 = (! (var_1_103 || (! var_1_58)));
	}


	// From: Req4Batch106Amount500
	if (var_1_103) {
		var_1_9 = (var_1_11 + (var_1_12 - (4.564139767021228E18 - var_1_13)));
	} else {
		var_1_9 = (var_1_12 + (min (var_1_13 , var_1_11)));
	}


	// From: Req1Batch106Amount500
	var_1_1 = var_1_2;


	// From: Req3Batch106Amount500
	signed long int stepLocal_1 = var_1_1 >> (var_1_7 - var_1_8);
	unsigned short int stepLocal_0 = var_1_7;
	if (stepLocal_1 < var_1_2) {
		if (stepLocal_0 == var_1_1) {
			var_1_6 = (min (4.4 , 31.5));
		}
	}


	// From: Req9Batch106Amount500
	var_1_21 = ((var_1_22 - (abs (var_1_5))) + var_1_2);


	// From: Req22Batch106Amount500
	var_1_63 = (max (var_1_13 , var_1_12));


	// From: Req30Batch106Amount500
	signed long int stepLocal_21 = var_1_4 >> (abs (var_1_78));
	if ((var_1_69 / var_1_77) > stepLocal_21) {
		var_1_76 = ((var_1_12 + (var_1_13 + var_1_79)) - var_1_80);
	}


	// From: Req38Batch106Amount500
	if (var_1_54) {
		var_1_90 = 3.2;
	}


	// From: Req39Batch106Amount500
	if (var_1_55) {
		var_1_91 = var_1_12;
	} else {
		var_1_91 = var_1_13;
	}


	// From: Req40Batch106Amount500
	if (var_1_55) {
		var_1_92 = var_1_30;
	} else {
		var_1_92 = var_1_48;
	}


	// From: Req41Batch106Amount500
	if (var_1_53) {
		var_1_93 = var_1_11;
	}


	// From: Req42Batch106Amount500
	var_1_94 = var_1_80;


	// From: Req43Batch106Amount500
	var_1_95 = var_1_79;


	// From: Req44Batch106Amount500
	if (var_1_57) {
		var_1_96 = var_1_7;
	}


	// From: Req46Batch106Amount500
	var_1_98 = var_1_27;


	// From: Req47Batch106Amount500
	if (var_1_56) {
		var_1_99 = var_1_4;
	} else {
		var_1_99 = var_1_8;
	}


	// From: Req48Batch106Amount500
	if (var_1_58) {
		var_1_100 = 1;
	} else {
		var_1_100 = var_1_101;
	}


	// From: Req51Batch106Amount500
	var_1_104 = var_1_12;


	// From: Req52Batch106Amount500
	var_1_105 = var_1_8;


	// From: Req53Batch106Amount500
	var_1_106 = var_1_31;


	// From: Req27Batch106Amount500
	signed long int stepLocal_18 = var_1_24 - var_1_49;
	unsigned short int stepLocal_17 = var_1_33;
	unsigned long int stepLocal_16 = var_1_106;
	signed long int stepLocal_15 = var_1_44;
	if (var_1_82 < stepLocal_17) {
		if (stepLocal_15 <= var_1_97) {
			if (var_1_31 < stepLocal_16) {
				var_1_70 = (max (last_1_var_1_70 , var_1_83));
			} else {
				var_1_70 = (var_1_2 - (var_1_71 + var_1_30));
			}
		} else {
			if (stepLocal_18 > ((var_1_25 | var_1_22) * var_1_106)) {
				var_1_70 = (var_1_72 + -32);
			}
		}
	}


	// From: Req25Batch106Amount500
	if ((- var_1_11) >= var_1_9) {
		if (var_1_11 != var_1_90) {
			var_1_66 = (min (-50 , var_1_31));
		} else {
			if (! ((var_1_98 % var_1_44) >= var_1_83)) {
				var_1_66 = (max ((min (var_1_24 , var_1_49)) , var_1_17));
			} else {
				var_1_66 = ((var_1_67 + var_1_97) - (abs (var_1_29 - var_1_2)));
			}
		}
	} else {
		var_1_66 = ((max ((var_1_49 + var_1_67) , var_1_17)) - var_1_48);
	}


	// From: Req10Batch106Amount500
	if (var_1_97 < ((var_1_22 + var_1_4) / var_1_7)) {
		if (var_1_64) {
			var_1_23 = (var_1_8 + (min (var_1_7 , 1)));
		} else {
			var_1_23 = (min ((var_1_7 + var_1_4) , (var_1_8 + var_1_24)));
		}
	} else {
		var_1_23 = (min (var_1_8 , var_1_24));
	}


	// From: Req8Batch106Amount500
	if (var_1_68) {
		var_1_20 = var_1_5;
	} else {
		var_1_20 = (min (var_1_92 , var_1_7));
	}


	// From: Req35Batch106Amount500
	if ((var_1_12 + (max (var_1_63 , var_1_6))) <= var_1_95) {
		if (var_1_53 && var_1_103) {
			var_1_85 = (min (var_1_79 , var_1_13));
		} else {
			var_1_85 = (var_1_80 - 64.6f);
		}
	}


	// From: Req5Batch106Amount500
	if (var_1_9 == var_1_91) {
		var_1_14 = (var_1_13 - (abs (5.85)));
	}


	// From: Req12Batch106Amount500
	signed long int stepLocal_5 = var_1_82;
	if (var_1_7 > stepLocal_5) {
		var_1_28 = (max (var_1_4 , (abs (var_1_20 - var_1_7))));
	} else {
		var_1_28 = (((var_1_29 + var_1_30) - (var_1_31 - 5)) - var_1_8);
	}


	// From: Req14Batch106Amount500
	if (var_1_90 >= (min ((var_1_12 - var_1_13) , var_1_91))) {
		if (var_1_30 > -200) {
			var_1_34 = (var_1_8 + 5);
		} else {
			var_1_34 = var_1_24;
		}
	} else {
		var_1_34 = var_1_4;
	}


	// From: Req31Batch106Amount500
	if ((var_1_79 - var_1_80) <= (min (var_1_63 , var_1_14))) {
		var_1_81 = (200 - ((var_1_49 + var_1_48) + (var_1_61 + var_1_7)));
	}


	// From: Req34Batch106Amount500
	unsigned long int stepLocal_23 = var_1_21;
	unsigned short int stepLocal_22 = var_1_8;
	if (stepLocal_22 < var_1_7) {
		if (stepLocal_23 > var_1_31) {
			var_1_84 = (var_1_30 - var_1_44);
		}
	} else {
		var_1_84 = ((min (var_1_36 , var_1_106)) - var_1_33);
	}


	// From: Req16Batch106Amount500
	unsigned short int stepLocal_9 = var_1_89;
	unsigned long int stepLocal_8 = min (1u , var_1_8);
	signed long int stepLocal_7 = var_1_7 - var_1_4;
	if ((min (var_1_21 , var_1_22)) < stepLocal_8) {
		var_1_38 = (max (var_1_5 , var_1_8));
	} else {
		if (stepLocal_7 >= (var_1_66 + (var_1_30 / var_1_27))) {
			if (stepLocal_9 <= 2) {
				var_1_38 = (var_1_39 - var_1_5);
			} else {
				var_1_38 = var_1_5;
			}
		} else {
			var_1_38 = ((abs (25)) + (min (var_1_7 , var_1_33)));
		}
	}


	// From: Req19Batch106Amount500
	if ((var_1_20 ^ var_1_25) >= (-10 / var_1_22)) {
		if (((var_1_24 - var_1_4) % var_1_7) > (var_1_5 >> (min (var_1_48 , var_1_49)))) {
			if ((var_1_8 - (max (100 , var_1_24))) < var_1_82) {
				if (var_1_68) {
					var_1_46 = ((32 >= var_1_27) || (! 0));
				}
			}
		} else {
			if (((var_1_29 << var_1_45) * (var_1_27 | var_1_106)) <= var_1_97) {
				if (! (var_1_48 != (max (var_1_96 , var_1_33)))) {
					var_1_46 = (! (var_1_68 && var_1_52));
				} else {
					if (! (-1 < var_1_30)) {
						if (var_1_41 == var_1_37) {
							var_1_46 = var_1_53;
						} else {
							var_1_46 = (! var_1_53);
						}
					}
				}
			} else {
				if (var_1_22 <= var_1_8) {
					var_1_46 = ((var_1_53 || (var_1_54 && var_1_55)) && var_1_56);
				} else {
					if (var_1_52) {
						var_1_46 = (var_1_57 || (var_1_55 && var_1_58));
					} else {
						var_1_46 = ((var_1_53 && var_1_54) && (! (var_1_55 && var_1_58)));
					}
				}
			}
		}
	} else {
		var_1_46 = (((var_1_26 - var_1_24) <= var_1_48) || (var_1_57 || var_1_56));
	}


	// From: Req17Batch106Amount500
	unsigned char stepLocal_10 = var_1_46;
	if (var_1_103 && stepLocal_10) {
		var_1_40 = (min (var_1_24 , (min (var_1_31 , (var_1_27 - var_1_8)))));
	} else {
		var_1_40 = (max ((var_1_27 - (var_1_41 + var_1_7)) , var_1_8));
	}


	// From: Req20Batch106Amount500
	unsigned short int stepLocal_13 = var_1_27;
	if (stepLocal_13 < var_1_2) {
		var_1_59 = var_1_8;
	} else {
		if (var_1_14 > ((var_1_43 / var_1_60) / 100.75)) {
			if (! (var_1_40 <= var_1_97)) {
				var_1_59 = ((var_1_7 + (var_1_61 + var_1_48)) - var_1_49);
			}
		}
	}


	// From: Req49Batch106Amount500
	if (var_1_55) {
		var_1_102 = var_1_38;
	} else {
		var_1_102 = var_1_77;
	}


	// From: Req13Batch106Amount500
	signed long int stepLocal_6 = var_1_25 - var_1_24;
	if (var_1_31 == stepLocal_6) {
		var_1_32 = (var_1_26 + (var_1_33 - var_1_102));
	} else {
		var_1_32 = (var_1_27 - var_1_7);
	}


	// From: Req24Batch106Amount500
	unsigned long int stepLocal_14 = - var_1_21;
	if (var_1_7 > stepLocal_14) {
		var_1_65 = (max ((var_1_39 - (min (var_1_42 , var_1_70))) , (var_1_102 + (var_1_30 + var_1_82))));
	} else {
		var_1_65 = (min ((var_1_8 + var_1_44) , (var_1_102 - 2)));
	}


	// From: Req15Batch106Amount500
	if (var_1_106 > var_1_17) {
		var_1_35 = ((var_1_36 - var_1_8) - var_1_37);
	} else {
		if (var_1_64 && (var_1_5 < var_1_106)) {
			if ((min (var_1_93 , var_1_6)) < var_1_63) {
				var_1_35 = (abs (var_1_37));
			} else {
				var_1_35 = (var_1_8 - var_1_29);
			}
		} else {
			var_1_35 = (max (var_1_36 , ((min (var_1_37 , var_1_65)) - 4)));
		}
	}


	// From: Req29Batch106Amount500
	signed long int stepLocal_20 = var_1_5 % (max (var_1_69 , var_1_30));
	if (var_1_97 > stepLocal_20) {
		var_1_74 = (max ((var_1_73 + var_1_29) , (max (var_1_30 , (var_1_23 - var_1_41)))));
	} else {
		if (((var_1_12 - 49.2) + (var_1_60 * 50.75)) > var_1_93) {
			var_1_74 = (max ((var_1_8 + var_1_30) , (var_1_26 - (var_1_75 - var_1_65))));
		}
	}


	// From: Req6Batch106Amount500
	unsigned long int stepLocal_2 = (50u % var_1_7) + var_1_8;
	if (stepLocal_2 > ((var_1_5 + var_1_4) << var_1_35)) {
		if (var_1_63 <= var_1_12) {
			var_1_16 = (max ((min (var_1_70 , var_1_8)) , var_1_4));
		} else {
			var_1_16 = (var_1_17 - (max ((var_1_4 + var_1_8) , var_1_5)));
		}
	}


	// From: Req2Batch106Amount500
	if (var_1_74 > (- (128 - var_1_4))) {
		var_1_3 = ((var_1_74 - var_1_4) + (var_1_2 - (32 + var_1_5)));
	} else {
		var_1_3 = (50 - var_1_74);
	}


	// From: Req36Batch106Amount500
	signed long int stepLocal_25 = var_1_71;
	signed long int stepLocal_24 = var_1_45;
	if (var_1_66 <= stepLocal_25) {
		if (! var_1_46) {
			var_1_86 = (256 - (var_1_44 + var_1_48));
		} else {
			if (stepLocal_24 < var_1_42) {
				var_1_86 = (-1000000 + (min ((max (var_1_73 , var_1_92)) , 2)));
			}
		}
	} else {
		var_1_86 = (max ((min ((16 - var_1_88) , var_1_3)) , last_1_var_1_86));
	}


	// From: Req7Batch106Amount500
	unsigned char stepLocal_4 = var_1_46;
	signed long int stepLocal_3 = var_1_86;
	if (stepLocal_4 && var_1_64) {
		if (var_1_94 > var_1_12) {
			if (stepLocal_3 < var_1_82) {
				var_1_18 = (min (63.7f , var_1_11));
			}
		} else {
			var_1_18 = (var_1_12 - var_1_13);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 254);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 8191);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 4);
	assume_abort_if_not(var_1_7 <= 7);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 3);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 32766);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 1073741823);
	assume_abort_if_not(var_1_22 <= 2147483647);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 127);
	assume_abort_if_not(var_1_26 <= 255);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 32767);
	assume_abort_if_not(var_1_27 <= 65534);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= 8191);
	assume_abort_if_not(var_1_29 <= 16383);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= 8191);
	assume_abort_if_not(var_1_30 <= 16383);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= 8191);
	assume_abort_if_not(var_1_31 <= 16383);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 16383);
	assume_abort_if_not(var_1_33 <= 32767);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= 1073741822);
	assume_abort_if_not(var_1_36 <= 2147483646);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 2147483646);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 32767);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 16384);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	assume_abort_if_not(var_1_43 != 0.0F);
	var_1_44 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_44 >= 536870911);
	assume_abort_if_not(var_1_44 <= 1073741823);
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= -1073741823);
	assume_abort_if_not(var_1_45 <= 1073741823);
	var_1_48 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 14);
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 14);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 0);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 1);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 0);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 0);
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= -922337.2036854776000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
	assume_abort_if_not(var_1_60 != 0.0F);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 32);
	var_1_67 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 16383);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 127);
	assume_abort_if_not(var_1_69 <= 255);
	var_1_71 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 1073741823);
	var_1_72 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_72 >= -1073741823);
	assume_abort_if_not(var_1_72 <= 1073741823);
	var_1_75 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_75 >= 16383);
	assume_abort_if_not(var_1_75 <= 32766);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 255);
	assume_abort_if_not(var_1_77 != 0);
	var_1_78 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_78 >= -7);
	assume_abort_if_not(var_1_78 <= -1);
	var_1_79 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_79 >= 0.0F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 2305843.009213691400e+12F && var_1_79 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854766000e+12F && var_1_80 >= 1.0e-20F ));
	var_1_88 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 2147483646);
	var_1_101 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_101 >= -32767);
	assume_abort_if_not(var_1_101 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_3 = var_1_3;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_103 = var_1_103;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_1 == ((unsigned char) var_1_2)) && ((var_1_74 > (- (128 - var_1_4))) ? (var_1_3 == ((signed short int) ((var_1_74 - var_1_4) + (var_1_2 - (32 + var_1_5))))) : (var_1_3 == ((signed short int) (50 - var_1_74))))) && (((var_1_1 >> (var_1_7 - var_1_8)) < var_1_2) ? ((var_1_7 == var_1_1) ? (var_1_6 == ((double) (min (4.4 , 31.5)))) : 1) : 1)) && (var_1_103 ? (var_1_9 == ((double) (var_1_11 + (var_1_12 - (4.564139767021228E18 - var_1_13))))) : (var_1_9 == ((double) (var_1_12 + (min (var_1_13 , var_1_11))))))) && ((var_1_9 == var_1_91) ? (var_1_14 == ((double) (var_1_13 - (abs (5.85))))) : 1)) && ((((50u % var_1_7) + var_1_8) > ((var_1_5 + var_1_4) << var_1_35)) ? ((var_1_63 <= var_1_12) ? (var_1_16 == ((signed short int) (max ((min (var_1_70 , var_1_8)) , var_1_4)))) : (var_1_16 == ((signed short int) (var_1_17 - (max ((var_1_4 + var_1_8) , var_1_5)))))) : 1)) && ((var_1_46 && var_1_64) ? ((var_1_94 > var_1_12) ? ((var_1_86 < var_1_82) ? (var_1_18 == ((float) (min (63.7f , var_1_11)))) : 1) : (var_1_18 == ((float) (var_1_12 - var_1_13)))) : 1)) && (var_1_68 ? (var_1_20 == ((signed short int) var_1_5)) : (var_1_20 == ((signed short int) (min (var_1_92 , var_1_7)))))) && (var_1_21 == ((unsigned long int) ((var_1_22 - (abs (var_1_5))) + var_1_2)))) && ((var_1_97 < ((var_1_22 + var_1_4) / var_1_7)) ? (var_1_64 ? (var_1_23 == ((unsigned char) (var_1_8 + (min (var_1_7 , 1))))) : (var_1_23 == ((unsigned char) (min ((var_1_7 + var_1_4) , (var_1_8 + var_1_24)))))) : (var_1_23 == ((unsigned char) (min (var_1_8 , var_1_24)))))) && ((var_1_64 && ((var_1_26 - var_1_7) == (var_1_17 & 1))) ? (var_1_25 == ((unsigned short int) (var_1_27 - (var_1_4 + var_1_24)))) : 1)) && ((var_1_7 > var_1_82) ? (var_1_28 == ((signed short int) (max (var_1_4 , (abs (var_1_20 - var_1_7)))))) : (var_1_28 == ((signed short int) (((var_1_29 + var_1_30) - (var_1_31 - 5)) - var_1_8))))) && ((var_1_31 == (var_1_25 - var_1_24)) ? (var_1_32 == ((unsigned short int) (var_1_26 + (var_1_33 - var_1_102)))) : (var_1_32 == ((unsigned short int) (var_1_27 - var_1_7))))) && ((var_1_90 >= (min ((var_1_12 - var_1_13) , var_1_91))) ? ((var_1_30 > -200) ? (var_1_34 == ((unsigned char) (var_1_8 + 5))) : (var_1_34 == ((unsigned char) var_1_24))) : (var_1_34 == ((unsigned char) var_1_4)))) && ((var_1_106 > var_1_17) ? (var_1_35 == ((signed long int) ((var_1_36 - var_1_8) - var_1_37))) : ((var_1_64 && (var_1_5 < var_1_106)) ? (((min (var_1_93 , var_1_6)) < var_1_63) ? (var_1_35 == ((signed long int) (abs (var_1_37)))) : (var_1_35 == ((signed long int) (var_1_8 - var_1_29)))) : (var_1_35 == ((signed long int) (max (var_1_36 , ((min (var_1_37 , var_1_65)) - 4)))))))) && (((min (var_1_21 , var_1_22)) < (min (1u , var_1_8))) ? (var_1_38 == ((unsigned short int) (max (var_1_5 , var_1_8)))) : (((var_1_7 - var_1_4) >= (var_1_66 + (var_1_30 / var_1_27))) ? ((var_1_89 <= 2) ? (var_1_38 == ((unsigned short int) (var_1_39 - var_1_5))) : (var_1_38 == ((unsigned short int) var_1_5))) : (var_1_38 == ((unsigned short int) ((abs (25)) + (min (var_1_7 , var_1_33)))))))) && ((var_1_103 && var_1_46) ? (var_1_40 == ((unsigned short int) (min (var_1_24 , (min (var_1_31 , (var_1_27 - var_1_8))))))) : (var_1_40 == ((unsigned short int) (max ((var_1_27 - (var_1_41 + var_1_7)) , var_1_8)))))) && ((var_1_11 != (last_1_var_1_90 / var_1_43)) ? ((var_1_22 >= last_1_var_1_65) ? (var_1_42 == ((signed long int) (var_1_41 - (last_1_var_1_100 + (var_1_44 - var_1_39))))) : (var_1_42 == ((signed long int) (var_1_45 + (var_1_30 - var_1_41))))) : ((var_1_29 == var_1_30) ? (var_1_42 == ((signed long int) (max (var_1_37 , (abs (min (-10 , last_1_var_1_82))))))) : ((last_1_var_1_85 < last_1_var_1_93) ? (var_1_42 == ((signed long int) (var_1_7 + (var_1_39 + last_1_var_1_86)))) : (var_1_42 == ((signed long int) var_1_37)))))) && (((var_1_20 ^ var_1_25) >= (-10 / var_1_22)) ? ((((var_1_24 - var_1_4) % var_1_7) > (var_1_5 >> (min (var_1_48 , var_1_49)))) ? (((var_1_8 - (max (100 , var_1_24))) < var_1_82) ? (var_1_68 ? (var_1_46 == ((unsigned char) ((32 >= var_1_27) || (! 0)))) : 1) : 1) : ((((var_1_29 << var_1_45) * (var_1_27 | var_1_106)) <= var_1_97) ? ((! (var_1_48 != (max (var_1_96 , var_1_33)))) ? (var_1_46 == ((unsigned char) (! (var_1_68 && var_1_52)))) : ((! (-1 < var_1_30)) ? ((var_1_41 == var_1_37) ? (var_1_46 == ((unsigned char) var_1_53)) : (var_1_46 == ((unsigned char) (! var_1_53)))) : 1)) : ((var_1_22 <= var_1_8) ? (var_1_46 == ((unsigned char) ((var_1_53 || (var_1_54 && var_1_55)) && var_1_56))) : (var_1_52 ? (var_1_46 == ((unsigned char) (var_1_57 || (var_1_55 && var_1_58)))) : (var_1_46 == ((unsigned char) ((var_1_53 && var_1_54) && (! (var_1_55 && var_1_58))))))))) : (var_1_46 == ((unsigned char) (((var_1_26 - var_1_24) <= var_1_48) || (var_1_57 || var_1_56)))))) && ((var_1_27 < var_1_2) ? (var_1_59 == ((signed char) var_1_8)) : ((var_1_14 > ((var_1_43 / var_1_60) / 100.75)) ? ((! (var_1_40 <= var_1_97)) ? (var_1_59 == ((signed char) ((var_1_7 + (var_1_61 + var_1_48)) - var_1_49))) : 1) : 1))) && (var_1_58 ? (var_1_62 == ((unsigned short int) (var_1_27 - var_1_82))) : 1)) && (var_1_63 == ((double) (max (var_1_13 , var_1_12))))) && (var_1_58 ? (var_1_64 == ((unsigned char) ((8 < last_1_var_1_42) && (! var_1_56)))) : (var_1_64 == ((unsigned char) var_1_52)))) && ((var_1_7 > (- var_1_21)) ? (var_1_65 == ((signed long int) (max ((var_1_39 - (min (var_1_42 , var_1_70))) , (var_1_102 + (var_1_30 + var_1_82)))))) : (var_1_65 == ((signed long int) (min ((var_1_8 + var_1_44) , (var_1_102 - 2))))))) && (((- var_1_11) >= var_1_9) ? ((var_1_11 != var_1_90) ? (var_1_66 == ((signed short int) (min (-50 , var_1_31)))) : ((! ((var_1_98 % var_1_44) >= var_1_83)) ? (var_1_66 == ((signed short int) (max ((min (var_1_24 , var_1_49)) , var_1_17)))) : (var_1_66 == ((signed short int) ((var_1_67 + var_1_97) - (abs (var_1_29 - var_1_2))))))) : (var_1_66 == ((signed short int) ((max ((var_1_49 + var_1_67) , var_1_17)) - var_1_48))))) && ((var_1_4 >= ((min (var_1_26 , var_1_69)) - var_1_24)) ? (var_1_68 == ((unsigned char) (! (var_1_103 || (! var_1_58))))) : 1)) && ((var_1_82 < var_1_33) ? ((var_1_44 <= var_1_97) ? ((var_1_31 < var_1_106) ? (var_1_70 == ((signed long int) (max (last_1_var_1_70 , var_1_83)))) : (var_1_70 == ((signed long int) (var_1_2 - (var_1_71 + var_1_30))))) : (((var_1_24 - var_1_49) > ((var_1_25 | var_1_22) * var_1_106)) ? (var_1_70 == ((signed long int) (var_1_72 + -32))) : 1)) : 1)) && (var_1_57 ? (((var_1_8 * last_1_var_1_16) <= last_1_var_1_74) ? (var_1_73 == ((unsigned char) (min (var_1_49 , (var_1_61 + (abs (50))))))) : 1) : 1)) && ((var_1_97 > (var_1_5 % (max (var_1_69 , var_1_30)))) ? (var_1_74 == ((signed short int) (max ((var_1_73 + var_1_29) , (max (var_1_30 , (var_1_23 - var_1_41))))))) : ((((var_1_12 - 49.2) + (var_1_60 * 50.75)) > var_1_93) ? (var_1_74 == ((signed short int) (max ((var_1_8 + var_1_30) , (var_1_26 - (var_1_75 - var_1_65)))))) : 1))) && (((var_1_69 / var_1_77) > (var_1_4 >> (abs (var_1_78)))) ? (var_1_76 == ((float) ((var_1_12 + (var_1_13 + var_1_79)) - var_1_80))) : 1)) && (((var_1_79 - var_1_80) <= (min (var_1_63 , var_1_14))) ? (var_1_81 == ((unsigned char) (200 - ((var_1_49 + var_1_48) + (var_1_61 + var_1_7))))) : 1)) && ((last_1_var_1_63 <= ((8.25 * var_1_80) + var_1_43)) ? (var_1_82 == ((signed long int) (last_1_var_1_3 + ((var_1_39 - var_1_24) + var_1_27)))) : (var_1_82 == ((signed long int) (max (var_1_27 , (last_1_var_1_3 - var_1_41))))))) && ((((last_1_var_1_84 + var_1_29) << var_1_33) >= var_1_49) ? (((last_1_var_1_89 / var_1_69) == (last_1_var_1_84 - (1599400498 - last_1_var_1_42))) ? (var_1_83 == ((unsigned short int) (min (var_1_4 , var_1_2)))) : (last_1_var_1_64 ? (var_1_83 == ((unsigned short int) (min ((min (last_1_var_1_16 , (var_1_4 + var_1_24))) , last_1_var_1_23)))) : 1)) : 1)) && ((var_1_8 < var_1_7) ? ((var_1_21 > var_1_31) ? (var_1_84 == ((signed long int) (var_1_30 - var_1_44))) : 1) : (var_1_84 == ((signed long int) ((min (var_1_36 , var_1_106)) - var_1_33))))) && (((var_1_12 + (max (var_1_63 , var_1_6))) <= var_1_95) ? ((var_1_53 && var_1_103) ? (var_1_85 == ((float) (min (var_1_79 , var_1_13)))) : (var_1_85 == ((float) (var_1_80 - 64.6f)))) : 1)) && ((var_1_66 <= var_1_71) ? ((! var_1_46) ? (var_1_86 == ((signed long int) (256 - (var_1_44 + var_1_48)))) : ((var_1_45 < var_1_42) ? (var_1_86 == ((signed long int) (-1000000 + (min ((max (var_1_73 , var_1_92)) , 2))))) : 1)) : (var_1_86 == ((signed long int) (max ((min ((16 - var_1_88) , var_1_3)) , last_1_var_1_86)))))) && (((var_1_69 + last_1_var_1_32) >= (var_1_30 - var_1_29)) ? ((last_1_var_1_83 >= ((max (last_1_var_1_23 , last_1_var_1_96)) % var_1_33)) ? (var_1_89 == ((unsigned short int) last_1_var_1_89)) : (var_1_89 == ((unsigned short int) var_1_75))) : (((var_1_7 * var_1_72) == (var_1_61 - var_1_24)) ? (((last_1_var_1_103 && last_1_var_1_46) && (var_1_22 <= last_1_var_1_62)) ? (var_1_89 == ((unsigned short int) var_1_29)) : 1) : (var_1_89 == ((unsigned short int) var_1_8))))) && (var_1_54 ? (var_1_90 == ((double) 3.2)) : 1)) && (var_1_55 ? (var_1_91 == ((double) var_1_12)) : (var_1_91 == ((double) var_1_13)))) && (var_1_55 ? (var_1_92 == ((unsigned short int) var_1_30)) : (var_1_92 == ((unsigned short int) var_1_48)))) && (var_1_53 ? (var_1_93 == ((double) var_1_11)) : 1)) && (var_1_94 == ((float) var_1_80))) && (var_1_95 == ((float) var_1_79))) && (var_1_57 ? (var_1_96 == ((unsigned short int) var_1_7)) : 1)) && (var_1_52 ? (var_1_97 == ((unsigned long int) last_1_var_1_62)) : (var_1_97 == ((unsigned long int) last_1_var_1_89)))) && (var_1_98 == ((signed long int) var_1_27))) && (var_1_56 ? (var_1_99 == ((signed short int) var_1_4)) : (var_1_99 == ((signed short int) var_1_8)))) && (var_1_58 ? (var_1_100 == ((signed short int) 1)) : (var_1_100 == ((signed short int) var_1_101)))) && (var_1_55 ? (var_1_102 == ((signed long int) var_1_38)) : (var_1_102 == ((signed long int) var_1_77)))) && (var_1_64 ? (var_1_103 == ((unsigned char) (var_1_54 && var_1_58))) : (var_1_103 == ((unsigned char) (var_1_57 && (! var_1_56)))))) && (var_1_104 == ((float) var_1_12))) && (var_1_105 == ((signed char) var_1_8))) && (var_1_106 == ((unsigned long int) var_1_31))
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
