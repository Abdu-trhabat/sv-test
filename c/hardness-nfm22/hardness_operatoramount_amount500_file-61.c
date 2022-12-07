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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch61Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 64;
unsigned long int var_1_2 = 3511246143;
unsigned char var_1_3 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed char var_1_8 = -128;
signed char var_1_9 = 10;
signed char var_1_10 = 32;
signed char var_1_11 = 1;
signed char var_1_15 = 25;
signed char var_1_16 = 16;
signed char var_1_17 = 32;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 200;
unsigned char var_1_21 = 1;
unsigned long int var_1_22 = 16;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned long int var_1_25 = 5;
unsigned short int var_1_26 = 5;
unsigned char var_1_27 = 0;
signed char var_1_28 = 4;
signed char var_1_29 = 64;
unsigned short int var_1_30 = 5;
unsigned short int var_1_31 = 45497;
unsigned char var_1_32 = 8;
signed char var_1_33 = -4;
float var_1_34 = 3.6;
float var_1_35 = 2.8;
float var_1_36 = 16.5;
float var_1_37 = 16.6;
float var_1_38 = 8.8;
float var_1_39 = 9999999999999.625;
float var_1_40 = 63.8;
signed char var_1_41 = -32;
signed char var_1_42 = 16;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
float var_1_45 = 1.25;
float var_1_46 = 4.25;
float var_1_47 = 63.8;
float var_1_48 = 256.6;
signed short int var_1_49 = 8;
signed short int var_1_50 = 24442;
float var_1_51 = 3.7;
float var_1_52 = 0.0;
float var_1_53 = 0.0;
float var_1_54 = 0.0;
unsigned char var_1_55 = 0;
unsigned long int var_1_56 = 3779018905;
float var_1_57 = 10000000000.42;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 1;
unsigned long int var_1_60 = 64;
signed short int var_1_61 = 25;
unsigned char var_1_62 = 64;
float var_1_63 = 7.5;
float var_1_64 = -0.375;
float var_1_65 = 5.5;
unsigned char var_1_66 = 32;
unsigned char var_1_67 = 64;
unsigned long int var_1_68 = 50;
unsigned long int var_1_69 = 3563801515;
double var_1_70 = 127.5;
signed char var_1_71 = 50;
unsigned char var_1_73 = 25;
unsigned short int var_1_75 = 5;
unsigned char var_1_76 = 5;
unsigned char var_1_78 = 128;
signed char var_1_79 = 5;
signed char var_1_80 = 2;
unsigned char var_1_81 = 0;
double var_1_83 = 0.2;
signed short int var_1_84 = -32;
signed short int var_1_85 = 10000;
signed short int var_1_86 = 10000;
signed short int var_1_87 = 0;
double var_1_88 = 256.2;
signed char var_1_89 = -2;
signed char var_1_90 = 64;
signed long int var_1_91 = -4;
signed long int var_1_92 = 0;
unsigned char var_1_93 = 4;
unsigned short int var_1_94 = 64;
unsigned char var_1_95 = 8;
signed long int var_1_96 = -64;
signed char var_1_97 = 16;
signed char var_1_98 = -32;
float var_1_99 = 8.25;
signed long int var_1_100 = 16;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 64;
unsigned char last_1_var_1_3 = 0;
unsigned char last_1_var_1_18 = 1;
unsigned char last_1_var_1_24 = 1;
unsigned char last_1_var_1_27 = 0;
unsigned short int last_1_var_1_30 = 5;
signed char last_1_var_1_41 = -32;
unsigned char last_1_var_1_55 = 0;
float last_1_var_1_57 = 10000000000.42;
unsigned char last_1_var_1_58 = 0;
signed char last_1_var_1_71 = 50;
unsigned char last_1_var_1_73 = 25;
unsigned char last_1_var_1_81 = 0;
double last_1_var_1_83 = 0.2;
signed short int last_1_var_1_84 = -32;
signed short int last_1_var_1_87 = 0;
signed char last_1_var_1_90 = 64;
signed long int last_1_var_1_96 = -64;
signed long int last_1_var_1_100 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch61Amount500
	if (((last_1_var_1_90 / var_1_19) + last_1_var_1_30) <= (var_1_2 + var_1_16)) {
		if (last_1_var_1_96 <= (var_1_19 / 10)) {
			var_1_25 = (var_1_2 - var_1_15);
		} else {
			var_1_25 = (var_1_2 - last_1_var_1_90);
		}
	} else {
		if ((var_1_22 / var_1_19) >= (50u ^ 5u)) {
			if (last_1_var_1_27 || (! last_1_var_1_58)) {
				if (! last_1_var_1_24) {
					var_1_25 = (max (last_1_var_1_55 , (var_1_17 + var_1_15)));
				}
			} else {
				var_1_25 = ((var_1_19 + (abs (var_1_17))) + (2u + last_1_var_1_55));
			}
		} else {
			var_1_25 = var_1_15;
		}
	}


	// From: Req27Batch61Amount500
	if (var_1_36 > last_1_var_1_83) {
		var_1_62 = var_1_15;
	}


	// From: Req22Batch61Amount500
	if (((max (var_1_15 , last_1_var_1_1)) + var_1_17) >= (var_1_31 - var_1_50)) {
		if (var_1_6) {
			var_1_55 = ((var_1_16 + var_1_15) + var_1_29);
		}
	} else {
		if ((max ((min (var_1_16 , var_1_2)) , last_1_var_1_73)) < (var_1_42 / (var_1_56 - var_1_29))) {
			var_1_55 = (var_1_17 + var_1_22);
		}
	}


	// From: Req9Batch61Amount500
	unsigned long int stepLocal_2 = min (var_1_19 , 10000u);
	if (last_1_var_1_18 > stepLocal_2) {
		var_1_26 = (max ((61182 - var_1_22) , last_1_var_1_100));
	} else {
		var_1_26 = (abs (abs (var_1_17)));
	}


	// From: Req35Batch61Amount500
	signed long int stepLocal_25 = last_1_var_1_100;
	unsigned char stepLocal_24 = last_1_var_1_3;
	if ((! last_1_var_1_81) && stepLocal_24) {
		if (stepLocal_25 >= var_1_76) {
			var_1_81 = (((- last_1_var_1_71) == last_1_var_1_41) && var_1_7);
		}
	}


	// From: Req45Batch61Amount500
	if (var_1_81) {
		var_1_94 = var_1_16;
	} else {
		var_1_94 = var_1_50;
	}


	// From: Req17Batch61Amount500
	if (! var_1_23) {
		if (var_1_81) {
			var_1_41 = var_1_16;
		} else {
			var_1_41 = (min (var_1_17 , var_1_29));
		}
	}


	// From: Req19Batch61Amount500
	unsigned short int stepLocal_5 = var_1_94;
	if (stepLocal_5 < var_1_2) {
		var_1_45 = (((max (var_1_37 , var_1_36)) + (abs (var_1_40))) - 63.875f);
	} else {
		var_1_45 = ((min ((var_1_36 - var_1_37) , var_1_40)) + (var_1_46 - (min (var_1_47 , var_1_48))));
	}


	// From: Req5Batch61Amount500
	if (last_1_var_1_81 || var_1_6) {
		var_1_18 = ((var_1_19 - var_1_15) - var_1_17);
	} else {
		if (((var_1_17 - last_1_var_1_55) >= -500) && last_1_var_1_58) {
			var_1_18 = var_1_19;
		} else {
			var_1_18 = (min (((var_1_19 - 4) - (min (var_1_15 , 64))) , var_1_17));
		}
	}


	// From: Req1Batch61Amount500
	var_1_1 = (var_1_2 - 8u);


	// From: Req3Batch61Amount500
	var_1_8 = (abs (var_1_9 + var_1_10));


	// From: Req6Batch61Amount500
	signed char stepLocal_1 = var_1_16;
	signed long int stepLocal_0 = -10 << (abs (var_1_22));
	if (var_1_17 >= stepLocal_0) {
		if (var_1_22 < stepLocal_1) {
			if (var_1_7) {
				var_1_21 = var_1_23;
			} else {
				var_1_21 = 0;
			}
		} else {
			var_1_21 = (! var_1_6);
		}
	} else {
		var_1_21 = (! var_1_6);
	}


	// From: Req7Batch61Amount500
	var_1_24 = (! var_1_7);


	// From: Req11Batch61Amount500
	if (var_1_24) {
		var_1_28 = (var_1_15 - (var_1_29 - var_1_16));
	}


	// From: Req13Batch61Amount500
	if (var_1_31 < var_1_22) {
		var_1_32 = (abs (min ((var_1_29 + var_1_16) , var_1_19)));
	}


	// From: Req14Batch61Amount500
	var_1_33 = (var_1_29 - var_1_15);


	// From: Req16Batch61Amount500
	if (! var_1_24) {
		var_1_38 = ((max ((min (var_1_37 , var_1_36)) , var_1_39)) + var_1_40);
	} else {
		var_1_38 = (var_1_37 - var_1_36);
	}


	// From: Req18Batch61Amount500
	if (var_1_62 > var_1_2) {
		var_1_43 = (! var_1_23);
	} else {
		var_1_43 = (var_1_23 && var_1_44);
	}


	// From: Req23Batch61Amount500
	unsigned char stepLocal_10 = var_1_62;
	if (var_1_39 <= (15.75f + last_1_var_1_57)) {
		if (var_1_42 < stepLocal_10) {
			var_1_57 = (min ((var_1_37 + var_1_39) , var_1_35));
		} else {
			if (var_1_35 >= (min ((var_1_48 * 127.875f) , var_1_46))) {
				var_1_57 = var_1_52;
			} else {
				var_1_57 = (var_1_47 - var_1_54);
			}
		}
	} else {
		var_1_57 = ((var_1_48 + var_1_46) - (var_1_54 + (max (var_1_47 , var_1_36))));
	}


	// From: Req29Batch61Amount500
	if (var_1_59) {
		var_1_66 = ((var_1_29 + (min (64 , var_1_67))) - (min ((var_1_15 + 50) , var_1_22)));
	} else {
		var_1_66 = (max (8 , (max ((var_1_19 - var_1_17) , (abs (var_1_16))))));
	}


	// From: Req31Batch61Amount500
	signed long int stepLocal_16 = - var_1_29;
	if (var_1_22 >= stepLocal_16) {
		var_1_70 = (var_1_54 + var_1_53);
	}


	// From: Req32Batch61Amount500
	if (var_1_42 != last_1_var_1_71) {
		if ((var_1_56 * var_1_1) < var_1_16) {
			var_1_71 = ((max (var_1_9 , var_1_15)) + var_1_22);
		} else {
			var_1_71 = (var_1_15 + var_1_10);
		}
	}


	// From: Req40Batch61Amount500
	if (var_1_6) {
		var_1_89 = var_1_9;
	} else {
		var_1_89 = var_1_19;
	}


	// From: Req41Batch61Amount500
	var_1_90 = var_1_9;


	// From: Req42Batch61Amount500
	if (var_1_21) {
		var_1_91 = var_1_15;
	} else {
		var_1_91 = var_1_67;
	}


	// From: Req44Batch61Amount500
	var_1_93 = var_1_17;


	// From: Req48Batch61Amount500
	if (var_1_21) {
		var_1_97 = var_1_16;
	} else {
		var_1_97 = var_1_42;
	}


	// From: Req49Batch61Amount500
	var_1_98 = var_1_42;


	// From: Req51Batch61Amount500
	if (var_1_19 == var_1_2) {
		if (! (var_1_10 <= var_1_86)) {
			if (((var_1_76 >> var_1_25) & var_1_50) > var_1_1) {
				var_1_100 = var_1_26;
			}
		} else {
			var_1_100 = var_1_25;
		}
	}


	// From: Req50Batch61Amount500
	if (var_1_62 < var_1_91) {
		var_1_99 = (abs (0.4f));
	}


	// From: Req34Batch61Amount500
	signed short int stepLocal_23 = var_1_50;
	unsigned long int stepLocal_22 = min (var_1_2 , (var_1_25 * var_1_50));
	signed long int stepLocal_21 = 50779 - var_1_76;
	if (var_1_90 > stepLocal_22) {
		if (stepLocal_23 <= var_1_42) {
			if (stepLocal_21 == var_1_90) {
				var_1_79 = ((var_1_42 - 2) + var_1_16);
			} else {
				var_1_79 = (max (var_1_19 , (min (var_1_80 , var_1_42))));
			}
		} else {
			var_1_79 = (min ((abs (var_1_22)) , var_1_29));
		}
	}


	// From: Req30Batch61Amount500
	if ((var_1_45 * var_1_70) <= (min (var_1_57 , var_1_45))) {
		var_1_68 = (var_1_50 + var_1_79);
	} else {
		if (! (var_1_62 >= 1)) {
			var_1_68 = ((min ((var_1_69 - var_1_19) , var_1_2)) - var_1_42);
		}
	}


	// From: Req15Batch61Amount500
	if ((- var_1_94) < var_1_100) {
		if (var_1_91 >= var_1_26) {
			var_1_34 = var_1_35;
		}
	} else {
		var_1_34 = (16.175f - (var_1_36 + (max (3.625f , var_1_37))));
	}


	// From: Req20Batch61Amount500
	signed long int stepLocal_6 = var_1_19 - var_1_16;
	if (stepLocal_6 <= (16 + var_1_93)) {
		var_1_49 = ((var_1_50 - var_1_29) - var_1_22);
	}


	// From: Req47Batch61Amount500
	if (var_1_59) {
		var_1_96 = var_1_32;
	} else {
		var_1_96 = var_1_100;
	}


	// From: Req25Batch61Amount500
	if (var_1_40 < var_1_48) {
		var_1_60 = (min (var_1_62 , var_1_29));
	} else {
		if ((var_1_35 * var_1_48) > (var_1_99 + (var_1_46 - var_1_54))) {
			var_1_60 = (max ((var_1_2 - var_1_1) , var_1_22));
		}
	}


	// From: Req37Batch61Amount500
	if (var_1_23) {
		var_1_84 = (min (var_1_68 , (var_1_76 - var_1_19)));
	} else {
		if (var_1_18 == var_1_69) {
			if (var_1_60 <= (max (last_1_var_1_84 , (abs (var_1_17))))) {
				var_1_84 = (((var_1_85 + var_1_86) - var_1_96) - var_1_22);
			}
		} else {
			var_1_84 = (var_1_26 - (min (last_1_var_1_84 , var_1_76)));
		}
	}


	// From: Req10Batch61Amount500
	unsigned long int stepLocal_3 = var_1_60;
	if (var_1_22 >= stepLocal_3) {
		var_1_27 = var_1_23;
	} else {
		var_1_27 = var_1_23;
	}


	// From: Req46Batch61Amount500
	if (var_1_27) {
		var_1_95 = var_1_15;
	} else {
		var_1_95 = var_1_67;
	}


	// From: Req2Batch61Amount500
	if (((- var_1_2) + var_1_95) != var_1_55) {
		if (var_1_2 >= var_1_55) {
			var_1_3 = (! (var_1_24 && var_1_6));
		} else {
			var_1_3 = (var_1_24 && var_1_6);
		}
	} else {
		var_1_3 = (var_1_6 && var_1_7);
	}


	// From: Req39Batch61Amount500
	if (var_1_3) {
		var_1_88 = var_1_40;
	} else {
		var_1_88 = var_1_48;
	}


	// From: Req38Batch61Amount500
	if (last_1_var_1_87 < var_1_66) {
		if (var_1_80 < (var_1_95 % (max (var_1_29 , var_1_67)))) {
			var_1_87 = var_1_85;
		}
	}


	// From: Req21Batch61Amount500
	signed char stepLocal_9 = var_1_28;
	unsigned char stepLocal_8 = var_1_88 > var_1_45;
	unsigned long int stepLocal_7 = 2u;
	if (var_1_37 > var_1_47) {
		if (var_1_16 <= stepLocal_9) {
			var_1_51 = ((min (var_1_37 , (var_1_52 - var_1_36))) - var_1_46);
		} else {
			if ((var_1_22 << var_1_71) > stepLocal_7) {
				var_1_51 = (((var_1_53 + var_1_54) - var_1_46) - (abs (var_1_52 - var_1_37)));
			}
		}
	} else {
		if (stepLocal_8 || (var_1_35 <= var_1_70)) {
			var_1_51 = var_1_46;
		} else {
			var_1_51 = (var_1_47 - 1.0000000000000375E13f);
		}
	}


	// From: Req12Batch61Amount500
	signed long int stepLocal_4 = var_1_9 << 1u;
	if (! var_1_23) {
		if (stepLocal_4 > var_1_19) {
			var_1_30 = (var_1_87 + (var_1_29 + 4));
		} else {
			var_1_30 = (var_1_31 - (max (2 , var_1_29)));
		}
	}


	// From: Req43Batch61Amount500
	if (var_1_21) {
		var_1_92 = var_1_10;
	} else {
		var_1_92 = var_1_30;
	}


	// From: Req24Batch61Amount500
	unsigned char stepLocal_11 = var_1_3;
	if (stepLocal_11 && (var_1_92 >= -5)) {
		if (var_1_43) {
			var_1_58 = (! var_1_44);
		} else {
			var_1_58 = (var_1_44 && (var_1_23 && var_1_59));
		}
	} else {
		var_1_58 = (var_1_3 && var_1_6);
	}


	// From: Req26Batch61Amount500
	signed long int stepLocal_12 = 25 / var_1_19;
	if (stepLocal_12 >= (var_1_9 + var_1_30)) {
		var_1_61 = (min (((var_1_29 - var_1_42) + var_1_9) , var_1_97));
	} else {
		if (var_1_21) {
			var_1_61 = (min ((min ((var_1_16 - var_1_90) , var_1_18)) , -16));
		} else {
			var_1_61 = -128;
		}
	}


	// From: Req36Batch61Amount500
	if (var_1_48 <= ((var_1_38 + var_1_64) * 32.75f)) {
		if (var_1_29 > var_1_92) {
			var_1_83 = (max (var_1_40 , (var_1_39 + var_1_64)));
		}
	} else {
		if (var_1_91 > var_1_92) {
			var_1_83 = (var_1_54 + var_1_36);
		} else {
			var_1_83 = (min (0.25 , var_1_64));
		}
	}


	// From: Req28Batch61Amount500
	unsigned long int stepLocal_15 = var_1_42 / var_1_56;
	unsigned char stepLocal_14 = var_1_81;
	unsigned char stepLocal_13 = (- var_1_61) < (abs (var_1_32));
	if (var_1_18 > stepLocal_15) {
		if (var_1_43 && stepLocal_14) {
			var_1_63 = (abs (max (var_1_37 , var_1_40)));
		} else {
			var_1_63 = (var_1_40 + var_1_47);
		}
	} else {
		if (! var_1_43) {
			if (var_1_81 && stepLocal_13) {
				var_1_63 = (var_1_48 + 25.2f);
			} else {
				var_1_63 = ((var_1_64 + (max (var_1_65 , 10.2f))) + (max (var_1_37 , var_1_48)));
			}
		}
	}


	// From: Req33Batch61Amount500
	signed long int stepLocal_20 = 32 / var_1_75;
	unsigned long int stepLocal_19 = max ((var_1_22 + var_1_26) , var_1_29);
	unsigned char stepLocal_18 = var_1_95;
	signed short int stepLocal_17 = var_1_84;
	if (stepLocal_18 > var_1_50) {
		if (var_1_44) {
			if (var_1_24) {
				if (stepLocal_20 >= (var_1_94 * var_1_22)) {
					if ((var_1_31 & var_1_56) >= stepLocal_19) {
						var_1_73 = (var_1_19 - var_1_29);
					} else {
						var_1_73 = ((var_1_19 - var_1_16) - (max ((var_1_15 + 8) , var_1_22)));
					}
				} else {
					var_1_73 = (var_1_42 + var_1_17);
				}
			} else {
				var_1_73 = (var_1_19 - var_1_76);
			}
		}
	} else {
		if (50.125 > var_1_63) {
			if (stepLocal_17 >= var_1_79) {
				var_1_73 = ((var_1_19 - var_1_42) - (max ((var_1_29 - var_1_16) , 32)));
			} else {
				var_1_73 = (min (((max (var_1_19 , var_1_78)) - (var_1_16 + var_1_22)) , var_1_29));
			}
		}
	}


	// From: Req4Batch61Amount500
	if (var_1_2 != var_1_73) {
		if ((var_1_83 * var_1_88) < var_1_57) {
			var_1_11 = (min (var_1_9 , var_1_10));
		} else {
			if (256 > var_1_10) {
				if (var_1_10 == (max (var_1_25 , var_1_2))) {
					if (var_1_7) {
						if (var_1_57 >= var_1_83) {
							var_1_11 = (min (var_1_9 , ((var_1_15 + var_1_16) - var_1_17)));
						} else {
							var_1_11 = var_1_15;
						}
					}
				} else {
					var_1_11 = (abs (64));
				}
			}
		}
	} else {
		if (var_1_9 < var_1_25) {
			var_1_11 = var_1_16;
		} else {
			var_1_11 = var_1_16;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 2147483647);
	assume_abort_if_not(var_1_2 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -63);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -63);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 190);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 27);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 63);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 32767);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -461168.6018427382800e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -461168.6018427382800e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 31);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427382800e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427382800e+12F && var_1_48 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 16382);
	assume_abort_if_not(var_1_50 <= 32766);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 4611686.018427382800e+12F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 2305843.009213691390e+12F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= 2305843.009213691390e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_56 >= 2147483647);
	assume_abort_if_not(var_1_56 <= 4294967295);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 1);
	assume_abort_if_not(var_1_59 <= 1);
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= -230584.3009213691390e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691390e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= -230584.3009213691390e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691390e+12F && var_1_65 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 64);
	assume_abort_if_not(var_1_67 <= 127);
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 3221225470);
	assume_abort_if_not(var_1_69 <= 4294967294);
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 65535);
	assume_abort_if_not(var_1_75 != 0);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 127);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 127);
	assume_abort_if_not(var_1_78 <= 254);
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= -127);
	assume_abort_if_not(var_1_80 <= 126);
	var_1_85 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_85 >= 8191);
	assume_abort_if_not(var_1_85 <= 16383);
	var_1_86 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_86 >= 8191);
	assume_abort_if_not(var_1_86 <= 16383);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_3 = var_1_3;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_100 = var_1_100;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((var_1_1 == ((unsigned long int) (var_1_2 - 8u))) && ((((- var_1_2) + var_1_95) != var_1_55) ? ((var_1_2 >= var_1_55) ? (var_1_3 == ((unsigned char) (! (var_1_24 && var_1_6)))) : (var_1_3 == ((unsigned char) (var_1_24 && var_1_6)))) : (var_1_3 == ((unsigned char) (var_1_6 && var_1_7))))) && (var_1_8 == ((signed char) (abs (var_1_9 + var_1_10))))) && ((var_1_2 != var_1_73) ? (((var_1_83 * var_1_88) < var_1_57) ? (var_1_11 == ((signed char) (min (var_1_9 , var_1_10)))) : ((256 > var_1_10) ? ((var_1_10 == (max (var_1_25 , var_1_2))) ? (var_1_7 ? ((var_1_57 >= var_1_83) ? (var_1_11 == ((signed char) (min (var_1_9 , ((var_1_15 + var_1_16) - var_1_17))))) : (var_1_11 == ((signed char) var_1_15))) : 1) : (var_1_11 == ((signed char) (abs (64))))) : 1)) : ((var_1_9 < var_1_25) ? (var_1_11 == ((signed char) var_1_16)) : (var_1_11 == ((signed char) var_1_16))))) && ((last_1_var_1_81 || var_1_6) ? (var_1_18 == ((unsigned char) ((var_1_19 - var_1_15) - var_1_17))) : ((((var_1_17 - last_1_var_1_55) >= -500) && last_1_var_1_58) ? (var_1_18 == ((unsigned char) var_1_19)) : (var_1_18 == ((unsigned char) (min (((var_1_19 - 4) - (min (var_1_15 , 64))) , var_1_17))))))) && ((var_1_17 >= (-10 << (abs (var_1_22)))) ? ((var_1_22 < var_1_16) ? (var_1_7 ? (var_1_21 == ((unsigned char) var_1_23)) : (var_1_21 == ((unsigned char) 0))) : (var_1_21 == ((unsigned char) (! var_1_6)))) : (var_1_21 == ((unsigned char) (! var_1_6))))) && (var_1_24 == ((unsigned char) (! var_1_7)))) && ((((last_1_var_1_90 / var_1_19) + last_1_var_1_30) <= (var_1_2 + var_1_16)) ? ((last_1_var_1_96 <= (var_1_19 / 10)) ? (var_1_25 == ((unsigned long int) (var_1_2 - var_1_15))) : (var_1_25 == ((unsigned long int) (var_1_2 - last_1_var_1_90)))) : (((var_1_22 / var_1_19) >= (50u ^ 5u)) ? ((last_1_var_1_27 || (! last_1_var_1_58)) ? ((! last_1_var_1_24) ? (var_1_25 == ((unsigned long int) (max (last_1_var_1_55 , (var_1_17 + var_1_15))))) : 1) : (var_1_25 == ((unsigned long int) ((var_1_19 + (abs (var_1_17))) + (2u + last_1_var_1_55))))) : (var_1_25 == ((unsigned long int) var_1_15))))) && ((last_1_var_1_18 > (min (var_1_19 , 10000u))) ? (var_1_26 == ((unsigned short int) (max ((61182 - var_1_22) , last_1_var_1_100)))) : (var_1_26 == ((unsigned short int) (abs (abs (var_1_17))))))) && ((var_1_22 >= var_1_60) ? (var_1_27 == ((unsigned char) var_1_23)) : (var_1_27 == ((unsigned char) var_1_23)))) && (var_1_24 ? (var_1_28 == ((signed char) (var_1_15 - (var_1_29 - var_1_16)))) : 1)) && ((! var_1_23) ? (((var_1_9 << 1u) > var_1_19) ? (var_1_30 == ((unsigned short int) (var_1_87 + (var_1_29 + 4)))) : (var_1_30 == ((unsigned short int) (var_1_31 - (max (2 , var_1_29)))))) : 1)) && ((var_1_31 < var_1_22) ? (var_1_32 == ((unsigned char) (abs (min ((var_1_29 + var_1_16) , var_1_19))))) : 1)) && (var_1_33 == ((signed char) (var_1_29 - var_1_15)))) && (((- var_1_94) < var_1_100) ? ((var_1_91 >= var_1_26) ? (var_1_34 == ((float) var_1_35)) : 1) : (var_1_34 == ((float) (16.175f - (var_1_36 + (max (3.625f , var_1_37)))))))) && ((! var_1_24) ? (var_1_38 == ((float) ((max ((min (var_1_37 , var_1_36)) , var_1_39)) + var_1_40))) : (var_1_38 == ((float) (var_1_37 - var_1_36))))) && ((! var_1_23) ? (var_1_81 ? (var_1_41 == ((signed char) var_1_16)) : (var_1_41 == ((signed char) (min (var_1_17 , var_1_29))))) : 1)) && ((var_1_62 > var_1_2) ? (var_1_43 == ((unsigned char) (! var_1_23))) : (var_1_43 == ((unsigned char) (var_1_23 && var_1_44))))) && ((var_1_94 < var_1_2) ? (var_1_45 == ((float) (((max (var_1_37 , var_1_36)) + (abs (var_1_40))) - 63.875f))) : (var_1_45 == ((float) ((min ((var_1_36 - var_1_37) , var_1_40)) + (var_1_46 - (min (var_1_47 , var_1_48)))))))) && (((var_1_19 - var_1_16) <= (16 + var_1_93)) ? (var_1_49 == ((signed short int) ((var_1_50 - var_1_29) - var_1_22))) : 1)) && ((var_1_37 > var_1_47) ? ((var_1_16 <= var_1_28) ? (var_1_51 == ((float) ((min (var_1_37 , (var_1_52 - var_1_36))) - var_1_46))) : (((var_1_22 << var_1_71) > 2u) ? (var_1_51 == ((float) (((var_1_53 + var_1_54) - var_1_46) - (abs (var_1_52 - var_1_37))))) : 1)) : (((var_1_88 > var_1_45) || (var_1_35 <= var_1_70)) ? (var_1_51 == ((float) var_1_46)) : (var_1_51 == ((float) (var_1_47 - 1.0000000000000375E13f)))))) && ((((max (var_1_15 , last_1_var_1_1)) + var_1_17) >= (var_1_31 - var_1_50)) ? (var_1_6 ? (var_1_55 == ((unsigned char) ((var_1_16 + var_1_15) + var_1_29))) : 1) : (((max ((min (var_1_16 , var_1_2)) , last_1_var_1_73)) < (var_1_42 / (var_1_56 - var_1_29))) ? (var_1_55 == ((unsigned char) (var_1_17 + var_1_22))) : 1))) && ((var_1_39 <= (15.75f + last_1_var_1_57)) ? ((var_1_42 < var_1_62) ? (var_1_57 == ((float) (min ((var_1_37 + var_1_39) , var_1_35)))) : ((var_1_35 >= (min ((var_1_48 * 127.875f) , var_1_46))) ? (var_1_57 == ((float) var_1_52)) : (var_1_57 == ((float) (var_1_47 - var_1_54))))) : (var_1_57 == ((float) ((var_1_48 + var_1_46) - (var_1_54 + (max (var_1_47 , var_1_36)))))))) && ((var_1_3 && (var_1_92 >= -5)) ? (var_1_43 ? (var_1_58 == ((unsigned char) (! var_1_44))) : (var_1_58 == ((unsigned char) (var_1_44 && (var_1_23 && var_1_59))))) : (var_1_58 == ((unsigned char) (var_1_3 && var_1_6))))) && ((var_1_40 < var_1_48) ? (var_1_60 == ((unsigned long int) (min (var_1_62 , var_1_29)))) : (((var_1_35 * var_1_48) > (var_1_99 + (var_1_46 - var_1_54))) ? (var_1_60 == ((unsigned long int) (max ((var_1_2 - var_1_1) , var_1_22)))) : 1))) && (((25 / var_1_19) >= (var_1_9 + var_1_30)) ? (var_1_61 == ((signed short int) (min (((var_1_29 - var_1_42) + var_1_9) , var_1_97)))) : (var_1_21 ? (var_1_61 == ((signed short int) (min ((min ((var_1_16 - var_1_90) , var_1_18)) , -16)))) : (var_1_61 == ((signed short int) -128))))) && ((var_1_36 > last_1_var_1_83) ? (var_1_62 == ((unsigned char) var_1_15)) : 1)) && ((var_1_18 > (var_1_42 / var_1_56)) ? ((var_1_43 && var_1_81) ? (var_1_63 == ((float) (abs (max (var_1_37 , var_1_40))))) : (var_1_63 == ((float) (var_1_40 + var_1_47)))) : ((! var_1_43) ? ((var_1_81 && ((- var_1_61) < (abs (var_1_32)))) ? (var_1_63 == ((float) (var_1_48 + 25.2f))) : (var_1_63 == ((float) ((var_1_64 + (max (var_1_65 , 10.2f))) + (max (var_1_37 , var_1_48)))))) : 1))) && (var_1_59 ? (var_1_66 == ((unsigned char) ((var_1_29 + (min (64 , var_1_67))) - (min ((var_1_15 + 50) , var_1_22))))) : (var_1_66 == ((unsigned char) (max (8 , (max ((var_1_19 - var_1_17) , (abs (var_1_16)))))))))) && (((var_1_45 * var_1_70) <= (min (var_1_57 , var_1_45))) ? (var_1_68 == ((unsigned long int) (var_1_50 + var_1_79))) : ((! (var_1_62 >= 1)) ? (var_1_68 == ((unsigned long int) ((min ((var_1_69 - var_1_19) , var_1_2)) - var_1_42))) : 1))) && ((var_1_22 >= (- var_1_29)) ? (var_1_70 == ((double) (var_1_54 + var_1_53))) : 1)) && ((var_1_42 != last_1_var_1_71) ? (((var_1_56 * var_1_1) < var_1_16) ? (var_1_71 == ((signed char) ((max (var_1_9 , var_1_15)) + var_1_22))) : (var_1_71 == ((signed char) (var_1_15 + var_1_10)))) : 1)) && ((var_1_95 > var_1_50) ? (var_1_44 ? (var_1_24 ? (((32 / var_1_75) >= (var_1_94 * var_1_22)) ? (((var_1_31 & var_1_56) >= (max ((var_1_22 + var_1_26) , var_1_29))) ? (var_1_73 == ((unsigned char) (var_1_19 - var_1_29))) : (var_1_73 == ((unsigned char) ((var_1_19 - var_1_16) - (max ((var_1_15 + 8) , var_1_22)))))) : (var_1_73 == ((unsigned char) (var_1_42 + var_1_17)))) : (var_1_73 == ((unsigned char) (var_1_19 - var_1_76)))) : 1) : ((50.125 > var_1_63) ? ((var_1_84 >= var_1_79) ? (var_1_73 == ((unsigned char) ((var_1_19 - var_1_42) - (max ((var_1_29 - var_1_16) , 32))))) : (var_1_73 == ((unsigned char) (min (((max (var_1_19 , var_1_78)) - (var_1_16 + var_1_22)) , var_1_29))))) : 1))) && ((var_1_90 > (min (var_1_2 , (var_1_25 * var_1_50)))) ? ((var_1_50 <= var_1_42) ? (((50779 - var_1_76) == var_1_90) ? (var_1_79 == ((signed char) ((var_1_42 - 2) + var_1_16))) : (var_1_79 == ((signed char) (max (var_1_19 , (min (var_1_80 , var_1_42))))))) : (var_1_79 == ((signed char) (min ((abs (var_1_22)) , var_1_29))))) : 1)) && (((! last_1_var_1_81) && last_1_var_1_3) ? ((last_1_var_1_100 >= var_1_76) ? (var_1_81 == ((unsigned char) (((- last_1_var_1_71) == last_1_var_1_41) && var_1_7))) : 1) : 1)) && ((var_1_48 <= ((var_1_38 + var_1_64) * 32.75f)) ? ((var_1_29 > var_1_92) ? (var_1_83 == ((double) (max (var_1_40 , (var_1_39 + var_1_64))))) : 1) : ((var_1_91 > var_1_92) ? (var_1_83 == ((double) (var_1_54 + var_1_36))) : (var_1_83 == ((double) (min (0.25 , var_1_64))))))) && (var_1_23 ? (var_1_84 == ((signed short int) (min (var_1_68 , (var_1_76 - var_1_19))))) : ((var_1_18 == var_1_69) ? ((var_1_60 <= (max (last_1_var_1_84 , (abs (var_1_17))))) ? (var_1_84 == ((signed short int) (((var_1_85 + var_1_86) - var_1_96) - var_1_22))) : 1) : (var_1_84 == ((signed short int) (var_1_26 - (min (last_1_var_1_84 , var_1_76)))))))) && ((last_1_var_1_87 < var_1_66) ? ((var_1_80 < (var_1_95 % (max (var_1_29 , var_1_67)))) ? (var_1_87 == ((signed short int) var_1_85)) : 1) : 1)) && (var_1_3 ? (var_1_88 == ((double) var_1_40)) : (var_1_88 == ((double) var_1_48)))) && (var_1_6 ? (var_1_89 == ((signed char) var_1_9)) : (var_1_89 == ((signed char) var_1_19)))) && (var_1_90 == ((signed char) var_1_9))) && (var_1_21 ? (var_1_91 == ((signed long int) var_1_15)) : (var_1_91 == ((signed long int) var_1_67)))) && (var_1_21 ? (var_1_92 == ((signed long int) var_1_10)) : (var_1_92 == ((signed long int) var_1_30)))) && (var_1_93 == ((unsigned char) var_1_17))) && (var_1_81 ? (var_1_94 == ((unsigned short int) var_1_16)) : (var_1_94 == ((unsigned short int) var_1_50)))) && (var_1_27 ? (var_1_95 == ((unsigned char) var_1_15)) : (var_1_95 == ((unsigned char) var_1_67)))) && (var_1_59 ? (var_1_96 == ((signed long int) var_1_32)) : (var_1_96 == ((signed long int) var_1_100)))) && (var_1_21 ? (var_1_97 == ((signed char) var_1_16)) : (var_1_97 == ((signed char) var_1_42)))) && (var_1_98 == ((signed char) var_1_42))) && ((var_1_62 < var_1_91) ? (var_1_99 == ((float) (abs (0.4f)))) : 1)) && ((var_1_19 == var_1_2) ? ((! (var_1_10 <= var_1_86)) ? ((((var_1_76 >> var_1_25) & var_1_50) > var_1_1) ? (var_1_100 == ((signed long int) var_1_26)) : 1) : (var_1_100 == ((signed long int) var_1_25))) : 1)
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
