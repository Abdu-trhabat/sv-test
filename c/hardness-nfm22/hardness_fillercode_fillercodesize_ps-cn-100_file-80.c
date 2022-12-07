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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch80PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 128;
double var_1_2 = 24.25;
double var_1_3 = 128.5;
double var_1_4 = 4.5;
double var_1_5 = 49.5;
signed short int var_1_9 = -25;
unsigned char var_1_10 = 200;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
double var_1_13 = 128.375;
unsigned short int var_1_14 = 0;
float var_1_15 = 0.0;
float var_1_16 = 4.87;
float var_1_17 = 8.875;
signed short int var_1_18 = -128;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned long int var_1_22 = 16;
unsigned long int var_1_23 = 4200661734;
float var_1_24 = 9999999999.375;
unsigned short int var_1_25 = 0;
unsigned short int var_1_26 = 10;
float var_1_27 = 9.6;
float var_1_28 = 255.25;
signed short int var_1_29 = -64;
signed short int var_1_30 = 8;
signed short int var_1_31 = 8;
double var_1_32 = 9999.5;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 128;
double var_1_35 = 0.0;
double var_1_36 = 99999999999.29;
double var_1_37 = 200.4;
double var_1_38 = -0.4;
unsigned char var_1_39 = 32;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 64;
unsigned char var_1_42 = 64;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
unsigned long int var_1_45 = 10;
signed long int var_1_46 = -10;
double var_1_47 = 1.1;
float var_1_48 = 2.5;
unsigned char var_1_49 = 2;
signed char var_1_50 = -10;
signed char var_1_51 = -8;
unsigned char var_1_52 = 200;
unsigned char var_1_53 = 100;
unsigned char var_1_54 = 1;
signed long int var_1_55 = -5;
unsigned char var_1_56 = 0;
signed long int var_1_57 = -100;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_10 = 200;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_25 & var_1_26) >= -2) {
		var_1_24 = (abs (min (var_1_27 , var_1_28)));
	}


	// From: CodeObject2
	if (-64 >= var_1_26) {
		var_1_29 = (abs (var_1_30 + var_1_31));
	} else {
		var_1_29 = (var_1_31 + 32);
	}


	// From: CodeObject3
	if (var_1_33 || ((var_1_25 / var_1_34) < -32)) {
		var_1_32 = (abs ((abs (5.6)) - 9.999999996E8));
	} else {
		var_1_32 = ((var_1_35 - var_1_36) - var_1_37);
	}


	// From: CodeObject4
	if ((- (- 128.25f)) <= var_1_28) {
		if (var_1_31 > var_1_26) {
			var_1_38 = (min ((abs (var_1_37)) , var_1_36));
		} else {
			var_1_38 = (7.75 - var_1_35);
		}
	}


	// From: CodeObject5
	if (var_1_40 || (var_1_26 < var_1_29)) {
		var_1_39 = ((abs (var_1_41 + var_1_42)) - 1);
	}


	// From: CodeObject6
	var_1_43 = (! ((var_1_24 >= var_1_28) || var_1_44));


	// From: CodeObject7
	if (var_1_44 && var_1_33) {
		var_1_45 = ((abs (3830938333u - 8u)) - (min (var_1_42 , var_1_39)));
	}


	// From: CodeObject8
	if (var_1_43) {
		var_1_46 = (max (var_1_34 , var_1_42));
	}


	// From: CodeObject9
	if (((var_1_39 * var_1_34) ^ var_1_46) >= (-1 ^ var_1_42)) {
		var_1_47 = (max (var_1_36 , var_1_28));
	}


	// From: CodeObject10
	if (var_1_24 <= var_1_37) {
		if (var_1_44) {
			var_1_48 = (var_1_35 - (var_1_36 + 1.000000005E8f));
		}
	} else {
		var_1_48 = (var_1_36 - var_1_35);
	}


	// From: CodeObject11
	if (var_1_47 >= var_1_27) {
		var_1_49 = (min (var_1_41 , var_1_42));
	}


	// From: CodeObject12
	if (! var_1_40) {
		var_1_50 = (abs (var_1_51));
	}


	// From: CodeObject13
	if (((var_1_39 - var_1_41) + (var_1_46 / var_1_42)) <= var_1_51) {
		var_1_52 = ((var_1_41 + 64) - (max (var_1_42 , (max (var_1_53 , var_1_54)))));
	}


	// From: CodeObject14
	if ((abs (var_1_32)) >= var_1_38) {
		var_1_55 = (var_1_41 - var_1_53);
	} else {
		var_1_55 = ((abs (var_1_42)) + (abs (var_1_31)));
	}


	// From: CodeObject15
	var_1_56 = var_1_44;


	// From: CodeObject16
	var_1_57 = var_1_52;


	// From: Req2Batch80PS_CN_100
	signed long int stepLocal_0 = last_1_var_1_10;
	if (stepLocal_0 >= last_1_var_1_10) {
		var_1_9 = (-256 + last_1_var_1_10);
	} else {
		var_1_9 = (last_1_var_1_10 + last_1_var_1_10);
	}


	// From: Req6Batch80PS_CN_100
	signed short int stepLocal_1 = var_1_9;
	if (stepLocal_1 > 0) {
		var_1_19 = ((var_1_5 >= (- var_1_15)) && (var_1_11 && (var_1_20 && var_1_21)));
	}


	// From: Req3Batch80PS_CN_100
	if (var_1_19) {
		var_1_10 = (min (0 , var_1_12));
	} else {
		if (! (var_1_5 > (255.9 / var_1_13))) {
			var_1_10 = var_1_12;
		}
	}


	// From: Req1Batch80PS_CN_100
	if (((var_1_2 - var_1_3) * var_1_4) < var_1_5) {
		var_1_1 = (min (-8 , (var_1_10 + (min (var_1_10 , var_1_10)))));
	} else {
		var_1_1 = var_1_10;
	}


	// From: Req5Batch80PS_CN_100
	if ((var_1_17 <= (- var_1_16)) && var_1_19) {
		var_1_18 = var_1_10;
	}


	// From: Req7Batch80PS_CN_100
	if (var_1_19) {
		var_1_22 = (var_1_9 + var_1_10);
	} else {
		var_1_22 = (min ((var_1_23 - var_1_9) , var_1_10));
	}


	// From: Req4Batch80PS_CN_100
	if (! var_1_19) {
		if (((var_1_15 - var_1_16) - var_1_17) <= var_1_13) {
			var_1_14 = var_1_18;
		} else {
			var_1_14 = var_1_18;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 4611686.018427387900e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427387900e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 2147483647);
	assume_abort_if_not(var_1_23 <= 4294967294);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 65535);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65535);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854765600e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -16383);
	assume_abort_if_not(var_1_30 <= 16383);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= -16383);
	assume_abort_if_not(var_1_31 <= 16383);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 255);
	assume_abort_if_not(var_1_34 != 0);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 4611686.018427382800e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 63);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 64);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -126);
	assume_abort_if_not(var_1_51 <= 126);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 127);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 127);
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
}

