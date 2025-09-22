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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch2dependencies.c", 13, "reach_error"); }
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
float var_1_1 = 3.95;
unsigned char var_1_2 = 50;
unsigned char var_1_3 = 10;
float var_1_4 = 9999999.8;
float var_1_5 = 8.6;
unsigned long int var_1_6 = 10000;
double var_1_8 = 64.5;
float var_1_10 = 255.25;
float var_1_11 = 7.5;
float var_1_12 = 0.0;
float var_1_13 = 64.8;
double var_1_14 = 127.75;
signed char var_1_15 = 8;
signed char var_1_16 = 32;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
signed short int var_1_20 = -32;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_6 = 10000;
float last_1_var_1_10 = 255.25;
double last_1_var_1_14 = 127.75;
unsigned char last_1_var_1_17 = 0;
signed short int last_1_var_1_20 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch2dependencies
	if (last_1_var_1_6 <= (var_1_16 * last_1_var_1_20)) {
		if ((var_1_5 + last_1_var_1_10) <= 127.025f) {
			var_1_17 = var_1_18;
		} else {
			var_1_17 = var_1_19;
		}
	} else {
		var_1_17 = var_1_19;
	}


	// From: Req6Batch2dependencies
	if (-0.25 < (256.4 - var_1_5)) {
		if (var_1_17 && (var_1_19 && var_1_17)) {
			var_1_20 = var_1_15;
		}
	} else {
		var_1_20 = 1;
	}


	// From: Req2Batch2dependencies
	if (last_1_var_1_17) {
		if ((max (last_1_var_1_14 , (max (var_1_5 , 199.78)))) != (var_1_4 - var_1_8)) {
			if ((var_1_2 != var_1_3) || last_1_var_1_17) {
				var_1_6 = var_1_2;
			} else {
				var_1_6 = 5u;
			}
		} else {
			var_1_6 = var_1_2;
		}
	} else {
		var_1_6 = var_1_2;
	}


	// From: Req4Batch2dependencies
	if ((var_1_15 - (min (0 , var_1_16))) > var_1_6) {
		var_1_14 = var_1_12;
	}


	// From: Req1Batch2dependencies
	if (var_1_6 <= var_1_20) {
		if (var_1_20 > var_1_6) {
			var_1_1 = (var_1_4 - var_1_5);
		} else {
			var_1_1 = var_1_5;
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req3Batch2dependencies
	if ((var_1_5 / var_1_11) >= (var_1_8 - var_1_4)) {
		var_1_10 = (min ((var_1_5 - (var_1_12 - var_1_13)) , var_1_4));
	} else {
		var_1_10 = 4.2f;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 4611686.018427383000e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	return ((((((var_1_6 <= var_1_20) ? ((var_1_20 > var_1_6) ? (var_1_1 == ((float) (var_1_4 - var_1_5))) : (var_1_1 == ((float) var_1_5))) : (var_1_1 == ((float) var_1_4))) && (last_1_var_1_17 ? (((max (last_1_var_1_14 , (max (var_1_5 , 199.78)))) != (var_1_4 - var_1_8)) ? (((var_1_2 != var_1_3) || last_1_var_1_17) ? (var_1_6 == ((unsigned long int) var_1_2)) : (var_1_6 == ((unsigned long int) 5u))) : (var_1_6 == ((unsigned long int) var_1_2))) : (var_1_6 == ((unsigned long int) var_1_2)))) && (((var_1_5 / var_1_11) >= (var_1_8 - var_1_4)) ? (var_1_10 == ((float) (min ((var_1_5 - (var_1_12 - var_1_13)) , var_1_4)))) : (var_1_10 == ((float) 4.2f)))) && (((var_1_15 - (min (0 , var_1_16))) > var_1_6) ? (var_1_14 == ((double) var_1_12)) : 1)) && ((last_1_var_1_6 <= (var_1_16 * last_1_var_1_20)) ? (((var_1_5 + last_1_var_1_10) <= 127.025f) ? (var_1_17 == ((unsigned char) var_1_18)) : (var_1_17 == ((unsigned char) var_1_19))) : (var_1_17 == ((unsigned char) var_1_19)))) && ((-0.25 < (256.4 - var_1_5)) ? ((var_1_17 && (var_1_19 && var_1_17)) ? (var_1_20 == ((signed short int) var_1_15)) : 1) : (var_1_20 == ((signed short int) 1)))
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
