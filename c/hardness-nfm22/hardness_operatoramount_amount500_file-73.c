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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch73Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 32;
unsigned long int var_1_4 = 1982060228;
signed char var_1_7 = 50;
double var_1_10 = 31.8;
double var_1_11 = 10.5;
signed char var_1_12 = -2;
signed char var_1_13 = 8;
signed char var_1_14 = 0;
signed char var_1_15 = -25;
signed char var_1_16 = 64;
signed char var_1_17 = 2;
signed char var_1_18 = 64;
float var_1_19 = 5.9;
float var_1_21 = 32.5;
float var_1_22 = 0.75;
unsigned char var_1_23 = 10;
signed char var_1_25 = 50;
double var_1_26 = 7.8;
double var_1_27 = 1000000000000000.2;
double var_1_28 = 0.19999999999999996;
unsigned long int var_1_29 = 4;
unsigned long int var_1_30 = 3867389581;
signed long int var_1_31 = 4;
signed char var_1_32 = -50;
signed char var_1_33 = -5;
unsigned long int var_1_34 = 5;
signed short int var_1_35 = 0;
unsigned char var_1_36 = 128;
double var_1_38 = 9999.3;
double var_1_39 = 1000000000000.7;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 1;
unsigned short int var_1_42 = 4;
unsigned short int var_1_43 = 17750;
float var_1_44 = 9.5;
float var_1_45 = 63.8;
float var_1_46 = 256.5;
float var_1_47 = 256.5;
float var_1_48 = 0.4;
float var_1_49 = 128.5;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
signed char var_1_52 = -50;
signed char var_1_53 = -2;
signed char var_1_54 = -2;
unsigned long int var_1_55 = 4;
unsigned char var_1_56 = 0;
unsigned short int var_1_57 = 128;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 128;
unsigned char var_1_60 = 25;
unsigned char var_1_62 = 10;
double var_1_63 = 15.5;
double var_1_64 = 0.0;
double var_1_65 = 63.8;
unsigned short int var_1_67 = 64;
unsigned short int var_1_68 = 46491;
unsigned short int var_1_69 = 55798;
unsigned char var_1_70 = 100;
unsigned char var_1_71 = 64;
unsigned char var_1_72 = 10;
signed short int var_1_73 = -128;
float var_1_74 = -0.5;
float var_1_75 = 199.6;
double var_1_76 = 5.2;
double var_1_77 = 100.8;
double var_1_78 = -0.5;
unsigned long int var_1_79 = 16;
unsigned long int var_1_80 = 4012580306;
unsigned char var_1_81 = 1;
unsigned char var_1_82 = 2;
unsigned char var_1_83 = 64;
unsigned char var_1_84 = 64;
unsigned char var_1_85 = 0;
unsigned char var_1_86 = 1;
unsigned char var_1_87 = 0;
signed short int var_1_88 = 8;
signed char var_1_89 = 1;
signed char var_1_90 = 25;
signed char var_1_91 = 4;
signed char var_1_92 = 50;
signed char var_1_93 = 2;
unsigned char var_1_94 = 1;
unsigned char var_1_95 = 1;
signed short int var_1_96 = -100;
float var_1_97 = 127.5;
unsigned long int var_1_98 = 32;
unsigned short int var_1_99 = 4;
unsigned long int var_1_100 = 5;
signed char var_1_101 = -10;
unsigned long int var_1_102 = 16;
unsigned char var_1_104 = 64;
float var_1_105 = 3.5;
unsigned char var_1_106 = 4;
signed char var_1_107 = -32;
unsigned char var_1_108 = 0;
unsigned short int var_1_109 = 32;
unsigned char var_1_110 = 0;
unsigned long int var_1_111 = 1;
signed char var_1_112 = 100;
unsigned char var_1_113 = 0;
double var_1_114 = 127.6;
unsigned short int var_1_115 = 32;
unsigned short int var_1_116 = 31642;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_23 = 10;
signed long int last_1_var_1_31 = 4;
signed short int last_1_var_1_35 = 0;
unsigned char last_1_var_1_50 = 0;
unsigned short int last_1_var_1_57 = 128;
unsigned char last_1_var_1_58 = 0;
double last_1_var_1_63 = 15.5;
unsigned short int last_1_var_1_67 = 64;
signed short int last_1_var_1_73 = -128;
unsigned long int last_1_var_1_79 = 16;
unsigned char last_1_var_1_81 = 1;
signed short int last_1_var_1_96 = -100;
float last_1_var_1_97 = 127.5;
unsigned long int last_1_var_1_100 = 5;
signed char last_1_var_1_101 = -10;
unsigned char last_1_var_1_104 = 64;
float last_1_var_1_105 = 3.5;
signed char last_1_var_1_107 = -32;
unsigned char last_1_var_1_110 = 0;
double last_1_var_1_114 = 127.6;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req29Batch73Amount500
	unsigned char stepLocal_25 = last_1_var_1_50;
	if ((min ((- last_1_var_1_97) , var_1_38)) >= last_1_var_1_63) {
		var_1_81 = var_1_62;
	} else {
		if ((var_1_48 >= var_1_28) || stepLocal_25) {
			if (var_1_28 >= var_1_27) {
				var_1_81 = var_1_82;
			} else {
				var_1_81 = ((var_1_83 + var_1_84) - (100 - (var_1_72 + var_1_85)));
			}
		} else {
			var_1_81 = (var_1_59 - ((max (var_1_72 , var_1_17)) + var_1_85));
		}
	}


	// From: Req37Batch73Amount500
	if (last_1_var_1_23 != last_1_var_1_107) {
		var_1_99 = (var_1_68 - (var_1_43 - var_1_84));
	} else {
		var_1_99 = (last_1_var_1_35 + var_1_59);
	}


	// From: Req22Batch73Amount500
	signed long int stepLocal_15 = var_1_16 >> last_1_var_1_81;
	unsigned char stepLocal_14 = var_1_36;
	signed long int stepLocal_13 = last_1_var_1_73;
	if (last_1_var_1_57 != stepLocal_13) {
		var_1_67 = (var_1_68 - var_1_36);
	} else {
		if (last_1_var_1_105 == (var_1_65 - var_1_28)) {
			if (last_1_var_1_67 < stepLocal_14) {
				if (stepLocal_15 == last_1_var_1_81) {
					var_1_67 = (abs (var_1_68 - var_1_59));
				} else {
					var_1_67 = ((var_1_69 - last_1_var_1_58) - ((var_1_62 + last_1_var_1_79) + last_1_var_1_58));
				}
			} else {
				var_1_67 = (min (var_1_16 , last_1_var_1_58));
			}
		} else {
			var_1_67 = var_1_59;
		}
	}


	// From: Req7Batch73Amount500
	if (last_1_var_1_114 <= (max (var_1_10 , (max (var_1_22 , last_1_var_1_63))))) {
		var_1_29 = ((min ((max (16u , last_1_var_1_104)) , var_1_16)) + last_1_var_1_101);
	} else {
		var_1_29 = (min ((var_1_30 - last_1_var_1_104) , (max (var_1_4 , (4097190835u - var_1_16)))));
	}


	// From: Req19Batch73Amount500
	if (32 <= ((var_1_15 >> last_1_var_1_96) + (last_1_var_1_100 / var_1_4))) {
		var_1_58 = (var_1_59 - var_1_18);
	} else {
		var_1_58 = ((min (var_1_18 , var_1_17)) + var_1_16);
	}


	// From: Req5Batch73Amount500
	var_1_25 = (min (var_1_14 , var_1_17));


	// From: Req6Batch73Amount500
	signed char stepLocal_2 = var_1_15;
	if (var_1_17 > stepLocal_2) {
		var_1_26 = (var_1_27 - var_1_28);
	}


	// From: Req17Batch73Amount500
	var_1_56 = var_1_41;


	// From: Req18Batch73Amount500
	if (var_1_48 <= var_1_26) {
		var_1_57 = (var_1_43 + var_1_18);
	}


	// From: Req25Batch73Amount500
	signed char stepLocal_19 = var_1_12;
	if (stepLocal_19 < var_1_72) {
		var_1_74 = ((min ((var_1_65 + var_1_75) , var_1_27)) - var_1_39);
	}


	// From: Req38Batch73Amount500
	if (var_1_95) {
		var_1_100 = var_1_43;
	}


	// From: Req39Batch73Amount500
	var_1_101 = var_1_16;


	// From: Req41Batch73Amount500
	var_1_104 = 200;


	// From: Req42Batch73Amount500
	if (var_1_95) {
		var_1_105 = var_1_28;
	} else {
		var_1_105 = var_1_49;
	}


	// From: Req43Batch73Amount500
	if (var_1_56) {
		var_1_106 = var_1_18;
	} else {
		var_1_106 = 10;
	}


	// From: Req45Batch73Amount500
	var_1_108 = var_1_51;


	// From: Req47Batch73Amount500
	if (last_1_var_1_110) {
		var_1_110 = var_1_95;
	}


	// From: Req48Batch73Amount500
	var_1_111 = var_1_85;


	// From: Req50Batch73Amount500
	var_1_113 = var_1_87;


	// From: Req51Batch73Amount500
	if (var_1_113) {
		var_1_114 = var_1_65;
	} else {
		var_1_114 = var_1_28;
	}


	// From: Req16Batch73Amount500
	unsigned long int stepLocal_10 = 128u;
	if ((var_1_16 / var_1_4) >= stepLocal_10) {
		var_1_55 = (max (var_1_106 , var_1_4));
	} else {
		var_1_55 = (var_1_43 + (min ((var_1_99 + var_1_16) , (var_1_4 - var_1_99))));
	}


	// From: Req24Batch73Amount500
	unsigned short int stepLocal_18 = var_1_68;
	unsigned long int stepLocal_17 = var_1_111 / (min (var_1_32 , var_1_59));
	if (stepLocal_17 <= var_1_29) {
		if (var_1_108) {
			if (! var_1_51) {
				var_1_73 = ((var_1_59 + var_1_54) + var_1_29);
			} else {
				var_1_73 = (max (var_1_18 , var_1_12));
			}
		} else {
			var_1_73 = (max (var_1_32 , (10 - var_1_29)));
		}
	} else {
		if (stepLocal_18 >= last_1_var_1_73) {
			var_1_73 = var_1_18;
		} else {
			var_1_73 = (max ((min (var_1_72 , var_1_12)) , var_1_100));
		}
	}


	// From: Req33Batch73Amount500
	unsigned long int stepLocal_32 = min (var_1_59 , var_1_29);
	unsigned char stepLocal_31 = var_1_51;
	if (var_1_58 == stepLocal_32) {
		if ((var_1_16 >= var_1_91) || stepLocal_31) {
			var_1_94 = (var_1_51 || (var_1_41 && var_1_87));
		} else {
			var_1_94 = (! (var_1_41 && var_1_95));
		}
	} else {
		var_1_94 = var_1_87;
	}


	// From: Req3Batch73Amount500
	if ((! var_1_110) && var_1_113) {
		var_1_19 = (var_1_21 + var_1_22);
	}


	// From: Req15Batch73Amount500
	if (var_1_94) {
		var_1_52 = ((var_1_53 + var_1_54) + -50);
	} else {
		if (var_1_41) {
			var_1_52 = (min (var_1_13 , (min (var_1_18 , var_1_16))));
		} else {
			var_1_52 = (max ((32 + var_1_54) , (var_1_14 + var_1_17)));
		}
	}


	// From: Req23Batch73Amount500
	signed long int stepLocal_16 = -25;
	if (var_1_110) {
		if ((var_1_33 | var_1_69) > stepLocal_16) {
			var_1_70 = (max (var_1_62 , var_1_18));
		} else {
			var_1_70 = (var_1_59 - ((var_1_71 - var_1_72) + var_1_62));
		}
	}


	// From: Req26Batch73Amount500
	if (-32 <= var_1_70) {
		if ((var_1_51 || var_1_94) && var_1_108) {
			var_1_76 = ((abs (var_1_47)) + ((max (var_1_48 , var_1_49)) + var_1_77));
		} else {
			var_1_76 = (max (var_1_48 , (max (9.25 , var_1_75))));
		}
	} else {
		if (var_1_108) {
			if (var_1_46 == (var_1_75 - var_1_27)) {
				var_1_76 = (((3.4070160916606116E18 - 10.4) + var_1_75) - (max (var_1_39 , var_1_64)));
			} else {
				var_1_76 = (max ((var_1_75 - 64.6) , var_1_48));
			}
		}
	}


	// From: Req44Batch73Amount500
	if (var_1_113) {
		var_1_107 = 0;
	} else {
		var_1_107 = -10;
	}


	// From: Req46Batch73Amount500
	if (var_1_110) {
		var_1_109 = var_1_71;
	} else {
		var_1_109 = var_1_90;
	}


	// From: Req14Batch73Amount500
	signed char stepLocal_9 = var_1_13;
	unsigned long int stepLocal_8 = var_1_58 + var_1_111;
	if (stepLocal_8 > (- var_1_55)) {
		if (var_1_41) {
			if ((- var_1_17) > stepLocal_9) {
				var_1_50 = (! (var_1_56 && var_1_51));
			}
		}
	} else {
		var_1_50 = (! var_1_51);
	}


	// From: Req35Batch73Amount500
	if ((- var_1_67) >= (var_1_72 << var_1_57)) {
		if ((var_1_70 * var_1_99) <= ((var_1_30 - var_1_109) / (var_1_36 + var_1_43))) {
			var_1_97 = var_1_46;
		}
	}


	// From: Req20Batch73Amount500
	if (var_1_49 > var_1_114) {
		if (var_1_114 > var_1_46) {
			var_1_60 = (var_1_59 - var_1_17);
		} else {
			var_1_60 = (max (var_1_18 , (min (var_1_59 , var_1_16))));
		}
	} else {
		if ((var_1_30 - (abs (var_1_106))) != var_1_73) {
			var_1_60 = (var_1_59 - (var_1_17 + var_1_62));
		} else {
			var_1_60 = (var_1_59 - ((abs (var_1_62)) + var_1_17));
		}
	}


	// From: Req2Batch73Amount500
	if ((min ((min (var_1_19 , var_1_114)) , -0.6)) == (var_1_10 - var_1_11)) {
		var_1_7 = (max ((4 + var_1_12) , (min (var_1_13 , (var_1_14 + var_1_15)))));
	} else {
		var_1_7 = ((var_1_16 - var_1_17) - var_1_18);
	}


	// From: Req30Batch73Amount500
	signed long int stepLocal_26 = 128 * (256 - 5);
	if (var_1_109 >= stepLocal_26) {
		var_1_86 = var_1_51;
	} else {
		var_1_86 = ((! var_1_110) && var_1_87);
	}


	// From: Req32Batch73Amount500
	unsigned long int stepLocal_30 = var_1_30;
	signed long int stepLocal_29 = (var_1_43 * var_1_84) / var_1_83;
	unsigned char stepLocal_28 = var_1_109 > (var_1_85 % var_1_71);
	if (var_1_86) {
		var_1_89 = ((max (var_1_85 , var_1_12)) + (max (var_1_14 , var_1_54)));
	} else {
		if (stepLocal_28 || var_1_86) {
			var_1_89 = (((var_1_85 - var_1_90) + (var_1_91 + -10)) + ((var_1_92 - var_1_93) - (min (var_1_72 , var_1_17))));
		} else {
			if (stepLocal_29 < (var_1_36 - (min (64 , var_1_72)))) {
				if (stepLocal_30 != ((var_1_59 + var_1_106) + (max (var_1_4 , var_1_18)))) {
					var_1_89 = var_1_16;
				} else {
					var_1_89 = var_1_92;
				}
			}
		}
	}


	// From: Req40Batch73Amount500
	if (var_1_86) {
		var_1_102 = var_1_67;
	} else {
		var_1_102 = var_1_16;
	}


	// From: Req49Batch73Amount500
	if (var_1_86) {
		var_1_112 = var_1_53;
	} else {
		var_1_112 = var_1_72;
	}


	// From: Req52Batch73Amount500
	if (((! var_1_41) || var_1_87) || var_1_108) {
		var_1_115 = var_1_68;
	} else {
		if (! (! var_1_108)) {
			var_1_115 = (((var_1_116 - var_1_7) - var_1_85) + var_1_43);
		} else {
			var_1_115 = var_1_43;
		}
	}


	// From: Req8Batch73Amount500
	if (var_1_26 > var_1_27) {
		if (var_1_94) {
			var_1_31 = (min (var_1_14 , var_1_89));
		} else {
			if (((var_1_13 % var_1_16) / (min (var_1_32 , var_1_33))) == last_1_var_1_31) {
				var_1_31 = var_1_81;
			} else {
				if (var_1_110) {
					var_1_31 = var_1_15;
				}
			}
		}
	}


	// From: Req9Batch73Amount500
	unsigned char stepLocal_3 = var_1_60;
	if ((var_1_30 - var_1_18) < stepLocal_3) {
		var_1_34 = (abs (min ((max (var_1_4 , var_1_17)) , var_1_16)));
	}


	// From: Req10Batch73Amount500
	unsigned short int stepLocal_6 = var_1_57;
	unsigned long int stepLocal_5 = var_1_34;
	signed long int stepLocal_4 = (var_1_36 - var_1_16) % var_1_33;
	if ((var_1_16 * var_1_106) <= stepLocal_5) {
		if (stepLocal_4 > var_1_106) {
			if (stepLocal_6 != var_1_34) {
				if (4.4 > ((var_1_38 + var_1_39) - var_1_27)) {
					var_1_35 = (var_1_106 - var_1_16);
				} else {
					var_1_35 = ((var_1_18 + var_1_17) - var_1_106);
				}
			}
		} else {
			var_1_35 = var_1_33;
		}
	} else {
		var_1_35 = var_1_36;
	}


	// From: Req12Batch73Amount500
	if ((abs (var_1_14)) >= var_1_4) {
		var_1_42 = ((abs (var_1_17)) + (var_1_43 - var_1_34));
	}


	// From: Req11Batch73Amount500
	unsigned char stepLocal_7 = var_1_110;
	if (stepLocal_7 || var_1_86) {
		var_1_40 = (! var_1_41);
	}


	// From: Req28Batch73Amount500
	unsigned long int stepLocal_24 = var_1_29;
	if (var_1_100 >= stepLocal_24) {
		if (var_1_45 > (- (50.6f / var_1_64))) {
			var_1_79 = (max (var_1_4 , var_1_58));
		} else {
			var_1_79 = ((var_1_80 - var_1_99) - var_1_69);
		}
	} else {
		if (! (var_1_45 < var_1_10)) {
			var_1_79 = (max (var_1_4 , ((min (var_1_58 , var_1_18)) + var_1_42)));
		} else {
			var_1_79 = (max (var_1_62 , var_1_72));
		}
	}


	// From: Req4Batch73Amount500
	unsigned long int stepLocal_1 = var_1_79;
	signed char stepLocal_0 = var_1_18;
	if ((var_1_58 / (max (var_1_16 , var_1_4))) <= stepLocal_1) {
		if (var_1_81 < stepLocal_0) {
			var_1_23 = (var_1_17 + (min (var_1_16 , var_1_18)));
		} else {
			var_1_23 = 100;
		}
	} else {
		var_1_23 = 32;
	}


	// From: Req1Batch73Amount500
	if (var_1_40) {
		var_1_1 = (var_1_67 + ((var_1_4 - var_1_67) - var_1_115));
	}


	// From: Req34Batch73Amount500
	var_1_96 = ((min (var_1_1 , (var_1_1 + 16))) + (min ((max (-64 , var_1_16)) , var_1_36)));


	// From: Req27Batch73Amount500
	signed char stepLocal_23 = var_1_107;
	unsigned char stepLocal_22 = var_1_86 || var_1_108;
	unsigned char stepLocal_21 = var_1_110;
	signed long int stepLocal_20 = var_1_59 - var_1_18;
	if (stepLocal_21 && var_1_108) {
		var_1_78 = (min ((var_1_75 - var_1_38) , (var_1_48 + var_1_49)));
	} else {
		if (stepLocal_20 == var_1_12) {
			if ((~ var_1_1) > stepLocal_23) {
				if (stepLocal_22 && (var_1_18 >= var_1_67)) {
					if (! var_1_110) {
						var_1_78 = ((abs (var_1_48 + var_1_77)) + (var_1_65 - (abs (var_1_22))));
					} else {
						var_1_78 = (max (var_1_49 , var_1_47));
					}
				} else {
					var_1_78 = (var_1_39 - var_1_65);
				}
			}
		} else {
			if (var_1_21 < (max ((- var_1_28) , var_1_65))) {
				var_1_78 = var_1_65;
			} else {
				var_1_78 = (var_1_64 - (var_1_65 + var_1_75));
			}
		}
	}


	// From: Req13Batch73Amount500
	if ((var_1_57 / var_1_43) <= (max (var_1_1 , (min (var_1_58 , 4u))))) {
		if (var_1_50 || (var_1_17 <= var_1_1)) {
			var_1_44 = ((max ((abs (var_1_22)) , var_1_21)) + (max (var_1_45 , var_1_46)));
		} else {
			var_1_44 = var_1_46;
		}
	} else {
		var_1_44 = (var_1_21 + ((max (var_1_47 , var_1_48)) + (var_1_49 + 32.6f)));
	}


	// From: Req36Batch73Amount500
	unsigned short int stepLocal_33 = var_1_67;
	if (var_1_31 > stepLocal_33) {
		var_1_98 = var_1_96;
	}


	// From: Req21Batch73Amount500
	unsigned char stepLocal_12 = var_1_86;
	signed short int stepLocal_11 = var_1_96;
	if (stepLocal_12 || (var_1_28 <= (var_1_45 * var_1_78))) {
		var_1_63 = (max (((var_1_64 - var_1_65) - var_1_28) , (var_1_22 + var_1_46)));
	} else {
		if (stepLocal_11 < (var_1_31 + var_1_60)) {
			var_1_63 = (min ((abs (var_1_49)) , var_1_45));
		} else {
			var_1_63 = var_1_28;
		}
	}


	// From: Req31Batch73Amount500
	unsigned long int stepLocal_27 = var_1_98 & var_1_30;
	if (var_1_109 <= stepLocal_27) {
		if (! var_1_87) {
			var_1_88 = (var_1_32 + var_1_17);
		} else {
			var_1_88 = (var_1_71 + var_1_12);
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 1610612735);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 62);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 2147483647);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -128);
	assume_abort_if_not(var_1_32 <= 127);
	assume_abort_if_not(var_1_32 != 0);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -128);
	assume_abort_if_not(var_1_33 <= 127);
	assume_abort_if_not(var_1_33 != 0);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 127);
	assume_abort_if_not(var_1_36 <= 255);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427387900e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427387900e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 16383);
	assume_abort_if_not(var_1_43 <= 32767);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -461168.6018427382800e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -461168.6018427382800e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= -230584.3009213691390e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691390e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -230584.3009213691390e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691390e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -115292.1504606845700e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 1152921.504606845700e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= -31);
	assume_abort_if_not(var_1_53 <= 32);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= -31);
	assume_abort_if_not(var_1_54 <= 31);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 127);
	assume_abort_if_not(var_1_59 <= 254);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 63);
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= 4611686.018427382800e+12F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854765600e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 4611686.018427382800e+12F && var_1_65 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_68 >= 32767);
	assume_abort_if_not(var_1_68 <= 65534);
	var_1_69 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_69 >= 49150);
	assume_abort_if_not(var_1_69 <= 65534);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 32);
	assume_abort_if_not(var_1_71 <= 64);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 32);
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427382800e+12F && var_1_75 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_77 >= -230584.3009213691390e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 2305843.009213691390e+12F && var_1_77 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_80 >= 3221225470);
	assume_abort_if_not(var_1_80 <= 4294967294);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 254);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 63);
	assume_abort_if_not(var_1_83 <= 127);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 64);
	assume_abort_if_not(var_1_84 <= 127);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 31);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 0);
	var_1_90 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 31);
	var_1_91 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_91 >= -15);
	assume_abort_if_not(var_1_91 <= 16);
	var_1_92 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_92 >= 31);
	assume_abort_if_not(var_1_92 <= 63);
	var_1_93 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_93 >= 0);
	assume_abort_if_not(var_1_93 <= 31);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 1);
	assume_abort_if_not(var_1_95 <= 1);
	var_1_116 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_116 >= 24575);
	assume_abort_if_not(var_1_116 <= 32767);
}



