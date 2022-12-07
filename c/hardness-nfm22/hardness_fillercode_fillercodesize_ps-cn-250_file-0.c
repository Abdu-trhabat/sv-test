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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch0PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 0;
signed long int var_1_5 = 2;
signed short int var_1_6 = -10;
unsigned long int var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 3470417420;
unsigned char var_1_10 = 0;
double var_1_12 = 25.6;
double var_1_13 = 1.75;
float var_1_14 = 5.4;
float var_1_15 = 127.5;
float var_1_16 = 3.5;
signed long int var_1_17 = 64;
double var_1_19 = 0.0;
unsigned short int var_1_20 = 10;
double var_1_21 = 4.75;
double var_1_22 = 4.6;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
signed short int var_1_29 = 4;
unsigned char var_1_30 = 1;
double var_1_31 = 4.5;
unsigned short int var_1_32 = 1;
unsigned short int var_1_33 = 50;
unsigned short int var_1_34 = 1;
unsigned char var_1_35 = 8;
signed short int var_1_36 = 25;
signed long int var_1_37 = 1;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 0;
signed char var_1_40 = -64;
signed char var_1_41 = 8;
signed char var_1_42 = 50;
signed char var_1_43 = 32;
double var_1_44 = 15.1;
unsigned short int var_1_45 = 100;
unsigned short int var_1_46 = 2;
signed short int var_1_47 = -8;
signed short int var_1_48 = 0;
float var_1_49 = 15.5;
signed short int var_1_50 = 32;
unsigned char var_1_51 = 0;
signed long int var_1_52 = 64;
signed short int var_1_53 = -10;
signed short int var_1_54 = -25;
unsigned short int var_1_55 = 10;
signed long int var_1_56 = -32;
unsigned short int var_1_57 = 64418;
unsigned short int var_1_58 = 65192;
unsigned short int var_1_59 = 29239;
unsigned short int var_1_60 = 22479;
float var_1_61 = 10.75;
float var_1_62 = 1.5;
float var_1_63 = 99999999999.5;
float var_1_64 = 200.6;
signed char var_1_65 = 2;
signed short int var_1_66 = -4;
signed long int var_1_67 = -256;
signed short int var_1_68 = 500;
signed short int var_1_69 = -1;
signed long int var_1_70 = 256;
double var_1_71 = 2.75;
unsigned char var_1_72 = 200;
double var_1_73 = 127.24;
unsigned long int var_1_74 = 32;
unsigned short int var_1_75 = 2;
unsigned short int var_1_76 = 500;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 5;
signed char var_1_79 = 0;
signed char var_1_80 = -5;
unsigned char var_1_81 = 1;
double var_1_82 = 3.8;
signed char var_1_83 = 100;
signed char var_1_84 = -5;
unsigned char var_1_85 = 16;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 0;
signed long int last_1_var_1_5 = 2;
signed short int last_1_var_1_6 = -10;
unsigned long int last_1_var_1_7 = 1;
float last_1_var_1_14 = 5.4;
signed long int last_1_var_1_17 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((32 / var_1_20) > -500) {
		var_1_19 = (abs (var_1_21 - var_1_22));
	}


	// From: CodeObject2
	if (var_1_21 >= (var_1_22 * 128.9)) {
		var_1_23 = var_1_24;
	} else {
		var_1_23 = (var_1_24 && (! var_1_25));
	}


	// From: CodeObject3
	if (var_1_22 == var_1_19) {
		var_1_26 = (var_1_23 && (var_1_25 || (var_1_24 && var_1_27)));
	} else {
		var_1_26 = (var_1_25 || (var_1_27 || var_1_28));
	}


	// From: CodeObject4
	if (var_1_30) {
		if (((abs (var_1_19)) + (var_1_22 + var_1_21)) <= var_1_31) {
			var_1_29 = (abs (-16 + 4));
		}
	}


	// From: CodeObject5
	if (var_1_26) {
		var_1_32 = (1 + (max (var_1_33 , var_1_34)));
	}


	// From: CodeObject6
	if (((~ var_1_36) % var_1_20) <= (var_1_29 % (abs (var_1_37)))) {
		if (var_1_31 <= var_1_19) {
			if (var_1_31 >= (var_1_19 * var_1_22)) {
				var_1_35 = var_1_38;
			}
		}
	} else {
		if (var_1_38 > (var_1_32 / var_1_37)) {
			var_1_35 = var_1_38;
		}
	}


	// From: CodeObject7
	if (var_1_19 < var_1_22) {
		var_1_39 = (var_1_24 && var_1_25);
	}


	// From: CodeObject8
	if (var_1_32 < 256) {
		if (8 >= (abs (var_1_37))) {
			var_1_40 = (max (var_1_41 , ((abs (-16)) + (var_1_42 - var_1_43))));
		}
	}


	// From: CodeObject9
	if (var_1_22 > 10.4) {
		var_1_44 = var_1_22;
	}


	// From: CodeObject10
	if (var_1_37 >= (var_1_35 | var_1_38)) {
		var_1_45 = (max (var_1_46 , var_1_35));
	}


	// From: CodeObject11
	if (((abs (var_1_31)) - (min (var_1_21 , var_1_22))) >= var_1_44) {
		var_1_47 = (max ((min ((var_1_38 - var_1_48) , var_1_42)) , var_1_43));
	}


	// From: CodeObject12
	if (var_1_42 <= var_1_35) {
		if (var_1_21 <= var_1_19) {
			var_1_49 = var_1_21;
		}
	}


	// From: CodeObject13
	if (! var_1_51) {
		if ((max (var_1_34 , var_1_45)) != var_1_37) {
			var_1_50 = ((max (var_1_41 , var_1_38)) + var_1_42);
		}
	} else {
		var_1_50 = (max (var_1_53 , var_1_40));
	}


	// From: CodeObject14
	if (var_1_50 <= var_1_43) {
		var_1_54 = (abs (var_1_48));
	}


	// From: CodeObject15
	if (var_1_36 > var_1_48) {
		if (var_1_40 > var_1_42) {
			if ((var_1_52 > (var_1_56 / -5)) && var_1_39) {
				if (var_1_32 <= var_1_52) {
					var_1_55 = ((max ((min (var_1_57 , var_1_58)) , (var_1_59 + var_1_60))) - (abs (2)));
				} else {
					var_1_55 = var_1_48;
				}
			} else {
				var_1_55 = (max ((abs (var_1_35)) , (max (var_1_38 , (abs (var_1_33))))));
			}
		}
	} else {
		var_1_55 = (abs (abs (var_1_42)));
	}


	// From: CodeObject16
	if (var_1_42 >= 32) {
		var_1_61 = (1.78f - var_1_21);
	} else {
		var_1_61 = (max ((abs (var_1_62 + var_1_63)) , (var_1_22 - (min (var_1_21 , var_1_64)))));
	}


	// From: CodeObject17
	if ((var_1_32 != var_1_45) && var_1_27) {
		var_1_65 = (var_1_43 - var_1_42);
	}


	// From: CodeObject18
	if (var_1_30) {
		if (((var_1_46 + var_1_32) * var_1_45) != (var_1_58 & var_1_59)) {
			var_1_66 = (var_1_42 - var_1_48);
		}
	}


	// From: CodeObject19
	if (var_1_23) {
		var_1_67 = (abs (var_1_29 + var_1_58));
	}


	// From: CodeObject20
	if (var_1_39) {
		var_1_68 = (min (var_1_43 , (4 - var_1_38)));
	} else {
		if (var_1_43 != var_1_65) {
			var_1_68 = (max (var_1_35 , (min (var_1_65 , var_1_53))));
		} else {
			var_1_68 = (var_1_38 - var_1_43);
		}
	}


	// From: CodeObject21
	if (var_1_62 <= (abs (256.5f))) {
		var_1_69 = ((var_1_65 + var_1_43) + (abs (var_1_35)));
	}


	// From: CodeObject22
	if (25 < var_1_59) {
		var_1_70 = (max (var_1_43 , (var_1_66 + (var_1_65 + var_1_34))));
	}


	// From: CodeObject23
	if (((var_1_72 - 32) - 50) <= ((abs (2)) & (8 - var_1_43))) {
		if ((abs (- var_1_63)) <= var_1_49) {
			var_1_71 = var_1_21;
		} else {
			if (var_1_30) {
				var_1_71 = ((max (var_1_63 , var_1_62)) + (abs (var_1_73)));
			} else {
				var_1_71 = (min ((abs (var_1_63)) , (min (var_1_22 , 1.0000000000000045E14))));
			}
		}
	}


	// From: CodeObject24
	if ((- var_1_75) <= var_1_66) {
		var_1_74 = (abs (var_1_57));
	} else {
		var_1_74 = (var_1_32 + ((min (var_1_43 , 16u)) + (max (var_1_20 , var_1_35))));
	}


	// From: CodeObject25
	if ((min (var_1_49 , (abs (var_1_22)))) >= var_1_19) {
		if (var_1_62 >= var_1_22) {
			var_1_76 = (max (var_1_43 , var_1_46));
		}
	}


	// From: CodeObject26
	if (var_1_23) {
		if ((min ((var_1_64 - var_1_21) , var_1_19)) > var_1_71) {
			var_1_77 = var_1_28;
		}
	}


	// From: CodeObject27
	if ((max (var_1_44 , var_1_62)) < var_1_31) {
		var_1_78 = (abs (var_1_43));
	}


	// From: CodeObject28
	if ((var_1_21 - var_1_64) < (abs (- var_1_49))) {
		var_1_79 = (abs (var_1_43));
	} else {
		var_1_79 = var_1_43;
	}


	// From: CodeObject29
	if (var_1_23) {
		var_1_80 = var_1_72;
	} else {
		var_1_80 = var_1_41;
	}


	// From: CodeObject30
	if (var_1_51) {
		var_1_81 = var_1_25;
	} else {
		var_1_81 = var_1_24;
	}


	// From: CodeObject31
	var_1_82 = var_1_21;


	// From: CodeObject32
	if ((var_1_38 + var_1_45) <= var_1_46) {
		var_1_83 = (abs (var_1_42 + (min (var_1_43 , var_1_84))));
	}


	// From: CodeObject33
	var_1_85 = var_1_43;


	// From: Req1Batch0PS_CN_250
	if (last_1_var_1_7 > (- last_1_var_1_5)) {
		var_1_1 = (max (last_1_var_1_5 , (last_1_var_1_7 + last_1_var_1_6)));
	} else {
		var_1_1 = (min ((1 - last_1_var_1_7) , 16));
	}


	// From: Req7Batch0PS_CN_250
	if (((last_1_var_1_14 + last_1_var_1_14) / 9.2) < (min (last_1_var_1_14 , var_1_16))) {
		var_1_17 = (max (last_1_var_1_1 , last_1_var_1_6));
	} else {
		var_1_17 = last_1_var_1_6;
	}


	// From: Req3Batch0PS_CN_250
	signed long int stepLocal_1 = - last_1_var_1_1;
	if (last_1_var_1_17 < stepLocal_1) {
		var_1_6 = (32 - last_1_var_1_6);
	}


	// From: Req4Batch0PS_CN_250
	signed long int stepLocal_3 = var_1_1;
	signed long int stepLocal_2 = var_1_17;
	if (var_1_17 > stepLocal_2) {
		if (var_1_6 <= stepLocal_3) {
			var_1_7 = (abs (var_1_17));
		}
	}


	// From: Req6Batch0PS_CN_250
	unsigned long int stepLocal_5 = var_1_9;
	if ((var_1_12 * last_1_var_1_14) > var_1_13) {
		if (stepLocal_5 < var_1_7) {
			var_1_14 = var_1_15;
		} else {
			var_1_14 = var_1_15;
		}
	} else {
		var_1_14 = var_1_16;
	}


	// From: Req2Batch0PS_CN_250
	signed long int stepLocal_0 = var_1_17;
	if (var_1_6 < stepLocal_0) {
		var_1_5 = ((var_1_17 - var_1_6) + var_1_6);
	}


	// From: Req5Batch0PS_CN_250
	unsigned long int stepLocal_4 = var_1_9 - var_1_6;
	if ((- 8u) >= stepLocal_4) {
		var_1_8 = (! var_1_10);
	} else {
		var_1_8 = (((var_1_14 / var_1_12) >= var_1_14) || var_1_10);
	}
}



