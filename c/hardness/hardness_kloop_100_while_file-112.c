// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch112100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 999999999.7;
float var_1_4 = 0.0;
float var_1_5 = 0.5;
float var_1_6 = 0.0;
float var_1_7 = 999999999999.5;
signed char var_1_8 = -32;
signed char var_1_10 = 0;
signed char var_1_11 = -64;
signed long int var_1_12 = -8;
signed long int var_1_13 = 1779655105;
signed short int var_1_14 = 8;
unsigned char var_1_15 = 5;
unsigned char var_1_16 = 10;
unsigned char var_1_17 = 2;
unsigned char var_1_18 = 8;
unsigned char var_1_19 = 5;
float var_1_20 = 999999.375;
float var_1_21 = 5.15;
signed long int var_1_22 = -16;
signed short int var_1_23 = 0;
signed short int var_1_24 = -1;
signed short int var_1_26 = 20257;
signed short int var_1_27 = 27755;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
double var_1_30 = 4.8;
signed long int var_1_31 = 16;
signed char var_1_32 = 10;
double var_1_33 = -0.5;
signed short int var_1_34 = 32;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_12 = -8;
signed short int last_1_var_1_14 = 8;
unsigned char last_1_var_1_15 = 5;
signed long int last_1_var_1_22 = -16;
unsigned char last_1_var_1_28 = 0;
signed short int last_1_var_1_34 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req12Batch112100_while
	signed long int stepLocal_3 = last_1_var_1_22;
	if (stepLocal_3 < -5) {
		var_1_31 = (max (last_1_var_1_34 , var_1_27));
	} else {
		var_1_31 = (var_1_18 + (var_1_16 - var_1_19));
	}


	// From: Req9Batch112100_while
	signed long int stepLocal_2 = last_1_var_1_12;
	if (last_1_var_1_28) {
		if (stepLocal_2 > last_1_var_1_14) {
			if (last_1_var_1_28) {
				var_1_24 = (abs (last_1_var_1_14));
			}
		} else {
			var_1_24 = (min (last_1_var_1_14 , last_1_var_1_12));
		}
	} else {
		var_1_24 = (((max (var_1_26 , var_1_27)) - last_1_var_1_15) - 10);
	}


	// From: Req8Batch112100_while
	var_1_23 = (var_1_10 + var_1_24);


	// From: Req4Batch112100_while
	var_1_14 = (max (var_1_11 , var_1_10));


	// From: Req10Batch112100_while
	var_1_28 = (! var_1_29);


	// From: Req14Batch112100_while
	if (-1 <= var_1_17) {
		var_1_33 = (var_1_21 - var_1_4);
	}


	// From: Req2Batch112100_while
	if (var_1_28) {
		var_1_8 = (max (var_1_10 , var_1_11));
	}


	// From: Req7Batch112100_while
	if (var_1_28) {
		var_1_22 = var_1_17;
	}


	// From: Req6Batch112100_while
	if (var_1_22 > (abs (var_1_17))) {
		if ((max (var_1_17 , var_1_24)) <= 1) {
			var_1_20 = (var_1_7 - (var_1_6 - (max (var_1_5 , var_1_21))));
		} else {
			var_1_20 = (abs (var_1_4));
		}
	} else {
		var_1_20 = (var_1_21 + var_1_7);
	}


	// From: Req15Batch112100_while
	if (((min (var_1_22 , var_1_14)) / var_1_26) < var_1_22) {
		if (var_1_28) {
			if (((~ var_1_26) < var_1_31) && (var_1_7 != (var_1_5 + var_1_6))) {
				if (! var_1_28) {
					var_1_34 = var_1_16;
				} else {
					var_1_34 = var_1_22;
				}
			} else {
				var_1_34 = var_1_14;
			}
		}
	} else {
		var_1_34 = var_1_19;
	}


	// From: Req5Batch112100_while
	signed long int stepLocal_1 = 1 + var_1_23;
	signed long int stepLocal_0 = var_1_23 * var_1_31;
	if (var_1_13 >= stepLocal_1) {
		if (var_1_14 > stepLocal_0) {
			var_1_15 = ((max (var_1_16 , (var_1_17 + var_1_18))) + var_1_19);
		}
	} else {
		var_1_15 = var_1_18;
	}


	// From: Req3Batch112100_while
	if (var_1_28) {
		var_1_12 = ((min ((var_1_13 - 50) , var_1_24)) - var_1_22);
	}


	// From: Req1Batch112100_while
	if (var_1_34 < var_1_24) {
		var_1_1 = ((var_1_4 - var_1_5) - (max (3.5f , (var_1_6 - var_1_7))));
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req11Batch112100_while
	if ((- var_1_7) <= var_1_1) {
		var_1_30 = 63.75;
	} else {
		var_1_30 = var_1_4;
	}


	// From: Req13Batch112100_while
	signed long int stepLocal_4 = var_1_31;
	if (var_1_33 < var_1_20) {
		if (var_1_29) {
			if (stepLocal_4 < var_1_12) {
				var_1_32 = var_1_10;
			}
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 4611686.018427383000e+12F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 4611686.018427383000e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 1073741822);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 64);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 16382);
	assume_abort_if_not(var_1_26 <= 32766);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= 16382);
	assume_abort_if_not(var_1_27 <= 32766);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_34 = var_1_34;
}

