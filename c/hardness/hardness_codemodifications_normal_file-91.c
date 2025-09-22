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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch91normal.c", 13, "reach_error"); }
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
signed short int var_1_1 = -64;
signed char var_1_2 = -128;
signed char var_1_3 = -8;
signed char var_1_4 = 4;
signed short int var_1_5 = 8;
signed short int var_1_6 = 8;
signed short int var_1_7 = 5;
signed short int var_1_8 = 0;
signed char var_1_9 = 5;
unsigned char var_1_10 = 0;
signed char var_1_11 = 16;
signed long int var_1_12 = -10;
double var_1_13 = 100000000.8;
double var_1_14 = 1.625;
double var_1_15 = 5.2;
signed long int var_1_16 = 0;
unsigned long int var_1_17 = 8;
unsigned long int var_1_18 = 3376752988;
double var_1_19 = 1000.925;
double var_1_20 = 15.6;
double var_1_21 = 15.5;
double var_1_22 = 3.5;
signed short int var_1_23 = -32;
signed short int var_1_24 = -100;
signed long int var_1_25 = 10;
signed short int var_1_26 = -50;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch91normal
	if (var_1_2 == var_1_3) {
		if (var_1_3 <= (max (var_1_2 , var_1_4))) {
			var_1_1 = (var_1_3 + (min ((var_1_5 - var_1_6) , (var_1_7 - var_1_8))));
		} else {
			var_1_1 = (min ((var_1_8 - var_1_6) , ((var_1_7 - var_1_5) + -256)));
		}
	}


	// From: Req2Batch91normal
	if (var_1_10) {
		var_1_9 = var_1_11;
	} else {
		if (var_1_7 <= (var_1_6 << var_1_11)) {
			if (var_1_2 < var_1_5) {
				var_1_9 = var_1_11;
			}
		} else {
			var_1_9 = var_1_11;
		}
	}


	// From: Req3Batch91normal
	if ((max (var_1_13 , (var_1_14 + var_1_15))) <= 31.5) {
		if (var_1_8 != var_1_9) {
			var_1_12 = var_1_1;
		} else {
			var_1_12 = var_1_7;
		}
	} else {
		var_1_12 = var_1_11;
	}


	// From: Req4Batch91normal
	var_1_16 = (max (var_1_6 , (var_1_8 - 8)));


	// From: Req5Batch91normal
	var_1_17 = (var_1_18 - var_1_7);


	// From: Req6Batch91normal
	if (var_1_4 < var_1_3) {
		var_1_19 = ((var_1_20 + 128.8) + var_1_21);
	} else {
		if (var_1_21 <= var_1_22) {
			var_1_19 = var_1_20;
		}
	}


	// From: Req7Batch91normal
	var_1_23 = var_1_3;


	// From: Req8Batch91normal
	var_1_24 = var_1_7;


	// From: Req9Batch91normal
	var_1_25 = var_1_6;


	// From: Req10Batch91normal
	var_1_26 = var_1_5;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -128);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 2147483647);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -230584.3009213691400e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691400e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((((var_1_2 == var_1_3) ? ((var_1_3 <= (max (var_1_2 , var_1_4))) ? (var_1_1 == ((signed short int) (var_1_3 + (min ((var_1_5 - var_1_6) , (var_1_7 - var_1_8)))))) : (var_1_1 == ((signed short int) (min ((var_1_8 - var_1_6) , ((var_1_7 - var_1_5) + -256)))))) : 1) && (var_1_10 ? (var_1_9 == ((signed char) var_1_11)) : ((var_1_7 <= (var_1_6 << var_1_11)) ? ((var_1_2 < var_1_5) ? (var_1_9 == ((signed char) var_1_11)) : 1) : (var_1_9 == ((signed char) var_1_11))))) && (((max (var_1_13 , (var_1_14 + var_1_15))) <= 31.5) ? ((var_1_8 != var_1_9) ? (var_1_12 == ((signed long int) var_1_1)) : (var_1_12 == ((signed long int) var_1_7))) : (var_1_12 == ((signed long int) var_1_11)))) && (var_1_16 == ((signed long int) (max (var_1_6 , (var_1_8 - 8)))))) && (var_1_17 == ((unsigned long int) (var_1_18 - var_1_7)))) && ((var_1_4 < var_1_3) ? (var_1_19 == ((double) ((var_1_20 + 128.8) + var_1_21))) : ((var_1_21 <= var_1_22) ? (var_1_19 == ((double) var_1_20)) : 1))) && (var_1_23 == ((signed short int) var_1_3))) && (var_1_24 == ((signed short int) var_1_7))) && (var_1_25 == ((signed long int) var_1_6))) && (var_1_26 == ((signed short int) var_1_5))
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
