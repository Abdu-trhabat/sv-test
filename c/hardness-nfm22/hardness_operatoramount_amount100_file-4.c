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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch4Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 16;
signed short int var_1_4 = 31024;
signed char var_1_7 = -2;
signed char var_1_8 = 8;
signed char var_1_9 = 1;
signed char var_1_10 = -1;
unsigned long int var_1_13 = 100000000;
unsigned long int var_1_14 = 2644969321;
signed char var_1_15 = 32;
signed char var_1_18 = -8;
signed char var_1_19 = -8;
signed char var_1_20 = -10;
signed long int var_1_21 = 128;
unsigned short int var_1_22 = 100;
unsigned short int var_1_23 = 34270;
unsigned short int var_1_24 = 128;
unsigned long int var_1_25 = 1;
unsigned long int var_1_27 = 1334350551;
unsigned char var_1_28 = 1;
double var_1_29 = 7.6;
double var_1_30 = 8.75;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
float var_1_33 = -0.25;
float var_1_35 = 64.375;
float var_1_36 = 1.125;
float var_1_37 = 3.6;
float var_1_38 = 3.4;
signed long int var_1_39 = 5;
unsigned char var_1_40 = 200;
float var_1_41 = 1.6139999999999999;
unsigned short int var_1_42 = 50;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_13 = 100000000;
unsigned char last_1_var_1_40 = 200;
unsigned short int last_1_var_1_42 = 50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch4Amount100
	unsigned long int stepLocal_1 = - last_1_var_1_13;
	unsigned long int stepLocal_0 = last_1_var_1_13;
	if (last_1_var_1_42 <= stepLocal_0) {
		if (stepLocal_1 > last_1_var_1_42) {
			var_1_1 = ((var_1_4 - last_1_var_1_40) - last_1_var_1_40);
		}
	} else {
		var_1_1 = last_1_var_1_40;
	}


	// From: Req12Batch4Amount100
	var_1_40 = var_1_39;


	// From: Req13Batch4Amount100
	var_1_41 = var_1_36;


	// From: Req14Batch4Amount100
	var_1_42 = var_1_23;


	// From: Req2Batch4Amount100
	if (var_1_42 < var_1_1) {
		var_1_7 = (max (var_1_8 , var_1_9));
	} else {
		var_1_7 = var_1_8;
	}


	// From: Req11Batch4Amount100
	if ((var_1_41 > (var_1_29 / var_1_35)) || ((var_1_41 + var_1_30) == var_1_41)) {
		var_1_33 = (max (var_1_36 , (abs (var_1_37 - var_1_38))));
	} else {
		if (var_1_18 > (var_1_7 >> var_1_39)) {
			var_1_33 = var_1_37;
		}
	}


	// From: Req8Batch4Amount100
	if ((- var_1_33) >= (max (var_1_41 , 199.75f))) {
		var_1_24 = (var_1_40 + var_1_4);
	}


	// From: Req10Batch4Amount100
	if ((var_1_29 - var_1_30) > var_1_41) {
		var_1_28 = (var_1_31 && var_1_32);
	} else {
		var_1_28 = (! ((var_1_1 > var_1_24) || var_1_32));
	}


	// From: Req7Batch4Amount100
	if (var_1_42 > var_1_24) {
		var_1_22 = (var_1_23 - (max (var_1_4 , var_1_40)));
	}


	// From: Req5Batch4Amount100
	if (var_1_28 || var_1_28) {
		var_1_15 = (min ((abs (5)) , ((max (var_1_18 , var_1_19)) + var_1_20)));
	}


	// From: Req4Batch4Amount100
	if (var_1_15 >= var_1_40) {
		var_1_13 = ((abs (3878859907u)) - var_1_40);
	} else {
		var_1_13 = (var_1_14 - (max (var_1_4 , var_1_40)));
	}


	// From: Req3Batch4Amount100
	unsigned long int stepLocal_2 = var_1_13;
	if (var_1_8 <= stepLocal_2) {
		var_1_10 = -10;
	} else {
		if ((- (var_1_41 / 0.6f)) > var_1_33) {
			var_1_10 = var_1_9;
		} else {
			var_1_10 = var_1_9;
		}
	}


	// From: Req6Batch4Amount100
	if (var_1_28 || ((- var_1_40) >= var_1_22)) {
		if (var_1_33 > 99999.3f) {
			var_1_21 = 500;
		} else {
			var_1_21 = var_1_13;
		}
	} else {
		var_1_21 = 10;
	}


	// From: Req9Batch4Amount100
	if (var_1_22 != var_1_1) {
		if ((var_1_7 / -5) <= var_1_1) {
			var_1_25 = (var_1_1 + (max ((var_1_27 - var_1_13) , (max (var_1_40 , var_1_40)))));
		} else {
			if (var_1_28 && var_1_28) {
				var_1_25 = (var_1_14 - var_1_21);
			} else {
				var_1_25 = var_1_21;
			}
		}
	} else {
		var_1_25 = var_1_14;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 16382);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 32767);
	assume_abort_if_not(var_1_23 <= 65534);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 1073741823);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	assume_abort_if_not(var_1_35 != 0.0F);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 16);
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_42 = var_1_42;
}

