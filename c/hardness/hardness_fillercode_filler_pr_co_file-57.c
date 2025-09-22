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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch57Filler_PR_CO.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 5;
signed char var_1_2 = -1;
signed char var_1_3 = 10;
signed long int var_1_5 = 5;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned long int var_1_8 = 16;
unsigned long int var_1_9 = 2759533897;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
signed long int var_1_15 = -25;
signed long int var_1_17 = 256;
signed short int var_1_18 = 2;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
float var_1_21 = 1000000000000.6;
unsigned long int var_1_22 = 2609431563;
float var_1_24 = 2.375;
float var_1_25 = 4.5;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
double var_1_29 = 100.2;
signed char var_1_30 = 5;
signed char var_1_31 = 4;
double var_1_32 = 0.19999999999999996;
double var_1_33 = 10.488;
float var_1_34 = 31.05;
unsigned char var_1_35 = 0;
float var_1_36 = 8.75;
float var_1_37 = 8.2;
unsigned short int var_1_38 = 256;
signed char var_1_39 = 64;
signed char var_1_40 = 25;
signed char var_1_41 = 16;
signed char var_1_42 = 32;
signed char var_1_43 = 4;
signed short int var_1_44 = -32;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_18 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch57Filler_PR_CO
	/* 8L, 72L, 358L, 369L, 796L, 841L) */ var_1_8 = (
		/* 7L, 71L, 361L, 372L, 795L, 844L) */ (max (
			/* 7L, 71L, 361L, 372L, 795L, 844L) */ (
				last_1_var_1_18
			) , (
				/* 6L, 70L, 363L, 374L, 794L, 847L) */ ((
					var_1_9
				) - (
					var_1_3
				))
			)
		))
	);


	// From: CodeObject6
	/* 369L, 218L) */ if (/* 370L, 199L, 200L) */ ((/* 371L, 197L, 201L) */ ((var_1_26) && (var_1_35))) && (var_1_27))) {
		/* 375L, 217L) */ var_1_34 = (
			/* 378L, 216L) */ ((
				/* 379L, 214L) */ ((
					var_1_36
				) + (
					var_1_37
				))
			) + (
				var_1_33
			))
		);
	}


	// From: Req3Batch57Filler_PR_CO
	unsigned long int stepLocal_0 = var_1_9;
	/* 880L, 122L, 400L, 429L) */ if (var_1_6) {
		/* 875L, 116L, 402L, 431L) */ if (var_1_11) {
			/* 862L, 93L, 404L, 433L) */ var_1_10 = (
				/* 861L, 92L, 407L, 436L) */ ((
					var_1_12
				) && (
					/* 860L, 91L, 409L, 438L) */ (! (
						var_1_13
					))
				))
			);
		} else {
			/* 874L, 114L, 411L, 440L) */ if (/* 865L, 97L, 98L, 412L, 441L) */ ((stepLocal_0) > (/* 864L, 96L, 100L, 414L, 443L) */ (~ (100u))))) {
				/* 869L, 109L, 416L, 445L) */ var_1_10 = (
					var_1_14
				);
			} else {
				/* 873L, 113L, 420L, 449L) */ var_1_10 = (
					var_1_13
				);
			}
		}
	} else {
		/* 879L, 121L, 424L, 453L) */ var_1_10 = (
			var_1_13
		);
	}


	// From: CodeObject3
	/* 299L, 95L) */ if (/* 300L, 82L, 83L) */ ((var_1_22) < (var_1_8))) {
		/* 303L, 94L) */ var_1_26 = (
			/* 306L, 93L) */ ((
				var_1_20
			) || (
				var_1_27
			))
		);
	}


	// From: CodeObject5
	/* 319L, 187L) */ if (/* 320L, 118L, 119L) */ ((var_1_17) <= (/* 322L, 117L, 121L) */ ((var_1_8) ^ (/* 324L, 116L, 123L) */ (- (var_1_22))))))) {
		/* 326L, 181L) */ if (/* 327L, 141L, 142L) */ ((/* 328L, 137L, 143L) */ ((/* 329L, 133L, 144L) */ ((var_1_30) - (var_1_31))) > (/* 332L, 136L, 147L) */ ((var_1_17) + (var_1_8))))) && (/* 335L, 140L, 150L) */ ((var_1_21) >= (var_1_24))))) {
			/* 338L, 169L) */ var_1_29 = (
				/* 341L, 168L) */ ((
					var_1_32
				) + (
					var_1_33
				))
			);
		} else {
			/* 344L, 180L) */ var_1_29 = (
				/* 347L, 179L) */ (abs (
					var_1_32
				))
			);
		}
	} else {
		/* 349L, 186L) */ var_1_29 = (
			var_1_24
		);
	}


	// From: CodeObject7
	/* 383L, 248L) */ if (/* 384L, 228L, 229L) */ ((/* 385L, 226L, 230L) */ ((var_1_31) ^ (var_1_30))) <= (var_1_8))) {
		/* 389L, 242L) */ var_1_38 = (
			128
		);
	} else {
		/* 393L, 247L) */ var_1_38 = (
			/* 396L, 246L) */ (abs (
				var_1_15
			))
		);
	}


	// From: Req5Batch57Filler_PR_CO
	unsigned long int stepLocal_2 = var_1_8;
	/* 929L, 206L, 632L, 644L) */ if (/* 921L, 186L, 187L, 633L, 645L) */ (! (var_1_10))) {
		/* 928L, 204L, 635L, 647L) */ if (/* 923L, 193L, 194L, 636L, 648L) */ ((stepLocal_2) >= (var_1_3))) {
			/* 927L, 203L, 639L, 651L) */ var_1_17 = (
				var_1_7
			);
		}
	}


	// From: CodeObject4
	/* 310L, 107L) */ if (var_1_27) {
		/* 312L, 106L) */ var_1_28 = (
			/* 315L, 105L) */ (abs (
				100
			))
		);
	}


	// From: Req4Batch57Filler_PR_CO
	unsigned long int stepLocal_1 = /* 885L, 131L, 138L, 518L, 547L) */ ((var_1_8) & (var_1_5));
	/* 913L, 179L, 516L, 545L) */ if (/* 893L, 136L, 137L, 517L, 546L) */ ((stepLocal_1) >= (/* 892L, 135L, 141L, 521L, 550L) */ (- (/* 891L, 134L, 142L, 522L, 551L) */ (max (/* 891L, 134L, 142L, 522L, 551L) */ (var_1_3) , (var_1_8)))))))) {
		/* 902L, 161L, 525L, 554L) */ var_1_15 = (
			/* 901L, 160L, 528L, 557L) */ (abs (
				/* 900L, 159L, 529L, 558L) */ ((
					var_1_3
				) + (
					/* 899L, 158L, 531L, 560L) */ ((
						var_1_17
					) - (
						var_1_7
					))
				))
			))
		);
	} else {
		/* 912L, 177L, 534L, 563L) */ if (var_1_10) {
			/* 907L, 168L, 536L, 565L) */ var_1_15 = (
				var_1_7
			);
		} else {
			/* 911L, 176L, 540L, 569L) */ var_1_15 = (
				var_1_17
			);
		}
	}


	// From: CodeObject8
	/* 399L, 261L) */ var_1_39 = (
		/* 402L, 260L) */ ((
			/* 403L, 258L) */ (min (
				/* 403L, 258L) */ (
					var_1_40
				) , (
					/* 405L, 257L) */ ((
						var_1_41
					) + (
						var_1_42
					))
				)
			))
		) - (
			var_1_43
		))
	);


	// From: Req1Batch57Filler_PR_CO
	/* 813L, 57L, 249L, 276L) */ if (/* 814L, 8L, 9L, 250L, 277L) */ ((/* 815L, 4L, 10L, 251L, 278L) */ ((var_1_2) - (var_1_3))) > (/* 818L, 7L, 13L, 254L, 281L) */ ((var_1_15) / (var_1_5))))) {
		/* 821L, 28L, 257L, 284L) */ var_1_1 = (
			/* 824L, 27L, 260L, 287L) */ ((
				128
			) - (
				var_1_3
			))
		);
	} else {
		/* 827L, 55L, 263L, 290L) */ if (/* 828L, 30L, 31L, 264L, 291L) */ (! (var_1_10))) {
			/* 830L, 38L, 266L, 293L) */ var_1_1 = (
				var_1_3
			);
		} else {
			/* 834L, 54L, 270L, 297L) */ var_1_1 = (
				var_1_7
			);
		}
	}


	// From: Req6Batch57Filler_PR_CO
	signed long int stepLocal_3 = var_1_5;
	/* 960L, 244L, 680L, 707L) */ if (/* 937L, 214L, 215L, 681L, 708L) */ ((var_1_8) < (stepLocal_3))) {
		/* 948L, 230L, 684L, 711L) */ var_1_18 = (
			/* 947L, 229L, 687L, 714L) */ ((
				var_1_2
			) - (
				/* 946L, 228L, 689L, 716L) */ (max (
					/* 946L, 228L, 689L, 716L) */ (
						/* 944L, 226L, 690L, 717L) */ ((
							last_1_var_1_18
						) + (
							var_1_7
						))
					) , (
						var_1_3
					)
				))
			))
		);
	} else {
		/* 959L, 242L, 695L, 722L) */ if (var_1_10) {
			/* 953L, 237L, 697L, 724L) */ var_1_18 = (
				var_1_3
			);
		} else {
			/* 958L, 241L, 701L, 728L) */ var_1_18 = (
				last_1_var_1_18
			);
		}
	}


	// From: CodeObject1
	/* 273L, 29L) */ var_1_19 = (
		var_1_20
	);


	// From: CodeObject2
	/* 277L, 76L) */ if (/* 278L, 40L, 41L) */ ((/* 279L, 38L, 42L) */ ((25u) | (/* 281L, 37L, 44L) */ ((var_1_22) - (5u))))) >= (var_1_8))) {
		/* 285L, 60L) */ var_1_21 = (
			/* 288L, 59L) */ (abs (
				/* 289L, 58L) */ (abs (
					var_1_24
				))
			))
		);
	} else {
		/* 291L, 74L) */ if (/* 292L, 63L, 64L) */ ((var_1_24) < (var_1_25))) {
			/* 295L, 73L) */ var_1_21 = (
				var_1_24
			);
		}
	}


	// From: CodeObject9
	/* 410L, 269L) */ var_1_44 = (
		50
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967294);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967295);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -1);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -461168.6018427383000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -230584.3009213691400e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691400e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -230584.3009213691400e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691400e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -1);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 63);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	if (/* 416L, 8L, 16L, 304L, 331L, 966L) */ ((/* 417L, 4L, 17L, 305L, 332L, 967L) */ ((var_1_2) - (var_1_3))) > (/* 420L, 7L, 20L, 308L, 335L, 970L) */ ((var_1_15) / (var_1_5))))) {
	} else {
		if (/* 430L, 30L, 33L, 318L, 345L, 980L) */ (! (var_1_10))) {
		} else {
		}
	}
	if (var_1_6) {
		if (var_1_11) {
		} else {
			if (/* 465L, 97L, 102L, 470L, 499L, 1015L) */ ((var_1_9) > (/* 467L, 96L, 104L, 472L, 501L, 1017L) */ (~ (100u))))) {
			} else {
			}
		}
	} else {
	}
	if (/* 483L, 136L, 145L, 575L, 604L, 1033L) */ ((/* 484L, 131L, 146L, 576L, 605L, 1034L) */ ((var_1_8) & (var_1_5))) >= (/* 487L, 135L, 149L, 579L, 608L, 1037L) */ (- (/* 488L, 134L, 150L, 580L, 609L, 1038L) */ (max (/* 488L, 134L, 150L, 580L, 609L, 1038L) */ (var_1_3) , (var_1_8)))))))) {
	} else {
		if (var_1_10) {
		} else {
		}
	}
	if (/* 512L, 186L, 189L, 657L, 669L, 1062L) */ (! (var_1_10))) {
		if (/* 515L, 193L, 197L, 660L, 672L, 1065L) */ ((var_1_8) >= (var_1_3))) {
		}
	}
	if (/* 524L, 214L, 218L, 735L, 762L, 1074L) */ ((var_1_8) < (var_1_5))) {
	} else {
		if (var_1_10) {
		} else {
		}
	}
	return /* 554L) */ ((
	/* 553L) */ ((
		/* 552L) */ ((
			/* 551L) */ ((
				/* 550L) */ ((
					/* 415L, 58L, 303L, 330L, 965L) */ ((
						/* 416L, 8L, 16L, 304L, 331L, 966L) */ ((
							/* 417L, 4L, 17L, 305L, 332L, 967L) */ ((
								var_1_2
							) - (
								var_1_3
							))
						) > (
							/* 420L, 7L, 20L, 308L, 335L, 970L) */ ((
								var_1_15
							) / (
								var_1_5
							))
						))
					) ? (
						/* 423L, 28L, 311L, 338L, 973L) */ ((
							var_1_1
						) == (
							/* 423L, 28L, 311L, 338L, 973L) */ ((unsigned char) (
								/* 426L, 27L, 314L, 341L, 976L) */ ((
									128
								) - (
									var_1_3
								))
							))
						))
					) : (
						/* 429L, 56L, 317L, 344L, 979L) */ ((
							/* 430L, 30L, 33L, 318L, 345L, 980L) */ (! (
								var_1_10
							))
						) ? (
							/* 432L, 38L, 320L, 347L, 982L) */ ((
								var_1_1
							) == (
								/* 432L, 38L, 320L, 347L, 982L) */ ((unsigned char) (
									var_1_3
								))
							))
						) : (
							/* 436L, 54L, 324L, 351L, 986L) */ ((
								var_1_1
							) == (
								/* 436L, 54L, 324L, 351L, 986L) */ ((unsigned char) (
									var_1_7
								))
							))
						))
					))
				) && (
					/* 443L, 72L, 380L, 391L, 808L, 993L, 20L) */ ((
						var_1_8
					) == (
						/* 443L, 72L, 380L, 391L, 808L, 993L, 20L) */ ((unsigned long int) (
							/* 446L, 71L, 383L, 394L, 807L, 996L, 19L) */ (max (
								/* 446L, 71L, 383L, 394L, 807L, 996L, 19L) */ (
									last_1_var_1_18
								) , (
									/* 449L, 70L, 385L, 396L, 806L, 999L, 18L) */ ((
										var_1_9
									) - (
										var_1_3
									))
								)
							))
						))
					))
				))
			) && (
				/* 453L, 123L, 458L, 487L, 1003L) */ ((
					var_1_6
				) ? (
					/* 455L, 117L, 460L, 489L, 1005L) */ ((
						var_1_11
					) ? (
						/* 457L, 93L, 462L, 491L, 1007L) */ ((
							var_1_10
						) == (
							/* 457L, 93L, 462L, 491L, 1007L) */ ((unsigned char) (
								/* 460L, 92L, 465L, 494L, 1010L) */ ((
									var_1_12
								) && (
									/* 462L, 91L, 467L, 496L, 1012L) */ (! (
										var_1_13
									))
								))
							))
						))
					) : (
						/* 464L, 115L, 469L, 498L, 1014L) */ ((
							/* 465L, 97L, 102L, 470L, 499L, 1015L) */ ((
								var_1_9
							) > (
								/* 467L, 96L, 104L, 472L, 501L, 1017L) */ (~ (
									100u
								))
							))
						) ? (
							/* 469L, 109L, 474L, 503L, 1019L) */ ((
								var_1_10
							) == (
								/* 469L, 109L, 474L, 503L, 1019L) */ ((unsigned char) (
									var_1_14
								))
							))
						) : (
							/* 473L, 113L, 478L, 507L, 1023L) */ ((
								var_1_10
							) == (
								/* 473L, 113L, 478L, 507L, 1023L) */ ((unsigned char) (
									var_1_13
								))
							))
						))
					))
				) : (
					/* 477L, 121L, 482L, 511L, 1027L) */ ((
						var_1_10
					) == (
						/* 477L, 121L, 482L, 511L, 1027L) */ ((unsigned char) (
							var_1_13
						))
					))
				))
			))
		) && (
			/* 482L, 180L, 574L, 603L, 1032L) */ ((
				/* 483L, 136L, 145L, 575L, 604L, 1033L) */ ((
					/* 484L, 131L, 146L, 576L, 605L, 1034L) */ ((
						var_1_8
					) & (
						var_1_5
					))
				) >= (
					/* 487L, 135L, 149L, 579L, 608L, 1037L) */ (- (
						/* 488L, 134L, 150L, 580L, 609L, 1038L) */ (max (
							/* 488L, 134L, 150L, 580L, 609L, 1038L) */ (
								var_1_3
							) , (
								var_1_8
							)
						))
					))
				))
			) ? (
				/* 491L, 161L, 583L, 612L, 1041L) */ ((
					var_1_15
				) == (
					/* 491L, 161L, 583L, 612L, 1041L) */ ((signed long int) (
						/* 494L, 160L, 586L, 615L, 1044L) */ (abs (
							/* 495L, 159L, 587L, 616L, 1045L) */ ((
								var_1_3
							) + (
								/* 497L, 158L, 589L, 618L, 1047L) */ ((
									var_1_17
								) - (
									var_1_7
								))
							))
						))
					))
				))
			) : (
				/* 500L, 178L, 592L, 621L, 1050L) */ ((
					var_1_10
				) ? (
					/* 502L, 168L, 594L, 623L, 1052L) */ ((
						var_1_15
					) == (
						/* 502L, 168L, 594L, 623L, 1052L) */ ((signed long int) (
							var_1_7
						))
					))
				) : (
					/* 506L, 176L, 598L, 627L, 1056L) */ ((
						var_1_15
					) == (
						/* 506L, 176L, 598L, 627L, 1056L) */ ((signed long int) (
							var_1_17
						))
					))
				))
			))
		))
	) && (
		/* 511L, 207L, 656L, 668L, 1061L) */ ((
			/* 512L, 186L, 189L, 657L, 669L, 1062L) */ (! (
				var_1_10
			))
		) ? (
			/* 514L, 205L, 659L, 671L, 1064L) */ ((
				/* 515L, 193L, 197L, 660L, 672L, 1065L) */ ((
					var_1_8
				) >= (
					var_1_3
				))
			) ? (
				/* 518L, 203L, 663L, 675L, 1068L) */ ((
					var_1_17
				) == (
					/* 518L, 203L, 663L, 675L, 1068L) */ ((signed long int) (
						var_1_7
					))
				))
			) : (
				1
			))
		) : (
			1
		))
	))
) && (
	/* 523L, 245L, 734L, 761L, 1073L) */ ((
		/* 524L, 214L, 218L, 735L, 762L, 1074L) */ ((
			var_1_8
		) < (
			var_1_5
		))
	) ? (
		/* 527L, 230L, 738L, 765L, 1077L) */ ((
			var_1_18
		) == (
			/* 527L, 230L, 738L, 765L, 1077L) */ ((signed short int) (
				/* 530L, 229L, 741L, 768L, 1080L) */ ((
					var_1_2
				) - (
					/* 532L, 228L, 743L, 770L, 1082L) */ (max (
						/* 532L, 228L, 743L, 770L, 1082L) */ (
							/* 533L, 226L, 744L, 771L, 1083L) */ ((
								last_1_var_1_18
							) + (
								var_1_7
							))
						) , (
							var_1_3
						)
					))
				))
			))
		))
	) : (
		/* 538L, 243L, 749L, 776L, 1088L) */ ((
			var_1_10
		) ? (
			/* 540L, 237L, 751L, 778L, 1090L) */ ((
				var_1_18
			) == (
				/* 540L, 237L, 751L, 778L, 1090L) */ ((signed short int) (
					var_1_3
				))
			))
		) : (
			/* 544L, 241L, 755L, 782L, 1094L) */ ((
				var_1_18
			) == (
				/* 544L, 241L, 755L, 782L, 1094L) */ ((signed short int) (
					last_1_var_1_18
				))
			))
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
