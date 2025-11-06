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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch190Amount100.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 500;
float var_1_3 = 0.34;
float var_1_4 = 0.5;
float var_1_5 = 256.875;
unsigned long int var_1_6 = 50;
unsigned long int var_1_7 = 1908897212;
unsigned long int var_1_8 = 8;
unsigned long int var_1_9 = 8;
unsigned char var_1_10 = 5;
unsigned char var_1_11 = 32;
signed long int var_1_12 = 5;
signed long int var_1_13 = 1969234866;
float var_1_14 = 128.75;
unsigned long int var_1_15 = 2448753195;
float var_1_16 = 100000000000.5;
float var_1_17 = 2.5;
signed char var_1_18 = -2;
signed char var_1_19 = -1;
signed char var_1_20 = 32;
unsigned char var_1_21 = 0;
signed char var_1_22 = 10;
signed char var_1_23 = -100;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
float var_1_27 = -0.125;
float var_1_28 = 127.4;
float var_1_29 = 128.6;
float var_1_30 = 0.0;
unsigned short int var_1_31 = 32;
unsigned char var_1_32 = 32;
unsigned short int var_1_33 = 500;
unsigned short int var_1_34 = 2;
unsigned short int var_1_35 = 61218;
unsigned short int var_1_36 = 58303;
unsigned long int var_1_37 = 64;
unsigned long int var_1_38 = 3665058348;
unsigned long int var_1_39 = 3964699782;
unsigned long int var_1_40 = 128;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_12 = 5;
float last_1_var_1_27 = -0.125;
unsigned short int last_1_var_1_31 = 32;
unsigned long int last_1_var_1_37 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch190Amount100
	if (! (last_1_var_1_12 > (last_1_var_1_31 % var_1_33))) {
		var_1_32 = var_1_22;
	}


	// From: Req3Batch190Amount100
	if (! (var_1_32 == (var_1_9 * var_1_8))) {
		var_1_12 = (((var_1_13 - var_1_8) - var_1_11) - var_1_32);
	} else {
		var_1_12 = (var_1_32 - var_1_13);
	}


	// From: Req11Batch190Amount100
	if ((50u + (last_1_var_1_37 + var_1_32)) < var_1_6) {
		var_1_37 = ((max (var_1_38 , var_1_39)) - var_1_8);
	} else {
		if (var_1_36 <= var_1_39) {
			var_1_37 = var_1_40;
		}
	}


	// From: Req2Batch190Amount100
	var_1_10 = var_1_11;


	// From: Req4Batch190Amount100
	if (var_1_8 > (var_1_15 - var_1_13)) {
		var_1_14 = (var_1_16 + var_1_17);
	}


	// From: Req5Batch190Amount100
	unsigned long int stepLocal_0 = var_1_8 + var_1_11;
	if (10.5 >= (min (var_1_16 , (var_1_4 * var_1_5)))) {
		if ((max (var_1_7 , var_1_15)) >= stepLocal_0) {
			var_1_18 = (max (var_1_19 , (min ((var_1_20 + 32) , -8))));
		}
	}


	// From: Req7Batch190Amount100
	unsigned long int stepLocal_4 = min (var_1_13 , 64u);
	if (var_1_9 != stepLocal_4) {
		if ((var_1_28 - var_1_29) >= (var_1_14 + last_1_var_1_27)) {
			if (! (var_1_29 < var_1_3)) {
				var_1_27 = (var_1_16 + var_1_17);
			} else {
				var_1_27 = ((var_1_30 + (abs (var_1_17))) - (min (0.19999999999999996f , (max (8.5f , 256.4f)))));
			}
		}
	} else {
		var_1_27 = var_1_17;
	}


	// From: Req10Batch190Amount100
	unsigned long int stepLocal_6 = var_1_6;
	if (stepLocal_6 <= var_1_9) {
		var_1_34 = ((max ((var_1_35 - var_1_22) , 56027)) - var_1_11);
	} else {
		var_1_34 = ((abs (max (var_1_35 , var_1_36))) - var_1_11);
	}


	// From: Req8Batch190Amount100
	unsigned long int stepLocal_5 = var_1_37;
	if ((min ((var_1_37 * var_1_8) , var_1_15)) != stepLocal_5) {
		var_1_31 = (var_1_11 + var_1_32);
	} else {
		var_1_31 = var_1_22;
	}


	// From: Req1Batch190Amount100
	if (var_1_14 > (var_1_27 * (var_1_14 * var_1_27))) {
		var_1_1 = var_1_6;
	} else {
		var_1_1 = ((var_1_7 - (var_1_8 + 32u)) + var_1_9);
	}


	// From: Req6Batch190Amount100
	unsigned short int stepLocal_3 = var_1_34;
	signed long int stepLocal_2 = var_1_10 * var_1_11;
	signed char stepLocal_1 = var_1_20;
	if (stepLocal_3 <= (~ var_1_13)) {
		if (var_1_34 <= stepLocal_2) {
			if (stepLocal_1 > (var_1_13 / var_1_23)) {
				var_1_21 = var_1_25;
			} else {
				var_1_21 = 1;
			}
		} else {
			var_1_21 = var_1_25;
		}
	} else {
		var_1_21 = var_1_26;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 1073741823);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 536870912);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 1610612734);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 2147483647);
	assume_abort_if_not(var_1_15 <= 4294967295);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -127);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -128);
	assume_abort_if_not(var_1_23 <= 127);
	assume_abort_if_not(var_1_23 != 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 65535);
	assume_abort_if_not(var_1_33 != 0);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 49150);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 32767);
	assume_abort_if_not(var_1_36 <= 65534);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 2147483647);
	assume_abort_if_not(var_1_38 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 2147483647);
	assume_abort_if_not(var_1_39 <= 4294967294);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_37 = var_1_37;
}

