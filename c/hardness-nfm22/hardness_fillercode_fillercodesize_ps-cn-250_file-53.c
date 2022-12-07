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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch53PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 10;
float var_1_10 = 99.5;
float var_1_11 = 5.6;
float var_1_12 = 255.5;
float var_1_13 = 31.25;
signed short int var_1_14 = 32;
unsigned long int var_1_15 = 16;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 50;
unsigned char var_1_19 = 50;
signed char var_1_20 = 1;
signed char var_1_21 = -10;
float var_1_22 = 0.5;
signed char var_1_23 = 100;
signed short int var_1_24 = 2;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
float var_1_27 = 64.5;
float var_1_28 = 499.375;
signed short int var_1_29 = -64;
signed short int var_1_30 = 50;
signed short int var_1_31 = 2;
double var_1_32 = 99999999999.75;
double var_1_33 = 64.125;
unsigned char var_1_34 = 1;
double var_1_35 = 8.25;
double var_1_36 = 128.8;
double var_1_37 = 15.25;
double var_1_38 = 10.5;
double var_1_39 = 64.75;
unsigned long int var_1_40 = 4;
unsigned long int var_1_41 = 0;
unsigned long int var_1_42 = 1;
signed short int var_1_43 = 16;
signed short int var_1_44 = 25;
signed short int var_1_45 = 100;
unsigned char var_1_46 = 1;
double var_1_47 = 7.5;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
float var_1_50 = 31.5;
signed long int var_1_51 = 32;
signed long int var_1_52 = 64;
signed char var_1_53 = -16;
signed char var_1_54 = 64;
signed char var_1_55 = 100;
signed char var_1_56 = -10;
signed char var_1_57 = -32;
signed long int var_1_58 = 200;
float var_1_59 = 1.8;
signed char var_1_60 = -1;
signed long int var_1_61 = 5;
signed long int var_1_62 = 1;
signed short int var_1_63 = 4;
unsigned short int var_1_64 = 25;
unsigned short int var_1_65 = 64;
unsigned short int var_1_66 = 32;
unsigned short int var_1_67 = 21798;
unsigned short int var_1_68 = 500;
unsigned char var_1_69 = 4;
double var_1_70 = 5.4;
unsigned char var_1_71 = 10;
unsigned char var_1_72 = 2;
float var_1_73 = 15.4;
float var_1_74 = 100000000000.4;
unsigned short int var_1_75 = 256;
float var_1_76 = 24.125;
signed long int var_1_77 = -256;
signed long int var_1_78 = -64;
signed char var_1_79 = 64;
signed char var_1_80 = -2;
signed char var_1_81 = -1;
double var_1_82 = 499.6;
unsigned char var_1_83 = 128;
unsigned char var_1_84 = 128;
unsigned char var_1_85 = 64;
unsigned short int var_1_86 = 8;
signed char var_1_87 = 10;
signed char var_1_88 = 4;
unsigned short int var_1_89 = 64;
signed char var_1_90 = -64;
double var_1_91 = 1.4;
signed long int var_1_92 = 4;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
unsigned long int last_1_var_1_9 = 10;
signed short int last_1_var_1_14 = 32;
unsigned char last_1_var_1_16 = 1;
signed char last_1_var_1_20 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_25) {
		if (var_1_26) {
			if (var_1_27 <= (abs (var_1_28))) {
				var_1_24 = (min (var_1_29 , var_1_30));
			}
		}
	} else {
		var_1_24 = (abs (var_1_31));
	}


	// From: CodeObject2
	if ((var_1_27 >= 4.4f) && var_1_26) {
		if (var_1_26) {
			var_1_32 = var_1_33;
		}
	} else {
		if (var_1_25 && var_1_34) {
			var_1_32 = ((max (var_1_35 , var_1_36)) + var_1_37);
		} else {
			var_1_32 = (max ((abs (var_1_38 - var_1_39)) , var_1_33));
		}
	}


	// From: CodeObject3
	if (var_1_34) {
		if (24.375 >= var_1_33) {
			if (var_1_36 == (var_1_28 + var_1_33)) {
				var_1_40 = (min (var_1_41 , var_1_42));
			}
		}
	}


	// From: CodeObject4
	if ((max ((var_1_31 >> var_1_40) , var_1_30)) < var_1_29) {
		if ((min (var_1_31 , var_1_30)) < var_1_29) {
			var_1_43 = (min (var_1_31 , (abs (var_1_44 + var_1_45))));
		}
	}


	// From: CodeObject5
	if (var_1_38 > (abs (max (var_1_36 , var_1_39)))) {
		if (var_1_32 <= ((abs (var_1_47)) + var_1_38)) {
			var_1_46 = (var_1_48 || var_1_49);
		} else {
			if (((255.75f + var_1_50) - var_1_38) < var_1_37) {
				if (var_1_43 > var_1_29) {
					if ((var_1_51 - var_1_52) != var_1_44) {
						var_1_46 = 0;
					}
				}
			} else {
				var_1_46 = (! (! var_1_48));
			}
		}
	} else {
		var_1_46 = var_1_49;
	}


	// From: CodeObject6
	if ((~ var_1_43) == var_1_29) {
		var_1_53 = (var_1_54 - 2);
	} else {
		if (var_1_35 < var_1_28) {
			var_1_53 = (min (var_1_54 , (min (var_1_55 , var_1_56))));
		} else {
			var_1_53 = (min (var_1_54 , (abs (var_1_57))));
		}
	}


	// From: CodeObject7
	if ((max (var_1_59 , var_1_28)) < (var_1_39 - var_1_38)) {
		var_1_58 = (max (var_1_55 , var_1_57));
	} else {
		if (((abs (var_1_55)) % var_1_60) <= ((var_1_40 / var_1_61) | (abs (var_1_57)))) {
			var_1_58 = (min (var_1_62 , var_1_53));
		}
	}


	// From: CodeObject8
	if (-50 > (max ((var_1_61 >> var_1_31) , var_1_55))) {
		var_1_63 = (abs (min (var_1_54 , var_1_56)));
	}


	// From: CodeObject9
	if (! (var_1_51 > var_1_57)) {
		if (! var_1_46) {
			var_1_64 = (abs (abs (var_1_65)));
		}
	} else {
		var_1_64 = (abs (var_1_66 + (var_1_67 - var_1_68)));
	}


	// From: CodeObject10
	if ((var_1_27 * (var_1_37 / var_1_70)) >= ((min (var_1_32 , var_1_39)) + var_1_59)) {
		var_1_69 = ((100 - var_1_71) + (min (var_1_72 , 1)));
	}


	// From: CodeObject11
	if (var_1_25) {
		var_1_73 = var_1_50;
	} else {
		var_1_73 = var_1_74;
	}


	// From: CodeObject12
	if (var_1_65 <= (- (var_1_62 * var_1_69))) {
		if (var_1_49 && var_1_46) {
			if (((var_1_61 % var_1_67) >= var_1_57) || var_1_46) {
				var_1_75 = (max (var_1_66 , var_1_72));
			}
		}
	} else {
		var_1_75 = (abs (var_1_69));
	}


	// From: CodeObject13
	if (var_1_31 <= (~ var_1_43)) {
		if ((var_1_52 ^ var_1_77) > 1000) {
			var_1_76 = (abs (0.25f));
		} else {
			var_1_76 = (abs (var_1_74));
		}
	}


	// From: CodeObject14
	var_1_78 = (var_1_43 + var_1_66);


	// From: CodeObject15
	if (var_1_49 || var_1_48) {
		var_1_79 = (var_1_71 + var_1_80);
	} else {
		var_1_79 = (min ((min (var_1_55 , (abs (var_1_71)))) , (var_1_80 + var_1_81)));
	}


	// From: CodeObject16
	if (var_1_49) {
		var_1_82 = ((abs (8.885)) - var_1_39);
	}


	// From: CodeObject17
	if (var_1_72 >= ((- var_1_58) / (128 - 100))) {
		if ((abs (-5)) >= (var_1_30 ^ var_1_61)) {
			var_1_83 = (var_1_84 - ((abs (var_1_85)) - var_1_71));
		} else {
			if ((var_1_61 / var_1_85) > var_1_54) {
				var_1_83 = (min (var_1_84 , 1));
			} else {
				var_1_83 = (min (var_1_85 , (abs (var_1_72))));
			}
		}
	}


	// From: CodeObject18
	if (var_1_53 >= var_1_77) {
		if ((~ var_1_42) < var_1_78) {
			var_1_86 = var_1_69;
		} else {
			if ((var_1_72 - (var_1_71 + var_1_87)) > (var_1_67 | (var_1_60 >> 4u))) {
				if ((var_1_58 / (var_1_85 + 16)) > var_1_62) {
					var_1_86 = var_1_66;
				} else {
					var_1_86 = (min (var_1_83 , var_1_68));
				}
			} else {
				var_1_86 = (abs (abs (var_1_65)));
			}
		}
	}


	// From: CodeObject19
	if (var_1_56 == var_1_68) {
		var_1_88 = (var_1_81 + var_1_87);
	}


	// From: CodeObject20
	if (var_1_26) {
		if (((var_1_88 * var_1_81) & var_1_57) <= var_1_31) {
			if (((abs (var_1_72)) < (min (var_1_67 , var_1_54))) || (var_1_87 < var_1_41)) {
				if ((var_1_61 & var_1_24) <= ((~ var_1_78) + 128)) {
					var_1_89 = ((max (var_1_71 , (var_1_67 - var_1_87))) + var_1_69);
				}
			}
		}
	}


	// From: CodeObject21
	if (var_1_47 == var_1_91) {
		var_1_90 = (var_1_80 + var_1_71);
	} else {
		if (var_1_36 < 0.5) {
			var_1_90 = var_1_81;
		} else {
			var_1_90 = 10;
		}
	}


	// From: CodeObject22
	if (var_1_26 || var_1_49) {
		if (var_1_26) {
			if (var_1_50 >= var_1_76) {
				var_1_92 = 1;
			}
		} else {
			var_1_92 = ((abs (var_1_81)) - var_1_66);
		}
	} else {
		var_1_92 = var_1_86;
	}


	// From: Req1Batch53PS_CN_250
	unsigned char stepLocal_1 = last_1_var_1_14 > (last_1_var_1_16 - last_1_var_1_16);
	signed long int stepLocal_0 = last_1_var_1_20 * last_1_var_1_20;
	if (stepLocal_0 == last_1_var_1_14) {
		if (stepLocal_1 && last_1_var_1_1) {
			var_1_1 = var_1_8;
		}
	}


	// From: Req5Batch53PS_CN_250
	unsigned long int stepLocal_6 = (max (var_1_15 , last_1_var_1_9)) / var_1_17;
	if (stepLocal_6 <= (256u << last_1_var_1_16)) {
		var_1_16 = (max (var_1_18 , var_1_19));
	}


	// From: Req3Batch53PS_CN_250
	unsigned char stepLocal_5 = var_1_16 != var_1_16;
	unsigned char stepLocal_4 = var_1_8;
	if ((! var_1_1) || stepLocal_4) {
		var_1_10 = (min ((var_1_11 + var_1_12) , (abs (var_1_13))));
	} else {
		if ((var_1_11 < var_1_12) || stepLocal_5) {
			var_1_10 = var_1_13;
		} else {
			var_1_10 = var_1_12;
		}
	}


	// From: Req6Batch53PS_CN_250
	var_1_20 = var_1_21;


	// From: Req7Batch53PS_CN_250
	var_1_22 = var_1_12;


	// From: Req8Batch53PS_CN_250
	var_1_23 = var_1_21;


	// From: Req4Batch53PS_CN_250
	if (var_1_1) {
		var_1_14 = (max (var_1_23 , var_1_16));
	} else {
		if (((var_1_16 / var_1_15) & var_1_16) >= var_1_20) {
			var_1_14 = var_1_16;
		} else {
			var_1_14 = -128;
		}
	}


	// From: Req2Batch53PS_CN_250
	unsigned char stepLocal_3 = var_1_20 != var_1_14;
	signed long int stepLocal_2 = min (var_1_16 , 0);
	if ((var_1_1 || (var_1_16 <= var_1_14)) || stepLocal_3) {
		if (stepLocal_2 <= (-5 + var_1_16)) {
			var_1_9 = var_1_16;
		}
	}
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -461168.6018427382800e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 4294967295);
	assume_abort_if_not(var_1_15 != 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 255);
	assume_abort_if_not(var_1_17 != 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -127);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32767);
	assume_abort_if_not(var_1_29 <= 32766);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32767);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= -32766);
	assume_abort_if_not(var_1_31 <= 32766);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854765600e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -461168.6018427382800e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -461168.6018427382800e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -461168.6018427382800e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 4294967294);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 4294967294);
	var_1_44 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_44 >= -16383);
	assume_abort_if_not(var_1_44 <= 16383);
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= -16383);
	assume_abort_if_not(var_1_45 <= 16383);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -922337.2036854776000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427387900e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_51 >= -1);
	assume_abort_if_not(var_1_51 <= 2147483647);
	var_1_52 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 2147483647);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= -1);
	assume_abort_if_not(var_1_54 <= 126);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -127);
	assume_abort_if_not(var_1_55 <= 126);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= -127);
	assume_abort_if_not(var_1_56 <= 126);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= -126);
	assume_abort_if_not(var_1_57 <= 126);
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= -922337.2036854776000e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= -128);
	assume_abort_if_not(var_1_60 <= 127);
	assume_abort_if_not(var_1_60 != 0);
	var_1_61 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_61 >= -2147483648);
	assume_abort_if_not(var_1_61 <= 2147483647);
	assume_abort_if_not(var_1_61 != 0);
	var_1_62 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_62 >= -2147483647);
	assume_abort_if_not(var_1_62 <= 2147483646);
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 65534);
	var_1_66 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 32767);
	var_1_67 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_67 >= 16383);
	assume_abort_if_not(var_1_67 <= 32767);
	var_1_68 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 16383);
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= -922337.2036854776000e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854776000e+12F && var_1_70 >= 1.0e-20F ));
	assume_abort_if_not(var_1_70 != 0.0F);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 63);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 127);
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= -922337.2036854765600e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854765600e+12F && var_1_74 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_77 >= -2147483648);
	assume_abort_if_not(var_1_77 <= 2147483647);
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= -63);
	assume_abort_if_not(var_1_80 <= 63);
	var_1_81 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_81 >= -63);
	assume_abort_if_not(var_1_81 <= 63);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 127);
	assume_abort_if_not(var_1_84 <= 254);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 63);
	assume_abort_if_not(var_1_85 <= 127);
	var_1_87 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 63);
	var_1_91 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_91 >= -922337.2036854776000e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 9223372.036854776000e+12F && var_1_91 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_20 = var_1_20;
}

