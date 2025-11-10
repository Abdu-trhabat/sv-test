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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch146Amount500.c", 13, "reach_error"); }
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
signed long int var_1_3 = 32;
signed long int var_1_4 = 100;
signed long int var_1_5 = 5;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned short int var_1_12 = 256;
unsigned short int var_1_13 = 49113;
unsigned short int var_1_14 = 8;
unsigned short int var_1_15 = 32170;
unsigned short int var_1_16 = 27042;
unsigned char var_1_17 = 0;
double var_1_21 = 8.5;
double var_1_22 = 16.8;
double var_1_23 = 127.3;
double var_1_24 = 10000000.2;
double var_1_25 = 500.4;
double var_1_26 = 128.55;
double var_1_27 = 9.35;
double var_1_28 = 15.4;
signed char var_1_29 = 100;
signed char var_1_30 = 5;
unsigned char var_1_31 = 32;
unsigned char var_1_32 = 5;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 16;
unsigned char var_1_35 = 2;
unsigned char var_1_36 = 10;
signed char var_1_37 = -50;
signed char var_1_39 = 16;
signed char var_1_40 = 2;
signed char var_1_41 = 25;
signed long int var_1_42 = -2;
signed long int var_1_43 = -1;
unsigned short int var_1_44 = 256;
signed char var_1_45 = -2;
unsigned long int var_1_46 = 0;
float var_1_47 = 7.4;
unsigned char var_1_48 = 10;
unsigned char var_1_49 = 128;
unsigned char var_1_50 = 1;
signed long int var_1_51 = 4;
unsigned long int var_1_52 = 2960252394;
float var_1_53 = 2.75;
signed long int var_1_54 = 10;
signed long int var_1_55 = 1173837055;
signed long int var_1_56 = 128;
signed long int var_1_57 = -25;
unsigned char var_1_58 = 4;
unsigned char var_1_60 = 200;
unsigned short int var_1_61 = 32;
unsigned char var_1_63 = 1;
float var_1_64 = 1.8;
unsigned short int var_1_65 = 256;
signed char var_1_66 = 5;
signed char var_1_67 = -1;
signed char var_1_68 = 100;
signed char var_1_69 = 10;
signed char var_1_70 = 5;
unsigned short int var_1_71 = 0;
float var_1_72 = 10000000000.4;
float var_1_73 = 15.75;
unsigned short int var_1_74 = 64;
signed short int var_1_75 = -128;
unsigned char var_1_76 = 100;
unsigned char var_1_77 = 8;
signed char var_1_78 = 5;
signed char var_1_79 = 4;
signed char var_1_81 = 10;
float var_1_82 = 16.425;
unsigned short int var_1_84 = 2;
float var_1_85 = -0.25;
signed char var_1_86 = 32;
signed long int var_1_87 = -1;
unsigned short int var_1_88 = 256;
signed long int var_1_89 = 1000;
unsigned short int var_1_90 = 25965;
double var_1_91 = 99.8;
signed long int var_1_92 = -2;
double var_1_93 = 50.625;
signed long int var_1_94 = 5;
signed long int var_1_95 = 1305225682;
signed long int var_1_96 = 1000000000;
signed long int var_1_97 = 1000000000;
signed long int var_1_98 = 1000000000;
signed char var_1_99 = -10;
float var_1_100 = 31.2;
signed short int var_1_101 = -8;
signed short int var_1_102 = -500;
signed char var_1_103 = 25;
unsigned char var_1_104 = 0;
signed char var_1_105 = 8;
unsigned long int var_1_106 = 32;
float var_1_107 = 8.5;
unsigned short int var_1_108 = 32;
unsigned char var_1_109 = 1;
signed long int var_1_110 = -1;
unsigned long int var_1_111 = 0;
unsigned char var_1_112 = 4;

// Calibration values

