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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch183Amount250.c", 13, "reach_error"); }
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
double var_1_1 = 10.2;
double var_1_4 = 99.325;
double var_1_5 = 99999999999.375;
double var_1_6 = 999999999999999.6;
double var_1_7 = 9.5;
double var_1_12 = 31.6;
unsigned short int var_1_13 = 8;
unsigned short int var_1_14 = 64;
unsigned short int var_1_15 = 1;
signed char var_1_16 = 16;
unsigned short int var_1_17 = 16;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 1;
signed char var_1_20 = -8;
signed char var_1_21 = -1;
signed char var_1_22 = 25;
signed char var_1_23 = -16;
float var_1_24 = 7.5;
float var_1_25 = 0.0;
float var_1_26 = 15.45;
float var_1_27 = 99999999999999.75;
float var_1_28 = 0.0;
float var_1_29 = 99.2;
signed short int var_1_30 = 16;
signed short int var_1_31 = 1;
float var_1_32 = 255.5;
unsigned char var_1_33 = 100;
unsigned long int var_1_35 = 8;
unsigned long int var_1_36 = 2;
unsigned char var_1_37 = 128;
unsigned char var_1_38 = 64;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 2;
signed long int var_1_41 = -64;
unsigned short int var_1_42 = 4;
float var_1_43 = 16.1;
double var_1_44 = 99.5;
double var_1_45 = 100000000000.05;
double var_1_46 = 25.5;
unsigned long int var_1_47 = 25;
unsigned char var_1_48 = 16;
unsigned char var_1_51 = 200;
float var_1_52 = 9999999999999.5;
unsigned short int var_1_53 = 34711;
signed short int var_1_54 = -25;
signed short int var_1_55 = 23980;
signed short int var_1_56 = 21772;
signed long int var_1_57 = 1000000000;
signed short int var_1_58 = -25;
signed short int var_1_60 = 0;
float var_1_61 = 200.5;
unsigned short int var_1_62 = 8;
double var_1_63 = 7.4;
unsigned char var_1_64 = 1;
double var_1_65 = 99.75;
float var_1_66 = 49.875;
unsigned char var_1_67 = 1;
unsigned char var_1_68 = 0;
unsigned char var_1_69 = 0;
signed long int var_1_70 = 10;
signed long int var_1_71 = -8;

// Calibration values

