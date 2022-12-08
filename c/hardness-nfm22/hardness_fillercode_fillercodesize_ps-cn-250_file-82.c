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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch82PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 10.8;
double var_1_4 = 5.5;
float var_1_5 = 49.2;
double var_1_7 = 49.5;
double var_1_8 = 999999999999.4;
double var_1_9 = 255.3;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_13 = 1;
signed long int var_1_14 = -16;
signed long int var_1_15 = 25;
signed long int var_1_16 = -8;
signed long int var_1_17 = 1000000000;
signed long int var_1_18 = 256;
signed long int var_1_19 = 25;
signed long int var_1_20 = 4;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
signed long int var_1_23 = 50;
double var_1_24 = 1000000000.5;
double var_1_25 = 2.95;
unsigned char var_1_26 = 10;
unsigned char var_1_27 = 10;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 16;
unsigned long int var_1_30 = 0;
unsigned long int var_1_31 = 3409222088;
unsigned long int var_1_32 = 1173379889;
signed char var_1_33 = 1;
unsigned char var_1_34 = 0;
signed long int var_1_35 = 2;
signed char var_1_36 = 0;
signed char var_1_37 = 50;
double var_1_38 = -0.2;
double var_1_39 = 0.0;
double var_1_40 = 9999999999.2;
unsigned char var_1_41 = 128;
unsigned char var_1_42 = 64;
signed long int var_1_43 = 32;
double var_1_44 = 100000.5;
signed char var_1_45 = -16;
signed long int var_1_46 = -8;
signed char var_1_47 = 50;
unsigned char var_1_48 = 8;
double var_1_49 = 100.35;
double var_1_50 = 2.75;
signed long int var_1_51 = 128;
signed long int var_1_52 = 32;
unsigned short int var_1_53 = 200;
unsigned char var_1_54 = 2;
unsigned char var_1_55 = 128;
signed short int var_1_56 = 0;
signed short int var_1_57 = 0;
unsigned long int var_1_58 = 5;
unsigned long int var_1_59 = 128;
unsigned short int var_1_60 = 256;
unsigned short int var_1_61 = 60054;
unsigned short int var_1_62 = 62570;
unsigned char var_1_63 = 2;
unsigned char var_1_64 = 128;
signed char var_1_65 = -5;
double var_1_66 = 3.2;
unsigned short int var_1_67 = 128;
signed char var_1_68 = -2;
unsigned long int var_1_69 = 32;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 1;
unsigned char var_1_72 = 100;
float var_1_73 = 0.2;
float var_1_74 = 128.5;
float var_1_75 = 4.25;
float var_1_76 = 1.8;
float var_1_77 = 100.9;
double var_1_78 = 100.5;
unsigned char var_1_79 = 0;
signed long int var_1_80 = 1;
double var_1_81 = 7.375;
unsigned char var_1_82 = 0;
unsigned char var_1_83 = 1;
unsigned char var_1_84 = 0;
double var_1_85 = 9.35;
signed short int var_1_86 = 2;
unsigned long int var_1_87 = 256;
unsigned long int var_1_88 = 10;

// Calibration values

