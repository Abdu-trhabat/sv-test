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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch41100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 100000;
unsigned char var_1_7 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
signed char var_1_11 = -8;
signed char var_1_12 = -50;
signed char var_1_13 = 25;
signed char var_1_14 = 100;
signed char var_1_15 = 32;
signed char var_1_16 = 25;
signed long int var_1_17 = 50;
signed long int var_1_18 = -32;
signed short int var_1_19 = 256;
unsigned long int var_1_20 = 64;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
float var_1_23 = 1.4;
float var_1_24 = 3.875;
float var_1_25 = 255.375;
float var_1_26 = 0.65;
float var_1_27 = 64.75;
float var_1_28 = 3.5;
signed long int var_1_29 = 16;
unsigned char var_1_31 = 5;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 2;
signed short int var_1_35 = -128;
signed short int var_1_36 = 19851;
signed short int var_1_37 = 28837;
float var_1_38 = 31.2;
float var_1_39 = 127.6;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_20 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch41100_1loop
	var_1_17 = (min (4 , ((1807938565 - 128) - var_1_16)));


	// From: Req8Batch41100_1loop
	var_1_21 = (! (var_1_9 && var_1_22));


	// From: Req9Batch41100_1loop
	if (var_1_21) {
		var_1_23 = ((var_1_24 + var_1_25) + (min (var_1_26 , (min (var_1_27 , var_1_28)))));
	}


	// From: Req11Batch41100_1loop
	if (var_1_22) {
		var_1_31 = (min (var_1_16 , (var_1_32 - (var_1_33 - var_1_34))));
	}


	// From: Req13Batch41100_1loop
	if (var_1_9) {
		if (var_1_25 == var_1_26) {
			var_1_38 = ((min (var_1_24 , var_1_39)) + var_1_25);
		} else {
			var_1_38 = var_1_39;
		}
	} else {
		var_1_38 = var_1_25;
	}


	// From: Req1Batch41100_1loop
	if ((- var_1_23) == var_1_23) {
		var_1_1 = (min ((var_1_31 + var_1_31) , var_1_31));
	} else {
		var_1_1 = var_1_31;
	}


	// From: Req2Batch41100_1loop
	unsigned char stepLocal_0 = var_1_17 < var_1_31;
	if ((127.35 + var_1_23) <= var_1_23) {
		if (stepLocal_0 || var_1_21) {
			var_1_7 = (var_1_21 && var_1_9);
		} else {
			var_1_7 = (! var_1_10);
		}
	}


	// From: Req3Batch41100_1loop
	if (var_1_21) {
		var_1_11 = (min (var_1_12 , (min (var_1_13 , var_1_14))));
	} else {
		var_1_11 = (var_1_15 - var_1_16);
	}


	// From: Req5Batch41100_1loop
	if (var_1_7) {
		var_1_18 = var_1_14;
	} else {
		var_1_18 = (var_1_15 + var_1_14);
	}


	// From: Req7Batch41100_1loop
	if (last_1_var_1_20 <= ((abs (var_1_13)) ^ var_1_18)) {
		var_1_20 = (max (var_1_31 , (var_1_31 + var_1_16)));
	} else {
		var_1_20 = var_1_31;
	}


	// From: Req10Batch41100_1loop
	if (var_1_7) {
		var_1_29 = ((1349734853 - var_1_16) - (1715174523 - var_1_31));
	} else {
		var_1_29 = (max (((var_1_16 + var_1_15) + -16) , (min (var_1_14 , (min (var_1_31 , var_1_18))))));
	}


	// From: Req12Batch41100_1loop
	unsigned char stepLocal_5 = (var_1_17 / var_1_32) > (max (var_1_31 , var_1_33));
	signed long int stepLocal_4 = var_1_29;
	if (stepLocal_5 && var_1_21) {
		if (var_1_23 <= 0.125f) {
			var_1_35 = (((min (var_1_36 , var_1_37)) - var_1_33) - var_1_16);
		}
	} else {
		if (var_1_31 == stepLocal_4) {
			var_1_35 = (abs (var_1_32));
		} else {
			var_1_35 = var_1_13;
		}
	}


	// From: Req6Batch41100_1loop
	signed long int stepLocal_3 = var_1_17;
	unsigned char stepLocal_2 = var_1_10;
	signed short int stepLocal_1 = var_1_35;
	if ((var_1_15 + var_1_17) == stepLocal_1) {
		if (var_1_21 && stepLocal_2) {
			if (var_1_16 < stepLocal_3) {
				var_1_19 = ((var_1_12 + var_1_11) + var_1_15);
			}
		}
	} else {
		var_1_19 = (min (var_1_13 , 128));
	}
}



