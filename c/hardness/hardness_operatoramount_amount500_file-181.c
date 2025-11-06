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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch181Amount500.c", 13, "reach_error"); }
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
signed short int var_1_1 = 8;
double var_1_3 = 49.8;
signed short int var_1_6 = 8;
signed short int var_1_7 = 30429;
signed short int var_1_8 = 16;
signed short int var_1_9 = 16;
signed short int var_1_10 = 8;
signed short int var_1_11 = 4;
signed short int var_1_12 = -32;
double var_1_13 = 1.5;
double var_1_14 = 999999.875;
signed short int var_1_15 = 26788;
unsigned long int var_1_16 = 16;
unsigned char var_1_17 = 1;
unsigned char var_1_20 = 200;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 64;
double var_1_23 = 4.25;
double var_1_24 = 255.8;
double var_1_25 = 15.75;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 1;
unsigned char var_1_30 = 0;
unsigned long int var_1_32 = 16;
unsigned short int var_1_33 = 10;
unsigned short int var_1_34 = 128;
unsigned short int var_1_35 = 50646;
signed long int var_1_36 = -1000000;
float var_1_37 = 9.25;
double var_1_38 = 15.6;
float var_1_39 = 24.4;
float var_1_40 = 0.25;
signed short int var_1_41 = 1;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
signed char var_1_45 = 1;
float var_1_46 = 100000000000.25;
float var_1_47 = 50.8;
unsigned long int var_1_48 = 0;
unsigned long int var_1_49 = 3189280602;
unsigned long int var_1_50 = 1191680764;
unsigned long int var_1_51 = 0;
signed char var_1_52 = 10;
signed short int var_1_53 = 4;
signed short int var_1_54 = -8;
signed short int var_1_55 = 0;
unsigned long int var_1_56 = 100000;
unsigned long int var_1_57 = 1916447832;
unsigned short int var_1_58 = 2;
float var_1_59 = 49.9;
signed long int var_1_60 = 4;
float var_1_61 = 15.9;
double var_1_62 = 2.4;
signed long int var_1_63 = -200;
signed long int var_1_64 = 8;
double var_1_65 = 0.75;
double var_1_66 = 256.2;
double var_1_67 = 10000000000000.45;
double var_1_68 = 1.2;
signed short int var_1_69 = -50;
unsigned char var_1_71 = 1;
unsigned char var_1_73 = 64;
unsigned char var_1_74 = 1;
unsigned char var_1_75 = 0;
unsigned char var_1_76 = 128;
signed long int var_1_77 = 2;
unsigned long int var_1_78 = 100000000;
signed char var_1_79 = -25;
unsigned char var_1_81 = 1;
unsigned short int var_1_82 = 32;
unsigned long int var_1_83 = 10;
unsigned long int var_1_84 = 100;
unsigned long int var_1_86 = 0;
float var_1_87 = 999999.5;
float var_1_88 = 4.34;
unsigned char var_1_89 = 1;
unsigned char var_1_90 = 0;
unsigned char var_1_91 = 0;
unsigned char var_1_92 = 0;
unsigned long int var_1_93 = 128;
signed long int var_1_94 = 50;
signed char var_1_95 = 16;
double var_1_97 = 0.25;
unsigned char var_1_99 = 64;
unsigned short int var_1_100 = 500;
signed short int var_1_101 = 50;
unsigned long int var_1_102 = 0;
unsigned short int var_1_103 = 32;
signed short int var_1_104 = 16;
unsigned char var_1_105 = 10;
unsigned long int var_1_106 = 50;
signed long int var_1_107 = 128;
signed long int var_1_108 = -1;
signed long int var_1_109 = -25;
unsigned short int var_1_110 = 16;
unsigned char var_1_111 = 1;
unsigned short int var_1_112 = 100;
signed short int var_1_113 = -128;

// Calibration values

