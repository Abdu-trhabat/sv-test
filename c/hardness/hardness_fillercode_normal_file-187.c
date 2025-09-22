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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch187normal.c", 13, "reach_error"); }
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
double var_1_1 = 0.17500000000000004;
unsigned char var_1_2 = 1;
double var_1_5 = 1.6;
double var_1_7 = 31.8;
float var_1_8 = 15.2;
signed char var_1_9 = 1;
signed char var_1_10 = 0;
signed char var_1_11 = 32;
signed char var_1_12 = 16;
unsigned char var_1_13 = 0;
signed short int var_1_14 = -1;
signed short int var_1_15 = 5;
signed long int var_1_16 = 4;
unsigned char var_1_17 = 4;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 32;
float var_1_21 = 0.625;
signed short int var_1_22 = -128;
unsigned short int var_1_23 = 16;
unsigned char var_1_24 = 32;
unsigned char var_1_25 = 1;

// Calibration values

// Last'ed variables
double last_1_var_1_7 = 31.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch187normal
	if (var_1_2) {
		var_1_9 = (max ((max (var_1_10 , var_1_11)) , var_1_12));
	}


	// From: Req4Batch187normal
	signed long int stepLocal_0 = (var_1_10 + 1000000000) / var_1_16;
	if ((var_1_14 - var_1_15) > stepLocal_0) {
		var_1_13 = (var_1_17 + var_1_18);
	} else {
		var_1_13 = (var_1_19 - var_1_20);
	}


	// From: Req5Batch187normal
	signed long int stepLocal_1 = var_1_18 << (1 - 0);
	if (((~ var_1_17) / var_1_19) >= stepLocal_1) {
		var_1_21 = 25.8f;
	} else {
		var_1_21 = var_1_5;
	}


	// From: Req7Batch187normal
	var_1_23 = var_1_18;


	// From: Req8Batch187normal
	var_1_24 = 32;


	// From: Req9Batch187normal
	var_1_25 = var_1_18;


	// From: Req2Batch187normal
	if ((last_1_var_1_7 / var_1_8) < var_1_21) {
		if (last_1_var_1_7 < var_1_5) {
			var_1_7 = var_1_5;
		}
	}


	// From: Req6Batch187normal
	signed long int stepLocal_3 = var_1_25 % (abs (var_1_19));
	signed long int stepLocal_2 = (2 ^ var_1_19) + var_1_16;
	if (stepLocal_3 >= (var_1_24 * var_1_16)) {
		if (stepLocal_2 < var_1_11) {
			var_1_22 = var_1_18;
		}
	}


	// From: Req1Batch187normal
	if (var_1_2) {
		if (var_1_21 != var_1_7) {
			var_1_1 = var_1_5;
		} else {
			if (((- var_1_21) * var_1_7) < var_1_7) {
				var_1_1 = var_1_5;
			} else {
				var_1_1 = 199.4;
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	assume_abort_if_not(var_1_8 != 0.0F);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -1);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 127);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
}

int property(void) {
	return ((((((((var_1_2 ? ((var_1_21 != var_1_7) ? (var_1_1 == ((double) var_1_5)) : ((((- var_1_21) * var_1_7) < var_1_7) ? (var_1_1 == ((double) var_1_5)) : (var_1_1 == ((double) 199.4)))) : 1) && (((last_1_var_1_7 / var_1_8) < var_1_21) ? ((last_1_var_1_7 < var_1_5) ? (var_1_7 == ((double) var_1_5)) : 1) : 1)) && (var_1_2 ? (var_1_9 == ((signed char) (max ((max (var_1_10 , var_1_11)) , var_1_12)))) : 1)) && (((var_1_14 - var_1_15) > ((var_1_10 + 1000000000) / var_1_16)) ? (var_1_13 == ((unsigned char) (var_1_17 + var_1_18))) : (var_1_13 == ((unsigned char) (var_1_19 - var_1_20))))) && ((((~ var_1_17) / var_1_19) >= (var_1_18 << (1 - 0))) ? (var_1_21 == ((float) 25.8f)) : (var_1_21 == ((float) var_1_5)))) && (((var_1_25 % (abs (var_1_19))) >= (var_1_24 * var_1_16)) ? ((((2 ^ var_1_19) + var_1_16) < var_1_11) ? (var_1_22 == ((signed short int) var_1_18)) : 1) : 1)) && (var_1_23 == ((unsigned short int) var_1_18))) && (var_1_24 == ((unsigned char) 32))) && (var_1_25 == ((unsigned char) var_1_18))
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