void updateVariables() {
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967295);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 65535);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 32767);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 32767);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= -32768);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= -2147483647);
	assume_abort_if_not(var_1_37 <= 2147483647);
	assume_abort_if_not(var_1_37 != 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -127);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 65534);
	var_1_48 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 32766);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_52 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_52 >= -2147483648);
	assume_abort_if_not(var_1_52 <= 2147483647);
	var_1_53 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_53 >= -32767);
	assume_abort_if_not(var_1_53 <= 32766);
	var_1_56 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_56 >= -2147483648);
	assume_abort_if_not(var_1_56 <= 2147483647);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 32767);
	assume_abort_if_not(var_1_57 <= 65534);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 32767);
	assume_abort_if_not(var_1_58 <= 65534);
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 16383);
	assume_abort_if_not(var_1_59 <= 32767);
	var_1_60 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_60 >= 16384);
	assume_abort_if_not(var_1_60 <= 32767);
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= -461168.6018427382800e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427382800e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= -461168.6018427382800e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427382800e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854765600e+12F && var_1_64 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 191);
	assume_abort_if_not(var_1_72 <= 255);
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= -461168.6018427382800e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427382800e+12F && var_1_73 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 65535);
	var_1_84 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_84 >= -63);
	assume_abort_if_not(var_1_84 <= 63);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_17 = var_1_17;
}

