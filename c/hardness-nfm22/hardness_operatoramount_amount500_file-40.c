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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch40Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 4.5;
unsigned char var_1_3 = 50;
unsigned char var_1_4 = 32;
float var_1_10 = -0.5;
float var_1_11 = 500.84;
float var_1_12 = 5.7;
float var_1_13 = 32.25;
float var_1_14 = 49.375;
float var_1_15 = 64.8;
unsigned short int var_1_16 = 0;
unsigned short int var_1_18 = 20230;
unsigned short int var_1_19 = 27186;
double var_1_20 = 255.4;
float var_1_21 = 32.3;
double var_1_22 = 63.6;
double var_1_23 = 255.625;
double var_1_24 = 5.451;
unsigned long int var_1_25 = 64;
signed char var_1_26 = -5;
signed char var_1_27 = 50;
signed char var_1_28 = 25;
unsigned long int var_1_29 = 2;
unsigned long int var_1_30 = 3512940467;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 32;
double var_1_34 = 16.6;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 100;
double var_1_37 = 5.25;
double var_1_38 = 15.75;
double var_1_39 = 24.75;
double var_1_40 = 32.25;
double var_1_41 = -0.8;
unsigned char var_1_42 = 10;
unsigned char var_1_43 = 128;
signed long int var_1_44 = -256;
signed short int var_1_47 = 256;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 0;
signed long int var_1_53 = -50;
double var_1_54 = 5.75;
signed long int var_1_55 = 2077556069;
unsigned long int var_1_56 = 1;
double var_1_57 = 15.375;
float var_1_58 = 0.6;
signed short int var_1_59 = -32;
unsigned short int var_1_60 = 100;
signed long int var_1_61 = 256;
signed char var_1_62 = -8;
signed short int var_1_63 = -16;
signed short int var_1_64 = 8;
unsigned long int var_1_65 = 1;
float var_1_67 = 0.4;
unsigned long int var_1_68 = 1;
unsigned char var_1_69 = 0;
float var_1_70 = 10000.75;
float var_1_71 = 0.0;
float var_1_72 = 999999999.4;
float var_1_73 = 5.25;
unsigned short int var_1_74 = 1;
unsigned short int var_1_75 = 1;
unsigned short int var_1_76 = 62018;
unsigned short int var_1_77 = 10000;
signed short int var_1_78 = 5;
signed short int var_1_79 = 30412;
double var_1_80 = 128.8;
double var_1_81 = 128.5;
signed char var_1_83 = -10;
signed char var_1_85 = 0;
signed char var_1_86 = 32;
unsigned long int var_1_87 = 100000000;
unsigned short int var_1_89 = 16;
signed char var_1_90 = 50;
signed short int var_1_91 = 4;
unsigned char var_1_92 = 1;
unsigned char var_1_93 = 1;
unsigned char var_1_94 = 0;
unsigned short int var_1_95 = 500;
double var_1_96 = 256.75;
signed short int var_1_97 = 32;
float var_1_98 = 8.85;
unsigned char var_1_99 = 32;
unsigned char var_1_100 = 0;
unsigned short int var_1_101 = 2;
unsigned short int var_1_102 = 37811;
signed long int var_1_103 = -4;

// Calibration values

