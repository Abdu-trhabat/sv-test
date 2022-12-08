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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch44PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 16;
unsigned char var_1_5 = 1;
signed short int var_1_8 = -5;
double var_1_10 = 256.475;
double var_1_11 = 4.8;
unsigned long int var_1_14 = 0;
signed char var_1_15 = -5;
unsigned long int var_1_16 = 500;
unsigned long int var_1_17 = 4182428128;
unsigned long int var_1_18 = 16;
signed char var_1_19 = -5;
signed char var_1_20 = 0;
signed char var_1_21 = 64;
float var_1_22 = 49.375;
signed short int var_1_23 = 256;
signed short int var_1_24 = 8;
float var_1_25 = 255.5;
float var_1_26 = 500.14;
signed long int var_1_27 = -8;
signed short int var_1_30 = -2;
double var_1_31 = 0.3;
signed char var_1_32 = 16;
unsigned char var_1_33 = 25;
signed char var_1_34 = -2;
signed char var_1_35 = 10;
signed long int var_1_36 = -256;
float var_1_37 = -0.25;
float var_1_38 = 15.75;
unsigned char var_1_39 = 10;
signed long int var_1_40 = -64;
signed long int var_1_41 = 16;
unsigned char var_1_42 = 1;
float var_1_43 = 9.7;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
double var_1_47 = 256.575;
float var_1_48 = 10.5;
double var_1_49 = 64.625;
signed long int var_1_50 = 25;
double var_1_51 = 1.1;
double var_1_52 = 31.75;
double var_1_53 = 1.8;
float var_1_54 = -0.5;
float var_1_55 = 99.5;
float var_1_56 = 32.6;
float var_1_57 = 5.2;
double var_1_58 = 16.77;
float var_1_59 = 3.625;
double var_1_60 = 16.6;
float var_1_61 = 9999999999.5;
float var_1_62 = 50.2;
unsigned long int var_1_63 = 256;
signed char var_1_64 = -64;
signed char var_1_65 = 50;
signed char var_1_66 = 5;
signed char var_1_67 = -8;
signed char var_1_68 = 32;
signed short int var_1_69 = 4;
signed char var_1_70 = 64;
signed char var_1_71 = 4;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 1;
unsigned char var_1_74 = 1;

// Calibration values

