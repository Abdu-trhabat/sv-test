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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch134Amount250.c", 13, "reach_error"); }
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
signed long int var_1_1 = 50;
signed long int var_1_3 = 128;
signed long int var_1_5 = -25;
signed long int var_1_7 = 5;
signed long int var_1_8 = 10000;
signed char var_1_9 = -10;
signed char var_1_10 = 100;
signed char var_1_11 = 10;
signed char var_1_12 = 2;
signed char var_1_13 = 16;
float var_1_14 = 100000000000.375;
float var_1_15 = 8.75;
float var_1_16 = 10000000000000.625;
float var_1_17 = 0.6;
double var_1_18 = 8.2;
double var_1_19 = 0.0;
double var_1_20 = 0.0;
double var_1_21 = 255.2;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed long int var_1_24 = -8;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 64;
unsigned char var_1_28 = 4;
unsigned char var_1_29 = 8;
unsigned char var_1_30 = 8;
unsigned char var_1_31 = 2;
unsigned char var_1_32 = 128;
signed char var_1_33 = -8;
signed char var_1_34 = -5;
unsigned long int var_1_35 = 256;
unsigned long int var_1_36 = 1605022849;
unsigned long int var_1_37 = 1225103105;
unsigned short int var_1_38 = 50;
unsigned short int var_1_39 = 19860;
unsigned short int var_1_40 = 26466;
unsigned long int var_1_41 = 16;
unsigned char var_1_42 = 100;
signed short int var_1_43 = -4;
double var_1_44 = 63.9;
double var_1_45 = 0.0;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 0;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
signed long int var_1_55 = -4;
signed long int var_1_56 = 16;
signed short int var_1_57 = 128;
signed char var_1_60 = 64;
signed short int var_1_61 = -1;
signed long int var_1_62 = 0;
signed char var_1_63 = 8;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_35 = 256;
signed long int last_1_var_1_56 = 16;
signed short int last_1_var_1_61 = -1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch134Amount250
	unsigned long int stepLocal_2 = last_1_var_1_35 / (abs (var_1_3));
	signed long int stepLocal_1 = last_1_var_1_61;
	signed long int stepLocal_0 = last_1_var_1_61;
	if (stepLocal_2 >= last_1_var_1_56) {
		var_1_1 = (max (-64 , var_1_5));
	} else {
		if (stepLocal_0 <= ((var_1_5 + var_1_3) + (max (last_1_var_1_56 , last_1_var_1_35)))) {
			var_1_1 = (var_1_7 - var_1_8);
		} else {
			if (last_1_var_1_56 >= stepLocal_1) {
				var_1_1 = (min (last_1_var_1_61 , var_1_5));
			}
		}
	}


	// From: Req12Batch134Amount250
	if ((var_1_37 | var_1_7) >= var_1_32) {
		var_1_38 = (var_1_1 + ((max (var_1_39 , var_1_40)) - (16 + var_1_28)));
	}


	// From: Req22Batch134Amount250
	var_1_61 = var_1_38;


	// From: Req13Batch134Amount250
	if (var_1_13 < last_1_var_1_35) {
		var_1_41 = ((var_1_36 + var_1_37) - var_1_32);
	}


	// From: Req19Batch134Amount250
	unsigned long int stepLocal_9 = var_1_37;
	if (stepLocal_9 < var_1_41) {
		var_1_56 = ((var_1_30 + var_1_13) - var_1_11);
	}


	// From: Req2Batch134Amount250
	var_1_9 = ((max ((var_1_10 - var_1_11) , var_1_12)) - (min (var_1_13 , (abs (-50)))));


	// From: Req4Batch134Amount250
	signed char stepLocal_4 = var_1_12;
	if (stepLocal_4 >= var_1_7) {
		var_1_18 = ((var_1_19 - var_1_17) - (var_1_20 - var_1_16));
	}


	// From: Req5Batch134Amount250
	var_1_21 = var_1_17;


	// From: Req6Batch134Amount250
	if ((var_1_20 - var_1_16) < var_1_19) {
		var_1_22 = (! var_1_23);
	} else {
		var_1_22 = var_1_23;
	}


	// From: Req9Batch134Amount250
	if (var_1_15 >= 1.00000000000625E11f) {
		var_1_31 = var_1_10;
	} else {
		var_1_31 = (var_1_32 - var_1_29);
	}


	// From: Req10Batch134Amount250
	if (((max (var_1_13 , var_1_31)) | var_1_1) > var_1_32) {
		if (var_1_19 >= var_1_17) {
			var_1_33 = (min (-50 , var_1_10));
		} else {
			if (var_1_10 < (min ((var_1_11 + var_1_7) , -2))) {
				var_1_33 = (min (var_1_10 , 32));
			}
		}
	} else {
		if (var_1_18 >= var_1_17) {
			if ((abs (var_1_17)) < var_1_20) {
				var_1_33 = var_1_34;
			} else {
				var_1_33 = (abs (var_1_12));
			}
		} else {
			var_1_33 = (abs (var_1_13));
		}
	}


	// From: Req14Batch134Amount250
	if (16.9 >= (- (max (var_1_17 , -0.375)))) {
		if (! (var_1_23 && var_1_22)) {
			var_1_42 = (min ((max ((var_1_11 + var_1_29) , (var_1_32 - var_1_28))) , var_1_13));
		}
	}


	// From: Req21Batch134Amount250
	var_1_60 = var_1_28;


	// From: Req23Batch134Amount250
	if (var_1_23) {
		var_1_62 = var_1_7;
	} else {
		var_1_62 = var_1_13;
	}


	// From: Req16Batch134Amount250
	signed long int stepLocal_7 = var_1_56;
	if (var_1_41 <= stepLocal_7) {
		var_1_44 = (var_1_17 - ((var_1_45 - 1000.25) - var_1_16));
	} else {
		var_1_44 = (var_1_19 - (min (var_1_16 , var_1_45)));
	}


	// From: Req7Batch134Amount250
	unsigned char stepLocal_5 = var_1_26;
	if (var_1_23) {
		if (var_1_22) {
			if (var_1_25 && stepLocal_5) {
				var_1_24 = (max ((max (var_1_13 , var_1_8)) , ((-1 + var_1_62) + var_1_11)));
			} else {
				var_1_24 = -50;
			}
		} else {
			if ((var_1_20 - var_1_16) <= var_1_44) {
				var_1_24 = var_1_11;
			} else {
				var_1_24 = var_1_5;
			}
		}
	}


	// From: Req18Batch134Amount250
	unsigned char stepLocal_8 = ! var_1_23;
	if (var_1_54) {
		if (var_1_22 || stepLocal_8) {
			var_1_55 = (var_1_24 + var_1_10);
		}
	}


	// From: Req11Batch134Amount250
	if (64.5 > var_1_18) {
		var_1_35 = (min (var_1_11 , var_1_10));
	} else {
		var_1_35 = ((var_1_36 + var_1_37) - var_1_55);
	}


	// From: Req3Batch134Amount250
	unsigned long int stepLocal_3 = (var_1_13 - var_1_10) * var_1_35;
	if (var_1_1 < stepLocal_3) {
		var_1_14 = (var_1_15 + (var_1_16 - var_1_17));
	}


	// From: Req17Batch134Amount250
	if ((var_1_35 >> 4) > var_1_36) {
		if (var_1_22) {
			var_1_46 = (! (! var_1_23));
		}
	} else {
		if ((var_1_15 / var_1_45) > var_1_16) {
			var_1_46 = (var_1_23 || var_1_47);
		} else {
			if (((var_1_35 | var_1_10) * var_1_36) < var_1_24) {
				if (var_1_22) {
					var_1_46 = (((var_1_47 || var_1_23) || var_1_49) || ((! var_1_50) || var_1_51));
				} else {
					if (var_1_61 >= var_1_24) {
						if (var_1_35 <= var_1_40) {
							var_1_46 = (var_1_50 || (! var_1_47));
						}
					} else {
						var_1_46 = ((var_1_51 && var_1_49) || var_1_23);
					}
				}
			} else {
				if (10.5 <= var_1_18) {
					var_1_46 = ((var_1_50 && (var_1_52 && var_1_53)) && (var_1_22 || var_1_54));
				} else {
					if (var_1_20 > (var_1_19 - 127.5)) {
						var_1_46 = (! var_1_53);
					} else {
						var_1_46 = (var_1_23 || var_1_52);
					}
				}
			}
		}
	}


	// From: Req20Batch134Amount250
	signed long int stepLocal_14 = var_1_7;
	signed long int stepLocal_13 = var_1_24 ^ var_1_40;
	signed long int stepLocal_12 = abs (var_1_24);
	signed long int stepLocal_11 = 128 * var_1_10;
	unsigned char stepLocal_10 = (var_1_41 + var_1_24) != var_1_11;
	if (stepLocal_10 || (! var_1_23)) {
		if (var_1_38 > stepLocal_14) {
			var_1_57 = (max (var_1_28 , var_1_56));
		} else {
			if (var_1_46) {
				if ((var_1_5 / 25) <= stepLocal_12) {
					var_1_57 = (-2 + (abs (var_1_56)));
				} else {
					if ((var_1_28 - 32) < stepLocal_13) {
						if (stepLocal_11 >= (var_1_55 / var_1_3)) {
							var_1_57 = (min ((min (var_1_28 , (var_1_56 - var_1_38))) , var_1_10));
						}
					}
				}
			} else {
				var_1_57 = var_1_56;
			}
		}
	}


	// From: Req24Batch134Amount250
	if ((var_1_16 - (var_1_45 - var_1_17)) < (- var_1_20)) {
		if (var_1_1 <= (var_1_28 << var_1_35)) {
			var_1_63 = var_1_28;
		}
	} else {
		var_1_63 = var_1_13;
	}


	// From: Req15Batch134Amount250
	unsigned long int stepLocal_6 = var_1_37;
	if (stepLocal_6 < var_1_35) {
		var_1_43 = (max (var_1_29 , (var_1_57 - var_1_10)));
	}


	// From: Req8Batch134Amount250
	if (var_1_46 && (var_1_21 <= 32.6f)) {
		if (var_1_46) {
			if (! ((var_1_8 / var_1_10) < var_1_43)) {
				if (var_1_15 <= var_1_18) {
					var_1_27 = (var_1_11 + (var_1_28 + var_1_29));
				} else {
					var_1_27 = var_1_11;
				}
			} else {
				var_1_27 = var_1_30;
			}
		} else {
			var_1_27 = var_1_28;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483647);
	assume_abort_if_not(var_1_3 <= 2147483647);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483647);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 62);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 4611686.018427383000e+12F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 4611686.018427383000e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 64);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 127);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -127);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 1073741823);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 1073741824);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 16383);
	assume_abort_if_not(var_1_39 <= 32767);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 16383);
	assume_abort_if_not(var_1_40 <= 32767);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 6917529.027641074000e+12F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 1);
	assume_abort_if_not(var_1_52 <= 1);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_35 = var_1_35;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_61 = var_1_61;
}

