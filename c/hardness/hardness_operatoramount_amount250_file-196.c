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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch196Amount250.c", 13, "reach_error"); }
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
signed short int var_1_1 = -128;
unsigned char var_1_4 = 0;
signed short int var_1_8 = 0;
signed short int var_1_9 = 1;
signed char var_1_10 = -128;
signed char var_1_11 = 64;
signed char var_1_12 = -1;
signed char var_1_13 = 2;
signed char var_1_14 = 32;
double var_1_15 = 3.75;
double var_1_16 = 500.5;
unsigned short int var_1_17 = 256;
float var_1_18 = 100.25;
float var_1_19 = 32.25;
unsigned long int var_1_20 = 128;
signed long int var_1_21 = -128;
float var_1_23 = 256.75;
float var_1_24 = 255.5;
float var_1_25 = 5.5;
float var_1_26 = 63.6;
float var_1_27 = 24.5;
unsigned long int var_1_28 = 64;
unsigned long int var_1_29 = 10;
unsigned char var_1_30 = 0;
signed short int var_1_33 = 5;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
unsigned long int var_1_36 = 128;
unsigned long int var_1_37 = 2986857211;
double var_1_38 = 127.6;
double var_1_39 = 10.6;
float var_1_40 = 0.2;
unsigned long int var_1_41 = 2773216914;
float var_1_42 = 16.4;
float var_1_43 = 1.8;
double var_1_44 = 1.5;
double var_1_45 = 3.5;
signed short int var_1_46 = -32;
double var_1_47 = 31.5;
double var_1_48 = 31.625;
unsigned char var_1_49 = 25;
float var_1_50 = 32.35;
signed short int var_1_51 = 256;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -128;
double last_1_var_1_15 = 3.75;
unsigned short int last_1_var_1_17 = 256;
unsigned long int last_1_var_1_20 = 128;
float last_1_var_1_23 = 256.75;
unsigned char last_1_var_1_30 = 0;
unsigned long int last_1_var_1_36 = 128;
signed short int last_1_var_1_46 = -32;
double last_1_var_1_48 = 31.625;
signed short int last_1_var_1_51 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch196Amount250
	if ((var_1_13 >= var_1_11) || (var_1_14 >= (last_1_var_1_20 + -100))) {
		if (last_1_var_1_30 || (last_1_var_1_48 > last_1_var_1_15)) {
			if (last_1_var_1_51 <= var_1_9) {
				if (! (var_1_12 < last_1_var_1_17)) {
					var_1_21 = (var_1_12 - 1);
				}
			} else {
				var_1_21 = var_1_11;
			}
		} else {
			if (last_1_var_1_36 > var_1_14) {
				if (last_1_var_1_30) {
					if ((min (last_1_var_1_36 , var_1_14)) > last_1_var_1_36) {
						var_1_21 = last_1_var_1_46;
					} else {
						var_1_21 = last_1_var_1_17;
					}
				}
			} else {
				var_1_21 = var_1_9;
			}
		}
	}


	// From: Req10Batch196Amount250
	signed long int stepLocal_0 = var_1_14 >> var_1_33;
	if (stepLocal_0 <= (abs (last_1_var_1_1))) {
		var_1_30 = (var_1_34 || var_1_35);
	}


	// From: Req3Batch196Amount250
	if (var_1_30) {
		var_1_15 = (var_1_16 - 127.2);
	} else {
		var_1_15 = var_1_16;
	}


	// From: Req19Batch196Amount250
	if (var_1_30) {
		var_1_50 = var_1_19;
	} else {
		var_1_50 = var_1_16;
	}


	// From: Req6Batch196Amount250
	var_1_20 = var_1_14;


	// From: Req8Batch196Amount250
	if (var_1_30) {
		var_1_23 = var_1_19;
	} else {
		if (var_1_20 < -2) {
			if ((last_1_var_1_23 / var_1_24) < 64.5f) {
				var_1_23 = (var_1_16 - var_1_19);
			}
		} else {
			var_1_23 = ((min ((var_1_19 + var_1_25) , var_1_16)) - var_1_26);
		}
	}


	// From: Req14Batch196Amount250
	if (var_1_34) {
		var_1_44 = (min ((max (var_1_42 , (var_1_43 + var_1_25))) , (var_1_19 - var_1_26)));
	} else {
		if (var_1_30 && (127.5f != var_1_24)) {
			if (var_1_28 < var_1_41) {
				var_1_44 = (max (var_1_26 , var_1_43));
			} else {
				var_1_44 = (abs (var_1_42 + (var_1_43 + var_1_45)));
			}
		} else {
			var_1_44 = ((var_1_43 + var_1_45) + var_1_39);
		}
	}


	// From: Req15Batch196Amount250
	if (var_1_14 > var_1_9) {
		var_1_46 = ((var_1_33 + (min (var_1_13 , var_1_14))) - 256);
	}


	// From: Req16Batch196Amount250
	if (var_1_4 || var_1_30) {
		var_1_47 = (var_1_25 + var_1_45);
	} else {
		if ((max (50u , (var_1_41 - var_1_13))) >= ((abs (var_1_37)) - var_1_14)) {
			var_1_47 = var_1_45;
		}
	}


	// From: Req4Batch196Amount250
	if (var_1_16 <= var_1_15) {
		var_1_17 = (34033 - (max (var_1_13 , var_1_14)));
	} else {
		if (var_1_30) {
			var_1_17 = (var_1_14 + var_1_13);
		} else {
			var_1_17 = (var_1_14 + 128);
		}
	}


	// From: Req13Batch196Amount250
	if ((var_1_37 - (max (var_1_13 , var_1_33))) == (var_1_20 & (var_1_41 - var_1_17))) {
		var_1_40 = ((max (var_1_25 , var_1_42)) + ((3.86f - var_1_43) + 3.5f));
	}


	// From: Req2Batch196Amount250
	if (var_1_20 <= (var_1_20 / 25)) {
		var_1_10 = (max (var_1_11 , (var_1_12 - var_1_13)));
	} else {
		var_1_10 = (min ((var_1_13 - (max (var_1_14 , 2))) , (-10 + 8)));
	}


	// From: Req5Batch196Amount250
	if (! ((min (var_1_12 , 32)) <= (var_1_20 * var_1_13))) {
		var_1_18 = (256.5f + (1.05f - var_1_19));
	}


	// From: Req17Batch196Amount250
	if (var_1_40 >= var_1_24) {
		var_1_48 = (abs (var_1_26));
	} else {
		if (var_1_30) {
			var_1_48 = (var_1_45 + var_1_43);
		} else {
			var_1_48 = (var_1_26 - var_1_25);
		}
	}


	// From: Req11Batch196Amount250
	unsigned long int stepLocal_2 = var_1_29;
	unsigned char stepLocal_1 = var_1_48 >= (- var_1_48);
	if (var_1_28 >= stepLocal_2) {
		var_1_36 = (var_1_37 - var_1_14);
	} else {
		if (! var_1_35) {
			if (var_1_35 || stepLocal_1) {
				var_1_36 = (var_1_13 + var_1_33);
			} else {
				var_1_36 = (var_1_37 - var_1_13);
			}
		} else {
			var_1_36 = 8u;
		}
	}


	// From: Req18Batch196Amount250
	if (var_1_30) {
		if (var_1_12 >= -1) {
			if ((min (var_1_13 , (100 - var_1_33))) < (var_1_46 + var_1_17)) {
				if (4.2f <= ((min (var_1_26 , var_1_25)) - (var_1_19 + var_1_43))) {
					if (var_1_25 == var_1_50) {
						var_1_49 = var_1_14;
					} else {
						if (var_1_48 >= var_1_25) {
							var_1_49 = (max (var_1_33 , 200));
						} else {
							var_1_49 = (abs (var_1_13));
						}
					}
				}
			} else {
				var_1_49 = var_1_13;
			}
		} else {
			var_1_49 = var_1_33;
		}
	} else {
		var_1_49 = 64;
	}


	// From: Req9Batch196Amount250
	if (((var_1_20 ^ 200u) / (max (var_1_28 , var_1_29))) < var_1_36) {
		var_1_27 = (max ((max (var_1_25 , var_1_16)) , (min (var_1_19 , var_1_26))));
	}


	// From: Req12Batch196Amount250
	unsigned char stepLocal_4 = var_1_20 <= (min (var_1_37 , var_1_33));
	signed long int stepLocal_3 = ~ var_1_21;
	if ((var_1_30 && var_1_35) && stepLocal_4) {
		var_1_38 = (256.5 - (min (var_1_16 , var_1_25)));
	} else {
		if ((var_1_27 / var_1_24) == (min ((- var_1_25) , var_1_44))) {
			if (stepLocal_3 >= -128) {
				var_1_38 = var_1_19;
			} else {
				if (var_1_47 <= (var_1_16 / var_1_24)) {
					if (var_1_34) {
						var_1_38 = ((var_1_19 - var_1_25) + var_1_39);
					} else {
						var_1_38 = (var_1_19 - var_1_26);
					}
				} else {
					var_1_38 = (min (var_1_16 , (16.5 - var_1_26)));
				}
			}
		} else {
			if ((1000000.6 / var_1_24) >= var_1_39) {
				var_1_38 = (var_1_26 - var_1_25);
			} else {
				var_1_38 = (max (((max (63.5 , var_1_39)) + var_1_19) , ((127.25 + 5.75) + var_1_25)));
			}
		}
	}


	// From: Req20Batch196Amount250
	unsigned long int stepLocal_5 = var_1_20;
	if (stepLocal_5 >= var_1_36) {
		if (var_1_44 > var_1_50) {
			if (var_1_38 >= (- var_1_15)) {
				var_1_51 = var_1_8;
			}
		} else {
			var_1_51 = var_1_36;
		}
	} else {
		var_1_51 = var_1_11;
	}


	// From: Req1Batch196Amount250
	if (var_1_30) {
		if (! var_1_30) {
			if ((-32 & var_1_49) >= var_1_36) {
				var_1_1 = (min (var_1_49 , var_1_8));
			} else {
				var_1_1 = ((var_1_49 + -4) + var_1_9);
			}
		}
	} else {
		if (var_1_8 <= var_1_36) {
			var_1_1 = (min (var_1_8 , var_1_9));
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32767);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -16383);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	assume_abort_if_not(var_1_24 != 0.0F);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 4294967295);
	assume_abort_if_not(var_1_28 != 0);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967295);
	assume_abort_if_not(var_1_29 != 0);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 6);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 2147483647);
	assume_abort_if_not(var_1_37 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -461168.6018427383000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 2147483647);
	assume_abort_if_not(var_1_41 <= 4294967295);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 2305843.009213691400e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -230584.3009213691400e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691400e+12F && var_1_45 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_51 = var_1_51;
}

