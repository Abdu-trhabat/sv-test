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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch7Amount250.c", 13, "reach_error"); }
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
signed char var_1_1 = 5;
float var_1_4 = 255.8;
signed char var_1_6 = 50;
signed char var_1_7 = 2;
signed char var_1_8 = 16;
signed char var_1_9 = 8;
signed char var_1_10 = -16;
signed char var_1_11 = -128;
unsigned long int var_1_13 = 8;
unsigned long int var_1_14 = 3326900199;
unsigned long int var_1_15 = 4;
unsigned char var_1_16 = 0;
unsigned short int var_1_17 = 56414;
unsigned char var_1_18 = 0;
unsigned long int var_1_19 = 8;
unsigned short int var_1_20 = 48040;
unsigned short int var_1_21 = 63037;
float var_1_22 = 5.25;
float var_1_23 = 3.2;
float var_1_24 = 63.295;
float var_1_25 = 2.2;
float var_1_26 = 2.2;
float var_1_27 = 31.625;
float var_1_28 = 32.8;
float var_1_29 = 0.0;
float var_1_30 = 15.875;
signed long int var_1_31 = 1929210268;
float var_1_32 = 32.75;
unsigned short int var_1_33 = 256;
unsigned short int var_1_34 = 16;
unsigned char var_1_35 = 50;
unsigned char var_1_36 = 2;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 128;
signed long int var_1_39 = -50;
unsigned long int var_1_40 = 16;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 1;
float var_1_43 = 10000000000000.75;
unsigned char var_1_44 = 0;
signed long int var_1_45 = 64;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 200;
unsigned char var_1_48 = 8;
signed short int var_1_49 = -5;
signed short int var_1_50 = -128;
unsigned char var_1_51 = 2;
unsigned char var_1_52 = 100;
unsigned char var_1_53 = 32;
unsigned char var_1_54 = 50;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 0;
signed char var_1_60 = -2;

// Calibration values

