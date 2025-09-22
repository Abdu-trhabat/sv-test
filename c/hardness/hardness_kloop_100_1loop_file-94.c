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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch94100_1loop.c", 13, "reach_error"); }
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
double var_1_1 = -0.25;
double var_1_2 = -0.125;
double var_1_3 = 127.5;
unsigned char var_1_4 = 4;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 10;
float var_1_7 = -0.2;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed long int var_1_15 = -100000;
signed long int var_1_16 = -4;
signed long int var_1_17 = 4;
signed char var_1_18 = 8;
signed char var_1_19 = 64;
signed char var_1_20 = 1;
unsigned char var_1_21 = 128;
double var_1_22 = 3.6;
unsigned char var_1_23 = 5;
unsigned char var_1_24 = 4;
unsigned char var_1_25 = 1;
unsigned short int var_1_26 = 5;
unsigned long int var_1_27 = 50;
unsigned long int var_1_28 = 5;
unsigned short int var_1_29 = 1;
signed short int var_1_30 = 100;
signed long int var_1_31 = -25;
signed long int var_1_32 = -8;
double var_1_33 = 16.5;

// Calibration values

// Last'ed variables
float last_1_var_1_7 = -0.2;
unsigned char last_1_var_1_9 = 0;
signed long int last_1_var_1_15 = -100000;
signed char last_1_var_1_18 = 8;
unsigned short int last_1_var_1_26 = 5;
unsigned short int last_1_var_1_29 = 1;
double last_1_var_1_33 = 16.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch94100_1loop
	if (last_1_var_1_9 || var_1_14) {
		if (var_1_25 >= (128 + last_1_var_1_29)) {
			if (var_1_24 > var_1_25) {
				if (var_1_25 <= var_1_6) {
					var_1_31 = (min ((var_1_24 - var_1_25) , var_1_17));
				} else {
					var_1_31 = (var_1_16 + var_1_32);
				}
			}
		}
	} else {
		if (last_1_var_1_9) {
			if ((var_1_20 <= 5) && var_1_14) {
				var_1_31 = last_1_var_1_29;
			} else {
				var_1_31 = last_1_var_1_18;
			}
		}
	}


	// From: Req4Batch94100_1loop
	unsigned char stepLocal_2 = var_1_11;
	if (var_1_5) {
		if (stepLocal_2 || var_1_10) {
			if (! (last_1_var_1_7 < var_1_2)) {
				var_1_9 = (var_1_12 || var_1_13);
			} else {
				var_1_9 = (var_1_11 && ((var_1_12 && var_1_13) || (! var_1_14)));
			}
		}
	}


	// From: Req9Batch94100_1loop
	unsigned char stepLocal_4 = var_1_25;
	if (var_1_22 <= (last_1_var_1_7 + last_1_var_1_33)) {
		var_1_29 = 32;
	} else {
		if (stepLocal_4 > last_1_var_1_26) {
			var_1_29 = last_1_var_1_26;
		} else {
			var_1_29 = last_1_var_1_29;
		}
	}


	// From: Req5Batch94100_1loop
	if (var_1_6 >= (var_1_29 >> 4)) {
		var_1_15 = (min ((var_1_29 + var_1_16) , (last_1_var_1_15 + (var_1_6 + var_1_17))));
	}


	// From: Req8Batch94100_1loop
	if ((var_1_25 / (var_1_27 + var_1_28)) > var_1_15) {
		if ((- var_1_31) < var_1_24) {
			var_1_26 = 25;
		} else {
			var_1_26 = last_1_var_1_26;
		}
	} else {
		var_1_26 = var_1_23;
	}


	// From: Req1Batch94100_1loop
	var_1_1 = (min (9.999999999999925E13 , (var_1_2 + (abs (var_1_3)))));


	// From: Req2Batch94100_1loop
	if (var_1_9) {
		if (var_1_3 <= (min (499.25 , 999999.3))) {
			var_1_4 = var_1_6;
		}
	}


	// From: Req7Batch94100_1loop
	if (var_1_3 != (var_1_2 / var_1_22)) {
		var_1_21 = (var_1_23 + (min (var_1_24 , var_1_25)));
	}


	// From: Req10Batch94100_1loop
	unsigned char stepLocal_5 = var_1_9 && var_1_13;
	if ((var_1_19 < var_1_15) || stepLocal_5) {
		var_1_30 = (var_1_25 - (var_1_23 + var_1_15));
	} else {
		var_1_30 = (min (var_1_19 , (var_1_29 - var_1_23)));
	}


	// From: Req12Batch94100_1loop
	var_1_33 = var_1_3;


	// From: Req6Batch94100_1loop
	unsigned char stepLocal_3 = var_1_17 <= var_1_31;
	if (var_1_3 != var_1_33) {
		if (stepLocal_3 && var_1_9) {
			var_1_18 = var_1_19;
		} else {
			var_1_18 = var_1_20;
		}
	} else {
		var_1_18 = var_1_20;
	}


	// From: Req3Batch94100_1loop
	unsigned char stepLocal_1 = var_1_9;
	signed long int stepLocal_0 = var_1_15 * var_1_29;
	if (var_1_6 > stepLocal_0) {
		if ((var_1_6 <= var_1_29) && stepLocal_1) {
			var_1_7 = var_1_3;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -461168.6018427383000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 4611686.018427383000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -461168.6018427383000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427383000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -1073741823);
	assume_abort_if_not(var_1_16 <= 1073741823);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -536870911);
	assume_abort_if_not(var_1_17 <= 536870911);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -127);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -127);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	assume_abort_if_not(var_1_22 != 0.0F);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 2147483648);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -1073741823);
	assume_abort_if_not(var_1_32 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_33 = var_1_33;
}

