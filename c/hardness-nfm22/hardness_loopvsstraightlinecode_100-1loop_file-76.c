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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch76100_1loop.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 5;
unsigned char var_1_10 = 25;
double var_1_11 = 4.45;
double var_1_12 = 127.25;
double var_1_13 = 49.845;
double var_1_14 = 127.8;
unsigned char var_1_15 = 64;
unsigned char var_1_17 = 128;
unsigned char var_1_18 = 50;
unsigned long int var_1_19 = 0;
signed short int var_1_21 = 5;
unsigned char var_1_22 = 128;
unsigned char var_1_23 = 8;
float var_1_24 = 16.4;
double var_1_25 = 10.6;
signed char var_1_26 = 25;
double var_1_27 = 64.6;
double var_1_28 = 500.5;
double var_1_29 = 0.0;
double var_1_30 = 16.75;
double var_1_31 = 1.25;
float var_1_32 = 99.2;
signed long int var_1_34 = -4;
double var_1_35 = 31.875;
double var_1_36 = 127.5;
double var_1_37 = 256.25;
double var_1_38 = 0.0;
signed long int var_1_39 = -1;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_21 = 5;
signed long int last_1_var_1_34 = -4;
signed long int last_1_var_1_39 = -1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch76100_1loop
	if (var_1_18 < (- last_1_var_1_34)) {
		if (1 > var_1_18) {
			var_1_19 = last_1_var_1_21;
		}
	}


	// From: Req1Batch76100_1loop
	if (! (var_1_2 || var_1_3)) {
		var_1_1 = (var_1_4 || var_1_5);
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req3Batch76100_1loop
	signed long int stepLocal_0 = -1 ^ var_1_10;
	if (-8 <= stepLocal_0) {
		var_1_11 = (var_1_12 - var_1_13);
	} else {
		var_1_11 = (var_1_14 - var_1_13);
	}


	// From: Req7Batch76100_1loop
	if (var_1_14 >= var_1_12) {
		var_1_24 = (abs (abs (var_1_12)));
	} else {
		if (var_1_13 > var_1_14) {
			var_1_24 = var_1_13;
		} else {
			var_1_24 = var_1_13;
		}
	}


	// From: Req9Batch76100_1loop
	unsigned char stepLocal_5 = var_1_1;
	unsigned char stepLocal_4 = var_1_6;
	if (var_1_4 || stepLocal_4) {
		if (stepLocal_5 && (! (var_1_19 > var_1_10))) {
			var_1_32 = 1.00000000005E10f;
		}
	}


	// From: Req11Batch76100_1loop
	if (var_1_1) {
		var_1_35 = (max (var_1_14 , (min (var_1_36 , var_1_29))));
	} else {
		var_1_35 = var_1_27;
	}


	// From: Req12Batch76100_1loop
	if ((var_1_29 + var_1_27) > (var_1_31 - (var_1_28 + 2.173))) {
		var_1_37 = (((max (var_1_29 , var_1_38)) - var_1_28) - 8.5);
	} else {
		var_1_37 = var_1_36;
	}


	// From: Req2Batch76100_1loop
	if (0.5 < var_1_24) {
		if (var_1_24 >= var_1_11) {
			if (! var_1_1) {
				var_1_7 = var_1_10;
			}
		} else {
			var_1_7 = var_1_10;
		}
	} else {
		var_1_7 = 64;
	}


	// From: Req6Batch76100_1loop
	unsigned char stepLocal_2 = var_1_17 != (var_1_22 - var_1_23);
	if (stepLocal_2 && ((var_1_7 + 5) > var_1_18)) {
		var_1_21 = var_1_18;
	} else {
		var_1_21 = var_1_10;
	}


	// From: Req13Batch76100_1loop
	signed long int stepLocal_7 = - var_1_7;
	if (stepLocal_7 > last_1_var_1_39) {
		var_1_39 = (var_1_7 - var_1_22);
	}


	// From: Req4Batch76100_1loop
	unsigned char stepLocal_1 = var_1_7;
	if (stepLocal_1 <= (- (var_1_10 + var_1_39))) {
		var_1_15 = var_1_10;
	} else {
		var_1_15 = (min (var_1_10 , (min ((var_1_17 - 16) , var_1_18))));
	}


	// From: Req8Batch76100_1loop
	signed long int stepLocal_3 = (var_1_23 - var_1_26) + var_1_39;
	if (stepLocal_3 == var_1_19) {
		var_1_25 = ((max ((var_1_27 + var_1_28) , (var_1_29 - var_1_30))) - var_1_31);
	} else {
		var_1_25 = 3.5;
	}


	// From: Req10Batch76100_1loop
	unsigned char stepLocal_6 = var_1_4;
	if (stepLocal_6 || (var_1_11 == var_1_14)) {
		var_1_34 = (max (var_1_22 , var_1_19));
	} else {
		var_1_34 = (abs (abs (32 - var_1_22)));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 127);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 127);
	assume_abort_if_not(var_1_22 <= 255);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 4611686.018427382800e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 4611686.018427382800e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_21 = var_1_21;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_39 = var_1_39;
}

