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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch26Amount500.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 1;
unsigned short int var_1_3 = 36007;
unsigned short int var_1_4 = 2;
unsigned short int var_1_5 = 32;
unsigned short int var_1_6 = 128;
unsigned char var_1_8 = 2;
unsigned short int var_1_9 = 22889;
unsigned short int var_1_10 = 20766;
signed short int var_1_11 = -4;
unsigned char var_1_12 = 10;
unsigned char var_1_13 = 8;
unsigned char var_1_14 = 1;
signed long int var_1_15 = 16;
signed char var_1_16 = -10;
signed char var_1_17 = -10;
signed char var_1_18 = 1;
signed char var_1_19 = 0;
signed char var_1_20 = -5;
unsigned char var_1_21 = 0;
signed char var_1_24 = 25;
signed char var_1_25 = 2;
signed char var_1_26 = -4;
signed char var_1_27 = 16;
signed char var_1_28 = 1;
signed char var_1_29 = 64;
signed long int var_1_30 = 2;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
double var_1_34 = 99999999999999.6;
double var_1_35 = 0.0;
double var_1_36 = 128.3;
double var_1_37 = 100.8;
double var_1_38 = 127.5;
signed long int var_1_39 = 50;
unsigned char var_1_40 = 16;
unsigned char var_1_42 = 128;
signed long int var_1_43 = 128;
signed long int var_1_45 = -1000;
unsigned char var_1_46 = 64;
unsigned char var_1_47 = 16;
signed long int var_1_48 = 1888596135;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 1;
signed short int var_1_51 = 128;
signed char var_1_53 = -8;
signed char var_1_54 = 5;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 128;
unsigned char var_1_57 = 100;
unsigned char var_1_58 = 64;
unsigned char var_1_59 = 32;
unsigned short int var_1_60 = 1;
unsigned short int var_1_61 = 61903;
unsigned short int var_1_62 = 10000;
unsigned long int var_1_63 = 128;
float var_1_64 = 0.0;
unsigned short int var_1_65 = 16;
unsigned short int var_1_66 = 5;
signed short int var_1_68 = 100;
double var_1_70 = 256.5;
double var_1_71 = 32.125;
double var_1_72 = 7.4;
unsigned short int var_1_73 = 16;
signed long int var_1_75 = -16;
signed long int var_1_76 = -4;
unsigned long int var_1_77 = 8;
unsigned long int var_1_78 = 2786731693;
signed short int var_1_79 = 100;
signed short int var_1_80 = 64;
float var_1_81 = 99999999.4;
float var_1_82 = 128.4;
float var_1_83 = 3.75;
double var_1_84 = 2.8;
float var_1_85 = 64.2;
unsigned long int var_1_86 = 1;
unsigned long int var_1_87 = 3377825598;
double var_1_88 = 7.375;
unsigned char var_1_89 = 4;
unsigned char var_1_90 = 25;
double var_1_91 = 200.625;
signed long int var_1_92 = -64;
signed long int var_1_93 = 1000000000;
unsigned short int var_1_94 = 4;
signed long int var_1_95 = 2;
signed long int var_1_96 = 1;
unsigned short int var_1_97 = 22299;
unsigned char var_1_98 = 8;
unsigned char var_1_99 = 100;
unsigned long int var_1_100 = 256;
unsigned short int var_1_101 = 200;
unsigned short int var_1_102 = 32;
unsigned long int var_1_103 = 5;
unsigned short int var_1_104 = 256;
signed long int var_1_105 = 2;
signed short int var_1_106 = 256;
signed short int var_1_107 = -8;
signed char var_1_108 = -2;
unsigned long int var_1_109 = 64;
signed char var_1_110 = -10;
signed char var_1_111 = -32;
unsigned long int var_1_112 = 32;
signed char var_1_113 = -128;
unsigned char var_1_114 = 128;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 1;
signed long int last_1_var_1_30 = 2;
signed long int last_1_var_1_39 = 50;
unsigned char last_1_var_1_49 = 0;
unsigned char last_1_var_1_55 = 1;
unsigned char last_1_var_1_56 = 128;
unsigned short int last_1_var_1_60 = 1;
signed short int last_1_var_1_68 = 100;
unsigned short int last_1_var_1_73 = 16;
signed long int last_1_var_1_75 = -16;
unsigned long int last_1_var_1_77 = 8;
unsigned long int last_1_var_1_86 = 1;
unsigned short int last_1_var_1_94 = 4;
unsigned long int last_1_var_1_103 = 5;
signed long int last_1_var_1_105 = 2;
signed short int last_1_var_1_106 = 256;
signed short int last_1_var_1_107 = -8;
unsigned long int last_1_var_1_112 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req25Batch26Amount500
	if (var_1_5 < var_1_61) {
		if (last_1_var_1_56 < -128) {
			var_1_68 = var_1_59;
		} else {
			var_1_68 = (max ((var_1_47 - last_1_var_1_75) , last_1_var_1_1));
		}
	}


	// From: Req28Batch26Amount500
	signed long int stepLocal_16 = last_1_var_1_73;
	signed long int stepLocal_15 = abs (50);
	signed long int stepLocal_14 = last_1_var_1_39;
	if (stepLocal_16 >= (last_1_var_1_107 + last_1_var_1_105)) {
		if (stepLocal_14 <= last_1_var_1_103) {
			if ((var_1_13 + var_1_10) <= stepLocal_15) {
				var_1_75 = ((max ((abs (last_1_var_1_30)) , (last_1_var_1_103 + var_1_5))) - (var_1_62 + 128));
			}
		} else {
			var_1_75 = (last_1_var_1_77 + (min (var_1_76 , last_1_var_1_94)));
		}
	}


	// From: Req29Batch26Amount500
	var_1_77 = (var_1_78 - last_1_var_1_60);


	// From: Req8Batch26Amount500
	unsigned char stepLocal_6 = var_1_10 < var_1_28;
	if (stepLocal_6 || (var_1_27 > var_1_77)) {
		var_1_29 = (var_1_20 + var_1_26);
	} else {
		var_1_29 = (var_1_27 - (min (var_1_18 , var_1_28)));
	}


	// From: Req27Batch26Amount500
	if ((var_1_57 & (var_1_5 % var_1_9)) <= (min (var_1_19 , last_1_var_1_77))) {
		if (var_1_9 != (min (last_1_var_1_103 , last_1_var_1_73))) {
			var_1_73 = ((var_1_9 + var_1_10) - var_1_4);
		} else {
			var_1_73 = (min ((min (last_1_var_1_68 , var_1_6)) , 32));
		}
	}


	// From: Req19Batch26Amount500
	unsigned char stepLocal_12 = var_1_46;
	unsigned long int stepLocal_11 = last_1_var_1_103 * (min (last_1_var_1_112 , last_1_var_1_75));
	if (stepLocal_11 > last_1_var_1_106) {
		if (stepLocal_12 <= var_1_28) {
			var_1_55 = ((256 >= -50) || var_1_50);
		} else {
			var_1_55 = (! var_1_33);
		}
	}


	// From: Req16Batch26Amount500
	if (last_1_var_1_55 && last_1_var_1_49) {
		var_1_49 = var_1_50;
	} else {
		var_1_49 = (! 1);
	}


	// From: Req23Batch26Amount500
	signed long int stepLocal_13 = 128;
	if (! var_1_49) {
		if (var_1_57 < stepLocal_13) {
			var_1_65 = 2;
		} else {
			var_1_65 = (max (32 , var_1_4));
		}
	}


	// From: Req4Batch26Amount500
	if (var_1_10 != var_1_5) {
		if (var_1_49) {
			var_1_15 = var_1_8;
		}
	}


	// From: Req20Batch26Amount500
	if (var_1_49) {
		var_1_56 = (((abs (var_1_57)) + var_1_58) - ((32 + var_1_59) - var_1_28));
	} else {
		if (var_1_49) {
			var_1_56 = (var_1_42 - (var_1_54 + 16));
		} else {
			var_1_56 = var_1_58;
		}
	}


	// From: Req46Batch26Amount500
	if (var_1_49) {
		var_1_105 = last_1_var_1_105;
	} else {
		var_1_105 = var_1_9;
	}


	// From: Req53Batch26Amount500
	if (var_1_49) {
		var_1_112 = var_1_27;
	}


	// From: Req45Batch26Amount500
	var_1_104 = var_1_15;


	// From: Req7Batch26Amount500
	signed char stepLocal_5 = var_1_19;
	signed long int stepLocal_4 = (min (var_1_18 , var_1_14)) - var_1_13;
	if (var_1_19 < stepLocal_4) {
		if (2 > stepLocal_5) {
			var_1_24 = (((var_1_25 + var_1_26) + (var_1_27 - var_1_28)) + var_1_19);
		} else {
			var_1_24 = (64 - (var_1_27 + var_1_28));
		}
	}


	// From: Req13Batch26Amount500
	if ((var_1_28 + var_1_112) < (var_1_8 + -8)) {
		var_1_40 = 128;
	} else {
		if (var_1_6 >= (var_1_10 << var_1_25)) {
			var_1_40 = (max (var_1_18 , (abs (var_1_42 - var_1_13))));
		}
	}


	// From: Req17Batch26Amount500
	if (var_1_55) {
		var_1_51 = (min ((max (var_1_15 , var_1_46)) , (4 + (var_1_28 + var_1_25))));
	}


	// From: Req31Batch26Amount500
	if (((var_1_13 + var_1_58) - (min (var_1_47 , var_1_9))) <= var_1_105) {
		if ((min (var_1_35 , var_1_36)) >= var_1_71) {
			if (var_1_105 <= var_1_14) {
				var_1_81 = (var_1_36 - var_1_35);
			} else {
				var_1_81 = ((var_1_36 + var_1_82) - (5.767949054781639E18f - var_1_83));
			}
		} else {
			var_1_81 = var_1_83;
		}
	}


	// From: Req32Batch26Amount500
	var_1_84 = (var_1_83 - (var_1_36 + var_1_82));


	// From: Req33Batch26Amount500
	var_1_85 = ((min (var_1_38 , var_1_82)) + (min (var_1_71 , var_1_36)));


	// From: Req35Batch26Amount500
	if ((var_1_35 - var_1_83) >= var_1_37) {
		var_1_88 = ((var_1_82 + var_1_83) - var_1_37);
	} else {
		var_1_88 = (min (var_1_36 , var_1_71));
	}


	// From: Req36Batch26Amount500
	unsigned char stepLocal_20 = var_1_59;
	if (var_1_6 > stepLocal_20) {
		var_1_89 = var_1_13;
	} else {
		var_1_89 = ((max (var_1_57 , var_1_18)) + var_1_14);
	}


	// From: Req37Batch26Amount500
	if (var_1_55) {
		if (! var_1_50) {
			var_1_90 = (abs (var_1_54));
		} else {
			var_1_90 = (max (var_1_18 , var_1_58));
		}
	}


	// From: Req38Batch26Amount500
	if (var_1_83 > var_1_84) {
		var_1_91 = var_1_38;
	} else {
		var_1_91 = (var_1_82 - var_1_37);
	}


	// From: Req42Batch26Amount500
	var_1_100 = (max ((var_1_87 - var_1_8) , var_1_97));


	// From: Req48Batch26Amount500
	var_1_107 = var_1_57;


	// From: Req51Batch26Amount500
	var_1_110 = var_1_26;


	// From: Req52Batch26Amount500
	if (var_1_49) {
		var_1_111 = var_1_17;
	}


	// From: Req15Batch26Amount500
	if (var_1_17 < var_1_100) {
		if (((var_1_9 << var_1_100) / (var_1_46 + var_1_47)) <= (var_1_100 - var_1_107)) {
			var_1_45 = (2 - var_1_89);
		}
	} else {
		if (var_1_25 != (abs (var_1_28 + var_1_27))) {
			if (var_1_18 < (10 - var_1_27)) {
				var_1_45 = (var_1_42 - (var_1_48 - var_1_18));
			} else {
				if ((var_1_27 / var_1_6) <= (max (var_1_4 , var_1_3))) {
					var_1_45 = var_1_17;
				} else {
					var_1_45 = (min (var_1_47 , var_1_20));
				}
			}
		} else {
			var_1_45 = (var_1_73 - (var_1_48 - var_1_8));
		}
	}


	// From: Req39Batch26Amount500
	unsigned long int stepLocal_22 = var_1_87;
	signed char stepLocal_21 = var_1_18;
	if (var_1_55) {
		var_1_92 = (var_1_48 - ((1000000000 + var_1_93) - var_1_45));
	} else {
		if (var_1_73 == stepLocal_21) {
			if (stepLocal_22 > 8u) {
				var_1_92 = (abs (var_1_9));
			} else {
				var_1_92 = (max (var_1_62 , var_1_56));
			}
		} else {
			var_1_92 = var_1_93;
		}
	}


	// From: Req44Batch26Amount500
	if (var_1_55) {
		var_1_103 = var_1_42;
	} else {
		var_1_103 = var_1_105;
	}


	// From: Req10Batch26Amount500
	if (var_1_49) {
		var_1_32 = ((var_1_112 >= var_1_27) && var_1_33);
	} else {
		var_1_32 = (var_1_49 || (! var_1_33));
	}


	// From: Req47Batch26Amount500
	if (var_1_32) {
		var_1_106 = var_1_59;
	} else {
		var_1_106 = var_1_110;
	}


	// From: Req26Batch26Amount500
	if (var_1_32) {
		var_1_70 = (max ((var_1_36 + 24.6) , (var_1_38 + (var_1_71 + var_1_72))));
	}


	// From: Req5Batch26Amount500
	signed long int stepLocal_3 = abs (10);
	signed long int stepLocal_2 = var_1_13 + (max (var_1_92 , -5));
	unsigned short int stepLocal_1 = var_1_10;
	if (stepLocal_2 != var_1_8) {
		if (var_1_8 > stepLocal_1) {
			if (stepLocal_3 > var_1_40) {
				var_1_16 = ((abs (var_1_17)) - var_1_18);
			}
		} else {
			var_1_16 = (var_1_19 + var_1_20);
		}
	} else {
		var_1_16 = (max (var_1_18 , var_1_20));
	}


	// From: Req11Batch26Amount500
	unsigned short int stepLocal_8 = var_1_4;
	unsigned short int stepLocal_7 = var_1_3;
	if (stepLocal_8 != ((var_1_3 - var_1_40) / var_1_8)) {
		if (stepLocal_7 == var_1_45) {
			var_1_34 = ((var_1_35 - var_1_36) - var_1_37);
		} else {
			var_1_34 = (var_1_36 - var_1_35);
		}
	} else {
		var_1_34 = (min ((var_1_36 + var_1_38) , var_1_37));
	}


	// From: Req18Batch26Amount500
	signed long int stepLocal_10 = ~ var_1_92;
	if (stepLocal_10 <= var_1_13) {
		var_1_53 = (min (((var_1_28 - var_1_27) + var_1_26) , (min (var_1_19 , var_1_20))));
	} else {
		var_1_53 = (var_1_27 + (var_1_28 - var_1_54));
	}


	// From: Req22Batch26Amount500
	if (((var_1_64 - var_1_36) - var_1_35) <= var_1_88) {
		var_1_63 = (max (var_1_48 , var_1_40));
	}


	// From: Req41Batch26Amount500
	if (var_1_32) {
		var_1_98 = (min (var_1_96 , var_1_28));
	} else {
		var_1_98 = (((var_1_99 - var_1_95) - (5 + var_1_27)) + (var_1_57 - var_1_28));
	}


	// From: Req49Batch26Amount500
	if (var_1_32) {
		var_1_108 = var_1_54;
	} else {
		var_1_108 = var_1_96;
	}


	// From: Req54Batch26Amount500
	if (var_1_49 || var_1_32) {
		if (var_1_57 >= ((max (var_1_42 , var_1_114)) - var_1_47)) {
			var_1_113 = (var_1_96 - var_1_54);
		}
	} else {
		var_1_113 = -5;
	}


	// From: Req1Batch26Amount500
	if (! var_1_32) {
		if (var_1_32) {
			var_1_1 = (var_1_3 - var_1_4);
		} else {
			if (var_1_3 < (var_1_4 / (var_1_5 + var_1_6))) {
				if ((max (var_1_6 , var_1_4)) >= var_1_5) {
					var_1_1 = (max ((abs (var_1_4)) , var_1_3));
				} else {
					var_1_1 = var_1_3;
				}
			}
		}
	} else {
		if (var_1_68 > (var_1_6 / var_1_8)) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = ((min ((var_1_9 + var_1_10) , var_1_3)) - var_1_8);
		}
	}


	// From: Req9Batch26Amount500
	if (! (var_1_6 > var_1_75)) {
		if (var_1_49 || var_1_55) {
			if (var_1_49) {
				if (var_1_5 != var_1_104) {
					var_1_30 = (((min (var_1_18 , var_1_20)) + var_1_8) + var_1_17);
				} else {
					var_1_30 = (var_1_18 + ((var_1_28 - var_1_4) + (2 - 8)));
				}
			}
		}
	} else {
		if (var_1_65 < (var_1_45 ^ 25)) {
			if (var_1_55 || var_1_49) {
				var_1_30 = var_1_26;
			} else {
				var_1_30 = var_1_27;
			}
		}
	}


	// From: Req50Batch26Amount500
	if (var_1_32) {
		var_1_109 = var_1_77;
	} else {
		var_1_109 = var_1_45;
	}


	// From: Req24Batch26Amount500
	if (var_1_49) {
		var_1_66 = ((max ((abs (61567)) , var_1_3)) - var_1_47);
	} else {
		if (((- var_1_36) / var_1_64) > (var_1_37 - var_1_35)) {
			if ((var_1_64 * var_1_38) <= var_1_70) {
				var_1_66 = (var_1_3 - ((10000 - var_1_59) + var_1_27));
			}
		}
	}


	// From: Req2Batch26Amount500
	if (var_1_32) {
		var_1_11 = (var_1_66 - var_1_8);
	}


	// From: Req3Batch26Amount500
	unsigned short int stepLocal_0 = var_1_10;
	if (var_1_11 >= stepLocal_0) {
		var_1_12 = (var_1_13 + var_1_14);
	}


	// From: Req30Batch26Amount500
	unsigned char stepLocal_19 = var_1_58;
	unsigned long int stepLocal_18 = var_1_109;
	signed long int stepLocal_17 = var_1_18 + var_1_19;
	if (stepLocal_18 <= var_1_15) {
		if (stepLocal_19 > var_1_92) {
			if (16 != stepLocal_17) {
				var_1_79 = ((var_1_46 + var_1_15) - var_1_80);
			}
		}
	} else {
		var_1_79 = (abs (max ((256 - var_1_14) , 4)));
	}


	// From: Req40Batch26Amount500
	if (var_1_79 == var_1_65) {
		if ((var_1_28 << (min (var_1_95 , var_1_96))) == var_1_6) {
			if ((var_1_62 + var_1_9) >= var_1_48) {
				var_1_94 = (var_1_62 + (var_1_95 + var_1_8));
			} else {
				var_1_94 = ((var_1_10 + var_1_97) - var_1_92);
			}
		} else {
			var_1_94 = (max ((max (var_1_66 , var_1_106)) , (var_1_61 - (var_1_10 - last_1_var_1_94))));
		}
	}


	// From: Req43Batch26Amount500
	if (var_1_55) {
		if (var_1_12 <= -2) {
			if (var_1_50) {
				if (var_1_11 > var_1_94) {
					if ((var_1_45 | (var_1_75 + var_1_48)) >= var_1_45) {
						if (var_1_32) {
							var_1_101 = var_1_57;
						}
					}
				}
			}
		} else {
			var_1_101 = var_1_102;
		}
	} else {
		var_1_101 = 5;
	}


	// From: Req12Batch26Amount500
	if ((- 4.5f) >= (max (var_1_37 , var_1_36))) {
		var_1_39 = (min (100 , (var_1_29 + var_1_20)));
	} else {
		if (var_1_3 >= var_1_6) {
			var_1_39 = (var_1_9 + var_1_29);
		} else {
			var_1_39 = (var_1_14 - ((max (var_1_94 , var_1_18)) + var_1_13));
		}
	}


	// From: Req14Batch26Amount500
	signed long int stepLocal_9 = var_1_65 * 5;
	if (var_1_8 > stepLocal_9) {
		if (var_1_33) {
			var_1_43 = (var_1_73 - var_1_27);
		} else {
			var_1_43 = var_1_39;
		}
	}


	// From: Req21Batch26Amount500
	if (var_1_33) {
		if (var_1_27 < var_1_5) {
			if (var_1_43 > var_1_57) {
				if ((var_1_24 > var_1_26) || var_1_55) {
					var_1_60 = (max ((max (var_1_58 , 256)) , var_1_42));
				} else {
					var_1_60 = (min ((32 + (min (var_1_47 , var_1_92))) , var_1_4));
				}
			} else {
				var_1_60 = (((var_1_61 - var_1_18) - (var_1_62 - var_1_13)) - var_1_46);
			}
		} else {
			var_1_60 = ((var_1_59 + var_1_47) + last_1_var_1_60);
		}
	}


	// From: Req6Batch26Amount500
	if (var_1_32) {
		if (var_1_101 > var_1_77) {
			var_1_21 = (min ((var_1_13 + var_1_14) , var_1_18));
		}
	}


	// From: Req34Batch26Amount500
	if ((- (- var_1_39)) <= (var_1_18 - last_1_var_1_86)) {
		var_1_86 = ((max (var_1_78 , (var_1_87 - var_1_80))) - (var_1_48 - var_1_46));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 32767);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 32768);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 255);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 16383);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 16384);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -126);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -15);
	assume_abort_if_not(var_1_25 <= 16);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -15);
	assume_abort_if_not(var_1_26 <= 16);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 31);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 31);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 4611686.018427383000e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -461168.6018427383000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 127);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 128);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_48 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_48 >= 1073741823);
	assume_abort_if_not(var_1_48 <= 2147483646);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 63);
	assume_abort_if_not(var_1_57 <= 127);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 64);
	assume_abort_if_not(var_1_58 <= 127);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 32);
	assume_abort_if_not(var_1_59 <= 63);
	var_1_61 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_61 >= 57342);
	assume_abort_if_not(var_1_61 <= 65534);
	var_1_62 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_62 >= 8191);
	assume_abort_if_not(var_1_62 <= 16383);
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= 4611686.018427388000e+12F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854776000e+12F && var_1_64 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= -230584.3009213691400e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691400e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= -230584.3009213691400e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691400e+12F && var_1_72 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_76 >= -1073741823);
	assume_abort_if_not(var_1_76 <= 1073741823);
	var_1_78 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_78 >= 2147483647);
	assume_abort_if_not(var_1_78 <= 4294967294);
	var_1_80 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 32766);
	var_1_82 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_82 >= 0.0F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 4611686.018427383000e+12F && var_1_82 >= 1.0e-20F ));
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 4611686.018427383000e+12F && var_1_83 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_87 >= 3221225470);
	assume_abort_if_not(var_1_87 <= 4294967294);
	var_1_93 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_93 >= 536870912);
	assume_abort_if_not(var_1_93 <= 1073741823);
	var_1_95 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 2);
	var_1_96 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 2);
	var_1_97 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_97 >= 16384);
	assume_abort_if_not(var_1_97 <= 32767);
	var_1_99 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_99 >= 95);
	assume_abort_if_not(var_1_99 <= 127);
	var_1_102 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_102 >= 0);
	assume_abort_if_not(var_1_102 <= 65534);
	var_1_114 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_114 >= 127);
	assume_abort_if_not(var_1_114 <= 255);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_105 = var_1_105;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_112 = var_1_112;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((! var_1_32) ? (var_1_32 ? (var_1_1 == ((unsigned short int) (var_1_3 - var_1_4))) : ((var_1_3 < (var_1_4 / (var_1_5 + var_1_6))) ? (((max (var_1_6 , var_1_4)) >= var_1_5) ? (var_1_1 == ((unsigned short int) (max ((abs (var_1_4)) , var_1_3)))) : (var_1_1 == ((unsigned short int) var_1_3))) : 1)) : ((var_1_68 > (var_1_6 / var_1_8)) ? (var_1_1 == ((unsigned short int) var_1_6)) : (var_1_1 == ((unsigned short int) ((min ((var_1_9 + var_1_10) , var_1_3)) - var_1_8))))) && (var_1_32 ? (var_1_11 == ((signed short int) (var_1_66 - var_1_8))) : 1)) && ((var_1_11 >= var_1_10) ? (var_1_12 == ((unsigned char) (var_1_13 + var_1_14))) : 1)) && ((var_1_10 != var_1_5) ? (var_1_49 ? (var_1_15 == ((signed long int) var_1_8)) : 1) : 1)) && (((var_1_13 + (max (var_1_92 , -5))) != var_1_8) ? ((var_1_8 > var_1_10) ? (((abs (10)) > var_1_40) ? (var_1_16 == ((signed char) ((abs (var_1_17)) - var_1_18))) : 1) : (var_1_16 == ((signed char) (var_1_19 + var_1_20)))) : (var_1_16 == ((signed char) (max (var_1_18 , var_1_20)))))) && (var_1_32 ? ((var_1_101 > var_1_77) ? (var_1_21 == ((unsigned char) (min ((var_1_13 + var_1_14) , var_1_18)))) : 1) : 1)) && ((var_1_19 < ((min (var_1_18 , var_1_14)) - var_1_13)) ? ((2 > var_1_19) ? (var_1_24 == ((signed char) (((var_1_25 + var_1_26) + (var_1_27 - var_1_28)) + var_1_19))) : (var_1_24 == ((signed char) (64 - (var_1_27 + var_1_28))))) : 1)) && (((var_1_10 < var_1_28) || (var_1_27 > var_1_77)) ? (var_1_29 == ((signed char) (var_1_20 + var_1_26))) : (var_1_29 == ((signed char) (var_1_27 - (min (var_1_18 , var_1_28))))))) && ((! (var_1_6 > var_1_75)) ? ((var_1_49 || var_1_55) ? (var_1_49 ? ((var_1_5 != var_1_104) ? (var_1_30 == ((signed long int) (((min (var_1_18 , var_1_20)) + var_1_8) + var_1_17))) : (var_1_30 == ((signed long int) (var_1_18 + ((var_1_28 - var_1_4) + (2 - 8)))))) : 1) : 1) : ((var_1_65 < (var_1_45 ^ 25)) ? ((var_1_55 || var_1_49) ? (var_1_30 == ((signed long int) var_1_26)) : (var_1_30 == ((signed long int) var_1_27))) : 1))) && (var_1_49 ? (var_1_32 == ((unsigned char) ((var_1_112 >= var_1_27) && var_1_33))) : (var_1_32 == ((unsigned char) (var_1_49 || (! var_1_33)))))) && ((var_1_4 != ((var_1_3 - var_1_40) / var_1_8)) ? ((var_1_3 == var_1_45) ? (var_1_34 == ((double) ((var_1_35 - var_1_36) - var_1_37))) : (var_1_34 == ((double) (var_1_36 - var_1_35)))) : (var_1_34 == ((double) (min ((var_1_36 + var_1_38) , var_1_37)))))) && (((- 4.5f) >= (max (var_1_37 , var_1_36))) ? (var_1_39 == ((signed long int) (min (100 , (var_1_29 + var_1_20))))) : ((var_1_3 >= var_1_6) ? (var_1_39 == ((signed long int) (var_1_9 + var_1_29))) : (var_1_39 == ((signed long int) (var_1_14 - ((max (var_1_94 , var_1_18)) + var_1_13))))))) && (((var_1_28 + var_1_112) < (var_1_8 + -8)) ? (var_1_40 == ((unsigned char) 128)) : ((var_1_6 >= (var_1_10 << var_1_25)) ? (var_1_40 == ((unsigned char) (max (var_1_18 , (abs (var_1_42 - var_1_13)))))) : 1))) && ((var_1_8 > (var_1_65 * 5)) ? (var_1_33 ? (var_1_43 == ((signed long int) (var_1_73 - var_1_27))) : (var_1_43 == ((signed long int) var_1_39))) : 1)) && ((var_1_17 < var_1_100) ? ((((var_1_9 << var_1_100) / (var_1_46 + var_1_47)) <= (var_1_100 - var_1_107)) ? (var_1_45 == ((signed long int) (2 - var_1_89))) : 1) : ((var_1_25 != (abs (var_1_28 + var_1_27))) ? ((var_1_18 < (10 - var_1_27)) ? (var_1_45 == ((signed long int) (var_1_42 - (var_1_48 - var_1_18)))) : (((var_1_27 / var_1_6) <= (max (var_1_4 , var_1_3))) ? (var_1_45 == ((signed long int) var_1_17)) : (var_1_45 == ((signed long int) (min (var_1_47 , var_1_20)))))) : (var_1_45 == ((signed long int) (var_1_73 - (var_1_48 - var_1_8))))))) && ((last_1_var_1_55 && last_1_var_1_49) ? (var_1_49 == ((unsigned char) var_1_50)) : (var_1_49 == ((unsigned char) (! 1))))) && (var_1_55 ? (var_1_51 == ((signed short int) (min ((max (var_1_15 , var_1_46)) , (4 + (var_1_28 + var_1_25)))))) : 1)) && (((~ var_1_92) <= var_1_13) ? (var_1_53 == ((signed char) (min (((var_1_28 - var_1_27) + var_1_26) , (min (var_1_19 , var_1_20)))))) : (var_1_53 == ((signed char) (var_1_27 + (var_1_28 - var_1_54)))))) && (((last_1_var_1_103 * (min (last_1_var_1_112 , last_1_var_1_75))) > last_1_var_1_106) ? ((var_1_46 <= var_1_28) ? (var_1_55 == ((unsigned char) ((256 >= -50) || var_1_50))) : (var_1_55 == ((unsigned char) (! var_1_33)))) : 1)) && (var_1_49 ? (var_1_56 == ((unsigned char) (((abs (var_1_57)) + var_1_58) - ((32 + var_1_59) - var_1_28)))) : (var_1_49 ? (var_1_56 == ((unsigned char) (var_1_42 - (var_1_54 + 16)))) : (var_1_56 == ((unsigned char) var_1_58))))) && (var_1_33 ? ((var_1_27 < var_1_5) ? ((var_1_43 > var_1_57) ? (((var_1_24 > var_1_26) || var_1_55) ? (var_1_60 == ((unsigned short int) (max ((max (var_1_58 , 256)) , var_1_42)))) : (var_1_60 == ((unsigned short int) (min ((32 + (min (var_1_47 , var_1_92))) , var_1_4))))) : (var_1_60 == ((unsigned short int) (((var_1_61 - var_1_18) - (var_1_62 - var_1_13)) - var_1_46)))) : (var_1_60 == ((unsigned short int) ((var_1_59 + var_1_47) + last_1_var_1_60)))) : 1)) && ((((var_1_64 - var_1_36) - var_1_35) <= var_1_88) ? (var_1_63 == ((unsigned long int) (max (var_1_48 , var_1_40)))) : 1)) && ((! var_1_49) ? ((var_1_57 < 128) ? (var_1_65 == ((unsigned short int) 2)) : (var_1_65 == ((unsigned short int) (max (32 , var_1_4))))) : 1)) && (var_1_49 ? (var_1_66 == ((unsigned short int) ((max ((abs (61567)) , var_1_3)) - var_1_47))) : ((((- var_1_36) / var_1_64) > (var_1_37 - var_1_35)) ? (((var_1_64 * var_1_38) <= var_1_70) ? (var_1_66 == ((unsigned short int) (var_1_3 - ((10000 - var_1_59) + var_1_27)))) : 1) : 1))) && ((var_1_5 < var_1_61) ? ((last_1_var_1_56 < -128) ? (var_1_68 == ((signed short int) var_1_59)) : (var_1_68 == ((signed short int) (max ((var_1_47 - last_1_var_1_75) , last_1_var_1_1))))) : 1)) && (var_1_32 ? (var_1_70 == ((double) (max ((var_1_36 + 24.6) , (var_1_38 + (var_1_71 + var_1_72)))))) : 1)) && (((var_1_57 & (var_1_5 % var_1_9)) <= (min (var_1_19 , last_1_var_1_77))) ? ((var_1_9 != (min (last_1_var_1_103 , last_1_var_1_73))) ? (var_1_73 == ((unsigned short int) ((var_1_9 + var_1_10) - var_1_4))) : (var_1_73 == ((unsigned short int) (min ((min (last_1_var_1_68 , var_1_6)) , 32))))) : 1)) && ((last_1_var_1_73 >= (last_1_var_1_107 + last_1_var_1_105)) ? ((last_1_var_1_39 <= last_1_var_1_103) ? (((var_1_13 + var_1_10) <= (abs (50))) ? (var_1_75 == ((signed long int) ((max ((abs (last_1_var_1_30)) , (last_1_var_1_103 + var_1_5))) - (var_1_62 + 128)))) : 1) : (var_1_75 == ((signed long int) (last_1_var_1_77 + (min (var_1_76 , last_1_var_1_94)))))) : 1)) && (var_1_77 == ((unsigned long int) (var_1_78 - last_1_var_1_60)))) && ((var_1_109 <= var_1_15) ? ((var_1_58 > var_1_92) ? ((16 != (var_1_18 + var_1_19)) ? (var_1_79 == ((signed short int) ((var_1_46 + var_1_15) - var_1_80))) : 1) : 1) : (var_1_79 == ((signed short int) (abs (max ((256 - var_1_14) , 4))))))) && ((((var_1_13 + var_1_58) - (min (var_1_47 , var_1_9))) <= var_1_105) ? (((min (var_1_35 , var_1_36)) >= var_1_71) ? ((var_1_105 <= var_1_14) ? (var_1_81 == ((float) (var_1_36 - var_1_35))) : (var_1_81 == ((float) ((var_1_36 + var_1_82) - (5.767949054781639E18f - var_1_83))))) : (var_1_81 == ((float) var_1_83))) : 1)) && (var_1_84 == ((double) (var_1_83 - (var_1_36 + var_1_82))))) && (var_1_85 == ((float) ((min (var_1_38 , var_1_82)) + (min (var_1_71 , var_1_36)))))) && (((- (- var_1_39)) <= (var_1_18 - last_1_var_1_86)) ? (var_1_86 == ((unsigned long int) ((max (var_1_78 , (var_1_87 - var_1_80))) - (var_1_48 - var_1_46)))) : 1)) && (((var_1_35 - var_1_83) >= var_1_37) ? (var_1_88 == ((double) ((var_1_82 + var_1_83) - var_1_37))) : (var_1_88 == ((double) (min (var_1_36 , var_1_71)))))) && ((var_1_6 > var_1_59) ? (var_1_89 == ((unsigned char) var_1_13)) : (var_1_89 == ((unsigned char) ((max (var_1_57 , var_1_18)) + var_1_14))))) && (var_1_55 ? ((! var_1_50) ? (var_1_90 == ((unsigned char) (abs (var_1_54)))) : (var_1_90 == ((unsigned char) (max (var_1_18 , var_1_58))))) : 1)) && ((var_1_83 > var_1_84) ? (var_1_91 == ((double) var_1_38)) : (var_1_91 == ((double) (var_1_82 - var_1_37))))) && (var_1_55 ? (var_1_92 == ((signed long int) (var_1_48 - ((1000000000 + var_1_93) - var_1_45)))) : ((var_1_73 == var_1_18) ? ((var_1_87 > 8u) ? (var_1_92 == ((signed long int) (abs (var_1_9)))) : (var_1_92 == ((signed long int) (max (var_1_62 , var_1_56))))) : (var_1_92 == ((signed long int) var_1_93))))) && ((var_1_79 == var_1_65) ? (((var_1_28 << (min (var_1_95 , var_1_96))) == var_1_6) ? (((var_1_62 + var_1_9) >= var_1_48) ? (var_1_94 == ((unsigned short int) (var_1_62 + (var_1_95 + var_1_8)))) : (var_1_94 == ((unsigned short int) ((var_1_10 + var_1_97) - var_1_92)))) : (var_1_94 == ((unsigned short int) (max ((max (var_1_66 , var_1_106)) , (var_1_61 - (var_1_10 - last_1_var_1_94))))))) : 1)) && (var_1_32 ? (var_1_98 == ((unsigned char) (min (var_1_96 , var_1_28)))) : (var_1_98 == ((unsigned char) (((var_1_99 - var_1_95) - (5 + var_1_27)) + (var_1_57 - var_1_28)))))) && (var_1_100 == ((unsigned long int) (max ((var_1_87 - var_1_8) , var_1_97))))) && (var_1_55 ? ((var_1_12 <= -2) ? (var_1_50 ? ((var_1_11 > var_1_94) ? (((var_1_45 | (var_1_75 + var_1_48)) >= var_1_45) ? (var_1_32 ? (var_1_101 == ((unsigned short int) var_1_57)) : 1) : 1) : 1) : 1) : (var_1_101 == ((unsigned short int) var_1_102))) : (var_1_101 == ((unsigned short int) 5)))) && (var_1_55 ? (var_1_103 == ((unsigned long int) var_1_42)) : (var_1_103 == ((unsigned long int) var_1_105)))) && (var_1_104 == ((unsigned short int) var_1_15))) && (var_1_49 ? (var_1_105 == ((signed long int) last_1_var_1_105)) : (var_1_105 == ((signed long int) var_1_9)))) && (var_1_32 ? (var_1_106 == ((signed short int) var_1_59)) : (var_1_106 == ((signed short int) var_1_110)))) && (var_1_107 == ((signed short int) var_1_57))) && (var_1_32 ? (var_1_108 == ((signed char) var_1_54)) : (var_1_108 == ((signed char) var_1_96)))) && (var_1_32 ? (var_1_109 == ((unsigned long int) var_1_77)) : (var_1_109 == ((unsigned long int) var_1_45)))) && (var_1_110 == ((signed char) var_1_26))) && (var_1_49 ? (var_1_111 == ((signed char) var_1_17)) : 1)) && (var_1_49 ? (var_1_112 == ((unsigned long int) var_1_27)) : 1)) && ((var_1_49 || var_1_32) ? ((var_1_57 >= ((max (var_1_42 , var_1_114)) - var_1_47)) ? (var_1_113 == ((signed char) (var_1_96 - var_1_54))) : 1) : (var_1_113 == ((signed char) -5)))
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
