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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch113Amount500.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 0;
unsigned short int var_1_3 = 1;
unsigned short int var_1_4 = 4;
unsigned short int var_1_5 = 27042;
unsigned short int var_1_6 = 4;
unsigned short int var_1_7 = 22915;
unsigned short int var_1_8 = 5;
unsigned long int var_1_9 = 0;
signed char var_1_10 = -1;
signed char var_1_11 = 50;
unsigned long int var_1_14 = 1169201967;
signed short int var_1_15 = -2;
unsigned char var_1_16 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned short int var_1_21 = 4;
unsigned char var_1_22 = 64;
unsigned char var_1_23 = 8;
unsigned char var_1_24 = 32;
unsigned char var_1_25 = 1;
unsigned long int var_1_26 = 100;
signed short int var_1_27 = -2;
unsigned char var_1_28 = 128;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
float var_1_31 = 25.5;
float var_1_32 = 9.5;
unsigned long int var_1_33 = 8;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
unsigned short int var_1_38 = 47924;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 32;
unsigned char var_1_44 = 64;
unsigned char var_1_45 = 128;
unsigned char var_1_46 = 200;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 100;
unsigned char var_1_49 = 32;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 5;
unsigned short int var_1_52 = 32;
unsigned short int var_1_53 = 35456;
signed long int var_1_54 = -16;
signed char var_1_55 = -10;
signed char var_1_56 = 1;
double var_1_57 = 9.05;
double var_1_58 = 31.25;
double var_1_59 = 31.4;
double var_1_60 = 4.5;
double var_1_61 = 5.5;
double var_1_62 = 100.8;
double var_1_63 = 0.0;
double var_1_64 = 127.6;
double var_1_65 = 0.0;
double var_1_66 = 10000000000000.21;
double var_1_67 = 7.4;
unsigned short int var_1_68 = 25;
unsigned short int var_1_69 = 52852;
unsigned long int var_1_70 = 256;
unsigned long int var_1_71 = 4156165106;
float var_1_72 = 255.7;
float var_1_73 = 0.0;
signed short int var_1_74 = 128;
unsigned char var_1_75 = 1;
unsigned short int var_1_76 = 256;
unsigned char var_1_77 = 200;
signed long int var_1_78 = -500;
unsigned short int var_1_79 = 4;
unsigned char var_1_80 = 64;
double var_1_81 = 0.25;
unsigned short int var_1_82 = 128;
signed long int var_1_84 = 5;
double var_1_86 = 4.5;
signed char var_1_87 = -50;
unsigned short int var_1_88 = 32;
signed short int var_1_89 = 256;
double var_1_90 = 31.75;
double var_1_91 = 7.5;
double var_1_92 = 1.75;
double var_1_93 = 15.75;
double var_1_94 = 5.8;
signed char var_1_95 = 2;
double var_1_97 = 64.5;
float var_1_98 = 16.45;
unsigned char var_1_99 = 1;
signed long int var_1_100 = 64;
unsigned char var_1_101 = 0;
unsigned char var_1_102 = 0;
unsigned char var_1_103 = 8;
signed short int var_1_104 = -8;
unsigned char var_1_105 = 32;
unsigned char var_1_106 = 10;
unsigned char var_1_107 = 10;
unsigned short int var_1_108 = 1;
double var_1_109 = 128.2;
unsigned char var_1_110 = 16;
float var_1_111 = 32.1;
signed long int var_1_112 = 100;
unsigned long int var_1_113 = 10;
unsigned long int var_1_114 = 2;
unsigned char var_1_115 = 64;
unsigned char var_1_116 = 64;
unsigned char var_1_117 = 64;
signed short int var_1_118 = 4;
unsigned char var_1_119 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 0;
unsigned char last_1_var_1_16 = 0;
unsigned short int last_1_var_1_21 = 4;
unsigned char last_1_var_1_22 = 64;
unsigned char last_1_var_1_25 = 1;
unsigned long int last_1_var_1_26 = 100;
unsigned char last_1_var_1_29 = 1;
unsigned char last_1_var_1_39 = 0;
signed long int last_1_var_1_54 = -16;
double last_1_var_1_57 = 9.05;
unsigned char last_1_var_1_77 = 200;
signed long int last_1_var_1_78 = -500;
double last_1_var_1_81 = 0.25;
unsigned short int last_1_var_1_82 = 128;
signed short int last_1_var_1_89 = 256;
double last_1_var_1_90 = 31.75;
double last_1_var_1_97 = 64.5;
float last_1_var_1_98 = 16.45;
unsigned char last_1_var_1_102 = 0;
unsigned char last_1_var_1_103 = 8;
unsigned char last_1_var_1_107 = 10;
double last_1_var_1_109 = 128.2;
signed short int last_1_var_1_118 = 4;
unsigned char last_1_var_1_119 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req33Batch113Amount500
	unsigned char stepLocal_26 = var_1_5 == (max (var_1_6 , var_1_7));
	signed long int stepLocal_25 = 128 * var_1_48;
	unsigned char stepLocal_24 = last_1_var_1_25;
	if (last_1_var_1_119) {
		if (last_1_var_1_16 || stepLocal_26) {
			if (stepLocal_24 && ((last_1_var_1_1 / var_1_46) < last_1_var_1_107)) {
				if (last_1_var_1_82 == stepLocal_25) {
					var_1_82 = (min (var_1_69 , (var_1_51 + (abs (var_1_49)))));
				} else {
					var_1_82 = (max (var_1_24 , last_1_var_1_89));
				}
			} else {
				var_1_82 = ((abs (var_1_28)) + var_1_7);
			}
		}
	} else {
		var_1_82 = (min ((abs (var_1_3)) , (max (var_1_24 , var_1_23))));
	}


	// From: Req29Batch113Amount500
	if (((max (var_1_66 , var_1_63)) - var_1_58) <= last_1_var_1_109) {
		if (last_1_var_1_97 >= (- (var_1_58 - 24.6f))) {
			var_1_78 = ((var_1_45 + var_1_11) + (abs (var_1_24)));
		} else {
			if (last_1_var_1_90 == var_1_60) {
				var_1_78 = var_1_3;
			} else {
				var_1_78 = (last_1_var_1_26 + last_1_var_1_103);
			}
		}
	} else {
		var_1_78 = (-1 + (min (last_1_var_1_78 , var_1_69)));
	}


	// From: Req4Batch113Amount500
	if ((min ((min (last_1_var_1_98 , last_1_var_1_57)) , last_1_var_1_90)) < (- last_1_var_1_81)) {
		if (var_1_5 < 50) {
			if (last_1_var_1_102) {
				var_1_16 = var_1_19;
			} else {
				var_1_16 = var_1_20;
			}
		} else {
			var_1_16 = 0;
		}
	} else {
		var_1_16 = 0;
	}


	// From: Req39Batch113Amount500
	unsigned char stepLocal_32 = last_1_var_1_119;
	unsigned char stepLocal_31 = var_1_44;
	signed long int stepLocal_30 = min (last_1_var_1_21 , var_1_24);
	if (last_1_var_1_22 < stepLocal_30) {
		if (stepLocal_32 || var_1_42) {
			var_1_90 = var_1_91;
		}
	} else {
		if ((var_1_28 & last_1_var_1_77) != stepLocal_31) {
			var_1_90 = ((var_1_73 - (var_1_64 + var_1_66)) - 256.5);
		} else {
			var_1_90 = (((var_1_92 + var_1_93) + (var_1_66 - var_1_64)) + 4.875);
		}
	}


	// From: Req23Batch113Amount500
	unsigned char stepLocal_17 = var_1_63 < var_1_58;
	signed long int stepLocal_16 = last_1_var_1_103 * var_1_44;
	unsigned char stepLocal_15 = var_1_51;
	if (stepLocal_16 > var_1_69) {
		if (last_1_var_1_29 || stepLocal_17) {
			if (stepLocal_15 <= (1 * (var_1_8 / var_1_45))) {
				var_1_70 = var_1_6;
			} else {
				var_1_70 = (var_1_71 - var_1_4);
			}
		}
	}


	// From: Req28Batch113Amount500
	unsigned short int stepLocal_20 = var_1_4;
	if (var_1_70 < stepLocal_20) {
		var_1_77 = (abs (var_1_24));
	}


	// From: Req59Batch113Amount500
	if (var_1_70 >= var_1_14) {
		if (! var_1_40) {
			var_1_115 = 128;
		}
	} else {
		var_1_115 = ((var_1_44 + (max (var_1_116 , var_1_117))) - var_1_50);
	}


	// From: Req3Batch113Amount500
	var_1_15 = 16;


	// From: Req6Batch113Amount500
	signed long int stepLocal_1 = var_1_6 - var_1_5;
	if (stepLocal_1 >= (var_1_11 * var_1_4)) {
		var_1_22 = (128 - var_1_11);
	} else {
		var_1_22 = (((250 - var_1_23) - var_1_24) - (max (2 , var_1_11)));
	}


	// From: Req7Batch113Amount500
	var_1_25 = (! var_1_19);


	// From: Req16Batch113Amount500
	unsigned short int stepLocal_8 = var_1_7;
	if (var_1_5 != stepLocal_8) {
		if (var_1_40) {
			if (var_1_19) {
				var_1_43 = (((min (var_1_44 , 100)) - var_1_24) + var_1_11);
			} else {
				var_1_43 = ((min (var_1_45 , (var_1_46 - 16))) - (max (var_1_23 , var_1_11)));
			}
		}
	}


	// From: Req18Batch113Amount500
	var_1_52 = (var_1_53 - (var_1_24 + (var_1_50 + var_1_28)));


	// From: Req20Batch113Amount500
	signed long int stepLocal_11 = var_1_78;
	if (stepLocal_11 <= (var_1_49 * (abs (var_1_24)))) {
		var_1_55 = ((var_1_50 + (max (var_1_56 , 2))) + var_1_24);
	} else {
		var_1_55 = (max ((max (var_1_46 , var_1_23)) , var_1_49));
	}


	// From: Req40Batch113Amount500
	if (var_1_20) {
		var_1_94 = (var_1_62 + (max (var_1_92 , 500.5)));
	} else {
		var_1_94 = (min (var_1_65 , (var_1_64 + var_1_93)));
	}


	// From: Req43Batch113Amount500
	var_1_98 = var_1_59;


	// From: Req44Batch113Amount500
	var_1_99 = var_1_19;


	// From: Req45Batch113Amount500
	if (var_1_16) {
		var_1_100 = var_1_56;
	}


	// From: Req47Batch113Amount500
	var_1_102 = var_1_35;


	// From: Req50Batch113Amount500
	var_1_105 = var_1_51;


	// From: Req51Batch113Amount500
	if (var_1_19) {
		var_1_106 = var_1_51;
	}


	// From: Req52Batch113Amount500
	if (var_1_20) {
		var_1_107 = 1;
	}


	// From: Req53Batch113Amount500
	var_1_108 = var_1_51;


	// From: Req54Batch113Amount500
	if (var_1_40) {
		var_1_109 = 16.5;
	} else {
		var_1_109 = var_1_93;
	}


	// From: Req55Batch113Amount500
	var_1_110 = var_1_50;


	// From: Req57Batch113Amount500
	var_1_112 = var_1_52;


	// From: Req58Batch113Amount500
	var_1_113 = var_1_114;


	// From: Req60Batch113Amount500
	var_1_118 = last_1_var_1_118;


	// From: Req61Batch113Amount500
	var_1_119 = var_1_35;


	// From: Req42Batch113Amount500
	if (((var_1_92 + var_1_73) * var_1_94) >= var_1_58) {
		if (var_1_52 != var_1_82) {
			var_1_97 = var_1_92;
		} else {
			var_1_97 = (min ((var_1_64 + var_1_60) , var_1_66));
		}
	} else {
		var_1_97 = var_1_63;
	}


	// From: Req34Batch113Amount500
	if (var_1_78 > var_1_105) {
		var_1_84 = var_1_115;
	} else {
		var_1_84 = (max (var_1_11 , (max (var_1_108 , var_1_53))));
	}


	// From: Req11Batch113Amount500
	if (var_1_20 && (var_1_4 == var_1_70)) {
		if (var_1_90 <= var_1_98) {
			var_1_31 = (abs (var_1_32));
		}
	} else {
		if (var_1_20) {
			var_1_31 = var_1_32;
		} else {
			var_1_31 = 5.375f;
		}
	}


	// From: Req12Batch113Amount500
	if (! (var_1_119 && (! var_1_20))) {
		var_1_33 = (var_1_24 + (var_1_14 - var_1_7));
	} else {
		var_1_33 = ((var_1_14 - var_1_70) + var_1_24);
	}


	// From: Req1Batch113Amount500
	if (var_1_99) {
		var_1_1 = (max (var_1_3 , var_1_4));
	} else {
		var_1_1 = (((var_1_5 - var_1_6) + var_1_7) - var_1_8);
	}


	// From: Req15Batch113Amount500
	if (last_1_var_1_39) {
		if (var_1_20) {
			var_1_39 = (var_1_30 && var_1_40);
		} else {
			var_1_39 = (! var_1_30);
		}
	} else {
		if (var_1_100 <= var_1_113) {
			var_1_39 = (((var_1_35 || var_1_19) || var_1_41) || (var_1_16 && var_1_42));
		}
	}


	// From: Req17Batch113Amount500
	unsigned long int stepLocal_9 = var_1_33;
	if (var_1_5 > stepLocal_9) {
		var_1_47 = ((max (var_1_24 , var_1_11)) + (max ((abs (var_1_44)) , var_1_23)));
	} else {
		if (! (var_1_44 != var_1_11)) {
			var_1_47 = (var_1_45 - var_1_48);
		} else {
			var_1_47 = ((var_1_24 + (var_1_49 - var_1_50)) + var_1_51);
		}
	}


	// From: Req24Batch113Amount500
	if ((var_1_66 + var_1_60) >= (var_1_62 + var_1_63)) {
		if ((var_1_119 && var_1_30) && (var_1_71 <= (~ var_1_69))) {
			var_1_72 = (((max (var_1_63 , var_1_73)) - 32.25f) - var_1_65);
		} else {
			var_1_72 = (abs (var_1_65 + var_1_61));
		}
	}


	// From: Req31Batch113Amount500
	if (var_1_99) {
		var_1_80 = (max (var_1_45 , var_1_48));
	} else {
		var_1_80 = (min (var_1_49 , (min (32 , var_1_11))));
	}


	// From: Req35Batch113Amount500
	if (var_1_33 > var_1_46) {
		if (var_1_30) {
			if (var_1_16) {
				var_1_86 = (abs (var_1_32));
			}
		}
	}


	// From: Req37Batch113Amount500
	signed long int stepLocal_29 = var_1_100;
	if (stepLocal_29 < (var_1_53 / var_1_46)) {
		if (var_1_102) {
			var_1_88 = (var_1_8 + (var_1_5 - var_1_15));
		}
	} else {
		var_1_88 = (max ((var_1_53 - var_1_70) , (max (var_1_24 , var_1_11))));
	}


	// From: Req56Batch113Amount500
	if (var_1_119) {
		var_1_111 = var_1_66;
	} else {
		var_1_111 = 25.5f;
	}


	// From: Req27Batch113Amount500
	if (((var_1_58 + var_1_72) * var_1_98) >= 1.000000000000004E14) {
		if ((- var_1_62) == (var_1_72 * (var_1_59 + var_1_109))) {
			var_1_76 = (min (var_1_51 , (max (var_1_82 , var_1_5))));
		} else {
			var_1_76 = (((max (var_1_7 , var_1_5)) - (var_1_49 + var_1_43)) + (min (var_1_46 , var_1_50)));
		}
	}


	// From: Req21Batch113Amount500
	unsigned char stepLocal_13 = (var_1_10 / var_1_28) <= var_1_45;
	signed long int stepLocal_12 = var_1_78 + var_1_6;
	if ((var_1_94 < (min (var_1_31 , last_1_var_1_57))) && stepLocal_13) {
		if (var_1_41) {
			var_1_57 = (var_1_58 - var_1_59);
		} else {
			if (var_1_25) {
				var_1_57 = (max ((var_1_60 + (var_1_61 - var_1_62)) , (max ((min (var_1_32 , var_1_59)) , var_1_58))));
			}
		}
	} else {
		if (! var_1_30) {
			var_1_57 = (var_1_59 - ((min (var_1_61 , var_1_64)) + (var_1_65 - var_1_66)));
		} else {
			if (stepLocal_12 < var_1_23) {
				var_1_57 = (max (1.5 , var_1_61));
			} else {
				var_1_57 = (min ((min (var_1_32 , (var_1_67 - var_1_63))) , (abs (var_1_58))));
			}
		}
	}


	// From: Req10Batch113Amount500
	unsigned long int stepLocal_3 = var_1_33;
	if (var_1_113 < stepLocal_3) {
		var_1_29 = (var_1_20 && (var_1_30 && (! var_1_19)));
	}


	// From: Req41Batch113Amount500
	if ((min (var_1_57 , var_1_72)) > var_1_73) {
		var_1_95 = var_1_46;
	}


	// From: Req2Batch113Amount500
	unsigned short int stepLocal_0 = var_1_8;
	if ((var_1_10 - var_1_11) != stepLocal_0) {
		var_1_9 = var_1_76;
	} else {
		if ((25.8f + var_1_31) >= var_1_31) {
			var_1_9 = ((var_1_14 - var_1_5) + (abs (var_1_8)));
		}
	}


	// From: Req22Batch113Amount500
	signed long int stepLocal_14 = var_1_84;
	if (stepLocal_14 < (~ (var_1_113 + var_1_9))) {
		var_1_68 = ((var_1_69 - var_1_45) - var_1_9);
	} else {
		var_1_68 = (min (var_1_53 , ((min (var_1_82 , var_1_24)) + (max (var_1_7 , var_1_11)))));
	}


	// From: Req8Batch113Amount500
	if (var_1_57 >= var_1_90) {
		var_1_26 = var_1_5;
	}


	// From: Req14Batch113Amount500
	signed long int stepLocal_7 = var_1_78;
	unsigned long int stepLocal_6 = - (var_1_14 / 2);
	if (stepLocal_7 > ((var_1_38 - var_1_8) % var_1_7)) {
		if (var_1_70 > stepLocal_6) {
			if (var_1_29) {
				var_1_36 = (var_1_16 || (var_1_30 && (! var_1_35)));
			}
		} else {
			var_1_36 = ((-64 != (var_1_24 + var_1_8)) && var_1_19);
		}
	}


	// From: Req48Batch113Amount500
	if (var_1_36) {
		var_1_103 = var_1_51;
	} else {
		var_1_103 = var_1_49;
	}


	// From: Req32Batch113Amount500
	unsigned long int stepLocal_23 = max (200u , 128u);
	if (var_1_40) {
		if (stepLocal_23 <= var_1_26) {
			var_1_81 = (max (var_1_65 , (var_1_62 + var_1_61)));
		} else {
			var_1_81 = (var_1_62 - (max (127.793 , 63.75)));
		}
	} else {
		var_1_81 = (var_1_64 - (min (var_1_61 , (var_1_66 + var_1_65))));
	}


	// From: Req5Batch113Amount500
	if (var_1_109 == var_1_97) {
		if (var_1_36) {
			var_1_21 = (var_1_7 + 200);
		} else {
			var_1_21 = (53861 - (var_1_7 - var_1_6));
		}
	}


	// From: Req19Batch113Amount500
	signed char stepLocal_10 = var_1_11;
	if (stepLocal_10 > var_1_15) {
		var_1_54 = (var_1_11 + (var_1_51 + var_1_50));
	} else {
		var_1_54 = (min (((var_1_9 + var_1_45) - last_1_var_1_54) , var_1_23));
	}


	// From: Req25Batch113Amount500
	signed long int stepLocal_18 = abs (var_1_53 - var_1_7);
	if (var_1_54 <= stepLocal_18) {
		var_1_74 = (2 - var_1_48);
	}


	// From: Req26Batch113Amount500
	signed long int stepLocal_19 = var_1_24 - var_1_23;
	if (stepLocal_19 > (var_1_26 - (var_1_38 + var_1_78))) {
		var_1_75 = (var_1_46 - (min (var_1_11 , 8)));
	} else {
		var_1_75 = (var_1_45 - var_1_51);
	}


	// From: Req30Batch113Amount500
	unsigned char stepLocal_22 = var_1_75;
	signed long int stepLocal_21 = 4 / var_1_45;
	if (var_1_59 >= var_1_31) {
		if (128 <= stepLocal_22) {
			var_1_79 = (max (var_1_5 , (46946 - (var_1_51 + var_1_45))));
		} else {
			if (stepLocal_21 < var_1_53) {
				var_1_79 = var_1_84;
			}
		}
	}


	// From: Req36Batch113Amount500
	signed long int stepLocal_28 = abs (var_1_21);
	unsigned long int stepLocal_27 = (var_1_33 | var_1_26) % var_1_14;
	if (stepLocal_28 <= var_1_51) {
		if (var_1_19) {
			if (stepLocal_27 == var_1_9) {
				var_1_87 = ((var_1_23 + var_1_50) + var_1_56);
			} else {
				var_1_87 = var_1_46;
			}
		} else {
			var_1_87 = (max (var_1_23 , (var_1_56 + var_1_49)));
		}
	}


	// From: Req46Batch113Amount500
	if (var_1_36) {
		var_1_101 = var_1_23;
	} else {
		var_1_101 = var_1_50;
	}


	// From: Req49Batch113Amount500
	if (var_1_16) {
		var_1_104 = var_1_75;
	} else {
		var_1_104 = var_1_68;
	}


	// From: Req9Batch113Amount500
	signed long int stepLocal_2 = (abs (var_1_5)) * (var_1_28 - var_1_24);
	if (var_1_16) {
		if (var_1_23 <= stepLocal_2) {
			var_1_27 = (var_1_6 - (var_1_23 + var_1_68));
		} else {
			if (var_1_20) {
				var_1_27 = (var_1_23 + var_1_10);
			} else {
				var_1_27 = (var_1_23 + var_1_68);
			}
		}
	} else {
		var_1_27 = var_1_6;
	}


	// From: Req38Batch113Amount500
	if (var_1_9 <= (var_1_5 ^ var_1_46)) {
		var_1_89 = var_1_6;
	} else {
		var_1_89 = (var_1_27 - 128);
	}


	// From: Req13Batch113Amount500
	signed long int stepLocal_5 = abs (var_1_103);
	unsigned short int stepLocal_4 = var_1_6;
	if ((var_1_28 - var_1_24) > stepLocal_4) {
		if (stepLocal_5 <= var_1_79) {
			var_1_34 = (var_1_19 || var_1_35);
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 24575);
	assume_abort_if_not(var_1_5 <= 32767);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 8192);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 16384);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 1073741823);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 32);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 127);
	assume_abort_if_not(var_1_28 <= 255);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 32767);
	assume_abort_if_not(var_1_38 <= 65535);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 63);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 127);
	assume_abort_if_not(var_1_45 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 190);
	assume_abort_if_not(var_1_46 <= 254);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 127);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 31);
	assume_abort_if_not(var_1_49 <= 63);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 31);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 127);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 32767);
	assume_abort_if_not(var_1_53 <= 65534);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= -31);
	assume_abort_if_not(var_1_56 <= 31);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854766000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854766000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= -461168.6018427383000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427383000e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427383000e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= 6917529.027641074000e+12F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854766000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691400e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= 2305843.009213691400e+12F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 4611686.018427383000e+12F && var_1_65 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 2305843.009213691400e+12F && var_1_66 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854766000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_69 >= 49150);
	assume_abort_if_not(var_1_69 <= 65534);
	var_1_71 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_71 >= 2147483647);
	assume_abort_if_not(var_1_71 <= 4294967294);
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 4611686.018427383000e+12F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854766000e+12F && var_1_73 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_91 >= -922337.2036854766000e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 9223372.036854766000e+12F && var_1_91 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_92 >= -115292.1504606845700e+13F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 1152921.504606845700e+12F && var_1_92 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_93 >= -115292.1504606845700e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 1152921.504606845700e+12F && var_1_93 >= 1.0e-20F ));
	var_1_114 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_114 >= 0);
	assume_abort_if_not(var_1_114 <= 4294967294);
	var_1_116 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_116 >= 64);
	assume_abort_if_not(var_1_116 <= 127);
	var_1_117 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_117 >= 64);
	assume_abort_if_not(var_1_117 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_118 = var_1_118;
	last_1_var_1_119 = var_1_119;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_99 ? (var_1_1 == ((unsigned short int) (max (var_1_3 , var_1_4)))) : (var_1_1 == ((unsigned short int) (((var_1_5 - var_1_6) + var_1_7) - var_1_8)))) && (((var_1_10 - var_1_11) != var_1_8) ? (var_1_9 == ((unsigned long int) var_1_76)) : (((25.8f + var_1_31) >= var_1_31) ? (var_1_9 == ((unsigned long int) ((var_1_14 - var_1_5) + (abs (var_1_8))))) : 1))) && (var_1_15 == ((signed short int) 16))) && (((min ((min (last_1_var_1_98 , last_1_var_1_57)) , last_1_var_1_90)) < (- last_1_var_1_81)) ? ((var_1_5 < 50) ? (last_1_var_1_102 ? (var_1_16 == ((unsigned char) var_1_19)) : (var_1_16 == ((unsigned char) var_1_20))) : (var_1_16 == ((unsigned char) 0))) : (var_1_16 == ((unsigned char) 0)))) && ((var_1_109 == var_1_97) ? (var_1_36 ? (var_1_21 == ((unsigned short int) (var_1_7 + 200))) : (var_1_21 == ((unsigned short int) (53861 - (var_1_7 - var_1_6))))) : 1)) && (((var_1_6 - var_1_5) >= (var_1_11 * var_1_4)) ? (var_1_22 == ((unsigned char) (128 - var_1_11))) : (var_1_22 == ((unsigned char) (((250 - var_1_23) - var_1_24) - (max (2 , var_1_11))))))) && (var_1_25 == ((unsigned char) (! var_1_19)))) && ((var_1_57 >= var_1_90) ? (var_1_26 == ((unsigned long int) var_1_5)) : 1)) && (var_1_16 ? ((var_1_23 <= ((abs (var_1_5)) * (var_1_28 - var_1_24))) ? (var_1_27 == ((signed short int) (var_1_6 - (var_1_23 + var_1_68)))) : (var_1_20 ? (var_1_27 == ((signed short int) (var_1_23 + var_1_10))) : (var_1_27 == ((signed short int) (var_1_23 + var_1_68))))) : (var_1_27 == ((signed short int) var_1_6)))) && ((var_1_113 < var_1_33) ? (var_1_29 == ((unsigned char) (var_1_20 && (var_1_30 && (! var_1_19))))) : 1)) && ((var_1_20 && (var_1_4 == var_1_70)) ? ((var_1_90 <= var_1_98) ? (var_1_31 == ((float) (abs (var_1_32)))) : 1) : (var_1_20 ? (var_1_31 == ((float) var_1_32)) : (var_1_31 == ((float) 5.375f))))) && ((! (var_1_119 && (! var_1_20))) ? (var_1_33 == ((unsigned long int) (var_1_24 + (var_1_14 - var_1_7)))) : (var_1_33 == ((unsigned long int) ((var_1_14 - var_1_70) + var_1_24))))) && (((var_1_28 - var_1_24) > var_1_6) ? (((abs (var_1_103)) <= var_1_79) ? (var_1_34 == ((unsigned char) (var_1_19 || var_1_35))) : 1) : 1)) && ((var_1_78 > ((var_1_38 - var_1_8) % var_1_7)) ? ((var_1_70 > (- (var_1_14 / 2))) ? (var_1_29 ? (var_1_36 == ((unsigned char) (var_1_16 || (var_1_30 && (! var_1_35))))) : 1) : (var_1_36 == ((unsigned char) ((-64 != (var_1_24 + var_1_8)) && var_1_19)))) : 1)) && (last_1_var_1_39 ? (var_1_20 ? (var_1_39 == ((unsigned char) (var_1_30 && var_1_40))) : (var_1_39 == ((unsigned char) (! var_1_30)))) : ((var_1_100 <= var_1_113) ? (var_1_39 == ((unsigned char) (((var_1_35 || var_1_19) || var_1_41) || (var_1_16 && var_1_42)))) : 1))) && ((var_1_5 != var_1_7) ? (var_1_40 ? (var_1_19 ? (var_1_43 == ((unsigned char) (((min (var_1_44 , 100)) - var_1_24) + var_1_11))) : (var_1_43 == ((unsigned char) ((min (var_1_45 , (var_1_46 - 16))) - (max (var_1_23 , var_1_11)))))) : 1) : 1)) && ((var_1_5 > var_1_33) ? (var_1_47 == ((unsigned char) ((max (var_1_24 , var_1_11)) + (max ((abs (var_1_44)) , var_1_23))))) : ((! (var_1_44 != var_1_11)) ? (var_1_47 == ((unsigned char) (var_1_45 - var_1_48))) : (var_1_47 == ((unsigned char) ((var_1_24 + (var_1_49 - var_1_50)) + var_1_51)))))) && (var_1_52 == ((unsigned short int) (var_1_53 - (var_1_24 + (var_1_50 + var_1_28)))))) && ((var_1_11 > var_1_15) ? (var_1_54 == ((signed long int) (var_1_11 + (var_1_51 + var_1_50)))) : (var_1_54 == ((signed long int) (min (((var_1_9 + var_1_45) - last_1_var_1_54) , var_1_23)))))) && ((var_1_78 <= (var_1_49 * (abs (var_1_24)))) ? (var_1_55 == ((signed char) ((var_1_50 + (max (var_1_56 , 2))) + var_1_24))) : (var_1_55 == ((signed char) (max ((max (var_1_46 , var_1_23)) , var_1_49)))))) && (((var_1_94 < (min (var_1_31 , last_1_var_1_57))) && ((var_1_10 / var_1_28) <= var_1_45)) ? (var_1_41 ? (var_1_57 == ((double) (var_1_58 - var_1_59))) : (var_1_25 ? (var_1_57 == ((double) (max ((var_1_60 + (var_1_61 - var_1_62)) , (max ((min (var_1_32 , var_1_59)) , var_1_58)))))) : 1)) : ((! var_1_30) ? (var_1_57 == ((double) (var_1_59 - ((min (var_1_61 , var_1_64)) + (var_1_65 - var_1_66))))) : (((var_1_78 + var_1_6) < var_1_23) ? (var_1_57 == ((double) (max (1.5 , var_1_61)))) : (var_1_57 == ((double) (min ((min (var_1_32 , (var_1_67 - var_1_63))) , (abs (var_1_58)))))))))) && ((var_1_84 < (~ (var_1_113 + var_1_9))) ? (var_1_68 == ((unsigned short int) ((var_1_69 - var_1_45) - var_1_9))) : (var_1_68 == ((unsigned short int) (min (var_1_53 , ((min (var_1_82 , var_1_24)) + (max (var_1_7 , var_1_11))))))))) && (((last_1_var_1_103 * var_1_44) > var_1_69) ? ((last_1_var_1_29 || (var_1_63 < var_1_58)) ? ((var_1_51 <= (1 * (var_1_8 / var_1_45))) ? (var_1_70 == ((unsigned long int) var_1_6)) : (var_1_70 == ((unsigned long int) (var_1_71 - var_1_4)))) : 1) : 1)) && (((var_1_66 + var_1_60) >= (var_1_62 + var_1_63)) ? (((var_1_119 && var_1_30) && (var_1_71 <= (~ var_1_69))) ? (var_1_72 == ((float) (((max (var_1_63 , var_1_73)) - 32.25f) - var_1_65))) : (var_1_72 == ((float) (abs (var_1_65 + var_1_61))))) : 1)) && ((var_1_54 <= (abs (var_1_53 - var_1_7))) ? (var_1_74 == ((signed short int) (2 - var_1_48))) : 1)) && (((var_1_24 - var_1_23) > (var_1_26 - (var_1_38 + var_1_78))) ? (var_1_75 == ((unsigned char) (var_1_46 - (min (var_1_11 , 8))))) : (var_1_75 == ((unsigned char) (var_1_45 - var_1_51))))) && ((((var_1_58 + var_1_72) * var_1_98) >= 1.000000000000004E14) ? (((- var_1_62) == (var_1_72 * (var_1_59 + var_1_109))) ? (var_1_76 == ((unsigned short int) (min (var_1_51 , (max (var_1_82 , var_1_5)))))) : (var_1_76 == ((unsigned short int) (((max (var_1_7 , var_1_5)) - (var_1_49 + var_1_43)) + (min (var_1_46 , var_1_50)))))) : 1)) && ((var_1_70 < var_1_4) ? (var_1_77 == ((unsigned char) (abs (var_1_24)))) : 1)) && ((((max (var_1_66 , var_1_63)) - var_1_58) <= last_1_var_1_109) ? ((last_1_var_1_97 >= (- (var_1_58 - 24.6f))) ? (var_1_78 == ((signed long int) ((var_1_45 + var_1_11) + (abs (var_1_24))))) : ((last_1_var_1_90 == var_1_60) ? (var_1_78 == ((signed long int) var_1_3)) : (var_1_78 == ((signed long int) (last_1_var_1_26 + last_1_var_1_103))))) : (var_1_78 == ((signed long int) (-1 + (min (last_1_var_1_78 , var_1_69))))))) && ((var_1_59 >= var_1_31) ? ((128 <= var_1_75) ? (var_1_79 == ((unsigned short int) (max (var_1_5 , (46946 - (var_1_51 + var_1_45)))))) : (((4 / var_1_45) < var_1_53) ? (var_1_79 == ((unsigned short int) var_1_84)) : 1)) : 1)) && (var_1_99 ? (var_1_80 == ((unsigned char) (max (var_1_45 , var_1_48)))) : (var_1_80 == ((unsigned char) (min (var_1_49 , (min (32 , var_1_11)))))))) && (var_1_40 ? (((max (200u , 128u)) <= var_1_26) ? (var_1_81 == ((double) (max (var_1_65 , (var_1_62 + var_1_61))))) : (var_1_81 == ((double) (var_1_62 - (max (127.793 , 63.75)))))) : (var_1_81 == ((double) (var_1_64 - (min (var_1_61 , (var_1_66 + var_1_65)))))))) && (last_1_var_1_119 ? ((last_1_var_1_16 || (var_1_5 == (max (var_1_6 , var_1_7)))) ? ((last_1_var_1_25 && ((last_1_var_1_1 / var_1_46) < last_1_var_1_107)) ? ((last_1_var_1_82 == (128 * var_1_48)) ? (var_1_82 == ((unsigned short int) (min (var_1_69 , (var_1_51 + (abs (var_1_49))))))) : (var_1_82 == ((unsigned short int) (max (var_1_24 , last_1_var_1_89))))) : (var_1_82 == ((unsigned short int) ((abs (var_1_28)) + var_1_7)))) : 1) : (var_1_82 == ((unsigned short int) (min ((abs (var_1_3)) , (max (var_1_24 , var_1_23)))))))) && ((var_1_78 > var_1_105) ? (var_1_84 == ((signed long int) var_1_115)) : (var_1_84 == ((signed long int) (max (var_1_11 , (max (var_1_108 , var_1_53)))))))) && ((var_1_33 > var_1_46) ? (var_1_30 ? (var_1_16 ? (var_1_86 == ((double) (abs (var_1_32)))) : 1) : 1) : 1)) && (((abs (var_1_21)) <= var_1_51) ? (var_1_19 ? ((((var_1_33 | var_1_26) % var_1_14) == var_1_9) ? (var_1_87 == ((signed char) ((var_1_23 + var_1_50) + var_1_56))) : (var_1_87 == ((signed char) var_1_46))) : (var_1_87 == ((signed char) (max (var_1_23 , (var_1_56 + var_1_49)))))) : 1)) && ((var_1_100 < (var_1_53 / var_1_46)) ? (var_1_102 ? (var_1_88 == ((unsigned short int) (var_1_8 + (var_1_5 - var_1_15)))) : 1) : (var_1_88 == ((unsigned short int) (max ((var_1_53 - var_1_70) , (max (var_1_24 , var_1_11)))))))) && ((var_1_9 <= (var_1_5 ^ var_1_46)) ? (var_1_89 == ((signed short int) var_1_6)) : (var_1_89 == ((signed short int) (var_1_27 - 128))))) && ((last_1_var_1_22 < (min (last_1_var_1_21 , var_1_24))) ? ((last_1_var_1_119 || var_1_42) ? (var_1_90 == ((double) var_1_91)) : 1) : (((var_1_28 & last_1_var_1_77) != var_1_44) ? (var_1_90 == ((double) ((var_1_73 - (var_1_64 + var_1_66)) - 256.5))) : (var_1_90 == ((double) (((var_1_92 + var_1_93) + (var_1_66 - var_1_64)) + 4.875)))))) && (var_1_20 ? (var_1_94 == ((double) (var_1_62 + (max (var_1_92 , 500.5))))) : (var_1_94 == ((double) (min (var_1_65 , (var_1_64 + var_1_93))))))) && (((min (var_1_57 , var_1_72)) > var_1_73) ? (var_1_95 == ((signed char) var_1_46)) : 1)) && ((((var_1_92 + var_1_73) * var_1_94) >= var_1_58) ? ((var_1_52 != var_1_82) ? (var_1_97 == ((double) var_1_92)) : (var_1_97 == ((double) (min ((var_1_64 + var_1_60) , var_1_66))))) : (var_1_97 == ((double) var_1_63)))) && (var_1_98 == ((float) var_1_59))) && (var_1_99 == ((unsigned char) var_1_19))) && (var_1_16 ? (var_1_100 == ((signed long int) var_1_56)) : 1)) && (var_1_36 ? (var_1_101 == ((unsigned char) var_1_23)) : (var_1_101 == ((unsigned char) var_1_50)))) && (var_1_102 == ((unsigned char) var_1_35))) && (var_1_36 ? (var_1_103 == ((unsigned char) var_1_51)) : (var_1_103 == ((unsigned char) var_1_49)))) && (var_1_16 ? (var_1_104 == ((signed short int) var_1_75)) : (var_1_104 == ((signed short int) var_1_68)))) && (var_1_105 == ((unsigned char) var_1_51))) && (var_1_19 ? (var_1_106 == ((unsigned char) var_1_51)) : 1)) && (var_1_20 ? (var_1_107 == ((unsigned char) 1)) : 1)) && (var_1_108 == ((unsigned short int) var_1_51))) && (var_1_40 ? (var_1_109 == ((double) 16.5)) : (var_1_109 == ((double) var_1_93)))) && (var_1_110 == ((unsigned char) var_1_50))) && (var_1_119 ? (var_1_111 == ((float) var_1_66)) : (var_1_111 == ((float) 25.5f)))) && (var_1_112 == ((signed long int) var_1_52))) && (var_1_113 == ((unsigned long int) var_1_114))) && ((var_1_70 >= var_1_14) ? ((! var_1_40) ? (var_1_115 == ((unsigned char) 128)) : 1) : (var_1_115 == ((unsigned char) ((var_1_44 + (max (var_1_116 , var_1_117))) - var_1_50))))) && (var_1_118 == ((signed short int) last_1_var_1_118))) && (var_1_119 == ((unsigned char) var_1_35))
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
