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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch65PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 4;
unsigned short int var_1_8 = 64;
unsigned short int var_1_11 = 256;
unsigned short int var_1_12 = 0;
unsigned short int var_1_13 = 64;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
signed char var_1_16 = 50;
signed char var_1_19 = -100;
double var_1_20 = 100000000.8;
double var_1_21 = 15.125;
double var_1_22 = 99.22;
signed long int var_1_23 = -16;
unsigned char var_1_24 = 1;
signed char var_1_25 = 10;
signed char var_1_26 = 16;
unsigned char var_1_27 = 0;
double var_1_28 = 5.5;
signed long int var_1_29 = 50;
unsigned short int var_1_30 = 16;
unsigned char var_1_31 = 0;
signed long int var_1_32 = -16;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
double var_1_35 = 25.75;
float var_1_36 = 7.85;
float var_1_37 = 63.36;
float var_1_38 = -0.7;
double var_1_39 = 2.8;
double var_1_40 = 8.375;
signed long int var_1_41 = -10;
signed long int var_1_42 = -4;
signed long int var_1_43 = 16;
unsigned short int var_1_44 = 256;
unsigned short int var_1_45 = 128;
double var_1_46 = 63.125;
signed char var_1_47 = -2;
signed char var_1_48 = 100;
signed char var_1_49 = -64;
signed long int var_1_50 = 2;
signed long int var_1_51 = 2143688777;
double var_1_52 = -0.5;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 128;
unsigned char var_1_55 = 128;
unsigned char var_1_56 = 5;
unsigned short int var_1_57 = 5;
unsigned short int var_1_58 = 5;
signed char var_1_59 = -10;
signed char var_1_60 = -4;
unsigned char var_1_61 = 5;
unsigned char var_1_62 = 100;
signed short int var_1_63 = -10000;
signed char var_1_64 = 0;
signed short int var_1_65 = -32;
double var_1_66 = 10.25;
signed char var_1_67 = -32;
signed char var_1_68 = 0;
signed char var_1_69 = -1;
float var_1_70 = 200.4;
float var_1_71 = 2.2;
float var_1_72 = 127.2;
float var_1_73 = 2.8;
signed char var_1_74 = 5;
unsigned char var_1_75 = 128;
unsigned short int var_1_76 = 2;
unsigned short int var_1_77 = 43860;
unsigned short int var_1_78 = 28346;
unsigned short int var_1_79 = 200;
signed short int var_1_80 = 128;
unsigned long int var_1_81 = 128;
float var_1_82 = 31.5;
unsigned long int var_1_83 = 1;
float var_1_84 = 4.4;
unsigned short int var_1_85 = 0;
signed short int var_1_86 = 256;
signed short int var_1_87 = -4;
float var_1_88 = 16.25;
float var_1_89 = 1.25;
double var_1_90 = 64.375;
double var_1_91 = 63.3;
unsigned short int var_1_92 = 128;
float var_1_93 = 50.75;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 4;
unsigned char last_1_var_1_14 = 1;
signed char last_1_var_1_16 = 50;
signed long int last_1_var_1_23 = -16;
unsigned char last_1_var_1_24 = 1;
double last_1_var_1_28 = 5.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_30 <= (- 256)) {
		var_1_29 = var_1_30;
	}


	// From: CodeObject2
	if (((~ var_1_30) * (var_1_29 | 32)) > var_1_32) {
		if (! var_1_33) {
			var_1_31 = (var_1_33 || var_1_34);
		}
	} else {
		var_1_31 = var_1_34;
	}


	// From: CodeObject3
	if (((var_1_36 + var_1_37) >= var_1_38) && var_1_31) {
		if (var_1_34) {
			var_1_35 = (max ((3.35 - var_1_39) , var_1_40));
		}
	}


	// From: CodeObject4
	if (var_1_36 >= var_1_38) {
		var_1_41 = (var_1_30 - (abs (var_1_42)));
	} else {
		var_1_41 = (var_1_30 - var_1_43);
	}


	// From: CodeObject5
	if (((var_1_37 + var_1_40) < var_1_38) && (var_1_35 > var_1_39)) {
		var_1_44 = (abs (abs (var_1_45)));
	} else {
		if (var_1_46 == var_1_36) {
			var_1_44 = (abs (max (var_1_45 , 4)));
		}
	}


	// From: CodeObject6
	if ((~ var_1_44) <= var_1_42) {
		var_1_47 = (min (var_1_48 , var_1_49));
	}


	// From: CodeObject7
	if (var_1_44 > var_1_30) {
		var_1_50 = ((var_1_51 - var_1_44) - 500);
	} else {
		var_1_50 = (abs (var_1_30 - var_1_44));
	}


	// From: CodeObject8
	if ((var_1_41 % var_1_51) < (var_1_47 & (256 ^ var_1_45))) {
		var_1_52 = 4.6;
	} else {
		var_1_52 = (min (var_1_40 , var_1_39));
	}


	// From: CodeObject9
	if (var_1_34) {
		if (var_1_51 > (var_1_44 * var_1_47)) {
			var_1_53 = ((max (var_1_54 , var_1_55)) - (abs (var_1_56)));
		} else {
			var_1_53 = (max (var_1_56 , var_1_54));
		}
	} else {
		var_1_53 = var_1_55;
	}


	// From: CodeObject10
	if ((var_1_55 - var_1_54) > var_1_29) {
		if (var_1_33) {
			if (! var_1_31) {
				if (var_1_31) {
					var_1_57 = (abs (var_1_58));
				}
			}
		}
	}


	// From: CodeObject11
	if (var_1_47 >= (min (var_1_43 , (max (-1 , var_1_32))))) {
		var_1_59 = (abs (abs (var_1_60 + 32)));
	}


	// From: CodeObject12
	if (var_1_52 > (max (var_1_39 , var_1_37))) {
		if (var_1_33) {
			var_1_61 = var_1_56;
		}
	} else {
		var_1_61 = var_1_62;
	}


	// From: CodeObject13
	if ((var_1_58 | var_1_43) < (var_1_61 / var_1_51)) {
		var_1_63 = (abs (var_1_47));
	}


	// From: CodeObject14
	if (var_1_51 <= (abs (var_1_58))) {
		var_1_64 = var_1_49;
	} else {
		if (var_1_34) {
			var_1_64 = var_1_48;
		}
	}


	// From: CodeObject15
	if (! ((var_1_53 >= var_1_56) && (var_1_45 <= var_1_32))) {
		var_1_65 = (abs (var_1_47));
	}


	// From: CodeObject16
	if (var_1_61 >= var_1_57) {
		var_1_66 = var_1_39;
	}


	// From: CodeObject17
	if (var_1_33) {
		var_1_67 = (abs (var_1_60));
	} else {
		var_1_67 = ((abs (abs (var_1_60))) + (max (var_1_68 , (max (var_1_69 , -2)))));
	}


	// From: CodeObject18
	if (var_1_42 == var_1_64) {
		var_1_70 = (min ((abs (abs (var_1_40))) , (max ((min (var_1_39 , var_1_71)) , (var_1_72 - var_1_73)))));
	} else {
		var_1_70 = var_1_73;
	}


	// From: CodeObject19
	var_1_74 = (min (var_1_60 , (abs (8))));


	// From: CodeObject20
	if (var_1_33 && var_1_31) {
		var_1_75 = (max (var_1_62 , var_1_56));
	}


	// From: CodeObject21
	if ((abs (var_1_65)) <= var_1_51) {
		var_1_76 = (abs (var_1_56));
	} else {
		if (var_1_70 > var_1_73) {
			if (var_1_73 < (abs (var_1_35))) {
				var_1_76 = (min ((max ((min (8 , var_1_53)) , 32)) , 8));
			} else {
				var_1_76 = (var_1_77 - (max (var_1_61 , (var_1_78 - var_1_56))));
			}
		}
	}


	// From: CodeObject22
	if (var_1_34) {
		var_1_79 = (abs (2 + (max (var_1_78 , var_1_54))));
	}


	// From: CodeObject23
	if (var_1_34) {
		var_1_80 = (max (var_1_61 , var_1_54));
	} else {
		if (var_1_56 > 0) {
			var_1_80 = (max (var_1_54 , var_1_62));
		}
	}


	// From: CodeObject24
	if (var_1_37 >= ((var_1_82 + 2.6f) - var_1_73)) {
		if (15.5 == var_1_40) {
			if (var_1_36 <= var_1_73) {
				var_1_81 = ((max (var_1_51 , var_1_57)) + (abs (var_1_78)));
			}
		} else {
			var_1_81 = 0u;
		}
	} else {
		var_1_81 = (var_1_75 + 25u);
	}


	// From: CodeObject25
	if ((max (var_1_69 , var_1_74)) > (max ((max (var_1_67 , var_1_78)) , var_1_60))) {
		var_1_83 = (abs (var_1_62));
	}


	// From: CodeObject26
	if ((var_1_67 | var_1_69) <= (var_1_76 ^ (var_1_49 % var_1_54))) {
		var_1_84 = (max ((var_1_72 - (min (var_1_39 , var_1_82))) , var_1_40));
	}


	// From: CodeObject27
	if (var_1_33) {
		var_1_85 = ((min (var_1_62 , var_1_53)) + (abs (abs (var_1_61))));
	} else {
		var_1_85 = ((var_1_78 - (abs (var_1_55))) + (20351 - (abs (var_1_75))));
	}


	// From: CodeObject28
	if (var_1_31) {
		if (var_1_30 == (var_1_77 - var_1_62)) {
			var_1_86 = (var_1_87 + var_1_48);
		}
	}


	// From: CodeObject29
	if (var_1_67 >= (var_1_29 % 16)) {
		var_1_88 = (abs (abs (var_1_40)));
	}


	// From: CodeObject30
	if (var_1_34) {
		var_1_89 = (max ((abs (var_1_40)) , var_1_82));
	} else {
		if (var_1_33) {
			var_1_89 = var_1_39;
		}
	}


	// From: CodeObject31
	var_1_90 = var_1_39;


	// From: CodeObject32
	if (var_1_34) {
		var_1_91 = var_1_39;
	} else {
		var_1_91 = var_1_82;
	}


	// From: CodeObject33
	if (var_1_31) {
		var_1_92 = (min (var_1_45 , var_1_78));
	}


	// From: CodeObject34
	if (var_1_55 <= var_1_86) {
		var_1_93 = (abs (var_1_82));
	} else {
		if ((abs (var_1_88)) <= var_1_70) {
			var_1_93 = 1.000000000000008E14f;
		} else {
			var_1_93 = var_1_71;
		}
	}


	// From: Req4Batch65PS_CN_250
	signed long int stepLocal_3 = last_1_var_1_23;
	unsigned char stepLocal_2 = ! (last_1_var_1_14 || last_1_var_1_14);
	if (last_1_var_1_23 < stepLocal_3) {
		if (stepLocal_2 && last_1_var_1_24) {
			if ((max (2.75f , (min (last_1_var_1_28 , 999999.95f)))) != last_1_var_1_28) {
				var_1_16 = 10;
			} else {
				var_1_16 = var_1_19;
			}
		} else {
			var_1_16 = var_1_19;
		}
	} else {
		var_1_16 = 100;
	}


	// From: Req6Batch65PS_CN_250
	if (((max (last_1_var_1_1 , last_1_var_1_16)) | last_1_var_1_16) >= last_1_var_1_23) {
		var_1_23 = (5 - var_1_12);
	} else {
		var_1_23 = (max (var_1_11 , last_1_var_1_1));
	}


	// From: Req5Batch65PS_CN_250
	var_1_20 = (var_1_21 - (var_1_22 + 1.5));


	// From: Req8Batch65PS_CN_250
	var_1_28 = var_1_21;


	// From: Req1Batch65PS_CN_250
	unsigned char stepLocal_0 = var_1_23 > 4;
	if ((var_1_23 <= var_1_23) || stepLocal_0) {
		var_1_1 = (max ((var_1_16 + (var_1_16 + var_1_16)) , -100));
	} else {
		var_1_1 = var_1_16;
	}


	// From: Req7Batch65PS_CN_250
	var_1_24 = ((var_1_1 <= (var_1_25 - var_1_26)) && var_1_27);


	// From: Req3Batch65PS_CN_250
	signed char stepLocal_1 = var_1_16;
	if (stepLocal_1 > (var_1_23 + (var_1_16 ^ var_1_16))) {
		var_1_14 = (var_1_24 || var_1_15);
	}


	// From: Req2Batch65PS_CN_250
	if (var_1_14) {
		if (var_1_24) {
			var_1_8 = (max ((var_1_11 + var_1_12) , var_1_13));
		}
	}
}



