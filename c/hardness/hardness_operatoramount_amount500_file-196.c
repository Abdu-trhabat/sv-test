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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch196Amount500.c", 13, "reach_error"); }
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
signed short int var_1_1 = -128;
signed short int var_1_8 = 0;
signed short int var_1_9 = 1;
signed char var_1_10 = -128;
signed char var_1_11 = 64;
signed char var_1_12 = -1;
signed char var_1_13 = 2;
signed char var_1_14 = 32;
double var_1_15 = 3.75;
double var_1_16 = 500.5;
unsigned short int var_1_17 = 256;
float var_1_18 = 100.25;
float var_1_19 = 32.25;
unsigned long int var_1_20 = 128;
signed long int var_1_21 = -128;
signed long int var_1_23 = 32;
unsigned long int var_1_24 = 500;
unsigned short int var_1_25 = 128;
unsigned short int var_1_26 = 4;
unsigned short int var_1_27 = 44555;
signed long int var_1_28 = 50;
signed long int var_1_29 = 1174606173;
signed char var_1_30 = -128;
signed char var_1_31 = 32;
signed char var_1_32 = 32;
signed char var_1_33 = 10;
signed char var_1_34 = 100;
signed char var_1_35 = 5;
signed char var_1_36 = 64;
signed char var_1_37 = 1;
signed short int var_1_38 = -5;
signed short int var_1_39 = 23021;
signed short int var_1_40 = 32135;
unsigned short int var_1_41 = 8;
unsigned short int var_1_43 = 128;
unsigned short int var_1_44 = 59315;
signed short int var_1_45 = 32;
signed short int var_1_46 = -2;
float var_1_47 = 9.5;
float var_1_49 = 3.5;
float var_1_50 = 2.8;
float var_1_51 = 0.0;
float var_1_52 = 64.5;
float var_1_53 = 3.5;
unsigned char var_1_54 = 4;
unsigned char var_1_55 = 200;
unsigned char var_1_56 = 1;
signed long int var_1_57 = -10;
unsigned char var_1_59 = 1;
unsigned char var_1_60 = 0;
signed long int var_1_61 = -50;
double var_1_62 = 24.75;
unsigned long int var_1_63 = 64;
unsigned long int var_1_65 = 3344966560;
unsigned long int var_1_66 = 1959345589;
unsigned long int var_1_67 = 2056452289;
signed short int var_1_68 = -256;
unsigned short int var_1_69 = 128;
double var_1_71 = 128.25;
unsigned long int var_1_72 = 0;
unsigned long int var_1_73 = 2154492142;
unsigned char var_1_74 = 0;
signed char var_1_75 = 25;
unsigned char var_1_76 = 1;
unsigned char var_1_77 = 1;
signed long int var_1_78 = -1;
float var_1_79 = 128.475;
unsigned char var_1_80 = 1;
unsigned char var_1_81 = 0;
unsigned char var_1_82 = 2;
unsigned long int var_1_83 = 5;
unsigned char var_1_84 = 1;
unsigned long int var_1_85 = 8;
unsigned long int var_1_86 = 3720806241;
unsigned long int var_1_87 = 1000000000;
unsigned long int var_1_88 = 1000000000;
double var_1_89 = 256.75;
unsigned long int var_1_90 = 200;
signed long int var_1_91 = -8;
double var_1_92 = 5.25;
double var_1_93 = 500.4;
unsigned short int var_1_94 = 256;
signed char var_1_95 = 25;
signed char var_1_96 = -4;
signed short int var_1_97 = 128;
float var_1_98 = 10.5;
double var_1_99 = 24.6;
double var_1_100 = 100.2;
unsigned char var_1_101 = 0;
double var_1_102 = 127.2;
unsigned long int var_1_103 = 1;
unsigned long int var_1_104 = 64;
signed char var_1_105 = 32;
signed short int var_1_106 = -100;

// Calibration values

