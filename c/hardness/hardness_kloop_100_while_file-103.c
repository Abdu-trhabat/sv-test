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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch103100_while.c", 13, "reach_error"); }
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
float var_1_1 = 128.25;
float var_1_7 = 999.5;
signed short int var_1_8 = 16;
signed short int var_1_10 = 4;
signed short int var_1_11 = 8;
signed long int var_1_12 = -1000;
signed long int var_1_13 = 128;
signed long int var_1_14 = 1463432283;
signed long int var_1_15 = 32;
unsigned long int var_1_16 = 128;
unsigned long int var_1_17 = 8;
unsigned long int var_1_18 = 5;
unsigned char var_1_19 = 200;
unsigned char var_1_20 = 64;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 32;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
signed short int var_1_29 = -16;
unsigned short int var_1_30 = 16;
signed char var_1_31 = -128;
signed char var_1_32 = 10;
signed short int var_1_33 = -128;
double var_1_34 = 10000.8;
double var_1_35 = 0.0;
double var_1_36 = 8.5;
double var_1_37 = 32.5;
unsigned char var_1_38 = 16;
float var_1_39 = 31.2;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_12 = -1000;
unsigned long int last_1_var_1_16 = 128;
unsigned char last_1_var_1_25 = 32;
unsigned char last_1_var_1_26 = 1;
signed short int last_1_var_1_29 = -16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch103100_while
	signed long int stepLocal_5 = last_1_var_1_12;
	if (stepLocal_5 < ((last_1_var_1_29 / -8) & var_1_13)) {
		var_1_21 = ((var_1_22 || var_1_23) || (! (last_1_var_1_26 || var_1_24)));
	} else {
		var_1_21 = var_1_24;
	}


	// From: Req8Batch103100_while
	var_1_26 = (var_1_21 || (var_1_24 && (var_1_27 && var_1_28)));


	// From: Req9Batch103100_while
	signed long int stepLocal_6 = 8;
	if (last_1_var_1_16 > stepLocal_6) {
		var_1_29 = (last_1_var_1_25 + (last_1_var_1_16 - var_1_20));
	} else {
		var_1_29 = var_1_10;
	}


	// From: Req10Batch103100_while
	if (var_1_27) {
		var_1_30 = var_1_20;
	}


	// From: Req14Batch103100_while
	var_1_38 = var_1_20;


	// From: Req15Batch103100_while
	var_1_39 = var_1_35;


	// From: Req2Batch103100_while
	unsigned char stepLocal_0 = var_1_21;
	if (stepLocal_0 && (var_1_30 < var_1_29)) {
		var_1_8 = var_1_10;
	} else {
		var_1_8 = (-8 + var_1_11);
	}


	// From: Req4Batch103100_while
	signed short int stepLocal_3 = var_1_29;
	if (var_1_30 < stepLocal_3) {
		var_1_16 = ((var_1_15 + var_1_17) + (max (var_1_14 , var_1_18)));
	} else {
		var_1_16 = var_1_17;
	}


	// From: Req5Batch103100_while
	signed long int stepLocal_4 = max ((max (var_1_15 , var_1_13)) , var_1_8);
	if (var_1_29 <= stepLocal_4) {
		if (var_1_21) {
			var_1_19 = var_1_20;
		} else {
			if (var_1_26) {
				var_1_19 = var_1_20;
			} else {
				var_1_19 = 64;
			}
		}
	}


	// From: Req7Batch103100_while
	if (! ((var_1_16 > var_1_20) && var_1_26)) {
		var_1_25 = var_1_20;
	} else {
		var_1_25 = (abs (32));
	}


	// From: Req12Batch103100_while
	signed long int stepLocal_10 = var_1_14;
	unsigned char stepLocal_9 = var_1_25;
	if (stepLocal_10 > var_1_18) {
		if (stepLocal_9 > var_1_10) {
			var_1_33 = (var_1_25 - var_1_38);
		}
	}


	// From: Req3Batch103100_while
	signed long int stepLocal_2 = min (var_1_8 , var_1_10);
	signed short int stepLocal_1 = var_1_33;
	if (last_1_var_1_12 == stepLocal_2) {
		if (stepLocal_1 != (var_1_29 * last_1_var_1_12)) {
			if (var_1_21) {
				var_1_12 = (var_1_13 - (var_1_14 - var_1_15));
			}
		} else {
			var_1_12 = var_1_8;
		}
	} else {
		var_1_12 = var_1_11;
	}


	// From: Req1Batch103100_while
	if (var_1_16 <= ((var_1_29 + var_1_33) * var_1_8)) {
		if (var_1_21) {
			var_1_1 = (abs (var_1_7));
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req11Batch103100_while
	unsigned char stepLocal_8 = var_1_27;
	signed short int stepLocal_7 = var_1_10;
	if (stepLocal_8 && (var_1_14 < var_1_12)) {
		if (stepLocal_7 > (var_1_13 | var_1_11)) {
			var_1_31 = (min (-8 , var_1_32));
		} else {
			var_1_31 = var_1_32;
		}
	}


	// From: Req13Batch103100_while
	if (! (var_1_14 > (var_1_30 - var_1_12))) {
		var_1_34 = ((var_1_35 - var_1_36) - var_1_37);
	} else {
		if (63.8f > var_1_7) {
			var_1_34 = (var_1_35 - var_1_37);
		}
	}
}



void updateVariables(void) {
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32767);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -16383);
	assume_abort_if_not(var_1_11 <= 16383);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 1073741823);
	assume_abort_if_not(var_1_14 <= 2147483646);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1073741823);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 254);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -127);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 4611686.018427383000e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_29 = var_1_29;
}

