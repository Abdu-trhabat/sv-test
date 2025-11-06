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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch84Amount500.c", 13, "reach_error"); }
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
float var_1_1 = 99999999999.75;
float var_1_4 = 31.25;
float var_1_5 = 0.0;
float var_1_6 = 99.5;
float var_1_7 = 500.5;
double var_1_8 = 199.96;
double var_1_9 = 99.8;
unsigned char var_1_10 = 5;
unsigned char var_1_12 = 128;
unsigned char var_1_13 = 10;
unsigned char var_1_14 = 200;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 5;
unsigned short int var_1_18 = 5;
unsigned short int var_1_20 = 61418;
unsigned short int var_1_21 = 4;
unsigned char var_1_22 = 8;
unsigned char var_1_23 = 100;
unsigned long int var_1_24 = 0;
unsigned long int var_1_25 = 3521782550;
unsigned long int var_1_26 = 1374486373;
unsigned long int var_1_27 = 1000000000;
unsigned char var_1_28 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
float var_1_32 = 3.5;
float var_1_33 = 2.4;
float var_1_34 = 0.8;
signed short int var_1_35 = -128;
unsigned long int var_1_36 = 100;
unsigned long int var_1_37 = 0;
signed long int var_1_38 = 8;
float var_1_39 = -0.5;
float var_1_40 = 25.625;
float var_1_41 = 99999999.725;
float var_1_42 = 15.275;
float var_1_43 = 16.6;
float var_1_44 = 9999.4;
float var_1_45 = 15.1;
float var_1_46 = 9.4;
float var_1_47 = 1000.125;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned short int var_1_52 = 100;
unsigned char var_1_53 = 5;
unsigned short int var_1_54 = 55746;
unsigned long int var_1_55 = 8;
signed long int var_1_56 = -10;
signed long int var_1_57 = 1867764113;
unsigned char var_1_58 = 2;
signed char var_1_60 = 1;
signed char var_1_61 = 0;
double var_1_62 = 2.25;
unsigned char var_1_63 = 4;
signed short int var_1_64 = 128;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 25;
double var_1_67 = 64.75;
unsigned long int var_1_68 = 8;
unsigned char var_1_69 = 0;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 1;
signed char var_1_73 = 8;
signed char var_1_74 = 64;
signed char var_1_75 = 4;
signed char var_1_76 = 0;
unsigned long int var_1_77 = 8;
unsigned long int var_1_78 = 1252935212;
unsigned char var_1_79 = 0;
unsigned long int var_1_80 = 2;
unsigned char var_1_81 = 5;
unsigned char var_1_82 = 64;
unsigned char var_1_83 = 1;
unsigned char var_1_84 = 8;
unsigned char var_1_85 = 200;
unsigned long int var_1_86 = 128;
double var_1_87 = 32.625;
double var_1_88 = 0.0;
double var_1_89 = 127.625;
unsigned long int var_1_90 = 25;
unsigned short int var_1_93 = 4;
unsigned char var_1_94 = 8;
float var_1_95 = 3.5;
double var_1_96 = 7.5;
signed short int var_1_97 = 32;
unsigned long int var_1_98 = 64;
unsigned short int var_1_99 = 10;
signed char var_1_100 = 25;
signed long int var_1_101 = -10000000;
unsigned long int var_1_102 = 2;
double var_1_103 = 99.625;
signed char var_1_104 = -16;
signed char var_1_105 = -64;
signed long int var_1_106 = 16;
signed long int var_1_107 = -8;

// Calibration values

