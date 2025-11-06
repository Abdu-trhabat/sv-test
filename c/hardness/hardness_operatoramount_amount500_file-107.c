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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch107Amount500.c", 13, "reach_error"); }
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
signed short int var_1_1 = -1;
signed long int var_1_2 = 2;
signed long int var_1_3 = 4;
signed short int var_1_6 = 4;
signed short int var_1_7 = 10;
signed short int var_1_8 = 200;
signed short int var_1_9 = -4;
unsigned short int var_1_10 = 5;
signed long int var_1_11 = -64;
signed short int var_1_12 = 2;
unsigned long int var_1_13 = 4;
unsigned char var_1_17 = 2;
signed short int var_1_18 = 17608;
unsigned char var_1_19 = 64;
unsigned char var_1_20 = 100;
unsigned char var_1_21 = 4;
double var_1_22 = 255.4;
double var_1_23 = 255.45;
signed char var_1_24 = 4;
float var_1_25 = 999999999999.836;
unsigned char var_1_26 = 128;
float var_1_27 = 1.75;
float var_1_28 = 9.4;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 128;
unsigned char var_1_31 = 16;
unsigned char var_1_32 = 236;
unsigned char var_1_33 = 0;
unsigned long int var_1_34 = 3265521927;
unsigned char var_1_35 = 1;
float var_1_36 = 16.8;
float var_1_37 = 24.25;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
signed long int var_1_40 = 4;
signed long int var_1_41 = 1432370017;
float var_1_42 = 50.2;
float var_1_44 = 2.4;
float var_1_45 = 0.5;
float var_1_46 = 127.6;
unsigned char var_1_47 = 10;
float var_1_48 = 7.4;
float var_1_49 = 8.5;
float var_1_50 = 24.5;
float var_1_51 = 8.25;
float var_1_52 = 128.6;
float var_1_53 = 31.25;
float var_1_54 = 9.75;
unsigned char var_1_55 = 0;
unsigned long int var_1_56 = 10000000;
unsigned short int var_1_57 = 256;
double var_1_58 = 63.5;
unsigned short int var_1_59 = 41581;
signed long int var_1_60 = -1;
float var_1_61 = 3.4;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 1;
signed char var_1_66 = -1;
signed char var_1_67 = 4;
signed char var_1_68 = 16;
signed char var_1_69 = 0;
unsigned char var_1_70 = 1;
unsigned short int var_1_71 = 1;
unsigned short int var_1_72 = 44724;
unsigned short int var_1_73 = 4;
unsigned short int var_1_74 = 21111;
unsigned char var_1_75 = 1;
signed char var_1_76 = -25;
signed char var_1_77 = 4;
signed char var_1_78 = 16;
double var_1_79 = 127.4;
unsigned char var_1_80 = 0;
signed char var_1_81 = 5;
unsigned long int var_1_82 = 100000000;
unsigned long int var_1_83 = 1000000000;
unsigned long int var_1_84 = 1570116589;
unsigned long int var_1_85 = 32;
unsigned long int var_1_86 = 1000000000;
double var_1_87 = 127.6;
double var_1_88 = 3.97;
unsigned long int var_1_89 = 4;
signed short int var_1_90 = 5;
signed char var_1_91 = -16;
unsigned char var_1_92 = 4;
unsigned char var_1_93 = 32;
unsigned char var_1_94 = 32;
unsigned char var_1_95 = 4;
signed short int var_1_96 = -8;
signed short int var_1_97 = 23375;
unsigned long int var_1_98 = 64;
unsigned long int var_1_99 = 3551997280;
unsigned long int var_1_100 = 8;
unsigned long int var_1_101 = 1;
unsigned long int var_1_102 = 10;
signed char var_1_103 = 32;
double var_1_104 = 32.2;
unsigned char var_1_105 = 0;
double var_1_106 = 25.5;
unsigned char var_1_107 = 0;
float var_1_108 = 128.4;
unsigned long int var_1_109 = 100;
signed long int var_1_110 = 32;
unsigned long int var_1_111 = 50;
unsigned char var_1_112 = 10;
unsigned short int var_1_113 = 256;
float var_1_114 = 100000000000.4;
double var_1_115 = 8.5;
double var_1_116 = 0.19999999999999996;
unsigned long int var_1_117 = 32;
unsigned long int var_1_118 = 0;
unsigned short int var_1_119 = 2;
unsigned short int var_1_120 = 25504;
signed short int var_1_121 = -10;
signed char var_1_122 = -32;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -1;
unsigned long int last_1_var_1_56 = 10000000;
unsigned char last_1_var_1_62 = 0;
unsigned char last_1_var_1_70 = 1;
unsigned short int last_1_var_1_71 = 1;
signed short int last_1_var_1_96 = -8;
signed long int last_1_var_1_110 = 32;
unsigned long int last_1_var_1_111 = 50;
unsigned long int last_1_var_1_117 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req32Batch107Amount500
	unsigned long int stepLocal_19 = (max (last_1_var_1_111 , last_1_var_1_117)) | var_1_69;
	if (last_1_var_1_70) {
		if (stepLocal_19 > var_1_30) {
			var_1_87 = (min ((var_1_53 - var_1_88) , (max (var_1_45 , var_1_50))));
		} else {
			var_1_87 = (var_1_52 - var_1_45);
		}
	}


	// From: Req31Batch107Amount500
	signed short int stepLocal_18 = var_1_18;
	signed long int stepLocal_17 = 5 * (var_1_26 * var_1_69);
	if (! (var_1_74 >= var_1_30)) {
		if (stepLocal_18 > (last_1_var_1_110 + (last_1_var_1_96 * last_1_var_1_1))) {
			var_1_82 = (var_1_20 + (var_1_41 - (var_1_83 - var_1_68)));
		} else {
			if (last_1_var_1_62) {
				var_1_82 = ((var_1_41 + var_1_84) - last_1_var_1_56);
			} else {
				var_1_82 = (min (var_1_30 , ((3707604542u - var_1_10) - var_1_8)));
			}
		}
	} else {
		if (stepLocal_17 > var_1_30) {
			var_1_82 = (2226315111u - var_1_85);
		} else {
			var_1_82 = (((var_1_86 - var_1_12) + var_1_8) + var_1_84);
		}
	}


	// From: Req18Batch107Amount500
	unsigned long int stepLocal_10 = var_1_82;
	if (stepLocal_10 < (var_1_7 % (min (var_1_41 , var_1_34)))) {
		var_1_56 = var_1_12;
	} else {
		var_1_56 = (var_1_7 + var_1_19);
	}


	// From: Req38Batch107Amount500
	if (var_1_8 < (var_1_10 - var_1_30)) {
		var_1_98 = (max ((var_1_99 - (var_1_84 - var_1_93)) , var_1_73));
	} else {
		if (var_1_69 != var_1_20) {
			var_1_98 = (abs (var_1_8));
		} else {
			var_1_98 = (min (var_1_100 , var_1_82));
		}
	}


	// From: Req4Batch107Amount500
	signed short int stepLocal_2 = var_1_9;
	if (stepLocal_2 <= ((var_1_18 - var_1_8) << 5)) {
		var_1_17 = (abs (var_1_12));
	} else {
		var_1_17 = (min ((200 - var_1_10) , ((var_1_19 + var_1_20) - var_1_12)));
	}


	// From: Req5Batch107Amount500
	signed long int stepLocal_3 = var_1_3 * var_1_18;
	if (var_1_82 >= stepLocal_3) {
		var_1_21 = (abs (var_1_20));
	}


	// From: Req6Batch107Amount500
	var_1_22 = var_1_23;


	// From: Req7Batch107Amount500
	var_1_24 = (var_1_12 + var_1_10);


	// From: Req8Batch107Amount500
	if ((var_1_26 - var_1_10) < var_1_56) {
		var_1_25 = (var_1_27 + (min ((min (3.45f , 255.8f)) , var_1_28)));
	}


	// From: Req16Batch107Amount500
	if (var_1_38) {
		var_1_54 = (max (var_1_53 , var_1_27));
	}


	// From: Req17Batch107Amount500
	if (var_1_39) {
		var_1_55 = (max (1 , var_1_30));
	}


	// From: Req21Batch107Amount500
	if (var_1_38) {
		var_1_61 = (var_1_27 + var_1_28);
	} else {
		var_1_61 = (var_1_28 + var_1_49);
	}


	// From: Req23Batch107Amount500
	if (var_1_28 < (5.6f * var_1_46)) {
		var_1_66 = (max (var_1_32 , (var_1_10 + (var_1_12 + var_1_67))));
	} else {
		if ((var_1_53 - var_1_36) <= var_1_46) {
			var_1_66 = (var_1_10 + var_1_67);
		} else {
			var_1_66 = ((max ((max (5 , 100)) , (var_1_68 + var_1_12))) - (max (var_1_69 , var_1_10)));
		}
	}


	// From: Req29Batch107Amount500
	if (49.875 <= (var_1_36 - var_1_52)) {
		var_1_80 = (var_1_35 || (! var_1_38));
	} else {
		var_1_80 = (! ((var_1_65 || var_1_63) && var_1_64));
	}


	// From: Req30Batch107Amount500
	var_1_81 = ((abs (-2)) + var_1_78);


	// From: Req33Batch107Amount500
	var_1_89 = var_1_78;


	// From: Req34Batch107Amount500
	if (var_1_23 > 7.5) {
		var_1_90 = var_1_9;
	}


	// From: Req37Batch107Amount500
	if (var_1_39) {
		var_1_96 = ((max (var_1_6 , (var_1_97 - var_1_93))) - var_1_26);
	}


	// From: Req39Batch107Amount500
	var_1_101 = (max (var_1_8 , ((max (var_1_26 , var_1_102)) + var_1_83)));


	// From: Req41Batch107Amount500
	unsigned long int stepLocal_23 = var_1_102;
	if (var_1_12 == stepLocal_23) {
		var_1_104 = (abs (var_1_49 + var_1_27));
	} else {
		var_1_104 = var_1_53;
	}


	// From: Req43Batch107Amount500
	if (var_1_64) {
		var_1_108 = var_1_51;
	} else {
		var_1_108 = var_1_28;
	}


	// From: Req44Batch107Amount500
	var_1_109 = 256u;


	// From: Req45Batch107Amount500
	var_1_110 = var_1_69;


	// From: Req46Batch107Amount500
	var_1_111 = var_1_101;


	// From: Req49Batch107Amount500
	var_1_114 = var_1_88;


	// From: Req52Batch107Amount500
	if (var_1_38) {
		var_1_118 = var_1_7;
	} else {
		var_1_118 = var_1_96;
	}


	// From: Req55Batch107Amount500
	var_1_122 = var_1_68;


	// From: Req1Batch107Amount500
	if ((var_1_2 - var_1_3) > ((var_1_101 * -256) + var_1_82)) {
		var_1_1 = (max ((var_1_6 - (var_1_7 + var_1_8)) , var_1_9));
	} else {
		if (500 >= (var_1_7 >> var_1_10)) {
			var_1_1 = ((min (var_1_10 , var_1_8)) + (max (var_1_7 , 0)));
		} else {
			if (var_1_6 < 64) {
				var_1_1 = ((32 - var_1_7) + var_1_8);
			}
		}
	}


	// From: Req2Batch107Amount500
	if (((2102649480 - 25) >> (min (var_1_10 , var_1_12))) <= var_1_96) {
		var_1_11 = (var_1_12 + var_1_7);
	}


	// From: Req12Batch107Amount500
	if (((min (var_1_36 , 1.0000000005E9f)) - var_1_37) < var_1_23) {
		if (var_1_2 >= var_1_1) {
			var_1_40 = (var_1_26 - (var_1_41 - var_1_32));
		}
	} else {
		var_1_40 = (var_1_12 - var_1_32);
	}


	// From: Req13Batch107Amount500
	if ((min (var_1_28 , var_1_114)) >= (min ((- var_1_104) , (var_1_37 + var_1_87)))) {
		if (var_1_35) {
			var_1_42 = (max (9.25f , var_1_23));
		} else {
			var_1_42 = (min (((var_1_44 + var_1_45) - 2.2f) , (max ((var_1_28 + var_1_27) , var_1_23))));
		}
	} else {
		if (! ((var_1_20 < var_1_6) || var_1_38)) {
			var_1_42 = (max (var_1_46 , var_1_23));
		} else {
			var_1_42 = ((min (var_1_44 , var_1_28)) + var_1_45);
		}
	}


	// From: Req14Batch107Amount500
	if ((var_1_26 & var_1_18) < var_1_12) {
		if ((var_1_32 / var_1_34) >= ((- var_1_12) << var_1_109)) {
			var_1_47 = (var_1_19 + var_1_12);
		} else {
			var_1_47 = var_1_19;
		}
	}


	// From: Req25Batch107Amount500
	if (var_1_49 < (var_1_28 / var_1_58)) {
		if (((var_1_10 - var_1_12) / var_1_19) > var_1_101) {
			var_1_71 = (last_1_var_1_71 + 2);
		} else {
			if ((var_1_59 - var_1_47) > (var_1_98 / (max (var_1_19 , var_1_34)))) {
				var_1_71 = (var_1_72 - (var_1_18 - var_1_8));
			} else {
				var_1_71 = (var_1_10 + last_1_var_1_71);
			}
		}
	} else {
		var_1_71 = ((max ((var_1_18 - last_1_var_1_71) , (var_1_73 + var_1_10))) + (var_1_74 - last_1_var_1_71));
	}


	// From: Req26Batch107Amount500
	unsigned long int stepLocal_15 = var_1_118;
	signed long int stepLocal_14 = var_1_7 * (var_1_68 * var_1_6);
	if (var_1_47 == stepLocal_14) {
		if ((var_1_73 % var_1_59) <= stepLocal_15) {
			var_1_75 = ((! var_1_39) && var_1_63);
		} else {
			var_1_75 = (var_1_35 && var_1_64);
		}
	}


	// From: Req27Batch107Amount500
	signed long int stepLocal_16 = var_1_110 ^ (var_1_26 - var_1_59);
	if ((- var_1_90) != stepLocal_16) {
		var_1_76 = (max ((var_1_68 - var_1_69) , ((max (var_1_10 , var_1_12)) - (var_1_77 + var_1_78))));
	} else {
		var_1_76 = var_1_78;
	}


	// From: Req47Batch107Amount500
	if (var_1_75) {
		var_1_112 = 128;
	} else {
		var_1_112 = var_1_20;
	}


	// From: Req53Batch107Amount500
	if (! var_1_63) {
		var_1_119 = ((var_1_18 + (var_1_120 - var_1_11)) - (abs (var_1_71)));
	}


	// From: Req11Batch107Amount500
	if (! var_1_75) {
		if ((2u + (var_1_98 / var_1_19)) < ((var_1_34 - var_1_12) - var_1_7)) {
			var_1_33 = var_1_35;
		} else {
			var_1_33 = (! var_1_35);
		}
	} else {
		if ((16.9f + var_1_28) > (var_1_36 - var_1_37)) {
			var_1_33 = ((var_1_35 && (var_1_75 && var_1_38)) || var_1_39);
		} else {
			var_1_33 = ((var_1_37 >= (var_1_23 * var_1_36)) && var_1_39);
		}
	}


	// From: Req22Batch107Amount500
	unsigned char stepLocal_13 = var_1_33;
	if (var_1_39 || stepLocal_13) {
		var_1_62 = (var_1_35 || ((var_1_63 && var_1_64) && var_1_65));
	}


	// From: Req3Batch107Amount500
	signed long int stepLocal_1 = abs (var_1_6);
	unsigned char stepLocal_0 = var_1_33;
	if ((min (var_1_12 , var_1_10)) >= stepLocal_1) {
		if (stepLocal_0 && (var_1_62 || var_1_75)) {
			var_1_13 = (max ((max ((var_1_12 + 2u) , var_1_8)) , var_1_10));
		} else {
			var_1_13 = (min (var_1_10 , (max (var_1_3 , var_1_12))));
		}
	} else {
		var_1_13 = (2740616589u - var_1_10);
	}


	// From: Req10Batch107Amount500
	unsigned char stepLocal_7 = var_1_33;
	unsigned char stepLocal_6 = var_1_26;
	if (! var_1_80) {
		if (stepLocal_7 && var_1_75) {
			if (stepLocal_6 < var_1_19) {
				var_1_31 = (((var_1_32 - var_1_12) - (max (var_1_10 , 5))) - var_1_19);
			} else {
				var_1_31 = (max (var_1_32 , var_1_20));
			}
		} else {
			var_1_31 = ((200 - 2) - (min (var_1_20 , (max (var_1_12 , var_1_19)))));
		}
	} else {
		var_1_31 = (var_1_12 + var_1_20);
	}


	// From: Req24Batch107Amount500
	if (var_1_33) {
		var_1_70 = (! var_1_63);
	}


	// From: Req28Batch107Amount500
	if (var_1_55 < (var_1_111 * var_1_119)) {
		var_1_79 = ((var_1_53 + var_1_44) - var_1_52);
	} else {
		var_1_79 = (var_1_51 + var_1_44);
	}


	// From: Req50Batch107Amount500
	if (var_1_70) {
		var_1_115 = var_1_116;
	} else {
		var_1_115 = var_1_88;
	}


	// From: Req42Batch107Amount500
	unsigned char stepLocal_24 = var_1_49 <= var_1_53;
	if (var_1_87 < (var_1_45 - var_1_106)) {
		if (stepLocal_24 && (-0.4 > var_1_37)) {
			var_1_105 = (! (var_1_70 || var_1_65));
		} else {
			var_1_105 = ((var_1_39 || var_1_38) || var_1_107);
		}
	} else {
		if (var_1_33) {
			var_1_105 = var_1_39;
		} else {
			var_1_105 = var_1_64;
		}
	}


	// From: Req51Batch107Amount500
	if (var_1_105) {
		var_1_117 = var_1_73;
	} else {
		var_1_117 = 16u;
	}


	// From: Req19Batch107Amount500
	signed long int stepLocal_12 = var_1_19 * var_1_119;
	unsigned long int stepLocal_11 = var_1_13;
	if (var_1_6 < stepLocal_12) {
		if ((- (- var_1_18)) <= stepLocal_11) {
			if ((var_1_53 / (max (var_1_58 , 7.4))) < (var_1_49 + (max (var_1_108 , var_1_42)))) {
				var_1_57 = (max ((max (var_1_32 , var_1_119)) , (min (var_1_117 , (var_1_59 - var_1_30)))));
			}
		}
	}


	// From: Req20Batch107Amount500
	if (var_1_28 >= var_1_87) {
		var_1_60 = (var_1_8 - var_1_112);
	} else {
		var_1_60 = ((abs (var_1_26)) - var_1_117);
	}


	// From: Req40Batch107Amount500
	unsigned long int stepLocal_22 = var_1_13;
	if (var_1_105) {
		if (((var_1_26 - var_1_94) * var_1_24) <= stepLocal_22) {
			var_1_103 = (var_1_32 + (var_1_77 - var_1_78));
		} else {
			var_1_103 = (var_1_10 + (min (var_1_32 , (max (var_1_68 , var_1_94)))));
		}
	} else {
		if (var_1_33) {
			var_1_103 = ((max ((min (var_1_77 , var_1_94)) , var_1_78)) - var_1_93);
		} else {
			var_1_103 = (var_1_93 - var_1_68);
		}
	}


	// From: Req48Batch107Amount500
	if (var_1_105) {
		var_1_113 = 1;
	}


	// From: Req54Batch107Amount500
	var_1_121 = var_1_117;


	// From: Req9Batch107Amount500
	signed long int stepLocal_5 = 4;
	signed long int stepLocal_4 = var_1_18 / var_1_19;
	if ((var_1_60 ^ (var_1_19 * var_1_56)) <= stepLocal_5) {
		if ((- var_1_117) > stepLocal_4) {
			var_1_29 = var_1_19;
		}
	} else {
		var_1_29 = (var_1_30 - ((min (var_1_20 , 64)) - (min (var_1_10 , var_1_12))));
	}


	// From: Req15Batch107Amount500
	signed long int stepLocal_9 = var_1_60;
	unsigned char stepLocal_8 = var_1_75;
	if (stepLocal_9 <= (var_1_3 + var_1_34)) {
		if ((var_1_12 == var_1_7) && stepLocal_8) {
			var_1_48 = ((var_1_49 + var_1_50) + (var_1_51 + (var_1_52 - var_1_53)));
		} else {
			var_1_48 = (var_1_44 - var_1_45);
		}
	}


	// From: Req36Batch107Amount500
	unsigned char stepLocal_21 = var_1_20;
	unsigned char stepLocal_20 = -8 <= (var_1_67 / var_1_72);
	if (stepLocal_21 >= ((var_1_74 & var_1_113) * (var_1_30 - var_1_69))) {
		if (stepLocal_20 || var_1_64) {
			var_1_92 = (((var_1_93 + var_1_94) + (max (var_1_20 , 100))) - var_1_95);
		} else {
			var_1_92 = (var_1_32 - 10);
		}
	} else {
		var_1_92 = (min (((max (var_1_30 , var_1_32)) - (var_1_77 + 16)) , var_1_19));
	}


	// From: Req35Batch107Amount500
	if (var_1_92 < 16) {
		if ((var_1_109 / (abs (var_1_20))) <= var_1_9) {
			var_1_91 = (var_1_78 + 10);
		} else {
			var_1_91 = var_1_67;
		}
	} else {
		if (var_1_114 == var_1_46) {
			var_1_91 = (var_1_69 - var_1_78);
		} else {
			var_1_91 = ((max (var_1_69 , var_1_68)) - var_1_12);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32767);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 14);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 30);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 16383);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 63);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 64);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 127);
	assume_abort_if_not(var_1_26 <= 255);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 127);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 222);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 3221225471);
	assume_abort_if_not(var_1_34 <= 4294967295);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= 1073741823);
	assume_abort_if_not(var_1_41 <= 2147483646);
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -922337.2036854766000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -230584.3009213691400e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 2305843.009213691400e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -230584.3009213691400e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691400e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= -230584.3009213691400e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691400e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691400e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 2305843.009213691400e+12F && var_1_53 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= -922337.2036854776000e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
	assume_abort_if_not(var_1_58 != 0.0F);
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 32767);
	assume_abort_if_not(var_1_59 <= 65534);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 1);
	assume_abort_if_not(var_1_63 <= 1);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 1);
	assume_abort_if_not(var_1_64 <= 1);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 1);
	assume_abort_if_not(var_1_65 <= 1);
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= -31);
	assume_abort_if_not(var_1_67 <= 31);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 63);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 126);
	var_1_72 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_72 >= 32767);
	assume_abort_if_not(var_1_72 <= 65534);
	var_1_73 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 16384);
	var_1_74 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_74 >= 16383);
	assume_abort_if_not(var_1_74 <= 32767);
	var_1_77 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 63);
	var_1_78 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 63);
	var_1_83 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_83 >= 536870911);
	assume_abort_if_not(var_1_83 <= 1073741823);
	var_1_84 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_84 >= 1073741824);
	assume_abort_if_not(var_1_84 <= 2147483647);
	var_1_85 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 2147483647);
	var_1_86 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_86 >= 536870912);
	assume_abort_if_not(var_1_86 <= 1073741824);
	var_1_88 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_88 >= 0.0F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 9223372.036854766000e+12F && var_1_88 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_93 >= 31);
	assume_abort_if_not(var_1_93 <= 64);
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 32);
	assume_abort_if_not(var_1_94 <= 63);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 127);
	var_1_97 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_97 >= 16382);
	assume_abort_if_not(var_1_97 <= 32766);
	var_1_99 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_99 >= 2147483647);
	assume_abort_if_not(var_1_99 <= 4294967294);
	var_1_100 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_100 >= 0);
	assume_abort_if_not(var_1_100 <= 4294967294);
	var_1_102 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_102 >= 0);
	assume_abort_if_not(var_1_102 <= 2147483647);
	var_1_106 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_106 >= 0.0F && var_1_106 <= -1.0e-20F) || (var_1_106 <= 9223372.036854776000e+12F && var_1_106 >= 1.0e-20F ));
	var_1_107 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_107 >= 0);
	assume_abort_if_not(var_1_107 <= 0);
	var_1_116 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_116 >= -922337.2036854766000e+13F && var_1_116 <= -1.0e-20F) || (var_1_116 <= 9223372.036854766000e+12F && var_1_116 >= 1.0e-20F ));
	var_1_120 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_120 >= 24575);
	assume_abort_if_not(var_1_120 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_110 = var_1_110;
	last_1_var_1_111 = var_1_111;
	last_1_var_1_117 = var_1_117;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_2 - var_1_3) > ((var_1_101 * -256) + var_1_82)) ? (var_1_1 == ((signed short int) (max ((var_1_6 - (var_1_7 + var_1_8)) , var_1_9)))) : ((500 >= (var_1_7 >> var_1_10)) ? (var_1_1 == ((signed short int) ((min (var_1_10 , var_1_8)) + (max (var_1_7 , 0))))) : ((var_1_6 < 64) ? (var_1_1 == ((signed short int) ((32 - var_1_7) + var_1_8))) : 1))) && ((((2102649480 - 25) >> (min (var_1_10 , var_1_12))) <= var_1_96) ? (var_1_11 == ((signed long int) (var_1_12 + var_1_7))) : 1)) && (((min (var_1_12 , var_1_10)) >= (abs (var_1_6))) ? ((var_1_33 && (var_1_62 || var_1_75)) ? (var_1_13 == ((unsigned long int) (max ((max ((var_1_12 + 2u) , var_1_8)) , var_1_10)))) : (var_1_13 == ((unsigned long int) (min (var_1_10 , (max (var_1_3 , var_1_12))))))) : (var_1_13 == ((unsigned long int) (2740616589u - var_1_10))))) && ((var_1_9 <= ((var_1_18 - var_1_8) << 5)) ? (var_1_17 == ((unsigned char) (abs (var_1_12)))) : (var_1_17 == ((unsigned char) (min ((200 - var_1_10) , ((var_1_19 + var_1_20) - var_1_12))))))) && ((var_1_82 >= (var_1_3 * var_1_18)) ? (var_1_21 == ((unsigned char) (abs (var_1_20)))) : 1)) && (var_1_22 == ((double) var_1_23))) && (var_1_24 == ((signed char) (var_1_12 + var_1_10)))) && (((var_1_26 - var_1_10) < var_1_56) ? (var_1_25 == ((float) (var_1_27 + (min ((min (3.45f , 255.8f)) , var_1_28))))) : 1)) && (((var_1_60 ^ (var_1_19 * var_1_56)) <= 4) ? (((- var_1_117) > (var_1_18 / var_1_19)) ? (var_1_29 == ((unsigned char) var_1_19)) : 1) : (var_1_29 == ((unsigned char) (var_1_30 - ((min (var_1_20 , 64)) - (min (var_1_10 , var_1_12)))))))) && ((! var_1_80) ? ((var_1_33 && var_1_75) ? ((var_1_26 < var_1_19) ? (var_1_31 == ((unsigned char) (((var_1_32 - var_1_12) - (max (var_1_10 , 5))) - var_1_19))) : (var_1_31 == ((unsigned char) (max (var_1_32 , var_1_20))))) : (var_1_31 == ((unsigned char) ((200 - 2) - (min (var_1_20 , (max (var_1_12 , var_1_19)))))))) : (var_1_31 == ((unsigned char) (var_1_12 + var_1_20))))) && ((! var_1_75) ? (((2u + (var_1_98 / var_1_19)) < ((var_1_34 - var_1_12) - var_1_7)) ? (var_1_33 == ((unsigned char) var_1_35)) : (var_1_33 == ((unsigned char) (! var_1_35)))) : (((16.9f + var_1_28) > (var_1_36 - var_1_37)) ? (var_1_33 == ((unsigned char) ((var_1_35 && (var_1_75 && var_1_38)) || var_1_39))) : (var_1_33 == ((unsigned char) ((var_1_37 >= (var_1_23 * var_1_36)) && var_1_39)))))) && ((((min (var_1_36 , 1.0000000005E9f)) - var_1_37) < var_1_23) ? ((var_1_2 >= var_1_1) ? (var_1_40 == ((signed long int) (var_1_26 - (var_1_41 - var_1_32)))) : 1) : (var_1_40 == ((signed long int) (var_1_12 - var_1_32))))) && (((min (var_1_28 , var_1_114)) >= (min ((- var_1_104) , (var_1_37 + var_1_87)))) ? (var_1_35 ? (var_1_42 == ((float) (max (9.25f , var_1_23)))) : (var_1_42 == ((float) (min (((var_1_44 + var_1_45) - 2.2f) , (max ((var_1_28 + var_1_27) , var_1_23))))))) : ((! ((var_1_20 < var_1_6) || var_1_38)) ? (var_1_42 == ((float) (max (var_1_46 , var_1_23)))) : (var_1_42 == ((float) ((min (var_1_44 , var_1_28)) + var_1_45)))))) && (((var_1_26 & var_1_18) < var_1_12) ? (((var_1_32 / var_1_34) >= ((- var_1_12) << var_1_109)) ? (var_1_47 == ((unsigned char) (var_1_19 + var_1_12))) : (var_1_47 == ((unsigned char) var_1_19))) : 1)) && ((var_1_60 <= (var_1_3 + var_1_34)) ? (((var_1_12 == var_1_7) && var_1_75) ? (var_1_48 == ((float) ((var_1_49 + var_1_50) + (var_1_51 + (var_1_52 - var_1_53))))) : (var_1_48 == ((float) (var_1_44 - var_1_45)))) : 1)) && (var_1_38 ? (var_1_54 == ((float) (max (var_1_53 , var_1_27)))) : 1)) && (var_1_39 ? (var_1_55 == ((unsigned char) (max (1 , var_1_30)))) : 1)) && ((var_1_82 < (var_1_7 % (min (var_1_41 , var_1_34)))) ? (var_1_56 == ((unsigned long int) var_1_12)) : (var_1_56 == ((unsigned long int) (var_1_7 + var_1_19))))) && ((var_1_6 < (var_1_19 * var_1_119)) ? (((- (- var_1_18)) <= var_1_13) ? (((var_1_53 / (max (var_1_58 , 7.4))) < (var_1_49 + (max (var_1_108 , var_1_42)))) ? (var_1_57 == ((unsigned short int) (max ((max (var_1_32 , var_1_119)) , (min (var_1_117 , (var_1_59 - var_1_30))))))) : 1) : 1) : 1)) && ((var_1_28 >= var_1_87) ? (var_1_60 == ((signed long int) (var_1_8 - var_1_112))) : (var_1_60 == ((signed long int) ((abs (var_1_26)) - var_1_117))))) && (var_1_38 ? (var_1_61 == ((float) (var_1_27 + var_1_28))) : (var_1_61 == ((float) (var_1_28 + var_1_49))))) && ((var_1_39 || var_1_33) ? (var_1_62 == ((unsigned char) (var_1_35 || ((var_1_63 && var_1_64) && var_1_65)))) : 1)) && ((var_1_28 < (5.6f * var_1_46)) ? (var_1_66 == ((signed char) (max (var_1_32 , (var_1_10 + (var_1_12 + var_1_67)))))) : (((var_1_53 - var_1_36) <= var_1_46) ? (var_1_66 == ((signed char) (var_1_10 + var_1_67))) : (var_1_66 == ((signed char) ((max ((max (5 , 100)) , (var_1_68 + var_1_12))) - (max (var_1_69 , var_1_10)))))))) && (var_1_33 ? (var_1_70 == ((unsigned char) (! var_1_63))) : 1)) && ((var_1_49 < (var_1_28 / var_1_58)) ? ((((var_1_10 - var_1_12) / var_1_19) > var_1_101) ? (var_1_71 == ((unsigned short int) (last_1_var_1_71 + 2))) : (((var_1_59 - var_1_47) > (var_1_98 / (max (var_1_19 , var_1_34)))) ? (var_1_71 == ((unsigned short int) (var_1_72 - (var_1_18 - var_1_8)))) : (var_1_71 == ((unsigned short int) (var_1_10 + last_1_var_1_71))))) : (var_1_71 == ((unsigned short int) ((max ((var_1_18 - last_1_var_1_71) , (var_1_73 + var_1_10))) + (var_1_74 - last_1_var_1_71)))))) && ((var_1_47 == (var_1_7 * (var_1_68 * var_1_6))) ? (((var_1_73 % var_1_59) <= var_1_118) ? (var_1_75 == ((unsigned char) ((! var_1_39) && var_1_63))) : (var_1_75 == ((unsigned char) (var_1_35 && var_1_64)))) : 1)) && (((- var_1_90) != (var_1_110 ^ (var_1_26 - var_1_59))) ? (var_1_76 == ((signed char) (max ((var_1_68 - var_1_69) , ((max (var_1_10 , var_1_12)) - (var_1_77 + var_1_78)))))) : (var_1_76 == ((signed char) var_1_78)))) && ((var_1_55 < (var_1_111 * var_1_119)) ? (var_1_79 == ((double) ((var_1_53 + var_1_44) - var_1_52))) : (var_1_79 == ((double) (var_1_51 + var_1_44))))) && ((49.875 <= (var_1_36 - var_1_52)) ? (var_1_80 == ((unsigned char) (var_1_35 || (! var_1_38)))) : (var_1_80 == ((unsigned char) (! ((var_1_65 || var_1_63) && var_1_64)))))) && (var_1_81 == ((signed char) ((abs (-2)) + var_1_78)))) && ((! (var_1_74 >= var_1_30)) ? ((var_1_18 > (last_1_var_1_110 + (last_1_var_1_96 * last_1_var_1_1))) ? (var_1_82 == ((unsigned long int) (var_1_20 + (var_1_41 - (var_1_83 - var_1_68))))) : (last_1_var_1_62 ? (var_1_82 == ((unsigned long int) ((var_1_41 + var_1_84) - last_1_var_1_56))) : (var_1_82 == ((unsigned long int) (min (var_1_30 , ((3707604542u - var_1_10) - var_1_8))))))) : (((5 * (var_1_26 * var_1_69)) > var_1_30) ? (var_1_82 == ((unsigned long int) (2226315111u - var_1_85))) : (var_1_82 == ((unsigned long int) (((var_1_86 - var_1_12) + var_1_8) + var_1_84)))))) && (last_1_var_1_70 ? ((((max (last_1_var_1_111 , last_1_var_1_117)) | var_1_69) > var_1_30) ? (var_1_87 == ((double) (min ((var_1_53 - var_1_88) , (max (var_1_45 , var_1_50)))))) : (var_1_87 == ((double) (var_1_52 - var_1_45)))) : 1)) && (var_1_89 == ((unsigned long int) var_1_78))) && ((var_1_23 > 7.5) ? (var_1_90 == ((signed short int) var_1_9)) : 1)) && ((var_1_92 < 16) ? (((var_1_109 / (abs (var_1_20))) <= var_1_9) ? (var_1_91 == ((signed char) (var_1_78 + 10))) : (var_1_91 == ((signed char) var_1_67))) : ((var_1_114 == var_1_46) ? (var_1_91 == ((signed char) (var_1_69 - var_1_78))) : (var_1_91 == ((signed char) ((max (var_1_69 , var_1_68)) - var_1_12)))))) && ((var_1_20 >= ((var_1_74 & var_1_113) * (var_1_30 - var_1_69))) ? (((-8 <= (var_1_67 / var_1_72)) || var_1_64) ? (var_1_92 == ((unsigned char) (((var_1_93 + var_1_94) + (max (var_1_20 , 100))) - var_1_95))) : (var_1_92 == ((unsigned char) (var_1_32 - 10)))) : (var_1_92 == ((unsigned char) (min (((max (var_1_30 , var_1_32)) - (var_1_77 + 16)) , var_1_19)))))) && (var_1_39 ? (var_1_96 == ((signed short int) ((max (var_1_6 , (var_1_97 - var_1_93))) - var_1_26))) : 1)) && ((var_1_8 < (var_1_10 - var_1_30)) ? (var_1_98 == ((unsigned long int) (max ((var_1_99 - (var_1_84 - var_1_93)) , var_1_73)))) : ((var_1_69 != var_1_20) ? (var_1_98 == ((unsigned long int) (abs (var_1_8)))) : (var_1_98 == ((unsigned long int) (min (var_1_100 , var_1_82))))))) && (var_1_101 == ((unsigned long int) (max (var_1_8 , ((max (var_1_26 , var_1_102)) + var_1_83)))))) && (var_1_105 ? ((((var_1_26 - var_1_94) * var_1_24) <= var_1_13) ? (var_1_103 == ((signed char) (var_1_32 + (var_1_77 - var_1_78)))) : (var_1_103 == ((signed char) (var_1_10 + (min (var_1_32 , (max (var_1_68 , var_1_94)))))))) : (var_1_33 ? (var_1_103 == ((signed char) ((max ((min (var_1_77 , var_1_94)) , var_1_78)) - var_1_93))) : (var_1_103 == ((signed char) (var_1_93 - var_1_68)))))) && ((var_1_12 == var_1_102) ? (var_1_104 == ((double) (abs (var_1_49 + var_1_27)))) : (var_1_104 == ((double) var_1_53)))) && ((var_1_87 < (var_1_45 - var_1_106)) ? (((var_1_49 <= var_1_53) && (-0.4 > var_1_37)) ? (var_1_105 == ((unsigned char) (! (var_1_70 || var_1_65)))) : (var_1_105 == ((unsigned char) ((var_1_39 || var_1_38) || var_1_107)))) : (var_1_33 ? (var_1_105 == ((unsigned char) var_1_39)) : (var_1_105 == ((unsigned char) var_1_64))))) && (var_1_64 ? (var_1_108 == ((float) var_1_51)) : (var_1_108 == ((float) var_1_28)))) && (var_1_109 == ((unsigned long int) 256u))) && (var_1_110 == ((signed long int) var_1_69))) && (var_1_111 == ((unsigned long int) var_1_101))) && (var_1_75 ? (var_1_112 == ((unsigned char) 128)) : (var_1_112 == ((unsigned char) var_1_20)))) && (var_1_105 ? (var_1_113 == ((unsigned short int) 1)) : 1)) && (var_1_114 == ((float) var_1_88))) && (var_1_70 ? (var_1_115 == ((double) var_1_116)) : (var_1_115 == ((double) var_1_88)))) && (var_1_105 ? (var_1_117 == ((unsigned long int) var_1_73)) : (var_1_117 == ((unsigned long int) 16u)))) && (var_1_38 ? (var_1_118 == ((unsigned long int) var_1_7)) : (var_1_118 == ((unsigned long int) var_1_96)))) && ((! var_1_63) ? (var_1_119 == ((unsigned short int) ((var_1_18 + (var_1_120 - var_1_11)) - (abs (var_1_71))))) : 1)) && (var_1_121 == ((signed short int) var_1_117))) && (var_1_122 == ((signed char) var_1_68))
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
