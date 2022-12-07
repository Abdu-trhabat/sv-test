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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch79Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 0;
signed short int var_1_11 = 4;
unsigned short int var_1_12 = 4;
double var_1_16 = 99999999999999.75;
double var_1_17 = 64.25;
double var_1_18 = 2.15;
double var_1_19 = 32.2;
double var_1_20 = 7.2;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned short int var_1_25 = 16;
signed char var_1_26 = 100;
signed char var_1_27 = 5;
unsigned short int var_1_28 = 53576;
signed long int var_1_29 = 32;
signed char var_1_32 = 2;
signed char var_1_33 = 0;
signed char var_1_34 = 64;
double var_1_35 = 16.6;
unsigned char var_1_36 = 128;
unsigned char var_1_37 = 128;
unsigned char var_1_38 = 100;
double var_1_39 = 63.061;
signed char var_1_40 = -2;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 4;
unsigned char var_1_44 = 64;
unsigned char var_1_45 = 50;
unsigned char var_1_46 = 2;
unsigned char var_1_47 = 0;
unsigned short int var_1_48 = 8;
signed short int var_1_50 = 1;
signed short int var_1_51 = 28732;
float var_1_52 = 7.94;
float var_1_53 = 15.375;
float var_1_54 = 5.5;
float var_1_55 = 128.6;
float var_1_56 = 50.7;
signed char var_1_57 = 8;
unsigned short int var_1_58 = 32;
signed long int var_1_59 = -16;
signed long int var_1_60 = 1342170486;
signed long int var_1_61 = 2104048976;
unsigned short int var_1_62 = 1;
unsigned short int var_1_63 = 58470;
unsigned long int var_1_64 = 0;
unsigned long int var_1_66 = 1000000000;
signed long int var_1_67 = 10;
unsigned short int var_1_68 = 128;
unsigned char var_1_69 = 10;
signed char var_1_70 = -2;
signed char var_1_71 = -2;
double var_1_72 = 7.5;
unsigned long int var_1_73 = 25;
unsigned long int var_1_74 = 3436752519;
unsigned long int var_1_75 = 3363538176;
unsigned char var_1_76 = 0;
unsigned char var_1_77 = 200;
unsigned char var_1_78 = 128;
unsigned short int var_1_79 = 1;
signed short int var_1_81 = 50;
unsigned short int var_1_83 = 64;
unsigned long int var_1_84 = 16;
unsigned char var_1_85 = 64;
signed short int var_1_86 = 26679;
unsigned char var_1_87 = 32;
signed short int var_1_88 = 500;
float var_1_89 = 16.95;
float var_1_90 = 5.75;
float var_1_91 = 0.0;
float var_1_92 = 7.8;
unsigned long int var_1_93 = 100000000;
signed long int var_1_95 = -4;
signed short int var_1_96 = 0;
unsigned long int var_1_97 = 1000;
signed char var_1_98 = 50;
unsigned short int var_1_99 = 8;
signed long int var_1_100 = -10000;
signed char var_1_102 = 25;
float var_1_103 = 127.25;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_21 = 1;
signed long int last_1_var_1_29 = 32;
unsigned char last_1_var_1_36 = 128;
double last_1_var_1_39 = 63.061;
unsigned char last_1_var_1_41 = 0;
unsigned char last_1_var_1_46 = 2;
signed short int last_1_var_1_50 = 1;
float last_1_var_1_52 = 7.94;
unsigned short int last_1_var_1_68 = 128;
unsigned char last_1_var_1_69 = 10;
unsigned long int last_1_var_1_73 = 25;
unsigned char last_1_var_1_76 = 0;
signed short int last_1_var_1_81 = 50;
signed short int last_1_var_1_88 = 500;
float last_1_var_1_92 = 7.8;
unsigned long int last_1_var_1_93 = 100000000;
signed char last_1_var_1_102 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch79Amount500
	if (var_1_17 <= last_1_var_1_92) {
		var_1_21 = (var_1_22 || (var_1_23 || var_1_24));
	}


	// From: Req37Batch79Amount500
	if (var_1_21) {
		var_1_92 = var_1_19;
	} else {
		var_1_92 = 9.99999999925E9f;
	}


	// From: Req21Batch79Amount500
	unsigned char stepLocal_25 = last_1_var_1_21;
	signed long int stepLocal_24 = max (var_1_28 , last_1_var_1_46);
	if ((128 - last_1_var_1_29) <= stepLocal_24) {
		if (stepLocal_25 || var_1_24) {
			var_1_62 = ((var_1_63 - var_1_38) - 25);
		} else {
			var_1_62 = ((var_1_51 - (last_1_var_1_93 + var_1_34)) + last_1_var_1_88);
		}
	} else {
		if (var_1_17 < var_1_19) {
			var_1_62 = (var_1_34 + 50);
		} else {
			var_1_62 = (abs (last_1_var_1_46));
		}
	}


	// From: Req13Batch79Amount500
	signed long int stepLocal_16 = last_1_var_1_102;
	signed long int stepLocal_15 = 1 | (last_1_var_1_36 >> last_1_var_1_73);
	unsigned char stepLocal_14 = last_1_var_1_41;
	signed long int stepLocal_13 = 1000000000;
	signed long int stepLocal_12 = abs (max (last_1_var_1_68 , var_1_34));
	if (stepLocal_14 && (last_1_var_1_73 >= (var_1_12 * last_1_var_1_36))) {
		var_1_42 = var_1_38;
	} else {
		if (stepLocal_16 <= -64) {
			if (stepLocal_15 >= 1) {
				var_1_42 = (var_1_37 - var_1_12);
			}
		} else {
			if ((last_1_var_1_46 / var_1_26) > stepLocal_12) {
				if (last_1_var_1_21) {
					if (last_1_var_1_81 >= stepLocal_13) {
						var_1_42 = (var_1_12 + (min (var_1_27 , var_1_34)));
					}
				} else {
					var_1_42 = (var_1_26 + ((var_1_44 + var_1_45) - var_1_12));
				}
			}
		}
	}


	// From: Req7Batch79Amount500
	signed long int stepLocal_10 = last_1_var_1_50;
	unsigned char stepLocal_9 = last_1_var_1_41;
	signed char stepLocal_8 = var_1_27;
	if ((var_1_26 * 100) >= stepLocal_10) {
		if (((min (last_1_var_1_52 , last_1_var_1_39)) < (var_1_17 - var_1_18)) || stepLocal_9) {
			if (last_1_var_1_69 > stepLocal_8) {
				var_1_32 = var_1_27;
			} else {
				var_1_32 = (min ((abs (var_1_12)) , ((-8 + var_1_33) + var_1_27)));
			}
		} else {
			var_1_32 = (var_1_12 - var_1_27);
		}
	} else {
		var_1_32 = (-1 - (min ((var_1_34 - var_1_12) , (100 - var_1_27))));
	}


	// From: Req10Batch79Amount500
	unsigned char stepLocal_11 = var_1_42;
	if (var_1_22) {
		var_1_39 = (min (var_1_18 , var_1_20));
	} else {
		if ((var_1_12 / var_1_28) != stepLocal_11) {
			var_1_39 = var_1_18;
		} else {
			var_1_39 = var_1_20;
		}
	}


	// From: Req9Batch79Amount500
	if (last_1_var_1_39 < var_1_19) {
		var_1_36 = (var_1_34 + (min ((abs (var_1_12)) , var_1_27)));
	} else {
		if (last_1_var_1_41) {
			var_1_36 = (128 - var_1_34);
		} else {
			var_1_36 = (var_1_37 - ((var_1_38 - var_1_12) - var_1_27));
		}
	}


	// From: Req14Batch79Amount500
	unsigned long int stepLocal_17 = 8u + last_1_var_1_76;
	if (stepLocal_17 > var_1_12) {
		var_1_46 = (abs (var_1_37 - var_1_47));
	}


	// From: Req12Batch79Amount500
	var_1_41 = (! (! 1));


	// From: Req17Batch79Amount500
	if (var_1_24) {
		var_1_52 = ((max ((min (var_1_17 , var_1_19)) , var_1_18)) + var_1_53);
	} else {
		var_1_52 = (var_1_53 + ((var_1_54 + var_1_55) + var_1_56));
	}


	// From: Req25Batch79Amount500
	if (var_1_41) {
		var_1_69 = (var_1_37 - ((abs (var_1_45)) + var_1_27));
	}


	// From: Req33Batch79Amount500
	unsigned long int stepLocal_29 = ~ var_1_66;
	unsigned char stepLocal_28 = var_1_44;
	if (var_1_46 < stepLocal_29) {
		if (stepLocal_28 != var_1_37) {
			var_1_84 = var_1_47;
		}
	}


	// From: Req38Batch79Amount500
	var_1_93 = var_1_69;


	// From: Req39Batch79Amount500
	if (var_1_21) {
		var_1_95 = var_1_42;
	} else {
		var_1_95 = var_1_42;
	}


	// From: Req42Batch79Amount500
	if (var_1_21) {
		var_1_98 = var_1_87;
	} else {
		var_1_98 = var_1_45;
	}


	// From: Req43Batch79Amount500
	if (var_1_21) {
		var_1_99 = var_1_27;
	} else {
		var_1_99 = var_1_69;
	}


	// From: Req44Batch79Amount500
	if (var_1_41) {
		var_1_100 = var_1_77;
	}


	// From: Req45Batch79Amount500
	if (var_1_41) {
		var_1_102 = var_1_44;
	} else {
		var_1_102 = var_1_45;
	}


	// From: Req46Batch79Amount500
	if (var_1_36 >= ((var_1_62 * var_1_44) + 4u)) {
		if (! var_1_21) {
			if ((7.7f - var_1_17) < var_1_19) {
				var_1_103 = var_1_90;
			} else {
				var_1_103 = var_1_91;
			}
		} else {
			var_1_103 = var_1_17;
		}
	}


	// From: Req22Batch79Amount500
	if (var_1_32 > (128 - var_1_12)) {
		if ((var_1_17 - var_1_18) > (var_1_52 * var_1_54)) {
			var_1_64 = (min (var_1_47 , var_1_63));
		} else {
			var_1_64 = (4158395559u - ((var_1_66 - 2u) + 25u));
		}
	}


	// From: Req27Batch79Amount500
	signed long int stepLocal_26 = 5;
	if (var_1_64 < stepLocal_26) {
		var_1_72 = ((abs (var_1_17)) + 1000000.5);
	} else {
		var_1_72 = (max ((abs (var_1_53 + var_1_18)) , (var_1_19 + var_1_54)));
	}


	// From: Req24Batch79Amount500
	if (var_1_21) {
		var_1_68 = (min (var_1_69 , (max (var_1_26 , (min (var_1_47 , var_1_27))))));
	} else {
		var_1_68 = (var_1_38 + var_1_46);
	}


	// From: Req41Batch79Amount500
	if (var_1_24) {
		var_1_97 = 2u;
	} else {
		var_1_97 = var_1_68;
	}


	// From: Req34Batch79Amount500
	signed long int stepLocal_30 = (var_1_86 - var_1_99) - (var_1_51 - 25);
	if (! var_1_23) {
		if (stepLocal_30 < var_1_12) {
			var_1_85 = (var_1_37 - var_1_34);
		}
	} else {
		var_1_85 = (((var_1_44 + var_1_45) - (var_1_87 - var_1_12)) + (min ((min (var_1_27 , var_1_26)) , var_1_38)));
	}


	// From: Req36Batch79Amount500
	if (var_1_55 > var_1_103) {
		var_1_89 = (var_1_18 - ((var_1_90 + var_1_91) + var_1_17));
	} else {
		if (var_1_24) {
			if (var_1_41) {
				var_1_89 = (var_1_17 - var_1_91);
			}
		} else {
			var_1_89 = var_1_18;
		}
	}


	// From: Req40Batch79Amount500
	if (var_1_23) {
		var_1_96 = var_1_102;
	} else {
		var_1_96 = var_1_69;
	}


	// From: Req29Batch79Amount500
	if (var_1_21 && var_1_22) {
		if (var_1_85 > var_1_32) {
			var_1_76 = (var_1_37 - var_1_12);
		} else {
			if (last_1_var_1_76 >= (var_1_37 / var_1_26)) {
				var_1_76 = ((var_1_44 + 4) + var_1_12);
			} else {
				var_1_76 = ((min (var_1_37 , var_1_77)) - var_1_27);
			}
		}
	} else {
		var_1_76 = (var_1_78 - var_1_38);
	}


	// From: Req26Batch79Amount500
	if (var_1_18 < var_1_72) {
		var_1_70 = (min (var_1_34 , ((max (var_1_71 , var_1_12)) + (max (var_1_27 , var_1_45)))));
	} else {
		var_1_70 = var_1_71;
	}


	// From: Req8Batch79Amount500
	if ((min (var_1_85 , var_1_26)) >= (var_1_34 + var_1_68)) {
		if (var_1_41) {
			var_1_35 = (var_1_18 + var_1_17);
		}
	}


	// From: Req2Batch79Amount500
	signed long int stepLocal_3 = var_1_85 ^ var_1_70;
	signed long int stepLocal_2 = var_1_70 | (var_1_36 << var_1_76);
	signed long int stepLocal_1 = (var_1_42 * var_1_76) & (max (-50 , var_1_42));
	signed long int stepLocal_0 = (var_1_85 + var_1_36) << (abs (var_1_12));
	if (stepLocal_0 <= (var_1_70 * var_1_76)) {
		var_1_11 = ((var_1_12 + var_1_42) - var_1_76);
	} else {
		if ((~ (var_1_70 ^ var_1_36)) <= stepLocal_1) {
			if (var_1_21) {
				if (stepLocal_2 >= var_1_70) {
					var_1_11 = (max (var_1_85 , var_1_70));
				}
			} else {
				if (stepLocal_3 > var_1_85) {
					var_1_11 = (var_1_70 + ((var_1_12 + var_1_46) - var_1_42));
				}
			}
		} else {
			var_1_11 = (-256 + var_1_70);
		}
	}


	// From: Req18Batch79Amount500
	signed long int stepLocal_20 = ~ var_1_76;
	signed long int stepLocal_19 = (var_1_32 + var_1_102) % (min (var_1_51 , var_1_45));
	signed long int stepLocal_18 = var_1_11 * var_1_28;
	if (stepLocal_18 != var_1_46) {
		if (var_1_56 != var_1_35) {
			if (stepLocal_20 >= (abs (-10))) {
				if ((max (var_1_11 , var_1_27)) >= stepLocal_19) {
					var_1_57 = ((var_1_12 - var_1_45) + (min (var_1_33 , var_1_27)));
				} else {
					var_1_57 = (var_1_27 + var_1_33);
				}
			}
		}
	} else {
		var_1_57 = ((var_1_33 + var_1_12) + var_1_27);
	}


	// From: Req20Batch79Amount500
	unsigned long int stepLocal_23 = (var_1_57 * var_1_97) + var_1_38;
	if (var_1_22) {
		if (var_1_21) {
			if (stepLocal_23 >= var_1_32) {
				var_1_59 = (min (var_1_84 , var_1_76));
			} else {
				var_1_59 = ((max ((var_1_57 + var_1_12) , (var_1_60 - var_1_34))) - (min ((var_1_61 - var_1_96) , 64)));
			}
		} else {
			var_1_59 = var_1_28;
		}
	}


	// From: Req23Batch79Amount500
	if (var_1_41) {
		if (((var_1_84 >= var_1_61) || var_1_23) && (var_1_46 >= (var_1_69 + var_1_69))) {
			var_1_67 = (-10000 + (var_1_37 + var_1_76));
		}
	} else {
		var_1_67 = ((min (var_1_47 , (abs (var_1_34)))) + (min (var_1_76 , var_1_28)));
	}


	// From: Req1Batch79Amount500
	if (var_1_21 && var_1_21) {
		if (var_1_103 != 16.5) {
			var_1_1 = (max (-256 , var_1_76));
		} else {
			var_1_1 = (var_1_46 - var_1_36);
		}
	} else {
		var_1_1 = ((min (var_1_98 , var_1_98)) + var_1_102);
	}


	// From: Req11Batch79Amount500
	if ((max (var_1_69 , (1 / var_1_38))) < ((var_1_62 + var_1_70) + (var_1_46 + var_1_26))) {
		var_1_40 = (var_1_27 + var_1_12);
	} else {
		var_1_40 = (var_1_12 - var_1_34);
	}


	// From: Req3Batch79Amount500
	signed char stepLocal_5 = var_1_70;
	unsigned char stepLocal_4 = 50.5 <= (var_1_35 / 99999.24);
	if (var_1_41 && stepLocal_4) {
		var_1_16 = ((var_1_17 - var_1_18) + var_1_19);
	} else {
		if (stepLocal_5 < var_1_42) {
			var_1_16 = (var_1_17 - var_1_18);
		} else {
			var_1_16 = (max ((max ((1.000000025E7 - var_1_17) , (max (var_1_19 , var_1_18)))) , var_1_20));
		}
	}


	// From: Req15Batch79Amount500
	if (var_1_16 != (min (var_1_18 , (1.8 * var_1_52)))) {
		if ((~ (var_1_47 - var_1_85)) < (var_1_102 / (max (var_1_37 , var_1_28)))) {
			if (var_1_41 || (var_1_37 < var_1_97)) {
				var_1_48 = var_1_46;
			}
		} else {
			var_1_48 = var_1_69;
		}
	} else {
		var_1_48 = (abs (var_1_47));
	}


	// From: Req31Batch79Amount500
	if ((max ((var_1_44 - var_1_34) , -64)) != (-16 / 2)) {
		var_1_81 = ((max (var_1_46 , var_1_36)) - (var_1_78 + var_1_44));
	} else {
		var_1_81 = ((min ((var_1_26 - var_1_38) , (min (var_1_68 , var_1_32)))) + var_1_1);
	}


	// From: Req35Batch79Amount500
	if (var_1_92 <= var_1_55) {
		if (var_1_22 || ((var_1_99 > var_1_42) || var_1_24)) {
			var_1_88 = (var_1_76 - var_1_27);
		}
	} else {
		var_1_88 = ((var_1_51 - 5) - var_1_37);
	}


	// From: Req32Batch79Amount500
	var_1_83 = (abs (var_1_40 + var_1_78));


	// From: Req30Batch79Amount500
	signed long int stepLocal_27 = var_1_60 * (var_1_46 >> var_1_81);
	if (var_1_41) {
		var_1_79 = ((max (var_1_69 , (max (var_1_102 , var_1_47)))) + (max (50 , (abs (var_1_12)))));
	} else {
		if (var_1_74 > stepLocal_27) {
			var_1_79 = (var_1_26 + var_1_102);
		} else {
			var_1_79 = (max (256 , var_1_102));
		}
	}


	// From: Req5Batch79Amount500
	signed long int stepLocal_7 = var_1_12 - (var_1_26 - var_1_27);
	unsigned char stepLocal_6 = var_1_46;
	if (var_1_46 >= stepLocal_6) {
		var_1_25 = (min (var_1_46 , var_1_12));
	} else {
		if (stepLocal_7 != (var_1_48 & var_1_36)) {
			var_1_25 = (var_1_28 - (max (var_1_26 , var_1_27)));
		} else {
			if (var_1_41) {
				var_1_25 = (min ((4 + 100) , 16));
			} else {
				var_1_25 = var_1_12;
			}
		}
	}


	// From: Req16Batch79Amount500
	if (var_1_83 != var_1_26) {
		if (var_1_21 || (var_1_46 < var_1_33)) {
			var_1_50 = (var_1_85 + ((max (var_1_47 , var_1_27)) - var_1_37));
		}
	} else {
		var_1_50 = ((var_1_42 + var_1_68) - ((var_1_51 - var_1_38) - var_1_37));
	}


	// From: Req19Batch79Amount500
	signed char stepLocal_22 = var_1_26;
	signed long int stepLocal_21 = var_1_1 + var_1_99;
	if (stepLocal_22 >= var_1_47) {
		if (var_1_38 != stepLocal_21) {
			var_1_58 = (max ((min (var_1_44 , var_1_38)) , var_1_36));
		}
	} else {
		if (var_1_41) {
			var_1_58 = (var_1_38 + var_1_25);
		} else {
			var_1_58 = (var_1_28 - (200 + var_1_44));
		}
	}


	// From: Req6Batch79Amount500
	if ((var_1_17 - var_1_18) <= (- var_1_35)) {
		if (var_1_76 <= var_1_58) {
			if ((var_1_16 + var_1_16) >= (var_1_18 - var_1_17)) {
				var_1_29 = ((var_1_58 + -2) + var_1_40);
			} else {
				var_1_29 = (var_1_36 - var_1_12);
			}
		}
	}


	// From: Req28Batch79Amount500
	if (0 <= (var_1_32 * var_1_29)) {
		var_1_73 = (((max (var_1_74 , var_1_75)) - var_1_34) - var_1_51);
	}
}



