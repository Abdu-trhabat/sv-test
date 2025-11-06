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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch180Amount100.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 128;
unsigned char var_1_6 = 16;
unsigned char var_1_7 = 128;
double var_1_8 = 1000000.75;
unsigned char var_1_9 = 1;
double var_1_10 = 0.4;
double var_1_11 = 63.2;
double var_1_12 = 31.15;
double var_1_13 = 32.2;
double var_1_14 = 256.6;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 2;
unsigned char var_1_18 = 10;
signed char var_1_19 = 25;
signed char var_1_20 = 8;
signed char var_1_21 = 4;
signed char var_1_22 = 64;
signed char var_1_23 = -25;
signed char var_1_24 = -5;
float var_1_25 = 4.45;
unsigned char var_1_26 = 0;
float var_1_27 = 15.25;
float var_1_28 = 3.25;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
signed short int var_1_34 = 1;
signed short int var_1_35 = -16;
unsigned long int var_1_36 = 64;
unsigned short int var_1_37 = 128;
unsigned short int var_1_38 = 23942;
unsigned short int var_1_39 = 4;
unsigned short int var_1_40 = 50164;
unsigned long int var_1_41 = 100;
unsigned long int var_1_42 = 3463309688;
unsigned long int var_1_43 = 2452221061;
signed short int var_1_44 = -4;
signed short int var_1_45 = -4;
signed long int var_1_46 = 64;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
signed short int last_1_var_1_34 = 1;
unsigned long int last_1_var_1_36 = 64;
unsigned long int last_1_var_1_41 = 100;
signed short int last_1_var_1_44 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch180Amount100
	if (var_1_28 <= var_1_11) {
		if ((last_1_var_1_34 + last_1_var_1_1) != var_1_4) {
			var_1_36 = last_1_var_1_1;
		}
	}


	// From: Req14Batch180Amount100
	var_1_46 = var_1_36;


	// From: Req1Batch180Amount100
	if ((last_1_var_1_36 & (last_1_var_1_44 / var_1_4)) < last_1_var_1_41) {
		var_1_1 = (min (var_1_6 , var_1_7));
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req6Batch180Amount100
	if (var_1_23 <= (var_1_16 - var_1_18)) {
		if (var_1_26) {
			var_1_29 = (var_1_9 && (var_1_30 && var_1_31));
		} else {
			var_1_29 = ((var_1_31 || (var_1_30 && var_1_32)) || var_1_33);
		}
	}


	// From: Req9Batch180Amount100
	unsigned char stepLocal_2 = var_1_16;
	if (var_1_15 <= stepLocal_2) {
		if (var_1_29) {
			var_1_37 = (var_1_18 + (var_1_38 - var_1_4));
		} else {
			var_1_37 = var_1_7;
		}
	}


	// From: Req12Batch180Amount100
	var_1_44 = var_1_23;


	// From: Req13Batch180Amount100
	var_1_45 = var_1_35;


	// From: Req10Batch180Amount100
	signed long int stepLocal_3 = var_1_46;
	if (stepLocal_3 >= var_1_1) {
		var_1_39 = (var_1_22 + 10);
	} else {
		var_1_39 = (var_1_40 - (var_1_16 + 1));
	}


	// From: Req2Batch180Amount100
	if (var_1_29) {
		var_1_8 = 0.4;
	} else {
		var_1_8 = (var_1_10 + (min ((var_1_11 + var_1_12) , var_1_13)));
	}


	// From: Req4Batch180Amount100
	if (! var_1_29) {
		var_1_19 = (var_1_20 - (min (var_1_21 , (var_1_22 - 16))));
	} else {
		var_1_19 = ((max (-16 , var_1_23)) + var_1_24);
	}


	// From: Req5Batch180Amount100
	if (var_1_29) {
		if (var_1_29) {
			var_1_25 = ((max (var_1_12 , 10.8f)) + var_1_11);
		} else {
			var_1_25 = (min (var_1_10 , var_1_12));
		}
	} else {
		var_1_25 = (var_1_27 - var_1_28);
	}


	// From: Req11Batch180Amount100
	unsigned char stepLocal_5 = var_1_13 != 32.5;
	signed long int stepLocal_4 = var_1_17 / var_1_4;
	if (var_1_29 || stepLocal_5) {
		var_1_41 = (abs ((max (var_1_42 , var_1_43)) - (min (var_1_16 , var_1_38))));
	} else {
		if (var_1_39 < stepLocal_4) {
			var_1_41 = 64u;
		} else {
			var_1_41 = var_1_40;
		}
	}


	// From: Req7Batch180Amount100
	if (((var_1_6 & var_1_24) == var_1_21) || var_1_29) {
		var_1_34 = (var_1_17 + (var_1_41 + var_1_24));
	} else {
		if (var_1_31) {
			var_1_34 = var_1_4;
		} else {
			var_1_34 = var_1_35;
		}
	}


	// From: Req3Batch180Amount100
	unsigned long int stepLocal_1 = var_1_7 + var_1_41;
	signed short int stepLocal_0 = var_1_34;
	if (stepLocal_0 >= ((var_1_15 - var_1_16) / (var_1_17 + var_1_18))) {
		if (stepLocal_1 == (-8 * var_1_16)) {
			var_1_14 = var_1_10;
		} else {
			var_1_14 = var_1_13;
		}
	} else {
		var_1_14 = var_1_10;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -230584.3009213691400e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -230584.3009213691400e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691400e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 255);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 128);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 63);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -63);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -63);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= -32767);
	assume_abort_if_not(var_1_35 <= 32766);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 16383);
	assume_abort_if_not(var_1_38 <= 32767);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 32767);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 2147483647);
	assume_abort_if_not(var_1_42 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 2147483647);
	assume_abort_if_not(var_1_43 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_44 = var_1_44;
}

