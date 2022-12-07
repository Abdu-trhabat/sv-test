// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch96Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 200;
float var_1_6 = 100000000.15;
unsigned char var_1_8 = 0;
float var_1_9 = -0.25;
float var_1_10 = 63.5;
signed short int var_1_11 = 1;
signed short int var_1_13 = 1;
float var_1_16 = 1000000000000.145;
float var_1_17 = 255.4;
float var_1_18 = 1.8;
float var_1_19 = 50.2;
unsigned short int var_1_20 = 2;
unsigned short int var_1_24 = 32;
unsigned char var_1_25 = 2;
unsigned char var_1_26 = 200;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 128;
unsigned char var_1_29 = 50;
unsigned char var_1_30 = 32;
unsigned char var_1_31 = 4;
float var_1_32 = 128.6;
float var_1_33 = 16.5;
float var_1_35 = 255.5;
float var_1_36 = 32.7;
float var_1_37 = 10000.75;
float var_1_38 = 8.7;
unsigned long int var_1_39 = 32;
float var_1_40 = 16.5;
signed char var_1_42 = -128;
signed char var_1_43 = 2;
signed char var_1_44 = 2;
signed short int var_1_45 = 5;
unsigned char var_1_46 = 4;
float var_1_47 = 100.5;
float var_1_48 = 0.0;
float var_1_49 = 0.0;
float var_1_50 = 0.0;
float var_1_51 = 4.75;
float var_1_52 = 25.2;
unsigned long int var_1_53 = 2668611408;
signed short int var_1_55 = 16;
signed char var_1_56 = -1;
signed long int var_1_57 = -4;
unsigned short int var_1_60 = 4;
signed char var_1_61 = 4;
signed char var_1_62 = 64;
signed char var_1_63 = -8;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
signed long int var_1_66 = 256;
double var_1_68 = 99999999.75;
unsigned long int var_1_69 = 256;
unsigned short int var_1_70 = 100;
unsigned short int var_1_71 = 64;

// Calibration values

