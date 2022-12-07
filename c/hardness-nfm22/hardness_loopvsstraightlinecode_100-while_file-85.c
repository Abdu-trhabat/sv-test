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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch85100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 5;
signed char var_1_3 = -128;
signed char var_1_5 = 16;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 25;
unsigned char var_1_10 = 32;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
double var_1_14 = 64.4;
double var_1_15 = 0.0;
double var_1_16 = 16.6;
double var_1_17 = 3.25;
double var_1_18 = 31.2;
double var_1_19 = 1.9;
double var_1_20 = 8.4;
unsigned long int var_1_21 = 8;
unsigned long int var_1_22 = 1709501341;
unsigned char var_1_23 = 16;
signed long int var_1_25 = -5;
unsigned char var_1_26 = 1;
signed short int var_1_27 = -5;
float var_1_28 = 9.25;
signed char var_1_29 = 32;
signed char var_1_30 = -8;
signed char var_1_31 = 5;
signed char var_1_32 = 4;
signed char var_1_33 = -25;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
double var_1_36 = 256.2;
unsigned long int var_1_37 = 128;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_12 = 1;
unsigned char last_1_var_1_26 = 1;
signed char last_1_var_1_29 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch85100_while
	signed long int stepLocal_1 = last_1_var_1_29;
	if (stepLocal_1 > (min (var_1_3 , var_1_5))) {
		var_1_7 = ((var_1_8 - var_1_9) - var_1_10);
	} else {
		if (last_1_var_1_12) {
			var_1_7 = var_1_10;
		} else {
			var_1_7 = var_1_10;
		}
	}


	// From: Req6Batch85100_while
	signed long int stepLocal_4 = max (var_1_8 , var_1_10);
	unsigned char stepLocal_3 = last_1_var_1_26;
	if (! last_1_var_1_12) {
		if (var_1_22 > stepLocal_4) {
			if (var_1_13 && stepLocal_3) {
				var_1_23 = var_1_10;
			} else {
				var_1_23 = var_1_9;
			}
		}
	} else {
		var_1_23 = 16;
	}


	// From: Req11Batch85100_while
	unsigned char stepLocal_7 = var_1_23;
	if (stepLocal_7 < last_1_var_1_29) {
		if (! var_1_13) {
			var_1_29 = (min (var_1_9 , ((var_1_30 + var_1_31) + (min (var_1_32 , var_1_33)))));
		}
	}


	// From: Req8Batch85100_while
	var_1_26 = (! (! var_1_13));


	// From: Req12Batch85100_while
	var_1_34 = var_1_35;


	// From: Req13Batch85100_while
	var_1_36 = var_1_17;


	// From: Req14Batch85100_while
	var_1_37 = var_1_8;


	// From: Req4Batch85100_while
	signed long int stepLocal_2 = max (var_1_8 , var_1_9);
	if (var_1_26) {
		var_1_14 = 49.5;
	} else {
		if (! var_1_13) {
			if (var_1_13) {
				var_1_14 = ((var_1_15 - var_1_16) - (7.960983332883285E18 - var_1_17));
			} else {
				var_1_14 = ((min (var_1_16 , var_1_17)) + (var_1_18 + (max (var_1_19 , var_1_20))));
			}
		} else {
			if (stepLocal_2 < var_1_37) {
				var_1_14 = var_1_18;
			} else {
				var_1_14 = var_1_18;
			}
		}
	}


	// From: Req10Batch85100_while
	if (var_1_37 >= (var_1_8 - var_1_9)) {
		var_1_28 = ((var_1_17 - var_1_16) + var_1_20);
	} else {
		var_1_28 = (max (var_1_16 , (max ((max (var_1_20 , var_1_19)) , 63.4f))));
	}


	// From: Req7Batch85100_while
	unsigned char stepLocal_6 = var_1_9;
	unsigned char stepLocal_5 = var_1_7;
	if (stepLocal_5 < var_1_7) {
		if ((var_1_22 << var_1_7) >= stepLocal_6) {
			var_1_25 = var_1_23;
		} else {
			var_1_25 = (var_1_7 - 32);
		}
	} else {
		var_1_25 = var_1_23;
	}


	// From: Req1Batch85100_while
	signed long int stepLocal_0 = max ((var_1_25 / var_1_3) , (var_1_7 % var_1_5));
	if (stepLocal_0 != -16) {
		var_1_1 = (abs (var_1_23));
	} else {
		var_1_1 = (max (var_1_23 , 32));
	}


	// From: Req5Batch85100_while
	if (var_1_26) {
		var_1_21 = (var_1_25 + (var_1_22 - (var_1_10 + var_1_9)));
	}


	// From: Req9Batch85100_while
	if (var_1_26) {
		if (var_1_5 <= var_1_3) {
			var_1_27 = ((abs (var_1_25)) + var_1_25);
		}
	}


	// From: Req3Batch85100_while
	if (var_1_10 <= var_1_9) {
		if (((min (var_1_9 , var_1_1)) * var_1_7) >= var_1_21) {
			var_1_12 = 0;
		} else {
			var_1_12 = var_1_13;
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -128);
	assume_abort_if_not(var_1_5 <= 127);
	assume_abort_if_not(var_1_5 != 0);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 190);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 4611686.018427382800e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -230584.3009213691390e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -230584.3009213691390e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691390e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -230584.3009213691390e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691390e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 1073741823);
	assume_abort_if_not(var_1_22 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -31);
	assume_abort_if_not(var_1_30 <= 32);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -31);
	assume_abort_if_not(var_1_31 <= 31);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -63);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -63);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_29 = var_1_29;
}

