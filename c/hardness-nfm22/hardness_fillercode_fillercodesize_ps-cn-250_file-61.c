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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch61PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 8.5;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 50;
unsigned long int var_1_6 = 4;
float var_1_7 = 15.8;
float var_1_8 = 64.25;
signed long int var_1_9 = -50;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 3207304078;
unsigned long int var_1_15 = 50;
unsigned long int var_1_16 = 25;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned short int var_1_20 = 1;
unsigned long int var_1_21 = 50;
signed char var_1_22 = -4;
signed char var_1_23 = -10;
unsigned long int var_1_24 = 2;
unsigned long int var_1_25 = 2;
unsigned long int var_1_26 = 1;
signed long int var_1_27 = 25;
signed long int var_1_28 = -4;
unsigned long int var_1_29 = 32;
unsigned long int var_1_30 = 1;
unsigned long int var_1_31 = 8;
unsigned long int var_1_32 = 500;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 1;
double var_1_35 = 1000000000.5;
unsigned char var_1_36 = 0;
double var_1_37 = 32.6;
double var_1_38 = 32.5;
double var_1_39 = 0.0;
double var_1_40 = 9.875;
double var_1_41 = 8.5;
double var_1_42 = 0.0;
double var_1_43 = 32.75;
signed long int var_1_44 = -256;
signed long int var_1_45 = 2;
signed long int var_1_46 = 8;
unsigned char var_1_47 = 0;
signed char var_1_48 = 16;
signed char var_1_49 = 8;
signed char var_1_50 = 64;
signed char var_1_51 = 1;
signed long int var_1_52 = 0;
signed short int var_1_53 = -4;
signed long int var_1_54 = -5;
unsigned short int var_1_55 = 8;
unsigned short int var_1_56 = 500;
unsigned long int var_1_57 = 256;
signed short int var_1_58 = -32;
signed char var_1_59 = -128;
signed char var_1_60 = -5;
unsigned short int var_1_61 = 256;
signed short int var_1_62 = -8;
signed long int var_1_63 = 100000000;
unsigned long int var_1_64 = 2;
unsigned short int var_1_65 = 10;
unsigned short int var_1_66 = 58068;
unsigned short int var_1_67 = 59887;
signed long int var_1_68 = 32;
unsigned short int var_1_69 = 4;
signed long int var_1_70 = -5;
signed short int var_1_71 = 0;
double var_1_72 = 1.6;
signed long int var_1_73 = -10000000;
signed long int var_1_74 = 1385282716;
unsigned short int var_1_75 = 5;
unsigned short int var_1_76 = 256;
double var_1_77 = 1.05;
unsigned short int var_1_78 = 1;
unsigned long int var_1_79 = 500;
signed long int var_1_80 = -32;
double var_1_81 = 3.25;
unsigned long int var_1_82 = 32;
unsigned long int var_1_83 = 8;
double var_1_84 = 15.5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_9 = -50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_24 = var_1_25;


	// From: CodeObject2
	if (var_1_25 != var_1_24) {
		if ((~ var_1_27) != (-50 >> var_1_25)) {
			var_1_26 = ((max (var_1_29 , var_1_30)) + (abs (max (var_1_31 , var_1_32))));
		} else {
			var_1_26 = (abs (var_1_29 + (abs (var_1_32))));
		}
	} else {
		if (var_1_32 > (- (abs (var_1_27)))) {
			var_1_26 = (abs (var_1_29));
		}
	}


	// From: CodeObject3
	if (var_1_34) {
		var_1_33 = 16;
	}


	// From: CodeObject4
	if (var_1_34 || var_1_36) {
		var_1_35 = (var_1_37 + var_1_38);
	} else {
		if (var_1_36) {
			var_1_35 = ((var_1_39 - (var_1_40 + var_1_41)) - (var_1_42 - var_1_43));
		} else {
			var_1_35 = ((var_1_39 - var_1_40) - var_1_43);
		}
	}


	// From: CodeObject5
	if (1.0000000008E9f >= var_1_40) {
		if (var_1_42 >= (- (var_1_43 + var_1_40))) {
			var_1_44 = (var_1_33 - var_1_45);
		}
	} else {
		if ((var_1_45 >> 10u) <= var_1_29) {
			var_1_44 = (max ((max (var_1_33 , (var_1_45 - var_1_46))) , 25));
		}
	}


	// From: CodeObject6
	if (! var_1_34) {
		if (var_1_33 <= var_1_32) {
			var_1_47 = (! 0);
		}
	}


	// From: CodeObject7
	if (var_1_31 > var_1_27) {
		var_1_48 = (max ((min (var_1_49 , var_1_50)) , var_1_51));
	}


	// From: CodeObject8
	if (var_1_50 < (max (var_1_25 , var_1_27))) {
		var_1_52 = (abs (var_1_45));
	} else {
		var_1_52 = (var_1_46 - var_1_33);
	}


	// From: CodeObject9
	if ((- var_1_46) > var_1_51) {
		var_1_53 = var_1_50;
	} else {
		if (var_1_29 >= var_1_27) {
			var_1_53 = (abs (var_1_48));
		}
	}


	// From: CodeObject10
	if ((max (var_1_43 , var_1_39)) > var_1_42) {
		var_1_54 = (min (var_1_49 , (abs (var_1_48))));
	}


	// From: CodeObject11
	if ((var_1_32 / var_1_27) <= var_1_28) {
		var_1_55 = (min (var_1_33 , var_1_56));
	}


	// From: CodeObject12
	if (var_1_46 >= ((max (var_1_30 , var_1_31)) - var_1_45)) {
		var_1_57 = (4292814965u - var_1_29);
	}


	// From: CodeObject13
	if (var_1_44 >= var_1_32) {
		var_1_58 = (abs (var_1_51));
	} else {
		var_1_58 = var_1_48;
	}


	// From: CodeObject14
	if (var_1_38 < var_1_39) {
		var_1_59 = (abs (var_1_60));
	}


	// From: CodeObject15
	if (var_1_50 <= var_1_29) {
		var_1_61 = (max (var_1_56 , var_1_33));
	} else {
		var_1_61 = (abs (var_1_56));
	}


	// From: CodeObject16
	if ((max (var_1_61 , var_1_46)) >= (var_1_31 / var_1_27)) {
		if (((abs (var_1_49)) / 100) < ((abs (var_1_58)) * (var_1_50 | var_1_27))) {
			if (var_1_27 < var_1_24) {
				var_1_62 = (abs (var_1_59));
			} else {
				var_1_62 = (abs ((abs (var_1_49)) + (max (var_1_60 , var_1_51))));
			}
		}
	}


	// From: CodeObject17
	if (var_1_47 && var_1_36) {
		var_1_63 = (var_1_46 - (var_1_56 + (max (var_1_61 , var_1_33))));
	}


	// From: CodeObject18
	if (var_1_58 <= ((var_1_44 >> var_1_61) ^ var_1_45)) {
		if (var_1_43 >= ((min (var_1_40 , var_1_37)) + 32.8)) {
			if (var_1_47) {
				var_1_64 = var_1_29;
			} else {
				var_1_64 = (abs (abs (var_1_55)));
			}
		}
	}


	// From: CodeObject19
	if ((var_1_63 + (abs (var_1_25))) > var_1_46) {
		var_1_65 = ((min ((abs (var_1_66)) , var_1_67)) - var_1_33);
	} else {
		var_1_65 = (min (var_1_67 , (abs (var_1_33))));
	}


	// From: CodeObject20
	if (var_1_31 > var_1_57) {
		var_1_68 = (var_1_56 - (max (var_1_33 , var_1_45)));
	}


	// From: CodeObject21
	if (var_1_34) {
		var_1_69 = (var_1_66 - var_1_33);
	} else {
		if ((max (var_1_38 , var_1_37)) > var_1_43) {
			if (((min (var_1_70 , 64)) < 4) || var_1_36) {
				var_1_69 = (min (var_1_67 , var_1_33));
			}
		}
	}


	// From: CodeObject22
	if ((! var_1_34) || var_1_47) {
		var_1_71 = (min ((max (var_1_60 , var_1_48)) , var_1_49));
	} else {
		if ((-128 + var_1_61) <= (var_1_44 % var_1_28)) {
			var_1_71 = var_1_50;
		}
	}


	// From: CodeObject23
	if (var_1_36) {
		var_1_72 = ((abs (min (8.85 , var_1_43))) - (abs (var_1_41)));
	} else {
		if (var_1_34) {
			var_1_72 = (abs (0.275));
		}
	}


	// From: CodeObject24
	if (var_1_34) {
		if ((abs (var_1_50)) >= (var_1_68 * 5)) {
			if (7.05f >= (abs (min (var_1_41 , var_1_35)))) {
				var_1_73 = ((var_1_33 + 32) - (var_1_74 - var_1_66));
			} else {
				var_1_73 = (max ((abs (var_1_58)) , var_1_74));
			}
		}
	}


	// From: CodeObject25
	if ((var_1_31 ^ (var_1_52 & 100)) <= var_1_33) {
		if (var_1_68 >= var_1_71) {
			if ((- (abs (4.5f))) > var_1_38) {
				var_1_75 = (max ((abs (var_1_66)) , 100));
			} else {
				var_1_75 = (var_1_33 + var_1_76);
			}
		} else {
			if ((64u * (var_1_27 + var_1_65)) < (var_1_73 * var_1_67)) {
				var_1_75 = var_1_33;
			}
		}
	} else {
		var_1_75 = var_1_66;
	}


	// From: CodeObject26
	if (var_1_36) {
		var_1_77 = var_1_38;
	}


	// From: CodeObject27
	if (var_1_34) {
		var_1_78 = var_1_56;
	}


	// From: CodeObject28
	if (var_1_34) {
		var_1_79 = var_1_32;
	} else {
		var_1_79 = var_1_61;
	}


	// From: CodeObject29
	if (-25 < var_1_27) {
		var_1_80 = var_1_71;
	}


	// From: CodeObject30
	var_1_81 = (abs (var_1_42));


	// From: CodeObject31
	var_1_82 = var_1_74;


	// From: CodeObject32
	var_1_83 = var_1_66;


	// From: CodeObject33
	var_1_84 = var_1_37;


	// From: Req2Batch61PS_CN_250
	signed long int stepLocal_0 = last_1_var_1_9;
	if (stepLocal_0 < last_1_var_1_9) {
		var_1_4 = (max (var_1_5 , var_1_6));
	}


	// From: Req7Batch61PS_CN_250
	var_1_21 = var_1_6;


	// From: Req8Batch61PS_CN_250
	var_1_22 = var_1_23;


	// From: Req1Batch61PS_CN_250
	if ((var_1_21 / (abs (64u))) == var_1_4) {
		var_1_1 = (8.8 - 255.2);
	}


	// From: Req4Batch61PS_CN_250
	unsigned long int stepLocal_4 = 4256310412u - 128u;
	if (var_1_4 >= stepLocal_4) {
		var_1_9 = ((abs (var_1_22 + var_1_22)) + var_1_22);
	}


	// From: Req3Batch61PS_CN_250
	signed long int stepLocal_3 = var_1_9;
	unsigned long int stepLocal_2 = max (var_1_21 , var_1_5);
	unsigned long int stepLocal_1 = var_1_21 ^ 4u;
	if (var_1_9 <= stepLocal_2) {
		if (stepLocal_3 < var_1_5) {
			if (var_1_9 >= stepLocal_1) {
				var_1_7 = var_1_8;
			}
		} else {
			var_1_7 = var_1_8;
		}
	} else {
		var_1_7 = var_1_8;
	}


	// From: Req5Batch61PS_CN_250
	if (var_1_21 >= (var_1_14 - (min (var_1_15 , var_1_16)))) {
		if (var_1_16 < var_1_9) {
			var_1_13 = var_1_17;
		} else {
			var_1_13 = var_1_17;
		}
	} else {
		var_1_13 = var_1_18;
	}


	// From: Req6Batch61PS_CN_250
	signed long int stepLocal_5 = (var_1_22 / 2) / var_1_20;
	if (stepLocal_5 >= (~ 100)) {
		if (var_1_13) {
			var_1_19 = (var_1_17 && var_1_18);
		}
	} else {
		if (var_1_17) {
			var_1_19 = var_1_18;
		} else {
			var_1_19 = var_1_18;
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 65535);
	assume_abort_if_not(var_1_20 != 0);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -127);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 4294967294);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483648);
	assume_abort_if_not(var_1_28 <= 2147483647);
	assume_abort_if_not(var_1_28 != 0);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -461168.6018427382800e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -461168.6018427382800e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 4611686.018427382800e+12F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691390e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691390e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 4611686.018427382800e+12F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 2147483646);
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 2147483646);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -127);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= -127);
	assume_abort_if_not(var_1_50 <= 126);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -127);
	assume_abort_if_not(var_1_51 <= 126);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 65534);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= -126);
	assume_abort_if_not(var_1_60 <= 126);
	var_1_66 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_66 >= 32767);
	assume_abort_if_not(var_1_66 <= 65534);
	var_1_67 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_67 >= 32767);
	assume_abort_if_not(var_1_67 <= 65534);
	var_1_70 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_70 >= -2147483648);
	assume_abort_if_not(var_1_70 <= 2147483647);
	var_1_74 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_74 >= 1073741823);
	assume_abort_if_not(var_1_74 <= 2147483646);
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 32767);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
}

