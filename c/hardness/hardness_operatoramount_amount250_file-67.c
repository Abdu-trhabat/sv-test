// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch67Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 2;
signed short int var_1_5 = 128;
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
unsigned long int var_1_17 = 256;
double var_1_18 = 99.8;
unsigned char var_1_19 = 0;
double var_1_20 = 256.125;
unsigned short int var_1_21 = 256;
signed long int var_1_22 = 25;
unsigned short int var_1_23 = 256;
signed short int var_1_24 = 2;
unsigned long int var_1_25 = 4;
signed short int var_1_26 = 26580;
signed short int var_1_27 = 0;
signed short int var_1_28 = 5;
unsigned char var_1_29 = 1;
signed short int var_1_30 = -16;
double var_1_31 = 99999999999.8;
double var_1_34 = 49.65;
signed short int var_1_35 = 4;
unsigned long int var_1_36 = 256;
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
signed long int var_1_47 = 1;
unsigned short int var_1_48 = 10;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 4;
unsigned char var_1_53 = 128;
unsigned char var_1_54 = 64;
signed long int var_1_55 = -100;
signed long int var_1_56 = 1000000000;
double var_1_57 = 4.5;
double var_1_58 = 0.0;
double var_1_59 = 1.8;
double var_1_60 = 4.75;
double var_1_61 = 31.25;
signed long int var_1_63 = 1;
unsigned short int var_1_64 = 2;
unsigned short int var_1_65 = 51548;
unsigned short int var_1_66 = 43446;
unsigned char var_1_67 = 32;
unsigned char var_1_68 = 5;
unsigned short int var_1_69 = 100;
unsigned char var_1_70 = 1;
signed long int var_1_71 = 2;
signed long int var_1_72 = 4;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 2;
double last_1_var_1_8 = 16.25;
unsigned long int last_1_var_1_15 = 0;
signed short int last_1_var_1_35 = 4;
signed short int last_1_var_1_43 = -16;
unsigned char last_1_var_1_45 = 0;
unsigned char last_1_var_1_52 = 4;
signed long int last_1_var_1_63 = 1;
unsigned short int last_1_var_1_64 = 2;
unsigned short int last_1_var_1_69 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch67Amount250
	if (last_1_var_1_45) {
		if (((min (var_1_20 , last_1_var_1_8)) * var_1_14) <= (var_1_13 - (abs (var_1_11)))) {
			if (var_1_16 <= (last_1_var_1_35 % var_1_22)) {
				if (var_1_16 >= last_1_var_1_63) {
					var_1_21 = var_1_23;
				}
			} else {
				var_1_21 = var_1_23;
			}
		} else {
			var_1_21 = var_1_23;
		}
	} else {
		var_1_21 = 16;
	}


	// From: Req17Batch67Amount250
	if (var_1_49) {
		if (var_1_48 < (abs (var_1_25))) {
			var_1_55 = ((max (2 , (min (last_1_var_1_52 , last_1_var_1_64)))) - var_1_17);
		}
	} else {
		var_1_55 = ((min ((abs (last_1_var_1_1)) , var_1_47)) - ((var_1_56 - 8) + (max (var_1_48 , last_1_var_1_69))));
	}


	// From: Req4Batch67Amount250
	signed short int stepLocal_3 = var_1_5;
	signed long int stepLocal_2 = - var_1_55;
	if (stepLocal_2 >= (max ((last_1_var_1_15 % var_1_16) , var_1_55))) {
		if ((last_1_var_1_15 / var_1_16) <= stepLocal_3) {
			var_1_15 = (last_1_var_1_15 + (var_1_55 + var_1_17));
		}
	}


	// From: Req15Batch67Amount250
	unsigned long int stepLocal_13 = var_1_36;
	unsigned long int stepLocal_12 = (var_1_36 | var_1_55) >> var_1_47;
	signed long int stepLocal_11 = - (32 >> var_1_48);
	if ((var_1_46 - var_1_17) <= stepLocal_12) {
		if (stepLocal_11 != (var_1_40 | (var_1_16 % var_1_47))) {
			if (var_1_26 < stepLocal_13) {
				var_1_45 = (var_1_49 && var_1_50);
			} else {
				var_1_45 = (var_1_50 && (! (var_1_49 && var_1_51)));
			}
		}
	} else {
		var_1_45 = var_1_51;
	}


	// From: Req20Batch67Amount250
	if ((var_1_13 - (max (var_1_14 , var_1_58))) == (var_1_59 - var_1_60)) {
		var_1_63 = (var_1_26 + (min ((8 - var_1_15) , var_1_38)));
	} else {
		if (var_1_45) {
			var_1_63 = (500 - var_1_17);
		}
	}


	// From: Req2Batch67Amount250
	var_1_6 = var_1_7;


	// From: Req8Batch67Amount250
	if (var_1_19 && var_1_29) {
		var_1_28 = (max (var_1_26 , var_1_5));
	} else {
		if (var_1_13 > 63.75) {
			var_1_28 = (var_1_27 + 10);
		}
	}


	// From: Req9Batch67Amount250
	var_1_30 = (var_1_27 - var_1_26);


	// From: Req13Batch67Amount250
	signed long int stepLocal_8 = var_1_21 * var_1_63;
	if (var_1_16 != stepLocal_8) {
		var_1_42 = (var_1_13 - (max (var_1_20 , var_1_14)));
	} else {
		var_1_42 = (abs (min (var_1_20 , var_1_12)));
	}


	// From: Req16Batch67Amount250
	if (var_1_50) {
		var_1_52 = (var_1_53 - var_1_47);
	} else {
		var_1_52 = ((var_1_54 + 64) - (max (var_1_47 , var_1_48)));
	}


	// From: Req23Batch67Amount250
	var_1_69 = var_1_27;


	// From: Req11Batch67Amount250
	if ((~ var_1_15) > (abs (var_1_55))) {
		var_1_35 = (128 + -1);
	} else {
		var_1_35 = ((var_1_27 + var_1_21) - var_1_26);
	}


	// From: Req3Batch67Amount250
	unsigned short int stepLocal_1 = var_1_69;
	signed long int stepLocal_0 = var_1_55;
	if (var_1_21 == stepLocal_1) {
		var_1_8 = (var_1_9 + var_1_10);
	} else {
		if (stepLocal_0 <= (var_1_21 + var_1_55)) {
			var_1_8 = (abs ((var_1_11 + var_1_12) + 1.00000005E7));
		} else {
			var_1_8 = (((var_1_13 - var_1_14) + var_1_12) + var_1_9);
		}
	}


	// From: Req1Batch67Amount250
	if ((var_1_15 & var_1_69) <= var_1_15) {
		var_1_1 = var_1_5;
	}


	// From: Req21Batch67Amount250
	signed short int stepLocal_14 = var_1_35;
	if (var_1_45) {
		var_1_64 = (min (256 , var_1_27));
	} else {
		if ((- (var_1_47 + var_1_55)) <= stepLocal_14) {
			var_1_64 = (var_1_65 - var_1_26);
		} else {
			var_1_64 = ((max (var_1_65 , var_1_66)) - (min ((var_1_44 - var_1_53) , (max (var_1_47 , var_1_26)))));
		}
	}


	// From: Req5Batch67Amount250
	unsigned char stepLocal_4 = var_1_9 < var_1_42;
	if (stepLocal_4 || var_1_45) {
		var_1_18 = (max ((var_1_14 - var_1_20) , (max ((min (var_1_10 , var_1_9)) , (var_1_13 + var_1_11)))));
	}


	// From: Req7Batch67Amount250
	if ((var_1_16 % (min (var_1_22 , var_1_25))) >= ((var_1_21 * var_1_23) | var_1_15)) {
		if (var_1_45) {
			var_1_24 = ((var_1_26 - var_1_27) - (abs (min (var_1_69 , var_1_7))));
		} else {
			var_1_24 = (var_1_26 - var_1_27);
		}
	}


	// From: Req10Batch67Amount250
	unsigned char stepLocal_5 = var_1_63 != var_1_17;
	if (((- var_1_52) == var_1_15) && stepLocal_5) {
		var_1_31 = (var_1_14 - var_1_20);
	} else {
		var_1_31 = (var_1_11 + (var_1_34 + (max (var_1_14 , var_1_13))));
	}


	// From: Req12Batch67Amount250
	unsigned char stepLocal_7 = var_1_34 <= var_1_31;
	unsigned short int stepLocal_6 = var_1_64;
	if (stepLocal_6 > var_1_15) {
		var_1_37 = (var_1_38 + (max (50 , var_1_39)));
	} else {
		if (var_1_45 || stepLocal_7) {
			var_1_37 = (var_1_40 - var_1_41);
		}
	}


	// From: Req14Batch67Amount250
	unsigned char stepLocal_10 = ! var_1_45;
	signed long int stepLocal_9 = 100;
	if (stepLocal_9 > (var_1_64 - var_1_23)) {
		if (var_1_45 || stepLocal_10) {
			var_1_43 = (var_1_41 - (min ((var_1_44 - last_1_var_1_43) , var_1_27)));
		}
	}


	// From: Req18Batch67Amount250
	if (((var_1_56 << var_1_48) < (1 << var_1_69)) || var_1_45) {
		var_1_57 = var_1_10;
	} else {
		if (var_1_45) {
			var_1_57 = (9999.25 + 499.8);
		} else {
			var_1_57 = (max ((var_1_14 - (var_1_58 - var_1_13)) , (var_1_11 + (var_1_59 - var_1_60))));
		}
	}


	// From: Req19Batch67Amount250
	if (var_1_45) {
		if ((var_1_27 == var_1_35) && var_1_45) {
			if (var_1_45) {
				var_1_61 = (var_1_14 - var_1_13);
			} else {
				var_1_61 = (max (var_1_13 , (var_1_20 - var_1_58)));
			}
		}
	} else {
		var_1_61 = (min ((max ((max (0.5 , var_1_13)) , var_1_59)) , var_1_58));
	}


	// From: Req22Batch67Amount250
	unsigned long int stepLocal_15 = (var_1_41 + var_1_15) / var_1_66;
	if (128.75 <= var_1_8) {
		if (stepLocal_15 <= var_1_22) {
			if (0.25 < var_1_58) {
				var_1_67 = var_1_54;
			} else {
				var_1_67 = var_1_53;
			}
		} else {
			var_1_67 = var_1_68;
		}
	}


	// From: Req24Batch67Amount250
	if (((var_1_54 + var_1_1) << (max (var_1_71 , var_1_72))) > (var_1_7 % var_1_47)) {
		if (! (-100000 < (max (var_1_28 , var_1_22)))) {
			var_1_70 = var_1_53;
		} else {
			var_1_70 = var_1_68;
		}
	} else {
		var_1_70 = var_1_53;
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32767);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -230584.3009213691400e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -230584.3009213691400e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691400e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= -2147483648);
	assume_abort_if_not(var_1_22 <= 2147483647);
	assume_abort_if_not(var_1_22 != 0);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65534);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 4294967295);
	assume_abort_if_not(var_1_25 != 0);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 16382);
	assume_abort_if_not(var_1_26 <= 32766);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 16383);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 4294967295);
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
	var_1_47 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 31);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 30);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 127);
	assume_abort_if_not(var_1_53 <= 254);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 63);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_56 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_56 >= 536870911);
	assume_abort_if_not(var_1_56 <= 1073741823);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= 4611686.018427383000e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854766000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 32767);
	assume_abort_if_not(var_1_65 <= 65534);
	var_1_66 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_66 >= 32767);
	assume_abort_if_not(var_1_66 <= 65534);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 254);
	var_1_71 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 22);
	var_1_72 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 22);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_69 = var_1_69;
}

