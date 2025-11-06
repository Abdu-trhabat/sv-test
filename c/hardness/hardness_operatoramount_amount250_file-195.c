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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch195Amount250.c", 13, "reach_error"); }
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
double var_1_1 = 16.625;
float var_1_3 = 256.4;
float var_1_4 = 8.3;
double var_1_6 = 9999999.5;
double var_1_7 = 100000000.5;
double var_1_8 = 10.7;
double var_1_9 = 255.8;
double var_1_10 = 99999999999999.4;
unsigned long int var_1_11 = 4;
unsigned long int var_1_14 = 3162971977;
unsigned long int var_1_15 = 32;
unsigned long int var_1_16 = 2561827834;
signed short int var_1_17 = -64;
unsigned char var_1_18 = 1;
signed short int var_1_19 = -10000;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned long int var_1_22 = 2;
unsigned long int var_1_23 = 16;
double var_1_24 = 15.8;
signed long int var_1_25 = 16;
signed short int var_1_26 = -2;
signed long int var_1_27 = 1;
signed long int var_1_28 = 2;
unsigned char var_1_29 = 10;
unsigned char var_1_30 = 32;
unsigned char var_1_31 = 10;
unsigned char var_1_32 = 0;
unsigned char var_1_34 = 200;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 10;
signed short int var_1_37 = -256;
double var_1_38 = 15.75;
signed short int var_1_39 = 25567;
signed short int var_1_40 = 10000;
signed short int var_1_41 = 10000;
unsigned short int var_1_42 = 2;
unsigned char var_1_43 = 4;
unsigned char var_1_44 = 100;
unsigned char var_1_45 = 0;
float var_1_46 = 1000000000000000.9;
float var_1_47 = 4.128;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
signed long int var_1_54 = -2;
double var_1_55 = 1.625;
signed long int var_1_56 = 500;
double var_1_57 = 8.6;
unsigned char var_1_59 = 4;
float var_1_60 = 100000000.2;
unsigned long int var_1_61 = 32;
float var_1_62 = 49.7;
float var_1_63 = 0.0;
float var_1_64 = 0.0;
signed short int var_1_65 = 25;
signed char var_1_66 = 10;
float var_1_67 = 0.6;
float var_1_68 = 49.2;

// Calibration values