// Last'ed variables
signed char last_1_var_1_1 = 5;
unsigned long int last_1_var_1_15 = 4;
unsigned long int last_1_var_1_40 = 16;
unsigned char last_1_var_1_41 = 0;
signed long int last_1_var_1_45 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch7Amount250
	if (-1000000000 <= (~ last_1_var_1_1)) {
		if (last_1_var_1_41 && var_1_18) {
			var_1_22 = var_1_23;
		} else {
			if (last_1_var_1_41) {
				var_1_22 = (var_1_24 - var_1_25);
			} else {
				var_1_22 = ((min (var_1_26 , (abs (var_1_27)))) + var_1_28);
			}
		}
	} else {
		if (var_1_6 <= 64) {
			var_1_22 = (var_1_24 - (abs (var_1_27)));
		} else {
			if (var_1_28 > (var_1_25 - (var_1_29 - var_1_30))) {
				if ((var_1_31 - var_1_17) > (last_1_var_1_15 / (max (-256 , var_1_20)))) {
					var_1_22 = (var_1_30 - (min (var_1_24 , (max (var_1_25 , var_1_32)))));
				} else {
					var_1_22 = (var_1_26 + (abs (var_1_28)));
				}
			}
		}
	}


	// From: Req13Batch7Amount250
	if (var_1_24 >= (min ((var_1_26 / var_1_29) , (var_1_27 / 128.5f)))) {
		var_1_41 = (var_1_18 && var_1_42);
	} else {
		if ((max ((- var_1_27) , (var_1_28 / var_1_29))) != var_1_22) {
			var_1_41 = (! 0);
		} else {
			var_1_41 = var_1_44;
		}
	}


	// From: Req3Batch7Amount250
	if (last_1_var_1_40 > (var_1_7 + 2u)) {
		var_1_13 = (max (var_1_9 , var_1_7));
	} else {
		var_1_13 = ((var_1_14 - var_1_7) - (var_1_6 + var_1_9));
	}


	// From: Req6Batch7Amount250
	signed long int stepLocal_7 = (min (var_1_20 , var_1_21)) - (abs (var_1_7));
	unsigned long int stepLocal_6 = var_1_13;
	if (stepLocal_6 <= var_1_6) {
		var_1_19 = var_1_17;
	} else {
		if (var_1_18) {
			var_1_19 = (abs (var_1_17));
		} else {
			if (var_1_17 >= stepLocal_7) {
				var_1_19 = (var_1_14 - var_1_9);
			} else {
				var_1_19 = (abs (var_1_14));
			}
		}
	}


	// From: Req8Batch7Amount250
	unsigned char stepLocal_8 = (max (var_1_6 , 10)) != var_1_20;
	if (stepLocal_8 && var_1_18) {
		var_1_33 = ((max (var_1_9 , var_1_6)) + (var_1_7 + var_1_34));
	}


	// From: Req10Batch7Amount250
	signed long int stepLocal_9 = var_1_34 * var_1_20;
	if (((min (var_1_21 , var_1_7)) + var_1_33) == stepLocal_9) {
		var_1_38 = (abs (var_1_37));
	}


	// From: Req14Batch7Amount250
	unsigned short int stepLocal_10 = var_1_21;
	if (var_1_10 >= stepLocal_10) {
		if (var_1_30 <= var_1_28) {
			var_1_45 = (var_1_36 + var_1_21);
		} else {
			var_1_45 = last_1_var_1_45;
		}
	} else {
		var_1_45 = (max (var_1_10 , 128));
	}


	// From: Req18Batch7Amount250
	var_1_51 = (abs ((var_1_52 - 4) + (min (4 , var_1_48))));


	// From: Req19Batch7Amount250
	if (var_1_52 >= ((200 - var_1_48) - 2)) {
		var_1_53 = var_1_48;
	} else {
		var_1_53 = (var_1_9 + var_1_37);
	}


	// From: Req22Batch7Amount250
	var_1_60 = var_1_10;


	// From: Req4Batch7Amount250
	signed long int stepLocal_4 = var_1_8 | var_1_38;
	unsigned long int stepLocal_3 = var_1_19;
	if (stepLocal_3 > var_1_14) {
		if (var_1_10 < stepLocal_4) {
			var_1_15 = (var_1_14 - var_1_7);
		}
	} else {
		var_1_15 = (abs (1u));
	}


	// From: Req12Batch7Amount250
	if ((var_1_36 + var_1_7) == ((var_1_15 ^ var_1_13) + var_1_31)) {
		var_1_40 = (var_1_14 - var_1_6);
	} else {
		var_1_40 = ((min (var_1_34 , (var_1_31 - 4u))) + var_1_15);
	}


	// From: Req5Batch7Amount250
	unsigned short int stepLocal_5 = var_1_33;
	if ((var_1_17 - var_1_7) <= stepLocal_5) {
		var_1_16 = (! var_1_18);
	}


	// From: Req9Batch7Amount250
	if (var_1_23 <= (- 10.7f)) {
		var_1_35 = ((200 - (var_1_36 + var_1_37)) - var_1_9);
	} else {
		if (var_1_16) {
			var_1_35 = var_1_36;
		} else {
			if (256.5 <= ((var_1_28 + var_1_22) / var_1_29)) {
				var_1_35 = 2;
			}
		}
	}


	// From: Req11Batch7Amount250
	if (var_1_26 > (var_1_24 + var_1_25)) {
		if (var_1_16) {
			var_1_39 = (var_1_8 + ((max (var_1_34 , var_1_40)) + var_1_7));
		}
	} else {
		var_1_39 = (var_1_13 - var_1_34);
	}


	// From: Req15Batch7Amount250
	signed char stepLocal_11 = var_1_7;
	if ((var_1_37 + (var_1_6 + 64)) <= stepLocal_11) {
		if (! var_1_16) {
			if (var_1_23 > var_1_25) {
				var_1_46 = ((var_1_47 - (var_1_37 + var_1_48)) - var_1_7);
			}
		} else {
			var_1_46 = (min (var_1_6 , var_1_36));
		}
	} else {
		var_1_46 = (var_1_47 - var_1_9);
	}


	// From: Req16Batch7Amount250
	unsigned long int stepLocal_13 = var_1_19 / (abs (-1));
	signed char stepLocal_12 = var_1_6;
	if (stepLocal_12 >= var_1_9) {
		var_1_49 = ((min ((max (-32 , var_1_40)) , (var_1_37 - var_1_6))) + (min (var_1_38 , var_1_35)));
	} else {
		if (var_1_44) {
			if (stepLocal_13 > var_1_45) {
				var_1_49 = ((min (var_1_48 , var_1_38)) + var_1_10);
			} else {
				var_1_49 = ((var_1_34 + var_1_38) - var_1_36);
			}
		}
	}


	// From: Req20Batch7Amount250
	unsigned long int stepLocal_15 = var_1_15;
	unsigned char stepLocal_14 = var_1_44;
	if (stepLocal_14 && var_1_18) {
		if (var_1_43 >= var_1_4) {
			if (stepLocal_15 == var_1_34) {
				var_1_54 = var_1_37;
			}
		} else {
			var_1_54 = var_1_47;
		}
	}


	// From: Req21Batch7Amount250
	if (var_1_42) {
		var_1_55 = ((4 <= (var_1_6 * var_1_54)) && var_1_44);
	} else {
		var_1_55 = (var_1_44 || ((var_1_56 || var_1_57) || (var_1_58 || var_1_59)));
	}


	// From: Req1Batch7Amount250
	unsigned long int stepLocal_1 = var_1_15;
	signed long int stepLocal_0 = var_1_8 & var_1_6;
	if (stepLocal_1 > var_1_40) {
		if ((abs (var_1_22)) < var_1_22) {
			var_1_1 = (((max (var_1_6 , var_1_7)) + (abs (var_1_8))) - var_1_9);
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		if (var_1_7 != stepLocal_0) {
			var_1_1 = var_1_8;
		} else {
			var_1_1 = ((var_1_10 + -5) + (var_1_6 - var_1_7));
		}
	}


	// From: Req2Batch7Amount250
	unsigned char stepLocal_2 = var_1_9 != var_1_19;
	if (var_1_16 && stepLocal_2) {
		var_1_11 = (var_1_6 - (var_1_7 + 4));
	}


	// From: Req17Batch7Amount250
	if (var_1_18) {
		var_1_50 = (var_1_9 + (abs (var_1_54 - var_1_39)));
	} else {
		if ((var_1_25 - (min (63.2 , var_1_24))) < var_1_28) {
			var_1_50 = (min (0 , var_1_7));
		} else {
			var_1_50 = (var_1_34 - var_1_36);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -63);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -31);
	assume_abort_if_not(var_1_10 <= 32);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 3221225470);
	assume_abort_if_not(var_1_14 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 32767);
	assume_abort_if_not(var_1_17 <= 65535);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65535);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 32767);
	assume_abort_if_not(var_1_21 <= 65535);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 4611686.018427388000e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427388000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= 1073741823);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 16383);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 32);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 31);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 190);
	assume_abort_if_not(var_1_47 <= 254);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 31);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 63);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 0);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 0);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 0);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_45 = var_1_45;
}

