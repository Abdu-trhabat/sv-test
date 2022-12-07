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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch33PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 8;
signed short int var_1_5 = -10;
unsigned short int var_1_7 = 256;
double var_1_8 = 4.58;
double var_1_9 = -0.1;
signed short int var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
signed char var_1_14 = -16;
signed char var_1_15 = 8;
signed char var_1_16 = 8;
signed char var_1_17 = 10;
signed char var_1_18 = 0;
unsigned long int var_1_19 = 16;
signed char var_1_20 = 10;
signed char var_1_21 = -50;
unsigned short int var_1_22 = 64;
unsigned short int var_1_23 = 2;
unsigned short int var_1_24 = 0;
signed long int var_1_25 = 64;
unsigned short int var_1_26 = 256;
double var_1_27 = 128.4;
unsigned char var_1_28 = 0;
double var_1_29 = -0.5;
double var_1_30 = 10.75;
float var_1_31 = 10.5;
double var_1_32 = 4.125;
double var_1_33 = 200.4;
double var_1_34 = 2.03;
double var_1_35 = 64.25;
unsigned long int var_1_36 = 5;
unsigned short int var_1_37 = 59808;
unsigned short int var_1_38 = 64;
unsigned long int var_1_39 = 4;
unsigned short int var_1_40 = 64;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 1;
signed short int var_1_44 = -256;
signed short int var_1_45 = 50;
signed short int var_1_46 = 4;
signed short int var_1_47 = 1;
signed char var_1_48 = 1;
signed char var_1_49 = 100;
unsigned char var_1_50 = 1;
signed char var_1_51 = -16;
signed char var_1_52 = -5;
unsigned short int var_1_53 = 47718;
double var_1_54 = 24.625;
double var_1_55 = 63.8;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 0;
signed long int var_1_59 = 25;
signed long int var_1_60 = 8;
float var_1_61 = 63.375;
float var_1_62 = 25.75;
float var_1_63 = 63.6;
float var_1_64 = 0.75;
float var_1_65 = 31.5;
double var_1_66 = 31.6;
signed long int var_1_67 = -64;
double var_1_68 = 1.5;
float var_1_69 = 63.25;
unsigned char var_1_70 = 1;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 1;
unsigned char var_1_73 = 32;
unsigned char var_1_74 = 16;
unsigned char var_1_75 = 128;
unsigned char var_1_76 = 200;
unsigned char var_1_77 = 64;
float var_1_78 = 63.8;
unsigned long int var_1_79 = 10000;
unsigned char var_1_80 = 32;
signed short int var_1_81 = 5;
signed short int var_1_82 = 0;
unsigned short int var_1_83 = 10;
signed short int var_1_84 = -8;
unsigned long int var_1_85 = 100000;
unsigned long int var_1_86 = 32;
signed short int var_1_87 = 64;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_7 = 256;
signed short int last_1_var_1_11 = 0;
unsigned long int last_1_var_1_19 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((- (max (var_1_23 , var_1_24))) == var_1_25) {
		var_1_22 = var_1_26;
	}


	// From: CodeObject2
	if (var_1_28) {
		var_1_27 = (max (var_1_29 , var_1_30));
	} else {
		if ((- (128 ^ var_1_24)) >= var_1_23) {
			var_1_27 = (max (var_1_30 , var_1_29));
		}
	}


	// From: CodeObject3
	if (1 >= var_1_26) {
		if (var_1_27 >= var_1_29) {
			var_1_31 = (abs (var_1_29));
		}
	} else {
		if (10 <= var_1_26) {
			if (var_1_22 <= var_1_26) {
				if (var_1_27 <= (var_1_29 / var_1_32)) {
					var_1_31 = (min (var_1_30 , 1.2f));
				}
			}
		}
	}


	// From: CodeObject4
	if (! var_1_28) {
		if (((max (var_1_26 , var_1_23)) - 25) <= var_1_24) {
			var_1_33 = (abs (var_1_34 - var_1_35));
		}
	}


	// From: CodeObject5
	if ((var_1_32 > var_1_30) && var_1_28) {
		if ((var_1_37 - (abs (var_1_38))) <= var_1_25) {
			var_1_36 = ((abs (var_1_23)) + var_1_22);
		}
	}


	// From: CodeObject6
	if (! var_1_28) {
		if ((1.5 + var_1_29) < var_1_31) {
			var_1_39 = (min (var_1_23 , var_1_26));
		}
	}


	// From: CodeObject7
	if (var_1_24 < (var_1_38 ^ var_1_37)) {
		var_1_40 = var_1_26;
	} else {
		var_1_40 = (abs (var_1_26));
	}


	// From: CodeObject8
	if (((var_1_23 | var_1_25) | var_1_36) <= var_1_26) {
		var_1_41 = (var_1_28 || (var_1_42 || var_1_43));
	}


	// From: CodeObject9
	var_1_44 = ((var_1_45 + var_1_46) - var_1_47);


	// From: CodeObject10
	if (var_1_47 >= var_1_39) {
		if ((max (var_1_33 , 7.5f)) >= 4.8) {
			var_1_48 = (abs (abs (abs (var_1_49))));
		} else {
			var_1_48 = (abs (var_1_49));
		}
	} else {
		var_1_48 = var_1_49;
	}


	// From: CodeObject11
	if (var_1_37 >= ((var_1_53 - var_1_46) << var_1_38)) {
		var_1_50 = var_1_43;
	} else {
		if (var_1_32 < (10.75 / (max (var_1_54 , var_1_55)))) {
			var_1_50 = (! (! var_1_56));
		}
	}


	// From: CodeObject12
	if ((max ((abs (var_1_49)) , var_1_26)) <= (var_1_46 / (min (var_1_37 , var_1_52)))) {
		if (-32 < var_1_49) {
			var_1_57 = ((var_1_52 < var_1_22) && ((var_1_43 && var_1_56) || (var_1_42 && var_1_58)));
		} else {
			var_1_57 = (! 0);
		}
	} else {
		if (var_1_37 <= var_1_22) {
			var_1_57 = (var_1_58 || var_1_56);
		} else {
			var_1_57 = (var_1_56 || (! var_1_43));
		}
	}


	// From: CodeObject13
	if (var_1_57) {
		var_1_59 = (min ((abs (var_1_48)) , (var_1_37 - var_1_38)));
	} else {
		if (var_1_56) {
			var_1_59 = var_1_26;
		}
	}


	// From: CodeObject14
	if (var_1_32 > var_1_29) {
		var_1_60 = (var_1_46 + (max (var_1_23 , (var_1_22 - var_1_26))));
	} else {
		if (var_1_26 < var_1_46) {
			var_1_60 = var_1_45;
		}
	}


	// From: CodeObject15
	if (var_1_50) {
		if (((abs (var_1_48)) | var_1_44) < var_1_37) {
			if (2.38 <= var_1_27) {
				var_1_61 = (max ((abs (max (var_1_30 , var_1_29))) , (min (var_1_62 , var_1_35))));
			}
		}
	}


	// From: CodeObject16
	if ((var_1_59 & var_1_40) >= var_1_51) {
		var_1_63 = (var_1_64 + var_1_65);
	} else {
		if (((7.75 + var_1_27) + (abs (var_1_66))) < (max (var_1_62 , var_1_33))) {
			var_1_63 = (min (var_1_35 , 4.75f));
		} else {
			if ((var_1_32 / var_1_55) > (var_1_62 * var_1_66)) {
				var_1_63 = (min (var_1_64 , (max (var_1_65 , var_1_35))));
			} else {
				if (var_1_51 >= ((min (var_1_44 , var_1_24)) | (min (var_1_49 , var_1_22)))) {
					var_1_63 = (max ((max (var_1_34 , var_1_62)) , (abs (var_1_64))));
				} else {
					var_1_63 = (abs (min (var_1_64 , var_1_34)));
				}
			}
		}
	}


	// From: CodeObject17
	if ((1 - (min (25 , var_1_46))) <= var_1_47) {
		if (var_1_55 <= ((max (var_1_32 , var_1_63)) / (min (var_1_54 , var_1_68)))) {
			var_1_67 = (var_1_24 - var_1_40);
		}
	}


	// From: CodeObject18
	if (var_1_56) {
		if (var_1_50) {
			var_1_69 = (abs (var_1_29));
		}
	} else {
		if (((var_1_66 / var_1_55) + var_1_62) != var_1_61) {
			var_1_69 = (min (var_1_62 , var_1_29));
		}
	}


	// From: CodeObject19
	if (((max (var_1_53 , var_1_37)) - (abs (var_1_46))) > var_1_38) {
		var_1_70 = (var_1_43 && (var_1_71 && (var_1_57 || var_1_72)));
	}


	// From: CodeObject20
	if (var_1_74 >= var_1_25) {
		var_1_73 = (abs ((min (var_1_75 , var_1_76)) - (abs (var_1_77))));
	}


	// From: CodeObject21
	if (var_1_46 == (-4 % var_1_52)) {
		var_1_78 = (abs (abs (var_1_30)));
	}


	// From: CodeObject22
	if (var_1_63 <= (var_1_34 - var_1_35)) {
		if ((var_1_74 >= var_1_24) && (var_1_45 < (var_1_49 | var_1_60))) {
			var_1_79 = var_1_37;
		}
	} else {
		var_1_79 = var_1_76;
	}


	// From: CodeObject23
	if (var_1_43) {
		var_1_80 = var_1_75;
	}


	// From: CodeObject24
	var_1_81 = var_1_52;


	// From: CodeObject25
	if (var_1_58) {
		var_1_82 = var_1_52;
	}


	// From: CodeObject26
	if (var_1_28) {
		var_1_83 = var_1_76;
	} else {
		var_1_83 = var_1_47;
	}


	// From: CodeObject27
	var_1_84 = var_1_45;


	// From: CodeObject28
	if (var_1_41) {
		var_1_85 = ((abs (abs (var_1_22))) + var_1_86);
	}


	// From: CodeObject29
	if (((max (var_1_74 , var_1_39)) ^ var_1_23) <= var_1_45) {
		if (var_1_70) {
			var_1_87 = var_1_52;
		}
	}


	// From: Req1Batch33PS_CN_250
	unsigned long int stepLocal_1 = ~ (last_1_var_1_7 | last_1_var_1_19);
	signed long int stepLocal_0 = -10 + (min (last_1_var_1_7 , last_1_var_1_11));
	if ((- last_1_var_1_19) >= stepLocal_0) {
		if (stepLocal_1 >= last_1_var_1_11) {
			var_1_1 = last_1_var_1_19;
		}
	} else {
		var_1_1 = last_1_var_1_19;
	}


	// From: Req6Batch33PS_CN_250
	var_1_14 = (((max (var_1_15 , 1)) - var_1_16) + (var_1_17 - (4 + var_1_18)));


	// From: Req5Batch33PS_CN_250
	var_1_12 = (! ((var_1_14 < var_1_14) || var_1_13));


	// From: Req3Batch33PS_CN_250
	unsigned char stepLocal_2 = (32.6 * var_1_8) >= var_1_9;
	if (stepLocal_2 && var_1_12) {
		var_1_7 = var_1_1;
	}


	// From: Req2Batch33PS_CN_250
	var_1_5 = (max (var_1_1 , var_1_14));


	// From: Req7Batch33PS_CN_250
	if (last_1_var_1_19 >= var_1_5) {
		if ((var_1_17 + (- 256u)) >= (var_1_14 % (abs (500u)))) {
			if (last_1_var_1_19 >= ((max (var_1_15 , var_1_1)) / (min (var_1_20 , var_1_21)))) {
				var_1_19 = var_1_17;
			} else {
				var_1_19 = var_1_7;
			}
		} else {
			var_1_19 = var_1_16;
		}
	} else {
		var_1_19 = var_1_18;
	}


	// From: Req4Batch33PS_CN_250
	if (! (! (var_1_19 == var_1_19))) {
		var_1_11 = ((max (0 , var_1_7)) + 100);
	}
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 31);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -128);
	assume_abort_if_not(var_1_20 <= 127);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -128);
	assume_abort_if_not(var_1_21 <= 127);
	assume_abort_if_not(var_1_21 != 0);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65535);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854765600e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	assume_abort_if_not(var_1_32 != 0.0F);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 32767);
	assume_abort_if_not(var_1_37 <= 65535);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 32767);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 16383);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 16383);
	var_1_47 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 32766);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -126);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -128);
	assume_abort_if_not(var_1_51 <= 127);
	assume_abort_if_not(var_1_51 != 0);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -128);
	assume_abort_if_not(var_1_52 <= 127);
	assume_abort_if_not(var_1_52 != 0);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 32767);
	assume_abort_if_not(var_1_53 <= 65535);
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= -922337.2036854776000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
	assume_abort_if_not(var_1_54 != 0.0F);
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= -922337.2036854776000e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854776000e+12F && var_1_55 >= 1.0e-20F ));
	assume_abort_if_not(var_1_55 != 0.0F);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 0);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 0);
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= -922337.2036854765600e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= -461168.6018427382800e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427382800e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= -461168.6018427382800e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 4611686.018427382800e+12F && var_1_65 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= -922337.2036854776000e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854776000e+12F && var_1_66 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= -922337.2036854776000e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854776000e+12F && var_1_68 >= 1.0e-20F ));
	assume_abort_if_not(var_1_68 != 0.0F);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 1);
	assume_abort_if_not(var_1_71 <= 1);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 1);
	assume_abort_if_not(var_1_72 <= 1);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 255);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 127);
	assume_abort_if_not(var_1_75 <= 254);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 127);
	assume_abort_if_not(var_1_76 <= 254);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 127);
	var_1_86 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_19 = var_1_19;
}

