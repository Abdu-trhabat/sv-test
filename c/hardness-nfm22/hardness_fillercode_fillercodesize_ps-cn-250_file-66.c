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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch66PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 50;
signed char var_1_3 = 8;
signed char var_1_4 = 10;
double var_1_5 = 16.5;
signed char var_1_6 = 64;
signed char var_1_7 = 2;
unsigned short int var_1_8 = 256;
unsigned short int var_1_10 = 63583;
unsigned short int var_1_11 = 33789;
unsigned char var_1_12 = 1;
unsigned char var_1_14 = 0;
signed long int var_1_15 = 8;
signed short int var_1_16 = -16;
signed short int var_1_18 = 16;
signed short int var_1_19 = 25;
signed short int var_1_20 = 25;
signed short int var_1_21 = 50;
signed long int var_1_22 = -8;
float var_1_23 = 999999999.5;
float var_1_24 = 31.5;
unsigned char var_1_25 = 0;
signed long int var_1_26 = 10000;
signed long int var_1_27 = -2;
float var_1_28 = 10.4;
float var_1_29 = 64.5;
float var_1_30 = 31.8;
signed char var_1_31 = -32;
signed char var_1_32 = 2;
unsigned short int var_1_33 = 1000;
float var_1_34 = 0.0;
float var_1_35 = 4.75;
float var_1_36 = 256.125;
unsigned short int var_1_37 = 2;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 128;
signed long int var_1_40 = 0;
signed long int var_1_41 = 1000000;
float var_1_42 = 256.75;
float var_1_43 = 63.25;
double var_1_44 = 16.4;
float var_1_45 = 999999999999.5;
unsigned char var_1_46 = 0;
float var_1_47 = 5.2;
float var_1_48 = 1.556;
float var_1_49 = 3.6;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 10;
unsigned char var_1_53 = 100;
unsigned char var_1_54 = 16;
unsigned char var_1_55 = 100;
signed long int var_1_56 = 2;
double var_1_57 = 3.6;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 1;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 0;
signed char var_1_62 = -25;
signed char var_1_63 = 1;
unsigned char var_1_64 = 1;
signed char var_1_65 = 64;
signed char var_1_66 = 50;
signed char var_1_67 = 16;
signed long int var_1_68 = -32;
double var_1_69 = 200.1;
signed short int var_1_70 = -200;
unsigned short int var_1_71 = 1;
signed char var_1_72 = 5;
signed char var_1_73 = 0;
signed char var_1_74 = 2;
float var_1_75 = 2.4;
unsigned long int var_1_76 = 10;
signed char var_1_77 = 8;
signed long int var_1_78 = -256;
float var_1_79 = 7.5;
float var_1_80 = 7.5;
float var_1_81 = 200.125;
signed char var_1_82 = 8;
float var_1_83 = 7.75;
unsigned long int var_1_84 = 32;
unsigned char var_1_85 = 128;
unsigned char var_1_86 = 32;
unsigned long int var_1_87 = 256;
float var_1_88 = 32.7;
float var_1_89 = 4.4;
unsigned char var_1_90 = 64;
unsigned char var_1_91 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_12 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (! (var_1_23 <= var_1_24)) {
		if (var_1_25) {
			var_1_22 = (abs (var_1_26));
		}
	} else {
		if (var_1_26 < var_1_27) {
			var_1_22 = (abs (abs (1)));
		}
	}


	// From: CodeObject2
	if ((var_1_23 * var_1_24) != var_1_29) {
		var_1_28 = (abs (var_1_30));
	}


	// From: CodeObject3
	if (var_1_25) {
		var_1_31 = var_1_32;
	}


	// From: CodeObject4
	if (var_1_24 <= ((var_1_34 - 63.25f) - (max (var_1_35 , var_1_36)))) {
		var_1_33 = (abs (var_1_37));
	}


	// From: CodeObject5
	if (var_1_30 < (var_1_29 * (min (var_1_28 , var_1_24)))) {
		var_1_38 = (abs (max ((var_1_39 - 1) , (min (64 , 50)))));
	} else {
		if (var_1_25) {
			var_1_38 = var_1_39;
		} else {
			var_1_38 = var_1_39;
		}
	}


	// From: CodeObject6
	var_1_40 = (abs (var_1_32));


	// From: CodeObject7
	if ((var_1_22 % var_1_39) >= var_1_37) {
		var_1_41 = (abs (var_1_32));
	}


	// From: CodeObject8
	if ((max (var_1_33 , var_1_22)) <= var_1_27) {
		var_1_42 = (abs (abs (var_1_43 + 128.7f)));
	}


	// From: CodeObject9
	if (10 <= var_1_27) {
		var_1_44 = (abs (var_1_30));
	} else {
		var_1_44 = (abs (max ((max (10.7 , var_1_30)) , (abs (var_1_43)))));
	}


	// From: CodeObject10
	if (var_1_37 < 16) {
		if (-0.25f < (max (var_1_34 , var_1_28))) {
			if (var_1_25 && var_1_46) {
				var_1_45 = (max (var_1_43 , 3.2f));
			} else {
				var_1_45 = (abs (var_1_30));
			}
		} else {
			if (var_1_25) {
				var_1_45 = (var_1_47 - var_1_48);
			} else {
				if (var_1_24 > var_1_34) {
					var_1_45 = (min (var_1_47 , (min (var_1_48 , (abs (16.6f))))));
				}
			}
		}
	} else {
		var_1_45 = ((abs (var_1_48 - var_1_47)) - var_1_49);
	}


	// From: CodeObject11
	if (((~ 5) / var_1_39) == var_1_37) {
		var_1_50 = var_1_51;
	}


	// From: CodeObject12
	if (var_1_35 >= var_1_34) {
		var_1_52 = ((var_1_53 - (abs (var_1_54))) + var_1_55);
	}


	// From: CodeObject13
	if ((min (var_1_40 , (var_1_31 % var_1_39))) <= (var_1_37 | var_1_55)) {
		var_1_56 = var_1_33;
	}


	// From: CodeObject14
	if (! var_1_46) {
		var_1_57 = var_1_43;
	}


	// From: CodeObject15
	if ((var_1_55 > var_1_40) && var_1_51) {
		var_1_58 = ((var_1_25 && var_1_51) && var_1_60);
	} else {
		var_1_58 = ((var_1_48 < var_1_42) || (! var_1_61));
	}


	// From: CodeObject16
	if (((var_1_40 + var_1_52) * var_1_26) <= var_1_22) {
		if (var_1_54 > ((var_1_53 << var_1_52) / var_1_39)) {
			var_1_62 = (abs (var_1_54 - var_1_63));
		} else {
			if (var_1_64) {
				var_1_62 = ((var_1_65 - var_1_54) - var_1_63);
			} else {
				var_1_62 = (var_1_54 + var_1_66);
			}
		}
	}


	// From: CodeObject17
	if (var_1_68 > var_1_54) {
		var_1_67 = var_1_32;
	}


	// From: CodeObject18
	var_1_69 = (abs (var_1_47 - var_1_49));


	// From: CodeObject19
	if ((min (var_1_67 , var_1_54)) <= ((var_1_55 | var_1_68) ^ var_1_40)) {
		if ((var_1_67 / (max (var_1_39 , var_1_65))) < var_1_31) {
			var_1_70 = (max ((abs (var_1_63)) , (abs (var_1_67))));
		}
	} else {
		var_1_70 = (max (var_1_31 , var_1_65));
	}


	// From: CodeObject20
	var_1_71 = (abs (44765 - (abs (var_1_55))));


	// From: CodeObject21
	if ((8 * var_1_39) >= var_1_68) {
		if (var_1_35 <= var_1_34) {
			if ((var_1_53 % var_1_39) <= var_1_26) {
				var_1_72 = ((abs (var_1_54 - var_1_73)) + (min (var_1_66 , var_1_74)));
			}
		}
	}


	// From: CodeObject22
	if ((abs (var_1_28)) > 24.475f) {
		var_1_75 = (min (var_1_47 , (abs (var_1_43))));
	}


	// From: CodeObject23
	if (var_1_39 >= var_1_62) {
		var_1_76 = var_1_71;
	} else {
		var_1_76 = var_1_37;
	}


	// From: CodeObject24
	if (var_1_48 != ((- var_1_34) * var_1_44)) {
		var_1_77 = var_1_65;
	}


	// From: CodeObject25
	if (var_1_59) {
		var_1_78 = (abs (var_1_37 - var_1_33));
	} else {
		var_1_78 = var_1_71;
	}


	// From: CodeObject26
	if (! (var_1_67 > (var_1_52 / var_1_65))) {
		if ((abs (var_1_39)) >= (~ var_1_77)) {
			if (var_1_78 != (var_1_31 + var_1_73)) {
				var_1_79 = (abs (var_1_30));
			} else {
				var_1_79 = (max (((max (var_1_43 , var_1_80)) + var_1_81) , var_1_49));
			}
		}
	} else {
		if (var_1_68 <= var_1_77) {
			var_1_79 = (abs (abs (var_1_80)));
		}
	}


	// From: CodeObject27
	if ((max ((var_1_63 | var_1_71) , var_1_76)) <= (64u * (abs (var_1_41)))) {
		if (var_1_37 < 1) {
			var_1_82 = (min (var_1_66 , (abs (var_1_65))));
		} else {
			if (var_1_36 == var_1_42) {
				var_1_82 = (abs (var_1_65));
			}
		}
	}


	// From: CodeObject28
	if (var_1_36 < var_1_42) {
		var_1_83 = var_1_30;
	} else {
		var_1_83 = var_1_81;
	}


	// From: CodeObject29
	if (var_1_61) {
		var_1_84 = var_1_55;
	}


	// From: CodeObject30
	if (var_1_46) {
		var_1_85 = var_1_73;
	}


	// From: CodeObject31
	if (var_1_46) {
		var_1_86 = var_1_65;
	} else {
		var_1_86 = 5;
	}


	// From: CodeObject32
	if (var_1_58) {
		var_1_87 = var_1_65;
	}


	// From: CodeObject33
	if (var_1_55 > (16 * (var_1_73 & var_1_41))) {
		var_1_88 = (max (16.5f , var_1_48));
	} else {
		var_1_88 = (max ((abs (var_1_47)) , var_1_89));
	}


	// From: CodeObject34
	var_1_90 = var_1_73;


	// From: CodeObject35
	var_1_91 = var_1_51;


	// From: Req3Batch66PS_CN_250
	signed char stepLocal_1 = var_1_6;
	unsigned char stepLocal_0 = last_1_var_1_12;
	if (-25 == stepLocal_1) {
		if (last_1_var_1_12 && stepLocal_0) {
			var_1_8 = (max (((var_1_10 - 10) - 16) , (var_1_11 - var_1_7)));
		}
	} else {
		var_1_8 = (max (var_1_7 , var_1_11));
	}


	// From: Req4Batch66PS_CN_250
	signed char stepLocal_2 = var_1_7;
	if (var_1_8 >= stepLocal_2) {
		var_1_12 = (! var_1_14);
	}


	// From: Req1Batch66PS_CN_250
	if (var_1_12) {
		var_1_1 = (var_1_3 + var_1_4);
	}


	// From: Req2Batch66PS_CN_250
	if (var_1_4 >= (var_1_6 - var_1_7)) {
		if (var_1_12) {
			var_1_5 = 8.25;
		}
	}


	// From: Req7Batch66PS_CN_250
	signed char stepLocal_4 = var_1_6;
	if (var_1_1 < stepLocal_4) {
		var_1_18 = (var_1_6 - var_1_7);
	} else {
		var_1_18 = (min ((var_1_6 + var_1_4) , var_1_1));
	}


	// From: Req8Batch66PS_CN_250
	if (var_1_12) {
		var_1_19 = ((var_1_7 - (min (var_1_20 , var_1_21))) + var_1_6);
	}


	// From: Req5Batch66PS_CN_250
	if (-64 > (var_1_6 + var_1_19)) {
		var_1_15 = (var_1_11 - var_1_7);
	} else {
		if (! var_1_12) {
			if (var_1_12) {
				var_1_15 = 4;
			}
		}
	}


	// From: Req6Batch66PS_CN_250
	signed long int stepLocal_3 = (max (var_1_11 , var_1_18)) + (var_1_15 / var_1_10);
	if (var_1_19 > stepLocal_3) {
		var_1_16 = var_1_4;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -63);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 49150);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 32767);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 16383);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 16383);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483646);
	assume_abort_if_not(var_1_26 <= 2147483646);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -127);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 4611686.018427387900e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 65534);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 127);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -461168.6018427382800e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854765600e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854765600e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 63);
	assume_abort_if_not(var_1_53 <= 127);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 127);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 1);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 0);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 0);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 126);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 1);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 62);
	assume_abort_if_not(var_1_65 <= 126);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= -63);
	assume_abort_if_not(var_1_66 <= 63);
	var_1_68 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_68 >= -2147483648);
	assume_abort_if_not(var_1_68 <= 2147483647);
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 63);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= -63);
	assume_abort_if_not(var_1_74 <= 63);
	var_1_80 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_80 >= -461168.6018427382800e+13F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 4611686.018427382800e+12F && var_1_80 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_81 >= -461168.6018427382800e+13F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 4611686.018427382800e+12F && var_1_81 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_89 >= -922337.2036854765600e+13F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 9223372.036854765600e+12F && var_1_89 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
}

