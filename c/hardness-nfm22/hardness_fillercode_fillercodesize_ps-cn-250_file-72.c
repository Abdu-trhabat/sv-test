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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch72PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 16;
signed char var_1_10 = 2;
signed char var_1_11 = 1;
float var_1_14 = 64.3;
signed char var_1_16 = 32;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
double var_1_20 = 9.25;
double var_1_21 = 255.05;
double var_1_22 = 25.5;
unsigned char var_1_23 = 2;
unsigned char var_1_25 = 1;
unsigned short int var_1_26 = 5;
unsigned char var_1_27 = 128;
unsigned char var_1_28 = 1;
signed long int var_1_29 = 128;
unsigned long int var_1_31 = 1;
unsigned long int var_1_32 = 64;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
unsigned short int var_1_35 = 100;
unsigned short int var_1_36 = 50;
unsigned long int var_1_37 = 3773873024;
unsigned long int var_1_38 = 2296504360;
double var_1_39 = 64.375;
double var_1_40 = 63.6;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 4;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 10;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
float var_1_51 = 31.57;
float var_1_52 = 64.4;
signed char var_1_53 = 5;
signed char var_1_54 = 25;
signed char var_1_55 = -2;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 1;
unsigned char var_1_59 = 1;
unsigned char var_1_60 = 0;
unsigned long int var_1_61 = 0;
double var_1_62 = 64.5;
double var_1_63 = 100.4;
double var_1_64 = 8.8;
unsigned char var_1_65 = 0;
signed long int var_1_66 = -4;
unsigned short int var_1_67 = 10;
unsigned short int var_1_68 = 61991;
unsigned char var_1_69 = 100;
float var_1_70 = 64.25;
unsigned char var_1_71 = 8;
signed char var_1_72 = 5;
unsigned short int var_1_73 = 50;
unsigned char var_1_74 = 0;
signed long int var_1_75 = -2;
unsigned short int var_1_76 = 8;
signed char var_1_77 = -5;
signed short int var_1_78 = -25;
unsigned char var_1_79 = 0;
unsigned short int var_1_80 = 0;
signed char var_1_81 = 10;
signed long int var_1_82 = 256;
unsigned short int var_1_83 = 64;
unsigned char var_1_84 = 0;
unsigned long int var_1_85 = 5;
unsigned char var_1_86 = 1;
unsigned char var_1_87 = 1;
double var_1_88 = 2.25;
double var_1_89 = 127.25;
double var_1_90 = 2.25;
unsigned char var_1_91 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_17 = 1;
double last_1_var_1_20 = 9.25;
unsigned char last_1_var_1_23 = 2;
unsigned short int last_1_var_1_26 = 5;
signed long int last_1_var_1_29 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_33 && var_1_34) {
		if (var_1_35 <= var_1_36) {
			var_1_32 = ((min (var_1_37 , (abs (var_1_38)))) - (abs (var_1_35)));
		}
	}


	// From: CodeObject2
	if (var_1_33) {
		if (var_1_36 != (~ var_1_38)) {
			var_1_39 = var_1_40;
		}
	}


	// From: CodeObject3
	if (var_1_32 <= (~ var_1_37)) {
		if (var_1_40 <= var_1_39) {
			var_1_41 = (var_1_42 && (! var_1_43));
		} else {
			var_1_41 = (var_1_42 && var_1_44);
		}
	} else {
		if (var_1_39 > var_1_40) {
			var_1_41 = (! var_1_43);
		} else {
			if (var_1_36 <= var_1_37) {
				var_1_41 = (((var_1_32 >= 50u) && var_1_42) && var_1_43);
			} else {
				var_1_41 = var_1_43;
			}
		}
	}


	// From: CodeObject4
	if ((abs (var_1_39)) <= var_1_40) {
		var_1_45 = (abs (abs (min (var_1_46 , var_1_47))));
	} else {
		var_1_45 = var_1_46;
	}


	// From: CodeObject5
	if (var_1_44) {
		if (var_1_36 > (abs (~ var_1_38))) {
			if (var_1_40 < (- var_1_39)) {
				if (var_1_46 >= ((var_1_36 >> var_1_45) * var_1_37)) {
					var_1_48 = (var_1_43 && (var_1_34 && var_1_49));
				} else {
					var_1_48 = (! var_1_42);
				}
			} else {
				var_1_48 = (var_1_42 && (! var_1_50));
			}
		} else {
			var_1_48 = var_1_49;
		}
	}


	// From: CodeObject6
	if (var_1_38 > 10u) {
		var_1_51 = 31.2f;
	} else {
		if (var_1_47 != (var_1_45 & var_1_46)) {
			if (var_1_43) {
				var_1_51 = (var_1_52 - (abs (var_1_40)));
			}
		}
	}


	// From: CodeObject7
	if ((min (var_1_52 , var_1_39)) != var_1_51) {
		var_1_53 = ((abs (var_1_54)) + var_1_55);
	}


	// From: CodeObject8
	if (var_1_50) {
		var_1_56 = (abs (abs (max (var_1_46 , var_1_47))));
	} else {
		var_1_56 = (min (var_1_46 , var_1_47));
	}


	// From: CodeObject9
	if (var_1_33) {
		var_1_57 = (var_1_48 || var_1_58);
	} else {
		if ((var_1_46 >> var_1_54) <= ((abs (var_1_35)) + (var_1_56 - var_1_47))) {
			if (var_1_49) {
				var_1_57 = ((! var_1_59) || var_1_60);
			}
		}
	}


	// From: CodeObject10
	if (var_1_42 && var_1_33) {
		var_1_61 = (abs (var_1_36));
	}


	// From: CodeObject11
	if (var_1_45 > (var_1_46 >> var_1_38)) {
		if (var_1_42) {
			var_1_62 = (abs (min ((abs (var_1_40)) , var_1_52)));
		}
	} else {
		if (var_1_54 > var_1_53) {
			var_1_62 = (min (((max (var_1_52 , var_1_63)) - var_1_64) , (min (var_1_40 , 32.4))));
		}
	}


	// From: CodeObject12
	if (var_1_60 || (var_1_51 > var_1_39)) {
		if (var_1_32 > (var_1_47 ^ var_1_56)) {
			var_1_65 = ((! var_1_42) && var_1_60);
		} else {
			var_1_65 = var_1_43;
		}
	}


	// From: CodeObject13
	if (var_1_40 <= 16.25) {
		if (64 <= var_1_53) {
			if (var_1_65) {
				var_1_66 = (abs (var_1_55 + (max (var_1_47 , var_1_53))));
			}
		}
	} else {
		var_1_66 = (1000000 - var_1_36);
	}


	// From: CodeObject14
	if ((- var_1_40) != (max (var_1_63 , var_1_64))) {
		var_1_67 = (max (var_1_46 , ((abs (var_1_68)) - var_1_56)));
	} else {
		var_1_67 = (abs (var_1_68));
	}


	// From: CodeObject15
	if ((var_1_32 % (abs (var_1_68))) != (32u * var_1_35)) {
		if ((var_1_62 / var_1_70) <= 4.625) {
			var_1_69 = ((64 - var_1_71) + 1);
		} else {
			var_1_69 = (128 - var_1_71);
		}
	}


	// From: CodeObject16
	if (var_1_66 <= var_1_67) {
		var_1_72 = ((max ((abs (var_1_54)) , 4)) - 8);
	} else {
		var_1_72 = var_1_71;
	}


	// From: CodeObject17
	if (var_1_50) {
		var_1_73 = var_1_69;
	}


	// From: CodeObject18
	if ((- var_1_46) == (var_1_61 * var_1_36)) {
		var_1_74 = ((var_1_43 || (! var_1_50)) || var_1_42);
	}


	// From: CodeObject19
	if ((var_1_32 * var_1_68) > (var_1_46 % var_1_37)) {
		if (var_1_49) {
			var_1_75 = (max ((max (var_1_73 , (min (var_1_46 , var_1_71)))) , var_1_68));
		}
	} else {
		if (var_1_44) {
			if ((~ (var_1_56 * 64)) < var_1_32) {
				var_1_75 = var_1_36;
			} else {
				var_1_75 = (min (var_1_35 , var_1_71));
			}
		}
	}


	// From: CodeObject20
	if (var_1_68 > (8 & var_1_37)) {
		var_1_76 = (min ((abs (var_1_45)) , 8));
	} else {
		var_1_76 = (abs (var_1_45));
	}


	// From: CodeObject21
	if (var_1_65 || (var_1_35 >= var_1_66)) {
		var_1_77 = (abs (abs (min (-5 , var_1_54))));
	}


	// From: CodeObject22
	if ((var_1_55 | var_1_36) < (-128 + (abs (64)))) {
		if (var_1_42) {
			var_1_78 = (var_1_56 - (abs (abs (var_1_77))));
		}
	} else {
		var_1_78 = var_1_45;
	}


	// From: CodeObject23
	if (var_1_50) {
		var_1_79 = var_1_44;
	}


	// From: CodeObject24
	var_1_80 = var_1_71;


	// From: CodeObject25
	var_1_81 = (max ((abs (var_1_54)) , (abs (-16))));


	// From: CodeObject26
	if (var_1_61 <= var_1_73) {
		var_1_82 = var_1_78;
	}


	// From: CodeObject27
	var_1_83 = var_1_71;


	// From: CodeObject28
	if (var_1_41) {
		var_1_84 = var_1_50;
	} else {
		var_1_84 = var_1_58;
	}


	// From: CodeObject29
	if (var_1_41) {
		var_1_85 = var_1_68;
	}


	// From: CodeObject30
	if (var_1_74) {
		var_1_86 = var_1_59;
	} else {
		var_1_86 = var_1_87;
	}


	// From: CodeObject31
	if (var_1_72 < var_1_56) {
		var_1_88 = (var_1_89 + var_1_90);
	}


	// From: CodeObject32
	if (var_1_75 >= (var_1_73 ^ (max (var_1_45 , var_1_83)))) {
		var_1_91 = var_1_42;
	}


	// From: Req2Batch72PS_CN_250
	if ((last_1_var_1_29 * last_1_var_1_23) <= last_1_var_1_29) {
		var_1_10 = (var_1_11 + 10);
	} else {
		if (last_1_var_1_17 || last_1_var_1_17) {
			if (((abs (last_1_var_1_20)) - var_1_14) == (last_1_var_1_20 + last_1_var_1_20)) {
				var_1_10 = (var_1_11 + var_1_16);
			} else {
				var_1_10 = var_1_11;
			}
		} else {
			var_1_10 = var_1_16;
		}
	}


	// From: Req5Batch72PS_CN_250
	if ((last_1_var_1_29 + last_1_var_1_29) > last_1_var_1_26) {
		var_1_23 = var_1_25;
	}


	// From: Req3Batch72PS_CN_250
	var_1_17 = (var_1_18 && var_1_19);


	// From: Req4Batch72PS_CN_250
	if (! var_1_18) {
		var_1_20 = (max (var_1_21 , var_1_22));
	}


	// From: Req6Batch72PS_CN_250
	if (256 >= var_1_10) {
		if (var_1_17 && (var_1_25 >= (var_1_27 - var_1_28))) {
			var_1_26 = 16;
		} else {
			var_1_26 = var_1_28;
		}
	} else {
		var_1_26 = var_1_25;
	}


	// From: Req1Batch72PS_CN_250
	signed long int stepLocal_0 = var_1_23 * var_1_26;
	if ((min (var_1_20 , 63.5)) > (2.4 * var_1_20)) {
		if (stepLocal_0 <= (~ var_1_26)) {
			var_1_1 = ((min (var_1_10 , var_1_10)) + var_1_23);
		} else {
			var_1_1 = var_1_10;
		}
	} else {
		var_1_1 = -50;
	}


	// From: Req8Batch72PS_CN_250
	var_1_31 = var_1_26;


	// From: Req7Batch72PS_CN_250
	var_1_29 = var_1_1;
}



