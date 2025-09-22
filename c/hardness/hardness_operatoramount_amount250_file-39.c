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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch39Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 200;
signed char var_1_2 = 64;
signed short int var_1_3 = 5;
signed short int var_1_4 = 2;
float var_1_6 = 15.125;
float var_1_7 = 4.75;
float var_1_8 = 64.5;
unsigned char var_1_10 = 64;
unsigned char var_1_11 = 64;
signed long int var_1_12 = -2;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
signed long int var_1_17 = -2;
signed long int var_1_18 = 2076576875;
unsigned long int var_1_19 = 0;
unsigned char var_1_20 = 0;
float var_1_21 = 5.025;
float var_1_23 = 0.0;
float var_1_24 = 256.375;
float var_1_25 = 8.75;
float var_1_26 = 25.375;
signed char var_1_27 = -2;
unsigned short int var_1_28 = 48068;
unsigned short int var_1_29 = 50079;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 32;
unsigned char var_1_32 = 200;
unsigned short int var_1_33 = 2;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 50;
signed short int var_1_37 = 26207;
signed short int var_1_38 = 4;
unsigned short int var_1_39 = 64;
double var_1_40 = 10.75;
double var_1_41 = 0.0;
double var_1_42 = 128.6;
double var_1_43 = 127.2;
double var_1_44 = 4.75;
double var_1_45 = 128.85;
double var_1_46 = 127.7;
double var_1_47 = 10.8;
unsigned short int var_1_48 = 8;
unsigned char var_1_49 = 1;
unsigned short int var_1_50 = 32;
signed long int var_1_51 = -2;
unsigned short int var_1_52 = 37387;
signed long int var_1_53 = -2;
signed long int var_1_54 = 2059592237;
float var_1_55 = 255.9;
unsigned long int var_1_56 = 8;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 200;
signed long int last_1_var_1_17 = -2;
unsigned char last_1_var_1_20 = 0;
signed long int last_1_var_1_53 = -2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req25Batch39Amount250
	signed long int stepLocal_14 = last_1_var_1_17;
	if (stepLocal_14 <= (~ (last_1_var_1_53 * last_1_var_1_1))) {
		var_1_59 = var_1_16;
	}


	// From: Req3Batch39Amount250
	if (var_1_8 > var_1_7) {
		var_1_13 = (var_1_14 && var_1_15);
	} else {
		var_1_13 = ((! var_1_16) && var_1_15);
	}


	// From: Req6Batch39Amount250
	if (var_1_15) {
		if (last_1_var_1_20) {
			var_1_20 = var_1_14;
		}
	}


	// From: Req13Batch39Amount250
	signed long int stepLocal_8 = var_1_10 + -1000000000;
	signed long int stepLocal_7 = (var_1_37 - var_1_38) >> 16;
	unsigned char stepLocal_6 = var_1_11;
	if ((var_1_28 - var_1_32) < stepLocal_8) {
		if (stepLocal_7 != var_1_28) {
			if (stepLocal_6 < (var_1_2 / 25)) {
				var_1_36 = var_1_10;
			}
		}
	} else {
		var_1_36 = (min ((var_1_4 + var_1_11) , var_1_32));
	}


	// From: Req14Batch39Amount250
	if (((var_1_25 / var_1_23) * var_1_7) == (- var_1_6)) {
		var_1_39 = var_1_4;
	} else {
		var_1_39 = var_1_11;
	}


	// From: Req15Batch39Amount250
	if ((max (var_1_3 , (var_1_18 + var_1_11))) >= (var_1_32 / var_1_28)) {
		if ((- var_1_10) > (var_1_18 * -1)) {
			if ((var_1_24 >= (var_1_26 - var_1_25)) || (var_1_4 <= (abs (var_1_37)))) {
				var_1_40 = ((max (var_1_25 , var_1_24)) + (min (9.2 , 128.375)));
			}
		} else {
			var_1_40 = var_1_23;
		}
	} else {
		if (var_1_7 < (max (var_1_26 , var_1_6))) {
			var_1_40 = (min ((var_1_24 - (var_1_41 - var_1_25)) , ((var_1_42 + var_1_43) + var_1_44)));
		} else {
			var_1_40 = var_1_44;
		}
	}


	// From: Req16Batch39Amount250
	if (var_1_41 >= var_1_6) {
		var_1_45 = ((var_1_25 + var_1_24) - (max ((8.818139864913641E18 - var_1_46) , (var_1_41 - var_1_47))));
	} else {
		var_1_45 = (min (var_1_26 , (var_1_46 - (var_1_47 + var_1_25))));
	}


	// From: Req22Batch39Amount250
	var_1_56 = var_1_28;


	// From: Req23Batch39Amount250
	if (var_1_14) {
		var_1_57 = var_1_2;
	}


	// From: Req24Batch39Amount250
	if (var_1_41 >= var_1_24) {
		var_1_58 = (! var_1_35);
	}


	// From: Req5Batch39Amount250
	unsigned char stepLocal_3 = var_1_59;
	unsigned char stepLocal_2 = var_1_14;
	if (var_1_15 || stepLocal_2) {
		if (var_1_15) {
			if (stepLocal_3 || (0 < (min (var_1_11 , var_1_56)))) {
				var_1_19 = (var_1_56 + var_1_10);
			} else {
				if (var_1_16) {
					var_1_19 = var_1_18;
				} else {
					var_1_19 = var_1_56;
				}
			}
		} else {
			var_1_19 = var_1_2;
		}
	} else {
		var_1_19 = var_1_3;
	}


	// From: Req20Batch39Amount250
	unsigned char stepLocal_12 = var_1_15;
	if (var_1_16) {
		if (stepLocal_12 && (var_1_52 == var_1_56)) {
			var_1_53 = ((max ((var_1_54 - last_1_var_1_53) , 64)) - var_1_2);
		} else {
			if (var_1_58) {
				var_1_53 = (abs ((min (100 , var_1_19)) + var_1_52));
			}
		}
	}


	// From: Req2Batch39Amount250
	if (var_1_6 >= (max (1.25f , var_1_7))) {
		var_1_12 = (min (var_1_2 , (var_1_3 - (var_1_10 + var_1_39))));
	} else {
		var_1_12 = var_1_3;
	}


	// From: Req4Batch39Amount250
	signed long int stepLocal_1 = var_1_10 / var_1_11;
	if (stepLocal_1 > ((var_1_18 - var_1_3) - var_1_12)) {
		var_1_17 = var_1_3;
	}


	// From: Req10Batch39Amount250
	if (var_1_8 <= var_1_45) {
		var_1_31 = ((min (var_1_10 , (var_1_11 - var_1_4))) + (min (var_1_3 , var_1_2)));
	} else {
		var_1_31 = ((var_1_32 - var_1_3) - var_1_10);
	}


	// From: Req11Batch39Amount250
	if (var_1_13) {
		var_1_33 = (var_1_2 + var_1_4);
	} else {
		var_1_33 = ((max (var_1_32 , (27757 - var_1_11))) + var_1_17);
	}


	// From: Req12Batch39Amount250
	if (var_1_59) {
		var_1_34 = (((var_1_31 < var_1_17) && var_1_16) || var_1_35);
	}


	// From: Req17Batch39Amount250
	if (var_1_13) {
		var_1_48 = ((min (var_1_33 , (var_1_37 - var_1_3))) + var_1_10);
	} else {
		if (var_1_16) {
			var_1_48 = (max ((abs (var_1_10 + var_1_2)) , var_1_17));
		}
	}


	// From: Req18Batch39Amount250
	unsigned long int stepLocal_10 = var_1_4 * var_1_56;
	unsigned short int stepLocal_9 = var_1_39;
	if (stepLocal_10 > var_1_17) {
		if (var_1_29 <= stepLocal_9) {
			var_1_49 = (! (var_1_15 && var_1_14));
		}
	} else {
		var_1_49 = (! (var_1_14 && (var_1_58 || var_1_15)));
	}


	// From: Req19Batch39Amount250
	unsigned long int stepLocal_11 = (var_1_32 + var_1_17) * var_1_19;
	if (stepLocal_11 <= (abs (var_1_51))) {
		if (var_1_58) {
			var_1_50 = (max ((var_1_33 + var_1_37) , (var_1_52 - (max (var_1_11 , var_1_38)))));
		}
	} else {
		var_1_50 = (max (var_1_10 , (min (var_1_56 , (max (var_1_32 , var_1_33))))));
	}


	// From: Req21Batch39Amount250
	signed long int stepLocal_13 = var_1_12;
	if (var_1_50 == stepLocal_13) {
		var_1_55 = (max (var_1_46 , (var_1_44 + (var_1_42 + var_1_24))));
	} else {
		if (var_1_59) {
			if (var_1_15) {
				var_1_55 = var_1_25;
			}
		} else {
			var_1_55 = var_1_43;
		}
	}


	// From: Req1Batch39Amount250
	signed long int stepLocal_0 = var_1_12;
	if (((min (8 , var_1_2)) << (max (var_1_3 , var_1_4))) <= stepLocal_0) {
		if (99.7f >= ((var_1_6 - var_1_7) / var_1_8)) {
			var_1_1 = (var_1_2 + var_1_3);
		}
	} else {
		if (! var_1_59) {
			var_1_1 = ((64 + var_1_10) - (var_1_11 - var_1_4));
		}
	}


	// From: Req7Batch39Amount250
	unsigned long int stepLocal_4 = var_1_56;
	if (var_1_17 < stepLocal_4) {
		if (var_1_55 < var_1_8) {
			var_1_21 = (((abs (var_1_23)) - (var_1_24 + var_1_25)) - var_1_26);
		} else {
			var_1_21 = (var_1_25 + var_1_24);
		}
	} else {
		if (var_1_14) {
			var_1_21 = 128.9f;
		} else {
			var_1_21 = var_1_23;
		}
	}


	// From: Req8Batch39Amount250
	signed long int stepLocal_5 = (max (var_1_28 , var_1_29)) - var_1_2;
	if (stepLocal_5 < (min ((var_1_18 - var_1_1) , var_1_19))) {
		var_1_27 = ((abs (var_1_3)) - var_1_4);
	}


	// From: Req9Batch39Amount250
	if (1000.5 >= var_1_8) {
		if ((var_1_12 < var_1_18) && var_1_14) {
			var_1_30 = var_1_16;
		} else {
			var_1_30 = (! var_1_15);
		}
	} else {
		if (var_1_14 || var_1_49) {
			var_1_30 = (! var_1_16);
		} else {
			var_1_30 = (! var_1_15);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 27);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 27);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	assume_abort_if_not(var_1_8 != 0.0F);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 64);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 63);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 1073741823);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= -461168.6018427383000e+13F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691400e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691400e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 32767);
	assume_abort_if_not(var_1_28 <= 65535);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 32767);
	assume_abort_if_not(var_1_29 <= 65535);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 190);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 16383);
	assume_abort_if_not(var_1_37 <= 32767);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 16383);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 4611686.018427383000e+12F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -230584.3009213691400e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -230584.3009213691400e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 2305843.009213691400e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -461168.6018427383000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_51 >= -2147483647);
	assume_abort_if_not(var_1_51 <= 2147483647);
	var_1_52 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_52 >= 32767);
	assume_abort_if_not(var_1_52 <= 65534);
	var_1_54 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_54 >= 1073741822);
	assume_abort_if_not(var_1_54 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_53 = var_1_53;
}

