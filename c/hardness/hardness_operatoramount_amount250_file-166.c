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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch166Amount250.c", 13, "reach_error"); }
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
double var_1_7 = 4.75;
double var_1_8 = 5.8;
signed char var_1_10 = 50;
signed char var_1_11 = -1;
signed char var_1_12 = -5;
signed char var_1_13 = -16;
signed char var_1_14 = -2;
signed char var_1_15 = 32;
signed char var_1_16 = 2;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
signed char var_1_22 = -2;
signed char var_1_23 = 100;
unsigned long int var_1_24 = 1;
unsigned long int var_1_26 = 4290010749;
signed short int var_1_27 = 1;
unsigned long int var_1_28 = 1000000000;
unsigned long int var_1_29 = 1000000000;
unsigned long int var_1_30 = 1971369821;
float var_1_31 = 4.25;
float var_1_32 = 9.1;
unsigned short int var_1_33 = 10;
unsigned short int var_1_34 = 17272;
double var_1_35 = 256.1;
float var_1_36 = 50.55;
double var_1_37 = 0.25;
double var_1_38 = 50.4;
unsigned short int var_1_39 = 16;
signed short int var_1_40 = 256;
unsigned char var_1_41 = 50;
unsigned char var_1_42 = 128;
unsigned char var_1_43 = 64;
unsigned char var_1_44 = 2;
unsigned short int var_1_45 = 1;
unsigned short int var_1_46 = 46426;
float var_1_47 = 10000000.875;
float var_1_48 = 50.4;
float var_1_49 = 5.75;
signed char var_1_50 = 1;
unsigned char var_1_51 = 0;
unsigned char var_1_53 = 0;
float var_1_54 = 255.8;
float var_1_55 = 15.2;
float var_1_56 = 3.3;
float var_1_57 = 0.0;
float var_1_58 = 0.0;
float var_1_59 = 0.30000000000000004;
float var_1_60 = 0.0;
unsigned short int var_1_61 = 32;
unsigned char var_1_62 = 0;
float var_1_63 = 255.625;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 200;
signed char var_1_66 = -100;
float var_1_67 = 1000000000.7;
unsigned long int var_1_68 = 0;
signed char var_1_69 = 0;
unsigned char var_1_70 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
unsigned char last_1_var_1_17 = 1;
unsigned short int last_1_var_1_33 = 10;
double last_1_var_1_35 = 256.1;
unsigned short int last_1_var_1_39 = 16;
unsigned short int last_1_var_1_45 = 1;
unsigned short int last_1_var_1_61 = 32;
unsigned long int last_1_var_1_68 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch166Amount250
	unsigned char stepLocal_8 = var_1_21;
	signed long int stepLocal_7 = var_1_15 - (var_1_40 + var_1_16);
	if (stepLocal_8 && last_1_var_1_1) {
		if (last_1_var_1_68 >= stepLocal_7) {
			var_1_39 = (32 + (min (16 , var_1_34)));
		} else {
			var_1_39 = (abs (var_1_40 + 256));
		}
	} else {
		var_1_39 = (abs (var_1_40));
	}


	// From: Req1Batch166Amount250
	if (last_1_var_1_39 <= (max (last_1_var_1_33 , last_1_var_1_45))) {
		var_1_1 = var_1_5;
	} else {
		if (var_1_5 && last_1_var_1_17) {
			if (last_1_var_1_39 >= last_1_var_1_33) {
				var_1_1 = (((var_1_7 - var_1_8) < last_1_var_1_35) && var_1_5);
			} else {
				var_1_1 = var_1_5;
			}
		}
	}


	// From: Req11Batch166Amount250
	signed char stepLocal_11 = var_1_16;
	unsigned long int stepLocal_10 = var_1_29;
	unsigned char stepLocal_9 = var_1_44;
	if (var_1_40 <= stepLocal_10) {
		if (stepLocal_9 < (128 - var_1_43)) {
			if (0u <= stepLocal_11) {
				var_1_45 = var_1_42;
			}
		} else {
			var_1_45 = (var_1_46 - ((var_1_16 + var_1_23) + (var_1_39 + var_1_44)));
		}
	}


	// From: Req5Batch166Amount250
	unsigned long int stepLocal_4 = last_1_var_1_68 % var_1_23;
	signed long int stepLocal_3 = (var_1_12 / var_1_23) / var_1_27;
	if (stepLocal_4 <= ((var_1_26 - 32u) + var_1_15)) {
		if (stepLocal_3 < last_1_var_1_68) {
			var_1_24 = (((var_1_28 + var_1_29) + (var_1_30 - var_1_16)) - var_1_15);
		}
	} else {
		var_1_24 = (var_1_29 + (max (var_1_16 , var_1_30)));
	}


	// From: Req12Batch166Amount250
	unsigned long int stepLocal_12 = min (var_1_24 , (var_1_15 - var_1_23));
	if (var_1_13 <= stepLocal_12) {
		var_1_47 = (var_1_38 - (var_1_48 + var_1_49));
	}


	// From: Req13Batch166Amount250
	var_1_50 = var_1_11;


	// From: Req15Batch166Amount250
	if (! (var_1_27 <= var_1_24)) {
		var_1_54 = var_1_38;
	} else {
		if (var_1_21) {
			var_1_54 = ((min (var_1_49 , (min (var_1_48 , var_1_55)))) + var_1_56);
		} else {
			var_1_54 = ((var_1_57 - (var_1_58 - var_1_59)) - (var_1_60 - 255.25f));
		}
	}


	// From: Req17Batch166Amount250
	var_1_62 = (var_1_42 - var_1_15);


	// From: Req20Batch166Amount250
	var_1_66 = (var_1_15 + var_1_13);


	// From: Req21Batch166Amount250
	if (var_1_19) {
		var_1_67 = (abs (var_1_49));
	}


	// From: Req23Batch166Amount250
	signed char stepLocal_18 = var_1_23;
	if (var_1_13 <= stepLocal_18) {
		var_1_69 = (-10 + (max (var_1_14 , (var_1_16 - var_1_15))));
	} else {
		var_1_69 = (min ((var_1_23 - var_1_16) , var_1_65));
	}


	// From: Req24Batch166Amount250
	var_1_70 = var_1_20;


	// From: Req7Batch166Amount250
	if (var_1_15 <= var_1_45) {
		if (! var_1_21) {
			var_1_33 = ((max (var_1_23 , (var_1_34 - var_1_16))) + var_1_15);
		} else {
			var_1_33 = (max (var_1_15 , (48685 - var_1_23)));
		}
	} else {
		var_1_33 = (max (var_1_16 , (var_1_23 + var_1_34)));
	}


	// From: Req16Batch166Amount250
	if ((-2 | var_1_15) < (var_1_43 | var_1_24)) {
		var_1_61 = (1 + last_1_var_1_61);
	} else {
		if (! var_1_1) {
			var_1_61 = (max ((var_1_46 - var_1_16) , last_1_var_1_61));
		}
	}


	// From: Req22Batch166Amount250
	if ((var_1_24 == var_1_65) || (var_1_39 == (var_1_46 + var_1_61))) {
		var_1_68 = ((var_1_30 - var_1_29) + var_1_43);
	}


	// From: Req14Batch166Amount250
	unsigned long int stepLocal_14 = var_1_68;
	unsigned char stepLocal_13 = var_1_48 <= var_1_7;
	if (stepLocal_13 || (var_1_38 >= 99.5)) {
		if (stepLocal_14 >= var_1_24) {
			var_1_51 = (! var_1_53);
		}
	} else {
		var_1_51 = var_1_5;
	}


	// From: Req19Batch166Amount250
	unsigned char stepLocal_17 = var_1_19;
	if ((var_1_29 <= var_1_28) || stepLocal_17) {
		if (var_1_51) {
			var_1_64 = ((var_1_65 - var_1_15) - var_1_43);
		} else {
			var_1_64 = (min (var_1_42 , var_1_44));
		}
	} else {
		if (var_1_1) {
			var_1_64 = var_1_23;
		} else {
			var_1_64 = (min (var_1_44 , (max (var_1_23 , var_1_42))));
		}
	}


	// From: Req2Batch166Amount250
	unsigned short int stepLocal_0 = var_1_61;
	if (stepLocal_0 <= (~ var_1_68)) {
		var_1_10 = (max (var_1_11 , var_1_12));
	} else {
		if (var_1_51) {
			var_1_10 = (min (var_1_12 , ((min (var_1_13 , var_1_14)) + (var_1_15 - var_1_16))));
		} else {
			var_1_10 = (abs (var_1_14));
		}
	}


	// From: Req10Batch166Amount250
	if (var_1_21 && (var_1_11 > var_1_24)) {
		var_1_41 = (var_1_23 + (var_1_15 + var_1_16));
	} else {
		if ((var_1_40 / (max (var_1_27 , -16))) < var_1_14) {
			if (((abs (var_1_68)) / (abs (var_1_29))) != var_1_26) {
				var_1_41 = (var_1_42 - (var_1_43 - var_1_15));
			} else {
				if (var_1_51) {
					var_1_41 = (min ((min ((max (var_1_16 , var_1_15)) , 2)) , var_1_44));
				} else {
					var_1_41 = 16;
				}
			}
		} else {
			var_1_41 = var_1_15;
		}
	}


	// From: Req18Batch166Amount250
	unsigned char stepLocal_16 = var_1_42;
	unsigned char stepLocal_15 = var_1_33 >= (max (var_1_46 , var_1_16));
	if (stepLocal_15 && (var_1_24 != (max (var_1_64 , var_1_33)))) {
		if (stepLocal_16 != var_1_33) {
			var_1_63 = var_1_58;
		} else {
			var_1_63 = var_1_59;
		}
	}


	// From: Req8Batch166Amount250
	unsigned long int stepLocal_6 = var_1_24 * (max (var_1_30 , var_1_16));
	if ((var_1_32 / var_1_36) >= (- (9.999999998E8f * last_1_var_1_35))) {
		if (! (last_1_var_1_35 != var_1_63)) {
			var_1_35 = (var_1_37 - var_1_38);
		} else {
			if (var_1_24 >= stepLocal_6) {
				var_1_35 = var_1_38;
			} else {
				var_1_35 = var_1_32;
			}
		}
	} else {
		var_1_35 = var_1_37;
	}


	// From: Req3Batch166Amount250
	signed long int stepLocal_1 = 5;
	if (((max (var_1_35 , var_1_7)) * var_1_8) <= ((var_1_35 / 32.8) / -0.4)) {
		var_1_17 = 1;
	} else {
		if (var_1_24 < stepLocal_1) {
			var_1_17 = (((9.4 > var_1_35) && var_1_5) || ((var_1_19 || var_1_20) || var_1_21));
		} else {
			var_1_17 = var_1_21;
		}
	}


	// From: Req4Batch166Amount250
	unsigned char stepLocal_2 = var_1_17;
	if (stepLocal_2 || var_1_20) {
		var_1_22 = ((var_1_23 - var_1_15) - var_1_16);
	} else {
		var_1_22 = var_1_15;
	}


	// From: Req6Batch166Amount250
	unsigned long int stepLocal_5 = var_1_68;
	if (var_1_51) {
		if (! (var_1_35 > var_1_7)) {
			if (var_1_35 <= var_1_7) {
				var_1_31 = var_1_32;
			}
		}
	} else {
		if (var_1_21) {
			if (stepLocal_5 < var_1_30) {
				var_1_31 = var_1_32;
			}
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 62);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 2147483647);
	assume_abort_if_not(var_1_26 <= 4294967295);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32768);
	assume_abort_if_not(var_1_27 <= 32767);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 536870911);
	assume_abort_if_not(var_1_28 <= 1073741824);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 536870912);
	assume_abort_if_not(var_1_29 <= 1073741823);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 1610612735);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 16383);
	assume_abort_if_not(var_1_34 <= 32767);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	assume_abort_if_not(var_1_36 != 0.0F);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 16384);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 127);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 63);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 32767);
	assume_abort_if_not(var_1_46 <= 65534);
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= -461168.6018427383000e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -461168.6018427383000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= 4611686.018427383000e+12F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854766000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 2305843.009213691400e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 2305843.009213691400e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= 4611686.018427383000e+12F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854766000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 190);
	assume_abort_if_not(var_1_65 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_68 = var_1_68;
}

