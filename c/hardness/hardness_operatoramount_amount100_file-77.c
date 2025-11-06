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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch77Amount100.c", 13, "reach_error"); }
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
signed long int var_1_1 = -8;
float var_1_2 = 1.5;
float var_1_3 = 24.7;
signed long int var_1_5 = -2;
signed long int var_1_6 = 5;
signed long int var_1_7 = 10;
float var_1_8 = 0.875;
float var_1_9 = 31.875;
float var_1_10 = 255.25;
float var_1_11 = 0.0;
float var_1_12 = 7.58;
float var_1_13 = 8.6;
float var_1_14 = 49.75;
unsigned char var_1_15 = 1;
signed short int var_1_16 = -64;
signed short int var_1_17 = 0;
double var_1_18 = 15.25;
double var_1_19 = 99.095;
signed long int var_1_20 = -100;
unsigned char var_1_21 = 0;
signed long int var_1_22 = -4;
unsigned short int var_1_23 = 8;
double var_1_24 = 7.4;
unsigned short int var_1_25 = 0;
unsigned char var_1_26 = 25;
unsigned char var_1_27 = 200;
unsigned char var_1_28 = 4;
unsigned char var_1_29 = 128;
unsigned char var_1_30 = 64;
unsigned char var_1_31 = 64;
unsigned char var_1_32 = 10;
signed short int var_1_33 = 5;
float var_1_34 = 16.6;
signed char var_1_35 = -4;
unsigned long int var_1_36 = 8;
double var_1_37 = 3.15;
unsigned long int var_1_38 = 4;
unsigned long int var_1_39 = 5;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 16;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch77Amount100
	signed long int stepLocal_0 = 64;
	if (stepLocal_0 <= var_1_5) {
		var_1_8 = ((max (var_1_9 , var_1_10)) - (var_1_12 + (var_1_13 + var_1_14)));
	} else {
		if (var_1_15) {
			var_1_8 = (abs (max (var_1_13 , var_1_11)));
		} else {
			var_1_8 = (var_1_12 - 2.125f);
		}
	}


	// From: Req3Batch77Amount100
	if ((max ((var_1_2 * var_1_10) , var_1_11)) > var_1_9) {
		if (var_1_13 != var_1_2) {
			var_1_16 = var_1_17;
		} else {
			var_1_16 = -64;
		}
	} else {
		var_1_16 = var_1_17;
	}


	// From: Req4Batch77Amount100
	if (var_1_15) {
		var_1_18 = (var_1_12 + (min (var_1_13 , (var_1_14 - var_1_19))));
	} else {
		var_1_18 = (var_1_12 - (min (var_1_19 , 9.85)));
	}


	// From: Req5Batch77Amount100
	if (! (var_1_15 && var_1_21)) {
		var_1_20 = (var_1_22 + var_1_6);
	}


	// From: Req6Batch77Amount100
	if (var_1_19 >= (var_1_13 + (var_1_24 - var_1_10))) {
		var_1_23 = var_1_25;
	}


	// From: Req7Batch77Amount100
	if (var_1_24 != var_1_12) {
		if (var_1_21) {
			var_1_26 = ((min ((var_1_27 - var_1_28) , var_1_29)) - ((max (var_1_30 , var_1_31)) - var_1_32));
		}
	} else {
		var_1_26 = var_1_28;
	}


	// From: Req9Batch77Amount100
	if (var_1_18 <= var_1_9) {
		if (var_1_15 && var_1_21) {
			var_1_34 = var_1_10;
		}
	} else {
		if ((var_1_7 / var_1_30) < var_1_6) {
			var_1_34 = var_1_12;
		} else {
			var_1_34 = var_1_13;
		}
	}


	// From: Req12Batch77Amount100
	signed long int stepLocal_2 = (var_1_30 - var_1_32) << (max (var_1_38 , var_1_39));
	if (var_1_16 >= stepLocal_2) {
		var_1_37 = (var_1_14 + (0.8 + var_1_13));
	}


	// From: Req13Batch77Amount100
	var_1_40 = var_1_29;


	// From: Req14Batch77Amount100
	var_1_41 = var_1_28;


	// From: Req1Batch77Amount100
	if ((var_1_2 - var_1_3) >= var_1_37) {
		var_1_1 = ((var_1_5 + var_1_6) + var_1_7);
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req8Batch77Amount100
	unsigned char stepLocal_1 = var_1_13 > var_1_2;
	if (stepLocal_1 || var_1_15) {
		var_1_33 = (var_1_32 + var_1_29);
	} else {
		var_1_33 = (min ((var_1_27 - (var_1_41 + var_1_29)) , var_1_31));
	}


	// From: Req10Batch77Amount100
	if (var_1_34 == var_1_37) {
		var_1_35 = var_1_32;
	} else {
		var_1_35 = (max (var_1_27 , (abs (var_1_32 - 32))));
	}


	// From: Req11Batch77Amount100
	if (((max (var_1_25 , var_1_29)) < var_1_22) || var_1_15) {
		var_1_36 = (min (var_1_40 , (3904029583u - 2u)));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -536870911);
	assume_abort_if_not(var_1_5 <= 536870912);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -536870911);
	assume_abort_if_not(var_1_6 <= 536870911);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -1073741823);
	assume_abort_if_not(var_1_7 <= 1073741823);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 6917529.027641074000e+12F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691400e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= -32767);
	assume_abort_if_not(var_1_17 <= 32766);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= -1073741823);
	assume_abort_if_not(var_1_22 <= 1073741823);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 65534);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 190);
	assume_abort_if_not(var_1_27 <= 254);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 127);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 63);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 63);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 24);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 24);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((((((((var_1_2 - var_1_3) >= var_1_37) ? (var_1_1 == ((signed long int) ((var_1_5 + var_1_6) + var_1_7))) : (var_1_1 == ((signed long int) var_1_7))) && ((64 <= var_1_5) ? (var_1_8 == ((float) ((max (var_1_9 , var_1_10)) - (var_1_12 + (var_1_13 + var_1_14))))) : (var_1_15 ? (var_1_8 == ((float) (abs (max (var_1_13 , var_1_11))))) : (var_1_8 == ((float) (var_1_12 - 2.125f)))))) && (((max ((var_1_2 * var_1_10) , var_1_11)) > var_1_9) ? ((var_1_13 != var_1_2) ? (var_1_16 == ((signed short int) var_1_17)) : (var_1_16 == ((signed short int) -64))) : (var_1_16 == ((signed short int) var_1_17)))) && (var_1_15 ? (var_1_18 == ((double) (var_1_12 + (min (var_1_13 , (var_1_14 - var_1_19)))))) : (var_1_18 == ((double) (var_1_12 - (min (var_1_19 , 9.85))))))) && ((! (var_1_15 && var_1_21)) ? (var_1_20 == ((signed long int) (var_1_22 + var_1_6))) : 1)) && ((var_1_19 >= (var_1_13 + (var_1_24 - var_1_10))) ? (var_1_23 == ((unsigned short int) var_1_25)) : 1)) && ((var_1_24 != var_1_12) ? (var_1_21 ? (var_1_26 == ((unsigned char) ((min ((var_1_27 - var_1_28) , var_1_29)) - ((max (var_1_30 , var_1_31)) - var_1_32)))) : 1) : (var_1_26 == ((unsigned char) var_1_28)))) && (((var_1_13 > var_1_2) || var_1_15) ? (var_1_33 == ((signed short int) (var_1_32 + var_1_29))) : (var_1_33 == ((signed short int) (min ((var_1_27 - (var_1_41 + var_1_29)) , var_1_31)))))) && ((var_1_18 <= var_1_9) ? ((var_1_15 && var_1_21) ? (var_1_34 == ((float) var_1_10)) : 1) : (((var_1_7 / var_1_30) < var_1_6) ? (var_1_34 == ((float) var_1_12)) : (var_1_34 == ((float) var_1_13))))) && ((var_1_34 == var_1_37) ? (var_1_35 == ((signed char) var_1_32)) : (var_1_35 == ((signed char) (max (var_1_27 , (abs (var_1_32 - 32)))))))) && ((((max (var_1_25 , var_1_29)) < var_1_22) || var_1_15) ? (var_1_36 == ((unsigned long int) (min (var_1_40 , (3904029583u - 2u))))) : 1)) && ((var_1_16 >= ((var_1_30 - var_1_32) << (max (var_1_38 , var_1_39)))) ? (var_1_37 == ((double) (var_1_14 + (0.8 + var_1_13)))) : 1)) && (var_1_40 == ((unsigned char) var_1_29))) && (var_1_41 == ((unsigned char) var_1_28))
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
