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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch89Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 128;
unsigned long int var_1_5 = 2082256544;
unsigned long int var_1_6 = 32;
unsigned long int var_1_7 = 1832746635;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
float var_1_13 = 9.5;
float var_1_14 = 100.75;
float var_1_15 = 7.4;
float var_1_16 = 10.625;
unsigned long int var_1_17 = 4;
unsigned long int var_1_19 = 2305451248;
unsigned char var_1_20 = 32;
unsigned char var_1_21 = 8;
unsigned char var_1_22 = 64;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 128;
unsigned short int var_1_26 = 50;
float var_1_27 = 4.5;
unsigned char var_1_28 = 100;
unsigned char var_1_29 = 100;
unsigned short int var_1_30 = 49518;
unsigned short int var_1_31 = 24230;
unsigned char var_1_32 = 64;
unsigned char var_1_33 = 2;
unsigned char var_1_34 = 200;
unsigned short int var_1_35 = 0;
double var_1_36 = 4.25;
double var_1_37 = 3.8;
unsigned short int var_1_38 = 29624;
signed char var_1_39 = 10;
signed char var_1_40 = 25;
unsigned char var_1_41 = 1;
double var_1_42 = 32.2;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned short int var_1_46 = 2;
signed short int var_1_47 = -64;
signed short int var_1_48 = 19145;
signed long int var_1_49 = -8;
unsigned char var_1_51 = 1;
unsigned short int var_1_52 = 128;
unsigned short int var_1_53 = 32412;
unsigned short int var_1_54 = 43517;
unsigned char var_1_55 = 16;
signed char var_1_56 = -4;
signed char var_1_57 = 32;
signed char var_1_58 = 8;
signed char var_1_59 = 1;
signed char var_1_60 = 8;
unsigned char var_1_61 = 5;
float var_1_62 = 255.1;
signed short int var_1_63 = 5;
signed char var_1_65 = -8;
signed short int var_1_66 = -10;
float var_1_67 = 0.5;
unsigned long int var_1_68 = 32;
unsigned long int var_1_69 = 1294870874;
double var_1_70 = 7.3;
double var_1_71 = 999.875;
double var_1_72 = 9.4;
double var_1_73 = 7.75;
signed long int var_1_74 = -10;
unsigned long int var_1_79 = 2;
signed char var_1_80 = -8;
signed long int var_1_81 = -1;
signed long int var_1_82 = -64;
unsigned short int var_1_83 = 32;
unsigned short int var_1_85 = 10000;
unsigned char var_1_86 = 100;
unsigned char var_1_87 = 32;
unsigned char var_1_88 = 50;
signed long int var_1_89 = 256;
float var_1_90 = 31.65;
signed long int var_1_91 = -128;
signed long int var_1_92 = 1188520171;
unsigned short int var_1_94 = 1;
signed short int var_1_96 = -16;
unsigned long int var_1_98 = 8;
unsigned long int var_1_99 = 3089648383;
signed short int var_1_100 = -10;
signed long int var_1_101 = -4;
float var_1_103 = 9.6;
unsigned char var_1_104 = 1;
signed long int var_1_105 = -5;
signed short int var_1_106 = 25;
unsigned char var_1_107 = 1;
unsigned char var_1_108 = 1;
double var_1_109 = 10.5;
signed char var_1_110 = -64;
signed long int var_1_111 = -32;
unsigned long int var_1_112 = 16;
unsigned char var_1_113 = 25;
float var_1_114 = 16.5;
float var_1_115 = 128.96;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 128;
unsigned long int last_1_var_1_6 = 32;
unsigned char last_1_var_1_10 = 0;
float last_1_var_1_13 = 9.5;
unsigned long int last_1_var_1_17 = 4;
unsigned char last_1_var_1_20 = 32;
unsigned short int last_1_var_1_26 = 50;
unsigned char last_1_var_1_32 = 64;
unsigned short int last_1_var_1_35 = 0;
unsigned char last_1_var_1_41 = 1;
unsigned short int last_1_var_1_46 = 2;
unsigned char last_1_var_1_51 = 1;
unsigned short int last_1_var_1_52 = 128;
unsigned char last_1_var_1_55 = 16;
signed char last_1_var_1_56 = -4;
signed short int last_1_var_1_66 = -10;
signed long int last_1_var_1_74 = -10;
unsigned long int last_1_var_1_79 = 2;
signed long int last_1_var_1_82 = -64;
unsigned short int last_1_var_1_83 = 32;
unsigned char last_1_var_1_86 = 100;
signed long int last_1_var_1_89 = 256;
unsigned short int last_1_var_1_94 = 1;
signed short int last_1_var_1_100 = -10;
unsigned char last_1_var_1_104 = 1;
unsigned char last_1_var_1_108 = 1;
unsigned long int last_1_var_1_112 = 16;
unsigned char last_1_var_1_113 = 25;
float last_1_var_1_114 = 16.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch89Amount500
	if ((last_1_var_1_55 >= last_1_var_1_51) && ((min (-2 , var_1_5)) < last_1_var_1_79)) {
		var_1_17 = (var_1_5 + (last_1_var_1_32 + (min (last_1_var_1_51 , last_1_var_1_52))));
	} else {
		if (last_1_var_1_114 == var_1_16) {
			if (last_1_var_1_104) {
				var_1_17 = ((min (var_1_19 , (var_1_5 + var_1_7))) - 256u);
			}
		} else {
			var_1_17 = (last_1_var_1_52 + ((min (var_1_7 , var_1_5)) - last_1_var_1_51));
		}
	}


	// From: Req4Batch89Amount500
	unsigned long int stepLocal_4 = last_1_var_1_20 * (last_1_var_1_32 ^ var_1_7);
	if (-500 >= stepLocal_4) {
		var_1_13 = ((abs (var_1_14)) + var_1_15);
	} else {
		var_1_13 = (abs (var_1_15 + var_1_16));
	}


	// From: Req10Batch89Amount500
	if ((var_1_36 - (var_1_37 + 4.8)) >= last_1_var_1_13) {
		var_1_35 = ((var_1_31 + var_1_38) - var_1_25);
	} else {
		if (var_1_11) {
			var_1_35 = var_1_24;
		} else {
			var_1_35 = (min (var_1_23 , var_1_21));
		}
	}


	// From: Req8Batch89Amount500
	unsigned char stepLocal_8 = var_1_28 > last_1_var_1_6;
	unsigned long int stepLocal_7 = 256u;
	if (stepLocal_8 || last_1_var_1_104) {
		if (stepLocal_7 <= (min (0u , var_1_28))) {
			if (last_1_var_1_10) {
				var_1_32 = (max (var_1_22 , var_1_25));
			}
		}
	} else {
		var_1_32 = (128 - var_1_33);
	}


	// From: Req25Batch89Amount500
	unsigned short int stepLocal_24 = var_1_31;
	if (var_1_30 <= stepLocal_24) {
		var_1_68 = var_1_54;
	} else {
		var_1_68 = ((var_1_7 + (min (var_1_69 , 1555641930u))) - last_1_var_1_6);
	}


	// From: Req15Batch89Amount500
	signed long int stepLocal_10 = 200;
	if ((- var_1_68) >= stepLocal_10) {
		var_1_47 = (((max (var_1_22 , var_1_25)) + var_1_21) - (var_1_48 - 1));
	}


	// From: Req22Batch89Amount500
	if (var_1_33 > (var_1_60 + last_1_var_1_113)) {
		if ((var_1_60 / var_1_29) < last_1_var_1_17) {
			var_1_63 = ((var_1_21 - var_1_33) + last_1_var_1_82);
		}
	} else {
		var_1_63 = (min (last_1_var_1_86 , (-128 + var_1_24)));
	}


	// From: Req19Batch89Amount500
	signed long int stepLocal_19 = last_1_var_1_26;
	unsigned long int stepLocal_18 = var_1_7;
	unsigned char stepLocal_17 = var_1_21;
	unsigned long int stepLocal_16 = last_1_var_1_112 * last_1_var_1_1;
	signed long int stepLocal_15 = last_1_var_1_89;
	signed long int stepLocal_14 = last_1_var_1_86;
	if (var_1_21 > stepLocal_16) {
		if ((var_1_31 + last_1_var_1_55) <= stepLocal_14) {
			if (stepLocal_17 > last_1_var_1_55) {
				var_1_55 = (128 - 32);
			} else {
				var_1_55 = (min ((var_1_22 + var_1_21) , var_1_25));
			}
		} else {
			var_1_55 = var_1_33;
		}
	} else {
		if (last_1_var_1_55 > stepLocal_18) {
			if (stepLocal_19 == var_1_21) {
				if (var_1_15 <= var_1_14) {
					if (((32 + last_1_var_1_55) + 4) >= stepLocal_15) {
						var_1_55 = (var_1_25 - var_1_23);
					}
				} else {
					var_1_55 = (min ((min ((var_1_29 + var_1_33) , 16)) , var_1_21));
				}
			}
		} else {
			var_1_55 = (min (var_1_25 , var_1_23));
		}
	}


	// From: Req3Batch89Amount500
	unsigned char stepLocal_3 = last_1_var_1_108;
	if ((var_1_7 > last_1_var_1_35) && stepLocal_3) {
		var_1_10 = (var_1_11 && var_1_12);
	}


	// From: Req45Batch89Amount500
	if (var_1_10) {
		var_1_108 = var_1_12;
	}


	// From: Req50Batch89Amount500
	if (var_1_10) {
		var_1_113 = 10;
	} else {
		var_1_113 = var_1_88;
	}


	// From: Req11Batch89Amount500
	signed long int stepLocal_9 = var_1_33 + (var_1_23 * var_1_22);
	if (var_1_113 >= stepLocal_9) {
		var_1_39 = var_1_23;
	}


	// From: Req46Batch89Amount500
	if (var_1_108) {
		var_1_109 = var_1_15;
	} else {
		var_1_109 = var_1_72;
	}


	// From: Req34Batch89Amount500
	if (! var_1_44) {
		if (last_1_var_1_41) {
			var_1_91 = (abs (last_1_var_1_46));
		} else {
			var_1_91 = ((var_1_92 - last_1_var_1_94) - last_1_var_1_86);
		}
	} else {
		var_1_91 = ((max (var_1_48 , last_1_var_1_66)) + (-2 + (min (last_1_var_1_74 , var_1_88))));
	}


	// From: Req9Batch89Amount500
	var_1_34 = (var_1_25 - var_1_33);


	// From: Req20Batch89Amount500
	unsigned char stepLocal_20 = var_1_33;
	if (! var_1_45) {
		var_1_56 = ((var_1_57 + var_1_58) + (var_1_59 - var_1_60));
	} else {
		if (last_1_var_1_56 > stepLocal_20) {
			var_1_56 = (var_1_58 + (max (var_1_59 , var_1_60)));
		}
	}


	// From: Req21Batch89Amount500
	if ((- (var_1_14 / var_1_27)) > (var_1_15 / var_1_62)) {
		var_1_61 = (var_1_60 + var_1_33);
	}


	// From: Req26Batch89Amount500
	if (var_1_11) {
		var_1_70 = (var_1_14 + var_1_15);
	} else {
		var_1_70 = ((min ((var_1_71 + var_1_72) , var_1_37)) - var_1_73);
	}


	// From: Req33Batch89Amount500
	if (var_1_27 > var_1_72) {
		var_1_90 = (min (var_1_16 , (max ((var_1_72 + var_1_71) , var_1_15))));
	}


	// From: Req40Batch89Amount500
	var_1_103 = var_1_71;


	// From: Req41Batch89Amount500
	if (var_1_45) {
		var_1_104 = var_1_43;
	} else {
		var_1_104 = var_1_12;
	}


	// From: Req42Batch89Amount500
	if (var_1_10) {
		var_1_105 = var_1_21;
	}


	// From: Req43Batch89Amount500
	var_1_106 = var_1_87;


	// From: Req44Batch89Amount500
	var_1_107 = var_1_43;


	// From: Req47Batch89Amount500
	if (var_1_11) {
		var_1_110 = -32;
	}


	// From: Req49Batch89Amount500
	var_1_112 = var_1_22;


	// From: Req30Batch89Amount500
	if (var_1_10 && (var_1_35 < last_1_var_1_83)) {
		if ((! var_1_43) && (var_1_36 < var_1_103)) {
			var_1_83 = (var_1_31 + var_1_63);
		} else {
			if ((var_1_13 + var_1_27) <= var_1_71) {
				var_1_83 = (var_1_30 - (var_1_35 + (var_1_85 - var_1_25)));
			}
		}
	}


	// From: Req48Batch89Amount500
	if (var_1_107) {
		var_1_111 = var_1_48;
	} else {
		var_1_111 = var_1_47;
	}


	// From: Req7Batch89Amount500
	unsigned char stepLocal_6 = var_1_24;
	unsigned char stepLocal_5 = var_1_12;
	if ((var_1_103 <= (var_1_15 / var_1_27)) || stepLocal_5) {
		if (stepLocal_6 >= ((var_1_28 + var_1_29) - var_1_21)) {
			var_1_26 = ((var_1_30 - (256 + var_1_25)) - (var_1_31 - (min (var_1_110 , var_1_23))));
		}
	} else {
		var_1_26 = 0;
	}


	// From: Req13Batch89Amount500
	if (var_1_104) {
		if (var_1_36 > ((var_1_37 - var_1_42) * 127.5)) {
			var_1_41 = (! var_1_11);
		}
	} else {
		if (((var_1_31 / var_1_29) >> var_1_22) >= -1) {
			var_1_41 = ((var_1_43 || var_1_44) || var_1_45);
		} else {
			var_1_41 = (var_1_43 || var_1_12);
		}
	}


	// From: Req31Batch89Amount500
	unsigned char stepLocal_30 = var_1_43;
	if (stepLocal_30 || var_1_41) {
		var_1_86 = (var_1_25 - ((var_1_87 + var_1_88) - (max (var_1_60 , var_1_59))));
	} else {
		var_1_86 = 10;
	}


	// From: Req39Batch89Amount500
	if (var_1_107) {
		var_1_101 = var_1_85;
	} else {
		var_1_101 = var_1_88;
	}


	// From: Req51Batch89Amount500
	if (var_1_41) {
		var_1_114 = var_1_71;
	} else {
		var_1_114 = 100.8f;
	}


	// From: Req17Batch89Amount500
	if (var_1_36 != var_1_16) {
		if ((var_1_30 - (var_1_31 - var_1_24)) <= ((var_1_55 + var_1_17) + var_1_38)) {
			var_1_51 = (var_1_25 - (min (var_1_33 , (abs (var_1_21)))));
		} else {
			var_1_51 = (max (var_1_23 , (min ((max (var_1_22 , var_1_33)) , var_1_24))));
		}
	} else {
		if ((var_1_30 <= (var_1_112 * var_1_26)) && ((99.8 * var_1_109) <= var_1_36)) {
			var_1_51 = (max ((min (var_1_33 , var_1_25)) , (max (var_1_22 , var_1_21))));
		} else {
			if (var_1_108 && var_1_11) {
				var_1_51 = (max (var_1_22 , var_1_21));
			}
		}
	}


	// From: Req35Batch89Amount500
	if (var_1_83 <= var_1_35) {
		var_1_94 = (var_1_30 - ((10000 - 32) + var_1_21));
	} else {
		if (var_1_36 >= var_1_72) {
			if (var_1_54 < var_1_38) {
				var_1_94 = (((min (var_1_111 , var_1_56)) + var_1_85) + var_1_33);
			} else {
				var_1_94 = var_1_32;
			}
		} else {
			var_1_94 = var_1_24;
		}
	}


	// From: Req6Batch89Amount500
	if ((var_1_11 || (var_1_14 > 15.3f)) || (var_1_91 == (8u >> var_1_94))) {
		if (var_1_94 > var_1_91) {
			var_1_20 = (max ((32 + var_1_21) , (var_1_22 + (var_1_23 + 4))));
		}
	} else {
		if ((abs (var_1_23)) == var_1_94) {
			if ((- var_1_63) < var_1_94) {
				var_1_20 = (abs (max ((var_1_24 - var_1_23) , var_1_21)));
			} else {
				var_1_20 = (min (var_1_21 , var_1_22));
			}
		} else {
			var_1_20 = ((max (var_1_24 , var_1_25)) - var_1_22);
		}
	}


	// From: Req16Batch89Amount500
	signed short int stepLocal_11 = var_1_106;
	if (var_1_68 < stepLocal_11) {
		var_1_49 = (var_1_20 - var_1_20);
	}


	// From: Req28Batch89Amount500
	signed long int stepLocal_27 = (var_1_21 / var_1_29) % var_1_80;
	if (stepLocal_27 >= (var_1_31 / var_1_81)) {
		var_1_79 = (max ((var_1_112 + (var_1_94 + var_1_83)) , var_1_39));
	} else {
		var_1_79 = var_1_39;
	}


	// From: Req23Batch89Amount500
	signed short int stepLocal_23 = var_1_47;
	unsigned char stepLocal_22 = var_1_23 == 50;
	signed long int stepLocal_21 = (var_1_23 >> var_1_24) * var_1_91;
	if (var_1_110 <= stepLocal_21) {
		if (stepLocal_23 > var_1_91) {
			if (var_1_41 && stepLocal_22) {
				var_1_65 = (min ((var_1_57 + 5) , (var_1_60 - (1 + var_1_59))));
			}
		} else {
			var_1_65 = (min (var_1_59 , (min (var_1_57 , (min (var_1_23 , var_1_60))))));
		}
	} else {
		var_1_65 = ((abs (var_1_59)) + var_1_60);
	}


	// From: Req24Batch89Amount500
	if ((min (var_1_61 , var_1_79)) <= ((var_1_33 - last_1_var_1_66) + var_1_25)) {
		if (var_1_47 > (var_1_25 / var_1_28)) {
			if (var_1_62 <= (var_1_27 / (abs (var_1_67)))) {
				var_1_66 = (abs (var_1_101));
			} else {
				var_1_66 = (min (last_1_var_1_66 , var_1_47));
			}
		}
	}


	// From: Req36Batch89Amount500
	signed long int stepLocal_32 = ~ var_1_86;
	if (stepLocal_32 <= var_1_69) {
		var_1_96 = (max ((abs (var_1_48)) , (var_1_58 + (var_1_25 - 8))));
	} else {
		var_1_96 = (var_1_23 - var_1_55);
	}


	// From: Req37Batch89Amount500
	if (var_1_12) {
		if (var_1_41) {
			var_1_98 = (abs (var_1_51));
		}
	} else {
		var_1_98 = (var_1_99 - 5u);
	}


	// From: Req12Batch89Amount500
	if (var_1_23 > (max (var_1_31 , (var_1_86 / var_1_24)))) {
		var_1_40 = var_1_23;
	} else {
		var_1_40 = var_1_23;
	}


	// From: Req14Batch89Amount500
	if (! var_1_108) {
		var_1_46 = (min ((var_1_49 + (max (var_1_31 , var_1_33))) , (var_1_30 - var_1_24)));
	}


	// From: Req1Batch89Amount500
	signed short int stepLocal_0 = var_1_63;
	if (var_1_96 != stepLocal_0) {
		if (var_1_107) {
			var_1_1 = ((var_1_5 + 1668503833u) - (50u + 256u));
		}
	}


	// From: Req18Batch89Amount500
	unsigned long int stepLocal_13 = var_1_112;
	unsigned long int stepLocal_12 = var_1_5 % (abs (var_1_29));
	if (! (var_1_112 != (var_1_23 * var_1_40))) {
		if ((var_1_31 * var_1_112) >= stepLocal_13) {
			var_1_52 = (var_1_48 + var_1_112);
		} else {
			var_1_52 = (((var_1_53 + 25669) - (abs (var_1_24))) - var_1_91);
		}
	} else {
		if (stepLocal_12 <= var_1_91) {
			var_1_52 = (var_1_54 - var_1_112);
		} else {
			var_1_52 = (min ((var_1_22 + (var_1_31 - var_1_101)) , (var_1_23 + var_1_21)));
		}
	}


	// From: Req27Batch89Amount500
	unsigned long int stepLocal_26 = min (var_1_17 , (16 - var_1_22));
	unsigned long int stepLocal_25 = var_1_33 | (var_1_83 * var_1_98);
	if (var_1_32 <= stepLocal_26) {
		if (stepLocal_25 <= (50 - var_1_25)) {
			var_1_74 = (var_1_83 + -64);
		} else {
			if (var_1_104) {
				var_1_74 = (var_1_20 - var_1_30);
			}
		}
	}


	// From: Req38Batch89Amount500
	if (((var_1_74 + last_1_var_1_100) % var_1_53) >= var_1_51) {
		var_1_100 = var_1_58;
	}


	// From: Req2Batch89Amount500
	unsigned long int stepLocal_2 = var_1_5;
	unsigned char stepLocal_1 = var_1_5 < var_1_68;
	if (var_1_68 > stepLocal_2) {
		if (stepLocal_1 || var_1_41) {
			var_1_6 = (((var_1_7 + 1924803778u) - (max (var_1_94 , var_1_46))) - var_1_5);
		}
	}


	// From: Req29Batch89Amount500
	signed long int stepLocal_29 = min (var_1_91 , var_1_66);
	unsigned long int stepLocal_28 = (var_1_1 >> var_1_40) / var_1_25;
	if (var_1_52 >= stepLocal_28) {
		if (stepLocal_29 >= var_1_40) {
			if (! var_1_43) {
				var_1_82 = (min (var_1_65 , var_1_110));
			}
		} else {
			var_1_82 = (var_1_55 + var_1_31);
		}
	} else {
		var_1_82 = (var_1_56 + last_1_var_1_82);
	}


	// From: Req32Batch89Amount500
	signed long int stepLocal_31 = var_1_26 | var_1_52;
	if (stepLocal_31 > var_1_83) {
		var_1_89 = (min ((min ((max (var_1_112 , var_1_65)) , (min (var_1_28 , var_1_63)))) , var_1_48));
	} else {
		var_1_89 = (var_1_91 + var_1_28);
	}


	// From: Req52Batch89Amount500
	unsigned char stepLocal_33 = (var_1_89 < var_1_105) || var_1_41;
	if (var_1_104 && stepLocal_33) {
		var_1_115 = (max ((max (var_1_37 , var_1_15)) , var_1_73));
	} else {
		if (var_1_104) {
			var_1_115 = var_1_37;
		} else {
			var_1_115 = var_1_14;
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 1073741823);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 1610612735);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 64);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 127);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	assume_abort_if_not(var_1_27 != 0.0F);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 63);
	assume_abort_if_not(var_1_28 <= 128);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 64);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 49150);
	assume_abort_if_not(var_1_30 <= 65534);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 16383);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427387900e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 16384);
	assume_abort_if_not(var_1_38 <= 32767);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_48 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_48 >= 16383);
	assume_abort_if_not(var_1_48 <= 32766);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 24575);
	assume_abort_if_not(var_1_53 <= 32767);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 32767);
	assume_abort_if_not(var_1_54 <= 65534);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= -31);
	assume_abort_if_not(var_1_57 <= 32);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= -31);
	assume_abort_if_not(var_1_58 <= 31);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 63);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= -922337.2036854776000e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854776000e+12F && var_1_62 >= 1.0e-20F ));
	assume_abort_if_not(var_1_62 != 0.0F);
	var_1_67 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_67 >= -922337.2036854776000e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854776000e+12F && var_1_67 >= 1.0e-20F ));
	assume_abort_if_not(var_1_67 != 0.0F);
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 1073741824);
	assume_abort_if_not(var_1_69 <= 2147483647);
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427382800e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427382800e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854765600e+12F && var_1_73 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= -128);
	assume_abort_if_not(var_1_80 <= 127);
	assume_abort_if_not(var_1_80 != 0);
	var_1_81 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_81 >= -2147483648);
	assume_abort_if_not(var_1_81 <= 2147483647);
	assume_abort_if_not(var_1_81 != 0);
	var_1_85 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_85 >= 8191);
	assume_abort_if_not(var_1_85 <= 16383);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 31);
	assume_abort_if_not(var_1_87 <= 64);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 32);
	assume_abort_if_not(var_1_88 <= 63);
	var_1_92 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_92 >= 1073741822);
	assume_abort_if_not(var_1_92 <= 2147483646);
	var_1_99 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_99 >= 2147483647);
	assume_abort_if_not(var_1_99 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_112 = var_1_112;
	last_1_var_1_113 = var_1_113;
	last_1_var_1_114 = var_1_114;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_96 != var_1_63) ? (var_1_107 ? (var_1_1 == ((unsigned long int) ((var_1_5 + 1668503833u) - (50u + 256u)))) : 1) : 1) && ((var_1_68 > var_1_5) ? (((var_1_5 < var_1_68) || var_1_41) ? (var_1_6 == ((unsigned long int) (((var_1_7 + 1924803778u) - (max (var_1_94 , var_1_46))) - var_1_5))) : 1) : 1)) && (((var_1_7 > last_1_var_1_35) && last_1_var_1_108) ? (var_1_10 == ((unsigned char) (var_1_11 && var_1_12))) : 1)) && ((-500 >= (last_1_var_1_20 * (last_1_var_1_32 ^ var_1_7))) ? (var_1_13 == ((float) ((abs (var_1_14)) + var_1_15))) : (var_1_13 == ((float) (abs (var_1_15 + var_1_16)))))) && (((last_1_var_1_55 >= last_1_var_1_51) && ((min (-2 , var_1_5)) < last_1_var_1_79)) ? (var_1_17 == ((unsigned long int) (var_1_5 + (last_1_var_1_32 + (min (last_1_var_1_51 , last_1_var_1_52)))))) : ((last_1_var_1_114 == var_1_16) ? (last_1_var_1_104 ? (var_1_17 == ((unsigned long int) ((min (var_1_19 , (var_1_5 + var_1_7))) - 256u))) : 1) : (var_1_17 == ((unsigned long int) (last_1_var_1_52 + ((min (var_1_7 , var_1_5)) - last_1_var_1_51))))))) && (((var_1_11 || (var_1_14 > 15.3f)) || (var_1_91 == (8u >> var_1_94))) ? ((var_1_94 > var_1_91) ? (var_1_20 == ((unsigned char) (max ((32 + var_1_21) , (var_1_22 + (var_1_23 + 4)))))) : 1) : (((abs (var_1_23)) == var_1_94) ? (((- var_1_63) < var_1_94) ? (var_1_20 == ((unsigned char) (abs (max ((var_1_24 - var_1_23) , var_1_21))))) : (var_1_20 == ((unsigned char) (min (var_1_21 , var_1_22))))) : (var_1_20 == ((unsigned char) ((max (var_1_24 , var_1_25)) - var_1_22)))))) && (((var_1_103 <= (var_1_15 / var_1_27)) || var_1_12) ? ((var_1_24 >= ((var_1_28 + var_1_29) - var_1_21)) ? (var_1_26 == ((unsigned short int) ((var_1_30 - (256 + var_1_25)) - (var_1_31 - (min (var_1_110 , var_1_23)))))) : 1) : (var_1_26 == ((unsigned short int) 0)))) && (((var_1_28 > last_1_var_1_6) || last_1_var_1_104) ? ((256u <= (min (0u , var_1_28))) ? (last_1_var_1_10 ? (var_1_32 == ((unsigned char) (max (var_1_22 , var_1_25)))) : 1) : 1) : (var_1_32 == ((unsigned char) (128 - var_1_33))))) && (var_1_34 == ((unsigned char) (var_1_25 - var_1_33)))) && (((var_1_36 - (var_1_37 + 4.8)) >= last_1_var_1_13) ? (var_1_35 == ((unsigned short int) ((var_1_31 + var_1_38) - var_1_25))) : (var_1_11 ? (var_1_35 == ((unsigned short int) var_1_24)) : (var_1_35 == ((unsigned short int) (min (var_1_23 , var_1_21))))))) && ((var_1_113 >= (var_1_33 + (var_1_23 * var_1_22))) ? (var_1_39 == ((signed char) var_1_23)) : 1)) && ((var_1_23 > (max (var_1_31 , (var_1_86 / var_1_24)))) ? (var_1_40 == ((signed char) var_1_23)) : (var_1_40 == ((signed char) var_1_23)))) && (var_1_104 ? ((var_1_36 > ((var_1_37 - var_1_42) * 127.5)) ? (var_1_41 == ((unsigned char) (! var_1_11))) : 1) : ((((var_1_31 / var_1_29) >> var_1_22) >= -1) ? (var_1_41 == ((unsigned char) ((var_1_43 || var_1_44) || var_1_45))) : (var_1_41 == ((unsigned char) (var_1_43 || var_1_12)))))) && ((! var_1_108) ? (var_1_46 == ((unsigned short int) (min ((var_1_49 + (max (var_1_31 , var_1_33))) , (var_1_30 - var_1_24))))) : 1)) && (((- var_1_68) >= 200) ? (var_1_47 == ((signed short int) (((max (var_1_22 , var_1_25)) + var_1_21) - (var_1_48 - 1)))) : 1)) && ((var_1_68 < var_1_106) ? (var_1_49 == ((signed long int) (var_1_20 - var_1_20))) : 1)) && ((var_1_36 != var_1_16) ? (((var_1_30 - (var_1_31 - var_1_24)) <= ((var_1_55 + var_1_17) + var_1_38)) ? (var_1_51 == ((unsigned char) (var_1_25 - (min (var_1_33 , (abs (var_1_21))))))) : (var_1_51 == ((unsigned char) (max (var_1_23 , (min ((max (var_1_22 , var_1_33)) , var_1_24))))))) : (((var_1_30 <= (var_1_112 * var_1_26)) && ((99.8 * var_1_109) <= var_1_36)) ? (var_1_51 == ((unsigned char) (max ((min (var_1_33 , var_1_25)) , (max (var_1_22 , var_1_21)))))) : ((var_1_108 && var_1_11) ? (var_1_51 == ((unsigned char) (max (var_1_22 , var_1_21)))) : 1)))) && ((! (var_1_112 != (var_1_23 * var_1_40))) ? (((var_1_31 * var_1_112) >= var_1_112) ? (var_1_52 == ((unsigned short int) (var_1_48 + var_1_112))) : (var_1_52 == ((unsigned short int) (((var_1_53 + 25669) - (abs (var_1_24))) - var_1_91)))) : (((var_1_5 % (abs (var_1_29))) <= var_1_91) ? (var_1_52 == ((unsigned short int) (var_1_54 - var_1_112))) : (var_1_52 == ((unsigned short int) (min ((var_1_22 + (var_1_31 - var_1_101)) , (var_1_23 + var_1_21)))))))) && ((var_1_21 > (last_1_var_1_112 * last_1_var_1_1)) ? (((var_1_31 + last_1_var_1_55) <= last_1_var_1_86) ? ((var_1_21 > last_1_var_1_55) ? (var_1_55 == ((unsigned char) (128 - 32))) : (var_1_55 == ((unsigned char) (min ((var_1_22 + var_1_21) , var_1_25))))) : (var_1_55 == ((unsigned char) var_1_33))) : ((last_1_var_1_55 > var_1_7) ? ((last_1_var_1_26 == var_1_21) ? ((var_1_15 <= var_1_14) ? ((((32 + last_1_var_1_55) + 4) >= last_1_var_1_89) ? (var_1_55 == ((unsigned char) (var_1_25 - var_1_23))) : 1) : (var_1_55 == ((unsigned char) (min ((min ((var_1_29 + var_1_33) , 16)) , var_1_21))))) : 1) : (var_1_55 == ((unsigned char) (min (var_1_25 , var_1_23))))))) && ((! var_1_45) ? (var_1_56 == ((signed char) ((var_1_57 + var_1_58) + (var_1_59 - var_1_60)))) : ((last_1_var_1_56 > var_1_33) ? (var_1_56 == ((signed char) (var_1_58 + (max (var_1_59 , var_1_60))))) : 1))) && (((- (var_1_14 / var_1_27)) > (var_1_15 / var_1_62)) ? (var_1_61 == ((unsigned char) (var_1_60 + var_1_33))) : 1)) && ((var_1_33 > (var_1_60 + last_1_var_1_113)) ? (((var_1_60 / var_1_29) < last_1_var_1_17) ? (var_1_63 == ((signed short int) ((var_1_21 - var_1_33) + last_1_var_1_82))) : 1) : (var_1_63 == ((signed short int) (min (last_1_var_1_86 , (-128 + var_1_24))))))) && ((var_1_110 <= ((var_1_23 >> var_1_24) * var_1_91)) ? ((var_1_47 > var_1_91) ? ((var_1_41 && (var_1_23 == 50)) ? (var_1_65 == ((signed char) (min ((var_1_57 + 5) , (var_1_60 - (1 + var_1_59)))))) : 1) : (var_1_65 == ((signed char) (min (var_1_59 , (min (var_1_57 , (min (var_1_23 , var_1_60))))))))) : (var_1_65 == ((signed char) ((abs (var_1_59)) + var_1_60))))) && (((min (var_1_61 , var_1_79)) <= ((var_1_33 - last_1_var_1_66) + var_1_25)) ? ((var_1_47 > (var_1_25 / var_1_28)) ? ((var_1_62 <= (var_1_27 / (abs (var_1_67)))) ? (var_1_66 == ((signed short int) (abs (var_1_101)))) : (var_1_66 == ((signed short int) (min (last_1_var_1_66 , var_1_47))))) : 1) : 1)) && ((var_1_30 <= var_1_31) ? (var_1_68 == ((unsigned long int) var_1_54)) : (var_1_68 == ((unsigned long int) ((var_1_7 + (min (var_1_69 , 1555641930u))) - last_1_var_1_6))))) && (var_1_11 ? (var_1_70 == ((double) (var_1_14 + var_1_15))) : (var_1_70 == ((double) ((min ((var_1_71 + var_1_72) , var_1_37)) - var_1_73))))) && ((var_1_32 <= (min (var_1_17 , (16 - var_1_22)))) ? (((var_1_33 | (var_1_83 * var_1_98)) <= (50 - var_1_25)) ? (var_1_74 == ((signed long int) (var_1_83 + -64))) : (var_1_104 ? (var_1_74 == ((signed long int) (var_1_20 - var_1_30))) : 1)) : 1)) && ((((var_1_21 / var_1_29) % var_1_80) >= (var_1_31 / var_1_81)) ? (var_1_79 == ((unsigned long int) (max ((var_1_112 + (var_1_94 + var_1_83)) , var_1_39)))) : (var_1_79 == ((unsigned long int) var_1_39)))) && ((var_1_52 >= ((var_1_1 >> var_1_40) / var_1_25)) ? (((min (var_1_91 , var_1_66)) >= var_1_40) ? ((! var_1_43) ? (var_1_82 == ((signed long int) (min (var_1_65 , var_1_110)))) : 1) : (var_1_82 == ((signed long int) (var_1_55 + var_1_31)))) : (var_1_82 == ((signed long int) (var_1_56 + last_1_var_1_82))))) && ((var_1_10 && (var_1_35 < last_1_var_1_83)) ? (((! var_1_43) && (var_1_36 < var_1_103)) ? (var_1_83 == ((unsigned short int) (var_1_31 + var_1_63))) : (((var_1_13 + var_1_27) <= var_1_71) ? (var_1_83 == ((unsigned short int) (var_1_30 - (var_1_35 + (var_1_85 - var_1_25))))) : 1)) : 1)) && ((var_1_43 || var_1_41) ? (var_1_86 == ((unsigned char) (var_1_25 - ((var_1_87 + var_1_88) - (max (var_1_60 , var_1_59)))))) : (var_1_86 == ((unsigned char) 10)))) && (((var_1_26 | var_1_52) > var_1_83) ? (var_1_89 == ((signed long int) (min ((min ((max (var_1_112 , var_1_65)) , (min (var_1_28 , var_1_63)))) , var_1_48)))) : (var_1_89 == ((signed long int) (var_1_91 + var_1_28))))) && ((var_1_27 > var_1_72) ? (var_1_90 == ((float) (min (var_1_16 , (max ((var_1_72 + var_1_71) , var_1_15)))))) : 1)) && ((! var_1_44) ? (last_1_var_1_41 ? (var_1_91 == ((signed long int) (abs (last_1_var_1_46)))) : (var_1_91 == ((signed long int) ((var_1_92 - last_1_var_1_94) - last_1_var_1_86)))) : (var_1_91 == ((signed long int) ((max (var_1_48 , last_1_var_1_66)) + (-2 + (min (last_1_var_1_74 , var_1_88)))))))) && ((var_1_83 <= var_1_35) ? (var_1_94 == ((unsigned short int) (var_1_30 - ((10000 - 32) + var_1_21)))) : ((var_1_36 >= var_1_72) ? ((var_1_54 < var_1_38) ? (var_1_94 == ((unsigned short int) (((min (var_1_111 , var_1_56)) + var_1_85) + var_1_33))) : (var_1_94 == ((unsigned short int) var_1_32))) : (var_1_94 == ((unsigned short int) var_1_24))))) && (((~ var_1_86) <= var_1_69) ? (var_1_96 == ((signed short int) (max ((abs (var_1_48)) , (var_1_58 + (var_1_25 - 8)))))) : (var_1_96 == ((signed short int) (var_1_23 - var_1_55))))) && (var_1_12 ? (var_1_41 ? (var_1_98 == ((unsigned long int) (abs (var_1_51)))) : 1) : (var_1_98 == ((unsigned long int) (var_1_99 - 5u))))) && ((((var_1_74 + last_1_var_1_100) % var_1_53) >= var_1_51) ? (var_1_100 == ((signed short int) var_1_58)) : 1)) && (var_1_107 ? (var_1_101 == ((signed long int) var_1_85)) : (var_1_101 == ((signed long int) var_1_88)))) && (var_1_103 == ((float) var_1_71))) && (var_1_45 ? (var_1_104 == ((unsigned char) var_1_43)) : (var_1_104 == ((unsigned char) var_1_12)))) && (var_1_10 ? (var_1_105 == ((signed long int) var_1_21)) : 1)) && (var_1_106 == ((signed short int) var_1_87))) && (var_1_107 == ((unsigned char) var_1_43))) && (var_1_10 ? (var_1_108 == ((unsigned char) var_1_12)) : 1)) && (var_1_108 ? (var_1_109 == ((double) var_1_15)) : (var_1_109 == ((double) var_1_72)))) && (var_1_11 ? (var_1_110 == ((signed char) -32)) : 1)) && (var_1_107 ? (var_1_111 == ((signed long int) var_1_48)) : (var_1_111 == ((signed long int) var_1_47)))) && (var_1_112 == ((unsigned long int) var_1_22))) && (var_1_10 ? (var_1_113 == ((unsigned char) 10)) : (var_1_113 == ((unsigned char) var_1_88)))) && (var_1_41 ? (var_1_114 == ((float) var_1_71)) : (var_1_114 == ((float) 100.8f)))) && ((var_1_104 && ((var_1_89 < var_1_105) || var_1_41)) ? (var_1_115 == ((float) (max ((max (var_1_37 , var_1_15)) , var_1_73)))) : (var_1_104 ? (var_1_115 == ((float) var_1_37)) : (var_1_115 == ((float) var_1_14))))
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
