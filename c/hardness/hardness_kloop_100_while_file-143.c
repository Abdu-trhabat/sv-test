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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch143100_while.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 256;
unsigned short int var_1_5 = 54686;
unsigned short int var_1_6 = 64;
signed long int var_1_7 = 50;
unsigned short int var_1_10 = 256;
unsigned short int var_1_11 = 128;
unsigned short int var_1_12 = 1;
unsigned long int var_1_13 = 0;
signed char var_1_14 = -5;
signed char var_1_15 = 4;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned short int var_1_19 = 16;
signed short int var_1_20 = 25;
unsigned char var_1_21 = 0;
signed char var_1_22 = 16;
signed char var_1_23 = 100;
signed char var_1_24 = 8;
signed char var_1_25 = 100;
signed long int var_1_26 = -1000;
signed long int var_1_27 = -50;
signed long int var_1_28 = 1880261502;
signed char var_1_29 = 32;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 256;
unsigned short int last_1_var_1_19 = 16;
unsigned char last_1_var_1_21 = 0;
signed long int last_1_var_1_27 = -50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch143100_while
	if (last_1_var_1_1 > 1) {
		if (var_1_7 > var_1_11) {
			var_1_21 = var_1_18;
		} else {
			if (last_1_var_1_21) {
				var_1_21 = var_1_18;
			}
		}
	} else {
		var_1_21 = var_1_18;
	}


	// From: Req10Batch143100_while
	signed long int stepLocal_7 = -4;
	if ((- last_1_var_1_19) < stepLocal_7) {
		var_1_26 = (min (var_1_25 , ((abs (var_1_10)) - 10)));
	} else {
		var_1_26 = (min (var_1_12 , (last_1_var_1_27 - var_1_5)));
	}


	// From: Req4Batch143100_while
	if (16 > (abs (var_1_10 + var_1_5))) {
		if (var_1_7 <= var_1_26) {
			if (var_1_26 < (var_1_12 * 128)) {
				var_1_16 = var_1_17;
			} else {
				var_1_16 = var_1_18;
			}
		}
	}


	// From: Req3Batch143100_while
	signed long int stepLocal_4 = 100000;
	if (stepLocal_4 < var_1_5) {
		var_1_14 = (abs (var_1_15));
	}


	// From: Req5Batch143100_while
	var_1_19 = ((var_1_12 + 10000) + var_1_10);


	// From: Req6Batch143100_while
	var_1_20 = (abs (var_1_15 + var_1_12));


	// From: Req2Batch143100_while
	unsigned short int stepLocal_3 = var_1_11;
	if (stepLocal_3 < (- (max (var_1_26 , var_1_6)))) {
		var_1_13 = (abs (abs (var_1_19 + var_1_26)));
	} else {
		if (var_1_16) {
			var_1_13 = var_1_6;
		} else {
			var_1_13 = var_1_26;
		}
	}


	// From: Req11Batch143100_while
	if (! var_1_21) {
		if (var_1_18) {
			var_1_27 = ((min (var_1_19 , var_1_12)) - ((var_1_28 - var_1_25) - (var_1_13 + var_1_6)));
		} else {
			var_1_27 = (min (var_1_11 , (min (var_1_26 , 64))));
		}
	}


	// From: Req8Batch143100_while
	unsigned short int stepLocal_6 = var_1_10;
	unsigned long int stepLocal_5 = max ((var_1_27 + var_1_13) , (var_1_11 / var_1_7));
	if (var_1_19 == stepLocal_6) {
		if (var_1_21) {
			if (var_1_27 < stepLocal_5) {
				var_1_22 = var_1_15;
			} else {
				var_1_22 = -5;
			}
		} else {
			var_1_22 = 2;
		}
	} else {
		var_1_22 = var_1_15;
	}


	// From: Req9Batch143100_while
	if (var_1_13 <= var_1_19) {
		var_1_23 = (var_1_24 - (var_1_25 - 8));
	}


	// From: Req12Batch143100_while
	if (var_1_7 == var_1_13) {
		var_1_29 = (min (var_1_24 , var_1_25));
	}


	// From: Req1Batch143100_while
	unsigned long int stepLocal_2 = min (var_1_19 , var_1_13);
	unsigned char stepLocal_1 = var_1_21;
	signed long int stepLocal_0 = - var_1_5;
	if (last_1_var_1_1 != stepLocal_2) {
		if (stepLocal_0 >= (var_1_13 / var_1_7)) {
			if (var_1_16 || stepLocal_1) {
				var_1_1 = (max (var_1_6 , (var_1_10 + 5)));
			} else {
				var_1_1 = (var_1_6 + (var_1_11 + var_1_12));
			}
		} else {
			var_1_1 = var_1_6;
		}
	} else {
		var_1_1 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65535);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	assume_abort_if_not(var_1_7 != 0);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16384);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -126);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -1);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 63);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= 1610612734);
	assume_abort_if_not(var_1_28 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_27 = var_1_27;
}

