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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch156Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	signed char var_1_3;
	unsigned char var_1_4;
	unsigned char var_1_5;
	unsigned short int var_1_6;
	signed long int var_1_7;
	unsigned short int var_1_8;
	unsigned short int var_1_9;
	unsigned short int var_1_10;
	unsigned long int var_1_11;
	signed long int var_1_12;
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
	1,
	-5,
	0,
	5,
	256,
	1,
	5,
	50049,
	35813,
	32,
	1985015368
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_1 = 1;
unsigned short int last_1_WrapperStruct00_var_1_6 = 256;
unsigned short int last_1_WrapperStruct00_var_1_8 = 5;
unsigned long int last_1_WrapperStruct00_var_1_11 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch156Wrapper_SP
	if ((last_1_WrapperStruct00_var_1_1 % (*(WrapperStruct00_var_1_9_Pointer))) <= (((*(WrapperStruct00_var_1_12_Pointer)) - last_1_WrapperStruct00_var_1_8) - last_1_WrapperStruct00_var_1_6)) {
		(*(WrapperStruct00_var_1_11_Pointer)) = 32u;
	}


	// From: Req1Batch156Wrapper_SP
	if (last_1_WrapperStruct00_var_1_11 <= last_1_WrapperStruct00_var_1_6) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (min ((*(WrapperStruct00_var_1_4_Pointer)) , (*(WrapperStruct00_var_1_5_Pointer))));
	}


	// From: Req2Batch156Wrapper_SP
	signed long int stepLocal_1 = (*(WrapperStruct00_var_1_4_Pointer)) % (*(WrapperStruct00_var_1_7_Pointer));
	unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_1_Pointer));
	if (stepLocal_0 < (*(WrapperStruct00_var_1_3_Pointer))) {
		if (((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_1_Pointer))) >= stepLocal_1) {
			(*(WrapperStruct00_var_1_6_Pointer)) = (100 + (*(WrapperStruct00_var_1_5_Pointer)));
		} else {
			(*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
		}
	}


	// From: Req3Batch156Wrapper_SP
	if (! ((*(WrapperStruct00_var_1_1_Pointer)) <= (*(WrapperStruct00_var_1_6_Pointer)))) {
		if (((*(WrapperStruct00_var_1_9_Pointer)) - (max ((*(WrapperStruct00_var_1_4_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer))))) >= (*(WrapperStruct00_var_1_5_Pointer))) {
			(*(WrapperStruct00_var_1_8_Pointer)) = ((abs ((*(WrapperStruct00_var_1_10_Pointer)))) - (*(WrapperStruct00_var_1_5_Pointer)));
		} else {
			(*(WrapperStruct00_var_1_8_Pointer)) = (max (32 , (*(WrapperStruct00_var_1_11_Pointer))));
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 127);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 254);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 254);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_7 != 0);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 65535);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 65534);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
	last_1_WrapperStruct00_var_1_6 = WrapperStruct00.var_1_6;
	last_1_WrapperStruct00_var_1_8 = WrapperStruct00.var_1_8;
	last_1_WrapperStruct00_var_1_11 = WrapperStruct00.var_1_11;
}

int property(void) {
	return ((((last_1_WrapperStruct00_var_1_11 <= last_1_WrapperStruct00_var_1_6) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (min ((*(WrapperStruct00_var_1_4_Pointer)) , (*(WrapperStruct00_var_1_5_Pointer)))))) : 1) && (((*(WrapperStruct00_var_1_1_Pointer)) < (*(WrapperStruct00_var_1_3_Pointer))) ? ((((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_1_Pointer))) >= ((*(WrapperStruct00_var_1_4_Pointer)) % (*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned short int) (100 + (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_5_Pointer))))) : 1)) && ((! ((*(WrapperStruct00_var_1_1_Pointer)) <= (*(WrapperStruct00_var_1_6_Pointer)))) ? ((((*(WrapperStruct00_var_1_9_Pointer)) - (max ((*(WrapperStruct00_var_1_4_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer))))) >= (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned short int) ((abs ((*(WrapperStruct00_var_1_10_Pointer)))) - (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned short int) (max (32 , (*(WrapperStruct00_var_1_11_Pointer))))))) : 1)) && (((last_1_WrapperStruct00_var_1_1 % (*(WrapperStruct00_var_1_9_Pointer))) <= (((*(WrapperStruct00_var_1_12_Pointer)) - last_1_WrapperStruct00_var_1_8) - last_1_WrapperStruct00_var_1_6)) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned long int) 32u)) : 1)
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
