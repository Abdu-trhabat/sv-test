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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10functionizing.c", 13, "reach_error"); }
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
unsigned char functionized0(unsigned short int, unsigned short int, unsigned char);
unsigned char functionized1(unsigned short int);
signed long int functionized2(signed short int);
signed long int functionized3(signed short int);
unsigned char functionized4(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 4;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned short int var_1_4 = 58792;
unsigned short int var_1_5 = 8;
unsigned short int var_1_6 = 64;
unsigned short int var_1_7 = 16;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 1000;
signed short int var_1_11 = 1;
signed short int var_1_12 = -25;
signed short int var_1_13 = 25;
unsigned short int var_1_14 = 5;
unsigned char var_1_15 = 0;
unsigned short int var_1_16 = 20511;
unsigned long int var_1_17 = 50;
signed char var_1_18 = 100;
unsigned long int var_1_19 = 32;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;

// Calibration values

// Last'ed variables

// Additional functions
unsigned char functionized0(unsigned short int functionized0_localFunctionVar0, unsigned short int functionized0_localFunctionVar1, unsigned char functionized0_localFunctionVar2) {
	return (((functionized0_localFunctionVar0 >= var_1_5) && (var_1_4 >= functionized0_localFunctionVar1)) || functionized0_localFunctionVar2);
}
unsigned char functionized1(unsigned short int functionized1_localFunctionVar0) {
	return (functionized1_localFunctionVar0 < var_1_6);
}
signed long int functionized2(signed short int functionized2_localFunctionVar0) {
	return (abs (functionized2_localFunctionVar0));
}
signed long int functionized3(signed short int functionized3_localFunctionVar0) {
	return (max (functionized3_localFunctionVar0 , (~ var_1_5)));
}
unsigned char functionized4(void) {
	return (var_1_8 || (! var_1_21));
}


void initially(void) {
}



void step(void) {
	// From: Req1Batch10functionizing
	if (var_1_2 && var_1_3) {
		var_1_1 = (((min (56892 , var_1_4)) - var_1_5) - (max (var_1_6 , var_1_7)));
	} else {
		if ((max (var_1_7 , var_1_5)) < var_1_6) {
			var_1_1 = var_1_5;
		}
	}


	// From: Req2Batch10functionizing
	var_1_8 = (functionized0(var_1_7, var_1_1, var_1_9));


	// From: Req3Batch10functionizing
	if (functionized1(var_1_1)) {
		if ((var_1_6 != var_1_5) || var_1_9) {
			var_1_10 = (((10000 - var_1_11) - var_1_5) + functionized2(var_1_12));
		} else {
			var_1_10 = var_1_4;
		}
	} else {
		var_1_10 = var_1_13;
	}


	// From: Req4Batch10functionizing
	if (var_1_15) {
		var_1_14 = ((abs (var_1_4)) - (max (var_1_5 , (var_1_16 - var_1_11))));
	}


	// From: Req5Batch10functionizing
	if (functionized3(var_1_13) >= (min (var_1_18 , var_1_14))) {
		if (var_1_14 <= var_1_11) {
			var_1_17 = var_1_5;
		} else {
			var_1_17 = var_1_6;
		}
	} else {
		var_1_17 = var_1_19;
	}


	// From: Req6Batch10functionizing
	if (var_1_19 > var_1_18) {
		var_1_20 = functionized4();
	} else {
		var_1_20 = var_1_21;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 49150);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 8191);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -16383);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32767);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((var_1_2 && var_1_3) ? (var_1_1 == ((unsigned short int) (((min (56892 , var_1_4)) - var_1_5) - (max (var_1_6 , var_1_7))))) : (((max (var_1_7 , var_1_5)) < var_1_6) ? (var_1_1 == ((unsigned short int) var_1_5)) : 1)) && (var_1_8 == ((unsigned char) (((var_1_7 >= var_1_5) && (var_1_4 >= var_1_1)) || var_1_9)))) && ((var_1_1 < var_1_6) ? (((var_1_6 != var_1_5) || var_1_9) ? (var_1_10 == ((signed short int) (((10000 - var_1_11) - var_1_5) + (abs (var_1_12))))) : (var_1_10 == ((signed short int) var_1_4))) : (var_1_10 == ((signed short int) var_1_13)))) && (var_1_15 ? (var_1_14 == ((unsigned short int) ((abs (var_1_4)) - (max (var_1_5 , (var_1_16 - var_1_11)))))) : 1)) && (((max (var_1_13 , (~ var_1_5))) >= (min (var_1_18 , var_1_14))) ? ((var_1_14 <= var_1_11) ? (var_1_17 == ((unsigned long int) var_1_5)) : (var_1_17 == ((unsigned long int) var_1_6))) : (var_1_17 == ((unsigned long int) var_1_19)))) && ((var_1_19 > var_1_18) ? (var_1_20 == ((unsigned char) (var_1_8 || (! var_1_21)))) : (var_1_20 == ((unsigned char) var_1_21)))
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
