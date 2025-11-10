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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch40Amount250.c", 13, "reach_error"); }
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
float var_1_1 = 4.5;
unsigned char var_1_3 = 50;
unsigned char var_1_4 = 32;
float var_1_10 = -0.5;
float var_1_11 = 500.84;
float var_1_12 = 5.7;
float var_1_13 = 32.25;
float var_1_14 = 9.5;
float var_1_15 = 1.2;
float var_1_16 = 0.0;
float var_1_17 = 31.3;
float var_1_18 = 0.0;
signed char var_1_20 = -10;
signed char var_1_21 = -5;
signed char var_1_22 = 2;
signed char var_1_23 = 32;
signed char var_1_24 = 0;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
signed long int var_1_28 = -100000;
signed char var_1_30 = -2;
signed char var_1_31 = 64;
signed char var_1_32 = 32;
signed char var_1_33 = 16;
signed short int var_1_34 = 5;
unsigned char var_1_35 = 64;
unsigned char var_1_36 = 128;
unsigned char var_1_37 = 64;
unsigned char var_1_38 = 0;
float var_1_39 = 64.4;
double var_1_40 = 31.5;
float var_1_41 = 8.8;
float var_1_42 = 0.0;
float var_1_43 = 8.8;
float var_1_44 = 1.4;
signed char var_1_45 = -100;
signed char var_1_47 = -4;
signed char var_1_48 = -2;
signed short int var_1_49 = -64;
unsigned char var_1_50 = 64;
unsigned char var_1_51 = 100;
signed short int var_1_52 = -8;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 200;
unsigned char var_1_55 = 200;
signed long int var_1_56 = -10;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 1;
unsigned char var_1_59 = 0;
unsigned long int var_1_60 = 128;
signed long int var_1_61 = -256;
unsigned char var_1_62 = 128;

// Calibration values

