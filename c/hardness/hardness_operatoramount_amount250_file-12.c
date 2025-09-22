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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12Amount250.c", 13, "reach_error"); }
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
signed short int var_1_1 = 100;
signed short int var_1_6 = 0;
double var_1_8 = 8.4;
double var_1_9 = 24.5;
double var_1_10 = 999999.25;
double var_1_11 = 24.8;
double var_1_12 = 500.5;
double var_1_13 = 256.5;
double var_1_14 = 15.5;
unsigned char var_1_15 = 2;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 50;
unsigned char var_1_18 = 2;
unsigned char var_1_19 = 32;
float var_1_20 = 24.875;
float var_1_21 = 9.7;
float var_1_22 = 8.125;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 1;
unsigned short int var_1_28 = 128;
unsigned short int var_1_29 = 128;
unsigned long int var_1_30 = 1;
unsigned long int var_1_31 = 1804783077;
unsigned long int var_1_32 = 1659937661;
unsigned long int var_1_33 = 1205994122;
unsigned long int var_1_34 = 256;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 64;
unsigned char var_1_37 = 64;
unsigned long int var_1_38 = 1;
unsigned char var_1_39 = 1;
unsigned long int var_1_40 = 3135114683;
double var_1_41 = 25.207;
double var_1_42 = 50.4;
unsigned long int var_1_43 = 4;
unsigned short int var_1_44 = 16;
unsigned short int var_1_45 = 62986;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 10;
unsigned char var_1_48 = 1;
signed long int var_1_49 = 1;
double var_1_50 = 999999.4;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 100;
unsigned char var_1_53 = 16;
unsigned char var_1_54 = 64;
unsigned char var_1_55 = 32;
signed long int var_1_56 = -1;
signed long int var_1_57 = 1908825584;
signed long int var_1_58 = 1350725252;
unsigned char var_1_59 = 32;
unsigned long int var_1_60 = 5;
unsigned short int var_1_61 = 0;
unsigned short int var_1_62 = 256;
unsigned char var_1_63 = 32;
signed long int var_1_64 = 16;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 100;
unsigned char last_1_var_1_23 = 1;
double last_1_var_1_41 = 25.207;
unsigned char last_1_var_1_46 = 1;
signed long int last_1_var_1_49 = 1;
unsigned short int last_1_var_1_61 = 0;
unsigned short int last_1_var_1_62 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch12Amount250
	signed long int stepLocal_11 = abs (var_1_6);
	signed long int stepLocal_10 = last_1_var_1_46;
	if (stepLocal_11 >= var_1_17) {
		if (stepLocal_10 < var_1_17) {
			var_1_30 = ((var_1_31 + (var_1_32 - last_1_var_1_62)) - (max ((var_1_33 - var_1_19) , var_1_34)));
		} else {
			var_1_30 = last_1_var_1_46;
		}
	}


	// From: Req14Batch12Amount250
	if (var_1_32 != (var_1_16 + var_1_30)) {
		var_1_46 = (var_1_17 + var_1_19);
	} else {
		var_1_46 = var_1_47;
	}


	// From: Req5Batch12Amount250
	signed long int stepLocal_6 = last_1_var_1_61;
	unsigned char stepLocal_5 = (min (var_1_21 , last_1_var_1_41)) != var_1_10;
	if (stepLocal_6 > (abs (var_1_19))) {
		if ((var_1_19 <= var_1_17) || stepLocal_5) {
			var_1_23 = ((! var_1_24) || var_1_25);
		} else {
			var_1_23 = ((last_1_var_1_23 || (last_1_var_1_61 <= last_1_var_1_49)) && (var_1_24 && var_1_26));
		}
	} else {
		var_1_23 = ((var_1_13 <= var_1_10) && var_1_25);
	}


	// From: Req2Batch12Amount250
	if (var_1_23) {
		var_1_8 = (max ((max (var_1_9 , var_1_10)) , ((var_1_11 + var_1_12) + (max (var_1_13 , var_1_14)))));
	} else {
		var_1_8 = ((min (var_1_13 , var_1_12)) + var_1_11);
	}


	// From: Req11Batch12Amount250
	if (! ((var_1_21 - var_1_22) > var_1_13)) {
		var_1_41 = var_1_42;
	}


	// From: Req17Batch12Amount250
	if ((var_1_9 > var_1_22) && var_1_26) {
		var_1_51 = (((var_1_52 - var_1_53) + (var_1_54 + var_1_55)) - (abs (var_1_37)));
	} else {
		var_1_51 = var_1_18;
	}


	// From: Req20Batch12Amount250
	var_1_60 = (abs (var_1_17));


	// From: Req22Batch12Amount250
	if (5 < var_1_52) {
		var_1_62 = (min ((var_1_52 + (var_1_54 + var_1_29)) , var_1_18));
	} else {
		var_1_62 = (var_1_45 - var_1_29);
	}


	// From: Req23Batch12Amount250
	var_1_63 = var_1_53;


	// From: Req12Batch12Amount250
	unsigned long int stepLocal_12 = var_1_33 & var_1_62;
	if (stepLocal_12 > (var_1_32 * 5u)) {
		var_1_43 = (abs (min (var_1_51 , 32u)));
	} else {
		var_1_43 = var_1_6;
	}


	// From: Req13Batch12Amount250
	if (var_1_19 <= var_1_43) {
		var_1_44 = (var_1_45 - (var_1_29 + var_1_18));
	}


	// From: Req19Batch12Amount250
	unsigned short int stepLocal_19 = var_1_44;
	if (((var_1_36 - var_1_55) - var_1_17) >= stepLocal_19) {
		var_1_59 = (min (var_1_19 , var_1_54));
	}


	// From: Req24Batch12Amount250
	var_1_64 = var_1_43;


	// From: Req18Batch12Amount250
	unsigned char stepLocal_18 = var_1_23;
	unsigned long int stepLocal_17 = var_1_60;
	if ((var_1_43 != (var_1_60 + var_1_29)) && stepLocal_18) {
		if (var_1_43 > stepLocal_17) {
			var_1_56 = ((var_1_53 + (var_1_47 + var_1_64)) - ((min (var_1_57 , var_1_58)) - var_1_19));
		} else {
			if (var_1_21 > var_1_8) {
				var_1_56 = (var_1_47 - ((max (1512537074 , var_1_58)) - var_1_29));
			} else {
				var_1_56 = var_1_37;
			}
		}
	}


	// From: Req7Batch12Amount250
	unsigned char stepLocal_9 = var_1_25;
	signed long int stepLocal_8 = var_1_56 * (~ var_1_19);
	if (var_1_24 || stepLocal_9) {
		if ((var_1_18 / var_1_16) >= stepLocal_8) {
			var_1_28 = (min ((var_1_6 + var_1_19) , (var_1_60 + (var_1_16 + var_1_29))));
		} else {
			var_1_28 = var_1_64;
		}
	}


	// From: Req6Batch12Amount250
	unsigned short int stepLocal_7 = var_1_28;
	if (var_1_9 < var_1_14) {
		var_1_27 = (var_1_25 || var_1_24);
	} else {
		if (stepLocal_7 <= ((var_1_30 + 64) * (var_1_16 * var_1_18))) {
			var_1_27 = (var_1_25 || var_1_26);
		}
	}


	// From: Req15Batch12Amount250
	if (var_1_27) {
		var_1_48 = (var_1_39 && var_1_25);
	} else {
		var_1_48 = (! (! (! var_1_25)));
	}


	// From: Req4Batch12Amount250
	if (var_1_27) {
		var_1_20 = var_1_9;
	} else {
		var_1_20 = (((var_1_21 - var_1_22) + var_1_11) + var_1_12);
	}


	// From: Req9Batch12Amount250
	if (var_1_48) {
		var_1_35 = ((var_1_36 + var_1_37) - var_1_17);
	} else {
		var_1_35 = var_1_17;
	}


	// From: Req1Batch12Amount250
	signed long int stepLocal_2 = var_1_64;
	signed long int stepLocal_1 = 1;
	unsigned char stepLocal_0 = ! var_1_48;
	if (((var_1_46 * last_1_var_1_1) >= var_1_56) && stepLocal_0) {
		var_1_1 = (last_1_var_1_1 - (max (var_1_46 , var_1_6)));
	} else {
		if ((65169 - var_1_46) < stepLocal_2) {
			var_1_1 = ((min (var_1_46 , last_1_var_1_1)) - var_1_6);
		} else {
			if ((4 + var_1_46) != stepLocal_1) {
				var_1_1 = var_1_46;
			}
		}
	}


	// From: Req16Batch12Amount250
	unsigned long int stepLocal_16 = var_1_31 + var_1_37;
	unsigned long int stepLocal_15 = (var_1_62 & var_1_17) % var_1_33;
	unsigned long int stepLocal_14 = var_1_31;
	signed short int stepLocal_13 = var_1_6;
	if (var_1_44 == stepLocal_16) {
		var_1_49 = (16 + var_1_62);
	} else {
		if (var_1_33 >= stepLocal_14) {
			if (stepLocal_13 >= (var_1_17 / var_1_36)) {
				if ((199.4 / var_1_50) != var_1_14) {
					if ((var_1_34 + var_1_36) < stepLocal_15) {
						var_1_49 = (var_1_60 + ((var_1_16 + var_1_44) - var_1_1));
					} else {
						var_1_49 = ((max (var_1_43 , (var_1_37 - var_1_18))) + var_1_44);
					}
				} else {
					var_1_49 = (var_1_45 + var_1_30);
				}
			}
		} else {
			var_1_49 = (var_1_62 - var_1_46);
		}
	}


	// From: Req21Batch12Amount250
	if ((var_1_44 >= (32 * var_1_43)) && ((var_1_34 & var_1_32) < (max (var_1_31 , var_1_55)))) {
		if ((var_1_49 & var_1_40) != var_1_31) {
			var_1_61 = ((max (42633 , var_1_45)) - var_1_17);
		} else {
			var_1_61 = var_1_44;
		}
	} else {
		var_1_61 = var_1_52;
	}


	// From: Req3Batch12Amount250
	signed long int stepLocal_4 = var_1_49;
	unsigned char stepLocal_3 = var_1_35;
	if (stepLocal_4 < (- (var_1_43 * var_1_64))) {
		var_1_15 = (var_1_16 - (min ((var_1_17 + var_1_18) , var_1_19)));
	} else {
		if (stepLocal_3 <= var_1_19) {
			var_1_15 = (max (var_1_18 , var_1_19));
		} else {
			var_1_15 = (abs (var_1_17));
		}
	}


	// From: Req10Batch12Amount250
	if (var_1_6 <= -32) {
		if (var_1_15 >= var_1_16) {
			if (((max (var_1_15 , var_1_64)) / var_1_36) != (var_1_29 | (var_1_28 % var_1_37))) {
				var_1_38 = (max (var_1_32 , var_1_43));
			} else {
				var_1_38 = (var_1_43 + var_1_37);
			}
		} else {
			var_1_38 = (var_1_40 - (var_1_17 + var_1_18));
		}
	} else {
		var_1_38 = (var_1_19 + var_1_17);
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -230584.3009213691400e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -230584.3009213691400e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691400e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 64);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 16383);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 1073741823);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 1610612735);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 1073741823);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 63);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 64);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967294);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 32767);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 254);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -922337.2036854776000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
	assume_abort_if_not(var_1_50 != 0.0F);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 95);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 32);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 32);
	assume_abort_if_not(var_1_54 <= 64);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 32);
	assume_abort_if_not(var_1_55 <= 63);
	var_1_57 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_57 >= 1073741823);
	assume_abort_if_not(var_1_57 <= 2147483646);
	var_1_58 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_58 >= 1073741823);
	assume_abort_if_not(var_1_58 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_62 = var_1_62;
}

