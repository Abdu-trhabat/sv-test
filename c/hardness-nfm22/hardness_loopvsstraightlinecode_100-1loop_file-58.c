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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch58100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 1;
unsigned char var_1_2 = 0;
unsigned char var_1_4 = 64;
signed long int var_1_6 = -1;
signed short int var_1_7 = 8;
unsigned long int var_1_11 = 1000;
signed char var_1_12 = -128;
unsigned long int var_1_13 = 3229788856;
signed char var_1_14 = 16;
signed char var_1_15 = -50;
signed long int var_1_16 = -8;
unsigned long int var_1_17 = 128;
float var_1_20 = 31.2;
float var_1_21 = 7.8;
float var_1_22 = 4.2;
float var_1_23 = 4.75;
float var_1_24 = 32.75;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 32;
unsigned char var_1_27 = 50;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 10;
float var_1_30 = 32.48;
double var_1_31 = 255.2;
signed char var_1_32 = 8;
signed char var_1_33 = -32;
signed char var_1_34 = -8;
signed char var_1_35 = 2;
signed char var_1_36 = 1;
signed char var_1_37 = 32;
signed char var_1_38 = 4;
signed char var_1_39 = -1;
signed char var_1_40 = 8;
float var_1_41 = 127.5;
unsigned short int var_1_42 = 1;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 1;
signed short int last_1_var_1_7 = 8;
signed long int last_1_var_1_16 = -8;
float last_1_var_1_20 = 31.2;
signed char last_1_var_1_32 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch58100_1loop
	if (var_1_25) {
		if (var_1_15 > (last_1_var_1_7 * last_1_var_1_32)) {
			if (! var_1_2) {
				var_1_32 = (var_1_33 + var_1_34);
			} else {
				var_1_32 = (abs (var_1_34 + var_1_33));
			}
		} else {
			var_1_32 = (var_1_35 - var_1_36);
		}
	} else {
		if (last_1_var_1_20 > (min (var_1_22 , 15.615f))) {
			var_1_32 = (var_1_34 + (abs (var_1_37 - var_1_38)));
		} else {
			if (var_1_2) {
				var_1_32 = (var_1_37 + var_1_38);
			} else {
				if (last_1_var_1_16 == var_1_29) {
					if ((- last_1_var_1_16) >= var_1_4) {
						var_1_32 = ((var_1_39 + var_1_40) + var_1_38);
					}
				} else {
					var_1_32 = var_1_35;
				}
			}
		}
	}


	// From: Req3Batch58100_1loop
	if (var_1_2) {
		var_1_11 = (var_1_4 + last_1_var_1_1);
	}


	// From: Req7Batch58100_1loop
	if (var_1_2) {
		var_1_20 = (min ((var_1_21 - var_1_22) , (var_1_23 - var_1_24)));
	} else {
		if (((var_1_4 - var_1_11) == var_1_15) || var_1_25) {
			var_1_20 = var_1_22;
		}
	}


	// From: Req8Batch58100_1loop
	if (var_1_25) {
		if (var_1_2) {
			var_1_26 = (max (var_1_4 , var_1_27));
		} else {
			var_1_26 = ((min (4 , var_1_4)) + (max (var_1_28 , var_1_29)));
		}
	}


	// From: Req9Batch58100_1loop
	if (var_1_2 && var_1_25) {
		var_1_30 = (max (var_1_21 , var_1_23));
	}


	// From: Req10Batch58100_1loop
	var_1_31 = (min ((min (var_1_24 , var_1_22)) , (var_1_23 - var_1_21)));


	// From: Req12Batch58100_1loop
	var_1_41 = var_1_22;


	// From: Req13Batch58100_1loop
	var_1_42 = 256;


	// From: Req1Batch58100_1loop
	signed long int stepLocal_0 = var_1_32 / (8 + var_1_4);
	if (stepLocal_0 > (max (-256 , (var_1_11 / var_1_6)))) {
		var_1_1 = var_1_32;
	} else {
		var_1_1 = 2;
	}


	// From: Req4Batch58100_1loop
	unsigned long int stepLocal_1 = min (var_1_42 , (var_1_13 - var_1_26));
	if (var_1_11 <= stepLocal_1) {
		var_1_12 = (max (var_1_14 , var_1_15));
	}


	// From: Req2Batch58100_1loop
	if (var_1_2) {
		var_1_7 = (var_1_12 + ((max (var_1_4 , var_1_12)) + (var_1_12 + var_1_12)));
	} else {
		var_1_7 = (var_1_12 + var_1_12);
	}


	// From: Req6Batch58100_1loop
	unsigned char stepLocal_3 = var_1_2;
	if (stepLocal_3 || ((max (var_1_11 , var_1_32)) < (min (var_1_15 , var_1_7)))) {
		var_1_17 = (max (1u , (var_1_4 + var_1_32)));
	} else {
		var_1_17 = var_1_1;
	}


	// From: Req5Batch58100_1loop
	unsigned char stepLocal_2 = var_1_26;
	if (var_1_6 >= stepLocal_2) {
		var_1_16 = (min (var_1_26 , var_1_17));
	} else {
		var_1_16 = (32 + var_1_42);
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 2147483647);
	assume_abort_if_not(var_1_13 <= 4294967295);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -127);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 254);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -63);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -63);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -1);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -31);
	assume_abort_if_not(var_1_39 <= 32);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -31);
	assume_abort_if_not(var_1_40 <= 31);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_32 = var_1_32;
}