// Last'ed variables
double last_1_var_1_20 = 255.4;
unsigned long int last_1_var_1_25 = 64;
unsigned char last_1_var_1_31 = 1;
unsigned char last_1_var_1_33 = 32;
double last_1_var_1_41 = -0.8;
signed short int last_1_var_1_47 = 256;
unsigned short int last_1_var_1_60 = 100;
signed long int last_1_var_1_61 = 256;
unsigned long int last_1_var_1_65 = 1;
unsigned short int last_1_var_1_74 = 1;
unsigned short int last_1_var_1_75 = 1;
signed short int last_1_var_1_78 = 5;
double last_1_var_1_81 = 128.5;
signed short int last_1_var_1_91 = 4;
unsigned char last_1_var_1_92 = 1;
unsigned short int last_1_var_1_95 = 500;
unsigned short int last_1_var_1_101 = 2;
signed long int last_1_var_1_103 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req29Batch40Amount500
	if ((last_1_var_1_33 + last_1_var_1_78) <= var_1_55) {
		if ((var_1_32 || last_1_var_1_31) || var_1_52) {
			var_1_74 = (last_1_var_1_74 + var_1_28);
		} else {
			if (last_1_var_1_41 <= (- var_1_23)) {
				var_1_74 = (min (var_1_4 , var_1_18));
			} else {
				var_1_74 = (max ((abs (32)) , last_1_var_1_74));
			}
		}
	}


	// From: Req2Batch40Amount500
	signed long int stepLocal_0 = last_1_var_1_91;
	if (var_1_12 <= last_1_var_1_20) {
		if ((min ((last_1_var_1_101 / 1) , last_1_var_1_25)) > stepLocal_0) {
			var_1_16 = ((var_1_18 + (var_1_19 - var_1_4)) - var_1_3);
		}
	}


	// From: Req7Batch40Amount500
	signed long int stepLocal_3 = last_1_var_1_74;
	signed long int stepLocal_2 = (last_1_var_1_61 / var_1_3) % 5;
	if (stepLocal_3 != (var_1_18 * last_1_var_1_103)) {
		if (stepLocal_2 <= (var_1_19 | last_1_var_1_65)) {
			var_1_31 = ((! last_1_var_1_92) || var_1_32);
		}
	} else {
		if (var_1_14 > var_1_10) {
			var_1_31 = (! 0);
		} else {
			var_1_31 = var_1_32;
		}
	}


	// From: Req40Batch40Amount500
	if (var_1_31) {
		var_1_93 = var_1_51;
	} else {
		var_1_93 = var_1_94;
	}


	// From: Req8Batch40Amount500
	var_1_33 = (min ((16 + var_1_28) , var_1_3));


	// From: Req36Batch40Amount500
	var_1_89 = var_1_28;


	// From: Req37Batch40Amount500
	var_1_90 = var_1_27;


	// From: Req38Batch40Amount500
	var_1_91 = var_1_28;


	// From: Req39Batch40Amount500
	var_1_92 = var_1_51;


	// From: Req41Batch40Amount500
	if (var_1_51) {
		var_1_95 = 16;
	} else {
		var_1_95 = last_1_var_1_95;
	}


	// From: Req42Batch40Amount500
	var_1_96 = var_1_11;


	// From: Req43Batch40Amount500
	var_1_97 = var_1_27;


	// From: Req45Batch40Amount500
	if (var_1_93) {
		var_1_99 = var_1_28;
	} else {
		var_1_99 = var_1_86;
	}


	// From: Req46Batch40Amount500
	if (var_1_92) {
		var_1_100 = var_1_86;
	} else {
		var_1_100 = var_1_28;
	}


	// From: Req47Batch40Amount500
	var_1_101 = ((min ((abs (53133)) , var_1_102)) - var_1_43);


	// From: Req15Batch40Amount500
	if ((var_1_97 / var_1_35) > -64) {
		var_1_53 = (min ((var_1_100 + var_1_16) , (var_1_4 - var_1_19)));
	} else {
		if (0.375 > (var_1_12 / (max (var_1_21 , var_1_54)))) {
			var_1_53 = (var_1_28 - (var_1_55 - var_1_43));
		}
	}


	// From: Req27Batch40Amount500
	if (var_1_93) {
		var_1_69 = (var_1_31 || var_1_51);
	}


	// From: Req5Batch40Amount500
	signed long int stepLocal_1 = var_1_97 / var_1_4;
	if (stepLocal_1 < var_1_19) {
		var_1_26 = (var_1_27 + (var_1_28 - 1));
	} else {
		if (var_1_12 <= ((var_1_23 + var_1_22) - var_1_14)) {
			var_1_26 = var_1_28;
		} else {
			var_1_26 = var_1_28;
		}
	}


	// From: Req6Batch40Amount500
	if (var_1_3 < var_1_26) {
		var_1_29 = (var_1_30 - var_1_18);
	} else {
		var_1_29 = 4u;
	}


	// From: Req10Batch40Amount500
	if (var_1_92) {
		var_1_41 = ((min (var_1_24 , var_1_37)) + (min (var_1_10 , var_1_40)));
	} else {
		var_1_41 = (min (var_1_14 , (min (var_1_13 , (var_1_15 - var_1_24)))));
	}


	// From: Req19Batch40Amount500
	if (((var_1_43 + var_1_55) / var_1_3) == var_1_33) {
		var_1_59 = (max ((var_1_33 + (min (var_1_27 , var_1_3))) , var_1_26));
	} else {
		var_1_59 = (min ((min (var_1_4 , -2)) , (max (var_1_28 , var_1_43))));
	}


	// From: Req48Batch40Amount500
	signed long int stepLocal_30 = (abs (var_1_79)) & var_1_86;
	if (var_1_30 == stepLocal_30) {
		var_1_103 = (abs (var_1_26));
	} else {
		var_1_103 = var_1_95;
	}


	// From: Req16Batch40Amount500
	signed long int stepLocal_10 = var_1_100 << var_1_18;
	if (stepLocal_10 < var_1_59) {
		var_1_56 = (var_1_3 + 4u);
	} else {
		var_1_56 = (var_1_30 - var_1_103);
	}


	// From: Req20Batch40Amount500
	unsigned long int stepLocal_12 = var_1_26 + (min (var_1_3 , var_1_56));
	unsigned long int stepLocal_11 = var_1_56;
	if ((min ((var_1_89 / var_1_18) , var_1_35)) < stepLocal_12) {
		if ((max (var_1_18 , last_1_var_1_60)) > stepLocal_11) {
			var_1_60 = (min (8 , var_1_4));
		} else {
			var_1_60 = (63845 - var_1_19);
		}
	}


	// From: Req21Batch40Amount500
	if (var_1_27 > (abs (var_1_28 + var_1_62))) {
		var_1_61 = (var_1_103 - var_1_43);
	}


	// From: Req23Batch40Amount500
	signed long int stepLocal_13 = var_1_4 - (max (8 , var_1_36));
	if (var_1_61 < stepLocal_13) {
		var_1_64 = (min (var_1_36 , 10));
	} else {
		var_1_64 = ((16544 - 64) - var_1_35);
	}


	// From: Req31Batch40Amount500
	signed char stepLocal_24 = var_1_28;
	signed char stepLocal_23 = var_1_27;
	signed char stepLocal_22 = var_1_26;
	if (var_1_32) {
		if (var_1_37 != (var_1_24 - var_1_14)) {
			if (stepLocal_23 <= last_1_var_1_78) {
				var_1_78 = (var_1_36 + var_1_89);
			}
		} else {
			var_1_78 = (var_1_3 - (max (var_1_35 , (var_1_28 + var_1_60))));
		}
	} else {
		if ((var_1_77 * (256u * var_1_74)) < stepLocal_24) {
			if (stepLocal_22 < var_1_33) {
				var_1_78 = ((var_1_79 - var_1_35) - (max ((var_1_60 + var_1_28) , var_1_4)));
			}
		} else {
			var_1_78 = var_1_3;
		}
	}


	// From: Req30Batch40Amount500
	signed long int stepLocal_21 = var_1_28 ^ (var_1_76 - var_1_4);
	unsigned char stepLocal_20 = var_1_32;
	unsigned char stepLocal_19 = var_1_69;
	if ((var_1_22 < (var_1_72 - var_1_71)) || stepLocal_19) {
		if (var_1_92) {
			if (stepLocal_21 >= (var_1_64 * var_1_3)) {
				var_1_75 = (var_1_64 + (abs (last_1_var_1_75 + var_1_28)));
			}
		} else {
			if (var_1_52 && stepLocal_20) {
				var_1_75 = (min (var_1_35 , var_1_4));
			} else {
				var_1_75 = ((var_1_43 + (var_1_77 - var_1_36)) + var_1_33);
			}
		}
	} else {
		var_1_75 = (var_1_36 + var_1_4);
	}


	// From: Req18Batch40Amount500
	if ((min (var_1_55 , var_1_75)) >= var_1_18) {
		var_1_58 = ((var_1_24 - (max (var_1_23 , var_1_22))) + (max (var_1_39 , (max (var_1_38 , 24.5f)))));
	}


	// From: Req35Batch40Amount500
	signed long int stepLocal_29 = var_1_103;
	unsigned short int stepLocal_28 = var_1_76;
	if (var_1_75 <= stepLocal_29) {
		if (stepLocal_28 <= var_1_28) {
			var_1_87 = ((min (var_1_18 , var_1_36)) + (max (var_1_79 , var_1_19)));
		} else {
			var_1_87 = (min (var_1_18 , (var_1_30 - var_1_16)));
		}
	} else {
		var_1_87 = var_1_30;
	}


	// From: Req14Batch40Amount500
	signed long int stepLocal_9 = max ((min (4 , var_1_75)) , var_1_36);
	if (stepLocal_9 <= var_1_103) {
		var_1_50 = (! (var_1_32 && var_1_51));
	} else {
		var_1_50 = var_1_52;
	}


	// From: Req26Batch40Amount500
	unsigned char stepLocal_16 = var_1_32;
	if (var_1_50 || stepLocal_16) {
		var_1_68 = ((abs (var_1_30)) - (var_1_4 + var_1_33));
	}


	// From: Req44Batch40Amount500
	if (var_1_50) {
		var_1_98 = var_1_11;
	} else {
		var_1_98 = var_1_24;
	}


	// From: Req17Batch40Amount500
	if (var_1_32) {
		if (var_1_98 > (var_1_14 / var_1_21)) {
			var_1_57 = (var_1_24 - var_1_22);
		}
	} else {
		var_1_57 = (max ((min ((var_1_15 - var_1_22) , var_1_14)) , var_1_40));
	}


	// From: Req28Batch40Amount500
	signed short int stepLocal_18 = var_1_59;
	signed long int stepLocal_17 = var_1_53;
	if (var_1_100 <= stepLocal_18) {
		var_1_70 = (min (var_1_14 , var_1_40));
	} else {
		if (stepLocal_17 < var_1_68) {
			var_1_70 = ((var_1_71 - (var_1_72 + var_1_73)) - var_1_14);
		} else {
			var_1_70 = var_1_71;
		}
	}


	// From: Req3Batch40Amount500
	if (var_1_10 < (var_1_70 / (max (25.125f , var_1_21)))) {
		var_1_20 = ((var_1_22 + (max (var_1_23 , var_1_24))) - var_1_15);
	} else {
		if ((var_1_19 * var_1_33) != var_1_87) {
			if ((var_1_10 > 24.4f) && var_1_50) {
				var_1_20 = (var_1_15 - var_1_14);
			}
		}
	}


	// From: Req4Batch40Amount500
	if ((- var_1_70) >= var_1_70) {
		var_1_25 = (var_1_19 + var_1_95);
	} else {
		var_1_25 = (min ((var_1_95 + var_1_4) , var_1_95));
	}


	// From: Req11Batch40Amount500
	signed char stepLocal_4 = var_1_26;
	if (stepLocal_4 < ((var_1_68 * var_1_3) / (min (var_1_4 , var_1_18)))) {
		var_1_42 = var_1_36;
	} else {
		var_1_42 = (var_1_43 - var_1_36);
	}


	// From: Req22Batch40Amount500
	var_1_63 = (max (((var_1_4 + 8) - var_1_42) , (max ((var_1_28 - var_1_60) , (max (var_1_36 , var_1_33))))));


	// From: Req24Batch40Amount500
	signed short int stepLocal_15 = var_1_64;
	unsigned char stepLocal_14 = var_1_69;
	if (var_1_63 > stepLocal_15) {
		var_1_65 = 10u;
	} else {
		if ((var_1_11 > var_1_98) && stepLocal_14) {
			var_1_65 = var_1_64;
		} else {
			var_1_65 = ((min (var_1_43 , var_1_101)) + var_1_28);
		}
	}


	// From: Req9Batch40Amount500
	if (var_1_68 == (max ((var_1_28 - var_1_4) , 2))) {
		var_1_34 = (max ((var_1_22 + var_1_23) , ((max (var_1_13 , 127.6)) - var_1_24)));
	} else {
		if ((var_1_19 * var_1_18) != var_1_16) {
			if ((var_1_35 - var_1_36) == ((max (var_1_68 , var_1_25)) + var_1_19)) {
				var_1_34 = (min ((min (var_1_14 , (min (var_1_11 , var_1_22)))) , ((var_1_37 + var_1_38) + (var_1_39 + var_1_40))));
			} else {
				if ((var_1_19 >> var_1_3) >= (var_1_25 | (var_1_68 / var_1_18))) {
					var_1_34 = (max (3.75 , var_1_13));
				} else {
					var_1_34 = var_1_15;
				}
			}
		} else {
			var_1_34 = var_1_39;
		}
	}


	// From: Req12Batch40Amount500
	signed long int stepLocal_6 = max (var_1_60 , var_1_4);
	unsigned long int stepLocal_5 = var_1_36 | var_1_25;
	if (stepLocal_5 == var_1_30) {
		if (var_1_69) {
			var_1_44 = (abs (-4));
		} else {
			if (var_1_22 > var_1_96) {
				var_1_44 = (min (var_1_43 , (max (var_1_42 , var_1_19))));
			} else {
				if (stepLocal_6 < var_1_42) {
					var_1_44 = ((min (var_1_60 , 128)) + (max (var_1_89 , var_1_19)));
				} else {
					var_1_44 = (((min (var_1_35 , var_1_28)) + (abs (var_1_97))) + ((var_1_4 - var_1_19) + var_1_60));
				}
			}
		}
	} else {
		var_1_44 = var_1_68;
	}


	// From: Req32Batch40Amount500
	unsigned char stepLocal_25 = var_1_42;
	if (! var_1_69) {
		if ((- var_1_16) >= stepLocal_25) {
			var_1_80 = (var_1_72 + var_1_10);
		}
	} else {
		var_1_80 = (min (var_1_23 , (var_1_10 + (var_1_73 + var_1_72))));
	}


	// From: Req33Batch40Amount500
	unsigned char stepLocal_27 = var_1_35;
	unsigned char stepLocal_26 = var_1_32;
	if (stepLocal_27 > var_1_25) {
		var_1_81 = (abs (min (var_1_73 , var_1_23)));
	} else {
		if (stepLocal_26 && (var_1_57 < 16.7f)) {
			if (var_1_37 > last_1_var_1_81) {
				var_1_81 = var_1_40;
			}
		} else {
			var_1_81 = (var_1_14 - var_1_24);
		}
	}


	// From: Req34Batch40Amount500
	if ((min (var_1_16 , (var_1_43 - var_1_28))) == var_1_3) {
		if (var_1_42 > var_1_3) {
			if (var_1_50) {
				var_1_83 = ((var_1_28 + var_1_85) - 32);
			} else {
				var_1_83 = (50 + var_1_85);
			}
		} else {
			var_1_83 = (max ((min (var_1_85 , var_1_28)) , (abs (var_1_27))));
		}
	} else {
		var_1_83 = (((max (var_1_28 , var_1_85)) - var_1_86) + (abs (var_1_27)));
	}


	// From: Req1Batch40Amount500
	if ((var_1_101 / (var_1_3 + var_1_4)) == (min (8 , var_1_16))) {
		if ((var_1_16 > var_1_101) && var_1_50) {
			if ((var_1_81 + var_1_96) != var_1_80) {
				var_1_1 = 8.6f;
			}
		} else {
			if ((var_1_101 & var_1_16) != var_1_4) {
				if (var_1_50) {
					var_1_1 = (max ((var_1_10 + (max (127.3f , var_1_11))) , var_1_12));
				}
			} else {
				var_1_1 = ((max (31.5f , var_1_13)) - (min (49.2f , (min (var_1_14 , var_1_15)))));
			}
		}
	}


	// From: Req13Batch40Amount500
	unsigned long int stepLocal_8 = var_1_30;
	signed long int stepLocal_7 = var_1_53;
	if (stepLocal_8 <= var_1_101) {
		if (var_1_23 == (abs (var_1_13))) {
			var_1_47 = var_1_27;
		} else {
			if (var_1_32) {
				var_1_47 = (var_1_4 - var_1_36);
			} else {
				if (var_1_13 >= var_1_1) {
					var_1_47 = var_1_4;
				} else {
					var_1_47 = (max ((max ((min (var_1_36 , var_1_26)) , (-10 + last_1_var_1_47))) , (var_1_33 + var_1_3)));
				}
			}
		}
	} else {
		if (((var_1_4 - var_1_33) * (var_1_33 - var_1_35)) == stepLocal_7) {
			var_1_47 = (min (var_1_4 , 8));
		} else {
			var_1_47 = (((var_1_4 + var_1_27) + var_1_26) + (max (var_1_33 , var_1_36)));
		}
	}


	// From: Req25Batch40Amount500
	if (var_1_51 || var_1_52) {
		if (((var_1_74 / var_1_4) / (var_1_30 - var_1_19)) != var_1_47) {
			var_1_67 = (min (var_1_38 , (max (var_1_11 , (max (3.5f , var_1_14))))));
		} else {
			if (var_1_1 != var_1_13) {
				var_1_67 = (abs (abs (var_1_24 - var_1_14)));
			} else {
				var_1_67 = ((var_1_40 + var_1_39) + (abs (64.65f)));
			}
		}
	} else {
		var_1_67 = var_1_40;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 128);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 16383);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 24575);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	assume_abort_if_not(var_1_21 != 0.0F);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -63);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 2147483647);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 127);
	assume_abort_if_not(var_1_35 <= 255);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -230584.3009213691390e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691390e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -230584.3009213691390e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691390e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -230584.3009213691390e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691390e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -230584.3009213691390e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691390e+12F && var_1_40 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 127);
	assume_abort_if_not(var_1_43 <= 254);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 0);
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= -922337.2036854776000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
	assume_abort_if_not(var_1_54 != 0.0F);
	var_1_55 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_55 >= 1073741823);
	assume_abort_if_not(var_1_55 <= 2147483646);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= -63);
	assume_abort_if_not(var_1_62 <= 63);
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= 4611686.018427382800e+12F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854765600e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691390e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 2305843.009213691390e+12F && var_1_73 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 32767);
	assume_abort_if_not(var_1_76 <= 65535);
	var_1_77 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_77 >= 8191);
	assume_abort_if_not(var_1_77 <= 16383);
	var_1_79 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_79 >= 16382);
	assume_abort_if_not(var_1_79 <= 32766);
	var_1_85 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 63);
	var_1_86 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 63);
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 0);
	var_1_102 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_102 >= 32767);
	assume_abort_if_not(var_1_102 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_20 = var_1_20;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_103 = var_1_103;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((var_1_101 / (var_1_3 + var_1_4)) == (min (8 , var_1_16))) ? (((var_1_16 > var_1_101) && var_1_50) ? (((var_1_81 + var_1_96) != var_1_80) ? (var_1_1 == ((float) 8.6f)) : 1) : (((var_1_101 & var_1_16) != var_1_4) ? (var_1_50 ? (var_1_1 == ((float) (max ((var_1_10 + (max (127.3f , var_1_11))) , var_1_12)))) : 1) : (var_1_1 == ((float) ((max (31.5f , var_1_13)) - (min (49.2f , (min (var_1_14 , var_1_15))))))))) : 1) && ((var_1_12 <= last_1_var_1_20) ? (((min ((last_1_var_1_101 / 1) , last_1_var_1_25)) > last_1_var_1_91) ? (var_1_16 == ((unsigned short int) ((var_1_18 + (var_1_19 - var_1_4)) - var_1_3))) : 1) : 1)) && ((var_1_10 < (var_1_70 / (max (25.125f , var_1_21)))) ? (var_1_20 == ((double) ((var_1_22 + (max (var_1_23 , var_1_24))) - var_1_15))) : (((var_1_19 * var_1_33) != var_1_87) ? (((var_1_10 > 24.4f) && var_1_50) ? (var_1_20 == ((double) (var_1_15 - var_1_14))) : 1) : 1))) && (((- var_1_70) >= var_1_70) ? (var_1_25 == ((unsigned long int) (var_1_19 + var_1_95))) : (var_1_25 == ((unsigned long int) (min ((var_1_95 + var_1_4) , var_1_95)))))) && (((var_1_97 / var_1_4) < var_1_19) ? (var_1_26 == ((signed char) (var_1_27 + (var_1_28 - 1)))) : ((var_1_12 <= ((var_1_23 + var_1_22) - var_1_14)) ? (var_1_26 == ((signed char) var_1_28)) : (var_1_26 == ((signed char) var_1_28))))) && ((var_1_3 < var_1_26) ? (var_1_29 == ((unsigned long int) (var_1_30 - var_1_18))) : (var_1_29 == ((unsigned long int) 4u)))) && ((last_1_var_1_74 != (var_1_18 * last_1_var_1_103)) ? ((((last_1_var_1_61 / var_1_3) % 5) <= (var_1_19 | last_1_var_1_65)) ? (var_1_31 == ((unsigned char) ((! last_1_var_1_92) || var_1_32))) : 1) : ((var_1_14 > var_1_10) ? (var_1_31 == ((unsigned char) (! 0))) : (var_1_31 == ((unsigned char) var_1_32))))) && (var_1_33 == ((unsigned char) (min ((16 + var_1_28) , var_1_3))))) && ((var_1_68 == (max ((var_1_28 - var_1_4) , 2))) ? (var_1_34 == ((double) (max ((var_1_22 + var_1_23) , ((max (var_1_13 , 127.6)) - var_1_24))))) : (((var_1_19 * var_1_18) != var_1_16) ? (((var_1_35 - var_1_36) == ((max (var_1_68 , var_1_25)) + var_1_19)) ? (var_1_34 == ((double) (min ((min (var_1_14 , (min (var_1_11 , var_1_22)))) , ((var_1_37 + var_1_38) + (var_1_39 + var_1_40)))))) : (((var_1_19 >> var_1_3) >= (var_1_25 | (var_1_68 / var_1_18))) ? (var_1_34 == ((double) (max (3.75 , var_1_13)))) : (var_1_34 == ((double) var_1_15)))) : (var_1_34 == ((double) var_1_39))))) && (var_1_92 ? (var_1_41 == ((double) ((min (var_1_24 , var_1_37)) + (min (var_1_10 , var_1_40))))) : (var_1_41 == ((double) (min (var_1_14 , (min (var_1_13 , (var_1_15 - var_1_24))))))))) && ((var_1_26 < ((var_1_68 * var_1_3) / (min (var_1_4 , var_1_18)))) ? (var_1_42 == ((unsigned char) var_1_36)) : (var_1_42 == ((unsigned char) (var_1_43 - var_1_36))))) && (((var_1_36 | var_1_25) == var_1_30) ? (var_1_69 ? (var_1_44 == ((signed long int) (abs (-4)))) : ((var_1_22 > var_1_96) ? (var_1_44 == ((signed long int) (min (var_1_43 , (max (var_1_42 , var_1_19)))))) : (((max (var_1_60 , var_1_4)) < var_1_42) ? (var_1_44 == ((signed long int) ((min (var_1_60 , 128)) + (max (var_1_89 , var_1_19))))) : (var_1_44 == ((signed long int) (((min (var_1_35 , var_1_28)) + (abs (var_1_97))) + ((var_1_4 - var_1_19) + var_1_60))))))) : (var_1_44 == ((signed long int) var_1_68)))) && ((var_1_30 <= var_1_101) ? ((var_1_23 == (abs (var_1_13))) ? (var_1_47 == ((signed short int) var_1_27)) : (var_1_32 ? (var_1_47 == ((signed short int) (var_1_4 - var_1_36))) : ((var_1_13 >= var_1_1) ? (var_1_47 == ((signed short int) var_1_4)) : (var_1_47 == ((signed short int) (max ((max ((min (var_1_36 , var_1_26)) , (-10 + last_1_var_1_47))) , (var_1_33 + var_1_3)))))))) : ((((var_1_4 - var_1_33) * (var_1_33 - var_1_35)) == var_1_53) ? (var_1_47 == ((signed short int) (min (var_1_4 , 8)))) : (var_1_47 == ((signed short int) (((var_1_4 + var_1_27) + var_1_26) + (max (var_1_33 , var_1_36)))))))) && (((max ((min (4 , var_1_75)) , var_1_36)) <= var_1_103) ? (var_1_50 == ((unsigned char) (! (var_1_32 && var_1_51)))) : (var_1_50 == ((unsigned char) var_1_52)))) && (((var_1_97 / var_1_35) > -64) ? (var_1_53 == ((signed long int) (min ((var_1_100 + var_1_16) , (var_1_4 - var_1_19))))) : ((0.375 > (var_1_12 / (max (var_1_21 , var_1_54)))) ? (var_1_53 == ((signed long int) (var_1_28 - (var_1_55 - var_1_43)))) : 1))) && (((var_1_100 << var_1_18) < var_1_59) ? (var_1_56 == ((unsigned long int) (var_1_3 + 4u))) : (var_1_56 == ((unsigned long int) (var_1_30 - var_1_103))))) && (var_1_32 ? ((var_1_98 > (var_1_14 / var_1_21)) ? (var_1_57 == ((double) (var_1_24 - var_1_22))) : 1) : (var_1_57 == ((double) (max ((min ((var_1_15 - var_1_22) , var_1_14)) , var_1_40)))))) && (((min (var_1_55 , var_1_75)) >= var_1_18) ? (var_1_58 == ((float) ((var_1_24 - (max (var_1_23 , var_1_22))) + (max (var_1_39 , (max (var_1_38 , 24.5f))))))) : 1)) && ((((var_1_43 + var_1_55) / var_1_3) == var_1_33) ? (var_1_59 == ((signed short int) (max ((var_1_33 + (min (var_1_27 , var_1_3))) , var_1_26)))) : (var_1_59 == ((signed short int) (min ((min (var_1_4 , -2)) , (max (var_1_28 , var_1_43)))))))) && (((min ((var_1_89 / var_1_18) , var_1_35)) < (var_1_26 + (min (var_1_3 , var_1_56)))) ? (((max (var_1_18 , last_1_var_1_60)) > var_1_56) ? (var_1_60 == ((unsigned short int) (min (8 , var_1_4)))) : (var_1_60 == ((unsigned short int) (63845 - var_1_19)))) : 1)) && ((var_1_27 > (abs (var_1_28 + var_1_62))) ? (var_1_61 == ((signed long int) (var_1_103 - var_1_43))) : 1)) && (var_1_63 == ((signed short int) (max (((var_1_4 + 8) - var_1_42) , (max ((var_1_28 - var_1_60) , (max (var_1_36 , var_1_33))))))))) && ((var_1_61 < (var_1_4 - (max (8 , var_1_36)))) ? (var_1_64 == ((signed short int) (min (var_1_36 , 10)))) : (var_1_64 == ((signed short int) ((16544 - 64) - var_1_35))))) && ((var_1_63 > var_1_64) ? (var_1_65 == ((unsigned long int) 10u)) : (((var_1_11 > var_1_98) && var_1_69) ? (var_1_65 == ((unsigned long int) var_1_64)) : (var_1_65 == ((unsigned long int) ((min (var_1_43 , var_1_101)) + var_1_28)))))) && ((var_1_51 || var_1_52) ? ((((var_1_74 / var_1_4) / (var_1_30 - var_1_19)) != var_1_47) ? (var_1_67 == ((float) (min (var_1_38 , (max (var_1_11 , (max (3.5f , var_1_14)))))))) : ((var_1_1 != var_1_13) ? (var_1_67 == ((float) (abs (abs (var_1_24 - var_1_14))))) : (var_1_67 == ((float) ((var_1_40 + var_1_39) + (abs (64.65f))))))) : (var_1_67 == ((float) var_1_40)))) && ((var_1_50 || var_1_32) ? (var_1_68 == ((unsigned long int) ((abs (var_1_30)) - (var_1_4 + var_1_33)))) : 1)) && (var_1_93 ? (var_1_69 == ((unsigned char) (var_1_31 || var_1_51))) : 1)) && ((var_1_100 <= var_1_59) ? (var_1_70 == ((float) (min (var_1_14 , var_1_40)))) : ((var_1_53 < var_1_68) ? (var_1_70 == ((float) ((var_1_71 - (var_1_72 + var_1_73)) - var_1_14))) : (var_1_70 == ((float) var_1_71))))) && (((last_1_var_1_33 + last_1_var_1_78) <= var_1_55) ? (((var_1_32 || last_1_var_1_31) || var_1_52) ? (var_1_74 == ((unsigned short int) (last_1_var_1_74 + var_1_28))) : ((last_1_var_1_41 <= (- var_1_23)) ? (var_1_74 == ((unsigned short int) (min (var_1_4 , var_1_18)))) : (var_1_74 == ((unsigned short int) (max ((abs (32)) , last_1_var_1_74)))))) : 1)) && (((var_1_22 < (var_1_72 - var_1_71)) || var_1_69) ? (var_1_92 ? (((var_1_28 ^ (var_1_76 - var_1_4)) >= (var_1_64 * var_1_3)) ? (var_1_75 == ((unsigned short int) (var_1_64 + (abs (last_1_var_1_75 + var_1_28))))) : 1) : ((var_1_52 && var_1_32) ? (var_1_75 == ((unsigned short int) (min (var_1_35 , var_1_4)))) : (var_1_75 == ((unsigned short int) ((var_1_43 + (var_1_77 - var_1_36)) + var_1_33))))) : (var_1_75 == ((unsigned short int) (var_1_36 + var_1_4))))) && (var_1_32 ? ((var_1_37 != (var_1_24 - var_1_14)) ? ((var_1_27 <= last_1_var_1_78) ? (var_1_78 == ((signed short int) (var_1_36 + var_1_89))) : 1) : (var_1_78 == ((signed short int) (var_1_3 - (max (var_1_35 , (var_1_28 + var_1_60))))))) : (((var_1_77 * (256u * var_1_74)) < var_1_28) ? ((var_1_26 < var_1_33) ? (var_1_78 == ((signed short int) ((var_1_79 - var_1_35) - (max ((var_1_60 + var_1_28) , var_1_4))))) : 1) : (var_1_78 == ((signed short int) var_1_3))))) && ((! var_1_69) ? (((- var_1_16) >= var_1_42) ? (var_1_80 == ((double) (var_1_72 + var_1_10))) : 1) : (var_1_80 == ((double) (min (var_1_23 , (var_1_10 + (var_1_73 + var_1_72)))))))) && ((var_1_35 > var_1_25) ? (var_1_81 == ((double) (abs (min (var_1_73 , var_1_23))))) : ((var_1_32 && (var_1_57 < 16.7f)) ? ((var_1_37 > last_1_var_1_81) ? (var_1_81 == ((double) var_1_40)) : 1) : (var_1_81 == ((double) (var_1_14 - var_1_24)))))) && (((min (var_1_16 , (var_1_43 - var_1_28))) == var_1_3) ? ((var_1_42 > var_1_3) ? (var_1_50 ? (var_1_83 == ((signed char) ((var_1_28 + var_1_85) - 32))) : (var_1_83 == ((signed char) (50 + var_1_85)))) : (var_1_83 == ((signed char) (max ((min (var_1_85 , var_1_28)) , (abs (var_1_27))))))) : (var_1_83 == ((signed char) (((max (var_1_28 , var_1_85)) - var_1_86) + (abs (var_1_27))))))) && ((var_1_75 <= var_1_103) ? ((var_1_76 <= var_1_28) ? (var_1_87 == ((unsigned long int) ((min (var_1_18 , var_1_36)) + (max (var_1_79 , var_1_19))))) : (var_1_87 == ((unsigned long int) (min (var_1_18 , (var_1_30 - var_1_16)))))) : (var_1_87 == ((unsigned long int) var_1_30)))) && (var_1_89 == ((unsigned short int) var_1_28))) && (var_1_90 == ((signed char) var_1_27))) && (var_1_91 == ((signed short int) var_1_28))) && (var_1_92 == ((unsigned char) var_1_51))) && (var_1_31 ? (var_1_93 == ((unsigned char) var_1_51)) : (var_1_93 == ((unsigned char) var_1_94)))) && (var_1_51 ? (var_1_95 == ((unsigned short int) 16)) : (var_1_95 == ((unsigned short int) last_1_var_1_95)))) && (var_1_96 == ((double) var_1_11))) && (var_1_97 == ((signed short int) var_1_27))) && (var_1_50 ? (var_1_98 == ((float) var_1_11)) : (var_1_98 == ((float) var_1_24)))) && (var_1_93 ? (var_1_99 == ((unsigned char) var_1_28)) : (var_1_99 == ((unsigned char) var_1_86)))) && (var_1_92 ? (var_1_100 == ((unsigned char) var_1_86)) : (var_1_100 == ((unsigned char) var_1_28)))) && (var_1_101 == ((unsigned short int) ((min ((abs (53133)) , var_1_102)) - var_1_43)))) && ((var_1_30 == ((abs (var_1_79)) & var_1_86)) ? (var_1_103 == ((signed long int) (abs (var_1_26)))) : (var_1_103 == ((signed long int) var_1_95)))
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
