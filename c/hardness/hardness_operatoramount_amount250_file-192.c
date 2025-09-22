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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch192Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 5;
signed long int var_1_3 = 256;
signed long int var_1_4 = 8;
signed long int var_1_5 = 1;
unsigned char var_1_6 = 64;
unsigned char var_1_7 = 100;
unsigned char var_1_8 = 2;
unsigned char var_1_9 = 16;
signed short int var_1_10 = 8;
unsigned char var_1_11 = 2;
signed long int var_1_12 = 1411675778;
unsigned short int var_1_13 = 37009;
signed short int var_1_14 = 17886;
signed short int var_1_15 = 10000;
unsigned short int var_1_17 = 10;
signed long int var_1_18 = -100000000;
signed long int var_1_19 = 1160769263;
signed short int var_1_20 = 32;
unsigned long int var_1_21 = 200;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 1;
double var_1_24 = 8.5;
double var_1_28 = 0.75;
double var_1_29 = 15.181000000000001;
double var_1_30 = 999999.4;
float var_1_31 = 3.5;
float var_1_32 = 0.8;
float var_1_33 = 0.4;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
double var_1_37 = 0.25;
double var_1_38 = 4.8;
double var_1_39 = 0.0;
unsigned long int var_1_40 = 200;
unsigned long int var_1_41 = 3051548949;
unsigned char var_1_42 = 100;
unsigned char var_1_43 = 2;
unsigned char var_1_44 = 25;
unsigned long int var_1_45 = 16;
unsigned long int var_1_46 = 3440327670;
unsigned long int var_1_47 = 1000000000;
unsigned long int var_1_48 = 1000000000;
float var_1_49 = 99.6;
unsigned char var_1_50 = 128;
float var_1_51 = 0.0;
float var_1_52 = 0.2;
float var_1_53 = 255.25;
float var_1_54 = 10.8;
float var_1_55 = 8.8;
unsigned short int var_1_56 = 4;
unsigned short int var_1_57 = 8;
unsigned short int var_1_58 = 43006;
unsigned long int var_1_59 = 8;
unsigned char var_1_60 = 10;
unsigned char var_1_61 = 1;
unsigned char var_1_62 = 1;
unsigned char var_1_63 = 0;
unsigned long int var_1_64 = 100;
unsigned char var_1_65 = 0;
unsigned short int var_1_67 = 5;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_17 = 10;
signed long int last_1_var_1_18 = -100000000;
double last_1_var_1_24 = 8.5;
float last_1_var_1_31 = 3.5;
unsigned char last_1_var_1_34 = 1;
double last_1_var_1_37 = 0.25;
unsigned long int last_1_var_1_40 = 200;
unsigned long int last_1_var_1_45 = 16;
float last_1_var_1_49 = 99.6;
unsigned short int last_1_var_1_57 = 8;
unsigned char last_1_var_1_61 = 1;
unsigned long int last_1_var_1_64 = 100;
unsigned short int last_1_var_1_67 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch192Amount250
	unsigned char stepLocal_5 = last_1_var_1_57 >= last_1_var_1_40;
	if (last_1_var_1_61 || stepLocal_5) {
		var_1_31 = (var_1_29 + (var_1_32 - (7.25f + var_1_33)));
	} else {
		var_1_31 = (var_1_29 + (10000.5f - var_1_32));
	}


	// From: Req20Batch192Amount250
	if (var_1_31 <= var_1_51) {
		var_1_61 = (! var_1_36);
	}


	// From: Req22Batch192Amount250
	if (var_1_54 < var_1_38) {
		if (((var_1_32 + last_1_var_1_37) + (var_1_28 + last_1_var_1_24)) < last_1_var_1_24) {
			var_1_64 = (max (var_1_14 , var_1_6));
		} else {
			if ((max (var_1_38 , last_1_var_1_31)) < var_1_33) {
				var_1_64 = (var_1_5 + last_1_var_1_67);
			} else {
				var_1_64 = (abs (var_1_44));
			}
		}
	}


	// From: Req1Batch192Amount250
	signed long int stepLocal_1 = var_1_3 - (var_1_4 + var_1_5);
	signed long int stepLocal_0 = var_1_3;
	if (var_1_64 < stepLocal_1) {
		if (stepLocal_0 >= (var_1_4 - var_1_5)) {
			var_1_1 = (min (((var_1_6 + var_1_7) - var_1_8) , var_1_9));
		} else {
			var_1_1 = (max (4 , (max (var_1_6 , var_1_7))));
		}
	}


	// From: Req21Batch192Amount250
	if (((var_1_52 / var_1_39) == var_1_38) || (64 >= (last_1_var_1_17 - last_1_var_1_18))) {
		if (last_1_var_1_34 || ((var_1_6 + var_1_13) > (last_1_var_1_45 - var_1_15))) {
			var_1_62 = ((! var_1_23) || var_1_63);
		}
	}


	// From: Req8Batch192Amount250
	signed long int stepLocal_4 = var_1_5;
	if (stepLocal_4 > last_1_var_1_64) {
		if ((last_1_var_1_49 * last_1_var_1_37) >= ((abs (last_1_var_1_31)) * 31.6f)) {
			var_1_24 = (((abs (var_1_28)) + var_1_29) - var_1_30);
		} else {
			var_1_24 = var_1_30;
		}
	}


	// From: Req10Batch192Amount250
	if (var_1_12 != var_1_6) {
		var_1_34 = (((var_1_24 < var_1_31) && var_1_35) || (var_1_23 && var_1_36));
	} else {
		var_1_34 = (! (! var_1_23));
	}


	// From: Req15Batch192Amount250
	unsigned char stepLocal_8 = var_1_36;
	signed long int stepLocal_7 = var_1_50 - (min (32 , var_1_6));
	if ((- var_1_24) <= 31.5f) {
		if ((var_1_39 - var_1_32) != (- var_1_24)) {
			if (var_1_7 == stepLocal_7) {
				if (stepLocal_8 && var_1_62) {
					var_1_49 = ((var_1_32 + (var_1_33 + 255.25f)) - (var_1_29 + var_1_52));
				} else {
					var_1_49 = (min ((var_1_32 + 1.000000000025E10f) , var_1_53));
				}
			} else {
				var_1_49 = (var_1_28 + var_1_52);
			}
		}
	} else {
		var_1_49 = ((var_1_33 + (var_1_54 + var_1_55)) - (max (var_1_32 , var_1_30)));
	}


	// From: Req2Batch192Amount250
	signed long int stepLocal_3 = var_1_13 - var_1_6;
	signed long int stepLocal_2 = (var_1_12 - var_1_4) - var_1_6;
	if ((var_1_8 >> var_1_11) >= stepLocal_2) {
		if (stepLocal_3 >= var_1_11) {
			var_1_10 = (var_1_6 - (var_1_14 - (var_1_15 - 10)));
		} else {
			if (var_1_61) {
				var_1_10 = ((var_1_14 - var_1_11) - var_1_6);
			}
		}
	} else {
		var_1_10 = var_1_9;
	}


	// From: Req3Batch192Amount250
	var_1_17 = (max (var_1_14 , last_1_var_1_17));


	// From: Req6Batch192Amount250
	var_1_21 = (max (128u , var_1_4));


	// From: Req7Batch192Amount250
	if (var_1_12 > (-2 | var_1_11)) {
		if ((var_1_19 != (var_1_9 / var_1_14)) || var_1_34) {
			var_1_22 = (! var_1_23);
		}
	} else {
		if (var_1_34) {
			var_1_22 = (! var_1_23);
		}
	}


	// From: Req11Batch192Amount250
	signed long int stepLocal_6 = var_1_12;
	if (var_1_21 > stepLocal_6) {
		if (var_1_32 > var_1_29) {
			var_1_37 = (min ((var_1_32 - var_1_33) , ((max (var_1_30 , var_1_29)) - var_1_38)));
		}
	} else {
		var_1_37 = ((var_1_39 - (min (var_1_29 , var_1_33))) - var_1_32);
	}


	// From: Req12Batch192Amount250
	if (var_1_3 >= ((var_1_11 - var_1_8) + var_1_4)) {
		var_1_40 = (abs (min (var_1_12 , (abs (var_1_4)))));
	} else {
		var_1_40 = (var_1_41 - (var_1_12 - var_1_7));
	}


	// From: Req16Batch192Amount250
	if (var_1_35) {
		var_1_56 = (max (var_1_7 , var_1_50));
	} else {
		var_1_56 = (min (var_1_43 , var_1_44));
	}


	// From: Req17Batch192Amount250
	var_1_57 = (var_1_58 - var_1_8);


	// From: Req18Batch192Amount250
	unsigned short int stepLocal_9 = var_1_17;
	if ((16u << var_1_40) < stepLocal_9) {
		if (var_1_39 >= var_1_51) {
			var_1_59 = (var_1_58 + var_1_11);
		}
	}


	// From: Req19Batch192Amount250
	var_1_60 = (var_1_7 + (abs (var_1_43)));


	// From: Req24Batch192Amount250
	unsigned char stepLocal_12 = var_1_7;
	if (var_1_23) {
		if (var_1_40 == stepLocal_12) {
			var_1_67 = (var_1_43 + (var_1_1 + var_1_50));
		}
	} else {
		if (var_1_31 > (var_1_54 * var_1_51)) {
			var_1_67 = (max (var_1_1 , (var_1_15 + var_1_44)));
		} else {
			if (var_1_35) {
				var_1_67 = var_1_58;
			} else {
				var_1_67 = 4;
			}
		}
	}


	// From: Req14Batch192Amount250
	if (1000000 == var_1_40) {
		var_1_45 = ((var_1_21 + (last_1_var_1_45 + var_1_13)) + var_1_44);
	} else {
		if ((var_1_34 && var_1_62) && var_1_36) {
			var_1_45 = ((var_1_46 - var_1_5) - (max ((1101654278u - last_1_var_1_45) , var_1_6)));
		} else {
			var_1_45 = (var_1_6 + ((var_1_47 + var_1_48) - 25u));
		}
	}


	// From: Req4Batch192Amount250
	if (var_1_4 >= (var_1_15 - (var_1_12 - var_1_56))) {
		var_1_18 = (max (64 , (4 - (var_1_19 - var_1_6))));
	} else {
		var_1_18 = (max (var_1_15 , var_1_4));
	}


	// From: Req5Batch192Amount250
	if (var_1_64 <= var_1_9) {
		var_1_20 = (min ((abs (var_1_8)) , (var_1_7 + (var_1_57 - var_1_6))));
	}


	// From: Req23Batch192Amount250
	unsigned char stepLocal_11 = var_1_20 <= var_1_48;
	unsigned char stepLocal_10 = var_1_22;
	if (var_1_63) {
		if (! var_1_36) {
			if (var_1_35 && stepLocal_10) {
				if (stepLocal_11 || var_1_23) {
					var_1_65 = var_1_35;
				}
			} else {
				var_1_65 = var_1_36;
			}
		} else {
			var_1_65 = var_1_23;
		}
	} else {
		var_1_65 = var_1_35;
	}


	// From: Req13Batch192Amount250
	if (var_1_65) {
		var_1_42 = (var_1_6 + var_1_7);
	} else {
		var_1_42 = (var_1_8 + ((var_1_11 + var_1_43) + var_1_44));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1073741824);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 63);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 64);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 7);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 1073741823);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 32767);
	assume_abort_if_not(var_1_13 <= 65535);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 8191);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483646);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691400e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 4611686.018427383000e+12F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 2147483647);
	assume_abort_if_not(var_1_41 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 32);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 3221225470);
	assume_abort_if_not(var_1_46 <= 4294967294);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 536870911);
	assume_abort_if_not(var_1_47 <= 1073741824);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 536870912);
	assume_abort_if_not(var_1_48 <= 1073741823);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 127);
	assume_abort_if_not(var_1_50 <= 255);
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 6917529.027641074000e+12F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854766000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= -922337.2036854766000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854766000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691400e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691400e+12F && var_1_55 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 32767);
	assume_abort_if_not(var_1_58 <= 65534);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_17 = var_1_17;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_67 = var_1_67;
}

