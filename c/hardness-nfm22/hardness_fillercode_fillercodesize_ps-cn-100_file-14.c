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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch14PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -10;
unsigned char var_1_4 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned long int var_1_11 = 16;
signed short int var_1_12 = -32;
unsigned char var_1_15 = 8;
unsigned char var_1_17 = 100;
unsigned char var_1_18 = 10;
signed long int var_1_19 = 1;
unsigned char var_1_20 = 5;
float var_1_21 = 25.5;
signed long int var_1_23 = -5;
float var_1_24 = 1.125;
float var_1_25 = 15.25;
signed long int var_1_26 = 5;
unsigned char var_1_28 = 16;
double var_1_29 = 256.5;
double var_1_30 = 9.7;
signed short int var_1_31 = 32;
unsigned char var_1_32 = 1;
signed short int var_1_33 = -8;
signed short int var_1_34 = 128;
signed long int var_1_35 = -32;
double var_1_36 = 10000000000000.25;
double var_1_37 = 256.8;
float var_1_38 = 128.75;
signed long int var_1_39 = 100;
float var_1_40 = 1000.175;
float var_1_41 = 3.5;
float var_1_42 = 0.25;
float var_1_43 = 0.6;
float var_1_44 = 24.4;
unsigned long int var_1_45 = 32;
unsigned long int var_1_46 = 5;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 64;
float var_1_54 = 50.5;
unsigned char var_1_55 = 25;
unsigned char var_1_56 = 64;
unsigned char var_1_57 = 64;
unsigned char var_1_58 = 5;
unsigned char var_1_59 = 1;
unsigned char var_1_60 = 1;
signed char var_1_61 = -10;
signed char var_1_62 = -5;
signed char var_1_63 = 0;
signed short int var_1_64 = 5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_4 = 0;
unsigned char last_1_var_1_15 = 8;
signed long int last_1_var_1_19 = 1;
float last_1_var_1_21 = 25.5;
signed long int last_1_var_1_26 = 5;
unsigned char last_1_var_1_28 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_29 = var_1_30;


	// From: CodeObject2
	if (var_1_32) {
		var_1_31 = (max (var_1_33 , var_1_34));
	} else {
		if ((max (var_1_33 , var_1_34)) > var_1_35) {
			if (var_1_30 > (abs (var_1_29 / var_1_36))) {
				if ((var_1_29 / var_1_36) > var_1_30) {
					var_1_31 = var_1_33;
				}
			}
		} else {
			var_1_31 = var_1_34;
		}
	}


	// From: CodeObject3
	if (var_1_32 && ((var_1_33 & var_1_31) <= (max (var_1_34 , var_1_35)))) {
		var_1_37 = var_1_30;
	}


	// From: CodeObject4
	if ((abs (var_1_35)) <= ((-2 >> var_1_31) % var_1_39)) {
		var_1_38 = var_1_30;
	} else {
		var_1_38 = (var_1_40 + (max (var_1_41 , var_1_42)));
	}


	// From: CodeObject5
	if (var_1_29 <= var_1_41) {
		var_1_43 = ((abs (var_1_42)) - var_1_44);
	}


	// From: CodeObject6
	var_1_45 = var_1_46;


	// From: CodeObject7
	if (var_1_37 > (max (var_1_44 , var_1_41))) {
		if (var_1_32) {
			var_1_47 = (! (var_1_48 && var_1_49));
		}
	} else {
		if (var_1_48) {
			if (var_1_33 > 8) {
				if (var_1_29 > (min ((min (var_1_40 , var_1_37)) , var_1_36))) {
					var_1_47 = (! (var_1_49 && (var_1_50 && var_1_51)));
				}
			} else {
				var_1_47 = (! var_1_52);
			}
		}
	}


	// From: CodeObject8
	if ((~ var_1_31) <= var_1_34) {
		if (var_1_43 > var_1_54) {
			var_1_53 = (abs (var_1_55));
		}
	} else {
		var_1_53 = (var_1_56 + (var_1_57 - var_1_58));
	}


	// From: CodeObject9
	var_1_59 = (var_1_50 && (! var_1_60));


	// From: CodeObject10
	if ((var_1_39 | 16) != var_1_35) {
		if ((~ var_1_56) <= (var_1_35 ^ var_1_45)) {
			if (! ((max (var_1_55 , var_1_56)) > var_1_53)) {
				if (var_1_50) {
					var_1_61 = (var_1_58 - (abs (var_1_62)));
				} else {
					var_1_61 = (max ((min (var_1_58 , (min (32 , var_1_62)))) , var_1_63));
				}
			}
		} else {
			var_1_61 = (max (5 , var_1_62));
		}
	} else {
		var_1_61 = (max (var_1_63 , var_1_62));
	}


	// From: CodeObject11
	if (var_1_31 >= var_1_62) {
		var_1_64 = (max ((var_1_56 + var_1_57) , var_1_61));
	} else {
		var_1_64 = (min (var_1_62 , var_1_61));
	}


	// From: Req3Batch14PS_CN_100
	if ((last_1_var_1_28 / var_1_12) <= last_1_var_1_19) {
		var_1_11 = (max (last_1_var_1_28 , last_1_var_1_15));
	}


	// From: Req4Batch14PS_CN_100
	if ((min (last_1_var_1_21 , -0.5)) > (10.9 * last_1_var_1_21)) {
		if (last_1_var_1_4) {
			var_1_15 = (min ((abs (var_1_17)) , var_1_18));
		} else {
			var_1_15 = var_1_18;
		}
	}


	// From: Req1Batch14PS_CN_100
	var_1_1 = (var_1_15 + var_1_15);


	// From: Req8Batch14PS_CN_100
	var_1_28 = var_1_17;


	// From: Req7Batch14PS_CN_100
	if (var_1_9 || ((var_1_11 + last_1_var_1_26) <= 4)) {
		var_1_26 = (var_1_28 - var_1_20);
	} else {
		var_1_26 = (var_1_20 - var_1_17);
	}


	// From: Req6Batch14PS_CN_100
	if (((~ var_1_28) * var_1_1) >= (var_1_15 % var_1_23)) {
		var_1_21 = (max (var_1_24 , var_1_25));
	}


	// From: Req2Batch14PS_CN_100
	if ((var_1_21 + 9.999999999999994E14f) < (- var_1_21)) {
		var_1_4 = (var_1_7 && var_1_8);
	} else {
		if (var_1_7) {
			var_1_4 = ((var_1_8 || var_1_9) && var_1_10);
		}
	}


	// From: Req5Batch14PS_CN_100
	unsigned char stepLocal_1 = var_1_17;
	signed long int stepLocal_0 = var_1_15 % var_1_20;
	if (stepLocal_0 != var_1_1) {
		if (var_1_18 == stepLocal_1) {
			if (var_1_4) {
				var_1_19 = var_1_18;
			} else {
				var_1_19 = var_1_26;
			}
		}
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32768);
	assume_abort_if_not(var_1_12 <= 32767);
	assume_abort_if_not(var_1_12 != 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 255);
	assume_abort_if_not(var_1_20 != 0);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483648);
	assume_abort_if_not(var_1_23 <= 2147483647);
	assume_abort_if_not(var_1_23 != 0);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854765600e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= -32767);
	assume_abort_if_not(var_1_33 <= 32766);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= -32767);
	assume_abort_if_not(var_1_34 <= 32766);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483648);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	assume_abort_if_not(var_1_36 != 0.0F);
	var_1_39 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_39 >= -2147483648);
	assume_abort_if_not(var_1_39 <= 2147483647);
	assume_abort_if_not(var_1_39 != 0);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -461168.6018427382800e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -461168.6018427382800e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -461168.6018427382800e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 4294967294);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 1);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 0);
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -922337.2036854776000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 127);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 63);
	assume_abort_if_not(var_1_57 <= 127);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 63);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 1);
	assume_abort_if_not(var_1_60 <= 1);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= -126);
	assume_abort_if_not(var_1_62 <= 126);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= -127);
	assume_abort_if_not(var_1_63 <= 126);
}



