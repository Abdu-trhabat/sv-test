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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch91100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 200;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 16;
unsigned char var_1_6 = 16;
signed short int var_1_7 = -8;
signed char var_1_9 = 0;
signed char var_1_10 = -4;
double var_1_11 = 2.25;
double var_1_12 = 199.3;
double var_1_13 = 7.2;
unsigned long int var_1_14 = 10;
signed short int var_1_15 = -4;
unsigned char var_1_16 = 0;
signed short int var_1_19 = 256;
unsigned char var_1_20 = 0;
signed long int var_1_21 = -1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned short int var_1_25 = 100;
double var_1_26 = 15.125;
double var_1_27 = 2.3;
double var_1_28 = 999.25;
double var_1_29 = 1.75;
unsigned short int var_1_30 = 43183;
unsigned long int var_1_31 = 100000;
double var_1_32 = 7.4;
double var_1_33 = 31.125;
signed short int var_1_34 = -128;
signed char var_1_35 = -1;

// Calibration values

// Last'ed variables
signed char last_1_var_1_9 = 0;
signed short int last_1_var_1_19 = 256;
unsigned long int last_1_var_1_31 = 100000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch91100_1loop
	signed long int stepLocal_0 = last_1_var_1_19;
	if (last_1_var_1_31 != stepLocal_0) {
		var_1_1 = (var_1_4 - var_1_5);
	} else {
		var_1_1 = ((max (50 , var_1_5)) + var_1_6);
	}


	// From: Req14Batch91100_1loop
	var_1_34 = var_1_1;


	// From: Req8Batch91100_1loop
	if (var_1_10 == var_1_34) {
		var_1_20 = (var_1_6 + var_1_5);
	}


	// From: Req5Batch91100_1loop
	var_1_14 = (max ((max (var_1_6 , (min (var_1_1 , var_1_4)))) , var_1_1));


	// From: Req13Batch91100_1loop
	unsigned char stepLocal_4 = var_1_28 == (var_1_27 + var_1_29);
	if ((var_1_1 > var_1_30) && stepLocal_4) {
		var_1_32 = (max (var_1_13 , var_1_12));
	} else {
		if ((var_1_29 / var_1_33) <= (- (var_1_12 + 10.1))) {
			var_1_32 = var_1_26;
		} else {
			var_1_32 = var_1_26;
		}
	}


	// From: Req3Batch91100_1loop
	unsigned long int stepLocal_2 = var_1_14 - var_1_5;
	unsigned long int stepLocal_1 = min (var_1_14 , (var_1_5 / var_1_4));
	if (stepLocal_1 < (last_1_var_1_9 * (var_1_6 + var_1_20))) {
		if (var_1_20 < stepLocal_2) {
			var_1_9 = var_1_10;
		}
	} else {
		var_1_9 = var_1_10;
	}


	// From: Req12Batch91100_1loop
	if (! var_1_24) {
		var_1_31 = (var_1_34 + (min (var_1_20 , var_1_6)));
	}


	// From: Req2Batch91100_1loop
	var_1_7 = (abs ((max (0 , var_1_6)) - var_1_1));


	// From: Req4Batch91100_1loop
	if (((var_1_10 / var_1_4) / 1) <= var_1_1) {
		var_1_11 = (max (var_1_12 , var_1_13));
	}


	// From: Req15Batch91100_1loop
	var_1_35 = var_1_10;


	// From: Req9Batch91100_1loop
	var_1_21 = (var_1_6 - (max (var_1_5 , var_1_20)));


	// From: Req11Batch91100_1loop
	if (var_1_13 <= ((var_1_26 + 128.65) - (max (var_1_27 , var_1_28)))) {
		if ((var_1_13 / var_1_29) < var_1_28) {
			var_1_25 = (abs (var_1_4));
		} else {
			var_1_25 = (min ((var_1_14 + var_1_20) , (max (var_1_20 , var_1_5))));
		}
	} else {
		var_1_25 = (var_1_30 - (max (var_1_20 , 128)));
	}


	// From: Req10Batch91100_1loop
	unsigned char stepLocal_3 = var_1_13 < (var_1_32 * var_1_12);
	if (stepLocal_3 && var_1_16) {
		var_1_22 = (var_1_23 && var_1_24);
	}


	// From: Req6Batch91100_1loop
	if (var_1_22) {
		if (var_1_22) {
			var_1_15 = ((abs (max (var_1_9 , 1000))) + var_1_4);
		} else {
			var_1_15 = (min (var_1_5 , var_1_9));
		}
	}


	// From: Req7Batch91100_1loop
	if (var_1_22) {
		if (var_1_20 > var_1_15) {
			var_1_19 = (var_1_34 + var_1_10);
		} else {
			if (var_1_15 < var_1_4) {
				var_1_19 = var_1_4;
			} else {
				var_1_19 = var_1_5;
			}
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427387900e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	assume_abort_if_not(var_1_29 != 0.0F);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 32767);
	assume_abort_if_not(var_1_30 <= 65534);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	assume_abort_if_not(var_1_33 != 0.0F);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_31 = var_1_31;
}