int property(void) {
	return (((((((((((var_1_14 > (var_1_27 * (var_1_14 * var_1_27))) ? (var_1_1 == ((unsigned long int) var_1_6)) : (var_1_1 == ((unsigned long int) ((var_1_7 - (var_1_8 + 32u)) + var_1_9)))) && (var_1_10 == ((unsigned char) var_1_11))) && ((! (var_1_32 == (var_1_9 * var_1_8))) ? (var_1_12 == ((signed long int) (((var_1_13 - var_1_8) - var_1_11) - var_1_32))) : (var_1_12 == ((signed long int) (var_1_32 - var_1_13))))) && ((var_1_8 > (var_1_15 - var_1_13)) ? (var_1_14 == ((float) (var_1_16 + var_1_17))) : 1)) && ((10.5 >= (min (var_1_16 , (var_1_4 * var_1_5)))) ? (((max (var_1_7 , var_1_15)) >= (var_1_8 + var_1_11)) ? (var_1_18 == ((signed char) (max (var_1_19 , (min ((var_1_20 + 32) , -8)))))) : 1) : 1)) && ((var_1_34 <= (~ var_1_13)) ? ((var_1_34 <= (var_1_10 * var_1_11)) ? ((var_1_20 > (var_1_13 / var_1_23)) ? (var_1_21 == ((unsigned char) var_1_25)) : (var_1_21 == ((unsigned char) 1))) : (var_1_21 == ((unsigned char) var_1_25))) : (var_1_21 == ((unsigned char) var_1_26)))) && ((var_1_9 != (min (var_1_13 , 64u))) ? (((var_1_28 - var_1_29) >= (var_1_14 + last_1_var_1_27)) ? ((! (var_1_29 < var_1_3)) ? (var_1_27 == ((float) (var_1_16 + var_1_17))) : (var_1_27 == ((float) ((var_1_30 + (abs (var_1_17))) - (min (0.19999999999999996f , (max (8.5f , 256.4f)))))))) : 1) : (var_1_27 == ((float) var_1_17)))) && (((min ((var_1_37 * var_1_8) , var_1_15)) != var_1_37) ? (var_1_31 == ((unsigned short int) (var_1_11 + var_1_32))) : (var_1_31 == ((unsigned short int) var_1_22)))) && ((! (last_1_var_1_12 > (last_1_var_1_31 % var_1_33))) ? (var_1_32 == ((unsigned char) var_1_22)) : 1)) && ((var_1_6 <= var_1_9) ? (var_1_34 == ((unsigned short int) ((max ((var_1_35 - var_1_22) , 56027)) - var_1_11))) : (var_1_34 == ((unsigned short int) ((abs (max (var_1_35 , var_1_36))) - var_1_11))))) && (((50u + (last_1_var_1_37 + var_1_32)) < var_1_6) ? (var_1_37 == ((unsigned long int) ((max (var_1_38 , var_1_39)) - var_1_8))) : ((var_1_36 <= var_1_39) ? (var_1_37 == ((unsigned long int) var_1_40)) : 1))
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
