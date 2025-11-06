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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch145Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 100;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 200;
unsigned char var_1_8 = 0;
signed long int var_1_9 = -16;
signed long int var_1_11 = 5;
unsigned short int var_1_12 = 32;
unsigned short int var_1_15 = 57502;
signed short int var_1_16 = -25;
unsigned long int var_1_17 = 256;
float var_1_18 = 50.75;
unsigned char var_1_19 = 32;
unsigned char var_1_20 = 25;
float var_1_21 = 5.53;
float var_1_22 = 0.9;
signed long int var_1_23 = -128;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
double var_1_26 = 255.2;
double var_1_27 = 10.1;
signed short int var_1_28 = 27101;
signed short int var_1_29 = 8;
double var_1_30 = 31.5;
double var_1_31 = 127.2;
double var_1_32 = 10000000000000.5;
double var_1_33 = 200.2;
double var_1_34 = 1.8;
double var_1_35 = 8.8;
double var_1_36 = 255.1;
signed char var_1_37 = -8;
signed char var_1_39 = -2;
signed char var_1_40 = 0;
signed char var_1_41 = 5;
signed char var_1_42 = 5;
signed char var_1_43 = 2;
signed long int var_1_44 = -8;
unsigned long int var_1_45 = 3821497719;
unsigned long int var_1_46 = 4;
signed long int var_1_47 = 32;
double var_1_48 = 31.25;
unsigned short int var_1_49 = 8;
unsigned short int var_1_50 = 8;
double var_1_51 = 100000000000000.2;
float var_1_52 = 32.35;
float var_1_53 = 0.0;
float var_1_54 = 7.5;
float var_1_56 = 49.6;
unsigned char var_1_57 = 64;
unsigned char var_1_58 = 8;
unsigned long int var_1_59 = 100;
unsigned long int var_1_60 = 1757935473;
unsigned long int var_1_61 = 1233181772;
unsigned char var_1_62 = 1;
unsigned char var_1_63 = 100;
double var_1_64 = 9.8;
double var_1_65 = 5.2;
unsigned char var_1_66 = 1;
unsigned short int var_1_67 = 16;
double var_1_68 = 256.25;
float var_1_69 = 7.875;
unsigned char var_1_70 = 0;
signed long int var_1_71 = 2;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_9 = -16;
unsigned long int last_1_var_1_17 = 256;
signed long int last_1_var_1_23 = -128;
double last_1_var_1_27 = 10.1;
signed long int last_1_var_1_44 = -8;
unsigned long int last_1_var_1_59 = 100;
float last_1_var_1_69 = 7.875;
signed long int last_1_var_1_71 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch145Amount250
	unsigned char stepLocal_7 = var_1_7;
	signed long int stepLocal_6 = last_1_var_1_44 - var_1_7;
	signed long int stepLocal_5 = last_1_var_1_44;
	if (stepLocal_7 >= var_1_11) {
		if (! (var_1_8 <= last_1_var_1_71)) {
			if (64 != stepLocal_6) {
				if (last_1_var_1_59 == stepLocal_5) {
					var_1_17 = var_1_7;
				} else {
					var_1_17 = 1u;
				}
			} else {
				var_1_17 = var_1_11;
			}
		}
	} else {
		var_1_17 = var_1_7;
	}


	// From: Req3Batch145Amount250
	unsigned long int stepLocal_2 = last_1_var_1_17;
	if ((last_1_var_1_69 + last_1_var_1_27) > 10.5f) {
		if (var_1_5 >= stepLocal_2) {
			var_1_12 = (37936 - last_1_var_1_23);
		}
	} else {
		var_1_12 = (((var_1_15 - var_1_8) - var_1_5) - var_1_6);
	}


	// From: Req10Batch145Amount250
	unsigned char stepLocal_9 = var_1_8;
	if ((5 - (var_1_28 - var_1_29)) == stepLocal_9) {
		var_1_27 = (((min (var_1_30 , var_1_31)) + (max (var_1_32 , var_1_33))) - (max ((min (var_1_34 , var_1_35)) , var_1_36)));
	} else {
		var_1_27 = var_1_35;
	}


	// From: Req15Batch145Amount250
	unsigned short int stepLocal_15 = var_1_50;
	if (stepLocal_15 >= var_1_41) {
		var_1_51 = (abs (var_1_33 + var_1_31));
	}


	// From: Req19Batch145Amount250
	if (255.875f != var_1_36) {
		var_1_62 = (8 + (max (var_1_50 , (var_1_63 - var_1_40))));
	}


	// From: Req24Batch145Amount250
	var_1_69 = var_1_32;


	// From: Req25Batch145Amount250
	var_1_70 = var_1_25;


	// From: Req6Batch145Amount250
	signed long int stepLocal_8 = var_1_15 / (var_1_19 + var_1_20);
	if (var_1_62 > stepLocal_8) {
		var_1_18 = (min (5.8f , var_1_21));
	} else {
		var_1_18 = (min (var_1_21 , (abs (var_1_22))));
	}


	// From: Req8Batch145Amount250
	if (var_1_70) {
		var_1_24 = (! var_1_25);
	}


	// From: Req9Batch145Amount250
	if (! var_1_70) {
		var_1_26 = (max (var_1_21 , var_1_22));
	} else {
		var_1_26 = (min (var_1_21 , var_1_22));
	}


	// From: Req17Batch145Amount250
	unsigned long int stepLocal_19 = var_1_45 / (max (var_1_50 , var_1_20));
	signed short int stepLocal_18 = var_1_28;
	if (var_1_8 > stepLocal_19) {
		var_1_57 = (min ((min (var_1_7 , var_1_58)) , var_1_20));
	} else {
		if (! var_1_24) {
			var_1_57 = var_1_50;
		} else {
			if (stepLocal_18 <= ((var_1_58 % var_1_15) * var_1_41)) {
				var_1_57 = (var_1_7 - var_1_8);
			} else {
				var_1_57 = ((var_1_41 + var_1_42) + 5);
			}
		}
	}


	// From: Req20Batch145Amount250
	if ((var_1_7 / var_1_63) == var_1_57) {
		var_1_64 = (var_1_35 - ((var_1_54 + var_1_65) + var_1_53));
	} else {
		var_1_64 = var_1_22;
	}


	// From: Req21Batch145Amount250
	if (var_1_70) {
		var_1_66 = var_1_25;
	} else {
		var_1_66 = 0;
	}


	// From: Req22Batch145Amount250
	if (var_1_70) {
		var_1_67 = var_1_58;
	}


	// From: Req2Batch145Amount250
	unsigned char stepLocal_1 = var_1_70;
	if (stepLocal_1 || var_1_66) {
		var_1_9 = (max ((var_1_67 + last_1_var_1_9) , (var_1_7 + (var_1_5 - var_1_11))));
	} else {
		var_1_9 = (var_1_67 + var_1_7);
	}


	// From: Req18Batch145Amount250
	if (((var_1_33 / var_1_53) * (var_1_35 * var_1_26)) > (abs (var_1_64))) {
		var_1_59 = ((var_1_60 - (var_1_5 + var_1_20)) + (var_1_61 - (abs (var_1_50))));
	}


	// From: Req26Batch145Amount250
	var_1_71 = var_1_9;


	// From: Req12Batch145Amount250
	if ((var_1_45 - var_1_46) <= var_1_5) {
		if (var_1_43 > (-50 / var_1_7)) {
			if (var_1_43 != var_1_17) {
				var_1_44 = (max ((max ((min (var_1_6 , var_1_8)) , var_1_41)) , (var_1_29 + var_1_9)));
			} else {
				var_1_44 = (max (var_1_43 , (var_1_9 - var_1_41)));
			}
		} else {
			var_1_44 = var_1_6;
		}
	} else {
		var_1_44 = ((max ((var_1_47 - var_1_11) , var_1_6)) + var_1_7);
	}


	// From: Req4Batch145Amount250
	signed long int stepLocal_4 = var_1_44;
	unsigned long int stepLocal_3 = var_1_59;
	if (stepLocal_4 > var_1_17) {
		if (stepLocal_3 <= var_1_11) {
			var_1_16 = (min (var_1_57 , ((var_1_6 + var_1_5) - var_1_8)));
		} else {
			var_1_16 = (max ((min (var_1_59 , (var_1_44 + var_1_6))) , var_1_7));
		}
	}


	// From: Req11Batch145Amount250
	unsigned char stepLocal_11 = var_1_44 >= (max (var_1_9 , var_1_44));
	unsigned char stepLocal_10 = var_1_44 > var_1_7;
	if (stepLocal_11 || var_1_70) {
		var_1_37 = (var_1_39 + ((max (var_1_40 , var_1_41)) - var_1_42));
	} else {
		if (var_1_70 && stepLocal_10) {
			var_1_37 = (min (var_1_39 , (max (var_1_42 , var_1_43))));
		}
	}


	// From: Req13Batch145Amount250
	unsigned char stepLocal_14 = var_1_67 > var_1_59;
	unsigned char stepLocal_13 = var_1_70;
	unsigned char stepLocal_12 = var_1_24;
	if ((var_1_59 <= (var_1_15 * 64)) && stepLocal_13) {
		if (stepLocal_12 && var_1_70) {
			var_1_48 = (min ((var_1_31 + var_1_30) , var_1_21));
		} else {
			var_1_48 = (abs (var_1_21));
		}
	} else {
		if (stepLocal_14 && ((min (0.625f , var_1_27)) < var_1_69)) {
			var_1_48 = ((abs (99.8)) - (abs (abs (var_1_34))));
		} else {
			if (! var_1_24) {
				var_1_48 = (15.8 + var_1_31);
			}
		}
	}


	// From: Req14Batch145Amount250
	if ((min (25u , (var_1_59 >> var_1_50))) <= var_1_28) {
		var_1_49 = (var_1_15 - (max (var_1_41 , var_1_7)));
	} else {
		var_1_49 = (min ((32 + (var_1_28 - var_1_40)) , var_1_6));
	}


	// From: Req16Batch145Amount250
	signed long int stepLocal_17 = var_1_44;
	signed long int stepLocal_16 = var_1_71;
	if ((- var_1_32) != (- 3.8)) {
		if (stepLocal_17 < var_1_7) {
			var_1_52 = (var_1_32 + (var_1_33 - (var_1_53 - var_1_54)));
		} else {
			if (var_1_12 >= stepLocal_16) {
				var_1_52 = (max (var_1_35 , var_1_36));
			}
		}
	} else {
		var_1_52 = ((min (9.9f , var_1_31)) + ((min (var_1_54 , 100.5f)) + var_1_56));
	}


	// From: Req23Batch145Amount250
	unsigned long int stepLocal_20 = (min (var_1_60 , var_1_15)) * var_1_71;
	if (var_1_28 > stepLocal_20) {
		var_1_68 = (var_1_30 - var_1_36);
	}


	// From: Req7Batch145Amount250
	if (var_1_24 && ((var_1_20 - var_1_19) < var_1_16)) {
		var_1_23 = (var_1_9 + var_1_16);
	} else {
		var_1_23 = ((abs (var_1_12)) - (2027454982 - var_1_20));
	}


	// From: Req1Batch145Amount250
	unsigned long int stepLocal_0 = var_1_17;
	if (var_1_24) {
		if (var_1_16 == stepLocal_0) {
			var_1_1 = (max (10 , (min (var_1_5 , var_1_6))));
		} else {
			var_1_1 = ((min ((var_1_7 - 25) , 128)) - var_1_8);
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 190);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 57342);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 128);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= 16383);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 16383);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -63);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 63);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -127);
	assume_abort_if_not(var_1_43 <= 126);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 2147483647);
	assume_abort_if_not(var_1_45 <= 4294967295);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 2147483647);
	var_1_47 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 1073741823);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 30);
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 2305843.009213691400e+12F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691400e+12F && var_1_54 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -230584.3009213691400e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691400e+12F && var_1_56 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 254);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 1073741823);
	assume_abort_if_not(var_1_60 <= 2147483647);
	var_1_61 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_61 >= 1073741823);
	assume_abort_if_not(var_1_61 <= 2147483647);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 63);
	assume_abort_if_not(var_1_63 <= 127);
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691400e+12F && var_1_65 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_71 = var_1_71;
}

