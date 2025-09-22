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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch42Amount250.c", 13, "reach_error"); }
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
double var_1_1 = 50.75;
double var_1_3 = 8.5;
double var_1_4 = 64.5;
double var_1_5 = 9.3;
double var_1_6 = 10.5;
double var_1_7 = 1000000000000000.2;
unsigned char var_1_8 = 1;
double var_1_10 = 127.875;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned short int var_1_13 = 8;
double var_1_14 = 15.5;
unsigned short int var_1_15 = 28305;
unsigned short int var_1_16 = 4;
unsigned short int var_1_17 = 20735;
unsigned short int var_1_18 = 16;
unsigned char var_1_19 = 25;
unsigned char var_1_20 = 200;
unsigned char var_1_21 = 5;
unsigned char var_1_22 = 5;
unsigned char var_1_23 = 0;
double var_1_24 = 10.5;
unsigned long int var_1_25 = 128;
float var_1_27 = 31.75;
signed short int var_1_28 = 64;
signed long int var_1_29 = 32;
unsigned char var_1_30 = 8;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 128;
signed short int var_1_34 = -10;
signed long int var_1_35 = 4;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
signed long int var_1_43 = 0;
signed long int var_1_44 = 256;
float var_1_45 = 256.2;
float var_1_46 = 0.0;
float var_1_47 = 1.6;
unsigned short int var_1_48 = 43572;
float var_1_49 = -0.8;
unsigned char var_1_50 = 1;
double var_1_51 = 0.875;
unsigned long int var_1_52 = 64;
double var_1_53 = 0.0;
double var_1_54 = 100.7;
double var_1_55 = 128.3;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 50.75;
unsigned char last_1_var_1_8 = 1;
unsigned char last_1_var_1_23 = 0;
double last_1_var_1_24 = 10.5;
signed short int last_1_var_1_34 = -10;
signed long int last_1_var_1_43 = 0;
unsigned char last_1_var_1_50 = 1;
unsigned long int last_1_var_1_52 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req15Batch42Amount250
	if (last_1_var_1_24 == (- var_1_10)) {
		if (var_1_33 < 10) {
			var_1_39 = var_1_12;
		} else {
			var_1_39 = ((last_1_var_1_23 && (var_1_12 || var_1_40)) || (var_1_38 && var_1_41));
		}
	} else {
		var_1_39 = (var_1_41 || (last_1_var_1_50 && var_1_12));
	}


	// From: Req5Batch42Amount250
	unsigned char stepLocal_0 = var_1_12;
	if (stepLocal_0 || last_1_var_1_8) {
		var_1_23 = (((var_1_17 + var_1_16) < var_1_18) || var_1_11);
	}


	// From: Req20Batch42Amount250
	if (var_1_23) {
		var_1_51 = var_1_3;
	}


	// From: Req2Batch42Amount250
	if (var_1_39 || (var_1_6 > (var_1_7 - var_1_10))) {
		var_1_8 = (! var_1_11);
	} else {
		var_1_8 = ((var_1_3 <= var_1_10) && var_1_12);
	}


	// From: Req1Batch42Amount250
	if (last_1_var_1_1 <= 2.25) {
		var_1_1 = (min (2.5 , ((var_1_3 + var_1_4) + (abs (var_1_5)))));
	} else {
		var_1_1 = (max ((max (7.6 , var_1_3)) , (var_1_6 - var_1_7)));
	}


	// From: Req6Batch42Amount250
	if ((- var_1_14) <= var_1_7) {
		var_1_24 = ((var_1_4 + var_1_3) + var_1_5);
	} else {
		var_1_24 = (var_1_7 - (min (var_1_6 , 15.5)));
	}


	// From: Req12Batch42Amount250
	var_1_34 = ((var_1_22 + (var_1_20 + var_1_33)) + (var_1_16 - last_1_var_1_34));


	// From: Req21Batch42Amount250
	if ((~ 5) != last_1_var_1_52) {
		if (((var_1_53 - var_1_47) - (var_1_54 + var_1_55)) <= (var_1_1 + 1.8)) {
			var_1_52 = 64u;
		} else {
			var_1_52 = var_1_20;
		}
	} else {
		var_1_52 = var_1_31;
	}


	// From: Req14Batch42Amount250
	if (var_1_1 < (24.75 + var_1_51)) {
		var_1_36 = (var_1_11 || (var_1_37 && var_1_38));
	}


	// From: Req3Batch42Amount250
	if (var_1_24 >= (99.3 / var_1_14)) {
		if (var_1_1 > 0.4) {
			if (((max (var_1_24 , var_1_5)) + var_1_14) <= var_1_7) {
				var_1_13 = (((var_1_15 - var_1_16) + var_1_17) - (var_1_18 + (5 + 32)));
			}
		} else {
			var_1_13 = var_1_15;
		}
	}


	// From: Req13Batch42Amount250
	var_1_35 = ((abs (var_1_31 + var_1_52)) + (max ((var_1_22 - var_1_20) , var_1_33)));


	// From: Req16Batch42Amount250
	if (! ((var_1_31 + var_1_33) >= var_1_17)) {
		var_1_43 = (min (var_1_44 , (max ((var_1_31 - last_1_var_1_43) , var_1_13))));
	} else {
		var_1_43 = (abs (last_1_var_1_43));
	}


	// From: Req17Batch42Amount250
	unsigned long int stepLocal_8 = var_1_52;
	signed long int stepLocal_7 = var_1_48 - (var_1_15 - var_1_31);
	if (stepLocal_8 >= (var_1_17 | var_1_33)) {
		var_1_45 = (var_1_7 - (var_1_46 - var_1_47));
	} else {
		if (stepLocal_7 > var_1_52) {
			var_1_45 = (var_1_7 - var_1_6);
		} else {
			if (var_1_12) {
				var_1_45 = (var_1_47 + var_1_4);
			}
		}
	}


	// From: Req9Batch42Amount250
	if (var_1_4 <= var_1_6) {
		var_1_28 = ((var_1_43 + var_1_20) - (max ((max (var_1_18 , var_1_21)) , var_1_16)));
	}


	// From: Req10Batch42Amount250
	unsigned long int stepLocal_6 = var_1_16 & (var_1_52 & var_1_22);
	unsigned long int stepLocal_5 = var_1_22 & var_1_52;
	if (var_1_5 > var_1_7) {
		if (var_1_18 <= stepLocal_6) {
			var_1_29 = (max ((var_1_15 + var_1_18) , (var_1_43 + var_1_52)));
		}
	} else {
		if (var_1_11) {
			if (stepLocal_5 < var_1_15) {
				var_1_29 = (min ((abs (var_1_52)) , (var_1_20 - var_1_52)));
			} else {
				var_1_29 = (abs (var_1_43));
			}
		}
	}


	// From: Req19Batch42Amount250
	signed long int stepLocal_11 = abs (var_1_31);
	signed long int stepLocal_10 = max (var_1_34 , var_1_17);
	unsigned char stepLocal_9 = var_1_36;
	if (var_1_23) {
		if (stepLocal_10 <= var_1_52) {
			var_1_50 = var_1_12;
		} else {
			var_1_50 = 0;
		}
	} else {
		if (! var_1_36) {
			if (var_1_7 < (var_1_51 + var_1_1)) {
				var_1_50 = (! (var_1_23 || var_1_38));
			} else {
				if (stepLocal_9 || var_1_39) {
					var_1_50 = var_1_40;
				}
			}
		} else {
			if (var_1_14 <= 3.25) {
				if (var_1_47 >= 50.5f) {
					if (stepLocal_11 >= var_1_44) {
						var_1_50 = var_1_38;
					} else {
						var_1_50 = (((max (var_1_21 , var_1_29)) >= var_1_33) || (! var_1_41));
					}
				}
			} else {
				var_1_50 = (var_1_37 && var_1_41);
			}
		}
	}


	// From: Req4Batch42Amount250
	if (var_1_50) {
		if ((var_1_17 + var_1_13) != (~ var_1_16)) {
			if (var_1_10 > var_1_7) {
				if ((var_1_18 * (var_1_13 - 16)) == var_1_15) {
					if ((var_1_20 - (var_1_21 + var_1_22)) <= var_1_18) {
						var_1_19 = var_1_22;
					} else {
						var_1_19 = var_1_21;
					}
				} else {
					var_1_19 = var_1_21;
				}
			} else {
				var_1_19 = var_1_21;
			}
		} else {
			var_1_19 = var_1_22;
		}
	} else {
		var_1_19 = var_1_21;
	}


	// From: Req7Batch42Amount250
	signed long int stepLocal_3 = var_1_43;
	unsigned char stepLocal_2 = var_1_20;
	signed long int stepLocal_1 = 0;
	if (stepLocal_2 > (min (var_1_35 , var_1_22))) {
		var_1_25 = (var_1_21 + var_1_15);
	} else {
		if (var_1_15 > stepLocal_3) {
			if (var_1_21 < stepLocal_1) {
				var_1_25 = var_1_19;
			}
		} else {
			var_1_25 = (max ((max (var_1_43 , var_1_15)) , (var_1_21 + var_1_35)));
		}
	}


	// From: Req8Batch42Amount250
	unsigned long int stepLocal_4 = var_1_25;
	if (stepLocal_4 < (- var_1_52)) {
		var_1_27 = (min ((max (var_1_3 , (63.1f - var_1_7))) , (var_1_5 + var_1_4)));
	}


	// From: Req11Batch42Amount250
	if (var_1_17 >= var_1_21) {
		var_1_30 = ((var_1_22 + var_1_31) + var_1_21);
	} else {
		if (((- var_1_25) < (var_1_21 - var_1_20)) && var_1_12) {
			var_1_30 = ((max (var_1_32 , var_1_33)) - var_1_22);
		} else {
			if (var_1_13 <= var_1_25) {
				var_1_30 = (max (var_1_33 , var_1_31));
			} else {
				var_1_30 = var_1_21;
			}
		}
	}


	// From: Req18Batch42Amount250
	if (var_1_50 || var_1_23) {
		var_1_49 = (max ((var_1_4 + 9.99999999999994E13f) , var_1_47));
	} else {
		if ((var_1_14 / var_1_46) >= ((max (var_1_47 , var_1_6)) - var_1_7)) {
			var_1_49 = var_1_4;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -230584.3009213691400e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 2305843.009213691400e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -230584.3009213691400e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691400e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	assume_abort_if_not(var_1_14 != 0.0F);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 24575);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 8192);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 16384);
	assume_abort_if_not(var_1_17 <= 32767);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 16384);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 127);
	assume_abort_if_not(var_1_20 <= 255);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 64);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 63);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 127);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
	var_1_44 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_44 >= -2147483647);
	assume_abort_if_not(var_1_44 <= 2147483646);
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 4611686.018427383000e+12F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 32767);
	assume_abort_if_not(var_1_48 <= 65535);
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 4611686.018427388000e+12F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854776000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427388000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427388000e+12F && var_1_55 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_52 = var_1_52;
}

