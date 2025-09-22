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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch101Amount250.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 16;
unsigned long int var_1_5 = 16;
unsigned long int var_1_6 = 3027753518;
signed char var_1_7 = 1;
double var_1_8 = 7.92;
double var_1_9 = 10.534;
double var_1_10 = 5.5;
double var_1_11 = 9.5;
double var_1_12 = 9.7;
signed char var_1_13 = 2;
signed char var_1_14 = -16;
unsigned long int var_1_15 = 100;
signed char var_1_16 = 64;
signed char var_1_17 = 64;
signed char var_1_18 = 16;
signed char var_1_19 = 1;
signed char var_1_20 = 32;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 200;
unsigned char var_1_23 = 0;
signed char var_1_24 = -16;
signed char var_1_25 = 1;
signed char var_1_26 = 10;
signed short int var_1_27 = 500;
signed short int var_1_28 = 23715;
unsigned char var_1_29 = 8;
unsigned char var_1_30 = 64;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 1;
signed short int var_1_35 = -4;
double var_1_36 = 999.5;
double var_1_37 = 24.2;
double var_1_38 = 4.2;
double var_1_39 = 9.6;
double var_1_40 = 1.625;
double var_1_41 = 10.5;
unsigned char var_1_42 = 0;
signed long int var_1_43 = 8;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned short int var_1_50 = 2;
unsigned short int var_1_51 = 50640;
unsigned short int var_1_52 = 37408;
unsigned short int var_1_53 = 8;
unsigned short int var_1_54 = 29581;
unsigned short int var_1_55 = 21733;
float var_1_56 = 64.8;
signed long int var_1_57 = -500;
unsigned char var_1_58 = 4;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 16;
signed char last_1_var_1_7 = 1;
unsigned char last_1_var_1_21 = 0;
unsigned char last_1_var_1_31 = 1;
double last_1_var_1_36 = 999.5;
signed long int last_1_var_1_43 = 8;
unsigned char last_1_var_1_44 = 0;
unsigned short int last_1_var_1_50 = 2;
unsigned short int last_1_var_1_53 = 8;
signed long int last_1_var_1_57 = -500;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch101Amount250
	unsigned char stepLocal_11 = var_1_33;
	unsigned long int stepLocal_10 = var_1_17 * var_1_5;
	if (last_1_var_1_31) {
		if (last_1_var_1_57 < stepLocal_10) {
			var_1_35 = ((var_1_26 - var_1_20) + var_1_17);
		} else {
			var_1_35 = (var_1_16 + var_1_25);
		}
	} else {
		if (var_1_9 <= 9.99999995E7) {
			if (stepLocal_11 && var_1_23) {
				var_1_35 = var_1_18;
			}
		} else {
			var_1_35 = last_1_var_1_7;
		}
	}


	// From: Req16Batch101Amount250
	signed long int stepLocal_18 = - var_1_51;
	unsigned long int stepLocal_17 = min (var_1_6 , var_1_25);
	unsigned char stepLocal_16 = last_1_var_1_44;
	if (stepLocal_18 > -2) {
		if ((var_1_15 >= (min (var_1_18 , var_1_25))) || stepLocal_16) {
			if (stepLocal_17 != last_1_var_1_43) {
				var_1_53 = (((var_1_54 - var_1_22) + var_1_55) - var_1_25);
			} else {
				var_1_53 = (((var_1_26 + var_1_25) + var_1_20) + (var_1_22 + last_1_var_1_50));
			}
		} else {
			if ((var_1_11 / var_1_12) < var_1_37) {
				var_1_53 = (min (var_1_18 , var_1_52));
			} else {
				var_1_53 = (var_1_17 + (abs (5)));
			}
		}
	}


	// From: Req15Batch101Amount250
	var_1_50 = (max (((min (var_1_51 , var_1_52)) - var_1_53) , var_1_25));


	// From: Req13Batch101Amount250
	unsigned char stepLocal_15 = last_1_var_1_50 > (var_1_25 + last_1_var_1_53);
	signed long int stepLocal_14 = (min (var_1_30 , var_1_20)) - var_1_25;
	signed long int stepLocal_13 = last_1_var_1_7;
	signed long int stepLocal_12 = (min (last_1_var_1_53 , 100)) * (var_1_26 % var_1_17);
	if (stepLocal_13 >= var_1_13) {
		if (stepLocal_15 && (last_1_var_1_21 || (var_1_28 != var_1_17))) {
			var_1_44 = (var_1_32 && var_1_23);
		} else {
			var_1_44 = (! (var_1_32 && (! var_1_23)));
		}
	} else {
		if (last_1_var_1_21) {
			if (stepLocal_12 < var_1_22) {
				if (last_1_var_1_1 > stepLocal_14) {
					var_1_44 = (! ((var_1_33 || var_1_34) && var_1_32));
				} else {
					var_1_44 = ((! var_1_32) || ((var_1_41 <= last_1_var_1_36) && var_1_23));
				}
			}
		} else {
			var_1_44 = ((var_1_23 || (var_1_45 || var_1_46)) || (var_1_47 || var_1_48));
		}
	}


	// From: Req10Batch101Amount250
	if (! ((var_1_22 <= 16) && (var_1_53 <= 10))) {
		var_1_36 = (abs (var_1_37));
	} else {
		if (var_1_44 || var_1_33) {
			var_1_36 = (var_1_38 + ((max (var_1_39 , 16.25)) - (max (var_1_40 , var_1_41))));
		} else {
			var_1_36 = (max ((var_1_40 - 4.52) , var_1_37));
		}
	}


	// From: Req7Batch101Amount250
	unsigned long int stepLocal_8 = var_1_5;
	signed long int stepLocal_7 = var_1_18 / var_1_17;
	unsigned long int stepLocal_6 = min (var_1_5 , var_1_25);
	signed long int stepLocal_5 = var_1_22 - (var_1_30 - var_1_25);
	if (stepLocal_6 <= var_1_19) {
		if (stepLocal_5 == var_1_26) {
			var_1_29 = (max (var_1_17 , var_1_20));
		} else {
			if (var_1_23) {
				if (var_1_6 <= stepLocal_8) {
					var_1_29 = (max ((min (var_1_30 , var_1_25)) , var_1_17));
				} else {
					var_1_29 = ((var_1_30 - var_1_19) + var_1_17);
				}
			}
		}
	} else {
		if (128.5f >= (min (15.6f , var_1_12))) {
			if (var_1_16 > stepLocal_7) {
				if (var_1_44) {
					var_1_29 = var_1_17;
				} else {
					var_1_29 = var_1_19;
				}
			} else {
				var_1_29 = 5;
			}
		} else {
			var_1_29 = var_1_19;
		}
	}


	// From: Req8Batch101Amount250
	unsigned char stepLocal_9 = var_1_29;
	if (stepLocal_9 >= var_1_17) {
		var_1_31 = (! (var_1_32 && var_1_33));
	} else {
		var_1_31 = ((var_1_32 && var_1_33) && var_1_34);
	}


	// From: Req6Batch101Amount250
	unsigned long int stepLocal_4 = var_1_5 * (var_1_20 % var_1_22);
	if (stepLocal_4 >= (var_1_6 - var_1_19)) {
		var_1_27 = (min (var_1_29 , var_1_25));
	} else {
		var_1_27 = ((var_1_18 + 8) - (var_1_28 - var_1_25));
	}


	// From: Req11Batch101Amount250
	if (var_1_20 < var_1_27) {
		var_1_42 = (! var_1_23);
	}


	// From: Req12Batch101Amount250
	var_1_43 = var_1_19;


	// From: Req14Batch101Amount250
	var_1_49 = (max (var_1_26 , (max ((min (var_1_20 , 1)) , var_1_19))));


	// From: Req17Batch101Amount250
	unsigned char stepLocal_19 = var_1_18 != var_1_19;
	if (! (var_1_44 && var_1_31)) {
		if (stepLocal_19 && var_1_47) {
			if (! var_1_47) {
				if (var_1_40 > var_1_10) {
					var_1_56 = (max (var_1_39 , var_1_38));
				} else {
					var_1_56 = (var_1_41 - (max (var_1_40 , var_1_39)));
				}
			} else {
				var_1_56 = (var_1_41 - var_1_40);
			}
		}
	} else {
		if (var_1_9 <= (- 128.1)) {
			var_1_56 = (var_1_40 + var_1_39);
		}
	}


	// From: Req18Batch101Amount250
	if (var_1_31) {
		var_1_57 = var_1_22;
	} else {
		var_1_57 = var_1_35;
	}


	// From: Req1Batch101Amount250
	unsigned char stepLocal_0 = var_1_31;
	if (stepLocal_0 || var_1_44) {
		if ((- var_1_36) <= -0.033) {
			var_1_1 = (3824271162u - var_1_5);
		} else {
			var_1_1 = (min (128u , (var_1_6 - var_1_5)));
		}
	}


	// From: Req4Batch101Amount250
	if (! ((var_1_22 - var_1_18) > var_1_17)) {
		var_1_21 = ((var_1_1 <= var_1_18) && var_1_23);
	}


	// From: Req2Batch101Amount250
	if (((max (var_1_8 , var_1_9)) - (min (3.2 , var_1_10))) < ((var_1_36 / var_1_11) / var_1_12)) {
		if (var_1_9 == (- (max (8.375 , var_1_12)))) {
			if (var_1_21) {
				var_1_7 = var_1_13;
			} else {
				var_1_7 = 1;
			}
		} else {
			var_1_7 = var_1_13;
		}
	} else {
		var_1_7 = var_1_13;
	}


	// From: Req3Batch101Amount250
	unsigned long int stepLocal_2 = var_1_5;
	unsigned long int stepLocal_1 = var_1_5 + 256;
	if (stepLocal_2 >= ((~ var_1_6) + (var_1_1 / var_1_15))) {
		if (stepLocal_1 > 10u) {
			var_1_14 = (var_1_16 - 10);
		} else {
			var_1_14 = ((var_1_17 - (max (var_1_18 , var_1_19))) - var_1_20);
		}
	}


	// From: Req5Batch101Amount250
	unsigned long int stepLocal_3 = (var_1_5 & var_1_1) / var_1_6;
	if (stepLocal_3 < var_1_22) {
		if (var_1_44) {
			var_1_24 = (((var_1_25 - var_1_26) + 25) + var_1_18);
		} else {
			var_1_24 = (var_1_18 - var_1_19);
		}
	} else {
		var_1_24 = var_1_25;
	}


	// From: Req19Batch101Amount250
	if ((var_1_53 >= var_1_50) && var_1_33) {
		if (var_1_25 < (var_1_54 + var_1_1)) {
			var_1_58 = (max (var_1_17 , var_1_30));
		} else {
			var_1_58 = var_1_19;
		}
	} else {
		var_1_58 = var_1_25;
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 2147483647);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 4294967295);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -1);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 62);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 127);
	assume_abort_if_not(var_1_22 <= 255);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 32);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 31);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= 16383);
	assume_abort_if_not(var_1_28 <= 32766);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 63);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -461168.6018427383000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_51 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_51 >= 32767);
	assume_abort_if_not(var_1_51 <= 65534);
	var_1_52 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_52 >= 32767);
	assume_abort_if_not(var_1_52 <= 65534);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 24575);
	assume_abort_if_not(var_1_54 <= 32767);
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 16384);
	assume_abort_if_not(var_1_55 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_57 = var_1_57;
}

