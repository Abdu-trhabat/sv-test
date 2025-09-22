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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch8Filler_PR_CI.c", 13, "reach_error"); }
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
float var_1_1 = 999999999.675;
signed long int var_1_4 = -5;
float var_1_5 = 7.875;
float var_1_6 = 99.04;
signed long int var_1_7 = -2;
signed long int var_1_8 = 64;
unsigned long int var_1_9 = 1;
double var_1_10 = 63.25;
unsigned char var_1_11 = 0;
unsigned long int var_1_12 = 16;
float var_1_13 = 24.5;
float var_1_14 = 127.8;
float var_1_15 = 0.5;
float var_1_16 = 7.25;
signed short int var_1_17 = -256;
signed short int var_1_19 = 10;
signed short int var_1_20 = 32;
signed short int var_1_21 = 5;
signed short int var_1_22 = -4;
signed long int var_1_23 = 256;
unsigned char var_1_24 = 0;
unsigned long int var_1_25 = 4;
signed long int var_1_26 = 128;
signed short int var_1_27 = -4;
unsigned short int var_1_33 = 2;
unsigned short int var_1_34 = 32;
unsigned short int var_1_35 = 25;
signed long int var_1_36 = -1;
float var_1_38 = 256.7;
unsigned long int var_1_40 = 10;
double var_1_42 = 100.5;
double var_1_43 = 16.5;
double var_1_44 = 4.875;
signed char var_1_45 = 8;
signed char var_1_47 = 5;
signed char var_1_48 = 10;
signed char var_1_49 = -50;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_9 = 1;
float last_1_var_1_13 = 24.5;
signed long int last_1_var_1_23 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch8Filler_PR_CI
	/* 55L, 23L, 292L, 307L, 945L, 968L) */ if (/* 48L, 6L, 7L, 293L, 308L, 938L, 969L) */ ((last_1_var_1_9) == (/* 47L, 5L, 9L, 295L, 310L, 937L, 972L) */ ((last_1_var_1_23) % (var_1_4))))) {
		/* 54L, 22L, 298L, 313L, 944L, 976L) */ var_1_1 = (
			/* 53L, 21L, 301L, 316L, 943L, 979L) */ ((
				var_1_5
			) - (
				var_1_6
			))
		);
	}


	// From: CodeObject1
	/* 326L, 107L) */ if (/* 327L, 82L, 83L) */ ((var_1_8) != (/* 329L, 81L, 85L) */ ((var_1_21) + (var_1_4))))) {
		/* 332L, 101L) */ if (var_1_11) {
			/* 334L, 100L) */ var_1_27 = (
				/* 337L, 99L) */ (abs (
					var_1_19
				))
			);
		}
	} else {
		/* 339L, 106L) */ var_1_27 = (
			var_1_19
		);
	}


	// From: Req2Batch8Filler_PR_CI
	/* 984L, 47L, 351L, 361L) */ if (/* 985L, 36L, 37L, 352L, 362L) */ ((var_1_1) >= (var_1_6))) {
		/* 988L, 46L, 355L, 365L) */ var_1_7 = (
			var_1_8
		);
	}


	// From: Req3Batch8Filler_PR_CI
	/* 18L, 93L, 391L, 411L, 908L, 994L) */ if (/* 7L, 61L, 62L, 392L, 412L, 897L, 995L) */ ((/* 4L, 59L, 63L, 393L, 413L, 894L, 996L) */ ((/* 2L, 57L, 64L, 394L, 414L, 892L, 997L) */ ((var_1_6) * (var_1_5))) / (var_1_10))) > (last_1_var_1_13))) {
		/* 17L, 91L, 399L, 419L, 907L, 1003L) */ if (var_1_11) {
			/* 12L, 82L, 401L, 421L, 902L, 1005L) */ var_1_9 = (
				var_1_12
			);
		} else {
			/* 16L, 90L, 405L, 425L, 906L, 1009L) */ var_1_9 = (
				0u
			);
		}
	}


	// From: CodeObject4
	/* 370L, 172L) */ var_1_38 = (
		var_1_6
	);


	// From: Req5Batch8Filler_PR_CI
	/* 1053L, 207L, 604L, 637L) */ if (/* 1054L, 162L, 163L, 605L, 638L) */ ((/* 1055L, 160L, 164L, 606L, 639L) */ ((var_1_4) * (var_1_9))) < (var_1_12))) {
		/* 1059L, 182L, 610L, 643L) */ var_1_17 = (
			/* 1062L, 181L, 613L, 646L) */ ((
				/* 1063L, 179L, 614L, 647L) */ ((
					var_1_19
				) - (
					/* 1065L, 178L, 616L, 649L) */ ((
						var_1_20
					) + (
						var_1_21
					))
				))
			) + (
				var_1_22
			))
		);
	} else {
		/* 1069L, 205L, 620L, 653L) */ if (/* 1070L, 185L, 186L, 621L, 654L) */ ((var_1_20) >= (32))) {
			/* 1073L, 203L, 624L, 657L) */ if (var_1_11) {
				/* 1075L, 198L, 626L, 659L) */ var_1_17 = (
					100
				);
			} else {
				/* 1079L, 202L, 630L, 663L) */ var_1_17 = (
					var_1_20
				);
			}
		}
	}


	// From: CodeObject7
	/* 521L, 322L) */ if (/* 522L, 299L, 300L) */ ((/* 523L, 297L, 301L) */ ((var_1_22) % (var_1_4))) < (var_1_25))) {
		/* 527L, 317L) */ var_1_45 = (
			/* 530L, 316L) */ ((
				/* 531L, 314L) */ ((
					var_1_47
				) - (
					var_1_48
				))
			) + (
				var_1_49
			))
		);
	} else {
		/* 535L, 321L) */ var_1_45 = (
			var_1_49
		);
	}


	// From: Req7Batch8Filler_PR_CI
	/* 1113L, 265L, 819L, 825L) */ var_1_24 = (
		2
	);


	// From: CodeObject3
	/* 351L, 165L) */ if (/* 352L, 126L, 127L) */ ((16) < (var_1_9))) {
		/* 355L, 163L) */ if (/* 356L, 135L, 136L) */ ((var_1_34) <= (var_1_9))) {
			/* 359L, 161L) */ if (/* 360L, 146L, 147L) */ ((var_1_35) < (/* 362L, 145L, 149L) */ ((var_1_8) ^ (var_1_20))))) {
				/* 365L, 160L) */ var_1_36 = (
					var_1_9
				);
			}
		}
	}


	// From: Req8Batch8Filler_PR_CI
	/* 1119L, 275L, 843L, 849L) */ var_1_25 = (
		var_1_21
	);


	// From: CodeObject5
	/* 396L, 226L) */ if (/* 397L, 179L, 180L) */ ((var_1_20) <= (var_1_4))) {
		/* 400L, 224L) */ if (/* 401L, 188L, 189L) */ ((var_1_6) < (255.2f))) {
			/* 404L, 222L) */ if (/* 405L, 201L, 202L) */ ((/* 406L, 197L, 203L) */ ((16) <= (var_1_12))) && (/* 409L, 200L, 206L) */ ((var_1_20) >= (var_1_4))))) {
				/* 412L, 221L) */ var_1_40 = (
					/* 415L, 220L) */ (max (
						/* 415L, 220L) */ (
							var_1_34
						) , (
							var_1_12
						)
					))
				);
			}
		}
	}


	// From: Req9Batch8Filler_PR_CI
	/* 1125L, 285L, 867L, 873L) */ var_1_26 = (
		var_1_8
	);


	// From: CodeObject6
	/* 486L, 291L) */ if (/* 487L, 236L, 237L) */ ((var_1_12) < (/* 489L, 235L, 239L) */ (max (/* 489L, 235L, 239L) */ (/* 490L, 233L, 240L) */ (max (/* 490L, 233L, 240L) */ (var_1_34) , (var_1_9)))) , (var_1_35)))))) {
		/* 494L, 254L) */ var_1_42 = (
			var_1_5
		);
	} else {
		/* 498L, 289L) */ if (/* 499L, 257L, 258L) */ ((var_1_14) <= (var_1_5))) {
			/* 502L, 269L) */ var_1_42 = (
				/* 505L, 268L) */ (abs (
					/* 506L, 267L) */ (abs (
						var_1_5
					))
				))
			);
		} else {
			/* 508L, 287L) */ if (/* 509L, 272L, 273L) */ ((var_1_5) <= (var_1_14))) {
				/* 512L, 286L) */ var_1_42 = (
					/* 515L, 285L) */ (max (
						/* 515L, 285L) */ (
							/* 516L, 283L) */ ((
								var_1_43
							) - (
								var_1_44
							))
						) , (
							var_1_5
						)
					))
				);
			}
		}
	}


	// From: Req6Batch8Filler_PR_CI
	signed long int stepLocal_2 = var_1_7;
	unsigned long int stepLocal_1 = var_1_9;
	/* 1107L, 256L, 734L, 755L) */ if (/* 1091L, 219L, 220L, 735L, 756L) */ ((var_1_19) < (stepLocal_2))) {
		/* 1102L, 250L, 738L, 759L) */ if (/* 1093L, 228L, 229L, 739L, 760L) */ ((var_1_25) >= (stepLocal_1))) {
			/* 1101L, 248L, 742L, 763L) */ if (/* 1096L, 237L, 238L, 743L, 764L) */ ((var_1_6) < (var_1_15))) {
				/* 1100L, 247L, 746L, 767L) */ var_1_23 = (
					var_1_21
				);
			}
		}
	} else {
		/* 1106L, 255L, 750L, 771L) */ var_1_23 = (
			var_1_17
		);
	}


	// From: Req4Batch8Filler_PR_CI
	signed long int stepLocal_0 = 128;
	/* 1047L, 152L, 470L, 503L) */ if (/* 1018L, 103L, 104L, 471L, 504L) */ ((stepLocal_0) <= (var_1_23))) {
		/* 1042L, 146L, 474L, 507L) */ if (var_1_11) {
			/* 1029L, 122L, 476L, 509L) */ var_1_13 = (
				/* 1028L, 121L, 479L, 512L) */ ((
					var_1_14
				) + (
					/* 1027L, 120L, 481L, 514L) */ (min (
						/* 1027L, 120L, 481L, 514L) */ (
							/* 1025L, 118L, 482L, 515L) */ (max (
								/* 1025L, 118L, 482L, 515L) */ (
									3.4f
								) , (
									var_1_15
								)
							))
						) , (
							var_1_16
						)
					))
				))
			);
		} else {
			/* 1041L, 144L, 486L, 519L) */ if (/* 1032L, 125L, 126L, 487L, 520L) */ ((var_1_1) < (var_1_16))) {
				/* 1036L, 135L, 490L, 523L) */ var_1_13 = (
					var_1_6
				);
			} else {
				/* 1040L, 143L, 494L, 527L) */ var_1_13 = (
					var_1_15
				);
			}
		}
	} else {
		/* 1046L, 151L, 498L, 531L) */ var_1_13 = (
			var_1_5
		);
	}


	// From: CodeObject2
	/* 343L, 120L) */ if (var_1_11) {
		/* 345L, 119L) */ var_1_33 = (
			/* 348L, 118L) */ (max (
				/* 348L, 118L) */ (
					var_1_34
				) , (
					var_1_35
				)
			))
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483647);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 16383);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 8192);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 8191);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= -16383);
	assume_abort_if_not(var_1_22 <= 16383);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 63);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 63);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -63);
	assume_abort_if_not(var_1_49 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_23 = var_1_23;
}

