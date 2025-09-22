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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch46Filler_PR_CN.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 10;
signed long int var_1_6 = 2;
signed char var_1_7 = 10;
signed long int var_1_8 = -25;
signed char var_1_9 = -16;
signed char var_1_10 = -2;
signed char var_1_11 = 2;
signed char var_1_12 = 10;
signed char var_1_13 = 4;
signed char var_1_14 = -10;
double var_1_15 = 32.25;
double var_1_16 = 64.7;
double var_1_17 = 9.42;
double var_1_18 = 0.0;
unsigned short int var_1_19 = 8;
signed long int var_1_20 = 256;
unsigned short int var_1_21 = 8;
unsigned short int var_1_22 = 27400;
double var_1_23 = 499.5;
double var_1_24 = 50.5;
unsigned char var_1_25 = 8;
unsigned long int var_1_26 = 32;
unsigned long int var_1_27 = 10;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 16;
unsigned char var_1_33 = 128;
signed long int var_1_34 = 5;
signed long int var_1_35 = 128;
unsigned char var_1_36 = 128;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 2;
double var_1_39 = 32.5;
double var_1_40 = 32.2;
double var_1_41 = 128.5;
double var_1_42 = 24.5;
double var_1_43 = 15.8;
unsigned char var_1_44 = 32;
unsigned long int var_1_45 = 256;
unsigned long int var_1_46 = 1000;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_20 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch46Filler_PR_CN
	unsigned char stepLocal_0 = var_1_3;
	/* 914L, 27L, 269L, 284L) */ if (/* 903L, 4L, 5L, 270L, 285L) */ ((var_1_2) && (stepLocal_0))) {
		/* 909L, 16L, 273L, 288L) */ var_1_1 = (
			/* 908L, 15L, 276L, 291L) */ ((
				var_1_4
			) - (
				var_1_5
			))
		);
	} else {
		/* 913L, 26L, 279L, 294L) */ var_1_1 = (
			var_1_4
		);
	}


	// From: CodeObject9
	/* 227L) */ var_1_45 = (
		var_1_46
	);


	// From: Req2Batch46Filler_PR_CN
	/* 919L, 38L, 330L, 338L) */ var_1_6 = (
		/* 922L, 37L, 333L, 341L) */ ((
			var_1_5
		) + (
			var_1_4
		))
	);


	// From: Req3Batch46Filler_PR_CN
	signed long int stepLocal_1 = /* 927L, 47L, 51L, 363L, 385L) */ ((var_1_4) / (var_1_8));
	/* 948L, 75L, 361L, 383L) */ if (/* 932L, 49L, 50L, 362L, 384L) */ ((stepLocal_1) != (var_1_1))) {
		/* 941L, 68L, 367L, 389L) */ var_1_7 = (
			/* 940L, 67L, 370L, 392L) */ (min (
				/* 940L, 67L, 370L, 392L) */ (
					/* 938L, 65L, 371L, 393L) */ ((
						/* 936L, 63L, 372L, 394L) */ (abs (
							var_1_9
						))
					) + (
						var_1_10
					))
				) , (
					var_1_11
				)
			))
		);
	} else {
		/* 947L, 74L, 376L, 398L) */ var_1_7 = (
			/* 946L, 73L, 379L, 401L) */ ((
				var_1_12
			) - (
				var_1_13
			))
		);
	}


	// From: CodeObject4
	/* 84L) */ if (/* 61L, 60L) */ ((var_1_27) != (/* 63L, 59L) */ ((var_1_32) + (var_1_26))))) {
		/* 79L) */ var_1_34 = (
			/* 78L) */ (max (
				/* 78L) */ (
					var_1_33
				) , (
					/* 77L) */ (min (
						/* 77L) */ (
							/* 75L) */ (abs (
								var_1_32
							))
						) , (
							var_1_35
						)
					))
				)
			))
		);
	} else {
		/* 83L) */ var_1_34 = (
			var_1_32
		);
	}


	// From: CodeObject7
	/* 208L) */ if (/* 170L, 169L) */ ((-5) > (/* 172L, 168L) */ (~ (var_1_36))))) {
		/* 181L) */ var_1_41 = (
			var_1_40
		);
	} else {
		/* 206L) */ if (/* 186L, 185L) */ (! (/* 187L, 184L) */ ((var_1_39) <= (var_1_40))))) {
			/* 197L) */ var_1_41 = (
				var_1_40
			);
		} else {
			/* 205L) */ var_1_41 = (
				/* 204L) */ (min (
					/* 204L) */ (
						/* 202L) */ ((
							var_1_40
						) + (
							var_1_42
						))
					) , (
						var_1_43
					)
				))
			);
		}
	}


	// From: Req4Batch46Filler_PR_CN
	signed long int stepLocal_2 = var_1_8;
	/* 981L, 141L, 507L, 536L) */ if (/* 961L, 87L, 88L, 508L, 537L) */ ((/* 959L, 85L, 89L, 509L, 538L) */ ((var_1_15) * (/* 958L, 84L, 91L, 511L, 540L) */ (max (/* 958L, 84L, 91L, 511L, 540L) */ (var_1_16) , (var_1_17)))))) >= (var_1_18))) {
		/* 980L, 139L, 515L, 544L) */ if (/* 969L, 110L, 111L, 516L, 545L) */ ((stepLocal_2) < (/* 968L, 109L, 113L, 518L, 547L) */ ((/* 964L, 105L, 114L, 519L, 548L) */ ((var_1_5) << (var_1_11))) + (/* 967L, 108L, 117L, 522L, 551L) */ ((var_1_4) + (var_1_6))))))) {
			/* 973L, 132L, 525L, 554L) */ var_1_14 = (
				var_1_12
			);
		} else {
			/* 979L, 138L, 529L, 558L) */ var_1_14 = (
				/* 978L, 137L, 532L, 561L) */ ((
					var_1_9
				) + (
					var_1_10
				))
			);
		}
	}


	// From: CodeObject6
	/* 159L) */ if (/* 137L, 136L) */ ((/* 138L, 134L) */ (min (/* 138L, 134L) */ (/* 139L, 130L) */ (- (128))) , (/* 141L, 133L) */ ((128) ^ (var_1_38)))))) >= (var_1_34))) {
		/* 158L) */ var_1_39 = (
			/* 157L) */ ((
				var_1_40
			) + (
				5.75
			))
		);
	}


	// From: Req6Batch46Filler_PR_CN
	/* 1010L, 203L, 698L, 716L) */ if (/* 1011L, 185L, 186L, 699L, 717L) */ ((/* 1012L, 183L, 187L, 700L, 718L) */ ((last_1_var_1_20) ^ (var_1_6))) >= (var_1_13))) {
		/* 1017L, 202L, 705L, 723L) */ var_1_20 = (
			/* 1020L, 201L, 708L, 726L) */ (max (
				/* 1020L, 201L, 708L, 726L) */ (
					-5
				) , (
					/* 1022L, 200L, 710L, 728L) */ (abs (
						var_1_4
					))
				)
			))
		);
	}


	// From: Req7Batch46Filler_PR_CN
	/* 1027L, 241L, 769L, 790L) */ if (/* 1028L, 220L, 221L, 770L, 791L) */ ((var_1_12) == (var_1_6))) {
		/* 1031L, 236L, 773L, 794L) */ var_1_21 = (
			/* 1034L, 235L, 776L, 797L) */ ((
				/* 1035L, 231L, 777L, 798L) */ (max (
					/* 1035L, 231L, 777L, 798L) */ (
						var_1_5
					) , (
						var_1_6
					)
				))
			) + (
				/* 1038L, 234L, 780L, 801L) */ ((
					var_1_22
				) - (
					var_1_13
				))
			))
		);
	} else {
		/* 1041L, 240L, 783L, 804L) */ var_1_21 = (
			var_1_6
		);
	}


	// From: CodeObject1
	/* 6L) */ var_1_26 = (
		/* 5L) */ (abs (
			var_1_27
		))
	);


	// From: CodeObject2
	/* 44L) */ if (/* 16L, 15L) */ ((var_1_27) > (var_1_26))) {
		/* 37L) */ if (/* 25L, 24L) */ ((var_1_26) < (var_1_27))) {
			/* 36L) */ var_1_28 = (
				/* 35L) */ ((
					var_1_29
				) && (
					var_1_30
				))
			);
		}
	} else {
		/* 43L) */ var_1_28 = (
			/* 42L) */ (! (
				var_1_31
			))
		);
	}


	// From: Req8Batch46Filler_PR_CN
	/* 1047L, 254L, 852L, 858L) */ var_1_23 = (
		var_1_24
	);


	// From: CodeObject5
	/* 125L) */ if (/* 102L, 101L) */ ((/* 103L, 97L) */ ((var_1_26) ^ (var_1_32))) <= (/* 106L, 100L) */ ((16u) & (var_1_33))))) {
		/* 124L) */ var_1_36 = (
			/* 123L) */ (min (
				/* 123L) */ (
					/* 119L) */ (abs (
						var_1_33
					))
				) , (
					/* 122L) */ (abs (
						/* 121L) */ (abs (
							var_1_38
						))
					))
				)
			))
		);
	}


	// From: Req9Batch46Filler_PR_CN
	/* 1053L, 264L, 876L, 882L) */ var_1_25 = (
		64
	);


	// From: CodeObject8
	/* 220L) */ if (var_1_37) {
		/* 219L) */ var_1_44 = (
			/* 218L) */ (abs (
				var_1_38
			))
		);
	}


	// From: Req5Batch46Filler_PR_CN
	signed long int stepLocal_3 = /* 986L, 150L, 154L, 625L, 643L) */ ((var_1_12) % (/* 988L, 149L, 156L, 627L, 645L) */ (abs (var_1_4))));
	/* 1003L, 175L, 623L, 641L) */ if (/* 992L, 152L, 153L, 624L, 642L) */ ((stepLocal_3) != (-10))) {
		/* 998L, 170L, 630L, 648L) */ var_1_19 = (
			/* 997L, 169L, 633L, 651L) */ (min (
				/* 997L, 169L, 633L, 651L) */ (
					4
				) , (
					var_1_21
				)
			))
		);
	} else {
		/* 1002L, 174L, 636L, 654L) */ var_1_19 = (
			var_1_13
		);
	}


	// From: CodeObject3
	/* 51L) */ var_1_32 = (
		var_1_33
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -63);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -63);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 16383);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967294);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483647);
	assume_abort_if_not(var_1_35 <= 2147483646);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (/* 231L, 4L, 8L, 300L, 315L, 1059L) */ ((var_1_2) && (var_1_3))) {
	} else {
	}
	if (/* 254L, 49L, 55L, 406L, 428L, 1082L) */ ((/* 255L, 47L, 56L, 407L, 429L, 1083L) */ ((var_1_4) / (var_1_8))) != (var_1_1))) {
	} else {
	}
	if (/* 276L, 87L, 95L, 566L, 595L, 1104L) */ ((/* 277L, 85L, 96L, 567L, 596L, 1105L) */ ((var_1_15) * (/* 279L, 84L, 98L, 569L, 598L, 1107L) */ (max (/* 279L, 84L, 98L, 569L, 598L, 1107L) */ (var_1_16) , (var_1_17)))))) >= (var_1_18))) {
		if (/* 284L, 110L, 120L, 574L, 603L, 1112L) */ ((var_1_8) < (/* 286L, 109L, 122L, 576L, 605L, 1114L) */ ((/* 287L, 105L, 123L, 577L, 606L, 1115L) */ ((var_1_5) << (var_1_11))) + (/* 290L, 108L, 126L, 580L, 609L, 1118L) */ ((var_1_4) + (var_1_6))))))) {
		} else {
		}
	}
	if (/* 305L, 152L, 159L, 660L, 678L, 1133L) */ ((/* 306L, 150L, 160L, 661L, 679L, 1134L) */ ((var_1_12) % (/* 308L, 149L, 162L, 663L, 681L, 1136L) */ (abs (var_1_4))))) != (-10))) {
	} else {
	}
	if (/* 326L, 185L, 191L, 735L, 753L, 1154L) */ ((/* 327L, 183L, 192L, 736L, 754L, 1155L) */ ((last_1_var_1_20) ^ (var_1_6))) >= (var_1_13))) {
	}
	if (/* 343L, 220L, 224L, 812L, 833L, 1171L) */ ((var_1_12) == (var_1_6))) {
	} else {
	}
	return /* 380L) */ ((
	/* 379L) */ ((
		/* 378L) */ ((
			/* 377L) */ ((
				/* 376L) */ ((
					/* 375L) */ ((
						/* 374L) */ ((
							/* 373L) */ ((
								/* 230L, 28L, 299L, 314L, 1058L) */ ((
									/* 231L, 4L, 8L, 300L, 315L, 1059L) */ ((
										var_1_2
									) && (
										var_1_3
									))
								) ? (
									/* 234L, 16L, 303L, 318L, 1062L) */ ((
										var_1_1
									) == (
										/* 234L, 16L, 303L, 318L, 1062L) */ ((unsigned char) (
											/* 237L, 15L, 306L, 321L, 1065L) */ ((
												var_1_4
											) - (
												var_1_5
											))
										))
									))
								) : (
									/* 240L, 26L, 309L, 324L, 1068L) */ ((
										var_1_1
									) == (
										/* 240L, 26L, 309L, 324L, 1068L) */ ((unsigned char) (
											var_1_4
										))
									))
								))
							) && (
								/* 246L, 38L, 346L, 354L, 1074L) */ ((
									var_1_6
								) == (
									/* 246L, 38L, 346L, 354L, 1074L) */ ((signed long int) (
										/* 249L, 37L, 349L, 357L, 1077L) */ ((
											var_1_5
										) + (
											var_1_4
										))
									))
								))
							))
						) && (
							/* 253L, 76L, 405L, 427L, 1081L) */ ((
								/* 254L, 49L, 55L, 406L, 428L, 1082L) */ ((
									/* 255L, 47L, 56L, 407L, 429L, 1083L) */ ((
										var_1_4
									) / (
										var_1_8
									))
								) != (
									var_1_1
								))
							) ? (
								/* 259L, 68L, 411L, 433L, 1087L) */ ((
									var_1_7
								) == (
									/* 259L, 68L, 411L, 433L, 1087L) */ ((signed char) (
										/* 262L, 67L, 414L, 436L, 1090L) */ (min (
											/* 262L, 67L, 414L, 436L, 1090L) */ (
												/* 263L, 65L, 415L, 437L, 1091L) */ ((
													/* 264L, 63L, 416L, 438L, 1092L) */ (abs (
														var_1_9
													))
												) + (
													var_1_10
												))
											) , (
												var_1_11
											)
										))
									))
								))
							) : (
								/* 268L, 74L, 420L, 442L, 1096L) */ ((
									var_1_7
								) == (
									/* 268L, 74L, 420L, 442L, 1096L) */ ((signed char) (
										/* 271L, 73L, 423L, 445L, 1099L) */ ((
											var_1_12
										) - (
											var_1_13
										))
									))
								))
							))
						))
					) && (
						/* 275L, 142L, 565L, 594L, 1103L) */ ((
							/* 276L, 87L, 95L, 566L, 595L, 1104L) */ ((
								/* 277L, 85L, 96L, 567L, 596L, 1105L) */ ((
									var_1_15
								) * (
									/* 279L, 84L, 98L, 569L, 598L, 1107L) */ (max (
										/* 279L, 84L, 98L, 569L, 598L, 1107L) */ (
											var_1_16
										) , (
											var_1_17
										)
									))
								))
							) >= (
								var_1_18
							))
						) ? (
							/* 283L, 140L, 573L, 602L, 1111L) */ ((
								/* 284L, 110L, 120L, 574L, 603L, 1112L) */ ((
									var_1_8
								) < (
									/* 286L, 109L, 122L, 576L, 605L, 1114L) */ ((
										/* 287L, 105L, 123L, 577L, 606L, 1115L) */ ((
											var_1_5
										) << (
											var_1_11
										))
									) + (
										/* 290L, 108L, 126L, 580L, 609L, 1118L) */ ((
											var_1_4
										) + (
											var_1_6
										))
									))
								))
							) ? (
								/* 293L, 132L, 583L, 612L, 1121L) */ ((
									var_1_14
								) == (
									/* 293L, 132L, 583L, 612L, 1121L) */ ((signed char) (
										var_1_12
									))
								))
							) : (
								/* 297L, 138L, 587L, 616L, 1125L) */ ((
									var_1_14
								) == (
									/* 297L, 138L, 587L, 616L, 1125L) */ ((signed char) (
										/* 300L, 137L, 590L, 619L, 1128L) */ ((
											var_1_9
										) + (
											var_1_10
										))
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 304L, 176L, 659L, 677L, 1132L) */ ((
						/* 305L, 152L, 159L, 660L, 678L, 1133L) */ ((
							/* 306L, 150L, 160L, 661L, 679L, 1134L) */ ((
								var_1_12
							) % (
								/* 308L, 149L, 162L, 663L, 681L, 1136L) */ (abs (
									var_1_4
								))
							))
						) != (
							-10
						))
					) ? (
						/* 311L, 170L, 666L, 684L, 1139L) */ ((
							var_1_19
						) == (
							/* 311L, 170L, 666L, 684L, 1139L) */ ((unsigned short int) (
								/* 314L, 169L, 669L, 687L, 1142L) */ (min (
									/* 314L, 169L, 669L, 687L, 1142L) */ (
										4
									) , (
										var_1_21
									)
								))
							))
						))
					) : (
						/* 317L, 174L, 672L, 690L, 1145L) */ ((
							var_1_19
						) == (
							/* 317L, 174L, 672L, 690L, 1145L) */ ((unsigned short int) (
								var_1_13
							))
						))
					))
				))
			) && (
				/* 325L, 204L, 734L, 752L, 1153L) */ ((
					/* 326L, 185L, 191L, 735L, 753L, 1154L) */ ((
						/* 327L, 183L, 192L, 736L, 754L, 1155L) */ ((
							last_1_var_1_20
						) ^ (
							var_1_6
						))
					) >= (
						var_1_13
					))
				) ? (
					/* 332L, 202L, 741L, 759L, 1160L) */ ((
						var_1_20
					) == (
						/* 332L, 202L, 741L, 759L, 1160L) */ ((signed long int) (
							/* 335L, 201L, 744L, 762L, 1163L) */ (max (
								/* 335L, 201L, 744L, 762L, 1163L) */ (
									-5
								) , (
									/* 337L, 200L, 746L, 764L, 1165L) */ (abs (
										var_1_4
									))
								)
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 342L, 242L, 811L, 832L, 1170L) */ ((
				/* 343L, 220L, 224L, 812L, 833L, 1171L) */ ((
					var_1_12
				) == (
					var_1_6
				))
			) ? (
				/* 346L, 236L, 815L, 836L, 1174L) */ ((
					var_1_21
				) == (
					/* 346L, 236L, 815L, 836L, 1174L) */ ((unsigned short int) (
						/* 349L, 235L, 818L, 839L, 1177L) */ ((
							/* 350L, 231L, 819L, 840L, 1178L) */ (max (
								/* 350L, 231L, 819L, 840L, 1178L) */ (
									var_1_5
								) , (
									var_1_6
								)
							))
						) + (
							/* 353L, 234L, 822L, 843L, 1181L) */ ((
								var_1_22
							) - (
								var_1_13
							))
						))
					))
				))
			) : (
				/* 356L, 240L, 825L, 846L, 1184L) */ ((
					var_1_21
				) == (
					/* 356L, 240L, 825L, 846L, 1184L) */ ((unsigned short int) (
						var_1_6
					))
				))
			))
		))
	) && (
		/* 362L, 254L, 864L, 870L, 1190L) */ ((
			var_1_23
		) == (
			/* 362L, 254L, 864L, 870L, 1190L) */ ((double) (
				var_1_24
			))
		))
	))
) && (
	/* 368L, 264L, 888L, 894L, 1196L) */ ((
		var_1_25
	) == (
		/* 368L, 264L, 888L, 894L, 1196L) */ ((unsigned char) (
			64
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
