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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch57PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 5;
signed char var_1_2 = -1;
signed char var_1_3 = 10;
signed long int var_1_5 = 5;
unsigned char var_1_6 = 0;
double var_1_7 = 24.8;
double var_1_8 = 500.5;
double var_1_9 = 2.4;
double var_1_10 = 0.4;
double var_1_11 = 255.8;
double var_1_12 = 50.75;
unsigned char var_1_13 = 4;
unsigned char var_1_14 = 200;
unsigned char var_1_15 = 25;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 32;
unsigned char var_1_19 = 32;
unsigned long int var_1_20 = 1;
float var_1_21 = 9999999999.2;
double var_1_23 = 10.875;
unsigned char var_1_24 = 0;
signed char var_1_25 = 64;
signed char var_1_26 = -32;
signed long int var_1_27 = 4;
unsigned char var_1_28 = 0;
unsigned long int var_1_29 = 2566817213;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
signed short int var_1_34 = -64;
float var_1_35 = 1.8;
signed short int var_1_36 = -16;
unsigned char var_1_37 = 32;
unsigned char var_1_38 = 50;
unsigned char var_1_39 = 50;
signed long int var_1_40 = -8;
float var_1_41 = 0.875;
double var_1_42 = 10.8;
double var_1_43 = 15.5;
float var_1_44 = 255.5;
float var_1_45 = 0.75;
float var_1_46 = 1.7;
unsigned char var_1_47 = 25;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 8;
unsigned char var_1_50 = 128;
unsigned char var_1_51 = 16;
unsigned short int var_1_52 = 256;
unsigned short int var_1_53 = 5;
float var_1_54 = 32.75;
float var_1_55 = 10.4;
float var_1_56 = 15.7;
float var_1_57 = 999999999999.6;
signed short int var_1_58 = 16;
signed char var_1_59 = -100;
unsigned short int var_1_60 = 4;
unsigned short int var_1_61 = 60776;
signed char var_1_62 = -2;
signed char var_1_63 = 32;
unsigned char var_1_64 = 32;
unsigned char var_1_65 = 128;
unsigned char var_1_66 = 50;
unsigned char var_1_67 = 64;
double var_1_68 = 10.5;
signed long int var_1_69 = 2;
signed char var_1_70 = -64;
signed char var_1_71 = 1;
signed short int var_1_72 = 16;
signed short int var_1_73 = 27063;
unsigned short int var_1_74 = 8;
signed short int var_1_75 = 5;
signed long int var_1_76 = -128;
unsigned char var_1_77 = 16;
unsigned char var_1_78 = 100;
unsigned char var_1_79 = 100;
unsigned char var_1_80 = 100;
signed char var_1_81 = 100;
signed long int var_1_82 = 1;
signed char var_1_83 = 4;
signed char var_1_84 = 8;
unsigned char var_1_85 = 1;
unsigned char var_1_86 = 1;
signed short int var_1_87 = -5;
unsigned short int var_1_88 = 64;
unsigned short int var_1_89 = 1;
double var_1_90 = 32.25;
signed char var_1_91 = -1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (((var_1_25 * var_1_26) <= var_1_27) || var_1_28) {
		if ((var_1_29 - 256u) < var_1_27) {
			var_1_24 = (! var_1_30);
		}
	} else {
		var_1_24 = ((var_1_30 || (var_1_31 || var_1_32)) || var_1_33);
	}


	// From: CodeObject2
	if ((- var_1_35) <= (- 32.25f)) {
		var_1_34 = (max (var_1_36 , (abs (var_1_26))));
	}


	// From: CodeObject3
	if (var_1_31) {
		var_1_37 = (max (var_1_38 , var_1_39));
	}


	// From: CodeObject4
	if (var_1_34 < var_1_38) {
		var_1_40 = (abs (var_1_37));
	}


	// From: CodeObject5
	if ((var_1_35 / (min (24.125 , var_1_42))) < var_1_43) {
		if ((abs (var_1_39)) > var_1_38) {
			var_1_41 = ((min ((abs (var_1_44)) , var_1_45)) + var_1_46);
		}
	} else {
		if (var_1_46 <= var_1_44) {
			if (var_1_45 >= var_1_44) {
				var_1_41 = (abs (min (var_1_44 , var_1_46)));
			}
		} else {
			var_1_41 = var_1_45;
		}
	}


	// From: CodeObject6
	if (var_1_31) {
		if (var_1_44 <= (min (var_1_42 , (- var_1_45)))) {
			var_1_47 = (var_1_48 + var_1_49);
		} else {
			var_1_47 = (min (var_1_49 , (var_1_50 - 32)));
		}
	}


	// From: CodeObject7
	if (var_1_32) {
		if (var_1_25 > var_1_37) {
			var_1_51 = (abs (var_1_38));
		} else {
			var_1_51 = (min (5 , (abs (var_1_50 - var_1_48))));
		}
	} else {
		var_1_51 = (var_1_50 - var_1_49);
	}


	// From: CodeObject8
	if (64 >= (var_1_39 - var_1_50)) {
		var_1_52 = (max ((max (var_1_50 , var_1_51)) , var_1_53));
	} else {
		var_1_52 = var_1_48;
	}


	// From: CodeObject9
	if (var_1_40 < (-128 % -256)) {
		if (var_1_53 <= 10) {
			var_1_54 = ((min ((min (var_1_45 , var_1_44)) , var_1_46)) + var_1_55);
		} else {
			var_1_54 = (abs (var_1_44));
		}
	} else {
		if (var_1_45 > var_1_41) {
			var_1_54 = ((min ((var_1_56 + var_1_57) , var_1_45)) + var_1_46);
		}
	}


	// From: CodeObject10
	if (var_1_54 <= var_1_42) {
		if ((var_1_26 & (abs (var_1_48))) > (50 % var_1_50)) {
			if (var_1_47 != (var_1_37 / var_1_50)) {
				if (var_1_26 < ((~ var_1_40) % var_1_59)) {
					if (var_1_33) {
						var_1_58 = (max ((abs (var_1_48)) , var_1_49));
					}
				}
			}
		}
	}


	// From: CodeObject11
	if (var_1_32) {
		if (var_1_30) {
			if (((- var_1_47) > var_1_50) && (var_1_27 <= (var_1_52 * var_1_38))) {
				var_1_60 = ((abs (var_1_61)) - var_1_39);
			} else {
				var_1_60 = (min (var_1_49 , (var_1_61 - 50)));
			}
		}
	} else {
		var_1_60 = (min ((64 + var_1_50) , (abs (var_1_37))));
	}


	// From: CodeObject12
	var_1_62 = (var_1_63 - 8);


	// From: CodeObject13
	if (var_1_33) {
		var_1_64 = (max (((max (var_1_50 , var_1_65)) - var_1_49) , (var_1_48 + var_1_66)));
	}


	// From: CodeObject14
	if (! ((min (var_1_68 , var_1_55)) > (var_1_57 + var_1_46))) {
		var_1_67 = (var_1_65 - (abs (var_1_49)));
	} else {
		var_1_67 = (abs (128 - var_1_66));
	}


	// From: CodeObject15
	if ((max (var_1_38 , var_1_48)) >= (var_1_67 - var_1_50)) {
		var_1_69 = (abs (var_1_67 + (abs (var_1_50))));
	} else {
		var_1_69 = (var_1_37 + var_1_49);
	}


	// From: CodeObject16
	if (var_1_29 > var_1_50) {
		var_1_70 = (min (2 , var_1_63));
	} else {
		if (var_1_53 >= (max (var_1_48 , (~ var_1_50)))) {
			if (var_1_31) {
				if (var_1_24) {
					var_1_70 = var_1_63;
				} else {
					var_1_70 = var_1_63;
				}
			} else {
				var_1_70 = (var_1_63 - var_1_71);
			}
		}
	}


	// From: CodeObject17
	if (var_1_42 <= var_1_41) {
		var_1_72 = (var_1_64 - (var_1_73 - var_1_38));
	}


	// From: CodeObject18
	if (! (25 > (var_1_37 + var_1_69))) {
		var_1_74 = ((min (var_1_71 , var_1_64)) + var_1_47);
	} else {
		var_1_74 = var_1_64;
	}


	// From: CodeObject19
	var_1_75 = (var_1_49 + -1);


	// From: CodeObject20
	if (var_1_39 < (max ((var_1_26 | var_1_51) , (var_1_65 - 8)))) {
		if (var_1_63 >= var_1_29) {
			var_1_76 = (abs ((max (var_1_47 , var_1_49)) - var_1_53));
		}
	} else {
		if (var_1_60 <= 16) {
			var_1_76 = (abs (var_1_25 + (abs (var_1_36))));
		}
	}


	// From: CodeObject21
	if (var_1_27 != (var_1_61 | var_1_66)) {
		if ((abs (var_1_42)) < var_1_35) {
			if ((abs (var_1_66)) < var_1_52) {
				var_1_77 = (min (var_1_50 , var_1_65));
			}
		}
	} else {
		var_1_77 = (((min (var_1_78 , var_1_79)) + var_1_80) - var_1_48);
	}


	// From: CodeObject22
	if (var_1_33) {
		if ((var_1_29 ^ (var_1_77 >> var_1_82)) >= (var_1_52 | var_1_66)) {
			var_1_81 = var_1_71;
		} else {
			var_1_81 = (var_1_82 + ((abs (var_1_83)) - var_1_84));
		}
	} else {
		var_1_81 = (min (var_1_84 , var_1_63));
	}


	// From: CodeObject23
	var_1_85 = (! var_1_86);


	// From: CodeObject24
	if (var_1_33) {
		var_1_87 = var_1_47;
	} else {
		var_1_87 = var_1_71;
	}


	// From: CodeObject25
	var_1_88 = var_1_71;


	// From: CodeObject26
	if (var_1_28) {
		var_1_89 = var_1_80;
	} else {
		var_1_89 = var_1_84;
	}


	// From: CodeObject27
	if (var_1_86) {
		var_1_90 = var_1_56;
	} else {
		var_1_90 = var_1_45;
	}


	// From: CodeObject28
	if ((min ((var_1_64 / var_1_65) , (abs (4u)))) > ((max (var_1_38 , var_1_53)) / var_1_29)) {
		var_1_91 = -2;
	} else {
		var_1_91 = var_1_84;
	}


	// From: Req2Batch57PS_CN_250
	signed char stepLocal_0 = var_1_2;
	if (-256 <= stepLocal_0) {
		var_1_7 = (var_1_8 + ((max (var_1_9 , var_1_10)) + (var_1_11 + var_1_12)));
	} else {
		if (var_1_11 == var_1_9) {
			var_1_7 = var_1_8;
		}
	}


	// From: Req3Batch57PS_CN_250
	if (var_1_11 <= var_1_9) {
		var_1_13 = ((max ((var_1_14 - var_1_15) , var_1_16)) - (var_1_17 + (max (var_1_18 , var_1_19))));
	}


	// From: Req1Batch57PS_CN_250
	if ((var_1_2 - var_1_3) > (var_1_13 / var_1_5)) {
		var_1_1 = (128 - var_1_3);
	} else {
		if (! var_1_6) {
			var_1_1 = var_1_3;
		} else {
			var_1_1 = var_1_3;
		}
	}


	// From: Req4Batch57PS_CN_250
	signed long int stepLocal_1 = (var_1_2 * var_1_13) & var_1_1;
	if (var_1_3 < stepLocal_1) {
		var_1_20 = ((abs (var_1_18)) + var_1_14);
	}


	// From: Req5Batch57PS_CN_250
	signed long int stepLocal_2 = var_1_1 & var_1_3;
	if (((max (var_1_1 , var_1_5)) + (var_1_1 / var_1_14)) <= stepLocal_2) {
		if (var_1_6) {
			var_1_21 = var_1_12;
		} else {
			var_1_21 = var_1_10;
		}
	} else {
		var_1_21 = var_1_12;
	}


	// From: Req6Batch57PS_CN_250
	unsigned long int stepLocal_3 = var_1_20;
	if (var_1_1 > stepLocal_3) {
		if (! (! var_1_6)) {
			var_1_23 = var_1_8;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -230584.3009213691390e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691390e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -230584.3009213691390e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691390e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -115292.1504606845700e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 1152921.504606845700e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -115292.1504606845700e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 1152921.504606845700e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 190);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 64);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -128);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 2147483647);
	assume_abort_if_not(var_1_29 <= 4294967295);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= -32767);
	assume_abort_if_not(var_1_36 <= 32766);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854776000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	assume_abort_if_not(var_1_42 != 0.0F);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -461168.6018427382800e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -461168.6018427382800e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -461168.6018427382800e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 127);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 127);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 127);
	assume_abort_if_not(var_1_50 <= 254);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 65534);
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= -461168.6018427382800e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -230584.3009213691390e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691390e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= -230584.3009213691390e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691390e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -128);
	assume_abort_if_not(var_1_59 <= 127);
	assume_abort_if_not(var_1_59 != 0);
	var_1_61 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_61 >= 32767);
	assume_abort_if_not(var_1_61 <= 65534);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= -1);
	assume_abort_if_not(var_1_63 <= 126);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 127);
	assume_abort_if_not(var_1_65 <= 254);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 127);
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= -922337.2036854776000e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854776000e+12F && var_1_68 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 126);
	var_1_73 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_73 >= 16383);
	assume_abort_if_not(var_1_73 <= 32766);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 63);
	assume_abort_if_not(var_1_78 <= 127);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 63);
	assume_abort_if_not(var_1_79 <= 127);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 64);
	assume_abort_if_not(var_1_80 <= 127);
	var_1_82 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 9);
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= -63);
	assume_abort_if_not(var_1_83 <= 63);
	var_1_84 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 63);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 1);
	assume_abort_if_not(var_1_86 <= 1);
}