int property() {
	return (((((((((var_1_2 - var_1_3) * var_1_4) < var_1_5) ? (var_1_1 == ((signed short int) (min (-8 , (var_1_10 + (min (var_1_10 , var_1_10))))))) : (var_1_1 == ((signed short int) var_1_10))) && ((last_1_var_1_10 >= last_1_var_1_10) ? (var_1_9 == ((signed short int) (-256 + last_1_var_1_10))) : (var_1_9 == ((signed short int) (last_1_var_1_10 + last_1_var_1_10))))) && (var_1_19 ? (var_1_10 == ((unsigned char) (min (0 , var_1_12)))) : ((! (var_1_5 > (255.9 / var_1_13))) ? (var_1_10 == ((unsigned char) var_1_12)) : 1))) && ((! var_1_19) ? ((((var_1_15 - var_1_16) - var_1_17) <= var_1_13) ? (var_1_14 == ((unsigned short int) var_1_18)) : (var_1_14 == ((unsigned short int) var_1_18))) : 1)) && (((var_1_17 <= (- var_1_16)) && var_1_19) ? (var_1_18 == ((signed short int) var_1_10)) : 1)) && ((var_1_9 > 0) ? (var_1_19 == ((unsigned char) ((var_1_5 >= (- var_1_15)) && (var_1_11 && (var_1_20 && var_1_21))))) : 1)) && (var_1_19 ? (var_1_22 == ((unsigned long int) (var_1_9 + var_1_10))) : (var_1_22 == ((unsigned long int) (min ((var_1_23 - var_1_9) , var_1_10)))))
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
