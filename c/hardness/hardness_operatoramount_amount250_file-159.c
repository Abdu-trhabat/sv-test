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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch159Amount250.c", 13, "reach_error"); }
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
double var_1_1 = 10.25;
unsigned char var_1_2 = 0;
double var_1_3 = 256.9;
double var_1_4 = 0.75;
double var_1_5 = 9.8;
double var_1_6 = 1.5;
double var_1_7 = 16.1;
unsigned short int var_1_8 = 0;
unsigned char var_1_9 = 0;
signed long int var_1_12 = -1;
unsigned short int var_1_13 = 8;
unsigned short int var_1_14 = 57031;
unsigned short int var_1_15 = 51286;
unsigned short int var_1_16 = 32;
signed long int var_1_17 = -16;
double var_1_18 = 16.25;
unsigned short int var_1_19 = 44274;
unsigned short int var_1_20 = 100;
unsigned short int var_1_21 = 4;
unsigned short int var_1_22 = 8;
unsigned short int var_1_23 = 128;
unsigned long int var_1_24 = 1;
unsigned short int var_1_25 = 64;
unsigned short int var_1_26 = 30795;
unsigned short int var_1_27 = 4;
signed long int var_1_28 = 0;
signed long int var_1_29 = 1875160958;
double var_1_30 = 127.75;
unsigned long int var_1_31 = 32;
unsigned char var_1_32 = 0;
signed long int var_1_33 = 8;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
signed char var_1_36 = -64;
signed char var_1_37 = -32;
signed char var_1_38 = -2;
signed char var_1_39 = -128;
unsigned short int var_1_40 = 128;
unsigned short int var_1_41 = 50;
unsigned short int var_1_42 = 16;
unsigned long int var_1_43 = 128;
unsigned long int var_1_45 = 1774534588;
signed short int var_1_46 = 5;
signed char var_1_47 = 2;
signed long int var_1_48 = -5;
unsigned short int var_1_50 = 16;
signed short int var_1_52 = 256;
signed short int var_1_53 = 64;
signed short int var_1_55 = -2;
unsigned short int var_1_56 = 64;
unsigned short int var_1_57 = 1;
unsigned short int var_1_58 = 1;
signed short int var_1_59 = 4;
signed long int var_1_60 = 64;
float var_1_61 = 1.4;
double var_1_62 = 8.75;
unsigned char var_1_63 = 128;
double var_1_64 = 256.8;
double var_1_66 = 0.0;
signed short int var_1_67 = 32;
signed long int var_1_68 = 5;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_8 = 0;
unsigned short int last_1_var_1_20 = 100;
unsigned long int last_1_var_1_24 = 1;
unsigned short int last_1_var_1_25 = 64;
signed long int last_1_var_1_28 = 0;
unsigned long int last_1_var_1_31 = 32;
unsigned char last_1_var_1_32 = 0;
unsigned long int last_1_var_1_43 = 128;
signed long int last_1_var_1_48 = -5;
unsigned short int last_1_var_1_50 = 16;
unsigned short int last_1_var_1_58 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req18Batch159Amount250
	signed long int stepLocal_17 = var_1_29 >> var_1_47;
	unsigned char stepLocal_16 = last_1_var_1_32;
	unsigned long int stepLocal_15 = last_1_var_1_24;
	if (stepLocal_15 <= (var_1_45 + last_1_var_1_31)) {
		if (var_1_45 == stepLocal_17) {
			var_1_50 = var_1_15;
		} else {
			if ((var_1_26 == (var_1_42 + last_1_var_1_25)) || stepLocal_16) {
				var_1_50 = (var_1_21 + var_1_27);
			} else {
				var_1_50 = (max ((var_1_26 + var_1_41) , 8));
			}
		}
	}


	// From: Req10Batch159Amount250
	unsigned char stepLocal_8 = last_1_var_1_32;
	signed long int stepLocal_7 = last_1_var_1_58;
	if (var_1_3 > (var_1_5 * (max (32.4 , var_1_7)))) {
		if (stepLocal_7 == ((~ last_1_var_1_43) | (var_1_19 + last_1_var_1_31))) {
			if (stepLocal_8 || ((last_1_var_1_28 & last_1_var_1_31) > 2)) {
				var_1_31 = (var_1_15 + (last_1_var_1_50 + (last_1_var_1_43 + last_1_var_1_58)));
			}
		}
	} else {
		var_1_31 = 0u;
	}


	// From: Req9Batch159Amount250
	signed long int stepLocal_6 = last_1_var_1_28;
	signed long int stepLocal_5 = last_1_var_1_8;
	if (stepLocal_5 < (- var_1_26)) {
		if (! (var_1_2 && var_1_9)) {
			if ((last_1_var_1_20 + 64) <= stepLocal_6) {
				var_1_30 = var_1_7;
			} else {
				var_1_30 = var_1_6;
			}
		} else {
			var_1_30 = var_1_5;
		}
	}


	// From: Req4Batch159Amount250
	unsigned short int stepLocal_3 = var_1_15;
	if (stepLocal_3 == (var_1_19 - var_1_16)) {
		var_1_18 = (var_1_7 - (var_1_6 + 5.5));
	}


	// From: Req5Batch159Amount250
	unsigned short int stepLocal_4 = var_1_14;
	if (stepLocal_4 <= var_1_16) {
		var_1_20 = ((var_1_21 + (min (var_1_22 , var_1_23))) + var_1_16);
	}


	// From: Req11Batch159Amount250
	unsigned short int stepLocal_9 = var_1_21;
	if (((min (var_1_12 , 1)) - (min (var_1_16 , var_1_33))) < stepLocal_9) {
		var_1_32 = (var_1_34 || var_1_35);
	}


	// From: Req12Batch159Amount250
	signed long int stepLocal_10 = var_1_13 + (-16 / -128);
	if (stepLocal_10 > (var_1_15 * (var_1_16 + var_1_27))) {
		var_1_36 = (var_1_37 + var_1_38);
	}


	// From: Req13Batch159Amount250
	var_1_39 = var_1_38;


	// From: Req19Batch159Amount250
	if (var_1_32) {
		var_1_52 = (var_1_41 + (min (var_1_37 , 32)));
	} else {
		var_1_52 = (var_1_21 - var_1_27);
	}


	// From: Req23Batch159Amount250
	signed char stepLocal_20 = var_1_47;
	if (-50 >= stepLocal_20) {
		var_1_60 = var_1_29;
	} else {
		var_1_60 = (var_1_50 - 200);
	}


	// From: Req24Batch159Amount250
	if (var_1_32) {
		var_1_61 = (var_1_5 - var_1_6);
	} else {
		var_1_61 = (abs (2.8f));
	}


	// From: Req28Batch159Amount250
	var_1_68 = var_1_22;


	// From: Req26Batch159Amount250
	unsigned short int stepLocal_21 = var_1_50;
	if (var_1_45 > stepLocal_21) {
		if (var_1_32) {
			var_1_64 = ((var_1_66 - var_1_7) - var_1_6);
		} else {
			if (var_1_34) {
				if (var_1_35) {
					var_1_64 = (max (var_1_6 , var_1_4));
				}
			} else {
				var_1_64 = 9.999999999995E11;
			}
		}
	} else {
		var_1_64 = var_1_3;
	}


	// From: Req15Batch159Amount250
	if (var_1_64 < (var_1_30 * var_1_5)) {
		var_1_43 = ((var_1_29 - 64u) + (var_1_45 - 64u));
	}


	// From: Req8Batch159Amount250
	if (! ((var_1_21 | var_1_22) < var_1_43)) {
		var_1_28 = (var_1_27 - (var_1_29 - var_1_16));
	} else {
		var_1_28 = ((min (var_1_26 , (var_1_14 + var_1_19))) + var_1_27);
	}


	// From: Req7Batch159Amount250
	if ((- var_1_3) > var_1_30) {
		if (var_1_32) {
			var_1_25 = (var_1_14 - 32);
		} else {
			var_1_25 = ((var_1_23 + var_1_22) + (var_1_26 - var_1_27));
		}
	}


	// From: Req22Batch159Amount250
	if (var_1_30 > var_1_18) {
		var_1_58 = (min (var_1_47 , (var_1_42 + var_1_59)));
	} else {
		var_1_58 = ((var_1_42 + (abs (var_1_27))) + var_1_41);
	}


	// From: Req1Batch159Amount250
	if (var_1_32) {
		var_1_1 = (min (var_1_3 , var_1_4));
	} else {
		var_1_1 = (var_1_5 - (var_1_6 + var_1_7));
	}


	// From: Req3Batch159Amount250
	unsigned char stepLocal_2 = var_1_32;
	if (stepLocal_2 && (var_1_5 <= var_1_1)) {
		var_1_17 = var_1_15;
	}


	// From: Req17Batch159Amount250
	unsigned short int stepLocal_14 = var_1_13;
	if ((var_1_17 & var_1_28) <= stepLocal_14) {
		var_1_48 = -2;
	} else {
		var_1_48 = last_1_var_1_48;
	}


	// From: Req21Batch159Amount250
	if (var_1_64 >= var_1_3) {
		var_1_56 = (min (var_1_27 , var_1_22));
	} else {
		var_1_56 = (var_1_57 + (var_1_23 + var_1_47));
	}


	// From: Req2Batch159Amount250
	unsigned long int stepLocal_1 = var_1_31;
	signed long int stepLocal_0 = var_1_12 - 50;
	if (var_1_32) {
		if (stepLocal_1 < var_1_17) {
			if (var_1_31 > stepLocal_0) {
				if (var_1_32) {
					var_1_8 = var_1_13;
				}
			}
		} else {
			var_1_8 = (((min (var_1_14 , var_1_15)) - 8) - var_1_16);
		}
	} else {
		var_1_8 = (max (var_1_16 , (abs (var_1_14))));
	}


	// From: Req16Batch159Amount250
	signed long int stepLocal_13 = var_1_60;
	unsigned short int stepLocal_12 = var_1_14;
	if (stepLocal_12 != (max (var_1_60 , (var_1_27 >> var_1_47)))) {
		if (stepLocal_13 < var_1_48) {
			if (var_1_32) {
				var_1_46 = var_1_20;
			}
		}
	}


	// From: Req6Batch159Amount250
	if (((var_1_6 * var_1_7) + var_1_5) <= (var_1_64 * (- var_1_4))) {
		if (var_1_14 != var_1_19) {
			if (var_1_32) {
				var_1_24 = (var_1_19 + var_1_8);
			}
		} else {
			var_1_24 = var_1_21;
		}
	}


	// From: Req14Batch159Amount250
	signed long int stepLocal_11 = var_1_29;
	if (stepLocal_11 <= var_1_24) {
		var_1_40 = (var_1_23 + (var_1_22 + (var_1_41 + var_1_42)));
	}


	// From: Req20Batch159Amount250
	signed long int stepLocal_19 = - var_1_29;
	unsigned short int stepLocal_18 = var_1_42;
	if (! var_1_34) {
		var_1_53 = (abs (var_1_24));
	} else {
		if (var_1_13 != stepLocal_19) {
			if (stepLocal_18 >= var_1_25) {
				var_1_53 = var_1_55;
			} else {
				var_1_53 = (min (var_1_23 , var_1_47));
			}
		}
	}


	// From: Req25Batch159Amount250
	if (var_1_27 >= (var_1_17 / var_1_47)) {
		if ((var_1_63 - var_1_47) >= var_1_60) {
			if ((var_1_31 % 10000) > (var_1_52 * (var_1_24 + var_1_14))) {
				var_1_62 = var_1_3;
			}
		} else {
			var_1_62 = (max ((var_1_6 - var_1_7) , (abs (var_1_5))));
		}
	} else {
		if (var_1_32) {
			var_1_62 = (var_1_6 + (127.6 - var_1_7));
		} else {
			if (var_1_35 && (var_1_24 < var_1_28)) {
				var_1_62 = var_1_4;
			} else {
				var_1_62 = (var_1_7 + var_1_6);
			}
		}
	}


	// From: Req27Batch159Amount250
	if (var_1_3 >= var_1_30) {
		if (! (var_1_24 < var_1_40)) {
			var_1_67 = 64;
		} else {
			var_1_67 = var_1_23;
		}
	} else {
		var_1_67 = (var_1_22 - var_1_27);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 49150);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 49150);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65535);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 16384);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 16383);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 16383);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 16383);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= 1073741823);
	assume_abort_if_not(var_1_29 <= 2147483646);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -63);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -63);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 8192);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 8191);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 1073741823);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 15);
	var_1_55 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_55 >= -32767);
	assume_abort_if_not(var_1_55 <= 32766);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 32767);
	var_1_59 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_59 >= 1);
	assume_abort_if_not(var_1_59 <= 6);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 127);
	assume_abort_if_not(var_1_63 <= 255);
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= 4611686.018427383000e+12F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854766000e+12F && var_1_66 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_58 = var_1_58;
}

