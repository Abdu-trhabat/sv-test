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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch48100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -5;
unsigned char var_1_3 = 0;
float var_1_8 = 128.5;
float var_1_9 = 127.75;
float var_1_10 = 31.8;
float var_1_11 = 32.5;
unsigned char var_1_12 = 8;
unsigned char var_1_13 = 100;
unsigned char var_1_14 = 25;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 16;
double var_1_17 = 64.8;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed char var_1_21 = -100;
signed long int var_1_22 = -1;
float var_1_23 = 5.6;
float var_1_24 = 50.88;
signed short int var_1_25 = -5;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 128;
unsigned char var_1_28 = 5;
signed short int var_1_29 = -64;
unsigned long int var_1_32 = 16;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_12 = 8;
unsigned char last_1_var_1_18 = 1;
signed short int last_1_var_1_25 = -5;
unsigned char last_1_var_1_26 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch48100_1loop
	unsigned char stepLocal_1 = last_1_var_1_18;
	signed long int stepLocal_0 = last_1_var_1_12;
	if (last_1_var_1_18 || stepLocal_1) {
		if (stepLocal_0 >= last_1_var_1_26) {
			var_1_1 = (last_1_var_1_12 + last_1_var_1_12);
		} else {
			var_1_1 = last_1_var_1_12;
		}
	} else {
		var_1_1 = last_1_var_1_12;
	}


	// From: Req9Batch48100_1loop
	unsigned long int stepLocal_8 = 10u / var_1_13;
	if (! var_1_20) {
		if (stepLocal_8 < (var_1_22 + var_1_1)) {
			var_1_26 = (min (var_1_13 , (var_1_27 - var_1_28)));
		} else {
			var_1_26 = (var_1_16 + var_1_15);
		}
	}


	// From: Req6Batch48100_1loop
	signed long int stepLocal_4 = (min (var_1_16 , var_1_13)) / var_1_22;
	if (((25 + var_1_26) / var_1_15) > stepLocal_4) {
		var_1_21 = (min (var_1_16 , var_1_14));
	} else {
		var_1_21 = var_1_14;
	}


	// From: Req3Batch48100_1loop
	signed short int stepLocal_3 = var_1_1;
	signed char stepLocal_2 = var_1_21;
	if (var_1_1 >= stepLocal_2) {
		var_1_12 = ((var_1_13 - var_1_14) + (100 - (var_1_15 - var_1_16)));
	} else {
		if (stepLocal_3 <= 100) {
			var_1_12 = (max (var_1_14 , var_1_13));
		} else {
			var_1_12 = var_1_13;
		}
	}


	// From: Req2Batch48100_1loop
	var_1_8 = ((var_1_9 - var_1_10) + var_1_11);


	// From: Req5Batch48100_1loop
	if (var_1_3) {
		var_1_18 = (var_1_19 || ((var_1_10 > var_1_8) && var_1_20));
	} else {
		var_1_18 = ((! (! var_1_19)) || var_1_20);
	}


	// From: Req11Batch48100_1loop
	unsigned char stepLocal_10 = var_1_26;
	if (var_1_8 <= (var_1_24 * (min (var_1_11 , var_1_10)))) {
		if (stepLocal_10 > (- (- var_1_26))) {
			var_1_32 = var_1_26;
		} else {
			var_1_32 = var_1_13;
		}
	} else {
		var_1_32 = var_1_27;
	}


	// From: Req4Batch48100_1loop
	if (((max (var_1_13 , 0)) - var_1_32) >= var_1_32) {
		var_1_17 = (var_1_10 + var_1_9);
	} else {
		if (var_1_18) {
			var_1_17 = var_1_9;
		}
	}


	// From: Req7Batch48100_1loop
	if (var_1_32 <= (- var_1_21)) {
		var_1_23 = (((min (var_1_10 , var_1_9)) - var_1_24) + var_1_11);
	} else {
		var_1_23 = (abs (var_1_24));
	}


	// From: Req8Batch48100_1loop
	signed long int stepLocal_7 = -32;
	unsigned long int stepLocal_6 = var_1_32;
	unsigned char stepLocal_5 = 10 > 8;
	if (stepLocal_7 > (~ last_1_var_1_25)) {
		if ((var_1_10 <= (- var_1_9)) || stepLocal_5) {
			if (last_1_var_1_25 > stepLocal_6) {
				var_1_25 = var_1_32;
			}
		}
	} else {
		var_1_25 = var_1_14;
	}


	// From: Req10Batch48100_1loop
	unsigned char stepLocal_9 = var_1_18;
	if (stepLocal_9 && var_1_18) {
		if ((var_1_10 - (var_1_9 + var_1_24)) == var_1_23) {
			var_1_29 = (min (var_1_14 , (min (1 , var_1_21))));
		}
	} else {
		var_1_29 = 1000;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 63);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 31);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 31);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= -2147483648);
	assume_abort_if_not(var_1_22 <= 2147483647);
	assume_abort_if_not(var_1_22 != 0);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 127);
	assume_abort_if_not(var_1_27 <= 254);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 127);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_26 = var_1_26;
}

