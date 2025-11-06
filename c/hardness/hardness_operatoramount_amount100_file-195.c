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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch195Amount100.c", 13, "reach_error"); }
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
double var_1_1 = 16.625;
float var_1_3 = 256.4;
float var_1_4 = 8.3;
double var_1_6 = 9999999.5;
double var_1_7 = 16.3;
double var_1_8 = 256.9;
unsigned long int var_1_9 = 10;
unsigned long int var_1_14 = 50;
signed short int var_1_15 = -2;
unsigned char var_1_16 = 1;
double var_1_17 = 256.6;
double var_1_18 = 1.2;
double var_1_19 = 32.8;
signed short int var_1_20 = 10;
signed short int var_1_21 = 256;
signed short int var_1_22 = 500;
signed short int var_1_23 = 100;
signed long int var_1_24 = -1;
signed char var_1_25 = 10;
signed char var_1_26 = 0;
signed char var_1_27 = 10;
unsigned char var_1_28 = 5;
unsigned char var_1_29 = 128;
double var_1_30 = 25.5;
signed long int var_1_31 = -16;
unsigned long int var_1_32 = 2218766172;
signed long int var_1_33 = 500;
signed short int var_1_35 = -10;
signed short int var_1_36 = 21659;
float var_1_37 = 4.5;
float var_1_38 = 1.75;
float var_1_39 = 0.6;
unsigned short int var_1_40 = 25;
unsigned char var_1_41 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_9 = 10;
signed short int last_1_var_1_15 = -2;
signed long int last_1_var_1_24 = -1;
double last_1_var_1_30 = 25.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch195Amount100
	unsigned long int stepLocal_3 = last_1_var_1_9;
	if (stepLocal_3 != (var_1_27 / var_1_29)) {
		if (4.7 == last_1_var_1_30) {
			var_1_33 = var_1_23;
		}
	}


	// From: Req11Batch195Amount100
	unsigned char stepLocal_5 = var_1_16;
	unsigned char stepLocal_4 = var_1_29;
	if (stepLocal_5 || var_1_41) {
		var_1_40 = (max (var_1_25 , var_1_36));
	} else {
		if (stepLocal_4 < var_1_33) {
			var_1_40 = var_1_22;
		} else {
			var_1_40 = var_1_29;
		}
	}


	// From: Req5Batch195Amount100
	unsigned long int stepLocal_2 = var_1_14 | var_1_23;
	if (stepLocal_2 > (abs (var_1_27))) {
		var_1_28 = (abs (var_1_29 - var_1_26));
	} else {
		if (var_1_8 >= var_1_3) {
			var_1_28 = var_1_29;
		} else {
			var_1_28 = var_1_25;
		}
	}


	// From: Req6Batch195Amount100
	var_1_30 = (min (var_1_8 , (min ((min (var_1_18 , var_1_6)) , var_1_19))));


	// From: Req10Batch195Amount100
	var_1_37 = ((var_1_38 + var_1_39) - var_1_19);


	// From: Req2Batch195Amount100
	if ((- (- var_1_37)) == var_1_4) {
		if ((var_1_33 ^ var_1_40) != last_1_var_1_9) {
			var_1_9 = var_1_14;
		} else {
			var_1_9 = 128u;
		}
	}


	// From: Req1Batch195Amount100
	if (((var_1_37 / var_1_3) * (5.6f / var_1_4)) == var_1_37) {
		var_1_1 = ((var_1_6 + var_1_7) + var_1_8);
	}


	// From: Req3Batch195Amount100
	if (var_1_1 != ((max (10.3 , var_1_17)) - (var_1_18 + var_1_19))) {
		var_1_15 = ((max (var_1_20 , var_1_21)) - (min (var_1_22 , var_1_23)));
	} else {
		var_1_15 = ((max (last_1_var_1_15 , var_1_28)) + -256);
	}


	// From: Req4Batch195Amount100
	unsigned long int stepLocal_1 = var_1_9;
	unsigned long int stepLocal_0 = var_1_9;
	if ((min ((var_1_20 * last_1_var_1_24) , (~ -32))) == stepLocal_1) {
		if (stepLocal_0 >= ((var_1_26 + var_1_27) - var_1_25)) {
			var_1_24 = ((var_1_26 + 25) - (max ((1746493380 - 128) , var_1_22)));
		} else {
			var_1_24 = (var_1_21 + var_1_9);
		}
	} else {
		var_1_24 = var_1_27;
	}


	// From: Req7Batch195Amount100
	if ((var_1_40 < var_1_9) || ((- var_1_29) <= 0)) {
		var_1_31 = (max (-256 , var_1_40));
	} else {
		if ((max (var_1_40 , 100)) < var_1_22) {
			var_1_31 = (max (var_1_20 , var_1_40));
		} else {
			if ((var_1_32 - var_1_26) < 5u) {
				var_1_31 = var_1_27;
			}
		}
	}


	// From: Req9Batch195Amount100
	if (! (var_1_9 < (var_1_26 - var_1_27))) {
		var_1_35 = (var_1_21 - (var_1_36 - var_1_26));
	} else {
		var_1_35 = var_1_23;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	assume_abort_if_not(var_1_4 != 0.0F);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -230584.3009213691400e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691400e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -230584.3009213691400e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691400e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967294);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427388000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427388000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -1);
	assume_abort_if_not(var_1_21 <= 32766);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 32766);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 32766);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 64);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 127);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= 16383);
	assume_abort_if_not(var_1_36 <= 32766);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_30 = var_1_30;
}

