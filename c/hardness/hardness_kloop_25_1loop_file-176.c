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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch17625_1loop.c", 13, "reach_error"); }
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
signed long int var_1_1 = 64;
signed long int var_1_2 = 1192640562;
signed long int var_1_3 = 2;
double var_1_4 = 255.6;
signed long int var_1_5 = -1;
double var_1_6 = 25.5;
double var_1_7 = 8.75;
double var_1_8 = 0.0;
double var_1_9 = 127.45;
double var_1_10 = 256.5;
signed short int var_1_11 = 0;
signed short int var_1_12 = -256;
signed short int var_1_13 = -5;
signed short int var_1_14 = 128;
signed short int var_1_15 = 10;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 0;
float var_1_18 = 63.579;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch17625_1loop
	var_1_1 = ((10000000 + 5) - (var_1_2 - var_1_3));


	// From: Req2Batch17625_1loop
	signed long int stepLocal_1 = var_1_1 * (var_1_2 * var_1_3);
	signed long int stepLocal_0 = var_1_2;
	if (stepLocal_0 > var_1_3) {
		if (stepLocal_1 > (-1 / var_1_5)) {
			var_1_4 = (((var_1_6 + var_1_7) + (var_1_8 - var_1_9)) - (7.9 + var_1_10));
		} else {
			var_1_4 = var_1_7;
		}
	} else {
		var_1_4 = var_1_7;
	}


	// From: Req3Batch17625_1loop
	var_1_11 = (max (var_1_12 , (min (var_1_13 , (var_1_14 - var_1_15)))));


	// From: Req4Batch17625_1loop
	var_1_16 = var_1_17;


	// From: Req5Batch17625_1loop
	var_1_18 = var_1_9;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= 1073741823);
	assume_abort_if_not(var_1_2 <= 2147483646);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1073741823);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691400e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691400e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 2305843.009213691400e+12F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691400e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32767);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32767);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -1);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_1 == ((signed long int) ((10000000 + 5) - (var_1_2 - var_1_3)))) && ((var_1_2 > var_1_3) ? (((var_1_1 * (var_1_2 * var_1_3)) > (-1 / var_1_5)) ? (var_1_4 == ((double) (((var_1_6 + var_1_7) + (var_1_8 - var_1_9)) - (7.9 + var_1_10)))) : (var_1_4 == ((double) var_1_7))) : (var_1_4 == ((double) var_1_7)))) && (var_1_11 == ((signed short int) (max (var_1_12 , (min (var_1_13 , (var_1_14 - var_1_15)))))))) && (var_1_16 == ((unsigned char) var_1_17))) && (var_1_18 == ((float) var_1_9))
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