int property() {
	return (((((((((((last_1_var_1_18 || last_1_var_1_18) ? ((last_1_var_1_12 >= last_1_var_1_26) ? (var_1_1 == ((signed short int) (last_1_var_1_12 + last_1_var_1_12))) : (var_1_1 == ((signed short int) last_1_var_1_12))) : (var_1_1 == ((signed short int) last_1_var_1_12))) && (var_1_8 == ((float) ((var_1_9 - var_1_10) + var_1_11)))) && ((var_1_1 >= var_1_21) ? (var_1_12 == ((unsigned char) ((var_1_13 - var_1_14) + (100 - (var_1_15 - var_1_16))))) : ((var_1_1 <= 100) ? (var_1_12 == ((unsigned char) (max (var_1_14 , var_1_13)))) : (var_1_12 == ((unsigned char) var_1_13))))) && ((((max (var_1_13 , 0)) - var_1_32) >= var_1_32) ? (var_1_17 == ((double) (var_1_10 + var_1_9))) : (var_1_18 ? (var_1_17 == ((double) var_1_9)) : 1))) && (var_1_3 ? (var_1_18 == ((unsigned char) (var_1_19 || ((var_1_10 > var_1_8) && var_1_20)))) : (var_1_18 == ((unsigned char) ((! (! var_1_19)) || var_1_20))))) && ((((25 + var_1_26) / var_1_15) > ((min (var_1_16 , var_1_13)) / var_1_22)) ? (var_1_21 == ((signed char) (min (var_1_16 , var_1_14)))) : (var_1_21 == ((signed char) var_1_14)))) && ((var_1_32 <= (- var_1_21)) ? (var_1_23 == ((float) (((min (var_1_10 , var_1_9)) - var_1_24) + var_1_11))) : (var_1_23 == ((float) (abs (var_1_24)))))) && ((-32 > (~ last_1_var_1_25)) ? (((var_1_10 <= (- var_1_9)) || (10 > 8)) ? ((last_1_var_1_25 > var_1_32) ? (var_1_25 == ((signed short int) var_1_32)) : 1) : 1) : (var_1_25 == ((signed short int) var_1_14)))) && ((! var_1_20) ? (((10u / var_1_13) < (var_1_22 + var_1_1)) ? (var_1_26 == ((unsigned char) (min (var_1_13 , (var_1_27 - var_1_28))))) : (var_1_26 == ((unsigned char) (var_1_16 + var_1_15)))) : 1)) && ((var_1_18 && var_1_18) ? (((var_1_10 - (var_1_9 + var_1_24)) == var_1_23) ? (var_1_29 == ((signed short int) (min (var_1_14 , (min (1 , var_1_21)))))) : 1) : (var_1_29 == ((signed short int) 1000)))) && ((var_1_8 <= (var_1_24 * (min (var_1_11 , var_1_10)))) ? ((var_1_26 > (- (- var_1_26))) ? (var_1_32 == ((unsigned long int) var_1_26)) : (var_1_32 == ((unsigned long int) var_1_13))) : (var_1_32 == ((unsigned long int) var_1_27)))
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
