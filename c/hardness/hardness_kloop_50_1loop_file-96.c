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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch9650_1loop.c", 13, "reach_error"); }
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
signed char var_1_1 = 16;
unsigned long int var_1_2 = 500;
unsigned long int var_1_3 = 10;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
signed char var_1_8 = -10;
unsigned short int var_1_9 = 4;
signed char var_1_10 = 8;
unsigned short int var_1_11 = 32;
unsigned short int var_1_12 = 64314;
unsigned short int var_1_13 = 26169;
unsigned short int var_1_14 = 10;
unsigned short int var_1_15 = 5;
unsigned short int var_1_16 = 256;
signed char var_1_17 = 50;
signed char var_1_18 = 16;
signed char var_1_19 = 5;
signed char var_1_20 = 0;
signed char var_1_21 = 50;
signed char var_1_22 = 16;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
double var_1_27 = 0.25;
double var_1_28 = 10.25;
double var_1_29 = 1000.25;
double var_1_30 = 9.5;
float var_1_31 = 63.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch9650_1loop
	if (var_1_2 < var_1_3) {
		if (var_1_4 && var_1_5) {
			if (var_1_4) {
				if (var_1_5 && (var_1_6 || var_1_7)) {
					var_1_1 = -5;
				}
			}
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_8;
	}


	// From: Req3Batch9650_1loop
	var_1_17 = ((min (var_1_18 , var_1_19)) - (var_1_20 + (var_1_21 - var_1_22)));


	// From: Req5Batch9650_1loop
	if (var_1_4) {
		var_1_24 = (! var_1_25);
	} else {
		var_1_24 = (var_1_6 && ((var_1_10 >= var_1_17) && var_1_25));
	}


	// From: Req7Batch9650_1loop
	var_1_31 = var_1_30;


	// From: Req2Batch9650_1loop
	signed char stepLocal_0 = var_1_17;
	if (stepLocal_0 < (-1 - var_1_10)) {
		if (var_1_24) {
			var_1_9 = (var_1_10 + (abs (var_1_11)));
		} else {
			var_1_9 = ((var_1_12 - var_1_10) - ((var_1_13 - var_1_14) - (min (var_1_15 , var_1_16))));
		}
	} else {
		var_1_9 = var_1_13;
	}


	// From: Req4Batch9650_1loop
	if ((- var_1_9) < (var_1_2 + -500)) {
		var_1_23 = var_1_20;
	}


	// From: Req6Batch9650_1loop
	if (var_1_9 < (var_1_21 + var_1_14)) {
		var_1_27 = ((var_1_28 + var_1_29) + var_1_30);
	} else {
		var_1_27 = var_1_28;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 49150);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 24575);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 8192);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 16383);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -1);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 31);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 31);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -230584.3009213691400e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -230584.3009213691400e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 < var_1_3) ? ((var_1_4 && var_1_5) ? (var_1_4 ? ((var_1_5 && (var_1_6 || var_1_7)) ? (var_1_1 == ((signed char) -5)) : 1) : 1) : (var_1_1 == ((signed char) var_1_8))) : (var_1_1 == ((signed char) var_1_8))) && ((var_1_17 < (-1 - var_1_10)) ? (var_1_24 ? (var_1_9 == ((unsigned short int) (var_1_10 + (abs (var_1_11))))) : (var_1_9 == ((unsigned short int) ((var_1_12 - var_1_10) - ((var_1_13 - var_1_14) - (min (var_1_15 , var_1_16))))))) : (var_1_9 == ((unsigned short int) var_1_13)))) && (var_1_17 == ((signed char) ((min (var_1_18 , var_1_19)) - (var_1_20 + (var_1_21 - var_1_22)))))) && (((- var_1_9) < (var_1_2 + -500)) ? (var_1_23 == ((unsigned char) var_1_20)) : 1)) && (var_1_4 ? (var_1_24 == ((unsigned char) (! var_1_25))) : (var_1_24 == ((unsigned char) (var_1_6 && ((var_1_10 >= var_1_17) && var_1_25)))))) && ((var_1_9 < (var_1_21 + var_1_14)) ? (var_1_27 == ((double) ((var_1_28 + var_1_29) + var_1_30))) : (var_1_27 == ((double) var_1_28)))) && (var_1_31 == ((float) var_1_30))
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
