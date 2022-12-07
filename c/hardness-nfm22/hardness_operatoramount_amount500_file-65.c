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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch65Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 10;
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
unsigned short int var_1_25 = 10000;
unsigned short int var_1_26 = 52733;
unsigned short int var_1_27 = 16;
unsigned short int var_1_28 = 0;
unsigned short int var_1_29 = 28587;
signed short int var_1_30 = -256;
signed short int var_1_33 = 28306;
signed short int var_1_34 = 28231;
signed short int var_1_35 = -100;
unsigned char var_1_37 = 1;
signed long int var_1_39 = 1701826032;
unsigned char var_1_40 = 8;
unsigned char var_1_41 = 64;
unsigned char var_1_42 = 32;
signed long int var_1_43 = -4;
float var_1_44 = 4.8;
float var_1_45 = 0.0;
float var_1_46 = 3.75;
float var_1_47 = 2.5;
float var_1_48 = 499.2;
float var_1_49 = 32.5;
float var_1_50 = 1.875;
float var_1_51 = 49.2;
signed long int var_1_52 = -128;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 1;
float var_1_55 = 4.2;
unsigned long int var_1_56 = 25;
unsigned short int var_1_57 = 2;
double var_1_58 = 5.6;
unsigned long int var_1_59 = 16;
unsigned long int var_1_60 = 16;
signed long int var_1_62 = -10;
signed long int var_1_63 = -100;
signed long int var_1_65 = 1000000000;
signed char var_1_66 = -1;
unsigned short int var_1_67 = 64;
unsigned short int var_1_68 = 54219;
unsigned long int var_1_69 = 2;
unsigned long int var_1_73 = 3343704197;
float var_1_74 = 50.75;
unsigned long int var_1_75 = 100000000;
unsigned short int var_1_76 = 8;
double var_1_78 = 2.2;
float var_1_79 = 0.94;
double var_1_80 = 0.0;
unsigned char var_1_81 = 5;
unsigned long int var_1_82 = 5;
unsigned long int var_1_83 = 4049379003;
unsigned short int var_1_84 = 100;
float var_1_85 = 10.2;
signed long int var_1_86 = 25;
float var_1_87 = 49.2;
signed long int var_1_88 = 16;
unsigned char var_1_90 = 0;
unsigned char var_1_91 = 0;
signed long int var_1_92 = 10;
signed short int var_1_94 = -8;
float var_1_96 = 2.7;
signed short int var_1_97 = -128;
unsigned long int var_1_98 = 5;
unsigned short int var_1_99 = 10;
unsigned char var_1_100 = 0;
signed short int var_1_101 = 32;
unsigned long int var_1_102 = 64;
signed char var_1_103 = -5;
float var_1_104 = 4.8;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 10;
signed short int last_1_var_1_9 = 8;
signed long int last_1_var_1_18 = 8;
signed char last_1_var_1_21 = -2;
unsigned short int last_1_var_1_24 = 0;
unsigned short int last_1_var_1_27 = 16;
unsigned short int last_1_var_1_28 = 0;
signed short int last_1_var_1_30 = -256;
unsigned char last_1_var_1_37 = 1;
signed long int last_1_var_1_43 = -4;
unsigned char last_1_var_1_53 = 1;
signed long int last_1_var_1_63 = -100;
signed char last_1_var_1_66 = -1;
unsigned short int last_1_var_1_67 = 64;
double last_1_var_1_78 = 2.2;
unsigned char last_1_var_1_81 = 5;
unsigned char last_1_var_1_90 = 0;
unsigned long int last_1_var_1_98 = 5;
unsigned char last_1_var_1_100 = 0;
signed short int last_1_var_1_101 = 32;
unsigned long int last_1_var_1_102 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch65Amount500
	signed long int stepLocal_3 = last_1_var_1_27;
	unsigned char stepLocal_2 = var_1_13;
	if (((last_1_var_1_21 + last_1_var_1_24) * var_1_10) <= stepLocal_3) {
		if (var_1_8 <= stepLocal_2) {
			var_1_18 = (var_1_13 + last_1_var_1_30);
		}
	}


	// From: Req25Batch65Amount500
	if (var_1_34 <= (var_1_25 * (var_1_29 * var_1_33))) {
		if ((min ((var_1_8 * var_1_10) , last_1_var_1_18)) <= var_1_26) {
			var_1_63 = (max ((var_1_7 - var_1_8) , var_1_59));
		} else {
			if (-50 == last_1_var_1_66) {
				if (last_1_var_1_90) {
					var_1_63 = ((var_1_29 + (var_1_65 - var_1_41)) - var_1_33);
				} else {
					var_1_63 = (max ((min ((last_1_var_1_37 + last_1_var_1_28) , var_1_40)) , (abs (min (last_1_var_1_18 , var_1_65)))));
				}
			} else {
				var_1_63 = var_1_34;
			}
		}
	} else {
		if (((var_1_42 * var_1_39) * var_1_10) >= -100000000) {
			var_1_63 = last_1_var_1_67;
		}
	}


	// From: Req7Batch65Amount500
	unsigned char stepLocal_4 = last_1_var_1_100;
	if (last_1_var_1_90) {
		if (stepLocal_4 || ((2.25 + last_1_var_1_78) != 31.625)) {
			var_1_19 = (! var_1_20);
		} else {
			var_1_19 = (((max (last_1_var_1_28 , var_1_8)) < last_1_var_1_24) || var_1_20);
		}
	}


	// From: Req2Batch65Amount500
	if (var_1_19) {
		var_1_5 = (min (var_1_6 , (var_1_7 - var_1_8)));
	}


	// From: Req15Batch65Amount500
	signed long int stepLocal_12 = (last_1_var_1_63 ^ last_1_var_1_1) * (var_1_29 / var_1_33);
	if (stepLocal_12 >= ((var_1_39 - last_1_var_1_101) - var_1_25)) {
		var_1_37 = (min (((var_1_14 + var_1_40) + (var_1_41 - var_1_42)) , var_1_8));
	} else {
		var_1_37 = var_1_6;
	}


	// From: Req14Batch65Amount500
	signed short int stepLocal_11 = var_1_33;
	if (stepLocal_11 >= (var_1_25 / (min (var_1_10 , var_1_34)))) {
		var_1_35 = (var_1_25 - var_1_37);
	}


	// From: Req10Batch65Amount500
	if (last_1_var_1_53) {
		if (var_1_7 <= (- 25)) {
			var_1_24 = (((var_1_25 - 8) + (abs (last_1_var_1_102))) + (var_1_14 + (last_1_var_1_98 + var_1_7)));
		}
	} else {
		if ((last_1_var_1_66 != var_1_13) && var_1_20) {
			var_1_24 = (var_1_26 - (max (last_1_var_1_102 , var_1_8)));
		} else {
			var_1_24 = var_1_7;
		}
	}


	// From: Req16Batch65Amount500
	signed short int stepLocal_13 = var_1_33;
	if ((min ((- var_1_24) , (var_1_40 + last_1_var_1_43))) == stepLocal_13) {
		var_1_43 = (var_1_14 + var_1_24);
	} else {
		var_1_43 = (var_1_26 + ((var_1_14 + last_1_var_1_43) + 50));
	}


	// From: Req17Batch65Amount500
	signed long int stepLocal_15 = - var_1_6;
	unsigned char stepLocal_14 = var_1_7;
	if (stepLocal_14 <= var_1_29) {
		var_1_44 = (min (var_1_16 , var_1_15));
	} else {
		if (stepLocal_15 <= ((4 + var_1_7) - (max (var_1_24 , var_1_26)))) {
			var_1_44 = ((var_1_15 + (var_1_45 - var_1_46)) - ((min (var_1_47 , var_1_48)) + var_1_49));
		} else {
			var_1_44 = (((min (var_1_47 , var_1_49)) - var_1_46) + (var_1_50 + var_1_51));
		}
	}


	// From: Req4Batch65Amount500
	unsigned char stepLocal_0 = var_1_7;
	if (stepLocal_0 > ((var_1_13 - var_1_14) - 10)) {
		var_1_12 = ((max ((31.25 + var_1_15) , (abs (5.5)))) - var_1_16);
	}


	// From: Req26Batch65Amount500
	unsigned char stepLocal_21 = var_1_14;
	if (128 > stepLocal_21) {
		var_1_66 = (max (var_1_42 , (min (var_1_13 , var_1_60))));
	}


	// From: Req40Batch65Amount500
	var_1_90 = var_1_91;


	// From: Req43Batch65Amount500
	if (var_1_19) {
		var_1_96 = var_1_15;
	}


	// From: Req47Batch65Amount500
	if (var_1_90) {
		var_1_100 = var_1_54;
	} else {
		var_1_100 = var_1_20;
	}


	// From: Req48Batch65Amount500
	var_1_101 = -4;


	// From: Req49Batch65Amount500
	if (var_1_54) {
		var_1_102 = 50u;
	} else {
		var_1_102 = 500u;
	}


	// From: Req39Batch65Amount500
	unsigned long int stepLocal_36 = var_1_59;
	unsigned short int stepLocal_35 = var_1_24;
	if (stepLocal_35 <= var_1_24) {
		if (var_1_14 > stepLocal_36) {
			var_1_88 = var_1_63;
		} else {
			var_1_88 = var_1_14;
		}
	} else {
		var_1_88 = var_1_7;
	}


	// From: Req19Batch65Amount500
	unsigned char stepLocal_16 = var_1_100;
	if (stepLocal_16 && var_1_19) {
		var_1_53 = (var_1_20 || var_1_54);
	}


	// From: Req42Batch65Amount500
	if (var_1_90) {
		var_1_94 = var_1_5;
	} else {
		var_1_94 = var_1_60;
	}


	// From: Req1Batch65Amount500
	if (var_1_53) {
		if (var_1_19) {
			var_1_1 = (16 - 2);
		} else {
			var_1_1 = var_1_24;
		}
	}


	// From: Req18Batch65Amount500
	var_1_52 = (var_1_18 - (var_1_37 + var_1_25));


	// From: Req46Batch65Amount500
	if (var_1_53) {
		var_1_99 = var_1_68;
	} else {
		var_1_99 = var_1_43;
	}


	// From: Req50Batch65Amount500
	if (var_1_53) {
		var_1_103 = var_1_13;
	} else {
		var_1_103 = var_1_40;
	}


	// From: Req44Batch65Amount500
	if (var_1_90) {
		var_1_97 = var_1_37;
	}


	// From: Req45Batch65Amount500
	if (var_1_19) {
		var_1_98 = var_1_65;
	} else {
		var_1_98 = var_1_66;
	}


	// From: Req9Batch65Amount500
	unsigned char stepLocal_7 = -4 > (var_1_8 * var_1_10);
	if (var_1_53 || stepLocal_7) {
		var_1_23 = var_1_14;
	}


	// From: Req11Batch65Amount500
	if (var_1_100) {
		var_1_27 = (abs (var_1_26 - var_1_66));
	} else {
		var_1_27 = (abs (var_1_26));
	}


	// From: Req23Batch65Amount500
	signed char stepLocal_20 = var_1_103;
	if ((64 >> (var_1_59 - var_1_60)) <= stepLocal_20) {
		var_1_58 = (var_1_49 - var_1_45);
	}


	// From: Req35Batch65Amount500
	var_1_82 = ((max ((var_1_83 - var_1_98) , var_1_73)) - var_1_18);


	// From: Req36Batch65Amount500
	unsigned long int stepLocal_32 = 64u;
	if (var_1_83 >= stepLocal_32) {
		var_1_84 = (var_1_68 - var_1_23);
	}


	// From: Req12Batch65Amount500
	signed long int stepLocal_10 = (min (var_1_13 , var_1_8)) * var_1_63;
	signed long int stepLocal_9 = var_1_43 * (-5 / var_1_7);
	signed long int stepLocal_8 = min ((var_1_103 & var_1_10) , var_1_8);
	if (stepLocal_9 != 256) {
		var_1_28 = (min ((max ((var_1_13 + var_1_7) , var_1_103)) , 0));
	} else {
		if (var_1_10 <= stepLocal_10) {
			if (stepLocal_8 > var_1_25) {
				var_1_28 = (max ((max (var_1_26 , var_1_14)) , var_1_103));
			} else {
				var_1_28 = (min (var_1_8 , ((max (var_1_25 , var_1_14)) + (var_1_29 - var_1_6))));
			}
		}
	}


	// From: Req13Batch65Amount500
	if (var_1_1 >= var_1_7) {
		if (var_1_100) {
			if (! (var_1_94 <= var_1_27)) {
				var_1_30 = (max ((abs (var_1_6)) , (var_1_13 + var_1_8)));
			}
		} else {
			if (var_1_19) {
				var_1_30 = (var_1_7 - var_1_25);
			} else {
				var_1_30 = ((var_1_33 - var_1_37) - (var_1_34 - (var_1_6 + var_1_8)));
			}
		}
	}


	// From: Req22Batch65Amount500
	if (var_1_20) {
		var_1_57 = (abs (max (var_1_5 , var_1_13)));
	} else {
		var_1_57 = ((min ((var_1_34 - var_1_14) , (var_1_99 + 1))) + ((max (var_1_6 , var_1_41)) + var_1_7));
	}


	// From: Req32Batch65Amount500
	signed long int stepLocal_28 = var_1_52;
	unsigned char stepLocal_27 = var_1_14;
	if (var_1_30 != stepLocal_28) {
		if (var_1_88 < stepLocal_27) {
			var_1_78 = (var_1_47 - (var_1_45 + var_1_15));
		} else {
			var_1_78 = (var_1_15 + (max (var_1_50 , var_1_45)));
		}
	} else {
		var_1_78 = (max ((max ((var_1_47 + var_1_45) , var_1_48)) , 1.875));
	}


	// From: Req38Batch65Amount500
	if ((var_1_87 - (abs (var_1_44))) < (var_1_46 / var_1_80)) {
		var_1_86 = var_1_29;
	} else {
		if (var_1_20) {
			var_1_86 = (min ((var_1_35 + var_1_97) , var_1_8));
		}
	}


	// From: Req3Batch65Amount500
	if (var_1_23 <= ((var_1_7 + var_1_8) / var_1_10)) {
		if (7.5 >= var_1_44) {
			var_1_9 = (abs (var_1_8 - (last_1_var_1_9 + var_1_7)));
		} else {
			var_1_9 = last_1_var_1_9;
		}
	}


	// From: Req5Batch65Amount500
	unsigned long int stepLocal_1 = var_1_98;
	if (stepLocal_1 > var_1_7) {
		var_1_17 = (5 + (var_1_7 + (max (var_1_14 , var_1_98))));
	} else {
		var_1_17 = (var_1_6 + var_1_82);
	}


	// From: Req41Batch65Amount500
	var_1_92 = var_1_57;


	// From: Req51Batch65Amount500
	if ((var_1_83 - var_1_26) < (var_1_57 + var_1_88)) {
		if (var_1_68 > (abs (var_1_26 - var_1_34))) {
			if (var_1_100) {
				var_1_104 = var_1_16;
			} else {
				var_1_104 = var_1_47;
			}
		} else {
			var_1_104 = var_1_48;
		}
	} else {
		var_1_104 = var_1_49;
	}


	// From: Req34Batch65Amount500
	signed short int stepLocal_31 = var_1_94;
	if ((var_1_86 * last_1_var_1_81) >= stepLocal_31) {
		var_1_81 = (abs (min (var_1_42 , var_1_59)));
	}


	// From: Req29Batch65Amount500
	signed long int stepLocal_22 = ~ (max (var_1_7 , var_1_81));
	if (! ((- var_1_43) <= var_1_101)) {
		if (stepLocal_22 > var_1_37) {
			if (! var_1_53) {
				var_1_74 = var_1_45;
			} else {
				if (var_1_90) {
					var_1_74 = 7.2f;
				} else {
					var_1_74 = ((var_1_46 - var_1_15) + var_1_45);
				}
			}
		} else {
			var_1_74 = (var_1_48 - 25.4f);
		}
	} else {
		if (var_1_90) {
			if (var_1_19) {
				var_1_74 = (var_1_47 - (max (32.1f , (var_1_15 + var_1_48))));
			} else {
				var_1_74 = (min (var_1_47 , var_1_48));
			}
		} else {
			if (var_1_53) {
				var_1_74 = (max (var_1_47 , var_1_51));
			} else {
				var_1_74 = var_1_15;
			}
		}
	}


	// From: Req30Batch65Amount500
	signed long int stepLocal_26 = var_1_41 * var_1_1;
	unsigned long int stepLocal_25 = max (var_1_5 , var_1_59);
	unsigned long int stepLocal_24 = var_1_98;
	unsigned char stepLocal_23 = (abs (var_1_50)) < var_1_96;
	if (var_1_57 > stepLocal_24) {
		if ((var_1_68 * (var_1_8 & var_1_99)) >= stepLocal_26) {
			var_1_75 = (min (var_1_23 , (var_1_73 - var_1_40)));
		} else {
			if (var_1_100 || stepLocal_23) {
				var_1_75 = var_1_65;
			} else {
				var_1_75 = (min (var_1_42 , var_1_7));
			}
		}
	} else {
		if (stepLocal_25 >= (256u / (var_1_73 - var_1_26))) {
			if (var_1_19) {
				var_1_75 = (var_1_29 + var_1_41);
			} else {
				var_1_75 = (var_1_73 - ((50u + var_1_43) + (8u + var_1_68)));
			}
		} else {
			var_1_75 = (max (var_1_13 , var_1_81));
		}
	}


	// From: Req37Batch65Amount500
	signed long int stepLocal_34 = - var_1_33;
	signed long int stepLocal_33 = var_1_92;
	if (stepLocal_34 <= ((var_1_94 * var_1_57) ^ var_1_14)) {
		var_1_85 = (abs (var_1_48));
	} else {
		if ((abs (var_1_15)) <= var_1_12) {
			var_1_85 = var_1_51;
		} else {
			if ((~ var_1_60) > stepLocal_33) {
				var_1_85 = var_1_45;
			} else {
				var_1_85 = ((min (var_1_51 , var_1_49)) + var_1_45);
			}
		}
	}


	// From: Req8Batch65Amount500
	signed long int stepLocal_6 = max ((var_1_6 * var_1_1) , var_1_94);
	signed long int stepLocal_5 = var_1_1;
	if (stepLocal_6 > var_1_18) {
		var_1_21 = var_1_13;
	} else {
		if (stepLocal_5 == ((min (var_1_7 , var_1_81)) / (min (var_1_13 , var_1_10)))) {
			var_1_21 = (max (var_1_14 , var_1_13));
		} else {
			var_1_21 = (max (var_1_14 , 64));
		}
	}


	// From: Req33Batch65Amount500
	unsigned short int stepLocal_30 = var_1_25;
	unsigned char stepLocal_29 = var_1_53;
	if (var_1_8 <= stepLocal_30) {
		if (var_1_104 <= ((0.5 + var_1_45) - (var_1_80 - var_1_49))) {
			var_1_79 = (var_1_46 + var_1_48);
		} else {
			if ((32 >= var_1_68) || stepLocal_29) {
				var_1_79 = var_1_47;
			}
		}
	}


	// From: Req24Batch65Amount500
	var_1_62 = ((max (var_1_75 , var_1_41)) - (var_1_6 + var_1_52));


	// From: Req27Batch65Amount500
	if (var_1_16 >= var_1_47) {
		if (var_1_79 <= (var_1_49 * (- var_1_47))) {
			var_1_67 = ((var_1_68 - var_1_14) - (var_1_34 - var_1_30));
		} else {
			var_1_67 = var_1_59;
		}
	}


	// From: Req21Batch65Amount500
	signed long int stepLocal_19 = var_1_67 / (max (-32 , var_1_33));
	unsigned char stepLocal_18 = var_1_53;
	if ((- var_1_51) < -0.5f) {
		if (var_1_35 <= stepLocal_19) {
			if (stepLocal_18 || (var_1_48 <= (var_1_50 / var_1_45))) {
				var_1_56 = (abs (var_1_8 + var_1_17));
			} else {
				var_1_56 = ((max (var_1_42 , (abs (var_1_17)))) + (max (var_1_26 , var_1_66)));
			}
		} else {
			var_1_56 = (max ((var_1_25 + var_1_7) , (min (var_1_1 , (min (128u , var_1_42))))));
		}
	}


	// From: Req28Batch65Amount500
	if (var_1_14 >= var_1_66) {
		var_1_69 = (var_1_24 + var_1_28);
	} else {
		if (! var_1_53) {
			if (128 < (var_1_97 / var_1_29)) {
				var_1_69 = (abs (min (var_1_42 , var_1_67)));
			}
		} else {
			if (var_1_45 < var_1_49) {
				var_1_69 = var_1_14;
			} else {
				if (var_1_44 > var_1_50) {
					var_1_69 = (var_1_73 - var_1_41);
				} else {
					var_1_69 = (var_1_73 - var_1_6);
				}
			}
		}
	}


	// From: Req31Batch65Amount500
	if (var_1_79 <= var_1_58) {
		if (var_1_19) {
			var_1_76 = ((max ((max (var_1_6 , var_1_21)) , var_1_34)) + var_1_81);
		} else {
			var_1_76 = (var_1_8 + (min ((var_1_34 - var_1_13) , var_1_23)));
		}
	} else {
		var_1_76 = (abs (var_1_56));
	}


	// From: Req20Batch65Amount500
	signed long int stepLocal_17 = var_1_76 * var_1_99;
	if (var_1_40 > stepLocal_17) {
		var_1_55 = 50.2f;
	}
}



