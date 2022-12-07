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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch69PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 4;
signed short int var_1_3 = 128;
signed short int var_1_4 = 10;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 64;
signed char var_1_9 = -128;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
double var_1_12 = 32.75;
double var_1_13 = 255.6;
signed short int var_1_14 = 8;
unsigned long int var_1_15 = 256;
unsigned long int var_1_16 = 4031871391;
unsigned long int var_1_17 = 3083112228;
unsigned long int var_1_18 = 3058504136;
unsigned long int var_1_19 = 1902304375;
unsigned char var_1_20 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
unsigned short int var_1_24 = 64;
unsigned char var_1_25 = 0;
unsigned short int var_1_26 = 256;
unsigned short int var_1_27 = 100;
unsigned short int var_1_28 = 2;
unsigned short int var_1_29 = 10;
unsigned long int var_1_30 = 64;
unsigned short int var_1_31 = 0;
signed short int var_1_32 = -16;
signed char var_1_33 = -32;
signed long int var_1_34 = 64;
signed char var_1_35 = -32;
signed char var_1_36 = -50;
signed char var_1_37 = 16;
signed short int var_1_38 = 256;
unsigned char var_1_39 = 16;
double var_1_40 = 16.6;
double var_1_41 = 7.65;
double var_1_42 = 64.78;
unsigned char var_1_43 = 25;
signed char var_1_44 = 25;
signed char var_1_45 = 2;
signed char var_1_46 = 32;
signed char var_1_47 = 5;
unsigned long int var_1_48 = 50;
unsigned long int var_1_49 = 2675051302;
double var_1_50 = 100000000000000.5;
double var_1_51 = 9.75;
double var_1_52 = 9.3;
double var_1_53 = 256.4;
unsigned long int var_1_54 = 16;
unsigned char var_1_55 = 0;
double var_1_56 = 999999999.6;
double var_1_57 = 4.55;
double var_1_58 = 15.25;
double var_1_59 = 64.8;
double var_1_60 = -0.5;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 16;
signed short int var_1_63 = 0;
unsigned long int var_1_64 = 5;
signed char var_1_65 = -10;
float var_1_66 = 64.25;
unsigned long int var_1_67 = 10;
unsigned long int var_1_68 = 3218614618;
float var_1_69 = 1.05;
unsigned short int var_1_70 = 8;
signed char var_1_71 = 10;
signed char var_1_72 = -8;
unsigned long int var_1_73 = 0;
unsigned long int var_1_74 = 1696901204;
unsigned short int var_1_75 = 128;
double var_1_76 = 10.5;
signed char var_1_77 = 50;
unsigned long int var_1_78 = 4;
signed short int var_1_79 = 1;
float var_1_80 = 0.4;
unsigned char var_1_81 = 8;
signed short int var_1_82 = 1000;
signed char var_1_83 = 4;
double var_1_84 = 7.3;
signed char var_1_85 = -64;
signed char var_1_86 = 1;
unsigned char var_1_87 = 0;
unsigned char var_1_88 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 4;
signed char last_1_var_1_9 = -128;
signed short int last_1_var_1_14 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_25) {
		var_1_24 = (((max (var_1_26 , var_1_27)) + (abs (var_1_28))) + var_1_29);
	} else {
		var_1_24 = var_1_28;
	}


	// From: CodeObject2
	if (var_1_27 <= (var_1_31 >> var_1_29)) {
		if (var_1_25) {
			var_1_30 = var_1_28;
		}
	}


	// From: CodeObject3
	if (! var_1_25) {
		if (var_1_26 >= var_1_28) {
			var_1_32 = var_1_28;
		}
	} else {
		if (var_1_28 <= var_1_26) {
			var_1_32 = (abs (-4));
		} else {
			var_1_32 = (min (var_1_28 , -4));
		}
	}


	// From: CodeObject4
	if ((var_1_24 <= var_1_29) || var_1_25) {
		if ((var_1_27 ^ (10 & var_1_31)) >= ((var_1_28 / var_1_34) + (abs (var_1_26)))) {
			if ((var_1_30 * var_1_26) <= var_1_24) {
				var_1_33 = (max ((max (var_1_35 , var_1_36)) , var_1_37));
			}
		}
	}


	// From: CodeObject5
	if (var_1_25) {
		if (var_1_33 > var_1_28) {
			var_1_38 = (abs (var_1_27));
		} else {
			var_1_38 = (min ((abs (var_1_28)) , var_1_27));
		}
	}


	// From: CodeObject6
	if ((max (var_1_40 , var_1_41)) > var_1_42) {
		var_1_39 = var_1_43;
	}


	// From: CodeObject7
	if ((var_1_26 ^ var_1_29) < var_1_27) {
		var_1_44 = ((abs (8)) + var_1_45);
	} else {
		var_1_44 = (var_1_45 + (var_1_46 - (abs (var_1_47))));
	}


	// From: CodeObject8
	var_1_48 = (abs (var_1_49 - var_1_39));


	// From: CodeObject9
	if (var_1_32 != var_1_34) {
		var_1_50 = ((abs (var_1_51)) - (max (var_1_52 , var_1_53)));
	} else {
		if ((- var_1_28) <= var_1_45) {
			var_1_50 = (abs (var_1_53));
		} else {
			var_1_50 = (abs (var_1_52));
		}
	}


	// From: CodeObject10
	if ((var_1_51 + (max (var_1_42 , var_1_40))) < var_1_50) {
		if (var_1_25) {
			if ((var_1_33 >= (var_1_34 >> var_1_44)) && (! var_1_55)) {
				if (var_1_43 != var_1_29) {
					var_1_54 = ((abs (var_1_49)) - var_1_26);
				} else {
					var_1_54 = ((abs (var_1_24)) + var_1_31);
				}
			}
		}
	}


	// From: CodeObject11
	if ((abs (abs (var_1_42))) > var_1_51) {
		var_1_56 = (min ((var_1_52 - var_1_53) , var_1_51));
	} else {
		var_1_56 = ((var_1_57 + var_1_58) + var_1_59);
	}


	// From: CodeObject12
	if (var_1_25) {
		var_1_60 = (max (var_1_51 , var_1_58));
	} else {
		if (! var_1_55) {
			if (var_1_55 && var_1_61) {
				var_1_60 = (min ((var_1_57 + var_1_59) , var_1_51));
			}
		} else {
			var_1_60 = (min (var_1_57 , (min (var_1_51 , (abs (var_1_59))))));
		}
	}


	// From: CodeObject13
	if (var_1_32 <= ((-256 ^ var_1_54) ^ var_1_34)) {
		var_1_62 = (min (var_1_43 , var_1_46));
	} else {
		var_1_62 = var_1_46;
	}


	// From: CodeObject14
	if (! var_1_61) {
		var_1_63 = (max (var_1_26 , (abs (abs (var_1_36)))));
	}


	// From: CodeObject15
	if (var_1_61) {
		var_1_64 = (max (var_1_49 , var_1_31));
	}


	// From: CodeObject16
	if (var_1_40 < (min ((abs (var_1_56)) , (min (var_1_52 , var_1_50))))) {
		var_1_65 = ((min (4 , var_1_47)) + var_1_46);
	}


	// From: CodeObject17
	if (var_1_61) {
		var_1_66 = (abs (var_1_58));
	}


	// From: CodeObject18
	if ((var_1_24 / var_1_49) > (var_1_68 - var_1_62)) {
		if ((var_1_52 + (var_1_53 - var_1_69)) < var_1_41) {
			if (var_1_55 && var_1_25) {
				var_1_67 = ((abs (var_1_62)) + 256u);
			} else {
				var_1_67 = 256u;
			}
		}
	} else {
		var_1_67 = (abs (var_1_46));
	}


	// From: CodeObject19
	if (var_1_60 <= var_1_58) {
		var_1_70 = (abs (var_1_27 + (min (var_1_26 , var_1_28))));
	}


	// From: CodeObject20
	if (var_1_65 > var_1_29) {
		var_1_71 = (max ((abs (abs (16))) , (abs (abs (var_1_45)))));
	}


	// From: CodeObject21
	if (var_1_36 >= (var_1_71 * var_1_31)) {
		var_1_72 = (abs (var_1_46));
	}


	// From: CodeObject22
	if ((var_1_54 % var_1_34) >= ((max (var_1_39 , var_1_28)) / var_1_68)) {
		if (var_1_55) {
			var_1_73 = ((max (var_1_39 , var_1_43)) + (var_1_74 - var_1_27));
		} else {
			var_1_73 = (var_1_46 + (var_1_74 - (abs (var_1_29))));
		}
	}


	// From: CodeObject23
	if (var_1_45 >= var_1_24) {
		var_1_75 = (var_1_46 + var_1_39);
	}


	// From: CodeObject24
	if ((var_1_37 == (var_1_77 / var_1_34)) || (var_1_61 || var_1_55)) {
		var_1_76 = (abs (var_1_57));
	}


	// From: CodeObject25
	if (var_1_51 > (999.8 + var_1_58)) {
		var_1_78 = var_1_28;
	} else {
		var_1_78 = (abs (var_1_49));
	}


	// From: CodeObject26
	if (var_1_54 <= var_1_29) {
		if ((abs (var_1_46)) != ((abs (var_1_24)) - var_1_75)) {
			var_1_79 = (var_1_27 - var_1_62);
		}
	}


	// From: CodeObject27
	if (var_1_30 < var_1_49) {
		var_1_80 = (abs (var_1_52));
	}


	// From: CodeObject28
	if (var_1_55) {
		var_1_81 = (min (64 , var_1_43));
	}


	// From: CodeObject29
	if (var_1_58 <= var_1_41) {
		var_1_82 = var_1_43;
	} else {
		if (var_1_31 != ((abs (var_1_79)) / var_1_34)) {
			var_1_82 = (abs (var_1_81 - 8));
		} else {
			var_1_82 = var_1_35;
		}
	}


	// From: CodeObject30
	if (var_1_61) {
		var_1_83 = var_1_37;
	} else {
		var_1_83 = var_1_36;
	}


	// From: CodeObject31
	if (var_1_61) {
		var_1_84 = (abs (var_1_58));
	} else {
		var_1_84 = (abs (var_1_59));
	}


	// From: CodeObject32
	var_1_85 = var_1_35;


	// From: CodeObject33
	var_1_86 = var_1_47;


	// From: CodeObject34
	var_1_87 = var_1_88;


	// From: Req6Batch69PS_CN_250
	signed long int stepLocal_5 = last_1_var_1_9;
	if (stepLocal_5 < last_1_var_1_1) {
		var_1_20 = ((! (var_1_11 && var_1_22)) && (var_1_10 || var_1_23));
	} else {
		var_1_20 = var_1_23;
	}


	// From: Req4Batch69PS_CN_250
	if (var_1_20 || (var_1_6 <= var_1_8)) {
		var_1_14 = var_1_6;
	}


	// From: Req1Batch69PS_CN_250
	signed long int stepLocal_0 = var_1_3 - var_1_4;
	if (last_1_var_1_14 >= stepLocal_0) {
		var_1_1 = ((var_1_5 - (min (var_1_6 , var_1_7))) - var_1_8);
	} else {
		var_1_1 = (32 + var_1_7);
	}


	// From: Req2Batch69PS_CN_250
	unsigned char stepLocal_2 = var_1_20;
	signed long int stepLocal_1 = var_1_8 - var_1_5;
	if (stepLocal_1 >= var_1_1) {
		if (stepLocal_2 || var_1_20) {
			var_1_9 = var_1_6;
		} else {
			var_1_9 = var_1_7;
		}
	} else {
		var_1_9 = var_1_5;
	}


	// From: Req3Batch69PS_CN_250
	unsigned char stepLocal_4 = var_1_7;
	unsigned char stepLocal_3 = var_1_20;
	if (stepLocal_4 > var_1_1) {
		if (((var_1_1 + var_1_9) == var_1_1) && stepLocal_3) {
			if (! var_1_20) {
				var_1_12 = var_1_13;
			} else {
				var_1_12 = var_1_13;
			}
		} else {
			var_1_12 = var_1_13;
		}
	} else {
		var_1_12 = var_1_13;
	}


	// From: Req5Batch69PS_CN_250
	if (var_1_12 < var_1_13) {
		var_1_15 = ((max ((max (var_1_16 , var_1_17)) , (max (3407568261u , var_1_18)))) - (var_1_19 - 32u));
	} else {
		var_1_15 = (var_1_18 - var_1_19);
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 2147483647);
	assume_abort_if_not(var_1_16 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 2147483647);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 16384);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 16384);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 16383);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65535);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483648);
	assume_abort_if_not(var_1_34 <= 2147483647);
	assume_abort_if_not(var_1_34 != 0);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -127);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -127);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -127);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854776000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 254);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -63);
	assume_abort_if_not(var_1_45 <= 63);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -63);
	assume_abort_if_not(var_1_47 <= 63);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 2147483647);
	assume_abort_if_not(var_1_49 <= 4294967294);
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -922337.2036854765600e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854765600e+12F && var_1_53 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= -230584.3009213691390e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691390e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= -230584.3009213691390e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 2305843.009213691390e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -461168.6018427382800e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 1);
	var_1_68 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_68 >= 2147483647);
	assume_abort_if_not(var_1_68 <= 4294967295);
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854776000e+12F && var_1_69 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_74 >= 1073741823);
	assume_abort_if_not(var_1_74 <= 2147483647);
	var_1_77 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_77 >= -128);
	assume_abort_if_not(var_1_77 <= 127);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 0);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_14 = var_1_14;
}

