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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch194Amount250.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 64;
unsigned short int var_1_6 = 128;
unsigned short int var_1_7 = 10;
unsigned short int var_1_8 = 5;
unsigned char var_1_9 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
signed long int var_1_14 = 0;
signed char var_1_15 = -4;
unsigned char var_1_16 = 2;
signed long int var_1_17 = 1000000000;
signed long int var_1_18 = 1000000000;
signed short int var_1_19 = -50;
signed long int var_1_20 = -25;
double var_1_21 = -0.5;
double var_1_22 = 49.5;
double var_1_23 = 3.05;
signed long int var_1_24 = 5;
unsigned long int var_1_25 = 2271381224;
signed short int var_1_26 = -256;
unsigned short int var_1_28 = 128;
unsigned short int var_1_29 = 22345;
unsigned short int var_1_30 = 28337;
float var_1_31 = 32.2;
float var_1_32 = 999999.25;
float var_1_33 = 0.19999999999999996;
float var_1_35 = 100000000.1;
float var_1_36 = 0.0;
float var_1_37 = 0.0;
float var_1_38 = 100.4;
float var_1_39 = 8.5;
float var_1_40 = 63.5;
float var_1_41 = 1.2;
signed short int var_1_42 = -16;
unsigned char var_1_43 = 200;
unsigned char var_1_44 = 50;
unsigned char var_1_45 = 8;
unsigned char var_1_46 = 32;
unsigned char var_1_47 = 5;
unsigned char var_1_48 = 128;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 2;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 100;
unsigned short int var_1_53 = 4;
float var_1_55 = 31.5;
unsigned short int var_1_56 = 53880;
signed short int var_1_57 = 256;
signed char var_1_58 = -1;
signed short int var_1_59 = -8;
signed short int var_1_60 = 1000;
signed long int var_1_61 = 10;
signed long int var_1_62 = -4;
signed long int var_1_63 = 1123563469;
unsigned char var_1_64 = 32;
unsigned char var_1_65 = 32;
unsigned char var_1_66 = 0;
double var_1_67 = 32.2;
double var_1_69 = 4.2;
signed long int var_1_70 = 4;
float var_1_71 = 7.4;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_9 = 0;
signed long int last_1_var_1_14 = 0;
double last_1_var_1_21 = -0.5;
signed long int last_1_var_1_24 = 5;
unsigned short int last_1_var_1_28 = 128;
unsigned short int last_1_var_1_53 = 4;
signed short int last_1_var_1_57 = 256;
signed long int last_1_var_1_70 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req20Batch194Amount250
	if ((var_1_55 * (min (var_1_37 , last_1_var_1_21))) == last_1_var_1_21) {
		if ((var_1_48 * var_1_30) > last_1_var_1_70) {
			if ((- (max (8 , last_1_var_1_57))) <= (var_1_30 * (32 / var_1_62))) {
				var_1_61 = (var_1_15 + var_1_52);
			} else {
				if (last_1_var_1_9 || var_1_12) {
					var_1_61 = var_1_50;
				} else {
					var_1_61 = (abs (last_1_var_1_14));
				}
			}
		} else {
			var_1_61 = ((var_1_63 - (min (last_1_var_1_53 , last_1_var_1_70))) - ((var_1_18 - var_1_56) + last_1_var_1_14));
		}
	} else {
		var_1_61 = -100;
	}


	// From: Req24Batch194Amount250
	var_1_70 = ((var_1_6 + var_1_49) - (1988500526 - var_1_61));


	// From: Req6Batch194Amount250
	if ((var_1_8 ^ (min (last_1_var_1_14 , last_1_var_1_24))) < (last_1_var_1_70 * var_1_17)) {
		var_1_21 = (var_1_22 + var_1_23);
	} else {
		var_1_21 = 1.4;
	}


	// From: Req4Batch194Amount250
	var_1_19 = (abs (var_1_16));


	// From: Req10Batch194Amount250
	signed long int stepLocal_3 = (var_1_30 + var_1_6) * var_1_61;
	if (! var_1_11) {
		var_1_31 = (min (((var_1_32 - var_1_33) + var_1_22) , var_1_23));
	} else {
		if (var_1_17 != stepLocal_3) {
			var_1_31 = (var_1_33 + var_1_32);
		} else {
			var_1_31 = (var_1_33 - (var_1_32 + 7.4f));
		}
	}


	// From: Req12Batch194Amount250
	var_1_39 = (max (var_1_23 , 1.000000000002E11f));


	// From: Req14Batch194Amount250
	signed long int stepLocal_5 = (var_1_43 - var_1_16) - var_1_44;
	if (stepLocal_5 > var_1_30) {
		var_1_42 = (var_1_15 + (5 - var_1_7));
	} else {
		var_1_42 = (var_1_7 - var_1_16);
	}


	// From: Req17Batch194Amount250
	if (var_1_41 < var_1_36) {
		var_1_57 = (var_1_46 + var_1_51);
	} else {
		var_1_57 = (var_1_52 - var_1_49);
	}


	// From: Req18Batch194Amount250
	unsigned char stepLocal_9 = var_1_43;
	if (var_1_6 < stepLocal_9) {
		var_1_58 = (var_1_16 - 1);
	}


	// From: Req22Batch194Amount250
	var_1_66 = 128;


	// From: Req23Batch194Amount250
	var_1_67 = ((var_1_36 - (max (var_1_37 , var_1_38))) - (var_1_32 + 255.125));


	// From: Req25Batch194Amount250
	var_1_71 = var_1_69;


	// From: Req2Batch194Amount250
	if (var_1_67 == var_1_21) {
		if (var_1_7 <= var_1_61) {
			var_1_9 = (var_1_11 || var_1_12);
		} else {
			var_1_9 = (((var_1_6 < var_1_7) && var_1_11) || var_1_12);
		}
	} else {
		var_1_9 = var_1_13;
	}


	// From: Req3Batch194Amount250
	signed long int stepLocal_0 = var_1_70 >> var_1_16;
	if (((abs (var_1_15)) + var_1_6) < stepLocal_0) {
		var_1_14 = (min ((var_1_16 - var_1_6) , (min (var_1_70 , var_1_8))));
	} else {
		if ((var_1_67 + var_1_21) < var_1_21) {
			var_1_14 = (max ((5 - var_1_7) , 200));
		} else {
			var_1_14 = ((var_1_70 + var_1_8) - ((var_1_17 + var_1_18) - var_1_16));
		}
	}


	// From: Req7Batch194Amount250
	unsigned long int stepLocal_1 = min (500u , var_1_18);
	if (stepLocal_1 > (var_1_25 - (max (var_1_16 , var_1_6)))) {
		if (var_1_9) {
			var_1_24 = (var_1_8 - var_1_18);
		} else {
			var_1_24 = (var_1_61 - var_1_16);
		}
	}


	// From: Req1Batch194Amount250
	if (var_1_9) {
		if ((-0.5 + var_1_21) != (min (var_1_21 , var_1_67))) {
			var_1_1 = ((var_1_6 + var_1_7) + var_1_8);
		} else {
			var_1_1 = var_1_8;
		}
	}


	// From: Req5Batch194Amount250
	if (var_1_21 != var_1_67) {
		if (var_1_21 > var_1_67) {
			var_1_20 = (var_1_1 + var_1_18);
		} else {
			var_1_20 = ((var_1_8 + 1) - (var_1_7 + 10));
		}
	}


	// From: Req16Batch194Amount250
	signed long int stepLocal_8 = 8;
	signed char stepLocal_7 = var_1_15;
	signed long int stepLocal_6 = var_1_24;
	if (stepLocal_8 < var_1_50) {
		if (stepLocal_6 < (var_1_8 * var_1_61)) {
			if (stepLocal_7 <= (min (var_1_25 , var_1_51))) {
				if (var_1_36 > (var_1_21 / (min (var_1_37 , var_1_55)))) {
					var_1_53 = (min ((37809 - var_1_20) , var_1_7));
				}
			} else {
				var_1_53 = var_1_8;
			}
		} else {
			var_1_53 = (min ((max ((var_1_56 - var_1_52) , (var_1_16 + 10000))) , var_1_49));
		}
	} else {
		var_1_53 = (var_1_56 - (var_1_48 + var_1_49));
	}


	// From: Req8Batch194Amount250
	signed long int stepLocal_2 = var_1_24;
	if (var_1_20 >= stepLocal_2) {
		var_1_26 = (var_1_7 + var_1_16);
	}


	// From: Req9Batch194Amount250
	if (var_1_6 < var_1_20) {
		if (var_1_67 > var_1_22) {
			var_1_28 = ((var_1_29 + var_1_30) - var_1_7);
		} else {
			var_1_28 = (max (var_1_8 , var_1_6));
		}
	} else {
		if (var_1_16 <= last_1_var_1_28) {
			var_1_28 = (47775 - var_1_30);
		} else {
			var_1_28 = 8;
		}
	}


	// From: Req11Batch194Amount250
	unsigned long int stepLocal_4 = var_1_25;
	if (var_1_9) {
		if (stepLocal_4 > (var_1_29 << 1)) {
			var_1_35 = (var_1_33 - (var_1_36 - (var_1_37 - var_1_38)));
		} else {
			var_1_35 = ((max ((var_1_38 + var_1_33) , 255.25f)) - var_1_32);
		}
	} else {
		var_1_35 = ((max (var_1_38 , 127.75f)) + (max (var_1_37 , var_1_23)));
	}


	// From: Req13Batch194Amount250
	if ((var_1_17 | (- var_1_8)) == var_1_20) {
		var_1_40 = ((max (var_1_23 , (var_1_38 + var_1_41))) + var_1_37);
	}


	// From: Req15Batch194Amount250
	if (var_1_9) {
		if ((var_1_32 - var_1_33) > var_1_67) {
			var_1_45 = (min ((max ((var_1_16 + var_1_44) , (var_1_46 + var_1_47))) , (abs (var_1_48 - var_1_49))));
		} else {
			var_1_45 = (((max (var_1_16 , var_1_50)) + var_1_51) + var_1_52);
		}
	} else {
		if (var_1_9) {
			var_1_45 = (max (var_1_47 , (var_1_52 + var_1_51)));
		} else {
			var_1_45 = (min (var_1_46 , var_1_47));
		}
	}


	// From: Req19Batch194Amount250
	if ((var_1_20 * var_1_7) > var_1_14) {
		var_1_59 = ((min (var_1_43 , (abs (var_1_49)))) - var_1_7);
	} else {
		if (-4 < var_1_30) {
			var_1_59 = (var_1_49 + (var_1_60 - var_1_51));
		}
	}


	// From: Req21Batch194Amount250
	signed long int stepLocal_10 = var_1_14;
	if (var_1_62 < stepLocal_10) {
		var_1_64 = (((var_1_65 - var_1_16) + var_1_51) + var_1_49);
	} else {
		var_1_64 = var_1_47;
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 16384);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -127);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 15);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 536870911);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 536870912);
	assume_abort_if_not(var_1_18 <= 1073741823);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 2147483647);
	assume_abort_if_not(var_1_25 <= 4294967295);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 16383);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 16384);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 4611686.018427383000e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 2305843.009213691400e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691400e+12F && var_1_38 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -230584.3009213691400e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 191);
	assume_abort_if_not(var_1_43 <= 255);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 127);
	assume_abort_if_not(var_1_48 <= 254);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 127);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 64);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 63);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= -922337.2036854776000e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854776000e+12F && var_1_55 >= 1.0e-20F ));
	assume_abort_if_not(var_1_55 != 0.0F);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 32767);
	assume_abort_if_not(var_1_56 <= 65534);
	var_1_60 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 16383);
	var_1_62 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_62 >= -2147483648);
	assume_abort_if_not(var_1_62 <= 2147483647);
	assume_abort_if_not(var_1_62 != 0);
	var_1_63 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_63 >= 1073741822);
	assume_abort_if_not(var_1_63 <= 2147483646);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 32);
	assume_abort_if_not(var_1_65 <= 64);
	var_1_69 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 2305843.009213691400e+12F && var_1_69 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_70 = var_1_70;
}

