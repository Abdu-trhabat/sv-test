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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch0PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 0;
signed long int var_1_5 = 2;
signed short int var_1_6 = -10;
unsigned long int var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 3470417420;
unsigned char var_1_10 = 0;
double var_1_12 = 25.6;
double var_1_13 = 1.75;
float var_1_14 = 5.4;
float var_1_15 = 127.5;
float var_1_16 = 3.5;
signed long int var_1_17 = 64;
double var_1_19 = 0.0;
unsigned short int var_1_20 = 10;
double var_1_21 = 4.75;
double var_1_22 = 4.6;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
signed short int var_1_29 = 4;
signed short int var_1_30 = 10;
unsigned char var_1_31 = 5;
double var_1_32 = 1.625;
unsigned char var_1_33 = 16;
unsigned long int var_1_34 = 5;
signed long int var_1_35 = -4;
signed long int var_1_36 = -16;
unsigned char var_1_37 = 2;
signed char var_1_38 = -8;
double var_1_39 = 15.375;
signed char var_1_40 = -100;
signed char var_1_41 = 64;
signed char var_1_42 = 0;
signed char var_1_43 = 32;
unsigned short int var_1_44 = 16;
signed long int var_1_45 = 0;
unsigned short int var_1_46 = 256;
signed long int var_1_47 = -4;
unsigned long int var_1_48 = 4;
float var_1_49 = 255.125;
double var_1_50 = 99999999999999.5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 0;
signed long int last_1_var_1_5 = 2;
signed short int last_1_var_1_6 = -10;
unsigned long int last_1_var_1_7 = 1;
float last_1_var_1_14 = 5.4;
signed long int last_1_var_1_17 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((32 / var_1_20) > -500) {
		var_1_19 = (abs (var_1_21 - var_1_22));
	}


	// From: CodeObject2
	if (var_1_21 >= (var_1_22 * 128.9)) {
		var_1_23 = var_1_24;
	} else {
		var_1_23 = (var_1_24 && (! var_1_25));
	}


	// From: CodeObject3
	if (var_1_22 == var_1_19) {
		var_1_26 = (var_1_23 && (var_1_25 || (var_1_24 && var_1_27)));
	} else {
		var_1_26 = (var_1_25 || (var_1_27 || var_1_28));
	}


	// From: CodeObject4
	var_1_29 = var_1_30;


	// From: CodeObject5
	if (var_1_21 <= (var_1_19 + (var_1_22 - var_1_32))) {
		var_1_31 = (10 + var_1_33);
	}


	// From: CodeObject6
	if (var_1_19 <= var_1_22) {
		if (var_1_24) {
			var_1_34 = (min (var_1_33 , var_1_20));
		}
	}


	// From: CodeObject7
	if (var_1_20 <= var_1_34) {
		var_1_35 = (abs (min (var_1_33 , var_1_31)));
	} else {
		if (var_1_19 > var_1_22) {
			var_1_35 = (max (-2 , var_1_33));
		}
	}


	// From: CodeObject8
	if (var_1_34 > var_1_31) {
		var_1_36 = (var_1_31 + (max (var_1_29 , var_1_30)));
	}


	// From: CodeObject9
	if ((var_1_35 < var_1_33) || var_1_25) {
		var_1_37 = var_1_33;
	}


	// From: CodeObject10
	if (var_1_39 != var_1_22) {
		var_1_38 = (abs (var_1_40));
	} else {
		if (var_1_25 || ((max (var_1_33 , var_1_40)) > var_1_30)) {
			if (var_1_23) {
				if (var_1_34 < (var_1_33 >> var_1_36)) {
					var_1_38 = var_1_40;
				} else {
					var_1_38 = ((var_1_41 - (var_1_42 + 16)) - var_1_43);
				}
			}
		}
	}


	// From: CodeObject11
	if (((100 | var_1_38) >= var_1_45) || (var_1_32 > (var_1_22 + var_1_39))) {
		var_1_44 = (abs (var_1_42 + var_1_41));
	}


	// From: CodeObject12
	if ((var_1_27 || var_1_26) && var_1_23) {
		var_1_46 = (var_1_41 + var_1_43);
	}


	// From: CodeObject13
	if (var_1_38 <= 100) {
		var_1_47 = ((abs (100)) + ((var_1_44 + var_1_41) - var_1_37));
	}


	// From: CodeObject14
	if (var_1_23) {
		if (((min (var_1_22 , var_1_21)) - (max (var_1_32 , var_1_49))) <= (var_1_39 / var_1_50)) {
			if (var_1_32 >= var_1_49) {
				var_1_48 = var_1_44;
			} else {
				var_1_48 = var_1_37;
			}
		}
	}


	// From: Req1Batch0PS_CN_100
	if (last_1_var_1_7 > (- last_1_var_1_5)) {
		var_1_1 = (max (last_1_var_1_5 , (last_1_var_1_7 + last_1_var_1_6)));
	} else {
		var_1_1 = (min ((1 - last_1_var_1_7) , 16));
	}


	// From: Req7Batch0PS_CN_100
	if (((last_1_var_1_14 + last_1_var_1_14) / 9.2) < (min (last_1_var_1_14 , var_1_16))) {
		var_1_17 = (max (last_1_var_1_1 , last_1_var_1_6));
	} else {
		var_1_17 = last_1_var_1_6;
	}


	// From: Req3Batch0PS_CN_100
	signed long int stepLocal_1 = - last_1_var_1_1;
	if (last_1_var_1_17 < stepLocal_1) {
		var_1_6 = (32 - last_1_var_1_6);
	}


	// From: Req4Batch0PS_CN_100
	signed long int stepLocal_3 = var_1_1;
	signed long int stepLocal_2 = var_1_17;
	if (var_1_17 > stepLocal_2) {
		if (var_1_6 <= stepLocal_3) {
			var_1_7 = (abs (var_1_17));
		}
	}


	// From: Req6Batch0PS_CN_100
	unsigned long int stepLocal_5 = var_1_9;
	if ((var_1_12 * last_1_var_1_14) > var_1_13) {
		if (stepLocal_5 < var_1_7) {
			var_1_14 = var_1_15;
		} else {
			var_1_14 = var_1_15;
		}
	} else {
		var_1_14 = var_1_16;
	}


	// From: Req2Batch0PS_CN_100
	signed long int stepLocal_0 = var_1_17;
	if (var_1_6 < stepLocal_0) {
		var_1_5 = ((var_1_17 - var_1_6) + var_1_6);
	}


	// From: Req5Batch0PS_CN_100
	unsigned long int stepLocal_4 = var_1_9 - var_1_6;
	if ((- 8u) >= stepLocal_4) {
		var_1_8 = (! var_1_10);
	} else {
		var_1_8 = (((var_1_14 / var_1_12) >= var_1_14) || var_1_10);
	}
}



