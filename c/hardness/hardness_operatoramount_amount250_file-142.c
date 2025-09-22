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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch142Amount250.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 32;
unsigned long int var_1_5 = 128;
unsigned long int var_1_6 = 16;
unsigned long int var_1_7 = 256;
unsigned long int var_1_9 = 4062020057;
unsigned long int var_1_10 = 64;
unsigned long int var_1_11 = 50;
float var_1_13 = 128.5;
unsigned short int var_1_14 = 45272;
unsigned short int var_1_15 = 25;
signed long int var_1_16 = -128;
float var_1_17 = 7.6;
float var_1_18 = 499.25;
float var_1_19 = 7.75;
float var_1_20 = 4.09;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 10;
unsigned char var_1_25 = 16;
unsigned char var_1_26 = 2;
unsigned char var_1_27 = 64;
unsigned long int var_1_28 = 1;
unsigned long int var_1_30 = 3677788796;
unsigned long int var_1_31 = 64;
unsigned long int var_1_32 = 2275523034;
signed char var_1_33 = 4;
signed char var_1_34 = 1;
signed char var_1_35 = 16;
signed char var_1_36 = 8;
signed char var_1_37 = -10;
unsigned long int var_1_38 = 16;
unsigned long int var_1_39 = 1423297103;
signed long int var_1_40 = -32;
unsigned long int var_1_42 = 2;
signed long int var_1_44 = 256;
unsigned char var_1_45 = 0;
unsigned char var_1_47 = 1;
unsigned short int var_1_48 = 32;
unsigned short int var_1_49 = 20149;
unsigned short int var_1_50 = 21573;
unsigned short int var_1_51 = 100;
unsigned short int var_1_52 = 10;
unsigned short int var_1_53 = 36515;
unsigned short int var_1_54 = 8;
unsigned short int var_1_55 = 25;
signed long int var_1_56 = 256;
signed long int var_1_57 = 1666690860;
double var_1_58 = 4.766;
signed short int var_1_59 = 16;
signed long int var_1_60 = -16;
unsigned char var_1_61 = 1;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 32;
float last_1_var_1_13 = 128.5;
unsigned long int last_1_var_1_28 = 1;
unsigned long int last_1_var_1_31 = 64;
signed long int last_1_var_1_40 = -32;
unsigned char last_1_var_1_45 = 0;
signed long int last_1_var_1_56 = 256;
signed short int last_1_var_1_59 = 16;
unsigned char last_1_var_1_61 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch142Amount250
	unsigned long int stepLocal_10 = var_1_9 - var_1_25;
	if (last_1_var_1_13 < var_1_17) {
		var_1_31 = (max ((2655204000u - var_1_26) , var_1_25));
	} else {
		if ((last_1_var_1_31 ^ (last_1_var_1_40 | var_1_11)) >= stepLocal_10) {
			var_1_31 = (max (((min (var_1_30 , var_1_32)) - var_1_25) , (var_1_26 + (min (var_1_14 , var_1_11)))));
		}
	}


	// From: Req1Batch142Amount250
	unsigned long int stepLocal_1 = (var_1_9 - var_1_10) - var_1_11;
	unsigned long int stepLocal_0 = last_1_var_1_28;
	if (stepLocal_0 < last_1_var_1_1) {
		if (last_1_var_1_61) {
			var_1_1 = (abs (min ((min (var_1_5 , var_1_6)) , var_1_7)));
		} else {
			var_1_1 = (abs (max (var_1_7 , var_1_5)));
		}
	} else {
		if ((max (last_1_var_1_28 , (last_1_var_1_1 + last_1_var_1_56))) < stepLocal_1) {
			if (last_1_var_1_45) {
				var_1_1 = var_1_7;
			}
		} else {
			var_1_1 = var_1_7;
		}
	}


	// From: Req2Batch142Amount250
	signed long int stepLocal_2 = ~ (var_1_14 - var_1_15);
	if (stepLocal_2 <= (var_1_1 / (min (var_1_9 , var_1_16)))) {
		var_1_13 = ((min (var_1_17 , (var_1_18 + var_1_19))) - var_1_20);
	} else {
		var_1_13 = (var_1_18 + -0.5f);
	}


	// From: Req16Batch142Amount250
	if (var_1_19 >= (max ((var_1_20 - var_1_18) , (var_1_17 + var_1_13)))) {
		if (var_1_9 < (var_1_15 + var_1_16)) {
			var_1_56 = ((var_1_50 + var_1_27) - (max (var_1_53 , (var_1_57 - var_1_14))));
		}
	} else {
		if ((var_1_17 / var_1_58) != var_1_20) {
			var_1_56 = ((max (var_1_53 , (var_1_25 - var_1_14))) + var_1_34);
		} else {
			var_1_56 = -5;
		}
	}


	// From: Req14Batch142Amount250
	unsigned long int stepLocal_24 = var_1_31;
	if (stepLocal_24 < var_1_50) {
		var_1_52 = (min (128 , (min ((var_1_50 + var_1_49) , (var_1_53 - var_1_34)))));
	} else {
		var_1_52 = (max (((var_1_49 + var_1_50) - var_1_54) , (var_1_53 - var_1_27)));
	}


	// From: Req17Batch142Amount250
	var_1_59 = last_1_var_1_59;


	// From: Req18Batch142Amount250
	var_1_60 = var_1_54;


	// From: Req19Batch142Amount250
	var_1_61 = var_1_23;


	// From: Req8Batch142Amount250
	if (var_1_36 > (var_1_31 / var_1_16)) {
		if ((var_1_27 | var_1_34) < var_1_9) {
			if (((abs (var_1_9)) - var_1_59) <= (- 1u)) {
				var_1_38 = ((max (var_1_11 , 8u)) + var_1_59);
			} else {
				var_1_38 = ((var_1_26 + var_1_34) + (min (var_1_59 , (var_1_10 + 64u))));
			}
		}
	} else {
		var_1_38 = (var_1_10 + (var_1_39 - (var_1_27 + var_1_26)));
	}


	// From: Req3Batch142Amount250
	unsigned long int stepLocal_4 = var_1_7;
	unsigned long int stepLocal_3 = var_1_6 * (var_1_10 << var_1_38);
	if (var_1_5 != stepLocal_3) {
		var_1_21 = ((var_1_14 < (var_1_15 << var_1_10)) || var_1_22);
	} else {
		if ((var_1_6 + var_1_16) >= stepLocal_4) {
			if (var_1_20 >= var_1_19) {
				var_1_21 = var_1_23;
			} else {
				var_1_21 = var_1_22;
			}
		}
	}


	// From: Req5Batch142Amount250
	unsigned long int stepLocal_9 = max ((var_1_31 * var_1_1) , (var_1_11 + var_1_38));
	if (! var_1_21) {
		if (128u <= stepLocal_9) {
			var_1_28 = (abs (var_1_38));
		} else {
			var_1_28 = (var_1_30 - var_1_38);
		}
	}


	// From: Req9Batch142Amount250
	unsigned long int stepLocal_18 = (var_1_9 - var_1_42) * var_1_31;
	unsigned char stepLocal_17 = var_1_26;
	unsigned long int stepLocal_16 = var_1_28;
	if (var_1_1 <= stepLocal_17) {
		if (var_1_19 < ((min (var_1_18 , 1.0000000007E9f)) - (min (var_1_20 , var_1_17)))) {
			var_1_40 = ((var_1_35 + var_1_26) + (var_1_14 - 50));
		} else {
			if (stepLocal_16 < var_1_38) {
				if (! var_1_21) {
					var_1_40 = (abs ((min (var_1_14 , var_1_27)) - (abs (var_1_26))));
				} else {
					var_1_40 = ((max (var_1_27 , var_1_14)) + var_1_25);
				}
			} else {
				var_1_40 = var_1_27;
			}
		}
	} else {
		if (var_1_23) {
			var_1_40 = (max (var_1_37 , (min ((var_1_35 + var_1_15) , var_1_27))));
		} else {
			if (var_1_38 > stepLocal_18) {
				var_1_40 = (var_1_10 - var_1_34);
			}
		}
	}


	// From: Req4Batch142Amount250
	unsigned char stepLocal_8 = var_1_26;
	unsigned char stepLocal_7 = var_1_26;
	unsigned long int stepLocal_6 = max (var_1_6 , var_1_38);
	unsigned long int stepLocal_5 = 50u;
	if ((var_1_11 * var_1_14) == stepLocal_5) {
		if (stepLocal_6 <= var_1_7) {
			var_1_24 = var_1_25;
		} else {
			var_1_24 = (var_1_26 + (abs (var_1_27)));
		}
	} else {
		if ((var_1_38 + (min (1 , var_1_6))) < stepLocal_7) {
			if (var_1_16 < stepLocal_8) {
				var_1_24 = var_1_26;
			}
		}
	}


	// From: Req7Batch142Amount250
	signed char stepLocal_15 = var_1_34;
	signed long int stepLocal_14 = var_1_34 - var_1_27;
	unsigned char stepLocal_13 = var_1_27;
	unsigned long int stepLocal_12 = var_1_38;
	signed long int stepLocal_11 = var_1_16;
	if (var_1_32 <= stepLocal_12) {
		if (var_1_22) {
			if (stepLocal_11 == var_1_14) {
				var_1_33 = (min ((8 - var_1_34) , (var_1_35 + 1)));
			} else {
				if (stepLocal_13 >= var_1_25) {
					if (var_1_28 <= stepLocal_15) {
						if (stepLocal_14 != (var_1_25 - var_1_10)) {
							var_1_33 = (var_1_35 + (var_1_36 + var_1_37));
						}
					} else {
						var_1_33 = var_1_36;
					}
				} else {
					var_1_33 = var_1_37;
				}
			}
		} else {
			var_1_33 = var_1_36;
		}
	} else {
		var_1_33 = var_1_35;
	}


	// From: Req10Batch142Amount250
	if (var_1_59 > var_1_1) {
		var_1_44 = (var_1_27 - 100);
	} else {
		var_1_44 = (var_1_34 + var_1_15);
	}


	// From: Req11Batch142Amount250
	signed char stepLocal_19 = var_1_37;
	if ((- var_1_34) > stepLocal_19) {
		var_1_45 = (var_1_22 && var_1_47);
	} else {
		var_1_45 = (var_1_61 && var_1_23);
	}


	// From: Req12Batch142Amount250
	unsigned long int stepLocal_21 = var_1_7 | (var_1_35 / var_1_16);
	unsigned long int stepLocal_20 = var_1_1;
	if (var_1_1 < stepLocal_21) {
		if (var_1_23) {
			var_1_48 = (max (((var_1_49 + var_1_50) - var_1_15) , (var_1_27 + var_1_34)));
		} else {
			if (stepLocal_20 != var_1_26) {
				var_1_48 = (min (((min (100 , var_1_15)) + var_1_44) , var_1_26));
			} else {
				var_1_48 = var_1_15;
			}
		}
	}


	// From: Req13Batch142Amount250
	unsigned long int stepLocal_23 = var_1_31;
	unsigned long int stepLocal_22 = var_1_1 + (var_1_27 % var_1_39);
	if (var_1_44 >= stepLocal_22) {
		if ((var_1_24 - 100) >= stepLocal_23) {
			var_1_51 = (var_1_25 + var_1_34);
		}
	}


	// From: Req15Batch142Amount250
	if (! var_1_45) {
		var_1_55 = var_1_53;
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967294);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 3221225471);
	assume_abort_if_not(var_1_9 <= 4294967295);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1073741824);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65535);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 2147483647);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967294);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -63);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -31);
	assume_abort_if_not(var_1_36 <= 32);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -31);
	assume_abort_if_not(var_1_37 <= 31);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 1073741823);
	assume_abort_if_not(var_1_39 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 2147483647);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 16383);
	assume_abort_if_not(var_1_49 <= 32767);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 16384);
	assume_abort_if_not(var_1_50 <= 32767);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 32767);
	assume_abort_if_not(var_1_53 <= 65534);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 32767);
	var_1_57 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_57 >= 1073741823);
	assume_abort_if_not(var_1_57 <= 2147483646);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= -922337.2036854776000e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
	assume_abort_if_not(var_1_58 != 0.0F);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_61 = var_1_61;
}