// Last'ed variables
float last_1_var_1_1 = 99999999999.75;
unsigned short int last_1_var_1_18 = 5;
unsigned long int last_1_var_1_24 = 0;
signed short int last_1_var_1_35 = -128;
unsigned short int last_1_var_1_52 = 100;
unsigned long int last_1_var_1_55 = 8;
signed long int last_1_var_1_56 = -10;
unsigned char last_1_var_1_65 = 1;
unsigned char last_1_var_1_71 = 0;
unsigned long int last_1_var_1_77 = 8;
unsigned long int last_1_var_1_80 = 2;
unsigned char last_1_var_1_84 = 8;
unsigned long int last_1_var_1_86 = 128;
unsigned long int last_1_var_1_90 = 25;
unsigned short int last_1_var_1_99 = 10;
unsigned long int last_1_var_1_102 = 2;
signed long int last_1_var_1_107 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req12Batch84Amount500
	if (last_1_var_1_1 >= 50.5f) {
		var_1_38 = (min (((max (var_1_17 , var_1_20)) + (last_1_var_1_56 + var_1_15)) , (abs (var_1_21 - var_1_16))));
	} else {
		if (var_1_34 > 31.3f) {
			var_1_38 = (last_1_var_1_107 - var_1_12);
		} else {
			var_1_38 = last_1_var_1_55;
		}
	}


	// From: Req32Batch84Amount500
	if (last_1_var_1_71) {
		var_1_79 = var_1_31;
	}


	// From: Req49Batch84Amount500
	if (var_1_79) {
		var_1_102 = var_1_25;
	} else {
		var_1_102 = last_1_var_1_102;
	}


	// From: Req15Batch84Amount500
	if (! last_1_var_1_65) {
		var_1_48 = ((var_1_31 || var_1_49) || (! (! var_1_50)));
	} else {
		if ((max (last_1_var_1_90 , last_1_var_1_77)) <= last_1_var_1_24) {
			var_1_48 = (var_1_30 && var_1_51);
		} else {
			var_1_48 = (var_1_50 || var_1_49);
		}
	}


	// From: Req53Batch84Amount500
	if (var_1_48) {
		var_1_106 = var_1_13;
	} else {
		var_1_106 = var_1_23;
	}


	// From: Req18Batch84Amount500
	unsigned long int stepLocal_11 = var_1_27;
	if (var_1_12 <= stepLocal_11) {
		if (var_1_50) {
			var_1_56 = (((128 + last_1_var_1_86) - last_1_var_1_18) + var_1_21);
		} else {
			var_1_56 = ((min (var_1_27 , (var_1_57 - 5))) - (max (var_1_13 , var_1_23)));
		}
	}


	// From: Req24Batch84Amount500
	unsigned long int stepLocal_14 = min (var_1_57 , last_1_var_1_80);
	if (stepLocal_14 == last_1_var_1_24) {
		var_1_65 = (var_1_49 || var_1_31);
	}


	// From: Req33Batch84Amount500
	var_1_80 = (var_1_25 - var_1_102);


	// From: Req6Batch84Amount500
	var_1_24 = (var_1_25 - (var_1_26 - (var_1_27 - last_1_var_1_35)));


	// From: Req3Batch84Amount500
	if (var_1_65) {
		var_1_10 = (var_1_12 - var_1_13);
	} else {
		if ((var_1_6 - var_1_9) == var_1_7) {
			var_1_10 = ((max ((max (var_1_12 , var_1_14)) , var_1_15)) - (max (var_1_13 , (var_1_16 - var_1_17))));
		} else {
			var_1_10 = (max (var_1_13 , var_1_14));
		}
	}


	// From: Req54Batch84Amount500
	unsigned char stepLocal_32 = var_1_15;
	if (stepLocal_32 > last_1_var_1_56) {
		var_1_107 = (abs (last_1_var_1_107));
	} else {
		var_1_107 = (max (var_1_21 , ((var_1_57 - 5) - var_1_74)));
	}


	// From: Req48Batch84Amount500
	var_1_101 = var_1_107;


	// From: Req36Batch84Amount500
	signed long int stepLocal_27 = (max (var_1_101 , var_1_54)) * var_1_17;
	if (stepLocal_27 >= last_1_var_1_84) {
		var_1_84 = (max (((var_1_85 - var_1_75) - var_1_17) , var_1_53));
	}


	// From: Req10Batch84Amount500
	if (var_1_34 > var_1_5) {
		var_1_36 = ((var_1_12 + var_1_15) + var_1_17);
	}


	// From: Req16Batch84Amount500
	signed long int stepLocal_10 = var_1_38 >> var_1_53;
	if (last_1_var_1_52 < stepLocal_10) {
		if ((min (49.75 , (var_1_6 + var_1_42))) <= var_1_34) {
			var_1_52 = (50775 - var_1_14);
		} else {
			var_1_52 = ((var_1_54 - 2) - var_1_23);
		}
	} else {
		var_1_52 = (abs (var_1_17));
	}


	// From: Req21Batch84Amount500
	if (var_1_45 == (32.4f * var_1_34)) {
		var_1_62 = (32.25 + (var_1_40 + var_1_45));
	}


	// From: Req22Batch84Amount500
	var_1_63 = var_1_23;


	// From: Req30Batch84Amount500
	var_1_73 = ((min (var_1_17 , var_1_53)) - (var_1_74 - (var_1_75 + var_1_76)));


	// From: Req38Batch84Amount500
	unsigned long int stepLocal_29 = var_1_25 / (abs (var_1_15));
	if (var_1_102 < stepLocal_29) {
		var_1_87 = (var_1_5 - (var_1_88 - var_1_44));
	} else {
		if (var_1_33 <= var_1_7) {
			var_1_87 = var_1_44;
		} else {
			var_1_87 = (max ((var_1_5 - var_1_89) , var_1_44));
		}
	}


	// From: Req40Batch84Amount500
	if (var_1_49) {
		var_1_93 = var_1_76;
	} else {
		var_1_93 = var_1_13;
	}


	// From: Req41Batch84Amount500
	if (var_1_72) {
		var_1_94 = var_1_17;
	}


	// From: Req43Batch84Amount500
	if (var_1_72) {
		var_1_96 = var_1_47;
	}


	// From: Req44Batch84Amount500
	var_1_97 = -1;


	// From: Req45Batch84Amount500
	var_1_98 = var_1_25;


	// From: Req46Batch84Amount500
	var_1_99 = last_1_var_1_99;


	// From: Req47Batch84Amount500
	if (var_1_31) {
		var_1_100 = var_1_76;
	}


	// From: Req51Batch84Amount500
	var_1_104 = var_1_17;


	// From: Req52Batch84Amount500
	if (var_1_79) {
		var_1_105 = -25;
	} else {
		var_1_105 = var_1_85;
	}


	// From: Req1Batch84Amount500
	signed long int stepLocal_0 = var_1_38;
	if ((~ var_1_56) <= stepLocal_0) {
		var_1_1 = (var_1_4 - (var_1_5 - (min (var_1_6 , var_1_7))));
	}


	// From: Req26Batch84Amount500
	unsigned char stepLocal_18 = var_1_17;
	unsigned char stepLocal_17 = var_1_13;
	if (-1 >= stepLocal_18) {
		if (stepLocal_17 > var_1_102) {
			var_1_67 = (var_1_34 + (var_1_44 - 5.45));
		}
	} else {
		var_1_67 = (var_1_47 - (abs (var_1_42)));
	}


	// From: Req2Batch84Amount500
	signed long int stepLocal_1 = var_1_106;
	if (var_1_4 < (var_1_67 + (abs (var_1_6)))) {
		if (var_1_38 < stepLocal_1) {
			var_1_8 = ((abs (var_1_6)) + var_1_7);
		} else {
			var_1_8 = (var_1_7 - var_1_4);
		}
	} else {
		var_1_8 = (max ((var_1_7 - (max (var_1_5 , var_1_9))) , var_1_6));
	}


	// From: Req7Batch84Amount500
	if (var_1_79 && var_1_65) {
		if (var_1_27 <= var_1_23) {
			var_1_28 = (! var_1_30);
		} else {
			if (var_1_30) {
				var_1_28 = 0;
			} else {
				var_1_28 = (var_1_79 && var_1_31);
			}
		}
	}


	// From: Req11Batch84Amount500
	if (var_1_28) {
		var_1_37 = (var_1_13 + (var_1_23 + (abs (var_1_84))));
	}


	// From: Req4Batch84Amount500
	if (var_1_7 > (var_1_4 + var_1_9)) {
		if (var_1_7 < (var_1_67 * (- var_1_6))) {
			if ((- var_1_24) < var_1_13) {
				if (var_1_107 <= (var_1_20 - var_1_15)) {
					var_1_18 = (max (var_1_14 , var_1_17));
				} else {
					var_1_18 = (var_1_24 + var_1_16);
				}
			}
		} else {
			var_1_18 = var_1_21;
		}
	}


	// From: Req17Batch84Amount500
	if ((abs (var_1_17)) < (256 * var_1_98)) {
		var_1_55 = var_1_21;
	} else {
		var_1_55 = (max ((4u + var_1_27) , (var_1_25 - (var_1_26 - var_1_15))));
	}


	// From: Req19Batch84Amount500
	if (! (var_1_15 < (var_1_99 & var_1_98))) {
		var_1_58 = (max (var_1_17 , (var_1_53 + var_1_16)));
	}


	// From: Req20Batch84Amount500
	if (var_1_17 != ((var_1_106 / var_1_23) + var_1_13)) {
		if (var_1_26 > (var_1_25 - var_1_12)) {
			var_1_60 = ((min ((max (var_1_53 , var_1_17)) , -1)) + var_1_61);
		} else {
			var_1_60 = ((var_1_53 - (min (var_1_17 , 0))) + var_1_61);
		}
	} else {
		if (((var_1_17 / var_1_53) ^ (var_1_101 + var_1_21)) >= var_1_58) {
			var_1_60 = (abs (var_1_61));
		}
	}


	// From: Req23Batch84Amount500
	unsigned long int stepLocal_13 = var_1_24;
	unsigned char stepLocal_12 = var_1_67 > var_1_44;
	if ((var_1_24 % (max (var_1_15 , var_1_12))) <= stepLocal_13) {
		if ((var_1_87 >= var_1_6) || stepLocal_12) {
			var_1_64 = (max ((var_1_53 - var_1_58) , var_1_16));
		} else {
			var_1_64 = (max (var_1_101 , (min (var_1_18 , (var_1_23 + var_1_58)))));
		}
	} else {
		var_1_64 = (var_1_23 + (var_1_24 + var_1_61));
	}


	// From: Req25Batch84Amount500
	unsigned char stepLocal_16 = var_1_57 != var_1_53;
	unsigned short int stepLocal_15 = var_1_52;
	if (var_1_48) {
		var_1_66 = (abs (var_1_13));
	} else {
		if (var_1_49 || stepLocal_16) {
			if (var_1_98 <= stepLocal_15) {
				var_1_66 = ((200 - (var_1_53 + 5)) - 32);
			}
		} else {
			var_1_66 = (var_1_14 - var_1_53);
		}
	}


	// From: Req34Batch84Amount500
	unsigned long int stepLocal_25 = 1000u % var_1_12;
	if (var_1_42 > var_1_1) {
		if (var_1_98 > stepLocal_25) {
			var_1_81 = ((var_1_23 - var_1_53) + (var_1_82 - (abs (var_1_17))));
		} else {
			var_1_81 = (var_1_74 + var_1_16);
		}
	} else {
		var_1_81 = ((var_1_74 - var_1_76) + 10);
	}


	// From: Req35Batch84Amount500
	unsigned char stepLocal_26 = ! (var_1_44 > var_1_8);
	if ((var_1_26 != var_1_76) || stepLocal_26) {
		if (var_1_51) {
			if (var_1_7 > (min (var_1_47 , (var_1_8 * 1.00000004E7f)))) {
				var_1_83 = var_1_30;
			} else {
				var_1_83 = (! (var_1_30 && var_1_31));
			}
		}
	}


	// From: Req39Batch84Amount500
	signed long int stepLocal_31 = var_1_101;
	signed long int stepLocal_30 = var_1_101;
	if (var_1_8 < var_1_89) {
		if (stepLocal_31 < ((var_1_16 + var_1_23) - var_1_17)) {
			var_1_90 = (var_1_25 - var_1_54);
		} else {
			var_1_90 = (max (var_1_20 , var_1_13));
		}
	} else {
		if (var_1_5 < var_1_96) {
			if (var_1_106 != stepLocal_30) {
				var_1_90 = var_1_75;
			}
		} else {
			var_1_90 = var_1_63;
		}
	}


	// From: Req29Batch84Amount500
	signed long int stepLocal_23 = var_1_107;
	unsigned char stepLocal_22 = var_1_15;
	unsigned char stepLocal_21 = (var_1_27 / -128) > var_1_17;
	if ((var_1_17 << var_1_90) == stepLocal_22) {
		var_1_71 = var_1_50;
	} else {
		if (stepLocal_21 || (var_1_33 <= 1.3f)) {
			var_1_71 = (! var_1_51);
		} else {
			if (var_1_36 < stepLocal_23) {
				if (var_1_4 >= (- var_1_5)) {
					var_1_71 = var_1_30;
				} else {
					if ((var_1_47 / var_1_5) > (var_1_42 - var_1_46)) {
						var_1_71 = (var_1_31 || (var_1_72 && var_1_51));
					} else {
						var_1_71 = (! var_1_50);
					}
				}
			}
		}
	}


	// From: Req31Batch84Amount500
	unsigned short int stepLocal_24 = var_1_20;
	if (var_1_48) {
		if (var_1_44 == var_1_40) {
			if (stepLocal_24 >= (min (var_1_16 , var_1_101))) {
				var_1_77 = ((min (4225308415u , var_1_25)) - var_1_55);
			} else {
				var_1_77 = (max (var_1_12 , last_1_var_1_77));
			}
		} else {
			var_1_77 = (var_1_37 + ((min (var_1_26 , var_1_78)) - var_1_54));
		}
	}


	// From: Req37Batch84Amount500
	unsigned long int stepLocal_28 = - var_1_77;
	if (var_1_94 > stepLocal_28) {
		var_1_86 = (max (var_1_85 , ((var_1_26 - var_1_27) + var_1_75)));
	}


	// From: Req27Batch84Amount500
	unsigned long int stepLocal_20 = var_1_80;
	signed long int stepLocal_19 = var_1_13 >> var_1_53;
	if (var_1_25 <= stepLocal_20) {
		if (((var_1_5 - var_1_47) * var_1_7) < var_1_8) {
			var_1_68 = (var_1_80 + var_1_10);
		} else {
			if (stepLocal_19 <= var_1_55) {
				var_1_68 = (var_1_25 - var_1_27);
			} else {
				var_1_68 = (var_1_25 - var_1_55);
			}
		}
	}


	// From: Req5Batch84Amount500
	if (var_1_37 <= (max (var_1_68 , var_1_12))) {
		if (var_1_68 != var_1_107) {
			var_1_22 = ((max (var_1_16 , var_1_17)) + var_1_13);
		} else {
			var_1_22 = (abs (var_1_17));
		}
	} else {
		if (var_1_106 <= (- var_1_12)) {
			var_1_22 = ((var_1_16 + var_1_23) - var_1_13);
		}
	}


	// From: Req8Batch84Amount500
	if (var_1_86 < var_1_21) {
		var_1_32 = ((var_1_7 - 10.5f) + (var_1_33 + var_1_34));
	} else {
		var_1_32 = var_1_5;
	}


	// From: Req13Batch84Amount500
	unsigned char stepLocal_5 = var_1_107 <= (var_1_23 * var_1_102);
	unsigned long int stepLocal_4 = var_1_36;
	signed long int stepLocal_3 = var_1_107;
	signed long int stepLocal_2 = var_1_16 - (abs (var_1_13));
	if (stepLocal_2 == var_1_23) {
		if (stepLocal_5 || var_1_71) {
			var_1_39 = (var_1_34 + (var_1_33 + var_1_40));
		} else {
			if (stepLocal_3 > var_1_21) {
				var_1_39 = var_1_7;
			} else {
				if (stepLocal_4 != ((abs (var_1_20)) << var_1_14)) {
					var_1_39 = (max (100000.6f , var_1_7));
				} else {
					var_1_39 = (max ((min (var_1_6 , (var_1_9 - var_1_5))) , (var_1_7 - (8.246185527532057E18f - var_1_41))));
				}
			}
		}
	} else {
		var_1_39 = (max (var_1_33 , ((var_1_6 - var_1_42) + 128.75f)));
	}


	// From: Req14Batch84Amount500
	unsigned long int stepLocal_9 = var_1_15 + var_1_98;
	unsigned char stepLocal_8 = ! 0;
	unsigned char stepLocal_7 = ! (var_1_101 < var_1_23);
	unsigned char stepLocal_6 = 127.5 >= var_1_6;
	if (stepLocal_7 && (var_1_21 >= 1)) {
		if (stepLocal_9 < var_1_90) {
			var_1_43 = var_1_34;
		}
	} else {
		if ((var_1_36 >= var_1_13) || stepLocal_6) {
			var_1_43 = (var_1_7 + ((var_1_44 - var_1_45) + (var_1_46 - var_1_47)));
		} else {
			if (! (var_1_101 < var_1_15)) {
				if ((var_1_5 >= var_1_4) && stepLocal_8) {
					var_1_43 = ((max ((var_1_40 + var_1_33) , var_1_6)) + (var_1_34 + var_1_44));
				}
			} else {
				var_1_43 = (abs (max ((var_1_6 + var_1_46) , (min (var_1_42 , 9.99999999999995E13f)))));
			}
		}
	}


	// From: Req28Batch84Amount500
	if (var_1_71 || var_1_31) {
		var_1_69 = (min ((5 + var_1_23) , var_1_16));
	} else {
		var_1_69 = (abs (var_1_53));
	}


	// From: Req42Batch84Amount500
	if (var_1_71) {
		var_1_95 = var_1_5;
	} else {
		var_1_95 = 1.6f;
	}


	// From: Req50Batch84Amount500
	if (var_1_71) {
		var_1_103 = var_1_4;
	} else {
		var_1_103 = var_1_40;
	}


	// From: Req9Batch84Amount500
	if (var_1_28) {
		var_1_35 = (min (var_1_68 , ((var_1_13 + var_1_94) - 2)));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 4611686.018427383000e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 127);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 127);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 63);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65535);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 64);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 2147483647);
	assume_abort_if_not(var_1_25 <= 4294967294);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 1073741823);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 536870911);
	assume_abort_if_not(var_1_27 <= 1073741823);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -230584.3009213691400e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691400e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -230584.3009213691400e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 2305843.009213691400e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691400e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691400e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 0);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 7);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 49150);
	assume_abort_if_not(var_1_54 <= 65534);
	var_1_57 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_57 >= 1073741822);
	assume_abort_if_not(var_1_57 <= 2147483646);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= -63);
	assume_abort_if_not(var_1_61 <= 63);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 1);
	assume_abort_if_not(var_1_72 <= 1);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= 63);
	assume_abort_if_not(var_1_74 <= 126);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 32);
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 31);
	var_1_78 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_78 >= 1073741823);
	assume_abort_if_not(var_1_78 <= 2147483647);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 63);
	assume_abort_if_not(var_1_82 <= 127);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 190);
	assume_abort_if_not(var_1_85 <= 254);
	var_1_88 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_88 >= 4611686.018427383000e+12F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 9223372.036854766000e+12F && var_1_88 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_89 >= 0.0F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 9223372.036854766000e+12F && var_1_89 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_107 = var_1_107;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((~ var_1_56) <= var_1_38) ? (var_1_1 == ((float) (var_1_4 - (var_1_5 - (min (var_1_6 , var_1_7)))))) : 1) && ((var_1_4 < (var_1_67 + (abs (var_1_6)))) ? ((var_1_38 < var_1_106) ? (var_1_8 == ((double) ((abs (var_1_6)) + var_1_7))) : (var_1_8 == ((double) (var_1_7 - var_1_4)))) : (var_1_8 == ((double) (max ((var_1_7 - (max (var_1_5 , var_1_9))) , var_1_6)))))) && (var_1_65 ? (var_1_10 == ((unsigned char) (var_1_12 - var_1_13))) : (((var_1_6 - var_1_9) == var_1_7) ? (var_1_10 == ((unsigned char) ((max ((max (var_1_12 , var_1_14)) , var_1_15)) - (max (var_1_13 , (var_1_16 - var_1_17)))))) : (var_1_10 == ((unsigned char) (max (var_1_13 , var_1_14))))))) && ((var_1_7 > (var_1_4 + var_1_9)) ? ((var_1_7 < (var_1_67 * (- var_1_6))) ? (((- var_1_24) < var_1_13) ? ((var_1_107 <= (var_1_20 - var_1_15)) ? (var_1_18 == ((unsigned short int) (max (var_1_14 , var_1_17)))) : (var_1_18 == ((unsigned short int) (var_1_24 + var_1_16)))) : 1) : (var_1_18 == ((unsigned short int) var_1_21))) : 1)) && ((var_1_37 <= (max (var_1_68 , var_1_12))) ? ((var_1_68 != var_1_107) ? (var_1_22 == ((unsigned char) ((max (var_1_16 , var_1_17)) + var_1_13))) : (var_1_22 == ((unsigned char) (abs (var_1_17))))) : ((var_1_106 <= (- var_1_12)) ? (var_1_22 == ((unsigned char) ((var_1_16 + var_1_23) - var_1_13))) : 1))) && (var_1_24 == ((unsigned long int) (var_1_25 - (var_1_26 - (var_1_27 - last_1_var_1_35)))))) && ((var_1_79 && var_1_65) ? ((var_1_27 <= var_1_23) ? (var_1_28 == ((unsigned char) (! var_1_30))) : (var_1_30 ? (var_1_28 == ((unsigned char) 0)) : (var_1_28 == ((unsigned char) (var_1_79 && var_1_31))))) : 1)) && ((var_1_86 < var_1_21) ? (var_1_32 == ((float) ((var_1_7 - 10.5f) + (var_1_33 + var_1_34)))) : (var_1_32 == ((float) var_1_5)))) && (var_1_28 ? (var_1_35 == ((signed short int) (min (var_1_68 , ((var_1_13 + var_1_94) - 2))))) : 1)) && ((var_1_34 > var_1_5) ? (var_1_36 == ((unsigned long int) ((var_1_12 + var_1_15) + var_1_17))) : 1)) && (var_1_28 ? (var_1_37 == ((unsigned long int) (var_1_13 + (var_1_23 + (abs (var_1_84)))))) : 1)) && ((last_1_var_1_1 >= 50.5f) ? (var_1_38 == ((signed long int) (min (((max (var_1_17 , var_1_20)) + (last_1_var_1_56 + var_1_15)) , (abs (var_1_21 - var_1_16)))))) : ((var_1_34 > 31.3f) ? (var_1_38 == ((signed long int) (last_1_var_1_107 - var_1_12))) : (var_1_38 == ((signed long int) last_1_var_1_55))))) && (((var_1_16 - (abs (var_1_13))) == var_1_23) ? (((var_1_107 <= (var_1_23 * var_1_102)) || var_1_71) ? (var_1_39 == ((float) (var_1_34 + (var_1_33 + var_1_40)))) : ((var_1_107 > var_1_21) ? (var_1_39 == ((float) var_1_7)) : ((var_1_36 != ((abs (var_1_20)) << var_1_14)) ? (var_1_39 == ((float) (max (100000.6f , var_1_7)))) : (var_1_39 == ((float) (max ((min (var_1_6 , (var_1_9 - var_1_5))) , (var_1_7 - (8.246185527532057E18f - var_1_41))))))))) : (var_1_39 == ((float) (max (var_1_33 , ((var_1_6 - var_1_42) + 128.75f))))))) && (((! (var_1_101 < var_1_23)) && (var_1_21 >= 1)) ? (((var_1_15 + var_1_98) < var_1_90) ? (var_1_43 == ((float) var_1_34)) : 1) : (((var_1_36 >= var_1_13) || (127.5 >= var_1_6)) ? (var_1_43 == ((float) (var_1_7 + ((var_1_44 - var_1_45) + (var_1_46 - var_1_47))))) : ((! (var_1_101 < var_1_15)) ? (((var_1_5 >= var_1_4) && (! 0)) ? (var_1_43 == ((float) ((max ((var_1_40 + var_1_33) , var_1_6)) + (var_1_34 + var_1_44)))) : 1) : (var_1_43 == ((float) (abs (max ((var_1_6 + var_1_46) , (min (var_1_42 , 9.99999999999995E13f))))))))))) && ((! last_1_var_1_65) ? (var_1_48 == ((unsigned char) ((var_1_31 || var_1_49) || (! (! var_1_50))))) : (((max (last_1_var_1_90 , last_1_var_1_77)) <= last_1_var_1_24) ? (var_1_48 == ((unsigned char) (var_1_30 && var_1_51))) : (var_1_48 == ((unsigned char) (var_1_50 || var_1_49)))))) && ((last_1_var_1_52 < (var_1_38 >> var_1_53)) ? (((min (49.75 , (var_1_6 + var_1_42))) <= var_1_34) ? (var_1_52 == ((unsigned short int) (50775 - var_1_14))) : (var_1_52 == ((unsigned short int) ((var_1_54 - 2) - var_1_23)))) : (var_1_52 == ((unsigned short int) (abs (var_1_17)))))) && (((abs (var_1_17)) < (256 * var_1_98)) ? (var_1_55 == ((unsigned long int) var_1_21)) : (var_1_55 == ((unsigned long int) (max ((4u + var_1_27) , (var_1_25 - (var_1_26 - var_1_15)))))))) && ((var_1_12 <= var_1_27) ? (var_1_50 ? (var_1_56 == ((signed long int) (((128 + last_1_var_1_86) - last_1_var_1_18) + var_1_21))) : (var_1_56 == ((signed long int) ((min (var_1_27 , (var_1_57 - 5))) - (max (var_1_13 , var_1_23)))))) : 1)) && ((! (var_1_15 < (var_1_99 & var_1_98))) ? (var_1_58 == ((unsigned char) (max (var_1_17 , (var_1_53 + var_1_16))))) : 1)) && ((var_1_17 != ((var_1_106 / var_1_23) + var_1_13)) ? ((var_1_26 > (var_1_25 - var_1_12)) ? (var_1_60 == ((signed char) ((min ((max (var_1_53 , var_1_17)) , -1)) + var_1_61))) : (var_1_60 == ((signed char) ((var_1_53 - (min (var_1_17 , 0))) + var_1_61)))) : ((((var_1_17 / var_1_53) ^ (var_1_101 + var_1_21)) >= var_1_58) ? (var_1_60 == ((signed char) (abs (var_1_61)))) : 1))) && ((var_1_45 == (32.4f * var_1_34)) ? (var_1_62 == ((double) (32.25 + (var_1_40 + var_1_45)))) : 1)) && (var_1_63 == ((unsigned char) var_1_23))) && (((var_1_24 % (max (var_1_15 , var_1_12))) <= var_1_24) ? (((var_1_87 >= var_1_6) || (var_1_67 > var_1_44)) ? (var_1_64 == ((signed short int) (max ((var_1_53 - var_1_58) , var_1_16)))) : (var_1_64 == ((signed short int) (max (var_1_101 , (min (var_1_18 , (var_1_23 + var_1_58)))))))) : (var_1_64 == ((signed short int) (var_1_23 + (var_1_24 + var_1_61)))))) && (((min (var_1_57 , last_1_var_1_80)) == last_1_var_1_24) ? (var_1_65 == ((unsigned char) (var_1_49 || var_1_31))) : 1)) && (var_1_48 ? (var_1_66 == ((unsigned char) (abs (var_1_13)))) : ((var_1_49 || (var_1_57 != var_1_53)) ? ((var_1_98 <= var_1_52) ? (var_1_66 == ((unsigned char) ((200 - (var_1_53 + 5)) - 32))) : 1) : (var_1_66 == ((unsigned char) (var_1_14 - var_1_53)))))) && ((-1 >= var_1_17) ? ((var_1_13 > var_1_102) ? (var_1_67 == ((double) (var_1_34 + (var_1_44 - 5.45)))) : 1) : (var_1_67 == ((double) (var_1_47 - (abs (var_1_42))))))) && ((var_1_25 <= var_1_80) ? ((((var_1_5 - var_1_47) * var_1_7) < var_1_8) ? (var_1_68 == ((unsigned long int) (var_1_80 + var_1_10))) : (((var_1_13 >> var_1_53) <= var_1_55) ? (var_1_68 == ((unsigned long int) (var_1_25 - var_1_27))) : (var_1_68 == ((unsigned long int) (var_1_25 - var_1_55))))) : 1)) && ((var_1_71 || var_1_31) ? (var_1_69 == ((unsigned char) (min ((5 + var_1_23) , var_1_16)))) : (var_1_69 == ((unsigned char) (abs (var_1_53)))))) && (((var_1_17 << var_1_90) == var_1_15) ? (var_1_71 == ((unsigned char) var_1_50)) : ((((var_1_27 / -128) > var_1_17) || (var_1_33 <= 1.3f)) ? (var_1_71 == ((unsigned char) (! var_1_51))) : ((var_1_36 < var_1_107) ? ((var_1_4 >= (- var_1_5)) ? (var_1_71 == ((unsigned char) var_1_30)) : (((var_1_47 / var_1_5) > (var_1_42 - var_1_46)) ? (var_1_71 == ((unsigned char) (var_1_31 || (var_1_72 && var_1_51)))) : (var_1_71 == ((unsigned char) (! var_1_50))))) : 1)))) && (var_1_73 == ((signed char) ((min (var_1_17 , var_1_53)) - (var_1_74 - (var_1_75 + var_1_76)))))) && (var_1_48 ? ((var_1_44 == var_1_40) ? ((var_1_20 >= (min (var_1_16 , var_1_101))) ? (var_1_77 == ((unsigned long int) ((min (4225308415u , var_1_25)) - var_1_55))) : (var_1_77 == ((unsigned long int) (max (var_1_12 , last_1_var_1_77))))) : (var_1_77 == ((unsigned long int) (var_1_37 + ((min (var_1_26 , var_1_78)) - var_1_54))))) : 1)) && (last_1_var_1_71 ? (var_1_79 == ((unsigned char) var_1_31)) : 1)) && (var_1_80 == ((unsigned long int) (var_1_25 - var_1_102)))) && ((var_1_42 > var_1_1) ? ((var_1_98 > (1000u % var_1_12)) ? (var_1_81 == ((unsigned char) ((var_1_23 - var_1_53) + (var_1_82 - (abs (var_1_17)))))) : (var_1_81 == ((unsigned char) (var_1_74 + var_1_16)))) : (var_1_81 == ((unsigned char) ((var_1_74 - var_1_76) + 10))))) && (((var_1_26 != var_1_76) || (! (var_1_44 > var_1_8))) ? (var_1_51 ? ((var_1_7 > (min (var_1_47 , (var_1_8 * 1.00000004E7f)))) ? (var_1_83 == ((unsigned char) var_1_30)) : (var_1_83 == ((unsigned char) (! (var_1_30 && var_1_31))))) : 1) : 1)) && ((((max (var_1_101 , var_1_54)) * var_1_17) >= last_1_var_1_84) ? (var_1_84 == ((unsigned char) (max (((var_1_85 - var_1_75) - var_1_17) , var_1_53)))) : 1)) && ((var_1_94 > (- var_1_77)) ? (var_1_86 == ((unsigned long int) (max (var_1_85 , ((var_1_26 - var_1_27) + var_1_75))))) : 1)) && ((var_1_102 < (var_1_25 / (abs (var_1_15)))) ? (var_1_87 == ((double) (var_1_5 - (var_1_88 - var_1_44)))) : ((var_1_33 <= var_1_7) ? (var_1_87 == ((double) var_1_44)) : (var_1_87 == ((double) (max ((var_1_5 - var_1_89) , var_1_44))))))) && ((var_1_8 < var_1_89) ? ((var_1_101 < ((var_1_16 + var_1_23) - var_1_17)) ? (var_1_90 == ((unsigned long int) (var_1_25 - var_1_54))) : (var_1_90 == ((unsigned long int) (max (var_1_20 , var_1_13))))) : ((var_1_5 < var_1_96) ? ((var_1_106 != var_1_101) ? (var_1_90 == ((unsigned long int) var_1_75)) : 1) : (var_1_90 == ((unsigned long int) var_1_63))))) && (var_1_49 ? (var_1_93 == ((unsigned short int) var_1_76)) : (var_1_93 == ((unsigned short int) var_1_13)))) && (var_1_72 ? (var_1_94 == ((unsigned char) var_1_17)) : 1)) && (var_1_71 ? (var_1_95 == ((float) var_1_5)) : (var_1_95 == ((float) 1.6f)))) && (var_1_72 ? (var_1_96 == ((double) var_1_47)) : 1)) && (var_1_97 == ((signed short int) -1))) && (var_1_98 == ((unsigned long int) var_1_25))) && (var_1_99 == ((unsigned short int) last_1_var_1_99))) && (var_1_31 ? (var_1_100 == ((signed char) var_1_76)) : 1)) && (var_1_101 == ((signed long int) var_1_107))) && (var_1_79 ? (var_1_102 == ((unsigned long int) var_1_25)) : (var_1_102 == ((unsigned long int) last_1_var_1_102)))) && (var_1_71 ? (var_1_103 == ((double) var_1_4)) : (var_1_103 == ((double) var_1_40)))) && (var_1_104 == ((signed char) var_1_17))) && (var_1_79 ? (var_1_105 == ((signed char) -25)) : (var_1_105 == ((signed char) var_1_85)))) && (var_1_48 ? (var_1_106 == ((signed long int) var_1_13)) : (var_1_106 == ((signed long int) var_1_23)))) && ((var_1_15 > last_1_var_1_56) ? (var_1_107 == ((signed long int) (abs (last_1_var_1_107)))) : (var_1_107 == ((signed long int) (max (var_1_21 , ((var_1_57 - 5) - var_1_74))))))
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
