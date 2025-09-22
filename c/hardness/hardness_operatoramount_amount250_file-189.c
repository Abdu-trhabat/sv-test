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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch189Amount250.c", 13, "reach_error"); }
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
float var_1_1 = 4.875;
float var_1_5 = 63.75;
float var_1_6 = 4.625;
unsigned long int var_1_7 = 64;
unsigned short int var_1_8 = 60381;
unsigned short int var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed long int var_1_13 = 8;
signed long int var_1_15 = 0;
signed char var_1_16 = -128;
signed char var_1_19 = -64;
unsigned long int var_1_20 = 2216424725;
signed char var_1_21 = 4;
signed char var_1_22 = 4;
signed char var_1_23 = 50;
signed char var_1_24 = 16;
signed long int var_1_25 = -8;
unsigned short int var_1_26 = 50;
unsigned short int var_1_27 = 32942;
unsigned short int var_1_28 = 16408;
unsigned short int var_1_29 = 21774;
unsigned char var_1_30 = 32;
unsigned char var_1_31 = 4;
unsigned char var_1_32 = 2;
unsigned char var_1_33 = 100;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 4;
unsigned char var_1_36 = 200;
signed long int var_1_37 = 100;
signed long int var_1_39 = 10;
unsigned long int var_1_40 = 10;
unsigned char var_1_41 = 1;
unsigned char var_1_43 = 0;
signed long int var_1_44 = 100000000;
unsigned char var_1_45 = 0;
unsigned short int var_1_46 = 100;
unsigned short int var_1_47 = 4;
unsigned char var_1_49 = 0;
signed char var_1_50 = -10;
signed char var_1_51 = 100;
unsigned long int var_1_52 = 2;
unsigned char var_1_53 = 0;
double var_1_54 = 32.6;
double var_1_56 = 32.5;
double var_1_57 = 9.75;
float var_1_58 = 999999999999999.5;
unsigned long int var_1_59 = 200;
unsigned long int var_1_60 = 5;
unsigned char var_1_61 = 10;
unsigned char var_1_62 = 16;
signed char var_1_63 = -10;
signed char var_1_64 = 10;
signed char var_1_65 = -8;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_10 = 1;
signed long int last_1_var_1_25 = -8;
unsigned long int last_1_var_1_40 = 10;
unsigned char last_1_var_1_45 = 0;
unsigned short int last_1_var_1_46 = 100;
unsigned short int last_1_var_1_47 = 4;
unsigned char last_1_var_1_49 = 0;
unsigned long int last_1_var_1_52 = 2;
unsigned char last_1_var_1_53 = 0;
double last_1_var_1_54 = 32.6;
unsigned long int last_1_var_1_59 = 200;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req13Batch189Amount250
	signed long int stepLocal_8 = var_1_29 << last_1_var_1_25;
	if (stepLocal_8 < var_1_33) {
		var_1_45 = ((var_1_5 > last_1_var_1_54) && var_1_12);
	} else {
		var_1_45 = (var_1_12 || var_1_11);
	}


	// From: Req12Batch189Amount250
	unsigned long int stepLocal_7 = max ((var_1_15 & var_1_22) , last_1_var_1_40);
	if (! var_1_43) {
		if (last_1_var_1_25 != stepLocal_7) {
			var_1_44 = ((abs (last_1_var_1_59 - var_1_35)) + ((max (var_1_9 , var_1_34)) + (min (var_1_24 , var_1_33))));
		} else {
			var_1_44 = (var_1_31 + var_1_19);
		}
	}


	// From: Req19Batch189Amount250
	signed long int stepLocal_11 = last_1_var_1_47;
	unsigned long int stepLocal_10 = last_1_var_1_52;
	unsigned char stepLocal_9 = var_1_33;
	if (stepLocal_10 > var_1_9) {
		if (stepLocal_11 <= (var_1_27 - var_1_35)) {
			if (var_1_23 <= stepLocal_9) {
				var_1_53 = (! 1);
			} else {
				var_1_53 = (last_1_var_1_10 && var_1_43);
			}
		} else {
			var_1_53 = var_1_11;
		}
	} else {
		var_1_53 = (var_1_43 || var_1_12);
	}


	// From: Req15Batch189Amount250
	if (var_1_53) {
		var_1_47 = (min ((abs (256)) , (abs (48875 - 5))));
	} else {
		var_1_47 = (var_1_27 - (var_1_35 + var_1_34));
	}


	// From: Req3Batch189Amount250
	if (last_1_var_1_53) {
		if (last_1_var_1_49) {
			var_1_10 = ((! 1) || (! var_1_11));
		}
	} else {
		var_1_10 = (! var_1_12);
	}


	// From: Req21Batch189Amount250
	if (var_1_10) {
		var_1_58 = var_1_5;
	} else {
		var_1_58 = var_1_57;
	}


	// From: Req18Batch189Amount250
	if (last_1_var_1_45) {
		var_1_52 = var_1_29;
	} else {
		var_1_52 = (var_1_9 + var_1_23);
	}


	// From: Req1Batch189Amount250
	if (! (var_1_10 || var_1_53)) {
		var_1_1 = ((var_1_5 + var_1_6) - 1.000000000000005E13f);
	}


	// From: Req24Batch189Amount250
	signed char stepLocal_15 = var_1_51;
	if (stepLocal_15 > var_1_9) {
		var_1_63 = (var_1_35 + (var_1_32 + var_1_64));
	} else {
		var_1_63 = ((min (var_1_22 , (min (var_1_31 , var_1_35)))) + var_1_65);
	}


	// From: Req20Batch189Amount250
	signed char stepLocal_14 = var_1_21;
	unsigned short int stepLocal_13 = var_1_47;
	signed char stepLocal_12 = var_1_21;
	if (stepLocal_12 != (var_1_52 / var_1_33)) {
		if (! var_1_45) {
			var_1_54 = var_1_6;
		} else {
			if (var_1_44 >= stepLocal_13) {
				if (var_1_23 <= stepLocal_14) {
					var_1_54 = ((var_1_56 + var_1_57) + var_1_6);
				}
			}
		}
	} else {
		var_1_54 = (min (var_1_56 , (max (var_1_57 , var_1_6))));
	}


	// From: Req10Batch189Amount250
	if (var_1_33 < (var_1_52 % var_1_34)) {
		if ((abs (var_1_32 - var_1_34)) <= (var_1_52 % var_1_28)) {
			var_1_40 = var_1_44;
		}
	} else {
		var_1_40 = var_1_44;
	}


	// From: Req16Batch189Amount250
	if (9.9999999995E9f <= (- (var_1_5 * var_1_58))) {
		var_1_49 = (! var_1_12);
	}


	// From: Req22Batch189Amount250
	if (var_1_49) {
		var_1_59 = var_1_60;
	} else {
		var_1_59 = var_1_9;
	}


	// From: Req4Batch189Amount250
	if (var_1_6 < var_1_1) {
		if (var_1_54 >= var_1_6) {
			var_1_13 = (var_1_59 - var_1_9);
		} else {
			var_1_13 = (var_1_59 - var_1_8);
		}
	} else {
		var_1_13 = (var_1_9 + var_1_15);
	}


	// From: Req7Batch189Amount250
	if (var_1_49) {
		var_1_26 = (max ((min (var_1_24 , 4)) , (var_1_27 - var_1_9)));
	} else {
		if (var_1_53) {
			var_1_26 = ((var_1_28 + var_1_29) - (var_1_22 + var_1_23));
		}
	}


	// From: Req17Batch189Amount250
	if (! var_1_12) {
		if ((var_1_6 - var_1_5) < ((- var_1_54) + (max (2.75f , var_1_1)))) {
			var_1_50 = ((var_1_51 - var_1_32) - var_1_22);
		} else {
			var_1_50 = var_1_19;
		}
	} else {
		if (var_1_10) {
			if ((- var_1_5) <= var_1_54) {
				var_1_50 = (var_1_32 - (abs (var_1_35)));
			}
		}
	}


	// From: Req6Batch189Amount250
	if (var_1_9 >= var_1_59) {
		if (var_1_21 >= var_1_9) {
			var_1_25 = var_1_24;
		} else {
			var_1_25 = var_1_9;
		}
	} else {
		var_1_25 = (max (var_1_24 , (abs (var_1_8))));
	}


	// From: Req8Batch189Amount250
	signed long int stepLocal_3 = ~ var_1_25;
	if (! var_1_49) {
		if (var_1_59 < stepLocal_3) {
			var_1_30 = (((var_1_31 + var_1_32) + var_1_22) + ((max (var_1_33 , var_1_34)) - var_1_35));
		} else {
			var_1_30 = (var_1_36 - (var_1_32 + var_1_35));
		}
	} else {
		var_1_30 = var_1_23;
	}


	// From: Req11Batch189Amount250
	unsigned char stepLocal_6 = var_1_34;
	if (var_1_53) {
		if (stepLocal_6 == ((var_1_30 / var_1_33) % var_1_36)) {
			var_1_41 = ((var_1_8 > var_1_33) || (! (var_1_12 || var_1_43)));
		}
	}


	// From: Req14Batch189Amount250
	if (! var_1_53) {
		var_1_46 = var_1_35;
	} else {
		if (var_1_27 <= var_1_25) {
			var_1_46 = ((var_1_29 - (var_1_34 + var_1_36)) + var_1_33);
		} else {
			var_1_46 = (max (last_1_var_1_46 , (abs (min (var_1_34 , var_1_28)))));
		}
	}


	// From: Req23Batch189Amount250
	if (var_1_41) {
		var_1_61 = var_1_62;
	}


	// From: Req5Batch189Amount250
	signed long int stepLocal_2 = var_1_15;
	unsigned char stepLocal_1 = var_1_49;
	unsigned long int stepLocal_0 = 64u * var_1_59;
	if (stepLocal_2 < (var_1_46 + var_1_59)) {
		if (! var_1_49) {
			var_1_16 = var_1_19;
		} else {
			if (stepLocal_0 >= (var_1_20 - var_1_8)) {
				var_1_16 = var_1_19;
			}
		}
	} else {
		if (var_1_5 <= (- (128.2f * var_1_1))) {
			var_1_16 = ((min (var_1_21 , (64 - var_1_22))) - (min (var_1_23 , var_1_24)));
		} else {
			if (stepLocal_1 && var_1_11) {
				var_1_16 = (max (var_1_24 , 8));
			} else {
				var_1_16 = -8;
			}
		}
	}


	// From: Req9Batch189Amount250
	unsigned char stepLocal_5 = var_1_32;
	unsigned char stepLocal_4 = var_1_31;
	if (stepLocal_4 <= var_1_25) {
		if (var_1_53) {
			var_1_37 = ((min (var_1_19 , var_1_32)) + (var_1_16 + var_1_27));
		}
	} else {
		if (! (var_1_25 > var_1_13)) {
			var_1_37 = (var_1_23 + (abs (var_1_35)));
		} else {
			if (stepLocal_5 <= (var_1_36 - var_1_31)) {
				var_1_37 = (var_1_32 - var_1_39);
			} else {
				var_1_37 = (max (var_1_15 , var_1_23));
			}
		}
	}


	// From: Req2Batch189Amount250
	if (! var_1_10) {
		if ((var_1_8 - var_1_9) < var_1_37) {
			var_1_7 = var_1_8;
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 32767);
	assume_abort_if_not(var_1_8 <= 65535);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -1073741823);
	assume_abort_if_not(var_1_15 <= 1073741823);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -127);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967295);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -1);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 32767);
	assume_abort_if_not(var_1_27 <= 65534);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 16383);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 16384);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 32);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 63);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 63);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 127);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_39 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 2147483646);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= 62);
	assume_abort_if_not(var_1_51 <= 126);
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= -230584.3009213691400e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691400e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= -230584.3009213691400e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691400e+12F && var_1_57 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 254);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= -31);
	assume_abort_if_not(var_1_64 <= 31);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -63);
	assume_abort_if_not(var_1_65 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_59 = var_1_59;
}

