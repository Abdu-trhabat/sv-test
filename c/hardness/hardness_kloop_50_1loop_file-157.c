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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15750_1loop.c", 13, "reach_error"); }
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
signed long int var_1_1 = -256;
double var_1_2 = 3.75;
double var_1_3 = 0.6;
signed long int var_1_4 = 200;
signed long int var_1_5 = 100;
signed char var_1_6 = -4;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
signed char var_1_9 = 1;
unsigned char var_1_10 = 8;
double var_1_11 = 10.925;
float var_1_12 = 25.25;
signed short int var_1_13 = 64;
signed short int var_1_14 = 4;
signed char var_1_15 = -4;
signed char var_1_16 = -50;
signed char var_1_17 = 10;
signed char var_1_18 = 32;
signed char var_1_19 = 32;
signed char var_1_20 = 5;
signed long int var_1_21 = -8;
unsigned long int var_1_22 = 4;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_21 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch15750_1loop
	if (var_1_2 < var_1_3) {
		if (var_1_3 <= var_1_2) {
			var_1_1 = ((max (1 , var_1_4)) - var_1_5);
		} else {
			var_1_1 = var_1_4;
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req3Batch15750_1loop
	if (((var_1_5 / var_1_10) < var_1_1) && var_1_7) {
		var_1_9 = 32;
	}


	// From: Req4Batch15750_1loop
	var_1_11 = 199.4;


	// From: Req7Batch15750_1loop
	unsigned char stepLocal_2 = (var_1_5 * var_1_14) <= (~ 100000000);
	signed long int stepLocal_1 = var_1_10 - 10;
	if (var_1_8 || stepLocal_2) {
		if (var_1_14 >= stepLocal_1) {
			if (! var_1_8) {
				var_1_15 = var_1_16;
			}
		}
	} else {
		var_1_15 = (var_1_17 - ((var_1_18 + var_1_19) - var_1_20));
	}


	// From: Req8Batch15750_1loop
	var_1_21 = last_1_var_1_21;


	// From: Req9Batch15750_1loop
	var_1_22 = var_1_18;


	// From: Req2Batch15750_1loop
	if (32.5 >= var_1_11) {
		if (var_1_7 && var_1_8) {
			var_1_6 = -4;
		}
	}


	// From: Req5Batch15750_1loop
	unsigned char stepLocal_0 = (var_1_11 * var_1_3) > var_1_2;
	if (stepLocal_0 && (var_1_10 != var_1_21)) {
		var_1_12 = 32.75f;
	}


	// From: Req6Batch15750_1loop
	if ((- 16.75) <= var_1_11) {
		var_1_13 = (var_1_10 - var_1_14);
	} else {
		var_1_13 = (max (var_1_21 , var_1_10));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 2147483646);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 255);
	assume_abort_if_not(var_1_10 != 0);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 31);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 32);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	return (((((((((var_1_2 < var_1_3) ? ((var_1_3 <= var_1_2) ? (var_1_1 == ((signed long int) ((max (1 , var_1_4)) - var_1_5))) : (var_1_1 == ((signed long int) var_1_4))) : (var_1_1 == ((signed long int) var_1_4))) && ((32.5 >= var_1_11) ? ((var_1_7 && var_1_8) ? (var_1_6 == ((signed char) -4)) : 1) : 1)) && ((((var_1_5 / var_1_10) < var_1_1) && var_1_7) ? (var_1_9 == ((signed char) 32)) : 1)) && (var_1_11 == ((double) 199.4))) && ((((var_1_11 * var_1_3) > var_1_2) && (var_1_10 != var_1_21)) ? (var_1_12 == ((float) 32.75f)) : 1)) && (((- 16.75) <= var_1_11) ? (var_1_13 == ((signed short int) (var_1_10 - var_1_14))) : (var_1_13 == ((signed short int) (max (var_1_21 , var_1_10)))))) && ((var_1_8 || ((var_1_5 * var_1_14) <= (~ 100000000))) ? ((var_1_14 >= (var_1_10 - 10)) ? ((! var_1_8) ? (var_1_15 == ((signed char) var_1_16)) : 1) : 1) : (var_1_15 == ((signed char) (var_1_17 - ((var_1_18 + var_1_19) - var_1_20)))))) && (var_1_21 == ((signed long int) last_1_var_1_21))) && (var_1_22 == ((unsigned long int) var_1_18))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
