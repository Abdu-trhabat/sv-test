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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch50Amount500.c", 13, "reach_error"); }
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
double var_1_1 = 9.5;
double var_1_4 = 16.5;
unsigned short int var_1_5 = 5;
unsigned short int var_1_8 = 10000;
unsigned short int var_1_9 = 25268;
unsigned short int var_1_10 = 10;
unsigned short int var_1_11 = 52309;
signed long int var_1_12 = -2;
signed long int var_1_13 = 64;
double var_1_14 = 9.25;
unsigned long int var_1_15 = 10;
unsigned long int var_1_16 = 1;
unsigned char var_1_17 = 5;
unsigned long int var_1_18 = 100;
unsigned long int var_1_20 = 4015996534;
float var_1_22 = 128.575;
float var_1_23 = 64.4;
float var_1_24 = 1.5;
float var_1_25 = 4.4;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 128;
unsigned char var_1_28 = 2;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 32;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 2;
signed long int var_1_35 = 16;
unsigned long int var_1_37 = 32;
unsigned short int var_1_38 = 64;
unsigned short int var_1_39 = 8;
float var_1_40 = 9.8;
float var_1_41 = 999.25;
float var_1_42 = 63.4;
signed long int var_1_43 = -10;
float var_1_44 = 7.3;
float var_1_45 = 24.5;
float var_1_46 = 128.6;
float var_1_47 = 4.3;
float var_1_48 = 63.5;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
double var_1_53 = 2.7800000000000002;
unsigned char var_1_54 = 8;
unsigned char var_1_55 = 128;
unsigned char var_1_56 = 200;
unsigned long int var_1_57 = 8;
double var_1_58 = 64.5;
unsigned long int var_1_59 = 0;
unsigned char var_1_60 = 100;
signed short int var_1_61 = -256;
unsigned long int var_1_62 = 128;
unsigned long int var_1_63 = 2138470819;
unsigned long int var_1_64 = 1819172702;
unsigned long int var_1_65 = 1843661759;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 10;
unsigned char var_1_68 = 1;
unsigned char var_1_69 = 1;
signed char var_1_70 = 64;
unsigned long int var_1_72 = 500;
unsigned long int var_1_74 = 3189423104;
signed long int var_1_75 = -128;
signed char var_1_76 = 2;
signed char var_1_77 = -64;
unsigned char var_1_78 = 0;
unsigned char var_1_79 = 0;
unsigned char var_1_80 = 0;
signed short int var_1_81 = -16;
float var_1_82 = 16.5;
float var_1_83 = 0.0;
float var_1_84 = 0.0;
float var_1_85 = 25.4;
signed long int var_1_86 = -2;
float var_1_87 = 1.25;
float var_1_88 = 1000000000000.4;
signed long int var_1_89 = -5;
signed long int var_1_90 = -64;
signed long int var_1_91 = -2;
float var_1_92 = 1.6;
float var_1_93 = 199.4;
float var_1_94 = 49.1;
float var_1_95 = 0.0;
signed char var_1_96 = 5;
signed char var_1_97 = 5;
signed char var_1_98 = -8;
double var_1_99 = 128.5;
unsigned char var_1_100 = 0;
unsigned short int var_1_101 = 16;
double var_1_102 = 0.4;
float var_1_103 = 64.25;
signed long int var_1_104 = -256;
signed long int var_1_105 = 0;
signed long int var_1_106 = 10;
unsigned char var_1_107 = 1;
unsigned char var_1_108 = 0;
unsigned char var_1_109 = 1;
unsigned char var_1_110 = 8;
signed short int var_1_111 = -2;
double var_1_112 = 31.75;
unsigned char var_1_113 = 0;
signed char var_1_114 = -50;
unsigned short int var_1_115 = 8;
unsigned short int var_1_116 = 256;
signed char var_1_117 = -64;
signed short int var_1_118 = -5;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 9.5;
unsigned short int last_1_var_1_5 = 5;
signed long int last_1_var_1_13 = 64;
unsigned long int last_1_var_1_18 = 100;
float last_1_var_1_22 = 128.575;
signed long int last_1_var_1_35 = 16;
unsigned long int last_1_var_1_37 = 32;
unsigned short int last_1_var_1_38 = 64;
unsigned long int last_1_var_1_59 = 0;
unsigned char last_1_var_1_66 = 0;
unsigned long int last_1_var_1_72 = 500;
unsigned char last_1_var_1_80 = 0;
signed short int last_1_var_1_81 = -16;
float last_1_var_1_82 = 16.5;
signed long int last_1_var_1_86 = -2;
signed long int last_1_var_1_89 = -5;
signed long int last_1_var_1_90 = -64;
float last_1_var_1_93 = 199.4;
double last_1_var_1_99 = 128.5;
signed long int last_1_var_1_104 = -256;
unsigned char last_1_var_1_107 = 1;
unsigned char last_1_var_1_108 = 0;
unsigned char last_1_var_1_109 = 1;
unsigned char last_1_var_1_113 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req39Batch50Amount500
	unsigned long int stepLocal_22 = var_1_20 + var_1_55;
	signed long int stepLocal_21 = - last_1_var_1_13;
	if (var_1_69) {
		var_1_86 = (max ((var_1_67 + var_1_11) , last_1_var_1_59));
	} else {
		if (stepLocal_21 >= (var_1_28 + (max (last_1_var_1_18 , last_1_var_1_37)))) {
			if (last_1_var_1_59 <= stepLocal_22) {
				var_1_86 = (abs (var_1_10 - last_1_var_1_86));
			}
		}
	}


	// From: Req25Batch50Amount500
	unsigned long int stepLocal_13 = var_1_16;
	if (stepLocal_13 != 64u) {
		var_1_59 = (max (var_1_86 , var_1_9));
	}


	// From: Req29Batch50Amount500
	if (var_1_33 > var_1_65) {
		if (last_1_var_1_90 >= last_1_var_1_72) {
			if ((last_1_var_1_89 % var_1_27) >= ((var_1_64 - last_1_var_1_5) >> (min (var_1_67 , 16)))) {
				var_1_66 = (! var_1_68);
			} else {
				var_1_66 = (var_1_51 || var_1_52);
			}
		} else {
			if (var_1_56 <= (var_1_63 / var_1_33)) {
				var_1_66 = (var_1_51 || (var_1_50 || var_1_52));
			} else {
				var_1_66 = (! var_1_50);
			}
		}
	} else {
		if (((10u / var_1_64) == last_1_var_1_18) || last_1_var_1_113) {
			var_1_66 = (var_1_68 && var_1_69);
		}
	}


	// From: Req9Batch50Amount500
	unsigned short int stepLocal_1 = var_1_8;
	if (var_1_66) {
		var_1_26 = (var_1_27 - (var_1_28 + (max (var_1_29 , var_1_30))));
	} else {
		if (stepLocal_1 < (var_1_86 / var_1_27)) {
			var_1_26 = var_1_27;
		} else {
			var_1_26 = (min (var_1_30 , var_1_29));
		}
	}


	// From: Req36Batch50Amount500
	unsigned char stepLocal_20 = var_1_27 == (last_1_var_1_35 * last_1_var_1_37);
	unsigned char stepLocal_19 = var_1_29;
	if (last_1_var_1_80) {
		if (var_1_9 <= stepLocal_19) {
			if (last_1_var_1_66) {
				if ((max (var_1_4 , last_1_var_1_22)) >= var_1_46) {
					var_1_80 = (last_1_var_1_107 || (last_1_var_1_108 || (! var_1_52)));
				}
			} else {
				if (stepLocal_20 && last_1_var_1_108) {
					var_1_80 = (last_1_var_1_66 && var_1_52);
				} else {
					var_1_80 = var_1_50;
				}
			}
		} else {
			if ((last_1_var_1_1 / var_1_14) == (max ((10000.2 + last_1_var_1_82) , last_1_var_1_99))) {
				var_1_80 = (! ((last_1_var_1_1 != var_1_14) || (last_1_var_1_108 || var_1_69)));
			}
		}
	}


	// From: Req56Batch50Amount500
	if (var_1_80) {
		var_1_109 = var_1_51;
	}


	// From: Req7Batch50Amount500
	if (last_1_var_1_108 || last_1_var_1_109) {
		var_1_18 = (last_1_var_1_104 + var_1_10);
	} else {
		if ((last_1_var_1_59 / (var_1_20 - var_1_8)) < (last_1_var_1_72 / var_1_9)) {
			var_1_18 = (64u + var_1_10);
		} else {
			var_1_18 = (min (var_1_8 , var_1_16));
		}
	}


	// From: Req3Batch50Amount500
	var_1_12 = (var_1_10 + (var_1_9 + var_1_86));


	// From: Req6Batch50Amount500
	if (-16 <= var_1_16) {
		var_1_17 = 100;
	} else {
		var_1_17 = 8;
	}


	// From: Req8Batch50Amount500
	var_1_22 = (var_1_23 - (var_1_24 + var_1_25));


	// From: Req12Batch50Amount500
	var_1_37 = (min (var_1_30 , var_1_8));


	// From: Req17Batch50Amount500
	unsigned short int stepLocal_9 = var_1_11;
	if (stepLocal_9 >= var_1_39) {
		var_1_44 = (max ((var_1_25 + (var_1_45 + var_1_46)) , var_1_42));
	} else {
		var_1_44 = ((var_1_46 + var_1_45) + var_1_25);
	}


	// From: Req23Batch50Amount500
	var_1_57 = (3972358084u - (var_1_11 + var_1_29));


	// From: Req30Batch50Amount500
	if ((! var_1_69) || (! (var_1_34 <= var_1_33))) {
		var_1_70 = (min (var_1_67 , var_1_30));
	} else {
		var_1_70 = (abs ((min (8 , var_1_30)) + (var_1_34 + var_1_67)));
	}


	// From: Req34Batch50Amount500
	var_1_77 = ((min (var_1_30 , (25 + var_1_29))) - (var_1_34 + var_1_67));


	// From: Req38Batch50Amount500
	if (var_1_34 >= 100) {
		var_1_82 = ((var_1_83 - (var_1_84 - var_1_85)) - var_1_23);
	} else {
		var_1_82 = ((max (var_1_42 , var_1_45)) + var_1_46);
	}


	// From: Req43Batch50Amount500
	var_1_92 = ((var_1_83 - var_1_25) - var_1_24);


	// From: Req46Batch50Amount500
	var_1_99 = var_1_42;


	// From: Req47Batch50Amount500
	var_1_100 = var_1_56;


	// From: Req48Batch50Amount500
	var_1_101 = var_1_8;


	// From: Req49Batch50Amount500
	if (var_1_69) {
		var_1_102 = 64.8;
	}


	// From: Req50Batch50Amount500
	var_1_103 = var_1_85;


	// From: Req54Batch50Amount500
	if (var_1_50) {
		var_1_107 = var_1_51;
	} else {
		var_1_107 = var_1_68;
	}


	// From: Req57Batch50Amount500
	var_1_110 = var_1_55;


	// From: Req59Batch50Amount500
	var_1_112 = var_1_25;


	// From: Req60Batch50Amount500
	if (var_1_107) {
		var_1_113 = var_1_51;
	} else {
		var_1_113 = var_1_69;
	}


	// From: Req62Batch50Amount500
	var_1_115 = 0;


	// From: Req63Batch50Amount500
	var_1_116 = var_1_8;


	// From: Req64Batch50Amount500
	var_1_117 = var_1_29;


	// From: Req65Batch50Amount500
	var_1_118 = var_1_70;


	// From: Req28Batch50Amount500
	if ((var_1_99 * var_1_112) < var_1_46) {
		if (var_1_66) {
			var_1_62 = (((min (var_1_63 , var_1_64)) + (var_1_65 - var_1_26)) - (max (var_1_56 , (abs (var_1_10)))));
		}
	} else {
		var_1_62 = 2u;
	}


	// From: Req53Batch50Amount500
	if (var_1_109) {
		var_1_106 = var_1_28;
	}


	// From: Req2Batch50Amount500
	if ((var_1_4 * var_1_112) == var_1_112) {
		if (var_1_107) {
			var_1_5 = (((10000 + var_1_8) + var_1_9) - var_1_10);
		} else {
			var_1_5 = (var_1_11 - var_1_8);
		}
	} else {
		if (var_1_112 >= (var_1_4 + 7.75)) {
			var_1_5 = var_1_9;
		} else {
			var_1_5 = (var_1_11 - var_1_9);
		}
	}


	// From: Req5Batch50Amount500
	var_1_15 = (var_1_37 + ((var_1_9 + var_1_16) + var_1_11));


	// From: Req14Batch50Amount500
	if ((var_1_20 % var_1_11) != var_1_57) {
		var_1_40 = (127.76f + 64.2f);
	}


	// From: Req15Batch50Amount500
	if ((min (var_1_23 , (var_1_25 - var_1_24))) > var_1_44) {
		var_1_41 = (var_1_42 + var_1_24);
	}


	// From: Req19Batch50Amount500
	unsigned long int stepLocal_10 = var_1_62;
	if (stepLocal_10 < var_1_59) {
		var_1_48 = (var_1_46 + (min (var_1_45 , 2.15f)));
	}


	// From: Req20Batch50Amount500
	var_1_49 = (((var_1_4 < var_1_41) && var_1_50) || (var_1_51 || var_1_52));


	// From: Req22Batch50Amount500
	unsigned char stepLocal_11 = ! (var_1_51 || var_1_66);
	if (stepLocal_11 || var_1_107) {
		var_1_54 = (var_1_27 - (var_1_29 + var_1_34));
	} else {
		if (! var_1_52) {
			var_1_54 = (abs (min ((var_1_27 - var_1_34) , (var_1_55 - var_1_30))));
		} else {
			var_1_54 = ((var_1_56 - (min (var_1_30 , 32))) - var_1_34);
		}
	}


	// From: Req33Batch50Amount500
	unsigned char stepLocal_18 = (- var_1_9) >= (var_1_55 - var_1_100);
	if (stepLocal_18 || var_1_109) {
		var_1_76 = (abs (max (var_1_29 , var_1_56)));
	} else {
		var_1_76 = ((min ((var_1_30 - var_1_34) , var_1_29)) + var_1_67);
	}


	// From: Req41Batch50Amount500
	signed long int stepLocal_23 = (var_1_27 + var_1_101) & var_1_77;
	if (stepLocal_23 <= var_1_64) {
		var_1_89 = (max ((var_1_10 + var_1_5) , var_1_9));
	}


	// From: Req44Batch50Amount500
	unsigned long int stepLocal_26 = (var_1_18 * var_1_28) / var_1_33;
	unsigned long int stepLocal_25 = var_1_74;
	if (stepLocal_26 < (var_1_57 * var_1_63)) {
		if (var_1_57 < stepLocal_25) {
			var_1_93 = (((var_1_85 + var_1_94) + var_1_24) - var_1_23);
		} else {
			if (var_1_99 < last_1_var_1_93) {
				var_1_93 = ((max ((var_1_83 - 128.5f) , (var_1_95 - var_1_85))) - 9.99999999998E10f);
			} else {
				var_1_93 = (abs (var_1_25));
			}
		}
	}


	// From: Req52Batch50Amount500
	if (var_1_109) {
		var_1_105 = var_1_101;
	} else {
		var_1_105 = var_1_106;
	}


	// From: Req55Batch50Amount500
	if (var_1_49) {
		var_1_108 = var_1_79;
	} else {
		var_1_108 = var_1_50;
	}


	// From: Req58Batch50Amount500
	if (var_1_49) {
		var_1_111 = var_1_56;
	} else {
		var_1_111 = var_1_33;
	}


	// From: Req16Batch50Amount500
	signed long int stepLocal_8 = - var_1_33;
	if (var_1_80) {
		if (var_1_15 < stepLocal_8) {
			var_1_43 = var_1_17;
		} else {
			var_1_43 = var_1_34;
		}
	}


	// From: Req42Batch50Amount500
	signed long int stepLocal_24 = 56744 - 16;
	if (var_1_11 < stepLocal_24) {
		var_1_90 = (max (var_1_8 , (max (var_1_18 , (var_1_30 + var_1_91)))));
	} else {
		var_1_90 = (var_1_11 - var_1_43);
	}


	// From: Req11Batch50Amount500
	unsigned long int stepLocal_5 = var_1_62;
	unsigned char stepLocal_4 = (var_1_107 || var_1_113) || var_1_108;
	if (stepLocal_4 || var_1_80) {
		if (stepLocal_5 != ((var_1_8 % 16) * (last_1_var_1_35 | var_1_90))) {
			var_1_35 = (-64 + (min (var_1_10 , last_1_var_1_35)));
		}
	}


	// From: Req35Batch50Amount500
	if (((min (var_1_25 , var_1_23)) / var_1_14) > var_1_4) {
		var_1_78 = (var_1_49 && (var_1_52 || (var_1_51 || var_1_50)));
	} else {
		if (var_1_18 >= var_1_16) {
			var_1_78 = ((! var_1_107) && (var_1_50 || var_1_52));
		} else {
			var_1_78 = (! (var_1_51 && var_1_79));
		}
	}


	// From: Req10Batch50Amount500
	unsigned char stepLocal_3 = var_1_43 > 128;
	unsigned char stepLocal_2 = var_1_107;
	if (stepLocal_2 || var_1_49) {
		if ((min (var_1_25 , var_1_40)) >= var_1_23) {
			if (var_1_49 && stepLocal_3) {
				var_1_31 = ((var_1_33 - (32 - var_1_34)) + var_1_29);
			} else {
				var_1_31 = (var_1_33 + var_1_30);
			}
		} else {
			var_1_31 = var_1_33;
		}
	} else {
		var_1_31 = var_1_28;
	}


	// From: Req13Batch50Amount500
	unsigned short int stepLocal_7 = var_1_11;
	signed long int stepLocal_6 = 2;
	if (var_1_49) {
		if (stepLocal_6 >= var_1_15) {
			if (stepLocal_7 >= (var_1_16 * var_1_27)) {
				var_1_38 = (var_1_11 - (var_1_27 + (last_1_var_1_38 + var_1_39)));
			} else {
				var_1_38 = (min ((abs (var_1_28)) , var_1_11));
			}
		} else {
			var_1_38 = (abs (var_1_28));
		}
	}


	// From: Req21Batch50Amount500
	if (! var_1_108) {
		var_1_53 = (var_1_25 - (abs (var_1_42)));
	} else {
		var_1_53 = (var_1_23 - var_1_24);
	}


	// From: Req24Batch50Amount500
	unsigned char stepLocal_12 = var_1_108;
	if (var_1_51) {
		if (stepLocal_12 && (var_1_57 <= var_1_16)) {
			if (var_1_113) {
				var_1_58 = var_1_4;
			} else {
				var_1_58 = (var_1_23 - (var_1_25 + var_1_24));
			}
		}
	} else {
		var_1_58 = (var_1_25 - var_1_24);
	}


	// From: Req26Batch50Amount500
	if ((var_1_29 >= var_1_33) && ((var_1_90 > var_1_37) || var_1_51)) {
		if (2 < var_1_37) {
			var_1_60 = ((abs (32)) + var_1_28);
		}
	} else {
		var_1_60 = (var_1_55 - (min ((max (var_1_33 , var_1_34)) , var_1_30)));
	}


	// From: Req37Batch50Amount500
	if (! var_1_51) {
		var_1_81 = (var_1_89 + var_1_110);
	} else {
		var_1_81 = (last_1_var_1_81 + (min ((var_1_34 - var_1_39) , last_1_var_1_81)));
	}


	// From: Req40Batch50Amount500
	if (var_1_108) {
		var_1_87 = (min ((var_1_42 + (49.85f - var_1_84)) , var_1_23));
	} else {
		var_1_87 = ((var_1_25 - (min (var_1_24 , var_1_84))) + (max (var_1_46 , (var_1_85 - var_1_88))));
	}


	// From: Req61Batch50Amount500
	if ((min ((max (var_1_24 , var_1_53)) , var_1_41)) != var_1_94) {
		var_1_114 = (abs ((abs (var_1_28)) - var_1_30));
	}


	// From: Req51Batch50Amount500
	if (var_1_78) {
		var_1_104 = var_1_97;
	}


	// From: Req45Batch50Amount500
	signed long int stepLocal_28 = var_1_31 * var_1_104;
	unsigned long int stepLocal_27 = var_1_63;
	if ((max (var_1_40 , var_1_25)) != var_1_4) {
		var_1_96 = ((var_1_67 + var_1_34) + -16);
	} else {
		if ((var_1_27 / var_1_56) < stepLocal_28) {
			var_1_96 = (((var_1_97 + var_1_98) + var_1_34) + var_1_67);
		} else {
			if ((- 128) > stepLocal_27) {
				var_1_96 = var_1_56;
			} else {
				var_1_96 = var_1_97;
			}
		}
	}


	// From: Req4Batch50Amount500
	if ((var_1_99 / (abs (var_1_14))) < var_1_4) {
		var_1_13 = (max ((var_1_104 - var_1_9) , var_1_11));
	} else {
		var_1_13 = (min (var_1_104 , var_1_10));
	}


	// From: Req1Batch50Amount500
	signed long int stepLocal_0 = var_1_12;
	if (var_1_13 > stepLocal_0) {
		var_1_1 = (abs (var_1_4));
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req32Batch50Amount500
	unsigned char stepLocal_17 = var_1_113;
	if (stepLocal_17 && (var_1_62 < var_1_106)) {
		var_1_75 = (max ((var_1_13 + var_1_11) , (min (var_1_16 , var_1_104))));
	}


	// From: Req27Batch50Amount500
	var_1_61 = (max (((min (var_1_75 , var_1_30)) - var_1_29) , var_1_33));


	// From: Req31Batch50Amount500
	unsigned long int stepLocal_16 = var_1_15;
	unsigned short int stepLocal_15 = var_1_8;
	unsigned long int stepLocal_14 = var_1_64;
	if (var_1_80) {
		if (stepLocal_14 != (4u + var_1_65)) {
			if ((var_1_28 * var_1_29) <= stepLocal_15) {
				var_1_72 = var_1_61;
			} else {
				var_1_72 = 25u;
			}
		}
	} else {
		if (var_1_43 > stepLocal_16) {
			var_1_72 = (max (var_1_106 , (min (last_1_var_1_72 , (var_1_56 + var_1_9)))));
		} else {
			var_1_72 = (var_1_74 - (1698120437u - var_1_56));
		}
	}


	// From: Req18Batch50Amount500
	if ((var_1_106 + var_1_11) < var_1_72) {
		if (var_1_9 < var_1_37) {
			var_1_47 = (max (var_1_45 , var_1_42));
		} else {
			var_1_47 = (var_1_23 - var_1_24);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 8192);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 16384);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 32767);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	assume_abort_if_not(var_1_14 != 0.0F);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 536870912);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967295);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 127);
	assume_abort_if_not(var_1_27 <= 254);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 64);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 63);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 31);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 8191);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -230584.3009213691400e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691400e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -230584.3009213691400e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691400e+12F && var_1_46 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 0);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 0);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 190);
	assume_abort_if_not(var_1_56 <= 254);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 1073741823);
	assume_abort_if_not(var_1_63 <= 2147483647);
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 1073741823);
	assume_abort_if_not(var_1_64 <= 2147483647);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 1610612735);
	assume_abort_if_not(var_1_65 <= 2147483647);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 1);
	assume_abort_if_not(var_1_67 <= 31);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 1);
	assume_abort_if_not(var_1_68 <= 1);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 1);
	assume_abort_if_not(var_1_69 <= 1);
	var_1_74 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_74 >= 2147483647);
	assume_abort_if_not(var_1_74 <= 4294967294);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 0);
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= 4611686.018427383000e+12F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854766000e+12F && var_1_83 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= 2305843.009213691400e+12F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427383000e+12F && var_1_84 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 2305843.009213691400e+12F && var_1_85 >= 1.0e-20F ));
	var_1_88 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_88 >= 0.0F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 4611686.018427383000e+12F && var_1_88 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_91 >= -1073741823);
	assume_abort_if_not(var_1_91 <= 1073741823);
	var_1_94 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_94 >= 0.0F && var_1_94 <= -1.0e-20F) || (var_1_94 <= 2305843.009213691400e+12F && var_1_94 >= 1.0e-20F ));
	var_1_95 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_95 >= 4611686.018427383000e+12F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 9223372.036854766000e+12F && var_1_95 >= 1.0e-20F ));
	var_1_97 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_97 >= -15);
	assume_abort_if_not(var_1_97 <= 16);
	var_1_98 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_98 >= -15);
	assume_abort_if_not(var_1_98 <= 16);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_113 = var_1_113;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_13 > var_1_12) ? (var_1_1 == ((double) (abs (var_1_4)))) : (var_1_1 == ((double) var_1_4))) && (((var_1_4 * var_1_112) == var_1_112) ? (var_1_107 ? (var_1_5 == ((unsigned short int) (((10000 + var_1_8) + var_1_9) - var_1_10))) : (var_1_5 == ((unsigned short int) (var_1_11 - var_1_8)))) : ((var_1_112 >= (var_1_4 + 7.75)) ? (var_1_5 == ((unsigned short int) var_1_9)) : (var_1_5 == ((unsigned short int) (var_1_11 - var_1_9)))))) && (var_1_12 == ((signed long int) (var_1_10 + (var_1_9 + var_1_86))))) && (((var_1_99 / (abs (var_1_14))) < var_1_4) ? (var_1_13 == ((signed long int) (max ((var_1_104 - var_1_9) , var_1_11)))) : (var_1_13 == ((signed long int) (min (var_1_104 , var_1_10)))))) && (var_1_15 == ((unsigned long int) (var_1_37 + ((var_1_9 + var_1_16) + var_1_11))))) && ((-16 <= var_1_16) ? (var_1_17 == ((unsigned char) 100)) : (var_1_17 == ((unsigned char) 8)))) && ((last_1_var_1_108 || last_1_var_1_109) ? (var_1_18 == ((unsigned long int) (last_1_var_1_104 + var_1_10))) : (((last_1_var_1_59 / (var_1_20 - var_1_8)) < (last_1_var_1_72 / var_1_9)) ? (var_1_18 == ((unsigned long int) (64u + var_1_10))) : (var_1_18 == ((unsigned long int) (min (var_1_8 , var_1_16))))))) && (var_1_22 == ((float) (var_1_23 - (var_1_24 + var_1_25))))) && (var_1_66 ? (var_1_26 == ((unsigned char) (var_1_27 - (var_1_28 + (max (var_1_29 , var_1_30)))))) : ((var_1_8 < (var_1_86 / var_1_27)) ? (var_1_26 == ((unsigned char) var_1_27)) : (var_1_26 == ((unsigned char) (min (var_1_30 , var_1_29))))))) && ((var_1_107 || var_1_49) ? (((min (var_1_25 , var_1_40)) >= var_1_23) ? ((var_1_49 && (var_1_43 > 128)) ? (var_1_31 == ((unsigned char) ((var_1_33 - (32 - var_1_34)) + var_1_29))) : (var_1_31 == ((unsigned char) (var_1_33 + var_1_30)))) : (var_1_31 == ((unsigned char) var_1_33))) : (var_1_31 == ((unsigned char) var_1_28)))) && ((((var_1_107 || var_1_113) || var_1_108) || var_1_80) ? ((var_1_62 != ((var_1_8 % 16) * (last_1_var_1_35 | var_1_90))) ? (var_1_35 == ((signed long int) (-64 + (min (var_1_10 , last_1_var_1_35))))) : 1) : 1)) && (var_1_37 == ((unsigned long int) (min (var_1_30 , var_1_8))))) && (var_1_49 ? ((2 >= var_1_15) ? ((var_1_11 >= (var_1_16 * var_1_27)) ? (var_1_38 == ((unsigned short int) (var_1_11 - (var_1_27 + (last_1_var_1_38 + var_1_39))))) : (var_1_38 == ((unsigned short int) (min ((abs (var_1_28)) , var_1_11))))) : (var_1_38 == ((unsigned short int) (abs (var_1_28))))) : 1)) && (((var_1_20 % var_1_11) != var_1_57) ? (var_1_40 == ((float) (127.76f + 64.2f))) : 1)) && (((min (var_1_23 , (var_1_25 - var_1_24))) > var_1_44) ? (var_1_41 == ((float) (var_1_42 + var_1_24))) : 1)) && (var_1_80 ? ((var_1_15 < (- var_1_33)) ? (var_1_43 == ((signed long int) var_1_17)) : (var_1_43 == ((signed long int) var_1_34))) : 1)) && ((var_1_11 >= var_1_39) ? (var_1_44 == ((float) (max ((var_1_25 + (var_1_45 + var_1_46)) , var_1_42)))) : (var_1_44 == ((float) ((var_1_46 + var_1_45) + var_1_25))))) && (((var_1_106 + var_1_11) < var_1_72) ? ((var_1_9 < var_1_37) ? (var_1_47 == ((float) (max (var_1_45 , var_1_42)))) : (var_1_47 == ((float) (var_1_23 - var_1_24)))) : 1)) && ((var_1_62 < var_1_59) ? (var_1_48 == ((float) (var_1_46 + (min (var_1_45 , 2.15f))))) : 1)) && (var_1_49 == ((unsigned char) (((var_1_4 < var_1_41) && var_1_50) || (var_1_51 || var_1_52))))) && ((! var_1_108) ? (var_1_53 == ((double) (var_1_25 - (abs (var_1_42))))) : (var_1_53 == ((double) (var_1_23 - var_1_24))))) && (((! (var_1_51 || var_1_66)) || var_1_107) ? (var_1_54 == ((unsigned char) (var_1_27 - (var_1_29 + var_1_34)))) : ((! var_1_52) ? (var_1_54 == ((unsigned char) (abs (min ((var_1_27 - var_1_34) , (var_1_55 - var_1_30)))))) : (var_1_54 == ((unsigned char) ((var_1_56 - (min (var_1_30 , 32))) - var_1_34)))))) && (var_1_57 == ((unsigned long int) (3972358084u - (var_1_11 + var_1_29))))) && (var_1_51 ? ((var_1_108 && (var_1_57 <= var_1_16)) ? (var_1_113 ? (var_1_58 == ((double) var_1_4)) : (var_1_58 == ((double) (var_1_23 - (var_1_25 + var_1_24))))) : 1) : (var_1_58 == ((double) (var_1_25 - var_1_24))))) && ((var_1_16 != 64u) ? (var_1_59 == ((unsigned long int) (max (var_1_86 , var_1_9)))) : 1)) && (((var_1_29 >= var_1_33) && ((var_1_90 > var_1_37) || var_1_51)) ? ((2 < var_1_37) ? (var_1_60 == ((unsigned char) ((abs (32)) + var_1_28))) : 1) : (var_1_60 == ((unsigned char) (var_1_55 - (min ((max (var_1_33 , var_1_34)) , var_1_30))))))) && (var_1_61 == ((signed short int) (max (((min (var_1_75 , var_1_30)) - var_1_29) , var_1_33))))) && (((var_1_99 * var_1_112) < var_1_46) ? (var_1_66 ? (var_1_62 == ((unsigned long int) (((min (var_1_63 , var_1_64)) + (var_1_65 - var_1_26)) - (max (var_1_56 , (abs (var_1_10))))))) : 1) : (var_1_62 == ((unsigned long int) 2u)))) && ((var_1_33 > var_1_65) ? ((last_1_var_1_90 >= last_1_var_1_72) ? (((last_1_var_1_89 % var_1_27) >= ((var_1_64 - last_1_var_1_5) >> (min (var_1_67 , 16)))) ? (var_1_66 == ((unsigned char) (! var_1_68))) : (var_1_66 == ((unsigned char) (var_1_51 || var_1_52)))) : ((var_1_56 <= (var_1_63 / var_1_33)) ? (var_1_66 == ((unsigned char) (var_1_51 || (var_1_50 || var_1_52)))) : (var_1_66 == ((unsigned char) (! var_1_50))))) : ((((10u / var_1_64) == last_1_var_1_18) || last_1_var_1_113) ? (var_1_66 == ((unsigned char) (var_1_68 && var_1_69))) : 1))) && (((! var_1_69) || (! (var_1_34 <= var_1_33))) ? (var_1_70 == ((signed char) (min (var_1_67 , var_1_30)))) : (var_1_70 == ((signed char) (abs ((min (8 , var_1_30)) + (var_1_34 + var_1_67))))))) && (var_1_80 ? ((var_1_64 != (4u + var_1_65)) ? (((var_1_28 * var_1_29) <= var_1_8) ? (var_1_72 == ((unsigned long int) var_1_61)) : (var_1_72 == ((unsigned long int) 25u))) : 1) : ((var_1_43 > var_1_15) ? (var_1_72 == ((unsigned long int) (max (var_1_106 , (min (last_1_var_1_72 , (var_1_56 + var_1_9))))))) : (var_1_72 == ((unsigned long int) (var_1_74 - (1698120437u - var_1_56))))))) && ((var_1_113 && (var_1_62 < var_1_106)) ? (var_1_75 == ((signed long int) (max ((var_1_13 + var_1_11) , (min (var_1_16 , var_1_104)))))) : 1)) && ((((- var_1_9) >= (var_1_55 - var_1_100)) || var_1_109) ? (var_1_76 == ((signed char) (abs (max (var_1_29 , var_1_56))))) : (var_1_76 == ((signed char) ((min ((var_1_30 - var_1_34) , var_1_29)) + var_1_67))))) && (var_1_77 == ((signed char) ((min (var_1_30 , (25 + var_1_29))) - (var_1_34 + var_1_67))))) && ((((min (var_1_25 , var_1_23)) / var_1_14) > var_1_4) ? (var_1_78 == ((unsigned char) (var_1_49 && (var_1_52 || (var_1_51 || var_1_50))))) : ((var_1_18 >= var_1_16) ? (var_1_78 == ((unsigned char) ((! var_1_107) && (var_1_50 || var_1_52)))) : (var_1_78 == ((unsigned char) (! (var_1_51 && var_1_79))))))) && (last_1_var_1_80 ? ((var_1_9 <= var_1_29) ? (last_1_var_1_66 ? (((max (var_1_4 , last_1_var_1_22)) >= var_1_46) ? (var_1_80 == ((unsigned char) (last_1_var_1_107 || (last_1_var_1_108 || (! var_1_52))))) : 1) : (((var_1_27 == (last_1_var_1_35 * last_1_var_1_37)) && last_1_var_1_108) ? (var_1_80 == ((unsigned char) (last_1_var_1_66 && var_1_52))) : (var_1_80 == ((unsigned char) var_1_50)))) : (((last_1_var_1_1 / var_1_14) == (max ((10000.2 + last_1_var_1_82) , last_1_var_1_99))) ? (var_1_80 == ((unsigned char) (! ((last_1_var_1_1 != var_1_14) || (last_1_var_1_108 || var_1_69))))) : 1)) : 1)) && ((! var_1_51) ? (var_1_81 == ((signed short int) (var_1_89 + var_1_110))) : (var_1_81 == ((signed short int) (last_1_var_1_81 + (min ((var_1_34 - var_1_39) , last_1_var_1_81))))))) && ((var_1_34 >= 100) ? (var_1_82 == ((float) ((var_1_83 - (var_1_84 - var_1_85)) - var_1_23))) : (var_1_82 == ((float) ((max (var_1_42 , var_1_45)) + var_1_46))))) && (var_1_69 ? (var_1_86 == ((signed long int) (max ((var_1_67 + var_1_11) , last_1_var_1_59)))) : (((- last_1_var_1_13) >= (var_1_28 + (max (last_1_var_1_18 , last_1_var_1_37)))) ? ((last_1_var_1_59 <= (var_1_20 + var_1_55)) ? (var_1_86 == ((signed long int) (abs (var_1_10 - last_1_var_1_86)))) : 1) : 1))) && (var_1_108 ? (var_1_87 == ((float) (min ((var_1_42 + (49.85f - var_1_84)) , var_1_23)))) : (var_1_87 == ((float) ((var_1_25 - (min (var_1_24 , var_1_84))) + (max (var_1_46 , (var_1_85 - var_1_88)))))))) && ((((var_1_27 + var_1_101) & var_1_77) <= var_1_64) ? (var_1_89 == ((signed long int) (max ((var_1_10 + var_1_5) , var_1_9)))) : 1)) && ((var_1_11 < (56744 - 16)) ? (var_1_90 == ((signed long int) (max (var_1_8 , (max (var_1_18 , (var_1_30 + var_1_91))))))) : (var_1_90 == ((signed long int) (var_1_11 - var_1_43))))) && (var_1_92 == ((float) ((var_1_83 - var_1_25) - var_1_24)))) && ((((var_1_18 * var_1_28) / var_1_33) < (var_1_57 * var_1_63)) ? ((var_1_57 < var_1_74) ? (var_1_93 == ((float) (((var_1_85 + var_1_94) + var_1_24) - var_1_23))) : ((var_1_99 < last_1_var_1_93) ? (var_1_93 == ((float) ((max ((var_1_83 - 128.5f) , (var_1_95 - var_1_85))) - 9.99999999998E10f))) : (var_1_93 == ((float) (abs (var_1_25)))))) : 1)) && (((max (var_1_40 , var_1_25)) != var_1_4) ? (var_1_96 == ((signed char) ((var_1_67 + var_1_34) + -16))) : (((var_1_27 / var_1_56) < (var_1_31 * var_1_104)) ? (var_1_96 == ((signed char) (((var_1_97 + var_1_98) + var_1_34) + var_1_67))) : (((- 128) > var_1_63) ? (var_1_96 == ((signed char) var_1_56)) : (var_1_96 == ((signed char) var_1_97)))))) && (var_1_99 == ((double) var_1_42))) && (var_1_100 == ((unsigned char) var_1_56))) && (var_1_101 == ((unsigned short int) var_1_8))) && (var_1_69 ? (var_1_102 == ((double) 64.8)) : 1)) && (var_1_103 == ((float) var_1_85))) && (var_1_78 ? (var_1_104 == ((signed long int) var_1_97)) : 1)) && (var_1_109 ? (var_1_105 == ((signed long int) var_1_101)) : (var_1_105 == ((signed long int) var_1_106)))) && (var_1_109 ? (var_1_106 == ((signed long int) var_1_28)) : 1)) && (var_1_50 ? (var_1_107 == ((unsigned char) var_1_51)) : (var_1_107 == ((unsigned char) var_1_68)))) && (var_1_49 ? (var_1_108 == ((unsigned char) var_1_79)) : (var_1_108 == ((unsigned char) var_1_50)))) && (var_1_80 ? (var_1_109 == ((unsigned char) var_1_51)) : 1)) && (var_1_110 == ((unsigned char) var_1_55))) && (var_1_49 ? (var_1_111 == ((signed short int) var_1_56)) : (var_1_111 == ((signed short int) var_1_33)))) && (var_1_112 == ((double) var_1_25))) && (var_1_107 ? (var_1_113 == ((unsigned char) var_1_51)) : (var_1_113 == ((unsigned char) var_1_69)))) && (((min ((max (var_1_24 , var_1_53)) , var_1_41)) != var_1_94) ? (var_1_114 == ((signed char) (abs ((abs (var_1_28)) - var_1_30)))) : 1)) && (var_1_115 == ((unsigned short int) 0))) && (var_1_116 == ((unsigned short int) var_1_8))) && (var_1_117 == ((signed char) var_1_29))) && (var_1_118 == ((signed short int) var_1_70))
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
