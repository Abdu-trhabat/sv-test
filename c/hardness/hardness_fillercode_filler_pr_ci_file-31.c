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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch31Filler_PR_CI.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 2;
unsigned char var_1_3 = 5;
unsigned char var_1_4 = 50;
unsigned char var_1_5 = 64;
unsigned char var_1_6 = 64;
unsigned char var_1_7 = 2;
unsigned char var_1_8 = 8;
unsigned long int var_1_9 = 1;
signed char var_1_10 = 4;
signed char var_1_11 = 50;
signed char var_1_12 = 5;
signed char var_1_13 = 16;
signed char var_1_14 = 5;
signed char var_1_15 = 4;
unsigned char var_1_16 = 128;
unsigned short int var_1_17 = 10;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 1;
float var_1_22 = 8.625;
float var_1_23 = 16.5;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
float var_1_27 = 2.5;
float var_1_28 = 7.7;
signed short int var_1_29 = -256;
signed short int var_1_30 = 100;
signed short int var_1_32 = 64;
unsigned short int var_1_33 = 0;
float var_1_34 = 8.6;
signed short int var_1_35 = 128;
signed long int var_1_36 = 2082478446;
unsigned char var_1_37 = 1;
double var_1_38 = 4.4;
float var_1_40 = 8.75;
float var_1_41 = 1000000000000.75;
float var_1_42 = 9999999999.9;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 8;
unsigned char last_1_var_1_18 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch31Filler_PR_CI
	/* 24L, 80L, 396L, 420L, 903L, 966L) */ if (/* 5L, 50L, 51L, 397L, 421L, 884L, 967L) */ ((/* 3L, 48L, 52L, 398L, 422L, 882L, 968L) */ ((last_1_var_1_8) * (var_1_7))) >= (var_1_3))) {
		/* 11L, 66L, 402L, 426L, 890L, 973L) */ var_1_9 = (
			/* 10L, 65L, 405L, 429L, 889L, 976L) */ ((
				5u
			) + (
				var_1_4
			))
		);
	} else {
		/* 23L, 78L, 408L, 432L, 902L, 979L) */ if (last_1_var_1_18) {
			/* 17L, 73L, 410L, 434L, 896L, 982L) */ var_1_9 = (
				var_1_4
			);
		} else {
			/* 22L, 77L, 414L, 438L, 901L, 986L) */ var_1_9 = (
				last_1_var_1_8
			);
		}
	}


	// From: Req7Batch31Filler_PR_CI
	signed char stepLocal_2 = var_1_12;
	/* 1096L, 263L, 791L, 813L) */ if (/* 1080L, 230L, 231L, 792L, 814L) */ ((stepLocal_2) <= (/* 1079L, 229L, 233L, 794L, 816L) */ ((var_1_9) / (64))))) {
		/* 1085L, 245L, 797L, 819L) */ var_1_18 = (
			/* 1084L, 244L, 800L, 822L) */ (! (
				var_1_19
			))
		);
	} else {
		/* 1095L, 261L, 802L, 824L) */ if (var_1_19) {
			/* 1090L, 252L, 804L, 826L) */ var_1_18 = (
				var_1_20
			);
		} else {
			/* 1094L, 260L, 808L, 830L) */ var_1_18 = (
				0
			);
		}
	}


	// From: CodeObject3
	/* 367L, 150L) */ var_1_32 = (
		-128
	);


	// From: Req1Batch31Filler_PR_CI
	/* 934L, 20L, 268L, 287L) */ if (var_1_18) {
		/* 936L, 11L, 270L, 289L) */ var_1_1 = (
			/* 939L, 10L, 273L, 292L) */ (max (
				/* 939L, 10L, 273L, 292L) */ (
					/* 940L, 8L, 274L, 293L) */ (abs (
						var_1_3
					))
				) , (
					var_1_4
				)
			))
		);
	} else {
		/* 943L, 19L, 277L, 296L) */ var_1_1 = (
			/* 946L, 18L, 280L, 299L) */ ((
				/* 947L, 16L, 281L, 300L) */ ((
					var_1_5
				) + (
					var_1_6
				))
			) - (
				var_1_7
			))
		);
	}


	// From: Req2Batch31Filler_PR_CI
	/* 954L, 37L, 345L, 358L) */ var_1_8 = (
		/* 957L, 36L, 348L, 361L) */ (min (
			/* 957L, 36L, 348L, 361L) */ (
				/* 958L, 34L, 349L, 362L) */ ((
					var_1_5
				) + (
					/* 960L, 33L, 351L, 364L) */ ((
						64
					) - (
						16
					))
				))
			) , (
				64
			)
		))
	);


	// From: CodeObject1
	/* 318L, 77L) */ if (/* 319L, 58L, 59L) */ ((var_1_22) <= (var_1_23))) {
		/* 322L, 72L) */ var_1_21 = (
			/* 325L, 71L) */ ((
				var_1_24
			) || (
				/* 327L, 70L) */ ((
					var_1_25
				) || (
					var_1_26
				))
			))
		);
	} else {
		/* 330L, 76L) */ var_1_21 = (
			var_1_26
		);
	}


	// From: CodeObject6
	/* 415L, 300L) */ if (/* 416L, 267L, 268L) */ ((/* 417L, 263L, 269L) */ ((var_1_41) - (var_1_42))) >= (/* 420L, 266L, 272L) */ (min (/* 420L, 266L, 272L) */ (var_1_38) , (var_1_28)))))) {
		/* 423L, 298L) */ if (/* 424L, 285L, 286L) */ (! (/* 425L, 284L, 287L) */ ((var_1_36) > (var_1_35))))) {
			/* 428L, 297L) */ var_1_40 = (
				var_1_28
			);
		}
	}


	// From: Req4Batch31Filler_PR_CI
	/* 994L, 135L, 493L, 527L) */ if (/* 995L, 92L, 93L, 494L, 528L) */ ((/* 996L, 90L, 94L, 495L, 529L) */ ((var_1_6) + (var_1_4))) >= (var_1_5))) {
		/* 1000L, 133L, 499L, 533L) */ if (/* 1001L, 105L, 106L, 500L, 534L) */ ((var_1_6) > (var_1_9))) {
			/* 1004L, 124L, 503L, 537L) */ var_1_10 = (
				/* 1007L, 123L, 506L, 540L) */ ((
					/* 1008L, 119L, 507L, 541L) */ ((
						/* 1009L, 115L, 508L, 542L) */ (abs (
							var_1_11
						))
					) + (
						/* 1011L, 118L, 510L, 544L) */ ((
							var_1_12
						) + (
							var_1_13
						))
					))
				) - (
					/* 1014L, 122L, 513L, 547L) */ (max (
						/* 1014L, 122L, 513L, 547L) */ (
							var_1_14
						) , (
							var_1_15
						)
					))
				))
			);
		} else {
			/* 1017L, 132L, 516L, 550L) */ var_1_10 = (
				/* 1020L, 131L, 519L, 553L) */ (max (
					/* 1020L, 131L, 519L, 553L) */ (
						/* 1021L, 129L, 520L, 554L) */ (min (
							/* 1021L, 129L, 520L, 554L) */ (
								var_1_14
							) , (
								var_1_12
							)
						))
					) , (
						var_1_15
					)
				))
			);
		}
	}


	// From: CodeObject4
	/* 371L, 215L) */ if (/* 372L, 159L, 160L) */ ((/* 373L, 157L, 161L) */ ((var_1_23) < (var_1_34))) || (var_1_20))) {
		/* 377L, 213L) */ if (/* 378L, 181L, 182L) */ ((/* 379L, 174L, 183L) */ ((var_1_9) / (/* 381L, 173L, 185L) */ (min (/* 381L, 173L, 185L) */ (-10) , (var_1_35)))))) >= (/* 384L, 180L, 188L) */ ((var_1_29) * (var_1_36))))) {
			/* 387L, 207L) */ if (var_1_20) {
				/* 389L, 206L) */ var_1_33 = (
					var_1_30
				);
			}
		} else {
			/* 393L, 212L) */ var_1_33 = (
				var_1_30
			);
		}
	}


	// From: Req5Batch31Filler_PR_CI
	signed long int stepLocal_1 = 16;
	unsigned char stepLocal_0 = /* 1027L, 150L, 154L, 629L, 655L) */ ((/* 1028L, 147L, 155L, 630L, 656L) */ ((-128) | (var_1_12))) >= (/* 1031L, 149L, 158L, 633L, 659L) */ (abs (var_1_4))));
	/* 1054L, 192L, 627L, 653L) */ if (/* 1038L, 152L, 153L, 628L, 654L) */ ((stepLocal_0) || (var_1_18))) {
		/* 1049L, 186L, 636L, 662L) */ if (/* 1040L, 171L, 172L, 637L, 663L) */ ((var_1_3) <= (stepLocal_1))) {
			/* 1044L, 181L, 640L, 666L) */ var_1_16 = (
				var_1_12
			);
		} else {
			/* 1048L, 185L, 644L, 670L) */ var_1_16 = (
				var_1_6
			);
		}
	} else {
		/* 1053L, 191L, 648L, 674L) */ var_1_16 = (
			var_1_12
		);
	}


	// From: CodeObject2
	/* 334L, 143L) */ if (/* 335L, 82L, 83L) */ (! (var_1_20))) {
		/* 337L, 92L) */ var_1_27 = (
			/* 340L, 91L) */ (min (
				/* 340L, 91L) */ (
					4.2f
				) , (
					var_1_28
				)
			))
		);
	} else {
		/* 343L, 141L) */ if (/* 344L, 95L, 96L) */ ((var_1_22) <= (var_1_23))) {
			/* 347L, 139L) */ if (/* 348L, 107L, 108L) */ ((/* 349L, 105L, 109L) */ ((/* 350L, 103L, 110L) */ (abs (var_1_29))) - (var_1_30))) < (var_1_9))) {
				/* 354L, 133L) */ if (/* 355L, 122L, 123L) */ ((var_1_9) < (var_1_30))) {
					/* 358L, 132L) */ var_1_27 = (
						var_1_28
					);
				}
			} else {
				/* 362L, 138L) */ var_1_27 = (
					var_1_28
				);
			}
		}
	}


	// From: Req6Batch31Filler_PR_CI
	/* 1069L, 201L, 741L, 756L) */ var_1_17 = (
		var_1_13
	);


	// From: CodeObject5
	/* 397L, 257L) */ if (/* 398L, 222L, 223L) */ ((var_1_22) <= (/* 400L, 221L, 225L) */ (abs (9.999999999994E11f))))) {
		/* 402L, 255L) */ if (/* 403L, 236L, 237L) */ ((/* 404L, 232L, 238L) */ (abs (63.8))) > (/* 406L, 235L, 240L) */ ((var_1_28) / (var_1_38))))) {
			/* 409L, 254L) */ var_1_37 = (
				/* 412L, 253L) */ (! (
					/* 413L, 252L) */ (! (
						var_1_19
					))
				))
			);
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 254);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 63);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 64);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 31);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854766000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32767);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= -32768);
	assume_abort_if_not(var_1_35 <= 32767);
	assume_abort_if_not(var_1_35 != 0);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= 1073741823);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	assume_abort_if_not(var_1_38 != 0.0F);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	if (var_1_18) {
	} else {
	}
	if (/* 466L, 50L, 56L, 445L, 469L, 911L, 1134L, 32L) */ ((/* 467L, 48L, 57L, 446L, 470L, 909L, 1135L, 30L) */ ((last_1_var_1_8) * (var_1_7))) >= (var_1_3))) {
	} else {
		if (last_1_var_1_18) {
		} else {
		}
	}
	if (/* 494L, 92L, 98L, 562L, 596L, 1162L) */ ((/* 495L, 90L, 99L, 563L, 597L, 1163L) */ ((var_1_6) + (var_1_4))) >= (var_1_5))) {
		if (/* 500L, 105L, 109L, 568L, 602L, 1168L) */ ((var_1_6) > (var_1_9))) {
		} else {
		}
	}
	if (/* 526L, 152L, 161L, 680L, 706L, 1194L) */ ((/* 527L, 150L, 162L, 681L, 707L, 1195L) */ ((/* 528L, 147L, 163L, 682L, 708L, 1196L) */ ((-128) | (var_1_12))) >= (/* 531L, 149L, 166L, 685L, 711L, 1199L) */ (abs (var_1_4))))) || (var_1_18))) {
		if (/* 535L, 171L, 175L, 689L, 715L, 1203L) */ ((var_1_3) <= (16))) {
		} else {
		}
	} else {
	}
	if (/* 567L, 230L, 236L, 836L, 858L, 1235L) */ ((var_1_12) <= (/* 569L, 229L, 238L, 838L, 860L, 1237L) */ ((var_1_9) / (64))))) {
	} else {
		if (var_1_19) {
		} else {
		}
	}
	return /* 593L) */ ((
	/* 592L) */ ((
		/* 591L) */ ((
			/* 590L) */ ((
				/* 589L) */ ((
					/* 588L) */ ((
						/* 433L, 21L, 306L, 325L, 1101L) */ ((
							var_1_18
						) ? (
							/* 435L, 11L, 308L, 327L, 1103L) */ ((
								var_1_1
							) == (
								/* 435L, 11L, 308L, 327L, 1103L) */ ((unsigned char) (
									/* 438L, 10L, 311L, 330L, 1106L) */ (max (
										/* 438L, 10L, 311L, 330L, 1106L) */ (
											/* 439L, 8L, 312L, 331L, 1107L) */ (abs (
												var_1_3
											))
										) , (
											var_1_4
										)
									))
								))
							))
						) : (
							/* 442L, 19L, 315L, 334L, 1110L) */ ((
								var_1_1
							) == (
								/* 442L, 19L, 315L, 334L, 1110L) */ ((unsigned char) (
									/* 445L, 18L, 318L, 337L, 1113L) */ ((
										/* 446L, 16L, 319L, 338L, 1114L) */ ((
											var_1_5
										) + (
											var_1_6
										))
									) - (
										var_1_7
									))
								))
							))
						))
					) && (
						/* 453L, 37L, 371L, 384L, 1121L) */ ((
							var_1_8
						) == (
							/* 453L, 37L, 371L, 384L, 1121L) */ ((unsigned char) (
								/* 456L, 36L, 374L, 387L, 1124L) */ (min (
									/* 456L, 36L, 374L, 387L, 1124L) */ (
										/* 457L, 34L, 375L, 388L, 1125L) */ ((
											var_1_5
										) + (
											/* 459L, 33L, 377L, 390L, 1127L) */ ((
												64
											) - (
												16
											))
										))
									) , (
										64
									)
								))
							))
						))
					))
				) && (
					/* 465L, 81L, 444L, 468L, 930L, 1133L, 51L) */ ((
						/* 466L, 50L, 56L, 445L, 469L, 911L, 1134L, 32L) */ ((
							/* 467L, 48L, 57L, 446L, 470L, 909L, 1135L, 30L) */ ((
								last_1_var_1_8
							) * (
								var_1_7
							))
						) >= (
							var_1_3
						))
					) ? (
						/* 472L, 66L, 450L, 474L, 917L, 1140L, 38L) */ ((
							var_1_9
						) == (
							/* 472L, 66L, 450L, 474L, 917L, 1140L, 38L) */ ((unsigned long int) (
								/* 475L, 65L, 453L, 477L, 916L, 1143L, 37L) */ ((
									5u
								) + (
									var_1_4
								))
							))
						))
					) : (
						/* 478L, 79L, 456L, 480L, 929L, 1146L, 50L) */ ((
							last_1_var_1_18
						) ? (
							/* 481L, 73L, 458L, 482L, 923L, 1149L, 44L) */ ((
								var_1_9
							) == (
								/* 481L, 73L, 458L, 482L, 923L, 1149L, 44L) */ ((unsigned long int) (
									var_1_4
								))
							))
						) : (
							/* 485L, 77L, 462L, 486L, 928L, 1153L, 49L) */ ((
								var_1_9
							) == (
								/* 485L, 77L, 462L, 486L, 928L, 1153L, 49L) */ ((unsigned long int) (
									last_1_var_1_8
								))
							))
						))
					))
				))
			) && (
				/* 493L, 136L, 561L, 595L, 1161L) */ ((
					/* 494L, 92L, 98L, 562L, 596L, 1162L) */ ((
						/* 495L, 90L, 99L, 563L, 597L, 1163L) */ ((
							var_1_6
						) + (
							var_1_4
						))
					) >= (
						var_1_5
					))
				) ? (
					/* 499L, 134L, 567L, 601L, 1167L) */ ((
						/* 500L, 105L, 109L, 568L, 602L, 1168L) */ ((
							var_1_6
						) > (
							var_1_9
						))
					) ? (
						/* 503L, 124L, 571L, 605L, 1171L) */ ((
							var_1_10
						) == (
							/* 503L, 124L, 571L, 605L, 1171L) */ ((signed char) (
								/* 506L, 123L, 574L, 608L, 1174L) */ ((
									/* 507L, 119L, 575L, 609L, 1175L) */ ((
										/* 508L, 115L, 576L, 610L, 1176L) */ (abs (
											var_1_11
										))
									) + (
										/* 510L, 118L, 578L, 612L, 1178L) */ ((
											var_1_12
										) + (
											var_1_13
										))
									))
								) - (
									/* 513L, 122L, 581L, 615L, 1181L) */ (max (
										/* 513L, 122L, 581L, 615L, 1181L) */ (
											var_1_14
										) , (
											var_1_15
										)
									))
								))
							))
						))
					) : (
						/* 516L, 132L, 584L, 618L, 1184L) */ ((
							var_1_10
						) == (
							/* 516L, 132L, 584L, 618L, 1184L) */ ((signed char) (
								/* 519L, 131L, 587L, 621L, 1187L) */ (max (
									/* 519L, 131L, 587L, 621L, 1187L) */ (
										/* 520L, 129L, 588L, 622L, 1188L) */ (min (
											/* 520L, 129L, 588L, 622L, 1188L) */ (
												var_1_14
											) , (
												var_1_12
											)
										))
									) , (
										var_1_15
									)
								))
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 525L, 193L, 679L, 705L, 1193L) */ ((
				/* 526L, 152L, 161L, 680L, 706L, 1194L) */ ((
					/* 527L, 150L, 162L, 681L, 707L, 1195L) */ ((
						/* 528L, 147L, 163L, 682L, 708L, 1196L) */ ((
							-128
						) | (
							var_1_12
						))
					) >= (
						/* 531L, 149L, 166L, 685L, 711L, 1199L) */ (abs (
							var_1_4
						))
					))
				) || (
					var_1_18
				))
			) ? (
				/* 534L, 187L, 688L, 714L, 1202L) */ ((
					/* 535L, 171L, 175L, 689L, 715L, 1203L) */ ((
						var_1_3
					) <= (
						16
					))
				) ? (
					/* 538L, 181L, 692L, 718L, 1206L) */ ((
						var_1_16
					) == (
						/* 538L, 181L, 692L, 718L, 1206L) */ ((unsigned char) (
							var_1_12
						))
					))
				) : (
					/* 542L, 185L, 696L, 722L, 1210L) */ ((
						var_1_16
					) == (
						/* 542L, 185L, 696L, 722L, 1210L) */ ((unsigned char) (
							var_1_6
						))
					))
				))
			) : (
				/* 546L, 191L, 700L, 726L, 1214L) */ ((
					var_1_16
				) == (
					/* 546L, 191L, 700L, 726L, 1214L) */ ((unsigned char) (
						var_1_12
					))
				))
			))
		))
	) && (
		/* 561L, 201L, 771L, 786L, 1229L) */ ((
			var_1_17
		) == (
			/* 561L, 201L, 771L, 786L, 1229L) */ ((unsigned short int) (
				var_1_13
			))
		))
	))
) && (
	/* 566L, 264L, 835L, 857L, 1234L) */ ((
		/* 567L, 230L, 236L, 836L, 858L, 1235L) */ ((
			var_1_12
		) <= (
			/* 569L, 229L, 238L, 838L, 860L, 1237L) */ ((
				var_1_9
			) / (
				64
			))
		))
	) ? (
		/* 572L, 245L, 841L, 863L, 1240L) */ ((
			var_1_18
		) == (
			/* 572L, 245L, 841L, 863L, 1240L) */ ((unsigned char) (
				/* 575L, 244L, 844L, 866L, 1243L) */ (! (
					var_1_19
				))
			))
		))
	) : (
		/* 577L, 262L, 846L, 868L, 1245L) */ ((
			var_1_19
		) ? (
			/* 579L, 252L, 848L, 870L, 1247L) */ ((
				var_1_18
			) == (
				/* 579L, 252L, 848L, 870L, 1247L) */ ((unsigned char) (
					var_1_20
				))
			))
		) : (
			/* 583L, 260L, 852L, 874L, 1251L) */ ((
				var_1_18
			) == (
				/* 583L, 260L, 852L, 874L, 1251L) */ ((unsigned char) (
					0
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
