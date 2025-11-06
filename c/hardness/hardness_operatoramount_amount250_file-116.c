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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch116Amount250.c", 13, "reach_error"); }
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
signed long int var_1_1 = 16;
signed char var_1_3 = 100;
signed long int var_1_5 = 128;
signed long int var_1_6 = -64;
unsigned short int var_1_7 = 100;
unsigned short int var_1_8 = 8;
unsigned short int var_1_9 = 100;
unsigned short int var_1_10 = 0;
unsigned short int var_1_11 = 0;
double var_1_12 = 127.125;
double var_1_14 = 128.7;
double var_1_15 = 7.6;
double var_1_16 = 0.0;
double var_1_17 = 0.64;
double var_1_18 = -0.5;
float var_1_19 = 255.6;
double var_1_20 = 255.2;
signed short int var_1_21 = 64;
signed long int var_1_22 = -4;
signed short int var_1_23 = 4;
signed short int var_1_24 = 64;
signed short int var_1_25 = 32;
unsigned char var_1_26 = 1;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
double var_1_30 = 1.6;
double var_1_31 = 10.2;
double var_1_32 = 16.6;
signed short int var_1_33 = -256;
unsigned char var_1_34 = 25;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 200;
float var_1_37 = -0.25;
float var_1_38 = 3.6;
signed long int var_1_40 = 4;
double var_1_41 = 0.0;
signed long int var_1_42 = 25;
signed long int var_1_43 = 5;
double var_1_44 = 0.0;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 0;
float var_1_48 = 10.6;
unsigned short int var_1_49 = 128;
signed long int var_1_50 = -5;
signed long int var_1_51 = 4;
unsigned long int var_1_52 = 256;
unsigned long int var_1_54 = 4170006853;
signed char var_1_55 = 0;
signed char var_1_56 = -4;
signed char var_1_57 = -5;
signed char var_1_58 = 64;
signed char var_1_59 = 4;
signed char var_1_60 = 100;
signed char var_1_61 = 8;
double var_1_62 = 99.2;
signed long int var_1_63 = 1;
unsigned char var_1_64 = 0;
unsigned short int var_1_65 = 48200;
unsigned char var_1_67 = 1;
unsigned short int var_1_68 = 8;
unsigned char var_1_69 = 0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 16;
unsigned char last_1_var_1_26 = 1;
float last_1_var_1_37 = -0.25;
unsigned char last_1_var_1_45 = 1;
signed long int last_1_var_1_50 = -5;
unsigned long int last_1_var_1_52 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req18Batch116Amount250
	signed long int stepLocal_13 = last_1_var_1_50;
	if (var_1_24 == stepLocal_13) {
		if (last_1_var_1_26) {
			var_1_52 = (var_1_54 - var_1_42);
		} else {
			var_1_52 = ((var_1_35 + last_1_var_1_52) + last_1_var_1_1);
		}
	}


	// From: Req12Batch116Amount250
	if (var_1_32 > last_1_var_1_37) {
		if (last_1_var_1_37 >= (max (var_1_18 , var_1_14))) {
			var_1_40 = (var_1_36 - var_1_10);
		}
	}


	// From: Req1Batch116Amount250
	if (last_1_var_1_45 || ((abs (var_1_3)) <= last_1_var_1_1)) {
		var_1_1 = (min (var_1_3 , var_1_5));
	} else {
		var_1_1 = (var_1_3 + var_1_6);
	}


	// From: Req2Batch116Amount250
	var_1_7 = ((max (var_1_8 , var_1_9)) + (min (var_1_10 , var_1_11)));


	// From: Req4Batch116Amount250
	if (var_1_1 >= var_1_9) {
		var_1_19 = (var_1_15 - var_1_16);
	} else {
		if (var_1_15 < (var_1_16 - (min (var_1_17 , var_1_20)))) {
			var_1_19 = var_1_18;
		} else {
			var_1_19 = var_1_17;
		}
	}


	// From: Req8Batch116Amount250
	if (var_1_29) {
		var_1_33 = (abs (var_1_24));
	}


	// From: Req9Batch116Amount250
	if (var_1_29) {
		var_1_34 = (max (var_1_35 , var_1_36));
	}


	// From: Req16Batch116Amount250
	var_1_49 = (min (var_1_10 , var_1_36));


	// From: Req23Batch116Amount250
	if (var_1_29) {
		var_1_67 = var_1_47;
	} else {
		var_1_67 = var_1_28;
	}


	// From: Req24Batch116Amount250
	if (var_1_28) {
		var_1_68 = var_1_35;
	} else {
		var_1_68 = var_1_9;
	}


	// From: Req17Batch116Amount250
	if (! (var_1_43 <= var_1_40)) {
		var_1_50 = var_1_10;
	} else {
		if (var_1_5 > ((var_1_1 / var_1_22) + (var_1_9 & var_1_40))) {
			var_1_50 = (var_1_10 + var_1_9);
		} else {
			var_1_50 = (var_1_51 - var_1_52);
		}
	}


	// From: Req13Batch116Amount250
	signed long int stepLocal_10 = var_1_40;
	if (! (var_1_34 <= var_1_40)) {
		if (stepLocal_10 > ((var_1_49 % var_1_22) / (abs (var_1_43)))) {
			var_1_41 = (var_1_15 - (min (var_1_16 , var_1_17)));
		} else {
			var_1_41 = ((var_1_16 - (var_1_44 - var_1_17)) + 1.75);
		}
	}


	// From: Req3Batch116Amount250
	signed long int stepLocal_1 = var_1_50 + var_1_3;
	signed long int stepLocal_0 = (var_1_9 + var_1_6) * var_1_1;
	if (var_1_50 >= stepLocal_0) {
		var_1_12 = (var_1_14 + (var_1_15 - (var_1_16 - var_1_17)));
	} else {
		if ((var_1_1 + var_1_52) > stepLocal_1) {
			var_1_12 = (min (((var_1_17 - var_1_16) + var_1_15) , (max (var_1_14 , var_1_18))));
		}
	}


	// From: Req5Batch116Amount250
	signed long int stepLocal_2 = 32 - 256;
	if (((var_1_11 - var_1_68) / var_1_22) <= stepLocal_2) {
		var_1_21 = (min ((max (var_1_3 , var_1_23)) , ((var_1_24 + var_1_25) - (abs (2)))));
	}


	// From: Req25Batch116Amount250
	signed long int stepLocal_20 = - (- var_1_7);
	if (var_1_50 < stepLocal_20) {
		var_1_69 = (((256u / var_1_54) < var_1_40) && var_1_29);
	} else {
		var_1_69 = var_1_29;
	}


	// From: Req22Batch116Amount250
	signed long int stepLocal_19 = - (var_1_65 - var_1_25);
	unsigned char stepLocal_18 = var_1_5 >= (var_1_24 - var_1_7);
	unsigned short int stepLocal_17 = var_1_7;
	signed long int stepLocal_16 = var_1_1 ^ var_1_58;
	if (stepLocal_17 >= var_1_60) {
		var_1_64 = (var_1_29 || var_1_28);
	} else {
		if (stepLocal_19 >= -64) {
			var_1_64 = (((abs (var_1_41)) > var_1_44) && var_1_28);
		} else {
			if (stepLocal_16 >= var_1_52) {
				var_1_64 = (! var_1_47);
			} else {
				if ((var_1_56 != var_1_8) || stepLocal_18) {
					var_1_64 = (! (! var_1_29));
				} else {
					var_1_64 = var_1_47;
				}
			}
		}
	}


	// From: Req21Batch116Amount250
	unsigned short int stepLocal_15 = var_1_49;
	unsigned char stepLocal_14 = var_1_64;
	if ((var_1_51 < var_1_61) || stepLocal_14) {
		if (stepLocal_15 <= var_1_59) {
			var_1_63 = (var_1_57 + var_1_21);
		}
	}


	// From: Req6Batch116Amount250
	signed long int stepLocal_4 = max (var_1_5 , var_1_22);
	signed long int stepLocal_3 = var_1_49 / var_1_22;
	if (var_1_67) {
		if ((8 * (64 + 1)) >= stepLocal_4) {
			var_1_26 = (var_1_64 || (! var_1_28));
		} else {
			if (stepLocal_3 <= var_1_49) {
				var_1_26 = var_1_28;
			} else {
				var_1_26 = var_1_29;
			}
		}
	} else {
		var_1_26 = var_1_29;
	}


	// From: Req14Batch116Amount250
	signed long int stepLocal_11 = var_1_50 / var_1_22;
	if (var_1_67) {
		var_1_45 = ((var_1_26 && (! var_1_46)) || (! var_1_47));
	} else {
		if (var_1_46) {
			if (stepLocal_11 >= (var_1_11 / 10)) {
				var_1_45 = (var_1_29 || var_1_28);
			} else {
				var_1_45 = var_1_29;
			}
		}
	}


	// From: Req10Batch116Amount250
	signed long int stepLocal_8 = var_1_40;
	if (var_1_45) {
		if (stepLocal_8 >= (var_1_7 ^ var_1_50)) {
			var_1_37 = (var_1_16 - (abs (var_1_15)));
		} else {
			var_1_37 = var_1_15;
		}
	} else {
		var_1_37 = (min (var_1_17 , var_1_18));
	}


	// From: Req7Batch116Amount250
	unsigned char stepLocal_7 = (min (var_1_68 , 0)) < var_1_22;
	signed char stepLocal_6 = var_1_3;
	unsigned short int stepLocal_5 = var_1_8;
	if (stepLocal_6 != var_1_11) {
		var_1_30 = var_1_14;
	} else {
		if (var_1_45 && stepLocal_7) {
			if (stepLocal_5 >= var_1_50) {
				var_1_30 = (abs (min ((var_1_17 - var_1_16) , 32.4)));
			}
		} else {
			var_1_30 = ((var_1_17 + 63.75) + (var_1_31 + var_1_32));
		}
	}


	// From: Req11Batch116Amount250
	signed long int stepLocal_9 = (var_1_7 - var_1_50) * (var_1_11 << var_1_7);
	if ((min (var_1_50 , (min (var_1_9 , var_1_63)))) <= stepLocal_9) {
		var_1_38 = (var_1_17 - (var_1_15 + var_1_16));
	} else {
		var_1_38 = var_1_14;
	}


	// From: Req15Batch116Amount250
	signed short int stepLocal_12 = var_1_24;
	if (var_1_16 > ((var_1_30 + 64.4) / var_1_44)) {
		if (var_1_46) {
			if (var_1_69) {
				if ((var_1_50 + var_1_7) >= stepLocal_12) {
					var_1_48 = 24.25f;
				} else {
					var_1_48 = (max (var_1_32 , (var_1_44 + var_1_14)));
				}
			} else {
				var_1_48 = var_1_14;
			}
		}
	}


	// From: Req19Batch116Amount250
	if (var_1_28) {
		var_1_55 = (var_1_56 + var_1_57);
	} else {
		if (var_1_37 >= var_1_44) {
			var_1_55 = ((min ((var_1_58 - var_1_59) , var_1_60)) - var_1_61);
		} else {
			if (var_1_29 || (-128 < (var_1_21 & -2))) {
				var_1_55 = (var_1_59 - var_1_58);
			} else {
				var_1_55 = var_1_57;
			}
		}
	}


	// From: Req20Batch116Amount250
	if (var_1_30 <= 9999.5) {
		var_1_62 = ((128.2 + var_1_17) + var_1_15);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -127);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483647);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -1073741823);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 2305843.009213691400e+12F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= -2147483648);
	assume_abort_if_not(var_1_22 <= 2147483647);
	assume_abort_if_not(var_1_22 != 0);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -32767);
	assume_abort_if_not(var_1_23 <= 32766);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 16383);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 16383);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -230584.3009213691400e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -230584.3009213691400e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691400e+12F && var_1_32 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 2147483647);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -2147483647);
	assume_abort_if_not(var_1_43 <= 2147483647);
	assume_abort_if_not(var_1_43 != 0);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 2305843.009213691400e+12F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_51 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_51 >= -1);
	assume_abort_if_not(var_1_51 <= 2147483646);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 2147483647);
	assume_abort_if_not(var_1_54 <= 4294967294);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= -63);
	assume_abort_if_not(var_1_56 <= 63);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= -63);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 62);
	assume_abort_if_not(var_1_58 <= 126);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 63);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= -1);
	assume_abort_if_not(var_1_60 <= 126);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 126);
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 32767);
	assume_abort_if_not(var_1_65 <= 65535);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_52 = var_1_52;
}