int property() {
	return (((((((var_1_12 ? (var_1_1 == ((signed char) (var_1_3 + var_1_4))) : 1) && ((var_1_4 >= (var_1_6 - var_1_7)) ? (var_1_12 ? (var_1_5 == ((double) 8.25)) : 1) : 1)) && ((-25 == var_1_6) ? ((last_1_var_1_12 && last_1_var_1_12) ? (var_1_8 == ((unsigned short int) (max (((var_1_10 - 10) - 16) , (var_1_11 - var_1_7))))) : 1) : (var_1_8 == ((unsigned short int) (max (var_1_7 , var_1_11)))))) && ((var_1_8 >= var_1_7) ? (var_1_12 == ((unsigned char) (! var_1_14))) : 1)) && ((-64 > (var_1_6 + var_1_19)) ? (var_1_15 == ((signed long int) (var_1_11 - var_1_7))) : ((! var_1_12) ? (var_1_12 ? (var_1_15 == ((signed long int) 4)) : 1) : 1))) && ((var_1_19 > ((max (var_1_11 , var_1_18)) + (var_1_15 / var_1_10))) ? (var_1_16 == ((signed short int) var_1_4)) : 1)) && ((var_1_1 < var_1_6) ? (var_1_18 == ((signed short int) (var_1_6 - var_1_7))) : (var_1_18 == ((signed short int) (min ((var_1_6 + var_1_4) , var_1_1)))))) && (var_1_12 ? (var_1_19 == ((signed short int) ((var_1_7 - (min (var_1_20 , var_1_21))) + var_1_6))) : 1)
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