int property() {
	return ((((((((((((((var_1_32 / (8 + var_1_4)) > (max (-256 , (var_1_11 / var_1_6)))) ? (var_1_1 == ((unsigned short int) var_1_32)) : (var_1_1 == ((unsigned short int) 2))) && (var_1_2 ? (var_1_7 == ((signed short int) (var_1_12 + ((max (var_1_4 , var_1_12)) + (var_1_12 + var_1_12))))) : (var_1_7 == ((signed short int) (var_1_12 + var_1_12))))) && (var_1_2 ? (var_1_11 == ((unsigned long int) (var_1_4 + last_1_var_1_1))) : 1)) && ((var_1_11 <= (min (var_1_42 , (var_1_13 - var_1_26)))) ? (var_1_12 == ((signed char) (max (var_1_14 , var_1_15)))) : 1)) && ((var_1_6 >= var_1_26) ? (var_1_16 == ((signed long int) (min (var_1_26 , var_1_17)))) : (var_1_16 == ((signed long int) (32 + var_1_42))))) && ((var_1_2 || ((max (var_1_11 , var_1_32)) < (min (var_1_15 , var_1_7)))) ? (var_1_17 == ((unsigned long int) (max (1u , (var_1_4 + var_1_32))))) : (var_1_17 == ((unsigned long int) var_1_1)))) && (var_1_2 ? (var_1_20 == ((float) (min ((var_1_21 - var_1_22) , (var_1_23 - var_1_24))))) : ((((var_1_4 - var_1_11) == var_1_15) || var_1_25) ? (var_1_20 == ((float) var_1_22)) : 1))) && (var_1_25 ? (var_1_2 ? (var_1_26 == ((unsigned char) (max (var_1_4 , var_1_27)))) : (var_1_26 == ((unsigned char) ((min (4 , var_1_4)) + (max (var_1_28 , var_1_29)))))) : 1)) && ((var_1_2 && var_1_25) ? (var_1_30 == ((float) (max (var_1_21 , var_1_23)))) : 1)) && (var_1_31 == ((double) (min ((min (var_1_24 , var_1_22)) , (var_1_23 - var_1_21)))))) && (var_1_25 ? ((var_1_15 > (last_1_var_1_7 * last_1_var_1_32)) ? ((! var_1_2) ? (var_1_32 == ((signed char) (var_1_33 + var_1_34))) : (var_1_32 == ((signed char) (abs (var_1_34 + var_1_33))))) : (var_1_32 == ((signed char) (var_1_35 - var_1_36)))) : ((last_1_var_1_20 > (min (var_1_22 , 15.615f))) ? (var_1_32 == ((signed char) (var_1_34 + (abs (var_1_37 - var_1_38))))) : (var_1_2 ? (var_1_32 == ((signed char) (var_1_37 + var_1_38))) : ((last_1_var_1_16 == var_1_29) ? (((- last_1_var_1_16) >= var_1_4) ? (var_1_32 == ((signed char) ((var_1_39 + var_1_40) + var_1_38))) : 1) : (var_1_32 == ((signed char) var_1_35))))))) && (var_1_41 == ((float) var_1_22))) && (var_1_42 == ((unsigned short int) 256))
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
