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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch192has_floats.c", 13, "reach_error"); }
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
double var_1_1 = 10.0;
unsigned char var_1_3 = 128;
unsigned char var_1_4 = 2;
double var_1_5 = 0.0;
double var_1_6 = 1.0;
double var_1_7 = 1.0;
double var_1_8 = 1.0;
double var_1_9 = 8.0;
double var_1_10 = 5.0;
double var_1_11 = 5.0;
unsigned char var_1_12 = 0;
double var_1_13 = 1.0;
double var_1_14 = 50.0;
signed char var_1_15 = -50;
signed long int var_1_16 = 2;
signed long int var_1_17 = -10000000;
unsigned short int var_1_18 = 5;
unsigned long int var_1_19 = 1;
signed long int var_1_20 = -8;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch192has_floats
	if (var_1_12) {
		var_1_11 = (var_1_7 + (var_1_13 - var_1_14));
	} else {
		if (var_1_9 <= var_1_10) {
			var_1_11 = var_1_10;
		}
	}


	// From: Req4Batch192has_floats
	var_1_18 = 500;


	// From: Req5Batch192has_floats
	var_1_19 = var_1_3;


	// From: Req6Batch192has_floats
	var_1_20 = var_1_3;


	// From: Req1Batch192has_floats
	if (var_1_20 > (var_1_3 - var_1_4)) {
		var_1_1 = (max (var_1_5 , (var_1_6 - 5.0)));
	} else {
		var_1_1 = ((max ((max (var_1_7 , var_1_8)) , var_1_9)) + var_1_10);
	}


	// From: Req3Batch192has_floats
	unsigned char stepLocal_1 = var_1_12;
	signed long int stepLocal_0 = var_1_18 * var_1_17;
	if ((var_1_4 / (max (var_1_3 , var_1_16))) < stepLocal_0) {
		if (((max (var_1_17 , -5)) < var_1_3) || stepLocal_1) {
			var_1_15 = 32;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 127);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483648);
	assume_abort_if_not(var_1_17 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_20 > (var_1_3 - var_1_4)) ? (var_1_1 == ((double) (max (var_1_5 , (var_1_6 - 5.0))))) : (var_1_1 == ((double) ((max ((max (var_1_7 , var_1_8)) , var_1_9)) + var_1_10)))) && (var_1_12 ? (var_1_11 == ((double) (var_1_7 + (var_1_13 - var_1_14)))) : ((var_1_9 <= var_1_10) ? (var_1_11 == ((double) var_1_10)) : 1))) && (((var_1_4 / (max (var_1_3 , var_1_16))) < (var_1_18 * var_1_17)) ? ((((max (var_1_17 , -5)) < var_1_3) || var_1_12) ? (var_1_15 == ((signed char) 32)) : 1) : 1)) && (var_1_18 == ((unsigned short int) 500))) && (var_1_19 == ((unsigned long int) var_1_3))) && (var_1_20 == ((signed long int) var_1_3))
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
