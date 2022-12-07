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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch88100_1loop.c", 13, "reach_error"); }
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
float var_1_9 = 7.375;
float var_1_11 = 0.6;
float var_1_12 = 255.6;
unsigned char var_1_13 = 0;
float var_1_14 = 5.875;
signed long int var_1_15 = -128;
unsigned long int var_1_16 = 8;
unsigned long int var_1_18 = 1477246099;
unsigned long int var_1_19 = 1364989049;
unsigned char var_1_20 = 128;
unsigned char var_1_21 = 1;
float var_1_22 = 10000000.4;
float var_1_24 = 100.875;
signed short int var_1_25 = -4;
unsigned char var_1_26 = 32;
signed char var_1_27 = 16;
signed char var_1_28 = -64;
signed char var_1_29 = 2;
signed char var_1_30 = -2;
unsigned short int var_1_31 = 8;
unsigned short int var_1_32 = 25791;
float var_1_34 = 25.3;
float var_1_35 = 4.5;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
double var_1_39 = 256.5;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 128;
float last_1_var_1_9 = 7.375;
signed long int last_1_var_1_15 = -128;
unsigned long int last_1_var_1_16 = 8;
unsigned char last_1_var_1_20 = 128;
signed short int last_1_var_1_25 = -4;
signed char last_1_var_1_27 = 16;
unsigned char last_1_var_1_36 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch88100_1loop
	unsigned char stepLocal_6 = var_1_21;
	if (var_1_24 <= (max (last_1_var_1_9 , var_1_14))) {
		if (stepLocal_6 != ((last_1_var_1_20 + last_1_var_1_27) / var_1_26)) {
			var_1_25 = last_1_var_1_20;
		} else {
			var_1_25 = last_1_var_1_16;
		}
	} else {
		var_1_25 = last_1_var_1_27;
	}


	// From: Req8Batch88100_1loop
	signed long int stepLocal_7 = last_1_var_1_15 - var_1_21;
	if (! last_1_var_1_36) {
		if (last_1_var_1_1 >= stepLocal_7) {
			var_1_27 = var_1_28;
		} else {
			var_1_27 = (min (((abs (-2)) - var_1_29) , (abs (var_1_30))));
		}
	} else {
		var_1_27 = var_1_29;
	}


	// From: Req5Batch88100_1loop
	unsigned char stepLocal_3 = var_1_12 >= var_1_14;
	if (var_1_12 <= (31.8f / 127.5f)) {
		if (stepLocal_3 && last_1_var_1_36) {
			var_1_20 = var_1_21;
		}
	}


	// From: Req9Batch88100_1loop
	unsigned long int stepLocal_8 = 64u / var_1_18;
	if (((var_1_26 + var_1_29) * (var_1_21 & var_1_20)) >= stepLocal_8) {
		var_1_31 = (var_1_21 + (var_1_32 - var_1_20));
	}


	// From: Req10Batch88100_1loop
	var_1_34 = (var_1_35 - 10.6f);


	// From: Req12Batch88100_1loop
	var_1_39 = var_1_35;


	// From: Req4Batch88100_1loop
	signed long int stepLocal_2 = last_1_var_1_27;
	if ((last_1_var_1_25 + last_1_var_1_20) == stepLocal_2) {
		var_1_16 = ((var_1_18 + var_1_19) - last_1_var_1_20);
	} else {
		var_1_16 = last_1_var_1_20;
	}


	// From: Req11Batch88100_1loop
	signed short int stepLocal_10 = var_1_25;
	unsigned long int stepLocal_9 = var_1_16;
	if (8 <= stepLocal_9) {
		if (var_1_19 > stepLocal_10) {
			var_1_36 = (var_1_37 || (var_1_13 && var_1_38));
		} else {
			var_1_36 = (! (! var_1_37));
		}
	}


	// From: Req2Batch88100_1loop
	signed long int stepLocal_1 = -2;
	if (var_1_36) {
		if (stepLocal_1 <= var_1_20) {
			if ((var_1_34 + 1.2f) == (var_1_11 - var_1_12)) {
				if (var_1_36) {
					var_1_9 = var_1_14;
				} else {
					var_1_9 = var_1_14;
				}
			} else {
				var_1_9 = 64.5f;
			}
		} else {
			var_1_9 = var_1_14;
		}
	}


	// From: Req1Batch88100_1loop
	unsigned short int stepLocal_0 = var_1_31;
	if (stepLocal_0 >= (abs (var_1_20))) {
		var_1_1 = (max (((var_1_27 + var_1_27) + var_1_27) , var_1_27));
	} else {
		var_1_1 = var_1_27;
	}


	// From: Req3Batch88100_1loop
	if (var_1_20 >= (max (var_1_31 , -64))) {
		if (var_1_27 < (var_1_20 << var_1_27)) {
			var_1_15 = (max (var_1_31 , var_1_27));
		}
	}


	// From: Req6Batch88100_1loop
	signed long int stepLocal_5 = (max (var_1_31 , var_1_31)) >> var_1_27;
	signed long int stepLocal_4 = (var_1_1 - var_1_21) * var_1_27;
	if (stepLocal_4 <= ((var_1_1 + 25) - (var_1_18 - var_1_20))) {
		if (stepLocal_5 > var_1_21) {
			var_1_22 = var_1_24;
		} else {
			var_1_22 = var_1_24;
		}
	} else {
		var_1_22 = var_1_24;
	}
}



