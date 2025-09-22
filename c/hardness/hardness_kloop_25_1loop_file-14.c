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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch1425_1loop.c", 13, "reach_error"); }
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
signed long int var_1_1 = 1000000;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
signed long int var_1_4 = -200;
signed short int var_1_5 = -64;
signed short int var_1_6 = -64;
signed short int var_1_7 = 10;
signed short int var_1_8 = 8;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 5;
signed char var_1_12 = 8;
signed char var_1_14 = 1;
signed char var_1_15 = 100;
signed char var_1_16 = 64;
signed char var_1_17 = 16;
signed long int var_1_18 = -256;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch1425_1loop
	unsigned char stepLocal_0 = var_1_3;
	if (var_1_2 && stepLocal_0) {
		var_1_1 = var_1_4;
	}


	// From: Req3Batch1425_1loop
	signed long int stepLocal_1 = var_1_6 * var_1_1;
	if (var_1_8 <= stepLocal_1) {
		if (var_1_2) {
			var_1_9 = var_1_10;
		}
	}


	// From: Req4Batch1425_1loop
	var_1_11 = (min (var_1_8 , var_1_7));


	// From: Req6Batch1425_1loop
	var_1_18 = 256;


	// From: Req2Batch1425_1loop
	if (var_1_9) {
		var_1_5 = var_1_6;
	} else {
		var_1_5 = ((var_1_7 + 16) - var_1_8);
	}


	// From: Req5Batch1425_1loop
	signed long int stepLocal_2 = var_1_1;
	if (var_1_18 != stepLocal_2) {
		var_1_12 = (var_1_14 - (max (var_1_15 , var_1_16)));
	} else {
		var_1_12 = (var_1_15 - ((var_1_17 + 5) + 10));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483647);
	assume_abort_if_not(var_1_4 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32767);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -1);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 32);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_2 && var_1_3) ? (var_1_1 == ((signed long int) var_1_4)) : 1) && (var_1_9 ? (var_1_5 == ((signed short int) var_1_6)) : (var_1_5 == ((signed short int) ((var_1_7 + 16) - var_1_8))))) && ((var_1_8 <= (var_1_6 * var_1_1)) ? (var_1_2 ? (var_1_9 == ((unsigned char) var_1_10)) : 1) : 1)) && (var_1_11 == ((unsigned long int) (min (var_1_8 , var_1_7))))) && ((var_1_18 != var_1_1) ? (var_1_12 == ((signed char) (var_1_14 - (max (var_1_15 , var_1_16))))) : (var_1_12 == ((signed char) (var_1_15 - ((var_1_17 + 5) + 10)))))) && (var_1_18 == ((signed long int) 256))
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
