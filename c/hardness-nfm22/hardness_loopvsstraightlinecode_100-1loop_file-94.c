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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch94100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = -0.25;
double var_1_2 = -0.125;
double var_1_3 = 127.5;
unsigned char var_1_4 = 4;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 10;
float var_1_7 = -0.2;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed long int var_1_15 = -100000;
signed char var_1_18 = 8;
signed char var_1_19 = 64;
signed short int var_1_20 = -16;
signed long int var_1_22 = -1;
double var_1_23 = 500.8;
double var_1_24 = 9.8;
unsigned short int var_1_25 = 16;
unsigned short int var_1_26 = 41277;
signed long int var_1_27 = 1000;
double var_1_29 = 99.5;
double var_1_30 = 99999999.6;
unsigned long int var_1_31 = 4;
unsigned short int var_1_32 = 10;
unsigned short int var_1_33 = 52075;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_4 = 4;
unsigned char last_1_var_1_9 = 0;
signed long int last_1_var_1_15 = -100000;
signed short int last_1_var_1_20 = -16;
signed long int last_1_var_1_22 = -1;
unsigned short int last_1_var_1_32 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req12Batch94100_1loop
	signed long int stepLocal_7 = abs (min (last_1_var_1_32 , last_1_var_1_4));
	if (stepLocal_7 >= ((last_1_var_1_22 * var_1_6) * last_1_var_1_15)) {
		var_1_31 = (last_1_var_1_32 + (1891941459u - last_1_var_1_15));
	} else {
		var_1_31 = (max ((min (last_1_var_1_15 , last_1_var_1_4)) , var_1_26));
	}


	// From: Req13Batch94100_1loop
	if (last_1_var_1_9) {
		var_1_32 = ((var_1_33 - last_1_var_1_15) - var_1_6);
	}


	// From: Req1Batch94100_1loop
	var_1_1 = (min (9.999999999999925E13 , (var_1_2 + (abs (var_1_3)))));


	// From: Req11Batch94100_1loop
	var_1_29 = (max ((min (var_1_24 , (min (var_1_2 , var_1_3)))) , var_1_30));


	// From: Req4Batch94100_1loop
	unsigned char stepLocal_2 = var_1_10;
	if (var_1_5) {
		if (var_1_11 || stepLocal_2) {
			if (! (var_1_29 < var_1_2)) {
				var_1_9 = (var_1_12 || var_1_13);
			} else {
				var_1_9 = (var_1_11 && ((var_1_12 && var_1_13) || (! var_1_14)));
			}
		}
	}


	// From: Req2Batch94100_1loop
	if (var_1_9) {
		if (var_1_3 <= (min (499.25 , 999999.3))) {
			var_1_4 = var_1_6;
		}
	}


	// From: Req10Batch94100_1loop
	if ((var_1_26 - var_1_32) <= (var_1_19 % var_1_27)) {
		var_1_25 = (max (var_1_6 , (max (var_1_32 , var_1_32))));
	} else {
		var_1_25 = (max ((min (var_1_6 , var_1_32)) , (min (var_1_32 , var_1_4))));
	}


	// From: Req3Batch94100_1loop
	unsigned char stepLocal_1 = var_1_6 <= var_1_31;
	unsigned char stepLocal_0 = var_1_6;
	if (stepLocal_0 > (var_1_25 * var_1_31)) {
		if (stepLocal_1 && var_1_9) {
			var_1_7 = var_1_3;
		}
	}


	// From: Req9Batch94100_1loop
	if (var_1_3 <= (- var_1_7)) {
		if (var_1_9) {
			var_1_23 = (var_1_24 - 31.25);
		}
	}


	// From: Req6Batch94100_1loop
	unsigned char stepLocal_3 = var_1_9;
	if (var_1_3 != var_1_29) {
		if ((var_1_32 <= var_1_31) && stepLocal_3) {
			var_1_18 = var_1_19;
		} else {
			var_1_18 = var_1_19;
		}
	} else {
		var_1_18 = var_1_19;
	}


	// From: Req5Batch94100_1loop
	if (var_1_6 >= (var_1_4 >> var_1_18)) {
		var_1_15 = (min ((var_1_4 + var_1_32) , (var_1_18 + (var_1_6 + var_1_18))));
	}


	// From: Req7Batch94100_1loop
	signed char stepLocal_5 = var_1_18;
	signed char stepLocal_4 = var_1_18;
	if (stepLocal_5 < var_1_19) {
		var_1_20 = (var_1_31 + var_1_19);
	} else {
		if ((min (last_1_var_1_20 , var_1_6)) == stepLocal_4) {
			var_1_20 = (max (var_1_18 , var_1_19));
		} else {
			var_1_20 = -10;
		}
	}


	// From: Req8Batch94100_1loop
	signed short int stepLocal_6 = var_1_20;
	if (stepLocal_6 > (max (var_1_20 , var_1_19))) {
		if (! var_1_12) {
			var_1_22 = (var_1_31 - var_1_20);
		} else {
			var_1_22 = 2;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -461168.6018427382800e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 4611686.018427382800e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -461168.6018427382800e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427382800e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -127);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 32767);
	assume_abort_if_not(var_1_26 <= 65535);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	assume_abort_if_not(var_1_27 != 0);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 49150);
	assume_abort_if_not(var_1_33 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_4 = var_1_4;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_32 = var_1_32;
}

