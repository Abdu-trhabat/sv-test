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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch24PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 15.8;
double var_1_4 = 10.5;
double var_1_5 = 1.55;
signed char var_1_8 = -10;
signed char var_1_10 = -16;
signed char var_1_11 = -4;
signed char var_1_12 = -16;
double var_1_13 = 128.55;
double var_1_14 = 2.3;
double var_1_15 = 4.8;
unsigned long int var_1_16 = 0;
signed long int var_1_17 = 5;
signed long int var_1_18 = 256;
unsigned long int var_1_19 = 50;
unsigned long int var_1_20 = 1;
signed short int var_1_21 = -50;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
signed long int var_1_26 = -5;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
unsigned long int var_1_31 = 200;
signed long int var_1_32 = 50;
unsigned long int var_1_33 = 2854329333;
unsigned long int var_1_34 = 2581335902;
unsigned long int var_1_35 = 2;
unsigned long int var_1_36 = 5;
unsigned long int var_1_37 = 5;
unsigned long int var_1_38 = 10;
unsigned long int var_1_39 = 1090781925;
unsigned long int var_1_40 = 8;
double var_1_41 = 3.5;
signed short int var_1_42 = 5;
double var_1_43 = 0.25;
signed short int var_1_44 = 1;
signed short int var_1_45 = -1;
signed short int var_1_46 = -25;
signed short int var_1_47 = 50;
signed short int var_1_48 = 10;
float var_1_49 = -0.854;
double var_1_50 = 9.5;
double var_1_51 = 99.7;
double var_1_52 = 999999999999.25;
unsigned short int var_1_53 = 4;
unsigned char var_1_54 = 128;
unsigned char var_1_55 = 32;
unsigned char var_1_56 = 1;
double var_1_57 = 25.5;
float var_1_58 = 25.6;
float var_1_59 = 255.25;
float var_1_60 = 0.19999999999999996;
float var_1_61 = 2.25;
float var_1_62 = 10.875;
float var_1_63 = 256.75;
signed short int var_1_64 = 128;
unsigned char var_1_65 = 128;
unsigned char var_1_66 = 2;
float var_1_67 = 8.2;
unsigned char var_1_68 = 1;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 32;
unsigned char var_1_71 = 100;
unsigned char var_1_72 = 100;
unsigned char var_1_73 = 8;
unsigned char var_1_74 = 200;
unsigned long int var_1_75 = 0;
unsigned long int var_1_76 = 16;
unsigned long int var_1_77 = 1;
signed long int var_1_78 = 4;
double var_1_79 = 255.25;
double var_1_80 = 25.3;
unsigned char var_1_81 = 50;
unsigned char var_1_82 = 8;
unsigned long int var_1_83 = 4;
signed long int var_1_84 = -10000;
signed short int var_1_85 = 4;
signed short int var_1_86 = 31551;
signed char var_1_87 = -100;
signed char var_1_88 = 4;
float var_1_89 = 31.5;
float var_1_90 = 0.5;
unsigned char var_1_91 = 10;

// Calibration values

