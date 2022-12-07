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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch28100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 64.4;
float var_1_4 = 127.6;
float var_1_5 = 24.8;
double var_1_6 = 999.375;
unsigned char var_1_7 = 1;
signed short int var_1_8 = -64;
double var_1_9 = 10000000000000.5;
double var_1_10 = 2.5;
signed short int var_1_11 = 5;
signed short int var_1_12 = -8;
unsigned short int var_1_13 = 0;
unsigned short int var_1_14 = 200;
unsigned short int var_1_15 = 10;
unsigned short int var_1_16 = 2;
unsigned short int var_1_17 = 29903;
unsigned short int var_1_18 = 2;
unsigned short int var_1_19 = 5;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
double var_1_24 = 8.75;
double var_1_25 = 256.25;
signed short int var_1_26 = 2;
signed short int var_1_28 = -8;
signed short int var_1_29 = -1;
signed short int var_1_30 = 10000;
signed short int var_1_31 = 10;
unsigned short int var_1_32 = 64;
unsigned short int var_1_33 = 48884;
float var_1_34 = 15.375;
float var_1_36 = 31.66;
float var_1_37 = 0.0;
float var_1_38 = 127.5;
float var_1_39 = 5.5;
unsigned long int var_1_40 = 32;
unsigned long int var_1_41 = 3079708991;

// Calibration values

// Last'ed variables
float last_1_var_1_1 = 64.4;
signed short int last_1_var_1_26 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch28100_1loop
	unsigned short int stepLocal_4 = var_1_15;
	if (var_1_4 >= last_1_var_1_1) {
		if ((var_1_14 >> last_1_var_1_26) <= stepLocal_4) {
			var_1_16 = ((var_1_17 - var_1_18) + var_1_19);
		} else {
			var_1_16 = (min (var_1_15 , var_1_17));
		}
	}


	// From: Req4Batch28100_1loop
	unsigned short int stepLocal_3 = var_1_16;
	if (var_1_12 <= stepLocal_3) {
		var_1_13 = (max (var_1_14 , (min (var_1_15 , 32))));
	} else {
		var_1_13 = (abs (var_1_15));
	}


	// From: Req6Batch28100_1loop
	if (var_1_7) {
		var_1_20 = (! (! var_1_21));
	} else {
		var_1_20 = (var_1_21 || (var_1_22 && var_1_23));
	}


	// From: Req10Batch28100_1loop
	if (var_1_20) {
		var_1_34 = (((3.5285223508277832E18f - var_1_36) + (var_1_37 - var_1_38)) - var_1_39);
	} else {
		var_1_34 = (var_1_37 - (max ((var_1_36 + var_1_38) , var_1_39)));
	}


	// From: Req7Batch28100_1loop
	if ((min ((var_1_10 - var_1_9) , var_1_4)) > var_1_34) {
		if (var_1_20) {
			var_1_24 = (max (var_1_4 , var_1_5));
		} else {
			var_1_24 = var_1_25;
		}
	}


	// From: Req1Batch28100_1loop
	unsigned short int stepLocal_1 = var_1_16;
	unsigned short int stepLocal_0 = var_1_16;
	if (stepLocal_0 <= var_1_13) {
		if (stepLocal_1 > var_1_13) {
			var_1_1 = (var_1_4 + var_1_5);
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req3Batch28100_1loop
	if (var_1_1 < (max ((var_1_9 - var_1_10) , var_1_4))) {
		var_1_8 = (max (var_1_11 , var_1_12));
	} else {
		if (var_1_4 > var_1_9) {
			if (var_1_20) {
				var_1_8 = var_1_11;
			}
		}
	}


	// From: Req9Batch28100_1loop
	unsigned char stepLocal_6 = var_1_20;
	if (var_1_25 > var_1_24) {
		if ((var_1_17 > var_1_8) || stepLocal_6) {
			var_1_32 = (var_1_33 - var_1_31);
		} else {
			var_1_32 = var_1_30;
		}
	}


	// From: Req8Batch28100_1loop
	unsigned short int stepLocal_5 = var_1_32;
	if (stepLocal_5 >= (last_1_var_1_26 * var_1_16)) {
		var_1_26 = (((min (var_1_28 , var_1_29)) + 8) + (var_1_18 - (var_1_30 - var_1_31)));
	} else {
		var_1_26 = (var_1_31 - var_1_18);
	}


	// From: Req2Batch28100_1loop
	unsigned short int stepLocal_2 = var_1_13;
	if (var_1_20) {
		if (stepLocal_2 > var_1_32) {
			if (var_1_4 > (- var_1_5)) {
				var_1_6 = var_1_5;
			} else {
				var_1_6 = var_1_5;
			}
		} else {
			var_1_6 = var_1_5;
		}
	} else {
		var_1_6 = var_1_4;
	}


	// From: Req11Batch28100_1loop
	if (var_1_26 <= (abs (var_1_17 - var_1_19))) {
		if ((var_1_31 * (max (var_1_14 , var_1_26))) < var_1_26) {
			var_1_40 = (var_1_41 - var_1_14);
		} else {
			var_1_40 = var_1_15;
		}
	} else {
		var_1_40 = var_1_30;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -32767);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32767);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 16383);
	assume_abort_if_not(var_1_17 <= 32767);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 16383);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854765600e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -8191);
	assume_abort_if_not(var_1_28 <= 8192);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -8191);
	assume_abort_if_not(var_1_29 <= 8192);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= 8191);
	assume_abort_if_not(var_1_30 <= 16383);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 8191);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 32767);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691390e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 2305843.009213691390e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691390e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 2147483647);
	assume_abort_if_not(var_1_41 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_26 = var_1_26;
}

