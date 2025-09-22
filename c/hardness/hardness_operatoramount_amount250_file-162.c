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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch162Amount250.c", 13, "reach_error"); }
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
signed long int var_1_1 = 32;
signed long int var_1_5 = -1;
signed long int var_1_6 = 16;
signed long int var_1_7 = -4;
signed long int var_1_8 = 128;
signed long int var_1_9 = 50;
signed long int var_1_10 = 10;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
double var_1_16 = 16.25;
double var_1_17 = 25.25;
double var_1_18 = 7.5;
unsigned long int var_1_19 = 100000;
unsigned long int var_1_20 = 2820786972;
unsigned long int var_1_21 = 1160467580;
signed long int var_1_23 = -256;
signed char var_1_24 = 25;
signed char var_1_25 = 2;
signed char var_1_26 = 8;
unsigned long int var_1_27 = 16;
signed short int var_1_28 = -2;
unsigned char var_1_29 = 16;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 32;
unsigned char var_1_32 = 32;
double var_1_33 = 9.5;
signed char var_1_34 = -16;
signed long int var_1_35 = -32;
signed char var_1_36 = 0;
signed char var_1_37 = 1;
unsigned short int var_1_38 = 8;
unsigned short int var_1_39 = 18673;
double var_1_40 = 4.5;
signed long int var_1_41 = 1;
double var_1_42 = 9.5;
double var_1_43 = 8.2;
double var_1_44 = 49.4;
signed char var_1_45 = -25;
signed char var_1_46 = 5;
signed char var_1_47 = 64;
unsigned char var_1_48 = 8;
float var_1_49 = 128.5;
float var_1_51 = 999.125;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 128;
unsigned char var_1_54 = 200;
signed char var_1_55 = 1;
unsigned long int var_1_56 = 8;
signed char var_1_57 = -25;
signed char var_1_59 = 5;
signed short int var_1_60 = -8;
unsigned char var_1_61 = 0;
unsigned short int var_1_62 = 8;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_11 = 0;
double last_1_var_1_16 = 16.25;
unsigned long int last_1_var_1_27 = 16;
double last_1_var_1_33 = 9.5;
double last_1_var_1_40 = 4.5;
float last_1_var_1_49 = 128.5;
signed char last_1_var_1_57 = -25;
unsigned short int last_1_var_1_62 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req20Batch162Amount250
	signed long int stepLocal_15 = last_1_var_1_62;
	if (var_1_47 <= stepLocal_15) {
		if (last_1_var_1_49 != last_1_var_1_40) {
			var_1_61 = var_1_15;
		} else {
			var_1_61 = var_1_14;
		}
	} else {
		var_1_61 = var_1_13;
	}


	// From: Req4Batch162Amount250
	unsigned long int stepLocal_1 = -256 * last_1_var_1_27;
	if (var_1_7 <= stepLocal_1) {
		if (last_1_var_1_11) {
			var_1_19 = (var_1_20 - (var_1_21 - var_1_8));
		} else {
			if (((var_1_18 + last_1_var_1_33) + var_1_17) < last_1_var_1_16) {
				var_1_19 = var_1_8;
			} else {
				var_1_19 = var_1_9;
			}
		}
	} else {
		var_1_19 = var_1_20;
	}


	// From: Req6Batch162Amount250
	if (! (-128 >= (var_1_8 % var_1_26))) {
		var_1_27 = ((var_1_9 + var_1_8) + var_1_21);
	}


	// From: Req8Batch162Amount250
	signed long int stepLocal_6 = 5;
	unsigned long int stepLocal_5 = max (var_1_19 , var_1_10);
	if ((var_1_7 / var_1_26) == stepLocal_5) {
		if (stepLocal_6 > var_1_27) {
			var_1_29 = (min ((min (var_1_25 , var_1_24)) , var_1_30));
		} else {
			var_1_29 = ((var_1_31 + var_1_32) + (max (var_1_24 , var_1_25)));
		}
	}


	// From: Req11Batch162Amount250
	unsigned long int stepLocal_10 = var_1_20 - var_1_10;
	if (var_1_27 <= stepLocal_10) {
		var_1_38 = (var_1_24 + (var_1_39 - var_1_32));
	} else {
		var_1_38 = (min (var_1_25 , var_1_31));
	}


	// From: Req12Batch162Amount250
	if ((var_1_9 * (abs (var_1_36))) <= (var_1_21 << (max (var_1_41 , 0)))) {
		if (! var_1_15) {
			var_1_40 = var_1_17;
		} else {
			if (-10 == var_1_10) {
				var_1_40 = ((var_1_42 + var_1_18) - var_1_43);
			} else {
				var_1_40 = (min ((max ((var_1_42 + var_1_17) , var_1_18)) , (max (var_1_44 , var_1_43))));
			}
		}
	}


	// From: Req13Batch162Amount250
	signed long int stepLocal_12 = min (256 , var_1_31);
	signed char stepLocal_11 = var_1_36;
	if (stepLocal_11 == var_1_32) {
		var_1_45 = (max ((var_1_32 + var_1_41) , (min ((var_1_46 - var_1_37) , 4))));
	} else {
		if (((max (var_1_41 , var_1_39)) - var_1_24) >= stepLocal_12) {
			var_1_45 = (max ((var_1_32 - (min (var_1_41 , var_1_36))) , var_1_31));
		} else {
			var_1_45 = (var_1_46 - (var_1_47 - (var_1_41 + var_1_37)));
		}
	}


	// From: Req14Batch162Amount250
	var_1_48 = var_1_31;


	// From: Req16Batch162Amount250
	if ((min (4.2 , (var_1_18 - var_1_43))) <= var_1_44) {
		var_1_52 = ((max (var_1_53 , var_1_54)) - (min (16 , 10)));
	}


	// From: Req17Batch162Amount250
	unsigned long int stepLocal_14 = var_1_19;
	if (stepLocal_14 >= var_1_56) {
		var_1_55 = ((var_1_47 - var_1_37) - var_1_31);
	} else {
		if (var_1_14) {
			var_1_55 = ((max (var_1_41 , var_1_32)) + (var_1_37 - var_1_36));
		} else {
			var_1_55 = (max (var_1_41 , (var_1_37 + var_1_36)));
		}
	}


	// From: Req19Batch162Amount250
	if ((var_1_59 / var_1_53) < var_1_19) {
		var_1_60 = (var_1_32 - var_1_31);
	}


	// From: Req1Batch162Amount250
	unsigned char stepLocal_0 = var_1_61;
	if (stepLocal_0 || (var_1_27 >= var_1_19)) {
		if (var_1_61) {
			var_1_1 = (var_1_5 - 256);
		} else {
			var_1_1 = (max (var_1_5 , var_1_6));
		}
	} else {
		var_1_1 = (var_1_7 + ((var_1_8 + var_1_9) - var_1_10));
	}


	// From: Req2Batch162Amount250
	if (var_1_10 < (var_1_1 + (abs (var_1_9)))) {
		if ((abs (var_1_8)) >= var_1_10) {
			var_1_11 = (last_1_var_1_11 && (! (var_1_12 && var_1_13)));
		} else {
			var_1_11 = ((var_1_14 || var_1_15) || (! var_1_12));
		}
	} else {
		var_1_11 = var_1_12;
	}


	// From: Req3Batch162Amount250
	if (((var_1_9 ^ 4) * var_1_27) > var_1_1) {
		var_1_16 = ((5.5 + var_1_17) + (abs (3.5 - var_1_18)));
	}


	// From: Req5Batch162Amount250
	signed long int stepLocal_3 = (var_1_24 - var_1_25) / var_1_26;
	unsigned long int stepLocal_2 = var_1_19;
	if (stepLocal_2 > var_1_27) {
		if (stepLocal_3 > var_1_9) {
			var_1_23 = (var_1_9 + (var_1_25 + var_1_26));
		} else {
			var_1_23 = (((min (var_1_8 , var_1_25)) - var_1_9) + (max (var_1_26 , var_1_7)));
		}
	} else {
		var_1_23 = (256 + var_1_26);
	}


	// From: Req9Batch162Amount250
	unsigned long int stepLocal_7 = var_1_19;
	if (var_1_16 < (var_1_17 * var_1_18)) {
		if (stepLocal_7 < var_1_1) {
			var_1_33 = (var_1_18 + var_1_17);
		} else {
			var_1_33 = var_1_17;
		}
	} else {
		var_1_33 = var_1_18;
	}


	// From: Req7Batch162Amount250
	signed long int stepLocal_4 = var_1_8;
	if (var_1_16 >= (var_1_40 * var_1_17)) {
		if (stepLocal_4 < (max ((min (var_1_25 , var_1_9)) , var_1_24))) {
			var_1_28 = (var_1_24 + var_1_25);
		} else {
			var_1_28 = -2;
		}
	} else {
		var_1_28 = var_1_24;
	}


	// From: Req10Batch162Amount250
	signed long int stepLocal_9 = ~ var_1_26;
	unsigned char stepLocal_8 = var_1_32;
	if (stepLocal_9 < ((100 / var_1_21) / var_1_35)) {
		if (var_1_15) {
			var_1_34 = (var_1_31 - var_1_32);
		} else {
			var_1_34 = var_1_32;
		}
	} else {
		if (stepLocal_8 <= var_1_25) {
			if (var_1_40 >= 1.25) {
				var_1_34 = (var_1_31 - ((var_1_36 + var_1_37) + var_1_32));
			}
		} else {
			var_1_34 = (var_1_31 - var_1_37);
		}
	}


	// From: Req18Batch162Amount250
	if (((var_1_30 * var_1_28) % (min (var_1_26 , var_1_53))) < ((var_1_41 + 25) - (abs (var_1_31)))) {
		if (var_1_39 != var_1_27) {
			if (((var_1_34 + last_1_var_1_57) + var_1_5) <= (var_1_27 + var_1_7)) {
				var_1_57 = (100 - (var_1_47 - var_1_32));
			}
		} else {
			if (var_1_61) {
				var_1_57 = ((var_1_47 - var_1_59) - var_1_36);
			} else {
				var_1_57 = ((var_1_41 - var_1_59) + var_1_37);
			}
		}
	} else {
		var_1_57 = (abs (var_1_47));
	}


	// From: Req15Batch162Amount250
	signed long int stepLocal_13 = max ((var_1_23 | var_1_41) , var_1_23);
	if (var_1_61) {
		if (var_1_25 < stepLocal_13) {
			var_1_49 = (max (var_1_18 , var_1_51));
		} else {
			var_1_49 = var_1_42;
		}
	}


	// From: Req21Batch162Amount250
	if (var_1_49 > 15.5f) {
		if (! var_1_61) {
			if (var_1_15 || (! var_1_11)) {
				var_1_62 = var_1_19;
			} else {
				var_1_62 = var_1_23;
			}
		} else {
			var_1_62 = var_1_25;
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483647);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -1073741823);
	assume_abort_if_not(var_1_7 <= 1073741823);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 536870912);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 536870911);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	assume_abort_if_not(var_1_26 != 0);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 64);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483648);
	assume_abort_if_not(var_1_35 <= 2147483647);
	assume_abort_if_not(var_1_35 != 0);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 32);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 31);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 16383);
	assume_abort_if_not(var_1_39 <= 32767);
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -1);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 63);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= -922337.2036854766000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854766000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 127);
	assume_abort_if_not(var_1_53 <= 254);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 127);
	assume_abort_if_not(var_1_54 <= 254);
	var_1_56 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 4294967295);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_62 = var_1_62;
}