int property() {
	return (((((((last_1_var_1_7 > (- last_1_var_1_5)) ? (var_1_1 == ((signed long int) (max (last_1_var_1_5 , (last_1_var_1_7 + last_1_var_1_6))))) : (var_1_1 == ((signed long int) (min ((1 - last_1_var_1_7) , 16))))) && ((var_1_6 < var_1_17) ? (var_1_5 == ((signed long int) ((var_1_17 - var_1_6) + var_1_6))) : 1)) && ((last_1_var_1_17 < (- last_1_var_1_1)) ? (var_1_6 == ((signed short int) (32 - last_1_var_1_6))) : 1)) && ((var_1_17 > var_1_17) ? ((var_1_6 <= var_1_1) ? (var_1_7 == ((unsigned long int) (abs (var_1_17)))) : 1) : 1)) && (((- 8u) >= (var_1_9 - var_1_6)) ? (var_1_8 == ((unsigned char) (! var_1_10))) : (var_1_8 == ((unsigned char) (((var_1_14 / var_1_12) >= var_1_14) || var_1_10))))) && (((var_1_12 * last_1_var_1_14) > var_1_13) ? ((var_1_9 < var_1_7) ? (var_1_14 == ((float) var_1_15)) : (var_1_14 == ((float) var_1_15))) : (var_1_14 == ((float) var_1_16)))) && ((((last_1_var_1_14 + last_1_var_1_14) / 9.2) < (min (last_1_var_1_14 , var_1_16))) ? (var_1_17 == ((signed long int) (max (last_1_var_1_1 , last_1_var_1_6)))) : (var_1_17 == ((signed long int) last_1_var_1_6)))
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
