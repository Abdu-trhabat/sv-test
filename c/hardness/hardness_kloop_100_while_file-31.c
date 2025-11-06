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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch31100_while.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 200;
unsigned long int var_1_4 = 32;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 50;
unsigned short int var_1_14 = 5;
float var_1_15 = 8.2;
float var_1_18 = 7.5;
float var_1_19 = 7.9;
float var_1_20 = 9.25;
float var_1_21 = 3.5;
double var_1_22 = 128.2;
unsigned char var_1_23 = 0;
double var_1_24 = 25.5;
double var_1_25 = 15.5;
double var_1_26 = 64.9;
double var_1_27 = 100000000000.2;
double var_1_28 = 499.4;
unsigned long int var_1_29 = 1;
unsigned long int var_1_30 = 4100045133;
unsigned char var_1_31 = 2;
unsigned long int var_1_32 = 100;
unsigned short int var_1_33 = 1;
unsigned short int var_1_34 = 65242;
unsigned char var_1_35 = 0;
double var_1_36 = 10000000000.4;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 200;
unsigned long int last_1_var_1_29 = 1;
unsigned char last_1_var_1_31 = 2;
unsigned long int last_1_var_1_32 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch31100_while
	unsigned long int stepLocal_8 = (last_1_var_1_29 % var_1_14) / var_1_4;
	if (stepLocal_8 == last_1_var_1_29) {
		var_1_32 = (min ((last_1_var_1_32 + (8u + last_1_var_1_1)) , (var_1_14 + (min (var_1_6 , last_1_var_1_31)))));
	}


	// From: Req7Batch31100_while
	var_1_24 = ((var_1_25 + var_1_26) + (var_1_27 + var_1_28));


	// From: Req8Batch31100_while
	var_1_29 = (abs (var_1_30 - var_1_14));


	// From: Req9Batch31100_while
	var_1_31 = var_1_6;


	// From: Req12Batch31100_while
	var_1_35 = (! ((var_1_24 <= var_1_19) || (var_1_11 && var_1_12)));


	// From: Req5Batch31100_while
	if (var_1_29 == var_1_32) {
		var_1_22 = (max (var_1_21 , var_1_20));
	}


	// From: Req13Batch31100_while
	unsigned long int stepLocal_10 = var_1_32;
	unsigned long int stepLocal_9 = var_1_29;
	if ((- var_1_6) >= stepLocal_9) {
		if (stepLocal_10 >= var_1_34) {
			var_1_36 = var_1_20;
		} else {
			var_1_36 = (var_1_27 + var_1_20);
		}
	} else {
		if (var_1_22 != (var_1_20 + var_1_28)) {
			var_1_36 = var_1_26;
		} else {
			var_1_36 = var_1_20;
		}
	}


	// From: Req4Batch31100_while
	if (var_1_36 > var_1_24) {
		var_1_15 = (var_1_18 - (min ((var_1_19 + var_1_20) , (var_1_21 + 32.5f))));
	}


	// From: Req6Batch31100_while
	if ((- var_1_36) <= (var_1_22 * var_1_15)) {
		if (var_1_12) {
			var_1_23 = var_1_10;
		}
	}


	// From: Req2Batch31100_while
	unsigned long int stepLocal_4 = - var_1_32;
	unsigned char stepLocal_3 = var_1_23 && var_1_35;
	if (stepLocal_3 && var_1_23) {
		if (var_1_4 == stepLocal_4) {
			var_1_7 = (! (! (! var_1_10)));
		} else {
			var_1_7 = 0;
		}
	} else {
		var_1_7 = (var_1_11 && var_1_12);
	}


	// From: Req1Batch31100_while
	unsigned long int stepLocal_2 = var_1_29;
	unsigned char stepLocal_1 = var_1_32 < var_1_4;
	unsigned long int stepLocal_0 = var_1_6 + var_1_29;
	if ((var_1_32 % var_1_4) >= stepLocal_2) {
		if (var_1_7 && stepLocal_1) {
			var_1_1 = var_1_6;
		}
	} else {
		if (stepLocal_0 > var_1_32) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = 1;
		}
	}


	// From: Req11Batch31100_while
	if (! var_1_23) {
		var_1_33 = ((var_1_14 + (min (var_1_6 , var_1_29))) + 128);
	} else {
		var_1_33 = (abs (var_1_34 - 10));
	}


	// From: Req3Batch31100_while
	unsigned long int stepLocal_7 = var_1_29;
	signed long int stepLocal_6 = var_1_1 & 16;
	unsigned char stepLocal_5 = var_1_29 < (var_1_6 >> var_1_14);
	if (stepLocal_7 < var_1_1) {
		if (var_1_12 || stepLocal_5) {
			if (stepLocal_6 <= var_1_29) {
				var_1_13 = var_1_14;
			} else {
				var_1_13 = var_1_6;
			}
		} else {
			var_1_13 = var_1_6;
		}
	} else {
		var_1_13 = var_1_6;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	assume_abort_if_not(var_1_4 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 7);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -230584.3009213691400e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691400e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -230584.3009213691400e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691400e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -230584.3009213691400e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -230584.3009213691400e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 2147483647);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 32767);
	assume_abort_if_not(var_1_34 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_32 = var_1_32;
}

