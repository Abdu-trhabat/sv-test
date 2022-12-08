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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch49Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 16;
signed char var_1_3 = -5;
unsigned short int var_1_6 = 16;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
double var_1_13 = 64.45;
double var_1_16 = 100.625;
double var_1_17 = 8.5;
double var_1_18 = 128.8;
double var_1_19 = 4.04;
double var_1_20 = 200.75;
double var_1_21 = 16.25;
double var_1_22 = 32.95;
signed short int var_1_23 = -8;
signed char var_1_28 = 50;
signed char var_1_29 = -32;
signed char var_1_30 = 16;
signed char var_1_31 = -4;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 100;
unsigned char var_1_35 = 16;
unsigned char var_1_36 = 4;
signed long int var_1_37 = 256;
float var_1_38 = 1.3;
float var_1_39 = 99.75;
float var_1_40 = 3.625;
unsigned short int var_1_41 = 256;
unsigned short int var_1_42 = 31535;
unsigned short int var_1_43 = 25862;
signed char var_1_44 = 5;
signed char var_1_45 = 16;
signed char var_1_46 = 100;
signed char var_1_47 = 10;
double var_1_48 = 31.8;
unsigned long int var_1_49 = 256;
unsigned long int var_1_50 = 3377587143;
float var_1_51 = 5.9;
unsigned long int var_1_52 = 1400246017;
unsigned long int var_1_53 = 1984508200;
unsigned long int var_1_54 = 2014152316;
double var_1_55 = 0.5;
double var_1_56 = 15.1;
double var_1_57 = 0.0;
signed short int var_1_58 = 32;
signed short int var_1_59 = 21539;
double var_1_60 = 0.875;
float var_1_61 = 7.75;
float var_1_62 = 0.0;
float var_1_63 = 1.25;
float var_1_64 = 2.5;
signed long int var_1_65 = -25;
signed char var_1_66 = 0;
signed char var_1_67 = 1;
signed char var_1_68 = 1;
signed char var_1_69 = 25;
unsigned char var_1_70 = 5;
unsigned long int var_1_71 = 8;
signed short int var_1_72 = -8;
unsigned long int var_1_73 = 2;
unsigned char var_1_74 = 128;
double var_1_75 = 10.65;
unsigned long int var_1_76 = 64;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_10 = 1;
signed short int last_1_var_1_23 = -8;
unsigned char last_1_var_1_32 = 0;
unsigned long int last_1_var_1_49 = 256;
double last_1_var_1_56 = 15.1;
signed short int last_1_var_1_58 = 32;
float last_1_var_1_61 = 7.75;
signed long int last_1_var_1_65 = -25;
unsigned long int last_1_var_1_71 = 8;
signed short int last_1_var_1_72 = -8;
unsigned char last_1_var_1_74 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch49Amount250
	signed long int stepLocal_6 = last_1_var_1_23;
	if (last_1_var_1_10) {
		if (last_1_var_1_10) {
			if (stepLocal_6 < last_1_var_1_71) {
				var_1_41 = ((min (62724 , (var_1_42 + var_1_43))) - last_1_var_1_32);
			}
		}
	}


	// From: Req1Batch49Amount250
	unsigned long int stepLocal_0 = last_1_var_1_49;
	if ((-32 * (last_1_var_1_74 / var_1_3)) >= stepLocal_0) {
		var_1_1 = (abs ((-1 + var_1_3) + last_1_var_1_23));
	}


	// From: Req3Batch49Amount250
	if (! var_1_11) {
		if ((last_1_var_1_32 * (min (last_1_var_1_58 , last_1_var_1_72))) >= var_1_3) {
			var_1_10 = var_1_12;
		}
	} else {
		var_1_10 = 0;
	}


	// From: Req26Batch49Amount250
	if (var_1_10) {
		var_1_74 = var_1_36;
	}


	// From: Req19Batch49Amount250
	unsigned char stepLocal_13 = var_1_10;
	if (((var_1_40 - var_1_21) > (last_1_var_1_61 + 9999999.26)) || stepLocal_13) {
		var_1_61 = (var_1_57 - (var_1_62 - (var_1_63 + var_1_64)));
	}


	// From: Req5Batch49Amount250
	if (var_1_10) {
		var_1_18 = (min ((min (var_1_17 , var_1_16)) , (max (var_1_19 , var_1_20))));
	} else {
		var_1_18 = ((max (var_1_21 , 8.5)) - var_1_22);
	}


	// From: Req12Batch49Amount250
	signed long int stepLocal_7 = abs (var_1_74);
	if (stepLocal_7 == var_1_31) {
		var_1_44 = ((max (var_1_45 , (var_1_46 - 16))) - var_1_47);
	}


	// From: Req16Batch49Amount250
	if ((var_1_21 * (min (var_1_16 , last_1_var_1_56))) > (var_1_61 + (var_1_22 * var_1_20))) {
		var_1_56 = ((var_1_57 - var_1_40) - 32.6);
	} else {
		var_1_56 = var_1_20;
	}


	// From: Req8Batch49Amount250
	if (var_1_12) {
		var_1_32 = (min ((var_1_33 - var_1_34) , (var_1_35 + var_1_36)));
	} else {
		var_1_32 = (min (16 , (var_1_33 - (min (var_1_36 , var_1_35)))));
	}


	// From: Req9Batch49Amount250
	var_1_37 = (var_1_74 - (var_1_32 + (var_1_32 + var_1_32)));


	// From: Req13Batch49Amount250
	if (var_1_35 <= (min (var_1_42 , var_1_32))) {
		if (var_1_56 >= var_1_17) {
			var_1_48 = var_1_17;
		} else {
			var_1_48 = ((var_1_40 - 25.25) + 2.25);
		}
	} else {
		var_1_48 = (var_1_17 + var_1_39);
	}


	// From: Req22Batch49Amount250
	if (var_1_20 >= (max (255.25 , (var_1_57 / var_1_62)))) {
		var_1_70 = var_1_34;
	} else {
		var_1_70 = (max ((max ((var_1_33 - var_1_35) , 4)) , (min (var_1_36 , (abs (var_1_68))))));
	}


	// From: Req25Batch49Amount250
	if (var_1_12) {
		var_1_73 = var_1_43;
	} else {
		var_1_73 = var_1_36;
	}


	// From: Req27Batch49Amount250
	if (var_1_12) {
		var_1_75 = var_1_22;
	} else {
		var_1_75 = var_1_19;
	}


	// From: Req24Batch49Amount250
	signed long int stepLocal_17 = var_1_1;
	if (var_1_45 <= stepLocal_17) {
		var_1_72 = (max (5 , var_1_67));
	} else {
		if (var_1_10) {
			var_1_72 = var_1_41;
		} else {
			var_1_72 = var_1_32;
		}
	}


	// From: Req10Batch49Amount250
	unsigned char stepLocal_5 = var_1_32;
	signed short int stepLocal_4 = var_1_72;
	if (var_1_33 > stepLocal_4) {
		if (stepLocal_5 <= (min (var_1_44 , var_1_34))) {
			var_1_38 = (var_1_21 - (var_1_39 + var_1_40));
		} else {
			var_1_38 = (abs (var_1_22));
		}
	}


	// From: Req18Batch49Amount250
	if ((var_1_61 + var_1_20) > ((max (var_1_38 , var_1_22)) * var_1_75)) {
		var_1_60 = (var_1_39 - var_1_21);
	}


	// From: Req7Batch49Amount250
	unsigned char stepLocal_3 = var_1_20 >= var_1_19;
	signed long int stepLocal_2 = min ((var_1_74 - var_1_74) , var_1_41);
	if (stepLocal_3 && var_1_10) {
		if ((- var_1_70) <= stepLocal_2) {
			var_1_28 = var_1_29;
		} else {
			var_1_28 = (abs (var_1_30));
		}
	} else {
		var_1_28 = (min (var_1_29 , (max (var_1_30 , var_1_31))));
	}


	// From: Req28Batch49Amount250
	unsigned char stepLocal_18 = var_1_10;
	if (stepLocal_18 || (var_1_70 >= (var_1_34 / var_1_46))) {
		if (var_1_12) {
			var_1_76 = (var_1_50 - (max (var_1_70 , var_1_1)));
		}
	} else {
		var_1_76 = var_1_53;
	}


	// From: Req2Batch49Amount250
	var_1_6 = (max (25 , ((min (var_1_32 , var_1_32)) + (100 + var_1_70))));


	// From: Req15Batch49Amount250
	signed long int stepLocal_10 = (abs (var_1_30)) + -16;
	if (stepLocal_10 < var_1_70) {
		var_1_55 = (var_1_39 - var_1_21);
	} else {
		var_1_55 = (max (var_1_19 , (var_1_21 - var_1_22)));
	}


	// From: Req4Batch49Amount250
	if ((max ((- 9.5f) , (- var_1_18))) < var_1_60) {
		var_1_13 = (min (var_1_16 , (var_1_17 + -0.5)));
	}


	// From: Req21Batch49Amount250
	unsigned char stepLocal_16 = var_1_10;
	if (stepLocal_16 && (var_1_13 >= var_1_19)) {
		if (var_1_10) {
			var_1_66 = (((min (var_1_67 , var_1_68)) - 4) + var_1_69);
		} else {
			var_1_66 = (var_1_67 + var_1_69);
		}
	}


	// From: Req6Batch49Amount250
	signed long int stepLocal_1 = (max (var_1_74 , var_1_70)) - (var_1_32 + var_1_70);
	if (var_1_10) {
		var_1_23 = ((var_1_3 + var_1_1) + var_1_32);
	} else {
		if (stepLocal_1 != (min ((max (var_1_1 , last_1_var_1_23)) , (var_1_76 + 8)))) {
			var_1_23 = ((var_1_32 - var_1_70) + ((var_1_70 + var_1_32) - var_1_74));
		} else {
			var_1_23 = var_1_32;
		}
	}


	// From: Req17Batch49Amount250
	unsigned char stepLocal_12 = var_1_35;
	signed short int stepLocal_11 = var_1_23;
	if (var_1_36 > stepLocal_11) {
		if (((var_1_33 - var_1_34) / var_1_46) < stepLocal_12) {
			var_1_58 = (var_1_35 - (var_1_59 - var_1_33));
		} else {
			var_1_58 = (var_1_74 + (var_1_45 + var_1_29));
		}
	}


	// From: Req20Batch49Amount250
	unsigned char stepLocal_15 = var_1_70;
	unsigned char stepLocal_14 = var_1_34;
	if ((var_1_50 + var_1_53) <= stepLocal_14) {
		var_1_65 = ((abs (-256)) - (last_1_var_1_65 + (1000000000 - var_1_43)));
	} else {
		if (var_1_74 > stepLocal_15) {
			var_1_65 = ((max ((var_1_32 + var_1_42) , var_1_30)) + (var_1_66 + (var_1_32 - var_1_70)));
		}
	}


	// From: Req23Batch49Amount250
	var_1_71 = (min (var_1_59 , (min (var_1_66 , var_1_46))));


	// From: Req14Batch49Amount250
	signed char stepLocal_9 = var_1_28;
	unsigned char stepLocal_8 = var_1_12;
	if ((var_1_42 ^ var_1_33) < stepLocal_9) {
		if (! var_1_10) {
			if (var_1_10 || stepLocal_8) {
				var_1_49 = ((var_1_50 - var_1_32) - var_1_71);
			} else {
				if ((var_1_56 / var_1_51) > var_1_19) {
					var_1_49 = var_1_42;
				} else {
					var_1_49 = (min ((var_1_74 + var_1_71) , var_1_36));
				}
			}
		} else {
			var_1_49 = (((max (var_1_52 , var_1_53)) + var_1_54) - var_1_42);
		}
	} else {
		var_1_49 = var_1_32;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	assume_abort_if_not(var_1_3 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -922337.2036854765600e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854765600e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -127);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -126);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 16383);
	assume_abort_if_not(var_1_42 <= 32767);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 16384);
	assume_abort_if_not(var_1_43 <= 32767);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -1);
	assume_abort_if_not(var_1_45 <= 126);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 62);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 3221225470);
	assume_abort_if_not(var_1_50 <= 4294967294);
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
	assume_abort_if_not(var_1_51 != 0.0F);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 1073741823);
	assume_abort_if_not(var_1_52 <= 2147483647);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 1073741823);
	assume_abort_if_not(var_1_53 <= 2147483647);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 1073741824);
	assume_abort_if_not(var_1_54 <= 2147483647);
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= 4611686.018427382800e+12F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854765600e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_59 >= 16383);
	assume_abort_if_not(var_1_59 <= 32766);
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 4611686.018427382800e+12F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 2305843.009213691390e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691390e+12F && var_1_64 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 63);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 63);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= -63);
	assume_abort_if_not(var_1_69 <= 63);
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_74 = var_1_74;
}

