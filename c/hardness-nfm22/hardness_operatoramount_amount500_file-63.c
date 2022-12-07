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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch63Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 4;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 100;
signed long int var_1_8 = -256;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 200;
signed char var_1_14 = 16;
unsigned char var_1_15 = 64;
unsigned char var_1_16 = 100;
signed long int var_1_17 = 256;
float var_1_18 = 1.6;
signed char var_1_21 = -1;
double var_1_23 = 8.6;
double var_1_24 = 32.1;
double var_1_25 = 256.4;
double var_1_26 = 255.5;
double var_1_27 = 256.5;
double var_1_28 = 10000000.25;
signed long int var_1_29 = 0;
float var_1_30 = 999999999999.2;
signed long int var_1_31 = -10000;
unsigned short int var_1_32 = 0;
signed char var_1_34 = 32;
double var_1_35 = 10.875;
double var_1_36 = 1.4;
signed short int var_1_37 = -32;
unsigned char var_1_38 = 128;
signed long int var_1_39 = 5;
signed long int var_1_40 = -128;
signed long int var_1_41 = 2044377949;
signed short int var_1_42 = 10;
float var_1_43 = 4.1;
float var_1_45 = 256.125;
float var_1_46 = 24.8;
float var_1_47 = 255.5;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
float var_1_51 = 127.1;
float var_1_52 = 0.19999999999999996;
signed short int var_1_53 = -64;
signed short int var_1_55 = 19141;
signed short int var_1_56 = 29317;
signed short int var_1_57 = -25;
unsigned char var_1_59 = 1;
unsigned char var_1_62 = 1;
unsigned char var_1_63 = 1;
unsigned short int var_1_64 = 0;
unsigned short int var_1_65 = 10000;
unsigned short int var_1_66 = 10000;
unsigned short int var_1_67 = 24314;
unsigned short int var_1_68 = 42895;
unsigned short int var_1_69 = 49739;
unsigned short int var_1_70 = 44016;
unsigned short int var_1_71 = 16;
double var_1_72 = 4.5;
double var_1_73 = 10.5;
unsigned short int var_1_76 = 4;
double var_1_77 = 2.5;
unsigned char var_1_78 = 0;
signed short int var_1_79 = 0;
signed short int var_1_80 = 0;
signed long int var_1_81 = 32;
unsigned short int var_1_82 = 8;
signed char var_1_83 = 10;
unsigned short int var_1_84 = 2;
signed long int var_1_86 = 64;
unsigned short int var_1_87 = 1;
double var_1_88 = 2.2;
unsigned char var_1_89 = 16;
unsigned char var_1_90 = 200;
unsigned char var_1_92 = 0;
signed short int var_1_93 = -32;
float var_1_94 = 255.75;
signed char var_1_95 = -4;
double var_1_96 = 256.5;
signed char var_1_97 = 4;
signed short int var_1_98 = 256;
double var_1_99 = 15.2;
unsigned short int var_1_100 = 25;
double var_1_101 = 25.75;
signed long int var_1_102 = 128;
signed long int var_1_103 = 4;
float var_1_104 = 16.375;
unsigned char var_1_105 = 128;
signed long int var_1_106 = 10;
signed short int var_1_107 = -1;
double var_1_108 = 0.4;
unsigned char var_1_109 = 0;
unsigned char var_1_110 = 0;
unsigned char var_1_111 = 64;
signed short int var_1_112 = -100;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 4;
unsigned char last_1_var_1_9 = 1;
unsigned char last_1_var_1_12 = 1;
unsigned char last_1_var_1_13 = 200;
signed long int last_1_var_1_17 = 256;
signed char last_1_var_1_21 = -1;
unsigned short int last_1_var_1_32 = 0;
signed char last_1_var_1_34 = 32;
double last_1_var_1_35 = 10.875;
signed short int last_1_var_1_37 = -32;
signed long int last_1_var_1_39 = 5;
signed long int last_1_var_1_40 = -128;
signed short int last_1_var_1_42 = 10;
unsigned char last_1_var_1_59 = 1;
unsigned char last_1_var_1_63 = 1;
unsigned short int last_1_var_1_64 = 0;
unsigned short int last_1_var_1_71 = 16;
unsigned short int last_1_var_1_76 = 4;
unsigned short int last_1_var_1_82 = 8;
unsigned short int last_1_var_1_84 = 2;
unsigned short int last_1_var_1_87 = 1;
unsigned char last_1_var_1_89 = 16;
signed short int last_1_var_1_93 = -32;
float last_1_var_1_94 = 255.75;
signed char last_1_var_1_95 = -4;
double last_1_var_1_96 = 256.5;
signed short int last_1_var_1_98 = 256;
double last_1_var_1_99 = 15.2;
unsigned short int last_1_var_1_100 = 25;
signed long int last_1_var_1_102 = 128;
signed long int last_1_var_1_103 = 4;
float last_1_var_1_104 = 16.375;
signed long int last_1_var_1_106 = 10;
signed short int last_1_var_1_107 = -1;
unsigned char last_1_var_1_109 = 0;
unsigned char last_1_var_1_111 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req23Batch63Amount500
	signed long int stepLocal_15 = last_1_var_1_12;
	if (stepLocal_15 <= (var_1_55 - last_1_var_1_37)) {
		var_1_57 = ((28595 - var_1_14) - var_1_5);
	} else {
		var_1_57 = ((max ((var_1_55 - var_1_38) , last_1_var_1_1)) - ((31309 - var_1_16) - var_1_15));
	}


	// From: Req16Batch63Amount500
	if (var_1_11) {
		if (var_1_38 <= var_1_14) {
			if (last_1_var_1_99 >= var_1_25) {
				var_1_39 = (min (last_1_var_1_17 , var_1_15));
			} else {
				if (last_1_var_1_39 >= ((var_1_16 - var_1_14) - var_1_6)) {
					var_1_39 = last_1_var_1_12;
				}
			}
		} else {
			var_1_39 = ((abs (last_1_var_1_98)) - ((var_1_16 + var_1_15) + (min (last_1_var_1_12 , last_1_var_1_12))));
		}
	}


	// From: Req20Batch63Amount500
	if (last_1_var_1_102 != (abs (last_1_var_1_40))) {
		if (var_1_41 != (last_1_var_1_95 >> last_1_var_1_102)) {
			if (! var_1_11) {
				var_1_48 = (var_1_11 || (last_1_var_1_9 && var_1_49));
			}
		} else {
			var_1_48 = (var_1_10 && (last_1_var_1_59 || (! var_1_49)));
		}
	} else {
		var_1_48 = (var_1_10 && var_1_50);
	}


	// From: Req51Batch63Amount500
	if (var_1_48) {
		var_1_105 = var_1_79;
	}


	// From: Req39Batch63Amount500
	unsigned char stepLocal_28 = var_1_6;
	if ((last_1_var_1_71 * last_1_var_1_103) == stepLocal_28) {
		var_1_93 = var_1_15;
	} else {
		var_1_93 = var_1_55;
	}


	// From: Req6Batch63Amount500
	if (last_1_var_1_107 >= var_1_6) {
		if ((127.75f / (min (9.6f , var_1_18))) <= last_1_var_1_94) {
			if (var_1_16 < (var_1_15 * 10)) {
				var_1_17 = (abs (-32 + last_1_var_1_100));
			} else {
				var_1_17 = var_1_15;
			}
		} else {
			var_1_17 = (last_1_var_1_13 - last_1_var_1_13);
		}
	} else {
		if (last_1_var_1_21 < (max ((min (last_1_var_1_34 , var_1_5)) , last_1_var_1_13))) {
			var_1_17 = last_1_var_1_21;
		}
	}


	// From: Req57Batch63Amount500
	var_1_112 = var_1_17;


	// From: Req37Batch63Amount500
	if ((max (last_1_var_1_35 , last_1_var_1_96)) >= var_1_36) {
		var_1_89 = (var_1_7 + (min (var_1_79 , var_1_16)));
	} else {
		if (var_1_50) {
			var_1_89 = ((max (var_1_5 , var_1_90)) - var_1_79);
		} else {
			if (last_1_var_1_104 != var_1_18) {
				if (((min (var_1_41 , var_1_80)) * last_1_var_1_76) > (last_1_var_1_89 - last_1_var_1_111)) {
					var_1_89 = (min ((128 - var_1_6) , var_1_79));
				}
			} else {
				var_1_89 = var_1_79;
			}
		}
	}


	// From: Req3Batch63Amount500
	unsigned char stepLocal_0 = last_1_var_1_63;
	if ((last_1_var_1_93 < last_1_var_1_106) && stepLocal_0) {
		var_1_9 = ((last_1_var_1_93 > last_1_var_1_106) || var_1_10);
	} else {
		var_1_9 = (! var_1_11);
	}


	// From: Req30Batch63Amount500
	signed long int stepLocal_22 = var_1_66 << (min (var_1_79 , var_1_80));
	if (stepLocal_22 < (min (1 , var_1_16))) {
		var_1_78 = (var_1_9 || var_1_50);
	} else {
		var_1_78 = var_1_49;
	}


	// From: Req29Batch63Amount500
	unsigned char stepLocal_21 = var_1_9;
	if (stepLocal_21 || var_1_62) {
		var_1_77 = (max ((var_1_47 - var_1_36) , var_1_45));
	}


	// From: Req50Batch63Amount500
	if (var_1_78) {
		var_1_104 = var_1_52;
	} else {
		var_1_104 = var_1_26;
	}


	// From: Req2Batch63Amount500
	if (var_1_78) {
		var_1_8 = (max (var_1_6 , var_1_7));
	} else {
		var_1_8 = (25 + var_1_6);
	}


	// From: Req4Batch63Amount500
	if (var_1_11) {
		var_1_12 = var_1_6;
	}


	// From: Req13Batch63Amount500
	var_1_34 = (var_1_14 - var_1_6);


	// From: Req25Batch63Amount500
	if (var_1_11) {
		var_1_63 = (! (! var_1_49));
	} else {
		var_1_63 = (var_1_49 || var_1_10);
	}


	// From: Req38Batch63Amount500
	if (var_1_39 < var_1_57) {
		var_1_92 = ((var_1_79 != var_1_12) && var_1_49);
	} else {
		var_1_92 = (var_1_62 && var_1_11);
	}


	// From: Req40Batch63Amount500
	var_1_94 = 31.6f;


	// From: Req41Batch63Amount500
	var_1_95 = var_1_80;


	// From: Req42Batch63Amount500
	var_1_96 = var_1_26;


	// From: Req43Batch63Amount500
	if (var_1_62) {
		var_1_97 = var_1_5;
	} else {
		var_1_97 = var_1_80;
	}


	// From: Req45Batch63Amount500
	if (var_1_63) {
		var_1_99 = 10.125;
	}


	// From: Req46Batch63Amount500
	var_1_100 = var_1_16;


	// From: Req47Batch63Amount500
	var_1_101 = 8.4;


	// From: Req48Batch63Amount500
	var_1_102 = var_1_6;


	// From: Req49Batch63Amount500
	var_1_103 = -500;


	// From: Req53Batch63Amount500
	var_1_107 = var_1_83;


	// From: Req54Batch63Amount500
	if (var_1_50) {
		var_1_108 = var_1_28;
	} else {
		var_1_108 = var_1_52;
	}


	// From: Req55Batch63Amount500
	if (! (! last_1_var_1_109)) {
		var_1_109 = var_1_10;
	} else {
		var_1_109 = (((var_1_49 || var_1_11) || var_1_110) || (! var_1_62));
	}


	// From: Req56Batch63Amount500
	var_1_111 = var_1_80;


	// From: Req44Batch63Amount500
	if (var_1_9) {
		var_1_98 = var_1_17;
	} else {
		var_1_98 = var_1_39;
	}


	// From: Req7Batch63Amount500
	signed long int stepLocal_4 = -32;
	signed long int stepLocal_3 = - (min (var_1_5 , var_1_105));
	if (var_1_6 > stepLocal_3) {
		if (var_1_99 < (var_1_18 * (var_1_77 * 127.4f))) {
			if (var_1_111 == stepLocal_4) {
				if ((- var_1_18) >= (var_1_77 + var_1_99)) {
					var_1_21 = (var_1_14 + var_1_6);
				}
			} else {
				var_1_21 = var_1_5;
			}
		} else {
			var_1_21 = var_1_6;
		}
	} else {
		var_1_21 = var_1_6;
	}


	// From: Req11Batch63Amount500
	if (! (var_1_78 || var_1_11)) {
		var_1_31 = (var_1_93 + var_1_14);
	}


	// From: Req32Batch63Amount500
	signed long int stepLocal_23 = 64;
	if (var_1_27 > var_1_36) {
		if ((var_1_83 - var_1_14) > stepLocal_23) {
			var_1_82 = (min (var_1_66 , (var_1_68 - var_1_7)));
		} else {
			var_1_82 = (max (var_1_102 , (max ((var_1_80 + var_1_89) , last_1_var_1_82))));
		}
	}


	// From: Req52Batch63Amount500
	if (var_1_63) {
		var_1_106 = var_1_89;
	} else {
		var_1_106 = last_1_var_1_106;
	}


	// From: Req12Batch63Amount500
	if (var_1_82 < (min ((last_1_var_1_32 / 25) , (var_1_6 % var_1_15)))) {
		var_1_32 = (var_1_5 + var_1_82);
	} else {
		var_1_32 = (max (8 , var_1_14));
	}


	// From: Req21Batch63Amount500
	unsigned char stepLocal_13 = var_1_49;
	if ((! (var_1_36 < var_1_96)) || stepLocal_13) {
		var_1_51 = ((min (var_1_27 , (abs (var_1_47)))) + (var_1_46 - var_1_52));
	} else {
		var_1_51 = (min ((max (var_1_36 , var_1_26)) , var_1_24));
	}


	// From: Req31Batch63Amount500
	if (! var_1_63) {
		var_1_81 = (var_1_14 - ((var_1_15 + var_1_68) + (min (var_1_95 , var_1_16))));
	}


	// From: Req34Batch63Amount500
	var_1_86 = (min (var_1_79 , var_1_97));


	// From: Req18Batch63Amount500
	if (((last_1_var_1_42 * -2) / -10000) > (abs (var_1_39 - var_1_57))) {
		var_1_42 = var_1_7;
	} else {
		var_1_42 = (min ((var_1_57 - 16) , (var_1_38 + (var_1_6 - var_1_98))));
	}


	// From: Req24Batch63Amount500
	signed long int stepLocal_19 = (max (-32 , var_1_5)) / var_1_15;
	unsigned char stepLocal_18 = var_1_78;
	signed long int stepLocal_17 = max ((- var_1_31) , (var_1_112 % 50));
	unsigned char stepLocal_16 = var_1_49;
	if (stepLocal_16 && var_1_48) {
		if (stepLocal_18 && var_1_78) {
			if (-256 != stepLocal_19) {
				var_1_59 = ((var_1_15 < 5) && var_1_11);
			} else {
				if (stepLocal_17 > var_1_57) {
					var_1_59 = (var_1_50 && var_1_49);
				} else {
					var_1_59 = ((var_1_50 || var_1_10) && var_1_62);
				}
			}
		} else {
			var_1_59 = (! (! var_1_50));
		}
	} else {
		var_1_59 = (var_1_78 && ((var_1_10 && var_1_49) || var_1_11));
	}


	// From: Req35Batch63Amount500
	unsigned char stepLocal_26 = var_1_7;
	signed short int stepLocal_25 = var_1_56;
	signed long int stepLocal_24 = -32;
	if (stepLocal_25 > (var_1_79 - (var_1_80 + var_1_100))) {
		if (stepLocal_26 <= last_1_var_1_87) {
			if (stepLocal_24 > var_1_82) {
				var_1_87 = (var_1_68 - var_1_66);
			} else {
				var_1_87 = (var_1_70 - var_1_67);
			}
		} else {
			var_1_87 = (var_1_69 - (max (var_1_56 , var_1_100)));
		}
	} else {
		var_1_87 = (max (var_1_80 , (var_1_56 + var_1_7)));
	}


	// From: Req1Batch63Amount500
	if (((var_1_86 / -2) <= var_1_89) && var_1_63) {
		var_1_1 = ((var_1_5 - var_1_6) - var_1_7);
	} else {
		var_1_1 = (var_1_6 + var_1_7);
	}


	// From: Req5Batch63Amount500
	unsigned char stepLocal_2 = var_1_7;
	signed long int stepLocal_1 = (var_1_6 + var_1_14) - var_1_7;
	if (var_1_10) {
		var_1_13 = var_1_7;
	} else {
		if (stepLocal_1 >= (var_1_87 | (min (var_1_95 , var_1_5)))) {
			var_1_13 = ((var_1_15 + (min (64 , var_1_16))) - (min (var_1_7 , var_1_14)));
		} else {
			if (stepLocal_2 >= var_1_89) {
				var_1_13 = (max (((abs (var_1_14)) + var_1_16) , var_1_7));
			}
		}
	}


	// From: Req9Batch63Amount500
	signed long int stepLocal_5 = var_1_5 % var_1_15;
	if (stepLocal_5 >= var_1_7) {
		var_1_29 = (10000000 + var_1_87);
	} else {
		var_1_29 = var_1_103;
	}


	// From: Req14Batch63Amount500
	unsigned short int stepLocal_6 = var_1_87;
	if (stepLocal_6 <= (abs (var_1_7))) {
		var_1_35 = (7.15 - var_1_36);
	} else {
		var_1_35 = (min (var_1_36 , var_1_28));
	}


	// From: Req22Batch63Amount500
	unsigned char stepLocal_14 = (var_1_104 * var_1_26) > (- var_1_99);
	if (var_1_59 || stepLocal_14) {
		if (! (var_1_46 > var_1_36)) {
			var_1_53 = (((var_1_16 - var_1_15) + var_1_6) + (min ((var_1_32 - var_1_7) , var_1_34)));
		}
	} else {
		var_1_53 = ((var_1_55 - (max (256 , var_1_32))) - (var_1_56 - (max (var_1_14 , var_1_5))));
	}


	// From: Req33Batch63Amount500
	if (var_1_92) {
		if (var_1_42 < (- var_1_56)) {
			var_1_84 = (var_1_56 + var_1_7);
		}
	} else {
		var_1_84 = (((max (var_1_38 , var_1_6)) + last_1_var_1_84) + var_1_80);
	}


	// From: Req26Batch63Amount500
	if (var_1_78) {
		var_1_64 = (((var_1_65 + var_1_66) + var_1_67) - var_1_42);
	} else {
		if (var_1_16 < last_1_var_1_64) {
			var_1_64 = ((min ((min (var_1_68 , var_1_69)) , var_1_70)) - ((max (var_1_56 , var_1_67)) - var_1_7));
		}
	}


	// From: Req15Batch63Amount500
	signed long int stepLocal_8 = var_1_106;
	signed long int stepLocal_7 = (min (var_1_5 , var_1_38)) - var_1_15;
	if (stepLocal_8 <= var_1_29) {
		if (var_1_29 > stepLocal_7) {
			var_1_37 = (min (((var_1_15 - last_1_var_1_37) + var_1_64) , var_1_14));
		}
	}


	// From: Req17Batch63Amount500
	unsigned char stepLocal_10 = var_1_78;
	unsigned short int stepLocal_9 = var_1_64;
	if (stepLocal_10 || (var_1_59 && var_1_11)) {
		var_1_40 = ((var_1_41 - var_1_7) - var_1_93);
	} else {
		if (stepLocal_9 != last_1_var_1_40) {
			var_1_40 = ((var_1_93 + var_1_107) - (min ((min (var_1_93 , var_1_38)) , var_1_15)));
		} else {
			var_1_40 = var_1_21;
		}
	}


	// From: Req28Batch63Amount500
	signed long int stepLocal_20 = var_1_39;
	if (! var_1_9) {
		if (! var_1_62) {
			if ((var_1_47 / var_1_72) == var_1_36) {
				var_1_76 = (var_1_68 - (min ((min (var_1_67 , 1)) , var_1_56)));
			} else {
				var_1_76 = ((min (var_1_40 , var_1_5)) + (var_1_67 - (max (10 , var_1_97))));
			}
		} else {
			if (stepLocal_20 < ((~ last_1_var_1_76) & var_1_7)) {
				var_1_76 = (var_1_70 - (var_1_5 + var_1_40));
			}
		}
	} else {
		var_1_76 = (var_1_68 - var_1_15);
	}


	// From: Req27Batch63Amount500
	if ((var_1_16 << var_1_14) > var_1_112) {
		if (var_1_52 < var_1_46) {
			var_1_71 = (max ((var_1_38 + var_1_16) , var_1_107));
		} else {
			var_1_71 = (min ((abs (var_1_112)) , last_1_var_1_71));
		}
	} else {
		if (var_1_63) {
			if ((var_1_36 / (min (var_1_18 , var_1_72))) > (var_1_101 / var_1_73)) {
				if (var_1_10 && (256 < (var_1_68 - var_1_76))) {
					var_1_71 = (var_1_12 + (abs (4 + var_1_76)));
				} else {
					var_1_71 = (abs (var_1_12));
				}
			}
		} else {
			if (var_1_32 <= (var_1_12 / var_1_55)) {
				var_1_71 = (var_1_38 + var_1_5);
			}
		}
	}


	// From: Req8Batch63Amount500
	if (((min (4 , var_1_7)) * var_1_37) > 8) {
		var_1_23 = var_1_24;
	} else {
		var_1_23 = (max ((abs (0.75 + var_1_25)) , ((var_1_26 + 1.00000000075E9) + (var_1_27 + var_1_28))));
	}


	// From: Req10Batch63Amount500
	if ((var_1_64 + (128 + var_1_15)) <= var_1_7) {
		var_1_30 = var_1_25;
	}


	// From: Req19Batch63Amount500
	unsigned short int stepLocal_12 = var_1_32;
	signed long int stepLocal_11 = var_1_84 + var_1_95;
	if (stepLocal_11 >= var_1_93) {
		var_1_43 = (var_1_26 + var_1_28);
	} else {
		if (var_1_63) {
			if (stepLocal_12 > var_1_7) {
				var_1_43 = var_1_27;
			}
		} else {
			var_1_43 = (min (var_1_45 , ((var_1_46 - var_1_47) + 0.81f)));
		}
	}


	// From: Req36Batch63Amount500
	unsigned char stepLocal_27 = var_1_111;
	if (stepLocal_27 > var_1_76) {
		if (var_1_96 <= (15.1 * var_1_43)) {
			var_1_88 = (abs (var_1_46));
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 63);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 64);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	assume_abort_if_not(var_1_18 != 0.0F);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427382800e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -230584.3009213691390e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691390e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -230584.3009213691390e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691390e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -230584.3009213691390e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691390e+12F && var_1_28 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 127);
	assume_abort_if_not(var_1_38 <= 255);
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= 1073741822);
	assume_abort_if_not(var_1_41 <= 2147483646);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -922337.2036854765600e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854765600e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427382800e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427382800e+12F && var_1_52 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_55 >= 16382);
	assume_abort_if_not(var_1_55 <= 32766);
	var_1_56 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_56 >= 16383);
	assume_abort_if_not(var_1_56 <= 32766);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 1);
	assume_abort_if_not(var_1_62 <= 1);
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 8191);
	assume_abort_if_not(var_1_65 <= 16384);
	var_1_66 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_66 >= 8192);
	assume_abort_if_not(var_1_66 <= 16383);
	var_1_67 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_67 >= 16384);
	assume_abort_if_not(var_1_67 <= 32767);
	var_1_68 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_68 >= 32767);
	assume_abort_if_not(var_1_68 <= 65534);
	var_1_69 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_69 >= 32767);
	assume_abort_if_not(var_1_69 <= 65534);
	var_1_70 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_70 >= 32767);
	assume_abort_if_not(var_1_70 <= 65534);
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= -922337.2036854776000e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854776000e+12F && var_1_72 >= 1.0e-20F ));
	assume_abort_if_not(var_1_72 != 0.0F);
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= -922337.2036854776000e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854776000e+12F && var_1_73 >= 1.0e-20F ));
	assume_abort_if_not(var_1_73 != 0.0F);
	var_1_79 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 2);
	var_1_80 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 2);
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= -1);
	assume_abort_if_not(var_1_83 <= 127);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 127);
	assume_abort_if_not(var_1_90 <= 254);
	var_1_110 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_110 >= 0);
	assume_abort_if_not(var_1_110 <= 0);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_111 = var_1_111;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_86 / -2) <= var_1_89) && var_1_63) ? (var_1_1 == ((unsigned char) ((var_1_5 - var_1_6) - var_1_7))) : (var_1_1 == ((unsigned char) (var_1_6 + var_1_7)))) && (var_1_78 ? (var_1_8 == ((signed long int) (max (var_1_6 , var_1_7)))) : (var_1_8 == ((signed long int) (25 + var_1_6))))) && (((last_1_var_1_93 < last_1_var_1_106) && last_1_var_1_63) ? (var_1_9 == ((unsigned char) ((last_1_var_1_93 > last_1_var_1_106) || var_1_10))) : (var_1_9 == ((unsigned char) (! var_1_11))))) && (var_1_11 ? (var_1_12 == ((unsigned char) var_1_6)) : 1)) && (var_1_10 ? (var_1_13 == ((unsigned char) var_1_7)) : ((((var_1_6 + var_1_14) - var_1_7) >= (var_1_87 | (min (var_1_95 , var_1_5)))) ? (var_1_13 == ((unsigned char) ((var_1_15 + (min (64 , var_1_16))) - (min (var_1_7 , var_1_14))))) : ((var_1_7 >= var_1_89) ? (var_1_13 == ((unsigned char) (max (((abs (var_1_14)) + var_1_16) , var_1_7)))) : 1)))) && ((last_1_var_1_107 >= var_1_6) ? (((127.75f / (min (9.6f , var_1_18))) <= last_1_var_1_94) ? ((var_1_16 < (var_1_15 * 10)) ? (var_1_17 == ((signed long int) (abs (-32 + last_1_var_1_100)))) : (var_1_17 == ((signed long int) var_1_15))) : (var_1_17 == ((signed long int) (last_1_var_1_13 - last_1_var_1_13)))) : ((last_1_var_1_21 < (max ((min (last_1_var_1_34 , var_1_5)) , last_1_var_1_13))) ? (var_1_17 == ((signed long int) last_1_var_1_21)) : 1))) && ((var_1_6 > (- (min (var_1_5 , var_1_105)))) ? ((var_1_99 < (var_1_18 * (var_1_77 * 127.4f))) ? ((var_1_111 == -32) ? (((- var_1_18) >= (var_1_77 + var_1_99)) ? (var_1_21 == ((signed char) (var_1_14 + var_1_6))) : 1) : (var_1_21 == ((signed char) var_1_5))) : (var_1_21 == ((signed char) var_1_6))) : (var_1_21 == ((signed char) var_1_6)))) && ((((min (4 , var_1_7)) * var_1_37) > 8) ? (var_1_23 == ((double) var_1_24)) : (var_1_23 == ((double) (max ((abs (0.75 + var_1_25)) , ((var_1_26 + 1.00000000075E9) + (var_1_27 + var_1_28)))))))) && (((var_1_5 % var_1_15) >= var_1_7) ? (var_1_29 == ((signed long int) (10000000 + var_1_87))) : (var_1_29 == ((signed long int) var_1_103)))) && (((var_1_64 + (128 + var_1_15)) <= var_1_7) ? (var_1_30 == ((float) var_1_25)) : 1)) && ((! (var_1_78 || var_1_11)) ? (var_1_31 == ((signed long int) (var_1_93 + var_1_14))) : 1)) && ((var_1_82 < (min ((last_1_var_1_32 / 25) , (var_1_6 % var_1_15)))) ? (var_1_32 == ((unsigned short int) (var_1_5 + var_1_82))) : (var_1_32 == ((unsigned short int) (max (8 , var_1_14)))))) && (var_1_34 == ((signed char) (var_1_14 - var_1_6)))) && ((var_1_87 <= (abs (var_1_7))) ? (var_1_35 == ((double) (7.15 - var_1_36))) : (var_1_35 == ((double) (min (var_1_36 , var_1_28)))))) && ((var_1_106 <= var_1_29) ? ((var_1_29 > ((min (var_1_5 , var_1_38)) - var_1_15)) ? (var_1_37 == ((signed short int) (min (((var_1_15 - last_1_var_1_37) + var_1_64) , var_1_14)))) : 1) : 1)) && (var_1_11 ? ((var_1_38 <= var_1_14) ? ((last_1_var_1_99 >= var_1_25) ? (var_1_39 == ((signed long int) (min (last_1_var_1_17 , var_1_15)))) : ((last_1_var_1_39 >= ((var_1_16 - var_1_14) - var_1_6)) ? (var_1_39 == ((signed long int) last_1_var_1_12)) : 1)) : (var_1_39 == ((signed long int) ((abs (last_1_var_1_98)) - ((var_1_16 + var_1_15) + (min (last_1_var_1_12 , last_1_var_1_12))))))) : 1)) && ((var_1_78 || (var_1_59 && var_1_11)) ? (var_1_40 == ((signed long int) ((var_1_41 - var_1_7) - var_1_93))) : ((var_1_64 != last_1_var_1_40) ? (var_1_40 == ((signed long int) ((var_1_93 + var_1_107) - (min ((min (var_1_93 , var_1_38)) , var_1_15))))) : (var_1_40 == ((signed long int) var_1_21))))) && ((((last_1_var_1_42 * -2) / -10000) > (abs (var_1_39 - var_1_57))) ? (var_1_42 == ((signed short int) var_1_7)) : (var_1_42 == ((signed short int) (min ((var_1_57 - 16) , (var_1_38 + (var_1_6 - var_1_98)))))))) && (((var_1_84 + var_1_95) >= var_1_93) ? (var_1_43 == ((float) (var_1_26 + var_1_28))) : (var_1_63 ? ((var_1_32 > var_1_7) ? (var_1_43 == ((float) var_1_27)) : 1) : (var_1_43 == ((float) (min (var_1_45 , ((var_1_46 - var_1_47) + 0.81f)))))))) && ((last_1_var_1_102 != (abs (last_1_var_1_40))) ? ((var_1_41 != (last_1_var_1_95 >> last_1_var_1_102)) ? ((! var_1_11) ? (var_1_48 == ((unsigned char) (var_1_11 || (last_1_var_1_9 && var_1_49)))) : 1) : (var_1_48 == ((unsigned char) (var_1_10 && (last_1_var_1_59 || (! var_1_49)))))) : (var_1_48 == ((unsigned char) (var_1_10 && var_1_50))))) && (((! (var_1_36 < var_1_96)) || var_1_49) ? (var_1_51 == ((float) ((min (var_1_27 , (abs (var_1_47)))) + (var_1_46 - var_1_52)))) : (var_1_51 == ((float) (min ((max (var_1_36 , var_1_26)) , var_1_24)))))) && ((var_1_59 || ((var_1_104 * var_1_26) > (- var_1_99))) ? ((! (var_1_46 > var_1_36)) ? (var_1_53 == ((signed short int) (((var_1_16 - var_1_15) + var_1_6) + (min ((var_1_32 - var_1_7) , var_1_34))))) : 1) : (var_1_53 == ((signed short int) ((var_1_55 - (max (256 , var_1_32))) - (var_1_56 - (max (var_1_14 , var_1_5)))))))) && ((last_1_var_1_12 <= (var_1_55 - last_1_var_1_37)) ? (var_1_57 == ((signed short int) ((28595 - var_1_14) - var_1_5))) : (var_1_57 == ((signed short int) ((max ((var_1_55 - var_1_38) , last_1_var_1_1)) - ((31309 - var_1_16) - var_1_15)))))) && ((var_1_49 && var_1_48) ? ((var_1_78 && var_1_78) ? ((-256 != ((max (-32 , var_1_5)) / var_1_15)) ? (var_1_59 == ((unsigned char) ((var_1_15 < 5) && var_1_11))) : (((max ((- var_1_31) , (var_1_112 % 50))) > var_1_57) ? (var_1_59 == ((unsigned char) (var_1_50 && var_1_49))) : (var_1_59 == ((unsigned char) ((var_1_50 || var_1_10) && var_1_62))))) : (var_1_59 == ((unsigned char) (! (! var_1_50))))) : (var_1_59 == ((unsigned char) (var_1_78 && ((var_1_10 && var_1_49) || var_1_11)))))) && (var_1_11 ? (var_1_63 == ((unsigned char) (! (! var_1_49)))) : (var_1_63 == ((unsigned char) (var_1_49 || var_1_10))))) && (var_1_78 ? (var_1_64 == ((unsigned short int) (((var_1_65 + var_1_66) + var_1_67) - var_1_42))) : ((var_1_16 < last_1_var_1_64) ? (var_1_64 == ((unsigned short int) ((min ((min (var_1_68 , var_1_69)) , var_1_70)) - ((max (var_1_56 , var_1_67)) - var_1_7)))) : 1))) && (((var_1_16 << var_1_14) > var_1_112) ? ((var_1_52 < var_1_46) ? (var_1_71 == ((unsigned short int) (max ((var_1_38 + var_1_16) , var_1_107)))) : (var_1_71 == ((unsigned short int) (min ((abs (var_1_112)) , last_1_var_1_71))))) : (var_1_63 ? (((var_1_36 / (min (var_1_18 , var_1_72))) > (var_1_101 / var_1_73)) ? ((var_1_10 && (256 < (var_1_68 - var_1_76))) ? (var_1_71 == ((unsigned short int) (var_1_12 + (abs (4 + var_1_76))))) : (var_1_71 == ((unsigned short int) (abs (var_1_12))))) : 1) : ((var_1_32 <= (var_1_12 / var_1_55)) ? (var_1_71 == ((unsigned short int) (var_1_38 + var_1_5))) : 1)))) && ((! var_1_9) ? ((! var_1_62) ? (((var_1_47 / var_1_72) == var_1_36) ? (var_1_76 == ((unsigned short int) (var_1_68 - (min ((min (var_1_67 , 1)) , var_1_56))))) : (var_1_76 == ((unsigned short int) ((min (var_1_40 , var_1_5)) + (var_1_67 - (max (10 , var_1_97))))))) : ((var_1_39 < ((~ last_1_var_1_76) & var_1_7)) ? (var_1_76 == ((unsigned short int) (var_1_70 - (var_1_5 + var_1_40)))) : 1)) : (var_1_76 == ((unsigned short int) (var_1_68 - var_1_15))))) && ((var_1_9 || var_1_62) ? (var_1_77 == ((double) (max ((var_1_47 - var_1_36) , var_1_45)))) : 1)) && (((var_1_66 << (min (var_1_79 , var_1_80))) < (min (1 , var_1_16))) ? (var_1_78 == ((unsigned char) (var_1_9 || var_1_50))) : (var_1_78 == ((unsigned char) var_1_49)))) && ((! var_1_63) ? (var_1_81 == ((signed long int) (var_1_14 - ((var_1_15 + var_1_68) + (min (var_1_95 , var_1_16)))))) : 1)) && ((var_1_27 > var_1_36) ? (((var_1_83 - var_1_14) > 64) ? (var_1_82 == ((unsigned short int) (min (var_1_66 , (var_1_68 - var_1_7))))) : (var_1_82 == ((unsigned short int) (max (var_1_102 , (max ((var_1_80 + var_1_89) , last_1_var_1_82))))))) : 1)) && (var_1_92 ? ((var_1_42 < (- var_1_56)) ? (var_1_84 == ((unsigned short int) (var_1_56 + var_1_7))) : 1) : (var_1_84 == ((unsigned short int) (((max (var_1_38 , var_1_6)) + last_1_var_1_84) + var_1_80))))) && (var_1_86 == ((signed long int) (min (var_1_79 , var_1_97))))) && ((var_1_56 > (var_1_79 - (var_1_80 + var_1_100))) ? ((var_1_7 <= last_1_var_1_87) ? ((-32 > var_1_82) ? (var_1_87 == ((unsigned short int) (var_1_68 - var_1_66))) : (var_1_87 == ((unsigned short int) (var_1_70 - var_1_67)))) : (var_1_87 == ((unsigned short int) (var_1_69 - (max (var_1_56 , var_1_100)))))) : (var_1_87 == ((unsigned short int) (max (var_1_80 , (var_1_56 + var_1_7))))))) && ((var_1_111 > var_1_76) ? ((var_1_96 <= (15.1 * var_1_43)) ? (var_1_88 == ((double) (abs (var_1_46)))) : 1) : 1)) && (((max (last_1_var_1_35 , last_1_var_1_96)) >= var_1_36) ? (var_1_89 == ((unsigned char) (var_1_7 + (min (var_1_79 , var_1_16))))) : (var_1_50 ? (var_1_89 == ((unsigned char) ((max (var_1_5 , var_1_90)) - var_1_79))) : ((last_1_var_1_104 != var_1_18) ? ((((min (var_1_41 , var_1_80)) * last_1_var_1_76) > (last_1_var_1_89 - last_1_var_1_111)) ? (var_1_89 == ((unsigned char) (min ((128 - var_1_6) , var_1_79)))) : 1) : (var_1_89 == ((unsigned char) var_1_79)))))) && ((var_1_39 < var_1_57) ? (var_1_92 == ((unsigned char) ((var_1_79 != var_1_12) && var_1_49))) : (var_1_92 == ((unsigned char) (var_1_62 && var_1_11))))) && (((last_1_var_1_71 * last_1_var_1_103) == var_1_6) ? (var_1_93 == ((signed short int) var_1_15)) : (var_1_93 == ((signed short int) var_1_55)))) && (var_1_94 == ((float) 31.6f))) && (var_1_95 == ((signed char) var_1_80))) && (var_1_96 == ((double) var_1_26))) && (var_1_62 ? (var_1_97 == ((signed char) var_1_5)) : (var_1_97 == ((signed char) var_1_80)))) && (var_1_9 ? (var_1_98 == ((signed short int) var_1_17)) : (var_1_98 == ((signed short int) var_1_39)))) && (var_1_63 ? (var_1_99 == ((double) 10.125)) : 1)) && (var_1_100 == ((unsigned short int) var_1_16))) && (var_1_101 == ((double) 8.4))) && (var_1_102 == ((signed long int) var_1_6))) && (var_1_103 == ((signed long int) -500))) && (var_1_78 ? (var_1_104 == ((float) var_1_52)) : (var_1_104 == ((float) var_1_26)))) && (var_1_48 ? (var_1_105 == ((unsigned char) var_1_79)) : 1)) && (var_1_63 ? (var_1_106 == ((signed long int) var_1_89)) : (var_1_106 == ((signed long int) last_1_var_1_106)))) && (var_1_107 == ((signed short int) var_1_83))) && (var_1_50 ? (var_1_108 == ((double) var_1_28)) : (var_1_108 == ((double) var_1_52)))) && ((! (! last_1_var_1_109)) ? (var_1_109 == ((unsigned char) var_1_10)) : (var_1_109 == ((unsigned char) (((var_1_49 || var_1_11) || var_1_110) || (! var_1_62)))))) && (var_1_111 == ((unsigned char) var_1_80))) && (var_1_112 == ((signed short int) var_1_17))
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
