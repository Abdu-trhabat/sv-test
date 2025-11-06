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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch144Amount250.c", 13, "reach_error"); }
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
signed char var_1_2 = 1;
signed char var_1_3 = 2;
signed char var_1_4 = 0;
double var_1_5 = 50.5;
double var_1_7 = 5.25;
double var_1_8 = 999999999999.6;
double var_1_9 = 0.56;
signed long int var_1_10 = 16;
unsigned short int var_1_11 = 38047;
signed long int var_1_12 = 10;
float var_1_13 = 255.625;
float var_1_14 = 7.5;
float var_1_15 = 0.0;
float var_1_16 = 128.4;
float var_1_17 = 99.5;
unsigned short int var_1_18 = 2;
unsigned short int var_1_19 = 52797;
unsigned short int var_1_20 = 39959;
double var_1_21 = 99.06;
unsigned short int var_1_23 = 16;
float var_1_24 = 0.925;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
signed long int var_1_27 = 256;
signed short int var_1_29 = 1;
signed short int var_1_30 = 2;
signed short int var_1_31 = 10000;
unsigned long int var_1_32 = 0;
unsigned long int var_1_33 = 3328150841;
signed char var_1_34 = -32;
signed char var_1_35 = 1;
signed char var_1_36 = 0;
signed char var_1_37 = 4;
signed char var_1_38 = -5;
signed char var_1_39 = -5;
signed char var_1_40 = 4;
unsigned char var_1_42 = 1;
signed char var_1_43 = -5;
signed char var_1_44 = 10;
float var_1_45 = 64.375;
unsigned char var_1_47 = 4;
double var_1_48 = 499.5;
signed short int var_1_49 = -128;
double var_1_50 = 10.7;
unsigned char var_1_51 = 50;
unsigned char var_1_52 = 64;
unsigned char var_1_53 = 200;
unsigned char var_1_54 = 2;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 1;
unsigned long int var_1_58 = 2;
double var_1_59 = 499.636;
signed long int var_1_60 = -8;
signed long int var_1_61 = 128;
signed long int var_1_62 = -100;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_10 = 16;
float last_1_var_1_24 = 0.925;
unsigned long int last_1_var_1_32 = 0;
signed long int last_1_var_1_60 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req23Batch144Amount250
	if (! (last_1_var_1_32 <= var_1_30)) {
		var_1_60 = var_1_53;
	} else {
		var_1_60 = var_1_2;
	}


	// From: Req21Batch144Amount250
	if ((last_1_var_1_24 * 1.6) <= var_1_8) {
		var_1_58 = (last_1_var_1_60 + var_1_40);
	}


	// From: Req1Batch144Amount250
	var_1_1 = ((100 - var_1_2) - (max (var_1_3 , var_1_4)));


	// From: Req3Batch144Amount250
	signed long int stepLocal_3 = 32 << var_1_3;
	signed long int stepLocal_2 = var_1_11 - var_1_4;
	if (stepLocal_2 <= var_1_3) {
		if ((var_1_11 + var_1_2) >= stepLocal_3) {
			var_1_10 = (min (var_1_11 , var_1_4));
		} else {
			var_1_10 = (((min (var_1_3 , var_1_11)) + (var_1_4 + last_1_var_1_10)) + (var_1_2 - var_1_12));
		}
	}


	// From: Req7Batch144Amount250
	var_1_23 = (max (var_1_19 , var_1_2));


	// From: Req15Batch144Amount250
	var_1_48 = var_1_8;


	// From: Req16Batch144Amount250
	if (var_1_42) {
		var_1_49 = (min (var_1_2 , var_1_30));
	}


	// From: Req17Batch144Amount250
	if (var_1_8 > var_1_14) {
		var_1_50 = ((abs (var_1_16)) - (8.97949056751309E18 - var_1_17));
	}


	// From: Req18Batch144Amount250
	var_1_51 = var_1_3;


	// From: Req19Batch144Amount250
	var_1_52 = (abs ((var_1_53 - var_1_54) - var_1_4));


	// From: Req20Batch144Amount250
	if (! var_1_25) {
		var_1_55 = ((var_1_42 && var_1_56) && var_1_57);
	}


	// From: Req24Batch144Amount250
	if (var_1_55) {
		var_1_61 = ((var_1_19 + var_1_60) - 16);
	} else {
		var_1_61 = (max ((var_1_62 + (min (var_1_37 , var_1_31))) , var_1_23));
	}


	// From: Req8Batch144Amount250
	unsigned char stepLocal_8 = var_1_25;
	unsigned long int stepLocal_7 = var_1_58 / var_1_20;
	if (stepLocal_8 || var_1_26) {
		if ((2 + var_1_58) <= stepLocal_7) {
			var_1_24 = ((abs (var_1_8)) + var_1_17);
		} else {
			if ((0.209f * (max (var_1_7 , var_1_48))) >= (var_1_17 / var_1_15)) {
				var_1_24 = ((var_1_15 - var_1_16) - (abs (var_1_7)));
			} else {
				var_1_24 = (abs (15.5f + var_1_8));
			}
		}
	} else {
		var_1_24 = (min (var_1_8 , var_1_15));
	}


	// From: Req5Batch144Amount250
	signed long int stepLocal_6 = max (var_1_23 , var_1_11);
	if (var_1_3 <= stepLocal_6) {
		var_1_18 = ((min (var_1_19 , var_1_20)) - (var_1_4 + var_1_2));
	} else {
		var_1_18 = (max (var_1_19 , 500));
	}


	// From: Req12Batch144Amount250
	if (var_1_9 >= var_1_17) {
		var_1_34 = var_1_2;
	} else {
		if (var_1_55) {
			var_1_34 = (abs (var_1_3));
		}
	}


	// From: Req2Batch144Amount250
	signed long int stepLocal_1 = var_1_60 | var_1_2;
	signed char stepLocal_0 = var_1_4;
	if ((var_1_60 & var_1_18) >= stepLocal_0) {
		if ((- (var_1_3 / 2)) <= stepLocal_1) {
			var_1_5 = (min ((max (var_1_7 , (64.75 + var_1_8))) , var_1_9));
		} else {
			var_1_5 = (max (var_1_9 , 0.5));
		}
	}


	// From: Req4Batch144Amount250
	signed long int stepLocal_5 = -32;
	signed long int stepLocal_4 = ~ (-16 | 256);
	if (stepLocal_5 < (var_1_34 * var_1_11)) {
		if ((- (var_1_14 - 1.75f)) > var_1_9) {
			var_1_13 = ((var_1_15 - var_1_16) - ((9.209888693922328E18f - 24.75f) - var_1_17));
		} else {
			if ((abs (var_1_2)) <= stepLocal_4) {
				var_1_13 = var_1_8;
			} else {
				var_1_13 = var_1_9;
			}
		}
	}


	// From: Req11Batch144Amount250
	signed long int stepLocal_10 = var_1_61;
	if (var_1_13 != (200.25f * 100.75f)) {
		if (stepLocal_10 == (var_1_2 / (abs (var_1_20)))) {
			var_1_32 = (min ((var_1_61 + var_1_19) , ((var_1_33 - var_1_58) - 64u)));
		}
	} else {
		if (var_1_55) {
			var_1_32 = (var_1_4 + var_1_12);
		} else {
			var_1_32 = (var_1_33 - var_1_3);
		}
	}


	// From: Req6Batch144Amount250
	if ((var_1_12 | var_1_2) < var_1_19) {
		if (! ((1 + var_1_32) < var_1_61)) {
			var_1_21 = ((abs (var_1_17)) - 7.5);
		} else {
			var_1_21 = var_1_9;
		}
	} else {
		var_1_21 = (max (var_1_7 , (var_1_15 - (var_1_17 + 32.625))));
	}


	// From: Req9Batch144Amount250
	unsigned char stepLocal_9 = var_1_55;
	if (! (var_1_50 != var_1_5)) {
		if (((min (var_1_2 , var_1_32)) < var_1_60) && stepLocal_9) {
			if (var_1_55) {
				var_1_27 = (max ((min (var_1_3 , (max (var_1_32 , var_1_2)))) , var_1_19));
			}
		} else {
			var_1_27 = (min ((var_1_58 - (min (var_1_2 , var_1_20))) , ((var_1_19 + var_1_32) + var_1_52)));
		}
	} else {
		var_1_27 = (2 + (var_1_60 - var_1_12));
	}


	// From: Req10Batch144Amount250
	if (var_1_14 > (var_1_21 * var_1_16)) {
		var_1_29 = (((var_1_4 + var_1_27) + (var_1_3 - var_1_2)) + var_1_30);
	} else {
		var_1_29 = (((var_1_3 + var_1_4) - (var_1_31 - 25)) + var_1_2);
	}


	// From: Req14Batch144Amount250
	if (! (var_1_18 != (var_1_32 / var_1_47))) {
		var_1_45 = (max (var_1_15 , var_1_9));
	}


	// From: Req22Batch144Amount250
	signed long int stepLocal_14 = var_1_60 + var_1_27;
	if (stepLocal_14 < var_1_43) {
		var_1_59 = ((max (var_1_8 , var_1_16)) + -0.5);
	} else {
		var_1_59 = (max ((var_1_8 + (abs (var_1_16))) , var_1_15));
	}


	// From: Req13Batch144Amount250
	unsigned char stepLocal_13 = var_1_55;
	unsigned long int stepLocal_12 = (var_1_58 * var_1_31) | (var_1_19 & var_1_33);
	unsigned long int stepLocal_11 = var_1_32;
	if (var_1_9 <= (var_1_16 / var_1_15)) {
		if (var_1_59 >= var_1_5) {
			var_1_35 = var_1_4;
		} else {
			if (stepLocal_13 || ((50 << var_1_58) > (min (var_1_32 , var_1_3)))) {
				var_1_35 = (var_1_2 + var_1_36);
			} else {
				var_1_35 = (var_1_2 + ((min (var_1_37 , -4)) + (min (var_1_38 , var_1_39))));
			}
		}
	} else {
		if (((var_1_2 + var_1_40) << var_1_32) != stepLocal_12) {
			var_1_35 = (var_1_4 - var_1_40);
		} else {
			if (var_1_9 != var_1_50) {
				if (stepLocal_11 > (var_1_33 - var_1_12)) {
					var_1_35 = (var_1_39 + (var_1_38 + (var_1_43 + var_1_44)));
				}
			} else {
				var_1_35 = (max (var_1_4 , var_1_39));
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 63);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 126);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 32767);
	assume_abort_if_not(var_1_11 <= 65535);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1073741823);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 4611686.018427383000e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65534);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -16383);
	assume_abort_if_not(var_1_30 <= 16383);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= 8191);
	assume_abort_if_not(var_1_31 <= 16383);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 3221225470);
	assume_abort_if_not(var_1_33 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -63);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -31);
	assume_abort_if_not(var_1_37 <= 32);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -31);
	assume_abort_if_not(var_1_38 <= 31);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -31);
	assume_abort_if_not(var_1_39 <= 31);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -15);
	assume_abort_if_not(var_1_43 <= 16);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -15);
	assume_abort_if_not(var_1_44 <= 15);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 255);
	assume_abort_if_not(var_1_47 != 0);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 190);
	assume_abort_if_not(var_1_53 <= 254);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 1);
	assume_abort_if_not(var_1_57 <= 1);
	var_1_62 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_62 >= -1073741823);
	assume_abort_if_not(var_1_62 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_60 = var_1_60;
}

