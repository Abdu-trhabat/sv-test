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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch109Amount250.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 10;
double var_1_3 = 256.5;
unsigned short int var_1_5 = 8;
unsigned short int var_1_6 = 5;
unsigned short int var_1_7 = 5;
unsigned short int var_1_8 = 32;
double var_1_9 = 64.5;
unsigned short int var_1_10 = 47725;
unsigned short int var_1_11 = 5;
signed char var_1_12 = 10;
signed char var_1_13 = -5;
signed char var_1_14 = 1;
signed char var_1_15 = 25;
float var_1_16 = 999999999999.75;
float var_1_18 = 1.75;
float var_1_19 = 256.5;
unsigned char var_1_20 = 25;
unsigned char var_1_21 = 4;
unsigned char var_1_22 = 200;
signed char var_1_23 = -64;
signed char var_1_25 = 64;
signed char var_1_26 = 2;
signed char var_1_27 = 4;
signed char var_1_29 = -1;
unsigned char var_1_30 = 0;
double var_1_31 = 10.2;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
double var_1_35 = 16.4;
double var_1_36 = 64.5;
double var_1_37 = 0.0;
double var_1_38 = 0.0;
double var_1_39 = 0.0;
double var_1_40 = 64.05;
unsigned char var_1_41 = 1;
unsigned char var_1_43 = 0;
signed long int var_1_44 = -32;
signed long int var_1_45 = 1000000000;
unsigned short int var_1_46 = 4;
unsigned char var_1_47 = 0;
signed long int var_1_48 = -8;
signed short int var_1_49 = 8;
signed short int var_1_50 = 4;
signed char var_1_51 = -16;
signed short int var_1_52 = 23214;
unsigned long int var_1_55 = 16;
unsigned long int var_1_56 = 3147469417;
float var_1_57 = 4.625;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 1;
double var_1_60 = 15.75;
double var_1_61 = 2.4;
signed char var_1_62 = -64;
unsigned long int var_1_63 = 4;
unsigned long int var_1_65 = 1860630331;
unsigned long int var_1_66 = 1000000000;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_8 = 32;
signed char last_1_var_1_23 = -64;
signed long int last_1_var_1_44 = -32;
unsigned long int last_1_var_1_55 = 16;
unsigned long int last_1_var_1_63 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req19Batch109Amount250
	unsigned long int stepLocal_11 = var_1_6 & last_1_var_1_63;
	signed long int stepLocal_10 = last_1_var_1_44;
	if (stepLocal_11 >= last_1_var_1_23) {
		if (stepLocal_10 <= (~ (min (var_1_15 , var_1_13)))) {
			var_1_60 = var_1_37;
		} else {
			var_1_60 = (abs (var_1_38 - var_1_40));
		}
	} else {
		var_1_60 = var_1_19;
	}


	// From: Req9Batch109Amount250
	if (var_1_13 >= (var_1_26 - var_1_27)) {
		if (last_1_var_1_55 >= last_1_var_1_8) {
			var_1_41 = (var_1_32 && var_1_43);
		}
	}


	// From: Req18Batch109Amount250
	if (var_1_41 && var_1_43) {
		var_1_58 = (var_1_59 && var_1_32);
	} else {
		var_1_58 = (! (! (var_1_43 && var_1_34)));
	}


	// From: Req2Batch109Amount250
	if (var_1_3 < ((max (var_1_9 , 2.625)) - (max (0.25 , 5.3)))) {
		var_1_8 = (max ((var_1_10 - var_1_11) , var_1_6));
	} else {
		if (var_1_10 <= var_1_6) {
			var_1_8 = (abs (var_1_10));
		}
	}


	// From: Req5Batch109Amount250
	signed long int stepLocal_1 = (var_1_11 * var_1_13) / var_1_10;
	if (stepLocal_1 >= (1 ^ var_1_6)) {
		var_1_20 = (min ((max (5 , var_1_21)) , var_1_22));
	}


	// From: Req8Batch109Amount250
	if (var_1_32) {
		var_1_35 = (var_1_36 - ((var_1_37 + var_1_38) - (var_1_39 - var_1_40)));
	} else {
		var_1_35 = (abs (var_1_18));
	}


	// From: Req20Batch109Amount250
	var_1_61 = (max (5.02 , var_1_37));


	// From: Req7Batch109Amount250
	if (((- var_1_19) / (abs (var_1_3))) != (var_1_60 / (min (var_1_31 , 9.999999999992E11)))) {
		var_1_30 = (var_1_41 || (var_1_41 || (var_1_58 || var_1_32)));
	} else {
		var_1_30 = (var_1_33 || var_1_34);
	}


	// From: Req1Batch109Amount250
	if ((5.45 * var_1_35) == (10.8 + (128.625 / var_1_3))) {
		if (var_1_35 < (var_1_3 * var_1_61)) {
			var_1_1 = (max (var_1_5 , (max (var_1_6 , var_1_7))));
		} else {
			var_1_1 = var_1_7;
		}
	}


	// From: Req3Batch109Amount250
	unsigned short int stepLocal_0 = var_1_8;
	if (var_1_61 > (abs (var_1_9 - 63.6))) {
		if (stepLocal_0 <= var_1_5) {
			var_1_12 = ((max (var_1_13 , var_1_14)) + (min (50 , var_1_15)));
		} else {
			var_1_12 = (max ((max (var_1_15 , var_1_14)) , var_1_13));
		}
	}


	// From: Req13Batch109Amount250
	if (var_1_60 <= var_1_36) {
		var_1_48 = var_1_5;
	} else {
		if (! (! (var_1_31 < var_1_37))) {
			var_1_48 = (max ((max ((max (var_1_26 , var_1_21)) , var_1_14)) , var_1_1));
		} else {
			var_1_48 = var_1_10;
		}
	}


	// From: Req16Batch109Amount250
	if (var_1_41) {
		if (var_1_3 > var_1_38) {
			var_1_55 = (var_1_22 + var_1_10);
		} else {
			if (var_1_60 >= 32.7f) {
				var_1_55 = (min ((abs (max (var_1_10 , 1u))) , var_1_1));
			} else {
				var_1_55 = (var_1_8 + (var_1_1 + var_1_52));
			}
		}
	} else {
		if (var_1_7 != var_1_27) {
			var_1_55 = ((abs (var_1_56)) - var_1_27);
		} else {
			var_1_55 = (var_1_56 - (max (var_1_1 , var_1_45)));
		}
	}


	// From: Req6Batch109Amount250
	signed char stepLocal_2 = var_1_27;
	if (var_1_30) {
		if (var_1_30) {
			var_1_23 = (var_1_25 - (var_1_26 + var_1_27));
		} else {
			var_1_23 = (var_1_27 - var_1_26);
		}
	} else {
		if (! var_1_58) {
			var_1_23 = ((abs (var_1_29)) + var_1_26);
		} else {
			if (var_1_61 >= 15.4) {
				if (stepLocal_2 < var_1_14) {
					var_1_23 = (var_1_15 + var_1_14);
				}
			} else {
				var_1_23 = var_1_14;
			}
		}
	}


	// From: Req22Batch109Amount250
	if ((var_1_50 & var_1_22) > var_1_55) {
		if (var_1_38 == var_1_35) {
			var_1_63 = ((var_1_65 + (var_1_45 + var_1_66)) - var_1_7);
		} else {
			var_1_63 = var_1_10;
		}
	}


	// From: Req10Batch109Amount250
	if (var_1_58) {
		var_1_44 = ((max (var_1_25 , var_1_1)) - ((1000000000 + var_1_45) - var_1_27));
	}


	// From: Req11Batch109Amount250
	signed char stepLocal_3 = var_1_26;
	if (! (var_1_21 >= var_1_10)) {
		if (stepLocal_3 < (var_1_27 << var_1_44)) {
			var_1_46 = (abs (var_1_11));
		} else {
			var_1_46 = (var_1_10 - var_1_27);
		}
	} else {
		var_1_46 = (var_1_11 + var_1_27);
	}


	// From: Req12Batch109Amount250
	unsigned char stepLocal_4 = var_1_45 > var_1_48;
	if (var_1_58) {
		var_1_47 = (! 0);
	} else {
		if (var_1_41 && stepLocal_4) {
			var_1_47 = (var_1_32 && (var_1_30 || var_1_43));
		}
	}


	// From: Req14Batch109Amount250
	if ((var_1_15 > (abs (var_1_29))) && ((var_1_27 / var_1_50) > var_1_46)) {
		var_1_49 = (abs (var_1_21));
	} else {
		var_1_49 = (var_1_48 + var_1_13);
	}


	// From: Req15Batch109Amount250
	unsigned char stepLocal_7 = var_1_58;
	unsigned long int stepLocal_6 = var_1_55;
	unsigned long int stepLocal_5 = (var_1_55 + var_1_22) - (var_1_52 - var_1_26);
	if (stepLocal_5 < (max ((var_1_7 - 1) , (var_1_25 - var_1_5)))) {
		if (var_1_41) {
			if (! var_1_30) {
				var_1_51 = ((max ((min (var_1_26 , var_1_25)) , 0)) - var_1_27);
			} else {
				if (var_1_34 || stepLocal_7) {
					var_1_51 = (var_1_27 + var_1_13);
				} else {
					var_1_51 = (abs (var_1_29));
				}
			}
		} else {
			if (stepLocal_6 < ((var_1_45 + var_1_55) & var_1_10)) {
				var_1_51 = (min ((min (var_1_15 , (abs (var_1_14)))) , var_1_25));
			}
		}
	}


	// From: Req17Batch109Amount250
	signed char stepLocal_9 = var_1_27;
	signed char stepLocal_8 = var_1_29;
	if (var_1_55 < stepLocal_9) {
		if (stepLocal_8 > var_1_63) {
			var_1_57 = (5.4f - (var_1_40 + var_1_38));
		} else {
			var_1_57 = (var_1_37 + var_1_40);
		}
	} else {
		var_1_57 = (var_1_40 + var_1_39);
	}


	// From: Req21Batch109Amount250
	signed char stepLocal_13 = var_1_15;
	signed long int stepLocal_12 = var_1_45;
	if (! var_1_58) {
		if (stepLocal_12 > var_1_63) {
			var_1_62 = var_1_29;
		} else {
			if ((var_1_44 + (var_1_7 * var_1_50)) >= stepLocal_13) {
				var_1_62 = (abs (var_1_25));
			} else {
				var_1_62 = var_1_27;
			}
		}
	}


	// From: Req4Batch109Amount250
	if (var_1_47) {
		var_1_16 = (max (var_1_18 , var_1_19));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -63);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	assume_abort_if_not(var_1_31 != 0.0F);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 2305843.009213691400e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 2305843.009213691400e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 2305843.009213691400e+12F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= 536870912);
	assume_abort_if_not(var_1_45 <= 1073741823);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= -32768);
	assume_abort_if_not(var_1_50 <= 32767);
	assume_abort_if_not(var_1_50 != 0);
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= 16383);
	assume_abort_if_not(var_1_52 <= 32767);
	var_1_56 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_56 >= 2147483647);
	assume_abort_if_not(var_1_56 <= 4294967294);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 1);
	assume_abort_if_not(var_1_59 <= 1);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 1073741823);
	assume_abort_if_not(var_1_65 <= 2147483647);
	var_1_66 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_66 >= 536870912);
	assume_abort_if_not(var_1_66 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_63 = var_1_63;
}

