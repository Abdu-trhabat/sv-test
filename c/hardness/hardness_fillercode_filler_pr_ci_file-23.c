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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch23Filler_PR_CI.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
float var_1_4 = 1.4;
double var_1_5 = 3.6;
double var_1_6 = 10.6;
float var_1_7 = 9.25;
float var_1_8 = 1.2;
float var_1_9 = 0.0;
float var_1_10 = 3.1;
float var_1_11 = 500.5;
signed long int var_1_12 = 0;
unsigned char var_1_13 = 10;
unsigned char var_1_14 = 8;
signed long int var_1_16 = -25;
unsigned char var_1_17 = 64;
unsigned long int var_1_18 = 25;
signed char var_1_19 = -100;
signed short int var_1_20 = -4;
unsigned short int var_1_21 = 200;
unsigned short int var_1_22 = 54878;
signed long int var_1_23 = 128;
double var_1_24 = 9999.8;
float var_1_25 = 7.4;
signed char var_1_26 = 100;
unsigned long int var_1_28 = 500;
unsigned long int var_1_29 = 4;
unsigned long int var_1_30 = 8;
unsigned char var_1_36 = 32;
unsigned char var_1_39 = 64;
unsigned char var_1_40 = 16;
unsigned short int var_1_42 = 8;
signed char var_1_43 = -16;
double var_1_44 = 127.625;
unsigned char var_1_46 = 128;
unsigned short int var_1_47 = 64;
signed char var_1_49 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch23Filler_PR_CI
	/* 902L, 9L, 276L, 283L) */ if (var_1_2) {
		/* 904L, 8L, 278L, 285L) */ var_1_1 = (
			var_1_3
		);
	}


	// From: CodeObject1
	/* 285L, 72L) */ if (/* 286L, 4L, 5L) */ ((var_1_6) < (256.5))) {
		/* 289L, 70L) */ if (/* 290L, 19L, 20L) */ ((/* 291L, 15L, 21L) */ ((/* 292L, 13L, 22L) */ (max (/* 292L, 13L, 22L) */ (var_1_28) , (var_1_29)))) > (var_1_30))) && (/* 296L, 18L, 26L) */ ((var_1_6) < (var_1_5))))) {
			/* 299L, 43L) */ var_1_26 = (
				/* 302L, 42L) */ (max (
					/* 302L, 42L) */ (
						var_1_17
					) , (
						var_1_13
					)
				))
			);
		} else {
			/* 305L, 68L) */ if (/* 306L, 48L, 49L) */ ((/* 307L, 46L, 50L) */ ((var_1_30) < (var_1_29))) && (var_1_1))) {
				/* 311L, 62L) */ var_1_26 = (
					var_1_17
				);
			} else {
				/* 315L, 67L) */ var_1_26 = (
					/* 318L, 66L) */ (abs (
						var_1_13
					))
				);
			}
		}
	}


	// From: Req2Batch23Filler_PR_CI
	unsigned char stepLocal_0 = /* 910L, 17L, 21L, 352L, 375L) */ ((var_1_5) <= (var_1_6));
	/* 932L, 46L, 350L, 373L) */ if (/* 915L, 19L, 20L, 351L, 374L) */ ((stepLocal_0) || (var_1_1))) {
		/* 923L, 37L, 356L, 379L) */ var_1_4 = (
			/* 922L, 36L, 359L, 382L) */ (max (
				/* 922L, 36L, 359L, 382L) */ (
					31.5f
				) , (
					/* 921L, 35L, 361L, 384L) */ (min (
						/* 921L, 35L, 361L, 384L) */ (
							var_1_7
						) , (
							var_1_8
						)
					))
				)
			))
		);
	} else {
		/* 931L, 45L, 364L, 387L) */ var_1_4 = (
			/* 930L, 44L, 367L, 390L) */ ((
				/* 928L, 42L, 368L, 391L) */ ((
					var_1_9
				) - (
					var_1_10
				))
			) - (
				var_1_11
			))
		);
	}


	// From: Req6Batch23Filler_PR_CI
	signed long int stepLocal_4 = 5;
	/* 1043L, 242L, 738L, 761L) */ if (/* 1024L, 207L, 208L, 739L, 762L) */ ((stepLocal_4) <= (var_1_17))) {
		/* 1030L, 219L, 742L, 765L) */ var_1_21 = (
			/* 1029L, 218L, 745L, 768L) */ ((
				var_1_22
			) - (
				var_1_17
			))
		);
	} else {
		/* 1042L, 240L, 748L, 771L) */ if (var_1_1) {
			/* 1041L, 238L, 750L, 773L) */ if (var_1_1) {
				/* 1036L, 229L, 752L, 775L) */ var_1_21 = (
					var_1_17
				);
			} else {
				/* 1040L, 237L, 756L, 779L) */ var_1_21 = (
					var_1_14
				);
			}
		}
	}


	// From: Req7Batch23Filler_PR_CI
	/* 1048L, 251L, 831L, 837L) */ var_1_23 = (
		var_1_13
	);


	// From: CodeObject2
	/* 320L, 103L) */ if (/* 321L, 80L, 81L) */ ((/* 322L, 78L, 82L) */ ((var_1_10) - (var_1_11))) > (var_1_5))) {
		/* 326L, 98L) */ var_1_36 = (
			/* 329L, 97L) */ ((
				/* 330L, 95L) */ ((
					var_1_39
				) - (
					var_1_40
				))
			) + (
				var_1_17
			))
		);
	} else {
		/* 334L, 102L) */ var_1_36 = (
			var_1_40
		);
	}


	// From: CodeObject3
	/* 338L, 114L) */ if (var_1_2) {
		/* 340L, 113L) */ var_1_42 = (
			256
		);
	}


	// From: CodeObject5
	/* 374L, 189L) */ var_1_46 = (
		var_1_40
	);


	// From: Req8Batch23Filler_PR_CI
	/* 1054L, 261L, 855L, 861L) */ var_1_24 = (
		var_1_7
	);


	// From: Req9Batch23Filler_PR_CI
	/* 1060L, 271L, 879L, 885L) */ var_1_25 = (
		var_1_7
	);


	// From: Req3Batch23Filler_PR_CI
	signed long int stepLocal_3 = var_1_23;
	unsigned char stepLocal_2 = var_1_13;
	signed long int stepLocal_1 = var_1_23;
	/* 981L, 127L, 442L, 483L) */ if (/* 950L, 58L, 59L, 443L, 484L) */ ((/* 949L, 56L, 60L, 444L, 485L) */ ((/* 947L, 54L, 61L, 445L, 486L) */ ((200) - (var_1_13))) - (var_1_14))) != (stepLocal_1))) {
		/* 958L, 80L, 450L, 491L) */ var_1_12 = (
			/* 957L, 79L, 453L, 494L) */ ((
				var_1_13
			) + (
				/* 956L, 78L, 455L, 496L) */ (min (
					/* 956L, 78L, 455L, 496L) */ (
						var_1_14
					) , (
						var_1_16
					)
				))
			))
		);
	} else {
		/* 980L, 125L, 458L, 499L) */ if (/* 964L, 87L, 88L, 459L, 500L) */ ((/* 963L, 85L, 89L, 460L, 501L) */ ((var_1_23) / (/* 962L, 84L, 91L, 462L, 503L) */ ((128) - (var_1_17))))) < (stepLocal_2))) {
			/* 975L, 119L, 466L, 507L) */ if (/* 966L, 104L, 105L, 467L, 508L) */ ((var_1_13) >= (stepLocal_3))) {
				/* 970L, 114L, 470L, 511L) */ var_1_12 = (
					var_1_14
				);
			} else {
				/* 974L, 118L, 474L, 515L) */ var_1_12 = (
					var_1_17
				);
			}
		} else {
			/* 979L, 124L, 478L, 519L) */ var_1_12 = (
				var_1_17
			);
		}
	}


	// From: CodeObject4
	/* 344L, 182L) */ if (/* 345L, 126L, 127L) */ ((/* 346L, 122L, 128L) */ ((/* 347L, 120L, 129L) */ (max (/* 347L, 120L, 129L) */ (var_1_5) , (var_1_11)))) / (var_1_44))) > (/* 351L, 125L, 133L) */ (min (/* 351L, 125L, 133L) */ (var_1_5) , (var_1_9)))))) {
		/* 354L, 180L) */ if (/* 355L, 149L, 150L) */ ((/* 356L, 147L, 151L) */ ((-5) < (var_1_13))) && (var_1_2))) {
			/* 360L, 178L) */ if (/* 361L, 162L, 163L) */ ((var_1_17) >= (var_1_39))) {
				/* 364L, 173L) */ var_1_43 = (
					/* 367L, 172L) */ (abs (
						var_1_17
					))
				);
			} else {
				/* 369L, 177L) */ var_1_43 = (
					var_1_17
				);
			}
		}
	}


	// From: CodeObject7
	/* 405L, 247L) */ var_1_49 = (
		var_1_17
	);


	// From: Req4Batch23Filler_PR_CI
	/* 988L, 155L, 607L, 620L) */ if (/* 989L, 138L, 139L, 608L, 621L) */ ((/* 990L, 136L, 140L, 609L, 622L) */ (- (/* 991L, 135L, 141L, 610L, 623L) */ ((var_1_13) / (var_1_17))))) > (var_1_23))) {
		/* 995L, 154L, 614L, 627L) */ var_1_18 = (
			var_1_13
		);
	}


	// From: CodeObject6
	/* 378L, 240L) */ if (/* 379L, 198L, 199L) */ ((var_1_13) < (/* 381L, 197L, 201L) */ (max (/* 381L, 197L, 201L) */ (var_1_40) , (var_1_13)))))) {
		/* 384L, 230L) */ if (/* 385L, 213L, 214L) */ ((var_1_2) || (/* 387L, 212L, 216L) */ ((128.5) <= (var_1_6))))) {
			/* 390L, 229L) */ var_1_47 = (
				/* 393L, 228L) */ ((
					var_1_22
				) - (
					var_1_39
				))
			);
		}
	} else {
		/* 396L, 239L) */ var_1_47 = (
			/* 399L, 238L) */ (max (
				/* 399L, 238L) */ (
					/* 400L, 236L) */ (max (
						/* 400L, 236L) */ (
							var_1_23
						) , (
							var_1_39
						)
					))
				) , (
					var_1_13
				)
			))
		);
	}


	// From: Req5Batch23Filler_PR_CI
	/* 1001L, 197L, 659L, 679L) */ if (/* 1002L, 172L, 173L, 660L, 680L) */ ((/* 1003L, 170L, 174L, 661L, 681L) */ ((var_1_16) / (/* 1005L, 169L, 176L, 663L, 683L) */ (min (/* 1005L, 169L, 176L, 663L, 683L) */ (var_1_17) , (var_1_20)))))) > (var_1_18))) {
		/* 1009L, 192L, 667L, 687L) */ var_1_19 = (
			/* 1012L, 191L, 670L, 690L) */ (max (
				/* 1012L, 191L, 670L, 690L) */ (
					var_1_17
				) , (
					var_1_13
				)
			))
		);
	} else {
		/* 1015L, 196L, 673L, 693L) */ var_1_19 = (
			var_1_17
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 0);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 4611686.018427383000e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 64);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -1073741823);
	assume_abort_if_not(var_1_16 <= 1073741823);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 126);
	assume_abort_if_not(var_1_17 != 127);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -32768);
	assume_abort_if_not(var_1_20 <= 32767);
	assume_abort_if_not(var_1_20 != 0);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 32767);
	assume_abort_if_not(var_1_22 <= 65534);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 4294967295);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967295);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967295);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 63);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	assume_abort_if_not(var_1_44 != 0.0F);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_2) {
	}
	if (/* 417L, 19L, 25L, 397L, 420L, 1073L) */ ((/* 418L, 17L, 26L, 398L, 421L, 1074L) */ ((var_1_5) <= (var_1_6))) || (var_1_1))) {
	} else {
	}
	if (/* 440L, 58L, 66L, 525L, 566L, 1096L) */ ((/* 441L, 56L, 67L, 526L, 567L, 1097L) */ ((/* 442L, 54L, 68L, 527L, 568L, 1098L) */ ((200) - (var_1_13))) - (var_1_14))) != (var_1_23))) {
	} else {
		if (/* 456L, 87L, 95L, 541L, 582L, 1112L) */ ((/* 457L, 85L, 96L, 542L, 583L, 1113L) */ ((var_1_23) / (/* 459L, 84L, 98L, 544L, 585L, 1115L) */ ((128) - (var_1_17))))) < (var_1_13))) {
			if (/* 464L, 104L, 108L, 549L, 590L, 1120L) */ ((var_1_13) >= (var_1_23))) {
			} else {
			}
		} else {
		}
	}
	if (/* 482L, 138L, 145L, 634L, 647L, 1138L) */ ((/* 483L, 136L, 146L, 635L, 648L, 1139L) */ (- (/* 484L, 135L, 147L, 636L, 649L, 1140L) */ ((var_1_13) / (var_1_17))))) > (var_1_23))) {
	}
	if (/* 495L, 172L, 180L, 700L, 720L, 1151L) */ ((/* 496L, 170L, 181L, 701L, 721L, 1152L) */ ((var_1_16) / (/* 498L, 169L, 183L, 703L, 723L, 1154L) */ (min (/* 498L, 169L, 183L, 703L, 723L, 1154L) */ (var_1_17) , (var_1_20)))))) > (var_1_18))) {
	} else {
	}
	if (/* 514L, 207L, 211L, 785L, 808L, 1170L) */ ((5) <= (var_1_17))) {
	} else {
		if (var_1_1) {
			if (var_1_1) {
			} else {
			}
		}
	}
	return /* 561L) */ ((
	/* 560L) */ ((
		/* 559L) */ ((
			/* 558L) */ ((
				/* 557L) */ ((
					/* 556L) */ ((
						/* 555L) */ ((
							/* 554L) */ ((
								/* 409L, 10L, 290L, 297L, 1065L) */ ((
									var_1_2
								) ? (
									/* 411L, 8L, 292L, 299L, 1067L) */ ((
										var_1_1
									) == (
										/* 411L, 8L, 292L, 299L, 1067L) */ ((unsigned char) (
											var_1_3
										))
									))
								) : (
									1
								))
							) && (
								/* 416L, 47L, 396L, 419L, 1072L) */ ((
									/* 417L, 19L, 25L, 397L, 420L, 1073L) */ ((
										/* 418L, 17L, 26L, 398L, 421L, 1074L) */ ((
											var_1_5
										) <= (
											var_1_6
										))
									) || (
										var_1_1
									))
								) ? (
									/* 422L, 37L, 402L, 425L, 1078L) */ ((
										var_1_4
									) == (
										/* 422L, 37L, 402L, 425L, 1078L) */ ((float) (
											/* 425L, 36L, 405L, 428L, 1081L) */ (max (
												/* 425L, 36L, 405L, 428L, 1081L) */ (
													31.5f
												) , (
													/* 427L, 35L, 407L, 430L, 1083L) */ (min (
														/* 427L, 35L, 407L, 430L, 1083L) */ (
															var_1_7
														) , (
															var_1_8
														)
													))
												)
											))
										))
									))
								) : (
									/* 430L, 45L, 410L, 433L, 1086L) */ ((
										var_1_4
									) == (
										/* 430L, 45L, 410L, 433L, 1086L) */ ((float) (
											/* 433L, 44L, 413L, 436L, 1089L) */ ((
												/* 434L, 42L, 414L, 437L, 1090L) */ ((
													var_1_9
												) - (
													var_1_10
												))
											) - (
												var_1_11
											))
										))
									))
								))
							))
						) && (
							/* 439L, 128L, 524L, 565L, 1095L) */ ((
								/* 440L, 58L, 66L, 525L, 566L, 1096L) */ ((
									/* 441L, 56L, 67L, 526L, 567L, 1097L) */ ((
										/* 442L, 54L, 68L, 527L, 568L, 1098L) */ ((
											200
										) - (
											var_1_13
										))
									) - (
										var_1_14
									))
								) != (
									var_1_23
								))
							) ? (
								/* 447L, 80L, 532L, 573L, 1103L) */ ((
									var_1_12
								) == (
									/* 447L, 80L, 532L, 573L, 1103L) */ ((signed long int) (
										/* 450L, 79L, 535L, 576L, 1106L) */ ((
											var_1_13
										) + (
											/* 452L, 78L, 537L, 578L, 1108L) */ (min (
												/* 452L, 78L, 537L, 578L, 1108L) */ (
													var_1_14
												) , (
													var_1_16
												)
											))
										))
									))
								))
							) : (
								/* 455L, 126L, 540L, 581L, 1111L) */ ((
									/* 456L, 87L, 95L, 541L, 582L, 1112L) */ ((
										/* 457L, 85L, 96L, 542L, 583L, 1113L) */ ((
											var_1_23
										) / (
											/* 459L, 84L, 98L, 544L, 585L, 1115L) */ ((
												128
											) - (
												var_1_17
											))
										))
									) < (
										var_1_13
									))
								) ? (
									/* 463L, 120L, 548L, 589L, 1119L) */ ((
										/* 464L, 104L, 108L, 549L, 590L, 1120L) */ ((
											var_1_13
										) >= (
											var_1_23
										))
									) ? (
										/* 467L, 114L, 552L, 593L, 1123L) */ ((
											var_1_12
										) == (
											/* 467L, 114L, 552L, 593L, 1123L) */ ((signed long int) (
												var_1_14
											))
										))
									) : (
										/* 471L, 118L, 556L, 597L, 1127L) */ ((
											var_1_12
										) == (
											/* 471L, 118L, 556L, 597L, 1127L) */ ((signed long int) (
												var_1_17
											))
										))
									))
								) : (
									/* 475L, 124L, 560L, 601L, 1131L) */ ((
										var_1_12
									) == (
										/* 475L, 124L, 560L, 601L, 1131L) */ ((signed long int) (
											var_1_17
										))
									))
								))
							))
						))
					) && (
						/* 481L, 156L, 633L, 646L, 1137L) */ ((
							/* 482L, 138L, 145L, 634L, 647L, 1138L) */ ((
								/* 483L, 136L, 146L, 635L, 648L, 1139L) */ (- (
									/* 484L, 135L, 147L, 636L, 649L, 1140L) */ ((
										var_1_13
									) / (
										var_1_17
									))
								))
							) > (
								var_1_23
							))
						) ? (
							/* 488L, 154L, 640L, 653L, 1144L) */ ((
								var_1_18
							) == (
								/* 488L, 154L, 640L, 653L, 1144L) */ ((unsigned long int) (
									var_1_13
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 494L, 198L, 699L, 719L, 1150L) */ ((
						/* 495L, 172L, 180L, 700L, 720L, 1151L) */ ((
							/* 496L, 170L, 181L, 701L, 721L, 1152L) */ ((
								var_1_16
							) / (
								/* 498L, 169L, 183L, 703L, 723L, 1154L) */ (min (
									/* 498L, 169L, 183L, 703L, 723L, 1154L) */ (
										var_1_17
									) , (
										var_1_20
									)
								))
							))
						) > (
							var_1_18
						))
					) ? (
						/* 502L, 192L, 707L, 727L, 1158L) */ ((
							var_1_19
						) == (
							/* 502L, 192L, 707L, 727L, 1158L) */ ((signed char) (
								/* 505L, 191L, 710L, 730L, 1161L) */ (max (
									/* 505L, 191L, 710L, 730L, 1161L) */ (
										var_1_17
									) , (
										var_1_13
									)
								))
							))
						))
					) : (
						/* 508L, 196L, 713L, 733L, 1164L) */ ((
							var_1_19
						) == (
							/* 508L, 196L, 713L, 733L, 1164L) */ ((signed char) (
								var_1_17
							))
						))
					))
				))
			) && (
				/* 513L, 243L, 784L, 807L, 1169L) */ ((
					/* 514L, 207L, 211L, 785L, 808L, 1170L) */ ((
						5
					) <= (
						var_1_17
					))
				) ? (
					/* 517L, 219L, 788L, 811L, 1173L) */ ((
						var_1_21
					) == (
						/* 517L, 219L, 788L, 811L, 1173L) */ ((unsigned short int) (
							/* 520L, 218L, 791L, 814L, 1176L) */ ((
								var_1_22
							) - (
								var_1_17
							))
						))
					))
				) : (
					/* 523L, 241L, 794L, 817L, 1179L) */ ((
						var_1_1
					) ? (
						/* 525L, 239L, 796L, 819L, 1181L) */ ((
							var_1_1
						) ? (
							/* 527L, 229L, 798L, 821L, 1183L) */ ((
								var_1_21
							) == (
								/* 527L, 229L, 798L, 821L, 1183L) */ ((unsigned short int) (
									var_1_17
								))
							))
						) : (
							/* 531L, 237L, 802L, 825L, 1187L) */ ((
								var_1_21
							) == (
								/* 531L, 237L, 802L, 825L, 1187L) */ ((unsigned short int) (
									var_1_14
								))
							))
						))
					) : (
						1
					))
				))
			))
		) && (
			/* 537L, 251L, 843L, 849L, 1193L) */ ((
				var_1_23
			) == (
				/* 537L, 251L, 843L, 849L, 1193L) */ ((signed long int) (
					var_1_13
				))
			))
		))
	) && (
		/* 543L, 261L, 867L, 873L, 1199L) */ ((
			var_1_24
		) == (
			/* 543L, 261L, 867L, 873L, 1199L) */ ((double) (
				var_1_7
			))
		))
	))
) && (
	/* 549L, 271L, 891L, 897L, 1205L) */ ((
		var_1_25
	) == (
		/* 549L, 271L, 891L, 897L, 1205L) */ ((float) (
			var_1_7
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
