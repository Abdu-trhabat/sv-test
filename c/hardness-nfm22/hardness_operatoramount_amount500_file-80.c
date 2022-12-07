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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch80Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 0.8;
float var_1_6 = 16.375;
float var_1_7 = 0.25;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 128;
double var_1_13 = 255.5;
double var_1_14 = 0.0;
double var_1_15 = 0.0;
double var_1_16 = 100.3;
signed short int var_1_19 = -256;
unsigned char var_1_26 = 2;
unsigned char var_1_27 = 10;
unsigned char var_1_28 = 50;
unsigned long int var_1_29 = 100;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned long int var_1_33 = 256;
unsigned char var_1_34 = 0;
float var_1_35 = 3.625;
float var_1_36 = 128.1;
float var_1_37 = 4.2;
float var_1_38 = 15.5;
unsigned long int var_1_39 = 16;
signed char var_1_40 = -16;
signed char var_1_41 = 4;
signed char var_1_42 = -32;
signed char var_1_43 = -1;
signed char var_1_44 = 0;
signed char var_1_45 = 8;
signed char var_1_46 = 1;
double var_1_47 = 100.05;
float var_1_48 = 0.6;
signed long int var_1_49 = 32;
float var_1_50 = 9.5;
unsigned short int var_1_51 = 10;
unsigned short int var_1_52 = 30583;
unsigned short int var_1_53 = 29929;
unsigned char var_1_54 = 0;
float var_1_55 = 127.25;
signed char var_1_56 = -100;
signed char var_1_58 = 8;
signed char var_1_59 = 0;
unsigned short int var_1_60 = 4;
float var_1_61 = 256.25;
float var_1_62 = 0.0;
float var_1_63 = 0.0;
signed short int var_1_64 = 16;
double var_1_65 = 49.8;
unsigned char var_1_66 = 0;
unsigned short int var_1_67 = 64;
double var_1_68 = 256.1;
unsigned char var_1_69 = 16;
signed long int var_1_70 = 2;
unsigned long int var_1_71 = 10;
unsigned long int var_1_73 = 4123187087;
unsigned long int var_1_74 = 1454851512;
unsigned long int var_1_75 = 1147113364;
unsigned long int var_1_76 = 8;
unsigned char var_1_77 = 1;
unsigned char var_1_78 = 100;
unsigned char var_1_79 = 1;
unsigned char var_1_80 = 128;
unsigned char var_1_81 = 200;
unsigned char var_1_82 = 10;
signed long int var_1_83 = -128;
signed long int var_1_84 = 1000000000;
float var_1_85 = 64.75;
unsigned short int var_1_86 = 2;
unsigned short int var_1_87 = 4;
signed short int var_1_88 = -256;
signed char var_1_89 = -25;
signed char var_1_91 = 1;
unsigned char var_1_92 = 0;
unsigned char var_1_93 = 10;
double var_1_94 = 1.7;
unsigned char var_1_95 = 64;
signed long int var_1_96 = 256;
unsigned short int var_1_97 = 2;
unsigned short int var_1_98 = 200;
unsigned long int var_1_99 = 10;
signed short int var_1_100 = 50;
unsigned long int var_1_101 = 50;
unsigned long int var_1_102 = 256;
signed char var_1_103 = -10;
double var_1_104 = 128.4;
unsigned char var_1_105 = 1;
unsigned long int var_1_106 = 64;
double var_1_107 = 15.2;
signed long int var_1_108 = -256;
unsigned char var_1_109 = 0;
float var_1_110 = 4.5;
unsigned char var_1_111 = 0;

// Calibration values

