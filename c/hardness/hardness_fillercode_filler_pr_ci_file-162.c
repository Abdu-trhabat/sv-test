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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch162Filler_PR_CI.c", 13, "reach_error"); }
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
double var_1_1 = 7.3;
unsigned short int var_1_2 = 256;
unsigned short int var_1_3 = 10;
double var_1_6 = 1.2;
float var_1_7 = 9999.5;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned long int var_1_10 = 100000;
unsigned char var_1_11 = 0;
double var_1_12 = 8.1;
float var_1_13 = 3.9;
unsigned char var_1_14 = 50;
unsigned char var_1_16 = 10;
unsigned char var_1_17 = 50;
unsigned char var_1_18 = 200;
unsigned char var_1_19 = 32;
unsigned short int var_1_20 = 1;
unsigned short int var_1_21 = 32;
signed long int var_1_22 = 8;
signed short int var_1_23 = 128;
signed short int var_1_26 = 1;
signed short int var_1_27 = 256;
signed long int var_1_29 = 0;
float var_1_35 = 10000000000000.25;
float var_1_36 = 32.25;
float var_1_37 = 0.25;
float var_1_38 = 2.25;
signed short int var_1_39 = -4;
signed short int var_1_40 = -25;
signed short int var_1_41 = 8;
signed short int var_1_42 = 0;
signed short int var_1_43 = 16;
signed short int var_1_45 = 8;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 7.3;
float last_1_var_1_13 = 3.9;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch162Filler_PR_CI
	/* 25L, 237L, 652L, 678L, 976L, 1087L) */ if (/* 2L, 191L, 192L, 653L, 679L, 953L, 1088L) */ ((var_1_9) || (var_1_11))) {
		/* 20L, 231L, 656L, 682L, 971L, 1091L) */ if (/* 11L, 204L, 205L, 657L, 683L, 962L, 1092L) */ ((var_1_6) == (/* 10L, 203L, 207L, 659L, 685L, 961L, 1094L) */ ((/* 8L, 201L, 208L, 660L, 686L, 959L, 1095L) */ ((last_1_var_1_1) + (last_1_var_1_13))) + (var_1_12))))) {
			/* 15L, 222L, 664L, 690L, 966L, 1101L) */ var_1_10 = (
				var_1_3
			);
		} else {
			/* 19L, 230L, 668L, 694L, 970L, 1105L) */ var_1_10 = (
				var_1_2
			);
		}
	} else {
		/* 24L, 236L, 672L, 698L, 975L, 1109L) */ var_1_10 = (
			var_1_2
		);
	}


	// From: CodeObject5
	/* 373L, 201L) */ if (var_1_9) {
		/* 375L, 200L) */ var_1_39 = (
			/* 378L, 199L) */ ((
				var_1_40
			) + (
				/* 380L, 198L) */ ((
					var_1_41
				) - (
					var_1_42
				))
			))
		);
	}


	// From: Req4Batch162Filler_PR_CI
	/* 1116L, 265L, 757L, 775L) */ if (/* 1117L, 247L, 248L, 758L, 776L) */ ((var_1_3) > (var_1_10))) {
		/* 1120L, 257L, 761L, 779L) */ var_1_13 = (
			var_1_6
		);
	} else {
		/* 1124L, 264L, 765L, 783L) */ var_1_13 = (
			/* 1127L, 263L, 768L, 786L) */ (min (
				/* 1127L, 263L, 768L, 786L) */ (
					/* 1128L, 261L, 769L, 787L) */ (abs (
						1.75f
					))
				) , (
					var_1_6
				)
			))
		);
	}


	// From: Req6Batch162Filler_PR_CI
	/* 1152L, 308L, 904L, 910L) */ var_1_20 = (
		var_1_21
	);


	// From: Req7Batch162Filler_PR_CI
	/* 1158L, 318L, 928L, 934L) */ var_1_22 = (
		1
	);


	// From: CodeObject1
	/* 295L, 100L) */ if (var_1_9) {
		/* 297L, 98L) */ if (/* 298L, 63L, 64L) */ ((var_1_10) > (16u))) {
			/* 301L, 76L) */ var_1_23 = (
				/* 304L, 75L) */ (abs (
					/* 305L, 74L) */ ((
						var_1_26
					) - (
						var_1_27
					))
				))
			);
		} else {
			/* 308L, 96L) */ if (var_1_8) {
				/* 310L, 83L) */ var_1_23 = (
					var_1_26
				);
			} else {
				/* 314L, 95L) */ var_1_23 = (
					var_1_27
				);
			}
		}
	}


	// From: CodeObject6
	/* 405L, 247L) */ if (/* 406L, 211L, 212L) */ ((var_1_13) <= (/* 408L, 210L, 214L) */ ((/* 409L, 208L, 215L) */ (max (/* 409L, 208L, 215L) */ (var_1_12) , (32.4f)))) + (var_1_13))))) {
		/* 413L, 240L) */ if (/* 414L, 228L, 229L) */ ((var_1_1) > (var_1_37))) {
			/* 417L, 239L) */ var_1_43 = (
				/* 420L, 238L) */ (abs (
					256
				))
			);
		}
	} else {
		/* 422L, 246L) */ var_1_43 = (
			/* 425L, 245L) */ (abs (
				var_1_27
			))
		);
	}


	// From: CodeObject7
	/* 427L, 293L) */ if (/* 428L, 254L, 255L) */ ((var_1_21) <= (/* 430L, 253L, 257L) */ (abs (var_1_3))))) {
		/* 432L, 287L) */ if (/* 433L, 268L, 269L) */ ((/* 434L, 264L, 270L) */ (abs (var_1_10))) < (/* 436L, 267L, 272L) */ (max (/* 436L, 267L, 272L) */ (var_1_42) , (var_1_10)))))) {
			/* 439L, 286L) */ var_1_45 = (
				/* 442L, 285L) */ ((
					var_1_42
				) - (
					256
				))
			);
		}
	} else {
		/* 445L, 292L) */ var_1_45 = (
			var_1_42
		);
	}


	// From: Req2Batch162Filler_PR_CI
	/* 1052L, 179L, 457L, 493L) */ if (var_1_8) {
		/* 1054L, 173L, 459L, 495L) */ if (/* 1055L, 87L, 88L, 460L, 496L) */ ((/* 1056L, 83L, 89L, 461L, 497L) */ ((var_1_3) >= (var_1_2))) || (/* 1059L, 86L, 92L, 464L, 500L) */ ((var_1_10) < (var_1_22))))) {
			/* 1062L, 171L, 467L, 503L) */ if (/* 1063L, 105L, 106L, 468L, 504L) */ ((/* 1064L, 103L, 107L, 469L, 505L) */ (- (var_1_2))) < (var_1_3))) {
				/* 1067L, 165L, 472L, 508L) */ if (var_1_9) {
					/* 1069L, 120L, 474L, 510L) */ var_1_7 = (
						var_1_6
					);
				} else {
					/* 1073L, 164L, 478L, 514L) */ var_1_7 = (
						64.4f
					);
				}
			} else {
				/* 1077L, 170L, 482L, 518L) */ var_1_7 = (
					var_1_6
				);
			}
		}
	} else {
		/* 1081L, 178L, 486L, 522L) */ var_1_7 = (
			var_1_6
		);
	}


	// From: CodeObject3
	/* 354L, 178L) */ if (/* 355L, 156L, 157L) */ ((/* 356L, 154L, 158L) */ ((var_1_26) ^ (var_1_22))) >= (var_1_27))) {
		/* 360L, 176L) */ if (var_1_8) {
			/* 362L, 175L) */ var_1_35 = (
				/* 365L, 174L) */ (min (
					/* 365L, 174L) */ (
						var_1_36
					) , (
						var_1_37
					)
				))
			);
		}
	}


	// From: Req5Batch162Filler_PR_CI
	/* 1133L, 297L, 828L, 847L) */ if (/* 1134L, 277L, 278L, 829L, 848L) */ ((var_1_22) > (var_1_10))) {
		/* 1137L, 289L, 832L, 851L) */ var_1_14 = (
			/* 1140L, 288L, 835L, 854L) */ (max (
				/* 1140L, 288L, 835L, 854L) */ (
					var_1_16
				) , (
					var_1_17
				)
			))
		);
	} else {
		/* 1143L, 296L, 838L, 857L) */ var_1_14 = (
			/* 1146L, 295L, 841L, 860L) */ ((
				var_1_18
			) - (
				/* 1148L, 294L, 843L, 862L) */ (abs (
					var_1_19
				))
			))
		);
	}


	// From: CodeObject4
	/* 369L, 185L) */ var_1_38 = (
		var_1_6
	);


	// From: Req1Batch162Filler_PR_CI
	unsigned short int stepLocal_2 = var_1_2;
	signed long int stepLocal_1 = var_1_22;
	signed long int stepLocal_0 = /* 1008L, 7L, 11L, 325L, 358L) */ ((200) / (/* 1010L, 6L, 13L, 327L, 360L) */ ((var_1_2) + (var_1_3))));
	/* 1044L, 72L, 323L, 356L) */ if (/* 1021L, 9L, 10L, 324L, 357L) */ ((stepLocal_0) < (var_1_22))) {
		/* 1039L, 66L, 331L, 364L) */ if (/* 1023L, 26L, 27L, 332L, 365L) */ ((stepLocal_2) <= (var_1_22))) {
			/* 1038L, 64L, 335L, 368L) */ if (/* 1029L, 41L, 42L, 336L, 369L) */ ((stepLocal_1) != (/* 1028L, 40L, 44L, 338L, 371L) */ ((var_1_2) * (/* 1027L, 39L, 46L, 340L, 373L) */ ((var_1_3) + (var_1_10))))))) {
				/* 1033L, 59L, 343L, 376L) */ var_1_1 = (
					25.25
				);
			} else {
				/* 1037L, 63L, 347L, 380L) */ var_1_1 = (
					var_1_6
				);
			}
		}
	} else {
		/* 1043L, 71L, 351L, 384L) */ var_1_1 = (
			var_1_6
		);
	}


	// From: CodeObject2
	/* 318L, 148L) */ if (var_1_8) {
		/* 320L, 146L) */ if (/* 321L, 116L, 117L) */ ((/* 322L, 110L, 118L) */ ((var_1_13) * (/* 324L, 109L, 120L) */ (abs (var_1_6))))) >= (/* 326L, 115L, 122L) */ (min (/* 326L, 115L, 122L) */ (var_1_6) , (/* 328L, 114L, 124L) */ ((var_1_6) * (var_1_12)))))))) {
			/* 331L, 141L) */ var_1_29 = (
				/* 334L, 140L) */ (abs (
					var_1_26
				))
			);
		} else {
			/* 336L, 145L) */ var_1_29 = (
				var_1_27
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 1);
	assume_abort_if_not(var_1_2 <= 32768);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 127);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 32766);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 32766);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= -16383);
	assume_abort_if_not(var_1_40 <= 16383);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 16383);
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 16383);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_13 = var_1_13;
}

