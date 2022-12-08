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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch29100_1loop.c", 13, "reach_error"); }
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
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 128;
unsigned short int var_1_10 = 5;
unsigned char var_1_11 = 10;
unsigned short int var_1_12 = 8;
unsigned short int var_1_13 = 22843;
unsigned char var_1_14 = 4;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 32;
unsigned short int var_1_17 = 4;
unsigned char var_1_18 = 25;
double var_1_19 = 16.875;
double var_1_20 = 15.475;
double var_1_21 = 7.1;
double var_1_22 = 256.5;
double var_1_23 = 9.4;
double var_1_24 = 4.75;
double var_1_25 = 4.8;
double var_1_26 = 128.5;
unsigned char var_1_27 = 100;
signed char var_1_28 = 0;
signed char var_1_29 = 8;
unsigned char var_1_30 = 0;
unsigned long int var_1_31 = 5;
unsigned long int var_1_32 = 2657034370;
double var_1_33 = 0.0;
double var_1_34 = 50.6;
double var_1_35 = 0.0;
double var_1_36 = 49.25;
signed char var_1_37 = 100;
signed char var_1_38 = 4;
signed char var_1_39 = -4;
signed long int var_1_40 = -8;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_12 = 8;
unsigned short int last_1_var_1_17 = 4;
unsigned char last_1_var_1_27 = 100;
unsigned char last_1_var_1_30 = 0;
unsigned long int last_1_var_1_31 = 5;
signed char last_1_var_1_37 = 100;
signed long int last_1_var_1_40 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch29100_1loop
	signed long int stepLocal_1 = last_1_var_1_27;
	signed long int stepLocal_0 = last_1_var_1_27;
	if (last_1_var_1_17 != stepLocal_0) {
		if (stepLocal_1 >= (last_1_var_1_17 + last_1_var_1_31)) {
			var_1_1 = var_1_5;
		} else {
			if (var_1_5) {
				var_1_1 = var_1_6;
			}
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req4Batch29100_1loop
	signed long int stepLocal_2 = max (256 , last_1_var_1_12);
	if (last_1_var_1_30) {
		if (var_1_13 > stepLocal_2) {
			var_1_14 = (var_1_15 - var_1_16);
		} else {
			var_1_14 = (var_1_16 + 10);
		}
	}


	// From: Req9Batch29100_1loop
	if (var_1_1) {
		var_1_30 = 1;
	} else {
		var_1_30 = (! var_1_5);
	}


	// From: Req11Batch29100_1loop
	signed long int stepLocal_7 = var_1_15 - (max (var_1_16 , var_1_28));
	if (stepLocal_7 < (last_1_var_1_37 / (min (var_1_13 , var_1_10)))) {
		var_1_37 = ((var_1_38 + var_1_39) + var_1_29);
	} else {
		var_1_37 = (min (var_1_28 , var_1_38));
	}


	// From: Req12Batch29100_1loop
	var_1_40 = last_1_var_1_40;


	// From: Req5Batch29100_1loop
	if (! var_1_1) {
		if (! (! (! var_1_5))) {
			var_1_17 = var_1_14;
		} else {
			var_1_17 = var_1_13;
		}
	} else {
		var_1_17 = var_1_15;
	}


	// From: Req6Batch29100_1loop
	if (var_1_1) {
		if ((min (var_1_13 , var_1_37)) > ((var_1_16 << var_1_37) / var_1_15)) {
			var_1_18 = (max (2 , var_1_11));
		}
	}


	// From: Req3Batch29100_1loop
	if (var_1_17 > var_1_14) {
		if (var_1_18 == var_1_17) {
			var_1_12 = ((var_1_13 - var_1_11) + var_1_17);
		}
	}


	// From: Req2Batch29100_1loop
	if (! var_1_1) {
		if (var_1_12 > (var_1_14 % var_1_10)) {
			var_1_8 = var_1_11;
		}
	}


	// From: Req8Batch29100_1loop
	signed long int stepLocal_5 = var_1_16 - (var_1_28 + var_1_29);
	if (stepLocal_5 <= var_1_12) {
		var_1_27 = (max (var_1_29 , var_1_28));
	} else {
		var_1_27 = var_1_29;
	}


	// From: Req7Batch29100_1loop
	unsigned char stepLocal_4 = var_1_14;
	unsigned char stepLocal_3 = var_1_14 <= var_1_8;
	if (var_1_5 && stepLocal_3) {
		if (stepLocal_4 > var_1_40) {
			var_1_19 = (min ((var_1_20 - var_1_21) , var_1_22));
		}
	} else {
		var_1_19 = (var_1_23 + ((var_1_24 + var_1_25) + var_1_26));
	}


	// From: Req10Batch29100_1loop
	signed long int stepLocal_6 = var_1_27 + var_1_8;
	if (var_1_19 != var_1_22) {
		var_1_31 = (var_1_32 - (var_1_40 + var_1_13));
	} else {
		if (stepLocal_6 >= (var_1_15 + var_1_29)) {
			if ((var_1_24 * (var_1_23 * var_1_19)) >= ((var_1_33 - var_1_34) - (var_1_35 - var_1_36))) {
				var_1_31 = var_1_8;
			} else {
				var_1_31 = last_1_var_1_31;
			}
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65535);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 16383);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -115292.1504606845700e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 1152921.504606845700e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -115292.1504606845700e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 1152921.504606845700e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -230584.3009213691390e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691390e+12F && var_1_26 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 64);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967294);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 4611686.018427387900e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427387900e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 4611686.018427387900e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427387900e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -31);
	assume_abort_if_not(var_1_38 <= 32);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -31);
	assume_abort_if_not(var_1_39 <= 31);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_40 = var_1_40;
}

