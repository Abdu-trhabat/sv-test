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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch86100_while.c", 13, "reach_error"); }
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
signed char var_1_1 = 0;
unsigned char var_1_2 = 1;
double var_1_3 = 32.7;
double var_1_4 = 9.8;
unsigned char var_1_5 = 1;
signed char var_1_6 = 32;
signed char var_1_7 = 32;
signed char var_1_8 = 1;
signed char var_1_9 = 32;
signed char var_1_10 = 5;
signed char var_1_11 = 2;
signed char var_1_12 = -100;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed short int var_1_15 = 256;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 32;
double var_1_18 = 7.35;
float var_1_19 = 127.5;
float var_1_20 = 50.5;
float var_1_21 = 64.3;
float var_1_22 = 32.2;
signed short int var_1_23 = -16;
float var_1_24 = 49.625;
unsigned char var_1_25 = 8;
signed char var_1_26 = 16;
unsigned long int var_1_27 = 5;
unsigned short int var_1_28 = 38184;
unsigned long int var_1_29 = 3000372230;
unsigned long int var_1_30 = 50;
unsigned long int var_1_31 = 16;
unsigned long int var_1_32 = 1979305615;
unsigned long int var_1_33 = 256;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_31 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch86100_while
	if ((last_1_var_1_31 / var_1_26) >= var_1_7) {
		var_1_25 = (max (var_1_7 , var_1_9));
	} else {
		var_1_25 = (min ((var_1_7 + var_1_9) , var_1_6));
	}


	// From: Req10Batch86100_while
	if (var_1_18 >= var_1_3) {
		if (var_1_9 > var_1_25) {
			var_1_31 = (((min (var_1_28 , var_1_6)) + 32u) + (var_1_32 - var_1_9));
		}
	} else {
		if ((var_1_9 * (var_1_28 % var_1_33)) <= var_1_30) {
			var_1_31 = var_1_32;
		} else {
			var_1_31 = var_1_6;
		}
	}


	// From: Req2Batch86100_while
	if (10u <= (var_1_7 << var_1_6)) {
		if (var_1_2) {
			var_1_13 = (var_1_5 && var_1_14);
		} else {
			var_1_13 = (! var_1_14);
		}
	}


	// From: Req4Batch86100_while
	if (var_1_3 < ((6.736414387757392E18 - var_1_18) - (4.920824164553118E18 - 24.5))) {
		var_1_17 = (32 + (64 - var_1_9));
	} else {
		var_1_17 = (min (var_1_10 , 200));
	}


	// From: Req1Batch86100_while
	if (! (var_1_13 || (var_1_3 > var_1_4))) {
		if (var_1_13) {
			if (var_1_13) {
				var_1_1 = (abs ((var_1_6 - var_1_7) + var_1_8));
			} else {
				var_1_1 = (min ((var_1_7 - var_1_6) , ((var_1_9 + var_1_10) - var_1_11)));
			}
		} else {
			var_1_1 = var_1_12;
		}
	} else {
		var_1_1 = var_1_10;
	}


	// From: Req3Batch86100_while
	signed long int stepLocal_1 = (var_1_17 + var_1_10) + var_1_12;
	signed long int stepLocal_0 = 256 / 128;
	if ((var_1_6 + var_1_11) < stepLocal_0) {
		if (var_1_6 >= stepLocal_1) {
			var_1_15 = -8;
		} else {
			var_1_15 = var_1_17;
		}
	} else {
		var_1_15 = var_1_8;
	}


	// From: Req6Batch86100_while
	if ((min ((var_1_15 * var_1_10) , var_1_6)) >= (~ var_1_12)) {
		if (var_1_13) {
			var_1_23 = var_1_6;
		} else {
			var_1_23 = var_1_9;
		}
	} else {
		var_1_23 = var_1_12;
	}


	// From: Req9Batch86100_while
	if ((var_1_28 - var_1_11) >= (var_1_15 + var_1_23)) {
		var_1_27 = (abs (var_1_29 - (min (var_1_9 , var_1_15))));
	} else {
		var_1_27 = var_1_30;
	}


	// From: Req5Batch86100_while
	if (var_1_23 >= var_1_12) {
		var_1_19 = ((var_1_20 + var_1_21) + var_1_22);
	}


	// From: Req7Batch86100_while
	if (var_1_19 > var_1_18) {
		var_1_24 = (min ((abs (9.99999999994E10f)) , var_1_20));
	} else {
		if (var_1_16 && var_1_13) {
			var_1_24 = var_1_22;
		} else {
			var_1_24 = var_1_20;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -63);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427388000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -230584.3009213691400e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691400e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	assume_abort_if_not(var_1_26 != 0);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 32767);
	assume_abort_if_not(var_1_28 <= 65535);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 2147483647);
	assume_abort_if_not(var_1_29 <= 4294967294);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 1073741823);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967295);
	assume_abort_if_not(var_1_33 != 0);
}



