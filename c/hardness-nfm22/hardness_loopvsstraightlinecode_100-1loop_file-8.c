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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch8100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 256.8;
signed long int var_1_4 = -5;
float var_1_5 = 7.875;
float var_1_6 = 99.04;
signed long int var_1_7 = -2;
signed long int var_1_8 = 1227169815;
signed short int var_1_11 = 4;
unsigned char var_1_12 = 1;
double var_1_14 = -0.5;
double var_1_15 = 7.5;
unsigned char var_1_16 = 1;
double var_1_17 = 25.2;
double var_1_18 = 256.4;
signed long int var_1_19 = 4;
unsigned char var_1_20 = 1;
unsigned char var_1_22 = 50;
float var_1_23 = 15.4;
signed short int var_1_24 = -32;
signed short int var_1_25 = 20388;
signed long int var_1_26 = 0;
double var_1_27 = 0.6;
unsigned char var_1_28 = 128;
unsigned char var_1_29 = 5;
signed char var_1_30 = -2;
signed char var_1_31 = 5;
signed char var_1_32 = 10;
signed char var_1_33 = 4;
signed char var_1_34 = 8;

// Calibration values

// Last'ed variables
float last_1_var_1_1 = 256.8;
unsigned char last_1_var_1_20 = 1;
float last_1_var_1_23 = 15.4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch8100_1loop
	if (var_1_18 < last_1_var_1_23) {
		if (var_1_12) {
			if ((last_1_var_1_1 + var_1_6) != last_1_var_1_1) {
				var_1_20 = var_1_22;
			} else {
				var_1_20 = var_1_22;
			}
		} else {
			var_1_20 = var_1_22;
		}
	}


	// From: Req3Batch8100_1loop
	if (var_1_8 > var_1_4) {
		var_1_11 = 0;
	} else {
		if (var_1_8 <= (last_1_var_1_20 + (last_1_var_1_20 / var_1_4))) {
			if (var_1_12) {
				var_1_11 = last_1_var_1_20;
			} else {
				var_1_11 = last_1_var_1_20;
			}
		} else {
			var_1_11 = last_1_var_1_20;
		}
	}


	// From: Req10Batch8100_1loop
	if ((var_1_22 + (var_1_20 / var_1_24)) <= var_1_20) {
		var_1_27 = (10000.2 + (abs (max (var_1_17 , var_1_18))));
	} else {
		var_1_27 = (var_1_5 - var_1_6);
	}


	// From: Req12Batch8100_1loop
	signed long int stepLocal_5 = 10000000;
	if ((var_1_5 - var_1_6) >= var_1_27) {
		if (stepLocal_5 > var_1_11) {
			var_1_30 = (max ((var_1_31 + var_1_32) , var_1_33));
		} else {
			var_1_30 = var_1_34;
		}
	}


	// From: Req11Batch8100_1loop
	signed char stepLocal_4 = var_1_30;
	if (((var_1_30 + var_1_20) / var_1_4) > stepLocal_4) {
		var_1_28 = (min (var_1_22 , var_1_29));
	}


	// From: Req6Batch8100_1loop
	var_1_19 = (var_1_28 + (var_1_30 + var_1_11));


	// From: Req8Batch8100_1loop
	if (var_1_20 < ((8 << var_1_19) / (min (var_1_4 , var_1_24)))) {
		if ((256 - (var_1_25 - var_1_22)) >= var_1_11) {
			var_1_23 = (min ((var_1_5 - var_1_6) , var_1_17));
		}
	}


	// From: Req2Batch8100_1loop
	unsigned char stepLocal_1 = var_1_4 >= var_1_11;
	if (((var_1_6 - var_1_5) < var_1_23) || stepLocal_1) {
		var_1_7 = ((var_1_8 - var_1_28) - var_1_28);
	} else {
		var_1_7 = -32;
	}


	// From: Req1Batch8100_1loop
	signed long int stepLocal_0 = var_1_7 % var_1_4;
	if (var_1_19 == stepLocal_0) {
		var_1_1 = (var_1_5 - var_1_6);
	}


	// From: Req4Batch8100_1loop
	if (var_1_12) {
		if (((var_1_19 + var_1_20) * var_1_20) == ((var_1_8 + var_1_4) * var_1_20)) {
			var_1_14 = var_1_6;
		} else {
			var_1_14 = var_1_6;
		}
	} else {
		var_1_14 = var_1_6;
	}


	// From: Req9Batch8100_1loop
	if (1.000000004E8 == var_1_23) {
		var_1_26 = (64 + var_1_20);
	} else {
		var_1_26 = (abs (-4));
	}


	// From: Req5Batch8100_1loop
	unsigned char stepLocal_3 = var_1_16;
	signed long int stepLocal_2 = var_1_8;
	if (stepLocal_2 < (var_1_26 ^ var_1_30)) {
		if ((! var_1_12) || stepLocal_3) {
			var_1_15 = (min (var_1_6 , (var_1_17 + var_1_18)));
		} else {
			var_1_15 = var_1_17;
		}
	} else {
		var_1_15 = var_1_17;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 1073741822);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -461168.6018427382800e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32768);
	assume_abort_if_not(var_1_24 <= 32767);
	assume_abort_if_not(var_1_24 != 0);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 16383);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -63);
	assume_abort_if_not(var_1_31 <= 63);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -63);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -127);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -127);
	assume_abort_if_not(var_1_34 <= 126);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_23 = var_1_23;
}

