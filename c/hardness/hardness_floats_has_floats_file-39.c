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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch39has_floats.c", 13, "reach_error"); }
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
signed short int var_1_1 = -5;
signed short int var_1_2 = 0;
signed short int var_1_3 = 1000;
signed short int var_1_4 = 10;
signed short int var_1_5 = 32;
signed long int var_1_6 = 5;
float var_1_7 = 1.0;
unsigned char var_1_9 = 0;
double var_1_10 = 256.0;
signed short int var_1_11 = 1;
double var_1_12 = 50.0;
double var_1_13 = 1000.0;
double var_1_14 = -4.0;
double var_1_15 = 1.0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch39has_floats
	var_1_1 = (((max (16 , 4)) + var_1_2) - (var_1_3 + (min (var_1_4 , var_1_5))));


	// From: Req3Batch39has_floats
	signed short int stepLocal_0 = var_1_3;
	if ((1000000000u >> var_1_11) < stepLocal_0) {
		var_1_10 = (min ((var_1_12 - var_1_13) , (abs (var_1_14))));
	} else {
		if ((- (var_1_14 / var_1_15)) < var_1_7) {
			var_1_10 = var_1_14;
		} else {
			var_1_10 = var_1_12;
		}
	}


	// From: Req2Batch39has_floats
	if (var_1_2 >= var_1_1) {
		if ((abs (var_1_10 + -8.0f)) < var_1_10) {
			if (var_1_9) {
				var_1_6 = var_1_1;
			} else {
				var_1_6 = var_1_3;
			}
		} else {
			var_1_6 = var_1_3;
		}
	} else {
		var_1_6 = var_1_3;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 16383);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 16383);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 31);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((var_1_1 == ((signed short int) (((max (16 , 4)) + var_1_2) - (var_1_3 + (min (var_1_4 , var_1_5)))))) && ((var_1_2 >= var_1_1) ? (((abs (var_1_10 + -8.0f)) < var_1_10) ? (var_1_9 ? (var_1_6 == ((signed long int) var_1_1)) : (var_1_6 == ((signed long int) var_1_3))) : (var_1_6 == ((signed long int) var_1_3))) : (var_1_6 == ((signed long int) var_1_3)))) && (((1000000000u >> var_1_11) < var_1_3) ? (var_1_10 == ((double) (min ((var_1_12 - var_1_13) , (abs (var_1_14)))))) : (((- (var_1_14 / var_1_15)) < var_1_7) ? (var_1_10 == ((double) var_1_14)) : (var_1_10 == ((double) var_1_12))))
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
