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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch57Amount100.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 100;
signed char var_1_11 = 64;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 16;
unsigned short int var_1_14 = 32;
unsigned char var_1_16 = 128;
unsigned short int var_1_17 = 61278;
unsigned long int var_1_18 = 8;
signed short int var_1_19 = 2;
unsigned short int var_1_20 = 45171;
double var_1_21 = 999999999999999.9;
double var_1_22 = 1.12;
double var_1_23 = 7.6;
double var_1_24 = 0.0;
unsigned long int var_1_25 = 50;
unsigned long int var_1_26 = 1615895283;
unsigned long int var_1_27 = 1000000000;
float var_1_28 = 256.56;
float var_1_29 = 255.1;
float var_1_30 = 0.5;
signed long int var_1_31 = 10000000;
unsigned short int var_1_32 = 10;
unsigned char var_1_33 = 200;
unsigned short int var_1_34 = 30756;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
unsigned char last_1_var_1_8 = 100;
unsigned short int last_1_var_1_14 = 32;
unsigned long int last_1_var_1_18 = 8;
double last_1_var_1_21 = 999999999999999.9;
unsigned long int last_1_var_1_25 = 50;
signed long int last_1_var_1_31 = 10000000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch57Amount100
	signed long int stepLocal_5 = last_1_var_1_14;
	signed long int stepLocal_4 = min (var_1_12 , (var_1_17 - last_1_var_1_8));
	if (var_1_7) {
		if (stepLocal_4 <= last_1_var_1_18) {
			if (stepLocal_5 > var_1_11) {
				var_1_18 = (abs (last_1_var_1_31));
			} else {
				var_1_18 = var_1_16;
			}
		} else {
			var_1_18 = 64u;
		}
	} else {
		var_1_18 = var_1_13;
	}


	// From: Req7Batch57Amount100
	if (last_1_var_1_25 < var_1_16) {
		var_1_25 = (max (2u , (abs (var_1_18))));
	} else {
		var_1_25 = (var_1_20 + (var_1_26 - (var_1_27 - var_1_17)));
	}


	// From: Req3Batch57Amount100
	unsigned char stepLocal_3 = var_1_13;
	unsigned long int stepLocal_2 = last_1_var_1_18;
	unsigned char stepLocal_1 = var_1_12;
	if (var_1_13 > stepLocal_1) {
		if (stepLocal_3 > last_1_var_1_18) {
			if ((var_1_16 - var_1_12) == stepLocal_2) {
				var_1_14 = (var_1_17 - var_1_13);
			} else {
				var_1_14 = (max (last_1_var_1_18 , last_1_var_1_31));
			}
		}
	} else {
		var_1_14 = var_1_12;
	}


	// From: Req9Batch57Amount100
	if (var_1_29 <= last_1_var_1_21) {
		if (last_1_var_1_1) {
			var_1_31 = (min (var_1_13 , last_1_var_1_25));
		} else {
			if (var_1_7) {
				var_1_31 = 10;
			} else {
				var_1_31 = last_1_var_1_25;
			}
		}
	}


	// From: Req1Batch57Amount100
	unsigned char stepLocal_0 = var_1_31 <= 10;
	if (var_1_2) {
		var_1_1 = ((var_1_3 || var_1_4) && var_1_5);
	} else {
		if (var_1_4 && stepLocal_0) {
			var_1_1 = var_1_7;
		}
	}


	// From: Req6Batch57Amount100
	if (var_1_17 != (abs (var_1_25))) {
		var_1_21 = (var_1_22 - var_1_23);
	} else {
		var_1_21 = ((var_1_24 - 9.999999999994E11) - var_1_23);
	}


	// From: Req10Batch57Amount100
	if (var_1_2 && var_1_4) {
		if (var_1_16 < (var_1_33 - var_1_13)) {
			var_1_32 = (var_1_33 + (max (var_1_12 , var_1_16)));
		} else {
			var_1_32 = (var_1_25 + ((var_1_34 - var_1_12) - var_1_16));
		}
	} else {
		if (var_1_25 < (~ var_1_18)) {
			if (var_1_22 > ((var_1_21 * var_1_29) + var_1_30)) {
				var_1_32 = var_1_25;
			}
		} else {
			var_1_32 = var_1_12;
		}
	}


	// From: Req2Batch57Amount100
	if (var_1_14 <= var_1_31) {
		if (var_1_25 >= (var_1_14 / var_1_11)) {
			var_1_8 = (var_1_12 + var_1_13);
		} else {
			var_1_8 = var_1_12;
		}
	} else {
		var_1_8 = var_1_13;
	}


	// From: Req5Batch57Amount100
	signed long int stepLocal_6 = var_1_14 - (var_1_14 + var_1_13);
	if (((var_1_20 - var_1_8) ^ var_1_32) > stepLocal_6) {
		var_1_19 = var_1_12;
	} else {
		var_1_19 = var_1_31;
	}


	// From: Req8Batch57Amount100
	unsigned short int stepLocal_7 = var_1_32;
	if (stepLocal_7 < var_1_25) {
		var_1_28 = ((var_1_29 + var_1_30) - var_1_24);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -128);
	assume_abort_if_not(var_1_11 <= 127);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 255);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 32767);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65535);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 4611686.018427383000e+12F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 1073741823);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 536870911);
	assume_abort_if_not(var_1_27 <= 1073741823);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 255);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 24575);
	assume_abort_if_not(var_1_34 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_31 = var_1_31;
}

