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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch35Amount250.c", 13, "reach_error"); }
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
signed char var_1_1 = 32;
double var_1_2 = 1.1;
double var_1_3 = 24.5;
signed char var_1_6 = 8;
signed char var_1_7 = 0;
signed char var_1_8 = -64;
signed char var_1_9 = 16;
signed char var_1_10 = -8;
unsigned short int var_1_11 = 16;
double var_1_12 = 32.6;
double var_1_13 = 10000.23;
double var_1_14 = 100.6;
unsigned short int var_1_15 = 47846;
unsigned long int var_1_16 = 100000000;
double var_1_17 = 0.0;
double var_1_18 = 10.6;
unsigned long int var_1_19 = 2;
unsigned long int var_1_20 = 8;
unsigned long int var_1_23 = 32;
unsigned long int var_1_24 = 2018614034;
unsigned long int var_1_25 = 1000000000;
unsigned long int var_1_26 = 2;
unsigned char var_1_27 = 200;
unsigned char var_1_28 = 64;
unsigned long int var_1_29 = 2366998130;
float var_1_30 = 5.25;
signed char var_1_31 = -100;
float var_1_32 = 5.6;
float var_1_33 = 127.45;
float var_1_34 = 2.66;
float var_1_35 = 0.0;
float var_1_36 = 127.9;
signed char var_1_37 = -100;
signed char var_1_38 = 0;
signed char var_1_39 = 0;
signed char var_1_40 = 10;
signed char var_1_41 = 10;
signed short int var_1_42 = -10;
signed short int var_1_44 = 24318;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
signed long int var_1_51 = 5;
double var_1_52 = 1000000000.375;
double var_1_54 = 15.5;
double var_1_55 = 99.1;
float var_1_56 = -0.85;
unsigned long int var_1_57 = 100;
unsigned short int var_1_58 = 2;
unsigned short int var_1_59 = 20145;
signed short int var_1_60 = 1;
unsigned long int var_1_62 = 1;
signed short int var_1_63 = 27087;
signed short int var_1_64 = 8;
signed char var_1_65 = -128;
unsigned long int var_1_66 = 4;
unsigned long int var_1_69 = 3228303301;
signed short int var_1_70 = 0;
signed char var_1_72 = -8;
signed long int var_1_73 = -10;
signed char var_1_74 = -32;
unsigned long int var_1_75 = 32;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_23 = 32;
signed short int last_1_var_1_42 = -10;
unsigned char last_1_var_1_45 = 0;
unsigned char last_1_var_1_50 = 0;
signed long int last_1_var_1_51 = 5;
double last_1_var_1_52 = 1000000000.375;
unsigned short int last_1_var_1_58 = 2;
signed short int last_1_var_1_60 = 1;
signed long int last_1_var_1_73 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch35Amount250
	if ((last_1_var_1_23 == var_1_38) || (50.3f <= var_1_33)) {
		if (last_1_var_1_23 < var_1_9) {
			var_1_42 = ((var_1_44 - var_1_38) - last_1_var_1_60);
		} else {
			var_1_42 = (min ((var_1_41 + var_1_38) , var_1_6));
		}
	}


	// From: Req3Batch35Amount250
	unsigned char stepLocal_1 = last_1_var_1_45;
	if ((1.5f * last_1_var_1_52) <= (var_1_13 - (var_1_17 - var_1_18))) {
		var_1_16 = ((last_1_var_1_58 + (var_1_15 + last_1_var_1_51)) + (var_1_19 + var_1_20));
	} else {
		if (last_1_var_1_50 && stepLocal_1) {
			var_1_16 = (min (last_1_var_1_51 , (5u + last_1_var_1_58)));
		} else {
			var_1_16 = last_1_var_1_51;
		}
	}


	// From: Req5Batch35Amount250
	if (var_1_16 != (var_1_27 - var_1_28)) {
		if (var_1_28 == var_1_24) {
			var_1_26 = (max ((var_1_29 - var_1_28) , 256u));
		}
	} else {
		var_1_26 = var_1_27;
	}


	// From: Req10Batch35Amount250
	if (var_1_24 <= (last_1_var_1_73 + last_1_var_1_42)) {
		if (last_1_var_1_45) {
			var_1_50 = (((var_1_44 + last_1_var_1_23) <= var_1_19) && var_1_49);
		}
	}


	// From: Req11Batch35Amount250
	unsigned char stepLocal_4 = var_1_46;
	if (var_1_50) {
		var_1_51 = (max (var_1_38 , var_1_15));
	} else {
		if (var_1_50 && stepLocal_4) {
			var_1_51 = (min (var_1_28 , var_1_25));
		}
	}


	// From: Req13Batch35Amount250
	unsigned long int stepLocal_9 = var_1_29 - var_1_57;
	if ((min (16u , (var_1_44 / var_1_24))) >= stepLocal_9) {
		var_1_56 = (abs (var_1_36 + (var_1_54 - var_1_55)));
	} else {
		var_1_56 = (abs (max (var_1_18 , (var_1_55 + var_1_54))));
	}


	// From: Req14Batch35Amount250
	signed char stepLocal_12 = var_1_40;
	unsigned char stepLocal_11 = 64 > (var_1_39 - var_1_24);
	unsigned long int stepLocal_10 = var_1_57;
	if (var_1_25 > stepLocal_12) {
		if (var_1_46 || stepLocal_11) {
			if (var_1_19 <= stepLocal_10) {
				var_1_58 = (var_1_15 - (var_1_59 - var_1_41));
			}
		} else {
			var_1_58 = (var_1_44 + var_1_27);
		}
	}


	// From: Req16Batch35Amount250
	if (! var_1_46) {
		var_1_64 = (min ((abs (var_1_41 - var_1_38)) , (min (var_1_39 , (var_1_63 - 64)))));
	} else {
		var_1_64 = (var_1_38 - var_1_44);
	}


	// From: Req20Batch35Amount250
	if (128.6 >= var_1_17) {
		var_1_72 = -64;
	}


	// From: Req21Batch35Amount250
	var_1_73 = var_1_20;


	// From: Req4Batch35Amount250
	if (var_1_17 == (var_1_12 + var_1_13)) {
		var_1_23 = (var_1_15 + (var_1_24 - (var_1_25 - var_1_26)));
	} else {
		if (var_1_50 && (var_1_50 && (3.75 > var_1_14))) {
			var_1_23 = (max (var_1_24 , var_1_20));
		}
	}


	// From: Req12Batch35Amount250
	signed char stepLocal_8 = var_1_39;
	signed char stepLocal_7 = var_1_6;
	unsigned char stepLocal_6 = var_1_50;
	unsigned char stepLocal_5 = var_1_50;
	if (stepLocal_5 && var_1_47) {
		if (stepLocal_7 <= var_1_31) {
			if (stepLocal_8 == var_1_16) {
				if (stepLocal_6 || var_1_47) {
					var_1_52 = (var_1_36 - var_1_18);
				}
			}
		} else {
			var_1_52 = (var_1_36 + (max (var_1_33 , var_1_32)));
		}
	} else {
		var_1_52 = ((min (var_1_32 , var_1_36)) + (var_1_54 - var_1_55));
	}


	// From: Req2Batch35Amount250
	unsigned long int stepLocal_0 = var_1_16 * (~ -2);
	if (var_1_7 > stepLocal_0) {
		if ((var_1_12 - (min (var_1_13 , var_1_14))) <= var_1_52) {
			var_1_11 = (var_1_15 - var_1_16);
		} else {
			var_1_11 = (60864 - var_1_16);
		}
	} else {
		var_1_11 = (var_1_16 + 10);
	}


	// From: Req1Batch35Amount250
	if (var_1_2 < var_1_3) {
		if ((128 + (max (var_1_16 , 4))) <= (min (var_1_73 , 2))) {
			var_1_1 = (var_1_6 + 4);
		} else {
			if ((var_1_73 * var_1_16) <= var_1_6) {
				var_1_1 = (min ((var_1_6 + var_1_7) , var_1_8));
			} else {
				var_1_1 = ((var_1_9 + var_1_10) + var_1_6);
			}
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req6Batch35Amount250
	unsigned long int stepLocal_2 = var_1_25 % var_1_15;
	if (! var_1_50) {
		if (stepLocal_2 == ((var_1_23 / var_1_27) + (var_1_23 + var_1_19))) {
			var_1_30 = (abs (var_1_32 + var_1_33));
		}
	} else {
		var_1_30 = (abs (var_1_34 - (var_1_35 - var_1_36)));
	}


	// From: Req17Batch35Amount250
	if ((var_1_17 - var_1_12) > var_1_52) {
		var_1_65 = (min (var_1_8 , var_1_40));
	}


	// From: Req22Batch35Amount250
	signed long int stepLocal_18 = var_1_41 - var_1_63;
	unsigned long int stepLocal_17 = var_1_69 - (max (var_1_75 , var_1_11));
	if (stepLocal_18 <= var_1_73) {
		var_1_74 = (var_1_38 - var_1_39);
	} else {
		if (var_1_19 < stepLocal_17) {
			var_1_74 = var_1_7;
		}
	}


	// From: Req9Batch35Amount250
	unsigned long int stepLocal_3 = var_1_23;
	if (var_1_24 == stepLocal_3) {
		var_1_45 = (! (var_1_46 && var_1_47));
	} else {
		var_1_45 = (! (var_1_48 || (var_1_50 && var_1_49)));
	}


	// From: Req19Batch35Amount250
	if (var_1_45) {
		if (var_1_48) {
			var_1_70 = (max ((min (var_1_38 , var_1_51)) , var_1_72));
		}
	} else {
		var_1_70 = ((var_1_8 + var_1_39) + var_1_7);
	}


	// From: Req7Batch35Amount250
	if (! var_1_45) {
		var_1_37 = (((var_1_38 + var_1_39) + var_1_40) - var_1_41);
	} else {
		var_1_37 = ((var_1_38 + var_1_10) + var_1_9);
	}


	// From: Req18Batch35Amount250
	unsigned long int stepLocal_16 = var_1_23;
	unsigned char stepLocal_15 = ! var_1_49;
	if (stepLocal_15 || var_1_45) {
		if (var_1_59 <= stepLocal_16) {
			var_1_66 = ((abs (var_1_38)) + (var_1_24 - (abs (var_1_41))));
		} else {
			if (var_1_54 > (var_1_35 + var_1_12)) {
				var_1_66 = ((var_1_69 - var_1_59) - var_1_41);
			}
		}
	} else {
		var_1_66 = var_1_69;
	}


	// From: Req15Batch35Amount250
	signed short int stepLocal_14 = var_1_42;
	signed long int stepLocal_13 = var_1_59 << (abs (var_1_62));
	if (var_1_27 > stepLocal_14) {
		if ((var_1_11 + 128) >= stepLocal_13) {
			if (var_1_50) {
				var_1_60 = (var_1_38 - var_1_11);
			} else {
				if (var_1_45) {
					var_1_60 = ((min (var_1_27 , var_1_70)) + var_1_41);
				}
			}
		}
	} else {
		if (var_1_49) {
			var_1_60 = (((max (var_1_44 , var_1_63)) - var_1_38) - (abs (var_1_6)));
		} else {
			var_1_60 = (var_1_8 + -64);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -63);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -31);
	assume_abort_if_not(var_1_9 <= 32);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -31);
	assume_abort_if_not(var_1_10 <= 31);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 32767);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 4611686.018427388000e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427388000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1073741824);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1073741823);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 1073741823);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 536870911);
	assume_abort_if_not(var_1_25 <= 1073741823);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 127);
	assume_abort_if_not(var_1_27 <= 255);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 2147483647);
	assume_abort_if_not(var_1_29 <= 4294967294);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -128);
	assume_abort_if_not(var_1_31 <= 127);
	assume_abort_if_not(var_1_31 != 0);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -461168.6018427383000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 4611686.018427383000e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 32);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 31);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_44 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_44 >= 16382);
	assume_abort_if_not(var_1_44 <= 32766);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 2147483647);
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 16383);
	assume_abort_if_not(var_1_59 <= 32767);
	var_1_62 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 1);
	var_1_63 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_63 >= 16382);
	assume_abort_if_not(var_1_63 <= 32766);
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 3221225470);
	assume_abort_if_not(var_1_69 <= 4294967294);
	var_1_75 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_23 = var_1_23;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_73 = var_1_73;
}

