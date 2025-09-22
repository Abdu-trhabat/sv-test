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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch5725_while.c", 13, "reach_error"); }
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
signed long int var_1_1 = 1;
signed long int var_1_2 = -2;
signed long int var_1_3 = 1;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
signed long int var_1_7 = 1;
signed long int var_1_8 = -4;
signed char var_1_9 = 64;
signed char var_1_10 = -4;
signed char var_1_11 = -4;
double var_1_13 = 1.6;
double var_1_14 = 127.75;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch5725_while
	unsigned char stepLocal_0 = var_1_6;
	if (! (var_1_2 >= var_1_3)) {
		if ((var_1_4 || var_1_5) && stepLocal_0) {
			var_1_1 = (min (var_1_7 , var_1_8));
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_8;
	}


	// From: Req2Batch5725_while
	if (var_1_7 > var_1_1) {
		var_1_9 = ((abs (-5)) + var_1_10);
	}


	// From: Req3Batch5725_while
	signed char stepLocal_2 = var_1_9;
	unsigned char stepLocal_1 = var_1_5;
	if (stepLocal_1 || var_1_6) {
		if ((var_1_10 ^ (var_1_1 * var_1_8)) < stepLocal_2) {
			if ((- var_1_13) == var_1_14) {
				var_1_11 = var_1_10;
			} else {
				var_1_11 = 16;
			}
		} else {
			var_1_11 = var_1_10;
		}
	} else {
		var_1_11 = var_1_10;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483647);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483647);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -63);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((! (var_1_2 >= var_1_3)) ? (((var_1_4 || var_1_5) && var_1_6) ? (var_1_1 == ((signed long int) (min (var_1_7 , var_1_8)))) : (var_1_1 == ((signed long int) var_1_8))) : (var_1_1 == ((signed long int) var_1_8))) && ((var_1_7 > var_1_1) ? (var_1_9 == ((signed char) ((abs (-5)) + var_1_10))) : 1)) && ((var_1_5 || var_1_6) ? (((var_1_10 ^ (var_1_1 * var_1_8)) < var_1_9) ? (((- var_1_13) == var_1_14) ? (var_1_11 == ((signed char) var_1_10)) : (var_1_11 == ((signed char) 16))) : (var_1_11 == ((signed char) var_1_10))) : (var_1_11 == ((signed char) var_1_10)))
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
