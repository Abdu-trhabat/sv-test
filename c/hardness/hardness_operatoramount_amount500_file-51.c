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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch51Amount500.c", 13, "reach_error"); }
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
signed char var_1_1 = 0;
float var_1_4 = 127.25;
float var_1_5 = 2.75;
float var_1_6 = 255.25;
signed char var_1_7 = 25;
signed char var_1_8 = 16;
signed char var_1_9 = -4;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 32;
unsigned short int var_1_13 = 53860;
signed long int var_1_14 = -200;
float var_1_15 = 64.5;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 10;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 200;
unsigned char var_1_20 = 4;
unsigned char var_1_21 = 2;
signed short int var_1_22 = 5;
unsigned char var_1_23 = 2;
unsigned char var_1_24 = 50;
double var_1_25 = 127.5;
double var_1_29 = 5.4;
double var_1_30 = 0.0;
double var_1_31 = 0.0;
signed char var_1_32 = -5;
signed char var_1_33 = 16;
unsigned short int var_1_34 = 64;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 1;
signed short int var_1_38 = -1;
unsigned long int var_1_39 = 2;
unsigned long int var_1_40 = 2395598045;
unsigned short int var_1_41 = 50;
unsigned short int var_1_43 = 0;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 0;
double var_1_52 = 99999999999999.5;
unsigned char var_1_53 = 0;
double var_1_54 = 0.8;
double var_1_55 = 255.5;
double var_1_56 = 2.5;
double var_1_57 = 63.875;
double var_1_58 = 500.5;
unsigned long int var_1_59 = 128;
unsigned long int var_1_60 = 10;
unsigned short int var_1_61 = 2;
unsigned char var_1_62 = 0;
signed char var_1_63 = 1;
signed char var_1_64 = -8;
signed char var_1_65 = 0;
signed char var_1_66 = 8;
unsigned char var_1_67 = 128;
double var_1_68 = 0.19999999999999996;
double var_1_69 = 15.61;
double var_1_71 = 63.651;
signed short int var_1_72 = -128;
unsigned short int var_1_73 = 2;
double var_1_74 = 999.375;
signed char var_1_75 = 64;
double var_1_76 = 64.4;
double var_1_77 = 127.2;
signed short int var_1_78 = 2;
signed short int var_1_79 = 50;
signed short int var_1_80 = -256;
unsigned long int var_1_81 = 16;
unsigned long int var_1_82 = 10000;
double var_1_83 = -0.05;
double var_1_84 = 1.25;
double var_1_86 = 5.5;
double var_1_87 = -0.9;
signed char var_1_88 = -100;
unsigned char var_1_89 = 32;
unsigned char var_1_90 = 64;
unsigned long int var_1_91 = 200;
unsigned short int var_1_92 = 5;
unsigned short int var_1_93 = 30899;
unsigned short int var_1_94 = 17619;
signed char var_1_95 = -64;
float var_1_96 = 7.8;
unsigned char var_1_97 = 1;
unsigned char var_1_98 = 0;
unsigned long int var_1_99 = 5;
signed short int var_1_100 = 25;
unsigned char var_1_101 = 10;
unsigned short int var_1_102 = 4;
unsigned char var_1_103 = 0;
unsigned char var_1_104 = 0;
unsigned char var_1_105 = 1;
unsigned char var_1_106 = 50;
signed short int var_1_107 = -50;
unsigned char var_1_108 = 10;
unsigned short int var_1_109 = 5;
signed char var_1_110 = 16;
signed short int var_1_111 = 4;
unsigned char var_1_112 = 0;
float var_1_113 = 15.4;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_35 = 0;
unsigned long int last_1_var_1_39 = 2;
unsigned short int last_1_var_1_41 = 50;
unsigned char last_1_var_1_44 = 1;
unsigned long int last_1_var_1_59 = 128;
unsigned short int last_1_var_1_61 = 2;
double last_1_var_1_69 = 15.61;
unsigned long int last_1_var_1_81 = 16;
unsigned long int last_1_var_1_82 = 10000;
double last_1_var_1_84 = 1.25;
unsigned char last_1_var_1_89 = 32;
unsigned long int last_1_var_1_91 = 200;
signed short int last_1_var_1_100 = 25;
unsigned char last_1_var_1_103 = 0;
signed short int last_1_var_1_111 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch51Amount500
	if (var_1_31 < last_1_var_1_69) {
		var_1_34 = (min (var_1_13 , var_1_22));
	}


	// From: Req38Batch51Amount500
	signed long int stepLocal_24 = abs (var_1_23);
	signed long int stepLocal_23 = 1;
	if (var_1_9 >= stepLocal_24) {
		var_1_92 = var_1_19;
	} else {
		if (last_1_var_1_103) {
			var_1_92 = ((min (var_1_24 , var_1_33)) + ((max (var_1_93 , var_1_94)) - (abs (var_1_22))));
		} else {
			if (stepLocal_23 != (min (last_1_var_1_81 , (var_1_11 - last_1_var_1_89)))) {
				var_1_92 = (var_1_13 - last_1_var_1_100);
			} else {
				var_1_92 = (min ((var_1_13 - (var_1_33 + var_1_17)) , var_1_19));
			}
		}
	}


	// From: Req31Batch51Amount500
	unsigned char stepLocal_19 = var_1_48;
	if (var_1_37) {
		var_1_82 = (var_1_40 - var_1_8);
	} else {
		if (stepLocal_19 || last_1_var_1_35) {
			var_1_82 = (min ((max ((min (last_1_var_1_91 , last_1_var_1_61)) , var_1_33)) , (var_1_40 - (1506158217u - var_1_13))));
		} else {
			var_1_82 = (max (var_1_8 , (min ((var_1_24 + var_1_23) , var_1_43))));
		}
	}


	// From: Req29Batch51Amount500
	unsigned long int stepLocal_17 = last_1_var_1_39 * var_1_20;
	if (stepLocal_17 <= last_1_var_1_41) {
		var_1_80 = (max (((abs (var_1_66)) - var_1_8) , var_1_23));
	} else {
		var_1_80 = (var_1_24 - var_1_73);
	}


	// From: Req12Batch51Amount500
	unsigned long int stepLocal_1 = last_1_var_1_59 * last_1_var_1_82;
	signed long int stepLocal_0 = last_1_var_1_111;
	if (stepLocal_1 >= 16) {
		if (! var_1_37) {
			var_1_39 = var_1_8;
		} else {
			if (var_1_19 <= stepLocal_0) {
				var_1_39 = (var_1_40 - last_1_var_1_59);
			} else {
				var_1_39 = (max (var_1_23 , (var_1_40 - var_1_18)));
			}
		}
	}


	// From: Req2Batch51Amount500
	if (var_1_4 < 64.4f) {
		var_1_10 = (max ((abs (max (8 , var_1_8))) , var_1_11));
	}


	// From: Req6Batch51Amount500
	if ((var_1_18 >> var_1_22) < var_1_9) {
		var_1_21 = (var_1_22 + var_1_17);
	} else {
		var_1_21 = (var_1_22 + (var_1_23 + var_1_24));
	}


	// From: Req14Batch51Amount500
	var_1_44 = (! (last_1_var_1_44 && (var_1_36 || var_1_45)));


	// From: Req17Batch51Amount500
	unsigned char stepLocal_8 = var_1_48;
	if (((var_1_13 * var_1_11) > var_1_43) || stepLocal_8) {
		var_1_54 = (((var_1_55 - var_1_56) + var_1_57) + (min (var_1_58 , var_1_31)));
	} else {
		var_1_54 = (var_1_57 + (var_1_31 - var_1_55));
	}


	// From: Req20Batch51Amount500
	if ((- 7.55) == var_1_58) {
		var_1_62 = (! var_1_49);
	} else {
		var_1_62 = (var_1_37 && var_1_49);
	}


	// From: Req22Batch51Amount500
	unsigned char stepLocal_11 = var_1_48;
	if (var_1_45 || stepLocal_11) {
		var_1_67 = (max (var_1_18 , (max ((var_1_24 + var_1_66) , var_1_23))));
	} else {
		var_1_67 = var_1_33;
	}


	// From: Req27Batch51Amount500
	var_1_78 = (var_1_24 - var_1_66);


	// From: Req30Batch51Amount500
	signed long int stepLocal_18 = ~ (var_1_13 - var_1_17);
	if (var_1_6 > (var_1_15 * var_1_29)) {
		if (stepLocal_18 <= var_1_64) {
			var_1_81 = (abs (var_1_43));
		} else {
			var_1_81 = (min (var_1_65 , 200u));
		}
	} else {
		var_1_81 = var_1_24;
	}


	// From: Req32Batch51Amount500
	var_1_83 = (max ((max (var_1_56 , var_1_77)) , var_1_57));


	// From: Req34Batch51Amount500
	if (var_1_36) {
		var_1_87 = var_1_29;
	}


	// From: Req37Batch51Amount500
	if (var_1_66 < var_1_24) {
		var_1_91 = (min (var_1_11 , var_1_8));
	} else {
		var_1_91 = (var_1_21 + var_1_13);
	}


	// From: Req40Batch51Amount500
	unsigned long int stepLocal_27 = var_1_81;
	signed long int stepLocal_26 = -256;
	if (stepLocal_26 > var_1_81) {
		var_1_96 = (min (var_1_30 , var_1_31));
	} else {
		if (stepLocal_27 > var_1_94) {
			var_1_96 = var_1_29;
		}
	}


	// From: Req41Batch51Amount500
	var_1_97 = var_1_49;


	// From: Req42Batch51Amount500
	if (var_1_44) {
		var_1_98 = var_1_45;
	}


	// From: Req43Batch51Amount500
	var_1_99 = var_1_73;


	// From: Req44Batch51Amount500
	if (var_1_62) {
		var_1_100 = 64;
	} else {
		var_1_100 = var_1_90;
	}


	// From: Req45Batch51Amount500
	if (var_1_36) {
		var_1_101 = var_1_8;
	} else {
		var_1_101 = var_1_90;
	}


	// From: Req46Batch51Amount500
	var_1_102 = var_1_20;


	// From: Req47Batch51Amount500
	if (var_1_45) {
		var_1_103 = var_1_49;
	} else {
		var_1_103 = var_1_104;
	}


	// From: Req48Batch51Amount500
	var_1_105 = var_1_104;


	// From: Req49Batch51Amount500
	var_1_106 = var_1_24;


	// From: Req50Batch51Amount500
	var_1_107 = var_1_39;


	// From: Req51Batch51Amount500
	if (var_1_36) {
		var_1_108 = var_1_23;
	} else {
		var_1_108 = var_1_66;
	}


	// From: Req52Batch51Amount500
	var_1_109 = var_1_24;


	// From: Req53Batch51Amount500
	if (var_1_48) {
		var_1_110 = var_1_33;
	} else {
		var_1_110 = var_1_64;
	}


	// From: Req54Batch51Amount500
	if (var_1_97) {
		var_1_111 = last_1_var_1_111;
	} else {
		var_1_111 = var_1_65;
	}


	// From: Req55Batch51Amount500
	if (var_1_105) {
		var_1_112 = var_1_49;
	} else {
		var_1_112 = var_1_104;
	}


	// From: Req24Batch51Amount500
	if (((- var_1_40) + var_1_99) >= (var_1_99 * (var_1_34 + var_1_33))) {
		var_1_69 = (min (var_1_30 , (var_1_56 - var_1_71)));
	}


	// From: Req19Batch51Amount500
	unsigned long int stepLocal_10 = ~ var_1_81;
	if (stepLocal_10 == ((var_1_22 + var_1_9) * var_1_82)) {
		var_1_61 = (var_1_23 + var_1_99);
	}


	// From: Req18Batch51Amount500
	signed short int stepLocal_9 = var_1_22;
	if ((last_1_var_1_59 & var_1_109) >= stepLocal_9) {
		var_1_59 = (last_1_var_1_59 + (min ((max (var_1_19 , last_1_var_1_59)) , var_1_80)));
	} else {
		var_1_59 = (last_1_var_1_59 + (max (var_1_60 , var_1_22)));
	}


	// From: Req4Batch51Amount500
	if (var_1_6 != ((var_1_4 / var_1_15) * (- var_1_69))) {
		var_1_14 = ((max (var_1_13 , var_1_39)) - var_1_11);
	} else {
		var_1_14 = var_1_9;
	}


	// From: Req5Batch51Amount500
	if (var_1_15 == var_1_96) {
		var_1_16 = (var_1_8 + var_1_17);
	} else {
		var_1_16 = (max (((max (var_1_18 , var_1_19)) - var_1_20) , var_1_11));
	}


	// From: Req8Batch51Amount500
	if (var_1_11 <= ((abs (64)) ^ var_1_13)) {
		if (var_1_103 || var_1_112) {
			if (! var_1_103) {
				var_1_32 = ((min (32 , var_1_22)) - var_1_8);
			}
		} else {
			var_1_32 = (abs (var_1_22 - (var_1_24 + var_1_33)));
		}
	} else {
		if (var_1_11 <= (var_1_20 + (var_1_39 + 128))) {
			var_1_32 = ((var_1_33 + var_1_24) - 4);
		}
	}


	// From: Req11Batch51Amount500
	if (((max (var_1_17 , var_1_22)) - var_1_20) > var_1_13) {
		if (((var_1_33 + 4) << var_1_91) > (var_1_20 / (min (4 , var_1_13)))) {
			if (var_1_62) {
				if (var_1_23 != var_1_102) {
					var_1_38 = (min (var_1_9 , var_1_19));
				} else {
					var_1_38 = (min ((max (var_1_9 , var_1_33)) , (max (-32 , var_1_22))));
				}
			} else {
				var_1_38 = (abs ((min (var_1_9 , var_1_8)) + var_1_18));
			}
		} else {
			var_1_38 = (-8 + var_1_23);
		}
	}


	// From: Req16Batch51Amount500
	if (var_1_97) {
		var_1_50 = (var_1_36 || (var_1_49 && (var_1_37 && var_1_48)));
	} else {
		if (var_1_83 < (- (var_1_52 - var_1_30))) {
			var_1_50 = ((! var_1_49) || (var_1_36 || (var_1_45 && var_1_53)));
		}
	}


	// From: Req21Batch51Amount500
	if (var_1_97) {
		var_1_63 = ((var_1_24 - var_1_33) + var_1_22);
	} else {
		var_1_63 = (((var_1_22 + var_1_64) + (var_1_65 - var_1_66)) + var_1_24);
	}


	// From: Req26Batch51Amount500
	signed long int stepLocal_15 = var_1_66 - (var_1_75 - var_1_24);
	unsigned char stepLocal_14 = (var_1_24 * var_1_17) != -16;
	unsigned long int stepLocal_13 = max (var_1_91 , var_1_82);
	unsigned long int stepLocal_12 = var_1_59;
	if (var_1_39 < stepLocal_13) {
		if (var_1_53) {
			if (var_1_7 < stepLocal_12) {
				var_1_74 = (min ((64.8 + var_1_55) , var_1_57));
			}
		} else {
			if (stepLocal_15 < (8 << var_1_7)) {
				if (var_1_62 && stepLocal_14) {
					var_1_74 = var_1_56;
				} else {
					var_1_74 = var_1_57;
				}
			} else {
				var_1_74 = (((0.7 + var_1_76) + (min (var_1_77 , var_1_55))) + 99999.5);
			}
		}
	}


	// From: Req35Batch51Amount500
	if (var_1_29 > var_1_69) {
		var_1_88 = (var_1_7 - (max ((abs (var_1_65)) , var_1_73)));
	} else {
		var_1_88 = (var_1_73 + var_1_33);
	}


	// From: Req39Batch51Amount500
	unsigned char stepLocal_25 = var_1_38 <= var_1_9;
	if (var_1_37 || stepLocal_25) {
		var_1_95 = (min ((var_1_33 - var_1_23) , (abs (var_1_64))));
	}


	// From: Req36Batch51Amount500
	signed long int stepLocal_22 = (var_1_14 / 32) ^ (var_1_75 - 50);
	signed short int stepLocal_21 = var_1_80;
	unsigned short int stepLocal_20 = var_1_73;
	if (stepLocal_22 >= (-100000 * var_1_14)) {
		if (stepLocal_20 >= var_1_24) {
			if (var_1_49) {
				if ((var_1_92 % var_1_22) == stepLocal_21) {
					var_1_89 = ((max (var_1_33 , (abs (var_1_22)))) + ((max (var_1_90 , var_1_23)) + var_1_65));
				} else {
					var_1_89 = (min ((var_1_18 - (var_1_75 - var_1_73)) , (max (4 , var_1_65))));
				}
			} else {
				var_1_89 = (var_1_24 + (min (var_1_22 , (max (var_1_73 , var_1_90)))));
			}
		} else {
			var_1_89 = (var_1_19 - (max ((max (var_1_75 , var_1_73)) , var_1_8)));
		}
	} else {
		var_1_89 = (min (var_1_24 , var_1_66));
	}


	// From: Req10Batch51Amount500
	if (var_1_50) {
		var_1_35 = var_1_36;
	} else {
		var_1_35 = (((var_1_19 - var_1_8) > (var_1_24 - var_1_82)) || var_1_37);
	}


	// From: Req25Batch51Amount500
	if (var_1_50) {
		if (var_1_17 < ((var_1_20 * var_1_33) << (var_1_22 + var_1_73))) {
			var_1_72 = (var_1_22 + var_1_33);
		}
	} else {
		var_1_72 = (var_1_66 + var_1_92);
	}


	// From: Req3Batch51Amount500
	if (! var_1_62) {
		var_1_12 = (min ((var_1_13 - var_1_11) , (var_1_8 + var_1_16)));
	} else {
		if (var_1_11 > var_1_16) {
			var_1_12 = 64;
		} else {
			var_1_12 = var_1_11;
		}
	}


	// From: Req7Batch51Amount500
	if (var_1_59 >= var_1_91) {
		if (var_1_112) {
			if (var_1_50 && var_1_44) {
				var_1_25 = (var_1_29 - (var_1_30 - (var_1_31 - 1.5)));
			}
		}
	}


	// From: Req33Batch51Amount500
	if (var_1_37 || (var_1_77 <= var_1_30)) {
		if ((last_1_var_1_84 > var_1_25) || ((- var_1_69) > var_1_56)) {
			var_1_84 = ((max (var_1_56 , (var_1_55 + var_1_31))) - (6.134767165036811E18 - var_1_86));
		}
	}


	// From: Req56Batch51Amount500
	unsigned char stepLocal_29 = var_1_74 >= var_1_83;
	unsigned char stepLocal_28 = (min (var_1_81 , var_1_12)) <= (var_1_11 | var_1_23);
	if (var_1_98 && stepLocal_28) {
		if (var_1_103 && stepLocal_29) {
			var_1_113 = 256.375f;
		} else {
			var_1_113 = var_1_76;
		}
	}


	// From: Req13Batch51Amount500
	unsigned long int stepLocal_7 = var_1_82;
	signed short int stepLocal_6 = var_1_72;
	unsigned long int stepLocal_5 = var_1_59;
	unsigned char stepLocal_4 = var_1_37;
	unsigned long int stepLocal_3 = var_1_59 + (abs (var_1_20));
	signed short int stepLocal_2 = var_1_22;
	if (stepLocal_7 < var_1_23) {
		if (stepLocal_3 >= var_1_9) {
			if (stepLocal_2 != var_1_59) {
				var_1_41 = (max ((min ((var_1_24 + var_1_8) , var_1_13)) , var_1_20));
			} else {
				var_1_41 = (max ((min ((var_1_13 - var_1_19) , 1)) , var_1_109));
			}
		} else {
			if (stepLocal_6 <= ((var_1_17 << var_1_18) / var_1_19)) {
				var_1_41 = (max (1 , 32));
			}
		}
	} else {
		if (var_1_35 || stepLocal_4) {
			var_1_41 = (min ((abs (var_1_101)) , (abs (var_1_43))));
		} else {
			if ((abs (var_1_109)) > stepLocal_5) {
				var_1_41 = var_1_8;
			}
		}
	}


	// From: Req15Batch51Amount500
	if (-256 < ((max (50 , var_1_99)) + var_1_99)) {
		var_1_46 = (! var_1_36);
	} else {
		if (var_1_82 <= (var_1_92 * var_1_22)) {
			var_1_46 = ((var_1_44 || var_1_37) || (var_1_44 || (var_1_48 && var_1_49)));
		} else {
			var_1_46 = ((var_1_84 >= var_1_31) && var_1_45);
		}
	}


	// From: Req23Batch51Amount500
	if (var_1_33 != var_1_82) {
		if (var_1_12 != var_1_41) {
			var_1_68 = (abs (var_1_55));
		} else {
			var_1_68 = (var_1_55 - (max ((var_1_30 - var_1_31) , 9.9999999995E9)));
		}
	} else {
		if (var_1_62) {
			var_1_68 = ((var_1_30 - (var_1_55 + 16.25)) - var_1_31);
		} else {
			var_1_68 = (3.6 - var_1_55);
		}
	}


	// From: Req1Batch51Amount500
	if ((- var_1_68) <= (var_1_4 - var_1_5)) {
		if (var_1_68 >= ((min (var_1_5 , var_1_4)) / var_1_6)) {
			var_1_1 = (min ((var_1_7 - var_1_8) , var_1_9));
		} else {
			var_1_1 = (min ((abs (var_1_8)) , var_1_9));
		}
	}


	// From: Req28Batch51Amount500
	signed long int stepLocal_16 = 8;
	if (var_1_21 < stepLocal_16) {
		var_1_79 = (var_1_65 - var_1_19);
	} else {
		if (var_1_15 <= var_1_74) {
			var_1_79 = var_1_1;
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(var_1_6 != 0.0F);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 32767);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 127);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 127);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 7);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 64);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 4611686.018427383000e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 2305843.009213691400e+12F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 65534);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 1);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 0);
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691400e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691400e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= -230584.3009213691400e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691400e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= -461168.6018427383000e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 2147483647);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= -15);
	assume_abort_if_not(var_1_64 <= 16);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 31);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 31);
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854766000e+12F && var_1_71 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 9);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 63);
	assume_abort_if_not(var_1_75 <= 127);
	var_1_76 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_76 >= -115292.1504606845700e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 1152921.504606845700e+12F && var_1_76 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_77 >= -230584.3009213691400e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 2305843.009213691400e+12F && var_1_77 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_86 >= 0.0F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 4611686.018427383000e+12F && var_1_86 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 64);
	var_1_93 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_93 >= 16383);
	assume_abort_if_not(var_1_93 <= 32767);
	var_1_94 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_94 >= 16383);
	assume_abort_if_not(var_1_94 <= 32767);
	var_1_104 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_104 >= 0);
	assume_abort_if_not(var_1_104 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_35 = var_1_35;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_111 = var_1_111;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((- var_1_68) <= (var_1_4 - var_1_5)) ? ((var_1_68 >= ((min (var_1_5 , var_1_4)) / var_1_6)) ? (var_1_1 == ((signed char) (min ((var_1_7 - var_1_8) , var_1_9)))) : (var_1_1 == ((signed char) (min ((abs (var_1_8)) , var_1_9))))) : 1) && ((var_1_4 < 64.4f) ? (var_1_10 == ((unsigned char) (max ((abs (max (8 , var_1_8))) , var_1_11)))) : 1)) && ((! var_1_62) ? (var_1_12 == ((unsigned short int) (min ((var_1_13 - var_1_11) , (var_1_8 + var_1_16))))) : ((var_1_11 > var_1_16) ? (var_1_12 == ((unsigned short int) 64)) : (var_1_12 == ((unsigned short int) var_1_11))))) && ((var_1_6 != ((var_1_4 / var_1_15) * (- var_1_69))) ? (var_1_14 == ((signed long int) ((max (var_1_13 , var_1_39)) - var_1_11))) : (var_1_14 == ((signed long int) var_1_9)))) && ((var_1_15 == var_1_96) ? (var_1_16 == ((unsigned char) (var_1_8 + var_1_17))) : (var_1_16 == ((unsigned char) (max (((max (var_1_18 , var_1_19)) - var_1_20) , var_1_11)))))) && (((var_1_18 >> var_1_22) < var_1_9) ? (var_1_21 == ((unsigned char) (var_1_22 + var_1_17))) : (var_1_21 == ((unsigned char) (var_1_22 + (var_1_23 + var_1_24)))))) && ((var_1_59 >= var_1_91) ? (var_1_112 ? ((var_1_50 && var_1_44) ? (var_1_25 == ((double) (var_1_29 - (var_1_30 - (var_1_31 - 1.5))))) : 1) : 1) : 1)) && ((var_1_11 <= ((abs (64)) ^ var_1_13)) ? ((var_1_103 || var_1_112) ? ((! var_1_103) ? (var_1_32 == ((signed char) ((min (32 , var_1_22)) - var_1_8))) : 1) : (var_1_32 == ((signed char) (abs (var_1_22 - (var_1_24 + var_1_33)))))) : ((var_1_11 <= (var_1_20 + (var_1_39 + 128))) ? (var_1_32 == ((signed char) ((var_1_33 + var_1_24) - 4))) : 1))) && ((var_1_31 < last_1_var_1_69) ? (var_1_34 == ((unsigned short int) (min (var_1_13 , var_1_22)))) : 1)) && (var_1_50 ? (var_1_35 == ((unsigned char) var_1_36)) : (var_1_35 == ((unsigned char) (((var_1_19 - var_1_8) > (var_1_24 - var_1_82)) || var_1_37))))) && ((((max (var_1_17 , var_1_22)) - var_1_20) > var_1_13) ? ((((var_1_33 + 4) << var_1_91) > (var_1_20 / (min (4 , var_1_13)))) ? (var_1_62 ? ((var_1_23 != var_1_102) ? (var_1_38 == ((signed short int) (min (var_1_9 , var_1_19)))) : (var_1_38 == ((signed short int) (min ((max (var_1_9 , var_1_33)) , (max (-32 , var_1_22))))))) : (var_1_38 == ((signed short int) (abs ((min (var_1_9 , var_1_8)) + var_1_18))))) : (var_1_38 == ((signed short int) (-8 + var_1_23)))) : 1)) && (((last_1_var_1_59 * last_1_var_1_82) >= 16) ? ((! var_1_37) ? (var_1_39 == ((unsigned long int) var_1_8)) : ((var_1_19 <= last_1_var_1_111) ? (var_1_39 == ((unsigned long int) (var_1_40 - last_1_var_1_59))) : (var_1_39 == ((unsigned long int) (max (var_1_23 , (var_1_40 - var_1_18))))))) : 1)) && ((var_1_82 < var_1_23) ? (((var_1_59 + (abs (var_1_20))) >= var_1_9) ? ((var_1_22 != var_1_59) ? (var_1_41 == ((unsigned short int) (max ((min ((var_1_24 + var_1_8) , var_1_13)) , var_1_20)))) : (var_1_41 == ((unsigned short int) (max ((min ((var_1_13 - var_1_19) , 1)) , var_1_109))))) : ((var_1_72 <= ((var_1_17 << var_1_18) / var_1_19)) ? (var_1_41 == ((unsigned short int) (max (1 , 32)))) : 1)) : ((var_1_35 || var_1_37) ? (var_1_41 == ((unsigned short int) (min ((abs (var_1_101)) , (abs (var_1_43)))))) : (((abs (var_1_109)) > var_1_59) ? (var_1_41 == ((unsigned short int) var_1_8)) : 1)))) && (var_1_44 == ((unsigned char) (! (last_1_var_1_44 && (var_1_36 || var_1_45)))))) && ((-256 < ((max (50 , var_1_99)) + var_1_99)) ? (var_1_46 == ((unsigned char) (! var_1_36))) : ((var_1_82 <= (var_1_92 * var_1_22)) ? (var_1_46 == ((unsigned char) ((var_1_44 || var_1_37) || (var_1_44 || (var_1_48 && var_1_49))))) : (var_1_46 == ((unsigned char) ((var_1_84 >= var_1_31) && var_1_45)))))) && (var_1_97 ? (var_1_50 == ((unsigned char) (var_1_36 || (var_1_49 && (var_1_37 && var_1_48))))) : ((var_1_83 < (- (var_1_52 - var_1_30))) ? (var_1_50 == ((unsigned char) ((! var_1_49) || (var_1_36 || (var_1_45 && var_1_53))))) : 1))) && ((((var_1_13 * var_1_11) > var_1_43) || var_1_48) ? (var_1_54 == ((double) (((var_1_55 - var_1_56) + var_1_57) + (min (var_1_58 , var_1_31))))) : (var_1_54 == ((double) (var_1_57 + (var_1_31 - var_1_55)))))) && (((last_1_var_1_59 & var_1_109) >= var_1_22) ? (var_1_59 == ((unsigned long int) (last_1_var_1_59 + (min ((max (var_1_19 , last_1_var_1_59)) , var_1_80))))) : (var_1_59 == ((unsigned long int) (last_1_var_1_59 + (max (var_1_60 , var_1_22))))))) && (((~ var_1_81) == ((var_1_22 + var_1_9) * var_1_82)) ? (var_1_61 == ((unsigned short int) (var_1_23 + var_1_99))) : 1)) && (((- 7.55) == var_1_58) ? (var_1_62 == ((unsigned char) (! var_1_49))) : (var_1_62 == ((unsigned char) (var_1_37 && var_1_49))))) && (var_1_97 ? (var_1_63 == ((signed char) ((var_1_24 - var_1_33) + var_1_22))) : (var_1_63 == ((signed char) (((var_1_22 + var_1_64) + (var_1_65 - var_1_66)) + var_1_24))))) && ((var_1_45 || var_1_48) ? (var_1_67 == ((unsigned char) (max (var_1_18 , (max ((var_1_24 + var_1_66) , var_1_23)))))) : (var_1_67 == ((unsigned char) var_1_33)))) && ((var_1_33 != var_1_82) ? ((var_1_12 != var_1_41) ? (var_1_68 == ((double) (abs (var_1_55)))) : (var_1_68 == ((double) (var_1_55 - (max ((var_1_30 - var_1_31) , 9.9999999995E9)))))) : (var_1_62 ? (var_1_68 == ((double) ((var_1_30 - (var_1_55 + 16.25)) - var_1_31))) : (var_1_68 == ((double) (3.6 - var_1_55)))))) && ((((- var_1_40) + var_1_99) >= (var_1_99 * (var_1_34 + var_1_33))) ? (var_1_69 == ((double) (min (var_1_30 , (var_1_56 - var_1_71))))) : 1)) && (var_1_50 ? ((var_1_17 < ((var_1_20 * var_1_33) << (var_1_22 + var_1_73))) ? (var_1_72 == ((signed short int) (var_1_22 + var_1_33))) : 1) : (var_1_72 == ((signed short int) (var_1_66 + var_1_92))))) && ((var_1_39 < (max (var_1_91 , var_1_82))) ? (var_1_53 ? ((var_1_7 < var_1_59) ? (var_1_74 == ((double) (min ((64.8 + var_1_55) , var_1_57)))) : 1) : (((var_1_66 - (var_1_75 - var_1_24)) < (8 << var_1_7)) ? ((var_1_62 && ((var_1_24 * var_1_17) != -16)) ? (var_1_74 == ((double) var_1_56)) : (var_1_74 == ((double) var_1_57))) : (var_1_74 == ((double) (((0.7 + var_1_76) + (min (var_1_77 , var_1_55))) + 99999.5))))) : 1)) && (var_1_78 == ((signed short int) (var_1_24 - var_1_66)))) && ((var_1_21 < 8) ? (var_1_79 == ((signed short int) (var_1_65 - var_1_19))) : ((var_1_15 <= var_1_74) ? (var_1_79 == ((signed short int) var_1_1)) : 1))) && (((last_1_var_1_39 * var_1_20) <= last_1_var_1_41) ? (var_1_80 == ((signed short int) (max (((abs (var_1_66)) - var_1_8) , var_1_23)))) : (var_1_80 == ((signed short int) (var_1_24 - var_1_73))))) && ((var_1_6 > (var_1_15 * var_1_29)) ? (((~ (var_1_13 - var_1_17)) <= var_1_64) ? (var_1_81 == ((unsigned long int) (abs (var_1_43)))) : (var_1_81 == ((unsigned long int) (min (var_1_65 , 200u))))) : (var_1_81 == ((unsigned long int) var_1_24)))) && (var_1_37 ? (var_1_82 == ((unsigned long int) (var_1_40 - var_1_8))) : ((var_1_48 || last_1_var_1_35) ? (var_1_82 == ((unsigned long int) (min ((max ((min (last_1_var_1_91 , last_1_var_1_61)) , var_1_33)) , (var_1_40 - (1506158217u - var_1_13)))))) : (var_1_82 == ((unsigned long int) (max (var_1_8 , (min ((var_1_24 + var_1_23) , var_1_43))))))))) && (var_1_83 == ((double) (max ((max (var_1_56 , var_1_77)) , var_1_57))))) && ((var_1_37 || (var_1_77 <= var_1_30)) ? (((last_1_var_1_84 > var_1_25) || ((- var_1_69) > var_1_56)) ? (var_1_84 == ((double) ((max (var_1_56 , (var_1_55 + var_1_31))) - (6.134767165036811E18 - var_1_86)))) : 1) : 1)) && (var_1_36 ? (var_1_87 == ((double) var_1_29)) : 1)) && ((var_1_29 > var_1_69) ? (var_1_88 == ((signed char) (var_1_7 - (max ((abs (var_1_65)) , var_1_73))))) : (var_1_88 == ((signed char) (var_1_73 + var_1_33))))) && ((((var_1_14 / 32) ^ (var_1_75 - 50)) >= (-100000 * var_1_14)) ? ((var_1_73 >= var_1_24) ? (var_1_49 ? (((var_1_92 % var_1_22) == var_1_80) ? (var_1_89 == ((unsigned char) ((max (var_1_33 , (abs (var_1_22)))) + ((max (var_1_90 , var_1_23)) + var_1_65)))) : (var_1_89 == ((unsigned char) (min ((var_1_18 - (var_1_75 - var_1_73)) , (max (4 , var_1_65))))))) : (var_1_89 == ((unsigned char) (var_1_24 + (min (var_1_22 , (max (var_1_73 , var_1_90)))))))) : (var_1_89 == ((unsigned char) (var_1_19 - (max ((max (var_1_75 , var_1_73)) , var_1_8)))))) : (var_1_89 == ((unsigned char) (min (var_1_24 , var_1_66)))))) && ((var_1_66 < var_1_24) ? (var_1_91 == ((unsigned long int) (min (var_1_11 , var_1_8)))) : (var_1_91 == ((unsigned long int) (var_1_21 + var_1_13))))) && ((var_1_9 >= (abs (var_1_23))) ? (var_1_92 == ((unsigned short int) var_1_19)) : (last_1_var_1_103 ? (var_1_92 == ((unsigned short int) ((min (var_1_24 , var_1_33)) + ((max (var_1_93 , var_1_94)) - (abs (var_1_22)))))) : ((1 != (min (last_1_var_1_81 , (var_1_11 - last_1_var_1_89)))) ? (var_1_92 == ((unsigned short int) (var_1_13 - last_1_var_1_100))) : (var_1_92 == ((unsigned short int) (min ((var_1_13 - (var_1_33 + var_1_17)) , var_1_19)))))))) && ((var_1_37 || (var_1_38 <= var_1_9)) ? (var_1_95 == ((signed char) (min ((var_1_33 - var_1_23) , (abs (var_1_64)))))) : 1)) && ((-256 > var_1_81) ? (var_1_96 == ((float) (min (var_1_30 , var_1_31)))) : ((var_1_81 > var_1_94) ? (var_1_96 == ((float) var_1_29)) : 1))) && (var_1_97 == ((unsigned char) var_1_49))) && (var_1_44 ? (var_1_98 == ((unsigned char) var_1_45)) : 1)) && (var_1_99 == ((unsigned long int) var_1_73))) && (var_1_62 ? (var_1_100 == ((signed short int) 64)) : (var_1_100 == ((signed short int) var_1_90)))) && (var_1_36 ? (var_1_101 == ((unsigned char) var_1_8)) : (var_1_101 == ((unsigned char) var_1_90)))) && (var_1_102 == ((unsigned short int) var_1_20))) && (var_1_45 ? (var_1_103 == ((unsigned char) var_1_49)) : (var_1_103 == ((unsigned char) var_1_104)))) && (var_1_105 == ((unsigned char) var_1_104))) && (var_1_106 == ((unsigned char) var_1_24))) && (var_1_107 == ((signed short int) var_1_39))) && (var_1_36 ? (var_1_108 == ((unsigned char) var_1_23)) : (var_1_108 == ((unsigned char) var_1_66)))) && (var_1_109 == ((unsigned short int) var_1_24))) && (var_1_48 ? (var_1_110 == ((signed char) var_1_33)) : (var_1_110 == ((signed char) var_1_64)))) && (var_1_97 ? (var_1_111 == ((signed short int) last_1_var_1_111)) : (var_1_111 == ((signed short int) var_1_65)))) && (var_1_105 ? (var_1_112 == ((unsigned char) var_1_49)) : (var_1_112 == ((unsigned char) var_1_104)))) && ((var_1_98 && ((min (var_1_81 , var_1_12)) <= (var_1_11 | var_1_23))) ? ((var_1_103 && (var_1_74 >= var_1_83)) ? (var_1_113 == ((float) 256.375f)) : (var_1_113 == ((float) var_1_76))) : 1)
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