void updateVariables() {
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967295);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 65535);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32767);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -126);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 62);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 32);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 126);
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= -2147483648);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -922337.2036854776000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
	assume_abort_if_not(var_1_50 != 0.0F);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_17 = var_1_17;
}

int property() {
	return (((((((last_1_var_1_7 > (- last_1_var_1_5)) ? (var_1_1 == ((signed long int) (max (last_1_var_1_5 , (last_1_var_1_7 + last_1_var_1_6))))) : (var_1_1 == ((signed long int) (min ((1 - last_1_var_1_7) , 16))))) && ((var_1_6 < var_1_17) ? (var_1_5 == ((signed long int) ((var_1_17 - var_1_6) + var_1_6))) : 1)) && ((last_1_var_1_17 < (- last_1_var_1_1)) ? (var_1_6 == ((signed short int) (32 - last_1_var_1_6))) : 1)) && ((var_1_17 > var_1_17) ? ((var_1_6 <= var_1_1) ? (var_1_7 == ((unsigned long int) (abs (var_1_17)))) : 1) : 1)) && (((- 8u) >= (var_1_9 - var_1_6)) ? (var_1_8 == ((unsigned char) (! var_1_10))) : (var_1_8 == ((unsigned char) (((var_1_14 / var_1_12) >= var_1_14) || var_1_10))))) && (((var_1_12 * last_1_var_1_14) > var_1_13) ? ((var_1_9 < var_1_7) ? (var_1_14 == ((float) var_1_15)) : (var_1_14 == ((float) var_1_15))) : (var_1_14 == ((float) var_1_16)))) && ((((last_1_var_1_14 + last_1_var_1_14) / 9.2) < (min (last_1_var_1_14 , var_1_16))) ? (var_1_17 == ((signed long int) (max (last_1_var_1_1 , last_1_var_1_6)))) : (var_1_17 == ((signed long int) last_1_var_1_6)))
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