int property(void) {
	return (((((((((((((var_1_37 / var_1_3) * (5.6f / var_1_4)) == var_1_37) ? (var_1_1 == ((double) ((var_1_6 + var_1_7) + var_1_8))) : 1) && (((- (- var_1_37)) == var_1_4) ? (((var_1_33 ^ var_1_40) != last_1_var_1_9) ? (var_1_9 == ((unsigned long int) var_1_14)) : (var_1_9 == ((unsigned long int) 128u))) : 1)) && ((var_1_1 != ((max (10.3 , var_1_17)) - (var_1_18 + var_1_19))) ? (var_1_15 == ((signed short int) ((max (var_1_20 , var_1_21)) - (min (var_1_22 , var_1_23))))) : (var_1_15 == ((signed short int) ((max (last_1_var_1_15 , var_1_28)) + -256))))) && (((min ((var_1_20 * last_1_var_1_24) , (~ -32))) == var_1_9) ? ((var_1_9 >= ((var_1_26 + var_1_27) - var_1_25)) ? (var_1_24 == ((signed long int) ((var_1_26 + 25) - (max ((1746493380 - 128) , var_1_22))))) : (var_1_24 == ((signed long int) (var_1_21 + var_1_9)))) : (var_1_24 == ((signed long int) var_1_27)))) && (((var_1_14 | var_1_23) > (abs (var_1_27))) ? (var_1_28 == ((unsigned char) (abs (var_1_29 - var_1_26)))) : ((var_1_8 >= var_1_3) ? (var_1_28 == ((unsigned char) var_1_29)) : (var_1_28 == ((unsigned char) var_1_25))))) && (var_1_30 == ((double) (min (var_1_8 , (min ((min (var_1_18 , var_1_6)) , var_1_19))))))) && (((var_1_40 < var_1_9) || ((- var_1_29) <= 0)) ? (var_1_31 == ((signed long int) (max (-256 , var_1_40)))) : (((max (var_1_40 , 100)) < var_1_22) ? (var_1_31 == ((signed long int) (max (var_1_20 , var_1_40)))) : (((var_1_32 - var_1_26) < 5u) ? (var_1_31 == ((signed long int) var_1_27)) : 1)))) && ((last_1_var_1_9 != (var_1_27 / var_1_29)) ? ((4.7 == last_1_var_1_30) ? (var_1_33 == ((signed long int) var_1_23)) : 1) : 1)) && ((! (var_1_9 < (var_1_26 - var_1_27))) ? (var_1_35 == ((signed short int) (var_1_21 - (var_1_36 - var_1_26)))) : (var_1_35 == ((signed short int) var_1_23)))) && (var_1_37 == ((float) ((var_1_38 + var_1_39) - var_1_19)))) && ((var_1_16 || var_1_41) ? (var_1_40 == ((unsigned short int) (max (var_1_25 , var_1_36)))) : ((var_1_29 < var_1_33) ? (var_1_40 == ((unsigned short int) var_1_22)) : (var_1_40 == ((unsigned short int) var_1_29))))
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
