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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch45100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 0;
signed long int var_1_5 = 32;
unsigned char var_1_6 = 16;
unsigned long int var_1_7 = 64;
unsigned char var_1_8 = 128;
double var_1_9 = 99999.2;
double var_1_10 = 31.9;
double var_1_11 = 8.5;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
double var_1_16 = 63.5;
double var_1_17 = 1.75;
double var_1_18 = 4.25;
double var_1_19 = 127.7;
unsigned char var_1_20 = 0;
signed long int var_1_21 = -2;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
float var_1_24 = 999999999.6;
float var_1_25 = 99999999999999.5;
signed char var_1_26 = 32;
signed char var_1_27 = 64;
signed char var_1_28 = 32;
signed char var_1_29 = 4;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
signed long int var_1_32 = 128;
signed short int var_1_34 = -25;
unsigned char var_1_36 = 64;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 0;
unsigned char last_1_var_1_6 = 16;
double last_1_var_1_16 = 63.5;
unsigned char last_1_var_1_20 = 0;
signed long int last_1_var_1_32 = 128;
signed short int last_1_var_1_34 = -25;
unsigned char last_1_var_1_36 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req13Batch45100_1loop
	if (! ((max (last_1_var_1_6 , last_1_var_1_36)) > (var_1_29 >> var_1_5))) {
		if (last_1_var_1_16 <= var_1_19) {
			var_1_34 = ((max ((var_1_28 - var_1_5) , var_1_8)) + last_1_var_1_32);
		}
	} else {
		var_1_34 = var_1_29;
	}


	// From: Req6Batch45100_1loop
	signed long int stepLocal_6 = min (last_1_var_1_34 , (last_1_var_1_6 % var_1_8));
	if (stepLocal_6 >= last_1_var_1_1) {
		var_1_20 = (var_1_5 + (min (16 , 1)));
	}


	// From: Req2Batch45100_1loop
	unsigned long int stepLocal_3 = max (var_1_5 , last_1_var_1_1);
	signed long int stepLocal_2 = var_1_5;
	if (stepLocal_2 >= (max (last_1_var_1_20 , last_1_var_1_1))) {
		if (stepLocal_3 > (last_1_var_1_36 / var_1_7)) {
			var_1_6 = (var_1_5 + 32);
		} else {
			var_1_6 = (var_1_8 - var_1_5);
		}
	} else {
		var_1_6 = var_1_5;
	}


	// From: Req7Batch45100_1loop
	var_1_21 = ((256 + (var_1_8 + var_1_5)) - var_1_6);


	// From: Req3Batch45100_1loop
	var_1_9 = (min (var_1_10 , var_1_11));


	// From: Req4Batch45100_1loop
	var_1_12 = (var_1_13 || (var_1_14 || var_1_15));


	// From: Req8Batch45100_1loop
	var_1_22 = (! (var_1_15 || (! var_1_23)));


	// From: Req9Batch45100_1loop
	if ((var_1_17 / 31.375f) < 100.25) {
		var_1_24 = (var_1_25 + 128.6f);
	}


	// From: Req10Batch45100_1loop
	if (var_1_14) {
		var_1_26 = (var_1_5 - (var_1_27 - (var_1_28 - var_1_29)));
	} else {
		if (var_1_15) {
			var_1_26 = ((abs (var_1_27)) - (max (var_1_5 , var_1_29)));
		}
	}


	// From: Req11Batch45100_1loop
	var_1_30 = (var_1_12 || (var_1_23 && (var_1_12 || var_1_31)));


	// From: Req14Batch45100_1loop
	var_1_36 = var_1_5;


	// From: Req12Batch45100_1loop
	unsigned char stepLocal_7 = var_1_20;
	if (stepLocal_7 < (var_1_20 + var_1_6)) {
		var_1_32 = (var_1_34 + var_1_5);
	} else {
		var_1_32 = ((min (var_1_6 , var_1_8)) - 16);
	}


	// From: Req1Batch45100_1loop
	unsigned char stepLocal_1 = var_1_36 >= var_1_21;
	signed long int stepLocal_0 = (var_1_36 * var_1_21) >> var_1_5;
	if (stepLocal_1 || var_1_22) {
		if (stepLocal_0 >= 50u) {
			var_1_1 = var_1_5;
		} else {
			var_1_1 = var_1_5;
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req5Batch45100_1loop
	unsigned long int stepLocal_5 = var_1_7 * var_1_1;
	unsigned long int stepLocal_4 = 1u;
	if (var_1_20 < stepLocal_4) {
		if (! (var_1_7 >= var_1_5)) {
			if (var_1_20 < stepLocal_5) {
				var_1_16 = 31.6;
			} else {
				var_1_16 = (var_1_17 - (abs (var_1_10)));
			}
		} else {
			var_1_16 = (abs (var_1_18 + var_1_19));
		}
	} else {
		var_1_16 = (max (var_1_18 , (min (var_1_17 , var_1_10))));
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 33);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967295);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 127);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -461168.6018427382800e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -461168.6018427382800e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 63);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 31);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 31);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_36 = var_1_36;
}

