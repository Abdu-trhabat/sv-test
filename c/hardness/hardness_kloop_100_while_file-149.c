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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch149100_while.c", 13, "reach_error"); }
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
float var_1_1 = 10.53;
float var_1_5 = 15.75;
unsigned char var_1_6 = 4;
unsigned long int var_1_7 = 32;
unsigned long int var_1_8 = 3229666979;
float var_1_9 = 0.2;
unsigned long int var_1_10 = 32;
double var_1_12 = 63.5;
double var_1_14 = 9.8;
double var_1_15 = 32.5;
double var_1_16 = 16.25;
unsigned short int var_1_17 = 8;
unsigned short int var_1_18 = 22804;
unsigned short int var_1_19 = 0;
unsigned short int var_1_20 = 256;
signed long int var_1_21 = -128;
unsigned short int var_1_22 = 1000;
unsigned short int var_1_23 = 59360;
unsigned short int var_1_24 = 2;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 1;
signed char var_1_30 = -5;
signed char var_1_31 = 100;
signed char var_1_32 = 32;
signed char var_1_33 = 25;
signed char var_1_34 = -5;
signed long int var_1_35 = -4;
unsigned long int var_1_36 = 128;
signed char var_1_37 = 64;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_25 = 1;
signed long int last_1_var_1_35 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch149100_while
	var_1_9 = var_1_5;


	// From: Req9Batch149100_while
	var_1_22 = ((var_1_23 - var_1_19) - var_1_20);


	// From: Req14Batch149100_while
	var_1_36 = 16u;


	// From: Req13Batch149100_while
	if (var_1_23 < (~ var_1_36)) {
		var_1_35 = (max ((abs (min (var_1_19 , var_1_33))) , last_1_var_1_35));
	} else {
		var_1_35 = var_1_19;
	}


	// From: Req3Batch149100_while
	if ((var_1_8 - var_1_22) <= var_1_35) {
		var_1_7 = var_1_22;
	}


	// From: Req7Batch149100_while
	if (255.5 <= var_1_15) {
		var_1_17 = (min (var_1_35 , ((var_1_18 - var_1_19) + var_1_20)));
	} else {
		var_1_17 = ((var_1_19 + var_1_35) + var_1_20);
	}


	// From: Req10Batch149100_while
	unsigned long int stepLocal_5 = max (var_1_7 , var_1_18);
	if (stepLocal_5 <= (var_1_19 << var_1_36)) {
		var_1_24 = var_1_18;
	} else {
		var_1_24 = (var_1_23 - var_1_18);
	}


	// From: Req11Batch149100_while
	unsigned short int stepLocal_6 = var_1_19;
	if (stepLocal_6 > var_1_23) {
		var_1_25 = (! (var_1_26 || (var_1_27 || var_1_28)));
	} else {
		if (last_1_var_1_25) {
			var_1_25 = ((var_1_7 <= var_1_8) || var_1_29);
		} else {
			var_1_25 = ((! var_1_29) || var_1_27);
		}
	}


	// From: Req12Batch149100_while
	if ((abs (var_1_31)) == var_1_7) {
		var_1_30 = (var_1_32 + (var_1_33 + var_1_34));
	}


	// From: Req2Batch149100_while
	if (var_1_25) {
		var_1_6 = 8;
	}


	// From: Req5Batch149100_while
	unsigned char stepLocal_2 = var_1_25;
	if (var_1_25) {
		if ((var_1_7 <= var_1_35) && stepLocal_2) {
			var_1_10 = (max (var_1_35 , 25u));
		}
	} else {
		var_1_10 = (2363632078u - var_1_35);
	}


	// From: Req8Batch149100_while
	if (! var_1_25) {
		var_1_21 = (abs (var_1_18));
	}


	// From: Req15Batch149100_while
	if (var_1_7 > (abs (var_1_19))) {
		if ((var_1_31 & var_1_7) <= var_1_21) {
			var_1_37 = var_1_33;
		} else {
			var_1_37 = var_1_34;
		}
	} else {
		var_1_37 = var_1_32;
	}


	// From: Req1Batch149100_while
	unsigned long int stepLocal_1 = max (1000000000 , var_1_10);
	unsigned long int stepLocal_0 = var_1_36;
	if (stepLocal_0 <= var_1_10) {
		if (var_1_25) {
			if (var_1_36 == stepLocal_1) {
				var_1_1 = (abs (min (var_1_5 , 3.7f)));
			}
		} else {
			var_1_1 = var_1_5;
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req6Batch149100_while
	unsigned long int stepLocal_4 = var_1_10;
	unsigned long int stepLocal_3 = var_1_7 + var_1_10;
	if (var_1_21 == stepLocal_3) {
		if (var_1_5 <= var_1_9) {
			if ((max (var_1_35 , var_1_8)) >= stepLocal_4) {
				var_1_12 = (var_1_14 - (var_1_15 + (5.6 + var_1_16)));
			} else {
				var_1_12 = var_1_14;
			}
		} else {
			if (! var_1_25) {
				var_1_12 = var_1_14;
			} else {
				var_1_12 = var_1_16;
			}
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967295);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 16383);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 16383);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 49150);
	assume_abort_if_not(var_1_23 <= 65534);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -63);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -31);
	assume_abort_if_not(var_1_33 <= 32);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -31);
	assume_abort_if_not(var_1_34 <= 31);
}