int property() {
	return (((((((((((((((((((((((((((((-32 * (last_1_var_1_74 / var_1_3)) >= last_1_var_1_49) ? (var_1_1 == ((signed long int) (abs ((-1 + var_1_3) + last_1_var_1_23)))) : 1) && (var_1_6 == ((unsigned short int) (max (25 , ((min (var_1_32 , var_1_32)) + (100 + var_1_70))))))) && ((! var_1_11) ? (((last_1_var_1_32 * (min (last_1_var_1_58 , last_1_var_1_72))) >= var_1_3) ? (var_1_10 == ((unsigned char) var_1_12)) : 1) : (var_1_10 == ((unsigned char) 0)))) && (((max ((- 9.5f) , (- var_1_18))) < var_1_60) ? (var_1_13 == ((double) (min (var_1_16 , (var_1_17 + -0.5))))) : 1)) && (var_1_10 ? (var_1_18 == ((double) (min ((min (var_1_17 , var_1_16)) , (max (var_1_19 , var_1_20)))))) : (var_1_18 == ((double) ((max (var_1_21 , 8.5)) - var_1_22))))) && (var_1_10 ? (var_1_23 == ((signed short int) ((var_1_3 + var_1_1) + var_1_32))) : ((((max (var_1_74 , var_1_70)) - (var_1_32 + var_1_70)) != (min ((max (var_1_1 , last_1_var_1_23)) , (var_1_76 + 8)))) ? (var_1_23 == ((signed short int) ((var_1_32 - var_1_70) + ((var_1_70 + var_1_32) - var_1_74)))) : (var_1_23 == ((signed short int) var_1_32))))) && (((var_1_20 >= var_1_19) && var_1_10) ? (((- var_1_70) <= (min ((var_1_74 - var_1_74) , var_1_41))) ? (var_1_28 == ((signed char) var_1_29)) : (var_1_28 == ((signed char) (abs (var_1_30))))) : (var_1_28 == ((signed char) (min (var_1_29 , (max (var_1_30 , var_1_31)))))))) && (var_1_12 ? (var_1_32 == ((unsigned char) (min ((var_1_33 - var_1_34) , (var_1_35 + var_1_36))))) : (var_1_32 == ((unsigned char) (min (16 , (var_1_33 - (min (var_1_36 , var_1_35))))))))) && (var_1_37 == ((signed long int) (var_1_74 - (var_1_32 + (var_1_32 + var_1_32)))))) && ((var_1_33 > var_1_72) ? ((var_1_32 <= (min (var_1_44 , var_1_34))) ? (var_1_38 == ((float) (var_1_21 - (var_1_39 + var_1_40)))) : (var_1_38 == ((float) (abs (var_1_22))))) : 1)) && (last_1_var_1_10 ? (last_1_var_1_10 ? ((last_1_var_1_23 < last_1_var_1_71) ? (var_1_41 == ((unsigned short int) ((min (62724 , (var_1_42 + var_1_43))) - last_1_var_1_32))) : 1) : 1) : 1)) && (((abs (var_1_74)) == var_1_31) ? (var_1_44 == ((signed char) ((max (var_1_45 , (var_1_46 - 16))) - var_1_47))) : 1)) && ((var_1_35 <= (min (var_1_42 , var_1_32))) ? ((var_1_56 >= var_1_17) ? (var_1_48 == ((double) var_1_17)) : (var_1_48 == ((double) ((var_1_40 - 25.25) + 2.25)))) : (var_1_48 == ((double) (var_1_17 + var_1_39))))) && (((var_1_42 ^ var_1_33) < var_1_28) ? ((! var_1_10) ? ((var_1_10 || var_1_12) ? (var_1_49 == ((unsigned long int) ((var_1_50 - var_1_32) - var_1_71))) : (((var_1_56 / var_1_51) > var_1_19) ? (var_1_49 == ((unsigned long int) var_1_42)) : (var_1_49 == ((unsigned long int) (min ((var_1_74 + var_1_71) , var_1_36)))))) : (var_1_49 == ((unsigned long int) (((max (var_1_52 , var_1_53)) + var_1_54) - var_1_42)))) : (var_1_49 == ((unsigned long int) var_1_32)))) && ((((abs (var_1_30)) + -16) < var_1_70) ? (var_1_55 == ((double) (var_1_39 - var_1_21))) : (var_1_55 == ((double) (max (var_1_19 , (var_1_21 - var_1_22))))))) && (((var_1_21 * (min (var_1_16 , last_1_var_1_56))) > (var_1_61 + (var_1_22 * var_1_20))) ? (var_1_56 == ((double) ((var_1_57 - var_1_40) - 32.6))) : (var_1_56 == ((double) var_1_20)))) && ((var_1_36 > var_1_23) ? ((((var_1_33 - var_1_34) / var_1_46) < var_1_35) ? (var_1_58 == ((signed short int) (var_1_35 - (var_1_59 - var_1_33)))) : (var_1_58 == ((signed short int) (var_1_74 + (var_1_45 + var_1_29))))) : 1)) && (((var_1_61 + var_1_20) > ((max (var_1_38 , var_1_22)) * var_1_75)) ? (var_1_60 == ((double) (var_1_39 - var_1_21))) : 1)) && ((((var_1_40 - var_1_21) > (last_1_var_1_61 + 9999999.26)) || var_1_10) ? (var_1_61 == ((float) (var_1_57 - (var_1_62 - (var_1_63 + var_1_64))))) : 1)) && (((var_1_50 + var_1_53) <= var_1_34) ? (var_1_65 == ((signed long int) ((abs (-256)) - (last_1_var_1_65 + (1000000000 - var_1_43))))) : ((var_1_74 > var_1_70) ? (var_1_65 == ((signed long int) ((max ((var_1_32 + var_1_42) , var_1_30)) + (var_1_66 + (var_1_32 - var_1_70))))) : 1))) && ((var_1_10 && (var_1_13 >= var_1_19)) ? (var_1_10 ? (var_1_66 == ((signed char) (((min (var_1_67 , var_1_68)) - 4) + var_1_69))) : (var_1_66 == ((signed char) (var_1_67 + var_1_69)))) : 1)) && ((var_1_20 >= (max (255.25 , (var_1_57 / var_1_62)))) ? (var_1_70 == ((unsigned char) var_1_34)) : (var_1_70 == ((unsigned char) (max ((max ((var_1_33 - var_1_35) , 4)) , (min (var_1_36 , (abs (var_1_68)))))))))) && (var_1_71 == ((unsigned long int) (min (var_1_59 , (min (var_1_66 , var_1_46))))))) && ((var_1_45 <= var_1_1) ? (var_1_72 == ((signed short int) (max (5 , var_1_67)))) : (var_1_10 ? (var_1_72 == ((signed short int) var_1_41)) : (var_1_72 == ((signed short int) var_1_32))))) && (var_1_12 ? (var_1_73 == ((unsigned long int) var_1_43)) : (var_1_73 == ((unsigned long int) var_1_36)))) && (var_1_10 ? (var_1_74 == ((unsigned char) var_1_36)) : 1)) && (var_1_12 ? (var_1_75 == ((double) var_1_22)) : (var_1_75 == ((double) var_1_19)))) && ((var_1_10 || (var_1_70 >= (var_1_34 / var_1_46))) ? (var_1_12 ? (var_1_76 == ((unsigned long int) (var_1_50 - (max (var_1_70 , var_1_1))))) : 1) : (var_1_76 == ((unsigned long int) var_1_53)))
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
