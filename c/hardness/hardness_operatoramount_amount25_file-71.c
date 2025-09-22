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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch71Amount25.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 16;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 8;
unsigned char var_1_4 = 8;
unsigned char var_1_5 = 32;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
float var_1_8 = 1.8;
unsigned long int var_1_9 = 2;
float var_1_10 = 9999999999999.75;
float var_1_11 = 8.75;
float var_1_12 = 255.75;
unsigned short int var_1_13 = 10;
unsigned char var_1_14 = 2;
unsigned short int var_1_15 = 4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch71Amount25
	unsigned char stepLocal_0 = var_1_6;
	if (var_1_2) {
		var_1_1 = (max ((max ((var_1_3 + var_1_4) , 50)) , var_1_5));
	} else {
		if (stepLocal_0 && var_1_7) {
			var_1_1 = var_1_5;
		} else {
			if (var_1_7) {
				var_1_1 = var_1_5;
			} else {
				var_1_1 = var_1_3;
			}
		}
	}


	// From: Req3Batch71Amount25
	var_1_13 = 100;


	// From: Req4Batch71Amount25
	var_1_14 = var_1_5;


	// From: Req5Batch71Amount25
	var_1_15 = var_1_5;


	// From: Req2Batch71Amount25
	if ((var_1_14 >> var_1_9) <= var_1_5) {
		if ((25 > var_1_14) && var_1_7) {
			var_1_8 = (var_1_10 + (max (var_1_11 , var_1_12)));
		} else {
			var_1_8 = var_1_12;
		}
	} else {
		var_1_8 = var_1_12;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 7);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 ? (var_1_1 == ((unsigned char) (max ((max ((var_1_3 + var_1_4) , 50)) , var_1_5)))) : ((var_1_6 && var_1_7) ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_7 ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_1 == ((unsigned char) var_1_3))))) && (((var_1_14 >> var_1_9) <= var_1_5) ? (((25 > var_1_14) && var_1_7) ? (var_1_8 == ((float) (var_1_10 + (max (var_1_11 , var_1_12))))) : (var_1_8 == ((float) var_1_12))) : (var_1_8 == ((float) var_1_12)))) && (var_1_13 == ((unsigned short int) 100))) && (var_1_14 == ((unsigned char) var_1_5))) && (var_1_15 == ((unsigned short int) var_1_5))
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