// Last'ed variables
double last_1_var_1_7 = 49.5;
signed long int last_1_var_1_14 = -16;
signed long int last_1_var_1_23 = 50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_24 = var_1_25;


	// From: CodeObject2
	if (var_1_25 <= var_1_24) {
		var_1_26 = (min (var_1_27 , (abs (min (var_1_28 , var_1_29)))));
	}


	// From: CodeObject3
	if ((var_1_31 - (var_1_32 - var_1_29)) < (~ (var_1_26 | var_1_28))) {
		var_1_30 = (max ((abs (var_1_29)) , 2u));
	}


	// From: CodeObject4
	if (var_1_34 || (var_1_25 > var_1_24)) {
		if (var_1_27 >= var_1_30) {
			if ((var_1_29 + var_1_27) >= var_1_35) {
				var_1_33 = (var_1_36 + var_1_37);
			} else {
				var_1_33 = (abs (var_1_37));
			}
		}
	} else {
		var_1_33 = (abs (var_1_36));
	}


	// From: CodeObject5
	if (var_1_32 > var_1_29) {
		var_1_38 = (((abs (var_1_39)) - 255.2) - (min (31.4 , var_1_40)));
	} else {
		if ((var_1_41 - (abs (var_1_42))) > ((var_1_37 | var_1_43) | var_1_35)) {
			var_1_38 = var_1_39;
		} else {
			var_1_38 = var_1_40;
		}
	}


	// From: CodeObject6
	if (var_1_25 < (- var_1_39)) {
		var_1_44 = (max ((max (var_1_40 , var_1_25)) , (abs (var_1_39))));
	} else {
		var_1_44 = (abs (var_1_25));
	}


	// From: CodeObject7
	if ((2 * -1) < (var_1_28 / var_1_46)) {
		var_1_45 = ((64 - var_1_47) - (abs (abs (var_1_36))));
	} else {
		var_1_45 = (var_1_47 + var_1_37);
	}


	// From: CodeObject8
	if ((abs (var_1_26 + var_1_42)) > (abs (var_1_32 - var_1_28))) {
		var_1_48 = (max ((min (var_1_27 , (min (var_1_29 , var_1_47)))) , var_1_42));
	} else {
		var_1_48 = (var_1_47 + var_1_42);
	}


	// From: CodeObject9
	if (var_1_41 != (abs (var_1_31))) {
		var_1_49 = (max ((min ((var_1_40 - 15.1) , var_1_25)) , var_1_50));
	}


	// From: CodeObject10
	if (var_1_34) {
		var_1_51 = (var_1_52 - var_1_29);
	} else {
		var_1_51 = (min ((abs (max (2 , var_1_37))) , (var_1_45 + (abs (16)))));
	}


	// From: CodeObject11
	if (var_1_38 < 16.8) {
		var_1_53 = var_1_29;
	} else {
		var_1_53 = (abs (max (var_1_47 , (abs (var_1_29)))));
	}


	// From: CodeObject12
	if ((~ (var_1_53 - var_1_42)) < (var_1_36 ^ var_1_30)) {
		var_1_54 = (var_1_55 - (max (var_1_47 , var_1_42)));
	}


	// From: CodeObject13
	if (var_1_50 < (abs (9.3))) {
		var_1_56 = (var_1_29 - var_1_57);
	} else {
		var_1_56 = var_1_29;
	}


	// From: CodeObject14
	if ((var_1_30 | var_1_28) <= (max (var_1_29 , (abs (var_1_46))))) {
		if (! var_1_34) {
			var_1_58 = (abs (var_1_26));
		} else {
			var_1_58 = var_1_57;
		}
	} else {
		var_1_58 = (abs (var_1_32));
	}


	// From: CodeObject15
	var_1_59 = var_1_41;


	// From: CodeObject16
	if (var_1_34) {
		if (var_1_54 > var_1_57) {
			var_1_60 = ((min ((var_1_61 - var_1_41) , var_1_62)) - var_1_54);
		}
	}


	// From: CodeObject17
	if ((var_1_43 <= var_1_53) || var_1_34) {
		var_1_63 = (max ((abs (var_1_29)) , ((max (var_1_55 , var_1_64)) - var_1_47)));
	}


	// From: CodeObject18
	if (((var_1_40 - var_1_66) >= var_1_24) && var_1_34) {
		var_1_65 = (abs (var_1_36));
	}


	// From: CodeObject19
	if (var_1_56 >= var_1_57) {
		var_1_67 = (min (var_1_61 , var_1_48));
	}


	// From: CodeObject20
	if (var_1_51 <= var_1_43) {
		if ((abs (var_1_56)) <= (var_1_26 * (abs (var_1_48)))) {
			if (var_1_67 <= var_1_27) {
				var_1_68 = (var_1_47 + var_1_37);
			}
		} else {
			var_1_68 = (max (var_1_47 , var_1_36));
		}
	} else {
		var_1_68 = (abs (var_1_47));
	}


	// From: CodeObject21
	if (var_1_34) {
		if ((max (-50 , var_1_28)) < var_1_42) {
			var_1_69 = (abs (abs (var_1_67)));
		}
	} else {
		if (var_1_39 == (- var_1_50)) {
			var_1_69 = 0u;
		}
	}


	// From: CodeObject22
	if (var_1_31 <= ((var_1_61 ^ var_1_32) ^ (100000000u * var_1_27))) {
		if ((abs (-5)) <= (var_1_47 / (min (var_1_46 , var_1_32)))) {
			var_1_70 = (! (! var_1_71));
		}
	}


	// From: CodeObject23
	if (((var_1_28 % var_1_46) >> var_1_45) > (var_1_58 & var_1_51)) {
		var_1_72 = ((max (100 , (abs (var_1_42)))) + var_1_47);
	}


	// From: CodeObject24
	if (var_1_34) {
		if (var_1_71 && var_1_70) {
			var_1_73 = (max (var_1_40 , var_1_25));
		}
	} else {
		if (var_1_57 >= (var_1_37 >> var_1_62)) {
			var_1_73 = ((min (var_1_74 , (min (var_1_75 , var_1_76)))) + var_1_77);
		} else {
			if (256 <= ((max (var_1_27 , 16)) - var_1_26)) {
				if (var_1_29 <= (10 % (max (64 , var_1_41)))) {
					var_1_73 = (min (var_1_74 , (abs (9.2f))));
				} else {
					var_1_73 = (min (1.0000000000000625E13f , (abs (var_1_75))));
				}
			} else {
				var_1_73 = (abs (var_1_39));
			}
		}
	}


	// From: CodeObject25
	if (var_1_79) {
		var_1_78 = var_1_74;
	} else {
		var_1_78 = var_1_77;
	}


	// From: CodeObject26
	var_1_80 = var_1_60;


	// From: CodeObject27
	var_1_81 = var_1_74;


	// From: CodeObject28
	if (var_1_83) {
		var_1_82 = var_1_84;
	}


	// From: CodeObject29
	if (var_1_84) {
		var_1_85 = var_1_75;
	}


	// From: CodeObject30
	if (var_1_82) {
		var_1_86 = var_1_64;
	} else {
		var_1_86 = var_1_33;
	}


	// From: CodeObject31
	if ((var_1_32 % var_1_41) > (var_1_88 & var_1_72)) {
		if ((~ var_1_26) > var_1_36) {
			if (var_1_70) {
				var_1_87 = var_1_48;
			} else {
				var_1_87 = var_1_54;
			}
		}
	}


	// From: Req7Batch82PS_CN_250
	var_1_23 = last_1_var_1_14;


	// From: Req2Batch82PS_CN_250
	var_1_7 = (var_1_4 - (var_1_8 + var_1_9));


	// From: Req5Batch82PS_CN_250
	if (var_1_8 <= (max ((var_1_5 * 1.25) , (last_1_var_1_7 * var_1_9)))) {
		var_1_16 = (((abs (last_1_var_1_23)) + last_1_var_1_23) + ((var_1_17 - var_1_18) - (max (var_1_19 , var_1_20))));
	} else {
		if (var_1_4 <= last_1_var_1_7) {
			var_1_16 = var_1_17;
		}
	}


	// From: Req1Batch82PS_CN_250
	signed long int stepLocal_0 = var_1_23;
	if (stepLocal_0 == var_1_16) {
		var_1_1 = (var_1_4 - 4.531);
	} else {
		if ((var_1_4 - var_1_5) > var_1_7) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = var_1_4;
		}
	}


	// From: Req6Batch82PS_CN_250
	signed long int stepLocal_1 = (50 / -10) + var_1_23;
	if (stepLocal_1 >= var_1_16) {
		if (var_1_13) {
			var_1_21 = (var_1_11 && var_1_22);
		} else {
			var_1_21 = var_1_11;
		}
	} else {
		var_1_21 = var_1_11;
	}


	// From: Req3Batch82PS_CN_250
	var_1_10 = (var_1_11 && (var_1_21 || var_1_13));


	// From: Req4Batch82PS_CN_250
	if (var_1_8 <= (max (var_1_4 , (var_1_1 + var_1_5)))) {
		if (var_1_10) {
			var_1_14 = (var_1_15 + (8 + var_1_16));
		} else {
			var_1_14 = -256;
		}
	} else {
		var_1_14 = var_1_16;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -1073741823);
	assume_abort_if_not(var_1_15 <= 1073741823);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 536870911);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 536870911);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1073741823);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1073741823);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854765600e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 254);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 254);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 2147483647);
	assume_abort_if_not(var_1_31 <= 4294967295);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 1073741823);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483648);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -63);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -63);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -922337.2036854765600e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= -461168.6018427382800e+13F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 127);
	assume_abort_if_not(var_1_41 <= 255);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -2147483648);
	assume_abort_if_not(var_1_43 <= 2147483647);
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= -2147483648);
	assume_abort_if_not(var_1_46 <= 2147483647);
	assume_abort_if_not(var_1_46 != 0);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 63);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -922337.2036854765600e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_52 >= -1);
	assume_abort_if_not(var_1_52 <= 2147483646);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_57 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 32766);
	var_1_61 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_61 >= 49150);
	assume_abort_if_not(var_1_61 <= 65534);
	var_1_62 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_62 >= 32767);
	assume_abort_if_not(var_1_62 <= 65534);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 127);
	assume_abort_if_not(var_1_64 <= 254);
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854776000e+12F && var_1_66 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 1);
	assume_abort_if_not(var_1_71 <= 1);
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= -461168.6018427382800e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427382800e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= -461168.6018427382800e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427382800e+12F && var_1_75 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_76 >= -461168.6018427382800e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 4611686.018427382800e+12F && var_1_76 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_77 >= -461168.6018427382800e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 4611686.018427382800e+12F && var_1_77 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 1);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 1);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 0);
	var_1_88 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 4294967295);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_23 = var_1_23;
}

