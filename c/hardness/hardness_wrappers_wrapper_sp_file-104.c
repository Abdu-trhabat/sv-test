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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch104Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed long int var_1_1;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	signed short int var_1_8;
	signed short int var_1_9;
	signed short int var_1_10;
	unsigned long int var_1_11;
	unsigned long int var_1_12;
	signed long int var_1_13;
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
	256,
	1,
	1,
	0,
	-1,
	256,
	1,
	5,
	2080937386,
	128
};
signed long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);

// Calibration values

// Last'ed variables
signed long int last_1_WrapperStruct00_var_1_1 = 256;
unsigned long int last_1_WrapperStruct00_var_1_11 = 5;
signed long int last_1_WrapperStruct00_var_1_13 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch104Wrapper_SP
	signed long int stepLocal_1 = last_1_WrapperStruct00_var_1_13;
	signed long int stepLocal_0 = last_1_WrapperStruct00_var_1_13;
	if (stepLocal_0 > last_1_WrapperStruct00_var_1_11) {
		if (stepLocal_1 < (min (last_1_WrapperStruct00_var_1_11 , last_1_WrapperStruct00_var_1_13))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = last_1_WrapperStruct00_var_1_13;
		}
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (abs (max (last_1_WrapperStruct00_var_1_13 , last_1_WrapperStruct00_var_1_11)));
	}


	// From: Req4Batch104Wrapper_SP
	if ((~ (*(WrapperStruct00_var_1_10_Pointer))) < (*(WrapperStruct00_var_1_9_Pointer))) {
		(*(WrapperStruct00_var_1_11_Pointer)) = ((max (last_1_WrapperStruct00_var_1_13 , ((*(WrapperStruct00_var_1_12_Pointer)) - last_1_WrapperStruct00_var_1_1))) + (max (last_1_WrapperStruct00_var_1_1 , (*(WrapperStruct00_var_1_10_Pointer)))));
	} else {
		(*(WrapperStruct00_var_1_11_Pointer)) = ((max ((*(WrapperStruct00_var_1_12_Pointer)) , last_1_WrapperStruct00_var_1_13)) + (*(WrapperStruct00_var_1_10_Pointer)));
	}


	// From: Req2Batch104Wrapper_SP
	if ((*(WrapperStruct00_var_1_6_Pointer))) {
		(*(WrapperStruct00_var_1_5_Pointer)) = (! (*(WrapperStruct00_var_1_7_Pointer)));
	}


	// From: Req3Batch104Wrapper_SP
	if ((*(WrapperStruct00_var_1_5_Pointer))) {
		(*(WrapperStruct00_var_1_8_Pointer)) = ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer)));
	}


	// From: Req5Batch104Wrapper_SP
	if ((*(WrapperStruct00_var_1_1_Pointer)) != (*(WrapperStruct00_var_1_12_Pointer))) {
		if ((*(WrapperStruct00_var_1_7_Pointer)) || (*(WrapperStruct00_var_1_5_Pointer))) {
			(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 0);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 32766);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 32766);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
	last_1_WrapperStruct00_var_1_11 = WrapperStruct00.var_1_11;
	last_1_WrapperStruct00_var_1_13 = WrapperStruct00.var_1_13;
}

int property(void) {
	return (((((last_1_WrapperStruct00_var_1_13 > last_1_WrapperStruct00_var_1_11) ? ((last_1_WrapperStruct00_var_1_13 < (min (last_1_WrapperStruct00_var_1_11 , last_1_WrapperStruct00_var_1_13))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) last_1_WrapperStruct00_var_1_13)) : 1) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) (abs (max (last_1_WrapperStruct00_var_1_13 , last_1_WrapperStruct00_var_1_11)))))) && ((*(WrapperStruct00_var_1_6_Pointer)) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned char) (! (*(WrapperStruct00_var_1_7_Pointer))))) : 1)) && ((*(WrapperStruct00_var_1_5_Pointer)) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))))) : 1)) && (((~ (*(WrapperStruct00_var_1_10_Pointer))) < (*(WrapperStruct00_var_1_9_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned long int) ((max (last_1_WrapperStruct00_var_1_13 , ((*(WrapperStruct00_var_1_12_Pointer)) - last_1_WrapperStruct00_var_1_1))) + (max (last_1_WrapperStruct00_var_1_1 , (*(WrapperStruct00_var_1_10_Pointer))))))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned long int) ((max ((*(WrapperStruct00_var_1_12_Pointer)) , last_1_WrapperStruct00_var_1_13)) + (*(WrapperStruct00_var_1_10_Pointer))))))) && (((*(WrapperStruct00_var_1_1_Pointer)) != (*(WrapperStruct00_var_1_12_Pointer))) ? (((*(WrapperStruct00_var_1_7_Pointer)) || (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_11_Pointer)))) : 1) : 1)
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
