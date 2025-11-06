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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch191100_while.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 8;
unsigned short int var_1_6 = 32;
unsigned short int var_1_7 = 0;
unsigned long int var_1_8 = 64;
unsigned long int var_1_9 = 4231214850;
unsigned long int var_1_10 = 128;
unsigned char var_1_12 = 0;
signed short int var_1_13 = -25;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_18 = 0;
signed long int var_1_19 = 0;
unsigned short int var_1_20 = 256;
unsigned short int var_1_22 = 38760;
float var_1_23 = 32.9;
float var_1_24 = 63.4;
unsigned short int var_1_25 = 2;
signed char var_1_26 = 25;
signed char var_1_27 = 50;
unsigned short int var_1_28 = 32;
unsigned char var_1_29 = 5;
unsigned char var_1_30 = 5;
unsigned char var_1_31 = 100;
unsigned char var_1_32 = 32;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 16;
unsigned char var_1_35 = 16;
unsigned char var_1_36 = 128;
signed char var_1_37 = -128;
signed char var_1_38 = 32;
signed char var_1_39 = 8;
signed char var_1_40 = 64;
signed short int var_1_41 = 4;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_8 = 64;
signed long int last_1_var_1_19 = 0;
unsigned short int last_1_var_1_20 = 256;
signed short int last_1_var_1_41 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch191100_while
	unsigned long int stepLocal_0 = last_1_var_1_8;
	if ((max ((max (last_1_var_1_20 , last_1_var_1_41)) , last_1_var_1_20)) >= stepLocal_0) {
		var_1_1 = (var_1_6 + (abs (var_1_7)));
	}


	// From: Req2Batch191100_while
	signed long int stepLocal_1 = ~ var_1_6;
	if (stepLocal_1 <= last_1_var_1_8) {
		var_1_8 = (var_1_7 + var_1_6);
	} else {
		var_1_8 = (var_1_9 - var_1_7);
	}


	// From: Req6Batch191100_while
	if (64 >= last_1_var_1_19) {
		var_1_19 = (max ((min (-25 , last_1_var_1_19)) , var_1_7));
	}


	// From: Req8Batch191100_while
	if ((- var_1_23) <= var_1_24) {
		var_1_26 = (-4 + var_1_27);
	}


	// From: Req11Batch191100_while
	if (! (var_1_23 > 255.25f)) {
		var_1_35 = (var_1_36 - var_1_32);
	} else {
		var_1_35 = (min (var_1_34 , var_1_32));
	}


	// From: Req12Batch191100_while
	if (! (var_1_8 < (var_1_1 + var_1_19))) {
		var_1_37 = (((var_1_32 + var_1_38) - var_1_33) - var_1_34);
	} else {
		var_1_37 = (var_1_38 - (var_1_33 + var_1_32));
	}


	// From: Req13Batch191100_while
	var_1_39 = var_1_40;


	// From: Req14Batch191100_while
	var_1_41 = var_1_40;


	// From: Req3Batch191100_while
	if (-8 <= (var_1_1 | var_1_19)) {
		var_1_10 = ((1218880117u - var_1_6) + var_1_7);
	} else {
		var_1_10 = var_1_6;
	}


	// From: Req4Batch191100_while
	if (var_1_9 != var_1_7) {
		var_1_12 = (((var_1_10 / var_1_13) > var_1_6) || var_1_14);
	}


	// From: Req5Batch191100_while
	if ((var_1_12 || (var_1_14 || var_1_12)) && var_1_12) {
		var_1_15 = (! var_1_14);
	} else {
		if (var_1_8 > var_1_10) {
			var_1_15 = var_1_18;
		}
	}


	// From: Req7Batch191100_while
	unsigned short int stepLocal_2 = var_1_1;
	if (stepLocal_2 < (last_1_var_1_20 | var_1_9)) {
		var_1_20 = ((max (56030 , var_1_22)) - 16);
	} else {
		if ((min (var_1_23 , var_1_24)) > 256.6f) {
			var_1_20 = ((min (var_1_22 , (53026 - var_1_25))) - var_1_6);
		} else {
			if (var_1_15) {
				var_1_20 = (max ((abs (var_1_25)) , (min (10 , var_1_6))));
			} else {
				var_1_20 = var_1_6;
			}
		}
	}


	// From: Req9Batch191100_while
	if (var_1_10 <= (max (var_1_10 , var_1_20))) {
		var_1_28 = (abs (var_1_22 - var_1_6));
	} else {
		var_1_28 = var_1_25;
	}


	// From: Req10Batch191100_while
	if (var_1_15) {
		var_1_29 = (max (var_1_30 , 128));
	} else {
		var_1_29 = ((var_1_31 - (var_1_32 - var_1_33)) + (4 + var_1_34));
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967294);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32768);
	assume_abort_if_not(var_1_13 <= 32767);
	assume_abort_if_not(var_1_13 != 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 32767);
	assume_abort_if_not(var_1_22 <= 65534);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 16383);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -63);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 63);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 31);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 31);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 127);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 31);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -127);
	assume_abort_if_not(var_1_40 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_41 = var_1_41;
}

