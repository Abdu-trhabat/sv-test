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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch26Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 1;
unsigned short int var_1_3 = 36007;
unsigned short int var_1_5 = 32;
unsigned short int var_1_6 = 128;
unsigned char var_1_8 = 2;
unsigned short int var_1_9 = 22889;
unsigned short int var_1_10 = 20766;
signed short int var_1_11 = -4;
unsigned char var_1_12 = 10;
unsigned char var_1_13 = 8;
unsigned char var_1_14 = 1;
signed long int var_1_15 = 16;
signed char var_1_16 = -10;
signed char var_1_17 = -10;
signed char var_1_18 = 1;
signed char var_1_19 = 0;
signed char var_1_20 = -5;
unsigned long int var_1_21 = 8;
unsigned long int var_1_24 = 1794669023;
unsigned long int var_1_25 = 2054167641;
signed short int var_1_26 = -64;
float var_1_27 = 10.5;
float var_1_28 = -0.5;
float var_1_29 = 100.6;
float var_1_30 = 500.25;
unsigned char var_1_31 = 0;
float var_1_32 = 255.6;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 1;
float var_1_38 = 32.25;
float var_1_39 = 0.8;
float var_1_40 = 7.14;
float var_1_41 = 128.426;
float var_1_42 = 64.35;
signed short int var_1_43 = -50;
unsigned char var_1_45 = 1;
signed long int var_1_47 = 256;
signed long int var_1_49 = 1000000000;
unsigned short int var_1_50 = 10;
unsigned char var_1_51 = 0;
unsigned char var_1_53 = 1;
signed char var_1_54 = -8;
signed char var_1_55 = 1;
unsigned long int var_1_56 = 16;
double var_1_57 = 31.25;
unsigned short int var_1_58 = 2;
float var_1_59 = 31.75;
float var_1_60 = 256.42;
float var_1_61 = 16.75;
float var_1_62 = 1.5;
float var_1_63 = 24.25;
float var_1_64 = 9.375;
double var_1_65 = 5.5;
signed char var_1_66 = -4;
unsigned char var_1_67 = 16;
unsigned char var_1_68 = 200;
unsigned char var_1_69 = 16;
unsigned long int var_1_70 = 4;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 1;
unsigned char last_1_var_1_12 = 10;
signed long int last_1_var_1_15 = 16;
float last_1_var_1_38 = 32.25;
signed short int last_1_var_1_43 = -50;
unsigned char last_1_var_1_51 = 0;
signed char last_1_var_1_54 = -8;
unsigned short int last_1_var_1_58 = 2;
float last_1_var_1_59 = 31.75;
double last_1_var_1_65 = 5.5;
unsigned char last_1_var_1_67 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req16Batch26Amount250
	unsigned long int stepLocal_14 = 32u;
	signed long int stepLocal_13 = last_1_var_1_67;
	signed long int stepLocal_12 = var_1_9 & (-200 + last_1_var_1_54);
	if (last_1_var_1_43 > stepLocal_12) {
		if (stepLocal_14 < var_1_8) {
			var_1_47 = (var_1_5 - var_1_3);
		} else {
			if (last_1_var_1_59 < var_1_29) {
				if (stepLocal_13 > last_1_var_1_58) {
					var_1_47 = ((max (var_1_14 , (last_1_var_1_12 + last_1_var_1_67))) + ((var_1_49 - var_1_9) - (min (128 , last_1_var_1_15))));
				}
			} else {
				var_1_47 = (max ((max (var_1_9 , var_1_13)) , (last_1_var_1_12 + (min (var_1_6 , last_1_var_1_67)))));
			}
		}
	}


	// From: Req3Batch26Amount250
	signed long int stepLocal_0 = var_1_47;
	if (stepLocal_0 >= var_1_10) {
		var_1_12 = (var_1_13 + var_1_14);
	}


	// From: Req12Batch26Amount250
	unsigned long int stepLocal_9 = (- 8u) * var_1_8;
	if (last_1_var_1_1 <= stepLocal_9) {
		var_1_36 = ((var_1_29 > (max (last_1_var_1_59 , last_1_var_1_59))) || var_1_37);
	} else {
		var_1_36 = (! var_1_37);
	}


	// From: Req21Batch26Amount250
	if (var_1_36) {
		var_1_58 = (10 + var_1_9);
	}


	// From: Req11Batch26Amount250
	unsigned long int stepLocal_8 = abs (var_1_25);
	if (stepLocal_8 > var_1_3) {
		var_1_34 = (var_1_33 && (var_1_36 && var_1_35));
	}


	// From: Req10Batch26Amount250
	signed long int stepLocal_7 = - (- var_1_6);
	if (stepLocal_7 < last_1_var_1_58) {
		if ((var_1_29 / var_1_32) < (max (var_1_28 , (max (last_1_var_1_65 , last_1_var_1_38))))) {
			var_1_31 = (last_1_var_1_51 || ((var_1_32 <= var_1_29) || (! var_1_33)));
		}
	}


	// From: Req22Batch26Amount250
	unsigned char stepLocal_20 = var_1_33;
	if (var_1_41 > var_1_29) {
		var_1_59 = (max ((var_1_39 - var_1_40) , (max (var_1_28 , 10.2f))));
	} else {
		if (stepLocal_20 || var_1_31) {
			var_1_59 = (((var_1_60 + var_1_61) + (var_1_62 + var_1_63)) + var_1_42);
		} else {
			var_1_59 = 1.45f;
		}
	}


	// From: Req26Batch26Amount250
	if (var_1_31) {
		var_1_67 = ((var_1_68 - var_1_69) - var_1_14);
	} else {
		var_1_67 = (var_1_68 - var_1_14);
	}


	// From: Req7Batch26Amount250
	var_1_26 = var_1_14;


	// From: Req8Batch26Amount250
	var_1_27 = (var_1_28 + var_1_29);


	// From: Req17Batch26Amount250
	signed long int stepLocal_15 = var_1_10 * 4;
	if (stepLocal_15 <= ((min (var_1_3 , var_1_5)) / var_1_49)) {
		var_1_50 = (abs (var_1_3));
	} else {
		var_1_50 = (var_1_18 + var_1_13);
	}


	// From: Req24Batch26Amount250
	var_1_65 = var_1_60;


	// From: Req25Batch26Amount250
	var_1_66 = var_1_19;


	// From: Req23Batch26Amount250
	if (var_1_34) {
		var_1_64 = var_1_42;
	} else {
		var_1_64 = var_1_61;
	}


	// From: Req15Batch26Amount250
	if (var_1_58 < (var_1_19 % var_1_8)) {
		if (var_1_8 >= var_1_50) {
			var_1_45 = ((-128 > var_1_26) && var_1_35);
		}
	}


	// From: Req13Batch26Amount250
	if ((50 + (min (1 , var_1_47))) != (var_1_3 ^ var_1_24)) {
		if ((! (last_1_var_1_38 != var_1_64)) || var_1_31) {
			var_1_38 = ((var_1_39 - var_1_40) + (var_1_41 + var_1_42));
		}
	} else {
		var_1_38 = (var_1_40 + var_1_41);
	}


	// From: Req6Batch26Amount250
	unsigned short int stepLocal_5 = var_1_50;
	unsigned char stepLocal_4 = (- var_1_27) != var_1_38;
	if (var_1_3 <= stepLocal_5) {
		if ((var_1_47 >= (var_1_18 - var_1_14)) && stepLocal_4) {
			var_1_21 = ((abs (var_1_5 + var_1_18)) + var_1_9);
		} else {
			var_1_21 = (max (((var_1_24 + var_1_25) - var_1_10) , var_1_50));
		}
	}


	// From: Req20Batch26Amount250
	if (((var_1_59 / var_1_32) + (max (var_1_65 , 16.5))) < (var_1_38 / (abs (var_1_57)))) {
		var_1_56 = ((var_1_6 + var_1_9) + 32u);
	}


	// From: Req4Batch26Amount250
	if (var_1_10 != var_1_5) {
		if (var_1_45) {
			var_1_15 = var_1_8;
		}
	}


	// From: Req9Batch26Amount250
	unsigned long int stepLocal_6 = var_1_21;
	if (var_1_10 >= stepLocal_6) {
		var_1_30 = var_1_29;
	}


	// From: Req14Batch26Amount250
	unsigned long int stepLocal_11 = var_1_21 & var_1_17;
	unsigned short int stepLocal_10 = var_1_10;
	if (stepLocal_10 < (max (last_1_var_1_43 , var_1_18))) {
		var_1_43 = (var_1_20 + var_1_67);
	} else {
		if ((~ last_1_var_1_43) > stepLocal_11) {
			var_1_43 = var_1_13;
		} else {
			var_1_43 = (16 - var_1_14);
		}
	}


	// From: Req2Batch26Amount250
	if (var_1_31) {
		var_1_11 = (var_1_56 - var_1_8);
	}


	// From: Req19Batch26Amount250
	signed long int stepLocal_19 = (var_1_50 & -32) & var_1_10;
	unsigned char stepLocal_18 = var_1_37;
	if (stepLocal_18 && ((var_1_14 + var_1_11) < var_1_25)) {
		var_1_54 = (var_1_55 - var_1_18);
	} else {
		if (var_1_43 < stepLocal_19) {
			var_1_54 = (var_1_20 + var_1_19);
		} else {
			var_1_54 = var_1_20;
		}
	}


	// From: Req1Batch26Amount250
	if (! var_1_36) {
		if (var_1_36) {
			var_1_1 = (var_1_3 - var_1_12);
		} else {
			if (var_1_3 < (var_1_12 / (var_1_5 + var_1_6))) {
				if ((max (var_1_6 , var_1_12)) >= var_1_5) {
					var_1_1 = (max ((abs (var_1_12)) , var_1_3));
				} else {
					var_1_1 = var_1_3;
				}
			}
		}
	} else {
		if (var_1_43 > (var_1_6 / var_1_8)) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = ((min ((var_1_9 + var_1_10) , var_1_3)) - var_1_8);
		}
	}


	// From: Req18Batch26Amount250
	unsigned char stepLocal_17 = var_1_12;
	signed long int stepLocal_16 = -5;
	if (var_1_64 >= var_1_59) {
		var_1_51 = (var_1_37 && var_1_53);
	} else {
		if (var_1_13 >= stepLocal_17) {
			if ((max ((var_1_11 * var_1_17) , 50)) <= stepLocal_16) {
				var_1_51 = (((var_1_27 * var_1_42) > var_1_59) && var_1_33);
			} else {
				var_1_51 = (var_1_35 || (! var_1_37));
			}
		} else {
			if (! (var_1_13 < (abs (32)))) {
				var_1_51 = (! var_1_35);
			} else {
				var_1_51 = (var_1_37 || var_1_53);
			}
		}
	}


	// From: Req5Batch26Amount250
	unsigned char stepLocal_3 = var_1_8;
	signed long int stepLocal_2 = abs (10);
	unsigned char stepLocal_1 = var_1_8;
	if ((var_1_13 + (max (var_1_54 , -5))) != stepLocal_3) {
		if (stepLocal_1 > var_1_10) {
			if (stepLocal_2 > var_1_50) {
				var_1_16 = ((abs (var_1_17)) - var_1_18);
			}
		} else {
			var_1_16 = (var_1_19 + var_1_20);
		}
	} else {
		var_1_16 = var_1_18;
	}


	// From: Req27Batch26Amount250
	unsigned char stepLocal_21 = var_1_14;
	if ((var_1_11 & (-32 % var_1_8)) <= stepLocal_21) {
		var_1_70 = 1u;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 32767);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 32768);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 255);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 16383);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 16384);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -126);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 1073741823);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 1073741824);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427382800e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -461168.6018427382800e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	assume_abort_if_not(var_1_32 != 0.0F);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -230584.3009213691390e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691390e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -230584.3009213691390e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691390e+12F && var_1_42 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= 536870911);
	assume_abort_if_not(var_1_49 <= 1073741823);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -1);
	assume_abort_if_not(var_1_55 <= 126);
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= -922337.2036854776000e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854776000e+12F && var_1_57 >= 1.0e-20F ));
	assume_abort_if_not(var_1_57 != 0.0F);
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= -115292.1504606845700e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 1152921.504606845700e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= -115292.1504606845700e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 1152921.504606845700e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= -115292.1504606845700e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 1152921.504606845700e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= -115292.1504606845700e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 1152921.504606845700e+12F && var_1_63 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 190);
	assume_abort_if_not(var_1_68 <= 254);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 63);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_67 = var_1_67;
}

