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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch2Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned short int var_1_1;
	signed char var_1_2;
	signed char var_1_3;
	signed char var_1_4;
	unsigned short int var_1_5;
	unsigned short int var_1_6;
	unsigned short int var_1_7;
	unsigned short int var_1_8;
	unsigned short int var_1_9;
	unsigned char var_1_10;
	unsigned long int var_1_11;
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
	10,
	2,
	4,
	0,
	200,
	56955,
	32,
	1,
	8,
	1,
	1000000000
};

// Calibration values

// Last'ed variables
unsigned long int last_1_WrapperStruct00_var_1_11 = 1000000000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch2Wrapper_S
	if (WrapperStruct00.var_1_10 || (WrapperStruct00.var_1_6 == WrapperStruct00.var_1_8)) {
		if (WrapperStruct00.var_1_6 <= ((min (0 , last_1_WrapperStruct00_var_1_11)) << last_1_WrapperStruct00_var_1_11)) {
			if (WrapperStruct00.var_1_10 && (last_1_WrapperStruct00_var_1_11 == (WrapperStruct00.var_1_6 * WrapperStruct00.var_1_5))) {
				WrapperStruct00.var_1_9 = WrapperStruct00.var_1_5;
			} else {
				WrapperStruct00.var_1_9 = 2;
			}
		} else {
			WrapperStruct00.var_1_9 = WrapperStruct00.var_1_6;
		}
	} else {
		WrapperStruct00.var_1_9 = WrapperStruct00.var_1_6;
	}


	// From: Req1Batch2Wrapper_S
	if (WrapperStruct00.var_1_2 <= (WrapperStruct00.var_1_3 * WrapperStruct00.var_1_4)) {
		WrapperStruct00.var_1_1 = (max (WrapperStruct00.var_1_5 , (max ((WrapperStruct00.var_1_6 - WrapperStruct00.var_1_7) , WrapperStruct00.var_1_8))));
	}


	// From: Req3Batch2Wrapper_S
	unsigned long int stepLocal_1 = - (WrapperStruct00.var_1_5 ^ 128u);
	unsigned short int stepLocal_0 = WrapperStruct00.var_1_1;
	if (WrapperStruct00.var_1_7 > stepLocal_0) {
		if (WrapperStruct00.var_1_10) {
			if (stepLocal_1 < WrapperStruct00.var_1_9) {
				WrapperStruct00.var_1_11 = WrapperStruct00.var_1_7;
			}
		} else {
			WrapperStruct00.var_1_11 = 1u;
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 127);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 127);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 127);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 65534);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 65534);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 32767);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 65534);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_11 = WrapperStruct00.var_1_11;
}

int property(void) {
	return (((WrapperStruct00.var_1_2 <= (WrapperStruct00.var_1_3 * WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_1 == ((unsigned short int) (max (WrapperStruct00.var_1_5 , (max ((WrapperStruct00.var_1_6 - WrapperStruct00.var_1_7) , WrapperStruct00.var_1_8)))))) : 1) && ((WrapperStruct00.var_1_10 || (WrapperStruct00.var_1_6 == WrapperStruct00.var_1_8)) ? ((WrapperStruct00.var_1_6 <= ((min (0 , last_1_WrapperStruct00_var_1_11)) << last_1_WrapperStruct00_var_1_11)) ? ((WrapperStruct00.var_1_10 && (last_1_WrapperStruct00_var_1_11 == (WrapperStruct00.var_1_6 * WrapperStruct00.var_1_5))) ? (WrapperStruct00.var_1_9 == ((unsigned short int) WrapperStruct00.var_1_5)) : (WrapperStruct00.var_1_9 == ((unsigned short int) 2))) : (WrapperStruct00.var_1_9 == ((unsigned short int) WrapperStruct00.var_1_6))) : (WrapperStruct00.var_1_9 == ((unsigned short int) WrapperStruct00.var_1_6)))) && ((WrapperStruct00.var_1_7 > WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_10 ? (((- (WrapperStruct00.var_1_5 ^ 128u)) < WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_11 == ((unsigned long int) WrapperStruct00.var_1_7)) : 1) : (WrapperStruct00.var_1_11 == ((unsigned long int) 1u))) : 1)
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
