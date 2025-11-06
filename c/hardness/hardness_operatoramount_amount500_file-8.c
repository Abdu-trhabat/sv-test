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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch8Amount500.c", 13, "reach_error"); }
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
signed long int var_1_4 = -5;
float var_1_5 = 7.875;
float var_1_6 = 99.04;
signed long int var_1_7 = -2;
signed long int var_1_8 = 1227169815;
signed long int var_1_9 = 1000000000;
signed long int var_1_10 = 1203685913;
signed long int var_1_11 = 50;
unsigned short int var_1_12 = 8;
unsigned short int var_1_17 = 256;
unsigned short int var_1_18 = 8;
unsigned short int var_1_19 = 8;
unsigned short int var_1_20 = 8;
unsigned short int var_1_21 = 0;
unsigned short int var_1_22 = 10;
float var_1_23 = 3.42;
float var_1_24 = 256.4;
float var_1_25 = 63.8;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 8;
unsigned char var_1_28 = 10;
unsigned char var_1_29 = 2;
unsigned char var_1_30 = 128;
double var_1_31 = 1.6;
double var_1_32 = 2.75;
double var_1_33 = 5.4;
double var_1_34 = 9.5;
double var_1_35 = 0.0;
double var_1_36 = 128.125;
double var_1_37 = 256.25;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 1;
signed long int var_1_42 = 4;
unsigned long int var_1_43 = 32;
unsigned long int var_1_44 = 100;
unsigned long int var_1_45 = 4030508059;
unsigned char var_1_46 = 64;
signed long int var_1_47 = 8;
signed char var_1_48 = -8;
unsigned long int var_1_49 = 3370813675;
signed char var_1_50 = 16;
signed char var_1_51 = 32;
signed char var_1_52 = 5;
signed short int var_1_54 = 1;
signed char var_1_56 = -10;
double var_1_57 = 4.2;
double var_1_58 = 0.4;
double var_1_59 = 50.35;
double var_1_60 = 0.0;
double var_1_61 = 8.75;
double var_1_62 = 255.75;
unsigned long int var_1_63 = 1000000000;
unsigned long int var_1_64 = 1284163138;
signed short int var_1_65 = -256;
double var_1_66 = 8.375;
float var_1_67 = 4.9;
signed long int var_1_68 = 256;
signed long int var_1_69 = 10;
unsigned short int var_1_70 = 2;
unsigned short int var_1_71 = 28383;
unsigned short int var_1_72 = 17218;
unsigned short int var_1_73 = 24118;
unsigned short int var_1_75 = 43021;
unsigned char var_1_76 = 1;
unsigned char var_1_77 = 64;
unsigned short int var_1_78 = 8;
unsigned short int var_1_80 = 37779;
unsigned char var_1_81 = 1;
unsigned long int var_1_82 = 5;
float var_1_83 = 31.6;
signed short int var_1_84 = 2;
float var_1_85 = 24.8;
unsigned char var_1_86 = 0;
unsigned char var_1_88 = 0;
signed short int var_1_89 = 100;
float var_1_90 = 0.0;
unsigned short int var_1_91 = 256;
unsigned short int var_1_92 = 256;
signed char var_1_93 = 2;
unsigned long int var_1_94 = 1;
signed char var_1_95 = 1;
unsigned char var_1_96 = 8;
unsigned char var_1_97 = 8;
float var_1_98 = 10000000.5;
signed char var_1_99 = 10;
signed char var_1_100 = 32;
signed short int var_1_101 = 10;
signed long int var_1_102 = -4;
signed short int var_1_103 = 16;
signed long int var_1_104 = -10000;
signed long int var_1_105 = 25;
float var_1_106 = 127.25;
signed short int var_1_107 = 100;
signed long int var_1_108 = 2;
signed short int var_1_109 = -256;
double var_1_110 = 63.6;
unsigned char var_1_111 = 8;
unsigned char var_1_112 = 1;
float var_1_113 = 99999.5;
signed long int var_1_114 = -10;
float var_1_115 = 3.5;
signed long int var_1_116 = 25;
signed short int var_1_117 = -32;
double var_1_118 = 255.2;

// Calibration values

