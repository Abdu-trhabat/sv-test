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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch132normal.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 0;
signed long int var_1_2 = -2;
double var_1_3 = 9999.5;
unsigned char var_1_4 = 1;
double var_1_5 = 999999.6;
double var_1_6 = 16.6;
double var_1_7 = 0.375;
unsigned short int var_1_8 = 8;
unsigned char var_1_9 = 0;
unsigned short int var_1_10 = 50;
unsigned short int var_1_11 = 256;
signed short int var_1_12 = -5;
signed char var_1_13 = 10;
signed char var_1_14 = 2;
signed char var_1_15 = 2;
signed short int var_1_16 = 31574;
signed char var_1_17 = 64;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch132normal
	if (128 <= var_1_2) {
		var_1_1 = 25;
	}


	// From: Req2Batch132normal
	if (var_1_4) {
		var_1_3 = var_1_5;
	} else {
		var_1_3 = (var_1_6 + var_1_7);
	}


	// From: Req3Batch132normal
	if (var_1_4 || var_1_9) {
		var_1_8 = (abs (min (var_1_10 , var_1_11)));
	} else {
		var_1_8 = var_1_10;
	}


	// From: Req4Batch132normal
	signed long int stepLocal_0 = 1000 - var_1_11;
	if (7.2 < var_1_6) {
		if ((var_1_13 - (var_1_14 + var_1_15)) >= stepLocal_0) {
			var_1_12 = (abs (var_1_14));
		} else {
			var_1_12 = ((max (var_1_13 , var_1_14)) - (var_1_16 - var_1_15));
		}
	}


	// From: Req5Batch132normal
	if (var_1_8 > ((- 128) + var_1_16)) {
		var_1_17 = var_1_15;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 64);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32766);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((128 <= var_1_2) ? (var_1_1 == ((unsigned short int) 25)) : 1) && (var_1_4 ? (var_1_3 == ((double) var_1_5)) : (var_1_3 == ((double) (var_1_6 + var_1_7))))) && ((var_1_4 || var_1_9) ? (var_1_8 == ((unsigned short int) (abs (min (var_1_10 , var_1_11))))) : (var_1_8 == ((unsigned short int) var_1_10)))) && ((7.2 < var_1_6) ? (((var_1_13 - (var_1_14 + var_1_15)) >= (1000 - var_1_11)) ? (var_1_12 == ((signed short int) (abs (var_1_14)))) : (var_1_12 == ((signed short int) ((max (var_1_13 , var_1_14)) - (var_1_16 - var_1_15))))) : 1)) && ((var_1_8 > ((- 128) + var_1_16)) ? (var_1_17 == ((signed char) var_1_15)) : 1)
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