int property(void) {
	return ((((((((((((((((((((((((var_1_9 ? (((-0.5 + var_1_21) != (min (var_1_21 , var_1_67))) ? (var_1_1 == ((unsigned short int) ((var_1_6 + var_1_7) + var_1_8))) : (var_1_1 == ((unsigned short int) var_1_8))) : 1) && ((var_1_67 == var_1_21) ? ((var_1_7 <= var_1_61) ? (var_1_9 == ((unsigned char) (var_1_11 || var_1_12))) : (var_1_9 == ((unsigned char) (((var_1_6 < var_1_7) && var_1_11) || var_1_12)))) : (var_1_9 == ((unsigned char) var_1_13)))) && ((((abs (var_1_15)) + var_1_6) < (var_1_70 >> var_1_16)) ? (var_1_14 == ((signed long int) (min ((var_1_16 - var_1_6) , (min (var_1_70 , var_1_8)))))) : (((var_1_67 + var_1_21) < var_1_21) ? (var_1_14 == ((signed long int) (max ((5 - var_1_7) , 200)))) : (var_1_14 == ((signed long int) ((var_1_70 + var_1_8) - ((var_1_17 + var_1_18) - var_1_16))))))) && (var_1_19 == ((signed short int) (abs (var_1_16))))) && ((var_1_21 != var_1_67) ? ((var_1_21 > var_1_67) ? (var_1_20 == ((signed long int) (var_1_1 + var_1_18))) : (var_1_20 == ((signed long int) ((var_1_8 + 1) - (var_1_7 + 10))))) : 1)) && (((var_1_8 ^ (min (last_1_var_1_14 , last_1_var_1_24))) < (last_1_var_1_70 * var_1_17)) ? (var_1_21 == ((double) (var_1_22 + var_1_23))) : (var_1_21 == ((double) 1.4)))) && (((min (500u , var_1_18)) > (var_1_25 - (max (var_1_16 , var_1_6)))) ? (var_1_9 ? (var_1_24 == ((signed long int) (var_1_8 - var_1_18))) : (var_1_24 == ((signed long int) (var_1_61 - var_1_16)))) : 1)) && ((var_1_20 >= var_1_24) ? (var_1_26 == ((signed short int) (var_1_7 + var_1_16))) : 1)) && ((var_1_6 < var_1_20) ? ((var_1_67 > var_1_22) ? (var_1_28 == ((unsigned short int) ((var_1_29 + var_1_30) - var_1_7))) : (var_1_28 == ((unsigned short int) (max (var_1_8 , var_1_6))))) : ((var_1_16 <= last_1_var_1_28) ? (var_1_28 == ((unsigned short int) (47775 - var_1_30))) : (var_1_28 == ((unsigned short int) 8))))) && ((! var_1_11) ? (var_1_31 == ((float) (min (((var_1_32 - var_1_33) + var_1_22) , var_1_23)))) : ((var_1_17 != ((var_1_30 + var_1_6) * var_1_61)) ? (var_1_31 == ((float) (var_1_33 + var_1_32))) : (var_1_31 == ((float) (var_1_33 - (var_1_32 + 7.4f))))))) && (var_1_9 ? ((var_1_25 > (var_1_29 << 1)) ? (var_1_35 == ((float) (var_1_33 - (var_1_36 - (var_1_37 - var_1_38))))) : (var_1_35 == ((float) ((max ((var_1_38 + var_1_33) , 255.25f)) - var_1_32)))) : (var_1_35 == ((float) ((max (var_1_38 , 127.75f)) + (max (var_1_37 , var_1_23))))))) && (var_1_39 == ((float) (max (var_1_23 , 1.000000000002E11f))))) && (((var_1_17 | (- var_1_8)) == var_1_20) ? (var_1_40 == ((float) ((max (var_1_23 , (var_1_38 + var_1_41))) + var_1_37))) : 1)) && ((((var_1_43 - var_1_16) - var_1_44) > var_1_30) ? (var_1_42 == ((signed short int) (var_1_15 + (5 - var_1_7)))) : (var_1_42 == ((signed short int) (var_1_7 - var_1_16))))) && (var_1_9 ? (((var_1_32 - var_1_33) > var_1_67) ? (var_1_45 == ((unsigned char) (min ((max ((var_1_16 + var_1_44) , (var_1_46 + var_1_47))) , (abs (var_1_48 - var_1_49)))))) : (var_1_45 == ((unsigned char) (((max (var_1_16 , var_1_50)) + var_1_51) + var_1_52)))) : (var_1_9 ? (var_1_45 == ((unsigned char) (max (var_1_47 , (var_1_52 + var_1_51))))) : (var_1_45 == ((unsigned char) (min (var_1_46 , var_1_47))))))) && ((8 < var_1_50) ? ((var_1_24 < (var_1_8 * var_1_61)) ? ((var_1_15 <= (min (var_1_25 , var_1_51))) ? ((var_1_36 > (var_1_21 / (min (var_1_37 , var_1_55)))) ? (var_1_53 == ((unsigned short int) (min ((37809 - var_1_20) , var_1_7)))) : 1) : (var_1_53 == ((unsigned short int) var_1_8))) : (var_1_53 == ((unsigned short int) (min ((max ((var_1_56 - var_1_52) , (var_1_16 + 10000))) , var_1_49))))) : (var_1_53 == ((unsigned short int) (var_1_56 - (var_1_48 + var_1_49)))))) && ((var_1_41 < var_1_36) ? (var_1_57 == ((signed short int) (var_1_46 + var_1_51))) : (var_1_57 == ((signed short int) (var_1_52 - var_1_49))))) && ((var_1_6 < var_1_43) ? (var_1_58 == ((signed char) (var_1_16 - 1))) : 1)) && (((var_1_20 * var_1_7) > var_1_14) ? (var_1_59 == ((signed short int) ((min (var_1_43 , (abs (var_1_49)))) - var_1_7))) : ((-4 < var_1_30) ? (var_1_59 == ((signed short int) (var_1_49 + (var_1_60 - var_1_51)))) : 1))) && (((var_1_55 * (min (var_1_37 , last_1_var_1_21))) == last_1_var_1_21) ? (((var_1_48 * var_1_30) > last_1_var_1_70) ? (((- (max (8 , last_1_var_1_57))) <= (var_1_30 * (32 / var_1_62))) ? (var_1_61 == ((signed long int) (var_1_15 + var_1_52))) : ((last_1_var_1_9 || var_1_12) ? (var_1_61 == ((signed long int) var_1_50)) : (var_1_61 == ((signed long int) (abs (last_1_var_1_14)))))) : (var_1_61 == ((signed long int) ((var_1_63 - (min (last_1_var_1_53 , last_1_var_1_70))) - ((var_1_18 - var_1_56) + last_1_var_1_14))))) : (var_1_61 == ((signed long int) -100)))) && ((var_1_62 < var_1_14) ? (var_1_64 == ((unsigned char) (((var_1_65 - var_1_16) + var_1_51) + var_1_49))) : (var_1_64 == ((unsigned char) var_1_47)))) && (var_1_66 == ((unsigned char) 128))) && (var_1_67 == ((double) ((var_1_36 - (max (var_1_37 , var_1_38))) - (var_1_32 + 255.125))))) && (var_1_70 == ((signed long int) ((var_1_6 + var_1_49) - (1988500526 - var_1_61))))) && (var_1_71 == ((float) var_1_69))
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