int property(void) {
	return (((((((((((((((((((((var_1_61 || (var_1_27 >= var_1_19)) ? (var_1_61 ? (var_1_1 == ((signed long int) (var_1_5 - 256))) : (var_1_1 == ((signed long int) (max (var_1_5 , var_1_6))))) : (var_1_1 == ((signed long int) (var_1_7 + ((var_1_8 + var_1_9) - var_1_10))))) && ((var_1_10 < (var_1_1 + (abs (var_1_9)))) ? (((abs (var_1_8)) >= var_1_10) ? (var_1_11 == ((unsigned char) (last_1_var_1_11 && (! (var_1_12 && var_1_13))))) : (var_1_11 == ((unsigned char) ((var_1_14 || var_1_15) || (! var_1_12))))) : (var_1_11 == ((unsigned char) var_1_12)))) && ((((var_1_9 ^ 4) * var_1_27) > var_1_1) ? (var_1_16 == ((double) ((5.5 + var_1_17) + (abs (3.5 - var_1_18))))) : 1)) && ((var_1_7 <= (-256 * last_1_var_1_27)) ? (last_1_var_1_11 ? (var_1_19 == ((unsigned long int) (var_1_20 - (var_1_21 - var_1_8)))) : ((((var_1_18 + last_1_var_1_33) + var_1_17) < last_1_var_1_16) ? (var_1_19 == ((unsigned long int) var_1_8)) : (var_1_19 == ((unsigned long int) var_1_9)))) : (var_1_19 == ((unsigned long int) var_1_20)))) && ((var_1_19 > var_1_27) ? ((((var_1_24 - var_1_25) / var_1_26) > var_1_9) ? (var_1_23 == ((signed long int) (var_1_9 + (var_1_25 + var_1_26)))) : (var_1_23 == ((signed long int) (((min (var_1_8 , var_1_25)) - var_1_9) + (max (var_1_26 , var_1_7)))))) : (var_1_23 == ((signed long int) (256 + var_1_26))))) && ((! (-128 >= (var_1_8 % var_1_26))) ? (var_1_27 == ((unsigned long int) ((var_1_9 + var_1_8) + var_1_21))) : 1)) && ((var_1_16 >= (var_1_40 * var_1_17)) ? ((var_1_8 < (max ((min (var_1_25 , var_1_9)) , var_1_24))) ? (var_1_28 == ((signed short int) (var_1_24 + var_1_25))) : (var_1_28 == ((signed short int) -2))) : (var_1_28 == ((signed short int) var_1_24)))) && (((var_1_7 / var_1_26) == (max (var_1_19 , var_1_10))) ? ((5 > var_1_27) ? (var_1_29 == ((unsigned char) (min ((min (var_1_25 , var_1_24)) , var_1_30)))) : (var_1_29 == ((unsigned char) ((var_1_31 + var_1_32) + (max (var_1_24 , var_1_25)))))) : 1)) && ((var_1_16 < (var_1_17 * var_1_18)) ? ((var_1_19 < var_1_1) ? (var_1_33 == ((double) (var_1_18 + var_1_17))) : (var_1_33 == ((double) var_1_17))) : (var_1_33 == ((double) var_1_18)))) && (((~ var_1_26) < ((100 / var_1_21) / var_1_35)) ? (var_1_15 ? (var_1_34 == ((signed char) (var_1_31 - var_1_32))) : (var_1_34 == ((signed char) var_1_32))) : ((var_1_32 <= var_1_25) ? ((var_1_40 >= 1.25) ? (var_1_34 == ((signed char) (var_1_31 - ((var_1_36 + var_1_37) + var_1_32)))) : 1) : (var_1_34 == ((signed char) (var_1_31 - var_1_37)))))) && ((var_1_27 <= (var_1_20 - var_1_10)) ? (var_1_38 == ((unsigned short int) (var_1_24 + (var_1_39 - var_1_32)))) : (var_1_38 == ((unsigned short int) (min (var_1_25 , var_1_31)))))) && (((var_1_9 * (abs (var_1_36))) <= (var_1_21 << (max (var_1_41 , 0)))) ? ((! var_1_15) ? (var_1_40 == ((double) var_1_17)) : ((-10 == var_1_10) ? (var_1_40 == ((double) ((var_1_42 + var_1_18) - var_1_43))) : (var_1_40 == ((double) (min ((max ((var_1_42 + var_1_17) , var_1_18)) , (max (var_1_44 , var_1_43)))))))) : 1)) && ((var_1_36 == var_1_32) ? (var_1_45 == ((signed char) (max ((var_1_32 + var_1_41) , (min ((var_1_46 - var_1_37) , 4)))))) : ((((max (var_1_41 , var_1_39)) - var_1_24) >= (min (256 , var_1_31))) ? (var_1_45 == ((signed char) (max ((var_1_32 - (min (var_1_41 , var_1_36))) , var_1_31)))) : (var_1_45 == ((signed char) (var_1_46 - (var_1_47 - (var_1_41 + var_1_37)))))))) && (var_1_48 == ((unsigned char) var_1_31))) && (var_1_61 ? ((var_1_25 < (max ((var_1_23 | var_1_41) , var_1_23))) ? (var_1_49 == ((float) (max (var_1_18 , var_1_51)))) : (var_1_49 == ((float) var_1_42))) : 1)) && (((min (4.2 , (var_1_18 - var_1_43))) <= var_1_44) ? (var_1_52 == ((unsigned char) ((max (var_1_53 , var_1_54)) - (min (16 , 10))))) : 1)) && ((var_1_19 >= var_1_56) ? (var_1_55 == ((signed char) ((var_1_47 - var_1_37) - var_1_31))) : (var_1_14 ? (var_1_55 == ((signed char) ((max (var_1_41 , var_1_32)) + (var_1_37 - var_1_36)))) : (var_1_55 == ((signed char) (max (var_1_41 , (var_1_37 + var_1_36)))))))) && ((((var_1_30 * var_1_28) % (min (var_1_26 , var_1_53))) < ((var_1_41 + 25) - (abs (var_1_31)))) ? ((var_1_39 != var_1_27) ? ((((var_1_34 + last_1_var_1_57) + var_1_5) <= (var_1_27 + var_1_7)) ? (var_1_57 == ((signed char) (100 - (var_1_47 - var_1_32)))) : 1) : (var_1_61 ? (var_1_57 == ((signed char) ((var_1_47 - var_1_59) - var_1_36))) : (var_1_57 == ((signed char) ((var_1_41 - var_1_59) + var_1_37))))) : (var_1_57 == ((signed char) (abs (var_1_47)))))) && (((var_1_59 / var_1_53) < var_1_19) ? (var_1_60 == ((signed short int) (var_1_32 - var_1_31))) : 1)) && ((var_1_47 <= last_1_var_1_62) ? ((last_1_var_1_49 != last_1_var_1_40) ? (var_1_61 == ((unsigned char) var_1_15)) : (var_1_61 == ((unsigned char) var_1_14))) : (var_1_61 == ((unsigned char) var_1_13)))) && ((var_1_49 > 15.5f) ? ((! var_1_61) ? ((var_1_15 || (! var_1_11)) ? (var_1_62 == ((unsigned short int) var_1_19)) : (var_1_62 == ((unsigned short int) var_1_23))) : (var_1_62 == ((unsigned short int) var_1_25))) : 1)
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
