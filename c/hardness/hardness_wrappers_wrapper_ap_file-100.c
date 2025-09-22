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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch100Wrapper_AP.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[5] = {
	0, 0, 0, 1, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[3]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer = &(BOOL_unsigned_char_Array_0[4]);
signed short int signed_short_int_Array_0[2][3] = {
	{10000, -128, 50}, {200, 1, 100}
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[0][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[1][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer = &(signed_short_int_Array_0[0][2]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer = &(signed_short_int_Array_0[1][2]);
unsigned char unsigned_char_Array_0[3] = {
	128, 128, 64
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned long int unsigned_long_int_Array_0[2][2][2] = {
	{{25, 50}, {1401937267, 16}}, {{1707018182, 10000}, {1438530836, 8}}
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0][0][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1][0][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[0][1][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[1][1][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer = &(unsigned_long_int_Array_0[0][0][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer = &(unsigned_long_int_Array_0[1][0][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var6_Pointer = &(unsigned_long_int_Array_0[0][1][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var7_Pointer = &(unsigned_long_int_Array_0[1][1][1]);

// Calibration values

// Last'ed variables
unsigned char last_1_BOOL_unsigned_char_Array_0_0_ = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch100Wrapper_AP
	unsigned char stepLocal_0 = last_1_BOOL_unsigned_char_Array_0_0_;
	if (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var6_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer))) || stepLocal_0) {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var7_Pointer)) = (min ((min ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) , 32u)) , (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) - ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))));
	} else {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var7_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer));
	}


	// From: Req4Batch100Wrapper_AP
	signed long int stepLocal_2 = 1000;
	if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) < stepLocal_2) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) && (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var7_Pointer)) > 64u) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer))));
	} else {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (! ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))));
	}


	// From: Req2Batch100Wrapper_AP
	(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) - (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) + (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer))))));


	// From: Req3Batch100Wrapper_AP
	signed long int stepLocal_1 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) % (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
	if (stepLocal_1 <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var7_Pointer))) {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (min ((max ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) , 128)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 0);
	BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 1);
	BOOL_unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[4] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[4] <= 1);
	signed_short_int_Array_0[0][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][0] >= 8191);
	assume_abort_if_not(signed_short_int_Array_0[0][0] <= 16383);
	signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][0] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[1][0] <= 8191);
	signed_short_int_Array_0[1][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][1] >= -1);
	assume_abort_if_not(signed_short_int_Array_0[1][1] <= 32766);
	signed_short_int_Array_0[0][2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][2] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[0][2] <= 16383);
	signed_short_int_Array_0[1][2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][2] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[1][2] <= 16383);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
	unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[2] <= 254);
	unsigned_long_int_Array_0[0][0][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][0][0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0][0][0] <= 1073741823);
	unsigned_long_int_Array_0[1][0][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][0][0] >= 1073741823);
	assume_abort_if_not(unsigned_long_int_Array_0[1][0][0] <= 2147483647);
	unsigned_long_int_Array_0[0][1][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][1][0] >= 1073741824);
	assume_abort_if_not(unsigned_long_int_Array_0[0][1][0] <= 2147483647);
	unsigned_long_int_Array_0[1][1][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][1][0] >= 1073741823);
	assume_abort_if_not(unsigned_long_int_Array_0[1][1][0] <= 2147483647);
	unsigned_long_int_Array_0[0][0][1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][0][1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0][0][1] <= 4294967294);
	unsigned_long_int_Array_0[1][0][1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][0][1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1][0][1] <= 4294967295);
	unsigned_long_int_Array_0[0][1][1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][1][1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0][1][1] <= 4294967295);
}



void updateLastVariables(void) {
	last_1_BOOL_unsigned_char_Array_0_0_ = BOOL_unsigned_char_Array_0[0];
}

int property(void) {
	return ((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var6_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer))) || last_1_BOOL_unsigned_char_Array_0_0_) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var7_Pointer)) == ((unsigned long int) (min ((min ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) , 32u)) , (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) - ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var7_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))) && ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) - (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) + (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer))))))))) && ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) % (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var7_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (min ((max ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) , 128)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))))) : 1)) && (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) < 1000) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) && (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var7_Pointer)) > 64u) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (! ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)))))))
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
