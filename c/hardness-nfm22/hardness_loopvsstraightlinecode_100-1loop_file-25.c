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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch25100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -64;
signed short int var_1_4 = -256;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
double var_1_7 = 256.25;
double var_1_8 = 127.8;
signed short int var_1_10 = -2;
signed short int var_1_11 = 5;
signed short int var_1_12 = 16;
unsigned long int var_1_13 = 1000000000;
signed long int var_1_14 = -100000000;
double var_1_16 = 50.8;
double var_1_17 = 2.2;
double var_1_18 = 2.675;
double var_1_19 = 100.5;
unsigned short int var_1_20 = 46250;
double var_1_21 = 99999999999.75;
double var_1_22 = 32.4;
double var_1_23 = 15.25;
signed short int var_1_24 = -100;
signed char var_1_25 = -1;
unsigned short int var_1_26 = 128;
unsigned long int var_1_27 = 8;
signed short int var_1_28 = -4;
unsigned long int var_1_29 = 100;
unsigned long int var_1_30 = 100;
unsigned long int var_1_31 = 1000000000;
double var_1_32 = 0.0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -64;
signed long int last_1_var_1_14 = -100000000;
double last_1_var_1_16 = 50.8;
signed short int last_1_var_1_24 = -100;
signed short int last_1_var_1_28 = -4;
unsigned long int last_1_var_1_29 = 100;
unsigned long int last_1_var_1_30 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch25100_1loop
	unsigned char stepLocal_2 = var_1_6;
	if (var_1_5 && stepLocal_2) {
		var_1_4 = (min (last_1_var_1_24 , -100));
	} else {
		if ((var_1_7 - var_1_8) > last_1_var_1_16) {
			var_1_4 = (max (((last_1_var_1_30 - last_1_var_1_24) + var_1_10) , (max ((var_1_11 - var_1_12) , 4))));
		} else {
			var_1_4 = (last_1_var_1_30 + (max (var_1_10 , last_1_var_1_24)));
		}
	}


	// From: Req8Batch25100_1loop
	unsigned char stepLocal_6 = (var_1_12 / var_1_25) != (last_1_var_1_1 * 16);
	if (stepLocal_6 && var_1_6) {
		if (var_1_6) {
			var_1_26 = var_1_12;
		} else {
			var_1_26 = last_1_var_1_29;
		}
	} else {
		var_1_26 = last_1_var_1_29;
	}


	// From: Req7Batch25100_1loop
	signed long int stepLocal_5 = var_1_20 / var_1_25;
	if (stepLocal_5 > var_1_26) {
		var_1_24 = var_1_11;
	}


	// From: Req10Batch25100_1loop
	unsigned short int stepLocal_7 = var_1_26;
	if ((last_1_var_1_28 + (- var_1_10)) > stepLocal_7) {
		var_1_28 = ((min (var_1_11 , var_1_12)) - var_1_26);
	}


	// From: Req6Batch25100_1loop
	signed long int stepLocal_4 = 128;
	signed short int stepLocal_3 = var_1_4;
	if (var_1_26 <= stepLocal_3) {
		if ((var_1_26 / (var_1_20 - 25)) >= stepLocal_4) {
			var_1_19 = ((abs (15.25 - var_1_21)) - (var_1_22 + var_1_23));
		} else {
			var_1_19 = var_1_22;
		}
	} else {
		var_1_19 = var_1_22;
	}


	// From: Req13Batch25100_1loop
	if ((~ var_1_11) >= (~ var_1_20)) {
		var_1_32 = var_1_17;
	}


	// From: Req4Batch25100_1loop
	if (var_1_6) {
		var_1_14 = (var_1_4 - last_1_var_1_14);
	} else {
		var_1_14 = ((max (var_1_4 , var_1_12)) - (last_1_var_1_14 + var_1_26));
	}


	// From: Req3Batch25100_1loop
	var_1_13 = (var_1_14 + var_1_12);


	// From: Req9Batch25100_1loop
	if (var_1_5) {
		if ((var_1_12 * var_1_13) >= var_1_11) {
			var_1_27 = var_1_26;
		}
	}


	// From: Req1Batch25100_1loop
	signed long int stepLocal_1 = var_1_14;
	signed long int stepLocal_0 = var_1_14;
	if (! (var_1_14 >= var_1_4)) {
		if (256 != stepLocal_0) {
			var_1_1 = (var_1_4 + var_1_14);
		}
	} else {
		if (var_1_4 >= stepLocal_1) {
			var_1_1 = var_1_14;
		} else {
			var_1_1 = var_1_4;
		}
	}


	// From: Req11Batch25100_1loop
	var_1_29 = (var_1_1 + 4u);


	// From: Req5Batch25100_1loop
	if ((var_1_28 + (var_1_29 + var_1_26)) < var_1_4) {
		var_1_16 = (min (var_1_17 , var_1_18));
	}


	// From: Req12Batch25100_1loop
	unsigned long int stepLocal_9 = var_1_20 - (max (var_1_29 , var_1_12));
	unsigned char stepLocal_8 = var_1_6;
	if (stepLocal_8 || var_1_5) {
		if (stepLocal_9 >= var_1_11) {
			var_1_30 = var_1_29;
		} else {
			var_1_30 = ((max (var_1_20 , var_1_4)) + ((1000000000u + var_1_31) - var_1_29));
		}
	} else {
		var_1_30 = (max (var_1_26 , var_1_29));
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -16383);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65535);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -128);
	assume_abort_if_not(var_1_25 <= 127);
	assume_abort_if_not(var_1_25 != 0);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 536870912);
	assume_abort_if_not(var_1_31 <= 1073741823);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_30 = var_1_30;
}