// Last'ed variables
signed char last_1_var_1_8 = -10;
signed short int last_1_var_1_21 = -50;
unsigned char last_1_var_1_23 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (32 >= var_1_26) {
		var_1_25 = ((var_1_27 || (var_1_28 && var_1_29)) && var_1_30);
	}


	// From: CodeObject2
	if ((10u < 100u) && ((16 >> var_1_26) != var_1_32)) {
		if (8 > var_1_32) {
			var_1_31 = ((abs (max (var_1_33 , var_1_34))) - (max (var_1_35 , (abs (var_1_36)))));
		}
	} else {
		if (var_1_32 < var_1_26) {
			var_1_31 = var_1_35;
		}
	}


	// From: CodeObject3
	if ((var_1_31 & (var_1_35 >> var_1_33)) >= var_1_36) {
		if (var_1_33 < var_1_31) {
			var_1_37 = (max ((var_1_33 - var_1_35) , var_1_34));
		}
	}


	// From: CodeObject4
	if (! var_1_27) {
		var_1_38 = (max ((abs (abs (var_1_33))) , var_1_36));
	} else {
		var_1_38 = (var_1_36 + ((abs (var_1_39)) - var_1_40));
	}


	// From: CodeObject5
	if (var_1_31 <= var_1_39) {
		var_1_41 = 1.8;
	} else {
		var_1_41 = var_1_43;
	}


	// From: CodeObject6
	if (var_1_42 > (var_1_39 % (abs (var_1_45)))) {
		var_1_44 = ((abs (min (var_1_46 , var_1_47))) - var_1_48);
	} else {
		if (((abs (var_1_41)) != var_1_43) && (var_1_45 != var_1_40)) {
			var_1_44 = (abs (-32));
		}
	}


	// From: CodeObject7
	var_1_49 = (abs (var_1_43));


	// From: CodeObject8
	if ((max (var_1_36 , var_1_33)) > var_1_31) {
		if (((var_1_32 >> var_1_36) % var_1_42) < (var_1_44 & (var_1_26 % var_1_39))) {
			var_1_50 = (max ((abs (abs (7.8))) , var_1_43));
		}
	}


	// From: CodeObject9
	if (((16 - var_1_48) % (abs (1))) > var_1_39) {
		var_1_51 = ((abs (127.4)) + var_1_52);
	}


	// From: CodeObject10
	if ((var_1_54 - var_1_55) >= (var_1_48 - var_1_40)) {
		if (var_1_31 >= (var_1_40 >> var_1_38)) {
			if ((abs (var_1_41)) <= var_1_43) {
				if (var_1_56) {
					var_1_53 = var_1_48;
				} else {
					var_1_53 = var_1_48;
				}
			} else {
				var_1_53 = var_1_55;
			}
		}
	}


	// From: CodeObject11
	if (var_1_25) {
		var_1_57 = var_1_43;
	}


	// From: CodeObject12
	if (var_1_27) {
		var_1_58 = (min ((min (var_1_43 , var_1_52)) , var_1_59));
	}


	// From: CodeObject13
	if ((- var_1_59) <= ((abs (var_1_51)) * var_1_61)) {
		if (var_1_45 != (var_1_44 % var_1_42)) {
			var_1_60 = (min (9.9999999999995E12f , var_1_52));
		} else {
			var_1_60 = ((min (var_1_62 , (abs (var_1_43)))) - var_1_63);
		}
	} else {
		var_1_60 = (abs (var_1_59));
	}


	// From: CodeObject14
	if ((- (var_1_33 | var_1_42)) < var_1_54) {
		var_1_64 = var_1_46;
	}


	// From: CodeObject15
	if (var_1_30) {
		var_1_65 = (var_1_55 + (abs (var_1_66)));
	} else {
		var_1_65 = var_1_66;
	}


	// From: CodeObject16
	if (var_1_60 <= (abs (var_1_41))) {
		var_1_67 = (abs (var_1_43));
	}


	// From: CodeObject17
	var_1_68 = ((var_1_62 <= (var_1_63 * var_1_49)) && ((var_1_66 <= var_1_42) && var_1_69));


	// From: CodeObject18
	if (var_1_56) {
		if (127.25 >= var_1_43) {
			var_1_70 = (((var_1_71 + var_1_72) - var_1_73) - var_1_55);
		} else {
			var_1_70 = var_1_73;
		}
	} else {
		if (var_1_26 <= var_1_65) {
			var_1_70 = (min ((abs (min (var_1_66 , var_1_55))) , (var_1_74 - (max (var_1_73 , var_1_72)))));
		}
	}


	// From: CodeObject19
	if (var_1_59 >= ((abs (var_1_58)) - var_1_62)) {
		var_1_75 = var_1_65;
	}


	// From: CodeObject20
	if (var_1_73 > var_1_26) {
		var_1_76 = (min ((abs (var_1_34)) , var_1_53));
	} else {
		var_1_76 = (min (var_1_34 , (var_1_33 - var_1_55)));
	}


	// From: CodeObject21
	if (var_1_76 >= var_1_39) {
		var_1_77 = (max (16u , var_1_33));
	} else {
		var_1_77 = var_1_36;
	}


	// From: CodeObject22
	if (var_1_51 > (var_1_61 + var_1_52)) {
		if (var_1_51 >= var_1_60) {
			var_1_78 = var_1_55;
		}
	} else {
		if ((var_1_71 << var_1_74) < (abs (var_1_48))) {
			if (var_1_25) {
				var_1_78 = (abs (abs (var_1_48)));
			}
		}
	}


	// From: CodeObject23
	if (var_1_30) {
		var_1_79 = (var_1_52 + var_1_80);
	}


	// From: CodeObject24
	if (var_1_27 && ((~ var_1_66) < var_1_26)) {
		var_1_81 = var_1_71;
	} else {
		var_1_81 = ((var_1_73 + var_1_82) + (abs (max (var_1_55 , var_1_66))));
	}


	// From: CodeObject25
	if (var_1_72 < var_1_48) {
		var_1_83 = (var_1_35 + (abs (abs (var_1_55))));
	} else {
		var_1_83 = (max (var_1_40 , (min ((abs (var_1_54)) , (abs (var_1_53))))));
	}


	// From: CodeObject26
	if (var_1_78 >= ((8 / var_1_42) + (~ var_1_53))) {
		var_1_84 = (max ((var_1_73 - 256) , (min ((min (var_1_44 , var_1_74)) , var_1_45))));
	} else {
		var_1_84 = var_1_48;
	}


	// From: CodeObject27
	if (var_1_70 < (abs (var_1_45))) {
		var_1_85 = ((var_1_86 - (min (var_1_55 , var_1_72))) - var_1_48);
	} else {
		if (var_1_65 > (max ((5 ^ var_1_44) , var_1_83))) {
			var_1_85 = var_1_73;
		}
	}


	// From: CodeObject28
	if (var_1_29) {
		var_1_87 = var_1_82;
	}


	// From: CodeObject29
	if (var_1_68) {
		var_1_88 = var_1_73;
	}


	// From: CodeObject30
	var_1_89 = var_1_62;


	// From: CodeObject31
	if (var_1_51 != var_1_58) {
		var_1_90 = (abs (abs (var_1_59)));
	} else {
		if (var_1_25) {
			var_1_90 = (max ((min (var_1_59 , var_1_62)) , var_1_43));
		}
	}


	// From: CodeObject32
	var_1_91 = var_1_74;


	// From: Req2Batch24PS_CN_250
	if (last_1_var_1_21 <= (min (last_1_var_1_21 , last_1_var_1_8))) {
		if (last_1_var_1_23) {
			var_1_8 = (-16 + (min (var_1_10 , (var_1_11 + var_1_12))));
		}
	} else {
		var_1_8 = var_1_12;
	}


	// From: Req6Batch24PS_CN_250
	var_1_23 = var_1_24;


	// From: Req3Batch24PS_CN_250
	if (128u >= var_1_8) {
		if (! var_1_23) {
			var_1_13 = ((var_1_14 - var_1_15) + 0.25);
		} else {
			var_1_13 = var_1_14;
		}
	} else {
		if (var_1_23) {
			var_1_13 = var_1_5;
		}
	}


	// From: Req4Batch24PS_CN_250
	if (var_1_8 >= ((1329162249 - var_1_17) - var_1_18)) {
		var_1_16 = ((min ((max (var_1_17 , var_1_18)) , var_1_19)) + var_1_20);
	} else {
		if (var_1_23) {
			var_1_16 = var_1_18;
		} else {
			var_1_16 = var_1_19;
		}
	}


	// From: Req5Batch24PS_CN_250
	if ((min (var_1_12 , var_1_18)) <= (var_1_11 + var_1_8)) {
		if (var_1_11 >= (var_1_18 & var_1_16)) {
			var_1_21 = 8;
		} else {
			if (var_1_19 < var_1_8) {
				var_1_21 = 64;
			}
		}
	}


	// From: Req1Batch24PS_CN_250
	unsigned char stepLocal_1 = var_1_23;
	signed char stepLocal_0 = var_1_8;
	if (stepLocal_0 >= var_1_16) {
		var_1_1 = (var_1_4 - (abs (var_1_5)));
	} else {
		if (var_1_23 || stepLocal_1) {
			var_1_1 = 128.75;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -63);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -31);
	assume_abort_if_not(var_1_11 <= 32);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -31);
	assume_abort_if_not(var_1_12 <= 31);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1073741824);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 2147483647);
	assume_abort_if_not(var_1_33 <= 4294967294);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 2147483647);
	assume_abort_if_not(var_1_34 <= 4294967294);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 1073741823);
	assume_abort_if_not(var_1_39 <= 2147483647);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1073741823);
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= -32768);
	assume_abort_if_not(var_1_42 <= 32767);
	assume_abort_if_not(var_1_42 != 0);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854765600e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= -32767);
	assume_abort_if_not(var_1_45 <= 32767);
	assume_abort_if_not(var_1_45 != 0);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= -32766);
	assume_abort_if_not(var_1_46 <= 32766);
	var_1_47 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_47 >= -32766);
	assume_abort_if_not(var_1_47 <= 32766);
	var_1_48 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 32766);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -461168.6018427382800e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427382800e+12F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 127);
	assume_abort_if_not(var_1_54 <= 255);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 127);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= -922337.2036854765600e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854765600e+12F && var_1_59 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= -922337.2036854776000e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854776000e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854765600e+12F && var_1_63 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 127);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 0);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 95);
	assume_abort_if_not(var_1_71 <= 127);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 95);
	assume_abort_if_not(var_1_72 <= 127);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 63);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 127);
	assume_abort_if_not(var_1_74 <= 254);
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= -461168.6018427382800e+13F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 4611686.018427382800e+12F && var_1_80 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 63);
	var_1_86 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_86 >= 16382);
	assume_abort_if_not(var_1_86 <= 32766);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_23 = var_1_23;
}

