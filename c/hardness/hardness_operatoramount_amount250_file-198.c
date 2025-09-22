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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch198Amount250.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 128;
unsigned long int var_1_2 = 1254234167;
unsigned long int var_1_3 = 1802018976;
unsigned long int var_1_4 = 3238871499;
unsigned long int var_1_5 = 50;
unsigned char var_1_6 = 0;
unsigned short int var_1_7 = 34820;
unsigned short int var_1_8 = 10;
signed char var_1_9 = 0;
signed char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned long int var_1_13 = 1;
signed short int var_1_14 = -16;
signed short int var_1_16 = -2;
unsigned short int var_1_17 = 8;
signed char var_1_18 = 8;
signed char var_1_19 = 32;
float var_1_21 = 0.4;
unsigned short int var_1_23 = 200;
unsigned short int var_1_24 = 32562;
unsigned long int var_1_25 = 16;
float var_1_26 = 16.25;
float var_1_27 = 0.0;
float var_1_28 = 9999999999999.8;
float var_1_29 = 63.5;
float var_1_30 = 0.45999999999999996;
signed char var_1_31 = 64;
signed char var_1_33 = -2;
signed char var_1_34 = 4;
signed char var_1_35 = -8;
signed char var_1_36 = -5;
signed char var_1_37 = 10;
float var_1_38 = 15.5;
double var_1_39 = 10.5;
double var_1_41 = 2.5;
double var_1_42 = 0.0;
double var_1_43 = 0.0;
double var_1_44 = 100000000000.85;
double var_1_45 = 0.75;
float var_1_46 = -0.15;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
double var_1_51 = 7.2;
unsigned long int var_1_52 = 16;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 1;
unsigned char var_1_55 = 32;
unsigned char var_1_56 = 128;
signed char var_1_57 = -10;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_25 = 16;
float last_1_var_1_26 = 16.25;
signed char last_1_var_1_31 = 64;
double last_1_var_1_45 = 0.75;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch198Amount250
	var_1_1 = ((max ((var_1_2 + var_1_3) , var_1_4)) - var_1_5);


	// From: Req3Batch198Amount250
	unsigned long int stepLocal_3 = var_1_3;
	unsigned short int stepLocal_2 = var_1_7;
	if ((var_1_7 | var_1_8) > stepLocal_3) {
		if (var_1_8 < stepLocal_2) {
			var_1_13 = (max (var_1_8 , (var_1_7 + var_1_10)));
		} else {
			var_1_13 = ((var_1_2 - 32u) + var_1_10);
		}
	} else {
		if (var_1_11) {
			var_1_13 = var_1_10;
		} else {
			var_1_13 = var_1_8;
		}
	}


	// From: Req7Batch198Amount250
	var_1_25 = (min ((var_1_4 - var_1_2) , last_1_var_1_25));


	// From: Req10Batch198Amount250
	if (var_1_12) {
		var_1_38 = (9.9999999999995E12f - var_1_27);
	} else {
		if (var_1_27 >= (abs (15.5f))) {
			var_1_38 = var_1_29;
		}
	}


	// From: Req13Batch198Amount250
	var_1_46 = (var_1_43 - (8.5f + 4.75f));


	// From: Req17Batch198Amount250
	signed char stepLocal_19 = var_1_33;
	unsigned long int stepLocal_18 = var_1_4;
	if (31.25f <= var_1_46) {
		if (var_1_34 > stepLocal_19) {
			var_1_53 = (! (var_1_48 && var_1_12));
		} else {
			var_1_53 = (var_1_50 && var_1_12);
		}
	} else {
		if (var_1_8 != stepLocal_18) {
			if (var_1_48) {
				var_1_53 = 1;
			} else {
				var_1_53 = var_1_54;
			}
		} else {
			var_1_53 = var_1_54;
		}
	}


	// From: Req19Batch198Amount250
	var_1_57 = var_1_36;


	// From: Req2Batch198Amount250
	signed long int stepLocal_1 = max (var_1_7 , var_1_8);
	unsigned long int stepLocal_0 = min (0 , var_1_25);
	if (stepLocal_0 > var_1_5) {
		if ((var_1_9 - var_1_10) < stepLocal_1) {
			var_1_6 = (! (var_1_11 || var_1_12));
		} else {
			var_1_6 = (! (var_1_12 && var_1_11));
		}
	}


	// From: Req6Batch198Amount250
	unsigned long int stepLocal_9 = var_1_25;
	if (stepLocal_9 != var_1_2) {
		var_1_23 = (abs ((var_1_24 - var_1_19) + var_1_10));
	} else {
		if (var_1_11) {
			var_1_23 = (min (var_1_10 , var_1_24));
		} else {
			if (! (var_1_6 || var_1_12)) {
				var_1_23 = (var_1_8 + var_1_10);
			}
		}
	}


	// From: Req14Batch198Amount250
	unsigned short int stepLocal_17 = var_1_8;
	signed char stepLocal_16 = var_1_18;
	if (var_1_1 > stepLocal_17) {
		if (var_1_12) {
			if (stepLocal_16 >= var_1_2) {
				var_1_47 = (((! var_1_11) && (var_1_6 || var_1_48)) && (! var_1_49));
			} else {
				var_1_47 = (var_1_49 || ((var_1_48 && var_1_11) || var_1_50));
			}
		}
	}


	// From: Req16Batch198Amount250
	if (var_1_49 && var_1_47) {
		var_1_52 = ((1758575649u + var_1_3) - (var_1_10 + var_1_7));
	}


	// From: Req8Batch198Amount250
	if (last_1_var_1_26 != (abs (max (var_1_46 , var_1_21)))) {
		if ((var_1_52 / var_1_7) >= var_1_25) {
			if (var_1_25 > ((var_1_4 - var_1_5) * var_1_24)) {
				var_1_26 = (7.3f - (min ((var_1_27 - var_1_28) , var_1_29)));
			} else {
				var_1_26 = var_1_29;
			}
		}
	} else {
		var_1_26 = var_1_30;
	}


	// From: Req11Batch198Amount250
	unsigned long int stepLocal_15 = min (var_1_19 , (var_1_1 & 64));
	unsigned long int stepLocal_14 = (var_1_3 - var_1_7) - var_1_52;
	signed long int stepLocal_13 = 100;
	signed long int stepLocal_12 = abs (max (var_1_34 , var_1_36));
	if ((var_1_28 + 127.8f) >= var_1_30) {
		if ((var_1_18 * var_1_1) > stepLocal_14) {
			var_1_39 = (min (var_1_30 , var_1_28));
		} else {
			if ((var_1_35 | var_1_16) == stepLocal_15) {
				if ((-25 ^ -8) >= stepLocal_12) {
					var_1_39 = ((6.494726386071847E18 - var_1_28) - var_1_27);
				} else {
					var_1_39 = (abs (99.5));
				}
			}
		}
	} else {
		if (((var_1_7 - var_1_19) + var_1_1) == stepLocal_13) {
			var_1_39 = (min ((var_1_28 + var_1_41) , var_1_30));
		} else {
			var_1_39 = (var_1_27 - (var_1_42 - (var_1_43 - var_1_44)));
		}
	}


	// From: Req12Batch198Amount250
	if (var_1_47) {
		if (! var_1_12) {
			var_1_45 = (min ((7.75 + var_1_41) , (max ((var_1_44 + var_1_28) , (var_1_27 - var_1_43)))));
		} else {
			if (var_1_12) {
				var_1_45 = (max (var_1_30 , (max (var_1_27 , var_1_42))));
			} else {
				if ((max ((var_1_21 + var_1_38) , last_1_var_1_45)) >= var_1_28) {
					var_1_45 = ((max (var_1_44 , (min (var_1_41 , var_1_43)))) + var_1_28);
				}
			}
		}
	}


	// From: Req15Batch198Amount250
	if ((max (var_1_37 , var_1_9)) == var_1_7) {
		if (var_1_8 == var_1_52) {
			var_1_51 = (abs (min (var_1_42 , (abs (var_1_28)))));
		}
	} else {
		if (var_1_37 >= var_1_33) {
			var_1_51 = (min (50.625 , var_1_44));
		} else {
			var_1_51 = var_1_27;
		}
	}


	// From: Req18Batch198Amount250
	if ((var_1_51 * (var_1_43 - var_1_29)) >= (var_1_51 * 4.45)) {
		var_1_55 = (var_1_56 - var_1_37);
	}


	// From: Req5Batch198Amount250
	signed char stepLocal_8 = var_1_18;
	signed long int stepLocal_7 = 0;
	if (((var_1_18 + var_1_19) << var_1_4) > stepLocal_7) {
		if (((10000.5f * var_1_51) / var_1_21) >= var_1_26) {
			if (stepLocal_8 > var_1_3) {
				var_1_17 = (min (var_1_19 , var_1_18));
			} else {
				var_1_17 = (var_1_19 + (var_1_18 + var_1_10));
			}
		}
	}


	// From: Req9Batch198Amount250
	signed char stepLocal_11 = var_1_19;
	signed long int stepLocal_10 = var_1_8 / var_1_7;
	if (var_1_29 >= var_1_45) {
		if (((var_1_2 / var_1_3) / var_1_24) >= stepLocal_10) {
			var_1_31 = var_1_19;
		} else {
			if (stepLocal_11 > (last_1_var_1_31 * var_1_24)) {
				var_1_31 = (max ((var_1_18 - var_1_19) , var_1_33));
			} else {
				var_1_31 = (((max (-2 , var_1_34)) + var_1_35) + (max ((1 + var_1_36) , (var_1_19 - var_1_37))));
			}
		}
	} else {
		var_1_31 = (var_1_19 - var_1_37);
	}


	// From: Req4Batch198Amount250
	signed long int stepLocal_6 = var_1_10 ^ var_1_7;
	unsigned long int stepLocal_5 = var_1_1 / (abs (var_1_2));
	unsigned char stepLocal_4 = (var_1_2 / var_1_3) >= var_1_4;
	if (((var_1_10 + var_1_17) == var_1_5) || stepLocal_4) {
		if (1 <= stepLocal_5) {
			if (stepLocal_6 > (var_1_8 * var_1_3)) {
				var_1_14 = (max ((var_1_9 - var_1_10) , var_1_17));
			}
		} else {
			var_1_14 = (max (var_1_10 , (min (var_1_9 , (var_1_17 + var_1_16)))));
		}
	} else {
		var_1_14 = var_1_16;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 1073741823);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 1073741824);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 2147483647);
	assume_abort_if_not(var_1_4 <= 4294967294);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65535);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= -16383);
	assume_abort_if_not(var_1_16 <= 16383);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 64);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	assume_abort_if_not(var_1_21 != 0.0F);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 16383);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 4611686.018427383000e+12F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -127);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -31);
	assume_abort_if_not(var_1_34 <= 32);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -31);
	assume_abort_if_not(var_1_35 <= 31);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -31);
	assume_abort_if_not(var_1_36 <= 31);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 4611686.018427383000e+12F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 2305843.009213691400e+12F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 2305843.009213691400e+12F && var_1_44 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 1);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 0);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 127);
	assume_abort_if_not(var_1_56 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_25 = var_1_25;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_45 = var_1_45;
}