void updateVariables() {
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 1073741823);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 1073741824);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 255);
	assume_abort_if_not(var_1_26 != 0);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -127);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -126);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 16383);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_36 = var_1_36;
}

int property() {
	return ((((((((((((var_1_31 >= (abs (var_1_20))) ? (var_1_1 == ((signed short int) (max (((var_1_27 + var_1_27) + var_1_27) , var_1_27)))) : (var_1_1 == ((signed short int) var_1_27))) && (var_1_36 ? ((-2 <= var_1_20) ? (((var_1_34 + 1.2f) == (var_1_11 - var_1_12)) ? (var_1_36 ? (var_1_9 == ((float) var_1_14)) : (var_1_9 == ((float) var_1_14))) : (var_1_9 == ((float) 64.5f))) : (var_1_9 == ((float) var_1_14))) : 1)) && ((var_1_20 >= (max (var_1_31 , -64))) ? ((var_1_27 < (var_1_20 << var_1_27)) ? (var_1_15 == ((signed long int) (max (var_1_31 , var_1_27)))) : 1) : 1)) && (((last_1_var_1_25 + last_1_var_1_20) == last_1_var_1_27) ? (var_1_16 == ((unsigned long int) ((var_1_18 + var_1_19) - last_1_var_1_20))) : (var_1_16 == ((unsigned long int) last_1_var_1_20)))) && ((var_1_12 <= (31.8f / 127.5f)) ? (((var_1_12 >= var_1_14) && last_1_var_1_36) ? (var_1_20 == ((unsigned char) var_1_21)) : 1) : 1)) && ((((var_1_1 - var_1_21) * var_1_27) <= ((var_1_1 + 25) - (var_1_18 - var_1_20))) ? ((((max (var_1_31 , var_1_31)) >> var_1_27) > var_1_21) ? (var_1_22 == ((float) var_1_24)) : (var_1_22 == ((float) var_1_24))) : (var_1_22 == ((float) var_1_24)))) && ((var_1_24 <= (max (last_1_var_1_9 , var_1_14))) ? ((var_1_21 != ((last_1_var_1_20 + last_1_var_1_27) / var_1_26)) ? (var_1_25 == ((signed short int) last_1_var_1_20)) : (var_1_25 == ((signed short int) last_1_var_1_16))) : (var_1_25 == ((signed short int) last_1_var_1_27)))) && ((! last_1_var_1_36) ? ((last_1_var_1_1 >= (last_1_var_1_15 - var_1_21)) ? (var_1_27 == ((signed char) var_1_28)) : (var_1_27 == ((signed char) (min (((abs (-2)) - var_1_29) , (abs (var_1_30))))))) : (var_1_27 == ((signed char) var_1_29)))) && ((((var_1_26 + var_1_29) * (var_1_21 & var_1_20)) >= (64u / var_1_18)) ? (var_1_31 == ((unsigned short int) (var_1_21 + (var_1_32 - var_1_20)))) : 1)) && (var_1_34 == ((float) (var_1_35 - 10.6f)))) && ((8 <= var_1_16) ? ((var_1_19 > var_1_25) ? (var_1_36 == ((unsigned char) (var_1_37 || (var_1_13 && var_1_38)))) : (var_1_36 == ((unsigned char) (! (! var_1_37))))) : 1)) && (var_1_39 == ((double) var_1_35))
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
