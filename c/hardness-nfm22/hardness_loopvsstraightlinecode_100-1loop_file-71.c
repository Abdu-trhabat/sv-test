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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch71100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 4;
unsigned char var_1_5 = 4;
float var_1_6 = 63.375;
float var_1_7 = 2.875;
float var_1_8 = 128.6;
float var_1_9 = 128.75;
signed char var_1_10 = 1;
signed char var_1_12 = 4;
signed char var_1_13 = 32;
signed char var_1_14 = 32;
signed char var_1_15 = 4;
unsigned char var_1_16 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
float var_1_20 = 9999.75;
unsigned long int var_1_21 = 1;
unsigned char var_1_22 = 0;
float var_1_23 = 255.225;
unsigned long int var_1_24 = 5;
unsigned short int var_1_25 = 2;
unsigned short int var_1_26 = 45297;
unsigned short int var_1_27 = 256;
signed short int var_1_28 = -2;
double var_1_29 = 63.25;
double var_1_30 = 5.375;
double var_1_31 = 5.5;
double var_1_32 = 256.8;
signed short int var_1_33 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_16 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch71100_1loop
	if (last_1_var_1_16) {
		var_1_10 = var_1_12;
	} else {
		var_1_10 = (((min (2 , var_1_13)) + (var_1_14 - var_1_15)) - 4);
	}


	// From: Req8Batch71100_1loop
	if (var_1_18 || (! (5 > var_1_13))) {
		var_1_24 = (var_1_5 + var_1_10);
	} else {
		if (! (var_1_23 > var_1_9)) {
			var_1_24 = var_1_13;
		}
	}


	// From: Req2Batch71100_1loop
	var_1_6 = (min (((var_1_7 - 31.5f) + (max (var_1_8 , 100.5f))) , var_1_9));


	// From: Req5Batch71100_1loop
	var_1_20 = (min (var_1_9 , (max (64.2f , var_1_7))));


	// From: Req6Batch71100_1loop
	signed char stepLocal_3 = var_1_14;
	unsigned char stepLocal_2 = var_1_18;
	if (stepLocal_2 || (var_1_9 > (var_1_8 + var_1_7))) {
		if ((var_1_5 * var_1_10) < stepLocal_3) {
			var_1_21 = var_1_15;
		} else {
			var_1_21 = var_1_14;
		}
	} else {
		var_1_21 = var_1_15;
	}


	// From: Req7Batch71100_1loop
	signed long int stepLocal_4 = abs (var_1_5);
	if ((- 1.2f) >= (var_1_7 - var_1_23)) {
		if (stepLocal_4 < 128) {
			var_1_22 = (! var_1_18);
		} else {
			var_1_22 = var_1_18;
		}
	} else {
		var_1_22 = var_1_18;
	}


	// From: Req12Batch71100_1loop
	if (var_1_6 < ((var_1_23 / var_1_30) / var_1_31)) {
		var_1_29 = (max ((var_1_7 + var_1_8) , var_1_9));
	} else {
		var_1_29 = (max (var_1_32 , var_1_7));
	}


	// From: Req13Batch71100_1loop
	var_1_33 = var_1_12;


	// From: Req1Batch71100_1loop
	if (var_1_20 == var_1_6) {
		var_1_1 = (min (var_1_5 , 0));
	}


	// From: Req10Batch71100_1loop
	if (var_1_22) {
		if (var_1_20 <= var_1_7) {
			var_1_27 = (var_1_26 - (var_1_13 + var_1_14));
		} else {
			var_1_27 = (var_1_5 + (min (var_1_1 , var_1_15)));
		}
	} else {
		var_1_27 = var_1_5;
	}


	// From: Req4Batch71100_1loop
	signed char stepLocal_1 = var_1_15;
	unsigned short int stepLocal_0 = var_1_27;
	if (stepLocal_1 > var_1_27) {
		if (stepLocal_0 > var_1_24) {
			if (var_1_29 > (var_1_8 + 50.5)) {
				var_1_16 = var_1_18;
			} else {
				var_1_16 = var_1_18;
			}
		} else {
			var_1_16 = var_1_19;
		}
	} else {
		var_1_16 = var_1_18;
	}


	// From: Req9Batch71100_1loop
	unsigned char stepLocal_5 = var_1_19;
	if (stepLocal_5 || var_1_16) {
		var_1_25 = (var_1_26 - (min (var_1_13 , var_1_14)));
	}


	// From: Req11Batch71100_1loop
	unsigned long int stepLocal_7 = (var_1_24 * var_1_12) & (var_1_26 * var_1_25);
	unsigned char stepLocal_6 = var_1_19;
	if (stepLocal_6 || var_1_22) {
		var_1_28 = (var_1_24 + var_1_12);
	} else {
		if (var_1_8 > (var_1_29 * 9.99999999995E10f)) {
			if (var_1_10 < stepLocal_7) {
				var_1_28 = var_1_24;
			} else {
				var_1_28 = var_1_15;
			}
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 31);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 31);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 32767);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	assume_abort_if_not(var_1_30 != 0.0F);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	assume_abort_if_not(var_1_31 != 0.0F);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854765600e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_16 = var_1_16;
}