int property() {
	return (((((((((((((((var_1_36 >= var_1_21) || var_1_22) ? ((((var_1_36 * var_1_21) >> var_1_5) >= 50u) ? (var_1_1 == ((unsigned long int) var_1_5)) : (var_1_1 == ((unsigned long int) var_1_5))) : (var_1_1 == ((unsigned long int) var_1_5))) && ((var_1_5 >= (max (last_1_var_1_20 , last_1_var_1_1))) ? (((max (var_1_5 , last_1_var_1_1)) > (last_1_var_1_36 / var_1_7)) ? (var_1_6 == ((unsigned char) (var_1_5 + 32))) : (var_1_6 == ((unsigned char) (var_1_8 - var_1_5)))) : (var_1_6 == ((unsigned char) var_1_5)))) && (var_1_9 == ((double) (min (var_1_10 , var_1_11))))) && (var_1_12 == ((unsigned char) (var_1_13 || (var_1_14 || var_1_15))))) && ((var_1_20 < 1u) ? ((! (var_1_7 >= var_1_5)) ? ((var_1_20 < (var_1_7 * var_1_1)) ? (var_1_16 == ((double) 31.6)) : (var_1_16 == ((double) (var_1_17 - (abs (var_1_10)))))) : (var_1_16 == ((double) (abs (var_1_18 + var_1_19))))) : (var_1_16 == ((double) (max (var_1_18 , (min (var_1_17 , var_1_10)))))))) && (((min (last_1_var_1_34 , (last_1_var_1_6 % var_1_8))) >= last_1_var_1_1) ? (var_1_20 == ((unsigned char) (var_1_5 + (min (16 , 1))))) : 1)) && (var_1_21 == ((signed long int) ((256 + (var_1_8 + var_1_5)) - var_1_6)))) && (var_1_22 == ((unsigned char) (! (var_1_15 || (! var_1_23)))))) && (((var_1_17 / 31.375f) < 100.25) ? (var_1_24 == ((float) (var_1_25 + 128.6f))) : 1)) && (var_1_14 ? (var_1_26 == ((signed char) (var_1_5 - (var_1_27 - (var_1_28 - var_1_29))))) : (var_1_15 ? (var_1_26 == ((signed char) ((abs (var_1_27)) - (max (var_1_5 , var_1_29))))) : 1))) && (var_1_30 == ((unsigned char) (var_1_12 || (var_1_23 && (var_1_12 || var_1_31)))))) && ((var_1_20 < (var_1_20 + var_1_6)) ? (var_1_32 == ((signed long int) (var_1_34 + var_1_5))) : (var_1_32 == ((signed long int) ((min (var_1_6 , var_1_8)) - 16))))) && ((! ((max (last_1_var_1_6 , last_1_var_1_36)) > (var_1_29 >> var_1_5))) ? ((last_1_var_1_16 <= var_1_19) ? (var_1_34 == ((signed short int) ((max ((var_1_28 - var_1_5) , var_1_8)) + last_1_var_1_32))) : 1) : (var_1_34 == ((signed short int) var_1_29)))) && (var_1_36 == ((unsigned char) var_1_5))
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
