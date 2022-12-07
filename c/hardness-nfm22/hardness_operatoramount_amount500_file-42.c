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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch42Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 50.75;
double var_1_3 = 8.5;
double var_1_4 = 64.5;
double var_1_5 = 9.3;
double var_1_6 = 10.5;
double var_1_7 = 1000000000000000.2;
unsigned char var_1_8 = 1;
double var_1_10 = 127.875;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned short int var_1_13 = 8;
double var_1_14 = 15.5;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 1;
signed char var_1_19 = -25;
unsigned char var_1_21 = 0;
signed char var_1_22 = 4;
signed char var_1_23 = 32;
signed char var_1_24 = 0;
signed char var_1_25 = 16;
signed char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 2;
unsigned char var_1_29 = 64;
unsigned char var_1_30 = 5;
unsigned char var_1_31 = 10;
unsigned char var_1_32 = 5;
unsigned long int var_1_33 = 64;
unsigned char var_1_34 = 200;
unsigned char var_1_35 = 128;
unsigned short int var_1_36 = 25;
unsigned short int var_1_39 = 50401;
double var_1_41 = 16.5;
double var_1_42 = 7.4;
double var_1_43 = 0.75;
signed char var_1_45 = 4;
float var_1_46 = 63.4;
float var_1_47 = 31.7;
unsigned char var_1_48 = 2;
unsigned char var_1_49 = 128;
float var_1_50 = -0.6;
signed short int var_1_51 = 32;
unsigned long int var_1_52 = 0;
unsigned long int var_1_55 = 2214125493;
unsigned long int var_1_56 = 2825355053;
unsigned long int var_1_57 = 1838970973;
unsigned long int var_1_58 = 1090070662;
unsigned long int var_1_59 = 1497382254;
double var_1_60 = 64.9;
double var_1_62 = 8.8;
unsigned char var_1_63 = 0;
signed short int var_1_64 = 256;
signed short int var_1_65 = 19047;
signed short int var_1_66 = 10000;
signed long int var_1_67 = 8;
unsigned char var_1_68 = 1;
unsigned short int var_1_69 = 128;
unsigned short int var_1_70 = 39796;
unsigned short int var_1_71 = 56278;
float var_1_72 = 24.675;
float var_1_73 = 0.0;
float var_1_74 = 63.625;
float var_1_75 = 32.6;
signed long int var_1_76 = 16;
signed long int var_1_77 = 1186944079;
unsigned char var_1_78 = 1;
unsigned char var_1_79 = 1;
double var_1_80 = 1000000000.86;
unsigned long int var_1_81 = 2;
unsigned long int var_1_82 = 8;
signed char var_1_83 = 8;
signed char var_1_84 = 1;
signed short int var_1_85 = -2;
unsigned short int var_1_87 = 8;
unsigned char var_1_88 = 0;
unsigned long int var_1_89 = 50;
signed short int var_1_90 = 64;
signed char var_1_91 = -50;
signed char var_1_92 = 4;
signed char var_1_93 = 64;
unsigned short int var_1_94 = 10;
unsigned short int var_1_96 = 51932;
unsigned char var_1_97 = 16;
unsigned char var_1_98 = 0;
unsigned char var_1_99 = 0;
float var_1_100 = 1.78;
signed long int var_1_101 = -10;
unsigned long int var_1_102 = 25;
signed short int var_1_103 = -50;
unsigned char var_1_104 = 64;
unsigned char var_1_105 = 0;
signed short int var_1_106 = -64;
double var_1_107 = 15.5;
signed long int var_1_108 = -32;
double var_1_109 = 3.5;
signed short int var_1_110 = -256;
signed long int var_1_111 = 16;
unsigned long int var_1_112 = 4;
unsigned long int var_1_113 = 10;
unsigned char var_1_114 = 0;
unsigned short int var_1_115 = 16;
unsigned short int var_1_116 = 4;
unsigned long int var_1_117 = 50;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 50.75;
unsigned short int last_1_var_1_13 = 8;
unsigned char last_1_var_1_17 = 0;
unsigned char last_1_var_1_27 = 0;
unsigned char last_1_var_1_32 = 5;
signed char last_1_var_1_45 = 4;
unsigned char last_1_var_1_48 = 2;
unsigned long int last_1_var_1_52 = 0;
double last_1_var_1_60 = 64.9;
unsigned char last_1_var_1_63 = 0;
signed long int last_1_var_1_67 = 8;
unsigned char last_1_var_1_68 = 1;
float last_1_var_1_72 = 24.675;
double last_1_var_1_80 = 1000000000.86;
unsigned long int last_1_var_1_81 = 2;
signed short int last_1_var_1_85 = -2;
unsigned short int last_1_var_1_87 = 8;
unsigned char last_1_var_1_97 = 16;
unsigned char last_1_var_1_98 = 0;
signed long int last_1_var_1_101 = -10;
unsigned long int last_1_var_1_102 = 25;
double last_1_var_1_109 = 3.5;
signed short int last_1_var_1_110 = -256;
unsigned long int last_1_var_1_113 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req25Batch42Amount500
	signed long int stepLocal_12 = - var_1_39;
	signed long int stepLocal_11 = last_1_var_1_110;
	if (((8 * last_1_var_1_85) + var_1_56) <= stepLocal_11) {
		if (stepLocal_12 != ((var_1_23 - var_1_66) << 5)) {
			var_1_78 = (! (var_1_11 && (! var_1_79)));
		} else {
			var_1_78 = (var_1_79 && var_1_11);
		}
	} else {
		var_1_78 = (! var_1_11);
	}


	// From: Req33Batch42Amount500
	if (-128 > last_1_var_1_102) {
		if (last_1_var_1_13 == last_1_var_1_32) {
			if ((min (last_1_var_1_13 , var_1_70)) <= (var_1_25 * last_1_var_1_81)) {
				if (last_1_var_1_63) {
					if (last_1_var_1_48 == var_1_71) {
						var_1_90 = (min (last_1_var_1_102 , last_1_var_1_102));
					} else {
						var_1_90 = (var_1_31 - 4);
					}
				} else {
					var_1_90 = (min (last_1_var_1_113 , var_1_49));
				}
			} else {
				var_1_90 = (var_1_25 + (min (var_1_83 , var_1_49)));
			}
		}
	} else {
		if ((var_1_56 - var_1_71) > var_1_35) {
			var_1_90 = (var_1_49 - var_1_83);
		} else {
			var_1_90 = ((last_1_var_1_113 + var_1_35) + var_1_31);
		}
	}


	// From: Req40Batch42Amount500
	signed short int stepLocal_25 = var_1_65;
	if (var_1_90 <= stepLocal_25) {
		var_1_102 = (var_1_56 - var_1_83);
	}


	// From: Req38Batch42Amount500
	if ((last_1_var_1_80 * var_1_3) > var_1_5) {
		var_1_100 = (max (var_1_43 , var_1_73));
	}


	// From: Req7Batch42Amount500
	if (var_1_10 < ((var_1_100 / var_1_14) + var_1_3)) {
		var_1_27 = (! (var_1_12 || (! var_1_11)));
	}


	// From: Req18Batch42Amount500
	unsigned long int stepLocal_7 = min ((last_1_var_1_52 & last_1_var_1_113) , var_1_58);
	if (last_1_var_1_67 >= stepLocal_7) {
		var_1_63 = (var_1_12 || var_1_18);
	}


	// From: Req43Batch42Amount500
	if (var_1_63) {
		var_1_105 = 1;
	}


	// From: Req23Batch42Amount500
	if (var_1_105) {
		var_1_72 = (var_1_7 - var_1_6);
	} else {
		var_1_72 = ((var_1_74 + var_1_75) - var_1_73);
	}


	// From: Req3Batch42Amount500
	if (last_1_var_1_109 >= (99.3 / var_1_14)) {
		if (last_1_var_1_60 > 0.4) {
			if ((1.0000000000075E11 + last_1_var_1_60) <= last_1_var_1_1) {
				var_1_13 = last_1_var_1_48;
			}
		} else {
			var_1_13 = last_1_var_1_48;
		}
	}


	// From: Req2Batch42Amount500
	if (last_1_var_1_17 || (var_1_6 > (var_1_7 - var_1_10))) {
		var_1_8 = (! var_1_11);
	} else {
		var_1_8 = ((var_1_3 <= var_1_10) && var_1_12);
	}


	// From: Req31Batch42Amount500
	if (var_1_18) {
		if (var_1_8) {
			var_1_88 = var_1_79;
		}
	}


	// From: Req36Batch42Amount500
	unsigned char stepLocal_23 = var_1_8;
	if ((var_1_6 >= var_1_43) || stepLocal_23) {
		var_1_97 = var_1_34;
	}


	// From: Req45Batch42Amount500
	if (var_1_78) {
		var_1_107 = var_1_75;
	} else {
		var_1_107 = var_1_5;
	}


	// From: Req15Batch42Amount500
	unsigned char stepLocal_6 = var_1_88;
	if (var_1_18 && stepLocal_6) {
		var_1_51 = (max ((var_1_35 + -128) , 0));
	}


	// From: Req52Batch42Amount500
	if (var_1_88) {
		var_1_114 = var_1_12;
	} else {
		var_1_114 = var_1_99;
	}


	// From: Req42Batch42Amount500
	if (last_1_var_1_27) {
		var_1_104 = var_1_31;
	} else {
		var_1_104 = var_1_35;
	}


	// From: Req6Batch42Amount500
	if ((abs (var_1_104)) != var_1_23) {
		var_1_26 = (var_1_24 - (abs (var_1_25)));
	} else {
		var_1_26 = (min (var_1_25 , var_1_24));
	}


	// From: Req9Batch42Amount500
	unsigned long int stepLocal_2 = (var_1_29 & var_1_31) / var_1_33;
	if (stepLocal_2 >= (min (last_1_var_1_32 , last_1_var_1_85))) {
		if (last_1_var_1_68) {
			var_1_32 = ((max ((var_1_34 - var_1_31) , var_1_35)) - var_1_25);
		} else {
			var_1_32 = (max ((200 - var_1_23) , var_1_34));
		}
	} else {
		var_1_32 = var_1_31;
	}


	// From: Req14Batch42Amount500
	if ((16 + (min (last_1_var_1_97 , last_1_var_1_52))) != last_1_var_1_45) {
		var_1_48 = (var_1_34 - (var_1_24 + var_1_30));
	} else {
		if (var_1_18) {
			var_1_48 = (var_1_49 - var_1_24);
		} else {
			if ((0.75f / (min (var_1_14 , var_1_50))) < last_1_var_1_72) {
				var_1_48 = (min (var_1_23 , var_1_34));
			}
		}
	}


	// From: Req1Batch42Amount500
	if (last_1_var_1_1 <= 2.25) {
		var_1_1 = (min (2.5 , ((var_1_3 + var_1_4) + (abs (var_1_5)))));
	} else {
		var_1_1 = (max ((max (7.6 , var_1_3)) , (var_1_6 - var_1_7)));
	}


	// From: Req12Batch42Amount500
	var_1_45 = (var_1_30 + -2);


	// From: Req27Batch42Amount500
	if (var_1_75 != 2.1f) {
		var_1_81 = var_1_31;
	} else {
		var_1_81 = (abs (var_1_70));
	}


	// From: Req32Batch42Amount500
	if (! ((var_1_35 ^ var_1_32) != (var_1_24 * var_1_32))) {
		var_1_89 = (var_1_55 - var_1_32);
	} else {
		var_1_89 = (abs (var_1_55 - (min (1000u , var_1_35))));
	}


	// From: Req44Batch42Amount500
	var_1_106 = var_1_35;


	// From: Req46Batch42Amount500
	var_1_108 = var_1_35;


	// From: Req48Batch42Amount500
	var_1_110 = var_1_19;


	// From: Req50Batch42Amount500
	var_1_112 = var_1_39;


	// From: Req51Batch42Amount500
	var_1_113 = var_1_49;


	// From: Req53Batch42Amount500
	var_1_115 = var_1_65;


	// From: Req24Batch42Amount500
	if (var_1_100 != var_1_5) {
		var_1_76 = ((var_1_77 - var_1_113) - 1);
	}


	// From: Req10Batch42Amount500
	if (((var_1_104 * var_1_108) + var_1_24) == var_1_76) {
		var_1_36 = (25 + (min ((abs (var_1_48)) , var_1_24)));
	} else {
		var_1_36 = (var_1_39 - var_1_97);
	}


	// From: Req22Batch42Amount500
	unsigned char stepLocal_10 = var_1_12;
	if (stepLocal_10 || var_1_18) {
		if ((var_1_42 * var_1_72) >= var_1_6) {
			var_1_69 = ((min ((min (var_1_39 , var_1_70)) , var_1_71)) - var_1_48);
		}
	}


	// From: Req37Batch42Amount500
	unsigned short int stepLocal_24 = var_1_69;
	if ((abs (var_1_57)) >= stepLocal_24) {
		var_1_98 = (last_1_var_1_98 || var_1_18);
	} else {
		var_1_98 = (var_1_21 || (var_1_12 || var_1_99));
	}


	// From: Req16Batch42Amount500
	if (var_1_11 || (var_1_105 || var_1_88)) {
		if (var_1_6 > var_1_14) {
			if (var_1_21) {
				var_1_52 = (min ((var_1_55 - var_1_34) , (var_1_56 - var_1_48)));
			} else {
				if (var_1_78) {
					var_1_52 = ((max (var_1_32 , var_1_48)) + (var_1_25 + last_1_var_1_52));
				} else {
					var_1_52 = ((var_1_57 + var_1_58) - (var_1_59 - var_1_49));
				}
			}
		}
	}


	// From: Req54Batch42Amount500
	if (var_1_98) {
		var_1_116 = var_1_71;
	} else {
		var_1_116 = 64;
	}


	// From: Req19Batch42Amount500
	if (var_1_21) {
		if (var_1_56 > var_1_76) {
			var_1_64 = ((min (var_1_23 , var_1_34)) + var_1_25);
		} else {
			var_1_64 = (var_1_115 - var_1_49);
		}
	} else {
		var_1_64 = ((var_1_25 + (var_1_13 + var_1_24)) - (var_1_65 - (var_1_66 - var_1_35)));
	}


	// From: Req30Batch42Amount500
	if (var_1_51 > last_1_var_1_87) {
		if (var_1_27) {
			var_1_87 = (var_1_13 + var_1_23);
		} else {
			var_1_87 = (var_1_34 + var_1_26);
		}
	}


	// From: Req39Batch42Amount500
	if (var_1_14 < var_1_107) {
		if (last_1_var_1_101 < var_1_35) {
			var_1_101 = ((var_1_25 - var_1_93) + var_1_29);
		} else {
			var_1_101 = ((var_1_102 + var_1_66) - 128);
		}
	} else {
		var_1_101 = (min (var_1_32 , var_1_102));
	}


	// From: Req47Batch42Amount500
	if (var_1_98) {
		var_1_109 = var_1_6;
	} else {
		var_1_109 = var_1_74;
	}


	// From: Req21Batch42Amount500
	unsigned char stepLocal_9 = var_1_32;
	if (var_1_1 >= (- var_1_1)) {
		var_1_68 = (var_1_12 || (! var_1_21));
	} else {
		if (var_1_32 <= stepLocal_9) {
			var_1_68 = ((var_1_66 >= var_1_56) && (! (var_1_18 && var_1_11)));
		}
	}


	// From: Req8Batch42Amount500
	unsigned char stepLocal_1 = var_1_11;
	if (stepLocal_1 || (var_1_115 > var_1_24)) {
		var_1_28 = ((var_1_29 - var_1_23) + (min (var_1_24 , var_1_25)));
	} else {
		var_1_28 = ((var_1_29 - (var_1_30 + var_1_31)) + (var_1_24 + 4));
	}


	// From: Req13Batch42Amount500
	signed long int stepLocal_5 = 128 - var_1_29;
	unsigned char stepLocal_4 = var_1_104;
	if (stepLocal_5 < var_1_69) {
		if (var_1_12) {
			var_1_46 = (var_1_6 - var_1_7);
		}
	} else {
		if (var_1_11) {
			if (((var_1_33 / var_1_35) << 1) < stepLocal_4) {
				var_1_46 = var_1_3;
			} else {
				var_1_46 = (var_1_47 + var_1_4);
			}
		} else {
			var_1_46 = (abs (min (var_1_42 , var_1_6)));
		}
	}


	// From: Req26Batch42Amount500
	signed long int stepLocal_13 = var_1_49 * var_1_29;
	if (var_1_27) {
		if (stepLocal_13 != var_1_36) {
			var_1_80 = var_1_43;
		}
	} else {
		var_1_80 = (var_1_75 - (min (var_1_7 , var_1_73)));
	}


	// From: Req4Batch42Amount500
	if (var_1_1 < var_1_107) {
		var_1_17 = var_1_11;
	} else {
		if (var_1_8) {
			var_1_17 = (var_1_11 && (var_1_8 || var_1_18));
		} else {
			if (((var_1_90 / var_1_19) & var_1_97) > var_1_116) {
				var_1_17 = (var_1_18 && var_1_11);
			} else {
				if (var_1_8) {
					var_1_17 = (! 0);
				} else {
					var_1_17 = ((var_1_12 || var_1_21) || (! var_1_11));
				}
			}
		}
	}


	// From: Req5Batch42Amount500
	unsigned char stepLocal_0 = var_1_18;
	if (var_1_68 || stepLocal_0) {
		var_1_22 = ((var_1_23 + var_1_24) - var_1_25);
	} else {
		if ((var_1_5 * var_1_80) <= 50.75) {
			var_1_22 = var_1_25;
		} else {
			var_1_22 = var_1_25;
		}
	}


	// From: Req29Batch42Amount500
	if (var_1_78) {
		var_1_85 = (abs (min ((min (var_1_31 , var_1_83)) , (min (var_1_22 , -2)))));
	} else {
		if (var_1_21) {
			var_1_85 = (8 - (min (last_1_var_1_85 , 0)));
		}
	}


	// From: Req20Batch42Amount500
	unsigned char stepLocal_8 = var_1_17;
	if (var_1_3 >= var_1_62) {
		if (var_1_18 && stepLocal_8) {
			var_1_67 = var_1_24;
		} else {
			var_1_67 = (var_1_24 - var_1_104);
		}
	} else {
		var_1_67 = (var_1_29 + var_1_104);
	}


	// From: Req55Batch42Amount500
	unsigned char stepLocal_28 = (var_1_81 == var_1_85) || var_1_21;
	if (stepLocal_28 && ((var_1_47 < 49.2f) && (var_1_64 <= var_1_69))) {
		var_1_117 = (max (var_1_57 , var_1_49));
	} else {
		var_1_117 = var_1_106;
	}


	// From: Req41Batch42Amount500
	unsigned char stepLocal_27 = var_1_32;
	unsigned char stepLocal_26 = var_1_35;
	if (stepLocal_27 != ((var_1_35 / var_1_33) / (min (var_1_39 , var_1_93)))) {
		if (var_1_28 > stepLocal_26) {
			var_1_103 = var_1_19;
		} else {
			var_1_103 = var_1_85;
		}
	} else {
		var_1_103 = 8;
	}


	// From: Req35Batch42Amount500
	signed char stepLocal_22 = var_1_93;
	unsigned char stepLocal_21 = (var_1_114 && var_1_11) && var_1_63;
	unsigned char stepLocal_20 = var_1_31;
	signed long int stepLocal_19 = 2;
	if (stepLocal_20 <= (var_1_32 / var_1_34)) {
		if (stepLocal_22 >= var_1_32) {
			if (var_1_5 < var_1_72) {
				var_1_94 = (var_1_28 + var_1_117);
			}
		} else {
			var_1_94 = (max (var_1_32 , var_1_65));
		}
	} else {
		if (var_1_48 == stepLocal_19) {
			if (var_1_12 && stepLocal_21) {
				var_1_94 = (min (var_1_117 , ((var_1_96 - 100) - var_1_67)));
			} else {
				var_1_94 = (abs (var_1_23));
			}
		} else {
			var_1_94 = (var_1_29 + (var_1_101 + var_1_34));
		}
	}


	// From: Req11Batch42Amount500
	unsigned short int stepLocal_3 = var_1_94;
	if (var_1_46 == var_1_3) {
		var_1_41 = (var_1_3 + (var_1_4 + (var_1_42 + var_1_43)));
	} else {
		if ((var_1_100 / (abs (var_1_14))) > var_1_43) {
			if (var_1_39 <= stepLocal_3) {
				var_1_41 = var_1_7;
			}
		}
	}


	// From: Req28Batch42Amount500
	signed long int stepLocal_14 = var_1_103 >> (var_1_83 + var_1_84);
	if (stepLocal_14 > var_1_97) {
		var_1_82 = (((abs (1185103238u)) - var_1_115) + var_1_104);
	} else {
		var_1_82 = var_1_115;
	}


	// From: Req17Batch42Amount500
	if (var_1_34 > (max ((var_1_104 * 4) , var_1_87))) {
		if (((abs (var_1_19)) * var_1_24) == var_1_58) {
			if (var_1_94 != var_1_23) {
				var_1_60 = (var_1_6 - var_1_7);
			} else {
				var_1_60 = (var_1_7 - (min (var_1_6 , var_1_62)));
			}
		} else {
			var_1_60 = var_1_7;
		}
	} else {
		var_1_60 = (var_1_4 + var_1_5);
	}


	// From: Req34Batch42Amount500
	unsigned long int stepLocal_18 = var_1_59;
	unsigned char stepLocal_17 = var_1_60 < (var_1_7 * var_1_3);
	unsigned long int stepLocal_16 = var_1_81;
	unsigned short int stepLocal_15 = var_1_87;
	if (var_1_98) {
		if (1 <= stepLocal_16) {
			if (var_1_11) {
				if (! var_1_114) {
					var_1_91 = (abs (max (var_1_84 , (var_1_92 + var_1_30))));
				}
			}
		} else {
			var_1_91 = (max (var_1_83 , var_1_25));
		}
	} else {
		if (var_1_87 >= stepLocal_18) {
			if (var_1_12) {
				var_1_91 = (min (var_1_84 , var_1_31));
			} else {
				if (var_1_17) {
					if ((128 <= var_1_48) || stepLocal_17) {
						if ((- var_1_13) < stepLocal_15) {
							var_1_91 = ((var_1_23 + var_1_83) - var_1_84);
						} else {
							var_1_91 = (var_1_83 + var_1_30);
						}
					}
				}
			}
		} else {
			var_1_91 = (var_1_83 - (var_1_93 - var_1_31));
		}
	}


	// From: Req49Batch42Amount500
	if (var_1_88) {
		var_1_111 = var_1_70;
	} else {
		var_1_111 = var_1_91;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -230584.3009213691390e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 2305843.009213691390e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -230584.3009213691390e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691390e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	assume_abort_if_not(var_1_14 != 0.0F);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -128);
	assume_abort_if_not(var_1_19 <= 127);
	assume_abort_if_not(var_1_19 != 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 63);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 32);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 31);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967295);
	assume_abort_if_not(var_1_33 != 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 190);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 127);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 32767);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -115292.1504606845700e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 1152921.504606845700e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -115292.1504606845700e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 1152921.504606845700e+12F && var_1_43 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= -461168.6018427382800e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427382800e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 127);
	assume_abort_if_not(var_1_49 <= 254);
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -922337.2036854776000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
	assume_abort_if_not(var_1_50 != 0.0F);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 2147483647);
	assume_abort_if_not(var_1_55 <= 4294967294);
	var_1_56 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_56 >= 2147483647);
	assume_abort_if_not(var_1_56 <= 4294967294);
	var_1_57 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_57 >= 1073741823);
	assume_abort_if_not(var_1_57 <= 2147483647);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 1073741824);
	assume_abort_if_not(var_1_58 <= 2147483647);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 1073741823);
	assume_abort_if_not(var_1_59 <= 2147483647);
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_65 >= 16383);
	assume_abort_if_not(var_1_65 <= 32766);
	var_1_66 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_66 >= 8191);
	assume_abort_if_not(var_1_66 <= 16383);
	var_1_70 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_70 >= 32767);
	assume_abort_if_not(var_1_70 <= 65534);
	var_1_71 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_71 >= 32767);
	assume_abort_if_not(var_1_71 <= 65534);
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 6917529.027641073700e+12F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854765600e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 2305843.009213691390e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427382800e+12F && var_1_75 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_77 >= 1073741822);
	assume_abort_if_not(var_1_77 <= 2147483646);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 1);
	assume_abort_if_not(var_1_79 <= 1);
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 9);
	var_1_84 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 8);
	var_1_92 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_92 >= -63);
	assume_abort_if_not(var_1_92 <= 63);
	var_1_93 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_93 >= 63);
	assume_abort_if_not(var_1_93 <= 126);
	var_1_96 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_96 >= 49150);
	assume_abort_if_not(var_1_96 <= 65534);
	var_1_99 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_99 >= 0);
	assume_abort_if_not(var_1_99 <= 0);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_110 = var_1_110;
	last_1_var_1_113 = var_1_113;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_1 <= 2.25) ? (var_1_1 == ((double) (min (2.5 , ((var_1_3 + var_1_4) + (abs (var_1_5))))))) : (var_1_1 == ((double) (max ((max (7.6 , var_1_3)) , (var_1_6 - var_1_7)))))) && ((last_1_var_1_17 || (var_1_6 > (var_1_7 - var_1_10))) ? (var_1_8 == ((unsigned char) (! var_1_11))) : (var_1_8 == ((unsigned char) ((var_1_3 <= var_1_10) && var_1_12))))) && ((last_1_var_1_109 >= (99.3 / var_1_14)) ? ((last_1_var_1_60 > 0.4) ? (((1.0000000000075E11 + last_1_var_1_60) <= last_1_var_1_1) ? (var_1_13 == ((unsigned short int) last_1_var_1_48)) : 1) : (var_1_13 == ((unsigned short int) last_1_var_1_48))) : 1)) && ((var_1_1 < var_1_107) ? (var_1_17 == ((unsigned char) var_1_11)) : (var_1_8 ? (var_1_17 == ((unsigned char) (var_1_11 && (var_1_8 || var_1_18)))) : ((((var_1_90 / var_1_19) & var_1_97) > var_1_116) ? (var_1_17 == ((unsigned char) (var_1_18 && var_1_11))) : (var_1_8 ? (var_1_17 == ((unsigned char) (! 0))) : (var_1_17 == ((unsigned char) ((var_1_12 || var_1_21) || (! var_1_11))))))))) && ((var_1_68 || var_1_18) ? (var_1_22 == ((signed char) ((var_1_23 + var_1_24) - var_1_25))) : (((var_1_5 * var_1_80) <= 50.75) ? (var_1_22 == ((signed char) var_1_25)) : (var_1_22 == ((signed char) var_1_25))))) && (((abs (var_1_104)) != var_1_23) ? (var_1_26 == ((signed char) (var_1_24 - (abs (var_1_25))))) : (var_1_26 == ((signed char) (min (var_1_25 , var_1_24)))))) && ((var_1_10 < ((var_1_100 / var_1_14) + var_1_3)) ? (var_1_27 == ((unsigned char) (! (var_1_12 || (! var_1_11))))) : 1)) && ((var_1_11 || (var_1_115 > var_1_24)) ? (var_1_28 == ((unsigned char) ((var_1_29 - var_1_23) + (min (var_1_24 , var_1_25))))) : (var_1_28 == ((unsigned char) ((var_1_29 - (var_1_30 + var_1_31)) + (var_1_24 + 4)))))) && ((((var_1_29 & var_1_31) / var_1_33) >= (min (last_1_var_1_32 , last_1_var_1_85))) ? (last_1_var_1_68 ? (var_1_32 == ((unsigned char) ((max ((var_1_34 - var_1_31) , var_1_35)) - var_1_25))) : (var_1_32 == ((unsigned char) (max ((200 - var_1_23) , var_1_34))))) : (var_1_32 == ((unsigned char) var_1_31)))) && ((((var_1_104 * var_1_108) + var_1_24) == var_1_76) ? (var_1_36 == ((unsigned short int) (25 + (min ((abs (var_1_48)) , var_1_24))))) : (var_1_36 == ((unsigned short int) (var_1_39 - var_1_97))))) && ((var_1_46 == var_1_3) ? (var_1_41 == ((double) (var_1_3 + (var_1_4 + (var_1_42 + var_1_43))))) : (((var_1_100 / (abs (var_1_14))) > var_1_43) ? ((var_1_39 <= var_1_94) ? (var_1_41 == ((double) var_1_7)) : 1) : 1))) && (var_1_45 == ((signed char) (var_1_30 + -2)))) && (((128 - var_1_29) < var_1_69) ? (var_1_12 ? (var_1_46 == ((float) (var_1_6 - var_1_7))) : 1) : (var_1_11 ? ((((var_1_33 / var_1_35) << 1) < var_1_104) ? (var_1_46 == ((float) var_1_3)) : (var_1_46 == ((float) (var_1_47 + var_1_4)))) : (var_1_46 == ((float) (abs (min (var_1_42 , var_1_6)))))))) && (((16 + (min (last_1_var_1_97 , last_1_var_1_52))) != last_1_var_1_45) ? (var_1_48 == ((unsigned char) (var_1_34 - (var_1_24 + var_1_30)))) : (var_1_18 ? (var_1_48 == ((unsigned char) (var_1_49 - var_1_24))) : (((0.75f / (min (var_1_14 , var_1_50))) < last_1_var_1_72) ? (var_1_48 == ((unsigned char) (min (var_1_23 , var_1_34)))) : 1)))) && ((var_1_18 && var_1_88) ? (var_1_51 == ((signed short int) (max ((var_1_35 + -128) , 0)))) : 1)) && ((var_1_11 || (var_1_105 || var_1_88)) ? ((var_1_6 > var_1_14) ? (var_1_21 ? (var_1_52 == ((unsigned long int) (min ((var_1_55 - var_1_34) , (var_1_56 - var_1_48))))) : (var_1_78 ? (var_1_52 == ((unsigned long int) ((max (var_1_32 , var_1_48)) + (var_1_25 + last_1_var_1_52)))) : (var_1_52 == ((unsigned long int) ((var_1_57 + var_1_58) - (var_1_59 - var_1_49)))))) : 1) : 1)) && ((var_1_34 > (max ((var_1_104 * 4) , var_1_87))) ? ((((abs (var_1_19)) * var_1_24) == var_1_58) ? ((var_1_94 != var_1_23) ? (var_1_60 == ((double) (var_1_6 - var_1_7))) : (var_1_60 == ((double) (var_1_7 - (min (var_1_6 , var_1_62)))))) : (var_1_60 == ((double) var_1_7))) : (var_1_60 == ((double) (var_1_4 + var_1_5))))) && ((last_1_var_1_67 >= (min ((last_1_var_1_52 & last_1_var_1_113) , var_1_58))) ? (var_1_63 == ((unsigned char) (var_1_12 || var_1_18))) : 1)) && (var_1_21 ? ((var_1_56 > var_1_76) ? (var_1_64 == ((signed short int) ((min (var_1_23 , var_1_34)) + var_1_25))) : (var_1_64 == ((signed short int) (var_1_115 - var_1_49)))) : (var_1_64 == ((signed short int) ((var_1_25 + (var_1_13 + var_1_24)) - (var_1_65 - (var_1_66 - var_1_35))))))) && ((var_1_3 >= var_1_62) ? ((var_1_18 && var_1_17) ? (var_1_67 == ((signed long int) var_1_24)) : (var_1_67 == ((signed long int) (var_1_24 - var_1_104)))) : (var_1_67 == ((signed long int) (var_1_29 + var_1_104))))) && ((var_1_1 >= (- var_1_1)) ? (var_1_68 == ((unsigned char) (var_1_12 || (! var_1_21)))) : ((var_1_32 <= var_1_32) ? (var_1_68 == ((unsigned char) ((var_1_66 >= var_1_56) && (! (var_1_18 && var_1_11))))) : 1))) && ((var_1_12 || var_1_18) ? (((var_1_42 * var_1_72) >= var_1_6) ? (var_1_69 == ((unsigned short int) ((min ((min (var_1_39 , var_1_70)) , var_1_71)) - var_1_48))) : 1) : 1)) && (var_1_105 ? (var_1_72 == ((float) (var_1_7 - var_1_6))) : (var_1_72 == ((float) ((var_1_74 + var_1_75) - var_1_73))))) && ((var_1_100 != var_1_5) ? (var_1_76 == ((signed long int) ((var_1_77 - var_1_113) - 1))) : 1)) && ((((8 * last_1_var_1_85) + var_1_56) <= last_1_var_1_110) ? (((- var_1_39) != ((var_1_23 - var_1_66) << 5)) ? (var_1_78 == ((unsigned char) (! (var_1_11 && (! var_1_79))))) : (var_1_78 == ((unsigned char) (var_1_79 && var_1_11)))) : (var_1_78 == ((unsigned char) (! var_1_11))))) && (var_1_27 ? (((var_1_49 * var_1_29) != var_1_36) ? (var_1_80 == ((double) var_1_43)) : 1) : (var_1_80 == ((double) (var_1_75 - (min (var_1_7 , var_1_73))))))) && ((var_1_75 != 2.1f) ? (var_1_81 == ((unsigned long int) var_1_31)) : (var_1_81 == ((unsigned long int) (abs (var_1_70)))))) && (((var_1_103 >> (var_1_83 + var_1_84)) > var_1_97) ? (var_1_82 == ((unsigned long int) (((abs (1185103238u)) - var_1_115) + var_1_104))) : (var_1_82 == ((unsigned long int) var_1_115)))) && (var_1_78 ? (var_1_85 == ((signed short int) (abs (min ((min (var_1_31 , var_1_83)) , (min (var_1_22 , -2))))))) : (var_1_21 ? (var_1_85 == ((signed short int) (8 - (min (last_1_var_1_85 , 0))))) : 1))) && ((var_1_51 > last_1_var_1_87) ? (var_1_27 ? (var_1_87 == ((unsigned short int) (var_1_13 + var_1_23))) : (var_1_87 == ((unsigned short int) (var_1_34 + var_1_26)))) : 1)) && (var_1_18 ? (var_1_8 ? (var_1_88 == ((unsigned char) var_1_79)) : 1) : 1)) && ((! ((var_1_35 ^ var_1_32) != (var_1_24 * var_1_32))) ? (var_1_89 == ((unsigned long int) (var_1_55 - var_1_32))) : (var_1_89 == ((unsigned long int) (abs (var_1_55 - (min (1000u , var_1_35)))))))) && ((-128 > last_1_var_1_102) ? ((last_1_var_1_13 == last_1_var_1_32) ? (((min (last_1_var_1_13 , var_1_70)) <= (var_1_25 * last_1_var_1_81)) ? (last_1_var_1_63 ? ((last_1_var_1_48 == var_1_71) ? (var_1_90 == ((signed short int) (min (last_1_var_1_102 , last_1_var_1_102)))) : (var_1_90 == ((signed short int) (var_1_31 - 4)))) : (var_1_90 == ((signed short int) (min (last_1_var_1_113 , var_1_49))))) : (var_1_90 == ((signed short int) (var_1_25 + (min (var_1_83 , var_1_49)))))) : 1) : (((var_1_56 - var_1_71) > var_1_35) ? (var_1_90 == ((signed short int) (var_1_49 - var_1_83))) : (var_1_90 == ((signed short int) ((last_1_var_1_113 + var_1_35) + var_1_31)))))) && (var_1_98 ? ((1 <= var_1_81) ? (var_1_11 ? ((! var_1_114) ? (var_1_91 == ((signed char) (abs (max (var_1_84 , (var_1_92 + var_1_30)))))) : 1) : 1) : (var_1_91 == ((signed char) (max (var_1_83 , var_1_25))))) : ((var_1_87 >= var_1_59) ? (var_1_12 ? (var_1_91 == ((signed char) (min (var_1_84 , var_1_31)))) : (var_1_17 ? (((128 <= var_1_48) || (var_1_60 < (var_1_7 * var_1_3))) ? (((- var_1_13) < var_1_87) ? (var_1_91 == ((signed char) ((var_1_23 + var_1_83) - var_1_84))) : (var_1_91 == ((signed char) (var_1_83 + var_1_30)))) : 1) : 1)) : (var_1_91 == ((signed char) (var_1_83 - (var_1_93 - var_1_31))))))) && ((var_1_31 <= (var_1_32 / var_1_34)) ? ((var_1_93 >= var_1_32) ? ((var_1_5 < var_1_72) ? (var_1_94 == ((unsigned short int) (var_1_28 + var_1_117))) : 1) : (var_1_94 == ((unsigned short int) (max (var_1_32 , var_1_65))))) : ((var_1_48 == 2) ? ((var_1_12 && ((var_1_114 && var_1_11) && var_1_63)) ? (var_1_94 == ((unsigned short int) (min (var_1_117 , ((var_1_96 - 100) - var_1_67))))) : (var_1_94 == ((unsigned short int) (abs (var_1_23))))) : (var_1_94 == ((unsigned short int) (var_1_29 + (var_1_101 + var_1_34))))))) && (((var_1_6 >= var_1_43) || var_1_8) ? (var_1_97 == ((unsigned char) var_1_34)) : 1)) && (((abs (var_1_57)) >= var_1_69) ? (var_1_98 == ((unsigned char) (last_1_var_1_98 || var_1_18))) : (var_1_98 == ((unsigned char) (var_1_21 || (var_1_12 || var_1_99)))))) && (((last_1_var_1_80 * var_1_3) > var_1_5) ? (var_1_100 == ((float) (max (var_1_43 , var_1_73)))) : 1)) && ((var_1_14 < var_1_107) ? ((last_1_var_1_101 < var_1_35) ? (var_1_101 == ((signed long int) ((var_1_25 - var_1_93) + var_1_29))) : (var_1_101 == ((signed long int) ((var_1_102 + var_1_66) - 128)))) : (var_1_101 == ((signed long int) (min (var_1_32 , var_1_102)))))) && ((var_1_90 <= var_1_65) ? (var_1_102 == ((unsigned long int) (var_1_56 - var_1_83))) : 1)) && ((var_1_32 != ((var_1_35 / var_1_33) / (min (var_1_39 , var_1_93)))) ? ((var_1_28 > var_1_35) ? (var_1_103 == ((signed short int) var_1_19)) : (var_1_103 == ((signed short int) var_1_85))) : (var_1_103 == ((signed short int) 8)))) && (last_1_var_1_27 ? (var_1_104 == ((unsigned char) var_1_31)) : (var_1_104 == ((unsigned char) var_1_35)))) && (var_1_63 ? (var_1_105 == ((unsigned char) 1)) : 1)) && (var_1_106 == ((signed short int) var_1_35))) && (var_1_78 ? (var_1_107 == ((double) var_1_75)) : (var_1_107 == ((double) var_1_5)))) && (var_1_108 == ((signed long int) var_1_35))) && (var_1_98 ? (var_1_109 == ((double) var_1_6)) : (var_1_109 == ((double) var_1_74)))) && (var_1_110 == ((signed short int) var_1_19))) && (var_1_88 ? (var_1_111 == ((signed long int) var_1_70)) : (var_1_111 == ((signed long int) var_1_91)))) && (var_1_112 == ((unsigned long int) var_1_39))) && (var_1_113 == ((unsigned long int) var_1_49))) && (var_1_88 ? (var_1_114 == ((unsigned char) var_1_12)) : (var_1_114 == ((unsigned char) var_1_99)))) && (var_1_115 == ((unsigned short int) var_1_65))) && (var_1_98 ? (var_1_116 == ((unsigned short int) var_1_71)) : (var_1_116 == ((unsigned short int) 64)))) && ((((var_1_81 == var_1_85) || var_1_21) && ((var_1_47 < 49.2f) && (var_1_64 <= var_1_69))) ? (var_1_117 == ((unsigned long int) (max (var_1_57 , var_1_49)))) : (var_1_117 == ((unsigned long int) var_1_106)))
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