int property(void) {
	return (((((((((((((((((((((((((((var_1_32 ? (var_1_1 == ((double) (min (var_1_3 , var_1_4)))) : (var_1_1 == ((double) (var_1_5 - (var_1_6 + var_1_7))))) && (var_1_32 ? ((var_1_31 < var_1_17) ? ((var_1_31 > (var_1_12 - 50)) ? (var_1_32 ? (var_1_8 == ((unsigned short int) var_1_13)) : 1) : 1) : (var_1_8 == ((unsigned short int) (((min (var_1_14 , var_1_15)) - 8) - var_1_16)))) : (var_1_8 == ((unsigned short int) (max (var_1_16 , (abs (var_1_14)))))))) && ((var_1_32 && (var_1_5 <= var_1_1)) ? (var_1_17 == ((signed long int) var_1_15)) : 1)) && ((var_1_15 == (var_1_19 - var_1_16)) ? (var_1_18 == ((double) (var_1_7 - (var_1_6 + 5.5)))) : 1)) && ((var_1_14 <= var_1_16) ? (var_1_20 == ((unsigned short int) ((var_1_21 + (min (var_1_22 , var_1_23))) + var_1_16))) : 1)) && ((((var_1_6 * var_1_7) + var_1_5) <= (var_1_64 * (- var_1_4))) ? ((var_1_14 != var_1_19) ? (var_1_32 ? (var_1_24 == ((unsigned long int) (var_1_19 + var_1_8))) : 1) : (var_1_24 == ((unsigned long int) var_1_21))) : 1)) && (((- var_1_3) > var_1_30) ? (var_1_32 ? (var_1_25 == ((unsigned short int) (var_1_14 - 32))) : (var_1_25 == ((unsigned short int) ((var_1_23 + var_1_22) + (var_1_26 - var_1_27))))) : 1)) && ((! ((var_1_21 | var_1_22) < var_1_43)) ? (var_1_28 == ((signed long int) (var_1_27 - (var_1_29 - var_1_16)))) : (var_1_28 == ((signed long int) ((min (var_1_26 , (var_1_14 + var_1_19))) + var_1_27))))) && ((last_1_var_1_8 < (- var_1_26)) ? ((! (var_1_2 && var_1_9)) ? (((last_1_var_1_20 + 64) <= last_1_var_1_28) ? (var_1_30 == ((double) var_1_7)) : (var_1_30 == ((double) var_1_6))) : (var_1_30 == ((double) var_1_5))) : 1)) && ((var_1_3 > (var_1_5 * (max (32.4 , var_1_7)))) ? ((last_1_var_1_58 == ((~ last_1_var_1_43) | (var_1_19 + last_1_var_1_31))) ? ((last_1_var_1_32 || ((last_1_var_1_28 & last_1_var_1_31) > 2)) ? (var_1_31 == ((unsigned long int) (var_1_15 + (last_1_var_1_50 + (last_1_var_1_43 + last_1_var_1_58))))) : 1) : 1) : (var_1_31 == ((unsigned long int) 0u)))) && ((((min (var_1_12 , 1)) - (min (var_1_16 , var_1_33))) < var_1_21) ? (var_1_32 == ((unsigned char) (var_1_34 || var_1_35))) : 1)) && (((var_1_13 + (-16 / -128)) > (var_1_15 * (var_1_16 + var_1_27))) ? (var_1_36 == ((signed char) (var_1_37 + var_1_38))) : 1)) && (var_1_39 == ((signed char) var_1_38))) && ((var_1_29 <= var_1_24) ? (var_1_40 == ((unsigned short int) (var_1_23 + (var_1_22 + (var_1_41 + var_1_42))))) : 1)) && ((var_1_64 < (var_1_30 * var_1_5)) ? (var_1_43 == ((unsigned long int) ((var_1_29 - 64u) + (var_1_45 - 64u)))) : 1)) && ((var_1_14 != (max (var_1_60 , (var_1_27 >> var_1_47)))) ? ((var_1_60 < var_1_48) ? (var_1_32 ? (var_1_46 == ((signed short int) var_1_20)) : 1) : 1) : 1)) && (((var_1_17 & var_1_28) <= var_1_13) ? (var_1_48 == ((signed long int) -2)) : (var_1_48 == ((signed long int) last_1_var_1_48)))) && ((last_1_var_1_24 <= (var_1_45 + last_1_var_1_31)) ? ((var_1_45 == (var_1_29 >> var_1_47)) ? (var_1_50 == ((unsigned short int) var_1_15)) : (((var_1_26 == (var_1_42 + last_1_var_1_25)) || last_1_var_1_32) ? (var_1_50 == ((unsigned short int) (var_1_21 + var_1_27))) : (var_1_50 == ((unsigned short int) (max ((var_1_26 + var_1_41) , 8)))))) : 1)) && (var_1_32 ? (var_1_52 == ((signed short int) (var_1_41 + (min (var_1_37 , 32))))) : (var_1_52 == ((signed short int) (var_1_21 - var_1_27))))) && ((! var_1_34) ? (var_1_53 == ((signed short int) (abs (var_1_24)))) : ((var_1_13 != (- var_1_29)) ? ((var_1_42 >= var_1_25) ? (var_1_53 == ((signed short int) var_1_55)) : (var_1_53 == ((signed short int) (min (var_1_23 , var_1_47))))) : 1))) && ((var_1_64 >= var_1_3) ? (var_1_56 == ((unsigned short int) (min (var_1_27 , var_1_22)))) : (var_1_56 == ((unsigned short int) (var_1_57 + (var_1_23 + var_1_47)))))) && ((var_1_30 > var_1_18) ? (var_1_58 == ((unsigned short int) (min (var_1_47 , (var_1_42 + var_1_59))))) : (var_1_58 == ((unsigned short int) ((var_1_42 + (abs (var_1_27))) + var_1_41))))) && ((-50 >= var_1_47) ? (var_1_60 == ((signed long int) var_1_29)) : (var_1_60 == ((signed long int) (var_1_50 - 200))))) && (var_1_32 ? (var_1_61 == ((float) (var_1_5 - var_1_6))) : (var_1_61 == ((float) (abs (2.8f)))))) && ((var_1_27 >= (var_1_17 / var_1_47)) ? (((var_1_63 - var_1_47) >= var_1_60) ? (((var_1_31 % 10000) > (var_1_52 * (var_1_24 + var_1_14))) ? (var_1_62 == ((double) var_1_3)) : 1) : (var_1_62 == ((double) (max ((var_1_6 - var_1_7) , (abs (var_1_5))))))) : (var_1_32 ? (var_1_62 == ((double) (var_1_6 + (127.6 - var_1_7)))) : ((var_1_35 && (var_1_24 < var_1_28)) ? (var_1_62 == ((double) var_1_4)) : (var_1_62 == ((double) (var_1_7 + var_1_6))))))) && ((var_1_45 > var_1_50) ? (var_1_32 ? (var_1_64 == ((double) ((var_1_66 - var_1_7) - var_1_6))) : (var_1_34 ? (var_1_35 ? (var_1_64 == ((double) (max (var_1_6 , var_1_4)))) : 1) : (var_1_64 == ((double) 9.999999999995E11)))) : (var_1_64 == ((double) var_1_3)))) && ((var_1_3 >= var_1_30) ? ((! (var_1_24 < var_1_40)) ? (var_1_67 == ((signed short int) 64)) : (var_1_67 == ((signed short int) var_1_23))) : (var_1_67 == ((signed short int) (var_1_22 - var_1_27))))) && (var_1_68 == ((signed long int) var_1_22))
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
