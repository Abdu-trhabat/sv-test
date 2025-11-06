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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch5100_while.c", 13, "reach_error"); }
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
signed long int var_1_1 = -100;
double var_1_3 = 3.125;
double var_1_4 = 256.25;
signed long int var_1_7 = 32;
signed long int var_1_8 = 100;
signed long int var_1_9 = 64;
unsigned long int var_1_10 = 256;
unsigned long int var_1_11 = 3842462542;
unsigned long int var_1_12 = 5;
unsigned long int var_1_13 = 16;
unsigned long int var_1_14 = 64;
signed char var_1_15 = -10;
signed char var_1_16 = 16;
signed char var_1_17 = 16;
signed char var_1_18 = 4;
double var_1_19 = 7.5;
double var_1_20 = 256.2;
double var_1_21 = 1000000000000000.2;
double var_1_22 = 15.75;
double var_1_23 = 0.0;
double var_1_24 = 16.1;
unsigned short int var_1_25 = 256;
unsigned short int var_1_26 = 40459;
double var_1_27 = 99999999999999.5;
unsigned short int var_1_28 = 16;
double var_1_29 = 25.4;
double var_1_30 = 999999999999.8;
double var_1_31 = 10000000000.5;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 50;
unsigned char var_1_35 = 0;
unsigned short int var_1_36 = 0;
unsigned long int var_1_37 = 0;
unsigned long int var_1_38 = 16;
unsigned long int var_1_39 = 256;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_32 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch5100_while
	var_1_10 = (max (((var_1_11 - var_1_12) - var_1_13) , var_1_14));


	// From: Req4Batch5100_while
	unsigned long int stepLocal_2 = var_1_12;
	if (var_1_8 < stepLocal_2) {
		var_1_19 = (min (var_1_20 , var_1_21));
	} else {
		var_1_19 = (var_1_22 - (var_1_23 - var_1_24));
	}


	// From: Req5Batch5100_while
	unsigned long int stepLocal_3 = var_1_12 / var_1_11;
	if ((var_1_8 * var_1_7) > stepLocal_3) {
		var_1_25 = (var_1_26 - (max (var_1_17 , var_1_18)));
	}


	// From: Req6Batch5100_while
	if (10.8f > (var_1_21 + (abs (var_1_22)))) {
		var_1_27 = ((var_1_23 - var_1_24) - var_1_22);
	} else {
		var_1_27 = var_1_21;
	}


	// From: Req8Batch5100_while
	if (var_1_27 >= (min (var_1_21 , var_1_27))) {
		var_1_29 = ((var_1_23 - (var_1_30 + var_1_31)) - var_1_22);
	}


	// From: Req10Batch5100_while
	if (var_1_20 >= (min (var_1_23 , var_1_19))) {
		var_1_34 = ((64 - var_1_17) + (abs (var_1_18)));
	} else {
		if (var_1_29 >= var_1_3) {
			var_1_34 = (max (var_1_17 , (max (var_1_18 , var_1_35))));
		} else {
			var_1_34 = var_1_17;
		}
	}


	// From: Req11Batch5100_while
	var_1_36 = (var_1_26 - 2);


	// From: Req12Batch5100_while
	if (var_1_21 >= (abs (var_1_22 + var_1_24))) {
		var_1_37 = (var_1_12 + ((64u + var_1_36) + var_1_10));
	} else {
		var_1_37 = (max ((max (var_1_26 , (max (var_1_38 , var_1_18)))) , var_1_35));
	}


	// From: Req13Batch5100_while
	if (9999.75f >= var_1_31) {
		var_1_39 = ((max (var_1_12 , var_1_10)) + var_1_18);
	}


	// From: Req7Batch5100_while
	signed long int stepLocal_5 = var_1_8;
	signed long int stepLocal_4 = 32;
	if ((var_1_9 ^ var_1_37) > stepLocal_5) {
		if (var_1_7 <= stepLocal_4) {
			var_1_28 = var_1_18;
		}
	}


	// From: Req9Batch5100_while
	if (var_1_4 <= (min ((max (var_1_27 , var_1_29)) , 4.75))) {
		var_1_32 = (last_1_var_1_32 || (! var_1_33));
	} else {
		var_1_32 = ((var_1_7 <= var_1_37) && var_1_33);
	}


	// From: Req1Batch5100_while
	unsigned char stepLocal_1 = var_1_3 < var_1_4;
	unsigned long int stepLocal_0 = var_1_37;
	if (var_1_19 > (var_1_3 - var_1_4)) {
		if (stepLocal_1 && var_1_32) {
			if (-256 >= stepLocal_0) {
				var_1_1 = var_1_7;
			} else {
				var_1_1 = var_1_8;
			}
		} else {
			var_1_1 = -2;
		}
	} else {
		var_1_1 = var_1_9;
	}


	// From: Req3Batch5100_while
	if (var_1_1 > var_1_8) {
		var_1_15 = (max (var_1_16 , (-1 + (var_1_17 - var_1_18))));
	} else {
		var_1_15 = var_1_18;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483647);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483647);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483647);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 3221225470);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967294);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 4611686.018427383000e+12F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 32767);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_32 = var_1_32;
}

