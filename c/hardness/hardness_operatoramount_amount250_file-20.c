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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch20Amount250.c", 13, "reach_error"); }
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
signed short int var_1_1 = 4;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 1;
unsigned short int var_1_7 = 0;
unsigned short int var_1_8 = 21062;
signed long int var_1_9 = -4;
unsigned long int var_1_10 = 256;
unsigned long int var_1_11 = 2706779013;
unsigned long int var_1_12 = 256;
float var_1_13 = 25.1;
float var_1_15 = 9.25;
float var_1_16 = 0.8;
float var_1_17 = 9.75;
signed long int var_1_18 = 10;
signed long int var_1_19 = 2050467977;
unsigned short int var_1_20 = 1;
unsigned short int var_1_21 = 63087;
unsigned short int var_1_22 = 64;
unsigned short int var_1_23 = 10000;
unsigned short int var_1_24 = 50;
unsigned long int var_1_25 = 25;
unsigned char var_1_26 = 2;
unsigned long int var_1_27 = 3474534728;
unsigned char var_1_28 = 4;
unsigned long int var_1_29 = 16;
unsigned long int var_1_30 = 1956549945;
unsigned short int var_1_31 = 5;
signed long int var_1_32 = -1;
signed short int var_1_33 = -8;
unsigned long int var_1_34 = 10;
signed long int var_1_35 = 5;
signed long int var_1_36 = -8;
signed long int var_1_38 = -1;
unsigned char var_1_39 = 1;
float var_1_41 = 8.5;
float var_1_42 = 3.05;
float var_1_43 = 32.2;
float var_1_44 = 1000000000.8;
float var_1_45 = 16.5;
float var_1_46 = 64.375;
unsigned long int var_1_47 = 100;
double var_1_48 = 9999999999999.7;
double var_1_49 = 64.375;
unsigned short int var_1_50 = 16;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 4;
unsigned short int last_1_var_1_7 = 0;
signed long int last_1_var_1_9 = -4;
unsigned long int last_1_var_1_10 = 256;
unsigned short int last_1_var_1_22 = 64;
unsigned long int last_1_var_1_25 = 25;
unsigned long int last_1_var_1_29 = 16;
signed long int last_1_var_1_32 = -1;
signed short int last_1_var_1_33 = -8;
unsigned long int last_1_var_1_34 = 10;
signed long int last_1_var_1_36 = -8;
unsigned long int last_1_var_1_47 = 100;
unsigned char last_1_var_1_51 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch20Amount250
	unsigned long int stepLocal_7 = last_1_var_1_10;
	signed long int stepLocal_6 = 4;
	if (last_1_var_1_7 < stepLocal_7) {
		var_1_20 = ((var_1_5 + (max (last_1_var_1_32 , var_1_6))) + 16);
	} else {
		if (last_1_var_1_51) {
			if (stepLocal_6 >= last_1_var_1_34) {
				var_1_20 = (abs (var_1_21 - (var_1_8 - 16)));
			} else {
				var_1_20 = (abs (var_1_6));
			}
		} else {
			var_1_20 = var_1_8;
		}
	}


	// From: Req8Batch20Amount250
	if (last_1_var_1_51) {
		var_1_22 = ((var_1_8 - (var_1_23 - var_1_6)) + (max (128 , var_1_24)));
	} else {
		var_1_22 = (min ((max (var_1_6 , last_1_var_1_9)) , ((57988 - last_1_var_1_33) - var_1_5)));
	}


	// From: Req19Batch20Amount250
	unsigned long int stepLocal_15 = (max (last_1_var_1_32 , var_1_26)) + var_1_27;
	unsigned long int stepLocal_14 = 4 - (last_1_var_1_1 + last_1_var_1_25);
	signed long int stepLocal_13 = - last_1_var_1_32;
	if (! last_1_var_1_51) {
		var_1_47 = var_1_5;
	} else {
		if (! last_1_var_1_51) {
			var_1_47 = (var_1_27 - last_1_var_1_47);
		} else {
			if (var_1_19 <= stepLocal_15) {
				if (stepLocal_14 < (min (last_1_var_1_29 , last_1_var_1_25))) {
					if (var_1_26 < stepLocal_13) {
						var_1_47 = (max (var_1_24 , ((max (var_1_27 , var_1_11)) - var_1_12)));
					}
				} else {
					var_1_47 = ((max ((3846676298u - last_1_var_1_25) , (max (var_1_27 , var_1_11)))) - (var_1_30 - last_1_var_1_1));
				}
			} else {
				var_1_47 = ((var_1_30 - last_1_var_1_47) + (abs (var_1_23)));
			}
		}
	}


	// From: Req6Batch20Amount250
	unsigned long int stepLocal_5 = last_1_var_1_34;
	if (last_1_var_1_51) {
		if (stepLocal_5 != ((3451179663u - var_1_6) * var_1_8)) {
			var_1_18 = (last_1_var_1_29 - ((var_1_19 - last_1_var_1_22) - var_1_6));
		}
	} else {
		var_1_18 = (max (var_1_8 , (abs (last_1_var_1_29))));
	}


	// From: Req16Batch20Amount250
	var_1_35 = (max (var_1_18 , (max (var_1_23 , var_1_27))));


	// From: Req2Batch20Amount250
	signed long int stepLocal_2 = var_1_6 / var_1_5;
	if (stepLocal_2 > last_1_var_1_34) {
		var_1_7 = ((var_1_8 - var_1_5) + var_1_6);
	}


	// From: Req1Batch20Amount250
	unsigned short int stepLocal_1 = var_1_7;
	unsigned char stepLocal_0 = var_1_2;
	if (stepLocal_0 || var_1_3) {
		if (stepLocal_1 == ((64 + var_1_5) - (var_1_6 + 10))) {
			var_1_1 = var_1_7;
		}
	}


	// From: Req23Batch20Amount250
	unsigned long int stepLocal_16 = last_1_var_1_34;
	if ((last_1_var_1_34 * (var_1_21 | last_1_var_1_9)) != stepLocal_16) {
		var_1_51 = var_1_52;
	}


	// From: Req21Batch20Amount250
	if (var_1_51) {
		var_1_49 = var_1_42;
	} else {
		var_1_49 = var_1_17;
	}


	// From: Req4Batch20Amount250
	var_1_10 = (var_1_11 - var_1_12);


	// From: Req10Batch20Amount250
	var_1_28 = (var_1_26 + var_1_5);


	// From: Req20Batch20Amount250
	if (var_1_51) {
		var_1_48 = var_1_43;
	} else {
		var_1_48 = var_1_17;
	}


	// From: Req11Batch20Amount250
	if ((min (var_1_17 , var_1_49)) > var_1_15) {
		var_1_29 = ((var_1_47 + var_1_10) + var_1_12);
	} else {
		var_1_29 = ((max ((var_1_19 - var_1_8) , var_1_47)) + ((var_1_30 - var_1_20) - var_1_35));
	}


	// From: Req3Batch20Amount250
	unsigned short int stepLocal_3 = var_1_20;
	if (var_1_7 <= stepLocal_3) {
		var_1_9 = var_1_7;
	}


	// From: Req15Batch20Amount250
	if (var_1_51) {
		var_1_34 = var_1_11;
	} else {
		if (var_1_51) {
			var_1_34 = (var_1_21 + var_1_8);
		} else {
			if ((var_1_29 * var_1_19) >= var_1_29) {
				var_1_34 = 128u;
			} else {
				var_1_34 = var_1_9;
			}
		}
	}


	// From: Req9Batch20Amount250
	if (var_1_51 || (var_1_22 == (var_1_47 >> var_1_26))) {
		if (var_1_51) {
			if (var_1_29 <= var_1_12) {
				var_1_25 = ((var_1_27 - var_1_47) - var_1_22);
			} else {
				var_1_25 = (var_1_27 - var_1_29);
			}
		} else {
			if (var_1_24 > (var_1_47 / var_1_23)) {
				var_1_25 = var_1_22;
			}
		}
	} else {
		var_1_25 = var_1_8;
	}


	// From: Req14Batch20Amount250
	if (var_1_6 < (var_1_18 + var_1_7)) {
		if ((var_1_25 * (32 % var_1_8)) == (min (-32 , var_1_22))) {
			if (var_1_16 < var_1_17) {
				var_1_33 = ((max (var_1_6 , var_1_5)) + var_1_47);
			} else {
				var_1_33 = var_1_26;
			}
		} else {
			var_1_33 = (var_1_23 + (max ((var_1_25 + var_1_26) , var_1_47)));
		}
	} else {
		var_1_33 = (((var_1_5 + var_1_6) - var_1_23) + var_1_47);
	}


	// From: Req22Batch20Amount250
	if (var_1_10 > var_1_47) {
		var_1_50 = (var_1_24 + (min (var_1_6 , var_1_26)));
	}


	// From: Req5Batch20Amount250
	unsigned long int stepLocal_4 = var_1_9 ^ var_1_34;
	if (var_1_6 >= stepLocal_4) {
		var_1_13 = (max (var_1_15 , (var_1_16 - var_1_17)));
	}


	// From: Req17Batch20Amount250
	unsigned long int stepLocal_12 = var_1_34;
	unsigned char stepLocal_11 = var_1_3;
	unsigned long int stepLocal_10 = var_1_30;
	if (var_1_2) {
		if (((max (var_1_16 , var_1_17)) - 2.4) > var_1_48) {
			var_1_36 = (var_1_10 - var_1_8);
		} else {
			if ((min (last_1_var_1_36 , (var_1_50 * 10))) < stepLocal_10) {
				var_1_36 = (min ((min (var_1_26 , var_1_23)) , var_1_25));
			} else {
				var_1_36 = ((max (var_1_38 , var_1_23)) + var_1_1);
			}
		}
	} else {
		if (stepLocal_11 || var_1_39) {
			var_1_36 = (var_1_8 - (max (var_1_1 , var_1_19)));
		} else {
			if (stepLocal_12 > var_1_12) {
				var_1_36 = var_1_23;
			} else {
				var_1_36 = (max ((-64 + var_1_5) , (min (var_1_1 , var_1_50))));
			}
		}
	}


	// From: Req18Batch20Amount250
	if (var_1_47 < var_1_9) {
		if (var_1_47 <= (-200 * var_1_6)) {
			var_1_41 = ((max ((var_1_42 + var_1_43) , var_1_17)) - var_1_16);
		} else {
			var_1_41 = ((max (var_1_43 , var_1_42)) + (var_1_44 + var_1_45));
		}
	} else {
		if (var_1_33 < var_1_29) {
			var_1_41 = (min (((abs (0.5f)) + var_1_44) , 100.1f));
		} else {
			var_1_41 = (var_1_46 + var_1_43);
		}
	}


	// From: Req12Batch20Amount250
	unsigned char stepLocal_9 = var_1_6;
	signed long int stepLocal_8 = var_1_24 * var_1_50;
	if (stepLocal_9 <= (200 - var_1_5)) {
		if (var_1_51) {
			if (((var_1_8 + 28549) - var_1_23) > stepLocal_8) {
				var_1_31 = (min (var_1_21 , (min (var_1_23 , var_1_18))));
			}
		}
	} else {
		var_1_31 = var_1_26;
	}


	// From: Req13Batch20Amount250
	if (((~ var_1_6) % (min (var_1_26 , var_1_5))) < (var_1_30 - var_1_23)) {
		var_1_32 = (var_1_18 + (-32 + var_1_31));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 64);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 64);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 16383);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 1610612734);
	assume_abort_if_not(var_1_19 <= 2147483646);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 32767);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 8191);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 7);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 3221225470);
	assume_abort_if_not(var_1_27 <= 4294967294);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 1610612735);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= -1073741823);
	assume_abort_if_not(var_1_38 <= 1073741823);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -230584.3009213691400e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 2305843.009213691400e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -230584.3009213691400e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691400e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -461168.6018427383000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 1);
	assume_abort_if_not(var_1_52 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_51 = var_1_51;
}

