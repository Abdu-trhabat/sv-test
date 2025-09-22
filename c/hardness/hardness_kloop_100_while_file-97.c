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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch97100_while.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 4;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
double var_1_4 = 256.2;
double var_1_5 = 0.8;
unsigned long int var_1_6 = 8;
unsigned long int var_1_7 = 2819353023;
unsigned short int var_1_9 = 100;
unsigned short int var_1_10 = 43907;
unsigned short int var_1_11 = 4;
unsigned char var_1_12 = 2;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 4;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 32;
double var_1_17 = 5.725;
double var_1_18 = 10.4;
float var_1_19 = 32.875;
float var_1_20 = 0.0;
float var_1_21 = 64.75;
float var_1_22 = 15.8;
float var_1_23 = 63.4;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 5;
float var_1_28 = 2.8;
signed short int var_1_29 = -256;
signed long int var_1_31 = 10;
signed char var_1_32 = -10;
signed char var_1_33 = 0;
unsigned long int var_1_34 = 128;
unsigned long int var_1_35 = 3697739266;
signed long int var_1_36 = 16;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 1;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_34 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch97100_while
	unsigned char stepLocal_2 = var_1_2;
	unsigned long int stepLocal_1 = var_1_7 - var_1_6;
	unsigned long int stepLocal_0 = var_1_7;
	if (stepLocal_2 && var_1_3) {
		if (var_1_4 == var_1_5) {
			var_1_1 = (var_1_6 + 10u);
		}
	} else {
		if (stepLocal_1 <= (abs (last_1_var_1_34))) {
			if (var_1_5 != var_1_4) {
				if (stepLocal_0 < var_1_6) {
					var_1_1 = var_1_6;
				} else {
					var_1_1 = 8u;
				}
			} else {
				var_1_1 = var_1_6;
			}
		} else {
			var_1_1 = var_1_6;
		}
	}


	// From: Req2Batch97100_while
	unsigned char stepLocal_3 = var_1_3;
	if (var_1_2 || stepLocal_3) {
		if (var_1_4 >= var_1_5) {
			if (! var_1_2) {
				var_1_9 = (var_1_10 - var_1_11);
			}
		} else {
			var_1_9 = var_1_10;
		}
	}


	// From: Req5Batch97100_while
	var_1_24 = (var_1_25 - (var_1_26 + var_1_27));


	// From: Req6Batch97100_while
	unsigned char stepLocal_6 = var_1_16;
	unsigned long int stepLocal_5 = abs (8u);
	if ((var_1_9 ^ var_1_7) >= stepLocal_5) {
		if (var_1_1 < stepLocal_6) {
			var_1_28 = var_1_20;
		}
	} else {
		var_1_28 = var_1_23;
	}


	// From: Req8Batch97100_while
	if (! (2 > (var_1_14 / var_1_31))) {
		var_1_32 = var_1_27;
	} else {
		var_1_32 = (max ((var_1_27 + var_1_33) , var_1_26));
	}


	// From: Req11Batch97100_while
	if (! var_1_3) {
		if (var_1_2 && (var_1_3 || (64u >= var_1_26))) {
			var_1_37 = var_1_38;
		} else {
			var_1_37 = var_1_39;
		}
	}


	// From: Req3Batch97100_while
	if (var_1_37) {
		var_1_12 = (max ((max ((var_1_13 + var_1_14) , var_1_15)) , var_1_16));
	} else {
		if ((var_1_5 * (var_1_4 / var_1_17)) > var_1_18) {
			var_1_12 = var_1_16;
		}
	}


	// From: Req4Batch97100_while
	unsigned long int stepLocal_4 = var_1_7;
	if (stepLocal_4 >= var_1_1) {
		if (! var_1_37) {
			var_1_19 = 63.2f;
		} else {
			var_1_19 = ((max ((var_1_20 - var_1_21) , var_1_22)) - var_1_23);
		}
	} else {
		var_1_19 = (var_1_21 + 100.4f);
	}


	// From: Req9Batch97100_while
	if (! var_1_37) {
		var_1_34 = ((var_1_35 - (var_1_16 + var_1_10)) - var_1_1);
	}


	// From: Req7Batch97100_while
	if ((- var_1_25) <= ((var_1_10 / var_1_31) + (min (var_1_12 , var_1_34)))) {
		if (var_1_2 || var_1_3) {
			var_1_29 = var_1_12;
		}
	} else {
		var_1_29 = var_1_26;
	}


	// From: Req10Batch97100_while
	if ((var_1_1 & var_1_29) > (abs (var_1_10))) {
		var_1_36 = (var_1_27 + (min (var_1_26 , var_1_29)));
	} else {
		if (var_1_37) {
			var_1_36 = (var_1_13 + var_1_10);
		} else {
			var_1_36 = var_1_27;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 2147483647);
	assume_abort_if_not(var_1_7 <= 4294967295);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 4611686.018427383000e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 127);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 64);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	assume_abort_if_not(var_1_31 != 0);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -63);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 3221225470);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_34 = var_1_34;
}