void updateLastVariables() {
	last_1_var_1_4 = var_1_4;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_28 = var_1_28;
}

int property() {
	return (((((((var_1_1 == ((signed long int) (var_1_15 + var_1_15))) && (((var_1_21 + 9.999999999999994E14f) < (- var_1_21)) ? (var_1_4 == ((unsigned char) (var_1_7 && var_1_8))) : (var_1_7 ? (var_1_4 == ((unsigned char) ((var_1_8 || var_1_9) && var_1_10))) : 1))) && (((last_1_var_1_28 / var_1_12) <= last_1_var_1_19) ? (var_1_11 == ((unsigned long int) (max (last_1_var_1_28 , last_1_var_1_15)))) : 1)) && (((min (last_1_var_1_21 , -0.5)) > (10.9 * last_1_var_1_21)) ? (last_1_var_1_4 ? (var_1_15 == ((unsigned char) (min ((abs (var_1_17)) , var_1_18)))) : (var_1_15 == ((unsigned char) var_1_18))) : 1)) && (((var_1_15 % var_1_20) != var_1_1) ? ((var_1_18 == var_1_17) ? (var_1_4 ? (var_1_19 == ((signed long int) var_1_18)) : (var_1_19 == ((signed long int) var_1_26))) : 1) : 1)) && ((((~ var_1_28) * var_1_1) >= (var_1_15 % var_1_23)) ? (var_1_21 == ((float) (max (var_1_24 , var_1_25)))) : 1)) && ((var_1_9 || ((var_1_11 + last_1_var_1_26) <= 4)) ? (var_1_26 == ((signed long int) (var_1_28 - var_1_20))) : (var_1_26 == ((signed long int) (var_1_20 - var_1_17))))) && (var_1_28 == ((unsigned char) var_1_17))
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