void updateVariables() {
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 15);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854765600e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 63);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 32767);
	assume_abort_if_not(var_1_28 <= 65534);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -31);
	assume_abort_if_not(var_1_33 <= 31);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 63);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 95);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 31);
	assume_abort_if_not(var_1_44 <= 64);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 32);
	assume_abort_if_not(var_1_45 <= 63);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_51 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_51 >= 24574);
	assume_abort_if_not(var_1_51 <= 32766);
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= -461168.6018427382800e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -115292.1504606845700e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 1152921.504606845700e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= -115292.1504606845700e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 1152921.504606845700e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -230584.3009213691390e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691390e+12F && var_1_56 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_60 >= 1073741822);
	assume_abort_if_not(var_1_60 <= 2147483646);
	var_1_61 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_61 >= 1073741823);
	assume_abort_if_not(var_1_61 <= 2147483646);
	var_1_63 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_63 >= 49150);
	assume_abort_if_not(var_1_63 <= 65534);
	var_1_66 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_66 >= 536870912);
	assume_abort_if_not(var_1_66 <= 1073741824);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= -63);
	assume_abort_if_not(var_1_71 <= 63);
	var_1_74 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_74 >= 3221225470);
	assume_abort_if_not(var_1_74 <= 4294967294);
	var_1_75 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_75 >= 3221225470);
	assume_abort_if_not(var_1_75 <= 4294967294);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 127);
	assume_abort_if_not(var_1_77 <= 254);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 127);
	assume_abort_if_not(var_1_78 <= 254);
	var_1_86 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_86 >= 16383);
	assume_abort_if_not(var_1_86 <= 32767);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 31);
	assume_abort_if_not(var_1_87 <= 63);
	var_1_90 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_90 >= 0.0F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 2305843.009213691390e+12F && var_1_90 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_91 >= 0.0F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 2305843.009213691390e+12F && var_1_91 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_21 = var_1_21;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_102 = var_1_102;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((var_1_21 && var_1_21) ? ((var_1_103 != 16.5) ? (var_1_1 == ((signed short int) (max (-256 , var_1_76)))) : (var_1_1 == ((signed short int) (var_1_46 - var_1_36)))) : (var_1_1 == ((signed short int) ((min (var_1_98 , var_1_98)) + var_1_102)))) && ((((var_1_85 + var_1_36) << (abs (var_1_12))) <= (var_1_70 * var_1_76)) ? (var_1_11 == ((signed short int) ((var_1_12 + var_1_42) - var_1_76))) : (((~ (var_1_70 ^ var_1_36)) <= ((var_1_42 * var_1_76) & (max (-50 , var_1_42)))) ? (var_1_21 ? (((var_1_70 | (var_1_36 << var_1_76)) >= var_1_70) ? (var_1_11 == ((signed short int) (max (var_1_85 , var_1_70)))) : 1) : (((var_1_85 ^ var_1_70) > var_1_85) ? (var_1_11 == ((signed short int) (var_1_70 + ((var_1_12 + var_1_46) - var_1_42)))) : 1)) : (var_1_11 == ((signed short int) (-256 + var_1_70)))))) && ((var_1_41 && (50.5 <= (var_1_35 / 99999.24))) ? (var_1_16 == ((double) ((var_1_17 - var_1_18) + var_1_19))) : ((var_1_70 < var_1_42) ? (var_1_16 == ((double) (var_1_17 - var_1_18))) : (var_1_16 == ((double) (max ((max ((1.000000025E7 - var_1_17) , (max (var_1_19 , var_1_18)))) , var_1_20))))))) && ((var_1_17 <= last_1_var_1_92) ? (var_1_21 == ((unsigned char) (var_1_22 || (var_1_23 || var_1_24)))) : 1)) && ((var_1_46 >= var_1_46) ? (var_1_25 == ((unsigned short int) (min (var_1_46 , var_1_12)))) : (((var_1_12 - (var_1_26 - var_1_27)) != (var_1_48 & var_1_36)) ? (var_1_25 == ((unsigned short int) (var_1_28 - (max (var_1_26 , var_1_27))))) : (var_1_41 ? (var_1_25 == ((unsigned short int) (min ((4 + 100) , 16)))) : (var_1_25 == ((unsigned short int) var_1_12)))))) && (((var_1_17 - var_1_18) <= (- var_1_35)) ? ((var_1_76 <= var_1_58) ? (((var_1_16 + var_1_16) >= (var_1_18 - var_1_17)) ? (var_1_29 == ((signed long int) ((var_1_58 + -2) + var_1_40))) : (var_1_29 == ((signed long int) (var_1_36 - var_1_12)))) : 1) : 1)) && (((var_1_26 * 100) >= last_1_var_1_50) ? ((((min (last_1_var_1_52 , last_1_var_1_39)) < (var_1_17 - var_1_18)) || last_1_var_1_41) ? ((last_1_var_1_69 > var_1_27) ? (var_1_32 == ((signed char) var_1_27)) : (var_1_32 == ((signed char) (min ((abs (var_1_12)) , ((-8 + var_1_33) + var_1_27)))))) : (var_1_32 == ((signed char) (var_1_12 - var_1_27)))) : (var_1_32 == ((signed char) (-1 - (min ((var_1_34 - var_1_12) , (100 - var_1_27)))))))) && (((min (var_1_85 , var_1_26)) >= (var_1_34 + var_1_68)) ? (var_1_41 ? (var_1_35 == ((double) (var_1_18 + var_1_17))) : 1) : 1)) && ((last_1_var_1_39 < var_1_19) ? (var_1_36 == ((unsigned char) (var_1_34 + (min ((abs (var_1_12)) , var_1_27))))) : (last_1_var_1_41 ? (var_1_36 == ((unsigned char) (128 - var_1_34))) : (var_1_36 == ((unsigned char) (var_1_37 - ((var_1_38 - var_1_12) - var_1_27))))))) && (var_1_22 ? (var_1_39 == ((double) (min (var_1_18 , var_1_20)))) : (((var_1_12 / var_1_28) != var_1_42) ? (var_1_39 == ((double) var_1_18)) : (var_1_39 == ((double) var_1_20))))) && (((max (var_1_69 , (1 / var_1_38))) < ((var_1_62 + var_1_70) + (var_1_46 + var_1_26))) ? (var_1_40 == ((signed char) (var_1_27 + var_1_12))) : (var_1_40 == ((signed char) (var_1_12 - var_1_34))))) && (var_1_41 == ((unsigned char) (! (! 1))))) && ((last_1_var_1_41 && (last_1_var_1_73 >= (var_1_12 * last_1_var_1_36))) ? (var_1_42 == ((unsigned char) var_1_38)) : ((last_1_var_1_102 <= -64) ? (((1 | (last_1_var_1_36 >> last_1_var_1_73)) >= 1) ? (var_1_42 == ((unsigned char) (var_1_37 - var_1_12))) : 1) : (((last_1_var_1_46 / var_1_26) > (abs (max (last_1_var_1_68 , var_1_34)))) ? (last_1_var_1_21 ? ((last_1_var_1_81 >= 1000000000) ? (var_1_42 == ((unsigned char) (var_1_12 + (min (var_1_27 , var_1_34))))) : 1) : (var_1_42 == ((unsigned char) (var_1_26 + ((var_1_44 + var_1_45) - var_1_12))))) : 1)))) && (((8u + last_1_var_1_76) > var_1_12) ? (var_1_46 == ((unsigned char) (abs (var_1_37 - var_1_47)))) : 1)) && ((var_1_16 != (min (var_1_18 , (1.8 * var_1_52)))) ? (((~ (var_1_47 - var_1_85)) < (var_1_102 / (max (var_1_37 , var_1_28)))) ? ((var_1_41 || (var_1_37 < var_1_97)) ? (var_1_48 == ((unsigned short int) var_1_46)) : 1) : (var_1_48 == ((unsigned short int) var_1_69))) : (var_1_48 == ((unsigned short int) (abs (var_1_47)))))) && ((var_1_83 != var_1_26) ? ((var_1_21 || (var_1_46 < var_1_33)) ? (var_1_50 == ((signed short int) (var_1_85 + ((max (var_1_47 , var_1_27)) - var_1_37)))) : 1) : (var_1_50 == ((signed short int) ((var_1_42 + var_1_68) - ((var_1_51 - var_1_38) - var_1_37)))))) && (var_1_24 ? (var_1_52 == ((float) ((max ((min (var_1_17 , var_1_19)) , var_1_18)) + var_1_53))) : (var_1_52 == ((float) (var_1_53 + ((var_1_54 + var_1_55) + var_1_56)))))) && (((var_1_11 * var_1_28) != var_1_46) ? ((var_1_56 != var_1_35) ? (((~ var_1_76) >= (abs (-10))) ? (((max (var_1_11 , var_1_27)) >= ((var_1_32 + var_1_102) % (min (var_1_51 , var_1_45)))) ? (var_1_57 == ((signed char) ((var_1_12 - var_1_45) + (min (var_1_33 , var_1_27))))) : (var_1_57 == ((signed char) (var_1_27 + var_1_33)))) : 1) : 1) : (var_1_57 == ((signed char) ((var_1_33 + var_1_12) + var_1_27))))) && ((var_1_26 >= var_1_47) ? ((var_1_38 != (var_1_1 + var_1_99)) ? (var_1_58 == ((unsigned short int) (max ((min (var_1_44 , var_1_38)) , var_1_36)))) : 1) : (var_1_41 ? (var_1_58 == ((unsigned short int) (var_1_38 + var_1_25))) : (var_1_58 == ((unsigned short int) (var_1_28 - (200 + var_1_44))))))) && (var_1_22 ? (var_1_21 ? ((((var_1_57 * var_1_97) + var_1_38) >= var_1_32) ? (var_1_59 == ((signed long int) (min (var_1_84 , var_1_76)))) : (var_1_59 == ((signed long int) ((max ((var_1_57 + var_1_12) , (var_1_60 - var_1_34))) - (min ((var_1_61 - var_1_96) , 64)))))) : (var_1_59 == ((signed long int) var_1_28))) : 1)) && (((128 - last_1_var_1_29) <= (max (var_1_28 , last_1_var_1_46))) ? ((last_1_var_1_21 || var_1_24) ? (var_1_62 == ((unsigned short int) ((var_1_63 - var_1_38) - 25))) : (var_1_62 == ((unsigned short int) ((var_1_51 - (last_1_var_1_93 + var_1_34)) + last_1_var_1_88)))) : ((var_1_17 < var_1_19) ? (var_1_62 == ((unsigned short int) (var_1_34 + 50))) : (var_1_62 == ((unsigned short int) (abs (last_1_var_1_46))))))) && ((var_1_32 > (128 - var_1_12)) ? (((var_1_17 - var_1_18) > (var_1_52 * var_1_54)) ? (var_1_64 == ((unsigned long int) (min (var_1_47 , var_1_63)))) : (var_1_64 == ((unsigned long int) (4158395559u - ((var_1_66 - 2u) + 25u))))) : 1)) && (var_1_41 ? ((((var_1_84 >= var_1_61) || var_1_23) && (var_1_46 >= (var_1_69 + var_1_69))) ? (var_1_67 == ((signed long int) (-10000 + (var_1_37 + var_1_76)))) : 1) : (var_1_67 == ((signed long int) ((min (var_1_47 , (abs (var_1_34)))) + (min (var_1_76 , var_1_28))))))) && (var_1_21 ? (var_1_68 == ((unsigned short int) (min (var_1_69 , (max (var_1_26 , (min (var_1_47 , var_1_27)))))))) : (var_1_68 == ((unsigned short int) (var_1_38 + var_1_46))))) && (var_1_41 ? (var_1_69 == ((unsigned char) (var_1_37 - ((abs (var_1_45)) + var_1_27)))) : 1)) && ((var_1_18 < var_1_72) ? (var_1_70 == ((signed char) (min (var_1_34 , ((max (var_1_71 , var_1_12)) + (max (var_1_27 , var_1_45))))))) : (var_1_70 == ((signed char) var_1_71)))) && ((var_1_64 < 5) ? (var_1_72 == ((double) ((abs (var_1_17)) + 1000000.5))) : (var_1_72 == ((double) (max ((abs (var_1_53 + var_1_18)) , (var_1_19 + var_1_54))))))) && ((0 <= (var_1_32 * var_1_29)) ? (var_1_73 == ((unsigned long int) (((max (var_1_74 , var_1_75)) - var_1_34) - var_1_51))) : 1)) && ((var_1_21 && var_1_22) ? ((var_1_85 > var_1_32) ? (var_1_76 == ((unsigned char) (var_1_37 - var_1_12))) : ((last_1_var_1_76 >= (var_1_37 / var_1_26)) ? (var_1_76 == ((unsigned char) ((var_1_44 + 4) + var_1_12))) : (var_1_76 == ((unsigned char) ((min (var_1_37 , var_1_77)) - var_1_27))))) : (var_1_76 == ((unsigned char) (var_1_78 - var_1_38))))) && (var_1_41 ? (var_1_79 == ((unsigned short int) ((max (var_1_69 , (max (var_1_102 , var_1_47)))) + (max (50 , (abs (var_1_12))))))) : ((var_1_74 > (var_1_60 * (var_1_46 >> var_1_81))) ? (var_1_79 == ((unsigned short int) (var_1_26 + var_1_102))) : (var_1_79 == ((unsigned short int) (max (256 , var_1_102))))))) && (((max ((var_1_44 - var_1_34) , -64)) != (-16 / 2)) ? (var_1_81 == ((signed short int) ((max (var_1_46 , var_1_36)) - (var_1_78 + var_1_44)))) : (var_1_81 == ((signed short int) ((min ((var_1_26 - var_1_38) , (min (var_1_68 , var_1_32)))) + var_1_1))))) && (var_1_83 == ((unsigned short int) (abs (var_1_40 + var_1_78))))) && ((var_1_46 < (~ var_1_66)) ? ((var_1_44 != var_1_37) ? (var_1_84 == ((unsigned long int) var_1_47)) : 1) : 1)) && ((! var_1_23) ? ((((var_1_86 - var_1_99) - (var_1_51 - 25)) < var_1_12) ? (var_1_85 == ((unsigned char) (var_1_37 - var_1_34))) : 1) : (var_1_85 == ((unsigned char) (((var_1_44 + var_1_45) - (var_1_87 - var_1_12)) + (min ((min (var_1_27 , var_1_26)) , var_1_38))))))) && ((var_1_92 <= var_1_55) ? ((var_1_22 || ((var_1_99 > var_1_42) || var_1_24)) ? (var_1_88 == ((signed short int) (var_1_76 - var_1_27))) : 1) : (var_1_88 == ((signed short int) ((var_1_51 - 5) - var_1_37))))) && ((var_1_55 > var_1_103) ? (var_1_89 == ((float) (var_1_18 - ((var_1_90 + var_1_91) + var_1_17)))) : (var_1_24 ? (var_1_41 ? (var_1_89 == ((float) (var_1_17 - var_1_91))) : 1) : (var_1_89 == ((float) var_1_18))))) && (var_1_21 ? (var_1_92 == ((float) var_1_19)) : (var_1_92 == ((float) 9.99999999925E9f)))) && (var_1_93 == ((unsigned long int) var_1_69))) && (var_1_21 ? (var_1_95 == ((signed long int) var_1_42)) : (var_1_95 == ((signed long int) var_1_42)))) && (var_1_23 ? (var_1_96 == ((signed short int) var_1_102)) : (var_1_96 == ((signed short int) var_1_69)))) && (var_1_24 ? (var_1_97 == ((unsigned long int) 2u)) : (var_1_97 == ((unsigned long int) var_1_68)))) && (var_1_21 ? (var_1_98 == ((signed char) var_1_87)) : (var_1_98 == ((signed char) var_1_45)))) && (var_1_21 ? (var_1_99 == ((unsigned short int) var_1_27)) : (var_1_99 == ((unsigned short int) var_1_69)))) && (var_1_41 ? (var_1_100 == ((signed long int) var_1_77)) : 1)) && (var_1_41 ? (var_1_102 == ((signed char) var_1_44)) : (var_1_102 == ((signed char) var_1_45)))) && ((var_1_36 >= ((var_1_62 * var_1_44) + 4u)) ? ((! var_1_21) ? (((7.7f - var_1_17) < var_1_19) ? (var_1_103 == ((float) var_1_90)) : (var_1_103 == ((float) var_1_91))) : (var_1_103 == ((float) var_1_17))) : 1)
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