int property(void) {
	return (((((((((((((((((((((((((((min (8 , var_1_2)) << (max (var_1_3 , var_1_4))) <= var_1_12) ? ((99.7f >= ((var_1_6 - var_1_7) / var_1_8)) ? (var_1_1 == ((unsigned char) (var_1_2 + var_1_3))) : 1) : ((! var_1_59) ? (var_1_1 == ((unsigned char) ((64 + var_1_10) - (var_1_11 - var_1_4)))) : 1)) && ((var_1_6 >= (max (1.25f , var_1_7))) ? (var_1_12 == ((signed long int) (min (var_1_2 , (var_1_3 - (var_1_10 + var_1_39)))))) : (var_1_12 == ((signed long int) var_1_3)))) && ((var_1_8 > var_1_7) ? (var_1_13 == ((unsigned char) (var_1_14 && var_1_15))) : (var_1_13 == ((unsigned char) ((! var_1_16) && var_1_15))))) && (((var_1_10 / var_1_11) > ((var_1_18 - var_1_3) - var_1_12)) ? (var_1_17 == ((signed long int) var_1_3)) : 1)) && ((var_1_15 || var_1_14) ? (var_1_15 ? ((var_1_59 || (0 < (min (var_1_11 , var_1_56)))) ? (var_1_19 == ((unsigned long int) (var_1_56 + var_1_10))) : (var_1_16 ? (var_1_19 == ((unsigned long int) var_1_18)) : (var_1_19 == ((unsigned long int) var_1_56)))) : (var_1_19 == ((unsigned long int) var_1_2))) : (var_1_19 == ((unsigned long int) var_1_3)))) && (var_1_15 ? (last_1_var_1_20 ? (var_1_20 == ((unsigned char) var_1_14)) : 1) : 1)) && ((var_1_17 < var_1_56) ? ((var_1_55 < var_1_8) ? (var_1_21 == ((float) (((abs (var_1_23)) - (var_1_24 + var_1_25)) - var_1_26))) : (var_1_21 == ((float) (var_1_25 + var_1_24)))) : (var_1_14 ? (var_1_21 == ((float) 128.9f)) : (var_1_21 == ((float) var_1_23))))) && ((((max (var_1_28 , var_1_29)) - var_1_2) < (min ((var_1_18 - var_1_1) , var_1_19))) ? (var_1_27 == ((signed char) ((abs (var_1_3)) - var_1_4))) : 1)) && ((1000.5 >= var_1_8) ? (((var_1_12 < var_1_18) && var_1_14) ? (var_1_30 == ((unsigned char) var_1_16)) : (var_1_30 == ((unsigned char) (! var_1_15)))) : ((var_1_14 || var_1_49) ? (var_1_30 == ((unsigned char) (! var_1_16))) : (var_1_30 == ((unsigned char) (! var_1_15)))))) && ((var_1_8 <= var_1_45) ? (var_1_31 == ((unsigned char) ((min (var_1_10 , (var_1_11 - var_1_4))) + (min (var_1_3 , var_1_2))))) : (var_1_31 == ((unsigned char) ((var_1_32 - var_1_3) - var_1_10))))) && (var_1_13 ? (var_1_33 == ((unsigned short int) (var_1_2 + var_1_4))) : (var_1_33 == ((unsigned short int) ((max (var_1_32 , (27757 - var_1_11))) + var_1_17))))) && (var_1_59 ? (var_1_34 == ((unsigned char) (((var_1_31 < var_1_17) && var_1_16) || var_1_35))) : 1)) && (((var_1_28 - var_1_32) < (var_1_10 + -1000000000)) ? ((((var_1_37 - var_1_38) >> 16) != var_1_28) ? ((var_1_11 < (var_1_2 / 25)) ? (var_1_36 == ((unsigned char) var_1_10)) : 1) : 1) : (var_1_36 == ((unsigned char) (min ((var_1_4 + var_1_11) , var_1_32)))))) && ((((var_1_25 / var_1_23) * var_1_7) == (- var_1_6)) ? (var_1_39 == ((unsigned short int) var_1_4)) : (var_1_39 == ((unsigned short int) var_1_11)))) && (((max (var_1_3 , (var_1_18 + var_1_11))) >= (var_1_32 / var_1_28)) ? (((- var_1_10) > (var_1_18 * -1)) ? (((var_1_24 >= (var_1_26 - var_1_25)) || (var_1_4 <= (abs (var_1_37)))) ? (var_1_40 == ((double) ((max (var_1_25 , var_1_24)) + (min (9.2 , 128.375))))) : 1) : (var_1_40 == ((double) var_1_23))) : ((var_1_7 < (max (var_1_26 , var_1_6))) ? (var_1_40 == ((double) (min ((var_1_24 - (var_1_41 - var_1_25)) , ((var_1_42 + var_1_43) + var_1_44))))) : (var_1_40 == ((double) var_1_44))))) && ((var_1_41 >= var_1_6) ? (var_1_45 == ((double) ((var_1_25 + var_1_24) - (max ((8.818139864913641E18 - var_1_46) , (var_1_41 - var_1_47)))))) : (var_1_45 == ((double) (min (var_1_26 , (var_1_46 - (var_1_47 + var_1_25)))))))) && (var_1_13 ? (var_1_48 == ((unsigned short int) ((min (var_1_33 , (var_1_37 - var_1_3))) + var_1_10))) : (var_1_16 ? (var_1_48 == ((unsigned short int) (max ((abs (var_1_10 + var_1_2)) , var_1_17)))) : 1))) && (((var_1_4 * var_1_56) > var_1_17) ? ((var_1_29 <= var_1_39) ? (var_1_49 == ((unsigned char) (! (var_1_15 && var_1_14)))) : 1) : (var_1_49 == ((unsigned char) (! (var_1_14 && (var_1_58 || var_1_15))))))) && ((((var_1_32 + var_1_17) * var_1_19) <= (abs (var_1_51))) ? (var_1_58 ? (var_1_50 == ((unsigned short int) (max ((var_1_33 + var_1_37) , (var_1_52 - (max (var_1_11 , var_1_38))))))) : 1) : (var_1_50 == ((unsigned short int) (max (var_1_10 , (min (var_1_56 , (max (var_1_32 , var_1_33)))))))))) && (var_1_16 ? ((var_1_15 && (var_1_52 == var_1_56)) ? (var_1_53 == ((signed long int) ((max ((var_1_54 - last_1_var_1_53) , 64)) - var_1_2))) : (var_1_58 ? (var_1_53 == ((signed long int) (abs ((min (100 , var_1_19)) + var_1_52)))) : 1)) : 1)) && ((var_1_50 == var_1_12) ? (var_1_55 == ((float) (max (var_1_46 , (var_1_44 + (var_1_42 + var_1_24)))))) : (var_1_59 ? (var_1_15 ? (var_1_55 == ((float) var_1_25)) : 1) : (var_1_55 == ((float) var_1_43))))) && (var_1_56 == ((unsigned long int) var_1_28))) && (var_1_14 ? (var_1_57 == ((unsigned char) var_1_2)) : 1)) && ((var_1_41 >= var_1_24) ? (var_1_58 == ((unsigned char) (! var_1_35))) : 1)) && ((last_1_var_1_17 <= (~ (last_1_var_1_53 * last_1_var_1_1))) ? (var_1_59 == ((unsigned char) var_1_16)) : 1)
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
