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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch87100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 32;
signed long int var_1_5 = 256;
signed long int var_1_6 = -1;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 16;
unsigned short int var_1_9 = 2;
unsigned char var_1_10 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
float var_1_17 = 99999999.1;
unsigned short int var_1_18 = 32;
float var_1_20 = 9.2;
float var_1_21 = 24.8;
signed short int var_1_22 = -16;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed short int var_1_25 = -16;
unsigned char var_1_26 = 16;
unsigned short int var_1_27 = 2;
unsigned long int var_1_28 = 50;
signed char var_1_29 = -10;
signed char var_1_31 = 1;
signed char var_1_32 = 0;
signed char var_1_33 = 64;
signed char var_1_34 = 32;
signed char var_1_35 = 64;
signed char var_1_36 = 8;
signed char var_1_37 = 4;
float var_1_38 = 199.5;
signed char var_1_39 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_23 = 0;
unsigned char last_1_var_1_24 = 0;
signed char last_1_var_1_29 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch87100_1loop
	unsigned char stepLocal_1 = last_1_var_1_23;
	if (last_1_var_1_23) {
		if (last_1_var_1_24 || stepLocal_1) {
			var_1_10 = var_1_14;
		} else {
			var_1_10 = (var_1_15 || var_1_16);
		}
	} else {
		var_1_10 = var_1_15;
	}


	// From: Req12Batch87100_1loop
	signed long int stepLocal_9 = var_1_6;
	unsigned char stepLocal_8 = 32.5 < 999.4;
	unsigned char stepLocal_7 = var_1_37 < -4;
	unsigned char stepLocal_6 = var_1_7;
	if (stepLocal_9 != (var_1_8 + (last_1_var_1_29 / var_1_7))) {
		if (stepLocal_8 && var_1_10) {
			if (last_1_var_1_29 < stepLocal_6) {
				var_1_29 = (var_1_31 - var_1_32);
			} else {
				var_1_29 = (min (var_1_32 , var_1_31));
			}
		} else {
			var_1_29 = ((var_1_33 - var_1_34) - (var_1_35 - (max (var_1_36 , var_1_37))));
		}
	} else {
		if (var_1_10 || stepLocal_7) {
			var_1_29 = (abs (var_1_34));
		} else {
			var_1_29 = (max ((min (var_1_37 , var_1_36)) , var_1_33));
		}
	}


	// From: Req5Batch87100_1loop
	var_1_22 = (var_1_29 - (30604 - var_1_8));


	// From: Req6Batch87100_1loop
	if (var_1_16) {
		var_1_23 = (! (! 0));
	}


	// From: Req9Batch87100_1loop
	var_1_26 = (min ((abs (var_1_7)) , (abs (50))));


	// From: Req14Batch87100_1loop
	var_1_39 = var_1_36;


	// From: Req2Batch87100_1loop
	var_1_9 = ((min (var_1_8 , var_1_39)) + var_1_7);


	// From: Req11Batch87100_1loop
	signed long int stepLocal_5 = var_1_5 / -100;
	if ((var_1_9 + var_1_18) < stepLocal_5) {
		var_1_28 = ((max (var_1_18 , var_1_7)) + var_1_8);
	}


	// From: Req10Batch87100_1loop
	var_1_27 = (var_1_8 + (max (var_1_7 , (32 + var_1_28))));


	// From: Req4Batch87100_1loop
	signed long int stepLocal_3 = var_1_39 / (var_1_7 + var_1_18);
	signed long int stepLocal_2 = var_1_26 - var_1_27;
	if (stepLocal_3 < var_1_22) {
		if ((~ 5) < stepLocal_2) {
			var_1_17 = (var_1_20 + var_1_21);
		} else {
			var_1_17 = var_1_21;
		}
	} else {
		var_1_17 = var_1_20;
	}


	// From: Req13Batch87100_1loop
	signed short int stepLocal_11 = var_1_22;
	unsigned short int stepLocal_10 = var_1_18;
	if ((var_1_34 + (var_1_28 + var_1_8)) <= stepLocal_10) {
		if ((var_1_28 + (5u + var_1_28)) <= stepLocal_11) {
			var_1_38 = var_1_21;
		} else {
			var_1_38 = var_1_21;
		}
	} else {
		var_1_38 = var_1_20;
	}


	// From: Req8Batch87100_1loop
	if (var_1_38 > (var_1_21 + var_1_20)) {
		var_1_25 = (min (var_1_8 , var_1_28));
	}


	// From: Req7Batch87100_1loop
	unsigned short int stepLocal_4 = var_1_9;
	if (stepLocal_4 <= (var_1_25 * var_1_8)) {
		var_1_24 = ((var_1_25 >= var_1_7) || var_1_14);
	}


	// From: Req1Batch87100_1loop
	signed long int stepLocal_0 = var_1_25 + var_1_22;
	if (stepLocal_0 == (var_1_22 / (min (var_1_5 , var_1_6)))) {
		var_1_1 = (var_1_7 - var_1_8);
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 127);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -1);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 62);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 63);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
}