void updateVariables() {
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -127);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 65535);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854765600e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -2147483646);
	assume_abort_if_not(var_1_42 <= 2147483646);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 2147483646);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -127);
	assume_abort_if_not(var_1_48 <= 126);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -127);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_51 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_51 >= 1073741822);
	assume_abort_if_not(var_1_51 <= 2147483646);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 127);
	assume_abort_if_not(var_1_54 <= 254);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 127);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 65534);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= -63);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 254);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= -63);
	assume_abort_if_not(var_1_68 <= 63);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= -63);
	assume_abort_if_not(var_1_69 <= 63);
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= -922337.2036854765600e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854765600e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854765600e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854765600e+12F && var_1_73 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_77 >= 32767);
	assume_abort_if_not(var_1_77 <= 65534);
	var_1_78 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_78 >= 16383);
	assume_abort_if_not(var_1_78 <= 32767);
	var_1_82 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_82 >= 0.0F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 4611686.018427387900e+12F && var_1_82 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_87 >= -16383);
	assume_abort_if_not(var_1_87 <= 16383);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_28 = var_1_28;
}

int property() {
	return (((((((((var_1_23 <= var_1_23) || (var_1_23 > 4)) ? (var_1_1 == ((signed short int) (max ((var_1_16 + (var_1_16 + var_1_16)) , -100)))) : (var_1_1 == ((signed short int) var_1_16))) && (var_1_14 ? (var_1_24 ? (var_1_8 == ((unsigned short int) (max ((var_1_11 + var_1_12) , var_1_13)))) : 1) : 1)) && ((var_1_16 > (var_1_23 + (var_1_16 ^ var_1_16))) ? (var_1_14 == ((unsigned char) (var_1_24 || var_1_15))) : 1)) && ((last_1_var_1_23 < last_1_var_1_23) ? (((! (last_1_var_1_14 || last_1_var_1_14)) && last_1_var_1_24) ? (((max (2.75f , (min (last_1_var_1_28 , 999999.95f)))) != last_1_var_1_28) ? (var_1_16 == ((signed char) 10)) : (var_1_16 == ((signed char) var_1_19))) : (var_1_16 == ((signed char) var_1_19))) : (var_1_16 == ((signed char) 100)))) && (var_1_20 == ((double) (var_1_21 - (var_1_22 + 1.5))))) && ((((max (last_1_var_1_1 , last_1_var_1_16)) | last_1_var_1_16) >= last_1_var_1_23) ? (var_1_23 == ((signed long int) (5 - var_1_12))) : (var_1_23 == ((signed long int) (max (var_1_11 , last_1_var_1_1)))))) && (var_1_24 == ((unsigned char) ((var_1_1 <= (var_1_25 - var_1_26)) && var_1_27)))) && (var_1_28 == ((double) var_1_21))
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
