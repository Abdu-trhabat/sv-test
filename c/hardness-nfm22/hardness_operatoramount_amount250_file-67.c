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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch67Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 2;
signed char var_1_6 = -2;
signed char var_1_7 = 2;
double var_1_8 = 16.25;
double var_1_9 = 31.5;
double var_1_10 = 127.9;
double var_1_11 = 15.9;
double var_1_12 = 64.75;
double var_1_13 = 0.07999999999999996;
double var_1_14 = 8.6;
unsigned long int var_1_15 = 0;
signed long int var_1_16 = 16;
double var_1_18 = 99.8;
double var_1_20 = 256.125;
unsigned short int var_1_21 = 256;
signed long int var_1_22 = 25;
signed short int var_1_24 = 2;
unsigned long int var_1_25 = 4;
signed short int var_1_26 = 26580;
signed short int var_1_28 = 5;
signed short int var_1_30 = -16;
double var_1_31 = 99999999999.8;
double var_1_34 = 49.65;
signed short int var_1_35 = 4;
signed char var_1_37 = -4;
signed char var_1_38 = 32;
signed char var_1_39 = -1;
signed char var_1_40 = 100;
signed char var_1_41 = 4;
double var_1_42 = 128.625;
signed short int var_1_43 = -16;
signed short int var_1_44 = 26407;
unsigned char var_1_45 = 0;
unsigned long int var_1_46 = 2384780557;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 4;
unsigned char var_1_51 = 128;
unsigned char var_1_52 = 64;
unsigned char var_1_53 = 0;
signed long int var_1_54 = -100;
signed long int var_1_55 = 1000000000;
double var_1_56 = 4.5;
double var_1_57 = 0.0;
double var_1_58 = 1.8;
double var_1_59 = 4.75;
double var_1_60 = 31.25;
signed long int var_1_62 = 1;
float var_1_63 = 128.8;
signed char var_1_64 = -1;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 0;
signed short int var_1_67 = -8;
unsigned long int var_1_68 = 10;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 2;
unsigned short int last_1_var_1_21 = 256;
signed short int last_1_var_1_28 = 5;
signed short int last_1_var_1_30 = -16;
double last_1_var_1_31 = 99999999999.8;
signed short int last_1_var_1_43 = -16;
unsigned char last_1_var_1_45 = 0;
unsigned char last_1_var_1_50 = 4;
signed long int last_1_var_1_54 = -100;
signed long int last_1_var_1_62 = 1;
signed char last_1_var_1_64 = -1;
unsigned long int last_1_var_1_68 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch67Amount250
	signed long int stepLocal_3 = last_1_var_1_64;
	signed long int stepLocal_2 = - last_1_var_1_30;
	if (stepLocal_2 >= (max ((last_1_var_1_68 % var_1_16) , last_1_var_1_54))) {
		if ((last_1_var_1_68 / var_1_16) <= stepLocal_3) {
			var_1_15 = (last_1_var_1_43 + (last_1_var_1_30 + last_1_var_1_50));
		}
	}


	// From: Req11Batch67Amount250
	if ((~ last_1_var_1_21) > (abs (last_1_var_1_1))) {
		var_1_35 = (128 + -1);
	} else {
		var_1_35 = ((last_1_var_1_50 + last_1_var_1_50) - var_1_26);
	}


	// From: Req6Batch67Amount250
	if (last_1_var_1_45) {
		if (((min (var_1_20 , last_1_var_1_31)) * var_1_14) <= (var_1_13 - (abs (var_1_11)))) {
			if (var_1_16 <= (last_1_var_1_62 % var_1_22)) {
				if (var_1_16 >= last_1_var_1_62) {
					var_1_21 = last_1_var_1_50;
				}
			} else {
				var_1_21 = last_1_var_1_50;
			}
		} else {
			var_1_21 = last_1_var_1_50;
		}
	} else {
		var_1_21 = 16;
	}


	// From: Req15Batch67Amount250
	unsigned long int stepLocal_13 = var_1_7 | (last_1_var_1_50 % var_1_25);
	signed long int stepLocal_12 = last_1_var_1_43;
	unsigned long int stepLocal_11 = var_1_46 - last_1_var_1_21;
	if (stepLocal_11 <= ((last_1_var_1_62 | last_1_var_1_62) >> last_1_var_1_28)) {
		if ((- (32 >> last_1_var_1_68)) != stepLocal_13) {
			if (last_1_var_1_62 < stepLocal_12) {
				var_1_45 = (var_1_47 && var_1_48);
			} else {
				var_1_45 = (var_1_47 && (! (var_1_48 && var_1_49)));
			}
		}
	} else {
		var_1_45 = var_1_47;
	}


	// From: Req23Batch67Amount250
	if (var_1_45) {
		var_1_65 = var_1_66;
	}


	// From: Req16Batch67Amount250
	if (last_1_var_1_45) {
		var_1_50 = (var_1_51 - var_1_41);
	} else {
		var_1_50 = ((var_1_52 + 64) - (max (var_1_41 , var_1_53)));
	}


	// From: Req9Batch67Amount250
	var_1_30 = (var_1_50 - var_1_26);


	// From: Req2Batch67Amount250
	var_1_6 = var_1_7;


	// From: Req18Batch67Amount250
	if (((var_1_52 << var_1_35) < (-2 << var_1_30)) || var_1_47) {
		var_1_56 = var_1_10;
	} else {
		if (var_1_47) {
			var_1_56 = (9999.25 + 499.8);
		} else {
			var_1_56 = (max ((var_1_14 - (var_1_57 - var_1_13)) , (var_1_11 + (var_1_58 - var_1_59))));
		}
	}


	// From: Req21Batch67Amount250
	unsigned long int stepLocal_15 = min (var_1_30 , (4161102913u - var_1_50));
	if (stepLocal_15 < var_1_46) {
		var_1_63 = (min ((var_1_57 - var_1_13) , var_1_34));
	} else {
		var_1_63 = ((abs (var_1_34)) - var_1_59);
	}


	// From: Req24Batch67Amount250
	var_1_67 = 10;


	// From: Req22Batch67Amount250
	if (var_1_35 >= last_1_var_1_64) {
		if (var_1_45) {
			var_1_64 = var_1_39;
		}
	} else {
		var_1_64 = var_1_7;
	}


	// From: Req14Batch67Amount250
	signed long int stepLocal_10 = 100;
	unsigned char stepLocal_9 = var_1_65;
	if (stepLocal_10 > (var_1_21 - var_1_50)) {
		if (stepLocal_9 || (! var_1_45)) {
			var_1_43 = (var_1_41 - (min ((var_1_44 - var_1_50) , var_1_50)));
		}
	}


	// From: Req20Batch67Amount250
	signed long int stepLocal_14 = var_1_50 - var_1_41;
	if ((var_1_13 - (max (var_1_57 , var_1_14))) == (var_1_58 - var_1_59)) {
		if (var_1_47) {
			var_1_62 = (500 - var_1_50);
		}
	} else {
		if ((var_1_55 << last_1_var_1_62) <= stepLocal_14) {
			if (var_1_45) {
				var_1_62 = (max (var_1_44 , var_1_50));
			}
		}
	}


	// From: Req8Batch67Amount250
	if (var_1_45 && var_1_65) {
		var_1_28 = (max (var_1_26 , var_1_50));
	} else {
		if (var_1_13 > 63.75) {
			var_1_28 = (var_1_50 + 10);
		}
	}


	// From: Req19Batch67Amount250
	if (var_1_65) {
		if ((var_1_44 == var_1_62) && var_1_45) {
			if (var_1_47) {
				var_1_60 = (var_1_57 - var_1_13);
			} else {
				var_1_60 = (max (var_1_13 , (var_1_20 - var_1_14)));
			}
		}
	} else {
		var_1_60 = (min ((max ((max (0.5 , var_1_13)) , var_1_58)) , var_1_14));
	}


	// From: Req12Batch67Amount250
	unsigned char stepLocal_7 = var_1_34 <= var_1_60;
	unsigned long int stepLocal_6 = var_1_15;
	if (stepLocal_6 > var_1_21) {
		var_1_37 = (var_1_38 + (max (50 , var_1_39)));
	} else {
		if (var_1_45 || stepLocal_7) {
			var_1_37 = (var_1_40 - var_1_41);
		}
	}


	// From: Req7Batch67Amount250
	if ((var_1_16 % (min (var_1_22 , var_1_25))) >= ((var_1_28 * var_1_50) | var_1_50)) {
		if (var_1_65) {
			var_1_24 = ((var_1_26 - var_1_50) - (abs (min (var_1_28 , var_1_7))));
		} else {
			var_1_24 = (var_1_26 - var_1_50);
		}
	}


	// From: Req10Batch67Amount250
	unsigned char stepLocal_5 = var_1_15 != var_1_21;
	if (((- var_1_24) == var_1_35) && stepLocal_5) {
		var_1_31 = (var_1_14 - var_1_20);
	} else {
		var_1_31 = (var_1_11 + (var_1_34 + (max (var_1_14 , var_1_13))));
	}


	// From: Req25Batch67Amount250
	if ((var_1_46 - (var_1_53 + var_1_44)) > ((var_1_15 / var_1_52) / var_1_55)) {
		var_1_68 = (var_1_35 + (var_1_21 + var_1_52));
	} else {
		if (var_1_35 < 128) {
			var_1_68 = (max (var_1_51 , var_1_24));
		} else {
			var_1_68 = var_1_41;
		}
	}


	// From: Req5Batch67Amount250
	unsigned char stepLocal_4 = var_1_45;
	if ((var_1_9 < var_1_31) || stepLocal_4) {
		var_1_18 = (max ((var_1_14 - var_1_20) , (max ((min (var_1_10 , var_1_9)) , (var_1_13 + var_1_11)))));
	}


	// From: Req17Batch67Amount250
	if (var_1_48) {
		if (var_1_31 < ((abs (var_1_34)) - (var_1_14 + var_1_13))) {
			var_1_54 = (max ((abs (var_1_39)) , (max ((min (var_1_44 , var_1_50)) , var_1_35))));
		}
	} else {
		var_1_54 = ((min ((abs (var_1_41)) , var_1_53)) - ((var_1_55 - 8) + (max (var_1_50 , var_1_30))));
	}


	// From: Req1Batch67Amount250
	if ((var_1_54 & var_1_21) <= var_1_50) {
		var_1_1 = var_1_37;
	}


	// From: Req3Batch67Amount250
	signed long int stepLocal_1 = var_1_62;
	signed short int stepLocal_0 = var_1_35;
	if (stepLocal_0 == var_1_54) {
		var_1_8 = (var_1_9 + var_1_10);
	} else {
		if (stepLocal_1 <= (var_1_35 + var_1_21)) {
			var_1_8 = (abs ((var_1_11 + var_1_12) + 1.00000005E7));
		} else {
			var_1_8 = (((var_1_13 - var_1_14) + var_1_12) + var_1_9);
		}
	}


	// From: Req13Batch67Amount250
	signed long int stepLocal_8 = var_1_16;
	if (stepLocal_8 != (var_1_43 * var_1_54)) {
		var_1_42 = (var_1_13 - (max (var_1_20 , var_1_14)));
	} else {
		var_1_42 = (abs (min (var_1_20 , var_1_12)));
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -461168.6018427382800e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -230584.3009213691390e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691390e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -230584.3009213691390e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691390e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691390e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	assume_abort_if_not(var_1_16 != 0);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= -2147483648);
	assume_abort_if_not(var_1_22 <= 2147483647);
	assume_abort_if_not(var_1_22 != 0);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 4294967295);
	assume_abort_if_not(var_1_25 != 0);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 16382);
	assume_abort_if_not(var_1_26 <= 32766);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -230584.3009213691390e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691390e+12F && var_1_34 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -63);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -63);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -1);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_44 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_44 >= 16383);
	assume_abort_if_not(var_1_44 <= 32766);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 2147483647);
	assume_abort_if_not(var_1_46 <= 4294967295);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 1);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 127);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 63);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 127);
	var_1_55 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_55 >= 536870911);
	assume_abort_if_not(var_1_55 <= 1073741823);
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= 4611686.018427382800e+12F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854765600e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427382800e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 0);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_68 = var_1_68;
}

