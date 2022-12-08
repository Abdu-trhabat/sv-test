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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch43100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
unsigned char var_1_4 = 10;
unsigned char var_1_5 = 4;
unsigned char var_1_6 = 1;
float var_1_7 = 127.25;
float var_1_8 = 128.5;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed long int var_1_13 = -10;
unsigned char var_1_14 = 1;
signed char var_1_16 = -1;
signed char var_1_17 = -5;
signed char var_1_18 = 2;
double var_1_19 = 256.7;
double var_1_20 = 256.5;
double var_1_21 = 5.058;
double var_1_22 = 2.4;
double var_1_23 = 5.875;
signed long int var_1_24 = -128;
unsigned long int var_1_25 = 128;
unsigned char var_1_26 = 128;
unsigned long int var_1_27 = 4189380979;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned long int var_1_30 = 2;
unsigned long int var_1_31 = 1701266831;
unsigned long int var_1_32 = 1169870883;
double var_1_33 = 4.3;
double var_1_34 = 7.25;
unsigned short int var_1_35 = 32;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
unsigned char last_1_var_1_6 = 1;
signed char last_1_var_1_16 = -1;
double last_1_var_1_19 = 256.7;
signed long int last_1_var_1_24 = -128;
unsigned long int last_1_var_1_25 = 128;
unsigned long int last_1_var_1_30 = 2;
double last_1_var_1_33 = 4.3;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch43100_1loop
	if (last_1_var_1_6 || last_1_var_1_6) {
		if ((last_1_var_1_16 | (max (var_1_5 , 128))) < last_1_var_1_25) {
			var_1_14 = (var_1_11 || var_1_12);
		}
	}


	// From: Req9Batch43100_1loop
	unsigned long int stepLocal_6 = (var_1_27 - last_1_var_1_1) - var_1_4;
	if (stepLocal_6 > (last_1_var_1_30 & last_1_var_1_25)) {
		var_1_26 = (var_1_4 + 4);
	} else {
		var_1_26 = (4 + (abs (var_1_4)));
	}


	// From: Req10Batch43100_1loop
	if (last_1_var_1_33 > last_1_var_1_33) {
		var_1_28 = (! ((var_1_4 != last_1_var_1_24) || var_1_29));
	}


	// From: Req11Batch43100_1loop
	var_1_30 = ((min ((var_1_31 + var_1_32) , (3305479224u - var_1_5))) - (abs (var_1_4)));


	// From: Req12Batch43100_1loop
	var_1_33 = var_1_20;


	// From: Req13Batch43100_1loop
	var_1_34 = var_1_22;


	// From: Req14Batch43100_1loop
	var_1_35 = var_1_30;


	// From: Req2Batch43100_1loop
	if (((var_1_7 + 100000.5f) - var_1_8) > (var_1_33 + var_1_34)) {
		if (var_1_8 > var_1_33) {
			var_1_6 = (var_1_11 || var_1_12);
		} else {
			var_1_6 = var_1_11;
		}
	} else {
		var_1_6 = 0;
	}


	// From: Req5Batch43100_1loop
	unsigned char stepLocal_2 = var_1_14;
	if (stepLocal_2 && var_1_6) {
		var_1_16 = (min ((var_1_17 + var_1_18) , -5));
	} else {
		if (var_1_28) {
			var_1_16 = var_1_17;
		}
	}


	// From: Req7Batch43100_1loop
	if (var_1_18 <= (~ var_1_4)) {
		if (var_1_28) {
			var_1_24 = (min (256 , ((var_1_26 + var_1_18) + (min (last_1_var_1_24 , var_1_5)))));
		} else {
			var_1_24 = -5;
		}
	} else {
		var_1_24 = var_1_18;
	}


	// From: Req1Batch43100_1loop
	unsigned char stepLocal_0 = var_1_14;
	if (var_1_28 && stepLocal_0) {
		var_1_1 = (var_1_4 + 5);
	} else {
		var_1_1 = (abs (var_1_5));
	}


	// From: Req3Batch43100_1loop
	unsigned char stepLocal_1 = var_1_5;
	if (var_1_7 > var_1_33) {
		if (stepLocal_1 < var_1_26) {
			var_1_13 = (var_1_4 - 1);
		} else {
			var_1_13 = var_1_5;
		}
	} else {
		var_1_13 = var_1_4;
	}


	// From: Req6Batch43100_1loop
	signed char stepLocal_3 = var_1_18;
	if ((var_1_16 ^ 1) >= stepLocal_3) {
		if (var_1_28) {
			if (var_1_8 <= (max (var_1_33 , last_1_var_1_19))) {
				var_1_19 = (max (var_1_7 , ((var_1_20 + var_1_21) + (var_1_22 + var_1_23))));
			} else {
				var_1_19 = var_1_21;
			}
		}
	}


	// From: Req8Batch43100_1loop
	signed long int stepLocal_5 = var_1_13;
	signed long int stepLocal_4 = var_1_24 | var_1_35;
	if ((10000 / 64) >= stepLocal_4) {
		var_1_25 = (max (var_1_5 , var_1_4));
	} else {
		if (stepLocal_5 < (abs (var_1_4))) {
			var_1_25 = var_1_26;
		} else {
			var_1_25 = var_1_26;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427387900e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -230584.3009213691390e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691390e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -230584.3009213691390e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -230584.3009213691390e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -230584.3009213691390e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691390e+12F && var_1_23 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 3221225471);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 1073741823);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 1073741824);
	assume_abort_if_not(var_1_32 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_33 = var_1_33;
}

