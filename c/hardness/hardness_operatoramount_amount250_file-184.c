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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch184Amount250.c", 13, "reach_error"); }
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
signed char var_1_1 = 32;
unsigned char var_1_3 = 100;
unsigned char var_1_4 = 4;
signed long int var_1_5 = 5;
signed long int var_1_6 = 128;
signed char var_1_7 = 4;
signed char var_1_8 = 32;
signed char var_1_9 = 10;
signed char var_1_10 = -8;
signed char var_1_11 = 8;
signed char var_1_12 = -10;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 1;
signed char var_1_16 = -128;
unsigned short int var_1_17 = 64;
float var_1_18 = 24.4;
float var_1_19 = 5.4;
float var_1_20 = 255.7;
unsigned short int var_1_21 = 57905;
unsigned short int var_1_22 = 19486;
unsigned short int var_1_23 = 200;
signed long int var_1_24 = -256;
unsigned char var_1_25 = 128;
signed short int var_1_26 = 64;
unsigned short int var_1_27 = 100;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 64;
unsigned char var_1_30 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 128;
signed long int var_1_35 = 0;
unsigned long int var_1_36 = 8;
signed char var_1_38 = -16;
unsigned long int var_1_39 = 3630870910;
unsigned long int var_1_40 = 1876096354;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 64;
unsigned char var_1_43 = 4;
unsigned short int var_1_44 = 32;
signed long int var_1_45 = -4;
signed long int var_1_46 = -256;
signed long int var_1_47 = 1000000000;
signed short int var_1_48 = 16;
unsigned long int var_1_50 = 8;
unsigned char var_1_51 = 0;
signed long int var_1_54 = -64;
signed char var_1_55 = 10;
unsigned char var_1_56 = 1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_24 = -256;
signed short int last_1_var_1_26 = 64;
unsigned char last_1_var_1_28 = 1;
unsigned char last_1_var_1_33 = 64;
signed long int last_1_var_1_35 = 0;
unsigned long int last_1_var_1_36 = 8;
signed long int last_1_var_1_45 = -4;
signed long int last_1_var_1_46 = -256;
signed short int last_1_var_1_48 = 16;
unsigned long int last_1_var_1_50 = 8;
unsigned char last_1_var_1_51 = 0;
unsigned char last_1_var_1_56 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req19Batch184Amount250
	unsigned long int stepLocal_18 = - (var_1_22 ^ last_1_var_1_36);
	signed long int stepLocal_17 = last_1_var_1_46 % var_1_47;
	unsigned char stepLocal_16 = last_1_var_1_45 > var_1_7;
	signed long int stepLocal_15 = last_1_var_1_26;
	if (stepLocal_16 && last_1_var_1_51) {
		var_1_48 = (last_1_var_1_48 - last_1_var_1_24);
	} else {
		if (stepLocal_15 >= var_1_43) {
			var_1_48 = (max ((abs (var_1_43 - var_1_9)) , -128));
		} else {
			if (stepLocal_18 == (var_1_12 + (~ last_1_var_1_36))) {
				if (stepLocal_17 != last_1_var_1_36) {
					var_1_48 = (max (last_1_var_1_26 , var_1_8));
				}
			} else {
				if (! last_1_var_1_56) {
					var_1_48 = (var_1_8 - (max (var_1_42 , var_1_3)));
				}
			}
		}
	}


	// From: Req7Batch184Amount250
	var_1_26 = (var_1_8 - var_1_48);


	// From: Req21Batch184Amount250
	if (last_1_var_1_36 > ((last_1_var_1_35 + last_1_var_1_36) + var_1_47)) {
		var_1_51 = var_1_32;
	} else {
		if (! last_1_var_1_28) {
			var_1_51 = var_1_15;
		} else {
			var_1_51 = var_1_32;
		}
	}


	// From: Req9Batch184Amount250
	var_1_28 = ((var_1_3 >= (var_1_9 + last_1_var_1_50)) && var_1_14);


	// From: Req17Batch184Amount250
	if (last_1_var_1_24 > (abs (var_1_4))) {
		if ((var_1_20 + (- var_1_18)) >= (min (256.2f , var_1_19))) {
			if ((last_1_var_1_36 ^ var_1_22) > ((var_1_8 * 1u) / var_1_40)) {
				var_1_45 = (max (var_1_23 , ((var_1_8 + last_1_var_1_33) - last_1_var_1_48)));
			}
		} else {
			var_1_45 = (max (last_1_var_1_45 , var_1_3));
		}
	}


	// From: Req14Batch184Amount250
	signed long int stepLocal_14 = last_1_var_1_46;
	signed long int stepLocal_13 = last_1_var_1_46;
	signed long int stepLocal_12 = last_1_var_1_35;
	signed long int stepLocal_11 = var_1_9 * var_1_4;
	signed long int stepLocal_10 = max (var_1_21 , last_1_var_1_48);
	if ((var_1_7 * last_1_var_1_36) < stepLocal_12) {
		if (stepLocal_11 > (var_1_21 + last_1_var_1_36)) {
			if (stepLocal_14 == (last_1_var_1_36 * last_1_var_1_24)) {
				var_1_36 = (max ((var_1_22 + var_1_4) , last_1_var_1_36));
			} else {
				var_1_36 = ((min ((abs (var_1_22)) , var_1_9)) + var_1_21);
			}
		} else {
			if ((var_1_12 / (abs (var_1_38))) >= stepLocal_10) {
				var_1_36 = ((min ((var_1_39 - 2u) , 2216597286u)) - 128u);
			} else {
				if (stepLocal_13 > last_1_var_1_45) {
					var_1_36 = (last_1_var_1_35 + (min (last_1_var_1_24 , var_1_23)));
				} else {
					var_1_36 = last_1_var_1_35;
				}
			}
		}
	} else {
		var_1_36 = ((var_1_40 - last_1_var_1_33) + var_1_9);
	}


	// From: Req2Batch184Amount250
	unsigned char stepLocal_1 = var_1_3;
	signed long int stepLocal_0 = var_1_12 * var_1_4;
	if (var_1_4 > stepLocal_1) {
		var_1_13 = (((max (var_1_3 , var_1_8)) < (max (var_1_7 , var_1_11))) && var_1_14);
	} else {
		if (var_1_10 <= stepLocal_0) {
			var_1_13 = ((var_1_10 != var_1_48) || var_1_15);
		}
	}


	// From: Req3Batch184Amount250
	var_1_16 = (var_1_8 + var_1_10);


	// From: Req8Batch184Amount250
	signed char stepLocal_4 = var_1_10;
	if ((- var_1_18) > var_1_20) {
		if (stepLocal_4 == (32 * (var_1_7 - var_1_9))) {
			var_1_27 = (max ((var_1_21 - var_1_3) , var_1_8));
		}
	}


	// From: Req10Batch184Amount250
	unsigned char stepLocal_5 = 5 >= var_1_9;
	if (stepLocal_5 || (var_1_7 >= var_1_4)) {
		var_1_29 = var_1_9;
	}


	// From: Req15Batch184Amount250
	var_1_41 = ((abs (var_1_9)) + ((min (var_1_42 , 64)) - (var_1_43 + 16)));


	// From: Req16Batch184Amount250
	var_1_44 = var_1_43;


	// From: Req18Batch184Amount250
	if (var_1_14) {
		var_1_46 = (max (var_1_12 , (min (var_1_38 , (var_1_42 + var_1_27)))));
	} else {
		var_1_46 = ((var_1_22 - (var_1_47 - var_1_44)) + var_1_23);
	}


	// From: Req22Batch184Amount250
	if (var_1_14) {
		var_1_54 = var_1_22;
	} else {
		var_1_54 = var_1_23;
	}


	// From: Req23Batch184Amount250
	var_1_55 = (max (64 , var_1_43));


	// From: Req24Batch184Amount250
	if (var_1_45 > var_1_21) {
		var_1_56 = var_1_15;
	} else {
		if (var_1_51 || var_1_28) {
			if (var_1_14) {
				var_1_56 = 0;
			} else {
				var_1_56 = var_1_32;
			}
		}
	}


	// From: Req4Batch184Amount250
	unsigned char stepLocal_2 = var_1_14;
	if (var_1_56) {
		if (var_1_15 || stepLocal_2) {
			if ((var_1_18 + var_1_19) > var_1_20) {
				var_1_17 = ((min (51604 , var_1_21)) - (abs (var_1_36)));
			} else {
				var_1_17 = (((max (26511 , var_1_22)) - (abs (var_1_23))) + var_1_8);
			}
		}
	} else {
		var_1_17 = var_1_8;
	}


	// From: Req20Batch184Amount250
	if (var_1_32 && ((var_1_45 >= last_1_var_1_50) || var_1_28)) {
		var_1_50 = ((min ((var_1_48 + var_1_9) , var_1_46)) + var_1_6);
	} else {
		var_1_50 = (min (var_1_3 , var_1_48));
	}


	// From: Req12Batch184Amount250
	signed char stepLocal_9 = var_1_11;
	signed char stepLocal_8 = var_1_8;
	signed char stepLocal_7 = var_1_11;
	if (stepLocal_8 == var_1_10) {
		if (var_1_45 >= stepLocal_7) {
			if (stepLocal_9 < var_1_29) {
				var_1_33 = (min ((var_1_34 - var_1_9) , var_1_8));
			} else {
				var_1_33 = (max (var_1_9 , var_1_34));
			}
		} else {
			var_1_33 = 5;
		}
	}


	// From: Req5Batch184Amount250
	signed long int stepLocal_3 = (max (var_1_7 , var_1_4)) - 100;
	if (var_1_15) {
		if ((var_1_36 + var_1_3) > stepLocal_3) {
			var_1_24 = (max (var_1_23 , var_1_11));
		} else {
			var_1_24 = var_1_4;
		}
	} else {
		var_1_24 = (min (var_1_55 , var_1_11));
	}


	// From: Req1Batch184Amount250
	if (((var_1_29 / var_1_3) / var_1_4) >= (var_1_5 - var_1_6)) {
		var_1_1 = (var_1_7 - (var_1_8 + var_1_9));
	} else {
		var_1_1 = (((var_1_10 + -2) + var_1_11) + (var_1_12 + -16));
	}


	// From: Req6Batch184Amount250
	if (! (var_1_23 == (var_1_50 * var_1_4))) {
		if (! (var_1_50 <= var_1_9)) {
			if (32 <= (min ((var_1_3 + var_1_54) , 4))) {
				var_1_25 = var_1_8;
			} else {
				if (((~ var_1_50) / var_1_3) <= var_1_11) {
					var_1_25 = var_1_9;
				} else {
					var_1_25 = var_1_8;
				}
			}
		} else {
			var_1_25 = var_1_8;
		}
	} else {
		var_1_25 = 128;
	}


	// From: Req11Batch184Amount250
	unsigned long int stepLocal_6 = var_1_50;
	if (stepLocal_6 > 64) {
		var_1_30 = ((! var_1_15) || (var_1_14 && var_1_32));
	} else {
		var_1_30 = var_1_32;
	}


	// From: Req13Batch184Amount250
	if (var_1_51) {
		var_1_35 = (min (var_1_9 , var_1_17));
	} else {
		var_1_35 = (min (var_1_9 , (max ((max (var_1_29 , var_1_23)) , (var_1_3 + var_1_54)))));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -15);
	assume_abort_if_not(var_1_10 <= 16);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -31);
	assume_abort_if_not(var_1_11 <= 31);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -31);
	assume_abort_if_not(var_1_12 <= 32);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -922337.2036854776000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 32767);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 16383);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 127);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -127);
	assume_abort_if_not(var_1_38 <= 127);
	assume_abort_if_not(var_1_38 != 0);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 3221225470);
	assume_abort_if_not(var_1_39 <= 4294967294);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 1073741823);
	assume_abort_if_not(var_1_40 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 63);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 32);
	var_1_47 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_47 >= 536870911);
	assume_abort_if_not(var_1_47 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_24 = var_1_24;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_56 = var_1_56;
}

