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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch83Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -256;
signed short int var_1_3 = 24009;
signed short int var_1_6 = 19467;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 8;
float var_1_12 = 15.4;
float var_1_14 = 25.75;
float var_1_15 = 9.5;
float var_1_16 = 256.8;
float var_1_17 = 9.6;
signed long int var_1_18 = -4;
unsigned char var_1_19 = 4;
unsigned char var_1_22 = 8;
unsigned long int var_1_23 = 100;
unsigned long int var_1_25 = 2643379110;
signed long int var_1_26 = 64;
unsigned short int var_1_27 = 128;
unsigned short int var_1_29 = 56358;
unsigned long int var_1_30 = 8;
unsigned short int var_1_31 = 32;
unsigned short int var_1_32 = 5;
unsigned long int var_1_33 = 1652750628;
unsigned long int var_1_34 = 1798940172;
signed long int var_1_35 = -64;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 10;
unsigned char var_1_39 = 128;
unsigned char var_1_41 = 100;
unsigned char var_1_42 = 5;
unsigned char var_1_43 = 100;
unsigned char var_1_44 = 100;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
signed long int var_1_48 = 100000;
signed long int var_1_49 = 1545243554;
signed char var_1_50 = 8;
signed long int var_1_51 = 1895595244;
signed char var_1_53 = 32;
signed char var_1_54 = 100;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 2;
unsigned char var_1_58 = 16;
float var_1_59 = 7.5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_7 = 64;
float last_1_var_1_12 = 15.4;
unsigned char last_1_var_1_19 = 4;
unsigned short int last_1_var_1_27 = 128;
unsigned long int last_1_var_1_30 = 8;
signed long int last_1_var_1_35 = -64;
unsigned char last_1_var_1_41 = 100;
unsigned char last_1_var_1_45 = 1;
signed long int last_1_var_1_48 = 100000;
unsigned char last_1_var_1_55 = 0;
unsigned char last_1_var_1_57 = 2;
unsigned char last_1_var_1_58 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch83Amount250
	if (last_1_var_1_45) {
		var_1_1 = ((var_1_3 - last_1_var_1_57) - last_1_var_1_19);
	} else {
		var_1_1 = ((max (var_1_3 , (var_1_6 - last_1_var_1_57))) - last_1_var_1_19);
	}


	// From: Req17Batch83Amount250
	unsigned char stepLocal_9 = var_1_1 < var_1_3;
	unsigned char stepLocal_8 = -256 == var_1_6;
	if (var_1_47) {
		if (stepLocal_9 && (var_1_43 > var_1_31)) {
			var_1_57 = (128 - var_1_10);
		} else {
			if (stepLocal_8 && (var_1_44 < var_1_9)) {
				var_1_57 = var_1_11;
			} else {
				var_1_57 = var_1_54;
			}
		}
	} else {
		var_1_57 = var_1_39;
	}


	// From: Req14Batch83Amount250
	if ((128 - (var_1_31 + var_1_9)) < last_1_var_1_27) {
		var_1_48 = (max ((min (var_1_6 , var_1_38)) , last_1_var_1_7));
	} else {
		if (last_1_var_1_58 <= (last_1_var_1_41 + var_1_39)) {
			var_1_48 = (var_1_32 - (var_1_49 - var_1_3));
		} else {
			if ((var_1_32 & (var_1_50 - var_1_38)) < last_1_var_1_7) {
				if (last_1_var_1_45 || ((var_1_14 + last_1_var_1_12) >= var_1_17)) {
					var_1_48 = (256 + last_1_var_1_58);
				} else {
					var_1_48 = (var_1_50 - ((var_1_51 - var_1_31) - var_1_29));
				}
			} else {
				if (var_1_42 < var_1_31) {
					if (! ((last_1_var_1_57 + var_1_8) != var_1_22)) {
						var_1_48 = ((max (last_1_var_1_27 , (var_1_51 - var_1_8))) - ((abs (var_1_50)) + last_1_var_1_7));
					}
				} else {
					if (var_1_47 && last_1_var_1_55) {
						var_1_48 = (max ((max ((max (last_1_var_1_48 , var_1_51)) , (var_1_10 - last_1_var_1_30))) , (max ((var_1_49 - 1) , var_1_9))));
					}
				}
			}
		}
	}


	// From: Req13Batch83Amount250
	if (((64 % var_1_43) + (var_1_11 - var_1_42)) >= (8 * last_1_var_1_41)) {
		var_1_45 = (last_1_var_1_55 && var_1_46);
	} else {
		var_1_45 = ((var_1_46 && last_1_var_1_55) || var_1_47);
	}


	// From: Req3Batch83Amount250
	if (! var_1_45) {
		var_1_12 = ((var_1_14 + (abs (49.5f))) + var_1_15);
	} else {
		var_1_12 = (((max (10.6f , var_1_16)) - var_1_17) + var_1_15);
	}


	// From: Req8Batch83Amount250
	if ((- last_1_var_1_12) <= (min (last_1_var_1_12 , (var_1_17 * var_1_16)))) {
		var_1_27 = (abs (last_1_var_1_35));
	} else {
		var_1_27 = (var_1_29 - last_1_var_1_35);
	}


	// From: Req2Batch83Amount250
	var_1_7 = ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)));


	// From: Req7Batch83Amount250
	signed short int stepLocal_3 = var_1_6;
	if (stepLocal_3 >= var_1_3) {
		if (! var_1_45) {
			var_1_26 = (var_1_8 + var_1_3);
		}
	} else {
		var_1_26 = (abs (var_1_3));
	}


	// From: Req16Batch83Amount250
	if (var_1_47) {
		var_1_55 = (var_1_46 || (last_1_var_1_55 && var_1_56));
	}


	// From: Req18Batch83Amount250
	if ((var_1_16 - var_1_17) <= ((- var_1_14) / var_1_59)) {
		var_1_58 = (var_1_8 - (max (var_1_32 , var_1_43)));
	} else {
		var_1_58 = var_1_54;
	}


	// From: Req12Batch83Amount250
	unsigned char stepLocal_6 = var_1_55;
	if (var_1_45 && stepLocal_6) {
		var_1_41 = ((min ((max (var_1_38 , var_1_10)) , var_1_11)) + (min ((min (var_1_9 , var_1_32)) , (max (var_1_31 , var_1_42)))));
	} else {
		if (var_1_12 == var_1_16) {
			if (var_1_55) {
				var_1_41 = (max (var_1_38 , (min ((128 - var_1_42) , (var_1_9 + 5)))));
			}
		} else {
			var_1_41 = (((var_1_43 + var_1_44) - var_1_11) - var_1_32);
		}
	}


	// From: Req5Batch83Amount250
	unsigned char stepLocal_0 = var_1_45;
	if (var_1_45) {
		if (var_1_55 && stepLocal_0) {
			var_1_19 = var_1_9;
		} else {
			if ((var_1_14 + (var_1_17 - var_1_16)) > var_1_15) {
				if (var_1_14 > -0.5f) {
					var_1_19 = (min (var_1_8 , var_1_22));
				}
			} else {
				var_1_19 = var_1_8;
			}
		}
	} else {
		var_1_19 = var_1_22;
	}


	// From: Req11Batch83Amount250
	signed long int stepLocal_5 = abs (var_1_29);
	unsigned long int stepLocal_4 = (var_1_19 | -200) / var_1_33;
	if ((var_1_17 + var_1_16) >= var_1_12) {
		var_1_37 = (min ((var_1_8 - var_1_38) , (var_1_39 - var_1_10)));
	} else {
		if (stepLocal_5 <= var_1_57) {
			if ((-16 << var_1_8) != stepLocal_4) {
				var_1_37 = (var_1_39 - var_1_38);
			} else {
				var_1_37 = (var_1_38 + var_1_32);
			}
		} else {
			var_1_37 = (abs (var_1_10));
		}
	}


	// From: Req15Batch83Amount250
	unsigned char stepLocal_7 = var_1_45;
	if (1.5 < var_1_12) {
		if (var_1_55 && stepLocal_7) {
			var_1_53 = ((var_1_54 - var_1_10) - (var_1_9 + var_1_31));
		}
	}


	// From: Req10Batch83Amount250
	if (((var_1_37 * var_1_48) * 1u) <= var_1_41) {
		if (var_1_9 < 2) {
			var_1_35 = (var_1_10 + var_1_6);
		}
	} else {
		var_1_35 = ((abs (abs (var_1_37))) - (var_1_29 + var_1_3));
	}


	// From: Req4Batch83Amount250
	if ((var_1_3 / var_1_8) < var_1_19) {
		var_1_18 = (var_1_58 + (var_1_10 - var_1_19));
	} else {
		if (var_1_8 <= var_1_9) {
			var_1_18 = 128;
		} else {
			var_1_18 = (abs (var_1_7));
		}
	}


	// From: Req6Batch83Amount250
	signed long int stepLocal_2 = min (var_1_10 , var_1_53);
	signed long int stepLocal_1 = -8 + var_1_3;
	if (stepLocal_1 <= (max ((max (var_1_58 , var_1_9)) , var_1_10))) {
		var_1_23 = ((2u + var_1_3) + var_1_10);
	} else {
		if (stepLocal_2 >= (var_1_11 % var_1_8)) {
			var_1_23 = (var_1_41 + var_1_19);
		} else {
			var_1_23 = (min (var_1_11 , (var_1_25 - (var_1_27 + 128u))));
		}
	}


	// From: Req9Batch83Amount250
	if (((var_1_41 - var_1_3) >> (var_1_31 - var_1_32)) <= var_1_48) {
		if ((var_1_18 + var_1_26) <= var_1_32) {
			var_1_30 = (var_1_25 - var_1_19);
		} else {
			var_1_30 = (((var_1_33 - var_1_57) + (var_1_34 - var_1_27)) - 10000000u);
		}
	} else {
		if (var_1_27 > var_1_27) {
			var_1_30 = (max (var_1_9 , var_1_6));
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 16382);
	assume_abort_if_not(var_1_3 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 16382);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 190);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 31);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -230584.3009213691390e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 2147483647);
	assume_abort_if_not(var_1_25 <= 4294967294);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 32767);
	assume_abort_if_not(var_1_29 <= 65534);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 16);
	assume_abort_if_not(var_1_31 <= 32);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 16);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 1610612735);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 1610612735);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 127);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 95);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 95);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= 1073741823);
	assume_abort_if_not(var_1_49 <= 2147483646);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= -1);
	assume_abort_if_not(var_1_50 <= 127);
	var_1_51 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_51 >= 1610612734);
	assume_abort_if_not(var_1_51 <= 2147483646);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 62);
	assume_abort_if_not(var_1_54 <= 126);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 0);
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= -922337.2036854776000e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
	assume_abort_if_not(var_1_59 != 0.0F);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_58 = var_1_58;
}

