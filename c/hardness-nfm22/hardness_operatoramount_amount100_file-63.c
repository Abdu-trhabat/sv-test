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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch63Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 4;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 100;
signed long int var_1_8 = -256;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 200;
signed char var_1_14 = 16;
unsigned char var_1_15 = 0;
unsigned char var_1_17 = 1;
signed char var_1_18 = -25;
signed short int var_1_19 = -10;
unsigned char var_1_20 = 2;
unsigned char var_1_22 = 32;
unsigned char var_1_23 = 4;
double var_1_24 = 128.6;
double var_1_25 = 0.6;
double var_1_26 = 99.375;
signed short int var_1_27 = 1;
unsigned long int var_1_29 = 128;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_9 = 1;
unsigned char last_1_var_1_12 = 1;
unsigned char last_1_var_1_13 = 200;
unsigned char last_1_var_1_15 = 0;
signed char last_1_var_1_18 = -25;
signed short int last_1_var_1_19 = -10;
unsigned char last_1_var_1_20 = 2;
signed short int last_1_var_1_27 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch63Amount100
	if (var_1_10 || (var_1_5 < (last_1_var_1_27 & last_1_var_1_27))) {
		if (last_1_var_1_18 >= (last_1_var_1_27 + (var_1_14 / var_1_5))) {
			var_1_15 = (! var_1_11);
		} else {
			if ((~ last_1_var_1_27) > (var_1_7 - (abs (var_1_6)))) {
				var_1_15 = (! (! (last_1_var_1_9 && var_1_11)));
			} else {
				var_1_15 = (! var_1_11);
			}
		}
	} else {
		if (var_1_11) {
			var_1_15 = var_1_17;
		} else {
			var_1_15 = var_1_17;
		}
	}


	// From: Req8Batch63Amount100
	unsigned char stepLocal_4 = last_1_var_1_13 < var_1_5;
	if ((last_1_var_1_12 > -4) || stepLocal_4) {
		var_1_19 = last_1_var_1_20;
	}


	// From: Req1Batch63Amount100
	if (((last_1_var_1_19 / -2) <= last_1_var_1_13) && last_1_var_1_15) {
		var_1_1 = ((var_1_5 - var_1_6) - var_1_7);
	} else {
		var_1_1 = (var_1_6 + var_1_7);
	}


	// From: Req2Batch63Amount100
	if (var_1_15) {
		var_1_8 = (max (var_1_6 , var_1_7));
	} else {
		var_1_8 = (25 + var_1_6);
	}


	// From: Req4Batch63Amount100
	if (var_1_11) {
		var_1_12 = var_1_6;
	}


	// From: Req9Batch63Amount100
	if (var_1_11) {
		if ((var_1_19 >= var_1_19) || (var_1_19 >= (max (var_1_5 , var_1_1)))) {
			var_1_20 = (var_1_7 + var_1_6);
		} else {
			var_1_20 = (var_1_6 + ((var_1_22 - var_1_23) + var_1_14));
		}
	} else {
		if (var_1_1 <= var_1_5) {
			var_1_20 = var_1_6;
		}
	}


	// From: Req11Batch63Amount100
	signed char stepLocal_5 = var_1_14;
	if (var_1_22 > stepLocal_5) {
		var_1_27 = var_1_19;
	} else {
		var_1_27 = ((max (var_1_5 , (var_1_6 + var_1_12))) - var_1_14);
	}


	// From: Req7Batch63Amount100
	unsigned char stepLocal_3 = var_1_1;
	signed long int stepLocal_2 = var_1_5 ^ 1;
	if (stepLocal_2 >= (~ -8)) {
		var_1_18 = var_1_6;
	} else {
		if (stepLocal_3 == var_1_20) {
			var_1_18 = var_1_14;
		}
	}


	// From: Req3Batch63Amount100
	unsigned char stepLocal_0 = var_1_15;
	if ((var_1_18 < var_1_1) && stepLocal_0) {
		var_1_9 = ((var_1_18 > var_1_1) || var_1_10);
	} else {
		var_1_9 = (! var_1_11);
	}


	// From: Req5Batch63Amount100
	signed short int stepLocal_1 = var_1_27;
	if (var_1_10) {
		var_1_13 = var_1_7;
	} else {
		if (((var_1_6 + var_1_14) - var_1_7) >= stepLocal_1) {
			var_1_13 = var_1_14;
		} else {
			var_1_13 = var_1_14;
		}
	}


	// From: Req10Batch63Amount100
	if (var_1_7 <= var_1_22) {
		if (var_1_9) {
			var_1_24 = (var_1_25 + var_1_26);
		}
	}


	// From: Req12Batch63Amount100
	signed long int stepLocal_6 = (var_1_18 / var_1_22) / var_1_5;
	if (var_1_13 <= stepLocal_6) {
		var_1_29 = var_1_19;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 32);
	assume_abort_if_not(var_1_22 <= 64);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 32);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427382800e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -461168.6018427382800e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_27 = var_1_27;
}