int property() {
	return (((((((((((((((last_1_var_1_31 != last_1_var_1_19) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : (var_1_1 == ((unsigned char) ((max (50 , var_1_5)) + var_1_6)))) && (var_1_7 == ((signed short int) (abs ((max (0 , var_1_6)) - var_1_1))))) && (((min (var_1_14 , (var_1_5 / var_1_4))) < (last_1_var_1_9 * (var_1_6 + var_1_20))) ? ((var_1_20 < (var_1_14 - var_1_5)) ? (var_1_9 == ((signed char) var_1_10)) : 1) : (var_1_9 == ((signed char) var_1_10)))) && ((((var_1_10 / var_1_4) / 1) <= var_1_1) ? (var_1_11 == ((double) (max (var_1_12 , var_1_13)))) : 1)) && (var_1_14 == ((unsigned long int) (max ((max (var_1_6 , (min (var_1_1 , var_1_4)))) , var_1_1))))) && (var_1_22 ? (var_1_22 ? (var_1_15 == ((signed short int) ((abs (max (var_1_9 , 1000))) + var_1_4))) : (var_1_15 == ((signed short int) (min (var_1_5 , var_1_9))))) : 1)) && (var_1_22 ? ((var_1_20 > var_1_15) ? (var_1_19 == ((signed short int) (var_1_34 + var_1_10))) : ((var_1_15 < var_1_4) ? (var_1_19 == ((signed short int) var_1_4)) : (var_1_19 == ((signed short int) var_1_5)))) : 1)) && ((var_1_10 == var_1_34) ? (var_1_20 == ((unsigned char) (var_1_6 + var_1_5))) : 1)) && (var_1_21 == ((signed long int) (var_1_6 - (max (var_1_5 , var_1_20)))))) && (((var_1_13 < (var_1_32 * var_1_12)) && var_1_16) ? (var_1_22 == ((unsigned char) (var_1_23 && var_1_24))) : 1)) && ((var_1_13 <= ((var_1_26 + 128.65) - (max (var_1_27 , var_1_28)))) ? (((var_1_13 / var_1_29) < var_1_28) ? (var_1_25 == ((unsigned short int) (abs (var_1_4)))) : (var_1_25 == ((unsigned short int) (min ((var_1_14 + var_1_20) , (max (var_1_20 , var_1_5))))))) : (var_1_25 == ((unsigned short int) (var_1_30 - (max (var_1_20 , 128))))))) && ((! var_1_24) ? (var_1_31 == ((unsigned long int) (var_1_34 + (min (var_1_20 , var_1_6))))) : 1)) && (((var_1_1 > var_1_30) && (var_1_28 == (var_1_27 + var_1_29))) ? (var_1_32 == ((double) (max (var_1_13 , var_1_12)))) : (((var_1_29 / var_1_33) <= (- (var_1_12 + 10.1))) ? (var_1_32 == ((double) var_1_26)) : (var_1_32 == ((double) var_1_26))))) && (var_1_34 == ((signed short int) var_1_1))) && (var_1_35 == ((signed char) var_1_10))
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