void updateLastVariables() {
	last_1_var_1_23 = var_1_23;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_29 = var_1_29;
}

int property() {
	return (((((((((((((((var_1_25 + var_1_22) == (var_1_22 / (min (var_1_5 , var_1_6)))) ? (var_1_1 == ((unsigned char) (var_1_7 - var_1_8))) : 1) && (var_1_9 == ((unsigned short int) ((min (var_1_8 , var_1_39)) + var_1_7)))) && (last_1_var_1_23 ? ((last_1_var_1_24 || last_1_var_1_23) ? (var_1_10 == ((unsigned char) var_1_14)) : (var_1_10 == ((unsigned char) (var_1_15 || var_1_16)))) : (var_1_10 == ((unsigned char) var_1_15)))) && (((var_1_39 / (var_1_7 + var_1_18)) < var_1_22) ? (((~ 5) < (var_1_26 - var_1_27)) ? (var_1_17 == ((float) (var_1_20 + var_1_21))) : (var_1_17 == ((float) var_1_21))) : (var_1_17 == ((float) var_1_20)))) && (var_1_22 == ((signed short int) (var_1_29 - (30604 - var_1_8))))) && (var_1_16 ? (var_1_23 == ((unsigned char) (! (! 0)))) : 1)) && ((var_1_9 <= (var_1_25 * var_1_8)) ? (var_1_24 == ((unsigned char) ((var_1_25 >= var_1_7) || var_1_14))) : 1)) && ((var_1_38 > (var_1_21 + var_1_20)) ? (var_1_25 == ((signed short int) (min (var_1_8 , var_1_28)))) : 1)) && (var_1_26 == ((unsigned char) (min ((abs (var_1_7)) , (abs (50))))))) && (var_1_27 == ((unsigned short int) (var_1_8 + (max (var_1_7 , (32 + var_1_28))))))) && (((var_1_9 + var_1_18) < (var_1_5 / -100)) ? (var_1_28 == ((unsigned long int) ((max (var_1_18 , var_1_7)) + var_1_8))) : 1)) && ((var_1_6 != (var_1_8 + (last_1_var_1_29 / var_1_7))) ? (((32.5 < 999.4) && var_1_10) ? ((last_1_var_1_29 < var_1_7) ? (var_1_29 == ((signed char) (var_1_31 - var_1_32))) : (var_1_29 == ((signed char) (min (var_1_32 , var_1_31))))) : (var_1_29 == ((signed char) ((var_1_33 - var_1_34) - (var_1_35 - (max (var_1_36 , var_1_37))))))) : ((var_1_10 || (var_1_37 < -4)) ? (var_1_29 == ((signed char) (abs (var_1_34)))) : (var_1_29 == ((signed char) (max ((min (var_1_37 , var_1_36)) , var_1_33))))))) && (((var_1_34 + (var_1_28 + var_1_8)) <= var_1_18) ? (((var_1_28 + (5u + var_1_28)) <= var_1_22) ? (var_1_38 == ((float) var_1_21)) : (var_1_38 == ((float) var_1_21))) : (var_1_38 == ((float) var_1_20)))) && (var_1_39 == ((signed char) var_1_36))
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
