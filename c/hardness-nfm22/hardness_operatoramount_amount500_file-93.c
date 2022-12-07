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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch93Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -256;
double var_1_7 = 31.25;
double var_1_8 = 7.6;
double var_1_9 = 8.9;
double var_1_10 = 256.8;
double var_1_11 = 64.6;
double var_1_12 = 31.8;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 2;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 1;
double var_1_19 = 25.85;
unsigned char var_1_20 = 10;
unsigned char var_1_21 = 128;
unsigned long int var_1_22 = 5;
unsigned long int var_1_23 = 3577648401;
unsigned long int var_1_24 = 1000000000;
unsigned long int var_1_25 = 1000000000;
unsigned short int var_1_26 = 200;
unsigned short int var_1_27 = 10000;
unsigned short int var_1_29 = 54596;
unsigned char var_1_30 = 10;
unsigned char var_1_31 = 4;
double var_1_32 = 1.25;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
signed short int var_1_35 = 128;
unsigned long int var_1_36 = 10;
unsigned long int var_1_37 = 4008732111;
float var_1_38 = 49.75;
signed char var_1_39 = -25;
signed char var_1_40 = 32;
signed short int var_1_41 = -256;
double var_1_43 = 100000.6;
double var_1_44 = 0.0;
double var_1_45 = 8.73;
double var_1_46 = 5.75;
signed short int var_1_47 = -2;
signed short int var_1_48 = 18655;
signed short int var_1_49 = 27740;
double var_1_50 = 3.75;
double var_1_51 = 128.4;
unsigned long int var_1_52 = 64;
unsigned long int var_1_53 = 50;
unsigned short int var_1_56 = 8;
unsigned short int var_1_57 = 17346;
unsigned short int var_1_58 = 28304;
float var_1_59 = 25.5;
float var_1_60 = 9999999999999.35;
float var_1_61 = 99.8;
float var_1_62 = 16.5;
signed short int var_1_63 = 10;
unsigned char var_1_64 = 16;
unsigned char var_1_65 = 128;
float var_1_66 = 499.5;
float var_1_67 = 0.0;
unsigned short int var_1_68 = 128;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 1;
float var_1_71 = 3.5;
unsigned short int var_1_72 = 48223;
float var_1_73 = 63.54;
double var_1_74 = 200.5;
unsigned char var_1_75 = 1;
unsigned char var_1_76 = 1;
unsigned char var_1_77 = 8;
unsigned char var_1_78 = 8;
unsigned char var_1_79 = 2;
unsigned char var_1_80 = 5;
unsigned char var_1_81 = 64;
unsigned char var_1_82 = 64;
unsigned char var_1_83 = 100;
double var_1_84 = 255.8;
signed short int var_1_85 = 10000;
signed char var_1_86 = 25;
signed char var_1_87 = 2;
unsigned char var_1_88 = 128;
unsigned char var_1_89 = 2;
unsigned char var_1_90 = 32;
unsigned char var_1_91 = 1;
unsigned short int var_1_92 = 16;
float var_1_94 = 256.4;
float var_1_95 = 0.0;
signed long int var_1_96 = 5;
double var_1_97 = 25.5;
unsigned long int var_1_98 = 8;
unsigned long int var_1_99 = 8;
double var_1_100 = 4.5;
signed char var_1_101 = -5;
unsigned char var_1_102 = 32;
unsigned char var_1_103 = 1;
double var_1_104 = 256.2;
unsigned long int var_1_105 = 5;
float var_1_106 = 50.2;
signed char var_1_107 = 0;
signed long int var_1_108 = -5;
unsigned short int var_1_109 = 5;
signed long int var_1_110 = 10;
signed short int var_1_111 = 128;
signed long int var_1_113 = 100;
double var_1_114 = 4.725;
double var_1_115 = 0.0;
signed long int var_1_116 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_13 = 1;
unsigned char last_1_var_1_20 = 10;
unsigned short int last_1_var_1_26 = 200;
unsigned char last_1_var_1_33 = 0;
unsigned long int last_1_var_1_36 = 10;
double last_1_var_1_43 = 100000.6;
unsigned long int last_1_var_1_52 = 64;
unsigned long int last_1_var_1_53 = 50;
signed short int last_1_var_1_63 = 10;
float last_1_var_1_71 = 3.5;
double last_1_var_1_74 = 200.5;
unsigned char last_1_var_1_77 = 8;
signed short int last_1_var_1_85 = 10000;
unsigned char last_1_var_1_90 = 32;
unsigned short int last_1_var_1_92 = 16;
signed long int last_1_var_1_96 = 5;
unsigned char last_1_var_1_102 = 32;
unsigned char last_1_var_1_103 = 1;
double last_1_var_1_104 = 256.2;
unsigned long int last_1_var_1_105 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req15Batch93Amount500
	unsigned char stepLocal_15 = var_1_34;
	unsigned short int stepLocal_14 = var_1_29;
	unsigned char stepLocal_13 = last_1_var_1_104 >= last_1_var_1_71;
	if ((last_1_var_1_43 > last_1_var_1_74) && stepLocal_15) {
		if (stepLocal_14 < last_1_var_1_52) {
			var_1_41 = (max ((var_1_16 - last_1_var_1_52) , (max (var_1_21 , var_1_15))));
		} else {
			if (var_1_34 || stepLocal_13) {
				var_1_41 = (min (var_1_15 , (var_1_18 - var_1_16)));
			} else {
				var_1_41 = var_1_15;
			}
		}
	} else {
		var_1_41 = (min (var_1_16 , last_1_var_1_90));
	}


	// From: Req55Batch93Amount500
	if (last_1_var_1_103) {
		var_1_111 = var_1_87;
	} else {
		var_1_111 = last_1_var_1_96;
	}


	// From: Req20Batch93Amount500
	signed long int stepLocal_17 = last_1_var_1_102;
	if (last_1_var_1_13 >= stepLocal_17) {
		var_1_53 = (var_1_23 - (max (last_1_var_1_26 , var_1_25)));
	} else {
		if (((max (last_1_var_1_20 , var_1_17)) & last_1_var_1_53) != (last_1_var_1_53 / var_1_29)) {
			var_1_53 = (max (var_1_18 , (min ((var_1_37 - last_1_var_1_13) , var_1_14))));
		} else {
			var_1_53 = ((last_1_var_1_26 + var_1_14) + (max ((var_1_49 + var_1_21) , var_1_18)));
		}
	}


	// From: Req5Batch93Amount500
	signed long int stepLocal_4 = last_1_var_1_77;
	if (stepLocal_4 > (var_1_18 * 8)) {
		var_1_20 = (max ((max (var_1_14 , var_1_17)) , (var_1_21 - var_1_18)));
	}


	// From: Req27Batch93Amount500
	if (last_1_var_1_105 > last_1_var_1_92) {
		var_1_69 = ((! (last_1_var_1_33 || var_1_70)) || var_1_34);
	}


	// From: Req51Batch93Amount500
	if (var_1_69) {
		var_1_107 = var_1_40;
	} else {
		var_1_107 = var_1_78;
	}


	// From: Req4Batch93Amount500
	var_1_19 = (max ((abs (var_1_10)) , 3.4));


	// From: Req9Batch93Amount500
	unsigned long int stepLocal_8 = var_1_23;
	if (stepLocal_8 < var_1_14) {
		var_1_32 = (var_1_9 - var_1_8);
	} else {
		var_1_32 = var_1_12;
	}


	// From: Req14Batch93Amount500
	var_1_39 = (((var_1_40 - 16) + 10) - var_1_17);


	// From: Req24Batch93Amount500
	var_1_64 = ((min (var_1_21 , var_1_65)) - var_1_17);


	// From: Req35Batch93Amount500
	if (var_1_34) {
		var_1_88 = (var_1_21 - var_1_89);
	}


	// From: Req38Batch93Amount500
	if ((var_1_51 / var_1_67) < ((- var_1_12) + var_1_8)) {
		var_1_92 = (min (64 , var_1_57));
	} else {
		var_1_92 = (var_1_48 + (max (var_1_49 , var_1_88)));
	}


	// From: Req41Batch93Amount500
	if (var_1_70) {
		var_1_97 = (min ((var_1_67 - var_1_62) , (max (25.68 , var_1_11))));
	}


	// From: Req44Batch93Amount500
	if (var_1_70) {
		var_1_100 = var_1_9;
	} else {
		var_1_100 = var_1_8;
	}


	// From: Req45Batch93Amount500
	var_1_101 = var_1_78;


	// From: Req46Batch93Amount500
	var_1_102 = var_1_81;


	// From: Req47Batch93Amount500
	var_1_103 = var_1_34;


	// From: Req48Batch93Amount500
	if (var_1_103) {
		var_1_104 = var_1_9;
	} else {
		var_1_104 = var_1_10;
	}


	// From: Req50Batch93Amount500
	var_1_106 = var_1_60;


	// From: Req52Batch93Amount500
	var_1_108 = var_1_81;


	// From: Req54Batch93Amount500
	var_1_110 = var_1_40;


	// From: Req56Batch93Amount500
	if (var_1_34) {
		var_1_113 = var_1_14;
	}


	// From: Req57Batch93Amount500
	signed long int stepLocal_34 = -256;
	if (stepLocal_34 >= (var_1_86 + 8)) {
		var_1_114 = ((var_1_9 + (var_1_62 + var_1_61)) - ((var_1_44 + var_1_115) - var_1_8));
	} else {
		var_1_114 = var_1_10;
	}


	// From: Req58Batch93Amount500
	var_1_116 = var_1_78;


	// From: Req3Batch93Amount500
	signed short int stepLocal_3 = var_1_41;
	if (var_1_101 < stepLocal_3) {
		var_1_13 = (min ((max (var_1_14 , var_1_15)) , var_1_16));
	} else {
		var_1_13 = ((var_1_17 + (max (var_1_18 , 32))) + 1);
	}


	// From: Req17Batch93Amount500
	if ((var_1_107 | var_1_15) != ((100000000 ^ var_1_107) + (-200 * var_1_17))) {
		var_1_47 = ((var_1_48 - (var_1_27 - 2)) - (max ((var_1_49 - var_1_111) , var_1_110)));
	} else {
		var_1_47 = (var_1_15 - 50);
	}


	// From: Req37Batch93Amount500
	if (! var_1_103) {
		var_1_91 = (! (! var_1_76));
	} else {
		var_1_91 = ((16 <= (-16 << var_1_20)) && ((var_1_103 || var_1_69) && var_1_34));
	}


	// From: Req53Batch93Amount500
	if (var_1_69) {
		var_1_109 = var_1_20;
	} else {
		var_1_109 = var_1_17;
	}


	// From: Req32Batch93Amount500
	if (! (! var_1_91)) {
		var_1_80 = (min ((var_1_40 + var_1_17) , (64 + var_1_79)));
	} else {
		var_1_80 = ((var_1_81 + var_1_82) - (max ((var_1_83 - var_1_18) , var_1_79)));
	}


	// From: Req10Batch93Amount500
	if (var_1_100 <= var_1_9) {
		if (var_1_9 > (abs (max (var_1_12 , var_1_100)))) {
			var_1_33 = var_1_34;
		} else {
			var_1_33 = (! (! var_1_34));
		}
	}


	// From: Req23Batch93Amount500
	unsigned long int stepLocal_20 = var_1_23;
	if (stepLocal_20 >= var_1_113) {
		var_1_63 = ((max ((5 + -8) , (max (last_1_var_1_63 , var_1_16)))) + var_1_15);
	}


	// From: Req25Batch93Amount500
	unsigned long int stepLocal_22 = var_1_24;
	unsigned char stepLocal_21 = var_1_34;
	if (stepLocal_22 < var_1_15) {
		if (stepLocal_21 && var_1_33) {
			var_1_66 = var_1_45;
		} else {
			var_1_66 = ((var_1_67 - var_1_9) - var_1_44);
		}
	} else {
		var_1_66 = (var_1_44 - var_1_62);
	}


	// From: Req29Batch93Amount500
	signed short int stepLocal_25 = var_1_63;
	if (var_1_15 > stepLocal_25) {
		var_1_74 = ((var_1_45 + (var_1_44 - var_1_61)) - var_1_62);
	} else {
		var_1_74 = (var_1_44 + var_1_12);
	}


	// From: Req30Batch93Amount500
	if (24.5 == (min (255.5 , var_1_8))) {
		var_1_75 = (! ((128u >= var_1_58) || (var_1_70 && var_1_76)));
	} else {
		if (4 <= var_1_39) {
			if (var_1_72 <= var_1_25) {
				var_1_75 = var_1_34;
			} else {
				var_1_75 = (! ((var_1_103 || var_1_70) && var_1_76));
			}
		}
	}


	// From: Req36Batch93Amount500
	if (var_1_70 || (var_1_34 || var_1_75)) {
		var_1_90 = (min (var_1_86 , (var_1_65 - (min (var_1_89 , var_1_79)))));
	} else {
		var_1_90 = ((var_1_86 + var_1_78) + (var_1_81 - var_1_79));
	}


	// From: Req39Batch93Amount500
	signed long int stepLocal_31 = var_1_113 / (min (var_1_82 , var_1_86));
	if (stepLocal_31 != (var_1_25 % var_1_58)) {
		var_1_94 = (min ((128.2f + var_1_60) , 0.19999999999999996f));
	} else {
		var_1_94 = (((max (var_1_67 , var_1_95)) - var_1_8) - (var_1_61 + var_1_62));
	}


	// From: Req43Batch93Amount500
	if (var_1_70) {
		var_1_99 = var_1_83;
	} else {
		var_1_99 = var_1_108;
	}


	// From: Req34Batch93Amount500
	signed long int stepLocal_30 = 1 << (var_1_86 - var_1_87);
	unsigned char stepLocal_29 = var_1_33;
	unsigned char stepLocal_28 = var_1_79;
	if ((max (var_1_78 , (var_1_99 | last_1_var_1_85))) < stepLocal_30) {
		if ((var_1_78 >= (min (var_1_65 , var_1_58))) || stepLocal_29) {
			if (stepLocal_28 > (var_1_57 % var_1_21)) {
				var_1_85 = ((var_1_78 + var_1_86) - var_1_99);
			} else {
				var_1_85 = (min (var_1_116 , var_1_16));
			}
		} else {
			var_1_85 = (var_1_13 + var_1_15);
		}
	} else {
		var_1_85 = (-8 + (last_1_var_1_85 + var_1_79));
	}


	// From: Req1Batch93Amount500
	if ((var_1_41 == var_1_80) && var_1_69) {
		var_1_1 = (min (var_1_85 , var_1_47));
	}


	// From: Req28Batch93Amount500
	if (var_1_29 >= ((var_1_72 - var_1_53) / var_1_40)) {
		if (((var_1_25 == var_1_109) || (var_1_29 >= var_1_64)) || (var_1_15 < 1)) {
			var_1_71 = ((min (var_1_44 , var_1_61)) + var_1_9);
		} else {
			var_1_71 = var_1_9;
		}
	} else {
		if (var_1_75 && ((var_1_18 * var_1_39) != var_1_27)) {
			var_1_71 = var_1_73;
		}
	}


	// From: Req8Batch93Amount500
	if (var_1_75) {
		var_1_30 = (var_1_31 + (var_1_17 + var_1_18));
	} else {
		var_1_30 = (max ((var_1_21 - (1 + var_1_18)) , var_1_31));
	}


	// From: Req18Batch93Amount500
	if (var_1_33) {
		if (var_1_10 <= ((var_1_94 / var_1_44) / var_1_51)) {
			var_1_50 = (var_1_9 - 8.5);
		} else {
			var_1_50 = (var_1_45 - var_1_8);
		}
	}


	// From: Req22Batch93Amount500
	unsigned char stepLocal_19 = var_1_103;
	if (stepLocal_19 || (! var_1_75)) {
		var_1_59 = (min (var_1_10 , var_1_9));
	} else {
		var_1_59 = ((var_1_60 + var_1_11) + ((var_1_61 - var_1_62) + var_1_46));
	}


	// From: Req19Batch93Amount500
	unsigned char stepLocal_16 = var_1_30 > var_1_85;
	if (var_1_103 || stepLocal_16) {
		var_1_52 = var_1_39;
	}


	// From: Req21Batch93Amount500
	signed long int stepLocal_18 = var_1_1;
	if (var_1_66 <= var_1_71) {
		if (var_1_30 < stepLocal_18) {
			if (var_1_34) {
				var_1_56 = (var_1_53 + var_1_88);
			} else {
				var_1_56 = (var_1_21 + 1);
			}
		} else {
			var_1_56 = ((var_1_31 + var_1_15) + (var_1_49 - var_1_101));
		}
	} else {
		var_1_56 = ((var_1_49 + (min (var_1_57 , var_1_58))) - (max ((max (var_1_18 , var_1_101)) , var_1_88)));
	}


	// From: Req26Batch93Amount500
	signed long int stepLocal_24 = var_1_111 % var_1_49;
	unsigned char stepLocal_23 = var_1_103;
	if ((var_1_16 + var_1_40) < stepLocal_24) {
		var_1_68 = (var_1_29 - (var_1_101 + (10000 - var_1_40)));
	} else {
		if ((var_1_94 < var_1_60) || stepLocal_23) {
			var_1_68 = (var_1_88 + (var_1_21 + var_1_56));
		}
	}


	// From: Req12Batch93Amount500
	unsigned char stepLocal_11 = var_1_34;
	if ((var_1_9 >= (abs (var_1_50))) || stepLocal_11) {
		var_1_36 = ((var_1_37 - last_1_var_1_36) - var_1_20);
	} else {
		if (! var_1_34) {
			var_1_36 = (max (var_1_20 , last_1_var_1_36));
		}
	}


	// From: Req2Batch93Amount500
	unsigned short int stepLocal_2 = var_1_68;
	signed long int stepLocal_1 = 25;
	unsigned short int stepLocal_0 = var_1_56;
	if (stepLocal_0 == var_1_85) {
		if (stepLocal_2 < var_1_108) {
			var_1_7 = ((var_1_8 - var_1_9) + var_1_10);
		} else {
			if (var_1_108 >= stepLocal_1) {
				var_1_7 = (max (((8.7955268025428961E18 - var_1_8) - var_1_9) , (var_1_10 + (var_1_11 + var_1_12))));
			} else {
				var_1_7 = ((min (var_1_8 , var_1_10)) + (var_1_11 + 1.75));
			}
		}
	} else {
		var_1_7 = 10.15;
	}


	// From: Req13Batch93Amount500
	unsigned long int stepLocal_12 = var_1_23;
	if (var_1_9 >= (- var_1_11)) {
		if (var_1_52 >= stepLocal_12) {
			var_1_38 = (max (var_1_8 , (32.4f + (var_1_11 + var_1_12))));
		}
	}


	// From: Req33Batch93Amount500
	if (var_1_75 || ((- var_1_38) > var_1_9)) {
		var_1_84 = var_1_46;
	} else {
		var_1_84 = (abs ((var_1_44 - var_1_61) + var_1_9));
	}


	// From: Req6Batch93Amount500
	unsigned char stepLocal_5 = var_1_15;
	if (stepLocal_5 > var_1_68) {
		var_1_22 = (var_1_23 - ((var_1_24 + var_1_25) - var_1_68));
	}


	// From: Req7Batch93Amount500
	signed long int stepLocal_7 = var_1_14 * var_1_15;
	unsigned long int stepLocal_6 = var_1_22;
	if (var_1_18 <= stepLocal_6) {
		var_1_26 = ((var_1_15 + (var_1_27 - var_1_21)) + (max ((min (var_1_90 , var_1_18)) , var_1_92)));
	} else {
		if (stepLocal_7 >= -32) {
			var_1_26 = (var_1_17 + var_1_30);
		} else {
			var_1_26 = ((max (38680 , var_1_29)) - var_1_15);
		}
	}


	// From: Req31Batch93Amount500
	signed long int stepLocal_27 = max (-256 , (128 - var_1_16));
	unsigned char stepLocal_26 = var_1_70;
	if (var_1_48 <= stepLocal_27) {
		if (var_1_91 && stepLocal_26) {
			if (! ((var_1_22 < var_1_109) && var_1_69)) {
				var_1_77 = (var_1_18 + (100 - (var_1_78 + var_1_79)));
			}
		} else {
			var_1_77 = (min ((var_1_65 - var_1_18) , var_1_14));
		}
	}


	// From: Req11Batch93Amount500
	signed char stepLocal_10 = var_1_107;
	signed long int stepLocal_9 = abs (var_1_31);
	if (var_1_9 != var_1_12) {
		if (stepLocal_10 > var_1_22) {
			if (stepLocal_9 > var_1_22) {
				var_1_35 = (min (var_1_18 , var_1_27));
			}
		} else {
			var_1_35 = (max (-4 , (var_1_20 - var_1_31)));
		}
	}


	// From: Req49Batch93Amount500
	if (var_1_69) {
		var_1_105 = var_1_35;
	} else {
		var_1_105 = 10u;
	}


	// From: Req42Batch93Amount500
	var_1_98 = (256u + (max (var_1_18 , (1313157149u - var_1_105))));


	// From: Req40Batch93Amount500
	signed long int stepLocal_33 = (~ var_1_111) / -8;
	unsigned long int stepLocal_32 = min ((var_1_18 | 256) , (- var_1_22));
	if (stepLocal_33 > var_1_30) {
		if (stepLocal_32 < var_1_65) {
			var_1_96 = (var_1_15 - var_1_53);
		}
	} else {
		var_1_96 = ((min (var_1_48 , (max (var_1_14 , var_1_30)))) - 32);
	}


	// From: Req16Batch93Amount500
	if (var_1_36 <= var_1_29) {
		var_1_43 = ((min (var_1_9 , var_1_8)) - ((4.0020145502381158E18 + var_1_44) - var_1_45));
	} else {
		if (var_1_90 <= var_1_30) {
			if (var_1_75) {
				if (var_1_75 || var_1_34) {
					var_1_43 = (min (64.25 , ((max (var_1_8 , var_1_9)) - var_1_45)));
				} else {
					var_1_43 = (var_1_12 + (var_1_11 + var_1_46));
				}
			} else {
				var_1_43 = var_1_45;
			}
		} else {
			if (var_1_39 >= (var_1_92 * var_1_96)) {
				var_1_43 = (var_1_10 + var_1_12);
			}
		}
	}
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -230584.3009213691390e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691390e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -230584.3009213691390e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691390e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 64);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 127);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 2147483647);
	assume_abort_if_not(var_1_23 <= 4294967294);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 536870911);
	assume_abort_if_not(var_1_24 <= 1073741824);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 536870912);
	assume_abort_if_not(var_1_25 <= 1073741823);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 8191);
	assume_abort_if_not(var_1_27 <= 16383);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 32767);
	assume_abort_if_not(var_1_29 <= 65534);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 3221225470);
	assume_abort_if_not(var_1_37 <= 4294967294);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 31);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 2305843.009213691390e+12F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -230584.3009213691390e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691390e+12F && var_1_46 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_48 >= 16382);
	assume_abort_if_not(var_1_48 <= 32766);
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= 16383);
	assume_abort_if_not(var_1_49 <= 32766);
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
	assume_abort_if_not(var_1_51 != 0.0F);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 16384);
	assume_abort_if_not(var_1_57 <= 32767);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 16384);
	assume_abort_if_not(var_1_58 <= 32767);
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= -230584.3009213691390e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 2305843.009213691390e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691390e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 2305843.009213691390e+12F && var_1_62 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 127);
	assume_abort_if_not(var_1_65 <= 254);
	var_1_67 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_67 >= 4611686.018427382800e+12F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854765600e+12F && var_1_67 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 1);
	assume_abort_if_not(var_1_70 <= 1);
	var_1_72 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_72 >= 32767);
	assume_abort_if_not(var_1_72 <= 65535);
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= -922337.2036854765600e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854765600e+12F && var_1_73 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 1);
	assume_abort_if_not(var_1_76 <= 1);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 32);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 31);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 63);
	assume_abort_if_not(var_1_81 <= 127);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 64);
	assume_abort_if_not(var_1_82 <= 127);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 63);
	assume_abort_if_not(var_1_83 <= 127);
	var_1_86 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_86 >= 15);
	assume_abort_if_not(var_1_86 <= 31);
	var_1_87 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 15);
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 0);
	assume_abort_if_not(var_1_89 <= 127);
	var_1_95 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_95 >= 4611686.018427382800e+12F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 9223372.036854765600e+12F && var_1_95 >= 1.0e-20F ));
	var_1_115 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_115 >= 2305843.009213691390e+12F && var_1_115 <= -1.0e-20F) || (var_1_115 <= 4611686.018427382800e+12F && var_1_115 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_105 = var_1_105;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_41 == var_1_80) && var_1_69) ? (var_1_1 == ((signed long int) (min (var_1_85 , var_1_47)))) : 1) && ((var_1_56 == var_1_85) ? ((var_1_68 < var_1_108) ? (var_1_7 == ((double) ((var_1_8 - var_1_9) + var_1_10))) : ((var_1_108 >= 25) ? (var_1_7 == ((double) (max (((8.7955268025428961E18 - var_1_8) - var_1_9) , (var_1_10 + (var_1_11 + var_1_12)))))) : (var_1_7 == ((double) ((min (var_1_8 , var_1_10)) + (var_1_11 + 1.75)))))) : (var_1_7 == ((double) 10.15)))) && ((var_1_101 < var_1_41) ? (var_1_13 == ((unsigned char) (min ((max (var_1_14 , var_1_15)) , var_1_16)))) : (var_1_13 == ((unsigned char) ((var_1_17 + (max (var_1_18 , 32))) + 1))))) && (var_1_19 == ((double) (max ((abs (var_1_10)) , 3.4))))) && ((last_1_var_1_77 > (var_1_18 * 8)) ? (var_1_20 == ((unsigned char) (max ((max (var_1_14 , var_1_17)) , (var_1_21 - var_1_18))))) : 1)) && ((var_1_15 > var_1_68) ? (var_1_22 == ((unsigned long int) (var_1_23 - ((var_1_24 + var_1_25) - var_1_68)))) : 1)) && ((var_1_18 <= var_1_22) ? (var_1_26 == ((unsigned short int) ((var_1_15 + (var_1_27 - var_1_21)) + (max ((min (var_1_90 , var_1_18)) , var_1_92))))) : (((var_1_14 * var_1_15) >= -32) ? (var_1_26 == ((unsigned short int) (var_1_17 + var_1_30))) : (var_1_26 == ((unsigned short int) ((max (38680 , var_1_29)) - var_1_15)))))) && (var_1_75 ? (var_1_30 == ((unsigned char) (var_1_31 + (var_1_17 + var_1_18)))) : (var_1_30 == ((unsigned char) (max ((var_1_21 - (1 + var_1_18)) , var_1_31)))))) && ((var_1_23 < var_1_14) ? (var_1_32 == ((double) (var_1_9 - var_1_8))) : (var_1_32 == ((double) var_1_12)))) && ((var_1_100 <= var_1_9) ? ((var_1_9 > (abs (max (var_1_12 , var_1_100)))) ? (var_1_33 == ((unsigned char) var_1_34)) : (var_1_33 == ((unsigned char) (! (! var_1_34))))) : 1)) && ((var_1_9 != var_1_12) ? ((var_1_107 > var_1_22) ? (((abs (var_1_31)) > var_1_22) ? (var_1_35 == ((signed short int) (min (var_1_18 , var_1_27)))) : 1) : (var_1_35 == ((signed short int) (max (-4 , (var_1_20 - var_1_31)))))) : 1)) && (((var_1_9 >= (abs (var_1_50))) || var_1_34) ? (var_1_36 == ((unsigned long int) ((var_1_37 - last_1_var_1_36) - var_1_20))) : ((! var_1_34) ? (var_1_36 == ((unsigned long int) (max (var_1_20 , last_1_var_1_36)))) : 1))) && ((var_1_9 >= (- var_1_11)) ? ((var_1_52 >= var_1_23) ? (var_1_38 == ((float) (max (var_1_8 , (32.4f + (var_1_11 + var_1_12)))))) : 1) : 1)) && (var_1_39 == ((signed char) (((var_1_40 - 16) + 10) - var_1_17)))) && (((last_1_var_1_43 > last_1_var_1_74) && var_1_34) ? ((var_1_29 < last_1_var_1_52) ? (var_1_41 == ((signed short int) (max ((var_1_16 - last_1_var_1_52) , (max (var_1_21 , var_1_15)))))) : ((var_1_34 || (last_1_var_1_104 >= last_1_var_1_71)) ? (var_1_41 == ((signed short int) (min (var_1_15 , (var_1_18 - var_1_16))))) : (var_1_41 == ((signed short int) var_1_15)))) : (var_1_41 == ((signed short int) (min (var_1_16 , last_1_var_1_90)))))) && ((var_1_36 <= var_1_29) ? (var_1_43 == ((double) ((min (var_1_9 , var_1_8)) - ((4.0020145502381158E18 + var_1_44) - var_1_45)))) : ((var_1_90 <= var_1_30) ? (var_1_75 ? ((var_1_75 || var_1_34) ? (var_1_43 == ((double) (min (64.25 , ((max (var_1_8 , var_1_9)) - var_1_45))))) : (var_1_43 == ((double) (var_1_12 + (var_1_11 + var_1_46))))) : (var_1_43 == ((double) var_1_45))) : ((var_1_39 >= (var_1_92 * var_1_96)) ? (var_1_43 == ((double) (var_1_10 + var_1_12))) : 1)))) && (((var_1_107 | var_1_15) != ((100000000 ^ var_1_107) + (-200 * var_1_17))) ? (var_1_47 == ((signed short int) ((var_1_48 - (var_1_27 - 2)) - (max ((var_1_49 - var_1_111) , var_1_110))))) : (var_1_47 == ((signed short int) (var_1_15 - 50))))) && (var_1_33 ? ((var_1_10 <= ((var_1_94 / var_1_44) / var_1_51)) ? (var_1_50 == ((double) (var_1_9 - 8.5))) : (var_1_50 == ((double) (var_1_45 - var_1_8)))) : 1)) && ((var_1_103 || (var_1_30 > var_1_85)) ? (var_1_52 == ((unsigned long int) var_1_39)) : 1)) && ((last_1_var_1_13 >= last_1_var_1_102) ? (var_1_53 == ((unsigned long int) (var_1_23 - (max (last_1_var_1_26 , var_1_25))))) : ((((max (last_1_var_1_20 , var_1_17)) & last_1_var_1_53) != (last_1_var_1_53 / var_1_29)) ? (var_1_53 == ((unsigned long int) (max (var_1_18 , (min ((var_1_37 - last_1_var_1_13) , var_1_14)))))) : (var_1_53 == ((unsigned long int) ((last_1_var_1_26 + var_1_14) + (max ((var_1_49 + var_1_21) , var_1_18)))))))) && ((var_1_66 <= var_1_71) ? ((var_1_30 < var_1_1) ? (var_1_34 ? (var_1_56 == ((unsigned short int) (var_1_53 + var_1_88))) : (var_1_56 == ((unsigned short int) (var_1_21 + 1)))) : (var_1_56 == ((unsigned short int) ((var_1_31 + var_1_15) + (var_1_49 - var_1_101))))) : (var_1_56 == ((unsigned short int) ((var_1_49 + (min (var_1_57 , var_1_58))) - (max ((max (var_1_18 , var_1_101)) , var_1_88))))))) && ((var_1_103 || (! var_1_75)) ? (var_1_59 == ((float) (min (var_1_10 , var_1_9)))) : (var_1_59 == ((float) ((var_1_60 + var_1_11) + ((var_1_61 - var_1_62) + var_1_46)))))) && ((var_1_23 >= var_1_113) ? (var_1_63 == ((signed short int) ((max ((5 + -8) , (max (last_1_var_1_63 , var_1_16)))) + var_1_15))) : 1)) && (var_1_64 == ((unsigned char) ((min (var_1_21 , var_1_65)) - var_1_17)))) && ((var_1_24 < var_1_15) ? ((var_1_34 && var_1_33) ? (var_1_66 == ((float) var_1_45)) : (var_1_66 == ((float) ((var_1_67 - var_1_9) - var_1_44)))) : (var_1_66 == ((float) (var_1_44 - var_1_62))))) && (((var_1_16 + var_1_40) < (var_1_111 % var_1_49)) ? (var_1_68 == ((unsigned short int) (var_1_29 - (var_1_101 + (10000 - var_1_40))))) : (((var_1_94 < var_1_60) || var_1_103) ? (var_1_68 == ((unsigned short int) (var_1_88 + (var_1_21 + var_1_56)))) : 1))) && ((last_1_var_1_105 > last_1_var_1_92) ? (var_1_69 == ((unsigned char) ((! (last_1_var_1_33 || var_1_70)) || var_1_34))) : 1)) && ((var_1_29 >= ((var_1_72 - var_1_53) / var_1_40)) ? ((((var_1_25 == var_1_109) || (var_1_29 >= var_1_64)) || (var_1_15 < 1)) ? (var_1_71 == ((float) ((min (var_1_44 , var_1_61)) + var_1_9))) : (var_1_71 == ((float) var_1_9))) : ((var_1_75 && ((var_1_18 * var_1_39) != var_1_27)) ? (var_1_71 == ((float) var_1_73)) : 1))) && ((var_1_15 > var_1_63) ? (var_1_74 == ((double) ((var_1_45 + (var_1_44 - var_1_61)) - var_1_62))) : (var_1_74 == ((double) (var_1_44 + var_1_12))))) && ((24.5 == (min (255.5 , var_1_8))) ? (var_1_75 == ((unsigned char) (! ((128u >= var_1_58) || (var_1_70 && var_1_76))))) : ((4 <= var_1_39) ? ((var_1_72 <= var_1_25) ? (var_1_75 == ((unsigned char) var_1_34)) : (var_1_75 == ((unsigned char) (! ((var_1_103 || var_1_70) && var_1_76))))) : 1))) && ((var_1_48 <= (max (-256 , (128 - var_1_16)))) ? ((var_1_91 && var_1_70) ? ((! ((var_1_22 < var_1_109) && var_1_69)) ? (var_1_77 == ((unsigned char) (var_1_18 + (100 - (var_1_78 + var_1_79))))) : 1) : (var_1_77 == ((unsigned char) (min ((var_1_65 - var_1_18) , var_1_14))))) : 1)) && ((! (! var_1_91)) ? (var_1_80 == ((unsigned char) (min ((var_1_40 + var_1_17) , (64 + var_1_79))))) : (var_1_80 == ((unsigned char) ((var_1_81 + var_1_82) - (max ((var_1_83 - var_1_18) , var_1_79))))))) && ((var_1_75 || ((- var_1_38) > var_1_9)) ? (var_1_84 == ((double) var_1_46)) : (var_1_84 == ((double) (abs ((var_1_44 - var_1_61) + var_1_9)))))) && (((max (var_1_78 , (var_1_99 | last_1_var_1_85))) < (1 << (var_1_86 - var_1_87))) ? (((var_1_78 >= (min (var_1_65 , var_1_58))) || var_1_33) ? ((var_1_79 > (var_1_57 % var_1_21)) ? (var_1_85 == ((signed short int) ((var_1_78 + var_1_86) - var_1_99))) : (var_1_85 == ((signed short int) (min (var_1_116 , var_1_16))))) : (var_1_85 == ((signed short int) (var_1_13 + var_1_15)))) : (var_1_85 == ((signed short int) (-8 + (last_1_var_1_85 + var_1_79)))))) && (var_1_34 ? (var_1_88 == ((unsigned char) (var_1_21 - var_1_89))) : 1)) && ((var_1_70 || (var_1_34 || var_1_75)) ? (var_1_90 == ((unsigned char) (min (var_1_86 , (var_1_65 - (min (var_1_89 , var_1_79))))))) : (var_1_90 == ((unsigned char) ((var_1_86 + var_1_78) + (var_1_81 - var_1_79)))))) && ((! var_1_103) ? (var_1_91 == ((unsigned char) (! (! var_1_76)))) : (var_1_91 == ((unsigned char) ((16 <= (-16 << var_1_20)) && ((var_1_103 || var_1_69) && var_1_34)))))) && (((var_1_51 / var_1_67) < ((- var_1_12) + var_1_8)) ? (var_1_92 == ((unsigned short int) (min (64 , var_1_57)))) : (var_1_92 == ((unsigned short int) (var_1_48 + (max (var_1_49 , var_1_88))))))) && (((var_1_113 / (min (var_1_82 , var_1_86))) != (var_1_25 % var_1_58)) ? (var_1_94 == ((float) (min ((128.2f + var_1_60) , 0.19999999999999996f)))) : (var_1_94 == ((float) (((max (var_1_67 , var_1_95)) - var_1_8) - (var_1_61 + var_1_62)))))) && ((((~ var_1_111) / -8) > var_1_30) ? (((min ((var_1_18 | 256) , (- var_1_22))) < var_1_65) ? (var_1_96 == ((signed long int) (var_1_15 - var_1_53))) : 1) : (var_1_96 == ((signed long int) ((min (var_1_48 , (max (var_1_14 , var_1_30)))) - 32))))) && (var_1_70 ? (var_1_97 == ((double) (min ((var_1_67 - var_1_62) , (max (25.68 , var_1_11)))))) : 1)) && (var_1_98 == ((unsigned long int) (256u + (max (var_1_18 , (1313157149u - var_1_105))))))) && (var_1_70 ? (var_1_99 == ((unsigned long int) var_1_83)) : (var_1_99 == ((unsigned long int) var_1_108)))) && (var_1_70 ? (var_1_100 == ((double) var_1_9)) : (var_1_100 == ((double) var_1_8)))) && (var_1_101 == ((signed char) var_1_78))) && (var_1_102 == ((unsigned char) var_1_81))) && (var_1_103 == ((unsigned char) var_1_34))) && (var_1_103 ? (var_1_104 == ((double) var_1_9)) : (var_1_104 == ((double) var_1_10)))) && (var_1_69 ? (var_1_105 == ((unsigned long int) var_1_35)) : (var_1_105 == ((unsigned long int) 10u)))) && (var_1_106 == ((float) var_1_60))) && (var_1_69 ? (var_1_107 == ((signed char) var_1_40)) : (var_1_107 == ((signed char) var_1_78)))) && (var_1_108 == ((signed long int) var_1_81))) && (var_1_69 ? (var_1_109 == ((unsigned short int) var_1_20)) : (var_1_109 == ((unsigned short int) var_1_17)))) && (var_1_110 == ((signed long int) var_1_40))) && (last_1_var_1_103 ? (var_1_111 == ((signed short int) var_1_87)) : (var_1_111 == ((signed short int) last_1_var_1_96)))) && (var_1_34 ? (var_1_113 == ((signed long int) var_1_14)) : 1)) && ((-256 >= (var_1_86 + 8)) ? (var_1_114 == ((double) ((var_1_9 + (var_1_62 + var_1_61)) - ((var_1_44 + var_1_115) - var_1_8)))) : (var_1_114 == ((double) var_1_10)))) && (var_1_116 == ((signed long int) var_1_78))
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