int property(void) {
	return ((((((((((((((((((((((((((var_1_46 * last_1_var_1_1) >= var_1_56) && (! var_1_48)) ? (var_1_1 == ((signed short int) (last_1_var_1_1 - (max (var_1_46 , var_1_6))))) : (((65169 - var_1_46) < var_1_64) ? (var_1_1 == ((signed short int) ((min (var_1_46 , last_1_var_1_1)) - var_1_6))) : (((4 + var_1_46) != 1) ? (var_1_1 == ((signed short int) var_1_46)) : 1))) && (var_1_23 ? (var_1_8 == ((double) (max ((max (var_1_9 , var_1_10)) , ((var_1_11 + var_1_12) + (max (var_1_13 , var_1_14))))))) : (var_1_8 == ((double) ((min (var_1_13 , var_1_12)) + var_1_11))))) && ((var_1_49 < (- (var_1_43 * var_1_64))) ? (var_1_15 == ((unsigned char) (var_1_16 - (min ((var_1_17 + var_1_18) , var_1_19))))) : ((var_1_35 <= var_1_19) ? (var_1_15 == ((unsigned char) (max (var_1_18 , var_1_19)))) : (var_1_15 == ((unsigned char) (abs (var_1_17))))))) && (var_1_27 ? (var_1_20 == ((float) var_1_9)) : (var_1_20 == ((float) (((var_1_21 - var_1_22) + var_1_11) + var_1_12))))) && ((last_1_var_1_61 > (abs (var_1_19))) ? (((var_1_19 <= var_1_17) || ((min (var_1_21 , last_1_var_1_41)) != var_1_10)) ? (var_1_23 == ((unsigned char) ((! var_1_24) || var_1_25))) : (var_1_23 == ((unsigned char) ((last_1_var_1_23 || (last_1_var_1_61 <= last_1_var_1_49)) && (var_1_24 && var_1_26))))) : (var_1_23 == ((unsigned char) ((var_1_13 <= var_1_10) && var_1_25))))) && ((var_1_9 < var_1_14) ? (var_1_27 == ((unsigned char) (var_1_25 || var_1_24))) : ((var_1_28 <= ((var_1_30 + 64) * (var_1_16 * var_1_18))) ? (var_1_27 == ((unsigned char) (var_1_25 || var_1_26))) : 1))) && ((var_1_24 || var_1_25) ? (((var_1_18 / var_1_16) >= (var_1_56 * (~ var_1_19))) ? (var_1_28 == ((unsigned short int) (min ((var_1_6 + var_1_19) , (var_1_60 + (var_1_16 + var_1_29)))))) : (var_1_28 == ((unsigned short int) var_1_64))) : 1)) && (((abs (var_1_6)) >= var_1_17) ? ((last_1_var_1_46 < var_1_17) ? (var_1_30 == ((unsigned long int) ((var_1_31 + (var_1_32 - last_1_var_1_62)) - (max ((var_1_33 - var_1_19) , var_1_34))))) : (var_1_30 == ((unsigned long int) last_1_var_1_46))) : 1)) && (var_1_48 ? (var_1_35 == ((unsigned char) ((var_1_36 + var_1_37) - var_1_17))) : (var_1_35 == ((unsigned char) var_1_17)))) && ((var_1_6 <= -32) ? ((var_1_15 >= var_1_16) ? ((((max (var_1_15 , var_1_64)) / var_1_36) != (var_1_29 | (var_1_28 % var_1_37))) ? (var_1_38 == ((unsigned long int) (max (var_1_32 , var_1_43)))) : (var_1_38 == ((unsigned long int) (var_1_43 + var_1_37)))) : (var_1_38 == ((unsigned long int) (var_1_40 - (var_1_17 + var_1_18))))) : (var_1_38 == ((unsigned long int) (var_1_19 + var_1_17))))) && ((! ((var_1_21 - var_1_22) > var_1_13)) ? (var_1_41 == ((double) var_1_42)) : 1)) && (((var_1_33 & var_1_62) > (var_1_32 * 5u)) ? (var_1_43 == ((unsigned long int) (abs (min (var_1_51 , 32u))))) : (var_1_43 == ((unsigned long int) var_1_6)))) && ((var_1_19 <= var_1_43) ? (var_1_44 == ((unsigned short int) (var_1_45 - (var_1_29 + var_1_18)))) : 1)) && ((var_1_32 != (var_1_16 + var_1_30)) ? (var_1_46 == ((unsigned char) (var_1_17 + var_1_19))) : (var_1_46 == ((unsigned char) var_1_47)))) && (var_1_27 ? (var_1_48 == ((unsigned char) (var_1_39 && var_1_25))) : (var_1_48 == ((unsigned char) (! (! (! var_1_25))))))) && ((var_1_44 == (var_1_31 + var_1_37)) ? (var_1_49 == ((signed long int) (16 + var_1_62))) : ((var_1_33 >= var_1_31) ? ((var_1_6 >= (var_1_17 / var_1_36)) ? (((199.4 / var_1_50) != var_1_14) ? (((var_1_34 + var_1_36) < ((var_1_62 & var_1_17) % var_1_33)) ? (var_1_49 == ((signed long int) (var_1_60 + ((var_1_16 + var_1_44) - var_1_1)))) : (var_1_49 == ((signed long int) ((max (var_1_43 , (var_1_37 - var_1_18))) + var_1_44)))) : (var_1_49 == ((signed long int) (var_1_45 + var_1_30)))) : 1) : (var_1_49 == ((signed long int) (var_1_62 - var_1_46)))))) && (((var_1_9 > var_1_22) && var_1_26) ? (var_1_51 == ((unsigned char) (((var_1_52 - var_1_53) + (var_1_54 + var_1_55)) - (abs (var_1_37))))) : (var_1_51 == ((unsigned char) var_1_18)))) && (((var_1_43 != (var_1_60 + var_1_29)) && var_1_23) ? ((var_1_43 > var_1_60) ? (var_1_56 == ((signed long int) ((var_1_53 + (var_1_47 + var_1_64)) - ((min (var_1_57 , var_1_58)) - var_1_19)))) : ((var_1_21 > var_1_8) ? (var_1_56 == ((signed long int) (var_1_47 - ((max (1512537074 , var_1_58)) - var_1_29)))) : (var_1_56 == ((signed long int) var_1_37)))) : 1)) && ((((var_1_36 - var_1_55) - var_1_17) >= var_1_44) ? (var_1_59 == ((unsigned char) (min (var_1_19 , var_1_54)))) : 1)) && (var_1_60 == ((unsigned long int) (abs (var_1_17))))) && (((var_1_44 >= (32 * var_1_43)) && ((var_1_34 & var_1_32) < (max (var_1_31 , var_1_55)))) ? (((var_1_49 & var_1_40) != var_1_31) ? (var_1_61 == ((unsigned short int) ((max (42633 , var_1_45)) - var_1_17))) : (var_1_61 == ((unsigned short int) var_1_44))) : (var_1_61 == ((unsigned short int) var_1_52)))) && ((5 < var_1_52) ? (var_1_62 == ((unsigned short int) (min ((var_1_52 + (var_1_54 + var_1_29)) , var_1_18)))) : (var_1_62 == ((unsigned short int) (var_1_45 - var_1_29))))) && (var_1_63 == ((unsigned char) var_1_53))) && (var_1_64 == ((signed long int) var_1_43))
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
