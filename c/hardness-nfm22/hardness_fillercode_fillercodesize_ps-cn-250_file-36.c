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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch36PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 8.75;
unsigned char var_1_2 = 1;
double var_1_3 = 9.6;
double var_1_4 = 7.625;
double var_1_5 = 1.5;
double var_1_6 = 63.17;
double var_1_7 = 15.5;
unsigned short int var_1_8 = 4;
unsigned short int var_1_9 = 45624;
unsigned short int var_1_10 = 39447;
unsigned short int var_1_11 = 10;
double var_1_12 = 255.5;
double var_1_13 = 0.0;
double var_1_14 = 127.5;
float var_1_15 = 8.2;
float var_1_16 = 2.8;
signed short int var_1_17 = 8;
double var_1_18 = 24.8;
signed short int var_1_19 = -256;
signed short int var_1_20 = 8;
signed short int var_1_21 = 16;
unsigned short int var_1_22 = 2;
unsigned short int var_1_24 = 16;
unsigned char var_1_25 = 0;
unsigned short int var_1_26 = 1;
unsigned long int var_1_27 = 10;
signed char var_1_28 = -50;
unsigned short int var_1_29 = 8;
unsigned short int var_1_30 = 32;
unsigned short int var_1_31 = 49701;
unsigned char var_1_32 = 32;
unsigned char var_1_33 = 25;
unsigned char var_1_34 = 0;
signed short int var_1_35 = 50;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 1;
unsigned long int var_1_40 = 8;
unsigned long int var_1_41 = 64;
float var_1_42 = 999999.9;
float var_1_43 = 10000.5;
float var_1_44 = 127.2;
unsigned short int var_1_45 = 25;
unsigned short int var_1_46 = 4;
signed char var_1_47 = 8;
signed char var_1_48 = 0;
signed char var_1_49 = -32;
signed char var_1_50 = 25;
signed short int var_1_51 = -256;
unsigned char var_1_52 = 10;
unsigned char var_1_53 = 128;
unsigned char var_1_54 = 64;
signed short int var_1_55 = 5;
unsigned char var_1_56 = 4;
signed char var_1_57 = 0;
signed char var_1_58 = 0;
unsigned char var_1_59 = 200;
unsigned char var_1_60 = 128;
unsigned char var_1_61 = 128;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 1;
float var_1_65 = 32.2;
unsigned char var_1_66 = 4;
unsigned char var_1_67 = 32;
signed char var_1_68 = -100;
unsigned char var_1_69 = 200;
unsigned char var_1_70 = 50;
unsigned char var_1_71 = 50;
signed long int var_1_72 = -32;
signed char var_1_73 = -2;
float var_1_74 = 200.5;
unsigned char var_1_75 = 1;
unsigned char var_1_76 = 0;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 1;
double var_1_79 = 32.25;
double var_1_80 = 10.5;
unsigned char var_1_81 = 32;
float var_1_82 = 64.75;
unsigned short int var_1_83 = 16;
unsigned short int var_1_84 = 17432;
unsigned char var_1_85 = 2;
unsigned long int var_1_86 = 8;
double var_1_87 = 5.55;
float var_1_88 = 127.2;
float var_1_89 = 63.35;
float var_1_90 = 0.5;
float var_1_91 = 32.6;
unsigned long int var_1_92 = 64;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_22 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((128u < var_1_27) || (var_1_28 <= -1)) {
		var_1_26 = (var_1_29 + var_1_30);
	} else {
		if (var_1_27 <= 0u) {
			var_1_26 = (abs (var_1_31 - var_1_29));
		} else {
			var_1_26 = var_1_31;
		}
	}


	// From: CodeObject2
	if (var_1_27 > 2u) {
		var_1_32 = (abs (var_1_33 + (64 - var_1_34)));
	}


	// From: CodeObject3
	if (var_1_34 < ((var_1_30 | var_1_26) >> var_1_31)) {
		var_1_35 = (var_1_34 - var_1_32);
	}


	// From: CodeObject4
	if (var_1_29 <= var_1_30) {
		if (1 <= var_1_30) {
			var_1_36 = (! var_1_37);
		} else {
			var_1_36 = (var_1_37 || var_1_38);
		}
	} else {
		if ((abs (var_1_31)) <= ((var_1_27 | var_1_35) >> var_1_33)) {
			var_1_36 = ((var_1_27 <= var_1_33) || var_1_39);
		}
	}


	// From: CodeObject5
	if (var_1_37) {
		var_1_40 = (min (((abs (128u)) + var_1_30) , (max (var_1_32 , (500u + var_1_26)))));
	}


	// From: CodeObject6
	if (var_1_33 >= var_1_28) {
		var_1_41 = (abs (var_1_26));
	}


	// From: CodeObject7
	if (var_1_37) {
		var_1_42 = (min (var_1_43 , var_1_44));
	}


	// From: CodeObject8
	if ((var_1_32 % var_1_31) <= var_1_28) {
		var_1_45 = ((var_1_34 + var_1_33) + (max (var_1_30 , (var_1_32 + var_1_46))));
	}


	// From: CodeObject9
	if (var_1_28 > var_1_34) {
		if (var_1_29 < var_1_45) {
			var_1_47 = ((var_1_34 + var_1_48) - ((abs (var_1_49)) + var_1_50));
		}
	} else {
		if (var_1_45 >= var_1_31) {
			if ((var_1_46 % var_1_51) >= (abs (var_1_35))) {
				var_1_47 = var_1_49;
			} else {
				var_1_47 = var_1_34;
			}
		} else {
			var_1_47 = var_1_49;
		}
	}


	// From: CodeObject10
	if (var_1_47 > var_1_30) {
		var_1_52 = (max ((abs (var_1_34)) , var_1_50));
	} else {
		var_1_52 = (var_1_53 - (abs (var_1_54 - var_1_50)));
	}


	// From: CodeObject11
	if ((var_1_48 - var_1_50) < var_1_41) {
		if ((min ((abs (1)) , var_1_34)) <= 16) {
			var_1_55 = (min (var_1_48 , (abs (abs (var_1_28)))));
		} else {
			var_1_55 = var_1_33;
		}
	}


	// From: CodeObject12
	if ((var_1_54 << (max (var_1_57 , var_1_58))) >= var_1_55) {
		if (var_1_38) {
			var_1_56 = (((abs (var_1_59)) - var_1_34) - (var_1_50 + var_1_58));
		} else {
			var_1_56 = ((max ((min (var_1_53 , var_1_59)) , (min (var_1_60 , var_1_61)))) - ((abs (var_1_54)) - var_1_48));
		}
	} else {
		if (var_1_62 && var_1_36) {
			var_1_56 = (min (var_1_33 , 10));
		} else {
			var_1_56 = (abs (var_1_53));
		}
	}


	// From: CodeObject13
	if ((var_1_34 ^ var_1_50) >= var_1_57) {
		if ((- var_1_44) <= var_1_42) {
			if (! var_1_64) {
				var_1_63 = var_1_39;
			}
		}
	} else {
		var_1_63 = var_1_39;
	}


	// From: CodeObject14
	var_1_65 = (min (var_1_43 , var_1_44));


	// From: CodeObject15
	if (var_1_26 < var_1_50) {
		var_1_66 = (min (var_1_50 , var_1_48));
	}


	// From: CodeObject16
	var_1_67 = (min (((abs (var_1_60)) - (abs (var_1_33))) , var_1_54));


	// From: CodeObject17
	if ((! (var_1_42 < var_1_43)) || var_1_63) {
		var_1_68 = (min ((max (var_1_49 , var_1_34)) , (max (var_1_50 , var_1_59))));
	}


	// From: CodeObject18
	if ((abs (var_1_27 | 10000)) == var_1_61) {
		if (var_1_54 < var_1_35) {
			if ((var_1_31 - var_1_53) == var_1_48) {
				if (((var_1_29 << var_1_46) * var_1_33) >= (~ var_1_51)) {
					var_1_69 = (min (var_1_34 , (var_1_57 + var_1_33)));
				} else {
					var_1_69 = (max ((min (var_1_58 , var_1_48)) , var_1_61));
				}
			} else {
				if (var_1_47 >= -16) {
					var_1_69 = (max (var_1_50 , (min (var_1_34 , var_1_57))));
				}
			}
		}
	} else {
		if ((var_1_31 & var_1_48) >= (var_1_67 >> var_1_34)) {
			var_1_69 = (((var_1_70 + var_1_71) - var_1_48) + var_1_34);
		}
	}


	// From: CodeObject19
	if ((~ (var_1_58 << var_1_57)) >= 64) {
		var_1_72 = var_1_32;
	}


	// From: CodeObject20
	var_1_73 = ((min (var_1_34 , var_1_71)) - (abs (var_1_58)));


	// From: CodeObject21
	if (var_1_56 < var_1_72) {
		var_1_74 = (max (var_1_44 , (abs (var_1_43))));
	}


	// From: CodeObject22
	if (var_1_36) {
		var_1_75 = (var_1_38 || (! 0));
	} else {
		var_1_75 = (var_1_64 && (var_1_76 || var_1_77));
	}


	// From: CodeObject23
	if (var_1_77) {
		if ((min (8.5 , var_1_65)) != (var_1_79 - var_1_80)) {
			var_1_78 = (var_1_37 && (! var_1_76));
		}
	} else {
		var_1_78 = (! var_1_37);
	}


	// From: CodeObject24
	if ((var_1_65 + (var_1_43 / var_1_82)) <= (abs (var_1_80))) {
		if (var_1_37) {
			var_1_81 = (var_1_50 + var_1_48);
		}
	} else {
		var_1_81 = (abs (var_1_33));
	}


	// From: CodeObject25
	if (var_1_72 <= (var_1_67 - var_1_30)) {
		var_1_83 = ((var_1_84 - var_1_54) + var_1_56);
	}


	// From: CodeObject26
	if (var_1_39) {
		var_1_85 = var_1_53;
	}


	// From: CodeObject27
	if (var_1_38) {
		var_1_86 = var_1_70;
	} else {
		var_1_86 = var_1_85;
	}


	// From: CodeObject28
	if (var_1_63) {
		var_1_87 = var_1_44;
	}


	// From: CodeObject29
	if (! var_1_37) {
		var_1_88 = (((min (256.5f , var_1_89)) - var_1_90) + var_1_91);
	}


	// From: CodeObject30
	var_1_92 = (abs (max (var_1_26 , (abs (var_1_60)))));


	// From: Req1Batch36PS_CN_250
	if (var_1_2) {
		var_1_1 = (min ((max ((var_1_3 - var_1_4) , (min (var_1_5 , var_1_6)))) , var_1_7));
	}


	// From: Req2Batch36PS_CN_250
	var_1_8 = ((min (var_1_9 , var_1_10)) - var_1_11);


	// From: Req3Batch36PS_CN_250
	if (var_1_2) {
		var_1_12 = (min ((var_1_3 - (var_1_13 - 128.68)) , var_1_7));
	}


	// From: Req4Batch36PS_CN_250
	var_1_14 = var_1_6;


	// From: Req5Batch36PS_CN_250
	if (var_1_13 >= var_1_14) {
		if (var_1_2) {
			if (var_1_8 == var_1_11) {
				var_1_15 = 10.975f;
			}
		}
	}


	// From: Req6Batch36PS_CN_250
	if (var_1_3 <= var_1_4) {
		var_1_16 = (min (var_1_6 , var_1_4));
	}


	// From: Req7Batch36PS_CN_250
	unsigned short int stepLocal_0 = var_1_11;
	if (var_1_7 >= (var_1_5 / (min (var_1_13 , var_1_18)))) {
		if ((var_1_10 + var_1_9) <= stepLocal_0) {
			if (var_1_2) {
				var_1_17 = var_1_19;
			}
		} else {
			var_1_17 = (var_1_20 - (abs (var_1_21)));
		}
	} else {
		var_1_17 = var_1_21;
	}


	// From: Req8Batch36PS_CN_250
	if ((var_1_11 + var_1_20) <= ((var_1_21 * last_1_var_1_22) * var_1_19)) {
		var_1_22 = (max ((var_1_9 - var_1_11) , var_1_10));
	}


	// From: Req9Batch36PS_CN_250
	if (var_1_9 < var_1_11) {
		if (var_1_2 || var_1_25) {
			var_1_24 = 128;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854765600e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 4611686.018427382800e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	assume_abort_if_not(var_1_18 != 0.0F);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -32767);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -32766);
	assume_abort_if_not(var_1_21 <= 32766);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -128);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 32767);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -922337.2036854765600e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -922337.2036854765600e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 16383);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 63);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -63);
	assume_abort_if_not(var_1_49 <= 63);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 63);
	var_1_51 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_51 >= -32768);
	assume_abort_if_not(var_1_51 <= 32767);
	assume_abort_if_not(var_1_51 != 0);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 127);
	assume_abort_if_not(var_1_53 <= 254);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 63);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 1);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 1);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 190);
	assume_abort_if_not(var_1_59 <= 254);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 127);
	assume_abort_if_not(var_1_60 <= 254);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 127);
	assume_abort_if_not(var_1_61 <= 254);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 1);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 1);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 31);
	assume_abort_if_not(var_1_70 <= 64);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 32);
	assume_abort_if_not(var_1_71 <= 63);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 0);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 0);
	var_1_79 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_79 >= 0.0F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 9223372.036854776000e+12F && var_1_79 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854776000e+12F && var_1_80 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_82 >= -922337.2036854776000e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 9223372.036854776000e+12F && var_1_82 >= 1.0e-20F ));
	assume_abort_if_not(var_1_82 != 0.0F);
	var_1_84 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_84 >= 16383);
	assume_abort_if_not(var_1_84 <= 32767);
	var_1_89 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_89 >= 0.0F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 4611686.018427382800e+12F && var_1_89 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_90 >= 0.0F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 4611686.018427382800e+12F && var_1_90 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_91 >= -461168.6018427382800e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 4611686.018427382800e+12F && var_1_91 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_22 = var_1_22;
}

