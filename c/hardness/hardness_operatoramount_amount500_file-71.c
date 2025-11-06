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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch71Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 4;
unsigned char var_1_5 = 4;
float var_1_6 = 63.375;
float var_1_7 = 2.875;
float var_1_8 = 128.6;
float var_1_9 = 128.75;
signed char var_1_10 = 1;
signed char var_1_12 = 4;
signed char var_1_13 = 32;
signed char var_1_14 = 32;
signed char var_1_15 = 4;
unsigned char var_1_16 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 2;
unsigned char var_1_23 = 128;
signed char var_1_24 = -100;
signed char var_1_25 = 5;
float var_1_26 = 16.5;
float var_1_27 = 63.5;
double var_1_28 = 0.75;
double var_1_29 = 9.25;
double var_1_30 = 0.0;
double var_1_31 = 127.25;
double var_1_32 = 1.25;
float var_1_33 = 0.95;
unsigned char var_1_34 = 128;
float var_1_35 = 99.6;
unsigned long int var_1_36 = 5;
signed char var_1_37 = 0;
float var_1_38 = 0.25;
unsigned short int var_1_39 = 0;
unsigned short int var_1_40 = 50000;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned long int var_1_43 = 5;
unsigned long int var_1_45 = 1000000000;
unsigned long int var_1_46 = 1000000000;
unsigned long int var_1_47 = 1000000000;
unsigned long int var_1_48 = 1000000000;
float var_1_49 = 15.65;
signed char var_1_50 = 5;
signed char var_1_51 = 10;
unsigned char var_1_52 = 16;
unsigned char var_1_53 = 100;
unsigned char var_1_54 = 100;
double var_1_55 = 10.75;
double var_1_56 = 4.5;
double var_1_57 = 64.9;
signed long int var_1_58 = 8;
signed long int var_1_60 = 1000000000;
double var_1_61 = 31.9;
unsigned char var_1_62 = 1;
unsigned long int var_1_63 = 2639723244;
unsigned short int var_1_64 = 50;
unsigned char var_1_65 = 1;
unsigned char var_1_67 = 64;
signed long int var_1_68 = 5;
signed short int var_1_69 = 32;
double var_1_70 = 8.5;
signed short int var_1_71 = 16;
unsigned short int var_1_72 = 4;
unsigned short int var_1_73 = 10000;
unsigned short int var_1_74 = 10000;
unsigned long int var_1_75 = 256;
unsigned long int var_1_76 = 3237160924;
float var_1_77 = 199.5;
unsigned char var_1_78 = 128;
float var_1_79 = 64.6;
signed short int var_1_80 = 0;
signed short int var_1_81 = 5;
signed short int var_1_82 = -10;
float var_1_83 = 256.5;
unsigned long int var_1_84 = 0;
float var_1_85 = 128.5;
unsigned long int var_1_86 = 0;
unsigned long int var_1_87 = 1705175910;
unsigned short int var_1_88 = 1;
unsigned short int var_1_89 = 32;
unsigned char var_1_90 = 1;
unsigned char var_1_91 = 1;
signed long int var_1_92 = 2;
signed char var_1_93 = -50;
unsigned char var_1_94 = 0;
float var_1_95 = 9.45;
double var_1_96 = 4.75;
double var_1_97 = 0.0;
float var_1_98 = 8.5;
float var_1_99 = 31.25;
double var_1_100 = 10.5;
unsigned short int var_1_101 = 5;
double var_1_103 = 10000000.5;
signed char var_1_104 = -16;
unsigned char var_1_105 = 1;
signed char var_1_106 = 5;
unsigned char var_1_107 = 1;
signed long int var_1_108 = -128;
signed short int var_1_109 = -5;
signed long int var_1_110 = -64;
unsigned char var_1_111 = 1;
unsigned char var_1_112 = 16;
unsigned char var_1_113 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 4;
float last_1_var_1_6 = 63.375;
double last_1_var_1_29 = 9.25;
float last_1_var_1_38 = 0.25;
unsigned short int last_1_var_1_39 = 0;
unsigned long int last_1_var_1_43 = 5;
float last_1_var_1_49 = 15.65;
unsigned char last_1_var_1_52 = 16;
double last_1_var_1_55 = 10.75;
unsigned short int last_1_var_1_72 = 4;
unsigned long int last_1_var_1_75 = 256;
unsigned char last_1_var_1_78 = 128;
unsigned char last_1_var_1_94 = 0;
signed long int last_1_var_1_108 = -128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req21Batch71Amount500
	if (last_1_var_1_94) {
		var_1_58 = (last_1_var_1_108 - ((var_1_60 - 2) + var_1_15));
	}


	// From: Req39Batch71Amount500
	if (var_1_81 >= ((var_1_76 / var_1_34) + last_1_var_1_75)) {
		if (64.2 <= last_1_var_1_6) {
			var_1_88 = (last_1_var_1_1 + var_1_89);
		}
	} else {
		if (var_1_53 > var_1_46) {
			var_1_88 = (var_1_54 + ((var_1_34 + var_1_53) + var_1_71));
		}
	}


	// From: Req36Batch71Amount500
	unsigned long int stepLocal_25 = var_1_76 - var_1_88;
	if (stepLocal_25 >= (- var_1_45)) {
		if ((var_1_56 - (min (var_1_31 , var_1_30))) == var_1_9) {
			var_1_84 = (abs (var_1_15));
		}
	}


	// From: Req38Batch71Amount500
	if (var_1_42) {
		if ((last_1_var_1_55 * var_1_8) < last_1_var_1_29) {
			var_1_86 = last_1_var_1_43;
		}
	} else {
		if ((last_1_var_1_38 * last_1_var_1_29) > (abs (last_1_var_1_29))) {
			var_1_86 = (min (var_1_47 , (abs (last_1_var_1_78))));
		} else {
			var_1_86 = ((min (var_1_80 , (max (last_1_var_1_43 , var_1_48)))) + (abs (var_1_87 - last_1_var_1_52)));
		}
	}


	// From: Req2Batch71Amount500
	var_1_6 = (min (((var_1_7 - 31.5f) + (max (var_1_8 , 100.5f))) , var_1_9));


	// From: Req6Batch71Amount500
	var_1_24 = (((var_1_15 - 1) + var_1_25) + var_1_14);


	// From: Req8Batch71Amount500
	unsigned char stepLocal_5 = var_1_23;
	if ((abs (min (var_1_15 , var_1_12))) <= stepLocal_5) {
		var_1_28 = var_1_8;
	}


	// From: Req10Batch71Amount500
	unsigned char stepLocal_7 = var_1_23;
	signed long int stepLocal_6 = var_1_34 - var_1_14;
	if (var_1_23 <= stepLocal_6) {
		if ((min ((var_1_14 * var_1_15) , (var_1_86 - var_1_5))) <= stepLocal_7) {
			var_1_33 = var_1_8;
		} else {
			var_1_33 = (max ((var_1_7 + var_1_32) , (var_1_35 - var_1_31)));
		}
	}


	// From: Req12Batch71Amount500
	var_1_37 = (((var_1_15 + 4) + var_1_14) - var_1_13);


	// From: Req13Batch71Amount500
	if (var_1_20) {
		var_1_38 = (abs (99.25f));
	} else {
		var_1_38 = (var_1_32 + 9.99999999999975E12f);
	}


	// From: Req15Batch71Amount500
	var_1_41 = (var_1_18 || (var_1_19 || var_1_42));


	// From: Req17Batch71Amount500
	if (var_1_12 < (var_1_14 / var_1_50)) {
		var_1_49 = (abs (var_1_9));
	} else {
		if (var_1_28 != last_1_var_1_49) {
			var_1_49 = (199.5f + var_1_32);
		} else {
			var_1_49 = (var_1_32 + var_1_31);
		}
	}


	// From: Req22Batch71Amount500
	unsigned char stepLocal_10 = var_1_19;
	unsigned char stepLocal_9 = var_1_53;
	if (stepLocal_10 || var_1_42) {
		if (var_1_45 == stepLocal_9) {
			var_1_61 = ((min (var_1_57 , var_1_56)) + (abs (var_1_8)));
		}
	}


	// From: Req26Batch71Amount500
	var_1_67 = var_1_54;


	// From: Req27Batch71Amount500
	var_1_68 = var_1_25;


	// From: Req33Batch71Amount500
	if (var_1_42) {
		if (((var_1_53 - var_1_13) >> (var_1_80 + var_1_81)) >= var_1_46) {
			var_1_79 = (abs (var_1_35));
		}
	} else {
		if (var_1_84 > var_1_48) {
			var_1_79 = (abs (4.25f));
		}
	}


	// From: Req37Batch71Amount500
	if ((var_1_13 ^ var_1_5) >= (min ((max (var_1_80 , var_1_48)) , 1))) {
		var_1_85 = var_1_8;
	} else {
		var_1_85 = (min (var_1_27 , (var_1_31 + var_1_56)));
	}


	// From: Req42Batch71Amount500
	if (var_1_18) {
		if (var_1_50 < var_1_58) {
			var_1_93 = (var_1_81 - (min (var_1_13 , (abs (var_1_15)))));
		} else {
			var_1_93 = (var_1_81 + var_1_25);
		}
	} else {
		var_1_93 = (max ((var_1_80 + var_1_15) , -25));
	}


	// From: Req51Batch71Amount500
	if (var_1_42) {
		var_1_105 = var_1_19;
	}


	// From: Req53Batch71Amount500
	if (var_1_41) {
		var_1_107 = var_1_20;
	}


	// From: Req54Batch71Amount500
	if (var_1_19) {
		var_1_108 = last_1_var_1_108;
	} else {
		var_1_108 = var_1_40;
	}


	// From: Req57Batch71Amount500
	var_1_111 = var_1_91;


	// From: Req58Batch71Amount500
	var_1_112 = var_1_80;


	// From: Req59Batch71Amount500
	var_1_113 = 0;


	// From: Req24Batch71Amount500
	if (var_1_28 <= (abs (var_1_57))) {
		if (var_1_41) {
			var_1_64 = (min (var_1_84 , var_1_23));
		} else {
			var_1_64 = (min (var_1_86 , (min ((var_1_40 - var_1_14) , var_1_23))));
		}
	} else {
		var_1_64 = (61601 - (var_1_54 + var_1_14));
	}


	// From: Req19Batch71Amount500
	if (! var_1_107) {
		var_1_52 = (((var_1_53 - var_1_15) + var_1_54) - (min (var_1_14 , var_1_13)));
	}


	// From: Req34Batch71Amount500
	if (! var_1_107) {
		var_1_82 = (var_1_5 + var_1_15);
	}


	// From: Req44Batch71Amount500
	if (var_1_105) {
		var_1_95 = var_1_9;
	}


	// From: Req48Batch71Amount500
	if (var_1_41) {
		var_1_101 = var_1_14;
	} else {
		var_1_101 = var_1_108;
	}


	// From: Req49Batch71Amount500
	if (var_1_105) {
		var_1_103 = var_1_57;
	} else {
		var_1_103 = var_1_99;
	}


	// From: Req50Batch71Amount500
	if (var_1_105) {
		var_1_104 = var_1_12;
	} else {
		var_1_104 = var_1_80;
	}


	// From: Req52Batch71Amount500
	if (var_1_111) {
		var_1_106 = var_1_15;
	} else {
		var_1_106 = var_1_25;
	}


	// From: Req56Batch71Amount500
	if (var_1_103 != 1.1f) {
		var_1_110 = (min (var_1_23 , var_1_53));
	}


	// From: Req43Batch71Amount500
	unsigned long int stepLocal_27 = var_1_86;
	signed long int stepLocal_26 = var_1_5 / (min (var_1_14 , var_1_23));
	if ((max (var_1_58 , var_1_110)) < stepLocal_27) {
		if (var_1_107) {
			var_1_94 = (! var_1_20);
		}
	} else {
		if (stepLocal_26 == (max (var_1_45 , var_1_48))) {
			var_1_94 = (! ((var_1_18 || var_1_42) || var_1_19));
		}
	}


	// From: Req5Batch71Amount500
	signed char stepLocal_4 = var_1_12;
	signed char stepLocal_3 = var_1_106;
	if (var_1_20) {
		if (var_1_13 <= stepLocal_4) {
			if (stepLocal_3 > var_1_88) {
				var_1_21 = (var_1_14 + var_1_13);
			} else {
				var_1_21 = (var_1_23 - var_1_14);
			}
		}
	} else {
		var_1_21 = var_1_13;
	}


	// From: Req9Batch71Amount500
	if (var_1_103 <= ((min (var_1_9 , var_1_7)) * (- var_1_61))) {
		var_1_29 = (min (((var_1_30 - var_1_7) - (var_1_31 + var_1_32)) , var_1_27));
	} else {
		var_1_29 = (var_1_7 + (var_1_32 - var_1_31));
	}


	// From: Req23Batch71Amount500
	unsigned long int stepLocal_11 = var_1_46 + -16;
	if (var_1_29 > var_1_32) {
		if (stepLocal_11 == (var_1_63 - var_1_47)) {
			var_1_62 = (var_1_23 - var_1_13);
		} else {
			var_1_62 = ((var_1_15 + var_1_14) + var_1_13);
		}
	}


	// From: Req25Batch71Amount500
	if (var_1_23 <= (var_1_54 + var_1_48)) {
		var_1_65 = (! (! var_1_20));
	} else {
		if (var_1_19) {
			if (var_1_38 <= var_1_7) {
				var_1_65 = ((! (var_1_48 < var_1_60)) || var_1_20);
			}
		} else {
			if (var_1_82 != ((var_1_108 / -5) / var_1_54)) {
				var_1_65 = (! (var_1_42 || (! var_1_20)));
			} else {
				var_1_65 = ((var_1_6 < var_1_27) || var_1_20);
			}
		}
	}


	// From: Req31Batch71Amount500
	signed long int stepLocal_21 = var_1_101 * 2;
	unsigned char stepLocal_20 = var_1_41;
	if (stepLocal_20 || (-50 >= var_1_47)) {
		if (stepLocal_21 < (var_1_74 << var_1_45)) {
			var_1_77 = (var_1_8 + (var_1_31 - var_1_32));
		}
	} else {
		if (var_1_19) {
			var_1_77 = 8.75f;
		} else {
			var_1_77 = ((min (var_1_30 , var_1_7)) - var_1_31);
		}
	}


	// From: Req32Batch71Amount500
	unsigned short int stepLocal_22 = var_1_101;
	if (var_1_5 < stepLocal_22) {
		var_1_78 = (min (((max (var_1_23 , 128)) - var_1_15) , var_1_14));
	} else {
		var_1_78 = (min (4 , var_1_23));
	}


	// From: Req41Batch71Amount500
	if (var_1_91) {
		var_1_92 = ((var_1_73 - var_1_40) + (var_1_101 - (var_1_89 + var_1_54)));
	} else {
		var_1_92 = (min (var_1_23 , var_1_15));
	}


	// From: Req55Batch71Amount500
	unsigned short int stepLocal_28 = var_1_101;
	if (stepLocal_28 >= (var_1_92 & var_1_5)) {
		var_1_109 = var_1_101;
	}


	// From: Req29Batch71Amount500
	unsigned long int stepLocal_14 = var_1_48 + -4;
	unsigned char stepLocal_13 = var_1_20;
	if (((var_1_92 + var_1_112) >= (16 | var_1_86)) && stepLocal_13) {
		var_1_72 = (min (16 , (min (last_1_var_1_72 , var_1_23))));
	} else {
		if ((128 - (abs (var_1_14))) > stepLocal_14) {
			var_1_72 = (((var_1_73 + var_1_74) - var_1_82) + var_1_53);
		}
	}


	// From: Req4Batch71Amount500
	unsigned char stepLocal_2 = var_1_67;
	signed char stepLocal_1 = var_1_15;
	signed long int stepLocal_0 = var_1_67 + var_1_14;
	if (stepLocal_1 > var_1_86) {
		if (var_1_62 > stepLocal_2) {
			if (var_1_29 > (var_1_8 + 50.5)) {
				var_1_16 = (var_1_111 && (var_1_18 || var_1_19));
			} else {
				var_1_16 = (! var_1_20);
			}
		} else {
			var_1_16 = ((64 > -10) || var_1_20);
		}
	} else {
		if (stepLocal_0 >= var_1_12) {
			if (var_1_29 == var_1_7) {
				var_1_16 = ((var_1_18 || (! var_1_20)) || var_1_19);
			}
		} else {
			if (var_1_20) {
				var_1_16 = (var_1_18 && var_1_19);
			} else {
				var_1_16 = var_1_18;
			}
		}
	}


	// From: Req14Batch71Amount500
	if (! var_1_18) {
		if (var_1_19) {
			var_1_39 = var_1_14;
		} else {
			var_1_39 = (max ((var_1_40 - 4) , ((last_1_var_1_39 + var_1_109) + var_1_23)));
		}
	} else {
		var_1_39 = (var_1_40 - var_1_13);
	}


	// From: Req30Batch71Amount500
	signed long int stepLocal_19 = var_1_54 - 25;
	unsigned long int stepLocal_18 = abs (var_1_63);
	signed long int stepLocal_17 = var_1_34 - var_1_14;
	unsigned long int stepLocal_16 = var_1_47;
	unsigned long int stepLocal_15 = min ((var_1_24 + var_1_60) , var_1_45);
	if (var_1_23 <= stepLocal_17) {
		if (stepLocal_18 >= ((var_1_62 / var_1_73) * (var_1_71 * 25u))) {
			if ((- (- var_1_74)) > stepLocal_16) {
				var_1_75 = (max (var_1_74 , var_1_62));
			} else {
				if ((last_1_var_1_75 % var_1_50) != stepLocal_15) {
					var_1_75 = ((max (var_1_39 , var_1_74)) + var_1_34);
				} else {
					var_1_75 = (var_1_23 + (max ((max (var_1_62 , var_1_13)) , var_1_15)));
				}
			}
		} else {
			if (stepLocal_19 <= (var_1_73 - var_1_92)) {
				var_1_75 = (var_1_76 - var_1_34);
			} else {
				var_1_75 = var_1_15;
			}
		}
	}


	// From: Req46Batch71Amount500
	if (var_1_16) {
		var_1_98 = var_1_57;
	} else {
		var_1_98 = var_1_99;
	}


	// From: Req11Batch71Amount500
	if ((- var_1_35) > var_1_9) {
		var_1_36 = (var_1_72 + var_1_64);
	} else {
		var_1_36 = ((var_1_5 + var_1_72) + var_1_15);
	}


	// From: Req3Batch71Amount500
	if (var_1_16) {
		var_1_10 = var_1_12;
	} else {
		var_1_10 = (((min (2 , var_1_13)) + (var_1_14 - var_1_15)) - 4);
	}


	// From: Req28Batch71Amount500
	unsigned long int stepLocal_12 = var_1_75;
	if ((var_1_27 + var_1_103) >= (var_1_30 / var_1_70)) {
		var_1_69 = var_1_62;
	} else {
		if (var_1_78 != stepLocal_12) {
			var_1_69 = (var_1_13 - (var_1_62 + var_1_71));
		} else {
			var_1_69 = (var_1_75 - var_1_5);
		}
	}


	// From: Req40Batch71Amount500
	if (var_1_53 >= ((max (var_1_36 , 4)) + var_1_5)) {
		var_1_90 = (var_1_20 && var_1_91);
	}


	// From: Req45Batch71Amount500
	if (var_1_52 > var_1_15) {
		var_1_96 = (abs (var_1_57));
	} else {
		if (var_1_91) {
			if (var_1_32 > (var_1_57 - (var_1_97 - var_1_31))) {
				var_1_96 = (var_1_57 - var_1_30);
			} else {
				if (16u <= var_1_36) {
					var_1_96 = (max (32.6 , var_1_27));
				}
			}
		} else {
			if (var_1_14 != var_1_64) {
				var_1_96 = var_1_8;
			} else {
				var_1_96 = var_1_35;
			}
		}
	}


	// From: Req47Batch71Amount500
	if (var_1_90) {
		var_1_100 = var_1_35;
	} else {
		var_1_100 = var_1_27;
	}


	// From: Req16Batch71Amount500
	signed long int stepLocal_8 = var_1_5 | var_1_58;
	if (stepLocal_8 > (var_1_40 * (var_1_36 * var_1_23))) {
		var_1_43 = (((var_1_45 + var_1_46) + (var_1_47 + var_1_48)) - var_1_14);
	} else {
		var_1_43 = (abs (var_1_40));
	}


	// From: Req20Batch71Amount500
	if (var_1_88 >= var_1_43) {
		var_1_55 = (((var_1_56 + var_1_57) - var_1_7) + var_1_8);
	}


	// From: Req1Batch71Amount500
	if (var_1_55 == var_1_103) {
		var_1_1 = (min (var_1_5 , 0));
	}


	// From: Req7Batch71Amount500
	if ((var_1_55 != 49.5) || var_1_90) {
		var_1_26 = (max ((var_1_7 - var_1_27) , var_1_9));
	}


	// From: Req18Batch71Amount500
	if (((var_1_26 / -0.8) / 16.6) > (var_1_9 * var_1_77)) {
		var_1_51 = (min ((min (var_1_15 , var_1_13)) , (abs (var_1_14))));
	}


	// From: Req35Batch71Amount500
	unsigned char stepLocal_24 = ! var_1_90;
	signed long int stepLocal_23 = var_1_34 - var_1_13;
	if (stepLocal_23 >= var_1_108) {
		if (stepLocal_24 || (var_1_63 > (var_1_81 & var_1_15))) {
			var_1_83 = ((var_1_31 - (min (var_1_57 , var_1_32))) + var_1_8);
		}
	} else {
		var_1_83 = (max (var_1_7 , (min (var_1_27 , 15.6f))));
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 31);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 31);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 127);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -31);
	assume_abort_if_not(var_1_25 <= 31);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 4611686.018427383000e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 127);
	assume_abort_if_not(var_1_34 <= 255);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 32767);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 536870911);
	assume_abort_if_not(var_1_45 <= 1073741824);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 536870912);
	assume_abort_if_not(var_1_46 <= 1073741823);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 536870912);
	assume_abort_if_not(var_1_47 <= 1073741824);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 536870912);
	assume_abort_if_not(var_1_48 <= 1073741823);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= -128);
	assume_abort_if_not(var_1_50 <= 127);
	assume_abort_if_not(var_1_50 != 0);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 95);
	assume_abort_if_not(var_1_53 <= 127);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 64);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691400e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691400e+12F && var_1_57 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_60 >= 536870911);
	assume_abort_if_not(var_1_60 <= 1073741823);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 2147483647);
	assume_abort_if_not(var_1_63 <= 4294967295);
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= -922337.2036854776000e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854776000e+12F && var_1_70 >= 1.0e-20F ));
	assume_abort_if_not(var_1_70 != 0.0F);
	var_1_71 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 16383);
	var_1_73 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_73 >= 8191);
	assume_abort_if_not(var_1_73 <= 16384);
	var_1_74 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_74 >= 8192);
	assume_abort_if_not(var_1_74 <= 16383);
	var_1_76 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_76 >= 2147483647);
	assume_abort_if_not(var_1_76 <= 4294967294);
	var_1_80 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 15);
	var_1_81 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_81 >= 1);
	assume_abort_if_not(var_1_81 <= 15);
	var_1_87 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_87 >= 1073741823);
	assume_abort_if_not(var_1_87 <= 2147483647);
	var_1_89 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_89 >= 0);
	assume_abort_if_not(var_1_89 <= 32767);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 1);
	assume_abort_if_not(var_1_91 <= 1);
	var_1_97 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_97 >= 4611686.018427388000e+12F && var_1_97 <= -1.0e-20F) || (var_1_97 <= 9223372.036854776000e+12F && var_1_97 >= 1.0e-20F ));
	var_1_99 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_99 >= -922337.2036854766000e+13F && var_1_99 <= -1.0e-20F) || (var_1_99 <= 9223372.036854766000e+12F && var_1_99 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_108 = var_1_108;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_55 == var_1_103) ? (var_1_1 == ((unsigned char) (min (var_1_5 , 0)))) : 1) && (var_1_6 == ((float) (min (((var_1_7 - 31.5f) + (max (var_1_8 , 100.5f))) , var_1_9))))) && (var_1_16 ? (var_1_10 == ((signed char) var_1_12)) : (var_1_10 == ((signed char) (((min (2 , var_1_13)) + (var_1_14 - var_1_15)) - 4))))) && ((var_1_15 > var_1_86) ? ((var_1_62 > var_1_67) ? ((var_1_29 > (var_1_8 + 50.5)) ? (var_1_16 == ((unsigned char) (var_1_111 && (var_1_18 || var_1_19)))) : (var_1_16 == ((unsigned char) (! var_1_20)))) : (var_1_16 == ((unsigned char) ((64 > -10) || var_1_20)))) : (((var_1_67 + var_1_14) >= var_1_12) ? ((var_1_29 == var_1_7) ? (var_1_16 == ((unsigned char) ((var_1_18 || (! var_1_20)) || var_1_19))) : 1) : (var_1_20 ? (var_1_16 == ((unsigned char) (var_1_18 && var_1_19))) : (var_1_16 == ((unsigned char) var_1_18)))))) && (var_1_20 ? ((var_1_13 <= var_1_12) ? ((var_1_106 > var_1_88) ? (var_1_21 == ((unsigned char) (var_1_14 + var_1_13))) : (var_1_21 == ((unsigned char) (var_1_23 - var_1_14)))) : 1) : (var_1_21 == ((unsigned char) var_1_13)))) && (var_1_24 == ((signed char) (((var_1_15 - 1) + var_1_25) + var_1_14)))) && (((var_1_55 != 49.5) || var_1_90) ? (var_1_26 == ((float) (max ((var_1_7 - var_1_27) , var_1_9)))) : 1)) && (((abs (min (var_1_15 , var_1_12))) <= var_1_23) ? (var_1_28 == ((double) var_1_8)) : 1)) && ((var_1_103 <= ((min (var_1_9 , var_1_7)) * (- var_1_61))) ? (var_1_29 == ((double) (min (((var_1_30 - var_1_7) - (var_1_31 + var_1_32)) , var_1_27)))) : (var_1_29 == ((double) (var_1_7 + (var_1_32 - var_1_31)))))) && ((var_1_23 <= (var_1_34 - var_1_14)) ? (((min ((var_1_14 * var_1_15) , (var_1_86 - var_1_5))) <= var_1_23) ? (var_1_33 == ((float) var_1_8)) : (var_1_33 == ((float) (max ((var_1_7 + var_1_32) , (var_1_35 - var_1_31)))))) : 1)) && (((- var_1_35) > var_1_9) ? (var_1_36 == ((unsigned long int) (var_1_72 + var_1_64))) : (var_1_36 == ((unsigned long int) ((var_1_5 + var_1_72) + var_1_15))))) && (var_1_37 == ((signed char) (((var_1_15 + 4) + var_1_14) - var_1_13)))) && (var_1_20 ? (var_1_38 == ((float) (abs (99.25f)))) : (var_1_38 == ((float) (var_1_32 + 9.99999999999975E12f))))) && ((! var_1_18) ? (var_1_19 ? (var_1_39 == ((unsigned short int) var_1_14)) : (var_1_39 == ((unsigned short int) (max ((var_1_40 - 4) , ((last_1_var_1_39 + var_1_109) + var_1_23)))))) : (var_1_39 == ((unsigned short int) (var_1_40 - var_1_13))))) && (var_1_41 == ((unsigned char) (var_1_18 || (var_1_19 || var_1_42))))) && (((var_1_5 | var_1_58) > (var_1_40 * (var_1_36 * var_1_23))) ? (var_1_43 == ((unsigned long int) (((var_1_45 + var_1_46) + (var_1_47 + var_1_48)) - var_1_14))) : (var_1_43 == ((unsigned long int) (abs (var_1_40)))))) && ((var_1_12 < (var_1_14 / var_1_50)) ? (var_1_49 == ((float) (abs (var_1_9)))) : ((var_1_28 != last_1_var_1_49) ? (var_1_49 == ((float) (199.5f + var_1_32))) : (var_1_49 == ((float) (var_1_32 + var_1_31)))))) && ((((var_1_26 / -0.8) / 16.6) > (var_1_9 * var_1_77)) ? (var_1_51 == ((signed char) (min ((min (var_1_15 , var_1_13)) , (abs (var_1_14)))))) : 1)) && ((! var_1_107) ? (var_1_52 == ((unsigned char) (((var_1_53 - var_1_15) + var_1_54) - (min (var_1_14 , var_1_13))))) : 1)) && ((var_1_88 >= var_1_43) ? (var_1_55 == ((double) (((var_1_56 + var_1_57) - var_1_7) + var_1_8))) : 1)) && (last_1_var_1_94 ? (var_1_58 == ((signed long int) (last_1_var_1_108 - ((var_1_60 - 2) + var_1_15)))) : 1)) && ((var_1_19 || var_1_42) ? ((var_1_45 == var_1_53) ? (var_1_61 == ((double) ((min (var_1_57 , var_1_56)) + (abs (var_1_8))))) : 1) : 1)) && ((var_1_29 > var_1_32) ? (((var_1_46 + -16) == (var_1_63 - var_1_47)) ? (var_1_62 == ((unsigned char) (var_1_23 - var_1_13))) : (var_1_62 == ((unsigned char) ((var_1_15 + var_1_14) + var_1_13)))) : 1)) && ((var_1_28 <= (abs (var_1_57))) ? (var_1_41 ? (var_1_64 == ((unsigned short int) (min (var_1_84 , var_1_23)))) : (var_1_64 == ((unsigned short int) (min (var_1_86 , (min ((var_1_40 - var_1_14) , var_1_23))))))) : (var_1_64 == ((unsigned short int) (61601 - (var_1_54 + var_1_14)))))) && ((var_1_23 <= (var_1_54 + var_1_48)) ? (var_1_65 == ((unsigned char) (! (! var_1_20)))) : (var_1_19 ? ((var_1_38 <= var_1_7) ? (var_1_65 == ((unsigned char) ((! (var_1_48 < var_1_60)) || var_1_20))) : 1) : ((var_1_82 != ((var_1_108 / -5) / var_1_54)) ? (var_1_65 == ((unsigned char) (! (var_1_42 || (! var_1_20))))) : (var_1_65 == ((unsigned char) ((var_1_6 < var_1_27) || var_1_20))))))) && (var_1_67 == ((unsigned char) var_1_54))) && (var_1_68 == ((signed long int) var_1_25))) && (((var_1_27 + var_1_103) >= (var_1_30 / var_1_70)) ? (var_1_69 == ((signed short int) var_1_62)) : ((var_1_78 != var_1_75) ? (var_1_69 == ((signed short int) (var_1_13 - (var_1_62 + var_1_71)))) : (var_1_69 == ((signed short int) (var_1_75 - var_1_5)))))) && ((((var_1_92 + var_1_112) >= (16 | var_1_86)) && var_1_20) ? (var_1_72 == ((unsigned short int) (min (16 , (min (last_1_var_1_72 , var_1_23)))))) : (((128 - (abs (var_1_14))) > (var_1_48 + -4)) ? (var_1_72 == ((unsigned short int) (((var_1_73 + var_1_74) - var_1_82) + var_1_53))) : 1))) && ((var_1_23 <= (var_1_34 - var_1_14)) ? (((abs (var_1_63)) >= ((var_1_62 / var_1_73) * (var_1_71 * 25u))) ? (((- (- var_1_74)) > var_1_47) ? (var_1_75 == ((unsigned long int) (max (var_1_74 , var_1_62)))) : (((last_1_var_1_75 % var_1_50) != (min ((var_1_24 + var_1_60) , var_1_45))) ? (var_1_75 == ((unsigned long int) ((max (var_1_39 , var_1_74)) + var_1_34))) : (var_1_75 == ((unsigned long int) (var_1_23 + (max ((max (var_1_62 , var_1_13)) , var_1_15))))))) : (((var_1_54 - 25) <= (var_1_73 - var_1_92)) ? (var_1_75 == ((unsigned long int) (var_1_76 - var_1_34))) : (var_1_75 == ((unsigned long int) var_1_15)))) : 1)) && ((var_1_41 || (-50 >= var_1_47)) ? (((var_1_101 * 2) < (var_1_74 << var_1_45)) ? (var_1_77 == ((float) (var_1_8 + (var_1_31 - var_1_32)))) : 1) : (var_1_19 ? (var_1_77 == ((float) 8.75f)) : (var_1_77 == ((float) ((min (var_1_30 , var_1_7)) - var_1_31)))))) && ((var_1_5 < var_1_101) ? (var_1_78 == ((unsigned char) (min (((max (var_1_23 , 128)) - var_1_15) , var_1_14)))) : (var_1_78 == ((unsigned char) (min (4 , var_1_23)))))) && (var_1_42 ? ((((var_1_53 - var_1_13) >> (var_1_80 + var_1_81)) >= var_1_46) ? (var_1_79 == ((float) (abs (var_1_35)))) : 1) : ((var_1_84 > var_1_48) ? (var_1_79 == ((float) (abs (4.25f)))) : 1))) && ((! var_1_107) ? (var_1_82 == ((signed short int) (var_1_5 + var_1_15))) : 1)) && (((var_1_34 - var_1_13) >= var_1_108) ? (((! var_1_90) || (var_1_63 > (var_1_81 & var_1_15))) ? (var_1_83 == ((float) ((var_1_31 - (min (var_1_57 , var_1_32))) + var_1_8))) : 1) : (var_1_83 == ((float) (max (var_1_7 , (min (var_1_27 , 15.6f)))))))) && (((var_1_76 - var_1_88) >= (- var_1_45)) ? (((var_1_56 - (min (var_1_31 , var_1_30))) == var_1_9) ? (var_1_84 == ((unsigned long int) (abs (var_1_15)))) : 1) : 1)) && (((var_1_13 ^ var_1_5) >= (min ((max (var_1_80 , var_1_48)) , 1))) ? (var_1_85 == ((float) var_1_8)) : (var_1_85 == ((float) (min (var_1_27 , (var_1_31 + var_1_56))))))) && (var_1_42 ? (((last_1_var_1_55 * var_1_8) < last_1_var_1_29) ? (var_1_86 == ((unsigned long int) last_1_var_1_43)) : 1) : (((last_1_var_1_38 * last_1_var_1_29) > (abs (last_1_var_1_29))) ? (var_1_86 == ((unsigned long int) (min (var_1_47 , (abs (last_1_var_1_78)))))) : (var_1_86 == ((unsigned long int) ((min (var_1_80 , (max (last_1_var_1_43 , var_1_48)))) + (abs (var_1_87 - last_1_var_1_52)))))))) && ((var_1_81 >= ((var_1_76 / var_1_34) + last_1_var_1_75)) ? ((64.2 <= last_1_var_1_6) ? (var_1_88 == ((unsigned short int) (last_1_var_1_1 + var_1_89))) : 1) : ((var_1_53 > var_1_46) ? (var_1_88 == ((unsigned short int) (var_1_54 + ((var_1_34 + var_1_53) + var_1_71)))) : 1))) && ((var_1_53 >= ((max (var_1_36 , 4)) + var_1_5)) ? (var_1_90 == ((unsigned char) (var_1_20 && var_1_91))) : 1)) && (var_1_91 ? (var_1_92 == ((signed long int) ((var_1_73 - var_1_40) + (var_1_101 - (var_1_89 + var_1_54))))) : (var_1_92 == ((signed long int) (min (var_1_23 , var_1_15)))))) && (var_1_18 ? ((var_1_50 < var_1_58) ? (var_1_93 == ((signed char) (var_1_81 - (min (var_1_13 , (abs (var_1_15))))))) : (var_1_93 == ((signed char) (var_1_81 + var_1_25)))) : (var_1_93 == ((signed char) (max ((var_1_80 + var_1_15) , -25)))))) && (((max (var_1_58 , var_1_110)) < var_1_86) ? (var_1_107 ? (var_1_94 == ((unsigned char) (! var_1_20))) : 1) : (((var_1_5 / (min (var_1_14 , var_1_23))) == (max (var_1_45 , var_1_48))) ? (var_1_94 == ((unsigned char) (! ((var_1_18 || var_1_42) || var_1_19)))) : 1))) && (var_1_105 ? (var_1_95 == ((float) var_1_9)) : 1)) && ((var_1_52 > var_1_15) ? (var_1_96 == ((double) (abs (var_1_57)))) : (var_1_91 ? ((var_1_32 > (var_1_57 - (var_1_97 - var_1_31))) ? (var_1_96 == ((double) (var_1_57 - var_1_30))) : ((16u <= var_1_36) ? (var_1_96 == ((double) (max (32.6 , var_1_27)))) : 1)) : ((var_1_14 != var_1_64) ? (var_1_96 == ((double) var_1_8)) : (var_1_96 == ((double) var_1_35)))))) && (var_1_16 ? (var_1_98 == ((float) var_1_57)) : (var_1_98 == ((float) var_1_99)))) && (var_1_90 ? (var_1_100 == ((double) var_1_35)) : (var_1_100 == ((double) var_1_27)))) && (var_1_41 ? (var_1_101 == ((unsigned short int) var_1_14)) : (var_1_101 == ((unsigned short int) var_1_108)))) && (var_1_105 ? (var_1_103 == ((double) var_1_57)) : (var_1_103 == ((double) var_1_99)))) && (var_1_105 ? (var_1_104 == ((signed char) var_1_12)) : (var_1_104 == ((signed char) var_1_80)))) && (var_1_42 ? (var_1_105 == ((unsigned char) var_1_19)) : 1)) && (var_1_111 ? (var_1_106 == ((signed char) var_1_15)) : (var_1_106 == ((signed char) var_1_25)))) && (var_1_41 ? (var_1_107 == ((unsigned char) var_1_20)) : 1)) && (var_1_19 ? (var_1_108 == ((signed long int) last_1_var_1_108)) : (var_1_108 == ((signed long int) var_1_40)))) && ((var_1_101 >= (var_1_92 & var_1_5)) ? (var_1_109 == ((signed short int) var_1_101)) : 1)) && ((var_1_103 != 1.1f) ? (var_1_110 == ((signed long int) (min (var_1_23 , var_1_53)))) : 1)) && (var_1_111 == ((unsigned char) var_1_91))) && (var_1_112 == ((unsigned char) var_1_80))) && (var_1_113 == ((unsigned char) 0))
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
