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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch51Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 0;
float var_1_4 = 127.25;
float var_1_5 = 2.75;
float var_1_6 = 255.25;
signed char var_1_7 = 25;
signed char var_1_8 = 16;
signed char var_1_9 = -4;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 32;
unsigned short int var_1_13 = 53860;
signed long int var_1_14 = -200;
float var_1_15 = 64.5;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 10;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 200;
unsigned char var_1_20 = 4;
unsigned char var_1_21 = 2;
signed long int var_1_22 = 0;
unsigned char var_1_23 = 64;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 1;
unsigned long int var_1_26 = 100;
float var_1_27 = 0.0;
float var_1_28 = 4.6;
unsigned long int var_1_29 = 1206595104;
unsigned short int var_1_30 = 4;
unsigned short int var_1_31 = 32184;
unsigned short int var_1_32 = 30853;
signed short int var_1_33 = 1;
double var_1_35 = 5.625;
double var_1_36 = 1.5;
double var_1_37 = 3.98;
double var_1_38 = 16.65;
signed char var_1_39 = -4;
signed char var_1_40 = 32;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 64;
unsigned char var_1_47 = 64;
unsigned long int var_1_48 = 100000;
unsigned long int var_1_49 = 2492677368;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
double var_1_55 = 24.8;
double var_1_56 = 1.54;
double var_1_57 = 0.75;
double var_1_58 = 32.25;
double var_1_59 = 16.5;
unsigned long int var_1_60 = 16;
signed char var_1_61 = 100;
signed char var_1_62 = -10;
unsigned char var_1_64 = 64;
signed char var_1_65 = 8;
signed char var_1_66 = 10;
signed char var_1_67 = 0;
signed char var_1_68 = 64;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 200;
unsigned char var_1_73 = 32;
signed short int var_1_74 = -50;
float var_1_75 = 1.28;
float var_1_76 = 15.25;
signed short int var_1_77 = 4;
signed long int var_1_78 = -2;
signed short int var_1_80 = -8;
signed short int var_1_81 = 128;
signed short int var_1_82 = -1;
unsigned short int var_1_83 = 18666;
unsigned short int var_1_84 = 17339;
signed long int var_1_86 = 2;
unsigned long int var_1_87 = 128;
unsigned long int var_1_88 = 4160577302;
signed long int var_1_89 = 50;
signed long int var_1_90 = -2;
unsigned short int var_1_91 = 16;
unsigned long int var_1_94 = 64;
unsigned long int var_1_95 = 1837090391;
double var_1_96 = 999999999999.4;
double var_1_97 = 8.2;
float var_1_99 = 31.5;
signed char var_1_100 = 50;
unsigned char var_1_101 = 0;
signed char var_1_102 = 16;
signed long int var_1_103 = -32;
unsigned short int var_1_104 = 128;
signed short int var_1_105 = 500;
unsigned short int var_1_106 = 4;
signed long int var_1_107 = 1;
unsigned char var_1_108 = 0;
unsigned char var_1_109 = 1;
unsigned char var_1_110 = 10;
unsigned char var_1_111 = 4;
unsigned char var_1_112 = 16;
unsigned short int var_1_113 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_21 = 2;
signed char last_1_var_1_39 = -4;
unsigned char last_1_var_1_41 = 1;
unsigned char last_1_var_1_44 = 64;
unsigned char last_1_var_1_50 = 0;
signed short int last_1_var_1_80 = -8;
signed long int last_1_var_1_86 = 2;
double last_1_var_1_97 = 8.2;
signed long int last_1_var_1_103 = -32;
unsigned char last_1_var_1_111 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req13Batch51Amount500
	signed long int stepLocal_4 = (var_1_40 / var_1_23) * (var_1_25 / var_1_19);
	unsigned char stepLocal_3 = var_1_23;
	if ((max (-256 , (min (var_1_19 , last_1_var_1_21)))) <= stepLocal_3) {
		var_1_41 = ((var_1_40 >= var_1_20) || (! (var_1_42 || var_1_43)));
	} else {
		if (stepLocal_4 == (min (last_1_var_1_21 , (max (var_1_22 , last_1_var_1_86))))) {
			var_1_41 = (! 0);
		}
	}


	// From: Req40Batch51Amount500
	if (var_1_41) {
		var_1_101 = var_1_54;
	}


	// From: Req8Batch51Amount500
	if ((last_1_var_1_97 >= var_1_5) || (-256 > 32)) {
		var_1_30 = ((var_1_31 - var_1_18) + (min ((var_1_32 - var_1_24) , (var_1_17 + var_1_19))));
	} else {
		if ((last_1_var_1_50 || (var_1_17 > var_1_20)) && (! (var_1_23 > var_1_31))) {
			var_1_30 = (max (var_1_24 , 32));
		}
	}


	// From: Req6Batch51Amount500
	if ((var_1_7 >> var_1_22) < var_1_18) {
		if ((abs (last_1_var_1_44 / var_1_18)) <= (1000000000 - last_1_var_1_111)) {
			var_1_21 = (min (((var_1_23 + var_1_24) - (min (var_1_17 , var_1_8))) , (50 + (max (var_1_22 , var_1_20)))));
		} else {
			var_1_21 = (var_1_19 - (var_1_22 + var_1_25));
		}
	} else {
		var_1_21 = (var_1_20 + var_1_17);
	}


	// From: Req16Batch51Amount500
	if ((var_1_11 ^ (abs (last_1_var_1_103))) >= (~ var_1_8)) {
		if (var_1_15 <= (var_1_4 / var_1_6)) {
			var_1_50 = (last_1_var_1_41 && var_1_43);
		} else {
			var_1_50 = (var_1_51 && var_1_52);
		}
	} else {
		var_1_50 = (var_1_51 && var_1_52);
	}


	// From: Req2Batch51Amount500
	if (var_1_4 < 64.4f) {
		var_1_10 = (max ((abs (max (8 , var_1_8))) , var_1_11));
	}


	// From: Req11Batch51Amount500
	if (999999.1f >= (- var_1_5)) {
		var_1_38 = (var_1_36 + var_1_37);
	} else {
		if (var_1_27 < (abs (var_1_6))) {
			var_1_38 = var_1_36;
		}
	}


	// From: Req18Batch51Amount500
	if (! ((5.6 - var_1_27) <= var_1_6)) {
		var_1_55 = (min (var_1_36 , var_1_28));
	} else {
		var_1_55 = (min ((var_1_37 + (abs (var_1_36))) , ((var_1_56 - var_1_57) + (var_1_58 + var_1_59))));
	}


	// From: Req19Batch51Amount500
	if ((var_1_37 / var_1_15) > (- var_1_56)) {
		var_1_60 = (var_1_20 + var_1_17);
	} else {
		var_1_60 = (var_1_49 - (var_1_29 - var_1_23));
	}


	// From: Req24Batch51Amount500
	signed char stepLocal_8 = var_1_66;
	if (var_1_43) {
		var_1_75 = (var_1_56 - var_1_57);
	} else {
		if (var_1_68 <= stepLocal_8) {
			var_1_75 = (var_1_36 + (var_1_58 + (max (var_1_59 , var_1_76))));
		}
	}


	// From: Req26Batch51Amount500
	if ((- var_1_56) >= var_1_5) {
		var_1_78 = (var_1_30 - (max (4 , (min (256 , var_1_64)))));
	}


	// From: Req38Batch51Amount500
	if (var_1_54) {
		var_1_99 = var_1_36;
	}


	// From: Req39Batch51Amount500
	if (var_1_52) {
		var_1_100 = var_1_40;
	} else {
		var_1_100 = var_1_62;
	}


	// From: Req41Batch51Amount500
	var_1_102 = var_1_66;


	// From: Req43Batch51Amount500
	var_1_104 = var_1_67;


	// From: Req48Batch51Amount500
	var_1_109 = var_1_43;


	// From: Req49Batch51Amount500
	var_1_110 = var_1_23;


	// From: Req50Batch51Amount500
	if (var_1_109) {
		var_1_111 = var_1_66;
	}


	// From: Req42Batch51Amount500
	if (var_1_101) {
		var_1_103 = var_1_47;
	} else {
		var_1_103 = -8;
	}


	// From: Req3Batch51Amount500
	if (! var_1_50) {
		var_1_12 = (min ((var_1_13 - var_1_11) , (var_1_8 + var_1_102)));
	} else {
		if (var_1_11 > var_1_102) {
			var_1_12 = 64;
		} else {
			var_1_12 = var_1_11;
		}
	}


	// From: Req52Batch51Amount500
	var_1_113 = var_1_12;


	// From: Req1Batch51Amount500
	if ((- var_1_55) <= (var_1_4 - var_1_5)) {
		if (var_1_55 >= ((min (var_1_5 , var_1_4)) / var_1_6)) {
			var_1_1 = (min ((var_1_7 - var_1_8) , var_1_9));
		} else {
			var_1_1 = (min ((abs (var_1_8)) , var_1_9));
		}
	}


	// From: Req5Batch51Amount500
	if (var_1_15 == var_1_99) {
		var_1_16 = (var_1_8 + var_1_17);
	} else {
		var_1_16 = (max (((max (var_1_18 , var_1_19)) - var_1_20) , var_1_11));
	}


	// From: Req17Batch51Amount500
	if (var_1_43) {
		if ((var_1_75 * var_1_27) > (- var_1_5)) {
			var_1_53 = ((! var_1_42) && (! var_1_54));
		} else {
			var_1_53 = (! var_1_54);
		}
	}


	// From: Req20Batch51Amount500
	unsigned char stepLocal_6 = var_1_54;
	signed long int stepLocal_5 = var_1_19 - (var_1_64 - var_1_40);
	if (var_1_41 || stepLocal_6) {
		if ((min (var_1_59 , var_1_5)) == (var_1_57 * var_1_56)) {
			var_1_61 = ((var_1_22 + var_1_62) + var_1_25);
		}
	} else {
		if (var_1_36 < var_1_99) {
			if (stepLocal_5 <= (max ((var_1_24 - var_1_29) , (~ var_1_31)))) {
				var_1_61 = (var_1_22 - (var_1_40 + (var_1_65 + var_1_66)));
			}
		} else {
			var_1_61 = (var_1_22 - (min (var_1_67 , (var_1_68 - var_1_66))));
		}
	}


	// From: Req44Batch51Amount500
	if (var_1_109) {
		var_1_105 = var_1_11;
	} else {
		var_1_105 = -2;
	}


	// From: Req45Batch51Amount500
	if (var_1_53) {
		var_1_106 = var_1_84;
	} else {
		var_1_106 = var_1_68;
	}


	// From: Req21Batch51Amount500
	if (var_1_41) {
		if ((var_1_1 < (var_1_21 + var_1_103)) || var_1_42) {
			var_1_69 = (! var_1_70);
		}
	}


	// From: Req14Batch51Amount500
	if ((var_1_30 - var_1_40) >= var_1_16) {
		if ((max ((var_1_40 * var_1_23) , var_1_20)) <= var_1_30) {
			var_1_44 = (var_1_25 + (var_1_47 - var_1_22));
		} else {
			var_1_44 = (abs (var_1_47));
		}
	} else {
		var_1_44 = (abs (var_1_47));
	}


	// From: Req29Batch51Amount500
	unsigned short int stepLocal_14 = var_1_13;
	unsigned char stepLocal_13 = var_1_20 > var_1_113;
	if ((var_1_58 > var_1_57) || stepLocal_13) {
		if (stepLocal_14 >= ((var_1_83 + var_1_84) - (min (var_1_64 , var_1_18)))) {
			var_1_82 = (var_1_110 - 200);
		}
	}


	// From: Req10Batch51Amount500
	if (var_1_53) {
		var_1_35 = (max ((var_1_36 + var_1_37) , var_1_28));
	}


	// From: Req12Batch51Amount500
	signed char stepLocal_2 = var_1_1;
	signed long int stepLocal_1 = 128 * var_1_44;
	if (((min (var_1_11 , last_1_var_1_39)) - var_1_32) < stepLocal_1) {
		if (var_1_9 == stepLocal_2) {
			var_1_39 = ((var_1_25 + (abs (var_1_22))) - (max ((var_1_40 + 1) , var_1_8)));
		} else {
			var_1_39 = (abs (var_1_8));
		}
	}


	// From: Req47Batch51Amount500
	if (var_1_69) {
		var_1_108 = var_1_19;
	} else {
		var_1_108 = var_1_22;
	}


	// From: Req22Batch51Amount500
	if (var_1_64 > var_1_108) {
		var_1_71 = (max ((max ((var_1_18 - var_1_40) , var_1_17)) , (var_1_22 + var_1_73)));
	} else {
		var_1_71 = var_1_40;
	}


	// From: Req7Batch51Amount500
	if ((var_1_5 + var_1_75) <= ((var_1_27 - var_1_28) - var_1_4)) {
		var_1_26 = (var_1_19 + var_1_71);
	} else {
		var_1_26 = ((min (3702269063u , (var_1_29 + 1166925492u))) - (max (var_1_11 , var_1_16)));
	}


	// From: Req28Batch51Amount500
	if ((var_1_27 / var_1_15) > (max (var_1_6 , (var_1_56 + var_1_28)))) {
		if (var_1_53) {
			var_1_81 = (var_1_17 + 128);
		} else {
			var_1_81 = var_1_22;
		}
	} else {
		if (var_1_108 >= var_1_17) {
			if (var_1_51 || (var_1_17 <= var_1_40)) {
				var_1_81 = (10 - (max ((var_1_24 + var_1_65) , (var_1_64 + var_1_40))));
			}
		}
	}


	// From: Req36Batch51Amount500
	if (var_1_44 > (max (var_1_106 , var_1_71))) {
		var_1_96 = ((max ((var_1_57 + 3.5) , var_1_56)) - var_1_28);
	} else {
		if (var_1_53) {
			var_1_96 = (var_1_76 + var_1_57);
		} else {
			var_1_96 = ((var_1_57 + var_1_56) - var_1_28);
		}
	}


	// From: Req35Batch51Amount500
	if (100.75 > var_1_96) {
		if (var_1_53) {
			var_1_94 = ((1640478545u + var_1_95) - (var_1_44 + var_1_83));
		} else {
			var_1_94 = var_1_49;
		}
	}


	// From: Req4Batch51Amount500
	if (var_1_6 != ((var_1_4 / var_1_15) * (- var_1_96))) {
		var_1_14 = ((max (var_1_13 , var_1_60)) - var_1_11);
	} else {
		var_1_14 = var_1_9;
	}


	// From: Req32Batch51Amount500
	unsigned char stepLocal_19 = var_1_42;
	unsigned char stepLocal_18 = var_1_11;
	unsigned long int stepLocal_17 = var_1_94;
	signed long int stepLocal_16 = 64 - var_1_61;
	if (var_1_22 <= stepLocal_18) {
		if (var_1_109 || stepLocal_19) {
			if ((max (-256 , var_1_67)) != stepLocal_16) {
				var_1_89 = (abs (var_1_81));
			}
		}
	} else {
		if (stepLocal_17 <= (var_1_19 - var_1_25)) {
			var_1_89 = (var_1_20 + (abs (var_1_18)));
		} else {
			var_1_89 = (abs (var_1_62 + var_1_73));
		}
	}


	// From: Req31Batch51Amount500
	if (var_1_25 >= var_1_110) {
		if ((var_1_108 <= 0) || (var_1_94 <= 5)) {
			var_1_87 = ((var_1_88 - 1u) - var_1_29);
		} else {
			var_1_87 = ((max (var_1_49 , var_1_88)) - ((var_1_66 + var_1_73) + 32u));
		}
	}


	// From: Req51Batch51Amount500
	unsigned char stepLocal_23 = var_1_9 <= var_1_32;
	unsigned long int stepLocal_22 = var_1_87;
	if (stepLocal_22 >= (var_1_21 - var_1_23)) {
		if ((var_1_7 > 32) || stepLocal_23) {
			var_1_112 = var_1_47;
		}
	}


	// From: Req27Batch51Amount500
	unsigned char stepLocal_12 = var_1_19;
	signed long int stepLocal_11 = min (var_1_11 , var_1_24);
	if ((var_1_32 ^ (var_1_13 - var_1_47)) == stepLocal_11) {
		if ((var_1_112 & last_1_var_1_80) != stepLocal_12) {
			var_1_80 = (min (var_1_67 , -10));
		} else {
			var_1_80 = (min (var_1_9 , var_1_11));
		}
	}


	// From: Req34Batch51Amount500
	signed char stepLocal_21 = var_1_67;
	signed long int stepLocal_20 = var_1_71 + var_1_12;
	if (stepLocal_21 < ((min (var_1_112 , var_1_25)) * var_1_73)) {
		if (var_1_29 > stepLocal_20) {
			var_1_91 = (var_1_20 + var_1_111);
		} else {
			var_1_91 = var_1_67;
		}
	} else {
		if (var_1_75 > 4.5) {
			var_1_91 = (abs (var_1_47 + var_1_19));
		}
	}


	// From: Req46Batch51Amount500
	var_1_107 = var_1_91;


	// From: Req9Batch51Amount500
	signed long int stepLocal_0 = var_1_19 + var_1_32;
	if (var_1_109) {
		var_1_33 = (max (-1 , var_1_23));
	} else {
		if (! var_1_50) {
			if (stepLocal_0 < (var_1_112 + var_1_20)) {
				var_1_33 = (var_1_19 + var_1_17);
			} else {
				if (var_1_27 > (min (var_1_6 , var_1_99))) {
					var_1_33 = (min ((var_1_111 - (16 + 4)) , var_1_9));
				} else {
					var_1_33 = (var_1_111 + var_1_9);
				}
			}
		} else {
			var_1_33 = (var_1_18 + var_1_23);
		}
	}


	// From: Req25Batch51Amount500
	unsigned char stepLocal_10 = var_1_70;
	signed short int stepLocal_9 = var_1_33;
	if (var_1_53) {
		if (var_1_54 || stepLocal_10) {
			var_1_77 = (var_1_8 - var_1_47);
		}
	} else {
		if (stepLocal_9 <= (abs (2))) {
			var_1_77 = (var_1_14 + -200);
		}
	}


	// From: Req30Batch51Amount500
	unsigned char stepLocal_15 = var_1_43;
	if ((max ((- var_1_27) , (var_1_56 / var_1_6))) <= var_1_15) {
		if (stepLocal_15 && var_1_52) {
			if (var_1_37 >= var_1_28) {
				var_1_86 = ((var_1_13 + var_1_22) + var_1_33);
			}
		} else {
			var_1_86 = (var_1_82 + (abs (var_1_23)));
		}
	} else {
		var_1_86 = (4 + var_1_30);
	}


	// From: Req33Batch51Amount500
	if (var_1_50) {
		var_1_90 = ((var_1_47 + var_1_30) - var_1_86);
	}


	// From: Req37Batch51Amount500
	if (((- var_1_55) / var_1_27) >= var_1_75) {
		if ((min (var_1_28 , var_1_96)) >= var_1_37) {
			if (((min (var_1_14 , var_1_90)) * (var_1_19 - 1)) <= var_1_87) {
				var_1_97 = var_1_28;
			} else {
				var_1_97 = var_1_56;
			}
		}
	}


	// From: Req15Batch51Amount500
	if (var_1_36 < var_1_15) {
		if ((var_1_28 * var_1_27) > (var_1_97 * var_1_99)) {
			var_1_48 = (2305225057u - (var_1_31 + var_1_40));
		} else {
			var_1_48 = (max ((var_1_49 - (max (var_1_24 , var_1_89))) , (min (var_1_103 , var_1_11))));
		}
	} else {
		var_1_48 = ((max (var_1_19 , var_1_17)) + (var_1_29 - var_1_23));
	}


	// From: Req23Batch51Amount500
	unsigned char stepLocal_7 = var_1_23;
	if (var_1_65 <= stepLocal_7) {
		var_1_74 = (var_1_77 + var_1_17);
	} else {
		var_1_74 = (max ((var_1_11 + (max (var_1_47 , var_1_68))) , 4));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(var_1_6 != 0.0F);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 32767);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 127);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 127);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 8);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 63);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 64);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 4611686.018427387900e+12F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427387900e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 1073741823);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 16383);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 16383);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -461168.6018427382800e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -461168.6018427382800e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 63);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 2147483647);
	assume_abort_if_not(var_1_49 <= 4294967294);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 1);
	assume_abort_if_not(var_1_52 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 0);
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427382800e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= -230584.3009213691390e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 2305843.009213691390e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -230584.3009213691390e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 2305843.009213691390e+12F && var_1_59 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= -31);
	assume_abort_if_not(var_1_62 <= 31);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 63);
	assume_abort_if_not(var_1_64 <= 127);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 32);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 31);
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 126);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= 63);
	assume_abort_if_not(var_1_68 <= 126);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 1);
	assume_abort_if_not(var_1_70 <= 1);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 127);
	var_1_76 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_76 >= -230584.3009213691390e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 2305843.009213691390e+12F && var_1_76 >= 1.0e-20F ));
	var_1_83 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_83 >= 16383);
	assume_abort_if_not(var_1_83 <= 32768);
	var_1_84 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_84 >= 16384);
	assume_abort_if_not(var_1_84 <= 32767);
	var_1_88 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_88 >= 3221225470);
	assume_abort_if_not(var_1_88 <= 4294967294);
	var_1_95 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_95 >= 1073741824);
	assume_abort_if_not(var_1_95 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_21 = var_1_21;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_111 = var_1_111;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((- var_1_55) <= (var_1_4 - var_1_5)) ? ((var_1_55 >= ((min (var_1_5 , var_1_4)) / var_1_6)) ? (var_1_1 == ((signed char) (min ((var_1_7 - var_1_8) , var_1_9)))) : (var_1_1 == ((signed char) (min ((abs (var_1_8)) , var_1_9))))) : 1) && ((var_1_4 < 64.4f) ? (var_1_10 == ((unsigned char) (max ((abs (max (8 , var_1_8))) , var_1_11)))) : 1)) && ((! var_1_50) ? (var_1_12 == ((unsigned short int) (min ((var_1_13 - var_1_11) , (var_1_8 + var_1_102))))) : ((var_1_11 > var_1_102) ? (var_1_12 == ((unsigned short int) 64)) : (var_1_12 == ((unsigned short int) var_1_11))))) && ((var_1_6 != ((var_1_4 / var_1_15) * (- var_1_96))) ? (var_1_14 == ((signed long int) ((max (var_1_13 , var_1_60)) - var_1_11))) : (var_1_14 == ((signed long int) var_1_9)))) && ((var_1_15 == var_1_99) ? (var_1_16 == ((unsigned char) (var_1_8 + var_1_17))) : (var_1_16 == ((unsigned char) (max (((max (var_1_18 , var_1_19)) - var_1_20) , var_1_11)))))) && (((var_1_7 >> var_1_22) < var_1_18) ? (((abs (last_1_var_1_44 / var_1_18)) <= (1000000000 - last_1_var_1_111)) ? (var_1_21 == ((unsigned char) (min (((var_1_23 + var_1_24) - (min (var_1_17 , var_1_8))) , (50 + (max (var_1_22 , var_1_20))))))) : (var_1_21 == ((unsigned char) (var_1_19 - (var_1_22 + var_1_25))))) : (var_1_21 == ((unsigned char) (var_1_20 + var_1_17))))) && (((var_1_5 + var_1_75) <= ((var_1_27 - var_1_28) - var_1_4)) ? (var_1_26 == ((unsigned long int) (var_1_19 + var_1_71))) : (var_1_26 == ((unsigned long int) ((min (3702269063u , (var_1_29 + 1166925492u))) - (max (var_1_11 , var_1_16))))))) && (((last_1_var_1_97 >= var_1_5) || (-256 > 32)) ? (var_1_30 == ((unsigned short int) ((var_1_31 - var_1_18) + (min ((var_1_32 - var_1_24) , (var_1_17 + var_1_19)))))) : (((last_1_var_1_50 || (var_1_17 > var_1_20)) && (! (var_1_23 > var_1_31))) ? (var_1_30 == ((unsigned short int) (max (var_1_24 , 32)))) : 1))) && (var_1_109 ? (var_1_33 == ((signed short int) (max (-1 , var_1_23)))) : ((! var_1_50) ? (((var_1_19 + var_1_32) < (var_1_112 + var_1_20)) ? (var_1_33 == ((signed short int) (var_1_19 + var_1_17))) : ((var_1_27 > (min (var_1_6 , var_1_99))) ? (var_1_33 == ((signed short int) (min ((var_1_111 - (16 + 4)) , var_1_9)))) : (var_1_33 == ((signed short int) (var_1_111 + var_1_9))))) : (var_1_33 == ((signed short int) (var_1_18 + var_1_23)))))) && (var_1_53 ? (var_1_35 == ((double) (max ((var_1_36 + var_1_37) , var_1_28)))) : 1)) && ((999999.1f >= (- var_1_5)) ? (var_1_38 == ((double) (var_1_36 + var_1_37))) : ((var_1_27 < (abs (var_1_6))) ? (var_1_38 == ((double) var_1_36)) : 1))) && ((((min (var_1_11 , last_1_var_1_39)) - var_1_32) < (128 * var_1_44)) ? ((var_1_9 == var_1_1) ? (var_1_39 == ((signed char) ((var_1_25 + (abs (var_1_22))) - (max ((var_1_40 + 1) , var_1_8))))) : (var_1_39 == ((signed char) (abs (var_1_8))))) : 1)) && (((max (-256 , (min (var_1_19 , last_1_var_1_21)))) <= var_1_23) ? (var_1_41 == ((unsigned char) ((var_1_40 >= var_1_20) || (! (var_1_42 || var_1_43))))) : ((((var_1_40 / var_1_23) * (var_1_25 / var_1_19)) == (min (last_1_var_1_21 , (max (var_1_22 , last_1_var_1_86))))) ? (var_1_41 == ((unsigned char) (! 0))) : 1))) && (((var_1_30 - var_1_40) >= var_1_16) ? (((max ((var_1_40 * var_1_23) , var_1_20)) <= var_1_30) ? (var_1_44 == ((unsigned char) (var_1_25 + (var_1_47 - var_1_22)))) : (var_1_44 == ((unsigned char) (abs (var_1_47))))) : (var_1_44 == ((unsigned char) (abs (var_1_47)))))) && ((var_1_36 < var_1_15) ? (((var_1_28 * var_1_27) > (var_1_97 * var_1_99)) ? (var_1_48 == ((unsigned long int) (2305225057u - (var_1_31 + var_1_40)))) : (var_1_48 == ((unsigned long int) (max ((var_1_49 - (max (var_1_24 , var_1_89))) , (min (var_1_103 , var_1_11))))))) : (var_1_48 == ((unsigned long int) ((max (var_1_19 , var_1_17)) + (var_1_29 - var_1_23)))))) && (((var_1_11 ^ (abs (last_1_var_1_103))) >= (~ var_1_8)) ? ((var_1_15 <= (var_1_4 / var_1_6)) ? (var_1_50 == ((unsigned char) (last_1_var_1_41 && var_1_43))) : (var_1_50 == ((unsigned char) (var_1_51 && var_1_52)))) : (var_1_50 == ((unsigned char) (var_1_51 && var_1_52))))) && (var_1_43 ? (((var_1_75 * var_1_27) > (- var_1_5)) ? (var_1_53 == ((unsigned char) ((! var_1_42) && (! var_1_54)))) : (var_1_53 == ((unsigned char) (! var_1_54)))) : 1)) && ((! ((5.6 - var_1_27) <= var_1_6)) ? (var_1_55 == ((double) (min (var_1_36 , var_1_28)))) : (var_1_55 == ((double) (min ((var_1_37 + (abs (var_1_36))) , ((var_1_56 - var_1_57) + (var_1_58 + var_1_59)))))))) && (((var_1_37 / var_1_15) > (- var_1_56)) ? (var_1_60 == ((unsigned long int) (var_1_20 + var_1_17))) : (var_1_60 == ((unsigned long int) (var_1_49 - (var_1_29 - var_1_23)))))) && ((var_1_41 || var_1_54) ? (((min (var_1_59 , var_1_5)) == (var_1_57 * var_1_56)) ? (var_1_61 == ((signed char) ((var_1_22 + var_1_62) + var_1_25))) : 1) : ((var_1_36 < var_1_99) ? (((var_1_19 - (var_1_64 - var_1_40)) <= (max ((var_1_24 - var_1_29) , (~ var_1_31)))) ? (var_1_61 == ((signed char) (var_1_22 - (var_1_40 + (var_1_65 + var_1_66))))) : 1) : (var_1_61 == ((signed char) (var_1_22 - (min (var_1_67 , (var_1_68 - var_1_66))))))))) && (var_1_41 ? (((var_1_1 < (var_1_21 + var_1_103)) || var_1_42) ? (var_1_69 == ((unsigned char) (! var_1_70))) : 1) : 1)) && ((var_1_64 > var_1_108) ? (var_1_71 == ((unsigned char) (max ((max ((var_1_18 - var_1_40) , var_1_17)) , (var_1_22 + var_1_73))))) : (var_1_71 == ((unsigned char) var_1_40)))) && ((var_1_65 <= var_1_23) ? (var_1_74 == ((signed short int) (var_1_77 + var_1_17))) : (var_1_74 == ((signed short int) (max ((var_1_11 + (max (var_1_47 , var_1_68))) , 4)))))) && (var_1_43 ? (var_1_75 == ((float) (var_1_56 - var_1_57))) : ((var_1_68 <= var_1_66) ? (var_1_75 == ((float) (var_1_36 + (var_1_58 + (max (var_1_59 , var_1_76)))))) : 1))) && (var_1_53 ? ((var_1_54 || var_1_70) ? (var_1_77 == ((signed short int) (var_1_8 - var_1_47))) : 1) : ((var_1_33 <= (abs (2))) ? (var_1_77 == ((signed short int) (var_1_14 + -200))) : 1))) && (((- var_1_56) >= var_1_5) ? (var_1_78 == ((signed long int) (var_1_30 - (max (4 , (min (256 , var_1_64))))))) : 1)) && (((var_1_32 ^ (var_1_13 - var_1_47)) == (min (var_1_11 , var_1_24))) ? (((var_1_112 & last_1_var_1_80) != var_1_19) ? (var_1_80 == ((signed short int) (min (var_1_67 , -10)))) : (var_1_80 == ((signed short int) (min (var_1_9 , var_1_11))))) : 1)) && (((var_1_27 / var_1_15) > (max (var_1_6 , (var_1_56 + var_1_28)))) ? (var_1_53 ? (var_1_81 == ((signed short int) (var_1_17 + 128))) : (var_1_81 == ((signed short int) var_1_22))) : ((var_1_108 >= var_1_17) ? ((var_1_51 || (var_1_17 <= var_1_40)) ? (var_1_81 == ((signed short int) (10 - (max ((var_1_24 + var_1_65) , (var_1_64 + var_1_40)))))) : 1) : 1))) && (((var_1_58 > var_1_57) || (var_1_20 > var_1_113)) ? ((var_1_13 >= ((var_1_83 + var_1_84) - (min (var_1_64 , var_1_18)))) ? (var_1_82 == ((signed short int) (var_1_110 - 200))) : 1) : 1)) && (((max ((- var_1_27) , (var_1_56 / var_1_6))) <= var_1_15) ? ((var_1_43 && var_1_52) ? ((var_1_37 >= var_1_28) ? (var_1_86 == ((signed long int) ((var_1_13 + var_1_22) + var_1_33))) : 1) : (var_1_86 == ((signed long int) (var_1_82 + (abs (var_1_23)))))) : (var_1_86 == ((signed long int) (4 + var_1_30))))) && ((var_1_25 >= var_1_110) ? (((var_1_108 <= 0) || (var_1_94 <= 5)) ? (var_1_87 == ((unsigned long int) ((var_1_88 - 1u) - var_1_29))) : (var_1_87 == ((unsigned long int) ((max (var_1_49 , var_1_88)) - ((var_1_66 + var_1_73) + 32u))))) : 1)) && ((var_1_22 <= var_1_11) ? ((var_1_109 || var_1_42) ? (((max (-256 , var_1_67)) != (64 - var_1_61)) ? (var_1_89 == ((signed long int) (abs (var_1_81)))) : 1) : 1) : ((var_1_94 <= (var_1_19 - var_1_25)) ? (var_1_89 == ((signed long int) (var_1_20 + (abs (var_1_18))))) : (var_1_89 == ((signed long int) (abs (var_1_62 + var_1_73))))))) && (var_1_50 ? (var_1_90 == ((signed long int) ((var_1_47 + var_1_30) - var_1_86))) : 1)) && ((var_1_67 < ((min (var_1_112 , var_1_25)) * var_1_73)) ? ((var_1_29 > (var_1_71 + var_1_12)) ? (var_1_91 == ((unsigned short int) (var_1_20 + var_1_111))) : (var_1_91 == ((unsigned short int) var_1_67))) : ((var_1_75 > 4.5) ? (var_1_91 == ((unsigned short int) (abs (var_1_47 + var_1_19)))) : 1))) && ((100.75 > var_1_96) ? (var_1_53 ? (var_1_94 == ((unsigned long int) ((1640478545u + var_1_95) - (var_1_44 + var_1_83)))) : (var_1_94 == ((unsigned long int) var_1_49))) : 1)) && ((var_1_44 > (max (var_1_106 , var_1_71))) ? (var_1_96 == ((double) ((max ((var_1_57 + 3.5) , var_1_56)) - var_1_28))) : (var_1_53 ? (var_1_96 == ((double) (var_1_76 + var_1_57))) : (var_1_96 == ((double) ((var_1_57 + var_1_56) - var_1_28)))))) && ((((- var_1_55) / var_1_27) >= var_1_75) ? (((min (var_1_28 , var_1_96)) >= var_1_37) ? ((((min (var_1_14 , var_1_90)) * (var_1_19 - 1)) <= var_1_87) ? (var_1_97 == ((double) var_1_28)) : (var_1_97 == ((double) var_1_56))) : 1) : 1)) && (var_1_54 ? (var_1_99 == ((float) var_1_36)) : 1)) && (var_1_52 ? (var_1_100 == ((signed char) var_1_40)) : (var_1_100 == ((signed char) var_1_62)))) && (var_1_41 ? (var_1_101 == ((unsigned char) var_1_54)) : 1)) && (var_1_102 == ((signed char) var_1_66))) && (var_1_101 ? (var_1_103 == ((signed long int) var_1_47)) : (var_1_103 == ((signed long int) -8)))) && (var_1_104 == ((unsigned short int) var_1_67))) && (var_1_109 ? (var_1_105 == ((signed short int) var_1_11)) : (var_1_105 == ((signed short int) -2)))) && (var_1_53 ? (var_1_106 == ((unsigned short int) var_1_84)) : (var_1_106 == ((unsigned short int) var_1_68)))) && (var_1_107 == ((signed long int) var_1_91))) && (var_1_69 ? (var_1_108 == ((unsigned char) var_1_19)) : (var_1_108 == ((unsigned char) var_1_22)))) && (var_1_109 == ((unsigned char) var_1_43))) && (var_1_110 == ((unsigned char) var_1_23))) && (var_1_109 ? (var_1_111 == ((unsigned char) var_1_66)) : 1)) && ((var_1_87 >= (var_1_21 - var_1_23)) ? (((var_1_7 > 32) || (var_1_9 <= var_1_32)) ? (var_1_112 == ((unsigned char) var_1_47)) : 1) : 1)) && (var_1_113 == ((unsigned short int) var_1_12))
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