int property(void) {
	return (((((((((((((((last_1_var_1_36 & (last_1_var_1_44 / var_1_4)) < last_1_var_1_41) ? (var_1_1 == ((unsigned char) (min (var_1_6 , var_1_7)))) : (var_1_1 == ((unsigned char) var_1_7))) && (var_1_29 ? (var_1_8 == ((double) 0.4)) : (var_1_8 == ((double) (var_1_10 + (min ((var_1_11 + var_1_12) , var_1_13))))))) && ((var_1_34 >= ((var_1_15 - var_1_16) / (var_1_17 + var_1_18))) ? (((var_1_7 + var_1_41) == (-8 * var_1_16)) ? (var_1_14 == ((double) var_1_10)) : (var_1_14 == ((double) var_1_13))) : (var_1_14 == ((double) var_1_10)))) && ((! var_1_29) ? (var_1_19 == ((signed char) (var_1_20 - (min (var_1_21 , (var_1_22 - 16)))))) : (var_1_19 == ((signed char) ((max (-16 , var_1_23)) + var_1_24))))) && (var_1_29 ? (var_1_29 ? (var_1_25 == ((float) ((max (var_1_12 , 10.8f)) + var_1_11))) : (var_1_25 == ((float) (min (var_1_10 , var_1_12))))) : (var_1_25 == ((float) (var_1_27 - var_1_28))))) && ((var_1_23 <= (var_1_16 - var_1_18)) ? (var_1_26 ? (var_1_29 == ((unsigned char) (var_1_9 && (var_1_30 && var_1_31)))) : (var_1_29 == ((unsigned char) ((var_1_31 || (var_1_30 && var_1_32)) || var_1_33)))) : 1)) && ((((var_1_6 & var_1_24) == var_1_21) || var_1_29) ? (var_1_34 == ((signed short int) (var_1_17 + (var_1_41 + var_1_24)))) : (var_1_31 ? (var_1_34 == ((signed short int) var_1_4)) : (var_1_34 == ((signed short int) var_1_35))))) && ((var_1_28 <= var_1_11) ? (((last_1_var_1_34 + last_1_var_1_1) != var_1_4) ? (var_1_36 == ((unsigned long int) last_1_var_1_1)) : 1) : 1)) && ((var_1_15 <= var_1_16) ? (var_1_29 ? (var_1_37 == ((unsigned short int) (var_1_18 + (var_1_38 - var_1_4)))) : (var_1_37 == ((unsigned short int) var_1_7))) : 1)) && ((var_1_46 >= var_1_1) ? (var_1_39 == ((unsigned short int) (var_1_22 + 10))) : (var_1_39 == ((unsigned short int) (var_1_40 - (var_1_16 + 1)))))) && ((var_1_29 || (var_1_13 != 32.5)) ? (var_1_41 == ((unsigned long int) (abs ((max (var_1_42 , var_1_43)) - (min (var_1_16 , var_1_38)))))) : ((var_1_39 < (var_1_17 / var_1_4)) ? (var_1_41 == ((unsigned long int) 64u)) : (var_1_41 == ((unsigned long int) var_1_40))))) && (var_1_44 == ((signed short int) var_1_23))) && (var_1_45 == ((signed short int) var_1_35))) && (var_1_46 == ((signed long int) var_1_36))
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