int property() {
	return (((((((((last_1_var_1_20 * last_1_var_1_20) == last_1_var_1_14) ? (((last_1_var_1_14 > (last_1_var_1_16 - last_1_var_1_16)) && last_1_var_1_1) ? (var_1_1 == ((unsigned char) var_1_8)) : 1) : 1) && (((var_1_1 || (var_1_16 <= var_1_14)) || (var_1_20 != var_1_14)) ? (((min (var_1_16 , 0)) <= (-5 + var_1_16)) ? (var_1_9 == ((unsigned long int) var_1_16)) : 1) : 1)) && (((! var_1_1) || var_1_8) ? (var_1_10 == ((float) (min ((var_1_11 + var_1_12) , (abs (var_1_13)))))) : (((var_1_11 < var_1_12) || (var_1_16 != var_1_16)) ? (var_1_10 == ((float) var_1_13)) : (var_1_10 == ((float) var_1_12))))) && (var_1_1 ? (var_1_14 == ((signed short int) (max (var_1_23 , var_1_16)))) : ((((var_1_16 / var_1_15) & var_1_16) >= var_1_20) ? (var_1_14 == ((signed short int) var_1_16)) : (var_1_14 == ((signed short int) -128))))) && ((((max (var_1_15 , last_1_var_1_9)) / var_1_17) <= (256u << last_1_var_1_16)) ? (var_1_16 == ((unsigned char) (max (var_1_18 , var_1_19)))) : 1)) && (var_1_20 == ((signed char) var_1_21))) && (var_1_22 == ((float) var_1_12))) && (var_1_23 == ((signed char) var_1_21))
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
