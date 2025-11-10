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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch18Amount250.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 1000000;
unsigned long int var_1_5 = 256;
unsigned long int var_1_6 = 1671053646;
unsigned long int var_1_7 = 1718233525;
unsigned long int var_1_8 = 2454441025;
unsigned long int var_1_9 = 16;
unsigned char var_1_11 = 1;
unsigned char var_1_13 = 0;
float var_1_14 = 10.75;
float var_1_15 = 2.2;
float var_1_16 = 16.2;
float var_1_17 = 0.0;
unsigned long int var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned short int var_1_20 = 10;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
signed char var_1_23 = 32;
signed char var_1_24 = 10;
signed char var_1_25 = 4;
unsigned char var_1_26 = 1;
signed char var_1_27 = 32;
signed char var_1_28 = 5;
signed char var_1_29 = 2;
signed char var_1_30 = 10;
signed long int var_1_31 = 16;
signed long int var_1_32 = 2;
float var_1_33 = 10.6;
double var_1_34 = 3.5;
unsigned char var_1_35 = 10;
double var_1_36 = 16.75;
unsigned short int var_1_37 = 256;
unsigned short int var_1_39 = 37911;
unsigned short int var_1_40 = 48627;
unsigned short int var_1_41 = 29107;
unsigned short int var_1_42 = 19075;
unsigned long int var_1_43 = 128;
signed short int var_1_44 = -8;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 0;
unsigned short int var_1_48 = 10;
unsigned short int var_1_49 = 43990;
unsigned short int var_1_50 = 32;
double var_1_51 = 8.2;
double var_1_52 = 0.0;
unsigned short int var_1_53 = 100;
unsigned short int var_1_54 = 10;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 16;
unsigned char var_1_58 = 25;
unsigned char var_1_59 = 4;
signed long int var_1_60 = 8;
unsigned long int var_1_61 = 256;
unsigned long int var_1_62 = 2059457511;
unsigned long int var_1_63 = 1249884052;
unsigned char var_1_64 = 1;
signed short int var_1_65 = -50;
unsigned char var_1_66 = 8;
unsigned char var_1_67 = 128;
unsigned char var_1_68 = 200;
unsigned char var_1_69 = 50;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 1;
signed long int var_1_72 = 10000000;
signed long int var_1_73 = 8;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_18 = 1;
unsigned long int last_1_var_1_43 = 128;
unsigned short int last_1_var_1_48 = 10;
unsigned char last_1_var_1_70 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch18Amount250
	unsigned long int stepLocal_0 = last_1_var_1_43;
	if (stepLocal_0 < ((last_1_var_1_18 & var_1_6) / var_1_8)) {
		var_1_11 = (last_1_var_1_70 || (! var_1_13));
	}


	// From: Req3Batch18Amount250
	unsigned long int stepLocal_1 = var_1_7;
	if (var_1_5 >= stepLocal_1) {
		var_1_14 = (50.25f - (var_1_15 + var_1_16));
	} else {
		var_1_14 = ((var_1_17 - (max (63.875f , var_1_15))) - var_1_16);
	}


	// From: Req7Batch18Amount250
	if (var_1_13) {
		var_1_31 = (var_1_29 + var_1_20);
	} else {
		if (var_1_11) {
			var_1_31 = ((var_1_20 - var_1_28) + var_1_30);
		} else {
			var_1_31 = (max ((var_1_27 + var_1_24) , ((abs (var_1_20)) + var_1_30)));
		}
	}


	// From: Req9Batch18Amount250
	if (var_1_15 >= var_1_17) {
		var_1_33 = (abs (abs (var_1_16)));
	}


	// From: Req14Batch18Amount250
	if (var_1_13) {
		var_1_46 = (! var_1_47);
	}


	// From: Req15Batch18Amount250
	if ((- var_1_40) >= (last_1_var_1_48 / var_1_20)) {
		var_1_48 = (var_1_42 + var_1_28);
	} else {
		var_1_48 = (var_1_49 - var_1_50);
	}


	// From: Req17Batch18Amount250
	unsigned short int stepLocal_7 = var_1_48;
	if (var_1_41 < stepLocal_7) {
		if (var_1_26) {
			var_1_53 = (abs (var_1_54));
		} else {
			var_1_53 = 1;
		}
	} else {
		var_1_53 = (min (var_1_28 , (max ((var_1_49 - var_1_50) , (var_1_41 + var_1_42)))));
	}


	// From: Req22Batch18Amount250
	var_1_64 = (min (var_1_28 , var_1_35));


	// From: Req25Batch18Amount250
	var_1_69 = var_1_35;


	// From: Req26Batch18Amount250
	if (var_1_26) {
		var_1_70 = var_1_21;
	}


	// From: Req27Batch18Amount250
	if (var_1_21) {
		var_1_71 = 1;
	} else {
		var_1_71 = var_1_26;
	}


	// From: Req8Batch18Amount250
	if (! var_1_46) {
		var_1_32 = (min (var_1_27 , var_1_20));
	} else {
		var_1_32 = var_1_30;
	}


	// From: Req12Batch18Amount250
	if (var_1_70) {
		var_1_43 = (min (var_1_28 , 1u));
	}


	// From: Req20Batch18Amount250
	if ((var_1_6 * var_1_28) >= (~ (var_1_8 / var_1_49))) {
		if (var_1_16 == (max (var_1_36 , var_1_52))) {
			var_1_60 = (min (((abs (var_1_41)) - var_1_20) , var_1_69));
		} else {
			var_1_60 = 10;
		}
	} else {
		var_1_60 = (max (var_1_29 , -16));
	}


	// From: Req10Batch18Amount250
	if ((var_1_20 >> var_1_35) != var_1_43) {
		var_1_34 = (min ((max ((var_1_16 + var_1_15) , var_1_17)) , var_1_36));
	} else {
		if (var_1_11 && var_1_70) {
			var_1_34 = 255.9;
		}
	}


	// From: Req21Batch18Amount250
	if (var_1_33 < var_1_34) {
		var_1_61 = ((var_1_7 + (max (var_1_62 , var_1_63))) - var_1_59);
	}


	// From: Req11Batch18Amount250
	signed char stepLocal_3 = var_1_25;
	if (var_1_34 <= (- 1.0000000000075E11f)) {
		if (((min (var_1_39 , var_1_40)) - var_1_28) >= stepLocal_3) {
			if (var_1_26) {
				var_1_37 = ((abs (47260)) - var_1_28);
			}
		} else {
			if (var_1_71) {
				var_1_37 = (max (var_1_35 , ((var_1_41 + var_1_42) - var_1_28)));
			} else {
				var_1_37 = var_1_28;
			}
		}
	} else {
		var_1_37 = var_1_41;
	}


	// From: Req19Batch18Amount250
	if (var_1_13) {
		if (var_1_32 <= (var_1_37 | (max (var_1_28 , var_1_42)))) {
			var_1_56 = var_1_28;
		} else {
			var_1_56 = (max ((var_1_35 + (min (var_1_28 , var_1_58))) , var_1_59));
		}
	} else {
		var_1_56 = (var_1_58 + var_1_35);
	}


	// From: Req16Batch18Amount250
	signed long int stepLocal_6 = (var_1_27 - var_1_41) + var_1_20;
	if (stepLocal_6 != ((2004935536 - var_1_61) - var_1_50)) {
		var_1_51 = (var_1_17 - (max (var_1_15 , var_1_16)));
	} else {
		var_1_51 = (var_1_17 - ((abs (var_1_52)) - var_1_16));
	}


	// From: Req28Batch18Amount250
	if (var_1_51 != (var_1_33 + (var_1_16 - var_1_15))) {
		var_1_72 = (abs (max (var_1_25 , var_1_67)));
	} else {
		if (var_1_71) {
			if (var_1_21) {
				var_1_72 = var_1_53;
			} else {
				var_1_72 = var_1_73;
			}
		}
	}


	// From: Req24Batch18Amount250
	if (var_1_51 >= var_1_36) {
		var_1_66 = ((max (var_1_67 , var_1_68)) - (min (var_1_58 , 5)));
	} else {
		var_1_66 = var_1_28;
	}


	// From: Req1Batch18Amount250
	if (var_1_70) {
		if (! (var_1_72 != var_1_32)) {
			var_1_1 = var_1_5;
		} else {
			var_1_1 = ((min ((var_1_6 + var_1_7) , var_1_8)) - var_1_9);
		}
	} else {
		if (var_1_11) {
			var_1_1 = (min (var_1_7 , var_1_5));
		} else {
			var_1_1 = var_1_7;
		}
	}


	// From: Req4Batch18Amount250
	unsigned long int stepLocal_2 = var_1_1;
	if (var_1_13) {
		var_1_18 = (max ((abs (var_1_8 - var_1_9)) , (max ((var_1_7 + var_1_6) , var_1_5))));
	} else {
		if ((min (-2 , var_1_7)) < stepLocal_2) {
			var_1_18 = var_1_6;
		} else {
			var_1_18 = var_1_8;
		}
	}


	// From: Req5Batch18Amount250
	if (((var_1_1 % var_1_20) ^ 100) != (var_1_18 / var_1_8)) {
		var_1_19 = (var_1_21 && var_1_22);
	} else {
		var_1_19 = (! var_1_22);
	}


	// From: Req6Batch18Amount250
	if (var_1_22) {
		var_1_23 = (abs (min (var_1_24 , var_1_25)));
	} else {
		if (((max (var_1_20 , var_1_18)) / (abs (4))) >= (200u & var_1_8)) {
			var_1_23 = (abs (var_1_25));
		} else {
			if (var_1_70 && (! var_1_13)) {
				if (var_1_20 <= (var_1_8 * var_1_61)) {
					var_1_23 = (var_1_27 - var_1_28);
				} else {
					var_1_23 = (max ((var_1_29 + (abs (var_1_30))) , var_1_25));
				}
			} else {
				var_1_23 = var_1_24;
			}
		}
	}


	// From: Req13Batch18Amount250
	signed long int stepLocal_5 = var_1_32 + (var_1_39 / var_1_35);
	unsigned long int stepLocal_4 = - (max (var_1_42 , 5u));
	if (stepLocal_4 <= (var_1_18 * (var_1_8 - var_1_6))) {
		if (-1000000000 <= stepLocal_5) {
			if (var_1_19) {
				var_1_44 = (var_1_35 - 2);
			}
		}
	}


	// From: Req18Batch18Amount250
	signed long int stepLocal_8 = var_1_60;
	if (! (var_1_21 || var_1_71)) {
		if (var_1_43 >= stepLocal_8) {
			var_1_55 = (var_1_26 || (var_1_19 || (! var_1_13)));
		}
	}


	// From: Req23Batch18Amount250
	unsigned short int stepLocal_10 = var_1_20;
	unsigned long int stepLocal_9 = var_1_9;
	if (var_1_59 < stepLocal_9) {
		if (var_1_61 < stepLocal_10) {
			var_1_65 = (max ((var_1_32 - var_1_58) , (var_1_44 - var_1_28)));
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 1073741823);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 1073741824);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967294);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 4611686.018427383000e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 65535);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -126);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -126);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -1);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -63);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -63);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 15);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 32767);
	assume_abort_if_not(var_1_39 <= 65535);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 32767);
	assume_abort_if_not(var_1_40 <= 65535);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 16383);
	assume_abort_if_not(var_1_41 <= 32767);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 16384);
	assume_abort_if_not(var_1_42 <= 32767);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 32767);
	assume_abort_if_not(var_1_49 <= 65534);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 32767);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -922337.2036854766000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= -461168.6018427383000e+13F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 65534);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 127);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 254);
	var_1_62 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_62 >= 1073741824);
	assume_abort_if_not(var_1_62 <= 2147483647);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 1073741824);
	assume_abort_if_not(var_1_63 <= 2147483647);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 127);
	assume_abort_if_not(var_1_67 <= 254);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 127);
	assume_abort_if_not(var_1_68 <= 254);
	var_1_73 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_73 >= -2147483647);
	assume_abort_if_not(var_1_73 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_70 = var_1_70;
}

