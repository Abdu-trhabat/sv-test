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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch6Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 2;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned short int var_1_5 = 34011;
unsigned short int var_1_6 = 2;
signed short int var_1_7 = -4;
signed long int var_1_9 = -4;
unsigned short int var_1_10 = 4;
double var_1_12 = 1.8;
double var_1_13 = 49.5;
double var_1_14 = 0.0;
double var_1_15 = 8.5;
unsigned long int var_1_16 = 4;
float var_1_17 = 3.65;
unsigned char var_1_18 = 0;
signed long int var_1_19 = 32;
signed long int var_1_20 = 1000000000;
signed long int var_1_21 = 1141305717;
unsigned char var_1_22 = 50;
unsigned char var_1_23 = 0;
unsigned short int var_1_24 = 2;
signed short int var_1_25 = -16;
double var_1_26 = 15.6;
double var_1_27 = 4.25;
unsigned long int var_1_28 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_22 = 50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch6Amount100
	var_1_9 = ((abs (last_1_var_1_22)) - last_1_var_1_22);


	// From: Req9Batch6Amount100
	unsigned char stepLocal_2 = var_1_18;
	if (stepLocal_2 || ((var_1_6 == var_1_9) || (var_1_2 && var_1_3))) {
		var_1_22 = var_1_23;
	} else {
		var_1_22 = var_1_23;
	}


	// From: Req1Batch6Amount100
	if (var_1_2 || var_1_3) {
		var_1_1 = (abs (var_1_22));
	} else {
		var_1_1 = (min ((var_1_5 - var_1_22) , var_1_22));
	}


	// From: Req2Batch6Amount100
	if (var_1_22 <= (- 500)) {
		if (var_1_2) {
			var_1_7 = (var_1_22 - 64);
		}
	} else {
		var_1_7 = var_1_22;
	}


	// From: Req4Batch6Amount100
	var_1_10 = (var_1_5 - (var_1_22 + 1000));


	// From: Req5Batch6Amount100
	if (! var_1_3) {
		var_1_12 = ((var_1_13 - (var_1_14 - 63.5)) + var_1_15);
	} else {
		var_1_12 = (var_1_14 - var_1_13);
	}


	// From: Req6Batch6Amount100
	unsigned char stepLocal_0 = var_1_22;
	if (var_1_2) {
		var_1_16 = (var_1_9 + 200u);
	} else {
		if ((min (var_1_22 , var_1_22)) <= stepLocal_0) {
			var_1_16 = 128u;
		} else {
			var_1_16 = var_1_22;
		}
	}


	// From: Req7Batch6Amount100
	if (var_1_18) {
		var_1_17 = ((min (var_1_14 , 255.4f)) + var_1_13);
	} else {
		if (var_1_3) {
			if (var_1_2) {
				var_1_17 = var_1_15;
			} else {
				var_1_17 = 0.050000000000000044f;
			}
		} else {
			var_1_17 = var_1_13;
		}
	}


	// From: Req12Batch6Amount100
	var_1_28 = var_1_21;


	// From: Req10Batch6Amount100
	if (! ((! var_1_3) && var_1_18)) {
		var_1_24 = (min ((min (var_1_22 , var_1_22)) , var_1_28));
	} else {
		if (var_1_22 < ((var_1_5 - var_1_23) * 32)) {
			var_1_24 = var_1_22;
		}
	}


	// From: Req11Batch6Amount100
	unsigned short int stepLocal_4 = var_1_24;
	unsigned short int stepLocal_3 = var_1_10;
	if (((var_1_14 - var_1_13) / (max (var_1_26 , var_1_27))) >= var_1_15) {
		if (var_1_14 >= var_1_13) {
			if ((var_1_22 << var_1_22) <= stepLocal_4) {
				var_1_25 = ((min (var_1_22 , var_1_16)) - var_1_23);
			} else {
				var_1_25 = (var_1_16 + var_1_23);
			}
		} else {
			if (var_1_5 == stepLocal_3) {
				var_1_25 = var_1_16;
			}
		}
	}


	// From: Req8Batch6Amount100
	unsigned char stepLocal_1 = var_1_22;
	if (var_1_24 >= stepLocal_1) {
		if (! var_1_2) {
			var_1_19 = (var_1_22 - (var_1_22 + (var_1_20 - 5)));
		} else {
			if (var_1_2) {
				if (var_1_18) {
					var_1_19 = ((var_1_21 - (max (var_1_20 , var_1_22))) - (var_1_22 + (abs (var_1_25))));
				}
			}
		}
	} else {
		var_1_19 = var_1_20;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 2305843.009213691390e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 536870911);
	assume_abort_if_not(var_1_20 <= 1073741823);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 1073741822);
	assume_abort_if_not(var_1_21 <= 2147483646);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	assume_abort_if_not(var_1_26 != 0.0F);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	assume_abort_if_not(var_1_27 != 0.0F);
}