int property() {
	return ((((((((- last_1_var_1_19) >= (-10 + (min (last_1_var_1_7 , last_1_var_1_11)))) ? (((~ (last_1_var_1_7 | last_1_var_1_19)) >= last_1_var_1_11) ? (var_1_1 == ((unsigned short int) last_1_var_1_19)) : 1) : (var_1_1 == ((unsigned short int) last_1_var_1_19))) && (var_1_5 == ((signed short int) (max (var_1_1 , var_1_14))))) && ((((32.6 * var_1_8) >= var_1_9) && var_1_12) ? (var_1_7 == ((unsigned short int) var_1_1)) : 1)) && ((! (! (var_1_19 == var_1_19))) ? (var_1_11 == ((signed short int) ((max (0 , var_1_7)) + 100))) : 1)) && (var_1_12 == ((unsigned char) (! ((var_1_14 < var_1_14) || var_1_13))))) && (var_1_14 == ((signed char) (((max (var_1_15 , 1)) - var_1_16) + (var_1_17 - (4 + var_1_18)))))) && ((last_1_var_1_19 >= var_1_5) ? (((var_1_17 + (- 256u)) >= (var_1_14 % (abs (500u)))) ? ((last_1_var_1_19 >= ((max (var_1_15 , var_1_1)) / (min (var_1_20 , var_1_21)))) ? (var_1_19 == ((unsigned long int) var_1_17)) : (var_1_19 == ((unsigned long int) var_1_7))) : (var_1_19 == ((unsigned long int) var_1_16))) : (var_1_19 == ((unsigned long int) var_1_18)))
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