void updateVariables() {
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -63);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 127);
	assume_abort_if_not(var_1_27 <= 255);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 65535);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 65535);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 2147483647);
	assume_abort_if_not(var_1_37 <= 4294967294);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 2147483647);
	assume_abort_if_not(var_1_38 <= 4294967294);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854765600e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 254);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 254);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 0);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= -63);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -63);
	assume_abort_if_not(var_1_55 <= 63);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 1);
	assume_abort_if_not(var_1_58 <= 1);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 1);
	assume_abort_if_not(var_1_59 <= 1);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 0);
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854765600e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854765600e+12F && var_1_64 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_68 >= 32767);
	assume_abort_if_not(var_1_68 <= 65534);
	var_1_70 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_70 >= -922337.2036854776000e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854776000e+12F && var_1_70 >= 1.0e-20F ));
	assume_abort_if_not(var_1_70 != 0.0F);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 63);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 1);
	assume_abort_if_not(var_1_87 <= 1);
	var_1_89 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_89 >= -461168.6018427382800e+13F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 4611686.018427382800e+12F && var_1_89 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_90 >= -461168.6018427382800e+13F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 4611686.018427382800e+12F && var_1_90 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_17 = var_1_17;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_29 = var_1_29;
}

int property() {
	return (((((((((min (var_1_20 , 63.5)) > (2.4 * var_1_20)) ? (((var_1_23 * var_1_26) <= (~ var_1_26)) ? (var_1_1 == ((signed short int) ((min (var_1_10 , var_1_10)) + var_1_23))) : (var_1_1 == ((signed short int) var_1_10))) : (var_1_1 == ((signed short int) -50))) && (((last_1_var_1_29 * last_1_var_1_23) <= last_1_var_1_29) ? (var_1_10 == ((signed char) (var_1_11 + 10))) : ((last_1_var_1_17 || last_1_var_1_17) ? ((((abs (last_1_var_1_20)) - var_1_14) == (last_1_var_1_20 + last_1_var_1_20)) ? (var_1_10 == ((signed char) (var_1_11 + var_1_16))) : (var_1_10 == ((signed char) var_1_11))) : (var_1_10 == ((signed char) var_1_16))))) && (var_1_17 == ((unsigned char) (var_1_18 && var_1_19)))) && ((! var_1_18) ? (var_1_20 == ((double) (max (var_1_21 , var_1_22)))) : 1)) && (((last_1_var_1_29 + last_1_var_1_29) > last_1_var_1_26) ? (var_1_23 == ((unsigned char) var_1_25)) : 1)) && ((256 >= var_1_10) ? ((var_1_17 && (var_1_25 >= (var_1_27 - var_1_28))) ? (var_1_26 == ((unsigned short int) 16)) : (var_1_26 == ((unsigned short int) var_1_28))) : (var_1_26 == ((unsigned short int) var_1_25)))) && (var_1_29 == ((signed long int) var_1_1))) && (var_1_31 == ((unsigned long int) var_1_26))
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