int property(void) {
	return (((((((((((((((((((((((((last_1_var_1_45 || ((abs (var_1_3)) <= last_1_var_1_1)) ? (var_1_1 == ((signed long int) (min (var_1_3 , var_1_5)))) : (var_1_1 == ((signed long int) (var_1_3 + var_1_6)))) && (var_1_7 == ((unsigned short int) ((max (var_1_8 , var_1_9)) + (min (var_1_10 , var_1_11)))))) && ((var_1_50 >= ((var_1_9 + var_1_6) * var_1_1)) ? (var_1_12 == ((double) (var_1_14 + (var_1_15 - (var_1_16 - var_1_17))))) : (((var_1_1 + var_1_52) > (var_1_50 + var_1_3)) ? (var_1_12 == ((double) (min (((var_1_17 - var_1_16) + var_1_15) , (max (var_1_14 , var_1_18)))))) : 1))) && ((var_1_1 >= var_1_9) ? (var_1_19 == ((float) (var_1_15 - var_1_16))) : ((var_1_15 < (var_1_16 - (min (var_1_17 , var_1_20)))) ? (var_1_19 == ((float) var_1_18)) : (var_1_19 == ((float) var_1_17))))) && ((((var_1_11 - var_1_68) / var_1_22) <= (32 - 256)) ? (var_1_21 == ((signed short int) (min ((max (var_1_3 , var_1_23)) , ((var_1_24 + var_1_25) - (abs (2))))))) : 1)) && (var_1_67 ? (((8 * (64 + 1)) >= (max (var_1_5 , var_1_22))) ? (var_1_26 == ((unsigned char) (var_1_64 || (! var_1_28)))) : (((var_1_49 / var_1_22) <= var_1_49) ? (var_1_26 == ((unsigned char) var_1_28)) : (var_1_26 == ((unsigned char) var_1_29)))) : (var_1_26 == ((unsigned char) var_1_29)))) && ((var_1_3 != var_1_11) ? (var_1_30 == ((double) var_1_14)) : ((var_1_45 && ((min (var_1_68 , 0)) < var_1_22)) ? ((var_1_8 >= var_1_50) ? (var_1_30 == ((double) (abs (min ((var_1_17 - var_1_16) , 32.4))))) : 1) : (var_1_30 == ((double) ((var_1_17 + 63.75) + (var_1_31 + var_1_32))))))) && (var_1_29 ? (var_1_33 == ((signed short int) (abs (var_1_24)))) : 1)) && (var_1_29 ? (var_1_34 == ((unsigned char) (max (var_1_35 , var_1_36)))) : 1)) && (var_1_45 ? ((var_1_40 >= (var_1_7 ^ var_1_50)) ? (var_1_37 == ((float) (var_1_16 - (abs (var_1_15))))) : (var_1_37 == ((float) var_1_15))) : (var_1_37 == ((float) (min (var_1_17 , var_1_18)))))) && (((min (var_1_50 , (min (var_1_9 , var_1_63)))) <= ((var_1_7 - var_1_50) * (var_1_11 << var_1_7))) ? (var_1_38 == ((float) (var_1_17 - (var_1_15 + var_1_16)))) : (var_1_38 == ((float) var_1_14)))) && ((var_1_32 > last_1_var_1_37) ? ((last_1_var_1_37 >= (max (var_1_18 , var_1_14))) ? (var_1_40 == ((signed long int) (var_1_36 - var_1_10))) : 1) : 1)) && ((! (var_1_34 <= var_1_40)) ? ((var_1_40 > ((var_1_49 % var_1_22) / (abs (var_1_43)))) ? (var_1_41 == ((double) (var_1_15 - (min (var_1_16 , var_1_17))))) : (var_1_41 == ((double) ((var_1_16 - (var_1_44 - var_1_17)) + 1.75)))) : 1)) && (var_1_67 ? (var_1_45 == ((unsigned char) ((var_1_26 && (! var_1_46)) || (! var_1_47)))) : (var_1_46 ? (((var_1_50 / var_1_22) >= (var_1_11 / 10)) ? (var_1_45 == ((unsigned char) (var_1_29 || var_1_28))) : (var_1_45 == ((unsigned char) var_1_29))) : 1))) && ((var_1_16 > ((var_1_30 + 64.4) / var_1_44)) ? (var_1_46 ? (var_1_69 ? (((var_1_50 + var_1_7) >= var_1_24) ? (var_1_48 == ((float) 24.25f)) : (var_1_48 == ((float) (max (var_1_32 , (var_1_44 + var_1_14)))))) : (var_1_48 == ((float) var_1_14))) : 1) : 1)) && (var_1_49 == ((unsigned short int) (min (var_1_10 , var_1_36))))) && ((! (var_1_43 <= var_1_40)) ? (var_1_50 == ((signed long int) var_1_10)) : ((var_1_5 > ((var_1_1 / var_1_22) + (var_1_9 & var_1_40))) ? (var_1_50 == ((signed long int) (var_1_10 + var_1_9))) : (var_1_50 == ((signed long int) (var_1_51 - var_1_52)))))) && ((var_1_24 == last_1_var_1_50) ? (last_1_var_1_26 ? (var_1_52 == ((unsigned long int) (var_1_54 - var_1_42))) : (var_1_52 == ((unsigned long int) ((var_1_35 + last_1_var_1_52) + last_1_var_1_1)))) : 1)) && (var_1_28 ? (var_1_55 == ((signed char) (var_1_56 + var_1_57))) : ((var_1_37 >= var_1_44) ? (var_1_55 == ((signed char) ((min ((var_1_58 - var_1_59) , var_1_60)) - var_1_61))) : ((var_1_29 || (-128 < (var_1_21 & -2))) ? (var_1_55 == ((signed char) (var_1_59 - var_1_58))) : (var_1_55 == ((signed char) var_1_57)))))) && ((var_1_30 <= 9999.5) ? (var_1_62 == ((double) ((128.2 + var_1_17) + var_1_15))) : 1)) && (((var_1_51 < var_1_61) || var_1_64) ? ((var_1_49 <= var_1_59) ? (var_1_63 == ((signed long int) (var_1_57 + var_1_21))) : 1) : 1)) && ((var_1_7 >= var_1_60) ? (var_1_64 == ((unsigned char) (var_1_29 || var_1_28))) : (((- (var_1_65 - var_1_25)) >= -64) ? (var_1_64 == ((unsigned char) (((abs (var_1_41)) > var_1_44) && var_1_28))) : (((var_1_1 ^ var_1_58) >= var_1_52) ? (var_1_64 == ((unsigned char) (! var_1_47))) : (((var_1_56 != var_1_8) || (var_1_5 >= (var_1_24 - var_1_7))) ? (var_1_64 == ((unsigned char) (! (! var_1_29)))) : (var_1_64 == ((unsigned char) var_1_47))))))) && (var_1_29 ? (var_1_67 == ((unsigned char) var_1_47)) : (var_1_67 == ((unsigned char) var_1_28)))) && (var_1_28 ? (var_1_68 == ((unsigned short int) var_1_35)) : (var_1_68 == ((unsigned short int) var_1_9)))) && ((var_1_50 < (- (- var_1_7))) ? (var_1_69 == ((unsigned char) (((256u / var_1_54) < var_1_40) && var_1_29))) : (var_1_69 == ((unsigned char) var_1_29)))
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
