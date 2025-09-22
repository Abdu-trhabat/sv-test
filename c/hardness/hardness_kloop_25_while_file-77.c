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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch7725_while.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 50;
unsigned short int var_1_4 = 60871;
unsigned short int var_1_5 = 1;
unsigned short int var_1_6 = 28896;
unsigned short int var_1_7 = 5;
float var_1_8 = 63.8;
float var_1_9 = 49.5;
float var_1_10 = 31.875;
float var_1_11 = 255.25;
unsigned short int var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
signed long int var_1_15 = 16;
float var_1_16 = 0.8;
unsigned short int var_1_17 = 64;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch7725_while
	if (var_1_7 > var_1_5) {
		var_1_8 = (abs (var_1_9));
	} else {
		var_1_8 = ((max (var_1_10 , var_1_11)) - 1.6f);
	}


	// From: Req3Batch7725_while
	signed long int stepLocal_1 = min (var_1_5 , var_1_6);
	unsigned char stepLocal_0 = var_1_14;
	if (var_1_13 && stepLocal_0) {
		if (stepLocal_1 < (max (32 , (var_1_15 - var_1_7)))) {
			var_1_12 = (var_1_7 + 5);
		}
	} else {
		var_1_12 = 64;
	}


	// From: Req4Batch7725_while
	var_1_16 = var_1_11;


	// From: Req5Batch7725_while
	var_1_17 = var_1_5;


	// From: Req1Batch7725_while
	if (var_1_8 != var_1_16) {
		var_1_1 = (var_1_4 - (min (var_1_5 , (var_1_6 - var_1_7))));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 32767);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 32767);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 16383);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_8 != var_1_16) ? (var_1_1 == ((unsigned short int) (var_1_4 - (min (var_1_5 , (var_1_6 - var_1_7)))))) : 1) && ((var_1_7 > var_1_5) ? (var_1_8 == ((float) (abs (var_1_9)))) : (var_1_8 == ((float) ((max (var_1_10 , var_1_11)) - 1.6f))))) && ((var_1_13 && var_1_14) ? (((min (var_1_5 , var_1_6)) < (max (32 , (var_1_15 - var_1_7)))) ? (var_1_12 == ((unsigned short int) (var_1_7 + 5))) : 1) : (var_1_12 == ((unsigned short int) 64)))) && (var_1_16 == ((float) var_1_11))) && (var_1_17 == ((unsigned short int) var_1_5))
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
