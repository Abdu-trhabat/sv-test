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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch76PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 256.5;
unsigned char var_1_2 = 0;
double var_1_3 = 7.5;
double var_1_4 = 256.2;
double var_1_5 = 2.75;
signed long int var_1_6 = -64;
double var_1_7 = 8.05;
float var_1_8 = 5.25;
signed long int var_1_11 = 4;
unsigned short int var_1_14 = 10000;
unsigned short int var_1_16 = 5;
unsigned short int var_1_17 = 4;
unsigned char var_1_18 = 100;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 8;
double var_1_21 = 63.25;
double var_1_22 = 4.5;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
double var_1_29 = 99.25;
double var_1_30 = 255.25;
double var_1_31 = 63.8;
unsigned long int var_1_32 = 32;
unsigned long int var_1_33 = 1;
unsigned long int var_1_34 = 32;
signed long int var_1_35 = 16;
signed long int var_1_36 = 128;
signed long int var_1_37 = -32;
signed long int var_1_38 = 16;
unsigned long int var_1_39 = 50;
unsigned long int var_1_40 = 25;
unsigned short int var_1_41 = 0;
unsigned short int var_1_42 = 1;
unsigned short int var_1_43 = 8;
unsigned short int var_1_44 = 100;
unsigned short int var_1_45 = 2;
unsigned short int var_1_46 = 10000;
unsigned short int var_1_47 = 10;
unsigned short int var_1_48 = 100;
signed short int var_1_49 = -256;
signed short int var_1_50 = 5;
signed char var_1_51 = -32;
signed char var_1_52 = -16;
unsigned long int var_1_53 = 32;
unsigned long int var_1_54 = 4;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
unsigned long int var_1_58 = 4;
unsigned long int var_1_59 = 3908368003;
unsigned long int var_1_60 = 3436965163;
double var_1_61 = 255.75;
double var_1_62 = 31.8;
double var_1_63 = 64.75;
unsigned char var_1_64 = 2;
unsigned char var_1_65 = 2;
double var_1_66 = 8.6;
double var_1_67 = 64.25;
double var_1_68 = 499.75;
signed char var_1_69 = 8;
signed char var_1_70 = -5;
signed char var_1_71 = -1;
signed char var_1_72 = 50;
signed char var_1_73 = 2;
signed char var_1_74 = 1;
signed char var_1_75 = 0;
signed short int var_1_76 = 5;
signed char var_1_77 = -64;
float var_1_78 = 5.6;
signed long int var_1_79 = 1;
signed long int var_1_80 = 1701334304;
double var_1_81 = 100000000000000.8;
signed char var_1_82 = -1;
signed char var_1_83 = 0;
unsigned char var_1_84 = 0;
signed long int var_1_85 = 2;
unsigned char var_1_86 = 0;
float var_1_87 = 9999999999.7;
unsigned short int var_1_88 = 16;
signed char var_1_89 = 64;
signed short int var_1_90 = 2;
float var_1_91 = 255.4;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 256.5;
float last_1_var_1_8 = 5.25;
signed long int last_1_var_1_11 = 4;
unsigned short int last_1_var_1_14 = 10000;
unsigned short int last_1_var_1_17 = 4;
unsigned char last_1_var_1_18 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_21 = (abs (var_1_22));


	// From: CodeObject2
	if (var_1_24) {
		var_1_23 = ((var_1_25 || var_1_26) || var_1_27);
	} else {
		var_1_23 = (! (! (! var_1_28)));
	}


	// From: CodeObject3
	if (var_1_21 != (- var_1_22)) {
		var_1_29 = (max (var_1_22 , (min (31.949 , (0.8 + var_1_30)))));
	} else {
		var_1_29 = (min ((abs (var_1_30 + var_1_31)) , var_1_22));
	}


	// From: CodeObject4
	if (var_1_21 <= var_1_29) {
		if (var_1_21 >= ((max (var_1_31 , var_1_30)) + var_1_29)) {
			var_1_32 = (abs (max (var_1_33 , var_1_34)));
		} else {
			if ((var_1_35 + (var_1_36 | var_1_37)) < var_1_38) {
				var_1_32 = var_1_33;
			}
		}
	} else {
		var_1_32 = (max (var_1_39 , (2828375485u - var_1_40)));
	}


	// From: CodeObject5
	if (var_1_37 <= (min ((var_1_38 * var_1_36) , var_1_35))) {
		var_1_41 = (max (var_1_42 , (max ((var_1_43 + var_1_44) , var_1_45))));
	} else {
		if (var_1_35 > var_1_32) {
			var_1_41 = var_1_43;
		} else {
			var_1_41 = (var_1_43 + ((var_1_46 - var_1_47) + var_1_48));
		}
	}


	// From: CodeObject6
	if ((abs (var_1_41)) < (var_1_43 ^ var_1_42)) {
		if (! (var_1_47 <= var_1_32)) {
			var_1_49 = ((var_1_47 + (min (var_1_48 , var_1_50))) - var_1_46);
		}
	}


	// From: CodeObject7
	if (var_1_29 != var_1_31) {
		var_1_51 = var_1_52;
	} else {
		if ((max (var_1_38 , var_1_34)) >= (var_1_46 / (max (var_1_53 , var_1_54)))) {
			if ((var_1_39 * (var_1_53 | var_1_36)) > (var_1_54 % var_1_46)) {
				var_1_51 = (abs (5));
			}
		}
	}


	// From: CodeObject8
	if (var_1_31 <= var_1_22) {
		var_1_55 = (! (var_1_28 && (var_1_56 && var_1_57)));
	} else {
		if ((- var_1_32) != var_1_33) {
			var_1_55 = (((var_1_57 || var_1_26) && var_1_27) || var_1_25);
		} else {
			var_1_55 = (var_1_57 && var_1_28);
		}
	}


	// From: CodeObject9
	if (var_1_26) {
		var_1_58 = (min (var_1_44 , (var_1_43 + var_1_40)));
	} else {
		if (var_1_25) {
			if (var_1_27) {
				var_1_58 = (((max (var_1_59 , var_1_60)) - var_1_46) - (abs (var_1_41)));
			} else {
				var_1_58 = (min (var_1_41 , (abs (var_1_60 - var_1_45))));
			}
		}
	}


	// From: CodeObject10
	if ((var_1_32 ^ var_1_58) <= var_1_33) {
		if ((var_1_60 <= (abs (var_1_38))) || var_1_55) {
			var_1_61 = (var_1_62 - (abs (var_1_30)));
		} else {
			if ((var_1_46 / var_1_54) >= var_1_60) {
				var_1_61 = (var_1_62 - 31.5);
			} else {
				var_1_61 = (abs (var_1_31));
			}
		}
	} else {
		var_1_61 = (var_1_30 + (var_1_63 - 63.625));
	}


	// From: CodeObject11
	if (128 >= (max (var_1_32 , var_1_42))) {
		var_1_64 = var_1_65;
	}


	// From: CodeObject12
	if (var_1_42 >= var_1_35) {
		if ((min (var_1_64 , var_1_48)) != (5 | (~ var_1_38))) {
			var_1_66 = (abs (var_1_62));
		}
	} else {
		if (var_1_39 < var_1_50) {
			var_1_66 = (max (var_1_30 , (abs (var_1_22))));
		} else {
			if (var_1_61 <= var_1_21) {
				if (var_1_21 > var_1_62) {
					var_1_66 = ((abs (100.25)) + (abs (var_1_31)));
				}
			} else {
				var_1_66 = ((min (var_1_63 , (max (var_1_62 , var_1_67)))) - var_1_68);
			}
		}
	}


	// From: CodeObject13
	if ((var_1_58 <= var_1_36) && var_1_28) {
		if (! (var_1_34 < var_1_33)) {
			var_1_69 = (max (var_1_52 , (min (var_1_70 , var_1_71))));
		}
	} else {
		if (var_1_66 <= var_1_63) {
			if (var_1_38 > (min (-8 , -1000000))) {
				var_1_69 = (var_1_72 + var_1_73);
			} else {
				if ((abs (- var_1_31)) < (var_1_22 + var_1_30)) {
					var_1_69 = (var_1_74 - var_1_75);
				}
			}
		} else {
			var_1_69 = (abs (var_1_75));
		}
	}


	// From: CodeObject14
	if ((var_1_38 & var_1_47) < 0) {
		var_1_76 = (var_1_75 + var_1_65);
	} else {
		if (((var_1_77 & var_1_35) ^ var_1_43) <= var_1_41) {
			if (var_1_28) {
				var_1_76 = (abs (100));
			} else {
				var_1_76 = (abs (var_1_47 - var_1_50));
			}
		}
	}


	// From: CodeObject15
	if (var_1_24 || (var_1_36 != var_1_48)) {
		if (var_1_41 > var_1_38) {
			var_1_78 = (max (var_1_31 , var_1_63));
		}
	}


	// From: CodeObject16
	if (var_1_23) {
		var_1_79 = (((var_1_80 - var_1_48) - var_1_43) - (max (var_1_50 , var_1_75)));
	} else {
		var_1_79 = var_1_42;
	}


	// From: CodeObject17
	if (var_1_72 != ((-128 | var_1_76) * var_1_34)) {
		var_1_81 = var_1_22;
	} else {
		if (! (var_1_27 || (var_1_64 != var_1_32))) {
			var_1_81 = var_1_63;
		}
	}


	// From: CodeObject18
	if (((1646989504 - 5) - var_1_47) >= (abs (var_1_44))) {
		var_1_82 = (abs (var_1_75 - var_1_83));
	} else {
		if (var_1_84) {
			var_1_82 = var_1_74;
		}
	}


	// From: CodeObject19
	if (var_1_23) {
		var_1_85 = var_1_83;
	} else {
		var_1_85 = var_1_48;
	}


	// From: CodeObject20
	if (var_1_26) {
		var_1_86 = var_1_28;
	}


	// From: CodeObject21
	if (var_1_24) {
		var_1_87 = var_1_31;
	}


	// From: CodeObject22
	if (var_1_58 <= (abs (var_1_42))) {
		var_1_88 = (53223 - var_1_64);
	}


	// From: CodeObject23
	var_1_89 = (abs (abs (2)));


	// From: CodeObject24
	var_1_90 = var_1_65;


	// From: CodeObject25
	var_1_91 = var_1_22;


	// From: Req6Batch76PS_CN_250
	if (var_1_2) {
		if (last_1_var_1_8 == var_1_5) {
			if ((128 * (min (last_1_var_1_18 , last_1_var_1_11))) > 1) {
				var_1_17 = last_1_var_1_18;
			}
		} else {
			var_1_17 = last_1_var_1_18;
		}
	} else {
		var_1_17 = last_1_var_1_18;
	}


	// From: Req1Batch76PS_CN_250
	if (! var_1_2) {
		var_1_1 = (min ((min (var_1_3 , var_1_4)) , var_1_5));
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch76PS_CN_250
	if (var_1_5 > (var_1_3 / var_1_7)) {
		if (! var_1_2) {
			var_1_6 = -10;
		}
	}


	// From: Req7Batch76PS_CN_250
	unsigned short int stepLocal_1 = var_1_16;
	if ((var_1_6 + (var_1_6 | var_1_6)) > stepLocal_1) {
		var_1_18 = (128 - (var_1_19 + var_1_20));
	}


	// From: Req5Batch76PS_CN_250
	if (var_1_5 >= var_1_1) {
		if ((abs (1.2)) < var_1_4) {
			var_1_14 = var_1_18;
		} else {
			var_1_14 = var_1_18;
		}
	}


	// From: Req4Batch76PS_CN_250
	if (var_1_4 <= last_1_var_1_1) {
		var_1_11 = (last_1_var_1_14 + -128);
	} else {
		var_1_11 = ((min (-256 , last_1_var_1_14)) + (min (last_1_var_1_17 , (max (last_1_var_1_17 , 256)))));
	}


	// From: Req3Batch76PS_CN_250
	signed long int stepLocal_0 = var_1_11;
	if ((var_1_14 * var_1_17) >= stepLocal_0) {
		if (var_1_2) {
			var_1_8 = var_1_4;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854765600e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	assume_abort_if_not(var_1_7 != 0.0F);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 64);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -461168.6018427382800e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -461168.6018427382800e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967294);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 4294967294);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483648);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483648);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= -2147483648);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= -2147483648);
	assume_abort_if_not(var_1_38 <= 2147483647);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 4294967294);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 65534);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 32767);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 32767);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 8192);
	assume_abort_if_not(var_1_46 <= 16384);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 8192);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 16383);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 16383);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -127);
	assume_abort_if_not(var_1_52 <= 126);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 4294967295);
	assume_abort_if_not(var_1_53 != 0);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 4294967295);
	assume_abort_if_not(var_1_54 != 0);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 1);
	assume_abort_if_not(var_1_57 <= 1);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 3221225470);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 3221225470);
	assume_abort_if_not(var_1_60 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427382800e+12F && var_1_63 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 254);
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854765600e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854765600e+12F && var_1_68 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_70 >= -127);
	assume_abort_if_not(var_1_70 <= 126);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= -127);
	assume_abort_if_not(var_1_71 <= 126);
	var_1_72 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_72 >= -63);
	assume_abort_if_not(var_1_72 <= 63);
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= -63);
	assume_abort_if_not(var_1_73 <= 63);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= -1);
	assume_abort_if_not(var_1_74 <= 126);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 126);
	var_1_77 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_77 >= -128);
	assume_abort_if_not(var_1_77 <= 127);
	var_1_80 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_80 >= 1610612734);
	assume_abort_if_not(var_1_80 <= 2147483646);
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 126);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_18 = var_1_18;
}

