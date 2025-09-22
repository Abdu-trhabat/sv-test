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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch91Amount10.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 0;
unsigned long int var_1_2 = 25;
unsigned long int var_1_3 = 3058283566;
unsigned long int var_1_4 = 100;
signed short int var_1_5 = 2;
signed short int var_1_6 = 1;
signed short int var_1_7 = -8;
signed short int var_1_8 = -256;
signed short int var_1_9 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch91Amount10
	var_1_1 = (max (var_1_2 , (var_1_3 - var_1_4)));


	// From: Req2Batch91Amount10
	unsigned long int stepLocal_0 = var_1_2;
	if (stepLocal_0 > var_1_1) {
		var_1_5 = (8 - var_1_6);
	} else {
		var_1_5 = var_1_7;
	}


	// From: Req3Batch91Amount10
	var_1_8 = var_1_6;


	// From: Req4Batch91Amount10
	var_1_9 = var_1_7;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967294);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 2147483647);
	assume_abort_if_not(var_1_3 <= 4294967294);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -32767);
	assume_abort_if_not(var_1_7 <= 32766);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_1 == ((unsigned long int) (max (var_1_2 , (var_1_3 - var_1_4))))) && ((var_1_2 > var_1_1) ? (var_1_5 == ((signed short int) (8 - var_1_6))) : (var_1_5 == ((signed short int) var_1_7)))) && (var_1_8 == ((signed short int) var_1_6))) && (var_1_9 == ((signed short int) var_1_7))
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
