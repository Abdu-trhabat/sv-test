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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch186Amount100.c", 13, "reach_error"); }
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
double var_1_6 = 8.4;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 4;
unsigned long int var_1_10 = 3787118264;
unsigned short int var_1_11 = 25;
unsigned short int var_1_12 = 50;
unsigned short int var_1_13 = 5;
signed short int var_1_14 = -8;
signed short int var_1_16 = 32;
signed short int var_1_17 = 5;
unsigned char var_1_18 = 1;
double var_1_19 = 2.25;
double var_1_20 = 16.5;
double var_1_21 = 0.0;
double var_1_22 = 64.875;
float var_1_23 = 255.4;
float var_1_24 = 127.75;
signed char var_1_25 = -4;
signed char var_1_26 = 2;
signed char var_1_27 = 2;
signed char var_1_28 = 4;
double var_1_29 = 24.8;
double var_1_31 = 9.15;
double var_1_32 = 0.5;
double var_1_33 = 15.6;
signed short int var_1_34 = 16;
signed short int var_1_35 = 28712;
signed short int var_1_36 = 19095;
signed short int var_1_37 = 5;
unsigned char var_1_38 = 1;
signed long int var_1_39 = 5;

// Calibration values

// Last'ed variables
float last_1_var_1_23 = 255.4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch186Amount100
	if (last_1_var_1_23 <= (abs (var_1_6))) {
		var_1_9 = ((abs (var_1_10)) - 32u);
	} else {
		var_1_9 = var_1_10;
	}


	// From: Req5Batch186Amount100
	if (var_1_8) {
		var_1_18 = ((var_1_13 <= (var_1_10 + 1000)) || var_1_7);
	} else {
		if (-1 < var_1_9) {
			var_1_18 = 0;
		}
	}


	// From: Req6Batch186Amount100
	if (var_1_8) {
		var_1_19 = ((abs (var_1_20)) - (var_1_21 - var_1_22));
	} else {
		var_1_19 = (var_1_22 - var_1_21);
	}


	// From: Req9Batch186Amount100
	signed short int stepLocal_5 = var_1_17;
	if ((min (var_1_28 , var_1_13)) > stepLocal_5) {
		var_1_29 = (max (((max (var_1_24 , var_1_22)) + var_1_31) , (max ((var_1_21 - var_1_32) , var_1_33))));
	} else {
		var_1_29 = var_1_31;
	}


	// From: Req10Batch186Amount100
	if ((min (var_1_10 , var_1_13)) < var_1_28) {
		var_1_34 = ((var_1_35 - (var_1_27 + var_1_28)) - (var_1_36 - var_1_37));
	} else {
		if ((- var_1_12) <= (var_1_37 - (max (var_1_35 , var_1_36)))) {
			var_1_34 = var_1_16;
		}
	}


	// From: Req11Batch186Amount100
	var_1_38 = var_1_8;


	// From: Req3Batch186Amount100
	unsigned long int stepLocal_1 = var_1_9;
	if (var_1_10 < stepLocal_1) {
		var_1_11 = (min (4 , (var_1_12 + var_1_13)));
	} else {
		if (var_1_19 <= var_1_29) {
			if (var_1_7) {
				var_1_11 = var_1_12;
			}
		} else {
			var_1_11 = var_1_13;
		}
	}


	// From: Req7Batch186Amount100
	unsigned short int stepLocal_4 = var_1_11;
	if (var_1_8) {
		var_1_23 = (var_1_22 + (min (var_1_24 , 32.25f)));
	} else {
		if (var_1_12 != stepLocal_4) {
			var_1_23 = (max ((max (var_1_21 , 0.6f)) , var_1_20));
		} else {
			var_1_23 = var_1_22;
		}
	}


	// From: Req1Batch186Amount100
	unsigned char stepLocal_0 = var_1_29 != var_1_23;
	if (stepLocal_0 && (var_1_29 <= (var_1_29 / var_1_6))) {
		var_1_1 = (var_1_7 && var_1_8);
	}


	// From: Req4Batch186Amount100
	unsigned char stepLocal_3 = var_1_8;
	unsigned char stepLocal_2 = var_1_8;
	if (var_1_38 || stepLocal_2) {
		if ((- var_1_6) <= 255.5) {
			if (var_1_38 || stepLocal_3) {
				var_1_14 = (var_1_16 + var_1_17);
			}
		} else {
			var_1_14 = var_1_16;
		}
	} else {
		var_1_14 = var_1_17;
	}


	// From: Req8Batch186Amount100
	if (var_1_6 >= (- (min (var_1_29 , var_1_24)))) {
		var_1_25 = (max (-10 , var_1_26));
	} else {
		var_1_25 = (32 + ((min (var_1_27 , var_1_28)) - 16));
	}


	// From: Req12Batch186Amount100
	if (! (var_1_1 && (var_1_25 <= var_1_37))) {
		if (var_1_8) {
			var_1_39 = var_1_25;
		}
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(var_1_6 != 0.0F);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 2147483647);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= -16383);
	assume_abort_if_not(var_1_16 <= 16383);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= -16383);
	assume_abort_if_not(var_1_17 <= 16383);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 4611686.018427383000e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -127);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -461168.6018427383000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854766000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= 16382);
	assume_abort_if_not(var_1_35 <= 32766);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= 16383);
	assume_abort_if_not(var_1_36 <= 32766);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 16383);
}