int property(void) {
	return (((((((((((((((max ((max (last_1_var_1_20 , last_1_var_1_41)) , last_1_var_1_20)) >= last_1_var_1_8) ? (var_1_1 == ((unsigned short int) (var_1_6 + (abs (var_1_7))))) : 1) && (((~ var_1_6) <= last_1_var_1_8) ? (var_1_8 == ((unsigned long int) (var_1_7 + var_1_6))) : (var_1_8 == ((unsigned long int) (var_1_9 - var_1_7))))) && ((-8 <= (var_1_1 | var_1_19)) ? (var_1_10 == ((unsigned long int) ((1218880117u - var_1_6) + var_1_7))) : (var_1_10 == ((unsigned long int) var_1_6)))) && ((var_1_9 != var_1_7) ? (var_1_12 == ((unsigned char) (((var_1_10 / var_1_13) > var_1_6) || var_1_14))) : 1)) && (((var_1_12 || (var_1_14 || var_1_12)) && var_1_12) ? (var_1_15 == ((unsigned char) (! var_1_14))) : ((var_1_8 > var_1_10) ? (var_1_15 == ((unsigned char) var_1_18)) : 1))) && ((64 >= last_1_var_1_19) ? (var_1_19 == ((signed long int) (max ((min (-25 , last_1_var_1_19)) , var_1_7)))) : 1)) && ((var_1_1 < (last_1_var_1_20 | var_1_9)) ? (var_1_20 == ((unsigned short int) ((max (56030 , var_1_22)) - 16))) : (((min (var_1_23 , var_1_24)) > 256.6f) ? (var_1_20 == ((unsigned short int) ((min (var_1_22 , (53026 - var_1_25))) - var_1_6))) : (var_1_15 ? (var_1_20 == ((unsigned short int) (max ((abs (var_1_25)) , (min (10 , var_1_6)))))) : (var_1_20 == ((unsigned short int) var_1_6)))))) && (((- var_1_23) <= var_1_24) ? (var_1_26 == ((signed char) (-4 + var_1_27))) : 1)) && ((var_1_10 <= (max (var_1_10 , var_1_20))) ? (var_1_28 == ((unsigned short int) (abs (var_1_22 - var_1_6)))) : (var_1_28 == ((unsigned short int) var_1_25)))) && (var_1_15 ? (var_1_29 == ((unsigned char) (max (var_1_30 , 128)))) : (var_1_29 == ((unsigned char) ((var_1_31 - (var_1_32 - var_1_33)) + (4 + var_1_34)))))) && ((! (var_1_23 > 255.25f)) ? (var_1_35 == ((unsigned char) (var_1_36 - var_1_32))) : (var_1_35 == ((unsigned char) (min (var_1_34 , var_1_32)))))) && ((! (var_1_8 < (var_1_1 + var_1_19))) ? (var_1_37 == ((signed char) (((var_1_32 + var_1_38) - var_1_33) - var_1_34))) : (var_1_37 == ((signed char) (var_1_38 - (var_1_33 + var_1_32)))))) && (var_1_39 == ((signed char) var_1_40))) && (var_1_41 == ((signed short int) var_1_40))
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
