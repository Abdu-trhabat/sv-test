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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch167Amount500.c", 13, "reach_error"); }
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
double var_1_1 = 0.6;
double var_1_6 = 8.75;
double var_1_7 = 10.5;
double var_1_8 = 3.4;
double var_1_11 = 5.4;
signed short int var_1_12 = 64;
signed short int var_1_13 = 25;
signed short int var_1_14 = 128;
float var_1_15 = 10.2;
float var_1_16 = 4.5;
float var_1_17 = 15.6;
unsigned short int var_1_18 = 5;
signed long int var_1_19 = 256;
double var_1_20 = 63.5;
signed char var_1_21 = 4;
signed char var_1_22 = 10;
signed char var_1_23 = -5;
signed char var_1_24 = 0;
signed char var_1_25 = 4;
signed char var_1_26 = -10;
signed long int var_1_27 = 16;
signed long int var_1_28 = 1137966836;
unsigned char var_1_29 = 10;
unsigned char var_1_30 = 64;
unsigned char var_1_31 = 64;
unsigned char var_1_32 = 64;
signed char var_1_33 = -64;
signed char var_1_34 = 4;
signed char var_1_35 = 5;
double var_1_36 = 9.5;
double var_1_37 = 63.5;
unsigned long int var_1_38 = 128;
unsigned long int var_1_39 = 2531667107;
unsigned long int var_1_40 = 1631442719;
unsigned short int var_1_41 = 2;
unsigned short int var_1_42 = 128;
unsigned long int var_1_43 = 8;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 0;
float var_1_46 = 50.5;
float var_1_47 = 0.0;
double var_1_48 = 4.5;
unsigned short int var_1_49 = 2;
signed char var_1_50 = 8;
unsigned long int var_1_52 = 10;
unsigned long int var_1_54 = 100;
unsigned long int var_1_55 = 1850246904;
float var_1_56 = 4.625;
unsigned char var_1_57 = 8;
unsigned char var_1_58 = 128;
unsigned char var_1_59 = 2;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 1;
double var_1_62 = 7.8;
unsigned long int var_1_63 = 25;
signed short int var_1_64 = 128;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 200;
unsigned char var_1_67 = 1;
unsigned char var_1_68 = 0;
unsigned long int var_1_69 = 256;
unsigned char var_1_70 = 0;
double var_1_71 = 8.6;
unsigned short int var_1_72 = 30988;
unsigned short int var_1_73 = 18119;
unsigned char var_1_74 = 128;
double var_1_75 = 4.38;
unsigned char var_1_76 = 0;
unsigned short int var_1_77 = 8;
unsigned short int var_1_78 = 62556;
unsigned char var_1_79 = 0;
signed long int var_1_80 = 0;
unsigned char var_1_81 = 64;
float var_1_83 = 32.625;
signed char var_1_84 = -64;
signed char var_1_85 = 10;
float var_1_86 = 1.5;
float var_1_87 = 128.6;
float var_1_88 = 7.64;
float var_1_89 = 255.5;
float var_1_90 = 1.5;
signed short int var_1_92 = -8;
double var_1_93 = 10.5;
signed char var_1_94 = -4;
signed char var_1_95 = 16;
unsigned short int var_1_96 = 16;
unsigned char var_1_97 = 0;
unsigned short int var_1_98 = 200;
unsigned short int var_1_99 = 21083;
double var_1_100 = 7.36;
double var_1_101 = 999999.4;
double var_1_102 = 3.8;
unsigned long int var_1_103 = 100;
signed char var_1_106 = 64;
unsigned long int var_1_107 = 128;
unsigned short int var_1_108 = 8;
signed long int var_1_109 = 4;
unsigned char var_1_110 = 0;
unsigned char var_1_111 = 0;
unsigned long int var_1_112 = 50;
signed short int var_1_113 = 256;
double var_1_114 = 15.4;
float var_1_115 = 0.0;
unsigned long int var_1_116 = 50;
float var_1_117 = 31.4;
unsigned long int var_1_118 = 128;
unsigned char var_1_119 = 8;
unsigned short int var_1_120 = 1;
unsigned long int var_1_121 = 4;
unsigned char var_1_122 = 1;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 0.6;
signed long int last_1_var_1_27 = 16;
unsigned char last_1_var_1_29 = 10;
unsigned long int last_1_var_1_38 = 128;
unsigned long int last_1_var_1_52 = 10;
unsigned char last_1_var_1_57 = 8;
unsigned char last_1_var_1_60 = 0;
unsigned char last_1_var_1_67 = 1;
double last_1_var_1_93 = 10.5;
unsigned short int last_1_var_1_96 = 16;
unsigned long int last_1_var_1_103 = 100;
unsigned char last_1_var_1_110 = 0;
unsigned char last_1_var_1_111 = 0;
unsigned long int last_1_var_1_112 = 50;
unsigned char last_1_var_1_119 = 8;
unsigned short int last_1_var_1_120 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req54Batch167Amount500
	if (last_1_var_1_60) {
		var_1_111 = var_1_68;
	}


	// From: Req26Batch167Amount500
	if (var_1_111) {
		if (var_1_30 >= var_1_35) {
			var_1_62 = (abs (max (var_1_17 , (var_1_7 - var_1_47))));
		}
	}


	// From: Req35Batch167Amount500
	signed long int stepLocal_19 = (last_1_var_1_27 ^ var_1_58) * var_1_13;
	if (((max (var_1_14 , last_1_var_1_112)) >> var_1_49) < stepLocal_19) {
		if (last_1_var_1_110) {
			var_1_77 = last_1_var_1_112;
		} else {
			var_1_77 = ((64 + var_1_31) + (max (0 , var_1_22)));
		}
	} else {
		if (var_1_37 >= 64.5) {
			var_1_77 = (min ((var_1_31 + var_1_30) , var_1_49));
		} else {
			var_1_77 = ((var_1_78 - 5) - var_1_32);
		}
	}


	// From: Req16Batch167Amount500
	unsigned long int stepLocal_10 = var_1_39 / var_1_40;
	if ((var_1_34 & last_1_var_1_38) < stepLocal_10) {
		if (last_1_var_1_111) {
			var_1_44 = var_1_45;
		}
	}


	// From: Req12Batch167Amount500
	if (var_1_11 >= 2.5) {
		if (var_1_44) {
			var_1_38 = (var_1_39 - (var_1_40 - (min (4u , var_1_32))));
		}
	} else {
		var_1_38 = var_1_34;
	}


	// From: Req62Batch167Amount500
	if (var_1_44) {
		var_1_119 = 1;
	} else {
		var_1_119 = var_1_32;
	}


	// From: Req31Batch167Amount500
	if ((4.75f - var_1_47) == (last_1_var_1_1 * 2.25f)) {
		var_1_69 = (last_1_var_1_119 + (var_1_40 - last_1_var_1_120));
	}


	// From: Req30Batch167Amount500
	if (-25 >= (var_1_69 / var_1_55)) {
		var_1_67 = (var_1_45 && ((! var_1_68) && var_1_61));
	}


	// From: Req27Batch167Amount500
	if (last_1_var_1_52 == last_1_var_1_112) {
		var_1_63 = (var_1_39 - var_1_28);
	} else {
		if (var_1_58 <= last_1_var_1_29) {
			if (last_1_var_1_103 == var_1_40) {
				var_1_63 = (max ((var_1_39 - var_1_30) , last_1_var_1_38));
			}
		} else {
			var_1_63 = (max (((last_1_var_1_57 + last_1_var_1_38) + var_1_30) , var_1_32));
		}
	}


	// From: Req23Batch167Amount500
	unsigned long int stepLocal_13 = var_1_63;
	if ((var_1_38 % var_1_31) < stepLocal_13) {
		var_1_57 = (max (16 , (var_1_58 - var_1_32)));
	} else {
		var_1_57 = (var_1_58 - var_1_35);
	}


	// From: Req45Batch167Amount500
	if (last_1_var_1_111) {
		var_1_97 = (last_1_var_1_67 || (var_1_61 || var_1_45));
	} else {
		var_1_97 = ((last_1_var_1_93 > (var_1_88 / var_1_83)) || var_1_61);
	}


	// From: Req2Batch167Amount500
	unsigned char stepLocal_3 = var_1_7 > (- var_1_11);
	if (var_1_67 || stepLocal_3) {
		var_1_12 = (4 - (var_1_13 + var_1_14));
	}


	// From: Req10Batch167Amount500
	signed long int stepLocal_7 = var_1_30 * var_1_25;
	if (var_1_17 <= var_1_6) {
		if (128u < stepLocal_7) {
			var_1_33 = ((var_1_25 + var_1_34) - var_1_35);
		} else {
			var_1_33 = (min (var_1_24 , var_1_26));
		}
	}


	// From: Req11Batch167Amount500
	var_1_36 = (var_1_16 + (max (var_1_17 , (max (127.6 , var_1_37)))));


	// From: Req13Batch167Amount500
	if (1.75 > var_1_62) {
		var_1_41 = var_1_25;
	}


	// From: Req22Batch167Amount500
	unsigned long int stepLocal_12 = var_1_28 + (var_1_39 - var_1_25);
	if (var_1_40 < stepLocal_12) {
		var_1_56 = (min (var_1_8 , var_1_17));
	}


	// From: Req24Batch167Amount500
	signed long int stepLocal_14 = var_1_13 / var_1_32;
	if ((var_1_58 - 5) <= stepLocal_14) {
		var_1_59 = (var_1_58 - var_1_25);
	}


	// From: Req28Batch167Amount500
	unsigned long int stepLocal_15 = var_1_38;
	if ((- var_1_31) < stepLocal_15) {
		var_1_64 = var_1_24;
	}


	// From: Req29Batch167Amount500
	var_1_65 = ((min ((var_1_66 - var_1_49) , (var_1_30 + var_1_32))) - var_1_22);


	// From: Req32Batch167Amount500
	if (var_1_61) {
		var_1_70 = (var_1_58 - var_1_22);
	} else {
		var_1_70 = var_1_34;
	}


	// From: Req34Batch167Amount500
	signed long int stepLocal_18 = (var_1_25 + var_1_13) - var_1_73;
	if ((- (var_1_74 * var_1_34)) <= stepLocal_18) {
		var_1_76 = 1;
	}


	// From: Req36Batch167Amount500
	var_1_79 = (! var_1_45);


	// From: Req41Batch167Amount500
	if ((- var_1_11) <= (var_1_7 / var_1_47)) {
		var_1_92 = (max (128 , (max (var_1_38 , var_1_59))));
	} else {
		var_1_92 = var_1_65;
	}


	// From: Req42Batch167Amount500
	var_1_93 = ((max (var_1_6 , var_1_87)) - (var_1_89 + var_1_90));


	// From: Req44Batch167Amount500
	unsigned long int stepLocal_26 = (var_1_13 / var_1_74) * var_1_69;
	if (stepLocal_26 >= last_1_var_1_96) {
		var_1_96 = (var_1_78 - (min (var_1_34 , var_1_73)));
	}


	// From: Req49Batch167Amount500
	var_1_106 = var_1_25;


	// From: Req50Batch167Amount500
	if (var_1_76) {
		var_1_107 = var_1_66;
	}


	// From: Req51Batch167Amount500
	if (var_1_76) {
		var_1_108 = var_1_99;
	}


	// From: Req53Batch167Amount500
	var_1_110 = var_1_68;


	// From: Req55Batch167Amount500
	var_1_112 = var_1_66;


	// From: Req56Batch167Amount500
	if (var_1_76) {
		var_1_113 = var_1_26;
	} else {
		var_1_113 = -32;
	}


	// From: Req58Batch167Amount500
	var_1_115 = var_1_87;


	// From: Req60Batch167Amount500
	var_1_117 = var_1_17;


	// From: Req61Batch167Amount500
	if (var_1_61) {
		var_1_118 = 256u;
	}


	// From: Req64Batch167Amount500
	var_1_121 = var_1_13;


	// From: Req65Batch167Amount500
	var_1_122 = 0;


	// From: Req47Batch167Amount500
	signed long int stepLocal_27 = (var_1_119 >> 1u) * 100;
	if (var_1_78 <= stepLocal_27) {
		var_1_100 = (var_1_37 + ((var_1_101 + var_1_102) - var_1_89));
	}


	// From: Req46Batch167Amount500
	if (var_1_67) {
		if (var_1_61) {
			if (var_1_97) {
				var_1_98 = (var_1_78 - var_1_22);
			} else {
				var_1_98 = var_1_25;
			}
		} else {
			var_1_98 = ((var_1_73 + var_1_99) - 1);
		}
	}


	// From: Req52Batch167Amount500
	if (var_1_76) {
		var_1_109 = var_1_14;
	} else {
		var_1_109 = var_1_69;
	}


	// From: Req4Batch167Amount500
	if (var_1_76) {
		var_1_18 = (min (1 , var_1_13));
	} else {
		if (var_1_110) {
			var_1_18 = (61033 - (max (var_1_14 , var_1_13)));
		}
	}


	// From: Req9Batch167Amount500
	if (! var_1_122) {
		var_1_29 = (((min (var_1_30 , var_1_31)) + var_1_32) - var_1_25);
	} else {
		var_1_29 = (max (var_1_31 , var_1_32));
	}


	// From: Req14Batch167Amount500
	unsigned char stepLocal_8 = var_1_122;
	if (stepLocal_8 || var_1_110) {
		var_1_42 = var_1_35;
	} else {
		var_1_42 = (var_1_35 + var_1_32);
	}


	// From: Req17Batch167Amount500
	if (var_1_76) {
		var_1_46 = ((var_1_47 - 63.6f) - var_1_6);
	}


	// From: Req20Batch167Amount500
	if (! var_1_79) {
		var_1_52 = (var_1_31 + (var_1_34 + var_1_13));
	}


	// From: Req33Batch167Amount500
	signed long int stepLocal_17 = (var_1_72 + var_1_73) - var_1_49;
	signed long int stepLocal_16 = (var_1_74 - var_1_22) & var_1_96;
	if (stepLocal_17 <= (abs (var_1_92))) {
		if (var_1_32 <= stepLocal_16) {
			var_1_71 = (var_1_16 + var_1_75);
		}
	}


	// From: Req57Batch167Amount500
	if (var_1_122) {
		var_1_114 = var_1_17;
	} else {
		var_1_114 = 9.999999999975E10;
	}


	// From: Req25Batch167Amount500
	if ((min (var_1_17 , var_1_62)) != var_1_100) {
		var_1_60 = (var_1_45 || var_1_61);
	}


	// From: Req37Batch167Amount500
	if (var_1_37 <= var_1_100) {
		var_1_80 = var_1_77;
	} else {
		var_1_80 = (((min (var_1_25 , var_1_32)) - var_1_109) + (max ((min (var_1_18 , var_1_98)) , (var_1_72 - var_1_113))));
	}


	// From: Req18Batch167Amount500
	unsigned long int stepLocal_11 = var_1_63;
	if (var_1_45) {
		var_1_48 = (var_1_37 + var_1_17);
	} else {
		if (stepLocal_11 >= (var_1_14 ^ (var_1_52 >> var_1_49))) {
			var_1_48 = (abs (var_1_6));
		} else {
			var_1_48 = ((abs (var_1_17)) - var_1_7);
		}
	}


	// From: Req7Batch167Amount500
	if (var_1_11 <= (var_1_71 + var_1_17)) {
		var_1_23 = ((min ((abs (var_1_24)) , (32 - var_1_25))) + var_1_26);
	} else {
		var_1_23 = (min (var_1_24 , var_1_25));
	}


	// From: Req59Batch167Amount500
	if (var_1_111) {
		var_1_116 = var_1_31;
	} else {
		var_1_116 = var_1_80;
	}


	// From: Req6Batch167Amount500
	signed long int stepLocal_5 = var_1_21 - var_1_22;
	if (stepLocal_5 < var_1_116) {
		if (var_1_122) {
			var_1_20 = (min (var_1_11 , var_1_17));
		} else {
			var_1_20 = (min (var_1_7 , (min (var_1_16 , (var_1_11 - var_1_6)))));
		}
	}


	// From: Req63Batch167Amount500
	if (var_1_11 <= var_1_48) {
		var_1_120 = (var_1_99 + var_1_13);
	} else {
		var_1_120 = (var_1_78 - var_1_34);
	}


	// From: Req5Batch167Amount500
	if ((- (- var_1_7)) > (- (1.1 * var_1_6))) {
		if ((var_1_93 != (var_1_11 * var_1_7)) || (var_1_120 <= (var_1_64 & var_1_113))) {
			if (var_1_113 > (~ (-1 - var_1_13))) {
				var_1_19 = (max (var_1_113 , (max (var_1_120 , (var_1_57 + 128)))));
			}
		} else {
			var_1_19 = (min (var_1_14 , var_1_57));
		}
	} else {
		if (! var_1_97) {
			var_1_19 = (abs (abs (var_1_29)));
		}
	}


	// From: Req15Batch167Amount500
	signed long int stepLocal_9 = var_1_19 - 32;
	if (stepLocal_9 != (var_1_42 + var_1_38)) {
		var_1_43 = var_1_30;
	} else {
		var_1_43 = ((max (var_1_40 , var_1_108)) + var_1_13);
	}


	// From: Req8Batch167Amount500
	signed long int stepLocal_6 = 64;
	if (var_1_8 > var_1_20) {
		var_1_27 = var_1_21;
	} else {
		if (var_1_77 > stepLocal_6) {
			var_1_27 = var_1_25;
		} else {
			var_1_27 = ((var_1_28 - var_1_13) - var_1_22);
		}
	}


	// From: Req1Batch167Amount500
	signed long int stepLocal_2 = var_1_19;
	signed long int stepLocal_1 = var_1_19;
	unsigned char stepLocal_0 = var_1_44;
	if (stepLocal_1 != ((min (var_1_116 , var_1_121)) + var_1_121)) {
		if (stepLocal_2 != (var_1_116 * var_1_121)) {
			var_1_1 = (max ((var_1_6 - var_1_7) , var_1_8));
		}
	} else {
		if (stepLocal_0 || var_1_97) {
			var_1_1 = (min (var_1_6 , (var_1_7 - var_1_11)));
		} else {
			if (var_1_97) {
				var_1_1 = (var_1_6 - var_1_7);
			} else {
				var_1_1 = var_1_8;
			}
		}
	}


	// From: Req19Batch167Amount500
	if (var_1_112 >= var_1_27) {
		if (var_1_16 > var_1_114) {
			var_1_50 = 2;
		}
	} else {
		var_1_50 = (abs (var_1_34 - var_1_49));
	}


	// From: Req21Batch167Amount500
	if ((max (var_1_7 , (- var_1_62))) <= (max (var_1_1 , var_1_17))) {
		var_1_54 = (var_1_69 + (var_1_55 - (1000000000u - 32u)));
	}


	// From: Req38Batch167Amount500
	unsigned char stepLocal_22 = (! var_1_76) && var_1_60;
	unsigned char stepLocal_21 = var_1_34 == var_1_43;
	unsigned long int stepLocal_20 = var_1_107;
	if ((var_1_68 && (var_1_46 > var_1_1)) && stepLocal_22) {
		var_1_81 = (var_1_22 + var_1_32);
	} else {
		if (stepLocal_20 <= (var_1_112 & var_1_27)) {
			if (((var_1_6 / var_1_83) / var_1_47) == var_1_93) {
				if (stepLocal_21 || var_1_44) {
					var_1_81 = (abs (var_1_49));
				} else {
					var_1_81 = var_1_22;
				}
			} else {
				var_1_81 = (max (var_1_66 , var_1_35));
			}
		}
	}


	// From: Req39Batch167Amount500
	if (var_1_46 != var_1_62) {
		var_1_84 = (64 - ((min (var_1_34 , var_1_25)) + var_1_49));
	} else {
		if (var_1_112 <= (abs (var_1_54))) {
			var_1_84 = (var_1_49 + (abs (var_1_24)));
		} else {
			var_1_84 = (var_1_35 - var_1_85);
		}
	}


	// From: Req40Batch167Amount500
	signed char stepLocal_24 = var_1_85;
	unsigned char stepLocal_23 = var_1_122;
	if (var_1_108 >= stepLocal_24) {
		var_1_86 = ((var_1_87 - var_1_88) + (var_1_89 - var_1_90));
	} else {
		if ((var_1_1 <= var_1_87) && stepLocal_23) {
			if (var_1_1 <= var_1_36) {
				var_1_86 = (abs (var_1_47));
			} else {
				var_1_86 = (var_1_7 - (var_1_47 - (min (var_1_90 , var_1_88))));
			}
		} else {
			var_1_86 = var_1_90;
		}
	}


	// From: Req43Batch167Amount500
	unsigned long int stepLocal_25 = var_1_43 & (var_1_54 / var_1_30);
	if (var_1_38 != stepLocal_25) {
		var_1_94 = (50 + (var_1_49 + var_1_95));
	} else {
		if (var_1_71 > var_1_1) {
			var_1_94 = (var_1_35 - var_1_34);
		} else {
			var_1_94 = (var_1_85 - (var_1_25 + var_1_34));
		}
	}


	// From: Req3Batch167Amount500
	signed char stepLocal_4 = var_1_50;
	if (stepLocal_4 < (max (var_1_13 , (var_1_29 ^ var_1_14)))) {
		if (var_1_97) {
			var_1_15 = (min ((max (var_1_11 , var_1_6)) , (min (var_1_7 , (var_1_16 + var_1_17)))));
		} else {
			var_1_15 = (var_1_16 + var_1_17);
		}
	} else {
		var_1_15 = var_1_8;
	}


	// From: Req48Batch167Amount500
	if ((var_1_101 - var_1_89) > (var_1_62 / var_1_47)) {
		if (var_1_60) {
			if (0.445f >= var_1_7) {
				if ((var_1_28 + var_1_108) >= var_1_109) {
					var_1_103 = var_1_98;
				} else {
					var_1_103 = (max (((abs (3976666023u)) - (max (var_1_73 , var_1_22))) , var_1_80));
				}
			} else {
				var_1_103 = (abs (var_1_63));
			}
		} else {
			if ((var_1_15 > var_1_93) || (var_1_25 >= var_1_39)) {
				var_1_103 = (min (var_1_74 , (abs (var_1_73))));
			} else {
				var_1_103 = (var_1_31 + (max (var_1_69 , var_1_34)));
			}
		}
	} else {
		if ((- var_1_8) >= (var_1_90 * (min (var_1_102 , var_1_62)))) {
			var_1_103 = var_1_49;
		} else {
			var_1_103 = var_1_118;
		}
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 16383);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -1);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -63);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -63);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= 1073741822);
	assume_abort_if_not(var_1_28 <= 2147483646);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 63);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 63);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 64);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -461168.6018427383000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 2147483647);
	assume_abort_if_not(var_1_39 <= 4294967294);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 1073741823);
	assume_abort_if_not(var_1_40 <= 2147483647);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 4611686.018427383000e+12F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 15);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 1073741823);
	assume_abort_if_not(var_1_55 <= 2147483647);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 127);
	assume_abort_if_not(var_1_58 <= 254);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 1);
	assume_abort_if_not(var_1_61 <= 1);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 190);
	assume_abort_if_not(var_1_66 <= 254);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 0);
	var_1_72 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_72 >= 16383);
	assume_abort_if_not(var_1_72 <= 32768);
	var_1_73 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_73 >= 16384);
	assume_abort_if_not(var_1_73 <= 32767);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 127);
	assume_abort_if_not(var_1_74 <= 255);
	var_1_75 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_75 >= -461168.6018427383000e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427383000e+12F && var_1_75 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_78 >= 49150);
	assume_abort_if_not(var_1_78 <= 65534);
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= -922337.2036854776000e+13F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854776000e+12F && var_1_83 >= 1.0e-20F ));
	assume_abort_if_not(var_1_83 != 0.0F);
	var_1_85 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 126);
	var_1_87 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_87 >= 0.0F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 4611686.018427383000e+12F && var_1_87 >= 1.0e-20F ));
	var_1_88 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_88 >= 0.0F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 4611686.018427383000e+12F && var_1_88 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_89 >= 0.0F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 4611686.018427383000e+12F && var_1_89 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_90 >= 0.0F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 4611686.018427383000e+12F && var_1_90 >= 1.0e-20F ));
	var_1_95 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_95 >= -31);
	assume_abort_if_not(var_1_95 <= 31);
	var_1_99 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_99 >= 16384);
	assume_abort_if_not(var_1_99 <= 32767);
	var_1_101 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_101 >= 0.0F && var_1_101 <= -1.0e-20F) || (var_1_101 <= 2305843.009213691400e+12F && var_1_101 >= 1.0e-20F ));
	var_1_102 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_102 >= 0.0F && var_1_102 <= -1.0e-20F) || (var_1_102 <= 2305843.009213691400e+12F && var_1_102 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_110 = var_1_110;
	last_1_var_1_111 = var_1_111;
	last_1_var_1_112 = var_1_112;
	last_1_var_1_119 = var_1_119;
	last_1_var_1_120 = var_1_120;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_19 != ((min (var_1_116 , var_1_121)) + var_1_121)) ? ((var_1_19 != (var_1_116 * var_1_121)) ? (var_1_1 == ((double) (max ((var_1_6 - var_1_7) , var_1_8)))) : 1) : ((var_1_44 || var_1_97) ? (var_1_1 == ((double) (min (var_1_6 , (var_1_7 - var_1_11))))) : (var_1_97 ? (var_1_1 == ((double) (var_1_6 - var_1_7))) : (var_1_1 == ((double) var_1_8))))) && ((var_1_67 || (var_1_7 > (- var_1_11))) ? (var_1_12 == ((signed short int) (4 - (var_1_13 + var_1_14)))) : 1)) && ((var_1_50 < (max (var_1_13 , (var_1_29 ^ var_1_14)))) ? (var_1_97 ? (var_1_15 == ((float) (min ((max (var_1_11 , var_1_6)) , (min (var_1_7 , (var_1_16 + var_1_17))))))) : (var_1_15 == ((float) (var_1_16 + var_1_17)))) : (var_1_15 == ((float) var_1_8)))) && (var_1_76 ? (var_1_18 == ((unsigned short int) (min (1 , var_1_13)))) : (var_1_110 ? (var_1_18 == ((unsigned short int) (61033 - (max (var_1_14 , var_1_13))))) : 1))) && (((- (- var_1_7)) > (- (1.1 * var_1_6))) ? (((var_1_93 != (var_1_11 * var_1_7)) || (var_1_120 <= (var_1_64 & var_1_113))) ? ((var_1_113 > (~ (-1 - var_1_13))) ? (var_1_19 == ((signed long int) (max (var_1_113 , (max (var_1_120 , (var_1_57 + 128))))))) : 1) : (var_1_19 == ((signed long int) (min (var_1_14 , var_1_57))))) : ((! var_1_97) ? (var_1_19 == ((signed long int) (abs (abs (var_1_29))))) : 1))) && (((var_1_21 - var_1_22) < var_1_116) ? (var_1_122 ? (var_1_20 == ((double) (min (var_1_11 , var_1_17)))) : (var_1_20 == ((double) (min (var_1_7 , (min (var_1_16 , (var_1_11 - var_1_6)))))))) : 1)) && ((var_1_11 <= (var_1_71 + var_1_17)) ? (var_1_23 == ((signed char) ((min ((abs (var_1_24)) , (32 - var_1_25))) + var_1_26))) : (var_1_23 == ((signed char) (min (var_1_24 , var_1_25)))))) && ((var_1_8 > var_1_20) ? (var_1_27 == ((signed long int) var_1_21)) : ((var_1_77 > 64) ? (var_1_27 == ((signed long int) var_1_25)) : (var_1_27 == ((signed long int) ((var_1_28 - var_1_13) - var_1_22)))))) && ((! var_1_122) ? (var_1_29 == ((unsigned char) (((min (var_1_30 , var_1_31)) + var_1_32) - var_1_25))) : (var_1_29 == ((unsigned char) (max (var_1_31 , var_1_32)))))) && ((var_1_17 <= var_1_6) ? ((128u < (var_1_30 * var_1_25)) ? (var_1_33 == ((signed char) ((var_1_25 + var_1_34) - var_1_35))) : (var_1_33 == ((signed char) (min (var_1_24 , var_1_26))))) : 1)) && (var_1_36 == ((double) (var_1_16 + (max (var_1_17 , (max (127.6 , var_1_37)))))))) && ((var_1_11 >= 2.5) ? (var_1_44 ? (var_1_38 == ((unsigned long int) (var_1_39 - (var_1_40 - (min (4u , var_1_32)))))) : 1) : (var_1_38 == ((unsigned long int) var_1_34)))) && ((1.75 > var_1_62) ? (var_1_41 == ((unsigned short int) var_1_25)) : 1)) && ((var_1_122 || var_1_110) ? (var_1_42 == ((unsigned short int) var_1_35)) : (var_1_42 == ((unsigned short int) (var_1_35 + var_1_32))))) && (((var_1_19 - 32) != (var_1_42 + var_1_38)) ? (var_1_43 == ((unsigned long int) var_1_30)) : (var_1_43 == ((unsigned long int) ((max (var_1_40 , var_1_108)) + var_1_13))))) && (((var_1_34 & last_1_var_1_38) < (var_1_39 / var_1_40)) ? (last_1_var_1_111 ? (var_1_44 == ((unsigned char) var_1_45)) : 1) : 1)) && (var_1_76 ? (var_1_46 == ((float) ((var_1_47 - 63.6f) - var_1_6))) : 1)) && (var_1_45 ? (var_1_48 == ((double) (var_1_37 + var_1_17))) : ((var_1_63 >= (var_1_14 ^ (var_1_52 >> var_1_49))) ? (var_1_48 == ((double) (abs (var_1_6)))) : (var_1_48 == ((double) ((abs (var_1_17)) - var_1_7)))))) && ((var_1_112 >= var_1_27) ? ((var_1_16 > var_1_114) ? (var_1_50 == ((signed char) 2)) : 1) : (var_1_50 == ((signed char) (abs (var_1_34 - var_1_49)))))) && ((! var_1_79) ? (var_1_52 == ((unsigned long int) (var_1_31 + (var_1_34 + var_1_13)))) : 1)) && (((max (var_1_7 , (- var_1_62))) <= (max (var_1_1 , var_1_17))) ? (var_1_54 == ((unsigned long int) (var_1_69 + (var_1_55 - (1000000000u - 32u))))) : 1)) && ((var_1_40 < (var_1_28 + (var_1_39 - var_1_25))) ? (var_1_56 == ((float) (min (var_1_8 , var_1_17)))) : 1)) && (((var_1_38 % var_1_31) < var_1_63) ? (var_1_57 == ((unsigned char) (max (16 , (var_1_58 - var_1_32))))) : (var_1_57 == ((unsigned char) (var_1_58 - var_1_35))))) && (((var_1_58 - 5) <= (var_1_13 / var_1_32)) ? (var_1_59 == ((unsigned char) (var_1_58 - var_1_25))) : 1)) && (((min (var_1_17 , var_1_62)) != var_1_100) ? (var_1_60 == ((unsigned char) (var_1_45 || var_1_61))) : 1)) && (var_1_111 ? ((var_1_30 >= var_1_35) ? (var_1_62 == ((double) (abs (max (var_1_17 , (var_1_7 - var_1_47)))))) : 1) : 1)) && ((last_1_var_1_52 == last_1_var_1_112) ? (var_1_63 == ((unsigned long int) (var_1_39 - var_1_28))) : ((var_1_58 <= last_1_var_1_29) ? ((last_1_var_1_103 == var_1_40) ? (var_1_63 == ((unsigned long int) (max ((var_1_39 - var_1_30) , last_1_var_1_38)))) : 1) : (var_1_63 == ((unsigned long int) (max (((last_1_var_1_57 + last_1_var_1_38) + var_1_30) , var_1_32))))))) && (((- var_1_31) < var_1_38) ? (var_1_64 == ((signed short int) var_1_24)) : 1)) && (var_1_65 == ((unsigned char) ((min ((var_1_66 - var_1_49) , (var_1_30 + var_1_32))) - var_1_22)))) && ((-25 >= (var_1_69 / var_1_55)) ? (var_1_67 == ((unsigned char) (var_1_45 && ((! var_1_68) && var_1_61)))) : 1)) && (((4.75f - var_1_47) == (last_1_var_1_1 * 2.25f)) ? (var_1_69 == ((unsigned long int) (last_1_var_1_119 + (var_1_40 - last_1_var_1_120)))) : 1)) && (var_1_61 ? (var_1_70 == ((unsigned char) (var_1_58 - var_1_22))) : (var_1_70 == ((unsigned char) var_1_34)))) && ((((var_1_72 + var_1_73) - var_1_49) <= (abs (var_1_92))) ? ((var_1_32 <= ((var_1_74 - var_1_22) & var_1_96)) ? (var_1_71 == ((double) (var_1_16 + var_1_75))) : 1) : 1)) && (((- (var_1_74 * var_1_34)) <= ((var_1_25 + var_1_13) - var_1_73)) ? (var_1_76 == ((unsigned char) 1)) : 1)) && ((((max (var_1_14 , last_1_var_1_112)) >> var_1_49) < ((last_1_var_1_27 ^ var_1_58) * var_1_13)) ? (last_1_var_1_110 ? (var_1_77 == ((unsigned short int) last_1_var_1_112)) : (var_1_77 == ((unsigned short int) ((64 + var_1_31) + (max (0 , var_1_22)))))) : ((var_1_37 >= 64.5) ? (var_1_77 == ((unsigned short int) (min ((var_1_31 + var_1_30) , var_1_49)))) : (var_1_77 == ((unsigned short int) ((var_1_78 - 5) - var_1_32)))))) && (var_1_79 == ((unsigned char) (! var_1_45)))) && ((var_1_37 <= var_1_100) ? (var_1_80 == ((signed long int) var_1_77)) : (var_1_80 == ((signed long int) (((min (var_1_25 , var_1_32)) - var_1_109) + (max ((min (var_1_18 , var_1_98)) , (var_1_72 - var_1_113)))))))) && (((var_1_68 && (var_1_46 > var_1_1)) && ((! var_1_76) && var_1_60)) ? (var_1_81 == ((unsigned char) (var_1_22 + var_1_32))) : ((var_1_107 <= (var_1_112 & var_1_27)) ? ((((var_1_6 / var_1_83) / var_1_47) == var_1_93) ? (((var_1_34 == var_1_43) || var_1_44) ? (var_1_81 == ((unsigned char) (abs (var_1_49)))) : (var_1_81 == ((unsigned char) var_1_22))) : (var_1_81 == ((unsigned char) (max (var_1_66 , var_1_35))))) : 1))) && ((var_1_46 != var_1_62) ? (var_1_84 == ((signed char) (64 - ((min (var_1_34 , var_1_25)) + var_1_49)))) : ((var_1_112 <= (abs (var_1_54))) ? (var_1_84 == ((signed char) (var_1_49 + (abs (var_1_24))))) : (var_1_84 == ((signed char) (var_1_35 - var_1_85)))))) && ((var_1_108 >= var_1_85) ? (var_1_86 == ((float) ((var_1_87 - var_1_88) + (var_1_89 - var_1_90)))) : (((var_1_1 <= var_1_87) && var_1_122) ? ((var_1_1 <= var_1_36) ? (var_1_86 == ((float) (abs (var_1_47)))) : (var_1_86 == ((float) (var_1_7 - (var_1_47 - (min (var_1_90 , var_1_88))))))) : (var_1_86 == ((float) var_1_90))))) && (((- var_1_11) <= (var_1_7 / var_1_47)) ? (var_1_92 == ((signed short int) (max (128 , (max (var_1_38 , var_1_59)))))) : (var_1_92 == ((signed short int) var_1_65)))) && (var_1_93 == ((double) ((max (var_1_6 , var_1_87)) - (var_1_89 + var_1_90))))) && ((var_1_38 != (var_1_43 & (var_1_54 / var_1_30))) ? (var_1_94 == ((signed char) (50 + (var_1_49 + var_1_95)))) : ((var_1_71 > var_1_1) ? (var_1_94 == ((signed char) (var_1_35 - var_1_34))) : (var_1_94 == ((signed char) (var_1_85 - (var_1_25 + var_1_34))))))) && ((((var_1_13 / var_1_74) * var_1_69) >= last_1_var_1_96) ? (var_1_96 == ((unsigned short int) (var_1_78 - (min (var_1_34 , var_1_73))))) : 1)) && (last_1_var_1_111 ? (var_1_97 == ((unsigned char) (last_1_var_1_67 || (var_1_61 || var_1_45)))) : (var_1_97 == ((unsigned char) ((last_1_var_1_93 > (var_1_88 / var_1_83)) || var_1_61))))) && (var_1_67 ? (var_1_61 ? (var_1_97 ? (var_1_98 == ((unsigned short int) (var_1_78 - var_1_22))) : (var_1_98 == ((unsigned short int) var_1_25))) : (var_1_98 == ((unsigned short int) ((var_1_73 + var_1_99) - 1)))) : 1)) && ((var_1_78 <= ((var_1_119 >> 1u) * 100)) ? (var_1_100 == ((double) (var_1_37 + ((var_1_101 + var_1_102) - var_1_89)))) : 1)) && (((var_1_101 - var_1_89) > (var_1_62 / var_1_47)) ? (var_1_60 ? ((0.445f >= var_1_7) ? (((var_1_28 + var_1_108) >= var_1_109) ? (var_1_103 == ((unsigned long int) var_1_98)) : (var_1_103 == ((unsigned long int) (max (((abs (3976666023u)) - (max (var_1_73 , var_1_22))) , var_1_80))))) : (var_1_103 == ((unsigned long int) (abs (var_1_63))))) : (((var_1_15 > var_1_93) || (var_1_25 >= var_1_39)) ? (var_1_103 == ((unsigned long int) (min (var_1_74 , (abs (var_1_73)))))) : (var_1_103 == ((unsigned long int) (var_1_31 + (max (var_1_69 , var_1_34))))))) : (((- var_1_8) >= (var_1_90 * (min (var_1_102 , var_1_62)))) ? (var_1_103 == ((unsigned long int) var_1_49)) : (var_1_103 == ((unsigned long int) var_1_118))))) && (var_1_106 == ((signed char) var_1_25))) && (var_1_76 ? (var_1_107 == ((unsigned long int) var_1_66)) : 1)) && (var_1_76 ? (var_1_108 == ((unsigned short int) var_1_99)) : 1)) && (var_1_76 ? (var_1_109 == ((signed long int) var_1_14)) : (var_1_109 == ((signed long int) var_1_69)))) && (var_1_110 == ((unsigned char) var_1_68))) && (last_1_var_1_60 ? (var_1_111 == ((unsigned char) var_1_68)) : 1)) && (var_1_112 == ((unsigned long int) var_1_66))) && (var_1_76 ? (var_1_113 == ((signed short int) var_1_26)) : (var_1_113 == ((signed short int) -32)))) && (var_1_122 ? (var_1_114 == ((double) var_1_17)) : (var_1_114 == ((double) 9.999999999975E10)))) && (var_1_115 == ((float) var_1_87))) && (var_1_111 ? (var_1_116 == ((unsigned long int) var_1_31)) : (var_1_116 == ((unsigned long int) var_1_80)))) && (var_1_117 == ((float) var_1_17))) && (var_1_61 ? (var_1_118 == ((unsigned long int) 256u)) : 1)) && (var_1_44 ? (var_1_119 == ((unsigned char) 1)) : (var_1_119 == ((unsigned char) var_1_32)))) && ((var_1_11 <= var_1_48) ? (var_1_120 == ((unsigned short int) (var_1_99 + var_1_13))) : (var_1_120 == ((unsigned short int) (var_1_78 - var_1_34))))) && (var_1_121 == ((unsigned long int) var_1_13))) && (var_1_122 == ((unsigned char) 0))
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