int property(void) {
	return ((((((((((((((((((((((var_1_15 > var_1_40) ? (((abs (var_1_22)) < var_1_22) ? (var_1_1 == ((signed char) (((max (var_1_6 , var_1_7)) + (abs (var_1_8))) - var_1_9))) : (var_1_1 == ((signed char) var_1_7))) : ((var_1_7 != (var_1_8 & var_1_6)) ? (var_1_1 == ((signed char) var_1_8)) : (var_1_1 == ((signed char) ((var_1_10 + -5) + (var_1_6 - var_1_7)))))) && ((var_1_16 && (var_1_9 != var_1_19)) ? (var_1_11 == ((signed char) (var_1_6 - (var_1_7 + 4)))) : 1)) && ((last_1_var_1_40 > (var_1_7 + 2u)) ? (var_1_13 == ((unsigned long int) (max (var_1_9 , var_1_7)))) : (var_1_13 == ((unsigned long int) ((var_1_14 - var_1_7) - (var_1_6 + var_1_9)))))) && ((var_1_19 > var_1_14) ? ((var_1_10 < (var_1_8 | var_1_38)) ? (var_1_15 == ((unsigned long int) (var_1_14 - var_1_7))) : 1) : (var_1_15 == ((unsigned long int) (abs (1u)))))) && (((var_1_17 - var_1_7) <= var_1_33) ? (var_1_16 == ((unsigned char) (! var_1_18))) : 1)) && ((var_1_13 <= var_1_6) ? (var_1_19 == ((unsigned long int) var_1_17)) : (var_1_18 ? (var_1_19 == ((unsigned long int) (abs (var_1_17)))) : ((var_1_17 >= ((min (var_1_20 , var_1_21)) - (abs (var_1_7)))) ? (var_1_19 == ((unsigned long int) (var_1_14 - var_1_9))) : (var_1_19 == ((unsigned long int) (abs (var_1_14)))))))) && ((-1000000000 <= (~ last_1_var_1_1)) ? ((last_1_var_1_41 && var_1_18) ? (var_1_22 == ((float) var_1_23)) : (last_1_var_1_41 ? (var_1_22 == ((float) (var_1_24 - var_1_25))) : (var_1_22 == ((float) ((min (var_1_26 , (abs (var_1_27)))) + var_1_28))))) : ((var_1_6 <= 64) ? (var_1_22 == ((float) (var_1_24 - (abs (var_1_27))))) : ((var_1_28 > (var_1_25 - (var_1_29 - var_1_30))) ? (((var_1_31 - var_1_17) > (last_1_var_1_15 / (max (-256 , var_1_20)))) ? (var_1_22 == ((float) (var_1_30 - (min (var_1_24 , (max (var_1_25 , var_1_32))))))) : (var_1_22 == ((float) (var_1_26 + (abs (var_1_28)))))) : 1)))) && ((((max (var_1_6 , 10)) != var_1_20) && var_1_18) ? (var_1_33 == ((unsigned short int) ((max (var_1_9 , var_1_6)) + (var_1_7 + var_1_34)))) : 1)) && ((var_1_23 <= (- 10.7f)) ? (var_1_35 == ((unsigned char) ((200 - (var_1_36 + var_1_37)) - var_1_9))) : (var_1_16 ? (var_1_35 == ((unsigned char) var_1_36)) : ((256.5 <= ((var_1_28 + var_1_22) / var_1_29)) ? (var_1_35 == ((unsigned char) 2)) : 1)))) && ((((min (var_1_21 , var_1_7)) + var_1_33) == (var_1_34 * var_1_20)) ? (var_1_38 == ((unsigned char) (abs (var_1_37)))) : 1)) && ((var_1_26 > (var_1_24 + var_1_25)) ? (var_1_16 ? (var_1_39 == ((signed long int) (var_1_8 + ((max (var_1_34 , var_1_40)) + var_1_7)))) : 1) : (var_1_39 == ((signed long int) (var_1_13 - var_1_34))))) && (((var_1_36 + var_1_7) == ((var_1_15 ^ var_1_13) + var_1_31)) ? (var_1_40 == ((unsigned long int) (var_1_14 - var_1_6))) : (var_1_40 == ((unsigned long int) ((min (var_1_34 , (var_1_31 - 4u))) + var_1_15))))) && ((var_1_24 >= (min ((var_1_26 / var_1_29) , (var_1_27 / 128.5f)))) ? (var_1_41 == ((unsigned char) (var_1_18 && var_1_42))) : (((max ((- var_1_27) , (var_1_28 / var_1_29))) != var_1_22) ? (var_1_41 == ((unsigned char) (! 0))) : (var_1_41 == ((unsigned char) var_1_44))))) && ((var_1_10 >= var_1_21) ? ((var_1_30 <= var_1_28) ? (var_1_45 == ((signed long int) (var_1_36 + var_1_21))) : (var_1_45 == ((signed long int) last_1_var_1_45))) : (var_1_45 == ((signed long int) (max (var_1_10 , 128)))))) && (((var_1_37 + (var_1_6 + 64)) <= var_1_7) ? ((! var_1_16) ? ((var_1_23 > var_1_25) ? (var_1_46 == ((unsigned char) ((var_1_47 - (var_1_37 + var_1_48)) - var_1_7))) : 1) : (var_1_46 == ((unsigned char) (min (var_1_6 , var_1_36))))) : (var_1_46 == ((unsigned char) (var_1_47 - var_1_9))))) && ((var_1_6 >= var_1_9) ? (var_1_49 == ((signed short int) ((min ((max (-32 , var_1_40)) , (var_1_37 - var_1_6))) + (min (var_1_38 , var_1_35))))) : (var_1_44 ? (((var_1_19 / (abs (-1))) > var_1_45) ? (var_1_49 == ((signed short int) ((min (var_1_48 , var_1_38)) + var_1_10))) : (var_1_49 == ((signed short int) ((var_1_34 + var_1_38) - var_1_36)))) : 1))) && (var_1_18 ? (var_1_50 == ((signed short int) (var_1_9 + (abs (var_1_54 - var_1_39))))) : (((var_1_25 - (min (63.2 , var_1_24))) < var_1_28) ? (var_1_50 == ((signed short int) (min (0 , var_1_7)))) : (var_1_50 == ((signed short int) (var_1_34 - var_1_36)))))) && (var_1_51 == ((unsigned char) (abs ((var_1_52 - 4) + (min (4 , var_1_48))))))) && ((var_1_52 >= ((200 - var_1_48) - 2)) ? (var_1_53 == ((unsigned char) var_1_48)) : (var_1_53 == ((unsigned char) (var_1_9 + var_1_37))))) && ((var_1_44 && var_1_18) ? ((var_1_43 >= var_1_4) ? ((var_1_15 == var_1_34) ? (var_1_54 == ((unsigned char) var_1_37)) : 1) : (var_1_54 == ((unsigned char) var_1_47))) : 1)) && (var_1_42 ? (var_1_55 == ((unsigned char) ((4 <= (var_1_6 * var_1_54)) && var_1_44))) : (var_1_55 == ((unsigned char) (var_1_44 || ((var_1_56 || var_1_57) || (var_1_58 || var_1_59))))))) && (var_1_60 == ((signed char) var_1_10))
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