void updateLastVariables(void) {
	last_1_var_1_31 = var_1_31;
}

int property(void) {
	return ((((((((((! (var_1_13 || (var_1_3 > var_1_4))) ? (var_1_13 ? (var_1_13 ? (var_1_1 == ((signed char) (abs ((var_1_6 - var_1_7) + var_1_8)))) : (var_1_1 == ((signed char) (min ((var_1_7 - var_1_6) , ((var_1_9 + var_1_10) - var_1_11)))))) : (var_1_1 == ((signed char) var_1_12))) : (var_1_1 == ((signed char) var_1_10))) && ((10u <= (var_1_7 << var_1_6)) ? (var_1_2 ? (var_1_13 == ((unsigned char) (var_1_5 && var_1_14))) : (var_1_13 == ((unsigned char) (! var_1_14)))) : 1)) && (((var_1_6 + var_1_11) < (256 / 128)) ? ((var_1_6 >= ((var_1_17 + var_1_10) + var_1_12)) ? (var_1_15 == ((signed short int) -8)) : (var_1_15 == ((signed short int) var_1_17))) : (var_1_15 == ((signed short int) var_1_8)))) && ((var_1_3 < ((6.736414387757392E18 - var_1_18) - (4.920824164553118E18 - 24.5))) ? (var_1_17 == ((unsigned char) (32 + (64 - var_1_9)))) : (var_1_17 == ((unsigned char) (min (var_1_10 , 200)))))) && ((var_1_23 >= var_1_12) ? (var_1_19 == ((float) ((var_1_20 + var_1_21) + var_1_22))) : 1)) && (((min ((var_1_15 * var_1_10) , var_1_6)) >= (~ var_1_12)) ? (var_1_13 ? (var_1_23 == ((signed short int) var_1_6)) : (var_1_23 == ((signed short int) var_1_9))) : (var_1_23 == ((signed short int) var_1_12)))) && ((var_1_19 > var_1_18) ? (var_1_24 == ((float) (min ((abs (9.99999999994E10f)) , var_1_20)))) : ((var_1_16 && var_1_13) ? (var_1_24 == ((float) var_1_22)) : (var_1_24 == ((float) var_1_20))))) && (((last_1_var_1_31 / var_1_26) >= var_1_7) ? (var_1_25 == ((unsigned char) (max (var_1_7 , var_1_9)))) : (var_1_25 == ((unsigned char) (min ((var_1_7 + var_1_9) , var_1_6)))))) && (((var_1_28 - var_1_11) >= (var_1_15 + var_1_23)) ? (var_1_27 == ((unsigned long int) (abs (var_1_29 - (min (var_1_9 , var_1_15)))))) : (var_1_27 == ((unsigned long int) var_1_30)))) && ((var_1_18 >= var_1_3) ? ((var_1_9 > var_1_25) ? (var_1_31 == ((unsigned long int) (((min (var_1_28 , var_1_6)) + 32u) + (var_1_32 - var_1_9)))) : 1) : (((var_1_9 * (var_1_28 % var_1_33)) <= var_1_30) ? (var_1_31 == ((unsigned long int) var_1_32)) : (var_1_31 == ((unsigned long int) var_1_6))))
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
