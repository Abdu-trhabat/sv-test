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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch64Amount250.c", 13, "reach_error"); }
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
float var_1_1 = 128.25;
float var_1_4 = 63.4;
float var_1_5 = 15.5;
float var_1_6 = 100.75;
signed long int var_1_8 = -16;
signed short int var_1_9 = -16;
float var_1_11 = 31.5;
float var_1_12 = 0.0;
signed long int var_1_13 = 1;
signed long int var_1_14 = -5;
signed long int var_1_15 = -64;
unsigned long int var_1_16 = 25;
unsigned long int var_1_17 = 1428286527;
unsigned long int var_1_18 = 10000;
double var_1_19 = 15.5;
unsigned char var_1_20 = 128;
unsigned char var_1_21 = 2;
unsigned char var_1_22 = 1;
double var_1_23 = 0.0;
unsigned long int var_1_24 = 4;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
float var_1_31 = 99.25;
unsigned long int var_1_34 = 8;
unsigned long int var_1_35 = 1000000000;
signed long int var_1_36 = 256;
unsigned long int var_1_37 = 64;
signed short int var_1_38 = -64;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 50;
unsigned char var_1_41 = 5;
unsigned char var_1_42 = 64;
unsigned char var_1_43 = 4;
unsigned char var_1_44 = 100;
unsigned char var_1_45 = 16;
unsigned char var_1_46 = 25;
unsigned short int var_1_47 = 2;
unsigned short int var_1_48 = 18362;
unsigned short int var_1_49 = 19430;
unsigned char var_1_50 = 1;
unsigned short int var_1_51 = 2;
unsigned long int var_1_52 = 4;
signed long int var_1_53 = 4;
signed long int var_1_54 = 5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_8 = -16;
signed long int last_1_var_1_13 = 1;
double last_1_var_1_19 = 15.5;
unsigned char last_1_var_1_25 = 1;
unsigned long int last_1_var_1_34 = 8;
signed long int last_1_var_1_36 = 256;
unsigned long int last_1_var_1_37 = 64;
unsigned char last_1_var_1_39 = 0;
unsigned char last_1_var_1_40 = 50;
unsigned short int last_1_var_1_47 = 2;
unsigned char last_1_var_1_50 = 1;
unsigned short int last_1_var_1_51 = 2;
signed long int last_1_var_1_53 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch64Amount250
	if (last_1_var_1_50) {
		var_1_16 = (last_1_var_1_8 + (var_1_17 - (max (last_1_var_1_47 , var_1_18))));
	} else {
		var_1_16 = 5u;
	}


	// From: Req13Batch64Amount250
	unsigned long int stepLocal_9 = var_1_17;
	unsigned char stepLocal_8 = var_1_22;
	unsigned char stepLocal_7 = var_1_22 && var_1_27;
	if (stepLocal_8 && last_1_var_1_25) {
		var_1_39 = (((max (var_1_15 , -50)) < (last_1_var_1_36 + var_1_9)) || (var_1_28 && var_1_30));
	} else {
		if (stepLocal_9 < (~ var_1_35)) {
			if (stepLocal_7 || var_1_28) {
				var_1_39 = (! (! var_1_27));
			} else {
				if (! var_1_28) {
					var_1_39 = var_1_29;
				} else {
					var_1_39 = ((var_1_29 && var_1_26) || ((! var_1_28) || var_1_27));
				}
			}
		} else {
			if ((max (var_1_4 , (var_1_5 - var_1_6))) == last_1_var_1_19) {
				var_1_39 = ((! (var_1_26 || var_1_30)) || var_1_27);
			} else {
				var_1_39 = var_1_27;
			}
		}
	}


	// From: Req17Batch64Amount250
	if (last_1_var_1_34 >= var_1_17) {
		if (var_1_35 == last_1_var_1_13) {
			var_1_50 = var_1_30;
		}
	}


	// From: Req6Batch64Amount250
	if (! last_1_var_1_39) {
		var_1_24 = (min ((min (last_1_var_1_47 , var_1_18)) , var_1_21));
	}


	// From: Req3Batch64Amount250
	signed long int stepLocal_1 = last_1_var_1_47;
	if (last_1_var_1_53 <= stepLocal_1) {
		var_1_13 = ((last_1_var_1_47 + last_1_var_1_34) + (min ((max (var_1_9 , var_1_14)) , var_1_15)));
	}


	// From: Req7Batch64Amount250
	signed long int stepLocal_3 = var_1_13;
	if ((- (var_1_4 * var_1_23)) <= (- var_1_5)) {
		if (stepLocal_3 < var_1_20) {
			var_1_25 = (var_1_26 || (last_1_var_1_25 && var_1_27));
		} else {
			var_1_25 = (! ((var_1_28 && var_1_29) && var_1_30));
		}
	}


	// From: Req11Batch64Amount250
	var_1_37 = (min (var_1_17 , ((var_1_13 + var_1_21) + var_1_20)));


	// From: Req19Batch64Amount250
	if (last_1_var_1_39) {
		var_1_52 = last_1_var_1_47;
	} else {
		var_1_52 = var_1_41;
	}


	// From: Req16Batch64Amount250
	if (last_1_var_1_25 || var_1_30) {
		if (var_1_30) {
			if ((max (10.8f , var_1_12)) >= (- var_1_11)) {
				var_1_47 = ((var_1_48 + var_1_49) - last_1_var_1_40);
			} else {
				var_1_47 = (max ((max ((var_1_43 + last_1_var_1_37) , var_1_44)) , last_1_var_1_40));
			}
		} else {
			if (var_1_17 <= var_1_41) {
				var_1_47 = (1 + last_1_var_1_37);
			} else {
				var_1_47 = (max (var_1_20 , var_1_43));
			}
		}
	}


	// From: Req14Batch64Amount250
	if (var_1_28) {
		var_1_40 = (min (((100 - var_1_41) + (var_1_42 + var_1_43)) , (max (var_1_21 , var_1_44))));
	}


	// From: Req18Batch64Amount250
	var_1_51 = (500 + (max (var_1_24 , (var_1_46 + last_1_var_1_51))));


	// From: Req1Batch64Amount250
	if (var_1_24 <= var_1_16) {
		var_1_1 = (abs (var_1_4 + (var_1_5 - var_1_6)));
	} else {
		if (var_1_50) {
			var_1_1 = (max (var_1_6 , var_1_5));
		}
	}


	// From: Req5Batch64Amount250
	unsigned long int stepLocal_2 = var_1_18;
	if (((32 + var_1_52) * (var_1_20 - var_1_21)) > stepLocal_2) {
		if (var_1_39) {
			if (var_1_50) {
				var_1_19 = ((var_1_23 - var_1_6) - var_1_5);
			}
		} else {
			var_1_19 = ((var_1_5 + var_1_6) - var_1_23);
		}
	} else {
		var_1_19 = var_1_5;
	}


	// From: Req8Batch64Amount250
	unsigned long int stepLocal_4 = var_1_24;
	if (! (var_1_14 > var_1_52)) {
		if (var_1_30) {
			var_1_31 = (var_1_4 + var_1_5);
		} else {
			if (! (var_1_50 && var_1_39)) {
				if (stepLocal_4 >= var_1_13) {
					var_1_31 = var_1_6;
				}
			} else {
				var_1_31 = var_1_23;
			}
		}
	} else {
		var_1_31 = var_1_5;
	}


	// From: Req20Batch64Amount250
	unsigned long int stepLocal_13 = (var_1_18 | -1) % var_1_20;
	if (var_1_24 != stepLocal_13) {
		var_1_53 = ((var_1_54 + var_1_52) - (var_1_48 + last_1_var_1_53));
	} else {
		var_1_53 = var_1_14;
	}


	// From: Req15Batch64Amount250
	unsigned long int stepLocal_12 = var_1_14 ^ (var_1_52 - var_1_21);
	unsigned long int stepLocal_11 = var_1_24;
	unsigned char stepLocal_10 = var_1_44;
	if ((var_1_24 / var_1_20) > stepLocal_10) {
		if (((var_1_52 | var_1_16) * (var_1_44 * var_1_41)) > stepLocal_12) {
			if ((- var_1_23) <= (var_1_6 - var_1_5)) {
				var_1_45 = var_1_42;
			} else {
				var_1_45 = (var_1_41 + (max (var_1_42 , var_1_21)));
			}
		} else {
			if ((max (var_1_19 , var_1_11)) >= (var_1_5 - var_1_23)) {
				var_1_45 = var_1_44;
			} else {
				var_1_45 = (var_1_43 + (max (var_1_21 , (abs (var_1_41)))));
			}
		}
	} else {
		if (7.6f > (var_1_6 + (var_1_1 / var_1_12))) {
			var_1_45 = var_1_46;
		} else {
			if (var_1_46 >= stepLocal_11) {
				var_1_45 = (max (var_1_46 , var_1_41));
			} else {
				var_1_45 = (min ((min (var_1_46 , var_1_43)) , var_1_21));
			}
		}
	}


	// From: Req12Batch64Amount250
	unsigned char stepLocal_6 = var_1_30;
	if (var_1_25 && stepLocal_6) {
		var_1_38 = (var_1_21 + var_1_45);
	} else {
		var_1_38 = (min (var_1_20 , (max (var_1_52 , (max (var_1_45 , var_1_21))))));
	}


	// From: Req2Batch64Amount250
	signed long int stepLocal_0 = (max (var_1_47 , var_1_38)) * (abs (var_1_9));
	if (var_1_31 <= (max (49.4f , var_1_5))) {
		if (var_1_6 <= var_1_31) {
			if (stepLocal_0 <= var_1_37) {
				var_1_8 = 5;
			} else {
				var_1_8 = (min (var_1_47 , (var_1_38 + var_1_9)));
			}
		} else {
			var_1_8 = ((4 + var_1_38) + var_1_9);
		}
	} else {
		if (var_1_5 <= (var_1_6 / var_1_11)) {
			if (((var_1_12 - var_1_6) - var_1_5) <= var_1_11) {
				var_1_8 = (var_1_9 + var_1_47);
			} else {
				var_1_8 = var_1_38;
			}
		} else {
			var_1_8 = var_1_9;
		}
	}


	// From: Req9Batch64Amount250
	unsigned char stepLocal_5 = var_1_25;
	if (! (200.8 >= (min (var_1_1 , var_1_23)))) {
		var_1_34 = ((min ((var_1_17 - var_1_21) , var_1_20)) + var_1_8);
	} else {
		if (stepLocal_5 || var_1_29) {
			var_1_34 = (var_1_20 + (abs (last_1_var_1_34)));
		} else {
			var_1_34 = (((var_1_35 + 1000000000u) - last_1_var_1_34) + var_1_21);
		}
	}


	// From: Req10Batch64Amount250
	var_1_36 = (var_1_34 - (abs (var_1_53)));
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32767);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 4611686.018427388000e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -1073741823);
	assume_abort_if_not(var_1_14 <= 1073741823);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -1073741823);
	assume_abort_if_not(var_1_15 <= 1073741823);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 1073741823);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1073741823);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 127);
	assume_abort_if_not(var_1_20 <= 255);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 4611686.018427383000e+12F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 536870911);
	assume_abort_if_not(var_1_35 <= 1073741824);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 63);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 64);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 254);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 16383);
	assume_abort_if_not(var_1_48 <= 32767);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 16384);
	assume_abort_if_not(var_1_49 <= 32767);
	var_1_54 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_53 = var_1_53;
}

