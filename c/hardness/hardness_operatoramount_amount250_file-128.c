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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch128Amount250.c", 13, "reach_error"); }
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
signed char var_1_1 = -16;
unsigned short int var_1_2 = 2;
unsigned short int var_1_3 = 16;
unsigned short int var_1_4 = 2;
signed long int var_1_5 = -100;
double var_1_6 = 256.5;
double var_1_7 = 10000.4;
signed char var_1_9 = 2;
signed char var_1_10 = 64;
signed char var_1_11 = 8;
signed char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed short int var_1_14 = 2;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
signed short int var_1_19 = 4;
unsigned char var_1_20 = 5;
unsigned short int var_1_22 = 4;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 0;
unsigned short int var_1_25 = 5;
unsigned char var_1_26 = 32;
signed long int var_1_28 = -1;
signed long int var_1_29 = -2;
signed short int var_1_30 = 32;
double var_1_31 = 4.5;
signed long int var_1_32 = -5;
signed long int var_1_33 = -16;
double var_1_34 = 9.5;
double var_1_35 = 256.3;
double var_1_36 = 7.5;
unsigned char var_1_37 = 0;
unsigned short int var_1_38 = 36963;
double var_1_40 = 256.6;
double var_1_41 = 64.75;
double var_1_42 = 50.8;
double var_1_43 = 3.1;
double var_1_44 = 64.025;
signed long int var_1_45 = -8;
float var_1_46 = -0.8;
signed long int var_1_47 = 8;
unsigned char var_1_48 = 8;
unsigned char var_1_49 = 200;
signed short int var_1_50 = 5;
signed short int var_1_51 = 32436;
unsigned char var_1_52 = 10;
signed char var_1_53 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_23 = 1;
signed long int last_1_var_1_28 = -1;
double last_1_var_1_34 = 9.5;
signed long int last_1_var_1_45 = -8;
signed long int last_1_var_1_47 = 8;
signed short int last_1_var_1_50 = 5;
unsigned char last_1_var_1_52 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch128Amount250
	unsigned short int stepLocal_18 = var_1_3;
	signed long int stepLocal_17 = abs (last_1_var_1_50);
	if (stepLocal_17 == var_1_12) {
		if (stepLocal_18 >= last_1_var_1_45) {
			var_1_34 = var_1_7;
		} else {
			var_1_34 = (min (var_1_7 , (max ((abs (var_1_35)) , var_1_36))));
		}
	} else {
		var_1_34 = (min (var_1_36 , var_1_7));
	}


	// From: Req15Batch128Amount250
	unsigned char stepLocal_22 = last_1_var_1_23;
	if (var_1_24 || stepLocal_22) {
		var_1_47 = ((min ((var_1_25 + last_1_var_1_52) , var_1_29)) + (last_1_var_1_28 - last_1_var_1_50));
	}


	// From: Req13Batch128Amount250
	signed long int stepLocal_21 = last_1_var_1_47 - var_1_22;
	if (! ((var_1_9 - var_1_12) >= (max (16 , last_1_var_1_28)))) {
		if ((var_1_42 * var_1_44) >= last_1_var_1_34) {
			var_1_45 = (var_1_38 - var_1_25);
		} else {
			if (4 < stepLocal_21) {
				var_1_45 = (-64 + var_1_9);
			} else {
				var_1_45 = (abs (var_1_14));
			}
		}
	}


	// From: Req2Batch128Amount250
	signed long int stepLocal_3 = max ((var_1_10 - var_1_12) , (var_1_11 - var_1_14));
	signed char stepLocal_2 = var_1_9;
	unsigned short int stepLocal_1 = var_1_4;
	if (stepLocal_3 > (var_1_9 / var_1_3)) {
		if (stepLocal_2 < var_1_3) {
			var_1_13 = (! (var_1_15 && var_1_16));
		} else {
			if (var_1_2 < stepLocal_1) {
				var_1_13 = ((var_1_2 <= var_1_5) && (var_1_17 || var_1_18));
			} else {
				var_1_13 = (! var_1_18);
			}
		}
	}


	// From: Req7Batch128Amount250
	var_1_28 = (last_1_var_1_28 + (min (-4 , var_1_29)));


	// From: Req12Batch128Amount250
	if (var_1_6 < (- var_1_31)) {
		var_1_40 = (max (((max (var_1_41 , var_1_42)) + (var_1_43 - var_1_44)) , var_1_35));
	}


	// From: Req14Batch128Amount250
	if (var_1_41 < (max ((- var_1_42) , var_1_6))) {
		if (var_1_13) {
			var_1_46 = var_1_41;
		} else {
			var_1_46 = (var_1_41 + var_1_43);
		}
	} else {
		var_1_46 = (var_1_43 - (5.864222176153191E18f - var_1_44));
	}


	// From: Req16Batch128Amount250
	if (var_1_24) {
		var_1_48 = (min ((max ((var_1_49 - var_1_25) , (var_1_22 + var_1_12))) , 100));
	}


	// From: Req18Batch128Amount250
	signed long int stepLocal_25 = 43401 - var_1_10;
	if (stepLocal_25 < var_1_51) {
		var_1_52 = (var_1_49 - (var_1_25 + (var_1_22 + var_1_12)));
	}


	// From: Req19Batch128Amount250
	var_1_53 = var_1_25;


	// From: Req17Batch128Amount250
	signed char stepLocal_24 = var_1_53;
	signed long int stepLocal_23 = var_1_45;
	if (var_1_25 > stepLocal_23) {
		var_1_50 = (min (var_1_12 , ((var_1_28 - var_1_11) + (-1 + var_1_49))));
	} else {
		if (stepLocal_24 >= (var_1_28 / (min (var_1_3 , var_1_25)))) {
			if (var_1_34 >= (1.2f + 16.3f)) {
				if (var_1_17) {
					var_1_50 = (var_1_28 - var_1_49);
				}
			} else {
				var_1_50 = (max (((var_1_51 - var_1_28) - var_1_22) , -1));
			}
		}
	}


	// From: Req8Batch128Amount250
	signed short int stepLocal_15 = var_1_14;
	if ((var_1_7 / var_1_31) == (- var_1_40)) {
		var_1_30 = -64;
	} else {
		if (stepLocal_15 >= var_1_47) {
			var_1_30 = (8 - var_1_10);
		} else {
			var_1_30 = -128;
		}
	}


	// From: Req9Batch128Amount250
	unsigned char stepLocal_16 = var_1_45 >= (~ var_1_47);
	if ((var_1_29 < (var_1_47 | var_1_22)) && stepLocal_16) {
		if (var_1_24) {
			var_1_32 = var_1_50;
		} else {
			var_1_32 = (abs (var_1_33));
		}
	}


	// From: Req3Batch128Amount250
	if ((var_1_12 * var_1_45) <= var_1_32) {
		var_1_19 = var_1_11;
	} else {
		if (var_1_45 < (var_1_45 + (var_1_14 / 64))) {
			var_1_19 = (abs (abs (var_1_10)));
		} else {
			var_1_19 = (abs (var_1_11));
		}
	}


	// From: Req1Batch128Amount250
	signed long int stepLocal_0 = var_1_28;
	if (((var_1_47 / var_1_3) * var_1_32) >= stepLocal_0) {
		if ((var_1_6 - (var_1_7 + 49.5)) > var_1_40) {
			var_1_1 = (var_1_9 - (var_1_10 - (var_1_11 + var_1_12)));
		} else {
			if (var_1_40 <= var_1_6) {
				var_1_1 = 16;
			} else {
				var_1_1 = (max ((32 + var_1_12) , var_1_10));
			}
		}
	} else {
		var_1_1 = var_1_11;
	}


	// From: Req4Batch128Amount250
	signed long int stepLocal_7 = min ((var_1_3 & var_1_1) , (var_1_45 + var_1_30));
	signed char stepLocal_6 = var_1_10;
	signed long int stepLocal_5 = - var_1_45;
	unsigned char stepLocal_4 = var_1_17;
	if (var_1_12 < stepLocal_7) {
		if (var_1_45 > stepLocal_5) {
			var_1_20 = (abs ((5 + var_1_12) + var_1_11));
		} else {
			var_1_20 = var_1_10;
		}
	} else {
		if ((var_1_45 >> var_1_22) >= stepLocal_6) {
			if (var_1_16 || stepLocal_4) {
				var_1_20 = var_1_10;
			}
		} else {
			var_1_20 = var_1_11;
		}
	}


	// From: Req11Batch128Amount250
	signed long int stepLocal_20 = var_1_45;
	signed long int stepLocal_19 = var_1_38 - var_1_10;
	if ((var_1_46 * var_1_6) >= var_1_35) {
		if (stepLocal_19 > var_1_14) {
			var_1_37 = var_1_16;
		} else {
			if (var_1_13) {
				var_1_37 = (var_1_24 || var_1_18);
			} else {
				var_1_37 = ((! var_1_16) || var_1_24);
			}
		}
	} else {
		if ((min ((var_1_10 * var_1_20) , var_1_12)) == stepLocal_20) {
			if ((var_1_46 / var_1_31) < var_1_7) {
				var_1_37 = (var_1_18 || var_1_24);
			}
		} else {
			var_1_37 = ((! (var_1_34 > var_1_35)) || var_1_15);
		}
	}


	// From: Req6Batch128Amount250
	unsigned char stepLocal_14 = var_1_12 < (max (var_1_45 , var_1_50));
	unsigned short int stepLocal_13 = var_1_25;
	signed long int stepLocal_12 = var_1_47;
	if (var_1_6 >= var_1_34) {
		if (var_1_37 && stepLocal_14) {
			var_1_26 = (128 - var_1_25);
		} else {
			if (var_1_15) {
				if (var_1_12 <= stepLocal_12) {
					var_1_26 = var_1_25;
				} else {
					var_1_26 = (min (50 , (var_1_22 + var_1_10)));
				}
			}
		}
	} else {
		if (stepLocal_13 > var_1_45) {
			var_1_26 = var_1_11;
		} else {
			var_1_26 = var_1_25;
		}
	}


	// From: Req5Batch128Amount250
	signed char stepLocal_11 = var_1_11;
	signed long int stepLocal_10 = var_1_47;
	unsigned char stepLocal_9 = var_1_16;
	unsigned char stepLocal_8 = var_1_24;
	if (0 < stepLocal_10) {
		if ((var_1_12 - (64 - var_1_22)) >= stepLocal_11) {
			var_1_23 = (var_1_15 && (! var_1_24));
		} else {
			if (((var_1_30 >> var_1_25) >= var_1_28) && stepLocal_9) {
				if (var_1_17) {
					if (stepLocal_8 || (var_1_37 && var_1_18)) {
						var_1_23 = var_1_15;
					} else {
						var_1_23 = var_1_16;
					}
				}
			} else {
				var_1_23 = var_1_18;
			}
		}
	} else {
		var_1_23 = var_1_24;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65535);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427388000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 63);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 31);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 30);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 6);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -1073741823);
	assume_abort_if_not(var_1_29 <= 1073741823);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	assume_abort_if_not(var_1_31 != 0.0F);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483646);
	assume_abort_if_not(var_1_33 <= 2147483646);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 32767);
	assume_abort_if_not(var_1_38 <= 65535);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 127);
	assume_abort_if_not(var_1_49 <= 254);
	var_1_51 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_51 >= 16382);
	assume_abort_if_not(var_1_51 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_23 = var_1_23;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_52 = var_1_52;
}