int property() {
	return ((((((((((((((((((((((((((var_1_54 & var_1_21) <= var_1_50) ? (var_1_1 == ((signed short int) var_1_37)) : 1) && (var_1_6 == ((signed char) var_1_7))) && ((var_1_35 == var_1_54) ? (var_1_8 == ((double) (var_1_9 + var_1_10))) : ((var_1_62 <= (var_1_35 + var_1_21)) ? (var_1_8 == ((double) (abs ((var_1_11 + var_1_12) + 1.00000005E7)))) : (var_1_8 == ((double) (((var_1_13 - var_1_14) + var_1_12) + var_1_9)))))) && (((- last_1_var_1_30) >= (max ((last_1_var_1_68 % var_1_16) , last_1_var_1_54))) ? (((last_1_var_1_68 / var_1_16) <= last_1_var_1_64) ? (var_1_15 == ((unsigned long int) (last_1_var_1_43 + (last_1_var_1_30 + last_1_var_1_50)))) : 1) : 1)) && (((var_1_9 < var_1_31) || var_1_45) ? (var_1_18 == ((double) (max ((var_1_14 - var_1_20) , (max ((min (var_1_10 , var_1_9)) , (var_1_13 + var_1_11))))))) : 1)) && (last_1_var_1_45 ? ((((min (var_1_20 , last_1_var_1_31)) * var_1_14) <= (var_1_13 - (abs (var_1_11)))) ? ((var_1_16 <= (last_1_var_1_62 % var_1_22)) ? ((var_1_16 >= last_1_var_1_62) ? (var_1_21 == ((unsigned short int) last_1_var_1_50)) : 1) : (var_1_21 == ((unsigned short int) last_1_var_1_50))) : (var_1_21 == ((unsigned short int) last_1_var_1_50))) : (var_1_21 == ((unsigned short int) 16)))) && (((var_1_16 % (min (var_1_22 , var_1_25))) >= ((var_1_28 * var_1_50) | var_1_50)) ? (var_1_65 ? (var_1_24 == ((signed short int) ((var_1_26 - var_1_50) - (abs (min (var_1_28 , var_1_7)))))) : (var_1_24 == ((signed short int) (var_1_26 - var_1_50)))) : 1)) && ((var_1_45 && var_1_65) ? (var_1_28 == ((signed short int) (max (var_1_26 , var_1_50)))) : ((var_1_13 > 63.75) ? (var_1_28 == ((signed short int) (var_1_50 + 10))) : 1))) && (var_1_30 == ((signed short int) (var_1_50 - var_1_26)))) && ((((- var_1_24) == var_1_35) && (var_1_15 != var_1_21)) ? (var_1_31 == ((double) (var_1_14 - var_1_20))) : (var_1_31 == ((double) (var_1_11 + (var_1_34 + (max (var_1_14 , var_1_13)))))))) && (((~ last_1_var_1_21) > (abs (last_1_var_1_1))) ? (var_1_35 == ((signed short int) (128 + -1))) : (var_1_35 == ((signed short int) ((last_1_var_1_50 + last_1_var_1_50) - var_1_26))))) && ((var_1_15 > var_1_21) ? (var_1_37 == ((signed char) (var_1_38 + (max (50 , var_1_39))))) : ((var_1_45 || (var_1_34 <= var_1_60)) ? (var_1_37 == ((signed char) (var_1_40 - var_1_41))) : 1))) && ((var_1_16 != (var_1_43 * var_1_54)) ? (var_1_42 == ((double) (var_1_13 - (max (var_1_20 , var_1_14))))) : (var_1_42 == ((double) (abs (min (var_1_20 , var_1_12))))))) && ((100 > (var_1_21 - var_1_50)) ? ((var_1_65 || (! var_1_45)) ? (var_1_43 == ((signed short int) (var_1_41 - (min ((var_1_44 - var_1_50) , var_1_50))))) : 1) : 1)) && (((var_1_46 - last_1_var_1_21) <= ((last_1_var_1_62 | last_1_var_1_62) >> last_1_var_1_28)) ? (((- (32 >> last_1_var_1_68)) != (var_1_7 | (last_1_var_1_50 % var_1_25))) ? ((last_1_var_1_62 < last_1_var_1_43) ? (var_1_45 == ((unsigned char) (var_1_47 && var_1_48))) : (var_1_45 == ((unsigned char) (var_1_47 && (! (var_1_48 && var_1_49)))))) : 1) : (var_1_45 == ((unsigned char) var_1_47)))) && (last_1_var_1_45 ? (var_1_50 == ((unsigned char) (var_1_51 - var_1_41))) : (var_1_50 == ((unsigned char) ((var_1_52 + 64) - (max (var_1_41 , var_1_53))))))) && (var_1_48 ? ((var_1_31 < ((abs (var_1_34)) - (var_1_14 + var_1_13))) ? (var_1_54 == ((signed long int) (max ((abs (var_1_39)) , (max ((min (var_1_44 , var_1_50)) , var_1_35)))))) : 1) : (var_1_54 == ((signed long int) ((min ((abs (var_1_41)) , var_1_53)) - ((var_1_55 - 8) + (max (var_1_50 , var_1_30)))))))) && ((((var_1_52 << var_1_35) < (-2 << var_1_30)) || var_1_47) ? (var_1_56 == ((double) var_1_10)) : (var_1_47 ? (var_1_56 == ((double) (9999.25 + 499.8))) : (var_1_56 == ((double) (max ((var_1_14 - (var_1_57 - var_1_13)) , (var_1_11 + (var_1_58 - var_1_59))))))))) && (var_1_65 ? (((var_1_44 == var_1_62) && var_1_45) ? (var_1_47 ? (var_1_60 == ((double) (var_1_57 - var_1_13))) : (var_1_60 == ((double) (max (var_1_13 , (var_1_20 - var_1_14)))))) : 1) : (var_1_60 == ((double) (min ((max ((max (0.5 , var_1_13)) , var_1_58)) , var_1_14)))))) && (((var_1_13 - (max (var_1_57 , var_1_14))) == (var_1_58 - var_1_59)) ? (var_1_47 ? (var_1_62 == ((signed long int) (500 - var_1_50))) : 1) : (((var_1_55 << last_1_var_1_62) <= (var_1_50 - var_1_41)) ? (var_1_45 ? (var_1_62 == ((signed long int) (max (var_1_44 , var_1_50)))) : 1) : 1))) && (((min (var_1_30 , (4161102913u - var_1_50))) < var_1_46) ? (var_1_63 == ((float) (min ((var_1_57 - var_1_13) , var_1_34)))) : (var_1_63 == ((float) ((abs (var_1_34)) - var_1_59))))) && ((var_1_35 >= last_1_var_1_64) ? (var_1_45 ? (var_1_64 == ((signed char) var_1_39)) : 1) : (var_1_64 == ((signed char) var_1_7)))) && (var_1_45 ? (var_1_65 == ((unsigned char) var_1_66)) : 1)) && (var_1_67 == ((signed short int) 10))) && (((var_1_46 - (var_1_53 + var_1_44)) > ((var_1_15 / var_1_52) / var_1_55)) ? (var_1_68 == ((unsigned long int) (var_1_35 + (var_1_21 + var_1_52)))) : ((var_1_35 < 128) ? (var_1_68 == ((unsigned long int) (max (var_1_51 , var_1_24)))) : (var_1_68 == ((unsigned long int) var_1_41))))
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
