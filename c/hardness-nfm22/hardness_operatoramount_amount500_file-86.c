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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch86Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 0;
signed char var_1_6 = 32;
signed char var_1_7 = 32;
signed char var_1_8 = 1;
signed char var_1_9 = 32;
signed char var_1_10 = 5;
signed char var_1_11 = 2;
signed char var_1_12 = -100;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 32;
double var_1_17 = 7.35;
signed char var_1_18 = -32;
unsigned char var_1_19 = 200;
unsigned char var_1_20 = 5;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 128;
signed char var_1_23 = -50;
signed char var_1_24 = -10;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 4;
unsigned char var_1_27 = 100;
unsigned char var_1_28 = 64;
signed char var_1_29 = -8;
unsigned long int var_1_30 = 0;
unsigned long int var_1_31 = 3025578991;
unsigned long int var_1_32 = 8;
float var_1_33 = 63.5;
signed char var_1_35 = 8;
unsigned char var_1_36 = 10;
unsigned short int var_1_37 = 8;
unsigned short int var_1_38 = 51702;
unsigned short int var_1_39 = 59257;
unsigned short int var_1_40 = 19131;
unsigned short int var_1_41 = 5;
double var_1_42 = 3.4;
signed long int var_1_43 = 1263439470;
double var_1_44 = 0.0;
double var_1_45 = 0.2;
double var_1_46 = 10.3;
signed long int var_1_47 = -128;
double var_1_48 = 1.5;
double var_1_49 = 0.25;
double var_1_50 = 1.4;
double var_1_51 = 9999999999.25;
double var_1_52 = 3.75;
signed char var_1_53 = 0;
signed char var_1_54 = 100;
signed char var_1_55 = 0;
unsigned char var_1_56 = 1;
signed short int var_1_58 = 200;
signed char var_1_59 = -16;
double var_1_60 = 2.9;
double var_1_61 = 0.5;
signed char var_1_62 = 8;
unsigned long int var_1_63 = 8;
double var_1_64 = 255.75;
double var_1_65 = 128.2;
double var_1_66 = 10.5;
double var_1_67 = 1.5;
double var_1_68 = 0.0;
signed short int var_1_69 = 256;
float var_1_70 = 128.5;
float var_1_72 = 2.375;
float var_1_73 = 4.4;
float var_1_74 = 1.5;
unsigned long int var_1_75 = 4;
unsigned long int var_1_76 = 256;
unsigned char var_1_77 = 0;
signed short int var_1_78 = 5;
signed short int var_1_79 = 2;
unsigned short int var_1_80 = 5;
signed long int var_1_81 = -5;
signed char var_1_82 = 50;
unsigned char var_1_84 = 0;
unsigned char var_1_85 = 5;
unsigned char var_1_86 = 0;
unsigned short int var_1_87 = 128;
unsigned char var_1_88 = 2;
unsigned long int var_1_89 = 10;
unsigned char var_1_90 = 10;
unsigned char var_1_91 = 200;
float var_1_93 = 64.5;
signed long int var_1_94 = -10;
signed char var_1_96 = 8;
unsigned char var_1_97 = 1;
unsigned char var_1_98 = 0;
unsigned char var_1_99 = 0;
signed long int var_1_100 = -256;
unsigned long int var_1_101 = 200;
signed long int var_1_102 = -16;
double var_1_103 = 49.6;
unsigned short int var_1_104 = 64;
signed short int var_1_105 = -4;
unsigned char var_1_107 = 0;
unsigned char var_1_108 = 5;
unsigned long int var_1_109 = 16;
unsigned char var_1_110 = 64;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_13 = 0;
unsigned char last_1_var_1_25 = 1;
unsigned long int last_1_var_1_32 = 8;
unsigned short int last_1_var_1_37 = 8;
signed short int last_1_var_1_58 = 200;
unsigned long int last_1_var_1_63 = 8;
unsigned short int last_1_var_1_80 = 5;
unsigned char last_1_var_1_91 = 200;
unsigned long int last_1_var_1_109 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req29Batch86Amount500
	unsigned char stepLocal_18 = last_1_var_1_91 >= var_1_10;
	if ((var_1_67 >= var_1_44) || stepLocal_18) {
		var_1_70 = ((var_1_46 - (4.495344105324116E18f - var_1_72)) + var_1_49);
	} else {
		if (var_1_68 >= (min ((var_1_46 - var_1_72) , (var_1_44 / 2.8)))) {
			var_1_70 = (min ((var_1_68 - var_1_46) , var_1_73));
		} else {
			var_1_70 = var_1_51;
		}
	}


	// From: Req8Batch86Amount500
	signed char stepLocal_7 = var_1_6;
	signed char stepLocal_6 = var_1_11;
	signed long int stepLocal_5 = last_1_var_1_58;
	if (stepLocal_5 == var_1_24) {
		if (stepLocal_7 >= ((var_1_11 / var_1_19) << last_1_var_1_32)) {
			var_1_25 = var_1_15;
		} else {
			var_1_25 = (! var_1_14);
		}
	} else {
		if (stepLocal_6 <= last_1_var_1_37) {
			var_1_25 = (! var_1_15);
		} else {
			var_1_25 = (! var_1_14);
		}
	}


	// From: Req2Batch86Amount500
	if (! (var_1_12 <= (var_1_6 - var_1_10))) {
		if (! last_1_var_1_25) {
			var_1_13 = (! (last_1_var_1_13 || (last_1_var_1_25 || var_1_14)));
		} else {
			if (var_1_10 > var_1_11) {
				var_1_13 = 0;
			} else {
				if (last_1_var_1_13) {
					var_1_13 = var_1_14;
				} else {
					var_1_13 = var_1_15;
				}
			}
		}
	} else {
		if (var_1_14) {
			var_1_13 = var_1_15;
		}
	}


	// From: Req49Batch86Amount500
	if (var_1_13) {
		var_1_98 = var_1_15;
	} else {
		var_1_98 = var_1_99;
	}


	// From: Req20Batch86Amount500
	unsigned char stepLocal_15 = var_1_13;
	if (var_1_13 && stepLocal_15) {
		var_1_56 = var_1_14;
	} else {
		if (var_1_44 < var_1_17) {
			var_1_56 = (! var_1_15);
		}
	}


	// From: Req41Batch86Amount500
	if (var_1_56) {
		var_1_88 = (var_1_21 - var_1_10);
	}


	// From: Req51Batch86Amount500
	if (var_1_56) {
		var_1_101 = var_1_40;
	} else {
		var_1_101 = 10u;
	}


	// From: Req56Batch86Amount500
	if (var_1_98) {
		var_1_107 = var_1_15;
	}


	// From: Req5Batch86Amount500
	signed char stepLocal_4 = var_1_7;
	if (stepLocal_4 >= (var_1_9 - var_1_11)) {
		var_1_20 = (min (var_1_10 , (200 - var_1_11)));
	} else {
		var_1_20 = (var_1_21 - var_1_11);
	}


	// From: Req9Batch86Amount500
	if (! var_1_25) {
		var_1_26 = (max (((var_1_27 + var_1_28) - var_1_9) , var_1_6));
	}


	// From: Req10Batch86Amount500
	var_1_29 = (var_1_11 - var_1_9);


	// From: Req24Batch86Amount500
	var_1_62 = ((min (var_1_10 , (var_1_55 + var_1_7))) - var_1_9);


	// From: Req34Batch86Amount500
	var_1_78 = (var_1_55 + var_1_8);


	// From: Req35Batch86Amount500
	var_1_79 = ((min (var_1_9 , var_1_11)) - 10);


	// From: Req37Batch86Amount500
	var_1_81 = (var_1_7 - (min (var_1_9 , var_1_40)));


	// From: Req42Batch86Amount500
	var_1_89 = (abs (var_1_39));


	// From: Req43Batch86Amount500
	signed long int stepLocal_23 = (abs (var_1_8)) / var_1_27;
	if (var_1_55 == stepLocal_23) {
		var_1_90 = var_1_7;
	} else {
		if (var_1_61 > (abs (128.6))) {
			var_1_90 = (10 + (max (var_1_55 , var_1_6)));
		} else {
			var_1_90 = (var_1_10 + var_1_27);
		}
	}


	// From: Req45Batch86Amount500
	if (var_1_98) {
		var_1_93 = var_1_67;
	} else {
		var_1_93 = var_1_50;
	}


	// From: Req47Batch86Amount500
	var_1_96 = var_1_6;


	// From: Req48Batch86Amount500
	var_1_97 = var_1_9;


	// From: Req52Batch86Amount500
	if (var_1_107) {
		var_1_102 = 1;
	}


	// From: Req53Batch86Amount500
	var_1_103 = var_1_67;


	// From: Req54Batch86Amount500
	var_1_104 = var_1_19;


	// From: Req57Batch86Amount500
	if (var_1_98) {
		var_1_108 = var_1_55;
	}


	// From: Req59Batch86Amount500
	var_1_110 = var_1_55;


	// From: Req58Batch86Amount500
	unsigned char stepLocal_24 = var_1_88;
	if (var_1_98) {
		var_1_109 = (min ((var_1_31 - var_1_28) , var_1_40));
	} else {
		if (stepLocal_24 >= last_1_var_1_109) {
			if (var_1_98) {
				var_1_109 = var_1_19;
			} else {
				var_1_109 = var_1_89;
			}
		}
	}


	// From: Req7Batch86Amount500
	if (500u <= var_1_110) {
		var_1_23 = var_1_24;
	} else {
		var_1_23 = (max ((var_1_6 - var_1_11) , var_1_19));
	}


	// From: Req11Batch86Amount500
	if (! var_1_15) {
		var_1_30 = ((min ((1u + var_1_11) , var_1_90)) + var_1_6);
	} else {
		var_1_30 = (var_1_31 - var_1_90);
	}


	// From: Req22Batch86Amount500
	signed long int stepLocal_16 = abs (var_1_8);
	if (stepLocal_16 < (min (var_1_79 , var_1_62))) {
		var_1_59 = var_1_19;
	} else {
		var_1_59 = (min (var_1_10 , var_1_24));
	}


	// From: Req28Batch86Amount500
	if (((abs (var_1_39)) - (min (2 , var_1_55))) < -256) {
		var_1_69 = var_1_12;
	} else {
		if ((- 2) >= var_1_62) {
			var_1_69 = (var_1_27 + var_1_89);
		}
	}


	// From: Req30Batch86Amount500
	if (var_1_30 > (- 10u)) {
		var_1_74 = (min (var_1_50 , ((min (var_1_46 , var_1_68)) - var_1_61)));
	}


	// From: Req32Batch86Amount500
	if (2u < var_1_90) {
		var_1_76 = (abs (min (var_1_28 , var_1_54)));
	} else {
		var_1_76 = (var_1_31 - var_1_10);
	}


	// From: Req33Batch86Amount500
	if ((var_1_46 + (var_1_65 - var_1_72)) >= (var_1_103 / var_1_44)) {
		var_1_77 = (! var_1_15);
	}


	// From: Req46Batch86Amount500
	if (var_1_25) {
		var_1_94 = var_1_97;
	}


	// From: Req55Batch86Amount500
	if (var_1_99) {
		var_1_105 = var_1_69;
	} else {
		var_1_105 = var_1_90;
	}


	// From: Req16Batch86Amount500
	if (var_1_24 <= var_1_109) {
		var_1_41 = (min (var_1_11 , (abs (var_1_21))));
	} else {
		var_1_41 = var_1_109;
	}


	// From: Req18Batch86Amount500
	if (((var_1_41 / var_1_19) << 1) < (2u / (var_1_31 - 64u))) {
		var_1_52 = (min ((min (5.125 , var_1_17)) , var_1_50));
	}


	// From: Req4Batch86Amount500
	signed long int stepLocal_3 = (var_1_19 - var_1_10) - var_1_11;
	signed char stepLocal_2 = var_1_62;
	signed char stepLocal_1 = var_1_12;
	if (stepLocal_2 < (var_1_7 * var_1_10)) {
		if (var_1_62 <= stepLocal_3) {
			if (stepLocal_1 < (var_1_6 - (max (var_1_11 , var_1_10)))) {
				if (var_1_77) {
					var_1_18 = var_1_9;
				} else {
					var_1_18 = var_1_11;
				}
			}
		}
	}


	// From: Req6Batch86Amount500
	if ((var_1_10 / (min (var_1_21 , var_1_19))) > var_1_105) {
		var_1_22 = (abs (var_1_6));
	} else {
		var_1_22 = (max (((64 - var_1_7) + var_1_10) , var_1_9));
	}


	// From: Req17Batch86Amount500
	if (((var_1_39 + var_1_22) - (var_1_43 - 1000000)) > ((~ var_1_28) ^ var_1_9)) {
		var_1_42 = (((abs (var_1_44)) - (max (var_1_45 , var_1_46))) - var_1_17);
	} else {
		if (var_1_56) {
			var_1_42 = (var_1_46 - 9.6);
		} else {
			if (5 < ((abs (25)) / var_1_47)) {
				var_1_42 = 499.1;
			} else {
				if (var_1_6 >= (var_1_7 - var_1_10)) {
					var_1_42 = (min (var_1_46 , (var_1_45 + (max (var_1_48 , var_1_49)))));
				} else {
					var_1_42 = (var_1_46 + (var_1_50 + var_1_51));
				}
			}
		}
	}


	// From: Req26Batch86Amount500
	if (63.875f <= var_1_74) {
		var_1_64 = (var_1_61 - (var_1_45 + var_1_65));
	}


	// From: Req27Batch86Amount500
	if (var_1_77) {
		var_1_66 = (max (var_1_44 , var_1_67));
	} else {
		var_1_66 = ((var_1_65 + var_1_61) - (min (var_1_45 , (var_1_68 - 9.99999999975E9))));
	}


	// From: Req38Batch86Amount500
	if (var_1_19 <= var_1_90) {
		if ((min (var_1_97 , (var_1_105 / var_1_54))) > (var_1_38 / (max (var_1_27 , var_1_39)))) {
			var_1_82 = ((var_1_10 - var_1_6) + var_1_9);
		}
	}


	// From: Req50Batch86Amount500
	var_1_100 = var_1_22;


	// From: Req44Batch86Amount500
	if ((var_1_19 * (var_1_31 - var_1_100)) >= var_1_7) {
		var_1_91 = (var_1_21 - 32);
	} else {
		if (var_1_70 <= var_1_51) {
			var_1_91 = var_1_28;
		}
	}


	// From: Req14Batch86Amount500
	unsigned char stepLocal_10 = var_1_97;
	signed long int stepLocal_9 = (var_1_21 >> var_1_81) + (var_1_82 * var_1_10);
	if (var_1_12 <= stepLocal_10) {
		if (stepLocal_9 < var_1_7) {
			var_1_36 = (var_1_21 - (abs (var_1_28)));
		} else {
			var_1_36 = (abs (var_1_6));
		}
	} else {
		var_1_36 = (var_1_7 + var_1_11);
	}


	// From: Req19Batch86Amount500
	signed long int stepLocal_14 = -16;
	if (! var_1_107) {
		var_1_53 = (((var_1_54 - var_1_55) - var_1_7) - var_1_6);
	} else {
		if (var_1_56) {
			var_1_53 = (abs (var_1_7 + var_1_8));
		} else {
			if (stepLocal_14 <= (min (var_1_27 , (var_1_24 + var_1_100)))) {
				var_1_53 = ((var_1_6 + var_1_7) - var_1_55);
			} else {
				var_1_53 = (max (var_1_6 , var_1_54));
			}
		}
	}


	// From: Req23Batch86Amount500
	unsigned char stepLocal_17 = var_1_38 < var_1_36;
	if (var_1_14 && stepLocal_17) {
		var_1_60 = (max (var_1_49 , var_1_45));
	} else {
		var_1_60 = (max (var_1_44 , (var_1_45 + (var_1_46 - var_1_61))));
	}


	// From: Req40Batch86Amount500
	signed char stepLocal_22 = var_1_10;
	unsigned char stepLocal_21 = var_1_91;
	if (var_1_89 >= stepLocal_22) {
		var_1_87 = (min ((var_1_39 - var_1_21) , (max (var_1_10 , (var_1_38 - var_1_110)))));
	} else {
		if (stepLocal_21 > (var_1_12 / var_1_28)) {
			var_1_87 = (min (128 , 2));
		} else {
			if (var_1_48 > var_1_68) {
				var_1_87 = ((max (var_1_9 , var_1_89)) + var_1_27);
			}
		}
	}


	// From: Req12Batch86Amount500
	signed long int stepLocal_8 = abs (256);
	if (((var_1_17 + var_1_52) / var_1_33) >= (min (var_1_52 , var_1_60))) {
		if (stepLocal_8 >= var_1_11) {
			var_1_32 = (var_1_101 + var_1_27);
		}
	} else {
		if ((min (var_1_52 , var_1_52)) >= var_1_33) {
			if (var_1_13) {
				if (var_1_13) {
					var_1_32 = var_1_27;
				}
			} else {
				var_1_32 = var_1_62;
			}
		}
	}


	// From: Req1Batch86Amount500
	if (! (var_1_25 || (var_1_60 > var_1_60))) {
		if (var_1_25) {
			if (var_1_98) {
				var_1_1 = (abs ((var_1_6 - var_1_7) + var_1_8));
			} else {
				var_1_1 = (min ((var_1_7 - var_1_6) , ((var_1_9 + var_1_10) - var_1_11)));
			}
		} else {
			var_1_1 = var_1_12;
		}
	} else {
		var_1_1 = (var_1_9 - (min (var_1_11 , var_1_7)));
	}


	// From: Req3Batch86Amount500
	unsigned char stepLocal_0 = var_1_14;
	if (var_1_15 || stepLocal_0) {
		var_1_16 = var_1_11;
	} else {
		if (var_1_60 < ((6.7364143877573919E18 - var_1_17) - (4.9208241645531177E18 - 24.5))) {
			var_1_16 = (32 + (64 - var_1_9));
		}
	}


	// From: Req21Batch86Amount500
	if (var_1_40 >= var_1_87) {
		var_1_58 = (((max (var_1_7 , -64)) + -4) + last_1_var_1_58);
	} else {
		var_1_58 = (var_1_110 + (var_1_7 + (var_1_10 + var_1_89)));
	}


	// From: Req36Batch86Amount500
	if (var_1_25) {
		var_1_80 = (var_1_38 - (var_1_55 + 32));
	} else {
		var_1_80 = ((var_1_40 - last_1_var_1_80) + var_1_16);
	}


	// From: Req15Batch86Amount500
	unsigned char stepLocal_13 = var_1_98;
	unsigned char stepLocal_12 = var_1_27;
	unsigned short int stepLocal_11 = var_1_80;
	if (stepLocal_11 < var_1_10) {
		if (stepLocal_12 > var_1_6) {
			var_1_37 = 256;
		} else {
			if (var_1_107 || stepLocal_13) {
				if ((var_1_17 + 64.875) <= var_1_103) {
					var_1_37 = ((min ((var_1_38 - var_1_36) , var_1_39)) - ((abs (var_1_40)) - var_1_7));
				} else {
					var_1_37 = var_1_29;
				}
			}
		}
	} else {
		var_1_37 = (var_1_39 - var_1_9);
	}


	// From: Req25Batch86Amount500
	if (! (var_1_24 == var_1_55)) {
		if (-4 == (last_1_var_1_63 - 256)) {
			var_1_63 = (min (var_1_29 , (last_1_var_1_63 + (min (var_1_9 , var_1_54)))));
		} else {
			var_1_63 = (max (var_1_37 , last_1_var_1_63));
		}
	} else {
		if ((var_1_77 || (var_1_19 >= var_1_30)) || (var_1_9 > var_1_29)) {
			var_1_63 = var_1_11;
		}
	}


	// From: Req39Batch86Amount500
	unsigned short int stepLocal_20 = var_1_37;
	signed long int stepLocal_19 = max (2 , (var_1_28 / var_1_19));
	if (var_1_53 <= stepLocal_19) {
		var_1_84 = (var_1_55 + (var_1_27 - (var_1_85 + var_1_86)));
	} else {
		if ((var_1_82 >> var_1_41) > stepLocal_20) {
			if (var_1_46 > (max (32.182 , var_1_42))) {
				var_1_84 = ((max (var_1_55 , var_1_85)) + (max (var_1_86 , (var_1_54 - var_1_10))));
			} else {
				var_1_84 = (abs (var_1_54));
			}
		}
	}


	// From: Req13Batch86Amount500
	if (var_1_107) {
		if ((! (var_1_11 <= var_1_28)) && var_1_15) {
			if (var_1_14) {
				var_1_35 = ((var_1_6 + var_1_9) - (min ((100 - var_1_7) , 16)));
			}
		} else {
			if (((var_1_28 | var_1_10) * var_1_19) <= var_1_63) {
				var_1_35 = 8;
			} else {
				var_1_35 = var_1_10;
			}
		}
	} else {
		var_1_35 = (max (var_1_24 , (var_1_10 + (min (var_1_7 , var_1_6)))));
	}


	// From: Req31Batch86Amount500
	if (var_1_61 <= 127.25) {
		var_1_75 = (var_1_79 + var_1_84);
	} else {
		var_1_75 = var_1_88;
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -63);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427387900e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 191);
	assume_abort_if_not(var_1_19 <= 255);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 127);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -127);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 63);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 64);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 2147483647);
	assume_abort_if_not(var_1_31 <= 4294967294);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	assume_abort_if_not(var_1_33 != 0.0F);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 49150);
	assume_abort_if_not(var_1_38 <= 65534);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 32767);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 16383);
	assume_abort_if_not(var_1_40 <= 32767);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= 1073741823);
	assume_abort_if_not(var_1_43 <= 2147483647);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854765600e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= -461168.6018427382800e+13F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_47 >= -2147483648);
	assume_abort_if_not(var_1_47 <= 2147483647);
	assume_abort_if_not(var_1_47 != 0);
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -461168.6018427382800e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427382800e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= -461168.6018427382800e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -230584.3009213691390e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691390e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -230584.3009213691390e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691390e+12F && var_1_51 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 94);
	assume_abort_if_not(var_1_54 <= 126);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 32);
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 4611686.018427382800e+12F && var_1_65 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= -922337.2036854765600e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854765600e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= 4611686.018427382800e+12F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854765600e+12F && var_1_68 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691390e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= -922337.2036854765600e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854765600e+12F && var_1_73 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 32);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 31);
	var_1_99 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_99 >= 0);
	assume_abort_if_not(var_1_99 <= 0);
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_109 = var_1_109;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((! (var_1_25 || (var_1_60 > var_1_60))) ? (var_1_25 ? (var_1_98 ? (var_1_1 == ((signed char) (abs ((var_1_6 - var_1_7) + var_1_8)))) : (var_1_1 == ((signed char) (min ((var_1_7 - var_1_6) , ((var_1_9 + var_1_10) - var_1_11)))))) : (var_1_1 == ((signed char) var_1_12))) : (var_1_1 == ((signed char) (var_1_9 - (min (var_1_11 , var_1_7)))))) && ((! (var_1_12 <= (var_1_6 - var_1_10))) ? ((! last_1_var_1_25) ? (var_1_13 == ((unsigned char) (! (last_1_var_1_13 || (last_1_var_1_25 || var_1_14))))) : ((var_1_10 > var_1_11) ? (var_1_13 == ((unsigned char) 0)) : (last_1_var_1_13 ? (var_1_13 == ((unsigned char) var_1_14)) : (var_1_13 == ((unsigned char) var_1_15))))) : (var_1_14 ? (var_1_13 == ((unsigned char) var_1_15)) : 1))) && ((var_1_15 || var_1_14) ? (var_1_16 == ((unsigned char) var_1_11)) : ((var_1_60 < ((6.7364143877573919E18 - var_1_17) - (4.9208241645531177E18 - 24.5))) ? (var_1_16 == ((unsigned char) (32 + (64 - var_1_9)))) : 1))) && ((var_1_62 < (var_1_7 * var_1_10)) ? ((var_1_62 <= ((var_1_19 - var_1_10) - var_1_11)) ? ((var_1_12 < (var_1_6 - (max (var_1_11 , var_1_10)))) ? (var_1_77 ? (var_1_18 == ((signed char) var_1_9)) : (var_1_18 == ((signed char) var_1_11))) : 1) : 1) : 1)) && ((var_1_7 >= (var_1_9 - var_1_11)) ? (var_1_20 == ((unsigned char) (min (var_1_10 , (200 - var_1_11))))) : (var_1_20 == ((unsigned char) (var_1_21 - var_1_11))))) && (((var_1_10 / (min (var_1_21 , var_1_19))) > var_1_105) ? (var_1_22 == ((unsigned char) (abs (var_1_6)))) : (var_1_22 == ((unsigned char) (max (((64 - var_1_7) + var_1_10) , var_1_9)))))) && ((500u <= var_1_110) ? (var_1_23 == ((signed char) var_1_24)) : (var_1_23 == ((signed char) (max ((var_1_6 - var_1_11) , var_1_19)))))) && ((last_1_var_1_58 == var_1_24) ? ((var_1_6 >= ((var_1_11 / var_1_19) << last_1_var_1_32)) ? (var_1_25 == ((unsigned char) var_1_15)) : (var_1_25 == ((unsigned char) (! var_1_14)))) : ((var_1_11 <= last_1_var_1_37) ? (var_1_25 == ((unsigned char) (! var_1_15))) : (var_1_25 == ((unsigned char) (! var_1_14)))))) && ((! var_1_25) ? (var_1_26 == ((unsigned char) (max (((var_1_27 + var_1_28) - var_1_9) , var_1_6)))) : 1)) && (var_1_29 == ((signed char) (var_1_11 - var_1_9)))) && ((! var_1_15) ? (var_1_30 == ((unsigned long int) ((min ((1u + var_1_11) , var_1_90)) + var_1_6))) : (var_1_30 == ((unsigned long int) (var_1_31 - var_1_90))))) && ((((var_1_17 + var_1_52) / var_1_33) >= (min (var_1_52 , var_1_60))) ? (((abs (256)) >= var_1_11) ? (var_1_32 == ((unsigned long int) (var_1_101 + var_1_27))) : 1) : (((min (var_1_52 , var_1_52)) >= var_1_33) ? (var_1_13 ? (var_1_13 ? (var_1_32 == ((unsigned long int) var_1_27)) : 1) : (var_1_32 == ((unsigned long int) var_1_62))) : 1))) && (var_1_107 ? (((! (var_1_11 <= var_1_28)) && var_1_15) ? (var_1_14 ? (var_1_35 == ((signed char) ((var_1_6 + var_1_9) - (min ((100 - var_1_7) , 16))))) : 1) : ((((var_1_28 | var_1_10) * var_1_19) <= var_1_63) ? (var_1_35 == ((signed char) 8)) : (var_1_35 == ((signed char) var_1_10)))) : (var_1_35 == ((signed char) (max (var_1_24 , (var_1_10 + (min (var_1_7 , var_1_6))))))))) && ((var_1_12 <= var_1_97) ? ((((var_1_21 >> var_1_81) + (var_1_82 * var_1_10)) < var_1_7) ? (var_1_36 == ((unsigned char) (var_1_21 - (abs (var_1_28))))) : (var_1_36 == ((unsigned char) (abs (var_1_6))))) : (var_1_36 == ((unsigned char) (var_1_7 + var_1_11))))) && ((var_1_80 < var_1_10) ? ((var_1_27 > var_1_6) ? (var_1_37 == ((unsigned short int) 256)) : ((var_1_107 || var_1_98) ? (((var_1_17 + 64.875) <= var_1_103) ? (var_1_37 == ((unsigned short int) ((min ((var_1_38 - var_1_36) , var_1_39)) - ((abs (var_1_40)) - var_1_7)))) : (var_1_37 == ((unsigned short int) var_1_29))) : 1)) : (var_1_37 == ((unsigned short int) (var_1_39 - var_1_9))))) && ((var_1_24 <= var_1_109) ? (var_1_41 == ((unsigned short int) (min (var_1_11 , (abs (var_1_21)))))) : (var_1_41 == ((unsigned short int) var_1_109)))) && ((((var_1_39 + var_1_22) - (var_1_43 - 1000000)) > ((~ var_1_28) ^ var_1_9)) ? (var_1_42 == ((double) (((abs (var_1_44)) - (max (var_1_45 , var_1_46))) - var_1_17))) : (var_1_56 ? (var_1_42 == ((double) (var_1_46 - 9.6))) : ((5 < ((abs (25)) / var_1_47)) ? (var_1_42 == ((double) 499.1)) : ((var_1_6 >= (var_1_7 - var_1_10)) ? (var_1_42 == ((double) (min (var_1_46 , (var_1_45 + (max (var_1_48 , var_1_49))))))) : (var_1_42 == ((double) (var_1_46 + (var_1_50 + var_1_51))))))))) && ((((var_1_41 / var_1_19) << 1) < (2u / (var_1_31 - 64u))) ? (var_1_52 == ((double) (min ((min (5.125 , var_1_17)) , var_1_50)))) : 1)) && ((! var_1_107) ? (var_1_53 == ((signed char) (((var_1_54 - var_1_55) - var_1_7) - var_1_6))) : (var_1_56 ? (var_1_53 == ((signed char) (abs (var_1_7 + var_1_8)))) : ((-16 <= (min (var_1_27 , (var_1_24 + var_1_100)))) ? (var_1_53 == ((signed char) ((var_1_6 + var_1_7) - var_1_55))) : (var_1_53 == ((signed char) (max (var_1_6 , var_1_54)))))))) && ((var_1_13 && var_1_13) ? (var_1_56 == ((unsigned char) var_1_14)) : ((var_1_44 < var_1_17) ? (var_1_56 == ((unsigned char) (! var_1_15))) : 1))) && ((var_1_40 >= var_1_87) ? (var_1_58 == ((signed short int) (((max (var_1_7 , -64)) + -4) + last_1_var_1_58))) : (var_1_58 == ((signed short int) (var_1_110 + (var_1_7 + (var_1_10 + var_1_89))))))) && (((abs (var_1_8)) < (min (var_1_79 , var_1_62))) ? (var_1_59 == ((signed char) var_1_19)) : (var_1_59 == ((signed char) (min (var_1_10 , var_1_24)))))) && ((var_1_14 && (var_1_38 < var_1_36)) ? (var_1_60 == ((double) (max (var_1_49 , var_1_45)))) : (var_1_60 == ((double) (max (var_1_44 , (var_1_45 + (var_1_46 - var_1_61)))))))) && (var_1_62 == ((signed char) ((min (var_1_10 , (var_1_55 + var_1_7))) - var_1_9)))) && ((! (var_1_24 == var_1_55)) ? ((-4 == (last_1_var_1_63 - 256)) ? (var_1_63 == ((unsigned long int) (min (var_1_29 , (last_1_var_1_63 + (min (var_1_9 , var_1_54))))))) : (var_1_63 == ((unsigned long int) (max (var_1_37 , last_1_var_1_63))))) : (((var_1_77 || (var_1_19 >= var_1_30)) || (var_1_9 > var_1_29)) ? (var_1_63 == ((unsigned long int) var_1_11)) : 1))) && ((63.875f <= var_1_74) ? (var_1_64 == ((double) (var_1_61 - (var_1_45 + var_1_65)))) : 1)) && (var_1_77 ? (var_1_66 == ((double) (max (var_1_44 , var_1_67)))) : (var_1_66 == ((double) ((var_1_65 + var_1_61) - (min (var_1_45 , (var_1_68 - 9.99999999975E9)))))))) && ((((abs (var_1_39)) - (min (2 , var_1_55))) < -256) ? (var_1_69 == ((signed short int) var_1_12)) : (((- 2) >= var_1_62) ? (var_1_69 == ((signed short int) (var_1_27 + var_1_89))) : 1))) && (((var_1_67 >= var_1_44) || (last_1_var_1_91 >= var_1_10)) ? (var_1_70 == ((float) ((var_1_46 - (4.495344105324116E18f - var_1_72)) + var_1_49))) : ((var_1_68 >= (min ((var_1_46 - var_1_72) , (var_1_44 / 2.8)))) ? (var_1_70 == ((float) (min ((var_1_68 - var_1_46) , var_1_73)))) : (var_1_70 == ((float) var_1_51))))) && ((var_1_30 > (- 10u)) ? (var_1_74 == ((float) (min (var_1_50 , ((min (var_1_46 , var_1_68)) - var_1_61))))) : 1)) && ((var_1_61 <= 127.25) ? (var_1_75 == ((unsigned long int) (var_1_79 + var_1_84))) : (var_1_75 == ((unsigned long int) var_1_88)))) && ((2u < var_1_90) ? (var_1_76 == ((unsigned long int) (abs (min (var_1_28 , var_1_54))))) : (var_1_76 == ((unsigned long int) (var_1_31 - var_1_10))))) && (((var_1_46 + (var_1_65 - var_1_72)) >= (var_1_103 / var_1_44)) ? (var_1_77 == ((unsigned char) (! var_1_15))) : 1)) && (var_1_78 == ((signed short int) (var_1_55 + var_1_8)))) && (var_1_79 == ((signed short int) ((min (var_1_9 , var_1_11)) - 10)))) && (var_1_25 ? (var_1_80 == ((unsigned short int) (var_1_38 - (var_1_55 + 32)))) : (var_1_80 == ((unsigned short int) ((var_1_40 - last_1_var_1_80) + var_1_16))))) && (var_1_81 == ((signed long int) (var_1_7 - (min (var_1_9 , var_1_40)))))) && ((var_1_19 <= var_1_90) ? (((min (var_1_97 , (var_1_105 / var_1_54))) > (var_1_38 / (max (var_1_27 , var_1_39)))) ? (var_1_82 == ((signed char) ((var_1_10 - var_1_6) + var_1_9))) : 1) : 1)) && ((var_1_53 <= (max (2 , (var_1_28 / var_1_19)))) ? (var_1_84 == ((unsigned char) (var_1_55 + (var_1_27 - (var_1_85 + var_1_86))))) : (((var_1_82 >> var_1_41) > var_1_37) ? ((var_1_46 > (max (32.182 , var_1_42))) ? (var_1_84 == ((unsigned char) ((max (var_1_55 , var_1_85)) + (max (var_1_86 , (var_1_54 - var_1_10)))))) : (var_1_84 == ((unsigned char) (abs (var_1_54))))) : 1))) && ((var_1_89 >= var_1_10) ? (var_1_87 == ((unsigned short int) (min ((var_1_39 - var_1_21) , (max (var_1_10 , (var_1_38 - var_1_110))))))) : ((var_1_91 > (var_1_12 / var_1_28)) ? (var_1_87 == ((unsigned short int) (min (128 , 2)))) : ((var_1_48 > var_1_68) ? (var_1_87 == ((unsigned short int) ((max (var_1_9 , var_1_89)) + var_1_27))) : 1)))) && (var_1_56 ? (var_1_88 == ((unsigned char) (var_1_21 - var_1_10))) : 1)) && (var_1_89 == ((unsigned long int) (abs (var_1_39))))) && ((var_1_55 == ((abs (var_1_8)) / var_1_27)) ? (var_1_90 == ((unsigned char) var_1_7)) : ((var_1_61 > (abs (128.6))) ? (var_1_90 == ((unsigned char) (10 + (max (var_1_55 , var_1_6))))) : (var_1_90 == ((unsigned char) (var_1_10 + var_1_27)))))) && (((var_1_19 * (var_1_31 - var_1_100)) >= var_1_7) ? (var_1_91 == ((unsigned char) (var_1_21 - 32))) : ((var_1_70 <= var_1_51) ? (var_1_91 == ((unsigned char) var_1_28)) : 1))) && (var_1_98 ? (var_1_93 == ((float) var_1_67)) : (var_1_93 == ((float) var_1_50)))) && (var_1_25 ? (var_1_94 == ((signed long int) var_1_97)) : 1)) && (var_1_96 == ((signed char) var_1_6))) && (var_1_97 == ((unsigned char) var_1_9))) && (var_1_13 ? (var_1_98 == ((unsigned char) var_1_15)) : (var_1_98 == ((unsigned char) var_1_99)))) && (var_1_100 == ((signed long int) var_1_22))) && (var_1_56 ? (var_1_101 == ((unsigned long int) var_1_40)) : (var_1_101 == ((unsigned long int) 10u)))) && (var_1_107 ? (var_1_102 == ((signed long int) 1)) : 1)) && (var_1_103 == ((double) var_1_67))) && (var_1_104 == ((unsigned short int) var_1_19))) && (var_1_99 ? (var_1_105 == ((signed short int) var_1_69)) : (var_1_105 == ((signed short int) var_1_90)))) && (var_1_98 ? (var_1_107 == ((unsigned char) var_1_15)) : 1)) && (var_1_98 ? (var_1_108 == ((unsigned char) var_1_55)) : 1)) && (var_1_98 ? (var_1_109 == ((unsigned long int) (min ((var_1_31 - var_1_28) , var_1_40)))) : ((var_1_88 >= last_1_var_1_109) ? (var_1_98 ? (var_1_109 == ((unsigned long int) var_1_19)) : (var_1_109 == ((unsigned long int) var_1_89))) : 1))) && (var_1_110 == ((unsigned char) var_1_55))
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