int property(void) {
	return ((((((((((((((((((((((((last_1_var_1_39 <= (max (last_1_var_1_33 , last_1_var_1_45))) ? (var_1_1 == ((unsigned char) var_1_5)) : ((var_1_5 && last_1_var_1_17) ? ((last_1_var_1_39 >= last_1_var_1_33) ? (var_1_1 == ((unsigned char) (((var_1_7 - var_1_8) < last_1_var_1_35) && var_1_5))) : (var_1_1 == ((unsigned char) var_1_5))) : 1)) && ((var_1_61 <= (~ var_1_68)) ? (var_1_10 == ((signed char) (max (var_1_11 , var_1_12)))) : (var_1_51 ? (var_1_10 == ((signed char) (min (var_1_12 , ((min (var_1_13 , var_1_14)) + (var_1_15 - var_1_16)))))) : (var_1_10 == ((signed char) (abs (var_1_14))))))) && ((((max (var_1_35 , var_1_7)) * var_1_8) <= ((var_1_35 / 32.8) / -0.4)) ? (var_1_17 == ((unsigned char) 1)) : ((var_1_24 < 5) ? (var_1_17 == ((unsigned char) (((9.4 > var_1_35) && var_1_5) || ((var_1_19 || var_1_20) || var_1_21)))) : (var_1_17 == ((unsigned char) var_1_21))))) && ((var_1_17 || var_1_20) ? (var_1_22 == ((signed char) ((var_1_23 - var_1_15) - var_1_16))) : (var_1_22 == ((signed char) var_1_15)))) && (((last_1_var_1_68 % var_1_23) <= ((var_1_26 - 32u) + var_1_15)) ? ((((var_1_12 / var_1_23) / var_1_27) < last_1_var_1_68) ? (var_1_24 == ((unsigned long int) (((var_1_28 + var_1_29) + (var_1_30 - var_1_16)) - var_1_15))) : 1) : (var_1_24 == ((unsigned long int) (var_1_29 + (max (var_1_16 , var_1_30))))))) && (var_1_51 ? ((! (var_1_35 > var_1_7)) ? ((var_1_35 <= var_1_7) ? (var_1_31 == ((float) var_1_32)) : 1) : 1) : (var_1_21 ? ((var_1_68 < var_1_30) ? (var_1_31 == ((float) var_1_32)) : 1) : 1))) && ((var_1_15 <= var_1_45) ? ((! var_1_21) ? (var_1_33 == ((unsigned short int) ((max (var_1_23 , (var_1_34 - var_1_16))) + var_1_15))) : (var_1_33 == ((unsigned short int) (max (var_1_15 , (48685 - var_1_23)))))) : (var_1_33 == ((unsigned short int) (max (var_1_16 , (var_1_23 + var_1_34))))))) && (((var_1_32 / var_1_36) >= (- (9.999999998E8f * last_1_var_1_35))) ? ((! (last_1_var_1_35 != var_1_63)) ? (var_1_35 == ((double) (var_1_37 - var_1_38))) : ((var_1_24 >= (var_1_24 * (max (var_1_30 , var_1_16)))) ? (var_1_35 == ((double) var_1_38)) : (var_1_35 == ((double) var_1_32)))) : (var_1_35 == ((double) var_1_37)))) && ((var_1_21 && last_1_var_1_1) ? ((last_1_var_1_68 >= (var_1_15 - (var_1_40 + var_1_16))) ? (var_1_39 == ((unsigned short int) (32 + (min (16 , var_1_34))))) : (var_1_39 == ((unsigned short int) (abs (var_1_40 + 256))))) : (var_1_39 == ((unsigned short int) (abs (var_1_40)))))) && ((var_1_21 && (var_1_11 > var_1_24)) ? (var_1_41 == ((unsigned char) (var_1_23 + (var_1_15 + var_1_16)))) : (((var_1_40 / (max (var_1_27 , -16))) < var_1_14) ? ((((abs (var_1_68)) / (abs (var_1_29))) != var_1_26) ? (var_1_41 == ((unsigned char) (var_1_42 - (var_1_43 - var_1_15)))) : (var_1_51 ? (var_1_41 == ((unsigned char) (min ((min ((max (var_1_16 , var_1_15)) , 2)) , var_1_44)))) : (var_1_41 == ((unsigned char) 16)))) : (var_1_41 == ((unsigned char) var_1_15))))) && ((var_1_40 <= var_1_29) ? ((var_1_44 < (128 - var_1_43)) ? ((0u <= var_1_16) ? (var_1_45 == ((unsigned short int) var_1_42)) : 1) : (var_1_45 == ((unsigned short int) (var_1_46 - ((var_1_16 + var_1_23) + (var_1_39 + var_1_44)))))) : 1)) && ((var_1_13 <= (min (var_1_24 , (var_1_15 - var_1_23)))) ? (var_1_47 == ((float) (var_1_38 - (var_1_48 + var_1_49)))) : 1)) && (var_1_50 == ((signed char) var_1_11))) && (((var_1_48 <= var_1_7) || (var_1_38 >= 99.5)) ? ((var_1_68 >= var_1_24) ? (var_1_51 == ((unsigned char) (! var_1_53))) : 1) : (var_1_51 == ((unsigned char) var_1_5)))) && ((! (var_1_27 <= var_1_24)) ? (var_1_54 == ((float) var_1_38)) : (var_1_21 ? (var_1_54 == ((float) ((min (var_1_49 , (min (var_1_48 , var_1_55)))) + var_1_56))) : (var_1_54 == ((float) ((var_1_57 - (var_1_58 - var_1_59)) - (var_1_60 - 255.25f))))))) && (((-2 | var_1_15) < (var_1_43 | var_1_24)) ? (var_1_61 == ((unsigned short int) (1 + last_1_var_1_61))) : ((! var_1_1) ? (var_1_61 == ((unsigned short int) (max ((var_1_46 - var_1_16) , last_1_var_1_61)))) : 1))) && (var_1_62 == ((unsigned char) (var_1_42 - var_1_15)))) && (((var_1_33 >= (max (var_1_46 , var_1_16))) && (var_1_24 != (max (var_1_64 , var_1_33)))) ? ((var_1_42 != var_1_33) ? (var_1_63 == ((float) var_1_58)) : (var_1_63 == ((float) var_1_59))) : 1)) && (((var_1_29 <= var_1_28) || var_1_19) ? (var_1_51 ? (var_1_64 == ((unsigned char) ((var_1_65 - var_1_15) - var_1_43))) : (var_1_64 == ((unsigned char) (min (var_1_42 , var_1_44))))) : (var_1_1 ? (var_1_64 == ((unsigned char) var_1_23)) : (var_1_64 == ((unsigned char) (min (var_1_44 , (max (var_1_23 , var_1_42))))))))) && (var_1_66 == ((signed char) (var_1_15 + var_1_13)))) && (var_1_19 ? (var_1_67 == ((float) (abs (var_1_49)))) : 1)) && (((var_1_24 == var_1_65) || (var_1_39 == (var_1_46 + var_1_61))) ? (var_1_68 == ((unsigned long int) ((var_1_30 - var_1_29) + var_1_43))) : 1)) && ((var_1_13 <= var_1_23) ? (var_1_69 == ((signed char) (-10 + (max (var_1_14 , (var_1_16 - var_1_15)))))) : (var_1_69 == ((signed char) (min ((var_1_23 - var_1_16) , var_1_65)))))) && (var_1_70 == ((unsigned char) var_1_20))
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
