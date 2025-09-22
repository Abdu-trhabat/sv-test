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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch41Amount25.c", 13, "reach_error"); }
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
signed char var_1_1 = -16;
unsigned long int var_1_3 = 16;
unsigned long int var_1_4 = 8;
unsigned char var_1_5 = 0;
signed char var_1_6 = -8;
signed char var_1_7 = -2;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned long int var_1_10 = 128;
unsigned long int var_1_11 = 64;
unsigned long int var_1_12 = 0;
unsigned short int var_1_13 = 50;
unsigned short int var_1_14 = 256;
double var_1_15 = 255.4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch41Amount25
	if (var_1_5) {
		var_1_8 = (! (! var_1_9));
	}


	// From: Req4Batch41Amount25
	var_1_13 = var_1_14;


	// From: Req5Batch41Amount25
	var_1_15 = 127.3;


	// From: Req3Batch41Amount25
	unsigned char stepLocal_2 = -2 != var_1_3;
	unsigned long int stepLocal_1 = var_1_4;
	if (stepLocal_2 || var_1_8) {
		if (var_1_13 <= stepLocal_1) {
			var_1_10 = (max ((128u + var_1_11) , var_1_12));
		} else {
			var_1_10 = (4292490132u - var_1_11);
		}
	} else {
		var_1_10 = var_1_11;
	}


	// From: Req1Batch41Amount25
	unsigned long int stepLocal_0 = var_1_10;
	if (((var_1_10 & 0u) * var_1_10) > stepLocal_0) {
		if (var_1_8) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = var_1_7;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -127);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_10 & 0u) * var_1_10) > var_1_10) ? (var_1_8 ? (var_1_1 == ((signed char) var_1_6)) : (var_1_1 == ((signed char) var_1_7))) : (var_1_1 == ((signed char) var_1_7))) && (var_1_5 ? (var_1_8 == ((unsigned char) (! (! var_1_9)))) : 1)) && (((-2 != var_1_3) || var_1_8) ? ((var_1_13 <= var_1_4) ? (var_1_10 == ((unsigned long int) (max ((128u + var_1_11) , var_1_12)))) : (var_1_10 == ((unsigned long int) (4292490132u - var_1_11)))) : (var_1_10 == ((unsigned long int) var_1_11)))) && (var_1_13 == ((unsigned short int) var_1_14))) && (var_1_15 == ((double) 127.3))
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
