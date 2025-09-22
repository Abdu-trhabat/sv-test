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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch149Filler_PE_CO.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 10;
unsigned char var_1_5 = 50;
unsigned char var_1_6 = 8;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 4;
unsigned char var_1_10 = 32;
unsigned short int var_1_11 = 10;
unsigned char var_1_12 = 2;
unsigned short int var_1_13 = 0;
unsigned short int var_1_14 = 17724;
unsigned short int var_1_15 = 32612;
unsigned long int var_1_16 = 8;
double var_1_17 = 1.6;
double var_1_18 = 63.4;
signed long int var_1_19 = 200;
signed long int var_1_20 = -10;
signed char var_1_21 = 2;
unsigned char var_1_22 = 1;
double var_1_23 = 8.2;
signed char var_1_24 = 8;
signed char var_1_25 = 32;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 1;
unsigned long int var_1_28 = 4;
unsigned long int var_1_29 = 100;
unsigned long int var_1_30 = 32;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 2;
signed short int var_1_33 = 5;
double var_1_35 = 9999999999999.5;
signed short int var_1_36 = 2;
signed short int var_1_37 = 18544;
signed char var_1_38 = -50;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 10;
unsigned short int last_1_var_1_11 = 10;
unsigned char last_1_var_1_12 = 2;
unsigned short int last_1_var_1_13 = 0;
unsigned long int last_1_var_1_16 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch149Filler_PE_CO
	signed long int stepLocal_3 = /* 87L, 194L, 200L, 635L, 654L, 909L, 1044L) */ (max (/* 87L, 194L, 200L, 635L, 654L, 909L, 1044L) */ (var_1_9) , (/* 86L, 193L, 202L, 637L, 656L, 908L, 1046L) */ ((last_1_var_1_13) + (last_1_var_1_1)))));
	/* 104L, 226L, 630L, 649L, 919L, 1066L) */ if (/* 95L, 195L, 196L, 631L, 650L, 910L, 1057L) */ ((/* 93L, 189L, 197L, 632L, 651L, 902L, 1056L) */ (min (/* 93L, 189L, 197L, 632L, 651L, 902L, 1056L) */ (last_1_var_1_13) , (last_1_var_1_11)))) > (stepLocal_3))) {
		/* 99L, 217L, 640L, 659L, 914L, 1061L) */ var_1_12 = (
			var_1_5
		);
	} else {
		/* 103L, 225L, 644L, 663L, 918L, 1065L) */ var_1_12 = (
			var_1_9
		);
	}


	// From: Req3Batch149Filler_PE_CO
	unsigned char stepLocal_2 = var_1_10;
	unsigned char stepLocal_1 = var_1_7;
	unsigned char stepLocal_0 = var_1_10;
	/* 43L, 181L, 510L, 540L, 862L, 1037L) */ if (/* 16L, 127L, 128L, 511L, 541L, 835L, 1012L) */ ((stepLocal_2) > (/* 15L, 126L, 130L, 513L, 543L, 834L, 1011L) */ ((var_1_5) + (last_1_var_1_12))))) {
		/* 38L, 175L, 516L, 546L, 857L, 1032L) */ if (/* 24L, 143L, 144L, 517L, 547L, 843L, 1019L) */ ((/* 22L, 141L, 145L, 518L, 548L, 841L, 1018L) */ ((/* 19L, 139L, 146L, 519L, 549L, 838L, 1015L) */ (- (last_1_var_1_1))) < (last_1_var_1_16))) && (stepLocal_1))) {
			/* 33L, 169L, 523L, 553L, 852L, 1027L) */ if (/* 28L, 158L, 159L, 524L, 554L, 847L, 1022L) */ ((stepLocal_0) <= (last_1_var_1_12))) {
				/* 32L, 168L, 527L, 557L, 851L, 1026L) */ var_1_11 = (
					var_1_10
				);
			}
		} else {
			/* 37L, 174L, 531L, 561L, 856L, 1031L) */ var_1_11 = (
				var_1_9
			);
		}
	} else {
		/* 42L, 180L, 535L, 565L, 861L, 1036L) */ var_1_11 = (
			var_1_5
		);
	}


	// From: Req6Batch149Filler_PE_CO
	/* 1090L, 284L, 767L, 783L) */ if (/* 1091L, 259L, 260L, 768L, 784L) */ ((var_1_11) != (var_1_15))) {
		/* 1094L, 282L, 771L, 787L) */ if (/* 1095L, 269L, 270L, 772L, 788L) */ (! (/* 1096L, 268L, 271L, 773L, 789L) */ ((last_1_var_1_16) != (var_1_12))))) {
			/* 1100L, 281L, 777L, 793L) */ var_1_16 = (
				1000u
			);
		}
	}


	// From: Req2Batch149Filler_PE_CO
	/* 978L, 115L, 423L, 445L) */ if (var_1_7) {
		/* 980L, 113L, 425L, 447L) */ if (/* 981L, 90L, 91L, 426L, 448L) */ ((var_1_8) && (/* 983L, 89L, 93L, 428L, 450L) */ ((var_1_16) <= (var_1_11))))) {
			/* 986L, 108L, 431L, 453L) */ var_1_6 = (
				/* 989L, 107L, 434L, 456L) */ ((
					128
				) - (
					/* 991L, 106L, 436L, 458L) */ (min (
						/* 991L, 106L, 436L, 458L) */ (
							var_1_9
						) , (
							var_1_10
						)
					))
				))
			);
		} else {
			/* 994L, 112L, 439L, 461L) */ var_1_6 = (
				var_1_10
			);
		}
	}


	// From: Req1Batch149Filler_PE_CO
	/* 945L, 72L, 291L, 324L) */ if (/* 946L, 6L, 7L, 292L, 325L) */ ((var_1_6) > (/* 948L, 5L, 9L, 294L, 327L) */ ((var_1_11) * (var_1_16))))) {
		/* 951L, 21L, 297L, 330L) */ var_1_1 = (
			/* 954L, 20L, 300L, 333L) */ (abs (
				var_1_5
			))
		);
	} else {
		/* 956L, 70L, 302L, 335L) */ if (/* 957L, 24L, 25L, 303L, 336L) */ ((var_1_6) < (2))) {
			/* 960L, 34L, 306L, 339L) */ var_1_1 = (
				var_1_5
			);
		} else {
			/* 964L, 68L, 310L, 343L) */ if (/* 965L, 37L, 38L, 311L, 344L) */ ((var_1_6) < (var_1_11))) {
				/* 968L, 47L, 314L, 347L) */ var_1_1 = (
					var_1_5
				);
			} else {
				/* 972L, 67L, 318L, 351L) */ var_1_1 = (
					25
				);
			}
		}
	}


	// From: Req5Batch149Filler_PE_CO
	unsigned char stepLocal_4 = var_1_12;
	/* 1085L, 251L, 706L, 721L) */ if (/* 1074L, 234L, 235L, 707L, 722L) */ ((1) < (stepLocal_4))) {
		/* 1084L, 250L, 710L, 725L) */ var_1_13 = (
			/* 1083L, 249L, 713L, 728L) */ (max (
				/* 1083L, 249L, 713L, 728L) */ (
					/* 1081L, 247L, 714L, 729L) */ ((
						/* 1079L, 245L, 715L, 730L) */ ((
							var_1_14
						) + (
							var_1_15
						))
					) - (
						var_1_6
					))
				) , (
					100
				)
			))
		);
	}


	// From: CodeObject1
	/* 360L, 135L) */ var_1_17 = (
		var_1_18
	);


	// From: CodeObject2
	/* 365L, 143L) */ var_1_19 = (
		var_1_20
	);


	// From: CodeObject3
	/* 369L, 201L) */ if (var_1_22) {
		/* 371L, 199L) */ if (/* 372L, 155L, 156L) */ ((var_1_17) < (/* 374L, 154L, 158L) */ ((var_1_18) * (var_1_23))))) {
			/* 377L, 197L) */ if (/* 378L, 168L, 169L) */ ((var_1_20) <= (var_1_16))) {
				/* 381L, 181L) */ var_1_21 = (
					/* 384L, 180L) */ (abs (
						/* 385L, 179L) */ ((
							var_1_24
						) + (
							var_1_25
						))
					))
				);
			} else {
				/* 388L, 195L) */ if (/* 389L, 184L, 185L) */ ((var_1_26) || (var_1_27))) {
					/* 392L, 194L) */ var_1_21 = (
						var_1_25
					);
				}
			}
		}
	}


	// From: CodeObject4
	/* 396L, 223L) */ if (/* 397L, 206L, 207L) */ (! (var_1_22))) {
		/* 399L, 214L) */ var_1_28 = (
			var_1_29
		);
	} else {
		/* 403L, 222L) */ var_1_28 = (
			/* 406L, 221L) */ (abs (
				/* 407L, 220L) */ (max (
					/* 407L, 220L) */ (
						/* 408L, 218L) */ (abs (
							var_1_29
						))
					) , (
						var_1_30
					)
				))
			))
		);
	}


	// From: CodeObject5
	/* 412L, 234L) */ if (var_1_22) {
		/* 414L, 233L) */ var_1_31 = (
			0
		);
	}


	// From: CodeObject6
	/* 418L, 273L) */ if (/* 419L, 248L, 249L) */ ((/* 420L, 244L, 250L) */ ((var_1_16) * (/* 422L, 243L, 252L) */ ((var_1_16) & (var_1_30))))) <= (/* 425L, 247L, 255L) */ ((var_1_29) | (1u))))) {
		/* 428L, 272L) */ var_1_32 = (
			/* 431L, 271L) */ (abs (
				/* 432L, 270L) */ (abs (
					5
				))
			))
		);
	}


	// From: CodeObject7
	/* 434L, 290L) */ if (/* 435L, 279L, 280L) */ ((var_1_16) <= (var_1_11))) {
		/* 438L, 289L) */ var_1_33 = (
			var_1_11
		);
	}


	// From: CodeObject8
	/* 442L, 302L) */ if (var_1_26) {
		/* 444L, 301L) */ var_1_35 = (
			/* 447L, 300L) */ (abs (
				var_1_18
			))
		);
	}


	// From: CodeObject9
	/* 449L, 328L) */ if (/* 450L, 308L, 309L) */ ((var_1_13) >= (var_1_29))) {
		/* 453L, 318L) */ var_1_36 = (
			-8
		);
	} else {
		/* 457L, 327L) */ var_1_36 = (
			/* 460L, 326L) */ ((
				/* 461L, 323L) */ ((
					var_1_37
				) - (
					var_1_13
				))
			) - (
				/* 464L, 325L) */ (abs (
					var_1_24
				))
			))
		);
	}


	// From: CodeObject10
	/* 466L, 357L) */ if (/* 467L, 336L, 337L) */ ((/* 468L, 334L, 338L) */ ((var_1_29) / (var_1_37))) <= (var_1_16))) {
		/* 472L, 352L) */ var_1_38 = (
			/* 475L, 351L) */ ((
				var_1_25
			) + (
				var_1_24
			))
		);
	} else {
		/* 478L, 356L) */ var_1_38 = (
			var_1_25
		);
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 16384);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= -2147483647);
	assume_abort_if_not(var_1_20 <= 2147483646);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -63);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -63);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967294);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 16382);
	assume_abort_if_not(var_1_37 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_16 = var_1_16;
}