int property() {
	return ((((((last_1_var_1_14 >= (var_1_3 - var_1_4)) ? (var_1_1 == ((unsigned char) ((var_1_5 - (min (var_1_6 , var_1_7))) - var_1_8))) : (var_1_1 == ((unsigned char) (32 + var_1_7)))) && (((var_1_8 - var_1_5) >= var_1_1) ? ((var_1_20 || var_1_20) ? (var_1_9 == ((signed char) var_1_6)) : (var_1_9 == ((signed char) var_1_7))) : (var_1_9 == ((signed char) var_1_5)))) && ((var_1_7 > var_1_1) ? ((((var_1_1 + var_1_9) == var_1_1) && var_1_20) ? ((! var_1_20) ? (var_1_12 == ((double) var_1_13)) : (var_1_12 == ((double) var_1_13))) : (var_1_12 == ((double) var_1_13))) : (var_1_12 == ((double) var_1_13)))) && ((var_1_20 || (var_1_6 <= var_1_8)) ? (var_1_14 == ((signed short int) var_1_6)) : 1)) && ((var_1_12 < var_1_13) ? (var_1_15 == ((unsigned long int) ((max ((max (var_1_16 , var_1_17)) , (max (3407568261u , var_1_18)))) - (var_1_19 - 32u)))) : (var_1_15 == ((unsigned long int) (var_1_18 - var_1_19))))) && ((last_1_var_1_9 < last_1_var_1_1) ? (var_1_20 == ((unsigned char) ((! (var_1_11 && var_1_22)) && (var_1_10 || var_1_23)))) : (var_1_20 == ((unsigned char) var_1_23)))
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
