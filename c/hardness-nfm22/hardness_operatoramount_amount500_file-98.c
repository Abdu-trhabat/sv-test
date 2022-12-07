// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch98Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -2;
unsigned long int var_1_4 = 128;
signed char var_1_5 = 100;
signed char var_1_6 = 5;
signed char var_1_7 = 64;
signed char var_1_8 = 2;
unsigned char var_1_9 = 8;
signed char var_1_10 = 64;
signed char var_1_12 = 8;
signed char var_1_13 = 10;
signed char var_1_14 = 10;
signed long int var_1_15 = 4;
signed long int var_1_16 = 2;
signed char var_1_17 = 2;
signed char var_1_18 = 64;
signed long int var_1_19 = 64;
signed char var_1_23 = 2;
signed char var_1_24 = 4;
unsigned short int var_1_25 = 2;
unsigned char var_1_26 = 64;
signed long int var_1_27 = -100000000;
unsigned long int var_1_29 = 16;
signed short int var_1_30 = -32;
unsigned char var_1_31 = 1;
signed long int var_1_32 = 1163009791;
unsigned char var_1_33 = 0;
signed long int var_1_34 = -10;
signed char var_1_35 = -128;
unsigned long int var_1_36 = 5;
unsigned short int var_1_37 = 256;
float var_1_39 = 3.6;
float var_1_40 = 4.75;
float var_1_41 = 0.3;
float var_1_42 = 63.5;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 1;
unsigned short int var_1_46 = 55352;
unsigned char var_1_47 = 0;
unsigned char var_1_49 = 4;
unsigned char var_1_50 = 128;
unsigned char var_1_51 = 200;
double var_1_52 = 999999999.25;
double var_1_53 = 25.75;
double var_1_54 = 3.5;
double var_1_55 = 256.5;
double var_1_56 = 7.25;
float var_1_57 = 10000000.5;
float var_1_59 = 9.5;
float var_1_60 = 16.25;
signed char var_1_61 = -2;
double var_1_63 = 255.75;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 1;
signed short int var_1_66 = 5;
unsigned char var_1_68 = 0;
signed char var_1_69 = 5;
signed short int var_1_70 = -4;
unsigned char var_1_71 = 10;
double var_1_73 = 5.2;
float var_1_74 = 128.5;
unsigned char var_1_75 = 10;
unsigned char var_1_76 = 1;
signed char var_1_77 = -64;
signed char var_1_78 = 32;
float var_1_79 = 4.8;
unsigned long int var_1_80 = 3629968717;
unsigned short int var_1_81 = 4;
double var_1_82 = 200.5;
unsigned long int var_1_83 = 256;
signed short int var_1_85 = 10;
float var_1_86 = 63.5;
unsigned long int var_1_87 = 64;
float var_1_88 = 10.6;
float var_1_89 = 9.5;
unsigned short int var_1_90 = 500;
double var_1_91 = 50.5;
double var_1_92 = 49.875;
unsigned char var_1_93 = 10;
signed short int var_1_94 = 0;
float var_1_95 = 256.6;
unsigned char var_1_96 = 1;
signed long int var_1_97 = -2;
unsigned char var_1_98 = 10;

// Calibration values