int property() {
	return (((((((((((((! (var_1_2 || var_1_3)) ? (var_1_1 == ((unsigned char) (var_1_4 || var_1_5))) : (var_1_1 == ((unsigned char) var_1_6))) && ((0.5 < var_1_24) ? ((var_1_24 >= var_1_11) ? ((! var_1_1) ? (var_1_7 == ((unsigned char) var_1_10)) : 1) : (var_1_7 == ((unsigned char) var_1_10))) : (var_1_7 == ((unsigned char) 64)))) && ((-8 <= (-1 ^ var_1_10)) ? (var_1_11 == ((double) (var_1_12 - var_1_13))) : (var_1_11 == ((double) (var_1_14 - var_1_13))))) && ((var_1_7 <= (- (var_1_10 + var_1_39))) ? (var_1_15 == ((unsigned char) var_1_10)) : (var_1_15 == ((unsigned char) (min (var_1_10 , (min ((var_1_17 - 16) , var_1_18)))))))) && ((var_1_18 < (- last_1_var_1_34)) ? ((1 > var_1_18) ? (var_1_19 == ((unsigned long int) last_1_var_1_21)) : 1) : 1)) && (((var_1_17 != (var_1_22 - var_1_23)) && ((var_1_7 + 5) > var_1_18)) ? (var_1_21 == ((signed short int) var_1_18)) : (var_1_21 == ((signed short int) var_1_10)))) && ((var_1_14 >= var_1_12) ? (var_1_24 == ((float) (abs (abs (var_1_12))))) : ((var_1_13 > var_1_14) ? (var_1_24 == ((float) var_1_13)) : (var_1_24 == ((float) var_1_13))))) && ((((var_1_23 - var_1_26) + var_1_39) == var_1_19) ? (var_1_25 == ((double) ((max ((var_1_27 + var_1_28) , (var_1_29 - var_1_30))) - var_1_31))) : (var_1_25 == ((double) 3.5)))) && ((var_1_4 || var_1_6) ? ((var_1_1 && (! (var_1_19 > var_1_10))) ? (var_1_32 == ((float) 1.00000000005E10f)) : 1) : 1)) && ((var_1_4 || (var_1_11 == var_1_14)) ? (var_1_34 == ((signed long int) (max (var_1_22 , var_1_19)))) : (var_1_34 == ((signed long int) (abs (abs (32 - var_1_22))))))) && (var_1_1 ? (var_1_35 == ((double) (max (var_1_14 , (min (var_1_36 , var_1_29)))))) : (var_1_35 == ((double) var_1_27)))) && (((var_1_29 + var_1_27) > (var_1_31 - (var_1_28 + 2.173))) ? (var_1_37 == ((double) (((max (var_1_29 , var_1_38)) - var_1_28) - 8.5))) : (var_1_37 == ((double) var_1_36)))) && (((- var_1_7) > last_1_var_1_39) ? (var_1_39 == ((signed long int) (var_1_7 - var_1_22))) : 1)
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
