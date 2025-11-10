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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch89Amount250.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 128;
unsigned long int var_1_5 = 2082256544;
unsigned long int var_1_6 = 32;
unsigned long int var_1_7 = 1832746635;
unsigned long int var_1_8 = 1000;
unsigned long int var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
float var_1_13 = 9.5;
float var_1_14 = 100.75;
float var_1_15 = 7.4;
float var_1_16 = 10.625;
unsigned long int var_1_17 = 4;
unsigned long int var_1_18 = 50;
unsigned long int var_1_19 = 2305451248;
unsigned char var_1_20 = 32;
signed short int var_1_21 = 5;
unsigned char var_1_22 = 8;
unsigned char var_1_23 = 64;
unsigned char var_1_24 = 0;
double var_1_26 = 24.8;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
float var_1_30 = 1.6;
float var_1_31 = 100.7;
float var_1_32 = 31.5;
float var_1_33 = 0.0;
float var_1_34 = 24.75;
signed long int var_1_35 = -10;
signed long int var_1_36 = 1317440254;
signed long int var_1_37 = 1238403966;
signed long int var_1_38 = 2;
double var_1_39 = 100000.25;
double var_1_40 = 31.8;
signed long int var_1_41 = 10000000;
signed long int var_1_42 = 4;
signed long int var_1_43 = 32;
double var_1_45 = -0.6;
unsigned char var_1_46 = 0;
signed short int var_1_47 = -1000;
signed short int var_1_48 = 4;
signed long int var_1_49 = -50;
signed long int var_1_50 = 256;
unsigned long int var_1_51 = 0;
signed long int var_1_52 = 64;
float var_1_53 = 4.575;
unsigned long int var_1_54 = 128;
double var_1_56 = 16.8;
double var_1_58 = 10.625;
double var_1_59 = 32.5;
unsigned short int var_1_60 = 100;
signed short int var_1_61 = 8;
signed short int var_1_62 = -32;
unsigned long int var_1_63 = 1;
float var_1_64 = 2.475;
double var_1_65 = 32.625;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 128;
unsigned char last_1_var_1_10 = 0;
unsigned long int last_1_var_1_17 = 4;
unsigned char last_1_var_1_27 = 0;
double last_1_var_1_39 = 100000.25;
signed long int last_1_var_1_41 = 10000000;
signed long int last_1_var_1_42 = 4;
signed long int last_1_var_1_43 = 32;
signed short int last_1_var_1_47 = -1000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch89Amount250
	if (last_1_var_1_42 < var_1_23) {
		var_1_27 = (var_1_28 || var_1_29);
	}


	// From: Req5Batch89Amount250
	if ((last_1_var_1_1 >= var_1_9) && ((min (-2 , var_1_5)) < last_1_var_1_17)) {
		var_1_17 = (var_1_5 + (var_1_8 + (min (var_1_9 , var_1_18))));
	} else {
		if (last_1_var_1_39 == var_1_16) {
			if (last_1_var_1_27) {
				var_1_17 = ((min (var_1_19 , (var_1_5 + var_1_7))) - 256u);
			}
		} else {
			var_1_17 = (var_1_18 + ((min (var_1_7 , var_1_5)) - var_1_9));
		}
	}


	// From: Req19Batch89Amount250
	if (var_1_17 <= (var_1_19 - var_1_18)) {
		var_1_51 = (min (((max (var_1_5 , var_1_37)) + var_1_8) , var_1_38));
	} else {
		var_1_51 = var_1_23;
	}


	// From: Req3Batch89Amount250
	unsigned char stepLocal_3 = var_1_7 > var_1_9;
	if (stepLocal_3 && last_1_var_1_10) {
		var_1_10 = (var_1_11 && var_1_12);
	}


	// From: Req4Batch89Amount250
	unsigned long int stepLocal_4 = var_1_17 * (var_1_8 ^ var_1_7);
	if (-500 >= stepLocal_4) {
		var_1_13 = ((abs (var_1_14)) + var_1_15);
	} else {
		var_1_13 = (abs (var_1_15 + var_1_16));
	}


	// From: Req7Batch89Amount250
	var_1_26 = (min (var_1_16 , var_1_14));


	// From: Req9Batch89Amount250
	if (var_1_24 != var_1_22) {
		var_1_30 = (var_1_16 + var_1_14);
	} else {
		var_1_30 = (min ((abs (var_1_15)) , var_1_14));
	}


	// From: Req10Batch89Amount250
	var_1_31 = (var_1_32 - (var_1_33 - var_1_34));


	// From: Req17Batch89Amount250
	if (var_1_10) {
		var_1_47 = ((min (var_1_21 , (var_1_24 + var_1_23))) + (last_1_var_1_47 - var_1_46));
	} else {
		if (var_1_34 == var_1_14) {
			var_1_47 = var_1_24;
		} else {
			if (var_1_11 || var_1_10) {
				var_1_47 = (max (-4 , var_1_24));
			} else {
				var_1_47 = (max (var_1_23 , (var_1_48 - var_1_24)));
			}
		}
	}


	// From: Req20Batch89Amount250
	unsigned long int stepLocal_12 = var_1_8 + var_1_19;
	if (stepLocal_12 >= 10000u) {
		if (var_1_10) {
			var_1_52 = (max (var_1_23 , var_1_37));
		}
	}


	// From: Req21Batch89Amount250
	var_1_53 = (8.875f - var_1_34);


	// From: Req25Batch89Amount250
	var_1_61 = var_1_47;


	// From: Req26Batch89Amount250
	if (var_1_29) {
		var_1_62 = var_1_24;
	}


	// From: Req28Batch89Amount250
	if (var_1_10) {
		var_1_64 = (min ((min ((var_1_33 - var_1_32) , var_1_40)) , var_1_14));
	}


	// From: Req29Batch89Amount250
	unsigned char stepLocal_15 = (10 & -5) >= var_1_38;
	if (stepLocal_15 && var_1_27) {
		var_1_65 = var_1_16;
	}


	// From: Req2Batch89Amount250
	unsigned long int stepLocal_2 = var_1_17;
	unsigned char stepLocal_1 = var_1_5 < var_1_17;
	if (stepLocal_2 > var_1_5) {
		if (stepLocal_1 || var_1_10) {
			var_1_6 = (((var_1_7 + 1924803778u) - (max (var_1_8 , var_1_9))) - var_1_5);
		}
	}


	// From: Req1Batch89Amount250
	unsigned long int stepLocal_0 = var_1_6;
	if (var_1_52 != stepLocal_0) {
		if (var_1_27) {
			var_1_1 = ((var_1_5 + 1668503833u) - (50u + 256u));
		}
	}


	// From: Req24Batch89Amount250
	unsigned long int stepLocal_14 = var_1_6 % 5;
	if ((min ((var_1_46 << var_1_36) , (var_1_52 / var_1_21))) > stepLocal_14) {
		var_1_60 = var_1_22;
	} else {
		var_1_60 = var_1_23;
	}


	// From: Req13Batch89Amount250
	unsigned long int stepLocal_9 = var_1_7;
	unsigned long int stepLocal_8 = var_1_7;
	if (last_1_var_1_41 == stepLocal_8) {
		if ((var_1_21 - var_1_22) <= stepLocal_9) {
			var_1_41 = var_1_24;
		} else {
			var_1_41 = (var_1_8 - var_1_60);
		}
	}


	// From: Req6Batch89Amount250
	if ((var_1_11 || (var_1_14 > 15.3f)) || (var_1_6 == (8u >> var_1_21))) {
		if (var_1_17 > var_1_8) {
			var_1_20 = (max ((var_1_21 + var_1_22) , (var_1_23 + (var_1_24 + 4))));
		}
	} else {
		if ((abs (var_1_21)) == var_1_6) {
			if (! (var_1_12 && var_1_27)) {
				var_1_20 = var_1_24;
			} else {
				var_1_20 = var_1_23;
			}
		} else {
			var_1_20 = var_1_22;
		}
	}


	// From: Req22Batch89Amount250
	if (! (var_1_9 < (var_1_19 - var_1_24))) {
		if (var_1_27) {
			var_1_54 = (var_1_46 + (var_1_7 - var_1_9));
		}
	} else {
		if (var_1_28) {
			var_1_54 = (var_1_19 - var_1_21);
		} else {
			var_1_54 = (min ((var_1_22 + (min (var_1_7 , var_1_9))) , var_1_20));
		}
	}


	// From: Req23Batch89Amount250
	unsigned long int stepLocal_13 = var_1_41 & var_1_9;
	if (stepLocal_13 >= ((var_1_17 + var_1_6) + (max (var_1_54 , var_1_19)))) {
		var_1_56 = (max (var_1_32 , var_1_40));
	} else {
		var_1_56 = ((var_1_58 + (min (var_1_59 , 24.85))) + var_1_14);
	}


	// From: Req15Batch89Amount250
	unsigned long int stepLocal_10 = var_1_19 + (var_1_54 & var_1_1);
	if ((var_1_9 * last_1_var_1_43) > stepLocal_10) {
		var_1_43 = (abs (var_1_22));
	}


	// From: Req14Batch89Amount250
	if (var_1_40 >= (- (min (var_1_56 , 25.4)))) {
		if (var_1_28) {
			var_1_42 = (32 - 10000000);
		}
	}


	// From: Req18Batch89Amount250
	unsigned long int stepLocal_11 = min (var_1_19 , (var_1_18 / var_1_21));
	if (var_1_17 < stepLocal_11) {
		var_1_49 = var_1_46;
	} else {
		if (var_1_28) {
			var_1_49 = (max ((-100000000 + var_1_21) , (var_1_37 - var_1_24)));
		} else {
			var_1_49 = (min ((abs (var_1_50)) , (var_1_43 + (max (var_1_46 , var_1_21)))));
		}
	}


	// From: Req11Batch89Amount250
	unsigned long int stepLocal_5 = var_1_51;
	if (var_1_15 <= (63.5f - var_1_33)) {
		if (stepLocal_5 < var_1_52) {
			var_1_35 = (((min (var_1_36 , var_1_37)) - var_1_22) - var_1_38);
		}
	} else {
		var_1_35 = ((min (var_1_23 , var_1_24)) + ((abs (var_1_49)) + var_1_21));
	}


	// From: Req27Batch89Amount250
	if (var_1_49 >= (var_1_35 ^ var_1_50)) {
		if (var_1_60 < var_1_35) {
			var_1_63 = var_1_5;
		}
	}


	// From: Req16Batch89Amount250
	if ((var_1_23 - var_1_49) > (var_1_5 << (min (var_1_46 , 0)))) {
		var_1_45 = ((min (var_1_40 , var_1_16)) + (min (var_1_14 , var_1_34)));
	}


	// From: Req12Batch89Amount250
	unsigned long int stepLocal_7 = var_1_63 + var_1_23;
	unsigned long int stepLocal_6 = var_1_63;
	if (var_1_36 < stepLocal_7) {
		var_1_39 = (var_1_33 - (min (var_1_32 , var_1_34)));
	} else {
		if ((var_1_36 % (abs (var_1_21))) <= stepLocal_6) {
			var_1_39 = (var_1_34 - 64.6);
		} else {
			var_1_39 = ((var_1_34 + var_1_40) - var_1_32);
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 1073741823);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 1610612735);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1073741823);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1073741823);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 31);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 64);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 4611686.018427383000e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= 1073741822);
	assume_abort_if_not(var_1_36 <= 2147483646);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= 1073741822);
	assume_abort_if_not(var_1_37 <= 2147483646);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 2147483646);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_48 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_48 >= -1);
	assume_abort_if_not(var_1_48 <= 32766);
	var_1_50 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_50 >= -2147483646);
	assume_abort_if_not(var_1_50 <= 2147483646);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= -230584.3009213691400e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 2305843.009213691400e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -230584.3009213691400e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 2305843.009213691400e+12F && var_1_59 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_47 = var_1_47;
}

