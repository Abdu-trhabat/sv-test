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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch172Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned short int var_1_2;
	unsigned short int var_1_3;
	unsigned char var_1_5;
	unsigned char var_1_6;
	signed long int var_1_7;
	signed long int var_1_8;
	signed long int var_1_9;
	signed long int var_1_10;
	signed short int var_1_11;
	signed short int var_1_12;
	signed short int var_1_13;
	float var_1_14;
	float var_1_15;
	float var_1_16;
	unsigned char var_1_17;
	unsigned char var_1_18;
	unsigned char var_1_19;
	unsigned char var_1_20;
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
	0,
	5,
	0,
	0,
	-64,
	-25,
	50,
	0,
	8,
	-128,
	-2,
	0.75,
	49.5,
	1000.25,
	25,
	64,
	0,
	128
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch172Wrapper_S
	if (WrapperStruct00.var_1_3 < WrapperStruct00.var_1_2) {
		WrapperStruct00.var_1_7 = (WrapperStruct00.var_1_2 + ((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_8) + (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10)));
	} else {
		WrapperStruct00.var_1_7 = (max (-4 , ((max (128 , WrapperStruct00.var_1_2)) - WrapperStruct00.var_1_9)));
	}


	// From: Req3Batch172Wrapper_S
	WrapperStruct00.var_1_11 = (min (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_13));


	// From: Req4Batch172Wrapper_S
	unsigned char stepLocal_0 = WrapperStruct00.var_1_5;
	if (stepLocal_0 && (WrapperStruct00.var_1_7 != WrapperStruct00.var_1_9)) {
		WrapperStruct00.var_1_14 = (WrapperStruct00.var_1_15 + (max (3.25f , WrapperStruct00.var_1_16)));
	}


	// From: Req5Batch172Wrapper_S
	WrapperStruct00.var_1_17 = WrapperStruct00.var_1_18;


	// From: Req6Batch172Wrapper_S
	WrapperStruct00.var_1_19 = WrapperStruct00.var_1_5;


	// From: Req7Batch172Wrapper_S
	WrapperStruct00.var_1_20 = WrapperStruct00.var_1_18;


	// From: Req1Batch172Wrapper_S
	if (WrapperStruct00.var_1_2 >= WrapperStruct00.var_1_3) {
		WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_19 || WrapperStruct00.var_1_5);
	} else {
		if (WrapperStruct00.var_1_2 >= WrapperStruct00.var_1_3) {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
		} else {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_5;
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 65535);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 65535);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 0);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= -268435455);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 268435456);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 536870911);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 536870911);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 32766);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 32766);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_16 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((WrapperStruct00.var_1_2 >= WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((unsigned char) (WrapperStruct00.var_1_19 || WrapperStruct00.var_1_5))) : ((WrapperStruct00.var_1_2 >= WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_5)))) && ((WrapperStruct00.var_1_3 < WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_7 == ((signed long int) (WrapperStruct00.var_1_2 + ((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_8) + (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10))))) : (WrapperStruct00.var_1_7 == ((signed long int) (max (-4 , ((max (128 , WrapperStruct00.var_1_2)) - WrapperStruct00.var_1_9))))))) && (WrapperStruct00.var_1_11 == ((signed short int) (min (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_13))))) && ((WrapperStruct00.var_1_5 && (WrapperStruct00.var_1_7 != WrapperStruct00.var_1_9)) ? (WrapperStruct00.var_1_14 == ((float) (WrapperStruct00.var_1_15 + (max (3.25f , WrapperStruct00.var_1_16))))) : 1)) && (WrapperStruct00.var_1_17 == ((unsigned char) WrapperStruct00.var_1_18))) && (WrapperStruct00.var_1_19 == ((unsigned char) WrapperStruct00.var_1_5))) && (WrapperStruct00.var_1_20 == ((unsigned char) WrapperStruct00.var_1_18))
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
