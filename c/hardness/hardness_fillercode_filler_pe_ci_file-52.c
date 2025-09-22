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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch52Filler_PE_CI.c", 13, "reach_error"); }
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
signed long int var_1_1 = -1;
unsigned long int var_1_7 = 64;
unsigned char var_1_8 = 128;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 16;
signed long int var_1_11 = -256;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed long int var_1_15 = -50;
unsigned char var_1_17 = 4;
double var_1_18 = 100.5;
double var_1_19 = 4.2;
unsigned char var_1_20 = 0;
signed char var_1_21 = -16;
signed long int var_1_25 = 5;
signed char var_1_26 = 100;
unsigned short int var_1_27 = 10000;
unsigned char var_1_28 = 1;
unsigned long int var_1_29 = 128;
unsigned char var_1_31 = 0;
float var_1_35 = 1.5;
unsigned char var_1_37 = 0;
unsigned long int var_1_38 = 3896410050;
unsigned char var_1_39 = 0;
signed short int var_1_40 = 1;
signed char var_1_41 = 32;
unsigned long int var_1_42 = 4;
unsigned long int var_1_43 = 2;
unsigned long int var_1_44 = 100000000;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch52Filler_PE_CI
	/* 988L, 131L, 513L, 521L) */ var_1_12 = (
		/* 991L, 130L, 516L, 524L) */ ((
			var_1_13
		) && (
			var_1_14
		))
	);


	// From: Req6Batch52Filler_PE_CI
	/* 1031L, 194L, 716L, 724L) */ var_1_17 = (
		/* 1034L, 193L, 719L, 727L) */ (abs (
			var_1_10
		))
	);


	// From: Req8Batch52Filler_PE_CI
	unsigned char stepLocal_7 = var_1_17;
	/* 1076L, 276L, 830L, 851L) */ if (/* 1065L, 244L, 245L, 831L, 852L) */ ((/* 1064L, 242L, 246L, 832L, 853L) */ ((/* 1060L, 238L, 247L, 833L, 854L) */ ((var_1_10) | (var_1_17))) % (/* 1063L, 241L, 250L, 836L, 857L) */ ((var_1_8) + (var_1_9))))) != (stepLocal_7))) {
		/* 1075L, 274L, 840L, 861L) */ if (var_1_12) {
			/* 1070L, 269L, 842L, 863L) */ var_1_20 = (
				5
			);
		} else {
			/* 1074L, 273L, 846L, 867L) */ var_1_20 = (
				var_1_10
			);
		}
	}


	// From: Req2Batch52Filler_PE_CI
	signed long int stepLocal_2 = /* 951L, 62L, 66L, 399L, 414L) */ ((/* 952L, 60L, 67L, 400L, 415L) */ (min (/* 952L, 60L, 67L, 400L, 415L) */ (var_1_8) , (var_1_9)))) - (var_1_10));
	/* 965L, 87L, 396L, 411L) */ if (/* 958L, 63L, 64L, 397L, 412L) */ ((var_1_17) < (stepLocal_2))) {
		/* 964L, 85L, 404L, 419L) */ if (var_1_12) {
			/* 963L, 84L, 406L, 421L) */ var_1_7 = (
				var_1_9
			);
		}
	}


	// From: Req3Batch52Filler_PE_CI
	unsigned char stepLocal_3 = var_1_17;
	/* 983L, 120L, 456L, 470L) */ if (/* 975L, 97L, 98L, 457L, 471L) */ ((/* 974L, 95L, 99L, 458L, 472L) */ ((64) - (var_1_7))) >= (stepLocal_3))) {
		/* 982L, 118L, 462L, 476L) */ if (/* 977L, 109L, 110L, 463L, 477L) */ (! (var_1_12))) {
			/* 981L, 117L, 465L, 479L) */ var_1_11 = (
				var_1_10
			);
		}
	}


	// From: Req5Batch52Filler_PE_CI
	unsigned char stepLocal_5 = /* 999L, 140L, 144L, 608L, 635L) */ ((var_1_8) < (var_1_17));
	signed long int stepLocal_4 = var_1_11;
	/* 1024L, 184L, 606L, 633L) */ if (/* 1004L, 142L, 143L, 607L, 634L) */ ((stepLocal_5) && (var_1_12))) {
		/* 1012L, 160L, 612L, 639L) */ var_1_15 = (
			/* 1011L, 159L, 615L, 642L) */ (max (
				/* 1011L, 159L, 615L, 642L) */ (
					var_1_10
				) , (
					/* 1010L, 158L, 617L, 644L) */ ((
						var_1_17
					) - (
						var_1_11
					))
				)
			))
		);
	} else {
		/* 1023L, 182L, 620L, 647L) */ if (/* 1014L, 163L, 164L, 621L, 648L) */ ((var_1_10) < (stepLocal_4))) {
			/* 1018L, 173L, 624L, 651L) */ var_1_15 = (
				var_1_8
			);
		} else {
			/* 1022L, 181L, 628L, 655L) */ var_1_15 = (
				var_1_10
			);
		}
	}


	// From: Req7Batch52Filler_PE_CI
	unsigned char stepLocal_6 = var_1_8;
	/* 1051L, 230L, 774L, 788L) */ if (/* 1043L, 207L, 208L, 775L, 789L) */ ((/* 1042L, 205L, 209L, 776L, 790L) */ ((var_1_15) + (var_1_7))) < (stepLocal_6))) {
		/* 1050L, 228L, 780L, 794L) */ if (/* 1045L, 219L, 220L, 781L, 795L) */ (! (var_1_13))) {
			/* 1049L, 227L, 783L, 797L) */ var_1_18 = (
				var_1_19
			);
		}
	}


	// From: Req1Batch52Filler_PE_CI
	unsigned long int stepLocal_1 = /* 918L, 5L, 9L, 282L, 311L) */ ((var_1_7) * (/* 920L, 4L, 11L, 284L, 313L) */ (~ (var_1_15))));
	signed long int stepLocal_0 = var_1_15;
	/* 945L, 51L, 280L, 309L) */ if (/* 924L, 7L, 8L, 281L, 310L) */ ((stepLocal_1) >= (var_1_15))) {
		/* 934L, 36L, 287L, 316L) */ if (/* 926L, 22L, 23L, 288L, 317L) */ ((stepLocal_0) <= (var_1_7))) {
			/* 933L, 35L, 291L, 320L) */ var_1_1 = (
				/* 932L, 34L, 294L, 323L) */ ((
					/* 930L, 32L, 295L, 324L) */ (abs (
						var_1_7
					))
				) - (
					var_1_15
				))
			);
		}
	} else {
		/* 944L, 49L, 298L, 327L) */ if (var_1_12) {
			/* 939L, 44L, 300L, 329L) */ var_1_1 = (
				var_1_7
			);
		} else {
			/* 943L, 48L, 304L, 333L) */ var_1_1 = (
				var_1_15
			);
		}
	}


	// From: CodeObject1
	/* 266L, 37L) */ if (/* 267L, 12L, 13L) */ ((/* 268L, 6L, 14L) */ ((var_1_10) | (/* 270L, 5L, 16L) */ (max (/* 270L, 5L, 16L) */ (var_1_10) , (var_1_17)))))) < (/* 273L, 11L, 19L) */ ((/* 274L, 9L, 20L) */ (abs (var_1_25))) >> (25))))) {
		/* 277L, 36L) */ var_1_21 = (
			var_1_26
		);
	}


	// From: CodeObject2
	/* 282L, 46L) */ var_1_27 = (
		256
	);


	// From: CodeObject3
	/* 287L, 79L) */ if (/* 288L, 55L, 56L) */ ((/* 289L, 53L, 57L) */ ((var_1_25) / (var_1_29))) > (var_1_7))) {
		/* 293L, 78L) */ var_1_28 = (
			/* 296L, 77L) */ ((
				/* 297L, 71L) */ (! (
					/* 298L, 70L) */ ((
						var_1_12
					) && (
						var_1_31
					))
				))
			) && (
				/* 301L, 76L) */ ((
					var_1_12
				) || (
					/* 303L, 75L) */ ((
						var_1_14
					) && (
						var_1_13
					))
				))
			))
		);
	}


	// From: CodeObject4
	/* 307L, 88L) */ var_1_35 = (
		var_1_19
	);


	// From: CodeObject5
	/* 311L, 129L) */ if (/* 312L, 95L, 96L) */ ((var_1_17) != (var_1_7))) {
		/* 315L, 127L) */ if (/* 316L, 106L, 107L) */ ((var_1_29) >= (/* 318L, 105L, 109L) */ ((var_1_38) - (var_1_25))))) {
			/* 321L, 120L) */ var_1_37 = (
				var_1_31
			);
		} else {
			/* 325L, 126L) */ var_1_37 = (
				/* 328L, 125L) */ ((
					var_1_14
				) && (
					var_1_13
				))
			);
		}
	}


	// From: CodeObject6
	/* 331L, 151L) */ if (/* 332L, 136L, 137L) */ ((/* 333L, 134L, 138L) */ (abs (var_1_19))) >= (var_1_19))) {
		/* 336L, 150L) */ var_1_39 = (
			/* 339L, 149L) */ ((
				var_1_12
			) && (
				var_1_31
			))
		);
	}


	// From: CodeObject7
	/* 343L, 180L) */ if (/* 344L, 160L, 161L) */ ((/* 345L, 158L, 162L) */ ((/* 346L, 156L, 163L) */ (abs (8))) % (var_1_29))) != (var_1_25))) {
		/* 350L, 179L) */ var_1_40 = (
			/* 353L, 178L) */ (min (
				/* 353L, 178L) */ (
					/* 354L, 176L) */ (abs (
						var_1_17
					))
				) , (
					var_1_10
				)
			))
		);
	}


	// From: CodeObject8
	/* 385L, 263L) */ if (/* 386L, 190L, 191L) */ ((/* 387L, 188L, 192L) */ ((var_1_38) ^ (var_1_11))) >= (var_1_29))) {
		/* 391L, 261L) */ if (/* 392L, 218L, 219L) */ ((/* 393L, 210L, 220L) */ (min (/* 393L, 210L, 220L) */ (/* 394L, 208L, 221L) */ ((var_1_29) | (var_1_25))) , (var_1_38)))) < (/* 398L, 217L, 225L) */ ((/* 399L, 213L, 226L) */ ((var_1_11) & (var_1_42))) * (/* 402L, 216L, 229L) */ (min (/* 402L, 216L, 229L) */ (var_1_43) , (var_1_44)))))))) {
			/* 405L, 248L) */ var_1_41 = (
				var_1_26
			);
		} else {
			/* 409L, 260L) */ var_1_41 = (
				2
			);
		}
	}
}