int property() {
	return (((((((((((((((max ((var_1_25 / var_1_3) , (var_1_7 % var_1_5))) != -16) ? (var_1_1 == ((unsigned short int) (abs (var_1_23)))) : (var_1_1 == ((unsigned short int) (max (var_1_23 , 32))))) && ((last_1_var_1_29 > (min (var_1_3 , var_1_5))) ? (var_1_7 == ((unsigned char) ((var_1_8 - var_1_9) - var_1_10))) : (last_1_var_1_12 ? (var_1_7 == ((unsigned char) var_1_10)) : (var_1_7 == ((unsigned char) var_1_10))))) && ((var_1_10 <= var_1_9) ? ((((min (var_1_9 , var_1_1)) * var_1_7) >= var_1_21) ? (var_1_12 == ((unsigned char) 0)) : (var_1_12 == ((unsigned char) var_1_13))) : 1)) && (var_1_26 ? (var_1_14 == ((double) 49.5)) : ((! var_1_13) ? (var_1_13 ? (var_1_14 == ((double) ((var_1_15 - var_1_16) - (7.960983332883285E18 - var_1_17)))) : (var_1_14 == ((double) ((min (var_1_16 , var_1_17)) + (var_1_18 + (max (var_1_19 , var_1_20))))))) : (((max (var_1_8 , var_1_9)) < var_1_37) ? (var_1_14 == ((double) var_1_18)) : (var_1_14 == ((double) var_1_18)))))) && (var_1_26 ? (var_1_21 == ((unsigned long int) (var_1_25 + (var_1_22 - (var_1_10 + var_1_9))))) : 1)) && ((! last_1_var_1_12) ? ((var_1_22 > (max (var_1_8 , var_1_10))) ? ((var_1_13 && last_1_var_1_26) ? (var_1_23 == ((unsigned char) var_1_10)) : (var_1_23 == ((unsigned char) var_1_9))) : 1) : (var_1_23 == ((unsigned char) 16)))) && ((var_1_7 < var_1_7) ? (((var_1_22 << var_1_7) >= var_1_9) ? (var_1_25 == ((signed long int) var_1_23)) : (var_1_25 == ((signed long int) (var_1_7 - 32)))) : (var_1_25 == ((signed long int) var_1_23)))) && (var_1_26 == ((unsigned char) (! (! var_1_13))))) && (var_1_26 ? ((var_1_5 <= var_1_3) ? (var_1_27 == ((signed short int) ((abs (var_1_25)) + var_1_25))) : 1) : 1)) && ((var_1_37 >= (var_1_8 - var_1_9)) ? (var_1_28 == ((float) ((var_1_17 - var_1_16) + var_1_20))) : (var_1_28 == ((float) (max (var_1_16 , (max ((max (var_1_20 , var_1_19)) , 63.4f)))))))) && ((var_1_23 < last_1_var_1_29) ? ((! var_1_13) ? (var_1_29 == ((signed char) (min (var_1_9 , ((var_1_30 + var_1_31) + (min (var_1_32 , var_1_33))))))) : 1) : 1)) && (var_1_34 == ((unsigned char) var_1_35))) && (var_1_36 == ((double) var_1_17))) && (var_1_37 == ((unsigned long int) var_1_8))
;
}
int main(void) {
	isInitial = 1;
	initially();

	while (1) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
