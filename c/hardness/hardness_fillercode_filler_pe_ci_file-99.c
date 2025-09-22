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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch99Filler_PE_CI.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = 25;
signed long int var_1_7 = 5;
signed long int var_1_8 = 32;
signed long int var_1_9 = -8;
double var_1_10 = 99999999999.25;
double var_1_11 = 255.25;
double var_1_12 = 1.125;
unsigned char var_1_13 = 2;
unsigned char var_1_14 = 5;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 4;
unsigned char var_1_17 = 2;
signed char var_1_18 = 4;
signed char var_1_19 = 16;
signed char var_1_20 = 32;
signed char var_1_21 = 25;
signed char var_1_22 = 1;
signed char var_1_23 = 100;
double var_1_24 = 3.125;
double var_1_25 = 0.0;
unsigned short int var_1_26 = 32;
unsigned short int var_1_27 = 36217;
unsigned char var_1_28 = 2;
signed long int var_1_29 = -25;
signed char var_1_31 = 4;
unsigned short int var_1_32 = 10;
signed char var_1_33 = 64;
signed short int var_1_34 = -5;
signed short int var_1_35 = 64;
signed char var_1_36 = -5;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 1;
signed char var_1_40 = -32;
unsigned short int var_1_41 = 10;
unsigned long int var_1_42 = 10;
unsigned long int var_1_43 = 2602144630;
unsigned long int var_1_44 = 4;
signed long int var_1_45 = 16;
unsigned char var_1_46 = 0;
unsigned char var_1_48 = 50;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch99Filler_PE_CI
	/* 808L, 19L, 240L, 257L) */ if (var_1_2) {
		/* 810L, 10L, 242L, 259L) */ var_1_1 = (
			/* 813L, 9L, 245L, 262L) */ ((
				var_1_3
			) || (
				var_1_4
			))
		);
	} else {
		/* 816L, 18L, 248L, 265L) */ var_1_1 = (
			/* 819L, 17L, 251L, 268L) */ ((
				var_1_3
			) || (
				/* 821L, 16L, 253L, 270L) */ ((
					var_1_4
				) || (
					var_1_5
				))
			))
		);
	}


	// From: Req2Batch99Filler_PE_CI
	/* 826L, 32L, 309L, 319L) */ var_1_6 = (
		/* 829L, 31L, 312L, 322L) */ ((
			/* 830L, 29L, 313L, 323L) */ ((
				var_1_7
			) - (
				var_1_8
			))
		) + (
			var_1_9
		))
	);


	// From: Req3Batch99Filler_PE_CI
	/* 837L, 80L, 350L, 375L) */ if (/* 838L, 43L, 44L, 351L, 376L) */ ((var_1_9) < (/* 840L, 42L, 46L, 353L, 378L) */ ((var_1_6) * (var_1_8))))) {
		/* 843L, 74L, 356L, 381L) */ if (var_1_3) {
			/* 845L, 72L, 358L, 383L) */ if (/* 846L, 59L, 60L, 359L, 384L) */ ((var_1_9) <= (var_1_6))) {
				/* 849L, 71L, 362L, 387L) */ var_1_10 = (
					/* 852L, 70L, 365L, 390L) */ ((
						var_1_11
					) - (
						var_1_12
					))
				);
			}
		}
	} else {
		/* 855L, 79L, 368L, 393L) */ var_1_10 = (
			var_1_12
		);
	}


	// From: Req5Batch99Filler_PE_CI
	/* 886L, 148L, 536L, 548L) */ if (/* 887L, 135L, 136L, 537L, 549L) */ (! (var_1_5))) {
		/* 889L, 147L, 539L, 551L) */ var_1_15 = (
			/* 892L, 146L, 542L, 554L) */ (max (
				/* 892L, 146L, 542L, 554L) */ (
					/* 893L, 144L, 543L, 555L) */ ((
						var_1_16
					) + (
						var_1_17
					))
				) , (
					var_1_14
				)
			))
		);
	}


	// From: Req6Batch99Filler_PE_CI
	/* 901L, 165L, 587L, 603L) */ var_1_18 = (
		/* 904L, 164L, 590L, 606L) */ (max (
			/* 904L, 164L, 590L, 606L) */ (
				/* 905L, 160L, 591L, 607L) */ ((
					/* 906L, 158L, 592L, 608L) */ ((
						var_1_19
					) - (
						var_1_20
					))
				) + (
					var_1_21
				))
			) , (
				/* 910L, 163L, 596L, 612L) */ ((
					var_1_22
				) - (
					var_1_23
				))
			)
		))
	);


	// From: Req8Batch99Filler_PE_CI
	/* 939L, 222L, 726L, 741L) */ if (var_1_1) {
		/* 941L, 221L, 728L, 743L) */ var_1_26 = (
			/* 944L, 220L, 731L, 746L) */ (min (
				/* 944L, 220L, 731L, 746L) */ (
					/* 945L, 216L, 732L, 747L) */ (min (
						/* 945L, 216L, 732L, 747L) */ (
							var_1_15
						) , (
							var_1_14
						)
					))
				) , (
					/* 948L, 219L, 735L, 750L) */ ((
						var_1_27
					) - (
						var_1_17
					))
				)
			))
		);
	}


	// From: Req9Batch99Filler_PE_CI
	/* 953L, 235L, 785L, 791L) */ var_1_28 = (
		var_1_16
	);


	// From: Req7Batch99Filler_PE_CI
	signed long int stepLocal_1 = /* 915L, 177L, 181L, 651L, 670L) */ ((var_1_20) ^ (var_1_28));
	/* 933L, 201L, 648L, 667L) */ if (/* 920L, 178L, 179L, 649L, 668L) */ ((var_1_23) >= (stepLocal_1))) {
		/* 932L, 200L, 654L, 673L) */ var_1_24 = (
			/* 931L, 199L, 657L, 676L) */ (max (
				/* 931L, 199L, 657L, 676L) */ (
					/* 925L, 193L, 658L, 677L) */ (min (
						/* 925L, 193L, 658L, 677L) */ (
							var_1_12
						) , (
							var_1_11
						)
					))
				) , (
					/* 930L, 198L, 661L, 680L) */ ((
						/* 928L, 196L, 662L, 681L) */ ((
							var_1_25
						) - (
							25.5
						))
					) - (
						127.125
					))
				)
			))
		);
	}


	// From: Req4Batch99Filler_PE_CI
	signed long int stepLocal_0 = /* 861L, 107L, 111L, 458L, 480L) */ (- (var_1_6));
	/* 882L, 128L, 448L, 470L) */ if (/* 866L, 92L, 93L, 449L, 471L) */ ((var_1_12) != (var_1_24))) {
		/* 870L, 102L, 452L, 474L) */ var_1_13 = (
			var_1_14
		);
	} else {
		/* 881L, 126L, 456L, 478L) */ if (/* 872L, 109L, 110L, 457L, 479L) */ ((stepLocal_0) > (var_1_14))) {
			/* 876L, 121L, 461L, 483L) */ var_1_13 = (
				var_1_14
			);
		} else {
			/* 880L, 125L, 465L, 487L) */ var_1_13 = (
				25
			);
		}
	}


	// From: CodeObject1
	/* 233L, 5L) */ var_1_29 = (
		var_1_9
	);


	// From: CodeObject2
	/* 237L, 39L) */ if (/* 238L, 14L, 15L) */ ((/* 239L, 12L, 16L) */ ((var_1_6) >> (var_1_32))) >= (var_1_9))) {
		/* 243L, 34L) */ var_1_31 = (
			/* 246L, 33L) */ (max (
				/* 246L, 33L) */ (
					var_1_32
				) , (
					/* 248L, 32L) */ ((
						4
					) - (
						/* 250L, 31L) */ ((
							var_1_33
						) - (
							25
						))
					))
				)
			))
		);
	} else {
		/* 253L, 38L) */ var_1_31 = (
			var_1_33
		);
	}


	// From: CodeObject3
	/* 258L, 46L) */ var_1_34 = (
		var_1_32
	);


	// From: CodeObject4
	/* 338L, 86L) */ if (/* 339L, 55L, 56L) */ ((var_1_29) < (/* 341L, 54L, 58L) */ ((var_1_33) * (var_1_34))))) {
		/* 344L, 84L) */ if (/* 345L, 68L, 69L) */ ((var_1_29) <= (var_1_34))) {
			/* 348L, 79L) */ var_1_35 = (
				/* 351L, 78L) */ (abs (
					var_1_32
				))
			);
		} else {
			/* 353L, 83L) */ var_1_35 = (
				var_1_20
			);
		}
	}


	// From: CodeObject5
	/* 357L, 103L) */ if (var_1_2) {
		/* 359L, 96L) */ var_1_36 = (
			var_1_33
		);
	} else {
		/* 363L, 102L) */ var_1_36 = (
			/* 366L, 101L) */ (min (
				/* 366L, 101L) */ (
					var_1_32
				) , (
					var_1_33
				)
			))
		);
	}


	// From: CodeObject6
	/* 370L, 110L) */ var_1_38 = (
		var_1_39
	);


	// From: CodeObject7
	/* 375L, 123L) */ if (var_1_3) {
		/* 377L, 122L) */ var_1_40 = (
			/* 380L, 121L) */ (abs (
				4
			))
		);
	}


	// From: CodeObject8
	/* 406L, 156L) */ if (/* 407L, 131L, 132L) */ ((var_1_8) > (var_1_7))) {
		/* 410L, 146L) */ var_1_41 = (
			/* 413L, 145L) */ (max (
				/* 413L, 145L) */ (
					/* 414L, 142L) */ (min (
						/* 414L, 142L) */ (
							var_1_32
						) , (
							var_1_33
						)
					))
				) , (
					/* 417L, 144L) */ (abs (
						32
					))
				)
			))
		);
	} else {
		/* 419L, 155L) */ var_1_41 = (
			/* 422L, 154L) */ (max (
				/* 422L, 154L) */ (
					/* 423L, 152L) */ (abs (
						/* 424L, 151L) */ (min (
							/* 424L, 151L) */ (
								16
							) , (
								var_1_33
							)
						))
					))
				) , (
					var_1_32
				)
			))
		);
	}


	// From: CodeObject9
	/* 428L, 179L) */ if (/* 429L, 164L, 165L) */ ((var_1_8) <= (var_1_33))) {
		/* 432L, 178L) */ var_1_42 = (
			/* 435L, 177L) */ (abs (
				/* 436L, 176L) */ (abs (
					/* 437L, 175L) */ ((
						var_1_43
					) - (
						var_1_32
					))
				))
			))
		);
	}


	// From: CodeObject10
	/* 440L, 206L) */ if (/* 441L, 191L, 192L) */ ((var_1_6) < (var_1_9))) {
		/* 444L, 205L) */ var_1_44 = (
			/* 447L, 204L) */ (min (
				/* 447L, 204L) */ (
					var_1_33
				) , (
					/* 449L, 203L) */ (max (
						/* 449L, 203L) */ (
							256u
						) , (
							var_1_32
						)
					))
				)
			))
		);
	}


	// From: CodeObject11
	/* 453L, 213L) */ var_1_45 = (
		var_1_17
	);


	// From: CodeObject12
	/* 458L, 221L) */ var_1_46 = (
		var_1_5
	);


	// From: CodeObject13
	/* 463L, 229L) */ var_1_48 = (
		var_1_33
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 0);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1073741823);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1073741823);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -1073741823);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -63);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -1);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 4611686.018427383000e+12F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 32767);
	assume_abort_if_not(var_1_27 <= 65534);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 30);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 63);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 2147483647);
	assume_abort_if_not(var_1_43 <= 4294967294);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_2) {
	} else {
	}
	if (/* 497L, 43L, 49L, 401L, 426L, 988L) */ ((var_1_9) < (/* 499L, 42L, 51L, 403L, 428L, 990L) */ ((var_1_6) * (var_1_8))))) {
		if (var_1_3) {
			if (/* 505L, 59L, 63L, 409L, 434L, 996L) */ ((var_1_9) <= (var_1_6))) {
			}
		}
	} else {
	}
	if (/* 520L, 92L, 96L, 493L, 515L, 1011L) */ ((var_1_12) != (var_1_24))) {
	} else {
		if (/* 528L, 109L, 114L, 501L, 523L, 1019L) */ ((/* 529L, 107L, 115L, 502L, 524L, 1020L) */ (- (var_1_6))) > (var_1_14))) {
		} else {
		}
	}
	if (/* 542L, 135L, 138L, 561L, 573L, 1033L) */ (! (var_1_5))) {
	}
	if (/* 570L, 178L, 184L, 687L, 706L, 1061L) */ ((var_1_23) >= (/* 572L, 177L, 186L, 689L, 708L, 1063L) */ ((var_1_20) ^ (var_1_28))))) {
	}
	if (var_1_1) {
	}
	return /* 616L) */ ((
	/* 615L) */ ((
		/* 614L) */ ((
			/* 613L) */ ((
				/* 612L) */ ((
					/* 611L) */ ((
						/* 610L) */ ((
							/* 609L) */ ((
								/* 467L, 20L, 274L, 291L, 958L) */ ((
									var_1_2
								) ? (
									/* 469L, 10L, 276L, 293L, 960L) */ ((
										var_1_1
									) == (
										/* 469L, 10L, 276L, 293L, 960L) */ ((unsigned char) (
											/* 472L, 9L, 279L, 296L, 963L) */ ((
												var_1_3
											) || (
												var_1_4
											))
										))
									))
								) : (
									/* 475L, 18L, 282L, 299L, 966L) */ ((
										var_1_1
									) == (
										/* 475L, 18L, 282L, 299L, 966L) */ ((unsigned char) (
											/* 478L, 17L, 285L, 302L, 969L) */ ((
												var_1_3
											) || (
												/* 480L, 16L, 287L, 304L, 971L) */ ((
													var_1_4
												) || (
													var_1_5
												))
											))
										))
									))
								))
							) && (
								/* 485L, 32L, 329L, 339L, 976L) */ ((
									var_1_6
								) == (
									/* 485L, 32L, 329L, 339L, 976L) */ ((signed long int) (
										/* 488L, 31L, 332L, 342L, 979L) */ ((
											/* 489L, 29L, 333L, 343L, 980L) */ ((
												var_1_7
											) - (
												var_1_8
											))
										) + (
											var_1_9
										))
									))
								))
							))
						) && (
							/* 496L, 81L, 400L, 425L, 987L) */ ((
								/* 497L, 43L, 49L, 401L, 426L, 988L) */ ((
									var_1_9
								) < (
									/* 499L, 42L, 51L, 403L, 428L, 990L) */ ((
										var_1_6
									) * (
										var_1_8
									))
								))
							) ? (
								/* 502L, 75L, 406L, 431L, 993L) */ ((
									var_1_3
								) ? (
									/* 504L, 73L, 408L, 433L, 995L) */ ((
										/* 505L, 59L, 63L, 409L, 434L, 996L) */ ((
											var_1_9
										) <= (
											var_1_6
										))
									) ? (
										/* 508L, 71L, 412L, 437L, 999L) */ ((
											var_1_10
										) == (
											/* 508L, 71L, 412L, 437L, 999L) */ ((double) (
												/* 511L, 70L, 415L, 440L, 1002L) */ ((
													var_1_11
												) - (
													var_1_12
												))
											))
										))
									) : (
										1
									))
								) : (
									1
								))
							) : (
								/* 514L, 79L, 418L, 443L, 1005L) */ ((
									var_1_10
								) == (
									/* 514L, 79L, 418L, 443L, 1005L) */ ((double) (
										var_1_12
									))
								))
							))
						))
					) && (
						/* 519L, 129L, 492L, 514L, 1010L) */ ((
							/* 520L, 92L, 96L, 493L, 515L, 1011L) */ ((
								var_1_12
							) != (
								var_1_24
							))
						) ? (
							/* 523L, 102L, 496L, 518L, 1014L) */ ((
								var_1_13
							) == (
								/* 523L, 102L, 496L, 518L, 1014L) */ ((unsigned char) (
									var_1_14
								))
							))
						) : (
							/* 527L, 127L, 500L, 522L, 1018L) */ ((
								/* 528L, 109L, 114L, 501L, 523L, 1019L) */ ((
									/* 529L, 107L, 115L, 502L, 524L, 1020L) */ (- (
										var_1_6
									))
								) > (
									var_1_14
								))
							) ? (
								/* 532L, 121L, 505L, 527L, 1023L) */ ((
									var_1_13
								) == (
									/* 532L, 121L, 505L, 527L, 1023L) */ ((unsigned char) (
										var_1_14
									))
								))
							) : (
								/* 536L, 125L, 509L, 531L, 1027L) */ ((
									var_1_13
								) == (
									/* 536L, 125L, 509L, 531L, 1027L) */ ((unsigned char) (
										25
									))
								))
							))
						))
					))
				) && (
					/* 541L, 149L, 560L, 572L, 1032L) */ ((
						/* 542L, 135L, 138L, 561L, 573L, 1033L) */ (! (
							var_1_5
						))
					) ? (
						/* 544L, 147L, 563L, 575L, 1035L) */ ((
							var_1_15
						) == (
							/* 544L, 147L, 563L, 575L, 1035L) */ ((unsigned char) (
								/* 547L, 146L, 566L, 578L, 1038L) */ (max (
									/* 547L, 146L, 566L, 578L, 1038L) */ (
										/* 548L, 144L, 567L, 579L, 1039L) */ ((
											var_1_16
										) + (
											var_1_17
										))
									) , (
										var_1_14
									)
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 556L, 165L, 619L, 635L, 1047L) */ ((
					var_1_18
				) == (
					/* 556L, 165L, 619L, 635L, 1047L) */ ((signed char) (
						/* 559L, 164L, 622L, 638L, 1050L) */ (max (
							/* 559L, 164L, 622L, 638L, 1050L) */ (
								/* 560L, 160L, 623L, 639L, 1051L) */ ((
									/* 561L, 158L, 624L, 640L, 1052L) */ ((
										var_1_19
									) - (
										var_1_20
									))
								) + (
									var_1_21
								))
							) , (
								/* 565L, 163L, 628L, 644L, 1056L) */ ((
									var_1_22
								) - (
									var_1_23
								))
							)
						))
					))
				))
			))
		) && (
			/* 569L, 202L, 686L, 705L, 1060L) */ ((
				/* 570L, 178L, 184L, 687L, 706L, 1061L) */ ((
					var_1_23
				) >= (
					/* 572L, 177L, 186L, 689L, 708L, 1063L) */ ((
						var_1_20
					) ^ (
						var_1_28
					))
				))
			) ? (
				/* 575L, 200L, 692L, 711L, 1066L) */ ((
					var_1_24
				) == (
					/* 575L, 200L, 692L, 711L, 1066L) */ ((double) (
						/* 578L, 199L, 695L, 714L, 1069L) */ (max (
							/* 578L, 199L, 695L, 714L, 1069L) */ (
								/* 579L, 193L, 696L, 715L, 1070L) */ (min (
									/* 579L, 193L, 696L, 715L, 1070L) */ (
										var_1_12
									) , (
										var_1_11
									)
								))
							) , (
								/* 582L, 198L, 699L, 718L, 1073L) */ ((
									/* 583L, 196L, 700L, 719L, 1074L) */ ((
										var_1_25
									) - (
										25.5
									))
								) - (
									127.125
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
		/* 590L, 223L, 756L, 771L, 1081L) */ ((
			var_1_1
		) ? (
			/* 592L, 221L, 758L, 773L, 1083L) */ ((
				var_1_26
			) == (
				/* 592L, 221L, 758L, 773L, 1083L) */ ((unsigned short int) (
					/* 595L, 220L, 761L, 776L, 1086L) */ (min (
						/* 595L, 220L, 761L, 776L, 1086L) */ (
							/* 596L, 216L, 762L, 777L, 1087L) */ (min (
								/* 596L, 216L, 762L, 777L, 1087L) */ (
									var_1_15
								) , (
									var_1_14
								)
							))
						) , (
							/* 599L, 219L, 765L, 780L, 1090L) */ ((
								var_1_27
							) - (
								var_1_17
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
	/* 604L, 235L, 797L, 803L, 1095L) */ ((
		var_1_28
	) == (
		/* 604L, 235L, 797L, 803L, 1095L) */ ((unsigned char) (
			var_1_16
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
