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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch100Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned short int var_1_10 = 100;
unsigned short int var_1_11 = 34312;
unsigned short int var_1_12 = 1;
signed char var_1_13 = 32;
signed char var_1_16 = 10;
signed char var_1_17 = 1;
signed char var_1_18 = 25;
signed long int var_1_19 = -32;
signed char var_1_20 = 1;
signed char var_1_21 = -2;
signed char var_1_22 = -25;
signed char var_1_23 = -16;
float var_1_24 = 8.225;
signed char var_1_25 = 16;
float var_1_26 = 127.5;
unsigned long int var_1_27 = 10;
unsigned char var_1_28 = 64;
unsigned char var_1_29 = 2;
unsigned char var_1_30 = 64;
unsigned char var_1_31 = 100;
double var_1_32 = 99999999999.4;
double var_1_33 = 15.5;
double var_1_34 = 100.1;
double var_1_35 = 256.5;
double var_1_36 = 16.5;
double var_1_37 = 8.4;
signed long int var_1_38 = 0;
signed long int var_1_39 = 1000000000;
signed long int var_1_40 = -128;
unsigned short int var_1_41 = 2;
unsigned short int var_1_42 = 16;
unsigned char var_1_43 = 8;
double var_1_44 = 1.6;
signed long int var_1_45 = -128;
signed long int var_1_46 = 1896999349;
unsigned char var_1_47 = 50;
signed char var_1_48 = -25;
signed char var_1_49 = 5;
signed char var_1_50 = -25;
unsigned short int var_1_51 = 10;
signed short int var_1_52 = -1;
signed short int var_1_53 = 24604;
double var_1_54 = 10.2;
signed short int var_1_55 = -64;
double var_1_57 = 100000000.6;
float var_1_58 = 9.8;
float var_1_59 = 0.0;
float var_1_60 = 0.0;
float var_1_61 = 2.2;
signed char var_1_62 = -32;
signed char var_1_64 = 0;
signed char var_1_65 = 4;
signed char var_1_66 = -8;
signed char var_1_67 = 4;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_10 = 100;
unsigned long int last_1_var_1_27 = 10;
unsigned char last_1_var_1_28 = 64;
double last_1_var_1_32 = 99999999999.4;
signed long int last_1_var_1_38 = 0;
unsigned short int last_1_var_1_41 = 2;
unsigned char last_1_var_1_43 = 8;
signed long int last_1_var_1_45 = -128;
unsigned short int last_1_var_1_51 = 10;
signed short int last_1_var_1_52 = -1;
double last_1_var_1_54 = 10.2;
signed short int last_1_var_1_55 = -64;
signed char last_1_var_1_67 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch100Amount250
	if ((last_1_var_1_28 * last_1_var_1_41) < (last_1_var_1_38 | last_1_var_1_45)) {
		var_1_1 = ((last_1_var_1_28 >= last_1_var_1_38) && var_1_6);
	} else {
		if (last_1_var_1_41 < last_1_var_1_28) {
			var_1_1 = ((last_1_var_1_38 < last_1_var_1_41) || (var_1_7 && (var_1_8 && var_1_9)));
		} else {
			var_1_1 = (! (! var_1_7));
		}
	}


	// From: Req9Batch100Amount250
	unsigned long int stepLocal_8 = last_1_var_1_27 / (min (var_1_19 , var_1_11));
	if (var_1_6) {
		if (stepLocal_8 != ((var_1_30 * var_1_17) * var_1_21)) {
			var_1_38 = ((min ((last_1_var_1_52 + last_1_var_1_55) , var_1_16)) + ((var_1_39 - var_1_12) - var_1_25));
		} else {
			var_1_38 = (var_1_25 + (min (var_1_17 , var_1_23)));
		}
	} else {
		if ((min (var_1_33 , last_1_var_1_32)) <= var_1_34) {
			var_1_38 = ((max (var_1_40 , last_1_var_1_55)) + ((max (last_1_var_1_52 , 8)) - var_1_30));
		} else {
			var_1_38 = last_1_var_1_55;
		}
	}


	// From: Req5Batch100Amount250
	signed long int stepLocal_3 = last_1_var_1_45;
	if (stepLocal_3 == last_1_var_1_67) {
		var_1_27 = (max (var_1_11 , var_1_18));
	}


	// From: Req12Batch100Amount250
	if (var_1_35 > last_1_var_1_32) {
		var_1_45 = (abs (last_1_var_1_28 + (last_1_var_1_38 - var_1_18)));
	} else {
		if (var_1_30 <= var_1_31) {
			if (var_1_6 && var_1_7) {
				if (var_1_34 <= var_1_36) {
					var_1_45 = (min (var_1_21 , var_1_23));
				}
			} else {
				if (var_1_26 > last_1_var_1_54) {
					var_1_45 = ((min (var_1_42 , last_1_var_1_27)) - (var_1_46 - last_1_var_1_28));
				} else {
					var_1_45 = ((var_1_11 + last_1_var_1_52) + last_1_var_1_28);
				}
			}
		} else {
			var_1_45 = (last_1_var_1_43 + var_1_22);
		}
	}


	// From: Req7Batch100Amount250
	signed long int stepLocal_5 = var_1_45;
	if (stepLocal_5 <= var_1_20) {
		var_1_29 = var_1_25;
	} else {
		var_1_29 = (((abs (var_1_30)) + (var_1_31 - 2)) - var_1_25);
	}


	// From: Req8Batch100Amount250
	signed long int stepLocal_7 = max ((~ -16) , var_1_12);
	signed long int stepLocal_6 = var_1_21 / var_1_19;
	if (var_1_23 == stepLocal_6) {
		if (! (! var_1_9)) {
			if ((max (last_1_var_1_10 , (min (var_1_25 , last_1_var_1_51)))) < stepLocal_7) {
				var_1_32 = ((abs (var_1_33)) + ((var_1_34 + var_1_35) + (var_1_36 - var_1_37)));
			}
		}
	} else {
		var_1_32 = (var_1_36 + (min (25.5 , (abs (var_1_35)))));
	}


	// From: Req17Batch100Amount250
	if ((99.5f / var_1_44) <= var_1_32) {
		if ((var_1_36 - var_1_37) <= (- var_1_35)) {
			var_1_52 = (var_1_42 - ((min (var_1_53 , 20062)) - 2));
		} else {
			var_1_52 = (min (var_1_23 , (var_1_49 - (var_1_53 - var_1_18))));
		}
	}


	// From: Req4Batch100Amount250
	if (((8 + var_1_25) - var_1_18) > (var_1_12 | var_1_20)) {
		if (! (var_1_20 <= var_1_11)) {
			var_1_24 = var_1_26;
		} else {
			var_1_24 = 15.2f;
		}
	} else {
		var_1_24 = var_1_26;
	}


	// From: Req6Batch100Amount250
	unsigned char stepLocal_4 = var_1_8;
	if ((var_1_17 >= var_1_11) || stepLocal_4) {
		var_1_28 = (abs (var_1_25));
	}


	// From: Req13Batch100Amount250
	var_1_47 = (var_1_18 + (max (var_1_30 , var_1_31)));


	// From: Req14Batch100Amount250
	signed long int stepLocal_9 = var_1_30 >> var_1_49;
	if (var_1_20 >= stepLocal_9) {
		var_1_48 = (var_1_23 + var_1_22);
	}


	// From: Req16Batch100Amount250
	var_1_51 = var_1_30;


	// From: Req18Batch100Amount250
	var_1_54 = (100.5 - var_1_36);


	// From: Req20Batch100Amount250
	if (! var_1_7) {
		var_1_58 = (24.75f - (var_1_36 + var_1_37));
	} else {
		var_1_58 = (((var_1_59 + var_1_60) - (var_1_37 + var_1_36)) - var_1_61);
	}


	// From: Req21Batch100Amount250
	if (var_1_8) {
		if (var_1_47 > (max ((var_1_45 + var_1_51) , var_1_47))) {
			var_1_62 = (var_1_21 + (var_1_49 + (var_1_64 - var_1_65)));
		} else {
			var_1_62 = ((min (-8 , var_1_64)) + var_1_49);
		}
	}


	// From: Req22Batch100Amount250
	if (var_1_1) {
		var_1_66 = var_1_21;
	} else {
		var_1_66 = var_1_17;
	}


	// From: Req10Batch100Amount250
	if (! var_1_1) {
		if (var_1_54 <= var_1_36) {
			var_1_41 = (var_1_11 - var_1_12);
		} else {
			var_1_41 = (abs (var_1_18));
		}
	} else {
		var_1_41 = (var_1_45 + (var_1_31 + var_1_42));
	}


	// From: Req19Batch100Amount250
	if (var_1_30 < var_1_29) {
		if (var_1_36 > ((var_1_33 / var_1_44) + (var_1_54 / var_1_57))) {
			var_1_55 = (var_1_38 + var_1_27);
		} else {
			var_1_55 = (var_1_31 - var_1_42);
		}
	}


	// From: Req23Batch100Amount250
	if (var_1_7) {
		var_1_67 = (abs (var_1_21 + var_1_20));
	} else {
		if (var_1_58 <= (var_1_44 / var_1_60)) {
			if (var_1_1) {
				var_1_67 = 1;
			}
		} else {
			var_1_67 = var_1_25;
		}
	}


	// From: Req11Batch100Amount250
	if ((var_1_32 / (max (var_1_44 , 10.68))) > var_1_24) {
		if ((min (var_1_24 , var_1_37)) < (min (var_1_36 , (var_1_54 * var_1_26)))) {
			if (var_1_8) {
				var_1_43 = var_1_18;
			}
		} else {
			var_1_43 = var_1_25;
		}
	} else {
		var_1_43 = var_1_30;
	}


	// From: Req2Batch100Amount250
	if (var_1_7) {
		var_1_10 = ((max (var_1_11 , 34102)) - var_1_43);
	} else {
		var_1_10 = (max ((min (var_1_41 , (var_1_43 + var_1_12))) , var_1_11));
	}


	// From: Req3Batch100Amount250
	signed long int stepLocal_2 = var_1_45;
	unsigned short int stepLocal_1 = var_1_11;
	signed long int stepLocal_0 = var_1_12 / var_1_19;
	if ((- (- var_1_32)) > var_1_54) {
		if (var_1_11 >= stepLocal_2) {
			if ((var_1_27 | var_1_41) > stepLocal_1) {
				var_1_13 = var_1_16;
			} else {
				var_1_13 = (var_1_17 - var_1_18);
			}
		} else {
			if ((-100 ^ (min (var_1_11 , -128))) < stepLocal_0) {
				var_1_13 = (var_1_17 - var_1_18);
			} else {
				if (var_1_9) {
					var_1_13 = var_1_18;
				} else {
					var_1_13 = var_1_17;
				}
			}
		}
	} else {
		var_1_13 = ((var_1_20 + var_1_21) + (var_1_22 + var_1_23));
	}


	// From: Req15Batch100Amount250
	signed long int stepLocal_10 = 5 << var_1_43;
	if (stepLocal_10 < (var_1_30 >> var_1_49)) {
		var_1_50 = var_1_21;
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 32767);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483648);
	assume_abort_if_not(var_1_19 <= 2147483647);
	assume_abort_if_not(var_1_19 != 0);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -31);
	assume_abort_if_not(var_1_20 <= 32);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -31);
	assume_abort_if_not(var_1_21 <= 31);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -31);
	assume_abort_if_not(var_1_22 <= 32);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -31);
	assume_abort_if_not(var_1_23 <= 31);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854766000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 63);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 95);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -115292.1504606845700e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 1152921.504606845700e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -115292.1504606845700e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 1152921.504606845700e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691400e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691400e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_39 >= 536870911);
	assume_abort_if_not(var_1_39 <= 1073741823);
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= -1073741823);
	assume_abort_if_not(var_1_40 <= 1073741823);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 16383);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	assume_abort_if_not(var_1_44 != 0.0F);
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= 1073741823);
	assume_abort_if_not(var_1_46 <= 2147483646);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 7);
	var_1_53 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_53 >= 16383);
	assume_abort_if_not(var_1_53 <= 32766);
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= -922337.2036854776000e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854776000e+12F && var_1_57 >= 1.0e-20F ));
	assume_abort_if_not(var_1_57 != 0.0F);
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 2305843.009213691400e+12F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= 2305843.009213691400e+12F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854766000e+12F && var_1_61 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 31);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 31);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_67 = var_1_67;
}