int property() {
	return (((((((((((var_1_16 <= var_1_13) ? ((var_1_16 > var_1_13) ? (var_1_1 == ((float) (var_1_4 + var_1_5))) : 1) : (var_1_1 == ((float) var_1_5))) && (var_1_20 ? ((var_1_13 > var_1_32) ? ((var_1_4 > (- var_1_5)) ? (var_1_6 == ((double) var_1_5)) : (var_1_6 == ((double) var_1_5))) : (var_1_6 == ((double) var_1_5))) : (var_1_6 == ((double) var_1_4)))) && ((var_1_1 < (max ((var_1_9 - var_1_10) , var_1_4))) ? (var_1_8 == ((signed short int) (max (var_1_11 , var_1_12)))) : ((var_1_4 > var_1_9) ? (var_1_20 ? (var_1_8 == ((signed short int) var_1_11)) : 1) : 1))) && ((var_1_12 <= var_1_16) ? (var_1_13 == ((unsigned short int) (max (var_1_14 , (min (var_1_15 , 32)))))) : (var_1_13 == ((unsigned short int) (abs (var_1_15)))))) && ((var_1_4 >= last_1_var_1_1) ? (((var_1_14 >> last_1_var_1_26) <= var_1_15) ? (var_1_16 == ((unsigned short int) ((var_1_17 - var_1_18) + var_1_19))) : (var_1_16 == ((unsigned short int) (min (var_1_15 , var_1_17))))) : 1)) && (var_1_7 ? (var_1_20 == ((unsigned char) (! (! var_1_21)))) : (var_1_20 == ((unsigned char) (var_1_21 || (var_1_22 && var_1_23)))))) && (((min ((var_1_10 - var_1_9) , var_1_4)) > var_1_34) ? (var_1_20 ? (var_1_24 == ((double) (max (var_1_4 , var_1_5)))) : (var_1_24 == ((double) var_1_25))) : 1)) && ((var_1_32 >= (last_1_var_1_26 * var_1_16)) ? (var_1_26 == ((signed short int) (((min (var_1_28 , var_1_29)) + 8) + (var_1_18 - (var_1_30 - var_1_31))))) : (var_1_26 == ((signed short int) (var_1_31 - var_1_18))))) && ((var_1_25 > var_1_24) ? (((var_1_17 > var_1_8) || var_1_20) ? (var_1_32 == ((unsigned short int) (var_1_33 - var_1_31))) : (var_1_32 == ((unsigned short int) var_1_30))) : 1)) && (var_1_20 ? (var_1_34 == ((float) (((3.5285223508277832E18f - var_1_36) + (var_1_37 - var_1_38)) - var_1_39))) : (var_1_34 == ((float) (var_1_37 - (max ((var_1_36 + var_1_38) , var_1_39))))))) && ((var_1_26 <= (abs (var_1_17 - var_1_19))) ? (((var_1_31 * (max (var_1_14 , var_1_26))) < var_1_26) ? (var_1_40 == ((unsigned long int) (var_1_41 - var_1_14))) : (var_1_40 == ((unsigned long int) var_1_15))) : (var_1_40 == ((unsigned long int) var_1_30)))
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
