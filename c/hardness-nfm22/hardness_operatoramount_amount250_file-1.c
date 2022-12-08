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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 1;
signed long int var_1_11 = -100;
signed long int var_1_12 = 1977712970;
unsigned short int var_1_15 = 1000;
float var_1_17 = 49.75;
float var_1_18 = 256.2;
float var_1_19 = 999999999.8;
signed char var_1_20 = -4;
signed char var_1_21 = 8;
signed char var_1_22 = 32;
float var_1_23 = 4.5;
float var_1_24 = 32.5;
float var_1_25 = 199.5;
float var_1_26 = 0.0;
float var_1_27 = 0.0;
float var_1_28 = 128.8;
signed char var_1_29 = 64;
float var_1_30 = 128.5;
float var_1_31 = 10.2;
unsigned long int var_1_32 = 4;
unsigned long int var_1_33 = 3502996739;
unsigned long int var_1_34 = 5;
signed char var_1_35 = -128;
unsigned char var_1_36 = 5;
unsigned char var_1_37 = 200;
unsigned char var_1_38 = 0;
unsigned char var_1_40 = 0;
unsigned long int var_1_41 = 256;
unsigned long int var_1_42 = 3342297017;
unsigned long int var_1_44 = 0;
unsigned long int var_1_45 = 2029022744;
unsigned long int var_1_46 = 1820864555;
unsigned long int var_1_47 = 1088921898;
unsigned char var_1_48 = 64;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 1;
unsigned long int var_1_53 = 1;
unsigned long int var_1_55 = 1;
float var_1_56 = 64.6;
unsigned char var_1_57 = 32;
unsigned short int var_1_58 = 100;
signed short int var_1_59 = 16;
unsigned short int var_1_60 = 1000;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
signed long int last_1_var_1_11 = -100;
unsigned short int last_1_var_1_15 = 1000;
signed char last_1_var_1_29 = 64;
unsigned long int last_1_var_1_32 = 4;
unsigned long int last_1_var_1_34 = 5;
unsigned char last_1_var_1_38 = 0;
unsigned long int last_1_var_1_41 = 256;
unsigned long int last_1_var_1_44 = 0;
unsigned char last_1_var_1_50 = 0;
unsigned char last_1_var_1_51 = 1;
unsigned char last_1_var_1_57 = 32;
unsigned short int last_1_var_1_58 = 100;
unsigned short int last_1_var_1_60 = 1000;
unsigned char last_1_var_1_61 = 0;
unsigned char last_1_var_1_62 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch1Amount250
	unsigned char stepLocal_4 = last_1_var_1_51;
	if (((var_1_26 - var_1_28) * var_1_23) == 5.75f) {
		var_1_34 = (max (var_1_22 , (last_1_var_1_15 + last_1_var_1_29)));
	} else {
		if (stepLocal_4 && (last_1_var_1_44 < last_1_var_1_34)) {
			var_1_34 = 256u;
		} else {
			var_1_34 = last_1_var_1_15;
		}
	}


	// From: Req12Batch1Amount250
	if ((- var_1_12) < var_1_34) {
		var_1_36 = (((abs (var_1_37)) - 5) - var_1_22);
	} else {
		var_1_36 = var_1_37;
	}


	// From: Req16Batch1Amount250
	unsigned long int stepLocal_9 = last_1_var_1_41;
	if (stepLocal_9 > (last_1_var_1_11 + last_1_var_1_60)) {
		var_1_50 = (! var_1_7);
	} else {
		var_1_50 = ((last_1_var_1_51 || (last_1_var_1_62 && last_1_var_1_38)) && var_1_6);
	}


	// From: Req26Batch1Amount250
	if (last_1_var_1_50) {
		var_1_62 = (var_1_8 || var_1_9);
	} else {
		var_1_62 = ((last_1_var_1_51 && var_1_6) || var_1_40);
	}


	// From: Req17Batch1Amount250
	if (var_1_27 > var_1_26) {
		var_1_51 = (var_1_10 && var_1_8);
	} else {
		if (last_1_var_1_62) {
			var_1_51 = (last_1_var_1_1 || var_1_8);
		}
	}


	// From: Req14Batch1Amount250
	if (var_1_6) {
		if (var_1_12 < ((last_1_var_1_11 + last_1_var_1_41) + last_1_var_1_61)) {
			if ((max ((min (last_1_var_1_61 , last_1_var_1_11)) , var_1_37)) < (var_1_22 + (- var_1_12))) {
				var_1_41 = (max (last_1_var_1_61 , var_1_33));
			} else {
				var_1_41 = ((var_1_42 - last_1_var_1_34) - last_1_var_1_15);
			}
		} else {
			if (var_1_22 >= (var_1_42 / var_1_37)) {
				var_1_41 = (last_1_var_1_61 + last_1_var_1_15);
			} else {
				var_1_41 = ((min (var_1_42 , var_1_33)) - last_1_var_1_57);
			}
		}
	} else {
		var_1_41 = (abs (last_1_var_1_61));
	}


	// From: Req3Batch1Amount250
	unsigned long int stepLocal_1 = last_1_var_1_34 * last_1_var_1_58;
	if (var_1_12 < stepLocal_1) {
		var_1_15 = (min (last_1_var_1_60 , (last_1_var_1_32 + last_1_var_1_57)));
	}


	// From: Req21Batch1Amount250
	if (var_1_46 >= last_1_var_1_44) {
		var_1_57 = (var_1_48 + var_1_22);
	} else {
		var_1_57 = var_1_37;
	}


	// From: Req4Batch1Amount250
	var_1_17 = (min (var_1_18 , var_1_19));


	// From: Req8Batch1Amount250
	if (var_1_25 >= (var_1_26 - var_1_28)) {
		var_1_30 = (abs (10.5f + var_1_28));
	} else {
		var_1_30 = (var_1_31 - (abs (var_1_26)));
	}


	// From: Req9Batch1Amount250
	if (! var_1_9) {
		var_1_32 = (max ((var_1_33 - 25u) , 32u));
	}


	// From: Req11Batch1Amount250
	if (var_1_8) {
		var_1_35 = var_1_22;
	} else {
		var_1_35 = (min (var_1_22 , var_1_21));
	}


	// From: Req20Batch1Amount250
	if (var_1_6) {
		var_1_56 = ((min (var_1_26 , var_1_25)) - var_1_27);
	}


	// From: Req23Batch1Amount250
	if (var_1_7) {
		var_1_59 = var_1_37;
	} else {
		var_1_59 = var_1_49;
	}


	// From: Req24Batch1Amount250
	if (var_1_10) {
		var_1_60 = (10 + var_1_49);
	}


	// From: Req25Batch1Amount250
	var_1_61 = 1;


	// From: Req13Batch1Amount250
	unsigned char stepLocal_5 = var_1_62;
	if ((var_1_60 > var_1_12) && stepLocal_5) {
		if (var_1_18 < var_1_28) {
			var_1_38 = (var_1_7 || (var_1_10 && (var_1_6 || var_1_40)));
		}
	}


	// From: Req1Batch1Amount250
	if (var_1_41 <= var_1_15) {
		if ((var_1_41 ^ (var_1_15 ^ var_1_57)) < var_1_57) {
			var_1_1 = (var_1_6 || var_1_7);
		} else {
			if ((var_1_57 == var_1_41) || (var_1_7 && (var_1_15 <= 64))) {
				var_1_1 = ((var_1_8 && (! var_1_7)) && (var_1_9 && var_1_10));
			} else {
				if (var_1_10) {
					var_1_1 = var_1_6;
				}
			}
		}
	}


	// From: Req5Batch1Amount250
	unsigned char stepLocal_3 = var_1_6;
	unsigned char stepLocal_2 = (var_1_61 >= var_1_57) || var_1_7;
	if (var_1_8 && stepLocal_3) {
		var_1_20 = (var_1_21 - var_1_22);
	} else {
		if ((var_1_19 + var_1_30) >= ((abs (var_1_18)) / var_1_23)) {
			if ((var_1_8 && var_1_9) && stepLocal_2) {
				var_1_20 = -8;
			}
		} else {
			var_1_20 = var_1_22;
		}
	}


	// From: Req7Batch1Amount250
	if ((abs (var_1_56)) >= var_1_19) {
		var_1_29 = (max (-1 , var_1_22));
	}


	// From: Req22Batch1Amount250
	if (var_1_1) {
		var_1_58 = var_1_61;
	}


	// From: Req6Batch1Amount250
	if (var_1_22 <= (var_1_59 + var_1_58)) {
		var_1_24 = (var_1_25 - (var_1_26 - (var_1_27 - var_1_28)));
	} else {
		var_1_24 = var_1_28;
	}


	// From: Req18Batch1Amount250
	if (var_1_24 >= var_1_27) {
		if ((max (var_1_36 , var_1_41)) < var_1_61) {
			var_1_53 = ((min (var_1_36 , (min (var_1_60 , var_1_57)))) + 100000u);
		}
	} else {
		if (var_1_50 || var_1_62) {
			var_1_53 = (var_1_42 - (var_1_37 + var_1_49));
		} else {
			var_1_53 = (max (var_1_57 , (var_1_47 + var_1_48)));
		}
	}


	// From: Req19Batch1Amount250
	unsigned char stepLocal_12 = var_1_51;
	unsigned char stepLocal_11 = ! var_1_9;
	unsigned long int stepLocal_10 = var_1_53 / 256u;
	if (stepLocal_10 > (var_1_59 / 5u)) {
		if (stepLocal_12 || var_1_50) {
			if ((var_1_40 && (var_1_61 > var_1_60)) || stepLocal_11) {
				var_1_55 = (max (var_1_45 , var_1_48));
			} else {
				var_1_55 = (var_1_33 - var_1_41);
			}
		}
	} else {
		var_1_55 = (var_1_49 + (max (1000000000u , var_1_37)));
	}


	// From: Req2Batch1Amount250
	signed long int stepLocal_0 = 4;
	if (var_1_8) {
		var_1_11 = (max (var_1_58 , var_1_15));
	} else {
		if (var_1_15 < stepLocal_0) {
			var_1_11 = ((min (var_1_15 , (var_1_12 - var_1_36))) - (min (var_1_58 , var_1_61)));
		} else {
			var_1_11 = (abs (var_1_12));
		}
	}


	// From: Req15Batch1Amount250
	unsigned long int stepLocal_8 = var_1_34;
	unsigned long int stepLocal_7 = var_1_53 - var_1_58;
	unsigned long int stepLocal_6 = (min (var_1_55 , var_1_55)) / var_1_37;
	if (var_1_23 <= var_1_19) {
		if (stepLocal_6 == var_1_60) {
			if (var_1_61 >= stepLocal_8) {
				var_1_44 = (var_1_33 - var_1_53);
			} else {
				var_1_44 = ((var_1_45 + (min (var_1_46 , var_1_47))) - (max (var_1_57 , var_1_12)));
			}
		} else {
			var_1_44 = (max (var_1_57 , var_1_42));
		}
	} else {
		if ((var_1_37 - (var_1_48 + var_1_49)) > stepLocal_7) {
			var_1_44 = (max (var_1_42 , (max (var_1_49 , (var_1_45 + var_1_48)))));
		} else {
			if (var_1_1) {
				var_1_44 = ((var_1_47 - (var_1_53 + var_1_57)) + var_1_22);
			} else {
				var_1_44 = (var_1_53 + var_1_57);
			}
		}
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 1073741822);
	assume_abort_if_not(var_1_12 <= 2147483646);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -922337.2036854765600e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -1);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	assume_abort_if_not(var_1_23 != 0.0F);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 4611686.018427382800e+12F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 2305843.009213691390e+12F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691390e+12F && var_1_28 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 2147483647);
	assume_abort_if_not(var_1_33 <= 4294967294);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 190);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 3221225470);
	assume_abort_if_not(var_1_42 <= 4294967294);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 1073741823);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 1073741824);
	assume_abort_if_not(var_1_46 <= 2147483647);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 1073741824);
	assume_abort_if_not(var_1_47 <= 2147483647);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 64);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 63);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_62 = var_1_62;
}

