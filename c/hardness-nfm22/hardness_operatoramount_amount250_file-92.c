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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch92Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_9 = 0;
unsigned long int var_1_10 = 64;
unsigned char var_1_12 = 5;
unsigned char var_1_13 = 10;
unsigned long int var_1_14 = 0;
unsigned long int var_1_18 = 1000000000;
signed long int var_1_19 = 50;
signed long int var_1_20 = 1495534220;
unsigned long int var_1_21 = 0;
unsigned short int var_1_22 = 8;
unsigned short int var_1_23 = 17273;
unsigned short int var_1_24 = 43392;
float var_1_25 = 63.4;
float var_1_26 = 127.875;
float var_1_27 = 4.5;
unsigned long int var_1_28 = 2;
unsigned long int var_1_29 = 2760471636;
unsigned char var_1_30 = 8;
unsigned char var_1_31 = 1;
unsigned short int var_1_32 = 4;
unsigned long int var_1_33 = 4;
float var_1_34 = 199.25;
float var_1_35 = 0.0;
float var_1_36 = 0.0;
float var_1_37 = 2.8;
float var_1_38 = 9.8;
float var_1_39 = 0.5;
float var_1_40 = 128.4;
float var_1_41 = 100000000000000.75;
float var_1_42 = 4.25;
unsigned long int var_1_43 = 10;
signed char var_1_44 = -5;
unsigned long int var_1_45 = 1112466972;
signed short int var_1_46 = 8;
signed short int var_1_47 = 29404;
float var_1_48 = 15.5;
float var_1_49 = 128.2;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 32;
unsigned char var_1_52 = 128;
unsigned char var_1_53 = 16;
unsigned char var_1_54 = 2;
float var_1_55 = 500.25;
signed short int var_1_56 = 100;
unsigned short int var_1_57 = 128;
unsigned short int var_1_59 = 10;
unsigned long int var_1_60 = 0;
signed short int var_1_61 = -64;
unsigned char var_1_62 = 2;
unsigned char var_1_63 = 25;
unsigned char var_1_64 = 25;
unsigned char var_1_65 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_12 = 5;
signed long int last_1_var_1_19 = 50;
unsigned long int last_1_var_1_21 = 0;
unsigned long int last_1_var_1_28 = 2;
unsigned char last_1_var_1_30 = 8;
unsigned short int last_1_var_1_32 = 4;
unsigned long int last_1_var_1_43 = 10;
signed short int last_1_var_1_46 = 8;
float last_1_var_1_48 = 15.5;
unsigned char last_1_var_1_50 = 0;
unsigned short int last_1_var_1_57 = 128;
unsigned short int last_1_var_1_59 = 10;
unsigned char last_1_var_1_62 = 2;
unsigned char last_1_var_1_63 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req17Batch92Amount250
	signed long int stepLocal_11 = last_1_var_1_62 ^ last_1_var_1_46;
	unsigned long int stepLocal_10 = last_1_var_1_28;
	if (((var_1_29 - var_1_18) * var_1_31) <= stepLocal_10) {
		var_1_48 = ((min (var_1_36 , 1.375f)) - var_1_40);
	} else {
		if (var_1_20 >= stepLocal_11) {
			var_1_48 = (2.2f + (var_1_49 + 9.999999999999995E14f));
		} else {
			var_1_48 = (min (var_1_27 , var_1_37));
		}
	}


	// From: Req14Batch92Amount250
	signed long int stepLocal_7 = last_1_var_1_57;
	if (stepLocal_7 > last_1_var_1_59) {
		var_1_41 = (var_1_37 + var_1_42);
	}


	// From: Req11Batch92Amount250
	if (last_1_var_1_57 < (var_1_23 << var_1_13)) {
		if (((var_1_20 >> var_1_13) + last_1_var_1_63) == (abs (var_1_18))) {
			var_1_32 = (max (var_1_31 , last_1_var_1_32));
		}
	} else {
		if (var_1_9) {
			var_1_32 = (last_1_var_1_43 + last_1_var_1_32);
		} else {
			if (last_1_var_1_48 > var_1_26) {
				var_1_32 = (max (last_1_var_1_50 , (var_1_24 - var_1_23)));
			} else {
				var_1_32 = ((var_1_23 - var_1_31) + (var_1_13 + last_1_var_1_50));
			}
		}
	}


	// From: Req18Batch92Amount250
	signed long int stepLocal_14 = var_1_13 * last_1_var_1_30;
	unsigned long int stepLocal_13 = var_1_18;
	signed long int stepLocal_12 = last_1_var_1_30;
	if (stepLocal_14 < last_1_var_1_59) {
		if (last_1_var_1_21 < stepLocal_12) {
			var_1_50 = (min ((max (var_1_13 , (min (var_1_31 , var_1_51)))) , (var_1_52 - 10)));
		} else {
			var_1_50 = var_1_52;
		}
	} else {
		if (var_1_24 != stepLocal_13) {
			var_1_50 = (var_1_53 + var_1_54);
		}
	}


	// From: Req3Batch92Amount250
	unsigned long int stepLocal_0 = 8u;
	if (stepLocal_0 == ((3877202530u - last_1_var_1_12) >> last_1_var_1_19)) {
		var_1_12 = (abs (var_1_13));
	}


	// From: Req10Batch92Amount250
	if (var_1_9) {
		var_1_30 = (max (var_1_13 , var_1_31));
	}


	// From: Req19Batch92Amount250
	var_1_55 = (var_1_37 - var_1_36);


	// From: Req22Batch92Amount250
	var_1_59 = var_1_51;


	// From: Req23Batch92Amount250
	var_1_60 = var_1_13;


	// From: Req27Batch92Amount250
	var_1_65 = var_1_6;


	// From: Req24Batch92Amount250
	if (var_1_65) {
		var_1_61 = var_1_13;
	}


	// From: Req25Batch92Amount250
	if (var_1_65) {
		var_1_62 = var_1_52;
	} else {
		var_1_62 = var_1_52;
	}


	// From: Req26Batch92Amount250
	unsigned char stepLocal_15 = var_1_6;
	if (var_1_65) {
		if (var_1_5 || stepLocal_15) {
			var_1_63 = (var_1_52 - (max (var_1_54 , (var_1_64 + 2))));
		}
	}


	// From: Req4Batch92Amount250
	if ((var_1_48 * var_1_55) != var_1_55) {
		if (var_1_48 > (var_1_55 + var_1_55)) {
			var_1_14 = (var_1_13 + ((var_1_18 - var_1_30) + var_1_63));
		} else {
			var_1_14 = (3685578368u - var_1_63);
		}
	}


	// From: Req2Batch92Amount250
	var_1_10 = (max (var_1_62 , var_1_62));


	// From: Req8Batch92Amount250
	unsigned long int stepLocal_4 = var_1_63 + 10u;
	if (stepLocal_4 >= var_1_20) {
		var_1_25 = var_1_26;
	} else {
		var_1_25 = (max ((var_1_27 + 255.5f) , var_1_26));
	}


	// From: Req20Batch92Amount250
	if ((var_1_40 - var_1_38) >= var_1_39) {
		var_1_56 = (((var_1_52 - var_1_61) + var_1_62) + 2);
	} else {
		var_1_56 = (var_1_54 - (var_1_47 - var_1_13));
	}


	// From: Req9Batch92Amount250
	if (49.3 >= (var_1_41 * var_1_25)) {
		var_1_28 = ((abs (var_1_29)) - ((var_1_32 + var_1_24) + var_1_61));
	} else {
		var_1_28 = (var_1_29 - (min (var_1_20 , var_1_13)));
	}


	// From: Req13Batch92Amount250
	unsigned long int stepLocal_6 = var_1_10;
	if (! (var_1_10 != (var_1_32 * var_1_63))) {
		if (var_1_6) {
			var_1_34 = (((min (var_1_35 , var_1_36)) - var_1_37) - ((max (8.5f , var_1_38)) + var_1_39));
		} else {
			if (stepLocal_6 >= var_1_63) {
				var_1_34 = ((max (var_1_38 , var_1_37)) + var_1_39);
			} else {
				var_1_34 = (var_1_36 - var_1_40);
			}
		}
	} else {
		var_1_34 = (var_1_38 + var_1_39);
	}


	// From: Req5Batch92Amount250
	unsigned char stepLocal_1 = var_1_50;
	if (stepLocal_1 >= var_1_60) {
		var_1_19 = var_1_60;
	} else {
		if (var_1_41 != (abs (var_1_34))) {
			var_1_19 = ((var_1_20 - var_1_13) - 128);
		} else {
			var_1_19 = (var_1_13 + var_1_60);
		}
	}


	// From: Req1Batch92Amount250
	if (var_1_65) {
		if (var_1_19 > var_1_28) {
			var_1_1 = (! (! (var_1_5 || var_1_6)));
		}
	} else {
		if (var_1_19 < (var_1_30 - (31514 - var_1_62))) {
			var_1_1 = (! var_1_9);
		} else {
			var_1_1 = (var_1_9 && var_1_6);
		}
	}


	// From: Req7Batch92Amount250
	signed long int stepLocal_3 = var_1_20 + -10000;
	unsigned char stepLocal_2 = var_1_1;
	if (((- var_1_48) > (min (var_1_25 , var_1_55))) && stepLocal_2) {
		if (var_1_12 >= stepLocal_3) {
			var_1_22 = (min (var_1_13 , (var_1_30 + var_1_12)));
		} else {
			var_1_22 = ((var_1_30 + var_1_12) + (var_1_23 - var_1_13));
		}
	} else {
		var_1_22 = (var_1_24 - var_1_12);
	}


	// From: Req12Batch92Amount250
	unsigned long int stepLocal_5 = var_1_29 - var_1_13;
	if (((min (var_1_19 , var_1_14)) << var_1_32) > stepLocal_5) {
		var_1_33 = (min (var_1_20 , var_1_19));
	}


	// From: Req21Batch92Amount250
	if (var_1_1) {
		if ((var_1_50 <= (var_1_12 + var_1_24)) || (var_1_34 >= var_1_55)) {
			if ((var_1_55 + var_1_55) <= (- (var_1_40 + var_1_55))) {
				if (var_1_27 < (- var_1_35)) {
					var_1_57 = 2;
				}
			} else {
				var_1_57 = (min (var_1_12 , var_1_13));
			}
		} else {
			var_1_57 = (var_1_51 + (abs (var_1_23)));
		}
	}


	// From: Req15Batch92Amount250
	if (var_1_9) {
		if (((abs (var_1_44)) + var_1_12) != var_1_57) {
			var_1_43 = ((1491051567u + var_1_45) - var_1_18);
		}
	}


	// From: Req6Batch92Amount250
	if (var_1_18 <= var_1_12) {
		if (((var_1_50 | var_1_20) < var_1_13) || (var_1_5 && var_1_1)) {
			var_1_21 = (max (((max (2u , var_1_50)) + var_1_20) , var_1_33));
		} else {
			var_1_21 = (((min (var_1_13 , var_1_33)) + var_1_50) + var_1_20);
		}
	}


	// From: Req16Batch92Amount250
	unsigned long int stepLocal_9 = var_1_18;
	unsigned long int stepLocal_8 = var_1_21;
	if (stepLocal_8 <= (- var_1_18)) {
		if (stepLocal_9 == var_1_12) {
			var_1_46 = (((1 - var_1_13) + var_1_44) + (var_1_10 + var_1_31));
		}
	} else {
		var_1_46 = (var_1_61 - (var_1_47 - var_1_13));
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 536870912);
	assume_abort_if_not(var_1_18 <= 1073741824);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 1073741822);
	assume_abort_if_not(var_1_20 <= 2147483646);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 16383);
	assume_abort_if_not(var_1_23 <= 32767);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 32767);
	assume_abort_if_not(var_1_24 <= 65534);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854765600e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -461168.6018427382800e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 2147483647);
	assume_abort_if_not(var_1_29 <= 4294967294);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 4611686.018427382800e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 4611686.018427382800e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -461168.6018427382800e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -127);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 1073741824);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_47 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_47 >= 16383);
	assume_abort_if_not(var_1_47 <= 32766);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -230584.3009213691390e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 2305843.009213691390e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 127);
	assume_abort_if_not(var_1_52 <= 254);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 127);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 64);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_63 = var_1_63;
}