void updateLastVariables() {
	last_1_var_1_22 = var_1_22;
}

int property() {
	return ((((((((((((var_1_2 || var_1_3) ? (var_1_1 == ((unsigned short int) (abs (var_1_22)))) : (var_1_1 == ((unsigned short int) (min ((var_1_5 - var_1_22) , var_1_22))))) && ((var_1_22 <= (- 500)) ? (var_1_2 ? (var_1_7 == ((signed short int) (var_1_22 - 64))) : 1) : (var_1_7 == ((signed short int) var_1_22)))) && (var_1_9 == ((signed long int) ((abs (last_1_var_1_22)) - last_1_var_1_22)))) && (var_1_10 == ((unsigned short int) (var_1_5 - (var_1_22 + 1000))))) && ((! var_1_3) ? (var_1_12 == ((double) ((var_1_13 - (var_1_14 - 63.5)) + var_1_15))) : (var_1_12 == ((double) (var_1_14 - var_1_13))))) && (var_1_2 ? (var_1_16 == ((unsigned long int) (var_1_9 + 200u))) : (((min (var_1_22 , var_1_22)) <= var_1_22) ? (var_1_16 == ((unsigned long int) 128u)) : (var_1_16 == ((unsigned long int) var_1_22))))) && (var_1_18 ? (var_1_17 == ((float) ((min (var_1_14 , 255.4f)) + var_1_13))) : (var_1_3 ? (var_1_2 ? (var_1_17 == ((float) var_1_15)) : (var_1_17 == ((float) 0.050000000000000044f))) : (var_1_17 == ((float) var_1_13))))) && ((var_1_24 >= var_1_22) ? ((! var_1_2) ? (var_1_19 == ((signed long int) (var_1_22 - (var_1_22 + (var_1_20 - 5))))) : (var_1_2 ? (var_1_18 ? (var_1_19 == ((signed long int) ((var_1_21 - (max (var_1_20 , var_1_22))) - (var_1_22 + (abs (var_1_25)))))) : 1) : 1)) : (var_1_19 == ((signed long int) var_1_20)))) && ((var_1_18 || ((var_1_6 == var_1_9) || (var_1_2 && var_1_3))) ? (var_1_22 == ((unsigned char) var_1_23)) : (var_1_22 == ((unsigned char) var_1_23)))) && ((! ((! var_1_3) && var_1_18)) ? (var_1_24 == ((unsigned short int) (min ((min (var_1_22 , var_1_22)) , var_1_28)))) : ((var_1_22 < ((var_1_5 - var_1_23) * 32)) ? (var_1_24 == ((unsigned short int) var_1_22)) : 1))) && ((((var_1_14 - var_1_13) / (max (var_1_26 , var_1_27))) >= var_1_15) ? ((var_1_14 >= var_1_13) ? (((var_1_22 << var_1_22) <= var_1_24) ? (var_1_25 == ((signed short int) ((min (var_1_22 , var_1_16)) - var_1_23))) : (var_1_25 == ((signed short int) (var_1_16 + var_1_23)))) : ((var_1_5 == var_1_10) ? (var_1_25 == ((signed short int) var_1_16)) : 1)) : 1)) && (var_1_28 == ((unsigned long int) var_1_21))
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
