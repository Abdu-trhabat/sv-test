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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch3Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 128;
signed char var_1_5 = 0;
signed char var_1_6 = 32;
signed char var_1_7 = 5;
signed char var_1_8 = 32;
signed char var_1_9 = 0;
double var_1_10 = 128.6;
double var_1_13 = 9.125;
double var_1_14 = 32.75;
double var_1_15 = 63.5;
double var_1_16 = 256.5;
double var_1_17 = 15.8;
unsigned short int var_1_18 = 64;
unsigned short int var_1_19 = 41023;
unsigned short int var_1_20 = 5;
unsigned short int var_1_21 = 26155;
signed char var_1_22 = 0;
unsigned long int var_1_23 = 100;
double var_1_24 = 499.8;
double var_1_25 = 3.75;
double var_1_26 = 9999.33;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
signed char var_1_31 = -2;
signed short int var_1_32 = -5;
float var_1_33 = 8.65;
float var_1_34 = 0.0;
float var_1_35 = 0.0;
signed short int var_1_36 = 8;
signed short int var_1_37 = 10000;
signed short int var_1_38 = 10000;
double var_1_39 = 63.6;
signed char var_1_40 = -10;
signed char var_1_41 = 100;
double var_1_42 = 3.5;
unsigned char var_1_43 = 2;
double var_1_44 = -0.2;
unsigned char var_1_45 = 4;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 64;
unsigned char var_1_49 = 8;
unsigned char var_1_50 = 4;
unsigned char var_1_51 = 200;
double var_1_52 = 2.8;
double var_1_53 = 50.5;
double var_1_54 = 99999999999.5;
double var_1_55 = 0.75;
double var_1_56 = 5.25;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_18 = 64;
unsigned char last_1_var_1_27 = 1;
signed short int last_1_var_1_32 = -5;
signed short int last_1_var_1_36 = 8;
signed char last_1_var_1_40 = -10;
unsigned char last_1_var_1_43 = 2;
double last_1_var_1_44 = -0.2;
unsigned char last_1_var_1_46 = 1;
unsigned char last_1_var_1_47 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req18Batch3Amount250
	unsigned char stepLocal_14 = var_1_28;
	signed long int stepLocal_13 = var_1_5 - last_1_var_1_32;
	if (stepLocal_13 < ((last_1_var_1_36 * last_1_var_1_47) ^ last_1_var_1_43)) {
		if (! var_1_30) {
			if (last_1_var_1_27 || stepLocal_14) {
				var_1_47 = ((var_1_41 + var_1_48) - 4);
			} else {
				var_1_47 = ((var_1_41 - var_1_9) + (var_1_45 + (var_1_49 + var_1_50)));
			}
		} else {
			var_1_47 = ((var_1_51 - var_1_6) - var_1_41);
		}
	}


	// From: Req15Batch3Amount250
	if (! (var_1_25 != last_1_var_1_44)) {
		if (last_1_var_1_46) {
			if ((last_1_var_1_36 / (max (var_1_4 , var_1_41))) > var_1_6) {
				var_1_43 = var_1_41;
			} else {
				var_1_43 = (var_1_7 + var_1_41);
			}
		}
	}


	// From: Req17Batch3Amount250
	if (var_1_17 <= (- last_1_var_1_44)) {
		var_1_46 = (((last_1_var_1_40 + last_1_var_1_18) >= var_1_21) && var_1_30);
	} else {
		var_1_46 = (! (! var_1_29));
	}


	// From: Req4Batch3Amount250
	if ((min (var_1_14 , var_1_15)) >= -0.6) {
		var_1_20 = (var_1_5 + (var_1_21 - var_1_43));
	} else {
		var_1_20 = var_1_9;
	}


	// From: Req13Batch3Amount250
	if (var_1_34 > 3.5f) {
		var_1_40 = (var_1_8 - var_1_5);
	} else {
		if (var_1_46) {
			var_1_40 = ((min ((var_1_8 - var_1_7) , var_1_5)) + var_1_6);
		} else {
			var_1_40 = (var_1_6 - (var_1_41 - var_1_5));
		}
	}


	// From: Req7Batch3Amount250
	if (var_1_9 >= var_1_8) {
		var_1_27 = (var_1_28 && var_1_29);
	} else {
		var_1_27 = (! var_1_30);
	}


	// From: Req10Batch3Amount250
	if (! var_1_46) {
		var_1_33 = (abs (var_1_13));
	} else {
		var_1_33 = (((max (var_1_34 , var_1_35)) - var_1_26) - var_1_17);
	}


	// From: Req11Batch3Amount250
	signed long int stepLocal_9 = (var_1_5 + var_1_38) / var_1_21;
	unsigned long int stepLocal_8 = (var_1_23 / var_1_8) + var_1_19;
	if (var_1_27) {
		if (var_1_4 > stepLocal_8) {
			var_1_36 = ((min (var_1_8 , var_1_4)) - ((var_1_37 + var_1_38) - var_1_9));
		}
	} else {
		if (stepLocal_9 > var_1_23) {
			var_1_36 = var_1_38;
		} else {
			var_1_36 = (var_1_5 + var_1_6);
		}
	}


	// From: Req12Batch3Amount250
	if (var_1_46) {
		var_1_39 = var_1_17;
	}


	// From: Req14Batch3Amount250
	if (((~ var_1_5) < var_1_8) && var_1_46) {
		var_1_42 = var_1_15;
	} else {
		var_1_42 = var_1_34;
	}


	// From: Req6Batch3Amount250
	if (var_1_6 <= -8) {
		if (var_1_27 || (var_1_5 == var_1_6)) {
			var_1_24 = (var_1_16 + var_1_17);
		} else {
			var_1_24 = ((max ((var_1_16 + var_1_15) , (abs (-0.25)))) + (var_1_17 - (var_1_25 + var_1_26)));
		}
	} else {
		if (var_1_46) {
			var_1_24 = var_1_13;
		}
	}


	// From: Req3Batch3Amount250
	signed long int stepLocal_3 = min ((max (var_1_8 , var_1_4)) , (var_1_36 * var_1_7));
	if (stepLocal_3 <= ((var_1_6 | var_1_9) * var_1_47)) {
		var_1_18 = ((abs (var_1_36)) + var_1_7);
	} else {
		var_1_18 = (var_1_19 - var_1_7);
	}


	// From: Req20Batch3Amount250
	if ((var_1_35 - 49.6f) > (- 31.4f)) {
		if (var_1_25 <= var_1_24) {
			var_1_56 = (min (var_1_14 , var_1_54));
		} else {
			if (var_1_46) {
				var_1_56 = var_1_17;
			}
		}
	}


	// From: Req2Batch3Amount250
	unsigned char stepLocal_2 = var_1_46;
	if (var_1_27 && stepLocal_2) {
		var_1_10 = var_1_13;
	} else {
		if (var_1_27) {
			if (var_1_46) {
				var_1_10 = (var_1_14 + (var_1_15 + var_1_16));
			} else {
				var_1_10 = ((max ((max (8.2 , var_1_16)) , (2.5 - var_1_17))) + var_1_14);
			}
		}
	}


	// From: Req5Batch3Amount250
	unsigned char stepLocal_4 = (max (var_1_47 , var_1_21)) >= 2;
	if (((var_1_23 * 4u) < var_1_5) || stepLocal_4) {
		if (var_1_16 < var_1_24) {
			var_1_22 = var_1_6;
		}
	}


	// From: Req9Batch3Amount250
	signed short int stepLocal_7 = var_1_36;
	signed char stepLocal_6 = var_1_22;
	unsigned char stepLocal_5 = var_1_4;
	if ((var_1_21 | var_1_9) >= stepLocal_7) {
		if (stepLocal_6 != (var_1_5 << var_1_23)) {
			var_1_32 = var_1_22;
		} else {
			if (var_1_19 > stepLocal_5) {
				var_1_32 = (max (var_1_4 , (var_1_9 - var_1_8)));
			} else {
				var_1_32 = var_1_20;
			}
		}
	} else {
		var_1_32 = var_1_7;
	}


	// From: Req16Batch3Amount250
	signed char stepLocal_12 = var_1_7;
	unsigned char stepLocal_11 = var_1_43;
	signed char stepLocal_10 = var_1_6;
	if (var_1_56 >= (var_1_24 / var_1_34)) {
		if (var_1_30) {
			var_1_44 = (max (var_1_16 , (abs (var_1_15))));
		} else {
			var_1_44 = (var_1_35 - var_1_25);
		}
	} else {
		if (stepLocal_11 > (abs (var_1_9 - var_1_41))) {
			if (stepLocal_12 < var_1_36) {
				var_1_44 = (var_1_17 + var_1_26);
			} else {
				var_1_44 = ((min (var_1_26 , var_1_14)) + (max (var_1_17 , var_1_25)));
			}
		} else {
			if ((max ((var_1_19 % var_1_41) , (var_1_9 >> var_1_45))) > stepLocal_10) {
				var_1_44 = (min ((var_1_34 - var_1_25) , ((max (var_1_17 , var_1_35)) - var_1_26)));
			}
		}
	}


	// From: Req1Batch3Amount250
	signed short int stepLocal_1 = var_1_32;
	signed short int stepLocal_0 = var_1_32;
	if (stepLocal_0 != (var_1_43 / var_1_4)) {
		if (var_1_43 >= stepLocal_1) {
			var_1_1 = ((abs (var_1_5 - var_1_6)) + (var_1_7 - (var_1_8 - var_1_9)));
		} else {
			var_1_1 = (abs (var_1_7));
		}
	}


	// From: Req8Batch3Amount250
	if ((max (var_1_13 , var_1_44)) < var_1_25) {
		if (var_1_27) {
			var_1_31 = (abs (var_1_9));
		} else {
			if ((var_1_18 - var_1_43) > var_1_18) {
				var_1_31 = (var_1_5 + var_1_8);
			} else {
				var_1_31 = var_1_8;
			}
		}
	} else {
		var_1_31 = var_1_8;
	}


	// From: Req19Batch3Amount250
	signed long int stepLocal_16 = 200;
	signed char stepLocal_15 = var_1_5;
	if ((min ((var_1_44 / var_1_34) , (var_1_35 - var_1_17))) >= (var_1_10 * var_1_56)) {
		if (var_1_36 > stepLocal_15) {
			var_1_52 = (max (((var_1_17 + var_1_53) - var_1_26) , (abs (var_1_16))));
		} else {
			if (stepLocal_16 >= (var_1_50 - var_1_8)) {
				var_1_52 = (((var_1_54 + var_1_55) + var_1_15) + var_1_53);
			}
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 31);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 31);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -230584.3009213691400e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16383);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 4294967295);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691400e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691400e+12F && var_1_26 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 4611686.018427383000e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 4611686.018427383000e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 8191);
	assume_abort_if_not(var_1_37 <= 16383);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= 8192);
	assume_abort_if_not(var_1_38 <= 16383);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 63);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 6);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 64);
	assume_abort_if_not(var_1_48 <= 127);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 32);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 31);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 190);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= -115292.1504606845700e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 1152921.504606845700e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= -115292.1504606845700e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 1152921.504606845700e+12F && var_1_55 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_47 = var_1_47;
}