// Last'ed variables
double last_1_var_1_15 = 3.75;
unsigned long int last_1_var_1_20 = 128;
signed long int last_1_var_1_21 = -128;
double last_1_var_1_71 = 128.25;
signed long int last_1_var_1_78 = -1;
float last_1_var_1_79 = 128.475;
double last_1_var_1_92 = 5.25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req26Batch196Amount500
	unsigned char stepLocal_15 = var_1_62 < (var_1_52 + var_1_19);
	if (((max (var_1_50 , last_1_var_1_92)) > last_1_var_1_15) || stepLocal_15) {
		var_1_74 = ((last_1_var_1_20 > last_1_var_1_78) || (! var_1_60));
	}


	// From: Req34Batch196Amount500
	if (last_1_var_1_79 <= (- last_1_var_1_71)) {
		if (var_1_81) {
			var_1_84 = var_1_77;
		} else {
			var_1_84 = (! ((! var_1_60) && var_1_77));
		}
	}


	// From: Req47Batch196Amount500
	if (var_1_84) {
		var_1_100 = var_1_52;
	}


	// From: Req51Batch196Amount500
	if (var_1_84) {
		var_1_104 = var_1_73;
	}


	// From: Req6Batch196Amount500
	var_1_20 = var_1_14;


	// From: Req9Batch196Amount500
	var_1_25 = (abs (5));


	// From: Req24Batch196Amount500
	signed char stepLocal_13 = var_1_12;
	unsigned short int stepLocal_12 = var_1_43;
	if (stepLocal_12 > (8 / var_1_39)) {
		if ((var_1_14 * var_1_55) != stepLocal_13) {
			var_1_71 = ((var_1_53 + var_1_52) + var_1_51);
		}
	}


	// From: Req25Batch196Amount500
	signed long int stepLocal_14 = var_1_29 + var_1_13;
	if (var_1_20 < stepLocal_14) {
		var_1_72 = var_1_44;
	} else {
		var_1_72 = ((max (var_1_65 , var_1_73)) - var_1_23);
	}


	// From: Req37Batch196Amount500
	var_1_90 = var_1_27;


	// From: Req38Batch196Amount500
	if (var_1_60) {
		var_1_91 = 16;
	} else {
		var_1_91 = var_1_55;
	}


	// From: Req40Batch196Amount500
	if (var_1_60) {
		var_1_93 = var_1_50;
	}


	// From: Req41Batch196Amount500
	if (var_1_74) {
		var_1_94 = 8;
	}


	// From: Req42Batch196Amount500
	var_1_95 = var_1_34;


	// From: Req43Batch196Amount500
	var_1_96 = var_1_32;


	// From: Req45Batch196Amount500
	var_1_98 = var_1_52;


	// From: Req49Batch196Amount500
	if (var_1_60) {
		var_1_102 = var_1_53;
	}


	// From: Req53Batch196Amount500
	var_1_106 = var_1_33;


	// From: Req29Batch196Amount500
	if (var_1_74) {
		var_1_78 = var_1_39;
	} else {
		var_1_78 = var_1_90;
	}


	// From: Req4Batch196Amount500
	if (var_1_16 <= var_1_71) {
		var_1_17 = (34033 - (max (var_1_13 , var_1_14)));
	} else {
		if (var_1_84) {
			var_1_17 = (var_1_14 + var_1_13);
		} else {
			var_1_17 = (var_1_14 + 128);
		}
	}


	// From: Req8Batch196Amount500
	if (var_1_100 <= var_1_71) {
		var_1_24 = (var_1_13 + var_1_23);
	}


	// From: Req11Batch196Amount500
	var_1_28 = (var_1_90 - (min (var_1_17 , (var_1_29 - var_1_23))));


	// From: Req21Batch196Amount500
	if (((var_1_51 / var_1_62) + var_1_16) < var_1_49) {
		var_1_61 = (max (var_1_35 , var_1_24));
	}


	// From: Req31Batch196Amount500
	var_1_80 = (((var_1_61 > var_1_104) && var_1_60) || var_1_81);


	// From: Req18Batch196Amount500
	signed char stepLocal_5 = var_1_37;
	if ((abs (var_1_17 / var_1_31)) > stepLocal_5) {
		var_1_56 = ((var_1_31 + var_1_33) + 32);
	}


	// From: Req20Batch196Amount500
	signed long int stepLocal_7 = ~ 50;
	if (var_1_84) {
		var_1_59 = (! (var_1_84 && var_1_60));
	} else {
		if (stepLocal_7 > var_1_34) {
			var_1_59 = (var_1_80 && var_1_60);
		} else {
			var_1_59 = var_1_60;
		}
	}


	// From: Req52Batch196Amount500
	if (! var_1_59) {
		var_1_105 = (min ((min (var_1_33 , (max (var_1_31 , var_1_14)))) , var_1_32));
	} else {
		var_1_105 = ((var_1_37 - var_1_35) + var_1_33);
	}


	// From: Req28Batch196Amount500
	if (var_1_60) {
		if (var_1_19 >= var_1_62) {
			var_1_76 = var_1_77;
		} else {
			var_1_76 = (var_1_80 || var_1_77);
		}
	}


	// From: Req39Batch196Amount500
	if (var_1_76) {
		var_1_92 = var_1_49;
	}


	// From: Req10Batch196Amount500
	unsigned char stepLocal_0 = var_1_76;
	if (var_1_84 || stepLocal_0) {
		if (var_1_84) {
			var_1_26 = (var_1_27 - var_1_13);
		} else {
			var_1_26 = var_1_14;
		}
	} else {
		var_1_26 = var_1_13;
	}


	// From: Req46Batch196Amount500
	if (var_1_76) {
		var_1_99 = var_1_49;
	} else {
		var_1_99 = var_1_53;
	}


	// From: Req48Batch196Amount500
	if (var_1_76) {
		var_1_101 = var_1_60;
	}


	// From: Req3Batch196Amount500
	if (var_1_101) {
		var_1_15 = (var_1_16 - 127.2);
	} else {
		var_1_15 = var_1_16;
	}


	// From: Req15Batch196Amount500
	if (var_1_101) {
		var_1_45 = (max (var_1_8 , var_1_46));
	}


	// From: Req33Batch196Amount500
	unsigned long int stepLocal_19 = var_1_20;
	if (stepLocal_19 <= ((max (var_1_32 , var_1_28)) + var_1_14)) {
		var_1_83 = (max ((var_1_73 - (max (var_1_32 , var_1_45))) , 8u));
	} else {
		var_1_83 = (var_1_65 - ((var_1_69 + var_1_43) + var_1_17));
	}


	// From: Req19Batch196Amount500
	unsigned char stepLocal_6 = ! (var_1_101 && var_1_74);
	if ((var_1_36 == (var_1_31 << var_1_72)) && stepLocal_6) {
		var_1_57 = (max (var_1_14 , var_1_72));
	}


	// From: Req44Batch196Amount500
	if (var_1_101) {
		var_1_97 = var_1_33;
	} else {
		var_1_97 = var_1_28;
	}


	// From: Req22Batch196Amount500
	signed long int stepLocal_8 = var_1_13 % var_1_36;
	if (var_1_84) {
		if (var_1_83 > stepLocal_8) {
			var_1_63 = (var_1_65 - (max ((min (var_1_14 , var_1_43)) , (abs (var_1_34)))));
		} else {
			var_1_63 = (((var_1_66 + var_1_67) - var_1_32) - var_1_72);
		}
	} else {
		if (var_1_101) {
			var_1_63 = (var_1_65 - var_1_13);
		} else {
			var_1_63 = (min (var_1_65 , var_1_66));
		}
	}


	// From: Req50Batch196Amount500
	if (var_1_74) {
		var_1_103 = var_1_63;
	}


	// From: Req5Batch196Amount500
	if (! ((min (var_1_12 , 32)) <= (var_1_63 * var_1_13))) {
		var_1_18 = (256.5f + (1.05f - var_1_19));
	}


	// From: Req12Batch196Amount500
	unsigned long int stepLocal_2 = var_1_14 * var_1_63;
	unsigned char stepLocal_1 = var_1_80;
	if (stepLocal_2 >= var_1_105) {
		if (((var_1_16 + 1.0000000000000008E15f) * var_1_19) != var_1_92) {
			if (var_1_59 || stepLocal_1) {
				var_1_30 = (var_1_12 - ((var_1_31 + var_1_32) - var_1_33));
			} else {
				var_1_30 = (max (0 , var_1_33));
			}
		} else {
			var_1_30 = (((var_1_34 - var_1_35) - var_1_33) - (var_1_36 - (32 - var_1_37)));
		}
	} else {
		var_1_30 = var_1_37;
	}


	// From: Req14Batch196Amount500
	signed long int stepLocal_3 = var_1_91;
	if (stepLocal_3 > var_1_9) {
		if (var_1_16 >= var_1_18) {
			var_1_41 = (max (1 , var_1_43));
		} else {
			var_1_41 = ((max (var_1_27 , var_1_44)) - (max (var_1_14 , var_1_32)));
		}
	}


	// From: Req27Batch196Amount500
	signed long int stepLocal_18 = 4;
	signed long int stepLocal_17 = var_1_57;
	signed long int stepLocal_16 = var_1_23 / (abs (-200));
	if (var_1_101) {
		if ((var_1_28 * var_1_13) > stepLocal_16) {
			if (var_1_103 >= stepLocal_18) {
				if ((var_1_14 + (var_1_61 + 10)) < stepLocal_17) {
					var_1_75 = ((var_1_37 + var_1_31) - (1 + var_1_33));
				} else {
					var_1_75 = (min (var_1_32 , (var_1_36 - var_1_14)));
				}
			} else {
				var_1_75 = (var_1_31 + var_1_35);
			}
		}
	} else {
		var_1_75 = (abs (var_1_32));
	}


	// From: Req32Batch196Amount500
	if (((abs (var_1_97)) <= -256) && (0.09999999999999998f >= var_1_15)) {
		var_1_82 = (max ((var_1_55 - var_1_13) , var_1_37));
	} else {
		var_1_82 = (abs (128));
	}


	// From: Req35Batch196Amount500
	unsigned long int stepLocal_21 = var_1_72;
	unsigned long int stepLocal_20 = - var_1_83;
	if (! (! (var_1_104 < var_1_35))) {
		var_1_85 = (var_1_86 - (min (var_1_27 , var_1_66)));
	} else {
		if (stepLocal_21 < (var_1_61 * var_1_63)) {
			if (stepLocal_20 <= var_1_61) {
				var_1_85 = ((max (var_1_104 , var_1_34)) + (abs (var_1_32)));
			}
		} else {
			var_1_85 = (var_1_73 - ((var_1_87 - var_1_33) + (var_1_88 - var_1_37)));
		}
	}


	// From: Req36Batch196Amount500
	signed long int stepLocal_27 = 100;
	signed long int stepLocal_26 = (5 / var_1_40) / var_1_31;
	signed short int stepLocal_25 = var_1_40;
	signed short int stepLocal_24 = var_1_9;
	unsigned long int stepLocal_23 = (var_1_43 ^ var_1_85) ^ (var_1_104 + var_1_24);
	unsigned long int stepLocal_22 = var_1_67 / var_1_69;
	if (var_1_26 < stepLocal_24) {
		if (stepLocal_25 <= var_1_24) {
			if (var_1_29 == stepLocal_26) {
				var_1_89 = (var_1_49 - (var_1_19 + var_1_50));
			} else {
				if ((var_1_11 / var_1_31) > stepLocal_22) {
					if ((- 10) > stepLocal_23) {
						var_1_89 = (var_1_52 - var_1_50);
					} else {
						var_1_89 = (var_1_19 + (16.8 - var_1_49));
					}
				} else {
					var_1_89 = var_1_52;
				}
			}
		}
	} else {
		if (stepLocal_27 >= var_1_34) {
			var_1_89 = (min (var_1_53 , (var_1_49 + var_1_19)));
		} else {
			var_1_89 = 499.5;
		}
	}


	// From: Req30Batch196Amount500
	if ((var_1_67 / var_1_31) < var_1_103) {
		var_1_79 = (var_1_51 + (max (var_1_50 , var_1_49)));
	} else {
		if (! (var_1_90 < var_1_69)) {
			var_1_79 = (max (var_1_53 , var_1_19));
		}
	}


	// From: Req13Batch196Amount500
	if (var_1_74 && var_1_84) {
		if (var_1_80 && var_1_84) {
			if (var_1_35 >= var_1_9) {
				var_1_38 = (((max (var_1_39 , var_1_40)) - var_1_32) - (abs (var_1_12)));
			} else {
				var_1_38 = ((var_1_33 + var_1_14) - (abs (var_1_36 - var_1_13)));
			}
		}
	} else {
		if ((min (var_1_35 , var_1_11)) <= (var_1_85 / (max (var_1_29 , var_1_31)))) {
			var_1_38 = ((min (var_1_26 , var_1_31)) + var_1_33);
		}
	}


	// From: Req16Batch196Amount500
	if (var_1_101) {
		if ((- (var_1_35 / var_1_31)) <= ((var_1_26 * var_1_28) * var_1_25)) {
			var_1_47 = (var_1_16 - 32.4f);
		} else {
			var_1_47 = (var_1_16 - var_1_19);
		}
	} else {
		if (! var_1_74) {
			if (var_1_102 >= var_1_89) {
				var_1_47 = ((abs (var_1_19 - var_1_49)) + (var_1_50 - 31.8f));
			} else {
				var_1_47 = ((var_1_50 - (var_1_51 - var_1_52)) + var_1_49);
			}
		} else {
			var_1_47 = (var_1_50 + (max ((var_1_52 + var_1_53) , var_1_49)));
		}
	}


	// From: Req23Batch196Amount500
	unsigned char stepLocal_11 = var_1_76;
	signed long int stepLocal_10 = var_1_36 - var_1_34;
	signed long int stepLocal_9 = 1 / var_1_69;
	if (var_1_62 < (min (var_1_92 , (var_1_52 + var_1_79)))) {
		if (var_1_84 || stepLocal_11) {
			var_1_68 = ((abs (var_1_35)) + -16);
		} else {
			if (stepLocal_9 != (var_1_55 + (var_1_27 - var_1_43))) {
				if (var_1_92 >= (- var_1_19)) {
					var_1_68 = (-1 + var_1_106);
				} else {
					if (stepLocal_10 != (max (-2 , var_1_72))) {
						var_1_68 = (var_1_33 - var_1_39);
					} else {
						var_1_68 = (((var_1_13 + var_1_31) + var_1_82) - var_1_34);
					}
				}
			} else {
				if ((var_1_49 - (6.674752239675677E18 - var_1_50)) >= (var_1_51 - var_1_16)) {
					if (var_1_101) {
						var_1_68 = (var_1_14 - var_1_34);
					} else {
						var_1_68 = (min (var_1_106 , -32));
					}
				} else {
					var_1_68 = (min (var_1_34 , (min (var_1_106 , 128))));
				}
			}
		}
	} else {
		var_1_68 = (var_1_106 + (var_1_11 + var_1_97));
	}


	// From: Req7Batch196Amount500
	if ((var_1_13 >= var_1_11) || (var_1_14 >= (var_1_57 + -100))) {
		if (var_1_101 || (var_1_89 > var_1_93)) {
			if (var_1_97 <= var_1_9) {
				if (! (var_1_12 < var_1_68)) {
					var_1_21 = (var_1_12 - 1);
				}
			} else {
				var_1_21 = var_1_11;
			}
		} else {
			if (last_1_var_1_21 > var_1_14) {
				if (var_1_101) {
					if ((min (var_1_83 , var_1_14)) > last_1_var_1_21) {
						var_1_21 = ((var_1_14 + var_1_57) - (var_1_13 + var_1_23));
					} else {
						var_1_21 = var_1_13;
					}
				}
			} else {
				if (var_1_76 || var_1_101) {
					var_1_21 = ((var_1_57 + (max (var_1_12 , var_1_11))) + (var_1_8 + var_1_14));
				} else {
					var_1_21 = (max (var_1_57 , var_1_68));
				}
			}
		}
	}


	// From: Req17Batch196Amount500
	signed long int stepLocal_4 = (var_1_29 - var_1_21) - var_1_44;
	if ((32 << 8) == stepLocal_4) {
		var_1_54 = (abs (var_1_14));
	} else {
		if (! (var_1_14 > var_1_29)) {
			var_1_54 = (min ((max ((var_1_55 - var_1_32) , var_1_14)) , (128 - var_1_35)));
		} else {
			var_1_54 = ((min (1 , (var_1_34 - var_1_37))) + 2);
		}
	}


	// From: Req1Batch196Amount500
	if (var_1_84) {
		if (! var_1_76) {
			if ((-32 & var_1_85) >= var_1_21) {
				var_1_1 = (min (var_1_85 , var_1_8));
			} else {
				var_1_1 = ((var_1_85 + -4) + var_1_9);
			}
		}
	} else {
		if (var_1_8 <= var_1_21) {
			var_1_1 = (min (var_1_8 , var_1_9));
		}
	}


	// From: Req2Batch196Amount500
	if (var_1_25 <= (var_1_21 / 25)) {
		var_1_10 = (max (var_1_11 , (var_1_12 - var_1_13)));
	} else {
		var_1_10 = (min ((var_1_13 - (max (var_1_14 , 2))) , (-10 + 8)));
	}
}



