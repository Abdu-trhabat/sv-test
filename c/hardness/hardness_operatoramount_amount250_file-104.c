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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch104Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned short int var_1_7 = 16;
double var_1_8 = 2.75;
unsigned short int var_1_9 = 51633;
unsigned short int var_1_10 = 5;
unsigned short int var_1_11 = 16;
unsigned short int var_1_12 = 128;
unsigned short int var_1_13 = 10;
signed char var_1_14 = -50;
signed char var_1_15 = 0;
signed char var_1_16 = 8;
signed char var_1_17 = -2;
float var_1_18 = 4.4;
float var_1_19 = 64.45;
float var_1_20 = 16.5;
float var_1_21 = 64.25;
float var_1_22 = 16.5;
float var_1_23 = 1.2;
float var_1_24 = 256.75;
unsigned char var_1_25 = 0;
unsigned long int var_1_26 = 32;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
float var_1_29 = 7.8;
float var_1_30 = 0.0;
float var_1_31 = 0.12;
float var_1_32 = 0.0;
float var_1_33 = 31.175;
float var_1_34 = 63.5;
signed long int var_1_35 = 1;
signed long int var_1_37 = 1;
signed long int var_1_38 = 50;
signed char var_1_39 = 8;
signed char var_1_40 = -32;
signed char var_1_41 = 2;
signed char var_1_42 = 1;
signed char var_1_43 = 16;
signed char var_1_44 = 50;
signed char var_1_45 = -25;
unsigned long int var_1_46 = 16;
unsigned long int var_1_47 = 2623028594;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 0;
unsigned long int var_1_51 = 32;
unsigned long int var_1_52 = 3684035665;
unsigned long int var_1_53 = 1000000000;
unsigned short int var_1_54 = 25;
unsigned short int var_1_55 = 29601;
float var_1_56 = 64.9;
float var_1_57 = 5.5;
signed short int var_1_58 = 0;
double var_1_59 = 128.2;
unsigned char var_1_60 = 1;
signed short int var_1_61 = -256;
unsigned char var_1_63 = 0;
unsigned short int var_1_64 = 2;
signed short int var_1_65 = -1000;
signed char var_1_66 = -5;
float var_1_67 = 24.75;
unsigned char var_1_68 = 1;

// Calibration values

