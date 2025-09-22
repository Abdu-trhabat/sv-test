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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch107Filler_PE_CI.c", 13, "reach_error"); }
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
double var_1_1 = 10.5;
double var_1_6 = 9999999.2;
double var_1_7 = 0.0;
double var_1_8 = 50.5;
double var_1_9 = 4.75;
unsigned long int var_1_10 = 8;
unsigned long int var_1_14 = 128;
unsigned long int var_1_15 = 5;
unsigned char var_1_16 = 50;
unsigned char var_1_18 = 100;
unsigned char var_1_19 = 32;
unsigned char var_1_20 = 32;
unsigned char var_1_21 = 5;
double var_1_23 = -0.625;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
signed char var_1_26 = -50;
double var_1_27 = 49.625;
signed long int var_1_28 = 128;
signed short int var_1_29 = -2;
double var_1_30 = 3.75;
signed long int var_1_33 = -16;
unsigned char var_1_36 = 5;
unsigned char var_1_38 = 128;
unsigned long int var_1_40 = 256;
double var_1_41 = 31.6;
signed char var_1_43 = -10;
signed long int var_1_47 = -2;

// Calibration values

// Last'ed variables
double last_1_var_1_23 = -0.625;
double last_1_var_1_27 = 49.625;
signed short int last_1_var_1_29 = -2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch107Filler_PE_CI
	/* 40L, 40L, 268L, 292L, 846L, 890L) */ if (/* 25L, 9L, 10L, 269L, 293L, 831L, 891L) */ ((/* 18L, 4L, 11L, 270L, 294L, 824L, 892L) */ (max (/* 18L, 4L, 11L, 270L, 294L, 824L, 892L) */ (last_1_var_1_23) , (last_1_var_1_27)))) > (/* 24L, 8L, 14L, 273L, 297L, 830L, 897L) */ ((last_1_var_1_23) + (/* 23L, 7L, 16L, 275L, 299L, 829L, 900L) */ (- (last_1_var_1_23))))))) {
		/* 35L, 35L, 277L, 301L, 841L, 903L) */ var_1_1 = (
			/* 34L, 34L, 280L, 304L, 840L, 906L) */ ((
				var_1_6
			) - (
				/* 33L, 33L, 282L, 306L, 839L, 908L) */ ((
					/* 31L, 31L, 283L, 307L, 837L, 909L) */ ((
						var_1_7
					) - (
						var_1_8
					))
				) + (
					var_1_9
				))
			))
		);
	} else {
		/* 39L, 39L, 287L, 311L, 845L, 913L) */ var_1_1 = (
			var_1_6
		);
	}


	// From: Req8Batch107Filler_PE_CI
	/* 4L, 253L, 773L, 779L, 880L, 1036L) */ var_1_28 = (
		last_1_var_1_29
	);


	// From: Req9Batch107Filler_PE_CI
	/* 1043L, 263L, 797L, 803L) */ var_1_29 = (
		var_1_28
	);


	// From: Req4Batch107Filler_PE_CI
	/* 976L, 137L, 543L, 553L) */ var_1_23 = (
		/* 979L, 136L, 546L, 556L) */ ((
			var_1_8
		) - (
			var_1_6
		))
	);


	// From: Req5Batch107Filler_PE_CI
	unsigned long int stepLocal_3 = /* 984L, 152L, 156L, 582L, 595L) */ ((/* 985L, 150L, 157L, 583L, 596L) */ ((var_1_15) ^ (16u))) * (64u));
	/* 996L, 173L, 580L, 593L) */ if (/* 991L, 154L, 155L, 581L, 594L) */ ((stepLocal_3) > (var_1_18))) {
		/* 995L, 172L, 588L, 601L) */ var_1_24 = (
			var_1_25
		);
	}


	// From: Req6Batch107Filler_PE_CI
	/* 1000L, 211L, 632L, 652L) */ if (/* 1001L, 185L, 186L, 633L, 653L) */ ((var_1_6) < (/* 1003L, 184L, 188L, 635L, 655L) */ ((var_1_1) * (/* 1005L, 183L, 190L, 637L, 657L) */ ((var_1_8) - (9.99999998E7))))))) {
		/* 1008L, 206L, 640L, 660L) */ var_1_26 = (
			/* 1011L, 205L, 643L, 663L) */ (abs (
				/* 1012L, 204L, 644L, 664L) */ (min (
					/* 1012L, 204L, 644L, 664L) */ (
						var_1_20
					) , (
						var_1_19
					)
				))
			))
		);
	} else {
		/* 1015L, 210L, 647L, 667L) */ var_1_26 = (
			var_1_20
		);
	}


	// From: Req3Batch107Filler_PE_CI
	unsigned char stepLocal_2 = /* 947L, 108L, 112L, 463L, 486L) */ ((var_1_23) > (16.75f));
	/* 969L, 126L, 448L, 471L) */ if (var_1_24) {
		/* 961L, 104L, 450L, 473L) */ var_1_16 = (
			/* 960L, 103L, 453L, 476L) */ ((
				/* 958L, 101L, 454L, 477L) */ ((
					var_1_18
				) + (
					/* 957L, 100L, 456L, 479L) */ ((
						var_1_19
					) + (
						var_1_20
					))
				))
			) - (
				var_1_21
			))
		);
	} else {
		/* 968L, 124L, 460L, 483L) */ if (/* 963L, 109L, 110L, 461L, 484L) */ ((var_1_24) && (stepLocal_2))) {
			/* 967L, 123L, 466L, 489L) */ var_1_16 = (
				var_1_19
			);
		}
	}


	// From: Req2Batch107Filler_PE_CI
	signed long int stepLocal_1 = /* 924L, 48L, 52L, 366L, 387L) */ (min (/* 924L, 48L, 52L, 366L, 387L) */ (var_1_16) , (var_1_28)));
	unsigned long int stepLocal_0 = /* 919L, 63L, 67L, 372L, 393L) */ ((var_1_28) + (var_1_14));
	/* 941L, 86L, 364L, 385L) */ if (/* 929L, 50L, 51L, 365L, 386L) */ ((stepLocal_1) < (var_1_28))) {
		/* 936L, 80L, 370L, 391L) */ if (/* 931L, 65L, 66L, 371L, 392L) */ ((stepLocal_0) == (5u))) {
			/* 935L, 79L, 376L, 397L) */ var_1_10 = (
				var_1_15
			);
		}
	} else {
		/* 940L, 85L, 380L, 401L) */ var_1_10 = (
			var_1_15
		);
	}


	// From: Req7Batch107Filler_PE_CI
	/* 1020L, 244L, 712L, 727L) */ if (/* 1021L, 223L, 224L, 713L, 728L) */ ((/* 1022L, 219L, 225L, 714L, 729L) */ (max (/* 1022L, 219L, 225L, 714L, 729L) */ (var_1_23) , (var_1_8)))) < (/* 1025L, 222L, 228L, 717L, 732L) */ ((var_1_7) + (var_1_1))))) {
		/* 1028L, 243L, 720L, 735L) */ var_1_27 = (
			/* 1031L, 242L, 723L, 738L) */ ((
				var_1_8
			) - (
				var_1_6
			))
		);
	}


	// From: CodeObject1
	/* 333L, 117L) */ if (/* 334L, 79L, 80L) */ ((/* 335L, 74L, 81L) */ ((var_1_21) * (var_1_15))) > (/* 338L, 78L, 84L) */ (max (/* 338L, 78L, 84L) */ (/* 339L, 76L, 85L) */ (abs (var_1_33))) , (5)))))) {
		/* 342L, 115L) */ if (/* 343L, 100L, 101L) */ ((/* 344L, 98L, 102L) */ ((var_1_15) >= (var_1_33))) || (var_1_25))) {
			/* 348L, 114L) */ var_1_30 = (
				var_1_6
			);
		}
	}


	// From: CodeObject2
	/* 379L, 166L) */ if (/* 380L, 124L, 125L) */ ((var_1_33) >= (/* 382L, 123L, 127L) */ (~ (var_1_15))))) {
		/* 384L, 160L) */ if (/* 385L, 139L, 140L) */ ((/* 386L, 137L, 141L) */ (min (/* 386L, 137L, 141L) */ (499.8f) , (/* 388L, 136L, 143L) */ ((var_1_6) * (var_1_8)))))) <= (var_1_6))) {
			/* 392L, 159L) */ var_1_36 = (
				/* 395L, 158L) */ ((
					var_1_38
				) - (
					var_1_19
				))
			);
		}
	} else {
		/* 398L, 165L) */ var_1_36 = (
			var_1_38
		);
	}


	// From: CodeObject3
	/* 402L, 181L) */ if (var_1_24) {
		/* 404L, 180L) */ var_1_40 = (
			var_1_21
		);
	}


	// From: CodeObject4
	/* 432L, 231L) */ if (/* 433L, 188L, 189L) */ ((/* 434L, 186L, 190L) */ (~ (var_1_28))) < (var_1_15))) {
		/* 437L, 202L) */ var_1_41 = (
			/* 440L, 201L) */ (min (
				/* 440L, 201L) */ (
					var_1_7
				) , (
					var_1_6
				)
			))
		);
	} else {
		/* 443L, 229L) */ if (/* 444L, 209L, 210L) */ ((/* 445L, 207L, 211L) */ ((var_1_16) * (/* 447L, 206L, 213L) */ ((5) >> (25))))) < (var_1_20))) {
			/* 451L, 228L) */ var_1_41 = (
				/* 454L, 227L) */ (abs (
					var_1_6
				))
			);
		}
	}


	// From: CodeObject5
	/* 458L, 259L) */ if (/* 459L, 238L, 239L) */ ((/* 460L, 236L, 240L) */ (abs (var_1_23))) < (var_1_6))) {
		/* 463L, 250L) */ var_1_43 = (
			var_1_19
		);
	} else {
		/* 467L, 258L) */ var_1_43 = (
			/* 470L, 257L) */ (max (
				/* 470L, 257L) */ (
					var_1_19
				) , (
					/* 472L, 256L) */ (max (
						/* 472L, 256L) */ (
							var_1_19
						) , (
							var_1_20
						)
					))
				)
			))
		);
	}


	// From: CodeObject6
	/* 475L, 312L) */ if (/* 476L, 273L, 274L) */ ((/* 477L, 270L, 275L) */ ((var_1_23) + (/* 479L, 269L, 277L) */ (abs (var_1_9))))) < (/* 481L, 272L, 279L) */ (abs (var_1_6))))) {
		/* 483L, 306L) */ if (/* 484L, 290L, 291L) */ ((var_1_38) <= (var_1_20))) {
			/* 487L, 301L) */ var_1_47 = (
				/* 490L, 300L) */ (abs (
					var_1_20
				))
			);
		} else {
			/* 492L, 305L) */ var_1_47 = (
				var_1_19
			);
		}
	} else {
		/* 496L, 311L) */ var_1_47 = (
			var_1_19
		);
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 2305843.009213691400e+12F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 2305843.009213691400e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 63);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 32);
	assume_abort_if_not(var_1_19 <= 64);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 32);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483647);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 127);
	assume_abort_if_not(var_1_38 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_23 = var_1_23;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_29 = var_1_29;
}

