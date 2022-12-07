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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch20Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 4;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 1;
unsigned short int var_1_7 = 0;
unsigned short int var_1_8 = 21062;
signed long int var_1_9 = -4;
unsigned long int var_1_10 = 256;
unsigned long int var_1_11 = 2706779013;
float var_1_13 = 25.1;
float var_1_15 = 9.25;
float var_1_16 = 0.8;
float var_1_17 = 9.75;
signed long int var_1_18 = 10;
signed long int var_1_19 = 2050467977;
unsigned short int var_1_20 = 1;
unsigned short int var_1_21 = 63087;
unsigned short int var_1_22 = 64;
unsigned short int var_1_23 = 10000;
unsigned long int var_1_25 = 25;
unsigned long int var_1_26 = 3474534728;
signed long int var_1_27 = -10000000;
signed char var_1_29 = -32;
signed char var_1_30 = 4;
double var_1_31 = 256.25;
unsigned short int var_1_32 = 61813;
double var_1_33 = 128.5;
double var_1_34 = 32.8;
double var_1_35 = 127.5;
double var_1_36 = 64.7;
double var_1_37 = 32.75;
double var_1_38 = 64.5;
signed long int var_1_39 = 1;
unsigned char var_1_40 = 128;
unsigned char var_1_41 = 200;
unsigned char var_1_42 = 50;
float var_1_43 = 4.375;
signed char var_1_44 = 10;
signed char var_1_45 = 5;
signed char var_1_46 = -32;
signed char var_1_47 = 32;
unsigned short int var_1_48 = 1;
unsigned short int var_1_49 = 1;
double var_1_50 = 1.5;
double var_1_51 = 128.25;
double var_1_52 = 8.75;
unsigned char var_1_53 = 100;
signed long int var_1_54 = -5;
unsigned char var_1_55 = 64;
unsigned char var_1_57 = 16;
signed short int var_1_58 = 1;
float var_1_59 = 9999.5;
signed long int var_1_60 = -50;
signed short int var_1_61 = -64;
unsigned long int var_1_62 = 128;
unsigned short int var_1_63 = 16;
signed long int var_1_64 = -128;
unsigned short int var_1_65 = 0;
unsigned short int var_1_66 = 16480;
unsigned char var_1_67 = 0;
unsigned char var_1_68 = 0;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 25;
unsigned char var_1_72 = 2;
signed char var_1_73 = -8;
float var_1_74 = 2.5;
unsigned short int var_1_75 = 25;
unsigned short int var_1_76 = 22362;
float var_1_77 = 9.5;
float var_1_78 = 15.75;
float var_1_79 = 16.5;
signed long int var_1_80 = -5;
signed char var_1_81 = 0;
unsigned short int var_1_82 = 4;
signed long int var_1_83 = -100;
unsigned short int var_1_85 = 16;
unsigned short int var_1_86 = 61011;
unsigned long int var_1_87 = 1;
unsigned long int var_1_89 = 1000000000;
signed long int var_1_90 = -16;
signed short int var_1_91 = 100;
unsigned short int var_1_93 = 4;
unsigned short int var_1_95 = 5;
double var_1_97 = 100.5;
double var_1_98 = 63.375;
signed long int var_1_99 = 1;
unsigned long int var_1_100 = 64;
signed char var_1_101 = -16;
unsigned short int var_1_102 = 128;
unsigned char var_1_103 = 1;
signed char var_1_104 = 0;
unsigned char var_1_105 = 1;
unsigned char var_1_106 = 128;
unsigned short int var_1_107 = 25;
unsigned char var_1_108 = 0;
unsigned char var_1_109 = 32;
double var_1_110 = 7.8;
double var_1_111 = 15.75;
unsigned char var_1_112 = 0;
signed long int var_1_114 = -8;
signed long int var_1_115 = 50;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_7 = 0;
signed long int last_1_var_1_18 = 10;
unsigned short int last_1_var_1_20 = 1;
unsigned short int last_1_var_1_22 = 64;
signed long int last_1_var_1_27 = -10000000;
signed long int last_1_var_1_39 = 1;
unsigned char last_1_var_1_40 = 128;
signed char last_1_var_1_47 = 32;
double last_1_var_1_50 = 1.5;
unsigned char last_1_var_1_57 = 16;
unsigned long int last_1_var_1_62 = 128;
unsigned short int last_1_var_1_63 = 16;
signed long int last_1_var_1_64 = -128;
unsigned short int last_1_var_1_65 = 0;
signed char last_1_var_1_73 = -8;
float last_1_var_1_77 = 9.5;
unsigned short int last_1_var_1_82 = 4;
unsigned long int last_1_var_1_87 = 1;
double last_1_var_1_98 = 63.375;
signed long int last_1_var_1_99 = 1;
unsigned short int last_1_var_1_102 = 128;
unsigned char last_1_var_1_103 = 1;
unsigned char last_1_var_1_105 = 1;
unsigned short int last_1_var_1_107 = 25;
unsigned char last_1_var_1_108 = 0;
unsigned char last_1_var_1_109 = 32;
unsigned char last_1_var_1_112 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch20Amount500
	signed long int stepLocal_3 = last_1_var_1_99;
	if (last_1_var_1_18 <= stepLocal_3) {
		var_1_9 = last_1_var_1_18;
	}


	// From: Req40Batch20Amount500
	var_1_85 = (((max (var_1_86 , 57883)) - last_1_var_1_73) - (last_1_var_1_62 + var_1_6));


	// From: Req39Batch20Amount500
	unsigned char stepLocal_31 = 100.1f <= (max (last_1_var_1_77 , var_1_74));
	unsigned char stepLocal_30 = var_1_69;
	unsigned long int stepLocal_29 = 1u;
	if (last_1_var_1_105 && stepLocal_31) {
		var_1_83 = last_1_var_1_39;
	} else {
		if ((min (last_1_var_1_20 , last_1_var_1_22)) >= stepLocal_29) {
			var_1_83 = (abs (last_1_var_1_47));
		} else {
			if (last_1_var_1_108 || stepLocal_30) {
				var_1_83 = (var_1_42 + var_1_66);
			}
		}
	}


	// From: Req9Batch20Amount500
	if (last_1_var_1_112 || (last_1_var_1_102 == (last_1_var_1_65 >> last_1_var_1_27))) {
		if (last_1_var_1_103) {
			if (var_1_15 <= var_1_17) {
				var_1_25 = ((var_1_26 - var_1_21) - var_1_23);
			} else {
				var_1_25 = (var_1_26 - last_1_var_1_65);
			}
		} else {
			if (last_1_var_1_112) {
				var_1_25 = var_1_19;
			}
		}
	} else {
		var_1_25 = var_1_5;
	}


	// From: Req30Batch20Amount500
	if (4 > var_1_45) {
		if (((var_1_8 + var_1_66) - last_1_var_1_7) <= (last_1_var_1_47 + (last_1_var_1_102 - var_1_48))) {
			var_1_65 = (abs (var_1_23));
		} else {
			var_1_65 = 16;
		}
	} else {
		var_1_65 = (var_1_48 + last_1_var_1_107);
	}


	// From: Req2Batch20Amount500
	signed long int stepLocal_2 = var_1_6 / var_1_5;
	if (stepLocal_2 > var_1_83) {
		var_1_7 = ((var_1_8 - var_1_5) + var_1_6);
	}


	// From: Req33Batch20Amount500
	signed long int stepLocal_23 = 2;
	unsigned long int stepLocal_22 = var_1_26;
	if (var_1_23 > stepLocal_23) {
		if (last_1_var_1_98 > (last_1_var_1_50 + 8.375f)) {
			var_1_72 = (min (var_1_49 , (min (var_1_6 , var_1_30))));
		} else {
			var_1_72 = (abs (var_1_42));
		}
	} else {
		if (last_1_var_1_102 < stepLocal_22) {
			var_1_72 = ((var_1_41 - var_1_30) - var_1_49);
		}
	}


	// From: Req49Batch20Amount500
	var_1_100 = var_1_72;


	// From: Req14Batch20Amount500
	if (! last_1_var_1_112) {
		var_1_39 = (min ((min (var_1_6 , var_1_23)) , (last_1_var_1_82 - (last_1_var_1_73 + var_1_21))));
	}


	// From: Req7Batch20Amount500
	signed long int stepLocal_7 = 4;
	signed long int stepLocal_6 = last_1_var_1_109;
	if (stepLocal_6 < last_1_var_1_57) {
		var_1_20 = ((var_1_5 + (max (last_1_var_1_99 , var_1_6))) + 16);
	} else {
		if (last_1_var_1_108) {
			if (stepLocal_7 >= last_1_var_1_65) {
				var_1_20 = (abs (var_1_21 - (var_1_8 - 16)));
			} else {
				var_1_20 = (abs (var_1_6));
			}
		} else {
			var_1_20 = var_1_8;
		}
	}


	// From: Req51Batch20Amount500
	if (var_1_69) {
		var_1_102 = last_1_var_1_40;
	} else {
		var_1_102 = var_1_49;
	}


	// From: Req12Batch20Amount500
	if (var_1_21 < (var_1_32 - (min (var_1_30 , var_1_6)))) {
		var_1_31 = (var_1_33 - var_1_16);
	} else {
		var_1_31 = (var_1_34 + var_1_35);
	}


	// From: Req13Batch20Amount500
	var_1_36 = ((max (var_1_33 , (var_1_37 + var_1_38))) - var_1_17);


	// From: Req23Batch20Amount500
	var_1_58 = (var_1_5 + var_1_6);


	// From: Req29Batch20Amount500
	var_1_64 = (max (var_1_46 , last_1_var_1_64));


	// From: Req31Batch20Amount500
	var_1_67 = ((var_1_68 || var_1_69) || var_1_70);


	// From: Req46Batch20Amount500
	if (var_1_70) {
		var_1_97 = 9999.6;
	}


	// From: Req48Batch20Amount500
	var_1_99 = var_1_23;


	// From: Req50Batch20Amount500
	if (var_1_69) {
		var_1_101 = 1;
	}


	// From: Req52Batch20Amount500
	var_1_103 = var_1_69;


	// From: Req53Batch20Amount500
	if (var_1_69) {
		var_1_104 = var_1_41;
	}


	// From: Req54Batch20Amount500
	if (var_1_68) {
		var_1_105 = var_1_70;
	}


	// From: Req55Batch20Amount500
	var_1_106 = 1;


	// From: Req56Batch20Amount500
	var_1_107 = var_1_41;


	// From: Req57Batch20Amount500
	var_1_108 = var_1_69;


	// From: Req58Batch20Amount500
	if (var_1_69) {
		var_1_109 = var_1_49;
	} else {
		var_1_109 = var_1_30;
	}


	// From: Req59Batch20Amount500
	if (var_1_67) {
		var_1_110 = var_1_16;
	} else {
		var_1_110 = var_1_111;
	}


	// From: Req60Batch20Amount500
	if (var_1_108) {
		var_1_112 = 0;
	} else {
		var_1_112 = 1;
	}


	// From: Req20Batch20Amount500
	if (var_1_103) {
		if (var_1_16 <= 32.1f) {
			var_1_53 = (max (var_1_5 , var_1_6));
		}
	} else {
		if ((max (var_1_11 , 8)) > (max ((var_1_26 - var_1_8) , var_1_41))) {
			if ((var_1_83 % var_1_48) < (var_1_21 / (min (var_1_54 , var_1_41)))) {
				var_1_53 = ((max (8 , (abs (var_1_49)))) + var_1_6);
			}
		}
	}


	// From: Req15Batch20Amount500
	unsigned short int stepLocal_9 = var_1_23;
	if (var_1_112) {
		if (! var_1_67) {
			var_1_40 = ((var_1_41 - (var_1_42 - 5)) - var_1_5);
		} else {
			if (var_1_67) {
				var_1_40 = var_1_5;
			} else {
				var_1_40 = (var_1_41 - var_1_6);
			}
		}
	} else {
		if (stepLocal_9 >= (var_1_64 * var_1_65)) {
			var_1_40 = (min ((min ((var_1_42 + var_1_5) , var_1_6)) , var_1_41));
		} else {
			var_1_40 = var_1_5;
		}
	}


	// From: Req1Batch20Amount500
	unsigned char stepLocal_1 = var_1_103;
	signed long int stepLocal_0 = (64 + var_1_5) - (var_1_6 + 10);
	if (var_1_105 || stepLocal_1) {
		if (var_1_85 == stepLocal_0) {
			var_1_1 = var_1_85;
		}
	}


	// From: Req16Batch20Amount500
	if ((var_1_38 - var_1_37) <= (- var_1_97)) {
		if ((var_1_1 / var_1_42) <= (max (var_1_6 , var_1_21))) {
			var_1_43 = ((max (var_1_38 , var_1_37)) + var_1_34);
		} else {
			var_1_43 = var_1_38;
		}
	} else {
		var_1_43 = ((max (var_1_33 , var_1_16)) - var_1_37);
	}


	// From: Req28Batch20Amount500
	if (var_1_112 && (var_1_25 > (var_1_11 - var_1_42))) {
		var_1_63 = (var_1_21 - var_1_20);
	} else {
		var_1_63 = (var_1_8 + (max (4 , last_1_var_1_63)));
	}


	// From: Req24Batch20Amount500
	unsigned long int stepLocal_16 = var_1_11;
	if (stepLocal_16 != var_1_100) {
		var_1_59 = var_1_37;
	} else {
		var_1_59 = var_1_37;
	}


	// From: Req37Batch20Amount500
	unsigned short int stepLocal_25 = var_1_49;
	signed long int stepLocal_24 = (var_1_48 - var_1_81) % var_1_42;
	if (stepLocal_24 > var_1_107) {
		var_1_80 = var_1_48;
	} else {
		if (var_1_102 >= stepLocal_25) {
			var_1_80 = (min ((max (var_1_48 , -16)) , var_1_30));
		} else {
			var_1_80 = (abs (var_1_99));
		}
	}


	// From: Req4Batch20Amount500
	var_1_10 = (var_1_11 - var_1_63);


	// From: Req11Batch20Amount500
	if (var_1_105) {
		if (var_1_67) {
			var_1_29 = ((min ((2 + var_1_30) , 10)) - var_1_6);
		}
	}


	// From: Req17Batch20Amount500
	if (! var_1_112) {
		var_1_44 = (var_1_30 - var_1_6);
	} else {
		var_1_44 = (max (var_1_41 , ((var_1_30 - var_1_42) + (min (var_1_45 , var_1_46)))));
	}


	// From: Req21Batch20Amount500
	unsigned char stepLocal_13 = var_1_105;
	if (var_1_103) {
		if (var_1_108 || stepLocal_13) {
			var_1_55 = var_1_5;
		}
	} else {
		var_1_55 = var_1_41;
	}


	// From: Req22Batch20Amount500
	signed char stepLocal_15 = var_1_45;
	unsigned long int stepLocal_14 = (var_1_26 + var_1_5) + var_1_32;
	if (stepLocal_15 < last_1_var_1_57) {
		if (var_1_6 > stepLocal_14) {
			var_1_57 = (max (var_1_5 , (128 - (min (var_1_48 , var_1_49)))));
		} else {
			if (var_1_105) {
				var_1_57 = var_1_41;
			} else {
				var_1_57 = (abs (max (64 , (var_1_41 - var_1_6))));
			}
		}
	}


	// From: Req34Batch20Amount500
	if ((- (var_1_17 - var_1_74)) > ((- var_1_38) * var_1_97)) {
		var_1_73 = (min ((var_1_30 - var_1_6) , var_1_41));
	}


	// From: Req35Batch20Amount500
	var_1_75 = (max (var_1_104 , ((var_1_66 + var_1_76) - var_1_30)));


	// From: Req45Batch20Amount500
	var_1_95 = var_1_109;


	// From: Req47Batch20Amount500
	if (var_1_112) {
		var_1_98 = var_1_78;
	}


	// From: Req19Batch20Amount500
	signed long int stepLocal_12 = var_1_58 + (var_1_72 / var_1_5);
	signed long int stepLocal_11 = (var_1_19 - var_1_41) - var_1_53;
	if (stepLocal_12 <= 256u) {
		if ((abs (var_1_42)) >= stepLocal_11) {
			if (var_1_33 <= ((var_1_43 / var_1_51) / var_1_52)) {
				var_1_50 = (var_1_38 - 99.375);
			}
		} else {
			var_1_50 = (min (var_1_16 , var_1_38));
		}
	}


	// From: Req36Batch20Amount500
	if (var_1_34 > (- var_1_50)) {
		var_1_77 = (max ((var_1_34 + (var_1_37 - 16.5f)) , ((var_1_78 + var_1_79) + 31.4f)));
	} else {
		var_1_77 = (16.75f - (min (1.4f , var_1_37)));
	}


	// From: Req8Batch20Amount500
	if (var_1_103) {
		var_1_22 = ((var_1_8 - (var_1_23 - var_1_6)) + (max (128 , var_1_55)));
	} else {
		var_1_22 = (min ((max (var_1_6 , var_1_63)) , ((57988 - var_1_80) - var_1_5)));
	}


	// From: Req25Batch20Amount500
	unsigned short int stepLocal_17 = var_1_75;
	if (stepLocal_17 >= var_1_6) {
		if (3.4 < (var_1_98 * var_1_17)) {
			var_1_60 = (abs (var_1_106));
		}
	} else {
		var_1_60 = ((max (var_1_106 , (var_1_30 - var_1_40))) + var_1_42);
	}


	// From: Req38Batch20Amount500
	unsigned short int stepLocal_28 = var_1_75;
	unsigned char stepLocal_27 = var_1_105;
	signed char stepLocal_26 = var_1_46;
	if (((var_1_45 / var_1_54) / var_1_5) < stepLocal_28) {
		if (var_1_59 > (abs (min (var_1_110 , var_1_34)))) {
			if (stepLocal_26 >= (max ((var_1_26 * var_1_72) , (var_1_5 * var_1_95)))) {
				var_1_82 = (min (var_1_21 , var_1_23));
			} else {
				if (stepLocal_27 || var_1_69) {
					if (var_1_38 >= var_1_110) {
						var_1_82 = var_1_6;
					} else {
						var_1_82 = (var_1_76 + (abs (min (var_1_30 , var_1_48))));
					}
				} else {
					var_1_82 = (var_1_21 - (var_1_23 + (max (var_1_39 , var_1_30))));
				}
			}
		}
	}


	// From: Req62Batch20Amount500
	unsigned long int stepLocal_38 = var_1_26;
	if (stepLocal_38 >= (var_1_95 + var_1_41)) {
		var_1_115 = (var_1_23 - (1168160931 - var_1_39));
	} else {
		var_1_115 = var_1_99;
	}


	// From: Req5Batch20Amount500
	unsigned char stepLocal_4 = var_1_6;
	if (stepLocal_4 >= (var_1_22 ^ var_1_60)) {
		var_1_13 = (max (var_1_15 , (var_1_16 - var_1_17)));
	}


	// From: Req61Batch20Amount500
	var_1_114 = (max (10 , var_1_22));


	// From: Req32Batch20Amount500
	unsigned char stepLocal_21 = var_1_55;
	signed long int stepLocal_20 = 1;
	if (var_1_34 <= var_1_97) {
		if (stepLocal_20 == (var_1_115 * var_1_44)) {
			var_1_71 = (max (var_1_48 , (min (var_1_42 , var_1_6))));
		} else {
			var_1_71 = ((var_1_41 - var_1_42) - var_1_49);
		}
	} else {
		if (var_1_42 >= stepLocal_21) {
			var_1_71 = (min (8 , 4));
		} else {
			var_1_71 = var_1_30;
		}
	}


	// From: Req18Batch20Amount500
	signed long int stepLocal_10 = var_1_23 << (var_1_48 - var_1_49);
	if (stepLocal_10 <= (max (var_1_80 , var_1_71))) {
		var_1_47 = (var_1_30 + ((min (var_1_49 , var_1_48)) - var_1_42));
	}


	// From: Req44Batch20Amount500
	var_1_93 = var_1_71;


	// From: Req10Batch20Amount500
	unsigned long int stepLocal_8 = max (var_1_82 , 16u);
	if ((var_1_60 % (min (var_1_23 , var_1_8))) <= stepLocal_8) {
		var_1_27 = (var_1_71 + (var_1_8 - var_1_25));
	} else {
		if (9.9999999995E9f <= (- var_1_98)) {
			var_1_27 = (var_1_71 + var_1_82);
		}
	}


	// From: Req41Batch20Amount500
	signed long int stepLocal_34 = var_1_19;
	unsigned short int stepLocal_33 = var_1_75;
	unsigned char stepLocal_32 = var_1_55 <= var_1_7;
	if (((var_1_102 >> var_1_95) > var_1_63) && stepLocal_32) {
		var_1_87 = (min (var_1_102 , (var_1_6 + var_1_21)));
	} else {
		if (var_1_108) {
			if (stepLocal_33 <= var_1_83) {
				if (! (last_1_var_1_87 > var_1_11)) {
					var_1_87 = var_1_82;
				} else {
					var_1_87 = (var_1_106 + (var_1_19 - (max (var_1_41 , var_1_22))));
				}
			} else {
				var_1_87 = var_1_8;
			}
		} else {
			if (var_1_27 <= stepLocal_34) {
				var_1_87 = (((var_1_89 + 1000000000u) + var_1_19) - (min (var_1_64 , var_1_66)));
			}
		}
	}


	// From: Req42Batch20Amount500
	unsigned long int stepLocal_36 = abs (4u + 256u);
	unsigned long int stepLocal_35 = var_1_26 - (32u + var_1_21);
	if (stepLocal_36 > var_1_93) {
		var_1_90 = ((max ((min (var_1_76 , var_1_72)) , var_1_115)) + var_1_87);
	} else {
		if (var_1_9 > stepLocal_35) {
			if (var_1_67) {
				var_1_90 = (var_1_60 + var_1_95);
			}
		}
	}


	// From: Req27Batch20Amount500
	signed long int stepLocal_19 = ~ var_1_109;
	unsigned char stepLocal_18 = var_1_52 <= var_1_37;
	if (var_1_103) {
		if ((var_1_16 - var_1_17) > var_1_110) {
			var_1_62 = (max (((var_1_27 + var_1_85) + 1u) , var_1_20));
		} else {
			if (stepLocal_19 < (~ var_1_5)) {
				if ((last_1_var_1_62 < var_1_5) && stepLocal_18) {
					var_1_62 = ((max (var_1_5 , (var_1_55 + var_1_20))) + (var_1_93 + 128u));
				} else {
					var_1_62 = (min (var_1_11 , var_1_55));
				}
			}
		}
	}


	// From: Req43Batch20Amount500
	signed long int stepLocal_37 = abs (var_1_55);
	if (stepLocal_37 <= (var_1_81 - var_1_60)) {
		var_1_91 = (((var_1_23 - var_1_87) - var_1_81) + (max (var_1_71 , var_1_46)));
	} else {
		var_1_91 = var_1_62;
	}


	// From: Req6Batch20Amount500
	signed long int stepLocal_5 = var_1_80;
	if (var_1_108) {
		if (stepLocal_5 != ((3451179663u - var_1_6) * var_1_8)) {
			var_1_18 = (var_1_90 - ((var_1_19 - last_1_var_1_18) - var_1_6));
		}
	} else {
		var_1_18 = (max (var_1_8 , (abs (var_1_90))));
	}


	// From: Req26Batch20Amount500
	var_1_61 = (var_1_18 - var_1_7);
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 64);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 64);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 16383);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 1610612734);
	assume_abort_if_not(var_1_19 <= 2147483646);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 32767);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 8191);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 3221225470);
	assume_abort_if_not(var_1_26 <= 4294967294);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 32767);
	assume_abort_if_not(var_1_32 <= 65535);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -461168.6018427382800e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -461168.6018427382800e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 190);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 31);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -63);
	assume_abort_if_not(var_1_45 <= 63);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -63);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 2);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
	assume_abort_if_not(var_1_51 != 0.0F);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -922337.2036854776000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	assume_abort_if_not(var_1_52 != 0.0F);
	var_1_54 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_54 >= -2147483648);
	assume_abort_if_not(var_1_54 <= 2147483647);
	assume_abort_if_not(var_1_54 != 0);
	var_1_66 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_66 >= 16384);
	assume_abort_if_not(var_1_66 <= 32767);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 0);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 0);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 0);
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854776000e+12F && var_1_74 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 16384);
	assume_abort_if_not(var_1_76 <= 32767);
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= -230584.3009213691390e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 2305843.009213691390e+12F && var_1_78 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_79 >= -230584.3009213691390e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 2305843.009213691390e+12F && var_1_79 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 127);
	var_1_86 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_86 >= 49150);
	assume_abort_if_not(var_1_86 <= 65534);
	var_1_89 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_89 >= 536870911);
	assume_abort_if_not(var_1_89 <= 1073741824);
	var_1_111 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_111 >= -922337.2036854765600e+13F && var_1_111 <= -1.0e-20F) || (var_1_111 <= 9223372.036854765600e+12F && var_1_111 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_105 = var_1_105;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_112 = var_1_112;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_105 || var_1_103) ? ((var_1_85 == ((64 + var_1_5) - (var_1_6 + 10))) ? (var_1_1 == ((signed short int) var_1_85)) : 1) : 1) && (((var_1_6 / var_1_5) > var_1_83) ? (var_1_7 == ((unsigned short int) ((var_1_8 - var_1_5) + var_1_6))) : 1)) && ((last_1_var_1_18 <= last_1_var_1_99) ? (var_1_9 == ((signed long int) last_1_var_1_18)) : 1)) && (var_1_10 == ((unsigned long int) (var_1_11 - var_1_63)))) && ((var_1_6 >= (var_1_22 ^ var_1_60)) ? (var_1_13 == ((float) (max (var_1_15 , (var_1_16 - var_1_17))))) : 1)) && (var_1_108 ? ((var_1_80 != ((3451179663u - var_1_6) * var_1_8)) ? (var_1_18 == ((signed long int) (var_1_90 - ((var_1_19 - last_1_var_1_18) - var_1_6)))) : 1) : (var_1_18 == ((signed long int) (max (var_1_8 , (abs (var_1_90)))))))) && ((last_1_var_1_109 < last_1_var_1_57) ? (var_1_20 == ((unsigned short int) ((var_1_5 + (max (last_1_var_1_99 , var_1_6))) + 16))) : (last_1_var_1_108 ? ((4 >= last_1_var_1_65) ? (var_1_20 == ((unsigned short int) (abs (var_1_21 - (var_1_8 - 16))))) : (var_1_20 == ((unsigned short int) (abs (var_1_6))))) : (var_1_20 == ((unsigned short int) var_1_8))))) && (var_1_103 ? (var_1_22 == ((unsigned short int) ((var_1_8 - (var_1_23 - var_1_6)) + (max (128 , var_1_55))))) : (var_1_22 == ((unsigned short int) (min ((max (var_1_6 , var_1_63)) , ((57988 - var_1_80) - var_1_5))))))) && ((last_1_var_1_112 || (last_1_var_1_102 == (last_1_var_1_65 >> last_1_var_1_27))) ? (last_1_var_1_103 ? ((var_1_15 <= var_1_17) ? (var_1_25 == ((unsigned long int) ((var_1_26 - var_1_21) - var_1_23))) : (var_1_25 == ((unsigned long int) (var_1_26 - last_1_var_1_65)))) : (last_1_var_1_112 ? (var_1_25 == ((unsigned long int) var_1_19)) : 1)) : (var_1_25 == ((unsigned long int) var_1_5)))) && (((var_1_60 % (min (var_1_23 , var_1_8))) <= (max (var_1_82 , 16u))) ? (var_1_27 == ((signed long int) (var_1_71 + (var_1_8 - var_1_25)))) : ((9.9999999995E9f <= (- var_1_98)) ? (var_1_27 == ((signed long int) (var_1_71 + var_1_82))) : 1))) && (var_1_105 ? (var_1_67 ? (var_1_29 == ((signed char) ((min ((2 + var_1_30) , 10)) - var_1_6))) : 1) : 1)) && ((var_1_21 < (var_1_32 - (min (var_1_30 , var_1_6)))) ? (var_1_31 == ((double) (var_1_33 - var_1_16))) : (var_1_31 == ((double) (var_1_34 + var_1_35))))) && (var_1_36 == ((double) ((max (var_1_33 , (var_1_37 + var_1_38))) - var_1_17)))) && ((! last_1_var_1_112) ? (var_1_39 == ((signed long int) (min ((min (var_1_6 , var_1_23)) , (last_1_var_1_82 - (last_1_var_1_73 + var_1_21)))))) : 1)) && (var_1_112 ? ((! var_1_67) ? (var_1_40 == ((unsigned char) ((var_1_41 - (var_1_42 - 5)) - var_1_5))) : (var_1_67 ? (var_1_40 == ((unsigned char) var_1_5)) : (var_1_40 == ((unsigned char) (var_1_41 - var_1_6))))) : ((var_1_23 >= (var_1_64 * var_1_65)) ? (var_1_40 == ((unsigned char) (min ((min ((var_1_42 + var_1_5) , var_1_6)) , var_1_41)))) : (var_1_40 == ((unsigned char) var_1_5))))) && (((var_1_38 - var_1_37) <= (- var_1_97)) ? (((var_1_1 / var_1_42) <= (max (var_1_6 , var_1_21))) ? (var_1_43 == ((float) ((max (var_1_38 , var_1_37)) + var_1_34))) : (var_1_43 == ((float) var_1_38))) : (var_1_43 == ((float) ((max (var_1_33 , var_1_16)) - var_1_37))))) && ((! var_1_112) ? (var_1_44 == ((signed char) (var_1_30 - var_1_6))) : (var_1_44 == ((signed char) (max (var_1_41 , ((var_1_30 - var_1_42) + (min (var_1_45 , var_1_46))))))))) && (((var_1_23 << (var_1_48 - var_1_49)) <= (max (var_1_80 , var_1_71))) ? (var_1_47 == ((signed char) (var_1_30 + ((min (var_1_49 , var_1_48)) - var_1_42)))) : 1)) && (((var_1_58 + (var_1_72 / var_1_5)) <= 256u) ? (((abs (var_1_42)) >= ((var_1_19 - var_1_41) - var_1_53)) ? ((var_1_33 <= ((var_1_43 / var_1_51) / var_1_52)) ? (var_1_50 == ((double) (var_1_38 - 99.375))) : 1) : (var_1_50 == ((double) (min (var_1_16 , var_1_38))))) : 1)) && (var_1_103 ? ((var_1_16 <= 32.1f) ? (var_1_53 == ((unsigned char) (max (var_1_5 , var_1_6)))) : 1) : (((max (var_1_11 , 8)) > (max ((var_1_26 - var_1_8) , var_1_41))) ? (((var_1_83 % var_1_48) < (var_1_21 / (min (var_1_54 , var_1_41)))) ? (var_1_53 == ((unsigned char) ((max (8 , (abs (var_1_49)))) + var_1_6))) : 1) : 1))) && (var_1_103 ? ((var_1_108 || var_1_105) ? (var_1_55 == ((unsigned char) var_1_5)) : 1) : (var_1_55 == ((unsigned char) var_1_41)))) && ((var_1_45 < last_1_var_1_57) ? ((var_1_6 > ((var_1_26 + var_1_5) + var_1_32)) ? (var_1_57 == ((unsigned char) (max (var_1_5 , (128 - (min (var_1_48 , var_1_49))))))) : (var_1_105 ? (var_1_57 == ((unsigned char) var_1_41)) : (var_1_57 == ((unsigned char) (abs (max (64 , (var_1_41 - var_1_6)))))))) : 1)) && (var_1_58 == ((signed short int) (var_1_5 + var_1_6)))) && ((var_1_11 != var_1_100) ? (var_1_59 == ((float) var_1_37)) : (var_1_59 == ((float) var_1_37)))) && ((var_1_75 >= var_1_6) ? ((3.4 < (var_1_98 * var_1_17)) ? (var_1_60 == ((signed long int) (abs (var_1_106)))) : 1) : (var_1_60 == ((signed long int) ((max (var_1_106 , (var_1_30 - var_1_40))) + var_1_42))))) && (var_1_61 == ((signed short int) (var_1_18 - var_1_7)))) && (var_1_103 ? (((var_1_16 - var_1_17) > var_1_110) ? (var_1_62 == ((unsigned long int) (max (((var_1_27 + var_1_85) + 1u) , var_1_20)))) : (((~ var_1_109) < (~ var_1_5)) ? (((last_1_var_1_62 < var_1_5) && (var_1_52 <= var_1_37)) ? (var_1_62 == ((unsigned long int) ((max (var_1_5 , (var_1_55 + var_1_20))) + (var_1_93 + 128u)))) : (var_1_62 == ((unsigned long int) (min (var_1_11 , var_1_55))))) : 1)) : 1)) && ((var_1_112 && (var_1_25 > (var_1_11 - var_1_42))) ? (var_1_63 == ((unsigned short int) (var_1_21 - var_1_20))) : (var_1_63 == ((unsigned short int) (var_1_8 + (max (4 , last_1_var_1_63))))))) && (var_1_64 == ((signed long int) (max (var_1_46 , last_1_var_1_64))))) && ((4 > var_1_45) ? ((((var_1_8 + var_1_66) - last_1_var_1_7) <= (last_1_var_1_47 + (last_1_var_1_102 - var_1_48))) ? (var_1_65 == ((unsigned short int) (abs (var_1_23)))) : (var_1_65 == ((unsigned short int) 16))) : (var_1_65 == ((unsigned short int) (var_1_48 + last_1_var_1_107))))) && (var_1_67 == ((unsigned char) ((var_1_68 || var_1_69) || var_1_70)))) && ((var_1_34 <= var_1_97) ? ((1 == (var_1_115 * var_1_44)) ? (var_1_71 == ((unsigned char) (max (var_1_48 , (min (var_1_42 , var_1_6)))))) : (var_1_71 == ((unsigned char) ((var_1_41 - var_1_42) - var_1_49)))) : ((var_1_42 >= var_1_55) ? (var_1_71 == ((unsigned char) (min (8 , 4)))) : (var_1_71 == ((unsigned char) var_1_30))))) && ((var_1_23 > 2) ? ((last_1_var_1_98 > (last_1_var_1_50 + 8.375f)) ? (var_1_72 == ((unsigned char) (min (var_1_49 , (min (var_1_6 , var_1_30)))))) : (var_1_72 == ((unsigned char) (abs (var_1_42))))) : ((last_1_var_1_102 < var_1_26) ? (var_1_72 == ((unsigned char) ((var_1_41 - var_1_30) - var_1_49))) : 1))) && (((- (var_1_17 - var_1_74)) > ((- var_1_38) * var_1_97)) ? (var_1_73 == ((signed char) (min ((var_1_30 - var_1_6) , var_1_41)))) : 1)) && (var_1_75 == ((unsigned short int) (max (var_1_104 , ((var_1_66 + var_1_76) - var_1_30)))))) && ((var_1_34 > (- var_1_50)) ? (var_1_77 == ((float) (max ((var_1_34 + (var_1_37 - 16.5f)) , ((var_1_78 + var_1_79) + 31.4f))))) : (var_1_77 == ((float) (16.75f - (min (1.4f , var_1_37))))))) && ((((var_1_48 - var_1_81) % var_1_42) > var_1_107) ? (var_1_80 == ((signed long int) var_1_48)) : ((var_1_102 >= var_1_49) ? (var_1_80 == ((signed long int) (min ((max (var_1_48 , -16)) , var_1_30)))) : (var_1_80 == ((signed long int) (abs (var_1_99))))))) && ((((var_1_45 / var_1_54) / var_1_5) < var_1_75) ? ((var_1_59 > (abs (min (var_1_110 , var_1_34)))) ? ((var_1_46 >= (max ((var_1_26 * var_1_72) , (var_1_5 * var_1_95)))) ? (var_1_82 == ((unsigned short int) (min (var_1_21 , var_1_23)))) : ((var_1_105 || var_1_69) ? ((var_1_38 >= var_1_110) ? (var_1_82 == ((unsigned short int) var_1_6)) : (var_1_82 == ((unsigned short int) (var_1_76 + (abs (min (var_1_30 , var_1_48))))))) : (var_1_82 == ((unsigned short int) (var_1_21 - (var_1_23 + (max (var_1_39 , var_1_30)))))))) : 1) : 1)) && ((last_1_var_1_105 && (100.1f <= (max (last_1_var_1_77 , var_1_74)))) ? (var_1_83 == ((signed long int) last_1_var_1_39)) : (((min (last_1_var_1_20 , last_1_var_1_22)) >= 1u) ? (var_1_83 == ((signed long int) (abs (last_1_var_1_47)))) : ((last_1_var_1_108 || var_1_69) ? (var_1_83 == ((signed long int) (var_1_42 + var_1_66))) : 1)))) && (var_1_85 == ((unsigned short int) (((max (var_1_86 , 57883)) - last_1_var_1_73) - (last_1_var_1_62 + var_1_6))))) && ((((var_1_102 >> var_1_95) > var_1_63) && (var_1_55 <= var_1_7)) ? (var_1_87 == ((unsigned long int) (min (var_1_102 , (var_1_6 + var_1_21))))) : (var_1_108 ? ((var_1_75 <= var_1_83) ? ((! (last_1_var_1_87 > var_1_11)) ? (var_1_87 == ((unsigned long int) var_1_82)) : (var_1_87 == ((unsigned long int) (var_1_106 + (var_1_19 - (max (var_1_41 , var_1_22))))))) : (var_1_87 == ((unsigned long int) var_1_8))) : ((var_1_27 <= var_1_19) ? (var_1_87 == ((unsigned long int) (((var_1_89 + 1000000000u) + var_1_19) - (min (var_1_64 , var_1_66))))) : 1)))) && (((abs (4u + 256u)) > var_1_93) ? (var_1_90 == ((signed long int) ((max ((min (var_1_76 , var_1_72)) , var_1_115)) + var_1_87))) : ((var_1_9 > (var_1_26 - (32u + var_1_21))) ? (var_1_67 ? (var_1_90 == ((signed long int) (var_1_60 + var_1_95))) : 1) : 1))) && (((abs (var_1_55)) <= (var_1_81 - var_1_60)) ? (var_1_91 == ((signed short int) (((var_1_23 - var_1_87) - var_1_81) + (max (var_1_71 , var_1_46))))) : (var_1_91 == ((signed short int) var_1_62)))) && (var_1_93 == ((unsigned short int) var_1_71))) && (var_1_95 == ((unsigned short int) var_1_109))) && (var_1_70 ? (var_1_97 == ((double) 9999.6)) : 1)) && (var_1_112 ? (var_1_98 == ((double) var_1_78)) : 1)) && (var_1_99 == ((signed long int) var_1_23))) && (var_1_100 == ((unsigned long int) var_1_72))) && (var_1_69 ? (var_1_101 == ((signed char) 1)) : 1)) && (var_1_69 ? (var_1_102 == ((unsigned short int) last_1_var_1_40)) : (var_1_102 == ((unsigned short int) var_1_49)))) && (var_1_103 == ((unsigned char) var_1_69))) && (var_1_69 ? (var_1_104 == ((signed char) var_1_41)) : 1)) && (var_1_68 ? (var_1_105 == ((unsigned char) var_1_70)) : 1)) && (var_1_106 == ((unsigned char) 1))) && (var_1_107 == ((unsigned short int) var_1_41))) && (var_1_108 == ((unsigned char) var_1_69))) && (var_1_69 ? (var_1_109 == ((unsigned char) var_1_49)) : (var_1_109 == ((unsigned char) var_1_30)))) && (var_1_67 ? (var_1_110 == ((double) var_1_16)) : (var_1_110 == ((double) var_1_111)))) && (var_1_108 ? (var_1_112 == ((unsigned char) 0)) : (var_1_112 == ((unsigned char) 1)))) && (var_1_114 == ((signed long int) (max (10 , var_1_22))))) && ((var_1_26 >= (var_1_95 + var_1_41)) ? (var_1_115 == ((signed long int) (var_1_23 - (1168160931 - var_1_39)))) : (var_1_115 == ((signed long int) var_1_99)))
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
