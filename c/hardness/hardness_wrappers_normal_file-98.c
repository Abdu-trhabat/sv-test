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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch98normal.c", 13, "reach_error"); }
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
double var_1_1 = 4.8;
double var_1_2 = 63.5;
double var_1_3 = 9999999.5;
double var_1_4 = 0.6;
signed long int var_1_5 = 0;
signed short int var_1_6 = 25;
signed long int var_1_7 = -1;
double var_1_8 = 4.4;
double var_1_9 = 7.25;
double var_1_10 = 7.5;
double var_1_11 = 2.3;
unsigned long int var_1_12 = 128;
unsigned long int var_1_13 = 4078799264;
unsigned long int var_1_14 = 500;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch98normal
	var_1_1 = (var_1_2 - var_1_3);


	// From: Req2Batch98normal
	signed long int stepLocal_0 = (var_1_5 >> var_1_6) / var_1_7;
	if (8 < stepLocal_0) {
		var_1_4 = (((var_1_8 + var_1_9) + (min (var_1_10 , 1.9))) + (99.125 + var_1_11));
	}


	// From: Req3Batch98normal
	if (var_1_2 < var_1_8) {
		if (((- var_1_5) <= var_1_6) || (var_1_4 < var_1_10)) {
			var_1_12 = (min (var_1_5 , var_1_6));
		} else {
			var_1_12 = (var_1_13 - var_1_5);
		}
	}


	// From: Req4Batch98normal
	if ((min (-128 , var_1_12)) < var_1_13) {
		if (var_1_2 > var_1_10) {
			var_1_14 = (var_1_6 + var_1_5);
		} else {
			var_1_14 = var_1_13;
		}
	} else {
		var_1_14 = var_1_13;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854766000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 30);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -115292.1504606845700e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 1152921.504606845700e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -115292.1504606845700e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 1152921.504606845700e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -230584.3009213691400e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691400e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -230584.3009213691400e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 2147483647);
	assume_abort_if_not(var_1_13 <= 4294967294);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_1 == ((double) (var_1_2 - var_1_3))) && ((8 < ((var_1_5 >> var_1_6) / var_1_7)) ? (var_1_4 == ((double) (((var_1_8 + var_1_9) + (min (var_1_10 , 1.9))) + (99.125 + var_1_11)))) : 1)) && ((var_1_2 < var_1_8) ? ((((- var_1_5) <= var_1_6) || (var_1_4 < var_1_10)) ? (var_1_12 == ((unsigned long int) (min (var_1_5 , var_1_6)))) : (var_1_12 == ((unsigned long int) (var_1_13 - var_1_5)))) : 1)) && (((min (-128 , var_1_12)) < var_1_13) ? ((var_1_2 > var_1_10) ? (var_1_14 == ((unsigned long int) (var_1_6 + var_1_5))) : (var_1_14 == ((unsigned long int) var_1_13))) : (var_1_14 == ((unsigned long int) var_1_13)))
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