void updateLastVariables(void) {
	last_1_var_1_25 = var_1_25;
	last_1_var_1_35 = var_1_35;
}

int property(void) {
	return (((((((((((((((var_1_36 <= var_1_10) ? (var_1_25 ? ((var_1_36 == (max (1000000000 , var_1_10))) ? (var_1_1 == ((float) (abs (min (var_1_5 , 3.7f))))) : 1) : (var_1_1 == ((float) var_1_5))) : (var_1_1 == ((float) var_1_5))) && (var_1_25 ? (var_1_6 == ((unsigned char) 8)) : 1)) && (((var_1_8 - var_1_22) <= var_1_35) ? (var_1_7 == ((unsigned long int) var_1_22)) : 1)) && (var_1_9 == ((float) var_1_5))) && (var_1_25 ? (((var_1_7 <= var_1_35) && var_1_25) ? (var_1_10 == ((unsigned long int) (max (var_1_35 , 25u)))) : 1) : (var_1_10 == ((unsigned long int) (2363632078u - var_1_35))))) && ((var_1_21 == (var_1_7 + var_1_10)) ? ((var_1_5 <= var_1_9) ? (((max (var_1_35 , var_1_8)) >= var_1_10) ? (var_1_12 == ((double) (var_1_14 - (var_1_15 + (5.6 + var_1_16))))) : (var_1_12 == ((double) var_1_14))) : ((! var_1_25) ? (var_1_12 == ((double) var_1_14)) : (var_1_12 == ((double) var_1_16)))) : 1)) && ((255.5 <= var_1_15) ? (var_1_17 == ((unsigned short int) (min (var_1_35 , ((var_1_18 - var_1_19) + var_1_20))))) : (var_1_17 == ((unsigned short int) ((var_1_19 + var_1_35) + var_1_20))))) && ((! var_1_25) ? (var_1_21 == ((signed long int) (abs (var_1_18)))) : 1)) && (var_1_22 == ((unsigned short int) ((var_1_23 - var_1_19) - var_1_20)))) && (((max (var_1_7 , var_1_18)) <= (var_1_19 << var_1_36)) ? (var_1_24 == ((unsigned short int) var_1_18)) : (var_1_24 == ((unsigned short int) (var_1_23 - var_1_18))))) && ((var_1_19 > var_1_23) ? (var_1_25 == ((unsigned char) (! (var_1_26 || (var_1_27 || var_1_28))))) : (last_1_var_1_25 ? (var_1_25 == ((unsigned char) ((var_1_7 <= var_1_8) || var_1_29))) : (var_1_25 == ((unsigned char) ((! var_1_29) || var_1_27)))))) && (((abs (var_1_31)) == var_1_7) ? (var_1_30 == ((signed char) (var_1_32 + (var_1_33 + var_1_34)))) : 1)) && ((var_1_23 < (~ var_1_36)) ? (var_1_35 == ((signed long int) (max ((abs (min (var_1_19 , var_1_33))) , last_1_var_1_35)))) : (var_1_35 == ((signed long int) var_1_19)))) && (var_1_36 == ((unsigned long int) 16u))) && ((var_1_7 > (abs (var_1_19))) ? (((var_1_31 & var_1_7) <= var_1_21) ? (var_1_37 == ((signed char) var_1_33)) : (var_1_37 == ((signed char) var_1_34))) : (var_1_37 == ((signed char) var_1_32)))
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
