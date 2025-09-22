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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch126stepLocals.c", 13, "reach_error"); }
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
double var_1_1 = 100000000000.8;
unsigned char var_1_2 = 0;
double var_1_3 = 5.2;
double var_1_4 = 15.25;
double var_1_5 = 49.25;
signed char var_1_6 = -16;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
signed char var_1_9 = 1;
double var_1_10 = 10000000.2;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 2;
signed long int var_1_13 = 25;
unsigned long int var_1_14 = 32;
signed long int var_1_15 = 128;
unsigned long int var_1_16 = 3753789395;
unsigned long int var_1_17 = 1000000000;
unsigned long int var_1_18 = 16;
signed long int var_1_19 = 128;
double var_1_20 = 500.6;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 10;
double var_1_23 = 0.0;
double var_1_24 = 5.8;
double var_1_25 = 64.375;
double var_1_26 = 1.5;
double var_1_27 = 24.75;
double var_1_28 = 256.5;
unsigned char var_1_29 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch126stepLocals
	if (var_1_2) {
		var_1_1 = var_1_3;
	}


	// From: Req2Batch126stepLocals
	if (var_1_2) {
		var_1_4 = var_1_3;
	} else {
		var_1_4 = (var_1_5 + 7.75);
	}


	// From: Req3Batch126stepLocals
	if (var_1_2) {
		if (var_1_1 <= var_1_5) {
			if (var_1_7 || var_1_8) {
				var_1_6 = var_1_9;
			}
		}
	}


	// From: Req4Batch126stepLocals
	unsigned char stepLocal_0 = (~ var_1_6) > var_1_9;
	if (var_1_8 || stepLocal_0) {
		var_1_10 = var_1_5;
	}


	// From: Req5Batch126stepLocals
	if ((var_1_6 % (128 - var_1_12)) <= var_1_13) {
		var_1_11 = var_1_12;
	}


	// From: Req6Batch126stepLocals
	if (var_1_15 != -10) {
		var_1_14 = ((var_1_16 - (var_1_17 - var_1_12)) - (max (var_1_11 , var_1_18)));
	} else {
		if (-2 >= (var_1_19 / var_1_16)) {
			var_1_14 = (max (var_1_16 , var_1_17));
		}
	}


	// From: Req7Batch126stepLocals
	signed long int stepLocal_1 = (abs (var_1_21)) - var_1_22;
	if (var_1_7) {
		var_1_20 = (max (var_1_3 , var_1_5));
	} else {
		if (var_1_12 <= stepLocal_1) {
			var_1_20 = ((var_1_23 - (min (var_1_24 , var_1_25))) - (max (var_1_26 , (var_1_27 + var_1_28))));
		} else {
			var_1_20 = (7.5 - var_1_23);
		}
	}


	// From: Req8Batch126stepLocals
	var_1_29 = var_1_22;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 126);
	assume_abort_if_not(var_1_12 != 127);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483648);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 3221225470);
	assume_abort_if_not(var_1_16 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 536870911);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483648);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 127);
	assume_abort_if_not(var_1_21 <= 255);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 4611686.018427383000e+12F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 ? (var_1_1 == ((double) var_1_3)) : 1) && (var_1_2 ? (var_1_4 == ((double) var_1_3)) : (var_1_4 == ((double) (var_1_5 + 7.75))))) && (var_1_2 ? ((var_1_1 <= var_1_5) ? ((var_1_7 || var_1_8) ? (var_1_6 == ((signed char) var_1_9)) : 1) : 1) : 1)) && ((var_1_8 || ((~ var_1_6) > var_1_9)) ? (var_1_10 == ((double) var_1_5)) : 1)) && (((var_1_6 % (128 - var_1_12)) <= var_1_13) ? (var_1_11 == ((unsigned char) var_1_12)) : 1)) && ((var_1_15 != -10) ? (var_1_14 == ((unsigned long int) ((var_1_16 - (var_1_17 - var_1_12)) - (max (var_1_11 , var_1_18))))) : ((-2 >= (var_1_19 / var_1_16)) ? (var_1_14 == ((unsigned long int) (max (var_1_16 , var_1_17)))) : 1))) && (var_1_7 ? (var_1_20 == ((double) (max (var_1_3 , var_1_5)))) : ((var_1_12 <= ((abs (var_1_21)) - var_1_22)) ? (var_1_20 == ((double) ((var_1_23 - (min (var_1_24 , var_1_25))) - (max (var_1_26 , (var_1_27 + var_1_28)))))) : (var_1_20 == ((double) (7.5 - var_1_23)))))) && (var_1_29 == ((unsigned char) var_1_22))
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
