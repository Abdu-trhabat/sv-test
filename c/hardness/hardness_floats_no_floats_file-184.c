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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch184no_floats.c", 13, "reach_error"); }
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
unsigned long int var_1_2 = 64;
unsigned long int var_1_3 = 25;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 128;
unsigned short int var_1_6 = 8;
signed long int var_1_7 = 200;
signed long int var_1_8 = 256;
signed long int var_1_9 = -64;
signed long int var_1_10 = -256;
signed long int var_1_11 = -8;
unsigned char var_1_12 = 0;
signed long int var_1_13 = 4;
signed long int var_1_14 = 8;
signed long int var_1_15 = 128;
unsigned char var_1_16 = 128;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_6 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch184no_floats
	unsigned long int stepLocal_0 = var_1_2;
	if (stepLocal_0 <= var_1_3) {
		var_1_1 = (var_1_4 - 32);
	} else {
		var_1_1 = (max ((max (var_1_4 , 100)) , var_1_5));
	}


	// From: Req2Batch184no_floats
	signed long int stepLocal_1 = var_1_5 + var_1_4;
	if (stepLocal_1 > ((max (last_1_var_1_6 , var_1_2)) / (max (var_1_7 , var_1_8)))) {
		var_1_6 = (max (var_1_4 , last_1_var_1_6));
	}


	// From: Req3Batch184no_floats
	unsigned long int stepLocal_2 = var_1_3;
	if (stepLocal_2 > (min (var_1_8 , var_1_2))) {
		var_1_9 = var_1_10;
	}


	// From: Req4Batch184no_floats
	unsigned char stepLocal_3 = var_1_4 < (var_1_5 | var_1_7);
	if (var_1_12 || stepLocal_3) {
		var_1_11 = (var_1_13 - (max (var_1_14 , var_1_15)));
	} else {
		var_1_11 = (max ((min (var_1_13 , var_1_14)) , var_1_15));
	}


	// From: Req5Batch184no_floats
	var_1_16 = var_1_4;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
}

int property(void) {
	return (((((var_1_2 <= var_1_3) ? (var_1_1 == ((unsigned char) (var_1_4 - 32))) : (var_1_1 == ((unsigned char) (max ((max (var_1_4 , 100)) , var_1_5))))) && (((var_1_5 + var_1_4) > ((max (last_1_var_1_6 , var_1_2)) / (max (var_1_7 , var_1_8)))) ? (var_1_6 == ((unsigned short int) (max (var_1_4 , last_1_var_1_6)))) : 1)) && ((var_1_3 > (min (var_1_8 , var_1_2))) ? (var_1_9 == ((signed long int) var_1_10)) : 1)) && ((var_1_12 || (var_1_4 < (var_1_5 | var_1_7))) ? (var_1_11 == ((signed long int) (var_1_13 - (max (var_1_14 , var_1_15))))) : (var_1_11 == ((signed long int) (max ((min (var_1_13 , var_1_14)) , var_1_15)))))) && (var_1_16 == ((unsigned char) var_1_4))
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
