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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch16225_while.c", 13, "reach_error"); }
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
double var_1_1 = -0.25;
double var_1_2 = 0.09999999999999998;
double var_1_3 = 3.4;
double var_1_4 = -0.5;
double var_1_5 = 31.75;
unsigned short int var_1_6 = 8;
unsigned short int var_1_9 = 8;
unsigned short int var_1_10 = 8;
unsigned char var_1_11 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = -0.25;
unsigned char last_1_var_1_11 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch16225_while
	if (last_1_var_1_11) {
		if ((- last_1_var_1_1) > (- var_1_4)) {
			if (var_1_4 < var_1_5) {
				var_1_6 = (var_1_9 + var_1_10);
			} else {
				var_1_6 = var_1_9;
			}
		} else {
			var_1_6 = var_1_9;
		}
	} else {
		var_1_6 = var_1_10;
	}


	// From: Req3Batch16225_while
	unsigned short int stepLocal_0 = var_1_9;
	if (stepLocal_0 >= (- var_1_6)) {
		var_1_11 = ((-32 <= var_1_9) || var_1_13);
	} else {
		var_1_11 = var_1_14;
	}


	// From: Req1Batch16225_while
	if ((min (var_1_2 , 10.3)) >= var_1_3) {
		var_1_1 = (var_1_4 + var_1_5);
	} else {
		var_1_1 = var_1_5;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
}

int property(void) {
	return ((((min (var_1_2 , 10.3)) >= var_1_3) ? (var_1_1 == ((double) (var_1_4 + var_1_5))) : (var_1_1 == ((double) var_1_5))) && (last_1_var_1_11 ? (((- last_1_var_1_1) > (- var_1_4)) ? ((var_1_4 < var_1_5) ? (var_1_6 == ((unsigned short int) (var_1_9 + var_1_10))) : (var_1_6 == ((unsigned short int) var_1_9))) : (var_1_6 == ((unsigned short int) var_1_9))) : (var_1_6 == ((unsigned short int) var_1_10)))) && ((var_1_9 >= (- var_1_6)) ? (var_1_11 == ((unsigned char) ((-32 <= var_1_9) || var_1_13))) : (var_1_11 == ((unsigned char) var_1_14)))
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