// Last'ed variables
double last_1_var_1_12 = 31.6;
signed long int last_1_var_1_41 = -64;
unsigned long int last_1_var_1_47 = 25;
signed short int last_1_var_1_54 = -25;
double last_1_var_1_63 = 7.4;
unsigned char last_1_var_1_67 = 1;
signed long int last_1_var_1_71 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch183Amount250
	unsigned long int stepLocal_4 = (min (var_1_17 , last_1_var_1_47)) << (var_1_36 + var_1_42);
	if (((min (var_1_35 , last_1_var_1_41)) - (var_1_40 + var_1_37)) > stepLocal_4) {
		var_1_41 = (max (var_1_22 , var_1_23));
	}


	// From: Req14Batch183Amount250
	signed long int stepLocal_11 = var_1_41;
	if ((last_1_var_1_54 - var_1_42) <= stepLocal_11) {
		var_1_54 = (var_1_42 + var_1_38);
	} else {
		var_1_54 = (var_1_38 - (var_1_56 - (max (256 , var_1_51))));
	}


	// From: Req7Batch183Amount250
	signed long int stepLocal_3 = last_1_var_1_71;
	if (stepLocal_3 != (var_1_15 >> (var_1_35 + var_1_36))) {
		if (last_1_var_1_67) {
			var_1_33 = (max (var_1_35 , var_1_36));
		} else {
			var_1_33 = (var_1_37 - (min ((var_1_38 - var_1_36) , var_1_35)));
		}
	} else {
		var_1_33 = ((var_1_36 + var_1_35) + (var_1_39 + var_1_40));
	}


	// From: Req1Batch183Amount250
	unsigned long int stepLocal_1 = last_1_var_1_47;
	signed long int stepLocal_0 = last_1_var_1_71;
	if (last_1_var_1_63 >= last_1_var_1_12) {
		var_1_1 = ((min (var_1_4 , var_1_5)) + (var_1_6 - var_1_7));
	} else {
		if (var_1_7 > var_1_4) {
			if ((max (last_1_var_1_41 , (last_1_var_1_47 | last_1_var_1_71))) < stepLocal_0) {
				var_1_1 = (min (((var_1_6 + var_1_7) - 63.75) , (var_1_4 + var_1_5)));
			} else {
				if (stepLocal_1 < last_1_var_1_41) {
					var_1_1 = (max (var_1_7 , 1.5));
				}
			}
		} else {
			var_1_1 = (min (100.5 , var_1_6));
		}
	}


	// From: Req2Batch183Amount250
	var_1_12 = (1.00000000008E10 + var_1_4);


	// From: Req4Batch183Amount250
	if (var_1_18 && var_1_19) {
		var_1_16 = ((min (var_1_20 , 16)) + (min (var_1_21 , (var_1_22 + var_1_23))));
	} else {
		var_1_16 = (min (var_1_21 , -16));
	}


	// From: Req13Batch183Amount250
	unsigned short int stepLocal_10 = var_1_14;
	unsigned char stepLocal_9 = var_1_19;
	if (stepLocal_9 || var_1_18) {
		var_1_52 = ((var_1_6 - var_1_32) + var_1_5);
	} else {
		if ((var_1_53 - 5) > stepLocal_10) {
			var_1_52 = (abs (min (var_1_4 , (var_1_7 + var_1_45))));
		} else {
			var_1_52 = ((max ((var_1_6 - var_1_29) , var_1_7)) + var_1_4);
		}
	}


	// From: Req15Batch183Amount250
	signed short int stepLocal_12 = var_1_30;
	if (var_1_55 != stepLocal_12) {
		var_1_57 = (var_1_14 - var_1_31);
	}


	// From: Req17Batch183Amount250
	var_1_61 = (max (2.25f , var_1_7));


	// From: Req18Batch183Amount250
	if (var_1_61 <= var_1_5) {
		var_1_62 = var_1_31;
	}


	// From: Req21Batch183Amount250
	if (var_1_64) {
		var_1_67 = var_1_68;
	} else {
		var_1_67 = var_1_69;
	}


	// From: Req11Batch183Amount250
	if (var_1_26 != (- var_1_4)) {
		var_1_47 = (max (var_1_54 , var_1_14));
	} else {
		var_1_47 = (min (var_1_15 , var_1_17));
	}


	// From: Req23Batch183Amount250
	unsigned long int stepLocal_15 = var_1_35 + var_1_57;
	if ((abs (var_1_33)) <= stepLocal_15) {
		if (! (var_1_65 > (min (var_1_4 , var_1_12)))) {
			var_1_71 = var_1_51;
		}
	} else {
		var_1_71 = var_1_30;
	}


	// From: Req3Batch183Amount250
	if (((max (1 , var_1_71)) | var_1_71) <= var_1_57) {
		var_1_13 = (max (var_1_14 , var_1_15));
	}


	// From: Req5Batch183Amount250
	unsigned char stepLocal_2 = var_1_71 <= var_1_23;
	if (var_1_67 || stepLocal_2) {
		var_1_24 = (min (var_1_5 , ((var_1_25 - var_1_26) - (abs (100000.4f)))));
	} else {
		var_1_24 = (min ((var_1_26 + (var_1_7 - var_1_6)) , var_1_5));
	}


	// From: Req6Batch183Amount250
	if (var_1_67) {
		var_1_27 = ((var_1_6 + var_1_7) - var_1_25);
	} else {
		if ((var_1_30 - var_1_31) > -32) {
			if ((var_1_24 / var_1_25) < var_1_4) {
				var_1_27 = var_1_4;
			} else {
				if (var_1_67) {
					var_1_27 = (max ((min (var_1_5 , var_1_6)) , (abs (var_1_7))));
				} else {
					var_1_27 = ((var_1_28 - var_1_6) - var_1_29);
				}
			}
		} else {
			var_1_27 = (((max (var_1_32 , var_1_7)) + var_1_29) - var_1_26);
		}
	}


	// From: Req10Batch183Amount250
	signed long int stepLocal_7 = var_1_30 ^ var_1_31;
	unsigned char stepLocal_6 = var_1_41 > 8;
	if (var_1_67 || stepLocal_6) {
		if (stepLocal_7 >= var_1_40) {
			var_1_44 = ((var_1_29 + var_1_45) + var_1_7);
		}
	} else {
		if (var_1_67) {
			var_1_44 = var_1_4;
		} else {
			var_1_44 = var_1_46;
		}
	}


	// From: Req16Batch183Amount250
	if ((var_1_46 * 25.9f) != var_1_61) {
		var_1_58 = (min (var_1_23 , var_1_60));
	} else {
		var_1_58 = ((22756 - (max (var_1_37 , var_1_71))) - (max ((var_1_56 - var_1_35) , var_1_40)));
	}


	// From: Req20Batch183Amount250
	signed long int stepLocal_14 = var_1_71;
	if (stepLocal_14 < ((max (var_1_54 , 1)) - var_1_42)) {
		var_1_66 = (var_1_29 - 255.625f);
	} else {
		var_1_66 = 64.6f;
	}


	// From: Req22Batch183Amount250
	if (var_1_7 >= var_1_6) {
		var_1_70 = ((abs (var_1_36)) - var_1_53);
	} else {
		var_1_70 = (min (var_1_40 , (var_1_57 + var_1_71)));
	}


	// From: Req19Batch183Amount250
	unsigned char stepLocal_13 = var_1_18;
	if (var_1_29 > var_1_12) {
		if (var_1_19) {
			if ((var_1_1 * (var_1_27 / var_1_25)) == var_1_45) {
				var_1_63 = (var_1_32 + var_1_45);
			} else {
				var_1_63 = (min ((max (var_1_7 , var_1_26)) , (var_1_29 - var_1_28)));
			}
		} else {
			var_1_63 = (var_1_7 + var_1_32);
		}
	} else {
		if (var_1_1 == var_1_25) {
			if (stepLocal_13 && var_1_64) {
				var_1_63 = (abs (var_1_29));
			} else {
				var_1_63 = (var_1_65 - var_1_29);
			}
		} else {
			var_1_63 = (min (var_1_26 , var_1_28));
		}
	}


	// From: Req9Batch183Amount250
	signed short int stepLocal_5 = var_1_31;
	if (stepLocal_5 == var_1_70) {
		var_1_43 = 128.625f;
	} else {
		var_1_43 = (var_1_28 - (min (var_1_29 , (abs (var_1_32)))));
	}


	// From: Req12Batch183Amount250
	unsigned long int stepLocal_8 = max ((max (var_1_57 , var_1_47)) , var_1_41);
	if ((var_1_36 * var_1_38) < stepLocal_8) {
		if ((var_1_25 - (min (var_1_7 , 32.75))) == (min (var_1_44 , var_1_6))) {
			if (var_1_44 < (abs (max (var_1_63 , var_1_26)))) {
				var_1_48 = (abs ((var_1_39 + 10) + (max (var_1_40 , var_1_35))));
			} else {
				var_1_48 = (max (var_1_39 , (abs (abs (var_1_36)))));
			}
		} else {
			var_1_48 = (var_1_38 + var_1_35);
		}
	} else {
		var_1_48 = ((var_1_51 - var_1_35) - var_1_40);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65535);
	assume_abort_if_not(var_1_17 != 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -63);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -31);
	assume_abort_if_not(var_1_22 <= 32);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -31);
	assume_abort_if_not(var_1_23 <= 31);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 4611686.018427383000e+12F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 6917529.027641074000e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -1);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 8);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 7);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 63);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 64);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 7);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -230584.3009213691400e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691400e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854766000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 190);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 32767);
	assume_abort_if_not(var_1_53 <= 65535);
	var_1_55 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_55 >= 16382);
	assume_abort_if_not(var_1_55 <= 32766);
	var_1_56 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_56 >= 16383);
	assume_abort_if_not(var_1_56 <= 32766);
	var_1_60 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_60 >= -32767);
	assume_abort_if_not(var_1_60 <= 32766);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 1);
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854766000e+12F && var_1_65 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 0);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 1);
	assume_abort_if_not(var_1_69 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_71 = var_1_71;
}

