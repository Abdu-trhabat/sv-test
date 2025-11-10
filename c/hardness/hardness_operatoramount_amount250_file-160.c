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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch160Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 16;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 5;
unsigned char var_1_7 = 100;
unsigned short int var_1_8 = 16;
unsigned short int var_1_9 = 57740;
unsigned char var_1_10 = 50;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 128;
signed long int var_1_13 = -10;
double var_1_14 = 10000000000.2;
double var_1_16 = 8.4;
unsigned char var_1_17 = 2;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned long int var_1_21 = 256;
unsigned long int var_1_22 = 4041621384;
unsigned long int var_1_23 = 2;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
signed char var_1_27 = -4;
signed char var_1_28 = -32;
unsigned char var_1_29 = 0;
signed long int var_1_30 = -50;
signed char var_1_31 = 64;
signed char var_1_32 = 25;
unsigned short int var_1_33 = 128;
signed long int var_1_34 = 0;
signed char var_1_35 = -4;
unsigned char var_1_36 = 32;
unsigned char var_1_37 = 5;
unsigned char var_1_38 = 2;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 8;
unsigned long int var_1_41 = 8;
double var_1_42 = 256.6;
double var_1_43 = 0.18;
signed char var_1_44 = -10;
signed char var_1_45 = 32;
unsigned short int var_1_46 = 0;
signed char var_1_47 = 16;
unsigned char var_1_48 = 5;
unsigned char var_1_49 = 100;
unsigned short int var_1_50 = 0;
double var_1_51 = 7.8;
double var_1_52 = 15.8;
double var_1_53 = 9.6;
unsigned char var_1_54 = 64;
unsigned char var_1_55 = 32;
unsigned char var_1_56 = 50;
unsigned char var_1_57 = 32;
signed long int var_1_58 = -1;
signed long int var_1_59 = -2;
double var_1_60 = 128.6;
double var_1_61 = 7.3;
unsigned char var_1_62 = 8;
unsigned short int var_1_63 = 25;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_21 = 256;
unsigned long int last_1_var_1_23 = 2;
unsigned char last_1_var_1_24 = 1;
signed long int last_1_var_1_30 = -50;
unsigned short int last_1_var_1_33 = 128;
signed long int last_1_var_1_34 = 0;
unsigned long int last_1_var_1_41 = 8;
unsigned char last_1_var_1_48 = 5;
unsigned short int last_1_var_1_50 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch160Amount250
	unsigned char stepLocal_3 = var_1_6;
	if (stepLocal_3 < last_1_var_1_41) {
		var_1_14 = (abs (var_1_16 + 1.25));
	}


	// From: Req19Batch160Amount250
	if (var_1_14 >= ((var_1_42 - var_1_43) + (- var_1_16))) {
		var_1_41 = (abs (var_1_7));
	}


	// From: Req1Batch160Amount250
	if (! last_1_var_1_24) {
		var_1_1 = (var_1_3 + var_1_4);
	} else {
		var_1_1 = ((var_1_5 + (abs (var_1_6))) + (max ((min (var_1_3 , var_1_4)) , (var_1_7 - 4))));
	}


	// From: Req9Batch160Amount250
	if (var_1_7 > var_1_12) {
		var_1_23 = var_1_1;
	}


	// From: Req10Batch160Amount250
	unsigned long int stepLocal_5 = var_1_23;
	if (stepLocal_5 >= var_1_6) {
		var_1_24 = (! (! (var_1_25 || var_1_26)));
	} else {
		var_1_24 = (! var_1_20);
	}


	// From: Req12Batch160Amount250
	unsigned long int stepLocal_6 = last_1_var_1_23;
	if (! (var_1_22 > var_1_12)) {
		if (stepLocal_6 > ((min (500u , last_1_var_1_48)) + 256u)) {
			var_1_29 = ((last_1_var_1_34 >= last_1_var_1_30) && (var_1_26 || var_1_25));
		} else {
			var_1_29 = ((last_1_var_1_21 >= (var_1_3 | last_1_var_1_30)) && (! var_1_20));
		}
	} else {
		var_1_29 = (! (var_1_26 && var_1_25));
	}


	// From: Req7Batch160Amount250
	unsigned char stepLocal_4 = var_1_12;
	if (stepLocal_4 > ((max (var_1_5 , var_1_9)) + (16 & var_1_4))) {
		if (var_1_29) {
			if (var_1_16 < (- var_1_14)) {
				var_1_18 = (var_1_24 || (var_1_19 && var_1_20));
			}
		}
	} else {
		var_1_18 = (! (! (! 0)));
	}


	// From: Req2Batch160Amount250
	signed long int stepLocal_0 = var_1_6 * var_1_4;
	if (var_1_7 >= stepLocal_0) {
		var_1_8 = ((var_1_9 - var_1_4) - var_1_3);
	}


	// From: Req3Batch160Amount250
	unsigned char stepLocal_1 = var_1_11;
	if (stepLocal_1 && var_1_2) {
		var_1_10 = (var_1_12 - var_1_4);
	}


	// From: Req8Batch160Amount250
	var_1_21 = (var_1_22 - var_1_6);


	// From: Req17Batch160Amount250
	signed long int stepLocal_9 = var_1_12 - (var_1_6 + var_1_36);
	if (var_1_4 < stepLocal_9) {
		var_1_35 = (min (var_1_36 , (var_1_6 + 4)));
	} else {
		var_1_35 = ((min (var_1_36 , (var_1_6 + 2))) - var_1_32);
	}


	// From: Req18Batch160Amount250
	unsigned char stepLocal_10 = var_1_26;
	if (var_1_25 || stepLocal_10) {
		var_1_37 = (((var_1_38 + var_1_39) + (32 - var_1_40)) + (max (var_1_36 , (max (var_1_4 , var_1_3)))));
	} else {
		var_1_37 = ((min (var_1_5 , var_1_32)) + var_1_38);
	}


	// From: Req20Batch160Amount250
	unsigned long int stepLocal_11 = var_1_23;
	if (var_1_26) {
		if (var_1_18) {
			var_1_44 = ((max ((max (var_1_36 , var_1_6)) , var_1_40)) - (var_1_38 + var_1_39));
		} else {
			var_1_44 = (max (var_1_39 , (var_1_5 - var_1_38)));
		}
	} else {
		if (stepLocal_11 > var_1_4) {
			var_1_44 = ((var_1_39 + var_1_40) - var_1_32);
		}
	}


	// From: Req21Batch160Amount250
	if ((- var_1_32) <= var_1_21) {
		if (var_1_29) {
			if (var_1_29) {
				var_1_45 = var_1_40;
			} else {
				var_1_45 = var_1_5;
			}
		} else {
			var_1_45 = (var_1_36 + var_1_39);
		}
	}


	// From: Req23Batch160Amount250
	var_1_47 = (min (1 , var_1_36));


	// From: Req24Batch160Amount250
	if (! var_1_20) {
		var_1_48 = (((var_1_49 - var_1_40) - var_1_38) + var_1_36);
	} else {
		var_1_48 = ((var_1_6 + var_1_40) + (min (var_1_5 , var_1_36)));
	}


	// From: Req26Batch160Amount250
	var_1_51 = ((min (var_1_16 , var_1_52)) + var_1_53);


	// From: Req27Batch160Amount250
	unsigned long int stepLocal_12 = var_1_41 + (var_1_8 | var_1_7);
	if (stepLocal_12 >= var_1_21) {
		var_1_54 = (var_1_12 - ((var_1_55 + var_1_56) - (var_1_57 - var_1_40)));
	} else {
		var_1_54 = (128 - (var_1_49 - var_1_6));
	}


	// From: Req28Batch160Amount250
	if (var_1_24 || var_1_20) {
		var_1_58 = ((var_1_40 - (abs (5))) + ((5 - var_1_56) + var_1_59));
	} else {
		var_1_58 = var_1_56;
	}


	// From: Req29Batch160Amount250
	if (var_1_18) {
		var_1_60 = var_1_52;
	} else {
		var_1_60 = var_1_61;
	}


	// From: Req31Batch160Amount250
	var_1_63 = var_1_5;


	// From: Req6Batch160Amount250
	if (! (var_1_54 != var_1_9)) {
		var_1_17 = (128 - var_1_7);
	} else {
		var_1_17 = (var_1_7 + (max (var_1_6 , var_1_4)));
	}


	// From: Req11Batch160Amount250
	if (var_1_58 == var_1_21) {
		var_1_27 = (min ((min (var_1_6 , (50 - var_1_5))) , var_1_28));
	}


	// From: Req22Batch160Amount250
	if (var_1_25) {
		var_1_46 = (var_1_38 + var_1_5);
	} else {
		if ((var_1_32 - var_1_6) < var_1_21) {
			var_1_46 = (var_1_4 + var_1_17);
		}
	}


	// From: Req30Batch160Amount250
	signed long int stepLocal_13 = 32 ^ var_1_17;
	if (stepLocal_13 >= var_1_23) {
		var_1_62 = ((var_1_56 + var_1_38) + var_1_5);
	} else {
		var_1_62 = (min (var_1_32 , ((var_1_49 - var_1_40) + var_1_39)));
	}


	// From: Req4Batch160Amount250
	unsigned char stepLocal_2 = var_1_4;
	if (var_1_6 <= stepLocal_2) {
		var_1_13 = (((var_1_6 + var_1_12) - var_1_9) + var_1_17);
	}


	// From: Req13Batch160Amount250
	if (var_1_25) {
		var_1_30 = ((256 - var_1_13) + (min (var_1_54 , var_1_5)));
	} else {
		var_1_30 = (max (256 , ((var_1_3 - var_1_4) + var_1_13)));
	}


	// From: Req14Batch160Amount250
	signed char stepLocal_7 = var_1_44;
	if (stepLocal_7 <= (var_1_4 & (var_1_13 * var_1_21))) {
		var_1_31 = var_1_6;
	} else {
		var_1_31 = ((min (var_1_6 , var_1_5)) - var_1_32);
	}


	// From: Req16Batch160Amount250
	unsigned char stepLocal_8 = var_1_18;
	if (var_1_29 && stepLocal_8) {
		var_1_34 = (var_1_12 + (var_1_63 + var_1_3));
	} else {
		var_1_34 = var_1_30;
	}


	// From: Req15Batch160Amount250
	if (var_1_29 || var_1_26) {
		var_1_33 = (max (var_1_34 , (var_1_12 + var_1_7)));
	} else {
		var_1_33 = ((var_1_32 + var_1_3) + (min (last_1_var_1_33 , var_1_6)));
	}


	// From: Req25Batch160Amount250
	if ((var_1_9 - var_1_38) != (~ (max (var_1_34 , var_1_23)))) {
		if (var_1_34 < (var_1_34 - var_1_49)) {
			var_1_50 = (max (var_1_49 , (var_1_3 + (last_1_var_1_50 + 100))));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 64);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 63);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 49150);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 127);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967294);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -127);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 32);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 32);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 31);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 95);
	assume_abort_if_not(var_1_49 <= 127);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -461168.6018427383000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= -461168.6018427383000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 31);
	assume_abort_if_not(var_1_55 <= 64);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 32);
	assume_abort_if_not(var_1_56 <= 63);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 31);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_59 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_59 >= -536870911);
	assume_abort_if_not(var_1_59 <= 536870911);
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= -922337.2036854766000e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854766000e+12F && var_1_61 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_21 = var_1_21;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_50 = var_1_50;
}