int property(void) {
	return ((((((((((((((((((((((((((var_1_29 / var_1_3) / var_1_4) >= (var_1_5 - var_1_6)) ? (var_1_1 == ((signed char) (var_1_7 - (var_1_8 + var_1_9)))) : (var_1_1 == ((signed char) (((var_1_10 + -2) + var_1_11) + (var_1_12 + -16))))) && ((var_1_4 > var_1_3) ? (var_1_13 == ((unsigned char) (((max (var_1_3 , var_1_8)) < (max (var_1_7 , var_1_11))) && var_1_14))) : ((var_1_10 <= (var_1_12 * var_1_4)) ? (var_1_13 == ((unsigned char) ((var_1_10 != var_1_48) || var_1_15))) : 1))) && (var_1_16 == ((signed char) (var_1_8 + var_1_10)))) && (var_1_56 ? ((var_1_15 || var_1_14) ? (((var_1_18 + var_1_19) > var_1_20) ? (var_1_17 == ((unsigned short int) ((min (51604 , var_1_21)) - (abs (var_1_36))))) : (var_1_17 == ((unsigned short int) (((max (26511 , var_1_22)) - (abs (var_1_23))) + var_1_8)))) : 1) : (var_1_17 == ((unsigned short int) var_1_8)))) && (var_1_15 ? (((var_1_36 + var_1_3) > ((max (var_1_7 , var_1_4)) - 100)) ? (var_1_24 == ((signed long int) (max (var_1_23 , var_1_11)))) : (var_1_24 == ((signed long int) var_1_4))) : (var_1_24 == ((signed long int) (min (var_1_55 , var_1_11)))))) && ((! (var_1_23 == (var_1_50 * var_1_4))) ? ((! (var_1_50 <= var_1_9)) ? ((32 <= (min ((var_1_3 + var_1_54) , 4))) ? (var_1_25 == ((unsigned char) var_1_8)) : ((((~ var_1_50) / var_1_3) <= var_1_11) ? (var_1_25 == ((unsigned char) var_1_9)) : (var_1_25 == ((unsigned char) var_1_8)))) : (var_1_25 == ((unsigned char) var_1_8))) : (var_1_25 == ((unsigned char) 128)))) && (var_1_26 == ((signed short int) (var_1_8 - var_1_48)))) && (((- var_1_18) > var_1_20) ? ((var_1_10 == (32 * (var_1_7 - var_1_9))) ? (var_1_27 == ((unsigned short int) (max ((var_1_21 - var_1_3) , var_1_8)))) : 1) : 1)) && (var_1_28 == ((unsigned char) ((var_1_3 >= (var_1_9 + last_1_var_1_50)) && var_1_14)))) && (((5 >= var_1_9) || (var_1_7 >= var_1_4)) ? (var_1_29 == ((unsigned char) var_1_9)) : 1)) && ((var_1_50 > 64) ? (var_1_30 == ((unsigned char) ((! var_1_15) || (var_1_14 && var_1_32)))) : (var_1_30 == ((unsigned char) var_1_32)))) && ((var_1_8 == var_1_10) ? ((var_1_45 >= var_1_11) ? ((var_1_11 < var_1_29) ? (var_1_33 == ((unsigned char) (min ((var_1_34 - var_1_9) , var_1_8)))) : (var_1_33 == ((unsigned char) (max (var_1_9 , var_1_34))))) : (var_1_33 == ((unsigned char) 5))) : 1)) && (var_1_51 ? (var_1_35 == ((signed long int) (min (var_1_9 , var_1_17)))) : (var_1_35 == ((signed long int) (min (var_1_9 , (max ((max (var_1_29 , var_1_23)) , (var_1_3 + var_1_54))))))))) && (((var_1_7 * last_1_var_1_36) < last_1_var_1_35) ? (((var_1_9 * var_1_4) > (var_1_21 + last_1_var_1_36)) ? ((last_1_var_1_46 == (last_1_var_1_36 * last_1_var_1_24)) ? (var_1_36 == ((unsigned long int) (max ((var_1_22 + var_1_4) , last_1_var_1_36)))) : (var_1_36 == ((unsigned long int) ((min ((abs (var_1_22)) , var_1_9)) + var_1_21)))) : (((var_1_12 / (abs (var_1_38))) >= (max (var_1_21 , last_1_var_1_48))) ? (var_1_36 == ((unsigned long int) ((min ((var_1_39 - 2u) , 2216597286u)) - 128u))) : ((last_1_var_1_46 > last_1_var_1_45) ? (var_1_36 == ((unsigned long int) (last_1_var_1_35 + (min (last_1_var_1_24 , var_1_23))))) : (var_1_36 == ((unsigned long int) last_1_var_1_35))))) : (var_1_36 == ((unsigned long int) ((var_1_40 - last_1_var_1_33) + var_1_9))))) && (var_1_41 == ((unsigned char) ((abs (var_1_9)) + ((min (var_1_42 , 64)) - (var_1_43 + 16)))))) && (var_1_44 == ((unsigned short int) var_1_43))) && ((last_1_var_1_24 > (abs (var_1_4))) ? (((var_1_20 + (- var_1_18)) >= (min (256.2f , var_1_19))) ? (((last_1_var_1_36 ^ var_1_22) > ((var_1_8 * 1u) / var_1_40)) ? (var_1_45 == ((signed long int) (max (var_1_23 , ((var_1_8 + last_1_var_1_33) - last_1_var_1_48))))) : 1) : (var_1_45 == ((signed long int) (max (last_1_var_1_45 , var_1_3))))) : 1)) && (var_1_14 ? (var_1_46 == ((signed long int) (max (var_1_12 , (min (var_1_38 , (var_1_42 + var_1_27))))))) : (var_1_46 == ((signed long int) ((var_1_22 - (var_1_47 - var_1_44)) + var_1_23))))) && (((last_1_var_1_45 > var_1_7) && last_1_var_1_51) ? (var_1_48 == ((signed short int) (last_1_var_1_48 - last_1_var_1_24))) : ((last_1_var_1_26 >= var_1_43) ? (var_1_48 == ((signed short int) (max ((abs (var_1_43 - var_1_9)) , -128)))) : (((- (var_1_22 ^ last_1_var_1_36)) == (var_1_12 + (~ last_1_var_1_36))) ? (((last_1_var_1_46 % var_1_47) != last_1_var_1_36) ? (var_1_48 == ((signed short int) (max (last_1_var_1_26 , var_1_8)))) : 1) : ((! last_1_var_1_56) ? (var_1_48 == ((signed short int) (var_1_8 - (max (var_1_42 , var_1_3))))) : 1))))) && ((var_1_32 && ((var_1_45 >= last_1_var_1_50) || var_1_28)) ? (var_1_50 == ((unsigned long int) ((min ((var_1_48 + var_1_9) , var_1_46)) + var_1_6))) : (var_1_50 == ((unsigned long int) (min (var_1_3 , var_1_48)))))) && ((last_1_var_1_36 > ((last_1_var_1_35 + last_1_var_1_36) + var_1_47)) ? (var_1_51 == ((unsigned char) var_1_32)) : ((! last_1_var_1_28) ? (var_1_51 == ((unsigned char) var_1_15)) : (var_1_51 == ((unsigned char) var_1_32))))) && (var_1_14 ? (var_1_54 == ((signed long int) var_1_22)) : (var_1_54 == ((signed long int) var_1_23)))) && (var_1_55 == ((signed char) (max (64 , var_1_43))))) && ((var_1_45 > var_1_21) ? (var_1_56 == ((unsigned char) var_1_15)) : ((var_1_51 || var_1_28) ? (var_1_14 ? (var_1_56 == ((unsigned char) 0)) : (var_1_56 == ((unsigned char) var_1_32))) : 1))
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