int property(void) {
	return ((((((((((((((((((((((((! (var_1_10 || var_1_53)) ? (var_1_1 == ((float) ((var_1_5 + var_1_6) - 1.000000000000005E13f))) : 1) && ((! var_1_10) ? (((var_1_8 - var_1_9) < var_1_37) ? (var_1_7 == ((unsigned long int) var_1_8)) : 1) : 1)) && (last_1_var_1_53 ? (last_1_var_1_49 ? (var_1_10 == ((unsigned char) ((! 1) || (! var_1_11)))) : 1) : (var_1_10 == ((unsigned char) (! var_1_12))))) && ((var_1_6 < var_1_1) ? ((var_1_54 >= var_1_6) ? (var_1_13 == ((signed long int) (var_1_59 - var_1_9))) : (var_1_13 == ((signed long int) (var_1_59 - var_1_8)))) : (var_1_13 == ((signed long int) (var_1_9 + var_1_15))))) && ((var_1_15 < (var_1_46 + var_1_59)) ? ((! var_1_49) ? (var_1_16 == ((signed char) var_1_19)) : (((64u * var_1_59) >= (var_1_20 - var_1_8)) ? (var_1_16 == ((signed char) var_1_19)) : 1)) : ((var_1_5 <= (- (128.2f * var_1_1))) ? (var_1_16 == ((signed char) ((min (var_1_21 , (64 - var_1_22))) - (min (var_1_23 , var_1_24))))) : ((var_1_49 && var_1_11) ? (var_1_16 == ((signed char) (max (var_1_24 , 8)))) : (var_1_16 == ((signed char) -8)))))) && ((var_1_9 >= var_1_59) ? ((var_1_21 >= var_1_9) ? (var_1_25 == ((signed long int) var_1_24)) : (var_1_25 == ((signed long int) var_1_9))) : (var_1_25 == ((signed long int) (max (var_1_24 , (abs (var_1_8)))))))) && (var_1_49 ? (var_1_26 == ((unsigned short int) (max ((min (var_1_24 , 4)) , (var_1_27 - var_1_9))))) : (var_1_53 ? (var_1_26 == ((unsigned short int) ((var_1_28 + var_1_29) - (var_1_22 + var_1_23)))) : 1))) && ((! var_1_49) ? ((var_1_59 < (~ var_1_25)) ? (var_1_30 == ((unsigned char) (((var_1_31 + var_1_32) + var_1_22) + ((max (var_1_33 , var_1_34)) - var_1_35)))) : (var_1_30 == ((unsigned char) (var_1_36 - (var_1_32 + var_1_35))))) : (var_1_30 == ((unsigned char) var_1_23)))) && ((var_1_31 <= var_1_25) ? (var_1_53 ? (var_1_37 == ((signed long int) ((min (var_1_19 , var_1_32)) + (var_1_16 + var_1_27)))) : 1) : ((! (var_1_25 > var_1_13)) ? (var_1_37 == ((signed long int) (var_1_23 + (abs (var_1_35))))) : ((var_1_32 <= (var_1_36 - var_1_31)) ? (var_1_37 == ((signed long int) (var_1_32 - var_1_39))) : (var_1_37 == ((signed long int) (max (var_1_15 , var_1_23)))))))) && ((var_1_33 < (var_1_52 % var_1_34)) ? (((abs (var_1_32 - var_1_34)) <= (var_1_52 % var_1_28)) ? (var_1_40 == ((unsigned long int) var_1_44)) : 1) : (var_1_40 == ((unsigned long int) var_1_44)))) && (var_1_53 ? ((var_1_34 == ((var_1_30 / var_1_33) % var_1_36)) ? (var_1_41 == ((unsigned char) ((var_1_8 > var_1_33) || (! (var_1_12 || var_1_43))))) : 1) : 1)) && ((! var_1_43) ? ((last_1_var_1_25 != (max ((var_1_15 & var_1_22) , last_1_var_1_40))) ? (var_1_44 == ((signed long int) ((abs (last_1_var_1_59 - var_1_35)) + ((max (var_1_9 , var_1_34)) + (min (var_1_24 , var_1_33)))))) : (var_1_44 == ((signed long int) (var_1_31 + var_1_19)))) : 1)) && (((var_1_29 << last_1_var_1_25) < var_1_33) ? (var_1_45 == ((unsigned char) ((var_1_5 > last_1_var_1_54) && var_1_12))) : (var_1_45 == ((unsigned char) (var_1_12 || var_1_11))))) && ((! var_1_53) ? (var_1_46 == ((unsigned short int) var_1_35)) : ((var_1_27 <= var_1_25) ? (var_1_46 == ((unsigned short int) ((var_1_29 - (var_1_34 + var_1_36)) + var_1_33))) : (var_1_46 == ((unsigned short int) (max (last_1_var_1_46 , (abs (min (var_1_34 , var_1_28)))))))))) && (var_1_53 ? (var_1_47 == ((unsigned short int) (min ((abs (256)) , (abs (48875 - 5)))))) : (var_1_47 == ((unsigned short int) (var_1_27 - (var_1_35 + var_1_34)))))) && ((9.9999999995E9f <= (- (var_1_5 * var_1_58))) ? (var_1_49 == ((unsigned char) (! var_1_12))) : 1)) && ((! var_1_12) ? (((var_1_6 - var_1_5) < ((- var_1_54) + (max (2.75f , var_1_1)))) ? (var_1_50 == ((signed char) ((var_1_51 - var_1_32) - var_1_22))) : (var_1_50 == ((signed char) var_1_19))) : (var_1_10 ? (((- var_1_5) <= var_1_54) ? (var_1_50 == ((signed char) (var_1_32 - (abs (var_1_35))))) : 1) : 1))) && (last_1_var_1_45 ? (var_1_52 == ((unsigned long int) var_1_29)) : (var_1_52 == ((unsigned long int) (var_1_9 + var_1_23))))) && ((last_1_var_1_52 > var_1_9) ? ((last_1_var_1_47 <= (var_1_27 - var_1_35)) ? ((var_1_23 <= var_1_33) ? (var_1_53 == ((unsigned char) (! 1))) : (var_1_53 == ((unsigned char) (last_1_var_1_10 && var_1_43)))) : (var_1_53 == ((unsigned char) var_1_11))) : (var_1_53 == ((unsigned char) (var_1_43 || var_1_12))))) && ((var_1_21 != (var_1_52 / var_1_33)) ? ((! var_1_45) ? (var_1_54 == ((double) var_1_6)) : ((var_1_44 >= var_1_47) ? ((var_1_23 <= var_1_21) ? (var_1_54 == ((double) ((var_1_56 + var_1_57) + var_1_6))) : 1) : 1)) : (var_1_54 == ((double) (min (var_1_56 , (max (var_1_57 , var_1_6)))))))) && (var_1_10 ? (var_1_58 == ((float) var_1_5)) : (var_1_58 == ((float) var_1_57)))) && (var_1_49 ? (var_1_59 == ((unsigned long int) var_1_60)) : (var_1_59 == ((unsigned long int) var_1_9)))) && (var_1_41 ? (var_1_61 == ((unsigned char) var_1_62)) : 1)) && ((var_1_51 > var_1_9) ? (var_1_63 == ((signed char) (var_1_35 + (var_1_32 + var_1_64)))) : (var_1_63 == ((signed char) ((min (var_1_22 , (min (var_1_31 , var_1_35)))) + var_1_65))))
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
