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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch550_while.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 10;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 1;
unsigned long int var_1_6 = 5;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 64;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 25;
unsigned short int var_1_14 = 31408;
double var_1_15 = 64.375;
double var_1_16 = 10.85;
double var_1_17 = 128.8;
double var_1_18 = 2.6;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed short int var_1_21 = -64;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_6 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch550_while
	unsigned long int stepLocal_0 = max (last_1_var_1_6 , var_1_4);
	if ((abs (last_1_var_1_6)) <= stepLocal_0) {
		var_1_12 = ((var_1_14 - var_1_5) + (abs (last_1_var_1_6)));
	} else {
		var_1_12 = last_1_var_1_6;
	}


	// From: Req5Batch550_while
	signed long int stepLocal_1 = ~ (var_1_5 * var_1_12);
	if (stepLocal_1 <= var_1_12) {
		var_1_15 = (max ((5.25 - var_1_16) , var_1_17));
	} else {
		var_1_15 = (min ((min (var_1_17 , var_1_16)) , var_1_18));
	}


	// From: Req2Batch550_while
	if (var_1_12 > var_1_4) {
		if ((- var_1_15) < var_1_15) {
			var_1_6 = 10u;
		}
	}


	// From: Req7Batch550_while
	var_1_21 = var_1_10;


	// From: Req1Batch550_while
	if (((- 64) + var_1_6) == var_1_6) {
		var_1_1 = ((abs (var_1_4)) - var_1_5);
	} else {
		var_1_1 = ((min (128 , var_1_4)) - 64);
	}


	// From: Req3Batch550_while
	if (var_1_5 == (var_1_6 / var_1_4)) {
		var_1_9 = (min (var_1_5 , (abs (var_1_4))));
	} else {
		var_1_9 = ((var_1_10 + var_1_11) - var_1_5);
	}


	// From: Req6Batch550_while
	unsigned long int stepLocal_3 = var_1_6;
	unsigned char stepLocal_2 = var_1_4;
	if (stepLocal_2 < var_1_6) {
		if (stepLocal_3 > var_1_12) {
			var_1_19 = var_1_20;
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 63);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 64);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
}

int property(void) {
	return (((((((((- 64) + var_1_6) == var_1_6) ? (var_1_1 == ((unsigned char) ((abs (var_1_4)) - var_1_5))) : (var_1_1 == ((unsigned char) ((min (128 , var_1_4)) - 64)))) && ((var_1_12 > var_1_4) ? (((- var_1_15) < var_1_15) ? (var_1_6 == ((unsigned long int) 10u)) : 1) : 1)) && ((var_1_5 == (var_1_6 / var_1_4)) ? (var_1_9 == ((unsigned char) (min (var_1_5 , (abs (var_1_4)))))) : (var_1_9 == ((unsigned char) ((var_1_10 + var_1_11) - var_1_5))))) && (((abs (last_1_var_1_6)) <= (max (last_1_var_1_6 , var_1_4))) ? (var_1_12 == ((unsigned short int) ((var_1_14 - var_1_5) + (abs (last_1_var_1_6))))) : (var_1_12 == ((unsigned short int) last_1_var_1_6)))) && (((~ (var_1_5 * var_1_12)) <= var_1_12) ? (var_1_15 == ((double) (max ((5.25 - var_1_16) , var_1_17)))) : (var_1_15 == ((double) (min ((min (var_1_17 , var_1_16)) , var_1_18)))))) && ((var_1_4 < var_1_6) ? ((var_1_6 > var_1_12) ? (var_1_19 == ((unsigned char) var_1_20)) : 1) : 1)) && (var_1_21 == ((signed short int) var_1_10))
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
