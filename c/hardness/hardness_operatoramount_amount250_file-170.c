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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch170Amount250.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 64;
signed long int var_1_2 = -2;
signed long int var_1_3 = 2;
signed long int var_1_5 = 16;
signed long int var_1_6 = 4;
unsigned long int var_1_7 = 0;
unsigned long int var_1_8 = 2259497370;
unsigned long int var_1_9 = 1673155679;
unsigned long int var_1_10 = 256;
float var_1_11 = 31.5;
float var_1_12 = 0.0;
float var_1_13 = 1.2;
float var_1_14 = 100000000000000.2;
float var_1_15 = 31.4;
unsigned char var_1_16 = 1;
float var_1_17 = 127.4;
signed short int var_1_18 = 25;
signed short int var_1_19 = -1;
signed short int var_1_20 = 128;
unsigned char var_1_21 = 32;
unsigned char var_1_22 = 50;
unsigned char var_1_23 = 64;
float var_1_24 = 255.25;
unsigned long int var_1_25 = 256;
unsigned char var_1_26 = 0;
unsigned long int var_1_27 = 8;
signed char var_1_28 = 1;
signed char var_1_29 = 5;
signed char var_1_30 = -64;
signed char var_1_31 = -16;
unsigned short int var_1_32 = 16;
unsigned short int var_1_33 = 1;
signed long int var_1_34 = -256;
signed long int var_1_35 = 4;
signed long int var_1_36 = 25;
signed long int var_1_37 = 1;
signed char var_1_39 = 0;
signed char var_1_40 = 25;
signed long int var_1_41 = 1977531966;
signed long int var_1_42 = 1611856443;
unsigned long int var_1_43 = 32;
unsigned long int var_1_44 = 0;
signed short int var_1_45 = -25;
float var_1_46 = 16.4;
float var_1_47 = 127.5;
signed char var_1_48 = 8;
signed char var_1_49 = 5;
unsigned char var_1_50 = 0;
float var_1_51 = 200.75;
float var_1_52 = 256.52;
float var_1_53 = 15.5;
unsigned short int var_1_54 = 4;
unsigned short int var_1_55 = 60178;
unsigned short int var_1_56 = 29929;
signed short int var_1_57 = 128;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 1;
signed short int var_1_60 = 4;
signed long int var_1_61 = -128;
float var_1_62 = 1000000.018;
signed short int var_1_63 = 500;
signed short int var_1_64 = 10000;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_34 = -256;
signed long int last_1_var_1_37 = 1;
unsigned long int last_1_var_1_43 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch170Amount250
	signed long int stepLocal_1 = ~ 16;
	if (stepLocal_1 <= var_1_3) {
		var_1_17 = (max ((var_1_14 + var_1_13) , 1.0000000025E8f));
	} else {
		var_1_17 = (var_1_14 + (min (var_1_13 , 63.3f)));
	}


	// From: Req4Batch170Amount250
	var_1_18 = (min (var_1_19 , (2 - var_1_20)));


	// From: Req5Batch170Amount250
	signed long int stepLocal_3 = var_1_5;
	unsigned long int stepLocal_2 = var_1_7;
	if (stepLocal_3 <= var_1_2) {
		if (var_1_19 > stepLocal_2) {
			var_1_21 = (max (var_1_22 , (max (10 , var_1_23))));
		}
	}


	// From: Req8Batch170Amount250
	signed short int stepLocal_6 = var_1_20;
	if ((abs (max (var_1_28 , var_1_29))) < stepLocal_6) {
		var_1_27 = (abs (var_1_7));
	}


	// From: Req9Batch170Amount250
	var_1_30 = (max (-1 , var_1_31));


	// From: Req11Batch170Amount250
	unsigned char stepLocal_8 = var_1_16;
	if (var_1_26 || stepLocal_8) {
		var_1_34 = (var_1_33 - last_1_var_1_34);
	}


	// From: Req21Batch170Amount250
	if (var_1_5 < ((var_1_56 - var_1_3) % var_1_42)) {
		var_1_57 = -256;
	}


	// From: Req22Batch170Amount250
	var_1_58 = var_1_50;


	// From: Req23Batch170Amount250
	if (var_1_58) {
		var_1_59 = var_1_50;
	}


	// From: Req24Batch170Amount250
	if (var_1_58) {
		var_1_60 = 128;
	}


	// From: Req25Batch170Amount250
	if (var_1_59) {
		var_1_61 = var_1_10;
	}


	// From: Req26Batch170Amount250
	var_1_62 = var_1_14;


	// From: Req2Batch170Amount250
	signed long int stepLocal_0 = var_1_2;
	if (stepLocal_0 <= var_1_3) {
		var_1_11 = ((var_1_12 - (max (var_1_13 , var_1_14))) - var_1_15);
	} else {
		if (var_1_58) {
			var_1_11 = var_1_13;
		}
	}


	// From: Req16Batch170Amount250
	unsigned long int stepLocal_13 = var_1_33 - (max (var_1_10 , var_1_22));
	if (((var_1_39 + var_1_42) / var_1_41) == stepLocal_13) {
		if (var_1_59) {
			var_1_44 = (max ((min (var_1_8 , var_1_33)) , 16u));
		}
	}


	// From: Req19Batch170Amount250
	if (((- 128) << (max (var_1_48 , var_1_49))) > (var_1_39 ^ var_1_19)) {
		var_1_47 = ((var_1_14 + var_1_13) - var_1_12);
	} else {
		if (! var_1_59) {
			var_1_47 = (var_1_51 - var_1_15);
		} else {
			var_1_47 = ((abs (var_1_13)) + (min (var_1_14 , (var_1_52 - var_1_53))));
		}
	}


	// From: Req6Batch170Amount250
	signed long int stepLocal_4 = var_1_20 >> (8 - 1);
	if (stepLocal_4 != ((min (var_1_22 , var_1_44)) - var_1_9)) {
		var_1_24 = var_1_12;
	} else {
		var_1_24 = (min ((var_1_14 + var_1_13) , (var_1_15 - var_1_12)));
	}


	// From: Req7Batch170Amount250
	unsigned char stepLocal_5 = var_1_16;
	if (stepLocal_5 || var_1_26) {
		if ((min (var_1_62 , (var_1_13 / var_1_12))) > var_1_24) {
			var_1_25 = var_1_8;
		}
	}


	// From: Req12Batch170Amount250
	if (var_1_25 <= (var_1_6 % var_1_8)) {
		if ((var_1_33 > var_1_2) && ((- var_1_8) <= (var_1_7 % var_1_9))) {
			var_1_35 = (var_1_23 - (abs (var_1_19)));
		}
	}


	// From: Req15Batch170Amount250
	unsigned char stepLocal_12 = var_1_58;
	signed short int stepLocal_11 = var_1_19;
	signed long int stepLocal_10 = -64;
	if (((var_1_22 <= last_1_var_1_43) || var_1_59) || stepLocal_12) {
		if (stepLocal_10 != (var_1_25 + var_1_22)) {
			var_1_43 = (var_1_40 + last_1_var_1_43);
		} else {
			if (stepLocal_11 <= var_1_5) {
				var_1_43 = (min (var_1_22 , last_1_var_1_43));
			} else {
				var_1_43 = var_1_6;
			}
		}
	}


	// From: Req18Batch170Amount250
	if (var_1_25 <= var_1_3) {
		if ((var_1_43 < var_1_25) && ((var_1_42 * 256u) <= var_1_22)) {
			var_1_46 = (1.7f + var_1_14);
		}
	} else {
		var_1_46 = (max ((min (var_1_14 , var_1_15)) , var_1_13));
	}


	// From: Req1Batch170Amount250
	if ((min ((abs (var_1_2)) , (var_1_3 * var_1_25))) < (var_1_5 - var_1_6)) {
		var_1_1 = (min (var_1_7 , var_1_6));
	} else {
		var_1_1 = (var_1_8 - (var_1_9 - var_1_10));
	}


	// From: Req13Batch170Amount250
	unsigned char stepLocal_9 = var_1_23;
	if ((min (var_1_43 , var_1_9)) > stepLocal_9) {
		var_1_36 = var_1_20;
	} else {
		var_1_36 = (-2 + (abs (var_1_19)));
	}


	// From: Req14Batch170Amount250
	if ((var_1_21 * var_1_23) >= var_1_20) {
		if (var_1_3 == (var_1_27 * (max (var_1_10 , var_1_1)))) {
			if ((abs (var_1_29)) != (var_1_19 + var_1_28)) {
				if (((var_1_39 + var_1_40) << last_1_var_1_37) >= -64) {
					var_1_37 = ((min ((abs (var_1_33)) , (min (var_1_43 , var_1_31)))) + (min (var_1_20 , var_1_23)));
				} else {
					if ((var_1_27 * var_1_36) >= var_1_20) {
						var_1_37 = (((min (var_1_41 , var_1_42)) - (var_1_23 + var_1_40)) - (abs (-4)));
					} else {
						var_1_37 = var_1_33;
					}
				}
			} else {
				if (var_1_59 && (var_1_36 <= var_1_28)) {
					var_1_37 = (min (((max (var_1_21 , var_1_43)) - (var_1_23 + var_1_33)) , (var_1_20 - (min (var_1_39 , var_1_22)))));
				}
			}
		} else {
			var_1_37 = var_1_40;
		}
	} else {
		var_1_37 = 1;
	}


	// From: Req17Batch170Amount250
	signed long int stepLocal_14 = -32;
	if (stepLocal_14 >= var_1_43) {
		var_1_45 = (var_1_22 - ((min (var_1_1 , var_1_23)) + var_1_1));
	} else {
		var_1_45 = (max (var_1_22 , var_1_43));
	}


	// From: Req27Batch170Amount250
	signed long int stepLocal_19 = var_1_36;
	if (stepLocal_19 >= (var_1_40 - var_1_42)) {
		var_1_63 = ((max (var_1_40 , var_1_22)) - (var_1_39 + (var_1_64 - var_1_23)));
	} else {
		var_1_63 = var_1_48;
	}


	// From: Req10Batch170Amount250
	unsigned long int stepLocal_7 = var_1_8;
	if (stepLocal_7 < var_1_20) {
		if (var_1_24 > var_1_13) {
			var_1_32 = (var_1_20 + ((10000 - var_1_33) + var_1_36));
		} else {
			var_1_32 = (max (var_1_23 , var_1_22));
		}
	} else {
		var_1_32 = var_1_23;
	}


	// From: Req20Batch170Amount250
	signed long int stepLocal_18 = var_1_3;
	unsigned char stepLocal_17 = var_1_50;
	signed char stepLocal_16 = var_1_49;
	unsigned long int stepLocal_15 = (- var_1_27) + var_1_39;
	if (stepLocal_17 || (var_1_27 >= var_1_29)) {
		if (var_1_27 >= stepLocal_18) {
			if (stepLocal_15 >= var_1_22) {
				if (var_1_32 == stepLocal_16) {
					var_1_54 = (max (var_1_33 , var_1_22));
				}
			} else {
				var_1_54 = var_1_39;
			}
		} else {
			var_1_54 = (max ((min (0 , (abs (var_1_49)))) , (var_1_55 - (var_1_40 + var_1_39))));
		}
	} else {
		var_1_54 = ((abs (var_1_56 - var_1_40)) + (min (var_1_20 , var_1_23)));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483647);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967294);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 1073741823);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 4611686.018427383000e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -32767);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -127);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -127);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 8192);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 64);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= 1073741822);
	assume_abort_if_not(var_1_41 <= 2147483646);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= 1073741822);
	assume_abort_if_not(var_1_42 <= 2147483646);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 23);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 23);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 0);
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854766000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 32767);
	assume_abort_if_not(var_1_55 <= 65534);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 16383);
	assume_abort_if_not(var_1_56 <= 32767);
	var_1_64 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_64 >= 8191);
	assume_abort_if_not(var_1_64 <= 16383);
}



