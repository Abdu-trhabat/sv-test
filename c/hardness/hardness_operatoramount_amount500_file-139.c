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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch139Amount500.c", 13, "reach_error"); }
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
double var_1_1 = 10000.2;
unsigned short int var_1_3 = 128;
double var_1_5 = 200.125;
double var_1_6 = 10000.75;
double var_1_7 = 25.8;
unsigned short int var_1_8 = 2;
unsigned short int var_1_10 = 26765;
unsigned short int var_1_11 = 5;
unsigned short int var_1_12 = 23687;
unsigned short int var_1_13 = 50;
float var_1_14 = 255.4;
unsigned short int var_1_15 = 35798;
unsigned long int var_1_16 = 128;
unsigned long int var_1_19 = 3309912828;
unsigned long int var_1_20 = 1;
signed short int var_1_21 = -128;
signed short int var_1_22 = 64;
unsigned char var_1_23 = 1;
unsigned char var_1_26 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 1;
double var_1_30 = 9.5;
double var_1_31 = 8.7;
double var_1_32 = 3.847;
signed long int var_1_33 = 32;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
signed short int var_1_36 = -256;
signed short int var_1_37 = 0;
signed short int var_1_38 = -4;
signed short int var_1_39 = 4;
signed short int var_1_40 = 256;
double var_1_41 = 255.4;
double var_1_42 = 7.25;
double var_1_43 = 16.95;
signed short int var_1_44 = -10;
float var_1_45 = 5.5;
signed short int var_1_46 = -4;
unsigned short int var_1_47 = 256;
signed char var_1_48 = 10;
signed short int var_1_49 = -4;
unsigned long int var_1_50 = 10;
signed long int var_1_51 = 1;
float var_1_52 = 7.8;
unsigned short int var_1_53 = 1;
unsigned short int var_1_54 = 10000;
unsigned short int var_1_55 = 59621;
double var_1_56 = 99999.8;
float var_1_57 = 50.625;
float var_1_58 = 0.0;
unsigned short int var_1_59 = 64;
unsigned short int var_1_60 = 5;
unsigned char var_1_61 = 32;
unsigned char var_1_62 = 64;
unsigned char var_1_63 = 64;
unsigned char var_1_64 = 64;
unsigned char var_1_65 = 2;
unsigned char var_1_66 = 1;
unsigned char var_1_67 = 2;
unsigned char var_1_68 = 50;
unsigned short int var_1_69 = 5;
unsigned char var_1_70 = 200;
unsigned short int var_1_71 = 62623;
unsigned short int var_1_72 = 1;
unsigned char var_1_73 = 0;
unsigned short int var_1_74 = 8;
unsigned short int var_1_76 = 30609;
signed long int var_1_77 = 50;
signed long int var_1_78 = 1263268331;
signed long int var_1_79 = -25;
signed long int var_1_80 = -4;
float var_1_82 = 31.6;
float var_1_83 = 0.0;
float var_1_84 = 256.125;
signed short int var_1_85 = 5;
float var_1_86 = 10.35;
unsigned short int var_1_87 = 256;
signed long int var_1_89 = -25;
signed char var_1_90 = -25;
unsigned short int var_1_91 = 0;
unsigned short int var_1_92 = 10000;
double var_1_93 = 8.375;
signed long int var_1_94 = 4;
signed long int var_1_95 = -1000;
unsigned short int var_1_96 = 1;
signed short int var_1_97 = -50;
unsigned char var_1_98 = 1;
unsigned char var_1_99 = 0;
double var_1_100 = 256.6;
signed long int var_1_101 = -10000;
double var_1_103 = 0.5;
unsigned char var_1_104 = 25;
double var_1_105 = 50.5;
signed long int var_1_106 = 25;
unsigned long int var_1_107 = 10;
unsigned long int var_1_108 = 8;
float var_1_110 = 4.25;
unsigned char var_1_111 = 1;
unsigned char var_1_112 = 0;
unsigned char var_1_113 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_23 = 1;
unsigned char last_1_var_1_29 = 1;
double last_1_var_1_30 = 9.5;
unsigned char last_1_var_1_34 = 0;
signed short int last_1_var_1_36 = -256;
unsigned long int last_1_var_1_50 = 10;
unsigned short int last_1_var_1_69 = 5;
signed long int last_1_var_1_79 = -25;
signed short int last_1_var_1_85 = 5;
unsigned short int last_1_var_1_87 = 256;
signed long int last_1_var_1_94 = 4;
signed long int last_1_var_1_95 = -1000;
signed short int last_1_var_1_97 = -50;
signed long int last_1_var_1_101 = -10000;
signed long int last_1_var_1_106 = 25;
unsigned long int last_1_var_1_107 = 10;
unsigned long int last_1_var_1_108 = 8;
unsigned char last_1_var_1_111 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req38Batch139Amount500
	var_1_95 = last_1_var_1_106;


	// From: Req33Batch139Amount500
	unsigned long int stepLocal_26 = last_1_var_1_107;
	if (stepLocal_26 >= last_1_var_1_87) {
		var_1_87 = ((min ((max (var_1_68 , var_1_13)) , var_1_39)) + ((var_1_64 + var_1_63) + var_1_66));
	}


	// From: Req48Batch139Amount500
	var_1_107 = var_1_87;


	// From: Req20Batch139Amount500
	if (var_1_32 <= (abs (var_1_45))) {
		if ((var_1_22 / -64) > (last_1_var_1_79 / var_1_3)) {
			if (var_1_46 > ((var_1_13 ^ var_1_40) % var_1_10)) {
				var_1_53 = ((23623 + var_1_10) - (var_1_12 - (var_1_54 - var_1_48)));
			} else {
				if (last_1_var_1_111) {
					var_1_53 = (abs (var_1_48));
				} else {
					var_1_53 = (min ((max ((var_1_15 - var_1_11) , (var_1_55 - var_1_40))) , var_1_54));
				}
			}
		} else {
			if (last_1_var_1_30 > (var_1_45 + var_1_14)) {
				if (var_1_13 < (last_1_var_1_85 + var_1_55)) {
					var_1_53 = (var_1_15 - (max (var_1_11 , (var_1_54 + var_1_40))));
				} else {
					var_1_53 = var_1_39;
				}
			} else {
				var_1_53 = (min (var_1_39 , var_1_12));
			}
		}
	}


	// From: Req31Batch139Amount500
	if (var_1_53 <= var_1_66) {
		if ((- var_1_58) < (var_1_14 - var_1_31)) {
			var_1_85 = var_1_62;
		}
	} else {
		var_1_85 = var_1_63;
	}


	// From: Req9Batch139Amount500
	if (last_1_var_1_34) {
		var_1_33 = (last_1_var_1_94 - var_1_3);
	} else {
		var_1_33 = (var_1_10 + ((var_1_11 + 5) + last_1_var_1_94));
	}


	// From: Req6Batch139Amount500
	signed long int stepLocal_8 = last_1_var_1_101;
	signed short int stepLocal_7 = var_1_22;
	if (var_1_22 < stepLocal_8) {
		if (last_1_var_1_34) {
			if (stepLocal_7 == (last_1_var_1_108 & (var_1_13 / 10))) {
				var_1_23 = (last_1_var_1_34 && var_1_26);
			} else {
				var_1_23 = (last_1_var_1_34 && (var_1_26 || (last_1_var_1_29 && var_1_28)));
			}
		} else {
			var_1_23 = (! var_1_26);
		}
	} else {
		var_1_23 = (! (var_1_28 || var_1_26));
	}


	// From: Req3Batch139Amount500
	unsigned short int stepLocal_5 = var_1_13;
	signed long int stepLocal_4 = last_1_var_1_95;
	if (last_1_var_1_97 == stepLocal_5) {
		var_1_16 = (2569038224u - var_1_10);
	} else {
		if (((var_1_12 * var_1_11) + -100) == stepLocal_4) {
			var_1_16 = (var_1_19 - (min (25u , last_1_var_1_50)));
		}
	}


	// From: Req43Batch139Amount500
	if (last_1_var_1_23) {
		var_1_101 = last_1_var_1_36;
	} else {
		var_1_101 = last_1_var_1_69;
	}


	// From: Req4Batch139Amount500
	var_1_20 = (max (32u , ((abs (var_1_19)) - var_1_95)));


	// From: Req8Batch139Amount500
	unsigned long int stepLocal_11 = var_1_19;
	if (15.25 >= var_1_7) {
		if (stepLocal_11 > var_1_11) {
			var_1_30 = ((max ((var_1_31 - var_1_32) , 63.6)) + var_1_6);
		} else {
			var_1_30 = ((max (var_1_7 , var_1_32)) + var_1_5);
		}
	}


	// From: Req10Batch139Amount500
	var_1_34 = (last_1_var_1_34 || var_1_35);


	// From: Req13Batch139Amount500
	unsigned short int stepLocal_13 = var_1_12;
	if (stepLocal_13 >= var_1_95) {
		if (var_1_14 <= var_1_32) {
			var_1_41 = (((var_1_42 + var_1_43) + 1.825) + var_1_32);
		}
	} else {
		if (var_1_35) {
			var_1_41 = (var_1_5 + (max (var_1_7 , var_1_32)));
		} else {
			var_1_41 = (max (var_1_42 , var_1_32));
		}
	}


	// From: Req15Batch139Amount500
	if ((var_1_10 << var_1_3) < (~ (var_1_39 >> var_1_48))) {
		var_1_47 = (var_1_15 - var_1_13);
	}


	// From: Req19Batch139Amount500
	if (var_1_13 > var_1_95) {
		var_1_52 = (min ((var_1_7 + var_1_5) , var_1_42));
	} else {
		if (var_1_31 <= var_1_7) {
			var_1_52 = (var_1_31 + var_1_7);
		}
	}


	// From: Req21Batch139Amount500
	if (! var_1_26) {
		var_1_56 = (var_1_5 + (abs (var_1_7)));
	}


	// From: Req23Batch139Amount500
	var_1_59 = ((min (var_1_11 , var_1_40)) + (max ((min (var_1_10 , var_1_60)) , var_1_13)));


	// From: Req26Batch139Amount500
	unsigned long int stepLocal_17 = var_1_67 * var_1_20;
	if (! (1u > var_1_47)) {
		if (stepLocal_17 == (var_1_63 * (var_1_33 - var_1_87))) {
			var_1_73 = (! var_1_35);
		}
	}


	// From: Req35Batch139Amount500
	if (var_1_42 <= var_1_5) {
		var_1_91 = (var_1_54 + ((var_1_92 - var_1_11) + (min (var_1_39 , var_1_62))));
	} else {
		var_1_91 = var_1_64;
	}


	// From: Req40Batch139Amount500
	var_1_97 = 8;


	// From: Req41Batch139Amount500
	if (var_1_34) {
		var_1_98 = var_1_99;
	} else {
		var_1_98 = var_1_26;
	}


	// From: Req42Batch139Amount500
	if (var_1_99) {
		var_1_100 = var_1_83;
	} else {
		var_1_100 = 63.25;
	}


	// From: Req44Batch139Amount500
	var_1_103 = var_1_7;


	// From: Req45Batch139Amount500
	var_1_104 = 64;


	// From: Req46Batch139Amount500
	if (var_1_28) {
		var_1_105 = var_1_58;
	} else {
		var_1_105 = var_1_43;
	}


	// From: Req50Batch139Amount500
	if (var_1_34) {
		var_1_110 = var_1_32;
	} else {
		var_1_110 = var_1_7;
	}


	// From: Req52Batch139Amount500
	var_1_112 = var_1_67;


	// From: Req53Batch139Amount500
	var_1_113 = var_1_28;


	// From: Req51Batch139Amount500
	if (var_1_90 >= var_1_95) {
		var_1_111 = (((! var_1_28) && (var_1_34 || var_1_35)) && var_1_99);
	} else {
		var_1_111 = (! var_1_28);
	}


	// From: Req18Batch139Amount500
	if (var_1_15 != (var_1_19 / (max (var_1_12 , var_1_10)))) {
		var_1_51 = (var_1_97 + var_1_48);
	} else {
		if ((~ var_1_59) == var_1_38) {
			var_1_51 = (min ((min (var_1_3 , (4 - var_1_16))) , (abs (var_1_48))));
		}
	}


	// From: Req2Batch139Amount500
	unsigned char stepLocal_3 = var_1_98;
	unsigned char stepLocal_2 = var_1_98;
	unsigned short int stepLocal_1 = var_1_12;
	if (stepLocal_2 || (! (var_1_7 > var_1_5))) {
		var_1_8 = (((var_1_10 - var_1_11) + var_1_12) - var_1_13);
	} else {
		if (var_1_5 > (max (var_1_6 , 16.15))) {
			var_1_8 = var_1_10;
		} else {
			if (stepLocal_1 >= var_1_51) {
				if (((var_1_14 - 4.4f) <= var_1_6) || stepLocal_3) {
					var_1_8 = (max (var_1_10 , (var_1_13 + var_1_12)));
				} else {
					var_1_8 = (var_1_15 - (abs (min (var_1_12 , var_1_13))));
				}
			} else {
				if (var_1_98) {
					var_1_8 = var_1_12;
				} else {
					var_1_8 = var_1_11;
				}
			}
		}
	}


	// From: Req25Batch139Amount500
	signed long int stepLocal_16 = abs (var_1_70 - 2);
	if (stepLocal_16 <= ((var_1_13 + var_1_54) - var_1_8)) {
		var_1_69 = ((var_1_71 - (var_1_72 + 8)) - var_1_63);
	}


	// From: Req16Batch139Amount500
	if (var_1_56 < (max ((max (256.4 , var_1_43)) , var_1_42))) {
		var_1_49 = var_1_39;
	}


	// From: Req27Batch139Amount500
	signed long int stepLocal_19 = (var_1_40 + var_1_54) - var_1_71;
	unsigned char stepLocal_18 = var_1_35;
	if (stepLocal_19 < (~ (var_1_87 - var_1_67))) {
		if (var_1_26) {
			if (stepLocal_18 || var_1_73) {
				var_1_74 = var_1_40;
			} else {
				var_1_74 = (var_1_15 - var_1_67);
			}
		} else {
			if (! (var_1_20 < var_1_91)) {
				var_1_74 = (43231 - var_1_12);
			} else {
				var_1_74 = (((var_1_10 + var_1_76) - var_1_63) - (max ((var_1_70 + var_1_65) , var_1_13)));
			}
		}
	} else {
		var_1_74 = (((var_1_10 - var_1_63) + 16413) - (var_1_70 + var_1_66));
	}


	// From: Req32Batch139Amount500
	unsigned char stepLocal_25 = ! (var_1_40 != var_1_74);
	if (stepLocal_25 || var_1_98) {
		var_1_86 = ((abs (var_1_32 - var_1_84)) - (var_1_83 - var_1_31));
	}


	// From: Req36Batch139Amount500
	unsigned char stepLocal_28 = (var_1_70 != var_1_38) && var_1_113;
	unsigned long int stepLocal_27 = 10u;
	if (stepLocal_28 && var_1_26) {
		if (var_1_19 <= stepLocal_27) {
			var_1_93 = (min (((var_1_43 + var_1_5) + (var_1_32 - var_1_84)) , var_1_58));
		} else {
			var_1_93 = var_1_31;
		}
	}


	// From: Req39Batch139Amount500
	if (var_1_98) {
		var_1_96 = var_1_15;
	} else {
		var_1_96 = var_1_66;
	}


	// From: Req49Batch139Amount500
	if (var_1_111) {
		var_1_108 = var_1_66;
	}


	// From: Req47Batch139Amount500
	if (var_1_111) {
		var_1_106 = var_1_72;
	} else {
		var_1_106 = var_1_65;
	}


	// From: Req1Batch139Amount500
	signed long int stepLocal_0 = var_1_33 / var_1_3;
	if (stepLocal_0 != var_1_108) {
		var_1_1 = ((var_1_5 + (abs (var_1_6))) + var_1_7);
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req34Batch139Amount500
	if ((var_1_107 ^ var_1_16) == var_1_13) {
		if (((abs (var_1_90)) * (var_1_10 / var_1_48)) == -32) {
			var_1_89 = (max (var_1_13 , var_1_51));
		} else {
			var_1_89 = (var_1_22 + (min (var_1_12 , var_1_101)));
		}
	}


	// From: Req5Batch139Amount500
	unsigned short int stepLocal_6 = var_1_96;
	if (stepLocal_6 == ((- var_1_16) / (var_1_12 + var_1_10))) {
		var_1_21 = 10;
	} else {
		var_1_21 = (var_1_11 + var_1_22);
	}


	// From: Req12Batch139Amount500
	if (var_1_1 != var_1_6) {
		var_1_37 = (((min (var_1_11 , var_1_38)) + (var_1_39 - var_1_40)) + (max (-25 , var_1_22)));
	}


	// From: Req14Batch139Amount500
	if (var_1_14 >= ((var_1_7 / var_1_45) * var_1_93)) {
		var_1_44 = (var_1_40 - var_1_39);
	} else {
		var_1_44 = (var_1_22 + ((-25 + var_1_46) + var_1_39));
	}


	// From: Req24Batch139Amount500
	unsigned char stepLocal_15 = var_1_63;
	unsigned long int stepLocal_14 = var_1_20;
	if (128 <= stepLocal_14) {
		var_1_61 = ((var_1_62 - var_1_48) + ((max (var_1_63 , var_1_64)) - var_1_65));
	} else {
		if (stepLocal_15 >= (var_1_85 + var_1_54)) {
			if ((var_1_31 - var_1_32) == (- var_1_86)) {
				var_1_61 = (((var_1_48 + 16) + var_1_65) + ((var_1_66 + var_1_67) + var_1_68));
			}
		}
	}


	// From: Req30Batch139Amount500
	signed short int stepLocal_24 = var_1_37;
	if (stepLocal_24 < var_1_66) {
		var_1_82 = (min (8.6f , ((var_1_83 - var_1_31) - (var_1_32 + var_1_84))));
	} else {
		if (var_1_34) {
			var_1_82 = (max (var_1_31 , (1.000000000000005E14f + var_1_5)));
		} else {
			var_1_82 = (var_1_6 + (var_1_32 - var_1_84));
		}
	}


	// From: Req11Batch139Amount500
	signed long int stepLocal_12 = var_1_101 * var_1_12;
	if ((var_1_1 * (var_1_14 * var_1_5)) >= (min (var_1_6 , var_1_32))) {
		var_1_36 = ((var_1_11 + -4) + var_1_22);
	} else {
		if (stepLocal_12 > var_1_53) {
			var_1_36 = var_1_11;
		} else {
			var_1_36 = var_1_22;
		}
	}


	// From: Req37Batch139Amount500
	signed long int stepLocal_29 = var_1_13 << var_1_12;
	if (((var_1_36 / 10) + (var_1_80 * last_1_var_1_94)) < stepLocal_29) {
		var_1_94 = (var_1_76 - var_1_62);
	}


	// From: Req17Batch139Amount500
	if (var_1_56 >= var_1_7) {
		if (! ((! var_1_26) && var_1_23)) {
			var_1_50 = var_1_11;
		} else {
			var_1_50 = (var_1_19 - var_1_39);
		}
	} else {
		var_1_50 = (var_1_47 + (abs (var_1_89)));
	}


	// From: Req28Batch139Amount500
	unsigned char stepLocal_21 = var_1_63;
	signed short int stepLocal_20 = var_1_39;
	if ((max (var_1_94 , var_1_20)) > stepLocal_20) {
		if (! (var_1_43 > (var_1_31 - var_1_32))) {
			if (var_1_28) {
				if (var_1_94 <= stepLocal_21) {
					var_1_77 = var_1_76;
				} else {
					var_1_77 = (var_1_39 + var_1_49);
				}
			} else {
				var_1_77 = (min (var_1_74 , var_1_49));
			}
		} else {
			var_1_77 = (var_1_89 + ((var_1_11 + var_1_94) - var_1_13));
		}
	} else {
		if (var_1_34) {
			var_1_77 = ((max ((var_1_78 - var_1_69) , (min (var_1_65 , 0)))) - var_1_76);
		}
	}


	// From: Req29Batch139Amount500
	signed long int stepLocal_23 = var_1_89 % var_1_71;
	unsigned short int stepLocal_22 = var_1_96;
	if (var_1_23) {
		if ((min (var_1_89 , (var_1_16 * var_1_91))) > stepLocal_22) {
			var_1_79 = (var_1_80 + var_1_72);
		} else {
			if (stepLocal_23 > (max (var_1_50 , (var_1_12 ^ 10)))) {
				var_1_79 = ((var_1_40 - 100) + (abs (var_1_63)));
			} else {
				var_1_79 = (abs (max (var_1_20 , (var_1_13 + var_1_66))));
			}
		}
	} else {
		var_1_79 = (max (((var_1_64 + var_1_66) - var_1_62) , var_1_101));
	}


	// From: Req7Batch139Amount500
	unsigned long int stepLocal_10 = var_1_19;
	signed long int stepLocal_9 = abs (var_1_10);
	if (var_1_12 <= stepLocal_10) {
		var_1_29 = (var_1_28 || var_1_26);
	} else {
		if (stepLocal_9 <= (var_1_33 * var_1_79)) {
			var_1_29 = 0;
		}
	}


	// From: Req22Batch139Amount500
	if ((max (var_1_50 , var_1_77)) != var_1_40) {
		if ((var_1_100 != var_1_6) && var_1_29) {
			var_1_57 = (var_1_5 + var_1_7);
		} else {
			var_1_57 = (max ((var_1_32 - var_1_31) , var_1_43));
		}
	} else {
		if (var_1_3 < var_1_13) {
			var_1_57 = (max (var_1_43 , var_1_31));
		} else {
			var_1_57 = (var_1_31 - ((abs (var_1_58)) - var_1_32));
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -230584.3009213691400e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691400e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -230584.3009213691400e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691400e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 24575);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 8192);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 16384);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 32767);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= -16383);
	assume_abort_if_not(var_1_22 <= 16383);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= -8191);
	assume_abort_if_not(var_1_38 <= 8192);
	var_1_39 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 8191);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 8191);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -115292.1504606845700e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 1152921.504606845700e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -115292.1504606845700e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 1152921.504606845700e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	assume_abort_if_not(var_1_45 != 0.0F);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= -4095);
	assume_abort_if_not(var_1_46 <= 4096);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 14);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 8191);
	assume_abort_if_not(var_1_54 <= 16383);
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 32767);
	assume_abort_if_not(var_1_55 <= 65534);
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= -922337.2036854766000e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= -461168.6018427383000e+13F && var_1_58 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 32767);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 63);
	assume_abort_if_not(var_1_62 <= 127);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 63);
	assume_abort_if_not(var_1_63 <= 127);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 63);
	assume_abort_if_not(var_1_64 <= 127);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 63);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 32);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 32);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 63);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 127);
	assume_abort_if_not(var_1_70 <= 255);
	var_1_71 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_71 >= 49150);
	assume_abort_if_not(var_1_71 <= 65534);
	var_1_72 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 8192);
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 24575);
	assume_abort_if_not(var_1_76 <= 32767);
	var_1_78 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_78 >= 1073741822);
	assume_abort_if_not(var_1_78 <= 2147483646);
	var_1_80 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_80 >= -1073741823);
	assume_abort_if_not(var_1_80 <= 1073741823);
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= 4611686.018427383000e+12F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854766000e+12F && var_1_83 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= 0.0F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427383000e+12F && var_1_84 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_90 >= -127);
	assume_abort_if_not(var_1_90 <= 127);
	var_1_92 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_92 >= 8192);
	assume_abort_if_not(var_1_92 <= 16384);
	var_1_99 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_99 >= 1);
	assume_abort_if_not(var_1_99 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_23 = var_1_23;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_111 = var_1_111;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_33 / var_1_3) != var_1_108) ? (var_1_1 == ((double) ((var_1_5 + (abs (var_1_6))) + var_1_7))) : (var_1_1 == ((double) var_1_7))) && ((var_1_98 || (! (var_1_7 > var_1_5))) ? (var_1_8 == ((unsigned short int) (((var_1_10 - var_1_11) + var_1_12) - var_1_13))) : ((var_1_5 > (max (var_1_6 , 16.15))) ? (var_1_8 == ((unsigned short int) var_1_10)) : ((var_1_12 >= var_1_51) ? ((((var_1_14 - 4.4f) <= var_1_6) || var_1_98) ? (var_1_8 == ((unsigned short int) (max (var_1_10 , (var_1_13 + var_1_12))))) : (var_1_8 == ((unsigned short int) (var_1_15 - (abs (min (var_1_12 , var_1_13))))))) : (var_1_98 ? (var_1_8 == ((unsigned short int) var_1_12)) : (var_1_8 == ((unsigned short int) var_1_11))))))) && ((last_1_var_1_97 == var_1_13) ? (var_1_16 == ((unsigned long int) (2569038224u - var_1_10))) : ((((var_1_12 * var_1_11) + -100) == last_1_var_1_95) ? (var_1_16 == ((unsigned long int) (var_1_19 - (min (25u , last_1_var_1_50))))) : 1))) && (var_1_20 == ((unsigned long int) (max (32u , ((abs (var_1_19)) - var_1_95)))))) && ((var_1_96 == ((- var_1_16) / (var_1_12 + var_1_10))) ? (var_1_21 == ((signed short int) 10)) : (var_1_21 == ((signed short int) (var_1_11 + var_1_22))))) && ((var_1_22 < last_1_var_1_101) ? (last_1_var_1_34 ? ((var_1_22 == (last_1_var_1_108 & (var_1_13 / 10))) ? (var_1_23 == ((unsigned char) (last_1_var_1_34 && var_1_26))) : (var_1_23 == ((unsigned char) (last_1_var_1_34 && (var_1_26 || (last_1_var_1_29 && var_1_28)))))) : (var_1_23 == ((unsigned char) (! var_1_26)))) : (var_1_23 == ((unsigned char) (! (var_1_28 || var_1_26)))))) && ((var_1_12 <= var_1_19) ? (var_1_29 == ((unsigned char) (var_1_28 || var_1_26))) : (((abs (var_1_10)) <= (var_1_33 * var_1_79)) ? (var_1_29 == ((unsigned char) 0)) : 1))) && ((15.25 >= var_1_7) ? ((var_1_19 > var_1_11) ? (var_1_30 == ((double) ((max ((var_1_31 - var_1_32) , 63.6)) + var_1_6))) : (var_1_30 == ((double) ((max (var_1_7 , var_1_32)) + var_1_5)))) : 1)) && (last_1_var_1_34 ? (var_1_33 == ((signed long int) (last_1_var_1_94 - var_1_3))) : (var_1_33 == ((signed long int) (var_1_10 + ((var_1_11 + 5) + last_1_var_1_94)))))) && (var_1_34 == ((unsigned char) (last_1_var_1_34 || var_1_35)))) && (((var_1_1 * (var_1_14 * var_1_5)) >= (min (var_1_6 , var_1_32))) ? (var_1_36 == ((signed short int) ((var_1_11 + -4) + var_1_22))) : (((var_1_101 * var_1_12) > var_1_53) ? (var_1_36 == ((signed short int) var_1_11)) : (var_1_36 == ((signed short int) var_1_22))))) && ((var_1_1 != var_1_6) ? (var_1_37 == ((signed short int) (((min (var_1_11 , var_1_38)) + (var_1_39 - var_1_40)) + (max (-25 , var_1_22))))) : 1)) && ((var_1_12 >= var_1_95) ? ((var_1_14 <= var_1_32) ? (var_1_41 == ((double) (((var_1_42 + var_1_43) + 1.825) + var_1_32))) : 1) : (var_1_35 ? (var_1_41 == ((double) (var_1_5 + (max (var_1_7 , var_1_32))))) : (var_1_41 == ((double) (max (var_1_42 , var_1_32))))))) && ((var_1_14 >= ((var_1_7 / var_1_45) * var_1_93)) ? (var_1_44 == ((signed short int) (var_1_40 - var_1_39))) : (var_1_44 == ((signed short int) (var_1_22 + ((-25 + var_1_46) + var_1_39)))))) && (((var_1_10 << var_1_3) < (~ (var_1_39 >> var_1_48))) ? (var_1_47 == ((unsigned short int) (var_1_15 - var_1_13))) : 1)) && ((var_1_56 < (max ((max (256.4 , var_1_43)) , var_1_42))) ? (var_1_49 == ((signed short int) var_1_39)) : 1)) && ((var_1_56 >= var_1_7) ? ((! ((! var_1_26) && var_1_23)) ? (var_1_50 == ((unsigned long int) var_1_11)) : (var_1_50 == ((unsigned long int) (var_1_19 - var_1_39)))) : (var_1_50 == ((unsigned long int) (var_1_47 + (abs (var_1_89))))))) && ((var_1_15 != (var_1_19 / (max (var_1_12 , var_1_10)))) ? (var_1_51 == ((signed long int) (var_1_97 + var_1_48))) : (((~ var_1_59) == var_1_38) ? (var_1_51 == ((signed long int) (min ((min (var_1_3 , (4 - var_1_16))) , (abs (var_1_48)))))) : 1))) && ((var_1_13 > var_1_95) ? (var_1_52 == ((float) (min ((var_1_7 + var_1_5) , var_1_42)))) : ((var_1_31 <= var_1_7) ? (var_1_52 == ((float) (var_1_31 + var_1_7))) : 1))) && ((var_1_32 <= (abs (var_1_45))) ? (((var_1_22 / -64) > (last_1_var_1_79 / var_1_3)) ? ((var_1_46 > ((var_1_13 ^ var_1_40) % var_1_10)) ? (var_1_53 == ((unsigned short int) ((23623 + var_1_10) - (var_1_12 - (var_1_54 - var_1_48))))) : (last_1_var_1_111 ? (var_1_53 == ((unsigned short int) (abs (var_1_48)))) : (var_1_53 == ((unsigned short int) (min ((max ((var_1_15 - var_1_11) , (var_1_55 - var_1_40))) , var_1_54)))))) : ((last_1_var_1_30 > (var_1_45 + var_1_14)) ? ((var_1_13 < (last_1_var_1_85 + var_1_55)) ? (var_1_53 == ((unsigned short int) (var_1_15 - (max (var_1_11 , (var_1_54 + var_1_40)))))) : (var_1_53 == ((unsigned short int) var_1_39))) : (var_1_53 == ((unsigned short int) (min (var_1_39 , var_1_12)))))) : 1)) && ((! var_1_26) ? (var_1_56 == ((double) (var_1_5 + (abs (var_1_7))))) : 1)) && (((max (var_1_50 , var_1_77)) != var_1_40) ? (((var_1_100 != var_1_6) && var_1_29) ? (var_1_57 == ((float) (var_1_5 + var_1_7))) : (var_1_57 == ((float) (max ((var_1_32 - var_1_31) , var_1_43))))) : ((var_1_3 < var_1_13) ? (var_1_57 == ((float) (max (var_1_43 , var_1_31)))) : (var_1_57 == ((float) (var_1_31 - ((abs (var_1_58)) - var_1_32))))))) && (var_1_59 == ((unsigned short int) ((min (var_1_11 , var_1_40)) + (max ((min (var_1_10 , var_1_60)) , var_1_13)))))) && ((128 <= var_1_20) ? (var_1_61 == ((unsigned char) ((var_1_62 - var_1_48) + ((max (var_1_63 , var_1_64)) - var_1_65)))) : ((var_1_63 >= (var_1_85 + var_1_54)) ? (((var_1_31 - var_1_32) == (- var_1_86)) ? (var_1_61 == ((unsigned char) (((var_1_48 + 16) + var_1_65) + ((var_1_66 + var_1_67) + var_1_68)))) : 1) : 1))) && (((abs (var_1_70 - 2)) <= ((var_1_13 + var_1_54) - var_1_8)) ? (var_1_69 == ((unsigned short int) ((var_1_71 - (var_1_72 + 8)) - var_1_63))) : 1)) && ((! (1u > var_1_47)) ? (((var_1_67 * var_1_20) == (var_1_63 * (var_1_33 - var_1_87))) ? (var_1_73 == ((unsigned char) (! var_1_35))) : 1) : 1)) && ((((var_1_40 + var_1_54) - var_1_71) < (~ (var_1_87 - var_1_67))) ? (var_1_26 ? ((var_1_35 || var_1_73) ? (var_1_74 == ((unsigned short int) var_1_40)) : (var_1_74 == ((unsigned short int) (var_1_15 - var_1_67)))) : ((! (var_1_20 < var_1_91)) ? (var_1_74 == ((unsigned short int) (43231 - var_1_12))) : (var_1_74 == ((unsigned short int) (((var_1_10 + var_1_76) - var_1_63) - (max ((var_1_70 + var_1_65) , var_1_13))))))) : (var_1_74 == ((unsigned short int) (((var_1_10 - var_1_63) + 16413) - (var_1_70 + var_1_66)))))) && (((max (var_1_94 , var_1_20)) > var_1_39) ? ((! (var_1_43 > (var_1_31 - var_1_32))) ? (var_1_28 ? ((var_1_94 <= var_1_63) ? (var_1_77 == ((signed long int) var_1_76)) : (var_1_77 == ((signed long int) (var_1_39 + var_1_49)))) : (var_1_77 == ((signed long int) (min (var_1_74 , var_1_49))))) : (var_1_77 == ((signed long int) (var_1_89 + ((var_1_11 + var_1_94) - var_1_13))))) : (var_1_34 ? (var_1_77 == ((signed long int) ((max ((var_1_78 - var_1_69) , (min (var_1_65 , 0)))) - var_1_76))) : 1))) && (var_1_23 ? (((min (var_1_89 , (var_1_16 * var_1_91))) > var_1_96) ? (var_1_79 == ((signed long int) (var_1_80 + var_1_72))) : (((var_1_89 % var_1_71) > (max (var_1_50 , (var_1_12 ^ 10)))) ? (var_1_79 == ((signed long int) ((var_1_40 - 100) + (abs (var_1_63))))) : (var_1_79 == ((signed long int) (abs (max (var_1_20 , (var_1_13 + var_1_66)))))))) : (var_1_79 == ((signed long int) (max (((var_1_64 + var_1_66) - var_1_62) , var_1_101)))))) && ((var_1_37 < var_1_66) ? (var_1_82 == ((float) (min (8.6f , ((var_1_83 - var_1_31) - (var_1_32 + var_1_84)))))) : (var_1_34 ? (var_1_82 == ((float) (max (var_1_31 , (1.000000000000005E14f + var_1_5))))) : (var_1_82 == ((float) (var_1_6 + (var_1_32 - var_1_84))))))) && ((var_1_53 <= var_1_66) ? (((- var_1_58) < (var_1_14 - var_1_31)) ? (var_1_85 == ((signed short int) var_1_62)) : 1) : (var_1_85 == ((signed short int) var_1_63)))) && (((! (var_1_40 != var_1_74)) || var_1_98) ? (var_1_86 == ((float) ((abs (var_1_32 - var_1_84)) - (var_1_83 - var_1_31)))) : 1)) && ((last_1_var_1_107 >= last_1_var_1_87) ? (var_1_87 == ((unsigned short int) ((min ((max (var_1_68 , var_1_13)) , var_1_39)) + ((var_1_64 + var_1_63) + var_1_66)))) : 1)) && (((var_1_107 ^ var_1_16) == var_1_13) ? ((((abs (var_1_90)) * (var_1_10 / var_1_48)) == -32) ? (var_1_89 == ((signed long int) (max (var_1_13 , var_1_51)))) : (var_1_89 == ((signed long int) (var_1_22 + (min (var_1_12 , var_1_101)))))) : 1)) && ((var_1_42 <= var_1_5) ? (var_1_91 == ((unsigned short int) (var_1_54 + ((var_1_92 - var_1_11) + (min (var_1_39 , var_1_62)))))) : (var_1_91 == ((unsigned short int) var_1_64)))) && ((((var_1_70 != var_1_38) && var_1_113) && var_1_26) ? ((var_1_19 <= 10u) ? (var_1_93 == ((double) (min (((var_1_43 + var_1_5) + (var_1_32 - var_1_84)) , var_1_58)))) : (var_1_93 == ((double) var_1_31))) : 1)) && ((((var_1_36 / 10) + (var_1_80 * last_1_var_1_94)) < (var_1_13 << var_1_12)) ? (var_1_94 == ((signed long int) (var_1_76 - var_1_62))) : 1)) && (var_1_95 == ((signed long int) last_1_var_1_106))) && (var_1_98 ? (var_1_96 == ((unsigned short int) var_1_15)) : (var_1_96 == ((unsigned short int) var_1_66)))) && (var_1_97 == ((signed short int) 8))) && (var_1_34 ? (var_1_98 == ((unsigned char) var_1_99)) : (var_1_98 == ((unsigned char) var_1_26)))) && (var_1_99 ? (var_1_100 == ((double) var_1_83)) : (var_1_100 == ((double) 63.25)))) && (last_1_var_1_23 ? (var_1_101 == ((signed long int) last_1_var_1_36)) : (var_1_101 == ((signed long int) last_1_var_1_69)))) && (var_1_103 == ((double) var_1_7))) && (var_1_104 == ((unsigned char) 64))) && (var_1_28 ? (var_1_105 == ((double) var_1_58)) : (var_1_105 == ((double) var_1_43)))) && (var_1_111 ? (var_1_106 == ((signed long int) var_1_72)) : (var_1_106 == ((signed long int) var_1_65)))) && (var_1_107 == ((unsigned long int) var_1_87))) && (var_1_111 ? (var_1_108 == ((unsigned long int) var_1_66)) : 1)) && (var_1_34 ? (var_1_110 == ((float) var_1_32)) : (var_1_110 == ((float) var_1_7)))) && ((var_1_90 >= var_1_95) ? (var_1_111 == ((unsigned char) (((! var_1_28) && (var_1_34 || var_1_35)) && var_1_99))) : (var_1_111 == ((unsigned char) (! var_1_28))))) && (var_1_112 == ((unsigned char) var_1_67))) && (var_1_113 == ((unsigned char) var_1_28))
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