int property() {
	return (((((((var_1_23 == var_1_16) ? (var_1_1 == ((double) (var_1_4 - 4.531))) : (((var_1_4 - var_1_5) > var_1_7) ? (var_1_1 == ((double) var_1_4)) : (var_1_1 == ((double) var_1_4)))) && (var_1_7 == ((double) (var_1_4 - (var_1_8 + var_1_9))))) && (var_1_10 == ((unsigned char) (var_1_11 && (var_1_21 || var_1_13))))) && ((var_1_8 <= (max (var_1_4 , (var_1_1 + var_1_5)))) ? (var_1_10 ? (var_1_14 == ((signed long int) (var_1_15 + (8 + var_1_16)))) : (var_1_14 == ((signed long int) -256))) : (var_1_14 == ((signed long int) var_1_16)))) && ((var_1_8 <= (max ((var_1_5 * 1.25) , (last_1_var_1_7 * var_1_9)))) ? (var_1_16 == ((signed long int) (((abs (last_1_var_1_23)) + last_1_var_1_23) + ((var_1_17 - var_1_18) - (max (var_1_19 , var_1_20)))))) : ((var_1_4 <= last_1_var_1_7) ? (var_1_16 == ((signed long int) var_1_17)) : 1))) && ((((50 / -10) + var_1_23) >= var_1_16) ? (var_1_13 ? (var_1_21 == ((unsigned char) (var_1_11 && var_1_22))) : (var_1_21 == ((unsigned char) var_1_11))) : (var_1_21 == ((unsigned char) var_1_11)))) && (var_1_23 == ((signed long int) last_1_var_1_14))
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