// Last'ed variables
float last_1_var_1_1 = 4.5;
float last_1_var_1_15 = 1.2;
double last_1_var_1_40 = 31.5;
float last_1_var_1_41 = 8.8;
unsigned char last_1_var_1_50 = 64;
signed short int last_1_var_1_52 = -8;
unsigned char last_1_var_1_57 = 0;
signed long int last_1_var_1_61 = -256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch40Amount250
	if ((last_1_var_1_50 / (var_1_3 + var_1_4)) == (min (8 , last_1_var_1_61))) {
		if ((last_1_var_1_61 > last_1_var_1_50) && last_1_var_1_57) {
			if ((last_1_var_1_15 + last_1_var_1_1) != last_1_var_1_40) {
				var_1_1 = 8.6f;
			}
		} else {
			if ((last_1_var_1_50 & last_1_var_1_61) != var_1_4) {
				if (last_1_var_1_57) {
					var_1_1 = (max ((var_1_10 + (max (127.3f , var_1_11))) , var_1_12));
				}
			} else {
				var_1_1 = ((max (31.5f , var_1_13)) - var_1_14);
			}
		}
	}


	// From: Req2Batch40Amount250
	if (-16 != (last_1_var_1_50 - var_1_3)) {
		var_1_15 = ((min ((var_1_16 - var_1_17) , (var_1_18 - 9.2f))) - var_1_13);
	} else {
		if (((var_1_18 - var_1_17) * var_1_12) != (63.25f + last_1_var_1_41)) {
			var_1_15 = (min ((max (var_1_18 , 64.625f)) , var_1_14));
		} else {
			if (last_1_var_1_57) {
				var_1_15 = var_1_11;
			} else {
				var_1_15 = var_1_16;
			}
		}
	}


	// From: Req10Batch40Amount250
	if (var_1_10 > var_1_15) {
		var_1_40 = 2.375;
	}


	// From: Req23Batch40Amount250
	if (var_1_12 < var_1_15) {
		var_1_62 = ((var_1_34 + (var_1_32 - var_1_33)) + (var_1_23 + var_1_22));
	} else {
		var_1_62 = var_1_37;
	}


	// From: Req11Batch40Amount250
	var_1_41 = ((var_1_18 - (var_1_42 - var_1_43)) - (var_1_17 + var_1_44));


	// From: Req13Batch40Amount250
	if (var_1_42 < (var_1_12 * 9.5f)) {
		var_1_47 = (var_1_48 + var_1_34);
	}


	// From: Req17Batch40Amount250
	var_1_53 = (((max (var_1_54 , var_1_55)) - var_1_23) - var_1_32);


	// From: Req18Batch40Amount250
	if (var_1_40 != var_1_43) {
		var_1_56 = (min ((var_1_34 - var_1_4) , var_1_3));
	}


	// From: Req8Batch40Amount250
	unsigned char stepLocal_2 = var_1_27;
	if ((var_1_10 < var_1_12) && stepLocal_2) {
		var_1_38 = (! ((var_1_56 == var_1_36) && var_1_27));
	} else {
		var_1_38 = (! var_1_26);
	}


	// From: Req22Batch40Amount250
	signed short int stepLocal_6 = var_1_34;
	if (stepLocal_6 > var_1_56) {
		var_1_61 = var_1_23;
	} else {
		var_1_61 = var_1_22;
	}


	// From: Req21Batch40Amount250
	if ((var_1_56 * var_1_61) == var_1_56) {
		if (var_1_42 >= var_1_17) {
			var_1_60 = (min (var_1_22 , var_1_53));
		}
	}


	// From: Req9Batch40Amount250
	if (var_1_33 > var_1_60) {
		if (var_1_41 > var_1_18) {
			var_1_39 = var_1_18;
		} else {
			var_1_39 = (var_1_13 - var_1_14);
		}
	} else {
		var_1_39 = (max (var_1_18 , var_1_12));
	}


	// From: Req12Batch40Amount250
	signed long int stepLocal_4 = abs (var_1_36);
	signed long int stepLocal_3 = (var_1_23 << var_1_37) * var_1_4;
	if ((2 / var_1_34) <= stepLocal_4) {
		if (((var_1_60 * var_1_61) / var_1_31) == stepLocal_3) {
			var_1_45 = (min ((var_1_34 + var_1_32) , var_1_22));
		} else {
			var_1_45 = (var_1_34 + var_1_23);
		}
	} else {
		var_1_45 = (var_1_22 + (max ((4 - var_1_23) , var_1_33)));
	}


	// From: Req5Batch40Amount250
	if (var_1_11 < var_1_40) {
		if (var_1_15 >= (- var_1_12)) {
			var_1_28 = (var_1_4 + (min ((max (var_1_24 , var_1_45)) , (max (var_1_3 , var_1_21)))));
		} else {
			var_1_28 = (256 + (min (var_1_3 , (var_1_21 + var_1_4))));
		}
	}


	// From: Req6Batch40Amount250
	if (var_1_1 == var_1_40) {
		var_1_30 = ((var_1_31 - (var_1_32 - var_1_33)) - var_1_22);
	} else {
		if (var_1_23 < (var_1_60 ^ var_1_61)) {
			var_1_30 = (max (var_1_31 , (min ((min (var_1_24 , var_1_33)) , var_1_23))));
		} else {
			if ((var_1_23 >> var_1_34) > ((1 - var_1_32) / 100)) {
				var_1_30 = ((min (var_1_24 , (var_1_23 - var_1_33))) + var_1_22);
			}
		}
	}


	// From: Req14Batch40Amount250
	signed long int stepLocal_5 = (var_1_62 | var_1_3) / var_1_32;
	if ((min (var_1_33 , var_1_60)) > stepLocal_5) {
		var_1_49 = (abs (max (var_1_4 , var_1_36)));
	} else {
		if (var_1_18 >= var_1_43) {
			var_1_49 = var_1_56;
		}
	}


	// From: Req4Batch40Amount250
	if (var_1_10 == (var_1_39 + var_1_1)) {
		var_1_25 = (var_1_38 || var_1_26);
	} else {
		var_1_25 = (var_1_38 && var_1_27);
	}


	// From: Req15Batch40Amount250
	if (var_1_11 >= (var_1_16 + var_1_12)) {
		if (((var_1_61 + var_1_45) | var_1_32) > (var_1_4 << var_1_33)) {
			if (var_1_15 > (var_1_18 / 15.6f)) {
				var_1_50 = (max (var_1_34 , (min (var_1_37 , var_1_23))));
			} else {
				var_1_50 = (var_1_22 + var_1_23);
			}
		} else {
			if (var_1_22 >= (var_1_62 & (var_1_31 / var_1_34))) {
				var_1_50 = (var_1_36 - (var_1_51 - var_1_23));
			} else {
				var_1_50 = var_1_51;
			}
		}
	}


	// From: Req3Batch40Amount250
	if (var_1_25) {
		var_1_20 = var_1_21;
	} else {
		var_1_20 = ((var_1_22 - var_1_23) + var_1_24);
	}


	// From: Req16Batch40Amount250
	if (var_1_1 >= (- (- var_1_14))) {
		var_1_52 = (last_1_var_1_52 + var_1_22);
	} else {
		if (((var_1_43 * var_1_14) / var_1_16) <= ((min (63.5f , var_1_13)) + var_1_11)) {
			var_1_52 = var_1_33;
		} else {
			var_1_52 = var_1_20;
		}
	}


	// From: Req19Batch40Amount250
	if ((1.25 - var_1_44) > var_1_1) {
		var_1_57 = (var_1_25 && var_1_27);
	} else {
		var_1_57 = var_1_27;
	}


	// From: Req7Batch40Amount250
	unsigned char stepLocal_1 = var_1_57;
	signed char stepLocal_0 = var_1_23;
	if (((max (var_1_31 , var_1_28)) >= (var_1_21 * var_1_4)) && stepLocal_1) {
		var_1_35 = var_1_22;
	} else {
		if (stepLocal_0 >= var_1_22) {
			if (var_1_39 > var_1_1) {
				var_1_35 = (max ((200 - var_1_31) , (max (var_1_34 , 10))));
			} else {
				var_1_35 = (var_1_36 - (var_1_37 - (min (var_1_23 , var_1_22))));
			}
		}
	}


	// From: Req20Batch40Amount250
	if ((var_1_12 != (9.75f * 8.875f)) && (var_1_24 < var_1_51)) {
		var_1_58 = (! ((var_1_57 && var_1_27) || var_1_59));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 128);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 4611686.018427383000e+12F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 4611686.018427383000e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -127);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -63);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 62);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 31);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 31);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 6);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 127);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 63);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 2305843.009213691400e+12F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 2305843.009213691400e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -63);
	assume_abort_if_not(var_1_48 <= 63);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 63);
	assume_abort_if_not(var_1_51 <= 127);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 190);
	assume_abort_if_not(var_1_54 <= 254);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 190);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_61 = var_1_61;
}