int property(void) {
	return (((((((((((((((((((last_1_var_1_28 < last_1_var_1_1) ? (last_1_var_1_61 ? (var_1_1 == ((unsigned long int) (abs (min ((min (var_1_5 , var_1_6)) , var_1_7))))) : (var_1_1 == ((unsigned long int) (abs (max (var_1_7 , var_1_5)))))) : (((max (last_1_var_1_28 , (last_1_var_1_1 + last_1_var_1_56))) < ((var_1_9 - var_1_10) - var_1_11)) ? (last_1_var_1_45 ? (var_1_1 == ((unsigned long int) var_1_7)) : 1) : (var_1_1 == ((unsigned long int) var_1_7)))) && (((~ (var_1_14 - var_1_15)) <= (var_1_1 / (min (var_1_9 , var_1_16)))) ? (var_1_13 == ((float) ((min (var_1_17 , (var_1_18 + var_1_19))) - var_1_20))) : (var_1_13 == ((float) (var_1_18 + -0.5f))))) && ((var_1_5 != (var_1_6 * (var_1_10 << var_1_38))) ? (var_1_21 == ((unsigned char) ((var_1_14 < (var_1_15 << var_1_10)) || var_1_22))) : (((var_1_6 + var_1_16) >= var_1_7) ? ((var_1_20 >= var_1_19) ? (var_1_21 == ((unsigned char) var_1_23)) : (var_1_21 == ((unsigned char) var_1_22))) : 1))) && (((var_1_11 * var_1_14) == 50u) ? (((max (var_1_6 , var_1_38)) <= var_1_7) ? (var_1_24 == ((unsigned char) var_1_25)) : (var_1_24 == ((unsigned char) (var_1_26 + (abs (var_1_27)))))) : (((var_1_38 + (min (1 , var_1_6))) < var_1_26) ? ((var_1_16 < var_1_26) ? (var_1_24 == ((unsigned char) var_1_26)) : 1) : 1))) && ((! var_1_21) ? ((128u <= (max ((var_1_31 * var_1_1) , (var_1_11 + var_1_38)))) ? (var_1_28 == ((unsigned long int) (abs (var_1_38)))) : (var_1_28 == ((unsigned long int) (var_1_30 - var_1_38)))) : 1)) && ((last_1_var_1_13 < var_1_17) ? (var_1_31 == ((unsigned long int) (max ((2655204000u - var_1_26) , var_1_25)))) : (((last_1_var_1_31 ^ (last_1_var_1_40 | var_1_11)) >= (var_1_9 - var_1_25)) ? (var_1_31 == ((unsigned long int) (max (((min (var_1_30 , var_1_32)) - var_1_25) , (var_1_26 + (min (var_1_14 , var_1_11))))))) : 1))) && ((var_1_32 <= var_1_38) ? (var_1_22 ? ((var_1_16 == var_1_14) ? (var_1_33 == ((signed char) (min ((8 - var_1_34) , (var_1_35 + 1))))) : ((var_1_27 >= var_1_25) ? ((var_1_28 <= var_1_34) ? (((var_1_34 - var_1_27) != (var_1_25 - var_1_10)) ? (var_1_33 == ((signed char) (var_1_35 + (var_1_36 + var_1_37)))) : 1) : (var_1_33 == ((signed char) var_1_36))) : (var_1_33 == ((signed char) var_1_37)))) : (var_1_33 == ((signed char) var_1_36))) : (var_1_33 == ((signed char) var_1_35)))) && ((var_1_36 > (var_1_31 / var_1_16)) ? (((var_1_27 | var_1_34) < var_1_9) ? ((((abs (var_1_9)) - var_1_59) <= (- 1u)) ? (var_1_38 == ((unsigned long int) ((max (var_1_11 , 8u)) + var_1_59))) : (var_1_38 == ((unsigned long int) ((var_1_26 + var_1_34) + (min (var_1_59 , (var_1_10 + 64u))))))) : 1) : (var_1_38 == ((unsigned long int) (var_1_10 + (var_1_39 - (var_1_27 + var_1_26))))))) && ((var_1_1 <= var_1_26) ? ((var_1_19 < ((min (var_1_18 , 1.0000000007E9f)) - (min (var_1_20 , var_1_17)))) ? (var_1_40 == ((signed long int) ((var_1_35 + var_1_26) + (var_1_14 - 50)))) : ((var_1_28 < var_1_38) ? ((! var_1_21) ? (var_1_40 == ((signed long int) (abs ((min (var_1_14 , var_1_27)) - (abs (var_1_26)))))) : (var_1_40 == ((signed long int) ((max (var_1_27 , var_1_14)) + var_1_25)))) : (var_1_40 == ((signed long int) var_1_27)))) : (var_1_23 ? (var_1_40 == ((signed long int) (max (var_1_37 , (min ((var_1_35 + var_1_15) , var_1_27)))))) : ((var_1_38 > ((var_1_9 - var_1_42) * var_1_31)) ? (var_1_40 == ((signed long int) (var_1_10 - var_1_34))) : 1)))) && ((var_1_59 > var_1_1) ? (var_1_44 == ((signed long int) (var_1_27 - 100))) : (var_1_44 == ((signed long int) (var_1_34 + var_1_15))))) && (((- var_1_34) > var_1_37) ? (var_1_45 == ((unsigned char) (var_1_22 && var_1_47))) : (var_1_45 == ((unsigned char) (var_1_61 && var_1_23))))) && ((var_1_1 < (var_1_7 | (var_1_35 / var_1_16))) ? (var_1_23 ? (var_1_48 == ((unsigned short int) (max (((var_1_49 + var_1_50) - var_1_15) , (var_1_27 + var_1_34))))) : ((var_1_1 != var_1_26) ? (var_1_48 == ((unsigned short int) (min (((min (100 , var_1_15)) + var_1_44) , var_1_26)))) : (var_1_48 == ((unsigned short int) var_1_15)))) : 1)) && ((var_1_44 >= (var_1_1 + (var_1_27 % var_1_39))) ? (((var_1_24 - 100) >= var_1_31) ? (var_1_51 == ((unsigned short int) (var_1_25 + var_1_34))) : 1) : 1)) && ((var_1_31 < var_1_50) ? (var_1_52 == ((unsigned short int) (min (128 , (min ((var_1_50 + var_1_49) , (var_1_53 - var_1_34))))))) : (var_1_52 == ((unsigned short int) (max (((var_1_49 + var_1_50) - var_1_54) , (var_1_53 - var_1_27))))))) && ((! var_1_45) ? (var_1_55 == ((unsigned short int) var_1_53)) : 1)) && ((var_1_19 >= (max ((var_1_20 - var_1_18) , (var_1_17 + var_1_13)))) ? ((var_1_9 < (var_1_15 + var_1_16)) ? (var_1_56 == ((signed long int) ((var_1_50 + var_1_27) - (max (var_1_53 , (var_1_57 - var_1_14)))))) : 1) : (((var_1_17 / var_1_58) != var_1_20) ? (var_1_56 == ((signed long int) ((max (var_1_53 , (var_1_25 - var_1_14))) + var_1_34))) : (var_1_56 == ((signed long int) -5))))) && (var_1_59 == ((signed short int) last_1_var_1_59))) && (var_1_60 == ((signed long int) var_1_54))) && (var_1_61 == ((unsigned char) var_1_23))
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
