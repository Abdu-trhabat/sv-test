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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch57Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char var_1_5 = 0;
unsigned char var_1_7 = 0;
double var_1_8 = 3.5;
double var_1_11 = 999999999999999.6;
double var_1_12 = 10.37;
double var_1_13 = 0.19999999999999996;
double var_1_14 = 24.7;
double var_1_15 = 255.5;
unsigned char var_1_16 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
signed short int var_1_22 = 2;
signed char var_1_23 = -2;
signed char var_1_24 = 0;
signed char var_1_25 = 0;
signed char var_1_26 = 10;
signed char var_1_27 = 25;
signed char var_1_28 = 16;
unsigned short int var_1_29 = 128;
signed char var_1_30 = -8;
signed long int var_1_31 = 128;
float var_1_32 = 32.5;
unsigned long int var_1_33 = 1;
float var_1_34 = 100000000000.2;
float var_1_35 = 4.25;
float var_1_36 = 7.5;
float var_1_37 = 8.3;
double var_1_38 = 1000000000.5;
float var_1_39 = 32.661;
float var_1_40 = 99.8;
float var_1_41 = 64.8;
float var_1_42 = 1.6;
float var_1_43 = 3.325;
unsigned char var_1_44 = 0;
unsigned short int var_1_45 = 25;
unsigned long int var_1_46 = 4;
unsigned long int var_1_47 = 1000000000;
unsigned long int var_1_48 = 1000000000;
unsigned long int var_1_49 = 2147102242;
signed long int var_1_50 = 5;
signed long int var_1_51 = 1;
signed long int var_1_52 = 0;
unsigned char var_1_53 = 5;
unsigned char var_1_54 = 25;
signed short int var_1_55 = 64;
signed short int var_1_56 = 50;
unsigned char var_1_57 = 0;
double var_1_58 = 32.8;
double var_1_59 = 0.0;
signed long int var_1_60 = -5;
signed char var_1_61 = 4;
signed char var_1_62 = 100;
signed char var_1_63 = 50;
unsigned long int var_1_64 = 5;
signed char var_1_65 = -4;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
unsigned char last_1_var_1_16 = 0;
signed char last_1_var_1_23 = -2;
float last_1_var_1_37 = 8.3;
unsigned long int last_1_var_1_46 = 4;
signed long int last_1_var_1_50 = 5;
signed short int last_1_var_1_55 = 64;
signed short int last_1_var_1_56 = 50;
unsigned char last_1_var_1_57 = 0;
unsigned long int last_1_var_1_64 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req19Batch57Amount250
	var_1_60 = (var_1_48 - (abs (last_1_var_1_55)));


	// From: Req10Batch57Amount250
	if (last_1_var_1_64 == (max (last_1_var_1_56 , (var_1_24 - last_1_var_1_46)))) {
		if ((! last_1_var_1_1) || (last_1_var_1_46 < var_1_27)) {
			var_1_44 = (min (var_1_27 , var_1_24));
		}
	} else {
		var_1_44 = (min (16 , (var_1_28 + var_1_24)));
	}


	// From: Req1Batch57Amount250
	unsigned char stepLocal_0 = last_1_var_1_50 <= 10;
	if (last_1_var_1_57) {
		var_1_1 = ((last_1_var_1_57 || last_1_var_1_16) && var_1_5);
	} else {
		if (last_1_var_1_16 && stepLocal_0) {
			var_1_1 = (last_1_var_1_57 || var_1_7);
		}
	}


	// From: Req22Batch57Amount250
	if (var_1_1) {
		if (var_1_52 != var_1_27) {
			var_1_65 = (max (var_1_63 , var_1_26));
		} else {
			var_1_65 = (var_1_25 + var_1_26);
		}
	}


	// From: Req13Batch57Amount250
	if (var_1_12 < var_1_43) {
		var_1_50 = (max ((max (last_1_var_1_23 , var_1_24)) , var_1_26));
	}


	// From: Req11Batch57Amount250
	var_1_45 = (min ((min (var_1_28 , (abs (var_1_27)))) , (abs (var_1_24))));


	// From: Req16Batch57Amount250
	var_1_56 = (max ((var_1_52 - var_1_51) , (abs (-64))));


	// From: Req21Batch57Amount250
	if (var_1_20) {
		var_1_64 = (max (var_1_51 , var_1_49));
	}


	// From: Req6Batch57Amount250
	signed long int stepLocal_7 = var_1_45 / var_1_30;
	if (var_1_65 > stepLocal_7) {
		var_1_29 = (var_1_60 + var_1_24);
	}


	// From: Req5Batch57Amount250
	signed long int stepLocal_6 = var_1_50;
	if (var_1_11 < var_1_15) {
		if (var_1_29 == stepLocal_6) {
			var_1_23 = ((5 - var_1_24) + ((max (var_1_25 , var_1_26)) + (var_1_27 - var_1_28)));
		}
	} else {
		var_1_23 = (5 - var_1_27);
	}


	// From: Req17Batch57Amount250
	if (var_1_64 <= 2) {
		var_1_57 = (var_1_1 && var_1_5);
	}


	// From: Req20Batch57Amount250
	unsigned long int stepLocal_18 = var_1_64;
	signed long int stepLocal_17 = 64;
	if (! var_1_21) {
		if (var_1_52 < stepLocal_18) {
			if (var_1_29 < stepLocal_17) {
				var_1_61 = var_1_24;
			} else {
				var_1_61 = ((var_1_62 - (var_1_63 - var_1_51)) - 8);
			}
		} else {
			var_1_61 = var_1_27;
		}
	}


	// From: Req7Batch57Amount250
	signed long int stepLocal_10 = (var_1_24 << var_1_23) + var_1_29;
	signed long int stepLocal_9 = var_1_45 + var_1_27;
	signed long int stepLocal_8 = var_1_28 - var_1_24;
	if (var_1_60 <= stepLocal_9) {
		if (var_1_30 <= stepLocal_10) {
			if ((min (var_1_50 , var_1_27)) < stepLocal_8) {
				var_1_31 = (abs (var_1_44));
			} else {
				var_1_31 = var_1_30;
			}
		}
	}


	// From: Req3Batch57Amount250
	if (var_1_11 <= var_1_14) {
		var_1_16 = (! var_1_7);
	} else {
		if ((max (var_1_64 , var_1_44)) > (var_1_64 + (max (-16 , var_1_31)))) {
			var_1_16 = var_1_5;
		} else {
			if (var_1_5 || var_1_57) {
				if (var_1_44 >= var_1_31) {
					if (var_1_31 >= ((var_1_64 & var_1_44) * var_1_64)) {
						if (var_1_57) {
							var_1_16 = (! var_1_5);
						} else {
							var_1_16 = 0;
						}
					} else {
						var_1_16 = ((var_1_5 || (var_1_18 || var_1_19)) || (var_1_20 || var_1_21));
					}
				}
			}
		}
	}


	// From: Req14Batch57Amount250
	if ((var_1_33 / (max (var_1_30 , 16))) >= ((var_1_31 >> 2u) / var_1_47)) {
		var_1_53 = (var_1_27 + (64 - var_1_54));
	} else {
		var_1_53 = (var_1_54 + var_1_24);
	}


	// From: Req4Batch57Amount250
	unsigned long int stepLocal_5 = var_1_64;
	unsigned char stepLocal_4 = var_1_57;
	if (var_1_7) {
		if (var_1_50 >= stepLocal_5) {
			if ((var_1_64 < (min (var_1_31 , var_1_44))) && stepLocal_4) {
				var_1_22 = var_1_44;
			}
		}
	} else {
		var_1_22 = 5;
	}


	// From: Req2Batch57Amount250
	signed long int stepLocal_3 = var_1_50;
	signed long int stepLocal_2 = var_1_60 & var_1_22;
	signed long int stepLocal_1 = var_1_60;
	if (stepLocal_2 <= var_1_50) {
		if (var_1_22 > stepLocal_1) {
			if (var_1_60 >= stepLocal_3) {
				var_1_8 = (max (var_1_11 , var_1_12));
			} else {
				var_1_8 = (min ((max (var_1_11 , var_1_12)) , (max ((var_1_13 - var_1_14) , var_1_15))));
			}
		}
	}


	// From: Req9Batch57Amount250
	if ((- var_1_8) <= (var_1_34 * last_1_var_1_37)) {
		if ((last_1_var_1_37 / var_1_38) < var_1_8) {
			var_1_37 = ((min (var_1_34 , (var_1_39 - var_1_40))) + ((var_1_41 + var_1_42) - var_1_43));
		}
	}


	// From: Req18Batch57Amount250
	unsigned long int stepLocal_16 = var_1_64;
	unsigned long int stepLocal_15 = var_1_64;
	if (stepLocal_16 != var_1_52) {
		var_1_58 = (1.05 - var_1_42);
	} else {
		if (stepLocal_15 <= (var_1_50 * var_1_64)) {
			if (var_1_8 >= (abs (var_1_41 * var_1_36))) {
				var_1_58 = (min ((min (var_1_41 , var_1_13)) , var_1_11));
			}
		} else {
			var_1_58 = ((min ((var_1_59 - var_1_40) , (var_1_39 + var_1_42))) - var_1_13);
		}
	}


	// From: Req15Batch57Amount250
	if (var_1_20 || (var_1_49 >= var_1_24)) {
		if (var_1_8 <= (- var_1_14)) {
			var_1_55 = (var_1_30 + (var_1_22 - (10000 - var_1_24)));
		} else {
			var_1_55 = ((max (var_1_44 , var_1_22)) - var_1_28);
		}
	} else {
		var_1_55 = ((min (var_1_28 , var_1_25)) + var_1_54);
	}


	// From: Req12Batch57Amount250
	if (var_1_55 < ((max (var_1_60 , var_1_30)) & var_1_28)) {
		if (var_1_25 < (min (var_1_30 , (max (var_1_55 , var_1_27))))) {
			if (var_1_50 >= var_1_23) {
				var_1_46 = (((var_1_47 + var_1_48) + (var_1_49 - var_1_60)) - ((var_1_28 + var_1_31) + var_1_55));
			} else {
				if (var_1_57) {
					if (var_1_1 || var_1_16) {
						var_1_46 = (max (var_1_60 , var_1_48));
					}
				}
			}
		} else {
			var_1_46 = (max ((min (var_1_64 , var_1_31)) , var_1_49));
		}
	}


	// From: Req8Batch57Amount250
	signed long int stepLocal_14 = min (var_1_28 , var_1_30);
	signed char stepLocal_13 = var_1_25;
	unsigned char stepLocal_12 = var_1_45 > var_1_29;
	unsigned char stepLocal_11 = var_1_18 && (var_1_46 >= var_1_64);
	if (var_1_64 < stepLocal_13) {
		if (stepLocal_12 || var_1_16) {
			if (stepLocal_11 || var_1_21) {
				var_1_32 = (var_1_34 + var_1_35);
			} else {
				var_1_32 = ((max (var_1_35 , var_1_34)) + var_1_36);
			}
		}
	} else {
		if (var_1_26 < stepLocal_14) {
			if (var_1_7) {
				var_1_32 = var_1_35;
			}
		} else {
			var_1_32 = var_1_35;
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -31);
	assume_abort_if_not(var_1_25 <= 32);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -31);
	assume_abort_if_not(var_1_26 <= 32);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 31);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 31);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -128);
	assume_abort_if_not(var_1_30 <= 127);
	assume_abort_if_not(var_1_30 != 0);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967295);
	assume_abort_if_not(var_1_33 != 0);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -461168.6018427383000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	assume_abort_if_not(var_1_38 != 0.0F);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 536870911);
	assume_abort_if_not(var_1_47 <= 1073741824);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 536870912);
	assume_abort_if_not(var_1_48 <= 1073741823);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 1610612735);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_52 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 0);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 4611686.018427383000e+12F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854766000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= 62);
	assume_abort_if_not(var_1_62 <= 126);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= 31);
	assume_abort_if_not(var_1_63 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_64 = var_1_64;
}

