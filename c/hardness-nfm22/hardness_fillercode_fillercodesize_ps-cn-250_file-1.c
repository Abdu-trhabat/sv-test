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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 64;
double var_1_6 = 31.5;
double var_1_9 = 1000000000.25;
float var_1_10 = 1.1;
float var_1_11 = 8.75;
float var_1_12 = 63.8;
unsigned char var_1_13 = 1;
float var_1_14 = 127.5;
signed char var_1_15 = -2;
signed char var_1_16 = 1;
signed char var_1_17 = 1;
signed char var_1_18 = 1;
signed char var_1_19 = -2;
signed char var_1_20 = 16;
signed char var_1_21 = 2;
signed char var_1_22 = 8;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 32;
unsigned char var_1_28 = 1;
unsigned long int var_1_29 = 50;
unsigned long int var_1_30 = 1000000000;
unsigned long int var_1_31 = 4;
unsigned long int var_1_32 = 100000;
unsigned long int var_1_33 = 10;
unsigned char var_1_34 = 1;
unsigned long int var_1_35 = 2632045268;
float var_1_36 = 16.6;
float var_1_37 = 500.3;
signed long int var_1_38 = 5;
float var_1_39 = 49.3;
signed long int var_1_40 = -256;
double var_1_41 = 63.5;
double var_1_42 = 15.5;
double var_1_43 = -0.05;
double var_1_44 = 32.725;
double var_1_45 = 5.625;
unsigned char var_1_46 = 0;
double var_1_47 = 7.25;
double var_1_48 = 3.25;
unsigned long int var_1_49 = 64;
unsigned short int var_1_50 = 32;
float var_1_51 = 255.6;
unsigned long int var_1_52 = 64;
float var_1_53 = 8.5;
unsigned short int var_1_54 = 16;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
unsigned long int var_1_57 = 25;
unsigned long int var_1_58 = 2567623474;
unsigned long int var_1_59 = 8;
unsigned short int var_1_60 = 32;
unsigned short int var_1_61 = 32892;
unsigned short int var_1_62 = 18373;
unsigned short int var_1_63 = 31535;
double var_1_64 = 1.625;
double var_1_65 = 99.2;
double var_1_66 = 5.2;
unsigned char var_1_67 = 0;
unsigned char var_1_68 = 0;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 1;
unsigned long int var_1_72 = 256;
signed char var_1_73 = -2;
signed char var_1_74 = -5;
signed char var_1_75 = 5;
signed char var_1_76 = 2;
unsigned char var_1_77 = 0;
signed long int var_1_78 = 32;
unsigned char var_1_79 = 1;
unsigned char var_1_80 = 4;
unsigned short int var_1_81 = 10;
unsigned short int var_1_82 = 16;
signed short int var_1_83 = -5;
unsigned short int var_1_84 = 10;
signed long int var_1_85 = -2;
unsigned char var_1_86 = 8;
signed long int var_1_87 = 4;
unsigned char var_1_88 = 64;
unsigned char var_1_89 = 64;
unsigned char var_1_90 = 32;
double var_1_91 = 1.5;
unsigned long int var_1_92 = 4;
unsigned short int var_1_93 = 5;
float var_1_94 = 49.5;
unsigned char var_1_95 = 1;
unsigned long int var_1_96 = 1;
signed char var_1_97 = -64;
unsigned char var_1_98 = 1;
unsigned short int var_1_99 = 1000;
float var_1_100 = 100000000000000.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_29 < (var_1_30 | (var_1_31 + var_1_32))) {
		var_1_28 = 200;
	}


	// From: CodeObject2
	if (var_1_32 >= (var_1_31 >> var_1_29)) {
		if (var_1_34 || (var_1_30 < var_1_32)) {
			var_1_33 = (abs (var_1_35 - (var_1_28 + 5u)));
		}
	}


	// From: CodeObject3
	if (var_1_29 >= var_1_35) {
		var_1_36 = (abs (var_1_37));
	}


	// From: CodeObject4
	if ((abs (var_1_37)) <= var_1_39) {
		if ((~ (var_1_35 | var_1_30)) >= (64u + var_1_32)) {
			var_1_38 = (abs (max (100 , var_1_40)));
		} else {
			var_1_38 = (max (0 , (abs (var_1_28))));
		}
	} else {
		var_1_38 = (-16 + var_1_28);
	}


	// From: CodeObject5
	if (-50 != (var_1_32 % (abs (-32)))) {
		var_1_41 = ((max (var_1_42 , var_1_43)) + var_1_44);
	} else {
		var_1_41 = var_1_37;
	}


	// From: CodeObject6
	if (var_1_34 && var_1_46) {
		var_1_45 = (var_1_47 - 500.75);
	}


	// From: CodeObject7
	if (var_1_33 <= (min (var_1_32 , (var_1_49 * var_1_28)))) {
		if (var_1_49 <= (max (1u , var_1_30))) {
			if ((var_1_35 * var_1_32) > var_1_30) {
				var_1_48 = (abs (var_1_42));
			} else {
				var_1_48 = var_1_43;
			}
		}
	} else {
		var_1_48 = var_1_42;
	}


	// From: CodeObject8
	if (var_1_46) {
		var_1_50 = var_1_28;
	}


	// From: CodeObject9
	if (((abs (var_1_42)) - (abs (var_1_48))) < var_1_44) {
		if (1u >= (abs (var_1_33 % var_1_52))) {
			var_1_51 = (abs (abs (var_1_44)));
		} else {
			var_1_51 = ((abs (var_1_47)) - var_1_53);
		}
	} else {
		var_1_51 = (max (var_1_44 , (min (var_1_53 , var_1_43))));
	}


	// From: CodeObject10
	if (var_1_47 >= var_1_44) {
		var_1_54 = var_1_28;
	}


	// From: CodeObject11
	if (var_1_32 < (~ var_1_49)) {
		var_1_55 = 0;
	} else {
		var_1_55 = (var_1_46 && var_1_56);
	}


	// From: CodeObject12
	if (var_1_55) {
		var_1_57 = (min (var_1_35 , (var_1_58 - var_1_59)));
	} else {
		var_1_57 = ((abs (var_1_59)) + var_1_50);
	}


	// From: CodeObject13
	if (var_1_33 <= (abs (var_1_32))) {
		var_1_60 = (var_1_61 - ((max (var_1_62 , var_1_63)) - var_1_28));
	} else {
		var_1_60 = (var_1_61 - (abs (var_1_28)));
	}


	// From: CodeObject14
	if (var_1_46) {
		var_1_64 = (var_1_44 + ((var_1_65 + var_1_66) - (abs (var_1_43))));
	}


	// From: CodeObject15
	if (var_1_29 > var_1_59) {
		var_1_67 = (var_1_56 || var_1_68);
	} else {
		var_1_67 = (((abs (var_1_38)) > (~ var_1_50)) || (var_1_69 && (var_1_70 && var_1_71)));
	}


	// From: CodeObject16
	if ((var_1_30 & var_1_54) < var_1_28) {
		if ((var_1_49 + (abs (var_1_73))) < (var_1_62 * var_1_57)) {
			var_1_72 = var_1_35;
		}
	}


	// From: CodeObject17
	if (((abs (4.6f)) * -0.25f) >= (max (var_1_44 , var_1_41))) {
		var_1_74 = (var_1_75 - var_1_76);
	}


	// From: CodeObject18
	if ((- var_1_66) >= (min (var_1_47 , var_1_44))) {
		if ((max (var_1_33 , (16u ^ var_1_58))) <= ((abs (var_1_28)) << var_1_52)) {
			var_1_77 = (var_1_71 || var_1_69);
		} else {
			var_1_77 = var_1_68;
		}
	} else {
		if (((var_1_57 * var_1_78) < var_1_49) && var_1_56) {
			if ((var_1_49 & var_1_60) != var_1_72) {
				var_1_77 = (var_1_79 || (! var_1_68));
			}
		} else {
			var_1_77 = (! var_1_69);
		}
	}


	// From: CodeObject19
	if (var_1_41 <= var_1_37) {
		if (((var_1_32 + var_1_72) ^ var_1_54) < var_1_38) {
			var_1_80 = var_1_76;
		}
	}


	// From: CodeObject20
	if ((var_1_74 >> var_1_62) > var_1_63) {
		var_1_81 = (abs (var_1_82));
	}


	// From: CodeObject21
	if (var_1_34) {
		var_1_83 = (abs (var_1_28));
	} else {
		if (var_1_70 || (var_1_42 != var_1_48)) {
			var_1_83 = (abs (abs (var_1_75)));
		}
	}


	// From: CodeObject22
	if (var_1_32 > var_1_62) {
		var_1_84 = (abs (var_1_80));
	}


	// From: CodeObject23
	if (var_1_68) {
		if ((var_1_66 - var_1_65) > var_1_39) {
			var_1_85 = (abs (var_1_28 + var_1_83));
		}
	}


	// From: CodeObject24
	if (var_1_81 < (var_1_49 & var_1_52)) {
		var_1_86 = (abs (10));
	}


	// From: CodeObject25
	if (var_1_43 != var_1_41) {
		var_1_87 = (var_1_84 + var_1_61);
	}


	// From: CodeObject26
	if ((- 256.8) >= var_1_65) {
		if (((var_1_30 >> var_1_28) + var_1_58) > var_1_86) {
			var_1_88 = var_1_76;
		} else {
			if (var_1_36 >= (abs (var_1_66))) {
				var_1_88 = ((var_1_89 - (var_1_90 + 1)) + var_1_76);
			}
		}
	} else {
		if (var_1_62 <= var_1_54) {
			var_1_88 = var_1_90;
		}
	}


	// From: CodeObject27
	if ((var_1_58 / var_1_92) <= var_1_31) {
		var_1_91 = ((abs (1.8)) + var_1_43);
	}


	// From: CodeObject28
	if (var_1_53 > var_1_51) {
		var_1_93 = var_1_88;
	}


	// From: CodeObject29
	if (var_1_68) {
		var_1_94 = var_1_66;
	}


	// From: CodeObject30
	var_1_95 = var_1_71;


	// From: CodeObject31
	var_1_96 = var_1_82;


	// From: CodeObject32
	if (var_1_55) {
		var_1_97 = var_1_76;
	}


	// From: CodeObject33
	if (var_1_55) {
		var_1_98 = var_1_68;
	}


	// From: CodeObject34
	var_1_99 = (var_1_61 - (var_1_62 - var_1_89));


	// From: CodeObject35
	if ((var_1_52 % var_1_63) > ((var_1_60 + var_1_90) & (var_1_59 >> var_1_30))) {
		var_1_100 = var_1_66;
	} else {
		var_1_100 = var_1_42;
	}


	// From: Req5Batch1PS_CN_250
	var_1_15 = (var_1_16 - var_1_17);


	// From: Req8Batch1PS_CN_250
	var_1_27 = var_1_21;


	// From: Req1Batch1PS_CN_250
	unsigned char stepLocal_1 = var_1_27;
	unsigned char stepLocal_0 = var_1_27;
	if ((var_1_27 + var_1_27) <= stepLocal_1) {
		var_1_1 = (128 + var_1_27);
	} else {
		if (stepLocal_0 >= (var_1_27 * var_1_27)) {
			var_1_1 = var_1_27;
		} else {
			var_1_1 = 1;
		}
	}


	// From: Req2Batch1PS_CN_250
	if (var_1_27 < (var_1_27 - var_1_27)) {
		var_1_6 = var_1_9;
	}


	// From: Req3Batch1PS_CN_250
	unsigned char stepLocal_2 = var_1_27;
	if (var_1_27 > stepLocal_2) {
		var_1_10 = (1.00000000000009E13f - var_1_11);
	} else {
		var_1_10 = 9.75f;
	}


	// From: Req6Batch1PS_CN_250
	if ((min (var_1_27 , var_1_27)) < 25u) {
		var_1_18 = ((max (var_1_19 , (var_1_20 - var_1_21))) + (abs (abs (var_1_22))));
	}


	// From: Req7Batch1PS_CN_250
	signed long int stepLocal_5 = ~ var_1_21;
	if (var_1_13) {
		if (stepLocal_5 > var_1_27) {
			var_1_23 = (var_1_24 && (! var_1_25));
		} else {
			if (var_1_24) {
				var_1_23 = ((! var_1_25) || var_1_26);
			}
		}
	}


	// From: Req4Batch1PS_CN_250
	unsigned char stepLocal_4 = var_1_18 >= var_1_27;
	unsigned char stepLocal_3 = var_1_27;
	if (var_1_23 && stepLocal_4) {
		var_1_12 = var_1_11;
	} else {
		if (1 >= stepLocal_3) {
			var_1_12 = var_1_11;
		} else {
			var_1_12 = var_1_14;
		}
	}
}



