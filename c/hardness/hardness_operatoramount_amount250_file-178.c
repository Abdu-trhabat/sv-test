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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch178Amount250.c", 13, "reach_error"); }
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
signed long int var_1_1 = -32;
signed long int var_1_4 = -25;
double var_1_5 = 4.4;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
double var_1_8 = 10000000.75;
double var_1_9 = 99999.75;
unsigned char var_1_10 = 25;
unsigned char var_1_13 = 128;
unsigned char var_1_14 = 128;
unsigned char var_1_15 = 16;
unsigned char var_1_16 = 4;
double var_1_17 = 63.9;
double var_1_18 = 127.5;
double var_1_19 = 4.5;
double var_1_20 = 15.5;
signed long int var_1_21 = -50;
signed char var_1_22 = 2;
signed char var_1_23 = 0;
signed char var_1_24 = 100;
signed char var_1_25 = -2;
signed char var_1_26 = 10;
unsigned short int var_1_27 = 256;
double var_1_28 = 255.25;
unsigned short int var_1_29 = 32;
unsigned short int var_1_30 = 49088;
unsigned long int var_1_31 = 2;
unsigned long int var_1_32 = 1209678734;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
float var_1_36 = 31.5;
unsigned long int var_1_37 = 2282958566;
unsigned long int var_1_38 = 3430554551;
unsigned long int var_1_39 = 25;
unsigned char var_1_40 = 10;
signed long int var_1_41 = -5;
signed long int var_1_42 = 64;
double var_1_43 = 9999999.75;
float var_1_44 = 499.75;
unsigned short int var_1_45 = 500;
unsigned short int var_1_47 = 57435;
float var_1_48 = 1.6;
float var_1_49 = 10.5;
float var_1_50 = 0.0;
float var_1_51 = 15.75;
float var_1_52 = 63.2;
float var_1_53 = 0.0;
signed char var_1_54 = 5;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
signed char var_1_57 = -128;
signed char var_1_58 = -1;
signed char var_1_59 = 1;
signed char var_1_60 = 5;
signed short int var_1_61 = 0;
signed char var_1_62 = -16;
float var_1_63 = 1.1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -32;
double last_1_var_1_5 = 4.4;
double last_1_var_1_17 = 63.9;
signed long int last_1_var_1_21 = -50;
unsigned short int last_1_var_1_29 = 32;
unsigned long int last_1_var_1_31 = 2;
unsigned char last_1_var_1_33 = 0;
unsigned long int last_1_var_1_39 = 25;
signed long int last_1_var_1_41 = -5;
unsigned short int last_1_var_1_45 = 500;
signed short int last_1_var_1_61 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch178Amount250
	unsigned long int stepLocal_5 = last_1_var_1_39;
	if (last_1_var_1_33) {
		var_1_27 = ((49511 - last_1_var_1_41) - var_1_15);
	} else {
		if ((4 / (min (var_1_13 , var_1_14))) != stepLocal_5) {
			if (var_1_28 > last_1_var_1_17) {
				var_1_27 = (min (((31689 - var_1_14) + last_1_var_1_41) , (min (var_1_24 , var_1_16))));
			}
		} else {
			if (last_1_var_1_5 < (min (var_1_19 , last_1_var_1_17))) {
				var_1_27 = (max (last_1_var_1_41 , var_1_14));
			} else {
				var_1_27 = var_1_24;
			}
		}
	}


	// From: Req12Batch178Amount250
	if (((var_1_16 % var_1_13) + 4) >= last_1_var_1_61) {
		if (var_1_4 <= ((last_1_var_1_31 / var_1_13) / var_1_32)) {
			var_1_39 = (max ((min (var_1_15 , last_1_var_1_31)) , (max (var_1_24 , var_1_14))));
		} else {
			var_1_39 = last_1_var_1_31;
		}
	} else {
		var_1_39 = last_1_var_1_31;
	}


	// From: Req1Batch178Amount250
	signed long int stepLocal_0 = last_1_var_1_41;
	if (stepLocal_0 < last_1_var_1_31) {
		var_1_1 = (max (-32 , (last_1_var_1_31 + (max (last_1_var_1_41 , var_1_4)))));
	}


	// From: Req4Batch178Amount250
	signed long int stepLocal_2 = (- var_1_4) / var_1_13;
	if (var_1_1 <= stepLocal_2) {
		var_1_17 = (max ((var_1_18 - 3.8) , ((max (var_1_9 , var_1_19)) + var_1_20)));
	}


	// From: Req9Batch178Amount250
	signed long int stepLocal_7 = last_1_var_1_21;
	if (last_1_var_1_33) {
		if (var_1_25 > stepLocal_7) {
			var_1_31 = (max ((last_1_var_1_21 + (var_1_32 - last_1_var_1_45)) , var_1_30));
		}
	} else {
		var_1_31 = last_1_var_1_1;
	}


	// From: Req10Batch178Amount250
	if (! (var_1_31 < var_1_14)) {
		var_1_33 = (var_1_34 && var_1_35);
	}


	// From: Req2Batch178Amount250
	if (var_1_6 || var_1_7) {
		var_1_5 = var_1_8;
	} else {
		var_1_5 = (max ((5.4 + var_1_9) , var_1_8));
	}


	// From: Req11Batch178Amount250
	unsigned long int stepLocal_8 = - 32u;
	if (stepLocal_8 >= ((min (var_1_37 , var_1_38)) - var_1_14)) {
		var_1_36 = (max (var_1_20 , (min ((var_1_9 + var_1_19) , var_1_8))));
	} else {
		var_1_36 = ((min ((abs (128.78f)) , var_1_18)) - 15.48f);
	}


	// From: Req13Batch178Amount250
	unsigned long int stepLocal_10 = var_1_39;
	signed long int stepLocal_9 = var_1_4;
	if (var_1_33) {
		if (stepLocal_10 == var_1_32) {
			var_1_40 = (var_1_15 + 5);
		}
	} else {
		if (var_1_15 >= stepLocal_9) {
			var_1_40 = (var_1_14 - var_1_15);
		} else {
			var_1_40 = var_1_15;
		}
	}


	// From: Req16Batch178Amount250
	var_1_44 = (min ((abs (var_1_8)) , var_1_9));


	// From: Req18Batch178Amount250
	unsigned char stepLocal_12 = var_1_14;
	if (var_1_34) {
		if (var_1_9 == var_1_44) {
			if ((~ (var_1_38 / 50u)) != stepLocal_12) {
				var_1_48 = var_1_20;
			} else {
				var_1_48 = (((min (var_1_49 , 1000000.5f)) - (var_1_50 - var_1_51)) + (var_1_52 - 25.5f));
			}
		} else {
			var_1_48 = var_1_18;
		}
	} else {
		var_1_48 = (max (((var_1_53 - 127.25f) - var_1_51) , (abs (var_1_19))));
	}


	// From: Req19Batch178Amount250
	signed long int stepLocal_13 = var_1_4;
	if (stepLocal_13 <= (var_1_24 - var_1_27)) {
		var_1_54 = var_1_26;
	} else {
		var_1_54 = var_1_23;
	}


	// From: Req21Batch178Amount250
	var_1_57 = ((var_1_58 + (max (var_1_59 , var_1_60))) + var_1_26);


	// From: Req23Batch178Amount250
	if (var_1_33) {
		if (var_1_33) {
			var_1_62 = -32;
		} else {
			var_1_62 = var_1_23;
		}
	} else {
		var_1_62 = var_1_58;
	}


	// From: Req20Batch178Amount250
	signed char stepLocal_14 = var_1_24;
	if (stepLocal_14 > var_1_39) {
		var_1_55 = (((var_1_1 + var_1_39) > (-100 / var_1_47)) && (! 1));
	} else {
		var_1_55 = (! ((var_1_1 == var_1_23) || (! var_1_56)));
	}


	// From: Req22Batch178Amount250
	signed long int stepLocal_15 = 32;
	if (var_1_5 >= ((- var_1_49) / var_1_50)) {
		if (! (! var_1_33)) {
			if (var_1_34) {
				var_1_61 = ((22356 - var_1_24) - var_1_15);
			} else {
				var_1_61 = (max (var_1_23 , var_1_26));
			}
		} else {
			if (var_1_25 > stepLocal_15) {
				var_1_61 = ((var_1_27 + var_1_16) - var_1_14);
			} else {
				var_1_61 = ((var_1_25 + (var_1_24 - 5)) + var_1_1);
			}
		}
	}


	// From: Req5Batch178Amount250
	signed short int stepLocal_3 = var_1_61;
	if (var_1_31 <= stepLocal_3) {
		var_1_21 = (var_1_14 - var_1_27);
	} else {
		var_1_21 = (abs (var_1_61));
	}


	// From: Req17Batch178Amount250
	if (var_1_39 <= (var_1_16 - last_1_var_1_45)) {
		if (var_1_55 && var_1_35) {
			var_1_45 = (last_1_var_1_45 + var_1_14);
		} else {
			if (var_1_4 <= var_1_39) {
				var_1_45 = ((min (var_1_30 , var_1_47)) - var_1_15);
			} else {
				var_1_45 = (var_1_30 - 64);
			}
		}
	} else {
		var_1_45 = (var_1_15 + var_1_13);
	}


	// From: Req6Batch178Amount250
	unsigned short int stepLocal_4 = var_1_45;
	if (var_1_4 > stepLocal_4) {
		var_1_22 = (var_1_23 - var_1_24);
	} else {
		if (! (var_1_7 || var_1_6)) {
			if ((min (var_1_5 , (var_1_19 * var_1_17))) != var_1_8) {
				var_1_22 = (var_1_25 + var_1_26);
			} else {
				var_1_22 = var_1_24;
			}
		} else {
			var_1_22 = var_1_23;
		}
	}


	// From: Req8Batch178Amount250
	signed long int stepLocal_6 = var_1_4;
	if (stepLocal_6 >= (var_1_13 - last_1_var_1_29)) {
		if (! var_1_55) {
			var_1_29 = (var_1_14 + var_1_13);
		} else {
			var_1_29 = var_1_14;
		}
	} else {
		if (! var_1_55) {
			var_1_29 = (max (var_1_24 , var_1_14));
		} else {
			var_1_29 = (max ((var_1_30 - last_1_var_1_29) , var_1_15));
		}
	}


	// From: Req15Batch178Amount250
	signed long int stepLocal_11 = var_1_21;
	if (stepLocal_11 < (min ((- 200) , (var_1_45 * var_1_15)))) {
		var_1_43 = ((abs (var_1_8)) - var_1_18);
	}


	// From: Req24Batch178Amount250
	unsigned long int stepLocal_16 = var_1_39 / 1;
	if (stepLocal_16 <= (var_1_61 / var_1_47)) {
		if ((- -0.6f) <= (63.1f - var_1_49)) {
			var_1_63 = 8.9f;
		} else {
			var_1_63 = var_1_52;
		}
	} else {
		var_1_63 = 63.7f;
	}


	// From: Req14Batch178Amount250
	if (var_1_55) {
		var_1_41 = (min ((max (var_1_39 , (var_1_31 + 64))) , (max (var_1_15 , var_1_14))));
	} else {
		var_1_41 = (var_1_27 + var_1_42);
	}


	// From: Req3Batch178Amount250
	unsigned long int stepLocal_1 = var_1_31;
	if ((var_1_41 + (abs (var_1_39))) < stepLocal_1) {
		var_1_10 = ((min (var_1_13 , var_1_14)) - 5);
	} else {
		var_1_10 = (min ((var_1_15 + var_1_16) , var_1_13));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1073741823);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 127);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 127);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -1);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -63);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -63);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 32767);
	assume_abort_if_not(var_1_30 <= 65534);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 1073741823);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 2147483647);
	assume_abort_if_not(var_1_37 <= 4294967295);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 2147483647);
	assume_abort_if_not(var_1_38 <= 4294967295);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -1073741823);
	assume_abort_if_not(var_1_42 <= 1073741823);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 32767);
	assume_abort_if_not(var_1_47 <= 65534);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 2305843.009213691400e+12F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691400e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 4611686.018427383000e+12F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854766000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 0);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= -31);
	assume_abort_if_not(var_1_58 <= 32);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -31);
	assume_abort_if_not(var_1_59 <= 31);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= -31);
	assume_abort_if_not(var_1_60 <= 31);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_61 = var_1_61;
}

