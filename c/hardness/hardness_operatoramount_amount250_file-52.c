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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch52Amount250.c", 13, "reach_error"); }
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
float var_1_1 = 128.1;
signed short int var_1_2 = 256;
unsigned char var_1_3 = 2;
float var_1_5 = 31.4;
float var_1_6 = 32.5;
float var_1_7 = 9.6;
unsigned char var_1_8 = 1;
unsigned char var_1_10 = 1;
unsigned short int var_1_11 = 64;
unsigned short int var_1_12 = 60712;
unsigned short int var_1_13 = 58826;
double var_1_14 = 999999999.5;
unsigned char var_1_17 = 10;
float var_1_19 = 63.75;
float var_1_20 = 0.2;
float var_1_21 = 127.75;
unsigned char var_1_22 = 128;
unsigned char var_1_23 = 4;
signed short int var_1_24 = 32;
signed long int var_1_25 = 128;
unsigned short int var_1_26 = 32;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 200;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
signed short int var_1_32 = 128;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 25;
signed char var_1_35 = 5;
signed char var_1_36 = 0;
signed char var_1_37 = 16;
signed short int var_1_38 = -10;
float var_1_39 = 255.4;
float var_1_40 = 0.0;
float var_1_41 = 5.425;
float var_1_42 = 2.5;
float var_1_43 = 4.25;
float var_1_44 = 31.75;
float var_1_46 = 24.6;
float var_1_47 = 1.6;
float var_1_48 = 49.25;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 0;
double var_1_51 = 10.3;
double var_1_52 = 0.0;
double var_1_53 = 0.0;
double var_1_54 = 10.25;
signed short int var_1_55 = 10;
unsigned long int var_1_56 = 10;
unsigned long int var_1_58 = 2795491829;
unsigned long int var_1_59 = 3693693184;
unsigned long int var_1_60 = 2111000799;
unsigned long int var_1_61 = 1000000000;
unsigned long int var_1_62 = 1000000000;
unsigned char var_1_63 = 4;
unsigned long int var_1_64 = 8;
signed char var_1_65 = 50;
double var_1_66 = 24.2;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_24 = 32;
unsigned short int last_1_var_1_26 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req23Batch52Amount250
	if (last_1_var_1_24 > var_1_13) {
		if (var_1_30) {
			var_1_66 = (var_1_52 + var_1_6);
		}
	}


	// From: Req21Batch52Amount250
	var_1_64 = var_1_37;


	// From: Req10Batch52Amount250
	if (var_1_2 < (~ var_1_64)) {
		var_1_31 = (var_1_30 || (! var_1_29));
	}


	// From: Req16Batch52Amount250
	if (var_1_31) {
		var_1_49 = (var_1_10 && (var_1_31 || var_1_50));
	} else {
		var_1_49 = (! var_1_30);
	}


	// From: Req17Batch52Amount250
	unsigned char stepLocal_10 = var_1_49;
	if (var_1_10 && stepLocal_10) {
		var_1_51 = ((var_1_47 + var_1_48) - ((var_1_52 + var_1_53) - var_1_54));
	} else {
		var_1_51 = (var_1_47 - var_1_52);
	}


	// From: Req20Batch52Amount250
	if (var_1_49) {
		var_1_63 = 8;
	} else {
		var_1_63 = var_1_34;
	}


	// From: Req4Batch52Amount250
	if ((var_1_66 / 24.5) <= var_1_66) {
		if (var_1_31) {
			var_1_14 = (var_1_5 + var_1_6);
		}
	}


	// From: Req5Batch52Amount250
	if (! var_1_31) {
		if (var_1_5 <= (-0.5f * var_1_14)) {
			var_1_17 = (abs (var_1_3));
		} else {
			if ((var_1_19 - var_1_20) > ((var_1_66 * var_1_7) / var_1_21)) {
				var_1_17 = (max ((128 - var_1_3) , (min (var_1_22 , 200))));
			} else {
				var_1_17 = (var_1_3 + var_1_23);
			}
		}
	} else {
		if ((var_1_66 / var_1_21) != var_1_14) {
			var_1_17 = var_1_23;
		} else {
			var_1_17 = (min ((var_1_3 + var_1_23) , var_1_22));
		}
	}


	// From: Req9Batch52Amount250
	if (! var_1_10) {
		if (var_1_17 <= (abs (var_1_28 - var_1_3))) {
			var_1_27 = (! var_1_10);
		} else {
			var_1_27 = (! ((! var_1_29) && (! var_1_30)));
		}
	}


	// From: Req3Batch52Amount250
	if (! (! var_1_27)) {
		var_1_11 = ((var_1_3 + 128) + var_1_2);
	} else {
		var_1_11 = (((min (var_1_12 , var_1_13)) - var_1_3) - var_1_2);
	}


	// From: Req7Batch52Amount250
	signed long int stepLocal_2 = -128;
	if (var_1_5 >= var_1_6) {
		if (stepLocal_2 <= ((var_1_63 | var_1_3) + var_1_22)) {
			var_1_25 = var_1_63;
		}
	} else {
		var_1_25 = var_1_3;
	}


	// From: Req8Batch52Amount250
	if (var_1_14 >= var_1_66) {
		var_1_26 = (var_1_3 + last_1_var_1_26);
	} else {
		var_1_26 = (abs ((var_1_13 - var_1_23) - var_1_22));
	}


	// From: Req12Batch52Amount250
	if (! var_1_29) {
		if (((min (var_1_34 , var_1_22)) / var_1_13) != var_1_25) {
			if (var_1_7 > var_1_5) {
				var_1_35 = ((var_1_3 + 8) - var_1_34);
			} else {
				var_1_35 = (abs (var_1_3 + (var_1_36 - var_1_37)));
			}
		} else {
			var_1_35 = (min (var_1_3 , (max (var_1_34 , var_1_36))));
		}
	}


	// From: Req13Batch52Amount250
	if (((- var_1_28) > (var_1_33 % var_1_12)) || var_1_10) {
		if (! var_1_30) {
			if (var_1_36 > ((var_1_34 + var_1_63) * (8 - var_1_3))) {
				if (var_1_13 >= var_1_63) {
					var_1_38 = (var_1_36 + var_1_28);
				} else {
					var_1_38 = (abs (var_1_25));
				}
			}
		}
	} else {
		var_1_38 = (var_1_37 + (min (var_1_34 , var_1_25)));
	}


	// From: Req15Batch52Amount250
	signed long int stepLocal_9 = (var_1_23 - var_1_28) / var_1_33;
	signed long int stepLocal_8 = var_1_37 / var_1_28;
	unsigned long int stepLocal_7 = min (var_1_36 , (min (var_1_64 , var_1_13)));
	if (var_1_12 < stepLocal_8) {
		if ((- var_1_7) <= (- var_1_14)) {
			if (var_1_2 < stepLocal_9) {
				if (stepLocal_7 < var_1_3) {
					var_1_44 = var_1_41;
				} else {
					var_1_44 = (min (var_1_43 , var_1_42));
				}
			} else {
				var_1_44 = (var_1_41 - var_1_46);
			}
		} else {
			var_1_44 = ((var_1_47 + var_1_48) - var_1_46);
		}
	}


	// From: Req18Batch52Amount250
	if ((8 >> var_1_3) > var_1_34) {
		var_1_55 = (var_1_22 + var_1_26);
	}


	// From: Req6Batch52Amount250
	if (! var_1_27) {
		var_1_24 = (var_1_23 - var_1_22);
	} else {
		var_1_24 = (min (var_1_22 , var_1_25));
	}


	// From: Req1Batch52Amount250
	signed long int stepLocal_0 = (var_1_2 >> var_1_3) | var_1_11;
	if (stepLocal_0 >= 10) {
		var_1_1 = ((min (var_1_5 , var_1_6)) + var_1_7);
	} else {
		var_1_1 = (abs (var_1_5 + var_1_7));
	}


	// From: Req2Batch52Amount250
	signed long int stepLocal_1 = (var_1_3 + var_1_55) + var_1_2;
	if ((-2 / -10000000) != stepLocal_1) {
		var_1_8 = (var_1_31 || var_1_10);
	}


	// From: Req11Batch52Amount250
	unsigned long int stepLocal_4 = var_1_64;
	signed long int stepLocal_3 = var_1_28 / (var_1_33 - var_1_34);
	if (var_1_6 > var_1_7) {
		if (var_1_23 <= stepLocal_3) {
			if (stepLocal_4 == var_1_38) {
				if (var_1_8) {
					var_1_32 = var_1_22;
				} else {
					var_1_32 = (-1 - var_1_28);
				}
			}
		}
	} else {
		var_1_32 = var_1_28;
	}


	// From: Req14Batch52Amount250
	signed long int stepLocal_6 = max (var_1_24 , (var_1_55 * var_1_36));
	signed long int stepLocal_5 = min (var_1_38 , var_1_23);
	if ((var_1_20 - (var_1_40 - var_1_41)) <= var_1_21) {
		if ((var_1_36 * var_1_64) <= stepLocal_5) {
			var_1_39 = (var_1_5 + (var_1_42 + var_1_43));
		} else {
			var_1_39 = (var_1_6 + var_1_5);
		}
	} else {
		if ((var_1_28 / (min (var_1_13 , 256))) <= stepLocal_6) {
			var_1_39 = var_1_6;
		}
	}


	// From: Req19Batch52Amount250
	signed long int stepLocal_11 = (100 * var_1_24) / (200 - var_1_3);
	if (stepLocal_11 >= var_1_25) {
		if (var_1_51 != var_1_14) {
			if (var_1_49) {
				var_1_56 = (max ((max (var_1_22 , (var_1_58 - 200u))) , (var_1_59 - 32u)));
			}
		} else {
			var_1_56 = ((var_1_60 + (var_1_61 + var_1_62)) - (abs (var_1_28)));
		}
	} else {
		var_1_56 = ((var_1_24 + var_1_23) + var_1_61);
	}


	// From: Req22Batch52Amount250
	unsigned long int stepLocal_12 = var_1_56 / (var_1_33 - var_1_34);
	if (stepLocal_12 >= var_1_60) {
		var_1_65 = (var_1_37 - var_1_34);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 14);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 49150);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 49150);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	assume_abort_if_not(var_1_21 != 0.0F);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 127);
	assume_abort_if_not(var_1_28 <= 255);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 255);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 126);
	assume_abort_if_not(var_1_34 != 127);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 4611686.018427388000e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427388000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -230584.3009213691400e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -230584.3009213691400e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 2305843.009213691400e+12F && var_1_43 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 2305843.009213691400e+12F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 2305843.009213691400e+12F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 2147483647);
	assume_abort_if_not(var_1_58 <= 4294967294);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 1073741823);
	assume_abort_if_not(var_1_60 <= 2147483647);
	var_1_61 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_61 >= 536870912);
	assume_abort_if_not(var_1_61 <= 1073741824);
	var_1_62 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_62 >= 536870912);
	assume_abort_if_not(var_1_62 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_24 = var_1_24;
	last_1_var_1_26 = var_1_26;
}

