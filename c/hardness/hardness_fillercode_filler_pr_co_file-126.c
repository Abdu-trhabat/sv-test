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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch126Filler_PR_CO.c", 13, "reach_error"); }
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
double var_1_1 = 100000000000.8;
unsigned char var_1_2 = 0;
double var_1_3 = 5.2;
double var_1_4 = 15.25;
double var_1_5 = 49.25;
signed char var_1_6 = -16;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
signed char var_1_9 = 1;
double var_1_10 = 10000000.2;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 2;
unsigned long int var_1_14 = 32;
signed long int var_1_15 = 128;
unsigned long int var_1_16 = 3753789395;
unsigned long int var_1_17 = 1000000000;
unsigned long int var_1_18 = 16;
signed long int var_1_19 = 128;
double var_1_20 = 500.6;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 10;
double var_1_23 = 0.0;
double var_1_24 = 5.8;
double var_1_25 = 64.375;
double var_1_26 = 1.5;
double var_1_27 = 24.75;
double var_1_28 = 256.5;
unsigned char var_1_29 = 2;
unsigned char var_1_30 = 50;
signed long int var_1_31 = -10;
signed long int var_1_32 = -64;
unsigned char var_1_33 = 2;
signed short int var_1_34 = -8;
signed char var_1_35 = -2;
signed short int var_1_36 = 200;
signed long int var_1_37 = 64;
signed char var_1_38 = 2;
signed char var_1_39 = 16;
signed char var_1_40 = 1;
signed char var_1_41 = -4;
unsigned short int var_1_42 = 100;
signed char var_1_43 = -1;
unsigned char var_1_44 = 1;
float var_1_45 = 127.65;
float var_1_46 = 999999999.5;
float var_1_47 = 10000000.2;
float var_1_48 = 2.5;
unsigned char var_1_49 = 32;
float var_1_50 = 49.5;
float var_1_51 = 255.5;
unsigned char var_1_52 = 32;
unsigned long int var_1_53 = 10;
unsigned long int var_1_54 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch126Filler_PR_CO
	/* 820L, 9L, 260L, 268L) */ if (var_1_2) {
		/* 822L, 8L, 262L, 270L) */ var_1_1 = (
			var_1_3
		);
	}


	// From: CodeObject8
	/* 365L, 225L) */ if (/* 366L, 198L, 199L) */ ((var_1_47) > (/* 368L, 197L, 201L) */ (min (/* 368L, 197L, 201L) */ (/* 369L, 193L, 202L) */ (max (/* 369L, 193L, 202L) */ (var_1_46) , (var_1_48)))) , (/* 372L, 196L, 205L) */ ((var_1_50) - (var_1_51)))))))) {
		/* 375L, 224L) */ var_1_49 = (
			/* 378L, 223L) */ (min (
				/* 378L, 223L) */ (
					/* 379L, 221L) */ (max (
						/* 379L, 221L) */ (
							var_1_33
						) , (
							5
						)
					))
				) , (
					1
				)
			))
		);
	}


	// From: CodeObject10
	/* 389L, 240L) */ var_1_53 = (
		var_1_14
	);


	// From: Req2Batch126Filler_PR_CO
	/* 828L, 28L, 292L, 306L) */ if (var_1_2) {
		/* 830L, 21L, 294L, 308L) */ var_1_4 = (
			var_1_3
		);
	} else {
		/* 834L, 27L, 298L, 312L) */ var_1_4 = (
			/* 837L, 26L, 301L, 315L) */ ((
				var_1_5
			) + (
				7.75
			))
		);
	}


	// From: CodeObject7
	/* 346L, 184L) */ if (/* 347L, 159L, 160L) */ ((-128) <= (var_1_14))) {
		/* 350L, 173L) */ if (var_1_44) {
			/* 352L, 172L) */ var_1_45 = (
				var_1_46
			);
		}
	} else {
		/* 356L, 183L) */ var_1_45 = (
			/* 359L, 182L) */ ((
				/* 360L, 179L) */ ((
					var_1_47
				) + (
					49.25f
				))
			) + (
				/* 363L, 181L) */ (abs (
					var_1_48
				))
			))
		);
	}


	// From: Req7Batch126Filler_PR_CO
	unsigned char stepLocal_1 = var_1_12;
	/* 957L, 245L, 651L, 687L) */ if (var_1_7) {
		/* 930L, 204L, 653L, 689L) */ var_1_20 = (
			/* 929L, 203L, 656L, 692L) */ (max (
				/* 929L, 203L, 656L, 692L) */ (
					var_1_3
				) , (
					var_1_5
				)
			))
		);
	} else {
		/* 956L, 243L, 659L, 695L) */ if (/* 935L, 210L, 211L, 660L, 696L) */ ((stepLocal_1) <= (/* 934L, 209L, 213L, 662L, 698L) */ ((/* 932L, 207L, 214L, 663L, 699L) */ (abs (var_1_21))) - (var_1_22))))) {
			/* 949L, 236L, 666L, 702L) */ var_1_20 = (
				/* 948L, 235L, 669L, 705L) */ ((
					/* 942L, 229L, 670L, 706L) */ ((
						var_1_23
					) - (
						/* 941L, 228L, 672L, 708L) */ (min (
							/* 941L, 228L, 672L, 708L) */ (
								var_1_24
							) , (
								var_1_25
							)
						))
					))
				) - (
					/* 947L, 234L, 675L, 711L) */ (max (
						/* 947L, 234L, 675L, 711L) */ (
							var_1_26
						) , (
							/* 946L, 233L, 677L, 713L) */ ((
								var_1_27
							) + (
								var_1_28
							))
						)
					))
				))
			);
		} else {
			/* 955L, 242L, 680L, 716L) */ var_1_20 = (
				/* 954L, 241L, 683L, 719L) */ ((
					7.5
				) - (
					var_1_23
				))
			);
		}
	}


	// From: Req8Batch126Filler_PR_CO
	/* 962L, 254L, 796L, 802L) */ var_1_29 = (
		var_1_22
	);


	// From: CodeObject2
	/* 280L, 29L) */ var_1_34 = (
		var_1_11
	);


	// From: CodeObject3
	/* 284L, 88L) */ if (/* 285L, 42L, 43L) */ ((/* 286L, 36L, 44L) */ ((var_1_14) % (var_1_36))) < (/* 289L, 41L, 47L) */ ((/* 290L, 39L, 48L) */ (min (/* 290L, 39L, 48L) */ (var_1_33) , (var_1_29)))) - (var_1_37))))) {
		/* 294L, 86L) */ if (/* 295L, 63L, 64L) */ ((-10) > (var_1_14))) {
			/* 298L, 73L) */ var_1_35 = (
				var_1_38
			);
		} else {
			/* 302L, 85L) */ var_1_35 = (
				5
			);
		}
	}


	// From: Req3Batch126Filler_PR_CO
	/* 844L, 67L, 350L, 368L) */ if (var_1_2) {
		/* 846L, 65L, 352L, 370L) */ if (/* 847L, 43L, 44L, 353L, 371L) */ ((var_1_20) <= (var_1_5))) {
			/* 850L, 63L, 356L, 374L) */ if (/* 851L, 52L, 53L, 357L, 375L) */ ((var_1_7) || (var_1_8))) {
				/* 854L, 62L, 360L, 378L) */ var_1_6 = (
					var_1_9
				);
			}
		}
	}


	// From: CodeObject4
	/* 306L, 122L) */ if (/* 307L, 98L, 99L) */ ((/* 308L, 96L, 100L) */ ((var_1_38) / (/* 310L, 95L, 102L) */ (max (/* 310L, 95L, 102L) */ (var_1_36) , (2)))))) > (var_1_29))) {
		/* 314L, 121L) */ var_1_39 = (
			/* 317L, 120L) */ ((
				/* 318L, 118L) */ ((
					4
				) - (
					/* 320L, 117L) */ (abs (
						var_1_40
					))
				))
			) + (
				var_1_41
			))
		);
	}


	// From: CodeObject5
	/* 325L, 130L) */ var_1_42 = (
		/* 328L, 129L) */ (abs (
			var_1_14
		))
	);


	// From: Req6Batch126Filler_PR_CO
	/* 892L, 186L, 529L, 560L) */ if (/* 893L, 144L, 145L, 530L, 561L) */ ((var_1_15) != (-10))) {
		/* 896L, 162L, 533L, 564L) */ var_1_14 = (
			/* 899L, 161L, 536L, 567L) */ ((
				/* 900L, 157L, 537L, 568L) */ ((
					var_1_16
				) - (
					/* 902L, 156L, 539L, 570L) */ ((
						var_1_17
					) - (
						var_1_12
					))
				))
			) - (
				/* 905L, 160L, 542L, 573L) */ (max (
					/* 905L, 160L, 542L, 573L) */ (
						var_1_29
					) , (
						var_1_18
					)
				))
			))
		);
	} else {
		/* 908L, 184L, 545L, 576L) */ if (/* 909L, 167L, 168L, 546L, 577L) */ ((-2) >= (/* 911L, 166L, 170L, 548L, 579L) */ ((var_1_19) / (var_1_16))))) {
			/* 914L, 183L, 551L, 582L) */ var_1_14 = (
				/* 917L, 182L, 554L, 585L) */ (max (
					/* 917L, 182L, 554L, 585L) */ (
						var_1_16
					) , (
						var_1_17
					)
				))
			);
		}
	}


	// From: CodeObject1
	/* 266L, 20L) */ if (/* 267L, 4L, 5L) */ ((var_1_31) > (var_1_32))) {
		/* 270L, 14L) */ var_1_30 = (
			var_1_33
		);
	} else {
		/* 274L, 19L) */ var_1_30 = (
			/* 277L, 18L) */ (abs (
				16
			))
		);
	}


	// From: CodeObject11
	/* 394L, 248L) */ var_1_54 = (
		var_1_37
	);


	// From: Req5Batch126Filler_PR_CO
	/* 877L, 132L, 469L, 484L) */ if (/* 878L, 113L, 114L, 470L, 485L) */ ((/* 879L, 111L, 115L, 471L, 486L) */ ((var_1_29) % (/* 881L, 110L, 117L, 473L, 488L) */ ((128) - (var_1_12))))) <= (var_1_14))) {
		/* 885L, 131L, 477L, 492L) */ var_1_11 = (
			var_1_12
		);
	}


	// From: Req4Batch126Filler_PR_CO
	unsigned char stepLocal_0 = var_1_8;
	/* 871L, 101L, 419L, 431L) */ if (/* 866L, 84L, 85L, 420L, 432L) */ ((stepLocal_0) || (/* 865L, 83L, 87L, 422L, 434L) */ ((/* 863L, 81L, 88L, 423L, 435L) */ (~ (var_1_11))) > (var_1_9))))) {
		/* 870L, 100L, 426L, 438L) */ var_1_10 = (
			var_1_5
		);
	}


	// From: CodeObject6
	/* 330L, 153L) */ if (var_1_44) {
		/* 332L, 147L) */ var_1_43 = (
			/* 335L, 146L) */ (max (
				/* 335L, 146L) */ (
					/* 336L, 144L) */ (max (
						/* 336L, 144L) */ (
							var_1_38
						) , (
							-64
						)
					))
				) , (
					var_1_41
				)
			))
		);
	} else {
		/* 340L, 152L) */ var_1_43 = (
			/* 343L, 151L) */ (abs (
				var_1_41
			))
		);
	}


	// From: CodeObject9
	/* 384L, 232L) */ var_1_52 = (
		var_1_33
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 126);
	assume_abort_if_not(var_1_12 != 127);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483648);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 3221225470);
	assume_abort_if_not(var_1_16 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 536870911);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483648);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 127);
	assume_abort_if_not(var_1_21 <= 255);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 4611686.018427383000e+12F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= -32768);
	assume_abort_if_not(var_1_36 <= 32767);
	assume_abort_if_not(var_1_36 != 0);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -127);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -63);
	assume_abort_if_not(var_1_41 <= 63);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -922337.2036854766000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= -230584.3009213691400e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -461168.6018427383000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_2) {
	}
	if (var_1_2) {
	} else {
	}
	if (var_1_2) {
		if (/* 426L, 43L, 47L, 389L, 407L, 995L) */ ((var_1_20) <= (var_1_5))) {
			if (/* 430L, 52L, 56L, 393L, 411L, 999L) */ ((var_1_7) || (var_1_8))) {
			}
		}
	}
	if (/* 439L, 84L, 91L, 444L, 456L, 1008L) */ ((var_1_8) || (/* 441L, 83L, 93L, 446L, 458L, 1010L) */ ((/* 442L, 81L, 94L, 447L, 459L, 1011L) */ (~ (var_1_11))) > (var_1_9))))) {
	}
	if (/* 453L, 113L, 121L, 500L, 515L, 1022L) */ ((/* 454L, 111L, 122L, 501L, 516L, 1023L) */ ((var_1_29) % (/* 456L, 110L, 124L, 503L, 518L, 1025L) */ ((128) - (var_1_12))))) <= (var_1_14))) {
	}
	if (/* 468L, 144L, 148L, 592L, 623L, 1037L) */ ((var_1_15) != (-10))) {
	} else {
		if (/* 484L, 167L, 173L, 608L, 639L, 1053L) */ ((-2) >= (/* 486L, 166L, 175L, 610L, 641L, 1055L) */ ((var_1_19) / (var_1_16))))) {
		}
	}
	if (var_1_7) {
	} else {
		if (/* 505L, 210L, 217L, 732L, 768L, 1074L) */ ((var_1_12) <= (/* 507L, 209L, 219L, 734L, 770L, 1076L) */ ((/* 508L, 207L, 220L, 735L, 771L, 1077L) */ (abs (var_1_21))) - (var_1_22))))) {
		} else {
		}
	}
	return /* 544L) */ ((
	/* 543L) */ ((
		/* 542L) */ ((
			/* 541L) */ ((
				/* 540L) */ ((
					/* 539L) */ ((
						/* 538L) */ ((
							/* 399L, 10L, 276L, 284L, 968L) */ ((
								var_1_2
							) ? (
								/* 401L, 8L, 278L, 286L, 970L) */ ((
									var_1_1
								) == (
									/* 401L, 8L, 278L, 286L, 970L) */ ((double) (
										var_1_3
									))
								))
							) : (
								1
							))
						) && (
							/* 407L, 29L, 320L, 334L, 976L) */ ((
								var_1_2
							) ? (
								/* 409L, 21L, 322L, 336L, 978L) */ ((
									var_1_4
								) == (
									/* 409L, 21L, 322L, 336L, 978L) */ ((double) (
										var_1_3
									))
								))
							) : (
								/* 413L, 27L, 326L, 340L, 982L) */ ((
									var_1_4
								) == (
									/* 413L, 27L, 326L, 340L, 982L) */ ((double) (
										/* 416L, 26L, 329L, 343L, 985L) */ ((
											var_1_5
										) + (
											7.75
										))
									))
								))
							))
						))
					) && (
						/* 423L, 68L, 386L, 404L, 992L) */ ((
							var_1_2
						) ? (
							/* 425L, 66L, 388L, 406L, 994L) */ ((
								/* 426L, 43L, 47L, 389L, 407L, 995L) */ ((
									var_1_20
								) <= (
									var_1_5
								))
							) ? (
								/* 429L, 64L, 392L, 410L, 998L) */ ((
									/* 430L, 52L, 56L, 393L, 411L, 999L) */ ((
										var_1_7
									) || (
										var_1_8
									))
								) ? (
									/* 433L, 62L, 396L, 414L, 1002L) */ ((
										var_1_6
									) == (
										/* 433L, 62L, 396L, 414L, 1002L) */ ((signed char) (
											var_1_9
										))
									))
								) : (
									1
								))
							) : (
								1
							))
						) : (
							1
						))
					))
				) && (
					/* 438L, 102L, 443L, 455L, 1007L) */ ((
						/* 439L, 84L, 91L, 444L, 456L, 1008L) */ ((
							var_1_8
						) || (
							/* 441L, 83L, 93L, 446L, 458L, 1010L) */ ((
								/* 442L, 81L, 94L, 447L, 459L, 1011L) */ (~ (
									var_1_11
								))
							) > (
								var_1_9
							))
						))
					) ? (
						/* 445L, 100L, 450L, 462L, 1014L) */ ((
							var_1_10
						) == (
							/* 445L, 100L, 450L, 462L, 1014L) */ ((double) (
								var_1_5
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 452L, 133L, 499L, 514L, 1021L) */ ((
					/* 453L, 113L, 121L, 500L, 515L, 1022L) */ ((
						/* 454L, 111L, 122L, 501L, 516L, 1023L) */ ((
							var_1_29
						) % (
							/* 456L, 110L, 124L, 503L, 518L, 1025L) */ ((
								128
							) - (
								var_1_12
							))
						))
					) <= (
						var_1_14
					))
				) ? (
					/* 460L, 131L, 507L, 522L, 1029L) */ ((
						var_1_11
					) == (
						/* 460L, 131L, 507L, 522L, 1029L) */ ((unsigned char) (
							var_1_12
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 467L, 187L, 591L, 622L, 1036L) */ ((
				/* 468L, 144L, 148L, 592L, 623L, 1037L) */ ((
					var_1_15
				) != (
					-10
				))
			) ? (
				/* 471L, 162L, 595L, 626L, 1040L) */ ((
					var_1_14
				) == (
					/* 471L, 162L, 595L, 626L, 1040L) */ ((unsigned long int) (
						/* 474L, 161L, 598L, 629L, 1043L) */ ((
							/* 475L, 157L, 599L, 630L, 1044L) */ ((
								var_1_16
							) - (
								/* 477L, 156L, 601L, 632L, 1046L) */ ((
									var_1_17
								) - (
									var_1_12
								))
							))
						) - (
							/* 480L, 160L, 604L, 635L, 1049L) */ (max (
								/* 480L, 160L, 604L, 635L, 1049L) */ (
									var_1_29
								) , (
									var_1_18
								)
							))
						))
					))
				))
			) : (
				/* 483L, 185L, 607L, 638L, 1052L) */ ((
					/* 484L, 167L, 173L, 608L, 639L, 1053L) */ ((
						-2
					) >= (
						/* 486L, 166L, 175L, 610L, 641L, 1055L) */ ((
							var_1_19
						) / (
							var_1_16
						))
					))
				) ? (
					/* 489L, 183L, 613L, 644L, 1058L) */ ((
						var_1_14
					) == (
						/* 489L, 183L, 613L, 644L, 1058L) */ ((unsigned long int) (
							/* 492L, 182L, 616L, 647L, 1061L) */ (max (
								/* 492L, 182L, 616L, 647L, 1061L) */ (
									var_1_16
								) , (
									var_1_17
								)
							))
						))
					))
				) : (
					1
				))
			))
		))
	) && (
		/* 496L, 246L, 723L, 759L, 1065L) */ ((
			var_1_7
		) ? (
			/* 498L, 204L, 725L, 761L, 1067L) */ ((
				var_1_20
			) == (
				/* 498L, 204L, 725L, 761L, 1067L) */ ((double) (
					/* 501L, 203L, 728L, 764L, 1070L) */ (max (
						/* 501L, 203L, 728L, 764L, 1070L) */ (
							var_1_3
						) , (
							var_1_5
						)
					))
				))
			))
		) : (
			/* 504L, 244L, 731L, 767L, 1073L) */ ((
				/* 505L, 210L, 217L, 732L, 768L, 1074L) */ ((
					var_1_12
				) <= (
					/* 507L, 209L, 219L, 734L, 770L, 1076L) */ ((
						/* 508L, 207L, 220L, 735L, 771L, 1077L) */ (abs (
							var_1_21
						))
					) - (
						var_1_22
					))
				))
			) ? (
				/* 511L, 236L, 738L, 774L, 1080L) */ ((
					var_1_20
				) == (
					/* 511L, 236L, 738L, 774L, 1080L) */ ((double) (
						/* 514L, 235L, 741L, 777L, 1083L) */ ((
							/* 515L, 229L, 742L, 778L, 1084L) */ ((
								var_1_23
							) - (
								/* 517L, 228L, 744L, 780L, 1086L) */ (min (
									/* 517L, 228L, 744L, 780L, 1086L) */ (
										var_1_24
									) , (
										var_1_25
									)
								))
							))
						) - (
							/* 520L, 234L, 747L, 783L, 1089L) */ (max (
								/* 520L, 234L, 747L, 783L, 1089L) */ (
									var_1_26
								) , (
									/* 522L, 233L, 749L, 785L, 1091L) */ ((
										var_1_27
									) + (
										var_1_28
									))
								)
							))
						))
					))
				))
			) : (
				/* 525L, 242L, 752L, 788L, 1094L) */ ((
					var_1_20
				) == (
					/* 525L, 242L, 752L, 788L, 1094L) */ ((double) (
						/* 528L, 241L, 755L, 791L, 1097L) */ ((
							7.5
						) - (
							var_1_23
						))
					))
				))
			))
		))
	))
) && (
	/* 533L, 254L, 808L, 814L, 1102L) */ ((
		var_1_29
	) == (
		/* 533L, 254L, 808L, 814L, 1102L) */ ((unsigned char) (
			var_1_22
		))
	))
))
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
