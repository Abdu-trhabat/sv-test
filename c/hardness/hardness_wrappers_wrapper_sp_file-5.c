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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch5Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	signed long int var_1_2;
	signed long int var_1_3;
	signed long int var_1_4;
	signed long int var_1_5;
	signed short int var_1_6;
	signed short int var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_9;
	signed short int var_1_10;
	unsigned char var_1_12;
	unsigned char var_1_13;
	unsigned long int var_1_14;
};

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
struct WrapperStruct00 WrapperStruct00 = {
	10000,
	256,
	64,
	10000000,
	1,
	0,
	4,
	10,
	0,
	2,
	100,
	128,
	2
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned long int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);

// Calibration values

// Last'ed variables
signed short int last_1_WrapperStruct00_var_1_1 = 10000;
unsigned long int last_1_WrapperStruct00_var_1_14 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch5Wrapper_SP
	signed short int stepLocal_5 = (*(WrapperStruct00_var_1_10_Pointer));
	signed long int stepLocal_4 = 200;
	signed long int stepLocal_3 = (*(WrapperStruct00_var_1_3_Pointer));
	if (last_1_WrapperStruct00_var_1_1 == stepLocal_5) {
		if (stepLocal_3 <= (last_1_WrapperStruct00_var_1_14 / 500)) {
			if ((*(WrapperStruct00_var_1_6_Pointer)) <= stepLocal_4) {
				(*(WrapperStruct00_var_1_13_Pointer)) = (abs (abs ((*(WrapperStruct00_var_1_12_Pointer)))));
			}
		} else {
			(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
		}
	}


	// From: Req4Batch5Wrapper_SP
	(*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));


	// From: Req1Batch5Wrapper_SP
	signed long int stepLocal_0 = (*(WrapperStruct00_var_1_2_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer));
	if (stepLocal_0 >= ((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer)))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (abs ((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer))));
	}


	// From: Req2Batch5Wrapper_SP
	unsigned long int stepLocal_2 = ~ (*(WrapperStruct00_var_1_14_Pointer));
	signed long int stepLocal_1 = (*(WrapperStruct00_var_1_4_Pointer)) + ((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer)));
	if ((*(WrapperStruct00_var_1_9_Pointer))) {
		if ((*(WrapperStruct00_var_1_7_Pointer)) > stepLocal_1) {
			if ((*(WrapperStruct00_var_1_5_Pointer)) < stepLocal_2) {
				(*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
			} else {
				(*(WrapperStruct00_var_1_8_Pointer)) = 10;
			}
		} else {
			(*(WrapperStruct00_var_1_8_Pointer)) = 1;
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 32766);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 32766);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 32767);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 254);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
	last_1_WrapperStruct00_var_1_14 = WrapperStruct00.var_1_14;
}

int property(void) {
	return ((((((*(WrapperStruct00_var_1_2_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer))) >= ((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (abs ((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer)))))) : 1) && ((*(WrapperStruct00_var_1_9_Pointer)) ? (((*(WrapperStruct00_var_1_7_Pointer)) > ((*(WrapperStruct00_var_1_4_Pointer)) + ((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))))) ? (((*(WrapperStruct00_var_1_5_Pointer)) < (~ (*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_12_Pointer)))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) 10))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) 1))) : 1)) && ((last_1_WrapperStruct00_var_1_1 == (*(WrapperStruct00_var_1_10_Pointer))) ? (((*(WrapperStruct00_var_1_3_Pointer)) <= (last_1_WrapperStruct00_var_1_14 / 500)) ? (((*(WrapperStruct00_var_1_6_Pointer)) <= 200) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((unsigned char) (abs (abs ((*(WrapperStruct00_var_1_12_Pointer))))))) : 1) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_12_Pointer))))) : 1)) && ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_13_Pointer))))
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
