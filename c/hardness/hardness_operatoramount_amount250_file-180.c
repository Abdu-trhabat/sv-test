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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch180Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 128;
unsigned char var_1_6 = 16;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 100;
unsigned char var_1_10 = 32;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 128;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed char var_1_15 = -25;
signed char var_1_17 = 25;
signed char var_1_18 = -8;
signed char var_1_19 = 4;
signed char var_1_20 = -16;
signed short int var_1_21 = 64;
double var_1_22 = 10.8;
double var_1_24 = 1.4;
double var_1_25 = 9.65;
double var_1_26 = 0.8;
double var_1_27 = 49.341;
double var_1_28 = 1.5;
signed short int var_1_29 = 64;
double var_1_30 = 127.725;
double var_1_31 = 255.1;
unsigned short int var_1_32 = 64;
unsigned short int var_1_33 = 24157;
unsigned char var_1_34 = 128;
signed char var_1_35 = -100;
signed char var_1_36 = 64;
signed char var_1_37 = 5;
signed char var_1_38 = 32;
signed char var_1_39 = 0;
unsigned char var_1_40 = 100;
unsigned char var_1_41 = 64;
unsigned char var_1_42 = 64;
unsigned char var_1_43 = 8;
unsigned char var_1_44 = 4;
float var_1_45 = 200.25;
float var_1_46 = 0.75;
unsigned long int var_1_47 = 500;
unsigned long int var_1_48 = 1453675508;
unsigned long int var_1_49 = 1175674603;
signed char var_1_50 = 32;
signed char var_1_51 = 50;
signed char var_1_52 = 2;
unsigned char var_1_53 = 10;
unsigned char var_1_54 = 200;
double var_1_56 = 1.5;
double var_1_57 = 127.25;
double var_1_58 = 0.0;
double var_1_59 = 0.0;
double var_1_60 = 8.125;
unsigned char var_1_61 = 2;
unsigned long int var_1_62 = 0;
unsigned long int var_1_63 = 0;
unsigned long int var_1_64 = 0;
unsigned long int var_1_65 = 4290089041;
unsigned short int var_1_66 = 0;
unsigned char var_1_67 = 1;
signed long int var_1_68 = 64;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_29 = 64;
unsigned char last_1_var_1_53 = 10;
unsigned short int last_1_var_1_66 = 0;
unsigned char last_1_var_1_67 = 1;
signed long int last_1_var_1_68 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req18Batch180Amount250
	if ((var_1_41 << (var_1_63 - var_1_64)) != last_1_var_1_68) {
		if (last_1_var_1_67) {
			var_1_62 = (var_1_65 - last_1_var_1_53);
		}
	}


	// From: Req13Batch180Amount250
	if (var_1_37 > (var_1_10 | last_1_var_1_66)) {
		var_1_47 = (3272453006u - ((min (var_1_48 , var_1_49)) - 32u));
	}


	// From: Req2Batch180Amount250
	signed long int stepLocal_0 = min ((var_1_12 - var_1_8) , var_1_4);
	if (var_1_6 < stepLocal_0) {
		var_1_11 = (! (var_1_13 || var_1_14));
	}


	// From: Req7Batch180Amount250
	if (var_1_13) {
		var_1_30 = (var_1_27 - var_1_26);
	} else {
		var_1_30 = (var_1_26 - (min (var_1_27 , var_1_31)));
	}


	// From: Req8Batch180Amount250
	if (! (var_1_6 > 1)) {
		var_1_32 = var_1_8;
	} else {
		var_1_32 = (var_1_12 + (max ((var_1_33 - var_1_4) , 0)));
	}


	// From: Req11Batch180Amount250
	var_1_40 = (((min (var_1_41 , var_1_42)) - (var_1_43 + var_1_44)) + var_1_8);


	// From: Req14Batch180Amount250
	unsigned long int stepLocal_12 = var_1_48;
	signed long int stepLocal_11 = var_1_37 - var_1_42;
	if (var_1_41 <= stepLocal_12) {
		if (stepLocal_11 < var_1_32) {
			var_1_50 = ((max ((var_1_43 - var_1_44) , (var_1_51 - var_1_52))) + var_1_20);
		}
	}


	// From: Req16Batch180Amount250
	if (var_1_13 || (! var_1_11)) {
		if (var_1_41 < (abs (var_1_62))) {
			if (var_1_11 || var_1_13) {
				var_1_57 = ((var_1_58 - var_1_46) - ((var_1_59 - var_1_60) + (min (var_1_26 , 24.25))));
			}
		} else {
			var_1_57 = var_1_58;
		}
	} else {
		if ((var_1_19 >= var_1_52) && (var_1_28 >= (min (var_1_30 , var_1_26)))) {
			var_1_57 = (min (var_1_31 , var_1_26));
		} else {
			var_1_57 = (var_1_60 + (max ((var_1_27 - var_1_46) , var_1_59)));
		}
	}


	// From: Req20Batch180Amount250
	if (var_1_14) {
		var_1_67 = var_1_13;
	}


	// From: Req5Batch180Amount250
	signed long int stepLocal_4 = 10;
	if ((- var_1_30) <= 64.2f) {
		if (var_1_47 > stepLocal_4) {
			var_1_22 = var_1_24;
		} else {
			var_1_22 = (max ((var_1_25 + (var_1_26 - var_1_27)) , (min (var_1_24 , var_1_28))));
		}
	}


	// From: Req3Batch180Amount250
	unsigned char stepLocal_2 = var_1_8;
	unsigned char stepLocal_1 = var_1_12 < (var_1_6 * var_1_7);
	if (stepLocal_2 >= var_1_6) {
		if ((! var_1_67) && stepLocal_1) {
			var_1_15 = (var_1_17 + (min (var_1_18 , (max (var_1_19 , var_1_20)))));
		}
	}


	// From: Req10Batch180Amount250
	if (var_1_67) {
		if (var_1_13) {
			var_1_36 = var_1_19;
		}
	} else {
		var_1_36 = (var_1_37 - (max (var_1_38 , var_1_39)));
	}


	// From: Req17Batch180Amount250
	if (var_1_67) {
		var_1_61 = (var_1_43 + var_1_42);
	}


	// From: Req19Batch180Amount250
	if (var_1_62 < var_1_7) {
		if (((max (var_1_51 , var_1_7)) + var_1_42) > var_1_18) {
			if (var_1_9 < var_1_48) {
				var_1_66 = var_1_61;
			} else {
				var_1_66 = var_1_9;
			}
		} else {
			var_1_66 = 8;
		}
	}


	// From: Req4Batch180Amount250
	unsigned char stepLocal_3 = var_1_7;
	if (! ((var_1_8 << var_1_47) > (max (var_1_20 , var_1_17)))) {
		if (stepLocal_3 >= (var_1_12 - var_1_10)) {
			var_1_21 = ((var_1_61 + (min (var_1_47 , var_1_7))) + (var_1_6 - var_1_10));
		} else {
			var_1_21 = var_1_61;
		}
	} else {
		var_1_21 = var_1_8;
	}


	// From: Req9Batch180Amount250
	signed long int stepLocal_6 = var_1_8 % (abs (var_1_35));
	unsigned long int stepLocal_5 = var_1_62;
	if (stepLocal_5 <= var_1_21) {
		var_1_34 = (max (var_1_8 , var_1_10));
	} else {
		if (var_1_17 > stepLocal_6) {
			var_1_34 = (max ((128 - var_1_8) , var_1_9));
		} else {
			var_1_34 = var_1_6;
		}
	}


	// From: Req21Batch180Amount250
	unsigned long int stepLocal_13 = max (var_1_62 , var_1_12);
	if (stepLocal_13 >= var_1_48) {
		var_1_68 = (min ((min (var_1_32 , var_1_6)) , var_1_66));
	} else {
		var_1_68 = (min ((min (32 , var_1_17)) , -8));
	}


	// From: Req15Batch180Amount250
	if (var_1_17 < var_1_8) {
		if (var_1_51 > (var_1_37 % var_1_35)) {
			var_1_53 = (abs (max (var_1_44 , var_1_51)));
		}
	} else {
		if (10 >= (var_1_19 / (max (var_1_35 , var_1_12)))) {
			var_1_53 = ((var_1_54 - 5) - var_1_43);
		} else {
			if ((var_1_42 / var_1_4) < (min (var_1_21 , (var_1_68 - var_1_44)))) {
				if (var_1_67) {
					var_1_53 = (var_1_43 + (min (var_1_38 , (var_1_42 - var_1_51))));
				} else {
					if (var_1_11 && (var_1_30 >= var_1_22)) {
						var_1_53 = (var_1_54 - (var_1_43 + var_1_51));
					} else {
						if ((var_1_20 + -128) == last_1_var_1_53) {
							var_1_53 = (max (((max (128 , var_1_54)) - var_1_42) , var_1_8));
						} else {
							var_1_53 = var_1_51;
						}
					}
				}
			} else {
				if (var_1_67) {
					if (((var_1_46 - var_1_56) + var_1_22) > var_1_25) {
						var_1_53 = (var_1_42 + var_1_43);
					}
				} else {
					if (var_1_68 <= (var_1_19 * var_1_44)) {
						var_1_53 = var_1_41;
					}
				}
			}
		}
	}


	// From: Req1Batch180Amount250
	if ((var_1_66 & (var_1_34 / var_1_4)) < var_1_62) {
		var_1_1 = (min (var_1_6 , var_1_7));
	} else {
		var_1_1 = ((max (var_1_8 , var_1_9)) + var_1_10);
	}


	// From: Req6Batch180Amount250
	if (! ((var_1_9 * var_1_8) < var_1_32)) {
		if ((var_1_12 * (var_1_68 * 32u)) >= (last_1_var_1_29 * var_1_7)) {
			var_1_29 = (max ((var_1_8 - var_1_47) , var_1_19));
		} else {
			var_1_29 = (max ((var_1_18 + var_1_40) , last_1_var_1_29));
		}
	} else {
		if ((var_1_7 > var_1_9) && var_1_13) {
			var_1_29 = var_1_32;
		}
	}


	// From: Req12Batch180Amount250
	signed char stepLocal_10 = var_1_35;
	signed char stepLocal_9 = var_1_37;
	signed long int stepLocal_8 = var_1_68;
	unsigned char stepLocal_7 = var_1_8;
	if (stepLocal_10 < (var_1_1 / var_1_4)) {
		if (stepLocal_8 > var_1_29) {
			var_1_45 = (((7.437948223416906E18f - var_1_46) - var_1_26) - var_1_27);
		}
	} else {
		if (var_1_68 > stepLocal_7) {
			if (stepLocal_9 >= var_1_61) {
				var_1_45 = (10000.2f + var_1_27);
			}
		} else {
			var_1_45 = var_1_27;
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 127);
	assume_abort_if_not(var_1_12 <= 255);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854766000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 16383);
	assume_abort_if_not(var_1_33 <= 32767);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -127);
	assume_abort_if_not(var_1_35 <= 127);
	assume_abort_if_not(var_1_35 != 0);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -1);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 63);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 63);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 32);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 31);
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691400e+12F && var_1_46 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 1073741823);
	assume_abort_if_not(var_1_48 <= 2147483647);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 1073741823);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 63);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 63);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 190);
	assume_abort_if_not(var_1_54 <= 254);
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854776000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= 4611686.018427383000e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854766000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 2305843.009213691400e+12F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 2305843.009213691400e+12F && var_1_60 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 1);
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 0);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 2147483647);
	assume_abort_if_not(var_1_65 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_29 = var_1_29;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_68 = var_1_68;
}