int property(void) {
	return ((((((((((((((((((((((((last_1_var_1_50 / (var_1_3 + var_1_4)) == (min (8 , last_1_var_1_61))) ? (((last_1_var_1_61 > last_1_var_1_50) && last_1_var_1_57) ? (((last_1_var_1_15 + last_1_var_1_1) != last_1_var_1_40) ? (var_1_1 == ((float) 8.6f)) : 1) : (((last_1_var_1_50 & last_1_var_1_61) != var_1_4) ? (last_1_var_1_57 ? (var_1_1 == ((float) (max ((var_1_10 + (max (127.3f , var_1_11))) , var_1_12)))) : 1) : (var_1_1 == ((float) ((max (31.5f , var_1_13)) - var_1_14))))) : 1) && ((-16 != (last_1_var_1_50 - var_1_3)) ? (var_1_15 == ((float) ((min ((var_1_16 - var_1_17) , (var_1_18 - 9.2f))) - var_1_13))) : ((((var_1_18 - var_1_17) * var_1_12) != (63.25f + last_1_var_1_41)) ? (var_1_15 == ((float) (min ((max (var_1_18 , 64.625f)) , var_1_14)))) : (last_1_var_1_57 ? (var_1_15 == ((float) var_1_11)) : (var_1_15 == ((float) var_1_16)))))) && (var_1_25 ? (var_1_20 == ((signed char) var_1_21)) : (var_1_20 == ((signed char) ((var_1_22 - var_1_23) + var_1_24))))) && ((var_1_10 == (var_1_39 + var_1_1)) ? (var_1_25 == ((unsigned char) (var_1_38 || var_1_26))) : (var_1_25 == ((unsigned char) (var_1_38 && var_1_27))))) && ((var_1_11 < var_1_40) ? ((var_1_15 >= (- var_1_12)) ? (var_1_28 == ((signed long int) (var_1_4 + (min ((max (var_1_24 , var_1_45)) , (max (var_1_3 , var_1_21))))))) : (var_1_28 == ((signed long int) (256 + (min (var_1_3 , (var_1_21 + var_1_4))))))) : 1)) && ((var_1_1 == var_1_40) ? (var_1_30 == ((signed char) ((var_1_31 - (var_1_32 - var_1_33)) - var_1_22))) : ((var_1_23 < (var_1_60 ^ var_1_61)) ? (var_1_30 == ((signed char) (max (var_1_31 , (min ((min (var_1_24 , var_1_33)) , var_1_23)))))) : (((var_1_23 >> var_1_34) > ((1 - var_1_32) / 100)) ? (var_1_30 == ((signed char) ((min (var_1_24 , (var_1_23 - var_1_33))) + var_1_22))) : 1)))) && ((((max (var_1_31 , var_1_28)) >= (var_1_21 * var_1_4)) && var_1_57) ? (var_1_35 == ((unsigned char) var_1_22)) : ((var_1_23 >= var_1_22) ? ((var_1_39 > var_1_1) ? (var_1_35 == ((unsigned char) (max ((200 - var_1_31) , (max (var_1_34 , 10)))))) : (var_1_35 == ((unsigned char) (var_1_36 - (var_1_37 - (min (var_1_23 , var_1_22))))))) : 1))) && (((var_1_10 < var_1_12) && var_1_27) ? (var_1_38 == ((unsigned char) (! ((var_1_56 == var_1_36) && var_1_27)))) : (var_1_38 == ((unsigned char) (! var_1_26))))) && ((var_1_33 > var_1_60) ? ((var_1_41 > var_1_18) ? (var_1_39 == ((float) var_1_18)) : (var_1_39 == ((float) (var_1_13 - var_1_14)))) : (var_1_39 == ((float) (max (var_1_18 , var_1_12)))))) && ((var_1_10 > var_1_15) ? (var_1_40 == ((double) 2.375)) : 1)) && (var_1_41 == ((float) ((var_1_18 - (var_1_42 - var_1_43)) - (var_1_17 + var_1_44))))) && (((2 / var_1_34) <= (abs (var_1_36))) ? ((((var_1_60 * var_1_61) / var_1_31) == ((var_1_23 << var_1_37) * var_1_4)) ? (var_1_45 == ((signed char) (min ((var_1_34 + var_1_32) , var_1_22)))) : (var_1_45 == ((signed char) (var_1_34 + var_1_23)))) : (var_1_45 == ((signed char) (var_1_22 + (max ((4 - var_1_23) , var_1_33))))))) && ((var_1_42 < (var_1_12 * 9.5f)) ? (var_1_47 == ((signed char) (var_1_48 + var_1_34))) : 1)) && (((min (var_1_33 , var_1_60)) > ((var_1_62 | var_1_3) / var_1_32)) ? (var_1_49 == ((signed short int) (abs (max (var_1_4 , var_1_36))))) : ((var_1_18 >= var_1_43) ? (var_1_49 == ((signed short int) var_1_56)) : 1))) && ((var_1_11 >= (var_1_16 + var_1_12)) ? ((((var_1_61 + var_1_45) | var_1_32) > (var_1_4 << var_1_33)) ? ((var_1_15 > (var_1_18 / 15.6f)) ? (var_1_50 == ((unsigned char) (max (var_1_34 , (min (var_1_37 , var_1_23)))))) : (var_1_50 == ((unsigned char) (var_1_22 + var_1_23)))) : ((var_1_22 >= (var_1_62 & (var_1_31 / var_1_34))) ? (var_1_50 == ((unsigned char) (var_1_36 - (var_1_51 - var_1_23)))) : (var_1_50 == ((unsigned char) var_1_51)))) : 1)) && ((var_1_1 >= (- (- var_1_14))) ? (var_1_52 == ((signed short int) (last_1_var_1_52 + var_1_22))) : ((((var_1_43 * var_1_14) / var_1_16) <= ((min (63.5f , var_1_13)) + var_1_11)) ? (var_1_52 == ((signed short int) var_1_33)) : (var_1_52 == ((signed short int) var_1_20))))) && (var_1_53 == ((unsigned char) (((max (var_1_54 , var_1_55)) - var_1_23) - var_1_32)))) && ((var_1_40 != var_1_43) ? (var_1_56 == ((signed long int) (min ((var_1_34 - var_1_4) , var_1_3)))) : 1)) && (((1.25 - var_1_44) > var_1_1) ? (var_1_57 == ((unsigned char) (var_1_25 && var_1_27))) : (var_1_57 == ((unsigned char) var_1_27)))) && (((var_1_12 != (9.75f * 8.875f)) && (var_1_24 < var_1_51)) ? (var_1_58 == ((unsigned char) (! ((var_1_57 && var_1_27) || var_1_59)))) : 1)) && (((var_1_56 * var_1_61) == var_1_56) ? ((var_1_42 >= var_1_17) ? (var_1_60 == ((unsigned long int) (min (var_1_22 , var_1_53)))) : 1) : 1)) && ((var_1_34 > var_1_56) ? (var_1_61 == ((signed long int) var_1_23)) : (var_1_61 == ((signed long int) var_1_22)))) && ((var_1_12 < var_1_15) ? (var_1_62 == ((unsigned char) ((var_1_34 + (var_1_32 - var_1_33)) + (var_1_23 + var_1_22)))) : (var_1_62 == ((unsigned char) var_1_37)))
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