int property(void) {
	return (((((((((((((((((((((((((var_1_2 >> var_1_3) | var_1_11) >= 10) ? (var_1_1 == ((float) ((min (var_1_5 , var_1_6)) + var_1_7))) : (var_1_1 == ((float) (abs (var_1_5 + var_1_7))))) && (((-2 / -10000000) != ((var_1_3 + var_1_55) + var_1_2)) ? (var_1_8 == ((unsigned char) (var_1_31 || var_1_10))) : 1)) && ((! (! var_1_27)) ? (var_1_11 == ((unsigned short int) ((var_1_3 + 128) + var_1_2))) : (var_1_11 == ((unsigned short int) (((min (var_1_12 , var_1_13)) - var_1_3) - var_1_2))))) && (((var_1_66 / 24.5) <= var_1_66) ? (var_1_31 ? (var_1_14 == ((double) (var_1_5 + var_1_6))) : 1) : 1)) && ((! var_1_31) ? ((var_1_5 <= (-0.5f * var_1_14)) ? (var_1_17 == ((unsigned char) (abs (var_1_3)))) : (((var_1_19 - var_1_20) > ((var_1_66 * var_1_7) / var_1_21)) ? (var_1_17 == ((unsigned char) (max ((128 - var_1_3) , (min (var_1_22 , 200)))))) : (var_1_17 == ((unsigned char) (var_1_3 + var_1_23))))) : (((var_1_66 / var_1_21) != var_1_14) ? (var_1_17 == ((unsigned char) var_1_23)) : (var_1_17 == ((unsigned char) (min ((var_1_3 + var_1_23) , var_1_22))))))) && ((! var_1_27) ? (var_1_24 == ((signed short int) (var_1_23 - var_1_22))) : (var_1_24 == ((signed short int) (min (var_1_22 , var_1_25)))))) && ((var_1_5 >= var_1_6) ? ((-128 <= ((var_1_63 | var_1_3) + var_1_22)) ? (var_1_25 == ((signed long int) var_1_63)) : 1) : (var_1_25 == ((signed long int) var_1_3)))) && ((var_1_14 >= var_1_66) ? (var_1_26 == ((unsigned short int) (var_1_3 + last_1_var_1_26))) : (var_1_26 == ((unsigned short int) (abs ((var_1_13 - var_1_23) - var_1_22)))))) && ((! var_1_10) ? ((var_1_17 <= (abs (var_1_28 - var_1_3))) ? (var_1_27 == ((unsigned char) (! var_1_10))) : (var_1_27 == ((unsigned char) (! ((! var_1_29) && (! var_1_30)))))) : 1)) && ((var_1_2 < (~ var_1_64)) ? (var_1_31 == ((unsigned char) (var_1_30 || (! var_1_29)))) : 1)) && ((var_1_6 > var_1_7) ? ((var_1_23 <= (var_1_28 / (var_1_33 - var_1_34))) ? ((var_1_64 == var_1_38) ? (var_1_8 ? (var_1_32 == ((signed short int) var_1_22)) : (var_1_32 == ((signed short int) (-1 - var_1_28)))) : 1) : 1) : (var_1_32 == ((signed short int) var_1_28)))) && ((! var_1_29) ? ((((min (var_1_34 , var_1_22)) / var_1_13) != var_1_25) ? ((var_1_7 > var_1_5) ? (var_1_35 == ((signed char) ((var_1_3 + 8) - var_1_34))) : (var_1_35 == ((signed char) (abs (var_1_3 + (var_1_36 - var_1_37)))))) : (var_1_35 == ((signed char) (min (var_1_3 , (max (var_1_34 , var_1_36))))))) : 1)) && ((((- var_1_28) > (var_1_33 % var_1_12)) || var_1_10) ? ((! var_1_30) ? ((var_1_36 > ((var_1_34 + var_1_63) * (8 - var_1_3))) ? ((var_1_13 >= var_1_63) ? (var_1_38 == ((signed short int) (var_1_36 + var_1_28))) : (var_1_38 == ((signed short int) (abs (var_1_25))))) : 1) : 1) : (var_1_38 == ((signed short int) (var_1_37 + (min (var_1_34 , var_1_25))))))) && (((var_1_20 - (var_1_40 - var_1_41)) <= var_1_21) ? (((var_1_36 * var_1_64) <= (min (var_1_38 , var_1_23))) ? (var_1_39 == ((float) (var_1_5 + (var_1_42 + var_1_43)))) : (var_1_39 == ((float) (var_1_6 + var_1_5)))) : (((var_1_28 / (min (var_1_13 , 256))) <= (max (var_1_24 , (var_1_55 * var_1_36)))) ? (var_1_39 == ((float) var_1_6)) : 1))) && ((var_1_12 < (var_1_37 / var_1_28)) ? (((- var_1_7) <= (- var_1_14)) ? ((var_1_2 < ((var_1_23 - var_1_28) / var_1_33)) ? (((min (var_1_36 , (min (var_1_64 , var_1_13)))) < var_1_3) ? (var_1_44 == ((float) var_1_41)) : (var_1_44 == ((float) (min (var_1_43 , var_1_42))))) : (var_1_44 == ((float) (var_1_41 - var_1_46)))) : (var_1_44 == ((float) ((var_1_47 + var_1_48) - var_1_46)))) : 1)) && (var_1_31 ? (var_1_49 == ((unsigned char) (var_1_10 && (var_1_31 || var_1_50)))) : (var_1_49 == ((unsigned char) (! var_1_30))))) && ((var_1_10 && var_1_49) ? (var_1_51 == ((double) ((var_1_47 + var_1_48) - ((var_1_52 + var_1_53) - var_1_54)))) : (var_1_51 == ((double) (var_1_47 - var_1_52))))) && (((8 >> var_1_3) > var_1_34) ? (var_1_55 == ((signed short int) (var_1_22 + var_1_26))) : 1)) && ((((100 * var_1_24) / (200 - var_1_3)) >= var_1_25) ? ((var_1_51 != var_1_14) ? (var_1_49 ? (var_1_56 == ((unsigned long int) (max ((max (var_1_22 , (var_1_58 - 200u))) , (var_1_59 - 32u))))) : 1) : (var_1_56 == ((unsigned long int) ((var_1_60 + (var_1_61 + var_1_62)) - (abs (var_1_28)))))) : (var_1_56 == ((unsigned long int) ((var_1_24 + var_1_23) + var_1_61))))) && (var_1_49 ? (var_1_63 == ((unsigned char) 8)) : (var_1_63 == ((unsigned char) var_1_34)))) && (var_1_64 == ((unsigned long int) var_1_37))) && (((var_1_56 / (var_1_33 - var_1_34)) >= var_1_60) ? (var_1_65 == ((signed char) (var_1_37 - var_1_34))) : 1)) && ((last_1_var_1_24 > var_1_13) ? (var_1_30 ? (var_1_66 == ((double) (var_1_52 + var_1_6))) : 1) : 1)
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