int property(void) {
	return (((((((((((((((var_1_34 < var_1_24) ? (var_1_1 == ((float) ((var_1_4 - var_1_5) - (max (3.5f , (var_1_6 - var_1_7)))))) : (var_1_1 == ((float) var_1_6))) && (var_1_28 ? (var_1_8 == ((signed char) (max (var_1_10 , var_1_11)))) : 1)) && (var_1_28 ? (var_1_12 == ((signed long int) ((min ((var_1_13 - 50) , var_1_24)) - var_1_22))) : 1)) && (var_1_14 == ((signed short int) (max (var_1_11 , var_1_10))))) && ((var_1_13 >= (1 + var_1_23)) ? ((var_1_14 > (var_1_23 * var_1_31)) ? (var_1_15 == ((unsigned char) ((max (var_1_16 , (var_1_17 + var_1_18))) + var_1_19))) : 1) : (var_1_15 == ((unsigned char) var_1_18)))) && ((var_1_22 > (abs (var_1_17))) ? (((max (var_1_17 , var_1_24)) <= 1) ? (var_1_20 == ((float) (var_1_7 - (var_1_6 - (max (var_1_5 , var_1_21)))))) : (var_1_20 == ((float) (abs (var_1_4))))) : (var_1_20 == ((float) (var_1_21 + var_1_7))))) && (var_1_28 ? (var_1_22 == ((signed long int) var_1_17)) : 1)) && (var_1_23 == ((signed short int) (var_1_10 + var_1_24)))) && (last_1_var_1_28 ? ((last_1_var_1_12 > last_1_var_1_14) ? (last_1_var_1_28 ? (var_1_24 == ((signed short int) (abs (last_1_var_1_14)))) : 1) : (var_1_24 == ((signed short int) (min (last_1_var_1_14 , last_1_var_1_12))))) : (var_1_24 == ((signed short int) (((max (var_1_26 , var_1_27)) - last_1_var_1_15) - 10))))) && (var_1_28 == ((unsigned char) (! var_1_29)))) && (((- var_1_7) <= var_1_1) ? (var_1_30 == ((double) 63.75)) : (var_1_30 == ((double) var_1_4)))) && ((last_1_var_1_22 < -5) ? (var_1_31 == ((signed long int) (max (last_1_var_1_34 , var_1_27)))) : (var_1_31 == ((signed long int) (var_1_18 + (var_1_16 - var_1_19)))))) && ((var_1_33 < var_1_20) ? (var_1_29 ? ((var_1_31 < var_1_12) ? (var_1_32 == ((signed char) var_1_10)) : 1) : 1) : 1)) && ((-1 <= var_1_17) ? (var_1_33 == ((double) (var_1_21 - var_1_4))) : 1)) && ((((min (var_1_22 , var_1_14)) / var_1_26) < var_1_22) ? (var_1_28 ? ((((~ var_1_26) < var_1_31) && (var_1_7 != (var_1_5 + var_1_6))) ? ((! var_1_28) ? (var_1_34 == ((signed short int) var_1_16)) : (var_1_34 == ((signed short int) var_1_22))) : (var_1_34 == ((signed short int) var_1_14))) : 1) : (var_1_34 == ((signed short int) var_1_19)))
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