int property() {
	return (((((((((((((((((((((((((((! var_1_36) ? (var_1_36 ? (var_1_1 == ((unsigned short int) (var_1_3 - var_1_12))) : ((var_1_3 < (var_1_12 / (var_1_5 + var_1_6))) ? (((max (var_1_6 , var_1_12)) >= var_1_5) ? (var_1_1 == ((unsigned short int) (max ((abs (var_1_12)) , var_1_3)))) : (var_1_1 == ((unsigned short int) var_1_3))) : 1)) : ((var_1_43 > (var_1_6 / var_1_8)) ? (var_1_1 == ((unsigned short int) var_1_6)) : (var_1_1 == ((unsigned short int) ((min ((var_1_9 + var_1_10) , var_1_3)) - var_1_8))))) && (var_1_31 ? (var_1_11 == ((signed short int) (var_1_56 - var_1_8))) : 1)) && ((var_1_47 >= var_1_10) ? (var_1_12 == ((unsigned char) (var_1_13 + var_1_14))) : 1)) && ((var_1_10 != var_1_5) ? (var_1_45 ? (var_1_15 == ((signed long int) var_1_8)) : 1) : 1)) && (((var_1_13 + (max (var_1_54 , -5))) != var_1_8) ? ((var_1_8 > var_1_10) ? (((abs (10)) > var_1_50) ? (var_1_16 == ((signed char) ((abs (var_1_17)) - var_1_18))) : 1) : (var_1_16 == ((signed char) (var_1_19 + var_1_20)))) : (var_1_16 == ((signed char) var_1_18)))) && ((var_1_3 <= var_1_50) ? (((var_1_47 >= (var_1_18 - var_1_14)) && ((- var_1_27) != var_1_38)) ? (var_1_21 == ((unsigned long int) ((abs (var_1_5 + var_1_18)) + var_1_9))) : (var_1_21 == ((unsigned long int) (max (((var_1_24 + var_1_25) - var_1_10) , var_1_50))))) : 1)) && (var_1_26 == ((signed short int) var_1_14))) && (var_1_27 == ((float) (var_1_28 + var_1_29)))) && ((var_1_10 >= var_1_21) ? (var_1_30 == ((float) var_1_29)) : 1)) && (((- (- var_1_6)) < last_1_var_1_58) ? (((var_1_29 / var_1_32) < (max (var_1_28 , (max (last_1_var_1_65 , last_1_var_1_38))))) ? (var_1_31 == ((unsigned char) (last_1_var_1_51 || ((var_1_32 <= var_1_29) || (! var_1_33))))) : 1) : 1)) && (((abs (var_1_25)) > var_1_3) ? (var_1_34 == ((unsigned char) (var_1_33 && (var_1_36 && var_1_35)))) : 1)) && ((last_1_var_1_1 <= ((- 8u) * var_1_8)) ? (var_1_36 == ((unsigned char) ((var_1_29 > (max (last_1_var_1_59 , last_1_var_1_59))) || var_1_37))) : (var_1_36 == ((unsigned char) (! var_1_37))))) && (((50 + (min (1 , var_1_47))) != (var_1_3 ^ var_1_24)) ? (((! (last_1_var_1_38 != var_1_64)) || var_1_31) ? (var_1_38 == ((float) ((var_1_39 - var_1_40) + (var_1_41 + var_1_42)))) : 1) : (var_1_38 == ((float) (var_1_40 + var_1_41))))) && ((var_1_10 < (max (last_1_var_1_43 , var_1_18))) ? (var_1_43 == ((signed short int) (var_1_20 + var_1_67))) : (((~ last_1_var_1_43) > (var_1_21 & var_1_17)) ? (var_1_43 == ((signed short int) var_1_13)) : (var_1_43 == ((signed short int) (16 - var_1_14)))))) && ((var_1_58 < (var_1_19 % var_1_8)) ? ((var_1_8 >= var_1_50) ? (var_1_45 == ((unsigned char) ((-128 > var_1_26) && var_1_35))) : 1) : 1)) && ((last_1_var_1_43 > (var_1_9 & (-200 + last_1_var_1_54))) ? ((32u < var_1_8) ? (var_1_47 == ((signed long int) (var_1_5 - var_1_3))) : ((last_1_var_1_59 < var_1_29) ? ((last_1_var_1_67 > last_1_var_1_58) ? (var_1_47 == ((signed long int) ((max (var_1_14 , (last_1_var_1_12 + last_1_var_1_67))) + ((var_1_49 - var_1_9) - (min (128 , last_1_var_1_15)))))) : 1) : (var_1_47 == ((signed long int) (max ((max (var_1_9 , var_1_13)) , (last_1_var_1_12 + (min (var_1_6 , last_1_var_1_67))))))))) : 1)) && (((var_1_10 * 4) <= ((min (var_1_3 , var_1_5)) / var_1_49)) ? (var_1_50 == ((unsigned short int) (abs (var_1_3)))) : (var_1_50 == ((unsigned short int) (var_1_18 + var_1_13))))) && ((var_1_64 >= var_1_59) ? (var_1_51 == ((unsigned char) (var_1_37 && var_1_53))) : ((var_1_13 >= var_1_12) ? (((max ((var_1_11 * var_1_17) , 50)) <= -5) ? (var_1_51 == ((unsigned char) (((var_1_27 * var_1_42) > var_1_59) && var_1_33))) : (var_1_51 == ((unsigned char) (var_1_35 || (! var_1_37))))) : ((! (var_1_13 < (abs (32)))) ? (var_1_51 == ((unsigned char) (! var_1_35))) : (var_1_51 == ((unsigned char) (var_1_37 || var_1_53))))))) && ((var_1_37 && ((var_1_14 + var_1_11) < var_1_25)) ? (var_1_54 == ((signed char) (var_1_55 - var_1_18))) : ((var_1_43 < ((var_1_50 & -32) & var_1_10)) ? (var_1_54 == ((signed char) (var_1_20 + var_1_19))) : (var_1_54 == ((signed char) var_1_20))))) && ((((var_1_59 / var_1_32) + (max (var_1_65 , 16.5))) < (var_1_38 / (abs (var_1_57)))) ? (var_1_56 == ((unsigned long int) ((var_1_6 + var_1_9) + 32u))) : 1)) && (var_1_36 ? (var_1_58 == ((unsigned short int) (10 + var_1_9))) : 1)) && ((var_1_41 > var_1_29) ? (var_1_59 == ((float) (max ((var_1_39 - var_1_40) , (max (var_1_28 , 10.2f)))))) : ((var_1_33 || var_1_31) ? (var_1_59 == ((float) (((var_1_60 + var_1_61) + (var_1_62 + var_1_63)) + var_1_42))) : (var_1_59 == ((float) 1.45f))))) && (var_1_34 ? (var_1_64 == ((float) var_1_42)) : (var_1_64 == ((float) var_1_61)))) && (var_1_65 == ((double) var_1_60))) && (var_1_66 == ((signed char) var_1_19))) && (var_1_31 ? (var_1_67 == ((unsigned char) ((var_1_68 - var_1_69) - var_1_14))) : (var_1_67 == ((unsigned char) (var_1_68 - var_1_14))))) && (((var_1_11 & (-32 % var_1_8)) <= var_1_14) ? (var_1_70 == ((unsigned long int) 1u)) : 1)
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