int property() {
	return (((((((((((((! (var_1_14 >= var_1_4)) ? ((256 != var_1_14) ? (var_1_1 == ((signed long int) (var_1_4 + var_1_14))) : 1) : ((var_1_4 >= var_1_14) ? (var_1_1 == ((signed long int) var_1_14)) : (var_1_1 == ((signed long int) var_1_4)))) && ((var_1_5 && var_1_6) ? (var_1_4 == ((signed short int) (min (last_1_var_1_24 , -100)))) : (((var_1_7 - var_1_8) > last_1_var_1_16) ? (var_1_4 == ((signed short int) (max (((last_1_var_1_30 - last_1_var_1_24) + var_1_10) , (max ((var_1_11 - var_1_12) , 4)))))) : (var_1_4 == ((signed short int) (last_1_var_1_30 + (max (var_1_10 , last_1_var_1_24)))))))) && (var_1_13 == ((unsigned long int) (var_1_14 + var_1_12)))) && (var_1_6 ? (var_1_14 == ((signed long int) (var_1_4 - last_1_var_1_14))) : (var_1_14 == ((signed long int) ((max (var_1_4 , var_1_12)) - (last_1_var_1_14 + var_1_26)))))) && (((var_1_28 + (var_1_29 + var_1_26)) < var_1_4) ? (var_1_16 == ((double) (min (var_1_17 , var_1_18)))) : 1)) && ((var_1_26 <= var_1_4) ? (((var_1_26 / (var_1_20 - 25)) >= 128) ? (var_1_19 == ((double) ((abs (15.25 - var_1_21)) - (var_1_22 + var_1_23)))) : (var_1_19 == ((double) var_1_22))) : (var_1_19 == ((double) var_1_22)))) && (((var_1_20 / var_1_25) > var_1_26) ? (var_1_24 == ((signed short int) var_1_11)) : 1)) && ((((var_1_12 / var_1_25) != (last_1_var_1_1 * 16)) && var_1_6) ? (var_1_6 ? (var_1_26 == ((unsigned short int) var_1_12)) : (var_1_26 == ((unsigned short int) last_1_var_1_29))) : (var_1_26 == ((unsigned short int) last_1_var_1_29)))) && (var_1_5 ? (((var_1_12 * var_1_13) >= var_1_11) ? (var_1_27 == ((unsigned long int) var_1_26)) : 1) : 1)) && (((last_1_var_1_28 + (- var_1_10)) > var_1_26) ? (var_1_28 == ((signed short int) ((min (var_1_11 , var_1_12)) - var_1_26))) : 1)) && (var_1_29 == ((unsigned long int) (var_1_1 + 4u)))) && ((var_1_6 || var_1_5) ? (((var_1_20 - (max (var_1_29 , var_1_12))) >= var_1_11) ? (var_1_30 == ((unsigned long int) var_1_29)) : (var_1_30 == ((unsigned long int) ((max (var_1_20 , var_1_4)) + ((1000000000u + var_1_31) - var_1_29))))) : (var_1_30 == ((unsigned long int) (max (var_1_26 , var_1_29)))))) && (((~ var_1_11) >= (~ var_1_20)) ? (var_1_32 == ((double) var_1_17)) : 1)
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