void updateVariables(void) {
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32767);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -16383);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1073741823);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 32767);
	assume_abort_if_not(var_1_27 <= 65534);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= 1073741823);
	assume_abort_if_not(var_1_29 <= 2147483646);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 31);
	assume_abort_if_not(var_1_31 <= 63);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 32);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 94);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 63);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 31);
	var_1_39 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_39 >= 16382);
	assume_abort_if_not(var_1_39 <= 32766);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= 16382);
	assume_abort_if_not(var_1_40 <= 32766);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 65534);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 32767);
	assume_abort_if_not(var_1_44 <= 65534);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= -32767);
	assume_abort_if_not(var_1_46 <= 32766);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 2305843.009213691400e+12F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691400e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= -230584.3009213691400e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 2305843.009213691400e+12F && var_1_53 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 0);
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= -922337.2036854776000e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854776000e+12F && var_1_62 >= 1.0e-20F ));
	assume_abort_if_not(var_1_62 != 0.0F);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 2147483647);
	assume_abort_if_not(var_1_65 <= 4294967294);
	var_1_66 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_66 >= 1610612735);
	assume_abort_if_not(var_1_66 <= 2147483647);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 1610612735);
	assume_abort_if_not(var_1_67 <= 2147483647);
	var_1_69 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 65535);
	assume_abort_if_not(var_1_69 != 0);
	var_1_73 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_73 >= 2147483647);
	assume_abort_if_not(var_1_73 <= 4294967294);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 1);
	assume_abort_if_not(var_1_77 <= 1);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 0);
	var_1_86 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_86 >= 2147483647);
	assume_abort_if_not(var_1_86 <= 4294967294);
	var_1_87 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_87 >= 536870912);
	assume_abort_if_not(var_1_87 <= 1073741824);
	var_1_88 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_88 >= 536870911);
	assume_abort_if_not(var_1_88 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_15 = var_1_15;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_92 = var_1_92;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_84 ? ((! var_1_76) ? (((-32 & var_1_85) >= var_1_21) ? (var_1_1 == ((signed short int) (min (var_1_85 , var_1_8)))) : (var_1_1 == ((signed short int) ((var_1_85 + -4) + var_1_9)))) : 1) : ((var_1_8 <= var_1_21) ? (var_1_1 == ((signed short int) (min (var_1_8 , var_1_9)))) : 1)) && ((var_1_25 <= (var_1_21 / 25)) ? (var_1_10 == ((signed char) (max (var_1_11 , (var_1_12 - var_1_13))))) : (var_1_10 == ((signed char) (min ((var_1_13 - (max (var_1_14 , 2))) , (-10 + 8))))))) && (var_1_101 ? (var_1_15 == ((double) (var_1_16 - 127.2))) : (var_1_15 == ((double) var_1_16)))) && ((var_1_16 <= var_1_71) ? (var_1_17 == ((unsigned short int) (34033 - (max (var_1_13 , var_1_14))))) : (var_1_84 ? (var_1_17 == ((unsigned short int) (var_1_14 + var_1_13))) : (var_1_17 == ((unsigned short int) (var_1_14 + 128)))))) && ((! ((min (var_1_12 , 32)) <= (var_1_63 * var_1_13))) ? (var_1_18 == ((float) (256.5f + (1.05f - var_1_19)))) : 1)) && (var_1_20 == ((unsigned long int) var_1_14))) && (((var_1_13 >= var_1_11) || (var_1_14 >= (var_1_57 + -100))) ? ((var_1_101 || (var_1_89 > var_1_93)) ? ((var_1_97 <= var_1_9) ? ((! (var_1_12 < var_1_68)) ? (var_1_21 == ((signed long int) (var_1_12 - 1))) : 1) : (var_1_21 == ((signed long int) var_1_11))) : ((last_1_var_1_21 > var_1_14) ? (var_1_101 ? (((min (var_1_83 , var_1_14)) > last_1_var_1_21) ? (var_1_21 == ((signed long int) ((var_1_14 + var_1_57) - (var_1_13 + var_1_23)))) : (var_1_21 == ((signed long int) var_1_13))) : 1) : ((var_1_76 || var_1_101) ? (var_1_21 == ((signed long int) ((var_1_57 + (max (var_1_12 , var_1_11))) + (var_1_8 + var_1_14)))) : (var_1_21 == ((signed long int) (max (var_1_57 , var_1_68))))))) : 1)) && ((var_1_100 <= var_1_71) ? (var_1_24 == ((unsigned long int) (var_1_13 + var_1_23))) : 1)) && (var_1_25 == ((unsigned short int) (abs (5))))) && ((var_1_84 || var_1_76) ? (var_1_84 ? (var_1_26 == ((unsigned short int) (var_1_27 - var_1_13))) : (var_1_26 == ((unsigned short int) var_1_14))) : (var_1_26 == ((unsigned short int) var_1_13)))) && (var_1_28 == ((signed long int) (var_1_90 - (min (var_1_17 , (var_1_29 - var_1_23))))))) && (((var_1_14 * var_1_63) >= var_1_105) ? ((((var_1_16 + 1.0000000000000008E15f) * var_1_19) != var_1_92) ? ((var_1_59 || var_1_80) ? (var_1_30 == ((signed char) (var_1_12 - ((var_1_31 + var_1_32) - var_1_33)))) : (var_1_30 == ((signed char) (max (0 , var_1_33))))) : (var_1_30 == ((signed char) (((var_1_34 - var_1_35) - var_1_33) - (var_1_36 - (32 - var_1_37)))))) : (var_1_30 == ((signed char) var_1_37)))) && ((var_1_74 && var_1_84) ? ((var_1_80 && var_1_84) ? ((var_1_35 >= var_1_9) ? (var_1_38 == ((signed short int) (((max (var_1_39 , var_1_40)) - var_1_32) - (abs (var_1_12))))) : (var_1_38 == ((signed short int) ((var_1_33 + var_1_14) - (abs (var_1_36 - var_1_13)))))) : 1) : (((min (var_1_35 , var_1_11)) <= (var_1_85 / (max (var_1_29 , var_1_31)))) ? (var_1_38 == ((signed short int) ((min (var_1_26 , var_1_31)) + var_1_33))) : 1))) && ((var_1_91 > var_1_9) ? ((var_1_16 >= var_1_18) ? (var_1_41 == ((unsigned short int) (max (1 , var_1_43)))) : (var_1_41 == ((unsigned short int) ((max (var_1_27 , var_1_44)) - (max (var_1_14 , var_1_32)))))) : 1)) && (var_1_101 ? (var_1_45 == ((signed short int) (max (var_1_8 , var_1_46)))) : 1)) && (var_1_101 ? (((- (var_1_35 / var_1_31)) <= ((var_1_26 * var_1_28) * var_1_25)) ? (var_1_47 == ((float) (var_1_16 - 32.4f))) : (var_1_47 == ((float) (var_1_16 - var_1_19)))) : ((! var_1_74) ? ((var_1_102 >= var_1_89) ? (var_1_47 == ((float) ((abs (var_1_19 - var_1_49)) + (var_1_50 - 31.8f)))) : (var_1_47 == ((float) ((var_1_50 - (var_1_51 - var_1_52)) + var_1_49)))) : (var_1_47 == ((float) (var_1_50 + (max ((var_1_52 + var_1_53) , var_1_49)))))))) && (((32 << 8) == ((var_1_29 - var_1_21) - var_1_44)) ? (var_1_54 == ((unsigned char) (abs (var_1_14)))) : ((! (var_1_14 > var_1_29)) ? (var_1_54 == ((unsigned char) (min ((max ((var_1_55 - var_1_32) , var_1_14)) , (128 - var_1_35))))) : (var_1_54 == ((unsigned char) ((min (1 , (var_1_34 - var_1_37))) + 2)))))) && (((abs (var_1_17 / var_1_31)) > var_1_37) ? (var_1_56 == ((unsigned char) ((var_1_31 + var_1_33) + 32))) : 1)) && (((var_1_36 == (var_1_31 << var_1_72)) && (! (var_1_101 && var_1_74))) ? (var_1_57 == ((signed long int) (max (var_1_14 , var_1_72)))) : 1)) && (var_1_84 ? (var_1_59 == ((unsigned char) (! (var_1_84 && var_1_60)))) : (((~ 50) > var_1_34) ? (var_1_59 == ((unsigned char) (var_1_80 && var_1_60))) : (var_1_59 == ((unsigned char) var_1_60))))) && ((((var_1_51 / var_1_62) + var_1_16) < var_1_49) ? (var_1_61 == ((signed long int) (max (var_1_35 , var_1_24)))) : 1)) && (var_1_84 ? ((var_1_83 > (var_1_13 % var_1_36)) ? (var_1_63 == ((unsigned long int) (var_1_65 - (max ((min (var_1_14 , var_1_43)) , (abs (var_1_34))))))) : (var_1_63 == ((unsigned long int) (((var_1_66 + var_1_67) - var_1_32) - var_1_72)))) : (var_1_101 ? (var_1_63 == ((unsigned long int) (var_1_65 - var_1_13))) : (var_1_63 == ((unsigned long int) (min (var_1_65 , var_1_66))))))) && ((var_1_62 < (min (var_1_92 , (var_1_52 + var_1_79)))) ? ((var_1_84 || var_1_76) ? (var_1_68 == ((signed short int) ((abs (var_1_35)) + -16))) : (((1 / var_1_69) != (var_1_55 + (var_1_27 - var_1_43))) ? ((var_1_92 >= (- var_1_19)) ? (var_1_68 == ((signed short int) (-1 + var_1_106))) : (((var_1_36 - var_1_34) != (max (-2 , var_1_72))) ? (var_1_68 == ((signed short int) (var_1_33 - var_1_39))) : (var_1_68 == ((signed short int) (((var_1_13 + var_1_31) + var_1_82) - var_1_34))))) : (((var_1_49 - (6.674752239675677E18 - var_1_50)) >= (var_1_51 - var_1_16)) ? (var_1_101 ? (var_1_68 == ((signed short int) (var_1_14 - var_1_34))) : (var_1_68 == ((signed short int) (min (var_1_106 , -32))))) : (var_1_68 == ((signed short int) (min (var_1_34 , (min (var_1_106 , 128))))))))) : (var_1_68 == ((signed short int) (var_1_106 + (var_1_11 + var_1_97)))))) && ((var_1_43 > (8 / var_1_39)) ? (((var_1_14 * var_1_55) != var_1_12) ? (var_1_71 == ((double) ((var_1_53 + var_1_52) + var_1_51))) : 1) : 1)) && ((var_1_20 < (var_1_29 + var_1_13)) ? (var_1_72 == ((unsigned long int) var_1_44)) : (var_1_72 == ((unsigned long int) ((max (var_1_65 , var_1_73)) - var_1_23))))) && ((((max (var_1_50 , last_1_var_1_92)) > last_1_var_1_15) || (var_1_62 < (var_1_52 + var_1_19))) ? (var_1_74 == ((unsigned char) ((last_1_var_1_20 > last_1_var_1_78) || (! var_1_60)))) : 1)) && (var_1_101 ? (((var_1_28 * var_1_13) > (var_1_23 / (abs (-200)))) ? ((var_1_103 >= 4) ? (((var_1_14 + (var_1_61 + 10)) < var_1_57) ? (var_1_75 == ((signed char) ((var_1_37 + var_1_31) - (1 + var_1_33)))) : (var_1_75 == ((signed char) (min (var_1_32 , (var_1_36 - var_1_14)))))) : (var_1_75 == ((signed char) (var_1_31 + var_1_35)))) : 1) : (var_1_75 == ((signed char) (abs (var_1_32)))))) && (var_1_60 ? ((var_1_19 >= var_1_62) ? (var_1_76 == ((unsigned char) var_1_77)) : (var_1_76 == ((unsigned char) (var_1_80 || var_1_77)))) : 1)) && (var_1_74 ? (var_1_78 == ((signed long int) var_1_39)) : (var_1_78 == ((signed long int) var_1_90)))) && (((var_1_67 / var_1_31) < var_1_103) ? (var_1_79 == ((float) (var_1_51 + (max (var_1_50 , var_1_49))))) : ((! (var_1_90 < var_1_69)) ? (var_1_79 == ((float) (max (var_1_53 , var_1_19)))) : 1))) && (var_1_80 == ((unsigned char) (((var_1_61 > var_1_104) && var_1_60) || var_1_81)))) && ((((abs (var_1_97)) <= -256) && (0.09999999999999998f >= var_1_15)) ? (var_1_82 == ((unsigned char) (max ((var_1_55 - var_1_13) , var_1_37)))) : (var_1_82 == ((unsigned char) (abs (128)))))) && ((var_1_20 <= ((max (var_1_32 , var_1_28)) + var_1_14)) ? (var_1_83 == ((unsigned long int) (max ((var_1_73 - (max (var_1_32 , var_1_45))) , 8u)))) : (var_1_83 == ((unsigned long int) (var_1_65 - ((var_1_69 + var_1_43) + var_1_17)))))) && ((last_1_var_1_79 <= (- last_1_var_1_71)) ? (var_1_81 ? (var_1_84 == ((unsigned char) var_1_77)) : (var_1_84 == ((unsigned char) (! ((! var_1_60) && var_1_77))))) : 1)) && ((! (! (var_1_104 < var_1_35))) ? (var_1_85 == ((unsigned long int) (var_1_86 - (min (var_1_27 , var_1_66))))) : ((var_1_72 < (var_1_61 * var_1_63)) ? (((- var_1_83) <= var_1_61) ? (var_1_85 == ((unsigned long int) ((max (var_1_104 , var_1_34)) + (abs (var_1_32))))) : 1) : (var_1_85 == ((unsigned long int) (var_1_73 - ((var_1_87 - var_1_33) + (var_1_88 - var_1_37)))))))) && ((var_1_26 < var_1_9) ? ((var_1_40 <= var_1_24) ? ((var_1_29 == ((5 / var_1_40) / var_1_31)) ? (var_1_89 == ((double) (var_1_49 - (var_1_19 + var_1_50)))) : (((var_1_11 / var_1_31) > (var_1_67 / var_1_69)) ? (((- 10) > ((var_1_43 ^ var_1_85) ^ (var_1_104 + var_1_24))) ? (var_1_89 == ((double) (var_1_52 - var_1_50))) : (var_1_89 == ((double) (var_1_19 + (16.8 - var_1_49))))) : (var_1_89 == ((double) var_1_52)))) : 1) : ((100 >= var_1_34) ? (var_1_89 == ((double) (min (var_1_53 , (var_1_49 + var_1_19))))) : (var_1_89 == ((double) 499.5))))) && (var_1_90 == ((unsigned long int) var_1_27))) && (var_1_60 ? (var_1_91 == ((signed long int) 16)) : (var_1_91 == ((signed long int) var_1_55)))) && (var_1_76 ? (var_1_92 == ((double) var_1_49)) : 1)) && (var_1_60 ? (var_1_93 == ((double) var_1_50)) : 1)) && (var_1_74 ? (var_1_94 == ((unsigned short int) 8)) : 1)) && (var_1_95 == ((signed char) var_1_34))) && (var_1_96 == ((signed char) var_1_32))) && (var_1_101 ? (var_1_97 == ((signed short int) var_1_33)) : (var_1_97 == ((signed short int) var_1_28)))) && (var_1_98 == ((float) var_1_52))) && (var_1_76 ? (var_1_99 == ((double) var_1_49)) : (var_1_99 == ((double) var_1_53)))) && (var_1_84 ? (var_1_100 == ((double) var_1_52)) : 1)) && (var_1_76 ? (var_1_101 == ((unsigned char) var_1_60)) : 1)) && (var_1_60 ? (var_1_102 == ((double) var_1_53)) : 1)) && (var_1_74 ? (var_1_103 == ((unsigned long int) var_1_63)) : 1)) && (var_1_84 ? (var_1_104 == ((unsigned long int) var_1_73)) : 1)) && ((! var_1_59) ? (var_1_105 == ((signed char) (min ((min (var_1_33 , (max (var_1_31 , var_1_14)))) , var_1_32)))) : (var_1_105 == ((signed char) ((var_1_37 - var_1_35) + var_1_33))))) && (var_1_106 == ((signed short int) var_1_33))
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
