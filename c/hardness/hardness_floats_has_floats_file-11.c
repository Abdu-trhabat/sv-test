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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch11has_floats.c", 13, "reach_error"); }
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
signed char var_1_1 = -16;
double var_1_2 = 25.0;
double var_1_3 = 16.0;
double var_1_4 = 25.0;
signed char var_1_7 = 32;
float var_1_8 = 16.0;
unsigned short int var_1_9 = 53793;
unsigned short int var_1_10 = 32;
signed short int var_1_12 = -32;
signed short int var_1_13 = 32;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
signed long int var_1_16 = 0;
double var_1_17 = -128.0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch11has_floats
	var_1_12 = (abs (32 - var_1_13));


	// From: Req5Batch11has_floats
	var_1_16 = var_1_10;


	// From: Req6Batch11has_floats
	var_1_17 = var_1_4;


	// From: Req4Batch11has_floats
	if (((var_1_4 - var_1_3) * var_1_2) >= var_1_17) {
		var_1_14 = var_1_15;
	}


	// From: Req1Batch11has_floats
	unsigned char stepLocal_0 = (var_1_17 + var_1_3) >= var_1_2;
	if ((var_1_2 - (var_1_3 + var_1_4)) < var_1_17) {
		if (var_1_14 || stepLocal_0) {
			var_1_1 = var_1_7;
		} else {
			var_1_1 = 4;
		}
	}


	// From: Req2Batch11has_floats
	if ((var_1_9 - var_1_10) > var_1_1) {
		var_1_8 = var_1_3;
	} else {
		if ((var_1_14 || (var_1_17 > var_1_4)) || var_1_14) {
			var_1_8 = var_1_4;
		} else {
			var_1_8 = var_1_3;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427388000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427388000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65535);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 - (var_1_3 + var_1_4)) < var_1_17) ? ((var_1_14 || ((var_1_17 + var_1_3) >= var_1_2)) ? (var_1_1 == ((signed char) var_1_7)) : (var_1_1 == ((signed char) 4))) : 1) && (((var_1_9 - var_1_10) > var_1_1) ? (var_1_8 == ((float) var_1_3)) : (((var_1_14 || (var_1_17 > var_1_4)) || var_1_14) ? (var_1_8 == ((float) var_1_4)) : (var_1_8 == ((float) var_1_3))))) && (var_1_12 == ((signed short int) (abs (32 - var_1_13))))) && ((((var_1_4 - var_1_3) * var_1_2) >= var_1_17) ? (var_1_14 == ((unsigned char) var_1_15)) : 1)) && (var_1_16 == ((signed long int) var_1_10))) && (var_1_17 == ((double) var_1_4))
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
