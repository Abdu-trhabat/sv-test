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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch69no_floats.c", 13, "reach_error"); }
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
signed short int var_1_1 = -100;
unsigned long int var_1_2 = 0;
unsigned long int var_1_3 = 8;
unsigned long int var_1_4 = 256;
unsigned long int var_1_5 = 500;
signed short int var_1_6 = -128;
signed long int var_1_7 = -5;
unsigned char var_1_8 = 1;
signed char var_1_9 = -4;
signed short int var_1_10 = -1;
signed short int var_1_11 = 32;
signed long int var_1_12 = 8;
signed short int var_1_13 = 1;
signed char var_1_14 = 1;
signed long int var_1_15 = 10;
signed char var_1_16 = 100;
unsigned long int var_1_17 = 256;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch69no_floats
	unsigned long int stepLocal_1 = var_1_5;
	unsigned long int stepLocal_0 = var_1_5;
	if ((var_1_2 * (min (var_1_3 , var_1_4))) < stepLocal_1) {
		if (stepLocal_0 > var_1_2) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = 4;
		}
	}


	// From: Req3Batch69no_floats
	signed long int stepLocal_4 = var_1_12 >> var_1_13;
	if ((var_1_10 - var_1_11) >= stepLocal_4) {
		if (var_1_8) {
			var_1_9 = (abs (var_1_13 - var_1_14));
		}
	}


	// From: Req4Batch69no_floats
	var_1_15 = 10000000;


	// From: Req5Batch69no_floats
	var_1_16 = var_1_13;


	// From: Req6Batch69no_floats
	var_1_17 = var_1_11;


	// From: Req2Batch69no_floats
	unsigned long int stepLocal_3 = 1u;
	unsigned char stepLocal_2 = var_1_8;
	if (stepLocal_2 || (var_1_2 > (var_1_4 + var_1_3))) {
		var_1_7 = (min (var_1_15 , (min (-200 , var_1_6))));
	} else {
		if (var_1_2 != stepLocal_3) {
			var_1_7 = var_1_15;
		} else {
			var_1_7 = var_1_6;
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
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32767);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 30);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 * (min (var_1_3 , var_1_4))) < var_1_5) ? ((var_1_5 > var_1_2) ? (var_1_1 == ((signed short int) var_1_6)) : (var_1_1 == ((signed short int) 4))) : 1) && ((var_1_8 || (var_1_2 > (var_1_4 + var_1_3))) ? (var_1_7 == ((signed long int) (min (var_1_15 , (min (-200 , var_1_6)))))) : ((var_1_2 != 1u) ? (var_1_7 == ((signed long int) var_1_15)) : (var_1_7 == ((signed long int) var_1_6))))) && (((var_1_10 - var_1_11) >= (var_1_12 >> var_1_13)) ? (var_1_8 ? (var_1_9 == ((signed char) (abs (var_1_13 - var_1_14)))) : 1) : 1)) && (var_1_15 == ((signed long int) 10000000))) && (var_1_16 == ((signed char) var_1_13))) && (var_1_17 == ((unsigned long int) var_1_11))
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
