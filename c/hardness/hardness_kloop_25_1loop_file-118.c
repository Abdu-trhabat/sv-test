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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch11825_1loop.c", 13, "reach_error"); }
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
signed short int var_1_1 = 10;
signed long int var_1_2 = 64;
signed short int var_1_3 = -32;
signed short int var_1_4 = -4;
signed short int var_1_5 = 2;
unsigned char var_1_6 = 100;
unsigned short int var_1_7 = 58884;
unsigned short int var_1_8 = 256;
signed long int var_1_9 = 100;
unsigned char var_1_10 = 100;
float var_1_11 = 127.5;
float var_1_12 = 1.25;
float var_1_13 = 32.575;
float var_1_14 = 9.75;
float var_1_15 = 64.4;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch11825_1loop
	signed long int stepLocal_0 = 4;
	if (var_1_2 < stepLocal_0) {
		var_1_1 = (var_1_3 + var_1_4);
	} else {
		var_1_1 = (var_1_5 - 5);
	}


	// From: Req2Batch11825_1loop
	if ((var_1_7 - var_1_8) < ((var_1_5 - var_1_9) + var_1_1)) {
		var_1_6 = var_1_10;
	}


	// From: Req3Batch11825_1loop
	signed short int stepLocal_1 = var_1_5;
	if (var_1_1 == stepLocal_1) {
		var_1_11 = ((var_1_12 + (max (var_1_13 , 127.8f))) - (min (var_1_14 , var_1_15)));
	}


	// From: Req4Batch11825_1loop
	signed long int stepLocal_2 = abs (var_1_6);
	if (var_1_4 > stepLocal_2) {
		var_1_16 = ((var_1_4 == var_1_3) && var_1_17);
	} else {
		var_1_16 = var_1_18;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -16383);
	assume_abort_if_not(var_1_3 <= 16383);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -16383);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65535);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 < 4) ? (var_1_1 == ((signed short int) (var_1_3 + var_1_4))) : (var_1_1 == ((signed short int) (var_1_5 - 5)))) && (((var_1_7 - var_1_8) < ((var_1_5 - var_1_9) + var_1_1)) ? (var_1_6 == ((unsigned char) var_1_10)) : 1)) && ((var_1_1 == var_1_5) ? (var_1_11 == ((float) ((var_1_12 + (max (var_1_13 , 127.8f))) - (min (var_1_14 , var_1_15))))) : 1)) && ((var_1_4 > (abs (var_1_6))) ? (var_1_16 == ((unsigned char) ((var_1_4 == var_1_3) && var_1_17))) : (var_1_16 == ((unsigned char) var_1_18)))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
