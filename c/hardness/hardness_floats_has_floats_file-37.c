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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch37has_floats.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 8;
unsigned short int var_1_2 = 59049;
unsigned short int var_1_3 = 100;
unsigned short int var_1_4 = 128;
unsigned short int var_1_5 = 4;
unsigned char var_1_6 = 16;
double var_1_7 = 64.0;
signed long int var_1_8 = 256;
double var_1_9 = -500.0;
double var_1_10 = 1.0;
double var_1_11 = 50.0;
unsigned char var_1_12 = 0;
unsigned long int var_1_13 = 3345942428;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned long int var_1_18 = 128;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch37has_floats
	if (((var_1_2 - var_1_3) ^ (var_1_4 * var_1_5)) <= -64) {
		var_1_1 = var_1_6;
	} else {
		var_1_1 = 16;
	}


	// From: Req3Batch37has_floats
	unsigned long int stepLocal_1 = 10u;
	if ((var_1_13 - var_1_1) <= stepLocal_1) {
		var_1_12 = (! var_1_14);
	} else {
		var_1_12 = (var_1_15 || (var_1_16 || var_1_17));
	}


	// From: Req4Batch37has_floats
	signed long int stepLocal_2 = (var_1_3 / var_1_2) + 10;
	if (stepLocal_2 <= var_1_6) {
		var_1_18 = (max ((max (var_1_3 , var_1_6)) , var_1_4));
	} else {
		var_1_18 = var_1_5;
	}


	// From: Req2Batch37has_floats
	unsigned long int stepLocal_0 = (var_1_2 - var_1_18) * var_1_18;
	if (stepLocal_0 <= (-8 / var_1_8)) {
		var_1_7 = var_1_9;
	} else {
		var_1_7 = (var_1_10 - var_1_11);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 32767);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65535);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65535);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 2147483647);
	assume_abort_if_not(var_1_13 <= 4294967295);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_2 - var_1_3) ^ (var_1_4 * var_1_5)) <= -64) ? (var_1_1 == ((unsigned char) var_1_6)) : (var_1_1 == ((unsigned char) 16))) && ((((var_1_2 - var_1_18) * var_1_18) <= (-8 / var_1_8)) ? (var_1_7 == ((double) var_1_9)) : (var_1_7 == ((double) (var_1_10 - var_1_11))))) && (((var_1_13 - var_1_1) <= 10u) ? (var_1_12 == ((unsigned char) (! var_1_14))) : (var_1_12 == ((unsigned char) (var_1_15 || (var_1_16 || var_1_17)))))) && ((((var_1_3 / var_1_2) + 10) <= var_1_6) ? (var_1_18 == ((unsigned long int) (max ((max (var_1_3 , var_1_6)) , var_1_4)))) : (var_1_18 == ((unsigned long int) var_1_5)))
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