int property() {
	return ((((((((((((last_1_var_1_17 != last_1_var_1_27) ? ((last_1_var_1_27 >= (last_1_var_1_17 + last_1_var_1_31)) ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_5 ? (var_1_1 == ((unsigned char) var_1_6)) : 1)) : (var_1_1 == ((unsigned char) var_1_7))) && ((! var_1_1) ? ((var_1_12 > (var_1_14 % var_1_10)) ? (var_1_8 == ((unsigned char) var_1_11)) : 1) : 1)) && ((var_1_17 > var_1_14) ? ((var_1_18 == var_1_17) ? (var_1_12 == ((unsigned short int) ((var_1_13 - var_1_11) + var_1_17))) : 1) : 1)) && (last_1_var_1_30 ? ((var_1_13 > (max (256 , last_1_var_1_12))) ? (var_1_14 == ((unsigned char) (var_1_15 - var_1_16))) : (var_1_14 == ((unsigned char) (var_1_16 + 10)))) : 1)) && ((! var_1_1) ? ((! (! (! var_1_5))) ? (var_1_17 == ((unsigned short int) var_1_14)) : (var_1_17 == ((unsigned short int) var_1_13))) : (var_1_17 == ((unsigned short int) var_1_15)))) && (var_1_1 ? (((min (var_1_13 , var_1_37)) > ((var_1_16 << var_1_37) / var_1_15)) ? (var_1_18 == ((unsigned char) (max (2 , var_1_11)))) : 1) : 1)) && ((var_1_5 && (var_1_14 <= var_1_8)) ? ((var_1_14 > var_1_40) ? (var_1_19 == ((double) (min ((var_1_20 - var_1_21) , var_1_22)))) : 1) : (var_1_19 == ((double) (var_1_23 + ((var_1_24 + var_1_25) + var_1_26)))))) && (((var_1_16 - (var_1_28 + var_1_29)) <= var_1_12) ? (var_1_27 == ((unsigned char) (max (var_1_29 , var_1_28)))) : (var_1_27 == ((unsigned char) var_1_29)))) && (var_1_1 ? (var_1_30 == ((unsigned char) 1)) : (var_1_30 == ((unsigned char) (! var_1_5))))) && ((var_1_19 != var_1_22) ? (var_1_31 == ((unsigned long int) (var_1_32 - (var_1_40 + var_1_13)))) : (((var_1_27 + var_1_8) >= (var_1_15 + var_1_29)) ? (((var_1_24 * (var_1_23 * var_1_19)) >= ((var_1_33 - var_1_34) - (var_1_35 - var_1_36))) ? (var_1_31 == ((unsigned long int) var_1_8)) : (var_1_31 == ((unsigned long int) last_1_var_1_31))) : 1))) && (((var_1_15 - (max (var_1_16 , var_1_28))) < (last_1_var_1_37 / (min (var_1_13 , var_1_10)))) ? (var_1_37 == ((signed char) ((var_1_38 + var_1_39) + var_1_29))) : (var_1_37 == ((signed char) (min (var_1_28 , var_1_38)))))) && (var_1_40 == ((signed long int) last_1_var_1_40))
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
