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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch176Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 2;
float var_1_2 = 256.75;
float var_1_3 = 8.5;
unsigned char var_1_5 = 16;
unsigned char var_1_6 = 50;
unsigned char var_1_7 = 50;
unsigned char var_1_8 = 5;
unsigned char var_1_9 = 128;
unsigned char var_1_11 = 16;
unsigned char var_1_12 = 64;
unsigned short int var_1_13 = 25;
unsigned short int var_1_14 = 54326;
unsigned short int var_1_15 = 23417;
signed long int var_1_16 = -2;
float var_1_17 = 127.5;
signed long int var_1_19 = 8;
signed long int var_1_20 = 1000000000;
signed short int var_1_21 = 100;
signed short int var_1_23 = -22532;
unsigned long int var_1_24 = 1;
unsigned char var_1_25 = 5;
unsigned char var_1_26 = 16;
signed char var_1_27 = 4;
signed char var_1_29 = 32;
unsigned char var_1_30 = 32;
unsigned char var_1_31 = 64;
unsigned char var_1_32 = 1;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned long int var_1_42 = 4;
signed long int var_1_43 = -4;
signed long int var_1_44 = -2078944964;
signed long int var_1_45 = 64;
unsigned char var_1_46 = 1;
signed short int var_1_47 = -4;
double var_1_48 = 3.25;
double var_1_49 = 50.5;
double var_1_50 = 3.125;
double var_1_51 = 0.4;
signed char var_1_53 = 1;
signed char var_1_54 = 64;
signed char var_1_55 = 32;
signed char var_1_56 = 2;
unsigned char var_1_57 = 1;
unsigned long int var_1_58 = 100;
unsigned char var_1_59 = 8;
float var_1_60 = 4.7;
float var_1_61 = 15.05;
float var_1_62 = 10.6;
double var_1_63 = 9.5;
double var_1_64 = 10000000000000.2;
double var_1_65 = 16.275;
signed char var_1_66 = -2;
signed long int var_1_67 = 1641310048;
unsigned char var_1_68 = 1;
double var_1_69 = 256.8;
double var_1_71 = 8.2;
double var_1_72 = 1.5;
double var_1_73 = 16.2;
float var_1_74 = 16.4;
unsigned char var_1_75 = 16;
unsigned char var_1_76 = 200;
unsigned char var_1_77 = 2;
unsigned long int var_1_78 = 25;
double var_1_80 = 100.2;
double var_1_81 = 7.75;
double var_1_82 = 0.0;
float var_1_83 = 9.5;
float var_1_84 = 10.2;
float var_1_85 = 63.75;
unsigned long int var_1_86 = 10;
signed short int var_1_87 = 128;
float var_1_88 = 16.5;
float var_1_90 = 63.34;
float var_1_91 = 999999999999999.2;
unsigned short int var_1_92 = 1;
signed long int var_1_93 = -50;
float var_1_94 = 9999999999999.5;
signed short int var_1_95 = -16;
unsigned char var_1_96 = 4;
signed char var_1_97 = 4;
signed short int var_1_98 = -1;
signed short int var_1_99 = -5;
double var_1_100 = 0.75;
signed char var_1_101 = 1;
signed char var_1_102 = 32;
float var_1_103 = 24.5;
unsigned char var_1_104 = 1;
float var_1_105 = 63.8;
float var_1_106 = 0.4;
float var_1_107 = 1.5;
unsigned short int var_1_108 = 100;
double var_1_109 = 9999999999.8;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 2;
unsigned char last_1_var_1_11 = 16;
unsigned short int last_1_var_1_13 = 25;
signed long int last_1_var_1_16 = -2;
signed short int last_1_var_1_21 = 100;
unsigned long int last_1_var_1_24 = 1;
unsigned char last_1_var_1_25 = 5;
signed char last_1_var_1_27 = 4;
unsigned char last_1_var_1_38 = 1;
signed long int last_1_var_1_43 = -4;
unsigned char last_1_var_1_46 = 1;
signed short int last_1_var_1_47 = -4;
unsigned char last_1_var_1_57 = 1;
unsigned long int last_1_var_1_58 = 100;
unsigned char last_1_var_1_59 = 8;
unsigned char last_1_var_1_68 = 1;
unsigned char last_1_var_1_75 = 16;
unsigned long int last_1_var_1_78 = 25;
double last_1_var_1_80 = 100.2;
signed short int last_1_var_1_87 = 128;
unsigned short int last_1_var_1_92 = 1;
signed short int last_1_var_1_95 = -16;
float last_1_var_1_106 = 0.4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch176Amount500
	if (50 < last_1_var_1_21) {
		var_1_11 = var_1_8;
	}


	// From: Req22Batch176Amount500
	unsigned char stepLocal_6 = last_1_var_1_46;
	if ((var_1_40 || var_1_36) || stepLocal_6) {
		if (((- last_1_var_1_106) * (last_1_var_1_80 / var_1_17)) < 1.00000000000475E11) {
			var_1_58 = ((max (var_1_23 , var_1_44)) - ((1713733018u - var_1_5) - (var_1_20 - last_1_var_1_87)));
		} else {
			var_1_58 = (max (var_1_8 , var_1_15));
		}
	}


	// From: Req15Batch176Amount500
	signed long int stepLocal_1 = last_1_var_1_95;
	unsigned char stepLocal_0 = last_1_var_1_95 == var_1_19;
	if (! var_1_34) {
		var_1_42 = (var_1_14 + ((min (last_1_var_1_47 , last_1_var_1_59)) + var_1_20));
	} else {
		if (last_1_var_1_11 < stepLocal_1) {
			if (((last_1_var_1_59 - var_1_26) < last_1_var_1_25) || stepLocal_0) {
				var_1_42 = last_1_var_1_58;
			}
		}
	}


	// From: Req10Batch176Amount500
	if ((var_1_15 >= var_1_19) || last_1_var_1_57) {
		var_1_25 = (var_1_7 + var_1_5);
	} else {
		var_1_25 = (var_1_26 + var_1_8);
	}


	// From: Req18Batch176Amount500
	if (var_1_7 <= (min (last_1_var_1_78 , (last_1_var_1_43 + var_1_23)))) {
		var_1_47 = ((last_1_var_1_1 + var_1_8) + ((max (var_1_5 , last_1_var_1_13)) - (max (5 , last_1_var_1_92))));
	}


	// From: Req41Batch176Amount500
	var_1_93 = last_1_var_1_27;


	// From: Req36Batch176Amount500
	if (last_1_var_1_13 < last_1_var_1_24) {
		if (! last_1_var_1_68) {
			var_1_86 = (max (var_1_31 , last_1_var_1_16));
		}
	}


	// From: Req16Batch176Amount500
	signed char stepLocal_2 = var_1_29;
	if (stepLocal_2 != (var_1_26 - var_1_7)) {
		var_1_43 = (((abs (var_1_44)) - var_1_5) - var_1_7);
	} else {
		var_1_43 = (min (var_1_14 , (last_1_var_1_47 + var_1_45)));
	}


	// From: Req51Batch176Amount500
	if (last_1_var_1_68) {
		var_1_104 = var_1_37;
	} else {
		var_1_104 = var_1_40;
	}


	// From: Req56Batch176Amount500
	unsigned long int stepLocal_28 = var_1_54 + 256u;
	if (var_1_104) {
		if (stepLocal_28 >= var_1_31) {
			var_1_109 = var_1_65;
		}
	}


	// From: Req2Batch176Amount500
	var_1_6 = ((64 - (var_1_7 - var_1_8)) + var_1_5);


	// From: Req5Batch176Amount500
	if (var_1_3 < var_1_2) {
		var_1_12 = var_1_8;
	}


	// From: Req12Batch176Amount500
	var_1_30 = (var_1_5 + (min ((var_1_31 - var_1_8) , (abs (4)))));


	// From: Req19Batch176Amount500
	if (var_1_15 > var_1_23) {
		var_1_48 = (var_1_49 + (min ((var_1_50 - var_1_51) , 32.5)));
	} else {
		if (var_1_104) {
			var_1_48 = (var_1_49 + var_1_51);
		} else {
			var_1_48 = var_1_49;
		}
	}


	// From: Req35Batch176Amount500
	signed long int stepLocal_22 = var_1_45;
	if (stepLocal_22 < (var_1_43 * (max (var_1_30 , 32)))) {
		var_1_85 = (var_1_50 - (var_1_82 - (max (var_1_51 , var_1_84))));
	} else {
		var_1_85 = (abs (var_1_84 + var_1_49));
	}


	// From: Req38Batch176Amount500
	signed long int stepLocal_25 = -8;
	if ((~ var_1_58) < stepLocal_25) {
		if (var_1_104) {
			var_1_88 = (var_1_84 + (var_1_50 - var_1_51));
		}
	}


	// From: Req42Batch176Amount500
	var_1_94 = var_1_51;


	// From: Req44Batch176Amount500
	if (var_1_35) {
		var_1_96 = var_1_54;
	} else {
		var_1_96 = 2;
	}


	// From: Req46Batch176Amount500
	var_1_98 = var_1_99;


	// From: Req47Batch176Amount500
	if (var_1_34) {
		var_1_100 = var_1_65;
	} else {
		var_1_100 = var_1_82;
	}


	// From: Req49Batch176Amount500
	if (var_1_37) {
		var_1_102 = var_1_8;
	} else {
		var_1_102 = var_1_7;
	}


	// From: Req50Batch176Amount500
	var_1_103 = var_1_50;


	// From: Req53Batch176Amount500
	var_1_106 = var_1_51;


	// From: Req54Batch176Amount500
	var_1_107 = var_1_50;


	// From: Req29Batch176Amount500
	signed long int stepLocal_19 = (var_1_44 - var_1_20) + var_1_93;
	if (var_1_100 != var_1_62) {
		if ((var_1_5 + var_1_42) < stepLocal_19) {
			var_1_74 = (9.5f + var_1_51);
		} else {
			var_1_74 = (abs (var_1_62 + var_1_50));
		}
	}


	// From: Req9Batch176Amount500
	if ((var_1_2 + (var_1_3 * var_1_17)) < var_1_100) {
		var_1_24 = ((min (var_1_7 , 100000000u)) + var_1_93);
	}


	// From: Req30Batch176Amount500
	unsigned char stepLocal_20 = var_1_56 >= (var_1_86 * var_1_19);
	if ((var_1_93 <= last_1_var_1_75) && stepLocal_20) {
		var_1_75 = (var_1_76 - var_1_5);
	} else {
		var_1_75 = (128 - (abs (max (var_1_77 , var_1_55))));
	}


	// From: Req28Batch176Amount500
	if (! var_1_37) {
		if ((- var_1_61) != var_1_103) {
			if (var_1_86 >= (32u & var_1_14)) {
				var_1_69 = var_1_71;
			} else {
				var_1_69 = (max (((var_1_72 + var_1_73) + 32.75) , ((abs (var_1_51)) + var_1_50)));
			}
		}
	} else {
		var_1_69 = (max ((var_1_50 - var_1_51) , (min ((max (var_1_73 , var_1_71)) , var_1_72))));
	}


	// From: Req1Batch176Amount500
	if (! ((var_1_2 - var_1_3) < var_1_100)) {
		var_1_1 = (128 - var_1_5);
	}


	// From: Req8Batch176Amount500
	if ((var_1_11 * var_1_24) < (min (var_1_5 , -128))) {
		var_1_21 = (((abs (var_1_23)) - var_1_96) - var_1_8);
	} else {
		if (var_1_8 == (var_1_5 * var_1_15)) {
			if ((max (4 , -64)) <= var_1_5) {
				var_1_21 = (abs (var_1_11));
			}
		} else {
			var_1_21 = (max (var_1_5 , (var_1_96 + var_1_93)));
		}
	}


	// From: Req43Batch176Amount500
	if (var_1_39) {
		var_1_95 = var_1_21;
	} else {
		var_1_95 = var_1_5;
	}


	// From: Req55Batch176Amount500
	if (var_1_21 > var_1_19) {
		var_1_108 = ((max (8 , var_1_43)) + var_1_43);
	}


	// From: Req23Batch176Amount500
	signed long int stepLocal_9 = var_1_44;
	signed long int stepLocal_8 = var_1_23 * var_1_19;
	signed short int stepLocal_7 = var_1_98;
	if (stepLocal_7 > var_1_56) {
		if (var_1_98 > stepLocal_8) {
			var_1_59 = (var_1_54 + (abs (var_1_56)));
		} else {
			if (var_1_17 < var_1_69) {
				if (var_1_39) {
					if (var_1_8 >= stepLocal_9) {
						var_1_59 = (abs (var_1_55));
					} else {
						var_1_59 = (var_1_8 + var_1_26);
					}
				}
			}
		}
	}


	// From: Req14Batch176Amount500
	if (last_1_var_1_38 || var_1_37) {
		var_1_38 = (((var_1_42 > var_1_26) || var_1_39) && (! (var_1_35 && var_1_34)));
	} else {
		if ((min (var_1_17 , var_1_2)) >= var_1_3) {
			var_1_38 = ((var_1_58 <= var_1_95) || (var_1_35 || var_1_39));
		} else {
			var_1_38 = (((! var_1_35) && var_1_39) && (var_1_40 && var_1_41));
		}
	}


	// From: Req17Batch176Amount500
	signed char stepLocal_4 = var_1_29;
	signed char stepLocal_3 = var_1_29;
	if (var_1_38) {
		if ((var_1_25 / var_1_23) < stepLocal_3) {
			var_1_46 = (! (var_1_36 || var_1_40));
		} else {
			if (stepLocal_4 == (min (var_1_43 , var_1_8))) {
				var_1_46 = ((var_1_36 && var_1_35) || var_1_34);
			}
		}
	}


	// From: Req13Batch176Amount500
	if (var_1_17 != 256.6f) {
		var_1_32 = ((var_1_7 <= (var_1_42 & var_1_59)) || (! var_1_34));
	} else {
		var_1_32 = (var_1_34 || ((var_1_35 || var_1_36) || var_1_37));
	}


	// From: Req27Batch176Amount500
	signed char stepLocal_18 = var_1_56;
	if ((var_1_24 * var_1_44) <= stepLocal_18) {
		if (var_1_32) {
			var_1_68 = (last_1_var_1_68 && var_1_37);
		} else {
			var_1_68 = ((var_1_47 <= (var_1_5 * var_1_24)) || (var_1_35 || var_1_39));
		}
	}


	// From: Req7Batch176Amount500
	if (var_1_68) {
		if ((var_1_2 < (var_1_3 / var_1_17)) && var_1_104) {
			var_1_16 = (var_1_14 - var_1_19);
		} else {
			var_1_16 = ((var_1_7 - (var_1_20 - var_1_8)) + var_1_43);
		}
	} else {
		if (var_1_8 <= (min ((- var_1_20) , var_1_43))) {
			var_1_16 = (var_1_25 + (var_1_108 + var_1_43));
		} else {
			var_1_16 = var_1_15;
		}
	}


	// From: Req26Batch176Amount500
	signed long int stepLocal_17 = var_1_30 / var_1_67;
	if (var_1_68) {
		if (var_1_16 == stepLocal_17) {
			var_1_66 = (var_1_56 + -1);
		} else {
			var_1_66 = ((var_1_54 - var_1_56) - var_1_7);
		}
	} else {
		var_1_66 = (var_1_8 - var_1_55);
	}


	// From: Req45Batch176Amount500
	if (var_1_32) {
		var_1_97 = var_1_56;
	} else {
		var_1_97 = 10;
	}


	// From: Req6Batch176Amount500
	if (var_1_5 <= last_1_var_1_13) {
		if (var_1_32) {
			var_1_13 = (var_1_14 - (max (var_1_8 , var_1_75)));
		} else {
			var_1_13 = (min ((var_1_14 - var_1_75) , ((max (var_1_7 , var_1_98)) + var_1_5)));
		}
	} else {
		var_1_13 = (((abs (var_1_15)) + 29213) - var_1_98);
	}


	// From: Req31Batch176Amount500
	unsigned char stepLocal_21 = var_1_38;
	if (var_1_104 && stepLocal_21) {
		var_1_78 = ((var_1_67 - (32u + var_1_86)) + 4u);
	} else {
		var_1_78 = (var_1_8 + (var_1_67 - var_1_13));
	}


	// From: Req11Batch176Amount500
	if (var_1_104 || ((var_1_19 * var_1_23) >= var_1_16)) {
		var_1_27 = ((max (var_1_7 , var_1_8)) + var_1_29);
	} else {
		var_1_27 = (abs (var_1_8 + var_1_29));
	}


	// From: Req3Batch176Amount500
	if (var_1_68) {
		var_1_9 = (var_1_8 + var_1_7);
	}


	// From: Req25Batch176Amount500
	signed long int stepLocal_16 = var_1_16;
	unsigned char stepLocal_15 = var_1_75;
	unsigned long int stepLocal_14 = var_1_42;
	signed char stepLocal_13 = var_1_29;
	if (var_1_85 == var_1_17) {
		if (stepLocal_16 >= var_1_19) {
			if (stepLocal_15 >= var_1_55) {
				if ((- var_1_5) > stepLocal_14) {
					var_1_63 = (max (var_1_61 , (min (9.999999999999992E14 , (max (var_1_64 , var_1_50))))));
				}
			} else {
				var_1_63 = var_1_65;
			}
		} else {
			var_1_63 = 256.375;
		}
	} else {
		if (stepLocal_13 <= var_1_15) {
			var_1_63 = (var_1_50 - var_1_51);
		}
	}


	// From: Req34Batch176Amount500
	if (var_1_40 && (var_1_11 < var_1_44)) {
		if ((var_1_62 > (var_1_82 + 32.8f)) || var_1_104) {
			var_1_83 = (var_1_82 - ((max (var_1_51 , var_1_50)) + var_1_84));
		} else {
			if (var_1_68) {
				var_1_83 = var_1_61;
			}
		}
	} else {
		if (((abs (var_1_78)) / (abs (var_1_44))) < (min (var_1_24 , var_1_86))) {
			var_1_83 = ((min (8.6f , var_1_82)) - var_1_84);
		}
	}


	// From: Req39Batch176Amount500
	unsigned char stepLocal_26 = var_1_24 > var_1_16;
	if (var_1_100 >= var_1_72) {
		if (var_1_32 || stepLocal_26) {
			var_1_90 = (var_1_84 - var_1_82);
		}
	} else {
		var_1_90 = (var_1_73 + (min (var_1_50 , (var_1_72 + var_1_91))));
	}


	// From: Req48Batch176Amount500
	if (var_1_68) {
		var_1_101 = var_1_7;
	}


	// From: Req52Batch176Amount500
	if (var_1_46) {
		var_1_105 = var_1_82;
	} else {
		var_1_105 = var_1_50;
	}


	// From: Req21Batch176Amount500
	if (var_1_66 > (max (var_1_19 , (var_1_11 + var_1_45)))) {
		var_1_57 = (var_1_35 || var_1_40);
	} else {
		var_1_57 = (var_1_36 && var_1_35);
	}


	// From: Req32Batch176Amount500
	if ((abs (var_1_74)) <= var_1_100) {
		if (var_1_104 || var_1_57) {
			if (var_1_34) {
				var_1_80 = (var_1_50 - var_1_51);
			}
		} else {
			var_1_80 = (max ((var_1_51 - var_1_50) , var_1_71));
		}
	} else {
		var_1_80 = (max (((max (var_1_49 , var_1_72)) + var_1_51) , var_1_50));
	}


	// From: Req37Batch176Amount500
	unsigned long int stepLocal_24 = var_1_86;
	unsigned char stepLocal_23 = var_1_100 >= var_1_80;
	if (64 >= stepLocal_24) {
		if (stepLocal_23 && (var_1_95 >= (- var_1_97))) {
			var_1_87 = var_1_77;
		} else {
			var_1_87 = var_1_23;
		}
	} else {
		var_1_87 = (((last_1_var_1_87 + var_1_108) + var_1_95) + var_1_7);
	}


	// From: Req40Batch176Amount500
	unsigned char stepLocal_27 = var_1_109 >= var_1_61;
	if (var_1_38 || stepLocal_27) {
		var_1_92 = (var_1_55 + (max (var_1_54 , var_1_87)));
	} else {
		var_1_92 = var_1_47;
	}


	// From: Req20Batch176Amount500
	signed short int stepLocal_5 = var_1_87;
	if (var_1_45 < stepLocal_5) {
		var_1_53 = ((min (var_1_7 , var_1_8)) - (var_1_54 - (var_1_55 - var_1_56)));
	} else {
		var_1_53 = var_1_54;
	}


	// From: Req24Batch176Amount500
	signed short int stepLocal_12 = var_1_23;
	signed long int stepLocal_11 = var_1_20 + var_1_7;
	unsigned long int stepLocal_10 = var_1_15 | (32u / var_1_31);
	if ((var_1_17 * var_1_51) < var_1_80) {
		if (stepLocal_11 >= var_1_13) {
			if (var_1_41) {
				var_1_60 = (max ((max (var_1_50 , var_1_61)) , 256.8f));
			} else {
				if (stepLocal_10 != var_1_42) {
					var_1_60 = (max (var_1_61 , var_1_51));
				} else {
					var_1_60 = (var_1_51 + var_1_62);
				}
			}
		} else {
			if ((var_1_15 * (max (var_1_97 , 16))) >= stepLocal_12) {
				var_1_60 = var_1_50;
			}
		}
	} else {
		var_1_60 = (max (((var_1_51 - var_1_50) + var_1_62) , var_1_49));
	}


	// From: Req33Batch176Amount500
	if (var_1_60 <= var_1_69) {
		var_1_81 = (min ((49.75 - (var_1_82 - var_1_51)) , var_1_50));
	} else {
		if ((min (var_1_23 , var_1_67)) >= var_1_20) {
			var_1_81 = (var_1_50 - var_1_82);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 31);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 31);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 16383);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 2147483646);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 536870911);
	assume_abort_if_not(var_1_20 <= 1073741823);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -32766);
	assume_abort_if_not(var_1_23 <= -16382);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -63);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 63);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_44 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_44 >= -2147483646);
	assume_abort_if_not(var_1_44 <= -1073741822);
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= -1073741823);
	assume_abort_if_not(var_1_45 <= 1073741823);
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= -461168.6018427383000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 63);
	assume_abort_if_not(var_1_54 <= 126);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= 31);
	assume_abort_if_not(var_1_55 <= 63);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 31);
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= -922337.2036854766000e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854766000e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= -461168.6018427383000e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427383000e+12F && var_1_62 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= -922337.2036854766000e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854766000e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= -922337.2036854766000e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854766000e+12F && var_1_65 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_67 >= 1073741823);
	assume_abort_if_not(var_1_67 <= 2147483647);
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= -922337.2036854766000e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854766000e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= -230584.3009213691400e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691400e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= -230584.3009213691400e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 2305843.009213691400e+12F && var_1_73 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 127);
	assume_abort_if_not(var_1_76 <= 254);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 127);
	var_1_82 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_82 >= 4611686.018427383000e+12F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 9223372.036854766000e+12F && var_1_82 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= 0.0F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427383000e+12F && var_1_84 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_91 >= -230584.3009213691400e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 2305843.009213691400e+12F && var_1_91 >= 1.0e-20F ));
	var_1_99 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_99 >= -32767);
	assume_abort_if_not(var_1_99 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_106 = var_1_106;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((! ((var_1_2 - var_1_3) < var_1_100)) ? (var_1_1 == ((unsigned char) (128 - var_1_5))) : 1) && (var_1_6 == ((unsigned char) ((64 - (var_1_7 - var_1_8)) + var_1_5)))) && (var_1_68 ? (var_1_9 == ((unsigned char) (var_1_8 + var_1_7))) : 1)) && ((50 < last_1_var_1_21) ? (var_1_11 == ((unsigned char) var_1_8)) : 1)) && ((var_1_3 < var_1_2) ? (var_1_12 == ((unsigned char) var_1_8)) : 1)) && ((var_1_5 <= last_1_var_1_13) ? (var_1_32 ? (var_1_13 == ((unsigned short int) (var_1_14 - (max (var_1_8 , var_1_75))))) : (var_1_13 == ((unsigned short int) (min ((var_1_14 - var_1_75) , ((max (var_1_7 , var_1_98)) + var_1_5)))))) : (var_1_13 == ((unsigned short int) (((abs (var_1_15)) + 29213) - var_1_98))))) && (var_1_68 ? (((var_1_2 < (var_1_3 / var_1_17)) && var_1_104) ? (var_1_16 == ((signed long int) (var_1_14 - var_1_19))) : (var_1_16 == ((signed long int) ((var_1_7 - (var_1_20 - var_1_8)) + var_1_43)))) : ((var_1_8 <= (min ((- var_1_20) , var_1_43))) ? (var_1_16 == ((signed long int) (var_1_25 + (var_1_108 + var_1_43)))) : (var_1_16 == ((signed long int) var_1_15))))) && (((var_1_11 * var_1_24) < (min (var_1_5 , -128))) ? (var_1_21 == ((signed short int) (((abs (var_1_23)) - var_1_96) - var_1_8))) : ((var_1_8 == (var_1_5 * var_1_15)) ? (((max (4 , -64)) <= var_1_5) ? (var_1_21 == ((signed short int) (abs (var_1_11)))) : 1) : (var_1_21 == ((signed short int) (max (var_1_5 , (var_1_96 + var_1_93)))))))) && (((var_1_2 + (var_1_3 * var_1_17)) < var_1_100) ? (var_1_24 == ((unsigned long int) ((min (var_1_7 , 100000000u)) + var_1_93))) : 1)) && (((var_1_15 >= var_1_19) || last_1_var_1_57) ? (var_1_25 == ((unsigned char) (var_1_7 + var_1_5))) : (var_1_25 == ((unsigned char) (var_1_26 + var_1_8))))) && ((var_1_104 || ((var_1_19 * var_1_23) >= var_1_16)) ? (var_1_27 == ((signed char) ((max (var_1_7 , var_1_8)) + var_1_29))) : (var_1_27 == ((signed char) (abs (var_1_8 + var_1_29)))))) && (var_1_30 == ((unsigned char) (var_1_5 + (min ((var_1_31 - var_1_8) , (abs (4)))))))) && ((var_1_17 != 256.6f) ? (var_1_32 == ((unsigned char) ((var_1_7 <= (var_1_42 & var_1_59)) || (! var_1_34)))) : (var_1_32 == ((unsigned char) (var_1_34 || ((var_1_35 || var_1_36) || var_1_37)))))) && ((last_1_var_1_38 || var_1_37) ? (var_1_38 == ((unsigned char) (((var_1_42 > var_1_26) || var_1_39) && (! (var_1_35 && var_1_34))))) : (((min (var_1_17 , var_1_2)) >= var_1_3) ? (var_1_38 == ((unsigned char) ((var_1_58 <= var_1_95) || (var_1_35 || var_1_39)))) : (var_1_38 == ((unsigned char) (((! var_1_35) && var_1_39) && (var_1_40 && var_1_41))))))) && ((! var_1_34) ? (var_1_42 == ((unsigned long int) (var_1_14 + ((min (last_1_var_1_47 , last_1_var_1_59)) + var_1_20)))) : ((last_1_var_1_11 < last_1_var_1_95) ? ((((last_1_var_1_59 - var_1_26) < last_1_var_1_25) || (last_1_var_1_95 == var_1_19)) ? (var_1_42 == ((unsigned long int) last_1_var_1_58)) : 1) : 1))) && ((var_1_29 != (var_1_26 - var_1_7)) ? (var_1_43 == ((signed long int) (((abs (var_1_44)) - var_1_5) - var_1_7))) : (var_1_43 == ((signed long int) (min (var_1_14 , (last_1_var_1_47 + var_1_45))))))) && (var_1_38 ? (((var_1_25 / var_1_23) < var_1_29) ? (var_1_46 == ((unsigned char) (! (var_1_36 || var_1_40)))) : ((var_1_29 == (min (var_1_43 , var_1_8))) ? (var_1_46 == ((unsigned char) ((var_1_36 && var_1_35) || var_1_34))) : 1)) : 1)) && ((var_1_7 <= (min (last_1_var_1_78 , (last_1_var_1_43 + var_1_23)))) ? (var_1_47 == ((signed short int) ((last_1_var_1_1 + var_1_8) + ((max (var_1_5 , last_1_var_1_13)) - (max (5 , last_1_var_1_92)))))) : 1)) && ((var_1_15 > var_1_23) ? (var_1_48 == ((double) (var_1_49 + (min ((var_1_50 - var_1_51) , 32.5))))) : (var_1_104 ? (var_1_48 == ((double) (var_1_49 + var_1_51))) : (var_1_48 == ((double) var_1_49))))) && ((var_1_45 < var_1_87) ? (var_1_53 == ((signed char) ((min (var_1_7 , var_1_8)) - (var_1_54 - (var_1_55 - var_1_56))))) : (var_1_53 == ((signed char) var_1_54)))) && ((var_1_66 > (max (var_1_19 , (var_1_11 + var_1_45)))) ? (var_1_57 == ((unsigned char) (var_1_35 || var_1_40))) : (var_1_57 == ((unsigned char) (var_1_36 && var_1_35))))) && (((var_1_40 || var_1_36) || last_1_var_1_46) ? ((((- last_1_var_1_106) * (last_1_var_1_80 / var_1_17)) < 1.00000000000475E11) ? (var_1_58 == ((unsigned long int) ((max (var_1_23 , var_1_44)) - ((1713733018u - var_1_5) - (var_1_20 - last_1_var_1_87))))) : (var_1_58 == ((unsigned long int) (max (var_1_8 , var_1_15))))) : 1)) && ((var_1_98 > var_1_56) ? ((var_1_98 > (var_1_23 * var_1_19)) ? (var_1_59 == ((unsigned char) (var_1_54 + (abs (var_1_56))))) : ((var_1_17 < var_1_69) ? (var_1_39 ? ((var_1_8 >= var_1_44) ? (var_1_59 == ((unsigned char) (abs (var_1_55)))) : (var_1_59 == ((unsigned char) (var_1_8 + var_1_26)))) : 1) : 1)) : 1)) && (((var_1_17 * var_1_51) < var_1_80) ? (((var_1_20 + var_1_7) >= var_1_13) ? (var_1_41 ? (var_1_60 == ((float) (max ((max (var_1_50 , var_1_61)) , 256.8f)))) : (((var_1_15 | (32u / var_1_31)) != var_1_42) ? (var_1_60 == ((float) (max (var_1_61 , var_1_51)))) : (var_1_60 == ((float) (var_1_51 + var_1_62))))) : (((var_1_15 * (max (var_1_97 , 16))) >= var_1_23) ? (var_1_60 == ((float) var_1_50)) : 1)) : (var_1_60 == ((float) (max (((var_1_51 - var_1_50) + var_1_62) , var_1_49)))))) && ((var_1_85 == var_1_17) ? ((var_1_16 >= var_1_19) ? ((var_1_75 >= var_1_55) ? (((- var_1_5) > var_1_42) ? (var_1_63 == ((double) (max (var_1_61 , (min (9.999999999999992E14 , (max (var_1_64 , var_1_50)))))))) : 1) : (var_1_63 == ((double) var_1_65))) : (var_1_63 == ((double) 256.375))) : ((var_1_29 <= var_1_15) ? (var_1_63 == ((double) (var_1_50 - var_1_51))) : 1))) && (var_1_68 ? ((var_1_16 == (var_1_30 / var_1_67)) ? (var_1_66 == ((signed char) (var_1_56 + -1))) : (var_1_66 == ((signed char) ((var_1_54 - var_1_56) - var_1_7)))) : (var_1_66 == ((signed char) (var_1_8 - var_1_55))))) && (((var_1_24 * var_1_44) <= var_1_56) ? (var_1_32 ? (var_1_68 == ((unsigned char) (last_1_var_1_68 && var_1_37))) : (var_1_68 == ((unsigned char) ((var_1_47 <= (var_1_5 * var_1_24)) || (var_1_35 || var_1_39))))) : 1)) && ((! var_1_37) ? (((- var_1_61) != var_1_103) ? ((var_1_86 >= (32u & var_1_14)) ? (var_1_69 == ((double) var_1_71)) : (var_1_69 == ((double) (max (((var_1_72 + var_1_73) + 32.75) , ((abs (var_1_51)) + var_1_50)))))) : 1) : (var_1_69 == ((double) (max ((var_1_50 - var_1_51) , (min ((max (var_1_73 , var_1_71)) , var_1_72)))))))) && ((var_1_100 != var_1_62) ? (((var_1_5 + var_1_42) < ((var_1_44 - var_1_20) + var_1_93)) ? (var_1_74 == ((float) (9.5f + var_1_51))) : (var_1_74 == ((float) (abs (var_1_62 + var_1_50))))) : 1)) && (((var_1_93 <= last_1_var_1_75) && (var_1_56 >= (var_1_86 * var_1_19))) ? (var_1_75 == ((unsigned char) (var_1_76 - var_1_5))) : (var_1_75 == ((unsigned char) (128 - (abs (max (var_1_77 , var_1_55)))))))) && ((var_1_104 && var_1_38) ? (var_1_78 == ((unsigned long int) ((var_1_67 - (32u + var_1_86)) + 4u))) : (var_1_78 == ((unsigned long int) (var_1_8 + (var_1_67 - var_1_13)))))) && (((abs (var_1_74)) <= var_1_100) ? ((var_1_104 || var_1_57) ? (var_1_34 ? (var_1_80 == ((double) (var_1_50 - var_1_51))) : 1) : (var_1_80 == ((double) (max ((var_1_51 - var_1_50) , var_1_71))))) : (var_1_80 == ((double) (max (((max (var_1_49 , var_1_72)) + var_1_51) , var_1_50)))))) && ((var_1_60 <= var_1_69) ? (var_1_81 == ((double) (min ((49.75 - (var_1_82 - var_1_51)) , var_1_50)))) : (((min (var_1_23 , var_1_67)) >= var_1_20) ? (var_1_81 == ((double) (var_1_50 - var_1_82))) : 1))) && ((var_1_40 && (var_1_11 < var_1_44)) ? (((var_1_62 > (var_1_82 + 32.8f)) || var_1_104) ? (var_1_83 == ((float) (var_1_82 - ((max (var_1_51 , var_1_50)) + var_1_84)))) : (var_1_68 ? (var_1_83 == ((float) var_1_61)) : 1)) : ((((abs (var_1_78)) / (abs (var_1_44))) < (min (var_1_24 , var_1_86))) ? (var_1_83 == ((float) ((min (8.6f , var_1_82)) - var_1_84))) : 1))) && ((var_1_45 < (var_1_43 * (max (var_1_30 , 32)))) ? (var_1_85 == ((float) (var_1_50 - (var_1_82 - (max (var_1_51 , var_1_84)))))) : (var_1_85 == ((float) (abs (var_1_84 + var_1_49)))))) && ((last_1_var_1_13 < last_1_var_1_24) ? ((! last_1_var_1_68) ? (var_1_86 == ((unsigned long int) (max (var_1_31 , last_1_var_1_16)))) : 1) : 1)) && ((64 >= var_1_86) ? (((var_1_100 >= var_1_80) && (var_1_95 >= (- var_1_97))) ? (var_1_87 == ((signed short int) var_1_77)) : (var_1_87 == ((signed short int) var_1_23))) : (var_1_87 == ((signed short int) (((last_1_var_1_87 + var_1_108) + var_1_95) + var_1_7))))) && (((~ var_1_58) < -8) ? (var_1_104 ? (var_1_88 == ((float) (var_1_84 + (var_1_50 - var_1_51)))) : 1) : 1)) && ((var_1_100 >= var_1_72) ? ((var_1_32 || (var_1_24 > var_1_16)) ? (var_1_90 == ((float) (var_1_84 - var_1_82))) : 1) : (var_1_90 == ((float) (var_1_73 + (min (var_1_50 , (var_1_72 + var_1_91)))))))) && ((var_1_38 || (var_1_109 >= var_1_61)) ? (var_1_92 == ((unsigned short int) (var_1_55 + (max (var_1_54 , var_1_87))))) : (var_1_92 == ((unsigned short int) var_1_47)))) && (var_1_93 == ((signed long int) last_1_var_1_27))) && (var_1_94 == ((float) var_1_51))) && (var_1_39 ? (var_1_95 == ((signed short int) var_1_21)) : (var_1_95 == ((signed short int) var_1_5)))) && (var_1_35 ? (var_1_96 == ((unsigned char) var_1_54)) : (var_1_96 == ((unsigned char) 2)))) && (var_1_32 ? (var_1_97 == ((signed char) var_1_56)) : (var_1_97 == ((signed char) 10)))) && (var_1_98 == ((signed short int) var_1_99))) && (var_1_34 ? (var_1_100 == ((double) var_1_65)) : (var_1_100 == ((double) var_1_82)))) && (var_1_68 ? (var_1_101 == ((signed char) var_1_7)) : 1)) && (var_1_37 ? (var_1_102 == ((signed char) var_1_8)) : (var_1_102 == ((signed char) var_1_7)))) && (var_1_103 == ((float) var_1_50))) && (last_1_var_1_68 ? (var_1_104 == ((unsigned char) var_1_37)) : (var_1_104 == ((unsigned char) var_1_40)))) && (var_1_46 ? (var_1_105 == ((float) var_1_82)) : (var_1_105 == ((float) var_1_50)))) && (var_1_106 == ((float) var_1_51))) && (var_1_107 == ((float) var_1_50))) && ((var_1_21 > var_1_19) ? (var_1_108 == ((unsigned short int) ((max (8 , var_1_43)) + var_1_43))) : 1)) && (var_1_104 ? (((var_1_54 + 256u) >= var_1_31) ? (var_1_109 == ((double) var_1_65)) : 1) : 1)
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