// Last'ed variables
float last_1_var_1_22 = 49.375;
signed short int last_1_var_1_30 = -2;
signed char last_1_var_1_32 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((min ((abs (var_1_34)) , var_1_35)) < var_1_36) {
		if ((7.5f * (2.5f * var_1_37)) > var_1_38) {
			var_1_33 = (abs (var_1_39));
		} else {
			var_1_33 = (abs (var_1_39));
		}
	} else {
		var_1_33 = var_1_39;
	}


	// From: CodeObject2
	if ((abs (var_1_39)) <= var_1_34) {
		var_1_40 = (abs (1));
	} else {
		var_1_40 = (var_1_39 + var_1_41);
	}


	// From: CodeObject3
	if (var_1_37 >= (min (var_1_38 , var_1_43))) {
		if (var_1_34 < var_1_35) {
			var_1_42 = (var_1_44 || (var_1_45 || var_1_46));
		}
	} else {
		if (var_1_35 >= -1) {
			var_1_42 = (var_1_46 && (var_1_44 && var_1_45));
		}
	}


	// From: CodeObject4
	if ((5.4f > (var_1_43 / var_1_48)) && var_1_42) {
		var_1_47 = 31.3;
	}


	// From: CodeObject5
	if ((var_1_35 * (~ var_1_36)) >= ((var_1_39 / var_1_50) * var_1_40)) {
		var_1_49 = (min ((max (var_1_51 , (max (0.5 , var_1_52)))) , var_1_53));
	} else {
		var_1_49 = var_1_52;
	}


	// From: CodeObject6
	if (var_1_43 < var_1_49) {
		if (var_1_51 >= var_1_47) {
			var_1_54 = (var_1_55 - (abs (abs (var_1_51))));
		}
	} else {
		var_1_54 = (max ((var_1_56 + var_1_57) , var_1_51));
	}


	// From: CodeObject7
	if (var_1_44) {
		var_1_58 = var_1_53;
	}


	// From: CodeObject8
	if (((abs (var_1_40)) > var_1_36) || (200.5 != var_1_60)) {
		var_1_59 = ((var_1_61 - var_1_62) + (abs (var_1_56)));
	}


	// From: CodeObject9
	if (var_1_62 > var_1_51) {
		var_1_63 = (abs (1u));
	} else {
		var_1_63 = (abs (min (var_1_39 , var_1_33)));
	}


	// From: CodeObject10
	if (var_1_40 > var_1_39) {
		var_1_64 = (max (var_1_65 , (max (var_1_66 , var_1_67))));
	}


	// From: CodeObject11
	if (((var_1_33 - var_1_39) / (min (var_1_50 , var_1_69))) <= (var_1_64 & var_1_40)) {
		if (var_1_42 && var_1_46) {
			var_1_68 = (var_1_70 - (64 - var_1_71));
		} else {
			if (var_1_42 || var_1_44) {
				var_1_68 = var_1_67;
			}
		}
	} else {
		var_1_68 = var_1_67;
	}


	// From: CodeObject12
	var_1_72 = var_1_73;


	// From: CodeObject13
	var_1_74 = 0;


	// From: Req2Batch44PS_CN_100
	if ((abs (last_1_var_1_22)) < (min ((var_1_10 - var_1_11) , (abs (last_1_var_1_22))))) {
		if (last_1_var_1_22 >= last_1_var_1_22) {
			var_1_8 = last_1_var_1_32;
		} else {
			var_1_8 = last_1_var_1_30;
		}
	} else {
		var_1_8 = 0;
	}


	// From: Req4Batch44PS_CN_100
	unsigned long int stepLocal_1 = var_1_18;
	if (256 > stepLocal_1) {
		var_1_19 = (max ((abs (var_1_20)) , var_1_21));
	}


	// From: Req8Batch44PS_CN_100
	var_1_31 = var_1_26;


	// From: Req9Batch44PS_CN_100
	var_1_32 = var_1_21;


	// From: Req7Batch44PS_CN_100
	var_1_30 = (max (var_1_15 , var_1_32));


	// From: Req1Batch44PS_CN_100
	signed short int stepLocal_0 = var_1_8;
	if (stepLocal_0 == ((var_1_32 + var_1_19) ^ (var_1_30 + var_1_32))) {
		var_1_1 = var_1_8;
	}


	// From: Req3Batch44PS_CN_100
	if (var_1_30 == (min (var_1_30 , (var_1_8 / var_1_15)))) {
		var_1_14 = var_1_16;
	} else {
		var_1_14 = (var_1_17 - (16u + var_1_18));
	}


	// From: Req5Batch44PS_CN_100
	signed long int stepLocal_2 = var_1_23 - var_1_24;
	if (stepLocal_2 > var_1_14) {
		var_1_22 = (var_1_25 - var_1_26);
	}


	// From: Req6Batch44PS_CN_100
	if (! var_1_5) {
		var_1_27 = ((var_1_32 + var_1_24) + (var_1_30 + (var_1_20 + var_1_32)));
	} else {
		if (var_1_11 > var_1_22) {
			var_1_27 = var_1_19;
		} else {
			var_1_27 = var_1_32;
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -128);
	assume_abort_if_not(var_1_15 <= 127);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1073741823);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -126);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -127);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -1);
	assume_abort_if_not(var_1_23 <= 32767);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -127);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -128);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483648);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= -1073741823);
	assume_abort_if_not(var_1_41 <= 1073741823);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
	assume_abort_if_not(var_1_48 != 0.0F);
	var_1_50 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_50 >= -2147483648);
	assume_abort_if_not(var_1_50 <= 2147483647);
	assume_abort_if_not(var_1_50 != 0);
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -922337.2036854765600e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -922337.2036854765600e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= -922337.2036854765600e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854765600e+12F && var_1_53 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854765600e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -461168.6018427382800e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= -461168.6018427382800e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427382800e+12F && var_1_57 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= -922337.2036854776000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427382800e+12F && var_1_62 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -127);
	assume_abort_if_not(var_1_65 <= 126);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= -127);
	assume_abort_if_not(var_1_66 <= 126);
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= -127);
	assume_abort_if_not(var_1_67 <= 126);
	var_1_69 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_69 >= -32768);
	assume_abort_if_not(var_1_69 <= 32767);
	assume_abort_if_not(var_1_69 != 0);
	var_1_70 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_70 >= -1);
	assume_abort_if_not(var_1_70 <= 126);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 63);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 1);
	assume_abort_if_not(var_1_73 <= 1);
}



void updateLastVariables() {
	last_1_var_1_22 = var_1_22;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_32 = var_1_32;
}

int property() {
	return (((((((((var_1_8 == ((var_1_32 + var_1_19) ^ (var_1_30 + var_1_32))) ? (var_1_1 == ((signed long int) var_1_8)) : 1) && (((abs (last_1_var_1_22)) < (min ((var_1_10 - var_1_11) , (abs (last_1_var_1_22))))) ? ((last_1_var_1_22 >= last_1_var_1_22) ? (var_1_8 == ((signed short int) last_1_var_1_32)) : (var_1_8 == ((signed short int) last_1_var_1_30))) : (var_1_8 == ((signed short int) 0)))) && ((var_1_30 == (min (var_1_30 , (var_1_8 / var_1_15)))) ? (var_1_14 == ((unsigned long int) var_1_16)) : (var_1_14 == ((unsigned long int) (var_1_17 - (16u + var_1_18)))))) && ((256 > var_1_18) ? (var_1_19 == ((signed char) (max ((abs (var_1_20)) , var_1_21)))) : 1)) && (((var_1_23 - var_1_24) > var_1_14) ? (var_1_22 == ((float) (var_1_25 - var_1_26))) : 1)) && ((! var_1_5) ? (var_1_27 == ((signed long int) ((var_1_32 + var_1_24) + (var_1_30 + (var_1_20 + var_1_32))))) : ((var_1_11 > var_1_22) ? (var_1_27 == ((signed long int) var_1_19)) : (var_1_27 == ((signed long int) var_1_32))))) && (var_1_30 == ((signed short int) (max (var_1_15 , var_1_32))))) && (var_1_31 == ((double) var_1_26))) && (var_1_32 == ((signed char) var_1_21))
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
