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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch61Amount250.c", 13, "reach_error"); }
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
unsigned long int var_1_2 = 3511246143;
unsigned char var_1_3 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed char var_1_8 = -128;
signed char var_1_9 = 10;
signed char var_1_10 = 32;
signed char var_1_11 = 1;
signed char var_1_15 = 25;
signed char var_1_16 = 16;
signed char var_1_17 = 32;
signed char var_1_18 = 0;
signed short int var_1_19 = 1;
signed short int var_1_20 = 18627;
double var_1_21 = -0.875;
double var_1_22 = 10000000000.6;
double var_1_23 = 100000000.9;
double var_1_24 = 99999999.9;
unsigned char var_1_25 = 8;
double var_1_26 = 256.15;
double var_1_27 = 255.15;
double var_1_28 = 255.2;
signed short int var_1_29 = 128;
unsigned char var_1_30 = 16;
signed char var_1_31 = 32;
signed char var_1_32 = 64;
signed long int var_1_33 = 100;
unsigned long int var_1_34 = 32;
unsigned char var_1_35 = 4;
unsigned char var_1_36 = 16;
unsigned char var_1_37 = 128;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 100;
unsigned short int var_1_40 = 1;
signed short int var_1_41 = -2;
signed long int var_1_43 = 1;
signed long int var_1_44 = 32;
signed short int var_1_45 = -10;
signed short int var_1_46 = 256;
unsigned char var_1_47 = 0;
double var_1_48 = -0.1;
double var_1_49 = 256.6;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 64;
unsigned char var_1_53 = 1;
unsigned short int var_1_54 = 56017;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 64;
double last_1_var_1_26 = 256.15;
signed long int last_1_var_1_33 = 100;
unsigned long int last_1_var_1_34 = 32;
unsigned short int last_1_var_1_40 = 1;
signed short int last_1_var_1_41 = -2;
signed long int last_1_var_1_44 = 32;
signed short int last_1_var_1_45 = -10;
unsigned char last_1_var_1_47 = 0;
double last_1_var_1_48 = -0.1;
unsigned char last_1_var_1_53 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req20Batch61Amount250
	if (((abs (last_1_var_1_26)) * last_1_var_1_48) >= (var_1_22 - var_1_27)) {
		if (last_1_var_1_48 <= 3.8) {
			var_1_44 = (min (last_1_var_1_44 , (min (var_1_37 , var_1_18))));
		} else {
			var_1_44 = ((last_1_var_1_40 + (last_1_var_1_53 + last_1_var_1_34)) - var_1_18);
		}
	} else {
		var_1_44 = (var_1_32 - (abs (var_1_20)));
	}


	// From: Req2Batch61Amount250
	if (((- var_1_2) + last_1_var_1_1) != last_1_var_1_34) {
		if (var_1_2 >= last_1_var_1_34) {
			var_1_3 = (! (last_1_var_1_47 && var_1_6));
		} else {
			var_1_3 = (last_1_var_1_47 && var_1_6);
		}
	} else {
		var_1_3 = (var_1_6 && var_1_7);
	}


	// From: Req5Batch61Amount250
	if (var_1_3) {
		var_1_19 = (8 - (min (var_1_15 , (var_1_20 - var_1_18))));
	} else {
		if (var_1_6) {
			var_1_19 = var_1_20;
		} else {
			var_1_19 = ((var_1_18 + (64 + 128)) - var_1_20);
		}
	}


	// From: Req1Batch61Amount250
	var_1_1 = (var_1_2 - 8u);


	// From: Req3Batch61Amount250
	var_1_8 = (abs (var_1_9 + var_1_10));


	// From: Req7Batch61Amount250
	var_1_24 = (abs (var_1_23));


	// From: Req8Batch61Amount250
	var_1_25 = (max (var_1_16 , (var_1_15 + var_1_18)));


	// From: Req13Batch61Amount250
	var_1_33 = last_1_var_1_33;


	// From: Req15Batch61Amount250
	if (var_1_22 < var_1_27) {
		var_1_35 = ((min (0 , 10)) + (max ((var_1_15 + var_1_18) , var_1_32)));
	}


	// From: Req19Batch61Amount250
	var_1_43 = (var_1_38 - var_1_15);


	// From: Req23Batch61Amount250
	var_1_47 = var_1_7;


	// From: Req25Batch61Amount250
	if (var_1_3) {
		var_1_50 = var_1_51;
	} else {
		var_1_50 = var_1_6;
	}


	// From: Req26Batch61Amount250
	var_1_52 = 16;


	// From: Req22Batch61Amount250
	if ((- var_1_23) >= 99.25) {
		var_1_46 = (min (var_1_15 , ((max (var_1_39 , var_1_44)) - var_1_17)));
	} else {
		if (var_1_3) {
			var_1_46 = (var_1_38 - var_1_15);
		}
	}


	// From: Req14Batch61Amount250
	unsigned char stepLocal_7 = var_1_3;
	signed long int stepLocal_6 = var_1_18 - 50;
	signed long int stepLocal_5 = var_1_43;
	signed long int stepLocal_4 = var_1_43;
	if (stepLocal_6 < var_1_33) {
		if ((var_1_15 - var_1_33) <= stepLocal_5) {
			var_1_34 = (abs (5u + var_1_18));
		} else {
			var_1_34 = (min ((var_1_2 - var_1_20) , var_1_18));
		}
	} else {
		if (var_1_7 && stepLocal_7) {
			var_1_34 = ((abs (var_1_2)) - var_1_17);
		} else {
			if ((var_1_32 + var_1_15) > stepLocal_4) {
				var_1_34 = (min (var_1_17 , (max (var_1_15 , var_1_19))));
			}
		}
	}


	// From: Req9Batch61Amount250
	signed long int stepLocal_1 = max (var_1_52 , 32);
	if (var_1_18 >= stepLocal_1) {
		var_1_26 = ((var_1_27 - (128.8 + 63.6)) + var_1_28);
	} else {
		var_1_26 = (50.2 - var_1_27);
	}


	// From: Req16Batch61Amount250
	if ((- 32u) < var_1_17) {
		var_1_36 = (max (((min (var_1_37 , var_1_38)) - (10 + var_1_16)) , (var_1_32 + var_1_17)));
	} else {
		if (var_1_15 <= var_1_32) {
			var_1_36 = var_1_16;
		} else {
			if ((var_1_3 && var_1_50) || var_1_6) {
				var_1_36 = (var_1_16 + var_1_15);
			} else {
				var_1_36 = (min (((var_1_39 + 100) - var_1_15) , var_1_18));
			}
		}
	}


	// From: Req18Batch61Amount250
	unsigned char stepLocal_8 = var_1_23 == var_1_26;
	if ((var_1_18 > (var_1_43 + last_1_var_1_41)) || stepLocal_8) {
		var_1_41 = ((max (var_1_38 , var_1_37)) - var_1_16);
	}


	// From: Req24Batch61Amount250
	if ((var_1_43 * var_1_32) >= var_1_41) {
		var_1_48 = (var_1_27 + (min (var_1_28 , var_1_49)));
	}


	// From: Req10Batch61Amount250
	unsigned char stepLocal_2 = var_1_6;
	if (var_1_3 || stepLocal_2) {
		var_1_29 = ((var_1_20 - var_1_16) - (max (var_1_17 , var_1_15)));
	} else {
		var_1_29 = ((max (var_1_10 , (min (var_1_16 , var_1_15)))) + var_1_46);
	}


	// From: Req27Batch61Amount250
	signed long int stepLocal_12 = 16 / var_1_32;
	signed long int stepLocal_11 = var_1_29 + (var_1_43 - var_1_16);
	if ((var_1_54 - (var_1_32 + var_1_44)) != stepLocal_11) {
		if (var_1_41 != stepLocal_12) {
			var_1_53 = var_1_15;
		} else {
			if (var_1_51) {
				var_1_53 = var_1_32;
			}
		}
	} else {
		var_1_53 = 4;
	}


	// From: Req6Batch61Amount250
	signed long int stepLocal_0 = var_1_15 + var_1_18;
	if (var_1_26 <= (var_1_26 * (- var_1_48))) {
		var_1_21 = (var_1_22 - 2.375);
	} else {
		if (((var_1_16 + var_1_2) / var_1_20) >= stepLocal_0) {
			var_1_21 = (var_1_23 - var_1_22);
		} else {
			var_1_21 = var_1_23;
		}
	}


	// From: Req11Batch61Amount250
	if (var_1_28 >= var_1_48) {
		var_1_30 = (abs (abs (var_1_16)));
	}


	// From: Req12Batch61Amount250
	unsigned char stepLocal_3 = var_1_3;
	if ((var_1_9 < var_1_41) || stepLocal_3) {
		var_1_31 = ((var_1_32 - (min (var_1_16 , var_1_15))) - (var_1_18 + (abs (var_1_9))));
	} else {
		if (var_1_3) {
			var_1_31 = var_1_32;
		}
	}


	// From: Req17Batch61Amount250
	if ((var_1_28 + var_1_22) >= var_1_21) {
		var_1_40 = (var_1_38 + var_1_17);
	}


	// From: Req21Batch61Amount250
	unsigned char stepLocal_10 = (var_1_6 || var_1_7) || var_1_50;
	signed short int stepLocal_9 = var_1_29;
	if (stepLocal_9 >= var_1_25) {
		if (var_1_3 && stepLocal_10) {
			if (((var_1_24 + var_1_23) + var_1_27) > var_1_22) {
				var_1_45 = (max ((var_1_20 - 128) , var_1_16));
			} else {
				var_1_45 = ((var_1_9 + (last_1_var_1_45 - var_1_18)) + (min (var_1_39 , 128)));
			}
		} else {
			var_1_45 = (var_1_18 - var_1_32);
		}
	}


	// From: Req4Batch61Amount250
	if (var_1_2 != var_1_34) {
		if ((var_1_24 * var_1_48) < var_1_21) {
			var_1_11 = (min (var_1_9 , var_1_10));
		} else {
			if (256 > var_1_10) {
				if (var_1_10 == (max (var_1_34 , var_1_2))) {
					if (var_1_7) {
						if (var_1_21 >= var_1_24) {
							var_1_11 = (min (var_1_9 , ((var_1_15 + var_1_16) - var_1_17)));
						} else {
							var_1_11 = var_1_15;
						}
					}
				} else {
					var_1_11 = (abs (64));
				}
			}
		}
	} else {
		if (var_1_9 < var_1_34) {
			var_1_11 = (max (5 , var_1_15));
		} else {
			var_1_11 = (var_1_16 + (min ((var_1_15 - var_1_18) , var_1_10)));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 2147483647);
	assume_abort_if_not(var_1_2 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -63);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -63);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 16383);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 62);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 127);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 63);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= -461168.6018427383000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 32767);
	assume_abort_if_not(var_1_54 <= 65535);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_53 = var_1_53;
}