int property(void) {
	return (((((((((((((var_1_19 > (var_1_3 - var_1_4)) ? (((var_1_3 < var_1_4) && var_1_32) ? ((-256 >= var_1_37) ? (var_1_1 == ((signed long int) var_1_7)) : (var_1_1 == ((signed long int) var_1_8))) : (var_1_1 == ((signed long int) -2))) : (var_1_1 == ((signed long int) var_1_9))) && (var_1_10 == ((unsigned long int) (max (((var_1_11 - var_1_12) - var_1_13) , var_1_14))))) && ((var_1_1 > var_1_8) ? (var_1_15 == ((signed char) (max (var_1_16 , (-1 + (var_1_17 - var_1_18)))))) : (var_1_15 == ((signed char) var_1_18)))) && ((var_1_8 < var_1_12) ? (var_1_19 == ((double) (min (var_1_20 , var_1_21)))) : (var_1_19 == ((double) (var_1_22 - (var_1_23 - var_1_24)))))) && (((var_1_8 * var_1_7) > (var_1_12 / var_1_11)) ? (var_1_25 == ((unsigned short int) (var_1_26 - (max (var_1_17 , var_1_18))))) : 1)) && ((10.8f > (var_1_21 + (abs (var_1_22)))) ? (var_1_27 == ((double) ((var_1_23 - var_1_24) - var_1_22))) : (var_1_27 == ((double) var_1_21)))) && (((var_1_9 ^ var_1_37) > var_1_8) ? ((var_1_7 <= 32) ? (var_1_28 == ((unsigned short int) var_1_18)) : 1) : 1)) && ((var_1_27 >= (min (var_1_21 , var_1_27))) ? (var_1_29 == ((double) ((var_1_23 - (var_1_30 + var_1_31)) - var_1_22))) : 1)) && ((var_1_4 <= (min ((max (var_1_27 , var_1_29)) , 4.75))) ? (var_1_32 == ((unsigned char) (last_1_var_1_32 || (! var_1_33)))) : (var_1_32 == ((unsigned char) ((var_1_7 <= var_1_37) && var_1_33))))) && ((var_1_20 >= (min (var_1_23 , var_1_19))) ? (var_1_34 == ((unsigned char) ((64 - var_1_17) + (abs (var_1_18))))) : ((var_1_29 >= var_1_3) ? (var_1_34 == ((unsigned char) (max (var_1_17 , (max (var_1_18 , var_1_35)))))) : (var_1_34 == ((unsigned char) var_1_17))))) && (var_1_36 == ((unsigned short int) (var_1_26 - 2)))) && ((var_1_21 >= (abs (var_1_22 + var_1_24))) ? (var_1_37 == ((unsigned long int) (var_1_12 + ((64u + var_1_36) + var_1_10)))) : (var_1_37 == ((unsigned long int) (max ((max (var_1_26 , (max (var_1_38 , var_1_18)))) , var_1_35)))))) && ((9999.75f >= var_1_31) ? (var_1_39 == ((unsigned long int) ((max (var_1_12 , var_1_10)) + var_1_18))) : 1)
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