int property() {
	return ((((((((((((((var_1_28 && var_1_14) ? (var_1_1 == ((unsigned char) (var_1_4 + 5))) : (var_1_1 == ((unsigned char) (abs (var_1_5))))) && ((((var_1_7 + 100000.5f) - var_1_8) > (var_1_33 + var_1_34)) ? ((var_1_8 > var_1_33) ? (var_1_6 == ((unsigned char) (var_1_11 || var_1_12))) : (var_1_6 == ((unsigned char) var_1_11))) : (var_1_6 == ((unsigned char) 0)))) && ((var_1_7 > var_1_33) ? ((var_1_5 < var_1_26) ? (var_1_13 == ((signed long int) (var_1_4 - 1))) : (var_1_13 == ((signed long int) var_1_5))) : (var_1_13 == ((signed long int) var_1_4)))) && ((last_1_var_1_6 || last_1_var_1_6) ? (((last_1_var_1_16 | (max (var_1_5 , 128))) < last_1_var_1_25) ? (var_1_14 == ((unsigned char) (var_1_11 || var_1_12))) : 1) : 1)) && ((var_1_14 && var_1_6) ? (var_1_16 == ((signed char) (min ((var_1_17 + var_1_18) , -5)))) : (var_1_28 ? (var_1_16 == ((signed char) var_1_17)) : 1))) && (((var_1_16 ^ 1) >= var_1_18) ? (var_1_28 ? ((var_1_8 <= (max (var_1_33 , last_1_var_1_19))) ? (var_1_19 == ((double) (max (var_1_7 , ((var_1_20 + var_1_21) + (var_1_22 + var_1_23)))))) : (var_1_19 == ((double) var_1_21))) : 1) : 1)) && ((var_1_18 <= (~ var_1_4)) ? (var_1_28 ? (var_1_24 == ((signed long int) (min (256 , ((var_1_26 + var_1_18) + (min (last_1_var_1_24 , var_1_5))))))) : (var_1_24 == ((signed long int) -5))) : (var_1_24 == ((signed long int) var_1_18)))) && (((10000 / 64) >= (var_1_24 | var_1_35)) ? (var_1_25 == ((unsigned long int) (max (var_1_5 , var_1_4)))) : ((var_1_13 < (abs (var_1_4))) ? (var_1_25 == ((unsigned long int) var_1_26)) : (var_1_25 == ((unsigned long int) var_1_26))))) && ((((var_1_27 - last_1_var_1_1) - var_1_4) > (last_1_var_1_30 & last_1_var_1_25)) ? (var_1_26 == ((unsigned char) (var_1_4 + 4))) : (var_1_26 == ((unsigned char) (4 + (abs (var_1_4))))))) && ((last_1_var_1_33 > last_1_var_1_33) ? (var_1_28 == ((unsigned char) (! ((var_1_4 != last_1_var_1_24) || var_1_29)))) : 1)) && (var_1_30 == ((unsigned long int) ((min ((var_1_31 + var_1_32) , (3305479224u - var_1_5))) - (abs (var_1_4)))))) && (var_1_33 == ((double) var_1_20))) && (var_1_34 == ((double) var_1_22))) && (var_1_35 == ((unsigned short int) var_1_30))
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