int property(void) {
	return ((((((((((((((((((((((((last_1_var_1_28 * last_1_var_1_41) < (last_1_var_1_38 | last_1_var_1_45)) ? (var_1_1 == ((unsigned char) ((last_1_var_1_28 >= last_1_var_1_38) && var_1_6))) : ((last_1_var_1_41 < last_1_var_1_28) ? (var_1_1 == ((unsigned char) ((last_1_var_1_38 < last_1_var_1_41) || (var_1_7 && (var_1_8 && var_1_9))))) : (var_1_1 == ((unsigned char) (! (! var_1_7)))))) && (var_1_7 ? (var_1_10 == ((unsigned short int) ((max (var_1_11 , 34102)) - var_1_43))) : (var_1_10 == ((unsigned short int) (max ((min (var_1_41 , (var_1_43 + var_1_12))) , var_1_11)))))) && (((- (- var_1_32)) > var_1_54) ? ((var_1_11 >= var_1_45) ? (((var_1_27 | var_1_41) > var_1_11) ? (var_1_13 == ((signed char) var_1_16)) : (var_1_13 == ((signed char) (var_1_17 - var_1_18)))) : (((-100 ^ (min (var_1_11 , -128))) < (var_1_12 / var_1_19)) ? (var_1_13 == ((signed char) (var_1_17 - var_1_18))) : (var_1_9 ? (var_1_13 == ((signed char) var_1_18)) : (var_1_13 == ((signed char) var_1_17))))) : (var_1_13 == ((signed char) ((var_1_20 + var_1_21) + (var_1_22 + var_1_23)))))) && ((((8 + var_1_25) - var_1_18) > (var_1_12 | var_1_20)) ? ((! (var_1_20 <= var_1_11)) ? (var_1_24 == ((float) var_1_26)) : (var_1_24 == ((float) 15.2f))) : (var_1_24 == ((float) var_1_26)))) && ((last_1_var_1_45 == last_1_var_1_67) ? (var_1_27 == ((unsigned long int) (max (var_1_11 , var_1_18)))) : 1)) && (((var_1_17 >= var_1_11) || var_1_8) ? (var_1_28 == ((unsigned char) (abs (var_1_25)))) : 1)) && ((var_1_45 <= var_1_20) ? (var_1_29 == ((unsigned char) var_1_25)) : (var_1_29 == ((unsigned char) (((abs (var_1_30)) + (var_1_31 - 2)) - var_1_25))))) && ((var_1_23 == (var_1_21 / var_1_19)) ? ((! (! var_1_9)) ? (((max (last_1_var_1_10 , (min (var_1_25 , last_1_var_1_51)))) < (max ((~ -16) , var_1_12))) ? (var_1_32 == ((double) ((abs (var_1_33)) + ((var_1_34 + var_1_35) + (var_1_36 - var_1_37))))) : 1) : 1) : (var_1_32 == ((double) (var_1_36 + (min (25.5 , (abs (var_1_35))))))))) && (var_1_6 ? (((last_1_var_1_27 / (min (var_1_19 , var_1_11))) != ((var_1_30 * var_1_17) * var_1_21)) ? (var_1_38 == ((signed long int) ((min ((last_1_var_1_52 + last_1_var_1_55) , var_1_16)) + ((var_1_39 - var_1_12) - var_1_25)))) : (var_1_38 == ((signed long int) (var_1_25 + (min (var_1_17 , var_1_23)))))) : (((min (var_1_33 , last_1_var_1_32)) <= var_1_34) ? (var_1_38 == ((signed long int) ((max (var_1_40 , last_1_var_1_55)) + ((max (last_1_var_1_52 , 8)) - var_1_30)))) : (var_1_38 == ((signed long int) last_1_var_1_55))))) && ((! var_1_1) ? ((var_1_54 <= var_1_36) ? (var_1_41 == ((unsigned short int) (var_1_11 - var_1_12))) : (var_1_41 == ((unsigned short int) (abs (var_1_18))))) : (var_1_41 == ((unsigned short int) (var_1_45 + (var_1_31 + var_1_42)))))) && (((var_1_32 / (max (var_1_44 , 10.68))) > var_1_24) ? (((min (var_1_24 , var_1_37)) < (min (var_1_36 , (var_1_54 * var_1_26)))) ? (var_1_8 ? (var_1_43 == ((unsigned char) var_1_18)) : 1) : (var_1_43 == ((unsigned char) var_1_25))) : (var_1_43 == ((unsigned char) var_1_30)))) && ((var_1_35 > last_1_var_1_32) ? (var_1_45 == ((signed long int) (abs (last_1_var_1_28 + (last_1_var_1_38 - var_1_18))))) : ((var_1_30 <= var_1_31) ? ((var_1_6 && var_1_7) ? ((var_1_34 <= var_1_36) ? (var_1_45 == ((signed long int) (min (var_1_21 , var_1_23)))) : 1) : ((var_1_26 > last_1_var_1_54) ? (var_1_45 == ((signed long int) ((min (var_1_42 , last_1_var_1_27)) - (var_1_46 - last_1_var_1_28)))) : (var_1_45 == ((signed long int) ((var_1_11 + last_1_var_1_52) + last_1_var_1_28))))) : (var_1_45 == ((signed long int) (last_1_var_1_43 + var_1_22)))))) && (var_1_47 == ((unsigned char) (var_1_18 + (max (var_1_30 , var_1_31)))))) && ((var_1_20 >= (var_1_30 >> var_1_49)) ? (var_1_48 == ((signed char) (var_1_23 + var_1_22))) : 1)) && (((5 << var_1_43) < (var_1_30 >> var_1_49)) ? (var_1_50 == ((signed char) var_1_21)) : 1)) && (var_1_51 == ((unsigned short int) var_1_30))) && (((99.5f / var_1_44) <= var_1_32) ? (((var_1_36 - var_1_37) <= (- var_1_35)) ? (var_1_52 == ((signed short int) (var_1_42 - ((min (var_1_53 , 20062)) - 2)))) : (var_1_52 == ((signed short int) (min (var_1_23 , (var_1_49 - (var_1_53 - var_1_18))))))) : 1)) && (var_1_54 == ((double) (100.5 - var_1_36)))) && ((var_1_30 < var_1_29) ? ((var_1_36 > ((var_1_33 / var_1_44) + (var_1_54 / var_1_57))) ? (var_1_55 == ((signed short int) (var_1_38 + var_1_27))) : (var_1_55 == ((signed short int) (var_1_31 - var_1_42)))) : 1)) && ((! var_1_7) ? (var_1_58 == ((float) (24.75f - (var_1_36 + var_1_37)))) : (var_1_58 == ((float) (((var_1_59 + var_1_60) - (var_1_37 + var_1_36)) - var_1_61))))) && (var_1_8 ? ((var_1_47 > (max ((var_1_45 + var_1_51) , var_1_47))) ? (var_1_62 == ((signed char) (var_1_21 + (var_1_49 + (var_1_64 - var_1_65))))) : (var_1_62 == ((signed char) ((min (-8 , var_1_64)) + var_1_49)))) : 1)) && (var_1_1 ? (var_1_66 == ((signed char) var_1_21)) : (var_1_66 == ((signed char) var_1_17)))) && (var_1_7 ? (var_1_67 == ((signed char) (abs (var_1_21 + var_1_20)))) : ((var_1_58 <= (var_1_44 / var_1_60)) ? (var_1_1 ? (var_1_67 == ((signed char) 1)) : 1) : (var_1_67 == ((signed char) var_1_25))))
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