int property() {
	return ((((((((((((((last_1_var_1_19 / -2) <= last_1_var_1_13) && last_1_var_1_15) ? (var_1_1 == ((unsigned char) ((var_1_5 - var_1_6) - var_1_7))) : (var_1_1 == ((unsigned char) (var_1_6 + var_1_7)))) && (var_1_15 ? (var_1_8 == ((signed long int) (max (var_1_6 , var_1_7)))) : (var_1_8 == ((signed long int) (25 + var_1_6))))) && (((var_1_18 < var_1_1) && var_1_15) ? (var_1_9 == ((unsigned char) ((var_1_18 > var_1_1) || var_1_10))) : (var_1_9 == ((unsigned char) (! var_1_11))))) && (var_1_11 ? (var_1_12 == ((unsigned char) var_1_6)) : 1)) && (var_1_10 ? (var_1_13 == ((unsigned char) var_1_7)) : ((((var_1_6 + var_1_14) - var_1_7) >= var_1_27) ? (var_1_13 == ((unsigned char) var_1_14)) : (var_1_13 == ((unsigned char) var_1_14))))) && ((var_1_10 || (var_1_5 < (last_1_var_1_27 & last_1_var_1_27))) ? ((last_1_var_1_18 >= (last_1_var_1_27 + (var_1_14 / var_1_5))) ? (var_1_15 == ((unsigned char) (! var_1_11))) : (((~ last_1_var_1_27) > (var_1_7 - (abs (var_1_6)))) ? (var_1_15 == ((unsigned char) (! (! (last_1_var_1_9 && var_1_11))))) : (var_1_15 == ((unsigned char) (! var_1_11))))) : (var_1_11 ? (var_1_15 == ((unsigned char) var_1_17)) : (var_1_15 == ((unsigned char) var_1_17))))) && (((var_1_5 ^ 1) >= (~ -8)) ? (var_1_18 == ((signed char) var_1_6)) : ((var_1_1 == var_1_20) ? (var_1_18 == ((signed char) var_1_14)) : 1))) && (((last_1_var_1_12 > -4) || (last_1_var_1_13 < var_1_5)) ? (var_1_19 == ((signed short int) last_1_var_1_20)) : 1)) && (var_1_11 ? (((var_1_19 >= var_1_19) || (var_1_19 >= (max (var_1_5 , var_1_1)))) ? (var_1_20 == ((unsigned char) (var_1_7 + var_1_6))) : (var_1_20 == ((unsigned char) (var_1_6 + ((var_1_22 - var_1_23) + var_1_14))))) : ((var_1_1 <= var_1_5) ? (var_1_20 == ((unsigned char) var_1_6)) : 1))) && ((var_1_7 <= var_1_22) ? (var_1_9 ? (var_1_24 == ((double) (var_1_25 + var_1_26))) : 1) : 1)) && ((var_1_22 > var_1_14) ? (var_1_27 == ((signed short int) var_1_19)) : (var_1_27 == ((signed short int) ((max (var_1_5 , (var_1_6 + var_1_12))) - var_1_14))))) && ((var_1_13 <= ((var_1_18 / var_1_22) / var_1_5)) ? (var_1_29 == ((unsigned long int) var_1_19)) : 1)
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
