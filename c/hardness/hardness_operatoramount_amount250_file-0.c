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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch0Amount250.c", 13, "reach_error"); }
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
signed short int var_1_1 = 64;
double var_1_2 = 99999999999.3;
double var_1_3 = 1.7;
double var_1_4 = 16.75;
signed short int var_1_5 = 1;
signed short int var_1_6 = 2;
signed short int var_1_7 = 128;
signed short int var_1_8 = 16;
signed short int var_1_9 = -5;
double var_1_10 = 128.6;
double var_1_12 = 64.15;
double var_1_13 = 0.5;
double var_1_14 = 24.875;
double var_1_15 = 500.5;
double var_1_16 = 3.8;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 1;
signed short int var_1_19 = 64;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
signed short int var_1_23 = 5;
signed short int var_1_24 = -256;
signed short int var_1_25 = -1;
signed short int var_1_26 = 2;
signed short int var_1_27 = 128;
signed long int var_1_28 = -2;
unsigned short int var_1_29 = 5;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 200;
unsigned char var_1_32 = 64;
unsigned char var_1_33 = 100;
unsigned char var_1_34 = 32;
signed long int var_1_35 = 32;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
float var_1_40 = 2.125;
unsigned char var_1_41 = 1;
signed char var_1_42 = 5;
signed short int var_1_43 = -50;
signed long int var_1_44 = 50;
unsigned long int var_1_45 = 2;
unsigned long int var_1_46 = 1;
signed long int var_1_47 = 1000000000;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 0;
signed char var_1_53 = 16;
float var_1_54 = 25.25;
signed char var_1_55 = 2;
float var_1_56 = 0.4;
signed short int var_1_57 = -2;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_9 = -5;
signed short int last_1_var_1_26 = 2;
signed long int last_1_var_1_28 = -2;
unsigned char last_1_var_1_38 = 0;
unsigned char last_1_var_1_41 = 1;
signed short int last_1_var_1_43 = -50;
signed long int last_1_var_1_44 = 50;
unsigned char last_1_var_1_51 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req15Batch0Amount250
	signed short int stepLocal_4 = var_1_5;
	if (var_1_2 < (var_1_3 * 10.5)) {
		if (var_1_32 > stepLocal_4) {
			var_1_38 = ((var_1_21 && var_1_18) && (last_1_var_1_41 || (last_1_var_1_38 || var_1_20)));
		} else {
			var_1_38 = (var_1_22 || var_1_39);
		}
	}


	// From: Req12Batch0Amount250
	unsigned char stepLocal_3 = var_1_20 || var_1_21;
	signed long int stepLocal_2 = (var_1_19 - var_1_7) * last_1_var_1_43;
	if (last_1_var_1_44 <= stepLocal_2) {
		var_1_35 = (last_1_var_1_9 - ((min (var_1_34 , last_1_var_1_28)) + (min (var_1_6 , var_1_31))));
	} else {
		if (stepLocal_3 || (var_1_5 >= (var_1_7 - var_1_19))) {
			if (var_1_21) {
				var_1_35 = (last_1_var_1_26 + last_1_var_1_9);
			}
		}
	}


	// From: Req21Batch0Amount250
	signed long int stepLocal_9 = var_1_47 & var_1_6;
	if (stepLocal_9 <= var_1_35) {
		var_1_48 = (var_1_22 && (var_1_39 || (var_1_49 || var_1_50)));
	} else {
		var_1_48 = (var_1_20 && var_1_18);
	}


	// From: Req3Batch0Amount250
	if (last_1_var_1_51) {
		if ((var_1_4 * (var_1_2 - var_1_3)) <= var_1_12) {
			var_1_10 = var_1_13;
		} else {
			var_1_10 = ((var_1_14 + var_1_15) - var_1_16);
		}
	}


	// From: Req1Batch0Amount250
	if ((var_1_2 - var_1_3) == (- var_1_10)) {
		if (var_1_3 <= ((var_1_10 * 1.5) + 127.4)) {
			var_1_1 = (var_1_5 - ((var_1_6 + var_1_7) + var_1_8));
		} else {
			var_1_1 = (min ((var_1_8 - (var_1_7 + var_1_6)) , var_1_5));
		}
	} else {
		var_1_1 = (var_1_8 - (var_1_6 + var_1_7));
	}


	// From: Req2Batch0Amount250
	var_1_9 = ((max (var_1_7 , var_1_5)) - (max ((27761 - var_1_6) , var_1_8)));


	// From: Req5Batch0Amount250
	unsigned char stepLocal_0 = var_1_48;
	if (stepLocal_0 || (var_1_6 <= var_1_7)) {
		var_1_23 = (min (var_1_24 , 5));
	}


	// From: Req6Batch0Amount250
	if (var_1_21) {
		if (var_1_14 >= (- 31.9)) {
			var_1_25 = (min (((max (var_1_6 , var_1_7)) + var_1_8) , -5));
		} else {
			var_1_25 = (var_1_7 + var_1_6);
		}
	}


	// From: Req7Batch0Amount250
	if (var_1_22) {
		var_1_26 = (var_1_7 + var_1_8);
	} else {
		var_1_26 = (min (var_1_6 , var_1_7));
	}


	// From: Req8Batch0Amount250
	signed short int stepLocal_1 = var_1_6;
	if (var_1_7 < stepLocal_1) {
		var_1_27 = (max (var_1_6 , (min (var_1_5 , var_1_7))));
	}


	// From: Req9Batch0Amount250
	if (var_1_21) {
		var_1_28 = ((max (var_1_6 , 1000)) - var_1_19);
	}


	// From: Req10Batch0Amount250
	var_1_29 = (var_1_7 + var_1_8);


	// From: Req11Batch0Amount250
	if (((var_1_31 - var_1_32) - var_1_33) != var_1_25) {
		var_1_30 = var_1_33;
	} else {
		if ((var_1_7 - var_1_6) != var_1_25) {
			var_1_30 = (max (var_1_32 , (max (var_1_33 , var_1_34))));
		} else {
			var_1_30 = var_1_32;
		}
	}


	// From: Req13Batch0Amount250
	if ((max ((min (var_1_2 , var_1_3)) , var_1_13)) > var_1_16) {
		var_1_36 = 0;
	}


	// From: Req18Batch0Amount250
	if (! var_1_39) {
		var_1_42 = (abs (var_1_32));
	}


	// From: Req19Batch0Amount250
	var_1_43 = (var_1_32 - 5);


	// From: Req23Batch0Amount250
	if (var_1_39) {
		var_1_53 = var_1_32;
	}


	// From: Req24Batch0Amount250
	var_1_54 = var_1_13;


	// From: Req25Batch0Amount250
	if (var_1_39) {
		var_1_55 = -50;
	}


	// From: Req26Batch0Amount250
	if (var_1_52 || var_1_18) {
		var_1_56 = (var_1_15 + var_1_14);
	}


	// From: Req27Batch0Amount250
	if (var_1_49) {
		if (var_1_34 <= var_1_24) {
			if (var_1_20) {
				var_1_57 = (var_1_31 + var_1_6);
			}
		} else {
			var_1_57 = var_1_34;
		}
	} else {
		var_1_57 = var_1_46;
	}


	// From: Req4Batch0Amount250
	if (var_1_14 >= (var_1_16 + var_1_3)) {
		if ((var_1_35 + 10) >= ((-500 + var_1_5) * var_1_7)) {
			if ((min (var_1_8 , var_1_35)) >= var_1_5) {
				var_1_17 = (! (! var_1_18));
			}
		}
	} else {
		if (var_1_7 == ((var_1_8 + var_1_6) - var_1_19)) {
			var_1_17 = ((var_1_48 && var_1_18) || var_1_20);
		} else {
			if ((- var_1_8) == var_1_19) {
				var_1_17 = (! (var_1_20 && var_1_18));
			} else {
				if (var_1_20) {
					if (var_1_18) {
						var_1_17 = ((var_1_16 != (- 9.125)) || var_1_21);
					} else {
						var_1_17 = var_1_22;
					}
				}
			}
		}
	}


	// From: Req20Batch0Amount250
	signed short int stepLocal_8 = var_1_5;
	signed long int stepLocal_7 = var_1_33 >> (min (var_1_45 , var_1_46));
	unsigned long int stepLocal_6 = var_1_45 - var_1_46;
	if (stepLocal_7 <= ((var_1_6 % var_1_31) & -25)) {
		if (var_1_38) {
			if (stepLocal_8 >= var_1_31) {
				var_1_44 = var_1_45;
			} else {
				var_1_44 = ((min ((var_1_46 + var_1_34) , (abs (var_1_33)))) - var_1_25);
			}
		} else {
			if (stepLocal_6 <= ((3294629264u - var_1_8) + (last_1_var_1_44 + var_1_28))) {
				var_1_44 = (var_1_34 - ((var_1_47 + 1000000000) - (abs (-10))));
			}
		}
	}


	// From: Req14Batch0Amount250
	if ((var_1_6 > var_1_29) || var_1_36) {
		if (! var_1_36) {
			var_1_37 = (! (var_1_20 && var_1_18));
		}
	} else {
		if (var_1_35 > var_1_57) {
			var_1_37 = ((! var_1_21) || (! var_1_20));
		} else {
			if (var_1_22 || (var_1_57 >= (max (var_1_35 , var_1_33)))) {
				var_1_37 = ((var_1_10 > var_1_2) || var_1_21);
			}
		}
	}


	// From: Req22Batch0Amount250
	if (var_1_10 >= var_1_14) {
		var_1_51 = (var_1_37 || var_1_20);
	} else {
		var_1_51 = ((var_1_9 < (max (var_1_29 , var_1_8))) || var_1_52);
	}


	// From: Req16Batch0Amount250
	signed long int stepLocal_5 = var_1_44;
	if (var_1_7 >= stepLocal_5) {
		var_1_40 = (max (var_1_15 , var_1_14));
	}


	// From: Req17Batch0Amount250
	if (var_1_38 || var_1_17) {
		if (var_1_19 == (min ((16 - var_1_8) , var_1_7))) {
			var_1_41 = (! (! var_1_22));
		} else {
			if ((! 1) || var_1_20) {
				var_1_41 = var_1_22;
			}
		}
	} else {
		var_1_41 = ((var_1_18 && var_1_22) || (var_1_20 && var_1_39));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 8192);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 8191);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32767);
	assume_abort_if_not(var_1_24 <= 32766);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 191);
	assume_abort_if_not(var_1_31 <= 255);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 64);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 7);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 7);
	var_1_47 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_47 >= 536870911);
	assume_abort_if_not(var_1_47 <= 1073741823);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 0);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 1);
	assume_abort_if_not(var_1_52 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_51 = var_1_51;
}

