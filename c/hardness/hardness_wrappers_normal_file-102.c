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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch102normal.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 256;
double var_1_2 = 9999999.6;
double var_1_3 = 9999999999999.6;
unsigned long int var_1_6 = 4;
signed long int var_1_7 = 5;
unsigned long int var_1_9 = 2796236537;
unsigned long int var_1_10 = 64;
signed long int var_1_11 = 1656367899;
signed long int var_1_12 = 10000;
double var_1_13 = 100000000000.825;
unsigned short int var_1_14 = 64;
double var_1_15 = 31.8;
signed long int var_1_16 = 100;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
signed long int var_1_19 = 1;

// Calibration values

// Last'ed variables
double last_1_var_1_13 = 100000000000.825;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch102normal
	if (((var_1_2 - var_1_3) * last_1_var_1_13) <= last_1_var_1_13) {
		var_1_1 = (abs (var_1_6));
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req3Batch102normal
	unsigned long int stepLocal_1 = (60423 - var_1_14) | var_1_1;
	unsigned long int stepLocal_0 = var_1_6;
	if (stepLocal_1 <= (abs (var_1_10))) {
		if (var_1_9 != stepLocal_0) {
			var_1_13 = ((31.5 - var_1_15) + 63.3);
		} else {
			var_1_13 = var_1_15;
		}
	}


	// From: Req2Batch102normal
	if (var_1_1 < (var_1_1 & (var_1_9 - var_1_10))) {
		var_1_7 = (min (((var_1_11 - 128) - 2) , var_1_12));
	} else {
		var_1_7 = var_1_12;
	}


	// From: Req4Batch102normal
	var_1_16 = var_1_12;


	// From: Req5Batch102normal
	var_1_17 = var_1_18;


	// From: Req6Batch102normal
	var_1_19 = var_1_11;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967295);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 1073741822);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483647);
	assume_abort_if_not(var_1_12 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_13 = var_1_13;
}

int property(void) {
	return ((((((((var_1_2 - var_1_3) * last_1_var_1_13) <= last_1_var_1_13) ? (var_1_1 == ((unsigned long int) (abs (var_1_6)))) : (var_1_1 == ((unsigned long int) var_1_6))) && ((var_1_1 < (var_1_1 & (var_1_9 - var_1_10))) ? (var_1_7 == ((signed long int) (min (((var_1_11 - 128) - 2) , var_1_12)))) : (var_1_7 == ((signed long int) var_1_12)))) && ((((60423 - var_1_14) | var_1_1) <= (abs (var_1_10))) ? ((var_1_9 != var_1_6) ? (var_1_13 == ((double) ((31.5 - var_1_15) + 63.3))) : (var_1_13 == ((double) var_1_15))) : 1)) && (var_1_16 == ((signed long int) var_1_12))) && (var_1_17 == ((unsigned char) var_1_18))) && (var_1_19 == ((signed long int) var_1_11))
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
