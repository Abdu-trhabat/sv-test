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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch160Filler_PE_CI.c", 13, "reach_error"); }
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
signed short int var_1_1 = -64;
signed short int var_1_4 = 8;
signed short int var_1_5 = 500;
signed short int var_1_6 = 5;
signed short int var_1_7 = 100;
unsigned char var_1_8 = 1;
unsigned short int var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed short int var_1_13 = -8;
signed short int var_1_14 = 23230;
signed short int var_1_15 = 32;
unsigned long int var_1_16 = 2;
unsigned long int var_1_17 = 1108857779;
signed long int var_1_18 = -100;
double var_1_19 = 0.31;
double var_1_20 = 3.75;
double var_1_21 = 49.6;
double var_1_25 = 7.75;
signed char var_1_26 = -2;
signed short int var_1_28 = 8;
unsigned short int var_1_30 = 1;
unsigned short int var_1_31 = 4;
unsigned short int var_1_32 = 65365;
unsigned short int var_1_33 = 10;
unsigned short int var_1_34 = 8;
unsigned short int var_1_35 = 128;
signed short int var_1_36 = 8;
unsigned short int var_1_37 = 32;
unsigned long int var_1_38 = 2;
signed char var_1_39 = 5;
unsigned long int var_1_41 = 128;
signed char var_1_42 = -2;
unsigned char var_1_43 = 0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_18 = -100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch160Filler_PE_CI
	signed long int stepLocal_1 = /* 912L, 99L, 103L, 482L, 508L) */ ((/* 913L, 97L, 104L, 483L, 509L) */ ((var_1_14) - (var_1_5))) - (var_1_9));
	/* 937L, 132L, 479L, 505L) */ if (/* 919L, 100L, 101L, 480L, 506L) */ ((var_1_6) < (stepLocal_1))) {
		/* 929L, 124L, 487L, 513L) */ var_1_13 = (
			/* 928L, 123L, 490L, 516L) */ ((
				/* 926L, 121L, 491L, 517L) */ ((
					/* 924L, 119L, 492L, 518L) */ ((
						var_1_9
					) + (
						var_1_6
					))
				) - (
					var_1_5
				))
			) + (
				var_1_7
			))
		);
	} else {
		/* 936L, 131L, 497L, 523L) */ var_1_13 = (
			/* 935L, 130L, 500L, 526L) */ (abs (
				/* 934L, 129L, 501L, 527L) */ ((
					1
				) - (
					50
				))
			))
		);
	}


	// From: Req5Batch160Filler_PE_CI
	/* 950L, 154L, 592L, 612L) */ if (/* 951L, 141L, 142L, 593L, 613L) */ ((var_1_9) == (var_1_14))) {
		/* 954L, 153L, 596L, 616L) */ var_1_15 = (
			/* 957L, 152L, 599L, 619L) */ ((
				var_1_6
			) - (
				var_1_4
			))
		);
	}


	// From: Req6Batch160Filler_PE_CI
	/* 962L, 219L, 664L, 686L) */ if (/* 963L, 188L, 189L, 665L, 687L) */ ((/* 964L, 182L, 190L, 666L, 688L) */ ((/* 965L, 180L, 191L, 667L, 689L) */ ((var_1_13) / (var_1_14))) * (var_1_9))) < (/* 969L, 187L, 195L, 671L, 693L) */ (min (/* 969L, 187L, 195L, 671L, 693L) */ (var_1_5) , (/* 971L, 186L, 197L, 673L, 695L) */ ((var_1_6) - (var_1_4)))))))) {
		/* 974L, 218L, 676L, 698L) */ var_1_16 = (
			/* 977L, 217L, 679L, 701L) */ ((
				var_1_9
			) + (
				/* 979L, 216L, 681L, 703L) */ ((
					var_1_17
				) - (
					var_1_14
				))
			))
		);
	}


	// From: Req7Batch160Filler_PE_CI
	unsigned short int stepLocal_3 = var_1_9;
	signed short int stepLocal_2 = var_1_5;
	/* 1011L, 267L, 751L, 777L) */ if (/* 990L, 229L, 230L, 752L, 778L) */ ((stepLocal_3) >= (var_1_16))) {
		/* 996L, 241L, 755L, 781L) */ var_1_18 = (
			/* 995L, 240L, 758L, 784L) */ ((
				var_1_4
			) + (
				var_1_16
			))
		);
	} else {
		/* 1010L, 265L, 761L, 787L) */ if (/* 1000L, 246L, 247L, 762L, 788L) */ ((stepLocal_2) > (/* 999L, 245L, 249L, 764L, 790L) */ ((var_1_4) << (var_1_16))))) {
			/* 1005L, 260L, 767L, 793L) */ var_1_18 = (
				last_1_var_1_18
			);
		} else {
			/* 1009L, 264L, 772L, 798L) */ var_1_18 = (
				var_1_16
			);
		}
	}


	// From: Req1Batch160Filler_PE_CI
	unsigned long int stepLocal_0 = var_1_16;
	/* 876L, 27L, 271L, 292L) */ if (/* 859L, 4L, 5L, 272L, 293L) */ ((stepLocal_0) >= (var_1_18))) {
		/* 871L, 22L, 275L, 296L) */ var_1_1 = (
			/* 870L, 21L, 278L, 299L) */ ((
				/* 866L, 17L, 279L, 300L) */ ((
					var_1_4
				) - (
					/* 865L, 16L, 281L, 302L) */ ((
						var_1_5
					) + (
						var_1_6
					))
				))
			) + (
				/* 869L, 20L, 284L, 305L) */ ((
					1
				) - (
					var_1_7
				))
			))
		);
	} else {
		/* 875L, 26L, 287L, 308L) */ var_1_1 = (
			var_1_5
		);
	}


	// From: Req2Batch160Filler_PE_CI
	/* 881L, 65L, 356L, 377L) */ if (/* 882L, 39L, 40L, 357L, 378L) */ ((/* 883L, 37L, 41L, 358L, 379L) */ ((1) << (/* 885L, 36L, 43L, 360L, 381L) */ ((var_1_9) + (10))))) >= (var_1_18))) {
		/* 889L, 60L, 364L, 385L) */ var_1_8 = (
			/* 892L, 59L, 367L, 388L) */ (! (
				/* 893L, 58L, 368L, 389L) */ ((
					var_1_10
				) || (
					var_1_11
				))
			))
		);
	} else {
		/* 896L, 64L, 371L, 392L) */ var_1_8 = (
			var_1_11
		);
	}


	// From: Req3Batch160Filler_PE_CI
	/* 902L, 86L, 440L, 450L) */ if (/* 903L, 75L, 76L, 441L, 451L) */ ((var_1_11) || (var_1_8))) {
		/* 906L, 85L, 444L, 454L) */ var_1_12 = (
			0
		);
	}


	// From: CodeObject1
	/* 236L, 5L) */ var_1_19 = (
		var_1_20
	);


	// From: CodeObject2
	/* 240L, 35L) */ if (/* 241L, 19L, 20L) */ ((/* 242L, 17L, 21L) */ ((var_1_9) - (var_1_17))) >= (var_1_16))) {
		/* 246L, 34L) */ var_1_21 = (
			/* 249L, 33L) */ (abs (
				var_1_25
			))
		);
	}


	// From: CodeObject3
	/* 252L, 42L) */ var_1_26 = (
		var_1_9
	);


	// From: CodeObject4
	/* 256L, 71L) */ if (/* 257L, 49L, 50L) */ ((var_1_19) >= (var_1_21))) {
		/* 260L, 64L) */ var_1_28 = (
			/* 263L, 63L) */ (abs (
				/* 264L, 62L) */ (max (
					/* 264L, 62L) */ (
						/* 265L, 60L) */ ((
							var_1_9
						) + (
							var_1_16
						))
					) , (
						var_1_9
					)
				))
			))
		);
	} else {
		/* 269L, 70L) */ var_1_28 = (
			/* 272L, 69L) */ (min (
				/* 272L, 69L) */ (
					var_1_9
				) , (
					128
				)
			))
		);
	}


	// From: CodeObject5
	/* 297L, 107L) */ if (/* 298L, 77L, 78L) */ ((var_1_14) >= (var_1_16))) {
		/* 301L, 105L) */ if (/* 302L, 86L, 87L) */ ((var_1_18) >= (var_1_17))) {
			/* 305L, 104L) */ var_1_30 = (
				/* 308L, 103L) */ (min (
					/* 308L, 103L) */ (
						var_1_31
					) , (
						/* 310L, 102L) */ (min (
							/* 310L, 102L) */ (
								/* 311L, 98L) */ ((
									var_1_32
								) - (
									var_1_33
								))
							) , (
								/* 314L, 101L) */ (min (
									/* 314L, 101L) */ (
										var_1_34
									) , (
										var_1_35
									)
								))
							)
						))
					)
				))
			);
		}
	}


	// From: CodeObject6
	/* 318L, 151L) */ if (/* 319L, 115L, 116L) */ ((var_1_4) > (var_1_9))) {
		/* 322L, 149L) */ if (/* 323L, 131L, 132L) */ ((var_1_19) < (/* 325L, 130L, 134L) */ ((var_1_25) + (var_1_20))))) {
			/* 328L, 148L) */ var_1_36 = (
				/* 331L, 147L) */ (abs (
					/* 332L, 146L) */ ((
						var_1_18
					) + (
						var_1_9
					))
				))
			);
		}
	}


	// From: CodeObject7
	/* 336L, 161L) */ var_1_37 = (
		/* 339L, 160L) */ (abs (
			var_1_9
		))
	);


	// From: CodeObject8
	/* 341L, 184L) */ if (/* 342L, 168L, 169L) */ ((var_1_17) >= (var_1_16))) {
		/* 345L, 183L) */ var_1_38 = (
			/* 348L, 182L) */ (abs (
				/* 349L, 181L) */ (min (
					/* 349L, 181L) */ (
						2u
					) , (
						/* 351L, 180L) */ (min (
							/* 351L, 180L) */ (
								var_1_17
							) , (
								2u
							)
						))
					)
				))
			))
		);
	}


	// From: CodeObject9
	/* 354L, 209L) */ if (/* 355L, 190L, 191L) */ ((var_1_32) <= (2))) {
		/* 358L, 203L) */ var_1_39 = (
			/* 361L, 202L) */ (abs (
				/* 362L, 201L) */ (max (
					/* 362L, 201L) */ (
						var_1_9
					) , (
						-16
					)
				))
			))
		);
	} else {
		/* 365L, 208L) */ var_1_39 = (
			/* 368L, 207L) */ (abs (
				-2
			))
		);
	}


	// From: CodeObject10
	/* 371L, 216L) */ var_1_41 = (
		var_1_17
	);


	// From: CodeObject11
	/* 376L, 224L) */ var_1_42 = (
		var_1_9
	);


	// From: CodeObject12
	/* 381L, 232L) */ var_1_43 = (
		var_1_11
	);
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 8192);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 8191);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 15);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 1073741823);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 32767);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 32767);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	if (/* 386L, 4L, 8L, 314L, 335L, 1017L) */ ((var_1_16) >= (var_1_18))) {
	} else {
	}
	if (/* 408L, 39L, 47L, 399L, 420L, 1039L) */ ((/* 409L, 37L, 48L, 400L, 421L, 1040L) */ ((1) << (/* 411L, 36L, 50L, 402L, 423L, 1042L) */ ((var_1_9) + (10))))) >= (var_1_18))) {
	} else {
	}
	if (/* 429L, 75L, 79L, 461L, 471L, 1060L) */ ((var_1_11) || (var_1_8))) {
	}
	if (/* 438L, 100L, 108L, 532L, 558L, 1069L) */ ((var_1_6) < (/* 440L, 99L, 110L, 534L, 560L, 1071L) */ ((/* 441L, 97L, 111L, 535L, 561L, 1072L) */ ((var_1_14) - (var_1_5))) - (var_1_9))))) {
	} else {
	}
	if (/* 473L, 141L, 145L, 633L, 653L, 1104L) */ ((var_1_9) == (var_1_14))) {
	}
	if (/* 485L, 188L, 200L, 709L, 731L, 1116L) */ ((/* 486L, 182L, 201L, 710L, 732L, 1117L) */ ((/* 487L, 180L, 202L, 711L, 733L, 1118L) */ ((var_1_13) / (var_1_14))) * (var_1_9))) < (/* 491L, 187L, 206L, 715L, 737L, 1122L) */ (min (/* 491L, 187L, 206L, 715L, 737L, 1122L) */ (var_1_5) , (/* 493L, 186L, 208L, 717L, 739L, 1124L) */ ((var_1_6) - (var_1_4)))))))) {
	}
	if (/* 506L, 229L, 233L, 804L, 830L, 1137L) */ ((var_1_9) >= (var_1_16))) {
	} else {
		if (/* 516L, 246L, 252L, 814L, 840L, 1147L) */ ((var_1_5) > (/* 518L, 245L, 254L, 816L, 842L, 1149L) */ ((var_1_4) << (var_1_16))))) {
		} else {
		}
	}
	return /* 536L) */ ((
	/* 535L) */ ((
		/* 534L) */ ((
			/* 533L) */ ((
				/* 532L) */ ((
					/* 531L) */ ((
						/* 385L, 28L, 313L, 334L, 1016L) */ ((
							/* 386L, 4L, 8L, 314L, 335L, 1017L) */ ((
								var_1_16
							) >= (
								var_1_18
							))
						) ? (
							/* 389L, 22L, 317L, 338L, 1020L) */ ((
								var_1_1
							) == (
								/* 389L, 22L, 317L, 338L, 1020L) */ ((signed short int) (
									/* 392L, 21L, 320L, 341L, 1023L) */ ((
										/* 393L, 17L, 321L, 342L, 1024L) */ ((
											var_1_4
										) - (
											/* 395L, 16L, 323L, 344L, 1026L) */ ((
												var_1_5
											) + (
												var_1_6
											))
										))
									) + (
										/* 398L, 20L, 326L, 347L, 1029L) */ ((
											1
										) - (
											var_1_7
										))
									))
								))
							))
						) : (
							/* 401L, 26L, 329L, 350L, 1032L) */ ((
								var_1_1
							) == (
								/* 401L, 26L, 329L, 350L, 1032L) */ ((signed short int) (
									var_1_5
								))
							))
						))
					) && (
						/* 407L, 66L, 398L, 419L, 1038L) */ ((
							/* 408L, 39L, 47L, 399L, 420L, 1039L) */ ((
								/* 409L, 37L, 48L, 400L, 421L, 1040L) */ ((
									1
								) << (
									/* 411L, 36L, 50L, 402L, 423L, 1042L) */ ((
										var_1_9
									) + (
										10
									))
								))
							) >= (
								var_1_18
							))
						) ? (
							/* 415L, 60L, 406L, 427L, 1046L) */ ((
								var_1_8
							) == (
								/* 415L, 60L, 406L, 427L, 1046L) */ ((unsigned char) (
									/* 418L, 59L, 409L, 430L, 1049L) */ (! (
										/* 419L, 58L, 410L, 431L, 1050L) */ ((
											var_1_10
										) || (
											var_1_11
										))
									))
								))
							))
						) : (
							/* 422L, 64L, 413L, 434L, 1053L) */ ((
								var_1_8
							) == (
								/* 422L, 64L, 413L, 434L, 1053L) */ ((unsigned char) (
									var_1_11
								))
							))
						))
					))
				) && (
					/* 428L, 87L, 460L, 470L, 1059L) */ ((
						/* 429L, 75L, 79L, 461L, 471L, 1060L) */ ((
							var_1_11
						) || (
							var_1_8
						))
					) ? (
						/* 432L, 85L, 464L, 474L, 1063L) */ ((
							var_1_12
						) == (
							/* 432L, 85L, 464L, 474L, 1063L) */ ((unsigned char) (
								0
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 437L, 133L, 531L, 557L, 1068L) */ ((
					/* 438L, 100L, 108L, 532L, 558L, 1069L) */ ((
						var_1_6
					) < (
						/* 440L, 99L, 110L, 534L, 560L, 1071L) */ ((
							/* 441L, 97L, 111L, 535L, 561L, 1072L) */ ((
								var_1_14
							) - (
								var_1_5
							))
						) - (
							var_1_9
						))
					))
				) ? (
					/* 445L, 124L, 539L, 565L, 1076L) */ ((
						var_1_13
					) == (
						/* 445L, 124L, 539L, 565L, 1076L) */ ((signed short int) (
							/* 448L, 123L, 542L, 568L, 1079L) */ ((
								/* 449L, 121L, 543L, 569L, 1080L) */ ((
									/* 450L, 119L, 544L, 570L, 1081L) */ ((
										var_1_9
									) + (
										var_1_6
									))
								) - (
									var_1_5
								))
							) + (
								var_1_7
							))
						))
					))
				) : (
					/* 455L, 131L, 549L, 575L, 1086L) */ ((
						var_1_13
					) == (
						/* 455L, 131L, 549L, 575L, 1086L) */ ((signed short int) (
							/* 458L, 130L, 552L, 578L, 1089L) */ (abs (
								/* 459L, 129L, 553L, 579L, 1090L) */ ((
									1
								) - (
									50
								))
							))
						))
					))
				))
			))
		) && (
			/* 472L, 155L, 632L, 652L, 1103L) */ ((
				/* 473L, 141L, 145L, 633L, 653L, 1104L) */ ((
					var_1_9
				) == (
					var_1_14
				))
			) ? (
				/* 476L, 153L, 636L, 656L, 1107L) */ ((
					var_1_15
				) == (
					/* 476L, 153L, 636L, 656L, 1107L) */ ((signed short int) (
						/* 479L, 152L, 639L, 659L, 1110L) */ ((
							var_1_6
						) - (
							var_1_4
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 484L, 220L, 708L, 730L, 1115L) */ ((
			/* 485L, 188L, 200L, 709L, 731L, 1116L) */ ((
				/* 486L, 182L, 201L, 710L, 732L, 1117L) */ ((
					/* 487L, 180L, 202L, 711L, 733L, 1118L) */ ((
						var_1_13
					) / (
						var_1_14
					))
				) * (
					var_1_9
				))
			) < (
				/* 491L, 187L, 206L, 715L, 737L, 1122L) */ (min (
					/* 491L, 187L, 206L, 715L, 737L, 1122L) */ (
						var_1_5
					) , (
						/* 493L, 186L, 208L, 717L, 739L, 1124L) */ ((
							var_1_6
						) - (
							var_1_4
						))
					)
				))
			))
		) ? (
			/* 496L, 218L, 720L, 742L, 1127L) */ ((
				var_1_16
			) == (
				/* 496L, 218L, 720L, 742L, 1127L) */ ((unsigned long int) (
					/* 499L, 217L, 723L, 745L, 1130L) */ ((
						var_1_9
					) + (
						/* 501L, 216L, 725L, 747L, 1132L) */ ((
							var_1_17
						) - (
							var_1_14
						))
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 505L, 268L, 803L, 829L, 1136L) */ ((
		/* 506L, 229L, 233L, 804L, 830L, 1137L) */ ((
			var_1_9
		) >= (
			var_1_16
		))
	) ? (
		/* 509L, 241L, 807L, 833L, 1140L) */ ((
			var_1_18
		) == (
			/* 509L, 241L, 807L, 833L, 1140L) */ ((signed long int) (
				/* 512L, 240L, 810L, 836L, 1143L) */ ((
					var_1_4
				) + (
					var_1_16
				))
			))
		))
	) : (
		/* 515L, 266L, 813L, 839L, 1146L) */ ((
			/* 516L, 246L, 252L, 814L, 840L, 1147L) */ ((
				var_1_5
			) > (
				/* 518L, 245L, 254L, 816L, 842L, 1149L) */ ((
					var_1_4
				) << (
					var_1_16
				))
			))
		) ? (
			/* 521L, 260L, 819L, 845L, 1152L) */ ((
				var_1_18
			) == (
				/* 521L, 260L, 819L, 845L, 1152L) */ ((signed long int) (
					last_1_var_1_18
				))
			))
		) : (
			/* 526L, 264L, 824L, 850L, 1157L) */ ((
				var_1_18
			) == (
				/* 526L, 264L, 824L, 850L, 1157L) */ ((signed long int) (
					var_1_16
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