int property(void) {
	if (/* 501L, 9L, 18L, 317L, 341L, 859L, 1049L, 53L) */ ((/* 502L, 4L, 19L, 318L, 342L, 852L, 1050L, 46L) */ (max (/* 502L, 4L, 19L, 318L, 342L, 852L, 1050L, 46L) */ (last_1_var_1_23) , (last_1_var_1_27)))) > (/* 507L, 8L, 22L, 321L, 345L, 858L, 1055L, 52L) */ ((last_1_var_1_23) + (/* 510L, 7L, 24L, 323L, 347L, 857L, 1058L, 51L) */ (- (last_1_var_1_23))))))) {
	} else {
	}
	if (/* 529L, 50L, 56L, 407L, 428L, 1077L) */ ((/* 530L, 48L, 57L, 408L, 429L, 1078L) */ (min (/* 530L, 48L, 57L, 408L, 429L, 1078L) */ (var_1_16) , (var_1_28)))) < (var_1_28))) {
		if (/* 535L, 65L, 71L, 413L, 434L, 1083L) */ ((/* 536L, 63L, 72L, 414L, 435L, 1084L) */ ((var_1_28) + (var_1_14))) == (5u))) {
		}
	} else {
	}
	if (var_1_24) {
	} else {
		if (/* 562L, 109L, 115L, 507L, 530L, 1110L) */ ((var_1_24) && (/* 564L, 108L, 117L, 509L, 532L, 1112L) */ ((var_1_23) > (16.75f))))) {
		}
	}
	if (/* 583L, 154L, 162L, 607L, 620L, 1131L) */ ((/* 584L, 152L, 163L, 608L, 621L, 1132L) */ ((/* 585L, 150L, 164L, 609L, 622L, 1133L) */ ((var_1_15) ^ (16u))) * (64u))) > (var_1_18))) {
	}
	if (/* 596L, 185L, 193L, 673L, 693L, 1144L) */ ((var_1_6) < (/* 598L, 184L, 195L, 675L, 695L, 1146L) */ ((var_1_1) * (/* 600L, 183L, 197L, 677L, 697L, 1148L) */ ((var_1_8) - (9.99999998E7))))))) {
	} else {
	}
	if (/* 616L, 223L, 231L, 743L, 758L, 1164L) */ ((/* 617L, 219L, 232L, 744L, 759L, 1165L) */ (max (/* 617L, 219L, 232L, 744L, 759L, 1165L) */ (var_1_23) , (var_1_8)))) < (/* 620L, 222L, 235L, 747L, 762L, 1168L) */ ((var_1_7) + (var_1_1))))) {
	}
	return /* 650L) */ ((
	/* 649L) */ ((
		/* 648L) */ ((
			/* 647L) */ ((
				/* 646L) */ ((
					/* 645L) */ ((
						/* 644L) */ ((
							/* 643L) */ ((
								/* 500L, 41L, 316L, 340L, 874L, 1048L, 68L) */ ((
									/* 501L, 9L, 18L, 317L, 341L, 859L, 1049L, 53L) */ ((
										/* 502L, 4L, 19L, 318L, 342L, 852L, 1050L, 46L) */ (max (
											/* 502L, 4L, 19L, 318L, 342L, 852L, 1050L, 46L) */ (
												last_1_var_1_23
											) , (
												last_1_var_1_27
											)
										))
									) > (
										/* 507L, 8L, 22L, 321L, 345L, 858L, 1055L, 52L) */ ((
											last_1_var_1_23
										) + (
											/* 510L, 7L, 24L, 323L, 347L, 857L, 1058L, 51L) */ (- (
												last_1_var_1_23
											))
										))
									))
								) ? (
									/* 513L, 35L, 325L, 349L, 869L, 1061L, 63L) */ ((
										var_1_1
									) == (
										/* 513L, 35L, 325L, 349L, 869L, 1061L, 63L) */ ((double) (
											/* 516L, 34L, 328L, 352L, 868L, 1064L, 62L) */ ((
												var_1_6
											) - (
												/* 518L, 33L, 330L, 354L, 867L, 1066L, 61L) */ ((
													/* 519L, 31L, 331L, 355L, 865L, 1067L, 59L) */ ((
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
								) : (
									/* 523L, 39L, 335L, 359L, 873L, 1071L, 67L) */ ((
										var_1_1
									) == (
										/* 523L, 39L, 335L, 359L, 873L, 1071L, 67L) */ ((double) (
											var_1_6
										))
									))
								))
							) && (
								/* 528L, 87L, 406L, 427L, 1076L) */ ((
									/* 529L, 50L, 56L, 407L, 428L, 1077L) */ ((
										/* 530L, 48L, 57L, 408L, 429L, 1078L) */ (min (
											/* 530L, 48L, 57L, 408L, 429L, 1078L) */ (
												var_1_16
											) , (
												var_1_28
											)
										))
									) < (
										var_1_28
									))
								) ? (
									/* 534L, 81L, 412L, 433L, 1082L) */ ((
										/* 535L, 65L, 71L, 413L, 434L, 1083L) */ ((
											/* 536L, 63L, 72L, 414L, 435L, 1084L) */ ((
												var_1_28
											) + (
												var_1_14
											))
										) == (
											5u
										))
									) ? (
										/* 540L, 79L, 418L, 439L, 1088L) */ ((
											var_1_10
										) == (
											/* 540L, 79L, 418L, 439L, 1088L) */ ((unsigned long int) (
												var_1_15
											))
										))
									) : (
										1
									))
								) : (
									/* 544L, 85L, 422L, 443L, 1092L) */ ((
										var_1_10
									) == (
										/* 544L, 85L, 422L, 443L, 1092L) */ ((unsigned long int) (
											var_1_15
										))
									))
								))
							))
						) && (
							/* 549L, 127L, 494L, 517L, 1097L) */ ((
								var_1_24
							) ? (
								/* 551L, 104L, 496L, 519L, 1099L) */ ((
									var_1_16
								) == (
									/* 551L, 104L, 496L, 519L, 1099L) */ ((unsigned char) (
										/* 554L, 103L, 499L, 522L, 1102L) */ ((
											/* 555L, 101L, 500L, 523L, 1103L) */ ((
												var_1_18
											) + (
												/* 557L, 100L, 502L, 525L, 1105L) */ ((
													var_1_19
												) + (
													var_1_20
												))
											))
										) - (
											var_1_21
										))
									))
								))
							) : (
								/* 561L, 125L, 506L, 529L, 1109L) */ ((
									/* 562L, 109L, 115L, 507L, 530L, 1110L) */ ((
										var_1_24
									) && (
										/* 564L, 108L, 117L, 509L, 532L, 1112L) */ ((
											var_1_23
										) > (
											16.75f
										))
									))
								) ? (
									/* 567L, 123L, 512L, 535L, 1115L) */ ((
										var_1_16
									) == (
										/* 567L, 123L, 512L, 535L, 1115L) */ ((unsigned char) (
											var_1_19
										))
									))
								) : (
									1
								))
							))
						))
					) && (
						/* 575L, 137L, 563L, 573L, 1123L) */ ((
							var_1_23
						) == (
							/* 575L, 137L, 563L, 573L, 1123L) */ ((double) (
								/* 578L, 136L, 566L, 576L, 1126L) */ ((
									var_1_8
								) - (
									var_1_6
								))
							))
						))
					))
				) && (
					/* 582L, 174L, 606L, 619L, 1130L) */ ((
						/* 583L, 154L, 162L, 607L, 620L, 1131L) */ ((
							/* 584L, 152L, 163L, 608L, 621L, 1132L) */ ((
								/* 585L, 150L, 164L, 609L, 622L, 1133L) */ ((
									var_1_15
								) ^ (
									16u
								))
							) * (
								64u
							))
						) > (
							var_1_18
						))
					) ? (
						/* 590L, 172L, 614L, 627L, 1138L) */ ((
							var_1_24
						) == (
							/* 590L, 172L, 614L, 627L, 1138L) */ ((unsigned char) (
								var_1_25
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 595L, 212L, 672L, 692L, 1143L) */ ((
					/* 596L, 185L, 193L, 673L, 693L, 1144L) */ ((
						var_1_6
					) < (
						/* 598L, 184L, 195L, 675L, 695L, 1146L) */ ((
							var_1_1
						) * (
							/* 600L, 183L, 197L, 677L, 697L, 1148L) */ ((
								var_1_8
							) - (
								9.99999998E7
							))
						))
					))
				) ? (
					/* 603L, 206L, 680L, 700L, 1151L) */ ((
						var_1_26
					) == (
						/* 603L, 206L, 680L, 700L, 1151L) */ ((signed char) (
							/* 606L, 205L, 683L, 703L, 1154L) */ (abs (
								/* 607L, 204L, 684L, 704L, 1155L) */ (min (
									/* 607L, 204L, 684L, 704L, 1155L) */ (
										var_1_20
									) , (
										var_1_19
									)
								))
							))
						))
					))
				) : (
					/* 610L, 210L, 687L, 707L, 1158L) */ ((
						var_1_26
					) == (
						/* 610L, 210L, 687L, 707L, 1158L) */ ((signed char) (
							var_1_20
						))
					))
				))
			))
		) && (
			/* 615L, 245L, 742L, 757L, 1163L) */ ((
				/* 616L, 223L, 231L, 743L, 758L, 1164L) */ ((
					/* 617L, 219L, 232L, 744L, 759L, 1165L) */ (max (
						/* 617L, 219L, 232L, 744L, 759L, 1165L) */ (
							var_1_23
						) , (
							var_1_8
						)
					))
				) < (
					/* 620L, 222L, 235L, 747L, 762L, 1168L) */ ((
						var_1_7
					) + (
						var_1_1
					))
				))
			) ? (
				/* 623L, 243L, 750L, 765L, 1171L) */ ((
					var_1_27
				) == (
					/* 623L, 243L, 750L, 765L, 1171L) */ ((double) (
						/* 626L, 242L, 753L, 768L, 1174L) */ ((
							var_1_8
						) - (
							var_1_6
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 631L, 253L, 785L, 791L, 887L, 1179L, 11L) */ ((
			var_1_28
		) == (
			/* 631L, 253L, 785L, 791L, 887L, 1179L, 11L) */ ((signed long int) (
				last_1_var_1_29
			))
		))
	))
) && (
	/* 638L, 263L, 809L, 815L, 1186L) */ ((
		var_1_29
	) == (
		/* 638L, 263L, 809L, 815L, 1186L) */ ((signed short int) (
			var_1_28
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