int property(void) {
	return ((((((((((((((((((((((((((var_1_1 == ((unsigned long int) (var_1_2 - 8u))) && ((((- var_1_2) + last_1_var_1_1) != last_1_var_1_34) ? ((var_1_2 >= last_1_var_1_34) ? (var_1_3 == ((unsigned char) (! (last_1_var_1_47 && var_1_6)))) : (var_1_3 == ((unsigned char) (last_1_var_1_47 && var_1_6)))) : (var_1_3 == ((unsigned char) (var_1_6 && var_1_7))))) && (var_1_8 == ((signed char) (abs (var_1_9 + var_1_10))))) && ((var_1_2 != var_1_34) ? (((var_1_24 * var_1_48) < var_1_21) ? (var_1_11 == ((signed char) (min (var_1_9 , var_1_10)))) : ((256 > var_1_10) ? ((var_1_10 == (max (var_1_34 , var_1_2))) ? (var_1_7 ? ((var_1_21 >= var_1_24) ? (var_1_11 == ((signed char) (min (var_1_9 , ((var_1_15 + var_1_16) - var_1_17))))) : (var_1_11 == ((signed char) var_1_15))) : 1) : (var_1_11 == ((signed char) (abs (64))))) : 1)) : ((var_1_9 < var_1_34) ? (var_1_11 == ((signed char) (max (5 , var_1_15)))) : (var_1_11 == ((signed char) (var_1_16 + (min ((var_1_15 - var_1_18) , var_1_10)))))))) && (var_1_3 ? (var_1_19 == ((signed short int) (8 - (min (var_1_15 , (var_1_20 - var_1_18)))))) : (var_1_6 ? (var_1_19 == ((signed short int) var_1_20)) : (var_1_19 == ((signed short int) ((var_1_18 + (64 + 128)) - var_1_20)))))) && ((var_1_26 <= (var_1_26 * (- var_1_48))) ? (var_1_21 == ((double) (var_1_22 - 2.375))) : ((((var_1_16 + var_1_2) / var_1_20) >= (var_1_15 + var_1_18)) ? (var_1_21 == ((double) (var_1_23 - var_1_22))) : (var_1_21 == ((double) var_1_23))))) && (var_1_24 == ((double) (abs (var_1_23))))) && (var_1_25 == ((unsigned char) (max (var_1_16 , (var_1_15 + var_1_18)))))) && ((var_1_18 >= (max (var_1_52 , 32))) ? (var_1_26 == ((double) ((var_1_27 - (128.8 + 63.6)) + var_1_28))) : (var_1_26 == ((double) (50.2 - var_1_27))))) && ((var_1_3 || var_1_6) ? (var_1_29 == ((signed short int) ((var_1_20 - var_1_16) - (max (var_1_17 , var_1_15))))) : (var_1_29 == ((signed short int) ((max (var_1_10 , (min (var_1_16 , var_1_15)))) + var_1_46))))) && ((var_1_28 >= var_1_48) ? (var_1_30 == ((unsigned char) (abs (abs (var_1_16))))) : 1)) && (((var_1_9 < var_1_41) || var_1_3) ? (var_1_31 == ((signed char) ((var_1_32 - (min (var_1_16 , var_1_15))) - (var_1_18 + (abs (var_1_9)))))) : (var_1_3 ? (var_1_31 == ((signed char) var_1_32)) : 1))) && (var_1_33 == ((signed long int) last_1_var_1_33))) && (((var_1_18 - 50) < var_1_33) ? (((var_1_15 - var_1_33) <= var_1_43) ? (var_1_34 == ((unsigned long int) (abs (5u + var_1_18)))) : (var_1_34 == ((unsigned long int) (min ((var_1_2 - var_1_20) , var_1_18))))) : ((var_1_7 && var_1_3) ? (var_1_34 == ((unsigned long int) ((abs (var_1_2)) - var_1_17))) : (((var_1_32 + var_1_15) > var_1_43) ? (var_1_34 == ((unsigned long int) (min (var_1_17 , (max (var_1_15 , var_1_19)))))) : 1)))) && ((var_1_22 < var_1_27) ? (var_1_35 == ((unsigned char) ((min (0 , 10)) + (max ((var_1_15 + var_1_18) , var_1_32))))) : 1)) && (((- 32u) < var_1_17) ? (var_1_36 == ((unsigned char) (max (((min (var_1_37 , var_1_38)) - (10 + var_1_16)) , (var_1_32 + var_1_17))))) : ((var_1_15 <= var_1_32) ? (var_1_36 == ((unsigned char) var_1_16)) : (((var_1_3 && var_1_50) || var_1_6) ? (var_1_36 == ((unsigned char) (var_1_16 + var_1_15))) : (var_1_36 == ((unsigned char) (min (((var_1_39 + 100) - var_1_15) , var_1_18)))))))) && (((var_1_28 + var_1_22) >= var_1_21) ? (var_1_40 == ((unsigned short int) (var_1_38 + var_1_17))) : 1)) && (((var_1_18 > (var_1_43 + last_1_var_1_41)) || (var_1_23 == var_1_26)) ? (var_1_41 == ((signed short int) ((max (var_1_38 , var_1_37)) - var_1_16))) : 1)) && (var_1_43 == ((signed long int) (var_1_38 - var_1_15)))) && ((((abs (last_1_var_1_26)) * last_1_var_1_48) >= (var_1_22 - var_1_27)) ? ((last_1_var_1_48 <= 3.8) ? (var_1_44 == ((signed long int) (min (last_1_var_1_44 , (min (var_1_37 , var_1_18)))))) : (var_1_44 == ((signed long int) ((last_1_var_1_40 + (last_1_var_1_53 + last_1_var_1_34)) - var_1_18)))) : (var_1_44 == ((signed long int) (var_1_32 - (abs (var_1_20))))))) && ((var_1_29 >= var_1_25) ? ((var_1_3 && ((var_1_6 || var_1_7) || var_1_50)) ? ((((var_1_24 + var_1_23) + var_1_27) > var_1_22) ? (var_1_45 == ((signed short int) (max ((var_1_20 - 128) , var_1_16)))) : (var_1_45 == ((signed short int) ((var_1_9 + (last_1_var_1_45 - var_1_18)) + (min (var_1_39 , 128)))))) : (var_1_45 == ((signed short int) (var_1_18 - var_1_32)))) : 1)) && (((- var_1_23) >= 99.25) ? (var_1_46 == ((signed short int) (min (var_1_15 , ((max (var_1_39 , var_1_44)) - var_1_17))))) : (var_1_3 ? (var_1_46 == ((signed short int) (var_1_38 - var_1_15))) : 1))) && (var_1_47 == ((unsigned char) var_1_7))) && (((var_1_43 * var_1_32) >= var_1_41) ? (var_1_48 == ((double) (var_1_27 + (min (var_1_28 , var_1_49))))) : 1)) && (var_1_3 ? (var_1_50 == ((unsigned char) var_1_51)) : (var_1_50 == ((unsigned char) var_1_6)))) && (var_1_52 == ((unsigned char) 16))) && (((var_1_54 - (var_1_32 + var_1_44)) != (var_1_29 + (var_1_43 - var_1_16))) ? ((var_1_41 != (16 / var_1_32)) ? (var_1_53 == ((unsigned char) var_1_15)) : (var_1_51 ? (var_1_53 == ((unsigned char) var_1_32)) : 1)) : (var_1_53 == ((unsigned char) 4)))
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
