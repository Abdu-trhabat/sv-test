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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch32Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = 32;
signed char var_1_11 = 4;
signed char var_1_12 = 2;
signed char var_1_13 = 4;
signed char var_1_14 = -25;
signed char var_1_15 = 8;
signed char var_1_16 = 50;
signed char var_1_17 = 32;
unsigned long int var_1_18 = 256;
unsigned long int var_1_19 = 1920857756;
unsigned long int var_1_20 = 1731869291;
signed long int var_1_21 = 5;
float var_1_22 = 10.5;
unsigned char var_1_23 = 128;
float var_1_24 = 99999999999.2;
double var_1_25 = 127.2;
double var_1_27 = 4.7;
double var_1_28 = 99999999.5;
double var_1_29 = 10.25;
double var_1_30 = 199.25;
double var_1_31 = 24.5;
unsigned char var_1_32 = 4;
unsigned char var_1_34 = 200;
signed long int var_1_35 = -4;
signed short int var_1_38 = 8;
signed short int var_1_39 = 27038;
signed short int var_1_40 = 20907;
float var_1_41 = 63.5;
float var_1_42 = 9.75;
float var_1_43 = 25.2;
float var_1_44 = 5.7;
float var_1_45 = 8.2;
signed long int var_1_46 = -64;
unsigned char var_1_47 = 4;
unsigned char var_1_48 = 64;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 1;
double var_1_53 = 63.5;
float var_1_54 = 100000.3;
float var_1_55 = 256.375;
signed short int var_1_56 = -16;
signed char var_1_57 = -2;
float var_1_58 = 32.6;
signed char var_1_59 = 5;
signed short int var_1_60 = -1;
double var_1_61 = 32.89;
double var_1_62 = 3.625;
unsigned long int var_1_63 = 32;
unsigned long int var_1_65 = 500;
unsigned long int var_1_66 = 2841458008;
unsigned char var_1_67 = 0;
unsigned short int var_1_68 = 100;
float var_1_70 = 16.75;
unsigned long int var_1_71 = 0;
unsigned char var_1_73 = 0;
signed char var_1_74 = -32;
signed char var_1_75 = 5;
signed char var_1_76 = 8;
unsigned long int var_1_77 = 128;
unsigned short int var_1_78 = 10;
unsigned short int var_1_79 = 35108;
unsigned char var_1_80 = 2;
unsigned char var_1_81 = 0;
unsigned char var_1_82 = 0;
unsigned char var_1_83 = 0;
signed long int var_1_85 = -128;
signed short int var_1_87 = 8;
float var_1_88 = 0.5;
float var_1_89 = 0.0;
float var_1_90 = 9.75;
unsigned short int var_1_91 = 4;
signed short int var_1_92 = -1;
signed char var_1_93 = -5;
signed char var_1_95 = -8;
signed char var_1_96 = 8;
unsigned char var_1_97 = 0;
float var_1_98 = 4.6;
unsigned char var_1_99 = 1;
unsigned char var_1_100 = 8;
signed short int var_1_101 = -4;
signed short int var_1_102 = 10;
signed char var_1_103 = 2;
signed short int var_1_104 = 64;
signed long int var_1_105 = 16;
unsigned short int var_1_106 = 25;
signed char var_1_107 = 1;
unsigned char var_1_108 = 8;
unsigned long int var_1_109 = 100;
unsigned long int var_1_110 = 1;
float var_1_111 = 5.6;
signed short int var_1_112 = 25;
unsigned short int var_1_113 = 1;
float var_1_114 = 128.25;
signed char var_1_115 = 64;
double var_1_116 = 63.6;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
unsigned char last_1_var_1_32 = 4;
signed long int last_1_var_1_35 = -4;
signed long int last_1_var_1_46 = -64;
unsigned char last_1_var_1_48 = 64;
signed short int last_1_var_1_56 = -16;
unsigned long int last_1_var_1_71 = 0;
unsigned long int last_1_var_1_77 = 128;
unsigned char last_1_var_1_80 = 2;
signed long int last_1_var_1_85 = -128;
unsigned char last_1_var_1_99 = 1;
signed short int last_1_var_1_102 = 10;
signed char last_1_var_1_103 = 2;
unsigned short int last_1_var_1_106 = 25;
double last_1_var_1_116 = 63.6;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req15Batch32Amount500
	unsigned long int stepLocal_4 = last_1_var_1_77;
	if (stepLocal_4 >= last_1_var_1_106) {
		if (! var_1_4) {
			if (var_1_43 >= (abs (var_1_24))) {
				var_1_47 = (var_1_12 + var_1_16);
			}
		} else {
			var_1_47 = (min (var_1_16 , (var_1_15 + var_1_12)));
		}
	} else {
		var_1_47 = var_1_16;
	}


	// From: Req24Batch32Amount500
	signed long int stepLocal_13 = last_1_var_1_103;
	signed long int stepLocal_12 = last_1_var_1_99;
	signed long int stepLocal_11 = last_1_var_1_32;
	signed long int stepLocal_10 = last_1_var_1_80;
	if (var_1_59 >= stepLocal_13) {
		if (stepLocal_10 < last_1_var_1_102) {
			var_1_63 = (max (var_1_16 , var_1_20));
		} else {
			if (stepLocal_12 <= last_1_var_1_102) {
				if (var_1_51) {
					var_1_63 = (max ((var_1_20 + var_1_23) , last_1_var_1_71));
				}
			}
		}
	} else {
		if (last_1_var_1_71 > stepLocal_11) {
			var_1_63 = last_1_var_1_71;
		} else {
			var_1_63 = var_1_12;
		}
	}


	// From: Req41Batch32Amount500
	var_1_91 = ((var_1_12 + var_1_63) + var_1_23);


	// From: Req25Batch32Amount500
	if (var_1_30 >= var_1_28) {
		var_1_65 = (var_1_66 - ((var_1_91 + 64u) + var_1_13));
	}


	// From: Req42Batch32Amount500
	var_1_92 = (max (var_1_65 , (var_1_16 - var_1_12)));


	// From: Req55Batch32Amount500
	var_1_109 = var_1_91;


	// From: Req1Batch32Amount500
	if (last_1_var_1_1) {
		var_1_1 = ((! (var_1_3 || var_1_4)) && var_1_5);
	} else {
		var_1_1 = (var_1_5 && var_1_4);
	}


	// From: Req4Batch32Amount500
	unsigned char stepLocal_2 = var_1_3;
	unsigned long int stepLocal_1 = 2381164849u - var_1_16;
	if (stepLocal_1 <= 500u) {
		if (var_1_5 && stepLocal_2) {
			var_1_18 = ((var_1_19 + var_1_20) - 200u);
		}
	}


	// From: Req5Batch32Amount500
	var_1_21 = (max ((var_1_16 - 1) , var_1_15));


	// From: Req6Batch32Amount500
	if (! ((var_1_23 - 1) <= 2)) {
		var_1_22 = (abs (var_1_24));
	}


	// From: Req17Batch32Amount500
	if (var_1_5) {
		var_1_50 = (var_1_51 && var_1_52);
	} else {
		var_1_50 = var_1_51;
	}


	// From: Req18Batch32Amount500
	var_1_53 = ((var_1_30 + var_1_29) + var_1_31);


	// From: Req19Batch32Amount500
	var_1_54 = ((max (var_1_43 , var_1_30)) + (var_1_29 + var_1_55));


	// From: Req21Batch32Amount500
	if ((32.25f - var_1_58) > var_1_29) {
		var_1_57 = (max ((abs (var_1_16)) , var_1_59));
	} else {
		var_1_57 = (var_1_13 - (min (var_1_16 , var_1_15)));
	}


	// From: Req26Batch32Amount500
	var_1_67 = var_1_3;


	// From: Req28Batch32Amount500
	if (var_1_51) {
		var_1_70 = (min (var_1_43 , var_1_28));
	}


	// From: Req45Batch32Amount500
	if (var_1_1) {
		var_1_98 = (min (var_1_28 , var_1_27));
	}


	// From: Req46Batch32Amount500
	if (((var_1_23 - var_1_15) / var_1_75) >= var_1_14) {
		var_1_99 = (max ((min (var_1_15 , (var_1_13 + var_1_12))) , (var_1_16 + var_1_100)));
	} else {
		var_1_99 = var_1_15;
	}


	// From: Req48Batch32Amount500
	var_1_102 = -1;


	// From: Req49Batch32Amount500
	var_1_103 = var_1_95;


	// From: Req51Batch32Amount500
	if (var_1_51) {
		var_1_105 = var_1_91;
	} else {
		var_1_105 = var_1_18;
	}


	// From: Req54Batch32Amount500
	var_1_108 = var_1_16;


	// From: Req57Batch32Amount500
	var_1_111 = var_1_27;


	// From: Req59Batch32Amount500
	if (var_1_52) {
		var_1_113 = var_1_39;
	} else {
		var_1_113 = var_1_13;
	}


	// From: Req60Batch32Amount500
	if (var_1_3) {
		var_1_114 = var_1_62;
	} else {
		var_1_114 = var_1_45;
	}


	// From: Req61Batch32Amount500
	var_1_115 = (min (var_1_12 , (var_1_15 - var_1_16)));


	// From: Req62Batch32Amount500
	if ((var_1_55 + last_1_var_1_116) >= var_1_45) {
		var_1_116 = (min (var_1_29 , var_1_27));
	}


	// From: Req13Batch32Amount500
	if (var_1_50 && var_1_67) {
		var_1_44 = ((min (var_1_43 , (var_1_31 + var_1_45))) - var_1_27);
	}


	// From: Req20Batch32Amount500
	if (last_1_var_1_56 <= (last_1_var_1_56 * -10)) {
		var_1_56 = (max ((min ((last_1_var_1_56 + var_1_12) , (var_1_15 + var_1_14))) , ((var_1_17 + var_1_16) + -32)));
	} else {
		var_1_56 = (var_1_12 - var_1_102);
	}


	// From: Req27Batch32Amount500
	if (var_1_50) {
		var_1_68 = (max (var_1_16 , (min ((min (var_1_40 , var_1_34)) , (var_1_23 + var_1_108)))));
	} else {
		var_1_68 = (41186 - var_1_13);
	}


	// From: Req33Batch32Amount500
	if (((abs (var_1_75)) ^ (256 % var_1_34)) >= 64) {
		if (var_1_68 == var_1_39) {
			var_1_78 = (var_1_79 - var_1_15);
		}
	}


	// From: Req47Batch32Amount500
	if ((var_1_40 * (var_1_108 * var_1_78)) <= var_1_108) {
		var_1_101 = var_1_99;
	} else {
		var_1_101 = var_1_56;
	}


	// From: Req50Batch32Amount500
	if (var_1_82) {
		var_1_104 = var_1_59;
	} else {
		var_1_104 = var_1_115;
	}


	// From: Req52Batch32Amount500
	var_1_106 = var_1_78;


	// From: Req58Batch32Amount500
	if (var_1_5) {
		var_1_112 = var_1_113;
	} else {
		var_1_112 = -2;
	}


	// From: Req22Batch32Amount500
	unsigned short int stepLocal_9 = var_1_78;
	if (stepLocal_9 >= (var_1_16 - var_1_20)) {
		var_1_60 = (var_1_34 + var_1_47);
	}


	// From: Req30Batch32Amount500
	signed long int stepLocal_14 = (max (16 , var_1_39)) * var_1_60;
	if (stepLocal_14 >= var_1_34) {
		var_1_73 = (! var_1_4);
	} else {
		var_1_73 = (! var_1_51);
	}


	// From: Req29Batch32Amount500
	if (var_1_99 >= var_1_92) {
		var_1_71 = (max ((var_1_40 + (var_1_19 - var_1_101)) , var_1_47));
	}


	// From: Req31Batch32Amount500
	unsigned char stepLocal_16 = var_1_52;
	signed long int stepLocal_15 = var_1_60 / var_1_75;
	if (stepLocal_15 > var_1_39) {
		if (stepLocal_16 && (var_1_73 && var_1_51)) {
			var_1_74 = -50;
		} else {
			var_1_74 = (abs (var_1_16 - var_1_13));
		}
	} else {
		var_1_74 = (var_1_13 + var_1_76);
	}


	// From: Req8Batch32Amount500
	if ((var_1_20 - last_1_var_1_32) < (64u * var_1_19)) {
		if ((- last_1_var_1_32) == (var_1_16 - last_1_var_1_32)) {
			if (var_1_31 >= var_1_27) {
				var_1_32 = ((abs (var_1_34)) - (min ((var_1_12 + var_1_15) , var_1_13)));
			} else {
				var_1_32 = (max ((max ((abs (var_1_12)) , var_1_13)) , 2));
			}
		} else {
			var_1_32 = (25 + var_1_15);
		}
	} else {
		if (var_1_4 && var_1_73) {
			var_1_32 = (max ((var_1_34 - var_1_15) , var_1_13));
		} else {
			var_1_32 = var_1_12;
		}
	}


	// From: Req32Batch32Amount500
	if (var_1_51) {
		var_1_77 = (min ((var_1_20 + (var_1_32 + var_1_47)) , var_1_101));
	}


	// From: Req38Batch32Amount500
	unsigned char stepLocal_22 = var_1_23;
	if (stepLocal_22 <= var_1_63) {
		var_1_87 = (var_1_59 + (var_1_74 + var_1_12));
	}


	// From: Req44Batch32Amount500
	signed short int stepLocal_23 = var_1_87;
	if ((var_1_28 - var_1_27) <= var_1_45) {
		var_1_97 = (! (! (var_1_4 && var_1_3)));
	} else {
		if (stepLocal_23 >= var_1_19) {
			var_1_97 = ((var_1_50 || (! var_1_3)) && var_1_5);
		} else {
			var_1_97 = ((! var_1_82) && (var_1_50 || (var_1_51 || var_1_5)));
		}
	}


	// From: Req2Batch32Amount500
	unsigned char stepLocal_0 = var_1_32;
	if (var_1_113 == stepLocal_0) {
		var_1_6 = var_1_102;
	} else {
		if (! (! (var_1_113 < var_1_32))) {
			var_1_6 = (min (var_1_102 , var_1_103));
		}
	}


	// From: Req3Batch32Amount500
	if (var_1_87 > var_1_68) {
		if (var_1_68 > (max (var_1_87 , var_1_105))) {
			var_1_11 = ((var_1_12 - var_1_13) + (max (var_1_14 , (var_1_15 - var_1_16))));
		} else {
			var_1_11 = (max (var_1_17 , (var_1_12 - var_1_16)));
		}
	}


	// From: Req9Batch32Amount500
	if ((last_1_var_1_35 < var_1_16) || var_1_67) {
		if (var_1_15 < (-8 >> var_1_65)) {
			var_1_35 = ((max (var_1_12 , var_1_15)) - (var_1_16 + var_1_65));
		} else {
			if (var_1_23 <= 16) {
				var_1_35 = ((abs (var_1_32)) + var_1_17);
			} else {
				var_1_35 = var_1_23;
			}
		}
	} else {
		var_1_35 = ((min (var_1_16 , var_1_65)) - (var_1_34 + var_1_12));
	}


	// From: Req36Batch32Amount500
	unsigned char stepLocal_19 = var_1_47;
	unsigned char stepLocal_18 = var_1_108;
	if (stepLocal_18 == var_1_75) {
		if ((var_1_68 * (4 - var_1_56)) == stepLocal_19) {
			var_1_83 = (var_1_51 && (var_1_97 || (var_1_5 || var_1_52)));
		} else {
			var_1_83 = (((var_1_27 - var_1_43) >= var_1_44) && var_1_4);
		}
	} else {
		if (var_1_82) {
			var_1_83 = (var_1_4 && var_1_3);
		} else {
			var_1_83 = (! (! (var_1_4 || var_1_3)));
		}
	}


	// From: Req53Batch32Amount500
	if (var_1_97) {
		var_1_107 = 5;
	}


	// From: Req56Batch32Amount500
	if (var_1_52) {
		var_1_110 = var_1_32;
	} else {
		var_1_110 = var_1_47;
	}


	// From: Req12Batch32Amount500
	if (var_1_3) {
		if (var_1_97) {
			var_1_42 = (var_1_28 - (var_1_31 + var_1_43));
		}
	} else {
		if (var_1_73) {
			var_1_42 = (var_1_43 + var_1_31);
		}
	}


	// From: Req10Batch32Amount500
	if (var_1_97) {
		var_1_38 = (abs (var_1_34));
	} else {
		if (var_1_83) {
			var_1_38 = (((max (var_1_39 , var_1_40)) - var_1_12) - var_1_23);
		}
	}


	// From: Req14Batch32Amount500
	if ((max ((var_1_15 - var_1_16) , var_1_107)) < ((var_1_40 - var_1_39) * -64)) {
		var_1_46 = (max (var_1_15 , last_1_var_1_46));
	}


	// From: Req39Batch32Amount500
	if (! (var_1_13 >= var_1_46)) {
		if (var_1_52) {
			var_1_88 = (abs (var_1_45));
		} else {
			if (var_1_62 < var_1_111) {
				var_1_88 = ((min (var_1_31 , var_1_45)) - 256.625f);
			} else {
				var_1_88 = (min (var_1_45 , var_1_31));
			}
		}
	} else {
		var_1_88 = ((var_1_89 - var_1_43) - var_1_28);
	}


	// From: Req16Batch32Amount500
	unsigned char stepLocal_8 = var_1_3;
	unsigned char stepLocal_7 = var_1_99;
	unsigned long int stepLocal_6 = var_1_18;
	unsigned long int stepLocal_5 = var_1_77;
	if (stepLocal_5 >= last_1_var_1_48) {
		if (stepLocal_6 < last_1_var_1_48) {
			if (last_1_var_1_48 < stepLocal_7) {
				var_1_48 = (((min (var_1_12 , var_1_16)) + var_1_15) + var_1_13);
			} else {
				if (var_1_1 || stepLocal_8) {
					var_1_48 = (128 - var_1_15);
				}
			}
		} else {
			if ((- var_1_42) < 50.5) {
				var_1_48 = (max (var_1_13 , (abs (var_1_34 - var_1_15))));
			} else {
				var_1_48 = var_1_15;
			}
		}
	} else {
		var_1_48 = ((abs (var_1_16)) + var_1_15);
	}


	// From: Req37Batch32Amount500
	unsigned char stepLocal_21 = var_1_52;
	unsigned long int stepLocal_20 = var_1_110;
	if (var_1_1 || stepLocal_21) {
		var_1_85 = var_1_13;
	} else {
		if ((var_1_48 + var_1_12) <= stepLocal_20) {
			var_1_85 = (min (((var_1_39 + var_1_79) - last_1_var_1_85) , var_1_48));
		} else {
			var_1_85 = (min (var_1_39 , var_1_63));
		}
	}


	// From: Req34Batch32Amount500
	unsigned char stepLocal_17 = var_1_48;
	if (var_1_3) {
		if (var_1_5) {
			if (stepLocal_17 < (var_1_109 + var_1_85)) {
				var_1_80 = var_1_16;
			} else {
				var_1_80 = (max (var_1_15 , var_1_34));
			}
		}
	} else {
		var_1_80 = (max ((var_1_15 + (min (var_1_16 , var_1_13))) , var_1_12));
	}


	// From: Req7Batch32Amount500
	if ((var_1_20 / (50u + var_1_23)) < var_1_108) {
		if ((var_1_13 & -1) <= var_1_63) {
			var_1_25 = (var_1_27 - (max (1.000000005E8 , var_1_28)));
		} else {
			if (var_1_47 <= var_1_80) {
				var_1_25 = ((var_1_29 + var_1_30) + (199.6 - var_1_31));
			}
		}
	}


	// From: Req35Batch32Amount500
	if (var_1_31 < (- (- 64.4))) {
		var_1_81 = (! var_1_51);
	} else {
		if ((var_1_68 / (max (var_1_23 , var_1_20))) < ((var_1_105 | var_1_115) + var_1_80)) {
			var_1_81 = ((var_1_3 || var_1_4) || var_1_82);
		}
	}


	// From: Req40Batch32Amount500
	if (var_1_29 > var_1_45) {
		if ((max (var_1_114 , 49.8f)) <= var_1_25) {
			var_1_90 = (4.875f - (min (var_1_45 , var_1_43)));
		} else {
			var_1_90 = (var_1_28 - var_1_31);
		}
	}


	// From: Req43Batch32Amount500
	if (4.75 <= var_1_114) {
		if (var_1_67 || var_1_73) {
			var_1_93 = (var_1_15 + var_1_12);
		} else {
			var_1_93 = (min ((min ((10 - var_1_13) , (var_1_14 + var_1_16))) , (var_1_15 + var_1_12)));
		}
	} else {
		if (var_1_81 && var_1_51) {
			var_1_93 = (8 + (var_1_95 + var_1_96));
		}
	}


	// From: Req11Batch32Amount500
	unsigned char stepLocal_3 = var_1_48;
	if ((var_1_40 / var_1_39) < stepLocal_3) {
		if (128.25f > ((var_1_54 * var_1_28) + var_1_90)) {
			var_1_41 = (var_1_28 - var_1_31);
		}
	}


	// From: Req23Batch32Amount500
	if (! var_1_3) {
		if (var_1_81 || (var_1_1 || var_1_5)) {
			var_1_61 = (min (var_1_43 , (var_1_62 + var_1_30)));
		}
	} else {
		if (((min (var_1_16 , var_1_15)) - var_1_13) != -25) {
			var_1_61 = (min (var_1_30 , (var_1_43 - (var_1_31 + var_1_45))));
		} else {
			var_1_61 = (min (var_1_45 , var_1_31));
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 0);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 1073741824);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 127);
	assume_abort_if_not(var_1_23 <= 255);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -230584.3009213691390e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691390e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -230584.3009213691390e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691390e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 127);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_39 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_39 >= 16382);
	assume_abort_if_not(var_1_39 <= 32766);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= 16382);
	assume_abort_if_not(var_1_40 <= 32766);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 1);
	assume_abort_if_not(var_1_52 <= 1);
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= -230584.3009213691390e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691390e+12F && var_1_55 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -127);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= -461168.6018427382800e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427382800e+12F && var_1_62 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_66 >= 2147483647);
	assume_abort_if_not(var_1_66 <= 4294967294);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= -128);
	assume_abort_if_not(var_1_75 <= 127);
	assume_abort_if_not(var_1_75 != 0);
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= -63);
	assume_abort_if_not(var_1_76 <= 63);
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 32767);
	assume_abort_if_not(var_1_79 <= 65534);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 0);
	var_1_89 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_89 >= 4611686.018427382800e+12F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 9223372.036854765600e+12F && var_1_89 >= 1.0e-20F ));
	var_1_95 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_95 >= -31);
	assume_abort_if_not(var_1_95 <= 32);
	var_1_96 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_96 >= -31);
	assume_abort_if_not(var_1_96 <= 31);
	var_1_100 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_100 >= 0);
	assume_abort_if_not(var_1_100 <= 127);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_116 = var_1_116;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_1 ? (var_1_1 == ((unsigned char) ((! (var_1_3 || var_1_4)) && var_1_5))) : (var_1_1 == ((unsigned char) (var_1_5 && var_1_4)))) && ((var_1_113 == var_1_32) ? (var_1_6 == ((signed long int) var_1_102)) : ((! (! (var_1_113 < var_1_32))) ? (var_1_6 == ((signed long int) (min (var_1_102 , var_1_103)))) : 1))) && ((var_1_87 > var_1_68) ? ((var_1_68 > (max (var_1_87 , var_1_105))) ? (var_1_11 == ((signed char) ((var_1_12 - var_1_13) + (max (var_1_14 , (var_1_15 - var_1_16)))))) : (var_1_11 == ((signed char) (max (var_1_17 , (var_1_12 - var_1_16)))))) : 1)) && (((2381164849u - var_1_16) <= 500u) ? ((var_1_5 && var_1_3) ? (var_1_18 == ((unsigned long int) ((var_1_19 + var_1_20) - 200u))) : 1) : 1)) && (var_1_21 == ((signed long int) (max ((var_1_16 - 1) , var_1_15))))) && ((! ((var_1_23 - 1) <= 2)) ? (var_1_22 == ((float) (abs (var_1_24)))) : 1)) && (((var_1_20 / (50u + var_1_23)) < var_1_108) ? (((var_1_13 & -1) <= var_1_63) ? (var_1_25 == ((double) (var_1_27 - (max (1.000000005E8 , var_1_28))))) : ((var_1_47 <= var_1_80) ? (var_1_25 == ((double) ((var_1_29 + var_1_30) + (199.6 - var_1_31)))) : 1)) : 1)) && (((var_1_20 - last_1_var_1_32) < (64u * var_1_19)) ? (((- last_1_var_1_32) == (var_1_16 - last_1_var_1_32)) ? ((var_1_31 >= var_1_27) ? (var_1_32 == ((unsigned char) ((abs (var_1_34)) - (min ((var_1_12 + var_1_15) , var_1_13))))) : (var_1_32 == ((unsigned char) (max ((max ((abs (var_1_12)) , var_1_13)) , 2))))) : (var_1_32 == ((unsigned char) (25 + var_1_15)))) : ((var_1_4 && var_1_73) ? (var_1_32 == ((unsigned char) (max ((var_1_34 - var_1_15) , var_1_13)))) : (var_1_32 == ((unsigned char) var_1_12))))) && (((last_1_var_1_35 < var_1_16) || var_1_67) ? ((var_1_15 < (-8 >> var_1_65)) ? (var_1_35 == ((signed long int) ((max (var_1_12 , var_1_15)) - (var_1_16 + var_1_65)))) : ((var_1_23 <= 16) ? (var_1_35 == ((signed long int) ((abs (var_1_32)) + var_1_17))) : (var_1_35 == ((signed long int) var_1_23)))) : (var_1_35 == ((signed long int) ((min (var_1_16 , var_1_65)) - (var_1_34 + var_1_12)))))) && (var_1_97 ? (var_1_38 == ((signed short int) (abs (var_1_34)))) : (var_1_83 ? (var_1_38 == ((signed short int) (((max (var_1_39 , var_1_40)) - var_1_12) - var_1_23))) : 1))) && (((var_1_40 / var_1_39) < var_1_48) ? ((128.25f > ((var_1_54 * var_1_28) + var_1_90)) ? (var_1_41 == ((float) (var_1_28 - var_1_31))) : 1) : 1)) && (var_1_3 ? (var_1_97 ? (var_1_42 == ((float) (var_1_28 - (var_1_31 + var_1_43)))) : 1) : (var_1_73 ? (var_1_42 == ((float) (var_1_43 + var_1_31))) : 1))) && ((var_1_50 && var_1_67) ? (var_1_44 == ((float) ((min (var_1_43 , (var_1_31 + var_1_45))) - var_1_27))) : 1)) && (((max ((var_1_15 - var_1_16) , var_1_107)) < ((var_1_40 - var_1_39) * -64)) ? (var_1_46 == ((signed long int) (max (var_1_15 , last_1_var_1_46)))) : 1)) && ((last_1_var_1_77 >= last_1_var_1_106) ? ((! var_1_4) ? ((var_1_43 >= (abs (var_1_24))) ? (var_1_47 == ((unsigned char) (var_1_12 + var_1_16))) : 1) : (var_1_47 == ((unsigned char) (min (var_1_16 , (var_1_15 + var_1_12)))))) : (var_1_47 == ((unsigned char) var_1_16)))) && ((var_1_77 >= last_1_var_1_48) ? ((var_1_18 < last_1_var_1_48) ? ((last_1_var_1_48 < var_1_99) ? (var_1_48 == ((unsigned char) (((min (var_1_12 , var_1_16)) + var_1_15) + var_1_13))) : ((var_1_1 || var_1_3) ? (var_1_48 == ((unsigned char) (128 - var_1_15))) : 1)) : (((- var_1_42) < 50.5) ? (var_1_48 == ((unsigned char) (max (var_1_13 , (abs (var_1_34 - var_1_15)))))) : (var_1_48 == ((unsigned char) var_1_15)))) : (var_1_48 == ((unsigned char) ((abs (var_1_16)) + var_1_15))))) && (var_1_5 ? (var_1_50 == ((unsigned char) (var_1_51 && var_1_52))) : (var_1_50 == ((unsigned char) var_1_51)))) && (var_1_53 == ((double) ((var_1_30 + var_1_29) + var_1_31)))) && (var_1_54 == ((float) ((max (var_1_43 , var_1_30)) + (var_1_29 + var_1_55))))) && ((last_1_var_1_56 <= (last_1_var_1_56 * -10)) ? (var_1_56 == ((signed short int) (max ((min ((last_1_var_1_56 + var_1_12) , (var_1_15 + var_1_14))) , ((var_1_17 + var_1_16) + -32))))) : (var_1_56 == ((signed short int) (var_1_12 - var_1_102))))) && (((32.25f - var_1_58) > var_1_29) ? (var_1_57 == ((signed char) (max ((abs (var_1_16)) , var_1_59)))) : (var_1_57 == ((signed char) (var_1_13 - (min (var_1_16 , var_1_15))))))) && ((var_1_78 >= (var_1_16 - var_1_20)) ? (var_1_60 == ((signed short int) (var_1_34 + var_1_47))) : 1)) && ((! var_1_3) ? ((var_1_81 || (var_1_1 || var_1_5)) ? (var_1_61 == ((double) (min (var_1_43 , (var_1_62 + var_1_30))))) : 1) : ((((min (var_1_16 , var_1_15)) - var_1_13) != -25) ? (var_1_61 == ((double) (min (var_1_30 , (var_1_43 - (var_1_31 + var_1_45)))))) : (var_1_61 == ((double) (min (var_1_45 , var_1_31))))))) && ((var_1_59 >= last_1_var_1_103) ? ((last_1_var_1_80 < last_1_var_1_102) ? (var_1_63 == ((unsigned long int) (max (var_1_16 , var_1_20)))) : ((last_1_var_1_99 <= last_1_var_1_102) ? (var_1_51 ? (var_1_63 == ((unsigned long int) (max ((var_1_20 + var_1_23) , last_1_var_1_71)))) : 1) : 1)) : ((last_1_var_1_71 > last_1_var_1_32) ? (var_1_63 == ((unsigned long int) last_1_var_1_71)) : (var_1_63 == ((unsigned long int) var_1_12))))) && ((var_1_30 >= var_1_28) ? (var_1_65 == ((unsigned long int) (var_1_66 - ((var_1_91 + 64u) + var_1_13)))) : 1)) && (var_1_67 == ((unsigned char) var_1_3))) && (var_1_50 ? (var_1_68 == ((unsigned short int) (max (var_1_16 , (min ((min (var_1_40 , var_1_34)) , (var_1_23 + var_1_108))))))) : (var_1_68 == ((unsigned short int) (41186 - var_1_13))))) && (var_1_51 ? (var_1_70 == ((float) (min (var_1_43 , var_1_28)))) : 1)) && ((var_1_99 >= var_1_92) ? (var_1_71 == ((unsigned long int) (max ((var_1_40 + (var_1_19 - var_1_101)) , var_1_47)))) : 1)) && ((((max (16 , var_1_39)) * var_1_60) >= var_1_34) ? (var_1_73 == ((unsigned char) (! var_1_4))) : (var_1_73 == ((unsigned char) (! var_1_51))))) && (((var_1_60 / var_1_75) > var_1_39) ? ((var_1_52 && (var_1_73 && var_1_51)) ? (var_1_74 == ((signed char) -50)) : (var_1_74 == ((signed char) (abs (var_1_16 - var_1_13))))) : (var_1_74 == ((signed char) (var_1_13 + var_1_76))))) && (var_1_51 ? (var_1_77 == ((unsigned long int) (min ((var_1_20 + (var_1_32 + var_1_47)) , var_1_101)))) : 1)) && ((((abs (var_1_75)) ^ (256 % var_1_34)) >= 64) ? ((var_1_68 == var_1_39) ? (var_1_78 == ((unsigned short int) (var_1_79 - var_1_15))) : 1) : 1)) && (var_1_3 ? (var_1_5 ? ((var_1_48 < (var_1_109 + var_1_85)) ? (var_1_80 == ((unsigned char) var_1_16)) : (var_1_80 == ((unsigned char) (max (var_1_15 , var_1_34))))) : 1) : (var_1_80 == ((unsigned char) (max ((var_1_15 + (min (var_1_16 , var_1_13))) , var_1_12)))))) && ((var_1_31 < (- (- 64.4))) ? (var_1_81 == ((unsigned char) (! var_1_51))) : (((var_1_68 / (max (var_1_23 , var_1_20))) < ((var_1_105 | var_1_115) + var_1_80)) ? (var_1_81 == ((unsigned char) ((var_1_3 || var_1_4) || var_1_82))) : 1))) && ((var_1_108 == var_1_75) ? (((var_1_68 * (4 - var_1_56)) == var_1_47) ? (var_1_83 == ((unsigned char) (var_1_51 && (var_1_97 || (var_1_5 || var_1_52))))) : (var_1_83 == ((unsigned char) (((var_1_27 - var_1_43) >= var_1_44) && var_1_4)))) : (var_1_82 ? (var_1_83 == ((unsigned char) (var_1_4 && var_1_3))) : (var_1_83 == ((unsigned char) (! (! (var_1_4 || var_1_3)))))))) && ((var_1_1 || var_1_52) ? (var_1_85 == ((signed long int) var_1_13)) : (((var_1_48 + var_1_12) <= var_1_110) ? (var_1_85 == ((signed long int) (min (((var_1_39 + var_1_79) - last_1_var_1_85) , var_1_48)))) : (var_1_85 == ((signed long int) (min (var_1_39 , var_1_63))))))) && ((var_1_23 <= var_1_63) ? (var_1_87 == ((signed short int) (var_1_59 + (var_1_74 + var_1_12)))) : 1)) && ((! (var_1_13 >= var_1_46)) ? (var_1_52 ? (var_1_88 == ((float) (abs (var_1_45)))) : ((var_1_62 < var_1_111) ? (var_1_88 == ((float) ((min (var_1_31 , var_1_45)) - 256.625f))) : (var_1_88 == ((float) (min (var_1_45 , var_1_31)))))) : (var_1_88 == ((float) ((var_1_89 - var_1_43) - var_1_28))))) && ((var_1_29 > var_1_45) ? (((max (var_1_114 , 49.8f)) <= var_1_25) ? (var_1_90 == ((float) (4.875f - (min (var_1_45 , var_1_43))))) : (var_1_90 == ((float) (var_1_28 - var_1_31)))) : 1)) && (var_1_91 == ((unsigned short int) ((var_1_12 + var_1_63) + var_1_23)))) && (var_1_92 == ((signed short int) (max (var_1_65 , (var_1_16 - var_1_12)))))) && ((4.75 <= var_1_114) ? ((var_1_67 || var_1_73) ? (var_1_93 == ((signed char) (var_1_15 + var_1_12))) : (var_1_93 == ((signed char) (min ((min ((10 - var_1_13) , (var_1_14 + var_1_16))) , (var_1_15 + var_1_12)))))) : ((var_1_81 && var_1_51) ? (var_1_93 == ((signed char) (8 + (var_1_95 + var_1_96)))) : 1))) && (((var_1_28 - var_1_27) <= var_1_45) ? (var_1_97 == ((unsigned char) (! (! (var_1_4 && var_1_3))))) : ((var_1_87 >= var_1_19) ? (var_1_97 == ((unsigned char) ((var_1_50 || (! var_1_3)) && var_1_5))) : (var_1_97 == ((unsigned char) ((! var_1_82) && (var_1_50 || (var_1_51 || var_1_5)))))))) && (var_1_1 ? (var_1_98 == ((float) (min (var_1_28 , var_1_27)))) : 1)) && ((((var_1_23 - var_1_15) / var_1_75) >= var_1_14) ? (var_1_99 == ((unsigned char) (max ((min (var_1_15 , (var_1_13 + var_1_12))) , (var_1_16 + var_1_100))))) : (var_1_99 == ((unsigned char) var_1_15)))) && (((var_1_40 * (var_1_108 * var_1_78)) <= var_1_108) ? (var_1_101 == ((signed short int) var_1_99)) : (var_1_101 == ((signed short int) var_1_56)))) && (var_1_102 == ((signed short int) -1))) && (var_1_103 == ((signed char) var_1_95))) && (var_1_82 ? (var_1_104 == ((signed short int) var_1_59)) : (var_1_104 == ((signed short int) var_1_115)))) && (var_1_51 ? (var_1_105 == ((signed long int) var_1_91)) : (var_1_105 == ((signed long int) var_1_18)))) && (var_1_106 == ((unsigned short int) var_1_78))) && (var_1_97 ? (var_1_107 == ((signed char) 5)) : 1)) && (var_1_108 == ((unsigned char) var_1_16))) && (var_1_109 == ((unsigned long int) var_1_91))) && (var_1_52 ? (var_1_110 == ((unsigned long int) var_1_32)) : (var_1_110 == ((unsigned long int) var_1_47)))) && (var_1_111 == ((float) var_1_27))) && (var_1_5 ? (var_1_112 == ((signed short int) var_1_113)) : (var_1_112 == ((signed short int) -2)))) && (var_1_52 ? (var_1_113 == ((unsigned short int) var_1_39)) : (var_1_113 == ((unsigned short int) var_1_13)))) && (var_1_3 ? (var_1_114 == ((float) var_1_62)) : (var_1_114 == ((float) var_1_45)))) && (var_1_115 == ((signed char) (min (var_1_12 , (var_1_15 - var_1_16)))))) && (((var_1_55 + last_1_var_1_116) >= var_1_45) ? (var_1_116 == ((double) (min (var_1_29 , var_1_27)))) : 1)
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