int property() {
	return ((((((((var_1_2 ? (var_1_1 == ((double) (min ((max ((var_1_3 - var_1_4) , (min (var_1_5 , var_1_6)))) , var_1_7)))) : 1) && (var_1_8 == ((unsigned short int) ((min (var_1_9 , var_1_10)) - var_1_11)))) && (var_1_2 ? (var_1_12 == ((double) (min ((var_1_3 - (var_1_13 - 128.68)) , var_1_7)))) : 1)) && (var_1_14 == ((double) var_1_6))) && ((var_1_13 >= var_1_14) ? (var_1_2 ? ((var_1_8 == var_1_11) ? (var_1_15 == ((float) 10.975f)) : 1) : 1) : 1)) && ((var_1_3 <= var_1_4) ? (var_1_16 == ((float) (min (var_1_6 , var_1_4)))) : 1)) && ((var_1_7 >= (var_1_5 / (min (var_1_13 , var_1_18)))) ? (((var_1_10 + var_1_9) <= var_1_11) ? (var_1_2 ? (var_1_17 == ((signed short int) var_1_19)) : 1) : (var_1_17 == ((signed short int) (var_1_20 - (abs (var_1_21)))))) : (var_1_17 == ((signed short int) var_1_21)))) && (((var_1_11 + var_1_20) <= ((var_1_21 * last_1_var_1_22) * var_1_19)) ? (var_1_22 == ((unsigned short int) (max ((var_1_9 - var_1_11) , var_1_10)))) : 1)) && ((var_1_9 < var_1_11) ? ((var_1_2 || var_1_25) ? (var_1_24 == ((unsigned short int) 128)) : 1) : 1)
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