int property(void) {
	return ((((((((((((((var_1_32 % var_1_4) >= var_1_29) ? ((var_1_7 && (var_1_32 < var_1_4)) ? (var_1_1 == ((unsigned char) var_1_6)) : 1) : (((var_1_6 + var_1_29) > var_1_32) ? (var_1_1 == ((unsigned char) var_1_6)) : (var_1_1 == ((unsigned char) 1)))) && (((var_1_23 && var_1_35) && var_1_23) ? ((var_1_4 == (- var_1_32)) ? (var_1_7 == ((unsigned char) (! (! (! var_1_10))))) : (var_1_7 == ((unsigned char) 0))) : (var_1_7 == ((unsigned char) (var_1_11 && var_1_12))))) && ((var_1_29 < var_1_1) ? ((var_1_12 || (var_1_29 < (var_1_6 >> var_1_14))) ? (((var_1_1 & 16) <= var_1_29) ? (var_1_13 == ((unsigned char) var_1_14)) : (var_1_13 == ((unsigned char) var_1_6))) : (var_1_13 == ((unsigned char) var_1_6))) : (var_1_13 == ((unsigned char) var_1_6)))) && ((var_1_36 > var_1_24) ? (var_1_15 == ((float) (var_1_18 - (min ((var_1_19 + var_1_20) , (var_1_21 + 32.5f)))))) : 1)) && ((var_1_29 == var_1_32) ? (var_1_22 == ((double) (max (var_1_21 , var_1_20)))) : 1)) && (((- var_1_36) <= (var_1_22 * var_1_15)) ? (var_1_12 ? (var_1_23 == ((unsigned char) var_1_10)) : 1) : 1)) && (var_1_24 == ((double) ((var_1_25 + var_1_26) + (var_1_27 + var_1_28))))) && (var_1_29 == ((unsigned long int) (abs (var_1_30 - var_1_14))))) && (var_1_31 == ((unsigned char) var_1_6))) && ((((last_1_var_1_29 % var_1_14) / var_1_4) == last_1_var_1_29) ? (var_1_32 == ((unsigned long int) (min ((last_1_var_1_32 + (8u + last_1_var_1_1)) , (var_1_14 + (min (var_1_6 , last_1_var_1_31))))))) : 1)) && ((! var_1_23) ? (var_1_33 == ((unsigned short int) ((var_1_14 + (min (var_1_6 , var_1_29))) + 128))) : (var_1_33 == ((unsigned short int) (abs (var_1_34 - 10)))))) && (var_1_35 == ((unsigned char) (! ((var_1_24 <= var_1_19) || (var_1_11 && var_1_12)))))) && (((- var_1_6) >= var_1_29) ? ((var_1_32 >= var_1_34) ? (var_1_36 == ((double) var_1_20)) : (var_1_36 == ((double) (var_1_27 + var_1_20)))) : ((var_1_22 != (var_1_20 + var_1_28)) ? (var_1_36 == ((double) var_1_26)) : (var_1_36 == ((double) var_1_20))))
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
