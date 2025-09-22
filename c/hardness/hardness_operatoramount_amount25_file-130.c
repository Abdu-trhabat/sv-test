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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch130Amount25.c", 13, "reach_error"); }
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
signed char var_1_1 = -128;
signed long int var_1_2 = 256;
signed long int var_1_3 = 0;
signed long int var_1_4 = 4;
signed long int var_1_5 = 16;
signed char var_1_6 = -16;
signed short int var_1_8 = -200;
double var_1_9 = 15.75;
double var_1_10 = 16.7;
double var_1_11 = 255.8;
unsigned short int var_1_12 = 16;
signed char var_1_13 = -50;
signed char var_1_14 = 8;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch130Amount25
	signed long int stepLocal_2 = (var_1_5 / var_1_13) / var_1_14;
	if (stepLocal_2 < 100) {
		var_1_12 = 100;
	}


	// From: Req4Batch130Amount25
	signed long int stepLocal_3 = (var_1_3 * var_1_12) + var_1_5;
	if (var_1_13 > stepLocal_3) {
		var_1_15 = var_1_16;
	}


	// From: Req1Batch130Amount25
	signed long int stepLocal_0 = var_1_2 & var_1_3;
	if (stepLocal_0 <= (var_1_4 / (min (-25 , var_1_5)))) {
		var_1_1 = var_1_6;
	} else {
		if (var_1_15) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = -5;
		}
	}


	// From: Req2Batch130Amount25
	unsigned char stepLocal_1 = (var_1_9 + var_1_10) >= var_1_11;
	if ((var_1_5 > var_1_1) || stepLocal_1) {
		var_1_8 = var_1_1;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -127);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -128);
	assume_abort_if_not(var_1_13 <= 127);
	assume_abort_if_not(var_1_13 != 0);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -128);
	assume_abort_if_not(var_1_14 <= 127);
	assume_abort_if_not(var_1_14 != 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 & var_1_3) <= (var_1_4 / (min (-25 , var_1_5)))) ? (var_1_1 == ((signed char) var_1_6)) : (var_1_15 ? (var_1_1 == ((signed char) var_1_6)) : (var_1_1 == ((signed char) -5)))) && (((var_1_5 > var_1_1) || ((var_1_9 + var_1_10) >= var_1_11)) ? (var_1_8 == ((signed short int) var_1_1)) : 1)) && ((((var_1_5 / var_1_13) / var_1_14) < 100) ? (var_1_12 == ((unsigned short int) 100)) : 1)) && ((var_1_13 > ((var_1_3 * var_1_12) + var_1_5)) ? (var_1_15 == ((unsigned char) var_1_16)) : 1)
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