int property(void) {
	return (((((((((((((((((((((((((((var_1_70 ? ((! (var_1_72 != var_1_32)) ? (var_1_1 == ((unsigned long int) var_1_5)) : (var_1_1 == ((unsigned long int) ((min ((var_1_6 + var_1_7) , var_1_8)) - var_1_9)))) : (var_1_11 ? (var_1_1 == ((unsigned long int) (min (var_1_7 , var_1_5)))) : (var_1_1 == ((unsigned long int) var_1_7)))) && ((last_1_var_1_43 < ((last_1_var_1_18 & var_1_6) / var_1_8)) ? (var_1_11 == ((unsigned char) (last_1_var_1_70 || (! var_1_13)))) : 1)) && ((var_1_5 >= var_1_7) ? (var_1_14 == ((float) (50.25f - (var_1_15 + var_1_16)))) : (var_1_14 == ((float) ((var_1_17 - (max (63.875f , var_1_15))) - var_1_16))))) && (var_1_13 ? (var_1_18 == ((unsigned long int) (max ((abs (var_1_8 - var_1_9)) , (max ((var_1_7 + var_1_6) , var_1_5)))))) : (((min (-2 , var_1_7)) < var_1_1) ? (var_1_18 == ((unsigned long int) var_1_6)) : (var_1_18 == ((unsigned long int) var_1_8))))) && ((((var_1_1 % var_1_20) ^ 100) != (var_1_18 / var_1_8)) ? (var_1_19 == ((unsigned char) (var_1_21 && var_1_22))) : (var_1_19 == ((unsigned char) (! var_1_22))))) && (var_1_22 ? (var_1_23 == ((signed char) (abs (min (var_1_24 , var_1_25))))) : ((((max (var_1_20 , var_1_18)) / (abs (4))) >= (200u & var_1_8)) ? (var_1_23 == ((signed char) (abs (var_1_25)))) : ((var_1_70 && (! var_1_13)) ? ((var_1_20 <= (var_1_8 * var_1_61)) ? (var_1_23 == ((signed char) (var_1_27 - var_1_28))) : (var_1_23 == ((signed char) (max ((var_1_29 + (abs (var_1_30))) , var_1_25))))) : (var_1_23 == ((signed char) var_1_24)))))) && (var_1_13 ? (var_1_31 == ((signed long int) (var_1_29 + var_1_20))) : (var_1_11 ? (var_1_31 == ((signed long int) ((var_1_20 - var_1_28) + var_1_30))) : (var_1_31 == ((signed long int) (max ((var_1_27 + var_1_24) , ((abs (var_1_20)) + var_1_30)))))))) && ((! var_1_46) ? (var_1_32 == ((signed long int) (min (var_1_27 , var_1_20)))) : (var_1_32 == ((signed long int) var_1_30)))) && ((var_1_15 >= var_1_17) ? (var_1_33 == ((float) (abs (abs (var_1_16))))) : 1)) && (((var_1_20 >> var_1_35) != var_1_43) ? (var_1_34 == ((double) (min ((max ((var_1_16 + var_1_15) , var_1_17)) , var_1_36)))) : ((var_1_11 && var_1_70) ? (var_1_34 == ((double) 255.9)) : 1))) && ((var_1_34 <= (- 1.0000000000075E11f)) ? ((((min (var_1_39 , var_1_40)) - var_1_28) >= var_1_25) ? (var_1_26 ? (var_1_37 == ((unsigned short int) ((abs (47260)) - var_1_28))) : 1) : (var_1_71 ? (var_1_37 == ((unsigned short int) (max (var_1_35 , ((var_1_41 + var_1_42) - var_1_28))))) : (var_1_37 == ((unsigned short int) var_1_28)))) : (var_1_37 == ((unsigned short int) var_1_41)))) && (var_1_70 ? (var_1_43 == ((unsigned long int) (min (var_1_28 , 1u)))) : 1)) && (((- (max (var_1_42 , 5u))) <= (var_1_18 * (var_1_8 - var_1_6))) ? ((-1000000000 <= (var_1_32 + (var_1_39 / var_1_35))) ? (var_1_19 ? (var_1_44 == ((signed short int) (var_1_35 - 2))) : 1) : 1) : 1)) && (var_1_13 ? (var_1_46 == ((unsigned char) (! var_1_47))) : 1)) && (((- var_1_40) >= (last_1_var_1_48 / var_1_20)) ? (var_1_48 == ((unsigned short int) (var_1_42 + var_1_28))) : (var_1_48 == ((unsigned short int) (var_1_49 - var_1_50))))) && ((((var_1_27 - var_1_41) + var_1_20) != ((2004935536 - var_1_61) - var_1_50)) ? (var_1_51 == ((double) (var_1_17 - (max (var_1_15 , var_1_16))))) : (var_1_51 == ((double) (var_1_17 - ((abs (var_1_52)) - var_1_16)))))) && ((var_1_41 < var_1_48) ? (var_1_26 ? (var_1_53 == ((unsigned short int) (abs (var_1_54)))) : (var_1_53 == ((unsigned short int) 1))) : (var_1_53 == ((unsigned short int) (min (var_1_28 , (max ((var_1_49 - var_1_50) , (var_1_41 + var_1_42))))))))) && ((! (var_1_21 || var_1_71)) ? ((var_1_43 >= var_1_60) ? (var_1_55 == ((unsigned char) (var_1_26 || (var_1_19 || (! var_1_13))))) : 1) : 1)) && (var_1_13 ? ((var_1_32 <= (var_1_37 | (max (var_1_28 , var_1_42)))) ? (var_1_56 == ((unsigned char) var_1_28)) : (var_1_56 == ((unsigned char) (max ((var_1_35 + (min (var_1_28 , var_1_58))) , var_1_59))))) : (var_1_56 == ((unsigned char) (var_1_58 + var_1_35))))) && (((var_1_6 * var_1_28) >= (~ (var_1_8 / var_1_49))) ? ((var_1_16 == (max (var_1_36 , var_1_52))) ? (var_1_60 == ((signed long int) (min (((abs (var_1_41)) - var_1_20) , var_1_69)))) : (var_1_60 == ((signed long int) 10))) : (var_1_60 == ((signed long int) (max (var_1_29 , -16)))))) && ((var_1_33 < var_1_34) ? (var_1_61 == ((unsigned long int) ((var_1_7 + (max (var_1_62 , var_1_63))) - var_1_59))) : 1)) && (var_1_64 == ((unsigned char) (min (var_1_28 , var_1_35))))) && ((var_1_59 < var_1_9) ? ((var_1_61 < var_1_20) ? (var_1_65 == ((signed short int) (max ((var_1_32 - var_1_58) , (var_1_44 - var_1_28))))) : 1) : 1)) && ((var_1_51 >= var_1_36) ? (var_1_66 == ((unsigned char) ((max (var_1_67 , var_1_68)) - (min (var_1_58 , 5))))) : (var_1_66 == ((unsigned char) var_1_28)))) && (var_1_69 == ((unsigned char) var_1_35))) && (var_1_26 ? (var_1_70 == ((unsigned char) var_1_21)) : 1)) && (var_1_21 ? (var_1_71 == ((unsigned char) 1)) : (var_1_71 == ((unsigned char) var_1_26)))) && ((var_1_51 != (var_1_33 + (var_1_16 - var_1_15))) ? (var_1_72 == ((signed long int) (abs (max (var_1_25 , var_1_67))))) : (var_1_71 ? (var_1_21 ? (var_1_72 == ((signed long int) var_1_53)) : (var_1_72 == ((signed long int) var_1_73))) : 1))
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