int property(void) {
	return ((((((((((((((((((((var_1_24 <= var_1_16) ? (var_1_1 == ((float) (abs (var_1_4 + (var_1_5 - var_1_6))))) : (var_1_50 ? (var_1_1 == ((float) (max (var_1_6 , var_1_5)))) : 1)) && ((var_1_31 <= (max (49.4f , var_1_5))) ? ((var_1_6 <= var_1_31) ? ((((max (var_1_47 , var_1_38)) * (abs (var_1_9))) <= var_1_37) ? (var_1_8 == ((signed long int) 5)) : (var_1_8 == ((signed long int) (min (var_1_47 , (var_1_38 + var_1_9)))))) : (var_1_8 == ((signed long int) ((4 + var_1_38) + var_1_9)))) : ((var_1_5 <= (var_1_6 / var_1_11)) ? ((((var_1_12 - var_1_6) - var_1_5) <= var_1_11) ? (var_1_8 == ((signed long int) (var_1_9 + var_1_47))) : (var_1_8 == ((signed long int) var_1_38))) : (var_1_8 == ((signed long int) var_1_9))))) && ((last_1_var_1_53 <= last_1_var_1_47) ? (var_1_13 == ((signed long int) ((last_1_var_1_47 + last_1_var_1_34) + (min ((max (var_1_9 , var_1_14)) , var_1_15))))) : 1)) && (last_1_var_1_50 ? (var_1_16 == ((unsigned long int) (last_1_var_1_8 + (var_1_17 - (max (last_1_var_1_47 , var_1_18)))))) : (var_1_16 == ((unsigned long int) 5u)))) && ((((32 + var_1_52) * (var_1_20 - var_1_21)) > var_1_18) ? (var_1_39 ? (var_1_50 ? (var_1_19 == ((double) ((var_1_23 - var_1_6) - var_1_5))) : 1) : (var_1_19 == ((double) ((var_1_5 + var_1_6) - var_1_23)))) : (var_1_19 == ((double) var_1_5)))) && ((! last_1_var_1_39) ? (var_1_24 == ((unsigned long int) (min ((min (last_1_var_1_47 , var_1_18)) , var_1_21)))) : 1)) && (((- (var_1_4 * var_1_23)) <= (- var_1_5)) ? ((var_1_13 < var_1_20) ? (var_1_25 == ((unsigned char) (var_1_26 || (last_1_var_1_25 && var_1_27)))) : (var_1_25 == ((unsigned char) (! ((var_1_28 && var_1_29) && var_1_30))))) : 1)) && ((! (var_1_14 > var_1_52)) ? (var_1_30 ? (var_1_31 == ((float) (var_1_4 + var_1_5))) : ((! (var_1_50 && var_1_39)) ? ((var_1_24 >= var_1_13) ? (var_1_31 == ((float) var_1_6)) : 1) : (var_1_31 == ((float) var_1_23)))) : (var_1_31 == ((float) var_1_5)))) && ((! (200.8 >= (min (var_1_1 , var_1_23)))) ? (var_1_34 == ((unsigned long int) ((min ((var_1_17 - var_1_21) , var_1_20)) + var_1_8))) : ((var_1_25 || var_1_29) ? (var_1_34 == ((unsigned long int) (var_1_20 + (abs (last_1_var_1_34))))) : (var_1_34 == ((unsigned long int) (((var_1_35 + 1000000000u) - last_1_var_1_34) + var_1_21)))))) && (var_1_36 == ((signed long int) (var_1_34 - (abs (var_1_53)))))) && (var_1_37 == ((unsigned long int) (min (var_1_17 , ((var_1_13 + var_1_21) + var_1_20)))))) && ((var_1_25 && var_1_30) ? (var_1_38 == ((signed short int) (var_1_21 + var_1_45))) : (var_1_38 == ((signed short int) (min (var_1_20 , (max (var_1_52 , (max (var_1_45 , var_1_21)))))))))) && ((var_1_22 && last_1_var_1_25) ? (var_1_39 == ((unsigned char) (((max (var_1_15 , -50)) < (last_1_var_1_36 + var_1_9)) || (var_1_28 && var_1_30)))) : ((var_1_17 < (~ var_1_35)) ? (((var_1_22 && var_1_27) || var_1_28) ? (var_1_39 == ((unsigned char) (! (! var_1_27)))) : ((! var_1_28) ? (var_1_39 == ((unsigned char) var_1_29)) : (var_1_39 == ((unsigned char) ((var_1_29 && var_1_26) || ((! var_1_28) || var_1_27)))))) : (((max (var_1_4 , (var_1_5 - var_1_6))) == last_1_var_1_19) ? (var_1_39 == ((unsigned char) ((! (var_1_26 || var_1_30)) || var_1_27))) : (var_1_39 == ((unsigned char) var_1_27)))))) && (var_1_28 ? (var_1_40 == ((unsigned char) (min (((100 - var_1_41) + (var_1_42 + var_1_43)) , (max (var_1_21 , var_1_44)))))) : 1)) && (((var_1_24 / var_1_20) > var_1_44) ? ((((var_1_52 | var_1_16) * (var_1_44 * var_1_41)) > (var_1_14 ^ (var_1_52 - var_1_21))) ? (((- var_1_23) <= (var_1_6 - var_1_5)) ? (var_1_45 == ((unsigned char) var_1_42)) : (var_1_45 == ((unsigned char) (var_1_41 + (max (var_1_42 , var_1_21)))))) : (((max (var_1_19 , var_1_11)) >= (var_1_5 - var_1_23)) ? (var_1_45 == ((unsigned char) var_1_44)) : (var_1_45 == ((unsigned char) (var_1_43 + (max (var_1_21 , (abs (var_1_41))))))))) : ((7.6f > (var_1_6 + (var_1_1 / var_1_12))) ? (var_1_45 == ((unsigned char) var_1_46)) : ((var_1_46 >= var_1_24) ? (var_1_45 == ((unsigned char) (max (var_1_46 , var_1_41)))) : (var_1_45 == ((unsigned char) (min ((min (var_1_46 , var_1_43)) , var_1_21)))))))) && ((last_1_var_1_25 || var_1_30) ? (var_1_30 ? (((max (10.8f , var_1_12)) >= (- var_1_11)) ? (var_1_47 == ((unsigned short int) ((var_1_48 + var_1_49) - last_1_var_1_40))) : (var_1_47 == ((unsigned short int) (max ((max ((var_1_43 + last_1_var_1_37) , var_1_44)) , last_1_var_1_40))))) : ((var_1_17 <= var_1_41) ? (var_1_47 == ((unsigned short int) (1 + last_1_var_1_37))) : (var_1_47 == ((unsigned short int) (max (var_1_20 , var_1_43)))))) : 1)) && ((last_1_var_1_34 >= var_1_17) ? ((var_1_35 == last_1_var_1_13) ? (var_1_50 == ((unsigned char) var_1_30)) : 1) : 1)) && (var_1_51 == ((unsigned short int) (500 + (max (var_1_24 , (var_1_46 + last_1_var_1_51))))))) && (last_1_var_1_39 ? (var_1_52 == ((unsigned long int) last_1_var_1_47)) : (var_1_52 == ((unsigned long int) var_1_41)))) && ((var_1_24 != ((var_1_18 | -1) % var_1_20)) ? (var_1_53 == ((signed long int) ((var_1_54 + var_1_52) - (var_1_48 + last_1_var_1_53)))) : (var_1_53 == ((signed long int) var_1_14)))
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