int property(void) {
	return (((((((((((((((((((((var_1_47 / var_1_3) * var_1_32) >= var_1_28) ? (((var_1_6 - (var_1_7 + 49.5)) > var_1_40) ? (var_1_1 == ((signed char) (var_1_9 - (var_1_10 - (var_1_11 + var_1_12))))) : ((var_1_40 <= var_1_6) ? (var_1_1 == ((signed char) 16)) : (var_1_1 == ((signed char) (max ((32 + var_1_12) , var_1_10)))))) : (var_1_1 == ((signed char) var_1_11))) && (((max ((var_1_10 - var_1_12) , (var_1_11 - var_1_14))) > (var_1_9 / var_1_3)) ? ((var_1_9 < var_1_3) ? (var_1_13 == ((unsigned char) (! (var_1_15 && var_1_16)))) : ((var_1_2 < var_1_4) ? (var_1_13 == ((unsigned char) ((var_1_2 <= var_1_5) && (var_1_17 || var_1_18)))) : (var_1_13 == ((unsigned char) (! var_1_18))))) : 1)) && (((var_1_12 * var_1_45) <= var_1_32) ? (var_1_19 == ((signed short int) var_1_11)) : ((var_1_45 < (var_1_45 + (var_1_14 / 64))) ? (var_1_19 == ((signed short int) (abs (abs (var_1_10))))) : (var_1_19 == ((signed short int) (abs (var_1_11))))))) && ((var_1_12 < (min ((var_1_3 & var_1_1) , (var_1_45 + var_1_30)))) ? ((var_1_45 > (- var_1_45)) ? (var_1_20 == ((unsigned char) (abs ((5 + var_1_12) + var_1_11)))) : (var_1_20 == ((unsigned char) var_1_10))) : (((var_1_45 >> var_1_22) >= var_1_10) ? ((var_1_16 || var_1_17) ? (var_1_20 == ((unsigned char) var_1_10)) : 1) : (var_1_20 == ((unsigned char) var_1_11))))) && ((0 < var_1_47) ? (((var_1_12 - (64 - var_1_22)) >= var_1_11) ? (var_1_23 == ((unsigned char) (var_1_15 && (! var_1_24)))) : ((((var_1_30 >> var_1_25) >= var_1_28) && var_1_16) ? (var_1_17 ? ((var_1_24 || (var_1_37 && var_1_18)) ? (var_1_23 == ((unsigned char) var_1_15)) : (var_1_23 == ((unsigned char) var_1_16))) : 1) : (var_1_23 == ((unsigned char) var_1_18)))) : (var_1_23 == ((unsigned char) var_1_24)))) && ((var_1_6 >= var_1_34) ? ((var_1_37 && (var_1_12 < (max (var_1_45 , var_1_50)))) ? (var_1_26 == ((unsigned char) (128 - var_1_25))) : (var_1_15 ? ((var_1_12 <= var_1_47) ? (var_1_26 == ((unsigned char) var_1_25)) : (var_1_26 == ((unsigned char) (min (50 , (var_1_22 + var_1_10)))))) : 1)) : ((var_1_25 > var_1_45) ? (var_1_26 == ((unsigned char) var_1_11)) : (var_1_26 == ((unsigned char) var_1_25))))) && (var_1_28 == ((signed long int) (last_1_var_1_28 + (min (-4 , var_1_29)))))) && (((var_1_7 / var_1_31) == (- var_1_40)) ? (var_1_30 == ((signed short int) -64)) : ((var_1_14 >= var_1_47) ? (var_1_30 == ((signed short int) (8 - var_1_10))) : (var_1_30 == ((signed short int) -128))))) && (((var_1_29 < (var_1_47 | var_1_22)) && (var_1_45 >= (~ var_1_47))) ? (var_1_24 ? (var_1_32 == ((signed long int) var_1_50)) : (var_1_32 == ((signed long int) (abs (var_1_33))))) : 1)) && (((abs (last_1_var_1_50)) == var_1_12) ? ((var_1_3 >= last_1_var_1_45) ? (var_1_34 == ((double) var_1_7)) : (var_1_34 == ((double) (min (var_1_7 , (max ((abs (var_1_35)) , var_1_36))))))) : (var_1_34 == ((double) (min (var_1_36 , var_1_7)))))) && (((var_1_46 * var_1_6) >= var_1_35) ? (((var_1_38 - var_1_10) > var_1_14) ? (var_1_37 == ((unsigned char) var_1_16)) : (var_1_13 ? (var_1_37 == ((unsigned char) (var_1_24 || var_1_18))) : (var_1_37 == ((unsigned char) ((! var_1_16) || var_1_24))))) : (((min ((var_1_10 * var_1_20) , var_1_12)) == var_1_45) ? (((var_1_46 / var_1_31) < var_1_7) ? (var_1_37 == ((unsigned char) (var_1_18 || var_1_24))) : 1) : (var_1_37 == ((unsigned char) ((! (var_1_34 > var_1_35)) || var_1_15)))))) && ((var_1_6 < (- var_1_31)) ? (var_1_40 == ((double) (max (((max (var_1_41 , var_1_42)) + (var_1_43 - var_1_44)) , var_1_35)))) : 1)) && ((! ((var_1_9 - var_1_12) >= (max (16 , last_1_var_1_28)))) ? (((var_1_42 * var_1_44) >= last_1_var_1_34) ? (var_1_45 == ((signed long int) (var_1_38 - var_1_25))) : ((4 < (last_1_var_1_47 - var_1_22)) ? (var_1_45 == ((signed long int) (-64 + var_1_9))) : (var_1_45 == ((signed long int) (abs (var_1_14)))))) : 1)) && ((var_1_41 < (max ((- var_1_42) , var_1_6))) ? (var_1_13 ? (var_1_46 == ((float) var_1_41)) : (var_1_46 == ((float) (var_1_41 + var_1_43)))) : (var_1_46 == ((float) (var_1_43 - (5.864222176153191E18f - var_1_44)))))) && ((var_1_24 || last_1_var_1_23) ? (var_1_47 == ((signed long int) ((min ((var_1_25 + last_1_var_1_52) , var_1_29)) + (last_1_var_1_28 - last_1_var_1_50)))) : 1)) && (var_1_24 ? (var_1_48 == ((unsigned char) (min ((max ((var_1_49 - var_1_25) , (var_1_22 + var_1_12))) , 100)))) : 1)) && ((var_1_25 > var_1_45) ? (var_1_50 == ((signed short int) (min (var_1_12 , ((var_1_28 - var_1_11) + (-1 + var_1_49)))))) : ((var_1_53 >= (var_1_28 / (min (var_1_3 , var_1_25)))) ? ((var_1_34 >= (1.2f + 16.3f)) ? (var_1_17 ? (var_1_50 == ((signed short int) (var_1_28 - var_1_49))) : 1) : (var_1_50 == ((signed short int) (max (((var_1_51 - var_1_28) - var_1_22) , -1))))) : 1))) && (((43401 - var_1_10) < var_1_51) ? (var_1_52 == ((unsigned char) (var_1_49 - (var_1_25 + (var_1_22 + var_1_12))))) : 1)) && (var_1_53 == ((signed char) var_1_25))
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
