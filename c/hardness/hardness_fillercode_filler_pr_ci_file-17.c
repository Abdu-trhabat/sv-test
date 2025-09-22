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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch17Filler_PR_CI.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 25;
unsigned char var_1_2 = 25;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
signed long int var_1_5 = 4;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
double var_1_11 = 7.3;
double var_1_12 = 1.25;
double var_1_13 = 128.8;
signed char var_1_14 = -1;
signed char var_1_15 = 10;
signed short int var_1_16 = 8;
signed short int var_1_17 = 10;
unsigned long int var_1_18 = 128;
unsigned long int var_1_19 = 3963666122;
float var_1_20 = 15.875;
float var_1_21 = 4.2;
float var_1_22 = 5.5;
signed short int var_1_23 = -10;
unsigned long int var_1_24 = 50;
unsigned long int var_1_26 = 16;
unsigned long int var_1_27 = 4;
unsigned short int var_1_30 = 25;
unsigned short int var_1_31 = 32;
unsigned char var_1_32 = 10;
double var_1_33 = 31.95;
unsigned long int var_1_36 = 4;
unsigned short int var_1_38 = 50;
unsigned char var_1_39 = 128;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_18 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch17Filler_PR_CI
	unsigned char stepLocal_0 = var_1_6;
	/* 22L, 47L, 348L, 368L, 875L, 932L) */ if (/* 5L, 22L, 23L, 349L, 369L, 858L, 915L) */ ((stepLocal_0) && (var_1_7))) {
		/* 21L, 45L, 352L, 372L, 874L, 931L) */ if (var_1_7) {
			/* 16L, 40L, 354L, 374L, 869L, 926L) */ var_1_5 = (
				/* 15L, 39L, 357L, 377L, 868L, 925L) */ ((
					/* 11L, 35L, 358L, 378L, 864L, 921L) */ (abs (
						last_1_var_1_18
					))
				) - (
					/* 14L, 38L, 360L, 380L, 867L, 924L) */ (min (
						/* 14L, 38L, 360L, 380L, 867L, 924L) */ (
							var_1_4
						) , (
							var_1_2
						)
					))
				))
			);
		} else {
			/* 20L, 44L, 363L, 383L, 873L, 930L) */ var_1_5 = (
				8
			);
		}
	}


	// From: Req3Batch17Filler_PR_CI
	/* 941L, 75L, 433L, 458L) */ if (/* 942L, 53L, 54L, 434L, 459L) */ ((var_1_5) < (var_1_3))) {
		/* 945L, 69L, 437L, 462L) */ var_1_8 = (
			/* 948L, 68L, 440L, 465L) */ ((
				/* 949L, 66L, 441L, 466L) */ ((
					var_1_7
				) || (
					/* 951L, 65L, 443L, 468L) */ ((
						var_1_6
					) || (
						var_1_9
					))
				))
			) && (
				var_1_10
			))
		);
	} else {
		/* 955L, 74L, 447L, 472L) */ var_1_8 = (
			/* 958L, 73L, 450L, 475L) */ (! (
				var_1_10
			))
		);
	}


	// From: CodeObject3
	/* 511L, 151L) */ var_1_30 = (
		var_1_31
	);


	// From: Req7Batch17Filler_PR_CI
	unsigned char stepLocal_3 = /* 1029L, 222L, 228L, 769L, 792L) */ ((var_1_8) && (var_1_10));
	/* 1051L, 252L, 764L, 787L) */ if (/* 1036L, 223L, 224L, 765L, 788L) */ ((/* 1035L, 219L, 225L, 766L, 789L) */ ((var_1_9) && (var_1_8))) || (stepLocal_3))) {
		/* 1046L, 247L, 772L, 795L) */ var_1_18 = (
			/* 1045L, 246L, 775L, 798L) */ ((
				var_1_19
			) - (
				/* 1044L, 245L, 777L, 800L) */ (min (
					/* 1044L, 245L, 777L, 800L) */ (
						/* 1042L, 243L, 778L, 801L) */ ((
							1991720936u
						) - (
							var_1_17
						))
					) , (
						var_1_2
					)
				))
			))
		);
	} else {
		/* 1050L, 251L, 782L, 805L) */ var_1_18 = (
			var_1_2
		);
	}


	// From: Req1Batch17Filler_PR_CI
	/* 900L, 11L, 258L, 271L) */ var_1_1 = (
		/* 903L, 10L, 261L, 274L) */ ((
			50
		) + (
			/* 905L, 9L, 263L, 276L) */ (min (
				/* 905L, 9L, 263L, 276L) */ (
					var_1_2
				) , (
					/* 907L, 8L, 265L, 278L) */ (min (
						/* 907L, 8L, 265L, 278L) */ (
							var_1_3
						) , (
							var_1_4
						)
					))
				)
			))
		))
	);


	// From: CodeObject2
	/* 471L, 142L) */ if (/* 472L, 60L, 61L) */ ((128u) <= (var_1_24))) {
		/* 475L, 140L) */ if (/* 476L, 77L, 78L) */ ((/* 477L, 69L, 79L) */ ((var_1_20) >= (var_1_21))) && (/* 480L, 76L, 82L) */ ((/* 481L, 72L, 83L) */ ((var_1_24) * (var_1_5))) < (/* 484L, 75L, 86L) */ (min (/* 484L, 75L, 86L) */ (var_1_26) , (var_1_27)))))))) {
			/* 487L, 134L) */ if (/* 488L, 105L, 106L) */ ((var_1_5) > (var_1_24))) {
				/* 491L, 116L) */ var_1_23 = (
					/* 494L, 115L) */ (abs (
						4
					))
				);
			} else {
				/* 496L, 132L) */ if (var_1_7) {
					/* 498L, 123L) */ var_1_23 = (
						var_1_17
					);
				} else {
					/* 502L, 131L) */ var_1_23 = (
						5
					);
				}
			}
		} else {
			/* 506L, 139L) */ var_1_23 = (
				var_1_17
			);
		}
	}


	// From: Req4Batch17Filler_PR_CI
	signed long int stepLocal_1 = /* 962L, 96L, 100L, 531L, 544L) */ ((8) + (var_1_1));
	/* 974L, 114L, 528L, 541L) */ if (/* 967L, 97L, 98L, 529L, 542L) */ ((var_1_4) == (stepLocal_1))) {
		/* 973L, 113L, 534L, 547L) */ var_1_11 = (
			/* 972L, 112L, 537L, 550L) */ (max (
				/* 972L, 112L, 537L, 550L) */ (
					var_1_12
				) , (
					var_1_13
				)
			))
		);
	}


	// From: CodeObject6
	/* 644L, 301L) */ if (/* 645L, 267L, 268L) */ ((var_1_4) <= (/* 647L, 266L, 270L) */ ((5) | (/* 649L, 265L, 272L) */ ((var_1_39) - (var_1_4))))))) {
		/* 652L, 299L) */ if (/* 653L, 284L, 285L) */ ((var_1_31) > (var_1_4))) {
			/* 656L, 294L) */ var_1_38 = (
				var_1_4
			);
		} else {
			/* 660L, 298L) */ var_1_38 = (
				var_1_17
			);
		}
	}


	// From: Req5Batch17Filler_PR_CI
	/* 980L, 150L, 582L, 599L) */ if (/* 981L, 124L, 125L, 583L, 600L) */ ((/* 982L, 122L, 126L, 584L, 601L) */ ((64.4f) + (1.5f))) <= (var_1_13))) {
		/* 986L, 148L, 588L, 605L) */ if (/* 987L, 137L, 138L, 589L, 606L) */ ((var_1_5) >= (var_1_4))) {
			/* 990L, 147L, 592L, 609L) */ var_1_14 = (
				var_1_15
			);
		}
	}


	// From: Req6Batch17Filler_PR_CI
	signed long int stepLocal_2 = /* 996L, 182L, 186L, 662L, 691L) */ ((var_1_5) * (/* 998L, 181L, 188L, 664L, 693L) */ ((var_1_15) & (var_1_17))));
	/* 1024L, 211L, 648L, 677L) */ if (/* 1004L, 162L, 163L, 649L, 678L) */ ((var_1_12) >= (9.6))) {
		/* 1023L, 209L, 652L, 681L) */ if (var_1_10) {
			/* 1011L, 177L, 654L, 683L) */ var_1_16 = (
				/* 1010L, 176L, 657L, 686L) */ ((
					2
				) - (
					var_1_17
				))
			);
		} else {
			/* 1022L, 207L, 660L, 689L) */ if (/* 1013L, 184L, 185L, 661L, 690L) */ ((stepLocal_2) <= (var_1_3))) {
				/* 1017L, 202L, 668L, 697L) */ var_1_16 = (
					var_1_5
				);
			} else {
				/* 1021L, 206L, 672L, 701L) */ var_1_16 = (
					var_1_4
				);
			}
		}
	}


	// From: CodeObject1
	/* 304L, 53L) */ var_1_20 = (
		/* 307L, 52L) */ (min (
			/* 307L, 52L) */ (
				var_1_13
			) , (
				var_1_12
			)
		))
	);


	// From: CodeObject4
	/* 585L, 214L) */ if (/* 586L, 162L, 163L) */ ((/* 587L, 160L, 164L) */ ((/* 588L, 158L, 165L) */ ((var_1_20) * (var_1_21))) / (var_1_33))) <= (var_1_22))) {
		/* 593L, 208L) */ if (/* 594L, 179L, 180L) */ ((var_1_22) < (var_1_33))) {
			/* 597L, 193L) */ var_1_32 = (
				/* 600L, 192L) */ (abs (
					/* 601L, 191L) */ (abs (
						/* 602L, 190L) */ ((
							var_1_4
						) + (
							var_1_2
						))
					))
				))
			);
		} else {
			/* 605L, 206L) */ if (var_1_7) {
				/* 607L, 205L) */ var_1_32 = (
					/* 610L, 204L) */ (max (
						/* 610L, 204L) */ (
							/* 611L, 200L) */ (abs (
								var_1_2
							))
						) , (
							/* 613L, 203L) */ (min (
								/* 613L, 203L) */ (
									var_1_4
								) , (
									1
								)
							))
						)
					))
				);
			}
		}
	} else {
		/* 616L, 213L) */ var_1_32 = (
			var_1_2
		);
	}


	// From: CodeObject5
	/* 620L, 257L) */ if (var_1_6) {
		/* 622L, 251L) */ if (/* 623L, 223L, 224L) */ ((var_1_13) <= (var_1_12))) {
			/* 626L, 245L) */ if (/* 627L, 232L, 233L) */ ((var_1_19) > (var_1_2))) {
				/* 630L, 244L) */ var_1_36 = (
					/* 633L, 243L) */ ((
						var_1_19
					) - (
						var_1_2
					))
				);
			}
		} else {
			/* 636L, 250L) */ var_1_36 = (
				var_1_5
			);
		}
	} else {
		/* 640L, 256L) */ var_1_36 = (
			var_1_4
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -127);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 32766);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 4294967295);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967295);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	assume_abort_if_not(var_1_33 != 0.0F);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 127);
	assume_abort_if_not(var_1_39 <= 255);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	if (/* 678L, 22L, 26L, 389L, 409L, 879L, 1069L, 27L) */ ((var_1_6) && (var_1_7))) {
		if (var_1_7) {
		} else {
		}
	}
	if (/* 704L, 53L, 57L, 484L, 509L, 1095L) */ ((var_1_5) < (var_1_3))) {
	} else {
	}
	if (/* 724L, 97L, 103L, 555L, 568L, 1115L) */ ((var_1_4) == (/* 726L, 96L, 105L, 557L, 570L, 1117L) */ ((8) + (var_1_1))))) {
	}
	if (/* 739L, 124L, 130L, 617L, 634L, 1130L) */ ((/* 740L, 122L, 131L, 618L, 635L, 1131L) */ ((64.4f) + (1.5f))) <= (var_1_13))) {
		if (/* 745L, 137L, 141L, 623L, 640L, 1136L) */ ((var_1_5) >= (var_1_4))) {
		}
	}
	if (/* 754L, 162L, 166L, 707L, 736L, 1145L) */ ((var_1_12) >= (9.6))) {
		if (var_1_10) {
		} else {
			if (/* 766L, 184L, 192L, 719L, 748L, 1157L) */ ((/* 767L, 182L, 193L, 720L, 749L, 1158L) */ ((var_1_5) * (/* 769L, 181L, 195L, 722L, 751L, 1160L) */ ((var_1_15) & (var_1_17))))) <= (var_1_3))) {
			} else {
			}
		}
	}
	if (/* 783L, 223L, 231L, 811L, 834L, 1174L) */ ((/* 784L, 219L, 232L, 812L, 835L, 1175L) */ ((var_1_9) && (var_1_8))) || (/* 787L, 222L, 235L, 815L, 838L, 1178L) */ ((var_1_8) && (var_1_10))))) {
	} else {
	}
	return /* 810L) */ ((
	/* 809L) */ ((
		/* 808L) */ ((
			/* 807L) */ ((
				/* 806L) */ ((
					/* 805L) */ ((
						/* 666L, 11L, 284L, 297L, 1057L) */ ((
							var_1_1
						) == (
							/* 666L, 11L, 284L, 297L, 1057L) */ ((unsigned char) (
								/* 669L, 10L, 287L, 300L, 1060L) */ ((
									50
								) + (
									/* 671L, 9L, 289L, 302L, 1062L) */ (min (
										/* 671L, 9L, 289L, 302L, 1062L) */ (
											var_1_2
										) , (
											/* 673L, 8L, 291L, 304L, 1064L) */ (min (
												/* 673L, 8L, 291L, 304L, 1064L) */ (
													var_1_3
												) , (
													var_1_4
												)
											))
										)
									))
								))
							))
						))
					) && (
						/* 677L, 48L, 388L, 408L, 896L, 1068L, 44L) */ ((
							/* 678L, 22L, 26L, 389L, 409L, 879L, 1069L, 27L) */ ((
								var_1_6
							) && (
								var_1_7
							))
						) ? (
							/* 681L, 46L, 392L, 412L, 895L, 1072L, 43L) */ ((
								var_1_7
							) ? (
								/* 683L, 40L, 394L, 414L, 890L, 1074L, 38L) */ ((
									var_1_5
								) == (
									/* 683L, 40L, 394L, 414L, 890L, 1074L, 38L) */ ((signed long int) (
										/* 686L, 39L, 397L, 417L, 889L, 1077L, 37L) */ ((
											/* 687L, 35L, 398L, 418L, 885L, 1078L, 33L) */ (abs (
												last_1_var_1_18
											))
										) - (
											/* 690L, 38L, 400L, 420L, 888L, 1081L, 36L) */ (min (
												/* 690L, 38L, 400L, 420L, 888L, 1081L, 36L) */ (
													var_1_4
												) , (
													var_1_2
												)
											))
										))
									))
								))
							) : (
								/* 693L, 44L, 403L, 423L, 894L, 1084L, 42L) */ ((
									var_1_5
								) == (
									/* 693L, 44L, 403L, 423L, 894L, 1084L, 42L) */ ((signed long int) (
										8
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 703L, 76L, 483L, 508L, 1094L) */ ((
						/* 704L, 53L, 57L, 484L, 509L, 1095L) */ ((
							var_1_5
						) < (
							var_1_3
						))
					) ? (
						/* 707L, 69L, 487L, 512L, 1098L) */ ((
							var_1_8
						) == (
							/* 707L, 69L, 487L, 512L, 1098L) */ ((unsigned char) (
								/* 710L, 68L, 490L, 515L, 1101L) */ ((
									/* 711L, 66L, 491L, 516L, 1102L) */ ((
										var_1_7
									) || (
										/* 713L, 65L, 493L, 518L, 1104L) */ ((
											var_1_6
										) || (
											var_1_9
										))
									))
								) && (
									var_1_10
								))
							))
						))
					) : (
						/* 717L, 74L, 497L, 522L, 1108L) */ ((
							var_1_8
						) == (
							/* 717L, 74L, 497L, 522L, 1108L) */ ((unsigned char) (
								/* 720L, 73L, 500L, 525L, 1111L) */ (! (
									var_1_10
								))
							))
						))
					))
				))
			) && (
				/* 723L, 115L, 554L, 567L, 1114L) */ ((
					/* 724L, 97L, 103L, 555L, 568L, 1115L) */ ((
						var_1_4
					) == (
						/* 726L, 96L, 105L, 557L, 570L, 1117L) */ ((
							8
						) + (
							var_1_1
						))
					))
				) ? (
					/* 729L, 113L, 560L, 573L, 1120L) */ ((
						var_1_11
					) == (
						/* 729L, 113L, 560L, 573L, 1120L) */ ((double) (
							/* 732L, 112L, 563L, 576L, 1123L) */ (max (
								/* 732L, 112L, 563L, 576L, 1123L) */ (
									var_1_12
								) , (
									var_1_13
								)
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 738L, 151L, 616L, 633L, 1129L) */ ((
				/* 739L, 124L, 130L, 617L, 634L, 1130L) */ ((
					/* 740L, 122L, 131L, 618L, 635L, 1131L) */ ((
						64.4f
					) + (
						1.5f
					))
				) <= (
					var_1_13
				))
			) ? (
				/* 744L, 149L, 622L, 639L, 1135L) */ ((
					/* 745L, 137L, 141L, 623L, 640L, 1136L) */ ((
						var_1_5
					) >= (
						var_1_4
					))
				) ? (
					/* 748L, 147L, 626L, 643L, 1139L) */ ((
						var_1_14
					) == (
						/* 748L, 147L, 626L, 643L, 1139L) */ ((signed char) (
							var_1_15
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
		/* 753L, 212L, 706L, 735L, 1144L) */ ((
			/* 754L, 162L, 166L, 707L, 736L, 1145L) */ ((
				var_1_12
			) >= (
				9.6
			))
		) ? (
			/* 757L, 210L, 710L, 739L, 1148L) */ ((
				var_1_10
			) ? (
				/* 759L, 177L, 712L, 741L, 1150L) */ ((
					var_1_16
				) == (
					/* 759L, 177L, 712L, 741L, 1150L) */ ((signed short int) (
						/* 762L, 176L, 715L, 744L, 1153L) */ ((
							2
						) - (
							var_1_17
						))
					))
				))
			) : (
				/* 765L, 208L, 718L, 747L, 1156L) */ ((
					/* 766L, 184L, 192L, 719L, 748L, 1157L) */ ((
						/* 767L, 182L, 193L, 720L, 749L, 1158L) */ ((
							var_1_5
						) * (
							/* 769L, 181L, 195L, 722L, 751L, 1160L) */ ((
								var_1_15
							) & (
								var_1_17
							))
						))
					) <= (
						var_1_3
					))
				) ? (
					/* 773L, 202L, 726L, 755L, 1164L) */ ((
						var_1_16
					) == (
						/* 773L, 202L, 726L, 755L, 1164L) */ ((signed short int) (
							var_1_5
						))
					))
				) : (
					/* 777L, 206L, 730L, 759L, 1168L) */ ((
						var_1_16
					) == (
						/* 777L, 206L, 730L, 759L, 1168L) */ ((signed short int) (
							var_1_4
						))
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 782L, 253L, 810L, 833L, 1173L) */ ((
		/* 783L, 223L, 231L, 811L, 834L, 1174L) */ ((
			/* 784L, 219L, 232L, 812L, 835L, 1175L) */ ((
				var_1_9
			) && (
				var_1_8
			))
		) || (
			/* 787L, 222L, 235L, 815L, 838L, 1178L) */ ((
				var_1_8
			) && (
				var_1_10
			))
		))
	) ? (
		/* 790L, 247L, 818L, 841L, 1181L) */ ((
			var_1_18
		) == (
			/* 790L, 247L, 818L, 841L, 1181L) */ ((unsigned long int) (
				/* 793L, 246L, 821L, 844L, 1184L) */ ((
					var_1_19
				) - (
					/* 795L, 245L, 823L, 846L, 1186L) */ (min (
						/* 795L, 245L, 823L, 846L, 1186L) */ (
							/* 796L, 243L, 824L, 847L, 1187L) */ ((
								1991720936u
							) - (
								var_1_17
							))
						) , (
							var_1_2
						)
					))
				))
			))
		))
	) : (
		/* 800L, 251L, 828L, 851L, 1191L) */ ((
			var_1_18
		) == (
			/* 800L, 251L, 828L, 851L, 1191L) */ ((unsigned long int) (
				var_1_2
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
