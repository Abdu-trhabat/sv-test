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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch168Filler_PR_CI.c", 13, "reach_error"); }
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
double var_1_1 = 63.25;
signed long int var_1_2 = -200;
signed long int var_1_3 = -128;
double var_1_4 = 8.75;
double var_1_5 = 3.25;
unsigned short int var_1_6 = 55016;
unsigned short int var_1_7 = 32;
unsigned short int var_1_8 = 5;
signed long int var_1_9 = 10;
unsigned long int var_1_10 = 2768943566;
unsigned long int var_1_11 = 1;
signed char var_1_12 = 8;
signed char var_1_14 = -10;
unsigned char var_1_15 = 2;
unsigned char var_1_16 = 5;
unsigned char var_1_17 = 16;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 5;
float var_1_20 = 63.519;
unsigned char var_1_21 = 1;
float var_1_22 = 9.1;
float var_1_23 = 63.5;
float var_1_24 = 50.5;
unsigned char var_1_25 = 0;
unsigned long int var_1_26 = 4;
double var_1_27 = 256.1;
double var_1_28 = 32.5;
float var_1_29 = 32.75;
signed long int var_1_31 = 10;
signed long int var_1_32 = 32;
unsigned short int var_1_36 = 10;
signed long int var_1_37 = -50;
unsigned char var_1_38 = 100;
unsigned char var_1_40 = 200;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 2;
unsigned char var_1_44 = 5;
signed short int var_1_48 = 8;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_11 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch168Filler_PR_CI
	signed long int stepLocal_2 = var_1_3;
	unsigned long int stepLocal_1 = 100u;
	signed long int stepLocal_0 = var_1_9;
	/* 1081L, 79L, 432L, 475L) */ if (/* 1044L, 4L, 5L, 433L, 476L) */ ((var_1_2) > (stepLocal_2))) {
		/* 1054L, 20L, 436L, 479L) */ var_1_1 = (
			/* 1053L, 19L, 439L, 482L) */ (min (
				/* 1053L, 19L, 439L, 482L) */ (
					/* 1051L, 17L, 440L, 483L) */ ((
						/* 1049L, 15L, 441L, 484L) */ ((
							var_1_4
						) - (
							8.25
						))
					) + (
						var_1_5
					))
				) , (
					49.75
				)
			))
		);
	} else {
		/* 1080L, 77L, 446L, 489L) */ if (/* 1060L, 27L, 28L, 447L, 490L) */ ((/* 1059L, 25L, 29L, 448L, 491L) */ ((var_1_6) - (/* 1058L, 24L, 31L, 450L, 493L) */ ((var_1_7) + (var_1_8))))) < (stepLocal_0))) {
			/* 1066L, 47L, 454L, 497L) */ var_1_1 = (
				/* 1065L, 46L, 457L, 500L) */ ((
					31.8
				) + (
					var_1_4
				))
			);
		} else {
			/* 1079L, 75L, 460L, 503L) */ if (/* 1070L, 52L, 53L, 461L, 504L) */ ((/* 1069L, 50L, 54L, 462L, 505L) */ ((var_1_10) - (var_1_8))) > (stepLocal_1))) {
				/* 1074L, 66L, 466L, 509L) */ var_1_1 = (
					var_1_5
				);
			} else {
				/* 1078L, 74L, 470L, 513L) */ var_1_1 = (
					var_1_4
				);
			}
		}
	}


	// From: CodeObject5
	/* 479L, 225L) */ if (var_1_25) {
		/* 481L, 223L) */ if (/* 482L, 187L, 188L) */ ((/* 483L, 183L, 189L) */ ((/* 484L, 181L, 190L) */ (abs (var_1_24))) <= (var_1_4))) || (/* 487L, 186L, 193L) */ ((var_1_25) && (var_1_21))))) {
			/* 490L, 217L) */ if (/* 491L, 206L, 207L) */ ((var_1_25) || (var_1_21))) {
				/* 494L, 216L) */ var_1_44 = (
					var_1_40
				);
			}
		} else {
			/* 498L, 222L) */ var_1_44 = (
				var_1_17
			);
		}
	}


	// From: CodeObject6
	/* 503L, 232L) */ var_1_48 = (
		var_1_19
	);


	// From: Req2Batch168Filler_PR_CI
	/* 1091L, 110L, 642L, 660L) */ if (/* 1092L, 91L, 92L, 643L, 661L) */ ((-128) < (/* 1094L, 90L, 94L, 645L, 663L) */ ((var_1_8) ^ (/* 1096L, 89L, 96L, 647L, 665L) */ ((var_1_2) * (last_1_var_1_11))))))) {
		/* 1100L, 109L, 651L, 669L) */ var_1_11 = (
			var_1_7
		);
	}


	// From: Req4Batch168Filler_PR_CI
	/* 1119L, 164L, 763L, 775L) */ var_1_15 = (
		/* 1122L, 163L, 766L, 778L) */ (min (
			/* 1122L, 163L, 766L, 778L) */ (
				/* 1123L, 159L, 767L, 779L) */ ((
					var_1_16
				) + (
					var_1_17
				))
			) , (
				/* 1126L, 162L, 770L, 782L) */ (max (
					/* 1126L, 162L, 770L, 782L) */ (
						var_1_18
					) , (
						var_1_19
					)
				))
			)
		))
	);


	// From: Req5Batch168Filler_PR_CI
	/* 1130L, 211L, 810L, 842L) */ if (/* 1131L, 172L, 173L, 811L, 843L) */ (! (var_1_21))) {
		/* 1133L, 196L, 813L, 845L) */ if (var_1_21) {
			/* 1135L, 185L, 815L, 847L) */ var_1_20 = (
				/* 1138L, 184L, 818L, 850L) */ ((
					var_1_4
				) + (
					25.5f
				))
			);
		} else {
			/* 1141L, 195L, 821L, 853L) */ var_1_20 = (
				/* 1144L, 194L, 824L, 856L) */ ((
					/* 1145L, 192L, 825L, 857L) */ (max (
						/* 1145L, 192L, 825L, 857L) */ (
							/* 1146L, 190L, 826L, 858L) */ (min (
								/* 1146L, 190L, 826L, 858L) */ (
									var_1_4
								) , (
									var_1_22
								)
							))
						) , (
							var_1_23
						)
					))
				) - (
					var_1_24
				))
			);
		}
	} else {
		/* 1151L, 209L, 831L, 863L) */ if (var_1_25) {
			/* 1153L, 204L, 833L, 865L) */ var_1_20 = (
				var_1_23
			);
		} else {
			/* 1157L, 208L, 837L, 869L) */ var_1_20 = (
				var_1_5
			);
		}
	}


	// From: Req6Batch168Filler_PR_CI
	signed long int stepLocal_3 = -10;
	/* 1174L, 236L, 938L, 950L) */ if (var_1_25) {
		/* 1173L, 234L, 940L, 952L) */ if (/* 1167L, 222L, 223L, 941L, 953L) */ ((stepLocal_3) < (var_1_18))) {
			/* 1172L, 233L, 944L, 956L) */ var_1_26 = (
				/* 1171L, 232L, 947L, 959L) */ (abs (
					var_1_17
				))
			);
		}
	}


	// From: CodeObject1
	/* 235L, 61L) */ if (/* 236L, 10L, 11L) */ ((/* 237L, 4L, 12L) */ (abs (var_1_8))) > (/* 239L, 9L, 14L) */ ((var_1_2) + (/* 241L, 8L, 16L) */ (min (/* 241L, 8L, 16L) */ (var_1_9) , (var_1_2)))))))) {
		/* 244L, 59L) */ if (/* 245L, 30L, 31L) */ ((var_1_2) == (/* 247L, 29L, 33L) */ (abs (var_1_8))))) {
			/* 249L, 53L) */ if (/* 250L, 42L, 43L) */ ((var_1_9) >= (-4))) {
				/* 253L, 52L) */ var_1_29 = (
					var_1_23
				);
			}
		} else {
			/* 257L, 58L) */ var_1_29 = (
				var_1_23
			);
		}
	}


	// From: CodeObject2
	/* 262L, 68L) */ var_1_36 = (
		128
	);


	// From: Req7Batch168Filler_PR_CI
	/* 1179L, 245L, 987L, 993L) */ var_1_27 = (
		var_1_4
	);


	// From: Req8Batch168Filler_PR_CI
	/* 1185L, 255L, 1011L, 1017L) */ var_1_28 = (
		var_1_22
	);


	// From: CodeObject3
	/* 267L, 76L) */ var_1_37 = (
		var_1_2
	);


	// From: Req3Batch168Filler_PR_CI
	/* 1105L, 149L, 710L, 723L) */ if (/* 1106L, 130L, 131L, 711L, 724L) */ ((/* 1107L, 128L, 132L, 712L, 725L) */ ((/* 1108L, 126L, 133L, 713L, 726L) */ ((var_1_28) + (var_1_4))) * (var_1_5))) >= (var_1_1))) {
		/* 1113L, 148L, 718L, 731L) */ var_1_12 = (
			var_1_14
		);
	}


	// From: CodeObject4
	/* 427L, 173L) */ if (/* 428L, 83L, 84L) */ ((var_1_24) <= (var_1_4))) {
		/* 431L, 160L) */ if (/* 432L, 97L, 98L) */ ((/* 433L, 95L, 99L) */ ((/* 434L, 91L, 100L) */ (abs (var_1_31))) & (/* 436L, 94L, 102L) */ (min (/* 436L, 94L, 102L) */ (var_1_6) , (var_1_37)))))) <= (var_1_7))) {
			/* 440L, 158L) */ if (/* 441L, 117L, 118L) */ ((/* 442L, 115L, 119L) */ (abs (var_1_31))) < (var_1_6))) {
				/* 445L, 147L) */ if (/* 446L, 129L, 130L) */ (! (/* 447L, 128L, 131L) */ ((var_1_32) >= (var_1_31))))) {
					/* 450L, 141L) */ var_1_38 = (
						var_1_16
					);
				} else {
					/* 454L, 146L) */ var_1_38 = (
						/* 457L, 145L) */ (abs (
							var_1_16
						))
					);
				}
			} else {
				/* 459L, 157L) */ var_1_38 = (
					/* 462L, 156L) */ (max (
						/* 462L, 156L) */ (
							/* 463L, 153L) */ ((
								var_1_40
							) - (
								var_1_17
							))
						) , (
							/* 466L, 155L) */ (abs (
								5
							))
						)
					))
				);
			}
		}
	} else {
		/* 468L, 172L) */ var_1_38 = (
			/* 471L, 171L) */ (max (
				/* 471L, 171L) */ (
					/* 472L, 168L) */ ((
						4
					) + (
						/* 474L, 167L) */ ((
							var_1_42
						) + (
							var_1_43
						))
					))
				) , (
					/* 477L, 170L) */ (abs (
						var_1_16
					))
				)
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 32767);
	assume_abort_if_not(var_1_6 <= 65535);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16384);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 2147483647);
	assume_abort_if_not(var_1_10 <= 4294967295);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 127);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 64);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
}