void updateLastVariables(void) {
	last_1_var_1_34 = var_1_34;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_43 = var_1_43;
}

int property(void) {
	return ((((((((((((((((((((((((((((min ((abs (var_1_2)) , (var_1_3 * var_1_25))) < (var_1_5 - var_1_6)) ? (var_1_1 == ((unsigned long int) (min (var_1_7 , var_1_6)))) : (var_1_1 == ((unsigned long int) (var_1_8 - (var_1_9 - var_1_10))))) && ((var_1_2 <= var_1_3) ? (var_1_11 == ((float) ((var_1_12 - (max (var_1_13 , var_1_14))) - var_1_15))) : (var_1_58 ? (var_1_11 == ((float) var_1_13)) : 1))) && (((~ 16) <= var_1_3) ? (var_1_17 == ((float) (max ((var_1_14 + var_1_13) , 1.0000000025E8f)))) : (var_1_17 == ((float) (var_1_14 + (min (var_1_13 , 63.3f))))))) && (var_1_18 == ((signed short int) (min (var_1_19 , (2 - var_1_20)))))) && ((var_1_5 <= var_1_2) ? ((var_1_19 > var_1_7) ? (var_1_21 == ((unsigned char) (max (var_1_22 , (max (10 , var_1_23)))))) : 1) : 1)) && (((var_1_20 >> (8 - 1)) != ((min (var_1_22 , var_1_44)) - var_1_9)) ? (var_1_24 == ((float) var_1_12)) : (var_1_24 == ((float) (min ((var_1_14 + var_1_13) , (var_1_15 - var_1_12))))))) && ((var_1_16 || var_1_26) ? (((min (var_1_62 , (var_1_13 / var_1_12))) > var_1_24) ? (var_1_25 == ((unsigned long int) var_1_8)) : 1) : 1)) && (((abs (max (var_1_28 , var_1_29))) < var_1_20) ? (var_1_27 == ((unsigned long int) (abs (var_1_7)))) : 1)) && (var_1_30 == ((signed char) (max (-1 , var_1_31))))) && ((var_1_8 < var_1_20) ? ((var_1_24 > var_1_13) ? (var_1_32 == ((unsigned short int) (var_1_20 + ((10000 - var_1_33) + var_1_36)))) : (var_1_32 == ((unsigned short int) (max (var_1_23 , var_1_22))))) : (var_1_32 == ((unsigned short int) var_1_23)))) && ((var_1_26 || var_1_16) ? (var_1_34 == ((signed long int) (var_1_33 - last_1_var_1_34))) : 1)) && ((var_1_25 <= (var_1_6 % var_1_8)) ? (((var_1_33 > var_1_2) && ((- var_1_8) <= (var_1_7 % var_1_9))) ? (var_1_35 == ((signed long int) (var_1_23 - (abs (var_1_19))))) : 1) : 1)) && (((min (var_1_43 , var_1_9)) > var_1_23) ? (var_1_36 == ((signed long int) var_1_20)) : (var_1_36 == ((signed long int) (-2 + (abs (var_1_19))))))) && (((var_1_21 * var_1_23) >= var_1_20) ? ((var_1_3 == (var_1_27 * (max (var_1_10 , var_1_1)))) ? (((abs (var_1_29)) != (var_1_19 + var_1_28)) ? ((((var_1_39 + var_1_40) << last_1_var_1_37) >= -64) ? (var_1_37 == ((signed long int) ((min ((abs (var_1_33)) , (min (var_1_43 , var_1_31)))) + (min (var_1_20 , var_1_23))))) : (((var_1_27 * var_1_36) >= var_1_20) ? (var_1_37 == ((signed long int) (((min (var_1_41 , var_1_42)) - (var_1_23 + var_1_40)) - (abs (-4))))) : (var_1_37 == ((signed long int) var_1_33)))) : ((var_1_59 && (var_1_36 <= var_1_28)) ? (var_1_37 == ((signed long int) (min (((max (var_1_21 , var_1_43)) - (var_1_23 + var_1_33)) , (var_1_20 - (min (var_1_39 , var_1_22))))))) : 1)) : (var_1_37 == ((signed long int) var_1_40))) : (var_1_37 == ((signed long int) 1)))) && ((((var_1_22 <= last_1_var_1_43) || var_1_59) || var_1_58) ? ((-64 != (var_1_25 + var_1_22)) ? (var_1_43 == ((unsigned long int) (var_1_40 + last_1_var_1_43))) : ((var_1_19 <= var_1_5) ? (var_1_43 == ((unsigned long int) (min (var_1_22 , last_1_var_1_43)))) : (var_1_43 == ((unsigned long int) var_1_6)))) : 1)) && ((((var_1_39 + var_1_42) / var_1_41) == (var_1_33 - (max (var_1_10 , var_1_22)))) ? (var_1_59 ? (var_1_44 == ((unsigned long int) (max ((min (var_1_8 , var_1_33)) , 16u)))) : 1) : 1)) && ((-32 >= var_1_43) ? (var_1_45 == ((signed short int) (var_1_22 - ((min (var_1_1 , var_1_23)) + var_1_1)))) : (var_1_45 == ((signed short int) (max (var_1_22 , var_1_43)))))) && ((var_1_25 <= var_1_3) ? (((var_1_43 < var_1_25) && ((var_1_42 * 256u) <= var_1_22)) ? (var_1_46 == ((float) (1.7f + var_1_14))) : 1) : (var_1_46 == ((float) (max ((min (var_1_14 , var_1_15)) , var_1_13)))))) && ((((- 128) << (max (var_1_48 , var_1_49))) > (var_1_39 ^ var_1_19)) ? (var_1_47 == ((float) ((var_1_14 + var_1_13) - var_1_12))) : ((! var_1_59) ? (var_1_47 == ((float) (var_1_51 - var_1_15))) : (var_1_47 == ((float) ((abs (var_1_13)) + (min (var_1_14 , (var_1_52 - var_1_53))))))))) && ((var_1_50 || (var_1_27 >= var_1_29)) ? ((var_1_27 >= var_1_3) ? ((((- var_1_27) + var_1_39) >= var_1_22) ? ((var_1_32 == var_1_49) ? (var_1_54 == ((unsigned short int) (max (var_1_33 , var_1_22)))) : 1) : (var_1_54 == ((unsigned short int) var_1_39))) : (var_1_54 == ((unsigned short int) (max ((min (0 , (abs (var_1_49)))) , (var_1_55 - (var_1_40 + var_1_39))))))) : (var_1_54 == ((unsigned short int) ((abs (var_1_56 - var_1_40)) + (min (var_1_20 , var_1_23))))))) && ((var_1_5 < ((var_1_56 - var_1_3) % var_1_42)) ? (var_1_57 == ((signed short int) -256)) : 1)) && (var_1_58 == ((unsigned char) var_1_50))) && (var_1_58 ? (var_1_59 == ((unsigned char) var_1_50)) : 1)) && (var_1_58 ? (var_1_60 == ((signed short int) 128)) : 1)) && (var_1_59 ? (var_1_61 == ((signed long int) var_1_10)) : 1)) && (var_1_62 == ((float) var_1_14))) && ((var_1_36 >= (var_1_40 - var_1_42)) ? (var_1_63 == ((signed short int) ((max (var_1_40 , var_1_22)) - (var_1_39 + (var_1_64 - var_1_23))))) : (var_1_63 == ((signed short int) var_1_48)))
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