// Last'ed variables
double last_1_var_1_13 = 255.5;
unsigned char last_1_var_1_26 = 2;
unsigned long int last_1_var_1_29 = 100;
unsigned char last_1_var_1_30 = 1;
signed char last_1_var_1_40 = -16;
signed char last_1_var_1_43 = -1;
double last_1_var_1_47 = 100.05;
unsigned short int last_1_var_1_51 = 10;
unsigned char last_1_var_1_69 = 16;
unsigned char last_1_var_1_77 = 1;
unsigned char last_1_var_1_82 = 10;
signed long int last_1_var_1_83 = -128;
signed short int last_1_var_1_88 = -256;
unsigned char last_1_var_1_92 = 0;
unsigned char last_1_var_1_93 = 10;
unsigned char last_1_var_1_95 = 64;
signed long int last_1_var_1_96 = 256;
double last_1_var_1_104 = 128.4;
float last_1_var_1_110 = 4.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req37Batch80Amount500
	if (var_1_62 == last_1_var_1_13) {
		if ((last_1_var_1_83 + var_1_28) < (var_1_53 * last_1_var_1_95)) {
			var_1_92 = ((var_1_34 || (! var_1_10)) || var_1_31);
		} else {
			if ((- (var_1_45 + var_1_53)) >= last_1_var_1_40) {
				var_1_92 = ((last_1_var_1_110 > last_1_var_1_13) && var_1_31);
			} else {
				var_1_92 = (var_1_9 && var_1_10);
			}
		}
	} else {
		if (last_1_var_1_30) {
			var_1_92 = (((last_1_var_1_104 <= var_1_16) || (var_1_38 != var_1_55)) || (! (var_1_34 || var_1_31)));
		} else {
			var_1_92 = (var_1_10 && var_1_31);
		}
	}


	// From: Req40Batch80Amount500
	if (last_1_var_1_82 <= var_1_52) {
		if (var_1_50 >= var_1_55) {
			var_1_95 = (var_1_86 + (min ((min (var_1_45 , var_1_46)) , (max (var_1_91 , var_1_87)))));
		} else {
			var_1_95 = (min ((var_1_80 - var_1_45) , 16));
		}
	} else {
		if (last_1_var_1_92) {
			var_1_95 = var_1_87;
		} else {
			var_1_95 = (var_1_80 - (min ((min (var_1_79 , var_1_46)) , var_1_87)));
		}
	}


	// From: Req20Batch80Amount500
	var_1_60 = (var_1_95 + 100);


	// From: Req32Batch80Amount500
	unsigned short int stepLocal_26 = var_1_53;
	signed long int stepLocal_25 = last_1_var_1_69;
	if (last_1_var_1_26 > stepLocal_26) {
		if (stepLocal_25 <= (~ last_1_var_1_29)) {
			var_1_82 = (max (var_1_81 , var_1_78));
		} else {
			var_1_82 = (min ((min (var_1_45 , var_1_79)) , var_1_80));
		}
	} else {
		var_1_82 = (128 - ((max (64 , var_1_78)) - (max (var_1_46 , var_1_79))));
	}


	// From: Req6Batch80Amount500
	if (last_1_var_1_13 >= var_1_7) {
		if (last_1_var_1_43 <= (last_1_var_1_93 * last_1_var_1_51)) {
			var_1_26 = (max (var_1_27 , var_1_28));
		} else {
			var_1_26 = (max (var_1_27 , var_1_28));
		}
	}


	// From: Req8Batch80Amount500
	if (var_1_9) {
		var_1_30 = (! var_1_31);
	}


	// From: Req12Batch80Amount500
	var_1_39 = var_1_60;


	// From: Req13Batch80Amount500
	var_1_40 = (var_1_41 + var_1_42);


	// From: Req14Batch80Amount500
	var_1_43 = (var_1_44 - (max ((var_1_45 + var_1_46) , (abs (64)))));


	// From: Req18Batch80Amount500
	if ((var_1_38 - var_1_55) <= var_1_7) {
		var_1_54 = (var_1_10 || ((! var_1_31) && var_1_9));
	} else {
		var_1_54 = (! 1);
	}


	// From: Req24Batch80Amount500
	var_1_66 = var_1_10;


	// From: Req26Batch80Amount500
	unsigned short int stepLocal_18 = var_1_53;
	if (stepLocal_18 <= 256) {
		var_1_68 = (min (var_1_38 , var_1_50));
	} else {
		var_1_68 = (abs (var_1_50));
	}


	// From: Req35Batch80Amount500
	var_1_88 = ((min (var_1_41 , var_1_58)) + last_1_var_1_88);


	// From: Req43Batch80Amount500
	if (var_1_66) {
		var_1_98 = 2;
	} else {
		var_1_98 = var_1_46;
	}


	// From: Req44Batch80Amount500
	if (var_1_31) {
		var_1_99 = 2u;
	} else {
		var_1_99 = var_1_52;
	}


	// From: Req45Batch80Amount500
	var_1_100 = var_1_26;


	// From: Req48Batch80Amount500
	var_1_103 = var_1_46;


	// From: Req49Batch80Amount500
	var_1_104 = var_1_38;


	// From: Req50Batch80Amount500
	if (var_1_66) {
		var_1_105 = 0;
	} else {
		var_1_105 = var_1_31;
	}


	// From: Req51Batch80Amount500
	var_1_106 = var_1_80;


	// From: Req52Batch80Amount500
	var_1_107 = var_1_16;


	// From: Req54Batch80Amount500
	if (var_1_105) {
		var_1_109 = var_1_9;
	} else {
		var_1_109 = var_1_9;
	}


	// From: Req42Batch80Amount500
	if (var_1_109) {
		var_1_97 = var_1_82;
	}


	// From: Req38Batch80Amount500
	if (var_1_9 || var_1_31) {
		if (var_1_105) {
			var_1_93 = (min ((16 + var_1_78) , var_1_91));
		}
	}


	// From: Req39Batch80Amount500
	if (3.85 > var_1_107) {
		var_1_94 = (max (var_1_16 , (var_1_7 - var_1_62)));
	}


	// From: Req41Batch80Amount500
	if (var_1_105) {
		if (var_1_28 >= last_1_var_1_96) {
			var_1_96 = var_1_103;
		} else {
			var_1_96 = var_1_46;
		}
	} else {
		var_1_96 = 256;
	}


	// From: Req21Batch80Amount500
	if ((var_1_93 + (var_1_82 / var_1_49)) >= var_1_46) {
		var_1_61 = (var_1_50 + (min (var_1_38 , var_1_37)));
	} else {
		var_1_61 = (((min (var_1_62 , var_1_63)) - (max (var_1_16 , var_1_38))) - var_1_14);
	}


	// From: Req23Batch80Amount500
	unsigned char stepLocal_16 = var_1_26;
	if (var_1_27 >= stepLocal_16) {
		if (var_1_61 <= 9.9999999625E7) {
			var_1_65 = (127.2 + (abs (var_1_37)));
		} else {
			var_1_65 = ((abs (var_1_16)) + var_1_37);
		}
	}


	// From: Req3Batch80Amount500
	if (var_1_9) {
		var_1_11 = 0u;
	} else {
		if (var_1_10) {
			var_1_11 = (abs (8u + var_1_93));
		} else {
			if (var_1_6 < 127.5f) {
				var_1_11 = var_1_93;
			}
		}
	}


	// From: Req10Batch80Amount500
	if ((var_1_93 >= var_1_27) && var_1_92) {
		var_1_35 = var_1_6;
	} else {
		var_1_35 = (var_1_6 - var_1_15);
	}


	// From: Req9Batch80Amount500
	if ((var_1_97 ^ (4u / var_1_33)) != var_1_95) {
		var_1_32 = ((99.6f != var_1_61) || var_1_10);
	} else {
		var_1_32 = (var_1_31 || var_1_34);
	}


	// From: Req27Batch80Amount500
	if (var_1_63 > var_1_65) {
		var_1_69 = (abs (var_1_27));
	}


	// From: Req56Batch80Amount500
	unsigned char stepLocal_36 = var_1_69;
	if (stepLocal_36 >= (abs (2))) {
		var_1_111 = (var_1_10 && var_1_9);
	}


	// From: Req36Batch80Amount500
	unsigned char stepLocal_35 = var_1_66;
	if (var_1_111 || stepLocal_35) {
		if ((var_1_7 - var_1_37) > 64.75f) {
			if (var_1_66) {
				var_1_89 = ((var_1_87 - (var_1_86 + var_1_91)) + var_1_46);
			}
		}
	} else {
		var_1_89 = (min (var_1_46 , var_1_91));
	}


	// From: Req22Batch80Amount500
	unsigned char stepLocal_15 = var_1_93;
	if (stepLocal_15 < var_1_58) {
		var_1_64 = (var_1_93 + (max ((max (var_1_41 , var_1_28)) , var_1_44)));
	} else {
		var_1_64 = (min ((min (var_1_95 , (4 + var_1_69))) , var_1_27));
	}


	// From: Req31Batch80Amount500
	unsigned char stepLocal_24 = var_1_82;
	signed char stepLocal_23 = var_1_44;
	if (var_1_64 >= stepLocal_23) {
		if (var_1_37 >= var_1_63) {
			if ((min (var_1_63 , var_1_50)) > (var_1_16 + var_1_94)) {
				var_1_77 = ((max (var_1_46 , (abs (var_1_45)))) + (var_1_78 - var_1_79));
			} else {
				if (last_1_var_1_77 > stepLocal_24) {
					var_1_77 = (min (((max (var_1_80 , var_1_81)) - var_1_78) , (var_1_79 + var_1_45)));
				} else {
					var_1_77 = (min (var_1_28 , (min (var_1_27 , var_1_79))));
				}
			}
		}
	}


	// From: Req15Batch80Amount500
	unsigned char stepLocal_7 = ! (var_1_34 || var_1_9);
	signed long int stepLocal_6 = - var_1_60;
	unsigned char stepLocal_5 = var_1_77;
	if (stepLocal_6 > var_1_42) {
		if (! var_1_66) {
			if (last_1_var_1_47 <= var_1_14) {
				if (stepLocal_7 || var_1_109) {
					var_1_47 = var_1_16;
				}
			}
		}
	} else {
		if (stepLocal_5 > (var_1_44 - var_1_82)) {
			var_1_47 = ((var_1_38 + var_1_37) + var_1_16);
		}
	}


	// From: Req47Batch80Amount500
	if (var_1_10) {
		var_1_102 = var_1_95;
	} else {
		var_1_102 = var_1_89;
	}


	// From: Req25Batch80Amount500
	unsigned short int stepLocal_17 = var_1_98;
	if (var_1_55 != (min (var_1_7 , var_1_14))) {
		if (stepLocal_17 != (var_1_27 + var_1_42)) {
			var_1_67 = var_1_52;
		} else {
			var_1_67 = ((8 + var_1_102) + var_1_28);
		}
	} else {
		var_1_67 = ((abs (var_1_28)) + var_1_82);
	}


	// From: Req28Batch80Amount500
	signed long int stepLocal_20 = var_1_93 * (var_1_52 >> var_1_100);
	unsigned char stepLocal_19 = var_1_10;
	if (var_1_102 <= stepLocal_20) {
		if (var_1_31 || stepLocal_19) {
			var_1_70 = (var_1_53 - var_1_95);
		}
	} else {
		var_1_70 = (min (var_1_59 , ((abs (var_1_102)) + var_1_45)));
	}


	// From: Req46Batch80Amount500
	var_1_101 = var_1_67;


	// From: Req34Batch80Amount500
	signed long int stepLocal_34 = abs (var_1_79);
	unsigned char stepLocal_33 = var_1_26;
	signed long int stepLocal_32 = (var_1_44 - 32) << var_1_64;
	unsigned short int stepLocal_31 = var_1_97;
	unsigned char stepLocal_30 = var_1_109;
	if (var_1_111) {
		if (stepLocal_34 > var_1_77) {
			if (stepLocal_30 && (var_1_53 <= var_1_97)) {
				var_1_85 = var_1_14;
			}
		} else {
			var_1_85 = (64.5f + ((3.3014550682278369E18f - var_1_37) - var_1_16));
		}
	} else {
		if (stepLocal_31 >= var_1_102) {
			if (! var_1_10) {
				if (50 <= stepLocal_32) {
					if ((-16 << (max (var_1_86 , var_1_87))) < stepLocal_33) {
						var_1_85 = ((min (var_1_38 , (var_1_37 + var_1_50))) + var_1_16);
					}
				} else {
					var_1_85 = var_1_50;
				}
			} else {
				var_1_85 = (min ((max (var_1_50 , var_1_16)) , var_1_7));
			}
		}
	}


	// From: Req2Batch80Amount500
	unsigned long int stepLocal_0 = 1u;
	if ((min (var_1_7 , var_1_47)) <= var_1_6) {
		if (stepLocal_0 < var_1_106) {
			var_1_8 = (var_1_9 && var_1_10);
		}
	}


	// From: Req55Batch80Amount500
	if ((var_1_107 / (min (var_1_63 , var_1_15))) == var_1_85) {
		var_1_110 = (((max (var_1_14 , var_1_63)) - var_1_16) - var_1_6);
	}


	// From: Req5Batch80Amount500
	signed long int stepLocal_4 = var_1_70;
	signed char stepLocal_3 = var_1_103;
	unsigned char stepLocal_2 = (min (4.5f , var_1_7)) <= 256.76f;
	if (stepLocal_4 == var_1_93) {
		if (! (var_1_14 <= 1.3)) {
			var_1_19 = (max (((max (var_1_95 , var_1_77)) + -8) , var_1_103));
		}
	} else {
		if (stepLocal_3 != var_1_95) {
			if (stepLocal_2 && var_1_109) {
				var_1_19 = (var_1_26 - var_1_77);
			} else {
				var_1_19 = (((64 + var_1_93) - (abs (-8))) + var_1_77);
			}
		}
	}


	// From: Req29Batch80Amount500
	signed long int stepLocal_21 = var_1_96 * var_1_52;
	if (var_1_69 >= stepLocal_21) {
		var_1_71 = ((max ((abs (var_1_53)) , var_1_27)) + var_1_26);
	} else {
		if (var_1_55 > var_1_85) {
			var_1_71 = var_1_28;
		} else {
			var_1_71 = (min ((max (var_1_52 , (var_1_73 - var_1_27))) , ((var_1_74 + var_1_75) - var_1_53)));
		}
	}


	// From: Req30Batch80Amount500
	unsigned char stepLocal_22 = var_1_32;
	if ((var_1_71 <= 1000000000u) && stepLocal_22) {
		var_1_76 = (abs (256u));
	}


	// From: Req17Batch80Amount500
	signed char stepLocal_12 = var_1_45;
	if (((-256 | var_1_71) / var_1_33) >= stepLocal_12) {
		var_1_51 = (((var_1_52 - var_1_27) + var_1_53) - var_1_69);
	}


	// From: Req1Batch80Amount500
	if (((~ var_1_82) + (var_1_26 + var_1_96)) <= var_1_76) {
		var_1_1 = (var_1_6 - var_1_7);
	}


	// From: Req7Batch80Amount500
	if ((min (8.25 , var_1_1)) >= (var_1_6 * var_1_14)) {
		var_1_29 = ((var_1_77 + (16u + var_1_93)) + var_1_28);
	} else {
		var_1_29 = var_1_26;
	}


	// From: Req33Batch80Amount500
	unsigned long int stepLocal_29 = min (var_1_27 , var_1_29);
	unsigned char stepLocal_28 = var_1_111;
	unsigned long int stepLocal_27 = (- var_1_76) * var_1_64;
	if (var_1_89 < stepLocal_27) {
		if (var_1_10 || stepLocal_28) {
			if (stepLocal_29 >= var_1_89) {
				var_1_83 = (((var_1_84 - var_1_46) - var_1_53) + (var_1_27 - 100000));
			}
		}
	} else {
		var_1_83 = (max (var_1_43 , var_1_84));
	}


	// From: Req16Batch80Amount500
	unsigned char stepLocal_11 = var_1_82;
	unsigned char stepLocal_10 = var_1_82;
	unsigned char stepLocal_9 = var_1_82 != var_1_27;
	signed long int stepLocal_8 = var_1_45 / (abs (var_1_49));
	if (var_1_39 > stepLocal_11) {
		if ((var_1_1 == var_1_14) && stepLocal_9) {
			if (stepLocal_8 == var_1_89) {
				var_1_48 = (var_1_14 - var_1_15);
			}
		} else {
			if ((min ((var_1_93 + var_1_99) , var_1_39)) >= stepLocal_10) {
				var_1_48 = (max ((9.05f - var_1_6) , var_1_15));
			} else {
				var_1_48 = (2.25f + (max (var_1_37 , (var_1_38 + var_1_50))));
			}
		}
	} else {
		var_1_48 = ((var_1_16 + (abs (3.6f))) - var_1_38);
	}


	// From: Req19Batch80Amount500
	unsigned long int stepLocal_14 = - (var_1_77 | var_1_29);
	unsigned char stepLocal_13 = var_1_105;
	if (var_1_9) {
		if ((var_1_8 && var_1_34) || stepLocal_13) {
			var_1_56 = ((min (var_1_45 , var_1_44)) - var_1_46);
		}
	} else {
		if (var_1_26 != stepLocal_14) {
			var_1_56 = (-32 + var_1_45);
		} else {
			var_1_56 = (var_1_41 + (max (var_1_42 , (var_1_58 + var_1_59))));
		}
	}


	// From: Req53Batch80Amount500
	if (var_1_111) {
		var_1_108 = var_1_29;
	} else {
		var_1_108 = var_1_64;
	}


	// From: Req4Batch80Amount500
	signed long int stepLocal_1 = (var_1_60 / -64) << var_1_51;
	if (var_1_7 != (var_1_1 * var_1_6)) {
		var_1_13 = (((min (var_1_14 , var_1_15)) - var_1_16) - var_1_7);
	} else {
		if ((var_1_14 - 100000.01f) > var_1_1) {
			if (var_1_9) {
				if (var_1_10) {
					if (stepLocal_1 >= ((max (var_1_26 , 16)) - var_1_95)) {
						if (var_1_8) {
							if (! var_1_92) {
								var_1_13 = var_1_14;
							} else {
								var_1_13 = var_1_16;
							}
						} else {
							var_1_13 = var_1_7;
						}
					}
				} else {
					var_1_13 = 7.25;
				}
			}
		} else {
			var_1_13 = var_1_14;
		}
	}


	// From: Req11Batch80Amount500
	if (! var_1_31) {
		if (var_1_13 < (999999.4f - var_1_16)) {
			var_1_36 = (15.25f + ((var_1_37 + var_1_38) - var_1_16));
		} else {
			var_1_36 = var_1_37;
		}
	} else {
		var_1_36 = var_1_6;
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 4611686.018427382800e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 4611686.018427382800e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 254);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967295);
	assume_abort_if_not(var_1_33 != 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691390e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691390e+12F && var_1_38 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -63);
	assume_abort_if_not(var_1_41 <= 63);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -63);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -1);
	assume_abort_if_not(var_1_44 <= 126);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 63);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= -2147483647);
	assume_abort_if_not(var_1_49 <= 2147483647);
	assume_abort_if_not(var_1_49 != 0);
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -230584.3009213691390e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691390e+12F && var_1_50 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_52 >= 24575);
	assume_abort_if_not(var_1_52 <= 32767);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 16384);
	assume_abort_if_not(var_1_53 <= 32767);
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854776000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= -31);
	assume_abort_if_not(var_1_58 <= 32);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -31);
	assume_abort_if_not(var_1_59 <= 31);
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 4611686.018427382800e+12F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= 4611686.018427382800e+12F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854765600e+12F && var_1_63 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_73 >= 2147483647);
	assume_abort_if_not(var_1_73 <= 4294967294);
	var_1_74 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_74 >= 1073741823);
	assume_abort_if_not(var_1_74 <= 2147483647);
	var_1_75 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_75 >= 1073741824);
	assume_abort_if_not(var_1_75 <= 2147483647);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 63);
	assume_abort_if_not(var_1_78 <= 127);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 63);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 127);
	assume_abort_if_not(var_1_80 <= 254);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 127);
	assume_abort_if_not(var_1_81 <= 254);
	var_1_84 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_84 >= 536870911);
	assume_abort_if_not(var_1_84 <= 1073741823);
	var_1_86 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 27);
	var_1_87 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 27);
	var_1_91 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 31);
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_110 = var_1_110;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((~ var_1_82) + (var_1_26 + var_1_96)) <= var_1_76) ? (var_1_1 == ((float) (var_1_6 - var_1_7))) : 1) && (((min (var_1_7 , var_1_47)) <= var_1_6) ? ((1u < var_1_106) ? (var_1_8 == ((unsigned char) (var_1_9 && var_1_10))) : 1) : 1)) && (var_1_9 ? (var_1_11 == ((unsigned long int) 0u)) : (var_1_10 ? (var_1_11 == ((unsigned long int) (abs (8u + var_1_93)))) : ((var_1_6 < 127.5f) ? (var_1_11 == ((unsigned long int) var_1_93)) : 1)))) && ((var_1_7 != (var_1_1 * var_1_6)) ? (var_1_13 == ((double) (((min (var_1_14 , var_1_15)) - var_1_16) - var_1_7))) : (((var_1_14 - 100000.01f) > var_1_1) ? (var_1_9 ? (var_1_10 ? ((((var_1_60 / -64) << var_1_51) >= ((max (var_1_26 , 16)) - var_1_95)) ? (var_1_8 ? ((! var_1_92) ? (var_1_13 == ((double) var_1_14)) : (var_1_13 == ((double) var_1_16))) : (var_1_13 == ((double) var_1_7))) : 1) : (var_1_13 == ((double) 7.25))) : 1) : (var_1_13 == ((double) var_1_14))))) && ((var_1_70 == var_1_93) ? ((! (var_1_14 <= 1.3)) ? (var_1_19 == ((signed short int) (max (((max (var_1_95 , var_1_77)) + -8) , var_1_103)))) : 1) : ((var_1_103 != var_1_95) ? ((((min (4.5f , var_1_7)) <= 256.76f) && var_1_109) ? (var_1_19 == ((signed short int) (var_1_26 - var_1_77))) : (var_1_19 == ((signed short int) (((64 + var_1_93) - (abs (-8))) + var_1_77)))) : 1))) && ((last_1_var_1_13 >= var_1_7) ? ((last_1_var_1_43 <= (last_1_var_1_93 * last_1_var_1_51)) ? (var_1_26 == ((unsigned char) (max (var_1_27 , var_1_28)))) : (var_1_26 == ((unsigned char) (max (var_1_27 , var_1_28))))) : 1)) && (((min (8.25 , var_1_1)) >= (var_1_6 * var_1_14)) ? (var_1_29 == ((unsigned long int) ((var_1_77 + (16u + var_1_93)) + var_1_28))) : (var_1_29 == ((unsigned long int) var_1_26)))) && (var_1_9 ? (var_1_30 == ((unsigned char) (! var_1_31))) : 1)) && (((var_1_97 ^ (4u / var_1_33)) != var_1_95) ? (var_1_32 == ((unsigned char) ((99.6f != var_1_61) || var_1_10))) : (var_1_32 == ((unsigned char) (var_1_31 || var_1_34))))) && (((var_1_93 >= var_1_27) && var_1_92) ? (var_1_35 == ((float) var_1_6)) : (var_1_35 == ((float) (var_1_6 - var_1_15))))) && ((! var_1_31) ? ((var_1_13 < (999999.4f - var_1_16)) ? (var_1_36 == ((float) (15.25f + ((var_1_37 + var_1_38) - var_1_16)))) : (var_1_36 == ((float) var_1_37))) : (var_1_36 == ((float) var_1_6)))) && (var_1_39 == ((unsigned long int) var_1_60))) && (var_1_40 == ((signed char) (var_1_41 + var_1_42)))) && (var_1_43 == ((signed char) (var_1_44 - (max ((var_1_45 + var_1_46) , (abs (64)))))))) && (((- var_1_60) > var_1_42) ? ((! var_1_66) ? ((last_1_var_1_47 <= var_1_14) ? (((! (var_1_34 || var_1_9)) || var_1_109) ? (var_1_47 == ((double) var_1_16)) : 1) : 1) : 1) : ((var_1_77 > (var_1_44 - var_1_82)) ? (var_1_47 == ((double) ((var_1_38 + var_1_37) + var_1_16))) : 1))) && ((var_1_39 > var_1_82) ? (((var_1_1 == var_1_14) && (var_1_82 != var_1_27)) ? (((var_1_45 / (abs (var_1_49))) == var_1_89) ? (var_1_48 == ((float) (var_1_14 - var_1_15))) : 1) : (((min ((var_1_93 + var_1_99) , var_1_39)) >= var_1_82) ? (var_1_48 == ((float) (max ((9.05f - var_1_6) , var_1_15)))) : (var_1_48 == ((float) (2.25f + (max (var_1_37 , (var_1_38 + var_1_50)))))))) : (var_1_48 == ((float) ((var_1_16 + (abs (3.6f))) - var_1_38))))) && ((((-256 | var_1_71) / var_1_33) >= var_1_45) ? (var_1_51 == ((unsigned short int) (((var_1_52 - var_1_27) + var_1_53) - var_1_69))) : 1)) && (((var_1_38 - var_1_55) <= var_1_7) ? (var_1_54 == ((unsigned char) (var_1_10 || ((! var_1_31) && var_1_9)))) : (var_1_54 == ((unsigned char) (! 1))))) && (var_1_9 ? (((var_1_8 && var_1_34) || var_1_105) ? (var_1_56 == ((signed char) ((min (var_1_45 , var_1_44)) - var_1_46))) : 1) : ((var_1_26 != (- (var_1_77 | var_1_29))) ? (var_1_56 == ((signed char) (-32 + var_1_45))) : (var_1_56 == ((signed char) (var_1_41 + (max (var_1_42 , (var_1_58 + var_1_59))))))))) && (var_1_60 == ((unsigned short int) (var_1_95 + 100)))) && (((var_1_93 + (var_1_82 / var_1_49)) >= var_1_46) ? (var_1_61 == ((float) (var_1_50 + (min (var_1_38 , var_1_37))))) : (var_1_61 == ((float) (((min (var_1_62 , var_1_63)) - (max (var_1_16 , var_1_38))) - var_1_14))))) && ((var_1_93 < var_1_58) ? (var_1_64 == ((signed short int) (var_1_93 + (max ((max (var_1_41 , var_1_28)) , var_1_44))))) : (var_1_64 == ((signed short int) (min ((min (var_1_95 , (4 + var_1_69))) , var_1_27)))))) && ((var_1_27 >= var_1_26) ? ((var_1_61 <= 9.9999999625E7) ? (var_1_65 == ((double) (127.2 + (abs (var_1_37))))) : (var_1_65 == ((double) ((abs (var_1_16)) + var_1_37)))) : 1)) && (var_1_66 == ((unsigned char) var_1_10))) && ((var_1_55 != (min (var_1_7 , var_1_14))) ? ((var_1_98 != (var_1_27 + var_1_42)) ? (var_1_67 == ((unsigned short int) var_1_52)) : (var_1_67 == ((unsigned short int) ((8 + var_1_102) + var_1_28)))) : (var_1_67 == ((unsigned short int) ((abs (var_1_28)) + var_1_82))))) && ((var_1_53 <= 256) ? (var_1_68 == ((double) (min (var_1_38 , var_1_50)))) : (var_1_68 == ((double) (abs (var_1_50)))))) && ((var_1_63 > var_1_65) ? (var_1_69 == ((unsigned char) (abs (var_1_27)))) : 1)) && ((var_1_102 <= (var_1_93 * (var_1_52 >> var_1_100))) ? ((var_1_31 || var_1_10) ? (var_1_70 == ((signed long int) (var_1_53 - var_1_95))) : 1) : (var_1_70 == ((signed long int) (min (var_1_59 , ((abs (var_1_102)) + var_1_45))))))) && ((var_1_69 >= (var_1_96 * var_1_52)) ? (var_1_71 == ((unsigned long int) ((max ((abs (var_1_53)) , var_1_27)) + var_1_26))) : ((var_1_55 > var_1_85) ? (var_1_71 == ((unsigned long int) var_1_28)) : (var_1_71 == ((unsigned long int) (min ((max (var_1_52 , (var_1_73 - var_1_27))) , ((var_1_74 + var_1_75) - var_1_53)))))))) && (((var_1_71 <= 1000000000u) && var_1_32) ? (var_1_76 == ((unsigned long int) (abs (256u)))) : 1)) && ((var_1_64 >= var_1_44) ? ((var_1_37 >= var_1_63) ? (((min (var_1_63 , var_1_50)) > (var_1_16 + var_1_94)) ? (var_1_77 == ((unsigned char) ((max (var_1_46 , (abs (var_1_45)))) + (var_1_78 - var_1_79)))) : ((last_1_var_1_77 > var_1_82) ? (var_1_77 == ((unsigned char) (min (((max (var_1_80 , var_1_81)) - var_1_78) , (var_1_79 + var_1_45))))) : (var_1_77 == ((unsigned char) (min (var_1_28 , (min (var_1_27 , var_1_79)))))))) : 1) : 1)) && ((last_1_var_1_26 > var_1_53) ? ((last_1_var_1_69 <= (~ last_1_var_1_29)) ? (var_1_82 == ((unsigned char) (max (var_1_81 , var_1_78)))) : (var_1_82 == ((unsigned char) (min ((min (var_1_45 , var_1_79)) , var_1_80))))) : (var_1_82 == ((unsigned char) (128 - ((max (64 , var_1_78)) - (max (var_1_46 , var_1_79)))))))) && ((var_1_89 < ((- var_1_76) * var_1_64)) ? ((var_1_10 || var_1_111) ? (((min (var_1_27 , var_1_29)) >= var_1_89) ? (var_1_83 == ((signed long int) (((var_1_84 - var_1_46) - var_1_53) + (var_1_27 - 100000)))) : 1) : 1) : (var_1_83 == ((signed long int) (max (var_1_43 , var_1_84)))))) && (var_1_111 ? (((abs (var_1_79)) > var_1_77) ? ((var_1_109 && (var_1_53 <= var_1_97)) ? (var_1_85 == ((float) var_1_14)) : 1) : (var_1_85 == ((float) (64.5f + ((3.3014550682278369E18f - var_1_37) - var_1_16))))) : ((var_1_97 >= var_1_102) ? ((! var_1_10) ? ((50 <= ((var_1_44 - 32) << var_1_64)) ? (((-16 << (max (var_1_86 , var_1_87))) < var_1_26) ? (var_1_85 == ((float) ((min (var_1_38 , (var_1_37 + var_1_50))) + var_1_16))) : 1) : (var_1_85 == ((float) var_1_50))) : (var_1_85 == ((float) (min ((max (var_1_50 , var_1_16)) , var_1_7))))) : 1))) && (var_1_88 == ((signed short int) ((min (var_1_41 , var_1_58)) + last_1_var_1_88)))) && ((var_1_111 || var_1_66) ? (((var_1_7 - var_1_37) > 64.75f) ? (var_1_66 ? (var_1_89 == ((signed char) ((var_1_87 - (var_1_86 + var_1_91)) + var_1_46))) : 1) : 1) : (var_1_89 == ((signed char) (min (var_1_46 , var_1_91)))))) && ((var_1_62 == last_1_var_1_13) ? (((last_1_var_1_83 + var_1_28) < (var_1_53 * last_1_var_1_95)) ? (var_1_92 == ((unsigned char) ((var_1_34 || (! var_1_10)) || var_1_31))) : (((- (var_1_45 + var_1_53)) >= last_1_var_1_40) ? (var_1_92 == ((unsigned char) ((last_1_var_1_110 > last_1_var_1_13) && var_1_31))) : (var_1_92 == ((unsigned char) (var_1_9 && var_1_10))))) : (last_1_var_1_30 ? (var_1_92 == ((unsigned char) (((last_1_var_1_104 <= var_1_16) || (var_1_38 != var_1_55)) || (! (var_1_34 || var_1_31))))) : (var_1_92 == ((unsigned char) (var_1_10 && var_1_31)))))) && ((var_1_9 || var_1_31) ? (var_1_105 ? (var_1_93 == ((unsigned char) (min ((16 + var_1_78) , var_1_91)))) : 1) : 1)) && ((3.85 > var_1_107) ? (var_1_94 == ((double) (max (var_1_16 , (var_1_7 - var_1_62))))) : 1)) && ((last_1_var_1_82 <= var_1_52) ? ((var_1_50 >= var_1_55) ? (var_1_95 == ((unsigned char) (var_1_86 + (min ((min (var_1_45 , var_1_46)) , (max (var_1_91 , var_1_87))))))) : (var_1_95 == ((unsigned char) (min ((var_1_80 - var_1_45) , 16))))) : (last_1_var_1_92 ? (var_1_95 == ((unsigned char) var_1_87)) : (var_1_95 == ((unsigned char) (var_1_80 - (min ((min (var_1_79 , var_1_46)) , var_1_87)))))))) && (var_1_105 ? ((var_1_28 >= last_1_var_1_96) ? (var_1_96 == ((signed long int) var_1_103)) : (var_1_96 == ((signed long int) var_1_46))) : (var_1_96 == ((signed long int) 256)))) && (var_1_109 ? (var_1_97 == ((unsigned short int) var_1_82)) : 1)) && (var_1_66 ? (var_1_98 == ((unsigned short int) 2)) : (var_1_98 == ((unsigned short int) var_1_46)))) && (var_1_31 ? (var_1_99 == ((unsigned long int) 2u)) : (var_1_99 == ((unsigned long int) var_1_52)))) && (var_1_100 == ((signed short int) var_1_26))) && (var_1_101 == ((unsigned long int) var_1_67))) && (var_1_10 ? (var_1_102 == ((unsigned long int) var_1_95)) : (var_1_102 == ((unsigned long int) var_1_89)))) && (var_1_103 == ((signed char) var_1_46))) && (var_1_104 == ((double) var_1_38))) && (var_1_66 ? (var_1_105 == ((unsigned char) 0)) : (var_1_105 == ((unsigned char) var_1_31)))) && (var_1_106 == ((unsigned long int) var_1_80))) && (var_1_107 == ((double) var_1_16))) && (var_1_111 ? (var_1_108 == ((signed long int) var_1_29)) : (var_1_108 == ((signed long int) var_1_64)))) && (var_1_105 ? (var_1_109 == ((unsigned char) var_1_9)) : (var_1_109 == ((unsigned char) var_1_9)))) && (((var_1_107 / (min (var_1_63 , var_1_15))) == var_1_85) ? (var_1_110 == ((float) (((max (var_1_14 , var_1_63)) - var_1_16) - var_1_6))) : 1)) && ((var_1_69 >= (abs (2))) ? (var_1_111 == ((unsigned char) (var_1_10 && var_1_9))) : 1)
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