int property(void) {
	if (/* 450L, 9L, 17L, 390L, 423L, 1164L) */ ((/* 451L, 7L, 18L, 391L, 424L, 1165L) */ ((200) / (/* 453L, 6L, 20L, 393L, 426L, 1167L) */ ((var_1_2) + (var_1_3))))) < (var_1_22))) {
		if (/* 458L, 26L, 30L, 398L, 431L, 1172L) */ ((var_1_2) <= (var_1_22))) {
			if (/* 462L, 41L, 49L, 402L, 435L, 1176L) */ ((var_1_22) != (/* 464L, 40L, 51L, 404L, 437L, 1178L) */ ((var_1_2) * (/* 466L, 39L, 53L, 406L, 439L, 1180L) */ ((var_1_3) + (var_1_10))))))) {
			} else {
			}
		}
	} else {
	}
	if (var_1_8) {
		if (/* 487L, 87L, 95L, 532L, 568L, 1201L) */ ((/* 488L, 83L, 96L, 533L, 569L, 1202L) */ ((var_1_3) >= (var_1_2))) || (/* 491L, 86L, 99L, 536L, 572L, 1205L) */ ((var_1_10) < (var_1_22))))) {
			if (/* 495L, 105L, 110L, 540L, 576L, 1209L) */ ((/* 496L, 103L, 111L, 541L, 577L, 1210L) */ (- (var_1_2))) < (var_1_3))) {
				if (var_1_9) {
				} else {
				}
			} else {
			}
		}
	} else {
	}
	if (/* 520L, 191L, 195L, 705L, 731L, 981L, 1234L, 30L) */ ((var_1_9) || (var_1_11))) {
		if (/* 524L, 204L, 212L, 709L, 735L, 990L, 1238L, 39L) */ ((var_1_6) == (/* 526L, 203L, 214L, 711L, 737L, 989L, 1240L, 38L) */ ((/* 527L, 201L, 215L, 712L, 738L, 987L, 1241L, 36L) */ ((last_1_var_1_1) + (last_1_var_1_13))) + (var_1_12))))) {
		} else {
		}
	} else {
	}
	if (/* 549L, 247L, 251L, 794L, 812L, 1263L) */ ((var_1_3) > (var_1_10))) {
	} else {
	}
	if (/* 566L, 277L, 281L, 867L, 886L, 1280L) */ ((var_1_22) > (var_1_10))) {
	} else {
	}
	return /* 600L) */ ((
	/* 599L) */ ((
		/* 598L) */ ((
			/* 597L) */ ((
				/* 596L) */ ((
					/* 595L) */ ((
						/* 449L, 73L, 389L, 422L, 1163L) */ ((
							/* 450L, 9L, 17L, 390L, 423L, 1164L) */ ((
								/* 451L, 7L, 18L, 391L, 424L, 1165L) */ ((
									200
								) / (
									/* 453L, 6L, 20L, 393L, 426L, 1167L) */ ((
										var_1_2
									) + (
										var_1_3
									))
								))
							) < (
								var_1_22
							))
						) ? (
							/* 457L, 67L, 397L, 430L, 1171L) */ ((
								/* 458L, 26L, 30L, 398L, 431L, 1172L) */ ((
									var_1_2
								) <= (
									var_1_22
								))
							) ? (
								/* 461L, 65L, 401L, 434L, 1175L) */ ((
									/* 462L, 41L, 49L, 402L, 435L, 1176L) */ ((
										var_1_22
									) != (
										/* 464L, 40L, 51L, 404L, 437L, 1178L) */ ((
											var_1_2
										) * (
											/* 466L, 39L, 53L, 406L, 439L, 1180L) */ ((
												var_1_3
											) + (
												var_1_10
											))
										))
									))
								) ? (
									/* 469L, 59L, 409L, 442L, 1183L) */ ((
										var_1_1
									) == (
										/* 469L, 59L, 409L, 442L, 1183L) */ ((double) (
											25.25
										))
									))
								) : (
									/* 473L, 63L, 413L, 446L, 1187L) */ ((
										var_1_1
									) == (
										/* 473L, 63L, 413L, 446L, 1187L) */ ((double) (
											var_1_6
										))
									))
								))
							) : (
								1
							))
						) : (
							/* 477L, 71L, 417L, 450L, 1191L) */ ((
								var_1_1
							) == (
								/* 477L, 71L, 417L, 450L, 1191L) */ ((double) (
									var_1_6
								))
							))
						))
					) && (
						/* 484L, 180L, 529L, 565L, 1198L) */ ((
							var_1_8
						) ? (
							/* 486L, 174L, 531L, 567L, 1200L) */ ((
								/* 487L, 87L, 95L, 532L, 568L, 1201L) */ ((
									/* 488L, 83L, 96L, 533L, 569L, 1202L) */ ((
										var_1_3
									) >= (
										var_1_2
									))
								) || (
									/* 491L, 86L, 99L, 536L, 572L, 1205L) */ ((
										var_1_10
									) < (
										var_1_22
									))
								))
							) ? (
								/* 494L, 172L, 539L, 575L, 1208L) */ ((
									/* 495L, 105L, 110L, 540L, 576L, 1209L) */ ((
										/* 496L, 103L, 111L, 541L, 577L, 1210L) */ (- (
											var_1_2
										))
									) < (
										var_1_3
									))
								) ? (
									/* 499L, 166L, 544L, 580L, 1213L) */ ((
										var_1_9
									) ? (
										/* 501L, 120L, 546L, 582L, 1215L) */ ((
											var_1_7
										) == (
											/* 501L, 120L, 546L, 582L, 1215L) */ ((float) (
												var_1_6
											))
										))
									) : (
										/* 505L, 164L, 550L, 586L, 1219L) */ ((
											var_1_7
										) == (
											/* 505L, 164L, 550L, 586L, 1219L) */ ((float) (
												64.4f
											))
										))
									))
								) : (
									/* 509L, 170L, 554L, 590L, 1223L) */ ((
										var_1_7
									) == (
										/* 509L, 170L, 554L, 590L, 1223L) */ ((float) (
											var_1_6
										))
									))
								))
							) : (
								1
							))
						) : (
							/* 513L, 178L, 558L, 594L, 1227L) */ ((
								var_1_7
							) == (
								/* 513L, 178L, 558L, 594L, 1227L) */ ((float) (
									var_1_6
								))
							))
						))
					))
				) && (
					/* 519L, 238L, 704L, 730L, 1004L, 1233L, 53L) */ ((
						/* 520L, 191L, 195L, 705L, 731L, 981L, 1234L, 30L) */ ((
							var_1_9
						) || (
							var_1_11
						))
					) ? (
						/* 523L, 232L, 708L, 734L, 999L, 1237L, 48L) */ ((
							/* 524L, 204L, 212L, 709L, 735L, 990L, 1238L, 39L) */ ((
								var_1_6
							) == (
								/* 526L, 203L, 214L, 711L, 737L, 989L, 1240L, 38L) */ ((
									/* 527L, 201L, 215L, 712L, 738L, 987L, 1241L, 36L) */ ((
										last_1_var_1_1
									) + (
										last_1_var_1_13
									))
								) + (
									var_1_12
								))
							))
						) ? (
							/* 533L, 222L, 716L, 742L, 994L, 1247L, 43L) */ ((
								var_1_10
							) == (
								/* 533L, 222L, 716L, 742L, 994L, 1247L, 43L) */ ((unsigned long int) (
									var_1_3
								))
							))
						) : (
							/* 537L, 230L, 720L, 746L, 998L, 1251L, 47L) */ ((
								var_1_10
							) == (
								/* 537L, 230L, 720L, 746L, 998L, 1251L, 47L) */ ((unsigned long int) (
									var_1_2
								))
							))
						))
					) : (
						/* 541L, 236L, 724L, 750L, 1003L, 1255L, 52L) */ ((
							var_1_10
						) == (
							/* 541L, 236L, 724L, 750L, 1003L, 1255L, 52L) */ ((unsigned long int) (
								var_1_2
							))
						))
					))
				))
			) && (
				/* 548L, 266L, 793L, 811L, 1262L) */ ((
					/* 549L, 247L, 251L, 794L, 812L, 1263L) */ ((
						var_1_3
					) > (
						var_1_10
					))
				) ? (
					/* 552L, 257L, 797L, 815L, 1266L) */ ((
						var_1_13
					) == (
						/* 552L, 257L, 797L, 815L, 1266L) */ ((float) (
							var_1_6
						))
					))
				) : (
					/* 556L, 264L, 801L, 819L, 1270L) */ ((
						var_1_13
					) == (
						/* 556L, 264L, 801L, 819L, 1270L) */ ((float) (
							/* 559L, 263L, 804L, 822L, 1273L) */ (min (
								/* 559L, 263L, 804L, 822L, 1273L) */ (
									/* 560L, 261L, 805L, 823L, 1274L) */ (abs (
										1.75f
									))
								) , (
									var_1_6
								)
							))
						))
					))
				))
			))
		) && (
			/* 565L, 298L, 866L, 885L, 1279L) */ ((
				/* 566L, 277L, 281L, 867L, 886L, 1280L) */ ((
					var_1_22
				) > (
					var_1_10
				))
			) ? (
				/* 569L, 289L, 870L, 889L, 1283L) */ ((
					var_1_14
				) == (
					/* 569L, 289L, 870L, 889L, 1283L) */ ((unsigned char) (
						/* 572L, 288L, 873L, 892L, 1286L) */ (max (
							/* 572L, 288L, 873L, 892L, 1286L) */ (
								var_1_16
							) , (
								var_1_17
							)
						))
					))
				))
			) : (
				/* 575L, 296L, 876L, 895L, 1289L) */ ((
					var_1_14
				) == (
					/* 575L, 296L, 876L, 895L, 1289L) */ ((unsigned char) (
						/* 578L, 295L, 879L, 898L, 1292L) */ ((
							var_1_18
						) - (
							/* 580L, 294L, 881L, 900L, 1294L) */ (abs (
								var_1_19
							))
						))
					))
				))
			))
		))
	) && (
		/* 584L, 308L, 916L, 922L, 1298L) */ ((
			var_1_20
		) == (
			/* 584L, 308L, 916L, 922L, 1298L) */ ((unsigned short int) (
				var_1_21
			))
		))
	))
) && (
	/* 590L, 318L, 940L, 946L, 1304L) */ ((
		var_1_22
	) == (
		/* 590L, 318L, 940L, 946L, 1304L) */ ((signed long int) (
			1
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
