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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch71Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 4;
unsigned char var_1_5 = 4;
float var_1_6 = 63.375;
float var_1_7 = 2.875;
float var_1_8 = 128.6;
float var_1_9 = 128.75;
signed char var_1_10 = 1;
unsigned char var_1_11 = 0;
signed char var_1_12 = 4;
signed char var_1_13 = 32;
signed char var_1_14 = 32;
signed char var_1_15 = 4;
unsigned char var_1_16 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 2;
unsigned char var_1_23 = 128;
signed char var_1_24 = -100;
signed char var_1_25 = 5;
float var_1_26 = 16.5;
float var_1_27 = 63.5;
double var_1_28 = 0.75;
double var_1_29 = 9.25;
double var_1_30 = 0.0;
double var_1_31 = 127.25;
double var_1_32 = 1.25;
float var_1_33 = 0.95;
unsigned char var_1_34 = 128;
float var_1_35 = 99.6;
unsigned long int var_1_36 = 5;
signed char var_1_37 = 0;
float var_1_38 = 0.25;
unsigned short int var_1_39 = 0;
signed char var_1_40 = -64;
signed char var_1_41 = 16;
signed long int var_1_42 = 32;
double var_1_43 = 32.8;
unsigned short int var_1_44 = 10;
unsigned short int var_1_45 = 48291;
unsigned short int var_1_46 = 10000;
unsigned long int var_1_47 = 3157554728;
unsigned short int var_1_48 = 19901;
unsigned short int var_1_49 = 30113;
double var_1_50 = 49.75;
double var_1_52 = 50.7;
double var_1_53 = 25.5;
unsigned short int var_1_54 = 4;
unsigned short int var_1_55 = 1;
float var_1_56 = -0.625;
signed long int var_1_57 = 256;
unsigned char var_1_58 = 1;
float var_1_59 = 127.5;
unsigned char var_1_60 = 32;
unsigned char var_1_61 = 1;
unsigned char var_1_62 = 100;
unsigned char var_1_63 = 64;
unsigned long int var_1_64 = 10;
unsigned short int var_1_66 = 2;
float var_1_67 = 2.1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_21 = 2;
signed char last_1_var_1_24 = -100;
float last_1_var_1_33 = 0.95;
double last_1_var_1_43 = 32.8;
unsigned short int last_1_var_1_44 = 10;
double last_1_var_1_50 = 49.75;
unsigned short int last_1_var_1_54 = 4;
unsigned char last_1_var_1_58 = 1;
unsigned char last_1_var_1_60 = 32;
unsigned long int last_1_var_1_64 = 10;
unsigned short int last_1_var_1_66 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req17Batch71Amount250
	unsigned long int stepLocal_11 = var_1_47 - last_1_var_1_54;
	signed long int stepLocal_10 = last_1_var_1_21;
	if (stepLocal_10 >= (last_1_var_1_44 * var_1_12)) {
		var_1_44 = (var_1_45 - ((min (var_1_14 , last_1_var_1_64)) + (var_1_46 - var_1_5)));
	} else {
		if (1u <= stepLocal_11) {
			var_1_44 = 16;
		} else {
			var_1_44 = (((var_1_14 + var_1_23) + last_1_var_1_64) + ((max (var_1_48 , var_1_49)) - var_1_46));
		}
	}


	// From: Req23Batch71Amount250
	if (var_1_12 <= (min (var_1_45 , (max (last_1_var_1_66 , last_1_var_1_54))))) {
		if (var_1_61 && var_1_11) {
			var_1_60 = (var_1_23 - ((min (var_1_62 , var_1_63)) - var_1_13));
		}
	}


	// From: Req4Batch71Amount250
	signed long int stepLocal_2 = last_1_var_1_60;
	signed char stepLocal_1 = var_1_12;
	signed long int stepLocal_0 = last_1_var_1_66;
	if (var_1_15 > stepLocal_0) {
		if (stepLocal_2 > last_1_var_1_64) {
			if (last_1_var_1_43 > (var_1_8 + 50.5)) {
				var_1_16 = (last_1_var_1_58 && (var_1_18 || var_1_19));
			} else {
				var_1_16 = (! var_1_20);
			}
		} else {
			var_1_16 = ((64 > -10) || var_1_20);
		}
	} else {
		if ((last_1_var_1_64 + var_1_14) >= stepLocal_1) {
			if (last_1_var_1_43 == var_1_7) {
				var_1_16 = ((var_1_18 || (! var_1_20)) || var_1_19);
			}
		} else {
			if (var_1_20) {
				var_1_16 = (var_1_18 && var_1_19);
			} else {
				var_1_16 = var_1_18;
			}
		}
	}


	// From: Req25Batch71Amount250
	if (var_1_16) {
		var_1_66 = var_1_13;
	}


	// From: Req24Batch71Amount250
	signed long int stepLocal_14 = var_1_15 - (min (100 , var_1_62));
	if (last_1_var_1_24 > stepLocal_14) {
		if ((last_1_var_1_33 * last_1_var_1_50) != last_1_var_1_43) {
			var_1_64 = (min (var_1_63 , var_1_5));
		} else {
			var_1_64 = last_1_var_1_54;
		}
	} else {
		var_1_64 = 128u;
	}


	// From: Req10Batch71Amount250
	unsigned char stepLocal_7 = var_1_23;
	signed long int stepLocal_6 = var_1_34 - var_1_14;
	if (var_1_23 <= stepLocal_6) {
		if ((min ((var_1_14 * var_1_15) , (var_1_64 - var_1_5))) <= stepLocal_7) {
			var_1_33 = var_1_8;
		} else {
			var_1_33 = (max ((var_1_7 + var_1_32) , (var_1_35 - var_1_31)));
		}
	}


	// From: Req18Batch71Amount250
	if (var_1_64 <= var_1_44) {
		var_1_50 = (((max (var_1_31 , var_1_7)) - var_1_32) + ((abs (var_1_52)) + (var_1_53 - 10.8)));
	} else {
		var_1_50 = ((max ((var_1_30 - var_1_7) , var_1_31)) - (max (var_1_27 , 255.75)));
	}


	// From: Req2Batch71Amount250
	var_1_6 = (min (((var_1_7 - 31.5f) + (max (var_1_8 , 100.5f))) , var_1_9));


	// From: Req6Batch71Amount250
	var_1_24 = (((var_1_15 - 1) + var_1_25) + var_1_14);


	// From: Req8Batch71Amount250
	unsigned char stepLocal_5 = var_1_23;
	if ((abs (min (var_1_15 , var_1_12))) <= stepLocal_5) {
		var_1_28 = var_1_8;
	}


	// From: Req12Batch71Amount250
	var_1_37 = (((var_1_15 + 4) + var_1_14) - var_1_13);


	// From: Req13Batch71Amount250
	if (var_1_20) {
		var_1_38 = (abs (99.25f));
	} else {
		var_1_38 = (var_1_32 + 9.99999999999975E12f);
	}


	// From: Req14Batch71Amount250
	if (! var_1_18) {
		if (var_1_19) {
			var_1_39 = var_1_14;
		} else {
			var_1_39 = (max (var_1_15 , var_1_13));
		}
	} else {
		var_1_39 = 8;
	}


	// From: Req20Batch71Amount250
	signed long int stepLocal_13 = - 128;
	if (stepLocal_13 == (var_1_12 / (min (var_1_57 , var_1_46)))) {
		var_1_56 = (abs (var_1_9));
	} else {
		var_1_56 = var_1_31;
	}


	// From: Req21Batch71Amount250
	if (! (1 == (var_1_13 % var_1_46))) {
		var_1_58 = (! var_1_19);
	} else {
		var_1_58 = (var_1_18 || var_1_20);
	}


	// From: Req5Batch71Amount250
	signed char stepLocal_4 = var_1_12;
	unsigned short int stepLocal_3 = var_1_44;
	if (var_1_20) {
		if (var_1_13 <= stepLocal_4) {
			if (var_1_24 > stepLocal_3) {
				var_1_21 = (var_1_14 + var_1_13);
			} else {
				var_1_21 = (var_1_23 - var_1_14);
			}
		}
	} else {
		var_1_21 = var_1_13;
	}


	// From: Req19Batch71Amount250
	signed long int stepLocal_12 = var_1_42;
	if (var_1_38 >= (abs (var_1_52))) {
		if (! (var_1_35 <= (9999.25f + var_1_38))) {
			var_1_54 = (min (var_1_14 , var_1_34));
		}
	} else {
		if (! ((var_1_60 % var_1_49) > 16)) {
			if (var_1_45 <= stepLocal_12) {
				var_1_54 = (min ((var_1_13 + var_1_23) , var_1_55));
			}
		}
	}


	// From: Req16Batch71Amount250
	signed char stepLocal_9 = var_1_41;
	unsigned char stepLocal_8 = var_1_16;
	if (var_1_18 && stepLocal_8) {
		if (stepLocal_9 == var_1_39) {
			var_1_43 = (max (var_1_7 , (min (var_1_32 , var_1_9))));
		}
	}


	// From: Req3Batch71Amount250
	if (var_1_58) {
		var_1_10 = var_1_12;
	} else {
		var_1_10 = (((min (2 , var_1_13)) + (var_1_14 - var_1_15)) - 4);
	}


	// From: Req9Batch71Amount250
	if (var_1_43 <= ((min (var_1_9 , var_1_7)) * (- var_1_50))) {
		var_1_29 = (min (((var_1_30 - var_1_7) - (var_1_31 + var_1_32)) , var_1_27));
	} else {
		var_1_29 = (var_1_7 + (var_1_32 - var_1_31));
	}


	// From: Req11Batch71Amount250
	if ((- var_1_35) > var_1_9) {
		var_1_36 = (var_1_66 + var_1_54);
	} else {
		var_1_36 = ((var_1_5 + var_1_66) + var_1_15);
	}


	// From: Req15Batch71Amount250
	if ((var_1_13 / var_1_14) >= var_1_21) {
		var_1_40 = ((var_1_15 - var_1_13) + (abs (var_1_25 + var_1_41)));
	} else {
		if ((5 * (var_1_42 - 1)) <= ((max (var_1_36 , var_1_15)) << var_1_21)) {
			var_1_40 = (abs (var_1_14 - var_1_13));
		} else {
			if (var_1_11 && var_1_16) {
				var_1_40 = (abs (var_1_25));
			}
		}
	}


	// From: Req22Batch71Amount250
	if (var_1_29 >= var_1_50) {
		var_1_59 = (min (var_1_53 , var_1_8));
	} else {
		var_1_59 = var_1_31;
	}


	// From: Req1Batch71Amount250
	if (var_1_29 == var_1_28) {
		var_1_1 = (min (var_1_5 , 0));
	}


	// From: Req7Batch71Amount250
	if ((var_1_29 != 49.5) || var_1_58) {
		var_1_26 = (max ((var_1_7 - var_1_27) , var_1_9));
	}


	// From: Req26Batch71Amount250
	signed long int stepLocal_15 = min (var_1_23 , 1);
	if (stepLocal_15 == (var_1_14 * (var_1_60 * var_1_1))) {
		var_1_67 = (max (var_1_53 , ((abs (var_1_9)) - var_1_27)));
	} else {
		var_1_67 = var_1_53;
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 31);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 31);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 127);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -31);
	assume_abort_if_not(var_1_25 <= 31);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 4611686.018427383000e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 127);
	assume_abort_if_not(var_1_34 <= 255);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -31);
	assume_abort_if_not(var_1_41 <= 31);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -1);
	assume_abort_if_not(var_1_42 <= 2147483647);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 32767);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 8191);
	assume_abort_if_not(var_1_46 <= 16383);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 2147483647);
	assume_abort_if_not(var_1_47 <= 4294967295);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 16383);
	assume_abort_if_not(var_1_48 <= 32767);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 16383);
	assume_abort_if_not(var_1_49 <= 32767);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -230584.3009213691400e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691400e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 2305843.009213691400e+12F && var_1_53 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 65534);
	var_1_57 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_57 >= -2147483648);
	assume_abort_if_not(var_1_57 <= 2147483647);
	assume_abort_if_not(var_1_57 != 0);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 1);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 63);
	assume_abort_if_not(var_1_62 <= 127);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 63);
	assume_abort_if_not(var_1_63 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_21 = var_1_21;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_66 = var_1_66;
}