void updateVariables() {
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -1);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -63);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967295);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967295);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 4294967295);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= -2147483646);
	assume_abort_if_not(var_1_40 <= 2147483646);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -461168.6018427382800e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -461168.6018427382800e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -461168.6018427382800e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 4294967295);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 4294967295);
	assume_abort_if_not(var_1_52 != 0);
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854765600e+12F && var_1_53 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 0);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 2147483647);
	assume_abort_if_not(var_1_58 <= 4294967294);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 2147483647);
	var_1_61 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_61 >= 32767);
	assume_abort_if_not(var_1_61 <= 65534);
	var_1_62 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_62 >= 16383);
	assume_abort_if_not(var_1_62 <= 32767);
	var_1_63 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_63 >= 16383);
	assume_abort_if_not(var_1_63 <= 32767);
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691390e+12F && var_1_65 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 2305843.009213691390e+12F && var_1_66 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 0);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 1);
	assume_abort_if_not(var_1_69 <= 1);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 1);
	assume_abort_if_not(var_1_70 <= 1);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 1);
	assume_abort_if_not(var_1_71 <= 1);
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= -127);
	assume_abort_if_not(var_1_73 <= 127);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= -1);
	assume_abort_if_not(var_1_75 <= 126);
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 126);
	var_1_78 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_78 >= -2147483648);
	assume_abort_if_not(var_1_78 <= 2147483647);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 1);
	var_1_82 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 65534);
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 63);
	assume_abort_if_not(var_1_89 <= 127);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 32);
	var_1_92 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 4294967295);
	assume_abort_if_not(var_1_92 != 0);
}