int property() {
	return ((((((((((((var_1_1 == ((double) (min (9.999999999999925E13 , (var_1_2 + (abs (var_1_3))))))) && (var_1_9 ? ((var_1_3 <= (min (499.25 , 999999.3))) ? (var_1_4 == ((unsigned char) var_1_6)) : 1) : 1)) && ((var_1_6 > (var_1_25 * var_1_31)) ? (((var_1_6 <= var_1_31) && var_1_9) ? (var_1_7 == ((float) var_1_3)) : 1) : 1)) && (var_1_5 ? ((var_1_11 || var_1_10) ? ((! (var_1_29 < var_1_2)) ? (var_1_9 == ((unsigned char) (var_1_12 || var_1_13))) : (var_1_9 == ((unsigned char) (var_1_11 && ((var_1_12 && var_1_13) || (! var_1_14)))))) : 1) : 1)) && ((var_1_6 >= (var_1_4 >> var_1_18)) ? (var_1_15 == ((signed long int) (min ((var_1_4 + var_1_32) , (var_1_18 + (var_1_6 + var_1_18)))))) : 1)) && ((var_1_3 != var_1_29) ? (((var_1_32 <= var_1_31) && var_1_9) ? (var_1_18 == ((signed char) var_1_19)) : (var_1_18 == ((signed char) var_1_19))) : (var_1_18 == ((signed char) var_1_19)))) && ((var_1_18 < var_1_19) ? (var_1_20 == ((signed short int) (var_1_31 + var_1_19))) : (((min (last_1_var_1_20 , var_1_6)) == var_1_18) ? (var_1_20 == ((signed short int) (max (var_1_18 , var_1_19)))) : (var_1_20 == ((signed short int) -10))))) && ((var_1_20 > (max (var_1_20 , var_1_19))) ? ((! var_1_12) ? (var_1_22 == ((signed long int) (var_1_31 - var_1_20))) : (var_1_22 == ((signed long int) 2))) : 1)) && ((var_1_3 <= (- var_1_7)) ? (var_1_9 ? (var_1_23 == ((double) (var_1_24 - 31.25))) : 1) : 1)) && (((var_1_26 - var_1_32) <= (var_1_19 % var_1_27)) ? (var_1_25 == ((unsigned short int) (max (var_1_6 , (max (var_1_32 , var_1_32)))))) : (var_1_25 == ((unsigned short int) (max ((min (var_1_6 , var_1_32)) , (min (var_1_32 , var_1_4)))))))) && (var_1_29 == ((double) (max ((min (var_1_24 , (min (var_1_2 , var_1_3)))) , var_1_30))))) && (((abs (min (last_1_var_1_32 , last_1_var_1_4))) >= ((last_1_var_1_22 * var_1_6) * last_1_var_1_15)) ? (var_1_31 == ((unsigned long int) (last_1_var_1_32 + (1891941459u - last_1_var_1_15)))) : (var_1_31 == ((unsigned long int) (max ((min (last_1_var_1_15 , last_1_var_1_4)) , var_1_26)))))) && (last_1_var_1_9 ? (var_1_32 == ((unsigned short int) ((var_1_33 - last_1_var_1_15) - var_1_6))) : 1)
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