// Last'ed variables
double last_1_var_1_24 = 15.8;
signed long int last_1_var_1_56 = 500;
float last_1_var_1_68 = 49.2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req16Batch195Amount250
	if (((var_1_9 + var_1_55) - (max (var_1_47 , 999.6))) > (var_1_38 / (abs (127.525)))) {
		if (var_1_34 < var_1_36) {
			if (var_1_49) {
				var_1_54 = (max (var_1_31 , (max (last_1_var_1_56 , var_1_40))));
			}
		} else {
			var_1_54 = (var_1_26 + (var_1_40 - (var_1_35 + var_1_34)));
		}
	} else {
		var_1_54 = var_1_35;
	}


	// From: Req1Batch195Amount250
	if (((last_1_var_1_24 / var_1_3) * (5.6f / var_1_4)) == last_1_var_1_68) {
		var_1_1 = ((var_1_6 + (var_1_7 + var_1_8)) + (var_1_9 - 0.125));
	}


	// From: Req5Batch195Amount250
	var_1_20 = var_1_21;


	// From: Req6Batch195Amount250
	if (var_1_8 == var_1_4) {
		var_1_22 = (var_1_16 - (abs (var_1_15)));
	} else {
		var_1_22 = (var_1_15 + var_1_23);
	}


	// From: Req7Batch195Amount250
	if (last_1_var_1_24 <= var_1_4) {
		var_1_24 = (var_1_9 + var_1_8);
	}


	// From: Req11Batch195Amount250
	var_1_42 = (52718 - var_1_34);


	// From: Req18Batch195Amount250
	signed short int stepLocal_7 = var_1_41;
	if ((var_1_22 * (var_1_16 / var_1_44)) >= stepLocal_7) {
		if (((abs (var_1_4)) + var_1_24) > (var_1_1 * var_1_57)) {
			var_1_59 = (var_1_34 - var_1_36);
		}
	} else {
		var_1_59 = 8;
	}


	// From: Req19Batch195Amount250
	unsigned char stepLocal_8 = var_1_20 || var_1_18;
	if (var_1_6 != var_1_1) {
		if (stepLocal_8 && var_1_21) {
			var_1_60 = (16.92f + var_1_8);
		} else {
			if (var_1_49) {
				var_1_60 = (31.9f - var_1_47);
			} else {
				var_1_60 = (var_1_8 + var_1_7);
			}
		}
	} else {
		var_1_60 = var_1_8;
	}


	// From: Req20Batch195Amount250
	var_1_61 = var_1_27;


	// From: Req23Batch195Amount250
	unsigned char stepLocal_12 = var_1_45;
	signed long int stepLocal_11 = var_1_28 ^ var_1_26;
	if (var_1_3 > 999999.5f) {
		if (stepLocal_11 > var_1_34) {
			var_1_66 = var_1_34;
		} else {
			var_1_66 = (abs (var_1_36));
		}
	} else {
		if (var_1_22 <= stepLocal_12) {
			var_1_66 = -1;
		} else {
			var_1_66 = var_1_36;
		}
	}


	// From: Req24Batch195Amount250
	if (var_1_51) {
		var_1_67 = var_1_63;
	} else {
		var_1_67 = var_1_6;
	}


	// From: Req17Batch195Amount250
	unsigned long int stepLocal_6 = var_1_16 / var_1_44;
	unsigned long int stepLocal_5 = var_1_61;
	if ((var_1_67 + (- var_1_8)) <= (var_1_55 - var_1_57)) {
		if (stepLocal_5 >= (var_1_61 / var_1_44)) {
			if (stepLocal_6 < var_1_15) {
				var_1_56 = (var_1_54 + var_1_45);
			}
		}
	}


	// From: Req3Batch195Amount250
	unsigned long int stepLocal_0 = var_1_14 - var_1_15;
	if (var_1_22 == stepLocal_0) {
		var_1_11 = (var_1_16 - var_1_15);
	}


	// From: Req8Batch195Amount250
	unsigned long int stepLocal_1 = var_1_61;
	if ((abs (var_1_19 + var_1_26)) >= stepLocal_1) {
		var_1_25 = ((var_1_27 + 25) - (max ((1746493380 - 128) , var_1_28)));
	}


	// From: Req12Batch195Amount250
	if ((var_1_60 + var_1_1) > var_1_8) {
		if ((- var_1_7) != (255.2 + var_1_1)) {
			var_1_43 = ((max (var_1_34 , 128)) - (max ((var_1_31 + var_1_36) , (var_1_44 - var_1_32))));
		} else {
			var_1_43 = var_1_45;
		}
	} else {
		var_1_43 = (var_1_36 + (min (0 , var_1_30)));
	}


	// From: Req22Batch195Amount250
	signed short int stepLocal_10 = var_1_41;
	if (var_1_61 > stepLocal_10) {
		var_1_65 = ((min (var_1_43 , -32)) + var_1_35);
	} else {
		var_1_65 = ((max (var_1_45 , var_1_43)) - (min (var_1_35 , 0)));
	}


	// From: Req9Batch195Amount250
	if (! (var_1_25 >= (var_1_28 - 64))) {
		var_1_29 = (var_1_30 + ((var_1_31 + 5) + var_1_32));
	} else {
		if ((var_1_6 * 0.5f) < var_1_1) {
			var_1_29 = ((abs (var_1_34 - var_1_31)) - var_1_30);
		} else {
			if ((var_1_11 ^ var_1_32) >= (var_1_16 | var_1_22)) {
				var_1_29 = (var_1_35 - (min (var_1_32 , (var_1_31 + var_1_36))));
			} else {
				var_1_29 = (abs (var_1_36));
			}
		}
	}


	// From: Req10Batch195Amount250
	if (var_1_8 >= (var_1_9 - var_1_38)) {
		if (var_1_20 && (var_1_19 < var_1_15)) {
			var_1_37 = (min (((var_1_39 - var_1_30) - var_1_36) , var_1_19));
		} else {
			if (var_1_24 < (var_1_4 + (- var_1_24))) {
				var_1_37 = (var_1_29 - ((var_1_40 + var_1_41) - (min (var_1_34 , var_1_31))));
			} else {
				var_1_37 = (var_1_39 - var_1_34);
			}
		}
	} else {
		if ((max (31.5f , var_1_9)) >= var_1_24) {
			var_1_37 = var_1_29;
		} else {
			var_1_37 = var_1_35;
		}
	}


	// From: Req15Batch195Amount250
	unsigned long int stepLocal_4 = var_1_61;
	if (stepLocal_4 < var_1_37) {
		var_1_52 = (! (var_1_50 && var_1_51));
	}


	// From: Req13Batch195Amount250
	if (var_1_52) {
		var_1_46 = (63.75f - (abs (var_1_9 - var_1_47)));
	} else {
		var_1_46 = (var_1_9 + (var_1_7 + var_1_8));
	}


	// From: Req21Batch195Amount250
	unsigned char stepLocal_9 = var_1_52;
	if (var_1_51) {
		if (! var_1_20) {
			var_1_62 = (var_1_6 + var_1_9);
		}
	} else {
		if (stepLocal_9 || var_1_20) {
			var_1_62 = (min ((min (var_1_47 , var_1_8)) , var_1_6));
		} else {
			var_1_62 = (var_1_55 - ((var_1_63 + var_1_64) - (min (var_1_9 , 7.2f))));
		}
	}


	// From: Req14Batch195Amount250
	unsigned char stepLocal_3 = var_1_34;
	signed long int stepLocal_2 = var_1_26 * var_1_41;
	if (stepLocal_2 > var_1_61) {
		var_1_48 = (! (var_1_21 || (var_1_52 && var_1_49)));
	} else {
		if (var_1_1 >= 1.5f) {
			if ((max (var_1_44 , var_1_61)) == stepLocal_3) {
				var_1_48 = (var_1_50 && var_1_51);
			}
		}
	}


	// From: Req25Batch195Amount250
	unsigned char stepLocal_15 = var_1_20;
	signed long int stepLocal_14 = 64;
	unsigned long int stepLocal_13 = (var_1_40 + var_1_30) - var_1_11;
	if (var_1_48 || stepLocal_15) {
		if (var_1_31 < stepLocal_14) {
			if ((var_1_31 << var_1_22) < stepLocal_13) {
				if (var_1_49) {
					var_1_68 = var_1_7;
				} else {
					var_1_68 = var_1_64;
				}
			} else {
				var_1_68 = 4.25f;
			}
		} else {
			var_1_68 = var_1_6;
		}
	} else {
		var_1_68 = var_1_63;
	}


	// From: Req2Batch195Amount250
	if (((var_1_8 + var_1_3) + (var_1_46 * 9999999.2f)) > (var_1_4 + var_1_68)) {
		var_1_10 = var_1_8;
	}


	// From: Req4Batch195Amount250
	if (var_1_48) {
		var_1_17 = (-2 + var_1_19);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	assume_abort_if_not(var_1_4 != 0.0F);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -230584.3009213691400e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691400e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -115292.1504606845700e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 1152921.504606845700e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -115292.1504606845700e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 1152921.504606845700e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 2147483647);
	assume_abort_if_not(var_1_16 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -16383);
	assume_abort_if_not(var_1_19 <= 16383);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -16383);
	assume_abort_if_not(var_1_26 <= 16383);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1073741823);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 2147483646);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 190);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 127);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_39 >= 16382);
	assume_abort_if_not(var_1_39 <= 32766);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= 8191);
	assume_abort_if_not(var_1_40 <= 16383);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= 8192);
	assume_abort_if_not(var_1_41 <= 16383);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 63);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 254);
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427388000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854776000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= 2305843.009213691400e+12F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427383000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= 2305843.009213691400e+12F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427383000e+12F && var_1_64 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_24 = var_1_24;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_68 = var_1_68;
}