int property(void) {
	return (((((((((((((((((((((((last_1_var_1_63 >= last_1_var_1_12) ? (var_1_1 == ((double) ((min (var_1_4 , var_1_5)) + (var_1_6 - var_1_7)))) : ((var_1_7 > var_1_4) ? (((max (last_1_var_1_41 , (last_1_var_1_47 | last_1_var_1_71))) < last_1_var_1_71) ? (var_1_1 == ((double) (min (((var_1_6 + var_1_7) - 63.75) , (var_1_4 + var_1_5))))) : ((last_1_var_1_47 < last_1_var_1_41) ? (var_1_1 == ((double) (max (var_1_7 , 1.5)))) : 1)) : (var_1_1 == ((double) (min (100.5 , var_1_6)))))) && (var_1_12 == ((double) (1.00000000008E10 + var_1_4)))) && ((((max (1 , var_1_71)) | var_1_71) <= var_1_57) ? (var_1_13 == ((unsigned short int) (max (var_1_14 , var_1_15)))) : 1)) && ((var_1_18 && var_1_19) ? (var_1_16 == ((signed char) ((min (var_1_20 , 16)) + (min (var_1_21 , (var_1_22 + var_1_23)))))) : (var_1_16 == ((signed char) (min (var_1_21 , -16)))))) && ((var_1_67 || (var_1_71 <= var_1_23)) ? (var_1_24 == ((float) (min (var_1_5 , ((var_1_25 - var_1_26) - (abs (100000.4f))))))) : (var_1_24 == ((float) (min ((var_1_26 + (var_1_7 - var_1_6)) , var_1_5)))))) && (var_1_67 ? (var_1_27 == ((float) ((var_1_6 + var_1_7) - var_1_25))) : (((var_1_30 - var_1_31) > -32) ? (((var_1_24 / var_1_25) < var_1_4) ? (var_1_27 == ((float) var_1_4)) : (var_1_67 ? (var_1_27 == ((float) (max ((min (var_1_5 , var_1_6)) , (abs (var_1_7)))))) : (var_1_27 == ((float) ((var_1_28 - var_1_6) - var_1_29))))) : (var_1_27 == ((float) (((max (var_1_32 , var_1_7)) + var_1_29) - var_1_26)))))) && ((last_1_var_1_71 != (var_1_15 >> (var_1_35 + var_1_36))) ? (last_1_var_1_67 ? (var_1_33 == ((unsigned char) (max (var_1_35 , var_1_36)))) : (var_1_33 == ((unsigned char) (var_1_37 - (min ((var_1_38 - var_1_36) , var_1_35)))))) : (var_1_33 == ((unsigned char) ((var_1_36 + var_1_35) + (var_1_39 + var_1_40)))))) && ((((min (var_1_35 , last_1_var_1_41)) - (var_1_40 + var_1_37)) > ((min (var_1_17 , last_1_var_1_47)) << (var_1_36 + var_1_42))) ? (var_1_41 == ((signed long int) (max (var_1_22 , var_1_23)))) : 1)) && ((var_1_31 == var_1_70) ? (var_1_43 == ((float) 128.625f)) : (var_1_43 == ((float) (var_1_28 - (min (var_1_29 , (abs (var_1_32))))))))) && ((var_1_67 || (var_1_41 > 8)) ? (((var_1_30 ^ var_1_31) >= var_1_40) ? (var_1_44 == ((double) ((var_1_29 + var_1_45) + var_1_7))) : 1) : (var_1_67 ? (var_1_44 == ((double) var_1_4)) : (var_1_44 == ((double) var_1_46))))) && ((var_1_26 != (- var_1_4)) ? (var_1_47 == ((unsigned long int) (max (var_1_54 , var_1_14)))) : (var_1_47 == ((unsigned long int) (min (var_1_15 , var_1_17)))))) && (((var_1_36 * var_1_38) < (max ((max (var_1_57 , var_1_47)) , var_1_41))) ? (((var_1_25 - (min (var_1_7 , 32.75))) == (min (var_1_44 , var_1_6))) ? ((var_1_44 < (abs (max (var_1_63 , var_1_26)))) ? (var_1_48 == ((unsigned char) (abs ((var_1_39 + 10) + (max (var_1_40 , var_1_35)))))) : (var_1_48 == ((unsigned char) (max (var_1_39 , (abs (abs (var_1_36)))))))) : (var_1_48 == ((unsigned char) (var_1_38 + var_1_35)))) : (var_1_48 == ((unsigned char) ((var_1_51 - var_1_35) - var_1_40))))) && ((var_1_19 || var_1_18) ? (var_1_52 == ((float) ((var_1_6 - var_1_32) + var_1_5))) : (((var_1_53 - 5) > var_1_14) ? (var_1_52 == ((float) (abs (min (var_1_4 , (var_1_7 + var_1_45)))))) : (var_1_52 == ((float) ((max ((var_1_6 - var_1_29) , var_1_7)) + var_1_4)))))) && (((last_1_var_1_54 - var_1_42) <= var_1_41) ? (var_1_54 == ((signed short int) (var_1_42 + var_1_38))) : (var_1_54 == ((signed short int) (var_1_38 - (var_1_56 - (max (256 , var_1_51)))))))) && ((var_1_55 != var_1_30) ? (var_1_57 == ((signed long int) (var_1_14 - var_1_31))) : 1)) && (((var_1_46 * 25.9f) != var_1_61) ? (var_1_58 == ((signed short int) (min (var_1_23 , var_1_60)))) : (var_1_58 == ((signed short int) ((22756 - (max (var_1_37 , var_1_71))) - (max ((var_1_56 - var_1_35) , var_1_40))))))) && (var_1_61 == ((float) (max (2.25f , var_1_7))))) && ((var_1_61 <= var_1_5) ? (var_1_62 == ((unsigned short int) var_1_31)) : 1)) && ((var_1_29 > var_1_12) ? (var_1_19 ? (((var_1_1 * (var_1_27 / var_1_25)) == var_1_45) ? (var_1_63 == ((double) (var_1_32 + var_1_45))) : (var_1_63 == ((double) (min ((max (var_1_7 , var_1_26)) , (var_1_29 - var_1_28)))))) : (var_1_63 == ((double) (var_1_7 + var_1_32)))) : ((var_1_1 == var_1_25) ? ((var_1_18 && var_1_64) ? (var_1_63 == ((double) (abs (var_1_29)))) : (var_1_63 == ((double) (var_1_65 - var_1_29)))) : (var_1_63 == ((double) (min (var_1_26 , var_1_28))))))) && ((var_1_71 < ((max (var_1_54 , 1)) - var_1_42)) ? (var_1_66 == ((float) (var_1_29 - 255.625f))) : (var_1_66 == ((float) 64.6f)))) && (var_1_64 ? (var_1_67 == ((unsigned char) var_1_68)) : (var_1_67 == ((unsigned char) var_1_69)))) && ((var_1_7 >= var_1_6) ? (var_1_70 == ((signed long int) ((abs (var_1_36)) - var_1_53))) : (var_1_70 == ((signed long int) (min (var_1_40 , (var_1_57 + var_1_71))))))) && (((abs (var_1_33)) <= (var_1_35 + var_1_57)) ? ((! (var_1_65 > (min (var_1_4 , var_1_12)))) ? (var_1_71 == ((signed long int) var_1_51)) : 1) : (var_1_71 == ((signed long int) var_1_30)))
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