int property(void) {
	return ((((((((((((((((((((((((var_1_64 < (var_1_3 - (var_1_4 + var_1_5))) ? ((var_1_3 >= (var_1_4 - var_1_5)) ? (var_1_1 == ((unsigned char) (min (((var_1_6 + var_1_7) - var_1_8) , var_1_9)))) : (var_1_1 == ((unsigned char) (max (4 , (max (var_1_6 , var_1_7))))))) : 1) && (((var_1_8 >> var_1_11) >= ((var_1_12 - var_1_4) - var_1_6)) ? (((var_1_13 - var_1_6) >= var_1_11) ? (var_1_10 == ((signed short int) (var_1_6 - (var_1_14 - (var_1_15 - 10))))) : (var_1_61 ? (var_1_10 == ((signed short int) ((var_1_14 - var_1_11) - var_1_6))) : 1)) : (var_1_10 == ((signed short int) var_1_9)))) && (var_1_17 == ((unsigned short int) (max (var_1_14 , last_1_var_1_17))))) && ((var_1_4 >= (var_1_15 - (var_1_12 - var_1_56))) ? (var_1_18 == ((signed long int) (max (64 , (4 - (var_1_19 - var_1_6)))))) : (var_1_18 == ((signed long int) (max (var_1_15 , var_1_4)))))) && ((var_1_64 <= var_1_9) ? (var_1_20 == ((signed short int) (min ((abs (var_1_8)) , (var_1_7 + (var_1_57 - var_1_6)))))) : 1)) && (var_1_21 == ((unsigned long int) (max (128u , var_1_4))))) && ((var_1_12 > (-2 | var_1_11)) ? (((var_1_19 != (var_1_9 / var_1_14)) || var_1_34) ? (var_1_22 == ((unsigned char) (! var_1_23))) : 1) : (var_1_34 ? (var_1_22 == ((unsigned char) (! var_1_23))) : 1))) && ((var_1_5 > last_1_var_1_64) ? (((last_1_var_1_49 * last_1_var_1_37) >= ((abs (last_1_var_1_31)) * 31.6f)) ? (var_1_24 == ((double) (((abs (var_1_28)) + var_1_29) - var_1_30))) : (var_1_24 == ((double) var_1_30))) : 1)) && ((last_1_var_1_61 || (last_1_var_1_57 >= last_1_var_1_40)) ? (var_1_31 == ((float) (var_1_29 + (var_1_32 - (7.25f + var_1_33))))) : (var_1_31 == ((float) (var_1_29 + (10000.5f - var_1_32)))))) && ((var_1_12 != var_1_6) ? (var_1_34 == ((unsigned char) (((var_1_24 < var_1_31) && var_1_35) || (var_1_23 && var_1_36)))) : (var_1_34 == ((unsigned char) (! (! var_1_23)))))) && ((var_1_21 > var_1_12) ? ((var_1_32 > var_1_29) ? (var_1_37 == ((double) (min ((var_1_32 - var_1_33) , ((max (var_1_30 , var_1_29)) - var_1_38))))) : 1) : (var_1_37 == ((double) ((var_1_39 - (min (var_1_29 , var_1_33))) - var_1_32))))) && ((var_1_3 >= ((var_1_11 - var_1_8) + var_1_4)) ? (var_1_40 == ((unsigned long int) (abs (min (var_1_12 , (abs (var_1_4))))))) : (var_1_40 == ((unsigned long int) (var_1_41 - (var_1_12 - var_1_7)))))) && (var_1_65 ? (var_1_42 == ((unsigned char) (var_1_6 + var_1_7))) : (var_1_42 == ((unsigned char) (var_1_8 + ((var_1_11 + var_1_43) + var_1_44)))))) && ((1000000 == var_1_40) ? (var_1_45 == ((unsigned long int) ((var_1_21 + (last_1_var_1_45 + var_1_13)) + var_1_44))) : (((var_1_34 && var_1_62) && var_1_36) ? (var_1_45 == ((unsigned long int) ((var_1_46 - var_1_5) - (max ((1101654278u - last_1_var_1_45) , var_1_6))))) : (var_1_45 == ((unsigned long int) (var_1_6 + ((var_1_47 + var_1_48) - 25u))))))) && (((- var_1_24) <= 31.5f) ? (((var_1_39 - var_1_32) != (- var_1_24)) ? ((var_1_7 == (var_1_50 - (min (32 , var_1_6)))) ? ((var_1_36 && var_1_62) ? (var_1_49 == ((float) ((var_1_32 + (var_1_33 + 255.25f)) - (var_1_29 + var_1_52)))) : (var_1_49 == ((float) (min ((var_1_32 + 1.000000000025E10f) , var_1_53))))) : (var_1_49 == ((float) (var_1_28 + var_1_52)))) : 1) : (var_1_49 == ((float) ((var_1_33 + (var_1_54 + var_1_55)) - (max (var_1_32 , var_1_30))))))) && (var_1_35 ? (var_1_56 == ((unsigned short int) (max (var_1_7 , var_1_50)))) : (var_1_56 == ((unsigned short int) (min (var_1_43 , var_1_44)))))) && (var_1_57 == ((unsigned short int) (var_1_58 - var_1_8)))) && (((16u << var_1_40) < var_1_17) ? ((var_1_39 >= var_1_51) ? (var_1_59 == ((unsigned long int) (var_1_58 + var_1_11))) : 1) : 1)) && (var_1_60 == ((unsigned char) (var_1_7 + (abs (var_1_43)))))) && ((var_1_31 <= var_1_51) ? (var_1_61 == ((unsigned char) (! var_1_36))) : 1)) && ((((var_1_52 / var_1_39) == var_1_38) || (64 >= (last_1_var_1_17 - last_1_var_1_18))) ? ((last_1_var_1_34 || ((var_1_6 + var_1_13) > (last_1_var_1_45 - var_1_15))) ? (var_1_62 == ((unsigned char) ((! var_1_23) || var_1_63))) : 1) : 1)) && ((var_1_54 < var_1_38) ? ((((var_1_32 + last_1_var_1_37) + (var_1_28 + last_1_var_1_24)) < last_1_var_1_24) ? (var_1_64 == ((unsigned long int) (max (var_1_14 , var_1_6)))) : (((max (var_1_38 , last_1_var_1_31)) < var_1_33) ? (var_1_64 == ((unsigned long int) (var_1_5 + last_1_var_1_67))) : (var_1_64 == ((unsigned long int) (abs (var_1_44)))))) : 1)) && (var_1_63 ? ((! var_1_36) ? ((var_1_35 && var_1_22) ? (((var_1_20 <= var_1_48) || var_1_23) ? (var_1_65 == ((unsigned char) var_1_35)) : 1) : (var_1_65 == ((unsigned char) var_1_36))) : (var_1_65 == ((unsigned char) var_1_23))) : (var_1_65 == ((unsigned char) var_1_35)))) && (var_1_23 ? ((var_1_40 == var_1_7) ? (var_1_67 == ((unsigned short int) (var_1_43 + (var_1_1 + var_1_50)))) : 1) : ((var_1_31 > (var_1_54 * var_1_51)) ? (var_1_67 == ((unsigned short int) (max (var_1_1 , (var_1_15 + var_1_44))))) : (var_1_35 ? (var_1_67 == ((unsigned short int) var_1_58)) : (var_1_67 == ((unsigned short int) 4)))))
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