int property(void) {
	return ((((((((((((((((((((((((last_1_var_1_41 < last_1_var_1_31) ? (var_1_1 == ((signed long int) (max (-32 , (last_1_var_1_31 + (max (last_1_var_1_41 , var_1_4))))))) : 1) && ((var_1_6 || var_1_7) ? (var_1_5 == ((double) var_1_8)) : (var_1_5 == ((double) (max ((5.4 + var_1_9) , var_1_8)))))) && (((var_1_41 + (abs (var_1_39))) < var_1_31) ? (var_1_10 == ((unsigned char) ((min (var_1_13 , var_1_14)) - 5))) : (var_1_10 == ((unsigned char) (min ((var_1_15 + var_1_16) , var_1_13)))))) && ((var_1_1 <= ((- var_1_4) / var_1_13)) ? (var_1_17 == ((double) (max ((var_1_18 - 3.8) , ((max (var_1_9 , var_1_19)) + var_1_20))))) : 1)) && ((var_1_31 <= var_1_61) ? (var_1_21 == ((signed long int) (var_1_14 - var_1_27))) : (var_1_21 == ((signed long int) (abs (var_1_61)))))) && ((var_1_4 > var_1_45) ? (var_1_22 == ((signed char) (var_1_23 - var_1_24))) : ((! (var_1_7 || var_1_6)) ? (((min (var_1_5 , (var_1_19 * var_1_17))) != var_1_8) ? (var_1_22 == ((signed char) (var_1_25 + var_1_26))) : (var_1_22 == ((signed char) var_1_24))) : (var_1_22 == ((signed char) var_1_23))))) && (last_1_var_1_33 ? (var_1_27 == ((unsigned short int) ((49511 - last_1_var_1_41) - var_1_15))) : (((4 / (min (var_1_13 , var_1_14))) != last_1_var_1_39) ? ((var_1_28 > last_1_var_1_17) ? (var_1_27 == ((unsigned short int) (min (((31689 - var_1_14) + last_1_var_1_41) , (min (var_1_24 , var_1_16)))))) : 1) : ((last_1_var_1_5 < (min (var_1_19 , last_1_var_1_17))) ? (var_1_27 == ((unsigned short int) (max (last_1_var_1_41 , var_1_14)))) : (var_1_27 == ((unsigned short int) var_1_24)))))) && ((var_1_4 >= (var_1_13 - last_1_var_1_29)) ? ((! var_1_55) ? (var_1_29 == ((unsigned short int) (var_1_14 + var_1_13))) : (var_1_29 == ((unsigned short int) var_1_14))) : ((! var_1_55) ? (var_1_29 == ((unsigned short int) (max (var_1_24 , var_1_14)))) : (var_1_29 == ((unsigned short int) (max ((var_1_30 - last_1_var_1_29) , var_1_15))))))) && (last_1_var_1_33 ? ((var_1_25 > last_1_var_1_21) ? (var_1_31 == ((unsigned long int) (max ((last_1_var_1_21 + (var_1_32 - last_1_var_1_45)) , var_1_30)))) : 1) : (var_1_31 == ((unsigned long int) last_1_var_1_1)))) && ((! (var_1_31 < var_1_14)) ? (var_1_33 == ((unsigned char) (var_1_34 && var_1_35))) : 1)) && (((- 32u) >= ((min (var_1_37 , var_1_38)) - var_1_14)) ? (var_1_36 == ((float) (max (var_1_20 , (min ((var_1_9 + var_1_19) , var_1_8)))))) : (var_1_36 == ((float) ((min ((abs (128.78f)) , var_1_18)) - 15.48f))))) && ((((var_1_16 % var_1_13) + 4) >= last_1_var_1_61) ? ((var_1_4 <= ((last_1_var_1_31 / var_1_13) / var_1_32)) ? (var_1_39 == ((unsigned long int) (max ((min (var_1_15 , last_1_var_1_31)) , (max (var_1_24 , var_1_14)))))) : (var_1_39 == ((unsigned long int) last_1_var_1_31))) : (var_1_39 == ((unsigned long int) last_1_var_1_31)))) && (var_1_33 ? ((var_1_39 == var_1_32) ? (var_1_40 == ((unsigned char) (var_1_15 + 5))) : 1) : ((var_1_15 >= var_1_4) ? (var_1_40 == ((unsigned char) (var_1_14 - var_1_15))) : (var_1_40 == ((unsigned char) var_1_15))))) && (var_1_55 ? (var_1_41 == ((signed long int) (min ((max (var_1_39 , (var_1_31 + 64))) , (max (var_1_15 , var_1_14)))))) : (var_1_41 == ((signed long int) (var_1_27 + var_1_42))))) && ((var_1_21 < (min ((- 200) , (var_1_45 * var_1_15)))) ? (var_1_43 == ((double) ((abs (var_1_8)) - var_1_18))) : 1)) && (var_1_44 == ((float) (min ((abs (var_1_8)) , var_1_9))))) && ((var_1_39 <= (var_1_16 - last_1_var_1_45)) ? ((var_1_55 && var_1_35) ? (var_1_45 == ((unsigned short int) (last_1_var_1_45 + var_1_14))) : ((var_1_4 <= var_1_39) ? (var_1_45 == ((unsigned short int) ((min (var_1_30 , var_1_47)) - var_1_15))) : (var_1_45 == ((unsigned short int) (var_1_30 - 64))))) : (var_1_45 == ((unsigned short int) (var_1_15 + var_1_13))))) && (var_1_34 ? ((var_1_9 == var_1_44) ? (((~ (var_1_38 / 50u)) != var_1_14) ? (var_1_48 == ((float) var_1_20)) : (var_1_48 == ((float) (((min (var_1_49 , 1000000.5f)) - (var_1_50 - var_1_51)) + (var_1_52 - 25.5f))))) : (var_1_48 == ((float) var_1_18))) : (var_1_48 == ((float) (max (((var_1_53 - 127.25f) - var_1_51) , (abs (var_1_19)))))))) && ((var_1_4 <= (var_1_24 - var_1_27)) ? (var_1_54 == ((signed char) var_1_26)) : (var_1_54 == ((signed char) var_1_23)))) && ((var_1_24 > var_1_39) ? (var_1_55 == ((unsigned char) (((var_1_1 + var_1_39) > (-100 / var_1_47)) && (! 1)))) : (var_1_55 == ((unsigned char) (! ((var_1_1 == var_1_23) || (! var_1_56))))))) && (var_1_57 == ((signed char) ((var_1_58 + (max (var_1_59 , var_1_60))) + var_1_26)))) && ((var_1_5 >= ((- var_1_49) / var_1_50)) ? ((! (! var_1_33)) ? (var_1_34 ? (var_1_61 == ((signed short int) ((22356 - var_1_24) - var_1_15))) : (var_1_61 == ((signed short int) (max (var_1_23 , var_1_26))))) : ((var_1_25 > 32) ? (var_1_61 == ((signed short int) ((var_1_27 + var_1_16) - var_1_14))) : (var_1_61 == ((signed short int) ((var_1_25 + (var_1_24 - 5)) + var_1_1))))) : 1)) && (var_1_33 ? (var_1_33 ? (var_1_62 == ((signed char) -32)) : (var_1_62 == ((signed char) var_1_23))) : (var_1_62 == ((signed char) var_1_58)))) && (((var_1_39 / 1) <= (var_1_61 / var_1_47)) ? (((- -0.6f) <= (63.1f - var_1_49)) ? (var_1_63 == ((float) 8.9f)) : (var_1_63 == ((float) var_1_52))) : (var_1_63 == ((float) 63.7f)))
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