// Last'ed variables
double last_1_var_1_21 = 8.5;
unsigned char last_1_var_1_31 = 32;
signed long int last_1_var_1_42 = -2;
unsigned short int last_1_var_1_44 = 256;
unsigned long int last_1_var_1_46 = 0;
signed long int last_1_var_1_51 = 4;
unsigned short int last_1_var_1_61 = 32;
float last_1_var_1_64 = 1.8;
unsigned short int last_1_var_1_71 = 0;
float last_1_var_1_72 = 10000000000.4;
signed short int last_1_var_1_75 = -128;
unsigned short int last_1_var_1_84 = 2;
float last_1_var_1_85 = -0.25;
unsigned short int last_1_var_1_88 = 256;
signed long int last_1_var_1_92 = -2;
float last_1_var_1_100 = 31.2;
signed short int last_1_var_1_101 = -8;
signed long int last_1_var_1_110 = -1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req25Batch146Amount500
	signed long int stepLocal_26 = last_1_var_1_101 / var_1_60;
	signed long int stepLocal_25 = min (256 , var_1_69);
	unsigned char stepLocal_24 = last_1_var_1_101 >= -32;
	if ((var_1_40 * last_1_var_1_110) < stepLocal_26) {
		if (last_1_var_1_100 == var_1_27) {
			if (stepLocal_24 && var_1_10) {
				var_1_67 = (var_1_39 - ((var_1_68 - var_1_69) - (4 + var_1_70)));
			} else {
				if (stepLocal_25 > last_1_var_1_61) {
					var_1_67 = (var_1_39 + var_1_40);
				} else {
					var_1_67 = (var_1_68 - (var_1_69 + var_1_70));
				}
			}
		}
	}


	// From: Req43Batch146Amount500
	var_1_101 = var_1_67;


	// From: Req12Batch146Amount500
	if (! (last_1_var_1_21 > 500.75)) {
		var_1_46 = (last_1_var_1_75 + 256u);
	} else {
		var_1_46 = ((max (var_1_32 , (var_1_36 + var_1_33))) + (min (last_1_var_1_75 , var_1_13)));
	}


	// From: Req24Batch146Amount500
	signed long int stepLocal_23 = min (64 , var_1_55);
	if (stepLocal_23 != var_1_46) {
		var_1_66 = (10 - var_1_39);
	}


	// From: Req54Batch146Amount500
	if (last_1_var_1_71 < ((last_1_var_1_44 / var_1_49) % var_1_15)) {
		if (var_1_93 < last_1_var_1_85) {
			var_1_112 = (max (var_1_76 , (var_1_81 + var_1_36)));
		} else {
			var_1_112 = var_1_76;
		}
	} else {
		var_1_112 = var_1_76;
	}


	// From: Req44Batch146Amount500
	var_1_102 = var_1_112;


	// From: Req10Batch146Amount500
	if (last_1_var_1_42 <= var_1_14) {
		var_1_44 = (37083 - (last_1_var_1_31 + (max (50 , var_1_36))));
	} else {
		var_1_44 = var_1_36;
	}


	// From: Req3Batch146Amount500
	signed long int stepLocal_7 = var_1_3;
	signed long int stepLocal_6 = var_1_3 / var_1_13;
	signed long int stepLocal_5 = 1;
	if ((last_1_var_1_72 + (0.25f + last_1_var_1_64)) >= 1.8f) {
		if (var_1_15 <= stepLocal_5) {
			if (stepLocal_7 != last_1_var_1_46) {
				var_1_17 = var_1_10;
			}
		}
	} else {
		if (stepLocal_6 >= (min (last_1_var_1_46 , (var_1_16 - var_1_4)))) {
			var_1_17 = 1;
		} else {
			var_1_17 = var_1_8;
		}
	}


	// From: Req19Batch146Amount500
	unsigned char stepLocal_18 = var_1_8;
	if (stepLocal_18 && var_1_17) {
		var_1_58 = (max (((var_1_60 - var_1_39) - var_1_33) , (min (var_1_32 , 5))));
	}


	// From: Req35Batch146Amount500
	if (var_1_17) {
		var_1_85 = var_1_73;
	}


	// From: Req40Batch146Amount500
	if (((- var_1_26) / var_1_93) <= last_1_var_1_21) {
		var_1_92 = (var_1_94 - (var_1_95 - 32));
	} else {
		var_1_92 = (((var_1_96 + var_1_97) - (var_1_98 - last_1_var_1_92)) - last_1_var_1_84);
	}


	// From: Req9Batch146Amount500
	if (var_1_8 && var_1_6) {
		var_1_43 = (min (var_1_33 , (max (var_1_92 , (var_1_16 + var_1_15)))));
	}


	// From: Req4Batch146Amount500
	if (var_1_10) {
		var_1_21 = (min (var_1_22 , 9.5));
	} else {
		var_1_21 = ((abs (var_1_23 + var_1_24)) - ((var_1_25 + var_1_26) + (var_1_27 + var_1_28)));
	}


	// From: Req5Batch146Amount500
	var_1_29 = (var_1_30 - 50);


	// From: Req8Batch146Amount500
	if (var_1_35 <= (var_1_32 * (var_1_34 / var_1_5))) {
		var_1_42 = (var_1_36 - ((var_1_35 + var_1_15) + var_1_14));
	} else {
		var_1_42 = ((var_1_16 + (var_1_32 - var_1_33)) + var_1_40);
	}


	// From: Req11Batch146Amount500
	if (var_1_40 > (max (var_1_39 , 25))) {
		var_1_45 = (max ((min ((max (var_1_34 , var_1_39)) , (var_1_40 + var_1_41))) , var_1_30));
	} else {
		var_1_45 = var_1_30;
	}


	// From: Req15Batch146Amount500
	if (var_1_6) {
		var_1_50 = (var_1_8 && var_1_7);
	}


	// From: Req17Batch146Amount500
	signed long int stepLocal_16 = var_1_33 / var_1_49;
	if (var_1_34 <= stepLocal_16) {
		var_1_53 = (var_1_28 + (0.8f - var_1_27));
	}


	// From: Req30Batch146Amount500
	var_1_77 = ((var_1_60 - (var_1_69 + var_1_70)) - var_1_34);


	// From: Req31Batch146Amount500
	unsigned char stepLocal_31 = var_1_10;
	if ((var_1_50 || var_1_7) || stepLocal_31) {
		var_1_78 = (max (var_1_41 , (var_1_39 + (var_1_69 - var_1_70))));
	}


	// From: Req37Batch146Amount500
	signed long int stepLocal_41 = var_1_57;
	if (stepLocal_41 >= var_1_32) {
		var_1_87 = (((min (256 , 32)) - var_1_92) + var_1_30);
	}


	// From: Req39Batch146Amount500
	if ((- var_1_57) <= var_1_90) {
		var_1_91 = (min (var_1_28 , (var_1_26 + var_1_24)));
	}


	// From: Req45Batch146Amount500
	if (var_1_8) {
		var_1_103 = var_1_70;
	} else {
		var_1_103 = var_1_41;
	}


	// From: Req47Batch146Amount500
	var_1_105 = var_1_68;


	// From: Req50Batch146Amount500
	if (var_1_8) {
		var_1_108 = var_1_16;
	} else {
		var_1_108 = var_1_69;
	}


	// From: Req51Batch146Amount500
	var_1_109 = var_1_6;


	// From: Req52Batch146Amount500
	var_1_110 = -500;


	// From: Req26Batch146Amount500
	signed long int stepLocal_27 = (var_1_32 / var_1_49) * var_1_34;
	if (stepLocal_27 >= var_1_39) {
		var_1_71 = var_1_60;
	} else {
		var_1_71 = (max (var_1_70 , ((min (var_1_35 , 128)) + var_1_102)));
	}


	// From: Req42Batch146Amount500
	unsigned char stepLocal_44 = var_1_94 <= var_1_41;
	signed long int stepLocal_43 = var_1_5 * 1;
	if (var_1_112 > stepLocal_43) {
		if (stepLocal_44 && var_1_50) {
			var_1_100 = var_1_25;
		} else {
			var_1_100 = var_1_22;
		}
	} else {
		var_1_100 = var_1_73;
	}


	// From: Req34Batch146Amount500
	signed char stepLocal_39 = var_1_41;
	if (var_1_3 >= stepLocal_39) {
		var_1_84 = (min (var_1_81 , ((var_1_60 + var_1_76) + var_1_36)));
	} else {
		var_1_84 = (var_1_14 + (var_1_16 - var_1_58));
	}


	// From: Req18Batch146Amount500
	unsigned short int stepLocal_17 = var_1_108;
	if (var_1_43 <= stepLocal_17) {
		var_1_54 = ((var_1_55 - var_1_14) - var_1_56);
	} else {
		var_1_54 = ((min ((var_1_103 + var_1_36) , var_1_57)) + (var_1_35 + var_1_13));
	}


	// From: Req21Batch146Amount500
	signed long int stepLocal_22 = var_1_35 - var_1_15;
	if (var_1_25 < 31.7) {
		if (stepLocal_22 < var_1_87) {
			var_1_63 = var_1_10;
		} else {
			var_1_63 = ((var_1_13 <= 2) || var_1_7);
		}
	}


	// From: Req27Batch146Amount500
	if (var_1_109) {
		var_1_72 = (max (((var_1_73 + var_1_28) + (var_1_26 + var_1_27)) , var_1_23));
	}


	// From: Req33Batch146Amount500
	signed long int stepLocal_38 = var_1_42;
	if (stepLocal_38 != (min (var_1_110 , -256))) {
		var_1_82 = (min ((max (4.25f , var_1_25)) , var_1_24));
	} else {
		var_1_82 = (min (var_1_22 , var_1_24));
	}


	// From: Req36Batch146Amount500
	unsigned short int stepLocal_40 = var_1_16;
	if (stepLocal_40 != (abs (- var_1_110))) {
		var_1_86 = (var_1_81 + (var_1_41 + var_1_70));
	} else {
		var_1_86 = -10;
	}


	// From: Req41Batch146Amount500
	signed long int stepLocal_42 = var_1_92;
	if (var_1_85 > var_1_26) {
		var_1_99 = (max (var_1_30 , var_1_69));
	} else {
		if (var_1_109) {
			if (var_1_108 > stepLocal_42) {
				var_1_99 = (min (var_1_68 , (abs (var_1_70))));
			}
		}
	}


	// From: Req49Batch146Amount500
	if (var_1_109) {
		var_1_107 = var_1_24;
	}


	// From: Req16Batch146Amount500
	unsigned char stepLocal_15 = (- var_1_35) != var_1_66;
	unsigned char stepLocal_14 = var_1_6;
	if (stepLocal_14 && ((var_1_52 - var_1_34) > (max (var_1_13 , last_1_var_1_51)))) {
		var_1_51 = (var_1_39 - 2);
	} else {
		if (var_1_23 > var_1_91) {
			if (stepLocal_15 || var_1_8) {
				var_1_51 = (var_1_105 + var_1_34);
			}
		} else {
			var_1_51 = (min ((var_1_13 + var_1_84) , var_1_16));
		}
	}


	// From: Req23Batch146Amount500
	if (var_1_100 <= var_1_21) {
		var_1_65 = (var_1_44 + var_1_15);
	} else {
		var_1_65 = (var_1_13 - var_1_16);
	}


	// From: Req1Batch146Amount500
	signed long int stepLocal_3 = var_1_54;
	signed long int stepLocal_2 = var_1_65 & var_1_4;
	signed long int stepLocal_1 = var_1_3;
	signed long int stepLocal_0 = var_1_3;
	if (stepLocal_3 == (var_1_3 - var_1_4)) {
		if ((var_1_54 / var_1_5) <= stepLocal_1) {
			var_1_1 = (var_1_6 && (var_1_7 && var_1_8));
		} else {
			var_1_1 = (! var_1_6);
		}
	} else {
		if (stepLocal_2 != (var_1_3 / var_1_5)) {
			if (stepLocal_0 < -64) {
				var_1_1 = (var_1_10 || var_1_11);
			}
		}
	}


	// From: Req14Batch146Amount500
	signed long int stepLocal_13 = abs (var_1_35);
	signed long int stepLocal_12 = var_1_43 + -5;
	unsigned char stepLocal_11 = var_1_109 || var_1_1;
	if (stepLocal_11 || (! var_1_10)) {
		if (stepLocal_13 <= var_1_77) {
			if (stepLocal_12 <= var_1_5) {
				var_1_48 = var_1_39;
			} else {
				var_1_48 = (var_1_49 - var_1_39);
			}
		}
	} else {
		var_1_48 = (var_1_33 + (var_1_39 + var_1_34));
	}


	// From: Req20Batch146Amount500
	signed long int stepLocal_21 = 128;
	signed long int stepLocal_20 = 4 / 16;
	signed long int stepLocal_19 = var_1_56 + var_1_41;
	if (stepLocal_20 < last_1_var_1_61) {
		if (var_1_5 == stepLocal_19) {
			var_1_61 = (max ((max ((max (var_1_14 , var_1_49)) , var_1_16)) , (abs (var_1_77))));
		}
	} else {
		if (var_1_17) {
			if (var_1_10) {
				var_1_61 = (max ((max ((var_1_51 + var_1_77) , var_1_39)) , (var_1_13 - var_1_35)));
			}
		} else {
			if (var_1_51 > stepLocal_21) {
				var_1_61 = (max (var_1_35 , 25));
			}
		}
	}


	// From: Req46Batch146Amount500
	if (var_1_1) {
		var_1_104 = var_1_8;
	} else {
		var_1_104 = 1;
	}


	// From: Req53Batch146Amount500
	if (var_1_1) {
		var_1_111 = var_1_90;
	}


	// From: Req48Batch146Amount500
	if (var_1_10) {
		var_1_106 = var_1_111;
	}


	// From: Req2Batch146Amount500
	unsigned long int stepLocal_4 = var_1_111;
	if (! (var_1_111 <= var_1_3)) {
		var_1_12 = (var_1_13 - var_1_14);
	} else {
		if (-8 > stepLocal_4) {
			var_1_12 = (min (((var_1_15 + var_1_16) - var_1_14) , var_1_13));
		}
	}


	// From: Req32Batch146Amount500
	unsigned short int stepLocal_37 = var_1_65;
	unsigned long int stepLocal_36 = var_1_52 * var_1_43;
	signed long int stepLocal_35 = var_1_56;
	signed long int stepLocal_34 = var_1_87;
	unsigned char stepLocal_33 = var_1_34;
	unsigned char stepLocal_32 = var_1_65 > var_1_110;
	if (var_1_92 == stepLocal_33) {
		if (var_1_69 <= stepLocal_35) {
			if (stepLocal_32 || var_1_10) {
				var_1_79 = (var_1_70 + (min (var_1_39 , var_1_34)));
			}
		} else {
			var_1_79 = ((var_1_68 - var_1_70) - var_1_39);
		}
	} else {
		if (var_1_7) {
			if (! var_1_104) {
				if (var_1_65 == stepLocal_36) {
					var_1_79 = (var_1_30 - var_1_69);
				} else {
					var_1_79 = (max ((var_1_68 - var_1_33) , var_1_40));
				}
			} else {
				var_1_79 = var_1_30;
			}
		} else {
			if (stepLocal_34 < 4) {
				if (stepLocal_37 != var_1_51) {
					var_1_79 = (var_1_39 - var_1_70);
				}
			} else {
				if ((min (var_1_25 , var_1_53)) != var_1_23) {
					var_1_79 = (min (var_1_69 , (max ((var_1_70 - var_1_68) , var_1_33))));
				} else {
					var_1_79 = (var_1_69 - ((var_1_70 + var_1_81) + var_1_39));
				}
			}
		}
	}


	// From: Req29Batch146Amount500
	unsigned long int stepLocal_30 = var_1_111;
	if ((var_1_92 % (var_1_68 + var_1_76)) > stepLocal_30) {
		var_1_75 = (var_1_70 + var_1_32);
	} else {
		var_1_75 = (var_1_49 + ((min (10 , var_1_68)) - (var_1_34 + var_1_51)));
	}


	// From: Req13Batch146Amount500
	unsigned long int stepLocal_10 = var_1_43 + (var_1_106 + var_1_110);
	signed char stepLocal_9 = var_1_39;
	if (stepLocal_9 > (var_1_13 + var_1_110)) {
		var_1_47 = (max (var_1_22 , var_1_26));
	} else {
		if (var_1_11) {
			if (stepLocal_10 >= var_1_65) {
				var_1_47 = (min ((abs (var_1_22)) , var_1_23));
			} else {
				var_1_47 = var_1_25;
			}
		} else {
			var_1_47 = (var_1_24 + var_1_27);
		}
	}


	// From: Req7Batch146Amount500
	if ((- var_1_72) >= var_1_47) {
		if (var_1_14 >= ((abs (var_1_43)) + var_1_36)) {
			var_1_37 = ((min ((var_1_34 - var_1_39) , var_1_40)) + (abs (-2)));
		} else {
			var_1_37 = ((1 + var_1_41) + (max (var_1_40 , var_1_34)));
		}
	} else {
		var_1_37 = (64 - (abs (var_1_34)));
	}


	// From: Req28Batch146Amount500
	signed long int stepLocal_29 = - (1 << var_1_75);
	signed long int stepLocal_28 = var_1_70 - var_1_33;
	if (stepLocal_29 >= var_1_46) {
		var_1_74 = (min (((27797 - var_1_36) + (max (0 , var_1_15))) , var_1_70));
	} else {
		if (stepLocal_28 >= var_1_69) {
			var_1_74 = (var_1_15 + var_1_36);
		} else {
			var_1_74 = var_1_70;
		}
	}


	// From: Req38Batch146Amount500
	if (var_1_104) {
		if (-32 < (last_1_var_1_88 - var_1_89)) {
			var_1_88 = (var_1_81 + var_1_35);
		} else {
			if ((var_1_35 << var_1_44) <= (var_1_92 | last_1_var_1_88)) {
				if (var_1_5 > var_1_54) {
					var_1_88 = (var_1_13 - var_1_60);
				} else {
					var_1_88 = ((16392 + (var_1_90 - var_1_69)) - var_1_16);
				}
			} else {
				var_1_88 = ((max ((max (var_1_90 , var_1_74)) , (var_1_16 - var_1_111))) + var_1_44);
			}
		}
	} else {
		var_1_88 = (var_1_60 + (min (var_1_111 , var_1_68)));
	}


	// From: Req22Batch146Amount500
	if (var_1_47 > var_1_23) {
		var_1_64 = (var_1_27 + var_1_26);
	}


	// From: Req6Batch146Amount500
	signed char stepLocal_8 = var_1_45;
	if ((var_1_22 * var_1_82) <= var_1_64) {
		var_1_31 = var_1_32;
	} else {
		if (var_1_22 != (abs (var_1_27))) {
			var_1_31 = ((var_1_33 + var_1_34) + (max (var_1_35 , var_1_36)));
		} else {
			if (stepLocal_8 >= var_1_92) {
				var_1_31 = (var_1_34 + 32);
			}
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 32767);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 16383);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16384);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691400e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691400e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -1);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 64);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -31);
	assume_abort_if_not(var_1_41 <= 31);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 127);
	assume_abort_if_not(var_1_49 <= 254);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 2147483647);
	assume_abort_if_not(var_1_52 <= 4294967295);
	var_1_55 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_55 >= 1073741822);
	assume_abort_if_not(var_1_55 <= 2147483646);
	var_1_56 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 2147483646);
	var_1_57 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_57 >= -1073741823);
	assume_abort_if_not(var_1_57 <= 1073741823);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 190);
	assume_abort_if_not(var_1_60 <= 254);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= 94);
	assume_abort_if_not(var_1_68 <= 126);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 31);
	var_1_70 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 31);
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= -230584.3009213691400e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 2305843.009213691400e+12F && var_1_73 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 1);
	assume_abort_if_not(var_1_76 <= 127);
	var_1_81 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 31);
	var_1_89 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_89 >= 0);
	assume_abort_if_not(var_1_89 <= 2147483647);
	var_1_90 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_90 >= 24575);
	assume_abort_if_not(var_1_90 <= 32767);
	var_1_93 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_93 >= -922337.2036854776000e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 9223372.036854776000e+12F && var_1_93 >= 1.0e-20F ));
	assume_abort_if_not(var_1_93 != 0.0F);
	var_1_94 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_94 >= -1);
	assume_abort_if_not(var_1_94 <= 2147483646);
	var_1_95 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_95 >= 1073741823);
	assume_abort_if_not(var_1_95 <= 2147483646);
	var_1_96 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_96 >= 536870911);
	assume_abort_if_not(var_1_96 <= 1073741823);
	var_1_97 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_97 >= 536870911);
	assume_abort_if_not(var_1_97 <= 1073741823);
	var_1_98 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_98 >= 536870911);
	assume_abort_if_not(var_1_98 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_21 = var_1_21;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_110 = var_1_110;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_54 == (var_1_3 - var_1_4)) ? (((var_1_54 / var_1_5) <= var_1_3) ? (var_1_1 == ((unsigned char) (var_1_6 && (var_1_7 && var_1_8)))) : (var_1_1 == ((unsigned char) (! var_1_6)))) : (((var_1_65 & var_1_4) != (var_1_3 / var_1_5)) ? ((var_1_3 < -64) ? (var_1_1 == ((unsigned char) (var_1_10 || var_1_11))) : 1) : 1)) && ((! (var_1_111 <= var_1_3)) ? (var_1_12 == ((unsigned short int) (var_1_13 - var_1_14))) : ((-8 > var_1_111) ? (var_1_12 == ((unsigned short int) (min (((var_1_15 + var_1_16) - var_1_14) , var_1_13)))) : 1))) && (((last_1_var_1_72 + (0.25f + last_1_var_1_64)) >= 1.8f) ? ((var_1_15 <= 1) ? ((var_1_3 != last_1_var_1_46) ? (var_1_17 == ((unsigned char) var_1_10)) : 1) : 1) : (((var_1_3 / var_1_13) >= (min (last_1_var_1_46 , (var_1_16 - var_1_4)))) ? (var_1_17 == ((unsigned char) 1)) : (var_1_17 == ((unsigned char) var_1_8))))) && (var_1_10 ? (var_1_21 == ((double) (min (var_1_22 , 9.5)))) : (var_1_21 == ((double) ((abs (var_1_23 + var_1_24)) - ((var_1_25 + var_1_26) + (var_1_27 + var_1_28))))))) && (var_1_29 == ((signed char) (var_1_30 - 50)))) && (((var_1_22 * var_1_82) <= var_1_64) ? (var_1_31 == ((unsigned char) var_1_32)) : ((var_1_22 != (abs (var_1_27))) ? (var_1_31 == ((unsigned char) ((var_1_33 + var_1_34) + (max (var_1_35 , var_1_36))))) : ((var_1_45 >= var_1_92) ? (var_1_31 == ((unsigned char) (var_1_34 + 32))) : 1)))) && (((- var_1_72) >= var_1_47) ? ((var_1_14 >= ((abs (var_1_43)) + var_1_36)) ? (var_1_37 == ((signed char) ((min ((var_1_34 - var_1_39) , var_1_40)) + (abs (-2))))) : (var_1_37 == ((signed char) ((1 + var_1_41) + (max (var_1_40 , var_1_34)))))) : (var_1_37 == ((signed char) (64 - (abs (var_1_34))))))) && ((var_1_35 <= (var_1_32 * (var_1_34 / var_1_5))) ? (var_1_42 == ((signed long int) (var_1_36 - ((var_1_35 + var_1_15) + var_1_14)))) : (var_1_42 == ((signed long int) ((var_1_16 + (var_1_32 - var_1_33)) + var_1_40))))) && ((var_1_8 && var_1_6) ? (var_1_43 == ((signed long int) (min (var_1_33 , (max (var_1_92 , (var_1_16 + var_1_15))))))) : 1)) && ((last_1_var_1_42 <= var_1_14) ? (var_1_44 == ((unsigned short int) (37083 - (last_1_var_1_31 + (max (50 , var_1_36)))))) : (var_1_44 == ((unsigned short int) var_1_36)))) && ((var_1_40 > (max (var_1_39 , 25))) ? (var_1_45 == ((signed char) (max ((min ((max (var_1_34 , var_1_39)) , (var_1_40 + var_1_41))) , var_1_30)))) : (var_1_45 == ((signed char) var_1_30)))) && ((! (last_1_var_1_21 > 500.75)) ? (var_1_46 == ((unsigned long int) (last_1_var_1_75 + 256u))) : (var_1_46 == ((unsigned long int) ((max (var_1_32 , (var_1_36 + var_1_33))) + (min (last_1_var_1_75 , var_1_13))))))) && ((var_1_39 > (var_1_13 + var_1_110)) ? (var_1_47 == ((float) (max (var_1_22 , var_1_26)))) : (var_1_11 ? (((var_1_43 + (var_1_106 + var_1_110)) >= var_1_65) ? (var_1_47 == ((float) (min ((abs (var_1_22)) , var_1_23)))) : (var_1_47 == ((float) var_1_25))) : (var_1_47 == ((float) (var_1_24 + var_1_27)))))) && (((var_1_109 || var_1_1) || (! var_1_10)) ? (((abs (var_1_35)) <= var_1_77) ? (((var_1_43 + -5) <= var_1_5) ? (var_1_48 == ((unsigned char) var_1_39)) : (var_1_48 == ((unsigned char) (var_1_49 - var_1_39)))) : 1) : (var_1_48 == ((unsigned char) (var_1_33 + (var_1_39 + var_1_34)))))) && (var_1_6 ? (var_1_50 == ((unsigned char) (var_1_8 && var_1_7))) : 1)) && ((var_1_6 && ((var_1_52 - var_1_34) > (max (var_1_13 , last_1_var_1_51)))) ? (var_1_51 == ((signed long int) (var_1_39 - 2))) : ((var_1_23 > var_1_91) ? ((((- var_1_35) != var_1_66) || var_1_8) ? (var_1_51 == ((signed long int) (var_1_105 + var_1_34))) : 1) : (var_1_51 == ((signed long int) (min ((var_1_13 + var_1_84) , var_1_16))))))) && ((var_1_34 <= (var_1_33 / var_1_49)) ? (var_1_53 == ((float) (var_1_28 + (0.8f - var_1_27)))) : 1)) && ((var_1_43 <= var_1_108) ? (var_1_54 == ((signed long int) ((var_1_55 - var_1_14) - var_1_56))) : (var_1_54 == ((signed long int) ((min ((var_1_103 + var_1_36) , var_1_57)) + (var_1_35 + var_1_13)))))) && ((var_1_8 && var_1_17) ? (var_1_58 == ((unsigned char) (max (((var_1_60 - var_1_39) - var_1_33) , (min (var_1_32 , 5)))))) : 1)) && (((4 / 16) < last_1_var_1_61) ? ((var_1_5 == (var_1_56 + var_1_41)) ? (var_1_61 == ((unsigned short int) (max ((max ((max (var_1_14 , var_1_49)) , var_1_16)) , (abs (var_1_77)))))) : 1) : (var_1_17 ? (var_1_10 ? (var_1_61 == ((unsigned short int) (max ((max ((var_1_51 + var_1_77) , var_1_39)) , (var_1_13 - var_1_35))))) : 1) : ((var_1_51 > 128) ? (var_1_61 == ((unsigned short int) (max (var_1_35 , 25)))) : 1)))) && ((var_1_25 < 31.7) ? (((var_1_35 - var_1_15) < var_1_87) ? (var_1_63 == ((unsigned char) var_1_10)) : (var_1_63 == ((unsigned char) ((var_1_13 <= 2) || var_1_7)))) : 1)) && ((var_1_47 > var_1_23) ? (var_1_64 == ((float) (var_1_27 + var_1_26))) : 1)) && ((var_1_100 <= var_1_21) ? (var_1_65 == ((unsigned short int) (var_1_44 + var_1_15))) : (var_1_65 == ((unsigned short int) (var_1_13 - var_1_16))))) && (((min (64 , var_1_55)) != var_1_46) ? (var_1_66 == ((signed char) (10 - var_1_39))) : 1)) && (((var_1_40 * last_1_var_1_110) < (last_1_var_1_101 / var_1_60)) ? ((last_1_var_1_100 == var_1_27) ? (((last_1_var_1_101 >= -32) && var_1_10) ? (var_1_67 == ((signed char) (var_1_39 - ((var_1_68 - var_1_69) - (4 + var_1_70))))) : (((min (256 , var_1_69)) > last_1_var_1_61) ? (var_1_67 == ((signed char) (var_1_39 + var_1_40))) : (var_1_67 == ((signed char) (var_1_68 - (var_1_69 + var_1_70)))))) : 1) : 1)) && ((((var_1_32 / var_1_49) * var_1_34) >= var_1_39) ? (var_1_71 == ((unsigned short int) var_1_60)) : (var_1_71 == ((unsigned short int) (max (var_1_70 , ((min (var_1_35 , 128)) + var_1_102))))))) && (var_1_109 ? (var_1_72 == ((float) (max (((var_1_73 + var_1_28) + (var_1_26 + var_1_27)) , var_1_23)))) : 1)) && (((- (1 << var_1_75)) >= var_1_46) ? (var_1_74 == ((unsigned short int) (min (((27797 - var_1_36) + (max (0 , var_1_15))) , var_1_70)))) : (((var_1_70 - var_1_33) >= var_1_69) ? (var_1_74 == ((unsigned short int) (var_1_15 + var_1_36))) : (var_1_74 == ((unsigned short int) var_1_70))))) && (((var_1_92 % (var_1_68 + var_1_76)) > var_1_111) ? (var_1_75 == ((signed short int) (var_1_70 + var_1_32))) : (var_1_75 == ((signed short int) (var_1_49 + ((min (10 , var_1_68)) - (var_1_34 + var_1_51))))))) && (var_1_77 == ((unsigned char) ((var_1_60 - (var_1_69 + var_1_70)) - var_1_34)))) && (((var_1_50 || var_1_7) || var_1_10) ? (var_1_78 == ((signed char) (max (var_1_41 , (var_1_39 + (var_1_69 - var_1_70)))))) : 1)) && ((var_1_92 == var_1_34) ? ((var_1_69 <= var_1_56) ? (((var_1_65 > var_1_110) || var_1_10) ? (var_1_79 == ((signed char) (var_1_70 + (min (var_1_39 , var_1_34))))) : 1) : (var_1_79 == ((signed char) ((var_1_68 - var_1_70) - var_1_39)))) : (var_1_7 ? ((! var_1_104) ? ((var_1_65 == (var_1_52 * var_1_43)) ? (var_1_79 == ((signed char) (var_1_30 - var_1_69))) : (var_1_79 == ((signed char) (max ((var_1_68 - var_1_33) , var_1_40))))) : (var_1_79 == ((signed char) var_1_30))) : ((var_1_87 < 4) ? ((var_1_65 != var_1_51) ? (var_1_79 == ((signed char) (var_1_39 - var_1_70))) : 1) : (((min (var_1_25 , var_1_53)) != var_1_23) ? (var_1_79 == ((signed char) (min (var_1_69 , (max ((var_1_70 - var_1_68) , var_1_33)))))) : (var_1_79 == ((signed char) (var_1_69 - ((var_1_70 + var_1_81) + var_1_39))))))))) && ((var_1_42 != (min (var_1_110 , -256))) ? (var_1_82 == ((float) (min ((max (4.25f , var_1_25)) , var_1_24)))) : (var_1_82 == ((float) (min (var_1_22 , var_1_24)))))) && ((var_1_3 >= var_1_41) ? (var_1_84 == ((unsigned short int) (min (var_1_81 , ((var_1_60 + var_1_76) + var_1_36))))) : (var_1_84 == ((unsigned short int) (var_1_14 + (var_1_16 - var_1_58)))))) && (var_1_17 ? (var_1_85 == ((float) var_1_73)) : 1)) && ((var_1_16 != (abs (- var_1_110))) ? (var_1_86 == ((signed char) (var_1_81 + (var_1_41 + var_1_70)))) : (var_1_86 == ((signed char) -10)))) && ((var_1_57 >= var_1_32) ? (var_1_87 == ((signed long int) (((min (256 , 32)) - var_1_92) + var_1_30))) : 1)) && (var_1_104 ? ((-32 < (last_1_var_1_88 - var_1_89)) ? (var_1_88 == ((unsigned short int) (var_1_81 + var_1_35))) : (((var_1_35 << var_1_44) <= (var_1_92 | last_1_var_1_88)) ? ((var_1_5 > var_1_54) ? (var_1_88 == ((unsigned short int) (var_1_13 - var_1_60))) : (var_1_88 == ((unsigned short int) ((16392 + (var_1_90 - var_1_69)) - var_1_16)))) : (var_1_88 == ((unsigned short int) ((max ((max (var_1_90 , var_1_74)) , (var_1_16 - var_1_111))) + var_1_44))))) : (var_1_88 == ((unsigned short int) (var_1_60 + (min (var_1_111 , var_1_68))))))) && (((- var_1_57) <= var_1_90) ? (var_1_91 == ((double) (min (var_1_28 , (var_1_26 + var_1_24))))) : 1)) && ((((- var_1_26) / var_1_93) <= last_1_var_1_21) ? (var_1_92 == ((signed long int) (var_1_94 - (var_1_95 - 32)))) : (var_1_92 == ((signed long int) (((var_1_96 + var_1_97) - (var_1_98 - last_1_var_1_92)) - last_1_var_1_84))))) && ((var_1_85 > var_1_26) ? (var_1_99 == ((signed char) (max (var_1_30 , var_1_69)))) : (var_1_109 ? ((var_1_108 > var_1_92) ? (var_1_99 == ((signed char) (min (var_1_68 , (abs (var_1_70)))))) : 1) : 1))) && ((var_1_112 > (var_1_5 * 1)) ? (((var_1_94 <= var_1_41) && var_1_50) ? (var_1_100 == ((float) var_1_25)) : (var_1_100 == ((float) var_1_22))) : (var_1_100 == ((float) var_1_73)))) && (var_1_101 == ((signed short int) var_1_67))) && (var_1_102 == ((signed short int) var_1_112))) && (var_1_8 ? (var_1_103 == ((signed char) var_1_70)) : (var_1_103 == ((signed char) var_1_41)))) && (var_1_1 ? (var_1_104 == ((unsigned char) var_1_8)) : (var_1_104 == ((unsigned char) 1)))) && (var_1_105 == ((signed char) var_1_68))) && (var_1_10 ? (var_1_106 == ((unsigned long int) var_1_111)) : 1)) && (var_1_109 ? (var_1_107 == ((float) var_1_24)) : 1)) && (var_1_8 ? (var_1_108 == ((unsigned short int) var_1_16)) : (var_1_108 == ((unsigned short int) var_1_69)))) && (var_1_109 == ((unsigned char) var_1_6))) && (var_1_110 == ((signed long int) -500))) && (var_1_1 ? (var_1_111 == ((unsigned long int) var_1_90)) : 1)) && ((last_1_var_1_71 < ((last_1_var_1_44 / var_1_49) % var_1_15)) ? ((var_1_93 < last_1_var_1_85) ? (var_1_112 == ((unsigned char) (max (var_1_76 , (var_1_81 + var_1_36))))) : (var_1_112 == ((unsigned char) var_1_76))) : (var_1_112 == ((unsigned char) var_1_76)))
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