int property(void) {
	return ((((((((((((((((((var_1_1 == ((unsigned long int) ((max ((var_1_2 + var_1_3) , var_1_4)) - var_1_5))) && (((min (0 , var_1_25)) > var_1_5) ? (((var_1_9 - var_1_10) < (max (var_1_7 , var_1_8))) ? (var_1_6 == ((unsigned char) (! (var_1_11 || var_1_12)))) : (var_1_6 == ((unsigned char) (! (var_1_12 && var_1_11))))) : 1)) && (((var_1_7 | var_1_8) > var_1_3) ? ((var_1_8 < var_1_7) ? (var_1_13 == ((unsigned long int) (max (var_1_8 , (var_1_7 + var_1_10))))) : (var_1_13 == ((unsigned long int) ((var_1_2 - 32u) + var_1_10)))) : (var_1_11 ? (var_1_13 == ((unsigned long int) var_1_10)) : (var_1_13 == ((unsigned long int) var_1_8))))) && ((((var_1_10 + var_1_17) == var_1_5) || ((var_1_2 / var_1_3) >= var_1_4)) ? ((1 <= (var_1_1 / (abs (var_1_2)))) ? (((var_1_10 ^ var_1_7) > (var_1_8 * var_1_3)) ? (var_1_14 == ((signed short int) (max ((var_1_9 - var_1_10) , var_1_17)))) : 1) : (var_1_14 == ((signed short int) (max (var_1_10 , (min (var_1_9 , (var_1_17 + var_1_16)))))))) : (var_1_14 == ((signed short int) var_1_16)))) && ((((var_1_18 + var_1_19) << var_1_4) > 0) ? ((((10000.5f * var_1_51) / var_1_21) >= var_1_26) ? ((var_1_18 > var_1_3) ? (var_1_17 == ((unsigned short int) (min (var_1_19 , var_1_18)))) : (var_1_17 == ((unsigned short int) (var_1_19 + (var_1_18 + var_1_10))))) : 1) : 1)) && ((var_1_25 != var_1_2) ? (var_1_23 == ((unsigned short int) (abs ((var_1_24 - var_1_19) + var_1_10)))) : (var_1_11 ? (var_1_23 == ((unsigned short int) (min (var_1_10 , var_1_24)))) : ((! (var_1_6 || var_1_12)) ? (var_1_23 == ((unsigned short int) (var_1_8 + var_1_10))) : 1)))) && (var_1_25 == ((unsigned long int) (min ((var_1_4 - var_1_2) , last_1_var_1_25))))) && ((last_1_var_1_26 != (abs (max (var_1_46 , var_1_21)))) ? (((var_1_52 / var_1_7) >= var_1_25) ? ((var_1_25 > ((var_1_4 - var_1_5) * var_1_24)) ? (var_1_26 == ((float) (7.3f - (min ((var_1_27 - var_1_28) , var_1_29))))) : (var_1_26 == ((float) var_1_29))) : 1) : (var_1_26 == ((float) var_1_30)))) && ((var_1_29 >= var_1_45) ? ((((var_1_2 / var_1_3) / var_1_24) >= (var_1_8 / var_1_7)) ? (var_1_31 == ((signed char) var_1_19)) : ((var_1_19 > (last_1_var_1_31 * var_1_24)) ? (var_1_31 == ((signed char) (max ((var_1_18 - var_1_19) , var_1_33)))) : (var_1_31 == ((signed char) (((max (-2 , var_1_34)) + var_1_35) + (max ((1 + var_1_36) , (var_1_19 - var_1_37)))))))) : (var_1_31 == ((signed char) (var_1_19 - var_1_37))))) && (var_1_12 ? (var_1_38 == ((float) (9.9999999999995E12f - var_1_27))) : ((var_1_27 >= (abs (15.5f))) ? (var_1_38 == ((float) var_1_29)) : 1))) && (((var_1_28 + 127.8f) >= var_1_30) ? (((var_1_18 * var_1_1) > ((var_1_3 - var_1_7) - var_1_52)) ? (var_1_39 == ((double) (min (var_1_30 , var_1_28)))) : (((var_1_35 | var_1_16) == (min (var_1_19 , (var_1_1 & 64)))) ? (((-25 ^ -8) >= (abs (max (var_1_34 , var_1_36)))) ? (var_1_39 == ((double) ((6.494726386071847E18 - var_1_28) - var_1_27))) : (var_1_39 == ((double) (abs (99.5))))) : 1)) : ((((var_1_7 - var_1_19) + var_1_1) == 100) ? (var_1_39 == ((double) (min ((var_1_28 + var_1_41) , var_1_30)))) : (var_1_39 == ((double) (var_1_27 - (var_1_42 - (var_1_43 - var_1_44)))))))) && (var_1_47 ? ((! var_1_12) ? (var_1_45 == ((double) (min ((7.75 + var_1_41) , (max ((var_1_44 + var_1_28) , (var_1_27 - var_1_43))))))) : (var_1_12 ? (var_1_45 == ((double) (max (var_1_30 , (max (var_1_27 , var_1_42)))))) : (((max ((var_1_21 + var_1_38) , last_1_var_1_45)) >= var_1_28) ? (var_1_45 == ((double) ((max (var_1_44 , (min (var_1_41 , var_1_43)))) + var_1_28))) : 1))) : 1)) && (var_1_46 == ((float) (var_1_43 - (8.5f + 4.75f))))) && ((var_1_1 > var_1_8) ? (var_1_12 ? ((var_1_18 >= var_1_2) ? (var_1_47 == ((unsigned char) (((! var_1_11) && (var_1_6 || var_1_48)) && (! var_1_49)))) : (var_1_47 == ((unsigned char) (var_1_49 || ((var_1_48 && var_1_11) || var_1_50))))) : 1) : 1)) && (((max (var_1_37 , var_1_9)) == var_1_7) ? ((var_1_8 == var_1_52) ? (var_1_51 == ((double) (abs (min (var_1_42 , (abs (var_1_28))))))) : 1) : ((var_1_37 >= var_1_33) ? (var_1_51 == ((double) (min (50.625 , var_1_44)))) : (var_1_51 == ((double) var_1_27))))) && ((var_1_49 && var_1_47) ? (var_1_52 == ((unsigned long int) ((1758575649u + var_1_3) - (var_1_10 + var_1_7)))) : 1)) && ((31.25f <= var_1_46) ? ((var_1_34 > var_1_33) ? (var_1_53 == ((unsigned char) (! (var_1_48 && var_1_12)))) : (var_1_53 == ((unsigned char) (var_1_50 && var_1_12)))) : ((var_1_8 != var_1_4) ? (var_1_48 ? (var_1_53 == ((unsigned char) 1)) : (var_1_53 == ((unsigned char) var_1_54))) : (var_1_53 == ((unsigned char) var_1_54))))) && (((var_1_51 * (var_1_43 - var_1_29)) >= (var_1_51 * 4.45)) ? (var_1_55 == ((unsigned char) (var_1_56 - var_1_37))) : 1)) && (var_1_57 == ((signed char) var_1_36))
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