void updateLastVariables() {
}

int property() {
	return (((((((var_1_2 - var_1_3) > (var_1_13 / var_1_5)) ? (var_1_1 == ((unsigned char) (128 - var_1_3))) : ((! var_1_6) ? (var_1_1 == ((unsigned char) var_1_3)) : (var_1_1 == ((unsigned char) var_1_3)))) && ((-256 <= var_1_2) ? (var_1_7 == ((double) (var_1_8 + ((max (var_1_9 , var_1_10)) + (var_1_11 + var_1_12))))) : ((var_1_11 == var_1_9) ? (var_1_7 == ((double) var_1_8)) : 1))) && ((var_1_11 <= var_1_9) ? (var_1_13 == ((unsigned char) ((max ((var_1_14 - var_1_15) , var_1_16)) - (var_1_17 + (max (var_1_18 , var_1_19)))))) : 1)) && ((var_1_3 < ((var_1_2 * var_1_13) & var_1_1)) ? (var_1_20 == ((unsigned long int) ((abs (var_1_18)) + var_1_14))) : 1)) && ((((max (var_1_1 , var_1_5)) + (var_1_1 / var_1_14)) <= (var_1_1 & var_1_3)) ? (var_1_6 ? (var_1_21 == ((float) var_1_12)) : (var_1_21 == ((float) var_1_10))) : (var_1_21 == ((float) var_1_12)))) && ((var_1_1 > var_1_20) ? ((! (! var_1_6)) ? (var_1_23 == ((double) var_1_8)) : 1) : 1)
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