int property(void) {
	return (((((((((((((((((((((((((((((((! last_1_var_1_24) ? (var_1_1 == ((unsigned char) (var_1_3 + var_1_4))) : (var_1_1 == ((unsigned char) ((var_1_5 + (abs (var_1_6))) + (max ((min (var_1_3 , var_1_4)) , (var_1_7 - 4))))))) && ((var_1_7 >= (var_1_6 * var_1_4)) ? (var_1_8 == ((unsigned short int) ((var_1_9 - var_1_4) - var_1_3))) : 1)) && ((var_1_11 && var_1_2) ? (var_1_10 == ((unsigned char) (var_1_12 - var_1_4))) : 1)) && ((var_1_6 <= var_1_4) ? (var_1_13 == ((signed long int) (((var_1_6 + var_1_12) - var_1_9) + var_1_17))) : 1)) && ((var_1_6 < last_1_var_1_41) ? (var_1_14 == ((double) (abs (var_1_16 + 1.25)))) : 1)) && ((! (var_1_54 != var_1_9)) ? (var_1_17 == ((unsigned char) (128 - var_1_7))) : (var_1_17 == ((unsigned char) (var_1_7 + (max (var_1_6 , var_1_4))))))) && ((var_1_12 > ((max (var_1_5 , var_1_9)) + (16 & var_1_4))) ? (var_1_29 ? ((var_1_16 < (- var_1_14)) ? (var_1_18 == ((unsigned char) (var_1_24 || (var_1_19 && var_1_20)))) : 1) : 1) : (var_1_18 == ((unsigned char) (! (! (! 0))))))) && (var_1_21 == ((unsigned long int) (var_1_22 - var_1_6)))) && ((var_1_7 > var_1_12) ? (var_1_23 == ((unsigned long int) var_1_1)) : 1)) && ((var_1_23 >= var_1_6) ? (var_1_24 == ((unsigned char) (! (! (var_1_25 || var_1_26))))) : (var_1_24 == ((unsigned char) (! var_1_20))))) && ((var_1_58 == var_1_21) ? (var_1_27 == ((signed char) (min ((min (var_1_6 , (50 - var_1_5))) , var_1_28)))) : 1)) && ((! (var_1_22 > var_1_12)) ? ((last_1_var_1_23 > ((min (500u , last_1_var_1_48)) + 256u)) ? (var_1_29 == ((unsigned char) ((last_1_var_1_34 >= last_1_var_1_30) && (var_1_26 || var_1_25)))) : (var_1_29 == ((unsigned char) ((last_1_var_1_21 >= (var_1_3 | last_1_var_1_30)) && (! var_1_20))))) : (var_1_29 == ((unsigned char) (! (var_1_26 && var_1_25)))))) && (var_1_25 ? (var_1_30 == ((signed long int) ((256 - var_1_13) + (min (var_1_54 , var_1_5))))) : (var_1_30 == ((signed long int) (max (256 , ((var_1_3 - var_1_4) + var_1_13))))))) && ((var_1_44 <= (var_1_4 & (var_1_13 * var_1_21))) ? (var_1_31 == ((signed char) var_1_6)) : (var_1_31 == ((signed char) ((min (var_1_6 , var_1_5)) - var_1_32))))) && ((var_1_29 || var_1_26) ? (var_1_33 == ((unsigned short int) (max (var_1_34 , (var_1_12 + var_1_7))))) : (var_1_33 == ((unsigned short int) ((var_1_32 + var_1_3) + (min (last_1_var_1_33 , var_1_6))))))) && ((var_1_29 && var_1_18) ? (var_1_34 == ((signed long int) (var_1_12 + (var_1_63 + var_1_3)))) : (var_1_34 == ((signed long int) var_1_30)))) && ((var_1_4 < (var_1_12 - (var_1_6 + var_1_36))) ? (var_1_35 == ((signed char) (min (var_1_36 , (var_1_6 + 4))))) : (var_1_35 == ((signed char) ((min (var_1_36 , (var_1_6 + 2))) - var_1_32))))) && ((var_1_25 || var_1_26) ? (var_1_37 == ((unsigned char) (((var_1_38 + var_1_39) + (32 - var_1_40)) + (max (var_1_36 , (max (var_1_4 , var_1_3))))))) : (var_1_37 == ((unsigned char) ((min (var_1_5 , var_1_32)) + var_1_38))))) && ((var_1_14 >= ((var_1_42 - var_1_43) + (- var_1_16))) ? (var_1_41 == ((unsigned long int) (abs (var_1_7)))) : 1)) && (var_1_26 ? (var_1_18 ? (var_1_44 == ((signed char) ((max ((max (var_1_36 , var_1_6)) , var_1_40)) - (var_1_38 + var_1_39)))) : (var_1_44 == ((signed char) (max (var_1_39 , (var_1_5 - var_1_38)))))) : ((var_1_23 > var_1_4) ? (var_1_44 == ((signed char) ((var_1_39 + var_1_40) - var_1_32))) : 1))) && (((- var_1_32) <= var_1_21) ? (var_1_29 ? (var_1_29 ? (var_1_45 == ((signed char) var_1_40)) : (var_1_45 == ((signed char) var_1_5))) : (var_1_45 == ((signed char) (var_1_36 + var_1_39)))) : 1)) && (var_1_25 ? (var_1_46 == ((unsigned short int) (var_1_38 + var_1_5))) : (((var_1_32 - var_1_6) < var_1_21) ? (var_1_46 == ((unsigned short int) (var_1_4 + var_1_17))) : 1))) && (var_1_47 == ((signed char) (min (1 , var_1_36))))) && ((! var_1_20) ? (var_1_48 == ((unsigned char) (((var_1_49 - var_1_40) - var_1_38) + var_1_36))) : (var_1_48 == ((unsigned char) ((var_1_6 + var_1_40) + (min (var_1_5 , var_1_36))))))) && (((var_1_9 - var_1_38) != (~ (max (var_1_34 , var_1_23)))) ? ((var_1_34 < (var_1_34 - var_1_49)) ? (var_1_50 == ((unsigned short int) (max (var_1_49 , (var_1_3 + (last_1_var_1_50 + 100)))))) : 1) : 1)) && (var_1_51 == ((double) ((min (var_1_16 , var_1_52)) + var_1_53)))) && (((var_1_41 + (var_1_8 | var_1_7)) >= var_1_21) ? (var_1_54 == ((unsigned char) (var_1_12 - ((var_1_55 + var_1_56) - (var_1_57 - var_1_40))))) : (var_1_54 == ((unsigned char) (128 - (var_1_49 - var_1_6)))))) && ((var_1_24 || var_1_20) ? (var_1_58 == ((signed long int) ((var_1_40 - (abs (5))) + ((5 - var_1_56) + var_1_59)))) : (var_1_58 == ((signed long int) var_1_56)))) && (var_1_18 ? (var_1_60 == ((double) var_1_52)) : (var_1_60 == ((double) var_1_61)))) && (((32 ^ var_1_17) >= var_1_23) ? (var_1_62 == ((unsigned char) ((var_1_56 + var_1_38) + var_1_5))) : (var_1_62 == ((unsigned char) (min (var_1_32 , ((var_1_49 - var_1_40) + var_1_39))))))) && (var_1_63 == ((unsigned short int) var_1_5))
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
