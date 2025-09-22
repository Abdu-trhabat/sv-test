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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch88Amount250.c", 13, "reach_error"); }
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
signed short int var_1_1 = 128;
signed long int var_1_4 = 10;
signed short int var_1_5 = -5;
signed short int var_1_6 = 50;
signed short int var_1_7 = 50;
signed short int var_1_8 = 50;
signed short int var_1_9 = -64;
signed short int var_1_10 = 2;
signed short int var_1_11 = 25;
signed short int var_1_12 = 24904;
float var_1_13 = 8.6;
unsigned long int var_1_14 = 3786581991;
float var_1_15 = 31.6;
float var_1_16 = -0.5;
float var_1_17 = 3.75;
float var_1_18 = 3.5;
double var_1_19 = 256.85;
double var_1_21 = 64.6;
signed long int var_1_22 = 8;
signed long int var_1_23 = 1117714559;
signed long int var_1_24 = 128;
double var_1_25 = 64.2;
unsigned long int var_1_26 = 64;
signed short int var_1_27 = 5;
unsigned long int var_1_28 = 3600404902;
signed char var_1_29 = 64;
signed long int var_1_30 = 16;
signed char var_1_32 = 32;
unsigned short int var_1_33 = 256;
double var_1_34 = 0.25;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
signed short int var_1_38 = -5;
float var_1_39 = 0.8;
float var_1_40 = 128.2;
float var_1_41 = 0.8;
unsigned long int var_1_42 = 8;
unsigned long int var_1_43 = 1000000000;
float var_1_44 = 0.8;
signed char var_1_45 = 10;
signed char var_1_46 = 0;
signed char var_1_47 = 2;
signed char var_1_48 = 8;
double var_1_49 = 3.6;
unsigned char var_1_50 = 1;
unsigned char var_1_52 = 0;
double var_1_53 = 50.5;
unsigned char var_1_54 = 1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_22 = 8;
signed long int last_1_var_1_24 = 128;
unsigned char last_1_var_1_36 = 0;
unsigned char last_1_var_1_50 = 1;
unsigned char last_1_var_1_54 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch88Amount250
	unsigned char stepLocal_12 = last_1_var_1_36;
	if (stepLocal_12 && last_1_var_1_54) {
		var_1_34 = (var_1_17 - var_1_18);
	} else {
		var_1_34 = 3.675;
	}


	// From: Req2Batch88Amount250
	signed short int stepLocal_2 = var_1_7;
	signed short int stepLocal_1 = var_1_5;
	if (((min (last_1_var_1_24 , var_1_4)) * last_1_var_1_22) <= stepLocal_1) {
		if ((min (var_1_6 , var_1_4)) == stepLocal_2) {
			var_1_9 = (-2 + (var_1_10 - var_1_11));
		}
	} else {
		if (! last_1_var_1_50) {
			if (last_1_var_1_50) {
				var_1_9 = ((var_1_12 - (abs (var_1_6))) - 2);
			}
		} else {
			var_1_9 = (max ((max (var_1_5 , var_1_11)) , var_1_10));
		}
	}


	// From: Req8Batch88Amount250
	signed short int stepLocal_9 = var_1_7;
	if (stepLocal_9 == ((max (var_1_11 , var_1_10)) >> var_1_27)) {
		var_1_26 = (min (var_1_12 , var_1_23));
	} else {
		var_1_26 = (var_1_28 - var_1_27);
	}


	// From: Req10Batch88Amount250
	if (var_1_23 > (var_1_10 - var_1_32)) {
		var_1_33 = (max (var_1_27 , var_1_11));
	} else {
		var_1_33 = (min ((var_1_27 + (min (var_1_10 , var_1_11))) , var_1_12));
	}


	// From: Req12Batch88Amount250
	if (-64 >= var_1_8) {
		var_1_36 = (! var_1_37);
	}


	// From: Req14Batch88Amount250
	if ((var_1_15 / (abs (var_1_40))) == var_1_34) {
		var_1_39 = (var_1_17 + (min (var_1_18 , (min (var_1_21 , var_1_41)))));
	}


	// From: Req18Batch88Amount250
	if (var_1_14 > (~ var_1_32)) {
		var_1_49 = var_1_16;
	} else {
		var_1_49 = (min (var_1_17 , var_1_18));
	}


	// From: Req15Batch88Amount250
	if (! var_1_37) {
		if (var_1_36 || (var_1_16 <= var_1_17)) {
			var_1_42 = (var_1_10 + 8u);
		} else {
			if (var_1_37 || (var_1_21 >= (var_1_34 / var_1_40))) {
				if (var_1_37) {
					var_1_42 = (((1000000000u + var_1_43) - (min (var_1_33 , var_1_10))) + (var_1_27 + var_1_12));
				}
			} else {
				var_1_42 = (abs (var_1_43));
			}
		}
	} else {
		var_1_42 = (abs (var_1_28 - var_1_23));
	}


	// From: Req21Batch88Amount250
	if ((abs (var_1_14)) >= var_1_42) {
		var_1_54 = (var_1_36 && (var_1_37 || var_1_52));
	} else {
		var_1_54 = var_1_37;
	}


	// From: Req1Batch88Amount250
	signed long int stepLocal_0 = abs (var_1_4);
	if (var_1_26 >= stepLocal_0) {
		var_1_1 = (max (((var_1_5 + var_1_6) + var_1_7) , var_1_8));
	} else {
		var_1_1 = (var_1_7 + var_1_6);
	}


	// From: Req3Batch88Amount250
	unsigned long int stepLocal_3 = (var_1_14 - var_1_10) ^ var_1_42;
	if (stepLocal_3 <= var_1_11) {
		var_1_13 = (max (var_1_15 , (min (999.6f , var_1_16))));
	} else {
		var_1_13 = ((var_1_17 + var_1_18) - (abs (var_1_15)));
	}


	// From: Req4Batch88Amount250
	signed short int stepLocal_5 = var_1_10;
	signed short int stepLocal_4 = var_1_5;
	if (var_1_33 > stepLocal_4) {
		var_1_19 = ((min (var_1_17 , (var_1_21 + 4.6))) + (max (49.38 , (min (var_1_18 , 128.25)))));
	} else {
		if ((5 / var_1_12) <= stepLocal_5) {
			var_1_19 = ((var_1_18 - 99.75) + 5.2);
		}
	}


	// From: Req13Batch88Amount250
	if (var_1_19 < 10.375) {
		var_1_38 = ((var_1_11 - (abs (var_1_33))) + (max ((var_1_32 + var_1_27) , var_1_6)));
	}


	// From: Req16Batch88Amount250
	signed long int stepLocal_13 = (8 << var_1_42) | var_1_38;
	if (var_1_11 < stepLocal_13) {
		var_1_44 = var_1_21;
	} else {
		var_1_44 = (var_1_21 + var_1_41);
	}


	// From: Req19Batch88Amount250
	unsigned long int stepLocal_14 = min (var_1_27 , var_1_42);
	if (stepLocal_14 >= (var_1_38 | (var_1_26 / var_1_43))) {
		var_1_50 = 1;
	} else {
		var_1_50 = (var_1_37 || (var_1_54 && var_1_52));
	}


	// From: Req6Batch88Amount250
	signed long int stepLocal_7 = var_1_4;
	signed short int stepLocal_6 = var_1_6;
	if (var_1_36) {
		if (-5 >= stepLocal_6) {
			if (stepLocal_7 >= var_1_10) {
				var_1_24 = (var_1_7 + (5 - var_1_10));
			} else {
				var_1_24 = (var_1_38 + (var_1_6 + var_1_26));
			}
		} else {
			var_1_24 = (-2 + var_1_9);
		}
	} else {
		var_1_24 = var_1_5;
	}


	// From: Req5Batch88Amount250
	if (var_1_16 == (max (var_1_18 , var_1_13))) {
		if (! var_1_36) {
			var_1_22 = (max (var_1_9 , var_1_6));
		}
	} else {
		if ((var_1_9 | var_1_10) < -5) {
			if (var_1_36 && (var_1_24 == var_1_9)) {
				var_1_22 = (var_1_11 - (var_1_23 - var_1_12));
			} else {
				var_1_22 = var_1_24;
			}
		}
	}


	// From: Req7Batch88Amount250
	signed long int stepLocal_8 = var_1_11 / var_1_23;
	if (var_1_50) {
		if (stepLocal_8 < 2) {
			var_1_25 = (abs (min (var_1_16 , 64.6)));
		}
	} else {
		if ((var_1_21 + var_1_18) < (var_1_16 + 7.4)) {
			var_1_25 = (min (var_1_16 , var_1_21));
		} else {
			var_1_25 = (var_1_17 - (min (31.5 , var_1_18)));
		}
	}


	// From: Req9Batch88Amount250
	unsigned long int stepLocal_11 = var_1_26;
	signed long int stepLocal_10 = var_1_5 / (min (var_1_27 , var_1_30));
	if (((var_1_12 * var_1_23) * var_1_24) <= stepLocal_10) {
		if (stepLocal_11 >= 32) {
			var_1_29 = (var_1_27 - var_1_32);
		} else {
			var_1_29 = (-2 + (var_1_27 + (8 + -2)));
		}
	}


	// From: Req17Batch88Amount250
	if (var_1_22 == ((abs (var_1_10)) % (min (var_1_27 , var_1_30)))) {
		if (var_1_50) {
			if (var_1_42 >= var_1_23) {
				if (var_1_36) {
					if (var_1_16 != ((min (var_1_15 , var_1_49)) + var_1_21)) {
						var_1_45 = (1 - var_1_27);
					}
				}
			} else {
				if (var_1_8 >= var_1_27) {
					var_1_45 = (max (((min (var_1_46 , var_1_27)) + var_1_47) , var_1_32));
				} else {
					var_1_45 = (2 + var_1_46);
				}
			}
		} else {
			var_1_45 = ((10 + (abs (var_1_27))) - (max (var_1_32 , var_1_48)));
		}
	}


	// From: Req20Batch88Amount250
	unsigned char stepLocal_15 = var_1_9 > var_1_10;
	if (var_1_37) {
		if ((var_1_27 < (var_1_11 << var_1_43)) || stepLocal_15) {
			var_1_53 = (max (var_1_41 , (var_1_18 - var_1_17)));
		} else {
			if (var_1_25 <= var_1_41) {
				var_1_53 = var_1_17;
			} else {
				var_1_53 = var_1_18;
			}
		}
	} else {
		var_1_53 = var_1_41;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483647);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -8191);
	assume_abort_if_not(var_1_5 <= 8192);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -8191);
	assume_abort_if_not(var_1_6 <= 8191);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -16383);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32767);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16383);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 16382);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 1073741823);
	assume_abort_if_not(var_1_23 <= 2147483646);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 30);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 2147483647);
	assume_abort_if_not(var_1_28 <= 4294967294);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483648);
	assume_abort_if_not(var_1_30 <= 2147483647);
	assume_abort_if_not(var_1_30 != 0);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	assume_abort_if_not(var_1_40 != 0.0F);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 536870912);
	assume_abort_if_not(var_1_43 <= 1073741823);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -63);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -63);
	assume_abort_if_not(var_1_47 <= 63);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 126);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_22 = var_1_22;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_54 = var_1_54;
}