int property(void) {
	if (/* 484L, 6L, 12L, 358L, 391L, 1107L) */ ((var_1_6) > (/* 486L, 5L, 14L, 360L, 393L, 1109L) */ ((var_1_11) * (var_1_16))))) {
	} else {
		if (/* 495L, 24L, 28L, 369L, 402L, 1118L) */ ((var_1_6) < (2))) {
		} else {
			if (/* 503L, 37L, 41L, 377L, 410L, 1126L) */ ((var_1_6) < (var_1_11))) {
			} else {
			}
		}
	}
	if (var_1_7) {
		if (/* 519L, 90L, 96L, 470L, 492L, 1142L) */ ((var_1_8) && (/* 521L, 89L, 98L, 472L, 494L, 1144L) */ ((var_1_16) <= (var_1_11))))) {
		} else {
		}
	}
	if (/* 538L, 127L, 133L, 571L, 601L, 869L, 1161L, 51L) */ ((var_1_10) > (/* 540L, 126L, 135L, 573L, 603L, 868L, 1163L, 50L) */ ((var_1_5) + (last_1_var_1_12))))) {
		if (/* 545L, 143L, 150L, 577L, 607L, 877L, 1168L, 59L) */ ((/* 546L, 141L, 151L, 578L, 608L, 875L, 1169L, 57L) */ ((/* 547L, 139L, 152L, 579L, 609L, 872L, 1170L, 54L) */ (- (last_1_var_1_1))) < (last_1_var_1_16))) && (var_1_7))) {
			if (/* 554L, 158L, 162L, 584L, 614L, 881L, 1177L, 63L) */ ((var_1_10) <= (last_1_var_1_12))) {
			}
		} else {
		}
	} else {
	}
	if (/* 572L, 195L, 205L, 669L, 688L, 933L, 1195L, 119L) */ ((/* 573L, 189L, 206L, 670L, 689L, 925L, 1196L, 111L) */ (min (/* 573L, 189L, 206L, 670L, 689L, 925L, 1196L, 111L) */ (last_1_var_1_13) , (last_1_var_1_11)))) > (/* 578L, 194L, 209L, 673L, 692L, 932L, 1201L, 118L) */ (max (/* 578L, 194L, 209L, 673L, 692L, 932L, 1201L, 118L) */ (var_1_9) , (/* 580L, 193L, 211L, 675L, 694L, 931L, 1203L, 117L) */ ((last_1_var_1_13) + (last_1_var_1_1)))))))) {
	} else {
	}
	if (/* 595L, 234L, 238L, 737L, 752L, 1218L) */ ((1) < (var_1_12))) {
	}
	if (/* 611L, 259L, 263L, 800L, 816L, 1234L) */ ((var_1_11) != (var_1_15))) {
		if (/* 615L, 269L, 274L, 804L, 820L, 1238L) */ (! (/* 616L, 268L, 275L, 805L, 821L, 1239L) */ ((last_1_var_1_16) != (var_1_12))))) {
		}
	}
	return /* 629L) */ ((
	/* 628L) */ ((
		/* 627L) */ ((
			/* 626L) */ ((
				/* 625L) */ ((
					/* 483L, 73L, 357L, 390L, 1106L) */ ((
						/* 484L, 6L, 12L, 358L, 391L, 1107L) */ ((
							var_1_6
						) > (
							/* 486L, 5L, 14L, 360L, 393L, 1109L) */ ((
								var_1_11
							) * (
								var_1_16
							))
						))
					) ? (
						/* 489L, 21L, 363L, 396L, 1112L) */ ((
							var_1_1
						) == (
							/* 489L, 21L, 363L, 396L, 1112L) */ ((unsigned char) (
								/* 492L, 20L, 366L, 399L, 1115L) */ (abs (
									var_1_5
								))
							))
						))
					) : (
						/* 494L, 71L, 368L, 401L, 1117L) */ ((
							/* 495L, 24L, 28L, 369L, 402L, 1118L) */ ((
								var_1_6
							) < (
								2
							))
						) ? (
							/* 498L, 34L, 372L, 405L, 1121L) */ ((
								var_1_1
							) == (
								/* 498L, 34L, 372L, 405L, 1121L) */ ((unsigned char) (
									var_1_5
								))
							))
						) : (
							/* 502L, 69L, 376L, 409L, 1125L) */ ((
								/* 503L, 37L, 41L, 377L, 410L, 1126L) */ ((
									var_1_6
								) < (
									var_1_11
								))
							) ? (
								/* 506L, 47L, 380L, 413L, 1129L) */ ((
									var_1_1
								) == (
									/* 506L, 47L, 380L, 413L, 1129L) */ ((unsigned char) (
										var_1_5
									))
								))
							) : (
								/* 510L, 67L, 384L, 417L, 1133L) */ ((
									var_1_1
								) == (
									/* 510L, 67L, 384L, 417L, 1133L) */ ((unsigned char) (
										25
									))
								))
							))
						))
					))
				) && (
					/* 516L, 116L, 467L, 489L, 1139L) */ ((
						var_1_7
					) ? (
						/* 518L, 114L, 469L, 491L, 1141L) */ ((
							/* 519L, 90L, 96L, 470L, 492L, 1142L) */ ((
								var_1_8
							) && (
								/* 521L, 89L, 98L, 472L, 494L, 1144L) */ ((
									var_1_16
								) <= (
									var_1_11
								))
							))
						) ? (
							/* 524L, 108L, 475L, 497L, 1147L) */ ((
								var_1_6
							) == (
								/* 524L, 108L, 475L, 497L, 1147L) */ ((unsigned char) (
									/* 527L, 107L, 478L, 500L, 1150L) */ ((
										128
									) - (
										/* 529L, 106L, 480L, 502L, 1152L) */ (min (
											/* 529L, 106L, 480L, 502L, 1152L) */ (
												var_1_9
											) , (
												var_1_10
											)
										))
									))
								))
							))
						) : (
							/* 532L, 112L, 483L, 505L, 1155L) */ ((
								var_1_6
							) == (
								/* 532L, 112L, 483L, 505L, 1155L) */ ((unsigned char) (
									var_1_10
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 537L, 182L, 570L, 600L, 896L, 1160L, 78L) */ ((
					/* 538L, 127L, 133L, 571L, 601L, 869L, 1161L, 51L) */ ((
						var_1_10
					) > (
						/* 540L, 126L, 135L, 573L, 603L, 868L, 1163L, 50L) */ ((
							var_1_5
						) + (
							last_1_var_1_12
						))
					))
				) ? (
					/* 544L, 176L, 576L, 606L, 891L, 1167L, 73L) */ ((
						/* 545L, 143L, 150L, 577L, 607L, 877L, 1168L, 59L) */ ((
							/* 546L, 141L, 151L, 578L, 608L, 875L, 1169L, 57L) */ ((
								/* 547L, 139L, 152L, 579L, 609L, 872L, 1170L, 54L) */ (- (
									last_1_var_1_1
								))
							) < (
								last_1_var_1_16
							))
						) && (
							var_1_7
						))
					) ? (
						/* 553L, 170L, 583L, 613L, 886L, 1176L, 68L) */ ((
							/* 554L, 158L, 162L, 584L, 614L, 881L, 1177L, 63L) */ ((
								var_1_10
							) <= (
								last_1_var_1_12
							))
						) ? (
							/* 558L, 168L, 587L, 617L, 885L, 1181L, 67L) */ ((
								var_1_11
							) == (
								/* 558L, 168L, 587L, 617L, 885L, 1181L, 67L) */ ((unsigned short int) (
									var_1_10
								))
							))
						) : (
							1
						))
					) : (
						/* 562L, 174L, 591L, 621L, 890L, 1185L, 72L) */ ((
							var_1_11
						) == (
							/* 562L, 174L, 591L, 621L, 890L, 1185L, 72L) */ ((unsigned short int) (
								var_1_9
							))
						))
					))
				) : (
					/* 566L, 180L, 595L, 625L, 895L, 1189L, 77L) */ ((
						var_1_11
					) == (
						/* 566L, 180L, 595L, 625L, 895L, 1189L, 77L) */ ((unsigned short int) (
							var_1_5
						))
					))
				))
			))
		) && (
			/* 571L, 227L, 668L, 687L, 942L, 1194L, 128L) */ ((
				/* 572L, 195L, 205L, 669L, 688L, 933L, 1195L, 119L) */ ((
					/* 573L, 189L, 206L, 670L, 689L, 925L, 1196L, 111L) */ (min (
						/* 573L, 189L, 206L, 670L, 689L, 925L, 1196L, 111L) */ (
							last_1_var_1_13
						) , (
							last_1_var_1_11
						)
					))
				) > (
					/* 578L, 194L, 209L, 673L, 692L, 932L, 1201L, 118L) */ (max (
						/* 578L, 194L, 209L, 673L, 692L, 932L, 1201L, 118L) */ (
							var_1_9
						) , (
							/* 580L, 193L, 211L, 675L, 694L, 931L, 1203L, 117L) */ ((
								last_1_var_1_13
							) + (
								last_1_var_1_1
							))
						)
					))
				))
			) ? (
				/* 585L, 217L, 678L, 697L, 937L, 1208L, 123L) */ ((
					var_1_12
				) == (
					/* 585L, 217L, 678L, 697L, 937L, 1208L, 123L) */ ((unsigned char) (
						var_1_5
					))
				))
			) : (
				/* 589L, 225L, 682L, 701L, 941L, 1212L, 127L) */ ((
					var_1_12
				) == (
					/* 589L, 225L, 682L, 701L, 941L, 1212L, 127L) */ ((unsigned char) (
						var_1_9
					))
				))
			))
		))
	) && (
		/* 594L, 252L, 736L, 751L, 1217L) */ ((
			/* 595L, 234L, 238L, 737L, 752L, 1218L) */ ((
				1
			) < (
				var_1_12
			))
		) ? (
			/* 598L, 250L, 740L, 755L, 1221L) */ ((
				var_1_13
			) == (
				/* 598L, 250L, 740L, 755L, 1221L) */ ((unsigned short int) (
					/* 601L, 249L, 743L, 758L, 1224L) */ (max (
						/* 601L, 249L, 743L, 758L, 1224L) */ (
							/* 602L, 247L, 744L, 759L, 1225L) */ ((
								/* 603L, 245L, 745L, 760L, 1226L) */ ((
									var_1_14
								) + (
									var_1_15
								))
							) - (
								var_1_6
							))
						) , (
							100
						)
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 610L, 285L, 799L, 815L, 1233L) */ ((
		/* 611L, 259L, 263L, 800L, 816L, 1234L) */ ((
			var_1_11
		) != (
			var_1_15
		))
	) ? (
		/* 614L, 283L, 803L, 819L, 1237L) */ ((
			/* 615L, 269L, 274L, 804L, 820L, 1238L) */ (! (
				/* 616L, 268L, 275L, 805L, 821L, 1239L) */ ((
					last_1_var_1_16
				) != (
					var_1_12
				))
			))
		) ? (
			/* 620L, 281L, 809L, 825L, 1243L) */ ((
				var_1_16
			) == (
				/* 620L, 281L, 809L, 825L, 1243L) */ ((unsigned long int) (
					1000u
				))
			))
		) : (
			1
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
