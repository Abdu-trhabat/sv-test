// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch69PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 4;
signed short int var_1_3 = 128;
signed short int var_1_4 = 10;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 64;
signed char var_1_9 = -128;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
double var_1_12 = 32.75;
double var_1_13 = 255.6;
signed short int var_1_14 = 8;
unsigned long int var_1_15 = 256;
unsigned long int var_1_16 = 4031871391;
unsigned long int var_1_17 = 3083112228;
unsigned long int var_1_18 = 3058504136;
unsigned long int var_1_19 = 1902304375;
unsigned char var_1_20 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
unsigned short int var_1_24 = 64;
unsigned char var_1_25 = 0;
unsigned short int var_1_26 = 256;
unsigned short int var_1_27 = 100;
unsigned short int var_1_28 = 2;
unsigned short int var_1_29 = 10;
unsigned long int var_1_30 = 64;
unsigned short int var_1_31 = 0;
unsigned long int var_1_32 = 100;
float var_1_33 = 31.6;
float var_1_34 = 128.5;
float var_1_35 = 24.2;
float var_1_36 = 1.5;
unsigned short int var_1_37 = 128;
unsigned char var_1_38 = 1;
unsigned short int var_1_39 = 28029;
signed short int var_1_40 = -100;
float var_1_41 = 1.8;
unsigned char var_1_42 = 1;
unsigned long int var_1_43 = 2697030725;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 1;
signed long int var_1_46 = -50;
signed long int var_1_47 = -64;
float var_1_48 = 10000000.25;
signed long int var_1_49 = -32;
unsigned char var_1_50 = 128;
unsigned char var_1_51 = 25;
float var_1_52 = 15.8;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 50;
unsigned char var_1_56 = 4;
float var_1_57 = 256.18;
signed long int var_1_58 = -32;
double var_1_59 = -0.5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 4;
signed char last_1_var_1_9 = -128;
signed short int last_1_var_1_14 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_25) {
		var_1_24 = (((max (var_1_26 , var_1_27)) + (abs (var_1_28))) + var_1_29);
	} else {
		var_1_24 = var_1_28;
	}


	// From: CodeObject2
	if (var_1_27 <= (var_1_31 >> var_1_29)) {
		if (var_1_26 > var_1_24) {
			var_1_30 = (abs (var_1_32));
		}
	}


	// From: CodeObject3
	if (var_1_31 > var_1_27) {
		var_1_33 = (256.75f + (max ((max (var_1_34 , var_1_35)) , var_1_36)));
	}


	// From: CodeObject4
	if (((var_1_28 << var_1_24) < var_1_30) || (var_1_25 || (var_1_36 >= var_1_33))) {
		if (var_1_24 > (abs (var_1_26))) {
			if (var_1_25 || var_1_38) {
				var_1_37 = ((min ((var_1_39 - var_1_28) , 32)) + var_1_26);
			}
		}
	}


	// From: CodeObject5
	if (var_1_29 < var_1_31) {
		if (var_1_36 < (var_1_35 + (var_1_33 / var_1_41))) {
			var_1_40 = 64;
		}
	} else {
		if (var_1_25) {
			var_1_40 = 256;
		}
	}


	// From: CodeObject6
	if (var_1_30 >= ((abs (var_1_43)) - (var_1_37 + var_1_26))) {
		var_1_42 = (! var_1_44);
	} else {
		var_1_42 = (var_1_44 && var_1_45);
	}


	// From: CodeObject7
	if ((abs (var_1_28)) > var_1_24) {
		var_1_46 = (abs (var_1_47));
	}


	// From: CodeObject8
	if (var_1_24 <= var_1_26) {
		if ((- var_1_39) >= (var_1_28 / var_1_49)) {
			if ((var_1_50 - var_1_51) > ((max (var_1_37 , -8)) << var_1_24)) {
				var_1_48 = (var_1_52 - (abs (var_1_36)));
			}
		}
	} else {
		var_1_48 = ((abs (var_1_34 + var_1_36)) - var_1_52);
	}


	// From: CodeObject9
	if (var_1_26 > var_1_46) {
		if (((abs (var_1_34)) - 16.4f) == var_1_35) {
			var_1_53 = (! (! var_1_54));
		}
	}


	// From: CodeObject10
	if (var_1_27 <= ((var_1_26 >> var_1_24) * 200)) {
		var_1_55 = (min (var_1_51 , (abs (var_1_56))));
	}


	// From: CodeObject11
	if (var_1_47 >= ((var_1_27 >> var_1_29) & var_1_55)) {
		var_1_57 = (min (var_1_36 , 25.625f));
	}


	// From: CodeObject12
	var_1_58 = var_1_51;


	// From: CodeObject13
	var_1_59 = var_1_52;


	// From: Req6Batch69PS_CN_100
	signed long int stepLocal_5 = last_1_var_1_9;
	if (stepLocal_5 < last_1_var_1_1) {
		var_1_20 = ((! (var_1_11 && var_1_22)) && (var_1_10 || var_1_23));
	} else {
		var_1_20 = var_1_23;
	}


	// From: Req4Batch69PS_CN_100
	if (var_1_20 || (var_1_6 <= var_1_8)) {
		var_1_14 = var_1_6;
	}


	// From: Req1Batch69PS_CN_100
	signed long int stepLocal_0 = var_1_3 - var_1_4;
	if (last_1_var_1_14 >= stepLocal_0) {
		var_1_1 = ((var_1_5 - (min (var_1_6 , var_1_7))) - var_1_8);
	} else {
		var_1_1 = (32 + var_1_7);
	}


	// From: Req2Batch69PS_CN_100
	unsigned char stepLocal_2 = var_1_20;
	signed long int stepLocal_1 = var_1_8 - var_1_5;
	if (stepLocal_1 >= var_1_1) {
		if (stepLocal_2 || var_1_20) {
			var_1_9 = var_1_6;
		} else {
			var_1_9 = var_1_7;
		}
	} else {
		var_1_9 = var_1_5;
	}


	// From: Req3Batch69PS_CN_100
	unsigned char stepLocal_4 = var_1_7;
	unsigned char stepLocal_3 = var_1_20;
	if (stepLocal_4 > var_1_1) {
		if (((var_1_1 + var_1_9) == var_1_1) && stepLocal_3) {
			if (! var_1_20) {
				var_1_12 = var_1_13;
			} else {
				var_1_12 = var_1_13;
			}
		} else {
			var_1_12 = var_1_13;
		}
	} else {
		var_1_12 = var_1_13;
	}


	// From: Req5Batch69PS_CN_100
	if (var_1_12 < var_1_13) {
		var_1_15 = ((max ((max (var_1_16 , var_1_17)) , (max (3407568261u , var_1_18)))) - (var_1_19 - 32u));
	} else {
		var_1_15 = (var_1_18 - var_1_19);
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 2147483647);
	assume_abort_if_not(var_1_16 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 2147483647);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 16384);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 16384);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 16383);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65535);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967294);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -461168.6018427382800e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -461168.6018427382800e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -461168.6018427382800e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 16383);
	assume_abort_if_not(var_1_39 <= 32767);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	assume_abort_if_not(var_1_41 != 0.0F);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 2147483647);
	assume_abort_if_not(var_1_43 <= 4294967295);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_47 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_47 >= -2147483646);
	assume_abort_if_not(var_1_47 <= 2147483646);
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= -2147483648);
	assume_abort_if_not(var_1_49 <= 2147483647);
	assume_abort_if_not(var_1_49 != 0);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 127);
	assume_abort_if_not(var_1_50 <= 255);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 127);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 0);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 254);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_14 = var_1_14;
}