int property(void) {
	return (((((((((((((((((((((((var_1_2 || var_1_3) ? ((var_1_7 == ((64 + var_1_5) - (var_1_6 + 10))) ? (var_1_1 == ((signed short int) var_1_7)) : 1) : 1) && (((var_1_6 / var_1_5) > last_1_var_1_34) ? (var_1_7 == ((unsigned short int) ((var_1_8 - var_1_5) + var_1_6))) : 1)) && ((var_1_7 <= var_1_20) ? (var_1_9 == ((signed long int) var_1_7)) : 1)) && (var_1_10 == ((unsigned long int) (var_1_11 - var_1_12)))) && ((var_1_6 >= (var_1_9 ^ var_1_34)) ? (var_1_13 == ((float) (max (var_1_15 , (var_1_16 - var_1_17))))) : 1)) && (last_1_var_1_51 ? ((last_1_var_1_34 != ((3451179663u - var_1_6) * var_1_8)) ? (var_1_18 == ((signed long int) (last_1_var_1_29 - ((var_1_19 - last_1_var_1_22) - var_1_6)))) : 1) : (var_1_18 == ((signed long int) (max (var_1_8 , (abs (last_1_var_1_29)))))))) && ((last_1_var_1_7 < last_1_var_1_10) ? (var_1_20 == ((unsigned short int) ((var_1_5 + (max (last_1_var_1_32 , var_1_6))) + 16))) : (last_1_var_1_51 ? ((4 >= last_1_var_1_34) ? (var_1_20 == ((unsigned short int) (abs (var_1_21 - (var_1_8 - 16))))) : (var_1_20 == ((unsigned short int) (abs (var_1_6))))) : (var_1_20 == ((unsigned short int) var_1_8))))) && (last_1_var_1_51 ? (var_1_22 == ((unsigned short int) ((var_1_8 - (var_1_23 - var_1_6)) + (max (128 , var_1_24))))) : (var_1_22 == ((unsigned short int) (min ((max (var_1_6 , last_1_var_1_9)) , ((57988 - last_1_var_1_33) - var_1_5))))))) && ((var_1_51 || (var_1_22 == (var_1_47 >> var_1_26))) ? (var_1_51 ? ((var_1_29 <= var_1_12) ? (var_1_25 == ((unsigned long int) ((var_1_27 - var_1_47) - var_1_22))) : (var_1_25 == ((unsigned long int) (var_1_27 - var_1_29)))) : ((var_1_24 > (var_1_47 / var_1_23)) ? (var_1_25 == ((unsigned long int) var_1_22)) : 1)) : (var_1_25 == ((unsigned long int) var_1_8)))) && (var_1_28 == ((unsigned char) (var_1_26 + var_1_5)))) && (((min (var_1_17 , var_1_49)) > var_1_15) ? (var_1_29 == ((unsigned long int) ((var_1_47 + var_1_10) + var_1_12))) : (var_1_29 == ((unsigned long int) ((max ((var_1_19 - var_1_8) , var_1_47)) + ((var_1_30 - var_1_20) - var_1_35)))))) && ((var_1_6 <= (200 - var_1_5)) ? (var_1_51 ? ((((var_1_8 + 28549) - var_1_23) > (var_1_24 * var_1_50)) ? (var_1_31 == ((unsigned short int) (min (var_1_21 , (min (var_1_23 , var_1_18)))))) : 1) : 1) : (var_1_31 == ((unsigned short int) var_1_26)))) && ((((~ var_1_6) % (min (var_1_26 , var_1_5))) < (var_1_30 - var_1_23)) ? (var_1_32 == ((signed long int) (var_1_18 + (-32 + var_1_31)))) : 1)) && ((var_1_6 < (var_1_18 + var_1_7)) ? (((var_1_25 * (32 % var_1_8)) == (min (-32 , var_1_22))) ? ((var_1_16 < var_1_17) ? (var_1_33 == ((signed short int) ((max (var_1_6 , var_1_5)) + var_1_47))) : (var_1_33 == ((signed short int) var_1_26))) : (var_1_33 == ((signed short int) (var_1_23 + (max ((var_1_25 + var_1_26) , var_1_47)))))) : (var_1_33 == ((signed short int) (((var_1_5 + var_1_6) - var_1_23) + var_1_47))))) && (var_1_51 ? (var_1_34 == ((unsigned long int) var_1_11)) : (var_1_51 ? (var_1_34 == ((unsigned long int) (var_1_21 + var_1_8))) : (((var_1_29 * var_1_19) >= var_1_29) ? (var_1_34 == ((unsigned long int) 128u)) : (var_1_34 == ((unsigned long int) var_1_9)))))) && (var_1_35 == ((signed long int) (max (var_1_18 , (max (var_1_23 , var_1_27))))))) && (var_1_2 ? ((((max (var_1_16 , var_1_17)) - 2.4) > var_1_48) ? (var_1_36 == ((signed long int) (var_1_10 - var_1_8))) : (((min (last_1_var_1_36 , (var_1_50 * 10))) < var_1_30) ? (var_1_36 == ((signed long int) (min ((min (var_1_26 , var_1_23)) , var_1_25)))) : (var_1_36 == ((signed long int) ((max (var_1_38 , var_1_23)) + var_1_1))))) : ((var_1_3 || var_1_39) ? (var_1_36 == ((signed long int) (var_1_8 - (max (var_1_1 , var_1_19))))) : ((var_1_34 > var_1_12) ? (var_1_36 == ((signed long int) var_1_23)) : (var_1_36 == ((signed long int) (max ((-64 + var_1_5) , (min (var_1_1 , var_1_50)))))))))) && ((var_1_47 < var_1_9) ? ((var_1_47 <= (-200 * var_1_6)) ? (var_1_41 == ((float) ((max ((var_1_42 + var_1_43) , var_1_17)) - var_1_16))) : (var_1_41 == ((float) ((max (var_1_43 , var_1_42)) + (var_1_44 + var_1_45))))) : ((var_1_33 < var_1_29) ? (var_1_41 == ((float) (min (((abs (0.5f)) + var_1_44) , 100.1f)))) : (var_1_41 == ((float) (var_1_46 + var_1_43)))))) && ((! last_1_var_1_51) ? (var_1_47 == ((unsigned long int) var_1_5)) : ((! last_1_var_1_51) ? (var_1_47 == ((unsigned long int) (var_1_27 - last_1_var_1_47))) : ((var_1_19 <= ((max (last_1_var_1_32 , var_1_26)) + var_1_27)) ? (((4 - (last_1_var_1_1 + last_1_var_1_25)) < (min (last_1_var_1_29 , last_1_var_1_25))) ? ((var_1_26 < (- last_1_var_1_32)) ? (var_1_47 == ((unsigned long int) (max (var_1_24 , ((max (var_1_27 , var_1_11)) - var_1_12))))) : 1) : (var_1_47 == ((unsigned long int) ((max ((3846676298u - last_1_var_1_25) , (max (var_1_27 , var_1_11)))) - (var_1_30 - last_1_var_1_1))))) : (var_1_47 == ((unsigned long int) ((var_1_30 - last_1_var_1_47) + (abs (var_1_23))))))))) && (var_1_51 ? (var_1_48 == ((double) var_1_43)) : (var_1_48 == ((double) var_1_17)))) && (var_1_51 ? (var_1_49 == ((double) var_1_42)) : (var_1_49 == ((double) var_1_17)))) && ((var_1_10 > var_1_47) ? (var_1_50 == ((unsigned short int) (var_1_24 + (min (var_1_6 , var_1_26))))) : 1)) && (((last_1_var_1_34 * (var_1_21 | last_1_var_1_9)) != last_1_var_1_34) ? (var_1_51 == ((unsigned char) var_1_52)) : 1)
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
