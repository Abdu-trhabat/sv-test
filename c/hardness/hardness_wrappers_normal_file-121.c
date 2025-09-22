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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch121normal.c", 13, "reach_error"); }
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
signed long int var_1_1 = -100000000;
unsigned long int var_1_2 = 2032620576;
unsigned long int var_1_3 = 1443780595;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 4;
unsigned long int var_1_6 = 8;
unsigned char var_1_7 = 0;
unsigned long int var_1_8 = 32;
unsigned char var_1_9 = 0;
signed short int var_1_10 = -32;
signed short int var_1_11 = -100;
signed short int var_1_12 = -4;
unsigned char var_1_13 = 10;
unsigned char var_1_14 = 4;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch121normal
	unsigned long int stepLocal_1 = (var_1_2 + var_1_3) - (var_1_4 + var_1_5);
	unsigned long int stepLocal_0 = var_1_2;
	if (stepLocal_1 == (- (- var_1_6))) {
		if (var_1_3 != stepLocal_0) {
			var_1_1 = var_1_4;
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req2Batch121normal
	unsigned long int stepLocal_2 = max ((var_1_4 / var_1_8) , var_1_6);
	if (var_1_3 <= stepLocal_2) {
		var_1_7 = (! var_1_9);
	} else {
		var_1_7 = 0;
	}


	// From: Req4Batch121normal
	var_1_13 = var_1_14;


	// From: Req5Batch121normal
	var_1_15 = var_1_16;


	// From: Req3Batch121normal
	if (var_1_2 <= var_1_5) {
		if (! var_1_15) {
			var_1_10 = (min (var_1_11 , (var_1_12 + 2)));
		} else {
			var_1_10 = (min ((abs (var_1_12)) , var_1_11));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 1073741823);
	assume_abort_if_not(var_1_2 <= 2147483648);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 1073741824);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1073741824);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967295);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 4294967295);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -32767);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -16383);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 + var_1_3) - (var_1_4 + var_1_5)) == (- (- var_1_6))) ? ((var_1_3 != var_1_2) ? (var_1_1 == ((signed long int) var_1_4)) : 1) : (var_1_1 == ((signed long int) var_1_5))) && ((var_1_3 <= (max ((var_1_4 / var_1_8) , var_1_6))) ? (var_1_7 == ((unsigned char) (! var_1_9))) : (var_1_7 == ((unsigned char) 0)))) && ((var_1_2 <= var_1_5) ? ((! var_1_15) ? (var_1_10 == ((signed short int) (min (var_1_11 , (var_1_12 + 2))))) : (var_1_10 == ((signed short int) (min ((abs (var_1_12)) , var_1_11))))) : 1)) && (var_1_13 == ((unsigned char) var_1_14))) && (var_1_15 == ((unsigned char) var_1_16))
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
