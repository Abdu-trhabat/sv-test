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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch42Amount25.c", 13, "reach_error"); }
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
signed long int var_1_1 = -1;
signed short int var_1_2 = -8;
signed short int var_1_3 = -200;
signed long int var_1_4 = 64;
signed long int var_1_5 = 256;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 1;
float var_1_9 = 9999999999.5;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
signed long int var_1_16 = 16;
unsigned char var_1_17 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch42Amount25
	if (var_1_2 > var_1_3) {
		var_1_1 = ((min (var_1_4 , var_1_5)) - 10);
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req2Batch42Amount25
	if (var_1_1 >= -1000) {
		var_1_6 = (var_1_7 - 100);
	}


	// From: Req4Batch42Amount25
	var_1_16 = var_1_4;


	// From: Req5Batch42Amount25
	var_1_17 = var_1_7;


	// From: Req3Batch42Amount25
	unsigned char stepLocal_1 = 49.5f <= var_1_9;
	signed long int stepLocal_0 = var_1_4;
	if (stepLocal_1 && (var_1_10 && var_1_11)) {
		if (var_1_17 < stepLocal_0) {
			var_1_8 = (var_1_11 || var_1_12);
		} else {
			var_1_8 = (! (var_1_13 || (var_1_14 || var_1_15)));
		}
	} else {
		var_1_8 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 2147483646);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 127);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 > var_1_3) ? (var_1_1 == ((signed long int) ((min (var_1_4 , var_1_5)) - 10))) : (var_1_1 == ((signed long int) var_1_5))) && ((var_1_1 >= -1000) ? (var_1_6 == ((unsigned char) (var_1_7 - 100))) : 1)) && (((49.5f <= var_1_9) && (var_1_10 && var_1_11)) ? ((var_1_17 < var_1_4) ? (var_1_8 == ((unsigned char) (var_1_11 || var_1_12))) : (var_1_8 == ((unsigned char) (! (var_1_13 || (var_1_14 || var_1_15)))))) : (var_1_8 == ((unsigned char) var_1_12)))) && (var_1_16 == ((signed long int) var_1_4))) && (var_1_17 == ((unsigned char) var_1_7))
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