void updateVariables() {
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -230584.3009213691390e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691390e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -230584.3009213691390e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691390e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -461168.6018427382800e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -461168.6018427382800e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427382800e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 127);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 63);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= 16382);
	assume_abort_if_not(var_1_36 <= 32766);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 16382);
	assume_abort_if_not(var_1_37 <= 32766);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -461168.6018427382800e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_20 = var_1_20;
}

int property() {
	return ((((((((((((((- var_1_23) == var_1_23) ? (var_1_1 == ((unsigned long int) (min ((var_1_31 + var_1_31) , var_1_31)))) : (var_1_1 == ((unsigned long int) var_1_31))) && (((127.35 + var_1_23) <= var_1_23) ? (((var_1_17 < var_1_31) || var_1_21) ? (var_1_7 == ((unsigned char) (var_1_21 && var_1_9))) : (var_1_7 == ((unsigned char) (! var_1_10)))) : 1)) && (var_1_21 ? (var_1_11 == ((signed char) (min (var_1_12 , (min (var_1_13 , var_1_14)))))) : (var_1_11 == ((signed char) (var_1_15 - var_1_16))))) && (var_1_17 == ((signed long int) (min (4 , ((1807938565 - 128) - var_1_16)))))) && (var_1_7 ? (var_1_18 == ((signed long int) var_1_14)) : (var_1_18 == ((signed long int) (var_1_15 + var_1_14))))) && (((var_1_15 + var_1_17) == var_1_35) ? ((var_1_21 && var_1_10) ? ((var_1_16 < var_1_17) ? (var_1_19 == ((signed short int) ((var_1_12 + var_1_11) + var_1_15))) : 1) : 1) : (var_1_19 == ((signed short int) (min (var_1_13 , 128)))))) && ((last_1_var_1_20 <= ((abs (var_1_13)) ^ var_1_18)) ? (var_1_20 == ((unsigned long int) (max (var_1_31 , (var_1_31 + var_1_16))))) : (var_1_20 == ((unsigned long int) var_1_31)))) && (var_1_21 == ((unsigned char) (! (var_1_9 && var_1_22))))) && (var_1_21 ? (var_1_23 == ((float) ((var_1_24 + var_1_25) + (min (var_1_26 , (min (var_1_27 , var_1_28))))))) : 1)) && (var_1_7 ? (var_1_29 == ((signed long int) ((1349734853 - var_1_16) - (1715174523 - var_1_31)))) : (var_1_29 == ((signed long int) (max (((var_1_16 + var_1_15) + -16) , (min (var_1_14 , (min (var_1_31 , var_1_18)))))))))) && (var_1_22 ? (var_1_31 == ((unsigned char) (min (var_1_16 , (var_1_32 - (var_1_33 - var_1_34)))))) : 1)) && ((((var_1_17 / var_1_32) > (max (var_1_31 , var_1_33))) && var_1_21) ? ((var_1_23 <= 0.125f) ? (var_1_35 == ((signed short int) (((min (var_1_36 , var_1_37)) - var_1_33) - var_1_16))) : 1) : ((var_1_31 == var_1_29) ? (var_1_35 == ((signed short int) (abs (var_1_32)))) : (var_1_35 == ((signed short int) var_1_13))))) && (var_1_9 ? ((var_1_25 == var_1_26) ? (var_1_38 == ((float) ((min (var_1_24 , var_1_39)) + var_1_25))) : (var_1_38 == ((float) var_1_39))) : (var_1_38 == ((float) var_1_25)))
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
