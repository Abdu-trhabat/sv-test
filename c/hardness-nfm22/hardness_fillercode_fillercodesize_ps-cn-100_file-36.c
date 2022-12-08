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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch36PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 8.75;
unsigned char var_1_2 = 1;
double var_1_3 = 9.6;
double var_1_4 = 7.625;
double var_1_5 = 1.5;
double var_1_6 = 63.17;
double var_1_7 = 15.5;
unsigned short int var_1_8 = 4;
unsigned short int var_1_9 = 45624;
unsigned short int var_1_10 = 39447;
unsigned short int var_1_11 = 10;
double var_1_12 = 255.5;
double var_1_13 = 0.0;
double var_1_14 = 127.5;
float var_1_15 = 8.2;
float var_1_16 = 2.8;
signed short int var_1_17 = 8;
double var_1_18 = 24.8;
signed short int var_1_19 = -256;
signed short int var_1_20 = 8;
signed short int var_1_21 = 16;
unsigned short int var_1_22 = 2;
unsigned short int var_1_24 = 16;
unsigned char var_1_25 = 0;
unsigned short int var_1_26 = 1;
unsigned long int var_1_27 = 10;
signed char var_1_28 = -50;
unsigned short int var_1_29 = 8;
unsigned short int var_1_30 = 32;
unsigned short int var_1_31 = 49701;
unsigned char var_1_32 = 32;
unsigned char var_1_33 = 25;
unsigned char var_1_34 = 0;
signed short int var_1_35 = 50;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
double var_1_40 = 15.75;
double var_1_41 = 25.9;
double var_1_42 = 255.5;
double var_1_43 = 32.75;
double var_1_44 = 63.6;
double var_1_45 = 1.8;
double var_1_46 = 2.875;
double var_1_47 = 127.375;
double var_1_48 = 127.25;
double var_1_49 = 0.375;
double var_1_50 = 7.25;
double var_1_51 = 31.4;
double var_1_52 = 1.5;
signed char var_1_53 = -10;
signed char var_1_54 = -32;
signed char var_1_55 = -1;
signed char var_1_56 = -10;
unsigned char var_1_57 = 4;
unsigned char var_1_58 = 0;
signed char var_1_59 = 32;
unsigned char var_1_60 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_22 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((128u < var_1_27) || (var_1_28 <= -1)) {
		var_1_26 = (var_1_29 + var_1_30);
	} else {
		if (var_1_27 <= 0u) {
			var_1_26 = (abs (var_1_31 - var_1_29));
		} else {
			var_1_26 = var_1_31;
		}
	}


	// From: CodeObject2
	if (var_1_27 > 2u) {
		var_1_32 = (abs (var_1_33 + (64 - var_1_34)));
	}


	// From: CodeObject3
	if (var_1_34 < ((var_1_30 | var_1_26) >> var_1_31)) {
		var_1_35 = (var_1_34 - var_1_32);
	}


	// From: CodeObject4
	if (var_1_29 <= var_1_30) {
		if (1 <= var_1_30) {
			var_1_36 = (! var_1_37);
		} else {
			var_1_36 = (var_1_37 || var_1_38);
		}
	} else {
		if (-1 <= var_1_35) {
			var_1_36 = var_1_39;
		}
	}


	// From: CodeObject5
	if (! var_1_38) {
		if ((var_1_41 + var_1_42) >= var_1_43) {
			if (var_1_28 <= (min (-100 , (var_1_29 & 16)))) {
				if (var_1_43 < (var_1_44 - var_1_45)) {
					var_1_40 = (var_1_46 + (abs (min (var_1_47 , var_1_48))));
				}
			}
		}
	} else {
		var_1_40 = ((min (var_1_49 , (var_1_50 + var_1_51))) - var_1_52);
	}


	// From: CodeObject6
	if ((var_1_26 % var_1_31) == var_1_30) {
		var_1_53 = (abs (var_1_34));
	} else {
		if (var_1_29 < var_1_34) {
			var_1_53 = (max (var_1_34 , var_1_54));
		} else {
			if (var_1_43 < var_1_46) {
				var_1_53 = (var_1_34 + (abs (var_1_55)));
			} else {
				var_1_53 = (max (var_1_34 , var_1_55));
			}
		}
	}


	// From: CodeObject7
	if ((- (- var_1_26)) >= (var_1_34 * var_1_55)) {
		var_1_56 = (min (var_1_34 , var_1_55));
	} else {
		var_1_56 = var_1_55;
	}


	// From: CodeObject8
	if (var_1_47 >= var_1_42) {
		var_1_57 = (abs (var_1_33));
	}


	// From: CodeObject9
	if (((var_1_30 % var_1_59) + var_1_32) < (max (var_1_31 , var_1_54))) {
		var_1_58 = (! (! var_1_37));
	} else {
		if ((max (var_1_29 , var_1_55)) >= (var_1_32 ^ 5)) {
			var_1_58 = (var_1_38 && (var_1_36 && var_1_39));
		} else {
			var_1_58 = var_1_38;
		}
	}


	// From: CodeObject10
	var_1_60 = var_1_33;


	// From: Req1Batch36PS_CN_100
	if (var_1_2) {
		var_1_1 = (min ((max ((var_1_3 - var_1_4) , (min (var_1_5 , var_1_6)))) , var_1_7));
	}


	// From: Req2Batch36PS_CN_100
	var_1_8 = ((min (var_1_9 , var_1_10)) - var_1_11);


	// From: Req3Batch36PS_CN_100
	if (var_1_2) {
		var_1_12 = (min ((var_1_3 - (var_1_13 - 128.68)) , var_1_7));
	}


	// From: Req4Batch36PS_CN_100
	var_1_14 = var_1_6;


	// From: Req5Batch36PS_CN_100
	if (var_1_13 >= var_1_14) {
		if (var_1_2) {
			if (var_1_8 == var_1_11) {
				var_1_15 = 10.975f;
			}
		}
	}


	// From: Req6Batch36PS_CN_100
	if (var_1_3 <= var_1_4) {
		var_1_16 = (min (var_1_6 , var_1_4));
	}


	// From: Req7Batch36PS_CN_100
	unsigned short int stepLocal_0 = var_1_11;
	if (var_1_7 >= (var_1_5 / (min (var_1_13 , var_1_18)))) {
		if ((var_1_10 + var_1_9) <= stepLocal_0) {
			if (var_1_2) {
				var_1_17 = var_1_19;
			}
		} else {
			var_1_17 = (var_1_20 - (abs (var_1_21)));
		}
	} else {
		var_1_17 = var_1_21;
	}


	// From: Req8Batch36PS_CN_100
	if ((var_1_11 + var_1_20) <= ((var_1_21 * last_1_var_1_22) * var_1_19)) {
		var_1_22 = (max ((var_1_9 - var_1_11) , var_1_10));
	}


	// From: Req9Batch36PS_CN_100
	if (var_1_9 < var_1_11) {
		if (var_1_2 || var_1_25) {
			var_1_24 = 128;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854765600e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 4611686.018427382800e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	assume_abort_if_not(var_1_18 != 0.0F);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -32767);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -32766);
	assume_abort_if_not(var_1_21 <= 32766);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -128);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 32767);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854776000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -461168.6018427382800e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -461168.6018427382800e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427382800e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -461168.6018427382800e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427382800e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854765600e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427382800e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427382800e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= -127);
	assume_abort_if_not(var_1_54 <= 126);
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -63);
	assume_abort_if_not(var_1_55 <= 63);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -128);
	assume_abort_if_not(var_1_59 <= 127);
	assume_abort_if_not(var_1_59 != 0);
}