int property(void) {
	return (((((((((((((((((((((var_1_26 >= (abs (var_1_4))) ? (var_1_1 == ((signed short int) (max (((var_1_5 + var_1_6) + var_1_7) , var_1_8)))) : (var_1_1 == ((signed short int) (var_1_7 + var_1_6)))) && ((((min (last_1_var_1_24 , var_1_4)) * last_1_var_1_22) <= var_1_5) ? (((min (var_1_6 , var_1_4)) == var_1_7) ? (var_1_9 == ((signed short int) (-2 + (var_1_10 - var_1_11)))) : 1) : ((! last_1_var_1_50) ? (last_1_var_1_50 ? (var_1_9 == ((signed short int) ((var_1_12 - (abs (var_1_6))) - 2))) : 1) : (var_1_9 == ((signed short int) (max ((max (var_1_5 , var_1_11)) , var_1_10))))))) && ((((var_1_14 - var_1_10) ^ var_1_42) <= var_1_11) ? (var_1_13 == ((float) (max (var_1_15 , (min (999.6f , var_1_16)))))) : (var_1_13 == ((float) ((var_1_17 + var_1_18) - (abs (var_1_15))))))) && ((var_1_33 > var_1_5) ? (var_1_19 == ((double) ((min (var_1_17 , (var_1_21 + 4.6))) + (max (49.38 , (min (var_1_18 , 128.25))))))) : (((5 / var_1_12) <= var_1_10) ? (var_1_19 == ((double) ((var_1_18 - 99.75) + 5.2))) : 1))) && ((var_1_16 == (max (var_1_18 , var_1_13))) ? ((! var_1_36) ? (var_1_22 == ((signed long int) (max (var_1_9 , var_1_6)))) : 1) : (((var_1_9 | var_1_10) < -5) ? ((var_1_36 && (var_1_24 == var_1_9)) ? (var_1_22 == ((signed long int) (var_1_11 - (var_1_23 - var_1_12)))) : (var_1_22 == ((signed long int) var_1_24))) : 1))) && (var_1_36 ? ((-5 >= var_1_6) ? ((var_1_4 >= var_1_10) ? (var_1_24 == ((signed long int) (var_1_7 + (5 - var_1_10)))) : (var_1_24 == ((signed long int) (var_1_38 + (var_1_6 + var_1_26))))) : (var_1_24 == ((signed long int) (-2 + var_1_9)))) : (var_1_24 == ((signed long int) var_1_5)))) && (var_1_50 ? (((var_1_11 / var_1_23) < 2) ? (var_1_25 == ((double) (abs (min (var_1_16 , 64.6))))) : 1) : (((var_1_21 + var_1_18) < (var_1_16 + 7.4)) ? (var_1_25 == ((double) (min (var_1_16 , var_1_21)))) : (var_1_25 == ((double) (var_1_17 - (min (31.5 , var_1_18)))))))) && ((var_1_7 == ((max (var_1_11 , var_1_10)) >> var_1_27)) ? (var_1_26 == ((unsigned long int) (min (var_1_12 , var_1_23)))) : (var_1_26 == ((unsigned long int) (var_1_28 - var_1_27))))) && ((((var_1_12 * var_1_23) * var_1_24) <= (var_1_5 / (min (var_1_27 , var_1_30)))) ? ((var_1_26 >= 32) ? (var_1_29 == ((signed char) (var_1_27 - var_1_32))) : (var_1_29 == ((signed char) (-2 + (var_1_27 + (8 + -2)))))) : 1)) && ((var_1_23 > (var_1_10 - var_1_32)) ? (var_1_33 == ((unsigned short int) (max (var_1_27 , var_1_11)))) : (var_1_33 == ((unsigned short int) (min ((var_1_27 + (min (var_1_10 , var_1_11))) , var_1_12)))))) && ((last_1_var_1_36 && last_1_var_1_54) ? (var_1_34 == ((double) (var_1_17 - var_1_18))) : (var_1_34 == ((double) 3.675)))) && ((-64 >= var_1_8) ? (var_1_36 == ((unsigned char) (! var_1_37))) : 1)) && ((var_1_19 < 10.375) ? (var_1_38 == ((signed short int) ((var_1_11 - (abs (var_1_33))) + (max ((var_1_32 + var_1_27) , var_1_6))))) : 1)) && (((var_1_15 / (abs (var_1_40))) == var_1_34) ? (var_1_39 == ((float) (var_1_17 + (min (var_1_18 , (min (var_1_21 , var_1_41))))))) : 1)) && ((! var_1_37) ? ((var_1_36 || (var_1_16 <= var_1_17)) ? (var_1_42 == ((unsigned long int) (var_1_10 + 8u))) : ((var_1_37 || (var_1_21 >= (var_1_34 / var_1_40))) ? (var_1_37 ? (var_1_42 == ((unsigned long int) (((1000000000u + var_1_43) - (min (var_1_33 , var_1_10))) + (var_1_27 + var_1_12)))) : 1) : (var_1_42 == ((unsigned long int) (abs (var_1_43)))))) : (var_1_42 == ((unsigned long int) (abs (var_1_28 - var_1_23)))))) && ((var_1_11 < ((8 << var_1_42) | var_1_38)) ? (var_1_44 == ((float) var_1_21)) : (var_1_44 == ((float) (var_1_21 + var_1_41))))) && ((var_1_22 == ((abs (var_1_10)) % (min (var_1_27 , var_1_30)))) ? (var_1_50 ? ((var_1_42 >= var_1_23) ? (var_1_36 ? ((var_1_16 != ((min (var_1_15 , var_1_49)) + var_1_21)) ? (var_1_45 == ((signed char) (1 - var_1_27))) : 1) : 1) : ((var_1_8 >= var_1_27) ? (var_1_45 == ((signed char) (max (((min (var_1_46 , var_1_27)) + var_1_47) , var_1_32)))) : (var_1_45 == ((signed char) (2 + var_1_46))))) : (var_1_45 == ((signed char) ((10 + (abs (var_1_27))) - (max (var_1_32 , var_1_48)))))) : 1)) && ((var_1_14 > (~ var_1_32)) ? (var_1_49 == ((double) var_1_16)) : (var_1_49 == ((double) (min (var_1_17 , var_1_18)))))) && (((min (var_1_27 , var_1_42)) >= (var_1_38 | (var_1_26 / var_1_43))) ? (var_1_50 == ((unsigned char) 1)) : (var_1_50 == ((unsigned char) (var_1_37 || (var_1_54 && var_1_52)))))) && (var_1_37 ? (((var_1_27 < (var_1_11 << var_1_43)) || (var_1_9 > var_1_10)) ? (var_1_53 == ((double) (max (var_1_41 , (var_1_18 - var_1_17))))) : ((var_1_25 <= var_1_41) ? (var_1_53 == ((double) var_1_17)) : (var_1_53 == ((double) var_1_18)))) : (var_1_53 == ((double) var_1_41)))) && (((abs (var_1_14)) >= var_1_42) ? (var_1_54 == ((unsigned char) (var_1_36 && (var_1_37 || var_1_52)))) : (var_1_54 == ((unsigned char) var_1_37)))
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