int property(void) {
	return ((((((((((((((((((((var_1_32 != (var_1_43 / var_1_4)) ? ((var_1_43 >= var_1_32) ? (var_1_1 == ((signed char) ((abs (var_1_5 - var_1_6)) + (var_1_7 - (var_1_8 - var_1_9))))) : (var_1_1 == ((signed char) (abs (var_1_7))))) : 1) && ((var_1_27 && var_1_46) ? (var_1_10 == ((double) var_1_13)) : (var_1_27 ? (var_1_46 ? (var_1_10 == ((double) (var_1_14 + (var_1_15 + var_1_16)))) : (var_1_10 == ((double) ((max ((max (8.2 , var_1_16)) , (2.5 - var_1_17))) + var_1_14)))) : 1))) && (((min ((max (var_1_8 , var_1_4)) , (var_1_36 * var_1_7))) <= ((var_1_6 | var_1_9) * var_1_47)) ? (var_1_18 == ((unsigned short int) ((abs (var_1_36)) + var_1_7))) : (var_1_18 == ((unsigned short int) (var_1_19 - var_1_7))))) && (((min (var_1_14 , var_1_15)) >= -0.6) ? (var_1_20 == ((unsigned short int) (var_1_5 + (var_1_21 - var_1_43)))) : (var_1_20 == ((unsigned short int) var_1_9)))) && ((((var_1_23 * 4u) < var_1_5) || ((max (var_1_47 , var_1_21)) >= 2)) ? ((var_1_16 < var_1_24) ? (var_1_22 == ((signed char) var_1_6)) : 1) : 1)) && ((var_1_6 <= -8) ? ((var_1_27 || (var_1_5 == var_1_6)) ? (var_1_24 == ((double) (var_1_16 + var_1_17))) : (var_1_24 == ((double) ((max ((var_1_16 + var_1_15) , (abs (-0.25)))) + (var_1_17 - (var_1_25 + var_1_26)))))) : (var_1_46 ? (var_1_24 == ((double) var_1_13)) : 1))) && ((var_1_9 >= var_1_8) ? (var_1_27 == ((unsigned char) (var_1_28 && var_1_29))) : (var_1_27 == ((unsigned char) (! var_1_30))))) && (((max (var_1_13 , var_1_44)) < var_1_25) ? (var_1_27 ? (var_1_31 == ((signed char) (abs (var_1_9)))) : (((var_1_18 - var_1_43) > var_1_18) ? (var_1_31 == ((signed char) (var_1_5 + var_1_8))) : (var_1_31 == ((signed char) var_1_8)))) : (var_1_31 == ((signed char) var_1_8)))) && (((var_1_21 | var_1_9) >= var_1_36) ? ((var_1_22 != (var_1_5 << var_1_23)) ? (var_1_32 == ((signed short int) var_1_22)) : ((var_1_19 > var_1_4) ? (var_1_32 == ((signed short int) (max (var_1_4 , (var_1_9 - var_1_8))))) : (var_1_32 == ((signed short int) var_1_20)))) : (var_1_32 == ((signed short int) var_1_7)))) && ((! var_1_46) ? (var_1_33 == ((float) (abs (var_1_13)))) : (var_1_33 == ((float) (((max (var_1_34 , var_1_35)) - var_1_26) - var_1_17))))) && (var_1_27 ? ((var_1_4 > ((var_1_23 / var_1_8) + var_1_19)) ? (var_1_36 == ((signed short int) ((min (var_1_8 , var_1_4)) - ((var_1_37 + var_1_38) - var_1_9)))) : 1) : ((((var_1_5 + var_1_38) / var_1_21) > var_1_23) ? (var_1_36 == ((signed short int) var_1_38)) : (var_1_36 == ((signed short int) (var_1_5 + var_1_6)))))) && (var_1_46 ? (var_1_39 == ((double) var_1_17)) : 1)) && ((var_1_34 > 3.5f) ? (var_1_40 == ((signed char) (var_1_8 - var_1_5))) : (var_1_46 ? (var_1_40 == ((signed char) ((min ((var_1_8 - var_1_7) , var_1_5)) + var_1_6))) : (var_1_40 == ((signed char) (var_1_6 - (var_1_41 - var_1_5))))))) && ((((~ var_1_5) < var_1_8) && var_1_46) ? (var_1_42 == ((double) var_1_15)) : (var_1_42 == ((double) var_1_34)))) && ((! (var_1_25 != last_1_var_1_44)) ? (last_1_var_1_46 ? (((last_1_var_1_36 / (max (var_1_4 , var_1_41))) > var_1_6) ? (var_1_43 == ((unsigned char) var_1_41)) : (var_1_43 == ((unsigned char) (var_1_7 + var_1_41)))) : 1) : 1)) && ((var_1_56 >= (var_1_24 / var_1_34)) ? (var_1_30 ? (var_1_44 == ((double) (max (var_1_16 , (abs (var_1_15)))))) : (var_1_44 == ((double) (var_1_35 - var_1_25)))) : ((var_1_43 > (abs (var_1_9 - var_1_41))) ? ((var_1_7 < var_1_36) ? (var_1_44 == ((double) (var_1_17 + var_1_26))) : (var_1_44 == ((double) ((min (var_1_26 , var_1_14)) + (max (var_1_17 , var_1_25)))))) : (((max ((var_1_19 % var_1_41) , (var_1_9 >> var_1_45))) > var_1_6) ? (var_1_44 == ((double) (min ((var_1_34 - var_1_25) , ((max (var_1_17 , var_1_35)) - var_1_26))))) : 1)))) && ((var_1_17 <= (- last_1_var_1_44)) ? (var_1_46 == ((unsigned char) (((last_1_var_1_40 + last_1_var_1_18) >= var_1_21) && var_1_30))) : (var_1_46 == ((unsigned char) (! (! var_1_29)))))) && (((var_1_5 - last_1_var_1_32) < ((last_1_var_1_36 * last_1_var_1_47) ^ last_1_var_1_43)) ? ((! var_1_30) ? ((last_1_var_1_27 || var_1_28) ? (var_1_47 == ((unsigned char) ((var_1_41 + var_1_48) - 4))) : (var_1_47 == ((unsigned char) ((var_1_41 - var_1_9) + (var_1_45 + (var_1_49 + var_1_50)))))) : (var_1_47 == ((unsigned char) ((var_1_51 - var_1_6) - var_1_41)))) : 1)) && (((min ((var_1_44 / var_1_34) , (var_1_35 - var_1_17))) >= (var_1_10 * var_1_56)) ? ((var_1_36 > var_1_5) ? (var_1_52 == ((double) (max (((var_1_17 + var_1_53) - var_1_26) , (abs (var_1_16)))))) : ((200 >= (var_1_50 - var_1_8)) ? (var_1_52 == ((double) (((var_1_54 + var_1_55) + var_1_15) + var_1_53))) : 1)) : 1)) && (((var_1_35 - 49.6f) > (- 31.4f)) ? ((var_1_25 <= var_1_24) ? (var_1_56 == ((double) (min (var_1_14 , var_1_54)))) : (var_1_46 ? (var_1_56 == ((double) var_1_17)) : 1)) : 1)
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