int property(void) {
	return ((((((((((((((((((((((((((((var_1_2 - var_1_3) == (- var_1_10)) ? ((var_1_3 <= ((var_1_10 * 1.5) + 127.4)) ? (var_1_1 == ((signed short int) (var_1_5 - ((var_1_6 + var_1_7) + var_1_8)))) : (var_1_1 == ((signed short int) (min ((var_1_8 - (var_1_7 + var_1_6)) , var_1_5))))) : (var_1_1 == ((signed short int) (var_1_8 - (var_1_6 + var_1_7))))) && (var_1_9 == ((signed short int) ((max (var_1_7 , var_1_5)) - (max ((27761 - var_1_6) , var_1_8)))))) && (last_1_var_1_51 ? (((var_1_4 * (var_1_2 - var_1_3)) <= var_1_12) ? (var_1_10 == ((double) var_1_13)) : (var_1_10 == ((double) ((var_1_14 + var_1_15) - var_1_16)))) : 1)) && ((var_1_14 >= (var_1_16 + var_1_3)) ? (((var_1_35 + 10) >= ((-500 + var_1_5) * var_1_7)) ? (((min (var_1_8 , var_1_35)) >= var_1_5) ? (var_1_17 == ((unsigned char) (! (! var_1_18)))) : 1) : 1) : ((var_1_7 == ((var_1_8 + var_1_6) - var_1_19)) ? (var_1_17 == ((unsigned char) ((var_1_48 && var_1_18) || var_1_20))) : (((- var_1_8) == var_1_19) ? (var_1_17 == ((unsigned char) (! (var_1_20 && var_1_18)))) : (var_1_20 ? (var_1_18 ? (var_1_17 == ((unsigned char) ((var_1_16 != (- 9.125)) || var_1_21))) : (var_1_17 == ((unsigned char) var_1_22))) : 1))))) && ((var_1_48 || (var_1_6 <= var_1_7)) ? (var_1_23 == ((signed short int) (min (var_1_24 , 5)))) : 1)) && (var_1_21 ? ((var_1_14 >= (- 31.9)) ? (var_1_25 == ((signed short int) (min (((max (var_1_6 , var_1_7)) + var_1_8) , -5)))) : (var_1_25 == ((signed short int) (var_1_7 + var_1_6)))) : 1)) && (var_1_22 ? (var_1_26 == ((signed short int) (var_1_7 + var_1_8))) : (var_1_26 == ((signed short int) (min (var_1_6 , var_1_7)))))) && ((var_1_7 < var_1_6) ? (var_1_27 == ((signed short int) (max (var_1_6 , (min (var_1_5 , var_1_7)))))) : 1)) && (var_1_21 ? (var_1_28 == ((signed long int) ((max (var_1_6 , 1000)) - var_1_19))) : 1)) && (var_1_29 == ((unsigned short int) (var_1_7 + var_1_8)))) && ((((var_1_31 - var_1_32) - var_1_33) != var_1_25) ? (var_1_30 == ((unsigned char) var_1_33)) : (((var_1_7 - var_1_6) != var_1_25) ? (var_1_30 == ((unsigned char) (max (var_1_32 , (max (var_1_33 , var_1_34)))))) : (var_1_30 == ((unsigned char) var_1_32))))) && ((last_1_var_1_44 <= ((var_1_19 - var_1_7) * last_1_var_1_43)) ? (var_1_35 == ((signed long int) (last_1_var_1_9 - ((min (var_1_34 , last_1_var_1_28)) + (min (var_1_6 , var_1_31)))))) : (((var_1_20 || var_1_21) || (var_1_5 >= (var_1_7 - var_1_19))) ? (var_1_21 ? (var_1_35 == ((signed long int) (last_1_var_1_26 + last_1_var_1_9))) : 1) : 1))) && (((max ((min (var_1_2 , var_1_3)) , var_1_13)) > var_1_16) ? (var_1_36 == ((unsigned char) 0)) : 1)) && (((var_1_6 > var_1_29) || var_1_36) ? ((! var_1_36) ? (var_1_37 == ((unsigned char) (! (var_1_20 && var_1_18)))) : 1) : ((var_1_35 > var_1_57) ? (var_1_37 == ((unsigned char) ((! var_1_21) || (! var_1_20)))) : ((var_1_22 || (var_1_57 >= (max (var_1_35 , var_1_33)))) ? (var_1_37 == ((unsigned char) ((var_1_10 > var_1_2) || var_1_21))) : 1)))) && ((var_1_2 < (var_1_3 * 10.5)) ? ((var_1_32 > var_1_5) ? (var_1_38 == ((unsigned char) ((var_1_21 && var_1_18) && (last_1_var_1_41 || (last_1_var_1_38 || var_1_20))))) : (var_1_38 == ((unsigned char) (var_1_22 || var_1_39)))) : 1)) && ((var_1_7 >= var_1_44) ? (var_1_40 == ((float) (max (var_1_15 , var_1_14)))) : 1)) && ((var_1_38 || var_1_17) ? ((var_1_19 == (min ((16 - var_1_8) , var_1_7))) ? (var_1_41 == ((unsigned char) (! (! var_1_22)))) : (((! 1) || var_1_20) ? (var_1_41 == ((unsigned char) var_1_22)) : 1)) : (var_1_41 == ((unsigned char) ((var_1_18 && var_1_22) || (var_1_20 && var_1_39)))))) && ((! var_1_39) ? (var_1_42 == ((signed char) (abs (var_1_32)))) : 1)) && (var_1_43 == ((signed short int) (var_1_32 - 5)))) && (((var_1_33 >> (min (var_1_45 , var_1_46))) <= ((var_1_6 % var_1_31) & -25)) ? (var_1_38 ? ((var_1_5 >= var_1_31) ? (var_1_44 == ((signed long int) var_1_45)) : (var_1_44 == ((signed long int) ((min ((var_1_46 + var_1_34) , (abs (var_1_33)))) - var_1_25)))) : (((var_1_45 - var_1_46) <= ((3294629264u - var_1_8) + (last_1_var_1_44 + var_1_28))) ? (var_1_44 == ((signed long int) (var_1_34 - ((var_1_47 + 1000000000) - (abs (-10)))))) : 1)) : 1)) && (((var_1_47 & var_1_6) <= var_1_35) ? (var_1_48 == ((unsigned char) (var_1_22 && (var_1_39 || (var_1_49 || var_1_50))))) : (var_1_48 == ((unsigned char) (var_1_20 && var_1_18))))) && ((var_1_10 >= var_1_14) ? (var_1_51 == ((unsigned char) (var_1_37 || var_1_20))) : (var_1_51 == ((unsigned char) ((var_1_9 < (max (var_1_29 , var_1_8))) || var_1_52))))) && (var_1_39 ? (var_1_53 == ((signed char) var_1_32)) : 1)) && (var_1_54 == ((float) var_1_13))) && (var_1_39 ? (var_1_55 == ((signed char) -50)) : 1)) && ((var_1_52 || var_1_18) ? (var_1_56 == ((float) (var_1_15 + var_1_14))) : 1)) && (var_1_49 ? ((var_1_34 <= var_1_24) ? (var_1_20 ? (var_1_57 == ((signed short int) (var_1_31 + var_1_6))) : 1) : (var_1_57 == ((signed short int) var_1_34))) : (var_1_57 == ((signed short int) var_1_46)))
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