int property() {
	return (((((((((var_1_21 / (abs (64u))) == var_1_4) ? (var_1_1 == ((double) (8.8 - 255.2))) : 1) && ((last_1_var_1_9 < last_1_var_1_9) ? (var_1_4 == ((unsigned long int) (max (var_1_5 , var_1_6)))) : 1)) && ((var_1_9 <= (max (var_1_21 , var_1_5))) ? ((var_1_9 < var_1_5) ? ((var_1_9 >= (var_1_21 ^ 4u)) ? (var_1_7 == ((float) var_1_8)) : 1) : (var_1_7 == ((float) var_1_8))) : (var_1_7 == ((float) var_1_8)))) && ((var_1_4 >= (4256310412u - 128u)) ? (var_1_9 == ((signed long int) ((abs (var_1_22 + var_1_22)) + var_1_22))) : 1)) && ((var_1_21 >= (var_1_14 - (min (var_1_15 , var_1_16)))) ? ((var_1_16 < var_1_9) ? (var_1_13 == ((unsigned char) var_1_17)) : (var_1_13 == ((unsigned char) var_1_17))) : (var_1_13 == ((unsigned char) var_1_18)))) && ((((var_1_22 / 2) / var_1_20) >= (~ 100)) ? (var_1_13 ? (var_1_19 == ((unsigned char) (var_1_17 && var_1_18))) : 1) : (var_1_17 ? (var_1_19 == ((unsigned char) var_1_18)) : (var_1_19 == ((unsigned char) var_1_18))))) && (var_1_21 == ((unsigned long int) var_1_6))) && (var_1_22 == ((signed char) var_1_23))
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