void updateLastVariables() {
	last_1_var_1_23 = var_1_23;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_105 = var_1_105;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_110 = var_1_110;
	last_1_var_1_114 = var_1_114;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((var_1_40 ? (var_1_1 == ((unsigned long int) (var_1_67 + ((var_1_4 - var_1_67) - var_1_115)))) : 1) && (((min ((min (var_1_19 , var_1_114)) , -0.6)) == (var_1_10 - var_1_11)) ? (var_1_7 == ((signed char) (max ((4 + var_1_12) , (min (var_1_13 , (var_1_14 + var_1_15))))))) : (var_1_7 == ((signed char) ((var_1_16 - var_1_17) - var_1_18))))) && (((! var_1_110) && var_1_113) ? (var_1_19 == ((float) (var_1_21 + var_1_22))) : 1)) && (((var_1_58 / (max (var_1_16 , var_1_4))) <= var_1_79) ? ((var_1_81 < var_1_18) ? (var_1_23 == ((unsigned char) (var_1_17 + (min (var_1_16 , var_1_18))))) : (var_1_23 == ((unsigned char) 100))) : (var_1_23 == ((unsigned char) 32)))) && (var_1_25 == ((signed char) (min (var_1_14 , var_1_17))))) && ((var_1_17 > var_1_15) ? (var_1_26 == ((double) (var_1_27 - var_1_28))) : 1)) && ((last_1_var_1_114 <= (max (var_1_10 , (max (var_1_22 , last_1_var_1_63))))) ? (var_1_29 == ((unsigned long int) ((min ((max (16u , last_1_var_1_104)) , var_1_16)) + last_1_var_1_101))) : (var_1_29 == ((unsigned long int) (min ((var_1_30 - last_1_var_1_104) , (max (var_1_4 , (4097190835u - var_1_16))))))))) && ((var_1_26 > var_1_27) ? (var_1_94 ? (var_1_31 == ((signed long int) (min (var_1_14 , var_1_89)))) : ((((var_1_13 % var_1_16) / (min (var_1_32 , var_1_33))) == last_1_var_1_31) ? (var_1_31 == ((signed long int) var_1_81)) : (var_1_110 ? (var_1_31 == ((signed long int) var_1_15)) : 1))) : 1)) && (((var_1_30 - var_1_18) < var_1_60) ? (var_1_34 == ((unsigned long int) (abs (min ((max (var_1_4 , var_1_17)) , var_1_16))))) : 1)) && (((var_1_16 * var_1_106) <= var_1_34) ? ((((var_1_36 - var_1_16) % var_1_33) > var_1_106) ? ((var_1_57 != var_1_34) ? ((4.4 > ((var_1_38 + var_1_39) - var_1_27)) ? (var_1_35 == ((signed short int) (var_1_106 - var_1_16))) : (var_1_35 == ((signed short int) ((var_1_18 + var_1_17) - var_1_106)))) : 1) : (var_1_35 == ((signed short int) var_1_33))) : (var_1_35 == ((signed short int) var_1_36)))) && ((var_1_110 || var_1_86) ? (var_1_40 == ((unsigned char) (! var_1_41))) : 1)) && (((abs (var_1_14)) >= var_1_4) ? (var_1_42 == ((unsigned short int) ((abs (var_1_17)) + (var_1_43 - var_1_34)))) : 1)) && (((var_1_57 / var_1_43) <= (max (var_1_1 , (min (var_1_58 , 4u))))) ? ((var_1_50 || (var_1_17 <= var_1_1)) ? (var_1_44 == ((float) ((max ((abs (var_1_22)) , var_1_21)) + (max (var_1_45 , var_1_46))))) : (var_1_44 == ((float) var_1_46))) : (var_1_44 == ((float) (var_1_21 + ((max (var_1_47 , var_1_48)) + (var_1_49 + 32.6f))))))) && (((var_1_58 + var_1_111) > (- var_1_55)) ? (var_1_41 ? (((- var_1_17) > var_1_13) ? (var_1_50 == ((unsigned char) (! (var_1_56 && var_1_51)))) : 1) : 1) : (var_1_50 == ((unsigned char) (! var_1_51))))) && (var_1_94 ? (var_1_52 == ((signed char) ((var_1_53 + var_1_54) + -50))) : (var_1_41 ? (var_1_52 == ((signed char) (min (var_1_13 , (min (var_1_18 , var_1_16)))))) : (var_1_52 == ((signed char) (max ((32 + var_1_54) , (var_1_14 + var_1_17)))))))) && (((var_1_16 / var_1_4) >= 128u) ? (var_1_55 == ((unsigned long int) (max (var_1_106 , var_1_4)))) : (var_1_55 == ((unsigned long int) (var_1_43 + (min ((var_1_99 + var_1_16) , (var_1_4 - var_1_99)))))))) && (var_1_56 == ((unsigned char) var_1_41))) && ((var_1_48 <= var_1_26) ? (var_1_57 == ((unsigned short int) (var_1_43 + var_1_18))) : 1)) && ((32 <= ((var_1_15 >> last_1_var_1_96) + (last_1_var_1_100 / var_1_4))) ? (var_1_58 == ((unsigned char) (var_1_59 - var_1_18))) : (var_1_58 == ((unsigned char) ((min (var_1_18 , var_1_17)) + var_1_16))))) && ((var_1_49 > var_1_114) ? ((var_1_114 > var_1_46) ? (var_1_60 == ((unsigned char) (var_1_59 - var_1_17))) : (var_1_60 == ((unsigned char) (max (var_1_18 , (min (var_1_59 , var_1_16))))))) : (((var_1_30 - (abs (var_1_106))) != var_1_73) ? (var_1_60 == ((unsigned char) (var_1_59 - (var_1_17 + var_1_62)))) : (var_1_60 == ((unsigned char) (var_1_59 - ((abs (var_1_62)) + var_1_17))))))) && ((var_1_86 || (var_1_28 <= (var_1_45 * var_1_78))) ? (var_1_63 == ((double) (max (((var_1_64 - var_1_65) - var_1_28) , (var_1_22 + var_1_46))))) : ((var_1_96 < (var_1_31 + var_1_60)) ? (var_1_63 == ((double) (min ((abs (var_1_49)) , var_1_45)))) : (var_1_63 == ((double) var_1_28))))) && ((last_1_var_1_57 != last_1_var_1_73) ? (var_1_67 == ((unsigned short int) (var_1_68 - var_1_36))) : ((last_1_var_1_105 == (var_1_65 - var_1_28)) ? ((last_1_var_1_67 < var_1_36) ? (((var_1_16 >> last_1_var_1_81) == last_1_var_1_81) ? (var_1_67 == ((unsigned short int) (abs (var_1_68 - var_1_59)))) : (var_1_67 == ((unsigned short int) ((var_1_69 - last_1_var_1_58) - ((var_1_62 + last_1_var_1_79) + last_1_var_1_58))))) : (var_1_67 == ((unsigned short int) (min (var_1_16 , last_1_var_1_58))))) : (var_1_67 == ((unsigned short int) var_1_59))))) && (var_1_110 ? (((var_1_33 | var_1_69) > -25) ? (var_1_70 == ((unsigned char) (max (var_1_62 , var_1_18)))) : (var_1_70 == ((unsigned char) (var_1_59 - ((var_1_71 - var_1_72) + var_1_62))))) : 1)) && (((var_1_111 / (min (var_1_32 , var_1_59))) <= var_1_29) ? (var_1_108 ? ((! var_1_51) ? (var_1_73 == ((signed short int) ((var_1_59 + var_1_54) + var_1_29))) : (var_1_73 == ((signed short int) (max (var_1_18 , var_1_12))))) : (var_1_73 == ((signed short int) (max (var_1_32 , (10 - var_1_29)))))) : ((var_1_68 >= last_1_var_1_73) ? (var_1_73 == ((signed short int) var_1_18)) : (var_1_73 == ((signed short int) (max ((min (var_1_72 , var_1_12)) , var_1_100))))))) && ((var_1_12 < var_1_72) ? (var_1_74 == ((float) ((min ((var_1_65 + var_1_75) , var_1_27)) - var_1_39))) : 1)) && ((-32 <= var_1_70) ? (((var_1_51 || var_1_94) && var_1_108) ? (var_1_76 == ((double) ((abs (var_1_47)) + ((max (var_1_48 , var_1_49)) + var_1_77)))) : (var_1_76 == ((double) (max (var_1_48 , (max (9.25 , var_1_75))))))) : (var_1_108 ? ((var_1_46 == (var_1_75 - var_1_27)) ? (var_1_76 == ((double) (((3.4070160916606116E18 - 10.4) + var_1_75) - (max (var_1_39 , var_1_64))))) : (var_1_76 == ((double) (max ((var_1_75 - 64.6) , var_1_48))))) : 1))) && ((var_1_110 && var_1_108) ? (var_1_78 == ((double) (min ((var_1_75 - var_1_38) , (var_1_48 + var_1_49))))) : (((var_1_59 - var_1_18) == var_1_12) ? (((~ var_1_1) > var_1_107) ? (((var_1_86 || var_1_108) && (var_1_18 >= var_1_67)) ? ((! var_1_110) ? (var_1_78 == ((double) ((abs (var_1_48 + var_1_77)) + (var_1_65 - (abs (var_1_22)))))) : (var_1_78 == ((double) (max (var_1_49 , var_1_47))))) : (var_1_78 == ((double) (var_1_39 - var_1_65)))) : 1) : ((var_1_21 < (max ((- var_1_28) , var_1_65))) ? (var_1_78 == ((double) var_1_65)) : (var_1_78 == ((double) (var_1_64 - (var_1_65 + var_1_75)))))))) && ((var_1_100 >= var_1_29) ? ((var_1_45 > (- (50.6f / var_1_64))) ? (var_1_79 == ((unsigned long int) (max (var_1_4 , var_1_58)))) : (var_1_79 == ((unsigned long int) ((var_1_80 - var_1_99) - var_1_69)))) : ((! (var_1_45 < var_1_10)) ? (var_1_79 == ((unsigned long int) (max (var_1_4 , ((min (var_1_58 , var_1_18)) + var_1_42))))) : (var_1_79 == ((unsigned long int) (max (var_1_62 , var_1_72))))))) && (((min ((- last_1_var_1_97) , var_1_38)) >= last_1_var_1_63) ? (var_1_81 == ((unsigned char) var_1_62)) : (((var_1_48 >= var_1_28) || last_1_var_1_50) ? ((var_1_28 >= var_1_27) ? (var_1_81 == ((unsigned char) var_1_82)) : (var_1_81 == ((unsigned char) ((var_1_83 + var_1_84) - (100 - (var_1_72 + var_1_85)))))) : (var_1_81 == ((unsigned char) (var_1_59 - ((max (var_1_72 , var_1_17)) + var_1_85))))))) && ((var_1_109 >= (128 * (256 - 5))) ? (var_1_86 == ((unsigned char) var_1_51)) : (var_1_86 == ((unsigned char) ((! var_1_110) && var_1_87))))) && ((var_1_109 <= (var_1_98 & var_1_30)) ? ((! var_1_87) ? (var_1_88 == ((signed short int) (var_1_32 + var_1_17))) : (var_1_88 == ((signed short int) (var_1_71 + var_1_12)))) : 1)) && (var_1_86 ? (var_1_89 == ((signed char) ((max (var_1_85 , var_1_12)) + (max (var_1_14 , var_1_54))))) : (((var_1_109 > (var_1_85 % var_1_71)) || var_1_86) ? (var_1_89 == ((signed char) (((var_1_85 - var_1_90) + (var_1_91 + -10)) + ((var_1_92 - var_1_93) - (min (var_1_72 , var_1_17)))))) : ((((var_1_43 * var_1_84) / var_1_83) < (var_1_36 - (min (64 , var_1_72)))) ? ((var_1_30 != ((var_1_59 + var_1_106) + (max (var_1_4 , var_1_18)))) ? (var_1_89 == ((signed char) var_1_16)) : (var_1_89 == ((signed char) var_1_92))) : 1)))) && ((var_1_58 == (min (var_1_59 , var_1_29))) ? (((var_1_16 >= var_1_91) || var_1_51) ? (var_1_94 == ((unsigned char) (var_1_51 || (var_1_41 && var_1_87)))) : (var_1_94 == ((unsigned char) (! (var_1_41 && var_1_95))))) : (var_1_94 == ((unsigned char) var_1_87)))) && (var_1_96 == ((signed short int) ((min (var_1_1 , (var_1_1 + 16))) + (min ((max (-64 , var_1_16)) , var_1_36)))))) && (((- var_1_67) >= (var_1_72 << var_1_57)) ? (((var_1_70 * var_1_99) <= ((var_1_30 - var_1_109) / (var_1_36 + var_1_43))) ? (var_1_97 == ((float) var_1_46)) : 1) : 1)) && ((var_1_31 > var_1_67) ? (var_1_98 == ((unsigned long int) var_1_96)) : 1)) && ((last_1_var_1_23 != last_1_var_1_107) ? (var_1_99 == ((unsigned short int) (var_1_68 - (var_1_43 - var_1_84)))) : (var_1_99 == ((unsigned short int) (last_1_var_1_35 + var_1_59))))) && (var_1_95 ? (var_1_100 == ((unsigned long int) var_1_43)) : 1)) && (var_1_101 == ((signed char) var_1_16))) && (var_1_86 ? (var_1_102 == ((unsigned long int) var_1_67)) : (var_1_102 == ((unsigned long int) var_1_16)))) && (var_1_104 == ((unsigned char) 200))) && (var_1_95 ? (var_1_105 == ((float) var_1_28)) : (var_1_105 == ((float) var_1_49)))) && (var_1_56 ? (var_1_106 == ((unsigned char) var_1_18)) : (var_1_106 == ((unsigned char) 10)))) && (var_1_113 ? (var_1_107 == ((signed char) 0)) : (var_1_107 == ((signed char) -10)))) && (var_1_108 == ((unsigned char) var_1_51))) && (var_1_110 ? (var_1_109 == ((unsigned short int) var_1_71)) : (var_1_109 == ((unsigned short int) var_1_90)))) && (last_1_var_1_110 ? (var_1_110 == ((unsigned char) var_1_95)) : 1)) && (var_1_111 == ((unsigned long int) var_1_85))) && (var_1_86 ? (var_1_112 == ((signed char) var_1_53)) : (var_1_112 == ((signed char) var_1_72)))) && (var_1_113 == ((unsigned char) var_1_87))) && (var_1_113 ? (var_1_114 == ((double) var_1_65)) : (var_1_114 == ((double) var_1_28)))) && ((((! var_1_41) || var_1_87) || var_1_108) ? (var_1_115 == ((unsigned short int) var_1_68)) : ((! (! var_1_108)) ? (var_1_115 == ((unsigned short int) (((var_1_116 - var_1_7) - var_1_85) + var_1_43))) : (var_1_115 == ((unsigned short int) var_1_43))))
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