// Last'ed variables
signed char last_1_var_1_1 = -2;
unsigned char last_1_var_1_9 = 8;
signed char last_1_var_1_23 = 2;
unsigned char last_1_var_1_31 = 1;
signed long int last_1_var_1_34 = -10;
unsigned long int last_1_var_1_36 = 5;
signed char last_1_var_1_61 = -2;
signed short int last_1_var_1_66 = 5;
unsigned char last_1_var_1_71 = 10;
unsigned char last_1_var_1_75 = 10;
unsigned char last_1_var_1_76 = 1;
signed char last_1_var_1_77 = -64;
float last_1_var_1_79 = 4.8;
unsigned short int last_1_var_1_81 = 4;
float last_1_var_1_95 = 256.6;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req14Batch98Amount500
	if (var_1_12 > (var_1_5 - var_1_14)) {
		if ((16 * var_1_13) > var_1_17) {
			if (last_1_var_1_31) {
				var_1_36 = (min (last_1_var_1_75 , var_1_15));
			}
		} else {
			var_1_36 = ((min ((abs (last_1_var_1_61)) , (1156831779u - last_1_var_1_36))) + var_1_15);
		}
	} else {
		var_1_36 = (max ((abs (last_1_var_1_75)) , ((abs (var_1_16)) + var_1_15)));
	}


	// From: Req48Batch98Amount500
	signed long int stepLocal_36 = last_1_var_1_34;
	if (stepLocal_36 > (last_1_var_1_23 + var_1_5)) {
		var_1_95 = (var_1_56 + (abs (min (var_1_55 , var_1_53))));
	}


	// From: Req25Batch98Amount500
	if (last_1_var_1_75 != (last_1_var_1_81 * (min (last_1_var_1_1 , -128)))) {
		var_1_66 = (max (((min (var_1_7 , last_1_var_1_77)) - (var_1_18 + 256)) , last_1_var_1_66));
	} else {
		if ((var_1_8 - var_1_7) != (last_1_var_1_34 / (min (var_1_50 , var_1_18)))) {
			var_1_66 = (last_1_var_1_81 + var_1_50);
		}
	}


	// From: Req22Batch98Amount500
	if (var_1_66 < (max (-16 , var_1_13))) {
		var_1_61 = (max (var_1_18 , (max (2 , (min (var_1_17 , var_1_6))))));
	} else {
		if (var_1_33) {
			var_1_61 = var_1_12;
		} else {
			var_1_61 = ((var_1_15 + var_1_8) - var_1_14);
		}
	}


	// From: Req28Batch98Amount500
	signed long int stepLocal_30 = last_1_var_1_71;
	signed long int stepLocal_29 = max (var_1_16 , var_1_5);
	if ((min ((max (last_1_var_1_95 , var_1_42)) , (var_1_60 - var_1_41))) >= ((- last_1_var_1_79) + (- var_1_54))) {
		if ((- (var_1_16 / var_1_7)) >= stepLocal_30) {
			if (last_1_var_1_34 == stepLocal_29) {
				var_1_70 = (min ((min (var_1_12 , last_1_var_1_9)) , var_1_6));
			}
		}
	} else {
		var_1_70 = 32;
	}


	// From: Req11Batch98Amount500
	signed long int stepLocal_14 = (var_1_18 + var_1_15) - (var_1_32 - var_1_5);
	signed long int stepLocal_13 = max (var_1_8 , var_1_70);
	if ((min ((var_1_6 + var_1_24) , var_1_17)) < stepLocal_14) {
		if (stepLocal_13 < ((var_1_6 / var_1_32) * (var_1_14 - var_1_16))) {
			var_1_31 = var_1_33;
		} else {
			var_1_31 = var_1_33;
		}
	}


	// From: Req2Batch98Amount500
	var_1_9 = 8;


	// From: Req5Batch98Amount500
	signed char stepLocal_6 = var_1_12;
	signed long int stepLocal_5 = var_1_18 / var_1_7;
	if (stepLocal_5 >= var_1_4) {
		if (stepLocal_6 <= (var_1_18 + (5 / -1))) {
			var_1_23 = (max ((min ((min (-10 , var_1_24)) , (min (var_1_12 , var_1_18)))) , var_1_8));
		} else {
			var_1_23 = (abs (var_1_5));
		}
	}


	// From: Req6Batch98Amount500
	signed long int stepLocal_7 = 25 - var_1_16;
	if (var_1_18 < stepLocal_7) {
		var_1_25 = (var_1_17 + var_1_13);
	} else {
		var_1_25 = (200 + 2);
	}


	// From: Req7Batch98Amount500
	signed char stepLocal_8 = var_1_5;
	if (var_1_6 == stepLocal_8) {
		var_1_26 = (abs (var_1_14));
	} else {
		var_1_26 = ((min (var_1_15 , (var_1_14 + var_1_13))) + (min (var_1_17 , (64 - var_1_6))));
	}


	// From: Req26Batch98Amount500
	var_1_68 = (! var_1_33);


	// From: Req30Batch98Amount500
	if (var_1_41 >= ((var_1_59 - var_1_60) / var_1_74)) {
		var_1_73 = (max ((var_1_54 + (var_1_55 + var_1_53)) , var_1_41));
	}


	// From: Req35Batch98Amount500
	var_1_81 = var_1_16;


	// From: Req36Batch98Amount500
	var_1_82 = var_1_40;


	// From: Req41Batch98Amount500
	var_1_88 = var_1_54;


	// From: Req44Batch98Amount500
	var_1_91 = var_1_55;


	// From: Req45Batch98Amount500
	var_1_92 = var_1_56;


	// From: Req46Batch98Amount500
	if (var_1_31) {
		var_1_93 = var_1_18;
	}


	// From: Req47Batch98Amount500
	if (var_1_31) {
		var_1_94 = var_1_50;
	} else {
		var_1_94 = var_1_7;
	}


	// From: Req49Batch98Amount500
	var_1_96 = 0;


	// From: Req50Batch98Amount500
	var_1_97 = var_1_13;


	// From: Req51Batch98Amount500
	var_1_98 = var_1_6;


	// From: Req15Batch98Amount500
	unsigned long int stepLocal_17 = max ((var_1_4 * var_1_97) , var_1_13);
	if (stepLocal_17 < (- 128u)) {
		var_1_37 = var_1_17;
	} else {
		var_1_37 = ((var_1_16 + var_1_6) + var_1_26);
	}


	// From: Req17Batch98Amount500
	if (var_1_68) {
		var_1_43 = var_1_44;
	} else {
		var_1_43 = var_1_44;
	}


	// From: Req19Batch98Amount500
	if ((var_1_9 % var_1_5) >= var_1_37) {
		var_1_49 = (abs (var_1_18));
	} else {
		if (var_1_40 <= var_1_41) {
			var_1_49 = (var_1_50 - ((min (0 , var_1_14)) + var_1_17));
		} else {
			if ((- var_1_46) != var_1_15) {
				var_1_49 = ((var_1_51 - var_1_8) - var_1_15);
			} else {
				var_1_49 = (min ((var_1_7 + var_1_17) , (var_1_6 + var_1_14)));
			}
		}
	}


	// From: Req23Batch98Amount500
	unsigned long int stepLocal_23 = 16u;
	unsigned char stepLocal_22 = var_1_93;
	if ((4u + var_1_51) < stepLocal_23) {
		var_1_63 = var_1_54;
	} else {
		if (((max (var_1_81 , var_1_17)) + var_1_46) >= stepLocal_22) {
			var_1_63 = (min (var_1_40 , var_1_53));
		} else {
			var_1_63 = (min (var_1_54 , var_1_42));
		}
	}


	// From: Req27Batch98Amount500
	unsigned char stepLocal_28 = var_1_33;
	signed long int stepLocal_27 = var_1_17 + (var_1_97 + var_1_93);
	if (var_1_98 < stepLocal_27) {
		var_1_69 = var_1_14;
	} else {
		if (stepLocal_28 && var_1_44) {
			var_1_69 = ((abs (-32)) - var_1_15);
		} else {
			var_1_69 = (min ((var_1_18 - var_1_17) , var_1_51));
		}
	}


	// From: Req29Batch98Amount500
	if (var_1_43) {
		var_1_71 = (max (var_1_50 , (var_1_5 + var_1_14)));
	}


	// From: Req39Batch98Amount500
	if (var_1_43) {
		var_1_86 = var_1_42;
	} else {
		var_1_86 = var_1_53;
	}


	// From: Req42Batch98Amount500
	if (var_1_96) {
		var_1_89 = var_1_41;
	} else {
		var_1_89 = var_1_56;
	}


	// From: Req13Batch98Amount500
	signed long int stepLocal_16 = var_1_17 - (var_1_32 - var_1_18);
	signed long int stepLocal_15 = min (var_1_14 , var_1_13);
	if (var_1_66 < stepLocal_16) {
		if (var_1_37 < stepLocal_15) {
			var_1_35 = (var_1_7 - var_1_16);
		}
	} else {
		var_1_35 = var_1_17;
	}


	// From: Req20Batch98Amount500
	if (var_1_43) {
		if ((var_1_46 - var_1_23) < ((1 - var_1_70) | var_1_6)) {
			var_1_52 = var_1_41;
		} else {
			if (var_1_44) {
				var_1_52 = (abs (var_1_41));
			}
		}
	} else {
		var_1_52 = ((max ((var_1_53 + 16.5) , (var_1_54 + var_1_55))) + var_1_56);
	}


	// From: Req32Batch98Amount500
	signed long int stepLocal_34 = var_1_50 + (var_1_70 - 1);
	signed long int stepLocal_33 = var_1_16;
	if (stepLocal_33 < last_1_var_1_76) {
		if (var_1_43) {
			var_1_76 = (var_1_13 + 100);
		} else {
			var_1_76 = (128 - var_1_6);
		}
	} else {
		if (((var_1_51 >> var_1_97) * last_1_var_1_76) >= stepLocal_34) {
			var_1_76 = ((max (var_1_5 , var_1_16)) + (max (var_1_13 , var_1_15)));
		} else {
			var_1_76 = ((max (var_1_51 , var_1_50)) - var_1_13);
		}
	}


	// From: Req3Batch98Amount500
	signed long int stepLocal_2 = var_1_5 >> (max (var_1_15 , var_1_16));
	signed char stepLocal_1 = var_1_8;
	unsigned long int stepLocal_0 = - 128u;
	if (! var_1_43) {
		var_1_10 = ((var_1_12 + (var_1_13 - var_1_14)) + var_1_6);
	} else {
		if ((min (var_1_13 , (var_1_7 / var_1_5))) <= stepLocal_1) {
			var_1_10 = (min ((min (var_1_14 , var_1_12)) , var_1_8));
		} else {
			if ((var_1_9 * var_1_8) == stepLocal_0) {
				if (var_1_4 >= stepLocal_2) {
					var_1_10 = ((var_1_13 - var_1_17) + (var_1_12 + var_1_16));
				} else {
					var_1_10 = (var_1_6 + var_1_13);
				}
			} else {
				var_1_10 = (var_1_8 - ((min (var_1_7 , var_1_18)) - var_1_6));
			}
		}
	}


	// From: Req33Batch98Amount500
	if (var_1_95 >= (min ((var_1_52 + var_1_89) , var_1_54))) {
		var_1_77 = ((var_1_7 - (var_1_78 - var_1_16)) - (max (var_1_6 , 4)));
	} else {
		var_1_77 = ((var_1_14 + var_1_13) - (max (4 , var_1_8)));
	}


	// From: Req34Batch98Amount500
	unsigned char stepLocal_35 = (var_1_51 + var_1_9) != (var_1_80 - var_1_7);
	if ((var_1_77 >= 1000) && stepLocal_35) {
		var_1_79 = (min ((abs (var_1_41)) , (max ((var_1_60 - var_1_42) , var_1_53))));
	} else {
		var_1_79 = var_1_55;
	}


	// From: Req4Batch98Amount500
	signed char stepLocal_4 = var_1_13;
	unsigned long int stepLocal_3 = - 4u;
	if (var_1_43) {
		if (stepLocal_4 == var_1_4) {
			if (var_1_4 > stepLocal_3) {
				var_1_19 = var_1_15;
			} else {
				var_1_19 = (var_1_16 - var_1_49);
			}
		} else {
			if (var_1_68) {
				var_1_19 = (var_1_14 - var_1_15);
			} else {
				if ((- var_1_79) <= var_1_95) {
					var_1_19 = ((max (var_1_18 , 5)) + var_1_12);
				}
			}
		}
	} else {
		var_1_19 = var_1_17;
	}


	// From: Req8Batch98Amount500
	unsigned char stepLocal_9 = (var_1_12 > var_1_10) || var_1_68;
	if (stepLocal_9 || (var_1_66 != (var_1_6 - var_1_5))) {
		var_1_27 = var_1_16;
	} else {
		var_1_27 = var_1_70;
	}


	// From: Req43Batch98Amount500
	var_1_90 = var_1_27;


	// From: Req1Batch98Amount500
	if (10u <= (abs (var_1_37))) {
		if ((min (16u , var_1_37)) >= (var_1_19 % var_1_4)) {
			var_1_1 = ((var_1_5 - var_1_6) - (var_1_7 - var_1_8));
		}
	}


	// From: Req24Batch98Amount500
	signed long int stepLocal_26 = (var_1_35 / var_1_46) >> var_1_12;
	signed char stepLocal_25 = var_1_77;
	signed long int stepLocal_24 = 64;
	if ((var_1_27 + 16) != stepLocal_25) {
		if (stepLocal_24 >= (var_1_7 - var_1_51)) {
			if (! (var_1_70 < (var_1_14 - var_1_18))) {
				var_1_64 = (var_1_33 && (var_1_47 && var_1_65));
			}
		} else {
			var_1_64 = (var_1_33 && var_1_44);
		}
	} else {
		if ((min (var_1_41 , (- var_1_56))) <= var_1_42) {
			var_1_64 = (! (var_1_47 || (! var_1_44)));
		} else {
			if (((var_1_9 >> var_1_14) * var_1_17) <= stepLocal_26) {
				var_1_64 = (var_1_31 || (var_1_65 && var_1_33));
			} else {
				var_1_64 = (var_1_96 || ((var_1_27 != var_1_70) || var_1_47));
			}
		}
	}


	// From: Req9Batch98Amount500
	unsigned char stepLocal_11 = var_1_64;
	signed char stepLocal_10 = var_1_13;
	if (-16 > stepLocal_10) {
		if (var_1_96 && stepLocal_11) {
			var_1_29 = (min (var_1_15 , var_1_8));
		}
	} else {
		var_1_29 = (max (var_1_7 , var_1_15));
	}


	// From: Req21Batch98Amount500
	if ((var_1_98 % (var_1_5 + var_1_7)) != var_1_17) {
		if (var_1_91 < ((var_1_59 + var_1_60) - var_1_41)) {
			if (var_1_33 && var_1_64) {
				var_1_57 = (abs (var_1_59));
			} else {
				var_1_57 = (var_1_55 + var_1_56);
			}
		}
	} else {
		var_1_57 = (min (var_1_42 , (abs (var_1_40))));
	}


	// From: Req37Batch98Amount500
	if (var_1_64) {
		var_1_83 = var_1_81;
	} else {
		var_1_83 = 10u;
	}


	// From: Req38Batch98Amount500
	if (var_1_64) {
		var_1_85 = var_1_36;
	} else {
		var_1_85 = var_1_76;
	}


	// From: Req12Batch98Amount500
	if (var_1_13 >= var_1_24) {
		if (var_1_33) {
			var_1_34 = (abs (var_1_8 - var_1_15));
		} else {
			var_1_34 = (var_1_16 + var_1_1);
		}
	} else {
		if (0 == var_1_1) {
			var_1_34 = (min (var_1_6 , (var_1_13 - var_1_66)));
		} else {
			var_1_34 = (var_1_6 - 32);
		}
	}


	// From: Req10Batch98Amount500
	signed long int stepLocal_12 = var_1_6 - (max (var_1_17 , var_1_10));
	if (stepLocal_12 > 500) {
		var_1_30 = var_1_85;
	}


	// From: Req16Batch98Amount500
	unsigned char stepLocal_19 = -256 < var_1_76;
	unsigned long int stepLocal_18 = var_1_36;
	if (var_1_64) {
		if (stepLocal_18 >= var_1_97) {
			var_1_39 = var_1_40;
		} else {
			if (stepLocal_19 && ((max (var_1_90 , var_1_61)) >= var_1_30)) {
				var_1_39 = (var_1_41 - var_1_42);
			}
		}
	}


	// From: Req18Batch98Amount500
	unsigned char stepLocal_21 = var_1_9;
	signed long int stepLocal_20 = min ((var_1_81 * var_1_46) , var_1_7);
	if ((var_1_46 - (var_1_15 + var_1_35)) <= stepLocal_21) {
		var_1_45 = (var_1_33 && (! (! var_1_47)));
	} else {
		if (var_1_34 > stepLocal_20) {
			var_1_45 = (! var_1_44);
		}
	}


	// From: Req31Batch98Amount500
	unsigned long int stepLocal_32 = var_1_36;
	unsigned char stepLocal_31 = ! var_1_31;
	if (stepLocal_31 || (var_1_64 && (var_1_79 != var_1_55))) {
		if (var_1_88 == var_1_41) {
			if (var_1_74 < 0.125f) {
				var_1_75 = (abs (max ((max (var_1_8 , var_1_5)) , var_1_18)));
			} else {
				if (var_1_95 != var_1_53) {
					if (stepLocal_32 < (last_1_var_1_75 * var_1_85)) {
						var_1_75 = (var_1_8 + (var_1_18 - (min (var_1_17 , var_1_15))));
					} else {
						var_1_75 = (max ((var_1_50 - var_1_16) , (max ((min (var_1_13 , var_1_17)) , var_1_8))));
					}
				} else {
					var_1_75 = var_1_13;
				}
			}
		} else {
			var_1_75 = ((max ((var_1_13 + var_1_15) , (var_1_7 - var_1_6))) + (var_1_8 + var_1_17));
		}
	}


	// From: Req40Batch98Amount500
	if (var_1_47) {
		var_1_87 = var_1_15;
	} else {
		var_1_87 = var_1_75;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 62);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 63);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -31);
	assume_abort_if_not(var_1_12 <= 32);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 31);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 31);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 8);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 8);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 63);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -127);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= 1073741823);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -922337.2036854765600e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 32767);
	assume_abort_if_not(var_1_46 <= 65535);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 127);
	assume_abort_if_not(var_1_50 <= 254);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 190);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= -230584.3009213691390e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 2305843.009213691390e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= -230584.3009213691390e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691390e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= -230584.3009213691390e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691390e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= -461168.6018427382800e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427387900e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427387900e+12F && var_1_60 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 1);
	assume_abort_if_not(var_1_65 <= 1);
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= -922337.2036854776000e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854776000e+12F && var_1_74 >= 1.0e-20F ));
	assume_abort_if_not(var_1_74 != 0.0F);
	var_1_78 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_78 >= 31);
	assume_abort_if_not(var_1_78 <= 63);
	var_1_80 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_80 >= 2147483647);
	assume_abort_if_not(var_1_80 <= 4294967295);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_95 = var_1_95;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((10u <= (abs (var_1_37))) ? (((min (16u , var_1_37)) >= (var_1_19 % var_1_4)) ? (var_1_1 == ((signed char) ((var_1_5 - var_1_6) - (var_1_7 - var_1_8)))) : 1) : 1) && (var_1_9 == ((unsigned char) 8))) && ((! var_1_43) ? (var_1_10 == ((signed char) ((var_1_12 + (var_1_13 - var_1_14)) + var_1_6))) : (((min (var_1_13 , (var_1_7 / var_1_5))) <= var_1_8) ? (var_1_10 == ((signed char) (min ((min (var_1_14 , var_1_12)) , var_1_8)))) : (((var_1_9 * var_1_8) == (- 128u)) ? ((var_1_4 >= (var_1_5 >> (max (var_1_15 , var_1_16)))) ? (var_1_10 == ((signed char) ((var_1_13 - var_1_17) + (var_1_12 + var_1_16)))) : (var_1_10 == ((signed char) (var_1_6 + var_1_13)))) : (var_1_10 == ((signed char) (var_1_8 - ((min (var_1_7 , var_1_18)) - var_1_6)))))))) && (var_1_43 ? ((var_1_13 == var_1_4) ? ((var_1_4 > (- 4u)) ? (var_1_19 == ((signed long int) var_1_15)) : (var_1_19 == ((signed long int) (var_1_16 - var_1_49)))) : (var_1_68 ? (var_1_19 == ((signed long int) (var_1_14 - var_1_15))) : (((- var_1_79) <= var_1_95) ? (var_1_19 == ((signed long int) ((max (var_1_18 , 5)) + var_1_12))) : 1))) : (var_1_19 == ((signed long int) var_1_17)))) && (((var_1_18 / var_1_7) >= var_1_4) ? ((var_1_12 <= (var_1_18 + (5 / -1))) ? (var_1_23 == ((signed char) (max ((min ((min (-10 , var_1_24)) , (min (var_1_12 , var_1_18)))) , var_1_8)))) : (var_1_23 == ((signed char) (abs (var_1_5))))) : 1)) && ((var_1_18 < (25 - var_1_16)) ? (var_1_25 == ((unsigned short int) (var_1_17 + var_1_13))) : (var_1_25 == ((unsigned short int) (200 + 2))))) && ((var_1_6 == var_1_5) ? (var_1_26 == ((unsigned char) (abs (var_1_14)))) : (var_1_26 == ((unsigned char) ((min (var_1_15 , (var_1_14 + var_1_13))) + (min (var_1_17 , (64 - var_1_6)))))))) && ((((var_1_12 > var_1_10) || var_1_68) || (var_1_66 != (var_1_6 - var_1_5))) ? (var_1_27 == ((signed long int) var_1_16)) : (var_1_27 == ((signed long int) var_1_70)))) && ((-16 > var_1_13) ? ((var_1_96 && var_1_64) ? (var_1_29 == ((unsigned long int) (min (var_1_15 , var_1_8)))) : 1) : (var_1_29 == ((unsigned long int) (max (var_1_7 , var_1_15)))))) && (((var_1_6 - (max (var_1_17 , var_1_10))) > 500) ? (var_1_30 == ((signed short int) var_1_85)) : 1)) && (((min ((var_1_6 + var_1_24) , var_1_17)) < ((var_1_18 + var_1_15) - (var_1_32 - var_1_5))) ? (((max (var_1_8 , var_1_70)) < ((var_1_6 / var_1_32) * (var_1_14 - var_1_16))) ? (var_1_31 == ((unsigned char) var_1_33)) : (var_1_31 == ((unsigned char) var_1_33))) : 1)) && ((var_1_13 >= var_1_24) ? (var_1_33 ? (var_1_34 == ((signed long int) (abs (var_1_8 - var_1_15)))) : (var_1_34 == ((signed long int) (var_1_16 + var_1_1)))) : ((0 == var_1_1) ? (var_1_34 == ((signed long int) (min (var_1_6 , (var_1_13 - var_1_66))))) : (var_1_34 == ((signed long int) (var_1_6 - 32)))))) && ((var_1_66 < (var_1_17 - (var_1_32 - var_1_18))) ? ((var_1_37 < (min (var_1_14 , var_1_13))) ? (var_1_35 == ((signed char) (var_1_7 - var_1_16))) : 1) : (var_1_35 == ((signed char) var_1_17)))) && ((var_1_12 > (var_1_5 - var_1_14)) ? (((16 * var_1_13) > var_1_17) ? (last_1_var_1_31 ? (var_1_36 == ((unsigned long int) (min (last_1_var_1_75 , var_1_15)))) : 1) : (var_1_36 == ((unsigned long int) ((min ((abs (last_1_var_1_61)) , (1156831779u - last_1_var_1_36))) + var_1_15)))) : (var_1_36 == ((unsigned long int) (max ((abs (last_1_var_1_75)) , ((abs (var_1_16)) + var_1_15))))))) && (((max ((var_1_4 * var_1_97) , var_1_13)) < (- 128u)) ? (var_1_37 == ((unsigned short int) var_1_17)) : (var_1_37 == ((unsigned short int) ((var_1_16 + var_1_6) + var_1_26))))) && (var_1_64 ? ((var_1_36 >= var_1_97) ? (var_1_39 == ((float) var_1_40)) : (((-256 < var_1_76) && ((max (var_1_90 , var_1_61)) >= var_1_30)) ? (var_1_39 == ((float) (var_1_41 - var_1_42))) : 1)) : 1)) && (var_1_68 ? (var_1_43 == ((unsigned char) var_1_44)) : (var_1_43 == ((unsigned char) var_1_44)))) && (((var_1_46 - (var_1_15 + var_1_35)) <= var_1_9) ? (var_1_45 == ((unsigned char) (var_1_33 && (! (! var_1_47))))) : ((var_1_34 > (min ((var_1_81 * var_1_46) , var_1_7))) ? (var_1_45 == ((unsigned char) (! var_1_44))) : 1))) && (((var_1_9 % var_1_5) >= var_1_37) ? (var_1_49 == ((unsigned char) (abs (var_1_18)))) : ((var_1_40 <= var_1_41) ? (var_1_49 == ((unsigned char) (var_1_50 - ((min (0 , var_1_14)) + var_1_17)))) : (((- var_1_46) != var_1_15) ? (var_1_49 == ((unsigned char) ((var_1_51 - var_1_8) - var_1_15))) : (var_1_49 == ((unsigned char) (min ((var_1_7 + var_1_17) , (var_1_6 + var_1_14))))))))) && (var_1_43 ? (((var_1_46 - var_1_23) < ((1 - var_1_70) | var_1_6)) ? (var_1_52 == ((double) var_1_41)) : (var_1_44 ? (var_1_52 == ((double) (abs (var_1_41)))) : 1)) : (var_1_52 == ((double) ((max ((var_1_53 + 16.5) , (var_1_54 + var_1_55))) + var_1_56))))) && (((var_1_98 % (var_1_5 + var_1_7)) != var_1_17) ? ((var_1_91 < ((var_1_59 + var_1_60) - var_1_41)) ? ((var_1_33 && var_1_64) ? (var_1_57 == ((float) (abs (var_1_59)))) : (var_1_57 == ((float) (var_1_55 + var_1_56)))) : 1) : (var_1_57 == ((float) (min (var_1_42 , (abs (var_1_40)))))))) && ((var_1_66 < (max (-16 , var_1_13))) ? (var_1_61 == ((signed char) (max (var_1_18 , (max (2 , (min (var_1_17 , var_1_6)))))))) : (var_1_33 ? (var_1_61 == ((signed char) var_1_12)) : (var_1_61 == ((signed char) ((var_1_15 + var_1_8) - var_1_14)))))) && (((4u + var_1_51) < 16u) ? (var_1_63 == ((double) var_1_54)) : ((((max (var_1_81 , var_1_17)) + var_1_46) >= var_1_93) ? (var_1_63 == ((double) (min (var_1_40 , var_1_53)))) : (var_1_63 == ((double) (min (var_1_54 , var_1_42))))))) && (((var_1_27 + 16) != var_1_77) ? ((64 >= (var_1_7 - var_1_51)) ? ((! (var_1_70 < (var_1_14 - var_1_18))) ? (var_1_64 == ((unsigned char) (var_1_33 && (var_1_47 && var_1_65)))) : 1) : (var_1_64 == ((unsigned char) (var_1_33 && var_1_44)))) : (((min (var_1_41 , (- var_1_56))) <= var_1_42) ? (var_1_64 == ((unsigned char) (! (var_1_47 || (! var_1_44))))) : ((((var_1_9 >> var_1_14) * var_1_17) <= ((var_1_35 / var_1_46) >> var_1_12)) ? (var_1_64 == ((unsigned char) (var_1_31 || (var_1_65 && var_1_33)))) : (var_1_64 == ((unsigned char) (var_1_96 || ((var_1_27 != var_1_70) || var_1_47)))))))) && ((last_1_var_1_75 != (last_1_var_1_81 * (min (last_1_var_1_1 , -128)))) ? (var_1_66 == ((signed short int) (max (((min (var_1_7 , last_1_var_1_77)) - (var_1_18 + 256)) , last_1_var_1_66)))) : (((var_1_8 - var_1_7) != (last_1_var_1_34 / (min (var_1_50 , var_1_18)))) ? (var_1_66 == ((signed short int) (last_1_var_1_81 + var_1_50))) : 1))) && (var_1_68 == ((unsigned char) (! var_1_33)))) && ((var_1_98 < (var_1_17 + (var_1_97 + var_1_93))) ? (var_1_69 == ((signed char) var_1_14)) : ((var_1_33 && var_1_44) ? (var_1_69 == ((signed char) ((abs (-32)) - var_1_15))) : (var_1_69 == ((signed char) (min ((var_1_18 - var_1_17) , var_1_51))))))) && (((min ((max (last_1_var_1_95 , var_1_42)) , (var_1_60 - var_1_41))) >= ((- last_1_var_1_79) + (- var_1_54))) ? (((- (var_1_16 / var_1_7)) >= last_1_var_1_71) ? ((last_1_var_1_34 == (max (var_1_16 , var_1_5))) ? (var_1_70 == ((signed short int) (min ((min (var_1_12 , last_1_var_1_9)) , var_1_6)))) : 1) : 1) : (var_1_70 == ((signed short int) 32)))) && (var_1_43 ? (var_1_71 == ((unsigned char) (max (var_1_50 , (var_1_5 + var_1_14))))) : 1)) && ((var_1_41 >= ((var_1_59 - var_1_60) / var_1_74)) ? (var_1_73 == ((double) (max ((var_1_54 + (var_1_55 + var_1_53)) , var_1_41)))) : 1)) && (((! var_1_31) || (var_1_64 && (var_1_79 != var_1_55))) ? ((var_1_88 == var_1_41) ? ((var_1_74 < 0.125f) ? (var_1_75 == ((unsigned char) (abs (max ((max (var_1_8 , var_1_5)) , var_1_18))))) : ((var_1_95 != var_1_53) ? ((var_1_36 < (last_1_var_1_75 * var_1_85)) ? (var_1_75 == ((unsigned char) (var_1_8 + (var_1_18 - (min (var_1_17 , var_1_15)))))) : (var_1_75 == ((unsigned char) (max ((var_1_50 - var_1_16) , (max ((min (var_1_13 , var_1_17)) , var_1_8))))))) : (var_1_75 == ((unsigned char) var_1_13)))) : (var_1_75 == ((unsigned char) ((max ((var_1_13 + var_1_15) , (var_1_7 - var_1_6))) + (var_1_8 + var_1_17))))) : 1)) && ((var_1_16 < last_1_var_1_76) ? (var_1_43 ? (var_1_76 == ((unsigned char) (var_1_13 + 100))) : (var_1_76 == ((unsigned char) (128 - var_1_6)))) : ((((var_1_51 >> var_1_97) * last_1_var_1_76) >= (var_1_50 + (var_1_70 - 1))) ? (var_1_76 == ((unsigned char) ((max (var_1_5 , var_1_16)) + (max (var_1_13 , var_1_15))))) : (var_1_76 == ((unsigned char) ((max (var_1_51 , var_1_50)) - var_1_13)))))) && ((var_1_95 >= (min ((var_1_52 + var_1_89) , var_1_54))) ? (var_1_77 == ((signed char) ((var_1_7 - (var_1_78 - var_1_16)) - (max (var_1_6 , 4))))) : (var_1_77 == ((signed char) ((var_1_14 + var_1_13) - (max (4 , var_1_8))))))) && (((var_1_77 >= 1000) && ((var_1_51 + var_1_9) != (var_1_80 - var_1_7))) ? (var_1_79 == ((float) (min ((abs (var_1_41)) , (max ((var_1_60 - var_1_42) , var_1_53)))))) : (var_1_79 == ((float) var_1_55)))) && (var_1_81 == ((unsigned short int) var_1_16))) && (var_1_82 == ((double) var_1_40))) && (var_1_64 ? (var_1_83 == ((unsigned long int) var_1_81)) : (var_1_83 == ((unsigned long int) 10u)))) && (var_1_64 ? (var_1_85 == ((signed short int) var_1_36)) : (var_1_85 == ((signed short int) var_1_76)))) && (var_1_43 ? (var_1_86 == ((float) var_1_42)) : (var_1_86 == ((float) var_1_53)))) && (var_1_47 ? (var_1_87 == ((unsigned long int) var_1_15)) : (var_1_87 == ((unsigned long int) var_1_75)))) && (var_1_88 == ((float) var_1_54))) && (var_1_96 ? (var_1_89 == ((float) var_1_41)) : (var_1_89 == ((float) var_1_56)))) && (var_1_90 == ((unsigned short int) var_1_27))) && (var_1_91 == ((double) var_1_55))) && (var_1_92 == ((double) var_1_56))) && (var_1_31 ? (var_1_93 == ((unsigned char) var_1_18)) : 1)) && (var_1_31 ? (var_1_94 == ((signed short int) var_1_50)) : (var_1_94 == ((signed short int) var_1_7)))) && ((last_1_var_1_34 > (last_1_var_1_23 + var_1_5)) ? (var_1_95 == ((float) (var_1_56 + (abs (min (var_1_55 , var_1_53)))))) : 1)) && (var_1_96 == ((unsigned char) 0))) && (var_1_97 == ((signed long int) var_1_13))) && (var_1_98 == ((unsigned char) var_1_6))
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