int property() {
	return ((((((((((((((((((((((((((var_1_65 ? ((var_1_19 > var_1_28) ? (var_1_1 == ((unsigned char) (! (! (var_1_5 || var_1_6))))) : 1) : ((var_1_19 < (var_1_30 - (31514 - var_1_62))) ? (var_1_1 == ((unsigned char) (! var_1_9))) : (var_1_1 == ((unsigned char) (var_1_9 && var_1_6))))) && (var_1_10 == ((unsigned long int) (max (var_1_62 , var_1_62))))) && ((8u == ((3877202530u - last_1_var_1_12) >> last_1_var_1_19)) ? (var_1_12 == ((unsigned char) (abs (var_1_13)))) : 1)) && (((var_1_48 * var_1_55) != var_1_55) ? ((var_1_48 > (var_1_55 + var_1_55)) ? (var_1_14 == ((unsigned long int) (var_1_13 + ((var_1_18 - var_1_30) + var_1_63)))) : (var_1_14 == ((unsigned long int) (3685578368u - var_1_63)))) : 1)) && ((var_1_50 >= var_1_60) ? (var_1_19 == ((signed long int) var_1_60)) : ((var_1_41 != (abs (var_1_34))) ? (var_1_19 == ((signed long int) ((var_1_20 - var_1_13) - 128))) : (var_1_19 == ((signed long int) (var_1_13 + var_1_60)))))) && ((var_1_18 <= var_1_12) ? ((((var_1_50 | var_1_20) < var_1_13) || (var_1_5 && var_1_1)) ? (var_1_21 == ((unsigned long int) (max (((max (2u , var_1_50)) + var_1_20) , var_1_33)))) : (var_1_21 == ((unsigned long int) (((min (var_1_13 , var_1_33)) + var_1_50) + var_1_20)))) : 1)) && ((((- var_1_48) > (min (var_1_25 , var_1_55))) && var_1_1) ? ((var_1_12 >= (var_1_20 + -10000)) ? (var_1_22 == ((unsigned short int) (min (var_1_13 , (var_1_30 + var_1_12))))) : (var_1_22 == ((unsigned short int) ((var_1_30 + var_1_12) + (var_1_23 - var_1_13))))) : (var_1_22 == ((unsigned short int) (var_1_24 - var_1_12))))) && (((var_1_63 + 10u) >= var_1_20) ? (var_1_25 == ((float) var_1_26)) : (var_1_25 == ((float) (max ((var_1_27 + 255.5f) , var_1_26)))))) && ((49.3 >= (var_1_41 * var_1_25)) ? (var_1_28 == ((unsigned long int) ((abs (var_1_29)) - ((var_1_32 + var_1_24) + var_1_61)))) : (var_1_28 == ((unsigned long int) (var_1_29 - (min (var_1_20 , var_1_13))))))) && (var_1_9 ? (var_1_30 == ((unsigned char) (max (var_1_13 , var_1_31)))) : 1)) && ((last_1_var_1_57 < (var_1_23 << var_1_13)) ? ((((var_1_20 >> var_1_13) + last_1_var_1_63) == (abs (var_1_18))) ? (var_1_32 == ((unsigned short int) (max (var_1_31 , last_1_var_1_32)))) : 1) : (var_1_9 ? (var_1_32 == ((unsigned short int) (last_1_var_1_43 + last_1_var_1_32))) : ((last_1_var_1_48 > var_1_26) ? (var_1_32 == ((unsigned short int) (max (last_1_var_1_50 , (var_1_24 - var_1_23))))) : (var_1_32 == ((unsigned short int) ((var_1_23 - var_1_31) + (var_1_13 + last_1_var_1_50)))))))) && ((((min (var_1_19 , var_1_14)) << var_1_32) > (var_1_29 - var_1_13)) ? (var_1_33 == ((unsigned long int) (min (var_1_20 , var_1_19)))) : 1)) && ((! (var_1_10 != (var_1_32 * var_1_63))) ? (var_1_6 ? (var_1_34 == ((float) (((min (var_1_35 , var_1_36)) - var_1_37) - ((max (8.5f , var_1_38)) + var_1_39)))) : ((var_1_10 >= var_1_63) ? (var_1_34 == ((float) ((max (var_1_38 , var_1_37)) + var_1_39))) : (var_1_34 == ((float) (var_1_36 - var_1_40))))) : (var_1_34 == ((float) (var_1_38 + var_1_39))))) && ((last_1_var_1_57 > last_1_var_1_59) ? (var_1_41 == ((float) (var_1_37 + var_1_42))) : 1)) && (var_1_9 ? ((((abs (var_1_44)) + var_1_12) != var_1_57) ? (var_1_43 == ((unsigned long int) ((1491051567u + var_1_45) - var_1_18))) : 1) : 1)) && ((var_1_21 <= (- var_1_18)) ? ((var_1_18 == var_1_12) ? (var_1_46 == ((signed short int) (((1 - var_1_13) + var_1_44) + (var_1_10 + var_1_31)))) : 1) : (var_1_46 == ((signed short int) (var_1_61 - (var_1_47 - var_1_13)))))) && ((((var_1_29 - var_1_18) * var_1_31) <= last_1_var_1_28) ? (var_1_48 == ((float) ((min (var_1_36 , 1.375f)) - var_1_40))) : ((var_1_20 >= (last_1_var_1_62 ^ last_1_var_1_46)) ? (var_1_48 == ((float) (2.2f + (var_1_49 + 9.999999999999995E14f)))) : (var_1_48 == ((float) (min (var_1_27 , var_1_37))))))) && (((var_1_13 * last_1_var_1_30) < last_1_var_1_59) ? ((last_1_var_1_21 < last_1_var_1_30) ? (var_1_50 == ((unsigned char) (min ((max (var_1_13 , (min (var_1_31 , var_1_51)))) , (var_1_52 - 10))))) : (var_1_50 == ((unsigned char) var_1_52))) : ((var_1_24 != var_1_18) ? (var_1_50 == ((unsigned char) (var_1_53 + var_1_54))) : 1))) && (var_1_55 == ((float) (var_1_37 - var_1_36)))) && (((var_1_40 - var_1_38) >= var_1_39) ? (var_1_56 == ((signed short int) (((var_1_52 - var_1_61) + var_1_62) + 2))) : (var_1_56 == ((signed short int) (var_1_54 - (var_1_47 - var_1_13)))))) && (var_1_1 ? (((var_1_50 <= (var_1_12 + var_1_24)) || (var_1_34 >= var_1_55)) ? (((var_1_55 + var_1_55) <= (- (var_1_40 + var_1_55))) ? ((var_1_27 < (- var_1_35)) ? (var_1_57 == ((unsigned short int) 2)) : 1) : (var_1_57 == ((unsigned short int) (min (var_1_12 , var_1_13))))) : (var_1_57 == ((unsigned short int) (var_1_51 + (abs (var_1_23)))))) : 1)) && (var_1_59 == ((unsigned short int) var_1_51))) && (var_1_60 == ((unsigned long int) var_1_13))) && (var_1_65 ? (var_1_61 == ((signed short int) var_1_13)) : 1)) && (var_1_65 ? (var_1_62 == ((unsigned char) var_1_52)) : (var_1_62 == ((unsigned char) var_1_52)))) && (var_1_65 ? ((var_1_5 || var_1_6) ? (var_1_63 == ((unsigned char) (var_1_52 - (max (var_1_54 , (var_1_64 + 2)))))) : 1) : 1)) && (var_1_65 == ((unsigned char) var_1_6))
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
