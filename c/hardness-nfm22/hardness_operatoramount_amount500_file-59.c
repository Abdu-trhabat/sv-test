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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch59Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 50;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 64;
signed short int var_1_7 = -2;
unsigned long int var_1_8 = 4064846883;
unsigned long int var_1_11 = 1;
unsigned long int var_1_13 = 3912727740;
unsigned long int var_1_14 = 1798943342;
double var_1_15 = 16.25;
double var_1_16 = 8.9;
double var_1_17 = 100.25;
double var_1_18 = 0.375;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 64;
unsigned char var_1_21 = 0;
float var_1_22 = 16.8;
float var_1_23 = 8.2;
float var_1_24 = 128.6;
unsigned long int var_1_25 = 10;
unsigned long int var_1_27 = 3497399989;
unsigned char var_1_28 = 32;
unsigned char var_1_29 = 16;
float var_1_30 = 255.5;
float var_1_31 = 1.25;
unsigned char var_1_32 = 2;
unsigned char var_1_34 = 128;
unsigned char var_1_35 = 100;
unsigned long int var_1_36 = 256;
signed char var_1_37 = -1;
unsigned long int var_1_38 = 3400649248;
signed char var_1_39 = 16;
unsigned short int var_1_40 = 16;
signed short int var_1_41 = 25;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 1;
unsigned long int var_1_47 = 32;
double var_1_48 = 31.5;
signed short int var_1_49 = -4;
float var_1_52 = 8.5;
signed short int var_1_53 = 32;
unsigned short int var_1_55 = 200;
signed long int var_1_56 = 0;
unsigned short int var_1_59 = 10;
unsigned short int var_1_60 = 57336;
float var_1_61 = 99.25;
float var_1_62 = 8.5;
float var_1_63 = 999999999999999.5;
float var_1_64 = 0.0;
float var_1_65 = 0.75;
signed char var_1_66 = 25;
signed char var_1_67 = 10;
signed char var_1_68 = 1;
signed long int var_1_69 = -128;
unsigned char var_1_70 = 2;
double var_1_71 = 256.75;
double var_1_72 = 64.25;
unsigned char var_1_73 = 16;
signed char var_1_74 = -2;
signed char var_1_75 = 25;
double var_1_76 = 9999.8;
double var_1_77 = 4.2;
signed short int var_1_78 = 256;
unsigned long int var_1_79 = 0;
unsigned long int var_1_80 = 500;
signed short int var_1_82 = -4;
float var_1_83 = 10.4;
float var_1_84 = 50.5;
signed short int var_1_85 = 32;
signed short int var_1_86 = 26508;
unsigned char var_1_87 = 0;
unsigned char var_1_88 = 0;
unsigned long int var_1_89 = 64;
unsigned char var_1_90 = 1;
unsigned char var_1_91 = 1;
float var_1_92 = -0.8;
signed char var_1_93 = -16;
double var_1_94 = 9.25;
signed short int var_1_95 = -64;
float var_1_96 = 100000000.5;
signed long int var_1_97 = 16;
unsigned char var_1_98 = 0;
double var_1_99 = 31.5;
unsigned char var_1_100 = 0;
unsigned short int var_1_101 = 32;
unsigned char var_1_102 = 1;
double var_1_103 = 10.25;
unsigned short int var_1_104 = 25;
signed short int var_1_105 = -128;
double var_1_106 = 15.75;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 50;
signed short int last_1_var_1_7 = -2;
unsigned char last_1_var_1_19 = 0;
float last_1_var_1_22 = 16.8;
unsigned long int last_1_var_1_25 = 10;
unsigned char last_1_var_1_32 = 2;
unsigned char last_1_var_1_34 = 128;
unsigned long int last_1_var_1_36 = 256;
signed short int last_1_var_1_41 = 25;
unsigned char last_1_var_1_42 = 0;
signed short int last_1_var_1_49 = -4;
signed short int last_1_var_1_53 = 32;
unsigned short int last_1_var_1_55 = 200;
unsigned short int last_1_var_1_59 = 10;
double last_1_var_1_71 = 256.75;
signed char last_1_var_1_74 = -2;
signed short int last_1_var_1_78 = 256;
unsigned long int last_1_var_1_79 = 0;
unsigned long int last_1_var_1_80 = 500;
unsigned char last_1_var_1_90 = 1;
signed char last_1_var_1_93 = -16;
float last_1_var_1_96 = 100000000.5;
signed long int last_1_var_1_97 = 16;
unsigned char last_1_var_1_98 = 0;
unsigned char last_1_var_1_100 = 0;
unsigned short int last_1_var_1_101 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch59Amount500
	unsigned long int stepLocal_4 = max ((var_1_6 / var_1_8) , 4u);
	unsigned char stepLocal_3 = var_1_5;
	unsigned long int stepLocal_2 = last_1_var_1_79 >> last_1_var_1_1;
	signed long int stepLocal_1 = last_1_var_1_1;
	signed long int stepLocal_0 = last_1_var_1_1;
	if (stepLocal_3 >= (~ (min (last_1_var_1_7 , last_1_var_1_1)))) {
		if (last_1_var_1_7 <= stepLocal_2) {
			if (stepLocal_0 > (last_1_var_1_7 ^ (var_1_5 + last_1_var_1_36))) {
				var_1_7 = (min ((var_1_5 + 128) , last_1_var_1_7));
			} else {
				if (stepLocal_1 > (var_1_8 - var_1_5)) {
					if (last_1_var_1_36 >= stepLocal_4) {
						var_1_7 = ((var_1_5 + var_1_6) + ((min (last_1_var_1_100 , last_1_var_1_7)) - 16));
					}
				} else {
					if (256.1 < last_1_var_1_96) {
						var_1_7 = -256;
					} else {
						var_1_7 = -16;
					}
				}
			}
		}
	} else {
		var_1_7 = var_1_5;
	}


	// From: Req30Batch59Amount500
	unsigned long int stepLocal_30 = (var_1_29 - last_1_var_1_36) << last_1_var_1_59;
	signed long int stepLocal_29 = (var_1_5 - var_1_21) * last_1_var_1_19;
	if (stepLocal_29 < var_1_29) {
		if (last_1_var_1_90) {
			if (((last_1_var_1_7 + -10) << last_1_var_1_97) < stepLocal_30) {
				var_1_74 = (var_1_21 - var_1_75);
			}
		} else {
			var_1_74 = (min (-4 , var_1_39));
		}
	}


	// From: Req19Batch59Amount500
	if (var_1_21 != (last_1_var_1_36 + last_1_var_1_74)) {
		if (var_1_23 > (last_1_var_1_22 / var_1_52)) {
			var_1_49 = (var_1_35 - (max (var_1_21 , last_1_var_1_78)));
		} else {
			if ((var_1_18 <= (last_1_var_1_22 * var_1_24)) && var_1_44) {
				var_1_49 = (abs (var_1_21 + (var_1_20 - last_1_var_1_55)));
			}
		}
	}


	// From: Req10Batch59Amount500
	unsigned char stepLocal_9 = var_1_6 == var_1_13;
	unsigned char stepLocal_8 = last_1_var_1_98;
	if (last_1_var_1_42) {
		if (((var_1_8 & last_1_var_1_80) > var_1_29) || stepLocal_8) {
			if (last_1_var_1_98 || stepLocal_9) {
				var_1_32 = (abs (var_1_29));
			}
		}
	}


	// From: Req41Batch59Amount500
	if (last_1_var_1_32 < (200 - var_1_75)) {
		if ((last_1_var_1_101 | (last_1_var_1_41 / var_1_20)) <= var_1_27) {
			var_1_90 = (! var_1_44);
		} else {
			var_1_90 = var_1_88;
		}
	} else {
		if (var_1_43) {
			if (var_1_31 <= last_1_var_1_71) {
				if ((var_1_5 - var_1_35) < last_1_var_1_55) {
					var_1_90 = var_1_91;
				} else {
					var_1_90 = var_1_44;
				}
			} else {
				var_1_90 = var_1_91;
			}
		}
	}


	// From: Req48Batch59Amount500
	if (var_1_90) {
		var_1_98 = var_1_45;
	}


	// From: Req46Batch59Amount500
	if (var_1_98) {
		var_1_96 = 255.5f;
	}


	// From: Req21Batch59Amount500
	signed long int stepLocal_17 = -16 ^ last_1_var_1_59;
	if (last_1_var_1_98) {
		if (last_1_var_1_49 > stepLocal_17) {
			if (! (var_1_13 >= 1u)) {
				var_1_55 = (((last_1_var_1_25 + last_1_var_1_93) + var_1_35) + last_1_var_1_49);
			}
		}
	} else {
		var_1_55 = (last_1_var_1_49 + last_1_var_1_93);
	}


	// From: Req18Batch59Amount500
	if ((var_1_38 - (var_1_14 - var_1_55)) < (var_1_35 >> var_1_39)) {
		var_1_48 = ((24.8 + 2.375) - var_1_18);
	} else {
		var_1_48 = (var_1_23 + 9.99999999925E9);
	}


	// From: Req1Batch59Amount500
	if ((last_1_var_1_101 + (last_1_var_1_34 + 4u)) != last_1_var_1_25) {
		var_1_1 = ((var_1_5 - 2) - var_1_6);
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req5Batch59Amount500
	var_1_19 = ((var_1_20 - var_1_21) + var_1_6);


	// From: Req6Batch59Amount500
	var_1_22 = (var_1_23 + var_1_24);


	// From: Req13Batch59Amount500
	unsigned long int stepLocal_14 = var_1_27;
	unsigned long int stepLocal_13 = var_1_13 - var_1_19;
	if (((var_1_38 - var_1_6) - var_1_20) < stepLocal_13) {
		if (var_1_5 < stepLocal_14) {
			var_1_37 = var_1_5;
		} else {
			var_1_37 = (abs (max (var_1_5 , (min (var_1_21 , var_1_39)))));
		}
	} else {
		var_1_37 = var_1_21;
	}


	// From: Req16Batch59Amount500
	var_1_42 = ((var_1_43 && (var_1_44 && var_1_45)) && var_1_46);


	// From: Req25Batch59Amount500
	unsigned long int stepLocal_21 = var_1_38;
	unsigned long int stepLocal_20 = var_1_35 - var_1_14;
	unsigned char stepLocal_19 = var_1_6;
	unsigned long int stepLocal_18 = var_1_27 - var_1_60;
	if (stepLocal_19 > (abs (min (25 , var_1_8)))) {
		if (stepLocal_21 == 100000u) {
			var_1_66 = var_1_5;
		} else {
			if (((var_1_5 + var_1_29) - var_1_20) < stepLocal_20) {
				if ((max (64 , var_1_14)) > stepLocal_18) {
					var_1_66 = ((var_1_67 + var_1_68) + var_1_21);
				}
			}
		}
	}


	// From: Req37Batch59Amount500
	if (var_1_44) {
		var_1_84 = var_1_24;
	} else {
		var_1_84 = (min (((var_1_77 + var_1_65) + var_1_72) , (var_1_24 + var_1_64)));
	}


	// From: Req39Batch59Amount500
	unsigned long int stepLocal_37 = 64u;
	if (var_1_27 <= stepLocal_37) {
		var_1_87 = (var_1_46 && var_1_88);
	}


	// From: Req42Batch59Amount500
	if (var_1_87) {
		var_1_92 = var_1_63;
	} else {
		var_1_92 = var_1_72;
	}


	// From: Req43Batch59Amount500
	if (var_1_44) {
		var_1_93 = var_1_67;
	} else {
		var_1_93 = 0;
	}


	// From: Req44Batch59Amount500
	var_1_94 = 2.375;


	// From: Req47Batch59Amount500
	if (var_1_44) {
		var_1_97 = var_1_60;
	}


	// From: Req49Batch59Amount500
	if (var_1_45) {
		var_1_99 = var_1_77;
	} else {
		var_1_99 = var_1_64;
	}


	// From: Req50Batch59Amount500
	var_1_100 = 128;


	// From: Req51Batch59Amount500
	if (var_1_44) {
		var_1_101 = var_1_29;
	} else {
		var_1_101 = 10;
	}


	// From: Req52Batch59Amount500
	var_1_102 = var_1_21;


	// From: Req53Batch59Amount500
	var_1_103 = var_1_18;


	// From: Req55Batch59Amount500
	if (var_1_44) {
		var_1_105 = (max (var_1_39 , (min (128 , var_1_20))));
	}


	// From: Req22Batch59Amount500
	if (! var_1_98) {
		if (var_1_90) {
			var_1_56 = ((abs (var_1_32)) + var_1_49);
		} else {
			var_1_56 = (8 - var_1_55);
		}
	} else {
		if (var_1_46) {
			var_1_56 = ((max (var_1_49 , var_1_100)) + var_1_6);
		} else {
			var_1_56 = (var_1_21 - (abs (var_1_35)));
		}
	}


	// From: Req8Batch59Amount500
	unsigned char stepLocal_7 = var_1_20;
	if (stepLocal_7 <= (max (var_1_32 , var_1_100))) {
		var_1_28 = (max ((var_1_5 - var_1_20) , (16 + var_1_29)));
	}


	// From: Req7Batch59Amount500
	if (var_1_17 > ((var_1_48 * var_1_24) * (- var_1_16))) {
		if (var_1_94 > var_1_24) {
			var_1_25 = ((max (var_1_13 , var_1_27)) - var_1_5);
		}
	}


	// From: Req17Batch59Amount500
	if (! var_1_44) {
		var_1_47 = (var_1_27 - (var_1_25 + var_1_20));
	}


	// From: Req26Batch59Amount500
	if ((var_1_27 - 50u) == var_1_1) {
		var_1_69 = (var_1_1 + var_1_47);
	}


	// From: Req3Batch59Amount500
	if (! var_1_87) {
		var_1_11 = (max (var_1_5 , var_1_6));
	} else {
		var_1_11 = (min ((var_1_13 - (var_1_14 - var_1_5)) , 32u));
	}


	// From: Req12Batch59Amount500
	signed char stepLocal_12 = var_1_66;
	if (stepLocal_12 >= (- var_1_100)) {
		var_1_36 = var_1_5;
	} else {
		var_1_36 = var_1_13;
	}


	// From: Req45Batch59Amount500
	if (var_1_42) {
		var_1_95 = var_1_25;
	}


	// From: Req15Batch59Amount500
	var_1_41 = ((var_1_39 + (max (var_1_1 , var_1_69))) + var_1_35);


	// From: Req38Batch59Amount500
	unsigned long int stepLocal_36 = var_1_8 - var_1_93;
	if (var_1_46) {
		if (var_1_44) {
			if (! var_1_43) {
				var_1_85 = ((min ((var_1_86 - 32) , var_1_101)) - var_1_35);
			}
		} else {
			if (var_1_27 >= stepLocal_36) {
				var_1_85 = (var_1_21 - var_1_41);
			}
		}
	} else {
		var_1_85 = (abs (var_1_101));
	}


	// From: Req23Batch59Amount500
	if (var_1_90) {
		if (var_1_55 <= var_1_55) {
			var_1_59 = (var_1_105 + ((var_1_25 + 10) + var_1_102));
		} else {
			if (var_1_102 >= var_1_36) {
				var_1_59 = (var_1_5 + (var_1_29 + var_1_101));
			} else {
				var_1_59 = (var_1_60 - var_1_41);
			}
		}
	}


	// From: Req27Batch59Amount500
	unsigned char stepLocal_23 = var_1_6 != (16 / var_1_5);
	unsigned char stepLocal_22 = var_1_44;
	if (stepLocal_23 && (var_1_59 != 100)) {
		var_1_70 = (max (((var_1_20 - var_1_21) + var_1_29) , var_1_35));
	} else {
		if ((var_1_66 > var_1_35) || stepLocal_22) {
			var_1_70 = (min ((max ((var_1_5 - var_1_21) , var_1_20)) , (var_1_35 + var_1_29)));
		} else {
			var_1_70 = (var_1_21 + 4);
		}
	}


	// From: Req29Batch59Amount500
	signed char stepLocal_28 = var_1_67;
	if (stepLocal_28 <= ((max (var_1_21 , var_1_97)) + var_1_70)) {
		var_1_73 = var_1_21;
	}


	// From: Req35Batch59Amount500
	if ((- (var_1_65 * var_1_18)) > var_1_16) {
		var_1_82 = (max (-100 , (-1 + var_1_70)));
	} else {
		var_1_82 = var_1_35;
	}


	// From: Req31Batch59Amount500
	unsigned char stepLocal_31 = var_1_70;
	if ((- var_1_49) <= stepLocal_31) {
		var_1_76 = (var_1_63 + (abs (var_1_65 + var_1_77)));
	}


	// From: Req36Batch59Amount500
	signed short int stepLocal_35 = var_1_82;
	if (stepLocal_35 != var_1_97) {
		var_1_83 = ((var_1_72 - var_1_65) + ((min (31.5f , var_1_63)) - var_1_64));
	} else {
		var_1_83 = ((abs (var_1_31 - 500.5f)) - var_1_64);
	}


	// From: Req34Batch59Amount500
	unsigned char stepLocal_34 = var_1_43 && (var_1_45 && var_1_98);
	if (var_1_90 && stepLocal_34) {
		var_1_80 = (max ((var_1_75 + (abs (var_1_35))) , var_1_21));
	} else {
		var_1_80 = (max ((var_1_14 + var_1_1) , ((var_1_7 + last_1_var_1_80) + var_1_59)));
	}


	// From: Req54Batch59Amount500
	var_1_104 = var_1_73;


	// From: Req11Batch59Amount500
	signed long int stepLocal_11 = var_1_82 - var_1_19;
	unsigned short int stepLocal_10 = var_1_104;
	if (stepLocal_11 <= var_1_36) {
		var_1_34 = var_1_5;
	} else {
		if (var_1_29 >= stepLocal_10) {
			var_1_34 = var_1_21;
		} else {
			if (var_1_42) {
				var_1_34 = (var_1_5 - var_1_35);
			}
		}
	}


	// From: Req32Batch59Amount500
	var_1_78 = (abs ((max (var_1_102 , var_1_34)) + var_1_68));


	// From: Req24Batch59Amount500
	if ((var_1_35 & (min (var_1_37 , var_1_28))) == (var_1_34 + (-64 / var_1_20))) {
		var_1_61 = (var_1_62 - (var_1_63 + (var_1_64 - var_1_65)));
	}


	// From: Req40Batch59Amount500
	if ((min (var_1_86 , var_1_49)) <= var_1_6) {
		var_1_89 = (var_1_27 - var_1_5);
	} else {
		var_1_89 = (max (var_1_11 , (var_1_60 + (abs (var_1_34)))));
	}


	// From: Req20Batch59Amount500
	if (var_1_94 < ((var_1_17 - var_1_18) / var_1_52)) {
		if (var_1_27 != var_1_6) {
			var_1_53 = (256 - var_1_21);
		} else {
			if (var_1_11 != var_1_8) {
				var_1_53 = (var_1_11 + (max ((last_1_var_1_53 + var_1_11) , var_1_1)));
			} else {
				var_1_53 = (min (var_1_39 , -256));
			}
		}
	} else {
		if (var_1_42 && (var_1_89 < var_1_14)) {
			if (var_1_11 == (max (var_1_36 , (var_1_5 - var_1_21)))) {
				var_1_53 = last_1_var_1_53;
			} else {
				var_1_53 = ((var_1_35 + 5) - var_1_102);
			}
		} else {
			var_1_53 = var_1_11;
		}
	}


	// From: Req4Batch59Amount500
	unsigned long int stepLocal_6 = var_1_89;
	unsigned long int stepLocal_5 = var_1_89;
	if (stepLocal_5 <= var_1_6) {
		var_1_15 = (abs (var_1_16));
	} else {
		if (var_1_6 < stepLocal_6) {
			var_1_15 = 256.5;
		} else {
			var_1_15 = (abs (var_1_17 - var_1_18));
		}
	}


	// From: Req9Batch59Amount500
	if (var_1_17 <= (- (64.75 - var_1_18))) {
		if ((var_1_99 * var_1_15) > var_1_23) {
			var_1_30 = (min (var_1_18 , var_1_23));
		} else {
			var_1_30 = (var_1_18 - 64.75f);
		}
	} else {
		var_1_30 = ((max (var_1_17 , var_1_18)) - var_1_31);
	}


	// From: Req56Batch59Amount500
	signed long int stepLocal_38 = var_1_29 * var_1_66;
	if (stepLocal_38 < var_1_56) {
		if ((var_1_94 / var_1_52) < var_1_30) {
			var_1_106 = var_1_63;
		} else {
			var_1_106 = var_1_65;
		}
	} else {
		var_1_106 = var_1_23;
	}


	// From: Req14Batch59Amount500
	unsigned char stepLocal_16 = (max (var_1_35 , var_1_6)) == var_1_25;
	unsigned long int stepLocal_15 = (var_1_21 * var_1_56) + (var_1_13 * var_1_89);
	if (stepLocal_16 || var_1_90) {
		if (stepLocal_15 >= (3678214906u - var_1_35)) {
			var_1_40 = var_1_80;
		} else {
			var_1_40 = ((var_1_35 + var_1_5) + var_1_74);
		}
	}


	// From: Req33Batch59Amount500
	unsigned short int stepLocal_33 = var_1_40;
	unsigned char stepLocal_32 = (max (var_1_6 , var_1_49)) < var_1_74;
	if (stepLocal_33 >= ((var_1_32 + 25) / var_1_20)) {
		var_1_79 = (var_1_27 - var_1_14);
	} else {
		if (stepLocal_32 && (var_1_53 != last_1_var_1_79)) {
			var_1_79 = (var_1_27 - var_1_28);
		} else {
			var_1_79 = var_1_5;
		}
	}


	// From: Req28Batch59Amount500
	signed long int stepLocal_27 = (max (var_1_104 , var_1_1)) + (var_1_40 >> var_1_100);
	unsigned char stepLocal_26 = var_1_100;
	signed long int stepLocal_25 = var_1_5 * var_1_55;
	unsigned char stepLocal_24 = var_1_21;
	if (var_1_25 != stepLocal_25) {
		if (stepLocal_24 > (max ((var_1_55 >> var_1_104) , var_1_36))) {
			var_1_71 = (abs (var_1_64));
		} else {
			if (var_1_100 < stepLocal_27) {
				if ((var_1_19 * var_1_80) > stepLocal_26) {
					var_1_71 = (((max (var_1_64 , var_1_63)) - var_1_65) + var_1_23);
				} else {
					var_1_71 = ((var_1_63 - var_1_64) + (var_1_65 - var_1_72));
				}
			}
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967295);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 2147483647);
	assume_abort_if_not(var_1_13 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 1073741823);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 63);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427382800e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 2147483647);
	assume_abort_if_not(var_1_27 <= 4294967294);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 3221225471);
	assume_abort_if_not(var_1_38 <= 4294967295);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -126);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= -922337.2036854776000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	assume_abort_if_not(var_1_52 != 0.0F);
	var_1_60 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_60 >= 32767);
	assume_abort_if_not(var_1_60 <= 65534);
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427382800e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= 2305843.009213691390e+12F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427382800e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691390e+12F && var_1_65 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= -31);
	assume_abort_if_not(var_1_67 <= 32);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= -31);
	assume_abort_if_not(var_1_68 <= 31);
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427382800e+12F && var_1_72 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 126);
	var_1_77 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_77 >= -230584.3009213691390e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 2305843.009213691390e+12F && var_1_77 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_86 >= 16382);
	assume_abort_if_not(var_1_86 <= 32766);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 0);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 1);
	assume_abort_if_not(var_1_91 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_101 = var_1_101;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_101 + (last_1_var_1_34 + 4u)) != last_1_var_1_25) ? (var_1_1 == ((unsigned char) ((var_1_5 - 2) - var_1_6))) : (var_1_1 == ((unsigned char) var_1_6))) && ((var_1_5 >= (~ (min (last_1_var_1_7 , last_1_var_1_1)))) ? ((last_1_var_1_7 <= (last_1_var_1_79 >> last_1_var_1_1)) ? ((last_1_var_1_1 > (last_1_var_1_7 ^ (var_1_5 + last_1_var_1_36))) ? (var_1_7 == ((signed short int) (min ((var_1_5 + 128) , last_1_var_1_7)))) : ((last_1_var_1_1 > (var_1_8 - var_1_5)) ? ((last_1_var_1_36 >= (max ((var_1_6 / var_1_8) , 4u))) ? (var_1_7 == ((signed short int) ((var_1_5 + var_1_6) + ((min (last_1_var_1_100 , last_1_var_1_7)) - 16)))) : 1) : ((256.1 < last_1_var_1_96) ? (var_1_7 == ((signed short int) -256)) : (var_1_7 == ((signed short int) -16))))) : 1) : (var_1_7 == ((signed short int) var_1_5)))) && ((! var_1_87) ? (var_1_11 == ((unsigned long int) (max (var_1_5 , var_1_6)))) : (var_1_11 == ((unsigned long int) (min ((var_1_13 - (var_1_14 - var_1_5)) , 32u)))))) && ((var_1_89 <= var_1_6) ? (var_1_15 == ((double) (abs (var_1_16)))) : ((var_1_6 < var_1_89) ? (var_1_15 == ((double) 256.5)) : (var_1_15 == ((double) (abs (var_1_17 - var_1_18))))))) && (var_1_19 == ((unsigned char) ((var_1_20 - var_1_21) + var_1_6)))) && (var_1_22 == ((float) (var_1_23 + var_1_24)))) && ((var_1_17 > ((var_1_48 * var_1_24) * (- var_1_16))) ? ((var_1_94 > var_1_24) ? (var_1_25 == ((unsigned long int) ((max (var_1_13 , var_1_27)) - var_1_5))) : 1) : 1)) && ((var_1_20 <= (max (var_1_32 , var_1_100))) ? (var_1_28 == ((unsigned char) (max ((var_1_5 - var_1_20) , (16 + var_1_29))))) : 1)) && ((var_1_17 <= (- (64.75 - var_1_18))) ? (((var_1_99 * var_1_15) > var_1_23) ? (var_1_30 == ((float) (min (var_1_18 , var_1_23)))) : (var_1_30 == ((float) (var_1_18 - 64.75f)))) : (var_1_30 == ((float) ((max (var_1_17 , var_1_18)) - var_1_31))))) && (last_1_var_1_42 ? ((((var_1_8 & last_1_var_1_80) > var_1_29) || last_1_var_1_98) ? ((last_1_var_1_98 || (var_1_6 == var_1_13)) ? (var_1_32 == ((unsigned char) (abs (var_1_29)))) : 1) : 1) : 1)) && (((var_1_82 - var_1_19) <= var_1_36) ? (var_1_34 == ((unsigned char) var_1_5)) : ((var_1_29 >= var_1_104) ? (var_1_34 == ((unsigned char) var_1_21)) : (var_1_42 ? (var_1_34 == ((unsigned char) (var_1_5 - var_1_35))) : 1)))) && ((var_1_66 >= (- var_1_100)) ? (var_1_36 == ((unsigned long int) var_1_5)) : (var_1_36 == ((unsigned long int) var_1_13)))) && ((((var_1_38 - var_1_6) - var_1_20) < (var_1_13 - var_1_19)) ? ((var_1_5 < var_1_27) ? (var_1_37 == ((signed char) var_1_5)) : (var_1_37 == ((signed char) (abs (max (var_1_5 , (min (var_1_21 , var_1_39)))))))) : (var_1_37 == ((signed char) var_1_21)))) && ((((max (var_1_35 , var_1_6)) == var_1_25) || var_1_90) ? ((((var_1_21 * var_1_56) + (var_1_13 * var_1_89)) >= (3678214906u - var_1_35)) ? (var_1_40 == ((unsigned short int) var_1_80)) : (var_1_40 == ((unsigned short int) ((var_1_35 + var_1_5) + var_1_74)))) : 1)) && (var_1_41 == ((signed short int) ((var_1_39 + (max (var_1_1 , var_1_69))) + var_1_35)))) && (var_1_42 == ((unsigned char) ((var_1_43 && (var_1_44 && var_1_45)) && var_1_46)))) && ((! var_1_44) ? (var_1_47 == ((unsigned long int) (var_1_27 - (var_1_25 + var_1_20)))) : 1)) && (((var_1_38 - (var_1_14 - var_1_55)) < (var_1_35 >> var_1_39)) ? (var_1_48 == ((double) ((24.8 + 2.375) - var_1_18))) : (var_1_48 == ((double) (var_1_23 + 9.99999999925E9))))) && ((var_1_21 != (last_1_var_1_36 + last_1_var_1_74)) ? ((var_1_23 > (last_1_var_1_22 / var_1_52)) ? (var_1_49 == ((signed short int) (var_1_35 - (max (var_1_21 , last_1_var_1_78))))) : (((var_1_18 <= (last_1_var_1_22 * var_1_24)) && var_1_44) ? (var_1_49 == ((signed short int) (abs (var_1_21 + (var_1_20 - last_1_var_1_55))))) : 1)) : 1)) && ((var_1_94 < ((var_1_17 - var_1_18) / var_1_52)) ? ((var_1_27 != var_1_6) ? (var_1_53 == ((signed short int) (256 - var_1_21))) : ((var_1_11 != var_1_8) ? (var_1_53 == ((signed short int) (var_1_11 + (max ((last_1_var_1_53 + var_1_11) , var_1_1))))) : (var_1_53 == ((signed short int) (min (var_1_39 , -256)))))) : ((var_1_42 && (var_1_89 < var_1_14)) ? ((var_1_11 == (max (var_1_36 , (var_1_5 - var_1_21)))) ? (var_1_53 == ((signed short int) last_1_var_1_53)) : (var_1_53 == ((signed short int) ((var_1_35 + 5) - var_1_102)))) : (var_1_53 == ((signed short int) var_1_11))))) && (last_1_var_1_98 ? ((last_1_var_1_49 > (-16 ^ last_1_var_1_59)) ? ((! (var_1_13 >= 1u)) ? (var_1_55 == ((unsigned short int) (((last_1_var_1_25 + last_1_var_1_93) + var_1_35) + last_1_var_1_49))) : 1) : 1) : (var_1_55 == ((unsigned short int) (last_1_var_1_49 + last_1_var_1_93))))) && ((! var_1_98) ? (var_1_90 ? (var_1_56 == ((signed long int) ((abs (var_1_32)) + var_1_49))) : (var_1_56 == ((signed long int) (8 - var_1_55)))) : (var_1_46 ? (var_1_56 == ((signed long int) ((max (var_1_49 , var_1_100)) + var_1_6))) : (var_1_56 == ((signed long int) (var_1_21 - (abs (var_1_35)))))))) && (var_1_90 ? ((var_1_55 <= var_1_55) ? (var_1_59 == ((unsigned short int) (var_1_105 + ((var_1_25 + 10) + var_1_102)))) : ((var_1_102 >= var_1_36) ? (var_1_59 == ((unsigned short int) (var_1_5 + (var_1_29 + var_1_101)))) : (var_1_59 == ((unsigned short int) (var_1_60 - var_1_41))))) : 1)) && (((var_1_35 & (min (var_1_37 , var_1_28))) == (var_1_34 + (-64 / var_1_20))) ? (var_1_61 == ((float) (var_1_62 - (var_1_63 + (var_1_64 - var_1_65))))) : 1)) && ((var_1_6 > (abs (min (25 , var_1_8)))) ? ((var_1_38 == 100000u) ? (var_1_66 == ((signed char) var_1_5)) : ((((var_1_5 + var_1_29) - var_1_20) < (var_1_35 - var_1_14)) ? (((max (64 , var_1_14)) > (var_1_27 - var_1_60)) ? (var_1_66 == ((signed char) ((var_1_67 + var_1_68) + var_1_21))) : 1) : 1)) : 1)) && (((var_1_27 - 50u) == var_1_1) ? (var_1_69 == ((signed long int) (var_1_1 + var_1_47))) : 1)) && (((var_1_6 != (16 / var_1_5)) && (var_1_59 != 100)) ? (var_1_70 == ((unsigned char) (max (((var_1_20 - var_1_21) + var_1_29) , var_1_35)))) : (((var_1_66 > var_1_35) || var_1_44) ? (var_1_70 == ((unsigned char) (min ((max ((var_1_5 - var_1_21) , var_1_20)) , (var_1_35 + var_1_29))))) : (var_1_70 == ((unsigned char) (var_1_21 + 4)))))) && ((var_1_25 != (var_1_5 * var_1_55)) ? ((var_1_21 > (max ((var_1_55 >> var_1_104) , var_1_36))) ? (var_1_71 == ((double) (abs (var_1_64)))) : ((var_1_100 < ((max (var_1_104 , var_1_1)) + (var_1_40 >> var_1_100))) ? (((var_1_19 * var_1_80) > var_1_100) ? (var_1_71 == ((double) (((max (var_1_64 , var_1_63)) - var_1_65) + var_1_23))) : (var_1_71 == ((double) ((var_1_63 - var_1_64) + (var_1_65 - var_1_72))))) : 1)) : 1)) && ((var_1_67 <= ((max (var_1_21 , var_1_97)) + var_1_70)) ? (var_1_73 == ((unsigned char) var_1_21)) : 1)) && ((((var_1_5 - var_1_21) * last_1_var_1_19) < var_1_29) ? (last_1_var_1_90 ? ((((last_1_var_1_7 + -10) << last_1_var_1_97) < ((var_1_29 - last_1_var_1_36) << last_1_var_1_59)) ? (var_1_74 == ((signed char) (var_1_21 - var_1_75))) : 1) : (var_1_74 == ((signed char) (min (-4 , var_1_39))))) : 1)) && (((- var_1_49) <= var_1_70) ? (var_1_76 == ((double) (var_1_63 + (abs (var_1_65 + var_1_77))))) : 1)) && (var_1_78 == ((signed short int) (abs ((max (var_1_102 , var_1_34)) + var_1_68))))) && ((var_1_40 >= ((var_1_32 + 25) / var_1_20)) ? (var_1_79 == ((unsigned long int) (var_1_27 - var_1_14))) : ((((max (var_1_6 , var_1_49)) < var_1_74) && (var_1_53 != last_1_var_1_79)) ? (var_1_79 == ((unsigned long int) (var_1_27 - var_1_28))) : (var_1_79 == ((unsigned long int) var_1_5))))) && ((var_1_90 && (var_1_43 && (var_1_45 && var_1_98))) ? (var_1_80 == ((unsigned long int) (max ((var_1_75 + (abs (var_1_35))) , var_1_21)))) : (var_1_80 == ((unsigned long int) (max ((var_1_14 + var_1_1) , ((var_1_7 + last_1_var_1_80) + var_1_59))))))) && (((- (var_1_65 * var_1_18)) > var_1_16) ? (var_1_82 == ((signed short int) (max (-100 , (-1 + var_1_70))))) : (var_1_82 == ((signed short int) var_1_35)))) && ((var_1_82 != var_1_97) ? (var_1_83 == ((float) ((var_1_72 - var_1_65) + ((min (31.5f , var_1_63)) - var_1_64)))) : (var_1_83 == ((float) ((abs (var_1_31 - 500.5f)) - var_1_64))))) && (var_1_44 ? (var_1_84 == ((float) var_1_24)) : (var_1_84 == ((float) (min (((var_1_77 + var_1_65) + var_1_72) , (var_1_24 + var_1_64))))))) && (var_1_46 ? (var_1_44 ? ((! var_1_43) ? (var_1_85 == ((signed short int) ((min ((var_1_86 - 32) , var_1_101)) - var_1_35))) : 1) : ((var_1_27 >= (var_1_8 - var_1_93)) ? (var_1_85 == ((signed short int) (var_1_21 - var_1_41))) : 1)) : (var_1_85 == ((signed short int) (abs (var_1_101)))))) && ((var_1_27 <= 64u) ? (var_1_87 == ((unsigned char) (var_1_46 && var_1_88))) : 1)) && (((min (var_1_86 , var_1_49)) <= var_1_6) ? (var_1_89 == ((unsigned long int) (var_1_27 - var_1_5))) : (var_1_89 == ((unsigned long int) (max (var_1_11 , (var_1_60 + (abs (var_1_34))))))))) && ((last_1_var_1_32 < (200 - var_1_75)) ? (((last_1_var_1_101 | (last_1_var_1_41 / var_1_20)) <= var_1_27) ? (var_1_90 == ((unsigned char) (! var_1_44))) : (var_1_90 == ((unsigned char) var_1_88))) : (var_1_43 ? ((var_1_31 <= last_1_var_1_71) ? (((var_1_5 - var_1_35) < last_1_var_1_55) ? (var_1_90 == ((unsigned char) var_1_91)) : (var_1_90 == ((unsigned char) var_1_44))) : (var_1_90 == ((unsigned char) var_1_91))) : 1))) && (var_1_87 ? (var_1_92 == ((float) var_1_63)) : (var_1_92 == ((float) var_1_72)))) && (var_1_44 ? (var_1_93 == ((signed char) var_1_67)) : (var_1_93 == ((signed char) 0)))) && (var_1_94 == ((double) 2.375))) && (var_1_42 ? (var_1_95 == ((signed short int) var_1_25)) : 1)) && (var_1_98 ? (var_1_96 == ((float) 255.5f)) : 1)) && (var_1_44 ? (var_1_97 == ((signed long int) var_1_60)) : 1)) && (var_1_90 ? (var_1_98 == ((unsigned char) var_1_45)) : 1)) && (var_1_45 ? (var_1_99 == ((double) var_1_77)) : (var_1_99 == ((double) var_1_64)))) && (var_1_100 == ((unsigned char) 128))) && (var_1_44 ? (var_1_101 == ((unsigned short int) var_1_29)) : (var_1_101 == ((unsigned short int) 10)))) && (var_1_102 == ((unsigned char) var_1_21))) && (var_1_103 == ((double) var_1_18))) && (var_1_104 == ((unsigned short int) var_1_73))) && (var_1_44 ? (var_1_105 == ((signed short int) (max (var_1_39 , (min (128 , var_1_20)))))) : 1)) && (((var_1_29 * var_1_66) < var_1_56) ? (((var_1_94 / var_1_52) < var_1_30) ? (var_1_106 == ((double) var_1_63)) : (var_1_106 == ((double) var_1_65))) : (var_1_106 == ((double) var_1_23)))
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