int property(void) {
	return ((((((((((((((((((((((var_1_66 & (var_1_34 / var_1_4)) < var_1_62) ? (var_1_1 == ((unsigned char) (min (var_1_6 , var_1_7)))) : (var_1_1 == ((unsigned char) ((max (var_1_8 , var_1_9)) + var_1_10)))) && ((var_1_6 < (min ((var_1_12 - var_1_8) , var_1_4))) ? (var_1_11 == ((unsigned char) (! (var_1_13 || var_1_14)))) : 1)) && ((var_1_8 >= var_1_6) ? (((! var_1_67) && (var_1_12 < (var_1_6 * var_1_7))) ? (var_1_15 == ((signed char) (var_1_17 + (min (var_1_18 , (max (var_1_19 , var_1_20))))))) : 1) : 1)) && ((! ((var_1_8 << var_1_47) > (max (var_1_20 , var_1_17)))) ? ((var_1_7 >= (var_1_12 - var_1_10)) ? (var_1_21 == ((signed short int) ((var_1_61 + (min (var_1_47 , var_1_7))) + (var_1_6 - var_1_10)))) : (var_1_21 == ((signed short int) var_1_61))) : (var_1_21 == ((signed short int) var_1_8)))) && (((- var_1_30) <= 64.2f) ? ((var_1_47 > 10) ? (var_1_22 == ((double) var_1_24)) : (var_1_22 == ((double) (max ((var_1_25 + (var_1_26 - var_1_27)) , (min (var_1_24 , var_1_28))))))) : 1)) && ((! ((var_1_9 * var_1_8) < var_1_32)) ? (((var_1_12 * (var_1_68 * 32u)) >= (last_1_var_1_29 * var_1_7)) ? (var_1_29 == ((signed short int) (max ((var_1_8 - var_1_47) , var_1_19)))) : (var_1_29 == ((signed short int) (max ((var_1_18 + var_1_40) , last_1_var_1_29))))) : (((var_1_7 > var_1_9) && var_1_13) ? (var_1_29 == ((signed short int) var_1_32)) : 1))) && (var_1_13 ? (var_1_30 == ((double) (var_1_27 - var_1_26))) : (var_1_30 == ((double) (var_1_26 - (min (var_1_27 , var_1_31))))))) && ((! (var_1_6 > 1)) ? (var_1_32 == ((unsigned short int) var_1_8)) : (var_1_32 == ((unsigned short int) (var_1_12 + (max ((var_1_33 - var_1_4) , 0))))))) && ((var_1_62 <= var_1_21) ? (var_1_34 == ((unsigned char) (max (var_1_8 , var_1_10)))) : ((var_1_17 > (var_1_8 % (abs (var_1_35)))) ? (var_1_34 == ((unsigned char) (max ((128 - var_1_8) , var_1_9)))) : (var_1_34 == ((unsigned char) var_1_6))))) && (var_1_67 ? (var_1_13 ? (var_1_36 == ((signed char) var_1_19)) : 1) : (var_1_36 == ((signed char) (var_1_37 - (max (var_1_38 , var_1_39))))))) && (var_1_40 == ((unsigned char) (((min (var_1_41 , var_1_42)) - (var_1_43 + var_1_44)) + var_1_8)))) && ((var_1_35 < (var_1_1 / var_1_4)) ? ((var_1_68 > var_1_29) ? (var_1_45 == ((float) (((7.437948223416906E18f - var_1_46) - var_1_26) - var_1_27))) : 1) : ((var_1_68 > var_1_8) ? ((var_1_37 >= var_1_61) ? (var_1_45 == ((float) (10000.2f + var_1_27))) : 1) : (var_1_45 == ((float) var_1_27))))) && ((var_1_37 > (var_1_10 | last_1_var_1_66)) ? (var_1_47 == ((unsigned long int) (3272453006u - ((min (var_1_48 , var_1_49)) - 32u)))) : 1)) && ((var_1_41 <= var_1_48) ? (((var_1_37 - var_1_42) < var_1_32) ? (var_1_50 == ((signed char) ((max ((var_1_43 - var_1_44) , (var_1_51 - var_1_52))) + var_1_20))) : 1) : 1)) && ((var_1_17 < var_1_8) ? ((var_1_51 > (var_1_37 % var_1_35)) ? (var_1_53 == ((unsigned char) (abs (max (var_1_44 , var_1_51))))) : 1) : ((10 >= (var_1_19 / (max (var_1_35 , var_1_12)))) ? (var_1_53 == ((unsigned char) ((var_1_54 - 5) - var_1_43))) : (((var_1_42 / var_1_4) < (min (var_1_21 , (var_1_68 - var_1_44)))) ? (var_1_67 ? (var_1_53 == ((unsigned char) (var_1_43 + (min (var_1_38 , (var_1_42 - var_1_51)))))) : ((var_1_11 && (var_1_30 >= var_1_22)) ? (var_1_53 == ((unsigned char) (var_1_54 - (var_1_43 + var_1_51)))) : (((var_1_20 + -128) == last_1_var_1_53) ? (var_1_53 == ((unsigned char) (max (((max (128 , var_1_54)) - var_1_42) , var_1_8)))) : (var_1_53 == ((unsigned char) var_1_51))))) : (var_1_67 ? ((((var_1_46 - var_1_56) + var_1_22) > var_1_25) ? (var_1_53 == ((unsigned char) (var_1_42 + var_1_43))) : 1) : ((var_1_68 <= (var_1_19 * var_1_44)) ? (var_1_53 == ((unsigned char) var_1_41)) : 1)))))) && ((var_1_13 || (! var_1_11)) ? ((var_1_41 < (abs (var_1_62))) ? ((var_1_11 || var_1_13) ? (var_1_57 == ((double) ((var_1_58 - var_1_46) - ((var_1_59 - var_1_60) + (min (var_1_26 , 24.25)))))) : 1) : (var_1_57 == ((double) var_1_58))) : (((var_1_19 >= var_1_52) && (var_1_28 >= (min (var_1_30 , var_1_26)))) ? (var_1_57 == ((double) (min (var_1_31 , var_1_26)))) : (var_1_57 == ((double) (var_1_60 + (max ((var_1_27 - var_1_46) , var_1_59)))))))) && (var_1_67 ? (var_1_61 == ((unsigned char) (var_1_43 + var_1_42))) : 1)) && (((var_1_41 << (var_1_63 - var_1_64)) != last_1_var_1_68) ? (last_1_var_1_67 ? (var_1_62 == ((unsigned long int) (var_1_65 - last_1_var_1_53))) : 1) : 1)) && ((var_1_62 < var_1_7) ? ((((max (var_1_51 , var_1_7)) + var_1_42) > var_1_18) ? ((var_1_9 < var_1_48) ? (var_1_66 == ((unsigned short int) var_1_61)) : (var_1_66 == ((unsigned short int) var_1_9))) : (var_1_66 == ((unsigned short int) 8))) : 1)) && (var_1_14 ? (var_1_67 == ((unsigned char) var_1_13)) : 1)) && (((max (var_1_62 , var_1_12)) >= var_1_48) ? (var_1_68 == ((signed long int) (min ((min (var_1_32 , var_1_6)) , var_1_66)))) : (var_1_68 == ((signed long int) (min ((min (32 , var_1_17)) , -8)))))
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