int property() {
	return ((((((((((((((last_1_var_1_42 <= last_1_var_1_13) ? (((- last_1_var_1_13) > last_1_var_1_42) ? (var_1_1 == ((signed short int) ((var_1_4 - last_1_var_1_40) - last_1_var_1_40))) : 1) : (var_1_1 == ((signed short int) last_1_var_1_40))) && ((var_1_42 < var_1_1) ? (var_1_7 == ((signed char) (max (var_1_8 , var_1_9)))) : (var_1_7 == ((signed char) var_1_8)))) && ((var_1_8 <= var_1_13) ? (var_1_10 == ((signed char) -10)) : (((- (var_1_41 / 0.6f)) > var_1_33) ? (var_1_10 == ((signed char) var_1_9)) : (var_1_10 == ((signed char) var_1_9))))) && ((var_1_15 >= var_1_40) ? (var_1_13 == ((unsigned long int) ((abs (3878859907u)) - var_1_40))) : (var_1_13 == ((unsigned long int) (var_1_14 - (max (var_1_4 , var_1_40))))))) && ((var_1_28 || var_1_28) ? (var_1_15 == ((signed char) (min ((abs (5)) , ((max (var_1_18 , var_1_19)) + var_1_20))))) : 1)) && ((var_1_28 || ((- var_1_40) >= var_1_22)) ? ((var_1_33 > 99999.3f) ? (var_1_21 == ((signed long int) 500)) : (var_1_21 == ((signed long int) var_1_13))) : (var_1_21 == ((signed long int) 10)))) && ((var_1_42 > var_1_24) ? (var_1_22 == ((unsigned short int) (var_1_23 - (max (var_1_4 , var_1_40))))) : 1)) && (((- var_1_33) >= (max (var_1_41 , 199.75f))) ? (var_1_24 == ((unsigned short int) (var_1_40 + var_1_4))) : 1)) && ((var_1_22 != var_1_1) ? (((var_1_7 / -5) <= var_1_1) ? (var_1_25 == ((unsigned long int) (var_1_1 + (max ((var_1_27 - var_1_13) , (max (var_1_40 , var_1_40))))))) : ((var_1_28 && var_1_28) ? (var_1_25 == ((unsigned long int) (var_1_14 - var_1_21))) : (var_1_25 == ((unsigned long int) var_1_21)))) : (var_1_25 == ((unsigned long int) var_1_14)))) && (((var_1_29 - var_1_30) > var_1_41) ? (var_1_28 == ((unsigned char) (var_1_31 && var_1_32))) : (var_1_28 == ((unsigned char) (! ((var_1_1 > var_1_24) || var_1_32)))))) && (((var_1_41 > (var_1_29 / var_1_35)) || ((var_1_41 + var_1_30) == var_1_41)) ? (var_1_33 == ((float) (max (var_1_36 , (abs (var_1_37 - var_1_38)))))) : ((var_1_18 > (var_1_7 >> var_1_39)) ? (var_1_33 == ((float) var_1_37)) : 1))) && (var_1_40 == ((unsigned char) var_1_39))) && (var_1_41 == ((float) var_1_36))) && (var_1_42 == ((unsigned short int) var_1_23))
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