// Last'ed variables
float last_1_var_1_6 = 100000000.15;
float last_1_var_1_16 = 1000000000000.145;
unsigned short int last_1_var_1_20 = 2;
unsigned char last_1_var_1_25 = 2;
unsigned long int last_1_var_1_39 = 32;
signed char last_1_var_1_42 = -128;
unsigned char last_1_var_1_46 = 4;
signed char last_1_var_1_56 = -1;
signed char last_1_var_1_61 = 4;
double last_1_var_1_68 = 99999999.75;
unsigned short int last_1_var_1_71 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req20Batch96Amount250
	signed long int stepLocal_15 = last_1_var_1_42;
	if (stepLocal_15 < last_1_var_1_46) {
		var_1_57 = ((min (last_1_var_1_71 , last_1_var_1_25)) - last_1_var_1_46);
	} else {
		if (((min (var_1_48 , var_1_18)) - var_1_49) < (last_1_var_1_68 * last_1_var_1_16)) {
			var_1_57 = (last_1_var_1_56 + (last_1_var_1_46 - 128));
		} else {
			var_1_57 = (last_1_var_1_20 + last_1_var_1_61);
		}
	}


	// From: Req23Batch96Amount250
	if (var_1_9 < last_1_var_1_6) {
		var_1_63 = -2;
	}


	// From: Req3Batch96Amount250
	var_1_11 = (min (var_1_63 , 2));


	// From: Req21Batch96Amount250
	if ((var_1_29 - var_1_44) > -4) {
		if (var_1_48 >= (var_1_37 + (3.1f + 4.8f))) {
			var_1_60 = var_1_63;
		}
	} else {
		var_1_60 = var_1_30;
	}


	// From: Req5Batch96Amount250
	if (! (var_1_10 > var_1_9)) {
		var_1_16 = (max ((max (var_1_9 , (var_1_17 - var_1_18))) , var_1_10));
	}


	// From: Req6Batch96Amount250
	if (var_1_18 <= (- var_1_10)) {
		var_1_19 = (min (var_1_9 , var_1_10));
	}


	// From: Req16Batch96Amount250
	signed long int stepLocal_11 = var_1_60 + var_1_60;
	if (var_1_30 > stepLocal_11) {
		var_1_47 = (((var_1_48 + var_1_49) - (abs (var_1_37))) - (var_1_50 - var_1_51));
	} else {
		var_1_47 = (abs (var_1_50));
	}


	// From: Req24Batch96Amount250
	if (var_1_8) {
		var_1_64 = var_1_65;
	} else {
		var_1_64 = var_1_65;
	}


	// From: Req27Batch96Amount250
	var_1_69 = var_1_30;


	// From: Req28Batch96Amount250
	var_1_70 = var_1_28;


	// From: Req29Batch96Amount250
	var_1_71 = 1;


	// From: Req22Batch96Amount250
	unsigned char stepLocal_16 = (var_1_44 - 16) > var_1_57;
	if (stepLocal_16 || var_1_64) {
		var_1_61 = (abs ((var_1_62 - var_1_27) - var_1_31));
	} else {
		var_1_61 = (var_1_43 - (min (5 , var_1_31)));
	}


	// From: Req9Batch96Amount250
	signed short int stepLocal_4 = var_1_11;
	if (! (var_1_70 <= (- var_1_70))) {
		if (stepLocal_4 > last_1_var_1_25) {
			var_1_25 = ((min ((var_1_26 - var_1_27) , var_1_28)) - var_1_29);
		} else {
			var_1_25 = ((var_1_26 - (var_1_30 + var_1_31)) - var_1_27);
		}
	} else {
		var_1_25 = (var_1_27 + var_1_31);
	}


	// From: Req4Batch96Amount250
	unsigned short int stepLocal_2 = var_1_60;
	if (var_1_70 <= stepLocal_2) {
		var_1_13 = (abs (max (var_1_61 , var_1_61)));
	}


	// From: Req15Batch96Amount250
	if (var_1_64) {
		var_1_46 = (var_1_27 + var_1_29);
	} else {
		var_1_46 = (var_1_27 + (max (16 , (var_1_31 + var_1_30))));
	}


	// From: Req19Batch96Amount250
	if ((var_1_64 || (! var_1_64)) || var_1_64) {
		var_1_56 = (max (var_1_44 , (-5 + var_1_31)));
	}


	// From: Req25Batch96Amount250
	if (var_1_64) {
		var_1_66 = var_1_71;
	} else {
		var_1_66 = var_1_13;
	}


	// From: Req8Batch96Amount250
	unsigned long int stepLocal_3 = var_1_69;
	if (var_1_10 >= (var_1_18 - var_1_17)) {
		if (var_1_64) {
			if (var_1_63 >= stepLocal_3) {
				var_1_24 = var_1_46;
			}
		}
	} else {
		var_1_24 = (32 + var_1_46);
	}


	// From: Req18Batch96Amount250
	signed long int stepLocal_14 = max (var_1_46 , var_1_24);
	if ((var_1_30 - (var_1_31 + var_1_27)) < stepLocal_14) {
		var_1_55 = (var_1_43 - var_1_31);
	} else {
		var_1_55 = ((max (256 , var_1_43)) - (abs (var_1_27 + var_1_24)));
	}


	// From: Req26Batch96Amount250
	if (var_1_30 != var_1_55) {
		var_1_68 = (abs (var_1_36));
	} else {
		var_1_68 = (var_1_37 + var_1_49);
	}


	// From: Req11Batch96Amount250
	signed long int stepLocal_7 = -1 | (var_1_25 & var_1_71);
	unsigned char stepLocal_6 = var_1_25 != (abs (var_1_70));
	unsigned char stepLocal_5 = var_1_64;
	if (var_1_64 && stepLocal_5) {
		if ((var_1_19 <= (var_1_10 / 256.36f)) || stepLocal_6) {
			var_1_33 = (64.5f + (16.2f + var_1_35));
		} else {
			if (stepLocal_7 < var_1_56) {
				var_1_33 = (var_1_35 + (max ((min (var_1_36 , var_1_37)) , var_1_38)));
			}
		}
	} else {
		var_1_33 = (abs (var_1_10));
	}


	// From: Req14Batch96Amount250
	signed char stepLocal_10 = var_1_44;
	if (var_1_55 < stepLocal_10) {
		var_1_45 = (min (var_1_61 , var_1_28));
	} else {
		var_1_45 = (-10 + var_1_24);
	}


	// From: Req17Batch96Amount250
	unsigned char stepLocal_13 = var_1_64;
	signed long int stepLocal_12 = var_1_24 ^ var_1_46;
	if ((var_1_53 - var_1_46) < stepLocal_12) {
		var_1_52 = var_1_10;
	} else {
		if (var_1_16 < var_1_10) {
			var_1_52 = (var_1_37 + var_1_38);
		} else {
			if ((var_1_10 < var_1_37) && stepLocal_13) {
				var_1_52 = (min (var_1_38 , var_1_51));
			}
		}
	}


	// From: Req12Batch96Amount250
	unsigned char stepLocal_8 = var_1_64 && var_1_64;
	if (var_1_33 >= ((var_1_36 / var_1_40) * var_1_52)) {
		var_1_39 = (var_1_46 + (var_1_31 + var_1_57));
	} else {
		if (stepLocal_8 || var_1_64) {
			var_1_39 = (((var_1_28 + last_1_var_1_39) + var_1_25) + ((max (var_1_27 , var_1_31)) + 128u));
		} else {
			var_1_39 = (var_1_57 + var_1_60);
		}
	}


	// From: Req13Batch96Amount250
	unsigned long int stepLocal_9 = var_1_39;
	if (var_1_27 < stepLocal_9) {
		var_1_42 = ((min (var_1_31 , var_1_30)) + (abs (var_1_27)));
	} else {
		if (var_1_36 > ((var_1_18 - var_1_17) + var_1_35)) {
			var_1_42 = ((100 - 32) - var_1_30);
		} else {
			var_1_42 = (min ((min ((max (var_1_31 , var_1_26)) , (var_1_27 + var_1_30))) , (var_1_43 - var_1_44)));
		}
	}


	// From: Req7Batch96Amount250
	if ((max ((128.25f + var_1_16) , var_1_68)) < (max (var_1_18 , var_1_10))) {
		var_1_20 = (max (var_1_46 , (256 + (min (var_1_46 , var_1_46)))));
	}


	// From: Req1Batch96Amount250
	var_1_1 = (min (var_1_71 , (var_1_20 - (min (var_1_60 , var_1_46)))));


	// From: Req10Batch96Amount250
	if ((var_1_25 * var_1_24) <= ((var_1_45 ^ var_1_25) + (var_1_71 ^ var_1_61))) {
		if (((-1 / -4) << (32u - 2u)) <= var_1_71) {
			if ((abs (var_1_55)) > var_1_24) {
				var_1_32 = var_1_17;
			}
		} else {
			var_1_32 = var_1_18;
		}
	}


	// From: Req2Batch96Amount250
	unsigned short int stepLocal_1 = var_1_20;
	signed long int stepLocal_0 = 0;
	if (stepLocal_0 == (min (-4 , var_1_60))) {
		if (var_1_64) {
			if (var_1_25 < stepLocal_1) {
				var_1_6 = (max (var_1_9 , var_1_10));
			} else {
				var_1_6 = var_1_10;
			}
		}
	}
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 190);
	assume_abort_if_not(var_1_26 <= 254);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 127);
	assume_abort_if_not(var_1_28 <= 254);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 32);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 31);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -230584.3009213691390e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691390e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -461168.6018427382800e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -461168.6018427382800e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -461168.6018427382800e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	assume_abort_if_not(var_1_40 != 0.0F);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -1);
	assume_abort_if_not(var_1_43 <= 126);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 126);
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 2305843.009213691390e+12F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427382800e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 2305843.009213691390e+12F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 4611686.018427382800e+12F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427382800e+12F && var_1_51 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 2147483647);
	assume_abort_if_not(var_1_53 <= 4294967295);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= 63);
	assume_abort_if_not(var_1_62 <= 126);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 1);
	assume_abort_if_not(var_1_65 <= 1);
}