int property() {
	return (((((((! var_1_2) ? (var_1_1 == ((double) (min ((min (var_1_3 , var_1_4)) , var_1_5)))) : (var_1_1 == ((double) var_1_4))) && ((var_1_5 > (var_1_3 / var_1_7)) ? ((! var_1_2) ? (var_1_6 == ((signed long int) -10)) : 1) : 1)) && (((var_1_14 * var_1_17) >= var_1_11) ? (var_1_2 ? (var_1_8 == ((float) var_1_4)) : 1) : 1)) && ((var_1_4 <= last_1_var_1_1) ? (var_1_11 == ((signed long int) (last_1_var_1_14 + -128))) : (var_1_11 == ((signed long int) ((min (-256 , last_1_var_1_14)) + (min (last_1_var_1_17 , (max (last_1_var_1_17 , 256))))))))) && ((var_1_5 >= var_1_1) ? (((abs (1.2)) < var_1_4) ? (var_1_14 == ((unsigned short int) var_1_18)) : (var_1_14 == ((unsigned short int) var_1_18))) : 1)) && (var_1_2 ? ((last_1_var_1_8 == var_1_5) ? (((128 * (min (last_1_var_1_18 , last_1_var_1_11))) > 1) ? (var_1_17 == ((unsigned short int) last_1_var_1_18)) : 1) : (var_1_17 == ((unsigned short int) last_1_var_1_18))) : (var_1_17 == ((unsigned short int) last_1_var_1_18)))) && (((var_1_6 + (var_1_6 | var_1_6)) > var_1_16) ? (var_1_18 == ((unsigned char) (128 - (var_1_19 + var_1_20)))) : 1)
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
