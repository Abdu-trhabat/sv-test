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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch72Amount100.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed short int var_1_8 = -16;
signed short int var_1_9 = 64;
signed short int var_1_10 = -100;
signed short int var_1_11 = -8;
signed long int var_1_12 = -10;
double var_1_13 = 99.5;
double var_1_14 = 127.8;
double var_1_15 = 1.375;
double var_1_16 = 8.5;
double var_1_17 = 255.625;
signed char var_1_18 = 2;
signed char var_1_19 = 64;
signed char var_1_20 = 16;
signed long int var_1_21 = 256;
signed long int var_1_22 = 5;
unsigned long int var_1_23 = 100;
signed short int var_1_24 = 16;
unsigned long int var_1_25 = 8;
signed char var_1_26 = -4;
double var_1_27 = 7.9;
double var_1_28 = 99999.9;
double var_1_29 = 0.19999999999999996;
signed char var_1_30 = -50;
signed char var_1_31 = 50;
signed char var_1_32 = 64;
unsigned short int var_1_33 = 2;
float var_1_34 = 31.5;
float var_1_35 = 0.8;
unsigned long int var_1_36 = 3153691148;
unsigned long int var_1_37 = 1370372155;
signed short int var_1_38 = -16;
signed long int var_1_39 = -200;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_38 = -16;
signed long int last_1_var_1_39 = -200;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch72Amount100
	signed char stepLocal_3 = var_1_19;
	signed long int stepLocal_2 = last_1_var_1_39;
	if (var_1_11 >= stepLocal_2) {
		var_1_38 = (var_1_19 - var_1_31);
	} else {
		if (stepLocal_3 >= last_1_var_1_39) {
			var_1_38 = (min (var_1_11 , last_1_var_1_38));
		}
	}


	// From: Req1Batch72Amount100
	unsigned char stepLocal_0 = var_1_3;
	if (var_1_2 || stepLocal_0) {
		var_1_1 = (var_1_3 && var_1_4);
	} else {
		var_1_1 = (var_1_4 && ((var_1_5 || var_1_6) || var_1_7));
	}


	// From: Req2Batch72Amount100
	if (var_1_1) {
		var_1_8 = (min ((-10000 + var_1_9) , ((var_1_10 + 64) + var_1_11)));
	} else {
		var_1_8 = var_1_9;
	}


	// From: Req3Batch72Amount100
	signed long int stepLocal_1 = var_1_21 - var_1_22;
	if ((var_1_13 / (min (var_1_14 , var_1_15))) >= (var_1_16 * var_1_17)) {
		if (var_1_14 >= (var_1_15 * var_1_13)) {
			var_1_12 = (var_1_9 + var_1_11);
		} else {
			var_1_12 = (var_1_8 + var_1_11);
		}
	} else {
		if (((var_1_19 - var_1_20) - var_1_18) > stepLocal_1) {
			var_1_12 = var_1_10;
		} else {
			var_1_12 = var_1_11;
		}
	}


	// From: Req5Batch72Amount100
	if (var_1_1 && (! var_1_5)) {
		var_1_24 = (abs (var_1_9));
	} else {
		if (var_1_20 != (var_1_21 * var_1_11)) {
			var_1_24 = var_1_10;
		} else {
			var_1_24 = var_1_9;
		}
	}


	// From: Req8Batch72Amount100
	if (var_1_6) {
		var_1_27 = (2.75 + (var_1_28 + var_1_29));
	}


	// From: Req9Batch72Amount100
	var_1_30 = (min ((var_1_20 - var_1_31) , var_1_32));


	// From: Req10Batch72Amount100
	if (64.125f < (var_1_34 - var_1_35)) {
		if ((var_1_36 - (var_1_37 - var_1_18)) > var_1_22) {
			var_1_33 = var_1_18;
		}
	}


	// From: Req4Batch72Amount100
	if ((var_1_27 > 4.875) && var_1_7) {
		if (var_1_14 != (var_1_27 / var_1_15)) {
			var_1_23 = var_1_22;
		} else {
			var_1_23 = 2u;
		}
	}


	// From: Req6Batch72Amount100
	if ((var_1_27 / (min (var_1_14 , var_1_15))) >= var_1_27) {
		if (var_1_4) {
			var_1_25 = (var_1_19 + (max (var_1_20 , var_1_22)));
		} else {
			var_1_25 = (var_1_18 + 1u);
		}
	}


	// From: Req7Batch72Amount100
	if (((var_1_27 / var_1_14) * var_1_27) == 100000.5) {
		var_1_26 = var_1_20;
	}


	// From: Req12Batch72Amount100
	if ((- var_1_25) != (- var_1_23)) {
		if (var_1_30 > 64) {
			var_1_39 = ((min (var_1_38 , -5)) + var_1_30);
		} else {
			var_1_39 = var_1_38;
		}
	} else {
		var_1_39 = var_1_10;
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
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -16383);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -8191);
	assume_abort_if_not(var_1_10 <= 8192);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -16383);
	assume_abort_if_not(var_1_11 <= 16383);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	assume_abort_if_not(var_1_14 != 0.0F);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 63);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 64);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= -1);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -230584.3009213691400e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -230584.3009213691400e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -127);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 2147483647);
	assume_abort_if_not(var_1_36 <= 4294967295);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 1073741823);
	assume_abort_if_not(var_1_37 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_38 = var_1_38;
	last_1_var_1_39 = var_1_39;
}

