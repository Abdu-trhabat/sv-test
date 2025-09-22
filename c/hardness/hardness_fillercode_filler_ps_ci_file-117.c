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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch117Filler_PS_CI.c", 13, "reach_error"); }
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
signed short int var_1_1 = -32;
unsigned long int var_1_2 = 500;
unsigned long int var_1_3 = 16;
unsigned long int var_1_4 = 8;
unsigned long int var_1_5 = 1000;
signed short int var_1_6 = 19907;
signed short int var_1_7 = 0;
signed short int var_1_8 = 16753;
signed short int var_1_9 = 5;
float var_1_10 = 2.1;
unsigned short int var_1_11 = 5;
float var_1_12 = -0.7;
signed char var_1_13 = -1;
signed char var_1_14 = 64;
signed char var_1_15 = -2;
double var_1_16 = 32.75;
double var_1_18 = 50.7;
unsigned char var_1_19 = 0;
double var_1_20 = 1.8;
double var_1_21 = 4.5;
double var_1_22 = 10.275;
double var_1_23 = 15.5;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 200;
unsigned long int var_1_26 = 2;
unsigned long int var_1_27 = 2857710080;
unsigned char var_1_28 = 0;
unsigned char var_1_33 = 1;
signed char var_1_34 = -1;
signed char var_1_36 = 32;
unsigned short int var_1_38 = 1;
unsigned short int var_1_39 = 50124;
unsigned short int var_1_40 = 16478;
signed short int var_1_42 = 1000;
signed long int var_1_45 = -50;
signed long int var_1_46 = 4;
signed short int var_1_47 = 16;
signed short int var_1_48 = 2;
unsigned long int var_1_49 = 16;
double var_1_50 = -0.4;
signed char var_1_51 = 100;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 236L, 32L) */ if (/* 237L, 11L, 12L) */ ((/* 238L, 9L, 13L) */ ((var_1_4) * (var_1_3))) <= (var_1_11))) {
		/* 242L, 30L) */ if (var_1_19) {
			/* 244L, 29L) */ var_1_28 = (
				/* 247L, 28L) */ (! (
					var_1_33
				))
			);
		}
	}


	// From: CodeObject2
	/* 251L, 58L) */ if (/* 252L, 42L, 43L) */ ((var_1_4) > (var_1_3))) {
		/* 255L, 57L) */ var_1_34 = (
			/* 258L, 56L) */ (max (
				/* 258L, 56L) */ (
					/* 259L, 54L) */ (min (
						/* 259L, 54L) */ (
							var_1_11
						) , (
							/* 261L, 53L) */ (abs (
								var_1_11
							))
						)
					))
				) , (
					var_1_25
				)
			))
		);
	}


	// From: CodeObject3
	/* 265L, 74L) */ var_1_38 = (
		/* 268L, 73L) */ ((
			var_1_39
		) - (
			/* 270L, 72L) */ (abs (
				/* 271L, 71L) */ ((
					var_1_40
				) - (
					var_1_11
				))
			))
		))
	);


	// From: CodeObject4
	/* 274L, 111L) */ if (/* 275L, 81L, 82L) */ ((var_1_11) != (var_1_40))) {
		/* 278L, 92L) */ var_1_42 = (
			/* 281L, 91L) */ (abs (
				var_1_11
			))
		);
	} else {
		/* 283L, 109L) */ if (var_1_33) {
			/* 285L, 104L) */ var_1_42 = (
				/* 288L, 103L) */ (abs (
					/* 289L, 102L) */ ((
						var_1_11
					) - (
						/* 291L, 101L) */ ((
							var_1_8
						) - (
							var_1_7
						))
					))
				))
			);
		} else {
			/* 294L, 108L) */ var_1_42 = (
				var_1_25
			);
		}
	}


	// From: CodeObject5
	/* 328L, 135L) */ if (/* 329L, 117L, 118L) */ ((var_1_39) >= (var_1_5))) {
		/* 332L, 128L) */ var_1_45 = (
			/* 335L, 127L) */ (abs (
				var_1_36
			))
		);
	} else {
		/* 337L, 134L) */ var_1_45 = (
			/* 340L, 133L) */ ((
				var_1_36
			) + (
				var_1_14
			))
		);
	}


	// From: CodeObject6
	/* 343L, 193L) */ if (/* 344L, 146L, 147L) */ ((/* 345L, 143L, 148L) */ ((/* 346L, 141L, 149L) */ ((var_1_40) - (var_1_11))) << (var_1_3))) <= (/* 350L, 145L, 153L) */ (~ (var_1_25))))) {
		/* 352L, 191L) */ if (/* 353L, 170L, 171L) */ ((/* 354L, 168L, 172L) */ ((/* 355L, 164L, 173L) */ (abs (16))) >> (/* 357L, 167L, 175L) */ ((var_1_47) - (var_1_48))))) <= (var_1_3))) {
			/* 361L, 190L) */ var_1_46 = (
				var_1_14
			);
		}
	}


	// From: CodeObject7
	/* 365L, 205L) */ if (var_1_19) {
		/* 367L, 204L) */ var_1_49 = (
			/* 370L, 203L) */ (abs (
				var_1_11
			))
		);
	}


	// From: CodeObject8
	/* 372L, 234L) */ if (/* 373L, 215L, 216L) */ ((var_1_11) > (/* 375L, 214L, 218L) */ ((var_1_48) - (/* 377L, 213L, 220L) */ ((var_1_51) - (10))))))) {
		/* 380L, 233L) */ var_1_50 = (
			var_1_20
		);
	}


	// From: Req1Batch117Filler_PS_CI
	unsigned long int stepLocal_0 = /* 808L, 6L, 12L, 301L, 324L) */ ((/* 809L, 4L, 13L, 302L, 325L) */ (min (/* 809L, 4L, 13L, 302L, 325L) */ (var_1_2) , (var_1_3)))) + (64u));
	/* 830L, 41L, 299L, 322L) */ if (/* 817L, 10L, 11L, 300L, 323L) */ ((stepLocal_0) != (/* 816L, 9L, 17L, 306L, 329L) */ ((var_1_4) * (var_1_5))))) {
		/* 829L, 40L, 309L, 332L) */ var_1_1 = (
			/* 828L, 39L, 312L, 335L) */ ((
				/* 824L, 35L, 313L, 336L) */ ((
					var_1_6
				) - (
					/* 823L, 34L, 315L, 338L) */ ((
						32
					) + (
						var_1_7
					))
				))
			) - (
				/* 827L, 38L, 318L, 341L) */ ((
					var_1_8
				) - (
					var_1_9
				))
			))
		);
	}


	// From: Req2Batch117Filler_PS_CI
	/* 836L, 72L, 393L, 408L) */ if (/* 837L, 53L, 54L, 394L, 409L) */ ((var_1_7) < (/* 839L, 52L, 56L, 396L, 411L) */ ((/* 840L, 50L, 57L, 397L, 412L) */ ((var_1_8) - (var_1_9))) >> (var_1_11))))) {
		/* 844L, 71L, 401L, 416L) */ var_1_10 = (
			var_1_12
		);
	}


	// From: Req3Batch117Filler_PS_CI
	/* 851L, 97L, 453L, 466L) */ if (/* 852L, 84L, 85L, 454L, 467L) */ ((var_1_8) > (var_1_7))) {
		/* 855L, 96L, 457L, 470L) */ var_1_13 = (
			/* 858L, 95L, 460L, 473L) */ (max (
				/* 858L, 95L, 460L, 473L) */ (
					var_1_11
				) , (
					var_1_14
				)
			))
		);
	}


	// From: Req5Batch117Filler_PS_CI
	signed long int stepLocal_1 = 4;
	/* 906L, 185L, 595L, 616L) */ if (var_1_19) {
		/* 895L, 173L, 597L, 618L) */ if (/* 890L, 162L, 163L, 598L, 619L) */ ((stepLocal_1) > (var_1_9))) {
			/* 894L, 172L, 601L, 622L) */ var_1_18 = (
				var_1_12
			);
		}
	} else {
		/* 905L, 184L, 605L, 626L) */ var_1_18 = (
			/* 904L, 183L, 608L, 629L) */ ((
				/* 900L, 179L, 609L, 630L) */ (max (
					/* 900L, 179L, 609L, 630L) */ (
						var_1_20
					) , (
						var_1_21
					)
				))
			) - (
				/* 903L, 182L, 612L, 633L) */ (max (
					/* 903L, 182L, 612L, 633L) */ (
						var_1_22
					) , (
						var_1_23
					)
				))
			))
		);
	}


	// From: Req6Batch117Filler_PS_CI
	/* 910L, 208L, 679L, 692L) */ if (/* 911L, 193L, 194L, 680L, 693L) */ ((var_1_20) < (var_1_16))) {
		/* 914L, 207L, 683L, 696L) */ var_1_24 = (
			/* 917L, 206L, 686L, 699L) */ ((
				/* 918L, 204L, 687L, 700L) */ ((
					var_1_25
				) - (
					var_1_11
				))
			) - (
				2
			))
		);
	}


	// From: Req4Batch117Filler_PS_CI
	/* 862L, 151L, 503L, 526L) */ if (/* 863L, 114L, 115L, 504L, 527L) */ ((/* 864L, 111L, 116L, 505L, 528L) */ ((/* 865L, 109L, 117L, 506L, 529L) */ ((var_1_18) / (var_1_16))) + (var_1_12))) >= (/* 869L, 113L, 121L, 510L, 533L) */ (abs (var_1_18))))) {
		/* 871L, 135L, 512L, 535L) */ var_1_15 = (
			/* 874L, 134L, 515L, 538L) */ (abs (
				var_1_11
			))
		);
	} else {
		/* 876L, 149L, 517L, 540L) */ if (/* 877L, 138L, 139L, 518L, 541L) */ ((var_1_18) < (var_1_16))) {
			/* 880L, 148L, 521L, 544L) */ var_1_15 = (
				var_1_11
			);
		}
	}


	// From: Req7Batch117Filler_PS_CI
	signed long int stepLocal_2 = /* 924L, 221L, 227L, 736L, 755L) */ ((var_1_15) / (/* 926L, 220L, 229L, 738L, 757L) */ (min (/* 926L, 220L, 229L, 738L, 757L) */ (var_1_25) , (var_1_8)))));
	/* 942L, 249L, 731L, 750L) */ if (/* 933L, 222L, 223L, 732L, 751L) */ ((/* 932L, 216L, 224L, 733L, 752L) */ ((var_1_9) + (var_1_14))) < (stepLocal_2))) {
		/* 941L, 248L, 741L, 760L) */ var_1_26 = (
			/* 940L, 247L, 744L, 763L) */ (min (
				/* 940L, 247L, 744L, 763L) */ (
					/* 938L, 245L, 745L, 764L) */ ((
						var_1_27
					) - (
						var_1_8
					))
				) , (
					var_1_11
				)
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 16382);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 8191);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 16383);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 30);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	assume_abort_if_not(var_1_16 != 0.0F);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 190);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 2147483647);
	assume_abort_if_not(var_1_27 <= 4294967294);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -126);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 32767);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 16383);
	assume_abort_if_not(var_1_40 <= 32767);
	var_1_47 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_47 >= 15);
	assume_abort_if_not(var_1_47 <= 30);
	var_1_48 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 14);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= 63);
	assume_abort_if_not(var_1_51 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 385L, 10L, 20L, 346L, 369L, 947L) */ ((/* 386L, 6L, 21L, 347L, 370L, 948L) */ ((/* 387L, 4L, 22L, 348L, 371L, 949L) */ (min (/* 387L, 4L, 22L, 348L, 371L, 949L) */ (var_1_2) , (var_1_3)))) + (64u))) != (/* 391L, 9L, 26L, 352L, 375L, 953L) */ ((var_1_4) * (var_1_5))))) {
	}
	if (/* 410L, 53L, 61L, 424L, 439L, 972L) */ ((var_1_7) < (/* 412L, 52L, 63L, 426L, 441L, 974L) */ ((/* 413L, 50L, 64L, 427L, 442L, 975L) */ ((var_1_8) - (var_1_9))) >> (var_1_11))))) {
	}
	if (/* 425L, 84L, 88L, 480L, 493L, 987L) */ ((var_1_8) > (var_1_7))) {
	}
	if (/* 436L, 114L, 123L, 550L, 573L, 998L) */ ((/* 437L, 111L, 124L, 551L, 574L, 999L) */ ((/* 438L, 109L, 125L, 552L, 575L, 1000L) */ ((var_1_18) / (var_1_16))) + (var_1_12))) >= (/* 442L, 113L, 129L, 556L, 579L, 1004L) */ (abs (var_1_18))))) {
	} else {
		if (/* 450L, 138L, 142L, 564L, 587L, 1012L) */ ((var_1_18) < (var_1_16))) {
		}
	}
	if (var_1_19) {
		if (/* 461L, 162L, 166L, 640L, 661L, 1023L) */ ((4) > (var_1_9))) {
		}
	} else {
	}
	if (/* 480L, 193L, 197L, 706L, 719L, 1042L) */ ((var_1_20) < (var_1_16))) {
	}
	if (/* 493L, 222L, 232L, 770L, 789L, 1055L) */ ((/* 494L, 216L, 233L, 771L, 790L, 1056L) */ ((var_1_9) + (var_1_14))) < (/* 497L, 221L, 236L, 774L, 793L, 1059L) */ ((var_1_15) / (/* 499L, 220L, 238L, 776L, 795L, 1061L) */ (min (/* 499L, 220L, 238L, 776L, 795L, 1061L) */ (var_1_25) , (var_1_8)))))))) {
	}
	return /* 516L) */ ((
	/* 515L) */ ((
		/* 514L) */ ((
			/* 513L) */ ((
				/* 512L) */ ((
					/* 511L) */ ((
						/* 384L, 42L, 345L, 368L, 946L) */ ((
							/* 385L, 10L, 20L, 346L, 369L, 947L) */ ((
								/* 386L, 6L, 21L, 347L, 370L, 948L) */ ((
									/* 387L, 4L, 22L, 348L, 371L, 949L) */ (min (
										/* 387L, 4L, 22L, 348L, 371L, 949L) */ (
											var_1_2
										) , (
											var_1_3
										)
									))
								) + (
									64u
								))
							) != (
								/* 391L, 9L, 26L, 352L, 375L, 953L) */ ((
									var_1_4
								) * (
									var_1_5
								))
							))
						) ? (
							/* 394L, 40L, 355L, 378L, 956L) */ ((
								var_1_1
							) == (
								/* 394L, 40L, 355L, 378L, 956L) */ ((signed short int) (
									/* 397L, 39L, 358L, 381L, 959L) */ ((
										/* 398L, 35L, 359L, 382L, 960L) */ ((
											var_1_6
										) - (
											/* 400L, 34L, 361L, 384L, 962L) */ ((
												32
											) + (
												var_1_7
											))
										))
									) - (
										/* 403L, 38L, 364L, 387L, 965L) */ ((
											var_1_8
										) - (
											var_1_9
										))
									))
								))
							))
						) : (
							1
						))
					) && (
						/* 409L, 73L, 423L, 438L, 971L) */ ((
							/* 410L, 53L, 61L, 424L, 439L, 972L) */ ((
								var_1_7
							) < (
								/* 412L, 52L, 63L, 426L, 441L, 974L) */ ((
									/* 413L, 50L, 64L, 427L, 442L, 975L) */ ((
										var_1_8
									) - (
										var_1_9
									))
								) >> (
									var_1_11
								))
							))
						) ? (
							/* 417L, 71L, 431L, 446L, 979L) */ ((
								var_1_10
							) == (
								/* 417L, 71L, 431L, 446L, 979L) */ ((float) (
									var_1_12
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 424L, 98L, 479L, 492L, 986L) */ ((
						/* 425L, 84L, 88L, 480L, 493L, 987L) */ ((
							var_1_8
						) > (
							var_1_7
						))
					) ? (
						/* 428L, 96L, 483L, 496L, 990L) */ ((
							var_1_13
						) == (
							/* 428L, 96L, 483L, 496L, 990L) */ ((signed char) (
								/* 431L, 95L, 486L, 499L, 993L) */ (max (
									/* 431L, 95L, 486L, 499L, 993L) */ (
										var_1_11
									) , (
										var_1_14
									)
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 435L, 152L, 549L, 572L, 997L) */ ((
					/* 436L, 114L, 123L, 550L, 573L, 998L) */ ((
						/* 437L, 111L, 124L, 551L, 574L, 999L) */ ((
							/* 438L, 109L, 125L, 552L, 575L, 1000L) */ ((
								var_1_18
							) / (
								var_1_16
							))
						) + (
							var_1_12
						))
					) >= (
						/* 442L, 113L, 129L, 556L, 579L, 1004L) */ (abs (
							var_1_18
						))
					))
				) ? (
					/* 444L, 135L, 558L, 581L, 1006L) */ ((
						var_1_15
					) == (
						/* 444L, 135L, 558L, 581L, 1006L) */ ((signed char) (
							/* 447L, 134L, 561L, 584L, 1009L) */ (abs (
								var_1_11
							))
						))
					))
				) : (
					/* 449L, 150L, 563L, 586L, 1011L) */ ((
						/* 450L, 138L, 142L, 564L, 587L, 1012L) */ ((
							var_1_18
						) < (
							var_1_16
						))
					) ? (
						/* 453L, 148L, 567L, 590L, 1015L) */ ((
							var_1_15
						) == (
							/* 453L, 148L, 567L, 590L, 1015L) */ ((signed char) (
								var_1_11
							))
						))
					) : (
						1
					))
				))
			))
		) && (
			/* 458L, 186L, 637L, 658L, 1020L) */ ((
				var_1_19
			) ? (
				/* 460L, 174L, 639L, 660L, 1022L) */ ((
					/* 461L, 162L, 166L, 640L, 661L, 1023L) */ ((
						4
					) > (
						var_1_9
					))
				) ? (
					/* 464L, 172L, 643L, 664L, 1026L) */ ((
						var_1_18
					) == (
						/* 464L, 172L, 643L, 664L, 1026L) */ ((double) (
							var_1_12
						))
					))
				) : (
					1
				))
			) : (
				/* 468L, 184L, 647L, 668L, 1030L) */ ((
					var_1_18
				) == (
					/* 468L, 184L, 647L, 668L, 1030L) */ ((double) (
						/* 471L, 183L, 650L, 671L, 1033L) */ ((
							/* 472L, 179L, 651L, 672L, 1034L) */ (max (
								/* 472L, 179L, 651L, 672L, 1034L) */ (
									var_1_20
								) , (
									var_1_21
								)
							))
						) - (
							/* 475L, 182L, 654L, 675L, 1037L) */ (max (
								/* 475L, 182L, 654L, 675L, 1037L) */ (
									var_1_22
								) , (
									var_1_23
								)
							))
						))
					))
				))
			))
		))
	) && (
		/* 479L, 209L, 705L, 718L, 1041L) */ ((
			/* 480L, 193L, 197L, 706L, 719L, 1042L) */ ((
				var_1_20
			) < (
				var_1_16
			))
		) ? (
			/* 483L, 207L, 709L, 722L, 1045L) */ ((
				var_1_24
			) == (
				/* 483L, 207L, 709L, 722L, 1045L) */ ((unsigned char) (
					/* 486L, 206L, 712L, 725L, 1048L) */ ((
						/* 487L, 204L, 713L, 726L, 1049L) */ ((
							var_1_25
						) - (
							var_1_11
						))
					) - (
						2
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 492L, 250L, 769L, 788L, 1054L) */ ((
		/* 493L, 222L, 232L, 770L, 789L, 1055L) */ ((
			/* 494L, 216L, 233L, 771L, 790L, 1056L) */ ((
				var_1_9
			) + (
				var_1_14
			))
		) < (
			/* 497L, 221L, 236L, 774L, 793L, 1059L) */ ((
				var_1_15
			) / (
				/* 499L, 220L, 238L, 776L, 795L, 1061L) */ (min (
					/* 499L, 220L, 238L, 776L, 795L, 1061L) */ (
						var_1_25
					) , (
						var_1_8
					)
				))
			))
		))
	) ? (
		/* 502L, 248L, 779L, 798L, 1064L) */ ((
			var_1_26
		) == (
			/* 502L, 248L, 779L, 798L, 1064L) */ ((unsigned long int) (
				/* 505L, 247L, 782L, 801L, 1067L) */ (min (
					/* 505L, 247L, 782L, 801L, 1067L) */ (
						/* 506L, 245L, 783L, 802L, 1068L) */ ((
							var_1_27
						) - (
							var_1_8
						))
					) , (
						var_1_11
					)
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
