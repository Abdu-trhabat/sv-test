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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch117has_floats.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 8;
unsigned char var_1_4 = 0;
unsigned long int var_1_5 = 8;
unsigned long int var_1_6 = 1000;
unsigned long int var_1_7 = 64;
double var_1_8 = 1.0;
unsigned char var_1_9 = 0;
unsigned long int var_1_10 = 200;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed short int var_1_14 = -128;
signed short int var_1_15 = -64;
signed short int var_1_16 = -4;
double var_1_17 = -200.0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_9 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch117has_floats
	if ((var_1_5 >= var_1_6) || last_1_var_1_9) {
		if (last_1_var_1_9) {
			var_1_1 = 4u;
		} else {
			var_1_1 = (max (var_1_7 , 32u));
		}
	}


	// From: Req3Batch117has_floats
	unsigned long int stepLocal_0 = var_1_1 / var_1_10;
	if (stepLocal_0 >= var_1_7) {
		var_1_9 = (var_1_11 && var_1_12);
	} else {
		if (var_1_4) {
			var_1_9 = ((! var_1_12) || (var_1_13 || (! var_1_11)));
		} else {
			var_1_9 = 0;
		}
	}


	// From: Req2Batch117has_floats
	if (var_1_9) {
		var_1_8 = -100.0;
	}


	// From: Req4Batch117has_floats
	unsigned char stepLocal_2 = var_1_9;
	unsigned char stepLocal_1 = var_1_13;
	if (stepLocal_2 || var_1_13) {
		var_1_14 = (max (var_1_15 , var_1_16));
	} else {
		if (stepLocal_1 && (var_1_8 <= var_1_17)) {
			var_1_14 = (min (var_1_16 , var_1_15));
		} else {
			var_1_14 = var_1_16;
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967295);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967294);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 4294967295);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -32767);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= -32767);
	assume_abort_if_not(var_1_16 <= 32766);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
}

int property(void) {
	return (((((var_1_5 >= var_1_6) || last_1_var_1_9) ? (last_1_var_1_9 ? (var_1_1 == ((unsigned long int) 4u)) : (var_1_1 == ((unsigned long int) (max (var_1_7 , 32u))))) : 1) && (var_1_9 ? (var_1_8 == ((double) -100.0)) : 1)) && (((var_1_1 / var_1_10) >= var_1_7) ? (var_1_9 == ((unsigned char) (var_1_11 && var_1_12))) : (var_1_4 ? (var_1_9 == ((unsigned char) ((! var_1_12) || (var_1_13 || (! var_1_11))))) : (var_1_9 == ((unsigned char) 0))))) && ((var_1_9 || var_1_13) ? (var_1_14 == ((signed short int) (max (var_1_15 , var_1_16)))) : ((var_1_13 && (var_1_8 <= var_1_17)) ? (var_1_14 == ((signed short int) (min (var_1_16 , var_1_15)))) : (var_1_14 == ((signed short int) var_1_16))))
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
