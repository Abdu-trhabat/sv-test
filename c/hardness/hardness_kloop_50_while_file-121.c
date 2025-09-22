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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12150_while.c", 13, "reach_error"); }
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
signed char var_1_1 = 1;
double var_1_2 = 99.5;
double var_1_3 = 128.625;
double var_1_4 = 0.6;
double var_1_5 = 15.7;
double var_1_6 = 16.5;
double var_1_7 = 24.5;
unsigned char var_1_8 = 0;
signed char var_1_9 = 100;
signed long int var_1_10 = 64;
signed long int var_1_11 = 64;
signed long int var_1_12 = 25;
signed long int var_1_13 = 1537575239;
signed long int var_1_14 = 100;
signed long int var_1_15 = 128;
signed char var_1_16 = 32;
signed char var_1_17 = -4;
signed char var_1_18 = 16;
signed char var_1_19 = -1;
signed char var_1_20 = 8;
signed char var_1_21 = 32;
signed short int var_1_22 = 25;
unsigned short int var_1_23 = 16;
float var_1_24 = 7.5;
float var_1_25 = 1.75;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;

// Calibration values

// Last'ed variables
signed char last_1_var_1_16 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch12150_while
	if (var_1_5 < var_1_2) {
		var_1_10 = (min ((var_1_11 - var_1_12) , last_1_var_1_16));
	} else {
		var_1_10 = (var_1_12 - (var_1_13 - (max (var_1_14 , var_1_15))));
	}


	// From: Req4Batch12150_while
	signed long int stepLocal_0 = var_1_11;
	if (var_1_13 == stepLocal_0) {
		var_1_17 = ((min ((var_1_18 + 50) , var_1_19)) - (var_1_20 + var_1_21));
	} else {
		var_1_17 = var_1_20;
	}


	// From: Req6Batch12150_while
	if (var_1_5 >= var_1_3) {
		var_1_23 = var_1_21;
	} else {
		var_1_23 = (max (var_1_18 , var_1_21));
	}


	// From: Req7Batch12150_while
	var_1_24 = (min (4.4f , var_1_25));


	// From: Req8Batch12150_while
	if (var_1_15 <= (max (-5 , var_1_10))) {
		var_1_26 = (var_1_8 || (var_1_27 && var_1_28));
	} else {
		if (var_1_27) {
			var_1_26 = var_1_29;
		} else {
			var_1_26 = var_1_28;
		}
	}


	// From: Req1Batch12150_while
	if ((var_1_2 / (min (var_1_3 , var_1_4))) <= (var_1_5 / (min (var_1_6 , var_1_7)))) {
		if (var_1_26) {
			var_1_1 = var_1_9;
		} else {
			var_1_1 = 64;
		}
	} else {
		var_1_1 = var_1_9;
	}


	// From: Req5Batch12150_while
	if (var_1_26) {
		var_1_22 = (min ((var_1_18 - var_1_20) , (var_1_19 + var_1_9)));
	} else {
		var_1_22 = 4;
	}


	// From: Req3Batch12150_while
	if (var_1_17 < var_1_10) {
		var_1_16 = var_1_9;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	assume_abort_if_not(var_1_4 != 0.0F);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(var_1_6 != 0.0F);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	assume_abort_if_not(var_1_7 != 0.0F);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 1073741823);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1073741823);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
}

int property(void) {
	return (((((((((var_1_2 / (min (var_1_3 , var_1_4))) <= (var_1_5 / (min (var_1_6 , var_1_7)))) ? (var_1_26 ? (var_1_1 == ((signed char) var_1_9)) : (var_1_1 == ((signed char) 64))) : (var_1_1 == ((signed char) var_1_9))) && ((var_1_5 < var_1_2) ? (var_1_10 == ((signed long int) (min ((var_1_11 - var_1_12) , last_1_var_1_16)))) : (var_1_10 == ((signed long int) (var_1_12 - (var_1_13 - (max (var_1_14 , var_1_15)))))))) && ((var_1_17 < var_1_10) ? (var_1_16 == ((signed char) var_1_9)) : 1)) && ((var_1_13 == var_1_11) ? (var_1_17 == ((signed char) ((min ((var_1_18 + 50) , var_1_19)) - (var_1_20 + var_1_21)))) : (var_1_17 == ((signed char) var_1_20)))) && (var_1_26 ? (var_1_22 == ((signed short int) (min ((var_1_18 - var_1_20) , (var_1_19 + var_1_9))))) : (var_1_22 == ((signed short int) 4)))) && ((var_1_5 >= var_1_3) ? (var_1_23 == ((unsigned short int) var_1_21)) : (var_1_23 == ((unsigned short int) (max (var_1_18 , var_1_21)))))) && (var_1_24 == ((float) (min (4.4f , var_1_25))))) && ((var_1_15 <= (max (-5 , var_1_10))) ? (var_1_26 == ((unsigned char) (var_1_8 || (var_1_27 && var_1_28)))) : (var_1_27 ? (var_1_26 == ((unsigned char) var_1_29)) : (var_1_26 == ((unsigned char) var_1_28))))
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