int property(void) {
	return ((((((((((((var_1_2 || var_1_3) ? (var_1_1 == ((unsigned char) (var_1_3 && var_1_4))) : (var_1_1 == ((unsigned char) (var_1_4 && ((var_1_5 || var_1_6) || var_1_7))))) && (var_1_1 ? (var_1_8 == ((signed short int) (min ((-10000 + var_1_9) , ((var_1_10 + 64) + var_1_11))))) : (var_1_8 == ((signed short int) var_1_9)))) && (((var_1_13 / (min (var_1_14 , var_1_15))) >= (var_1_16 * var_1_17)) ? ((var_1_14 >= (var_1_15 * var_1_13)) ? (var_1_12 == ((signed long int) (var_1_9 + var_1_11))) : (var_1_12 == ((signed long int) (var_1_8 + var_1_11)))) : ((((var_1_19 - var_1_20) - var_1_18) > (var_1_21 - var_1_22)) ? (var_1_12 == ((signed long int) var_1_10)) : (var_1_12 == ((signed long int) var_1_11))))) && (((var_1_27 > 4.875) && var_1_7) ? ((var_1_14 != (var_1_27 / var_1_15)) ? (var_1_23 == ((unsigned long int) var_1_22)) : (var_1_23 == ((unsigned long int) 2u))) : 1)) && ((var_1_1 && (! var_1_5)) ? (var_1_24 == ((signed short int) (abs (var_1_9)))) : ((var_1_20 != (var_1_21 * var_1_11)) ? (var_1_24 == ((signed short int) var_1_10)) : (var_1_24 == ((signed short int) var_1_9))))) && (((var_1_27 / (min (var_1_14 , var_1_15))) >= var_1_27) ? (var_1_4 ? (var_1_25 == ((unsigned long int) (var_1_19 + (max (var_1_20 , var_1_22))))) : (var_1_25 == ((unsigned long int) (var_1_18 + 1u)))) : 1)) && ((((var_1_27 / var_1_14) * var_1_27) == 100000.5) ? (var_1_26 == ((signed char) var_1_20)) : 1)) && (var_1_6 ? (var_1_27 == ((double) (2.75 + (var_1_28 + var_1_29)))) : 1)) && (var_1_30 == ((signed char) (min ((var_1_20 - var_1_31) , var_1_32))))) && ((64.125f < (var_1_34 - var_1_35)) ? (((var_1_36 - (var_1_37 - var_1_18)) > var_1_22) ? (var_1_33 == ((unsigned short int) var_1_18)) : 1) : 1)) && ((var_1_11 >= last_1_var_1_39) ? (var_1_38 == ((signed short int) (var_1_19 - var_1_31))) : ((var_1_19 >= last_1_var_1_39) ? (var_1_38 == ((signed short int) (min (var_1_11 , last_1_var_1_38)))) : 1))) && (((- var_1_25) != (- var_1_23)) ? ((var_1_30 > 64) ? (var_1_39 == ((signed long int) ((min (var_1_38 , -5)) + var_1_30))) : (var_1_39 == ((signed long int) var_1_38))) : (var_1_39 == ((signed long int) var_1_10)))
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
