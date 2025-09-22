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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch1normal.c", 13, "reach_error"); }
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
float var_1_1 = 5.5;
float var_1_4 = 256.2;
unsigned char var_1_5 = 1;
float var_1_6 = -0.25;
signed long int var_1_7 = -8;
signed long int var_1_8 = 1000000;
signed long int var_1_9 = 128;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 100;
unsigned char var_1_12 = 50;
unsigned char var_1_13 = 50;
unsigned char var_1_14 = 5;
signed char var_1_15 = -100;
unsigned long int var_1_16 = 128;
double var_1_17 = -0.4;
double var_1_18 = 128.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch1normal
	var_1_7 = (var_1_8 + var_1_9);


	// From: Req3Batch1normal
	if (var_1_5) {
		var_1_10 = ((var_1_11 - var_1_12) + ((min (var_1_13 , 8)) + (abs (var_1_14))));
	}


	// From: Req5Batch1normal
	signed long int stepLocal_0 = var_1_7;
	if ((min (var_1_8 , var_1_7)) > stepLocal_0) {
		var_1_16 = (min ((max (var_1_13 , var_1_7)) , var_1_12));
	} else {
		var_1_16 = (min (var_1_11 , var_1_13));
	}


	// From: Req6Batch1normal
	var_1_17 = var_1_4;


	// From: Req7Batch1normal
	var_1_18 = var_1_6;


	// From: Req1Batch1normal
	if (var_1_18 <= (- var_1_17)) {
		var_1_1 = (abs (var_1_4));
	} else {
		if (var_1_5) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = var_1_6;
		}
	}


	// From: Req4Batch1normal
	if (var_1_17 < 1.25f) {
		var_1_15 = var_1_13;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -1073741823);
	assume_abort_if_not(var_1_8 <= 1073741823);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -1073741823);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 63);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 64);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_18 <= (- var_1_17)) ? (var_1_1 == ((float) (abs (var_1_4)))) : (var_1_5 ? (var_1_1 == ((float) var_1_4)) : (var_1_1 == ((float) var_1_6)))) && (var_1_7 == ((signed long int) (var_1_8 + var_1_9)))) && (var_1_5 ? (var_1_10 == ((unsigned char) ((var_1_11 - var_1_12) + ((min (var_1_13 , 8)) + (abs (var_1_14)))))) : 1)) && ((var_1_17 < 1.25f) ? (var_1_15 == ((signed char) var_1_13)) : 1)) && (((min (var_1_8 , var_1_7)) > var_1_7) ? (var_1_16 == ((unsigned long int) (min ((max (var_1_13 , var_1_7)) , var_1_12)))) : (var_1_16 == ((unsigned long int) (min (var_1_11 , var_1_13)))))) && (var_1_17 == ((double) var_1_4))) && (var_1_18 == ((double) var_1_6))
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
