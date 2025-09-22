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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch26100_while.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 1;
unsigned short int var_1_3 = 36007;
unsigned short int var_1_4 = 2;
unsigned short int var_1_5 = 32;
unsigned short int var_1_6 = 128;
unsigned short int var_1_7 = 2;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
unsigned long int var_1_10 = 128;
unsigned short int var_1_11 = 1;
signed char var_1_12 = 50;
signed char var_1_13 = -10;
signed char var_1_14 = 1;
signed char var_1_15 = 0;
signed char var_1_16 = -5;
signed short int var_1_17 = -32;
signed short int var_1_18 = 0;
unsigned short int var_1_19 = 10;
signed char var_1_20 = 2;
signed char var_1_22 = 16;
float var_1_23 = 3.225;
unsigned char var_1_24 = 128;
float var_1_25 = 127.875;
float var_1_26 = 7.6;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 2;
unsigned char var_1_30 = 128;
unsigned char var_1_31 = 0;
double var_1_32 = 2.25;
unsigned char var_1_34 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 1;
unsigned short int last_1_var_1_11 = 1;
unsigned short int last_1_var_1_19 = 10;
unsigned char last_1_var_1_27 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch26100_while
	if (var_1_4 <= last_1_var_1_11) {
		var_1_10 = (var_1_3 + (min (var_1_6 , var_1_7)));
	} else {
		if (last_1_var_1_27) {
			var_1_10 = last_1_var_1_11;
		}
	}


	// From: Req9Batch26100_while
	unsigned long int stepLocal_3 = var_1_10;
	signed long int stepLocal_2 = (var_1_24 - var_1_14) << var_1_7;
	if (var_1_3 < stepLocal_3) {
		if (stepLocal_2 >= var_1_15) {
			var_1_23 = (var_1_25 + var_1_26);
		}
	} else {
		var_1_23 = 15.79f;
	}


	// From: Req10Batch26100_while
	if (last_1_var_1_1 < last_1_var_1_19) {
		var_1_27 = (var_1_28 || (! var_1_9));
	} else {
		if (var_1_14 == var_1_6) {
			var_1_27 = var_1_28;
		} else {
			var_1_27 = 1;
		}
	}


	// From: Req2Batch26100_while
	if (var_1_7 > (var_1_3 - var_1_6)) {
		var_1_8 = (! (! 0));
	} else {
		var_1_8 = (var_1_27 || var_1_9);
	}


	// From: Req7Batch26100_while
	if (var_1_8) {
		var_1_19 = (var_1_4 + var_1_14);
	}


	// From: Req5Batch26100_while
	unsigned long int stepLocal_0 = var_1_10;
	if ((abs (10)) > stepLocal_0) {
		var_1_12 = ((abs (var_1_13)) - var_1_14);
	} else {
		var_1_12 = (var_1_15 + var_1_16);
	}


	// From: Req6Batch26100_while
	unsigned short int stepLocal_1 = var_1_5;
	if (var_1_6 > stepLocal_1) {
		var_1_17 = (var_1_18 + (max (var_1_10 , (max (var_1_16 , var_1_13)))));
	}


	// From: Req8Batch26100_while
	if ((var_1_4 * 1) <= (var_1_18 + var_1_10)) {
		var_1_20 = (var_1_14 - var_1_22);
	}


	// From: Req11Batch26100_while
	var_1_29 = (var_1_30 - var_1_22);


	// From: Req12Batch26100_while
	if ((var_1_23 * var_1_25) < 32.5f) {
		if ((var_1_26 / var_1_32) <= (- var_1_25)) {
			if (var_1_13 != var_1_10) {
				if (var_1_8 && var_1_9) {
					var_1_31 = ((var_1_13 < var_1_19) || (! (var_1_27 && var_1_28)));
				} else {
					var_1_31 = (var_1_28 || var_1_34);
				}
			} else {
				var_1_31 = var_1_9;
			}
		} else {
			var_1_31 = var_1_28;
		}
	} else {
		var_1_31 = var_1_9;
	}


	// From: Req1Batch26100_while
	if (! var_1_31) {
		if (var_1_31) {
			var_1_1 = (var_1_3 - var_1_4);
		} else {
			if (var_1_3 < (var_1_4 / (var_1_5 + var_1_6))) {
				var_1_1 = var_1_7;
			}
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req4Batch26100_while
	if (var_1_6 > var_1_7) {
		if (var_1_4 <= var_1_3) {
			if (var_1_1 <= var_1_4) {
				var_1_11 = (var_1_3 - 16);
			} else {
				var_1_11 = var_1_6;
			}
		} else {
			var_1_11 = var_1_7;
		}
	} else {
		var_1_11 = var_1_7;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 32767);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 32768);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -126);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -63);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= -16383);
	assume_abort_if_not(var_1_18 <= 16383);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 255);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 127);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	assume_abort_if_not(var_1_32 != 0.0F);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_27 = var_1_27;
}

