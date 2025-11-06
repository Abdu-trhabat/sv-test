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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch65Amount500.c", 13, "reach_error"); }
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
signed long int var_1_1 = 10;
signed long int var_1_4 = -16;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 32;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 5;
signed short int var_1_9 = 8;
signed long int var_1_10 = -1;
double var_1_12 = 4.55;
unsigned char var_1_13 = 200;
unsigned char var_1_14 = 2;
double var_1_15 = 9.25;
double var_1_16 = 99999999999999.25;
signed long int var_1_17 = 5;
signed long int var_1_18 = 8;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
signed char var_1_21 = -2;
unsigned char var_1_23 = 2;
unsigned short int var_1_24 = 0;
unsigned short int var_1_25 = 5;
unsigned long int var_1_26 = 64;
unsigned long int var_1_27 = 1827885307;
signed short int var_1_28 = -32;
unsigned short int var_1_29 = 1;
float var_1_30 = 9.6;
float var_1_31 = 0.5;
float var_1_32 = 128.5;
float var_1_33 = 0.25;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 0;
float var_1_36 = 4.5;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 1;
double var_1_39 = 999999999999.2;
double var_1_40 = 0.5;
unsigned short int var_1_41 = 50;
unsigned char var_1_42 = 5;
unsigned char var_1_43 = 16;
unsigned char var_1_44 = 100;
unsigned char var_1_45 = 5;
unsigned char var_1_46 = 1;
double var_1_49 = 99.5;
double var_1_50 = 4.4;
unsigned long int var_1_51 = 32;
unsigned long int var_1_53 = 4270792820;
unsigned long int var_1_54 = 1000000000;
float var_1_55 = 256.5;
double var_1_56 = 16.25;
signed short int var_1_57 = -32;
signed long int var_1_58 = -50;
unsigned long int var_1_59 = 2279559363;
signed long int var_1_60 = 2;
unsigned long int var_1_61 = 8;
unsigned long int var_1_62 = 1474783624;
unsigned long int var_1_63 = 1000000000;
unsigned long int var_1_64 = 1000000000;
float var_1_65 = 500.8;
float var_1_67 = 0.0;
float var_1_68 = 31.75;
unsigned long int var_1_69 = 128;
unsigned long int var_1_70 = 128;
unsigned long int var_1_71 = 3372333255;
unsigned long int var_1_72 = 3540080309;
unsigned long int var_1_73 = 1916677313;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 0;
unsigned char var_1_76 = 16;
unsigned long int var_1_78 = 4023740470;
unsigned char var_1_79 = 100;
unsigned char var_1_80 = 50;
unsigned char var_1_81 = 100;
unsigned char var_1_82 = 100;
unsigned char var_1_83 = 100;
unsigned char var_1_84 = 1;
unsigned char var_1_85 = 25;
signed long int var_1_86 = 1;
signed long int var_1_87 = 1165774310;
double var_1_88 = 1.8;
unsigned long int var_1_89 = 50;
unsigned char var_1_90 = 0;
signed short int var_1_91 = -2;
signed long int var_1_92 = 16;
signed long int var_1_93 = 5;
unsigned short int var_1_94 = 5;
unsigned long int var_1_95 = 2;
signed char var_1_96 = -10;
unsigned char var_1_97 = 1;
signed short int var_1_98 = -100;
unsigned char var_1_99 = 1;
signed short int var_1_100 = -128;
signed char var_1_101 = -4;
signed short int var_1_102 = 200;
signed long int var_1_103 = 4;
float var_1_104 = 2.6;
double var_1_105 = 15.55;
float var_1_106 = 9.5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 10;
signed short int last_1_var_1_9 = 8;
signed long int last_1_var_1_18 = 8;
unsigned char last_1_var_1_19 = 1;
unsigned short int last_1_var_1_24 = 0;
unsigned long int last_1_var_1_26 = 64;
signed short int last_1_var_1_28 = -32;
unsigned char last_1_var_1_34 = 1;
unsigned char last_1_var_1_37 = 0;
double last_1_var_1_39 = 999999999999.2;
unsigned short int last_1_var_1_41 = 50;
double last_1_var_1_49 = 99.5;
float last_1_var_1_55 = 256.5;
double last_1_var_1_56 = 16.25;
signed short int last_1_var_1_57 = -32;
signed long int last_1_var_1_58 = -50;
signed long int last_1_var_1_60 = 2;
unsigned long int last_1_var_1_69 = 128;
unsigned long int last_1_var_1_70 = 128;
unsigned char last_1_var_1_74 = 0;
unsigned char last_1_var_1_76 = 16;
unsigned char last_1_var_1_80 = 50;
unsigned char last_1_var_1_84 = 1;
unsigned char last_1_var_1_85 = 25;
signed long int last_1_var_1_86 = 1;
double last_1_var_1_88 = 1.8;
unsigned long int last_1_var_1_89 = 50;
unsigned char last_1_var_1_90 = 0;
unsigned short int last_1_var_1_94 = 5;
unsigned char last_1_var_1_97 = 1;
unsigned char last_1_var_1_99 = 1;
signed long int last_1_var_1_103 = 4;
double last_1_var_1_105 = 15.55;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req30Batch65Amount500
	if ((last_1_var_1_88 + 499.375f) >= var_1_33) {
		var_1_65 = (((var_1_67 - var_1_68) + var_1_15) - (99.9f + 0.75f));
	} else {
		var_1_65 = ((abs (var_1_32)) - var_1_15);
	}


	// From: Req40Batch65Amount500
	if ((min (var_1_65 , var_1_50)) > (var_1_15 - (min (var_1_16 , var_1_33)))) {
		var_1_88 = (max ((var_1_33 - var_1_15) , (max (var_1_16 , var_1_50))));
	}


	// From: Req31Batch65Amount500
	signed long int stepLocal_28 = var_1_8 & var_1_6;
	if (var_1_43 < stepLocal_28) {
		var_1_69 = (last_1_var_1_70 + 10u);
	} else {
		if (last_1_var_1_55 <= 25.7f) {
			var_1_69 = var_1_62;
		}
	}


	// From: Req39Batch65Amount500
	if (last_1_var_1_99) {
		var_1_86 = (min (last_1_var_1_70 , last_1_var_1_1));
	} else {
		if (last_1_var_1_84) {
			if (! last_1_var_1_90) {
				if ((var_1_31 <= var_1_15) && var_1_38) {
					var_1_86 = (var_1_45 - (min ((var_1_87 - last_1_var_1_76) , var_1_64)));
				} else {
					var_1_86 = (var_1_25 + last_1_var_1_57);
				}
			} else {
				if ((last_1_var_1_41 < 50) || last_1_var_1_99) {
					var_1_86 = var_1_4;
				} else {
					var_1_86 = ((last_1_var_1_1 - (abs (256))) + ((abs (last_1_var_1_58)) + (var_1_45 - var_1_6)));
				}
			}
		} else {
			var_1_86 = (min (-4 , last_1_var_1_58));
		}
	}


	// From: Req15Batch65Amount500
	if (var_1_16 != last_1_var_1_39) {
		if (var_1_14 <= var_1_13) {
			var_1_34 = (last_1_var_1_19 && var_1_35);
		} else {
			var_1_34 = var_1_20;
		}
	}


	// From: Req25Batch65Amount500
	unsigned long int stepLocal_23 = var_1_53 - last_1_var_1_94;
	if (! (last_1_var_1_97 || var_1_38)) {
		if (var_1_54 >= stepLocal_23) {
			var_1_56 = (var_1_31 + var_1_32);
		}
	}


	// From: Req23Batch65Amount500
	unsigned char stepLocal_21 = last_1_var_1_37;
	unsigned char stepLocal_20 = last_1_var_1_97;
	unsigned long int stepLocal_19 = last_1_var_1_89;
	if ((last_1_var_1_105 >= var_1_40) || stepLocal_20) {
		if (stepLocal_21 || last_1_var_1_97) {
			var_1_51 = (var_1_53 - ((var_1_54 + 1000000000u) - 1u));
		} else {
			if (stepLocal_19 > (last_1_var_1_24 * last_1_var_1_89)) {
				var_1_51 = (var_1_53 - last_1_var_1_85);
			} else {
				var_1_51 = (max (var_1_25 , (abs (var_1_27))));
			}
		}
	} else {
		var_1_51 = (var_1_53 - var_1_42);
	}


	// From: Req7Batch65Amount500
	unsigned char stepLocal_4 = last_1_var_1_84;
	if (last_1_var_1_84) {
		if (stepLocal_4 || ((2.25 + last_1_var_1_56) != 31.625)) {
			var_1_19 = (! var_1_20);
		} else {
			var_1_19 = (((max (var_1_4 , var_1_8)) < last_1_var_1_60) || var_1_20);
		}
	}


	// From: Req51Batch65Amount500
	if (var_1_19) {
		var_1_100 = var_1_82;
	}


	// From: Req37Batch65Amount500
	if (last_1_var_1_74) {
		var_1_84 = (! (var_1_38 && (var_1_35 || var_1_20)));
	} else {
		var_1_84 = (! var_1_35);
	}


	// From: Req21Batch65Amount500
	if (var_1_84 && var_1_20) {
		var_1_46 = (var_1_38 && var_1_20);
	} else {
		var_1_46 = (! var_1_35);
	}


	// From: Req1Batch65Amount500
	if (last_1_var_1_37) {
		if (last_1_var_1_34) {
			var_1_1 = (16 - 2);
		} else {
			var_1_1 = var_1_4;
		}
	}


	// From: Req19Batch65Amount500
	signed long int stepLocal_16 = var_1_1;
	if (stepLocal_16 > ((var_1_8 + var_1_6) << (max (var_1_42 , var_1_43)))) {
		var_1_41 = var_1_43;
	}


	// From: Req32Batch65Amount500
	signed long int stepLocal_31 = ~ var_1_43;
	unsigned long int stepLocal_30 = last_1_var_1_69;
	unsigned long int stepLocal_29 = var_1_59;
	if (stepLocal_30 < (max (last_1_var_1_70 , (var_1_25 + var_1_43)))) {
		if (((last_1_var_1_9 / var_1_64) | (var_1_25 & last_1_var_1_18)) >= stepLocal_29) {
			if (stepLocal_31 <= last_1_var_1_86) {
				var_1_70 = (((min (var_1_71 , var_1_72)) - var_1_64) - var_1_6);
			} else {
				var_1_70 = (min (var_1_54 , ((last_1_var_1_28 + var_1_14) + var_1_8)));
			}
		} else {
			if ((var_1_32 * var_1_31) > last_1_var_1_49) {
				var_1_70 = (var_1_53 - (last_1_var_1_89 + var_1_8));
			}
		}
	} else {
		if (last_1_var_1_74) {
			var_1_70 = (var_1_53 - (min (var_1_8 , var_1_42)));
		} else {
			var_1_70 = (min (var_1_64 , (var_1_72 - (var_1_73 - var_1_25))));
		}
	}


	// From: Req53Batch65Amount500
	if (var_1_19) {
		var_1_102 = var_1_6;
	} else {
		var_1_102 = var_1_7;
	}


	// From: Req2Batch65Amount500
	if (var_1_34) {
		var_1_5 = (min (var_1_6 , (var_1_7 - var_1_8)));
	}


	// From: Req4Batch65Amount500
	signed long int stepLocal_0 = (var_1_13 - var_1_14) - 10;
	if (var_1_7 > stepLocal_0) {
		var_1_12 = ((max ((31.25 + var_1_15) , (abs (5.5)))) - var_1_16);
	}


	// From: Req27Batch65Amount500
	if ((var_1_59 - (abs (128u))) >= var_1_8) {
		var_1_58 = var_1_43;
	}


	// From: Req29Batch65Amount500
	var_1_61 = (((min (var_1_27 , var_1_62)) + (var_1_63 + var_1_64)) - var_1_54);


	// From: Req38Batch65Amount500
	if (var_1_71 < var_1_78) {
		if (var_1_88 <= 8.2) {
			var_1_85 = (var_1_14 + var_1_79);
		} else {
			var_1_85 = (abs (var_1_82));
		}
	}


	// From: Req42Batch65Amount500
	var_1_90 = var_1_75;


	// From: Req43Batch65Amount500
	var_1_91 = var_1_14;


	// From: Req44Batch65Amount500
	if (var_1_46) {
		var_1_92 = var_1_93;
	} else {
		var_1_92 = var_1_8;
	}


	// From: Req47Batch65Amount500
	var_1_96 = var_1_42;


	// From: Req48Batch65Amount500
	var_1_97 = var_1_20;


	// From: Req49Batch65Amount500
	if (var_1_97) {
		var_1_98 = var_1_82;
	}


	// From: Req50Batch65Amount500
	if (last_1_var_1_99) {
		var_1_99 = var_1_20;
	} else {
		var_1_99 = var_1_38;
	}


	// From: Req52Batch65Amount500
	if (var_1_84) {
		var_1_101 = var_1_42;
	} else {
		var_1_101 = var_1_14;
	}


	// From: Req55Batch65Amount500
	var_1_104 = var_1_32;


	// From: Req56Batch65Amount500
	var_1_105 = var_1_33;


	// From: Req57Batch65Amount500
	var_1_106 = var_1_68;


	// From: Req26Batch65Amount500
	signed long int stepLocal_24 = var_1_10;
	if (stepLocal_24 >= (var_1_1 * var_1_14)) {
		var_1_57 = ((min (10 , var_1_45)) + (min (-10 , var_1_86)));
	}


	// From: Req20Batch65Amount500
	signed long int stepLocal_17 = var_1_86;
	if ((~ (var_1_43 | var_1_86)) < stepLocal_17) {
		if (var_1_19) {
			var_1_44 = (var_1_43 + var_1_42);
		} else {
			var_1_44 = (min ((max ((var_1_45 + var_1_43) , var_1_14)) , (var_1_42 + var_1_8)));
		}
	}


	// From: Req45Batch65Amount500
	if (var_1_90) {
		var_1_94 = var_1_13;
	} else {
		var_1_94 = var_1_44;
	}


	// From: Req17Batch65Amount500
	signed long int stepLocal_12 = var_1_10;
	if (! var_1_46) {
		if (stepLocal_12 >= var_1_70) {
			var_1_37 = (var_1_20 && var_1_38);
		}
	}


	// From: Req33Batch65Amount500
	if ((abs (var_1_65)) <= (- var_1_31)) {
		var_1_74 = ((var_1_105 < var_1_40) && (var_1_34 && var_1_75));
	}


	// From: Req9Batch65Amount500
	unsigned char stepLocal_7 = -4 > (var_1_8 * var_1_10);
	if (var_1_99 || stepLocal_7) {
		var_1_23 = var_1_14;
	}


	// From: Req11Batch65Amount500
	var_1_26 = ((abs (last_1_var_1_26)) + (min ((max (last_1_var_1_26 , var_1_61)) , (var_1_27 - var_1_25))));


	// From: Req16Batch65Amount500
	if (var_1_99) {
		var_1_36 = (var_1_32 - (min (var_1_16 , var_1_33)));
	} else {
		var_1_36 = 15.375f;
	}


	// From: Req41Batch65Amount500
	if (var_1_90) {
		var_1_89 = var_1_7;
	}


	// From: Req46Batch65Amount500
	if (var_1_99) {
		var_1_95 = var_1_62;
	}


	// From: Req24Batch65Amount500
	signed long int stepLocal_22 = var_1_4;
	if (var_1_35) {
		if (var_1_89 != stepLocal_22) {
			if (! (var_1_69 < var_1_27)) {
				var_1_55 = ((var_1_40 - 7.26f) + var_1_31);
			}
		}
	}


	// From: Req3Batch65Amount500
	if (var_1_4 <= ((var_1_7 + var_1_8) / var_1_10)) {
		if (7.5 >= var_1_12) {
			var_1_9 = (abs (var_1_8 - (var_1_95 + var_1_7)));
		} else {
			var_1_9 = var_1_95;
		}
	}


	// From: Req5Batch65Amount500
	unsigned char stepLocal_1 = var_1_7;
	if (var_1_58 > stepLocal_1) {
		var_1_17 = (5 + (var_1_7 + (max (var_1_14 , var_1_58))));
	} else {
		var_1_17 = (var_1_6 + var_1_89);
	}


	// From: Req13Batch65Amount500
	unsigned long int stepLocal_9 = var_1_89;
	signed long int stepLocal_8 = max (var_1_41 , var_1_14);
	if (var_1_17 != stepLocal_8) {
		var_1_29 = var_1_7;
	} else {
		if (stepLocal_9 > var_1_17) {
			var_1_29 = (var_1_8 + var_1_17);
		} else {
			var_1_29 = (max (25 , var_1_13));
		}
	}


	// From: Req14Batch65Amount500
	signed long int stepLocal_11 = 10 * (~ var_1_9);
	signed long int stepLocal_10 = -4;
	if (var_1_61 <= stepLocal_10) {
		var_1_30 = (max ((4.125f + var_1_31) , (var_1_15 - var_1_16)));
	} else {
		if (var_1_14 <= stepLocal_11) {
			var_1_30 = (max (((var_1_15 + var_1_32) - (max (var_1_33 , var_1_16))) , var_1_31));
		}
	}


	// From: Req22Batch65Amount500
	signed long int stepLocal_18 = var_1_17;
	if (var_1_33 >= var_1_56) {
		var_1_49 = (min (var_1_33 , var_1_50));
	} else {
		if ((- (var_1_70 * var_1_27)) >= stepLocal_18) {
			var_1_49 = var_1_50;
		}
	}


	// From: Req35Batch65Amount500
	if (var_1_46) {
		if (((min (var_1_43 , var_1_14)) - (var_1_62 - var_1_6)) > (max (var_1_86 , var_1_25))) {
			if (last_1_var_1_80 < var_1_43) {
				var_1_80 = (max (var_1_8 , (var_1_42 + var_1_45)));
			} else {
				if (var_1_12 <= var_1_49) {
					if (var_1_99) {
						if ((- var_1_13) < var_1_61) {
							var_1_80 = var_1_79;
						}
					}
				}
			}
		}
	} else {
		if ((~ var_1_61) >= (var_1_70 * (last_1_var_1_80 * 100))) {
			if (1 <= (last_1_var_1_80 + var_1_26)) {
				var_1_80 = (max ((min (var_1_43 , var_1_7)) , var_1_79));
			}
		} else {
			var_1_80 = var_1_79;
		}
	}


	// From: Req34Batch65Amount500
	signed long int stepLocal_33 = var_1_1;
	unsigned long int stepLocal_32 = var_1_26;
	if (var_1_56 > ((var_1_49 / var_1_67) * var_1_88)) {
		if (stepLocal_33 > var_1_61) {
			if ((var_1_78 - var_1_54) > stepLocal_32) {
				var_1_76 = (var_1_7 - (abs (max (var_1_43 , var_1_14))));
			} else {
				if (var_1_37) {
					var_1_76 = (((max (64 , var_1_79)) - var_1_42) + (64 - var_1_43));
				}
			}
		} else {
			var_1_76 = (abs (var_1_43 + (100 - var_1_42)));
		}
	} else {
		var_1_76 = (max (var_1_14 , (min (var_1_79 , var_1_8))));
	}


	// From: Req6Batch65Amount500
	signed long int stepLocal_3 = (var_1_4 + var_1_102) * var_1_10;
	unsigned char stepLocal_2 = var_1_8;
	if (stepLocal_3 <= var_1_70) {
		if (stepLocal_2 <= var_1_13) {
			var_1_18 = (var_1_13 + var_1_80);
		}
	}


	// From: Req8Batch65Amount500
	unsigned long int stepLocal_6 = var_1_70;
	unsigned long int stepLocal_5 = max ((var_1_6 * var_1_18) , var_1_70);
	if (stepLocal_5 > var_1_69) {
		var_1_21 = var_1_13;
	} else {
		if (stepLocal_6 == ((min (var_1_7 , var_1_4)) / (min (var_1_13 , var_1_10)))) {
			var_1_21 = (max (var_1_14 , var_1_13));
		} else {
			var_1_21 = (max (var_1_14 , 64));
		}
	}


	// From: Req36Batch65Amount500
	if (((var_1_76 * var_1_51) + (var_1_63 + var_1_71)) < (var_1_25 * (max (var_1_59 , 1u)))) {
		if (var_1_84) {
			if ((- var_1_88) < var_1_88) {
				var_1_81 = (abs (var_1_7));
			}
		} else {
			if (var_1_90 && ((2.75 - var_1_40) > var_1_33)) {
				if (var_1_34) {
					var_1_81 = (((var_1_82 - var_1_43) + var_1_83) - (min (1 , var_1_45)));
				}
			}
		}
	}


	// From: Req12Batch65Amount500
	if (var_1_90) {
		var_1_28 = (var_1_7 - (var_1_51 + var_1_81));
	}


	// From: Req18Batch65Amount500
	unsigned char stepLocal_15 = var_1_14 <= var_1_28;
	unsigned char stepLocal_14 = (var_1_27 << 1) < var_1_51;
	signed long int stepLocal_13 = var_1_41 * var_1_28;
	if (var_1_34 || stepLocal_15) {
		if (stepLocal_13 >= (500 * var_1_9)) {
			if (var_1_97) {
				var_1_39 = (min ((min (var_1_33 , var_1_15)) , var_1_31));
			} else {
				if (stepLocal_14 && var_1_38) {
					var_1_39 = (min (var_1_15 , ((abs (var_1_32)) - var_1_33)));
				} else {
					var_1_39 = (var_1_15 + var_1_32);
				}
			}
		} else {
			var_1_39 = (var_1_32 + (var_1_15 - (min (1.00000000075E9 , var_1_40))));
		}
	} else {
		var_1_39 = (max (var_1_32 , 1.9));
	}


	// From: Req10Batch65Amount500
	if (var_1_99) {
		if (var_1_39 <= (- 32.75)) {
			if (var_1_20) {
				var_1_24 = (var_1_25 + (max ((min (var_1_14 , var_1_7)) , var_1_41)));
			}
		}
	} else {
		var_1_24 = (var_1_7 + var_1_85);
	}


	// From: Req28Batch65Amount500
	unsigned char stepLocal_27 = var_1_6;
	signed long int stepLocal_26 = (var_1_8 - var_1_7) / var_1_10;
	signed long int stepLocal_25 = 4;
	if (var_1_14 < stepLocal_25) {
		if (stepLocal_26 == var_1_4) {
			if (stepLocal_27 <= var_1_24) {
				var_1_60 = (var_1_6 + var_1_61);
			}
		} else {
			var_1_60 = (var_1_57 + (min (var_1_100 , var_1_14)));
		}
	} else {
		var_1_60 = (var_1_7 + (min ((max (var_1_6 , 64)) , var_1_43)));
	}


	// From: Req54Batch65Amount500
	if ((min (32 , (abs (4)))) <= var_1_24) {
		var_1_103 = (abs (var_1_63));
	} else {
		var_1_103 = (max (var_1_45 , last_1_var_1_103));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483647);
	assume_abort_if_not(var_1_4 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 127);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	assume_abort_if_not(var_1_10 != 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 191);
	assume_abort_if_not(var_1_13 <= 255);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 64);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 1073741823);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -461168.6018427383000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 22);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 22);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -922337.2036854766000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 2147483647);
	assume_abort_if_not(var_1_53 <= 4294967294);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 536870911);
	assume_abort_if_not(var_1_54 <= 1073741824);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967295);
	var_1_62 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_62 >= 1073741823);
	assume_abort_if_not(var_1_62 <= 2147483647);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 536870912);
	assume_abort_if_not(var_1_63 <= 1073741824);
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 536870912);
	assume_abort_if_not(var_1_64 <= 1073741823);
	var_1_67 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_67 >= 2305843.009213691400e+12F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427383000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 2305843.009213691400e+12F && var_1_68 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_71 >= 3221225470);
	assume_abort_if_not(var_1_71 <= 4294967294);
	var_1_72 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_72 >= 3221225470);
	assume_abort_if_not(var_1_72 <= 4294967294);
	var_1_73 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_73 >= 1073741823);
	assume_abort_if_not(var_1_73 <= 2147483647);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 0);
	var_1_78 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_78 >= 2147483647);
	assume_abort_if_not(var_1_78 <= 4294967295);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 63);
	assume_abort_if_not(var_1_79 <= 127);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 95);
	assume_abort_if_not(var_1_82 <= 127);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 64);
	assume_abort_if_not(var_1_83 <= 127);
	var_1_87 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_87 >= 1073741823);
	assume_abort_if_not(var_1_87 <= 2147483646);
	var_1_93 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_93 >= -2147483647);
	assume_abort_if_not(var_1_93 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_105 = var_1_105;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_37 ? (last_1_var_1_34 ? (var_1_1 == ((signed long int) (16 - 2))) : (var_1_1 == ((signed long int) var_1_4))) : 1) && (var_1_34 ? (var_1_5 == ((unsigned char) (min (var_1_6 , (var_1_7 - var_1_8))))) : 1)) && ((var_1_4 <= ((var_1_7 + var_1_8) / var_1_10)) ? ((7.5 >= var_1_12) ? (var_1_9 == ((signed short int) (abs (var_1_8 - (var_1_95 + var_1_7))))) : (var_1_9 == ((signed short int) var_1_95))) : 1)) && ((var_1_7 > ((var_1_13 - var_1_14) - 10)) ? (var_1_12 == ((double) ((max ((31.25 + var_1_15) , (abs (5.5)))) - var_1_16))) : 1)) && ((var_1_58 > var_1_7) ? (var_1_17 == ((signed long int) (5 + (var_1_7 + (max (var_1_14 , var_1_58)))))) : (var_1_17 == ((signed long int) (var_1_6 + var_1_89))))) && ((((var_1_4 + var_1_102) * var_1_10) <= var_1_70) ? ((var_1_8 <= var_1_13) ? (var_1_18 == ((signed long int) (var_1_13 + var_1_80))) : 1) : 1)) && (last_1_var_1_84 ? ((last_1_var_1_84 || ((2.25 + last_1_var_1_56) != 31.625)) ? (var_1_19 == ((unsigned char) (! var_1_20))) : (var_1_19 == ((unsigned char) (((max (var_1_4 , var_1_8)) < last_1_var_1_60) || var_1_20)))) : 1)) && (((max ((var_1_6 * var_1_18) , var_1_70)) > var_1_69) ? (var_1_21 == ((signed char) var_1_13)) : ((var_1_70 == ((min (var_1_7 , var_1_4)) / (min (var_1_13 , var_1_10)))) ? (var_1_21 == ((signed char) (max (var_1_14 , var_1_13)))) : (var_1_21 == ((signed char) (max (var_1_14 , 64))))))) && ((var_1_99 || (-4 > (var_1_8 * var_1_10))) ? (var_1_23 == ((unsigned char) var_1_14)) : 1)) && (var_1_99 ? ((var_1_39 <= (- 32.75)) ? (var_1_20 ? (var_1_24 == ((unsigned short int) (var_1_25 + (max ((min (var_1_14 , var_1_7)) , var_1_41))))) : 1) : 1) : (var_1_24 == ((unsigned short int) (var_1_7 + var_1_85))))) && (var_1_26 == ((unsigned long int) ((abs (last_1_var_1_26)) + (min ((max (last_1_var_1_26 , var_1_61)) , (var_1_27 - var_1_25))))))) && (var_1_90 ? (var_1_28 == ((signed short int) (var_1_7 - (var_1_51 + var_1_81)))) : 1)) && ((var_1_17 != (max (var_1_41 , var_1_14))) ? (var_1_29 == ((unsigned short int) var_1_7)) : ((var_1_89 > var_1_17) ? (var_1_29 == ((unsigned short int) (var_1_8 + var_1_17))) : (var_1_29 == ((unsigned short int) (max (25 , var_1_13))))))) && ((var_1_61 <= -4) ? (var_1_30 == ((float) (max ((4.125f + var_1_31) , (var_1_15 - var_1_16))))) : ((var_1_14 <= (10 * (~ var_1_9))) ? (var_1_30 == ((float) (max (((var_1_15 + var_1_32) - (max (var_1_33 , var_1_16))) , var_1_31)))) : 1))) && ((var_1_16 != last_1_var_1_39) ? ((var_1_14 <= var_1_13) ? (var_1_34 == ((unsigned char) (last_1_var_1_19 && var_1_35))) : (var_1_34 == ((unsigned char) var_1_20))) : 1)) && (var_1_99 ? (var_1_36 == ((float) (var_1_32 - (min (var_1_16 , var_1_33))))) : (var_1_36 == ((float) 15.375f)))) && ((! var_1_46) ? ((var_1_10 >= var_1_70) ? (var_1_37 == ((unsigned char) (var_1_20 && var_1_38))) : 1) : 1)) && ((var_1_34 || (var_1_14 <= var_1_28)) ? (((var_1_41 * var_1_28) >= (500 * var_1_9)) ? (var_1_97 ? (var_1_39 == ((double) (min ((min (var_1_33 , var_1_15)) , var_1_31)))) : ((((var_1_27 << 1) < var_1_51) && var_1_38) ? (var_1_39 == ((double) (min (var_1_15 , ((abs (var_1_32)) - var_1_33))))) : (var_1_39 == ((double) (var_1_15 + var_1_32))))) : (var_1_39 == ((double) (var_1_32 + (var_1_15 - (min (1.00000000075E9 , var_1_40))))))) : (var_1_39 == ((double) (max (var_1_32 , 1.9)))))) && ((var_1_1 > ((var_1_8 + var_1_6) << (max (var_1_42 , var_1_43)))) ? (var_1_41 == ((unsigned short int) var_1_43)) : 1)) && (((~ (var_1_43 | var_1_86)) < var_1_86) ? (var_1_19 ? (var_1_44 == ((unsigned char) (var_1_43 + var_1_42))) : (var_1_44 == ((unsigned char) (min ((max ((var_1_45 + var_1_43) , var_1_14)) , (var_1_42 + var_1_8)))))) : 1)) && ((var_1_84 && var_1_20) ? (var_1_46 == ((unsigned char) (var_1_38 && var_1_20))) : (var_1_46 == ((unsigned char) (! var_1_35))))) && ((var_1_33 >= var_1_56) ? (var_1_49 == ((double) (min (var_1_33 , var_1_50)))) : (((- (var_1_70 * var_1_27)) >= var_1_17) ? (var_1_49 == ((double) var_1_50)) : 1))) && (((last_1_var_1_105 >= var_1_40) || last_1_var_1_97) ? ((last_1_var_1_37 || last_1_var_1_97) ? (var_1_51 == ((unsigned long int) (var_1_53 - ((var_1_54 + 1000000000u) - 1u)))) : ((last_1_var_1_89 > (last_1_var_1_24 * last_1_var_1_89)) ? (var_1_51 == ((unsigned long int) (var_1_53 - last_1_var_1_85))) : (var_1_51 == ((unsigned long int) (max (var_1_25 , (abs (var_1_27)))))))) : (var_1_51 == ((unsigned long int) (var_1_53 - var_1_42))))) && (var_1_35 ? ((var_1_89 != var_1_4) ? ((! (var_1_69 < var_1_27)) ? (var_1_55 == ((float) ((var_1_40 - 7.26f) + var_1_31))) : 1) : 1) : 1)) && ((! (last_1_var_1_97 || var_1_38)) ? ((var_1_54 >= (var_1_53 - last_1_var_1_94)) ? (var_1_56 == ((double) (var_1_31 + var_1_32))) : 1) : 1)) && ((var_1_10 >= (var_1_1 * var_1_14)) ? (var_1_57 == ((signed short int) ((min (10 , var_1_45)) + (min (-10 , var_1_86))))) : 1)) && (((var_1_59 - (abs (128u))) >= var_1_8) ? (var_1_58 == ((signed long int) var_1_43)) : 1)) && ((var_1_14 < 4) ? ((((var_1_8 - var_1_7) / var_1_10) == var_1_4) ? ((var_1_6 <= var_1_24) ? (var_1_60 == ((signed long int) (var_1_6 + var_1_61))) : 1) : (var_1_60 == ((signed long int) (var_1_57 + (min (var_1_100 , var_1_14)))))) : (var_1_60 == ((signed long int) (var_1_7 + (min ((max (var_1_6 , 64)) , var_1_43))))))) && (var_1_61 == ((unsigned long int) (((min (var_1_27 , var_1_62)) + (var_1_63 + var_1_64)) - var_1_54)))) && (((last_1_var_1_88 + 499.375f) >= var_1_33) ? (var_1_65 == ((float) (((var_1_67 - var_1_68) + var_1_15) - (99.9f + 0.75f)))) : (var_1_65 == ((float) ((abs (var_1_32)) - var_1_15))))) && ((var_1_43 < (var_1_8 & var_1_6)) ? (var_1_69 == ((unsigned long int) (last_1_var_1_70 + 10u))) : ((last_1_var_1_55 <= 25.7f) ? (var_1_69 == ((unsigned long int) var_1_62)) : 1))) && ((last_1_var_1_69 < (max (last_1_var_1_70 , (var_1_25 + var_1_43)))) ? ((((last_1_var_1_9 / var_1_64) | (var_1_25 & last_1_var_1_18)) >= var_1_59) ? (((~ var_1_43) <= last_1_var_1_86) ? (var_1_70 == ((unsigned long int) (((min (var_1_71 , var_1_72)) - var_1_64) - var_1_6))) : (var_1_70 == ((unsigned long int) (min (var_1_54 , ((last_1_var_1_28 + var_1_14) + var_1_8)))))) : (((var_1_32 * var_1_31) > last_1_var_1_49) ? (var_1_70 == ((unsigned long int) (var_1_53 - (last_1_var_1_89 + var_1_8)))) : 1)) : (last_1_var_1_74 ? (var_1_70 == ((unsigned long int) (var_1_53 - (min (var_1_8 , var_1_42))))) : (var_1_70 == ((unsigned long int) (min (var_1_64 , (var_1_72 - (var_1_73 - var_1_25))))))))) && (((abs (var_1_65)) <= (- var_1_31)) ? (var_1_74 == ((unsigned char) ((var_1_105 < var_1_40) && (var_1_34 && var_1_75)))) : 1)) && ((var_1_56 > ((var_1_49 / var_1_67) * var_1_88)) ? ((var_1_1 > var_1_61) ? (((var_1_78 - var_1_54) > var_1_26) ? (var_1_76 == ((unsigned char) (var_1_7 - (abs (max (var_1_43 , var_1_14)))))) : (var_1_37 ? (var_1_76 == ((unsigned char) (((max (64 , var_1_79)) - var_1_42) + (64 - var_1_43)))) : 1)) : (var_1_76 == ((unsigned char) (abs (var_1_43 + (100 - var_1_42)))))) : (var_1_76 == ((unsigned char) (max (var_1_14 , (min (var_1_79 , var_1_8)))))))) && (var_1_46 ? ((((min (var_1_43 , var_1_14)) - (var_1_62 - var_1_6)) > (max (var_1_86 , var_1_25))) ? ((last_1_var_1_80 < var_1_43) ? (var_1_80 == ((unsigned char) (max (var_1_8 , (var_1_42 + var_1_45))))) : ((var_1_12 <= var_1_49) ? (var_1_99 ? (((- var_1_13) < var_1_61) ? (var_1_80 == ((unsigned char) var_1_79)) : 1) : 1) : 1)) : 1) : (((~ var_1_61) >= (var_1_70 * (last_1_var_1_80 * 100))) ? ((1 <= (last_1_var_1_80 + var_1_26)) ? (var_1_80 == ((unsigned char) (max ((min (var_1_43 , var_1_7)) , var_1_79)))) : 1) : (var_1_80 == ((unsigned char) var_1_79))))) && ((((var_1_76 * var_1_51) + (var_1_63 + var_1_71)) < (var_1_25 * (max (var_1_59 , 1u)))) ? (var_1_84 ? (((- var_1_88) < var_1_88) ? (var_1_81 == ((unsigned char) (abs (var_1_7)))) : 1) : ((var_1_90 && ((2.75 - var_1_40) > var_1_33)) ? (var_1_34 ? (var_1_81 == ((unsigned char) (((var_1_82 - var_1_43) + var_1_83) - (min (1 , var_1_45))))) : 1) : 1)) : 1)) && (last_1_var_1_74 ? (var_1_84 == ((unsigned char) (! (var_1_38 && (var_1_35 || var_1_20))))) : (var_1_84 == ((unsigned char) (! var_1_35))))) && ((var_1_71 < var_1_78) ? ((var_1_88 <= 8.2) ? (var_1_85 == ((unsigned char) (var_1_14 + var_1_79))) : (var_1_85 == ((unsigned char) (abs (var_1_82))))) : 1)) && (last_1_var_1_99 ? (var_1_86 == ((signed long int) (min (last_1_var_1_70 , last_1_var_1_1)))) : (last_1_var_1_84 ? ((! last_1_var_1_90) ? (((var_1_31 <= var_1_15) && var_1_38) ? (var_1_86 == ((signed long int) (var_1_45 - (min ((var_1_87 - last_1_var_1_76) , var_1_64))))) : (var_1_86 == ((signed long int) (var_1_25 + last_1_var_1_57)))) : (((last_1_var_1_41 < 50) || last_1_var_1_99) ? (var_1_86 == ((signed long int) var_1_4)) : (var_1_86 == ((signed long int) ((last_1_var_1_1 - (abs (256))) + ((abs (last_1_var_1_58)) + (var_1_45 - var_1_6))))))) : (var_1_86 == ((signed long int) (min (-4 , last_1_var_1_58))))))) && (((min (var_1_65 , var_1_50)) > (var_1_15 - (min (var_1_16 , var_1_33)))) ? (var_1_88 == ((double) (max ((var_1_33 - var_1_15) , (max (var_1_16 , var_1_50)))))) : 1)) && (var_1_90 ? (var_1_89 == ((unsigned long int) var_1_7)) : 1)) && (var_1_90 == ((unsigned char) var_1_75))) && (var_1_91 == ((signed short int) var_1_14))) && (var_1_46 ? (var_1_92 == ((signed long int) var_1_93)) : (var_1_92 == ((signed long int) var_1_8)))) && (var_1_90 ? (var_1_94 == ((unsigned short int) var_1_13)) : (var_1_94 == ((unsigned short int) var_1_44)))) && (var_1_99 ? (var_1_95 == ((unsigned long int) var_1_62)) : 1)) && (var_1_96 == ((signed char) var_1_42))) && (var_1_97 == ((unsigned char) var_1_20))) && (var_1_97 ? (var_1_98 == ((signed short int) var_1_82)) : 1)) && (last_1_var_1_99 ? (var_1_99 == ((unsigned char) var_1_20)) : (var_1_99 == ((unsigned char) var_1_38)))) && (var_1_19 ? (var_1_100 == ((signed short int) var_1_82)) : 1)) && (var_1_84 ? (var_1_101 == ((signed char) var_1_42)) : (var_1_101 == ((signed char) var_1_14)))) && (var_1_19 ? (var_1_102 == ((signed short int) var_1_6)) : (var_1_102 == ((signed short int) var_1_7)))) && (((min (32 , (abs (4)))) <= var_1_24) ? (var_1_103 == ((signed long int) (abs (var_1_63)))) : (var_1_103 == ((signed long int) (max (var_1_45 , last_1_var_1_103)))))) && (var_1_104 == ((float) var_1_32))) && (var_1_105 == ((double) var_1_33))) && (var_1_106 == ((float) var_1_68))
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
