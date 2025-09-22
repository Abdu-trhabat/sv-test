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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch6Amount250.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 2;
unsigned short int var_1_4 = 64;
unsigned short int var_1_5 = 34011;
unsigned short int var_1_6 = 2;
signed short int var_1_7 = -4;
signed short int var_1_8 = 128;
signed long int var_1_9 = -4;
unsigned short int var_1_10 = 4;
unsigned short int var_1_11 = 128;
double var_1_12 = 1.8;
double var_1_13 = 49.5;
double var_1_14 = 0.0;
double var_1_15 = 8.5;
unsigned long int var_1_16 = 4;
unsigned long int var_1_17 = 3254334857;
unsigned long int var_1_18 = 1980622399;
signed short int var_1_19 = 16;
unsigned short int var_1_20 = 50;
signed char var_1_21 = -4;
signed char var_1_23 = -25;
float var_1_24 = 16.2;
signed long int var_1_25 = 10;
float var_1_26 = 10.125;
unsigned long int var_1_27 = 32;
unsigned short int var_1_28 = 256;
unsigned short int var_1_30 = 55296;
unsigned short int var_1_31 = 500;
unsigned short int var_1_32 = 32228;
unsigned short int var_1_33 = 10000;
unsigned short int var_1_34 = 10000;
unsigned short int var_1_35 = 27082;
unsigned char var_1_36 = 16;
unsigned char var_1_37 = 128;
unsigned char var_1_38 = 100;
unsigned char var_1_39 = 100;
unsigned long int var_1_40 = 128;
unsigned long int var_1_41 = 4146233234;
unsigned short int var_1_42 = 1;
double var_1_43 = 31.5;
unsigned short int var_1_44 = 10000;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
signed long int var_1_49 = 4;
signed long int var_1_50 = 1718579311;
unsigned char var_1_51 = 0;
signed char var_1_52 = 4;
signed char var_1_53 = -2;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 1;
double var_1_57 = 999999999999999.5;
float var_1_58 = 100.2;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_28 = 256;
unsigned long int last_1_var_1_40 = 128;
unsigned short int last_1_var_1_42 = 1;
unsigned char last_1_var_1_51 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req14Batch6Amount250
	unsigned long int stepLocal_8 = var_1_18;
	signed short int stepLocal_7 = var_1_8;
	signed long int stepLocal_6 = last_1_var_1_42 / 2;
	if (stepLocal_7 <= var_1_23) {
		if (stepLocal_6 == (var_1_34 | var_1_23)) {
			var_1_36 = var_1_25;
		} else {
			if ((last_1_var_1_42 / var_1_25) < stepLocal_8) {
				var_1_36 = var_1_25;
			} else {
				var_1_36 = (var_1_37 - ((max (var_1_38 , var_1_39)) - var_1_25));
			}
		}
	} else {
		var_1_36 = (max (var_1_25 , var_1_37));
	}


	// From: Req6Batch6Amount250
	signed long int stepLocal_0 = min (var_1_6 , var_1_8);
	if (last_1_var_1_51) {
		var_1_16 = (last_1_var_1_28 + 200u);
	} else {
		if (stepLocal_0 <= var_1_11) {
			var_1_16 = (var_1_17 - (var_1_18 - var_1_4));
		} else {
			var_1_16 = var_1_6;
		}
	}


	// From: Req3Batch6Amount250
	var_1_9 = ((abs (var_1_8)) - var_1_6);


	// From: Req4Batch6Amount250
	var_1_10 = (var_1_5 - (var_1_11 + 1000));


	// From: Req8Batch6Amount250
	if (var_1_10 < var_1_17) {
		var_1_20 = (var_1_5 - var_1_11);
	} else {
		var_1_20 = (var_1_5 - var_1_6);
	}


	// From: Req19Batch6Amount250
	if (var_1_43 != ((var_1_26 + var_1_13) / var_1_14)) {
		var_1_51 = (! var_1_48);
	} else {
		var_1_51 = 0;
	}


	// From: Req21Batch6Amount250
	var_1_54 = var_1_47;


	// From: Req22Batch6Amount250
	if (var_1_51) {
		var_1_55 = var_1_46;
	} else {
		var_1_55 = var_1_47;
	}


	// From: Req23Batch6Amount250
	if ((var_1_10 <= var_1_9) && (5 <= (min (var_1_32 , var_1_33)))) {
		var_1_56 = (var_1_48 || var_1_46);
	} else {
		if (var_1_54) {
			var_1_56 = (var_1_54 && (var_1_55 && var_1_48));
		}
	}


	// From: Req24Batch6Amount250
	var_1_57 = 16.25;


	// From: Req25Batch6Amount250
	var_1_58 = var_1_15;


	// From: Req16Batch6Amount250
	signed long int stepLocal_9 = var_1_5 ^ 128;
	if ((var_1_25 - (max (var_1_39 , var_1_38))) <= stepLocal_9) {
		if ((var_1_26 / (max (var_1_14 , var_1_43))) <= var_1_57) {
			if (var_1_13 <= var_1_26) {
				var_1_42 = (var_1_34 + var_1_36);
			} else {
				var_1_42 = ((var_1_30 - (min (var_1_34 , var_1_37))) - var_1_38);
			}
		} else {
			var_1_42 = (var_1_5 - ((var_1_34 + var_1_44) - var_1_25));
		}
	} else {
		var_1_42 = ((var_1_35 + var_1_32) - ((var_1_33 - var_1_38) + var_1_44));
	}


	// From: Req1Batch6Amount250
	if (var_1_56 || var_1_54) {
		var_1_1 = (abs (var_1_4));
	} else {
		var_1_1 = (min ((var_1_5 - var_1_6) , var_1_4));
	}


	// From: Req2Batch6Amount250
	if (var_1_6 <= (- 500)) {
		if (var_1_51) {
			var_1_7 = (var_1_8 - 64);
		}
	} else {
		var_1_7 = var_1_8;
	}


	// From: Req5Batch6Amount250
	if (! var_1_51) {
		var_1_12 = ((var_1_13 - (var_1_14 - 63.5)) + var_1_15);
	} else {
		var_1_12 = (var_1_14 - var_1_13);
	}


	// From: Req7Batch6Amount250
	if ((var_1_15 + (- var_1_13)) != (var_1_14 * var_1_12)) {
		var_1_19 = (max (var_1_8 , -5));
	} else {
		var_1_19 = (abs (var_1_8));
	}


	// From: Req11Batch6Amount250
	unsigned short int stepLocal_3 = var_1_11;
	if (stepLocal_3 > (- 256)) {
		var_1_27 = (var_1_17 - var_1_16);
	} else {
		if (var_1_56) {
			var_1_27 = ((max (var_1_6 , var_1_25)) + 128u);
		}
	}


	// From: Req15Batch6Amount250
	if ((last_1_var_1_40 - var_1_33) < var_1_7) {
		var_1_40 = (min ((min ((last_1_var_1_40 + var_1_1) , var_1_32)) , (var_1_41 - var_1_39)));
	}


	// From: Req17Batch6Amount250
	if (((var_1_16 / var_1_35) / var_1_33) >= var_1_37) {
		if (! (var_1_27 <= var_1_34)) {
			var_1_45 = ((var_1_43 < var_1_14) || (! var_1_46));
		} else {
			if (var_1_55) {
				if (var_1_55 && (var_1_15 <= (var_1_13 * var_1_26))) {
					var_1_45 = ((! var_1_47) || (var_1_48 || var_1_46));
				} else {
					var_1_45 = (! var_1_46);
				}
			} else {
				var_1_45 = ((! (31.25 <= var_1_57)) && (var_1_46 || var_1_48));
			}
		}
	} else {
		var_1_45 = var_1_46;
	}


	// From: Req9Batch6Amount250
	unsigned char stepLocal_1 = var_1_45;
	if (var_1_54 && stepLocal_1) {
		var_1_21 = var_1_23;
	}


	// From: Req10Batch6Amount250
	unsigned long int stepLocal_2 = var_1_40 >> var_1_25;
	if (var_1_56) {
		var_1_24 = var_1_14;
	} else {
		if (stepLocal_2 < (var_1_4 / (var_1_18 + var_1_5))) {
			if (var_1_54) {
				var_1_24 = (max ((min (7.25f , var_1_14)) , var_1_13));
			}
		} else {
			var_1_24 = (min (var_1_26 , (var_1_15 + var_1_14)));
		}
	}


	// From: Req13Batch6Amount250
	if (! (! (var_1_15 <= var_1_24))) {
		if (var_1_25 >= (var_1_40 - 8)) {
			if ((var_1_24 < var_1_12) || (! var_1_51)) {
				if (var_1_24 == var_1_14) {
					var_1_31 = (var_1_30 - var_1_25);
				} else {
					var_1_31 = var_1_25;
				}
			} else {
				var_1_31 = (((var_1_32 - var_1_25) + (var_1_33 + var_1_34)) - var_1_11);
			}
		} else {
			var_1_31 = (var_1_32 + (var_1_35 - var_1_25));
		}
	} else {
		var_1_31 = (((max (var_1_32 , var_1_35)) + 30970) - (min (var_1_11 , var_1_33)));
	}


	// From: Req18Batch6Amount250
	signed long int stepLocal_10 = var_1_31 + (-8 % var_1_34);
	if ((max (2 , (~ var_1_10))) > stepLocal_10) {
		var_1_49 = var_1_30;
	} else {
		var_1_49 = (5 - (var_1_50 - 1000000));
	}


	// From: Req20Batch6Amount250
	unsigned char stepLocal_12 = var_1_20 > var_1_16;
	unsigned long int stepLocal_11 = var_1_27;
	if (stepLocal_11 < var_1_16) {
		if (stepLocal_12 || (var_1_49 == 0)) {
			var_1_52 = (max (var_1_23 , ((max (var_1_25 , var_1_53)) + -32)));
		} else {
			var_1_52 = (var_1_25 + var_1_53);
		}
	}


	// From: Req12Batch6Amount250
	unsigned char stepLocal_5 = var_1_56;
	unsigned char stepLocal_4 = ! 1;
	if ((var_1_40 == var_1_17) || stepLocal_4) {
		if (stepLocal_5 || ((var_1_5 != var_1_4) && (var_1_16 <= var_1_31))) {
			var_1_28 = ((abs (var_1_30 - var_1_25)) - var_1_6);
		} else {
			var_1_28 = ((max (var_1_30 , var_1_5)) - (abs (var_1_11)));
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -1);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16384);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 2305843.009213691400e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 1073741823);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -127);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 31);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854766000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 49150);
	assume_abort_if_not(var_1_30 <= 65534);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 24575);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 8192);
	assume_abort_if_not(var_1_33 <= 16384);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 8192);
	assume_abort_if_not(var_1_34 <= 16383);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 16383);
	assume_abort_if_not(var_1_35 <= 32767);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 63);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 63);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 2147483647);
	assume_abort_if_not(var_1_41 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	assume_abort_if_not(var_1_43 != 0.0F);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 8192);
	assume_abort_if_not(var_1_44 <= 16383);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_50 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_50 >= 1073741823);
	assume_abort_if_not(var_1_50 <= 2147483646);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= -63);
	assume_abort_if_not(var_1_53 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_28 = var_1_28;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_51 = var_1_51;
}