int property(void) {
	return ((((((((((((((((((((((var_1_2 < var_1_3) ? (((128 + (max (var_1_16 , 4))) <= (min (var_1_73 , 2))) ? (var_1_1 == ((signed char) (var_1_6 + 4))) : (((var_1_73 * var_1_16) <= var_1_6) ? (var_1_1 == ((signed char) (min ((var_1_6 + var_1_7) , var_1_8)))) : (var_1_1 == ((signed char) ((var_1_9 + var_1_10) + var_1_6))))) : (var_1_1 == ((signed char) var_1_7))) && ((var_1_7 > (var_1_16 * (~ -2))) ? (((var_1_12 - (min (var_1_13 , var_1_14))) <= var_1_52) ? (var_1_11 == ((unsigned short int) (var_1_15 - var_1_16))) : (var_1_11 == ((unsigned short int) (60864 - var_1_16)))) : (var_1_11 == ((unsigned short int) (var_1_16 + 10))))) && (((1.5f * last_1_var_1_52) <= (var_1_13 - (var_1_17 - var_1_18))) ? (var_1_16 == ((unsigned long int) ((last_1_var_1_58 + (var_1_15 + last_1_var_1_51)) + (var_1_19 + var_1_20)))) : ((last_1_var_1_50 && last_1_var_1_45) ? (var_1_16 == ((unsigned long int) (min (last_1_var_1_51 , (5u + last_1_var_1_58))))) : (var_1_16 == ((unsigned long int) last_1_var_1_51))))) && ((var_1_17 == (var_1_12 + var_1_13)) ? (var_1_23 == ((unsigned long int) (var_1_15 + (var_1_24 - (var_1_25 - var_1_26))))) : ((var_1_50 && (var_1_50 && (3.75 > var_1_14))) ? (var_1_23 == ((unsigned long int) (max (var_1_24 , var_1_20)))) : 1))) && ((var_1_16 != (var_1_27 - var_1_28)) ? ((var_1_28 == var_1_24) ? (var_1_26 == ((unsigned long int) (max ((var_1_29 - var_1_28) , 256u)))) : 1) : (var_1_26 == ((unsigned long int) var_1_27)))) && ((! var_1_50) ? (((var_1_25 % var_1_15) == ((var_1_23 / var_1_27) + (var_1_23 + var_1_19))) ? (var_1_30 == ((float) (abs (var_1_32 + var_1_33)))) : 1) : (var_1_30 == ((float) (abs (var_1_34 - (var_1_35 - var_1_36))))))) && ((! var_1_45) ? (var_1_37 == ((signed char) (((var_1_38 + var_1_39) + var_1_40) - var_1_41))) : (var_1_37 == ((signed char) ((var_1_38 + var_1_10) + var_1_9))))) && (((last_1_var_1_23 == var_1_38) || (50.3f <= var_1_33)) ? ((last_1_var_1_23 < var_1_9) ? (var_1_42 == ((signed short int) ((var_1_44 - var_1_38) - last_1_var_1_60))) : (var_1_42 == ((signed short int) (min ((var_1_41 + var_1_38) , var_1_6))))) : 1)) && ((var_1_24 == var_1_23) ? (var_1_45 == ((unsigned char) (! (var_1_46 && var_1_47)))) : (var_1_45 == ((unsigned char) (! (var_1_48 || (var_1_50 && var_1_49))))))) && ((var_1_24 <= (last_1_var_1_73 + last_1_var_1_42)) ? (last_1_var_1_45 ? (var_1_50 == ((unsigned char) (((var_1_44 + last_1_var_1_23) <= var_1_19) && var_1_49))) : 1) : 1)) && (var_1_50 ? (var_1_51 == ((signed long int) (max (var_1_38 , var_1_15)))) : ((var_1_50 && var_1_46) ? (var_1_51 == ((signed long int) (min (var_1_28 , var_1_25)))) : 1))) && ((var_1_50 && var_1_47) ? ((var_1_6 <= var_1_31) ? ((var_1_39 == var_1_16) ? ((var_1_50 || var_1_47) ? (var_1_52 == ((double) (var_1_36 - var_1_18))) : 1) : 1) : (var_1_52 == ((double) (var_1_36 + (max (var_1_33 , var_1_32)))))) : (var_1_52 == ((double) ((min (var_1_32 , var_1_36)) + (var_1_54 - var_1_55)))))) && (((min (16u , (var_1_44 / var_1_24))) >= (var_1_29 - var_1_57)) ? (var_1_56 == ((float) (abs (var_1_36 + (var_1_54 - var_1_55))))) : (var_1_56 == ((float) (abs (max (var_1_18 , (var_1_55 + var_1_54)))))))) && ((var_1_25 > var_1_40) ? ((var_1_46 || (64 > (var_1_39 - var_1_24))) ? ((var_1_19 <= var_1_57) ? (var_1_58 == ((unsigned short int) (var_1_15 - (var_1_59 - var_1_41)))) : 1) : (var_1_58 == ((unsigned short int) (var_1_44 + var_1_27)))) : 1)) && ((var_1_27 > var_1_42) ? (((var_1_11 + 128) >= (var_1_59 << (abs (var_1_62)))) ? (var_1_50 ? (var_1_60 == ((signed short int) (var_1_38 - var_1_11))) : (var_1_45 ? (var_1_60 == ((signed short int) ((min (var_1_27 , var_1_70)) + var_1_41))) : 1)) : 1) : (var_1_49 ? (var_1_60 == ((signed short int) (((max (var_1_44 , var_1_63)) - var_1_38) - (abs (var_1_6))))) : (var_1_60 == ((signed short int) (var_1_8 + -64)))))) && ((! var_1_46) ? (var_1_64 == ((signed short int) (min ((abs (var_1_41 - var_1_38)) , (min (var_1_39 , (var_1_63 - 64))))))) : (var_1_64 == ((signed short int) (var_1_38 - var_1_44))))) && (((var_1_17 - var_1_12) > var_1_52) ? (var_1_65 == ((signed char) (min (var_1_8 , var_1_40)))) : 1)) && (((! var_1_49) || var_1_45) ? ((var_1_59 <= var_1_23) ? (var_1_66 == ((unsigned long int) ((abs (var_1_38)) + (var_1_24 - (abs (var_1_41)))))) : ((var_1_54 > (var_1_35 + var_1_12)) ? (var_1_66 == ((unsigned long int) ((var_1_69 - var_1_59) - var_1_41))) : 1)) : (var_1_66 == ((unsigned long int) var_1_69)))) && (var_1_45 ? (var_1_48 ? (var_1_70 == ((signed short int) (max ((min (var_1_38 , var_1_51)) , var_1_72)))) : 1) : (var_1_70 == ((signed short int) ((var_1_8 + var_1_39) + var_1_7))))) && ((128.6 >= var_1_17) ? (var_1_72 == ((signed char) -64)) : 1)) && (var_1_73 == ((signed long int) var_1_20))) && (((var_1_41 - var_1_63) <= var_1_73) ? (var_1_74 == ((signed char) (var_1_38 - var_1_39))) : ((var_1_19 < (var_1_69 - (max (var_1_75 , var_1_11)))) ? (var_1_74 == ((signed char) var_1_7)) : 1))
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
