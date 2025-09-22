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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch19525_while.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char var_1_2 = 16;
unsigned char var_1_3 = 64;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 0;
double var_1_6 = 0.04;
double var_1_7 = 24.625;
double var_1_8 = 199.2;
double var_1_9 = 31.5;
unsigned short int var_1_10 = 5;
unsigned short int var_1_11 = 61678;
unsigned short int var_1_12 = 0;
signed short int var_1_13 = 16;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_10 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch19525_while
	if (var_1_2 < var_1_3) {
		var_1_1 = var_1_4;
	} else {
		var_1_1 = (var_1_4 && var_1_5);
	}


	// From: Req4Batch19525_while
	if (var_1_8 <= var_1_9) {
		if (var_1_3 > var_1_2) {
			var_1_13 = 1;
		}
	}


	// From: Req3Batch19525_while
	unsigned char stepLocal_1 = var_1_5;
	if (var_1_7 < var_1_9) {
		if (stepLocal_1 || var_1_1) {
			var_1_10 = var_1_13;
		} else {
			var_1_10 = (((var_1_11 - var_1_13) - last_1_var_1_10) - var_1_12);
		}
	}


	// From: Req2Batch19525_while
	signed short int stepLocal_0 = var_1_13;
	if (var_1_10 <= stepLocal_0) {
		var_1_6 = (max ((min ((var_1_7 + var_1_8) , var_1_9)) , 9.2));
	} else {
		var_1_6 = var_1_8;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 57342);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
}

int property(void) {
	return ((((var_1_2 < var_1_3) ? (var_1_1 == ((unsigned char) var_1_4)) : (var_1_1 == ((unsigned char) (var_1_4 && var_1_5)))) && ((var_1_10 <= var_1_13) ? (var_1_6 == ((double) (max ((min ((var_1_7 + var_1_8) , var_1_9)) , 9.2)))) : (var_1_6 == ((double) var_1_8)))) && ((var_1_7 < var_1_9) ? ((var_1_5 || var_1_1) ? (var_1_10 == ((unsigned short int) var_1_13)) : (var_1_10 == ((unsigned short int) (((var_1_11 - var_1_13) - last_1_var_1_10) - var_1_12)))) : 1)) && ((var_1_8 <= var_1_9) ? ((var_1_3 > var_1_2) ? (var_1_13 == ((signed short int) 1)) : 1) : 1)
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
