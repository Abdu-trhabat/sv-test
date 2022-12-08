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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch0Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 64;
double var_1_2 = 99999999999.3;
double var_1_3 = 1.7;
signed short int var_1_9 = -5;
double var_1_10 = 128.6;
double var_1_13 = 0.5;
double var_1_14 = 24.875;
double var_1_15 = 500.5;
double var_1_16 = 3.8;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 1;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed long int var_1_24 = 25;
signed long int var_1_25 = -2;
signed long int var_1_26 = 500;
float var_1_27 = 25.5;
signed char var_1_28 = -1;
signed char var_1_29 = 16;
signed char var_1_30 = 32;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 64;
unsigned char var_1_33 = 100;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 5;
unsigned char var_1_36 = 2;
double var_1_37 = 100000000000.4;
float var_1_38 = 8.25;
float var_1_39 = 64.6;
signed short int var_1_40 = -2;
signed short int var_1_41 = 17861;
signed char var_1_42 = 5;
signed char var_1_43 = 32;
signed char var_1_44 = 50;
signed char var_1_45 = 8;
signed char var_1_46 = 64;
signed char var_1_47 = 100;
signed short int var_1_48 = -2;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 128;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 0;
double var_1_54 = 63.6;
double var_1_55 = 63.4;
double var_1_56 = 50.8;
float var_1_57 = 127.875;
float var_1_58 = 0.0;
signed short int var_1_61 = -256;
signed long int var_1_63 = 32;
signed long int var_1_64 = 1478045062;
unsigned char var_1_65 = 0;
signed long int var_1_66 = -16;
float var_1_67 = 0.9;
double var_1_69 = 8.25;
unsigned short int var_1_71 = 128;
unsigned short int var_1_72 = 40582;
signed char var_1_73 = 5;
unsigned long int var_1_74 = 64;
unsigned long int var_1_75 = 3743035317;
signed short int var_1_76 = -200;
float var_1_77 = 63.25;
double var_1_78 = 127.6;
unsigned char var_1_79 = 1;
signed char var_1_80 = -25;
double var_1_81 = 8.6;
signed long int var_1_82 = 2;
double var_1_83 = 9999999999999.7;
unsigned char var_1_84 = 128;
unsigned char var_1_85 = 1;
double var_1_86 = 2.6;
unsigned short int var_1_87 = 128;
unsigned char var_1_88 = 0;
double var_1_89 = 100.8;
signed char var_1_90 = -32;
unsigned long int var_1_91 = 8;
unsigned char var_1_92 = 0;
unsigned long int var_1_93 = 1;
double var_1_94 = 127.5;
double var_1_95 = 5.8;
double var_1_96 = 0.3;
signed long int var_1_97 = -10;
signed short int var_1_98 = -32;
double var_1_99 = 499.625;
unsigned short int var_1_100 = 32;
unsigned char var_1_101 = 8;
unsigned long int var_1_102 = 4;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 64;
signed short int last_1_var_1_9 = -5;
signed char last_1_var_1_28 = -1;
unsigned char last_1_var_1_53 = 0;
float last_1_var_1_57 = 127.875;
signed short int last_1_var_1_61 = -256;
unsigned char last_1_var_1_65 = 0;
float last_1_var_1_67 = 0.9;
signed short int last_1_var_1_76 = -200;
float last_1_var_1_77 = 63.25;
double last_1_var_1_78 = 127.6;
signed char last_1_var_1_80 = -25;
unsigned long int last_1_var_1_93 = 1;
signed long int last_1_var_1_97 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch0Amount500
	if (last_1_var_1_65) {
		if ((last_1_var_1_77 * (var_1_2 - var_1_3)) <= last_1_var_1_67) {
			var_1_10 = var_1_13;
		} else {
			var_1_10 = ((var_1_14 + var_1_15) - var_1_16);
		}
	}


	// From: Req25Batch0Amount500
	unsigned char stepLocal_23 = var_1_34;
	signed long int stepLocal_22 = last_1_var_1_76;
	if (last_1_var_1_78 <= (- var_1_58)) {
		if (last_1_var_1_53 <= stepLocal_22) {
			if (stepLocal_23 > 64) {
				var_1_66 = last_1_var_1_28;
			} else {
				var_1_66 = (abs (last_1_var_1_53 - var_1_32));
			}
		} else {
			var_1_66 = last_1_var_1_80;
		}
	} else {
		var_1_66 = (min (last_1_var_1_93 , (max (32 , last_1_var_1_76))));
	}


	// From: Req8Batch0Amount500
	signed long int stepLocal_6 = last_1_var_1_53;
	unsigned char stepLocal_5 = last_1_var_1_53 < last_1_var_1_97;
	unsigned char stepLocal_4 = var_1_22;
	unsigned char stepLocal_3 = var_1_15 <= var_1_13;
	if (var_1_22 && stepLocal_3) {
		if (stepLocal_5 || last_1_var_1_65) {
			if ((var_1_18 && var_1_23) && stepLocal_4) {
				var_1_31 = (var_1_29 + 1);
			} else {
				if ((last_1_var_1_80 * last_1_var_1_97) == stepLocal_6) {
					var_1_31 = (max (var_1_30 , ((var_1_32 + var_1_33) - var_1_29)));
				}
			}
		} else {
			var_1_31 = (((var_1_34 - var_1_35) + (var_1_36 + 16)) + var_1_29);
		}
	} else {
		if (last_1_var_1_65) {
			var_1_31 = 64;
		}
	}


	// From: Req18Batch0Amount500
	signed long int stepLocal_9 = max (var_1_30 , (-5 % var_1_50));
	if (last_1_var_1_61 >= stepLocal_9) {
		var_1_52 = (abs (var_1_47));
	} else {
		var_1_52 = var_1_29;
	}


	// From: Req19Batch0Amount500
	signed long int stepLocal_13 = var_1_47 - 16;
	signed long int stepLocal_12 = var_1_43 / (max (var_1_47 , var_1_32));
	signed long int stepLocal_11 = var_1_35 & var_1_30;
	signed short int stepLocal_10 = var_1_41;
	if (stepLocal_13 <= last_1_var_1_1) {
		if (! last_1_var_1_65) {
			if (last_1_var_1_9 != stepLocal_10) {
				var_1_53 = ((abs (abs (var_1_50))) - var_1_36);
			} else {
				if (stepLocal_12 < (-16 + last_1_var_1_53)) {
					if (stepLocal_11 >= 1000) {
						var_1_53 = (min ((var_1_29 + var_1_30) , (abs (var_1_36))));
					}
				} else {
					var_1_53 = var_1_43;
				}
			}
		} else {
			var_1_53 = var_1_36;
		}
	} else {
		var_1_53 = ((abs (25)) + var_1_30);
	}


	// From: Req37Batch0Amount500
	signed char stepLocal_27 = var_1_44;
	if (var_1_64 <= stepLocal_27) {
		var_1_82 = var_1_53;
	}


	// From: Req54Batch0Amount500
	var_1_102 = var_1_53;


	// From: Req9Batch0Amount500
	if (var_1_30 <= (-5 / var_1_25)) {
		if ((min ((~ 128) , (~ var_1_82))) > var_1_26) {
			if ((~ (var_1_25 >> var_1_30)) == (~ var_1_32)) {
				var_1_37 = (var_1_14 + var_1_15);
			}
		}
	}


	// From: Req11Batch0Amount500
	var_1_39 = (min (var_1_16 , ((min (var_1_14 , var_1_15)) - 128.3f)));


	// From: Req14Batch0Amount500
	if (var_1_23) {
		if ((var_1_15 - var_1_14) > 16.5) {
			var_1_46 = (var_1_29 - 4);
		} else {
			var_1_46 = (var_1_43 - (min ((var_1_47 - var_1_44) , var_1_36)));
		}
	} else {
		var_1_46 = ((max ((var_1_43 + var_1_35) , var_1_47)) - var_1_45);
	}


	// From: Req23Batch0Amount500
	var_1_63 = ((min (var_1_52 , (var_1_64 - var_1_32))) - var_1_45);


	// From: Req24Batch0Amount500
	var_1_65 = ((var_1_21 || var_1_20) && (last_1_var_1_65 || var_1_22));


	// From: Req29Batch0Amount500
	if ((var_1_32 / 5u) > var_1_64) {
		var_1_73 = ((var_1_43 - var_1_44) + var_1_45);
	}


	// From: Req31Batch0Amount500
	var_1_76 = (abs (var_1_50));


	// From: Req32Batch0Amount500
	if (var_1_18) {
		var_1_77 = var_1_15;
	}


	// From: Req38Batch0Amount500
	var_1_83 = var_1_13;


	// From: Req39Batch0Amount500
	var_1_84 = var_1_85;


	// From: Req40Batch0Amount500
	var_1_86 = var_1_15;


	// From: Req41Batch0Amount500
	if (var_1_21) {
		var_1_87 = 1;
	}


	// From: Req42Batch0Amount500
	if (var_1_21) {
		var_1_88 = var_1_23;
	} else {
		var_1_88 = var_1_22;
	}


	// From: Req43Batch0Amount500
	if (var_1_18) {
		var_1_89 = var_1_58;
	}


	// From: Req44Batch0Amount500
	var_1_90 = var_1_30;


	// From: Req45Batch0Amount500
	var_1_91 = var_1_72;


	// From: Req46Batch0Amount500
	var_1_92 = var_1_21;


	// From: Req47Batch0Amount500
	var_1_93 = var_1_29;


	// From: Req48Batch0Amount500
	if (var_1_20) {
		var_1_94 = var_1_95;
	} else {
		var_1_94 = var_1_96;
	}


	// From: Req53Batch0Amount500
	var_1_101 = var_1_34;


	// From: Req35Batch0Amount500
	signed long int stepLocal_26 = var_1_25;
	if (var_1_65) {
		if ((min (var_1_29 , (min (last_1_var_1_80 , var_1_31)))) > stepLocal_26) {
			var_1_80 = (abs (var_1_36));
		} else {
			var_1_80 = (min (var_1_43 , var_1_45));
		}
	} else {
		var_1_80 = (abs (abs (16)));
	}


	// From: Req4Batch0Amount500
	if (var_1_14 >= (var_1_16 + var_1_3)) {
		if ((var_1_53 + 10) >= ((-500 + var_1_84) * var_1_52)) {
			if ((min (var_1_52 , var_1_53)) >= var_1_84) {
				var_1_17 = (! (! var_1_18));
			}
		}
	} else {
		if (var_1_52 == ((var_1_52 + var_1_52) - var_1_53)) {
			var_1_17 = ((var_1_92 && var_1_18) || var_1_20);
		} else {
			if ((- var_1_52) == var_1_53) {
				var_1_17 = (! (var_1_20 && var_1_18));
			} else {
				if (var_1_20) {
					if (var_1_18) {
						var_1_17 = ((var_1_16 != (- 9.125)) || (var_1_21 && var_1_22));
					} else {
						var_1_17 = ((var_1_52 <= var_1_52) && var_1_23);
					}
				}
			}
		}
	}


	// From: Req7Batch0Amount500
	if (var_1_18) {
		if (var_1_53 != (min (var_1_101 , last_1_var_1_28))) {
			if ((var_1_101 % var_1_25) == var_1_52) {
				var_1_28 = (abs (var_1_29 - var_1_30));
			}
		} else {
			var_1_28 = 100;
		}
	} else {
		var_1_28 = var_1_29;
	}


	// From: Req50Batch0Amount500
	var_1_98 = var_1_28;


	// From: Req51Batch0Amount500
	if (var_1_17) {
		var_1_99 = var_1_96;
	} else {
		var_1_99 = var_1_95;
	}


	// From: Req2Batch0Amount500
	var_1_9 = ((max (var_1_53 , var_1_53)) - (max ((27761 - var_1_101) , var_1_53)));


	// From: Req28Batch0Amount500
	unsigned char stepLocal_24 = var_1_53;
	if (var_1_92) {
		if (stepLocal_24 >= var_1_50) {
			var_1_71 = (var_1_72 - (abs (var_1_34)));
		}
	} else {
		var_1_71 = (var_1_72 - (min (var_1_53 , (abs (var_1_41)))));
	}


	// From: Req12Batch0Amount500
	if (var_1_53 < (var_1_101 / var_1_34)) {
		var_1_40 = (var_1_34 + var_1_32);
	} else {
		var_1_40 = ((var_1_41 - var_1_84) - (max (var_1_35 , var_1_53)));
	}


	// From: Req30Batch0Amount500
	if (! var_1_65) {
		if (var_1_23) {
			var_1_74 = (var_1_44 + var_1_101);
		}
	} else {
		if (var_1_15 < (5.25 - var_1_56)) {
			var_1_74 = (max ((var_1_75 - var_1_44) , 8u));
		} else {
			var_1_74 = (var_1_44 + var_1_45);
		}
	}


	// From: Req49Batch0Amount500
	var_1_97 = var_1_98;


	// From: Req6Batch0Amount500
	signed long int stepLocal_2 = var_1_26;
	signed long int stepLocal_1 = 16;
	if (stepLocal_1 < (max (var_1_84 , (var_1_84 / var_1_25)))) {
		if ((var_1_71 * (var_1_84 % var_1_25)) < stepLocal_2) {
			var_1_27 = (max ((var_1_15 - var_1_14) , var_1_16));
		} else {
			var_1_27 = (min (var_1_16 , (var_1_15 + var_1_14)));
		}
	} else {
		var_1_27 = ((var_1_15 + var_1_14) - var_1_16);
	}


	// From: Req13Batch0Amount500
	if (var_1_13 > var_1_27) {
		var_1_42 = (var_1_30 - ((var_1_43 + var_1_44) - (var_1_35 + var_1_45)));
	} else {
		var_1_42 = var_1_29;
	}


	// From: Req36Batch0Amount500
	if ((10000000 <= var_1_74) || (var_1_37 < var_1_27)) {
		if (var_1_86 > var_1_94) {
			var_1_81 = (abs (var_1_58));
		}
	}


	// From: Req34Batch0Amount500
	if ((var_1_35 * 5) > var_1_66) {
		if (var_1_14 < var_1_58) {
			var_1_79 = ((var_1_86 < var_1_27) || (! var_1_23));
		} else {
			var_1_79 = ((var_1_77 > var_1_10) || var_1_20);
		}
	} else {
		var_1_79 = (! var_1_18);
	}


	// From: Req16Batch0Amount500
	signed char stepLocal_8 = var_1_42;
	signed long int stepLocal_7 = var_1_66;
	if (var_1_102 <= stepLocal_7) {
		if (! var_1_20) {
			var_1_49 = (abs (var_1_29 + var_1_30));
		} else {
			if (stepLocal_8 <= var_1_34) {
				var_1_49 = (max ((min (8 , var_1_29)) , 1));
			} else {
				var_1_49 = (max ((var_1_50 - var_1_47) , var_1_33));
			}
		}
	} else {
		var_1_49 = (var_1_50 - var_1_36);
	}


	// From: Req20Batch0Amount500
	signed long int stepLocal_14 = var_1_82;
	if (stepLocal_14 <= var_1_97) {
		var_1_54 = ((99.75 - (max (var_1_15 , var_1_14))) + var_1_55);
	} else {
		if ((- var_1_55) <= var_1_15) {
			var_1_54 = ((max (var_1_14 , var_1_15)) - (min (var_1_16 , var_1_56)));
		}
	}


	// From: Req17Batch0Amount500
	if (var_1_84 != var_1_66) {
		if (var_1_36 <= var_1_33) {
			var_1_51 = (! var_1_23);
		}
	} else {
		if (var_1_2 >= (- (var_1_27 + 24.7))) {
			var_1_51 = ((var_1_21 && var_1_22) && var_1_18);
		}
	}


	// From: Req27Batch0Amount500
	if ((var_1_83 == var_1_55) || (1.625f <= var_1_54)) {
		var_1_69 = (max (var_1_56 , 256.75));
	} else {
		var_1_69 = (99.75 + var_1_55);
	}


	// From: Req26Batch0Amount500
	if (var_1_79) {
		var_1_67 = (max (var_1_15 , (var_1_55 + var_1_14)));
	}


	// From: Req1Batch0Amount500
	if ((var_1_2 - var_1_3) == (- var_1_99)) {
		if (var_1_3 <= ((var_1_99 * 1.5) + 127.4)) {
			var_1_1 = (var_1_84 - ((var_1_101 + var_1_52) + var_1_49));
		} else {
			var_1_1 = (min ((var_1_49 - (var_1_52 + var_1_101)) , var_1_84));
		}
	} else {
		var_1_1 = (var_1_49 - (var_1_101 + var_1_52));
	}


	// From: Req52Batch0Amount500
	unsigned long int stepLocal_28 = var_1_36 | var_1_102;
	if ((var_1_43 << var_1_1) <= stepLocal_28) {
		var_1_100 = (var_1_82 + (var_1_30 + var_1_29));
	} else {
		var_1_100 = var_1_98;
	}


	// From: Req15Batch0Amount500
	if ((var_1_34 >= var_1_26) && ((var_1_51 || var_1_88) && var_1_21)) {
		var_1_48 = (abs (var_1_29));
	} else {
		if (((var_1_34 - var_1_53) / -2) > (var_1_43 / -10)) {
			var_1_48 = (var_1_52 + var_1_52);
		}
	}


	// From: Req22Batch0Amount500
	unsigned char stepLocal_21 = var_1_31;
	unsigned char stepLocal_20 = (var_1_58 == var_1_54) && var_1_23;
	unsigned char stepLocal_19 = var_1_20;
	if (((var_1_3 + var_1_69) + (var_1_89 / var_1_58)) < var_1_16) {
		if (stepLocal_20 || ((var_1_27 * var_1_3) >= var_1_54)) {
			if (var_1_15 <= var_1_39) {
				var_1_61 = (var_1_52 - (var_1_53 + var_1_45));
			} else {
				var_1_61 = (var_1_35 - ((min (var_1_52 , var_1_33)) + var_1_47));
			}
		} else {
			var_1_61 = ((var_1_33 + var_1_35) - 2);
		}
	} else {
		if ((var_1_14 + var_1_16) < (min (var_1_27 , var_1_15))) {
			var_1_61 = ((var_1_41 - (min (var_1_48 , var_1_101))) - (26733 - (max (var_1_35 , var_1_30))));
		} else {
			if (stepLocal_19 && ((~ var_1_25) <= 128)) {
				if (! var_1_17) {
					if (stepLocal_21 <= last_1_var_1_61) {
						var_1_61 = (var_1_29 - 32);
					}
				} else {
					var_1_61 = ((max ((abs (var_1_47)) , var_1_52)) + var_1_73);
				}
			}
		}
	}


	// From: Req5Batch0Amount500
	signed long int stepLocal_0 = var_1_52 & var_1_101;
	if (99.75f <= var_1_67) {
		if (stepLocal_0 != (var_1_76 / (min (var_1_25 , var_1_26)))) {
			var_1_24 = var_1_52;
		} else {
			var_1_24 = 100;
		}
	}


	// From: Req10Batch0Amount500
	if (var_1_2 > var_1_67) {
		var_1_38 = (abs ((abs (var_1_16)) - var_1_14));
	}


	// From: Req21Batch0Amount500
	unsigned char stepLocal_18 = var_1_101;
	signed short int stepLocal_17 = var_1_9;
	unsigned char stepLocal_16 = var_1_71 < (var_1_32 - var_1_34);
	signed char stepLocal_15 = var_1_73;
	if ((var_1_3 != last_1_var_1_57) || stepLocal_16) {
		if (stepLocal_17 <= -5) {
			if (var_1_1 < stepLocal_15) {
				var_1_57 = (var_1_16 - (var_1_58 - var_1_14));
			}
		} else {
			if (stepLocal_18 < ((var_1_101 + var_1_63) * (var_1_40 ^ var_1_102))) {
				var_1_57 = ((max (var_1_15 , var_1_55)) + var_1_14);
			} else {
				var_1_57 = ((255.4f + var_1_14) - 5.75f);
			}
		}
	} else {
		var_1_57 = (abs (var_1_56));
	}


	// From: Req33Batch0Amount500
	signed char stepLocal_25 = var_1_73;
	if (stepLocal_25 <= var_1_100) {
		if (var_1_21) {
			var_1_78 = (max (((var_1_14 + 9999999.2) - var_1_15) , (var_1_58 - var_1_16)));
		}
	} else {
		var_1_78 = (var_1_55 + var_1_14);
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	assume_abort_if_not(var_1_25 != 0);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	assume_abort_if_not(var_1_26 != 0);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 63);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 64);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 32);
	assume_abort_if_not(var_1_34 <= 64);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 32);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= 16382);
	assume_abort_if_not(var_1_41 <= 32766);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 31);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 32);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 31);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 63);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 127);
	assume_abort_if_not(var_1_50 <= 254);
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= -461168.6018427382800e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854765600e+12F && var_1_56 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 4611686.018427382800e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854765600e+12F && var_1_58 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_64 >= 1073741822);
	assume_abort_if_not(var_1_64 <= 2147483646);
	var_1_72 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_72 >= 32767);
	assume_abort_if_not(var_1_72 <= 65534);
	var_1_75 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_75 >= 2147483647);
	assume_abort_if_not(var_1_75 <= 4294967294);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 254);
	var_1_95 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_95 >= -922337.2036854765600e+13F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 9223372.036854765600e+12F && var_1_95 >= 1.0e-20F ));
	var_1_96 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_96 >= -922337.2036854765600e+13F && var_1_96 <= -1.0e-20F) || (var_1_96 <= 9223372.036854765600e+12F && var_1_96 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_97 = var_1_97;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_2 - var_1_3) == (- var_1_99)) ? ((var_1_3 <= ((var_1_99 * 1.5) + 127.4)) ? (var_1_1 == ((signed short int) (var_1_84 - ((var_1_101 + var_1_52) + var_1_49)))) : (var_1_1 == ((signed short int) (min ((var_1_49 - (var_1_52 + var_1_101)) , var_1_84))))) : (var_1_1 == ((signed short int) (var_1_49 - (var_1_101 + var_1_52))))) && (var_1_9 == ((signed short int) ((max (var_1_53 , var_1_53)) - (max ((27761 - var_1_101) , var_1_53)))))) && (last_1_var_1_65 ? (((last_1_var_1_77 * (var_1_2 - var_1_3)) <= last_1_var_1_67) ? (var_1_10 == ((double) var_1_13)) : (var_1_10 == ((double) ((var_1_14 + var_1_15) - var_1_16)))) : 1)) && ((var_1_14 >= (var_1_16 + var_1_3)) ? (((var_1_53 + 10) >= ((-500 + var_1_84) * var_1_52)) ? (((min (var_1_52 , var_1_53)) >= var_1_84) ? (var_1_17 == ((unsigned char) (! (! var_1_18)))) : 1) : 1) : ((var_1_52 == ((var_1_52 + var_1_52) - var_1_53)) ? (var_1_17 == ((unsigned char) ((var_1_92 && var_1_18) || var_1_20))) : (((- var_1_52) == var_1_53) ? (var_1_17 == ((unsigned char) (! (var_1_20 && var_1_18)))) : (var_1_20 ? (var_1_18 ? (var_1_17 == ((unsigned char) ((var_1_16 != (- 9.125)) || (var_1_21 && var_1_22)))) : (var_1_17 == ((unsigned char) ((var_1_52 <= var_1_52) && var_1_23)))) : 1))))) && ((99.75f <= var_1_67) ? (((var_1_52 & var_1_101) != (var_1_76 / (min (var_1_25 , var_1_26)))) ? (var_1_24 == ((signed long int) var_1_52)) : (var_1_24 == ((signed long int) 100))) : 1)) && ((16 < (max (var_1_84 , (var_1_84 / var_1_25)))) ? (((var_1_71 * (var_1_84 % var_1_25)) < var_1_26) ? (var_1_27 == ((float) (max ((var_1_15 - var_1_14) , var_1_16)))) : (var_1_27 == ((float) (min (var_1_16 , (var_1_15 + var_1_14)))))) : (var_1_27 == ((float) ((var_1_15 + var_1_14) - var_1_16))))) && (var_1_18 ? ((var_1_53 != (min (var_1_101 , last_1_var_1_28))) ? (((var_1_101 % var_1_25) == var_1_52) ? (var_1_28 == ((signed char) (abs (var_1_29 - var_1_30)))) : 1) : (var_1_28 == ((signed char) 100))) : (var_1_28 == ((signed char) var_1_29)))) && ((var_1_22 && (var_1_15 <= var_1_13)) ? (((last_1_var_1_53 < last_1_var_1_97) || last_1_var_1_65) ? (((var_1_18 && var_1_23) && var_1_22) ? (var_1_31 == ((unsigned char) (var_1_29 + 1))) : (((last_1_var_1_80 * last_1_var_1_97) == last_1_var_1_53) ? (var_1_31 == ((unsigned char) (max (var_1_30 , ((var_1_32 + var_1_33) - var_1_29))))) : 1)) : (var_1_31 == ((unsigned char) (((var_1_34 - var_1_35) + (var_1_36 + 16)) + var_1_29)))) : (last_1_var_1_65 ? (var_1_31 == ((unsigned char) 64)) : 1))) && ((var_1_30 <= (-5 / var_1_25)) ? (((min ((~ 128) , (~ var_1_82))) > var_1_26) ? (((~ (var_1_25 >> var_1_30)) == (~ var_1_32)) ? (var_1_37 == ((double) (var_1_14 + var_1_15))) : 1) : 1) : 1)) && ((var_1_2 > var_1_67) ? (var_1_38 == ((float) (abs ((abs (var_1_16)) - var_1_14)))) : 1)) && (var_1_39 == ((float) (min (var_1_16 , ((min (var_1_14 , var_1_15)) - 128.3f)))))) && ((var_1_53 < (var_1_101 / var_1_34)) ? (var_1_40 == ((signed short int) (var_1_34 + var_1_32))) : (var_1_40 == ((signed short int) ((var_1_41 - var_1_84) - (max (var_1_35 , var_1_53))))))) && ((var_1_13 > var_1_27) ? (var_1_42 == ((signed char) (var_1_30 - ((var_1_43 + var_1_44) - (var_1_35 + var_1_45))))) : (var_1_42 == ((signed char) var_1_29)))) && (var_1_23 ? (((var_1_15 - var_1_14) > 16.5) ? (var_1_46 == ((signed char) (var_1_29 - 4))) : (var_1_46 == ((signed char) (var_1_43 - (min ((var_1_47 - var_1_44) , var_1_36)))))) : (var_1_46 == ((signed char) ((max ((var_1_43 + var_1_35) , var_1_47)) - var_1_45))))) && (((var_1_34 >= var_1_26) && ((var_1_51 || var_1_88) && var_1_21)) ? (var_1_48 == ((signed short int) (abs (var_1_29)))) : ((((var_1_34 - var_1_53) / -2) > (var_1_43 / -10)) ? (var_1_48 == ((signed short int) (var_1_52 + var_1_52))) : 1))) && ((var_1_102 <= var_1_66) ? ((! var_1_20) ? (var_1_49 == ((unsigned char) (abs (var_1_29 + var_1_30)))) : ((var_1_42 <= var_1_34) ? (var_1_49 == ((unsigned char) (max ((min (8 , var_1_29)) , 1)))) : (var_1_49 == ((unsigned char) (max ((var_1_50 - var_1_47) , var_1_33)))))) : (var_1_49 == ((unsigned char) (var_1_50 - var_1_36))))) && ((var_1_84 != var_1_66) ? ((var_1_36 <= var_1_33) ? (var_1_51 == ((unsigned char) (! var_1_23))) : 1) : ((var_1_2 >= (- (var_1_27 + 24.7))) ? (var_1_51 == ((unsigned char) ((var_1_21 && var_1_22) && var_1_18))) : 1))) && ((last_1_var_1_61 >= (max (var_1_30 , (-5 % var_1_50)))) ? (var_1_52 == ((unsigned char) (abs (var_1_47)))) : (var_1_52 == ((unsigned char) var_1_29)))) && (((var_1_47 - 16) <= last_1_var_1_1) ? ((! last_1_var_1_65) ? ((last_1_var_1_9 != var_1_41) ? (var_1_53 == ((unsigned char) ((abs (abs (var_1_50))) - var_1_36))) : (((var_1_43 / (max (var_1_47 , var_1_32))) < (-16 + last_1_var_1_53)) ? (((var_1_35 & var_1_30) >= 1000) ? (var_1_53 == ((unsigned char) (min ((var_1_29 + var_1_30) , (abs (var_1_36)))))) : 1) : (var_1_53 == ((unsigned char) var_1_43)))) : (var_1_53 == ((unsigned char) var_1_36))) : (var_1_53 == ((unsigned char) ((abs (25)) + var_1_30))))) && ((var_1_82 <= var_1_97) ? (var_1_54 == ((double) ((99.75 - (max (var_1_15 , var_1_14))) + var_1_55))) : (((- var_1_55) <= var_1_15) ? (var_1_54 == ((double) ((max (var_1_14 , var_1_15)) - (min (var_1_16 , var_1_56))))) : 1))) && (((var_1_3 != last_1_var_1_57) || (var_1_71 < (var_1_32 - var_1_34))) ? ((var_1_9 <= -5) ? ((var_1_1 < var_1_73) ? (var_1_57 == ((float) (var_1_16 - (var_1_58 - var_1_14)))) : 1) : ((var_1_101 < ((var_1_101 + var_1_63) * (var_1_40 ^ var_1_102))) ? (var_1_57 == ((float) ((max (var_1_15 , var_1_55)) + var_1_14))) : (var_1_57 == ((float) ((255.4f + var_1_14) - 5.75f))))) : (var_1_57 == ((float) (abs (var_1_56)))))) && ((((var_1_3 + var_1_69) + (var_1_89 / var_1_58)) < var_1_16) ? ((((var_1_58 == var_1_54) && var_1_23) || ((var_1_27 * var_1_3) >= var_1_54)) ? ((var_1_15 <= var_1_39) ? (var_1_61 == ((signed short int) (var_1_52 - (var_1_53 + var_1_45)))) : (var_1_61 == ((signed short int) (var_1_35 - ((min (var_1_52 , var_1_33)) + var_1_47))))) : (var_1_61 == ((signed short int) ((var_1_33 + var_1_35) - 2)))) : (((var_1_14 + var_1_16) < (min (var_1_27 , var_1_15))) ? (var_1_61 == ((signed short int) ((var_1_41 - (min (var_1_48 , var_1_101))) - (26733 - (max (var_1_35 , var_1_30)))))) : ((var_1_20 && ((~ var_1_25) <= 128)) ? ((! var_1_17) ? ((var_1_31 <= last_1_var_1_61) ? (var_1_61 == ((signed short int) (var_1_29 - 32))) : 1) : (var_1_61 == ((signed short int) ((max ((abs (var_1_47)) , var_1_52)) + var_1_73)))) : 1)))) && (var_1_63 == ((signed long int) ((min (var_1_52 , (var_1_64 - var_1_32))) - var_1_45)))) && (var_1_65 == ((unsigned char) ((var_1_21 || var_1_20) && (last_1_var_1_65 || var_1_22))))) && ((last_1_var_1_78 <= (- var_1_58)) ? ((last_1_var_1_53 <= last_1_var_1_76) ? ((var_1_34 > 64) ? (var_1_66 == ((signed long int) last_1_var_1_28)) : (var_1_66 == ((signed long int) (abs (last_1_var_1_53 - var_1_32))))) : (var_1_66 == ((signed long int) last_1_var_1_80))) : (var_1_66 == ((signed long int) (min (last_1_var_1_93 , (max (32 , last_1_var_1_76)))))))) && (var_1_79 ? (var_1_67 == ((float) (max (var_1_15 , (var_1_55 + var_1_14))))) : 1)) && (((var_1_83 == var_1_55) || (1.625f <= var_1_54)) ? (var_1_69 == ((double) (max (var_1_56 , 256.75)))) : (var_1_69 == ((double) (99.75 + var_1_55))))) && (var_1_92 ? ((var_1_53 >= var_1_50) ? (var_1_71 == ((unsigned short int) (var_1_72 - (abs (var_1_34))))) : 1) : (var_1_71 == ((unsigned short int) (var_1_72 - (min (var_1_53 , (abs (var_1_41))))))))) && (((var_1_32 / 5u) > var_1_64) ? (var_1_73 == ((signed char) ((var_1_43 - var_1_44) + var_1_45))) : 1)) && ((! var_1_65) ? (var_1_23 ? (var_1_74 == ((unsigned long int) (var_1_44 + var_1_101))) : 1) : ((var_1_15 < (5.25 - var_1_56)) ? (var_1_74 == ((unsigned long int) (max ((var_1_75 - var_1_44) , 8u)))) : (var_1_74 == ((unsigned long int) (var_1_44 + var_1_45)))))) && (var_1_76 == ((signed short int) (abs (var_1_50))))) && (var_1_18 ? (var_1_77 == ((float) var_1_15)) : 1)) && ((var_1_73 <= var_1_100) ? (var_1_21 ? (var_1_78 == ((double) (max (((var_1_14 + 9999999.2) - var_1_15) , (var_1_58 - var_1_16))))) : 1) : (var_1_78 == ((double) (var_1_55 + var_1_14))))) && (((var_1_35 * 5) > var_1_66) ? ((var_1_14 < var_1_58) ? (var_1_79 == ((unsigned char) ((var_1_86 < var_1_27) || (! var_1_23)))) : (var_1_79 == ((unsigned char) ((var_1_77 > var_1_10) || var_1_20)))) : (var_1_79 == ((unsigned char) (! var_1_18))))) && (var_1_65 ? (((min (var_1_29 , (min (last_1_var_1_80 , var_1_31)))) > var_1_25) ? (var_1_80 == ((signed char) (abs (var_1_36)))) : (var_1_80 == ((signed char) (min (var_1_43 , var_1_45))))) : (var_1_80 == ((signed char) (abs (abs (16))))))) && (((10000000 <= var_1_74) || (var_1_37 < var_1_27)) ? ((var_1_86 > var_1_94) ? (var_1_81 == ((double) (abs (var_1_58)))) : 1) : 1)) && ((var_1_64 <= var_1_44) ? (var_1_82 == ((signed long int) var_1_53)) : 1)) && (var_1_83 == ((double) var_1_13))) && (var_1_84 == ((unsigned char) var_1_85))) && (var_1_86 == ((double) var_1_15))) && (var_1_21 ? (var_1_87 == ((unsigned short int) 1)) : 1)) && (var_1_21 ? (var_1_88 == ((unsigned char) var_1_23)) : (var_1_88 == ((unsigned char) var_1_22)))) && (var_1_18 ? (var_1_89 == ((double) var_1_58)) : 1)) && (var_1_90 == ((signed char) var_1_30))) && (var_1_91 == ((unsigned long int) var_1_72))) && (var_1_92 == ((unsigned char) var_1_21))) && (var_1_93 == ((unsigned long int) var_1_29))) && (var_1_20 ? (var_1_94 == ((double) var_1_95)) : (var_1_94 == ((double) var_1_96)))) && (var_1_97 == ((signed long int) var_1_98))) && (var_1_98 == ((signed short int) var_1_28))) && (var_1_17 ? (var_1_99 == ((double) var_1_96)) : (var_1_99 == ((double) var_1_95)))) && (((var_1_43 << var_1_1) <= (var_1_36 | var_1_102)) ? (var_1_100 == ((unsigned short int) (var_1_82 + (var_1_30 + var_1_29)))) : (var_1_100 == ((unsigned short int) var_1_98)))) && (var_1_101 == ((unsigned char) var_1_34))) && (var_1_102 == ((unsigned long int) var_1_53))
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