int property(void) {
	return ((((((((((((((((((((((((((var_1_29 == var_1_28) ? (var_1_1 == ((unsigned char) (min (var_1_5 , 0)))) : 1) && (var_1_6 == ((float) (min (((var_1_7 - 31.5f) + (max (var_1_8 , 100.5f))) , var_1_9))))) && (var_1_58 ? (var_1_10 == ((signed char) var_1_12)) : (var_1_10 == ((signed char) (((min (2 , var_1_13)) + (var_1_14 - var_1_15)) - 4))))) && ((var_1_15 > last_1_var_1_66) ? ((last_1_var_1_60 > last_1_var_1_64) ? ((last_1_var_1_43 > (var_1_8 + 50.5)) ? (var_1_16 == ((unsigned char) (last_1_var_1_58 && (var_1_18 || var_1_19)))) : (var_1_16 == ((unsigned char) (! var_1_20)))) : (var_1_16 == ((unsigned char) ((64 > -10) || var_1_20)))) : (((last_1_var_1_64 + var_1_14) >= var_1_12) ? ((last_1_var_1_43 == var_1_7) ? (var_1_16 == ((unsigned char) ((var_1_18 || (! var_1_20)) || var_1_19))) : 1) : (var_1_20 ? (var_1_16 == ((unsigned char) (var_1_18 && var_1_19))) : (var_1_16 == ((unsigned char) var_1_18)))))) && (var_1_20 ? ((var_1_13 <= var_1_12) ? ((var_1_24 > var_1_44) ? (var_1_21 == ((unsigned char) (var_1_14 + var_1_13))) : (var_1_21 == ((unsigned char) (var_1_23 - var_1_14)))) : 1) : (var_1_21 == ((unsigned char) var_1_13)))) && (var_1_24 == ((signed char) (((var_1_15 - 1) + var_1_25) + var_1_14)))) && (((var_1_29 != 49.5) || var_1_58) ? (var_1_26 == ((float) (max ((var_1_7 - var_1_27) , var_1_9)))) : 1)) && (((abs (min (var_1_15 , var_1_12))) <= var_1_23) ? (var_1_28 == ((double) var_1_8)) : 1)) && ((var_1_43 <= ((min (var_1_9 , var_1_7)) * (- var_1_50))) ? (var_1_29 == ((double) (min (((var_1_30 - var_1_7) - (var_1_31 + var_1_32)) , var_1_27)))) : (var_1_29 == ((double) (var_1_7 + (var_1_32 - var_1_31)))))) && ((var_1_23 <= (var_1_34 - var_1_14)) ? (((min ((var_1_14 * var_1_15) , (var_1_64 - var_1_5))) <= var_1_23) ? (var_1_33 == ((float) var_1_8)) : (var_1_33 == ((float) (max ((var_1_7 + var_1_32) , (var_1_35 - var_1_31)))))) : 1)) && (((- var_1_35) > var_1_9) ? (var_1_36 == ((unsigned long int) (var_1_66 + var_1_54))) : (var_1_36 == ((unsigned long int) ((var_1_5 + var_1_66) + var_1_15))))) && (var_1_37 == ((signed char) (((var_1_15 + 4) + var_1_14) - var_1_13)))) && (var_1_20 ? (var_1_38 == ((float) (abs (99.25f)))) : (var_1_38 == ((float) (var_1_32 + 9.99999999999975E12f))))) && ((! var_1_18) ? (var_1_19 ? (var_1_39 == ((unsigned short int) var_1_14)) : (var_1_39 == ((unsigned short int) (max (var_1_15 , var_1_13))))) : (var_1_39 == ((unsigned short int) 8)))) && (((var_1_13 / var_1_14) >= var_1_21) ? (var_1_40 == ((signed char) ((var_1_15 - var_1_13) + (abs (var_1_25 + var_1_41))))) : (((5 * (var_1_42 - 1)) <= ((max (var_1_36 , var_1_15)) << var_1_21)) ? (var_1_40 == ((signed char) (abs (var_1_14 - var_1_13)))) : ((var_1_11 && var_1_16) ? (var_1_40 == ((signed char) (abs (var_1_25)))) : 1)))) && ((var_1_18 && var_1_16) ? ((var_1_41 == var_1_39) ? (var_1_43 == ((double) (max (var_1_7 , (min (var_1_32 , var_1_9)))))) : 1) : 1)) && ((last_1_var_1_21 >= (last_1_var_1_44 * var_1_12)) ? (var_1_44 == ((unsigned short int) (var_1_45 - ((min (var_1_14 , last_1_var_1_64)) + (var_1_46 - var_1_5))))) : ((1u <= (var_1_47 - last_1_var_1_54)) ? (var_1_44 == ((unsigned short int) 16)) : (var_1_44 == ((unsigned short int) (((var_1_14 + var_1_23) + last_1_var_1_64) + ((max (var_1_48 , var_1_49)) - var_1_46))))))) && ((var_1_64 <= var_1_44) ? (var_1_50 == ((double) (((max (var_1_31 , var_1_7)) - var_1_32) + ((abs (var_1_52)) + (var_1_53 - 10.8))))) : (var_1_50 == ((double) ((max ((var_1_30 - var_1_7) , var_1_31)) - (max (var_1_27 , 255.75))))))) && ((var_1_38 >= (abs (var_1_52))) ? ((! (var_1_35 <= (9999.25f + var_1_38))) ? (var_1_54 == ((unsigned short int) (min (var_1_14 , var_1_34)))) : 1) : ((! ((var_1_60 % var_1_49) > 16)) ? ((var_1_45 <= var_1_42) ? (var_1_54 == ((unsigned short int) (min ((var_1_13 + var_1_23) , var_1_55)))) : 1) : 1))) && (((- 128) == (var_1_12 / (min (var_1_57 , var_1_46)))) ? (var_1_56 == ((float) (abs (var_1_9)))) : (var_1_56 == ((float) var_1_31)))) && ((! (1 == (var_1_13 % var_1_46))) ? (var_1_58 == ((unsigned char) (! var_1_19))) : (var_1_58 == ((unsigned char) (var_1_18 || var_1_20))))) && ((var_1_29 >= var_1_50) ? (var_1_59 == ((float) (min (var_1_53 , var_1_8)))) : (var_1_59 == ((float) var_1_31)))) && ((var_1_12 <= (min (var_1_45 , (max (last_1_var_1_66 , last_1_var_1_54))))) ? ((var_1_61 && var_1_11) ? (var_1_60 == ((unsigned char) (var_1_23 - ((min (var_1_62 , var_1_63)) - var_1_13)))) : 1) : 1)) && ((last_1_var_1_24 > (var_1_15 - (min (100 , var_1_62)))) ? (((last_1_var_1_33 * last_1_var_1_50) != last_1_var_1_43) ? (var_1_64 == ((unsigned long int) (min (var_1_63 , var_1_5)))) : (var_1_64 == ((unsigned long int) last_1_var_1_54))) : (var_1_64 == ((unsigned long int) 128u)))) && (var_1_16 ? (var_1_66 == ((unsigned short int) var_1_13)) : 1)) && (((min (var_1_23 , 1)) == (var_1_14 * (var_1_60 * var_1_1))) ? (var_1_67 == ((float) (max (var_1_53 , ((abs (var_1_9)) - var_1_27))))) : (var_1_67 == ((float) var_1_53)))
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