// Last'ed variables
double last_1_var_1_23 = 4.25;
unsigned char last_1_var_1_43 = 0;
unsigned char last_1_var_1_44 = 0;
unsigned long int last_1_var_1_48 = 0;
unsigned long int last_1_var_1_51 = 0;
signed long int last_1_var_1_63 = -200;
double last_1_var_1_65 = 0.75;
signed long int last_1_var_1_77 = 2;
unsigned char last_1_var_1_81 = 1;
unsigned char last_1_var_1_89 = 1;
double last_1_var_1_97 = 0.25;
unsigned short int last_1_var_1_103 = 32;
unsigned short int last_1_var_1_110 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req28Batch181Amount500
	unsigned long int stepLocal_22 = var_1_50;
	unsigned char stepLocal_21 = last_1_var_1_89;
	if (var_1_13 < (- last_1_var_1_65)) {
		var_1_71 = var_1_30;
	} else {
		if (stepLocal_21 || ((- 16.5f) >= var_1_61)) {
			var_1_71 = ((last_1_var_1_23 < last_1_var_1_97) && var_1_30);
		} else {
			if (stepLocal_22 < (last_1_var_1_103 / var_1_35)) {
				var_1_71 = var_1_27;
			}
		}
	}


	// From: Req6Batch181Amount500
	if (var_1_20 >= var_1_21) {
		var_1_26 = var_1_27;
	} else {
		if (last_1_var_1_63 >= var_1_9) {
			var_1_26 = (last_1_var_1_81 && var_1_30);
		} else {
			if (last_1_var_1_44 && last_1_var_1_43) {
				var_1_26 = var_1_30;
			} else {
				if (last_1_var_1_44 && (var_1_11 < 2)) {
					if ((max (var_1_7 , (var_1_21 - var_1_22))) < last_1_var_1_110) {
						var_1_26 = (! var_1_30);
					} else {
						var_1_26 = (last_1_var_1_44 && var_1_30);
					}
				}
			}
		}
	}


	// From: Req43Batch181Amount500
	if (var_1_26) {
		var_1_97 = var_1_68;
	}


	// From: Req45Batch181Amount500
	if (var_1_71) {
		var_1_100 = 32;
	} else {
		var_1_100 = var_1_15;
	}


	// From: Req5Batch181Amount500
	signed long int stepLocal_1 = var_1_22 % var_1_15;
	if (last_1_var_1_89) {
		if ((var_1_14 + last_1_var_1_97) < (var_1_13 - (0.1 + var_1_24))) {
			var_1_23 = (max (var_1_24 , (abs (var_1_25))));
		} else {
			if (last_1_var_1_51 < stepLocal_1) {
				var_1_23 = var_1_25;
			} else {
				var_1_23 = var_1_24;
			}
		}
	}


	// From: Req22Batch181Amount500
	if (var_1_23 < var_1_14) {
		var_1_58 = (var_1_35 - var_1_21);
	}


	// From: Req14Batch181Amount500
	signed short int stepLocal_4 = var_1_9;
	if (last_1_var_1_43) {
		if (stepLocal_4 >= var_1_15) {
			var_1_44 = (! var_1_30);
		}
	}


	// From: Req48Batch181Amount500
	if (var_1_44) {
		var_1_103 = var_1_60;
	} else {
		var_1_103 = var_1_53;
	}


	// From: Req51Batch181Amount500
	if (var_1_44) {
		var_1_106 = var_1_103;
	} else {
		var_1_106 = var_1_74;
	}


	// From: Req3Batch181Amount500
	signed long int stepLocal_0 = (var_1_8 - var_1_7) * var_1_11;
	if (var_1_15 <= stepLocal_0) {
		var_1_16 = var_1_15;
	}


	// From: Req7Batch181Amount500
	var_1_32 = (var_1_15 + var_1_20);


	// From: Req11Batch181Amount500
	if (((var_1_24 + 16.5) - var_1_14) < (var_1_13 - var_1_38)) {
		var_1_37 = (var_1_39 + var_1_40);
	} else {
		var_1_37 = (var_1_40 + 15.25f);
	}


	// From: Req15Batch181Amount500
	var_1_45 = var_1_20;


	// From: Req25Batch181Amount500
	var_1_63 = (var_1_53 + (last_1_var_1_63 - var_1_64));


	// From: Req34Batch181Amount500
	if (var_1_49 > var_1_60) {
		var_1_82 = (var_1_75 + var_1_74);
	}


	// From: Req37Batch181Amount500
	if (var_1_30) {
		var_1_87 = (min ((min (7.25f , var_1_24)) , (min (var_1_39 , var_1_68))));
	} else {
		var_1_87 = (max ((var_1_66 - var_1_67) , (var_1_39 + var_1_61)));
	}


	// From: Req38Batch181Amount500
	var_1_88 = (var_1_61 + var_1_66);


	// From: Req41Batch181Amount500
	var_1_94 = -8;


	// From: Req44Batch181Amount500
	var_1_99 = var_1_53;


	// From: Req46Batch181Amount500
	var_1_101 = var_1_6;


	// From: Req47Batch181Amount500
	if (var_1_27) {
		var_1_102 = var_1_63;
	}


	// From: Req49Batch181Amount500
	var_1_104 = -16;


	// From: Req50Batch181Amount500
	if (var_1_27) {
		var_1_105 = var_1_74;
	} else {
		var_1_105 = var_1_60;
	}


	// From: Req52Batch181Amount500
	var_1_107 = var_1_55;


	// From: Req53Batch181Amount500
	var_1_108 = var_1_11;


	// From: Req54Batch181Amount500
	var_1_109 = var_1_21;


	// From: Req55Batch181Amount500
	var_1_110 = var_1_8;


	// From: Req56Batch181Amount500
	var_1_111 = var_1_27;


	// From: Req57Batch181Amount500
	if (var_1_44) {
		var_1_112 = var_1_106;
	} else {
		var_1_112 = var_1_21;
	}


	// From: Req13Batch181Amount500
	if (var_1_24 <= (- var_1_23)) {
		var_1_43 = (var_1_26 || var_1_27);
	}


	// From: Req26Batch181Amount500
	unsigned long int stepLocal_20 = -5 | var_1_106;
	if (var_1_7 == stepLocal_20) {
		var_1_65 = ((var_1_66 + var_1_67) - 63.1);
	} else {
		var_1_65 = (min (var_1_40 , var_1_68));
	}


	// From: Req1Batch181Amount500
	if ((var_1_23 / var_1_3) > (max (var_1_65 , var_1_97))) {
		var_1_1 = ((min (var_1_6 , (var_1_7 - var_1_8))) - var_1_9);
	} else {
		var_1_1 = (-256 + (var_1_10 + var_1_11));
	}


	// From: Req12Batch181Amount500
	signed short int stepLocal_3 = var_1_9;
	if (var_1_102 != stepLocal_3) {
		var_1_41 = ((abs (var_1_11)) + var_1_21);
	} else {
		var_1_41 = (min ((var_1_20 + var_1_10) , var_1_15));
	}


	// From: Req16Batch181Amount500
	unsigned long int stepLocal_6 = max ((var_1_102 / var_1_7) , var_1_15);
	unsigned long int stepLocal_5 = var_1_32;
	if (var_1_9 <= stepLocal_6) {
		var_1_46 = var_1_40;
	} else {
		if (stepLocal_5 < var_1_15) {
			var_1_46 = (min ((var_1_47 - var_1_24) , (max (63.6f , var_1_39))));
		} else {
			var_1_46 = (min (var_1_25 , var_1_39));
		}
	}


	// From: Req18Batch181Amount500
	unsigned short int stepLocal_10 = var_1_82;
	signed long int stepLocal_9 = var_1_35 - (var_1_8 + var_1_20);
	if (stepLocal_9 <= (2 % var_1_7)) {
		var_1_51 = (var_1_108 + (min ((var_1_50 - var_1_8) , var_1_22)));
	} else {
		if (stepLocal_10 >= (last_1_var_1_51 + var_1_16)) {
			var_1_51 = (var_1_20 + (var_1_50 - var_1_21));
		} else {
			var_1_51 = (var_1_108 + (var_1_50 - var_1_82));
		}
	}


	// From: Req23Batch181Amount500
	unsigned char stepLocal_18 = var_1_27;
	unsigned char stepLocal_17 = var_1_21;
	if (var_1_39 < ((var_1_38 * var_1_40) / var_1_3)) {
		if (stepLocal_18 || (var_1_41 < var_1_32)) {
			if ((var_1_7 >> var_1_60) >= stepLocal_17) {
				var_1_59 = (var_1_24 - (abs (var_1_25)));
			} else {
				var_1_59 = (min ((max (var_1_39 , var_1_40)) , var_1_25));
			}
		} else {
			var_1_59 = var_1_40;
		}
	} else {
		var_1_59 = ((max ((abs (var_1_39)) , var_1_40)) + var_1_61);
	}


	// From: Req31Batch181Amount500
	var_1_78 = (max (1u , var_1_82));


	// From: Req35Batch181Amount500
	unsigned char stepLocal_32 = var_1_71;
	if (stepLocal_32 && var_1_43) {
		if (var_1_40 <= var_1_68) {
			var_1_83 = (abs (var_1_82));
		}
	}


	// From: Req40Batch181Amount500
	if ((abs (var_1_65)) >= var_1_25) {
		var_1_93 = var_1_53;
	}


	// From: Req42Batch181Amount500
	if (var_1_43) {
		var_1_95 = var_1_53;
	}


	// From: Req39Batch181Amount500
	if ((var_1_39 > (max (var_1_25 , var_1_59))) || (var_1_40 == (- var_1_24))) {
		if (var_1_44) {
			if ((! var_1_71) && var_1_27) {
				var_1_89 = var_1_30;
			} else {
				var_1_89 = ((var_1_30 || var_1_90) || (var_1_91 || var_1_92));
			}
		}
	} else {
		var_1_89 = (! var_1_91);
	}


	// From: Req24Batch181Amount500
	signed long int stepLocal_19 = ~ var_1_100;
	if (var_1_51 <= stepLocal_19) {
		var_1_62 = ((max (var_1_61 , var_1_39)) + var_1_40);
	}


	// From: Req2Batch181Amount500
	if ((var_1_65 * var_1_3) >= ((var_1_97 + var_1_23) + (var_1_13 - var_1_14))) {
		if (var_1_83 > (var_1_9 - var_1_7)) {
			var_1_12 = (abs (var_1_8));
		} else {
			var_1_12 = (var_1_9 - (var_1_15 - var_1_8));
		}
	}


	// From: Req10Batch181Amount500
	unsigned char stepLocal_2 = var_1_100 < var_1_51;
	if (((var_1_65 / var_1_3) <= var_1_62) || stepLocal_2) {
		var_1_36 = ((var_1_9 + (var_1_100 - var_1_35)) + var_1_22);
	} else {
		var_1_36 = (max ((var_1_51 + (min (var_1_15 , var_1_9))) , 4));
	}


	// From: Req17Batch181Amount500
	unsigned long int stepLocal_8 = var_1_51 >> 8;
	unsigned char stepLocal_7 = var_1_89;
	if (stepLocal_7 && var_1_43) {
		if (stepLocal_8 < last_1_var_1_48) {
			var_1_48 = (var_1_49 - ((min (1272287363u , var_1_50)) - var_1_32));
		}
	} else {
		var_1_48 = var_1_21;
	}


	// From: Req19Batch181Amount500
	signed long int stepLocal_12 = (var_1_35 * var_1_15) / var_1_20;
	signed short int stepLocal_11 = var_1_9;
	if (var_1_107 > stepLocal_11) {
		if (var_1_26) {
			if (((var_1_83 / var_1_50) >> var_1_53) <= stepLocal_12) {
				var_1_52 = (var_1_53 - var_1_21);
			} else {
				var_1_52 = (max ((max (var_1_21 , var_1_53)) , -4));
			}
		} else {
			var_1_52 = var_1_53;
		}
	}


	// From: Req29Batch181Amount500
	unsigned char stepLocal_24 = var_1_71;
	signed long int stepLocal_23 = var_1_63;
	if (var_1_43 || stepLocal_24) {
		if (! var_1_27) {
			var_1_73 = var_1_20;
		}
	} else {
		if (var_1_26) {
			if (var_1_89) {
				if (var_1_30) {
					var_1_73 = (8 + var_1_74);
				} else {
					var_1_73 = ((min (var_1_53 , (abs (var_1_22)))) + (max (var_1_74 , var_1_60)));
				}
			} else {
				if (stepLocal_23 >= (64 * var_1_95)) {
					var_1_73 = (min (var_1_22 , 2));
				} else {
					var_1_73 = (1 + var_1_60);
				}
			}
		} else {
			var_1_73 = (max ((min ((max (var_1_20 , var_1_74)) , var_1_75)) , (min (var_1_21 , (var_1_76 - var_1_53)))));
		}
	}


	// From: Req30Batch181Amount500
	unsigned long int stepLocal_25 = var_1_93;
	if (stepLocal_25 <= var_1_102) {
		if ((var_1_13 * var_1_97) != var_1_46) {
			var_1_77 = ((var_1_7 - (min (var_1_15 , var_1_76))) + (min (last_1_var_1_77 , (min (var_1_64 , var_1_74)))));
		}
	}


	// From: Req9Batch181Amount500
	if (var_1_14 >= var_1_62) {
		if (var_1_26) {
			var_1_34 = ((var_1_20 + var_1_22) + (max (var_1_7 , var_1_21)));
		} else {
			var_1_34 = (var_1_35 - ((var_1_20 + var_1_22) + var_1_21));
		}
	} else {
		if (var_1_65 > 99.2) {
			var_1_34 = (var_1_35 - var_1_7);
		}
	}


	// From: Req36Batch181Amount500
	unsigned long int stepLocal_34 = var_1_106 / (var_1_35 - var_1_15);
	signed long int stepLocal_33 = -5;
	if (! (var_1_44 || (var_1_105 >= var_1_106))) {
		if (var_1_111) {
			if (stepLocal_34 < var_1_102) {
				var_1_84 = var_1_58;
			} else {
				var_1_84 = (max ((var_1_74 + (var_1_50 - 1000000u)) , (var_1_49 - var_1_108)));
			}
		} else {
			if (var_1_34 > stepLocal_33) {
				var_1_84 = (var_1_49 - var_1_58);
			}
		}
	} else {
		var_1_84 = (max (var_1_64 , var_1_86));
	}


	// From: Req8Batch181Amount500
	if (var_1_62 > var_1_13) {
		var_1_33 = (min ((var_1_7 + var_1_22) , (abs (var_1_84))));
	}


	// From: Req21Batch181Amount500
	signed long int stepLocal_16 = abs (var_1_20 + var_1_7);
	unsigned long int stepLocal_15 = 256u;
	unsigned char stepLocal_14 = var_1_27;
	if (256 != stepLocal_16) {
		if (stepLocal_15 >= var_1_83) {
			var_1_56 = (var_1_7 + var_1_100);
		} else {
			var_1_56 = ((max (var_1_22 , var_1_33)) + (50u + var_1_20));
		}
	} else {
		if (stepLocal_14 || (var_1_7 == (var_1_22 * var_1_49))) {
			var_1_56 = (min ((abs (100000u)) , (var_1_22 + var_1_33)));
		} else {
			var_1_56 = ((var_1_57 - var_1_20) + (var_1_50 - var_1_21));
		}
	}


	// From: Req27Batch181Amount500
	if (var_1_1 > (var_1_33 / (min (var_1_20 , var_1_53)))) {
		if ((min (var_1_1 , var_1_6)) <= var_1_15) {
			var_1_69 = var_1_33;
		} else {
			var_1_69 = ((abs (var_1_6)) - var_1_22);
		}
	} else {
		if ((min (var_1_22 , 25)) >= var_1_16) {
			if ((min ((- 8.4) , (var_1_97 + var_1_40))) <= (- var_1_65)) {
				var_1_69 = var_1_8;
			} else {
				if (var_1_109 >= var_1_49) {
					var_1_69 = (abs (min (var_1_21 , (max (var_1_33 , var_1_15)))));
				}
			}
		}
	}


	// From: Req33Batch181Amount500
	unsigned long int stepLocal_31 = var_1_50;
	if (var_1_84 <= stepLocal_31) {
		var_1_81 = (! var_1_30);
	}


	// From: Req4Batch181Amount500
	if ((var_1_26 || (var_1_7 == var_1_41)) && var_1_81) {
		var_1_17 = ((var_1_20 - var_1_21) - var_1_22);
	}


	// From: Req20Batch181Amount500
	signed long int stepLocal_13 = var_1_20 + var_1_11;
	if (var_1_8 < stepLocal_13) {
		var_1_54 = (min ((min (var_1_55 , var_1_21)) , var_1_15));
	} else {
		if (var_1_14 > var_1_39) {
			if (var_1_81) {
				var_1_54 = (abs (var_1_15));
			} else {
				var_1_54 = var_1_22;
			}
		}
	}


	// From: Req32Batch181Amount500
	unsigned char stepLocal_30 = var_1_32 > (var_1_22 + var_1_75);
	signed long int stepLocal_29 = var_1_17 / var_1_15;
	unsigned long int stepLocal_28 = var_1_49 ^ (var_1_9 / var_1_76);
	signed long int stepLocal_27 = (min (5 , var_1_7)) / var_1_76;
	signed long int stepLocal_26 = var_1_35 ^ var_1_60;
	if (stepLocal_26 > ((min (var_1_77 , var_1_21)) + (var_1_56 / var_1_20))) {
		var_1_79 = (min (var_1_20 , (min (var_1_60 , var_1_21))));
	} else {
		if (var_1_83 > stepLocal_28) {
			if (stepLocal_30 && var_1_43) {
				var_1_79 = ((abs (var_1_53)) - var_1_21);
			} else {
				if (stepLocal_27 >= ((2 | var_1_57) | (var_1_106 + -2))) {
					if (var_1_62 < 15.9) {
						var_1_79 = (min (var_1_53 , var_1_20));
					} else {
						var_1_79 = (var_1_21 - (100 - var_1_60));
					}
				} else {
					if (stepLocal_29 >= (var_1_64 & var_1_22)) {
						var_1_79 = var_1_53;
					} else {
						var_1_79 = (min (var_1_60 , var_1_21));
					}
				}
			}
		}
	}


	// From: Req58Batch181Amount500
	if (! ((var_1_66 - var_1_67) >= var_1_61)) {
		if (var_1_30 && var_1_81) {
			if (var_1_93 < (var_1_93 + 1)) {
				var_1_113 = var_1_8;
			} else {
				var_1_113 = var_1_22;
			}
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 16382);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -8191);
	assume_abort_if_not(var_1_10 <= 8192);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -8191);
	assume_abort_if_not(var_1_11 <= 8191);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 16383);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 190);
	assume_abort_if_not(var_1_20 <= 254);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427388000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 32767);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -461168.6018427383000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 2147483647);
	assume_abort_if_not(var_1_49 <= 4294967294);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 1073741823);
	assume_abort_if_not(var_1_50 <= 2147483647);
	var_1_53 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 31);
	var_1_55 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_55 >= -32767);
	assume_abort_if_not(var_1_55 <= 32766);
	var_1_57 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_57 >= 1073741823);
	assume_abort_if_not(var_1_57 <= 2147483647);
	var_1_60 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_60 >= 1);
	assume_abort_if_not(var_1_60 <= 14);
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= -461168.6018427383000e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427383000e+12F && var_1_61 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 1073741823);
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 4611686.018427383000e+12F && var_1_66 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427383000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= -922337.2036854766000e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854766000e+12F && var_1_68 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 127);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 254);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 127);
	assume_abort_if_not(var_1_76 <= 254);
	var_1_86 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 4294967294);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 0);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 0);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_23 = var_1_23;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_110 = var_1_110;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_23 / var_1_3) > (max (var_1_65 , var_1_97))) ? (var_1_1 == ((signed short int) ((min (var_1_6 , (var_1_7 - var_1_8))) - var_1_9))) : (var_1_1 == ((signed short int) (-256 + (var_1_10 + var_1_11))))) && (((var_1_65 * var_1_3) >= ((var_1_97 + var_1_23) + (var_1_13 - var_1_14))) ? ((var_1_83 > (var_1_9 - var_1_7)) ? (var_1_12 == ((signed short int) (abs (var_1_8)))) : (var_1_12 == ((signed short int) (var_1_9 - (var_1_15 - var_1_8))))) : 1)) && ((var_1_15 <= ((var_1_8 - var_1_7) * var_1_11)) ? (var_1_16 == ((unsigned long int) var_1_15)) : 1)) && (((var_1_26 || (var_1_7 == var_1_41)) && var_1_81) ? (var_1_17 == ((unsigned char) ((var_1_20 - var_1_21) - var_1_22))) : 1)) && (last_1_var_1_89 ? (((var_1_14 + last_1_var_1_97) < (var_1_13 - (0.1 + var_1_24))) ? (var_1_23 == ((double) (max (var_1_24 , (abs (var_1_25)))))) : ((last_1_var_1_51 < (var_1_22 % var_1_15)) ? (var_1_23 == ((double) var_1_25)) : (var_1_23 == ((double) var_1_24)))) : 1)) && ((var_1_20 >= var_1_21) ? (var_1_26 == ((unsigned char) var_1_27)) : ((last_1_var_1_63 >= var_1_9) ? (var_1_26 == ((unsigned char) (last_1_var_1_81 && var_1_30))) : ((last_1_var_1_44 && last_1_var_1_43) ? (var_1_26 == ((unsigned char) var_1_30)) : ((last_1_var_1_44 && (var_1_11 < 2)) ? (((max (var_1_7 , (var_1_21 - var_1_22))) < last_1_var_1_110) ? (var_1_26 == ((unsigned char) (! var_1_30))) : (var_1_26 == ((unsigned char) (last_1_var_1_44 && var_1_30)))) : 1))))) && (var_1_32 == ((unsigned long int) (var_1_15 + var_1_20)))) && ((var_1_62 > var_1_13) ? (var_1_33 == ((unsigned short int) (min ((var_1_7 + var_1_22) , (abs (var_1_84)))))) : 1)) && ((var_1_14 >= var_1_62) ? (var_1_26 ? (var_1_34 == ((unsigned short int) ((var_1_20 + var_1_22) + (max (var_1_7 , var_1_21))))) : (var_1_34 == ((unsigned short int) (var_1_35 - ((var_1_20 + var_1_22) + var_1_21))))) : ((var_1_65 > 99.2) ? (var_1_34 == ((unsigned short int) (var_1_35 - var_1_7))) : 1))) && ((((var_1_65 / var_1_3) <= var_1_62) || (var_1_100 < var_1_51)) ? (var_1_36 == ((signed long int) ((var_1_9 + (var_1_100 - var_1_35)) + var_1_22))) : (var_1_36 == ((signed long int) (max ((var_1_51 + (min (var_1_15 , var_1_9))) , 4)))))) && ((((var_1_24 + 16.5) - var_1_14) < (var_1_13 - var_1_38)) ? (var_1_37 == ((float) (var_1_39 + var_1_40))) : (var_1_37 == ((float) (var_1_40 + 15.25f))))) && ((var_1_102 != var_1_9) ? (var_1_41 == ((signed short int) ((abs (var_1_11)) + var_1_21))) : (var_1_41 == ((signed short int) (min ((var_1_20 + var_1_10) , var_1_15)))))) && ((var_1_24 <= (- var_1_23)) ? (var_1_43 == ((unsigned char) (var_1_26 || var_1_27))) : 1)) && (last_1_var_1_43 ? ((var_1_9 >= var_1_15) ? (var_1_44 == ((unsigned char) (! var_1_30))) : 1) : 1)) && (var_1_45 == ((signed char) var_1_20))) && ((var_1_9 <= (max ((var_1_102 / var_1_7) , var_1_15))) ? (var_1_46 == ((float) var_1_40)) : ((var_1_32 < var_1_15) ? (var_1_46 == ((float) (min ((var_1_47 - var_1_24) , (max (63.6f , var_1_39)))))) : (var_1_46 == ((float) (min (var_1_25 , var_1_39))))))) && ((var_1_89 && var_1_43) ? (((var_1_51 >> 8) < last_1_var_1_48) ? (var_1_48 == ((unsigned long int) (var_1_49 - ((min (1272287363u , var_1_50)) - var_1_32)))) : 1) : (var_1_48 == ((unsigned long int) var_1_21)))) && (((var_1_35 - (var_1_8 + var_1_20)) <= (2 % var_1_7)) ? (var_1_51 == ((unsigned long int) (var_1_108 + (min ((var_1_50 - var_1_8) , var_1_22))))) : ((var_1_82 >= (last_1_var_1_51 + var_1_16)) ? (var_1_51 == ((unsigned long int) (var_1_20 + (var_1_50 - var_1_21)))) : (var_1_51 == ((unsigned long int) (var_1_108 + (var_1_50 - var_1_82))))))) && ((var_1_107 > var_1_9) ? (var_1_26 ? ((((var_1_83 / var_1_50) >> var_1_53) <= ((var_1_35 * var_1_15) / var_1_20)) ? (var_1_52 == ((signed char) (var_1_53 - var_1_21))) : (var_1_52 == ((signed char) (max ((max (var_1_21 , var_1_53)) , -4))))) : (var_1_52 == ((signed char) var_1_53))) : 1)) && ((var_1_8 < (var_1_20 + var_1_11)) ? (var_1_54 == ((signed short int) (min ((min (var_1_55 , var_1_21)) , var_1_15)))) : ((var_1_14 > var_1_39) ? (var_1_81 ? (var_1_54 == ((signed short int) (abs (var_1_15)))) : (var_1_54 == ((signed short int) var_1_22))) : 1))) && ((256 != (abs (var_1_20 + var_1_7))) ? ((256u >= var_1_83) ? (var_1_56 == ((unsigned long int) (var_1_7 + var_1_100))) : (var_1_56 == ((unsigned long int) ((max (var_1_22 , var_1_33)) + (50u + var_1_20))))) : ((var_1_27 || (var_1_7 == (var_1_22 * var_1_49))) ? (var_1_56 == ((unsigned long int) (min ((abs (100000u)) , (var_1_22 + var_1_33))))) : (var_1_56 == ((unsigned long int) ((var_1_57 - var_1_20) + (var_1_50 - var_1_21))))))) && ((var_1_23 < var_1_14) ? (var_1_58 == ((unsigned short int) (var_1_35 - var_1_21))) : 1)) && ((var_1_39 < ((var_1_38 * var_1_40) / var_1_3)) ? ((var_1_27 || (var_1_41 < var_1_32)) ? (((var_1_7 >> var_1_60) >= var_1_21) ? (var_1_59 == ((float) (var_1_24 - (abs (var_1_25))))) : (var_1_59 == ((float) (min ((max (var_1_39 , var_1_40)) , var_1_25))))) : (var_1_59 == ((float) var_1_40))) : (var_1_59 == ((float) ((max ((abs (var_1_39)) , var_1_40)) + var_1_61))))) && ((var_1_51 <= (~ var_1_100)) ? (var_1_62 == ((double) ((max (var_1_61 , var_1_39)) + var_1_40))) : 1)) && (var_1_63 == ((signed long int) (var_1_53 + (last_1_var_1_63 - var_1_64))))) && ((var_1_7 == (-5 | var_1_106)) ? (var_1_65 == ((double) ((var_1_66 + var_1_67) - 63.1))) : (var_1_65 == ((double) (min (var_1_40 , var_1_68)))))) && ((var_1_1 > (var_1_33 / (min (var_1_20 , var_1_53)))) ? (((min (var_1_1 , var_1_6)) <= var_1_15) ? (var_1_69 == ((signed short int) var_1_33)) : (var_1_69 == ((signed short int) ((abs (var_1_6)) - var_1_22)))) : (((min (var_1_22 , 25)) >= var_1_16) ? (((min ((- 8.4) , (var_1_97 + var_1_40))) <= (- var_1_65)) ? (var_1_69 == ((signed short int) var_1_8)) : ((var_1_109 >= var_1_49) ? (var_1_69 == ((signed short int) (abs (min (var_1_21 , (max (var_1_33 , var_1_15))))))) : 1)) : 1))) && ((var_1_13 < (- last_1_var_1_65)) ? (var_1_71 == ((unsigned char) var_1_30)) : ((last_1_var_1_89 || ((- 16.5f) >= var_1_61)) ? (var_1_71 == ((unsigned char) ((last_1_var_1_23 < last_1_var_1_97) && var_1_30))) : ((var_1_50 < (last_1_var_1_103 / var_1_35)) ? (var_1_71 == ((unsigned char) var_1_27)) : 1)))) && ((var_1_43 || var_1_71) ? ((! var_1_27) ? (var_1_73 == ((unsigned char) var_1_20)) : 1) : (var_1_26 ? (var_1_89 ? (var_1_30 ? (var_1_73 == ((unsigned char) (8 + var_1_74))) : (var_1_73 == ((unsigned char) ((min (var_1_53 , (abs (var_1_22)))) + (max (var_1_74 , var_1_60)))))) : ((var_1_63 >= (64 * var_1_95)) ? (var_1_73 == ((unsigned char) (min (var_1_22 , 2)))) : (var_1_73 == ((unsigned char) (1 + var_1_60))))) : (var_1_73 == ((unsigned char) (max ((min ((max (var_1_20 , var_1_74)) , var_1_75)) , (min (var_1_21 , (var_1_76 - var_1_53)))))))))) && ((var_1_93 <= var_1_102) ? (((var_1_13 * var_1_97) != var_1_46) ? (var_1_77 == ((signed long int) ((var_1_7 - (min (var_1_15 , var_1_76))) + (min (last_1_var_1_77 , (min (var_1_64 , var_1_74))))))) : 1) : 1)) && (var_1_78 == ((unsigned long int) (max (1u , var_1_82))))) && (((var_1_35 ^ var_1_60) > ((min (var_1_77 , var_1_21)) + (var_1_56 / var_1_20))) ? (var_1_79 == ((signed char) (min (var_1_20 , (min (var_1_60 , var_1_21)))))) : ((var_1_83 > (var_1_49 ^ (var_1_9 / var_1_76))) ? (((var_1_32 > (var_1_22 + var_1_75)) && var_1_43) ? (var_1_79 == ((signed char) ((abs (var_1_53)) - var_1_21))) : ((((min (5 , var_1_7)) / var_1_76) >= ((2 | var_1_57) | (var_1_106 + -2))) ? ((var_1_62 < 15.9) ? (var_1_79 == ((signed char) (min (var_1_53 , var_1_20)))) : (var_1_79 == ((signed char) (var_1_21 - (100 - var_1_60))))) : (((var_1_17 / var_1_15) >= (var_1_64 & var_1_22)) ? (var_1_79 == ((signed char) var_1_53)) : (var_1_79 == ((signed char) (min (var_1_60 , var_1_21))))))) : 1))) && ((var_1_84 <= var_1_50) ? (var_1_81 == ((unsigned char) (! var_1_30))) : 1)) && ((var_1_49 > var_1_60) ? (var_1_82 == ((unsigned short int) (var_1_75 + var_1_74))) : 1)) && ((var_1_71 && var_1_43) ? ((var_1_40 <= var_1_68) ? (var_1_83 == ((unsigned long int) (abs (var_1_82)))) : 1) : 1)) && ((! (var_1_44 || (var_1_105 >= var_1_106))) ? (var_1_111 ? (((var_1_106 / (var_1_35 - var_1_15)) < var_1_102) ? (var_1_84 == ((unsigned long int) var_1_58)) : (var_1_84 == ((unsigned long int) (max ((var_1_74 + (var_1_50 - 1000000u)) , (var_1_49 - var_1_108)))))) : ((var_1_34 > -5) ? (var_1_84 == ((unsigned long int) (var_1_49 - var_1_58))) : 1)) : (var_1_84 == ((unsigned long int) (max (var_1_64 , var_1_86)))))) && (var_1_30 ? (var_1_87 == ((float) (min ((min (7.25f , var_1_24)) , (min (var_1_39 , var_1_68)))))) : (var_1_87 == ((float) (max ((var_1_66 - var_1_67) , (var_1_39 + var_1_61))))))) && (var_1_88 == ((float) (var_1_61 + var_1_66)))) && (((var_1_39 > (max (var_1_25 , var_1_59))) || (var_1_40 == (- var_1_24))) ? (var_1_44 ? (((! var_1_71) && var_1_27) ? (var_1_89 == ((unsigned char) var_1_30)) : (var_1_89 == ((unsigned char) ((var_1_30 || var_1_90) || (var_1_91 || var_1_92))))) : 1) : (var_1_89 == ((unsigned char) (! var_1_91))))) && (((abs (var_1_65)) >= var_1_25) ? (var_1_93 == ((unsigned long int) var_1_53)) : 1)) && (var_1_94 == ((signed long int) -8))) && (var_1_43 ? (var_1_95 == ((signed char) var_1_53)) : 1)) && (var_1_26 ? (var_1_97 == ((double) var_1_68)) : 1)) && (var_1_99 == ((unsigned char) var_1_53))) && (var_1_71 ? (var_1_100 == ((unsigned short int) 32)) : (var_1_100 == ((unsigned short int) var_1_15)))) && (var_1_101 == ((signed short int) var_1_6))) && (var_1_27 ? (var_1_102 == ((unsigned long int) var_1_63)) : 1)) && (var_1_44 ? (var_1_103 == ((unsigned short int) var_1_60)) : (var_1_103 == ((unsigned short int) var_1_53)))) && (var_1_104 == ((signed short int) -16))) && (var_1_27 ? (var_1_105 == ((unsigned char) var_1_74)) : (var_1_105 == ((unsigned char) var_1_60)))) && (var_1_44 ? (var_1_106 == ((unsigned long int) var_1_103)) : (var_1_106 == ((unsigned long int) var_1_74)))) && (var_1_107 == ((signed long int) var_1_55))) && (var_1_108 == ((signed long int) var_1_11))) && (var_1_109 == ((signed long int) var_1_21))) && (var_1_110 == ((unsigned short int) var_1_8))) && (var_1_111 == ((unsigned char) var_1_27))) && (var_1_44 ? (var_1_112 == ((unsigned short int) var_1_106)) : (var_1_112 == ((unsigned short int) var_1_21)))) && ((! ((var_1_66 - var_1_67) >= var_1_61)) ? ((var_1_30 && var_1_81) ? ((var_1_93 < (var_1_93 + 1)) ? (var_1_113 == ((signed short int) var_1_8)) : (var_1_113 == ((signed short int) var_1_22))) : 1) : 1)
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
