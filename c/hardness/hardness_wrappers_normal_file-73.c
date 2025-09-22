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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch73normal.c", 13, "reach_error"); }
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
double var_1_1 = 5.5;
unsigned long int var_1_2 = 8;
unsigned long int var_1_3 = 2;
unsigned long int var_1_4 = 10;
unsigned long int var_1_5 = 64;
unsigned char var_1_6 = 1;
double var_1_7 = -0.41;
signed long int var_1_8 = -4;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 4;
signed long int var_1_11 = 1000000;
signed long int var_1_12 = 16;
signed long int var_1_13 = 64;
float var_1_14 = 1.25;
float var_1_15 = 64.5;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 0;
double var_1_18 = 2.6;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch73normal
	unsigned char stepLocal_2 = var_1_9;
	unsigned char stepLocal_1 = (~ var_1_13) <= var_1_11;
	if (var_1_6 && stepLocal_2) {
		var_1_8 = (min (var_1_10 , ((min (64 , var_1_11)) - (var_1_12 + var_1_13))));
	} else {
		if (stepLocal_1 && var_1_6) {
			var_1_8 = var_1_11;
		} else {
			var_1_8 = 32;
		}
	}


	// From: Req3Batch73normal
	unsigned char stepLocal_3 = var_1_11 >= var_1_2;
	if ((var_1_13 <= var_1_12) || stepLocal_3) {
		var_1_14 = (min (var_1_7 , var_1_15));
	} else {
		var_1_14 = var_1_7;
	}


	// From: Req4Batch73normal
	var_1_16 = var_1_17;


	// From: Req5Batch73normal
	var_1_18 = var_1_7;


	// From: Req1Batch73normal
	unsigned long int stepLocal_0 = max (var_1_3 , (var_1_4 + var_1_5));
	if (var_1_2 <= stepLocal_0) {
		if (! var_1_16) {
			var_1_1 = var_1_7;
		} else {
			var_1_1 = 255.375;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483647);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1073741823);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 <= (max (var_1_3 , (var_1_4 + var_1_5)))) ? ((! var_1_16) ? (var_1_1 == ((double) var_1_7)) : (var_1_1 == ((double) 255.375))) : 1) && ((var_1_6 && var_1_9) ? (var_1_8 == ((signed long int) (min (var_1_10 , ((min (64 , var_1_11)) - (var_1_12 + var_1_13)))))) : ((((~ var_1_13) <= var_1_11) && var_1_6) ? (var_1_8 == ((signed long int) var_1_11)) : (var_1_8 == ((signed long int) 32))))) && (((var_1_13 <= var_1_12) || (var_1_11 >= var_1_2)) ? (var_1_14 == ((float) (min (var_1_7 , var_1_15)))) : (var_1_14 == ((float) var_1_7)))) && (var_1_16 == ((unsigned char) var_1_17))) && (var_1_18 == ((double) var_1_7))
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
