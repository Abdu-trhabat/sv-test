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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch169normal.c", 13, "reach_error"); }
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
signed short int var_1_1 = -25;
double var_1_2 = -0.6;
double var_1_3 = 9999999999999.625;
double var_1_4 = 9.2;
signed short int var_1_5 = 5;
signed short int var_1_6 = 1;
unsigned long int var_1_7 = 128;
signed short int var_1_8 = 21123;
signed short int var_1_9 = 2;
double var_1_10 = 31.8;
unsigned char var_1_11 = 0;
double var_1_12 = 15.6;
double var_1_13 = 199.5;
signed long int var_1_14 = 32;
unsigned short int var_1_15 = 25;
signed short int var_1_16 = -8;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch169normal
	if (var_1_2 >= (var_1_3 + var_1_4)) {
		var_1_1 = (var_1_5 - var_1_6);
	}


	// From: Req2Batch169normal
	signed short int stepLocal_0 = var_1_5;
	if (stepLocal_0 >= ((var_1_8 - var_1_9) - var_1_6)) {
		if (var_1_2 == (max (var_1_3 , (- var_1_4)))) {
			var_1_7 = (var_1_6 + var_1_8);
		} else {
			if (var_1_4 >= var_1_3) {
				var_1_7 = var_1_9;
			}
		}
	} else {
		var_1_7 = var_1_6;
	}


	// From: Req4Batch169normal
	var_1_14 = var_1_9;


	// From: Req5Batch169normal
	var_1_15 = var_1_8;


	// From: Req6Batch169normal
	var_1_16 = var_1_5;


	// From: Req3Batch169normal
	if (var_1_6 > var_1_14) {
		if (var_1_11) {
			var_1_10 = ((abs (var_1_12)) - var_1_13);
		} else {
			var_1_10 = var_1_12;
		}
	} else {
		var_1_10 = var_1_13;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 16383);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16384);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_2 >= (var_1_3 + var_1_4)) ? (var_1_1 == ((signed short int) (var_1_5 - var_1_6))) : 1) && ((var_1_5 >= ((var_1_8 - var_1_9) - var_1_6)) ? ((var_1_2 == (max (var_1_3 , (- var_1_4)))) ? (var_1_7 == ((unsigned long int) (var_1_6 + var_1_8))) : ((var_1_4 >= var_1_3) ? (var_1_7 == ((unsigned long int) var_1_9)) : 1)) : (var_1_7 == ((unsigned long int) var_1_6)))) && ((var_1_6 > var_1_14) ? (var_1_11 ? (var_1_10 == ((double) ((abs (var_1_12)) - var_1_13))) : (var_1_10 == ((double) var_1_12))) : (var_1_10 == ((double) var_1_13)))) && (var_1_14 == ((signed long int) var_1_9))) && (var_1_15 == ((unsigned short int) var_1_8))) && (var_1_16 == ((signed short int) var_1_5))
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
