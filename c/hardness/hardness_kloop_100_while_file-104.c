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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch104100_while.c", 13, "reach_error"); }
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
signed long int var_1_2 = 256;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned short int var_1_7 = 16;
unsigned short int var_1_9 = 5;
float var_1_10 = 0.4;
float var_1_12 = 15.6;
float var_1_13 = 3.875;
float var_1_14 = 15.5;
float var_1_15 = 32.5;
signed long int var_1_16 = -2;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned short int var_1_20 = 0;
unsigned short int var_1_21 = 36653;
unsigned short int var_1_22 = 5;
unsigned short int var_1_23 = 64;
unsigned short int var_1_24 = 100;
unsigned long int var_1_25 = 256;
unsigned long int var_1_26 = 2472117547;
float var_1_27 = 9.95;
signed short int var_1_28 = 64;
signed char var_1_29 = 0;
signed char var_1_30 = 2;
double var_1_31 = 3.8;
unsigned short int var_1_32 = 256;
double var_1_33 = 10.5;
double var_1_34 = 100.6;
unsigned char var_1_35 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch104100_while
	var_1_17 = (var_1_6 || (var_1_18 || var_1_19));


	// From: Req6Batch104100_while
	var_1_20 = (var_1_21 - ((var_1_22 + 5) + var_1_23));


	// From: Req7Batch104100_while
	var_1_24 = ((max (var_1_23 , var_1_22)) + 4);


	// From: Req10Batch104100_while
	signed long int stepLocal_2 = min (var_1_24 , var_1_22);
	if (stepLocal_2 <= 64) {
		var_1_29 = (var_1_30 - 5);
	}


	// From: Req11Batch104100_while
	signed long int stepLocal_3 = var_1_21 - (var_1_23 + var_1_32);
	if (var_1_22 > stepLocal_3) {
		var_1_31 = (var_1_12 - var_1_14);
	}


	// From: Req4Batch104100_while
	signed long int stepLocal_0 = var_1_2;
	if (var_1_20 == stepLocal_0) {
		if ((var_1_15 * var_1_12) <= var_1_13) {
			var_1_16 = var_1_20;
		} else {
			var_1_16 = var_1_9;
		}
	} else {
		var_1_16 = var_1_20;
	}


	// From: Req8Batch104100_while
	if (4u <= var_1_22) {
		var_1_25 = (var_1_26 - var_1_9);
	} else {
		if (var_1_22 <= (var_1_9 ^ var_1_16)) {
			var_1_25 = (abs (var_1_26 - var_1_24));
		} else {
			var_1_25 = (min ((var_1_23 + (1506566004u - var_1_24)) , var_1_16));
		}
	}


	// From: Req1Batch104100_while
	if (100 > (min (var_1_25 , var_1_16))) {
		var_1_1 = var_1_4;
	} else {
		var_1_1 = ((! (var_1_4 || var_1_5)) || var_1_6);
	}


	// From: Req12Batch104100_while
	if (8 >= var_1_16) {
		if ((var_1_18 && var_1_17) && var_1_1) {
			var_1_33 = (max ((var_1_14 + (var_1_12 + var_1_13)) , (var_1_15 + var_1_34)));
		} else {
			if (var_1_25 < var_1_22) {
				var_1_33 = var_1_14;
			}
		}
	}


	// From: Req2Batch104100_while
	if (var_1_5) {
		if (! ((- var_1_33) == 0.54)) {
			var_1_7 = (56658 - var_1_9);
		} else {
			var_1_7 = var_1_9;
		}
	}


	// From: Req3Batch104100_while
	if (var_1_33 != var_1_31) {
		var_1_10 = (((var_1_12 - var_1_13) + (128.6f - var_1_14)) + var_1_15);
	} else {
		var_1_10 = 10.3f;
	}


	// From: Req13Batch104100_while
	unsigned short int stepLocal_5 = var_1_9;
	unsigned short int stepLocal_4 = var_1_24;
	if (stepLocal_5 >= var_1_16) {
		if (var_1_31 >= var_1_10) {
			if (stepLocal_4 > (min (var_1_25 , var_1_26))) {
				var_1_35 = (var_1_5 && var_1_4);
			} else {
				var_1_35 = var_1_4;
			}
		}
	}


	// From: Req9Batch104100_while
	unsigned long int stepLocal_1 = min ((var_1_9 + var_1_25) , (var_1_16 * var_1_25));
	if (! (var_1_35 || (var_1_21 >= var_1_25))) {
		if (stepLocal_1 < var_1_28) {
			var_1_27 = var_1_13;
		} else {
			var_1_27 = var_1_15;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691400e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 32767);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 8192);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 2147483647);
	assume_abort_if_not(var_1_26 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -1);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 16383);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((((((100 > (min (var_1_25 , var_1_16))) ? (var_1_1 == ((unsigned char) var_1_4)) : (var_1_1 == ((unsigned char) ((! (var_1_4 || var_1_5)) || var_1_6)))) && (var_1_5 ? ((! ((- var_1_33) == 0.54)) ? (var_1_7 == ((unsigned short int) (56658 - var_1_9))) : (var_1_7 == ((unsigned short int) var_1_9))) : 1)) && ((var_1_33 != var_1_31) ? (var_1_10 == ((float) (((var_1_12 - var_1_13) + (128.6f - var_1_14)) + var_1_15))) : (var_1_10 == ((float) 10.3f)))) && ((var_1_20 == var_1_2) ? (((var_1_15 * var_1_12) <= var_1_13) ? (var_1_16 == ((signed long int) var_1_20)) : (var_1_16 == ((signed long int) var_1_9))) : (var_1_16 == ((signed long int) var_1_20)))) && (var_1_17 == ((unsigned char) (var_1_6 || (var_1_18 || var_1_19))))) && (var_1_20 == ((unsigned short int) (var_1_21 - ((var_1_22 + 5) + var_1_23))))) && (var_1_24 == ((unsigned short int) ((max (var_1_23 , var_1_22)) + 4)))) && ((4u <= var_1_22) ? (var_1_25 == ((unsigned long int) (var_1_26 - var_1_9))) : ((var_1_22 <= (var_1_9 ^ var_1_16)) ? (var_1_25 == ((unsigned long int) (abs (var_1_26 - var_1_24)))) : (var_1_25 == ((unsigned long int) (min ((var_1_23 + (1506566004u - var_1_24)) , var_1_16))))))) && ((! (var_1_35 || (var_1_21 >= var_1_25))) ? (((min ((var_1_9 + var_1_25) , (var_1_16 * var_1_25))) < var_1_28) ? (var_1_27 == ((float) var_1_13)) : (var_1_27 == ((float) var_1_15))) : 1)) && (((min (var_1_24 , var_1_22)) <= 64) ? (var_1_29 == ((signed char) (var_1_30 - 5))) : 1)) && ((var_1_22 > (var_1_21 - (var_1_23 + var_1_32))) ? (var_1_31 == ((double) (var_1_12 - var_1_14))) : 1)) && ((8 >= var_1_16) ? (((var_1_18 && var_1_17) && var_1_1) ? (var_1_33 == ((double) (max ((var_1_14 + (var_1_12 + var_1_13)) , (var_1_15 + var_1_34))))) : ((var_1_25 < var_1_22) ? (var_1_33 == ((double) var_1_14)) : 1)) : 1)) && ((var_1_9 >= var_1_16) ? ((var_1_31 >= var_1_10) ? ((var_1_24 > (min (var_1_25 , var_1_26))) ? (var_1_35 == ((unsigned char) (var_1_5 && var_1_4))) : (var_1_35 == ((unsigned char) var_1_4))) : 1) : 1)
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
