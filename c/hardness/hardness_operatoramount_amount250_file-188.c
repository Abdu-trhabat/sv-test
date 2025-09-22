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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch188Amount250.c", 13, "reach_error"); }
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
signed char var_1_1 = 0;
signed char var_1_4 = -2;
signed char var_1_5 = 10;
signed char var_1_6 = 16;
unsigned long int var_1_7 = 100;
signed char var_1_9 = -1;
signed char var_1_10 = 4;
unsigned long int var_1_11 = 1754875810;
unsigned long int var_1_12 = 128;
double var_1_13 = 100000000000000.75;
signed char var_1_14 = -64;
double var_1_15 = 100.5;
double var_1_16 = 24.2;
double var_1_17 = 24.5;
double var_1_18 = 4.8;
unsigned char var_1_19 = 1;
unsigned long int var_1_20 = 5;
unsigned char var_1_21 = 0;
signed long int var_1_22 = -256;
double var_1_23 = 500.75;
signed long int var_1_24 = 1000000000;
signed long int var_1_25 = 0;
signed long int var_1_26 = 1143294006;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 50;
unsigned char var_1_31 = 5;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
signed long int var_1_34 = 32;
unsigned char var_1_35 = 8;
float var_1_36 = 127.875;
signed long int var_1_37 = -1;
unsigned long int var_1_38 = 2899953434;
unsigned char var_1_39 = 64;
signed short int var_1_40 = -5;
unsigned char var_1_41 = 5;
unsigned char var_1_42 = 128;
unsigned long int var_1_43 = 4;
float var_1_45 = 9.5;
signed char var_1_46 = 2;
unsigned long int var_1_47 = 8;
unsigned long int var_1_48 = 3311271620;
unsigned long int var_1_49 = 5;
unsigned short int var_1_50 = 8;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_40 = -5;
unsigned long int last_1_var_1_43 = 4;
float last_1_var_1_45 = 9.5;
unsigned long int last_1_var_1_47 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch188Amount250
	if ((last_1_var_1_43 % var_1_20) < (var_1_12 + last_1_var_1_47)) {
		var_1_19 = var_1_21;
	}


	// From: Req8Batch188Amount250
	if (var_1_19) {
		var_1_34 = var_1_30;
	} else {
		var_1_34 = (var_1_6 + var_1_5);
	}


	// From: Req17Batch188Amount250
	if (var_1_16 >= var_1_18) {
		if (((31.6 / 4.971) * var_1_15) >= last_1_var_1_45) {
			var_1_47 = (var_1_48 - var_1_5);
		} else {
			var_1_47 = (last_1_var_1_40 + (var_1_11 - var_1_5));
		}
	} else {
		var_1_47 = last_1_var_1_47;
	}


	// From: Req14Batch188Amount250
	signed char stepLocal_11 = var_1_5;
	if (((var_1_17 + var_1_16) - var_1_18) < (- var_1_15)) {
		if (var_1_33) {
			if (! ((var_1_20 >= var_1_31) && var_1_21)) {
				var_1_41 = (var_1_42 - (abs (var_1_31)));
			}
		} else {
			var_1_41 = (max (var_1_42 , var_1_30));
		}
	} else {
		if (var_1_10 < stepLocal_11) {
			var_1_41 = (max ((abs (max (var_1_6 , 5))) , var_1_31));
		} else {
			var_1_41 = (max (var_1_31 , (abs (var_1_5))));
		}
	}


	// From: Req2Batch188Amount250
	signed char stepLocal_2 = var_1_6;
	signed long int stepLocal_1 = (var_1_5 / var_1_9) / var_1_10;
	signed char stepLocal_0 = var_1_5;
	if (stepLocal_2 >= -4) {
		if (var_1_41 < stepLocal_0) {
			if (var_1_41 <= stepLocal_1) {
				var_1_7 = (3137329664u - var_1_5);
			} else {
				var_1_7 = var_1_5;
			}
		} else {
			var_1_7 = (min (((var_1_5 + var_1_6) + (var_1_11 - var_1_12)) , 25u));
		}
	} else {
		var_1_7 = (var_1_12 + var_1_5);
	}


	// From: Req11Batch188Amount250
	unsigned long int stepLocal_10 = var_1_20;
	if (! var_1_33) {
		if (stepLocal_10 > (var_1_31 + (var_1_38 - var_1_41))) {
			var_1_37 = (var_1_14 + (var_1_4 + (var_1_5 + var_1_10)));
		} else {
			var_1_37 = (max (var_1_30 , var_1_5));
		}
	}


	// From: Req18Batch188Amount250
	unsigned long int stepLocal_17 = max ((var_1_26 - var_1_30) , var_1_11);
	if (((var_1_25 * var_1_24) * var_1_37) > stepLocal_17) {
		var_1_49 = var_1_48;
	}


	// From: Req12Batch188Amount250
	if (var_1_26 >= var_1_47) {
		if (! (var_1_49 <= var_1_47)) {
			var_1_39 = 64;
		}
	} else {
		var_1_39 = (min ((min (var_1_30 , var_1_5)) , var_1_31));
	}


	// From: Req13Batch188Amount250
	if ((var_1_25 + (var_1_47 * var_1_7)) > ((- var_1_49) + var_1_24)) {
		var_1_40 = (var_1_31 - var_1_30);
	}


	// From: Req7Batch188Amount250
	unsigned char stepLocal_9 = var_1_49 <= var_1_10;
	unsigned long int stepLocal_8 = (min (var_1_12 , var_1_11)) - (var_1_25 + var_1_5);
	if ((var_1_24 / (var_1_30 + var_1_31)) < stepLocal_8) {
		if (stepLocal_9 || var_1_28) {
			var_1_29 = (var_1_21 || (var_1_32 || var_1_33));
		}
	} else {
		var_1_29 = var_1_28;
	}


	// From: Req10Batch188Amount250
	if (! var_1_33) {
		if (var_1_6 > var_1_11) {
			if (var_1_29) {
				var_1_36 = (max (var_1_17 , var_1_18));
			}
		} else {
			var_1_36 = var_1_15;
		}
	} else {
		var_1_36 = (var_1_16 + var_1_17);
	}


	// From: Req19Batch188Amount250
	unsigned char stepLocal_19 = (var_1_6 < var_1_31) && var_1_29;
	signed long int stepLocal_18 = var_1_24;
	if ((16 - var_1_6) < stepLocal_18) {
		if (stepLocal_19 && var_1_19) {
			var_1_50 = (48343 - var_1_46);
		} else {
			var_1_50 = 256;
		}
	} else {
		var_1_50 = var_1_37;
	}


	// From: Req9Batch188Amount250
	if (var_1_24 < var_1_50) {
		var_1_35 = ((abs (var_1_5)) + var_1_31);
	} else {
		var_1_35 = (min (50 , 64));
	}


	// From: Req6Batch188Amount250
	unsigned long int stepLocal_7 = var_1_20;
	if (var_1_14 <= stepLocal_7) {
		var_1_27 = (! var_1_21);
	} else {
		if ((- var_1_16) < var_1_23) {
			var_1_27 = (var_1_29 || var_1_28);
		}
	}


	// From: Req15Batch188Amount250
	unsigned long int stepLocal_14 = var_1_20;
	signed long int stepLocal_13 = -100;
	unsigned char stepLocal_12 = var_1_39;
	if (((var_1_14 % var_1_10) & var_1_35) > stepLocal_13) {
		var_1_43 = (min (var_1_11 , var_1_26));
	} else {
		if (stepLocal_14 < (max ((var_1_38 + 128u) , var_1_34))) {
			var_1_43 = (4264689893u - (max (var_1_6 , var_1_30)));
		} else {
			if (stepLocal_12 <= var_1_12) {
				var_1_43 = var_1_26;
			}
		}
	}


	// From: Req3Batch188Amount250
	unsigned long int stepLocal_5 = var_1_12 % var_1_11;
	unsigned long int stepLocal_4 = var_1_43 / (abs (var_1_14));
	unsigned long int stepLocal_3 = var_1_43 ^ var_1_6;
	if (stepLocal_3 < var_1_49) {
		if (var_1_37 > stepLocal_4) {
			var_1_13 = ((abs (var_1_15)) - (var_1_16 + var_1_17));
		} else {
			if (var_1_27) {
				var_1_13 = ((max (var_1_17 , var_1_16)) - var_1_18);
			} else {
				if ((abs (var_1_6)) == stepLocal_5) {
					var_1_13 = var_1_17;
				} else {
					var_1_13 = var_1_16;
				}
			}
		}
	} else {
		var_1_13 = var_1_15;
	}


	// From: Req16Batch188Amount250
	signed long int stepLocal_16 = var_1_5 >> var_1_46;
	signed long int stepLocal_15 = var_1_24;
	if (var_1_13 >= (- var_1_18)) {
		if ((var_1_11 - var_1_50) >= stepLocal_16) {
			var_1_45 = 10.125f;
		} else {
			if (var_1_4 == stepLocal_15) {
				var_1_45 = (abs (var_1_17 - var_1_16));
			}
		}
	} else {
		if (var_1_28) {
			var_1_45 = (var_1_17 - var_1_16);
		}
	}


	// From: Req1Batch188Amount250
	if (var_1_47 != (- 16u)) {
		if (var_1_27) {
			var_1_1 = (var_1_4 + (var_1_5 - var_1_6));
		} else {
			if (var_1_5 >= var_1_6) {
				var_1_1 = (var_1_5 - var_1_6);
			} else {
				if (var_1_5 <= (var_1_6 + -8)) {
					var_1_1 = (abs (min (-8 , var_1_5)));
				}
			}
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req5Batch188Amount250
	signed char stepLocal_6 = var_1_6;
	if (stepLocal_6 <= var_1_5) {
		if (var_1_17 != (max (var_1_15 , var_1_13))) {
			var_1_22 = var_1_14;
		} else {
			var_1_22 = ((var_1_12 + var_1_6) - var_1_5);
		}
	} else {
		if (var_1_27) {
			var_1_22 = (var_1_5 + var_1_9);
		} else {
			if (10.6f >= var_1_17) {
				if (var_1_15 < ((min (var_1_13 , var_1_16)) + (var_1_18 / var_1_23))) {
					var_1_22 = (var_1_5 + (var_1_6 - (var_1_24 - var_1_25)));
				}
			} else {
				if (var_1_29) {
					var_1_22 = (var_1_5 - var_1_26);
				} else {
					var_1_22 = (max (var_1_25 , (max (var_1_12 , var_1_24))));
				}
			}
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -63);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -128);
	assume_abort_if_not(var_1_9 <= 127);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -128);
	assume_abort_if_not(var_1_10 <= 127);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 1073741823);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1073741823);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 127);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 4294967295);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	assume_abort_if_not(var_1_23 != 0.0F);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= 536870911);
	assume_abort_if_not(var_1_24 <= 1073741823);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 536870911);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= 1073741822);
	assume_abort_if_not(var_1_26 <= 2147483646);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 128);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 2147483647);
	assume_abort_if_not(var_1_38 <= 4294967295);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 127);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 6);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 2147483647);
	assume_abort_if_not(var_1_48 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_40 = var_1_40;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_47 = var_1_47;
}