int property(void) {
	return (((((((((((var_1_1 == ((double) (min (9.999999999999925E13 , (var_1_2 + (abs (var_1_3))))))) && (var_1_9 ? ((var_1_3 <= (min (499.25 , 999999.3))) ? (var_1_4 == ((unsigned char) var_1_6)) : 1) : 1)) && ((var_1_6 > (var_1_15 * var_1_29)) ? (((var_1_6 <= var_1_29) && var_1_9) ? (var_1_7 == ((float) var_1_3)) : 1) : 1)) && (var_1_5 ? ((var_1_11 || var_1_10) ? ((! (last_1_var_1_7 < var_1_2)) ? (var_1_9 == ((unsigned char) (var_1_12 || var_1_13))) : (var_1_9 == ((unsigned char) (var_1_11 && ((var_1_12 && var_1_13) || (! var_1_14)))))) : 1) : 1)) && ((var_1_6 >= (var_1_29 >> 4)) ? (var_1_15 == ((signed long int) (min ((var_1_29 + var_1_16) , (last_1_var_1_15 + (var_1_6 + var_1_17)))))) : 1)) && ((var_1_3 != var_1_33) ? (((var_1_17 <= var_1_31) && var_1_9) ? (var_1_18 == ((signed char) var_1_19)) : (var_1_18 == ((signed char) var_1_20))) : (var_1_18 == ((signed char) var_1_20)))) && ((var_1_3 != (var_1_2 / var_1_22)) ? (var_1_21 == ((unsigned char) (var_1_23 + (min (var_1_24 , var_1_25))))) : 1)) && (((var_1_25 / (var_1_27 + var_1_28)) > var_1_15) ? (((- var_1_31) < var_1_24) ? (var_1_26 == ((unsigned short int) 25)) : (var_1_26 == ((unsigned short int) last_1_var_1_26))) : (var_1_26 == ((unsigned short int) var_1_23)))) && ((var_1_22 <= (last_1_var_1_7 + last_1_var_1_33)) ? (var_1_29 == ((unsigned short int) 32)) : ((var_1_25 > last_1_var_1_26) ? (var_1_29 == ((unsigned short int) last_1_var_1_26)) : (var_1_29 == ((unsigned short int) last_1_var_1_29))))) && (((var_1_19 < var_1_15) || (var_1_9 && var_1_13)) ? (var_1_30 == ((signed short int) (var_1_25 - (var_1_23 + var_1_15)))) : (var_1_30 == ((signed short int) (min (var_1_19 , (var_1_29 - var_1_23))))))) && ((last_1_var_1_9 || var_1_14) ? ((var_1_25 >= (128 + last_1_var_1_29)) ? ((var_1_24 > var_1_25) ? ((var_1_25 <= var_1_6) ? (var_1_31 == ((signed long int) (min ((var_1_24 - var_1_25) , var_1_17)))) : (var_1_31 == ((signed long int) (var_1_16 + var_1_32)))) : 1) : 1) : (last_1_var_1_9 ? (((var_1_20 <= 5) && var_1_14) ? (var_1_31 == ((signed long int) last_1_var_1_29)) : (var_1_31 == ((signed long int) last_1_var_1_18))) : 1))) && (var_1_33 == ((double) var_1_3))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