int property(void) {
	return (((((((((((((((((((((((((var_1_24 ? ((var_1_16 == var_1_17) ? (var_1_1 == ((unsigned char) (max (10 , (min (var_1_5 , var_1_6)))))) : (var_1_1 == ((unsigned char) ((min ((var_1_7 - 25) , 128)) - var_1_8)))) : 1) && ((var_1_70 || var_1_66) ? (var_1_9 == ((signed long int) (max ((var_1_67 + last_1_var_1_9) , (var_1_7 + (var_1_5 - var_1_11)))))) : (var_1_9 == ((signed long int) (var_1_67 + var_1_7))))) && (((last_1_var_1_69 + last_1_var_1_27) > 10.5f) ? ((var_1_5 >= last_1_var_1_17) ? (var_1_12 == ((unsigned short int) (37936 - last_1_var_1_23))) : 1) : (var_1_12 == ((unsigned short int) (((var_1_15 - var_1_8) - var_1_5) - var_1_6))))) && ((var_1_44 > var_1_17) ? ((var_1_59 <= var_1_11) ? (var_1_16 == ((signed short int) (min (var_1_57 , ((var_1_6 + var_1_5) - var_1_8))))) : (var_1_16 == ((signed short int) (max ((min (var_1_59 , (var_1_44 + var_1_6))) , var_1_7))))) : 1)) && ((var_1_7 >= var_1_11) ? ((! (var_1_8 <= last_1_var_1_71)) ? ((64 != (last_1_var_1_44 - var_1_7)) ? ((last_1_var_1_59 == last_1_var_1_44) ? (var_1_17 == ((unsigned long int) var_1_7)) : (var_1_17 == ((unsigned long int) 1u))) : (var_1_17 == ((unsigned long int) var_1_11))) : 1) : (var_1_17 == ((unsigned long int) var_1_7)))) && ((var_1_62 > (var_1_15 / (var_1_19 + var_1_20))) ? (var_1_18 == ((float) (min (5.8f , var_1_21)))) : (var_1_18 == ((float) (min (var_1_21 , (abs (var_1_22)))))))) && ((var_1_24 && ((var_1_20 - var_1_19) < var_1_16)) ? (var_1_23 == ((signed long int) (var_1_9 + var_1_16))) : (var_1_23 == ((signed long int) ((abs (var_1_12)) - (2027454982 - var_1_20)))))) && (var_1_70 ? (var_1_24 == ((unsigned char) (! var_1_25))) : 1)) && ((! var_1_70) ? (var_1_26 == ((double) (max (var_1_21 , var_1_22)))) : (var_1_26 == ((double) (min (var_1_21 , var_1_22)))))) && (((5 - (var_1_28 - var_1_29)) == var_1_8) ? (var_1_27 == ((double) (((min (var_1_30 , var_1_31)) + (max (var_1_32 , var_1_33))) - (max ((min (var_1_34 , var_1_35)) , var_1_36))))) : (var_1_27 == ((double) var_1_35)))) && (((var_1_44 >= (max (var_1_9 , var_1_44))) || var_1_70) ? (var_1_37 == ((signed char) (var_1_39 + ((max (var_1_40 , var_1_41)) - var_1_42)))) : ((var_1_70 && (var_1_44 > var_1_7)) ? (var_1_37 == ((signed char) (min (var_1_39 , (max (var_1_42 , var_1_43)))))) : 1))) && (((var_1_45 - var_1_46) <= var_1_5) ? ((var_1_43 > (-50 / var_1_7)) ? ((var_1_43 != var_1_17) ? (var_1_44 == ((signed long int) (max ((max ((min (var_1_6 , var_1_8)) , var_1_41)) , (var_1_29 + var_1_9))))) : (var_1_44 == ((signed long int) (max (var_1_43 , (var_1_9 - var_1_41)))))) : (var_1_44 == ((signed long int) var_1_6))) : (var_1_44 == ((signed long int) ((max ((var_1_47 - var_1_11) , var_1_6)) + var_1_7))))) && (((var_1_59 <= (var_1_15 * 64)) && var_1_70) ? ((var_1_24 && var_1_70) ? (var_1_48 == ((double) (min ((var_1_31 + var_1_30) , var_1_21)))) : (var_1_48 == ((double) (abs (var_1_21))))) : (((var_1_67 > var_1_59) && ((min (0.625f , var_1_27)) < var_1_69)) ? (var_1_48 == ((double) ((abs (99.8)) - (abs (abs (var_1_34)))))) : ((! var_1_24) ? (var_1_48 == ((double) (15.8 + var_1_31))) : 1)))) && (((min (25u , (var_1_59 >> var_1_50))) <= var_1_28) ? (var_1_49 == ((unsigned short int) (var_1_15 - (max (var_1_41 , var_1_7))))) : (var_1_49 == ((unsigned short int) (min ((32 + (var_1_28 - var_1_40)) , var_1_6)))))) && ((var_1_50 >= var_1_41) ? (var_1_51 == ((double) (abs (var_1_33 + var_1_31)))) : 1)) && (((- var_1_32) != (- 3.8)) ? ((var_1_44 < var_1_7) ? (var_1_52 == ((float) (var_1_32 + (var_1_33 - (var_1_53 - var_1_54))))) : ((var_1_12 >= var_1_71) ? (var_1_52 == ((float) (max (var_1_35 , var_1_36)))) : 1)) : (var_1_52 == ((float) ((min (9.9f , var_1_31)) + ((min (var_1_54 , 100.5f)) + var_1_56)))))) && ((var_1_8 > (var_1_45 / (max (var_1_50 , var_1_20)))) ? (var_1_57 == ((unsigned char) (min ((min (var_1_7 , var_1_58)) , var_1_20)))) : ((! var_1_24) ? (var_1_57 == ((unsigned char) var_1_50)) : ((var_1_28 <= ((var_1_58 % var_1_15) * var_1_41)) ? (var_1_57 == ((unsigned char) (var_1_7 - var_1_8))) : (var_1_57 == ((unsigned char) ((var_1_41 + var_1_42) + 5))))))) && ((((var_1_33 / var_1_53) * (var_1_35 * var_1_26)) > (abs (var_1_64))) ? (var_1_59 == ((unsigned long int) ((var_1_60 - (var_1_5 + var_1_20)) + (var_1_61 - (abs (var_1_50)))))) : 1)) && ((255.875f != var_1_36) ? (var_1_62 == ((unsigned char) (8 + (max (var_1_50 , (var_1_63 - var_1_40)))))) : 1)) && (((var_1_7 / var_1_63) == var_1_57) ? (var_1_64 == ((double) (var_1_35 - ((var_1_54 + var_1_65) + var_1_53)))) : (var_1_64 == ((double) var_1_22)))) && (var_1_70 ? (var_1_66 == ((unsigned char) var_1_25)) : (var_1_66 == ((unsigned char) 0)))) && (var_1_70 ? (var_1_67 == ((unsigned short int) var_1_58)) : 1)) && ((var_1_28 > ((min (var_1_60 , var_1_15)) * var_1_71)) ? (var_1_68 == ((double) (var_1_30 - var_1_36))) : 1)) && (var_1_69 == ((float) var_1_32))) && (var_1_70 == ((unsigned char) var_1_25))) && (var_1_71 == ((signed long int) var_1_9))
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
