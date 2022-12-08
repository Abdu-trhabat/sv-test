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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch49PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 10;
unsigned long int var_1_3 = 3171453299;
unsigned long int var_1_4 = 2038274679;
unsigned long int var_1_5 = 1375699353;
unsigned short int var_1_8 = 16;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
double var_1_14 = 64.45;
float var_1_15 = 31.15;
float var_1_16 = 16.4;
double var_1_17 = 100.625;
double var_1_18 = 128.1;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 8;
unsigned char var_1_21 = 100;
unsigned char var_1_22 = 0;
signed char var_1_23 = 2;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 16;
unsigned char var_1_26 = 10;
float var_1_27 = 1000000000000000.4;
unsigned char var_1_28 = 25;
float var_1_29 = 255.4;
float var_1_30 = 24.8;
float var_1_31 = 128.75;
signed long int var_1_32 = -25;
signed long int var_1_33 = 128;
signed long int var_1_34 = 8;
unsigned short int var_1_35 = 2;
float var_1_36 = 15.5;
unsigned short int var_1_37 = 2;
unsigned char var_1_38 = 0;
unsigned short int var_1_39 = 55789;
unsigned char var_1_40 = 16;
unsigned long int var_1_41 = 16;
unsigned long int var_1_42 = 0;
double var_1_43 = 199.75;
double var_1_44 = 8.5;
float var_1_45 = -0.75;
float var_1_46 = 10.3;
float var_1_47 = 9.9;
signed char var_1_48 = 8;
signed char var_1_49 = 32;
float var_1_50 = 256.94;
signed long int var_1_51 = -100000000;
signed long int var_1_52 = 256;
signed short int var_1_53 = 4;
float var_1_54 = 2.6;
signed long int var_1_55 = -64;
unsigned long int var_1_56 = 500;
signed short int var_1_57 = 64;
float var_1_58 = 31.55;
unsigned long int var_1_59 = 128;
unsigned long int var_1_60 = 3647203654;
double var_1_61 = 16.425;
signed long int var_1_62 = 1000;
double var_1_63 = 31.5;
unsigned char var_1_64 = 1;
float var_1_65 = 99999999999.5;
unsigned char var_1_66 = 1;
float var_1_67 = 99999999999999.25;
float var_1_68 = 31.1;
unsigned long int var_1_69 = 0;
signed long int var_1_70 = -100;
unsigned long int var_1_71 = 2;
unsigned long int var_1_72 = 1000;
signed char var_1_73 = -16;
signed char var_1_74 = 10;
unsigned long int var_1_75 = 1;
signed long int var_1_76 = 256;
signed long int var_1_77 = 4;
unsigned char var_1_78 = 1;
unsigned char var_1_79 = 0;
unsigned char var_1_80 = 0;
unsigned char var_1_81 = 1;
unsigned char var_1_82 = 0;
unsigned char var_1_83 = 0;
unsigned short int var_1_84 = 5;
unsigned long int var_1_85 = 32;
signed short int var_1_86 = 1;
signed long int var_1_87 = -32;
float var_1_88 = 7.75;
signed char var_1_89 = -16;
unsigned char var_1_90 = 1;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 10;
unsigned short int last_1_var_1_8 = 16;
unsigned char last_1_var_1_12 = 1;
unsigned char last_1_var_1_19 = 1;
unsigned char last_1_var_1_22 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_25 = var_1_26;


	// From: CodeObject2
	if (var_1_26 <= (var_1_25 % var_1_28)) {
		var_1_27 = (min (var_1_29 , var_1_30));
	}


	// From: CodeObject3
	if ((var_1_26 % var_1_28) <= ((var_1_25 + var_1_32) & (min (var_1_33 , var_1_34)))) {
		var_1_31 = (abs (var_1_30));
	}


	// From: CodeObject4
	if ((var_1_27 + var_1_36) <= var_1_30) {
		var_1_35 = (var_1_28 + (max (var_1_25 , (min (var_1_26 , var_1_37)))));
	} else {
		if (var_1_38) {
			if ((max ((abs (var_1_30)) , var_1_36)) >= (min (var_1_29 , var_1_31))) {
				var_1_35 = (abs (var_1_37));
			} else {
				var_1_35 = (min (var_1_25 , (var_1_39 - (abs (var_1_28)))));
			}
		}
	}


	// From: CodeObject5
	if (var_1_30 > var_1_31) {
		var_1_40 = (abs (var_1_26));
	}


	// From: CodeObject6
	var_1_41 = (abs (var_1_28 + (min (var_1_25 , var_1_40))));


	// From: CodeObject7
	if ((~ var_1_39) != var_1_35) {
		if (-8 != (abs (var_1_35))) {
			var_1_42 = (abs ((max (var_1_35 , var_1_26)) + 50u));
		} else {
			var_1_42 = (abs (var_1_35 + (abs (var_1_40))));
		}
	} else {
		var_1_42 = (((abs (var_1_40)) + var_1_39) + var_1_28);
	}


	// From: CodeObject8
	if ((- var_1_39) <= (var_1_40 & (abs (var_1_25)))) {
		var_1_43 = (abs (abs (var_1_30)));
	}


	// From: CodeObject9
	if (var_1_30 > var_1_43) {
		var_1_44 = (max (var_1_30 , var_1_29));
	}


	// From: CodeObject10
	if (var_1_38) {
		var_1_45 = (max (var_1_29 , (abs (var_1_30))));
	} else {
		if (var_1_36 > var_1_30) {
			var_1_45 = var_1_29;
		} else {
			var_1_45 = (var_1_46 - var_1_47);
		}
	}


	// From: CodeObject11
	if (5.5 <= var_1_44) {
		var_1_48 = var_1_49;
	} else {
		var_1_48 = var_1_49;
	}


	// From: CodeObject12
	if ((var_1_34 <= var_1_51) || var_1_38) {
		var_1_50 = (abs (var_1_46));
	}


	// From: CodeObject13
	if (var_1_48 >= var_1_40) {
		if (var_1_28 <= var_1_41) {
			var_1_52 = var_1_48;
		}
	}


	// From: CodeObject14
	if (var_1_54 >= (var_1_30 + var_1_36)) {
		if (-8 < var_1_55) {
			var_1_53 = (var_1_28 - (max (var_1_25 , 4)));
		} else {
			var_1_53 = (abs (var_1_48));
		}
	} else {
		var_1_53 = (abs (var_1_26));
	}


	// From: CodeObject15
	if (var_1_44 >= var_1_47) {
		var_1_56 = ((abs (3160676631u)) - var_1_37);
	} else {
		var_1_56 = (abs (var_1_25));
	}


	// From: CodeObject16
	if (var_1_25 <= var_1_51) {
		if ((var_1_34 & var_1_49) < (~ var_1_35)) {
			var_1_57 = (min ((min (var_1_40 , (abs (var_1_48)))) , var_1_25));
		}
	} else {
		if (var_1_38) {
			if (! ((- var_1_46) < (var_1_47 - var_1_58))) {
				if (((5 << var_1_41) + 1) > var_1_37) {
					var_1_57 = (abs (-16));
				}
			}
		} else {
			var_1_57 = (abs (-64));
		}
	}


	// From: CodeObject17
	if (var_1_38) {
		var_1_59 = (abs (var_1_60 - var_1_35));
	} else {
		var_1_59 = 50u;
	}


	// From: CodeObject18
	if (var_1_38 && ((abs (var_1_52)) > var_1_62)) {
		if ((- (- var_1_44)) <= (var_1_31 * var_1_58)) {
			var_1_61 = (abs (1.6));
		}
	}


	// From: CodeObject19
	if (var_1_38 || ((min (var_1_59 , var_1_56)) <= (var_1_60 - var_1_40))) {
		var_1_63 = (abs (abs (var_1_29)));
	}


	// From: CodeObject20
	if (! var_1_38) {
		var_1_64 = (abs (var_1_26));
	}


	// From: CodeObject21
	if (var_1_27 > 1.0000000000025E11f) {
		if (var_1_38 || var_1_66) {
			var_1_65 = (var_1_67 + (var_1_68 + (abs (25.625f))));
		}
	}


	// From: CodeObject22
	var_1_69 = (abs (var_1_39));


	// From: CodeObject23
	if ((abs (var_1_29)) >= 7.063f) {
		var_1_70 = (abs (2));
	} else {
		var_1_70 = (abs (var_1_37 + var_1_48));
	}


	// From: CodeObject24
	if (var_1_27 != (var_1_29 * var_1_58)) {
		var_1_71 = (abs (var_1_72));
	}


	// From: CodeObject25
	if (var_1_46 >= var_1_43) {
		var_1_73 = (min (var_1_49 , var_1_74));
	}


	// From: CodeObject26
	if ((min (var_1_63 , var_1_47)) == (min (var_1_50 , var_1_61))) {
		var_1_75 = (abs (var_1_28));
	}


	// From: CodeObject27
	if (var_1_52 >= var_1_62) {
		var_1_76 = (abs ((min (var_1_64 , var_1_77)) + var_1_73));
	}


	// From: CodeObject28
	if (var_1_48 >= var_1_56) {
		if (var_1_77 <= var_1_35) {
			if (var_1_65 <= (abs (var_1_45))) {
				var_1_78 = (var_1_66 && (! var_1_79));
			} else {
				var_1_78 = var_1_79;
			}
		} else {
			var_1_78 = (((var_1_39 <= var_1_37) && var_1_80) || (var_1_81 && var_1_82));
		}
	} else {
		if (var_1_29 > (min (var_1_67 , (max (var_1_50 , var_1_68))))) {
			var_1_78 = (var_1_79 && (var_1_38 || var_1_83));
		}
	}


	// From: CodeObject29
	if ((- var_1_44) < (abs (var_1_50))) {
		if (var_1_60 == (var_1_85 % var_1_28)) {
			var_1_84 = var_1_39;
		}
	}


	// From: CodeObject30
	if (var_1_83) {
		var_1_86 = var_1_25;
	}


	// From: CodeObject31
	if (var_1_82) {
		var_1_87 = var_1_57;
	}


	// From: CodeObject32
	var_1_88 = var_1_29;


	// From: CodeObject33
	if ((var_1_90 / var_1_28) <= var_1_39) {
		if (((abs (var_1_40)) * var_1_59) > (var_1_37 | var_1_71)) {
			var_1_89 = var_1_74;
		} else {
			var_1_89 = var_1_49;
		}
	}


	// From: Req3Batch49PS_CN_250
	if (! last_1_var_1_22) {
		if ((last_1_var_1_1 * (min (last_1_var_1_19 , var_1_5))) >= last_1_var_1_19) {
			var_1_12 = var_1_13;
		}
	} else {
		var_1_12 = 0;
	}


	// From: Req5Batch49PS_CN_250
	if (var_1_13 && last_1_var_1_22) {
		if (var_1_4 > (256u * last_1_var_1_8)) {
			var_1_19 = (min (var_1_20 , var_1_21));
		} else {
			var_1_19 = var_1_20;
		}
	}


	// From: Req2Batch49PS_CN_250
	var_1_8 = (max (25 , ((min (var_1_19 , var_1_19)) + (100 + var_1_19))));


	// From: Req4Batch49PS_CN_250
	if ((max ((- 9.5f) , (- var_1_15))) < var_1_16) {
		var_1_14 = (min (var_1_17 , var_1_18));
	}


	// From: Req1Batch49PS_CN_250
	if (last_1_var_1_12) {
		var_1_1 = ((max (var_1_3 , (var_1_4 + var_1_5))) - ((max (last_1_var_1_19 , last_1_var_1_8)) + 256u));
	}


	// From: Req6Batch49PS_CN_250
	if ((-2 / var_1_23) >= (var_1_19 & var_1_4)) {
		if (var_1_21 >= (var_1_1 + var_1_5)) {
			if ((~ var_1_19) > var_1_20) {
				if (var_1_12) {
					var_1_22 = var_1_24;
				} else {
					var_1_22 = var_1_13;
				}
			} else {
				var_1_22 = var_1_13;
			}
		} else {
			var_1_22 = var_1_13;
		}
	} else {
		var_1_22 = var_1_13;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 2147483647);
	assume_abort_if_not(var_1_3 <= 4294967294);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 1073741823);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 1073741824);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 254);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -128);
	assume_abort_if_not(var_1_23 <= 127);
	assume_abort_if_not(var_1_23 != 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 254);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 255);
	assume_abort_if_not(var_1_28 != 0);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854765600e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483648);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483648);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 32767);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 32767);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854765600e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -127);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_51 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_51 >= -2147483648);
	assume_abort_if_not(var_1_51 <= 2147483647);
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -922337.2036854776000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_55 >= -2147483648);
	assume_abort_if_not(var_1_55 <= 2147483647);
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 2147483647);
	assume_abort_if_not(var_1_60 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_62 >= -2147483648);
	assume_abort_if_not(var_1_62 <= 2147483647);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 1);
	var_1_67 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_67 >= -461168.6018427382800e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427382800e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_68 >= -230584.3009213691390e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 2305843.009213691390e+12F && var_1_68 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 4294967294);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= -127);
	assume_abort_if_not(var_1_74 <= 126);
	var_1_77 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_77 >= -1073741823);
	assume_abort_if_not(var_1_77 <= 1073741823);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 1);
	assume_abort_if_not(var_1_79 <= 1);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 0);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 1);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 0);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 1);
	assume_abort_if_not(var_1_83 <= 1);
	var_1_85 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 4294967295);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 255);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_22 = var_1_22;
}