void updateVariables() {
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
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 8192);
	assume_abort_if_not(var_1_25 <= 16384);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 32767);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 16383);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 16382);
	assume_abort_if_not(var_1_33 <= 32766);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= 16383);
	assume_abort_if_not(var_1_34 <= 32766);
	var_1_39 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_39 >= 1073741823);
	assume_abort_if_not(var_1_39 <= 2147483647);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 63);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= 2305843.009213691390e+12F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691390e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427382800e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427382800e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -230584.3009213691390e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691390e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= -230584.3009213691390e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691390e+12F && var_1_51 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 16);
	assume_abort_if_not(var_1_59 <= 32);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 16);
	var_1_65 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_65 >= 536870911);
	assume_abort_if_not(var_1_65 <= 1073741823);
	var_1_68 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_68 >= 49150);
	assume_abort_if_not(var_1_68 <= 65534);
	var_1_73 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_73 >= 2147483647);
	assume_abort_if_not(var_1_73 <= 4294967294);
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= 4611686.018427387900e+12F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854776000e+12F && var_1_80 >= 1.0e-20F ));
	var_1_83 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_83 >= 3221225470);
	assume_abort_if_not(var_1_83 <= 4294967294);
	var_1_87 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_87 >= 0.0F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 9223372.036854776000e+12F && var_1_87 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 0);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_102 = var_1_102;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((var_1_53 ? (var_1_19 ? (var_1_1 == ((signed long int) (16 - 2))) : (var_1_1 == ((signed long int) var_1_24))) : 1) && (var_1_19 ? (var_1_5 == ((unsigned char) (min (var_1_6 , (var_1_7 - var_1_8))))) : 1)) && ((var_1_23 <= ((var_1_7 + var_1_8) / var_1_10)) ? ((7.5 >= var_1_44) ? (var_1_9 == ((signed short int) (abs (var_1_8 - (last_1_var_1_9 + var_1_7))))) : (var_1_9 == ((signed short int) last_1_var_1_9))) : 1)) && ((var_1_7 > ((var_1_13 - var_1_14) - 10)) ? (var_1_12 == ((double) ((max ((31.25 + var_1_15) , (abs (5.5)))) - var_1_16))) : 1)) && ((var_1_98 > var_1_7) ? (var_1_17 == ((signed long int) (5 + (var_1_7 + (max (var_1_14 , var_1_98)))))) : (var_1_17 == ((signed long int) (var_1_6 + var_1_82))))) && ((((last_1_var_1_21 + last_1_var_1_24) * var_1_10) <= last_1_var_1_27) ? ((var_1_8 <= var_1_13) ? (var_1_18 == ((signed long int) (var_1_13 + last_1_var_1_30))) : 1) : 1)) && (last_1_var_1_90 ? ((last_1_var_1_100 || ((2.25 + last_1_var_1_78) != 31.625)) ? (var_1_19 == ((unsigned char) (! var_1_20))) : (var_1_19 == ((unsigned char) (((max (last_1_var_1_28 , var_1_8)) < last_1_var_1_24) || var_1_20)))) : 1)) && (((max ((var_1_6 * var_1_1) , var_1_94)) > var_1_18) ? (var_1_21 == ((signed char) var_1_13)) : ((var_1_1 == ((min (var_1_7 , var_1_81)) / (min (var_1_13 , var_1_10)))) ? (var_1_21 == ((signed char) (max (var_1_14 , var_1_13)))) : (var_1_21 == ((signed char) (max (var_1_14 , 64))))))) && ((var_1_53 || (-4 > (var_1_8 * var_1_10))) ? (var_1_23 == ((unsigned char) var_1_14)) : 1)) && (last_1_var_1_53 ? ((var_1_7 <= (- 25)) ? (var_1_24 == ((unsigned short int) (((var_1_25 - 8) + (abs (last_1_var_1_102))) + (var_1_14 + (last_1_var_1_98 + var_1_7))))) : 1) : (((last_1_var_1_66 != var_1_13) && var_1_20) ? (var_1_24 == ((unsigned short int) (var_1_26 - (max (last_1_var_1_102 , var_1_8))))) : (var_1_24 == ((unsigned short int) var_1_7))))) && (var_1_100 ? (var_1_27 == ((unsigned short int) (abs (var_1_26 - var_1_66)))) : (var_1_27 == ((unsigned short int) (abs (var_1_26)))))) && (((var_1_43 * (-5 / var_1_7)) != 256) ? (var_1_28 == ((unsigned short int) (min ((max ((var_1_13 + var_1_7) , var_1_103)) , 0)))) : ((var_1_10 <= ((min (var_1_13 , var_1_8)) * var_1_63)) ? (((min ((var_1_103 & var_1_10) , var_1_8)) > var_1_25) ? (var_1_28 == ((unsigned short int) (max ((max (var_1_26 , var_1_14)) , var_1_103)))) : (var_1_28 == ((unsigned short int) (min (var_1_8 , ((max (var_1_25 , var_1_14)) + (var_1_29 - var_1_6))))))) : 1))) && ((var_1_1 >= var_1_7) ? (var_1_100 ? ((! (var_1_94 <= var_1_27)) ? (var_1_30 == ((signed short int) (max ((abs (var_1_6)) , (var_1_13 + var_1_8))))) : 1) : (var_1_19 ? (var_1_30 == ((signed short int) (var_1_7 - var_1_25))) : (var_1_30 == ((signed short int) ((var_1_33 - var_1_37) - (var_1_34 - (var_1_6 + var_1_8))))))) : 1)) && ((var_1_33 >= (var_1_25 / (min (var_1_10 , var_1_34)))) ? (var_1_35 == ((signed short int) (var_1_25 - var_1_37))) : 1)) && ((((last_1_var_1_63 ^ last_1_var_1_1) * (var_1_29 / var_1_33)) >= ((var_1_39 - last_1_var_1_101) - var_1_25)) ? (var_1_37 == ((unsigned char) (min (((var_1_14 + var_1_40) + (var_1_41 - var_1_42)) , var_1_8)))) : (var_1_37 == ((unsigned char) var_1_6)))) && (((min ((- var_1_24) , (var_1_40 + last_1_var_1_43))) == var_1_33) ? (var_1_43 == ((signed long int) (var_1_14 + var_1_24))) : (var_1_43 == ((signed long int) (var_1_26 + ((var_1_14 + last_1_var_1_43) + 50)))))) && ((var_1_7 <= var_1_29) ? (var_1_44 == ((float) (min (var_1_16 , var_1_15)))) : (((- var_1_6) <= ((4 + var_1_7) - (max (var_1_24 , var_1_26)))) ? (var_1_44 == ((float) ((var_1_15 + (var_1_45 - var_1_46)) - ((min (var_1_47 , var_1_48)) + var_1_49)))) : (var_1_44 == ((float) (((min (var_1_47 , var_1_49)) - var_1_46) + (var_1_50 + var_1_51))))))) && (var_1_52 == ((signed long int) (var_1_18 - (var_1_37 + var_1_25))))) && ((var_1_100 && var_1_19) ? (var_1_53 == ((unsigned char) (var_1_20 || var_1_54))) : 1)) && ((var_1_40 > (var_1_76 * var_1_99)) ? (var_1_55 == ((float) 50.2f)) : 1)) && (((- var_1_51) < -0.5f) ? ((var_1_35 <= (var_1_67 / (max (-32 , var_1_33)))) ? ((var_1_53 || (var_1_48 <= (var_1_50 / var_1_45))) ? (var_1_56 == ((unsigned long int) (abs (var_1_8 + var_1_17)))) : (var_1_56 == ((unsigned long int) ((max (var_1_42 , (abs (var_1_17)))) + (max (var_1_26 , var_1_66)))))) : (var_1_56 == ((unsigned long int) (max ((var_1_25 + var_1_7) , (min (var_1_1 , (min (128u , var_1_42))))))))) : 1)) && (var_1_20 ? (var_1_57 == ((unsigned short int) (abs (max (var_1_5 , var_1_13))))) : (var_1_57 == ((unsigned short int) ((min ((var_1_34 - var_1_14) , (var_1_99 + 1))) + ((max (var_1_6 , var_1_41)) + var_1_7)))))) && (((64 >> (var_1_59 - var_1_60)) <= var_1_103) ? (var_1_58 == ((double) (var_1_49 - var_1_45))) : 1)) && (var_1_62 == ((signed long int) ((max (var_1_75 , var_1_41)) - (var_1_6 + var_1_52))))) && ((var_1_34 <= (var_1_25 * (var_1_29 * var_1_33))) ? (((min ((var_1_8 * var_1_10) , last_1_var_1_18)) <= var_1_26) ? (var_1_63 == ((signed long int) (max ((var_1_7 - var_1_8) , var_1_59)))) : ((-50 == last_1_var_1_66) ? (last_1_var_1_90 ? (var_1_63 == ((signed long int) ((var_1_29 + (var_1_65 - var_1_41)) - var_1_33))) : (var_1_63 == ((signed long int) (max ((min ((last_1_var_1_37 + last_1_var_1_28) , var_1_40)) , (abs (min (last_1_var_1_18 , var_1_65)))))))) : (var_1_63 == ((signed long int) var_1_34)))) : ((((var_1_42 * var_1_39) * var_1_10) >= -100000000) ? (var_1_63 == ((signed long int) last_1_var_1_67)) : 1))) && ((128 > var_1_14) ? (var_1_66 == ((signed char) (max (var_1_42 , (min (var_1_13 , var_1_60)))))) : 1)) && ((var_1_16 >= var_1_47) ? ((var_1_79 <= (var_1_49 * (- var_1_47))) ? (var_1_67 == ((unsigned short int) ((var_1_68 - var_1_14) - (var_1_34 - var_1_30)))) : (var_1_67 == ((unsigned short int) var_1_59))) : 1)) && ((var_1_14 >= var_1_66) ? (var_1_69 == ((unsigned long int) (var_1_24 + var_1_28))) : ((! var_1_53) ? ((128 < (var_1_97 / var_1_29)) ? (var_1_69 == ((unsigned long int) (abs (min (var_1_42 , var_1_67))))) : 1) : ((var_1_45 < var_1_49) ? (var_1_69 == ((unsigned long int) var_1_14)) : ((var_1_44 > var_1_50) ? (var_1_69 == ((unsigned long int) (var_1_73 - var_1_41))) : (var_1_69 == ((unsigned long int) (var_1_73 - var_1_6)))))))) && ((! ((- var_1_43) <= var_1_101)) ? (((~ (max (var_1_7 , var_1_81))) > var_1_37) ? ((! var_1_53) ? (var_1_74 == ((float) var_1_45)) : (var_1_90 ? (var_1_74 == ((float) 7.2f)) : (var_1_74 == ((float) ((var_1_46 - var_1_15) + var_1_45))))) : (var_1_74 == ((float) (var_1_48 - 25.4f)))) : (var_1_90 ? (var_1_19 ? (var_1_74 == ((float) (var_1_47 - (max (32.1f , (var_1_15 + var_1_48)))))) : (var_1_74 == ((float) (min (var_1_47 , var_1_48))))) : (var_1_53 ? (var_1_74 == ((float) (max (var_1_47 , var_1_51)))) : (var_1_74 == ((float) var_1_15)))))) && ((var_1_57 > var_1_98) ? (((var_1_68 * (var_1_8 & var_1_99)) >= (var_1_41 * var_1_1)) ? (var_1_75 == ((unsigned long int) (min (var_1_23 , (var_1_73 - var_1_40))))) : ((var_1_100 || ((abs (var_1_50)) < var_1_96)) ? (var_1_75 == ((unsigned long int) var_1_65)) : (var_1_75 == ((unsigned long int) (min (var_1_42 , var_1_7)))))) : (((max (var_1_5 , var_1_59)) >= (256u / (var_1_73 - var_1_26))) ? (var_1_19 ? (var_1_75 == ((unsigned long int) (var_1_29 + var_1_41))) : (var_1_75 == ((unsigned long int) (var_1_73 - ((50u + var_1_43) + (8u + var_1_68)))))) : (var_1_75 == ((unsigned long int) (max (var_1_13 , var_1_81))))))) && ((var_1_79 <= var_1_58) ? (var_1_19 ? (var_1_76 == ((unsigned short int) ((max ((max (var_1_6 , var_1_21)) , var_1_34)) + var_1_81))) : (var_1_76 == ((unsigned short int) (var_1_8 + (min ((var_1_34 - var_1_13) , var_1_23)))))) : (var_1_76 == ((unsigned short int) (abs (var_1_56)))))) && ((var_1_30 != var_1_52) ? ((var_1_88 < var_1_14) ? (var_1_78 == ((double) (var_1_47 - (var_1_45 + var_1_15)))) : (var_1_78 == ((double) (var_1_15 + (max (var_1_50 , var_1_45)))))) : (var_1_78 == ((double) (max ((max ((var_1_47 + var_1_45) , var_1_48)) , 1.875)))))) && ((var_1_8 <= var_1_25) ? ((var_1_104 <= ((0.5 + var_1_45) - (var_1_80 - var_1_49))) ? (var_1_79 == ((float) (var_1_46 + var_1_48))) : (((32 >= var_1_68) || var_1_53) ? (var_1_79 == ((float) var_1_47)) : 1)) : 1)) && (((var_1_86 * last_1_var_1_81) >= var_1_94) ? (var_1_81 == ((unsigned char) (abs (min (var_1_42 , var_1_59))))) : 1)) && (var_1_82 == ((unsigned long int) ((max ((var_1_83 - var_1_98) , var_1_73)) - var_1_18)))) && ((var_1_83 >= 64u) ? (var_1_84 == ((unsigned short int) (var_1_68 - var_1_23))) : 1)) && (((- var_1_33) <= ((var_1_94 * var_1_57) ^ var_1_14)) ? (var_1_85 == ((float) (abs (var_1_48)))) : (((abs (var_1_15)) <= var_1_12) ? (var_1_85 == ((float) var_1_51)) : (((~ var_1_60) > var_1_92) ? (var_1_85 == ((float) var_1_45)) : (var_1_85 == ((float) ((min (var_1_51 , var_1_49)) + var_1_45))))))) && (((var_1_87 - (abs (var_1_44))) < (var_1_46 / var_1_80)) ? (var_1_86 == ((signed long int) var_1_29)) : (var_1_20 ? (var_1_86 == ((signed long int) (min ((var_1_35 + var_1_97) , var_1_8)))) : 1))) && ((var_1_24 <= var_1_24) ? ((var_1_14 > var_1_59) ? (var_1_88 == ((signed long int) var_1_63)) : (var_1_88 == ((signed long int) var_1_14))) : (var_1_88 == ((signed long int) var_1_7)))) && (var_1_90 == ((unsigned char) var_1_91))) && (var_1_92 == ((signed long int) var_1_57))) && (var_1_90 ? (var_1_94 == ((signed short int) var_1_5)) : (var_1_94 == ((signed short int) var_1_60)))) && (var_1_19 ? (var_1_96 == ((float) var_1_15)) : 1)) && (var_1_90 ? (var_1_97 == ((signed short int) var_1_37)) : 1)) && (var_1_19 ? (var_1_98 == ((unsigned long int) var_1_65)) : (var_1_98 == ((unsigned long int) var_1_66)))) && (var_1_53 ? (var_1_99 == ((unsigned short int) var_1_68)) : (var_1_99 == ((unsigned short int) var_1_43)))) && (var_1_90 ? (var_1_100 == ((unsigned char) var_1_54)) : (var_1_100 == ((unsigned char) var_1_20)))) && (var_1_101 == ((signed short int) -4))) && (var_1_54 ? (var_1_102 == ((unsigned long int) 50u)) : (var_1_102 == ((unsigned long int) 500u)))) && (var_1_53 ? (var_1_103 == ((signed char) var_1_13)) : (var_1_103 == ((signed char) var_1_40)))) && (((var_1_83 - var_1_26) < (var_1_57 + var_1_88)) ? ((var_1_68 > (abs (var_1_26 - var_1_34))) ? (var_1_100 ? (var_1_104 == ((float) var_1_16)) : (var_1_104 == ((float) var_1_47))) : (var_1_104 == ((float) var_1_48))) : (var_1_104 == ((float) var_1_49)))
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
