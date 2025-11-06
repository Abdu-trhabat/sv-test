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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch182Amount500.c", 13, "reach_error"); }
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
signed long int var_1_1 = 500;
signed long int var_1_6 = 1;
signed long int var_1_7 = 10000;
signed char var_1_8 = -16;
signed char var_1_9 = 25;
signed char var_1_10 = 5;
signed char var_1_11 = -2;
signed char var_1_14 = 16;
signed char var_1_15 = -8;
double var_1_16 = 50.6;
double var_1_17 = 1.25;
signed char var_1_18 = -10;
signed char var_1_19 = 64;
float var_1_20 = 9.5;
signed char var_1_21 = 0;
signed char var_1_22 = 64;
signed char var_1_23 = 50;
float var_1_24 = 5.8;
float var_1_25 = 32.2;
float var_1_26 = 64.25;
float var_1_27 = 100.5;
float var_1_28 = 127.75;
signed long int var_1_29 = -256;
unsigned char var_1_30 = 64;
unsigned char var_1_31 = 100;
unsigned char var_1_32 = 8;
unsigned char var_1_33 = 5;
unsigned char var_1_34 = 50;
signed long int var_1_35 = 1000000;
signed long int var_1_36 = 10000000;
signed long int var_1_37 = 1091172265;
double var_1_38 = 0.5;
float var_1_39 = 9.5;
double var_1_40 = 8.4;
double var_1_41 = 0.0;
double var_1_42 = 50.75;
float var_1_43 = 500.44;
float var_1_45 = 9999999999.6;
float var_1_46 = 10.75;
float var_1_47 = 63.25;
float var_1_48 = 9.5;
float var_1_49 = 63.375;
signed short int var_1_50 = 8;
unsigned char var_1_51 = 64;
unsigned char var_1_52 = 128;
double var_1_53 = 0.5;
unsigned char var_1_54 = 4;
signed short int var_1_55 = 10;
signed short int var_1_56 = 1;
float var_1_57 = 64.5;
signed long int var_1_58 = 1;
unsigned long int var_1_59 = 0;
unsigned long int var_1_60 = 4093294185;
signed short int var_1_61 = 500;
float var_1_62 = 0.7;
signed char var_1_63 = -32;
signed char var_1_64 = 32;
signed char var_1_65 = 32;
unsigned char var_1_66 = 1;
unsigned short int var_1_67 = 2;
unsigned char var_1_68 = 1;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 1;
signed long int var_1_72 = 200;
signed long int var_1_73 = 8;
signed long int var_1_75 = 1000000000;
unsigned short int var_1_76 = 5;
unsigned short int var_1_77 = 37370;
signed long int var_1_78 = -8;
unsigned short int var_1_80 = 5;
unsigned short int var_1_81 = 20995;
unsigned short int var_1_82 = 27160;
signed char var_1_83 = 2;
double var_1_84 = 128.3;
signed char var_1_85 = 64;
signed char var_1_86 = 64;
signed char var_1_87 = -10;
signed char var_1_88 = 16;
unsigned char var_1_89 = 64;
signed short int var_1_90 = 8;
unsigned char var_1_91 = 0;
unsigned char var_1_92 = 0;
signed char var_1_93 = 100;
unsigned char var_1_94 = 1;
unsigned char var_1_95 = 0;
unsigned short int var_1_97 = 16;
unsigned short int var_1_98 = 29946;
signed long int var_1_99 = -10;
unsigned long int var_1_100 = 2;
unsigned char var_1_101 = 1;
signed char var_1_102 = -10;
signed char var_1_103 = -2;
float var_1_104 = 4.5;
signed char var_1_105 = 32;
unsigned char var_1_106 = 0;
float var_1_107 = 128.25;
float var_1_108 = 255.5;
unsigned long int var_1_109 = 2;
float var_1_110 = 7.6;
signed long int var_1_111 = -10000000;
unsigned char var_1_112 = 0;
double var_1_113 = 24.7;
signed short int var_1_114 = 4;
unsigned char var_1_115 = 1;
float var_1_116 = 128.5;
unsigned char var_1_117 = 0;
unsigned short int var_1_118 = 0;
unsigned char var_1_119 = 1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 500;
double last_1_var_1_16 = 50.6;
signed long int last_1_var_1_36 = 10000000;
signed long int last_1_var_1_58 = 1;
signed short int last_1_var_1_61 = 500;
signed long int last_1_var_1_73 = 8;
signed long int last_1_var_1_78 = -8;
unsigned short int last_1_var_1_80 = 5;
signed char last_1_var_1_87 = -10;
signed short int last_1_var_1_90 = 8;
unsigned short int last_1_var_1_97 = 16;
signed long int last_1_var_1_99 = -10;
unsigned long int last_1_var_1_100 = 2;
float last_1_var_1_104 = 4.5;
unsigned long int last_1_var_1_109 = 2;
unsigned char last_1_var_1_112 = 0;
unsigned char last_1_var_1_119 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req12Batch182Amount500
	if (last_1_var_1_87 > ((last_1_var_1_61 / var_1_31) * last_1_var_1_58)) {
		if ((var_1_26 > last_1_var_1_16) && (last_1_var_1_100 <= last_1_var_1_109)) {
			var_1_43 = (var_1_28 + var_1_45);
		}
	} else {
		var_1_43 = (var_1_27 + ((9.5f + var_1_46) + (var_1_47 - var_1_48)));
	}


	// From: Req37Batch182Amount500
	signed long int stepLocal_25 = var_1_85 / var_1_75;
	if (((~ var_1_52) | last_1_var_1_100) < stepLocal_25) {
		var_1_95 = var_1_70;
	} else {
		var_1_95 = (last_1_var_1_119 || (! var_1_92));
	}


	// From: Req24Batch182Amount500
	signed long int stepLocal_12 = last_1_var_1_97 + var_1_54;
	signed long int stepLocal_11 = var_1_37 / (min (-10000000 , var_1_54));
	signed long int stepLocal_10 = (abs (var_1_65)) | var_1_32;
	signed long int stepLocal_9 = last_1_var_1_73;
	if (stepLocal_12 < (var_1_65 * var_1_19)) {
		if (stepLocal_11 < (last_1_var_1_100 + var_1_52)) {
			if (var_1_41 < ((max (var_1_48 , 3.9)) - var_1_42)) {
				if ((var_1_23 >> var_1_67) > stepLocal_9) {
					var_1_66 = (! (! var_1_68));
				}
			} else {
				var_1_66 = (last_1_var_1_119 && var_1_69);
			}
		} else {
			if ((last_1_var_1_90 * (last_1_var_1_80 / var_1_64)) > stepLocal_10) {
				var_1_66 = (var_1_68 && (var_1_70 && var_1_71));
			} else {
				var_1_66 = (! (var_1_69 || (! var_1_70)));
			}
		}
	}


	// From: Req40Batch182Amount500
	signed long int stepLocal_26 = ~ (max (var_1_6 , last_1_var_1_1));
	if (var_1_92) {
		if (var_1_71) {
			var_1_100 = var_1_86;
		} else {
			if (last_1_var_1_99 <= stepLocal_26) {
				var_1_100 = (var_1_60 - 1u);
			} else {
				var_1_100 = (min ((var_1_60 - (min (var_1_21 , var_1_54))) , (last_1_var_1_36 + var_1_88)));
			}
		}
	}


	// From: Req29Batch182Amount500
	if (var_1_95) {
		var_1_80 = (((min (var_1_81 , var_1_82)) - (var_1_52 + var_1_32)) + (max ((5 + 2) , var_1_67)));
	}


	// From: Req38Batch182Amount500
	var_1_97 = (((min (var_1_81 , var_1_82)) + var_1_98) - var_1_80);


	// From: Req11Batch182Amount500
	if (var_1_26 >= (max (var_1_28 , (var_1_17 / var_1_39)))) {
		if (var_1_15 >= var_1_100) {
			if (var_1_66) {
				var_1_38 = (min ((var_1_26 + var_1_27) , var_1_17));
			} else {
				var_1_38 = (min (((min (var_1_28 , var_1_27)) + var_1_26) , var_1_24));
			}
		} else {
			var_1_38 = (var_1_27 + var_1_28);
		}
	} else {
		var_1_38 = (min (var_1_24 , (var_1_40 - (var_1_41 - var_1_42))));
	}


	// From: Req2Batch182Amount500
	var_1_8 = ((var_1_9 + var_1_10) + 32);


	// From: Req5Batch182Amount500
	var_1_18 = (var_1_19 - (abs (8)));


	// From: Req7Batch182Amount500
	signed char stepLocal_6 = var_1_22;
	if (((abs (var_1_18)) + var_1_15) <= stepLocal_6) {
		var_1_29 = -1;
	}


	// From: Req20Batch182Amount500
	if (var_1_15 >= -10) {
		var_1_59 = (abs (var_1_21));
	} else {
		var_1_59 = ((var_1_60 - var_1_54) - var_1_31);
	}


	// From: Req22Batch182Amount500
	var_1_62 = var_1_47;


	// From: Req23Batch182Amount500
	if (var_1_66) {
		var_1_63 = (var_1_32 + (max (-16 , var_1_14)));
	} else {
		var_1_63 = ((max ((max (var_1_19 , var_1_32)) , var_1_33)) - ((var_1_64 + var_1_65) - var_1_34));
	}


	// From: Req25Batch182Amount500
	if ((var_1_27 / var_1_41) > var_1_45) {
		var_1_72 = (var_1_64 - var_1_7);
	}


	// From: Req26Batch182Amount500
	if (((2 / var_1_31) + var_1_29) < (~ last_1_var_1_73)) {
		var_1_73 = (((var_1_75 - var_1_64) + (var_1_65 + var_1_33)) - ((abs (-1784336330)) - var_1_34));
	}


	// From: Req41Batch182Amount500
	unsigned long int stepLocal_27 = var_1_59;
	if (var_1_85 > stepLocal_27) {
		var_1_101 = (var_1_70 && (! var_1_68));
	}


	// From: Req43Batch182Amount500
	if (last_1_var_1_104 < (var_1_38 / var_1_41)) {
		var_1_104 = (min ((abs (128.2f + var_1_28)) , var_1_17));
	}


	// From: Req44Batch182Amount500
	unsigned char stepLocal_28 = var_1_69;
	if (stepLocal_28 || var_1_66) {
		var_1_105 = (var_1_65 - var_1_54);
	}


	// From: Req46Batch182Amount500
	if (var_1_68) {
		var_1_107 = var_1_41;
	} else {
		var_1_107 = 99.218f;
	}


	// From: Req48Batch182Amount500
	if (var_1_69) {
		var_1_109 = var_1_54;
	} else {
		var_1_109 = var_1_33;
	}


	// From: Req50Batch182Amount500
	var_1_111 = var_1_34;


	// From: Req51Batch182Amount500
	if (last_1_var_1_112) {
		var_1_112 = var_1_92;
	} else {
		var_1_112 = var_1_71;
	}


	// From: Req52Batch182Amount500
	var_1_113 = var_1_17;


	// From: Req53Batch182Amount500
	var_1_114 = var_1_52;


	// From: Req54Batch182Amount500
	if (var_1_69) {
		var_1_115 = var_1_67;
	}


	// From: Req55Batch182Amount500
	if (var_1_112) {
		var_1_116 = var_1_26;
	}


	// From: Req56Batch182Amount500
	var_1_117 = var_1_34;


	// From: Req58Batch182Amount500
	signed char stepLocal_31 = var_1_19;
	unsigned char stepLocal_30 = var_1_95 && (var_1_10 >= var_1_103);
	if (stepLocal_30 || var_1_92) {
		var_1_119 = var_1_69;
	} else {
		if (((var_1_32 - var_1_100) / var_1_67) <= stepLocal_31) {
			var_1_119 = var_1_68;
		} else {
			var_1_119 = var_1_92;
		}
	}


	// From: Req17Batch182Amount500
	if (! var_1_66) {
		var_1_56 = (min (var_1_15 , var_1_29));
	}


	// From: Req33Batch182Amount500
	var_1_90 = (max ((min (-256 , var_1_56)) , (var_1_34 - (max (var_1_33 , var_1_54)))));


	// From: Req1Batch182Amount500
	if (((max (var_1_59 , var_1_109)) & var_1_59) <= var_1_109) {
		var_1_1 = (var_1_6 - var_1_7);
	} else {
		var_1_1 = (max ((max (var_1_6 , (10 - 128))) , var_1_7));
	}


	// From: Req3Batch182Amount500
	unsigned char stepLocal_0 = var_1_101;
	if (var_1_66 || stepLocal_0) {
		var_1_11 = var_1_9;
	} else {
		var_1_11 = (max (var_1_10 , (var_1_9 + (var_1_14 + var_1_15))));
	}


	// From: Req4Batch182Amount500
	unsigned long int stepLocal_3 = var_1_59;
	signed long int stepLocal_2 = var_1_6;
	signed char stepLocal_1 = var_1_9;
	if ((min (var_1_72 , var_1_7)) >= stepLocal_1) {
		if (var_1_6 > stepLocal_3) {
			if ((var_1_9 ^ var_1_15) < stepLocal_2) {
				var_1_16 = var_1_17;
			}
		} else {
			var_1_16 = var_1_17;
		}
	} else {
		var_1_16 = 50.9;
	}


	// From: Req6Batch182Amount500
	signed long int stepLocal_5 = (var_1_21 - var_1_23) + var_1_6;
	signed char stepLocal_4 = var_1_19;
	if (var_1_112) {
		if (stepLocal_4 < ((64 - var_1_21) / var_1_22)) {
			if (var_1_9 > stepLocal_5) {
				var_1_20 = (min (var_1_17 , (abs (max (var_1_24 , var_1_25)))));
			}
		} else {
			var_1_20 = (var_1_26 + (max (var_1_27 , var_1_28)));
		}
	}


	// From: Req10Batch182Amount500
	unsigned long int stepLocal_7 = max (var_1_7 , (max (200u , var_1_59)));
	if (stepLocal_7 != 5u) {
		var_1_36 = (max (((var_1_37 - var_1_29) - (max (var_1_32 , var_1_34))) , (max (var_1_19 , var_1_10))));
	}


	// From: Req14Batch182Amount500
	if (var_1_101) {
		if (var_1_112) {
			var_1_50 = (var_1_34 - var_1_21);
		}
	}


	// From: Req16Batch182Amount500
	if ((var_1_6 / (var_1_52 - var_1_54)) >= var_1_19) {
		if ((var_1_55 - var_1_59) != var_1_52) {
			var_1_53 = var_1_41;
		} else {
			var_1_53 = (abs (var_1_26));
		}
	}


	// From: Req21Batch182Amount500
	signed short int stepLocal_8 = var_1_55;
	if (stepLocal_8 < var_1_109) {
		var_1_61 = var_1_32;
	} else {
		var_1_61 = (min ((min (var_1_21 , (var_1_23 - 1))) , var_1_19));
	}


	// From: Req28Batch182Amount500
	unsigned char stepLocal_13 = var_1_47 >= var_1_116;
	if (((last_1_var_1_78 ^ var_1_109) < (var_1_55 - var_1_7)) && stepLocal_13) {
		var_1_78 = (var_1_55 - 256);
	} else {
		var_1_78 = var_1_31;
	}


	// From: Req32Batch182Amount500
	if (var_1_112) {
		var_1_89 = (var_1_21 + (min ((var_1_67 + var_1_32) , var_1_88)));
	} else {
		var_1_89 = (max (var_1_65 , (min (var_1_31 , var_1_21))));
	}


	// From: Req36Batch182Amount500
	unsigned char stepLocal_24 = (var_1_31 != var_1_67) || var_1_101;
	if (var_1_112) {
		var_1_94 = (! var_1_71);
	} else {
		if (var_1_101 || stepLocal_24) {
			var_1_94 = (! var_1_69);
		}
	}


	// From: Req45Batch182Amount500
	unsigned long int stepLocal_29 = 1u + 8u;
	if ((var_1_109 % var_1_54) <= stepLocal_29) {
		var_1_106 = var_1_71;
	} else {
		var_1_106 = var_1_92;
	}


	// From: Req47Batch182Amount500
	if (var_1_112) {
		var_1_108 = var_1_42;
	} else {
		var_1_108 = var_1_17;
	}


	// From: Req49Batch182Amount500
	if (var_1_106) {
		var_1_110 = 15.625f;
	} else {
		var_1_110 = var_1_42;
	}


	// From: Req57Batch182Amount500
	var_1_118 = var_1_61;


	// From: Req31Batch182Amount500
	signed char stepLocal_20 = var_1_9;
	unsigned char stepLocal_19 = var_1_69;
	signed long int stepLocal_18 = 1;
	signed long int stepLocal_17 = ~ var_1_54;
	if ((var_1_14 * var_1_31) <= stepLocal_20) {
		if (stepLocal_18 > var_1_75) {
			if (var_1_109 >= stepLocal_17) {
				var_1_87 = (var_1_86 - var_1_65);
			}
		}
	} else {
		if (stepLocal_19 || var_1_66) {
			if (var_1_39 < (max ((var_1_45 + var_1_43) , var_1_16))) {
				var_1_87 = (var_1_33 - var_1_88);
			}
		} else {
			var_1_87 = (min (var_1_88 , var_1_10));
		}
	}


	// From: Req19Batch182Amount500
	if (var_1_37 > var_1_100) {
		if (-128 >= (var_1_19 + var_1_52)) {
			var_1_58 = (var_1_19 - (abs (var_1_7 - var_1_23)));
		} else {
			var_1_58 = (max ((var_1_21 - var_1_31) , var_1_14));
		}
	} else {
		if (var_1_106) {
			var_1_58 = (last_1_var_1_58 - var_1_7);
		} else {
			var_1_58 = (var_1_34 - var_1_52);
		}
	}


	// From: Req27Batch182Amount500
	var_1_76 = (min ((41429 - (var_1_65 + var_1_58)) , (var_1_77 - (min (var_1_54 , var_1_32)))));


	// From: Req8Batch182Amount500
	if (var_1_24 >= 9.6f) {
		var_1_30 = ((var_1_31 - var_1_32) + (var_1_33 + var_1_34));
	} else {
		if ((~ var_1_58) > var_1_76) {
			var_1_30 = (max (var_1_34 , var_1_21));
		} else {
			var_1_30 = (max ((var_1_33 + (min (var_1_23 , var_1_32))) , (min (var_1_31 , (var_1_21 + var_1_34)))));
		}
	}


	// From: Req9Batch182Amount500
	if (var_1_94 || var_1_106) {
		var_1_35 = (min (((var_1_33 + var_1_34) - var_1_23) , var_1_9));
	} else {
		var_1_35 = (max (var_1_19 , (abs (var_1_6))));
	}


	// From: Req13Batch182Amount500
	if (var_1_109 < var_1_59) {
		if (var_1_95 && var_1_106) {
			var_1_49 = (min (((abs (var_1_45)) + (var_1_47 + var_1_46)) , var_1_24));
		} else {
			var_1_49 = (var_1_47 - var_1_48);
		}
	} else {
		var_1_49 = (var_1_26 + var_1_42);
	}


	// From: Req15Batch182Amount500
	if (var_1_27 < var_1_108) {
		var_1_51 = (var_1_52 - var_1_23);
	} else {
		if (var_1_112) {
			var_1_51 = var_1_34;
		} else {
			var_1_51 = var_1_21;
		}
	}


	// From: Req30Batch182Amount500
	unsigned char stepLocal_16 = var_1_58 < -8;
	signed long int stepLocal_15 = -1;
	unsigned char stepLocal_14 = var_1_31;
	if (var_1_72 >= stepLocal_15) {
		if (stepLocal_16 && (var_1_111 > var_1_31)) {
			var_1_83 = ((min ((var_1_67 + var_1_10) , (var_1_14 + -16))) + (var_1_34 - 4));
		} else {
			if ((var_1_53 / var_1_41) > (var_1_42 - (max (var_1_48 , var_1_84)))) {
				var_1_83 = (var_1_34 - var_1_65);
			}
		}
	} else {
		if ((10 / var_1_67) < stepLocal_14) {
			var_1_83 = (min (var_1_19 , -4));
		} else {
			if (var_1_16 == 16.25f) {
				var_1_83 = (var_1_19 - (var_1_85 - var_1_67));
			} else {
				var_1_83 = (var_1_85 - (max (var_1_54 , (var_1_86 - var_1_64))));
			}
		}
	}


	// From: Req35Batch182Amount500
	unsigned char stepLocal_23 = var_1_55 <= (max (var_1_6 , var_1_15));
	if (var_1_71) {
		if (stepLocal_23 || var_1_106) {
			var_1_93 = (max (var_1_85 , (var_1_10 + var_1_34)));
		} else {
			var_1_93 = (var_1_14 + 50);
		}
	} else {
		var_1_93 = (var_1_14 + var_1_32);
	}


	// From: Req34Batch182Amount500
	signed long int stepLocal_22 = var_1_29 >> 10;
	unsigned short int stepLocal_21 = var_1_76;
	if (stepLocal_22 > var_1_82) {
		if (stepLocal_21 >= (min (var_1_64 , var_1_29))) {
			var_1_91 = ((! var_1_69) && (! var_1_92));
		} else {
			var_1_91 = (var_1_70 && var_1_69);
		}
	}


	// From: Req18Batch182Amount500
	if (var_1_91) {
		var_1_57 = (127.125f - var_1_42);
	} else {
		if (! (var_1_107 == (min (var_1_53 , var_1_46)))) {
			var_1_57 = var_1_40;
		} else {
			var_1_57 = (var_1_28 + var_1_27);
		}
	}


	// From: Req42Batch182Amount500
	if (var_1_39 >= var_1_107) {
		if ((max (var_1_57 , var_1_38)) != var_1_27) {
			var_1_102 = (var_1_19 - var_1_54);
		} else {
			if (var_1_26 <= var_1_27) {
				var_1_102 = (var_1_19 - (min ((var_1_86 - var_1_32) , var_1_34)));
			} else {
				var_1_102 = (var_1_67 + (var_1_15 + (var_1_103 + -1)));
			}
		}
	}


	// From: Req39Batch182Amount500
	if (var_1_97 < var_1_102) {
		if (var_1_91) {
			var_1_99 = ((var_1_98 + var_1_34) - var_1_64);
		} else {
			var_1_99 = (var_1_109 + var_1_85);
		}
	} else {
		var_1_99 = (min ((var_1_21 - 100) , var_1_37));
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -31);
	assume_abort_if_not(var_1_9 <= 32);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -31);
	assume_abort_if_not(var_1_10 <= 31);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -31);
	assume_abort_if_not(var_1_14 <= 32);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -31);
	assume_abort_if_not(var_1_15 <= 31);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -128);
	assume_abort_if_not(var_1_22 <= 127);
	assume_abort_if_not(var_1_22 != 0);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 63);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 64);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= 1073741822);
	assume_abort_if_not(var_1_37 <= 2147483646);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	assume_abort_if_not(var_1_39 != 0.0F);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 4611686.018427383000e+12F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -461168.6018427383000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -115292.1504606845700e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 1152921.504606845700e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691400e+12F && var_1_48 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 127);
	assume_abort_if_not(var_1_52 <= 254);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 126);
	assume_abort_if_not(var_1_54 != 127);
	var_1_55 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_55 >= -1);
	assume_abort_if_not(var_1_55 <= 32767);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 3221225470);
	assume_abort_if_not(var_1_60 <= 4294967294);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= 31);
	assume_abort_if_not(var_1_64 <= 63);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 32);
	assume_abort_if_not(var_1_65 <= 63);
	var_1_67 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_67 >= 1);
	assume_abort_if_not(var_1_67 <= 6);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 1);
	assume_abort_if_not(var_1_68 <= 1);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 0);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 1);
	assume_abort_if_not(var_1_70 <= 1);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 1);
	assume_abort_if_not(var_1_71 <= 1);
	var_1_75 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_75 >= 536870911);
	assume_abort_if_not(var_1_75 <= 1073741823);
	var_1_77 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_77 >= 32767);
	assume_abort_if_not(var_1_77 <= 65534);
	var_1_81 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_81 >= 16383);
	assume_abort_if_not(var_1_81 <= 32767);
	var_1_82 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_82 >= 16383);
	assume_abort_if_not(var_1_82 <= 32767);
	var_1_84 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_84 >= 0.0F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 9223372.036854776000e+12F && var_1_84 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_85 >= 63);
	assume_abort_if_not(var_1_85 <= 126);
	var_1_86 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_86 >= 63);
	assume_abort_if_not(var_1_86 <= 126);
	var_1_88 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 126);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 0);
	var_1_98 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_98 >= 16384);
	assume_abort_if_not(var_1_98 <= 32767);
	var_1_103 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_103 >= -15);
	assume_abort_if_not(var_1_103 <= 16);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_112 = var_1_112;
	last_1_var_1_119 = var_1_119;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((max (var_1_59 , var_1_109)) & var_1_59) <= var_1_109) ? (var_1_1 == ((signed long int) (var_1_6 - var_1_7))) : (var_1_1 == ((signed long int) (max ((max (var_1_6 , (10 - 128))) , var_1_7))))) && (var_1_8 == ((signed char) ((var_1_9 + var_1_10) + 32)))) && ((var_1_66 || var_1_101) ? (var_1_11 == ((signed char) var_1_9)) : (var_1_11 == ((signed char) (max (var_1_10 , (var_1_9 + (var_1_14 + var_1_15)))))))) && (((min (var_1_72 , var_1_7)) >= var_1_9) ? ((var_1_6 > var_1_59) ? (((var_1_9 ^ var_1_15) < var_1_6) ? (var_1_16 == ((double) var_1_17)) : 1) : (var_1_16 == ((double) var_1_17))) : (var_1_16 == ((double) 50.9)))) && (var_1_18 == ((signed char) (var_1_19 - (abs (8)))))) && (var_1_112 ? ((var_1_19 < ((64 - var_1_21) / var_1_22)) ? ((var_1_9 > ((var_1_21 - var_1_23) + var_1_6)) ? (var_1_20 == ((float) (min (var_1_17 , (abs (max (var_1_24 , var_1_25))))))) : 1) : (var_1_20 == ((float) (var_1_26 + (max (var_1_27 , var_1_28)))))) : 1)) && ((((abs (var_1_18)) + var_1_15) <= var_1_22) ? (var_1_29 == ((signed long int) -1)) : 1)) && ((var_1_24 >= 9.6f) ? (var_1_30 == ((unsigned char) ((var_1_31 - var_1_32) + (var_1_33 + var_1_34)))) : (((~ var_1_58) > var_1_76) ? (var_1_30 == ((unsigned char) (max (var_1_34 , var_1_21)))) : (var_1_30 == ((unsigned char) (max ((var_1_33 + (min (var_1_23 , var_1_32))) , (min (var_1_31 , (var_1_21 + var_1_34)))))))))) && ((var_1_94 || var_1_106) ? (var_1_35 == ((signed long int) (min (((var_1_33 + var_1_34) - var_1_23) , var_1_9)))) : (var_1_35 == ((signed long int) (max (var_1_19 , (abs (var_1_6)))))))) && (((max (var_1_7 , (max (200u , var_1_59)))) != 5u) ? (var_1_36 == ((signed long int) (max (((var_1_37 - var_1_29) - (max (var_1_32 , var_1_34))) , (max (var_1_19 , var_1_10)))))) : 1)) && ((var_1_26 >= (max (var_1_28 , (var_1_17 / var_1_39)))) ? ((var_1_15 >= var_1_100) ? (var_1_66 ? (var_1_38 == ((double) (min ((var_1_26 + var_1_27) , var_1_17)))) : (var_1_38 == ((double) (min (((min (var_1_28 , var_1_27)) + var_1_26) , var_1_24))))) : (var_1_38 == ((double) (var_1_27 + var_1_28)))) : (var_1_38 == ((double) (min (var_1_24 , (var_1_40 - (var_1_41 - var_1_42)))))))) && ((last_1_var_1_87 > ((last_1_var_1_61 / var_1_31) * last_1_var_1_58)) ? (((var_1_26 > last_1_var_1_16) && (last_1_var_1_100 <= last_1_var_1_109)) ? (var_1_43 == ((float) (var_1_28 + var_1_45))) : 1) : (var_1_43 == ((float) (var_1_27 + ((9.5f + var_1_46) + (var_1_47 - var_1_48))))))) && ((var_1_109 < var_1_59) ? ((var_1_95 && var_1_106) ? (var_1_49 == ((float) (min (((abs (var_1_45)) + (var_1_47 + var_1_46)) , var_1_24)))) : (var_1_49 == ((float) (var_1_47 - var_1_48)))) : (var_1_49 == ((float) (var_1_26 + var_1_42))))) && (var_1_101 ? (var_1_112 ? (var_1_50 == ((signed short int) (var_1_34 - var_1_21))) : 1) : 1)) && ((var_1_27 < var_1_108) ? (var_1_51 == ((unsigned char) (var_1_52 - var_1_23))) : (var_1_112 ? (var_1_51 == ((unsigned char) var_1_34)) : (var_1_51 == ((unsigned char) var_1_21))))) && (((var_1_6 / (var_1_52 - var_1_54)) >= var_1_19) ? (((var_1_55 - var_1_59) != var_1_52) ? (var_1_53 == ((double) var_1_41)) : (var_1_53 == ((double) (abs (var_1_26))))) : 1)) && ((! var_1_66) ? (var_1_56 == ((signed short int) (min (var_1_15 , var_1_29)))) : 1)) && (var_1_91 ? (var_1_57 == ((float) (127.125f - var_1_42))) : ((! (var_1_107 == (min (var_1_53 , var_1_46)))) ? (var_1_57 == ((float) var_1_40)) : (var_1_57 == ((float) (var_1_28 + var_1_27)))))) && ((var_1_37 > var_1_100) ? ((-128 >= (var_1_19 + var_1_52)) ? (var_1_58 == ((signed long int) (var_1_19 - (abs (var_1_7 - var_1_23))))) : (var_1_58 == ((signed long int) (max ((var_1_21 - var_1_31) , var_1_14))))) : (var_1_106 ? (var_1_58 == ((signed long int) (last_1_var_1_58 - var_1_7))) : (var_1_58 == ((signed long int) (var_1_34 - var_1_52)))))) && ((var_1_15 >= -10) ? (var_1_59 == ((unsigned long int) (abs (var_1_21)))) : (var_1_59 == ((unsigned long int) ((var_1_60 - var_1_54) - var_1_31))))) && ((var_1_55 < var_1_109) ? (var_1_61 == ((signed short int) var_1_32)) : (var_1_61 == ((signed short int) (min ((min (var_1_21 , (var_1_23 - 1))) , var_1_19)))))) && (var_1_62 == ((float) var_1_47))) && (var_1_66 ? (var_1_63 == ((signed char) (var_1_32 + (max (-16 , var_1_14))))) : (var_1_63 == ((signed char) ((max ((max (var_1_19 , var_1_32)) , var_1_33)) - ((var_1_64 + var_1_65) - var_1_34)))))) && (((last_1_var_1_97 + var_1_54) < (var_1_65 * var_1_19)) ? (((var_1_37 / (min (-10000000 , var_1_54))) < (last_1_var_1_100 + var_1_52)) ? ((var_1_41 < ((max (var_1_48 , 3.9)) - var_1_42)) ? (((var_1_23 >> var_1_67) > last_1_var_1_73) ? (var_1_66 == ((unsigned char) (! (! var_1_68)))) : 1) : (var_1_66 == ((unsigned char) (last_1_var_1_119 && var_1_69)))) : (((last_1_var_1_90 * (last_1_var_1_80 / var_1_64)) > ((abs (var_1_65)) | var_1_32)) ? (var_1_66 == ((unsigned char) (var_1_68 && (var_1_70 && var_1_71)))) : (var_1_66 == ((unsigned char) (! (var_1_69 || (! var_1_70))))))) : 1)) && (((var_1_27 / var_1_41) > var_1_45) ? (var_1_72 == ((signed long int) (var_1_64 - var_1_7))) : 1)) && ((((2 / var_1_31) + var_1_29) < (~ last_1_var_1_73)) ? (var_1_73 == ((signed long int) (((var_1_75 - var_1_64) + (var_1_65 + var_1_33)) - ((abs (-1784336330)) - var_1_34)))) : 1)) && (var_1_76 == ((unsigned short int) (min ((41429 - (var_1_65 + var_1_58)) , (var_1_77 - (min (var_1_54 , var_1_32)))))))) && ((((last_1_var_1_78 ^ var_1_109) < (var_1_55 - var_1_7)) && (var_1_47 >= var_1_116)) ? (var_1_78 == ((signed long int) (var_1_55 - 256))) : (var_1_78 == ((signed long int) var_1_31)))) && (var_1_95 ? (var_1_80 == ((unsigned short int) (((min (var_1_81 , var_1_82)) - (var_1_52 + var_1_32)) + (max ((5 + 2) , var_1_67))))) : 1)) && ((var_1_72 >= -1) ? (((var_1_58 < -8) && (var_1_111 > var_1_31)) ? (var_1_83 == ((signed char) ((min ((var_1_67 + var_1_10) , (var_1_14 + -16))) + (var_1_34 - 4)))) : (((var_1_53 / var_1_41) > (var_1_42 - (max (var_1_48 , var_1_84)))) ? (var_1_83 == ((signed char) (var_1_34 - var_1_65))) : 1)) : (((10 / var_1_67) < var_1_31) ? (var_1_83 == ((signed char) (min (var_1_19 , -4)))) : ((var_1_16 == 16.25f) ? (var_1_83 == ((signed char) (var_1_19 - (var_1_85 - var_1_67)))) : (var_1_83 == ((signed char) (var_1_85 - (max (var_1_54 , (var_1_86 - var_1_64)))))))))) && (((var_1_14 * var_1_31) <= var_1_9) ? ((1 > var_1_75) ? ((var_1_109 >= (~ var_1_54)) ? (var_1_87 == ((signed char) (var_1_86 - var_1_65))) : 1) : 1) : ((var_1_69 || var_1_66) ? ((var_1_39 < (max ((var_1_45 + var_1_43) , var_1_16))) ? (var_1_87 == ((signed char) (var_1_33 - var_1_88))) : 1) : (var_1_87 == ((signed char) (min (var_1_88 , var_1_10))))))) && (var_1_112 ? (var_1_89 == ((unsigned char) (var_1_21 + (min ((var_1_67 + var_1_32) , var_1_88))))) : (var_1_89 == ((unsigned char) (max (var_1_65 , (min (var_1_31 , var_1_21)))))))) && (var_1_90 == ((signed short int) (max ((min (-256 , var_1_56)) , (var_1_34 - (max (var_1_33 , var_1_54)))))))) && (((var_1_29 >> 10) > var_1_82) ? ((var_1_76 >= (min (var_1_64 , var_1_29))) ? (var_1_91 == ((unsigned char) ((! var_1_69) && (! var_1_92)))) : (var_1_91 == ((unsigned char) (var_1_70 && var_1_69)))) : 1)) && (var_1_71 ? (((var_1_55 <= (max (var_1_6 , var_1_15))) || var_1_106) ? (var_1_93 == ((signed char) (max (var_1_85 , (var_1_10 + var_1_34))))) : (var_1_93 == ((signed char) (var_1_14 + 50)))) : (var_1_93 == ((signed char) (var_1_14 + var_1_32))))) && (var_1_112 ? (var_1_94 == ((unsigned char) (! var_1_71))) : ((var_1_101 || ((var_1_31 != var_1_67) || var_1_101)) ? (var_1_94 == ((unsigned char) (! var_1_69))) : 1))) && ((((~ var_1_52) | last_1_var_1_100) < (var_1_85 / var_1_75)) ? (var_1_95 == ((unsigned char) var_1_70)) : (var_1_95 == ((unsigned char) (last_1_var_1_119 || (! var_1_92)))))) && (var_1_97 == ((unsigned short int) (((min (var_1_81 , var_1_82)) + var_1_98) - var_1_80)))) && ((var_1_97 < var_1_102) ? (var_1_91 ? (var_1_99 == ((signed long int) ((var_1_98 + var_1_34) - var_1_64))) : (var_1_99 == ((signed long int) (var_1_109 + var_1_85)))) : (var_1_99 == ((signed long int) (min ((var_1_21 - 100) , var_1_37)))))) && (var_1_92 ? (var_1_71 ? (var_1_100 == ((unsigned long int) var_1_86)) : ((last_1_var_1_99 <= (~ (max (var_1_6 , last_1_var_1_1)))) ? (var_1_100 == ((unsigned long int) (var_1_60 - 1u))) : (var_1_100 == ((unsigned long int) (min ((var_1_60 - (min (var_1_21 , var_1_54))) , (last_1_var_1_36 + var_1_88))))))) : 1)) && ((var_1_85 > var_1_59) ? (var_1_101 == ((unsigned char) (var_1_70 && (! var_1_68)))) : 1)) && ((var_1_39 >= var_1_107) ? (((max (var_1_57 , var_1_38)) != var_1_27) ? (var_1_102 == ((signed char) (var_1_19 - var_1_54))) : ((var_1_26 <= var_1_27) ? (var_1_102 == ((signed char) (var_1_19 - (min ((var_1_86 - var_1_32) , var_1_34))))) : (var_1_102 == ((signed char) (var_1_67 + (var_1_15 + (var_1_103 + -1))))))) : 1)) && ((last_1_var_1_104 < (var_1_38 / var_1_41)) ? (var_1_104 == ((float) (min ((abs (128.2f + var_1_28)) , var_1_17)))) : 1)) && ((var_1_69 || var_1_66) ? (var_1_105 == ((signed char) (var_1_65 - var_1_54))) : 1)) && (((var_1_109 % var_1_54) <= (1u + 8u)) ? (var_1_106 == ((unsigned char) var_1_71)) : (var_1_106 == ((unsigned char) var_1_92)))) && (var_1_68 ? (var_1_107 == ((float) var_1_41)) : (var_1_107 == ((float) 99.218f)))) && (var_1_112 ? (var_1_108 == ((float) var_1_42)) : (var_1_108 == ((float) var_1_17)))) && (var_1_69 ? (var_1_109 == ((unsigned long int) var_1_54)) : (var_1_109 == ((unsigned long int) var_1_33)))) && (var_1_106 ? (var_1_110 == ((float) 15.625f)) : (var_1_110 == ((float) var_1_42)))) && (var_1_111 == ((signed long int) var_1_34))) && (last_1_var_1_112 ? (var_1_112 == ((unsigned char) var_1_92)) : (var_1_112 == ((unsigned char) var_1_71)))) && (var_1_113 == ((double) var_1_17))) && (var_1_114 == ((signed short int) var_1_52))) && (var_1_69 ? (var_1_115 == ((unsigned char) var_1_67)) : 1)) && (var_1_112 ? (var_1_116 == ((float) var_1_26)) : 1)) && (var_1_117 == ((unsigned char) var_1_34))) && (var_1_118 == ((unsigned short int) var_1_61))) && (((var_1_95 && (var_1_10 >= var_1_103)) || var_1_92) ? (var_1_119 == ((unsigned char) var_1_69)) : ((((var_1_32 - var_1_100) / var_1_67) <= var_1_19) ? (var_1_119 == ((unsigned char) var_1_68)) : (var_1_119 == ((unsigned char) var_1_92))))
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