int property() {
	return ((((((last_1_var_1_14 >= (var_1_3 - var_1_4)) ? (var_1_1 == ((unsigned char) ((var_1_5 - (min (var_1_6 , var_1_7))) - var_1_8))) : (var_1_1 == ((unsigned char) (32 + var_1_7)))) && (((var_1_8 - var_1_5) >= var_1_1) ? ((var_1_20 || var_1_20) ? (var_1_9 == ((signed char) var_1_6)) : (var_1_9 == ((signed char) var_1_7))) : (var_1_9 == ((signed char) var_1_5)))) && ((var_1_7 > var_1_1) ? ((((var_1_1 + var_1_9) == var_1_1) && var_1_20) ? ((! var_1_20) ? (var_1_12 == ((double) var_1_13)) : (var_1_12 == ((double) var_1_13))) : (var_1_12 == ((double) var_1_13))) : (var_1_12 == ((double) var_1_13)))) && ((var_1_20 || (var_1_6 <= var_1_8)) ? (var_1_14 == ((signed short int) var_1_6)) : 1)) && ((var_1_12 < var_1_13) ? (var_1_15 == ((unsigned long int) ((max ((max (var_1_16 , var_1_17)) , (max (3407568261u , var_1_18)))) - (var_1_19 - 32u)))) : (var_1_15 == ((unsigned long int) (var_1_18 - var_1_19))))) && ((last_1_var_1_9 < last_1_var_1_1) ? (var_1_20 == ((unsigned char) ((! (var_1_11 && var_1_22)) && (var_1_10 || var_1_23)))) : (var_1_20 == ((unsigned char) var_1_23)))
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
