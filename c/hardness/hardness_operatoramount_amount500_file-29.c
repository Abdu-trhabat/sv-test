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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch29Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char var_1_5 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned short int var_1_13 = 32;
unsigned short int var_1_14 = 64;
unsigned short int var_1_15 = 128;
signed char var_1_16 = 0;
double var_1_17 = 7.2;
signed char var_1_18 = -16;
signed char var_1_19 = 10;
signed char var_1_20 = -8;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 32;
unsigned char var_1_23 = 128;
unsigned char var_1_24 = 200;
unsigned char var_1_25 = 2;
unsigned char var_1_26 = 8;
double var_1_27 = 128.125;
double var_1_28 = 5.6;
double var_1_29 = 63.1;
unsigned char var_1_30 = 1;
signed char var_1_32 = 100;
unsigned char var_1_34 = 5;
unsigned char var_1_35 = 10;
unsigned long int var_1_36 = 16;
unsigned long int var_1_37 = 4092092371;
double var_1_38 = 4.75;
double var_1_39 = 1.4;
double var_1_40 = 3.65;
double var_1_41 = 64.8;
double var_1_43 = 50.4;
unsigned short int var_1_44 = 100;
unsigned short int var_1_45 = 62183;
unsigned char var_1_46 = 64;
unsigned char var_1_47 = 50;
unsigned short int var_1_48 = 5;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 5;
unsigned long int var_1_52 = 32;
unsigned char var_1_53 = 0;
unsigned short int var_1_54 = 500;
unsigned short int var_1_55 = 25;
unsigned short int var_1_56 = 1;
unsigned short int var_1_57 = 31321;
signed char var_1_58 = -32;
signed char var_1_59 = 1;
signed long int var_1_60 = 50;
signed long int var_1_61 = 1000000000;
signed long int var_1_62 = 10;
signed long int var_1_63 = 2110459739;
float var_1_64 = 15.8;
signed char var_1_65 = -2;
signed char var_1_66 = 50;
signed char var_1_67 = -4;
signed long int var_1_68 = -8;
signed short int var_1_69 = 10;
float var_1_70 = 49.2;
float var_1_71 = 4.949;
float var_1_72 = 7.5;
unsigned long int var_1_73 = 64;
unsigned long int var_1_74 = 2470911659;
signed char var_1_75 = -100;
double var_1_77 = -0.1;
double var_1_78 = 25.8;
double var_1_79 = 255.4;
double var_1_80 = 1000000.2;
double var_1_81 = 0.25;
double var_1_82 = 1.375;
signed long int var_1_83 = 64;
unsigned long int var_1_84 = 2;
unsigned long int var_1_85 = 1000000000;
unsigned long int var_1_86 = 10;
unsigned long int var_1_87 = 1973690624;
unsigned long int var_1_88 = 1763107579;
unsigned short int var_1_89 = 256;
signed long int var_1_90 = 1429903366;
signed char var_1_91 = 1;
unsigned long int var_1_92 = 64;
unsigned char var_1_93 = 0;
double var_1_94 = 7.5;
signed short int var_1_95 = -128;
unsigned short int var_1_96 = 5;
unsigned long int var_1_97 = 4;
signed long int var_1_98 = -128;
signed long int var_1_99 = 1;
unsigned short int var_1_100 = 0;
signed char var_1_101 = -10;
double var_1_102 = 256.75;
signed long int var_1_103 = -1;
signed long int var_1_104 = 10;
unsigned char var_1_105 = 1;
double var_1_106 = 127.25;
unsigned short int var_1_107 = 2;
unsigned short int var_1_108 = 256;
float var_1_109 = 49.5;
double var_1_110 = 49.45;
float var_1_111 = 25.5;
double var_1_112 = 16.5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
unsigned short int last_1_var_1_13 = 32;
unsigned char last_1_var_1_30 = 1;
unsigned long int last_1_var_1_36 = 16;
double last_1_var_1_38 = 4.75;
unsigned short int last_1_var_1_44 = 100;
unsigned short int last_1_var_1_55 = 25;
signed long int last_1_var_1_62 = 10;
signed long int last_1_var_1_68 = -8;
signed short int last_1_var_1_69 = 10;
unsigned long int last_1_var_1_73 = 64;
signed long int last_1_var_1_83 = 64;
unsigned long int last_1_var_1_86 = 10;
unsigned short int last_1_var_1_89 = 256;
signed long int last_1_var_1_98 = -128;
unsigned short int last_1_var_1_100 = 0;
double last_1_var_1_102 = 256.75;
signed long int last_1_var_1_104 = 10;
unsigned char last_1_var_1_105 = 1;
double last_1_var_1_106 = 127.25;
unsigned short int last_1_var_1_108 = 256;
double last_1_var_1_112 = 16.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req33Batch29Amount500
	unsigned char stepLocal_30 = last_1_var_1_105;
	signed long int stepLocal_29 = last_1_var_1_83;
	signed long int stepLocal_28 = last_1_var_1_108 + (last_1_var_1_62 / var_1_32);
	unsigned char stepLocal_27 = 64 > last_1_var_1_98;
	if (last_1_var_1_112 >= var_1_40) {
		if (var_1_15 == stepLocal_29) {
			var_1_81 = (abs (var_1_29));
		} else {
			if ((var_1_26 > last_1_var_1_89) || stepLocal_30) {
				if (stepLocal_27 || last_1_var_1_30) {
					var_1_81 = ((min (var_1_71 , (8.81680280191624E18 - 100.4))) - ((abs (var_1_80)) + var_1_41));
				} else {
					var_1_81 = ((min (255.6 , var_1_40)) - var_1_43);
				}
			} else {
				var_1_81 = (var_1_80 + (min (15.6 , var_1_39)));
			}
		}
	} else {
		if (-200 < stepLocal_28) {
			var_1_81 = (((499.75 + var_1_82) - var_1_40) + (var_1_71 - var_1_41));
		} else {
			var_1_81 = (min ((min (var_1_29 , (max (var_1_43 , var_1_71)))) , var_1_80));
		}
	}


	// From: Req22Batch29Amount500
	unsigned long int stepLocal_12 = max (0 , last_1_var_1_36);
	unsigned char stepLocal_11 = var_1_10;
	signed long int stepLocal_10 = (min (last_1_var_1_55 , var_1_57)) * var_1_32;
	if (last_1_var_1_1 || stepLocal_11) {
		var_1_62 = (min (25 , var_1_24));
	} else {
		if (var_1_23 <= stepLocal_12) {
			if (! last_1_var_1_1) {
				if (-256 >= stepLocal_10) {
					var_1_62 = ((abs (last_1_var_1_44)) - var_1_23);
				}
			} else {
				var_1_62 = ((var_1_63 - (max (last_1_var_1_68 , var_1_23))) - last_1_var_1_98);
			}
		}
	}


	// From: Req16Batch29Amount500
	if (var_1_37 >= last_1_var_1_73) {
		var_1_52 = (abs (var_1_45));
	}


	// From: Req38Batch29Amount500
	unsigned char stepLocal_33 = var_1_24;
	if (var_1_12) {
		if (var_1_52 <= stepLocal_33) {
			var_1_91 = (var_1_59 + var_1_66);
		}
	} else {
		var_1_91 = (max (1 , ((min (var_1_35 , var_1_25)) - (min (var_1_66 , var_1_47)))));
	}


	// From: Req39Batch29Amount500
	if (var_1_35 < last_1_var_1_104) {
		var_1_92 = (((last_1_var_1_108 + last_1_var_1_69) + var_1_66) + var_1_51);
	}


	// From: Req21Batch29Amount500
	var_1_60 = ((var_1_92 - (var_1_61 - var_1_47)) + -100);


	// From: Req7Batch29Amount500
	if (var_1_14 > last_1_var_1_100) {
		var_1_30 = (var_1_10 || var_1_11);
	} else {
		if (last_1_var_1_13 != (var_1_25 / var_1_23)) {
			if (((var_1_32 - var_1_25) << 16) < ((max (var_1_14 , var_1_26)) - last_1_var_1_13)) {
				var_1_30 = (var_1_11 || var_1_10);
			} else {
				if ((last_1_var_1_106 * var_1_17) < last_1_var_1_38) {
					var_1_30 = (var_1_5 && ((var_1_29 < last_1_var_1_102) || var_1_12));
				}
			}
		} else {
			var_1_30 = (((last_1_var_1_62 < last_1_var_1_104) && var_1_11) || (! (var_1_12 && var_1_5)));
		}
	}


	// From: Req48Batch29Amount500
	if (var_1_30) {
		var_1_102 = 4.75;
	}


	// From: Req25Batch29Amount500
	unsigned char stepLocal_18 = ! var_1_30;
	unsigned short int stepLocal_17 = var_1_14;
	if (stepLocal_17 <= (var_1_23 + var_1_26)) {
		var_1_67 = var_1_59;
	} else {
		if (var_1_11 && stepLocal_18) {
			var_1_67 = ((max (var_1_47 , (min (8 , var_1_59)))) + var_1_25);
		} else {
			var_1_67 = var_1_18;
		}
	}


	// From: Req5Batch29Amount500
	if (var_1_5) {
		var_1_22 = ((min ((abs (var_1_23)) , (var_1_24 - var_1_25))) - var_1_26);
	}


	// From: Req12Batch29Amount500
	var_1_46 = (var_1_24 - (max (var_1_32 , (var_1_25 + var_1_47))));


	// From: Req18Batch29Amount500
	var_1_54 = (var_1_45 - (abs (5)));


	// From: Req19Batch29Amount500
	if (var_1_12) {
		var_1_55 = var_1_32;
	} else {
		var_1_55 = (var_1_56 + ((var_1_57 - var_1_25) - var_1_35));
	}


	// From: Req20Batch29Amount500
	var_1_58 = ((var_1_59 + 25) + var_1_47);


	// From: Req41Batch29Amount500
	if ((var_1_47 / var_1_57) != (~ var_1_32)) {
		var_1_94 = ((min (var_1_39 , (max (var_1_80 , var_1_79)))) + (var_1_72 + var_1_82));
	}


	// From: Req43Batch29Amount500
	var_1_96 = var_1_25;


	// From: Req44Batch29Amount500
	if (var_1_5) {
		var_1_97 = var_1_15;
	}


	// From: Req45Batch29Amount500
	if (var_1_5) {
		var_1_98 = var_1_99;
	}


	// From: Req51Batch29Amount500
	var_1_105 = var_1_11;


	// From: Req52Batch29Amount500
	var_1_106 = var_1_41;


	// From: Req53Batch29Amount500
	if (var_1_5) {
		var_1_107 = var_1_66;
	} else {
		var_1_107 = var_1_25;
	}


	// From: Req55Batch29Amount500
	if (var_1_105) {
		var_1_109 = var_1_82;
	}


	// From: Req56Batch29Amount500
	var_1_110 = var_1_39;


	// From: Req57Batch29Amount500
	var_1_111 = var_1_82;


	// From: Req58Batch29Amount500
	var_1_112 = var_1_39;


	// From: Req29Batch29Amount500
	unsigned short int stepLocal_22 = var_1_14;
	if (stepLocal_22 <= var_1_61) {
		var_1_73 = (max ((min (var_1_63 , var_1_98)) , var_1_25));
	} else {
		var_1_73 = (min ((min (var_1_61 , (var_1_74 - var_1_26))) , (var_1_62 + var_1_54)));
	}


	// From: Req24Batch29Amount500
	signed long int stepLocal_16 = (var_1_14 - var_1_62) * var_1_98;
	if (stepLocal_16 == ((var_1_18 & var_1_91) / (max (var_1_45 , var_1_23)))) {
		var_1_65 = ((var_1_25 - (var_1_66 - 4)) + (min ((min (32 , var_1_59)) , -50)));
	} else {
		var_1_65 = var_1_24;
	}


	// From: Req42Batch29Amount500
	unsigned long int stepLocal_36 = var_1_52;
	if ((var_1_57 - var_1_26) <= stepLocal_36) {
		if (var_1_30) {
			var_1_95 = var_1_26;
		}
	}


	// From: Req13Batch29Amount500
	if (var_1_95 <= (var_1_24 - var_1_26)) {
		var_1_48 = (abs (var_1_14));
	} else {
		var_1_48 = (var_1_25 + var_1_32);
	}


	// From: Req14Batch29Amount500
	if (var_1_12) {
		var_1_49 = (var_1_105 && var_1_10);
	} else {
		var_1_49 = (! (var_1_10 || var_1_11));
	}


	// From: Req31Batch29Amount500
	if (var_1_12) {
		if (var_1_29 < (var_1_94 / var_1_17)) {
			var_1_77 = (var_1_41 - (max (256.75 , var_1_29)));
		} else {
			var_1_77 = (min (var_1_29 , (var_1_40 - 256.5)));
		}
	} else {
		var_1_77 = var_1_29;
	}


	// From: Req35Batch29Amount500
	unsigned char stepLocal_31 = var_1_23;
	if ((var_1_71 - var_1_82) <= ((min (1.4 , var_1_80)) * (var_1_40 - var_1_41))) {
		var_1_84 = (var_1_74 - ((var_1_85 - 16u) + 5u));
	} else {
		if (stepLocal_31 > ((abs (var_1_24)) - 25)) {
			var_1_84 = (var_1_96 + var_1_26);
		}
	}


	// From: Req36Batch29Amount500
	if (last_1_var_1_86 >= var_1_92) {
		if (var_1_96 > (var_1_37 + 25)) {
			var_1_86 = ((var_1_87 + var_1_88) - last_1_var_1_86);
		}
	}


	// From: Req49Batch29Amount500
	if (var_1_11) {
		var_1_103 = var_1_107;
	} else {
		var_1_103 = var_1_35;
	}


	// From: Req34Batch29Amount500
	if (var_1_81 >= ((var_1_28 + 3.5) * 255.5)) {
		var_1_83 = (min (var_1_52 , var_1_37));
	} else {
		var_1_83 = (max ((max (var_1_95 , -10)) , var_1_60));
	}


	// From: Req8Batch29Amount500
	if ((var_1_110 * (var_1_77 + 10.4)) >= (max (var_1_81 , 999999.25))) {
		var_1_34 = (max (var_1_32 , (var_1_25 + (var_1_35 + 1))));
	} else {
		var_1_34 = (abs (var_1_24));
	}


	// From: Req32Batch29Amount500
	unsigned short int stepLocal_26 = var_1_56;
	unsigned short int stepLocal_25 = var_1_54;
	signed long int stepLocal_24 = (var_1_66 << var_1_47) | var_1_83;
	signed char stepLocal_23 = var_1_65;
	if (var_1_84 < stepLocal_24) {
		var_1_78 = (max (var_1_29 , (max (var_1_41 , (min (var_1_71 , var_1_72))))));
	} else {
		if (stepLocal_23 > var_1_59) {
			if (stepLocal_25 >= var_1_55) {
				var_1_78 = (min (var_1_72 , ((var_1_79 + var_1_80) + (max (var_1_41 , 63.5)))));
			} else {
				var_1_78 = (min (var_1_79 , var_1_41));
			}
		} else {
			if (var_1_12) {
				if (var_1_28 <= var_1_102) {
					if (stepLocal_26 != var_1_92) {
						var_1_78 = (max (var_1_28 , (abs (min (127.5 , var_1_80)))));
					} else {
						var_1_78 = (max ((500.5 + var_1_79) , var_1_71));
					}
				} else {
					var_1_78 = var_1_43;
				}
			} else {
				var_1_78 = ((var_1_71 + var_1_41) - var_1_40);
			}
		}
	}


	// From: Req37Batch29Amount500
	unsigned long int stepLocal_32 = var_1_88 - (var_1_90 - var_1_103);
	if ((var_1_92 - var_1_47) >= stepLocal_32) {
		if (var_1_30) {
			var_1_89 = (var_1_45 - var_1_57);
		} else {
			var_1_89 = (max (var_1_45 , var_1_51));
		}
	}


	// From: Req2Batch29Amount500
	signed long int stepLocal_2 = var_1_103;
	if (var_1_73 >= stepLocal_2) {
		var_1_13 = (var_1_14 + var_1_15);
	}


	// From: Req4Batch29Amount500
	if (var_1_17 == var_1_77) {
		var_1_21 = (var_1_5 && var_1_11);
	} else {
		var_1_21 = (var_1_5 || var_1_12);
	}


	// From: Req6Batch29Amount500
	unsigned char stepLocal_5 = var_1_17 == var_1_110;
	signed long int stepLocal_4 = 8;
	if (var_1_20 > stepLocal_4) {
		if (stepLocal_5 || var_1_21) {
			var_1_27 = var_1_28;
		} else {
			var_1_27 = (var_1_29 - 1000.7);
		}
	} else {
		var_1_27 = var_1_29;
	}


	// From: Req10Batch29Amount500
	unsigned char stepLocal_7 = var_1_11;
	if (last_1_var_1_38 > (min (var_1_106 , var_1_112))) {
		var_1_38 = (var_1_39 + (var_1_40 - var_1_41));
	} else {
		if ((last_1_var_1_38 * 32.6) != var_1_77) {
			if (var_1_105 || stepLocal_7) {
				var_1_38 = ((32.6 - var_1_40) + 10.5);
			} else {
				if (var_1_12) {
					var_1_38 = (var_1_29 - (min (var_1_43 , 2.5)));
				} else {
					var_1_38 = (min (var_1_43 , var_1_29));
				}
			}
		}
	}


	// From: Req28Batch29Amount500
	if ((min (var_1_15 , var_1_83)) > var_1_14) {
		var_1_70 = ((var_1_40 + (max (var_1_41 , var_1_71))) - var_1_29);
	} else {
		var_1_70 = (var_1_71 + (var_1_72 + 8.2f));
	}


	// From: Req47Batch29Amount500
	if (var_1_21) {
		var_1_101 = var_1_18;
	} else {
		var_1_101 = var_1_24;
	}


	// From: Req46Batch29Amount500
	if (var_1_21) {
		var_1_100 = var_1_48;
	} else {
		var_1_100 = var_1_15;
	}


	// From: Req9Batch29Amount500
	signed long int stepLocal_6 = var_1_89 % var_1_24;
	if (stepLocal_6 > var_1_32) {
		var_1_36 = (((abs (var_1_37)) - var_1_24) - var_1_15);
	} else {
		var_1_36 = var_1_26;
	}


	// From: Req50Batch29Amount500
	if (var_1_49) {
		var_1_104 = var_1_67;
	} else {
		var_1_104 = var_1_100;
	}


	// From: Req3Batch29Amount500
	unsigned long int stepLocal_3 = var_1_92;
	if (var_1_27 >= (var_1_38 / (abs (var_1_17)))) {
		if (var_1_14 < stepLocal_3) {
			var_1_16 = var_1_18;
		} else {
			var_1_16 = (min (-64 , (min ((min (var_1_18 , var_1_19)) , var_1_20))));
		}
	}


	// From: Req23Batch29Amount500
	unsigned short int stepLocal_15 = var_1_56;
	unsigned short int stepLocal_14 = var_1_14;
	signed long int stepLocal_13 = (min (var_1_25 , var_1_47)) - var_1_26;
	if (stepLocal_14 >= ((- 5) + (var_1_84 | var_1_100))) {
		if (var_1_48 > stepLocal_15) {
			var_1_64 = (min (var_1_39 , (var_1_43 - var_1_41)));
		} else {
			var_1_64 = ((abs (var_1_39)) - var_1_40);
		}
	} else {
		if (! var_1_12) {
			if (var_1_62 > stepLocal_13) {
				var_1_64 = var_1_43;
			} else {
				var_1_64 = (var_1_43 - var_1_41);
			}
		} else {
			var_1_64 = 1000.5f;
		}
	}


	// From: Req30Batch29Amount500
	if (var_1_104 <= (min ((var_1_45 - var_1_51) , var_1_56))) {
		var_1_75 = (min ((min (var_1_18 , var_1_24)) , var_1_59));
	} else {
		var_1_75 = (abs (var_1_25));
	}


	// From: Req40Batch29Amount500
	unsigned char stepLocal_35 = var_1_43 <= var_1_64;
	unsigned long int stepLocal_34 = var_1_73;
	if (stepLocal_35 && var_1_11) {
		if (var_1_102 != (- var_1_71)) {
			var_1_93 = ((var_1_47 + var_1_25) + var_1_66);
		} else {
			if (var_1_18 >= stepLocal_34) {
				var_1_93 = ((max (var_1_23 , var_1_24)) - var_1_35);
			}
		}
	} else {
		var_1_93 = var_1_47;
	}


	// From: Req1Batch29Amount500
	unsigned long int stepLocal_1 = var_1_97 + var_1_100;
	unsigned long int stepLocal_0 = var_1_97;
	if (stepLocal_0 != var_1_92) {
		if (var_1_92 >= stepLocal_1) {
			var_1_1 = var_1_5;
		} else {
			if (((4.6 * var_1_110) * 1.000000002E8) >= ((var_1_78 + var_1_38) + (3.75 + var_1_78))) {
				var_1_1 = (! (var_1_10 || var_1_11));
			}
		}
	} else {
		var_1_1 = var_1_12;
	}


	// From: Req26Batch29Amount500
	unsigned char stepLocal_20 = var_1_47;
	signed long int stepLocal_19 = (min (var_1_47 , 32)) - var_1_25;
	if (var_1_32 == stepLocal_19) {
		var_1_68 = (var_1_56 + (max (var_1_19 , 256)));
	} else {
		if (stepLocal_20 >= (- var_1_15)) {
			var_1_68 = (min ((max (var_1_59 , var_1_51)) , var_1_52));
		} else {
			var_1_68 = (abs (var_1_36));
		}
	}


	// From: Req17Batch29Amount500
	unsigned char stepLocal_9 = var_1_12;
	if (var_1_105 && stepLocal_9) {
		var_1_53 = (var_1_12 || var_1_5);
	} else {
		var_1_53 = ((var_1_16 < var_1_35) && var_1_11);
	}


	// From: Req27Batch29Amount500
	unsigned char stepLocal_21 = var_1_53;
	if ((var_1_5 || var_1_21) || stepLocal_21) {
		var_1_69 = (var_1_35 - var_1_47);
	}


	// From: Req15Batch29Amount500
	signed long int stepLocal_8 = var_1_23 - 32;
	if (var_1_93 > stepLocal_8) {
		if ((- var_1_94) < var_1_41) {
			var_1_50 = var_1_51;
		} else {
			var_1_50 = var_1_26;
		}
	} else {
		var_1_50 = var_1_25;
	}


	// From: Req54Batch29Amount500
	var_1_108 = (max ((var_1_14 + (var_1_47 + var_1_73)) , var_1_69));


	// From: Req11Batch29Amount500
	if (! var_1_53) {
		var_1_44 = (max ((var_1_45 - var_1_25) , var_1_34));
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -127);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -127);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -127);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 127);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 190);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854766000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 63);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 64);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 3221225470);
	assume_abort_if_not(var_1_37 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -461168.6018427383000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 32767);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 63);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 32767);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 24575);
	assume_abort_if_not(var_1_57 <= 32767);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -31);
	assume_abort_if_not(var_1_59 <= 32);
	var_1_61 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_61 >= 536870911);
	assume_abort_if_not(var_1_61 <= 1073741823);
	var_1_63 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_63 >= 1073741822);
	assume_abort_if_not(var_1_63 <= 2147483646);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= 31);
	assume_abort_if_not(var_1_66 <= 63);
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427383000e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= -230584.3009213691400e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691400e+12F && var_1_72 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_74 >= 2147483647);
	assume_abort_if_not(var_1_74 <= 4294967294);
	var_1_79 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_79 >= -230584.3009213691400e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 2305843.009213691400e+12F && var_1_79 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= -230584.3009213691400e+13F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 2305843.009213691400e+12F && var_1_80 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_82 >= 0.0F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 2305843.009213691400e+12F && var_1_82 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_85 >= 536870912);
	assume_abort_if_not(var_1_85 <= 1073741824);
	var_1_87 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_87 >= 1073741823);
	assume_abort_if_not(var_1_87 <= 2147483647);
	var_1_88 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_88 >= 1073741824);
	assume_abort_if_not(var_1_88 <= 2147483647);
	var_1_90 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_90 >= 1073741823);
	assume_abort_if_not(var_1_90 <= 2147483647);
	var_1_99 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_99 >= -2147483647);
	assume_abort_if_not(var_1_99 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_105 = var_1_105;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_112 = var_1_112;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_97 != var_1_92) ? ((var_1_92 >= (var_1_97 + var_1_100)) ? (var_1_1 == ((unsigned char) var_1_5)) : ((((4.6 * var_1_110) * 1.000000002E8) >= ((var_1_78 + var_1_38) + (3.75 + var_1_78))) ? (var_1_1 == ((unsigned char) (! (var_1_10 || var_1_11)))) : 1)) : (var_1_1 == ((unsigned char) var_1_12))) && ((var_1_73 >= var_1_103) ? (var_1_13 == ((unsigned short int) (var_1_14 + var_1_15))) : 1)) && ((var_1_27 >= (var_1_38 / (abs (var_1_17)))) ? ((var_1_14 < var_1_92) ? (var_1_16 == ((signed char) var_1_18)) : (var_1_16 == ((signed char) (min (-64 , (min ((min (var_1_18 , var_1_19)) , var_1_20))))))) : 1)) && ((var_1_17 == var_1_77) ? (var_1_21 == ((unsigned char) (var_1_5 && var_1_11))) : (var_1_21 == ((unsigned char) (var_1_5 || var_1_12))))) && (var_1_5 ? (var_1_22 == ((unsigned char) ((min ((abs (var_1_23)) , (var_1_24 - var_1_25))) - var_1_26))) : 1)) && ((var_1_20 > 8) ? (((var_1_17 == var_1_110) || var_1_21) ? (var_1_27 == ((double) var_1_28)) : (var_1_27 == ((double) (var_1_29 - 1000.7)))) : (var_1_27 == ((double) var_1_29)))) && ((var_1_14 > last_1_var_1_100) ? (var_1_30 == ((unsigned char) (var_1_10 || var_1_11))) : ((last_1_var_1_13 != (var_1_25 / var_1_23)) ? ((((var_1_32 - var_1_25) << 16) < ((max (var_1_14 , var_1_26)) - last_1_var_1_13)) ? (var_1_30 == ((unsigned char) (var_1_11 || var_1_10))) : (((last_1_var_1_106 * var_1_17) < last_1_var_1_38) ? (var_1_30 == ((unsigned char) (var_1_5 && ((var_1_29 < last_1_var_1_102) || var_1_12)))) : 1)) : (var_1_30 == ((unsigned char) (((last_1_var_1_62 < last_1_var_1_104) && var_1_11) || (! (var_1_12 && var_1_5)))))))) && (((var_1_110 * (var_1_77 + 10.4)) >= (max (var_1_81 , 999999.25))) ? (var_1_34 == ((unsigned char) (max (var_1_32 , (var_1_25 + (var_1_35 + 1)))))) : (var_1_34 == ((unsigned char) (abs (var_1_24)))))) && (((var_1_89 % var_1_24) > var_1_32) ? (var_1_36 == ((unsigned long int) (((abs (var_1_37)) - var_1_24) - var_1_15))) : (var_1_36 == ((unsigned long int) var_1_26)))) && ((last_1_var_1_38 > (min (var_1_106 , var_1_112))) ? (var_1_38 == ((double) (var_1_39 + (var_1_40 - var_1_41)))) : (((last_1_var_1_38 * 32.6) != var_1_77) ? ((var_1_105 || var_1_11) ? (var_1_38 == ((double) ((32.6 - var_1_40) + 10.5))) : (var_1_12 ? (var_1_38 == ((double) (var_1_29 - (min (var_1_43 , 2.5))))) : (var_1_38 == ((double) (min (var_1_43 , var_1_29)))))) : 1))) && ((! var_1_53) ? (var_1_44 == ((unsigned short int) (max ((var_1_45 - var_1_25) , var_1_34)))) : 1)) && (var_1_46 == ((unsigned char) (var_1_24 - (max (var_1_32 , (var_1_25 + var_1_47))))))) && ((var_1_95 <= (var_1_24 - var_1_26)) ? (var_1_48 == ((unsigned short int) (abs (var_1_14)))) : (var_1_48 == ((unsigned short int) (var_1_25 + var_1_32))))) && (var_1_12 ? (var_1_49 == ((unsigned char) (var_1_105 && var_1_10))) : (var_1_49 == ((unsigned char) (! (var_1_10 || var_1_11)))))) && ((var_1_93 > (var_1_23 - 32)) ? (((- var_1_94) < var_1_41) ? (var_1_50 == ((unsigned char) var_1_51)) : (var_1_50 == ((unsigned char) var_1_26))) : (var_1_50 == ((unsigned char) var_1_25)))) && ((var_1_37 >= last_1_var_1_73) ? (var_1_52 == ((unsigned long int) (abs (var_1_45)))) : 1)) && ((var_1_105 && var_1_12) ? (var_1_53 == ((unsigned char) (var_1_12 || var_1_5))) : (var_1_53 == ((unsigned char) ((var_1_16 < var_1_35) && var_1_11))))) && (var_1_54 == ((unsigned short int) (var_1_45 - (abs (5)))))) && (var_1_12 ? (var_1_55 == ((unsigned short int) var_1_32)) : (var_1_55 == ((unsigned short int) (var_1_56 + ((var_1_57 - var_1_25) - var_1_35)))))) && (var_1_58 == ((signed char) ((var_1_59 + 25) + var_1_47)))) && (var_1_60 == ((signed long int) ((var_1_92 - (var_1_61 - var_1_47)) + -100)))) && ((last_1_var_1_1 || var_1_10) ? (var_1_62 == ((signed long int) (min (25 , var_1_24)))) : ((var_1_23 <= (max (0 , last_1_var_1_36))) ? ((! last_1_var_1_1) ? ((-256 >= ((min (last_1_var_1_55 , var_1_57)) * var_1_32)) ? (var_1_62 == ((signed long int) ((abs (last_1_var_1_44)) - var_1_23))) : 1) : (var_1_62 == ((signed long int) ((var_1_63 - (max (last_1_var_1_68 , var_1_23))) - last_1_var_1_98)))) : 1))) && ((var_1_14 >= ((- 5) + (var_1_84 | var_1_100))) ? ((var_1_48 > var_1_56) ? (var_1_64 == ((float) (min (var_1_39 , (var_1_43 - var_1_41))))) : (var_1_64 == ((float) ((abs (var_1_39)) - var_1_40)))) : ((! var_1_12) ? ((var_1_62 > ((min (var_1_25 , var_1_47)) - var_1_26)) ? (var_1_64 == ((float) var_1_43)) : (var_1_64 == ((float) (var_1_43 - var_1_41)))) : (var_1_64 == ((float) 1000.5f))))) && ((((var_1_14 - var_1_62) * var_1_98) == ((var_1_18 & var_1_91) / (max (var_1_45 , var_1_23)))) ? (var_1_65 == ((signed char) ((var_1_25 - (var_1_66 - 4)) + (min ((min (32 , var_1_59)) , -50))))) : (var_1_65 == ((signed char) var_1_24)))) && ((var_1_14 <= (var_1_23 + var_1_26)) ? (var_1_67 == ((signed char) var_1_59)) : ((var_1_11 && (! var_1_30)) ? (var_1_67 == ((signed char) ((max (var_1_47 , (min (8 , var_1_59)))) + var_1_25))) : (var_1_67 == ((signed char) var_1_18))))) && ((var_1_32 == ((min (var_1_47 , 32)) - var_1_25)) ? (var_1_68 == ((signed long int) (var_1_56 + (max (var_1_19 , 256))))) : ((var_1_47 >= (- var_1_15)) ? (var_1_68 == ((signed long int) (min ((max (var_1_59 , var_1_51)) , var_1_52)))) : (var_1_68 == ((signed long int) (abs (var_1_36))))))) && (((var_1_5 || var_1_21) || var_1_53) ? (var_1_69 == ((signed short int) (var_1_35 - var_1_47))) : 1)) && (((min (var_1_15 , var_1_83)) > var_1_14) ? (var_1_70 == ((float) ((var_1_40 + (max (var_1_41 , var_1_71))) - var_1_29))) : (var_1_70 == ((float) (var_1_71 + (var_1_72 + 8.2f)))))) && ((var_1_14 <= var_1_61) ? (var_1_73 == ((unsigned long int) (max ((min (var_1_63 , var_1_98)) , var_1_25)))) : (var_1_73 == ((unsigned long int) (min ((min (var_1_61 , (var_1_74 - var_1_26))) , (var_1_62 + var_1_54))))))) && ((var_1_104 <= (min ((var_1_45 - var_1_51) , var_1_56))) ? (var_1_75 == ((signed char) (min ((min (var_1_18 , var_1_24)) , var_1_59)))) : (var_1_75 == ((signed char) (abs (var_1_25)))))) && (var_1_12 ? ((var_1_29 < (var_1_94 / var_1_17)) ? (var_1_77 == ((double) (var_1_41 - (max (256.75 , var_1_29))))) : (var_1_77 == ((double) (min (var_1_29 , (var_1_40 - 256.5)))))) : (var_1_77 == ((double) var_1_29)))) && ((var_1_84 < ((var_1_66 << var_1_47) | var_1_83)) ? (var_1_78 == ((double) (max (var_1_29 , (max (var_1_41 , (min (var_1_71 , var_1_72)))))))) : ((var_1_65 > var_1_59) ? ((var_1_54 >= var_1_55) ? (var_1_78 == ((double) (min (var_1_72 , ((var_1_79 + var_1_80) + (max (var_1_41 , 63.5))))))) : (var_1_78 == ((double) (min (var_1_79 , var_1_41))))) : (var_1_12 ? ((var_1_28 <= var_1_102) ? ((var_1_56 != var_1_92) ? (var_1_78 == ((double) (max (var_1_28 , (abs (min (127.5 , var_1_80))))))) : (var_1_78 == ((double) (max ((500.5 + var_1_79) , var_1_71))))) : (var_1_78 == ((double) var_1_43))) : (var_1_78 == ((double) ((var_1_71 + var_1_41) - var_1_40))))))) && ((last_1_var_1_112 >= var_1_40) ? ((var_1_15 == last_1_var_1_83) ? (var_1_81 == ((double) (abs (var_1_29)))) : (((var_1_26 > last_1_var_1_89) || last_1_var_1_105) ? (((64 > last_1_var_1_98) || last_1_var_1_30) ? (var_1_81 == ((double) ((min (var_1_71 , (8.81680280191624E18 - 100.4))) - ((abs (var_1_80)) + var_1_41)))) : (var_1_81 == ((double) ((min (255.6 , var_1_40)) - var_1_43)))) : (var_1_81 == ((double) (var_1_80 + (min (15.6 , var_1_39))))))) : ((-200 < (last_1_var_1_108 + (last_1_var_1_62 / var_1_32))) ? (var_1_81 == ((double) (((499.75 + var_1_82) - var_1_40) + (var_1_71 - var_1_41)))) : (var_1_81 == ((double) (min ((min (var_1_29 , (max (var_1_43 , var_1_71)))) , var_1_80))))))) && ((var_1_81 >= ((var_1_28 + 3.5) * 255.5)) ? (var_1_83 == ((signed long int) (min (var_1_52 , var_1_37)))) : (var_1_83 == ((signed long int) (max ((max (var_1_95 , -10)) , var_1_60)))))) && (((var_1_71 - var_1_82) <= ((min (1.4 , var_1_80)) * (var_1_40 - var_1_41))) ? (var_1_84 == ((unsigned long int) (var_1_74 - ((var_1_85 - 16u) + 5u)))) : ((var_1_23 > ((abs (var_1_24)) - 25)) ? (var_1_84 == ((unsigned long int) (var_1_96 + var_1_26))) : 1))) && ((last_1_var_1_86 >= var_1_92) ? ((var_1_96 > (var_1_37 + 25)) ? (var_1_86 == ((unsigned long int) ((var_1_87 + var_1_88) - last_1_var_1_86))) : 1) : 1)) && (((var_1_92 - var_1_47) >= (var_1_88 - (var_1_90 - var_1_103))) ? (var_1_30 ? (var_1_89 == ((unsigned short int) (var_1_45 - var_1_57))) : (var_1_89 == ((unsigned short int) (max (var_1_45 , var_1_51))))) : 1)) && (var_1_12 ? ((var_1_52 <= var_1_24) ? (var_1_91 == ((signed char) (var_1_59 + var_1_66))) : 1) : (var_1_91 == ((signed char) (max (1 , ((min (var_1_35 , var_1_25)) - (min (var_1_66 , var_1_47))))))))) && ((var_1_35 < last_1_var_1_104) ? (var_1_92 == ((unsigned long int) (((last_1_var_1_108 + last_1_var_1_69) + var_1_66) + var_1_51))) : 1)) && (((var_1_43 <= var_1_64) && var_1_11) ? ((var_1_102 != (- var_1_71)) ? (var_1_93 == ((unsigned char) ((var_1_47 + var_1_25) + var_1_66))) : ((var_1_18 >= var_1_73) ? (var_1_93 == ((unsigned char) ((max (var_1_23 , var_1_24)) - var_1_35))) : 1)) : (var_1_93 == ((unsigned char) var_1_47)))) && (((var_1_47 / var_1_57) != (~ var_1_32)) ? (var_1_94 == ((double) ((min (var_1_39 , (max (var_1_80 , var_1_79)))) + (var_1_72 + var_1_82)))) : 1)) && (((var_1_57 - var_1_26) <= var_1_52) ? (var_1_30 ? (var_1_95 == ((signed short int) var_1_26)) : 1) : 1)) && (var_1_96 == ((unsigned short int) var_1_25))) && (var_1_5 ? (var_1_97 == ((unsigned long int) var_1_15)) : 1)) && (var_1_5 ? (var_1_98 == ((signed long int) var_1_99)) : 1)) && (var_1_21 ? (var_1_100 == ((unsigned short int) var_1_48)) : (var_1_100 == ((unsigned short int) var_1_15)))) && (var_1_21 ? (var_1_101 == ((signed char) var_1_18)) : (var_1_101 == ((signed char) var_1_24)))) && (var_1_30 ? (var_1_102 == ((double) 4.75)) : 1)) && (var_1_11 ? (var_1_103 == ((signed long int) var_1_107)) : (var_1_103 == ((signed long int) var_1_35)))) && (var_1_49 ? (var_1_104 == ((signed long int) var_1_67)) : (var_1_104 == ((signed long int) var_1_100)))) && (var_1_105 == ((unsigned char) var_1_11))) && (var_1_106 == ((double) var_1_41))) && (var_1_5 ? (var_1_107 == ((unsigned short int) var_1_66)) : (var_1_107 == ((unsigned short int) var_1_25)))) && (var_1_108 == ((unsigned short int) (max ((var_1_14 + (var_1_47 + var_1_73)) , var_1_69))))) && (var_1_105 ? (var_1_109 == ((float) var_1_82)) : 1)) && (var_1_110 == ((double) var_1_39))) && (var_1_111 == ((float) var_1_82))) && (var_1_112 == ((double) var_1_39))
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