int property(void) {
	return (((((((((((((((((((((((((var_1_56 || var_1_54) ? (var_1_1 == ((unsigned short int) (abs (var_1_4)))) : (var_1_1 == ((unsigned short int) (min ((var_1_5 - var_1_6) , var_1_4))))) && ((var_1_6 <= (- 500)) ? (var_1_51 ? (var_1_7 == ((signed short int) (var_1_8 - 64))) : 1) : (var_1_7 == ((signed short int) var_1_8)))) && (var_1_9 == ((signed long int) ((abs (var_1_8)) - var_1_6)))) && (var_1_10 == ((unsigned short int) (var_1_5 - (var_1_11 + 1000))))) && ((! var_1_51) ? (var_1_12 == ((double) ((var_1_13 - (var_1_14 - 63.5)) + var_1_15))) : (var_1_12 == ((double) (var_1_14 - var_1_13))))) && (last_1_var_1_51 ? (var_1_16 == ((unsigned long int) (last_1_var_1_28 + 200u))) : (((min (var_1_6 , var_1_8)) <= var_1_11) ? (var_1_16 == ((unsigned long int) (var_1_17 - (var_1_18 - var_1_4)))) : (var_1_16 == ((unsigned long int) var_1_6))))) && (((var_1_15 + (- var_1_13)) != (var_1_14 * var_1_12)) ? (var_1_19 == ((signed short int) (max (var_1_8 , -5)))) : (var_1_19 == ((signed short int) (abs (var_1_8)))))) && ((var_1_10 < var_1_17) ? (var_1_20 == ((unsigned short int) (var_1_5 - var_1_11))) : (var_1_20 == ((unsigned short int) (var_1_5 - var_1_6))))) && ((var_1_54 && var_1_45) ? (var_1_21 == ((signed char) var_1_23)) : 1)) && (var_1_56 ? (var_1_24 == ((float) var_1_14)) : (((var_1_40 >> var_1_25) < (var_1_4 / (var_1_18 + var_1_5))) ? (var_1_54 ? (var_1_24 == ((float) (max ((min (7.25f , var_1_14)) , var_1_13)))) : 1) : (var_1_24 == ((float) (min (var_1_26 , (var_1_15 + var_1_14)))))))) && ((var_1_11 > (- 256)) ? (var_1_27 == ((unsigned long int) (var_1_17 - var_1_16))) : (var_1_56 ? (var_1_27 == ((unsigned long int) ((max (var_1_6 , var_1_25)) + 128u))) : 1))) && (((var_1_40 == var_1_17) || (! 1)) ? ((var_1_56 || ((var_1_5 != var_1_4) && (var_1_16 <= var_1_31))) ? (var_1_28 == ((unsigned short int) ((abs (var_1_30 - var_1_25)) - var_1_6))) : (var_1_28 == ((unsigned short int) ((max (var_1_30 , var_1_5)) - (abs (var_1_11)))))) : 1)) && ((! (! (var_1_15 <= var_1_24))) ? ((var_1_25 >= (var_1_40 - 8)) ? (((var_1_24 < var_1_12) || (! var_1_51)) ? ((var_1_24 == var_1_14) ? (var_1_31 == ((unsigned short int) (var_1_30 - var_1_25))) : (var_1_31 == ((unsigned short int) var_1_25))) : (var_1_31 == ((unsigned short int) (((var_1_32 - var_1_25) + (var_1_33 + var_1_34)) - var_1_11)))) : (var_1_31 == ((unsigned short int) (var_1_32 + (var_1_35 - var_1_25))))) : (var_1_31 == ((unsigned short int) (((max (var_1_32 , var_1_35)) + 30970) - (min (var_1_11 , var_1_33))))))) && ((var_1_8 <= var_1_23) ? (((last_1_var_1_42 / 2) == (var_1_34 | var_1_23)) ? (var_1_36 == ((unsigned char) var_1_25)) : (((last_1_var_1_42 / var_1_25) < var_1_18) ? (var_1_36 == ((unsigned char) var_1_25)) : (var_1_36 == ((unsigned char) (var_1_37 - ((max (var_1_38 , var_1_39)) - var_1_25)))))) : (var_1_36 == ((unsigned char) (max (var_1_25 , var_1_37)))))) && (((last_1_var_1_40 - var_1_33) < var_1_7) ? (var_1_40 == ((unsigned long int) (min ((min ((last_1_var_1_40 + var_1_1) , var_1_32)) , (var_1_41 - var_1_39))))) : 1)) && (((var_1_25 - (max (var_1_39 , var_1_38))) <= (var_1_5 ^ 128)) ? (((var_1_26 / (max (var_1_14 , var_1_43))) <= var_1_57) ? ((var_1_13 <= var_1_26) ? (var_1_42 == ((unsigned short int) (var_1_34 + var_1_36))) : (var_1_42 == ((unsigned short int) ((var_1_30 - (min (var_1_34 , var_1_37))) - var_1_38)))) : (var_1_42 == ((unsigned short int) (var_1_5 - ((var_1_34 + var_1_44) - var_1_25))))) : (var_1_42 == ((unsigned short int) ((var_1_35 + var_1_32) - ((var_1_33 - var_1_38) + var_1_44)))))) && ((((var_1_16 / var_1_35) / var_1_33) >= var_1_37) ? ((! (var_1_27 <= var_1_34)) ? (var_1_45 == ((unsigned char) ((var_1_43 < var_1_14) || (! var_1_46)))) : (var_1_55 ? ((var_1_55 && (var_1_15 <= (var_1_13 * var_1_26))) ? (var_1_45 == ((unsigned char) ((! var_1_47) || (var_1_48 || var_1_46)))) : (var_1_45 == ((unsigned char) (! var_1_46)))) : (var_1_45 == ((unsigned char) ((! (31.25 <= var_1_57)) && (var_1_46 || var_1_48)))))) : (var_1_45 == ((unsigned char) var_1_46)))) && (((max (2 , (~ var_1_10))) > (var_1_31 + (-8 % var_1_34))) ? (var_1_49 == ((signed long int) var_1_30)) : (var_1_49 == ((signed long int) (5 - (var_1_50 - 1000000)))))) && ((var_1_43 != ((var_1_26 + var_1_13) / var_1_14)) ? (var_1_51 == ((unsigned char) (! var_1_48))) : (var_1_51 == ((unsigned char) 0)))) && ((var_1_27 < var_1_16) ? (((var_1_20 > var_1_16) || (var_1_49 == 0)) ? (var_1_52 == ((signed char) (max (var_1_23 , ((max (var_1_25 , var_1_53)) + -32))))) : (var_1_52 == ((signed char) (var_1_25 + var_1_53)))) : 1)) && (var_1_54 == ((unsigned char) var_1_47))) && (var_1_51 ? (var_1_55 == ((unsigned char) var_1_46)) : (var_1_55 == ((unsigned char) var_1_47)))) && (((var_1_10 <= var_1_9) && (5 <= (min (var_1_32 , var_1_33)))) ? (var_1_56 == ((unsigned char) (var_1_48 || var_1_46))) : (var_1_54 ? (var_1_56 == ((unsigned char) (var_1_54 && (var_1_55 && var_1_48)))) : 1))) && (var_1_57 == ((double) 16.25))) && (var_1_58 == ((float) var_1_15))
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