int property(void) {
	return (((((((((((((((((((((((((var_1_15 & var_1_69) <= var_1_15) ? (var_1_1 == ((signed short int) var_1_5)) : 1) && (var_1_6 == ((signed char) var_1_7))) && ((var_1_21 == var_1_69) ? (var_1_8 == ((double) (var_1_9 + var_1_10))) : ((var_1_55 <= (var_1_21 + var_1_55)) ? (var_1_8 == ((double) (abs ((var_1_11 + var_1_12) + 1.00000005E7)))) : (var_1_8 == ((double) (((var_1_13 - var_1_14) + var_1_12) + var_1_9)))))) && (((- var_1_55) >= (max ((last_1_var_1_15 % var_1_16) , var_1_55))) ? (((last_1_var_1_15 / var_1_16) <= var_1_5) ? (var_1_15 == ((unsigned long int) (last_1_var_1_15 + (var_1_55 + var_1_17)))) : 1) : 1)) && (((var_1_9 < var_1_42) || var_1_45) ? (var_1_18 == ((double) (max ((var_1_14 - var_1_20) , (max ((min (var_1_10 , var_1_9)) , (var_1_13 + var_1_11))))))) : 1)) && (last_1_var_1_45 ? ((((min (var_1_20 , last_1_var_1_8)) * var_1_14) <= (var_1_13 - (abs (var_1_11)))) ? ((var_1_16 <= (last_1_var_1_35 % var_1_22)) ? ((var_1_16 >= last_1_var_1_63) ? (var_1_21 == ((unsigned short int) var_1_23)) : 1) : (var_1_21 == ((unsigned short int) var_1_23))) : (var_1_21 == ((unsigned short int) var_1_23))) : (var_1_21 == ((unsigned short int) 16)))) && (((var_1_16 % (min (var_1_22 , var_1_25))) >= ((var_1_21 * var_1_23) | var_1_15)) ? (var_1_45 ? (var_1_24 == ((signed short int) ((var_1_26 - var_1_27) - (abs (min (var_1_69 , var_1_7)))))) : (var_1_24 == ((signed short int) (var_1_26 - var_1_27)))) : 1)) && ((var_1_19 && var_1_29) ? (var_1_28 == ((signed short int) (max (var_1_26 , var_1_5)))) : ((var_1_13 > 63.75) ? (var_1_28 == ((signed short int) (var_1_27 + 10))) : 1))) && (var_1_30 == ((signed short int) (var_1_27 - var_1_26)))) && ((((- var_1_52) == var_1_15) && (var_1_63 != var_1_17)) ? (var_1_31 == ((double) (var_1_14 - var_1_20))) : (var_1_31 == ((double) (var_1_11 + (var_1_34 + (max (var_1_14 , var_1_13)))))))) && (((~ var_1_15) > (abs (var_1_55))) ? (var_1_35 == ((signed short int) (128 + -1))) : (var_1_35 == ((signed short int) ((var_1_27 + var_1_21) - var_1_26))))) && ((var_1_64 > var_1_15) ? (var_1_37 == ((signed char) (var_1_38 + (max (50 , var_1_39))))) : ((var_1_45 || (var_1_34 <= var_1_31)) ? (var_1_37 == ((signed char) (var_1_40 - var_1_41))) : 1))) && ((var_1_16 != (var_1_21 * var_1_63)) ? (var_1_42 == ((double) (var_1_13 - (max (var_1_20 , var_1_14))))) : (var_1_42 == ((double) (abs (min (var_1_20 , var_1_12))))))) && ((100 > (var_1_64 - var_1_23)) ? ((var_1_45 || (! var_1_45)) ? (var_1_43 == ((signed short int) (var_1_41 - (min ((var_1_44 - last_1_var_1_43) , var_1_27))))) : 1) : 1)) && (((var_1_46 - var_1_17) <= ((var_1_36 | var_1_55) >> var_1_47)) ? (((- (32 >> var_1_48)) != (var_1_40 | (var_1_16 % var_1_47))) ? ((var_1_26 < var_1_36) ? (var_1_45 == ((unsigned char) (var_1_49 && var_1_50))) : (var_1_45 == ((unsigned char) (var_1_50 && (! (var_1_49 && var_1_51)))))) : 1) : (var_1_45 == ((unsigned char) var_1_51)))) && (var_1_50 ? (var_1_52 == ((unsigned char) (var_1_53 - var_1_47))) : (var_1_52 == ((unsigned char) ((var_1_54 + 64) - (max (var_1_47 , var_1_48))))))) && (var_1_49 ? ((var_1_48 < (abs (var_1_25))) ? (var_1_55 == ((signed long int) ((max (2 , (min (last_1_var_1_52 , last_1_var_1_64)))) - var_1_17))) : 1) : (var_1_55 == ((signed long int) ((min ((abs (last_1_var_1_1)) , var_1_47)) - ((var_1_56 - 8) + (max (var_1_48 , last_1_var_1_69)))))))) && ((((var_1_56 << var_1_48) < (1 << var_1_69)) || var_1_45) ? (var_1_57 == ((double) var_1_10)) : (var_1_45 ? (var_1_57 == ((double) (9999.25 + 499.8))) : (var_1_57 == ((double) (max ((var_1_14 - (var_1_58 - var_1_13)) , (var_1_11 + (var_1_59 - var_1_60))))))))) && (var_1_45 ? (((var_1_27 == var_1_35) && var_1_45) ? (var_1_45 ? (var_1_61 == ((double) (var_1_14 - var_1_13))) : (var_1_61 == ((double) (max (var_1_13 , (var_1_20 - var_1_58)))))) : 1) : (var_1_61 == ((double) (min ((max ((max (0.5 , var_1_13)) , var_1_59)) , var_1_58)))))) && (((var_1_13 - (max (var_1_14 , var_1_58))) == (var_1_59 - var_1_60)) ? (var_1_63 == ((signed long int) (var_1_26 + (min ((8 - var_1_15) , var_1_38))))) : (var_1_45 ? (var_1_63 == ((signed long int) (500 - var_1_17))) : 1))) && (var_1_45 ? (var_1_64 == ((unsigned short int) (min (256 , var_1_27)))) : (((- (var_1_47 + var_1_55)) <= var_1_35) ? (var_1_64 == ((unsigned short int) (var_1_65 - var_1_26))) : (var_1_64 == ((unsigned short int) ((max (var_1_65 , var_1_66)) - (min ((var_1_44 - var_1_53) , (max (var_1_47 , var_1_26)))))))))) && ((128.75 <= var_1_8) ? ((((var_1_41 + var_1_15) / var_1_66) <= var_1_22) ? ((0.25 < var_1_58) ? (var_1_67 == ((unsigned char) var_1_54)) : (var_1_67 == ((unsigned char) var_1_53))) : (var_1_67 == ((unsigned char) var_1_68))) : 1)) && (var_1_69 == ((unsigned short int) var_1_27))) && ((((var_1_54 + var_1_1) << (max (var_1_71 , var_1_72))) > (var_1_7 % var_1_47)) ? ((! (-100000 < (max (var_1_28 , var_1_22)))) ? (var_1_70 == ((unsigned char) var_1_53)) : (var_1_70 == ((unsigned char) var_1_68))) : (var_1_70 == ((unsigned char) var_1_53)))
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