// Last'ed variables
double last_1_var_1_34 = 9.5;
unsigned char last_1_var_1_38 = 1;
signed short int last_1_var_1_65 = -256;
signed long int last_1_var_1_68 = 256;
unsigned short int last_1_var_1_70 = 2;
float last_1_var_1_98 = 10000000.5;
signed char last_1_var_1_99 = 10;
signed long int last_1_var_1_108 = 2;
signed short int last_1_var_1_109 = -256;
double last_1_var_1_110 = 63.6;
signed long int last_1_var_1_114 = -10;
float last_1_var_1_115 = 3.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch8Amount500
	unsigned char stepLocal_1 = (var_1_6 - var_1_5) < last_1_var_1_98;
	if (stepLocal_1 || (var_1_4 >= last_1_var_1_68)) {
		var_1_7 = ((var_1_8 - (var_1_9 - 1000000)) - (var_1_10 - (1000000000 - var_1_11)));
	} else {
		var_1_7 = (max (var_1_9 , (max (var_1_11 , (var_1_8 - var_1_10)))));
	}


	// From: Req9Batch8Amount500
	unsigned char stepLocal_5 = var_1_17 > var_1_19;
	if (stepLocal_5 && (var_1_10 >= (max (last_1_var_1_114 , last_1_var_1_108)))) {
		if (last_1_var_1_110 == var_1_32) {
			var_1_42 = (min (var_1_18 , var_1_21));
		}
	} else {
		var_1_42 = var_1_9;
	}


	// From: Req17Batch8Amount500
	var_1_65 = ((min (var_1_42 , var_1_51)) + last_1_var_1_65);


	// From: Req24Batch8Amount500
	if (! (! last_1_var_1_38)) {
		var_1_81 = ((last_1_var_1_115 <= (var_1_25 * last_1_var_1_34)) && (! var_1_40));
	}


	// From: Req51Batch8Amount500
	if (var_1_81) {
		var_1_113 = var_1_36;
	} else {
		var_1_113 = var_1_62;
	}


	// From: Req7Batch8Amount500
	unsigned short int stepLocal_4 = var_1_22;
	if (stepLocal_4 < 32) {
		var_1_34 = (var_1_5 - ((var_1_35 - var_1_36) + var_1_37));
	}


	// From: Req11Batch8Amount500
	if ((abs (var_1_37)) >= var_1_25) {
		var_1_46 = (var_1_27 + 4);
	} else {
		var_1_46 = var_1_28;
	}


	// From: Req13Batch8Amount500
	unsigned long int stepLocal_9 = 4u;
	if (stepLocal_9 == ((var_1_45 - var_1_29) + (var_1_49 - 200u))) {
		var_1_48 = ((var_1_29 - var_1_50) + var_1_51);
	}


	// From: Req19Batch8Amount500
	unsigned char stepLocal_11 = var_1_58 < var_1_61;
	if (stepLocal_11 || (var_1_34 < (var_1_62 / 1.2))) {
		var_1_67 = ((var_1_60 - var_1_37) - var_1_6);
	} else {
		var_1_67 = ((max ((var_1_60 - var_1_36) , 7.6f)) - var_1_35);
	}


	// From: Req20Batch8Amount500
	if (! var_1_41) {
		var_1_68 = ((var_1_8 - var_1_69) - (min (var_1_20 , (var_1_10 - 2))));
	}


	// From: Req22Batch8Amount500
	var_1_76 = ((var_1_50 + 2) + (var_1_77 - var_1_54));


	// From: Req25Batch8Amount500
	if (var_1_59 <= (3.15 * var_1_37)) {
		var_1_82 = var_1_69;
	}


	// From: Req27Batch8Amount500
	var_1_84 = ((abs (min (var_1_50 , 100))) - var_1_30);


	// From: Req30Batch8Amount500
	unsigned short int stepLocal_18 = var_1_71;
	if (var_1_10 <= stepLocal_18) {
		var_1_89 = (min ((var_1_29 + var_1_54) , var_1_77));
	} else {
		var_1_89 = (var_1_50 - (var_1_28 + var_1_54));
	}


	// From: Req31Batch8Amount500
	if (var_1_36 > var_1_37) {
		var_1_90 = (abs (var_1_58 + var_1_24));
	} else {
		var_1_90 = (min (var_1_5 , var_1_37));
	}


	// From: Req32Batch8Amount500
	if (var_1_59 >= (var_1_35 + (63.75 + var_1_33))) {
		var_1_91 = (min (var_1_54 , var_1_92));
	}


	// From: Req35Batch8Amount500
	if (var_1_81) {
		var_1_95 = (min ((abs (var_1_50)) , var_1_28));
	}


	// From: Req39Batch8Amount500
	if (var_1_81) {
		var_1_101 = var_1_97;
	} else {
		var_1_101 = var_1_56;
	}


	// From: Req41Batch8Amount500
	var_1_103 = var_1_91;


	// From: Req42Batch8Amount500
	var_1_104 = 1;


	// From: Req45Batch8Amount500
	var_1_107 = var_1_91;


	// From: Req47Batch8Amount500
	if (var_1_81) {
		var_1_109 = last_1_var_1_109;
	} else {
		var_1_109 = var_1_107;
	}


	// From: Req49Batch8Amount500
	var_1_111 = var_1_29;


	// From: Req50Batch8Amount500
	if (var_1_39) {
		var_1_112 = var_1_88;
	}


	// From: Req52Batch8Amount500
	var_1_114 = var_1_77;


	// From: Req53Batch8Amount500
	var_1_115 = 50.8f;


	// From: Req54Batch8Amount500
	var_1_116 = -16;


	// From: Req37Batch8Amount500
	unsigned short int stepLocal_22 = var_1_19;
	signed long int stepLocal_21 = var_1_91 ^ var_1_19;
	if ((var_1_114 % var_1_4) >= stepLocal_22) {
		if (stepLocal_21 >= var_1_7) {
			var_1_98 = var_1_58;
		}
	} else {
		var_1_98 = (abs (10.5f));
	}


	// From: Req21Batch8Amount500
	if ((max (var_1_27 , var_1_69)) > var_1_30) {
		var_1_70 = ((var_1_71 + (min (var_1_72 , var_1_73))) - 2);
	} else {
		if (64 <= var_1_73) {
			if (var_1_81) {
				if (((var_1_17 - var_1_54) == var_1_114) && var_1_41) {
					var_1_70 = (62419 - (var_1_73 - var_1_27));
				}
			} else {
				if (! (! var_1_41)) {
					var_1_70 = (min ((max (var_1_27 , (abs (var_1_21)))) , (max ((var_1_75 - var_1_30) , last_1_var_1_70))));
				} else {
					var_1_70 = var_1_28;
				}
			}
		}
	}


	// From: Req46Batch8Amount500
	if (var_1_88) {
		var_1_108 = var_1_70;
	}


	// From: Req23Batch8Amount500
	signed long int stepLocal_14 = var_1_108 / (abs (var_1_8));
	signed long int stepLocal_13 = max ((var_1_30 - var_1_28) , var_1_17);
	signed long int stepLocal_12 = var_1_116;
	if (((max (var_1_27 , var_1_29)) - var_1_77) < stepLocal_14) {
		var_1_78 = ((21328 + var_1_73) - (var_1_50 + (var_1_54 + var_1_29)));
	} else {
		if (var_1_77 > stepLocal_12) {
			var_1_78 = (max ((var_1_75 - var_1_22) , (var_1_80 - 64)));
		} else {
			if (stepLocal_13 < (var_1_22 - var_1_68)) {
				var_1_78 = (max ((var_1_18 + var_1_68) , var_1_46));
			}
		}
	}


	// From: Req1Batch8Amount500
	unsigned long int stepLocal_0 = var_1_82;
	if (stepLocal_0 == (var_1_82 % var_1_4)) {
		var_1_1 = (var_1_5 - var_1_6);
	}


	// From: Req4Batch8Amount500
	if (256 > (50 - var_1_116)) {
		var_1_23 = (var_1_24 + var_1_25);
	} else {
		var_1_23 = var_1_25;
	}


	// From: Req6Batch8Amount500
	unsigned short int stepLocal_3 = var_1_20;
	if (stepLocal_3 <= var_1_68) {
		var_1_31 = ((max ((min (var_1_25 , 127.9)) , (max (var_1_24 , var_1_32)))) + var_1_33);
	}


	// From: Req36Batch8Amount500
	signed char stepLocal_20 = var_1_56;
	if (! var_1_112) {
		var_1_96 = ((var_1_54 + (5 + var_1_97)) + var_1_27);
	} else {
		if (stepLocal_20 <= var_1_22) {
			var_1_96 = var_1_77;
		}
	}


	// From: Req40Batch8Amount500
	if (var_1_112) {
		var_1_102 = var_1_91;
	} else {
		var_1_102 = var_1_21;
	}


	// From: Req18Batch8Amount500
	if ((max (var_1_65 , var_1_8)) < (var_1_102 | -32)) {
		if (((var_1_24 * var_1_59) / var_1_60) < var_1_32) {
			var_1_66 = ((500.2 - (max (var_1_62 , var_1_37))) + var_1_24);
		} else {
			var_1_66 = (var_1_32 + (var_1_37 - var_1_36));
		}
	} else {
		var_1_66 = (var_1_59 + var_1_25);
	}


	// From: Req5Batch8Amount500
	signed long int stepLocal_2 = var_1_22 << var_1_104;
	if ((var_1_102 * (var_1_78 * var_1_19)) <= stepLocal_2) {
		var_1_26 = (var_1_27 + (var_1_28 + var_1_29));
	} else {
		var_1_26 = (min (var_1_28 , (var_1_30 - var_1_27)));
	}


	// From: Req56Batch8Amount500
	if ((var_1_73 / var_1_30) == (var_1_9 - var_1_11)) {
		if ((var_1_66 * var_1_33) > var_1_61) {
			var_1_118 = var_1_35;
		} else {
			var_1_118 = var_1_33;
		}
	} else {
		var_1_118 = var_1_35;
	}


	// From: Req15Batch8Amount500
	unsigned long int stepLocal_10 = var_1_45;
	if ((var_1_37 * var_1_25) == 0.6) {
		var_1_57 = (max (((10.125 + var_1_36) + (var_1_58 + var_1_59)) , var_1_6));
	} else {
		if ((- 64.2f) >= var_1_5) {
			if (var_1_66 <= var_1_31) {
				if ((min ((var_1_66 + var_1_24) , var_1_23)) >= var_1_6) {
					var_1_57 = (var_1_5 - (var_1_60 - var_1_36));
				} else {
					if (var_1_40) {
						var_1_57 = (var_1_25 + (var_1_36 + (var_1_61 - var_1_62)));
					} else {
						if (! (! (var_1_44 >= 50u))) {
							var_1_57 = (max ((max (2.4 , var_1_6)) , (var_1_36 - (var_1_61 + 0.5))));
						} else {
							var_1_57 = (var_1_33 + (min (var_1_37 , (min (var_1_58 , var_1_59)))));
						}
					}
				}
			} else {
				if (stepLocal_10 >= var_1_70) {
					var_1_57 = (var_1_37 + ((var_1_35 - var_1_62) - var_1_36));
				}
			}
		} else {
			var_1_57 = (max (var_1_25 , (var_1_33 + (var_1_37 - var_1_35))));
		}
	}


	// From: Req16Batch8Amount500
	if ((~ (16u / var_1_45)) > var_1_42) {
		if (var_1_57 < var_1_34) {
			if (var_1_40) {
				if (var_1_81) {
					var_1_63 = var_1_44;
				} else {
					var_1_63 = ((3389695538u - (var_1_20 + var_1_96)) - (var_1_10 - var_1_30));
				}
			} else {
				if (var_1_112) {
					var_1_63 = ((var_1_45 - var_1_111) - var_1_78);
				}
			}
		}
	} else {
		if ((var_1_18 & var_1_51) == var_1_111) {
			var_1_63 = ((min ((var_1_10 + var_1_64) , var_1_45)) - var_1_19);
		} else {
			var_1_63 = var_1_22;
		}
	}


	// From: Req14Batch8Amount500
	if ((var_1_21 * (var_1_44 + var_1_109)) == (var_1_22 / (var_1_45 - var_1_8))) {
		if ((var_1_113 * var_1_24) > (var_1_5 - var_1_6)) {
			if ((min (var_1_8 , (min (var_1_116 , var_1_26)))) > (var_1_108 * (var_1_20 >> var_1_54))) {
				var_1_52 = var_1_50;
			}
		} else {
			if (! (var_1_32 != (var_1_57 * var_1_35))) {
				var_1_52 = (((max (var_1_54 , -16)) + var_1_56) + var_1_50);
			} else {
				var_1_52 = ((max ((2 + var_1_56) , var_1_29)) + (min (var_1_51 , var_1_50)));
			}
		}
	} else {
		var_1_52 = var_1_50;
	}


	// From: Req33Batch8Amount500
	unsigned char stepLocal_19 = var_1_40;
	if (! var_1_40) {
		if (var_1_81 || stepLocal_19) {
			if (var_1_118 <= var_1_60) {
				var_1_93 = (min (var_1_28 , var_1_29));
			} else {
				var_1_93 = (var_1_29 - var_1_28);
			}
		} else {
			var_1_93 = (4 + var_1_54);
		}
	}


	// From: Req12Batch8Amount500
	signed long int stepLocal_8 = var_1_102;
	unsigned char stepLocal_7 = var_1_84 != (var_1_30 - var_1_28);
	if ((var_1_27 ^ (- var_1_63)) > stepLocal_8) {
		if (var_1_24 > var_1_113) {
			if (stepLocal_7 || var_1_41) {
				var_1_47 = ((max (var_1_28 , (var_1_18 + 128))) + var_1_17);
			}
		}
	} else {
		var_1_47 = -8;
	}


	// From: Req10Batch8Amount500
	signed long int stepLocal_6 = var_1_47;
	if (-1 >= stepLocal_6) {
		var_1_43 = (var_1_22 + var_1_44);
	} else {
		var_1_43 = (((max (3316420773u , var_1_45)) - var_1_18) - (1249289045u - (min (var_1_30 , var_1_47))));
	}


	// From: Req28Batch8Amount500
	if ((var_1_78 <= (var_1_73 >> var_1_54)) || (var_1_68 < var_1_43)) {
		var_1_85 = (abs (var_1_33));
	}


	// From: Req29Batch8Amount500
	if ((var_1_37 - var_1_61) <= var_1_85) {
		if (128.5 >= var_1_31) {
			var_1_86 = (! var_1_40);
		}
	} else {
		var_1_86 = ((var_1_39 || var_1_88) || (! var_1_40));
	}


	// From: Req43Batch8Amount500
	if (var_1_86) {
		var_1_105 = var_1_18;
	}


	// From: Req44Batch8Amount500
	if (var_1_86) {
		var_1_106 = var_1_37;
	}


	// From: Req8Batch8Amount500
	if ((- var_1_43) <= var_1_29) {
		var_1_38 = var_1_39;
	} else {
		var_1_38 = (var_1_40 && var_1_41);
	}


	// From: Req48Batch8Amount500
	if (var_1_38) {
		var_1_110 = var_1_32;
	}


	// From: Req3Batch8Amount500
	if (var_1_86 && (var_1_38 && var_1_112)) {
		if (((var_1_5 - var_1_6) + 7.7) < (var_1_67 * var_1_110)) {
			var_1_12 = var_1_17;
		} else {
			var_1_12 = (var_1_18 + (max ((max (var_1_19 , var_1_20)) , (min (var_1_21 , var_1_22)))));
		}
	} else {
		var_1_12 = var_1_18;
	}


	// From: Req34Batch8Amount500
	if (var_1_71 < (var_1_82 / var_1_77)) {
		if (! var_1_38) {
			var_1_94 = (var_1_71 + var_1_10);
		} else {
			var_1_94 = (max ((max (var_1_21 , var_1_73)) , var_1_101));
		}
	} else {
		var_1_94 = var_1_22;
	}


	// From: Req38Batch8Amount500
	if (127.5f >= ((var_1_62 + var_1_61) - var_1_37)) {
		var_1_99 = ((max (var_1_51 , (var_1_97 - var_1_29))) + var_1_100);
	} else {
		if (var_1_81 && var_1_86) {
			var_1_99 = (var_1_56 + (min (var_1_50 , var_1_51)));
		} else {
			if ((200 * last_1_var_1_99) > 25) {
				if ((var_1_7 != (var_1_94 | var_1_91)) && ((var_1_59 <= var_1_37) || var_1_86)) {
					var_1_99 = (var_1_50 + var_1_54);
				}
			}
		}
	}


	// From: Req55Batch8Amount500
	if (var_1_38) {
		var_1_117 = var_1_63;
	} else {
		var_1_117 = var_1_97;
	}


	// From: Req26Batch8Amount500
	unsigned long int stepLocal_17 = var_1_94;
	unsigned char stepLocal_16 = var_1_86;
	unsigned char stepLocal_15 = ! var_1_81;
	if (stepLocal_17 >= var_1_28) {
		var_1_83 = (max (var_1_58 , (var_1_33 + var_1_62)));
	} else {
		if (var_1_81 || stepLocal_15) {
			if (stepLocal_16 && (var_1_36 > var_1_58)) {
				var_1_83 = (abs (var_1_5));
			} else {
				var_1_83 = (var_1_24 + (var_1_36 - var_1_37));
			}
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 1073741822);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 536870911);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 1073741823);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 536870911);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 64);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 127);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -461168.6018427383000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 2305843.009213691400e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691400e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 2147483647);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 3221225470);
	assume_abort_if_not(var_1_45 <= 4294967294);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 2147483647);
	assume_abort_if_not(var_1_49 <= 4294967295);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 63);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -63);
	assume_abort_if_not(var_1_51 <= 63);
	var_1_54 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 15);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= -31);
	assume_abort_if_not(var_1_56 <= 31);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= -230584.3009213691400e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 2305843.009213691400e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -230584.3009213691400e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 2305843.009213691400e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= 4611686.018427383000e+12F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854766000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691400e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 2305843.009213691400e+12F && var_1_62 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 1073741824);
	assume_abort_if_not(var_1_64 <= 2147483647);
	var_1_69 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 1073741823);
	var_1_71 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_71 >= 16383);
	assume_abort_if_not(var_1_71 <= 32767);
	var_1_72 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_72 >= 16384);
	assume_abort_if_not(var_1_72 <= 32767);
	var_1_73 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_73 >= 16384);
	assume_abort_if_not(var_1_73 <= 32767);
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 32767);
	assume_abort_if_not(var_1_75 <= 65534);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 63);
	assume_abort_if_not(var_1_77 <= 127);
	var_1_80 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_80 >= 32767);
	assume_abort_if_not(var_1_80 <= 65534);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 0);
	var_1_92 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 65534);
	var_1_97 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_97 >= 0);
	assume_abort_if_not(var_1_97 <= 31);
	var_1_100 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_100 >= -63);
	assume_abort_if_not(var_1_100 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_34 = var_1_34;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_110 = var_1_110;
	last_1_var_1_114 = var_1_114;
	last_1_var_1_115 = var_1_115;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_82 == (var_1_82 % var_1_4)) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : 1) && ((((var_1_6 - var_1_5) < last_1_var_1_98) || (var_1_4 >= last_1_var_1_68)) ? (var_1_7 == ((signed long int) ((var_1_8 - (var_1_9 - 1000000)) - (var_1_10 - (1000000000 - var_1_11))))) : (var_1_7 == ((signed long int) (max (var_1_9 , (max (var_1_11 , (var_1_8 - var_1_10))))))))) && ((var_1_86 && (var_1_38 && var_1_112)) ? ((((var_1_5 - var_1_6) + 7.7) < (var_1_67 * var_1_110)) ? (var_1_12 == ((unsigned short int) var_1_17)) : (var_1_12 == ((unsigned short int) (var_1_18 + (max ((max (var_1_19 , var_1_20)) , (min (var_1_21 , var_1_22)))))))) : (var_1_12 == ((unsigned short int) var_1_18)))) && ((256 > (50 - var_1_116)) ? (var_1_23 == ((float) (var_1_24 + var_1_25))) : (var_1_23 == ((float) var_1_25)))) && (((var_1_102 * (var_1_78 * var_1_19)) <= (var_1_22 << var_1_104)) ? (var_1_26 == ((unsigned char) (var_1_27 + (var_1_28 + var_1_29)))) : (var_1_26 == ((unsigned char) (min (var_1_28 , (var_1_30 - var_1_27))))))) && ((var_1_20 <= var_1_68) ? (var_1_31 == ((double) ((max ((min (var_1_25 , 127.9)) , (max (var_1_24 , var_1_32)))) + var_1_33))) : 1)) && ((var_1_22 < 32) ? (var_1_34 == ((double) (var_1_5 - ((var_1_35 - var_1_36) + var_1_37)))) : 1)) && (((- var_1_43) <= var_1_29) ? (var_1_38 == ((unsigned char) var_1_39)) : (var_1_38 == ((unsigned char) (var_1_40 && var_1_41))))) && (((var_1_17 > var_1_19) && (var_1_10 >= (max (last_1_var_1_114 , last_1_var_1_108)))) ? ((last_1_var_1_110 == var_1_32) ? (var_1_42 == ((signed long int) (min (var_1_18 , var_1_21)))) : 1) : (var_1_42 == ((signed long int) var_1_9)))) && ((-1 >= var_1_47) ? (var_1_43 == ((unsigned long int) (var_1_22 + var_1_44))) : (var_1_43 == ((unsigned long int) (((max (3316420773u , var_1_45)) - var_1_18) - (1249289045u - (min (var_1_30 , var_1_47)))))))) && (((abs (var_1_37)) >= var_1_25) ? (var_1_46 == ((unsigned char) (var_1_27 + 4))) : (var_1_46 == ((unsigned char) var_1_28)))) && (((var_1_27 ^ (- var_1_63)) > var_1_102) ? ((var_1_24 > var_1_113) ? (((var_1_84 != (var_1_30 - var_1_28)) || var_1_41) ? (var_1_47 == ((signed long int) ((max (var_1_28 , (var_1_18 + 128))) + var_1_17))) : 1) : 1) : (var_1_47 == ((signed long int) -8)))) && ((4u == ((var_1_45 - var_1_29) + (var_1_49 - 200u))) ? (var_1_48 == ((signed char) ((var_1_29 - var_1_50) + var_1_51))) : 1)) && (((var_1_21 * (var_1_44 + var_1_109)) == (var_1_22 / (var_1_45 - var_1_8))) ? (((var_1_113 * var_1_24) > (var_1_5 - var_1_6)) ? (((min (var_1_8 , (min (var_1_116 , var_1_26)))) > (var_1_108 * (var_1_20 >> var_1_54))) ? (var_1_52 == ((signed char) var_1_50)) : 1) : ((! (var_1_32 != (var_1_57 * var_1_35))) ? (var_1_52 == ((signed char) (((max (var_1_54 , -16)) + var_1_56) + var_1_50))) : (var_1_52 == ((signed char) ((max ((2 + var_1_56) , var_1_29)) + (min (var_1_51 , var_1_50))))))) : (var_1_52 == ((signed char) var_1_50)))) && (((var_1_37 * var_1_25) == 0.6) ? (var_1_57 == ((double) (max (((10.125 + var_1_36) + (var_1_58 + var_1_59)) , var_1_6)))) : (((- 64.2f) >= var_1_5) ? ((var_1_66 <= var_1_31) ? (((min ((var_1_66 + var_1_24) , var_1_23)) >= var_1_6) ? (var_1_57 == ((double) (var_1_5 - (var_1_60 - var_1_36)))) : (var_1_40 ? (var_1_57 == ((double) (var_1_25 + (var_1_36 + (var_1_61 - var_1_62))))) : ((! (! (var_1_44 >= 50u))) ? (var_1_57 == ((double) (max ((max (2.4 , var_1_6)) , (var_1_36 - (var_1_61 + 0.5)))))) : (var_1_57 == ((double) (var_1_33 + (min (var_1_37 , (min (var_1_58 , var_1_59)))))))))) : ((var_1_45 >= var_1_70) ? (var_1_57 == ((double) (var_1_37 + ((var_1_35 - var_1_62) - var_1_36)))) : 1)) : (var_1_57 == ((double) (max (var_1_25 , (var_1_33 + (var_1_37 - var_1_35))))))))) && (((~ (16u / var_1_45)) > var_1_42) ? ((var_1_57 < var_1_34) ? (var_1_40 ? (var_1_81 ? (var_1_63 == ((unsigned long int) var_1_44)) : (var_1_63 == ((unsigned long int) ((3389695538u - (var_1_20 + var_1_96)) - (var_1_10 - var_1_30))))) : (var_1_112 ? (var_1_63 == ((unsigned long int) ((var_1_45 - var_1_111) - var_1_78))) : 1)) : 1) : (((var_1_18 & var_1_51) == var_1_111) ? (var_1_63 == ((unsigned long int) ((min ((var_1_10 + var_1_64) , var_1_45)) - var_1_19))) : (var_1_63 == ((unsigned long int) var_1_22))))) && (var_1_65 == ((signed short int) ((min (var_1_42 , var_1_51)) + last_1_var_1_65)))) && (((max (var_1_65 , var_1_8)) < (var_1_102 | -32)) ? ((((var_1_24 * var_1_59) / var_1_60) < var_1_32) ? (var_1_66 == ((double) ((500.2 - (max (var_1_62 , var_1_37))) + var_1_24))) : (var_1_66 == ((double) (var_1_32 + (var_1_37 - var_1_36))))) : (var_1_66 == ((double) (var_1_59 + var_1_25))))) && (((var_1_58 < var_1_61) || (var_1_34 < (var_1_62 / 1.2))) ? (var_1_67 == ((float) ((var_1_60 - var_1_37) - var_1_6))) : (var_1_67 == ((float) ((max ((var_1_60 - var_1_36) , 7.6f)) - var_1_35))))) && ((! var_1_41) ? (var_1_68 == ((signed long int) ((var_1_8 - var_1_69) - (min (var_1_20 , (var_1_10 - 2)))))) : 1)) && (((max (var_1_27 , var_1_69)) > var_1_30) ? (var_1_70 == ((unsigned short int) ((var_1_71 + (min (var_1_72 , var_1_73))) - 2))) : ((64 <= var_1_73) ? (var_1_81 ? ((((var_1_17 - var_1_54) == var_1_114) && var_1_41) ? (var_1_70 == ((unsigned short int) (62419 - (var_1_73 - var_1_27)))) : 1) : ((! (! var_1_41)) ? (var_1_70 == ((unsigned short int) (min ((max (var_1_27 , (abs (var_1_21)))) , (max ((var_1_75 - var_1_30) , last_1_var_1_70)))))) : (var_1_70 == ((unsigned short int) var_1_28)))) : 1))) && (var_1_76 == ((unsigned char) ((var_1_50 + 2) + (var_1_77 - var_1_54))))) && ((((max (var_1_27 , var_1_29)) - var_1_77) < (var_1_108 / (abs (var_1_8)))) ? (var_1_78 == ((unsigned short int) ((21328 + var_1_73) - (var_1_50 + (var_1_54 + var_1_29))))) : ((var_1_77 > var_1_116) ? (var_1_78 == ((unsigned short int) (max ((var_1_75 - var_1_22) , (var_1_80 - 64))))) : (((max ((var_1_30 - var_1_28) , var_1_17)) < (var_1_22 - var_1_68)) ? (var_1_78 == ((unsigned short int) (max ((var_1_18 + var_1_68) , var_1_46)))) : 1)))) && ((! (! last_1_var_1_38)) ? (var_1_81 == ((unsigned char) ((last_1_var_1_115 <= (var_1_25 * last_1_var_1_34)) && (! var_1_40)))) : 1)) && ((var_1_59 <= (3.15 * var_1_37)) ? (var_1_82 == ((unsigned long int) var_1_69)) : 1)) && ((var_1_94 >= var_1_28) ? (var_1_83 == ((float) (max (var_1_58 , (var_1_33 + var_1_62))))) : ((var_1_81 || (! var_1_81)) ? ((var_1_86 && (var_1_36 > var_1_58)) ? (var_1_83 == ((float) (abs (var_1_5)))) : (var_1_83 == ((float) (var_1_24 + (var_1_36 - var_1_37))))) : 1))) && (var_1_84 == ((signed short int) ((abs (min (var_1_50 , 100))) - var_1_30)))) && (((var_1_78 <= (var_1_73 >> var_1_54)) || (var_1_68 < var_1_43)) ? (var_1_85 == ((float) (abs (var_1_33)))) : 1)) && (((var_1_37 - var_1_61) <= var_1_85) ? ((128.5 >= var_1_31) ? (var_1_86 == ((unsigned char) (! var_1_40))) : 1) : (var_1_86 == ((unsigned char) ((var_1_39 || var_1_88) || (! var_1_40)))))) && ((var_1_10 <= var_1_71) ? (var_1_89 == ((signed short int) (min ((var_1_29 + var_1_54) , var_1_77)))) : (var_1_89 == ((signed short int) (var_1_50 - (var_1_28 + var_1_54)))))) && ((var_1_36 > var_1_37) ? (var_1_90 == ((float) (abs (var_1_58 + var_1_24)))) : (var_1_90 == ((float) (min (var_1_5 , var_1_37)))))) && ((var_1_59 >= (var_1_35 + (63.75 + var_1_33))) ? (var_1_91 == ((unsigned short int) (min (var_1_54 , var_1_92)))) : 1)) && ((! var_1_40) ? ((var_1_81 || var_1_40) ? ((var_1_118 <= var_1_60) ? (var_1_93 == ((signed char) (min (var_1_28 , var_1_29)))) : (var_1_93 == ((signed char) (var_1_29 - var_1_28)))) : (var_1_93 == ((signed char) (4 + var_1_54)))) : 1)) && ((var_1_71 < (var_1_82 / var_1_77)) ? ((! var_1_38) ? (var_1_94 == ((unsigned long int) (var_1_71 + var_1_10))) : (var_1_94 == ((unsigned long int) (max ((max (var_1_21 , var_1_73)) , var_1_101))))) : (var_1_94 == ((unsigned long int) var_1_22)))) && (var_1_81 ? (var_1_95 == ((signed char) (min ((abs (var_1_50)) , var_1_28)))) : 1)) && ((! var_1_112) ? (var_1_96 == ((unsigned char) ((var_1_54 + (5 + var_1_97)) + var_1_27))) : ((var_1_56 <= var_1_22) ? (var_1_96 == ((unsigned char) var_1_77)) : 1))) && (((var_1_114 % var_1_4) >= var_1_19) ? (((var_1_91 ^ var_1_19) >= var_1_7) ? (var_1_98 == ((float) var_1_58)) : 1) : (var_1_98 == ((float) (abs (10.5f)))))) && ((127.5f >= ((var_1_62 + var_1_61) - var_1_37)) ? (var_1_99 == ((signed char) ((max (var_1_51 , (var_1_97 - var_1_29))) + var_1_100))) : ((var_1_81 && var_1_86) ? (var_1_99 == ((signed char) (var_1_56 + (min (var_1_50 , var_1_51))))) : (((200 * last_1_var_1_99) > 25) ? (((var_1_7 != (var_1_94 | var_1_91)) && ((var_1_59 <= var_1_37) || var_1_86)) ? (var_1_99 == ((signed char) (var_1_50 + var_1_54))) : 1) : 1)))) && (var_1_81 ? (var_1_101 == ((signed short int) var_1_97)) : (var_1_101 == ((signed short int) var_1_56)))) && (var_1_112 ? (var_1_102 == ((signed long int) var_1_91)) : (var_1_102 == ((signed long int) var_1_21)))) && (var_1_103 == ((signed short int) var_1_91))) && (var_1_104 == ((signed long int) 1))) && (var_1_86 ? (var_1_105 == ((signed long int) var_1_18)) : 1)) && (var_1_86 ? (var_1_106 == ((float) var_1_37)) : 1)) && (var_1_107 == ((signed short int) var_1_91))) && (var_1_88 ? (var_1_108 == ((signed long int) var_1_70)) : 1)) && (var_1_81 ? (var_1_109 == ((signed short int) last_1_var_1_109)) : (var_1_109 == ((signed short int) var_1_107)))) && (var_1_38 ? (var_1_110 == ((double) var_1_32)) : 1)) && (var_1_111 == ((unsigned char) var_1_29))) && (var_1_39 ? (var_1_112 == ((unsigned char) var_1_88)) : 1)) && (var_1_81 ? (var_1_113 == ((float) var_1_36)) : (var_1_113 == ((float) var_1_62)))) && (var_1_114 == ((signed long int) var_1_77))) && (var_1_115 == ((float) 50.8f))) && (var_1_116 == ((signed long int) -16))) && (var_1_38 ? (var_1_117 == ((signed short int) var_1_63)) : (var_1_117 == ((signed short int) var_1_97)))) && (((var_1_73 / var_1_30) == (var_1_9 - var_1_11)) ? (((var_1_66 * var_1_33) > var_1_61) ? (var_1_118 == ((double) var_1_35)) : (var_1_118 == ((double) var_1_33))) : (var_1_118 == ((double) var_1_35)))
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