int property(void) {
	return (((((((((((((((((((((((((((((var_1_52 != var_1_6) ? (var_1_27 ? (var_1_1 == ((unsigned long int) ((var_1_5 + 1668503833u) - (50u + 256u)))) : 1) : 1) && ((var_1_17 > var_1_5) ? (((var_1_5 < var_1_17) || var_1_10) ? (var_1_6 == ((unsigned long int) (((var_1_7 + 1924803778u) - (max (var_1_8 , var_1_9))) - var_1_5))) : 1) : 1)) && (((var_1_7 > var_1_9) && last_1_var_1_10) ? (var_1_10 == ((unsigned char) (var_1_11 && var_1_12))) : 1)) && ((-500 >= (var_1_17 * (var_1_8 ^ var_1_7))) ? (var_1_13 == ((float) ((abs (var_1_14)) + var_1_15))) : (var_1_13 == ((float) (abs (var_1_15 + var_1_16)))))) && (((last_1_var_1_1 >= var_1_9) && ((min (-2 , var_1_5)) < last_1_var_1_17)) ? (var_1_17 == ((unsigned long int) (var_1_5 + (var_1_8 + (min (var_1_9 , var_1_18)))))) : ((last_1_var_1_39 == var_1_16) ? (last_1_var_1_27 ? (var_1_17 == ((unsigned long int) ((min (var_1_19 , (var_1_5 + var_1_7))) - 256u))) : 1) : (var_1_17 == ((unsigned long int) (var_1_18 + ((min (var_1_7 , var_1_5)) - var_1_9))))))) && (((var_1_11 || (var_1_14 > 15.3f)) || (var_1_6 == (8u >> var_1_21))) ? ((var_1_17 > var_1_8) ? (var_1_20 == ((unsigned char) (max ((var_1_21 + var_1_22) , (var_1_23 + (var_1_24 + 4)))))) : 1) : (((abs (var_1_21)) == var_1_6) ? ((! (var_1_12 && var_1_27)) ? (var_1_20 == ((unsigned char) var_1_24)) : (var_1_20 == ((unsigned char) var_1_23))) : (var_1_20 == ((unsigned char) var_1_22))))) && (var_1_26 == ((double) (min (var_1_16 , var_1_14))))) && ((last_1_var_1_42 < var_1_23) ? (var_1_27 == ((unsigned char) (var_1_28 || var_1_29))) : 1)) && ((var_1_24 != var_1_22) ? (var_1_30 == ((float) (var_1_16 + var_1_14))) : (var_1_30 == ((float) (min ((abs (var_1_15)) , var_1_14)))))) && (var_1_31 == ((float) (var_1_32 - (var_1_33 - var_1_34))))) && ((var_1_15 <= (63.5f - var_1_33)) ? ((var_1_51 < var_1_52) ? (var_1_35 == ((signed long int) (((min (var_1_36 , var_1_37)) - var_1_22) - var_1_38))) : 1) : (var_1_35 == ((signed long int) ((min (var_1_23 , var_1_24)) + ((abs (var_1_49)) + var_1_21)))))) && ((var_1_36 < (var_1_63 + var_1_23)) ? (var_1_39 == ((double) (var_1_33 - (min (var_1_32 , var_1_34))))) : (((var_1_36 % (abs (var_1_21))) <= var_1_63) ? (var_1_39 == ((double) (var_1_34 - 64.6))) : (var_1_39 == ((double) ((var_1_34 + var_1_40) - var_1_32)))))) && ((last_1_var_1_41 == var_1_7) ? (((var_1_21 - var_1_22) <= var_1_7) ? (var_1_41 == ((signed long int) var_1_24)) : (var_1_41 == ((signed long int) (var_1_8 - var_1_60)))) : 1)) && ((var_1_40 >= (- (min (var_1_56 , 25.4)))) ? (var_1_28 ? (var_1_42 == ((signed long int) (32 - 10000000))) : 1) : 1)) && (((var_1_9 * last_1_var_1_43) > (var_1_19 + (var_1_54 & var_1_1))) ? (var_1_43 == ((signed long int) (abs (var_1_22)))) : 1)) && (((var_1_23 - var_1_49) > (var_1_5 << (min (var_1_46 , 0)))) ? (var_1_45 == ((double) ((min (var_1_40 , var_1_16)) + (min (var_1_14 , var_1_34))))) : 1)) && (var_1_10 ? (var_1_47 == ((signed short int) ((min (var_1_21 , (var_1_24 + var_1_23))) + (last_1_var_1_47 - var_1_46)))) : ((var_1_34 == var_1_14) ? (var_1_47 == ((signed short int) var_1_24)) : ((var_1_11 || var_1_10) ? (var_1_47 == ((signed short int) (max (-4 , var_1_24)))) : (var_1_47 == ((signed short int) (max (var_1_23 , (var_1_48 - var_1_24))))))))) && ((var_1_17 < (min (var_1_19 , (var_1_18 / var_1_21)))) ? (var_1_49 == ((signed long int) var_1_46)) : (var_1_28 ? (var_1_49 == ((signed long int) (max ((-100000000 + var_1_21) , (var_1_37 - var_1_24))))) : (var_1_49 == ((signed long int) (min ((abs (var_1_50)) , (var_1_43 + (max (var_1_46 , var_1_21)))))))))) && ((var_1_17 <= (var_1_19 - var_1_18)) ? (var_1_51 == ((unsigned long int) (min (((max (var_1_5 , var_1_37)) + var_1_8) , var_1_38)))) : (var_1_51 == ((unsigned long int) var_1_23)))) && (((var_1_8 + var_1_19) >= 10000u) ? (var_1_10 ? (var_1_52 == ((signed long int) (max (var_1_23 , var_1_37)))) : 1) : 1)) && (var_1_53 == ((float) (8.875f - var_1_34)))) && ((! (var_1_9 < (var_1_19 - var_1_24))) ? (var_1_27 ? (var_1_54 == ((unsigned long int) (var_1_46 + (var_1_7 - var_1_9)))) : 1) : (var_1_28 ? (var_1_54 == ((unsigned long int) (var_1_19 - var_1_21))) : (var_1_54 == ((unsigned long int) (min ((var_1_22 + (min (var_1_7 , var_1_9))) , var_1_20))))))) && (((var_1_41 & var_1_9) >= ((var_1_17 + var_1_6) + (max (var_1_54 , var_1_19)))) ? (var_1_56 == ((double) (max (var_1_32 , var_1_40)))) : (var_1_56 == ((double) ((var_1_58 + (min (var_1_59 , 24.85))) + var_1_14))))) && (((min ((var_1_46 << var_1_36) , (var_1_52 / var_1_21))) > (var_1_6 % 5)) ? (var_1_60 == ((unsigned short int) var_1_22)) : (var_1_60 == ((unsigned short int) var_1_23)))) && (var_1_61 == ((signed short int) var_1_47))) && (var_1_29 ? (var_1_62 == ((signed short int) var_1_24)) : 1)) && ((var_1_49 >= (var_1_35 ^ var_1_50)) ? ((var_1_60 < var_1_35) ? (var_1_63 == ((unsigned long int) var_1_5)) : 1) : 1)) && (var_1_10 ? (var_1_64 == ((float) (min ((min ((var_1_33 - var_1_32) , var_1_40)) , var_1_14)))) : 1)) && ((((10 & -5) >= var_1_38) && var_1_27) ? (var_1_65 == ((double) var_1_16)) : 1)
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
