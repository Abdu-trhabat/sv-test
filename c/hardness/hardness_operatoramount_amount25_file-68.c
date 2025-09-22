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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch68Amount25.c", 13, "reach_error"); }
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
signed long int var_1_1 = 32;
float var_1_2 = 64.5;
float var_1_3 = 16.8;
float var_1_4 = 5.8;
signed short int var_1_5 = -32;
signed short int var_1_6 = -16;
signed long int var_1_7 = 100;
signed long int var_1_8 = 10;
signed long int var_1_9 = 25;
signed short int var_1_11 = 4;
float var_1_12 = 8.75;
float var_1_13 = 31.4;
signed short int var_1_14 = -4;
signed short int var_1_15 = -10;
signed short int var_1_16 = 8;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_9 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch68Amount25
	signed long int stepLocal_0 = var_1_7 / var_1_8;
	if ((var_1_2 - var_1_3) >= var_1_4) {
		if ((var_1_5 + var_1_6) >= stepLocal_0) {
			var_1_1 = var_1_6;
		}
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req3Batch68Amount25
	if (var_1_3 > (var_1_2 - (var_1_12 + var_1_13))) {
		var_1_11 = (max (var_1_14 , (max ((var_1_15 + var_1_16) , 8))));
	}


	// From: Req4Batch68Amount25
	var_1_17 = var_1_18;


	// From: Req2Batch68Amount25
	signed short int stepLocal_1 = var_1_11;
	if ((max ((- last_1_var_1_9) , (var_1_11 | var_1_8))) > stepLocal_1) {
		var_1_9 = -16;
	} else {
		var_1_9 = var_1_11;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32768);
	assume_abort_if_not(var_1_5 <= 32767);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32768);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427388000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427388000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -32767);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -16383);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= -16383);
	assume_abort_if_not(var_1_16 <= 16383);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
}

int property(void) {
	return (((((var_1_2 - var_1_3) >= var_1_4) ? (((var_1_5 + var_1_6) >= (var_1_7 / var_1_8)) ? (var_1_1 == ((signed long int) var_1_6)) : 1) : (var_1_1 == ((signed long int) var_1_6))) && (((max ((- last_1_var_1_9) , (var_1_11 | var_1_8))) > var_1_11) ? (var_1_9 == ((signed long int) -16)) : (var_1_9 == ((signed long int) var_1_11)))) && ((var_1_3 > (var_1_2 - (var_1_12 + var_1_13))) ? (var_1_11 == ((signed short int) (max (var_1_14 , (max ((var_1_15 + var_1_16) , 8)))))) : 1)) && (var_1_17 == ((unsigned char) var_1_18))
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