void updateLastVariables() {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_71 = var_1_71;
}

int property() {
	return ((((((((((((((((((((((((((((var_1_1 == ((signed long int) (min (var_1_71 , (var_1_20 - (min (var_1_60 , var_1_46))))))) && ((0 == (min (-4 , var_1_60))) ? (var_1_64 ? ((var_1_25 < var_1_20) ? (var_1_6 == ((float) (max (var_1_9 , var_1_10)))) : (var_1_6 == ((float) var_1_10))) : 1) : 1)) && (var_1_11 == ((signed short int) (min (var_1_63 , 2))))) && ((var_1_70 <= var_1_60) ? (var_1_13 == ((signed short int) (abs (max (var_1_61 , var_1_61))))) : 1)) && ((! (var_1_10 > var_1_9)) ? (var_1_16 == ((float) (max ((max (var_1_9 , (var_1_17 - var_1_18))) , var_1_10)))) : 1)) && ((var_1_18 <= (- var_1_10)) ? (var_1_19 == ((float) (min (var_1_9 , var_1_10)))) : 1)) && (((max ((128.25f + var_1_16) , var_1_68)) < (max (var_1_18 , var_1_10))) ? (var_1_20 == ((unsigned short int) (max (var_1_46 , (256 + (min (var_1_46 , var_1_46))))))) : 1)) && ((var_1_10 >= (var_1_18 - var_1_17)) ? (var_1_64 ? ((var_1_63 >= var_1_69) ? (var_1_24 == ((unsigned short int) var_1_46)) : 1) : 1) : (var_1_24 == ((unsigned short int) (32 + var_1_46))))) && ((! (var_1_70 <= (- var_1_70))) ? ((var_1_11 > last_1_var_1_25) ? (var_1_25 == ((unsigned char) ((min ((var_1_26 - var_1_27) , var_1_28)) - var_1_29))) : (var_1_25 == ((unsigned char) ((var_1_26 - (var_1_30 + var_1_31)) - var_1_27)))) : (var_1_25 == ((unsigned char) (var_1_27 + var_1_31))))) && (((var_1_25 * var_1_24) <= ((var_1_45 ^ var_1_25) + (var_1_71 ^ var_1_61))) ? ((((-1 / -4) << (32u - 2u)) <= var_1_71) ? (((abs (var_1_55)) > var_1_24) ? (var_1_32 == ((float) var_1_17)) : 1) : (var_1_32 == ((float) var_1_18))) : 1)) && ((var_1_64 && var_1_64) ? (((var_1_19 <= (var_1_10 / 256.36f)) || (var_1_25 != (abs (var_1_70)))) ? (var_1_33 == ((float) (64.5f + (16.2f + var_1_35)))) : (((-1 | (var_1_25 & var_1_71)) < var_1_56) ? (var_1_33 == ((float) (var_1_35 + (max ((min (var_1_36 , var_1_37)) , var_1_38))))) : 1)) : (var_1_33 == ((float) (abs (var_1_10)))))) && ((var_1_33 >= ((var_1_36 / var_1_40) * var_1_52)) ? (var_1_39 == ((unsigned long int) (var_1_46 + (var_1_31 + var_1_57)))) : (((var_1_64 && var_1_64) || var_1_64) ? (var_1_39 == ((unsigned long int) (((var_1_28 + last_1_var_1_39) + var_1_25) + ((max (var_1_27 , var_1_31)) + 128u)))) : (var_1_39 == ((unsigned long int) (var_1_57 + var_1_60)))))) && ((var_1_27 < var_1_39) ? (var_1_42 == ((signed char) ((min (var_1_31 , var_1_30)) + (abs (var_1_27))))) : ((var_1_36 > ((var_1_18 - var_1_17) + var_1_35)) ? (var_1_42 == ((signed char) ((100 - 32) - var_1_30))) : (var_1_42 == ((signed char) (min ((min ((max (var_1_31 , var_1_26)) , (var_1_27 + var_1_30))) , (var_1_43 - var_1_44)))))))) && ((var_1_55 < var_1_44) ? (var_1_45 == ((signed short int) (min (var_1_61 , var_1_28)))) : (var_1_45 == ((signed short int) (-10 + var_1_24))))) && (var_1_64 ? (var_1_46 == ((unsigned char) (var_1_27 + var_1_29))) : (var_1_46 == ((unsigned char) (var_1_27 + (max (16 , (var_1_31 + var_1_30)))))))) && ((var_1_30 > (var_1_60 + var_1_60)) ? (var_1_47 == ((float) (((var_1_48 + var_1_49) - (abs (var_1_37))) - (var_1_50 - var_1_51)))) : (var_1_47 == ((float) (abs (var_1_50)))))) && (((var_1_53 - var_1_46) < (var_1_24 ^ var_1_46)) ? (var_1_52 == ((float) var_1_10)) : ((var_1_16 < var_1_10) ? (var_1_52 == ((float) (var_1_37 + var_1_38))) : (((var_1_10 < var_1_37) && var_1_64) ? (var_1_52 == ((float) (min (var_1_38 , var_1_51)))) : 1)))) && (((var_1_30 - (var_1_31 + var_1_27)) < (max (var_1_46 , var_1_24))) ? (var_1_55 == ((signed short int) (var_1_43 - var_1_31))) : (var_1_55 == ((signed short int) ((max (256 , var_1_43)) - (abs (var_1_27 + var_1_24))))))) && (((var_1_64 || (! var_1_64)) || var_1_64) ? (var_1_56 == ((signed char) (max (var_1_44 , (-5 + var_1_31))))) : 1)) && ((last_1_var_1_42 < last_1_var_1_46) ? (var_1_57 == ((signed long int) ((min (last_1_var_1_71 , last_1_var_1_25)) - last_1_var_1_46))) : ((((min (var_1_48 , var_1_18)) - var_1_49) < (last_1_var_1_68 * last_1_var_1_16)) ? (var_1_57 == ((signed long int) (last_1_var_1_56 + (last_1_var_1_46 - 128)))) : (var_1_57 == ((signed long int) (last_1_var_1_20 + last_1_var_1_61)))))) && (((var_1_29 - var_1_44) > -4) ? ((var_1_48 >= (var_1_37 + (3.1f + 4.8f))) ? (var_1_60 == ((unsigned short int) var_1_63)) : 1) : (var_1_60 == ((unsigned short int) var_1_30)))) && ((((var_1_44 - 16) > var_1_57) || var_1_64) ? (var_1_61 == ((signed char) (abs ((var_1_62 - var_1_27) - var_1_31)))) : (var_1_61 == ((signed char) (var_1_43 - (min (5 , var_1_31))))))) && ((var_1_9 < last_1_var_1_6) ? (var_1_63 == ((signed char) -2)) : 1)) && (var_1_8 ? (var_1_64 == ((unsigned char) var_1_65)) : (var_1_64 == ((unsigned char) var_1_65)))) && (var_1_64 ? (var_1_66 == ((signed long int) var_1_71)) : (var_1_66 == ((signed long int) var_1_13)))) && ((var_1_30 != var_1_55) ? (var_1_68 == ((double) (abs (var_1_36)))) : (var_1_68 == ((double) (var_1_37 + var_1_49))))) && (var_1_69 == ((unsigned long int) var_1_30))) && (var_1_70 == ((unsigned short int) var_1_28))) && (var_1_71 == ((unsigned short int) 1))
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