int property(void) {
	return (((((((((((((((((((var_1_30 ? ((! var_1_30) ? (((-32 & var_1_49) >= var_1_36) ? (var_1_1 == ((signed short int) (min (var_1_49 , var_1_8)))) : (var_1_1 == ((signed short int) ((var_1_49 + -4) + var_1_9)))) : 1) : ((var_1_8 <= var_1_36) ? (var_1_1 == ((signed short int) (min (var_1_8 , var_1_9)))) : 1)) && ((var_1_20 <= (var_1_20 / 25)) ? (var_1_10 == ((signed char) (max (var_1_11 , (var_1_12 - var_1_13))))) : (var_1_10 == ((signed char) (min ((var_1_13 - (max (var_1_14 , 2))) , (-10 + 8))))))) && (var_1_30 ? (var_1_15 == ((double) (var_1_16 - 127.2))) : (var_1_15 == ((double) var_1_16)))) && ((var_1_16 <= var_1_15) ? (var_1_17 == ((unsigned short int) (34033 - (max (var_1_13 , var_1_14))))) : (var_1_30 ? (var_1_17 == ((unsigned short int) (var_1_14 + var_1_13))) : (var_1_17 == ((unsigned short int) (var_1_14 + 128)))))) && ((! ((min (var_1_12 , 32)) <= (var_1_20 * var_1_13))) ? (var_1_18 == ((float) (256.5f + (1.05f - var_1_19)))) : 1)) && (var_1_20 == ((unsigned long int) var_1_14))) && (((var_1_13 >= var_1_11) || (var_1_14 >= (last_1_var_1_20 + -100))) ? ((last_1_var_1_30 || (last_1_var_1_48 > last_1_var_1_15)) ? ((last_1_var_1_51 <= var_1_9) ? ((! (var_1_12 < last_1_var_1_17)) ? (var_1_21 == ((signed long int) (var_1_12 - 1))) : 1) : (var_1_21 == ((signed long int) var_1_11))) : ((last_1_var_1_36 > var_1_14) ? (last_1_var_1_30 ? (((min (last_1_var_1_36 , var_1_14)) > last_1_var_1_36) ? (var_1_21 == ((signed long int) last_1_var_1_46)) : (var_1_21 == ((signed long int) last_1_var_1_17))) : 1) : (var_1_21 == ((signed long int) var_1_9)))) : 1)) && (var_1_30 ? (var_1_23 == ((float) var_1_19)) : ((var_1_20 < -2) ? (((last_1_var_1_23 / var_1_24) < 64.5f) ? (var_1_23 == ((float) (var_1_16 - var_1_19))) : 1) : (var_1_23 == ((float) ((min ((var_1_19 + var_1_25) , var_1_16)) - var_1_26)))))) && ((((var_1_20 ^ 200u) / (max (var_1_28 , var_1_29))) < var_1_36) ? (var_1_27 == ((float) (max ((max (var_1_25 , var_1_16)) , (min (var_1_19 , var_1_26)))))) : 1)) && (((var_1_14 >> var_1_33) <= (abs (last_1_var_1_1))) ? (var_1_30 == ((unsigned char) (var_1_34 || var_1_35))) : 1)) && ((var_1_28 >= var_1_29) ? (var_1_36 == ((unsigned long int) (var_1_37 - var_1_14))) : ((! var_1_35) ? ((var_1_35 || (var_1_48 >= (- var_1_48))) ? (var_1_36 == ((unsigned long int) (var_1_13 + var_1_33))) : (var_1_36 == ((unsigned long int) (var_1_37 - var_1_13)))) : (var_1_36 == ((unsigned long int) 8u))))) && (((var_1_30 && var_1_35) && (var_1_20 <= (min (var_1_37 , var_1_33)))) ? (var_1_38 == ((double) (256.5 - (min (var_1_16 , var_1_25))))) : (((var_1_27 / var_1_24) == (min ((- var_1_25) , var_1_44))) ? (((~ var_1_21) >= -128) ? (var_1_38 == ((double) var_1_19)) : ((var_1_47 <= (var_1_16 / var_1_24)) ? (var_1_34 ? (var_1_38 == ((double) ((var_1_19 - var_1_25) + var_1_39))) : (var_1_38 == ((double) (var_1_19 - var_1_26)))) : (var_1_38 == ((double) (min (var_1_16 , (16.5 - var_1_26))))))) : (((1000000.6 / var_1_24) >= var_1_39) ? (var_1_38 == ((double) (var_1_26 - var_1_25))) : (var_1_38 == ((double) (max (((max (63.5 , var_1_39)) + var_1_19) , ((127.25 + 5.75) + var_1_25))))))))) && (((var_1_37 - (max (var_1_13 , var_1_33))) == (var_1_20 & (var_1_41 - var_1_17))) ? (var_1_40 == ((float) ((max (var_1_25 , var_1_42)) + ((3.86f - var_1_43) + 3.5f)))) : 1)) && (var_1_34 ? (var_1_44 == ((double) (min ((max (var_1_42 , (var_1_43 + var_1_25))) , (var_1_19 - var_1_26))))) : ((var_1_30 && (127.5f != var_1_24)) ? ((var_1_28 < var_1_41) ? (var_1_44 == ((double) (max (var_1_26 , var_1_43)))) : (var_1_44 == ((double) (abs (var_1_42 + (var_1_43 + var_1_45)))))) : (var_1_44 == ((double) ((var_1_43 + var_1_45) + var_1_39)))))) && ((var_1_14 > var_1_9) ? (var_1_46 == ((signed short int) ((var_1_33 + (min (var_1_13 , var_1_14))) - 256))) : 1)) && ((var_1_4 || var_1_30) ? (var_1_47 == ((double) (var_1_25 + var_1_45))) : (((max (50u , (var_1_41 - var_1_13))) >= ((abs (var_1_37)) - var_1_14)) ? (var_1_47 == ((double) var_1_45)) : 1))) && ((var_1_40 >= var_1_24) ? (var_1_48 == ((double) (abs (var_1_26)))) : (var_1_30 ? (var_1_48 == ((double) (var_1_45 + var_1_43))) : (var_1_48 == ((double) (var_1_26 - var_1_25)))))) && (var_1_30 ? ((var_1_12 >= -1) ? (((min (var_1_13 , (100 - var_1_33))) < (var_1_46 + var_1_17)) ? ((4.2f <= ((min (var_1_26 , var_1_25)) - (var_1_19 + var_1_43))) ? ((var_1_25 == var_1_50) ? (var_1_49 == ((unsigned char) var_1_14)) : ((var_1_48 >= var_1_25) ? (var_1_49 == ((unsigned char) (max (var_1_33 , 200)))) : (var_1_49 == ((unsigned char) (abs (var_1_13)))))) : 1) : (var_1_49 == ((unsigned char) var_1_13))) : (var_1_49 == ((unsigned char) var_1_33))) : (var_1_49 == ((unsigned char) 64)))) && (var_1_30 ? (var_1_50 == ((float) var_1_19)) : (var_1_50 == ((float) var_1_16)))) && ((var_1_20 >= var_1_36) ? ((var_1_44 > var_1_50) ? ((var_1_38 >= (- var_1_15)) ? (var_1_51 == ((signed short int) var_1_8)) : 1) : (var_1_51 == ((signed short int) var_1_36))) : (var_1_51 == ((signed short int) var_1_11)))
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
