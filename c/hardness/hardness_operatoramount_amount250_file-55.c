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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch55Amount250.c", 13, "reach_error"); }
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
signed char var_1_1 = -2;
signed char var_1_4 = 0;
signed char var_1_5 = -5;
signed short int var_1_6 = -32;
signed char var_1_7 = 8;
unsigned char var_1_8 = 2;
float var_1_10 = 15.6;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 50;
unsigned char var_1_14 = 1;
unsigned short int var_1_15 = 8;
unsigned short int var_1_16 = 45236;
unsigned short int var_1_17 = 60002;
unsigned short int var_1_18 = 26921;
signed long int var_1_19 = -32;
float var_1_20 = 10.3;
double var_1_21 = 4.625;
signed long int var_1_23 = 1000000000;
unsigned short int var_1_24 = 16;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 4;
unsigned char var_1_27 = 32;
signed char var_1_28 = 4;
unsigned char var_1_29 = 0;
signed char var_1_30 = 64;
double var_1_31 = 128.75;
double var_1_32 = 8.5;
float var_1_33 = 64.62;
float var_1_34 = 1.35;
float var_1_35 = 63.5;
float var_1_36 = 31.7;
float var_1_37 = 32.75;
unsigned long int var_1_38 = 2;
unsigned long int var_1_40 = 2718795108;
unsigned long int var_1_41 = 2;
signed short int var_1_42 = -8;
unsigned char var_1_43 = 1;
double var_1_44 = 32.5;
double var_1_45 = 99999999999.2;
double var_1_46 = 256.25;
double var_1_47 = 8.375;
signed char var_1_48 = 32;
signed char var_1_49 = 10;
signed char var_1_50 = 8;
unsigned long int var_1_51 = 25;
unsigned char var_1_53 = 5;
double var_1_54 = 1.625;
float var_1_55 = 9999999999999.6;
unsigned long int var_1_56 = 128;
unsigned long int var_1_57 = 1000000000;
unsigned long int var_1_58 = 1000000000;
unsigned long int var_1_59 = 32;
signed long int var_1_60 = 8;
signed long int var_1_61 = 16;
signed long int var_1_62 = 1550644391;
unsigned long int var_1_63 = 32;
signed short int var_1_64 = 1;
signed short int var_1_65 = -200;
signed long int var_1_66 = -1;
unsigned char var_1_67 = 128;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_19 = -32;
unsigned long int last_1_var_1_38 = 2;
signed short int last_1_var_1_42 = -8;
signed short int last_1_var_1_64 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch55Amount250
	if (! var_1_14) {
		if ((! var_1_14) && var_1_25) {
			var_1_24 = (var_1_17 - last_1_var_1_42);
		}
	} else {
		if ((var_1_11 - var_1_17) < last_1_var_1_19) {
			var_1_24 = ((var_1_17 - var_1_13) - var_1_12);
		} else {
			var_1_24 = (min (var_1_12 , var_1_17));
		}
	}


	// From: Req4Batch55Amount250
	if (31.25 < var_1_10) {
		var_1_15 = (var_1_16 - var_1_24);
	} else {
		var_1_15 = ((var_1_17 - (min (var_1_24 , var_1_4))) - (var_1_18 - 25));
	}


	// From: Req2Batch55Amount250
	if (var_1_5 > (last_1_var_1_38 % var_1_7)) {
		var_1_6 = var_1_5;
	} else {
		var_1_6 = (var_1_5 + var_1_7);
	}


	// From: Req20Batch55Amount250
	if ((var_1_46 - var_1_35) != (var_1_36 - var_1_45)) {
		if (var_1_29) {
			var_1_63 = (var_1_40 - (max (var_1_49 , var_1_23)));
		}
	} else {
		if (var_1_43) {
			var_1_63 = last_1_var_1_64;
		} else {
			var_1_63 = (var_1_40 - ((var_1_57 - var_1_30) + var_1_16));
		}
	}


	// From: Req16Batch55Amount250
	if (! (var_1_63 >= var_1_40)) {
		var_1_54 = var_1_37;
	}


	// From: Req8Batch55Amount250
	unsigned char stepLocal_2 = var_1_14;
	if (stepLocal_2 && var_1_29) {
		var_1_28 = ((var_1_30 - var_1_27) - var_1_4);
	}


	// From: Req9Batch55Amount250
	var_1_31 = var_1_32;


	// From: Req13Batch55Amount250
	unsigned long int stepLocal_6 = var_1_63;
	if (var_1_7 >= stepLocal_6) {
		if (var_1_29) {
			if (var_1_25) {
				var_1_44 = (max (var_1_32 , 49.4));
			} else {
				var_1_44 = (var_1_36 - (var_1_45 + var_1_46));
			}
		} else {
			var_1_44 = (max (var_1_45 , (min (var_1_37 , (var_1_46 + var_1_47)))));
		}
	} else {
		var_1_44 = (var_1_47 + (abs (max (var_1_46 , var_1_45))));
	}


	// From: Req17Batch55Amount250
	if (var_1_45 > var_1_37) {
		var_1_55 = (var_1_37 - var_1_46);
	}


	// From: Req19Batch55Amount250
	if (var_1_43) {
		var_1_60 = (var_1_23 - var_1_49);
	} else {
		var_1_60 = ((var_1_57 + var_1_61) - (var_1_62 - var_1_27));
	}


	// From: Req22Batch55Amount250
	var_1_65 = var_1_17;


	// From: Req12Batch55Amount250
	unsigned char stepLocal_5 = var_1_25;
	unsigned short int stepLocal_4 = var_1_15;
	if (var_1_43) {
		if (stepLocal_4 > (abs (- var_1_12))) {
			if ((var_1_30 > (var_1_60 + var_1_7)) || stepLocal_5) {
				var_1_42 = var_1_6;
			} else {
				var_1_42 = var_1_15;
			}
		} else {
			var_1_42 = ((var_1_11 + var_1_13) - var_1_30);
		}
	} else {
		var_1_42 = (var_1_6 + 25);
	}


	// From: Req5Batch55Amount250
	if (var_1_10 != (var_1_55 / var_1_20)) {
		if (((max (var_1_10 , var_1_20)) / var_1_21) == (var_1_55 + var_1_54)) {
			if ((max (var_1_4 , var_1_12)) < (max ((max (var_1_6 , var_1_7)) , var_1_65))) {
				var_1_19 = var_1_11;
			} else {
				var_1_19 = (var_1_4 - ((var_1_23 + 1000000000) - (abs (var_1_5))));
			}
		}
	}


	// From: Req15Batch55Amount250
	if ((var_1_4 >> var_1_53) < var_1_63) {
		var_1_51 = var_1_13;
	} else {
		if ((max (var_1_60 , var_1_40)) >= var_1_63) {
			var_1_51 = (max (1u , var_1_49));
		} else {
			var_1_51 = (min (((abs (2200038692u)) - var_1_60) , (var_1_40 - var_1_23)));
		}
	}


	// From: Req21Batch55Amount250
	unsigned long int stepLocal_11 = var_1_63 + -5;
	unsigned char stepLocal_10 = var_1_25;
	if (stepLocal_11 <= var_1_63) {
		if (stepLocal_10 || (var_1_14 || var_1_43)) {
			var_1_64 = var_1_30;
		} else {
			var_1_64 = var_1_42;
		}
	} else {
		var_1_64 = var_1_17;
	}


	// From: Req3Batch55Amount250
	unsigned char stepLocal_0 = (var_1_31 / var_1_10) < 255.625f;
	if (stepLocal_0 && (var_1_7 < (var_1_5 * -100))) {
		var_1_8 = (max (((var_1_11 + var_1_12) - var_1_4) , var_1_13));
	} else {
		if (var_1_14) {
			var_1_8 = var_1_4;
		} else {
			var_1_8 = var_1_13;
		}
	}


	// From: Req7Batch55Amount250
	signed long int stepLocal_1 = var_1_60;
	if ((- var_1_16) <= stepLocal_1) {
		if ((var_1_54 * var_1_21) < (var_1_20 * var_1_10)) {
			var_1_26 = (var_1_12 + (100 - var_1_27));
		} else {
			var_1_26 = var_1_12;
		}
	} else {
		var_1_26 = var_1_13;
	}


	// From: Req10Batch55Amount250
	if (var_1_55 < (var_1_32 * (var_1_34 - var_1_35))) {
		if (var_1_10 > (var_1_35 - 64.5f)) {
			var_1_33 = var_1_32;
		}
	} else {
		var_1_33 = ((min (var_1_36 , 9.625f)) - var_1_37);
	}


	// From: Req14Batch55Amount250
	unsigned char stepLocal_8 = var_1_51 <= var_1_13;
	unsigned long int stepLocal_7 = var_1_16 + var_1_51;
	if (var_1_25 || stepLocal_8) {
		var_1_48 = var_1_5;
	} else {
		if (var_1_15 >= stepLocal_7) {
			if (var_1_25) {
				var_1_48 = (var_1_5 + (max (var_1_27 , (var_1_49 - var_1_50))));
			} else {
				var_1_48 = (var_1_49 - var_1_4);
			}
		} else {
			var_1_48 = var_1_30;
		}
	}


	// From: Req18Batch55Amount250
	unsigned short int stepLocal_9 = var_1_16;
	if (stepLocal_9 < (var_1_63 / var_1_30)) {
		var_1_56 = (var_1_49 + var_1_4);
	} else {
		if (var_1_54 < var_1_31) {
			if ((- (var_1_55 + var_1_54)) >= (128.25 + var_1_36)) {
				var_1_56 = (var_1_19 + var_1_15);
			} else {
				var_1_56 = ((abs (var_1_40)) - ((var_1_23 + var_1_57) - (var_1_58 - var_1_15)));
			}
		} else {
			var_1_56 = (var_1_40 - ((var_1_59 + var_1_16) + var_1_27));
		}
	}


	// From: Req23Batch55Amount250
	signed long int stepLocal_12 = var_1_67 - var_1_49;
	if (stepLocal_12 >= var_1_30) {
		var_1_66 = ((var_1_65 + var_1_63) + (max (var_1_49 , 10)));
	} else {
		if (var_1_55 > 500.5f) {
			var_1_66 = var_1_19;
		} else {
			var_1_66 = var_1_13;
		}
	}


	// From: Req11Batch55Amount250
	signed char stepLocal_3 = var_1_5;
	if (var_1_19 > stepLocal_3) {
		if ((64.05f * var_1_10) != var_1_33) {
			var_1_38 = (min (var_1_24 , var_1_51));
		} else {
			var_1_38 = (var_1_40 - (min (var_1_16 , (var_1_17 + var_1_24))));
		}
	} else {
		var_1_38 = var_1_41;
	}


	// From: Req1Batch55Amount250
	if (-2 == var_1_56) {
		if ((var_1_56 * var_1_15) <= -500) {
			var_1_1 = (abs (2 - var_1_4));
		} else {
			var_1_1 = (abs (var_1_4));
		}
	} else {
		var_1_1 = (var_1_5 + 5);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -63);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -128);
	assume_abort_if_not(var_1_7 <= 127);
	assume_abort_if_not(var_1_7 != 0);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 63);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 64);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 32767);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 49150);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 16383);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	assume_abort_if_not(var_1_20 != 0.0F);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	assume_abort_if_not(var_1_21 != 0.0F);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 536870911);
	assume_abort_if_not(var_1_23 <= 1073741823);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 62);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967294);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -461168.6018427383000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 63);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 63);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 6);
	var_1_57 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_57 >= 536870912);
	assume_abort_if_not(var_1_57 <= 1073741823);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 536870911);
	assume_abort_if_not(var_1_58 <= 1073741823);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 536870912);
	var_1_61 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 1073741823);
	var_1_62 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_62 >= 1073741823);
	assume_abort_if_not(var_1_62 <= 2147483646);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 127);
	assume_abort_if_not(var_1_67 <= 255);
}



