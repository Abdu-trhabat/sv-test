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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch166no_floats.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 2;
unsigned short int var_1_4 = 128;
signed long int var_1_5 = 256;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
signed long int var_1_8 = 1583182084;
signed long int var_1_9 = 100000;
signed long int var_1_10 = 50;
signed long int var_1_11 = -32;
signed long int var_1_12 = 32;
signed long int var_1_13 = 200;
signed long int var_1_14 = 100000000;
signed long int var_1_15 = 1000000000;
signed long int var_1_16 = 256;
unsigned short int var_1_17 = 8;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 2;
signed long int last_1_var_1_5 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch166no_floats
	signed long int stepLocal_0 = last_1_var_1_5;
	if (stepLocal_0 < last_1_var_1_1) {
		var_1_1 = var_1_4;
	}


	// From: Req3Batch166no_floats
	if (var_1_7) {
		var_1_9 = (max ((max (var_1_10 , var_1_11)) , (var_1_12 - var_1_13)));
	}


	// From: Req5Batch166no_floats
	unsigned char stepLocal_2 = var_1_7;
	if (((max (-16 , var_1_10)) < 8) || stepLocal_2) {
		if (var_1_6) {
			var_1_17 = var_1_4;
		} else {
			var_1_17 = 0;
		}
	} else {
		var_1_17 = 64;
	}


	// From: Req4Batch166no_floats
	if (var_1_11 != var_1_10) {
		var_1_14 = (var_1_1 + (var_1_17 - var_1_4));
	} else {
		var_1_14 = (var_1_17 - ((var_1_15 - var_1_4) + var_1_16));
	}


	// From: Req2Batch166no_floats
	unsigned char stepLocal_1 = var_1_7;
	if (var_1_6 || stepLocal_1) {
		var_1_5 = (min (var_1_14 , (var_1_4 - (var_1_8 - 100000))));
	} else {
		var_1_5 = 10;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 1073741823);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483648);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 536870911);
	assume_abort_if_not(var_1_15 <= 1073741823);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
}

int property(void) {
	return (((((last_1_var_1_5 < last_1_var_1_1) ? (var_1_1 == ((unsigned short int) var_1_4)) : 1) && ((var_1_6 || var_1_7) ? (var_1_5 == ((signed long int) (min (var_1_14 , (var_1_4 - (var_1_8 - 100000)))))) : (var_1_5 == ((signed long int) 10)))) && (var_1_7 ? (var_1_9 == ((signed long int) (max ((max (var_1_10 , var_1_11)) , (var_1_12 - var_1_13))))) : 1)) && ((var_1_11 != var_1_10) ? (var_1_14 == ((signed long int) (var_1_1 + (var_1_17 - var_1_4)))) : (var_1_14 == ((signed long int) (var_1_17 - ((var_1_15 - var_1_4) + var_1_16)))))) && ((((max (-16 , var_1_10)) < 8) || var_1_7) ? (var_1_6 ? (var_1_17 == ((unsigned short int) var_1_4)) : (var_1_17 == ((unsigned short int) 0))) : (var_1_17 == ((unsigned short int) 64)))
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
