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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch17Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
double var_1_12 = 7.3;
double var_1_13 = 0.2;
double var_1_14 = 99.75;
double var_1_15 = 4.75;
float var_1_16 = 256.3;
float var_1_20 = 3.875;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed long int var_1_24 = -25;
signed long int var_1_25 = 32;
signed long int var_1_26 = 1000000000;
unsigned char var_1_29 = 0;
signed char var_1_30 = -16;
signed char var_1_31 = -25;
unsigned long int var_1_32 = 128;
double var_1_33 = 64.5;
double var_1_34 = -0.25;
double var_1_36 = 256.75;
double var_1_37 = 100.25;
double var_1_38 = 9.3;
double var_1_39 = 0.0;
double var_1_40 = 9999999999999.25;
double var_1_41 = 0.0;
double var_1_42 = 10000000.125;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 128;
unsigned char var_1_45 = 128;
unsigned char var_1_46 = 32;
unsigned long int var_1_47 = 256;
unsigned long int var_1_48 = 3976838315;
signed short int var_1_50 = -32;
unsigned short int var_1_51 = 50;
unsigned short int var_1_52 = 32638;
unsigned char var_1_53 = 128;
unsigned char var_1_54 = 64;
unsigned char var_1_55 = 25;
signed short int var_1_56 = 0;
signed short int var_1_57 = 25871;
signed short int var_1_58 = 256;
unsigned char var_1_59 = 128;
unsigned char var_1_60 = 32;
unsigned char var_1_61 = 200;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
signed short int var_1_67 = 100;
float var_1_68 = 0.19999999999999996;
double var_1_69 = 16.8;
double var_1_70 = 128.7;
double var_1_71 = 9999999999999.125;
double var_1_72 = 0.875;
unsigned short int var_1_73 = 64;
signed char var_1_74 = 1;
signed char var_1_75 = 1;
signed char var_1_76 = 64;
unsigned char var_1_77 = 32;
unsigned char var_1_78 = 64;
signed short int var_1_79 = -1;
float var_1_81 = 32.6;
unsigned char var_1_82 = 2;
unsigned long int var_1_83 = 4;
double var_1_84 = 31.5;
double var_1_85 = 100.75;
signed short int var_1_86 = -32;
signed short int var_1_87 = 20153;
unsigned long int var_1_88 = 2;
signed long int var_1_89 = 5;
signed long int var_1_91 = -32;
signed long int var_1_92 = 25;
unsigned long int var_1_93 = 16;
unsigned long int var_1_94 = 4;
double var_1_96 = 4.1;
double var_1_97 = 64.5;
double var_1_98 = 63.25;
double var_1_99 = 49.25;
signed short int var_1_100 = -2;
signed short int var_1_101 = 4;
unsigned char var_1_102 = 1;
signed char var_1_103 = -128;
float var_1_104 = 127.8;
unsigned long int var_1_105 = 1;
float var_1_106 = 24.625;
signed char var_1_107 = -8;
double var_1_108 = 127.75;
double var_1_109 = 10000000000000.8;
unsigned char var_1_110 = 10;
signed long int var_1_111 = 4;
unsigned short int var_1_112 = 0;
unsigned char var_1_113 = 50;
unsigned char var_1_114 = 128;
unsigned long int var_1_115 = 2;
unsigned char var_1_116 = 1;
signed long int var_1_117 = 0;
unsigned short int var_1_118 = 500;
unsigned char var_1_119 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
unsigned char last_1_var_1_9 = 1;
unsigned char last_1_var_1_29 = 0;
signed char last_1_var_1_30 = -16;
unsigned char last_1_var_1_43 = 1;
unsigned short int last_1_var_1_51 = 50;
signed short int last_1_var_1_56 = 0;
signed short int last_1_var_1_58 = 256;
unsigned char last_1_var_1_60 = 32;
unsigned char last_1_var_1_63 = 1;
unsigned char last_1_var_1_65 = 0;
unsigned short int last_1_var_1_73 = 64;
signed short int last_1_var_1_79 = -1;
float last_1_var_1_81 = 32.6;
unsigned long int last_1_var_1_83 = 4;
double last_1_var_1_84 = 31.5;
signed short int last_1_var_1_86 = -32;
signed long int last_1_var_1_92 = 25;
signed short int last_1_var_1_101 = 4;
unsigned long int last_1_var_1_105 = 1;
float last_1_var_1_106 = 24.625;
signed char last_1_var_1_107 = -8;
unsigned char last_1_var_1_110 = 10;
unsigned char last_1_var_1_114 = 128;
signed long int last_1_var_1_117 = 0;
unsigned short int last_1_var_1_118 = 500;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch17Amount500
	signed long int stepLocal_5 = var_1_25;
	if (((last_1_var_1_114 + last_1_var_1_101) + (var_1_26 + last_1_var_1_110)) == stepLocal_5) {
		var_1_32 = (max (last_1_var_1_118 , last_1_var_1_114));
	} else {
		var_1_32 = (abs (last_1_var_1_51));
	}


	// From: Req38Batch17Amount500
	var_1_91 = (max (last_1_var_1_92 , last_1_var_1_86));


	// From: Req21Batch17Amount500
	if (((last_1_var_1_83 ^ var_1_45) * (var_1_25 + -128)) >= last_1_var_1_107) {
		if (var_1_10) {
			var_1_60 = (min ((var_1_44 - var_1_55) , var_1_46));
		} else {
			var_1_60 = ((min (128 , (var_1_61 - var_1_62))) - var_1_55);
		}
	} else {
		if (var_1_14 > (last_1_var_1_84 / (max (0.5 , var_1_39)))) {
			var_1_60 = (max (((min (var_1_62 , var_1_55)) + var_1_46) , var_1_45));
		}
	}


	// From: Req37Batch17Amount500
	unsigned char stepLocal_27 = last_1_var_1_1;
	unsigned char stepLocal_26 = var_1_78;
	unsigned char stepLocal_25 = last_1_var_1_9;
	if (stepLocal_27 || var_1_64) {
		if (last_1_var_1_1 && stepLocal_25) {
			var_1_89 = (max (last_1_var_1_73 , (var_1_54 + var_1_62)));
		}
	} else {
		if ((var_1_45 - var_1_76) != stepLocal_26) {
			var_1_89 = ((var_1_75 + (var_1_45 - last_1_var_1_58)) + 2);
		}
	}


	// From: Req29Batch17Amount500
	unsigned char stepLocal_19 = 16.6 < (- last_1_var_1_106);
	if (last_1_var_1_1 || stepLocal_19) {
		var_1_77 = ((var_1_61 - var_1_62) - var_1_46);
	} else {
		if ((max ((var_1_36 + var_1_37) , var_1_70)) != last_1_var_1_81) {
			var_1_77 = ((var_1_54 + var_1_78) - var_1_62);
		}
	}


	// From: Req2Batch17Amount500
	if (last_1_var_1_56 < last_1_var_1_30) {
		var_1_9 = ((var_1_8 || (last_1_var_1_65 || var_1_10)) && var_1_11);
	} else {
		var_1_9 = (! var_1_11);
	}


	// From: Req27Batch17Amount500
	unsigned short int stepLocal_16 = var_1_52;
	unsigned char stepLocal_15 = var_1_36 < var_1_15;
	if (last_1_var_1_63 && stepLocal_15) {
		var_1_73 = ((min ((abs (10)) , (max (var_1_52 , var_1_61)))) + last_1_var_1_79);
	} else {
		if (stepLocal_16 == ((min (last_1_var_1_60 , var_1_54)) & (abs (last_1_var_1_105)))) {
			var_1_73 = ((min (var_1_52 , (var_1_57 - var_1_45))) + var_1_62);
		} else {
			var_1_73 = (min (var_1_62 , (var_1_54 + (max (last_1_var_1_79 , last_1_var_1_107)))));
		}
	}


	// From: Req19Batch17Amount500
	signed long int stepLocal_11 = var_1_25;
	if (4u <= stepLocal_11) {
		var_1_58 = (var_1_32 + (32 - var_1_73));
	}


	// From: Req12Batch17Amount500
	if ((var_1_14 - var_1_20) <= ((var_1_39 - var_1_40) - var_1_15)) {
		var_1_38 = (min (var_1_40 , var_1_36));
	} else {
		var_1_38 = (((var_1_41 - 255.8) - var_1_42) - var_1_20);
	}


	// From: Req20Batch17Amount500
	var_1_59 = (var_1_54 + var_1_55);


	// From: Req26Batch17Amount500
	var_1_69 = ((var_1_42 - var_1_70) + (var_1_71 - var_1_72));


	// From: Req42Batch17Amount500
	if (var_1_10) {
		var_1_101 = var_1_46;
	} else {
		var_1_101 = var_1_93;
	}


	// From: Req43Batch17Amount500
	var_1_102 = var_1_11;


	// From: Req44Batch17Amount500
	var_1_103 = var_1_93;


	// From: Req45Batch17Amount500
	var_1_104 = var_1_70;


	// From: Req47Batch17Amount500
	var_1_106 = 32.937f;


	// From: Req48Batch17Amount500
	var_1_107 = var_1_94;


	// From: Req49Batch17Amount500
	var_1_108 = var_1_109;


	// From: Req52Batch17Amount500
	var_1_112 = var_1_107;


	// From: Req53Batch17Amount500
	if (var_1_22) {
		var_1_113 = var_1_54;
	} else {
		var_1_113 = 10;
	}


	// From: Req54Batch17Amount500
	if (var_1_102) {
		var_1_114 = var_1_54;
	}


	// From: Req55Batch17Amount500
	var_1_115 = 16u;


	// From: Req56Batch17Amount500
	if (var_1_11) {
		var_1_116 = var_1_64;
	} else {
		var_1_116 = var_1_22;
	}


	// From: Req59Batch17Amount500
	var_1_119 = var_1_11;


	// From: Req17Batch17Amount500
	unsigned long int stepLocal_9 = (var_1_32 * var_1_32) + (var_1_112 - 25);
	if (var_1_59 < stepLocal_9) {
		var_1_53 = ((64 + var_1_54) - (max ((max (var_1_46 , 50)) , var_1_55)));
	}


	// From: Req46Batch17Amount500
	if (var_1_119) {
		var_1_105 = var_1_53;
	} else {
		var_1_105 = var_1_101;
	}


	// From: Req58Batch17Amount500
	var_1_118 = var_1_105;


	// From: Req31Batch17Amount500
	if ((max (last_1_var_1_81 , var_1_14)) <= var_1_41) {
		if (var_1_77 >= var_1_118) {
			var_1_81 = var_1_20;
		} else {
			var_1_81 = ((max (var_1_42 , var_1_37)) + (var_1_71 - var_1_72));
		}
	}


	// From: Req32Batch17Amount500
	signed long int stepLocal_20 = -16;
	if (stepLocal_20 <= var_1_58) {
		var_1_82 = (var_1_44 - var_1_62);
	}


	// From: Req5Batch17Amount500
	if (var_1_8) {
		var_1_21 = ((var_1_11 && var_1_10) && var_1_22);
	} else {
		var_1_21 = (var_1_102 || ((! var_1_23) && var_1_22));
	}


	// From: Req41Batch17Amount500
	var_1_100 = var_1_114;


	// From: Req50Batch17Amount500
	if (var_1_119) {
		var_1_110 = var_1_62;
	} else {
		var_1_110 = var_1_55;
	}


	// From: Req57Batch17Amount500
	if (var_1_102) {
		var_1_117 = var_1_100;
	} else {
		var_1_117 = (last_1_var_1_117 + ((var_1_75 + var_1_82) + last_1_var_1_117));
	}


	// From: Req8Batch17Amount500
	if (var_1_91 < (var_1_110 / var_1_25)) {
		var_1_30 = var_1_31;
	} else {
		var_1_30 = -8;
	}


	// From: Req25Batch17Amount500
	unsigned char stepLocal_14 = var_1_110;
	if (stepLocal_14 <= var_1_48) {
		var_1_68 = (var_1_37 + var_1_36);
	} else {
		if (var_1_20 <= (max (var_1_41 , var_1_81))) {
			var_1_68 = (min (var_1_36 , var_1_20));
		} else {
			var_1_68 = var_1_42;
		}
	}


	// From: Req13Batch17Amount500
	signed long int stepLocal_8 = var_1_73 % var_1_25;
	if (stepLocal_8 == ((var_1_31 | last_1_var_1_43) + var_1_100)) {
		var_1_43 = ((min (var_1_44 , var_1_45)) - var_1_46);
	}


	// From: Req3Batch17Amount500
	unsigned char stepLocal_1 = var_1_110;
	if (stepLocal_1 == (100 * var_1_82)) {
		var_1_12 = (max ((0.875 + (var_1_13 + 64.4)) , 1.0000000000000005E15));
	} else {
		var_1_12 = (max ((var_1_14 - var_1_15) , var_1_13));
	}


	// From: Req36Batch17Amount500
	if (var_1_23) {
		var_1_88 = var_1_110;
	} else {
		var_1_88 = ((var_1_48 - var_1_73) - (max (var_1_55 , var_1_110)));
	}


	// From: Req4Batch17Amount500
	signed long int stepLocal_2 = var_1_53 - (var_1_82 + var_1_110);
	if ((var_1_114 + var_1_89) != stepLocal_2) {
		var_1_16 = (abs (var_1_20 - var_1_15));
	} else {
		var_1_16 = var_1_14;
	}


	// From: Req11Batch17Amount500
	if ((var_1_14 + var_1_13) == (- var_1_15)) {
		if (var_1_100 > var_1_117) {
			if (-4 < var_1_26) {
				var_1_34 = var_1_20;
			} else {
				var_1_34 = (max (var_1_13 , (var_1_36 + var_1_37)));
			}
		}
	}


	// From: Req16Batch17Amount500
	if (var_1_10) {
		if (2.5f > (min ((var_1_40 - var_1_42) , var_1_39))) {
			var_1_51 = (min (var_1_44 , var_1_45));
		} else {
			var_1_51 = (min ((var_1_46 + (var_1_52 - var_1_110)) , (abs (var_1_45))));
		}
	}


	// From: Req23Batch17Amount500
	signed long int stepLocal_13 = var_1_53 / var_1_25;
	unsigned long int stepLocal_12 = (var_1_113 / var_1_25) * var_1_88;
	if (var_1_57 != stepLocal_12) {
		if ((var_1_60 + var_1_45) >= stepLocal_13) {
			var_1_65 = var_1_10;
		}
	} else {
		var_1_65 = (var_1_116 && var_1_8);
	}


	// From: Req40Batch17Amount500
	unsigned char stepLocal_33 = var_1_78;
	unsigned char stepLocal_32 = var_1_45;
	if (var_1_100 != stepLocal_33) {
		var_1_96 = ((var_1_85 + (var_1_97 - var_1_98)) + (0.625 - var_1_71));
	} else {
		if (stepLocal_32 >= (- var_1_51)) {
			if (var_1_85 == (var_1_72 - var_1_14)) {
				if (var_1_65) {
					var_1_96 = 8.5;
				} else {
					var_1_96 = var_1_98;
				}
			} else {
				var_1_96 = var_1_99;
			}
		}
	}


	// From: Req18Batch17Amount500
	unsigned char stepLocal_10 = var_1_21;
	if ((var_1_77 != var_1_46) || stepLocal_10) {
		var_1_56 = (var_1_43 - (var_1_57 - var_1_45));
	} else {
		var_1_56 = var_1_89;
	}


	// From: Req51Batch17Amount500
	if (var_1_9) {
		var_1_111 = var_1_43;
	}


	// From: Req6Batch17Amount500
	signed long int stepLocal_4 = -50;
	unsigned short int stepLocal_3 = var_1_73;
	if (stepLocal_3 == (-1 / var_1_25)) {
		if (var_1_82 > stepLocal_4) {
			var_1_24 = (((var_1_26 - var_1_51) - var_1_73) + -256);
		}
	} else {
		var_1_24 = (abs (var_1_51 + var_1_73));
	}


	// From: Req33Batch17Amount500
	signed long int stepLocal_21 = max (-256 , var_1_59);
	if (((var_1_111 + var_1_62) << var_1_57) >= stepLocal_21) {
		var_1_83 = (min (last_1_var_1_83 , ((var_1_48 - var_1_118) - var_1_46)));
	}


	// From: Req39Batch17Amount500
	unsigned char stepLocal_31 = var_1_54;
	signed long int stepLocal_30 = -256;
	unsigned char stepLocal_29 = var_1_113;
	unsigned char stepLocal_28 = var_1_10;
	if (stepLocal_30 >= (min (var_1_73 , (min (var_1_82 , var_1_52))))) {
		if (stepLocal_29 < 10u) {
			var_1_92 = (max (var_1_100 , var_1_77));
		} else {
			var_1_92 = (var_1_112 + var_1_83);
		}
	} else {
		if (((var_1_48 - var_1_61) * (var_1_78 * var_1_112)) < stepLocal_31) {
			var_1_92 = (var_1_78 + (var_1_89 + (min (var_1_87 , var_1_113))));
		} else {
			if (stepLocal_28 || (var_1_102 && var_1_9)) {
				var_1_92 = (max (var_1_53 , var_1_59));
			}
		}
	}


	// From: Req30Batch17Amount500
	if ((var_1_25 / (abs (var_1_61))) == var_1_92) {
		var_1_79 = (var_1_54 + var_1_78);
	} else {
		var_1_79 = (min ((var_1_62 + (var_1_91 + var_1_45)) , 5));
	}


	// From: Req14Batch17Amount500
	if (var_1_68 < var_1_13) {
		var_1_47 = (var_1_110 + var_1_26);
	} else {
		if ((min ((min (var_1_110 , var_1_43)) , 2)) >= var_1_56) {
			var_1_47 = ((var_1_48 - var_1_46) - var_1_79);
		} else {
			var_1_47 = (var_1_114 + var_1_43);
		}
	}


	// From: Req35Batch17Amount500
	unsigned char stepLocal_24 = (var_1_77 * var_1_25) >= var_1_53;
	unsigned long int stepLocal_23 = min (var_1_76 , var_1_47);
	if (stepLocal_24 || var_1_21) {
		if (var_1_9) {
			var_1_86 = (max (var_1_100 , ((32 - var_1_114) + var_1_53)));
		} else {
			var_1_86 = (var_1_46 + var_1_54);
		}
	} else {
		if (var_1_9) {
			var_1_86 = (var_1_46 + (max (var_1_75 , var_1_100)));
		} else {
			if (stepLocal_23 > (var_1_32 - var_1_59)) {
				var_1_86 = ((var_1_47 + var_1_54) + var_1_77);
			} else {
				var_1_86 = (((max (var_1_57 , var_1_87)) - var_1_32) - (min ((var_1_54 + var_1_44) , var_1_114)));
			}
		}
	}


	// From: Req10Batch17Amount500
	signed long int stepLocal_7 = (var_1_26 & var_1_92) + var_1_82;
	signed long int stepLocal_6 = -128;
	if (var_1_31 <= stepLocal_6) {
		if (! (var_1_96 > var_1_14)) {
			var_1_33 = var_1_20;
		} else {
			if (stepLocal_7 < -256) {
				var_1_33 = var_1_14;
			} else {
				var_1_33 = var_1_20;
			}
		}
	} else {
		var_1_33 = var_1_14;
	}


	// From: Req15Batch17Amount500
	if ((var_1_108 * 1.7f) > (- var_1_33)) {
		var_1_50 = (var_1_73 + (var_1_45 - var_1_118));
	}


	// From: Req28Batch17Amount500
	unsigned long int stepLocal_18 = var_1_32;
	unsigned char stepLocal_17 = (var_1_50 % var_1_54) <= (abs (var_1_45));
	if ((16.8 != var_1_69) || stepLocal_17) {
		var_1_74 = var_1_61;
	} else {
		if (var_1_73 <= stepLocal_18) {
			var_1_74 = ((max (var_1_62 , var_1_75)) - var_1_76);
		} else {
			var_1_74 = var_1_31;
		}
	}


	// From: Req7Batch17Amount500
	if ((var_1_60 >= var_1_82) || (var_1_25 > var_1_56)) {
		if (127.1 == (var_1_20 + var_1_15)) {
			if (var_1_47 < (min (var_1_114 , var_1_58))) {
				var_1_29 = (((var_1_15 != var_1_13) || last_1_var_1_29) || var_1_22);
			} else {
				var_1_29 = var_1_8;
			}
		} else {
			var_1_29 = var_1_8;
		}
	}


	// From: Req22Batch17Amount500
	if ((min (var_1_61 , var_1_74)) <= 16) {
		if ((5 > var_1_62) && var_1_119) {
			if ((var_1_54 < var_1_60) || var_1_8) {
				var_1_63 = 0;
			} else {
				var_1_63 = (((var_1_89 % var_1_57) <= var_1_60) && var_1_8);
			}
		} else {
			if (var_1_12 <= (- var_1_12)) {
				var_1_63 = (var_1_8 && var_1_23);
			} else {
				if (var_1_57 >= (var_1_31 * var_1_26)) {
					if (! (var_1_56 == var_1_62)) {
						var_1_63 = (! 0);
					} else {
						var_1_63 = (! (! var_1_8));
					}
				} else {
					var_1_63 = (var_1_22 && ((var_1_23 || var_1_8) || var_1_64));
				}
			}
		}
	} else {
		var_1_63 = var_1_23;
	}


	// From: Req34Batch17Amount500
	unsigned char stepLocal_22 = (var_1_110 > var_1_56) && var_1_23;
	if (stepLocal_22 && (var_1_11 && var_1_63)) {
		var_1_84 = var_1_41;
	} else {
		if (var_1_36 != (- (var_1_33 * 4.8))) {
			var_1_84 = (5.2 + (max ((var_1_13 + var_1_85) , var_1_70)));
		}
	}


	// From: Req24Batch17Amount500
	if (var_1_63 || ((var_1_54 >> var_1_57) > (var_1_59 - var_1_82))) {
		if (var_1_63) {
			var_1_67 = var_1_73;
		}
	} else {
		var_1_67 = var_1_24;
	}


	// From: Req1Batch17Amount500
	unsigned char stepLocal_0 = (var_1_67 | var_1_24) <= var_1_67;
	if (stepLocal_0 || ((min (var_1_43 , var_1_50)) > var_1_83)) {
		var_1_1 = ((! 1) && ((var_1_67 < var_1_24) && var_1_8));
	} else {
		var_1_1 = 1;
	}
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -230584.3009213691390e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691390e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	assume_abort_if_not(var_1_25 != 0);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= 536870911);
	assume_abort_if_not(var_1_26 <= 1073741823);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -461168.6018427382800e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -461168.6018427382800e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 4611686.018427387900e+12F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427387900e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 6917529.027641073700e+12F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 127);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 127);
	assume_abort_if_not(var_1_45 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 3221225470);
	assume_abort_if_not(var_1_48 <= 4294967294);
	var_1_52 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_52 >= 16383);
	assume_abort_if_not(var_1_52 <= 32767);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 64);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 127);
	var_1_57 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_57 >= 16383);
	assume_abort_if_not(var_1_57 <= 32766);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 190);
	assume_abort_if_not(var_1_61 <= 254);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 63);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 0);
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427382800e+12F && var_1_70 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427382800e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427382800e+12F && var_1_72 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= -1);
	assume_abort_if_not(var_1_75 <= 126);
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 126);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 64);
	assume_abort_if_not(var_1_78 <= 127);
	var_1_85 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_85 >= -230584.3009213691390e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 2305843.009213691390e+12F && var_1_85 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_87 >= 16382);
	assume_abort_if_not(var_1_87 <= 32766);
	var_1_93 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_93 >= 16);
	assume_abort_if_not(var_1_93 <= 33);
	var_1_94 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 16);
	var_1_97 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_97 >= 0.0F && var_1_97 <= -1.0e-20F) || (var_1_97 <= 2305843.009213691390e+12F && var_1_97 >= 1.0e-20F ));
	var_1_98 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_98 >= 0.0F && var_1_98 <= -1.0e-20F) || (var_1_98 <= 2305843.009213691390e+12F && var_1_98 >= 1.0e-20F ));
	var_1_99 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_99 >= -922337.2036854765600e+13F && var_1_99 <= -1.0e-20F) || (var_1_99 <= 9223372.036854765600e+12F && var_1_99 >= 1.0e-20F ));
	var_1_109 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_109 >= -922337.2036854765600e+13F && var_1_109 <= -1.0e-20F) || (var_1_109 <= 9223372.036854765600e+12F && var_1_109 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_105 = var_1_105;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_110 = var_1_110;
	last_1_var_1_114 = var_1_114;
	last_1_var_1_117 = var_1_117;
	last_1_var_1_118 = var_1_118;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_67 | var_1_24) <= var_1_67) || ((min (var_1_43 , var_1_50)) > var_1_83)) ? (var_1_1 == ((unsigned char) ((! 1) && ((var_1_67 < var_1_24) && var_1_8)))) : (var_1_1 == ((unsigned char) 1))) && ((last_1_var_1_56 < last_1_var_1_30) ? (var_1_9 == ((unsigned char) ((var_1_8 || (last_1_var_1_65 || var_1_10)) && var_1_11))) : (var_1_9 == ((unsigned char) (! var_1_11))))) && ((var_1_110 == (100 * var_1_82)) ? (var_1_12 == ((double) (max ((0.875 + (var_1_13 + 64.4)) , 1.0000000000000005E15)))) : (var_1_12 == ((double) (max ((var_1_14 - var_1_15) , var_1_13)))))) && (((var_1_114 + var_1_89) != (var_1_53 - (var_1_82 + var_1_110))) ? (var_1_16 == ((float) (abs (var_1_20 - var_1_15)))) : (var_1_16 == ((float) var_1_14)))) && (var_1_8 ? (var_1_21 == ((unsigned char) ((var_1_11 && var_1_10) && var_1_22))) : (var_1_21 == ((unsigned char) (var_1_102 || ((! var_1_23) && var_1_22)))))) && ((var_1_73 == (-1 / var_1_25)) ? ((var_1_82 > -50) ? (var_1_24 == ((signed long int) (((var_1_26 - var_1_51) - var_1_73) + -256))) : 1) : (var_1_24 == ((signed long int) (abs (var_1_51 + var_1_73)))))) && (((var_1_60 >= var_1_82) || (var_1_25 > var_1_56)) ? ((127.1 == (var_1_20 + var_1_15)) ? ((var_1_47 < (min (var_1_114 , var_1_58))) ? (var_1_29 == ((unsigned char) (((var_1_15 != var_1_13) || last_1_var_1_29) || var_1_22))) : (var_1_29 == ((unsigned char) var_1_8))) : (var_1_29 == ((unsigned char) var_1_8))) : 1)) && ((var_1_91 < (var_1_110 / var_1_25)) ? (var_1_30 == ((signed char) var_1_31)) : (var_1_30 == ((signed char) -8)))) && ((((last_1_var_1_114 + last_1_var_1_101) + (var_1_26 + last_1_var_1_110)) == var_1_25) ? (var_1_32 == ((unsigned long int) (max (last_1_var_1_118 , last_1_var_1_114)))) : (var_1_32 == ((unsigned long int) (abs (last_1_var_1_51)))))) && ((var_1_31 <= -128) ? ((! (var_1_96 > var_1_14)) ? (var_1_33 == ((double) var_1_20)) : ((((var_1_26 & var_1_92) + var_1_82) < -256) ? (var_1_33 == ((double) var_1_14)) : (var_1_33 == ((double) var_1_20)))) : (var_1_33 == ((double) var_1_14)))) && (((var_1_14 + var_1_13) == (- var_1_15)) ? ((var_1_100 > var_1_117) ? ((-4 < var_1_26) ? (var_1_34 == ((double) var_1_20)) : (var_1_34 == ((double) (max (var_1_13 , (var_1_36 + var_1_37)))))) : 1) : 1)) && (((var_1_14 - var_1_20) <= ((var_1_39 - var_1_40) - var_1_15)) ? (var_1_38 == ((double) (min (var_1_40 , var_1_36)))) : (var_1_38 == ((double) (((var_1_41 - 255.8) - var_1_42) - var_1_20))))) && (((var_1_73 % var_1_25) == ((var_1_31 | last_1_var_1_43) + var_1_100)) ? (var_1_43 == ((unsigned char) ((min (var_1_44 , var_1_45)) - var_1_46))) : 1)) && ((var_1_68 < var_1_13) ? (var_1_47 == ((unsigned long int) (var_1_110 + var_1_26))) : (((min ((min (var_1_110 , var_1_43)) , 2)) >= var_1_56) ? (var_1_47 == ((unsigned long int) ((var_1_48 - var_1_46) - var_1_79))) : (var_1_47 == ((unsigned long int) (var_1_114 + var_1_43)))))) && (((var_1_108 * 1.7f) > (- var_1_33)) ? (var_1_50 == ((signed short int) (var_1_73 + (var_1_45 - var_1_118)))) : 1)) && (var_1_10 ? ((2.5f > (min ((var_1_40 - var_1_42) , var_1_39))) ? (var_1_51 == ((unsigned short int) (min (var_1_44 , var_1_45)))) : (var_1_51 == ((unsigned short int) (min ((var_1_46 + (var_1_52 - var_1_110)) , (abs (var_1_45))))))) : 1)) && ((var_1_59 < ((var_1_32 * var_1_32) + (var_1_112 - 25))) ? (var_1_53 == ((unsigned char) ((64 + var_1_54) - (max ((max (var_1_46 , 50)) , var_1_55))))) : 1)) && (((var_1_77 != var_1_46) || var_1_21) ? (var_1_56 == ((signed short int) (var_1_43 - (var_1_57 - var_1_45)))) : (var_1_56 == ((signed short int) var_1_89)))) && ((4u <= var_1_25) ? (var_1_58 == ((signed short int) (var_1_32 + (32 - var_1_73)))) : 1)) && (var_1_59 == ((unsigned char) (var_1_54 + var_1_55)))) && ((((last_1_var_1_83 ^ var_1_45) * (var_1_25 + -128)) >= last_1_var_1_107) ? (var_1_10 ? (var_1_60 == ((unsigned char) (min ((var_1_44 - var_1_55) , var_1_46)))) : (var_1_60 == ((unsigned char) ((min (128 , (var_1_61 - var_1_62))) - var_1_55)))) : ((var_1_14 > (last_1_var_1_84 / (max (0.5 , var_1_39)))) ? (var_1_60 == ((unsigned char) (max (((min (var_1_62 , var_1_55)) + var_1_46) , var_1_45)))) : 1))) && (((min (var_1_61 , var_1_74)) <= 16) ? (((5 > var_1_62) && var_1_119) ? (((var_1_54 < var_1_60) || var_1_8) ? (var_1_63 == ((unsigned char) 0)) : (var_1_63 == ((unsigned char) (((var_1_89 % var_1_57) <= var_1_60) && var_1_8)))) : ((var_1_12 <= (- var_1_12)) ? (var_1_63 == ((unsigned char) (var_1_8 && var_1_23))) : ((var_1_57 >= (var_1_31 * var_1_26)) ? ((! (var_1_56 == var_1_62)) ? (var_1_63 == ((unsigned char) (! 0))) : (var_1_63 == ((unsigned char) (! (! var_1_8))))) : (var_1_63 == ((unsigned char) (var_1_22 && ((var_1_23 || var_1_8) || var_1_64))))))) : (var_1_63 == ((unsigned char) var_1_23)))) && ((var_1_57 != ((var_1_113 / var_1_25) * var_1_88)) ? (((var_1_60 + var_1_45) >= (var_1_53 / var_1_25)) ? (var_1_65 == ((unsigned char) var_1_10)) : 1) : (var_1_65 == ((unsigned char) (var_1_116 && var_1_8))))) && ((var_1_63 || ((var_1_54 >> var_1_57) > (var_1_59 - var_1_82))) ? (var_1_63 ? (var_1_67 == ((signed short int) var_1_73)) : 1) : (var_1_67 == ((signed short int) var_1_24)))) && ((var_1_110 <= var_1_48) ? (var_1_68 == ((float) (var_1_37 + var_1_36))) : ((var_1_20 <= (max (var_1_41 , var_1_81))) ? (var_1_68 == ((float) (min (var_1_36 , var_1_20)))) : (var_1_68 == ((float) var_1_42))))) && (var_1_69 == ((double) ((var_1_42 - var_1_70) + (var_1_71 - var_1_72))))) && ((last_1_var_1_63 && (var_1_36 < var_1_15)) ? (var_1_73 == ((unsigned short int) ((min ((abs (10)) , (max (var_1_52 , var_1_61)))) + last_1_var_1_79))) : ((var_1_52 == ((min (last_1_var_1_60 , var_1_54)) & (abs (last_1_var_1_105)))) ? (var_1_73 == ((unsigned short int) ((min (var_1_52 , (var_1_57 - var_1_45))) + var_1_62))) : (var_1_73 == ((unsigned short int) (min (var_1_62 , (var_1_54 + (max (last_1_var_1_79 , last_1_var_1_107)))))))))) && (((16.8 != var_1_69) || ((var_1_50 % var_1_54) <= (abs (var_1_45)))) ? (var_1_74 == ((signed char) var_1_61)) : ((var_1_73 <= var_1_32) ? (var_1_74 == ((signed char) ((max (var_1_62 , var_1_75)) - var_1_76))) : (var_1_74 == ((signed char) var_1_31))))) && ((last_1_var_1_1 || (16.6 < (- last_1_var_1_106))) ? (var_1_77 == ((unsigned char) ((var_1_61 - var_1_62) - var_1_46))) : (((max ((var_1_36 + var_1_37) , var_1_70)) != last_1_var_1_81) ? (var_1_77 == ((unsigned char) ((var_1_54 + var_1_78) - var_1_62))) : 1))) && (((var_1_25 / (abs (var_1_61))) == var_1_92) ? (var_1_79 == ((signed short int) (var_1_54 + var_1_78))) : (var_1_79 == ((signed short int) (min ((var_1_62 + (var_1_91 + var_1_45)) , 5)))))) && (((max (last_1_var_1_81 , var_1_14)) <= var_1_41) ? ((var_1_77 >= var_1_118) ? (var_1_81 == ((float) var_1_20)) : (var_1_81 == ((float) ((max (var_1_42 , var_1_37)) + (var_1_71 - var_1_72))))) : 1)) && ((-16 <= var_1_58) ? (var_1_82 == ((unsigned char) (var_1_44 - var_1_62))) : 1)) && ((((var_1_111 + var_1_62) << var_1_57) >= (max (-256 , var_1_59))) ? (var_1_83 == ((unsigned long int) (min (last_1_var_1_83 , ((var_1_48 - var_1_118) - var_1_46))))) : 1)) && ((((var_1_110 > var_1_56) && var_1_23) && (var_1_11 && var_1_63)) ? (var_1_84 == ((double) var_1_41)) : ((var_1_36 != (- (var_1_33 * 4.8))) ? (var_1_84 == ((double) (5.2 + (max ((var_1_13 + var_1_85) , var_1_70))))) : 1))) && ((((var_1_77 * var_1_25) >= var_1_53) || var_1_21) ? (var_1_9 ? (var_1_86 == ((signed short int) (max (var_1_100 , ((32 - var_1_114) + var_1_53))))) : (var_1_86 == ((signed short int) (var_1_46 + var_1_54)))) : (var_1_9 ? (var_1_86 == ((signed short int) (var_1_46 + (max (var_1_75 , var_1_100))))) : (((min (var_1_76 , var_1_47)) > (var_1_32 - var_1_59)) ? (var_1_86 == ((signed short int) ((var_1_47 + var_1_54) + var_1_77))) : (var_1_86 == ((signed short int) (((max (var_1_57 , var_1_87)) - var_1_32) - (min ((var_1_54 + var_1_44) , var_1_114))))))))) && (var_1_23 ? (var_1_88 == ((unsigned long int) var_1_110)) : (var_1_88 == ((unsigned long int) ((var_1_48 - var_1_73) - (max (var_1_55 , var_1_110))))))) && ((last_1_var_1_1 || var_1_64) ? ((last_1_var_1_1 && last_1_var_1_9) ? (var_1_89 == ((signed long int) (max (last_1_var_1_73 , (var_1_54 + var_1_62))))) : 1) : (((var_1_45 - var_1_76) != var_1_78) ? (var_1_89 == ((signed long int) ((var_1_75 + (var_1_45 - last_1_var_1_58)) + 2))) : 1))) && (var_1_91 == ((signed long int) (max (last_1_var_1_92 , last_1_var_1_86))))) && ((-256 >= (min (var_1_73 , (min (var_1_82 , var_1_52))))) ? ((var_1_113 < 10u) ? (var_1_92 == ((signed long int) (max (var_1_100 , var_1_77)))) : (var_1_92 == ((signed long int) (var_1_112 + var_1_83)))) : ((((var_1_48 - var_1_61) * (var_1_78 * var_1_112)) < var_1_54) ? (var_1_92 == ((signed long int) (var_1_78 + (var_1_89 + (min (var_1_87 , var_1_113)))))) : ((var_1_10 || (var_1_102 && var_1_9)) ? (var_1_92 == ((signed long int) (max (var_1_53 , var_1_59)))) : 1)))) && ((var_1_100 != var_1_78) ? (var_1_96 == ((double) ((var_1_85 + (var_1_97 - var_1_98)) + (0.625 - var_1_71)))) : ((var_1_45 >= (- var_1_51)) ? ((var_1_85 == (var_1_72 - var_1_14)) ? (var_1_65 ? (var_1_96 == ((double) 8.5)) : (var_1_96 == ((double) var_1_98))) : (var_1_96 == ((double) var_1_99))) : 1))) && (var_1_100 == ((signed short int) var_1_114))) && (var_1_10 ? (var_1_101 == ((signed short int) var_1_46)) : (var_1_101 == ((signed short int) var_1_93)))) && (var_1_102 == ((unsigned char) var_1_11))) && (var_1_103 == ((signed char) var_1_93))) && (var_1_104 == ((float) var_1_70))) && (var_1_119 ? (var_1_105 == ((unsigned long int) var_1_53)) : (var_1_105 == ((unsigned long int) var_1_101)))) && (var_1_106 == ((float) 32.937f))) && (var_1_107 == ((signed char) var_1_94))) && (var_1_108 == ((double) var_1_109))) && (var_1_119 ? (var_1_110 == ((unsigned char) var_1_62)) : (var_1_110 == ((unsigned char) var_1_55)))) && (var_1_9 ? (var_1_111 == ((signed long int) var_1_43)) : 1)) && (var_1_112 == ((unsigned short int) var_1_107))) && (var_1_22 ? (var_1_113 == ((unsigned char) var_1_54)) : (var_1_113 == ((unsigned char) 10)))) && (var_1_102 ? (var_1_114 == ((unsigned char) var_1_54)) : 1)) && (var_1_115 == ((unsigned long int) 16u))) && (var_1_11 ? (var_1_116 == ((unsigned char) var_1_64)) : (var_1_116 == ((unsigned char) var_1_22)))) && (var_1_102 ? (var_1_117 == ((signed long int) var_1_100)) : (var_1_117 == ((signed long int) (last_1_var_1_117 + ((var_1_75 + var_1_82) + last_1_var_1_117)))))) && (var_1_118 == ((unsigned short int) var_1_105))) && (var_1_119 == ((unsigned char) var_1_11))
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