void updateLastVariables() {
}

int property() {
	return (((((((((var_1_27 + var_1_27) <= var_1_27) ? (var_1_1 == ((signed short int) (128 + var_1_27))) : ((var_1_27 >= (var_1_27 * var_1_27)) ? (var_1_1 == ((signed short int) var_1_27)) : (var_1_1 == ((signed short int) 1)))) && ((var_1_27 < (var_1_27 - var_1_27)) ? (var_1_6 == ((double) var_1_9)) : 1)) && ((var_1_27 > var_1_27) ? (var_1_10 == ((float) (1.00000000000009E13f - var_1_11))) : (var_1_10 == ((float) 9.75f)))) && ((var_1_23 && (var_1_18 >= var_1_27)) ? (var_1_12 == ((float) var_1_11)) : ((1 >= var_1_27) ? (var_1_12 == ((float) var_1_11)) : (var_1_12 == ((float) var_1_14))))) && (var_1_15 == ((signed char) (var_1_16 - var_1_17)))) && (((min (var_1_27 , var_1_27)) < 25u) ? (var_1_18 == ((signed char) ((max (var_1_19 , (var_1_20 - var_1_21))) + (abs (abs (var_1_22)))))) : 1)) && (var_1_13 ? (((~ var_1_21) > var_1_27) ? (var_1_23 == ((unsigned char) (var_1_24 && (! var_1_25)))) : (var_1_24 ? (var_1_23 == ((unsigned char) ((! var_1_25) || var_1_26))) : 1)) : 1)) && (var_1_27 == ((unsigned char) var_1_21))
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