int property(void) {
	if (/* 542L, 6L, 12L, 323L, 338L, 955L, 1133L, 65L) */ ((last_1_var_1_9) == (/* 545L, 5L, 14L, 325L, 340L, 954L, 1136L, 64L) */ ((last_1_var_1_23) % (var_1_4))))) {
	}
	if (/* 558L, 36L, 40L, 372L, 382L, 1149L) */ ((var_1_1) >= (var_1_6))) {
	}
	if (/* 568L, 61L, 69L, 432L, 452L, 918L, 1159L, 28L) */ ((/* 569L, 59L, 70L, 433L, 453L, 915L, 1160L, 25L) */ ((/* 570L, 57L, 71L, 434L, 454L, 913L, 1161L, 23L) */ ((var_1_6) * (var_1_5))) / (var_1_10))) > (last_1_var_1_13))) {
		if (var_1_11) {
		} else {
		}
	}
	if (/* 588L, 103L, 107L, 537L, 570L, 1179L) */ ((128) <= (var_1_23))) {
		if (var_1_11) {
		} else {
			if (/* 604L, 125L, 129L, 553L, 586L, 1195L) */ ((var_1_1) < (var_1_16))) {
			} else {
			}
		}
	} else {
	}
	if (/* 623L, 162L, 168L, 671L, 704L, 1214L) */ ((/* 624L, 160L, 169L, 672L, 705L, 1215L) */ ((var_1_4) * (var_1_9))) < (var_1_12))) {
	} else {
		if (/* 639L, 185L, 189L, 687L, 720L, 1230L) */ ((var_1_20) >= (32))) {
			if (var_1_11) {
			} else {
			}
		}
	}
	if (/* 654L, 219L, 223L, 777L, 798L, 1245L) */ ((var_1_19) < (var_1_7))) {
		if (/* 658L, 228L, 232L, 781L, 802L, 1249L) */ ((var_1_25) >= (var_1_9))) {
			if (/* 662L, 237L, 241L, 785L, 806L, 1253L) */ ((var_1_6) < (var_1_15))) {
			}
		}
	} else {
	}
	return /* 699L) */ ((
	/* 698L) */ ((
		/* 697L) */ ((
			/* 696L) */ ((
				/* 695L) */ ((
					/* 694L) */ ((
						/* 693L) */ ((
							/* 692L) */ ((
								/* 541L, 24L, 322L, 337L, 962L, 1132L, 72L) */ ((
									/* 542L, 6L, 12L, 323L, 338L, 955L, 1133L, 65L) */ ((
										last_1_var_1_9
									) == (
										/* 545L, 5L, 14L, 325L, 340L, 954L, 1136L, 64L) */ ((
											last_1_var_1_23
										) % (
											var_1_4
										))
									))
								) ? (
									/* 549L, 22L, 328L, 343L, 961L, 1140L, 71L) */ ((
										var_1_1
									) == (
										/* 549L, 22L, 328L, 343L, 961L, 1140L, 71L) */ ((float) (
											/* 552L, 21L, 331L, 346L, 960L, 1143L, 70L) */ ((
												var_1_5
											) - (
												var_1_6
											))
										))
									))
								) : (
									1
								))
							) && (
								/* 557L, 48L, 371L, 381L, 1148L) */ ((
									/* 558L, 36L, 40L, 372L, 382L, 1149L) */ ((
										var_1_1
									) >= (
										var_1_6
									))
								) ? (
									/* 561L, 46L, 375L, 385L, 1152L) */ ((
										var_1_7
									) == (
										/* 561L, 46L, 375L, 385L, 1152L) */ ((signed long int) (
											var_1_8
										))
									))
								) : (
									1
								))
							))
						) && (
							/* 567L, 94L, 431L, 451L, 929L, 1158L, 39L) */ ((
								/* 568L, 61L, 69L, 432L, 452L, 918L, 1159L, 28L) */ ((
									/* 569L, 59L, 70L, 433L, 453L, 915L, 1160L, 25L) */ ((
										/* 570L, 57L, 71L, 434L, 454L, 913L, 1161L, 23L) */ ((
											var_1_6
										) * (
											var_1_5
										))
									) / (
										var_1_10
									))
								) > (
									last_1_var_1_13
								))
							) ? (
								/* 576L, 92L, 439L, 459L, 928L, 1167L, 38L) */ ((
									var_1_11
								) ? (
									/* 578L, 82L, 441L, 461L, 923L, 1169L, 33L) */ ((
										var_1_9
									) == (
										/* 578L, 82L, 441L, 461L, 923L, 1169L, 33L) */ ((unsigned long int) (
											var_1_12
										))
									))
								) : (
									/* 582L, 90L, 445L, 465L, 927L, 1173L, 37L) */ ((
										var_1_9
									) == (
										/* 582L, 90L, 445L, 465L, 927L, 1173L, 37L) */ ((unsigned long int) (
											0u
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 587L, 153L, 536L, 569L, 1178L) */ ((
							/* 588L, 103L, 107L, 537L, 570L, 1179L) */ ((
								128
							) <= (
								var_1_23
							))
						) ? (
							/* 591L, 147L, 540L, 573L, 1182L) */ ((
								var_1_11
							) ? (
								/* 593L, 122L, 542L, 575L, 1184L) */ ((
									var_1_13
								) == (
									/* 593L, 122L, 542L, 575L, 1184L) */ ((float) (
										/* 596L, 121L, 545L, 578L, 1187L) */ ((
											var_1_14
										) + (
											/* 598L, 120L, 547L, 580L, 1189L) */ (min (
												/* 598L, 120L, 547L, 580L, 1189L) */ (
													/* 599L, 118L, 548L, 581L, 1190L) */ (max (
														/* 599L, 118L, 548L, 581L, 1190L) */ (
															3.4f
														) , (
															var_1_15
														)
													))
												) , (
													var_1_16
												)
											))
										))
									))
								))
							) : (
								/* 603L, 145L, 552L, 585L, 1194L) */ ((
									/* 604L, 125L, 129L, 553L, 586L, 1195L) */ ((
										var_1_1
									) < (
										var_1_16
									))
								) ? (
									/* 607L, 135L, 556L, 589L, 1198L) */ ((
										var_1_13
									) == (
										/* 607L, 135L, 556L, 589L, 1198L) */ ((float) (
											var_1_6
										))
									))
								) : (
									/* 611L, 143L, 560L, 593L, 1202L) */ ((
										var_1_13
									) == (
										/* 611L, 143L, 560L, 593L, 1202L) */ ((float) (
											var_1_15
										))
									))
								))
							))
						) : (
							/* 615L, 151L, 564L, 597L, 1206L) */ ((
								var_1_13
							) == (
								/* 615L, 151L, 564L, 597L, 1206L) */ ((float) (
									var_1_5
								))
							))
						))
					))
				) && (
					/* 622L, 208L, 670L, 703L, 1213L) */ ((
						/* 623L, 162L, 168L, 671L, 704L, 1214L) */ ((
							/* 624L, 160L, 169L, 672L, 705L, 1215L) */ ((
								var_1_4
							) * (
								var_1_9
							))
						) < (
							var_1_12
						))
					) ? (
						/* 628L, 182L, 676L, 709L, 1219L) */ ((
							var_1_17
						) == (
							/* 628L, 182L, 676L, 709L, 1219L) */ ((signed short int) (
								/* 631L, 181L, 679L, 712L, 1222L) */ ((
									/* 632L, 179L, 680L, 713L, 1223L) */ ((
										var_1_19
									) - (
										/* 634L, 178L, 682L, 715L, 1225L) */ ((
											var_1_20
										) + (
											var_1_21
										))
									))
								) + (
									var_1_22
								))
							))
						))
					) : (
						/* 638L, 206L, 686L, 719L, 1229L) */ ((
							/* 639L, 185L, 189L, 687L, 720L, 1230L) */ ((
								var_1_20
							) >= (
								32
							))
						) ? (
							/* 642L, 204L, 690L, 723L, 1233L) */ ((
								var_1_11
							) ? (
								/* 644L, 198L, 692L, 725L, 1235L) */ ((
									var_1_17
								) == (
									/* 644L, 198L, 692L, 725L, 1235L) */ ((signed short int) (
										100
									))
								))
							) : (
								/* 648L, 202L, 696L, 729L, 1239L) */ ((
									var_1_17
								) == (
									/* 648L, 202L, 696L, 729L, 1239L) */ ((signed short int) (
										var_1_20
									))
								))
							))
						) : (
							1
						))
					))
				))
			) && (
				/* 653L, 257L, 776L, 797L, 1244L) */ ((
					/* 654L, 219L, 223L, 777L, 798L, 1245L) */ ((
						var_1_19
					) < (
						var_1_7
					))
				) ? (
					/* 657L, 251L, 780L, 801L, 1248L) */ ((
						/* 658L, 228L, 232L, 781L, 802L, 1249L) */ ((
							var_1_25
						) >= (
							var_1_9
						))
					) ? (
						/* 661L, 249L, 784L, 805L, 1252L) */ ((
							/* 662L, 237L, 241L, 785L, 806L, 1253L) */ ((
								var_1_6
							) < (
								var_1_15
							))
						) ? (
							/* 665L, 247L, 788L, 809L, 1256L) */ ((
								var_1_23
							) == (
								/* 665L, 247L, 788L, 809L, 1256L) */ ((signed long int) (
									var_1_21
								))
							))
						) : (
							1
						))
					) : (
						1
					))
				) : (
					/* 669L, 255L, 792L, 813L, 1260L) */ ((
						var_1_23
					) == (
						/* 669L, 255L, 792L, 813L, 1260L) */ ((signed long int) (
							var_1_17
						))
					))
				))
			))
		) && (
			/* 675L, 265L, 831L, 837L, 1266L) */ ((
				var_1_24
			) == (
				/* 675L, 265L, 831L, 837L, 1266L) */ ((unsigned char) (
					2
				))
			))
		))
	) && (
		/* 681L, 275L, 855L, 861L, 1272L) */ ((
			var_1_25
		) == (
			/* 681L, 275L, 855L, 861L, 1272L) */ ((unsigned long int) (
				var_1_21
			))
		))
	))
) && (
	/* 687L, 285L, 879L, 885L, 1278L) */ ((
		var_1_26
	) == (
		/* 687L, 285L, 879L, 885L, 1278L) */ ((signed long int) (
			var_1_8
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