int property(void) {
	return (((((((((((((((((((var_1_47 != (- 16u)) ? (var_1_27 ? (var_1_1 == ((signed char) (var_1_4 + (var_1_5 - var_1_6)))) : ((var_1_5 >= var_1_6) ? (var_1_1 == ((signed char) (var_1_5 - var_1_6))) : ((var_1_5 <= (var_1_6 + -8)) ? (var_1_1 == ((signed char) (abs (min (-8 , var_1_5))))) : 1))) : (var_1_1 == ((signed char) var_1_4))) && ((var_1_6 >= -4) ? ((var_1_41 < var_1_5) ? ((var_1_41 <= ((var_1_5 / var_1_9) / var_1_10)) ? (var_1_7 == ((unsigned long int) (3137329664u - var_1_5))) : (var_1_7 == ((unsigned long int) var_1_5))) : (var_1_7 == ((unsigned long int) (min (((var_1_5 + var_1_6) + (var_1_11 - var_1_12)) , 25u))))) : (var_1_7 == ((unsigned long int) (var_1_12 + var_1_5))))) && (((var_1_43 ^ var_1_6) < var_1_49) ? ((var_1_37 > (var_1_43 / (abs (var_1_14)))) ? (var_1_13 == ((double) ((abs (var_1_15)) - (var_1_16 + var_1_17)))) : (var_1_27 ? (var_1_13 == ((double) ((max (var_1_17 , var_1_16)) - var_1_18))) : (((abs (var_1_6)) == (var_1_12 % var_1_11)) ? (var_1_13 == ((double) var_1_17)) : (var_1_13 == ((double) var_1_16))))) : (var_1_13 == ((double) var_1_15)))) && (((last_1_var_1_43 % var_1_20) < (var_1_12 + last_1_var_1_47)) ? (var_1_19 == ((unsigned char) var_1_21)) : 1)) && ((var_1_6 <= var_1_5) ? ((var_1_17 != (max (var_1_15 , var_1_13))) ? (var_1_22 == ((signed long int) var_1_14)) : (var_1_22 == ((signed long int) ((var_1_12 + var_1_6) - var_1_5)))) : (var_1_27 ? (var_1_22 == ((signed long int) (var_1_5 + var_1_9))) : ((10.6f >= var_1_17) ? ((var_1_15 < ((min (var_1_13 , var_1_16)) + (var_1_18 / var_1_23))) ? (var_1_22 == ((signed long int) (var_1_5 + (var_1_6 - (var_1_24 - var_1_25))))) : 1) : (var_1_29 ? (var_1_22 == ((signed long int) (var_1_5 - var_1_26))) : (var_1_22 == ((signed long int) (max (var_1_25 , (max (var_1_12 , var_1_24))))))))))) && ((var_1_14 <= var_1_20) ? (var_1_27 == ((unsigned char) (! var_1_21))) : (((- var_1_16) < var_1_23) ? (var_1_27 == ((unsigned char) (var_1_29 || var_1_28))) : 1))) && (((var_1_24 / (var_1_30 + var_1_31)) < ((min (var_1_12 , var_1_11)) - (var_1_25 + var_1_5))) ? (((var_1_49 <= var_1_10) || var_1_28) ? (var_1_29 == ((unsigned char) (var_1_21 || (var_1_32 || var_1_33)))) : 1) : (var_1_29 == ((unsigned char) var_1_28)))) && (var_1_19 ? (var_1_34 == ((signed long int) var_1_30)) : (var_1_34 == ((signed long int) (var_1_6 + var_1_5))))) && ((var_1_24 < var_1_50) ? (var_1_35 == ((unsigned char) ((abs (var_1_5)) + var_1_31))) : (var_1_35 == ((unsigned char) (min (50 , 64)))))) && ((! var_1_33) ? ((var_1_6 > var_1_11) ? (var_1_29 ? (var_1_36 == ((float) (max (var_1_17 , var_1_18)))) : 1) : (var_1_36 == ((float) var_1_15))) : (var_1_36 == ((float) (var_1_16 + var_1_17))))) && ((! var_1_33) ? ((var_1_20 > (var_1_31 + (var_1_38 - var_1_41))) ? (var_1_37 == ((signed long int) (var_1_14 + (var_1_4 + (var_1_5 + var_1_10))))) : (var_1_37 == ((signed long int) (max (var_1_30 , var_1_5))))) : 1)) && ((var_1_26 >= var_1_47) ? ((! (var_1_49 <= var_1_47)) ? (var_1_39 == ((unsigned char) 64)) : 1) : (var_1_39 == ((unsigned char) (min ((min (var_1_30 , var_1_5)) , var_1_31)))))) && (((var_1_25 + (var_1_47 * var_1_7)) > ((- var_1_49) + var_1_24)) ? (var_1_40 == ((signed short int) (var_1_31 - var_1_30))) : 1)) && ((((var_1_17 + var_1_16) - var_1_18) < (- var_1_15)) ? (var_1_33 ? ((! ((var_1_20 >= var_1_31) && var_1_21)) ? (var_1_41 == ((unsigned char) (var_1_42 - (abs (var_1_31))))) : 1) : (var_1_41 == ((unsigned char) (max (var_1_42 , var_1_30))))) : ((var_1_10 < var_1_5) ? (var_1_41 == ((unsigned char) (max ((abs (max (var_1_6 , 5))) , var_1_31)))) : (var_1_41 == ((unsigned char) (max (var_1_31 , (abs (var_1_5))))))))) && ((((var_1_14 % var_1_10) & var_1_35) > -100) ? (var_1_43 == ((unsigned long int) (min (var_1_11 , var_1_26)))) : ((var_1_20 < (max ((var_1_38 + 128u) , var_1_34))) ? (var_1_43 == ((unsigned long int) (4264689893u - (max (var_1_6 , var_1_30))))) : ((var_1_39 <= var_1_12) ? (var_1_43 == ((unsigned long int) var_1_26)) : 1)))) && ((var_1_13 >= (- var_1_18)) ? (((var_1_11 - var_1_50) >= (var_1_5 >> var_1_46)) ? (var_1_45 == ((float) 10.125f)) : ((var_1_4 == var_1_24) ? (var_1_45 == ((float) (abs (var_1_17 - var_1_16)))) : 1)) : (var_1_28 ? (var_1_45 == ((float) (var_1_17 - var_1_16))) : 1))) && ((var_1_16 >= var_1_18) ? ((((31.6 / 4.971) * var_1_15) >= last_1_var_1_45) ? (var_1_47 == ((unsigned long int) (var_1_48 - var_1_5))) : (var_1_47 == ((unsigned long int) (last_1_var_1_40 + (var_1_11 - var_1_5))))) : (var_1_47 == ((unsigned long int) last_1_var_1_47)))) && ((((var_1_25 * var_1_24) * var_1_37) > (max ((var_1_26 - var_1_30) , var_1_11))) ? (var_1_49 == ((unsigned long int) var_1_48)) : 1)) && (((16 - var_1_6) < var_1_24) ? ((((var_1_6 < var_1_31) && var_1_29) && var_1_19) ? (var_1_50 == ((unsigned short int) (48343 - var_1_46))) : (var_1_50 == ((unsigned short int) 256))) : (var_1_50 == ((unsigned short int) var_1_37)))
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