int property(void) {
	return (((((((((((((((var_1_16 <= ((var_1_29 + var_1_33) * var_1_8)) ? (var_1_21 ? (var_1_1 == ((float) (abs (var_1_7)))) : (var_1_1 == ((float) var_1_7))) : (var_1_1 == ((float) var_1_7))) && ((var_1_21 && (var_1_30 < var_1_29)) ? (var_1_8 == ((signed short int) var_1_10)) : (var_1_8 == ((signed short int) (-8 + var_1_11))))) && ((last_1_var_1_12 == (min (var_1_8 , var_1_10))) ? ((var_1_33 != (var_1_29 * last_1_var_1_12)) ? (var_1_21 ? (var_1_12 == ((signed long int) (var_1_13 - (var_1_14 - var_1_15)))) : 1) : (var_1_12 == ((signed long int) var_1_8))) : (var_1_12 == ((signed long int) var_1_11)))) && ((var_1_30 < var_1_29) ? (var_1_16 == ((unsigned long int) ((var_1_15 + var_1_17) + (max (var_1_14 , var_1_18))))) : (var_1_16 == ((unsigned long int) var_1_17)))) && ((var_1_29 <= (max ((max (var_1_15 , var_1_13)) , var_1_8))) ? (var_1_21 ? (var_1_19 == ((unsigned char) var_1_20)) : (var_1_26 ? (var_1_19 == ((unsigned char) var_1_20)) : (var_1_19 == ((unsigned char) 64)))) : 1)) && ((last_1_var_1_12 < ((last_1_var_1_29 / -8) & var_1_13)) ? (var_1_21 == ((unsigned char) ((var_1_22 || var_1_23) || (! (last_1_var_1_26 || var_1_24))))) : (var_1_21 == ((unsigned char) var_1_24)))) && ((! ((var_1_16 > var_1_20) && var_1_26)) ? (var_1_25 == ((unsigned char) var_1_20)) : (var_1_25 == ((unsigned char) (abs (32)))))) && (var_1_26 == ((unsigned char) (var_1_21 || (var_1_24 && (var_1_27 && var_1_28)))))) && ((last_1_var_1_16 > 8) ? (var_1_29 == ((signed short int) (last_1_var_1_25 + (last_1_var_1_16 - var_1_20)))) : (var_1_29 == ((signed short int) var_1_10)))) && (var_1_27 ? (var_1_30 == ((unsigned short int) var_1_20)) : 1)) && ((var_1_27 && (var_1_14 < var_1_12)) ? ((var_1_10 > (var_1_13 | var_1_11)) ? (var_1_31 == ((signed char) (min (-8 , var_1_32)))) : (var_1_31 == ((signed char) var_1_32))) : 1)) && ((var_1_14 > var_1_18) ? ((var_1_25 > var_1_10) ? (var_1_33 == ((signed short int) (var_1_25 - var_1_38))) : 1) : 1)) && ((! (var_1_14 > (var_1_30 - var_1_12))) ? (var_1_34 == ((double) ((var_1_35 - var_1_36) - var_1_37))) : ((63.8f > var_1_7) ? (var_1_34 == ((double) (var_1_35 - var_1_37))) : 1))) && (var_1_38 == ((unsigned char) var_1_20))) && (var_1_39 == ((float) var_1_35))
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