void updateLastVariables(void) {
	last_1_var_1_19 = var_1_19;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_64 = var_1_64;
}

int property(void) {
	return (((((((((((((((((((((((-2 == var_1_56) ? (((var_1_56 * var_1_15) <= -500) ? (var_1_1 == ((signed char) (abs (2 - var_1_4)))) : (var_1_1 == ((signed char) (abs (var_1_4))))) : (var_1_1 == ((signed char) (var_1_5 + 5)))) && ((var_1_5 > (last_1_var_1_38 % var_1_7)) ? (var_1_6 == ((signed short int) var_1_5)) : (var_1_6 == ((signed short int) (var_1_5 + var_1_7))))) && ((((var_1_31 / var_1_10) < 255.625f) && (var_1_7 < (var_1_5 * -100))) ? (var_1_8 == ((unsigned char) (max (((var_1_11 + var_1_12) - var_1_4) , var_1_13)))) : (var_1_14 ? (var_1_8 == ((unsigned char) var_1_4)) : (var_1_8 == ((unsigned char) var_1_13))))) && ((31.25 < var_1_10) ? (var_1_15 == ((unsigned short int) (var_1_16 - var_1_24))) : (var_1_15 == ((unsigned short int) ((var_1_17 - (min (var_1_24 , var_1_4))) - (var_1_18 - 25)))))) && ((var_1_10 != (var_1_55 / var_1_20)) ? ((((max (var_1_10 , var_1_20)) / var_1_21) == (var_1_55 + var_1_54)) ? (((max (var_1_4 , var_1_12)) < (max ((max (var_1_6 , var_1_7)) , var_1_65))) ? (var_1_19 == ((signed long int) var_1_11)) : (var_1_19 == ((signed long int) (var_1_4 - ((var_1_23 + 1000000000) - (abs (var_1_5))))))) : 1) : 1)) && ((! var_1_14) ? (((! var_1_14) && var_1_25) ? (var_1_24 == ((unsigned short int) (var_1_17 - last_1_var_1_42))) : 1) : (((var_1_11 - var_1_17) < last_1_var_1_19) ? (var_1_24 == ((unsigned short int) ((var_1_17 - var_1_13) - var_1_12))) : (var_1_24 == ((unsigned short int) (min (var_1_12 , var_1_17))))))) && (((- var_1_16) <= var_1_60) ? (((var_1_54 * var_1_21) < (var_1_20 * var_1_10)) ? (var_1_26 == ((unsigned char) (var_1_12 + (100 - var_1_27)))) : (var_1_26 == ((unsigned char) var_1_12))) : (var_1_26 == ((unsigned char) var_1_13)))) && ((var_1_14 && var_1_29) ? (var_1_28 == ((signed char) ((var_1_30 - var_1_27) - var_1_4))) : 1)) && (var_1_31 == ((double) var_1_32))) && ((var_1_55 < (var_1_32 * (var_1_34 - var_1_35))) ? ((var_1_10 > (var_1_35 - 64.5f)) ? (var_1_33 == ((float) var_1_32)) : 1) : (var_1_33 == ((float) ((min (var_1_36 , 9.625f)) - var_1_37))))) && ((var_1_19 > var_1_5) ? (((64.05f * var_1_10) != var_1_33) ? (var_1_38 == ((unsigned long int) (min (var_1_24 , var_1_51)))) : (var_1_38 == ((unsigned long int) (var_1_40 - (min (var_1_16 , (var_1_17 + var_1_24))))))) : (var_1_38 == ((unsigned long int) var_1_41)))) && (var_1_43 ? ((var_1_15 > (abs (- var_1_12))) ? (((var_1_30 > (var_1_60 + var_1_7)) || var_1_25) ? (var_1_42 == ((signed short int) var_1_6)) : (var_1_42 == ((signed short int) var_1_15))) : (var_1_42 == ((signed short int) ((var_1_11 + var_1_13) - var_1_30)))) : (var_1_42 == ((signed short int) (var_1_6 + 25))))) && ((var_1_7 >= var_1_63) ? (var_1_29 ? (var_1_25 ? (var_1_44 == ((double) (max (var_1_32 , 49.4)))) : (var_1_44 == ((double) (var_1_36 - (var_1_45 + var_1_46))))) : (var_1_44 == ((double) (max (var_1_45 , (min (var_1_37 , (var_1_46 + var_1_47)))))))) : (var_1_44 == ((double) (var_1_47 + (abs (max (var_1_46 , var_1_45)))))))) && ((var_1_25 || (var_1_51 <= var_1_13)) ? (var_1_48 == ((signed char) var_1_5)) : ((var_1_15 >= (var_1_16 + var_1_51)) ? (var_1_25 ? (var_1_48 == ((signed char) (var_1_5 + (max (var_1_27 , (var_1_49 - var_1_50)))))) : (var_1_48 == ((signed char) (var_1_49 - var_1_4)))) : (var_1_48 == ((signed char) var_1_30))))) && (((var_1_4 >> var_1_53) < var_1_63) ? (var_1_51 == ((unsigned long int) var_1_13)) : (((max (var_1_60 , var_1_40)) >= var_1_63) ? (var_1_51 == ((unsigned long int) (max (1u , var_1_49)))) : (var_1_51 == ((unsigned long int) (min (((abs (2200038692u)) - var_1_60) , (var_1_40 - var_1_23)))))))) && ((! (var_1_63 >= var_1_40)) ? (var_1_54 == ((double) var_1_37)) : 1)) && ((var_1_45 > var_1_37) ? (var_1_55 == ((float) (var_1_37 - var_1_46))) : 1)) && ((var_1_16 < (var_1_63 / var_1_30)) ? (var_1_56 == ((unsigned long int) (var_1_49 + var_1_4))) : ((var_1_54 < var_1_31) ? (((- (var_1_55 + var_1_54)) >= (128.25 + var_1_36)) ? (var_1_56 == ((unsigned long int) (var_1_19 + var_1_15))) : (var_1_56 == ((unsigned long int) ((abs (var_1_40)) - ((var_1_23 + var_1_57) - (var_1_58 - var_1_15)))))) : (var_1_56 == ((unsigned long int) (var_1_40 - ((var_1_59 + var_1_16) + var_1_27))))))) && (var_1_43 ? (var_1_60 == ((signed long int) (var_1_23 - var_1_49))) : (var_1_60 == ((signed long int) ((var_1_57 + var_1_61) - (var_1_62 - var_1_27)))))) && (((var_1_46 - var_1_35) != (var_1_36 - var_1_45)) ? (var_1_29 ? (var_1_63 == ((unsigned long int) (var_1_40 - (max (var_1_49 , var_1_23))))) : 1) : (var_1_43 ? (var_1_63 == ((unsigned long int) last_1_var_1_64)) : (var_1_63 == ((unsigned long int) (var_1_40 - ((var_1_57 - var_1_30) + var_1_16))))))) && (((var_1_63 + -5) <= var_1_63) ? ((var_1_25 || (var_1_14 || var_1_43)) ? (var_1_64 == ((signed short int) var_1_30)) : (var_1_64 == ((signed short int) var_1_42))) : (var_1_64 == ((signed short int) var_1_17)))) && (var_1_65 == ((signed short int) var_1_17))) && (((var_1_67 - var_1_49) >= var_1_30) ? (var_1_66 == ((signed long int) ((var_1_65 + var_1_63) + (max (var_1_49 , 10))))) : ((var_1_55 > 500.5f) ? (var_1_66 == ((signed long int) var_1_19)) : (var_1_66 == ((signed long int) var_1_13))))
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
