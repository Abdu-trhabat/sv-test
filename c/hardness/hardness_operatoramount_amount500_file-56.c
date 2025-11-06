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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch56Amount500.c", 13, "reach_error"); }
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
float var_1_1 = 256.8;
float var_1_4 = 3.5;
float var_1_5 = 99999.8;
float var_1_6 = 0.2;
float var_1_7 = 31.7;
float var_1_11 = 25.75;
float var_1_12 = 128.875;
unsigned short int var_1_13 = 10;
signed char var_1_15 = 10;
signed long int var_1_17 = 2;
unsigned short int var_1_18 = 32;
unsigned short int var_1_19 = 100;
unsigned short int var_1_20 = 10;
unsigned char var_1_21 = 5;
unsigned char var_1_22 = 100;
unsigned char var_1_23 = 4;
unsigned char var_1_24 = 16;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
signed short int var_1_29 = 256;
signed short int var_1_30 = -50;
signed short int var_1_31 = 26118;
signed short int var_1_32 = 20599;
signed short int var_1_33 = -256;
signed short int var_1_34 = 29678;
unsigned char var_1_35 = 1;
signed char var_1_36 = -50;
signed char var_1_37 = 1;
signed char var_1_38 = 16;
signed char var_1_39 = -5;
signed char var_1_40 = 16;
unsigned char var_1_41 = 25;
unsigned short int var_1_42 = 10;
double var_1_43 = 8.8;
double var_1_44 = 0.0;
double var_1_45 = 4.25;
float var_1_46 = 64.2;
double var_1_47 = 9.375;
double var_1_48 = 100.5;
double var_1_49 = 0.9;
double var_1_50 = 49.25;
unsigned short int var_1_51 = 64;
unsigned short int var_1_52 = 65019;
double var_1_53 = 9.5;
double var_1_54 = 256.25;
double var_1_55 = 32.4;
unsigned short int var_1_56 = 32;
signed char var_1_57 = -5;
float var_1_58 = 63.25;
unsigned char var_1_59 = 1;
signed char var_1_60 = -64;
signed char var_1_61 = 5;
signed char var_1_62 = 100;
unsigned short int var_1_63 = 50;
unsigned short int var_1_64 = 64;
float var_1_65 = 10.2;
double var_1_66 = 5.25;
signed long int var_1_67 = 8;
unsigned char var_1_68 = 0;
unsigned char var_1_69 = 128;
unsigned char var_1_70 = 64;
unsigned char var_1_71 = 32;
unsigned char var_1_72 = 10;
float var_1_73 = 128.2;
unsigned short int var_1_74 = 4;
float var_1_75 = 16.375;
float var_1_76 = 9999999.5;
unsigned char var_1_77 = 64;
unsigned long int var_1_78 = 1;
signed long int var_1_79 = 5;
unsigned char var_1_81 = 100;
unsigned short int var_1_82 = 64;
unsigned short int var_1_83 = 256;
unsigned short int var_1_84 = 40102;
signed char var_1_85 = 100;
unsigned short int var_1_86 = 4;
unsigned char var_1_88 = 2;
double var_1_89 = 24.8;
unsigned short int var_1_90 = 64;
unsigned long int var_1_91 = 1000;
float var_1_92 = 5.75;
float var_1_93 = 16.05;
unsigned char var_1_94 = 1;
unsigned char var_1_95 = 0;
unsigned short int var_1_96 = 32;
signed char var_1_97 = -2;
signed short int var_1_98 = -10;
signed short int var_1_99 = -8;
double var_1_100 = 25.125;
float var_1_101 = 0.25;
signed char var_1_102 = 32;
unsigned short int var_1_103 = 0;
signed char var_1_104 = -2;
unsigned char var_1_106 = 1;
unsigned char var_1_107 = 64;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_25 = 1;
signed short int last_1_var_1_30 = -50;
signed short int last_1_var_1_33 = -256;
unsigned char last_1_var_1_41 = 25;
double last_1_var_1_43 = 8.8;
unsigned char last_1_var_1_59 = 1;
unsigned short int last_1_var_1_86 = 4;
unsigned char last_1_var_1_94 = 1;
unsigned char last_1_var_1_106 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch56Amount500
	signed short int stepLocal_5 = var_1_31;
	if (stepLocal_5 >= var_1_18) {
		var_1_35 = (last_1_var_1_106 && var_1_27);
	} else {
		var_1_35 = ((last_1_var_1_106 && var_1_26) && var_1_27);
	}


	// From: Req50Batch56Amount500
	if (var_1_35) {
		var_1_106 = var_1_26;
	} else {
		var_1_106 = var_1_95;
	}


	// From: Req6Batch56Amount500
	if (var_1_4 < -0.5f) {
		if (last_1_var_1_94) {
			var_1_25 = (var_1_26 && (! var_1_27));
		} else {
			if (var_1_4 >= (min (last_1_var_1_43 , var_1_6))) {
				var_1_25 = (last_1_var_1_59 || ((last_1_var_1_59 || var_1_26) && (var_1_27 || var_1_28)));
			} else {
				var_1_25 = var_1_27;
			}
		}
	}


	// From: Req39Batch56Amount500
	if (var_1_25) {
		var_1_92 = var_1_93;
	} else {
		var_1_92 = var_1_75;
	}


	// From: Req25Batch56Amount500
	unsigned char stepLocal_12 = last_1_var_1_25;
	if (! var_1_28) {
		if (! var_1_26) {
			if (stepLocal_12 || var_1_26) {
				var_1_63 = (min (var_1_23 , last_1_var_1_41));
			} else {
				var_1_63 = (var_1_31 + (min ((abs (var_1_37)) , var_1_64)));
			}
		} else {
			var_1_63 = (var_1_20 + var_1_31);
		}
	}


	// From: Req2Batch56Amount500
	if (var_1_25) {
		var_1_11 = ((abs (var_1_5)) - var_1_12);
	}


	// From: Req14Batch56Amount500
	var_1_43 = (((var_1_44 - 63.4) - var_1_45) - var_1_12);


	// From: Req16Batch56Amount500
	var_1_47 = (var_1_45 - (max (var_1_44 , var_1_48)));


	// From: Req19Batch56Amount500
	if ((var_1_52 * var_1_38) == (100 / var_1_31)) {
		var_1_53 = ((var_1_45 - var_1_50) + ((abs (var_1_54)) - (7.4 + var_1_55)));
	} else {
		var_1_53 = (min (var_1_6 , ((var_1_44 - var_1_45) - var_1_48)));
	}


	// From: Req22Batch56Amount500
	var_1_58 = (max ((var_1_54 + var_1_45) , var_1_55));


	// From: Req30Batch56Amount500
	unsigned char stepLocal_20 = var_1_28;
	unsigned char stepLocal_19 = var_1_23;
	if ((var_1_70 >> var_1_74) == stepLocal_19) {
		var_1_73 = var_1_45;
	} else {
		if (stepLocal_20 && (var_1_92 != var_1_50)) {
			var_1_73 = ((var_1_55 + (var_1_75 + var_1_76)) - var_1_50);
		}
	}


	// From: Req34Batch56Amount500
	unsigned char stepLocal_23 = var_1_81;
	if (var_1_32 > stepLocal_23) {
		var_1_85 = ((max (-5 , var_1_23)) + (var_1_39 + (min (var_1_74 , var_1_40))));
	}


	// From: Req37Batch56Amount500
	if (var_1_35) {
		var_1_90 = (1 + var_1_62);
	} else {
		var_1_90 = var_1_74;
	}


	// From: Req40Batch56Amount500
	if (last_1_var_1_94) {
		var_1_94 = var_1_95;
	}


	// From: Req41Batch56Amount500
	if (var_1_106) {
		var_1_96 = var_1_88;
	}


	// From: Req42Batch56Amount500
	if (var_1_94) {
		var_1_97 = var_1_38;
	}


	// From: Req45Batch56Amount500
	if (var_1_28) {
		var_1_100 = var_1_44;
	} else {
		var_1_100 = var_1_55;
	}


	// From: Req46Batch56Amount500
	if (var_1_94) {
		var_1_101 = var_1_76;
	}


	// From: Req47Batch56Amount500
	var_1_102 = var_1_88;


	// From: Req48Batch56Amount500
	var_1_103 = var_1_19;


	// From: Req49Batch56Amount500
	if (var_1_106) {
		var_1_104 = var_1_40;
	} else {
		var_1_104 = var_1_38;
	}


	// From: Req23Batch56Amount500
	if (var_1_92 < (abs (var_1_5))) {
		var_1_59 = (! 1);
	} else {
		var_1_59 = (! var_1_27);
	}


	// From: Req20Batch56Amount500
	if (var_1_63 > var_1_38) {
		var_1_56 = (max (var_1_15 , var_1_23));
	} else {
		if (-1000000000 > var_1_22) {
			var_1_56 = (abs (var_1_15));
		} else {
			var_1_56 = (var_1_96 + var_1_15);
		}
	}


	// From: Req5Batch56Amount500
	unsigned short int stepLocal_2 = var_1_19;
	unsigned short int stepLocal_1 = var_1_96;
	if (var_1_22 > stepLocal_1) {
		var_1_24 = (max (var_1_22 , var_1_15));
	} else {
		if (var_1_23 >= stepLocal_2) {
			var_1_24 = (128 - var_1_22);
		}
	}


	// From: Req8Batch56Amount500
	unsigned char stepLocal_4 = var_1_59;
	if (stepLocal_4 && (0 < var_1_24)) {
		if (var_1_25) {
			var_1_30 = (((min (var_1_31 , var_1_32)) - var_1_23) - last_1_var_1_30);
		}
	} else {
		var_1_30 = var_1_24;
	}


	// From: Req13Batch56Amount500
	if (! var_1_59) {
		var_1_42 = ((min (var_1_15 , var_1_23)) + (max (var_1_34 , var_1_24)));
	} else {
		var_1_42 = var_1_24;
	}


	// From: Req24Batch56Amount500
	if (var_1_26) {
		if (var_1_54 >= (var_1_100 / var_1_44)) {
			var_1_60 = (8 - var_1_38);
		} else {
			var_1_60 = (((32 - var_1_61) + var_1_23) - (var_1_62 - var_1_38));
		}
	}


	// From: Req27Batch56Amount500
	signed long int stepLocal_16 = min (var_1_42 , var_1_102);
	if (var_1_25) {
		var_1_66 = (max ((min ((var_1_6 + var_1_45) , var_1_12)) , (var_1_48 - (min (var_1_50 , var_1_44)))));
	} else {
		if (((min (var_1_96 , var_1_23)) / var_1_31) <= stepLocal_16) {
			var_1_66 = (var_1_55 - var_1_44);
		} else {
			var_1_66 = var_1_12;
		}
	}


	// From: Req44Batch56Amount500
	var_1_99 = var_1_102;


	// From: Req1Batch56Amount500
	if (var_1_47 != var_1_66) {
		if (var_1_66 < (var_1_4 - 2.5f)) {
			var_1_1 = (min (9.5f , ((min (var_1_5 , var_1_6)) + var_1_7)));
		} else {
			var_1_1 = (var_1_7 + (max ((abs (var_1_5)) , 1.487f)));
		}
	} else {
		if ((var_1_94 && var_1_35) || var_1_59) {
			var_1_1 = (min (var_1_7 , (var_1_6 + var_1_5)));
		}
	}


	// From: Req3Batch56Amount500
	signed long int stepLocal_0 = (~ var_1_103) * (var_1_42 + var_1_15);
	if (var_1_94) {
		if (stepLocal_0 >= ((max (64 , var_1_17)) / (abs (-50)))) {
			var_1_13 = (max ((var_1_15 + var_1_18) , var_1_19));
		} else {
			var_1_13 = ((min (var_1_15 , var_1_18)) + (max (var_1_20 , 2)));
		}
	} else {
		var_1_13 = var_1_19;
	}


	// From: Req4Batch56Amount500
	if ((var_1_20 + var_1_13) < var_1_15) {
		var_1_21 = (var_1_15 + (var_1_22 - var_1_23));
	}


	// From: Req33Batch56Amount500
	signed short int stepLocal_22 = var_1_31;
	unsigned short int stepLocal_21 = var_1_52;
	if (stepLocal_21 <= (55142 - var_1_74)) {
		if (var_1_48 <= ((var_1_12 - 1.0000000000000062E14) * var_1_55)) {
			var_1_83 = var_1_13;
		} else {
			if (var_1_99 >= stepLocal_22) {
				var_1_83 = (min (4 , var_1_31));
			} else {
				var_1_83 = (var_1_84 - var_1_61);
			}
		}
	} else {
		var_1_83 = (abs (var_1_72 + var_1_34));
	}


	// From: Req36Batch56Amount500
	if (var_1_13 > var_1_15) {
		var_1_89 = var_1_76;
	}


	// From: Req21Batch56Amount500
	if (! (var_1_83 > var_1_23)) {
		var_1_57 = (max ((min (8 , var_1_37)) , var_1_23));
	} else {
		var_1_57 = (max (var_1_39 , var_1_38));
	}


	// From: Req28Batch56Amount500
	if (var_1_5 > var_1_89) {
		var_1_67 = -4;
	}


	// From: Req32Batch56Amount500
	if (var_1_89 < var_1_1) {
		var_1_82 = (var_1_13 + var_1_62);
	}


	// From: Req38Batch56Amount500
	signed short int stepLocal_24 = var_1_30;
	if (! var_1_35) {
		var_1_91 = var_1_67;
	} else {
		if (stepLocal_24 == var_1_64) {
			var_1_91 = (((4068473853u - var_1_19) - 32u) - (min ((var_1_78 + var_1_42) , (var_1_88 + var_1_67))));
		} else {
			var_1_91 = var_1_90;
		}
	}


	// From: Req43Batch56Amount500
	if (var_1_59) {
		var_1_98 = var_1_34;
	} else {
		var_1_98 = var_1_82;
	}


	// From: Req18Batch56Amount500
	unsigned char stepLocal_11 = var_1_24;
	unsigned short int stepLocal_10 = var_1_56;
	unsigned char stepLocal_9 = var_1_24;
	if ((var_1_37 - var_1_23) < stepLocal_9) {
		if (((var_1_52 - var_1_20) | var_1_83) >= stepLocal_11) {
			var_1_51 = ((abs (var_1_22)) + (var_1_23 + 16));
		} else {
			if ((max (var_1_47 , (var_1_45 / var_1_44))) <= var_1_43) {
				if (stepLocal_10 < var_1_34) {
					if (var_1_28) {
						var_1_51 = (var_1_37 + var_1_31);
					} else {
						var_1_51 = ((16431 - var_1_67) + (max ((var_1_22 + var_1_63) , var_1_18)));
					}
				}
			}
		}
	} else {
		var_1_51 = ((31125 - var_1_82) + var_1_15);
	}


	// From: Req17Batch56Amount500
	if ((var_1_20 << var_1_51) != var_1_17) {
		if (var_1_47 > var_1_66) {
			var_1_49 = (var_1_44 - (abs (var_1_48)));
		} else {
			if (1000 < var_1_22) {
				if (256 < ((var_1_22 - 2) + var_1_17)) {
					var_1_49 = (min (var_1_7 , (var_1_5 + var_1_45)));
				} else {
					var_1_49 = 31.8;
				}
			} else {
				var_1_49 = (var_1_7 + (var_1_45 - var_1_50));
			}
		}
	}


	// From: Req7Batch56Amount500
	unsigned char stepLocal_3 = var_1_49 <= var_1_7;
	if (var_1_27 && stepLocal_3) {
		var_1_29 = (var_1_15 + -16);
	} else {
		var_1_29 = ((-50 + (var_1_97 + var_1_99)) + (abs (var_1_23)));
	}


	// From: Req15Batch56Amount500
	if (var_1_49 > (var_1_7 * var_1_49)) {
		var_1_46 = (var_1_7 + var_1_6);
	}


	// From: Req35Batch56Amount500
	if (var_1_106) {
		if ((var_1_17 <= var_1_81) && ((var_1_12 / var_1_44) <= (- var_1_1))) {
			if (var_1_50 <= ((min (var_1_53 , var_1_6)) / var_1_44)) {
				var_1_86 = (var_1_84 - var_1_72);
			}
		} else {
			if (((var_1_75 * var_1_53) * var_1_47) != var_1_43) {
				var_1_86 = (var_1_84 - var_1_62);
			} else {
				var_1_86 = (max (var_1_72 , (var_1_32 + var_1_62)));
			}
		}
	} else {
		if (var_1_46 < 128.75f) {
			if (var_1_70 < (var_1_69 - (var_1_88 + var_1_38))) {
				if (((- var_1_69) + var_1_22) >= ((last_1_var_1_86 - var_1_34) / var_1_84)) {
					var_1_86 = (((var_1_81 + var_1_63) + var_1_74) + var_1_23);
				} else {
					var_1_86 = (var_1_31 + (abs (var_1_71)));
				}
			} else {
				var_1_86 = (min (var_1_29 , 0));
			}
		} else {
			var_1_86 = (2 + var_1_63);
		}
	}


	// From: Req11Batch56Amount500
	signed long int stepLocal_6 = abs (var_1_34 * var_1_29);
	if (stepLocal_6 <= var_1_22) {
		var_1_36 = (var_1_23 - var_1_37);
	} else {
		var_1_36 = (((max (50 , var_1_23)) - var_1_38) + (var_1_39 + var_1_40));
	}


	// From: Req26Batch56Amount500
	signed long int stepLocal_15 = min ((var_1_22 << var_1_37) , var_1_67);
	signed char stepLocal_14 = var_1_39;
	signed long int stepLocal_13 = var_1_37 / var_1_62;
	if (stepLocal_15 < var_1_83) {
		if (stepLocal_14 > (var_1_56 / var_1_62)) {
			var_1_65 = ((min (255.4f , (max (var_1_44 , var_1_48)))) - var_1_50);
		} else {
			if ((16.4 * (var_1_50 * var_1_49)) < (- var_1_73)) {
				if (var_1_23 >= stepLocal_13) {
					var_1_65 = ((var_1_55 - var_1_50) + var_1_7);
				}
			} else {
				var_1_65 = (var_1_45 - var_1_50);
			}
		}
	}


	// From: Req29Batch56Amount500
	unsigned long int stepLocal_18 = min (var_1_104 , var_1_91);
	unsigned short int stepLocal_17 = var_1_63;
	if (var_1_99 >= stepLocal_18) {
		if ((- var_1_73) != var_1_4) {
			if (var_1_4 > (var_1_101 + var_1_46)) {
				var_1_68 = (var_1_69 - var_1_22);
			} else {
				var_1_68 = ((var_1_62 + var_1_70) - (var_1_61 + var_1_23));
			}
		} else {
			var_1_68 = (max (((100 + var_1_70) - var_1_15) , var_1_62));
		}
	} else {
		if (var_1_104 != stepLocal_17) {
			if (! var_1_25) {
				var_1_68 = ((var_1_70 - var_1_61) + var_1_37);
			} else {
				var_1_68 = (var_1_69 - (var_1_23 + (var_1_71 - var_1_61)));
			}
		} else {
			var_1_68 = (var_1_69 - var_1_72);
		}
	}


	// From: Req31Batch56Amount500
	if (var_1_72 > 200) {
		if ((var_1_29 >> var_1_78) == ((var_1_91 / var_1_79) + (max (var_1_103 , var_1_91)))) {
			var_1_77 = (min (0 , var_1_62));
		} else {
			var_1_77 = (var_1_72 + var_1_38);
		}
	} else {
		var_1_77 = (((var_1_81 - 4) + var_1_70) - var_1_61);
	}


	// From: Req51Batch56Amount500
	signed char stepLocal_27 = var_1_60;
	signed char stepLocal_26 = var_1_38;
	unsigned short int stepLocal_25 = var_1_83;
	if (50 > stepLocal_25) {
		if (stepLocal_27 == (var_1_71 << var_1_56)) {
			var_1_107 = (max (var_1_23 , var_1_71));
		}
	} else {
		if (var_1_68 <= stepLocal_26) {
			var_1_107 = var_1_78;
		} else {
			var_1_107 = var_1_81;
		}
	}


	// From: Req12Batch56Amount500
	signed long int stepLocal_8 = min ((abs (var_1_40)) , var_1_34);
	unsigned short int stepLocal_7 = var_1_86;
	if ((min (var_1_20 , (2193086620u - var_1_34))) >= stepLocal_7) {
		if (var_1_12 > 1.75f) {
			if (var_1_31 < stepLocal_8) {
				var_1_41 = var_1_37;
			}
		}
	} else {
		var_1_41 = var_1_22;
	}


	// From: Req9Batch56Amount500
	if (((last_1_var_1_33 * var_1_20) > (var_1_15 & var_1_77)) && (var_1_6 <= var_1_12)) {
		if (((var_1_4 - 256.75) + (- var_1_65)) == var_1_12) {
			var_1_33 = (abs (var_1_32));
		} else {
			var_1_33 = (var_1_77 - (min ((var_1_34 - var_1_23) , var_1_107)));
		}
	} else {
		var_1_33 = var_1_31;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 63);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= 16382);
	assume_abort_if_not(var_1_31 <= 32766);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= 16382);
	assume_abort_if_not(var_1_32 <= 32766);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= 16383);
	assume_abort_if_not(var_1_34 <= 32766);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -31);
	assume_abort_if_not(var_1_39 <= 32);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -31);
	assume_abort_if_not(var_1_40 <= 31);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 6917529.027641074000e+12F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_52 >= 32767);
	assume_abort_if_not(var_1_52 <= 65535);
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= -461168.6018427383000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691400e+12F && var_1_55 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 31);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= 63);
	assume_abort_if_not(var_1_62 <= 126);
	var_1_64 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 32767);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 127);
	assume_abort_if_not(var_1_69 <= 254);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 64);
	assume_abort_if_not(var_1_70 <= 127);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 31);
	assume_abort_if_not(var_1_71 <= 63);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 127);
	var_1_74 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_74 >= 1);
	assume_abort_if_not(var_1_74 <= 7);
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 2305843.009213691400e+12F && var_1_75 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_76 >= 0.0F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 2305843.009213691400e+12F && var_1_76 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_78 >= 1);
	assume_abort_if_not(var_1_78 <= 6);
	var_1_79 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_79 >= -2147483648);
	assume_abort_if_not(var_1_79 <= 2147483647);
	assume_abort_if_not(var_1_79 != 0);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 95);
	assume_abort_if_not(var_1_81 <= 127);
	var_1_84 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_84 >= 32767);
	assume_abort_if_not(var_1_84 <= 65534);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 64);
	var_1_93 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_93 >= -922337.2036854766000e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 9223372.036854766000e+12F && var_1_93 >= 1.0e-20F ));
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_25 = var_1_25;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_106 = var_1_106;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((var_1_47 != var_1_66) ? ((var_1_66 < (var_1_4 - 2.5f)) ? (var_1_1 == ((float) (min (9.5f , ((min (var_1_5 , var_1_6)) + var_1_7))))) : (var_1_1 == ((float) (var_1_7 + (max ((abs (var_1_5)) , 1.487f)))))) : (((var_1_94 && var_1_35) || var_1_59) ? (var_1_1 == ((float) (min (var_1_7 , (var_1_6 + var_1_5))))) : 1)) && (var_1_25 ? (var_1_11 == ((float) ((abs (var_1_5)) - var_1_12))) : 1)) && (var_1_94 ? ((((~ var_1_103) * (var_1_42 + var_1_15)) >= ((max (64 , var_1_17)) / (abs (-50)))) ? (var_1_13 == ((unsigned short int) (max ((var_1_15 + var_1_18) , var_1_19)))) : (var_1_13 == ((unsigned short int) ((min (var_1_15 , var_1_18)) + (max (var_1_20 , 2)))))) : (var_1_13 == ((unsigned short int) var_1_19)))) && (((var_1_20 + var_1_13) < var_1_15) ? (var_1_21 == ((unsigned char) (var_1_15 + (var_1_22 - var_1_23)))) : 1)) && ((var_1_22 > var_1_96) ? (var_1_24 == ((unsigned char) (max (var_1_22 , var_1_15)))) : ((var_1_23 >= var_1_19) ? (var_1_24 == ((unsigned char) (128 - var_1_22))) : 1))) && ((var_1_4 < -0.5f) ? (last_1_var_1_94 ? (var_1_25 == ((unsigned char) (var_1_26 && (! var_1_27)))) : ((var_1_4 >= (min (last_1_var_1_43 , var_1_6))) ? (var_1_25 == ((unsigned char) (last_1_var_1_59 || ((last_1_var_1_59 || var_1_26) && (var_1_27 || var_1_28))))) : (var_1_25 == ((unsigned char) var_1_27)))) : 1)) && ((var_1_27 && (var_1_49 <= var_1_7)) ? (var_1_29 == ((signed short int) (var_1_15 + -16))) : (var_1_29 == ((signed short int) ((-50 + (var_1_97 + var_1_99)) + (abs (var_1_23))))))) && ((var_1_59 && (0 < var_1_24)) ? (var_1_25 ? (var_1_30 == ((signed short int) (((min (var_1_31 , var_1_32)) - var_1_23) - last_1_var_1_30))) : 1) : (var_1_30 == ((signed short int) var_1_24)))) && ((((last_1_var_1_33 * var_1_20) > (var_1_15 & var_1_77)) && (var_1_6 <= var_1_12)) ? ((((var_1_4 - 256.75) + (- var_1_65)) == var_1_12) ? (var_1_33 == ((signed short int) (abs (var_1_32)))) : (var_1_33 == ((signed short int) (var_1_77 - (min ((var_1_34 - var_1_23) , var_1_107)))))) : (var_1_33 == ((signed short int) var_1_31)))) && ((var_1_31 >= var_1_18) ? (var_1_35 == ((unsigned char) (last_1_var_1_106 && var_1_27))) : (var_1_35 == ((unsigned char) ((last_1_var_1_106 && var_1_26) && var_1_27))))) && (((abs (var_1_34 * var_1_29)) <= var_1_22) ? (var_1_36 == ((signed char) (var_1_23 - var_1_37))) : (var_1_36 == ((signed char) (((max (50 , var_1_23)) - var_1_38) + (var_1_39 + var_1_40)))))) && (((min (var_1_20 , (2193086620u - var_1_34))) >= var_1_86) ? ((var_1_12 > 1.75f) ? ((var_1_31 < (min ((abs (var_1_40)) , var_1_34))) ? (var_1_41 == ((unsigned char) var_1_37)) : 1) : 1) : (var_1_41 == ((unsigned char) var_1_22)))) && ((! var_1_59) ? (var_1_42 == ((unsigned short int) ((min (var_1_15 , var_1_23)) + (max (var_1_34 , var_1_24))))) : (var_1_42 == ((unsigned short int) var_1_24)))) && (var_1_43 == ((double) (((var_1_44 - 63.4) - var_1_45) - var_1_12)))) && ((var_1_49 > (var_1_7 * var_1_49)) ? (var_1_46 == ((float) (var_1_7 + var_1_6))) : 1)) && (var_1_47 == ((double) (var_1_45 - (max (var_1_44 , var_1_48)))))) && (((var_1_20 << var_1_51) != var_1_17) ? ((var_1_47 > var_1_66) ? (var_1_49 == ((double) (var_1_44 - (abs (var_1_48))))) : ((1000 < var_1_22) ? ((256 < ((var_1_22 - 2) + var_1_17)) ? (var_1_49 == ((double) (min (var_1_7 , (var_1_5 + var_1_45))))) : (var_1_49 == ((double) 31.8))) : (var_1_49 == ((double) (var_1_7 + (var_1_45 - var_1_50)))))) : 1)) && (((var_1_37 - var_1_23) < var_1_24) ? ((((var_1_52 - var_1_20) | var_1_83) >= var_1_24) ? (var_1_51 == ((unsigned short int) ((abs (var_1_22)) + (var_1_23 + 16)))) : (((max (var_1_47 , (var_1_45 / var_1_44))) <= var_1_43) ? ((var_1_56 < var_1_34) ? (var_1_28 ? (var_1_51 == ((unsigned short int) (var_1_37 + var_1_31))) : (var_1_51 == ((unsigned short int) ((16431 - var_1_67) + (max ((var_1_22 + var_1_63) , var_1_18)))))) : 1) : 1)) : (var_1_51 == ((unsigned short int) ((31125 - var_1_82) + var_1_15))))) && (((var_1_52 * var_1_38) == (100 / var_1_31)) ? (var_1_53 == ((double) ((var_1_45 - var_1_50) + ((abs (var_1_54)) - (7.4 + var_1_55))))) : (var_1_53 == ((double) (min (var_1_6 , ((var_1_44 - var_1_45) - var_1_48))))))) && ((var_1_63 > var_1_38) ? (var_1_56 == ((unsigned short int) (max (var_1_15 , var_1_23)))) : ((-1000000000 > var_1_22) ? (var_1_56 == ((unsigned short int) (abs (var_1_15)))) : (var_1_56 == ((unsigned short int) (var_1_96 + var_1_15)))))) && ((! (var_1_83 > var_1_23)) ? (var_1_57 == ((signed char) (max ((min (8 , var_1_37)) , var_1_23)))) : (var_1_57 == ((signed char) (max (var_1_39 , var_1_38)))))) && (var_1_58 == ((float) (max ((var_1_54 + var_1_45) , var_1_55))))) && ((var_1_92 < (abs (var_1_5))) ? (var_1_59 == ((unsigned char) (! 1))) : (var_1_59 == ((unsigned char) (! var_1_27))))) && (var_1_26 ? ((var_1_54 >= (var_1_100 / var_1_44)) ? (var_1_60 == ((signed char) (8 - var_1_38))) : (var_1_60 == ((signed char) (((32 - var_1_61) + var_1_23) - (var_1_62 - var_1_38))))) : 1)) && ((! var_1_28) ? ((! var_1_26) ? ((last_1_var_1_25 || var_1_26) ? (var_1_63 == ((unsigned short int) (min (var_1_23 , last_1_var_1_41)))) : (var_1_63 == ((unsigned short int) (var_1_31 + (min ((abs (var_1_37)) , var_1_64)))))) : (var_1_63 == ((unsigned short int) (var_1_20 + var_1_31)))) : 1)) && (((min ((var_1_22 << var_1_37) , var_1_67)) < var_1_83) ? ((var_1_39 > (var_1_56 / var_1_62)) ? (var_1_65 == ((float) ((min (255.4f , (max (var_1_44 , var_1_48)))) - var_1_50))) : (((16.4 * (var_1_50 * var_1_49)) < (- var_1_73)) ? ((var_1_23 >= (var_1_37 / var_1_62)) ? (var_1_65 == ((float) ((var_1_55 - var_1_50) + var_1_7))) : 1) : (var_1_65 == ((float) (var_1_45 - var_1_50))))) : 1)) && (var_1_25 ? (var_1_66 == ((double) (max ((min ((var_1_6 + var_1_45) , var_1_12)) , (var_1_48 - (min (var_1_50 , var_1_44))))))) : ((((min (var_1_96 , var_1_23)) / var_1_31) <= (min (var_1_42 , var_1_102))) ? (var_1_66 == ((double) (var_1_55 - var_1_44))) : (var_1_66 == ((double) var_1_12))))) && ((var_1_5 > var_1_89) ? (var_1_67 == ((signed long int) -4)) : 1)) && ((var_1_99 >= (min (var_1_104 , var_1_91))) ? (((- var_1_73) != var_1_4) ? ((var_1_4 > (var_1_101 + var_1_46)) ? (var_1_68 == ((unsigned char) (var_1_69 - var_1_22))) : (var_1_68 == ((unsigned char) ((var_1_62 + var_1_70) - (var_1_61 + var_1_23))))) : (var_1_68 == ((unsigned char) (max (((100 + var_1_70) - var_1_15) , var_1_62))))) : ((var_1_104 != var_1_63) ? ((! var_1_25) ? (var_1_68 == ((unsigned char) ((var_1_70 - var_1_61) + var_1_37))) : (var_1_68 == ((unsigned char) (var_1_69 - (var_1_23 + (var_1_71 - var_1_61)))))) : (var_1_68 == ((unsigned char) (var_1_69 - var_1_72)))))) && (((var_1_70 >> var_1_74) == var_1_23) ? (var_1_73 == ((float) var_1_45)) : ((var_1_28 && (var_1_92 != var_1_50)) ? (var_1_73 == ((float) ((var_1_55 + (var_1_75 + var_1_76)) - var_1_50))) : 1))) && ((var_1_72 > 200) ? (((var_1_29 >> var_1_78) == ((var_1_91 / var_1_79) + (max (var_1_103 , var_1_91)))) ? (var_1_77 == ((unsigned char) (min (0 , var_1_62)))) : (var_1_77 == ((unsigned char) (var_1_72 + var_1_38)))) : (var_1_77 == ((unsigned char) (((var_1_81 - 4) + var_1_70) - var_1_61))))) && ((var_1_89 < var_1_1) ? (var_1_82 == ((unsigned short int) (var_1_13 + var_1_62))) : 1)) && ((var_1_52 <= (55142 - var_1_74)) ? ((var_1_48 <= ((var_1_12 - 1.0000000000000062E14) * var_1_55)) ? (var_1_83 == ((unsigned short int) var_1_13)) : ((var_1_99 >= var_1_31) ? (var_1_83 == ((unsigned short int) (min (4 , var_1_31)))) : (var_1_83 == ((unsigned short int) (var_1_84 - var_1_61))))) : (var_1_83 == ((unsigned short int) (abs (var_1_72 + var_1_34)))))) && ((var_1_32 > var_1_81) ? (var_1_85 == ((signed char) ((max (-5 , var_1_23)) + (var_1_39 + (min (var_1_74 , var_1_40)))))) : 1)) && (var_1_106 ? (((var_1_17 <= var_1_81) && ((var_1_12 / var_1_44) <= (- var_1_1))) ? ((var_1_50 <= ((min (var_1_53 , var_1_6)) / var_1_44)) ? (var_1_86 == ((unsigned short int) (var_1_84 - var_1_72))) : 1) : ((((var_1_75 * var_1_53) * var_1_47) != var_1_43) ? (var_1_86 == ((unsigned short int) (var_1_84 - var_1_62))) : (var_1_86 == ((unsigned short int) (max (var_1_72 , (var_1_32 + var_1_62))))))) : ((var_1_46 < 128.75f) ? ((var_1_70 < (var_1_69 - (var_1_88 + var_1_38))) ? ((((- var_1_69) + var_1_22) >= ((last_1_var_1_86 - var_1_34) / var_1_84)) ? (var_1_86 == ((unsigned short int) (((var_1_81 + var_1_63) + var_1_74) + var_1_23))) : (var_1_86 == ((unsigned short int) (var_1_31 + (abs (var_1_71)))))) : (var_1_86 == ((unsigned short int) (min (var_1_29 , 0))))) : (var_1_86 == ((unsigned short int) (2 + var_1_63)))))) && ((var_1_13 > var_1_15) ? (var_1_89 == ((double) var_1_76)) : 1)) && (var_1_35 ? (var_1_90 == ((unsigned short int) (1 + var_1_62))) : (var_1_90 == ((unsigned short int) var_1_74)))) && ((! var_1_35) ? (var_1_91 == ((unsigned long int) var_1_67)) : ((var_1_30 == var_1_64) ? (var_1_91 == ((unsigned long int) (((4068473853u - var_1_19) - 32u) - (min ((var_1_78 + var_1_42) , (var_1_88 + var_1_67)))))) : (var_1_91 == ((unsigned long int) var_1_90))))) && (var_1_25 ? (var_1_92 == ((float) var_1_93)) : (var_1_92 == ((float) var_1_75)))) && (last_1_var_1_94 ? (var_1_94 == ((unsigned char) var_1_95)) : 1)) && (var_1_106 ? (var_1_96 == ((unsigned short int) var_1_88)) : 1)) && (var_1_94 ? (var_1_97 == ((signed char) var_1_38)) : 1)) && (var_1_59 ? (var_1_98 == ((signed short int) var_1_34)) : (var_1_98 == ((signed short int) var_1_82)))) && (var_1_99 == ((signed short int) var_1_102))) && (var_1_28 ? (var_1_100 == ((double) var_1_44)) : (var_1_100 == ((double) var_1_55)))) && (var_1_94 ? (var_1_101 == ((float) var_1_76)) : 1)) && (var_1_102 == ((signed char) var_1_88))) && (var_1_103 == ((unsigned short int) var_1_19))) && (var_1_106 ? (var_1_104 == ((signed char) var_1_40)) : (var_1_104 == ((signed char) var_1_38)))) && (var_1_35 ? (var_1_106 == ((unsigned char) var_1_26)) : (var_1_106 == ((unsigned char) var_1_95)))) && ((50 > var_1_83) ? ((var_1_60 == (var_1_71 << var_1_56)) ? (var_1_107 == ((unsigned char) (max (var_1_23 , var_1_71)))) : 1) : ((var_1_68 <= var_1_38) ? (var_1_107 == ((unsigned char) var_1_78)) : (var_1_107 == ((unsigned char) var_1_81))))
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