int property() {
	return (((((((((((((((((last_1_var_1_45 ? (var_1_1 == ((signed short int) ((var_1_3 - last_1_var_1_57) - last_1_var_1_19))) : (var_1_1 == ((signed short int) ((max (var_1_3 , (var_1_6 - last_1_var_1_57))) - last_1_var_1_19)))) && (var_1_7 == ((unsigned char) ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)))))) && ((! var_1_45) ? (var_1_12 == ((float) ((var_1_14 + (abs (49.5f))) + var_1_15))) : (var_1_12 == ((float) (((max (10.6f , var_1_16)) - var_1_17) + var_1_15))))) && (((var_1_3 / var_1_8) < var_1_19) ? (var_1_18 == ((signed long int) (var_1_58 + (var_1_10 - var_1_19)))) : ((var_1_8 <= var_1_9) ? (var_1_18 == ((signed long int) 128)) : (var_1_18 == ((signed long int) (abs (var_1_7))))))) && (var_1_45 ? ((var_1_55 && var_1_45) ? (var_1_19 == ((unsigned char) var_1_9)) : (((var_1_14 + (var_1_17 - var_1_16)) > var_1_15) ? ((var_1_14 > -0.5f) ? (var_1_19 == ((unsigned char) (min (var_1_8 , var_1_22)))) : 1) : (var_1_19 == ((unsigned char) var_1_8)))) : (var_1_19 == ((unsigned char) var_1_22)))) && (((-8 + var_1_3) <= (max ((max (var_1_58 , var_1_9)) , var_1_10))) ? (var_1_23 == ((unsigned long int) ((2u + var_1_3) + var_1_10))) : (((min (var_1_10 , var_1_53)) >= (var_1_11 % var_1_8)) ? (var_1_23 == ((unsigned long int) (var_1_41 + var_1_19))) : (var_1_23 == ((unsigned long int) (min (var_1_11 , (var_1_25 - (var_1_27 + 128u))))))))) && ((var_1_6 >= var_1_3) ? ((! var_1_45) ? (var_1_26 == ((signed long int) (var_1_8 + var_1_3))) : 1) : (var_1_26 == ((signed long int) (abs (var_1_3)))))) && (((- last_1_var_1_12) <= (min (last_1_var_1_12 , (var_1_17 * var_1_16)))) ? (var_1_27 == ((unsigned short int) (abs (last_1_var_1_35)))) : (var_1_27 == ((unsigned short int) (var_1_29 - last_1_var_1_35))))) && ((((var_1_41 - var_1_3) >> (var_1_31 - var_1_32)) <= var_1_48) ? (((var_1_18 + var_1_26) <= var_1_32) ? (var_1_30 == ((unsigned long int) (var_1_25 - var_1_19))) : (var_1_30 == ((unsigned long int) (((var_1_33 - var_1_57) + (var_1_34 - var_1_27)) - 10000000u)))) : ((var_1_27 > var_1_27) ? (var_1_30 == ((unsigned long int) (max (var_1_9 , var_1_6)))) : 1))) && ((((var_1_37 * var_1_48) * 1u) <= var_1_41) ? ((var_1_9 < 2) ? (var_1_35 == ((signed long int) (var_1_10 + var_1_6))) : 1) : (var_1_35 == ((signed long int) ((abs (abs (var_1_37))) - (var_1_29 + var_1_3)))))) && (((var_1_17 + var_1_16) >= var_1_12) ? (var_1_37 == ((unsigned char) (min ((var_1_8 - var_1_38) , (var_1_39 - var_1_10))))) : (((abs (var_1_29)) <= var_1_57) ? (((-16 << var_1_8) != ((var_1_19 | -200) / var_1_33)) ? (var_1_37 == ((unsigned char) (var_1_39 - var_1_38))) : (var_1_37 == ((unsigned char) (var_1_38 + var_1_32)))) : (var_1_37 == ((unsigned char) (abs (var_1_10))))))) && ((var_1_45 && var_1_55) ? (var_1_41 == ((unsigned char) ((min ((max (var_1_38 , var_1_10)) , var_1_11)) + (min ((min (var_1_9 , var_1_32)) , (max (var_1_31 , var_1_42))))))) : ((var_1_12 == var_1_16) ? (var_1_55 ? (var_1_41 == ((unsigned char) (max (var_1_38 , (min ((128 - var_1_42) , (var_1_9 + 5))))))) : 1) : (var_1_41 == ((unsigned char) (((var_1_43 + var_1_44) - var_1_11) - var_1_32)))))) && ((((64 % var_1_43) + (var_1_11 - var_1_42)) >= (8 * last_1_var_1_41)) ? (var_1_45 == ((unsigned char) (last_1_var_1_55 && var_1_46))) : (var_1_45 == ((unsigned char) ((var_1_46 && last_1_var_1_55) || var_1_47))))) && (((128 - (var_1_31 + var_1_9)) < last_1_var_1_27) ? (var_1_48 == ((signed long int) (max ((min (var_1_6 , var_1_38)) , last_1_var_1_7)))) : ((last_1_var_1_58 <= (last_1_var_1_41 + var_1_39)) ? (var_1_48 == ((signed long int) (var_1_32 - (var_1_49 - var_1_3)))) : (((var_1_32 & (var_1_50 - var_1_38)) < last_1_var_1_7) ? ((last_1_var_1_45 || ((var_1_14 + last_1_var_1_12) >= var_1_17)) ? (var_1_48 == ((signed long int) (256 + last_1_var_1_58))) : (var_1_48 == ((signed long int) (var_1_50 - ((var_1_51 - var_1_31) - var_1_29))))) : ((var_1_42 < var_1_31) ? ((! ((last_1_var_1_57 + var_1_8) != var_1_22)) ? (var_1_48 == ((signed long int) ((max (last_1_var_1_27 , (var_1_51 - var_1_8))) - ((abs (var_1_50)) + last_1_var_1_7)))) : 1) : ((var_1_47 && last_1_var_1_55) ? (var_1_48 == ((signed long int) (max ((max ((max (last_1_var_1_48 , var_1_51)) , (var_1_10 - last_1_var_1_30))) , (max ((var_1_49 - 1) , var_1_9)))))) : 1)))))) && ((1.5 < var_1_12) ? ((var_1_55 && var_1_45) ? (var_1_53 == ((signed char) ((var_1_54 - var_1_10) - (var_1_9 + var_1_31)))) : 1) : 1)) && (var_1_47 ? (var_1_55 == ((unsigned char) (var_1_46 || (last_1_var_1_55 && var_1_56)))) : 1)) && (var_1_47 ? (((var_1_1 < var_1_3) && (var_1_43 > var_1_31)) ? (var_1_57 == ((unsigned char) (128 - var_1_10))) : (((-256 == var_1_6) && (var_1_44 < var_1_9)) ? (var_1_57 == ((unsigned char) var_1_11)) : (var_1_57 == ((unsigned char) var_1_54)))) : (var_1_57 == ((unsigned char) var_1_39)))) && (((var_1_16 - var_1_17) <= ((- var_1_14) / var_1_59)) ? (var_1_58 == ((unsigned char) (var_1_8 - (max (var_1_32 , var_1_43))))) : (var_1_58 == ((unsigned char) var_1_54)))
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