int property() {
	return ((((((var_1_8 >= var_1_16) ? (var_1_1 == ((double) (var_1_4 - (abs (var_1_5))))) : ((var_1_23 || var_1_23) ? (var_1_1 == ((double) 128.75)) : 1)) && ((last_1_var_1_21 <= (min (last_1_var_1_21 , last_1_var_1_8))) ? (last_1_var_1_23 ? (var_1_8 == ((signed char) (-16 + (min (var_1_10 , (var_1_11 + var_1_12)))))) : 1) : (var_1_8 == ((signed char) var_1_12)))) && ((128u >= var_1_8) ? ((! var_1_23) ? (var_1_13 == ((double) ((var_1_14 - var_1_15) + 0.25))) : (var_1_13 == ((double) var_1_14))) : (var_1_23 ? (var_1_13 == ((double) var_1_5)) : 1))) && ((var_1_8 >= ((1329162249 - var_1_17) - var_1_18)) ? (var_1_16 == ((unsigned long int) ((min ((max (var_1_17 , var_1_18)) , var_1_19)) + var_1_20))) : (var_1_23 ? (var_1_16 == ((unsigned long int) var_1_18)) : (var_1_16 == ((unsigned long int) var_1_19))))) && (((min (var_1_12 , var_1_18)) <= (var_1_11 + var_1_8)) ? ((var_1_11 >= (var_1_18 & var_1_16)) ? (var_1_21 == ((signed short int) 8)) : ((var_1_19 < var_1_8) ? (var_1_21 == ((signed short int) 64)) : 1)) : 1)) && (var_1_23 == ((unsigned char) var_1_24))
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
