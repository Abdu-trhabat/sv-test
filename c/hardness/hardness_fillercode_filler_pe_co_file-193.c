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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch193Filler_PE_CO.c", 13, "reach_error"); }
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
float var_1_1 = 1.46;
signed char var_1_2 = 32;
signed long int var_1_3 = -200;
signed long int var_1_4 = -5;
unsigned char var_1_5 = 1;
float var_1_6 = 128.2;
float var_1_7 = 10.6;
unsigned short int var_1_8 = 4;
double var_1_9 = 0.75;
double var_1_10 = 32.6;
signed char var_1_11 = 4;
signed char var_1_12 = 2;
signed char var_1_13 = 8;
signed char var_1_14 = 32;
unsigned long int var_1_15 = 25;
unsigned short int var_1_16 = 128;
unsigned short int var_1_18 = 2;
unsigned short int var_1_19 = 16;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 100;
float var_1_24 = 500.25;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 200;
unsigned char var_1_27 = 5;
unsigned char var_1_28 = 64;
double var_1_29 = 1.45;
double var_1_30 = 8.8;
double var_1_31 = 64.125;
signed short int var_1_32 = 8;
signed short int var_1_33 = 0;
signed long int var_1_35 = 2;
signed long int var_1_36 = 16;
signed short int var_1_38 = -128;
signed short int var_1_39 = 256;
signed short int var_1_40 = 256;
signed short int var_1_41 = -200;
double var_1_42 = 128.7;
signed long int var_1_43 = 2;
unsigned short int var_1_44 = 16;
unsigned short int var_1_46 = 8;
unsigned short int var_1_47 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch193Filler_PE_CO
	/* 929L, 136L, 566L, 574L) */ var_1_15 = (
		/* 932L, 135L, 569L, 577L) */ ((
			3443154167u
		) - (
			var_1_2
		))
	);


	// From: Req6Batch193Filler_PE_CO
	/* 938L, 175L, 599L, 622L) */ if (/* 939L, 145L, 146L, 600L, 623L) */ ((100) <= (var_1_15))) {
		/* 942L, 167L, 603L, 626L) */ if (/* 943L, 154L, 155L, 604L, 627L) */ ((var_1_15) <= (var_1_14))) {
			/* 946L, 166L, 607L, 630L) */ var_1_16 = (
				/* 949L, 165L, 610L, 633L) */ (max (
					/* 949L, 165L, 610L, 633L) */ (
						var_1_2
					) , (
						var_1_18
					)
				))
			);
		}
	} else {
		/* 952L, 174L, 613L, 636L) */ var_1_16 = (
			/* 955L, 173L, 616L, 639L) */ ((
				var_1_2
			) + (
				var_1_19
			))
		);
	}


	// From: Req7Batch193Filler_PE_CO
	/* 960L, 199L, 690L, 701L) */ if (/* 961L, 187L, 188L, 691L, 702L) */ ((var_1_5) || (var_1_21))) {
		/* 964L, 198L, 694L, 705L) */ var_1_20 = (
			/* 967L, 197L, 697L, 708L) */ (! (
				var_1_22
			))
		);
	}


	// From: Req8Batch193Filler_PE_CO
	signed char stepLocal_1 = var_1_2;
	/* 1001L, 251L, 733L, 764L) */ if (/* 977L, 209L, 210L, 734L, 765L) */ ((var_1_7) >= (/* 976L, 208L, 212L, 736L, 767L) */ ((4.125f) / (var_1_24))))) {
		/* 983L, 225L, 739L, 770L) */ var_1_23 = (
			/* 982L, 224L, 742L, 773L) */ ((
				var_1_25
			) - (
				var_1_2
			))
		);
	} else {
		/* 1000L, 249L, 745L, 776L) */ if (/* 985L, 228L, 229L, 746L, 777L) */ ((var_1_25) < (stepLocal_1))) {
			/* 995L, 244L, 749L, 780L) */ var_1_23 = (
				/* 994L, 243L, 752L, 783L) */ ((
					/* 990L, 239L, 753L, 784L) */ ((
						var_1_26
					) - (
						var_1_27
					))
				) - (
					/* 993L, 242L, 756L, 787L) */ (max (
						/* 993L, 242L, 756L, 787L) */ (
							var_1_2
						) , (
							var_1_28
						)
					))
				))
			);
		} else {
			/* 999L, 248L, 759L, 790L) */ var_1_23 = (
				var_1_28
			);
		}
	}


	// From: Req1Batch193Filler_PE_CO
	signed long int stepLocal_0 = /* 858L, 4L, 10L, 299L, 319L) */ ((-1) - (var_1_2));
	/* 877L, 39L, 297L, 317L) */ if (/* 865L, 8L, 9L, 298L, 318L) */ ((stepLocal_0) > (/* 864L, 7L, 13L, 302L, 322L) */ ((var_1_3) + (var_1_4))))) {
		/* 872L, 33L, 305L, 325L) */ if (/* 867L, 24L, 25L, 306L, 326L) */ (! (var_1_20))) {
			/* 871L, 32L, 308L, 328L) */ var_1_1 = (
				var_1_6
			);
		}
	} else {
		/* 876L, 38L, 312L, 332L) */ var_1_1 = (
			var_1_7
		);
	}


	// From: Req2Batch193Filler_PE_CO
	/* 885L, 58L, 381L, 394L) */ if (/* 886L, 47L, 48L, 382L, 395L) */ ((var_1_15) <= (var_1_2))) {
		/* 889L, 57L, 385L, 398L) */ var_1_8 = (
			var_1_2
		);
	}


	// From: Req3Batch193Filler_PE_CO
	/* 896L, 101L, 431L, 453L) */ if (var_1_20) {
		/* 898L, 95L, 433L, 455L) */ if (/* 899L, 78L, 79L, 434L, 456L) */ ((var_1_16) <= (/* 901L, 77L, 81L, 436L, 458L) */ (- (var_1_15))))) {
			/* 903L, 94L, 438L, 460L) */ var_1_9 = (
				/* 906L, 93L, 441L, 463L) */ (min (
					/* 906L, 93L, 441L, 463L) */ (
						var_1_7
					) , (
						/* 908L, 92L, 443L, 465L) */ (min (
							/* 908L, 92L, 443L, 465L) */ (
								var_1_6
							) , (
								var_1_10
							)
						))
					)
				))
			);
		}
	} else {
		/* 911L, 100L, 446L, 468L) */ var_1_9 = (
			var_1_10
		);
	}


	// From: Req4Batch193Filler_PE_CO
	/* 916L, 125L, 517L, 529L) */ if (/* 917L, 112L, 113L, 518L, 530L) */ (! (var_1_20))) {
		/* 919L, 124L, 520L, 532L) */ var_1_11 = (
			/* 922L, 123L, 523L, 535L) */ (max (
				/* 922L, 123L, 523L, 535L) */ (
					var_1_12
				) , (
					/* 924L, 122L, 525L, 537L) */ ((
						var_1_13
					) + (
						var_1_14
					))
				)
			))
		);
	}


	// From: CodeObject1
	/* 250L, 5L) */ var_1_29 = (
		var_1_30
	);


	// From: CodeObject2
	/* 254L, 35L) */ if (/* 255L, 16L, 17L) */ ((/* 256L, 14L, 18L) */ ((/* 257L, 12L, 19L) */ ((var_1_32) - (var_1_33))) ^ (var_1_15))) < (var_1_15))) {
		/* 262L, 34L) */ var_1_31 = (
			var_1_30
		);
	}


	// From: CodeObject3
	/* 266L, 114L) */ if (/* 267L, 41L, 42L) */ ((var_1_30) > (var_1_9))) {
		/* 270L, 52L) */ var_1_36 = (
			/* 273L, 51L) */ (abs (
				var_1_15
			))
		);
	} else {
		/* 275L, 112L) */ if (/* 276L, 59L, 60L) */ ((var_1_20) || (/* 278L, 58L, 62L) */ ((var_1_15) > (/* 280L, 57L, 64L) */ ((var_1_15) + (var_1_32))))))) {
			/* 283L, 83L) */ var_1_36 = (
				/* 286L, 82L) */ ((
					/* 287L, 78L) */ (abs (
						/* 288L, 77L) */ (abs (
							var_1_15
						))
					))
				) + (
					/* 290L, 81L) */ ((
						var_1_33
					) + (
						var_1_32
					))
				))
			);
		} else {
			/* 293L, 110L) */ if (/* 294L, 86L, 87L) */ ((var_1_32) >= (var_1_33))) {
				/* 297L, 104L) */ if (var_1_20) {
					/* 299L, 99L) */ var_1_36 = (
						var_1_32
					);
				} else {
					/* 303L, 103L) */ var_1_36 = (
						var_1_15
					);
				}
			} else {
				/* 307L, 109L) */ var_1_36 = (
					var_1_32
				);
			}
		}
	}


	// From: CodeObject4
	/* 327L, 148L) */ if (/* 328L, 122L, 123L) */ ((var_1_9) <= (/* 330L, 121L, 125L) */ ((var_1_30) * (var_1_9))))) {
		/* 333L, 146L) */ if (/* 334L, 135L, 136L) */ ((var_1_35) < (var_1_8))) {
			/* 337L, 145L) */ var_1_38 = (
				var_1_39
			);
		}
	}


	// From: CodeObject5
	/* 341L, 178L) */ if (/* 342L, 159L, 160L) */ ((/* 343L, 157L, 161L) */ (max (/* 343L, 157L, 161L) */ (/* 344L, 155L, 162L) */ (- (var_1_30))) , (var_1_9)))) >= (var_1_9))) {
		/* 348L, 177L) */ var_1_40 = (
			/* 351L, 176L) */ (min (
				/* 351L, 176L) */ (
					var_1_39
				) , (
					var_1_41
				)
			))
		);
	}


	// From: CodeObject6
	/* 354L, 207L) */ if (/* 355L, 188L, 189L) */ ((16) < (/* 357L, 187L, 191L) */ ((25) | (/* 359L, 186L, 193L) */ ((var_1_32) % (var_1_43))))))) {
		/* 362L, 206L) */ var_1_42 = (
			var_1_30
		);
	}


	// From: CodeObject7
	/* 366L, 247L) */ if (/* 367L, 218L, 219L) */ ((/* 368L, 214L, 220L) */ (abs (/* 369L, 213L, 221L) */ ((500.2f) + (var_1_9))))) > (/* 372L, 217L, 224L) */ (min (/* 372L, 217L, 224L) */ (var_1_9) , (var_1_30)))))) {
		/* 375L, 242L) */ var_1_44 = (
			/* 378L, 241L) */ (min (
				/* 378L, 241L) */ (
					var_1_33
				) , (
					/* 380L, 240L) */ (max (
						/* 380L, 240L) */ (
							var_1_46
						) , (
							var_1_47
						)
					))
				)
			))
		);
	} else {
		/* 383L, 246L) */ var_1_44 = (
			var_1_46
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 65534);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	assume_abort_if_not(var_1_24 != 0.0F);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 127);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 190);
	assume_abort_if_not(var_1_26 <= 254);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -1);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 32767);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483648);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_39 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_39 >= -32767);
	assume_abort_if_not(var_1_39 <= 32766);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= -32767);
	assume_abort_if_not(var_1_41 <= 32766);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -2147483648);
	assume_abort_if_not(var_1_43 <= 2147483647);
	assume_abort_if_not(var_1_43 != 0);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 65534);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 388L, 8L, 16L, 338L, 358L, 1006L) */ ((/* 389L, 4L, 17L, 339L, 359L, 1007L) */ ((-1) - (var_1_2))) > (/* 392L, 7L, 20L, 342L, 362L, 1010L) */ ((var_1_3) + (var_1_4))))) {
		if (/* 396L, 24L, 27L, 346L, 366L, 1014L) */ (! (var_1_20))) {
		}
	} else {
	}
	if (/* 412L, 47L, 51L, 408L, 421L, 1030L) */ ((var_1_15) <= (var_1_2))) {
	}
	if (var_1_20) {
		if (/* 425L, 78L, 83L, 478L, 500L, 1043L) */ ((var_1_16) <= (/* 427L, 77L, 85L, 480L, 502L, 1045L) */ (- (var_1_15))))) {
		}
	} else {
	}
	if (/* 443L, 112L, 115L, 542L, 554L, 1061L) */ (! (var_1_20))) {
	}
	if (/* 465L, 145L, 149L, 646L, 669L, 1083L) */ ((100) <= (var_1_15))) {
		if (/* 469L, 154L, 158L, 650L, 673L, 1087L) */ ((var_1_15) <= (var_1_14))) {
		}
	} else {
	}
	if (/* 487L, 187L, 191L, 713L, 724L, 1105L) */ ((var_1_5) || (var_1_21))) {
	}
	if (/* 497L, 209L, 215L, 796L, 827L, 1115L) */ ((var_1_7) >= (/* 499L, 208L, 217L, 798L, 829L, 1117L) */ ((4.125f) / (var_1_24))))) {
	} else {
		if (/* 509L, 228L, 232L, 808L, 839L, 1127L) */ ((var_1_25) < (var_1_2))) {
		} else {
		}
	}
	return /* 533L) */ ((
	/* 532L) */ ((
		/* 531L) */ ((
			/* 530L) */ ((
				/* 529L) */ ((
					/* 528L) */ ((
						/* 527L) */ ((
							/* 387L, 40L, 337L, 357L, 1005L) */ ((
								/* 388L, 8L, 16L, 338L, 358L, 1006L) */ ((
									/* 389L, 4L, 17L, 339L, 359L, 1007L) */ ((
										-1
									) - (
										var_1_2
									))
								) > (
									/* 392L, 7L, 20L, 342L, 362L, 1010L) */ ((
										var_1_3
									) + (
										var_1_4
									))
								))
							) ? (
								/* 395L, 34L, 345L, 365L, 1013L) */ ((
									/* 396L, 24L, 27L, 346L, 366L, 1014L) */ (! (
										var_1_20
									))
								) ? (
									/* 398L, 32L, 348L, 368L, 1016L) */ ((
										var_1_1
									) == (
										/* 398L, 32L, 348L, 368L, 1016L) */ ((float) (
											var_1_6
										))
									))
								) : (
									1
								))
							) : (
								/* 402L, 38L, 352L, 372L, 1020L) */ ((
									var_1_1
								) == (
									/* 402L, 38L, 352L, 372L, 1020L) */ ((float) (
										var_1_7
									))
								))
							))
						) && (
							/* 411L, 59L, 407L, 420L, 1029L) */ ((
								/* 412L, 47L, 51L, 408L, 421L, 1030L) */ ((
									var_1_15
								) <= (
									var_1_2
								))
							) ? (
								/* 415L, 57L, 411L, 424L, 1033L) */ ((
									var_1_8
								) == (
									/* 415L, 57L, 411L, 424L, 1033L) */ ((unsigned short int) (
										var_1_2
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 422L, 102L, 475L, 497L, 1040L) */ ((
							var_1_20
						) ? (
							/* 424L, 96L, 477L, 499L, 1042L) */ ((
								/* 425L, 78L, 83L, 478L, 500L, 1043L) */ ((
									var_1_16
								) <= (
									/* 427L, 77L, 85L, 480L, 502L, 1045L) */ (- (
										var_1_15
									))
								))
							) ? (
								/* 429L, 94L, 482L, 504L, 1047L) */ ((
									var_1_9
								) == (
									/* 429L, 94L, 482L, 504L, 1047L) */ ((double) (
										/* 432L, 93L, 485L, 507L, 1050L) */ (min (
											/* 432L, 93L, 485L, 507L, 1050L) */ (
												var_1_7
											) , (
												/* 434L, 92L, 487L, 509L, 1052L) */ (min (
													/* 434L, 92L, 487L, 509L, 1052L) */ (
														var_1_6
													) , (
														var_1_10
													)
												))
											)
										))
									))
								))
							) : (
								1
							))
						) : (
							/* 437L, 100L, 490L, 512L, 1055L) */ ((
								var_1_9
							) == (
								/* 437L, 100L, 490L, 512L, 1055L) */ ((double) (
									var_1_10
								))
							))
						))
					))
				) && (
					/* 442L, 126L, 541L, 553L, 1060L) */ ((
						/* 443L, 112L, 115L, 542L, 554L, 1061L) */ (! (
							var_1_20
						))
					) ? (
						/* 445L, 124L, 544L, 556L, 1063L) */ ((
							var_1_11
						) == (
							/* 445L, 124L, 544L, 556L, 1063L) */ ((signed char) (
								/* 448L, 123L, 547L, 559L, 1066L) */ (max (
									/* 448L, 123L, 547L, 559L, 1066L) */ (
										var_1_12
									) , (
										/* 450L, 122L, 549L, 561L, 1068L) */ ((
											var_1_13
										) + (
											var_1_14
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
				/* 455L, 136L, 582L, 590L, 1073L) */ ((
					var_1_15
				) == (
					/* 455L, 136L, 582L, 590L, 1073L) */ ((unsigned long int) (
						/* 458L, 135L, 585L, 593L, 1076L) */ ((
							3443154167u
						) - (
							var_1_2
						))
					))
				))
			))
		) && (
			/* 464L, 176L, 645L, 668L, 1082L) */ ((
				/* 465L, 145L, 149L, 646L, 669L, 1083L) */ ((
					100
				) <= (
					var_1_15
				))
			) ? (
				/* 468L, 168L, 649L, 672L, 1086L) */ ((
					/* 469L, 154L, 158L, 650L, 673L, 1087L) */ ((
						var_1_15
					) <= (
						var_1_14
					))
				) ? (
					/* 472L, 166L, 653L, 676L, 1090L) */ ((
						var_1_16
					) == (
						/* 472L, 166L, 653L, 676L, 1090L) */ ((unsigned short int) (
							/* 475L, 165L, 656L, 679L, 1093L) */ (max (
								/* 475L, 165L, 656L, 679L, 1093L) */ (
									var_1_2
								) , (
									var_1_18
								)
							))
						))
					))
				) : (
					1
				))
			) : (
				/* 478L, 174L, 659L, 682L, 1096L) */ ((
					var_1_16
				) == (
					/* 478L, 174L, 659L, 682L, 1096L) */ ((unsigned short int) (
						/* 481L, 173L, 662L, 685L, 1099L) */ ((
							var_1_2
						) + (
							var_1_19
						))
					))
				))
			))
		))
	) && (
		/* 486L, 200L, 712L, 723L, 1104L) */ ((
			/* 487L, 187L, 191L, 713L, 724L, 1105L) */ ((
				var_1_5
			) || (
				var_1_21
			))
		) ? (
			/* 490L, 198L, 716L, 727L, 1108L) */ ((
				var_1_20
			) == (
				/* 490L, 198L, 716L, 727L, 1108L) */ ((unsigned char) (
					/* 493L, 197L, 719L, 730L, 1111L) */ (! (
						var_1_22
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 496L, 252L, 795L, 826L, 1114L) */ ((
		/* 497L, 209L, 215L, 796L, 827L, 1115L) */ ((
			var_1_7
		) >= (
			/* 499L, 208L, 217L, 798L, 829L, 1117L) */ ((
				4.125f
			) / (
				var_1_24
			))
		))
	) ? (
		/* 502L, 225L, 801L, 832L, 1120L) */ ((
			var_1_23
		) == (
			/* 502L, 225L, 801L, 832L, 1120L) */ ((unsigned char) (
				/* 505L, 224L, 804L, 835L, 1123L) */ ((
					var_1_25
				) - (
					var_1_2
				))
			))
		))
	) : (
		/* 508L, 250L, 807L, 838L, 1126L) */ ((
			/* 509L, 228L, 232L, 808L, 839L, 1127L) */ ((
				var_1_25
			) < (
				var_1_2
			))
		) ? (
			/* 512L, 244L, 811L, 842L, 1130L) */ ((
				var_1_23
			) == (
				/* 512L, 244L, 811L, 842L, 1130L) */ ((unsigned char) (
					/* 515L, 243L, 814L, 845L, 1133L) */ ((
						/* 516L, 239L, 815L, 846L, 1134L) */ ((
							var_1_26
						) - (
							var_1_27
						))
					) - (
						/* 519L, 242L, 818L, 849L, 1137L) */ (max (
							/* 519L, 242L, 818L, 849L, 1137L) */ (
								var_1_2
							) , (
								var_1_28
							)
						))
					))
				))
			))
		) : (
			/* 522L, 248L, 821L, 852L, 1140L) */ ((
				var_1_23
			) == (
				/* 522L, 248L, 821L, 852L, 1140L) */ ((unsigned char) (
					var_1_28
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
