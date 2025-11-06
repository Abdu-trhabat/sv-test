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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch106Amount100.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 16;
signed short int var_1_3 = -4;
unsigned char var_1_4 = 32;
signed short int var_1_5 = 16;
double var_1_6 = 4.25;
double var_1_7 = 0.0;
double var_1_8 = 256.6;
double var_1_9 = 32.8;
double var_1_10 = 256.2;
unsigned char var_1_11 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 2;
double var_1_17 = 255.25;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 1;
unsigned long int var_1_20 = 8;
unsigned short int var_1_21 = 5;
float var_1_22 = 7.5;
float var_1_23 = 1.175;
float var_1_24 = 25.25;
signed char var_1_25 = -50;
signed char var_1_26 = 32;
signed char var_1_27 = 32;
signed char var_1_28 = 8;
signed long int var_1_29 = -10;
signed long int var_1_31 = 1117934497;
signed long int var_1_32 = 1000000000;
signed short int var_1_33 = -256;
signed char var_1_34 = -4;
unsigned char var_1_35 = 200;

// Calibration values

// Last'ed variables
double last_1_var_1_17 = 255.25;
unsigned char last_1_var_1_18 = 1;
unsigned long int last_1_var_1_20 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch106Amount100
	if ((abs (last_1_var_1_17)) <= (var_1_8 + var_1_7)) {
		if (last_1_var_1_18) {
			var_1_11 = var_1_13;
		}
	} else {
		var_1_11 = var_1_14;
	}


	// From: Req7Batch106Amount100
	if (var_1_5 <= (var_1_4 / (max (-64 , 25)))) {
		var_1_18 = (var_1_11 || ((var_1_11 || var_1_19) && var_1_14));
	} else {
		var_1_18 = (var_1_19 && var_1_14);
	}


	// From: Req2Batch106Amount100
	if (last_1_var_1_20 > (- (128 - var_1_4))) {
		var_1_3 = ((last_1_var_1_20 - var_1_4) + (var_1_2 - (32 + var_1_5)));
	} else {
		var_1_3 = (50 - last_1_var_1_20);
	}


	// From: Req8Batch106Amount100
	signed long int stepLocal_4 = (~ var_1_3) * (var_1_4 / var_1_21);
	unsigned char stepLocal_3 = var_1_4;
	if (stepLocal_4 > var_1_2) {
		if (var_1_3 >= stepLocal_3) {
			var_1_20 = var_1_21;
		} else {
			var_1_20 = var_1_2;
		}
	} else {
		var_1_20 = var_1_2;
	}


	// From: Req1Batch106Amount100
	var_1_1 = var_1_2;


	// From: Req3Batch106Amount100
	var_1_6 = ((var_1_7 - var_1_8) - (max (var_1_9 , (100.4 + var_1_10))));


	// From: Req5Batch106Amount100
	signed long int stepLocal_1 = 1;
	unsigned char stepLocal_0 = var_1_4;
	if (var_1_5 < stepLocal_0) {
		var_1_15 = (max (var_1_4 , ((abs (var_1_20)) + var_1_5)));
	} else {
		if (stepLocal_1 < var_1_2) {
			var_1_15 = var_1_2;
		}
	}


	// From: Req6Batch106Amount100
	unsigned char stepLocal_2 = var_1_4;
	if (var_1_10 > var_1_8) {
		if (stepLocal_2 <= var_1_2) {
			var_1_17 = (abs (var_1_10));
		} else {
			var_1_17 = var_1_8;
		}
	} else {
		var_1_17 = var_1_8;
	}


	// From: Req9Batch106Amount100
	var_1_22 = ((var_1_23 + var_1_24) + (var_1_8 - var_1_10));


	// From: Req10Batch106Amount100
	if (! var_1_18) {
		var_1_25 = (5 + (var_1_26 - var_1_27));
	} else {
		var_1_25 = ((32 + var_1_26) - (min (var_1_27 , var_1_28)));
	}


	// From: Req11Batch106Amount100
	signed char stepLocal_6 = var_1_27;
	signed short int stepLocal_5 = var_1_5;
	if (stepLocal_6 >= var_1_28) {
		var_1_29 = ((max (var_1_15 , var_1_2)) + (abs (var_1_28)));
	} else {
		if (var_1_11) {
			if ((var_1_21 / -256) >= stepLocal_5) {
				var_1_29 = (max ((max (var_1_2 , var_1_20)) , ((var_1_5 + 100) + (min (var_1_28 , var_1_3)))));
			} else {
				var_1_29 = (var_1_27 - (var_1_31 - (var_1_32 - var_1_26)));
			}
		} else {
			var_1_29 = (var_1_32 + (var_1_4 + var_1_2));
		}
	}


	// From: Req12Batch106Amount100
	var_1_33 = var_1_4;


	// From: Req13Batch106Amount100
	var_1_34 = var_1_26;


	// From: Req14Batch106Amount100
	var_1_35 = 25;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 254);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 8191);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 4611686.018427383000e+12F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 65535);
	assume_abort_if_not(var_1_21 != 0);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -230584.3009213691400e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -230584.3009213691400e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691400e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= 1073741823);
	assume_abort_if_not(var_1_31 <= 2147483646);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= 536870911);
	assume_abort_if_not(var_1_32 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_17 = var_1_17;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	return (((((((((((((var_1_1 == ((unsigned char) var_1_2)) && ((last_1_var_1_20 > (- (128 - var_1_4))) ? (var_1_3 == ((signed short int) ((last_1_var_1_20 - var_1_4) + (var_1_2 - (32 + var_1_5))))) : (var_1_3 == ((signed short int) (50 - last_1_var_1_20))))) && (var_1_6 == ((double) ((var_1_7 - var_1_8) - (max (var_1_9 , (100.4 + var_1_10))))))) && (((abs (last_1_var_1_17)) <= (var_1_8 + var_1_7)) ? (last_1_var_1_18 ? (var_1_11 == ((unsigned char) var_1_13)) : 1) : (var_1_11 == ((unsigned char) var_1_14)))) && ((var_1_5 < var_1_4) ? (var_1_15 == ((unsigned long int) (max (var_1_4 , ((abs (var_1_20)) + var_1_5))))) : ((1 < var_1_2) ? (var_1_15 == ((unsigned long int) var_1_2)) : 1))) && ((var_1_10 > var_1_8) ? ((var_1_4 <= var_1_2) ? (var_1_17 == ((double) (abs (var_1_10)))) : (var_1_17 == ((double) var_1_8))) : (var_1_17 == ((double) var_1_8)))) && ((var_1_5 <= (var_1_4 / (max (-64 , 25)))) ? (var_1_18 == ((unsigned char) (var_1_11 || ((var_1_11 || var_1_19) && var_1_14)))) : (var_1_18 == ((unsigned char) (var_1_19 && var_1_14))))) && ((((~ var_1_3) * (var_1_4 / var_1_21)) > var_1_2) ? ((var_1_3 >= var_1_4) ? (var_1_20 == ((unsigned long int) var_1_21)) : (var_1_20 == ((unsigned long int) var_1_2))) : (var_1_20 == ((unsigned long int) var_1_2)))) && (var_1_22 == ((float) ((var_1_23 + var_1_24) + (var_1_8 - var_1_10))))) && ((! var_1_18) ? (var_1_25 == ((signed char) (5 + (var_1_26 - var_1_27)))) : (var_1_25 == ((signed char) ((32 + var_1_26) - (min (var_1_27 , var_1_28))))))) && ((var_1_27 >= var_1_28) ? (var_1_29 == ((signed long int) ((max (var_1_15 , var_1_2)) + (abs (var_1_28))))) : (var_1_11 ? (((var_1_21 / -256) >= var_1_5) ? (var_1_29 == ((signed long int) (max ((max (var_1_2 , var_1_20)) , ((var_1_5 + 100) + (min (var_1_28 , var_1_3))))))) : (var_1_29 == ((signed long int) (var_1_27 - (var_1_31 - (var_1_32 - var_1_26)))))) : (var_1_29 == ((signed long int) (var_1_32 + (var_1_4 + var_1_2))))))) && (var_1_33 == ((signed short int) var_1_4))) && (var_1_34 == ((signed char) var_1_26))) && (var_1_35 == ((unsigned char) 25))
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