// Last'ed variables
float last_1_var_1_22 = 16.5;
unsigned char last_1_var_1_25 = 0;
signed char last_1_var_1_45 = -25;
unsigned char last_1_var_1_60 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req14Batch104Amount250
	signed char stepLocal_5 = var_1_40;
	if (stepLocal_5 >= (var_1_44 << var_1_16)) {
		if (last_1_var_1_25) {
			var_1_51 = (var_1_47 - var_1_37);
		} else {
			if (! last_1_var_1_60) {
				if (last_1_var_1_60) {
					var_1_51 = ((var_1_52 - var_1_12) - var_1_11);
				} else {
					var_1_51 = (abs (var_1_47));
				}
			}
		}
	} else {
		if (last_1_var_1_22 > var_1_21) {
			var_1_51 = (abs (var_1_44));
		} else {
			var_1_51 = (((var_1_13 + var_1_44) + (var_1_53 - var_1_12)) + var_1_43);
		}
	}


	// From: Req18Batch104Amount250
	signed long int stepLocal_8 = -5;
	unsigned long int stepLocal_7 = var_1_12 * var_1_51;
	if (var_1_51 >= stepLocal_7) {
		if (stepLocal_8 > (abs (var_1_52))) {
			var_1_60 = (var_1_27 || var_1_6);
		} else {
			var_1_60 = ((! var_1_28) && var_1_6);
		}
	} else {
		var_1_60 = (! (var_1_5 || var_1_4));
	}


	// From: Req2Batch104Amount250
	if (var_1_5) {
		if (! ((- var_1_8) == 0.54)) {
			var_1_7 = ((var_1_9 - (min (var_1_10 , var_1_11))) - (var_1_12 + var_1_13));
		} else {
			var_1_7 = (min (var_1_10 , var_1_12));
		}
	}


	// From: Req3Batch104Amount250
	signed long int stepLocal_0 = 64;
	if (var_1_9 <= stepLocal_0) {
		var_1_14 = (max (var_1_15 , (min (var_1_16 , var_1_17))));
	} else {
		var_1_14 = var_1_15;
	}


	// From: Req4Batch104Amount250
	var_1_18 = (var_1_19 - (var_1_20 + var_1_21));


	// From: Req5Batch104Amount250
	if (((var_1_19 + var_1_20) / var_1_23) <= (min (var_1_18 , var_1_21))) {
		var_1_22 = (var_1_21 + var_1_20);
	} else {
		if (var_1_18 >= var_1_19) {
			var_1_22 = (min ((max ((var_1_24 - var_1_20) , 15.4f)) , 16.5f));
		} else {
			var_1_22 = var_1_24;
		}
	}


	// From: Req7Batch104Amount250
	unsigned long int stepLocal_2 = var_1_26 * var_1_12;
	unsigned char stepLocal_1 = var_1_6;
	if (stepLocal_1 || var_1_27) {
		if (1000000u != stepLocal_2) {
			var_1_29 = 4.4f;
		} else {
			var_1_29 = (((var_1_30 - var_1_31) - (var_1_32 - var_1_33)) + (min (var_1_20 , (var_1_21 - var_1_34))));
		}
	}


	// From: Req9Batch104Amount250
	if (var_1_27) {
		if (var_1_51 <= var_1_26) {
			var_1_39 = (var_1_40 + (max ((var_1_41 + var_1_42) , (var_1_43 - var_1_44))));
		}
	}


	// From: Req10Batch104Amount250
	signed long int stepLocal_3 = - var_1_38;
	if (stepLocal_3 >= (last_1_var_1_45 * var_1_51)) {
		var_1_45 = (var_1_43 - var_1_44);
	} else {
		var_1_45 = (min (var_1_42 , var_1_41));
	}


	// From: Req16Batch104Amount250
	if (var_1_21 >= (1000.6f * var_1_19)) {
		var_1_56 = (abs (1.00000000075E9f - var_1_31));
	} else {
		var_1_56 = ((max (63.8f , var_1_31)) + ((min (var_1_33 , 3.4f)) + var_1_57));
	}


	// From: Req20Batch104Amount250
	if (var_1_6) {
		var_1_63 = var_1_49;
	}


	// From: Req21Batch104Amount250
	if (var_1_4) {
		var_1_64 = var_1_55;
	} else {
		var_1_64 = var_1_13;
	}


	// From: Req22Batch104Amount250
	var_1_65 = (max (((var_1_15 + var_1_41) + var_1_13) , (var_1_10 - var_1_12)));


	// From: Req23Batch104Amount250
	var_1_66 = var_1_44;


	// From: Req24Batch104Amount250
	var_1_67 = var_1_19;


	// From: Req25Batch104Amount250
	var_1_68 = var_1_28;


	// From: Req6Batch104Amount250
	if (var_1_19 == (abs (var_1_29))) {
		if (var_1_6) {
			var_1_25 = ((var_1_27 || var_1_28) || (! var_1_4));
		}
	}


	// From: Req11Batch104Amount250
	if (var_1_28) {
		var_1_46 = (max ((var_1_47 - var_1_37) , var_1_13));
	} else {
		if (var_1_21 <= (- var_1_67)) {
			var_1_46 = (50u + var_1_44);
		}
	}


	// From: Req17Batch104Amount250
	if ((min (var_1_24 , var_1_67)) < var_1_34) {
		if (var_1_59 > (var_1_34 / var_1_23)) {
			var_1_58 = (min ((abs (var_1_15)) , (var_1_11 - var_1_13)));
		} else {
			var_1_58 = (min (var_1_17 , (max (-8 , var_1_42))));
		}
	} else {
		var_1_58 = (min ((min ((var_1_11 - var_1_10) , var_1_46)) , var_1_12));
	}


	// From: Req1Batch104Amount250
	if (100 > (min (var_1_46 , var_1_51))) {
		var_1_1 = var_1_4;
	} else {
		var_1_1 = ((! (var_1_4 || var_1_5)) || var_1_6);
	}


	// From: Req8Batch104Amount250
	if (var_1_51 < var_1_46) {
		if (var_1_15 < (var_1_17 * var_1_51)) {
			var_1_35 = (var_1_11 - (1969779236 - var_1_37));
		}
	} else {
		if (var_1_13 != var_1_7) {
			var_1_35 = (max ((abs (var_1_38)) , (max (var_1_7 , var_1_37))));
		} else {
			if (var_1_19 <= (var_1_18 * var_1_24)) {
				var_1_35 = (8 + ((var_1_9 + 128) + var_1_15));
			} else {
				if ((var_1_45 != var_1_12) || var_1_28) {
					var_1_35 = -16;
				} else {
					var_1_35 = var_1_12;
				}
			}
		}
	}


	// From: Req12Batch104Amount250
	if ((var_1_12 - var_1_43) > (var_1_35 % var_1_9)) {
		if (((var_1_9 - var_1_43) * var_1_26) <= var_1_7) {
			var_1_48 = 0;
		}
	} else {
		if ((var_1_18 * var_1_30) <= (var_1_33 + (min (var_1_8 , var_1_23)))) {
			var_1_48 = ((! (var_1_60 && var_1_6)) && (var_1_4 || (var_1_5 && var_1_49)));
		} else {
			var_1_48 = (var_1_27 && var_1_28);
		}
	}


	// From: Req15Batch104Amount250
	signed long int stepLocal_6 = 10;
	if (! var_1_1) {
		var_1_54 = (var_1_9 - var_1_44);
	} else {
		if (! var_1_5) {
			if (stepLocal_6 > (var_1_44 - (abs (var_1_37)))) {
				var_1_54 = ((max (var_1_12 , var_1_43)) + 4);
			} else {
				var_1_54 = (abs (var_1_9 - var_1_10));
			}
		} else {
			var_1_54 = ((var_1_11 + (min (var_1_43 , var_1_13))) + (var_1_55 - var_1_10));
		}
	}


	// From: Req19Batch104Amount250
	unsigned short int stepLocal_9 = var_1_54;
	if (stepLocal_9 != var_1_35) {
		var_1_61 = (var_1_15 + var_1_10);
	}


	// From: Req13Batch104Amount250
	signed long int stepLocal_4 = var_1_10 + var_1_35;
	if (stepLocal_4 >= (max (var_1_54 , var_1_16))) {
		if (var_1_27) {
			var_1_50 = ((var_1_4 && var_1_5) && ((! var_1_28) && var_1_49));
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 49150);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16383);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16384);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -127);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	assume_abort_if_not(var_1_23 != 0.0F);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967295);
	assume_abort_if_not(var_1_26 != 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 2305843.009213691400e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 2305843.009213691400e+12F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691400e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 1073741823);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= -2147483646);
	assume_abort_if_not(var_1_38 <= 2147483646);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -31);
	assume_abort_if_not(var_1_41 <= 32);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -31);
	assume_abort_if_not(var_1_42 <= 31);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 2147483647);
	assume_abort_if_not(var_1_47 <= 4294967294);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 3221225470);
	assume_abort_if_not(var_1_52 <= 4294967294);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 536870911);
	assume_abort_if_not(var_1_53 <= 1073741823);
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 16383);
	assume_abort_if_not(var_1_55 <= 32767);
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= -230584.3009213691400e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691400e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -922337.2036854776000e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_22 = var_1_22;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_60 = var_1_60;
}