int property(void) {
	return (((((((((((((((((((((last_1_var_1_1 <= 2.25) ? (var_1_1 == ((double) (min (2.5 , ((var_1_3 + var_1_4) + (abs (var_1_5))))))) : (var_1_1 == ((double) (max ((max (7.6 , var_1_3)) , (var_1_6 - var_1_7)))))) && ((var_1_39 || (var_1_6 > (var_1_7 - var_1_10))) ? (var_1_8 == ((unsigned char) (! var_1_11))) : (var_1_8 == ((unsigned char) ((var_1_3 <= var_1_10) && var_1_12))))) && ((var_1_24 >= (99.3 / var_1_14)) ? ((var_1_1 > 0.4) ? ((((max (var_1_24 , var_1_5)) + var_1_14) <= var_1_7) ? (var_1_13 == ((unsigned short int) (((var_1_15 - var_1_16) + var_1_17) - (var_1_18 + (5 + 32))))) : 1) : (var_1_13 == ((unsigned short int) var_1_15))) : 1)) && (var_1_50 ? (((var_1_17 + var_1_13) != (~ var_1_16)) ? ((var_1_10 > var_1_7) ? (((var_1_18 * (var_1_13 - 16)) == var_1_15) ? (((var_1_20 - (var_1_21 + var_1_22)) <= var_1_18) ? (var_1_19 == ((unsigned char) var_1_22)) : (var_1_19 == ((unsigned char) var_1_21))) : (var_1_19 == ((unsigned char) var_1_21))) : (var_1_19 == ((unsigned char) var_1_21))) : (var_1_19 == ((unsigned char) var_1_22))) : (var_1_19 == ((unsigned char) var_1_21)))) && ((var_1_12 || last_1_var_1_8) ? (var_1_23 == ((unsigned char) (((var_1_17 + var_1_16) < var_1_18) || var_1_11))) : 1)) && (((- var_1_14) <= var_1_7) ? (var_1_24 == ((double) ((var_1_4 + var_1_3) + var_1_5))) : (var_1_24 == ((double) (var_1_7 - (min (var_1_6 , 15.5))))))) && ((var_1_20 > (min (var_1_35 , var_1_22))) ? (var_1_25 == ((unsigned long int) (var_1_21 + var_1_15))) : ((var_1_15 > var_1_43) ? ((var_1_21 < 0) ? (var_1_25 == ((unsigned long int) var_1_19)) : 1) : (var_1_25 == ((unsigned long int) (max ((max (var_1_43 , var_1_15)) , (var_1_21 + var_1_35)))))))) && ((var_1_25 < (- var_1_52)) ? (var_1_27 == ((float) (min ((max (var_1_3 , (63.1f - var_1_7))) , (var_1_5 + var_1_4))))) : 1)) && ((var_1_4 <= var_1_6) ? (var_1_28 == ((signed short int) ((var_1_43 + var_1_20) - (max ((max (var_1_18 , var_1_21)) , var_1_16))))) : 1)) && ((var_1_5 > var_1_7) ? ((var_1_18 <= (var_1_16 & (var_1_52 & var_1_22))) ? (var_1_29 == ((signed long int) (max ((var_1_15 + var_1_18) , (var_1_43 + var_1_52))))) : 1) : (var_1_11 ? (((var_1_22 & var_1_52) < var_1_15) ? (var_1_29 == ((signed long int) (min ((abs (var_1_52)) , (var_1_20 - var_1_52))))) : (var_1_29 == ((signed long int) (abs (var_1_43))))) : 1))) && ((var_1_17 >= var_1_21) ? (var_1_30 == ((unsigned char) ((var_1_22 + var_1_31) + var_1_21))) : ((((- var_1_25) < (var_1_21 - var_1_20)) && var_1_12) ? (var_1_30 == ((unsigned char) ((max (var_1_32 , var_1_33)) - var_1_22))) : ((var_1_13 <= var_1_25) ? (var_1_30 == ((unsigned char) (max (var_1_33 , var_1_31)))) : (var_1_30 == ((unsigned char) var_1_21)))))) && (var_1_34 == ((signed short int) ((var_1_22 + (var_1_20 + var_1_33)) + (var_1_16 - last_1_var_1_34))))) && (var_1_35 == ((signed long int) ((abs (var_1_31 + var_1_52)) + (max ((var_1_22 - var_1_20) , var_1_33)))))) && ((var_1_1 < (24.75 + var_1_51)) ? (var_1_36 == ((unsigned char) (var_1_11 || (var_1_37 && var_1_38)))) : 1)) && ((last_1_var_1_24 == (- var_1_10)) ? ((var_1_33 < 10) ? (var_1_39 == ((unsigned char) var_1_12)) : (var_1_39 == ((unsigned char) ((last_1_var_1_23 && (var_1_12 || var_1_40)) || (var_1_38 && var_1_41))))) : (var_1_39 == ((unsigned char) (var_1_41 || (last_1_var_1_50 && var_1_12)))))) && ((! ((var_1_31 + var_1_33) >= var_1_17)) ? (var_1_43 == ((signed long int) (min (var_1_44 , (max ((var_1_31 - last_1_var_1_43) , var_1_13)))))) : (var_1_43 == ((signed long int) (abs (last_1_var_1_43)))))) && ((var_1_52 >= (var_1_17 | var_1_33)) ? (var_1_45 == ((float) (var_1_7 - (var_1_46 - var_1_47)))) : (((var_1_48 - (var_1_15 - var_1_31)) > var_1_52) ? (var_1_45 == ((float) (var_1_7 - var_1_6))) : (var_1_12 ? (var_1_45 == ((float) (var_1_47 + var_1_4))) : 1)))) && ((var_1_50 || var_1_23) ? (var_1_49 == ((float) (max ((var_1_4 + 9.99999999999994E13f) , var_1_47)))) : (((var_1_14 / var_1_46) >= ((max (var_1_47 , var_1_6)) - var_1_7)) ? (var_1_49 == ((float) var_1_4)) : 1))) && (var_1_23 ? (((max (var_1_34 , var_1_17)) <= var_1_52) ? (var_1_50 == ((unsigned char) var_1_12)) : (var_1_50 == ((unsigned char) 0))) : ((! var_1_36) ? ((var_1_7 < (var_1_51 + var_1_1)) ? (var_1_50 == ((unsigned char) (! (var_1_23 || var_1_38)))) : ((var_1_36 || var_1_39) ? (var_1_50 == ((unsigned char) var_1_40)) : 1)) : ((var_1_14 <= 3.25) ? ((var_1_47 >= 50.5f) ? (((abs (var_1_31)) >= var_1_44) ? (var_1_50 == ((unsigned char) var_1_38)) : (var_1_50 == ((unsigned char) (((max (var_1_21 , var_1_29)) >= var_1_33) || (! var_1_41))))) : 1) : (var_1_50 == ((unsigned char) (var_1_37 && var_1_41))))))) && (var_1_23 ? (var_1_51 == ((double) var_1_3)) : 1)) && (((~ 5) != last_1_var_1_52) ? ((((var_1_53 - var_1_47) - (var_1_54 + var_1_55)) <= (var_1_1 + 1.8)) ? (var_1_52 == ((unsigned long int) 64u)) : (var_1_52 == ((unsigned long int) var_1_20))) : (var_1_52 == ((unsigned long int) var_1_31)))
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