int property() {
	return (((((((((((((var_1_20 == var_1_6) ? (var_1_1 == ((unsigned char) (min (var_1_5 , 0)))) : 1) && (var_1_6 == ((float) (min (((var_1_7 - 31.5f) + (max (var_1_8 , 100.5f))) , var_1_9))))) && (last_1_var_1_16 ? (var_1_10 == ((signed char) var_1_12)) : (var_1_10 == ((signed char) (((min (2 , var_1_13)) + (var_1_14 - var_1_15)) - 4))))) && ((var_1_15 > var_1_27) ? ((var_1_27 > var_1_24) ? ((var_1_29 > (var_1_8 + 50.5)) ? (var_1_16 == ((unsigned char) var_1_18)) : (var_1_16 == ((unsigned char) var_1_18))) : (var_1_16 == ((unsigned char) var_1_19))) : (var_1_16 == ((unsigned char) var_1_18)))) && (var_1_20 == ((float) (min (var_1_9 , (max (64.2f , var_1_7))))))) && ((var_1_18 || (var_1_9 > (var_1_8 + var_1_7))) ? (((var_1_5 * var_1_10) < var_1_14) ? (var_1_21 == ((unsigned long int) var_1_15)) : (var_1_21 == ((unsigned long int) var_1_14))) : (var_1_21 == ((unsigned long int) var_1_15)))) && (((- 1.2f) >= (var_1_7 - var_1_23)) ? (((abs (var_1_5)) < 128) ? (var_1_22 == ((unsigned char) (! var_1_18))) : (var_1_22 == ((unsigned char) var_1_18))) : (var_1_22 == ((unsigned char) var_1_18)))) && ((var_1_18 || (! (5 > var_1_13))) ? (var_1_24 == ((unsigned long int) (var_1_5 + var_1_10))) : ((! (var_1_23 > var_1_9)) ? (var_1_24 == ((unsigned long int) var_1_13)) : 1))) && ((var_1_19 || var_1_16) ? (var_1_25 == ((unsigned short int) (var_1_26 - (min (var_1_13 , var_1_14))))) : 1)) && (var_1_22 ? ((var_1_20 <= var_1_7) ? (var_1_27 == ((unsigned short int) (var_1_26 - (var_1_13 + var_1_14)))) : (var_1_27 == ((unsigned short int) (var_1_5 + (min (var_1_1 , var_1_15)))))) : (var_1_27 == ((unsigned short int) var_1_5)))) && ((var_1_19 || var_1_22) ? (var_1_28 == ((signed short int) (var_1_24 + var_1_12))) : ((var_1_8 > (var_1_29 * 9.99999999995E10f)) ? ((var_1_10 < ((var_1_24 * var_1_12) & (var_1_26 * var_1_25))) ? (var_1_28 == ((signed short int) var_1_24)) : (var_1_28 == ((signed short int) var_1_15))) : 1))) && ((var_1_6 < ((var_1_23 / var_1_30) / var_1_31)) ? (var_1_29 == ((double) (max ((var_1_7 + var_1_8) , var_1_9)))) : (var_1_29 == ((double) (max (var_1_32 , var_1_7)))))) && (var_1_33 == ((signed short int) var_1_12))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