int property() {
	return ((((((((((((((((((((((((((var_1_41 <= var_1_15) ? (((var_1_41 ^ (var_1_15 ^ var_1_57)) < var_1_57) ? (var_1_1 == ((unsigned char) (var_1_6 || var_1_7))) : (((var_1_57 == var_1_41) || (var_1_7 && (var_1_15 <= 64))) ? (var_1_1 == ((unsigned char) ((var_1_8 && (! var_1_7)) && (var_1_9 && var_1_10)))) : (var_1_10 ? (var_1_1 == ((unsigned char) var_1_6)) : 1))) : 1) && (var_1_8 ? (var_1_11 == ((signed long int) (max (var_1_58 , var_1_15)))) : ((var_1_15 < 4) ? (var_1_11 == ((signed long int) ((min (var_1_15 , (var_1_12 - var_1_36))) - (min (var_1_58 , var_1_61))))) : (var_1_11 == ((signed long int) (abs (var_1_12))))))) && ((var_1_12 < (last_1_var_1_34 * last_1_var_1_58)) ? (var_1_15 == ((unsigned short int) (min (last_1_var_1_60 , (last_1_var_1_32 + last_1_var_1_57))))) : 1)) && (var_1_17 == ((float) (min (var_1_18 , var_1_19))))) && ((var_1_8 && var_1_6) ? (var_1_20 == ((signed char) (var_1_21 - var_1_22))) : (((var_1_19 + var_1_30) >= ((abs (var_1_18)) / var_1_23)) ? (((var_1_8 && var_1_9) && ((var_1_61 >= var_1_57) || var_1_7)) ? (var_1_20 == ((signed char) -8)) : 1) : (var_1_20 == ((signed char) var_1_22))))) && ((var_1_22 <= (var_1_59 + var_1_58)) ? (var_1_24 == ((float) (var_1_25 - (var_1_26 - (var_1_27 - var_1_28))))) : (var_1_24 == ((float) var_1_28)))) && (((abs (var_1_56)) >= var_1_19) ? (var_1_29 == ((signed char) (max (-1 , var_1_22)))) : 1)) && ((var_1_25 >= (var_1_26 - var_1_28)) ? (var_1_30 == ((float) (abs (10.5f + var_1_28)))) : (var_1_30 == ((float) (var_1_31 - (abs (var_1_26))))))) && ((! var_1_9) ? (var_1_32 == ((unsigned long int) (max ((var_1_33 - 25u) , 32u)))) : 1)) && ((((var_1_26 - var_1_28) * var_1_23) == 5.75f) ? (var_1_34 == ((unsigned long int) (max (var_1_22 , (last_1_var_1_15 + last_1_var_1_29))))) : ((last_1_var_1_51 && (last_1_var_1_44 < last_1_var_1_34)) ? (var_1_34 == ((unsigned long int) 256u)) : (var_1_34 == ((unsigned long int) last_1_var_1_15))))) && (var_1_8 ? (var_1_35 == ((signed char) var_1_22)) : (var_1_35 == ((signed char) (min (var_1_22 , var_1_21)))))) && (((- var_1_12) < var_1_34) ? (var_1_36 == ((unsigned char) (((abs (var_1_37)) - 5) - var_1_22))) : (var_1_36 == ((unsigned char) var_1_37)))) && (((var_1_60 > var_1_12) && var_1_62) ? ((var_1_18 < var_1_28) ? (var_1_38 == ((unsigned char) (var_1_7 || (var_1_10 && (var_1_6 || var_1_40))))) : 1) : 1)) && (var_1_6 ? ((var_1_12 < ((last_1_var_1_11 + last_1_var_1_41) + last_1_var_1_61)) ? (((max ((min (last_1_var_1_61 , last_1_var_1_11)) , var_1_37)) < (var_1_22 + (- var_1_12))) ? (var_1_41 == ((unsigned long int) (max (last_1_var_1_61 , var_1_33)))) : (var_1_41 == ((unsigned long int) ((var_1_42 - last_1_var_1_34) - last_1_var_1_15)))) : ((var_1_22 >= (var_1_42 / var_1_37)) ? (var_1_41 == ((unsigned long int) (last_1_var_1_61 + last_1_var_1_15))) : (var_1_41 == ((unsigned long int) ((min (var_1_42 , var_1_33)) - last_1_var_1_57))))) : (var_1_41 == ((unsigned long int) (abs (last_1_var_1_61)))))) && ((var_1_23 <= var_1_19) ? ((((min (var_1_55 , var_1_55)) / var_1_37) == var_1_60) ? ((var_1_61 >= var_1_34) ? (var_1_44 == ((unsigned long int) (var_1_33 - var_1_53))) : (var_1_44 == ((unsigned long int) ((var_1_45 + (min (var_1_46 , var_1_47))) - (max (var_1_57 , var_1_12)))))) : (var_1_44 == ((unsigned long int) (max (var_1_57 , var_1_42))))) : (((var_1_37 - (var_1_48 + var_1_49)) > (var_1_53 - var_1_58)) ? (var_1_44 == ((unsigned long int) (max (var_1_42 , (max (var_1_49 , (var_1_45 + var_1_48))))))) : (var_1_1 ? (var_1_44 == ((unsigned long int) ((var_1_47 - (var_1_53 + var_1_57)) + var_1_22))) : (var_1_44 == ((unsigned long int) (var_1_53 + var_1_57))))))) && ((last_1_var_1_41 > (last_1_var_1_11 + last_1_var_1_60)) ? (var_1_50 == ((unsigned char) (! var_1_7))) : (var_1_50 == ((unsigned char) ((last_1_var_1_51 || (last_1_var_1_62 && last_1_var_1_38)) && var_1_6))))) && ((var_1_27 > var_1_26) ? (var_1_51 == ((unsigned char) (var_1_10 && var_1_8))) : (last_1_var_1_62 ? (var_1_51 == ((unsigned char) (last_1_var_1_1 || var_1_8))) : 1))) && ((var_1_24 >= var_1_27) ? (((max (var_1_36 , var_1_41)) < var_1_61) ? (var_1_53 == ((unsigned long int) ((min (var_1_36 , (min (var_1_60 , var_1_57)))) + 100000u))) : 1) : ((var_1_50 || var_1_62) ? (var_1_53 == ((unsigned long int) (var_1_42 - (var_1_37 + var_1_49)))) : (var_1_53 == ((unsigned long int) (max (var_1_57 , (var_1_47 + var_1_48)))))))) && (((var_1_53 / 256u) > (var_1_59 / 5u)) ? ((var_1_51 || var_1_50) ? (((var_1_40 && (var_1_61 > var_1_60)) || (! var_1_9)) ? (var_1_55 == ((unsigned long int) (max (var_1_45 , var_1_48)))) : (var_1_55 == ((unsigned long int) (var_1_33 - var_1_41)))) : 1) : (var_1_55 == ((unsigned long int) (var_1_49 + (max (1000000000u , var_1_37))))))) && (var_1_6 ? (var_1_56 == ((float) ((min (var_1_26 , var_1_25)) - var_1_27))) : 1)) && ((var_1_46 >= last_1_var_1_44) ? (var_1_57 == ((unsigned char) (var_1_48 + var_1_22))) : (var_1_57 == ((unsigned char) var_1_37)))) && (var_1_1 ? (var_1_58 == ((unsigned short int) var_1_61)) : 1)) && (var_1_7 ? (var_1_59 == ((signed short int) var_1_37)) : (var_1_59 == ((signed short int) var_1_49)))) && (var_1_10 ? (var_1_60 == ((unsigned short int) (10 + var_1_49))) : 1)) && (var_1_61 == ((unsigned char) 1))) && (last_1_var_1_50 ? (var_1_62 == ((unsigned char) (var_1_8 || var_1_9))) : (var_1_62 == ((unsigned char) ((last_1_var_1_51 && var_1_6) || var_1_40))))
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
