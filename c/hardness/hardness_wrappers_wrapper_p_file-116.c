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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch116Wrapper_P.c", 13, "reach_error"); }
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
signed short int var_1_1 = 5;
signed short int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_4 = -128;
signed long int* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = 1;
signed long int* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = -128;
signed long int* var_1_6_Pointer = &(var_1_6);
signed short int var_1_7 = 0;
signed short int* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 25.6;
float* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 1;
unsigned char* var_1_10_Pointer = &(var_1_10);
signed long int var_1_11 = -4;
signed long int* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = 16;
signed long int* var_1_12_Pointer = &(var_1_12);
signed long int var_1_13 = 8;
signed long int* var_1_13_Pointer = &(var_1_13);
signed long int var_1_14 = 128;
signed long int* var_1_14_Pointer = &(var_1_14);
signed long int var_1_15 = 1867567405;
signed long int* var_1_15_Pointer = &(var_1_15);
signed long int var_1_16 = 32;
signed long int* var_1_16_Pointer = &(var_1_16);
signed long int var_1_17 = 5;
signed long int* var_1_17_Pointer = &(var_1_17);
unsigned short int var_1_18 = 4;
unsigned short int* var_1_18_Pointer = &(var_1_18);
unsigned short int var_1_19 = 64;
unsigned short int* var_1_19_Pointer = &(var_1_19);
signed char var_1_20 = -5;
signed char* var_1_20_Pointer = &(var_1_20);
signed char var_1_21 = -64;
signed char* var_1_21_Pointer = &(var_1_21);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch116Wrapper_P
	(*(var_1_18_Pointer)) = (*(var_1_19_Pointer));


	// From: Req6Batch116Wrapper_P
	(*(var_1_20_Pointer)) = (*(var_1_21_Pointer));


	// From: Req4Batch116Wrapper_P
	signed long int stepLocal_2 = (*(var_1_5_Pointer));
	if (stepLocal_2 <= (*(var_1_18_Pointer))) {
		(*(var_1_11_Pointer)) = ((min ((max ((*(var_1_18_Pointer)) , (*(var_1_12_Pointer)))) , (min ((*(var_1_13_Pointer)) , (*(var_1_14_Pointer)))))) - (((*(var_1_15_Pointer)) - (*(var_1_16_Pointer))) - (*(var_1_17_Pointer))));
	}


	// From: Req3Batch116Wrapper_P
	(*(var_1_9_Pointer)) = (((*(var_1_11_Pointer)) >= (~ (*(var_1_11_Pointer)))) && (! (*(var_1_10_Pointer))));


	// From: Req1Batch116Wrapper_P
	signed long int stepLocal_0 = ((*(var_1_4_Pointer)) * (*(var_1_5_Pointer))) / (*(var_1_6_Pointer));
	if ((~ (*(var_1_18_Pointer))) < stepLocal_0) {
		if ((*(var_1_9_Pointer))) {
			(*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
		} else {
			(*(var_1_1_Pointer)) = 8;
		}
	} else {
		(*(var_1_1_Pointer)) = 5;
	}


	// From: Req2Batch116Wrapper_P
	signed long int stepLocal_1 = min ((*(var_1_1_Pointer)) , (*(var_1_11_Pointer)));
	if ((*(var_1_9_Pointer))) {
		if (stepLocal_1 >= (*(var_1_11_Pointer))) {
			(*(var_1_8_Pointer)) = 2.6f;
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -32767);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -1);
	assume_abort_if_not(var_1_14 <= 2147483646);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 1610612734);
	assume_abort_if_not(var_1_15 <= 2147483646);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 536870911);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -127);
	assume_abort_if_not(var_1_21 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((~ (*(var_1_18_Pointer))) < (((*(var_1_4_Pointer)) * (*(var_1_5_Pointer))) / (*(var_1_6_Pointer)))) ? ((*(var_1_9_Pointer)) ? ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_7_Pointer)))) : ((*(var_1_1_Pointer)) == ((signed short int) 8))) : ((*(var_1_1_Pointer)) == ((signed short int) 5))) && ((*(var_1_9_Pointer)) ? (((min ((*(var_1_1_Pointer)) , (*(var_1_11_Pointer)))) >= (*(var_1_11_Pointer))) ? ((*(var_1_8_Pointer)) == ((float) 2.6f)) : 1) : 1)) && ((*(var_1_9_Pointer)) == ((unsigned char) (((*(var_1_11_Pointer)) >= (~ (*(var_1_11_Pointer)))) && (! (*(var_1_10_Pointer))))))) && (((*(var_1_5_Pointer)) <= (*(var_1_18_Pointer))) ? ((*(var_1_11_Pointer)) == ((signed long int) ((min ((max ((*(var_1_18_Pointer)) , (*(var_1_12_Pointer)))) , (min ((*(var_1_13_Pointer)) , (*(var_1_14_Pointer)))))) - (((*(var_1_15_Pointer)) - (*(var_1_16_Pointer))) - (*(var_1_17_Pointer)))))) : 1)) && ((*(var_1_18_Pointer)) == ((unsigned short int) (*(var_1_19_Pointer))))) && ((*(var_1_20_Pointer)) == ((signed char) (*(var_1_21_Pointer))))
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