void updateVariables(void) {
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 127);
	assume_abort_if_not(var_1_8 <= 255);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 127);
	assume_abort_if_not(var_1_9 <= 255);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -127);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967295);
	assume_abort_if_not(var_1_29 != 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 2147483647);
	assume_abort_if_not(var_1_38 <= 4294967295);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 4294967295);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 4294967295);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 4294967295);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 414L, 7L, 14L, 339L, 368L, 1081L) */ ((/* 415L, 5L, 15L, 340L, 369L, 1082L) */ ((var_1_7) * (/* 417L, 4L, 17L, 342L, 371L, 1084L) */ (~ (var_1_15))))) >= (var_1_15))) {
		if (/* 421L, 22L, 26L, 346L, 375L, 1088L) */ ((var_1_15) <= (var_1_7))) {
		}
	} else {
		if (var_1_12) {
		} else {
		}
	}
	if (/* 443L, 63L, 71L, 427L, 442L, 1110L) */ ((var_1_17) < (/* 445L, 62L, 73L, 429L, 444L, 1112L) */ ((/* 446L, 60L, 74L, 430L, 445L, 1113L) */ (min (/* 446L, 60L, 74L, 430L, 445L, 1113L) */ (var_1_8) , (var_1_9)))) - (var_1_10))))) {
		if (var_1_12) {
		}
	}
	if (/* 458L, 97L, 103L, 485L, 499L, 1125L) */ ((/* 459L, 95L, 104L, 486L, 500L, 1126L) */ ((64) - (var_1_7))) >= (var_1_17))) {
		if (/* 464L, 109L, 112L, 491L, 505L, 1131L) */ (! (var_1_12))) {
		}
	}
	if (/* 480L, 142L, 148L, 661L, 688L, 1147L) */ ((/* 481L, 140L, 149L, 662L, 689L, 1148L) */ ((var_1_8) < (var_1_17))) && (var_1_12))) {
	} else {
		if (/* 494L, 163L, 167L, 675L, 702L, 1161L) */ ((var_1_10) < (var_1_11))) {
		} else {
		}
	}
	if (/* 515L, 207L, 213L, 803L, 817L, 1182L) */ ((/* 516L, 205L, 214L, 804L, 818L, 1183L) */ ((var_1_15) + (var_1_7))) < (var_1_8))) {
		if (/* 521L, 219L, 222L, 809L, 823L, 1188L) */ (! (var_1_13))) {
		}
	}
	if (/* 529L, 244L, 254L, 873L, 894L, 1196L) */ ((/* 530L, 242L, 255L, 874L, 895L, 1197L) */ ((/* 531L, 238L, 256L, 875L, 896L, 1198L) */ ((var_1_10) | (var_1_17))) % (/* 534L, 241L, 259L, 878L, 899L, 1201L) */ ((var_1_8) + (var_1_9))))) != (var_1_17))) {
		if (var_1_12) {
		} else {
		}
	}
	return /* 555L) */ ((
	/* 554L) */ ((
		/* 553L) */ ((
			/* 552L) */ ((
				/* 551L) */ ((
					/* 550L) */ ((
						/* 549L) */ ((
							/* 413L, 52L, 338L, 367L, 1080L) */ ((
								/* 414L, 7L, 14L, 339L, 368L, 1081L) */ ((
									/* 415L, 5L, 15L, 340L, 369L, 1082L) */ ((
										var_1_7
									) * (
										/* 417L, 4L, 17L, 342L, 371L, 1084L) */ (~ (
											var_1_15
										))
									))
								) >= (
									var_1_15
								))
							) ? (
								/* 420L, 37L, 345L, 374L, 1087L) */ ((
									/* 421L, 22L, 26L, 346L, 375L, 1088L) */ ((
										var_1_15
									) <= (
										var_1_7
									))
								) ? (
									/* 424L, 35L, 349L, 378L, 1091L) */ ((
										var_1_1
									) == (
										/* 424L, 35L, 349L, 378L, 1091L) */ ((signed long int) (
											/* 427L, 34L, 352L, 381L, 1094L) */ ((
												/* 428L, 32L, 353L, 382L, 1095L) */ (abs (
													var_1_7
												))
											) - (
												var_1_15
											))
										))
									))
								) : (
									1
								))
							) : (
								/* 431L, 50L, 356L, 385L, 1098L) */ ((
									var_1_12
								) ? (
									/* 433L, 44L, 358L, 387L, 1100L) */ ((
										var_1_1
									) == (
										/* 433L, 44L, 358L, 387L, 1100L) */ ((signed long int) (
											var_1_7
										))
									))
								) : (
									/* 437L, 48L, 362L, 391L, 1104L) */ ((
										var_1_1
									) == (
										/* 437L, 48L, 362L, 391L, 1104L) */ ((signed long int) (
											var_1_15
										))
									))
								))
							))
						) && (
							/* 442L, 88L, 426L, 441L, 1109L) */ ((
								/* 443L, 63L, 71L, 427L, 442L, 1110L) */ ((
									var_1_17
								) < (
									/* 445L, 62L, 73L, 429L, 444L, 1112L) */ ((
										/* 446L, 60L, 74L, 430L, 445L, 1113L) */ (min (
											/* 446L, 60L, 74L, 430L, 445L, 1113L) */ (
												var_1_8
											) , (
												var_1_9
											)
										))
									) - (
										var_1_10
									))
								))
							) ? (
								/* 450L, 86L, 434L, 449L, 1117L) */ ((
									var_1_12
								) ? (
									/* 452L, 84L, 436L, 451L, 1119L) */ ((
										var_1_7
									) == (
										/* 452L, 84L, 436L, 451L, 1119L) */ ((unsigned long int) (
											var_1_9
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
						/* 457L, 121L, 484L, 498L, 1124L) */ ((
							/* 458L, 97L, 103L, 485L, 499L, 1125L) */ ((
								/* 459L, 95L, 104L, 486L, 500L, 1126L) */ ((
									64
								) - (
									var_1_7
								))
							) >= (
								var_1_17
							))
						) ? (
							/* 463L, 119L, 490L, 504L, 1130L) */ ((
								/* 464L, 109L, 112L, 491L, 505L, 1131L) */ (! (
									var_1_12
								))
							) ? (
								/* 466L, 117L, 493L, 507L, 1133L) */ ((
									var_1_11
								) == (
									/* 466L, 117L, 493L, 507L, 1133L) */ ((signed long int) (
										var_1_10
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
					/* 472L, 131L, 529L, 537L, 1139L) */ ((
						var_1_12
					) == (
						/* 472L, 131L, 529L, 537L, 1139L) */ ((unsigned char) (
							/* 475L, 130L, 532L, 540L, 1142L) */ ((
								var_1_13
							) && (
								var_1_14
							))
						))
					))
				))
			) && (
				/* 479L, 185L, 660L, 687L, 1146L) */ ((
					/* 480L, 142L, 148L, 661L, 688L, 1147L) */ ((
						/* 481L, 140L, 149L, 662L, 689L, 1148L) */ ((
							var_1_8
						) < (
							var_1_17
						))
					) && (
						var_1_12
					))
				) ? (
					/* 485L, 160L, 666L, 693L, 1152L) */ ((
						var_1_15
					) == (
						/* 485L, 160L, 666L, 693L, 1152L) */ ((signed long int) (
							/* 488L, 159L, 669L, 696L, 1155L) */ (max (
								/* 488L, 159L, 669L, 696L, 1155L) */ (
									var_1_10
								) , (
									/* 490L, 158L, 671L, 698L, 1157L) */ ((
										var_1_17
									) - (
										var_1_11
									))
								)
							))
						))
					))
				) : (
					/* 493L, 183L, 674L, 701L, 1160L) */ ((
						/* 494L, 163L, 167L, 675L, 702L, 1161L) */ ((
							var_1_10
						) < (
							var_1_11
						))
					) ? (
						/* 497L, 173L, 678L, 705L, 1164L) */ ((
							var_1_15
						) == (
							/* 497L, 173L, 678L, 705L, 1164L) */ ((signed long int) (
								var_1_8
							))
						))
					) : (
						/* 501L, 181L, 682L, 709L, 1168L) */ ((
							var_1_15
						) == (
							/* 501L, 181L, 682L, 709L, 1168L) */ ((signed long int) (
								var_1_10
							))
						))
					))
				))
			))
		) && (
			/* 508L, 194L, 732L, 740L, 1175L) */ ((
				var_1_17
			) == (
				/* 508L, 194L, 732L, 740L, 1175L) */ ((unsigned char) (
					/* 511L, 193L, 735L, 743L, 1178L) */ (abs (
						var_1_10
					))
				))
			))
		))
	) && (
		/* 514L, 231L, 802L, 816L, 1181L) */ ((
			/* 515L, 207L, 213L, 803L, 817L, 1182L) */ ((
				/* 516L, 205L, 214L, 804L, 818L, 1183L) */ ((
					var_1_15
				) + (
					var_1_7
				))
			) < (
				var_1_8
			))
		) ? (
			/* 520L, 229L, 808L, 822L, 1187L) */ ((
				/* 521L, 219L, 222L, 809L, 823L, 1188L) */ (! (
					var_1_13
				))
			) ? (
				/* 523L, 227L, 811L, 825L, 1190L) */ ((
					var_1_18
				) == (
					/* 523L, 227L, 811L, 825L, 1190L) */ ((double) (
						var_1_19
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
	/* 528L, 277L, 872L, 893L, 1195L) */ ((
		/* 529L, 244L, 254L, 873L, 894L, 1196L) */ ((
			/* 530L, 242L, 255L, 874L, 895L, 1197L) */ ((
				/* 531L, 238L, 256L, 875L, 896L, 1198L) */ ((
					var_1_10
				) | (
					var_1_17
				))
			) % (
				/* 534L, 241L, 259L, 878L, 899L, 1201L) */ ((
					var_1_8
				) + (
					var_1_9
				))
			))
		) != (
			var_1_17
		))
	) ? (
		/* 538L, 275L, 882L, 903L, 1205L) */ ((
			var_1_12
		) ? (
			/* 540L, 269L, 884L, 905L, 1207L) */ ((
				var_1_20
			) == (
				/* 540L, 269L, 884L, 905L, 1207L) */ ((unsigned char) (
					5
				))
			))
		) : (
			/* 544L, 273L, 888L, 909L, 1211L) */ ((
				var_1_20
			) == (
				/* 544L, 273L, 888L, 909L, 1211L) */ ((unsigned char) (
					var_1_10
				))
			))
		))
	) : (
		1
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