int property(void) {
	return (((((((((((var_1_2 && var_1_3) ? ((var_1_4 == var_1_5) ? (var_1_1 == ((unsigned long int) (var_1_6 + 10u))) : 1) : (((var_1_7 - var_1_6) <= (abs (last_1_var_1_34))) ? ((var_1_5 != var_1_4) ? ((var_1_7 < var_1_6) ? (var_1_1 == ((unsigned long int) var_1_6)) : (var_1_1 == ((unsigned long int) 8u))) : (var_1_1 == ((unsigned long int) var_1_6))) : (var_1_1 == ((unsigned long int) var_1_6)))) && ((var_1_2 || var_1_3) ? ((var_1_4 >= var_1_5) ? ((! var_1_2) ? (var_1_9 == ((unsigned short int) (var_1_10 - var_1_11))) : 1) : (var_1_9 == ((unsigned short int) var_1_10))) : 1)) && (var_1_37 ? (var_1_12 == ((unsigned char) (max ((max ((var_1_13 + var_1_14) , var_1_15)) , var_1_16)))) : (((var_1_5 * (var_1_4 / var_1_17)) > var_1_18) ? (var_1_12 == ((unsigned char) var_1_16)) : 1))) && ((var_1_7 >= var_1_1) ? ((! var_1_37) ? (var_1_19 == ((float) 63.2f)) : (var_1_19 == ((float) ((max ((var_1_20 - var_1_21) , var_1_22)) - var_1_23)))) : (var_1_19 == ((float) (var_1_21 + 100.4f))))) && (var_1_24 == ((unsigned char) (var_1_25 - (var_1_26 + var_1_27))))) && (((var_1_9 ^ var_1_7) >= (abs (8u))) ? ((var_1_1 < var_1_16) ? (var_1_28 == ((float) var_1_20)) : 1) : (var_1_28 == ((float) var_1_23)))) && (((- var_1_25) <= ((var_1_10 / var_1_31) + (min (var_1_12 , var_1_34)))) ? ((var_1_2 || var_1_3) ? (var_1_29 == ((signed short int) var_1_12)) : 1) : (var_1_29 == ((signed short int) var_1_26)))) && ((! (2 > (var_1_14 / var_1_31))) ? (var_1_32 == ((signed char) var_1_27)) : (var_1_32 == ((signed char) (max ((var_1_27 + var_1_33) , var_1_26)))))) && ((! var_1_37) ? (var_1_34 == ((unsigned long int) ((var_1_35 - (var_1_16 + var_1_10)) - var_1_1))) : 1)) && (((var_1_1 & var_1_29) > (abs (var_1_10))) ? (var_1_36 == ((signed long int) (var_1_27 + (min (var_1_26 , var_1_29))))) : (var_1_37 ? (var_1_36 == ((signed long int) (var_1_13 + var_1_10))) : (var_1_36 == ((signed long int) var_1_27))))) && ((! var_1_3) ? ((var_1_2 && (var_1_3 || (64u >= var_1_26))) ? (var_1_37 == ((unsigned char) var_1_38)) : (var_1_37 == ((unsigned char) var_1_39))) : 1)
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