int property(void) {
	return (((((((((((((((((((((((var_1_1 == ((signed char) ((100 - var_1_2) - (max (var_1_3 , var_1_4))))) && (((var_1_60 & var_1_18) >= var_1_4) ? (((- (var_1_3 / 2)) <= (var_1_60 | var_1_2)) ? (var_1_5 == ((double) (min ((max (var_1_7 , (64.75 + var_1_8))) , var_1_9)))) : (var_1_5 == ((double) (max (var_1_9 , 0.5))))) : 1)) && (((var_1_11 - var_1_4) <= var_1_3) ? (((var_1_11 + var_1_2) >= (32 << var_1_3)) ? (var_1_10 == ((signed long int) (min (var_1_11 , var_1_4)))) : (var_1_10 == ((signed long int) (((min (var_1_3 , var_1_11)) + (var_1_4 + last_1_var_1_10)) + (var_1_2 - var_1_12))))) : 1)) && ((-32 < (var_1_34 * var_1_11)) ? (((- (var_1_14 - 1.75f)) > var_1_9) ? (var_1_13 == ((float) ((var_1_15 - var_1_16) - ((9.209888693922328E18f - 24.75f) - var_1_17)))) : (((abs (var_1_2)) <= (~ (-16 | 256))) ? (var_1_13 == ((float) var_1_8)) : (var_1_13 == ((float) var_1_9)))) : 1)) && ((var_1_3 <= (max (var_1_23 , var_1_11))) ? (var_1_18 == ((unsigned short int) ((min (var_1_19 , var_1_20)) - (var_1_4 + var_1_2)))) : (var_1_18 == ((unsigned short int) (max (var_1_19 , 500)))))) && (((var_1_12 | var_1_2) < var_1_19) ? ((! ((1 + var_1_32) < var_1_61)) ? (var_1_21 == ((double) ((abs (var_1_17)) - 7.5))) : (var_1_21 == ((double) var_1_9))) : (var_1_21 == ((double) (max (var_1_7 , (var_1_15 - (var_1_17 + 32.625)))))))) && (var_1_23 == ((unsigned short int) (max (var_1_19 , var_1_2))))) && ((var_1_25 || var_1_26) ? (((2 + var_1_58) <= (var_1_58 / var_1_20)) ? (var_1_24 == ((float) ((abs (var_1_8)) + var_1_17))) : (((0.209f * (max (var_1_7 , var_1_48))) >= (var_1_17 / var_1_15)) ? (var_1_24 == ((float) ((var_1_15 - var_1_16) - (abs (var_1_7))))) : (var_1_24 == ((float) (abs (15.5f + var_1_8)))))) : (var_1_24 == ((float) (min (var_1_8 , var_1_15)))))) && ((! (var_1_50 != var_1_5)) ? ((((min (var_1_2 , var_1_32)) < var_1_60) && var_1_55) ? (var_1_55 ? (var_1_27 == ((signed long int) (max ((min (var_1_3 , (max (var_1_32 , var_1_2)))) , var_1_19)))) : 1) : (var_1_27 == ((signed long int) (min ((var_1_58 - (min (var_1_2 , var_1_20))) , ((var_1_19 + var_1_32) + var_1_52)))))) : (var_1_27 == ((signed long int) (2 + (var_1_60 - var_1_12)))))) && ((var_1_14 > (var_1_21 * var_1_16)) ? (var_1_29 == ((signed short int) (((var_1_4 + var_1_27) + (var_1_3 - var_1_2)) + var_1_30))) : (var_1_29 == ((signed short int) (((var_1_3 + var_1_4) - (var_1_31 - 25)) + var_1_2))))) && ((var_1_13 != (200.25f * 100.75f)) ? ((var_1_61 == (var_1_2 / (abs (var_1_20)))) ? (var_1_32 == ((unsigned long int) (min ((var_1_61 + var_1_19) , ((var_1_33 - var_1_58) - 64u))))) : 1) : (var_1_55 ? (var_1_32 == ((unsigned long int) (var_1_4 + var_1_12))) : (var_1_32 == ((unsigned long int) (var_1_33 - var_1_3)))))) && ((var_1_9 >= var_1_17) ? (var_1_34 == ((signed char) var_1_2)) : (var_1_55 ? (var_1_34 == ((signed char) (abs (var_1_3)))) : 1))) && ((var_1_9 <= (var_1_16 / var_1_15)) ? ((var_1_59 >= var_1_5) ? (var_1_35 == ((signed char) var_1_4)) : ((var_1_55 || ((50 << var_1_58) > (min (var_1_32 , var_1_3)))) ? (var_1_35 == ((signed char) (var_1_2 + var_1_36))) : (var_1_35 == ((signed char) (var_1_2 + ((min (var_1_37 , -4)) + (min (var_1_38 , var_1_39)))))))) : ((((var_1_2 + var_1_40) << var_1_32) != ((var_1_58 * var_1_31) | (var_1_19 & var_1_33))) ? (var_1_35 == ((signed char) (var_1_4 - var_1_40))) : ((var_1_9 != var_1_50) ? ((var_1_32 > (var_1_33 - var_1_12)) ? (var_1_35 == ((signed char) (var_1_39 + (var_1_38 + (var_1_43 + var_1_44))))) : 1) : (var_1_35 == ((signed char) (max (var_1_4 , var_1_39)))))))) && ((! (var_1_18 != (var_1_32 / var_1_47))) ? (var_1_45 == ((float) (max (var_1_15 , var_1_9)))) : 1)) && (var_1_48 == ((double) var_1_8))) && (var_1_42 ? (var_1_49 == ((signed short int) (min (var_1_2 , var_1_30)))) : 1)) && ((var_1_8 > var_1_14) ? (var_1_50 == ((double) ((abs (var_1_16)) - (8.97949056751309E18 - var_1_17)))) : 1)) && (var_1_51 == ((unsigned char) var_1_3))) && (var_1_52 == ((unsigned char) (abs ((var_1_53 - var_1_54) - var_1_4))))) && ((! var_1_25) ? (var_1_55 == ((unsigned char) ((var_1_42 && var_1_56) && var_1_57))) : 1)) && (((last_1_var_1_24 * 1.6) <= var_1_8) ? (var_1_58 == ((unsigned long int) (last_1_var_1_60 + var_1_40))) : 1)) && (((var_1_60 + var_1_27) < var_1_43) ? (var_1_59 == ((double) ((max (var_1_8 , var_1_16)) + -0.5))) : (var_1_59 == ((double) (max ((var_1_8 + (abs (var_1_16))) , var_1_15)))))) && ((! (last_1_var_1_32 <= var_1_30)) ? (var_1_60 == ((signed long int) var_1_53)) : (var_1_60 == ((signed long int) var_1_2)))) && (var_1_55 ? (var_1_61 == ((signed long int) ((var_1_19 + var_1_60) - 16))) : (var_1_61 == ((signed long int) (max ((var_1_62 + (min (var_1_37 , var_1_31))) , var_1_23)))))
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