int property() {
	return (((((last_1_var_1_12 ? (var_1_1 == ((unsigned long int) ((max (var_1_3 , (var_1_4 + var_1_5))) - ((max (last_1_var_1_19 , last_1_var_1_8)) + 256u)))) : 1) && (var_1_8 == ((unsigned short int) (max (25 , ((min (var_1_19 , var_1_19)) + (100 + var_1_19))))))) && ((! last_1_var_1_22) ? (((last_1_var_1_1 * (min (last_1_var_1_19 , var_1_5))) >= last_1_var_1_19) ? (var_1_12 == ((unsigned char) var_1_13)) : 1) : (var_1_12 == ((unsigned char) 0)))) && (((max ((- 9.5f) , (- var_1_15))) < var_1_16) ? (var_1_14 == ((double) (min (var_1_17 , var_1_18)))) : 1)) && ((var_1_13 && last_1_var_1_22) ? ((var_1_4 > (256u * last_1_var_1_8)) ? (var_1_19 == ((unsigned char) (min (var_1_20 , var_1_21)))) : (var_1_19 == ((unsigned char) var_1_20))) : 1)) && (((-2 / var_1_23) >= (var_1_19 & var_1_4)) ? ((var_1_21 >= (var_1_1 + var_1_5)) ? (((~ var_1_19) > var_1_20) ? (var_1_12 ? (var_1_22 == ((unsigned char) var_1_24)) : (var_1_22 == ((unsigned char) var_1_13))) : (var_1_22 == ((unsigned char) var_1_13))) : (var_1_22 == ((unsigned char) var_1_13))) : (var_1_22 == ((unsigned char) var_1_13)))
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
