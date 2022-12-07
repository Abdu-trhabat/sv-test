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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch28Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 64.4;
float var_1_4 = 5.5;
float var_1_5 = 64.6;
float var_1_6 = 4.4;
unsigned short int var_1_7 = 32;
signed long int var_1_9 = 5;
float var_1_10 = 5.75;
unsigned short int var_1_11 = 128;
unsigned char var_1_15 = 0;
unsigned char var_1_18 = 32;
unsigned char var_1_19 = 50;
unsigned char var_1_20 = 5;
unsigned char var_1_21 = 10;
unsigned char var_1_22 = 10;
unsigned char var_1_23 = 128;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 200;
unsigned char var_1_26 = 64;
double var_1_27 = 4.7;
double var_1_28 = 63.375;
double var_1_29 = 32.2;
double var_1_30 = 4.75;
float var_1_31 = 9.4;
unsigned char var_1_32 = 2;
unsigned short int var_1_34 = 10;
unsigned short int var_1_35 = 54720;
unsigned short int var_1_36 = 10000;
unsigned short int var_1_38 = 10000;
unsigned short int var_1_39 = 25;
double var_1_40 = 64.4;
signed long int var_1_41 = -1000000000;
signed long int var_1_42 = 1000000000;
signed long int var_1_43 = 256;
signed long int var_1_44 = 1393642684;
signed short int var_1_45 = 0;
double var_1_46 = 499.9;
double var_1_47 = 100.3;
unsigned long int var_1_48 = 0;
unsigned long int var_1_49 = 1676359603;
unsigned char var_1_50 = 0;
unsigned long int var_1_51 = 2185240797;
signed long int var_1_52 = 256;
unsigned short int var_1_53 = 128;
unsigned long int var_1_55 = 1;
unsigned short int var_1_56 = 18263;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 64;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 5;
unsigned long int var_1_65 = 64;
unsigned long int var_1_66 = 2313651602;
unsigned long int var_1_67 = 256;
unsigned long int var_1_69 = 2;
unsigned char var_1_70 = 1;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 1;
unsigned long int var_1_74 = 4;
signed long int var_1_75 = 4;
unsigned short int var_1_76 = 8;
unsigned char var_1_77 = 1;
double var_1_78 = 64.4;
unsigned long int var_1_79 = 1851614406;
double var_1_80 = 0.0;
double var_1_81 = 49.5;
unsigned short int var_1_82 = 10;
signed long int var_1_83 = -128;
unsigned short int var_1_84 = 0;
unsigned char var_1_85 = 1;
signed char var_1_86 = -128;
unsigned short int var_1_87 = 0;
unsigned short int var_1_88 = 43555;
signed short int var_1_89 = -5;
unsigned char var_1_92 = 0;
unsigned char var_1_93 = 4;
unsigned short int var_1_94 = 256;
double var_1_95 = 255.6;
double var_1_96 = 24.8;
unsigned char var_1_97 = 8;
signed short int var_1_98 = 256;
signed short int var_1_99 = -10;
unsigned char var_1_100 = 0;
float var_1_101 = 64.75;
unsigned char var_1_102 = 128;
unsigned long int var_1_103 = 64;
unsigned char var_1_104 = 0;
signed long int var_1_105 = 64;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_32 = 2;
signed long int last_1_var_1_41 = -1000000000;
signed short int last_1_var_1_45 = 0;
unsigned char last_1_var_1_50 = 0;
unsigned char last_1_var_1_58 = 0;
unsigned char last_1_var_1_60 = 0;
unsigned long int last_1_var_1_65 = 64;
unsigned char last_1_var_1_70 = 1;
unsigned short int last_1_var_1_76 = 8;
unsigned char last_1_var_1_85 = 1;
signed short int last_1_var_1_89 = -5;
unsigned char last_1_var_1_93 = 4;
double last_1_var_1_96 = 24.8;
unsigned char last_1_var_1_97 = 8;
float last_1_var_1_101 = 64.75;
unsigned long int last_1_var_1_103 = 64;
unsigned char last_1_var_1_104 = 0;
signed long int last_1_var_1_105 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req24Batch28Amount500
	unsigned char stepLocal_31 = var_1_61;
	unsigned long int stepLocal_30 = 128u;
	if ((last_1_var_1_101 < var_1_47) || stepLocal_31) {
		if (stepLocal_30 < last_1_var_1_93) {
			var_1_70 = (! var_1_63);
		} else {
			var_1_70 = var_1_61;
		}
	} else {
		var_1_70 = (var_1_63 || (! var_1_62));
	}


	// From: Req47Batch28Amount500
	if (var_1_70) {
		var_1_101 = var_1_47;
	}


	// From: Req4Batch28Amount500
	signed long int stepLocal_10 = var_1_9 >> last_1_var_1_58;
	signed long int stepLocal_9 = last_1_var_1_58;
	if (! last_1_var_1_104) {
		if (stepLocal_9 <= last_1_var_1_65) {
			var_1_27 = ((var_1_4 + 31.875) - var_1_10);
		} else {
			if (((var_1_6 * last_1_var_1_96) / var_1_28) != var_1_10) {
				var_1_27 = (min ((min (var_1_4 , var_1_10)) , (max ((var_1_6 + var_1_5) , var_1_29))));
			} else {
				if (last_1_var_1_60) {
					if (stepLocal_10 <= last_1_var_1_65) {
						var_1_27 = var_1_29;
					} else {
						var_1_27 = ((max (var_1_5 , (var_1_4 + var_1_30))) + var_1_10);
					}
				} else {
					var_1_27 = var_1_30;
				}
			}
		}
	}


	// From: Req19Batch28Amount500
	if (var_1_27 >= var_1_47) {
		var_1_60 = (var_1_61 || var_1_62);
	} else {
		var_1_60 = (var_1_61 || (! (var_1_62 || var_1_63)));
	}


	// From: Req3Batch28Amount500
	signed long int stepLocal_8 = last_1_var_1_32;
	unsigned char stepLocal_7 = last_1_var_1_104;
	unsigned char stepLocal_6 = last_1_var_1_104;
	if (last_1_var_1_104 || stepLocal_6) {
		if ((last_1_var_1_97 / var_1_7) >= stepLocal_8) {
			var_1_15 = (((var_1_18 + var_1_19) - var_1_20) + (min (var_1_21 , var_1_22)));
		} else {
			if (stepLocal_7 || (var_1_18 < var_1_22)) {
				var_1_15 = (min (((min (var_1_23 , var_1_24)) - var_1_19) , var_1_22));
			} else {
				var_1_15 = ((var_1_25 - var_1_19) - (max (var_1_22 , var_1_20)));
			}
		}
	} else {
		var_1_15 = (min ((var_1_19 + (var_1_26 - 4)) , var_1_23));
	}


	// From: Req33Batch28Amount500
	if (last_1_var_1_70) {
		var_1_84 = last_1_var_1_105;
	}


	// From: Req8Batch28Amount500
	unsigned char stepLocal_13 = last_1_var_1_85;
	if (last_1_var_1_104 && stepLocal_13) {
		var_1_39 = (last_1_var_1_103 + var_1_19);
	} else {
		var_1_39 = (var_1_35 - var_1_25);
	}


	// From: Req5Batch28Amount500
	if (var_1_10 <= (10.625f + var_1_4)) {
		var_1_31 = var_1_10;
	}


	// From: Req9Batch28Amount500
	var_1_40 = ((min (var_1_4 , var_1_5)) - var_1_10);


	// From: Req13Batch28Amount500
	signed long int stepLocal_18 = 64 / var_1_23;
	if (stepLocal_18 != (max (-8 , (abs (var_1_21))))) {
		var_1_46 = ((var_1_4 + (100.1 + var_1_47)) - 64.7);
	}


	// From: Req18Batch28Amount500
	var_1_58 = ((max ((var_1_26 + var_1_59) , var_1_24)) - var_1_20);


	// From: Req20Batch28Amount500
	var_1_64 = (min (var_1_55 , var_1_24));


	// From: Req35Batch28Amount500
	var_1_86 = (var_1_20 + var_1_19);


	// From: Req38Batch28Amount500
	if (var_1_62) {
		var_1_92 = var_1_72;
	} else {
		var_1_92 = 0;
	}


	// From: Req39Batch28Amount500
	var_1_93 = var_1_19;


	// From: Req41Batch28Amount500
	var_1_95 = var_1_10;


	// From: Req42Batch28Amount500
	if (var_1_73) {
		var_1_96 = var_1_4;
	} else {
		var_1_96 = var_1_81;
	}


	// From: Req43Batch28Amount500
	if (var_1_72) {
		var_1_97 = var_1_18;
	}


	// From: Req45Batch28Amount500
	var_1_99 = -10;


	// From: Req46Batch28Amount500
	if (var_1_92) {
		var_1_100 = var_1_61;
	} else {
		var_1_100 = var_1_62;
	}


	// From: Req48Batch28Amount500
	var_1_102 = var_1_25;


	// From: Req49Batch28Amount500
	var_1_103 = var_1_56;


	// From: Req50Batch28Amount500
	if (var_1_92) {
		var_1_104 = 0;
	} else {
		var_1_104 = var_1_62;
	}


	// From: Req28Batch28Amount500
	if ((var_1_35 / var_1_18) < last_1_var_1_76) {
		if (((var_1_6 / var_1_28) + var_1_5) >= (var_1_4 - (max (var_1_10 , var_1_47)))) {
			var_1_76 = (var_1_35 - var_1_39);
		} else {
			var_1_76 = ((min (64 , var_1_84)) + (var_1_58 + var_1_21));
		}
	} else {
		var_1_76 = var_1_18;
	}


	// From: Req31Batch28Amount500
	unsigned char stepLocal_42 = var_1_104;
	unsigned short int stepLocal_41 = var_1_38;
	signed long int stepLocal_40 = var_1_35 - 256;
	if (var_1_29 > (min (8.4 , var_1_95))) {
		if (stepLocal_41 > var_1_23) {
			if (128.25 != (- var_1_101)) {
				if (stepLocal_40 > var_1_64) {
					var_1_82 = (min ((var_1_18 + var_1_102) , var_1_64));
				} else {
					if (((var_1_44 / var_1_7) <= (-5 * var_1_35)) && stepLocal_42) {
						var_1_82 = (max (var_1_22 , ((min (var_1_35 , 51630)) - 10)));
					} else {
						var_1_82 = (var_1_35 - (min (var_1_99 , (var_1_64 + var_1_59))));
					}
				}
			} else {
				var_1_82 = ((var_1_56 - var_1_26) + var_1_23);
			}
		} else {
			var_1_82 = ((min (var_1_22 , 5)) + var_1_84);
		}
	}


	// From: Req16Batch28Amount500
	unsigned char stepLocal_24 = var_1_58;
	if (! (var_1_42 <= var_1_58)) {
		if (var_1_20 != stepLocal_24) {
			var_1_52 = (var_1_93 - 4);
		} else {
			var_1_52 = (var_1_93 - (min (var_1_38 , (var_1_93 + var_1_58))));
		}
	} else {
		var_1_52 = (16 - (max ((32 + var_1_58) , 1)));
	}


	// From: Req40Batch28Amount500
	var_1_94 = var_1_97;


	// From: Req29Batch28Amount500
	unsigned short int stepLocal_37 = var_1_35;
	if (var_1_76 <= stepLocal_37) {
		var_1_77 = (! 1);
	} else {
		var_1_77 = (var_1_73 && var_1_63);
	}


	// From: Req12Batch28Amount500
	unsigned short int stepLocal_17 = var_1_94;
	unsigned char stepLocal_16 = var_1_77;
	if ((last_1_var_1_45 / var_1_18) >= stepLocal_17) {
		if (stepLocal_16 || var_1_100) {
			var_1_45 = last_1_var_1_45;
		}
	} else {
		var_1_45 = var_1_20;
	}


	// From: Req25Batch28Amount500
	unsigned short int stepLocal_34 = var_1_94;
	signed long int stepLocal_33 = var_1_36 % var_1_24;
	unsigned char stepLocal_32 = var_1_59;
	if (var_1_24 >= stepLocal_32) {
		var_1_71 = (var_1_72 || (var_1_61 || var_1_62));
	} else {
		if (stepLocal_34 >= (var_1_39 * (var_1_25 + var_1_64))) {
			if (! var_1_61) {
				var_1_71 = ((! (var_1_63 && var_1_73)) || var_1_72);
			} else {
				if (-128 > stepLocal_33) {
					var_1_71 = ((var_1_82 == var_1_93) || var_1_63);
				}
			}
		} else {
			var_1_71 = (var_1_104 || var_1_73);
		}
	}


	// From: Req34Batch28Amount500
	signed long int stepLocal_43 = var_1_20 * var_1_19;
	if (((var_1_86 + var_1_99) + 4) == stepLocal_43) {
		var_1_85 = ((var_1_77 && var_1_72) || var_1_63);
	} else {
		var_1_85 = (var_1_72 && var_1_61);
	}


	// From: Req15Batch28Amount500
	signed long int stepLocal_23 = (max (var_1_82 , var_1_20)) * (var_1_38 + var_1_42);
	unsigned long int stepLocal_22 = var_1_51 - 1u;
	unsigned char stepLocal_21 = (var_1_4 - var_1_5) >= var_1_29;
	unsigned char stepLocal_20 = var_1_64;
	if (stepLocal_22 <= var_1_19) {
		if (var_1_44 >= stepLocal_20) {
			if (! (! var_1_71)) {
				var_1_50 = (max (var_1_26 , var_1_21));
			} else {
				if (var_1_92 || stepLocal_21) {
					var_1_50 = (var_1_25 - var_1_19);
				}
			}
		} else {
			var_1_50 = var_1_23;
		}
	} else {
		if ((var_1_18 << last_1_var_1_50) <= stepLocal_23) {
			var_1_50 = ((var_1_26 - var_1_19) + var_1_21);
		}
	}


	// From: Req17Batch28Amount500
	signed short int stepLocal_25 = var_1_99;
	if (stepLocal_25 > (var_1_26 << (abs (var_1_55)))) {
		var_1_53 = (var_1_45 + var_1_18);
	} else {
		var_1_53 = (var_1_35 - (var_1_56 - (min (var_1_50 , var_1_21))));
	}


	// From: Req26Batch28Amount500
	signed long int stepLocal_35 = var_1_56 & (min (var_1_45 , var_1_35));
	if (stepLocal_35 < (max (var_1_64 , var_1_18))) {
		var_1_74 = (min ((var_1_66 - (var_1_64 + var_1_22)) , var_1_21));
	}


	// From: Req36Batch28Amount500
	unsigned long int stepLocal_44 = (max (var_1_38 , 32u)) + var_1_66;
	if ((var_1_74 + var_1_102) < stepLocal_44) {
		var_1_87 = var_1_93;
	} else {
		var_1_87 = ((min (var_1_35 , var_1_88)) - 8);
	}


	// From: Req44Batch28Amount500
	if (var_1_71) {
		var_1_98 = var_1_102;
	}


	// From: Req7Batch28Amount500
	unsigned long int stepLocal_12 = var_1_103;
	if ((max ((var_1_22 | var_1_93) , var_1_19)) <= stepLocal_12) {
		var_1_34 = (var_1_19 + var_1_103);
	} else {
		if (var_1_71) {
			if (var_1_6 <= var_1_5) {
				var_1_34 = ((var_1_35 - (var_1_36 - var_1_23)) - var_1_97);
			}
		} else {
			var_1_34 = (var_1_35 - ((var_1_38 - var_1_26) + var_1_21));
		}
	}


	// From: Req10Batch28Amount500
	if ((min (var_1_53 , var_1_76)) >= var_1_9) {
		if (var_1_39 < (var_1_24 / (var_1_25 - var_1_18))) {
			var_1_41 = ((var_1_7 + var_1_36) + ((last_1_var_1_41 + var_1_22) - (var_1_42 - var_1_21)));
		}
	} else {
		var_1_41 = (min (var_1_53 , var_1_25));
	}


	// From: Req23Batch28Amount500
	signed long int stepLocal_29 = 256;
	unsigned char stepLocal_28 = var_1_62;
	unsigned short int stepLocal_27 = var_1_7;
	unsigned char stepLocal_26 = var_1_100;
	if (var_1_102 < stepLocal_29) {
		if ((var_1_18 | (min (var_1_20 , 0))) > stepLocal_27) {
			if (stepLocal_28 || var_1_100) {
				if (var_1_92 && stepLocal_26) {
					if (64.5f == (var_1_5 - var_1_10)) {
						var_1_69 = (var_1_22 + var_1_93);
					} else {
						var_1_69 = ((64u + var_1_45) + (var_1_34 + var_1_23));
					}
				} else {
					var_1_69 = ((abs (abs (var_1_66))) - var_1_42);
				}
			} else {
				var_1_69 = (abs (min (var_1_15 , var_1_21)));
			}
		} else {
			var_1_69 = (min (((5u + var_1_102) + var_1_22) , ((min (50u , var_1_19)) + var_1_38)));
		}
	}


	// From: Req1Batch28Amount500
	unsigned short int stepLocal_3 = var_1_39;
	signed long int stepLocal_2 = -32;
	unsigned short int stepLocal_1 = var_1_82;
	signed long int stepLocal_0 = var_1_41 / var_1_9;
	if (var_1_39 <= stepLocal_1) {
		if (stepLocal_3 > var_1_82) {
			var_1_1 = (((var_1_4 + 25.2f) - var_1_5) + var_1_6);
		}
	} else {
		if (((var_1_82 * var_1_39) / var_1_7) >= stepLocal_0) {
			if (stepLocal_2 > ((var_1_82 + var_1_7) | var_1_41)) {
				var_1_1 = (var_1_4 - (var_1_5 + var_1_10));
			} else {
				var_1_1 = (min (var_1_5 , var_1_6));
			}
		} else {
			var_1_1 = (var_1_5 - var_1_4);
		}
	}


	// From: Req32Batch28Amount500
	if ((-1 / var_1_18) > (var_1_35 - var_1_102)) {
		if (var_1_63 || (var_1_1 == var_1_30)) {
			var_1_83 = (max (5 , (var_1_55 + var_1_22)));
		} else {
			var_1_83 = (10 - var_1_36);
		}
	} else {
		var_1_83 = (min (var_1_42 , -32));
	}


	// From: Req21Batch28Amount500
	var_1_65 = (var_1_66 - (abs (var_1_69)));


	// From: Req22Batch28Amount500
	if (var_1_102 < var_1_83) {
		var_1_67 = var_1_15;
	}


	// From: Req30Batch28Amount500
	unsigned char stepLocal_39 = var_1_72;
	unsigned long int stepLocal_38 = var_1_67;
	if ((- 499.3f) < var_1_31) {
		if (stepLocal_39 || var_1_70) {
			var_1_78 = var_1_29;
		} else {
			if (stepLocal_38 != ((var_1_49 + var_1_79) - var_1_59)) {
				var_1_78 = ((min ((var_1_30 + var_1_4) , var_1_47)) + ((max (var_1_10 , var_1_5)) - (var_1_80 - var_1_81)));
			}
		}
	} else {
		var_1_78 = (min ((99.4 - var_1_4) , (var_1_81 + (max (var_1_5 , 4.5)))));
	}


	// From: Req6Batch28Amount500
	unsigned char stepLocal_11 = var_1_24;
	if (stepLocal_11 >= var_1_65) {
		var_1_32 = (min (var_1_23 , var_1_21));
	}


	// From: Req2Batch28Amount500
	unsigned short int stepLocal_5 = var_1_7;
	signed long int stepLocal_4 = var_1_9;
	if (stepLocal_5 < (- var_1_84)) {
		if (stepLocal_4 < var_1_39) {
			var_1_11 = (min (var_1_32 , (var_1_32 + var_1_97)));
		} else {
			var_1_11 = var_1_32;
		}
	}


	// From: Req51Batch28Amount500
	signed long int stepLocal_48 = (var_1_11 / var_1_42) / var_1_9;
	unsigned long int stepLocal_47 = var_1_66;
	if (stepLocal_48 >= (var_1_23 ^ last_1_var_1_105)) {
		if (var_1_15 >= stepLocal_47) {
			var_1_105 = var_1_25;
		}
	}


	// From: Req11Batch28Amount500
	unsigned char stepLocal_15 = var_1_64;
	unsigned char stepLocal_14 = var_1_28 <= 100.25;
	if (var_1_92) {
		var_1_43 = (var_1_23 - (var_1_44 - var_1_20));
	} else {
		if (var_1_77 || stepLocal_14) {
			var_1_43 = (max (var_1_44 , var_1_32));
		} else {
			if (stepLocal_15 < (var_1_25 | (var_1_64 * var_1_69))) {
				var_1_43 = ((max (var_1_32 , 1000)) - var_1_24);
			} else {
				var_1_43 = var_1_20;
			}
		}
	}


	// From: Req14Batch28Amount500
	unsigned char stepLocal_19 = var_1_104;
	if (stepLocal_19 && ((var_1_24 + var_1_52) > -2)) {
		var_1_48 = ((abs (var_1_93 + var_1_32)) + ((var_1_49 - var_1_58) - 10u));
	} else {
		if (var_1_104) {
			var_1_48 = var_1_25;
		}
	}


	// From: Req27Batch28Amount500
	unsigned long int stepLocal_36 = var_1_65 ^ (var_1_23 * var_1_43);
	if ((var_1_50 - var_1_59) > stepLocal_36) {
		var_1_75 = var_1_22;
	} else {
		if (var_1_29 < (- (max (var_1_6 , 100.5)))) {
			var_1_75 = (max ((max (var_1_55 , var_1_50)) , (var_1_50 + (var_1_65 - var_1_42))));
		}
	}


	// From: Req37Batch28Amount500
	unsigned char stepLocal_46 = var_1_61 && var_1_100;
	unsigned char stepLocal_45 = var_1_32;
	if (! (var_1_61 || (var_1_50 <= var_1_23))) {
		if (last_1_var_1_89 >= stepLocal_45) {
			if (((var_1_43 != var_1_32) || var_1_104) || stepLocal_46) {
				var_1_89 = (abs (var_1_15));
			} else {
				var_1_89 = var_1_52;
			}
		} else {
			var_1_89 = var_1_97;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691390e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 65535);
	assume_abort_if_not(var_1_7 != 0);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 31);
	assume_abort_if_not(var_1_18 <= 64);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 32);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 127);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 190);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 63);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	assume_abort_if_not(var_1_28 != 0.0F);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854765600e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -230584.3009213691390e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691390e+12F && var_1_30 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 49150);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 8191);
	assume_abort_if_not(var_1_36 <= 16383);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 8192);
	assume_abort_if_not(var_1_38 <= 16384);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= 536870911);
	assume_abort_if_not(var_1_42 <= 1073741823);
	var_1_44 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_44 >= 1073741823);
	assume_abort_if_not(var_1_44 <= 2147483646);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691390e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 1610612735);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 2147483647);
	assume_abort_if_not(var_1_51 <= 4294967295);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 16383);
	assume_abort_if_not(var_1_56 <= 32767);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 64);
	assume_abort_if_not(var_1_59 <= 127);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 0);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 0);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 1);
	assume_abort_if_not(var_1_63 <= 1);
	var_1_66 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_66 >= 2147483647);
	assume_abort_if_not(var_1_66 <= 4294967294);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 0);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 1);
	assume_abort_if_not(var_1_73 <= 1);
	var_1_79 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_79 >= 1073741824);
	assume_abort_if_not(var_1_79 <= 2147483647);
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= 2305843.009213691390e+12F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 4611686.018427382800e+12F && var_1_80 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_81 >= 0.0F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 2305843.009213691390e+12F && var_1_81 >= 1.0e-20F ));
	var_1_88 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_88 >= 32767);
	assume_abort_if_not(var_1_88 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_32 = var_1_32;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_105 = var_1_105;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((var_1_39 <= var_1_82) ? ((var_1_39 > var_1_82) ? (var_1_1 == ((float) (((var_1_4 + 25.2f) - var_1_5) + var_1_6))) : 1) : ((((var_1_82 * var_1_39) / var_1_7) >= (var_1_41 / var_1_9)) ? ((-32 > ((var_1_82 + var_1_7) | var_1_41)) ? (var_1_1 == ((float) (var_1_4 - (var_1_5 + var_1_10)))) : (var_1_1 == ((float) (min (var_1_5 , var_1_6))))) : (var_1_1 == ((float) (var_1_5 - var_1_4))))) && ((var_1_7 < (- var_1_84)) ? ((var_1_9 < var_1_39) ? (var_1_11 == ((unsigned short int) (min (var_1_32 , (var_1_32 + var_1_97))))) : (var_1_11 == ((unsigned short int) var_1_32))) : 1)) && ((last_1_var_1_104 || last_1_var_1_104) ? (((last_1_var_1_97 / var_1_7) >= last_1_var_1_32) ? (var_1_15 == ((unsigned char) (((var_1_18 + var_1_19) - var_1_20) + (min (var_1_21 , var_1_22))))) : ((last_1_var_1_104 || (var_1_18 < var_1_22)) ? (var_1_15 == ((unsigned char) (min (((min (var_1_23 , var_1_24)) - var_1_19) , var_1_22)))) : (var_1_15 == ((unsigned char) ((var_1_25 - var_1_19) - (max (var_1_22 , var_1_20))))))) : (var_1_15 == ((unsigned char) (min ((var_1_19 + (var_1_26 - 4)) , var_1_23)))))) && ((! last_1_var_1_104) ? ((last_1_var_1_58 <= last_1_var_1_65) ? (var_1_27 == ((double) ((var_1_4 + 31.875) - var_1_10))) : ((((var_1_6 * last_1_var_1_96) / var_1_28) != var_1_10) ? (var_1_27 == ((double) (min ((min (var_1_4 , var_1_10)) , (max ((var_1_6 + var_1_5) , var_1_29)))))) : (last_1_var_1_60 ? (((var_1_9 >> last_1_var_1_58) <= last_1_var_1_65) ? (var_1_27 == ((double) var_1_29)) : (var_1_27 == ((double) ((max (var_1_5 , (var_1_4 + var_1_30))) + var_1_10)))) : (var_1_27 == ((double) var_1_30))))) : 1)) && ((var_1_10 <= (10.625f + var_1_4)) ? (var_1_31 == ((float) var_1_10)) : 1)) && ((var_1_24 >= var_1_65) ? (var_1_32 == ((unsigned char) (min (var_1_23 , var_1_21)))) : 1)) && (((max ((var_1_22 | var_1_93) , var_1_19)) <= var_1_103) ? (var_1_34 == ((unsigned short int) (var_1_19 + var_1_103))) : (var_1_71 ? ((var_1_6 <= var_1_5) ? (var_1_34 == ((unsigned short int) ((var_1_35 - (var_1_36 - var_1_23)) - var_1_97))) : 1) : (var_1_34 == ((unsigned short int) (var_1_35 - ((var_1_38 - var_1_26) + var_1_21))))))) && ((last_1_var_1_104 && last_1_var_1_85) ? (var_1_39 == ((unsigned short int) (last_1_var_1_103 + var_1_19))) : (var_1_39 == ((unsigned short int) (var_1_35 - var_1_25))))) && (var_1_40 == ((double) ((min (var_1_4 , var_1_5)) - var_1_10)))) && (((min (var_1_53 , var_1_76)) >= var_1_9) ? ((var_1_39 < (var_1_24 / (var_1_25 - var_1_18))) ? (var_1_41 == ((signed long int) ((var_1_7 + var_1_36) + ((last_1_var_1_41 + var_1_22) - (var_1_42 - var_1_21))))) : 1) : (var_1_41 == ((signed long int) (min (var_1_53 , var_1_25)))))) && (var_1_92 ? (var_1_43 == ((signed long int) (var_1_23 - (var_1_44 - var_1_20)))) : ((var_1_77 || (var_1_28 <= 100.25)) ? (var_1_43 == ((signed long int) (max (var_1_44 , var_1_32)))) : ((var_1_64 < (var_1_25 | (var_1_64 * var_1_69))) ? (var_1_43 == ((signed long int) ((max (var_1_32 , 1000)) - var_1_24))) : (var_1_43 == ((signed long int) var_1_20)))))) && (((last_1_var_1_45 / var_1_18) >= var_1_94) ? ((var_1_77 || var_1_100) ? (var_1_45 == ((signed short int) last_1_var_1_45)) : 1) : (var_1_45 == ((signed short int) var_1_20)))) && (((64 / var_1_23) != (max (-8 , (abs (var_1_21))))) ? (var_1_46 == ((double) ((var_1_4 + (100.1 + var_1_47)) - 64.7))) : 1)) && ((var_1_104 && ((var_1_24 + var_1_52) > -2)) ? (var_1_48 == ((unsigned long int) ((abs (var_1_93 + var_1_32)) + ((var_1_49 - var_1_58) - 10u)))) : (var_1_104 ? (var_1_48 == ((unsigned long int) var_1_25)) : 1))) && (((var_1_51 - 1u) <= var_1_19) ? ((var_1_44 >= var_1_64) ? ((! (! var_1_71)) ? (var_1_50 == ((unsigned char) (max (var_1_26 , var_1_21)))) : ((var_1_92 || ((var_1_4 - var_1_5) >= var_1_29)) ? (var_1_50 == ((unsigned char) (var_1_25 - var_1_19))) : 1)) : (var_1_50 == ((unsigned char) var_1_23))) : (((var_1_18 << last_1_var_1_50) <= ((max (var_1_82 , var_1_20)) * (var_1_38 + var_1_42))) ? (var_1_50 == ((unsigned char) ((var_1_26 - var_1_19) + var_1_21))) : 1))) && ((! (var_1_42 <= var_1_58)) ? ((var_1_20 != var_1_58) ? (var_1_52 == ((signed long int) (var_1_93 - 4))) : (var_1_52 == ((signed long int) (var_1_93 - (min (var_1_38 , (var_1_93 + var_1_58))))))) : (var_1_52 == ((signed long int) (16 - (max ((32 + var_1_58) , 1))))))) && ((var_1_99 > (var_1_26 << (abs (var_1_55)))) ? (var_1_53 == ((unsigned short int) (var_1_45 + var_1_18))) : (var_1_53 == ((unsigned short int) (var_1_35 - (var_1_56 - (min (var_1_50 , var_1_21)))))))) && (var_1_58 == ((unsigned char) ((max ((var_1_26 + var_1_59) , var_1_24)) - var_1_20)))) && ((var_1_27 >= var_1_47) ? (var_1_60 == ((unsigned char) (var_1_61 || var_1_62))) : (var_1_60 == ((unsigned char) (var_1_61 || (! (var_1_62 || var_1_63))))))) && (var_1_64 == ((unsigned char) (min (var_1_55 , var_1_24))))) && (var_1_65 == ((unsigned long int) (var_1_66 - (abs (var_1_69)))))) && ((var_1_102 < var_1_83) ? (var_1_67 == ((unsigned long int) var_1_15)) : 1)) && ((var_1_102 < 256) ? (((var_1_18 | (min (var_1_20 , 0))) > var_1_7) ? ((var_1_62 || var_1_100) ? ((var_1_92 && var_1_100) ? ((64.5f == (var_1_5 - var_1_10)) ? (var_1_69 == ((unsigned long int) (var_1_22 + var_1_93))) : (var_1_69 == ((unsigned long int) ((64u + var_1_45) + (var_1_34 + var_1_23))))) : (var_1_69 == ((unsigned long int) ((abs (abs (var_1_66))) - var_1_42)))) : (var_1_69 == ((unsigned long int) (abs (min (var_1_15 , var_1_21)))))) : (var_1_69 == ((unsigned long int) (min (((5u + var_1_102) + var_1_22) , ((min (50u , var_1_19)) + var_1_38)))))) : 1)) && (((last_1_var_1_101 < var_1_47) || var_1_61) ? ((128u < last_1_var_1_93) ? (var_1_70 == ((unsigned char) (! var_1_63))) : (var_1_70 == ((unsigned char) var_1_61))) : (var_1_70 == ((unsigned char) (var_1_63 || (! var_1_62)))))) && ((var_1_24 >= var_1_59) ? (var_1_71 == ((unsigned char) (var_1_72 || (var_1_61 || var_1_62)))) : ((var_1_94 >= (var_1_39 * (var_1_25 + var_1_64))) ? ((! var_1_61) ? (var_1_71 == ((unsigned char) ((! (var_1_63 && var_1_73)) || var_1_72))) : ((-128 > (var_1_36 % var_1_24)) ? (var_1_71 == ((unsigned char) ((var_1_82 == var_1_93) || var_1_63))) : 1)) : (var_1_71 == ((unsigned char) (var_1_104 || var_1_73)))))) && (((var_1_56 & (min (var_1_45 , var_1_35))) < (max (var_1_64 , var_1_18))) ? (var_1_74 == ((unsigned long int) (min ((var_1_66 - (var_1_64 + var_1_22)) , var_1_21)))) : 1)) && (((var_1_50 - var_1_59) > (var_1_65 ^ (var_1_23 * var_1_43))) ? (var_1_75 == ((signed long int) var_1_22)) : ((var_1_29 < (- (max (var_1_6 , 100.5)))) ? (var_1_75 == ((signed long int) (max ((max (var_1_55 , var_1_50)) , (var_1_50 + (var_1_65 - var_1_42)))))) : 1))) && (((var_1_35 / var_1_18) < last_1_var_1_76) ? ((((var_1_6 / var_1_28) + var_1_5) >= (var_1_4 - (max (var_1_10 , var_1_47)))) ? (var_1_76 == ((unsigned short int) (var_1_35 - var_1_39))) : (var_1_76 == ((unsigned short int) ((min (64 , var_1_84)) + (var_1_58 + var_1_21))))) : (var_1_76 == ((unsigned short int) var_1_18)))) && ((var_1_76 <= var_1_35) ? (var_1_77 == ((unsigned char) (! 1))) : (var_1_77 == ((unsigned char) (var_1_73 && var_1_63))))) && (((- 499.3f) < var_1_31) ? ((var_1_72 || var_1_70) ? (var_1_78 == ((double) var_1_29)) : ((var_1_67 != ((var_1_49 + var_1_79) - var_1_59)) ? (var_1_78 == ((double) ((min ((var_1_30 + var_1_4) , var_1_47)) + ((max (var_1_10 , var_1_5)) - (var_1_80 - var_1_81))))) : 1)) : (var_1_78 == ((double) (min ((99.4 - var_1_4) , (var_1_81 + (max (var_1_5 , 4.5))))))))) && ((var_1_29 > (min (8.4 , var_1_95))) ? ((var_1_38 > var_1_23) ? ((128.25 != (- var_1_101)) ? (((var_1_35 - 256) > var_1_64) ? (var_1_82 == ((unsigned short int) (min ((var_1_18 + var_1_102) , var_1_64)))) : ((((var_1_44 / var_1_7) <= (-5 * var_1_35)) && var_1_104) ? (var_1_82 == ((unsigned short int) (max (var_1_22 , ((min (var_1_35 , 51630)) - 10))))) : (var_1_82 == ((unsigned short int) (var_1_35 - (min (var_1_99 , (var_1_64 + var_1_59)))))))) : (var_1_82 == ((unsigned short int) ((var_1_56 - var_1_26) + var_1_23)))) : (var_1_82 == ((unsigned short int) ((min (var_1_22 , 5)) + var_1_84)))) : 1)) && (((-1 / var_1_18) > (var_1_35 - var_1_102)) ? ((var_1_63 || (var_1_1 == var_1_30)) ? (var_1_83 == ((signed long int) (max (5 , (var_1_55 + var_1_22))))) : (var_1_83 == ((signed long int) (10 - var_1_36)))) : (var_1_83 == ((signed long int) (min (var_1_42 , -32)))))) && (last_1_var_1_70 ? (var_1_84 == ((unsigned short int) last_1_var_1_105)) : 1)) && ((((var_1_86 + var_1_99) + 4) == (var_1_20 * var_1_19)) ? (var_1_85 == ((unsigned char) ((var_1_77 && var_1_72) || var_1_63))) : (var_1_85 == ((unsigned char) (var_1_72 && var_1_61))))) && (var_1_86 == ((signed char) (var_1_20 + var_1_19)))) && (((var_1_74 + var_1_102) < ((max (var_1_38 , 32u)) + var_1_66)) ? (var_1_87 == ((unsigned short int) var_1_93)) : (var_1_87 == ((unsigned short int) ((min (var_1_35 , var_1_88)) - 8))))) && ((! (var_1_61 || (var_1_50 <= var_1_23))) ? ((last_1_var_1_89 >= var_1_32) ? ((((var_1_43 != var_1_32) || var_1_104) || (var_1_61 && var_1_100)) ? (var_1_89 == ((signed short int) (abs (var_1_15)))) : (var_1_89 == ((signed short int) var_1_52))) : (var_1_89 == ((signed short int) var_1_97))) : 1)) && (var_1_62 ? (var_1_92 == ((unsigned char) var_1_72)) : (var_1_92 == ((unsigned char) 0)))) && (var_1_93 == ((unsigned char) var_1_19))) && (var_1_94 == ((unsigned short int) var_1_97))) && (var_1_95 == ((double) var_1_10))) && (var_1_73 ? (var_1_96 == ((double) var_1_4)) : (var_1_96 == ((double) var_1_81)))) && (var_1_72 ? (var_1_97 == ((unsigned char) var_1_18)) : 1)) && (var_1_71 ? (var_1_98 == ((signed short int) var_1_102)) : 1)) && (var_1_99 == ((signed short int) -10))) && (var_1_92 ? (var_1_100 == ((unsigned char) var_1_61)) : (var_1_100 == ((unsigned char) var_1_62)))) && (var_1_70 ? (var_1_101 == ((float) var_1_47)) : 1)) && (var_1_102 == ((unsigned char) var_1_25))) && (var_1_103 == ((unsigned long int) var_1_56))) && (var_1_92 ? (var_1_104 == ((unsigned char) 0)) : (var_1_104 == ((unsigned char) var_1_62)))) && ((((var_1_11 / var_1_42) / var_1_9) >= (var_1_23 ^ last_1_var_1_105)) ? ((var_1_15 >= var_1_66) ? (var_1_105 == ((signed long int) var_1_25)) : 1) : 1)
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
