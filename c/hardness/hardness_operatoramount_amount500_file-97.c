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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch97Amount500.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 4;
unsigned long int var_1_6 = 8;
unsigned long int var_1_7 = 2819353023;
unsigned long int var_1_9 = 2;
unsigned long int var_1_10 = 1224777821;
unsigned long int var_1_11 = 3973068675;
unsigned long int var_1_12 = 1000000000;
unsigned long int var_1_13 = 1000000000;
unsigned long int var_1_14 = 1477884391;
unsigned short int var_1_15 = 4;
unsigned short int var_1_17 = 10;
unsigned short int var_1_18 = 5;
unsigned short int var_1_19 = 0;
unsigned short int var_1_20 = 200;
unsigned long int var_1_21 = 1;
signed char var_1_22 = -10;
signed char var_1_23 = 50;
signed char var_1_24 = 32;
signed char var_1_25 = 50;
signed char var_1_26 = 32;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned long int var_1_30 = 200;
unsigned long int var_1_31 = 2;
unsigned short int var_1_32 = 32;
unsigned short int var_1_34 = 24008;
unsigned char var_1_35 = 2;
unsigned long int var_1_36 = 1;
signed short int var_1_37 = 2;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
signed char var_1_40 = 32;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 100;
unsigned char var_1_43 = 100;
unsigned char var_1_44 = 4;
signed short int var_1_45 = 0;
unsigned short int var_1_46 = 2;
unsigned short int var_1_47 = 39444;
unsigned short int var_1_48 = 10000;
unsigned long int var_1_49 = 1;
unsigned char var_1_50 = 1;
unsigned short int var_1_51 = 10000;
signed short int var_1_52 = 10;
unsigned long int var_1_53 = 16;
signed char var_1_54 = -2;
signed char var_1_55 = 8;
signed char var_1_56 = -8;
double var_1_57 = 8.5;
float var_1_58 = 255.15;
float var_1_59 = 64.4;
float var_1_60 = 1.2;
double var_1_61 = 8.875;
double var_1_62 = 4.5;
double var_1_63 = 200.875;
double var_1_64 = 2.25;
double var_1_65 = 4.5;
double var_1_66 = 4.6;
double var_1_67 = 0.0;
unsigned long int var_1_68 = 25;
unsigned char var_1_69 = 4;
unsigned char var_1_71 = 64;
unsigned char var_1_72 = 128;
signed char var_1_73 = -2;
unsigned char var_1_74 = 8;
unsigned char var_1_75 = 200;
signed char var_1_76 = 2;
signed char var_1_77 = 50;
unsigned char var_1_78 = 5;
unsigned char var_1_79 = 32;
float var_1_80 = 1000000.5;
unsigned long int var_1_81 = 2;
unsigned char var_1_82 = 1;
unsigned char var_1_83 = 1;
unsigned char var_1_84 = 0;
signed char var_1_85 = 5;
double var_1_86 = 50.5;
signed char var_1_87 = 2;
unsigned short int var_1_88 = 4;
unsigned char var_1_90 = 16;
unsigned short int var_1_91 = 1;
signed char var_1_92 = 5;
unsigned char var_1_93 = 1;
unsigned char var_1_94 = 0;
signed short int var_1_95 = -10000;
signed short int var_1_96 = 32;
float var_1_97 = 127.5;
signed long int var_1_98 = -10;
unsigned char var_1_99 = 1;
unsigned long int var_1_100 = 1000;
signed char var_1_101 = -8;
signed char var_1_102 = -25;
unsigned char var_1_103 = 200;
unsigned long int var_1_104 = 100;
float var_1_105 = 99999999999.6;
unsigned long int var_1_106 = 5;
float var_1_107 = 0.0;
unsigned long int var_1_108 = 64;
signed short int var_1_109 = 256;
unsigned long int var_1_110 = 2;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_15 = 4;
unsigned short int last_1_var_1_32 = 32;
unsigned long int last_1_var_1_49 = 1;
unsigned long int last_1_var_1_53 = 16;
unsigned char last_1_var_1_93 = 1;
signed short int last_1_var_1_96 = 32;
signed long int last_1_var_1_98 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req34Batch97Amount500
	signed long int stepLocal_26 = var_1_34 & var_1_17;
	if (last_1_var_1_93) {
		if (stepLocal_26 < (last_1_var_1_32 - var_1_20)) {
			var_1_84 = var_1_39;
		} else {
			var_1_84 = ((var_1_59 <= var_1_67) || var_1_28);
		}
	}


	// From: Req23Batch97Amount500
	if ((last_1_var_1_53 * (~ last_1_var_1_15)) >= (last_1_var_1_49 / var_1_36)) {
		var_1_66 = (max (var_1_65 , var_1_61));
	} else {
		var_1_66 = (var_1_62 - (var_1_67 - var_1_63));
	}


	// From: Req5Batch97Amount500
	var_1_27 = (var_1_28 && var_1_29);


	// From: Req10Batch97Amount500
	var_1_37 = var_1_20;


	// From: Req17Batch97Amount500
	var_1_50 = ((var_1_29 && var_1_28) && (! var_1_39));


	// From: Req26Batch97Amount500
	var_1_73 = ((min ((abs (var_1_56)) , var_1_24)) - (abs (max (var_1_36 , var_1_44))));


	// From: Req28Batch97Amount500
	if (var_1_27) {
		var_1_76 = (max (var_1_23 , -16));
	} else {
		var_1_76 = (var_1_36 - ((var_1_24 + var_1_25) - (var_1_77 - var_1_44)));
	}


	// From: Req31Batch97Amount500
	var_1_81 = (abs (abs (var_1_25 + var_1_14)));


	// From: Req32Batch97Amount500
	if (! (-5 < var_1_18)) {
		var_1_82 = var_1_39;
	} else {
		var_1_82 = var_1_28;
	}


	// From: Req36Batch97Amount500
	if (var_1_28) {
		var_1_86 = (abs ((var_1_63 - var_1_62) + var_1_64));
	} else {
		var_1_86 = (var_1_62 - (max ((var_1_63 + 32.8) , var_1_67)));
	}


	// From: Req39Batch97Amount500
	if ((var_1_66 + var_1_59) > ((var_1_64 / var_1_67) / (max (2.3 , var_1_60)))) {
		var_1_90 = (min (var_1_44 , var_1_26));
	} else {
		var_1_90 = (var_1_75 - (var_1_77 + var_1_36));
	}


	// From: Req45Batch97Amount500
	var_1_97 = ((var_1_62 - var_1_63) + var_1_64);


	// From: Req49Batch97Amount500
	var_1_101 = var_1_102;


	// From: Req50Batch97Amount500
	var_1_103 = var_1_77;


	// From: Req52Batch97Amount500
	var_1_105 = var_1_67;


	// From: Req54Batch97Amount500
	if (var_1_39) {
		var_1_107 = 8.5f;
	} else {
		var_1_107 = var_1_67;
	}


	// From: Req6Batch97Amount500
	if ((- (max (50.75 , var_1_86))) < (var_1_66 / 0.05)) {
		var_1_30 = (var_1_11 - var_1_20);
	} else {
		var_1_30 = var_1_19;
	}


	// From: Req8Batch97Amount500
	if (var_1_107 < var_1_86) {
		var_1_32 = ((max (var_1_19 , var_1_17)) + (var_1_34 - 1));
	}


	// From: Req12Batch97Amount500
	if (var_1_10 >= (var_1_30 + var_1_9)) {
		var_1_40 = var_1_23;
	}


	// From: Req14Batch97Amount500
	var_1_45 = var_1_73;


	// From: Req15Batch97Amount500
	unsigned char stepLocal_8 = var_1_82;
	if (var_1_29 && stepLocal_8) {
		var_1_46 = (max ((min (var_1_17 , var_1_20)) , (var_1_43 + var_1_26)));
	} else {
		if (var_1_82) {
			var_1_46 = ((max (var_1_47 , (var_1_34 + 21566))) - (var_1_25 + (var_1_48 - var_1_43)));
		} else {
			var_1_46 = (var_1_47 - var_1_36);
		}
	}


	// From: Req22Batch97Amount500
	signed long int stepLocal_16 = var_1_42 / var_1_24;
	if ((- var_1_107) < ((var_1_58 - var_1_59) / var_1_60)) {
		var_1_57 = (min (var_1_61 , 3.87));
	} else {
		if (stepLocal_16 < var_1_9) {
			var_1_57 = ((var_1_62 - var_1_63) + (var_1_64 + var_1_65));
		}
	}


	// From: Req35Batch97Amount500
	if (var_1_17 <= var_1_48) {
		if (var_1_86 > ((var_1_66 * var_1_62) / var_1_60)) {
			var_1_85 = ((100 - var_1_25) - ((var_1_36 + var_1_44) + var_1_26));
		} else {
			var_1_85 = ((max (var_1_56 , var_1_77)) + var_1_26);
		}
	} else {
		var_1_85 = ((var_1_77 + var_1_36) - (var_1_24 + var_1_44));
	}


	// From: Req2Batch97Amount500
	if (((- var_1_66) * var_1_57) == var_1_57) {
		if (var_1_50) {
			var_1_15 = (max (128 , (var_1_17 + 32)));
		} else {
			var_1_15 = (var_1_17 + (max (var_1_18 , (var_1_19 + var_1_20))));
		}
	} else {
		var_1_15 = var_1_17;
	}


	// From: Req3Batch97Amount500
	unsigned long int stepLocal_2 = - (var_1_11 * var_1_9);
	if ((var_1_6 | (var_1_30 + var_1_14)) < stepLocal_2) {
		if (var_1_57 >= var_1_86) {
			var_1_21 = (3729661190u - (max (var_1_6 , var_1_9)));
		}
	}


	// From: Req4Batch97Amount500
	if (var_1_86 > var_1_57) {
		var_1_22 = var_1_23;
	} else {
		var_1_22 = (1 - ((var_1_24 + var_1_25) - var_1_26));
	}


	// From: Req7Batch97Amount500
	if (var_1_57 >= var_1_86) {
		var_1_31 = var_1_24;
	} else {
		var_1_31 = (var_1_6 + (var_1_24 + var_1_26));
	}


	// From: Req11Batch97Amount500
	signed char stepLocal_6 = var_1_24;
	if (stepLocal_6 >= var_1_31) {
		var_1_38 = (((min (var_1_26 , -1)) >= var_1_13) && var_1_39);
	}


	// From: Req24Batch97Amount500
	if (var_1_38 || var_1_50) {
		var_1_68 = (min ((25u + (var_1_14 - var_1_34)) , 1u));
	} else {
		var_1_68 = (abs (10u));
	}


	// From: Req33Batch97Amount500
	unsigned long int stepLocal_25 = var_1_21;
	if (stepLocal_25 >= var_1_75) {
		var_1_83 = (((min (var_1_66 , var_1_59)) >= var_1_66) || (var_1_29 || var_1_28));
	} else {
		var_1_83 = (var_1_29 && var_1_28);
	}


	// From: Req47Batch97Amount500
	if (var_1_38) {
		var_1_99 = var_1_28;
	} else {
		var_1_99 = var_1_94;
	}


	// From: Req51Batch97Amount500
	if (var_1_28) {
		var_1_104 = 1000u;
	} else {
		var_1_104 = var_1_15;
	}


	// From: Req42Batch97Amount500
	unsigned char stepLocal_31 = var_1_84;
	if (var_1_50 && stepLocal_31) {
		if (var_1_38) {
			var_1_93 = (var_1_29 && var_1_28);
		} else {
			var_1_93 = (var_1_50 && var_1_39);
		}
	} else {
		var_1_93 = (((var_1_67 - var_1_59) == var_1_66) && (var_1_29 && (var_1_39 || var_1_94)));
	}


	// From: Req1Batch97Amount500
	unsigned long int stepLocal_1 = abs (var_1_31);
	unsigned char stepLocal_0 = var_1_82;
	if (var_1_50 && stepLocal_0) {
		if (var_1_66 == var_1_57) {
			var_1_1 = (var_1_6 + 10u);
		}
	} else {
		if ((var_1_7 - var_1_6) <= stepLocal_1) {
			if (var_1_57 != var_1_66) {
				if (var_1_57 < var_1_66) {
					var_1_1 = (((1000000000u - 10u) + var_1_9) + var_1_6);
				} else {
					var_1_1 = ((min ((var_1_10 + 1393715471u) , var_1_11)) - (256u + var_1_9));
				}
			} else {
				var_1_1 = (min ((var_1_6 + var_1_9) , var_1_11));
			}
		} else {
			var_1_1 = (((var_1_12 + var_1_13) + var_1_14) - var_1_9);
		}
	}


	// From: Req9Batch97Amount500
	unsigned char stepLocal_5 = var_1_38;
	unsigned char stepLocal_4 = var_1_38;
	signed long int stepLocal_3 = 10;
	if (((min (0 , var_1_18)) >> var_1_36) >= stepLocal_3) {
		if (stepLocal_5 || (var_1_24 < var_1_19)) {
			var_1_35 = (var_1_25 + var_1_26);
		} else {
			if (stepLocal_4 && var_1_28) {
				var_1_35 = ((var_1_25 + var_1_36) + var_1_26);
			} else {
				var_1_35 = (var_1_36 + var_1_24);
			}
		}
	}


	// From: Req13Batch97Amount500
	signed long int stepLocal_7 = 25;
	if (var_1_85 <= stepLocal_7) {
		var_1_41 = ((var_1_42 + var_1_43) - 32);
	} else {
		if (var_1_99) {
			var_1_41 = (5 + (var_1_43 - (var_1_36 + var_1_44)));
		}
	}


	// From: Req19Batch97Amount500
	signed long int stepLocal_10 = var_1_35 * var_1_20;
	if (var_1_6 > stepLocal_10) {
		var_1_52 = (abs (var_1_19));
	}


	// From: Req25Batch97Amount500
	unsigned char stepLocal_17 = (var_1_11 - var_1_12) < 256u;
	if (var_1_29) {
		if (stepLocal_17 || ((var_1_26 << var_1_10) >= var_1_104)) {
			var_1_69 = (var_1_24 + var_1_43);
		} else {
			var_1_69 = (abs ((var_1_43 + var_1_71) - var_1_25));
		}
	} else {
		if (var_1_39) {
			var_1_69 = (var_1_72 - var_1_71);
		} else {
			if (var_1_57 == var_1_63) {
				var_1_69 = (var_1_71 + (var_1_25 + (var_1_44 + 10)));
			}
		}
	}


	// From: Req27Batch97Amount500
	unsigned char stepLocal_20 = var_1_26 > var_1_12;
	unsigned long int stepLocal_19 = var_1_36;
	unsigned char stepLocal_18 = ! var_1_39;
	if (var_1_28) {
		if (var_1_66 >= var_1_63) {
			var_1_74 = (min (var_1_25 , var_1_24));
		}
	} else {
		if (stepLocal_18 || var_1_93) {
			if (var_1_13 != stepLocal_19) {
				if ((var_1_30 <= var_1_31) && stepLocal_20) {
					var_1_74 = ((64 - (var_1_44 + var_1_36)) + (var_1_25 + (abs (var_1_24))));
				} else {
					var_1_74 = (var_1_72 - (var_1_71 - var_1_25));
				}
			} else {
				var_1_74 = ((abs (var_1_75 - 32)) - var_1_43);
			}
		}
	}


	// From: Req30Batch97Amount500
	if (var_1_99) {
		var_1_80 = (min ((var_1_63 - var_1_67) , var_1_61));
	} else {
		if (! var_1_50) {
			var_1_80 = var_1_62;
		} else {
			var_1_80 = ((max ((var_1_62 - var_1_63) , var_1_65)) + var_1_64);
		}
	}


	// From: Req46Batch97Amount500
	signed long int stepLocal_33 = (~ var_1_56) / var_1_25;
	if (var_1_50) {
		if ((max (var_1_21 , var_1_1)) > stepLocal_33) {
			var_1_98 = (max (last_1_var_1_98 , (min (var_1_72 , var_1_24))));
		} else {
			var_1_98 = var_1_31;
		}
	} else {
		if (! var_1_28) {
			var_1_98 = var_1_30;
		} else {
			var_1_98 = var_1_25;
		}
	}


	// From: Req57Batch97Amount500
	if ((var_1_36 >= var_1_44) || var_1_27) {
		if (var_1_93) {
			var_1_110 = var_1_6;
		}
	}


	// From: Req40Batch97Amount500
	unsigned long int stepLocal_29 = var_1_30;
	if (stepLocal_29 > var_1_52) {
		var_1_91 = (var_1_47 - var_1_17);
	} else {
		var_1_91 = (max (var_1_31 , var_1_75));
	}


	// From: Req18Batch97Amount500
	if (var_1_39) {
		if (var_1_110 > (var_1_37 / var_1_24)) {
			var_1_51 = (40801 - (min ((min (var_1_19 , var_1_42)) , (4 + var_1_20))));
		} else {
			var_1_51 = (abs (var_1_42));
		}
	}


	// From: Req41Batch97Amount500
	signed char stepLocal_30 = var_1_25;
	if (var_1_51 >= stepLocal_30) {
		var_1_92 = (var_1_55 + (var_1_77 - 16));
	} else {
		var_1_92 = var_1_56;
	}


	// From: Req43Batch97Amount500
	unsigned long int stepLocal_32 = var_1_110;
	if (stepLocal_32 < var_1_6) {
		var_1_95 = var_1_90;
	} else {
		var_1_95 = (min (2 , var_1_43));
	}


	// From: Req53Batch97Amount500
	if (var_1_83) {
		var_1_106 = var_1_9;
	} else {
		var_1_106 = var_1_91;
	}


	// From: Req55Batch97Amount500
	if (var_1_93) {
		var_1_108 = var_1_51;
	} else {
		var_1_108 = var_1_20;
	}


	// From: Req20Batch97Amount500
	unsigned long int stepLocal_13 = (var_1_11 - var_1_10) + var_1_12;
	unsigned short int stepLocal_12 = var_1_91;
	signed char stepLocal_11 = var_1_23;
	if (stepLocal_12 < var_1_1) {
		if (var_1_30 <= stepLocal_11) {
			var_1_53 = var_1_18;
		} else {
			var_1_53 = (min (32u , var_1_13));
		}
	} else {
		if (stepLocal_13 >= var_1_47) {
			var_1_53 = (abs (var_1_10));
		}
	}


	// From: Req48Batch97Amount500
	if (var_1_84) {
		var_1_100 = var_1_53;
	}


	// From: Req21Batch97Amount500
	unsigned short int stepLocal_15 = var_1_47;
	signed char stepLocal_14 = var_1_24;
	if ((var_1_108 & var_1_20) > stepLocal_14) {
		if (10u < stepLocal_15) {
			if (var_1_28) {
				var_1_54 = (min ((abs (var_1_36)) , var_1_44));
			} else {
				var_1_54 = (((var_1_55 + var_1_56) + 25) + var_1_24);
			}
		}
	} else {
		var_1_54 = (var_1_26 + (10 + var_1_36));
	}


	// From: Req29Batch97Amount500
	unsigned short int stepLocal_24 = var_1_91;
	unsigned short int stepLocal_23 = var_1_91;
	signed long int stepLocal_22 = var_1_32 + var_1_42;
	unsigned long int stepLocal_21 = ~ (var_1_42 / var_1_36);
	if (var_1_93) {
		if (stepLocal_23 < var_1_23) {
			var_1_78 = var_1_71;
		} else {
			if (stepLocal_24 < var_1_53) {
				var_1_78 = (var_1_43 + 100);
			} else {
				if (var_1_56 < stepLocal_22) {
					if (var_1_110 >= stepLocal_21) {
						var_1_78 = (min (var_1_25 , var_1_79));
					} else {
						var_1_78 = (var_1_72 - var_1_26);
					}
				}
			}
		}
	}


	// From: Req37Batch97Amount500
	unsigned long int stepLocal_27 = var_1_12;
	if (var_1_39) {
		if (stepLocal_27 > var_1_53) {
			var_1_87 = ((abs (8)) + (var_1_26 - var_1_24));
		} else {
			var_1_87 = (var_1_24 + var_1_77);
		}
	} else {
		var_1_87 = ((var_1_44 + var_1_25) - (abs (min (var_1_36 , var_1_26))));
	}


	// From: Req38Batch97Amount500
	unsigned short int stepLocal_28 = var_1_18;
	if ((var_1_54 & var_1_25) > stepLocal_28) {
		var_1_88 = (max (var_1_24 , (abs (var_1_72 + var_1_43))));
	}


	// From: Req44Batch97Amount500
	if (var_1_106 >= (var_1_21 * var_1_72)) {
		if (var_1_81 > (min (var_1_6 , (max (var_1_95 , var_1_44))))) {
			var_1_96 = var_1_25;
		} else {
			var_1_96 = (var_1_77 - var_1_44);
		}
	} else {
		if (var_1_23 == var_1_18) {
			var_1_96 = ((var_1_104 + last_1_var_1_96) + 50);
		}
	}


	// From: Req16Batch97Amount500
	unsigned char stepLocal_9 = var_1_44 > var_1_32;
	if (((var_1_11 - var_1_1) != var_1_100) || stepLocal_9) {
		var_1_49 = (max (var_1_18 , var_1_1));
	}


	// From: Req56Batch97Amount500
	unsigned long int stepLocal_34 = 2868016742u - (min (var_1_42 , var_1_91));
	if (var_1_38) {
		if (((var_1_7 / var_1_25) + var_1_49) >= stepLocal_34) {
			var_1_109 = (var_1_79 + (var_1_43 - 50));
		}
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 2147483647);
	assume_abort_if_not(var_1_7 <= 4294967295);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 1073741823);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 536870911);
	assume_abort_if_not(var_1_12 <= 1073741824);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 536870912);
	assume_abort_if_not(var_1_13 <= 1073741823);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 1073741824);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 32767);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 16384);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 16383);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -127);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 31);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 32);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 16383);
	assume_abort_if_not(var_1_34 <= 32767);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 30);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 63);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 64);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 31);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 32767);
	assume_abort_if_not(var_1_47 <= 65534);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 8191);
	assume_abort_if_not(var_1_48 <= 16383);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -15);
	assume_abort_if_not(var_1_55 <= 16);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= -15);
	assume_abort_if_not(var_1_56 <= 16);
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= -922337.2036854776000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
	assume_abort_if_not(var_1_60 != 0.0F);
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= -922337.2036854766000e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854766000e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427383000e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427383000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= -230584.3009213691400e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691400e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= -230584.3009213691400e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691400e+12F && var_1_65 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 4611686.018427383000e+12F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854766000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 64);
	assume_abort_if_not(var_1_71 <= 127);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 127);
	assume_abort_if_not(var_1_72 <= 254);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 190);
	assume_abort_if_not(var_1_75 <= 254);
	var_1_77 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_77 >= 31);
	assume_abort_if_not(var_1_77 <= 63);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 254);
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 0);
	var_1_102 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_102 >= -127);
	assume_abort_if_not(var_1_102 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_15 = var_1_15;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_98 = var_1_98;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_50 && var_1_82) ? ((var_1_66 == var_1_57) ? (var_1_1 == ((unsigned long int) (var_1_6 + 10u))) : 1) : (((var_1_7 - var_1_6) <= (abs (var_1_31))) ? ((var_1_57 != var_1_66) ? ((var_1_57 < var_1_66) ? (var_1_1 == ((unsigned long int) (((1000000000u - 10u) + var_1_9) + var_1_6))) : (var_1_1 == ((unsigned long int) ((min ((var_1_10 + 1393715471u) , var_1_11)) - (256u + var_1_9))))) : (var_1_1 == ((unsigned long int) (min ((var_1_6 + var_1_9) , var_1_11))))) : (var_1_1 == ((unsigned long int) (((var_1_12 + var_1_13) + var_1_14) - var_1_9))))) && ((((- var_1_66) * var_1_57) == var_1_57) ? (var_1_50 ? (var_1_15 == ((unsigned short int) (max (128 , (var_1_17 + 32))))) : (var_1_15 == ((unsigned short int) (var_1_17 + (max (var_1_18 , (var_1_19 + var_1_20))))))) : (var_1_15 == ((unsigned short int) var_1_17)))) && (((var_1_6 | (var_1_30 + var_1_14)) < (- (var_1_11 * var_1_9))) ? ((var_1_57 >= var_1_86) ? (var_1_21 == ((unsigned long int) (3729661190u - (max (var_1_6 , var_1_9))))) : 1) : 1)) && ((var_1_86 > var_1_57) ? (var_1_22 == ((signed char) var_1_23)) : (var_1_22 == ((signed char) (1 - ((var_1_24 + var_1_25) - var_1_26)))))) && (var_1_27 == ((unsigned char) (var_1_28 && var_1_29)))) && (((- (max (50.75 , var_1_86))) < (var_1_66 / 0.05)) ? (var_1_30 == ((unsigned long int) (var_1_11 - var_1_20))) : (var_1_30 == ((unsigned long int) var_1_19)))) && ((var_1_57 >= var_1_86) ? (var_1_31 == ((unsigned long int) var_1_24)) : (var_1_31 == ((unsigned long int) (var_1_6 + (var_1_24 + var_1_26)))))) && ((var_1_107 < var_1_86) ? (var_1_32 == ((unsigned short int) ((max (var_1_19 , var_1_17)) + (var_1_34 - 1)))) : 1)) && ((((min (0 , var_1_18)) >> var_1_36) >= 10) ? ((var_1_38 || (var_1_24 < var_1_19)) ? (var_1_35 == ((unsigned char) (var_1_25 + var_1_26))) : ((var_1_38 && var_1_28) ? (var_1_35 == ((unsigned char) ((var_1_25 + var_1_36) + var_1_26))) : (var_1_35 == ((unsigned char) (var_1_36 + var_1_24))))) : 1)) && (var_1_37 == ((signed short int) var_1_20))) && ((var_1_24 >= var_1_31) ? (var_1_38 == ((unsigned char) (((min (var_1_26 , -1)) >= var_1_13) && var_1_39))) : 1)) && ((var_1_10 >= (var_1_30 + var_1_9)) ? (var_1_40 == ((signed char) var_1_23)) : 1)) && ((var_1_85 <= 25) ? (var_1_41 == ((unsigned char) ((var_1_42 + var_1_43) - 32))) : (var_1_99 ? (var_1_41 == ((unsigned char) (5 + (var_1_43 - (var_1_36 + var_1_44))))) : 1))) && (var_1_45 == ((signed short int) var_1_73))) && ((var_1_29 && var_1_82) ? (var_1_46 == ((unsigned short int) (max ((min (var_1_17 , var_1_20)) , (var_1_43 + var_1_26))))) : (var_1_82 ? (var_1_46 == ((unsigned short int) ((max (var_1_47 , (var_1_34 + 21566))) - (var_1_25 + (var_1_48 - var_1_43))))) : (var_1_46 == ((unsigned short int) (var_1_47 - var_1_36)))))) && ((((var_1_11 - var_1_1) != var_1_100) || (var_1_44 > var_1_32)) ? (var_1_49 == ((unsigned long int) (max (var_1_18 , var_1_1)))) : 1)) && (var_1_50 == ((unsigned char) ((var_1_29 && var_1_28) && (! var_1_39))))) && (var_1_39 ? ((var_1_110 > (var_1_37 / var_1_24)) ? (var_1_51 == ((unsigned short int) (40801 - (min ((min (var_1_19 , var_1_42)) , (4 + var_1_20)))))) : (var_1_51 == ((unsigned short int) (abs (var_1_42))))) : 1)) && ((var_1_6 > (var_1_35 * var_1_20)) ? (var_1_52 == ((signed short int) (abs (var_1_19)))) : 1)) && ((var_1_91 < var_1_1) ? ((var_1_30 <= var_1_23) ? (var_1_53 == ((unsigned long int) var_1_18)) : (var_1_53 == ((unsigned long int) (min (32u , var_1_13))))) : ((((var_1_11 - var_1_10) + var_1_12) >= var_1_47) ? (var_1_53 == ((unsigned long int) (abs (var_1_10)))) : 1))) && (((var_1_108 & var_1_20) > var_1_24) ? ((10u < var_1_47) ? (var_1_28 ? (var_1_54 == ((signed char) (min ((abs (var_1_36)) , var_1_44)))) : (var_1_54 == ((signed char) (((var_1_55 + var_1_56) + 25) + var_1_24)))) : 1) : (var_1_54 == ((signed char) (var_1_26 + (10 + var_1_36)))))) && (((- var_1_107) < ((var_1_58 - var_1_59) / var_1_60)) ? (var_1_57 == ((double) (min (var_1_61 , 3.87)))) : (((var_1_42 / var_1_24) < var_1_9) ? (var_1_57 == ((double) ((var_1_62 - var_1_63) + (var_1_64 + var_1_65)))) : 1))) && (((last_1_var_1_53 * (~ last_1_var_1_15)) >= (last_1_var_1_49 / var_1_36)) ? (var_1_66 == ((double) (max (var_1_65 , var_1_61)))) : (var_1_66 == ((double) (var_1_62 - (var_1_67 - var_1_63)))))) && ((var_1_38 || var_1_50) ? (var_1_68 == ((unsigned long int) (min ((25u + (var_1_14 - var_1_34)) , 1u)))) : (var_1_68 == ((unsigned long int) (abs (10u)))))) && (var_1_29 ? ((((var_1_11 - var_1_12) < 256u) || ((var_1_26 << var_1_10) >= var_1_104)) ? (var_1_69 == ((unsigned char) (var_1_24 + var_1_43))) : (var_1_69 == ((unsigned char) (abs ((var_1_43 + var_1_71) - var_1_25))))) : (var_1_39 ? (var_1_69 == ((unsigned char) (var_1_72 - var_1_71))) : ((var_1_57 == var_1_63) ? (var_1_69 == ((unsigned char) (var_1_71 + (var_1_25 + (var_1_44 + 10))))) : 1)))) && (var_1_73 == ((signed char) ((min ((abs (var_1_56)) , var_1_24)) - (abs (max (var_1_36 , var_1_44))))))) && (var_1_28 ? ((var_1_66 >= var_1_63) ? (var_1_74 == ((unsigned char) (min (var_1_25 , var_1_24)))) : 1) : (((! var_1_39) || var_1_93) ? ((var_1_13 != var_1_36) ? (((var_1_30 <= var_1_31) && (var_1_26 > var_1_12)) ? (var_1_74 == ((unsigned char) ((64 - (var_1_44 + var_1_36)) + (var_1_25 + (abs (var_1_24)))))) : (var_1_74 == ((unsigned char) (var_1_72 - (var_1_71 - var_1_25))))) : (var_1_74 == ((unsigned char) ((abs (var_1_75 - 32)) - var_1_43)))) : 1))) && (var_1_27 ? (var_1_76 == ((signed char) (max (var_1_23 , -16)))) : (var_1_76 == ((signed char) (var_1_36 - ((var_1_24 + var_1_25) - (var_1_77 - var_1_44))))))) && (var_1_93 ? ((var_1_91 < var_1_23) ? (var_1_78 == ((unsigned char) var_1_71)) : ((var_1_91 < var_1_53) ? (var_1_78 == ((unsigned char) (var_1_43 + 100))) : ((var_1_56 < (var_1_32 + var_1_42)) ? ((var_1_110 >= (~ (var_1_42 / var_1_36))) ? (var_1_78 == ((unsigned char) (min (var_1_25 , var_1_79)))) : (var_1_78 == ((unsigned char) (var_1_72 - var_1_26)))) : 1))) : 1)) && (var_1_99 ? (var_1_80 == ((float) (min ((var_1_63 - var_1_67) , var_1_61)))) : ((! var_1_50) ? (var_1_80 == ((float) var_1_62)) : (var_1_80 == ((float) ((max ((var_1_62 - var_1_63) , var_1_65)) + var_1_64)))))) && (var_1_81 == ((unsigned long int) (abs (abs (var_1_25 + var_1_14)))))) && ((! (-5 < var_1_18)) ? (var_1_82 == ((unsigned char) var_1_39)) : (var_1_82 == ((unsigned char) var_1_28)))) && ((var_1_21 >= var_1_75) ? (var_1_83 == ((unsigned char) (((min (var_1_66 , var_1_59)) >= var_1_66) || (var_1_29 || var_1_28)))) : (var_1_83 == ((unsigned char) (var_1_29 && var_1_28))))) && (last_1_var_1_93 ? (((var_1_34 & var_1_17) < (last_1_var_1_32 - var_1_20)) ? (var_1_84 == ((unsigned char) var_1_39)) : (var_1_84 == ((unsigned char) ((var_1_59 <= var_1_67) || var_1_28)))) : 1)) && ((var_1_17 <= var_1_48) ? ((var_1_86 > ((var_1_66 * var_1_62) / var_1_60)) ? (var_1_85 == ((signed char) ((100 - var_1_25) - ((var_1_36 + var_1_44) + var_1_26)))) : (var_1_85 == ((signed char) ((max (var_1_56 , var_1_77)) + var_1_26)))) : (var_1_85 == ((signed char) ((var_1_77 + var_1_36) - (var_1_24 + var_1_44)))))) && (var_1_28 ? (var_1_86 == ((double) (abs ((var_1_63 - var_1_62) + var_1_64)))) : (var_1_86 == ((double) (var_1_62 - (max ((var_1_63 + 32.8) , var_1_67))))))) && (var_1_39 ? ((var_1_12 > var_1_53) ? (var_1_87 == ((signed char) ((abs (8)) + (var_1_26 - var_1_24)))) : (var_1_87 == ((signed char) (var_1_24 + var_1_77)))) : (var_1_87 == ((signed char) ((var_1_44 + var_1_25) - (abs (min (var_1_36 , var_1_26)))))))) && (((var_1_54 & var_1_25) > var_1_18) ? (var_1_88 == ((unsigned short int) (max (var_1_24 , (abs (var_1_72 + var_1_43)))))) : 1)) && (((var_1_66 + var_1_59) > ((var_1_64 / var_1_67) / (max (2.3 , var_1_60)))) ? (var_1_90 == ((unsigned char) (min (var_1_44 , var_1_26)))) : (var_1_90 == ((unsigned char) (var_1_75 - (var_1_77 + var_1_36)))))) && ((var_1_30 > var_1_52) ? (var_1_91 == ((unsigned short int) (var_1_47 - var_1_17))) : (var_1_91 == ((unsigned short int) (max (var_1_31 , var_1_75)))))) && ((var_1_51 >= var_1_25) ? (var_1_92 == ((signed char) (var_1_55 + (var_1_77 - 16)))) : (var_1_92 == ((signed char) var_1_56)))) && ((var_1_50 && var_1_84) ? (var_1_38 ? (var_1_93 == ((unsigned char) (var_1_29 && var_1_28))) : (var_1_93 == ((unsigned char) (var_1_50 && var_1_39)))) : (var_1_93 == ((unsigned char) (((var_1_67 - var_1_59) == var_1_66) && (var_1_29 && (var_1_39 || var_1_94))))))) && ((var_1_110 < var_1_6) ? (var_1_95 == ((signed short int) var_1_90)) : (var_1_95 == ((signed short int) (min (2 , var_1_43)))))) && ((var_1_106 >= (var_1_21 * var_1_72)) ? ((var_1_81 > (min (var_1_6 , (max (var_1_95 , var_1_44))))) ? (var_1_96 == ((signed short int) var_1_25)) : (var_1_96 == ((signed short int) (var_1_77 - var_1_44)))) : ((var_1_23 == var_1_18) ? (var_1_96 == ((signed short int) ((var_1_104 + last_1_var_1_96) + 50))) : 1))) && (var_1_97 == ((float) ((var_1_62 - var_1_63) + var_1_64)))) && (var_1_50 ? (((max (var_1_21 , var_1_1)) > ((~ var_1_56) / var_1_25)) ? (var_1_98 == ((signed long int) (max (last_1_var_1_98 , (min (var_1_72 , var_1_24)))))) : (var_1_98 == ((signed long int) var_1_31))) : ((! var_1_28) ? (var_1_98 == ((signed long int) var_1_30)) : (var_1_98 == ((signed long int) var_1_25))))) && (var_1_38 ? (var_1_99 == ((unsigned char) var_1_28)) : (var_1_99 == ((unsigned char) var_1_94)))) && (var_1_84 ? (var_1_100 == ((unsigned long int) var_1_53)) : 1)) && (var_1_101 == ((signed char) var_1_102))) && (var_1_103 == ((unsigned char) var_1_77))) && (var_1_28 ? (var_1_104 == ((unsigned long int) 1000u)) : (var_1_104 == ((unsigned long int) var_1_15)))) && (var_1_105 == ((float) var_1_67))) && (var_1_83 ? (var_1_106 == ((unsigned long int) var_1_9)) : (var_1_106 == ((unsigned long int) var_1_91)))) && (var_1_39 ? (var_1_107 == ((float) 8.5f)) : (var_1_107 == ((float) var_1_67)))) && (var_1_93 ? (var_1_108 == ((unsigned long int) var_1_51)) : (var_1_108 == ((unsigned long int) var_1_20)))) && (var_1_38 ? ((((var_1_7 / var_1_25) + var_1_49) >= (2868016742u - (min (var_1_42 , var_1_91)))) ? (var_1_109 == ((signed short int) (var_1_79 + (var_1_43 - 50)))) : 1) : 1)) && (((var_1_36 >= var_1_44) || var_1_27) ? (var_1_93 ? (var_1_110 == ((unsigned long int) var_1_6)) : 1) : 1)
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