int property() {
	return ((((((((((((var_1_19 == (var_1_7 % var_1_4)) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : 1) && ((((var_1_6 - var_1_5) < var_1_23) || (var_1_4 >= var_1_11)) ? (var_1_7 == ((signed long int) ((var_1_8 - var_1_28) - var_1_28))) : (var_1_7 == ((signed long int) -32)))) && ((var_1_8 > var_1_4) ? (var_1_11 == ((signed short int) 0)) : ((var_1_8 <= (last_1_var_1_20 + (last_1_var_1_20 / var_1_4))) ? (var_1_12 ? (var_1_11 == ((signed short int) last_1_var_1_20)) : (var_1_11 == ((signed short int) last_1_var_1_20))) : (var_1_11 == ((signed short int) last_1_var_1_20))))) && (var_1_12 ? ((((var_1_19 + var_1_20) * var_1_20) == ((var_1_8 + var_1_4) * var_1_20)) ? (var_1_14 == ((double) var_1_6)) : (var_1_14 == ((double) var_1_6))) : (var_1_14 == ((double) var_1_6)))) && ((var_1_8 < (var_1_26 ^ var_1_30)) ? (((! var_1_12) || var_1_16) ? (var_1_15 == ((double) (min (var_1_6 , (var_1_17 + var_1_18))))) : (var_1_15 == ((double) var_1_17))) : (var_1_15 == ((double) var_1_17)))) && (var_1_19 == ((signed long int) (var_1_28 + (var_1_30 + var_1_11))))) && ((var_1_18 < last_1_var_1_23) ? (var_1_12 ? (((last_1_var_1_1 + var_1_6) != last_1_var_1_1) ? (var_1_20 == ((unsigned char) var_1_22)) : (var_1_20 == ((unsigned char) var_1_22))) : (var_1_20 == ((unsigned char) var_1_22))) : 1)) && ((var_1_20 < ((8 << var_1_19) / (min (var_1_4 , var_1_24)))) ? (((256 - (var_1_25 - var_1_22)) >= var_1_11) ? (var_1_23 == ((float) (min ((var_1_5 - var_1_6) , var_1_17)))) : 1) : 1)) && ((1.000000004E8 == var_1_23) ? (var_1_26 == ((signed long int) (64 + var_1_20))) : (var_1_26 == ((signed long int) (abs (-4)))))) && (((var_1_22 + (var_1_20 / var_1_24)) <= var_1_20) ? (var_1_27 == ((double) (10000.2 + (abs (max (var_1_17 , var_1_18)))))) : (var_1_27 == ((double) (var_1_5 - var_1_6))))) && ((((var_1_30 + var_1_20) / var_1_4) > var_1_30) ? (var_1_28 == ((unsigned char) (min (var_1_22 , var_1_29)))) : 1)) && (((var_1_5 - var_1_6) >= var_1_27) ? ((10000000 > var_1_11) ? (var_1_30 == ((signed char) (max ((var_1_31 + var_1_32) , var_1_33)))) : (var_1_30 == ((signed char) var_1_34))) : 1)
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