int property(void) {
	return (((((((((((((((((((((((((((last_1_var_1_24 / var_1_3) * (5.6f / var_1_4)) == last_1_var_1_68) ? (var_1_1 == ((double) ((var_1_6 + (var_1_7 + var_1_8)) + (var_1_9 - 0.125)))) : 1) && ((((var_1_8 + var_1_3) + (var_1_46 * 9999999.2f)) > (var_1_4 + var_1_68)) ? (var_1_10 == ((double) var_1_8)) : 1)) && ((var_1_22 == (var_1_14 - var_1_15)) ? (var_1_11 == ((unsigned long int) (var_1_16 - var_1_15))) : 1)) && (var_1_48 ? (var_1_17 == ((signed short int) (-2 + var_1_19))) : 1)) && (var_1_20 == ((unsigned char) var_1_21))) && ((var_1_8 == var_1_4) ? (var_1_22 == ((unsigned long int) (var_1_16 - (abs (var_1_15))))) : (var_1_22 == ((unsigned long int) (var_1_15 + var_1_23))))) && ((last_1_var_1_24 <= var_1_4) ? (var_1_24 == ((double) (var_1_9 + var_1_8))) : 1)) && (((abs (var_1_19 + var_1_26)) >= var_1_61) ? (var_1_25 == ((signed long int) ((var_1_27 + 25) - (max ((1746493380 - 128) , var_1_28))))) : 1)) && ((! (var_1_25 >= (var_1_28 - 64))) ? (var_1_29 == ((unsigned char) (var_1_30 + ((var_1_31 + 5) + var_1_32)))) : (((var_1_6 * 0.5f) < var_1_1) ? (var_1_29 == ((unsigned char) ((abs (var_1_34 - var_1_31)) - var_1_30))) : (((var_1_11 ^ var_1_32) >= (var_1_16 | var_1_22)) ? (var_1_29 == ((unsigned char) (var_1_35 - (min (var_1_32 , (var_1_31 + var_1_36)))))) : (var_1_29 == ((unsigned char) (abs (var_1_36)))))))) && ((var_1_8 >= (var_1_9 - var_1_38)) ? ((var_1_20 && (var_1_19 < var_1_15)) ? (var_1_37 == ((signed short int) (min (((var_1_39 - var_1_30) - var_1_36) , var_1_19)))) : ((var_1_24 < (var_1_4 + (- var_1_24))) ? (var_1_37 == ((signed short int) (var_1_29 - ((var_1_40 + var_1_41) - (min (var_1_34 , var_1_31)))))) : (var_1_37 == ((signed short int) (var_1_39 - var_1_34))))) : (((max (31.5f , var_1_9)) >= var_1_24) ? (var_1_37 == ((signed short int) var_1_29)) : (var_1_37 == ((signed short int) var_1_35))))) && (var_1_42 == ((unsigned short int) (52718 - var_1_34)))) && (((var_1_60 + var_1_1) > var_1_8) ? (((- var_1_7) != (255.2 + var_1_1)) ? (var_1_43 == ((unsigned char) ((max (var_1_34 , 128)) - (max ((var_1_31 + var_1_36) , (var_1_44 - var_1_32)))))) : (var_1_43 == ((unsigned char) var_1_45))) : (var_1_43 == ((unsigned char) (var_1_36 + (min (0 , var_1_30))))))) && (var_1_52 ? (var_1_46 == ((float) (63.75f - (abs (var_1_9 - var_1_47))))) : (var_1_46 == ((float) (var_1_9 + (var_1_7 + var_1_8)))))) && (((var_1_26 * var_1_41) > var_1_61) ? (var_1_48 == ((unsigned char) (! (var_1_21 || (var_1_52 && var_1_49))))) : ((var_1_1 >= 1.5f) ? (((max (var_1_44 , var_1_61)) == var_1_34) ? (var_1_48 == ((unsigned char) (var_1_50 && var_1_51))) : 1) : 1))) && ((var_1_61 < var_1_37) ? (var_1_52 == ((unsigned char) (! (var_1_50 && var_1_51)))) : 1)) && ((((var_1_9 + var_1_55) - (max (var_1_47 , 999.6))) > (var_1_38 / (abs (127.525)))) ? ((var_1_34 < var_1_36) ? (var_1_49 ? (var_1_54 == ((signed long int) (max (var_1_31 , (max (last_1_var_1_56 , var_1_40)))))) : 1) : (var_1_54 == ((signed long int) (var_1_26 + (var_1_40 - (var_1_35 + var_1_34)))))) : (var_1_54 == ((signed long int) var_1_35)))) && (((var_1_67 + (- var_1_8)) <= (var_1_55 - var_1_57)) ? ((var_1_61 >= (var_1_61 / var_1_44)) ? (((var_1_16 / var_1_44) < var_1_15) ? (var_1_56 == ((signed long int) (var_1_54 + var_1_45))) : 1) : 1) : 1)) && (((var_1_22 * (var_1_16 / var_1_44)) >= var_1_41) ? ((((abs (var_1_4)) + var_1_24) > (var_1_1 * var_1_57)) ? (var_1_59 == ((unsigned char) (var_1_34 - var_1_36))) : 1) : (var_1_59 == ((unsigned char) 8)))) && ((var_1_6 != var_1_1) ? (((var_1_20 || var_1_18) && var_1_21) ? (var_1_60 == ((float) (16.92f + var_1_8))) : (var_1_49 ? (var_1_60 == ((float) (31.9f - var_1_47))) : (var_1_60 == ((float) (var_1_8 + var_1_7))))) : (var_1_60 == ((float) var_1_8)))) && (var_1_61 == ((unsigned long int) var_1_27))) && (var_1_51 ? ((! var_1_20) ? (var_1_62 == ((float) (var_1_6 + var_1_9))) : 1) : ((var_1_52 || var_1_20) ? (var_1_62 == ((float) (min ((min (var_1_47 , var_1_8)) , var_1_6)))) : (var_1_62 == ((float) (var_1_55 - ((var_1_63 + var_1_64) - (min (var_1_9 , 7.2f))))))))) && ((var_1_61 > var_1_41) ? (var_1_65 == ((signed short int) ((min (var_1_43 , -32)) + var_1_35))) : (var_1_65 == ((signed short int) ((max (var_1_45 , var_1_43)) - (min (var_1_35 , 0))))))) && ((var_1_3 > 999999.5f) ? (((var_1_28 ^ var_1_26) > var_1_34) ? (var_1_66 == ((signed char) var_1_34)) : (var_1_66 == ((signed char) (abs (var_1_36))))) : ((var_1_22 <= var_1_45) ? (var_1_66 == ((signed char) -1)) : (var_1_66 == ((signed char) var_1_36))))) && (var_1_51 ? (var_1_67 == ((float) var_1_63)) : (var_1_67 == ((float) var_1_6)))) && ((var_1_48 || var_1_20) ? ((var_1_31 < 64) ? (((var_1_31 << var_1_22) < ((var_1_40 + var_1_30) - var_1_11)) ? (var_1_49 ? (var_1_68 == ((float) var_1_7)) : (var_1_68 == ((float) var_1_64))) : (var_1_68 == ((float) 4.25f))) : (var_1_68 == ((float) var_1_6))) : (var_1_68 == ((float) var_1_63)))
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
