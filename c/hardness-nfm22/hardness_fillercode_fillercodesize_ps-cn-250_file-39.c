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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch39PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -1;
unsigned char var_1_6 = 0;
signed short int var_1_7 = 8;
signed short int var_1_8 = 4;
unsigned long int var_1_9 = 256;
unsigned long int var_1_10 = 10;
unsigned long int var_1_11 = 3084274888;
unsigned long int var_1_13 = 50;
signed long int var_1_14 = -10;
unsigned char var_1_16 = 0;
float var_1_19 = 4.5;
float var_1_20 = 15.375;
float var_1_21 = 32.725;
float var_1_22 = 63.5;
float var_1_23 = 16.375;
signed char var_1_24 = -32;
signed char var_1_25 = 0;
unsigned short int var_1_26 = 64;
signed long int var_1_27 = -10;
unsigned char var_1_28 = 1;
float var_1_29 = 999999999999.475;
signed long int var_1_30 = -64;
double var_1_31 = 5.25;
float var_1_32 = 31.6;
signed long int var_1_33 = 2;
signed long int var_1_34 = 64;
double var_1_35 = 9.75;
double var_1_36 = 31.8;
double var_1_37 = 4.75;
float var_1_38 = 64.5;
unsigned short int var_1_39 = 4;
signed long int var_1_40 = 4;
signed long int var_1_41 = 2;
unsigned short int var_1_42 = 0;
unsigned short int var_1_43 = 50;
signed short int var_1_44 = 128;
signed short int var_1_45 = 16;
signed short int var_1_46 = 5;
unsigned char var_1_47 = 50;
unsigned char var_1_48 = 50;
unsigned char var_1_49 = 50;
double var_1_50 = 99.5;
float var_1_51 = 99.5;
unsigned char var_1_52 = 1;
unsigned short int var_1_53 = 200;
unsigned short int var_1_54 = 37017;
signed short int var_1_55 = -5;
signed short int var_1_56 = 128;
double var_1_57 = 10000000000000.5;
double var_1_58 = 255.85;
double var_1_59 = 7.875;
unsigned char var_1_60 = 128;
signed short int var_1_61 = 5;
float var_1_62 = 1.5;
unsigned char var_1_63 = 128;
unsigned long int var_1_64 = 128;
signed char var_1_65 = -1;
signed char var_1_66 = 4;
unsigned short int var_1_67 = 200;
unsigned short int var_1_68 = 55403;
unsigned char var_1_69 = 5;
float var_1_70 = 64.8;
float var_1_71 = 128.3;
float var_1_72 = -0.75;
signed short int var_1_73 = -5;
unsigned long int var_1_74 = 1;
unsigned long int var_1_75 = 5;
unsigned long int var_1_76 = 2800719974;
unsigned long int var_1_77 = 3607691373;
unsigned char var_1_78 = 128;
unsigned long int var_1_79 = 16;
double var_1_80 = 1000.5;
signed long int var_1_81 = -256;
unsigned char var_1_82 = 2;
float var_1_83 = 500.25;
unsigned long int var_1_84 = 5;
float var_1_85 = 3.25;
signed long int var_1_86 = 0;
unsigned long int var_1_87 = 10;
float var_1_88 = 256.5;
unsigned long int var_1_89 = 1189417077;
double var_1_90 = 255.2;
float var_1_91 = 99999999.6;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_9 = 256;
unsigned long int last_1_var_1_10 = 10;
signed long int last_1_var_1_14 = -10;
signed char last_1_var_1_24 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_28) {
		if ((abs (min (127.5f , var_1_29))) > 10.5f) {
			var_1_27 = var_1_30;
		}
	}


	// From: CodeObject2
	if ((var_1_29 > var_1_32) || (var_1_30 > (var_1_27 / var_1_33))) {
		if (var_1_30 > (abs (var_1_34))) {
			var_1_31 = (abs (var_1_35 - var_1_36));
		}
	} else {
		var_1_31 = (abs (var_1_36));
	}


	// From: CodeObject3
	if ((~ var_1_27) >= var_1_33) {
		var_1_37 = (max (var_1_35 , (abs (var_1_36))));
	}


	// From: CodeObject4
	if ((var_1_34 * var_1_27) <= (abs (max (2 , var_1_30)))) {
		var_1_38 = (abs (var_1_35));
	} else {
		if ((var_1_27 & 64u) == 4u) {
			var_1_38 = var_1_35;
		} else {
			var_1_38 = var_1_35;
		}
	}


	// From: CodeObject5
	if ((min (var_1_27 , var_1_30)) >= (128 & (var_1_40 - var_1_41))) {
		if (var_1_33 <= (~ var_1_30)) {
			var_1_39 = (max ((max (var_1_42 , 2)) , (abs (max (32 , var_1_43)))));
		} else {
			var_1_39 = var_1_42;
		}
	}


	// From: CodeObject6
	if (var_1_28) {
		var_1_44 = (max ((abs (var_1_45)) , (abs (var_1_46))));
	}


	// From: CodeObject7
	if (var_1_39 >= (abs (var_1_41))) {
		var_1_47 = (abs (var_1_48 + (abs (var_1_49))));
	}


	// From: CodeObject8
	if (var_1_38 >= (abs (var_1_31))) {
		if (((var_1_43 & var_1_49) >> var_1_42) >= var_1_45) {
			var_1_50 = (1.4 - (min (var_1_35 , var_1_36)));
		}
	} else {
		var_1_50 = (min ((min (var_1_36 , 128.4)) , (abs (var_1_35))));
	}


	// From: CodeObject9
	if (((var_1_33 % var_1_53) & (var_1_54 - var_1_49)) >= (min (-8 , var_1_46))) {
		if (var_1_52) {
			var_1_51 = (abs (abs (var_1_36)));
		} else {
			var_1_51 = (abs (min (var_1_36 , var_1_35)));
		}
	}


	// From: CodeObject10
	if (var_1_33 >= var_1_42) {
		var_1_55 = (var_1_56 - var_1_47);
	}


	// From: CodeObject11
	if (var_1_30 <= var_1_48) {
		var_1_57 = (abs (max (var_1_58 , var_1_35)));
	} else {
		if (var_1_34 <= var_1_54) {
			var_1_57 = (min (((max (var_1_59 , 7.5)) + (abs (49.5))) , var_1_36));
		} else {
			var_1_57 = (abs (var_1_58));
		}
	}


	// From: CodeObject12
	if (((var_1_47 - var_1_61) & var_1_40) <= var_1_39) {
		if ((200.125f + var_1_62) >= (var_1_36 - 4.5f)) {
			var_1_60 = (var_1_63 - (abs (var_1_49)));
		}
	}


	// From: CodeObject13
	if (var_1_39 < (var_1_54 - 200)) {
		if (var_1_40 == ((var_1_42 % var_1_53) / (min (var_1_54 , var_1_63)))) {
			if (var_1_30 < (max (var_1_40 , var_1_33))) {
				var_1_64 = (abs (50u));
			}
		}
	}


	// From: CodeObject14
	if (var_1_34 > (var_1_42 * var_1_45)) {
		if (var_1_35 >= var_1_59) {
			var_1_65 = var_1_66;
		} else {
			var_1_65 = var_1_66;
		}
	}


	// From: CodeObject15
	var_1_67 = (max ((min ((max (128 , var_1_63)) , (min (var_1_43 , 50)))) , ((abs (var_1_68)) - 16)));


	// From: CodeObject16
	if ((var_1_68 * 2u) >= (var_1_47 * var_1_64)) {
		if (var_1_59 > var_1_62) {
			if (var_1_65 > var_1_27) {
				var_1_69 = (min (var_1_49 , 5));
			} else {
				var_1_69 = (abs (32));
			}
		} else {
			var_1_69 = 128;
		}
	}


	// From: CodeObject17
	if ((min ((var_1_58 * 255.25f) , var_1_57)) >= var_1_37) {
		var_1_70 = var_1_36;
	}


	// From: CodeObject18
	var_1_71 = (min ((var_1_59 + var_1_72) , var_1_35));


	// From: CodeObject19
	if ((~ (var_1_39 ^ var_1_60)) >= var_1_69) {
		if ((abs (var_1_60)) > var_1_40) {
			var_1_73 = (-1 - (abs (var_1_46)));
		} else {
			var_1_73 = (abs (var_1_60));
		}
	} else {
		var_1_73 = (abs (min (var_1_45 , var_1_63)));
	}


	// From: CodeObject20
	if (var_1_28) {
		var_1_74 = (min (var_1_61 , var_1_63));
	}


	// From: CodeObject21
	if (1.75 <= (min ((abs (var_1_32)) , var_1_50))) {
		var_1_75 = (abs (var_1_63));
	} else {
		var_1_75 = ((max (var_1_76 , (var_1_77 - var_1_60))) - var_1_67);
	}


	// From: CodeObject22
	if (var_1_34 < var_1_73) {
		var_1_78 = ((min (var_1_63 , 128)) - var_1_49);
	}


	// From: CodeObject23
	if (var_1_37 <= (var_1_58 / (abs (var_1_80)))) {
		if ((min ((var_1_39 % var_1_63) , var_1_77)) >= (~ var_1_64)) {
			if (var_1_43 >= (~ var_1_48)) {
				var_1_79 = (abs (var_1_47));
			}
		}
	}


	// From: CodeObject24
	if (var_1_46 >= (max (16 , var_1_64))) {
		var_1_81 = (max (var_1_54 , var_1_30));
	}


	// From: CodeObject25
	if (var_1_52) {
		var_1_82 = var_1_63;
	}


	// From: CodeObject26
	if (var_1_28) {
		var_1_83 = var_1_59;
	} else {
		var_1_83 = var_1_72;
	}


	// From: CodeObject27
	var_1_84 = var_1_69;


	// From: CodeObject28
	if (var_1_28) {
		var_1_85 = var_1_36;
	} else {
		var_1_85 = var_1_72;
	}


	// From: CodeObject29
	var_1_86 = var_1_82;


	// From: CodeObject30
	if (var_1_70 >= ((min (var_1_35 , var_1_36)) - var_1_88)) {
		var_1_87 = ((var_1_77 - var_1_48) - ((max (var_1_89 , 1130888821u)) - var_1_60));
	}


	// From: CodeObject31
	if ((var_1_49 << var_1_45) != (var_1_56 - var_1_41)) {
		var_1_90 = (max ((abs (var_1_35)) , var_1_59));
	}


	// From: CodeObject32
	if (var_1_52) {
		if (var_1_35 != var_1_38) {
			var_1_91 = (max (var_1_35 , var_1_72));
		}
	}


	// From: Req1Batch39PS_CN_250
	unsigned long int stepLocal_0 = (last_1_var_1_10 + last_1_var_1_14) ^ last_1_var_1_10;
	if (stepLocal_0 < (last_1_var_1_24 | -4)) {
		var_1_1 = (var_1_7 - var_1_8);
	} else {
		var_1_1 = (last_1_var_1_10 + -16);
	}


	// From: Req7Batch39PS_CN_250
	var_1_24 = var_1_25;


	// From: Req8Batch39PS_CN_250
	var_1_26 = var_1_8;


	// From: Req3Batch39PS_CN_250
	var_1_10 = (min ((abs (var_1_11 - var_1_8)) , (max (0u , var_1_26))));


	// From: Req4Batch39PS_CN_250
	unsigned long int stepLocal_3 = var_1_8 / (1u + 16u);
	unsigned long int stepLocal_2 = var_1_11;
	if (var_1_26 < stepLocal_3) {
		if (stepLocal_2 > (var_1_26 + 5u)) {
			var_1_13 = (max (var_1_26 , var_1_11));
		} else {
			var_1_13 = 5u;
		}
	} else {
		var_1_13 = var_1_8;
	}


	// From: Req6Batch39PS_CN_250
	signed short int stepLocal_4 = var_1_8;
	if (stepLocal_4 <= var_1_13) {
		var_1_19 = (max (((min (var_1_20 , var_1_21)) + var_1_22) , var_1_23));
	} else {
		var_1_19 = var_1_22;
	}


	// From: Req2Batch39PS_CN_250
	unsigned long int stepLocal_1 = var_1_10;
	if (stepLocal_1 >= (min (var_1_1 , last_1_var_1_9))) {
		if (var_1_6) {
			var_1_9 = var_1_8;
		}
	}


	// From: Req5Batch39PS_CN_250
	if (var_1_26 >= var_1_7) {
		if (var_1_1 > var_1_11) {
			if (var_1_6 && var_1_16) {
				var_1_14 = (var_1_7 - (var_1_26 + var_1_8));
			} else {
				var_1_14 = var_1_26;
			}
		}
	} else {
		var_1_14 = var_1_24;
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854765600e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -127);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483647);
	assume_abort_if_not(var_1_30 <= 2147483646);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483648);
	assume_abort_if_not(var_1_33 <= 2147483647);
	assume_abort_if_not(var_1_33 != 0);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483647);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= -1);
	assume_abort_if_not(var_1_40 <= 2147483647);
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 65534);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 65534);
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= -32766);
	assume_abort_if_not(var_1_45 <= 32766);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= -32766);
	assume_abort_if_not(var_1_46 <= 32766);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 127);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 127);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 1);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 65535);
	assume_abort_if_not(var_1_53 != 0);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 32767);
	assume_abort_if_not(var_1_54 <= 65535);
	var_1_56 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_56 >= -1);
	assume_abort_if_not(var_1_56 <= 32766);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= -922337.2036854765600e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854765600e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -461168.6018427382800e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 32767);
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= -922337.2036854776000e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854776000e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 127);
	assume_abort_if_not(var_1_63 <= 254);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= -127);
	assume_abort_if_not(var_1_66 <= 126);
	var_1_68 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_68 >= 32767);
	assume_abort_if_not(var_1_68 <= 65534);
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= -461168.6018427382800e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427382800e+12F && var_1_72 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_76 >= 2147483647);
	assume_abort_if_not(var_1_76 <= 4294967294);
	var_1_77 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_77 >= 3221225470);
	assume_abort_if_not(var_1_77 <= 4294967294);
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= -922337.2036854776000e+13F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854776000e+12F && var_1_80 >= 1.0e-20F ));
	assume_abort_if_not(var_1_80 != 0.0F);
	var_1_88 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_88 >= 0.0F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 9223372.036854776000e+12F && var_1_88 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_89 >= 1073741823);
	assume_abort_if_not(var_1_89 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_24 = var_1_24;
}