int property(void) {
	return (((((((((((((((((((((((5.45 * var_1_35) == (10.8 + (128.625 / var_1_3))) ? ((var_1_35 < (var_1_3 * var_1_61)) ? (var_1_1 == ((unsigned short int) (max (var_1_5 , (max (var_1_6 , var_1_7)))))) : (var_1_1 == ((unsigned short int) var_1_7))) : 1) && ((var_1_3 < ((max (var_1_9 , 2.625)) - (max (0.25 , 5.3)))) ? (var_1_8 == ((unsigned short int) (max ((var_1_10 - var_1_11) , var_1_6)))) : ((var_1_10 <= var_1_6) ? (var_1_8 == ((unsigned short int) (abs (var_1_10)))) : 1))) && ((var_1_61 > (abs (var_1_9 - 63.6))) ? ((var_1_8 <= var_1_5) ? (var_1_12 == ((signed char) ((max (var_1_13 , var_1_14)) + (min (50 , var_1_15))))) : (var_1_12 == ((signed char) (max ((max (var_1_15 , var_1_14)) , var_1_13))))) : 1)) && (var_1_47 ? (var_1_16 == ((float) (max (var_1_18 , var_1_19)))) : 1)) && ((((var_1_11 * var_1_13) / var_1_10) >= (1 ^ var_1_6)) ? (var_1_20 == ((unsigned char) (min ((max (5 , var_1_21)) , var_1_22)))) : 1)) && (var_1_30 ? (var_1_30 ? (var_1_23 == ((signed char) (var_1_25 - (var_1_26 + var_1_27)))) : (var_1_23 == ((signed char) (var_1_27 - var_1_26)))) : ((! var_1_58) ? (var_1_23 == ((signed char) ((abs (var_1_29)) + var_1_26))) : ((var_1_61 >= 15.4) ? ((var_1_27 < var_1_14) ? (var_1_23 == ((signed char) (var_1_15 + var_1_14))) : 1) : (var_1_23 == ((signed char) var_1_14)))))) && ((((- var_1_19) / (abs (var_1_3))) != (var_1_60 / (min (var_1_31 , 9.999999999992E11)))) ? (var_1_30 == ((unsigned char) (var_1_41 || (var_1_41 || (var_1_58 || var_1_32))))) : (var_1_30 == ((unsigned char) (var_1_33 || var_1_34))))) && (var_1_32 ? (var_1_35 == ((double) (var_1_36 - ((var_1_37 + var_1_38) - (var_1_39 - var_1_40))))) : (var_1_35 == ((double) (abs (var_1_18)))))) && ((var_1_13 >= (var_1_26 - var_1_27)) ? ((last_1_var_1_55 >= last_1_var_1_8) ? (var_1_41 == ((unsigned char) (var_1_32 && var_1_43))) : 1) : 1)) && (var_1_58 ? (var_1_44 == ((signed long int) ((max (var_1_25 , var_1_1)) - ((1000000000 + var_1_45) - var_1_27)))) : 1)) && ((! (var_1_21 >= var_1_10)) ? ((var_1_26 < (var_1_27 << var_1_44)) ? (var_1_46 == ((unsigned short int) (abs (var_1_11)))) : (var_1_46 == ((unsigned short int) (var_1_10 - var_1_27)))) : (var_1_46 == ((unsigned short int) (var_1_11 + var_1_27))))) && (var_1_58 ? (var_1_47 == ((unsigned char) (! 0))) : ((var_1_41 && (var_1_45 > var_1_48)) ? (var_1_47 == ((unsigned char) (var_1_32 && (var_1_30 || var_1_43)))) : 1))) && ((var_1_60 <= var_1_36) ? (var_1_48 == ((signed long int) var_1_5)) : ((! (! (var_1_31 < var_1_37))) ? (var_1_48 == ((signed long int) (max ((max ((max (var_1_26 , var_1_21)) , var_1_14)) , var_1_1)))) : (var_1_48 == ((signed long int) var_1_10))))) && (((var_1_15 > (abs (var_1_29))) && ((var_1_27 / var_1_50) > var_1_46)) ? (var_1_49 == ((signed short int) (abs (var_1_21)))) : (var_1_49 == ((signed short int) (var_1_48 + var_1_13))))) && ((((var_1_55 + var_1_22) - (var_1_52 - var_1_26)) < (max ((var_1_7 - 1) , (var_1_25 - var_1_5)))) ? (var_1_41 ? ((! var_1_30) ? (var_1_51 == ((signed char) ((max ((min (var_1_26 , var_1_25)) , 0)) - var_1_27))) : ((var_1_34 || var_1_58) ? (var_1_51 == ((signed char) (var_1_27 + var_1_13))) : (var_1_51 == ((signed char) (abs (var_1_29)))))) : ((var_1_55 < ((var_1_45 + var_1_55) & var_1_10)) ? (var_1_51 == ((signed char) (min ((min (var_1_15 , (abs (var_1_14)))) , var_1_25)))) : 1)) : 1)) && (var_1_41 ? ((var_1_3 > var_1_38) ? (var_1_55 == ((unsigned long int) (var_1_22 + var_1_10))) : ((var_1_60 >= 32.7f) ? (var_1_55 == ((unsigned long int) (min ((abs (max (var_1_10 , 1u))) , var_1_1)))) : (var_1_55 == ((unsigned long int) (var_1_8 + (var_1_1 + var_1_52)))))) : ((var_1_7 != var_1_27) ? (var_1_55 == ((unsigned long int) ((abs (var_1_56)) - var_1_27))) : (var_1_55 == ((unsigned long int) (var_1_56 - (max (var_1_1 , var_1_45)))))))) && ((var_1_55 < var_1_27) ? ((var_1_29 > var_1_63) ? (var_1_57 == ((float) (5.4f - (var_1_40 + var_1_38)))) : (var_1_57 == ((float) (var_1_37 + var_1_40)))) : (var_1_57 == ((float) (var_1_40 + var_1_39))))) && ((var_1_41 && var_1_43) ? (var_1_58 == ((unsigned char) (var_1_59 && var_1_32))) : (var_1_58 == ((unsigned char) (! (! (var_1_43 && var_1_34))))))) && (((var_1_6 & last_1_var_1_63) >= last_1_var_1_23) ? ((last_1_var_1_44 <= (~ (min (var_1_15 , var_1_13)))) ? (var_1_60 == ((double) var_1_37)) : (var_1_60 == ((double) (abs (var_1_38 - var_1_40))))) : (var_1_60 == ((double) var_1_19)))) && (var_1_61 == ((double) (max (5.02 , var_1_37))))) && ((! var_1_58) ? ((var_1_45 > var_1_63) ? (var_1_62 == ((signed char) var_1_29)) : (((var_1_44 + (var_1_7 * var_1_50)) >= var_1_15) ? (var_1_62 == ((signed char) (abs (var_1_25)))) : (var_1_62 == ((signed char) var_1_27)))) : 1)) && (((var_1_50 & var_1_22) > var_1_55) ? ((var_1_38 == var_1_35) ? (var_1_63 == ((unsigned long int) ((var_1_65 + (var_1_45 + var_1_66)) - var_1_7))) : (var_1_63 == ((unsigned long int) var_1_10))) : 1)
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