int property(void) {
	return (((((((((((((((((((var_1_31 || var_1_44) ? (((- var_1_36) <= -0.033) ? (var_1_1 == ((unsigned long int) (3824271162u - var_1_5))) : (var_1_1 == ((unsigned long int) (min (128u , (var_1_6 - var_1_5)))))) : 1) && ((((max (var_1_8 , var_1_9)) - (min (3.2 , var_1_10))) < ((var_1_36 / var_1_11) / var_1_12)) ? ((var_1_9 == (- (max (8.375 , var_1_12)))) ? (var_1_21 ? (var_1_7 == ((signed char) var_1_13)) : (var_1_7 == ((signed char) 1))) : (var_1_7 == ((signed char) var_1_13))) : (var_1_7 == ((signed char) var_1_13)))) && ((var_1_5 >= ((~ var_1_6) + (var_1_1 / var_1_15))) ? (((var_1_5 + 256) > 10u) ? (var_1_14 == ((signed char) (var_1_16 - 10))) : (var_1_14 == ((signed char) ((var_1_17 - (max (var_1_18 , var_1_19))) - var_1_20)))) : 1)) && ((! ((var_1_22 - var_1_18) > var_1_17)) ? (var_1_21 == ((unsigned char) ((var_1_1 <= var_1_18) && var_1_23))) : 1)) && ((((var_1_5 & var_1_1) / var_1_6) < var_1_22) ? (var_1_44 ? (var_1_24 == ((signed char) (((var_1_25 - var_1_26) + 25) + var_1_18))) : (var_1_24 == ((signed char) (var_1_18 - var_1_19)))) : (var_1_24 == ((signed char) var_1_25)))) && (((var_1_5 * (var_1_20 % var_1_22)) >= (var_1_6 - var_1_19)) ? (var_1_27 == ((signed short int) (min (var_1_29 , var_1_25)))) : (var_1_27 == ((signed short int) ((var_1_18 + 8) - (var_1_28 - var_1_25)))))) && (((min (var_1_5 , var_1_25)) <= var_1_19) ? (((var_1_22 - (var_1_30 - var_1_25)) == var_1_26) ? (var_1_29 == ((unsigned char) (max (var_1_17 , var_1_20)))) : (var_1_23 ? ((var_1_6 <= var_1_5) ? (var_1_29 == ((unsigned char) (max ((min (var_1_30 , var_1_25)) , var_1_17)))) : (var_1_29 == ((unsigned char) ((var_1_30 - var_1_19) + var_1_17)))) : 1)) : ((128.5f >= (min (15.6f , var_1_12))) ? ((var_1_16 > (var_1_18 / var_1_17)) ? (var_1_44 ? (var_1_29 == ((unsigned char) var_1_17)) : (var_1_29 == ((unsigned char) var_1_19))) : (var_1_29 == ((unsigned char) 5))) : (var_1_29 == ((unsigned char) var_1_19))))) && ((var_1_29 >= var_1_17) ? (var_1_31 == ((unsigned char) (! (var_1_32 && var_1_33)))) : (var_1_31 == ((unsigned char) ((var_1_32 && var_1_33) && var_1_34))))) && (last_1_var_1_31 ? ((last_1_var_1_57 < (var_1_17 * var_1_5)) ? (var_1_35 == ((signed short int) ((var_1_26 - var_1_20) + var_1_17))) : (var_1_35 == ((signed short int) (var_1_16 + var_1_25)))) : ((var_1_9 <= 9.99999995E7) ? ((var_1_33 && var_1_23) ? (var_1_35 == ((signed short int) var_1_18)) : 1) : (var_1_35 == ((signed short int) last_1_var_1_7))))) && ((! ((var_1_22 <= 16) && (var_1_53 <= 10))) ? (var_1_36 == ((double) (abs (var_1_37)))) : ((var_1_44 || var_1_33) ? (var_1_36 == ((double) (var_1_38 + ((max (var_1_39 , 16.25)) - (max (var_1_40 , var_1_41)))))) : (var_1_36 == ((double) (max ((var_1_40 - 4.52) , var_1_37))))))) && ((var_1_20 < var_1_27) ? (var_1_42 == ((unsigned char) (! var_1_23))) : 1)) && (var_1_43 == ((signed long int) var_1_19))) && ((last_1_var_1_7 >= var_1_13) ? (((last_1_var_1_50 > (var_1_25 + last_1_var_1_53)) && (last_1_var_1_21 || (var_1_28 != var_1_17))) ? (var_1_44 == ((unsigned char) (var_1_32 && var_1_23))) : (var_1_44 == ((unsigned char) (! (var_1_32 && (! var_1_23)))))) : (last_1_var_1_21 ? ((((min (last_1_var_1_53 , 100)) * (var_1_26 % var_1_17)) < var_1_22) ? ((last_1_var_1_1 > ((min (var_1_30 , var_1_20)) - var_1_25)) ? (var_1_44 == ((unsigned char) (! ((var_1_33 || var_1_34) && var_1_32)))) : (var_1_44 == ((unsigned char) ((! var_1_32) || ((var_1_41 <= last_1_var_1_36) && var_1_23))))) : 1) : (var_1_44 == ((unsigned char) ((var_1_23 || (var_1_45 || var_1_46)) || (var_1_47 || var_1_48))))))) && (var_1_49 == ((unsigned char) (max (var_1_26 , (max ((min (var_1_20 , 1)) , var_1_19))))))) && (var_1_50 == ((unsigned short int) (max (((min (var_1_51 , var_1_52)) - var_1_53) , var_1_25))))) && (((- var_1_51) > -2) ? (((var_1_15 >= (min (var_1_18 , var_1_25))) || last_1_var_1_44) ? (((min (var_1_6 , var_1_25)) != last_1_var_1_43) ? (var_1_53 == ((unsigned short int) (((var_1_54 - var_1_22) + var_1_55) - var_1_25))) : (var_1_53 == ((unsigned short int) (((var_1_26 + var_1_25) + var_1_20) + (var_1_22 + last_1_var_1_50))))) : (((var_1_11 / var_1_12) < var_1_37) ? (var_1_53 == ((unsigned short int) (min (var_1_18 , var_1_52)))) : (var_1_53 == ((unsigned short int) (var_1_17 + (abs (5))))))) : 1)) && ((! (var_1_44 && var_1_31)) ? (((var_1_18 != var_1_19) && var_1_47) ? ((! var_1_47) ? ((var_1_40 > var_1_10) ? (var_1_56 == ((float) (max (var_1_39 , var_1_38)))) : (var_1_56 == ((float) (var_1_41 - (max (var_1_40 , var_1_39)))))) : (var_1_56 == ((float) (var_1_41 - var_1_40)))) : 1) : ((var_1_9 <= (- 128.1)) ? (var_1_56 == ((float) (var_1_40 + var_1_39))) : 1))) && (var_1_31 ? (var_1_57 == ((signed long int) var_1_22)) : (var_1_57 == ((signed long int) var_1_35)))) && (((var_1_53 >= var_1_50) && var_1_33) ? ((var_1_25 < (var_1_54 + var_1_1)) ? (var_1_58 == ((unsigned char) (max (var_1_17 , var_1_30)))) : (var_1_58 == ((unsigned char) var_1_19))) : (var_1_58 == ((unsigned char) var_1_25)))
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