void updateLastVariables() {
	last_1_var_1_22 = var_1_22;
}

int property() {
	return ((((((((var_1_2 ? (var_1_1 == ((double) (min ((max ((var_1_3 - var_1_4) , (min (var_1_5 , var_1_6)))) , var_1_7)))) : 1) && (var_1_8 == ((unsigned short int) ((min (var_1_9 , var_1_10)) - var_1_11)))) && (var_1_2 ? (var_1_12 == ((double) (min ((var_1_3 - (var_1_13 - 128.68)) , var_1_7)))) : 1)) && (var_1_14 == ((double) var_1_6))) && ((var_1_13 >= var_1_14) ? (var_1_2 ? ((var_1_8 == var_1_11) ? (var_1_15 == ((float) 10.975f)) : 1) : 1) : 1)) && ((var_1_3 <= var_1_4) ? (var_1_16 == ((float) (min (var_1_6 , var_1_4)))) : 1)) && ((var_1_7 >= (var_1_5 / (min (var_1_13 , var_1_18)))) ? (((var_1_10 + var_1_9) <= var_1_11) ? (var_1_2 ? (var_1_17 == ((signed short int) var_1_19)) : 1) : (var_1_17 == ((signed short int) (var_1_20 - (abs (var_1_21)))))) : (var_1_17 == ((signed short int) var_1_21)))) && (((var_1_11 + var_1_20) <= ((var_1_21 * last_1_var_1_22) * var_1_19)) ? (var_1_22 == ((unsigned short int) (max ((var_1_9 - var_1_11) , var_1_10)))) : 1)) && ((var_1_9 < var_1_11) ? ((var_1_2 || var_1_25) ? (var_1_24 == ((unsigned short int) 128)) : 1) : 1)
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