int property(void) {
	return ((((((((((((last_1_var_1_1 != (min (var_1_19 , var_1_13))) ? (((- var_1_5) >= (var_1_13 / var_1_7)) ? ((var_1_16 || var_1_21) ? (var_1_1 == ((unsigned short int) (max (var_1_6 , (var_1_10 + 5))))) : (var_1_1 == ((unsigned short int) (var_1_6 + (var_1_11 + var_1_12))))) : (var_1_1 == ((unsigned short int) var_1_6))) : (var_1_1 == ((unsigned short int) var_1_12))) && ((var_1_11 < (- (max (var_1_26 , var_1_6)))) ? (var_1_13 == ((unsigned long int) (abs (abs (var_1_19 + var_1_26))))) : (var_1_16 ? (var_1_13 == ((unsigned long int) var_1_6)) : (var_1_13 == ((unsigned long int) var_1_26))))) && ((100000 < var_1_5) ? (var_1_14 == ((signed char) (abs (var_1_15)))) : 1)) && ((16 > (abs (var_1_10 + var_1_5))) ? ((var_1_7 <= var_1_26) ? ((var_1_26 < (var_1_12 * 128)) ? (var_1_16 == ((unsigned char) var_1_17)) : (var_1_16 == ((unsigned char) var_1_18))) : 1) : 1)) && (var_1_19 == ((unsigned short int) ((var_1_12 + 10000) + var_1_10)))) && (var_1_20 == ((signed short int) (abs (var_1_15 + var_1_12))))) && ((last_1_var_1_1 > 1) ? ((var_1_7 > var_1_11) ? (var_1_21 == ((unsigned char) var_1_18)) : (last_1_var_1_21 ? (var_1_21 == ((unsigned char) var_1_18)) : 1)) : (var_1_21 == ((unsigned char) var_1_18)))) && ((var_1_19 == var_1_10) ? (var_1_21 ? ((var_1_27 < (max ((var_1_27 + var_1_13) , (var_1_11 / var_1_7)))) ? (var_1_22 == ((signed char) var_1_15)) : (var_1_22 == ((signed char) -5))) : (var_1_22 == ((signed char) 2))) : (var_1_22 == ((signed char) var_1_15)))) && ((var_1_13 <= var_1_19) ? (var_1_23 == ((signed char) (var_1_24 - (var_1_25 - 8)))) : 1)) && (((- last_1_var_1_19) < -4) ? (var_1_26 == ((signed long int) (min (var_1_25 , ((abs (var_1_10)) - 10))))) : (var_1_26 == ((signed long int) (min (var_1_12 , (last_1_var_1_27 - var_1_5))))))) && ((! var_1_21) ? (var_1_18 ? (var_1_27 == ((signed long int) ((min (var_1_19 , var_1_12)) - ((var_1_28 - var_1_25) - (var_1_13 + var_1_6))))) : (var_1_27 == ((signed long int) (min (var_1_11 , (min (var_1_26 , 64))))))) : 1)) && ((var_1_7 == var_1_13) ? (var_1_29 == ((signed char) (min (var_1_24 , var_1_25)))) : 1)
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
