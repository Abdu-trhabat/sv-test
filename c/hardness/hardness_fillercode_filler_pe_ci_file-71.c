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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch71Filler_PE_CI.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 32;
signed char var_1_4 = -1;
signed char var_1_5 = 4;
signed long int var_1_6 = -100000;
signed long int var_1_7 = 0;
signed long int var_1_8 = 256;
unsigned short int var_1_9 = 35831;
float var_1_10 = 1.875;
float var_1_11 = 5.8;
float var_1_12 = 2.375;
float var_1_13 = 999999999999.75;
unsigned long int var_1_14 = 64;
double var_1_15 = 255.5;
double var_1_16 = 127.5;
unsigned long int var_1_17 = 1259086625;
unsigned long int var_1_18 = 1670092463;
signed long int var_1_19 = 2;
signed long int var_1_20 = -64;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned short int var_1_25 = 10;
signed char var_1_26 = 4;
signed char var_1_36 = 5;
signed char var_1_37 = -4;
signed char var_1_38 = 4;
signed long int var_1_39 = 2;
signed long int var_1_42 = 25;
signed short int var_1_43 = 128;
double var_1_44 = 32.75;
unsigned char var_1_45 = 0;
signed char var_1_48 = -1;
signed char var_1_49 = 25;
signed char var_1_50 = 25;
unsigned long int var_1_51 = 5;
signed char var_1_52 = 25;
signed char var_1_53 = -5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_20 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch71Filler_PE_CI
	/* 1031L, 63L, 554L, 560L) */ var_1_10 = (
		var_1_11
	);


	// From: Req6Batch71Filler_PE_CI
	/* 1115L, 224L, 855L, 871L) */ if (/* 1116L, 209L, 210L, 856L, 872L) */ ((var_1_9) == (var_1_5))) {
		/* 1119L, 223L, 859L, 875L) */ var_1_20 = (
			/* 1122L, 222L, 862L, 878L) */ (max (
				/* 1122L, 222L, 862L, 878L) */ (
					var_1_4
				) , (
					/* 1124L, 221L, 864L, 880L) */ ((
						last_1_var_1_20
					) + (
						-8
					))
				)
			))
		);
	}


	// From: Req7Batch71Filler_PE_CI
	/* 1133L, 242L, 921L, 935L) */ var_1_21 = (
		/* 1136L, 241L, 924L, 938L) */ (! (
			/* 1137L, 240L, 925L, 939L) */ ((
				var_1_22
			) || (
				/* 1139L, 239L, 927L, 941L) */ ((
					var_1_23
				) || (
					var_1_24
				))
			))
		))
	);


	// From: Req8Batch71Filler_PE_CI
	/* 1144L, 258L, 974L, 980L) */ var_1_25 = (
		16
	);


	// From: Req1Batch71Filler_PE_CI
	signed long int stepLocal_0 = /* 998L, 13L, 19L, 444L, 473L) */ ((/* 999L, 11L, 20L, 445L, 474L) */ ((var_1_6) + (var_1_7))) * (var_1_8));
	/* 1026L, 54L, 437L, 466L) */ if (var_1_21) {
		/* 1015L, 39L, 439L, 468L) */ if (/* 1008L, 14L, 15L, 440L, 469L) */ ((/* 1007L, 8L, 16L, 441L, 470L) */ ((var_1_4) - (var_1_5))) > (stepLocal_0))) {
			/* 1014L, 38L, 449L, 478L) */ var_1_1 = (
				/* 1013L, 37L, 452L, 481L) */ ((
					var_1_9
				) - (
					var_1_5
				))
			);
		}
	} else {
		/* 1025L, 52L, 455L, 484L) */ if (var_1_21) {
			/* 1020L, 47L, 457L, 486L) */ var_1_1 = (
				32
			);
		} else {
			/* 1024L, 51L, 461L, 490L) */ var_1_1 = (
				var_1_5
			);
		}
	}


	// From: Req5Batch71Filler_PE_CI
	/* 1103L, 201L, 813L, 823L) */ if (/* 1104L, 190L, 191L, 814L, 824L) */ (! (var_1_21))) {
		/* 1106L, 200L, 816L, 826L) */ var_1_19 = (
			/* 1109L, 199L, 819L, 829L) */ ((
				var_1_5
			) + (
				256
			))
		);
	}


	// From: Req4Batch71Filler_PE_CI
	signed long int stepLocal_2 = /* 1062L, 137L, 144L, 669L, 707L) */ (min (/* 1062L, 137L, 144L, 669L, 707L) */ (var_1_20) , (var_1_9)));
	/* 1099L, 183L, 661L, 699L) */ if (/* 1070L, 124L, 125L, 662L, 700L) */ ((/* 1068L, 122L, 126L, 663L, 701L) */ ((var_1_15) - (var_1_16))) > (var_1_13))) {
		/* 1088L, 171L, 667L, 705L) */ if (/* 1075L, 142L, 143L, 668L, 706L) */ ((stepLocal_2) <= (/* 1074L, 141L, 147L, 672L, 710L) */ (max (/* 1074L, 141L, 147L, 672L, 710L) */ (var_1_19) , (/* 1073L, 140L, 149L, 674L, 712L) */ (abs (var_1_4)))))))) {
			/* 1081L, 164L, 676L, 714L) */ var_1_14 = (
				/* 1080L, 163L, 679L, 717L) */ ((
					var_1_20
				) + (
					var_1_9
				))
			);
		} else {
			/* 1087L, 170L, 682L, 720L) */ var_1_14 = (
				/* 1086L, 169L, 685L, 723L) */ ((
					var_1_5
				) + (
					var_1_9
				))
			);
		}
	} else {
		/* 1098L, 182L, 688L, 726L) */ var_1_14 = (
			/* 1097L, 181L, 691L, 729L) */ ((
				3919152995u
			) - (
				/* 1096L, 180L, 693L, 731L) */ ((
					/* 1094L, 178L, 694L, 732L) */ (min (
						/* 1094L, 178L, 694L, 732L) */ (
							var_1_17
						) , (
							var_1_18
						)
					))
				) - (
					var_1_20
				))
			))
		);
	}


	// From: Req3Batch71Filler_PE_CI
	unsigned long int stepLocal_1 = var_1_14;
	/* 1057L, 114L, 577L, 598L) */ if (/* 1045L, 76L, 77L, 578L, 599L) */ ((var_1_10) >= (/* 1044L, 75L, 79L, 580L, 601L) */ ((/* 1042L, 73L, 80L, 581L, 602L) */ ((var_1_11) / (var_1_13))) / (31.9f))))) {
		/* 1056L, 112L, 585L, 606L) */ if (/* 1047L, 93L, 94L, 586L, 607L) */ ((stepLocal_1) > (var_1_4))) {
			/* 1051L, 103L, 589L, 610L) */ var_1_12 = (
				var_1_11
			);
		} else {
			/* 1055L, 111L, 593L, 614L) */ var_1_12 = (
				3.125f
			);
		}
	}


	// From: CodeObject1
	/* 251L, 71L) */ if (/* 252L, 10L, 11L) */ ((/* 253L, 6L, 12L) */ ((/* 254L, 4L, 13L) */ (min (/* 254L, 4L, 13L) */ (var_1_16) , (var_1_15)))) - (var_1_16))) <= (/* 258L, 9L, 17L) */ ((var_1_10) + (var_1_13))))) {
		/* 261L, 61L) */ if (/* 262L, 35L, 36L) */ ((/* 263L, 33L, 37L) */ (max (/* 263L, 33L, 37L) */ (var_1_18) , (/* 265L, 32L, 39L) */ ((var_1_14) / (var_1_17)))))) < (var_1_6))) {
			/* 269L, 60L) */ var_1_26 = (
				/* 272L, 59L) */ ((
					/* 273L, 54L) */ ((
						var_1_36
					) + (
						var_1_37
					))
				) + (
					/* 276L, 58L) */ (abs (
						/* 277L, 57L) */ ((
							var_1_38
						) - (
							50
						))
					))
				))
			);
		}
	} else {
		/* 280L, 70L) */ var_1_26 = (
			/* 283L, 69L) */ ((
				/* 284L, 66L) */ (abs (
					var_1_37
				))
			) - (
				/* 286L, 68L) */ (abs (
					var_1_38
				))
			))
		);
	}


	// From: CodeObject2
	/* 288L, 121L) */ if (/* 289L, 81L, 82L) */ ((/* 290L, 79L, 83L) */ ((var_1_6) % (/* 292L, 78L, 85L) */ (min (/* 292L, 78L, 85L) */ (var_1_18) , (var_1_9)))))) <= (var_1_37))) {
		/* 296L, 119L) */ if (/* 297L, 100L, 101L) */ ((/* 298L, 98L, 102L) */ ((var_1_36) <= (var_1_18))) || (var_1_22))) {
			/* 302L, 114L) */ var_1_39 = (
				var_1_42
			);
		} else {
			/* 306L, 118L) */ var_1_39 = (
				var_1_9
			);
		}
	}


	// From: CodeObject3
	/* 311L, 128L) */ var_1_43 = (
		-100
	);


	// From: CodeObject4
	/* 316L, 136L) */ var_1_44 = (
		8.25
	);


	// From: CodeObject5
	/* 324L, 159L) */ if (/* 325L, 143L, 144L) */ ((var_1_23) || (var_1_21))) {
		/* 328L, 157L) */ if (var_1_21) {
			/* 330L, 156L) */ var_1_45 = (
				var_1_24
			);
		}
	}


	// From: CodeObject6
	/* 335L, 189L) */ if (var_1_23) {
		/* 337L, 180L) */ var_1_48 = (
			/* 340L, 179L) */ (abs (
				/* 341L, 178L) */ ((
					var_1_38
				) - (
					var_1_49
				))
			))
		);
	} else {
		/* 344L, 188L) */ var_1_48 = (
			/* 347L, 187L) */ ((
				var_1_49
			) - (
				/* 349L, 186L) */ (min (
					/* 349L, 186L) */ (
						var_1_38
					) , (
						var_1_50
					)
				))
			))
		);
	}


	// From: CodeObject7
	/* 365L, 221L) */ if (/* 366L, 201L, 202L) */ ((/* 367L, 199L, 203L) */ ((var_1_18) * (/* 369L, 198L, 205L) */ (min (/* 369L, 198L, 205L) */ (var_1_8) , (var_1_19)))))) < (var_1_42))) {
		/* 373L, 220L) */ var_1_51 = (
			/* 376L, 219L) */ (abs (
				var_1_50
			))
		);
	}


	// From: CodeObject8
	/* 378L, 249L) */ if (/* 379L, 229L, 230L) */ ((var_1_17) < (/* 381L, 228L, 232L) */ (min (/* 381L, 228L, 232L) */ (var_1_49) , (var_1_36)))))) {
		/* 384L, 247L) */ if (var_1_22) {
			/* 386L, 246L) */ var_1_52 = (
				var_1_53
			);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 1073741823);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 1073741823);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -31);
	assume_abort_if_not(var_1_36 <= 32);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -31);
	assume_abort_if_not(var_1_37 <= 31);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -2147483647);
	assume_abort_if_not(var_1_42 <= 2147483646);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 126);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= -127);
	assume_abort_if_not(var_1_53 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (var_1_21) {
		if (/* 393L, 14L, 24L, 498L, 527L, 1152L) */ ((/* 394L, 8L, 25L, 499L, 528L, 1153L) */ ((var_1_4) - (var_1_5))) > (/* 397L, 13L, 28L, 502L, 531L, 1156L) */ ((/* 398L, 11L, 29L, 503L, 532L, 1157L) */ ((var_1_6) + (var_1_7))) * (var_1_8))))) {
		}
	} else {
		if (var_1_21) {
		} else {
		}
	}
	if (/* 426L, 76L, 84L, 620L, 641L, 1185L) */ ((var_1_10) >= (/* 428L, 75L, 86L, 622L, 643L, 1187L) */ ((/* 429L, 73L, 87L, 623L, 644L, 1188L) */ ((var_1_11) / (var_1_13))) / (31.9f))))) {
		if (/* 434L, 93L, 97L, 628L, 649L, 1193L) */ ((var_1_14) > (var_1_4))) {
		} else {
		}
	}
	if (/* 447L, 124L, 130L, 738L, 776L, 1206L) */ ((/* 448L, 122L, 131L, 739L, 777L, 1207L) */ ((var_1_15) - (var_1_16))) > (var_1_13))) {
		if (/* 453L, 142L, 151L, 744L, 782L, 1212L) */ ((/* 454L, 137L, 152L, 745L, 783L, 1213L) */ (min (/* 454L, 137L, 152L, 745L, 783L, 1213L) */ (var_1_20) , (var_1_9)))) <= (/* 457L, 141L, 155L, 748L, 786L, 1216L) */ (max (/* 457L, 141L, 155L, 748L, 786L, 1216L) */ (var_1_19) , (/* 459L, 140L, 157L, 750L, 788L, 1218L) */ (abs (var_1_4)))))))) {
		} else {
		}
	} else {
	}
	if (/* 485L, 190L, 193L, 834L, 844L, 1244L) */ (! (var_1_21))) {
	}
	if (/* 497L, 209L, 213L, 888L, 904L, 1256L) */ ((var_1_9) == (var_1_5))) {
	}
	return /* 536L) */ ((
	/* 535L) */ ((
		/* 534L) */ ((
			/* 533L) */ ((
				/* 532L) */ ((
					/* 531L) */ ((
						/* 530L) */ ((
							/* 390L, 55L, 495L, 524L, 1149L) */ ((
								var_1_21
							) ? (
								/* 392L, 40L, 497L, 526L, 1151L) */ ((
									/* 393L, 14L, 24L, 498L, 527L, 1152L) */ ((
										/* 394L, 8L, 25L, 499L, 528L, 1153L) */ ((
											var_1_4
										) - (
											var_1_5
										))
									) > (
										/* 397L, 13L, 28L, 502L, 531L, 1156L) */ ((
											/* 398L, 11L, 29L, 503L, 532L, 1157L) */ ((
												var_1_6
											) + (
												var_1_7
											))
										) * (
											var_1_8
										))
									))
								) ? (
									/* 402L, 38L, 507L, 536L, 1161L) */ ((
										var_1_1
									) == (
										/* 402L, 38L, 507L, 536L, 1161L) */ ((unsigned short int) (
											/* 405L, 37L, 510L, 539L, 1164L) */ ((
												var_1_9
											) - (
												var_1_5
											))
										))
									))
								) : (
									1
								))
							) : (
								/* 408L, 53L, 513L, 542L, 1167L) */ ((
									var_1_21
								) ? (
									/* 410L, 47L, 515L, 544L, 1169L) */ ((
										var_1_1
									) == (
										/* 410L, 47L, 515L, 544L, 1169L) */ ((unsigned short int) (
											32
										))
									))
								) : (
									/* 414L, 51L, 519L, 548L, 1173L) */ ((
										var_1_1
									) == (
										/* 414L, 51L, 519L, 548L, 1173L) */ ((unsigned short int) (
											var_1_5
										))
									))
								))
							))
						) && (
							/* 420L, 63L, 566L, 572L, 1179L) */ ((
								var_1_10
							) == (
								/* 420L, 63L, 566L, 572L, 1179L) */ ((float) (
									var_1_11
								))
							))
						))
					) && (
						/* 425L, 115L, 619L, 640L, 1184L) */ ((
							/* 426L, 76L, 84L, 620L, 641L, 1185L) */ ((
								var_1_10
							) >= (
								/* 428L, 75L, 86L, 622L, 643L, 1187L) */ ((
									/* 429L, 73L, 87L, 623L, 644L, 1188L) */ ((
										var_1_11
									) / (
										var_1_13
									))
								) / (
									31.9f
								))
							))
						) ? (
							/* 433L, 113L, 627L, 648L, 1192L) */ ((
								/* 434L, 93L, 97L, 628L, 649L, 1193L) */ ((
									var_1_14
								) > (
									var_1_4
								))
							) ? (
								/* 437L, 103L, 631L, 652L, 1196L) */ ((
									var_1_12
								) == (
									/* 437L, 103L, 631L, 652L, 1196L) */ ((float) (
										var_1_11
									))
								))
							) : (
								/* 441L, 111L, 635L, 656L, 1200L) */ ((
									var_1_12
								) == (
									/* 441L, 111L, 635L, 656L, 1200L) */ ((float) (
										3.125f
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 446L, 184L, 737L, 775L, 1205L) */ ((
						/* 447L, 124L, 130L, 738L, 776L, 1206L) */ ((
							/* 448L, 122L, 131L, 739L, 777L, 1207L) */ ((
								var_1_15
							) - (
								var_1_16
							))
						) > (
							var_1_13
						))
					) ? (
						/* 452L, 172L, 743L, 781L, 1211L) */ ((
							/* 453L, 142L, 151L, 744L, 782L, 1212L) */ ((
								/* 454L, 137L, 152L, 745L, 783L, 1213L) */ (min (
									/* 454L, 137L, 152L, 745L, 783L, 1213L) */ (
										var_1_20
									) , (
										var_1_9
									)
								))
							) <= (
								/* 457L, 141L, 155L, 748L, 786L, 1216L) */ (max (
									/* 457L, 141L, 155L, 748L, 786L, 1216L) */ (
										var_1_19
									) , (
										/* 459L, 140L, 157L, 750L, 788L, 1218L) */ (abs (
											var_1_4
										))
									)
								))
							))
						) ? (
							/* 461L, 164L, 752L, 790L, 1220L) */ ((
								var_1_14
							) == (
								/* 461L, 164L, 752L, 790L, 1220L) */ ((unsigned long int) (
									/* 464L, 163L, 755L, 793L, 1223L) */ ((
										var_1_20
									) + (
										var_1_9
									))
								))
							))
						) : (
							/* 467L, 170L, 758L, 796L, 1226L) */ ((
								var_1_14
							) == (
								/* 467L, 170L, 758L, 796L, 1226L) */ ((unsigned long int) (
									/* 470L, 169L, 761L, 799L, 1229L) */ ((
										var_1_5
									) + (
										var_1_9
									))
								))
							))
						))
					) : (
						/* 473L, 182L, 764L, 802L, 1232L) */ ((
							var_1_14
						) == (
							/* 473L, 182L, 764L, 802L, 1232L) */ ((unsigned long int) (
								/* 476L, 181L, 767L, 805L, 1235L) */ ((
									3919152995u
								) - (
									/* 478L, 180L, 769L, 807L, 1237L) */ ((
										/* 479L, 178L, 770L, 808L, 1238L) */ (min (
											/* 479L, 178L, 770L, 808L, 1238L) */ (
												var_1_17
											) , (
												var_1_18
											)
										))
									) - (
										var_1_20
									))
								))
							))
						))
					))
				))
			) && (
				/* 484L, 202L, 833L, 843L, 1243L) */ ((
					/* 485L, 190L, 193L, 834L, 844L, 1244L) */ (! (
						var_1_21
					))
				) ? (
					/* 487L, 200L, 836L, 846L, 1246L) */ ((
						var_1_19
					) == (
						/* 487L, 200L, 836L, 846L, 1246L) */ ((signed long int) (
							/* 490L, 199L, 839L, 849L, 1249L) */ ((
								var_1_5
							) + (
								256
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 496L, 225L, 887L, 903L, 1255L) */ ((
				/* 497L, 209L, 213L, 888L, 904L, 1256L) */ ((
					var_1_9
				) == (
					var_1_5
				))
			) ? (
				/* 500L, 223L, 891L, 907L, 1259L) */ ((
					var_1_20
				) == (
					/* 500L, 223L, 891L, 907L, 1259L) */ ((signed long int) (
						/* 503L, 222L, 894L, 910L, 1262L) */ (max (
							/* 503L, 222L, 894L, 910L, 1262L) */ (
								var_1_4
							) , (
								/* 505L, 221L, 896L, 912L, 1264L) */ ((
									last_1_var_1_20
								) + (
									-8
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
		/* 514L, 242L, 949L, 963L, 1273L) */ ((
			var_1_21
		) == (
			/* 514L, 242L, 949L, 963L, 1273L) */ ((unsigned char) (
				/* 517L, 241L, 952L, 966L, 1276L) */ (! (
					/* 518L, 240L, 953L, 967L, 1277L) */ ((
						var_1_22
					) || (
						/* 520L, 239L, 955L, 969L, 1279L) */ ((
							var_1_23
						) || (
							var_1_24
						))
					))
				))
			))
		))
	))
) && (
	/* 525L, 258L, 986L, 992L, 1284L) */ ((
		var_1_25
	) == (
		/* 525L, 258L, 986L, 992L, 1284L) */ ((unsigned short int) (
			16
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
