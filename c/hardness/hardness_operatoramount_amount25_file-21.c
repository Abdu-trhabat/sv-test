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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch21Amount25.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 32;
unsigned char var_1_2 = 8;
unsigned char var_1_3 = 4;
signed long int var_1_5 = -128;
signed long int var_1_6 = -1000000000;
unsigned char var_1_7 = 1;
signed char var_1_8 = -32;
signed char var_1_9 = -8;
unsigned char var_1_10 = 2;
double var_1_11 = 15.6;
double var_1_12 = 15.4;
double var_1_13 = 32.2;
unsigned char var_1_14 = 5;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch21Amount25
	if ((var_1_2 + (max (var_1_3 , last_1_var_1_1))) < (var_1_5 * var_1_6)) {
		if (var_1_7) {
			var_1_1 = var_1_3;
		}
	} else {
		var_1_1 = var_1_2;
	}


	// From: Req3Batch21Amount25
	signed long int stepLocal_2 = min (var_1_6 , var_1_1);
	unsigned char stepLocal_1 = var_1_7;
	if ((min (var_1_11 , var_1_12)) <= var_1_13) {
		if (stepLocal_1 && (var_1_6 >= var_1_9)) {
			if (var_1_1 <= stepLocal_2) {
				var_1_10 = var_1_14;
			}
		}
	} else {
		var_1_10 = var_1_14;
	}


	// From: Req2Batch21Amount25
	signed long int stepLocal_0 = max ((- var_1_1) , var_1_1);
	if (var_1_10 < stepLocal_0) {
		var_1_8 = (abs (var_1_9));
	} else {
		var_1_8 = var_1_9;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -126);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
}

int property(void) {
	return ((((var_1_2 + (max (var_1_3 , last_1_var_1_1))) < (var_1_5 * var_1_6)) ? (var_1_7 ? (var_1_1 == ((unsigned short int) var_1_3)) : 1) : (var_1_1 == ((unsigned short int) var_1_2))) && ((var_1_10 < (max ((- var_1_1) , var_1_1))) ? (var_1_8 == ((signed char) (abs (var_1_9)))) : (var_1_8 == ((signed char) var_1_9)))) && (((min (var_1_11 , var_1_12)) <= var_1_13) ? ((var_1_7 && (var_1_6 >= var_1_9)) ? ((var_1_1 <= (min (var_1_6 , var_1_1))) ? (var_1_10 == ((unsigned char) var_1_14)) : 1) : 1) : (var_1_10 == ((unsigned char) var_1_14)))
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