int property(void) {
	return (((((((((((((((((((((last_1_var_1_57 ? (var_1_1 == ((unsigned char) ((last_1_var_1_57 || last_1_var_1_16) && var_1_5))) : ((last_1_var_1_16 && (last_1_var_1_50 <= 10)) ? (var_1_1 == ((unsigned char) (last_1_var_1_57 || var_1_7))) : 1)) && (((var_1_60 & var_1_22) <= var_1_50) ? ((var_1_22 > var_1_60) ? ((var_1_60 >= var_1_50) ? (var_1_8 == ((double) (max (var_1_11 , var_1_12)))) : (var_1_8 == ((double) (min ((max (var_1_11 , var_1_12)) , (max ((var_1_13 - var_1_14) , var_1_15))))))) : 1) : 1)) && ((var_1_11 <= var_1_14) ? (var_1_16 == ((unsigned char) (! var_1_7))) : (((max (var_1_64 , var_1_44)) > (var_1_64 + (max (-16 , var_1_31)))) ? (var_1_16 == ((unsigned char) var_1_5)) : ((var_1_5 || var_1_57) ? ((var_1_44 >= var_1_31) ? ((var_1_31 >= ((var_1_64 & var_1_44) * var_1_64)) ? (var_1_57 ? (var_1_16 == ((unsigned char) (! var_1_5))) : (var_1_16 == ((unsigned char) 0))) : (var_1_16 == ((unsigned char) ((var_1_5 || (var_1_18 || var_1_19)) || (var_1_20 || var_1_21))))) : 1) : 1)))) && (var_1_7 ? ((var_1_50 >= var_1_64) ? (((var_1_64 < (min (var_1_31 , var_1_44))) && var_1_57) ? (var_1_22 == ((signed short int) var_1_44)) : 1) : 1) : (var_1_22 == ((signed short int) 5)))) && ((var_1_11 < var_1_15) ? ((var_1_29 == var_1_50) ? (var_1_23 == ((signed char) ((5 - var_1_24) + ((max (var_1_25 , var_1_26)) + (var_1_27 - var_1_28))))) : 1) : (var_1_23 == ((signed char) (5 - var_1_27))))) && ((var_1_65 > (var_1_45 / var_1_30)) ? (var_1_29 == ((unsigned short int) (var_1_60 + var_1_24))) : 1)) && ((var_1_60 <= (var_1_45 + var_1_27)) ? ((var_1_30 <= ((var_1_24 << var_1_23) + var_1_29)) ? (((min (var_1_50 , var_1_27)) < (var_1_28 - var_1_24)) ? (var_1_31 == ((signed long int) (abs (var_1_44)))) : (var_1_31 == ((signed long int) var_1_30))) : 1) : 1)) && ((var_1_64 < var_1_25) ? (((var_1_45 > var_1_29) || var_1_16) ? (((var_1_18 && (var_1_46 >= var_1_64)) || var_1_21) ? (var_1_32 == ((float) (var_1_34 + var_1_35))) : (var_1_32 == ((float) ((max (var_1_35 , var_1_34)) + var_1_36)))) : 1) : ((var_1_26 < (min (var_1_28 , var_1_30))) ? (var_1_7 ? (var_1_32 == ((float) var_1_35)) : 1) : (var_1_32 == ((float) var_1_35))))) && (((- var_1_8) <= (var_1_34 * last_1_var_1_37)) ? (((last_1_var_1_37 / var_1_38) < var_1_8) ? (var_1_37 == ((float) ((min (var_1_34 , (var_1_39 - var_1_40))) + ((var_1_41 + var_1_42) - var_1_43)))) : 1) : 1)) && ((last_1_var_1_64 == (max (last_1_var_1_56 , (var_1_24 - last_1_var_1_46)))) ? (((! last_1_var_1_1) || (last_1_var_1_46 < var_1_27)) ? (var_1_44 == ((unsigned char) (min (var_1_27 , var_1_24)))) : 1) : (var_1_44 == ((unsigned char) (min (16 , (var_1_28 + var_1_24))))))) && (var_1_45 == ((unsigned short int) (min ((min (var_1_28 , (abs (var_1_27)))) , (abs (var_1_24))))))) && ((var_1_55 < ((max (var_1_60 , var_1_30)) & var_1_28)) ? ((var_1_25 < (min (var_1_30 , (max (var_1_55 , var_1_27))))) ? ((var_1_50 >= var_1_23) ? (var_1_46 == ((unsigned long int) (((var_1_47 + var_1_48) + (var_1_49 - var_1_60)) - ((var_1_28 + var_1_31) + var_1_55)))) : (var_1_57 ? ((var_1_1 || var_1_16) ? (var_1_46 == ((unsigned long int) (max (var_1_60 , var_1_48)))) : 1) : 1)) : (var_1_46 == ((unsigned long int) (max ((min (var_1_64 , var_1_31)) , var_1_49))))) : 1)) && ((var_1_12 < var_1_43) ? (var_1_50 == ((signed long int) (max ((max (last_1_var_1_23 , var_1_24)) , var_1_26)))) : 1)) && (((var_1_33 / (max (var_1_30 , 16))) >= ((var_1_31 >> 2u) / var_1_47)) ? (var_1_53 == ((unsigned char) (var_1_27 + (64 - var_1_54)))) : (var_1_53 == ((unsigned char) (var_1_54 + var_1_24))))) && ((var_1_20 || (var_1_49 >= var_1_24)) ? ((var_1_8 <= (- var_1_14)) ? (var_1_55 == ((signed short int) (var_1_30 + (var_1_22 - (10000 - var_1_24))))) : (var_1_55 == ((signed short int) ((max (var_1_44 , var_1_22)) - var_1_28)))) : (var_1_55 == ((signed short int) ((min (var_1_28 , var_1_25)) + var_1_54))))) && (var_1_56 == ((signed short int) (max ((var_1_52 - var_1_51) , (abs (-64))))))) && ((var_1_64 <= 2) ? (var_1_57 == ((unsigned char) (var_1_1 && var_1_5))) : 1)) && ((var_1_64 != var_1_52) ? (var_1_58 == ((double) (1.05 - var_1_42))) : ((var_1_64 <= (var_1_50 * var_1_64)) ? ((var_1_8 >= (abs (var_1_41 * var_1_36))) ? (var_1_58 == ((double) (min ((min (var_1_41 , var_1_13)) , var_1_11)))) : 1) : (var_1_58 == ((double) ((min ((var_1_59 - var_1_40) , (var_1_39 + var_1_42))) - var_1_13)))))) && (var_1_60 == ((signed long int) (var_1_48 - (abs (last_1_var_1_55)))))) && ((! var_1_21) ? ((var_1_52 < var_1_64) ? ((var_1_29 < 64) ? (var_1_61 == ((signed char) var_1_24)) : (var_1_61 == ((signed char) ((var_1_62 - (var_1_63 - var_1_51)) - 8)))) : (var_1_61 == ((signed char) var_1_27))) : 1)) && (var_1_20 ? (var_1_64 == ((unsigned long int) (max (var_1_51 , var_1_49)))) : 1)) && (var_1_1 ? ((var_1_52 != var_1_27) ? (var_1_65 == ((signed char) (max (var_1_63 , var_1_26)))) : (var_1_65 == ((signed char) (var_1_25 + var_1_26)))) : 1)
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