int property(void) {
	return (((((((((var_1_2 ? (var_1_1 == ((unsigned char) ((var_1_3 || var_1_4) && var_1_5))) : ((var_1_4 && (var_1_31 <= 10)) ? (var_1_1 == ((unsigned char) var_1_7)) : 1)) && ((var_1_14 <= var_1_31) ? ((var_1_25 >= (var_1_14 / var_1_11)) ? (var_1_8 == ((unsigned char) (var_1_12 + var_1_13))) : (var_1_8 == ((unsigned char) var_1_12))) : (var_1_8 == ((unsigned char) var_1_13)))) && ((var_1_13 > var_1_12) ? ((var_1_13 > last_1_var_1_18) ? (((var_1_16 - var_1_12) == last_1_var_1_18) ? (var_1_14 == ((unsigned short int) (var_1_17 - var_1_13))) : (var_1_14 == ((unsigned short int) (max (last_1_var_1_18 , last_1_var_1_31))))) : 1) : (var_1_14 == ((unsigned short int) var_1_12)))) && (var_1_7 ? (((min (var_1_12 , (var_1_17 - last_1_var_1_8))) <= last_1_var_1_18) ? ((last_1_var_1_14 > var_1_11) ? (var_1_18 == ((unsigned long int) (abs (last_1_var_1_31)))) : (var_1_18 == ((unsigned long int) var_1_16))) : (var_1_18 == ((unsigned long int) 64u))) : (var_1_18 == ((unsigned long int) var_1_13)))) && ((((var_1_20 - var_1_8) ^ var_1_32) > (var_1_14 - (var_1_14 + var_1_13))) ? (var_1_19 == ((signed short int) var_1_12)) : (var_1_19 == ((signed short int) var_1_31)))) && ((var_1_17 != (abs (var_1_25))) ? (var_1_21 == ((double) (var_1_22 - var_1_23))) : (var_1_21 == ((double) ((var_1_24 - 9.999999999994E11) - var_1_23))))) && ((last_1_var_1_25 < var_1_16) ? (var_1_25 == ((unsigned long int) (max (2u , (abs (var_1_18)))))) : (var_1_25 == ((unsigned long int) (var_1_20 + (var_1_26 - (var_1_27 - var_1_17))))))) && ((var_1_32 < var_1_25) ? (var_1_28 == ((float) ((var_1_29 + var_1_30) - var_1_24))) : 1)) && ((var_1_29 <= last_1_var_1_21) ? (last_1_var_1_1 ? (var_1_31 == ((signed long int) (min (var_1_13 , last_1_var_1_25)))) : (var_1_7 ? (var_1_31 == ((signed long int) 10)) : (var_1_31 == ((signed long int) last_1_var_1_25)))) : 1)) && ((var_1_2 && var_1_4) ? ((var_1_16 < (var_1_33 - var_1_13)) ? (var_1_32 == ((unsigned short int) (var_1_33 + (max (var_1_12 , var_1_16))))) : (var_1_32 == ((unsigned short int) (var_1_25 + ((var_1_34 - var_1_12) - var_1_16))))) : ((var_1_25 < (~ var_1_18)) ? ((var_1_22 > ((var_1_21 * var_1_29) + var_1_30)) ? (var_1_32 == ((unsigned short int) var_1_25)) : 1) : (var_1_32 == ((unsigned short int) var_1_12))))
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
