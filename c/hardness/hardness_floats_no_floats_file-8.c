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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch8no_floats.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned long int var_1_2 = 16;
unsigned long int var_1_3 = 4;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 64;
signed long int var_1_9 = -1;
signed long int var_1_10 = 32;
signed long int var_1_11 = 128;
signed long int var_1_12 = -32;
signed long int var_1_13 = 10;
signed long int var_1_14 = -256;
signed long int var_1_15 = 10;
signed long int var_1_16 = -4;
signed long int var_1_17 = -256;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch8no_floats
	if (var_1_2 >= (8u * var_1_3)) {
		var_1_1 = (! (var_1_4 || (var_1_5 || var_1_6)));
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch8no_floats
	unsigned long int stepLocal_1 = 1u;
	signed long int stepLocal_0 = var_1_10;
	if (((var_1_3 * var_1_2) * (var_1_9 - var_1_10)) >= stepLocal_1) {
		if (var_1_3 <= stepLocal_0) {
			var_1_8 = var_1_11;
		} else {
			var_1_8 = 8;
		}
	} else {
		var_1_8 = var_1_11;
	}


	// From: Req3Batch8no_floats
	signed long int stepLocal_4 = 256;
	signed long int stepLocal_3 = var_1_8;
	unsigned long int stepLocal_2 = var_1_3;
	if (var_1_10 < stepLocal_2) {
		if (var_1_2 != stepLocal_3) {
			var_1_12 = (var_1_13 + var_1_14);
		} else {
			var_1_12 = (var_1_15 - 10);
		}
	} else {
		if (stepLocal_4 <= (var_1_11 / var_1_16)) {
			var_1_12 = var_1_17;
		} else {
			var_1_12 = var_1_13;
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
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483647);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483648);
	assume_abort_if_not(var_1_17 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 >= (8u * var_1_3)) ? (var_1_1 == ((unsigned char) (! (var_1_4 || (var_1_5 || var_1_6))))) : (var_1_1 == ((unsigned char) var_1_7))) && ((((var_1_3 * var_1_2) * (var_1_9 - var_1_10)) >= 1u) ? ((var_1_3 <= var_1_10) ? (var_1_8 == ((signed long int) var_1_11)) : (var_1_8 == ((signed long int) 8))) : (var_1_8 == ((signed long int) var_1_11)))) && ((var_1_10 < var_1_3) ? ((var_1_2 != var_1_8) ? (var_1_12 == ((signed long int) (var_1_13 + var_1_14))) : (var_1_12 == ((signed long int) (var_1_15 - 10)))) : ((256 <= (var_1_11 / var_1_16)) ? (var_1_12 == ((signed long int) var_1_17)) : (var_1_12 == ((signed long int) var_1_13))))
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