int property(void) {
	return ((((((((((((! var_1_31) ? (var_1_31 ? (var_1_1 == ((unsigned short int) (var_1_3 - var_1_4))) : ((var_1_3 < (var_1_4 / (var_1_5 + var_1_6))) ? (var_1_1 == ((unsigned short int) var_1_7)) : 1)) : (var_1_1 == ((unsigned short int) var_1_7))) && ((var_1_7 > (var_1_3 - var_1_6)) ? (var_1_8 == ((unsigned char) (! (! 0)))) : (var_1_8 == ((unsigned char) (var_1_27 || var_1_9))))) && ((var_1_4 <= last_1_var_1_11) ? (var_1_10 == ((unsigned long int) (var_1_3 + (min (var_1_6 , var_1_7))))) : (last_1_var_1_27 ? (var_1_10 == ((unsigned long int) last_1_var_1_11)) : 1))) && ((var_1_6 > var_1_7) ? ((var_1_4 <= var_1_3) ? ((var_1_1 <= var_1_4) ? (var_1_11 == ((unsigned short int) (var_1_3 - 16))) : (var_1_11 == ((unsigned short int) var_1_6))) : (var_1_11 == ((unsigned short int) var_1_7))) : (var_1_11 == ((unsigned short int) var_1_7)))) && (((abs (10)) > var_1_10) ? (var_1_12 == ((signed char) ((abs (var_1_13)) - var_1_14))) : (var_1_12 == ((signed char) (var_1_15 + var_1_16))))) && ((var_1_6 > var_1_5) ? (var_1_17 == ((signed short int) (var_1_18 + (max (var_1_10 , (max (var_1_16 , var_1_13))))))) : 1)) && (var_1_8 ? (var_1_19 == ((unsigned short int) (var_1_4 + var_1_14))) : 1)) && (((var_1_4 * 1) <= (var_1_18 + var_1_10)) ? (var_1_20 == ((signed char) (var_1_14 - var_1_22))) : 1)) && ((var_1_3 < var_1_10) ? ((((var_1_24 - var_1_14) << var_1_7) >= var_1_15) ? (var_1_23 == ((float) (var_1_25 + var_1_26))) : 1) : (var_1_23 == ((float) 15.79f)))) && ((last_1_var_1_1 < last_1_var_1_19) ? (var_1_27 == ((unsigned char) (var_1_28 || (! var_1_9)))) : ((var_1_14 == var_1_6) ? (var_1_27 == ((unsigned char) var_1_28)) : (var_1_27 == ((unsigned char) 1))))) && (var_1_29 == ((unsigned char) (var_1_30 - var_1_22)))) && (((var_1_23 * var_1_25) < 32.5f) ? (((var_1_26 / var_1_32) <= (- var_1_25)) ? ((var_1_13 != var_1_10) ? ((var_1_8 && var_1_9) ? (var_1_31 == ((unsigned char) ((var_1_13 < var_1_19) || (! (var_1_27 && var_1_28))))) : (var_1_31 == ((unsigned char) (var_1_28 || var_1_34)))) : (var_1_31 == ((unsigned char) var_1_9))) : (var_1_31 == ((unsigned char) var_1_28))) : (var_1_31 == ((unsigned char) var_1_9)))
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
