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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch28100_while.c", 13, "reach_error"); }
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
float var_1_1 = 64.4;
signed long int var_1_2 = -64;
signed long int var_1_3 = 32;
float var_1_4 = 127.6;
float var_1_5 = 24.8;
double var_1_6 = 999.375;
unsigned char var_1_8 = 8;
unsigned char var_1_9 = 200;
unsigned char var_1_10 = 4;
unsigned char var_1_11 = 4;
unsigned char var_1_12 = 64;
unsigned short int var_1_13 = 100;
unsigned short int var_1_14 = 8;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 1;
double var_1_19 = 8.8;
double var_1_20 = 128.125;
double var_1_21 = 0.0;
double var_1_22 = 0.0;
double var_1_23 = 500.6;
double var_1_24 = 9.5;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 4;
signed long int var_1_27 = 0;
unsigned char var_1_28 = 2;
unsigned char var_1_29 = 32;
unsigned char var_1_30 = 5;
unsigned char var_1_31 = 5;
signed char var_1_32 = 32;

// Calibration values

// Last'ed variables
double last_1_var_1_6 = 999.375;
unsigned short int last_1_var_1_13 = 100;
unsigned char last_1_var_1_17 = 1;
double last_1_var_1_19 = 8.8;
unsigned char last_1_var_1_25 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch28100_while
	if (last_1_var_1_19 >= var_1_5) {
		var_1_25 = ((last_1_var_1_6 > var_1_22) || var_1_18);
	} else {
		var_1_25 = (last_1_var_1_17 || var_1_18);
	}


	// From: Req7Batch28100_while
	if (var_1_10 >= var_1_9) {
		var_1_17 = (! (var_1_16 && (last_1_var_1_25 || var_1_18)));
	} else {
		var_1_17 = var_1_16;
	}


	// From: Req2Batch28100_while
	signed long int stepLocal_2 = var_1_3;
	if (var_1_17) {
		if (var_1_2 > stepLocal_2) {
			if (var_1_4 > (- var_1_5)) {
				var_1_6 = var_1_5;
			} else {
				var_1_6 = var_1_4;
			}
		} else {
			var_1_6 = var_1_4;
		}
	} else {
		var_1_6 = var_1_4;
	}


	// From: Req1Batch28100_while
	signed long int stepLocal_1 = var_1_3;
	signed long int stepLocal_0 = var_1_3;
	if (var_1_2 <= stepLocal_1) {
		if (var_1_2 > stepLocal_0) {
			var_1_1 = (var_1_4 + var_1_5);
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req3Batch28100_while
	if (var_1_25) {
		var_1_8 = (min ((var_1_9 - var_1_10) , var_1_11));
	} else {
		var_1_8 = ((64 + var_1_12) - var_1_10);
	}


	// From: Req4Batch28100_while
	if (((var_1_2 | last_1_var_1_13) * 10u) >= var_1_9) {
		if (var_1_4 < ((var_1_5 * 500.375f) + var_1_1)) {
			var_1_13 = last_1_var_1_13;
		}
	} else {
		var_1_13 = last_1_var_1_13;
	}


	// From: Req5Batch28100_while
	var_1_14 = (var_1_9 + (var_1_10 + var_1_12));


	// From: Req6Batch28100_while
	if ((min (var_1_13 , var_1_11)) > (~ var_1_12)) {
		if (((var_1_4 * var_1_5) != var_1_6) || var_1_17) {
			var_1_15 = var_1_16;
		}
	} else {
		var_1_15 = (! var_1_16);
	}


	// From: Req10Batch28100_while
	signed long int stepLocal_4 = var_1_11 / (min (var_1_12 , var_1_9));
	if (var_1_27 > stepLocal_4) {
		var_1_26 = (max ((var_1_9 - (var_1_12 - var_1_28)) , (max (var_1_29 , var_1_10))));
	} else {
		var_1_26 = ((abs (var_1_9)) - (var_1_12 - var_1_28));
	}


	// From: Req11Batch28100_while
	unsigned char stepLocal_5 = var_1_16;
	if (var_1_25 || stepLocal_5) {
		if (! var_1_15) {
			var_1_30 = (min ((var_1_9 - var_1_12) , (var_1_10 + (min (var_1_28 , var_1_31)))));
		} else {
			var_1_30 = (var_1_9 - var_1_31);
		}
	} else {
		var_1_30 = (var_1_12 + var_1_10);
	}


	// From: Req12Batch28100_while
	var_1_32 = -32;


	// From: Req8Batch28100_while
	unsigned short int stepLocal_3 = var_1_14;
	if (var_1_25) {
		var_1_19 = ((abs (var_1_5 + 999.5)) - var_1_20);
	} else {
		if (stepLocal_3 < var_1_9) {
			var_1_19 = (var_1_20 - (min (var_1_21 , (var_1_23 + var_1_24))));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 127);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 64);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 4611686.018427383000e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 6917529.027641074000e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_25 = var_1_25;
}

int property(void) {
	return ((((((((((((var_1_2 <= var_1_3) ? ((var_1_2 > var_1_3) ? (var_1_1 == ((float) (var_1_4 + var_1_5))) : 1) : (var_1_1 == ((float) var_1_5))) && (var_1_17 ? ((var_1_2 > var_1_3) ? ((var_1_4 > (- var_1_5)) ? (var_1_6 == ((double) var_1_5)) : (var_1_6 == ((double) var_1_4))) : (var_1_6 == ((double) var_1_4))) : (var_1_6 == ((double) var_1_4)))) && (var_1_25 ? (var_1_8 == ((unsigned char) (min ((var_1_9 - var_1_10) , var_1_11)))) : (var_1_8 == ((unsigned char) ((64 + var_1_12) - var_1_10))))) && ((((var_1_2 | last_1_var_1_13) * 10u) >= var_1_9) ? ((var_1_4 < ((var_1_5 * 500.375f) + var_1_1)) ? (var_1_13 == ((unsigned short int) last_1_var_1_13)) : 1) : (var_1_13 == ((unsigned short int) last_1_var_1_13)))) && (var_1_14 == ((unsigned short int) (var_1_9 + (var_1_10 + var_1_12))))) && (((min (var_1_13 , var_1_11)) > (~ var_1_12)) ? ((((var_1_4 * var_1_5) != var_1_6) || var_1_17) ? (var_1_15 == ((unsigned char) var_1_16)) : 1) : (var_1_15 == ((unsigned char) (! var_1_16))))) && ((var_1_10 >= var_1_9) ? (var_1_17 == ((unsigned char) (! (var_1_16 && (last_1_var_1_25 || var_1_18))))) : (var_1_17 == ((unsigned char) var_1_16)))) && (var_1_25 ? (var_1_19 == ((double) ((abs (var_1_5 + 999.5)) - var_1_20))) : ((var_1_14 < var_1_9) ? (var_1_19 == ((double) (var_1_20 - (min (var_1_21 , (var_1_23 + var_1_24)))))) : 1))) && ((last_1_var_1_19 >= var_1_5) ? (var_1_25 == ((unsigned char) ((last_1_var_1_6 > var_1_22) || var_1_18))) : (var_1_25 == ((unsigned char) (last_1_var_1_17 || var_1_18))))) && ((var_1_27 > (var_1_11 / (min (var_1_12 , var_1_9)))) ? (var_1_26 == ((unsigned char) (max ((var_1_9 - (var_1_12 - var_1_28)) , (max (var_1_29 , var_1_10)))))) : (var_1_26 == ((unsigned char) ((abs (var_1_9)) - (var_1_12 - var_1_28)))))) && ((var_1_25 || var_1_16) ? ((! var_1_15) ? (var_1_30 == ((unsigned char) (min ((var_1_9 - var_1_12) , (var_1_10 + (min (var_1_28 , var_1_31))))))) : (var_1_30 == ((unsigned char) (var_1_9 - var_1_31)))) : (var_1_30 == ((unsigned char) (var_1_12 + var_1_10))))) && (var_1_32 == ((signed char) -32))
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
