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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch5625_while.c", 13, "reach_error"); }
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
signed short int var_1_2 = 5;
signed char var_1_3 = 10;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 16;
unsigned char var_1_7 = 2;
unsigned long int var_1_8 = 1000000;
unsigned long int var_1_10 = 2131342500;
unsigned short int var_1_11 = 0;
signed short int var_1_12 = -4;
signed short int var_1_13 = 2;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_8 = 1000000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch5625_while
	if ((var_1_2 >> var_1_3) >= last_1_var_1_8) {
		var_1_1 = (min (var_1_3 , (var_1_5 - (max (var_1_6 , var_1_7)))));
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req3Batch5625_while
	unsigned long int stepLocal_3 = var_1_10;
	unsigned char stepLocal_2 = var_1_5;
	if ((var_1_1 % var_1_5) > stepLocal_3) {
		if ((25 + (var_1_2 * var_1_6)) >= stepLocal_2) {
			var_1_11 = var_1_5;
		}
	}


	// From: Req2Batch5625_while
	unsigned char stepLocal_1 = var_1_5;
	signed long int stepLocal_0 = 8 + var_1_2;
	if (var_1_11 >= stepLocal_0) {
		if (stepLocal_1 < var_1_3) {
			var_1_8 = ((var_1_10 - var_1_5) + var_1_6);
		}
	}


	// From: Req4Batch5625_while
	var_1_12 = var_1_13;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 14);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 127);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 1073741823);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32767);
	assume_abort_if_not(var_1_13 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
}

int property(void) {
	return (((((var_1_2 >> var_1_3) >= last_1_var_1_8) ? (var_1_1 == ((unsigned char) (min (var_1_3 , (var_1_5 - (max (var_1_6 , var_1_7))))))) : (var_1_1 == ((unsigned char) var_1_6))) && ((var_1_11 >= (8 + var_1_2)) ? ((var_1_5 < var_1_3) ? (var_1_8 == ((unsigned long int) ((var_1_10 - var_1_5) + var_1_6))) : 1) : 1)) && (((var_1_1 % var_1_5) > var_1_10) ? (((25 + (var_1_2 * var_1_6)) >= var_1_5) ? (var_1_11 == ((unsigned short int) var_1_5)) : 1) : 1)) && (var_1_12 == ((signed short int) var_1_13))
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