void updateLastVariables(void) {
	last_1_var_1_23 = var_1_23;
}

int property(void) {
	return (((((((((((((var_1_29 != var_1_23) && (var_1_29 <= (var_1_29 / var_1_6))) ? (var_1_1 == ((unsigned char) (var_1_7 && var_1_8))) : 1) && ((last_1_var_1_23 <= (abs (var_1_6))) ? (var_1_9 == ((unsigned long int) ((abs (var_1_10)) - 32u))) : (var_1_9 == ((unsigned long int) var_1_10)))) && ((var_1_10 < var_1_9) ? (var_1_11 == ((unsigned short int) (min (4 , (var_1_12 + var_1_13))))) : ((var_1_19 <= var_1_29) ? (var_1_7 ? (var_1_11 == ((unsigned short int) var_1_12)) : 1) : (var_1_11 == ((unsigned short int) var_1_13))))) && ((var_1_38 || var_1_8) ? (((- var_1_6) <= 255.5) ? ((var_1_38 || var_1_8) ? (var_1_14 == ((signed short int) (var_1_16 + var_1_17))) : 1) : (var_1_14 == ((signed short int) var_1_16))) : (var_1_14 == ((signed short int) var_1_17)))) && (var_1_8 ? (var_1_18 == ((unsigned char) ((var_1_13 <= (var_1_10 + 1000)) || var_1_7))) : ((-1 < var_1_9) ? (var_1_18 == ((unsigned char) 0)) : 1))) && (var_1_8 ? (var_1_19 == ((double) ((abs (var_1_20)) - (var_1_21 - var_1_22)))) : (var_1_19 == ((double) (var_1_22 - var_1_21))))) && (var_1_8 ? (var_1_23 == ((float) (var_1_22 + (min (var_1_24 , 32.25f))))) : ((var_1_12 != var_1_11) ? (var_1_23 == ((float) (max ((max (var_1_21 , 0.6f)) , var_1_20)))) : (var_1_23 == ((float) var_1_22))))) && ((var_1_6 >= (- (min (var_1_29 , var_1_24)))) ? (var_1_25 == ((signed char) (max (-10 , var_1_26)))) : (var_1_25 == ((signed char) (32 + ((min (var_1_27 , var_1_28)) - 16)))))) && (((min (var_1_28 , var_1_13)) > var_1_17) ? (var_1_29 == ((double) (max (((max (var_1_24 , var_1_22)) + var_1_31) , (max ((var_1_21 - var_1_32) , var_1_33)))))) : (var_1_29 == ((double) var_1_31)))) && (((min (var_1_10 , var_1_13)) < var_1_28) ? (var_1_34 == ((signed short int) ((var_1_35 - (var_1_27 + var_1_28)) - (var_1_36 - var_1_37)))) : (((- var_1_12) <= (var_1_37 - (max (var_1_35 , var_1_36)))) ? (var_1_34 == ((signed short int) var_1_16)) : 1))) && (var_1_38 == ((unsigned char) var_1_8))) && ((! (var_1_1 && (var_1_25 <= var_1_37))) ? (var_1_8 ? (var_1_39 == ((signed long int) var_1_25)) : 1) : 1)
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