int property() {
	return ((((((((((last_1_var_1_10 + last_1_var_1_14) ^ last_1_var_1_10) < (last_1_var_1_24 | -4)) ? (var_1_1 == ((signed short int) (var_1_7 - var_1_8))) : (var_1_1 == ((signed short int) (last_1_var_1_10 + -16)))) && ((var_1_10 >= (min (var_1_1 , last_1_var_1_9))) ? (var_1_6 ? (var_1_9 == ((unsigned long int) var_1_8)) : 1) : 1)) && (var_1_10 == ((unsigned long int) (min ((abs (var_1_11 - var_1_8)) , (max (0u , var_1_26))))))) && ((var_1_26 < (var_1_8 / (1u + 16u))) ? ((var_1_11 > (var_1_26 + 5u)) ? (var_1_13 == ((unsigned long int) (max (var_1_26 , var_1_11)))) : (var_1_13 == ((unsigned long int) 5u))) : (var_1_13 == ((unsigned long int) var_1_8)))) && ((var_1_26 >= var_1_7) ? ((var_1_1 > var_1_11) ? ((var_1_6 && var_1_16) ? (var_1_14 == ((signed long int) (var_1_7 - (var_1_26 + var_1_8)))) : (var_1_14 == ((signed long int) var_1_26))) : 1) : (var_1_14 == ((signed long int) var_1_24)))) && ((var_1_8 <= var_1_13) ? (var_1_19 == ((float) (max (((min (var_1_20 , var_1_21)) + var_1_22) , var_1_23)))) : (var_1_19 == ((float) var_1_22)))) && (var_1_24 == ((signed char) var_1_25))) && (var_1_26 == ((unsigned short int) var_1_8))
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