int property(void) {
	return (((((((((((((((((((((((((100 > (min (var_1_46 , var_1_51))) ? (var_1_1 == ((unsigned char) var_1_4)) : (var_1_1 == ((unsigned char) ((! (var_1_4 || var_1_5)) || var_1_6)))) && (var_1_5 ? ((! ((- var_1_8) == 0.54)) ? (var_1_7 == ((unsigned short int) ((var_1_9 - (min (var_1_10 , var_1_11))) - (var_1_12 + var_1_13)))) : (var_1_7 == ((unsigned short int) (min (var_1_10 , var_1_12))))) : 1)) && ((var_1_9 <= 64) ? (var_1_14 == ((signed char) (max (var_1_15 , (min (var_1_16 , var_1_17)))))) : (var_1_14 == ((signed char) var_1_15)))) && (var_1_18 == ((float) (var_1_19 - (var_1_20 + var_1_21))))) && ((((var_1_19 + var_1_20) / var_1_23) <= (min (var_1_18 , var_1_21))) ? (var_1_22 == ((float) (var_1_21 + var_1_20))) : ((var_1_18 >= var_1_19) ? (var_1_22 == ((float) (min ((max ((var_1_24 - var_1_20) , 15.4f)) , 16.5f)))) : (var_1_22 == ((float) var_1_24))))) && ((var_1_19 == (abs (var_1_29))) ? (var_1_6 ? (var_1_25 == ((unsigned char) ((var_1_27 || var_1_28) || (! var_1_4)))) : 1) : 1)) && ((var_1_6 || var_1_27) ? ((1000000u != (var_1_26 * var_1_12)) ? (var_1_29 == ((float) 4.4f)) : (var_1_29 == ((float) (((var_1_30 - var_1_31) - (var_1_32 - var_1_33)) + (min (var_1_20 , (var_1_21 - var_1_34))))))) : 1)) && ((var_1_51 < var_1_46) ? ((var_1_15 < (var_1_17 * var_1_51)) ? (var_1_35 == ((signed long int) (var_1_11 - (1969779236 - var_1_37)))) : 1) : ((var_1_13 != var_1_7) ? (var_1_35 == ((signed long int) (max ((abs (var_1_38)) , (max (var_1_7 , var_1_37)))))) : ((var_1_19 <= (var_1_18 * var_1_24)) ? (var_1_35 == ((signed long int) (8 + ((var_1_9 + 128) + var_1_15)))) : (((var_1_45 != var_1_12) || var_1_28) ? (var_1_35 == ((signed long int) -16)) : (var_1_35 == ((signed long int) var_1_12))))))) && (var_1_27 ? ((var_1_51 <= var_1_26) ? (var_1_39 == ((signed char) (var_1_40 + (max ((var_1_41 + var_1_42) , (var_1_43 - var_1_44)))))) : 1) : 1)) && (((- var_1_38) >= (last_1_var_1_45 * var_1_51)) ? (var_1_45 == ((signed char) (var_1_43 - var_1_44))) : (var_1_45 == ((signed char) (min (var_1_42 , var_1_41)))))) && (var_1_28 ? (var_1_46 == ((unsigned long int) (max ((var_1_47 - var_1_37) , var_1_13)))) : ((var_1_21 <= (- var_1_67)) ? (var_1_46 == ((unsigned long int) (50u + var_1_44))) : 1))) && (((var_1_12 - var_1_43) > (var_1_35 % var_1_9)) ? ((((var_1_9 - var_1_43) * var_1_26) <= var_1_7) ? (var_1_48 == ((unsigned char) 0)) : 1) : (((var_1_18 * var_1_30) <= (var_1_33 + (min (var_1_8 , var_1_23)))) ? (var_1_48 == ((unsigned char) ((! (var_1_60 && var_1_6)) && (var_1_4 || (var_1_5 && var_1_49))))) : (var_1_48 == ((unsigned char) (var_1_27 && var_1_28)))))) && (((var_1_10 + var_1_35) >= (max (var_1_54 , var_1_16))) ? (var_1_27 ? (var_1_50 == ((unsigned char) ((var_1_4 && var_1_5) && ((! var_1_28) && var_1_49)))) : 1) : 1)) && ((var_1_40 >= (var_1_44 << var_1_16)) ? (last_1_var_1_25 ? (var_1_51 == ((unsigned long int) (var_1_47 - var_1_37))) : ((! last_1_var_1_60) ? (last_1_var_1_60 ? (var_1_51 == ((unsigned long int) ((var_1_52 - var_1_12) - var_1_11))) : (var_1_51 == ((unsigned long int) (abs (var_1_47))))) : 1)) : ((last_1_var_1_22 > var_1_21) ? (var_1_51 == ((unsigned long int) (abs (var_1_44)))) : (var_1_51 == ((unsigned long int) (((var_1_13 + var_1_44) + (var_1_53 - var_1_12)) + var_1_43)))))) && ((! var_1_1) ? (var_1_54 == ((unsigned short int) (var_1_9 - var_1_44))) : ((! var_1_5) ? ((10 > (var_1_44 - (abs (var_1_37)))) ? (var_1_54 == ((unsigned short int) ((max (var_1_12 , var_1_43)) + 4))) : (var_1_54 == ((unsigned short int) (abs (var_1_9 - var_1_10))))) : (var_1_54 == ((unsigned short int) ((var_1_11 + (min (var_1_43 , var_1_13))) + (var_1_55 - var_1_10))))))) && ((var_1_21 >= (1000.6f * var_1_19)) ? (var_1_56 == ((float) (abs (1.00000000075E9f - var_1_31)))) : (var_1_56 == ((float) ((max (63.8f , var_1_31)) + ((min (var_1_33 , 3.4f)) + var_1_57)))))) && (((min (var_1_24 , var_1_67)) < var_1_34) ? ((var_1_59 > (var_1_34 / var_1_23)) ? (var_1_58 == ((signed short int) (min ((abs (var_1_15)) , (var_1_11 - var_1_13))))) : (var_1_58 == ((signed short int) (min (var_1_17 , (max (-8 , var_1_42))))))) : (var_1_58 == ((signed short int) (min ((min ((var_1_11 - var_1_10) , var_1_46)) , var_1_12)))))) && ((var_1_51 >= (var_1_12 * var_1_51)) ? ((-5 > (abs (var_1_52))) ? (var_1_60 == ((unsigned char) (var_1_27 || var_1_6))) : (var_1_60 == ((unsigned char) ((! var_1_28) && var_1_6)))) : (var_1_60 == ((unsigned char) (! (var_1_5 || var_1_4)))))) && ((var_1_54 != var_1_35) ? (var_1_61 == ((signed short int) (var_1_15 + var_1_10))) : 1)) && (var_1_6 ? (var_1_63 == ((unsigned char) var_1_49)) : 1)) && (var_1_4 ? (var_1_64 == ((unsigned short int) var_1_55)) : (var_1_64 == ((unsigned short int) var_1_13)))) && (var_1_65 == ((signed short int) (max (((var_1_15 + var_1_41) + var_1_13) , (var_1_10 - var_1_12)))))) && (var_1_66 == ((signed char) var_1_44))) && (var_1_67 == ((float) var_1_19))) && (var_1_68 == ((unsigned char) var_1_28))
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