int property(void) {
	if (/* 508L, 4L, 8L, 519L, 562L, 1191L) */ ((var_1_2) > (var_1_3))) {
	} else {
		if (/* 522L, 27L, 35L, 533L, 576L, 1205L) */ ((/* 523L, 25L, 36L, 534L, 577L, 1206L) */ ((var_1_6) - (/* 525L, 24L, 38L, 536L, 579L, 1208L) */ ((var_1_7) + (var_1_8))))) < (var_1_9))) {
		} else {
			if (/* 536L, 52L, 58L, 547L, 590L, 1219L) */ ((/* 537L, 50L, 59L, 548L, 591L, 1220L) */ ((var_1_10) - (var_1_8))) > (100u))) {
			} else {
			}
		}
	}
	if (/* 555L, 91L, 99L, 679L, 697L, 1238L) */ ((-128) < (/* 557L, 90L, 101L, 681L, 699L, 1240L) */ ((var_1_8) ^ (/* 559L, 89L, 103L, 683L, 701L, 1242L) */ ((var_1_2) * (last_1_var_1_11))))))) {
	}
	if (/* 569L, 130L, 138L, 737L, 750L, 1252L) */ ((/* 570L, 128L, 139L, 738L, 751L, 1253L) */ ((/* 571L, 126L, 140L, 739L, 752L, 1254L) */ ((var_1_28) + (var_1_4))) * (var_1_5))) >= (var_1_1))) {
	}
	if (/* 594L, 172L, 175L, 875L, 907L, 1277L) */ (! (var_1_21))) {
		if (var_1_21) {
		} else {
		}
	} else {
		if (var_1_25) {
		} else {
		}
	}
	if (var_1_25) {
		if (/* 628L, 222L, 226L, 965L, 977L, 1311L) */ ((-10) < (var_1_18))) {
		}
	}
	return /* 655L) */ ((
	/* 654L) */ ((
		/* 653L) */ ((
			/* 652L) */ ((
				/* 651L) */ ((
					/* 650L) */ ((
						/* 649L) */ ((
							/* 507L, 80L, 518L, 561L, 1190L) */ ((
								/* 508L, 4L, 8L, 519L, 562L, 1191L) */ ((
									var_1_2
								) > (
									var_1_3
								))
							) ? (
								/* 511L, 20L, 522L, 565L, 1194L) */ ((
									var_1_1
								) == (
									/* 511L, 20L, 522L, 565L, 1194L) */ ((double) (
										/* 514L, 19L, 525L, 568L, 1197L) */ (min (
											/* 514L, 19L, 525L, 568L, 1197L) */ (
												/* 515L, 17L, 526L, 569L, 1198L) */ ((
													/* 516L, 15L, 527L, 570L, 1199L) */ ((
														var_1_4
													) - (
														8.25
													))
												) + (
													var_1_5
												))
											) , (
												49.75
											)
										))
									))
								))
							) : (
								/* 521L, 78L, 532L, 575L, 1204L) */ ((
									/* 522L, 27L, 35L, 533L, 576L, 1205L) */ ((
										/* 523L, 25L, 36L, 534L, 577L, 1206L) */ ((
											var_1_6
										) - (
											/* 525L, 24L, 38L, 536L, 579L, 1208L) */ ((
												var_1_7
											) + (
												var_1_8
											))
										))
									) < (
										var_1_9
									))
								) ? (
									/* 529L, 47L, 540L, 583L, 1212L) */ ((
										var_1_1
									) == (
										/* 529L, 47L, 540L, 583L, 1212L) */ ((double) (
											/* 532L, 46L, 543L, 586L, 1215L) */ ((
												31.8
											) + (
												var_1_4
											))
										))
									))
								) : (
									/* 535L, 76L, 546L, 589L, 1218L) */ ((
										/* 536L, 52L, 58L, 547L, 590L, 1219L) */ ((
											/* 537L, 50L, 59L, 548L, 591L, 1220L) */ ((
												var_1_10
											) - (
												var_1_8
											))
										) > (
											100u
										))
									) ? (
										/* 541L, 66L, 552L, 595L, 1224L) */ ((
											var_1_1
										) == (
											/* 541L, 66L, 552L, 595L, 1224L) */ ((double) (
												var_1_5
											))
										))
									) : (
										/* 545L, 74L, 556L, 599L, 1228L) */ ((
											var_1_1
										) == (
											/* 545L, 74L, 556L, 599L, 1228L) */ ((double) (
												var_1_4
											))
										))
									))
								))
							))
						) && (
							/* 554L, 111L, 678L, 696L, 1237L) */ ((
								/* 555L, 91L, 99L, 679L, 697L, 1238L) */ ((
									-128
								) < (
									/* 557L, 90L, 101L, 681L, 699L, 1240L) */ ((
										var_1_8
									) ^ (
										/* 559L, 89L, 103L, 683L, 701L, 1242L) */ ((
											var_1_2
										) * (
											last_1_var_1_11
										))
									))
								))
							) ? (
								/* 563L, 109L, 687L, 705L, 1246L) */ ((
									var_1_11
								) == (
									/* 563L, 109L, 687L, 705L, 1246L) */ ((unsigned long int) (
										var_1_7
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 568L, 150L, 736L, 749L, 1251L) */ ((
							/* 569L, 130L, 138L, 737L, 750L, 1252L) */ ((
								/* 570L, 128L, 139L, 738L, 751L, 1253L) */ ((
									/* 571L, 126L, 140L, 739L, 752L, 1254L) */ ((
										var_1_28
									) + (
										var_1_4
									))
								) * (
									var_1_5
								))
							) >= (
								var_1_1
							))
						) ? (
							/* 576L, 148L, 744L, 757L, 1259L) */ ((
								var_1_12
							) == (
								/* 576L, 148L, 744L, 757L, 1259L) */ ((signed char) (
									var_1_14
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 582L, 164L, 787L, 799L, 1265L) */ ((
						var_1_15
					) == (
						/* 582L, 164L, 787L, 799L, 1265L) */ ((unsigned char) (
							/* 585L, 163L, 790L, 802L, 1268L) */ (min (
								/* 585L, 163L, 790L, 802L, 1268L) */ (
									/* 586L, 159L, 791L, 803L, 1269L) */ ((
										var_1_16
									) + (
										var_1_17
									))
								) , (
									/* 589L, 162L, 794L, 806L, 1272L) */ (max (
										/* 589L, 162L, 794L, 806L, 1272L) */ (
											var_1_18
										) , (
											var_1_19
										)
									))
								)
							))
						))
					))
				))
			) && (
				/* 593L, 212L, 874L, 906L, 1276L) */ ((
					/* 594L, 172L, 175L, 875L, 907L, 1277L) */ (! (
						var_1_21
					))
				) ? (
					/* 596L, 197L, 877L, 909L, 1279L) */ ((
						var_1_21
					) ? (
						/* 598L, 185L, 879L, 911L, 1281L) */ ((
							var_1_20
						) == (
							/* 598L, 185L, 879L, 911L, 1281L) */ ((float) (
								/* 601L, 184L, 882L, 914L, 1284L) */ ((
									var_1_4
								) + (
									25.5f
								))
							))
						))
					) : (
						/* 604L, 195L, 885L, 917L, 1287L) */ ((
							var_1_20
						) == (
							/* 604L, 195L, 885L, 917L, 1287L) */ ((float) (
								/* 607L, 194L, 888L, 920L, 1290L) */ ((
									/* 608L, 192L, 889L, 921L, 1291L) */ (max (
										/* 608L, 192L, 889L, 921L, 1291L) */ (
											/* 609L, 190L, 890L, 922L, 1292L) */ (min (
												/* 609L, 190L, 890L, 922L, 1292L) */ (
													var_1_4
												) , (
													var_1_22
												)
											))
										) , (
											var_1_23
										)
									))
								) - (
									var_1_24
								))
							))
						))
					))
				) : (
					/* 614L, 210L, 895L, 927L, 1297L) */ ((
						var_1_25
					) ? (
						/* 616L, 204L, 897L, 929L, 1299L) */ ((
							var_1_20
						) == (
							/* 616L, 204L, 897L, 929L, 1299L) */ ((float) (
								var_1_23
							))
						))
					) : (
						/* 620L, 208L, 901L, 933L, 1303L) */ ((
							var_1_20
						) == (
							/* 620L, 208L, 901L, 933L, 1303L) */ ((float) (
								var_1_5
							))
						))
					))
				))
			))
		) && (
			/* 625L, 237L, 962L, 974L, 1308L) */ ((
				var_1_25
			) ? (
				/* 627L, 235L, 964L, 976L, 1310L) */ ((
					/* 628L, 222L, 226L, 965L, 977L, 1311L) */ ((
						-10
					) < (
						var_1_18
					))
				) ? (
					/* 631L, 233L, 968L, 980L, 1314L) */ ((
						var_1_26
					) == (
						/* 631L, 233L, 968L, 980L, 1314L) */ ((unsigned long int) (
							/* 634L, 232L, 971L, 983L, 1317L) */ (abs (
								var_1_17
							))
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
		/* 638L, 245L, 999L, 1005L, 1321L) */ ((
			var_1_27
		) == (
			/* 638L, 245L, 999L, 1005L, 1321L) */ ((double) (
				var_1_4
			))
		))
	))
) && (
	/* 644L, 255L, 1023L, 1029L, 1327L) */ ((
		var_1_28
	) == (
		/* 644L, 255L, 1023L, 1029L, 1327L) */ ((double) (
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
