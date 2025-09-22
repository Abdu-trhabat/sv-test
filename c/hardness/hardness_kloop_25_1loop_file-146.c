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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch14625_1loop.c", 13, "reach_error"); }
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
signed long int var_1_1 = -128;
signed long int var_1_2 = -10;
signed long int var_1_3 = 4;
signed long int var_1_4 = 0;
unsigned long int var_1_5 = 2;
unsigned short int var_1_6 = 4;
unsigned char var_1_7 = 0;
unsigned long int var_1_8 = 100000;
signed short int var_1_9 = 4;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 64;
unsigned char var_1_16 = 64;
double var_1_17 = 255.6;
double var_1_18 = 3.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch14625_1loop
	var_1_1 = (var_1_2 + (min ((16 + var_1_3) , (max (var_1_4 , -32)))));


	// From: Req2Batch14625_1loop
	signed long int stepLocal_0 = var_1_2 ^ (var_1_4 / var_1_6);
	if (stepLocal_0 >= var_1_3) {
		var_1_5 = var_1_6;
	}


	// From: Req3Batch14625_1loop
	signed long int stepLocal_3 = var_1_3;
	unsigned char stepLocal_2 = var_1_12;
	unsigned long int stepLocal_1 = var_1_5;
	if (stepLocal_1 > ((var_1_6 + var_1_5) / var_1_8)) {
		if (stepLocal_3 < var_1_9) {
			if (stepLocal_2 || var_1_13) {
				var_1_7 = (max ((abs (var_1_14)) , var_1_15));
			} else {
				var_1_7 = var_1_15;
			}
		}
	} else {
		var_1_7 = var_1_15;
	}


	// From: Req4Batch14625_1loop
	var_1_16 = var_1_14;


	// From: Req5Batch14625_1loop
	var_1_17 = var_1_18;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -1073741823);
	assume_abort_if_not(var_1_2 <= 1073741823);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -536870911);
	assume_abort_if_not(var_1_3 <= 536870911);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1073741823);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65535);
	assume_abort_if_not(var_1_6 != 0);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 4294967295);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_1 == ((signed long int) (var_1_2 + (min ((16 + var_1_3) , (max (var_1_4 , -32))))))) && (((var_1_2 ^ (var_1_4 / var_1_6)) >= var_1_3) ? (var_1_5 == ((unsigned long int) var_1_6)) : 1)) && ((var_1_5 > ((var_1_6 + var_1_5) / var_1_8)) ? ((var_1_3 < var_1_9) ? ((var_1_12 || var_1_13) ? (var_1_7 == ((unsigned char) (max ((abs (var_1_14)) , var_1_15)))) : (var_1_7 == ((unsigned char) var_1_15))) : 1) : (var_1_7 == ((unsigned char) var_1_15)))) && (var_1_16 == ((unsigned char) var_1_14))) && (var_1_17 == ((double) var_1_18))
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