int property(void) {
	return (((((((((((((((((((((((((last_1_var_1_35 / (abs (var_1_3))) >= last_1_var_1_56) ? (var_1_1 == ((signed long int) (max (-64 , var_1_5)))) : ((last_1_var_1_61 <= ((var_1_5 + var_1_3) + (max (last_1_var_1_56 , last_1_var_1_35)))) ? (var_1_1 == ((signed long int) (var_1_7 - var_1_8))) : ((last_1_var_1_56 >= last_1_var_1_61) ? (var_1_1 == ((signed long int) (min (last_1_var_1_61 , var_1_5)))) : 1))) && (var_1_9 == ((signed char) ((max ((var_1_10 - var_1_11) , var_1_12)) - (min (var_1_13 , (abs (-50)))))))) && ((var_1_1 < ((var_1_13 - var_1_10) * var_1_35)) ? (var_1_14 == ((float) (var_1_15 + (var_1_16 - var_1_17)))) : 1)) && ((var_1_12 >= var_1_7) ? (var_1_18 == ((double) ((var_1_19 - var_1_17) - (var_1_20 - var_1_16)))) : 1)) && (var_1_21 == ((double) var_1_17))) && (((var_1_20 - var_1_16) < var_1_19) ? (var_1_22 == ((unsigned char) (! var_1_23))) : (var_1_22 == ((unsigned char) var_1_23)))) && (var_1_23 ? (var_1_22 ? ((var_1_25 && var_1_26) ? (var_1_24 == ((signed long int) (max ((max (var_1_13 , var_1_8)) , ((-1 + var_1_62) + var_1_11))))) : (var_1_24 == ((signed long int) -50))) : (((var_1_20 - var_1_16) <= var_1_44) ? (var_1_24 == ((signed long int) var_1_11)) : (var_1_24 == ((signed long int) var_1_5)))) : 1)) && ((var_1_46 && (var_1_21 <= 32.6f)) ? (var_1_46 ? ((! ((var_1_8 / var_1_10) < var_1_43)) ? ((var_1_15 <= var_1_18) ? (var_1_27 == ((unsigned char) (var_1_11 + (var_1_28 + var_1_29)))) : (var_1_27 == ((unsigned char) var_1_11))) : (var_1_27 == ((unsigned char) var_1_30))) : (var_1_27 == ((unsigned char) var_1_28))) : 1)) && ((var_1_15 >= 1.00000000000625E11f) ? (var_1_31 == ((unsigned char) var_1_10)) : (var_1_31 == ((unsigned char) (var_1_32 - var_1_29))))) && ((((max (var_1_13 , var_1_31)) | var_1_1) > var_1_32) ? ((var_1_19 >= var_1_17) ? (var_1_33 == ((signed char) (min (-50 , var_1_10)))) : ((var_1_10 < (min ((var_1_11 + var_1_7) , -2))) ? (var_1_33 == ((signed char) (min (var_1_10 , 32)))) : 1)) : ((var_1_18 >= var_1_17) ? (((abs (var_1_17)) < var_1_20) ? (var_1_33 == ((signed char) var_1_34)) : (var_1_33 == ((signed char) (abs (var_1_12))))) : (var_1_33 == ((signed char) (abs (var_1_13))))))) && ((64.5 > var_1_18) ? (var_1_35 == ((unsigned long int) (min (var_1_11 , var_1_10)))) : (var_1_35 == ((unsigned long int) ((var_1_36 + var_1_37) - var_1_55))))) && (((var_1_37 | var_1_7) >= var_1_32) ? (var_1_38 == ((unsigned short int) (var_1_1 + ((max (var_1_39 , var_1_40)) - (16 + var_1_28))))) : 1)) && ((var_1_13 < last_1_var_1_35) ? (var_1_41 == ((unsigned long int) ((var_1_36 + var_1_37) - var_1_32))) : 1)) && ((16.9 >= (- (max (var_1_17 , -0.375)))) ? ((! (var_1_23 && var_1_22)) ? (var_1_42 == ((unsigned char) (min ((max ((var_1_11 + var_1_29) , (var_1_32 - var_1_28))) , var_1_13)))) : 1) : 1)) && ((var_1_37 < var_1_35) ? (var_1_43 == ((signed short int) (max (var_1_29 , (var_1_57 - var_1_10))))) : 1)) && ((var_1_41 <= var_1_56) ? (var_1_44 == ((double) (var_1_17 - ((var_1_45 - 1000.25) - var_1_16)))) : (var_1_44 == ((double) (var_1_19 - (min (var_1_16 , var_1_45))))))) && (((var_1_35 >> 4) > var_1_36) ? (var_1_22 ? (var_1_46 == ((unsigned char) (! (! var_1_23)))) : 1) : (((var_1_15 / var_1_45) > var_1_16) ? (var_1_46 == ((unsigned char) (var_1_23 || var_1_47))) : ((((var_1_35 | var_1_10) * var_1_36) < var_1_24) ? (var_1_22 ? (var_1_46 == ((unsigned char) (((var_1_47 || var_1_23) || var_1_49) || ((! var_1_50) || var_1_51)))) : ((var_1_61 >= var_1_24) ? ((var_1_35 <= var_1_40) ? (var_1_46 == ((unsigned char) (var_1_50 || (! var_1_47)))) : 1) : (var_1_46 == ((unsigned char) ((var_1_51 && var_1_49) || var_1_23))))) : ((10.5 <= var_1_18) ? (var_1_46 == ((unsigned char) ((var_1_50 && (var_1_52 && var_1_53)) && (var_1_22 || var_1_54)))) : ((var_1_20 > (var_1_19 - 127.5)) ? (var_1_46 == ((unsigned char) (! var_1_53))) : (var_1_46 == ((unsigned char) (var_1_23 || var_1_52))))))))) && (var_1_54 ? ((var_1_22 || (! var_1_23)) ? (var_1_55 == ((signed long int) (var_1_24 + var_1_10))) : 1) : 1)) && ((var_1_37 < var_1_41) ? (var_1_56 == ((signed long int) ((var_1_30 + var_1_13) - var_1_11))) : 1)) && ((((var_1_41 + var_1_24) != var_1_11) || (! var_1_23)) ? ((var_1_38 > var_1_7) ? (var_1_57 == ((signed short int) (max (var_1_28 , var_1_56)))) : (var_1_46 ? (((var_1_5 / 25) <= (abs (var_1_24))) ? (var_1_57 == ((signed short int) (-2 + (abs (var_1_56))))) : (((var_1_28 - 32) < (var_1_24 ^ var_1_40)) ? (((128 * var_1_10) >= (var_1_55 / var_1_3)) ? (var_1_57 == ((signed short int) (min ((min (var_1_28 , (var_1_56 - var_1_38))) , var_1_10)))) : 1) : 1)) : (var_1_57 == ((signed short int) var_1_56)))) : 1)) && (var_1_60 == ((signed char) var_1_28))) && (var_1_61 == ((signed short int) var_1_38))) && (var_1_23 ? (var_1_62 == ((signed long int) var_1_7)) : (var_1_62 == ((signed long int) var_1_13)))) && (((var_1_16 - (var_1_45 - var_1_17)) < (- var_1_20)) ? ((var_1_1 <= (var_1_28 << var_1_35)) ? (var_1_63 == ((signed char) var_1_28)) : 1) : (var_1_63 == ((signed char) var_1_13)))
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
