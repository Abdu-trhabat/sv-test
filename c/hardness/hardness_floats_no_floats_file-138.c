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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch138no_floats.c", 13, "reach_error"); }
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
signed char var_1_2 = 8;
signed char var_1_3 = -4;
unsigned short int var_1_4 = 5;
unsigned short int var_1_5 = 55712;
unsigned short int var_1_6 = 4;
signed char var_1_7 = 0;
unsigned char var_1_8 = 1;
signed char var_1_9 = -16;
signed long int var_1_10 = 25;
signed char var_1_11 = 4;
signed char var_1_12 = -64;
signed long int var_1_13 = 5;
signed long int var_1_14 = 0;
signed long int var_1_15 = 8;
signed long int var_1_16 = -128;
signed long int var_1_17 = -1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch138no_floats
	signed char stepLocal_0 = var_1_3;
	if (var_1_2 >= stepLocal_0) {
		var_1_1 = (max (var_1_4 , (var_1_5 - (max (100 , var_1_6)))));
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch138no_floats
	if (var_1_8 && (-1 >= 5)) {
		if (var_1_4 >= var_1_1) {
			var_1_7 = var_1_9;
		} else {
			var_1_7 = 64;
		}
	} else {
		var_1_7 = var_1_9;
	}


	// From: Req3Batch138no_floats
	signed long int stepLocal_1 = 10;
	if ((var_1_1 / (max (var_1_11 , var_1_12))) <= stepLocal_1) {
		var_1_10 = (((min (var_1_13 , var_1_14)) - var_1_15) + var_1_16);
	} else {
		if (var_1_14 > (25 - (min (5 , var_1_15)))) {
			var_1_10 = (min (var_1_15 , 1));
		}
	}


	// From: Req4Batch138no_floats
	var_1_17 = 100;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -128);
	assume_abort_if_not(var_1_11 <= 127);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -128);
	assume_abort_if_not(var_1_12 <= 127);
	assume_abort_if_not(var_1_12 != 0);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 >= var_1_3) ? (var_1_1 == ((unsigned short int) (max (var_1_4 , (var_1_5 - (max (100 , var_1_6))))))) : (var_1_1 == ((unsigned short int) var_1_4))) && ((var_1_8 && (-1 >= 5)) ? ((var_1_4 >= var_1_1) ? (var_1_7 == ((signed char) var_1_9)) : (var_1_7 == ((signed char) 64))) : (var_1_7 == ((signed char) var_1_9)))) && (((var_1_1 / (max (var_1_11 , var_1_12))) <= 10) ? (var_1_10 == ((signed long int) (((min (var_1_13 , var_1_14)) - var_1_15) + var_1_16))) : ((var_1_14 > (25 - (min (5 , var_1_15)))) ? (var_1_10 == ((signed long int) (min (var_1_15 , 1)))) : 1))) && (var_1_17 == ((signed long int) 100))
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
